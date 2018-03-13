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
| - Info: Potais nos Esgotos de Prontera                            |
\*-----------------------------------------------------------------*/

prt_sewb1,135,248,0	warp	prtsewbwarp_1	2,2,prt_fild05,274,208
prt_sewb1,188,247,0	warp	prtsewbwarp_2	1,3,prt_sewb2,19,19

// ------------------------------------------------------------------
prt_sewb2,19,12,0	warp	prtsewbwarp_3	2,2,prt_sewb1,192,247
prt_sewb2,19,175,0	warp	prtsewbwarp_4	4,2,prt_sewb2,60,28
prt_sewb2,60,24,0	warp	prtsewbwarp_5	4,2,prt_sewb2,19,171
prt_sewb2,100,176,0	warp	prtsewbwarp_6	4,2,prt_sewb2,140,28
prt_sewb2,140,24,0	warp	prtsewbwarp_7	4,2,prt_sewb2,100,172
prt_sewb2,180,24,0	warp	prtsewbwarp_8	4,2,prt_sewb3,180,169

// ------------------------------------------------------------------
prt_sewb3,180,173,0	warp	prtsewbwarp_9	4,2,prt_sewb2,180,28
prt_sewb3,20,185,0	warp	prtsewbwarp_10	3,2,prt_sewb4,100,92

// ------------------------------------------------------------------
prt_sewb4,100,96,0	warp	prtsewbwarp_11	3,2,prt_sewb3,19,180
