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

#ifndef CHAR_INT_MERCENARY_H
#define CHAR_INT_MERCENARY_H

#include "config/core.h"
#include "common/cbasetypes.h"
#include "common/mmo.h"

struct mmo_charstatus;

/**
 * inter_mercenary interface
 **/
struct inter_mercenary_interface {
	bool (*owner_fromsql) (int char_id, struct mmo_charstatus *status);
	bool (*owner_tosql) (int char_id, struct mmo_charstatus *status);
	bool (*owner_delete) (int char_id);
	int (*sql_init) (void);
	void (*sql_final) (void);
	int (*parse_frommap) (int fd);

	bool (*create) (struct s_mercenary *merc);
	bool (*save) (const struct s_mercenary *merc);
	bool (*load) (int merc_id, int char_id, struct s_mercenary *merc);
	bool (*delete) (int merc_id);
};

void inter_mercenary_defaults(void);
extern struct inter_mercenary_interface *inter_mercenary;

#endif /* CHAR_INT_MERCENARY_H */
