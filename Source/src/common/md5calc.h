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
| - Este c�digo � livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercializa��o desse software est� previsto    |
| em leis internacionais, junto com este(s) c�digo(s) voc� recebeu  |
| uma c�pia de licen�a de uso.                                      |
| - Caso n�o tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#ifndef COMMON_MD5CALC_H
#define COMMON_MD5CALC_H

#include "common/cbasetypes.h"

/** @file
 * md5 calculation algorithm.
 *
 * The source code referred to the following URL.
 * http://www.geocities.co.jp/SiliconValley-Oakland/8878/lab17/lab17.html
 */

/// The md5 interface
struct md5_interface {
	/**
	 * Hashes a string, returning the hash in string format.
	 *
	 * @param[in]  string The source string (NUL terminated).
	 * @param[out] output Output buffer (at least 33 bytes available).
	 */
	void (*string) (const char *string, char *output);

	/**
	 * Hashes a string, returning the buffer in binary format.
	 *
	 * @param[in]  string The source string.
	 * @param[out] output Output buffer (at least 16 bytes available).
	 */
	void (*binary) (const uint8 *buf, const int buf_size, uint8 *output);

	/**
	 * Generates a random salt.
	 *
	 * @param[in]  len    The desired salt length.
	 * @param[out] output The output buffer (at least len bytes available).
	 */
	void (*salt) (int len, char *output);
};

void md5_defaults(void);
extern struct md5_interface *md5; ///< Pointer to the md5 interface.

#endif /* COMMON_MD5CALC_H */
