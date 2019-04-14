/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|                                                |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Athena & Hercules                                    |
| - Copyright: Spell master (Source Mod)                            |
\*-----------------------------------------------------------------*/

#ifndef CHAR_INT_PARTY_H
#define CHAR_INT_PARTY_H

#include "config/core.h"
#include "common/cbasetypes.h"
#include "common/mmo.h"

/* Forward Declarations */
struct DBMap; // common/db.h

//Party Flags on what to save/delete.
enum {
	PS_CREATE = 0x01, //Create a new party entry (index holds leader's info)
	PS_BASIC = 0x02, //Update basic party info.
	PS_LEADER = 0x04, //Update party's leader
	PS_ADDMEMBER = 0x08, //Specify new party member (index specifies which party member)
	PS_DELMEMBER = 0x10, //Specify member that left (index specifies which party member)
	PS_BREAK = 0x20, //Specify that this party must be deleted.
};

struct party_data {
	struct party party;
	unsigned int min_lv, max_lv;
	int family; //Is this party a family? if so, this holds the child id.
	unsigned char size; //Total size of party.
};

/**
 * inter_party interface
 **/
struct inter_party_interface {
	struct party_data *pt;
	struct DBMap *db;  // int party_id -> struct party_data*
	int (*check_lv) (struct party_data *p);
	void (*calc_state) (struct party_data *p);
	int (*tosql) (struct party *p, int flag, int index);
	struct party_data* (*fromsql) (int party_id);
	int (*sql_init) (void);
	void (*sql_final) (void);
	struct party_data* (*search_partyname) (const char *str);
	int (*check_exp_share) (struct party_data *p);
	int (*check_empty) (struct party_data *p);
	int (*parse_frommap) (int fd);
	bool (*leave) (int party_id,int account_id, int char_id);
	int (*CharOnline) (int char_id, int party_id);
	int (*CharOffline) (int char_id, int party_id);
	struct party_data *(*create) (const char *name, int item, int item2, const struct party_member *leader);
	bool (*add_member) (int party_id, const struct party_member *member);
	bool (*change_option) (int party_id, int account_id, int exp, int item, int map_fd);
	bool (*change_map) (int party_id, int account_id, int char_id, unsigned short map, int online, unsigned int lv);
	bool (*disband) (int party_id);
	bool (*change_leader) (int party_id, int account_id, int char_id);
};

void inter_party_defaults(void);
extern struct inter_party_interface *inter_party;

#endif /* CHAR_INT_PARTY_H */
