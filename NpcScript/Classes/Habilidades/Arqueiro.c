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
				"Ooh, você é da minha cidade natal!\n"
				"Estou feliz por ver você!\n"
				"Como você está?\n"
				"Ah! Esta flecha!\n"
				"Você conseguiu!");
			next;
			mes("[Roberto]\n"
				"Haha...!\n"
				"Não é muito melhor?\n"
				"Haha... de qualquer jeito, estou feliz.\n"
				"Volte aqui de vez em quando com novidades de casa.\n"
				"Adeus.");
			close;
		} else if (JobLevel >= 30 || (BaseJob == Job_Hunter || BaseJob == Job_Bard || BaseJob == Job_Dancer)) {
			mes("[Roberto]\n"
				"Eh!\n"
				" \n"
				"Você é...");
			next;
			if ((countitem(Resin) > 19) && (countitem(Mushroom_Spore) > 6) && (countitem(Pointed_Scale) > 40) && (countitem(Wooden_Block) > 12) && (countitem(Red_Potion))) {
				mes("[Roberto]\n"
					"Você trouxe os itens!\n"
					"Muito obrigado.\n"
					"Então, como eu prometi, irei lhe ensinar a habilidade.");
				next;
				delitem(Resin, 20);
				delitem(Mushroom_Spore, 7);
				delitem(Pointed_Scale, 41);
				delitem(Wooden_Block, 13);
				delitem(Red_Potion, 1);
				skill("AC_MAKINGARROW", 1, 0);
				mes("[Roberto]\n"
					"Não é preciso mais se preocupar com flechas.\n"
					"Oh, você viu alguém chamado Jason em Payon?\n"
					"Cuidado.\n"
					"Ele se irrita facilmente.");
				next;
				mes("[Roberto]\n"
					"Você só precisa ter cuidado com o Jason em Payon.\n"
					"Lembre-se.\n"
					"Adeus e obrigado pelos presentes.");
				close;
			}
			mes("[Roberto]\n"
				"Um arqueiro em Morroc!?\n"
				"Estou feliz em vê-lo!\n"
				"Conhecer um parceiro arqueiro em um lugar desses!\n"
				"*sniffsniff*!\n"
				"Eu vim só para Morroc..\n"
				"E eu era um recem-chegado, e a pressão... waaah.\n"
				"Eu era muito solitário.");
			next;
			switch (select("Deve ter sido difícil...", "Continue sofrendo")) {
				case 1:
				mes("[Roberto]\n"
					"Sim. Obrigado.\n"
					"Você deve estar tendo dias difíceis em um lugar desses.\n"
					"Não é difícil achar flechas?\n"
					"É por isso que eu mesmo faço as minhas.");
				next;
				select("É sério?!");
				mes("[Roberto]\n"
					"Sim! Eu pego diferentes itens e faço flecha usando-os.\n"
					"É uma habilidade muito útil para me ajudar a sobreviver sozinho neste mundo tão difícil.\n"
					"Se você quiser, eu posso lhe ensinar.");
				next;
				select("Seria ótimo.");
				mes("[Roberto]\n"
					"Mas.. mas eu não posso fazer isso de graça.\n"
					"Nada é de graça neste mundo.\n"
					"Mmm... que tal isso?\n"
					"Você me traz o que eu pedir e eu lhe ensino a habilidade.");
				next;
				mes("[Roberto]\n"
					"Eu tenho estado muito só desde que deixei minha cidade natal.\n"
					"Eu gostaria de acabar com essa sensação de solidão com coisas de lá.\n"
					"Me traga 20 Resinas das árvores da floresta de Payon e 1 Poção Vermelha que é vendida nas lojas.");
				next;
				mes("[Roberto]\n"
					"E também, 13 troncos dos Salgueiros que vivem perto da floresta de Payon.\n"
					"41 Pedaços de Escama Dura,\n"
					"07 Esporos de Cogumelos.\n"
					"Se você me trouxer todos esses itens.");
				next;
				mes("[Roberto]\n"
					"Eu lhe ensinarei esta habilidade.\n"
					"Estarei esperando novidades da nossa cidade.");
				close;
				case 2:
				mes("[Roberto]\n"
					"...Ei " + ((Sex == SEX_MALE) ? "senhora" : "senhor")+".\n"
					"...Tenha cuidado á noite..");
				close;
			}
		}
		mes("[Roberto]\n"
			"Hmm... Você tem?\n"
			"Algo para falar?\n"
			"Eu,\n"
			"Não tenho nada para falar.\n"
			"A diferença de nível cortou a conversa.");
		close;
	}
	mes("[?]\n"
		"Eh... É a primeira vez que você ve um arqueiro ou parecido?\n"
		"Apenas vá para onde você está indo.\n"
		"Eu só falo com arqueiros de alto nível.\n"
		"Ou não abro minha boca para nada!");
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
				"Ehhhh tão esquisito.\n"
				"Sempre eu vejo alguém denovo eu começo a falar muito 'Ehh'.\n"
				"Ehhh... de qualquer jeito, gostei de vê-lo.\n"
				"Ehhhh... não venha aqui ehh...");
			close;
		} else if (JobLevel >= 35 || (BaseJob == Job_Hunter || BaseJob == Job_Bard || BaseJob == Job_Dancer)) {
			mes("[Jason]\n"
				"Droga... minha ferida não está sarando.\n"
				"Bleh.. Eu fui muito descuidado... \n"
				"para ficar deste jeito.. err...\n"
				"Mas assim, me machucando deste jeito me dando tantas lesões...");
			next;
			mes("[Jason]\n"
				"O que eu devo fazer sobre o Roberto.\n"
				"Mmmm... Ah!\n"
				"Você? Faz quanto tempo que você esteve lá?\n"
				"Mmm... nível muito alto.\n"
				"Alguém como você com certeza deve estar preparado para usar Disparo Violento.");
			next;
			switch (select("O que é isso?", "Me ensine")) {
				case 1:
				mes("[Jason]\n"
					"...você está brincando né?\n"
					"Meu Deus, você não sabe o que é\n"
					"Disparo Violento neste nível?\n"
					"Você é estranho.");
				next;
				mes("[Jason]\n"
					"(Jason estava na Lua.)");
				next;
				mes("[Jason]\n"
					"Bem, ok. Eu vou lhe falar o que é Disparo Violento");
				next;
				mes("[Jason]\n"
					"Disparo Violento é uma habilidade que empurra o inimigo, afastando de ele de você.\n"
					"Você só pode usar quando mirar exatamente no alvo.\n"
					"Mas diferente de magias, ela não pode ser refletida.");
				next;
				mes("[Jason]\n"
					"É muito útil para arqueiros que são fracos em lutas de alcance curto.\n"
					"Se você quiser aprender fale comigo depois.\n"
					"É preciso algumas coisas.");
				next;
				mes("[Jason]\n"
					"Primeiro, porque você precisa de um arco modificado traga uma besta que você não use.\n"
					"10 Tentáculos, 10 Bicos de Aves,\n"
					"3 Caudas de Yoyos.. são bastante elásticas.\n"
					"E também, 2 Esmeraldas. E por último...\n"
					"36 gararfas de Suco de Banana que eu amo!");
				next;
				mes("[Jason]\n"
					"......Ehem!\n"
					"Se você me trouxer todos os itens,\n"
					"Eu lhe ensinarei Disparo Violento.\n"
					"Te vejo mais tarde.\n"
					"(Eu vou ficar irritado se você não trouxer o suco de banana.)");
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
						"Oh, está funcionando melhor do que eu esperava.\n"
						"Não será necessário modificar o arco!\n"
						"Aproveite a habilidade nos campos e calabouços!\n"
						"He.heh.!");
					close;
				}
				mes("[Jason]\n"
					"Mmm... que pena.\n"
					"Está faltando alguns itens.\n"
					"Denovo, você precisa de 2 Esmeraldas,\n"
					"3 Caudas de Yoyo, 10 Tentáculos,\n"
					"10 Bicos de Aves, e por último\n"
					"36 garrafas de Suco de Banana!");
				next;
				mes("[Jason]\n"
					"Assim que pegar os itens faltando, volte aqui!");
				close;
			}
		}
		mes("[Jason]\n"
			"Ooh... você é um arqueiro.\n"
			"Se você tentar um pouco mais você terá uma ótima reputação como um arqueiro!");
		close;
	}
	mes("[?]\n"
		"O que a vida quer de um rapaz solitário como eu?");
	close;

	OnTouch:
	mes("[???]\n"
		"Errrrrrr...");
	close;
}
