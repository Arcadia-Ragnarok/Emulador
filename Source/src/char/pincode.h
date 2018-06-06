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

/* Forward Declarations */
struct char_session_data;
struct config_t; // common/conf.h

enum PincodeResponseCode {
	PINCODE_OK      = 0,
	PINCODE_ASK     = 1,
	PINCODE_NOTSET  = 2,
	PINCODE_EXPIRED = 3,
	PINCODE_UNUSED  = 7,
	PINCODE_WRONG   = 8,
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
	unsigned int multiplier;
	unsigned int baseSeed;
	/* handler */
	void (*handle) (int fd, struct char_session_data* sd);
	void (*decrypt) (unsigned int userSeed, char* pin);
	void (*error) (int account_id);
	void (*update) (int account_id, char* pin);
	void (*sendstate) (int fd, struct char_session_data* sd, uint16 state);
	void (*setnew) (int fd, struct char_session_data* sd);
	void (*change) (int fd, struct char_session_data* sd);
	int  (*compare) (int fd, struct char_session_data* sd, char* pin);
	void (*check) (int fd, struct char_session_data* sd);
	bool (*config_read) (const char *filename, const struct config_t *config);
};

void pincode_defaults(void);
extern struct pincode_interface *pincode;

#endif /* CHAR_PINCODE_H */
