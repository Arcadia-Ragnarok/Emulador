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

#define HERCULES_CORE

#include "config/core.h" // CONSOLE_INPUT, MAX_CONSOLE_INPUT
#include "common/packets.h"

#include "common/cbasetypes.h"
#include "common/mmo.h"
#include "common/nullpo.h"

#include <string.h>

static struct packets_interface packets_s;
struct packets_interface *packets;

static void packets_init(void)
{
	packets->addLens();
}

static void packets_addLens(void)
{
#define packetLen(id, len) packets->addLen(id, len);
#include "common/packets_len.h"
}

static void packets_addLen(int id, int len)
{
	Assert_retv(id <= MAX_PACKET_DB && id >= MIN_PACKET_DB);
	packets->db[id] = len;
}

static void packets_final(void)
{
}

void packets_defaults(void)
{
	packets = &packets_s;
	packets->init = packets_init;
	packets->final = packets_final;
	packets->addLens = packets_addLens;
	packets->addLen = packets_addLen;

	memset(&packets->db, 0, sizeof(packets->db));
}
