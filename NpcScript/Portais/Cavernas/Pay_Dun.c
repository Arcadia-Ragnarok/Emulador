/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Potais na Caverna de Payon                                |
\*-----------------------------------------------------------------*/

pay_dun00,21,186,0	warp	paydunwarp_1	2,2,pay_arche,39,131
pay_dun00,184,33,0	warp	paydunwarp_2	2,7,pay_dun01,19,33

// ------------------------------------------------------------------
pay_dun01,15,33,0	warp	paydunwarp_3	2,6,pay_dun00,181,33
pay_dun01,286,25,0	warp	paydunwarp_4	2,7,pay_dun02,19,63

// ------------------------------------------------------------------
pay_dun02,137,128,0	warp	paydunwarp_5	4,1,pay_dun03,155,159
pay_dun02,16,63,0	warp	paydunwarp_6	2,7,pay_dun01,283,28

// ------------------------------------------------------------------
pay_dun03,155,161,0	warp	paydunwarp_7	2,1,pay_dun02,137,126

pay_dun03,127,62,4	script	paydunwarp_8	WARPNPC,2,2,{
	switch(rand(4)) {
		case 0: warp("pay_dun04", 201, 204); end;
		case 1: warp("pay_dun04", 189, 43); end;
		case 2: warp("pay_dun04", 43, 40); end;
		case 3: warp("pay_dun04", 34, 202); end;
	}
}

// ------------------------------------------------------------------
pay_dun04,40,37,0	warp	paydunwarp_9	1,1,pay_dun03,125,62
pay_dun04,32,204,0	warp	paydunwarp_10	1,1,pay_dun03,125,62
pay_dun04,202,206,0	warp	paydunwarp_11	2,1,pay_dun03,125,62
pay_dun04,191,41,0	warp	paydunwarp_12	2,2,pay_dun03,125,62
