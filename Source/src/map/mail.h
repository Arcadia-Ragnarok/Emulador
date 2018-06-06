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

#ifndef MAP_MAIL_H
#define MAP_MAIL_H

#include "common/cbasetypes.h"

struct item;
struct mail_message;
struct map_session_data;

struct mail_interface {
	void (*clear) (struct map_session_data *sd);
	int (*removeitem) (struct map_session_data *sd, short flag);
	int (*removezeny) (struct map_session_data *sd, short flag);
	unsigned char (*setitem) (struct map_session_data *sd, int idx, int amount);
	bool (*setattachment) (struct map_session_data *sd, struct mail_message *msg);
	void (*getattachment) (struct map_session_data* sd, int zeny, struct item* item);
	int (*openmail) (struct map_session_data *sd);
	void (*deliveryfail) (struct map_session_data *sd, struct mail_message *msg);
	bool (*invalid_operation) (struct map_session_data *sd);
};

void mail_defaults(void);
extern struct mail_interface *mail;

#endif /* MAP_MAIL_H */
