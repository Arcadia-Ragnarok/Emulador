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
| - Info: Controle sobre a WOE 2.0                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	GdeControlSE	FAKE_NPC,{

	// --------------------------------------------------------------
	// Início
	OnAgitInit2:
	OnAgitStart2:
	if (strnpcinfo(NPC_NAME) != "GdeControlSE") {
		.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
		if (agitcheck2()) {
			maprespawnguildid(.@map$, getcastledata(.@map$, 1), 2);
			gvgon(.@map$);
			if (getcastledata(.@map$, 1)) {
				for (.@i = 1; .@i < 3; ++.@i) {
					donpcevent("RuneSE_" + .@i + "#" + .@map$ + "::OnEnable");
				}
				for (.@i = 0; .@i < 4; ++.@i) {
					donpcevent("BarrierSE_" + .@i + "#" + .@map$ + "::OnEnable");
				}
			}
			if (!getcastledata(.@map$, 9)) {
				disablenpc("Funcionária Kafra#" + .@map$);
			}
			donpcevent(strnpcinfo(NPC_NAME) + "::OnEmpSpawn");
		}
	}
	end;

	// --------------------------------------------------------------
	// Término
	OnAgitEnd2:
	if (strnpcinfo(NPC_NAME) != "GdeControlSE") {
		.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
		gvgoff(.@map$);
		killmonster(.@map$, strnpcinfo(NPC_NAME) + "::OnAgitBreak");
		for (.@i = 1; .@i < 3; ++.@i) {
			donpcevent("RuneSE_" + .@i + "#" + .@map$ + "::OnDisable");
			donpcevent(.@i + "º Runa Guardiã#" + .@map$ + "::OnDisable");
		}
		for (.@i = 1; .@i < 4; ++.@i) {
			donpcevent("BarrierSE_" + .@i + "#" + .@map$ + "::OnDisable");
			donpcevent(.@i + "º Portão#" + .@map$ + "::OnDisable");
			killmonsterall(.@map$, "BarrierSE_" + .@i + "#" + .@map$ + "::OnDestroyed");
		}
	}
	end;

	// --------------------------------------------------------------
	// Se o clã for desfeito
	OnGuildBreak:
	if (strnpcinfo(NPC_NAME) != "GdeControlSE") {
		.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
		setcastledata(.@map$, 1, 0);
		announce("O castelo [" + getcastlename(.@map$) + "] foi abandonado.", 0);
		donpcevent("::OnGdeFlagSE");
	}
	end;

	// --------------------------------------------------------------
	// Adiciona o emperium
	OnEmpSpawn:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	if (!mobcount(.@map$, strnpcinfo(NPC_NAME) + "::OnAgitBreak")) {
		if (compare(.@map$, "arug")) {
			if (.@map$ == "arug_cas01")      { setarray(.@i[0],  87, 219); }
			else if (.@map$ == "arug_cas02") { setarray(.@i[0],  89, 256); }
			else                             { setarray(.@i[0], 141, 293); }
		} else {
			if (.@map$ == "schg_cas02")      { setarray(.@i[0], 162, 193); }
			else if (.@map$ == "schg_cas03") { setarray(.@i[0], 338, 202); }
			else                             { setarray(.@i[0], 120, 272); }
		}
		monster(.@map$, .@i[0], .@i[1], "Emperium", EMPELIUM, 1, strnpcinfo(NPC_NAME) + "::OnAgitBreak");
	
	}
	end;

	// --------------------------------------------------------------
	// O emperium foi destruído
	OnAgitBreak:
	.@guild = getcharid(CHARID_GUILD);
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@region$ = (compare(.@map$, "arug")) ? "Arunafeltz" : "Schwaltzvalt";
	setcastledata(.@map$, 1, .@guild); // Adiciona novo ocupante ao castelo
	maprespawnguildid(.@map$, getcastledata(.@map$, 1), 2);
	// Reajustar a economia
	if (getcastledata(.@map$, 2) <= 5) {
		setcastledata(.@map$, 2, 0);
	} else {
		setcastledata(.@map$, 2, - 5);
	}
	// Reajustar a defesa
	if (getcastledata(.@map$, 2) <= 5) {
		setcastledata(.@map$, 3, 0);
	} else {
		setcastledata(.@map$, 3, - 5);
	}
	donpcevent(strnpcinfo(NPC_NAME) + "::OnReset");
	mapannounce(.@map$, "O Emperium foi destruído", bc_map|bc_woe, "0x00CCFF", FW_NORMAL, 12);
	sleep(5000);
	announce("O Clã [" + getguildname(.@guild) + "] conquistou o a fortaleza " + getcastlename(.@map$) + " em [" + .@region$ + "]!", bc_all|bc_woe);
	end;

	// --------------------------------------------------------------
	// Reiniciar os scripts quando o emperium é destruído
	OnReset:
	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	setcastledata(.@map$, 4, 0);
	setcastledata(.@map$, 5, 0);
	if (getcastledata(.@map$, 9)) {
		disablenpc("Funcionária Kafra#" + .@map$);
		setcastledata(.@map$, 9, 0);
	}
	for (.@i = 1; .@i < 3; ++.@i) {
		donpcevent("RuneSE_" + .@i + "#" + .@map$ + "::OnDisable");
		donpcevent(.@i + "º Runa Guardiã#" + .@map$ + "::OnDisable");
	}
	for (.@i = 1; .@i < 4; ++.@i) {
		donpcevent("BarrierSE_" + .@i + "#" + .@map$ + "::OnDisable");
		donpcevent(.@i + "º Portão#" + .@map$ + "::OnDisable");
		killmonsterall(.@map$, "BarrierSE_" + .@i + "#" + .@map$ + "::OnDestroyed");
	}
	donpcevent("::OnGdeFlagSE");
	donpcevent("3º Portão#" + .@map$ + "::OnEnable");
	donpcevent("1º Runa Guardiã#" + .@map$ + "::OnEnable");
	donpcevent("2º Runa Guardiã#" + .@map$ + "::OnEnable");
	donpcevent(strnpcinfo(NPC_NAME) + "::OnEmpSpawn");
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,1,0,0	duplicate(GdeControlSE)	AgitSE#arug_cas01	HIDDEN_NPC
// Cyr
arug_cas02,1,0,0	duplicate(GdeControlSE)	AgitSE#arug_cas02	HIDDEN_NPC
// Horn
arug_cas03,1,0,0	duplicate(GdeControlSE)	AgitSE#arug_cas03	HIDDEN_NPC
// Gefn
arug_cas04,1,0,0	duplicate(GdeControlSE)	AgitSE#arug_cas04	HIDDEN_NPC
// Banadis
arug_cas05,1,0,0	duplicate(GdeControlSE)	AgitSE#arug_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - [ Duplicações (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,1,0,0	duplicate(GdeControlSE)	AgitSE#schg_cas01	HIDDEN_NPC
// Andlangr
schg_cas02,1,0,0	duplicate(GdeControlSE)	AgitSE#schg_cas02	HIDDEN_NPC
// Viblainn
schg_cas03,1,0,0	duplicate(GdeControlSE)	AgitSE#schg_cas03	HIDDEN_NPC
// Hljod
schg_cas04,1,0,0	duplicate(GdeControlSE)	AgitSE#schg_cas04	HIDDEN_NPC
// Skidbladnir
schg_cas05,1,0,0	duplicate(GdeControlSE)	AgitSE#schg_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - (05/05/2018) [Spell Master]
// * Modificado e adaptado para o código fonte do emulador Arcadia
