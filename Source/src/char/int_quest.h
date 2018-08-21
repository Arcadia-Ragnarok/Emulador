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

#ifndef CHAR_INT_QUEST_H
#define CHAR_INT_QUEST_H

#include "common/cbasetypes.h"

/**
 * inter_quest interface
 **/
struct inter_quest_interface {
	int (*parse_frommap) (int fd);

	struct quest *(*fromsql) (int char_id, int *count);
	bool (*delete) (int char_id, int quest_id);
	bool (*add) (int char_id, struct quest qd);
	bool (*update) (int char_id, struct quest qd);
	bool (*save) (int char_id, const struct quest *new_qd, int new_n);
};

void inter_quest_defaults(void);

extern struct inter_quest_interface *inter_quest;

#endif /* CHAR_INT_QUEST_H */
