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
| - Copyright: ?                                                    |
| - Version/Translate PT-BR: Spell Master                           |
| - Info: Aprendizagem das habilidades para arqueiros               |
|         Fabricar Flechas (AC_MAKINGARROW)                         |
|         Disparo Violento (AC_CHARGEARROW)                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ AC_MAKINGARROW ] -
// ------------------------------------------------------------------
moc_ruins,118,99,5	script	Roberto	4_M_ORIENT01,{
	if (BaseClass == Job_Archer) {
		if (getskilllv("AC_MAKINGARROW")) {
			mes("[Roberto]\n"
				"Ooh, voc� � da minha cidade natal!\n"
				"Estou feliz por ver voc�!\n"
				"Como voc� est�?\n"
				"Ah! Esta flecha!\n"
				"Voc� conseguiu!");
			next;
			mes("[Roberto]\n"
				"Haha...!\n"
				"N�o � muito melhor?\n"
				"Haha... de qualquer jeito, estou feliz.\n"
				"Volte aqui de vez em quando com novidades de casa.\n"
				"Adeus.");
			close;
		} else if (JobLevel >= 30 || (BaseJob == Job_Hunter || BaseJob == Job_Bard || BaseJob == Job_Dancer)) {
			mes("[Roberto]\n"
				"Eh!\n"
				" \n"
				"Voc� �...");
			next;
			if ((countitem(Resin) > 19) && (countitem(Mushroom_Spore) > 6) && (countitem(Pointed_Scale) > 40) && (countitem(Wooden_Block) > 12) && (countitem(Red_Potion))) {
				mes("[Roberto]\n"
					"Voc� trouxe os itens!\n"
					"Muito obrigado.\n"
					"Ent�o, como eu prometi, irei lhe ensinar a habilidade.");
				next;
				delitem(Resin, 20);
				delitem(Mushroom_Spore, 7);
				delitem(Pointed_Scale, 41);
				delitem(Wooden_Block, 13);
				delitem(Red_Potion, 1);
				skill("AC_MAKINGARROW", 1, 0);
				mes("[Roberto]\n"
					"N�o � preciso mais se preocupar com flechas.\n"
					"Oh, voc� viu algu�m chamado Jason em Payon?\n"
					"Cuidado.\n"
					"Ele se irrita facilmente.");
				next;
				mes("[Roberto]\n"
					"Voc� s� precisa ter cuidado com o Jason em Payon.\n"
					"Lembre-se.\n"
					"Adeus e obrigado pelos presentes.");
				close;
			}
			mes("[Roberto]\n"
				"Um arqueiro em Morroc!?\n"
				"Estou feliz em v�-lo!\n"
				"Conhecer um parceiro arqueiro em um lugar desses!\n"
				"*sniffsniff*!\n"
				"Eu vim s� para Morroc..\n"
				"E eu era um recem-chegado, e a press�o... waaah.\n"
				"Eu era muito solit�rio.");
			next;
			switch (select("Deve ter sido dif�cil...", "Continue sofrendo")) {
				case 1:
				mes("[Roberto]\n"
					"Sim. Obrigado.\n"
					"Voc� deve estar tendo dias dif�ceis em um lugar desses.\n"
					"N�o � dif�cil achar flechas?\n"
					"� por isso que eu mesmo fa�o as minhas.");
				next;
				select("� s�rio?!");
				mes("[Roberto]\n"
					"Sim! Eu pego diferentes itens e fa�o flecha usando-os.\n"
					"� uma habilidade muito �til para me ajudar a sobreviver sozinho neste mundo t�o dif�cil.\n"
					"Se voc� quiser, eu posso lhe ensinar.");
				next;
				select("Seria �timo.");
				mes("[Roberto]\n"
					"Mas.. mas eu n�o posso fazer isso de gra�a.\n"
					"Nada � de gra�a neste mundo.\n"
					"Mmm... que tal isso?\n"
					"Voc� me traz o que eu pedir e eu lhe ensino a habilidade.");
				next;
				mes("[Roberto]\n"
					"Eu tenho estado muito s� desde que deixei minha cidade natal.\n"
					"Eu gostaria de acabar com essa sensa��o de solid�o com coisas de l�.\n"
					"Me traga 20 Resinas das �rvores da floresta de Payon e 1 Po��o Vermelha que � vendida nas lojas.");
				next;
				mes("[Roberto]\n"
					"E tamb�m, 13 troncos dos Salgueiros que vivem perto da floresta de Payon.\n"
					"41 Peda�os de Escama Dura,\n"
					"07 Esporos de Cogumelos.\n"
					"Se voc� me trouxer todos esses itens.");
				next;
				mes("[Roberto]\n"
					"Eu lhe ensinarei esta habilidade.\n"
					"Estarei esperando novidades da nossa cidade.");
				close;
				case 2:
				mes("[Roberto]\n"
					"...Ei " + ((Sex == SEX_MALE) ? "senhora" : "senhor")+".\n"
					"...Tenha cuidado � noite..");
				close;
			}
		}
		mes("[Roberto]\n"
			"Hmm... Voc� tem?\n"
			"Algo para falar?\n"
			"Eu,\n"
			"N�o tenho nada para falar.\n"
			"A diferen�a de n�vel cortou a conversa.");
		close;
	}
	mes("[?]\n"
		"Eh... � a primeira vez que voc� ve um arqueiro ou parecido?\n"
		"Apenas v� para onde voc� est� indo.\n"
		"Eu s� falo com arqueiros de alto n�vel.\n"
		"Ou n�o abro minha boca para nada!");
	close;
}

// ------------------------------------------------------------------
// - [ AC_CHARGEARROW ] -
// ------------------------------------------------------------------
payon,103,63,3	script	Jason	4_M_ORIENT01,3,3,{
	if (BaseClass == Job_Archer) {
		if (getskilllv("AC_CHARGEARROW")) {
			mes("[Jason]\n"
				"Eh, nos encontramos denovo.\n"
				"Ehhhh t�o esquisito.\n"
				"Sempre eu vejo algu�m denovo eu come�o a falar muito 'Ehh'.\n"
				"Ehhh... de qualquer jeito, gostei de v�-lo.\n"
				"Ehhhh... n�o venha aqui ehh...");
			close;
		} else if (JobLevel >= 35 || (BaseJob == Job_Hunter || BaseJob == Job_Bard || BaseJob == Job_Dancer)) {
			mes("[Jason]\n"
				"Droga... minha ferida n�o est� sarando.\n"
				"Bleh.. Eu fui muito descuidado... \n"
				"para ficar deste jeito.. err...\n"
				"Mas assim, me machucando deste jeito me dando tantas les�es...");
			next;
			mes("[Jason]\n"
				"O que eu devo fazer sobre o Roberto.\n"
				"Mmmm... Ah!\n"
				"Voc�? Faz quanto tempo que voc� esteve l�?\n"
				"Mmm... n�vel muito alto.\n"
				"Algu�m como voc� com certeza deve estar preparado para usar Disparo Violento.");
			next;
			switch (select("O que � isso?", "Me ensine")) {
				case 1:
				mes("[Jason]\n"
					"...voc� est� brincando n�?\n"
					"Meu Deus, voc� n�o sabe o que �\n"
					"Disparo Violento neste n�vel?\n"
					"Voc� � estranho.");
				next;
				mes("[Jason]\n"
					"(Jason estava na Lua.)");
				next;
				mes("[Jason]\n"
					"Bem, ok. Eu vou lhe falar o que � Disparo Violento");
				next;
				mes("[Jason]\n"
					"Disparo Violento � uma habilidade que empurra o inimigo, afastando de ele de voc�.\n"
					"Voc� s� pode usar quando mirar exatamente no alvo.\n"
					"Mas diferente de magias, ela n�o pode ser refletida.");
				next;
				mes("[Jason]\n"
					"� muito �til para arqueiros que s�o fracos em lutas de alcance curto.\n"
					"Se voc� quiser aprender fale comigo depois.\n"
					"� preciso algumas coisas.");
				next;
				mes("[Jason]\n"
					"Primeiro, porque voc� precisa de um arco modificado traga uma besta que voc� n�o use.\n"
					"10 Tent�culos, 10 Bicos de Aves,\n"
					"3 Caudas de Yoyos.. s�o bastante el�sticas.\n"
					"E tamb�m, 2 Esmeraldas. E por �ltimo...\n"
					"36 gararfas de Suco de Banana que eu amo!");
				next;
				mes("[Jason]\n"
					"......Ehem!\n"
					"Se voc� me trouxer todos os itens,\n"
					"Eu lhe ensinarei Disparo Violento.\n"
					"Te vejo mais tarde.\n"
					"(Eu vou ficar irritado se voc� n�o trouxer o suco de banana.)");
				close;
				case 2:
				if ((countitem(Azure_Jewel) > 1) && (countitem(Yoyo_Tail) > 2) && (countitem(Tentacle) > 9) && (countitem(Bill_Of_Birds) > 9) && (countitem(Banana_Juice) > 35)) {
					mes("[Jason]\n"
						"Ok! Perfeito!\n"
						"Eu lhe ensinarei a habilidade Disparo Violento!");
					next;
					delitem(Azure_Jewel, 2);
					delitem(Yoyo_Tail, 3);
					delitem(Tentacle, 10);
					delitem(Bill_Of_Birds, 10);
					delitem(Banana_Juice, 36);
					skill("AC_CHARGEARROW", 1, 0);
					mes("[Jason]\n"
						"Oh, est� funcionando melhor do que eu esperava.\n"
						"N�o ser� necess�rio modificar o arco!\n"
						"Aproveite a habilidade nos campos e calabou�os!\n"
						"He.heh.!");
					close;
				}
				mes("[Jason]\n"
					"Mmm... que pena.\n"
					"Est� faltando alguns itens.\n"
					"Denovo, voc� precisa de 2 Esmeraldas,\n"
					"3 Caudas de Yoyo, 10 Tent�culos,\n"
					"10 Bicos de Aves, e por �ltimo\n"
					"36 garrafas de Suco de Banana!");
				next;
				mes("[Jason]\n"
					"Assim que pegar os itens faltando, volte aqui!");
				close;
			}
		}
		mes("[Jason]\n"
			"Ooh... voc� � um arqueiro.\n"
			"Se voc� tentar um pouco mais voc� ter� uma �tima reputa��o como um arqueiro!");
		close;
	}
	mes("[?]\n"
		"O que a vida quer de um rapaz solit�rio como eu?");
	close;

	OnTouch:
	mes("[???]\n"
		"Errrrrrr...");
	close;
}
