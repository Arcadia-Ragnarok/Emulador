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
| - Info: Controle sobre as barricadas na WOE 2.0                   |
| - Doc: Variáveis globais serão salvas no banco na coluna mapreg.  |
|        $agitse_ ? [2] : 1º Portão                                 |
|        $agitse_ ? [3] : 2º Portão                                 |
|        $agitse_ ? [4] : 3º Portão                                 |
|        *Exemplo*                                                  |
|        Dados: [varname: $agitse_schg_cas01][index: 2][value: 1]   |
|        Resultado: 1º Portão Ativado                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	BarrierControlSE	FAKE_NPC,{


	// --------------------------------------------------------------
	// Quando ativada
	OnEnable:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@number = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 10));

	// .@Wall -> definição, coordedadas e características para 
	//células não clicáveis e intrasponíveis.
	// .@x & .@y -> Posição dos pinos.

	if (.@number == 0) { // Barricada neutra (Acionada pelas runas guardiãs)
		if (compare(.@map$, "arug")) {
			if (.@map$ == "arug_cas01") {
				setarray(.@Wall[0], 238, 74, 8, 6, 0);
				setarray(.@x[0], 239, 241, 243, 245);
				setarray(.@y[0],  73,  73,  73,  73);
			} else if (.@map$ == "arug_cas02") {
				setarray(.@Wall[0], 136, 136, 8, 6, 0);
				setarray(.@x[0], 137, 139, 141, 143);
				setarray(.@y[0], 137, 137, 137, 137);
			} else  {
				setarray(.@Wall[0], 138, 110, 8, 6, 0);
				setarray(.@x[0], 139, 141, 143, 145);
				setarray(.@y[0], 111, 111, 111, 111);
			}
		} else {
			if (.@map$ == "schg_cas02") {
				setarray(.@Wall[0], 290, 98, 8, 0, 0);
				setarray(.@x[0], 289, 289, 289, 289);
				setarray(.@y[0],  98, 100, 102, 104);
			} else if (.@map$ == "schg_cas03") {
				setarray(.@Wall[0], 326, 301, 6, 6, 0);
				setarray(.@x[0], 326, 328, 330);
				setarray(.@y[0], 300, 300, 300);
			} else {
				setarray(.@Wall[0], 114, 48, 13, 6, 0);
				setarray(.@x[0], 115, 117, 119, 121, 123, 125);
				setarray(.@y[0],  49,  49,  49,  49,  49,  49);
			}
		}
	} else if (.@number == 1) { // 1º Barricada
		if (compare(.@map$, "arug")) {
			if (.@map$ == "arug_cas01") {
				setarray(.@Wall[0], 239, 53, 8, 6, 1);
				setarray(.@x[0], 239, 241, 243, 240, 242, 244);
				setarray(.@y[0], 55,  55,  55,  54,  54,  54);
			} else if (.@map$ == "arug_cas02") {
				setarray(.@Wall[0], 150, 223, 12, 6, 1);
				setarray(.@x[0], 151, 153, 155, 157, 159, 161);
				setarray(.@y[0], 222, 222, 222, 222, 222, 222);
			} else {
				setarray(.@Wall[0], 139, 158, 6, 6, 1);
				setarray(.@x[0], 140, 142, 144, 139, 141, 143);
				setarray(.@y[0], 157, 157, 157, 156, 156, 156);
			}
		} else {
			if (.@map$ == "schg_cas02") {
				setarray(.@Wall[0], 279, 98, 8, 0, 1);
				setarray(.@x[0], 280, 280, 280, 281, 281, 281);
				setarray(.@y[0],  98, 100, 102,  99, 101, 103);
			} else if (.@map$ == "schg_cas03") {
				setarray(.@Wall[0], 325, 277, 8, 6, 1);
				setarray(.@x[0], 326, 328, 330, 327, 329, 331);
				setarray(.@y[0], 278, 278, 278, 279, 279, 279);
			} else {
				setarray(.@Wall[0], 114, 51, 13, 6, 1);
				setarray(.@x[0], 115, 117, 119, 121, 123, 125);
				setarray(.@y[0],  50,  50,  50,  50,  50,  50);
			}
		}
	} else if (.@number == 2) { // 2º Barricada
		if (compare(.@map$, "arug")) {
			if (.@map$ == "arug_cas01") {
				setarray(.@Wall[0], 107, 124, 6, 6, 1);
				setarray(.@x[0], 107, 109, 111, 108, 110, 112);
				setarray(.@y[0], 122, 122, 122, 123, 123, 123);
			} else if (.@map$ == "arug_cas02") {
				setarray(.@Wall[0], 125, 342, 8, 0, 1);
				setarray(.@x[0], 126, 126, 126, 127, 127, 127);
				setarray(.@y[0], 343, 345, 347, 344, 346, 348);
			} else  {
				setarray(.@Wall[0], 138, 210, 8, 6, 1);
				setarray(.@x[0], 140, 142, 144, 139, 141, 143);
				setarray(.@y[0], 209, 209, 209, 208, 208, 208);
			}
		} else {
			if (.@map$ == "schg_cas02") {
				setarray(.@Wall[0], 230, 213, 6, 0, 1);
				setarray(.@x[0], 231, 231, 231, 232, 232, 232);
				setarray(.@y[0], 213, 215, 217, 213, 215, 217);
			} else if (.@map$ == "schg_cas03") {
				setarray(.@Wall[0], 200, 230, 8, 0, 1);
				setarray(.@x[0], 201, 201, 201, 202, 202, 202);
				setarray(.@y[0], 231, 233, 235, 232, 234, 236);
			} else {
				setarray(.@Wall[0], 114, 154, 13, 6, 1);
				setarray(.@x[0], 115, 117, 119, 121, 123, 125);
				setarray(.@y[0], 153, 153, 153, 153, 153, 153);
			}
		}
	} else if (.@number == 3) { // 3º Barricada
		if (compare(.@map$, "arug")) {
			if (.@map$ == "arug_cas01") {
				setarray(.@Wall[0], 84, 171, 8, 6, 1);
				setarray(.@x[0], 84,  86,  88,  90);
				setarray(.@y[0], 170, 170, 170, 170);
			} else if (.@map$ == "arug_cas02") {
				setarray(.@Wall[0], 38, 314, 12, 6, 1);
				setarray(.@x[0],  40,  42,  44,  46);
				setarray(.@y[0], 315, 315, 315, 315);
			} else {
				setarray(.@Wall[0], 138, 263, 8, 6, 1);
				setarray(.@x[0], 139, 141, 143, 145);
				setarray(.@y[0], 262, 262, 262, 262);
			}
		} else {
			if (.@map$ == "schg_cas02") {
				setarray(.@Wall[0], 160, 141, 6, 6, 1);
				setarray(.@x[0], 160, 162, 164, 166);
				setarray(.@y[0], 140, 140, 140, 140);
			} else if (.@map$ == "schg_cas03") {
				setarray(.@Wall[0], 285, 198, 8, 0, 1);
				setarray(.@x[0], 284, 284, 284, 284);
				setarray(.@y[0], 199, 201, 203, 205);
			} else {
				setarray(.@Wall[0], 116, 241, 11, 6, 1);
				setarray(.@x[0], 116, 118, 120, 122);
				setarray(.@y[0], 240, 240, 240, 240);
			}
		}
	}

	if (.@number == 3) {
		setvariable(getd(".Barrier" + .@number + .@map$), 4);
	} else if (.@number) {
		setvariable(getd(".Barrier" + .@number + .@map$), 6);
	}
	.@MobCount = (getd(".Barrier" + .@number + .@map$)) ? getd(".Barrier" + .@number + .@map$) : getarraysize(.@x);
	for (.@i = 0; .@i < .@MobCount; ++.@i) {
		guardian(.@map$, .@x[.@i], .@y[.@i], "", BARRICADE, strnpcinfo(NPC_NAME) + "::OnDestroyed");
	}
	setwall(.@map$, .@Wall[0], .@Wall[1], .@Wall[2], .@Wall[3], .@Wall[4], "barrier" + .@number + "_" + .@map$);
	setd("$agitse_" + .@map$ + "[" + (.@number + 1) + "]", 1);
	end;

	// --------------------------------------------------------------
	// Quando desativada
	OnDisable:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@number = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 10));
	killmonster(.@map$, strnpcinfo(NPC_NAME) + "::OnDestroyed");
	delwall("barrier" + .@number + "_" + .@map$);
	setd("$agitse_" + .@map$ + "[" + (.@number + 1) + "]", 0);
	end;

	// --------------------------------------------------------------
	// Quando desatruída
	OnDestroyed:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@number = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 10));
	setvariable(getd(".Barrier" + .@number + .@map$), getd(".Barrier" + .@number + .@map$) -1);
	if (!.@number) { end; } // Barricada adicionada pela runa guardiã
	if (!getd(".Barrier" + .@number + .@map$)) {
		setarray(.@name$[0], "Primeiro", "Segundo", "Terceiro");
		mapannounce(.@map$, "O " + .@name$[.@number - 1] + " Portão da fortaleza foi destruído.", bc_map, "0x00ff00");
		delwall("barrier" + .@number + "_" + .@map$);
		setd("$agitse_" + .@map$ + "[" + (.@number + 1) + "]", 0);
	}
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#arug_cas01	HIDDEN_NPC
arug_cas01,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#arug_cas01	HIDDEN_NPC
arug_cas01,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#arug_cas01	HIDDEN_NPC
arug_cas01,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#arug_cas01	HIDDEN_NPC
// Cyr
arug_cas02,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#arug_cas02	HIDDEN_NPC
arug_cas02,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#arug_cas02	HIDDEN_NPC
arug_cas02,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#arug_cas02	HIDDEN_NPC
arug_cas02,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#arug_cas02	HIDDEN_NPC
// Horn
arug_cas03,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#arug_cas03	HIDDEN_NPC
arug_cas03,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#arug_cas03	HIDDEN_NPC
arug_cas03,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#arug_cas03	HIDDEN_NPC
arug_cas03,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#arug_cas03	HIDDEN_NPC
// Gefn
arug_cas04,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#arug_cas04	HIDDEN_NPC
arug_cas04,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#arug_cas04	HIDDEN_NPC
arug_cas04,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#arug_cas04	HIDDEN_NPC
arug_cas04,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#arug_cas04	HIDDEN_NPC
// Banadis
arug_cas05,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#arug_cas05	HIDDEN_NPC
arug_cas05,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#arug_cas05	HIDDEN_NPC
arug_cas05,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#arug_cas05	HIDDEN_NPC
arug_cas05,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#arug_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - [ Duplicações (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#schg_cas01	HIDDEN_NPC
schg_cas01,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#schg_cas01	HIDDEN_NPC
schg_cas01,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#schg_cas01	HIDDEN_NPC
schg_cas01,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#schg_cas01	HIDDEN_NPC
// Andlangr
schg_cas02,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#schg_cas02	HIDDEN_NPC
schg_cas02,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#schg_cas02	HIDDEN_NPC
schg_cas02,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#schg_cas02	HIDDEN_NPC
schg_cas02,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#schg_cas02	HIDDEN_NPC
// Viblainn
schg_cas03,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#schg_cas03	HIDDEN_NPC
schg_cas03,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#schg_cas03	HIDDEN_NPC
schg_cas03,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#schg_cas03	HIDDEN_NPC
schg_cas03,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#schg_cas03	HIDDEN_NPC
// Hljod
schg_cas04,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#schg_cas04	HIDDEN_NPC
schg_cas04,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#schg_cas04	HIDDEN_NPC
schg_cas04,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#schg_cas04	HIDDEN_NPC
schg_cas04,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#schg_cas04	HIDDEN_NPC
// Skidbladnir
schg_cas05,4,0,0	duplicate(BarrierControlSE)	BarrierSE_0#schg_cas05	HIDDEN_NPC
schg_cas05,5,0,0	duplicate(BarrierControlSE)	BarrierSE_1#schg_cas05	HIDDEN_NPC
schg_cas05,6,0,0	duplicate(BarrierControlSE)	BarrierSE_2#schg_cas05	HIDDEN_NPC
schg_cas05,7,0,0	duplicate(BarrierControlSE)	BarrierSE_3#schg_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - (05/05/2018) [Spell Master]
// * Modificado e adaptado para o código fonte do emulador Arcadia
