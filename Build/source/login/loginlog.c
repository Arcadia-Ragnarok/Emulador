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


#include "loginlog.h"

#include "common/cbasetypes.h"
#include "common/conf.h"
#include "common/mmo.h"
#include "common/nullpo.h"
#include "common/showmsg.h"
#include "common/socket.h"
#include "common/sql.h"
#include "common/strlib.h"

#include <stdlib.h> // exit


static struct loginlog_interface loginlog_s;
struct loginlog_interface *loginlog;
static struct s_loginlog_dbs loginlogdbs;


// Returns the number of failed login attempts by the ip in the last minutes.
static unsigned long loginlog_failedattempts(uint32 ip, unsigned int minutes)
{
	unsigned long failures = 0;

	if( !loginlog->enabled )
		return 0;

	if( SQL_ERROR == SQL->Query(loginlog->sql_handle, "SELECT count(*) FROM `%s` WHERE `ip` = '%s' AND `rcode` = '1' AND `time` > NOW() - INTERVAL %u MINUTE",
		loginlog->dbs->log_login_db, sockt->ip2str(ip,NULL), minutes) )// how many times failed account? in one ip.
		Sql_ShowDebug(loginlog->sql_handle);

	if( SQL_SUCCESS == SQL->NextRow(loginlog->sql_handle) )
	{
		char* data;
		SQL->GetData(loginlog->sql_handle, 0, &data, NULL);
		failures = strtoul(data, NULL, 10);
		SQL->FreeResult(loginlog->sql_handle);
	}
	return failures;
}


/*=============================================
 * Records an event in the login log
 *---------------------------------------------*/
// TODO: add an enum of rcode values
static void loginlog_log(uint32 ip, const char *username, int rcode, const char *message)
{
	char esc_username[NAME_LENGTH*2+1];
	char esc_message[255*2+1];
	int retcode;

	nullpo_retv(username);
	nullpo_retv(message);
	if( !loginlog->enabled )
		return;

	SQL->EscapeStringLen(loginlog->sql_handle, esc_username, username, strnlen(username, NAME_LENGTH));
	SQL->EscapeStringLen(loginlog->sql_handle, esc_message, message, strnlen(message, 255));

	retcode = SQL->Query(loginlog->sql_handle,
		"INSERT INTO `%s`(`time`,`ip`,`user`,`rcode`,`log`) VALUES (NOW(), '%s', '%s', '%d', '%s')",
		loginlog->dbs->log_login_db, sockt->ip2str(ip,NULL), esc_username, rcode, esc_message);

	if( retcode != SQL_SUCCESS )
		Sql_ShowDebug(loginlog->sql_handle);
}

static bool loginlog_init(void)
{
	loginlog->sql_handle = SQL->Malloc();

	if (SQL_ERROR == SQL->Connect(loginlog->sql_handle, loginlog->dbs->log_db_username, loginlog->dbs->log_db_password,
	                              loginlog->dbs->log_db_hostname, loginlog->dbs->log_db_port, loginlog->dbs->log_db_database)) {
		Sql_ShowDebug(loginlog->sql_handle);
		SQL->Free(loginlog->sql_handle);
		exit(EXIT_FAILURE);
	}

	if (loginlog->dbs->log_codepage[0] != '\0' && SQL_ERROR == SQL->SetEncoding(loginlog->sql_handle, loginlog->dbs->log_codepage))
		Sql_ShowDebug(loginlog->sql_handle);

	loginlog->enabled = true;

	return true;
}

static bool loginlog_final(void)
{
	SQL->Free(loginlog->sql_handle);
	loginlog->sql_handle = NULL;
	return true;
}

/**
 * Reads 'inter_configuration/database_names' and initializes required
 * variables/Sets global configuration.
 *
 * @param filename Path to configuration file (used in error and warning messages).
 * @param config   The current config being parsed.
 *
 * @retval false in case of error.
 */
static bool loginlog_config_read_names(const char *filename, struct config_t *config)
{
	struct config_setting_t *setting = NULL;

	nullpo_retr(false, filename);
	nullpo_retr(false, config);

	if ((setting = libconfig->lookup(config, "inter_configuration/database_names")) == NULL) {
		ShowError("loginlog_config_read: inter_configuration/database_names was not found in %s!\n", filename);
		return false;
	}

	libconfig->setting_lookup_mutable_string(setting, "login_db", loginlog->dbs->log_login_db, sizeof(loginlog->dbs->log_login_db));

	return true;
}

/**
 * Reads 'inter_configuration.log' and initializes required variables/Sets
 * global configuration.
 *
 * @param filename Path to configuration file (used in error and warning messages).
 * @param config   The current config being parsed.
 *
 * @retval false in case of error.
 */
static bool loginlog_config_read_log(const char *filename, struct config_t *config)
{
	struct config_setting_t *setting = NULL;

	nullpo_retr(false, filename);
	nullpo_retr(false, config);

	if ((setting = libconfig->lookup(config, "inter_configuration/log/sql_connection")) == NULL) {
		ShowError("loginlog_config_read: inter_configuration/log/sql_connection was not found in %s!\n", filename);
		return false;
	}

	libconfig->setting_lookup_mutable_string(setting, "log_hostname", loginlog->dbs->log_db_hostname, sizeof(loginlog->dbs->log_db_hostname));
	libconfig->setting_lookup_mutable_string(setting, "log_database", loginlog->dbs->log_db_database, sizeof(loginlog->dbs->log_db_database));
	libconfig->setting_lookup_mutable_string(setting, "log_username", loginlog->dbs->log_db_username, sizeof(loginlog->dbs->log_db_username));
	libconfig->setting_lookup_mutable_string(setting, "log_password", loginlog->dbs->log_db_password, sizeof(loginlog->dbs->log_db_password));

	libconfig->setting_lookup_uint16(setting, "log_port", &loginlog->dbs->log_db_port);
	libconfig->setting_lookup_mutable_string(setting, "codepage", loginlog->dbs->log_codepage, sizeof(loginlog->dbs->log_codepage));

	return true;
}

/**
 * Reads 'inter_configuration' and initializes required variables/Sets global
 * configuration.
 *
 * @param filename Path to configuration file.
 * @param config   The current config being parsed.
 *
 * @retval false in case of error.
 **/
static bool loginlog_config_read(const char *filename)
{
	struct config_t config;
	//const char *import = NULL;
	bool retval = true;

	nullpo_retr(false, filename);

	if (!libconfig->load_file(&config, filename))
		return false; // Error message is already shown by libconfig->load_file

	if (!loginlog->config_read_names(filename, &config))
		retval = false;
	if (!loginlog->config_read_log(filename, &config))
		retval = false;

	libconfig->destroy(&config);
	return retval;
}

void loginlog_defaults(void)
{
	loginlog = &loginlog_s;
	loginlog->dbs = &loginlogdbs;

	loginlog->sql_handle = NULL;
	loginlog->enabled = false;

	// Sql settings
	strcpy(loginlog->dbs->log_db_hostname, "127.0.0.1");
	loginlog->dbs->log_db_port = 3306;
	strcpy(loginlog->dbs->log_db_username, "ragnarok");
	strcpy(loginlog->dbs->log_db_password, "ragnarok");
	strcpy(loginlog->dbs->log_db_database, "ragnarok");
	*loginlog->dbs->log_codepage = 0;
	strcpy(loginlog->dbs->log_login_db, "loginlog");

	loginlog->failedattempts = loginlog_failedattempts;
	loginlog->log = loginlog_log;
	loginlog->init = loginlog_init;
	loginlog->final = loginlog_final;
	loginlog->config_read_names = loginlog_config_read_names;
	loginlog->config_read_log = loginlog_config_read_log;
	loginlog->config_read = loginlog_config_read;
}
