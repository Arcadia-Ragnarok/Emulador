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

#ifndef CHAR_INT_ACHIEVEMENT_H
#define CHAR_INT_ACHIEVEMENT_H

#include "config/core.h"
#include "common/cbasetypes.h"
#include "common/db.h"

struct achievement;
struct char_achievements;

/**
 * inter_achievement Interface
 */
struct inter_achievement_interface {
	struct DBMap *char_achievements;
	/* */
	int (*sql_init) (void);
	void (*sql_final) (void);
	/* */
	int (*tosql) (int char_id, struct char_achievements *cp, const struct char_achievements *p);
	bool (*fromsql) (int char_id, struct char_achievements *a);
	/* */
	struct DBData(*ensure_char_achievements) (union DBKey key, va_list args);
	int (*char_achievements_clear) (union DBKey key, struct DBData *data, va_list args);
	/* */
	int (*parse_frommap) (int fd);
};

void inter_achievement_defaults(void);
extern struct inter_achievement_interface *inter_achievement;
#endif /* CHAR_INT_ACHIEVEMENT_H */
