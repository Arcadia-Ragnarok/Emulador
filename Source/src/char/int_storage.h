/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
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

#ifndef CHAR_INT_STORAGE_H
#define CHAR_INT_STORAGE_H

#include "common/cbasetypes.h"
#include "common/db.h"
#include "common/mmo.h"

struct storage_data;
struct guild_storage;

/**
 * inter_storage interface
 **/
struct inter_storage_interface {
	int (*tosql) (int account_id, const struct storage_data *p);
	int (*fromsql) (int account_id, struct storage_data *p);
	int (*guild_storage_tosql) (int guild_id, const struct guild_storage *p);
	int (*guild_storage_fromsql) (int guild_id, struct guild_storage* p);
	int (*sql_init) (void);
	void (*sql_final) (void);
	int (*delete_) (int account_id);
	int (*guild_storage_delete) (int guild_id);
	int (*parse_frommap) (int fd);
};

void inter_storage_defaults(void);

extern struct inter_storage_interface *inter_storage;

#endif /* CHAR_INT_STORAGE_H */
