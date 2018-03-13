/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
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

#ifndef COMMON_RANDOM_H
#define COMMON_RANDOM_H

#include "common/cbasetypes.h"

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

void rnd_defaults(void);
extern struct rnd_interface *rnd; ///< Pointer to the random interface.

#endif /* COMMON_RANDOM_H */
