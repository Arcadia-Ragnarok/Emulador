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

#ifndef CHAR_PINCODE_H
#define CHAR_PINCODE_H

#include "common/cbasetypes.h"
#include "common/db.h"

/* Forward Declarations */
struct char_session_data;
struct config_t; // common/conf.h

enum pincode_make_response {
	PINCODE_MAKE_SUCCESS        = 0,
	PINCODE_MAKE_DUPLICATED     = 1,
	PINCODE_MAKE_RESTRICT_PW    = 2,
	PINCODE_MAKE_PERSONALNUM_PW = 3,
	PINCODE_MAKE_FAILED         = 4,
};

enum pincode_edit_response {
	PINCODE_EDIT_SUCCESS        = 0x0,
	PINCODE_EDIT_FAILED         = 0x1,
	PINCODE_EDIT_RESTRICT_PW    = 0x2,
	PINCODE_EDIT_PERSONALNUM_PW = 0x3,
};

enum pincode_login_response {
	PINCODE_LOGIN_OK          = 0,
	PINCODE_LOGIN_ASK         = 1,
	PINCODE_LOGIN_NOTSET      = 2,
	PINCODE_LOGIN_EXPIRED     = 3,
	PINCODE_LOGIN_RESTRICT_PW = 5,
	PINCODE_LOGIN_UNUSED      = 7,
	PINCODE_LOGIN_WRONG       = 8,
};

/**
 * pincode interface
 **/
struct pincode_interface {
	/* vars */
	int enabled;
	int changetime;
	int maxtry;
	int charselect;
	bool check_blacklist;
	VECTOR_DECL(char *) blacklist;
	unsigned int multiplier;
	unsigned int baseSeed;
	/* handler */
	void (*handle) (int fd, struct char_session_data* sd);
	void (*decrypt) (unsigned int userSeed, char* pin);
	void (*error) (int account_id);
	void (*update) (int account_id, char* pin);
	void (*makestate) (int fd, struct char_session_data *sd, enum pincode_make_response state);
	void (*editstate) (int fd, struct char_session_data *sd, enum pincode_edit_response state);
	void (*loginstate) (int fd, struct char_session_data *sd, enum pincode_login_response state);
	void (*setnew) (int fd, struct char_session_data* sd);
	void (*change) (int fd, struct char_session_data* sd);
	bool (*isBlacklisted) (const char *pin);
	int  (*compare) (int fd, struct char_session_data* sd, char* pin);
	void (*check) (int fd, struct char_session_data* sd);
	bool (*config_read) (const char *filename, const struct config_t *config);
	void (*init) (void);
	void (*final) (void);
};

void pincode_defaults(void);
extern struct pincode_interface *pincode;

#endif /* CHAR_PINCODE_H */
