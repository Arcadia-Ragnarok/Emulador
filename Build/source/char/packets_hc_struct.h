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

#ifndef CHAR_PACKETS_HC_STRUCT_H
#define CHAR_PACKETS_HC_STRUCT_H

#include "config/core.h"
#include "common/cbasetypes.h"
#include "common/mmo.h"
#include "common/packetsstatic_len.h"

/* Packets Structs */
#if !defined(sun) && (!defined(__NETBSD__) || __NetBSD_Version__ >= 600000000) // NetBSD 5 and Solaris don't like pragma pack but accept the packed attribute
#pragma pack(push, 1)
#endif // not NetBSD < 6 / Solaris

#if PACKETVER_MAIN_NUM >= 20130522 || PACKETVER_RE_NUM >= 20130327 || defined(PACKETVER_ZERO)
struct PACKET_HC_ACK_CHARINFO_PER_PAGE {
	int16 packetId;
	int16 packetLen;
	// chars list[]
} __attribute__((packed));
DEFINE_PACKET_HEADER(HC_ACK_CHARINFO_PER_PAGE, 0x099d);
#endif

#if !defined(sun) && (!defined(__NETBSD__) || __NetBSD_Version__ >= 600000000) // NetBSD 5 and Solaris don't like pragma pack but accept the packed attribute
#pragma pack(pop)
#endif // not NetBSD < 6 / Solaris

#endif // CHAR_PACKETS_HC_STRUCT_H
