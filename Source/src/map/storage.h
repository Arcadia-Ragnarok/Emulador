/*-----------------------------------------------------------------*\ 
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|    Source code          \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                      Projeto Ragnarok Online                      |
+-------------------------------------------------------------------+
| - Este c�digo � livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercializa��o desse software est� previsto    |
| em leis internacionais, junto com este(s) c�digo(s) voc� recebeu  |
| uma c�pia de licen�a de uso.                                      |
| - Caso n�o tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#ifndef MAP_STORAGE_H
#define MAP_STORAGE_H

#include "common/HPExport.h"
#include "common/db.h"

struct guild_storage;
struct item;
struct map_session_data;

/**
 * Acceptable values for map_session_data.state.storage_flag
 */
enum storage_flag {
	STORAGE_FLAG_CLOSED = 0, // Closed
	STORAGE_FLAG_NORMAL = 1, // Normal Storage open
	STORAGE_FLAG_GUILD  = 2, // Guild Storage open
};

struct storage_interface {
	/* */
	void (*reconnect) (void);
	/* */
	int (*delitem) (struct map_session_data* sd, int n, int amount);
	int (*open) (struct map_session_data *sd);
	int (*add) (struct map_session_data *sd,int index,int amount);
	int (*get) (struct map_session_data *sd,int index,int amount);
	int (*additem) (struct map_session_data* sd, struct item* item_data, int amount);
	int (*addfromcart) (struct map_session_data *sd,int index,int amount);
	int (*gettocart) (struct map_session_data *sd,int index,int amount);
	void (*close) (struct map_session_data *sd);
	void (*pc_quit) (struct map_session_data *sd, int flag);
	int (*comp_item) (const void *i1_, const void *i2_);
	void (*sortitem) (struct item* items, unsigned int size);
	int (*reconnect_sub) (union DBKey key, struct DBData *data, va_list ap);
};

struct guild_storage_interface {
	struct DBMap *db; // int guild_id -> struct guild_storage*
	/* */
	struct guild_storage *(*ensure) (int guild_id);
	/* */
	void (*init) (bool minimal);
	void (*final) (void);
	/* */
	int (*delete) (int guild_id);
	int (*open) (struct map_session_data *sd);
	int (*additem) (struct map_session_data *sd,struct guild_storage *stor,struct item *item_data,int amount);
	int (*delitem) (struct map_session_data *sd,struct guild_storage *stor,int n,int amount);
	int (*add) (struct map_session_data *sd,int index,int amount);
	int (*get) (struct map_session_data *sd,int index,int amount);
	int (*addfromcart) (struct map_session_data *sd,int index,int amount);
	int (*gettocart) (struct map_session_data *sd,int index,int amount);
	int (*close) (struct map_session_data *sd);
	int (*pc_quit) (struct map_session_data *sd,int flag);
	int (*save) (int account_id, int guild_id, int flag);
	int (*saved) (int guild_id); //Ack from char server that guild store was saved.
	struct DBData (*create) (union DBKey key, va_list args);
};

#ifdef HPM_MAIN_CORE
void storage_defaults(void);
void gstorage_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct storage_interface *storage;
HPShared struct guild_storage_interface *gstorage;

#endif /* MAP_STORAGE_H */
