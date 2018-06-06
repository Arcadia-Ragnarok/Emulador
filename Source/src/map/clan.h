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
| - Copyright: Hercules Emulator                                    |
\*-----------------------------------------------------------------*/

#ifndef MAP_CLAN_H
#define MAP_CLAN_H

#include "map/map.h"
#include "common/db.h"
#include "common/mmo.h"

struct map_session_data;

enum clan_req_state {
	CLAN_REQ_NONE       = 0,
	CLAN_REQ_FIRST      = 1,
	CLAN_REQ_RELOAD     = 2,
	CLAN_REQ_AFTER_KICK = 3,
};

/**
 * clan Interface
 **/
struct clan_interface {
	struct DBMap *db; // int clan_id -> struct clan*

	int max;
	int max_relations;
	int kicktime;
	int checktime;
	int req_timeout;

	void (*init) (bool minimal);
	void (*final) (void);

	bool (*config_read) (bool reload);
	void (*config_read_additional_settings) (struct config_setting_t *settings, const char *source);
	void (*read_db) (struct config_setting_t *settings, const char *source, bool reload);
	int (*read_db_sub) (struct config_setting_t *settings, const char *source, bool reload);
	void (*read_db_additional_fields) (struct clan *entry, struct config_setting_t *t, int n, const char *source);
	void (*read_buffs) (struct clan *c, struct config_setting_t *buff, const char *source);
	struct clan *(*search) (int clan_id);
	struct clan *(*searchname) (const char *name);
	struct map_session_data *(*getonlinesd) (struct clan *c);
	int (*getindex) (const struct clan *c, int char_id);
	bool (*join) (struct map_session_data *sd, int clan_id);
	void (*member_online) (struct map_session_data *sd, bool first);
	bool (*leave) (struct map_session_data *sd, bool first);
	bool (*send_message) (struct map_session_data *sd, const char *mes);
	void (*recv_message) (struct clan *c, const char *mes, int len);
	void (*member_offline) (struct map_session_data *sd);
	void (*set_constants) (void);
	int (*get_id) (const struct block_list *bl);
	void (*buff_start) (struct map_session_data *sd, struct clan *c);
	void (*buff_end) (struct map_session_data *sd, struct clan *c);
	void (*reload) (void);
	int (*rejoin) (struct map_session_data *sd, va_list ap);
	int (*inactivity_kick) (int tid, int64 tick, int id, intptr_t data);
	int (*request_kickoffline) (int tid, int64 tick, int id, intptr_t data);
	int (*request_membercount) (int tid, int64 tick, int id, intptr_t data);
};

void clan_defaults (void);
extern struct clan_interface *clan;

#endif /* MAP_CLAN_H */
