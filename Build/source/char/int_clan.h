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

#ifndef CHAR_INT_CLAN_H
#define CHAR_INT_CLAN_H

#include "common/mmo.h"

/**
 * inter clan Interface
 **/
struct inter_clan_interface {
	int (*kick_inactive_members) (int clan_id, int kick_interval);
	int (*count_members) (int clan_id, int kick_interval);
	int (*parse_frommap) (int fd);
};

void inter_clan_defaults(void);
extern struct inter_clan_interface *inter_clan;
#endif /* CHAR_INT_CLAN_H */
