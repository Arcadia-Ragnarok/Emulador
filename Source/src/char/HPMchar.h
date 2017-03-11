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

#ifndef CHAR_HPMCHAR_H
#define CHAR_HPMCHAR_H

#ifndef HPM_MAIN_CORE
#error You should never include HPMchar.h from a plugin.
#endif

#include "common/cbasetypes.h"
#include "common/HPM.h"

struct hplugin;

bool HPM_char_data_store_validate(enum HPluginDataTypes type, struct hplugin_data_store **storeptr, bool initialize);

void HPM_char_plugin_load_sub(struct hplugin *plugin);

void HPM_char_do_final(void);

void HPM_char_do_init(void);

#endif /* CHAR_HPMCHAR_H */
