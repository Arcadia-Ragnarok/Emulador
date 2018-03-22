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
| - Copyright: Spell Master (21/02/2017)                            |
| - Info: Cristais da Batalha Campal Flavius                        |
\*-----------------------------------------------------------------*/

bat_b01,1,3,0	script	FlaviusCrystal	CLEAR_NPC,{

// Invoca��o dos dos cristais e suas prote��es
	OnBlueCSummon: // Equipe Azul
	bg_monster($@FlaviusTeanBlue,strnpcinfo(NPC_MAP),61,150,"Cristal Azul",OBJ_A2,strnpcinfo(PC_NAME)+"::OnBlueCDead");
	setcell(strnpcinfo(NPC_MAP),62,149,60,151,cell_basilica,1);
	setcell(strnpcinfo(NPC_MAP),62,149,60,151,cell_walkable,0);
	end;

	OnRedCSummon: // Equipe Vermelha
	bg_monster($@FlaviusTeanRed,strnpcinfo(NPC_MAP),328,150,"Cristal Vermelho",OBJ_B2,strnpcinfo(PC_NAME)+"::OnRedCDead");
	setcell(strnpcinfo(NPC_MAP),327,151,329,149,cell_basilica,1);
	setcell(strnpcinfo(NPC_MAP),327,151,329,149,cell_walkable,0);
	end;

//-------------------------------------------------------------------
// Caso os guardi�es sejam destru�dos
	OnBlueCDead: // Equipe Azul
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueGDead") < 1) {
		mapannounce(strnpcinfo(NPC_MAP),"Os Cristal de Guillaume foi destru�do.",bc_map,"0xbb0000");
		$@FlaviusScoreRed += 1;
		if ($@FlaviusScoreRed == 2) { donpcevent("Flavius_BG::OnMacthEnd"); }
		else { donpcevent("Flavius_BG::OnRound"); }
	}
	end;

	OnRedCDead: // Equipe Vermelha
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedCDead") < 1) {
		mapannounce(strnpcinfo(NPC_MAP),"O Cristal de Croix foi destru�do.",bc_map,"0x2c5ec0");
		$@FlaviusScoreBlue += 1;
		if ($@FlaviusScoreBlue == 2) { donpcevent("Flavius_BG::OnMacthEnd"); }
		else { donpcevent("Flavius_BG::OnRound"); }
	}
	end;

//-------------------------------------------------------------------
// Desabilitar os guardi�es
	OnRemove:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueGDead");
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedGDead");
	end;
}
