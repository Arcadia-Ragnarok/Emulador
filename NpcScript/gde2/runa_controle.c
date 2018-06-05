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
| - Info: Controle sobre as Runas Guardiãs na WOE 2.0               |
| - Doc: Variáveis globais serão salvas no banco na coluna mapreg.  | 
|        $agitse_ ? [0] : 1º Runa guardiã                           |
|        $agitse_ ? [1] : 2º Runa guardiã                           |
|        *Exemplo*                                                  |
|        Dados: [varname: $agitse_schg_cas01][index: 0][value: 1]   |
|        Resultado: 1º runa convocada                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	RuneControlSE	FAKE_NPC,{

	// --------------------------------------------------------------
	// Quando ativada
	OnEnable:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@var$ = "$agitse_" + strnpcinfo(NPC_NAME_HIDDEN);
	.@rune = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 7));
	.@index = (.@rune == 1) ? 0 : 2;
	if (compare(.@map$, "arug")) {
		if (.@map$ == "arug_cas01")      { setarray(.@cord[0], 210,234, 308,189); }
		else if (.@map$ == "arug_cas02") { setarray(.@cord[0], 33,168,  245,168); }
		else                             { setarray(.@cord[0], 65,171,  212,149); }
	} else {
		if (.@map$ == "schg_cas02")      { setarray(.@cord[0], 231,58,  335,230); }
		else if (.@map$ == "schg_cas03") { setarray(.@cord[0], 242,309, 376,251); }
		else                             { setarray(.@cord[0], 27,35,   207,75);  }
	}
	guardian(.@map$, .@cord[.@index], .@cord[.@index + 1], " Runa Guardiã", ((.@rune == 1) ? S_EMPEL_1 : S_EMPEL_2), strnpcinfo(NPC_NAME) + "::OnDestroyed");
	setd(.@var$ + "[" + (.@rune - 1) + "]", 1);
	if (getd(.@var$ + "[0]") && getd(.@var$ + "[1]")) {
		donpcevent("BarrierSE_0#" + .@map$ + "::OnEnable");
	}
	donpcevent("GuardSE_" + .@rune + "#" + .@map$ + "::OnEnable");
	initnpctimer;
	end;

	// --------------------------------------------------------------
	// Quando desativada
	OnDisable:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@rune = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 7));
	killmonster(.@map$, strnpcinfo(NPC_NAME) + "::OnDestroyed");
	donpcevent("GuardSE_" + .@rune + "#" + .@map$ + "::OnDisable");
	donpcevent("BarrierSE_0#" + .@map$ + "::OnDisable");
	setd("$agitse_" + .@map$ + "[" + (.@rune - 1) + "]", 0);
	stopnpctimer;
	end;

	// --------------------------------------------------------------
	// Quando desatruída
	OnDestroyed:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@rune = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 7));
	.@var$ = "$agitse_" + strnpcinfo(NPC_NAME_HIDDEN);
	setd("$agitse_" + .@map$ + "[" + (.@rune - 1) + "]", 0);
	if (!getd(.@var$ + "[0]") && !getd(.@var$ + "[1]")) {
		mapannounce(.@map$, "Todas Runas Guardiãs foram destruídas!", bc_map, "0x00ff00");
		donpcevent("BarrierSE_0#" + .@map$ + "::OnDisable");
		stopnpctimer;
	} else {
		mapannounce(.@map$, "A " + ((.@rune == 1) ? "Primeira" : "Segunda") + " Runa Guardiã foi destruída!", bc_map, "0x00ff00");
		initnpctimer;
	}
	end;

	// --------------------------------------------------------------
	// Atomaticamente ativar a runa destruída.
	// *Quando ativado uma das runas a contagem de 30 minutos inicia,
	// após esse tempo uma checagem é feita para saber qual runa está
	// destruída se alguma estiver reconstroi ela.
	OnTimer300000:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	if (!getd("$agitse_" + .@map$ + "[0]")) {
		donpcevent("RuneSE_1#" + .@map$ + "::OnEnable");
	} else if (!getd("$agitse_" + .@map$ + "[1]")) {
		donpcevent("RuneSE_2#" + .@map$ + "::OnEnable");
	}
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,2,0,0	duplicate(RuneControlSE)	RuneSE_1#arug_cas01	HIDDEN_NPC
arug_cas01,3,0,0	duplicate(RuneControlSE)	RuneSE_2#arug_cas01	HIDDEN_NPC
// Cyr
arug_cas02,2,0,0	duplicate(RuneControlSE)	RuneSE_1#arug_cas02	HIDDEN_NPC
arug_cas02,3,0,0	duplicate(RuneControlSE)	RuneSE_2#arug_cas02	HIDDEN_NPC
// Horn
arug_cas03,2,0,0	duplicate(RuneControlSE)	RuneSE_1#arug_cas03	HIDDEN_NPC
arug_cas03,3,0,0	duplicate(RuneControlSE)	RuneSE_2#arug_cas03	HIDDEN_NPC
// Gefn
arug_cas04,2,0,0	duplicate(RuneControlSE)	RuneSE_1#arug_cas04	HIDDEN_NPC
arug_cas04,3,0,0	duplicate(RuneControlSE)	RuneSE_2#arug_cas04	HIDDEN_NPC
// Bandis
arug_cas05,2,0,0	duplicate(RuneControlSE)	RuneSE_1#arug_cas05	HIDDEN_NPC
arug_cas05,3,0,0	duplicate(RuneControlSE)	RuneSE_2#arug_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - [ Duplicações (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,2,0,0	duplicate(RuneControlSE)	RuneSE_1#schg_cas01	HIDDEN_NPC
schg_cas01,3,0,0	duplicate(RuneControlSE)	RuneSE_2#schg_cas01	HIDDEN_NPC
// Andlangr
schg_cas02,2,0,0	duplicate(RuneControlSE)	RuneSE_1#schg_cas02	HIDDEN_NPC
schg_cas02,3,0,0	duplicate(RuneControlSE)	RuneSE_2#schg_cas02	HIDDEN_NPC
// Viblainn
schg_cas03,2,0,0	duplicate(RuneControlSE)	RuneSE_1#schg_cas03	HIDDEN_NPC
schg_cas03,3,0,0	duplicate(RuneControlSE)	RuneSE_2#schg_cas03	HIDDEN_NPC
// Hljod
schg_cas04,2,0,0	duplicate(RuneControlSE)	RuneSE_1#schg_cas04	HIDDEN_NPC
schg_cas04,3,0,0	duplicate(RuneControlSE)	RuneSE_2#schg_cas04	HIDDEN_NPC
// Skidbladnir
schg_cas05,2,0,0	duplicate(RuneControlSE)	RuneSE_1#schg_cas05	HIDDEN_NPC
schg_cas05,3,0,0	duplicate(RuneControlSE)	RuneSE_2#schg_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - (05/05/2018) [Spell Master]
// * Modificado e adaptado para o código fonte do emulador Arcadia
