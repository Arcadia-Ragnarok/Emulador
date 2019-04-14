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

#ifndef CHAR_INT_HOMUN_H
#define CHAR_INT_HOMUN_H

#include "config/core.h"
#include "common/cbasetypes.h"
#include "common/mmo.h"

/**
 * inter_homunculus interface
 **/
struct inter_homunculus_interface {
	int (*sql_init) (void);
	void (*sql_final) (void);
	int (*parse_frommap) (int fd);

	bool (*create) (struct s_homunculus *hd);
	bool (*save) (const struct s_homunculus *hd);
	bool (*load) (int homun_id, struct s_homunculus* hd);
	bool (*delete) (int homun_id);
	bool (*rename) (const char *name);
};

void inter_homunculus_defaults(void);
extern struct inter_homunculus_interface *inter_homunculus;

#endif /* CHAR_INT_HOMUN_H */
