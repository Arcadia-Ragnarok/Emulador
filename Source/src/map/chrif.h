/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
|                  Idealizado por: Spell Master                     |
+-------------------------------------------------------------------+
| - Este c�digo � livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercializa��o desse software est� previsto    |
| em leis internacionais, junto com este(s) c�digo(s) voc� recebeu  |
| uma c�pia de licen�a de uso.                                      |
| - Caso n�o tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#ifndef MAP_CHRIF_H
#define MAP_CHRIF_H

#include "common/cbasetypes.h"
#include "common/db.h"
#include "common/mmo.h"
#include "map/status.h"

struct eri;
struct map_session_data;
struct status_change_entry;

/**
 * Defines
 **/
//Interval at which map server updates online listing. [Valaris]
#define CHECK_INTERVAL 3600000
//Interval at which map server sends number of connected users. [Skotlex]
#define UPDATE_INTERVAL 10000

#define CHRIF_PACKET_LEN_TABLE_SIZE 0x3d

/**
 * Enumerations
 **/
enum sd_state { ST_LOGIN, ST_LOGOUT, ST_MAPCHANGE };

/**
 * Structures
 **/
struct auth_node {
	int account_id, char_id;
	int login_id1, login_id2, sex, fd;
	time_t expiration_time;          // # of seconds 1/1/1970 (timestamp): Validity limit of the account (0 = unlimited)
	struct map_session_data *sd;     //Data from logged on char.
	int64 node_created;              //timestamp for node timeouts
	enum sd_state state;             //To track whether player was login in/out or changing maps.
};

#define chrif_char_offline(x) chrif->char_offline_nsd((x)->status.account_id,(x)->status.char_id)

/*=====================================
* Interface : chrif.h
* created by Susu
*-------------------------------------*/
struct chrif_interface {

	/* vars */

	int connected;
	int other_mapserver_count; //Holds count of how many other map servers are online (apart of this instance) [Skotlex]

	/* */
	struct eri *auth_db_ers; //For re-utilizing player login structures.
	struct DBMap *auth_db; // int id -> struct auth_node*
	/* */
	int packet_len_table[CHRIF_PACKET_LEN_TABLE_SIZE];
	int fd;
	int srvinfo;
	char ip_str[128];
	uint32 ip;
	uint16 port;
	char userid[NAME_LENGTH], passwd[NAME_LENGTH];
	int state;
	/* */
	void (*init) (bool minimal);
	void (*final) (void);
	/* funcs */
	void (*setuserid) (char* id);
	void (*setpasswd) (char* pwd);
	void (*checkdefaultlogin) (void);
	bool (*setip) (const char* ip);
	void (*setport) (uint16 port);

	int (*isconnected) (void);
	void (*check_shutdown) (void);

	struct auth_node* (*search) (int account_id);
	struct auth_node* (*auth_check) (int account_id, int char_id, enum sd_state state);
	bool (*auth_delete) (int account_id, int char_id, enum sd_state state);
	bool (*auth_finished) (struct map_session_data* sd);

	void (*authreq) (struct map_session_data* sd, bool hstandalone);
	void (*authok) (int fd);
	bool (*scdata_request) (int account_id, int char_id);
	bool (*save) (struct map_session_data* sd, int flag);
	bool (*charselectreq) (struct map_session_data* sd, uint32 s_ip);
	bool (*changemapserver) (struct map_session_data* sd, uint32 ip, uint16 port);

	bool (*searchcharid) (int char_id);
	bool (*changeemail) (int id, const char *actual_email, const char *new_email);
	bool (*char_ask_name) (int acc, const char* character_name, unsigned short operation_type, int year, int month, int day, int hour, int minute, int second);
	int (*updatefamelist) (struct map_session_data *sd);
	bool (*buildfamelist) (void);
	bool (*save_scdata) (struct map_session_data *sd);
	bool (*ragsrvinfo) (int base_rate,int job_rate, int drop_rate);
	//int (*char_offline) (struct map_session_data *sd);
	bool (*char_offline_nsd) (int account_id, int char_id);
	bool (*char_reset_offline) (void);
	bool (*send_users_tochar) (void);
	bool (*char_online) (struct map_session_data *sd);
	bool (*changesex) (struct map_session_data *sd, bool change_account);
	//int (*chardisconnect) (struct map_session_data *sd); // FIXME: Commented out in clif.c, function does not exist
	bool (*divorce) (int partner_id1, int partner_id2);

	bool (*removefriend) (int char_id, int friend_id);
	void (*send_report) (char* buf, int len);

	bool (*flush) (void);
	void (*skillid2idx) (int fd);

	bool (*sd_to_auth) (struct map_session_data *sd, enum sd_state state);
	int (*check_connect_char_server) (int tid, int64 tick, int id, intptr_t data);
	bool (*auth_logout) (struct map_session_data *sd, enum sd_state state);
	void (*save_ack) (int fd);
	int (*reconnect) (union DBKey key, struct DBData *data, va_list ap);
	int (*auth_db_cleanup_sub) (union DBKey key, struct DBData *data, va_list ap);
	bool (*char_ask_name_answer) (int acc, const char* player_name, uint16 type, uint16 answer);
	int (*auth_db_final) (union DBKey key, struct DBData *data, va_list ap);
	int (*send_usercount_tochar) (int tid, int64 tick, int id, intptr_t data);
	int (*auth_db_cleanup) (int tid, int64 tick, int id, intptr_t data);

	void (*connect) (int fd);
	void (*connectack) (int fd);
	void (*sendmap) (int fd);
	void (*sendmapack) (int fd);
	void (*recvmap) (int fd);
	bool (*changemapserverack) (int account_id, int login_id1, int login_id2, int char_id, short map_index, short x, short y, uint32 ip, uint16 port);
	void (*changedsex) (int fd);
	bool (*divorceack) (int char_id, int partner_id);
	void (*idbanned) (int fd);
	void (*recvfamelist) (int fd);
	bool (*load_scdata) (int fd);
	void (*update_ip) (int fd);
	int (*disconnectplayer) (int fd);
	void (*removemap) (int fd);
	int (*updatefamelist_ack) (int fd);
	void (*keepalive)(int fd);
	void (*keepalive_ack) (int fd);
	void (*deadopt) (int father_id, int mother_id, int child_id);
	void (*authfail) (int fd);
	void (*on_ready) (void);
	void (*on_disconnect) (void);
	int (*parse) (int fd);
	void (*save_scdata_single) (int account_id, int char_id, short type, struct status_change_entry *sce);
	void (*del_scdata_single) (int account_id, int char_id, short type);
};

void chrif_defaults(void);
extern struct chrif_interface *chrif;

#endif /* MAP_CHRIF_H */
