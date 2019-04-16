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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Inst�ncia do Santu�rio Selado.                            |
\*-----------------------------------------------------------------*/

monk_test,309,146,3	script	Frei Patrick#edq	4_M_OLDFRIAR,{
	cutin("ins_cata_pri_n",2);
	mes("[Frei Patrick]\n"
		"A paz do mundo jamais pode durar para sempre...\n"
		"As m�os do Mal est�o chegando ao mundo novamente...");
	next;
	mes("[Frei Patrick]\n"
		"O que te leva a este lugar?");
	next;
	if (countitem(Bapho_Doll) > 0) {
		.@doll = 1;
		.@selection = select("Que lugar � este?", "Eu quero entrar", "Bafom� Amaldi�oado?", "Cancelar");
	} else {
		.@selection = select("Que lugar � este?", "Eu quero entrar", "Cancelar");
	}
	switch (.@selection) {
		case 1:
		mes("[Frei Patrick]\n"
			"Huh... Voc� n�o sabe?\n"
			"Este � o Monast�rio de St. Capitolina onde os irm�os treinam e oram para virarem monjes.");
		next;
		mes("[Frei Patrick]\n"
			"E esse lugar �...\n"
			"Como eu posso falar...\n"
			"Sim. � o t�mulo de um Dem�nio.");
		next;
		mes("[Frei Patrick]\n"
			"� o lugar onde o grande Dem�nio que demoliu esse mundo uma vez se encontra dormindo.");
		next;
		switch (select("Me conte mais", "Terminar conversa")) {
			case 1:
			cutin("ins_cata_pri_n", 2);
			mes("[Frei Patrick]\n"
				"Bafom�... � o nome do Dem�nio...\n"
				"Eu acho que voc� j� tenha escutado o nome dele.");
			next;
			mes("[Frei Patrick]\n"
				"V�rios homens bravos e irm�os treinaram nesse monast�rio...");
			next;
			mes("[Frei Patrick]\n"
				"Abaixo desse t�mulo na sua frente...\n"
				"Bafom� se encontra selado.");
			next;
			mes("[Frei Patrick]\n"
				"Por�m... Como foi dito.\n"
				"O Imperador Morroc est� manipulando suas magias poderosas para afetar toda vida.");
			next;
			mes("[Frei Patrick]\n"
				"Bafom� tamb�m...\n"
				"Tem despertado e est� se preparando para sua ressurrei��o.\n"
				"Dentro desse mundo, com o enfraquecimento do selo devido ao poder do Imperador Morroc...");
			next;
			mes("[Frei Patrick]\n"
				"Agora...\n"
				"Estou procurando por pessoas bravas o suficiente para selar Bafom� em seu santu�rio...\n"
				"Como n�s fizemos muitos anos atr�s...");
			next;
			mes("[Frei Patrick]\n"
				"Todos que lutam pelo bem, devem saber.\n"
				"Que o mal amea�a a conquistar esse mundo...");
			next;
			mes("[Frei Patrick]\n"
				"Treine mais e use suas habilidades para proteger o mundo da eminente presen�a do mal...");
			break;
			case 2:
			cutin("ins_cata_pri_n", 2);
			mes("[Frei Patrick]\n"
				"Todos que lutam pelo bem, devem saber, que o mal amea�a conquistar esse mundo...");
			next;
			mes("[Frei Patrick]\n"
				"Treine mais e use suas habilidades para proteger o mundo da eminente presen�a do mal...");
			break;
		}
		break;
		case 2:
		if (BaseLevel >= 75) {
			.@party_id = getcharid(CHARID_PARTY);
			mes("[Frei Patrick]\n"
				"Est� certo que voc� ir� ao santu�rio e selar Bafom� novamente?");
			next;
			.@ins_bapho_check = questprogress(3040, PLAYTIME);
			if (!.@ins_bapho_check) {
				if (getpartyleader(.@party_id, 2) == getcharid(CHARID) && instance_check_party(.@party_id, 4, 75)) {
					mes("[Frei Patrick]\n"
						"O nome do grupo � " + getpartyname(.@party_id) + "...\n"
						"O nome do l�der � " + strcharinfo(CHAR_NAME) + "...");
					.@instance = instance_create("Santu�rio Selado", .@party_id);
					if (.@instance) {
						mes("Hum... Mais parece que temos um problema aqui...\n"
							"Irei checar rapidamente.\n"
							"Por-favor aguarde.");
					} else {
						for (.@i = 1; .@i <= 2; .@i++) {
							if (instance_attachmap(.@i + "@cata", .@instance) == "") {
								instance_destroy(.@instance);
								close;
							}
						}
						instance_set_timeout(7200, 300, .@instance);
						instance_init(.@instance);
						mes("Ok... Irei ajustar o selo do santu�rio para voc� e seu grupo possam entrar..");
						next;
						mes("[Frei Patrick]\n"
							"Voc� ver� um sinal quando o selo for destru�do.\n"
							"Aguarde at� o sinal aparecer...");
						next;
						mes("[Frei Patrick]\n"
							"Quando voc� ver o sinal, coloque suas m�os sobre o t�mulo...\n"
							"E ent�o voc� pode empurr�-lo.");
						next;
						mes("[Frei Patrick]\n"
							"Uma coisa que voc� deve lembrar �...\n"
							"Todos aqueles que entrarem no santu�rio ser�o amaldi�oados por Bafom� e n�o\n"
							"poderam entrar ou sair enquando estiverem amaldio�oados.");
						next;
						mes("[Frei Patrick]\n"
							"E mais uma coisa...\n"
							"Nessa �rea amaldi�oada, certas habilidades.\n"
							"Que s�o protegidas por uma for�a exterior.\n"
							"S�o proibidas pelo efeito do selo.");
						next;
						mes("[Frei Patrick]\n"
							"Por exemplo, habilidades como ^0000FFEscudo M�gico e Assumptio^000000...\n"
							"Ent�o � melhor voc� estar preparado entes de entrar no santu�rio.");
					}
				} else {
					mes("[Frei Patrick]\n"
						"Humm...\n"
						"Eu reconhe�o usa coragem, por�m...\n"
						"N�o posso permitir qualquer um entrar nesse lugar.\n"
						"Eu s� permito o l�der do grupo a entrar primeiro.");
					next;
					mes("[Frei Patrick]\n"
						"S� ent�o o resto do grupo pode entrar.\n"
						"Isto � uma regra deste monast�rio, por favor a entenda.");
				}
			} else if (.@ins_bapho_check == 1) {
				mes("[Frei Patrick]\n"
					"Parece que voc� entrou no santu�rio recentemente...\n"
					"Voc� n�o pode entrar novamente pois a Maldi��o de Bafom� ainda continua.\n"
					"A maldi��o de Bafom� s� desaparece quando um certo per�odo de tempo se passa.");
			} else if (.@ins_bapho_check == 2) {
				mes("[Frei Patrick]\n"
					"Umm... Parece que a Maldi��o de Bafom� se enfraqueceu.\n"
					"Eu posso retira-la agora.");
				next;
				mes("[Frei Patrick]\n"
					"Haaaaaaap...\n"
					"Hocus Pocus Wingardium Abracadabra!!!!!");
				next;
				if (questprogress(3040)) {erasequest(3040);}
				if (questprogress(3041)) {erasequest(3041);}
				mes("[Frei Patrick]\n"
					"Huu... Acabou.\n"
					"Agora que retirei a Maldi��o de Bafom�, voc� pode entrar novamente.");
			}
		} else {
			mes("[Frei Patrick]\n"
				"Hum... Voc� precisa treinar mais para entrar nesse lugar perigoso...\n"
				"Voc� tem que estar no m�nimo no n�vel 75 para poder entrar aqui.");
			next;
			mes("[Frei Patrick]\n"
				"Treine mais e volte novamente.");
		}
		break;
		case 3:
		if (.@doll == 1) {
			mes("[Frei Patrick]\n"
				"O que �... esse boneco que est� segurando?...\n"
				"Deixe me ver.");
			next;
			mes("[Frei Patrick]\n"
				"... ... ...");
			next;
			mes("[Frei Patrick]\n"
				"Correto...\n"
				"Posso sentir os sentimentos de Bafom�...\n"
				"O que eu farei com esse boneco?");
			next;
			mes("[Frei Patrick]\n"
				"� muito perigoso que algu�m perca esse objeto...\n"
				"Conhe�o alguem que pode te ajudar...\n"
				"Deseja falar com ele?");
			next;
			mes("[Frei Patrick]\n"
				"Fale com ^0000FFRust Blackhand^000000 que est� proximo a uma contru��o do monast�rio...\n"
				"Ele pode fazer com que este boneco seja �til para voc�.");
			setquest(3042);
			break;
		}
		case 4:
		mes("[Frei Patrick]\n"
			"Todos que lutam pelo bem, devem saber, que o mal amea�a a conquistar esse mundo...");
		next;
		mes("[Frei Patrick]\n"
			"Treine mais e use suas habilidades para proteger o mundo da eminente presen�a do mal...");
		break;
	}
	close2;
	cutin("", 255);
	end;
}

// ------------------------------------------------------------------
monk_test,306,151,3	script	T�mulo de Bafom�#edq	HIDDEN_NPC,{
	if (countitem(Token_Of_Apostle)) {delitem(Token_Of_Apostle, countitem(Token_Of_Apostle));}
	mes("Esse t�mulo tem uma imagem de um grande dem�nio com enormes chifres.\n"
		"Ela desperta um sentimento amea�ador.");
	next;
	if (select("Tocar", "Voltar") == 2) {close;}
	.@ins_bapho_check = questprogress(3040, PLAYTIME);
	if (!.@ins_bapho_check) {
		if (has_instance("1@cata") == "") {
			mes("� frio ao tocar.\n"
				"Mais nada acontece.");
			close;
		} else {
			mapannounce("monk_test", "[" + strcharinfo(CHAR_NAME) + "] membro do grupo [" + getpartyname(.@party_id) + "] entrou no Santu�rio Selado.", bc_map, "0x00ff99");
			setquest(3040);
			warp("1@cata", 100, 224);
			end;
		}
	} else if (.@ins_bapho_check == 1) {
		mes("[Frei Patrick]\n"
			"Parece que voc� entrou no santu�rio recentemente...\n"
			"Voc� n�o pode entrar novamente pois a Maldi��o de Bafom� ainda continua.\n"
			"A Maldi��o de Bafom� desparece ap�s de um certo tempo ap�s sua entrada.");
		close;
	} else if (.@ins_bapho_check == 2) {
		mes("[Frei Patrick]\n"
			"Humm... Parece que a maldi��o de Bafom� est� enfraquecendo.\n"
			"Irei retir�-la completamente.");
		next;
		mes("[Frei Patrick]\n"
			"Haaaaaaap...\n"
			"Wingardium Leviosa Expecto Patronum !!!!!");
		specialeffect(EF_HOLYHIT, AREA, playerattached());
		if (questprogress(3040)) {erasequest(3040);}
		if (questprogress(3041)) {erasequest(3041);}
		next;
		mes("[Frei Patrick]\n"
			"Huu... Acabou.\n"
			"Agora que retirei todas as maldi��es sobre voc�.\n"
			"Pode entrar novamente.");
		close;
	}
}

// ------------------------------------------------------------------
prt_monk,261,91,3	script	Rust Blackhand#edq	4_M_DWARF,{
	.@new_maje = questprogress(3043);
	mes("[Rust Blackhand]\n"
		"Quem � voc�? O que deseja?");
	next;
	mes("[Rust Blackhand]\n"
		"Voc� n�o � um monje, o que quer de mim?");
	next;
	if (.@new_maje == 1) {
		mes("[Rust Blackhand]\n"
			"Voc� trouxe todos os materiais?");
		next;
		if (countitem(Bapho_Doll) && countitem(Magestic_Goat) && (countitem(Dark_Crystal) > 29) && (countitem(Dark_Debris) > 49) && (Zeny >= 990000)) {
			mes("[Rust Blackhand]\n"
				"kkk... Irei preparar os chifres.\n"
				"Tem como esperar um pouco?");
			next;
			mes("[Rust Blackhand]\n"
				"Humm...\n"
				"Faz tempo que vejo esses chifres...\n"
				"Deixe-me come�ar...");
			next;
			mes("...");
			next;
			mes("... ...");
			next;
			mes("... ... ...");
			next;
			delitem(Bapho_Doll, 1);
			delitem(Magestic_Goat, 1);
			delitem(Dark_Crystal, 30);
			delitem(Dark_Debris, 50);
			Zeny -= 990000;
			completequest(3043);
			getitem(L_Magestic_Goat, 1);
			mes("[Rust Blackhand]\n"
				"Est� pronto.\n"
				"Voc� j� deve estar excitado.\n"
				"Eu entendo...");
			next;
			mes("[Rust Blackhand]\n"
				"N�o aceito reclama��es sobre meu servi�o.\n"
				"Ent�o v�...");
			close;
		} else {
			mes("[Rust Blackhand]\n"
				"Huu... Voc� n�o entendeu o que eu disse.\n"
				"Voc� n�o pode fazer nada com esses ingredientes.");
			next;
			mes("[Rust Blackhand]\n"
				"Irei falar sobre os materiais novamente.\n"
				"S�o eles:");
			next;
			mes("[Rust Blackhand]\n"
				"^0000FFBoneco de Bafom� Amaldi�oado,\n"
				"Chifres Magestosos,\n"
				"30 Cristais da Escurid�o,\n"
				"50 Fragmentos da Escurid�o^000000,\n"
				"e o mais importante, o custo da produ��o � de\n"
				"^0000FF 990000^000000 Zeny.");
			close;
		}
	} else if (!.@new_maje && countitem(Bapho_Doll) > 0) {
		switch (select("Boneco Amaldi�oado?", "Terminar Conversa")) {
			case 1:
			mes("[Rust Blackhand]\n"
				"Como?... Hmmm...\n"
				"Voc� conseguiu o boneco?...");
			next;
			mes("[Rust Blackhand]\n"
				"Vamos ver... Foi o Patrick que te trouxe at� aqui?");
			next;
			mes("[Rust Blackhand]\n"
				"Certo... Vou fazer que esse boneco seja algo de ultilidade.\n"
				"O que poderei fazer?");
			next;
			mes("[Rust Blackhand]\n"
				"Posso fazer fortes e largos chifres com toda a for�a de Bafom� contida nele.");
			next;
			mes("[Rust Blackhand]\n"
				"Seu nome � ^4d4dffChifres Magestosos Gigantes^000000.\n"
				"Os chifres Majestosos normais s�o nada comparados � esses.");
			next;
			mes("[Rust Blackhand]\n"
				"O Boneco de Bafom� Amaldi�oado � a pe�a mais importante...\n"
				"Poderei fazer isso se voc� quiser. Deseja que eu o fa�a?");
			next;
			switch (select("Quero sim", "N�o preciso disso!")) {
				case 1:
				mes("[Rust Blackhand]\n"
					"kkk... Sim, homens sabem o que fazem quando a oportunidade chega.\n"
					"Irei lhe falar os ingredientes.\n"
					"N�o esque�a, e traga eles todos.");
				next;
				mes("[Rust Blackhand]\n"
					"^0000FFBoneco de Bafom� Amaldi�oado,\n"
					"Chifres Magestosos,\n"
					"30 Cristais da Escurid�o,\n"
					"50 Fragmentos da Escurid�o^000000,\n"
					"e o mais importante, o custo da produ��o � de\n"
					"^0000FF 990000^000000 Zeny.");
				next;
				mes("[Rust Blackhand]\n"
					"Voc� pode conseguir os chifres Majestosos dos Bafom�s enfraquecidos no labirinto da floresta.\n"
					"E os cristais voc� consegue com as Sombras de Morroc.");
				next;
				mes("[Rust Blackhand]\n"
					"Estou certo que voc� poder� conseguir os ingredientes.\n"
					"At� porque voc� conseguiu selar o verdadeiro Bafom�.\n"
					"N�o �? kkk...");
				next;
				mes("[Rust Blackhand]\n"
					"Voc� nunca saber� como � bom isso at� conseguir um.\n"
					"Se voc� souber, v� e pegue os ingredientes.");
				if (questprogress(3042)) {erasequest(3042);}
				setquest(3043);
				close;
				case 2:
				mes("[Rust Blackhand]\n"
					"Huh... N�o mesmo?\n"
					"Fa�a o que quiser...\n"
					"Voc� quer realmente perder essa oportunidade?");
				next;
				mes("[Rust Blackhand]\n"
					"Eu n�o ligo se esse boneco amea�a sua vida todo o tempo!");
				close;
			}
			case 2:
			mes("[Rust Blackhand]\n"
				"huh...?");
			close;
		}
	} else if (!.@new_maje && !countitem(Bapho_Doll)) {
		mes("[Rust Blackhand]\n"
			"Se n�o tiver nada a fazer, v� embora!\n"
			"Como voc� pode ver, eu s� fa�o equipamentos para os irm�os do monast�rio.");
		close;
	} else if (.@new_maje == 2 && countitem(Bapho_Doll)) {
		switch (select("Boneco Amaldi�oado?", "Terminar conversa")) {
			case 1:
			mes("[Rust Blackhand]\n"
				"Que?... Voc� denovo?\n"
				"O que faz nesse instante?");
			next;
			mes("[Rust Blackhand]\n"
				"Como assim?\n"
				"Voc� oncseguiu outro boneco do perverso dem�nio?\n"
				"Umm... Voc� � bem melhor do que eu pensava...");
			next;
			mes("[Rust Blackhand]\n"
				"Est� certo...\n"
				"Irei lhe ajudar denovo.");
			next;
			mes("[Rust Blackhand]\n"
				"Se voc� quiser tranformar o seu boneco em num\n"
				"^4d4dffChifres Magestosos Gigantes^000000 novamente, eu poderei fazer outro.");
			next;
			mes("[Rust Blackhand]\n"
				"Irei lhe falar os ingredientes novamente.\n"
				"Ent�o, voc� deseja fazer?");
			next;
			switch (select("Quero sim", "N�o preciso disso!")) {
				case 1:
				mes("[Rust Blackhand]\n"
					"kkk... Sim, homens sabem o que fazem quando a oportunidade chega.\n"
					"Irei lhe falar os ingredientes.\n"
					"N�o esque�a, e traga eles todos.");
				next;
				mes("[Rust Blackhand]\n"
					"^0000FFBoneco de Bafom� Amaldi�oado,\n"
					"1 Chifres Magestosos,\n"
					"30 Cristais da Escurid�o,\n"
					"50 Fragmentos da Escurid�o^000000,\n"
					"e o mais importante, o custo da produ��o � de\n"
					"^0000FF 990000^000000 Zeny.");
				next;
				mes("[Rust Blackhand]\n"
					"Voc� pode conseguir os chifres Majestosos dos Bafom�s enfraquecidos no labirinto da floresta.\n"
					"E os cristais voc� consegue com as Sombras de Morroc.");
				next;
				mes("[Rust Blackhand]\n"
					"Estou certo que voc� poder� conseguir os ingredientes at� porque voc� conseguiu selar o verdadeiro Bafom�.\n"
					"N�o �? kkk...");
				next;
				mes("[Rust Blackhand]\n"
					"Voc� nunca saber� como � bom isso at� conseguir um.\n"
					"Se voc� souber, v� e pegue os ingredientes.");
				if (questprogress(3042)) {erasequest(3042);}
				if (!questprogress(3043)) {setquest(3043);}
				close;
				case 2:
				mes("[Rust Blackhand]\n"
					"Huh... N�o mesmo?\n"
					"Fa�a o que quiser...\n"
					"Voc� quer realmente perder essa oportunidade?");
				next;
				mes("[Rust Blackhand]\n"
					"Eu n�o ligo se esse boneco amea�a sua vida todo o tempo!");
				close;
			}
			case 2:
			mes("[Rust Blackhand]\n"
				"Huh...?");
			close;
		}
	} else if (.@new_maje == 2 && !countitem(Bapho_Doll)) {
		mes("[Rust Blackhand]\n"
			"O est� fazendo aqui?\n"
			"Se n�o quer os ^4d4dffChifres Magestosos Giganetes^000000, saia daqui!");
		close;
	}
}

// ------------------------------------------------------------------
// - [Interior do Santu�rio]
// ------------------------------------------------------------------
1@cata,1,2,0	script	ins_baphomet_lotto	FAKE_NPC,{
	OnInstanceInit:
	.@ins = rand(1, 13);
	for (.@i = 1; .@i <= 13; ++.@i) {
		disablenpc(instance_npcname("T�mulo#ss1F_" + .@i + ((.@i == .@ins)?"T":"F")));
	}
	disablenpc(instance_npcname("ins_baphomet_lotto"));
	end;
}

// ------------------------------------------------------------------
1@cata,3,2,0	script	ins_baphomet_lotto2	FAKE_NPC,{
	OnEnable:
	for (.@i = 1; .@i <= 12; ++.@i)
		enablenpc(instance_npcname("Bobbing Tocha#" + .@i));
	end;
}

// ------------------------------------------------------------------
1@cata,4,2,0	script	ins_baphomet_lotto3	FAKE_NPC,{
	OnEnable:
	.@label$ = instance_npcname("ins_baphomet_lotto3") + "::OnMyMobDead";
	.@map$ = instance_mapname("1@cata");
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", FLAME_SKULL, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", WRAITH_DEAD, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", FLAME_SKULL, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", WRAITH_DEAD, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", FLAME_SKULL, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", WRAITH_DEAD, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", FLAME_SKULL, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", KHALITZBURG, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", EVIL_DRUID, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", KHALITZBURG, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", EVIL_DRUID, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", KHALITZBURG, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", WRAITH_DEAD, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", EVIL_DRUID, 1, .@label$);
	monster(.@map$, 0, 0, "Ap�stolo de Bafom�", FLAME_SKULL, 1, .@label$);
	end;

	OnDisable:
	killmonster(instance_mapname("1@cata"), instance_npcname("ins_baphomet_lotto3") + "::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("1@cata");
	if (mobcount(.@map$, instance_npcname("ins_baphomet_lotto3") + "::OnMyMobDead") < 1) {
		mapannounce(.@map$, "Todos os Ap�stolos de Bafom� est�o mortos!", bc_map, "0x00ff99");
	}
	getitem(Token_Of_Apostle, 1);
	end;
}

// ------------------------------------------------------------------
1@cata,141,221,0	script	T�mulo#ss	CLEAR_NPC,3,3,{
	.@party_id = getcharid(CHARID_PARTY);
	if (`ins_baphomet == 0) {
		mes("O T�mulo est� tr�mulo...");
		next;
		mes("Ao toc�-lo, posso ouvir uma voz");
		next;
		specialeffect(EF_CONE, AREA, playerattached());
		mes("[T�mulo do Her�i]\n"
			"Estava esperando que algum aventureiro forte como voc� voltasse...");
		next;
		while (true) {
			switch (select("Quem � voc�?", "Esperando por mim?", "Cancelar")) {
				case 1:
				mes("[T�mulo do Her�i]\n"
					"Eu sou um dos aventureiros que tentaram parar o Bafom�.\n"
					"Agora, estou morto e s� minha alma que me resta...");
				next;
				mes("[T�mulo do Her�i]\n"
					"Como sabe...\n"
					"N�o temos tempo suficiente.\n"
					"N�o podem parar o Bafom� sozinhos.\n"
					"Seu poder continua forte durante d�cadas.");
				next;
				mes("[T�mulo do Her�i]\n"
					"No passado, meu grupo e eu selamos o Bafom� no segundo andar e bloqueamos a entrada.");
				next;
				mes("[T�mulo do Her�i]\n"
					"Mudei a ess�ncia da minha alma, para que eu possa permanecer neste mundo.\n"
					"Isso foi quando eu me tornei guardi�o deste t�mulo.");
				next;
				break;
				case 2:
				mes("[T�mulo do Her�i]\n"
					"O poder de Bafom� pode quebrar o selo que fizemos.\n"
					"Se eu n�o reativ�-los...\n"
					"Ele ir� finalmente renascer.");
				next;
				mes("[T�mulo do Her�i]\n"
					"Para poder entrar, voc� deve substancializar minha alma.\n"
					"Vou abrir a porta e reativar os selos enfraquecidos.\n"
					"Depois que estiver substancializado.");
				next;
				mes("[T�mulo do Her�i]\n"
					"Para isso voc� deve achar o meu corpo que deve estar dentro de algum desses T�mulos.");
				next;
				mes("[T�mulo do Her�i]\n"
					"Se o ^0000FFl�der do grupo^000000 trouxer meu pingente.\n"
					"Minha alma ser� substancializada.");
				`ins_baphomet = 1;
				close;
				case 3:
				mes("Posso ouvir uma voz fraca.");
				close;
			}
		}
	} else if (`ins_baphomet == 1) {
		mes("[T�mulo do Her�i]\n"
			"O poder de Bafom� pode quebrar o selo que fizemos.\n"
			"Se eu n�o reativ�-los...\n"
			"Ele ir� finalmente renascer.");
		next;
		mes("[T�mulo do Her�i]\n"
			"Para poder entrar, voc� deve substancializar minha alma.\n"
			"Vou abrir a porta e reativar os selos enfraquecidos depois que estiver substancializado.");
		next;
		mes("[T�mulo do Her�i]\n"
			"Para isso voc� deve achar o meu corpo que deve estar dentro de algum desses t�mulos.");
		close;
	} else if ((`ins_baphomet == 2) && (getpartyleader(.@party_id, 2) == getcharid(CHARID))) {
		mes("[T�mulo do Her�i]\n"
			"Encontraram meu pingente?");
		next;
		if (countitem(Soul_Pendant) > 0) {
			specialeffect(EF_MAPPILLAR);
			mes("[T�mulo do Her�i]\n"
				"Sim... � esse... Meu Pingente...");
			next;
			delitem(Soul_Pendant, 1);
			enablenpc(instance_npcname("Alma do Her�i#1F"));
			disablenpc(instance_npcname("T�mulo#ss"));
			mes("[T�mulo do Her�i]\n"
				"Agora posso substancializar minha alma.\n"
				"Esperarei no altar de fogo no centro do mapa.\n"
				"Me encontre l�.");
			next;
			mapannounce(instance_mapname("1@cata"), "Alma do Her�i : Esperarei no altar de fogo no centro do mapa.", bc_map, "0xFFFF00");
			mes("Posso ouvir uma voz fraca.");
			close;
		} else {
			mes("[T�mulo do Her�i]\n"
				"Ainda est� aqui?\n"
				"Traga meu Pingente o mais r�pido poss�vel.");
			next;
			mes("[T�mulo do Her�i]\n"
				"Voc� pode encontrar meu corpo com meu pingente nesse mapa.");
			close;
		}
	} else {
		mes("[T�mulo do Her�i]\n"
			"Eu quero falar com o ^0000FFl�der do grupo^000000. Outros, aguardem aqui.");
		close;
	}
	end;

	OnTouch:
	if (`ins_baphomet == 0) {
		mes("Krrrr... Krrrr...");
		next;
		mes("Eu posso sentir um sentimento estranho no t�mulo.\n"
			"� como que algu�m estivesse pedindo algo em sil�ncio...");
		close;
	}
	end;

	OnInstanceInit:
	`ins_baphomet = 0;
	end;
}

// ------------------------------------------------------------------
1@cata,176,119,4	script	Alma do Her�i#1F	4_M_CHAMPSOUL,{
	.@party_id = getcharid(CHARID_PARTY);
	cutin("ins_cata_champ_n", 2);
	if (`ins_baphomet == 2) {
		mes("[Alma do Her�i]\n"
			"Com sua ajuda, a minha alma pode ser substancializada.\n"
			"Eu quero falar, mais n�o temos tempo suficiente...");
		next;
		mes("[Alma do Her�i]\n"
			"Posso ficar assim por uma hora.\n"
			"Para chegar ao altar principal do subterr�neo.\n"
			"Voc� deve me ajudar a realizar a cerim�nia de abertura de cada selo.");
		next;
		mes("[Alma do Her�i]\n"
			"Irei falar o que voc� deve fazer.\n"
			"Primeiro, pegue as ^0000FFEss�ncias de Fogo^000000 das tochas dos t�mulos...");
		next;
		mes("[Alma do Her�i]\n"
			"Segundo, todos os membros que entrarem no subterr�neo devem levar um s�mbolo que � chamado S�mbolo do Ap�stolo.");
		next;
		while (true) {
			cutin("ins_cata_champ_n", 2);
			switch (select("Ess�ncias de Fogo?", "S�mbolo do Ap�stolo?", "O que fazer?", "Estou pronto!")) {
				case 1:
				++.@ins_baphomet_1f_1;
				mes("[Alma do Her�i]\n"
					"Voc� pode ver as Tochas por aqui.\n"
					"Elas cont�m a ess�ncia de Thor, o deus do Trov�o.\n"
					"Elas s�o herdadas de nossos antecessores para parar a escurid�o de Bafom�...");
				next;
				mes("[Alma do Her�i]\n"
					"Para abrir a ponte que leva ao subsolo � preciso ser purificado pelas ^0000FFEss�ncias de Fogo^000000.");
				next;
				mes("[Alma do Her�i]\n"
					"Uma coisa que voc� deve lembrar � que...\n"
					"Estas ^0000FFEss�ncias de Fogo^000000 s� podem ser recolhidas pelo herdeiro da F�.");
				next;
				mes("[Alma do Her�i]\n"
					"Somente o l�der do grupo que pode recolher as ^0000FFEss�ncias de Fogo^000000.");
				next;
				break;
				case 2:
				++.@ins_baphomet_1f_2;
				mes("[Alma do Her�i]\n"
					"Naquele tempo, era imposs�vel se livrar do dem�nio Bafom� por n�s mesmos.\n"
					"Depois de numerosos her�is terem sacrificados suas vidas, "
					"n�s conseguimos selar o Dem�nio nessa abadia.");
				next;
				mes("[Alma do Her�i]\n"
					"No entanto, Bafom� nunca desistiu.\n"
					"Ele continua refor�ado o seu poder trazendo nova a este santu�rio.");
				next;
				mes("[Alma do Her�i]\n"
					"Alguns desses monstros t�m poderes m�gicos.\n"
					"Bafom� os chama de Ap�stolos.");
				next;
				mes("[Alma do Her�i]\n"
					"Nesse tempo, � impossivel combater o Bafom� sozinhos.");
				next;
				mes("[Alma do Her�i]\n"
					"Entretando, Bafom� nunca cair�.\n"
					"Seu poder continua aumentando.\n"
					"Esse poder trouxe nova vida ao seu t�mulo.");
				next;
				mes("[Alma do Her�i]\n"
					"Alguns desses monstros possuem um grande poder.\n"
					"Bafom� os chamam de \"Ap�stolos\".");
				next;
				mes("[Alma do Her�i]\n"
					"Os Ap�stolos se clonam para encher este t�mulo de poder.\n"
					"Eles s�o os monstros de dentro dessas catacumbas.");
				next;
				mes("[Alma do Her�i]\n"
					"Matem os Ap�stolos.\n"
					"Somente os verdadeiros que derrubam o ^0000FFS�mbolo do Ap�stolo^000000...");
				next;
				break;
				case 3:
				++.@ins_baphomet_1f_3;
				if (getpartyleader(.@party_id, 2) == getcharid(CHARID)) {
					mes("[Alma do Her�i]\n"
						"Voc� parece ser o l�der do grupo.\n"
						"Voc� precisa ter ^0000FF10 Ess�ncias de Fogo^000000 das tochas.");
					next;
					mes("[Alma do Her�i]\n"
						"Agora irei cravar o s�mbolo que mostra que voc� � o herdeiro da f�.\n"
						"Saiba que, somente voc� pode carregas as Ess�ncias do Fogo.");
					next;
					specialeffect(EF_HOLYHIT, AREA, playerattached());
					mes("[Alma do Her�i]\n"
						"Voc� deve carregar o ^0000FFS�mbolo do Ap�stolo^000000 tamb�m.\n"
						"Ent�o prepare-se.");
					next;
					mes("[Alma do Her�i]\n"
						"Me avise quando todos estiverem prontos que irei abrir a ponte selada.");
					next;
				} else {
					mes("[Alma do Her�i]\n"
						"Esteja certo que o L�der do Grupo j� escutou minhas explica��es.");
					next;
					mes("[Alma do Her�i]\n"
						"Matem os Ap�stolos de Bafom� e peguem seu ^0000FFS�mbolo do Ap�stolo^000000.");
					next;
					mes("[Alma do Her�i]\n"
						"� melhor matarem todos os Ap�stolos pois � dif�cil saber qual � o certo.");
					next;
					mes("[Alma do Her�i]\n"
						"Est� pronto?\n"
						"Esteja certo que voc� escutou todas as minhas explica��es antes de ir.");
					next;
				}
				break;
				case 4:
				if ((.@ins_baphomet_1f_1 > 0) && (.@ins_baphomet_1f_2 > 0) && (.@ins_baphomet_1f_3 > 0)) {
					cutin("ins_cata_champ_n", 2);
					mes("[Alma do Her�i]\n"
						"Est� pronto?\n"
						"Irei abrir a ponte agora mesmo.");
					next;
					.@exitloop = 1;
				} else {
					cutin("ins_cata_champ_a", 2);
					mes("[Alma do Her�i]\n"
						"Parece ser dif�cil mas espero que sua bravura.\n"
						"E suas habilidades sejam o suficiente para isso.");
					next;
					mes("[Alma do Her�i]\n"
						"Lembre-se, eu preciso que voc� traga para mim\n"
						"^FFAA0010 Ess�ncias de Fogo^000000\n"
						"encontradas nas tochas desse lugar e o\n"
						"^0000FFS�mbolo do Ap�stolo^000000\n"
						"dos Ap�stolos de Bafom�.");
					next;
				}
				break;
			}
			if (.@exitloop) break;
		}
		if (getpartyleader(.@party_id, 2) == getcharid(CHARID)) {
			mes("[Alma do Her�i]\n"
				"Lembrando novamente, s� posso ficar aqui por uma hora.\n"
				"Ent�o devem finalizar o trabalho dentro desse tempo.");
			`ins_baphomet = 3;
			donpcevent(instance_npcname("ins_baphomet_1f_timer") + "::OnEnable");
			donpcevent(instance_npcname("ins_baphomet_lotto2") + "::OnEnable");
			donpcevent(instance_npcname("ins_baphomet_lotto3") + "::OnEnable");
		} else {
			mes("[Alma do Her�i]\n"
				"Lembrando novamente, s� posso ficar aqui por uma hora.\n"
				"Ent�o devem finalizar o trabalho dentro desse tempo.");
		}
		close2;
		cutin("", 255);
		end;
	} else if ((`ins_baphomet == 3) && (getpartyleader(.@party_id, 2) == getcharid(CHARID))) {
		cutin("ins_cata_champ_n", 2);
		mes("[Alma do Her�i]\n"
			"Voc� pegou as 10 ^0000FFEss�ncias de Fogo^000000\n"
			"E o ^0000FFS�mbolo do Ap�stolo^000000?");
		next;
		if ((countitem(Essence_Of_Fire) > 9) && (countitem(Token_Of_Apostle) > 0)) {
			delitem(Essence_Of_Fire, countitem(Essence_Of_Fire));
			`ins_baphomet = 4;
			mes("[Alma do Her�i]\n"
				"Ok. Voc� fez seu trabalho.\n"
				"Agora cheque com seus companheiros se eles j� terminaram.");
		} else {
			mes("[Alma do Her�i]\n"
				"N�o est�o prontos ainda?\n"
				"Eu preciso que voc� traga para mim\n"
				"^FFAA0010 Ess�ncias de Fogo^000000\n"
				"encontradas nas tochas desse lugar e o\n"
				"^0000FFS�mbolo do Ap�stolo^000000\n"
				"dos Ap�stolos de Bafom�.");
		}
		close2;
		cutin("", 255);
		end;
	} else if (`ins_baphomet == 3) {
		cutin("ins_cata_champ_n", 2);
		mes("[Alma do Her�i]\n"
			"Voc� tem o ^0000FFS�mbolo do Ap�stolo^000000?");
		next;
		if (countitem(Token_Of_Apostle) > 0) {
			`ins_baphomet = 4;
			mes("[Alma do Her�i]\n"
				"Ok. Voc� fez seu trabalho.\n"
				"Agora cheque com seus companheiros se eles j� terminaram.");
		} else {
			mes("[Alma do Her�i]\n"
				"Ainda n�o?\n"
				"Eu preciso do ^0000FFS�mbolo do Ap�stolo^000000 dos Ap�stolos de Bafom�.");
		}
		close2;
		cutin("", 255);
		end;
	} else if ((`ins_baphomet == 4) && (getpartyleader(.@party_id, 2) == getcharid(CHARID))) {
		cutin "ins_cata_champ_n", 2;
		mes("[Alma do Her�i]\n"
			"Est� pronto?\n"
			"Abri a ponte neste momento.\n"
			"Para passar pela ponte, voc� deve levar o ^0000FFS�mbolo do Ap�stolo^000000.");
		next;
		`ins_baphomet = 5;
		specialeffect(EF_TELEPORTATION);
		enablenpc(instance_npcname("ins_bapho_to_2f"));
		mes("[Alma do Her�i]\n"
			"Agora j� pode ir ao altar principal.\n"
			"Ele se encontra no sudeste do mapa.");
		next;
		mes("[Alma do Her�i]\n"
			"A verdadeira batalha come�a...\n"
			"Irei os serguir e encontrar alguma forma de ajudar.");
		next;
		mes("[Alma do Her�i]\n"
			"V�o � frente, guerreiros.");
		cutin("", 255);
		mapannounce(instance_mapname("1@cata"), "Alma do Her�i : Agora j� podem ir ao Altar Principal. Ele est� localizado no Sudeste do mapa", bc_map, "0xFFFF00");
		close;
	} else if (`ins_baphomet == 4) {
		cutin("ins_cata_champ_n", 2);
		mes("[Alma do Her�i]\n"
			"Est� pronto?\n"
			"Abri a ponte nesse momento.\n"
			"Para passar pela ponte, voc� deve levar o ^0000FFS�mbolo do Ap�stolo^000000.");
		next;
		mes("[Alma do Her�i]\n"
			"Irei abrir a ponte quando o L�der do grupo estiver pronto.");
		cutin("", 255);
		close;
	} else if (`ins_baphomet == 5) {
		cutin("ins_cata_champ_n", 2);
		mes("[Alma do Her�i]\n"
			"O que est� fazendo?\n"
			"A entrada para o Altar est� aberta, v� e lute!\n"
			"A entrada se encontra no sudeste do mapa.");
		cutin("", 255);
		close;
	} else {
		cutin("ins_cata_champ_n", 2);
		mes("[Alma do Her�i]\n"
			"N�o tenho nada a falar com voc�...");
		cutin("", 255);
		close;
	}

	OnInstanceInit:
	disablenpc(instance_npcname("Alma do Her�i#1F"));
	end;
}

// ------------------------------------------------------------------
// - T�mulos
-	script	Gravestone#ss1	FAKE_NPC,{
	if (`ins_baphomet == 1) {
		getitem(Soul_Pendant, 1);
		`ins_baphomet = 2;
		mes("Um pequeno objeto est� brilhando abaixo do antigo t�mulo.");
		next;
		mes("[" + strcharinfo(CHAR_NAME) + "]\n"
			"Eu acho que � o pingente...");
		close;
	} else {
		mes("Posso sentir a tristeza vinda desse t�mulo.");
		close;
	}
}
1@cata,86,214,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_1T	CLEAR_NPC
1@cata,200,209,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_2T	CLEAR_NPC
1@cata,230,195,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_3T	CLEAR_NPC
1@cata,118,182,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_4T	CLEAR_NPC
1@cata,193,182,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_5T	CLEAR_NPC
1@cata,253,156,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_6T	CLEAR_NPC
1@cata,88,154,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_7T	CLEAR_NPC
1@cata,127,116,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_8T	CLEAR_NPC
1@cata,90,98,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_9T	CLEAR_NPC
1@cata,188,84,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_10T	CLEAR_NPC
1@cata,244,42,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_11T	CLEAR_NPC
1@cata,127,32,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_12T	CLEAR_NPC
1@cata,267,30,0	duplicate(Gravestone#ss1)	T�mulo#ss1F_13T	CLEAR_NPC

-	script	Gravestone#ss2	FAKE_NPC,{
	mes("Posso sentir a tristeza vinda desse t�mulo.");
	close;
}
1@cata,86,214,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_1F	CLEAR_NPC
1@cata,200,209,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_2F	CLEAR_NPC
1@cata,230,195,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_3F	CLEAR_NPC
1@cata,118,182,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_4F	CLEAR_NPC
1@cata,193,182,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_5F	CLEAR_NPC
1@cata,253,156,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_6F	CLEAR_NPC
1@cata,88,154,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_7F	CLEAR_NPC
1@cata,127,116,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_8F	CLEAR_NPC
1@cata,90,98,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_9F	CLEAR_NPC
1@cata,188,84,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_10F	CLEAR_NPC
1@cata,244,42,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_11F	CLEAR_NPC
1@cata,127,32,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_12F	CLEAR_NPC
1@cata,267,30,0	duplicate(Gravestone#ss2)	T�mulo#ss1F_13F	CLEAR_NPC

// ------------------------------------------------------------------
// - Tochas
-	script	BobbingTorch#SS	FAKE_NPC,{
	.@party_id = getcharid(CHARID_PARTY);
	if (getpartyleader(.@party_id, 2) == getcharid(CHARID)) {
		if ((`ins_baphomet == 3) && (countitem(Essence_Of_Fire) < 11)) {
			mes("Uma antiga tocha parece que pode queimar tudo que est� a minha volta.");
			next;
			mes("Sua grande apar�ncia e o calor de suas chamas me faz voltar...\n"
				"Por�m tive coragem e estiquei o bra�o para segur�-la.");
			next;
			specialeffect(EF_HOLYHIT, AREA, playerattached());
			getitem(Essence_Of_Fire, 1);
			mes("O s�mbolo do herdeiro brilha. Nisso um pequeno cristal cai da tocha.");
			disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
			close;
		} else if ((`ins_baphomet == 3) && (countitem(Essence_Of_Fire) > 10)) {
			mes("Voc� j� tem 10 Ess�ncias de Fogo. Voc� n�o precisa mais pegar nenhuma.");
			close;
		} else {
			mes("Voc� n�o precisa mais pegar as Ess�ncias de Fogo.");
			close;
		}
	} else {
		mes("Uma antiga tocha parece que pode queimar tudo que est� a minha volta.");
		next;
		mes("[Voz Misteriosa]\n"
			"Voc� n�o � o Herdeiro da F�. N�o coloque essas Ess�ncias nessas m�os imundas.");
		specialeffect(EF_FIRESPLASHHIT, AREA, playerattached());
		percentheal(-50, 0);
		close;
	}

	OnInstanceInit:
	disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
	end;
}
1@cata,267,210,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#1	CLEAR_NPC
1@cata,85,182,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#2	CLEAR_NPC
1@cata,267,154,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#3	CLEAR_NPC
1@cata,157,139,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#4	CLEAR_NPC
1@cata,193,138,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#5	CLEAR_NPC
1@cata,193,102,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#6	CLEAR_NPC
1@cata,157,102,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#7	CLEAR_NPC
1@cata,113,112,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#8	CLEAR_NPC
1@cata,253,56,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#9	CLEAR_NPC
1@cata,239,56,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#10	CLEAR_NPC
1@cata,71,42,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#11	CLEAR_NPC
1@cata,155,14,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#12	CLEAR_NPC

// ------------------------------------------------------------------
// - Portal para o Segundo Andar
1@cata,281,12,0	script	ins_bapho_to_2f	WARPNPC,1,1,{
	OnTouch:
	if (countitem(Token_Of_Apostle) > 0) {
		delitem(Token_Of_Apostle, countitem(Token_Of_Apostle));
		`ins_baphomet = 5;
		warp(instance_mapname("2@cata"), 80, 144);
		end;
	} else {
		mes("[Alma do Her�i]\n"
		"Cad� seu S�mbolo do Ap�stolo?\n"
		"Eu disse que precisava dele para passar pela ponte.");
		close;
	}

	OnInstanceInit:
	disablenpc(instance_npcname("ins_bapho_to_2f"));
	end;
}

// ------------------------------------------------------------------
1@cata,1,1,0	script	ins_baphomet_1f_timer	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("ins_baphomet_1f_timer"));
	end;

	OnEnable:
	enablenpc(instance_npcname("ins_baphomet_1f_timer"));
	initnpctimer;
	end;

	OnDisable:
	disablenpc(instance_npcname("ins_baphomet_1f_timer"));
	stopnpctimer;
	end;

	OnTimer1800000:
	mapannounce(instance_mapname("1@cata"), "Alma do Her�i : N�o temos tempo suficiente. Apressem-se!", bc_map, "0xFFFF00");
	end;

	OnTimer2400000:
	mapannounce(instance_mapname("1@cata"), "Alma do Her�i : Meu corpo est� desaparecendo... Apressem-se!", bc_map, "0xFFFF00");
	end;

	OnTimer3000000:
	mapannounce(instance_mapname("1@cata"), "Alma do Her�i : Tudo acabou... N�o tem como prosseguirmos...", bc_map, "0xFFFF00");
	end;

	OnTimer3050000:
	mapannounce(instance_mapname("1@cata"), "Alma do Her�i : We failed... However... We still have a chance. I hope you will train yourselves until the time comes.", bc_map, "0xFFFF00");
	end;

	OnTimer3100000:
	mapannounce(instance_mapname("1@cata"), "Falhamos... Entretanto... Ainda temos chances. Espero que treinem mais at� a hora chegar.", bc_map, "0xFFFF00");
	end;

	OnTimer3500000:
	instance_warpall ("monk_test", 310, 150);
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
// - [Segundo Andar]
// ------------------------------------------------------------------
2@cata,80,144,0	script	ins_2f_enter	FAKE_NPC,3,3,{
	OnTouch:
	donpcevent(instance_npcname("ins_2f_enter_broad") + "::OnEnable");
	disablenpc(instance_npcname("ins_2f_enter"));
	end;
}

2@cata,1,1,0	script	ins_2f_enter_broad	FAKE_NPC,{
	OnInstanceInit:
	OnDisable:
	disablenpc(instance_npcname("ins_2f_enter_broad"));
	end;

	OnEnable:
	enablenpc(instance_npcname("ins_2f_enter_broad"));
	initnpctimer;
	end;

	OnTimer10000:
	mapannounce(instance_mapname("2@cata"), "Bafom� : Humanos... interferindo novamente...", bc_map, "0xdb7093");
	end;

	OnTimer13000:
	mapannounce(instance_mapname("2@cata"), "Ap�stolo de Bafom� : Humanos! Humanos invadiram nosso santu�rio!", bc_map, "0xFFFF00");
	end;

	OnTimer16000:
	mapannounce(instance_mapname("2@cata"), "Ap�stolo de Bafom� : Matem-nos! N�o deixem parar a ressurrei��o de nosso mestre!", bc_map, "0xFFFF00");
	end;

	OnTimer18000:
	mapannounce(instance_mapname("2@cata"), "Ap�stolo de Bafom� : Apressem-se em liberar os selos dos altares! O retorno de nosso mestre est� sobre n�s.", bc_map, "0xFFFF00");
	stopnpctimer;
	disablenpc(instance_npcname("ins_2f_enter_broad"));
	end;
}

// ------------------------------------------------------------------
2@cata,50,67,0	script	slave_left	FAKE_NPC,5,5,{
	OnTouch:
	.@map$ = instance_mapname("2@cata");
	mapannounce(.@map$, "Ap�stolo de Bafom� : Matem os Humanos! N�o os deixem enterromper a volta de nosso Mestre!", bc_map, "0xFFFF00");
	monster(.@map$, 55, 67, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 51, 67, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 58, 67, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	monster(.@map$, 53, 67, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 54, 67, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 55, 67, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 56, 67, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 58, 66, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 56, 66, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 60, 66, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 59, 66, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 54, 66, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 55, 66, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	monster(.@map$, 56, 66, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 50, 65, "Ap�stolo de Bafom�", BANSHEE, 1);
	monster(.@map$, 61, 65, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	disablenpc(instance_npcname("slave_left"));
	end;
}

// ------------------------------------------------------------------
2@cata,109,67,0	script	slave_right	FAKE_NPC,5,5,{
	OnTouch:
	.@map$ = instance_mapname("2@cata");
	mapannounce(.@map$, "Ap�stolo de Bafom� : Matem os Humanos! N�o os deixem enterromper a volta de nosso Mestre!", bc_map, "0xFFFF00");
	monster(.@map$, 105, 67, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 104, 67, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 107, 67, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 106, 67, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 102, 67, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 103, 67, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 103, 67, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 109, 66, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 108, 66, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 101, 66, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 106, 66, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	monster(.@map$, 102, 66, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 104, 66, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	monster(.@map$, 103, 66, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 109, 65, "Ap�stolo de Bafom�", BANSHEE, 1);
	monster(.@map$, 108, 65, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	disablenpc instance_npcname("slave_right");
	end;
}

// ------------------------------------------------------------------
2@cata,79,39,0	script	slave_down	FAKE_NPC,5,5,{
	OnTouch:
	.@map$ = instance_mapname("2@cata");
	mapannounce(.@map$, "Ap�stolo de Bafom� : Ap�stolo de Bafom� : Matem os Humanos! N�o os deixem enterromper a volta de nosso Mestre!", bc_map, "0xFFFF00");
	monster(.@map$, 78, 41, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 79, 42, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 78, 46, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 81, 41, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 81, 42, "Ap�stolo de Bafom�", FLAME_SKULL, 1);
	monster(.@map$, 79, 43, "Ap�stolo de Bafom�", WRAITH_DEAD, 1);
	monster(.@map$, 77, 40, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 79, 41, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 79, 42, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 79, 43, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 79, 48, "Ap�stolo de Bafom�", EVIL_DRUID, 1);
	monster(.@map$, 78, 49, "Ap�stolo de Bafom�", KHALITZBURG, 1);
	monster(.@map$, 78, 41, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	monster(.@map$, 74, 42, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	monster(.@map$, 72, 48, "Ap�stolo de Bafom�", BANSHEE, 1);
	monster(.@map$, 72, 38, "Ap�stolo de Bafom�", MINI_DEMON, 1);
	disablenpc(instance_npcname("slave_down"));
	end;
}

// ------------------------------------------------------------------
-	script	MagicalSeal#SS	FAKE_NPC,{
	.@seal_check = questprogress(3041, PLAYTIME);
	if (.@seal_check == 1) {
		specialeffect(EF_SILENCEATTACK, AREA, playerattached());
		percentheal(-50, 0);
		sc_start(Eff_Stone, 30000, 0);
		mes("Voc� utlizou suas for�as no selo anterior.\n"
		"Parece que voc� ainda n�o recuperou toda sua for�a.");
		close;
	}
	if (.@seal_check == 2) {erasequest(3041);}
	specialeffect(EF_LEXDIVINA);
	disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
	.@map$ = instance_mapname("2@cata");
	if (strnpcinfo(NPC_NAME_HIDDEN) == "0") {areamobuseskill(.@map$, 79, 81, 10, 1929, "NPC_INVINCIBLEOFF", 1, 0, 0, e_hlp, 0);}
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "2") {areamobuseskill(.@map$, 123, 109, 10, 1929, "NPC_INVINCIBLEOFF", 1, 0, 0, e_hlp, 0);}
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "4") {areamobuseskill(.@map$, 123, 22, 10, 1929, "NPC_INVINCIBLEOFF", 1, 0, 0, e_hlp, 0);}
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "8") {areamobuseskill(.@map$, 35, 21, 10, 1929, "NPC_INVINCIBLEOFF", 1, 0, 0, e_hlp, 0);}
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "10") {areamobuseskill(.@map$, 35, 109, 10, 1929, "NPC_INVINCIBLEOFF", 1, 0, 0, e_hlp, 0);}
	percentheal(-50, 0);
	sc_start(Eff_Stone, 20000, 0);
	setquest(3041);
	mapannounce(.@map$, "O selo � ativado colocando o poder m�gico sobre o altar.", bc_map, "0x87ceeb");
	mes("Eu posso sentir o poder voltando ao altar colocando seu poder m�gico.");
	next;
	mes("Voc� n�o pode colocar o selo novamente durante 3 minutos pois perdeu seu SP com isso.");
	close;

	OnInstanceInit:
	disablenpc instance_npcname(strnpcinfo(NPC_NAME));
	end;
}
2@cata,79,81,0	duplicate(MagicalSeal#SS)	Selo M�gico#0	CLEAR_NPC
2@cata,123,109,0	duplicate(MagicalSeal#SS)	Selo M�gico#2	CLEAR_NPC
2@cata,123,22,0	duplicate(MagicalSeal#SS)	Selo M�gico#4	CLEAR_NPC
2@cata,35,21,0	duplicate(MagicalSeal#SS)	Selo M�gico#8	CLEAR_NPC
2@cata,35,109,0	duplicate(MagicalSeal#SS)	Selo M�gico#10	CLEAR_NPC

// ------------------------------------------------------------------
2@cata,79,65,0	script	Altar Principal#ss	CLEAR_NPC,{
	.@party_id = getcharid(CHARID_PARTY);
	if ((`ins_baphomet == 5) && (getpartyleader(.@party_id, 2) == getcharid(CHARID))) {
		mes("Um poder mal�gno, terr�vel demais para descrever, passa pelo altar irradiando uma cor violeta.");
		next;
		mes("Pergaminhos M�gicos piscam rapidamente, na tentativa de suprimir esse poder terr�vel.");
		next;
		mes("O Altar Principal treme furiosamente.");
		next;
		specialeffect(EF_METEORSTORM);
		specialeffect(EF_METEORSTORM);
		mes("[" + strcharinfo(CHAR_NAME) + "]\n"
		"Olhem! Algo... Algo est� vindo.");
		`ins_baphomet = 6;
		donpcevent(instance_npcname("ins_2f_hero_broad") + "::OnEnable");
		disablenpc(instance_npcname("Altar Principal#ss"));
		close;
	} else {
		mes("Um poder mal�gno, terr�vel demais para descrever, passa pelo altar irradiando uma cor violeta.");
		next;
		mes("Pergaminhos M�gicos piscam rapidamente, na tentativa de suprimir esse poder terr�vel.");
		close;
	}
	end;
}

// ------------------------------------------------------------------
2@cata,80,63,4	script	Alma do Her�i#2F	4_M_CHAMPSOUL,{
	cutin("ins_cata_champ_s", 2);
	if (questprogress(3041)) {erasequest(3041);}
	mes("[Alma do Her�i]\n"
	"Bom trablaho, meus descendentes...\n"
	"Voc�s realizaram meu desejo que muitos n�o cumprem faz tempo.");
	next;
	mes("[Alma do Her�i]\n"
	"Realmente aprecio isso.\n"
	"Suas almas finalmente podem descansar em paz...");
	next;
	mes("[Alma do Her�i]\n"
	"A luta pela paz neste mundo nunca vai acabar.\n"
	"Mas ... o meu papel aqui finalmente chega ao fim, porque h� bravos her�is como voc�.");
	next;
	switch (select("Leve-me ao monast�rio", "Terminar conversa")) {
		case 1:
		mes("[Alma do Her�i]\n"
		"Ok. Tirarei seu grupo daqui com seguran�a.");
		next;
		mes("[Alma do Her�i]\n"
		"Quando sair, diga um oi ao Patrick.");
		cutin("", 255);
		`ins_baphomet = 0;
		warp("monk_test", 310, 150);
		close;
		case 2:
		mes("[Alma do Her�i]\n"
		"Ainda tem algo para fazer aqui?\n"
		"Quando estiver pronto para sair, fale comigo...");
		cutin("", 255);
		close;
	}

	OnInstanceInit:
	disablenpc instance_npcname("Alma do Her�i#2F");
	end;
}

// ------------------------------------------------------------------
2@cata,1,2,0	script	ins_2f_hero_broad	FAKE_NPC,{
	OnEnable:
	enablenpc(instance_npcname("ins_2f_hero_broad"));
	initnpctimer;
	end;

	OnDisable:
	disablenpc(instance_npcname("ins_2f_hero_broad"));
	end;

	OnTimer3000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Meu deus! O selo do Altar Principal est� enfraquecendo!", bc_map, "0xFFFF00");
	end;

	OnTimer6000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Companheiros... Escutem com aten��o o que irei dizer.", bc_map, "0xFFFF00");
	end;

	OnTimer9000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Os altares, que controlam o poder altar principal, est�o localizados nos cantos Nordeste, Sudeste, Sudoeste e Noroeste deste quarto.", bc_map, "0xFFFF00");
	end;

	OnTimer12000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Encontre estes altares e ative os seus selos antes que Bafom� reviva.", bc_map, "0xFFFF00");
	end;

	OnTimer15000:
	mapannounce(instance_mapname("2@cata"), "Bafom� : Tarde demais, fracos... Agora, voc�s ir�o sentir o desespero da morte!", bc_map, "0xdb7093");
	end;

	OnTimer17000:
	mapannounce(instance_mapname("2@cata"), "Bafom� : Ningu�m pode me prejudicar aqui. Voc� ser� o meu primeiro sacrif�cio.", bc_map, "0xdb7093");
	donpcevent(instance_npcname("control_baphomet") + "::OnEnable");
	donpcevent(instance_npcname("ins_2f_hero_broad2") + "::OnEnable");
	stopnpctimer;
	disablenpc(instance_npcname("ins_2f_hero_broad"));
	end;
}

// ------------------------------------------------------------------
2@cata,3,3,0	script	control_baphomet	FAKE_NPC,{
	OnInstanceInit:
	OnDisable:
	disablenpc(instance_npcname("control_baphomet"));
	end;

	OnEnable:
	enablenpc(instance_npcname("control_baphomet"));
	donpcevent(instance_npcname("2f_callmon_pattern_c") + "::OnEnable");
	monster(instance_mapname("2@cata"), 79, 64, "Bafom�", BAPHOMET_I, 1, instance_npcname("control_baphomet") + "::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("2@cata");
	if (mobcount(.@map$, instance_npcname("control_baphomet") + "::OnMyMobDead") < 1) {
		`ins_baphomet = 7;
		erasequest(3041);
		mapannounce(.@map$, "Bafom� : N�o! N�oooo!Levarei isso como insulto, seus insetos!... N�o!!...", bc_map, "0xdb7093");
		enablenpc(instance_npcname("Alma do Her�i#2F"));
		disablenpc(instance_npcname("slave_down"));
		disablenpc(instance_npcname("slave_left"));
		disablenpc(instance_npcname("slave_right"));
		donpcevent(instance_npcname("ins_2f_hero_broad") + "::OnDisable");
		donpcevent(instance_npcname("ins_2f_hero_broad2") + "::OnDisable");
		donpcevent(instance_npcname("ins_2f_hero_pattern_c") + "::OnDisable");
		donpcevent(instance_npcname("2f_callmon_pattern_c") + "::OnDisable");
		donpcevent(instance_npcname("2f_callmon_pattern") + "::OnDisable");
		donpcevent(instance_npcname("ins_2f_hero_pattern") + "::OnDisable");
		donpcevent(instance_npcname("ins_2f_enter_broad") + "::OnDisable");
		donpcevent(instance_npcname("control_baphomet") + "::OnDisable");
		disablenpc(instance_npcname("control_baphomet"));
	}
	end;
}

// ------------------------------------------------------------------
2@cata,2,2,0	script	ins_2f_hero_broad2	FAKE_NPC,{
	OnInstanceInit:
	OnDisable:
	disablenpc( instance_npcname( "ins_2f_hero_broad2"));
	end;

	OnEnable:
	enablenpc( instance_npcname( "ins_2f_hero_broad2"));
	initnpctimer;
	end;

	OnTimer8000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : N�o se preocupem, o Bafom� ainda pode ser derrotado.", bc_map, "0xFFFF00");
	end;

	OnTimer11000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : V� para os alteres e ativem os selos.", bc_map, "0xFFFF00");
	end;

	OnTimer13000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Quando os selos se recuperarem, Bafom� ficar� vulner�vel.", bc_map, "0xFFFF00");
	end;

	OnTimer16000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Voc� deve atrair Bafom� aos altares n�o selados. Caso contr�rio, seu esfor�o ser� in�til.", bc_map, "0xFFFF00");
	end;

	OnTimer19000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Temos apenas 1 hora de parar Bafom�. Se o tempo passar, o poder dos selos ser� in�til.", bc_map, "0xFFFF00");
	end;

	OnTimer22000:
	mapannounce(instance_mapname("2@cata"), "Bafom� : � in�til. Fa�a mais selos. Eu vou esmag�-los. Nenhum de voc�s vai sobreviver.", bc_map, "0xdb7093");
	end;

	OnTimer26000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : O poder m�gico do selo central est� se esgotando. V� para o selo central e coloque o poder m�gico.", bc_map, "0xFFFF00");
	enablenpc(instance_npcname("Selo M�gico#0"));
	disablenpc(instance_npcname("Selo M�gico#2"));
	disablenpc(instance_npcname("Selo M�gico#4"));
	disablenpc(instance_npcname("Selo M�gico#8"));
	disablenpc(instance_npcname("Selo M�gico#10"));
	donpcevent(instance_npcname("ins_2f_hero_pattern_c") + "::OnEnable");
	stopnpctimer;
	disablenpc(instance_npcname("ins_2f_hero_broad2"));
	end;
}

// ------------------------------------------------------------------
2@cata,4,1,0	script	2f_callmon_pattern_c	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("2f_callmon_pattern_c"));
	end;

	OnEnable:
	enablenpc(instance_npcname("2f_callmon_pattern_c"));
	initnpctimer;
	donpcevent(instance_npcname("2f_callmon_pattern_c") + "::OnGo");
	end;

	OnDisable:
	stopnpctimer;
	disablenpc(instance_npcname("2f_callmon_pattern_c"));
	end;

	OnGo:
	donpcevent(instance_npcname("2f_callmon_pattern") + "::OnEnable");
	end;

	OnTimer3600000:
	donpcevent(instance_npcname("2f_callmon_pattern_c") + "::OnDisable");
	end;
}

// ------------------------------------------------------------------
2@cata,4,2,0	script	2f_callmon_pattern	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("2f_callmon_pattern"));
	end;

	OnEnable:
	enablenpc(instance_npcname("2f_callmon_pattern"));
	stopnpctimer;
	initnpctimer;
	end;

	OnDisable:
	disablenpc(instance_npcname("2f_callmon_pattern"));
	stopnpctimer;
	end;

	OnTimer300000:
	enablenpc(instance_npcname("slave_down"));
	enablenpc(instance_npcname("slave_left"));
	enablenpc(instance_npcname("slave_right"));
	donpcevent(instance_npcname("2f_callmon_pattern_c") + "::OnGo");
	end;
}

// ------------------------------------------------------------------
2@cata,3,1,0	script	ins_2f_hero_pattern_c	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("ins_2f_hero_pattern_c"));
	end;

	OnEnable:
	enablenpc(instance_npcname("ins_2f_hero_pattern_c"));
	initnpctimer;
	donpcevent(instance_npcname("ins_2f_hero_pattern_c") + "::OnGo");
	end;

	OnGo:
	donpcevent(instance_npcname("ins_2f_hero_pattern") + "::OnEnable");
	end;

	OnDisable:
	stopnpctimer;
	disablenpc(instance_npcname("Selo M�gico#0"));
	disablenpc(instance_npcname("Selo M�gico#2"));
	disablenpc(instance_npcname("Selo M�gico#4"));
	disablenpc(instance_npcname("Selo M�gico#8"));
	disablenpc(instance_npcname("Selo M�gico#10"));
	donpcevent(instance_npcname("ins_2f_hero_pattern") + "::OnDisable");
	disablenpc(instance_npcname("ins_2f_hero_pattern_c"));
	end;

	OnTimer3600000:
	mapannounce(instance_mapname("2@cata"), "Bafom� : krrrr... Agora voc� n�o pode me parar por causa de um selo. Basta esperar pela sua morte!", bc_map, "0xdb7093");
	end;

	OnTimer3605000:
	mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Voc� n�o pode mais parar o Bafom� com os selos. Tudo agora depende de Deus...", bc_map, "0xFFFF00");
	donpcevent(instance_npcname("ins_2f_hero_pattern_c") + "::OnDisable");
	end;
}

// ------------------------------------------------------------------
2@cata,3,2,0	script	ins_2f_hero_pattern	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("ins_2f_hero_pattern"));
	end;

	OnEnable:
	enablenpc(instance_npcname("ins_2f_hero_pattern"));
	initnpctimer;
	end;

	OnDisable:
	disablenpc(instance_npcname("ins_2f_hero_pattern"));
	stopnpctimer;
	end;

	OnTimer70000:
	switch (rand(1, 5)) {
		case 1:
		mapannounce(instance_mapname("2@cata"), "Alma do Her�i : Meu Deus! O poder controlado pelo altar principal est� enfraquecendo!", bc_map, "0xFFFF00");
		enablenpc(instance_npcname("Selo M�gico#0"));
		disablenpc(instance_npcname("Selo M�gico#2"));
		disablenpc(instance_npcname("Selo M�gico#4"));
		disablenpc(instance_npcname("Selo M�gico#8"));
		disablenpc(instance_npcname("Selo M�gico#10"));
		break;
		case 2:
		mapannounce(instance_mapname("2@cata"), "Alma do Her�i : O poder do altar das 2 horas est� enfraquecendo. V� para o altar e reative-o.", bc_map, "0xFFFF00");
		disablenpc(instance_npcname("Selo M�gico#0"));
		enablenpc(instance_npcname("Selo M�gico#2"));
		disablenpc(instance_npcname("Selo M�gico#4"));
		disablenpc(instance_npcname("Selo M�gico#8"));
		disablenpc(instance_npcname("Selo M�gico#10"));
		break;
		case 3:
		mapannounce(instance_mapname("2@cata"), "Alma do Her�i : O poder do altar das 4 horas est� enfraquecendo. V� para o altar e reative-o.", bc_map, "0xFFFF00");
		disablenpc(instance_npcname("Selo M�gico#0"));
		disablenpc(instance_npcname("Selo M�gico#2"));
		enablenpc(instance_npcname("Selo M�gico#4"));
		disablenpc(instance_npcname("Selo M�gico#8"));
		disablenpc(instance_npcname("Selo M�gico#10"));
		break;
		case 4:
		mapannounce(instance_mapname("2@cata"), "Alma do Her�i : O poder do altar das 8 horas est� enfraquecendo. V� para o altar e reative-o.", bc_map, "0xFFFF00");
		disablenpc(instance_npcname("Selo M�gico#0"));
		disablenpc(instance_npcname("Selo M�gico#2"));
		disablenpc(instance_npcname("Selo M�gico#4"));
		enablenpc(instance_npcname("Selo M�gico#8"));
		disablenpc(instance_npcname("Selo M�gico#10"));
		break;
		case 5:
		mapannounce(instance_mapname("2@cata"), "Alma do Her�i : O poder do altar das 10 horas est� enfraquecendo. V� para o altar e reative-o.", bc_map, "0xFFFF00");
		disablenpc(instance_npcname("Selo M�gico#0"));
		disablenpc(instance_npcname("Selo M�gico#2"));
		disablenpc(instance_npcname("Selo M�gico#4"));
		disablenpc(instance_npcname("Selo M�gico#8"));
		enablenpc(instance_npcname("Selo M�gico#10"));
	}
	stopnpctimer;
	donpcevent(instance_npcname("ins_2f_hero_pattern_c") + "::OnGo");
	end;
}

// ------------------------------------------------------------------
1@cata,1,1,0	script	ins_1f_spawn_mobs	FAKE_NPC,{
	OnInstanceInit:
	.@map$ = instance_mapname("1@cata");
	monster(.@map$, 0, 0, "Zumbi Mestre", ZOMBIE_MASTER, 10);
	monster(.@map$, 0, 0, "Apari��o", WRAITH_DEAD, 10);
	monster(.@map$, 0, 0, "Cr�nio Flamejante", FLAME_SKULL, 10);
	monster(.@map$, 0, 0, "Esqueleto General", SKELETON_GENERAL, 10);
	monster(.@map$, 0, 0, "Zumbi Mestre", ZOMBIE_MASTER, 10);
	monster(.@map$, 0, 0, "Esqueleto General", SKELETON_GENERAL, 10);
	monster(.@map$, 0, 0, "Cr�nio Flamejante", FLAME_SKULL, 10);
	monster(.@map$, 0, 0, "Apari��o", WRAITH_DEAD, 10);
	monster(.@map$, 0, 0, "Apari��o", WRAITH_DEAD, 10);
	monster(.@map$, 0, 0, "Khalitzburg", KHALITZBURG, 10);
	monster(.@map$, 0, 0, "Khalitzburg", KHALITZBURG, 10);
	monster(.@map$, 0, 0, "Cr�nio Flamejante", FLAME_SKULL, 10);
	monster(.@map$, 0, 0, "Cr�nio Flamejante", FLAME_SKULL, 10);
	monster(.@map$, 0, 0, "M�mico Antigo", ANCIENT_MIMIC, 10);
	monster(.@map$, 0, 0, "Zumbi Mestre", ZOMBIE_MASTER, 10);
	monster(.@map$, 0, 0, "M�mico Antigo", ANCIENT_MIMIC, 10);
	monster(.@map$, 0, 0, "Zumbi Mestre", ZOMBIE_MASTER, 10);
	monster(.@map$, 0, 0, "Apari��o", WRAITH_DEAD, 10);
	monster(.@map$, 0, 0, "Esqueleto General", SKELETON_GENERAL, 10);
	monster(.@map$, 0, 0, "Esqueleto General", SKELETON_GENERAL, 10);
	monster(.@map$, 0, 0, "Xam� do Vento", WIND_GHOST, 10);
	monster(.@map$, 0, 0, "Xam� do Vento", WIND_GHOST, 10);
	monster(.@map$, 0, 0, "Xam� do Vento", WIND_GHOST, 10);
	monster(.@map$, 0, 0, "Lude", LUDE, 10);
	monster(.@map$, 0, 0, "Lude", LUDE, 10);
	monster(.@map$, 0, 0, "Druida Mal�gno", EVIL_DRUID, 10);
	monster(.@map$, 0, 0, "Druida Mal�gno", EVIL_DRUID, 10);
	monster(.@map$, 0, 0, "Druida Mal�gno", EVIL_DRUID, 10);
	monster(.@map$, 0, 0, "Banshee", BANSHEE, 10);
	monster(.@map$, 0, 0, "Ilus�o das Treva", DARK_ILLUSION, 1);
	disablenpc(instance_npcname("ins_1f_spawn_mobs"));
	end;
}
