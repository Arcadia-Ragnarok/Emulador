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

#ifndef COMMON_PACKETS_LEN_H
#define COMMON_PACKETS_LEN_H

#if defined(PACKETVER_ZERO)
#include "common/packets/packets_len_zero.h"
#elif defined(PACKETVER_RE)
#include "common/packets/packets_len_re.h"
#elif defined(PACKETVER_SAK)
#include "common/packets/packets_len_sak.h"
#elif defined(PACKETVER_AD)
#include "common/packets/packets_len_ad.h"
#else
#include "common/packets/packets_len_main.h"
#endif

#endif /* COMMON_PACKETS_LEN_H */
