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

#ifndef LOGIN_LOGINLOG_H
#define LOGIN_LOGINLOG_H

#include "common/cbasetypes.h"

struct config_t;

struct s_loginlog_dbs {
	char log_db_hostname[32];
	uint16 log_db_port;
	char log_db_username[32];
	char log_db_password[100];
	char log_db_database[32];
	char log_codepage[32];
	char log_login_db[256];
};

/**
 * Loginlog.c Interface
 **/
struct loginlog_interface {
	struct Sql *sql_handle;
	bool enabled;
	struct s_loginlog_dbs *dbs;
	unsigned long (*failedattempts) (uint32 ip, unsigned int minutes);
	void (*log) (uint32 ip, const char* username, int rcode, const char* message);
	bool (*init) (void);
	bool (*final) (void);
	bool (*config_read_names) (const char *filename, struct config_t *config);
	bool (*config_read_log) (const char *filename, struct config_t *config);
	bool (*config_read) (const char *filename);
};

void loginlog_defaults(void);
extern struct loginlog_interface *loginlog;

#endif /* LOGIN_LOGINLOG_H */
