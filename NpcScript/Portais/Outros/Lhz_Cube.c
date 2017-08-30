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
| - Desenvolvido por: Spell Master (30/80/2017)                     |
| - Nota: Potais na Sala Cúbica (Quest da BioLab)                   |
\*-----------------------------------------------------------------*/

lhz_cube,231,96,0	warp	lhzcube1	1,1,lhz_dun02,220,6
lhz_cube,231,12,0	warp	lhzcube3	1,1,lighthalzen,310,302
lhz_cube,177,96,0	warp	lhzcube4	1,1,lighthalzen,310,302

// ------------------------------------------------------------------
// - [ Potais não aleatórios ] -
// ------------------------------------------------------------------
//- Sala 66 136
lhz_cube,74,136,0	warp	lhzcube6	2,2,lhz_cube,10,193

//- Sala 66 74
lhz_cube,66,67,0	warp	lhzcube5	2,2,lhz_cube,10,18

//- Sala 67 193
lhz_cube,67,200,0	warp	lhzcube7	2,2,lhz_cube,10,136

//- Sala 66 18
lhz_cube,66,11,0	warp	lhzcube8	2,2,lhz_cube,10,18
lhz_cube,66,26,0	warp	lhzcube9	2,2,lhz_cube,123,18

//- Sala 66 18
lhz_cube,18,18,0	warp	lhzcube10	2,2,lhz_cube,10,193
lhz_cube,10,11,0	warp	lhzcube11	2,2,lhz_cube,123,18

//- Sala 10 74
lhz_cube,10,67,0	warp	lhzcube12	2,2,lhz_cube,123,18
lhz_cube,3,74,0	warp	lhzcube13	2,2,lhz_cube,66,18

//- Sala 10 136
lhz_cube,18,136,0	warp	lhzcube14	2,2,lhz_cube,10,74

//- Sala 10 193
lhz_cube,3,192,0	warp	lhzcube15	2,2,lhz_cube,10,74
lhz_cube,10,200,0	warp	lhzcube16	2,2,lhz_cube,66,18

//- Sala 123 18
lhz_cube,115,18,0	warp	lhzcube17	2,2,lhz_cube,248,184

// ------------------------------------------------------------------
// - [ Portais aleatórios ] -
// ------------------------------------------------------------------
lhz_cube,66,129,0	script	lhzcubewarp	WARPNPC,2,2,{
	end;
	OnTouch:
	switch(rand(3)) {
		case 1: warp (strnpcinfo(NPC_MAP),66,136); end;
		case 2: warp (strnpcinfo(NPC_MAP),66,74); end;
		default: warp (strnpcinfo(NPC_MAP),67,193); end;
	}
}
lhz_cube,59,136,0	duplicate(lhzcubewarp)	lhzcubewarp2	WARPNPC
lhz_cube,66,144,0	duplicate(lhzcubewarp)	lhzcubewarp3	WARPNPC
lhz_cube,74,74,0	duplicate(lhzcubewarp)	lhzcubewarp4	WARPNPC
lhz_cube,59,74,0	duplicate(lhzcubewarp)	lhzcubewarp5	WARPNPC
lhz_cube,66,82,0	duplicate(lhzcubewarp)	lhzcubewarp6	WARPNPC
lhz_cube,74,192,0	duplicate(lhzcubewarp)	lhzcubewarp7	WARPNPC
lhz_cube,67,185,0	duplicate(lhzcubewarp)	lhzcubewarp8	WARPNPC
lhz_cube,59,192,0	duplicate(lhzcubewarp)	lhzcubewarp9	WARPNPC
lhz_cube,74,18,0	duplicate(lhzcubewarp)	lhzcubewarp10	WARPNPC
lhz_cube,59,18,0	duplicate(lhzcubewarp)	lhzcubewarp11	WARPNPC
lhz_cube,3,18,0	duplicate(lhzcubewarp)	lhzcubewarp12	WARPNPC
lhz_cube,10,26,0	duplicate(lhzcubewarp)	lhzcubewarp13	WARPNPC
lhz_cube,18,74,0	duplicate(lhzcubewarp)	lhzcubewarp14	WARPNPC
lhz_cube,10,82,0	duplicate(lhzcubewarp)	lhzcubewarp15	WARPNPC
lhz_cube,10,129,0	duplicate(lhzcubewarp)	lhzcubewarp16	WARPNPC
lhz_cube,3,136,0	duplicate(lhzcubewarp)	lhzcubewarp17	WARPNPC
lhz_cube,10,144,0	duplicate(lhzcubewarp)	lhzcubewarp18	WARPNPC
lhz_cube,18,192,0	duplicate(lhzcubewarp)	lhzcubewarp19	WARPNPC
lhz_cube,10,185,0	duplicate(lhzcubewarp)	lhzcubewarp20	WARPNPC
lhz_cube,130,18,0	duplicate(lhzcubewarp)	lhzcubewarp21	WARPNPC
lhz_cube,123,11,0	duplicate(lhzcubewarp)	lhzcubewarp22	WARPNPC
lhz_cube,123,26,0	duplicate(lhzcubewarp)	lhzcubewarp23	WARPNPC
