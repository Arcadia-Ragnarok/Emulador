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
| - Info: Potais no Santuário de Rachel                             |
\*-----------------------------------------------------------------*/

ra_san01,139,139,0	warp	rasanwarp_1	1,1,ra_temin,27,314

ra_san01,139,13,0	script	rasanwarp_2	WARPNPC,1,1,{
	if (ra_tem_q == 21) { warp("que_san04", 119, 110); end; }
	switch (rand(3)) {
		case 1:  warp("ra_san02", 213, 275); end;
		case 2:  warp("ra_san03", 119, 283); end;
		default: warp("ra_san04", 119, 110); end;
	}
}

// ------------------------------------------------------------------
ra_san02,213,280,0	warp	rasanwarp_3	1,1,ra_san01,140,19
ra_san02,289,149,0	warp	rasanwarp_4	1,1,ra_san03,10,149
ra_san02,213,4,0	warp	rasanwarp_5	1,1,ra_san04,35,216
ra_san02,30,21,0	warp	rasanwarp_6	1,1,ra_san05,14,149

// ------------------------------------------------------------------
ra_san03,123,283,0	warp	rasanwarp_7	1,1,ra_san01,140,19
ra_san03,279,21,0	warp	rasanwarp_8	1,1,ra_san05,282,149
ra_san03,85,15,0	warp	rasanwarp_9	1,1,ra_san04,203,216
ra_san03,5,149,0	warp	rasanwarp_10	1,1,ra_san02,284,149

// ------------------------------------------------------------------
ra_san04,119,104,0	warp	rasanwarp_11	1,1,ra_san01,140,19
ra_san04,203,221,0	warp	rasanwarp_12	1,1,ra_san03,85,20
ra_san04,120,48,0	warp	rasanwarp_13	1,1,ra_san05,150,282
ra_san04,35,221,0	warp	rasanwarp_14	1,1,ra_san02,213,9

// ------------------------------------------------------------------
ra_san05,150,7,0	warp	rasanwarp_15	1,1,ra_temple,119,153
