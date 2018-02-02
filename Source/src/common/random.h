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

#ifndef COMMON_RANDOM_H
#define COMMON_RANDOM_H

#include "common/HPExport.h"

/** @file
 * The random number generator interface.
 */

/// Random interface.
struct rnd_interface {
	/**
	 * Interface initialization.
	 *
	 * During initialization, the RNG is seeded with a random seed.
	 */
	void (*init) (void);

	/// Interface finalization.
	void (*final) (void);

	/**
	 * Re-seeds the random number generator.
	 *
	 * @param seed The new seed.
	 */
	void (*seed) (uint32 seed);

	/**
	 * Generates a random number in the interval [0, SINT32_MAX].
	 */
	int32 (*random) (void);

	/**
	 * Generates a random number in the interval [0, dice_faces).
	 *
	 * @remark
	 *  interval is open ended, so dice_faces is excluded (unless it's 0)
	 */
	uint32 (*roll) (uint32 dice_faces);

	/**
	 * Generates a random number in the interval [min, max].
	 *
	 * @retval min if range is invalid.
	 */
	int32 (*value) (int32 min, int32 max);

	/**
	 * Generates a random number in the interval [0.0, 1.0)
	 *
	 * @remark
	 *  interval is open ended, so 1.0 is excluded
	 */
	double (*uniform) (void);

	/**
	 * Generates a random number in the interval [0.0, 1.0) with 53-bit resolution.
	 *
	 * 53 bits is the maximum precision of a double.
	 *
	 * @remark
	 *   interval is open ended, so 1.0 is excluded
	 */
	double (*uniform53) (void);
};

/**
 * Utlity macro to call the frequently used rnd_interface#random().
 *
 * @related rnd_interface.
 */
#define rnd() rnd->random()

#ifdef MAIN_CORE
void rnd_defaults(void);
#endif // MAIN_CORE

HPShared struct rnd_interface *rnd; ///< Pointer to the random interface.

#endif /* COMMON_RANDOM_H */
