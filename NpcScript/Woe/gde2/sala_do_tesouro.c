/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: ?                                                    |
| - Info: Sala dos tesouros dos catelos na WOE 2.0                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Aplicação dos investimentos ] -
// - [ Invocação dos baús do tesouro ] -
// ------------------------------------------------------------------
-	script	TreasureSE	FAKE_NPC,{
	OnClock0001:
	if (strnpcinfo(NPC_NAME) == "TreasureSE") {
		end;
	} else {
		if (!getcastledata(strnpcinfo(NPC_NAME_HIDDEN), 1)) {end;}
		.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
		killmonster(.@map$, strnpcinfo(NPC_NAME) + "::OnTreasureDied");
		// Se foi investido na economia
		if (getcastledata(.@map$, 4)) {
			.@eco = getcastledata(.@map$, 2);
			setcastledata(.@map$, 2, .@eco + getcastledata(.@map$, 4) + (rand(2) && getgdskilllv(getcastledata(.@map$, 1), GD_DEVELOPMENT)));
			if (getcastledata(.@map$, 2) > 100) {
				setcastledata(.@map$, 2, 100);
			}
			setcastledata(.@map$, 4, 0);
		}
		// Se foi investido na defesa
		if (getcastledata(.@map$, 5)) {
			.@def = getcastledata(.@map$, 3);
			setcastledata(.@map$, 3, .@def + getcastledata(.@map$, 5));
			if (getcastledata(.@map$,3) > 100) {
				setcastledata(.@map$, 3, 100);
			}
			setcastledata(.@map$, 5, 0);
		}

		// Invocação dos baús do tesouro
		.@Treasure = getcastledata(.@map$, 2) / 5 + 4;
		if (!.@Treasure) { end; }
		freeloop(true);
		if (compare(.@map$, "arug")) {
			if (.@map$ == "arug_cas01") {
				.@box = 1943;
				setarray(.@x[0], 251, 252, 253, 254, 255, 256, 257, 258, 251, 252, 253, 254, 255, 256, 257, 258, 251, 252, 253, 254, 255, 256, 257, 258);
				setarray(.@y[0], 369, 369, 369, 369, 368, 368, 368, 368, 367, 367, 367, 367, 366, 366, 366, 366, 365, 365, 365, 365, 364, 364, 364, 364);
			} else if (.@map$ == "arug_cas02") {
				.@box = 1944;
				setarray .@x[0],382,383,384,385,386,387,384,385,386,387,388,389,382,383,384,385,386,387,384,385,386,387,388,389;
				setarray .@y[0],231,231,231,231,231,231,230,230,230,230,230,230,225,225,225,225,225,225,224,224,224,224,224,224;
			} else if (.@map$ == "arug_cas03") {
				.@box = 1945;
				setarray(.@x[0], 291, 292, 293, 294, 295, 296, 293, 294, 295, 296, 297, 298, 291, 292, 293, 294, 295, 296, 293, 294, 295, 296, 297, 298);
				setarray(.@y[0], 276, 276, 276, 276, 276, 276, 274, 274, 274, 274, 274, 274, 272, 272, 272, 272, 272, 272, 269, 269, 269, 269, 269, 269);
			} else if (.@map$ == "arug_cas04") {
				.@box = 1946;
				setarray(.@x[0], 291, 292, 293, 294, 295, 296, 293, 294, 295, 296, 297, 298, 291, 292, 293, 294, 295, 296, 293, 294, 295, 296, 297, 298);
				setarray(.@y[0], 276, 276, 276, 276, 276, 276, 274, 274, 274, 274, 274, 274, 272, 272, 272, 272, 272, 272, 269, 269, 269, 269, 269, 269);
			} else if (.@map$ == "arug_cas05") {
				.@box = 1945;
				setarray(.@x[0], 291, 292, 293, 294, 295, 296, 293, 294, 295, 296, 297, 298, 291, 292, 293, 294, 295, 296, 293, 294, 295, 296, 297, 298);
				setarray(.@y[0], 276, 276, 276, 276, 276, 276, 274, 274, 274, 274, 274, 274, 272, 272, 272, 272, 272, 272, 269, 269, 269, 269, 269, 269);
			}
		} else {
			if (.@map$ == "schg_cas01") {
				.@box = 1938;
				setarray(.@x[0], 388, 388, 388, 387, 386, 385, 384, 384, 384, 384, 384, 384, 385, 386, 387, 388, 389, 390, 390, 390, 389, 388, 387, 386);
				setarray(.@y[0], 388, 389, 390, 390, 390, 390, 389, 388, 387, 386, 385, 384, 384, 384, 384, 384, 384, 384, 385, 386, 386, 386, 386, 386);
			} else if (.@map$ == "schg_cas02") {
				.@box = 1939;
				setarray(.@x[0], 249, 250, 251, 252, 253, 246, 247, 248, 249, 250, 250, 251, 252, 253, 246, 247, 248, 249, 250, 249, 250, 251, 252, 253);
				setarray(.@y[0], 378, 378, 378, 378, 378, 376, 376, 376, 376, 376, 374, 374, 374, 374, 372, 372, 372, 372, 372, 370, 370, 370, 370, 370);
			} else if (.@map$ == "schg_cas03") {
				.@box = 1942;
				setarray(.@x[0], 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194);
				setarray(.@y[0],  21,  21,  21,  21,  21,  21,  19,  19,  19,  19,  19,  19,  17,  17,  17,  17,  17,  17,  15,  15,  15,  15,  15,  15);
			} else if (.@map$ == "schg_cas04") {
				.@box = 1941;
				setarray(.@x[0], 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194);
				setarray(.@y[0],  21,  21,  21,  21,  21,  21,  19,  19,  19,  19,  19,  19,  17,  17,  17,  17,  17,  17,  15,  15,  15,  15,  15,  15);
			} else if (.@map$ == "schg_cas05") {
				.@box = 1940;
				setarray(.@x[0], 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194, 189, 190, 191, 192, 193, 194);
				setarray(.@y[0],  21,  21,  21,  21,  21,  21,  19,  19,  19,  19,  19,  19,  17,  17,  17,  17,  17,  17,  15,  15,  15,  15,  15,  15);
			}
		}
		for(.@i = 0; .@i < 4; ++.@i) {
			monster(.@map$, .@x[.@i], .@y[.@i], "Baú do Tesouro", (.@i%2) ? .@box: 1324, 1, strnpcinfo(NPC_NAME) + "::OnTreasureDied");
		}
		for(.@i = 4; .@i < 24; ++.@i) {
			if (.@Treasure < .@i + 1) {
				break;
			}
			monster(.@map$, .@x[.@i], .@y[.@i], "Baú do Tesouro", (.@i%2) ? .@box: 1324, 1, strnpcinfo(NPC_NAME) + "::OnTreasureDied");
		}
		freeloop(false);
	}
	end;

	OnTreasureDied:
	end;
}

// ------------------------------------------------------------------
// - Duplicações Schwaltzvalt
schg_cas01,8,0,0	duplicate(TreasureSE)	Treasure#schg_cas01	HIDDEN_NPC
schg_cas02,8,0,0	duplicate(TreasureSE)	Treasure#schg_cas02	HIDDEN_NPC
schg_cas03,8,0,0	duplicate(TreasureSE)	Treasure#schg_cas03	HIDDEN_NPC
schg_cas04,8,0,0	duplicate(TreasureSE)	Treasure#schg_cas04	HIDDEN_NPC
schg_cas05,8,0,0	duplicate(TreasureSE)	Treasure#schg_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - Duplicações Arunafeltz
arug_cas01,8,0,0	duplicate(TreasureSE)	Treasure#arug_cas01	HIDDEN_NPC
arug_cas02,8,0,0	duplicate(TreasureSE)	Treasure#arug_cas02	HIDDEN_NPC
arug_cas03,8,0,0	duplicate(TreasureSE)	Treasure#arug_cas03	HIDDEN_NPC
arug_cas04,8,0,0	duplicate(TreasureSE)	Treasure#arug_cas04	HIDDEN_NPC
arug_cas05,8,0,0	duplicate(TreasureSE)	Treasure#arug_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - [ Alavanca de saída ] -
// ------------------------------------------------------------------
/*
-	script	SwitchSE	FAKE_NPC,{
	mes("^3355FFVocê vai puxar esta pequena alavanca?^000000");
	next;
	if (select("Puxar", "Cancelar") == 1) {
		if (compare(strnpcinfo(NPC_MAP),"arug")) {
			if (strnpcinfo(NPC_MAP) == "arug_cas01")      { setarray(.@i[0], 121, 357); }
			else if (strnpcinfo(NPC_MAP) == "arug_cas02") { setarray(.@i[0], 387, 323); }
			else                                          { setarray(.@i[0], 321, 57); }
		} else {
			if (strnpcinfo(NPC_MAP) == "schg_cas02")      { setarray(.@i[0], 339, 79); }
			else if (strnpcinfo(NPC_MAP) == "schg_cas03") { setarray(.@i[0], 57, 13); }
			else                                          { setarray(.@i[0], 275, 244); }
		}
		warp(strnpcinfo(NPC_MAP), .@i[0], .@i[1]);
	}
	close2;
	end;
}

// ------------------------------------------------------------------
// - Duplicações Schwaltzvalt
schg_cas01,391,391,0	duplicate(SwitchSE)	Switch#sch01_switch	HIDDEN_NPC
schg_cas02,257,369,0	duplicate(SwitchSE)	Switch#sc02_switch 	HIDDEN_NPC
schg_cas03,199,25,0	duplicate(SwitchSE)	Switch#sch03_switch	HIDDEN_NPC
schg_cas04,391,391,0	duplicate(SwitchSE)	Switch#sch04_switch	HIDDEN_NPC
schg_cas05,391,391,0	duplicate(SwitchSE)	Switch#sch05_switch	HIDDEN_NPC

// ------------------------------------------------------------------
// - Duplicações Arunafeltz
arug_cas01,259,371,0	duplicate(SwitchSE)	#aru01_switch	HIDDEN_NPC
arug_cas02,386,227,0	duplicate(SwitchSE)	#aru02_switch	HIDDEN_NPC
arug_cas03,299,277,0	duplicate(SwitchSE)	#aru03_switch	HIDDEN_NPC
arug_cas04,299,277,0	duplicate(SwitchSE)	#aru04_switch	HIDDEN_NPC
arug_cas05,299,277,0	duplicate(SwitchSE)	#aru05_switch	HIDDEN_NPC
*/