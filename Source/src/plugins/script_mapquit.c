
/// Base author: Haru <haru@dotalux.com>
/// mapquit() script command

#include "common/HPExport.h"
#include "map/map.h"
#include "map/script.h"

#include "common/HPMDataCheck.h"

HPExport struct hplugin_info pinfo = {
	"script_mapquit",    // Plugin name
	SERVER_TYPE_MAP,     // Which server types this plugin works with?
	"0.1",               // Plugin version
	HPM_VERSION,         // HPM Version (don't change, macro is automatically updated)
};

BUILDIN(mapquit) {
	if (script_hasdata(st, 2)) {
		map->retval = script_getnum(st, 2);
	}
	map->do_shutdown();
	return true;
}
HPExport void server_preinit(void) {
}
HPExport void plugin_init(void) {
	addScriptCommand("mapquit", "?", mapquit);
}
