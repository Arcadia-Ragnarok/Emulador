/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
|                  Idealizado por: Spell Master                     |
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

#ifndef CHAR_INT_MERCENARY_H
#define CHAR_INT_MERCENARY_H

#include "common/HPExport.h"

struct mmo_charstatus;

/**
 * inter_mercenary interface
 **/
struct inter_mercenary_interface {
	bool (*owner_fromsql) (int char_id, struct mmo_charstatus *status);
	bool (*owner_tosql) (int char_id, struct mmo_charstatus *status);
	bool (*owner_delete) (int char_id);
	int (*sql_init) (void);
	void (*sql_final) (void);
	int (*parse_frommap) (int fd);
};

#ifdef MAIN_CORE
void inter_mercenary_defaults(void);
#endif // MAIN_CORE

HPShared struct inter_mercenary_interface *inter_mercenary;

#endif /* CHAR_INT_MERCENARY_H */
