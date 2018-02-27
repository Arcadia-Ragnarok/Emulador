/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
|                  Idealizado por: Spell Master                     |
+-------------------------------------------------------------------+
| - Este código é livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercialização desse software está previsto    |
| em leis internacionais, junto com este(s) código(s) você recebeu  |
| uma cópia de licença de uso.                                      |
| - Caso não tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#ifndef MAP_VENDING_H
#define MAP_VENDING_H

#include "common/db.h"

/* Forward Declarations */
struct DBMap; // common/db.h
struct map_session_data;
struct s_search_store_search;

struct s_vending {
	short index; //cart index (return item data)
	short amount; //amount of the item for vending
	unsigned int value; //at which price
};

struct vending_interface {
	unsigned int next_id;/* next vender id */
	struct DBMap *db;
	/* */
	void (*init) (bool minimal);
	void (*final) (void);
	/* */
	void (*close) (struct map_session_data* sd);
	void (*open) (struct map_session_data* sd, const char* message, const uint8* data, int count);
	void (*list) (struct map_session_data* sd, unsigned int id);
	void (*purchase) (struct map_session_data* sd, int aid, unsigned int uid, const uint8* data, int count);
	bool (*search) (struct map_session_data* sd, unsigned short nameid);
	bool (*searchall) (struct map_session_data* sd, const struct s_search_store_search* s);
};

void vending_defaults(void);
extern struct vending_interface *vending;

#endif /* MAP_VENDING_H */
