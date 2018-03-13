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
| - Copyright: Spell Master (02/04/2017)                            |
| - Info: Potais em Dicastes                                        |
\*-----------------------------------------------------------------*/

dicastes01,136,103,0	warp	dicasteswarp_1	1,1,dic_in01,26,98
dicastes01,283,285,0	warp	dicasteswarp_2	1,1,dic_in01,45,30
dicastes01,255,175,0	warp	dicasteswarp_3	1,1,dic_in01,344,272
dicastes01,94,259,0	warp	dicasteswarp_4	1,1,dic_in01,390,53
dicastes01,163,297,0	warp	dicasteswarp_5	1,1,dic_in01,371,101
dicastes01,198,353,0	warp	dicasteswarp_6	1,1,dicastes02,120,80
dicastes01,199,34,0	warp	dicasteswarp_7	1,1,dic_fild01,149,279

// ------------------------------------------------------------------
dicastes02,120,237,0	warp	dicasteswarp_8	1,1,dic_in01,45,246
dicastes02,120,77,0	warp	dicasteswarp_9	1,1,dicastes01,197,351

// ------------------------------------------------------------------
dic_in01,45,244,0	warp	dicasteswarp_10	1,1,dicastes02,119,235
dic_in01,26,96,0	warp	dicasteswarp_11	1,1,dicastes01,137,106
dic_in01,45,28,0	warp	dicasteswarp_12	1,1,dicastes01,281,284
dic_in01,342,271,0	warp	dicasteswarp_13	1,1,dicastes01,255,173
dic_in01,390,55,0	warp	dicasteswarp_14	1,1,dicastes01,95,257
dic_in01,372,99,0	warp	dicasteswarp_15	1,1,dicastes01,163,295
dic_in01,299,248,0	warp	dicasteswarp_16	1,1,dic_in01,262,191

dic_in01,242,182,0	script	dicasteswarp_17	CLEAR_NPC,{
	if (isequipped(Ring_Of_Wise_King)) {
		select("Escritório administrativo");
	} else {
		select("*-/+.@");
	}
	warp(strnpcinfo(NPC_MAP), 138, 221);
	end;
}

-	script	Elevator#dicasteswarp_18	-1,{
	.@warpnumber = atoi(strnpcinfo(NPC_NAME_HIDDEN));
	if (isequipped(Ring_Of_Wise_King)) {
		if (.@warpnumber < 5) {
			switch(select("Administrações civis","Quarto de arquivo","Quarto de situação","Escritório administrativo")) {
				case 1: .@x = 45;  .@y = 286; break;
				case 2: .@x = 36;  .@y = 212; break;
				case 3: .@x = 122; .@y = 282; break;
				case 4: .@x = 121; .@y = 201; break;
			}
			warp strnpcinfo(NPC_MAP),.@x,.@y; end;
		} else if (.@warpnumber < 11) {
			switch(select("Área Residencial 1","Área Residencial 2","Área Residencial 3","Bar Burman Flone")) {
				case 1: .@x = 42;  .@y = 115; break;
				case 2: .@x = 110; .@y = 108; break;
				case 3: .@x = 178; .@y = 108; break;
				case 4: .@x = 260; .@y = 115; break;
			}
			warp strnpcinfo(NPC_MAP),.@x,.@y; end;
		} else {
			switch(select("Estação de Batalha","Quartel Galten")) {
				case 1: .@x = 385; .@y = 272; break;
				case 2: .@x = 385; .@y = 208; break;
			}
			warp (strnpcinfo(NPC_MAP),.@x,.@y); end;
		}
	} else {
		if (.@warpnumber < 5) {
			switch(select("¢³¡ð¡Ð","¡ñ¡ñ¡ò","¡ø¡ø¡ð","¡÷¡ú¡ð")) {
				case 1: .@x = 45;  .@y = 286; break;
				case 2: .@x = 36;  .@y = 212; break;
				case 3: .@x = 122; .@y = 282; break;
				case 4: .@x = 121; .@y = 201; break;
			}
			warp (strnpcinfo(NPC_MAP),.@x,.@y); end;
		} else if (.@warpnumber < 11) {
			switch(select("¡ô¡õ¡ñ ¡þ","¢³¡ü¡Ð ¡ú","¡ï¢³¢¤ ¢²","¢±¡Ð¡ñ")) {
				case 1: .@x = 42;  .@y = 115; break;
				case 2: .@x = 110; .@y = 108; break;
				case 3: .@x = 178; .@y = 108; break;
				case 4: .@x = 260; .@y = 115; break;
			}
			warp (strnpcinfo(NPC_MAP),.@x,.@y); end;
		} else {
			switch(select("¡ø¡ô¡ï ¡ò","¡ü¡÷¡ó ¡÷ ")) {
				case 1: .@x = 385; .@y = 272; break;
				case 2: .@x = 385; .@y = 208; break;
			}
			warp(strnpcinfo(NPC_MAP), .@x, .@y); end;
		}
	}
}
dic_in01,46,287,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_19	CLEAR_NPC
dic_in01,122,283,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_20	CLEAR_NPC
dic_in01,121,203,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_21	CLEAR_NPC
dic_in01,35,213,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_22	CLEAR_NPC
dic_in01,43,115,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_23	CLEAR_NPC
dic_in01,111,108,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_24	CLEAR_NPC
dic_in01,179,108,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_25	CLEAR_NPC
dic_in01,261,115,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_26	CLEAR_NPC
dic_in01,55,48,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_27	CLEAR_NPC
dic_in01,137,46,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_28	CLEAR_NPC
dic_in01,222,46,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_29	CLEAR_NPC
dic_in01,388,272,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_30	CLEAR_NPC
dic_in01,389,208,0	duplicate(Elevator#dicasteswarp_18)	dicasteswarp_31	CLEAR_NPC
