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

#include "date.h"

#include "common/cbasetypes.h"

#include <time.h>

int date_get_year(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_year+1900;
}
int date_get_month(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_mon+1;
}
int date_get_day(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_mday;
}
int date_get_hour(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_hour;
}

int date_get_min(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_min;
}

int date_get_sec(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_sec;
}

int date_get_dayofweek(void)
{
	time_t t = time(NULL);
	struct tm *lt = localtime(&t);
	return lt->tm_wday;
}

// Returns YYYYMMDD of now
int date_get_date(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);

	return
		(lt->tm_year + 1900) * 10000 +
		(lt->tm_mon + 1) * 100 +
		(lt->tm_mday);
}

/*==========================================
 * Star gladiator related checks
 *------------------------------------------*/

bool is_day_of_sun(void)
{
	return date_get_day()%2 == 0;
}

bool is_day_of_moon(void)
{
	return date_get_day()%2 == 1;
}

bool is_day_of_star(void)
{
	return date_get_day()%5 == 0;
}
