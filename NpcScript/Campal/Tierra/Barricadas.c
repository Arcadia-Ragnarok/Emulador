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
| - Criação: Spell Master 22/02/2017                                |
|  Barricadas/ Sistemas de reparos/ Portais de acesso da            |
|         batalha campal Tierra.                                    |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Barricada] -
//-------------------------------------------------------------------
bat_a01,6,1,0	script	TierraWall	CLEAR_NPC,{
	// Azul
	OnEnableNorth:
	for (.@i = 185; .@i < 202; ++.@i) {
		bg_monster($@TierraTeanBlue,strnpcinfo(NPC_MAP),.@i,266,"Barricada",BARRICADE_,strnpcinfo(NPC_NAME)+"::OnNorthBreak");
	}
	setwall(strnpcinfo(NPC_MAP),186,266,16,6,1,"northWall");
	end;

	OnNorthBreak:
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnNorthBreak") < 17) {
		killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnNorthBreak");
		delwall("northWall");
		$@TierraNorthWall = 1;
		enablenpc("Ferreiro Guillaume#tierraRepair1");
		mapannounce("bat_a01","A barricada do norte foi destruída!",bc_map,"0xffce00");
	}
	end;

	// Vermelho
	OnEnableSoulth:
	for (.@i = 169; .@i < 186; ++.@i) {
		bg_monster($@TierraTeanRed,strnpcinfo(NPC_MAP),.@i,129,"Barricada",BARRICADE_,strnpcinfo(NPC_NAME)+"::OnSouthBreak");
	}
	setwall(strnpcinfo(NPC_MAP),170,129,16,6,1,"soulthWall");
	end;

	OnSouthBreak:
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnSouthBreak") < 17) {
		killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnSouthBreak");
		delwall("soulthWall");
		$@TierraSouthWall = 1;
		enablenpc("Ferreiro Croix#tierraRepair2");
		mapannounce(strnpcinfo(NPC_MAP),"A barricada do norte foi destruída!",bc_map,"0xffce00");
	}
	end;

//-------------------------------------------------------------------
// Desabilitar Barricadas
	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnNorthBreak");
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnSouthBreak");
	delwall("northWall");
	delwall("soulthWall");
	$@TierraNorthWall = 0;
	$@TierraSouthWall = 0;
	end;

	OnInit:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnNorthBreak");
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnSouthBreak");
	delwall("northWall");
	delwall("soulthWall");
	$@TierraNorthWall = 0;
	$@TierraSouthWall = 0;
	end;
}

//-------------------------------------------------------------------
// - [Repararo das barricadas] -
//-------------------------------------------------------------------
-	script	TierraWallRepair	FAKE_NPC,{
	if (getcharid(CHARID_BG) == $@TierraTeanBlue && strnpcinfo(NPC_NAME_VISIBLE) == "Ferreiro Guillaume" && $@TierraNorthWall < 1) { end; }
	if (getcharid(CHARID_BG) == $@TierraTeanRed && strnpcinfo(NPC_NAME_VISIBLE) == "Ferreiro Croix" && $@TierraSouthWall < 1) { end; }
	mes("[Reparador]\n"
		"Mes a barricada foi destruída, posso recontruíla.\n"
		"Para isso vou precisar de 50 Pedras, 5 Aço, 2 Minérios de Elunium e 1 Ferro.");
	next;
	switch (select("Realizar Reparo","Cancelar")) {
		case 1:
		if ((countitem(Stone) >= 50) && (countitem(Steel) >= 5) && (countitem(Elunium_Stone) >= 2) && (countitem(Iron) >= 1)) {
			mes("[Reparador]\n"
				"Muito bem iniciarei agora o processo de reparo.\n"
				"Aguarde um momento.");
			next;
			mes("[Reparador]\n"
				"......\n"
				".......\n"
				"........");
			next;
			mes("[Reparador]\n"
				".......\n"
				"........\n"
				".........");
			next;
			mes("[Reparador]\n"
				"........\n"
				".........\n"
				"..........");
			progressbar("ffff00",2); sleep(2000); specialeffect(EF_REPAIRWEAPON);
			delitem(Stone,50); delitem(Steel,5); delitem(Elunium_Stone,2); delitem(Iron,1);
			next;
			mes("[Reparador]\n"
				"O preparo foi realizado com sucesso!\n"
				"Agora vou me descançar.");
			// Azul
			if (getcharid(CHARID_BG) == $@TierraTeanBlue) {
				if ($@TierraNorthWall < 1) {
					donpcevent("TierraWall::OnEnableNorth");
					close2;
					disablenpc("Ferreiro Guillaume#tierraRepair1");
				}
				end;
			}
			// Vermelho
			if (getcharid(CHARID_BG) == $@TierraTeanRed) {
				if ($@TierraSouthWall < 1) {
					donpcevent("TierraWall::OnEnableSoulth");
					close2;
					disablenpc("Ferreiro Croix#tierraRepair2");
				}
				end;
			}
		} else {
			mes("[Reparador]\n"
				"Você não possui os itens necessários:\n"
				"50 ^777777Pedras^000000\n"
				"5 ^777777Aço^000000\n"
				"2 ^777777Minérios de Elunium^000000\n"
				"1 ^777777Ferro^000000");
			close;
		}
		case 2:
		mes("[Reparador]\n"
			"Tudo bem.\n"
			"Volte se desejar fazer os reparos na barricada.");
		close;
	}
	OnInit:
	disablenpc("Ferreiro Guillaume#tierraRepair1");
	disablenpc("Ferreiro Croix#tierraRepair2");
	end;
}
// Azul
bat_a01,185,270,1	duplicate(TierraWallRepair)	Ferreiro Guillaume#tierraRepair1	4_M_REPAIR
// Vermelho
bat_a01,170,121,5	duplicate(TierraWallRepair)	Ferreiro Croix#tierraRepair2	4_M_REPAIR

//-------------------------------------------------------------------
// - [Portais de passe pelas barricadas] -
//-------------------------------------------------------------------
// Azul
bat_a01,194,267,0	script	#TierraBlueWarp	HIDDEN_NPC,7,0,{
	OnTouch:
	if (getcharid(CHARID_BG) == $@TierraTeanBlue) { warp(strnpcinfo(NPC_MAP),194,261); }
	end;
}

bat_a01,194,265,0	script	#TierraBlueWarp2	HIDDEN_NPC,7,0,{
	OnTouch:
	if (getcharid(CHARID_BG) == $@TierraTeanBlue) { warp(strnpcinfo(NPC_MAP),194,270); }
	end;
}

// Vermelho
bat_a01,177,130,0	script	#TierraRedWarp	HIDDEN_NPC,7,0,{
	OnTouch:
	if (getcharid(CHARID_BG) == $@TierraTeanRed) { warp(strnpcinfo(NPC_MAP),178,125); }
	end;
}

bat_a01,177,128,0	script	#TierraRedWarp2	HIDDEN_NPC,7,0,{
	OnTouch:
	if (getcharid(CHARID_BG) == $@TierraTeanRed) { warp(strnpcinfo(NPC_MAP),178,134); }
	end;
}
