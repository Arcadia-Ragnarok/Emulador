/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Controle da primeira edição de Guerra do Império.         |
\*-----------------------------------------------------------------*/

-	script	Gld_Agit_Manager::Gld_Agit_Manager	FAKE_NPC,{
	end;

	// --------------------------------------------------------------
	// - [ A guerra do emperium começou ] -
	// --------------------------------------------------------------
	OnAgitStart:
	if (strnpcinfo(NPC_NAME) == "Gld_Agit_Manager") { end; }
	maprespawnguildid(strnpcinfo(NPC_NAME_HIDDEN),getcastledata(strnpcinfo(NPC_NAME_HIDDEN),1),6);
	gvgon(strnpcinfo(NPC_NAME_HIDDEN));

	// Invoca o emperium mesmo quando ele é quebrado.
	OnStartArena:
	if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas01")      { setarray(.@emproom[0],216,23); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas02") { setarray(.@emproom[0],213,23); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas03") { setarray(.@emproom[0],205,31); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas04") { setarray(.@emproom[0],36,217); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas05") { setarray(.@emproom[0],27,101); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas01")  { setarray(.@emproom[0],197,181); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas02")  { setarray(.@emproom[0],176,178); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas03")  { setarray(.@emproom[0],244,166); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas04")  { setarray(.@emproom[0],174,177); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas05")  { setarray(.@emproom[0],194,184); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas01")  { setarray(.@emproom[0],139,139); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas02")  { setarray(.@emproom[0],38,25); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas03")  { setarray(.@emproom[0],269,265); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas04")  { setarray(.@emproom[0],270,28); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas05")  { setarray(.@emproom[0],30,30); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas01")  { setarray(.@emproom[0],197,197); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas02")  { setarray(.@emproom[0],157,174); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas03")  { setarray(.@emproom[0],16,220); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas04")  { setarray(.@emproom[0],291,14); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas05")  { setarray(.@emproom[0],266,266); }

	if (!mobcount(strnpcinfo(NPC_NAME_HIDDEN),"Agit#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnAgitBreak")) {
		monster(strnpcinfo(NPC_NAME_HIDDEN),.@emproom[0],.@emproom[1],"Emperium",EMPELIUM,1,"Agit#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnAgitBreak");
	}
	end;

	// --------------------------------------------------------------
	// - [ O emperium foi quebrado ] -
	// --------------------------------------------------------------
	OnAgitBreak:
	.@GID = getcharid(CHAR_ID_GUILD);
	// Mostra um Log de erro caso algum personagem sem clã quebre o emperium, mesmo que isso é impossível de acontecer
	if (.@GID <= 0) {
		.@notice$ = "O personagem "+strcharinfo(PC_NAME)+" ("+getcharid(CHAR_ID_CHAR)+") acaba de quebrar o Emperium no Castelo: "+strnpcinfo(NPC_NAME_HIDDEN)+" sem estar em um Clã. O Emperium será restaurado";
		logmes(.@notice$);
		debugmes(.@notice$);
		donpcevent("Agit#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnStartArena");
		end;
	}

	// Ajusta a economia do castelo
	.@Economy = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),2) - 5;
	if (.@Economy < 0) { .@Economy = 0; }
	setcastledata(strnpcinfo(NPC_NAME_HIDDEN),2,.@Economy);

	// Ajusta o nível de defesa do castelo
	.@defence = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),3) - 5;
	if (.@defence < 0) { .@defence = 0; }
	setcastledata(strnpcinfo(NPC_NAME_HIDDEN),3,.@defence);

	// Define o novo ocupante para o castelo
	setcastledata(strnpcinfo(NPC_NAME_HIDDEN),1,.@GID);

	// Anuncia o novo ocupante para o castelo.
	mapannounce(strnpcinfo(NPC_NAME_HIDDEN),"O Emperium foi destruído",bc_map|bc_woe,"0x00CCFF",FW_NORMAL,12);
	maprespawnguildid(strnpcinfo(NPC_NAME_HIDDEN),.@GID,6);

	// Atualiza dados do castelo como investimentos, kafra etc...
	donpcevent(strnpcinfo(NPC_NAME)+"::OnRecvCastle");
	for (.@i = 4; .@i <= 9; ++.@i) {
		setcastledata(strnpcinfo(NPC_NAME_HIDDEN),.@i,0);
	}

	// Apaga dados de invocação dos guardões.
	if (getgdskilllv(.@GID,10002) == 0) {
		for (.@i = 10; .@i <= 17; ++.@i) {
			setcastledata(strnpcinfo(NPC_NAME_HIDDEN),.@i,0);
		}
	}

	// Re-Adiciona o Emperium.
	sleep(500); // Pausa o script por 5 segundos
	if (agitcheck()) {
		donpcevent("Agit#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnStartArena");
	}
	sleep(7000);
	announce("O castelo de ["+getcastlename(strnpcinfo(NPC_NAME_HIDDEN))+"] foi conquistado pelo Clã ["+getguildname(.@GID)+"].",bc_all|bc_woe);
	end;

	// --------------------------------------------------------------
	// - [ A guerra do emperium terminou ] -
	// --------------------------------------------------------------
	OnAgitEnd:
	if (strnpcinfo(NPC_NAME) == "Gld_Agit_Manager") end;
	gvgoff(strnpcinfo(NPC_NAME_HIDDEN));
	killmonster(strnpcinfo(NPC_NAME_HIDDEN),"Agit#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnAgitBreak");
	end;

	// --------------------------------------------------------------
	// - [ O castelo foi abandonado ] -
	// --------------------------------------------------------------
	OnGuildBreak:
	if (strnpcinfo(NPC_NAME) == "Gld_Agit_Manager") end;

	// Elimina os Guardiões e Kafra.
	killmonster(strnpcinfo(NPC_NAME_HIDDEN),"Guardião#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnGuardianDied");
	disablenpc("Funcionária Kafra#"+strnpcinfo(NPC_NAME_HIDDEN));
	setcastledata(strnpcinfo(NPC_NAME_HIDDEN),1,0);

	// Anuncia que o castelo está desocupado
	sleep 5000;
	announce("O castelo ["+getcastlename(strnpcinfo(NPC_NAME_HIDDEN))+"] foi abandonado.",0);
	donpcevent(strnpcinfo(NPC_NAME)+"::OnRecvCastle");
	end;

	// --------------------------------------------------------------
	// - [ O castelo foi recarregado ] -
	// --------------------------------------------------------------
	OnAgitInit:
	OnRecvCastle:
	if (strnpcinfo(NPC_NAME) == "Gld_Agit_Manager") { end; }
	if (!getcastledata(strnpcinfo(NPC_NAME_HIDDEN),1)) {
		// Quando não haver ocupante.
		killmonsterall(strnpcinfo(NPC_NAME_HIDDEN));
		donpcevent("Agit#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnStartArena");

		// Desativa a Kafra
		disablenpc("Funcionária Kafra#"+strnpcinfo(NPC_NAME_HIDDEN));
		end;
	} else {
		// Coloca os emblemas nas bandeiras.
		donpcevent("::OnGdeFlag");

		// Recarrega os Guardiões.
		donpcevent("Guardião#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnSpawnGuardians");

		// Desabilita a Kafra caso ela esteja oculta
		if (!getcastledata(strnpcinfo(NPC_NAME_HIDDEN),9)) {
			disablenpc("Funcionária Kafra#"+strnpcinfo(NPC_NAME_HIDDEN));
		}
	}
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações ] -
// ------------------------------------------------------------------
// - Luina
aldeg_cas01,216,24,0	duplicate(Gld_Agit_Manager)	Agit#aldeg_cas01	FAKE_NPC
aldeg_cas02,214,24,0	duplicate(Gld_Agit_Manager)	Agit#aldeg_cas02	FAKE_NPC
aldeg_cas03,206,32,0	duplicate(Gld_Agit_Manager)	Agit#aldeg_cas03	FAKE_NPC
aldeg_cas04,36,218,0	duplicate(Gld_Agit_Manager)	Agit#aldeg_cas04	FAKE_NPC
aldeg_cas05,28,102,0	duplicate(Gld_Agit_Manager)	Agit#aldeg_cas05	FAKE_NPC

// - Britoniah
gefg_cas01,198,182,0	duplicate(Gld_Agit_Manager)	Agit#gefg_cas01	FAKE_NPC
gefg_cas02,176,178,0	duplicate(Gld_Agit_Manager)	Agit#gefg_cas02	FAKE_NPC
gefg_cas03,245,167,0	duplicate(Gld_Agit_Manager)	Agit#gefg_cas03	FAKE_NPC
gefg_cas04,174,178,0	duplicate(Gld_Agit_Manager)	Agit#gefg_cas04	FAKE_NPC
gefg_cas05,194,184,0	duplicate(Gld_Agit_Manager)	Agit#gefg_cas05	FAKE_NPC

// - Bosque Celestial
payg_cas01,139,139,0	duplicate(Gld_Agit_Manager)	Agit#payg_cas01	FAKE_NPC
payg_cas02,39,25,0	duplicate(Gld_Agit_Manager)	Agit#payg_cas02	FAKE_NPC
payg_cas03,269,265,0	duplicate(Gld_Agit_Manager)	Agit#payg_cas03	FAKE_NPC
payg_cas04,271,29,0	duplicate(Gld_Agit_Manager)	Agit#payg_cas04	FAKE_NPC
payg_cas05,30,30,0	duplicate(Gld_Agit_Manager)	Agit#payg_cas05	FAKE_NPC

// - Valkirias
prtg_cas01,197,197,0	duplicate(Gld_Agit_Manager)	Agit#prtg_cas01	FAKE_NPC
prtg_cas02,158,174,0	duplicate(Gld_Agit_Manager)	Agit#prtg_cas02	FAKE_NPC
prtg_cas03,17,221,0	duplicate(Gld_Agit_Manager)	Agit#prtg_cas03	FAKE_NPC
prtg_cas04,292,14,0	duplicate(Gld_Agit_Manager)	Agit#prtg_cas04	FAKE_NPC
prtg_cas05,266,266,0	duplicate(Gld_Agit_Manager)	Agit#prtg_cas05	FAKE_NPC
