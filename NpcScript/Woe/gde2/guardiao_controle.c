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
| - Copyright: Spell Master (?/?/2011)                              |
| - Info: Controle sobre as Guardiões na WOE 2.0                    |
\*-----------------------------------------------------------------*/

-	script	GuardControlSE	FAKE_NPC,{

	// --------------------------------------------------------------
	// Quando ativado
	OnEnable:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guard = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 8));
	.@defence = getcastledata(.@map$, 3);

	// Coordenadas X & Y "array [0],ECO -10,ECO 10-30,ECO 30-50,ECO 50-70,ECO +70"

	if (getgdskilllv(getcastledata(.@map$, 1), GD_GUARDRESEARCH)) {
		if (.@guard == 1) { // Guardiões invocados pela primeira runa
			if (compare(.@map$, "arug")) {
				if (.@map$ == "arug_cas01") {
					setarray(.@X[0], 233, 252, 232, 201, 224);
					setarray(.@Y[0], 83,  81,  108, 130, 168);
					setarray(.@X_Time[0], 195, 196, 169, 152, 224);
					setarray(.@Y_Time[0], 250, 137, 89,  51,  168);
				} else if (.@map$ == "arug_cas02") {
					setarray(.@X[0], 104, 67, 67, 113, 122);
					setarray(.@Y[0], 32,  36, 85, 87,  112);
					setarray(.@X_Time[0], 67, 90,  91,  122, 20);
					setarray(.@Y_Time[0], 60, 167, 119, 112, 169);
				} else {
					setarray(.@X[0], 130, 128, 128, 128, 110);
					setarray(.@Y[0], 60,  77,  90,  100, 96);
					setarray(.@X_Time[0], 91, 65, 65,  110, 128);
					setarray(.@Y_Time[0], 53, 71, 113, 96,  100);
				}
			} else {
				if (.@map$ == "schg_cas02") {
					setarray(.@X[0], 326, 337, 334, 296, 285);
					setarray(.@Y[0], 83,  95,  119, 82, 40);
					setarray(.@X_Time[0], 236, 285, 296, 334, 337);
					setarray(.@Y_Time[0], 41,  40,  82,  119, 95);
				} else if (.@map$ == "schg_cas03") {
					setarray(.@X[0], 326, 273, 288, 306, 323);
					setarray(.@Y[0], 308, 309, 306, 326, 308);
					setarray(.@X_Time[0], 306, 273, 288, 306, 273);
					setarray(.@Y_Time[0], 325, 309, 306, 325, 309);
				} else {
					setarray(.@X[0], 111, 109, 65, 110, 88);
					setarray(.@Y[0], 18, 44, 22, 40, 20);
					setarray(.@X_Time[0], 64, 47, 109, 111, 112);
					setarray(.@Y_Time[0], 40, 43, 47,  18,  32);
				}
			}
		} else if (.@guard == 2) { //  Guardiões invocados pela segunda runa
			if (compare(.@map$, "arug")) {
				if (.@map$ == "arug_cas01") {
					setarray(.@X[0], 294, 256, 240, 246, 235);
					setarray(.@Y[0], 210, 203, 133, 292, 132);
					setarray(.@X_Time[0], 235, 246, 240, 256, 254);
					setarray(.@Y_Time[0], 132, 92, 133, 203, 95);
				} else if (.@map$ == "arug_cas02") {
					setarray(.@X[0], 175, 204, 211, 209, 161);
					setarray(.@Y[0], 31,  32,  63,  88,  91);
					setarray(.@X_Time[0], 186, 183, 150, 161, 209);
					setarray(.@Y_Time[0], 170, 121, 110, 91, 88);
				} else {
					setarray(.@X[0], 156, 172, 154, 156, 155);
					setarray(.@Y[0], 101, 95,  90,  77,  60);
					setarray(.@X_Time[0], 187, 212, 211, 155, 156);
					setarray(.@Y_Time[0], 54,  67,  105, 60,  77);
				}
			} else {
				if (.@map$ == "schg_cas02") {
					setarray(.@X[0], 359, 300, 337, 317, 307);
					setarray(.@Y[0], 85,  119, 154, 183, 222);
					setarray(.@X_Time[0], 300, 337, 317, 307, 359);
					setarray(.@Y_Time[0], 119, 154, 183, 222, 85);
				} else if (.@map$ == "schg_cas03") {
					setarray(.@X[0], 338, 364, 365, 317, 338);
					setarray(.@Y[0], 309, 305, 261, 318, 310);
					setarray(.@X_Time[0], 338, 364, 365, 317, 364);
					setarray(.@Y_Time[0], 309, 305, 261, 318, 305);
				} else {
					setarray(.@X[0], 130, 129, 151, 187, 178);
					setarray(.@Y[0], 22,  47,  18,  15,  42);
					setarray(.@X_Time[0], 152, 187, 182, 130, 130);
					setarray(.@Y_Time[0], 43,  15,  42,  22,  28);
				}
			}
		}

		if (.@defence < 10) {
			guardian(.@map$, .@X[0], .@Y[0], "Guardião", SWORD_GUARDIAN_, strnpcinfo(NPC_NAME) + "::OnDestroyed");
			end;
		} else if (.@defence < 30) {
			setvariable(getd(".guardSE" + .@guard + .@map$), 2);
		} else if (.@defence < 50) {
			setvariable(getd(".guardSE" + .@guard + .@map$), 3);
		} else if (.@defence < 70) {
			setvariable(getd(".guardSE" + .@guard + .@map$), 4);
		} else if (.@defence >= 70) {
			setvariable(getd(".guardSE" + .@guard + .@map$), 5);
		}
		.@MobCount = (getd(".guardSE" + .@guard + .@map$)) ? getd(".guardSE" + .@guard + .@map$) : getarraysize(.@X);
		for (.@i = 0; .@i < .@MobCount; ++.@i) {
			guardian(.@map$, .@X[.@i], .@Y[.@i], "Guardião", SWORD_GUARDIAN_, strnpcinfo(NPC_NAME) + "::OnDestroyed");
		}
		initnpctimer;
	}
	end;

	// --------------------------------------------------------------
	// Quando desativado
	OnDisable:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guard = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 8));
	killmonster(.@map$, strnpcinfo(NPC_NAME) + "::OnDestroyed");
	setvariable(getd(".guardSE" + .@guard + .@map$), 0);
	stopnpctimer;
	end;

	// --------------------------------------------------------------
	// Quando desatruído
	OnDestroyed:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guard = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 8));
	mapannounce(.@map$, "O guardião foi derrotado!",bc_map,"0x00FF00");
	setvariable(getd(".guardSE" + .@guard + .@map$), getd(".guardSE" + .@guard + .@map$) -1);
	// Ressucitar os guardiões caso a runa não foi destruída
	if (getd(".guardSE" + .@guard + .@map$) < 1) {
		sleep(10000);
		donpcevent(strnpcinfo(NPC_NAME)+"::OnEnable");
	}
	end;

	// --------------------------------------------------------------
	// Novos guardiões serão convocados com o decorrer da GDE
	//caso as runas não sejam destruídas.
	OnTimer300000:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guard = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 8));
	.@rune$ = (.@guard == 1) ? "Primeira" : "Segunda";
	setvariable(getd(".guardSE" + .@guard + .@map$), getd(".guardSE" + .@guard + .@map$) +1);
	guardian(.@map$, .@X_Time[0], .@Y_Time[0], "Guardião", SWORD_GUARDIAN_, strnpcinfo(NPC_NAME)+"::OnDestroyed");
	mapannounce(.@map$, "A " + .@rune$ + " Runa convocou mais um guardião reforçando nossas defesas.", bc_map, "0xFF4500");
	end;

	OnTimer900000:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guard = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 8));
	.@rune$ = (.@guard == 1) ? "Primeira" : "Segunda";
	guardian(.@map$, .@X_Time[1], .@Y_Time[1], "Guardião", BOW_GUARDIAN_, strnpcinfo(NPC_NAME) + "::OnDestroyed");
	mapannounce(.@map$, "A " + .@rune$ + " Runa convocou mais um guardião reforçando nossas defesas.", bc_map, "0xFF4500");
	end;

	OnTimer1800000:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guard = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 8));
	.@rune$ = (.@guard == 1) ? "Primeira" : "Segunda";
	setvariable(getd(".guardSE" + .@guard + .@map$), getd(".guardSE" + .@guard + .@map$) +1);
	guardian(.@map$, .@X_Time[0], .@Y_Time[0], "Guardião", SWORD_GUARDIAN_, strnpcinfo(NPC_NAME)+"::OnDestroyed");
	mapannounce(.@map$, "A " + .@rune$ + " Runa convocou mais um guardião reforçando nossas defesas.", bc_map, "0xFF4500");
	end;

	OnTimer2700000:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guard = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 8));
	.@rune$ = (.@guard == 1) ? "Primeira" : "Segunda";
	guardian(.@map$, .@X_Time[1], .@Y_Time[1], "Guardião", BOW_GUARDIAN_, strnpcinfo(NPC_NAME) + "::OnDestroyed");
	mapannounce(.@map$, "A " + .@rune$ + " Runa convocou mais um guardião reforçando nossas defesas.", bc_map, "0xFF4500");
	end;

	OnTimer3600000:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guard = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 8));
	.@rune$ = (.@guard == 1) ? "Primeira" : "Segunda";
	setvariable(getd(".guardSE" + .@guard + .@map$), getd(".guardSE" + .@guard + .@map$) +1);
	mapannounce(.@map$, "A " + .@rune$ + " Runa convocou mais um guardião reforçando nossas defesas.", bc_map, "0xFF4500");
	stopnpctimer;
	end;


}

// ------------------------------------------------------------------
// - [ Duplicações (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,8,0,0	duplicate(GuardControlSE)	GuardSE_1#arug_cas01	HIDDEN_NPC
arug_cas01,9,0,0	duplicate(GuardControlSE)	GuardSE_2#arug_cas01	HIDDEN_NPC
// Cyr
arug_cas02,8,0,0	duplicate(GuardControlSE)	GuardSE_1#arug_cas02	HIDDEN_NPC
arug_cas02,9,0,0	duplicate(GuardControlSE)	GuardSE_2#arug_cas02	HIDDEN_NPC
// Horn
arug_cas03,8,0,0	duplicate(GuardControlSE)	GuardSE_1#arug_cas03	HIDDEN_NPC
arug_cas03,9,0,0	duplicate(GuardControlSE)	GuardSE_2#arug_cas03	HIDDEN_NPC
// Gefn
arug_cas04,8,0,0	duplicate(GuardControlSE)	GuardSE_1#arug_cas04	HIDDEN_NPC
arug_cas04,9,0,0	duplicate(GuardControlSE)	GuardSE_2#arug_cas04	HIDDEN_NPC
// Banadis
arug_cas05,8,0,0	duplicate(GuardControlSE)	GuardSE_1#arug_cas05	HIDDEN_NPC
arug_cas05,9,0,0	duplicate(GuardControlSE)	GuardSE_2#arug_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - [ Duplicações (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,8,0,0	duplicate(GuardControlSE)	GuardSE_1#schg_cas01	HIDDEN_NPC
schg_cas01,9,0,0	duplicate(GuardControlSE)	GuardSE_2#schg_cas01	HIDDEN_NPC
// Andlangr
schg_cas02,8,0,0	duplicate(GuardControlSE)	GuardSE_1#schg_cas02	HIDDEN_NPC
schg_cas02,9,0,0	duplicate(GuardControlSE)	GuardSE_2#schg_cas02	HIDDEN_NPC
// Viblainn
schg_cas03,8,0,0	duplicate(GuardControlSE)	GuardSE_1#schg_cas03	HIDDEN_NPC
schg_cas03,9,0,0	duplicate(GuardControlSE)	GuardSE_2#schg_cas03	HIDDEN_NPC
// Hljod
schg_cas04,8,0,0	duplicate(GuardControlSE)	GuardSE_1#schg_cas04	HIDDEN_NPC
schg_cas04,9,0,0	duplicate(GuardControlSE)	GuardSE_2#schg_cas04	HIDDEN_NPC
// Skidbladnir
schg_cas05,8,0,0	duplicate(GuardControlSE)	GuardSE_1#schg_cas05	HIDDEN_NPC
schg_cas05,9,0,0	duplicate(GuardControlSE)	GuardSE_2#schg_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - (05/05/2018) [Spell Master]
// * Modificado e adaptado para o código fonte do emulador Arcadia
