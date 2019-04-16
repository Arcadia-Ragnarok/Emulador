/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Cria��o: Spell Master 21/02/2017                                |
|  Dep�sitos de supimentos na batalha campal Tierra                 |
\*-----------------------------------------------------------------*/

bat_a01,3,1,0	script	TierraDepot	CLEAR_NPC,{
//-------------------------------------------------------------------
// Invoca��o dos Dep�sitos
	OnBlueSummon:
	bg_monster($@FlaviusTeanBlue,strnpcinfo(NPC_MAP),176,345,"Base de Suprimentos",OBJ_A,strnpcinfo(NPC_NAME)+"::OnBlueDead");
	end;

	OnRedSummon:
	bg_monster($@FlaviusTeanRed,strnpcinfo(NPC_MAP),167,50,"Base de Suprimentos",OBJ_B,strnpcinfo(NPC_NAME)+"::OnRedDead");
	end;

//-------------------------------------------------------------------
// Caso os Dep�sitos sejam destru�dos
	OnBlueDead: // Equipe Azul
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueDead") < 1) {
		mapannounce(strnpcinfo(NPC_MAP),"General Guillaume: Conseguimos destruir os suprimentos de Croix! A vit�ria � nossa!",bc_map,"0x2c5ec0");
		$@TierraRedVictory = 1;
		donpcevent("TierraBG::OnMacthEnd");
	}
	end;

	OnRedDead: // Equipe Vermelha
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedDead") < 1) {
		mapannounce(strnpcinfo(NPC_MAP),"Pr�ncipe Croix: Muito bem bravos guerreiros, destru�mos os suprimentos de Guillaume! Vencemos a batalha!",bc_map,"0xbb0000");
		$@TierraBlueVictory = 1;
		donpcevent("TierraBG::OnMacthEnd");
	}
	end;

//-------------------------------------------------------------------
// Desabilitar os Dep�sitos
	OnRemove:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueDead");
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedDead");
	end;
}
