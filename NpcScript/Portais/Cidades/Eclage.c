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
| - Info: Potais em Eclage                                          |
\*-----------------------------------------------------------------*/

eclage,299,309,0	warp	eclagewarp_1	1,1,ecl_in01,47,11
eclage,98,26,0	warp	eclagewarp_2	1,1,ecl_fild01,99,317

// ------------------------------------------------------------------
ecl_in01,8,67,0	warp	eclagewarp_3	1,1,ecl_hub01,38,94
ecl_in01,47,8,0	warp	eclagewarp_4	1,1,eclage,297,307

ecl_in01,84,68,0	script	eclagewarp_5	WARPNPC,1,1,{
	end;
	OnTouch:
	if (ep14_2_mylord == 29) { warp("ecl_hub01", 106, 31); }
	else { warp("ecl_hub01", 107, 107); }
	end;
}

// ------------------------------------------------------------------
ecl_in02,98,4,0	warp	eclagewarp_6	1,1,ecl_hub01,23,107
ecl_in02,80,18,0	warp	eclagewarp_7	1,1,ecl_in02,157,66
ecl_in02,157,68,0	warp	eclagewarp_8	1,1,ecl_in02,83,18

// ------------------------------------------------------------------
ecl_in03,144,14,0	warp	eclagewarp_9	1,1,ecl_hub01,40,11

// ------------------------------------------------------------------
ecl_hub01,40,95,0	warp	eclagewarp_10	1,1,ecl_in01,11,67
ecl_hub01,22,109,0	warp	eclagewarp_11	1,1,ecl_in02,99,7
ecl_hub01,107,110,0	warp	eclagewarp_12	1,1,ecl_in01,82,68
ecl_hub01,127,95,0	warp	eclagewarp_13	1,1,ecl_hub01,18,32
ecl_hub01,40,14,0	warp	eclagewarp_14	1,1,ecl_in03,144,17
ecl_hub01,105,36,0	warp	eclagewarp_15	1,1,ecl_in01,82,68
ecl_hub01,138,17,0	warp	eclagewarp_16	1,1,ecl_hub01,18,32F

ecl_hub01,18,34,0	script	eclagewarp_17	WARPNPC,1,1,{
	end;
	OnTouch:
	if (ep14_2_mylord == 29) { warp("ecl_hub01", 135, 14); }
	else { warp("ecl_hub01", 125, 94); }
	end;
}
