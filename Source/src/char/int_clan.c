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
| - Copyright: Hercules Emulator                                    |
\*-----------------------------------------------------------------*/

#define MAIN_CORE

#include "config/core.h" // DBPATH
#include "int_clan.h"

#include "char/char.h"
#include "char/inter.h"
#include "char/mapif.h"
#include "common/cbasetypes.h"
#include "common/memmgr.h"
#include "common/mmo.h"
#include "common/nullpo.h"
#include "common/showmsg.h"
#include "common/socket.h"
#include "common/sql.h"
#include "common/strlib.h"
#include "common/timer.h"

#include <stdio.h>
#include <stdlib.h>

struct inter_clan_interface inter_clan_s;
struct inter_clan_interface *inter_clan;

/**
 * Kick offline members of a clan
 *
 * Perform the update on the DB to reset clan id to 0
 * of the members that are inactive for too long
 *
 * @param clan_id Id of the clan
 * @param kick_interval Time needed to consider a player inactive and kick it
 * @return 0 on failure, 1 on success
 */
int inter_clan_kick_inactive_members(int clan_id, int kick_interval)
{
	if (clan_id <= 0) {
		ShowError("inter_clan_kick_inactive_members: Id invalido de cla recebido '%d'\n", clan_id);
		Assert_report(clan_id > 0);
		return 0;
	} else if (kick_interval <= 0) {
		ShowError("inter_clan_kick_inactive_members: Invalido kick_interval recebido '%d'", kick_interval);
		Assert_report(kick_interval > 0);
		return 0;
	}

	// Kick Inactive members
	if (SQL_ERROR == SQL->Query(inter->sql_handle, "UPDATE `%s` SET "
		"`clan_id` = 0 WHERE `clan_id` = '%d' AND `online` = 0 AND `last_login` < %"PRId64,
		char_db, clan_id, (int64)(time(NULL) - kick_interval)))
	{
		Sql_ShowDebug(inter->sql_handle);
		return 0;
	}

	return 1;
}

/**
 * Count members of a clan
 *
 * @param clan_id Id of the clan
 * @param kick_interval Time needed to consider a player inactive and ignore it on the count
 */
int inter_clan_count_members(int clan_id, int kick_interval)
{
	struct SqlStmt *stmt;
	int count = 0;

	if (clan_id <= 0) {
		ShowError("inter_clan_count_members: Id invalido de cla recebido '%d'\n", clan_id);
		Assert_report(clan_id > 0);
		return 0;
	} else if (kick_interval <= 0) {
		ShowError("inter_clan_count_member: Invalido kick_interval recebido '%d'", kick_interval);
		Assert_report(kick_interval > 0);
		return 0;
	}

	stmt = SQL->StmtMalloc(inter->sql_handle);
	if (stmt == NULL) {
		SqlStmt_ShowDebug(stmt);
		return 0;
	}

	// Count members
	if (SQL_ERROR == SQL->StmtPrepare(stmt, "SELECT COUNT(*) FROM `%s` WHERE `clan_id` = ? AND `last_login` >= %"PRId64, char_db, (int64)(time(NULL) - kick_interval))
	 || SQL_ERROR == SQL->StmtBindParam(stmt, 0, SQLDT_INT, &clan_id, sizeof(clan_id))
	 || SQL_ERROR == SQL->StmtExecute(stmt)
	 || SQL_ERROR == SQL->StmtBindColumn(stmt, 0, SQLDT_INT, &count, sizeof(count), NULL, NULL)
	) {
		SqlStmt_ShowDebug(stmt);
		SQL->StmtFree(stmt);
		return 0;
	}

	if (SQL->StmtNumRows(stmt) > 0 && SQL_SUCCESS != SQL->StmtNextRow(stmt)) {
		SqlStmt_ShowDebug(stmt);
		SQL->StmtFree(stmt);
		return 0;
	}

	SQL->StmtFree(stmt);
	return count;
}

int mapif_parse_ClanMemberCount(int fd, int clan_id, int kick_interval)
{

	WFIFOHEAD(fd, 10);
	WFIFOW(fd, 0) = 0x3858;
	WFIFOL(fd, 2) = clan_id;
	WFIFOL(fd, 6) = inter_clan->count_members(clan_id, kick_interval);
	WFIFOSET(fd, 10);
	return 0;
}

int mapif_parse_ClanMemberKick(int fd, int clan_id, int kick_interval)
{
	int count = 0;

	if (inter_clan->kick_inactive_members(clan_id, kick_interval) == 1)
		count = inter_clan->count_members(clan_id, kick_interval);

	WFIFOHEAD(fd, 10);
	WFIFOW(fd, 0) = 0x3858;
	WFIFOL(fd, 2) = clan_id;
	WFIFOL(fd, 6) = count;
	WFIFOSET(fd, 10);
	return 0;
}

// Communication from the map server
// - Can analyzed only one by one packet
// Data packet length that you set to inter.c
//- Shouldn't do checking and packet length, RFIFOSKIP is done by the caller
// Must Return
//  1 : ok
//  0 : error
int inter_clan_parse_frommap(int fd)
{
	RFIFOHEAD(fd);

	switch(RFIFOW(fd, 0)) {
	case 0x3044: mapif->parse_ClanMemberCount(fd, RFIFOL(fd, 2), RFIFOL(fd, 6)); break;
	case 0x3045: mapif->parse_ClanMemberKick(fd, RFIFOL(fd, 2), RFIFOL(fd, 6)); break;

	default:
		return 0;
	}

	return 1;
}

void inter_clan_defaults(void)
{
	inter_clan = &inter_clan_s;

	inter_clan->kick_inactive_members = inter_clan_kick_inactive_members;
	inter_clan->count_members = inter_clan_count_members;
	inter_clan->parse_frommap = inter_clan_parse_frommap;
}
