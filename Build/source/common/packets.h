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

#ifndef COMMON_PACKETS_H
#define COMMON_PACKETS_H

#include "config/core.h"
#include "common/cbasetypes.h"

#ifndef MIN_PACKET_DB
#define MIN_PACKET_DB 0x0064
#endif

#ifndef MAX_PACKET_DB
#define MAX_PACKET_DB 0x0F00
#endif

struct packets_interface {
	void (*init) (void);
	void (*final) (void);
	void (*addLens) (void);
	void (*addLen) (int id, int len);
	int db[MAX_PACKET_DB + 1];
};

void packets_defaults(void);
extern struct packets_interface *packets;

#endif /* COMMON_PACKETS_H */
