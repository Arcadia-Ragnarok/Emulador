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

#ifndef COMMON_PACKETSSTATIC_LEN_H
#define COMMON_PACKETSSTATIC_LEN_H

#ifdef packetLen
#error packetLen already defined
#endif

#define DEFINE_PACKET_HEADER(name, id) \
	STATIC_ASSERT((int32)(PACKET_LEN_##id) == -1 || sizeof(struct PACKET_##name) == \
		(size_t)PACKET_LEN_##id, "Wrong size PACKET_"#name); \
	enum { HEADER_##name = id };

#define DEFINE_PACKET_ID(name, id) \
	enum { HEADER_##name = id };

#define packetLen(id, len) PACKET_LEN_##id = (len),
enum packet_lengths {
#include "common/packets_len.h"
};
#undef packetLen

#endif /* COMMON_PACKETSSTATIC_LEN_H */
