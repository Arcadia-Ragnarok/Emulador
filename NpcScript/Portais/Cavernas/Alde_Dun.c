/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Potais no Subterraneo da Torre do Relógio                 |
\*-----------------------------------------------------------------*/

alde_dun01,292,306,0	warp	aldedunWarp_00	2,1,alde_dun02,43,24
alde_dun01,167,158,0	warp	aldedunWarp_01	2,2,c_tower2,148,283
alde_dun01,302,25,0	warp	aldedunWarp_02	2,2,c_tower1,125,22

// ------------------------------------------------------------------
alde_dun02,43,20,0	warp	aldedunWarp_03	1,1,alde_dun01,292,300
alde_dun02,279,250,0	warp	aldedunWarp_04	2,2,alde_dun03,18,267
alde_dun02,122,169,0	warp	aldedunWarp_05	2,2,c_tower3,47,41
alde_dun02,187,234,0	warp	aldedunWarp_06	2,2,c_tower3,65,147

alde_dun02,267,41,4	script	aldedunWarp_07	WARPNPC,1,1,{
	if (rand(2)) {
		warp("c_tower3", 168, 252);
	} else {
		warp("alde_dun02", 262, 141);
	}
	end;
}

// ------------------------------------------------------------------
alde_dun03,12,267,0	warp	aldedunWarp_08	2,2,alde_dun02,273,250
alde_dun03,277,183,0	warp	aldedunWarp_09	2,2,c_tower2,27,27
alde_dun03,191,31,0	warp	aldedunWarp_10	2,2,c_tower3,217,159
alde_dun03,276,48,0	warp	aldedunWarp_11	2,2,c_tower1,235,223

alde_dun03,130,125,4	script	aldedunWarp_12	WARPNPC,1,1,{
	switch (rand(3)) {
		case 0: warp("c_tower2", 228, 267); end;
		case 1: warp("alde_dun03", 130, 130); end;
		case 2: warp("c_tower3", 252, 29); end;
	}
}

alde_dun03,171,127,4	script	aldedunWarp_13	WARPNPC,1,1,{
	switch (rand(3)) {
		case 0: warp("c_tower2", 13, 282); end;
		case 1: warp("alde_dun03", 175, 131); end;
		case 2: warp("c_tower3", 235, 7); end;
	}
}

// ------------------------------------------------------------------
alde_dun04,80,273,0	warp	aldedunWarp_14	2,2,alde_dun03,263,26
alde_dun04,207,225,0	warp	aldedunWarp_15	1,1,c_tower3,7,34
alde_dun04,215,192,0	warp	aldedunWarp_16	1,1,c_tower2,148,283
alde_dun04,32,74,0	warp	aldedunWarp_17	1,1,alde_dun02,187,239
alde_dun04,208,58,0	warp	aldedunWarp_18	2,2,alde_dun04,268,74
alde_dun04,272,74,0	warp	aldedunWarp_19	2,2,alde_dun04,204,62

alde_dun04,80,34,4	script	aldedunWarp_20	WARPNPC,1,1,{
	switch (rand(4)) {
		case 0: warp("c_tower2", 13, 282); end;
		case 1: warp("alde_dun03", 175, 131); end;
		case 2: warp("c_tower3", 235, 7); end;
		case 3: warp("alde_dun04", 84, 36); end;
	}
}
