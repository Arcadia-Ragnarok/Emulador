/*-----------------------------------------------------------------*\
|               ____                     _                          |
|              /    |                   | |_                        |
|             /     |_ __ ____  __ _  __| |_  __ _                  |
|            /  /|  | '__/  __|/ _` |/ _  | |/ _` |                 |
|           /  __   | | |  |__  (_) | (_| | | (_) |                 |
|          /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                 |
|         /__/   |__|  [ Ragnarok Emulator ]                        |
|                                                                   |
+-------------------------------------------------------------------+
| Copyright (C) 21/02/2017 Spell Master                             |
+-------------------------------------------------------------------+
| - Informa��es                                                     |
| * Bases da Batalha Campal Flavius (Terapeuta e Recompensa)        |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Terapeutas]
//-------------------------------------------------------------------
bat_b01,1,4,0	script	FlaviusTherapist	CLEAR_NPC,{
	specialeffect(EF_HEAL, AREA, playerattached());
	mes("[Terapeuta]\n Por enquanto apenas descanse, suas dores ser�o curadas em breve.");
	close;

	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	initnpctimer;
	end;

	OnStop:
	stopnpctimer;
	end;

	OnTimer20000:
	specialeffect(EF_SANCTUARY);
	// Azul
	areapercentheal(strnpcinfo(NPC_MAP), 2, 282, 17, 297, 100, 100);
	areawarp(strnpcinfo(NPC_MAP), 2, 282, 17, 297, "bat_b01", 87, 75);
	// Vermelho
	areapercentheal(strnpcinfo(NPC_MAP),382, 2, 397, 17, 100, 100);
	areawarp(strnpcinfo(NPC_MAP), 382, 2, 397, 17, "bat_b01", 311, 224);
	initnpctimer;
	end;
}
bat_b01,10,294,3	duplicate(FlaviusTherapist)	Terapeuta#F_blueTean	4_F_SISTER
bat_b01,389,14,3	duplicate(FlaviusTherapist)	Terapeuta#F_redTean	4_F_SISTER

//-------------------------------------------------------------------
// - [Recompensas] -
//-------------------------------------------------------------------
// - @BF_Badge2: Emblema de Valor
// - @Vit�ria: 3 emblemas
// - @Derrota: 1 emblema
// - @Empate: 2 emblemas
//-------------------------------------------------------------------
// Azul
bat_b01,10,294,3	script	Axl Rose#F_blueTean	4_M_KY_HEAD,{
	mes("[Axl Rose]");
	if ($@FlaviusScoreBlue > $@FlaviusScoreRed) {
		mes("Com sua ajuda nosso ex�rcito de Guillaume sa�mos vit�riosos na batalha!\n Muito obrigado pelo seu esfor�o e est� aqui sua recompensa!");
		getitem(BF_Badge2, 3);
	} else if ($@FlaviusScoreBlue < $@FlaviusScoreRed) {
		mes("Infelismente o ex�rcito de Croix venceu.\n Mas essa guerra est� longe de terminar e essa s� foi mais uma batalha!");
		next;
		mes("[Axl Rose]\n Mesmo assim somos gratos pela sua ajuda e est� aqui sua recompensa.");
		getitem(BF_Badge2, 1);
	} else if ($@FlaviusScoreBlue == $@FlaviusScoreRed) {
		mes("Nossa essa batalha foi inten�a!\n Gra�as a sua ajuda terminamos empatados, por isso est� aqui sua recompensa.");
		getitem(BF_Badge2, 2);
	}
	warp("bat_room", 155, 150);
	bg_leave;
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}

// Vermelho
bat_b01,389,14,3	script	Swandery#F_redTean	4_M_CRU_HEAD,{
	mes("[Swandery]");
	if ($@FlaviusScoreRed > $@FlaviusScoreBlue) {
		mes("Com sua ajuda nosso ex�rcito de Guillaume sa�mos vit�riosos na batalha!\n Muito obrigado pelo seu esfor�o e est� aqui sua recompensa!");
		getitem(BF_Badge2, 3);
	} else if ($@FlaviusScoreRed < $@FlaviusScoreBlue) {
		mes("Infelismente o ex�rcito de Guillaume venceu.\n Mas essa guerra est� longe de terminar e essa s� foi mais uma batalha!");
		next;
		mes("[Swandery]\n Mesmo assim somos gratos pela sua ajuda e est� aqui sua recompensa.");
		getitem(BF_Badge2, 1);
	} else if ($@FlaviusScoreBlue == $@FlaviusScoreRed) {
		mes("Nossa essa batalha foi inten�a!\n Gra�as a sua ajuda terminamos empatados, por isso est� aqui sua recompensa.");
		getitem(BF_Badge2, 2);
	}
	warp("bat_room", 155, 150);
	bg_leave;
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}
