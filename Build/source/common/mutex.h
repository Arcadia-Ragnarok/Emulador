/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|                                                |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Athena & Hercules                                    |
| - Copyright: Spell master (Source Mod)                            |
\*-----------------------------------------------------------------*/

#ifndef COMMON_MUTEX_H
#define COMMON_MUTEX_H

#include "config/core.h"
#include "common/cbasetypes.h"

/** @file
 * Mutex and conditional variables implementation for Hercules.
 */

/* Opaque types */

struct mutex_data; ///< Mutex
struct cond_data;  ///< Conditional variable

/* Interface */

/// The mutex interface.
struct mutex_interface {
	/**
	 * Creates a mutex.
	 *
	 * @return The created mutex.
	 */
	struct mutex_data *(*create) (void);

	/**
	 * Destroys a mutex.
	 *
	 * @param m the mutex to destroy.
	 */
	void (*destroy) (struct mutex_data *m);

	/**
	 * Gets a lock.
	 *
	 * This function blocks until the lock can be acquired.
	 *
	 * @param m The mutex to lock.
	 */
	void (*lock) (struct mutex_data *m);

	/**
	 * Tries to get a lock.
	 *
	 * This function returns immediately.
	 *
	 * @param m The mutex to try to lock.
	 * @return success status.
	 * @retval true if the lock was acquired.
	 * @retval false if the mutex couldn't be locked.
	 */
	bool (*trylock) (struct mutex_data *m);

	/**
	 * Unlocks a mutex.
	 *
	 * @param m The mutex to unlock.
	 */
	void (*unlock) (struct mutex_data *m);

	/**
	 * Creates a conditional variable.
	 *
	 * @return the created conditional variable.
	 */
	struct cond_data *(*cond_create) (void);

	/**
	 * Destroys a conditional variable.
	 *
	 * @param c the conditional variable to destroy.
	 */
	void (*cond_destroy) (struct cond_data *c);

	/**
	 * Waits Until state is signaled.
	 *
	 * @param c             The condition var to wait for signaled state.
	 * @param m             The mutex used for synchronization.
	 * @param timeout_ticks Timeout in ticks (-1 = INFINITE)
	 */
	void (*cond_wait) (struct cond_data *c, struct mutex_data *m, sysint timeout_ticks);

	/**
	 * Sets the given condition var to signaled state.
	 *
	 * @remark
	 *   Only one waiter gets notified.
	 *
	 * @param c Condition var to set in signaled state.
	 */
	void (*cond_signal) (struct cond_data *c);

	/**
	 * Sets notifies all waiting threads thats signaled.
	 *
	 * @remark
	 *   All Waiters getting notified.
	 *
	 * @param c Condition var to set in signaled state.
	 */
	void (*cond_broadcast) (struct cond_data *c);
};

void mutex_defaults(void);
extern struct mutex_interface *mutex; ///< Pointer to the mutex interface.

#endif /* COMMON_MUTEX_H */
