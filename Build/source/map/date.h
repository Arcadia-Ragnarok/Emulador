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

#ifndef MAP_DATE_H
#define MAP_DATE_H

#include "common/cbasetypes.h"

// TODO: Interface
int date_get_year(void);
int date_get_month(void);
int date_get_day(void);
int date_get_hour(void);
int date_get_min(void);
int date_get_sec(void);
int date_get_dayofweek(void);
int date_get_date(void);

bool is_day_of_sun(void);
bool is_day_of_moon(void);
bool is_day_of_star(void);
#endif /* MAP_DATE_H */
