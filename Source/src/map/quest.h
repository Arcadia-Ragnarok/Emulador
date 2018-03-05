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
\*-----------------------------------------------------------------*/

#ifndef MAP_QUEST_H
#define MAP_QUEST_H

#include "common/cbasetypes.h"
#include "common/mmo.h" // enum quest_state

/* Forward Declarations */
struct block_list;
struct config_setting_t;
struct map_session_data;

#define MAX_QUEST_DB (60355+1) // Highest quest ID + 1

struct quest_dropitem {
	int mob_id;
	int nameid;
	int rate;
};

struct quest_objective {
	int mob;
	int count;
};

struct quest_db {
	int id;
	unsigned int time;
	int objectives_count;
	struct quest_objective *objectives;
	int dropitem_count;
	struct quest_dropitem *dropitem;
	//char name[NAME_LENGTH];
};

// Questlog check types
enum quest_check_type {
	HAVEQUEST, ///< Query the state of the given quest
	PLAYTIME,  ///< Check if the given quest has been completed or has yet to expire
	HUNTING,   ///< Check if the given hunting quest's requirements have been met
};

struct quest_interface {
	struct quest_db **db_data; ///< Quest database
	struct quest_db dummy;                  ///< Dummy entry for invalid quest lookups
	/* */
	void (*init) (bool minimal);
	void (*final) (void);
	void (*reload) (void);
	/* */
	struct quest_db *(*db) (int quest_id);
	int (*pc_login) (struct map_session_data *sd);
	int (*add) (struct map_session_data *sd, int quest_id, unsigned int time_limit);
	int (*change) (struct map_session_data *sd, int qid1, int qid2);
	int (*delete) (struct map_session_data *sd, int quest_id);
	int (*update_objective_sub) (struct block_list *bl, va_list ap);
	void (*update_objective) (struct map_session_data *sd, int mob_id);
	int (*update_status) (struct map_session_data *sd, int quest_id, enum quest_state qs);
	int (*check) (struct map_session_data *sd, int quest_id, enum quest_check_type type);
	void (*clear) (void);
	int (*read_db) (void);
	struct quest_db *(*read_db_sub) (struct config_setting_t *cs, int n, const char *source);
};

void quest_defaults(void);
extern struct quest_interface *quest;

#endif /* MAP_QUEST_H */
