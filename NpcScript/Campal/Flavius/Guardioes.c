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
| - Info: Guardi�es da batalha campal Flavius                       |
\*-----------------------------------------------------------------*/

bat_b01,1,2,0	script	FlaviusGuardians	CLEAR_NPC,{

//-------------------------------------------------------------------
// Invoca��o dos guardi�es
	OnBlueGSummon: // Equipe Azul
	bg_monster($@FlaviusTeanBlue, strnpcinfo(NPC_MAP), 108, 159, "Guardi�o de Guillaume", B_S_GUARDIAN, strnpcinfo(PC_NAME) + "::OnBlueGDead");
	bg_monster($@FlaviusTeanBlue, strnpcinfo(NPC_MAP), 108, 141, "Guardi�o de Guillaume", B_B_GUARDIAN, strnpcinfo(PC_NAME) + "::OnBlueGDead");
	end;

	OnRedGSummon: // Equipe Vermelha
	bg_monster($@FlaviusTeanRed, strnpcinfo(NPC_MAP), 307, 160, "Guardi�o de Croix", B_S_GUARDIAN, strnpcinfo(PC_NAME) + "::OnRedGDead");
	bg_monster($@FlaviusTeanRed, strnpcinfo(NPC_MAP), 307, 138, "Guardi�o de Croix", B_B_GUARDIAN, strnpcinfo(PC_NAME) + "::OnRedGDead");
	end;

//-------------------------------------------------------------------
// Caso os guardi�es sejam destru�dos
	OnBlueGDead: // Equipe Azul
	if (mobcount(strnpcinfo(NPC_MAP), strnpcinfo(NPC_NAME) + "::OnBlueGDead") < 1) {
		mapannounce(strnpcinfo(NPC_MAP), "Os Guardi�es que protegiam o Cristal de Guillaume foram destru�dos, o cristal est� vuner�vel.", bc_map, "0xbb0000");
		setcell(strnpcinfo(NPC_MAP), 62, 149, 60, 151, cell_basilica, 0);
		setcell(strnpcinfo(NPC_MAP), 62, 149, 60, 151, cell_walkable, 1);
	}
	end;

	OnRedGDead: // Equipe Vermelha
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedGDead") < 1) {
		mapannounce (strnpcinfo(NPC_MAP), "Os Guardi�es que protegiam o Cristal de Croix foram destru�dos, o cristal est� vuner�vel.", bc_map, "0x2c5ec0");
		setcell(strnpcinfo(NPC_MAP), 327, 151, 329, 149, cell_basilica, 0);
		setcell(strnpcinfo(NPC_MAP), 327, 151, 329, 149, cell_walkable, 1);
	}
	end;

//-------------------------------------------------------------------
// Desabilitar os guardi�es
	OnRemove:
	killmonster(strnpcinfo(NPC_MAP), strnpcinfo(NPC_NAME) + "::OnBlueGDead");
	killmonster(strnpcinfo(NPC_MAP), strnpcinfo(NPC_NAME) + "::OnRedGDead");
	end;
}
