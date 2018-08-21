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

#ifndef CHAR_INT_PET_H
#define CHAR_INT_PET_H

#include "common/mmo.h"

struct s_pet;

/**
 * inter_pet interface
 **/
struct inter_pet_interface {
	struct s_pet *pt;
	int (*tosql) (const struct s_pet *p);
	int (*fromsql) (int pet_id, struct s_pet* p);
	int (*sql_init) (void);
	void (*sql_final) (void);
	int (*delete_) (int pet_id);
	int (*parse_frommap) (int fd);
	struct s_pet *(*create) (int account_id, int char_id, short pet_class, short pet_lv, short pet_egg_id,
			short pet_equip, short intimate, short hungry, char rename_flag, char incubate, const char *pet_name);
	struct s_pet *(*load) (int account_id, int char_id, int pet_id);
};

void inter_pet_defaults(void);
extern struct inter_pet_interface *inter_pet;

#endif /* CHAR_INT_PET_H */
