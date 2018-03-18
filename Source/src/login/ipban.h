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

#ifndef LOGIN_IPBAN_H
#define LOGIN_IPBAN_H

#include "common/cbasetypes.h"

/* Forward Declarations */
struct config_t; // common/conf.h

struct s_ipban_dbs {
	char   db_hostname[32];
	uint16 db_port;
	char   db_username[32];
	char   db_password[100];
	char   db_database[32];
	char   codepage[32];
	char   table[32];
};

/**
 * Ipban.c Interface
 **/
struct ipban_interface {
	struct s_ipban_dbs *dbs;
	struct Sql *sql_handle;
	int cleanup_timer_id;
	bool inited;
	void (*init) (void);
	void (*final) (void);
	int (*cleanup) (int tid, int64 tick, int id, intptr_t data);
	bool (*config_read_inter) (const char *filename);
	bool (*config_read_connection) (const char *filename, struct config_t *config);
	bool (*config_read_dynamic) (const char *filename, struct config_t *config);
	bool (*config_read) (const char *filename, struct config_t *config);
	bool (*check) (uint32 ip);
	void (*log) (uint32 ip);
};

void ipban_defaults(void);
extern struct ipban_interface *ipban;

#endif /* LOGIN_IPBAN_H */
