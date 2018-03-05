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

#ifndef CHAR_INT_AUCTION_H
#define CHAR_INT_AUCTION_H

#include "common/db.h"
#include "common/mmo.h"

/* Forward Declarations */
struct DBMap; // common/db.h

/**
 * inter_auction_interface interface
 **/
struct inter_auction_interface {
	struct DBMap *db; // int auction_id -> struct auction_data*
	int (*count) (int char_id, bool buy);
	void (*save) (struct auction_data *auction);
	unsigned int (*create) (struct auction_data *auction);
	int (*end_timer) (int tid, int64 tick, int id, intptr_t data);
	void (*delete_) (struct auction_data *auction);
	void (*fromsql) (void);
	int (*parse_frommap) (int fd);
	int (*sql_init) (void);
	void (*sql_final) (void);
};

void inter_auction_defaults(void);
extern struct inter_auction_interface *inter_auction;

#endif /* CHAR_INT_AUCTION_H */
