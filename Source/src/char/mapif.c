/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|      Source Script                             |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: Hercules Emulator                                    |
| - Copyright: Athena (Original Emulator)                           |
\*-----------------------------------------------------------------*/

#define MAIN_CORE

#include "config/core.h" // GP_BOUND_ITEMS

#include "mapif.h"

#include "char/char.h"
#include "char/int_auction.h"
#include "char/int_clan.h"
#include "char/int_guild.h"
#include "char/int_homun.h"
#include "char/int_elemental.h"
#include "char/int_mail.h"
#include "char/int_mercenary.h"
#include "char/int_party.h"
#include "char/int_pet.h"
#include "char/int_quest.h"
#include "char/int_rodex.h"
#include "char/int_storage.h"
#include "char/inter.h"

#include "common/cbasetypes.h"
#include "common/memmgr.h"
#include "common/mmo.h"
#include "common/nullpo.h"
#include "common/random.h"
#include "common/showmsg.h"
#include "common/socket.h"
#include "common/sql.h"
#include "common/strlib.h"

#include <stdlib.h>

void mapif_ban(int id, unsigned int flag, int status) {
	// send to all map-servers to disconnect the player
	unsigned char buf[11];
	WBUFW(buf,0) = 0x2b14;
	WBUFL(buf,2) = id;
	WBUFB(buf,6) = flag; // 0: change of status, 1: ban
	WBUFL(buf,7) = status; // status or final date of a banishment
	mapif->sendall(buf, 11);
}

/// Initializes a server structure.
void mapif_server_init(int id) {
	//memset(&chr->server[id], 0, sizeof(server[id]));
	chr->server[id].fd = -1;
}

/// Destroys a server structure.
void mapif_server_destroy(int id) {
	if (chr->server[id].fd == -1) {
		sockt->close(chr->server[id].fd);
		chr->server[id].fd = -1;
	}
}

/// Resets all the data related to a server.
void mapif_server_reset(int id) {
	int i, j;
	unsigned char buf[16384];
	int fd = chr->server[id].fd;
	//Notify other map servers that this one is gone. [Skotlex]
	WBUFW(buf, 0) = 0x2b20;
	WBUFL(buf, 4) = htonl(chr->server[id].ip);
	WBUFW(buf, 8) = htons(chr->server[id].port);
	j = 0;
	for (i = 0; i < VECTOR_LENGTH(chr->server[id].maps); i++) {
		uint16 m = VECTOR_INDEX(chr->server[id].maps, i);
		if (m != 0)
			WBUFW(buf, 10 + (j++) * 4) = m;
	}
	if (j > 0) {
		WBUFW(buf, 2) = j * 4 + 10;
		mapif->sendallwos(fd, buf, WBUFW(buf, 2));
	}
	if (SQL_ERROR == SQL->Query(inter->sql_handle, "DELETE FROM `%s` WHERE `index`='%d'", ragsrvinfo_db, chr->server[id].fd))
		Sql_ShowDebug(inter->sql_handle);
	chr->online_char_db->foreach(chr->online_char_db, chr->db_setoffline, id); //Tag relevant chars as 'in disconnected' server.
	mapif->server_destroy(id);
	mapif->server_init(id);
}

/// Called when the connection to a Map Server is disconnected.
void mapif_on_disconnect(int id) {
	ShowStatus("Map-server #%d desconectado.\n", id);
	mapif->server_reset(id);
}

void mapif_on_parse_accinfo(int account_id, int u_fd, int u_aid, int u_group, int map_fd) {
	Assert_retv(chr->login_fd > 0);
	WFIFOHEAD(chr->login_fd, 22);
	WFIFOW(chr->login_fd, 0) = 0x2740;
	WFIFOL(chr->login_fd, 2) = account_id;
	WFIFOL(chr->login_fd, 6) = u_fd;
	WFIFOL(chr->login_fd, 10) = u_aid;
	WFIFOL(chr->login_fd, 14) = u_group;
	WFIFOL(chr->login_fd, 18) = map_fd;
	WFIFOSET(chr->login_fd, 22);
}

void mapif_char_ban(int char_id, time_t timestamp) {
	unsigned char buf[11];
	WBUFW(buf, 0) = 0x2b14;
	WBUFL(buf, 2) = char_id;
	WBUFB(buf, 6) = 2;
	WBUFL(buf, 7) = (unsigned int)timestamp;
	mapif->sendall(buf, 11);
}

int mapif_sendall(const unsigned char *buf, unsigned int len) {
	int i, c;

	nullpo_ret(buf);
	c = 0;
	for (i = 0; i < ARRAYLENGTH(chr->server); i++) {
		int fd;
		if ((fd = chr->server[i].fd) > 0) {
			WFIFOHEAD(fd, len);
			memcpy(WFIFOP(fd, 0), buf, len);
			WFIFOSET(fd, len);
			c++;
		}
	}

	return c;
}

int mapif_sendallwos(int sfd, unsigned char *buf, unsigned int len) {
	int i, c;

	nullpo_ret(buf);
	c = 0;
	for (i = 0; i < ARRAYLENGTH(chr->server); i++) {
		int fd;
		if ((fd = chr->server[i].fd) > 0 && fd != sfd) {
			WFIFOHEAD(fd, len);
			memcpy(WFIFOP(fd, 0), buf, len);
			WFIFOSET(fd, len);
			c++;
		}
	}

	return c;
}

int mapif_send(int fd, unsigned char *buf, unsigned int len) {
	nullpo_ret(buf);
	if (fd >= 0) {
		int i;
		ARR_FIND (0, ARRAYLENGTH(chr->server), i, fd == chr->server[i].fd);
		if (i < ARRAYLENGTH(chr->server)) {
			WFIFOHEAD(fd, len);
			memcpy(WFIFOP(fd, 0), buf, len);
			WFIFOSET(fd, len);
			return 1;
		}
	}
	return 0;
}

void mapif_send_users_count(int users) {
	uint8 buf[6];
	// send number of players to all map-servers
	WBUFW(buf, 0) = 0x2b00;
	WBUFL(buf, 2) = users;
	mapif->sendall(buf, 6);
}

/*
 * INT_AUCTION
 */
void mapif_auction_message(int char_id, unsigned char result) {
	unsigned char buf[74];

	WBUFW(buf,0) = 0x3854;
	WBUFL(buf,2) = char_id;
	WBUFL(buf,6) = result;
	mapif->sendall(buf,7);
}

void mapif_auction_sendlist(int fd, int char_id, short count, short pages, const struct auction_data *auctions) {
	int len = (sizeof(struct auction_data) * count) + 12;

	nullpo_retv(auctions);

	WFIFOHEAD(fd, len);
	WFIFOW(fd,0) = 0x3850;
	WFIFOW(fd,2) = len;
	WFIFOL(fd,4) = char_id;
	WFIFOW(fd,8) = count;
	WFIFOW(fd,10) = pages;
	memcpy(WFIFOP(fd,12), auctions, len - 12);
	WFIFOSET(fd,len);
}

void mapif_parse_auction_requestlist(int fd) {
	char searchtext[NAME_LENGTH];
	int char_id = RFIFOL(fd,4);
	int price = RFIFOL(fd,10);
	short type = RFIFOW(fd,8), page = max(1,RFIFOW(fd,14));
	struct auction_data auctions[5];
	struct DBIterator *iter = db_iterator(inter_auction->db);
	struct auction_data *auction;
	short i = 0, j = 0, pages = 1;

	memcpy(searchtext, RFIFOP(fd,16), NAME_LENGTH);

	for( auction = dbi_first(iter); dbi_exists(iter); auction = dbi_next(iter) ) {
		if( (type == 0 && auction->type != IT_ARMOR && auction->type != IT_PETARMOR) ||
			(type == 1 && auction->type != IT_WEAPON) ||
			(type == 2 && auction->type != IT_CARD) ||
			(type == 3 && auction->type != IT_ETC) ||
			(type == 4 && !strstr(auction->item_name, searchtext)) ||
			(type == 5 && auction->price > price) ||
			(type == 6 && auction->seller_id != char_id) ||
			(type == 7 && auction->buyer_id != char_id) )
			continue;

		i++;
		if( i > 5 ) { // Counting Pages of Total Results (5 Results per Page)
			pages++;
			i = 1; // First Result of This Page
		}
		if( page != pages ) {
			continue; // This is not the requested Page
		}
		auctions[j] = *auction;
		j++; // Found Results
	}
	dbi_destroy(iter);
	mapif->auction_sendlist(fd, char_id, j, pages, auctions);
}

void mapif_auction_register(int fd, struct auction_data *auction) {
	int len = sizeof(struct auction_data) + 4;

	nullpo_retv(auction);

	WFIFOHEAD(fd,len);
	WFIFOW(fd,0) = 0x3851;
	WFIFOW(fd,2) = len;
	memcpy(WFIFOP(fd,4), auction, sizeof(struct auction_data));
	WFIFOSET(fd,len);
}

void mapif_parse_auction_register(int fd) {
	struct auction_data auction;
	if( RFIFOW(fd,2) != sizeof(struct auction_data) + 4 )
		return;

	memcpy(&auction, RFIFOP(fd,4), sizeof(struct auction_data));
	if( inter_auction->count(auction.seller_id, false) < 5 )
		auction.auction_id = inter_auction->create(&auction);

	mapif->auction_register(fd, &auction);
}

void mapif_auction_cancel(int fd, int char_id, unsigned char result) {
	WFIFOHEAD(fd,7);
	WFIFOW(fd,0) = 0x3852;
	WFIFOL(fd,2) = char_id;
	WFIFOB(fd,6) = result;
	WFIFOSET(fd,7);
}

void mapif_parse_auction_cancel(int fd) {
	int char_id = RFIFOL(fd,2), auction_id = RFIFOL(fd,6);
	struct auction_data *auction;

	if( (auction = (struct auction_data *)idb_get(inter_auction->db, auction_id)) == NULL ) {
		mapif->auction_cancel(fd, char_id, 1); // Bid Number is Incorrect
		return;
	}

	if( auction->seller_id != char_id ) {
		mapif->auction_cancel(fd, char_id, 2); // You cannot end the auction
		return;
	}

	if( auction->buyer_id > 0 ) {
		mapif->auction_cancel(fd, char_id, 3); // An auction with at least one bidder cannot be canceled
		return;
	}

	inter_mail->sendmail(0, "Sistema do Leil�o", auction->seller_id, auction->seller_name, "Auction", "Leil�o Cancelado.", 0, &auction->item);
	inter_auction->delete_(auction);

	mapif->auction_cancel(fd, char_id, 0); // The auction has been canceled
}

void mapif_auction_close(int fd, int char_id, unsigned char result) {
	WFIFOHEAD(fd,7);
	WFIFOW(fd,0) = 0x3853;
	WFIFOL(fd,2) = char_id;
	WFIFOB(fd,6) = result;
	WFIFOSET(fd,7);
}

void mapif_parse_auction_close(int fd) {
	int char_id = RFIFOL(fd,2), auction_id = RFIFOL(fd,6);
	struct auction_data *auction;

	if( (auction = (struct auction_data *)idb_get(inter_auction->db, auction_id)) == NULL ) {
		mapif->auction_close(fd, char_id, 2); // Bid Number is Incorrect
		return;
	}

	if( auction->seller_id != char_id ) {
		mapif->auction_close(fd, char_id, 1); // You cannot end the auction
		return;
	}

	if( auction->buyer_id == 0 ) {
		mapif->auction_close(fd, char_id, 1); // You cannot end the auction
		return;
	}

	// Send Money to Seller
	inter_mail->sendmail(0, "Sistema do Leil�o", auction->seller_id, auction->seller_name, "Auction", "Leil�o Fechado.", auction->price, NULL);
	// Send Item to Buyer
	inter_mail->sendmail(0, "Sistema do Leil�o", auction->buyer_id, auction->buyer_name, "Auction", "Leil�o Vencedor.", 0, &auction->item);
	mapif->auction_message(auction->buyer_id, 6); // You have won the auction
	inter_auction->delete_(auction);

	mapif->auction_close(fd, char_id, 0); // You have ended the auction
}

void mapif_auction_bid(int fd, int char_id, int bid, unsigned char result) {
	WFIFOHEAD(fd,11);
	WFIFOW(fd,0) = 0x3855;
	WFIFOL(fd,2) = char_id;
	WFIFOL(fd,6) = bid; // To Return Zeny
	WFIFOB(fd,10) = result;
	WFIFOSET(fd,11);
}

void mapif_parse_auction_bid(int fd) {
	int char_id = RFIFOL(fd,4), bid = RFIFOL(fd,12);
	unsigned int auction_id = RFIFOL(fd,8);
	struct auction_data *auction;

	if( (auction = (struct auction_data *)idb_get(inter_auction->db, auction_id)) == NULL || auction->price >= bid || auction->seller_id == char_id ) {
		mapif->auction_bid(fd, char_id, bid, 0); // You have failed to bid in the auction
		return;
	}

	if( inter_auction->count(char_id, true) > 4 && bid < auction->buynow && auction->buyer_id != char_id ) {
		mapif->auction_bid(fd, char_id, bid, 9); // You cannot place more than 5 bids at a time
		return;
	}

	if( auction->buyer_id > 0 ) { // Send Money back to the previous Buyer
		if( auction->buyer_id != char_id )
		{
			inter_mail->sendmail(0, "Sistema do Leil�o", auction->buyer_id, auction->buyer_name, "Auction", "Algu�m colocou uma oferta maior.", auction->price, NULL);
			mapif->auction_message(auction->buyer_id, 7); // You have failed to win the auction
		}
		else
			inter_mail->sendmail(0, "Sistema do Leil�o", auction->buyer_id, auction->buyer_name, "Auction", "Algu�m colocou uma oferta maior.", auction->price, NULL);
	}

	auction->buyer_id = char_id;
	safestrncpy(auction->buyer_name, RFIFOP(fd,16), NAME_LENGTH);
	auction->price = bid;

	if( bid >= auction->buynow ) { // Automatic won the auction
		mapif->auction_bid(fd, char_id, bid - auction->buynow, 1); // You have successfully bid in the auction

		inter_mail->sendmail(0, "Sistema do Leil�o", auction->buyer_id, auction->buyer_name, "Auction", "Voc� ganhou o leil�o.", 0, &auction->item);
		mapif->auction_message(char_id, 6); // You have won the auction
		inter_mail->sendmail(0, "Sistema do Leil�o", auction->seller_id, auction->seller_name, "Auction", "Pagamento por seu leil�o!.", auction->buynow, NULL);

		inter_auction->delete_(auction);
		return;
	}

	inter_auction->save(auction);

	mapif->auction_bid(fd, char_id, 0, 1); // You have successfully bid in the auction
}

/* ******************
 * INT_ELEMENTAL
 ****************** */
void mapif_elemental_send(int fd, struct s_elemental *ele, unsigned char flag) {
	int size = sizeof(struct s_elemental) + 5;

	nullpo_retv(ele);
	WFIFOHEAD(fd,size);
	WFIFOW(fd,0) = 0x387c;
	WFIFOW(fd,2) = size;
	WFIFOB(fd,4) = flag;
	memcpy(WFIFOP(fd,5),ele,sizeof(struct s_elemental));
	WFIFOSET(fd,size);
}

void mapif_parse_elemental_create(int fd, const struct s_elemental *ele) {
	struct s_elemental ele_;
	bool result;

	memcpy(&ele_, ele, sizeof(ele_));

	result = inter_elemental->create(&ele_);
	mapif->elemental_send(fd, &ele_, result);
}

void mapif_parse_elemental_load(int fd, int ele_id, int char_id) {
	struct s_elemental ele;
	bool result = inter_elemental->load(ele_id, char_id, &ele);
	mapif->elemental_send(fd, &ele, result);
}

void mapif_elemental_deleted(int fd, unsigned char flag) {
	WFIFOHEAD(fd,3);
	WFIFOW(fd,0) = 0x387d;
	WFIFOB(fd,2) = flag;
	WFIFOSET(fd,3);
}

void mapif_parse_elemental_delete(int fd, int ele_id) {
	bool result = inter_elemental->delete(ele_id);
	mapif->elemental_deleted(fd, result);
}

void mapif_elemental_saved(int fd, unsigned char flag) {
	WFIFOHEAD(fd,3);
	WFIFOW(fd,0) = 0x387e;
	WFIFOB(fd,2) = flag;
	WFIFOSET(fd,3);
}

void mapif_parse_elemental_save(int fd, const struct s_elemental *ele) {
	bool result = inter_elemental->save(ele);
	mapif->elemental_saved(fd, result);
}

/* ******************
 * INT_GUILD
 ***************** */
int mapif_guild_created(int fd, int account_id, struct guild *g) {
	WFIFOHEAD(fd, 10);
	WFIFOW(fd,0)=0x3830;
	WFIFOL(fd,2)=account_id;
	if(g != NULL) {
		WFIFOL(fd,6)=g->guild_id;
		ShowInfo("int_guild: Guild criada (%d - %s)\n",g->guild_id,g->name);
	} else {
		WFIFOL(fd,6)=0;
	}
	WFIFOSET(fd,10);
	return 0;
}

// Guild not found
int mapif_guild_noinfo(int fd, int guild_id) {
	unsigned char buf[12];
	WBUFW(buf,0)=0x3831;
	WBUFW(buf,2)=8;
	WBUFL(buf,4)=guild_id;
	ShowWarning("int_guild: infomarcao nao encontrada %d\n",guild_id);
	if(fd<0) {
		mapif->sendall(buf,8);
	} else {
		mapif->send(fd,buf,8);
	}
	return 0;
}

// Send guild info
int mapif_guild_info(int fd, struct guild *g) {
	unsigned char buf[8+sizeof(struct guild)];
	nullpo_ret(g);
	WBUFW(buf,0)=0x3831;
	WBUFW(buf,2)=4+sizeof(struct guild);
	memcpy(buf+4,g,sizeof(struct guild));
	if(fd<0)
		mapif->sendall(buf,WBUFW(buf,2));
	else
		mapif->send(fd,buf,WBUFW(buf,2));
	return 0;
}

// ACK member add
int mapif_guild_memberadded(int fd, int guild_id, int account_id, int char_id, int flag) {
	WFIFOHEAD(fd, 15);
	WFIFOW(fd,0)=0x3832;
	WFIFOL(fd,2)=guild_id;
	WFIFOL(fd,6)=account_id;
	WFIFOL(fd,10)=char_id;
	WFIFOB(fd,14)=flag;
	WFIFOSET(fd,15);
	return 0;
}

// ACK member leave
int mapif_guild_withdraw(int guild_id,int account_id,int char_id,int flag, const char *name, const char *mes) {
	unsigned char buf[55+NAME_LENGTH];

	nullpo_ret(name);
	nullpo_ret(mes);

	WBUFW(buf, 0)=0x3834;
	WBUFL(buf, 2)=guild_id;
	WBUFL(buf, 6)=account_id;
	WBUFL(buf,10)=char_id;
	WBUFB(buf,14)=flag;
	memcpy(WBUFP(buf,15),mes,40);
	memcpy(WBUFP(buf,55),name,NAME_LENGTH);
	mapif->sendall(buf,55+NAME_LENGTH);
	ShowInfo("int_guild: guild withdraw (%d - %d: %s - %s)\n",guild_id,account_id,name,mes);
	return 0;
}

// Send short member's info
int mapif_guild_memberinfoshort(struct guild *g, int idx) {
	unsigned char buf[23];
	nullpo_ret(g);
	Assert_ret(idx >= 0 && idx < MAX_GUILD);
	WBUFW(buf, 0)=0x3835;
	WBUFL(buf, 2)=g->guild_id;
	WBUFL(buf, 6)=g->member[idx].account_id;
	WBUFL(buf,10)=g->member[idx].char_id;
	WBUFB(buf,14)=(unsigned char)g->member[idx].online;
	WBUFW(buf,15)=g->member[idx].lv;
	WBUFW(buf,17)=g->member[idx].class;
	WBUFL(buf,19)=g->member[idx].last_login;
	mapif->sendall(buf,23);
	return 0;
}

// Send guild broken
int mapif_guild_broken(int guild_id, int flag) {
	unsigned char buf[7];
	WBUFW(buf,0)=0x3836;
	WBUFL(buf,2)=guild_id;
	WBUFB(buf,6)=flag;
	mapif->sendall(buf,7);
	ShowInfo("int_guild: Guild desfeita (%d)\n",guild_id);
	return 0;
}

// Send guild message
int mapif_guild_message(int guild_id, int account_id, const char *mes, int len, int sfd) {
	unsigned char buf[512];
	nullpo_ret(mes);
	if (len > 500) { len = 500; }
	WBUFW(buf,0)=0x3837;
	WBUFW(buf,2)=len+12;
	WBUFL(buf,4)=guild_id;
	WBUFL(buf,8)=account_id;
	memcpy(WBUFP(buf,12),mes,len);
	mapif->sendallwos(sfd, buf,len+12);
	return 0;
}

// Send basic info
int mapif_guild_basicinfochanged(int guild_id, int type, const void *data, int len) {
	unsigned char buf[2048];
	nullpo_ret(data);
	if (len > 2038) { len = 2038; }
	WBUFW(buf, 0)=0x3839;
	WBUFW(buf, 2)=len+10;
	WBUFL(buf, 4)=guild_id;
	WBUFW(buf, 8)=type;
	memcpy(WBUFP(buf,10),data,len);
	mapif->sendall(buf,len+10);
	return 0;
}

// Send member info
int mapif_guild_memberinfochanged(int guild_id, int account_id, int char_id, int type, const void *data, int len) {
	unsigned char buf[2048];
	nullpo_ret(data);
	if (len > 2030) { len = 2030; }
	WBUFW(buf, 0)=0x383a;
	WBUFW(buf, 2)=len+18;
	WBUFL(buf, 4)=guild_id;
	WBUFL(buf, 8)=account_id;
	WBUFL(buf,12)=char_id;
	WBUFW(buf,16)=type;
	memcpy(WBUFP(buf,18),data,len);
	mapif->sendall(buf,len+18);
	return 0;
}

// ACK guild skill up
int mapif_guild_skillupack(int guild_id, uint16 skill_id, int account_id) {
	unsigned char buf[14];
	WBUFW(buf, 0)=0x383c;
	WBUFL(buf, 2)=guild_id;
	WBUFL(buf, 6)=skill_id;
	WBUFL(buf,10)=account_id;
	mapif->sendall(buf,14);
	return 0;
}

// ACK guild alliance
int mapif_guild_alliance(int guild_id1, int guild_id2, int account_id1, int account_id2, int flag, const char *name1, const char *name2) {
	unsigned char buf[19+2*NAME_LENGTH];
	nullpo_ret(name1);
	nullpo_ret(name2);
	WBUFW(buf, 0)=0x383d;
	WBUFL(buf, 2)=guild_id1;
	WBUFL(buf, 6)=guild_id2;
	WBUFL(buf,10)=account_id1;
	WBUFL(buf,14)=account_id2;
	WBUFB(buf,18)=flag;
	memcpy(WBUFP(buf,19),name1,NAME_LENGTH);
	memcpy(WBUFP(buf,19+NAME_LENGTH),name2,NAME_LENGTH);
	mapif->sendall(buf,19+2*NAME_LENGTH);
	return 0;
}

// Send a guild position desc
int mapif_guild_position(struct guild *g, int idx) {
	unsigned char buf[12 + sizeof(struct guild_position)];
	nullpo_ret(g);
	Assert_ret(idx >= 0 && idx < MAX_GUILDPOSITION);
	WBUFW(buf,0)=0x383b;
	WBUFW(buf,2)=sizeof(struct guild_position)+12;
	WBUFL(buf,4)=g->guild_id;
	WBUFL(buf,8)=idx;
	memcpy(WBUFP(buf,12),&g->position[idx],sizeof(struct guild_position));
	mapif->sendall(buf,WBUFW(buf,2));
	return 0;
}

// Send the guild notice
int mapif_guild_notice(struct guild *g) {
	unsigned char buf[256];
	nullpo_ret(g);
	WBUFW(buf,0)=0x383e;
	WBUFL(buf,2)=g->guild_id;
	memcpy(WBUFP(buf,6),g->mes1,MAX_GUILDMES1);
	memcpy(WBUFP(buf,66),g->mes2,MAX_GUILDMES2);
	mapif->sendall(buf,186);
	return 0;
}

// Send emblem data
int mapif_guild_emblem(struct guild *g) {
	unsigned char buf[12 + sizeof(g->emblem_data)];
	nullpo_ret(g);
	WBUFW(buf,0)=0x383f;
	WBUFW(buf,2)=g->emblem_len+12;
	WBUFL(buf,4)=g->guild_id;
	WBUFL(buf,8)=g->emblem_id;
	memcpy(WBUFP(buf,12),g->emblem_data,g->emblem_len);
	mapif->sendall(buf,WBUFW(buf,2));
	return 0;
}

int mapif_guild_master_changed(struct guild *g, int aid, int cid) {
	unsigned char buf[14];
	nullpo_ret(g);
	WBUFW(buf,0)=0x3843;
	WBUFL(buf,2)=g->guild_id;
	WBUFL(buf,6)=aid;
	WBUFL(buf,10)=cid;
	mapif->sendall(buf,14);
	return 0;
}

int mapif_guild_castle_dataload(int fd, int sz, const int *castle_ids) {
	struct guild_castle *gc = NULL;
	int num = (sz - 4) / sizeof(int);
	int len = 4 + num * sizeof(*gc);
	int i;

	nullpo_ret(castle_ids);
	WFIFOHEAD(fd, len);
	WFIFOW(fd, 0) = 0x3840;
	WFIFOW(fd, 2) = len;
	for (i = 0; i < num; i++) {
		gc = inter_guild->castle_fromsql(*(castle_ids++));
		memcpy(WFIFOP(fd, 4 + i * sizeof(*gc)), gc, sizeof(*gc));
	}
	WFIFOSET(fd, len);
	return 0;
}

// Guild creation request
int mapif_parse_CreateGuild(int fd, int account_id, const char *name, const struct guild_member *master) {
	struct guild *g;
	nullpo_ret(name);
	nullpo_ret(master);

	g = inter_guild->create(name, master);

	// Report to client
	mapif->guild_created(fd,account_id,g);
	if (g != NULL) {
		mapif->guild_info(fd,g);
	}

	return 0;
}

// Return guild info to client
int mapif_parse_GuildInfo(int fd, int guild_id) {
	struct guild * g = inter_guild->fromsql(guild_id); //We use this because on start-up the info of castle-owned guilds is required. [Skotlex]
	if(g) {
		if (!inter_guild->calcinfo(g)) { mapif->guild_info(fd,g); }
	} else {
		mapif->guild_noinfo(fd,guild_id); // Failed to load info
	}
	return 0;
}

// Add member to guild
int mapif_parse_GuildAddMember(int fd, int guild_id, const struct guild_member *m) {
	nullpo_ret(m);

	if (!inter_guild->add_member(guild_id, m)) {
		mapif->guild_memberadded(fd, guild_id, m->account_id, m->char_id, 1); // 1: Failed to add
	} else {
		mapif->guild_memberadded(fd, guild_id, m->account_id, m->char_id, 0); // 0: success
	}
	return 0;
}

// Delete member from guild
int mapif_parse_GuildLeave(int fd, int guild_id, int account_id, int char_id, int flag, const char *mes) {
	inter_guild->leave(guild_id, account_id, char_id, flag, mes, fd);
	return 0;
}

// Change member info
int mapif_parse_GuildChangeMemberInfoShort(int fd, int guild_id, int account_id, int char_id, int online, int lv, int16 class) {
	inter_guild->update_member_info_short(guild_id, account_id, char_id, online, lv, class);
	return 0;
}

// BreakGuild
int mapif_parse_BreakGuild(int fd, int guild_id) {
	inter_guild->disband(guild_id);
	return 0;
}

// Forward Guild message to others map servers
int mapif_parse_GuildMessage(int fd, int guild_id, int account_id, const char *mes, int len) {
	return mapif->guild_message(guild_id,account_id,mes,len, fd);
}

/**
 * Changes basic guild information
 * The types are available in mmo.h::guild_basic_info
 **/
int mapif_parse_GuildBasicInfoChange(int fd, int guild_id, int type, const void *data, int len) {
	inter_guild->update_basic_info(guild_id, type, data, len);
	// Information is already sent in mapif->guild_info
	//mapif->guild_basicinfochanged(guild_id,type,data,len);
	return 0;
}

// Modification of the guild
int mapif_parse_GuildMemberInfoChange(int fd, int guild_id, int account_id, int char_id, int type, const char *data, int len) {
	inter_guild->update_member_info(guild_id, account_id, char_id, type, data, len);
	return 0;
}

// Change a position desc
int mapif_parse_GuildPosition(int fd, int guild_id, int idx, const struct guild_position *p) {
	nullpo_ret(p);
	inter_guild->update_position(guild_id, idx, p);
	return 0;
}

// Guild Skill UP
int mapif_parse_GuildSkillUp(int fd, int guild_id, uint16 skill_id, int account_id, int max) {
	inter_guild->use_skill_point(guild_id, skill_id, account_id, max);
	return 0;
}

// Alliance modification
int mapif_parse_GuildAlliance(int fd, int guild_id1, int guild_id2, int account_id1, int account_id2, int flag) {
	inter_guild->change_alliance(guild_id1, guild_id2, account_id1, account_id2, flag);
	return 0;
}

// Change guild message
int mapif_parse_GuildNotice(int fd, int guild_id, const char *mes1, const char *mes2) {
	inter_guild->update_notice(guild_id, mes1, mes2);
	return 0;
}

int mapif_parse_GuildEmblem(int fd, int len, int guild_id, int dummy, const char *data) {
	inter_guild->update_emblem(len, guild_id, data);
	return 0;
}

int mapif_parse_GuildCastleDataLoad(int fd, int len, const int *castle_ids) {
	return mapif->guild_castle_dataload(fd, len, castle_ids);
}

int mapif_parse_GuildCastleDataSave(int fd, int castle_id, int index, int value) {
	inter_guild->update_castle_data(castle_id, index, value);
	return 0;
}

int mapif_parse_GuildMasterChange(int fd, int guild_id, const char* name, int len) {
	inter_guild->change_leader(guild_id, name, len);
	return 0;
}

/* ******************
 * INT_HOMUN
 ***************** */
void mapif_homunculus_created(int fd, int account_id, const struct s_homunculus *sh, unsigned char flag) {
	nullpo_retv(sh);
	WFIFOHEAD(fd, sizeof(struct s_homunculus)+9);
	WFIFOW(fd,0) = 0x3890;
	WFIFOW(fd,2) = sizeof(struct s_homunculus)+9;
	WFIFOL(fd,4) = account_id;
	WFIFOB(fd,8)= flag;
	memcpy(WFIFOP(fd,9),sh,sizeof(struct s_homunculus));
	WFIFOSET(fd, WFIFOW(fd,2));
}

void mapif_homunculus_deleted(int fd, int flag) {
	WFIFOHEAD(fd, 3);
	WFIFOW(fd, 0) = 0x3893;
	WFIFOB(fd,2) = flag; //Flag 1 = success
	WFIFOSET(fd, 3);
}

void mapif_homunculus_loaded(int fd, int account_id, struct s_homunculus *hd) {
	WFIFOHEAD(fd, sizeof(struct s_homunculus)+9);
	WFIFOW(fd,0) = 0x3891;
	WFIFOW(fd,2) = sizeof(struct s_homunculus)+9;
	WFIFOL(fd,4) = account_id;
	if( hd != NULL ) {
		WFIFOB(fd,8) = 1; // success
		memcpy(WFIFOP(fd,9), hd, sizeof(struct s_homunculus));
	} else {
		WFIFOB(fd,8) = 0; // not found.
		memset(WFIFOP(fd,9), 0, sizeof(struct s_homunculus));
	}
	WFIFOSET(fd, sizeof(struct s_homunculus)+9);
}

void mapif_homunculus_saved(int fd, int account_id, bool flag) {
	WFIFOHEAD(fd, 7);
	WFIFOW(fd,0) = 0x3892;
	WFIFOL(fd,2) = account_id;
	WFIFOB(fd,6) = flag; // 1:success, 0:failure
	WFIFOSET(fd, 7);
}

void mapif_homunculus_renamed(int fd, int account_id, int char_id, unsigned char flag, const char *name) {
	nullpo_retv(name);
	WFIFOHEAD(fd, NAME_LENGTH+12);
	WFIFOW(fd, 0) = 0x3894;
	WFIFOL(fd, 2) = account_id;
	WFIFOL(fd, 6) = char_id;
	WFIFOB(fd,10) = flag;
	safestrncpy(WFIFOP(fd,11), name, NAME_LENGTH);
	WFIFOSET(fd, NAME_LENGTH+12);
}

void mapif_parse_homunculus_create(int fd, int len, int account_id, const struct s_homunculus *phd) {
	struct s_homunculus shd;
	bool result;

	memcpy(&shd, phd, sizeof(shd));

	result = inter_homunculus->create(&shd);
	mapif->homunculus_created(fd, account_id, &shd, result);
}

void mapif_parse_homunculus_delete(int fd, int homun_id) {
	bool result = inter_homunculus->delete(homun_id);
	mapif->homunculus_deleted(fd, result);
}

void mapif_parse_homunculus_load(int fd, int account_id, int homun_id) {
	struct s_homunculus hd;
	bool result = inter_homunculus->load(homun_id, &hd);
	mapif->homunculus_loaded(fd, account_id, ( result ? &hd : NULL ));
}

void mapif_parse_homunculus_save(int fd, int len, int account_id, const struct s_homunculus *phd) {
	bool result = inter_homunculus->save(phd);
	mapif->homunculus_saved(fd, account_id, result);
}

void mapif_parse_homunculus_rename(int fd, int account_id, int char_id, const char *name) {
	bool result = inter_homunculus->rename(name);
	mapif->homunculus_renamed(fd, account_id, char_id, result, name);
}

/* ******************
 * INT_MAIL
 ***************** */
void mapif_mail_sendinbox(int fd, int char_id, unsigned char flag, struct mail_data *md) {
	nullpo_retv(md);
	//FIXME: dumping the whole structure like this is unsafe [ultramage]
	WFIFOHEAD(fd, sizeof(struct mail_data) + 9);
	WFIFOW(fd,0) = 0x3848;
	WFIFOW(fd,2) = sizeof(struct mail_data) + 9;
	WFIFOL(fd,4) = char_id;
	WFIFOB(fd,8) = flag;
	memcpy(WFIFOP(fd,9),md,sizeof(struct mail_data));
	WFIFOSET(fd,WFIFOW(fd,2));
}

void mapif_parse_mail_requestinbox(int fd) {
	int char_id = RFIFOL(fd,2);
	unsigned char flag = RFIFOB(fd,6);
	struct mail_data md;
	memset(&md, 0, sizeof(md));
	inter_mail->fromsql(char_id, &md);
	mapif->mail_sendinbox(fd, char_id, flag, &md);
}

void mapif_parse_mail_read(int fd) {
	int mail_id = RFIFOL(fd,2);
	inter_mail->mark_read(mail_id);
}

void mapif_mail_sendattach(int fd, int char_id, struct mail_message *msg) {
	nullpo_retv(msg);
	WFIFOHEAD(fd, sizeof(struct item) + 12);
	WFIFOW(fd,0) = 0x384a;
	WFIFOW(fd,2) = sizeof(struct item) + 12;
	WFIFOL(fd,4) = char_id;
	WFIFOL(fd,8) = (msg->zeny > 0)?msg->zeny:0;
	memcpy(WFIFOP(fd,12), &msg->item, sizeof(struct item));
	WFIFOSET(fd,WFIFOW(fd,2));
}

void mapif_parse_mail_getattach(int fd) {
	struct mail_message msg = { 0 };
	int char_id = RFIFOL(fd, 2);
	int mail_id = RFIFOL(fd, 6);
	if (!inter_mail->get_attachment(char_id, mail_id, &msg)) {
		return;
	}
	mapif->mail_sendattach(fd, char_id, &msg);
}

void mapif_mail_delete(int fd, int char_id, int mail_id, bool failed) {
	WFIFOHEAD(fd,11);
	WFIFOW(fd,0) = 0x384b;
	WFIFOL(fd,2) = char_id;
	WFIFOL(fd,6) = mail_id;
	WFIFOB(fd,10) = failed;
	WFIFOSET(fd,11);
}

void mapif_parse_mail_delete(int fd) {
	int char_id = RFIFOL(fd,2);
	int mail_id = RFIFOL(fd,6);
	bool failed = !inter_mail->delete(char_id, mail_id);
	mapif->mail_delete(fd, char_id, mail_id, failed);
}

void mapif_mail_new(struct mail_message *msg) {
	unsigned char buf[74];
	if (!msg || !msg->id) {
		return;
	}

	WBUFW(buf,0) = 0x3849;
	WBUFL(buf,2) = msg->dest_id;
	WBUFL(buf,6) = msg->id;
	memcpy(WBUFP(buf,10), msg->send_name, NAME_LENGTH);
	memcpy(WBUFP(buf,34), msg->title, MAIL_TITLE_LENGTH);
	mapif->sendall(buf, 74);
}

void mapif_mail_return(int fd, int char_id, int mail_id, int new_mail) {
	WFIFOHEAD(fd,11);
	WFIFOW(fd,0) = 0x384c;
	WFIFOL(fd,2) = char_id;
	WFIFOL(fd,6) = mail_id;
	WFIFOB(fd,10) = (new_mail == 0);
	WFIFOSET(fd,11);
}

void mapif_parse_mail_return(int fd) {
	int char_id = RFIFOL(fd,2);
	int mail_id = RFIFOL(fd,6);
	int new_mail = 0;
	if (!inter_mail->return_message(char_id, mail_id, &new_mail)) {
		return;
	}
	mapif->mail_return(fd, char_id, mail_id, new_mail);
}

void mapif_mail_send(int fd, struct mail_message* msg) {
	int len = sizeof(struct mail_message) + 4;
	nullpo_retv(msg);
	WFIFOHEAD(fd,len);
	WFIFOW(fd,0) = 0x384d;
	WFIFOW(fd,2) = len;
	memcpy(WFIFOP(fd,4), msg, sizeof(struct mail_message));
	WFIFOSET(fd,len);
}

void mapif_parse_mail_send(int fd) {
	struct mail_message msg;
	int account_id = 0;
	if (RFIFOW(fd, 2) != 8 + sizeof(struct mail_message)) {
		return;
	}
	account_id = RFIFOL(fd, 4);
	memcpy(&msg, RFIFOP(fd, 8), sizeof(struct mail_message));
	inter_mail->send(account_id, &msg);
	mapif->mail_send(fd, &msg); // notify sender
	mapif->mail_new(&msg); // notify recipient
}

/* ******************
 * INT_MERCENARY
 ***************** */
void mapif_mercenary_send(int fd, struct s_mercenary *merc, unsigned char flag) {
	int size = sizeof(struct s_mercenary) + 5;

	nullpo_retv(merc);
	WFIFOHEAD(fd, size);
	WFIFOW(fd, 0) = 0x3870;
	WFIFOW(fd, 2) = size;
	WFIFOB(fd, 4) = flag;
	memcpy(WFIFOP(fd, 5), merc, sizeof(struct s_mercenary));
	WFIFOSET(fd,size);
}

void mapif_parse_mercenary_create(int fd, const struct s_mercenary *merc) {
	struct s_mercenary merc_;
	bool result;

	memcpy(&merc_, merc, sizeof(merc_));

	result = inter_mercenary->create(&merc_);
	mapif->mercenary_send(fd, &merc_, result);
}

void mapif_parse_mercenary_load(int fd, int merc_id, int char_id) {
	struct s_mercenary merc;
	bool result = inter_mercenary->load(merc_id, char_id, &merc);
	mapif->mercenary_send(fd, &merc, result);
}

void mapif_mercenary_deleted(int fd, unsigned char flag) {
	WFIFOHEAD(fd, 3);
	WFIFOW(fd, 0) = 0x3871;
	WFIFOB(fd, 2) = flag;
	WFIFOSET(fd, 3);
}

void mapif_parse_mercenary_delete(int fd, int merc_id) {
	bool result = inter_mercenary->delete(merc_id);
	mapif->mercenary_deleted(fd, result);
}

void mapif_mercenary_saved(int fd, unsigned char flag) {
	WFIFOHEAD(fd, 3);
	WFIFOW(fd, 0) = 0x3872;
	WFIFOB(fd, 2) = flag;
	WFIFOSET(fd, 3);
}

void mapif_parse_mercenary_save(int fd, const struct s_mercenary *merc) {
	bool result = inter_mercenary->save(merc);
	mapif->mercenary_saved(fd, result);
}

/* ******************
 * INT_PARTY
 ***************** */

// Create a party whether or not
int mapif_party_created(int fd, int account_id, int char_id, struct party *p) {
	WFIFOHEAD(fd, 39);
	WFIFOW(fd,0)=0x3820;
	WFIFOL(fd,2)=account_id;
	WFIFOL(fd,6)=char_id;
	if(p!=NULL){
		WFIFOB(fd,10)=0;
		WFIFOL(fd,11)=p->party_id;
		memcpy(WFIFOP(fd,15),p->name,NAME_LENGTH);
		ShowInfo("int_party: Grupo criado (%d - %s)\n",p->party_id,p->name);
	} else {
		WFIFOB(fd,10)=1;
		WFIFOL(fd,11)=0;
		memset(WFIFOP(fd,15),0,NAME_LENGTH);
	}
	WFIFOSET(fd,39);

	return 0;
}

//Party information not found
void mapif_party_noinfo(int fd, int party_id, int char_id) {
	WFIFOHEAD(fd, 12);
	WFIFOW(fd,0) = 0x3821;
	WFIFOW(fd,2) = 12;
	WFIFOL(fd,4) = char_id;
	WFIFOL(fd,8) = party_id;
	WFIFOSET(fd,12);
	ShowWarning("int_party: informacao nao encontrada (party_id=%d char_id=%d)\n", party_id, char_id);
}

//Digest party information
void mapif_party_info(int fd, struct party* p, int char_id) {
	unsigned char buf[8 + sizeof(struct party)];
	nullpo_retv(p);
	WBUFW(buf,0) = 0x3821;
	WBUFW(buf,2) = 8 + sizeof(struct party);
	WBUFL(buf,4) = char_id;
	memcpy(WBUFP(buf,8), p, sizeof(struct party));
	if( fd < 0) {
		mapif->sendall(buf,WBUFW(buf,2));
	} else {
		mapif->send(fd,buf,WBUFW(buf,2));
	}
}

//Whether or not additional party members
int mapif_party_memberadded(int fd, int party_id, int account_id, int char_id, int flag) {
	WFIFOHEAD(fd, 15);
	WFIFOW(fd,0) = 0x3822;
	WFIFOL(fd,2) = party_id;
	WFIFOL(fd,6) = account_id;
	WFIFOL(fd,10) = char_id;
	WFIFOB(fd,14) = flag;
	WFIFOSET(fd,15);
	return 0;
}

// Party setting change notification
int mapif_party_optionchanged(int fd, struct party *p, int account_id, int flag) {
	unsigned char buf[16];
	nullpo_ret(p);
	WBUFW(buf,0)=0x3823;
	WBUFL(buf,2)=p->party_id;
	WBUFL(buf,6)=account_id;
	WBUFW(buf,10)=p->exp;
	WBUFW(buf,12)=p->item;
	WBUFB(buf,14)=flag;
	if (flag == 0) {
		mapif->sendall(buf,15);
	} else {
		mapif->send(fd,buf,15);
	}
	return 0;
}

//Withdrawal notification party
int mapif_party_withdraw(int party_id,int account_id, int char_id) {
	unsigned char buf[16];
	WBUFW(buf,0) = 0x3824;
	WBUFL(buf,2) = party_id;
	WBUFL(buf,6) = account_id;
	WBUFL(buf,10) = char_id;
	mapif->sendall(buf, 14);
	return 0;
}

//Party map update notification
int mapif_party_membermoved(struct party *p, int idx) {
	unsigned char buf[20];
	nullpo_ret(p);
	Assert_ret(idx >= 0 && idx < MAX_PARTY);
	WBUFW(buf,0) = 0x3825;
	WBUFL(buf,2) = p->party_id;
	WBUFL(buf,6) = p->member[idx].account_id;
	WBUFL(buf,10) = p->member[idx].char_id;
	WBUFW(buf,14) = p->member[idx].map;
	WBUFB(buf,16) = p->member[idx].online;
	WBUFW(buf,17) = p->member[idx].lv;
	mapif->sendall(buf, 19);
	return 0;
}

//Dissolution party notification
int mapif_party_broken(int party_id, int flag) {
	unsigned char buf[16];
	WBUFW(buf,0)=0x3826;
	WBUFL(buf,2)=party_id;
	WBUFB(buf,6)=flag;
	mapif->sendall(buf,7);
	return 0;
}

//Remarks in the party
int mapif_party_message(int party_id, int account_id, const char *mes, int len, int sfd) {
	unsigned char buf[512];
	nullpo_ret(mes);
	WBUFW(buf,0)=0x3827;
	WBUFW(buf,2)=len+12;
	WBUFL(buf,4)=party_id;
	WBUFL(buf,8)=account_id;
	memcpy(WBUFP(buf,12),mes,len);
	mapif->sendallwos(sfd, buf,len+12);
	return 0;
}

// Create Party
int mapif_parse_CreateParty(int fd, const char *name, int item, int item2, const struct party_member *leader) {
	struct party_data *p;
	nullpo_ret(name);
	nullpo_ret(leader);
	p = inter_party->create(name, item, item2, leader);
	if (p == NULL) {
		mapif->party_created(fd, leader->account_id, leader->char_id, NULL);
		return 0;
	}
	mapif->party_info(fd, &p->party, 0);
	mapif->party_created(fd, leader->account_id, leader->char_id, &p->party);
	return 0;
}

// Party information request
void mapif_parse_PartyInfo(int fd, int party_id, int char_id) {
	struct party_data *p;
	p = inter_party->fromsql(party_id);
	if (p) {
		mapif->party_info(fd, &p->party, char_id);
	} else {
		mapif->party_noinfo(fd, party_id, char_id);
	}
}

// Add a player to party request
int mapif_parse_PartyAddMember(int fd, int party_id, const struct party_member *member) {
	nullpo_ret(member);
	if (!inter_party->add_member(party_id, member)) {
		mapif->party_memberadded(fd, party_id, member->account_id, member->char_id, 1);
		return 0;
	}
	mapif->party_memberadded(fd, party_id, member->account_id, member->char_id, 0);
	return 0;
}

//Party setting change request
int mapif_parse_PartyChangeOption(int fd,int party_id,int account_id,int exp,int item) {
	inter_party->change_option(party_id, account_id, exp, item, fd);
	return 0;
}

//Request leave party
int mapif_parse_PartyLeave(int fd, int party_id, int account_id, int char_id) {
	inter_party->leave(party_id, account_id, char_id);
	return 0;
}

// When member goes to other map or levels up.
int mapif_parse_PartyChangeMap(int fd, int party_id, int account_id, int char_id, unsigned short map, int online, unsigned int lv) {
	inter_party->change_map(party_id, account_id, char_id, map, online, lv);
	return 0;
}

//Request party dissolution
int mapif_parse_BreakParty(int fd, int party_id) {
	inter_party->disband(party_id);
	return 0;
}

//Party sending the message
int mapif_parse_PartyMessage(int fd, int party_id, int account_id, const char *mes, int len) {
	return mapif->party_message(party_id,account_id,mes,len, fd);
}

int mapif_parse_PartyLeaderChange(int fd, int party_id, int account_id, int char_id) {
	if (!inter_party->change_leader(party_id, account_id, char_id)) {
		return 0;
	}
	return 1;
}

/* ******************
 * INT_PET
 ***************** */
int mapif_pet_created(int fd, int account_id, struct s_pet *p) {
	WFIFOHEAD(fd, 12);
	WFIFOW(fd, 0) = 0x3880;
	WFIFOL(fd, 2) = account_id;
	if(p!=NULL){
		WFIFOW(fd, 6) = p->class_;
		WFIFOL(fd, 8) = p->pet_id;
		ShowInfo("int_pet: criado pet %d - %s\n", p->pet_id, p->name);
	} else {
		WFIFOB(fd, 6) = 0;
		WFIFOL(fd, 8) = 0;
	}
	WFIFOSET(fd, 12);
	return 0;
}

int mapif_pet_info(int fd, int account_id, struct s_pet *p) {
	nullpo_ret(p);
	WFIFOHEAD(fd, sizeof(struct s_pet) + 9);
	WFIFOW(fd, 0) = 0x3881;
	WFIFOW(fd, 2) = sizeof(struct s_pet) + 9;
	WFIFOL(fd, 4) = account_id;
	WFIFOB(fd, 8) = 0;
	memcpy(WFIFOP(fd, 9), p, sizeof(struct s_pet));
	WFIFOSET(fd, WFIFOW(fd, 2));
	return 0;
}

int mapif_pet_noinfo(int fd, int account_id) {
	WFIFOHEAD(fd, sizeof(struct s_pet) + 9);
	WFIFOW(fd, 0) = 0x3881;
	WFIFOW(fd, 2) = sizeof(struct s_pet) + 9;
	WFIFOL(fd, 4) = account_id;
	WFIFOB(fd, 8) = 1;
	memset(WFIFOP(fd, 9), 0, sizeof(struct s_pet));
	WFIFOSET(fd, WFIFOW(fd, 2));
	return 0;
}

int mapif_save_pet_ack(int fd, int account_id, int flag) {
	WFIFOHEAD(fd, 7);
	WFIFOW(fd, 0) = 0x3882;
	WFIFOL(fd, 2) = account_id;
	WFIFOB(fd, 6) = flag;
	WFIFOSET(fd, 7);
	return 0;
}

int mapif_delete_pet_ack(int fd, int flag) {
	WFIFOHEAD(fd, 3);
	WFIFOW(fd, 0) = 0x3883;
	WFIFOB(fd, 2) = flag;
	WFIFOSET(fd, 3);
	return 0;
}

int mapif_save_pet(int fd, int account_id, const struct s_pet *data) {
	//here process pet save request.
	int len;
	nullpo_ret(data);
	RFIFOHEAD(fd);
	len = RFIFOW(fd, 2);
	if (sizeof(struct s_pet) != len-8) {
		ShowError("inter pet: incompatibilidade no tamanho de dados: %d != %"PRIuS"\n", len-8, sizeof(struct s_pet));
		return 0;
	}
	inter_pet->tosql(data);
	mapif->save_pet_ack(fd, account_id, 0);
	return 0;
}

int mapif_delete_pet(int fd, int pet_id) {
	mapif->delete_pet_ack(fd, inter_pet->delete_(pet_id));
	return 0;
}

int mapif_parse_CreatePet(int fd) {
	int account_id;
	struct s_pet *pet;
	RFIFOHEAD(fd);
	account_id = RFIFOL(fd, 2);
	pet = inter_pet->create(account_id, RFIFOL(fd, 6), RFIFOW(fd, 10), RFIFOW(fd, 12), RFIFOW(fd, 14),
	      RFIFOW(fd, 16), RFIFOW(fd, 18), RFIFOW(fd, 20), RFIFOB(fd, 22), RFIFOB(fd, 23), RFIFOP(fd, 24));
	if (pet != NULL) {
		mapif->pet_created(fd, account_id, pet);
	} else {
		mapif->pet_created(fd, account_id, NULL);
	}
	return 0;
}

int mapif_parse_LoadPet(int fd) {
	int account_id;
	struct s_pet *pet;
	RFIFOHEAD(fd);
	account_id = RFIFOL(fd, 2);
	pet = inter_pet->load(account_id, RFIFOL(fd, 6), RFIFOL(fd, 10));
	if (pet != NULL) {
		mapif->pet_info(fd, account_id, pet);
	} else {
		mapif->pet_noinfo(fd, account_id);
	}
	return 0;
}

int mapif_parse_SavePet(int fd) {
	RFIFOHEAD(fd);
	mapif->save_pet(fd, RFIFOL(fd, 4), RFIFOP(fd, 8));
	return 0;
}

int mapif_parse_DeletePet(int fd) {
	RFIFOHEAD(fd);
	mapif->delete_pet(fd, RFIFOL(fd, 2));
	return 0;
}

/* ******************
 * INT_QUEST
 ***************** */
void mapif_quest_save_ack(int fd, int char_id, bool success) {
	WFIFOHEAD(fd, 7);
	WFIFOW(fd, 0) = 0x3861;
	WFIFOL(fd, 2) = char_id;
	WFIFOB(fd, 6) = success ? 1 : 0;
	WFIFOSET(fd, 7);
}

/**
 * Handles the save request from mapserver for a character's questlog.
 *
 * Received quests are saved, and an ack is sent back to the map server.
 *
 * @see inter_parse_frommap
 */
int mapif_parse_quest_save(int fd) {
	int num = (RFIFOW(fd, 2) - 8) / sizeof(struct quest);
	int char_id = RFIFOL(fd, 4);
	const struct quest *qd = NULL;
	bool success;
	if (num > 0) {
		qd = RFIFOP(fd, 8);
	}
	success = inter_quest->save(char_id, qd, num);
	// Send ack
	mapif->quest_save_ack(fd, char_id, success);

	return 0;
}

void mapif_send_quests(int fd, int char_id, struct quest *tmp_questlog, int num_quests) {
	WFIFOHEAD(fd,num_quests*sizeof(struct quest) + 8);
	WFIFOW(fd,0) = 0x3860;
	WFIFOW(fd,2) = num_quests*sizeof(struct quest) + 8;
	WFIFOL(fd,4) = char_id;

	if (num_quests > 0) {
		nullpo_retv(tmp_questlog);
		memcpy(WFIFOP(fd, 8), tmp_questlog, sizeof(struct quest)*num_quests);
	}
	WFIFOSET(fd,num_quests*sizeof(struct quest)+8);
}

/**
 * Sends questlog to the map server
 *
 * Note: Completed quests (state == Q_COMPLETE) are guaranteed to be sent last
 * and the map server relies on this behavior (once the first Q_COMPLETE quest,
 * all of them are considered to be Q_COMPLETE)
 *
 * @see inter_parse_frommap
 */
int mapif_parse_quest_load(int fd) {
	int char_id = RFIFOL(fd,2);
	struct quest *tmp_questlog = NULL;
	int num_quests;
	tmp_questlog = inter_quest->fromsql(char_id, &num_quests);
	mapif->send_quests(fd, char_id, tmp_questlog, num_quests);
	if (tmp_questlog) {
		aFree(tmp_questlog);
	}
	return 0;
}

/* ******************
 * INT_RODEX
 ***************** */

/*==========================================
 * Inbox Request
 *------------------------------------------*/
void mapif_parse_rodex_requestinbox(int fd) {
	int count;
	int char_id = RFIFOL(fd,2);
	int account_id = RFIFOL(fd, 6);
	int8 flag = RFIFOB(fd, 10);
	int8 opentype = RFIFOB(fd, 11);
	int64 mail_id = RFIFOQ(fd, 12);
	struct rodex_maillist mails = { 0 };
	VECTOR_INIT(mails);
	if (flag == 0) {
		count = inter_rodex->fromsql(char_id, account_id, opentype, 0, &mails);
	} else {
		count = inter_rodex->fromsql(char_id, account_id, opentype, mail_id, &mails);
	}
	mapif->rodex_sendinbox(fd, char_id, opentype, flag, count, mail_id, &mails);
	VECTOR_CLEAR(mails);
}

void mapif_rodex_sendinbox(int fd, int char_id, int8 opentype, int8 flag, int count, int64 mail_id, struct rodex_maillist *mails) {
	int per_packet = (UINT16_MAX - 24) / sizeof(struct rodex_message);
	int sent = 0;
	bool is_first = true;
	nullpo_retv(mails);
	Assert_retv(char_id > 0);
	Assert_retv(count >= 0);
	Assert_retv(mail_id >= 0);
	do {
		int i = 24, j, size, limit;
		int to_send = count - sent;
		bool is_last = true;
		if (to_send <= per_packet) {
			size = to_send * sizeof(struct rodex_message) + 24;
			limit = to_send;
			is_last = true;
		} else {
			limit = min(to_send, per_packet);
			if (limit != to_send) {
				is_last = false;
			}
			size = limit * sizeof(struct rodex_message) + 24;
		}
		WFIFOHEAD(fd, size);
		WFIFOW(fd, 0) = 0x3895;
		WFIFOW(fd, 2) = size;
		WFIFOL(fd, 4) = char_id;
		WFIFOB(fd, 8) = opentype;
		WFIFOB(fd, 9) = flag;
		WFIFOB(fd, 10) = is_last;
		WFIFOB(fd, 11) = is_first;
		WFIFOL(fd, 12) = limit;
		WFIFOQ(fd, 16) = mail_id;
		for (j = 0; j < limit; ++j, ++sent, i += sizeof(struct rodex_message)) {
			memcpy(WFIFOP(fd, i), &VECTOR_INDEX(*mails, sent), sizeof(struct rodex_message));
		}
		WFIFOSET(fd, size);
		is_first = false;
	} while (sent < count);
}

/*==========================================
 * Checks if there are new mails
 *------------------------------------------*/
void mapif_parse_rodex_checkhasnew(int fd) {
	int char_id = RFIFOL(fd, 2);
	int account_id = RFIFOL(fd, 6);
	bool has_new;
	Assert_retv(account_id >= START_ACCOUNT_NUM && account_id <= END_ACCOUNT_NUM);
	Assert_retv(char_id >= START_CHAR_NUM);
	has_new = inter_rodex->hasnew(char_id, account_id);
	mapif->rodex_sendhasnew(fd, char_id, has_new);
}

void mapif_rodex_sendhasnew(int fd, int char_id, bool has_new) {
	Assert_retv(char_id > 0);
	WFIFOHEAD(fd, 7);
	WFIFOW(fd, 0) = 0x3896;
	WFIFOL(fd, 2) = char_id;
	WFIFOB(fd, 6) = has_new;
	WFIFOSET(fd, 7);
}

/*==========================================
 * Update/Delete mail
 *------------------------------------------*/
void mapif_parse_rodex_updatemail(int fd) {
	int64 mail_id = RFIFOL(fd, 2);
	int8 flag = RFIFOB(fd, 10);
	inter_rodex->updatemail(mail_id, flag);
}

/*==========================================
 * Send Mail
 *------------------------------------------*/
void mapif_parse_rodex_send(int fd) {
	struct rodex_message msg = { 0 };
	if (RFIFOW(fd,2) != 4 + sizeof(struct rodex_message)) {
		return;
	}
	memcpy(&msg, RFIFOP(fd,4), sizeof(struct rodex_message));
	if (msg.receiver_id > 0 || msg.receiver_accountid > 0) {
		msg.id = inter_rodex->savemessage(&msg);
	}
	mapif->rodex_send(fd, msg.sender_id, msg.receiver_id, msg.receiver_accountid, msg.id > 0 ? true : false);
}

void mapif_rodex_send(int fd, int sender_id, int receiver_id, int receiver_accountid, bool result) {
	Assert_retv(sender_id >= 0);
	Assert_retv(receiver_id + receiver_accountid > 0);
	WFIFOHEAD(fd,15);
	WFIFOW(fd,0) = 0x3897;
	WFIFOL(fd,2) = sender_id;
	WFIFOL(fd,6) = receiver_id;
	WFIFOL(fd,10) = receiver_accountid;
	WFIFOB(fd,14) = result;
	WFIFOSET(fd,15);
}

/*------------------------------------------
 * Check Player
 *------------------------------------------*/
void mapif_parse_rodex_checkname(int fd) {
	int reqchar_id = RFIFOL(fd, 2);
	char name[NAME_LENGTH];
	int target_char_id, target_level;
	short target_class;
	safestrncpy(name, RFIFOP(fd, 6), NAME_LENGTH);
	if (inter_rodex->checkname(name, &target_char_id, &target_class, &target_level) == true) {
		mapif->rodex_checkname(fd, reqchar_id, target_char_id, target_class, target_level, name);
	} else {
		mapif->rodex_checkname(fd, reqchar_id, 0, 0, 0, name);
	}
}

void mapif_rodex_checkname(int fd, int reqchar_id, int target_char_id, short target_class, int target_level, char *name) {
	nullpo_retv(name);
	Assert_retv(reqchar_id > 0);
	Assert_retv(target_char_id >= 0);
	WFIFOHEAD(fd, 16 + NAME_LENGTH);
	WFIFOW(fd, 0) = 0x3898;
	WFIFOL(fd, 2) = reqchar_id;
	WFIFOL(fd, 6) = target_char_id;
	WFIFOW(fd, 10) = target_class;
	WFIFOL(fd, 12) = target_level;
	safestrncpy(WFIFOP(fd, 16), name, NAME_LENGTH);
	WFIFOSET(fd, 16 + NAME_LENGTH);
}

/* ******************
 * INT_STORAGE
 ***************** */
//---------------------------------------------------------
// packet from map server
int mapif_load_guild_storage(int fd, int account_id, int guild_id, char flag) {
	if (SQL_ERROR == SQL->Query(inter->sql_handle, "SELECT `guild_id` FROM `%s` WHERE `guild_id`='%d'", guild_db, guild_id)) {
		Sql_ShowDebug(inter->sql_handle);
	} else if (SQL->NumRows(inter->sql_handle) > 0) {
		// guild exists
		WFIFOHEAD(fd, sizeof(struct guild_storage) + 13);
		WFIFOW(fd, 0) = 0x3818;
		WFIFOW(fd, 2) = sizeof(struct guild_storage) + 13;
		WFIFOL(fd, 4) = account_id;
		WFIFOL(fd, 8) = guild_id;
		WFIFOB(fd, 12) = flag; //1 open storage, 0 don't open
		inter_storage->guild_storage_fromsql(guild_id, WFIFOP(fd, 13));
		WFIFOSET(fd, WFIFOW(fd, 2));
		return 0;
	}
	// guild does not exist
	SQL->FreeResult(inter->sql_handle);
	WFIFOHEAD(fd, 12);
	WFIFOW(fd, 0) = 0x3818;
	WFIFOW(fd, 2) = 12;
	WFIFOL(fd, 4) = account_id;
	WFIFOL(fd, 8) = 0;
	WFIFOSET(fd, 12);
	return 0;
}

int mapif_save_guild_storage_ack(int fd, int account_id, int guild_id, int fail) {
	WFIFOHEAD(fd, 11);
	WFIFOW(fd, 0) = 0x3819;
	WFIFOL(fd, 2) = account_id;
	WFIFOL(fd, 6) = guild_id;
	WFIFOB(fd, 10) = fail;
	WFIFOSET(fd, 11);
	return 0;
}

//=========================================================
// Guild Storage
//---------------------------------------------------------
int mapif_parse_LoadGuildStorage(int fd) {
	RFIFOHEAD(fd);
	mapif->load_guild_storage(fd, RFIFOL(fd, 2), RFIFOL(fd, 6), 1);
	return 0;
}

int mapif_parse_SaveGuildStorage(int fd) {
	int guild_id;
	int len;
	RFIFOHEAD(fd);
	guild_id = RFIFOL(fd, 8);
	len = RFIFOW(fd, 2);
	if (sizeof(struct guild_storage) != len - 12) {
		ShowError("inter storage: Tamanho de dados incompativel: %d != %"PRIuS"\n", len - 12, sizeof(struct guild_storage));
	} else if (inter_storage->guild_storage_tosql(guild_id, RFIFOP(fd,12))) {
		mapif->save_guild_storage_ack(fd, RFIFOL(fd, 4), guild_id, 0);
		return 0;
	}
	mapif->save_guild_storage_ack(fd, RFIFOL(fd,4), guild_id, 1);
	return 0;
}

/**
 * Loads the account storage and send to the map server.
 * @packet 0x3805     [out] <account_id>.L <struct item[]>.P
 * @param  fd         [in]  file/socket descriptor.
 * @param  account_id [in]  account id of the session.
 * @return 1 on success, 0 on failure.
 */
int mapif_account_storage_load(int fd, int account_id) {
	struct storage_data stor = { 0 };
	int count = 0, i = 0, len = 0;
	Assert_ret(account_id > 0);
	VECTOR_INIT(stor.item);
	count = inter_storage->fromsql(account_id, &stor);
	len = 8 + count * sizeof(struct item);
	WFIFOHEAD(fd, len);
	WFIFOW(fd, 0) = 0x3805;
	WFIFOW(fd, 2) = (uint16) len;
	WFIFOL(fd, 4) = account_id;
	for (i = 0; i < count; i++) {
		memcpy(WFIFOP(fd, 8 + i * sizeof(struct item)), &VECTOR_INDEX(stor.item, i), sizeof(struct item));
	}
	WFIFOSET(fd, len);
	VECTOR_CLEAR(stor.item);
	return 1;
}

//=========================================================
// Account Storage
//---------------------------------------------------------
/**
 * Parses account storage load request from map server.
 * @packet 0x3010 [in] <account_id>.L
 * @param  fd     [in] file/socket descriptor
 * @return 1 on success, 0 on failure.
 */
int mapif_parse_AccountStorageLoad(int fd) {
	int account_id = RFIFOL(fd, 2);
	Assert_ret(fd > 0);
	Assert_ret(account_id > 0);
	mapif->account_storage_load(fd, account_id);
	return 1;
}

/**
 * Parses an account storage save request from the map server.
 * @packet 0x3011 [in] <packet_len>.W <account_id>.L <struct item[]>.P
 * @param  fd     [in] file/socket descriptor.
 * @return 1 on success, 0 on failure.
 */
int mapif_parse_AccountStorageSave(int fd) {
	int payload_size = RFIFOW(fd, 2) - 8, account_id = RFIFOL(fd, 4);
	int i = 0, count = 0;
	struct storage_data p_stor = { 0 };
	Assert_ret(fd > 0);
	Assert_ret(account_id > 0);
	count = payload_size/sizeof(struct item);
	VECTOR_INIT(p_stor.item);
	if (count > 0) {
		VECTOR_ENSURE(p_stor.item, count, 1);
		for (i = 0; i < count; i++) {
			const struct item *it = RFIFOP(fd, 8 + i * sizeof(struct item));
			VECTOR_PUSH(p_stor.item, *it);
		}
		p_stor.aggregate = count;
	}
	inter_storage->tosql(account_id, &p_stor);
	VECTOR_CLEAR(p_stor.item);
	mapif->sAccountStorageSaveAck(fd, account_id, true);
	return 1;
}

/**
 * Sends an acknowledgement for the save
 * status of the account storage.
 * @packet 0x3808     [out] <account_id>.L <save_flag>.B
 * @param  fd         [in]  File/Socket Descriptor.
 * @param  account_id [in]  Account ID of the storage in question.
 * @param  flag       [in]  Save flag, true for success and false for failure.
 */
void mapif_send_AccountStorageSaveAck(int fd, int account_id, bool flag) {
	WFIFOHEAD(fd, 7);
	WFIFOW(fd, 0) = 0x3808;
	WFIFOL(fd, 2) = account_id;
	WFIFOB(fd, 6) = flag ? 1 : 0;
	WFIFOSET(fd, 7);
}

int mapif_itembound_ack(int fd, int aid, int guild_id) {
	#ifdef GP_BOUND_ITEMS
	WFIFOHEAD(fd,8);
	WFIFOW(fd,0) = 0x3856;
	WFIFOL(fd,2) = aid;/* the value is not being used, drop? */
	WFIFOW(fd,6) = guild_id;
	WFIFOSET(fd,8);
	#endif
	return 0;
}

void mapif_parse_ItemBoundRetrieve(int fd) {
	#ifdef GP_BOUND_ITEMS
	int char_id = RFIFOL(fd, 2);
	int account_id = RFIFOL(fd, 6);
	int guild_id = RFIFOW(fd, 10);
	inter_storage->retrieve_bound_items(char_id, account_id, guild_id);
	//Finally reload storage and tell map we're done
	mapif->load_guild_storage(fd, account_id, guild_id, 0);
	// If character is logged in char, disconnect
	chr->disconnect_player(account_id);
	#endif // GP_BOUND_ITEMS
	/* tell map server the operation is over and it can unlock the storage */
	mapif->itembound_ack(fd,RFIFOL(fd,6),RFIFOW(fd,10));
}

void mapif_parse_accinfo(int fd);
void mapif_parse_accinfo2(bool success, int map_fd, int u_fd, int u_aid, int account_id, const char *userid, const char *user_pass,
    const char *email, const char *last_ip, const char *lastlogin, const char *pin_code, const char *birthdate, int group_id, int logincount, int state);
int mapif_account_reg_reply(int fd,int account_id,int char_id, int type);
int mapif_disconnectplayer(int fd, int account_id, int char_id, int reason);
int mapif_parse_Registry(int fd);
int mapif_parse_RegistryRequest(int fd);
void mapif_namechange_ack(int fd, int account_id, int char_id, int type, int flag, const char *const name);
int mapif_parse_NameChangeRequest(int fd);
// Clan System
int mapif_parse_ClanMemberKick(int fd, int clan_id, int kick_interval) {
	int count = 0;
	if (inter_clan->kick_inactive_members(clan_id, kick_interval) == 1) {
		count = inter_clan->count_members(clan_id, kick_interval);
	}
	WFIFOHEAD(fd, 10);
	WFIFOW(fd, 0) = 0x3858;
	WFIFOL(fd, 2) = clan_id;
	WFIFOL(fd, 6) = count;
	WFIFOSET(fd, 10);
	return 0;
}

int mapif_parse_ClanMemberCount(int fd, int clan_id, int kick_interval) {
	WFIFOHEAD(fd, 10);
	WFIFOW(fd, 0) = 0x3858;
	WFIFOL(fd, 2) = clan_id;
	WFIFOL(fd, 6) = inter_clan->count_members(clan_id, kick_interval);
	WFIFOSET(fd, 10);
	return 0;
}

struct mapif_interface mapif_s;
struct mapif_interface *mapif;

void mapif_defaults(void) {
	mapif = &mapif_s;

	mapif->ban = mapif_ban;
	mapif->server_init = mapif_server_init;
	mapif->server_destroy = mapif_server_destroy;
	mapif->server_reset = mapif_server_reset;
	mapif->on_disconnect = mapif_on_disconnect;
	mapif->on_parse_accinfo = mapif_on_parse_accinfo;
	mapif->char_ban = mapif_char_ban;
	mapif->sendall = mapif_sendall;
	mapif->sendallwos = mapif_sendallwos;
	mapif->send = mapif_send;
	mapif->send_users_count = mapif_send_users_count;
	mapif->auction_message = mapif_auction_message;
	mapif->auction_sendlist = mapif_auction_sendlist;
	mapif->parse_auction_requestlist = mapif_parse_auction_requestlist;
	mapif->auction_register = mapif_auction_register;
	mapif->parse_auction_register = mapif_parse_auction_register;
	mapif->auction_cancel = mapif_auction_cancel;
	mapif->parse_auction_cancel = mapif_parse_auction_cancel;
	mapif->auction_close = mapif_auction_close;
	mapif->parse_auction_close = mapif_parse_auction_close;
	mapif->auction_bid = mapif_auction_bid;
	mapif->parse_auction_bid = mapif_parse_auction_bid;
	mapif->elemental_send = mapif_elemental_send;
	mapif->parse_elemental_create = mapif_parse_elemental_create;
	mapif->parse_elemental_load = mapif_parse_elemental_load;
	mapif->elemental_deleted = mapif_elemental_deleted;
	mapif->parse_elemental_delete = mapif_parse_elemental_delete;
	mapif->elemental_saved = mapif_elemental_saved;
	mapif->parse_elemental_save = mapif_parse_elemental_save;
	mapif->guild_created = mapif_guild_created;
	mapif->guild_noinfo = mapif_guild_noinfo;
	mapif->guild_info = mapif_guild_info;
	mapif->guild_memberadded = mapif_guild_memberadded;
	mapif->guild_withdraw = mapif_guild_withdraw;
	mapif->guild_memberinfoshort = mapif_guild_memberinfoshort;
	mapif->guild_broken = mapif_guild_broken;
	mapif->guild_message = mapif_guild_message;
	mapif->guild_basicinfochanged = mapif_guild_basicinfochanged;
	mapif->guild_memberinfochanged = mapif_guild_memberinfochanged;
	mapif->guild_skillupack = mapif_guild_skillupack;
	mapif->guild_alliance = mapif_guild_alliance;
	mapif->guild_position = mapif_guild_position;
	mapif->guild_notice = mapif_guild_notice;
	mapif->guild_emblem = mapif_guild_emblem;
	mapif->guild_master_changed = mapif_guild_master_changed;
	mapif->guild_castle_dataload = mapif_guild_castle_dataload;
	mapif->parse_CreateGuild = mapif_parse_CreateGuild;
	mapif->parse_GuildInfo = mapif_parse_GuildInfo;
	mapif->parse_GuildAddMember = mapif_parse_GuildAddMember;
	mapif->parse_GuildLeave = mapif_parse_GuildLeave;
	mapif->parse_GuildChangeMemberInfoShort = mapif_parse_GuildChangeMemberInfoShort;
	mapif->parse_BreakGuild = mapif_parse_BreakGuild;
	mapif->parse_GuildMessage = mapif_parse_GuildMessage;
	mapif->parse_GuildBasicInfoChange = mapif_parse_GuildBasicInfoChange;
	mapif->parse_GuildMemberInfoChange = mapif_parse_GuildMemberInfoChange;
	mapif->parse_GuildPosition = mapif_parse_GuildPosition;
	mapif->parse_GuildSkillUp = mapif_parse_GuildSkillUp;
	mapif->parse_GuildAlliance = mapif_parse_GuildAlliance;
	mapif->parse_GuildNotice = mapif_parse_GuildNotice;
	mapif->parse_GuildEmblem = mapif_parse_GuildEmblem;
	mapif->parse_GuildCastleDataLoad = mapif_parse_GuildCastleDataLoad;
	mapif->parse_GuildCastleDataSave = mapif_parse_GuildCastleDataSave;
	mapif->parse_GuildMasterChange = mapif_parse_GuildMasterChange;
	mapif->homunculus_created = mapif_homunculus_created;
	mapif->homunculus_deleted = mapif_homunculus_deleted;
	mapif->homunculus_loaded = mapif_homunculus_loaded;
	mapif->homunculus_saved = mapif_homunculus_saved;
	mapif->homunculus_renamed = mapif_homunculus_renamed;
	mapif->parse_homunculus_create = mapif_parse_homunculus_create;
	mapif->parse_homunculus_delete = mapif_parse_homunculus_delete;
	mapif->parse_homunculus_load = mapif_parse_homunculus_load;
	mapif->parse_homunculus_save = mapif_parse_homunculus_save;
	mapif->parse_homunculus_rename = mapif_parse_homunculus_rename;
	mapif->mail_sendinbox = mapif_mail_sendinbox;
	mapif->parse_mail_requestinbox = mapif_parse_mail_requestinbox;
	mapif->parse_mail_read = mapif_parse_mail_read;
	mapif->mail_sendattach = mapif_mail_sendattach;
	mapif->parse_mail_getattach = mapif_parse_mail_getattach;
	mapif->mail_delete = mapif_mail_delete;
	mapif->parse_mail_delete = mapif_parse_mail_delete;
	mapif->mail_new = mapif_mail_new;
	mapif->mail_return = mapif_mail_return;
	mapif->parse_mail_return = mapif_parse_mail_return;
	mapif->mail_send = mapif_mail_send;
	mapif->parse_mail_send = mapif_parse_mail_send;
	mapif->mercenary_send = mapif_mercenary_send;
	mapif->parse_mercenary_create = mapif_parse_mercenary_create;
	mapif->parse_mercenary_load = mapif_parse_mercenary_load;
	mapif->mercenary_deleted = mapif_mercenary_deleted;
	mapif->parse_mercenary_delete = mapif_parse_mercenary_delete;
	mapif->mercenary_saved = mapif_mercenary_saved;
	mapif->parse_mercenary_save = mapif_parse_mercenary_save;
	mapif->party_created = mapif_party_created;
	mapif->party_noinfo = mapif_party_noinfo;
	mapif->party_info = mapif_party_info;
	mapif->party_memberadded = mapif_party_memberadded;
	mapif->party_optionchanged = mapif_party_optionchanged;
	mapif->party_withdraw = mapif_party_withdraw;
	mapif->party_membermoved = mapif_party_membermoved;
	mapif->party_broken = mapif_party_broken;
	mapif->party_message = mapif_party_message;
	mapif->parse_CreateParty = mapif_parse_CreateParty;
	mapif->parse_PartyInfo = mapif_parse_PartyInfo;
	mapif->parse_PartyAddMember = mapif_parse_PartyAddMember;
	mapif->parse_PartyChangeOption = mapif_parse_PartyChangeOption;
	mapif->parse_PartyLeave = mapif_parse_PartyLeave;
	mapif->parse_PartyChangeMap = mapif_parse_PartyChangeMap;
	mapif->parse_BreakParty = mapif_parse_BreakParty;
	mapif->parse_PartyMessage = mapif_parse_PartyMessage;
	mapif->parse_PartyLeaderChange = mapif_parse_PartyLeaderChange;
	mapif->pet_created = mapif_pet_created;
	mapif->pet_info = mapif_pet_info;
	mapif->pet_noinfo = mapif_pet_noinfo;
	mapif->save_pet_ack = mapif_save_pet_ack;
	mapif->delete_pet_ack = mapif_delete_pet_ack;
	mapif->save_pet = mapif_save_pet;
	mapif->delete_pet = mapif_delete_pet;
	mapif->parse_CreatePet = mapif_parse_CreatePet;
	mapif->parse_LoadPet = mapif_parse_LoadPet;
	mapif->parse_SavePet = mapif_parse_SavePet;
	mapif->parse_DeletePet = mapif_parse_DeletePet;
	mapif->quest_save_ack = mapif_quest_save_ack;
	mapif->parse_quest_save = mapif_parse_quest_save;
	mapif->send_quests = mapif_send_quests;
	mapif->parse_quest_load = mapif_parse_quest_load;
	/* RoDEX */
	mapif->parse_rodex_requestinbox = mapif_parse_rodex_requestinbox;
	mapif->rodex_sendinbox = mapif_rodex_sendinbox;
	mapif->parse_rodex_checkhasnew = mapif_parse_rodex_checkhasnew;
	mapif->rodex_sendhasnew = mapif_rodex_sendhasnew;
	mapif->parse_rodex_updatemail = mapif_parse_rodex_updatemail;
	mapif->parse_rodex_send = mapif_parse_rodex_send;
	mapif->rodex_send = mapif_rodex_send;
	mapif->parse_rodex_checkname = mapif_parse_rodex_checkname;
	mapif->rodex_checkname = mapif_rodex_checkname;
	mapif->load_guild_storage = mapif_load_guild_storage;
	mapif->save_guild_storage_ack = mapif_save_guild_storage_ack;
	mapif->parse_LoadGuildStorage = mapif_parse_LoadGuildStorage;
	mapif->parse_SaveGuildStorage = mapif_parse_SaveGuildStorage;
	mapif->pAccountStorageLoad = mapif_parse_AccountStorageLoad;
	mapif->pAccountStorageSave = mapif_parse_AccountStorageSave;
	mapif->sAccountStorageSaveAck = mapif_send_AccountStorageSaveAck;
	mapif->account_storage_load = mapif_account_storage_load;
	mapif->itembound_ack = mapif_itembound_ack;
	mapif->parse_ItemBoundRetrieve = mapif_parse_ItemBoundRetrieve;
	mapif->parse_accinfo = mapif_parse_accinfo;
	mapif->parse_accinfo2 = mapif_parse_accinfo2;
	mapif->account_reg_reply = mapif_account_reg_reply;
	mapif->disconnectplayer = mapif_disconnectplayer;
	mapif->parse_Registry = mapif_parse_Registry;
	mapif->parse_RegistryRequest = mapif_parse_RegistryRequest;
	mapif->namechange_ack = mapif_namechange_ack;
	mapif->parse_NameChangeRequest = mapif_parse_NameChangeRequest;
	/* Clan System */
	mapif->parse_ClanMemberKick = mapif_parse_ClanMemberKick;
	mapif->parse_ClanMemberCount = mapif_parse_ClanMemberCount;
}
