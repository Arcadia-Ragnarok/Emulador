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
| - Copyright: Spell Master                                         |
| - Copyright: Hercules Emulator                                    |
| - Copyright: Athena (Original Emulator)                           |
\*-----------------------------------------------------------------*/

#ifndef COMMON_DES_H
#define COMMON_DES_H

#include "common/cbasetypes.h"

/**
 * @file
 *
 * DES (Data Encryption Standard) algorithm, modified version.
 *
 * @see http://www.eathena.ws/board/index.php?autocom=bugtracker&showbug=5099
 * @see http://en.wikipedia.org/wiki/Data_Encryption_Standard
 * @see http://en.wikipedia.org/wiki/DES_supplementary_material
 */

/* Struct definitions */

/// One 64-bit block.
struct des_bit64 {
	uint8_t b[8];
};

/* Interface */

/// The des interface.
struct des_interface {
	/**
	 * Decrypts a block.
	 *
	 * @param[in,out] block The block to decrypt (in-place).
	 */
	void (*decrypt_block) (struct des_bit64 *block);

	/**
	 * Decrypts a buffer.
	 *
	 * @param [in,out] data The buffer to decrypt (in-place).
	 * @param [in]     size The size of the data.
	 */
	void (*decrypt) (unsigned char *data, size_t size);
};

void des_defaults(void);
extern struct des_interface *des; ///< Pointer to the des interface implementation.

#endif // COMMON_DES_H
