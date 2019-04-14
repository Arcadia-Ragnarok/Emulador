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

#ifndef MAP_STYLIST_H
#define MAP_STYLIST_H

#include "config/core.h"
#include "common/cbasetypes.h"
#include "map/map.h" // LOOK_MAX

struct map_session_data;

/* Maximum available types for stylist */
#ifndef MAX_STYLIST_TYPE
#define MAX_STYLIST_TYPE LOOK_MAX
#endif

/* Stylist data [Asheraf/Hercules]*/
struct stylist_data_entry {
	int16 id;
	int32 zeny;
	int itemid;
	int boxid;
	bool allow_doram;
};

/**
 * stylist.c Interface
 **/
struct stylist_interface {
	VECTOR_DECL(struct stylist_data_entry) data[MAX_STYLIST_TYPE];

	void (*init) (bool minimal);
	void (*final) (void);

	void (*vector_init) (void);
	void (*vector_clear) (void);

	bool (*read_db_libconfig) (void);
	bool (*read_db_libconfig_sub) (struct config_setting_t *it, int idx, const char *source);

	void (*request_style_change) (struct map_session_data *sd, int type, int16 idx, bool isitem);
	bool (*validate_requirements) (struct map_session_data *sd, int type, int16 idx);
	void (*send_rodexitem) (struct map_session_data *sd, int itemid);

};

void stylist_defaults(void);
extern struct stylist_interface *stylist; ///< Pointer to the stylist interface.

#endif /* MAP_STYLIST_H */
