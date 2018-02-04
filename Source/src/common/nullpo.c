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

#define MAIN_CORE

#include "nullpo.h"

#include "common/showmsg.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#ifdef HAVE_EXECINFO
#include <execinfo.h>
#endif // HAVE_EXECINFO

struct nullpo_interface nullpo_s;
struct nullpo_interface *nullpo;

/**
 * Reports failed assertions or NULL pointers
 *
 * @param file       Source file where the error was detected
 * @param line       Line
 * @param func       Function
 * @param targetname Name of the checked symbol
 * @param title      Message title to display (i.e. failed assertion or nullpo info)
 */
void assert_report(const char *file, int line, const char *func, const char *targetname, const char *title) {
#ifdef HAVE_EXECINFO
	void *array[10];
	int size;
	char **strings;
	int i;
#endif // HAVE_EXECINFO
	if (file == NULL)
		file = "??";

	if (func == NULL || *func == '\0')
		func = "unknown";

	ShowError("--- %s --------------------------------------------\n", title);
	ShowError("%s:%d: '%s' in function `%s'\n", file, line, targetname, func);
#ifdef HAVE_EXECINFO
	size = (int)backtrace(array, 10);
	strings = backtrace_symbols(array, size);
	for (i = 0; i < size; i++)
		ShowError("%s\n", strings[i]);
	free(strings);
#endif // HAVE_EXECINFO
	ShowError("--- end %s ----------------------------------------\n", title);
}

/**
 *
 **/
void nullpo_defaults(void) {
	nullpo = &nullpo_s;
	nullpo->assert_report = assert_report;
}
