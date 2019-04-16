/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master (07/03/2017)                            |
| - Info: Bases das equipes na Batalha campal Kreiger Von Midgard   |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Efeitos das paredes na batalha] -
//-------------------------------------------------------------------
bat_c01,54,124,0	script	KvmEffect	HIDDEN_WARP_NPC,{
	end;

	OnInit:
	setwall(strnpcinfo(NPC_MAP),54,122,6,7,0,"kvmWall1-1");
	setwall(strnpcinfo(NPC_MAP),55,122,5,7,0,"kvmWall1-2");
	setwall(strnpcinfo(NPC_MAP),140,56,6,7,0,"kvmWall2-1");
	setwall(strnpcinfo(NPC_MAP),140,57,5,7,0,"kvmWall2-2");
	end;

	OnKvMKvmEffect1:
	specialeffect(EF_CHANGECOLD);
	end;

	OnKvMKvmEffect2:
	specialeffect(EF_CHANGEPOISON);
	end;

	OnKvMKvmEffect3:
	specialeffect(EF_BEGINSPELL2);
	end;
}

bat_c01,55,124,3	duplicate(KvmEffect)	#KvmEffect-b2	HIDDEN_WARP_NPC
bat_c01,56,124,3	duplicate(KvmEffect)	#KvmEffect-b3	HIDDEN_WARP_NPC
bat_c01,57,124,3	duplicate(KvmEffect)	#KvmEffect-b4	HIDDEN_WARP_NPC
bat_c01,57,125,3	duplicate(KvmEffect)	#KvmEffect-b5	HIDDEN_WARP_NPC
bat_c01,57,126,3	duplicate(KvmEffect)	#KvmEffect-b6	HIDDEN_WARP_NPC
bat_c01,57,127,3	duplicate(KvmEffect)	#KvmEffect-b7	HIDDEN_WARP_NPC

bat_c01,145,59,3	duplicate(KvmEffect)	#KvmEffect-r1	HIDDEN_WARP_NPC
bat_c01,144,59,3	duplicate(KvmEffect)	#KvmEffect-r2	HIDDEN_WARP_NPC
bat_c01,143,59,3	duplicate(KvmEffect)	#KvmEffect-r3	HIDDEN_WARP_NPC
bat_c01,142,59,3	duplicate(KvmEffect)	#KvmEffect-r4	HIDDEN_WARP_NPC
bat_c01,142,56,3	duplicate(KvmEffect)	#KvmEffect-r5	HIDDEN_WARP_NPC
bat_c01,142,57,3	duplicate(KvmEffect)	#KvmEffect-r6	HIDDEN_WARP_NPC
bat_c01,142,58,3	duplicate(KvmEffect)	#KvmEffect-r7	HIDDEN_WARP_NPC

//-------------------------------------------------------------------
// - [Recompensas] -
//-------------------------------------------------------------------
// - @War_Badge: Emblema de Guerra
// - @Vit�ria: 2 emblemas
// - @Derrota: 1 emblema
// - @Empate: 1 emblemas
//-------------------------------------------------------------------
// Azul
bat_c01,51,130,5	script	Axl Rose#K_blueTean	4_M_KY_HEAD,{
	mes("[Axl Rose]");
	if ($@KvmScoreBlue > $@KvmScoreRed) {
		mes("Com sua ajuda nosso ex�rcito de Guillaume sa�mos vit�riosos na batalha!\n"
			"Muito obrigado pelo seu esfor�o e est� aqui sua recompensa!");
		getitem(War_Badge,2);
	} else if ($@KvmScoreBlue < $@KvmScoreRed) {
		mes("Infelismente o ex�rcito de Croix venceu.\n"
			"Mas essa guerra est� longe de terminar e essa s� foi mais uma batalha!");
		next;
		mes("[Axl Rose]\n"
			"Mesmo assim somos gratos pela sua ajuda e est� aqui sua recompensa.");
		getitem(War_Badge,1);
	} else {
		mes("Nossa essa batalha foi inten�a!\n"
			"Gra�as a sua ajuda terminamos empatados, por isso est� aqui sua recompensa.");
		getitem(War_Badge,1);
	}
	next;
	warp("bat_room",155,150);
	bg_leave;
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}

//-------------------------------------------------------------------
// Vermelho
bat_c01,148,53,1	script	Swandery#K_redTean	4_M_CRU_HEAD,{
	mes("[Swandery]");
	if ($@KvmScoreRed > $@KvmScoreBlue) {
		mes("Com sua ajuda nosso ex�rcito de Guillaume sa�mos vit�riosos na batalha!\n"
			"Muito obrigado pelo seu esfor�o e est� aqui sua recompensa!");
		getitem(War_Badge,2);
	} else if ($@KvmScoreRed < $@KvmScoreBlue) {
		mes("Infelismente o ex�rcito de Guillaume venceu.\n"
			"Mas essa guerra est� longe de terminar e essa s� foi mais uma batalha!");
		next;
		mes("[Swandery]\n"
			"Mesmo assim somos gratos pela sua ajuda e est� aqui sua recompensa.");
		getitem(War_Badge,1);
	} else {
		mes("Nossa essa batalha foi inten�a!\n"
			"Gra�as a sua ajuda terminamos empatados, por isso est� aqui sua recompensa.");
		getitem(War_Badge,1);
	}
	next;
	warp("bat_room",155,150);
	bg_leave;
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}
