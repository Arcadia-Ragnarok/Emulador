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

#ifndef CHAR_INTER_H
#define CHAR_INTER_H

#include "config/core.h"
#include "common/cbasetypes.h"
#include "common/db.h"

#include <stdarg.h>

/* Forward Declarations */
struct Sql; // common/sql.h
struct config_t; // common/conf.h

struct WisData {
	int id, fd, count, len;
	int64 tick;
	unsigned char src[24], dst[24], msg[512];
};

/**
 * inter interface
 **/
struct inter_interface {
	bool enable_logs; ///< Whether to log inter-server operations.
	struct Sql *sql_handle;
	const char* (*msg_txt) (int msg_number);
	bool (*msg_config_read) (const char *cfg_name, bool allow_override);
	void (*do_final_msg) (void);
	const char* (*job_name) (int class);
	void (*vmsg_to_fd) (int fd, int u_fd, int aid, char* msg, va_list ap);
	void (*msg_to_fd) (int fd, int u_fd, int aid, char *msg, ...) __attribute__((format(printf, 4, 5)));
	void (*savereg) (int account_id, int char_id, const char *key, unsigned int index, intptr_t val, bool is_string);
	int (*accreg_fromsql) (int account_id,int char_id, int fd, int type);
	int (*vlog) (char* fmt, va_list ap);
	int (*log) (char* fmt, ...);
	int (*init_sql) (const char *file);
	int (*mapif_init) (int fd);
	int (*check_ttl_wisdata_sub) (union DBKey key, struct DBData *data, va_list ap);
	int (*check_ttl_wisdata) (void);
	int (*check_length) (int fd, int length);
	int (*parse_frommap) (int fd);
	void (*final) (void);
	bool (*config_read) (const char *filename);
	bool (*config_read_log) (const char *filename, const struct config_t *config);
	bool (*config_read_connection) (const char *filename, const struct config_t *config);
	void (*accinfo) (int u_fd, int aid, int castergroup, const char *query, int map_fd);
	void (*accinfo2) (bool success, int map_fd, int u_fd, int u_aid, int account_id, const char *userid, const char *user_pass,
			const char *email, const char *last_ip, const char *lastlogin, const char *pin_code, const char *birthdate,
			int group_id, int logincount, int state);
	struct WisData *(*add_wisdata) (int fd, const unsigned char *src, const unsigned char *dst, const unsigned char *msg, int msg_len);
	struct WisData *(*get_wisdata) (int id);
	void (*remove_wisdata) (int id);
};

//extern int party_share_level; // party_share_level
void inter_defaults(void);
extern struct inter_interface *inter;

#endif /* CHAR_INTER_H */
