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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Potais em Eclage                                          |
\*-----------------------------------------------------------------*/

eclage,98,26,0	warp	eclageS_EclEnter	1,1,ecl_fild01,99,317
eclage,299,309,0	warp	eclageN_in01s	1,1,ecl_in01,47,11

// ------------------------------------------------------------------
ecl_in01,47,8,0	warp	in01s_eclageN	1,1,eclage,297,307
ecl_in01,8,67,0	warp	in01w_hub1-1	1,1,ecl_hub01,38,94

ecl_in01,84,68,0	script	in01e_hub2-1	WARPNPC,1,1,{
	end;
	OnTouch:
	if (ep14_2_mylord == 29) { warp "ecl_hub01",106,31; }
	else { warp "ecl_hub01",107,107; }
	end;
}

// ------------------------------------------------------------------
ecl_in02,98,4,0	warp	in02-1_hub1-2	1,1,ecl_hub01,23,107
ecl_in02,80,18,0	warp	in02-2_in02-3	1,1,ecl_in02,157,66
ecl_in02,157,68,0	warp	in02-3_in02-2	1,1,ecl_in02,83,18

// ------------------------------------------------------------------
ecl_in03,144,14,0	warp	in03_hub3-2	1,1,ecl_hub01,40,11

// ------------------------------------------------------------------
ecl_hub01,40,95,0	warp	hub1-1_in01w	1,1,ecl_in01,11,67
ecl_hub01,22,109,0	warp	hub1-2_in02-1	1,1,ecl_in02,99,7
ecl_hub01,107,110,0	warp	hub2-1_in01e	1,1,ecl_in01,82,68
ecl_hub01,127,95,0	warp	hub2-2_hub3-1	1,1,ecl_hub01,18,32

ecl_hub01,18,34,0	script	hub3-1_hub2-2	WARPNPC,1,1,{
	end;
	OnTouch:
	if (ep14_2_mylord == 29) { warp "ecl_hub01",135,14; }
	else { warp "ecl_hub01",125,94; }
	end;
}
ecl_hub01,40,14,0	warp	hub3-2_in03	1,1,ecl_in03,144,17
ecl_hub01,105,36,0	warp	hub4-1_in01e	1,1,ecl_in01,82,68
ecl_hub01,138,17,0	warp	hub4-2_hub3-1	1,1,ecl_hub01,18,32F