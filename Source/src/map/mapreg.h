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

#ifndef MAP_MAPREG_H
#define MAP_MAPREG_H

#include "map/script.h" // struct reg_db
#include "common/HPExport.h"
#include "common/db.h"

/* Forward Declarations */
struct config_setting_t; // common/conf.h
struct eri;

/** Container for a mapreg value */
struct mapreg_save {
	int64 uid;         ///< Unique ID
	union {
		int i;     ///< Numeric value
		char *str; ///< String value
	} u;
	bool is_string;    ///< true if it's a string, false if it's a number
	bool save;         ///< Whether a save operation is pending
};

struct mapreg_interface {
	struct reg_db regs;
	/* */
	bool skip_insert;
	/* */
	struct eri *ers;
	/* */
	char table[32];
	/* */
	bool dirty; ///< Whether there are modified regs to be saved
	/* */
	void (*init) (void);
	void (*final) (void);
	/* */
	int (*readreg) (int64 uid);
	char* (*readregstr) (int64 uid);
	bool (*setreg) (int64 uid, int val);
	bool (*setregstr) (int64 uid, const char *str);
	void (*load) (void);
	void (*save) (void);
	int (*save_timer) (int tid, int64 tick, int id, intptr_t data);
	int (*destroyreg) (union DBKey key, struct DBData *data, va_list ap);
	void (*reload) (void);
	bool (*config_read) (const char *filename, const struct config_setting_t *config, bool imported);
};

#ifdef MAIN_CORE
void mapreg_defaults(void);
#endif // MAIN_CORE

HPShared struct mapreg_interface *mapreg;

#endif /* MAP_MAPREG_H */
