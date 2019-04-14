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

#ifndef CHAR_INT_ELEMENTAL_H
#define CHAR_INT_ELEMENTAL_H

#include "config/core.h"
#include "common/cbasetypes.h"
#include "common/mmo.h"

/**
 * inter_elemental_interface interface
 **/
struct inter_elemental_interface {
	void (*sql_init) (void);
	void (*sql_final) (void);
	int (*parse_frommap) (int fd);

	bool (*create) (struct s_elemental *ele);
	bool (*save) (const struct s_elemental *ele);
	bool (*load) (int ele_id, int char_id, struct s_elemental *ele);
	bool (*delete) (int ele_id);
};

#ifdef HERCULES_CORE
void inter_elemental_defaults(void);
#endif // HERCULES_CORE

extern struct inter_elemental_interface *inter_elemental;

#endif /* CHAR_INT_ELEMENTAL_H */
