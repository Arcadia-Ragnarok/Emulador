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

#ifndef MAP_MESSAGES_H
#define MAP_MESSAGES_H

#if defined(PACKETVER_ZERO)
#include "map/messages_zero.h"
#elif defined(PACKETVER_RE)
#include "map/messages_re.h"
#elif defined(PACKETVER_SAK)
#include "map/messages_sak.h"
#elif defined(PACKETVER_AD)
#include "map/messages_ad.h"
#else
#include "map/messages_main.h"
#endif

#endif /* MAP_MESSAGES_H */
