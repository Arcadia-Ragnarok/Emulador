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
| - Info: Potais na Torre do Relógio                                |
\*-----------------------------------------------------------------*/

c_tower1,200,157,0	warp	ctorwerwarp_1	1,1,aldebaran,139,131
c_tower1,123,22,0	warp	ctorwerwarp_2	1,1,alde_dun01,297,25
c_tower1,235,226,0	warp	ctorwerwarp_3	1,1,c_tower2,268,26

// ------------------------------------------------------------------
c_tower2,273,26,0	warp	ctorwerwarp_4	1,1,c_tower1,235,223
c_tower2,142,283,0	warp	ctorwerwarp_5	1,1,c_tower3,65,147
c_tower2,24,24,0	warp	ctorwerwarp_6	1,1,alde_dun03,277,178


c_tower2,13,288,4	script	ctorwerwarp_7	WARPNPC,1,1,{
	switch(rand(3)) {
		case 0: warp ("c_tower2",13,282); end;
		case 1: warp ("alde_dun03",175,131); end;
		case 2: warp ("c_tower3",235,7); end;
	}
}

c_tower2,223,267,4	script	ctorwerwarp_8	WARPNPC,1,1,{
	switch(rand(3)) {
		case 0: warp ("c_tower2",288,267); end;
		case 1: warp ("alde_dun03",130,130); end;
		case 2: warp ("c_tower3",252,29); end;
	}
}

// ------------------------------------------------------------------
c_tower3,60,147,0	warp	ctorwerwarp_9	1,1,c_tower2,148,283
c_tower3,212,159,0	warp	ctorwerwarp_10	1,1,alde_dun03,276,53
c_tower3,7,39,0	warp	ctorwerwarp_11	1,1,alde_dun01,171,158
c_tower3,42,41,0	warp	ctorwerwarp_12	1,1,alde_dun02,127,169
c_tower3,146,8,0	warp	ctorwerwarp_13	1,1,c_tower1,235,223

c_tower3,163,252,4	script	ctorwerwarp_14	WARPNPC,1,1,{
	if (rand(2)) { warp ("c_tower3",168,252); }
	else { warp ("alde_dun02",262,41); }
	end;
}

c_tower3,240,7,4	script	ctorwerwarp_15	WARPNPC,1,1,{
	switch(rand(3)) {
		case 0: warp ("c_tower2",13,282); end;
		case 1: warp ("alde_dun03",175,131); end;
		case 2: warp ("c_tower3",235,7); end;
	}
}

c_tower3,252,24,4	script	ctorwerwarp_16	WARPNPC,1,1,{
	switch(rand(3)) {
		case 0: warp ("c_tower2",228,267); end;
		case 1: warp ("alde_dun03",130,130); end;
		case 2: warp ("c_tower3",252,29); end;
	}
}

// ------------------------------------------------------------------
c_tower4,37,70,0	warp	ctorwerwarp_17	1,1,alde_dun03,277,54
c_tower4,51,156,0	warp	ctorwerwarp_18	1,1,alde_dun01,171,158
c_tower4,68,46,0	warp	ctorwerwarp_19	1,1,c_tower4,73,154
c_tower4,70,19,0	warp	ctorwerwarp_20	2,2,c_tower3,151,8
c_tower4,79,49,0	warp	ctorwerwarp_21	2,2,c_tower4,204,60
c_tower4,133,202,0	warp	ctorwerwarp_22	1,1,c_tower4,140,149
c_tower4,153,107,0	warp	ctorwerwarp_23	1,1,c_tower2,228,267
c_tower4,171,179,0	warp	ctorwerwarp_24	1,1,alde_dun03,276,53
c_tower4,198,59,0	warp	ctorwerwarp_25	1,1,c_tower4,152,98
c_tower4,204,57,0	warp	ctorwerwarp_26	1,1,c_tower4,65,77

c_tower4,75,156,4	script	ctorwerwarp_27	WARPNPC,0,0,{
	switch(rand(4)) {
		case 0: warp ("c_tower3",168,252); end;
		case 1: warp ("alde_dun02",262,41); end;
		case 2: warp ("c_tower4",73,154); end;
		case 3: warp ("c_tower4",140,149); end;
	}
}

c_tower4,68,79,4	script	ctorwerwarp_28	WARPNPC,0,0,{
	switch(rand(4)) {
		case 0: warp ("c_tower2",13,282); end;
		case 1: warp ("alde_dun03",175,131); end;
		case 2: warp ("c_tower3",235,7); end;
		case 3: warp ("c_tower4",65,77); end;
	}
}

c_tower4,142,151,4	script	ctorwerwarp_29	WARPNPC,0,0,{
	switch(rand(4)) {
		case 0: warp ("c_tower3",168,252); end;
		case 1: warp ("alde_dun02",262,41); end;
		case 2: warp ("c_tower4",73,154); end;
		case 3: warp ("c_tower4",140,149); end;
	}
}

c_tower4,151,96,4	script	ctorwerwarp_30	WARPNPC,0,0,{
	switch(rand(4)) {
		case 0: warp ("c_tower2",228,267); end;
		case 1: warp ("alde_dun03",130,130); end;
		case 2: warp ("c_tower3",252,29); end;
		case 3: warp ("c_tower4",152,95); end;
	}
}

c_tower4,189,40,4	script	ctorwerwarp_31	WARPNPC,2,2,{
	switch(rand(4)) {
		case 0: warp ("c_tower2",228,267); end;
		case 1: warp ("alde_dun03",130,130); end;
		case 2: warp ("c_tower3",252,29); end;
		case 3: warp ("c_tower4",152,95); end;
	}
}
