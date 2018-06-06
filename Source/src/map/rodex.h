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
\*-----------------------------------------------------------------*/

#ifndef MAP_RODEX_H
#define MAP_RODEX_H

#include "common/mmo.h"
#include "common/cbasetypes.h"

#define RODEX_WEIGHT_LIMIT (2000 * 10)

struct rodex_message;

enum rodex_add_item {
	RODEX_ADD_ITEM_SUCCESS = 0,
	RODEX_ADD_ITEM_WEIGHT_ERROR = 1,
	RODEX_ADD_ITEM_FATAL_ERROR = 2,
	RODEX_ADD_ITEM_NO_SPACE = 3,
	RODEX_ADD_ITEM_NOT_TRADEABLE = 4,
};

enum rodex_send_mail {
	RODEX_SEND_MAIL_SUCCESS = 0,
	RODEX_SEND_MAIL_FATAL_ERROR = 1,
	RODEX_SEND_MAIL_COUNT_ERROR = 2,
	RODEX_SEND_MAIL_ITEM_ERROR = 3,
	RODEX_SEND_MAIL_RECEIVER_ERROR = 4
};

enum rodex_get_zeny {
	RODEX_GET_ZENY_SUCCESS = 0,
	RODEX_GET_ZENY_FATAL_ERROR = 1,
	RODEX_GET_ZENY_LIMIT_ERROR = 2
};

enum rodex_get_items {
	RODEX_GET_ITEMS_SUCCESS = 0,
	RODEX_GET_ITEM_FATAL_ERROR = 1,
	RODEX_GET_ITEM_FULL_ERROR = 2,
};

struct rodex_interface {
	void (*init) (bool minimal);
	void (*final) (void);

	bool (*isenabled) (void);
	void (*open) (struct map_session_data *sd, int8 open_type, int64 first_mail_id);
	void (*next_page) (struct map_session_data *sd, int8 open_type, int64 last_mail_id);
	void (*refresh) (struct map_session_data *sd, int8 open_type, int64 first_mail_id);
	void (*add_item) (struct map_session_data *sd, int16 idx, int16 amount);
	void (*remove_item) (struct map_session_data *sd, int16 idx, int16 amount);
	void (*check_player) (struct map_session_data *sd, const char *name, int *base_level, int *char_id, short *class);
	int (*send_mail) (struct map_session_data *sd, const char *receiver_name, const char *body, const char *title, int64 zeny);
	void (*send_mail_result) (struct map_session_data *ssd, struct map_session_data *rsd, bool result);
	struct rodex_message *(*get_mail) (struct map_session_data *sd, int64 mail_id);
	void (*read_mail) (struct map_session_data *sd, int64 mail_id);
	void (*get_zeny) (struct map_session_data *sd, int8 opentype, int64 mail_id);
	void (*get_items) (struct map_session_data *sd, int8 opentype, int64 mail_id);
	void (*delete_mail) (struct map_session_data *sd, int64 mail_id);
	void (*clean) (struct map_session_data *sd, int8 flag);
};

void rodex_defaults(void);
extern struct rodex_interface *rodex;

#endif
