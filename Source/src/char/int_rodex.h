/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
|                  Idealizado por: Spell Master                     |
\*-----------------------------------------------------------------*/

#ifndef CHAR_INT_RODEX_H
#define CHAR_INT_RODEX_H

#include "common/cbasetypes.h"
#include "common/mmo.h"
#include "common/db.h"

struct item;

/**
 * inter_rodex interface
 **/
struct inter_rodex_interface {
	int (*sql_init) (void);
	void (*sql_final) (void);
	int (*parse_frommap) (int fd);
	int (*fromsql) (int char_id, int account_id, int8 opentype, int64 mail_id, struct rodex_maillist *mails);
	bool (*hasnew) (int char_id, int account_id);
	bool (*checkname) (const char *name, int *target_char_id, short *target_class, int *target_level);
	int64 (*savemessage) (struct rodex_message* msg);
};

void inter_rodex_defaults(void);

extern struct inter_rodex_interface *inter_rodex;

#endif /* CHAR_INT_RODEX_H */
