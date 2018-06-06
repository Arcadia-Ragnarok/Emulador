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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest da habilidade Fabricar Flechas (AC_MAKINGARROW) e   |
| Disparo Violento (AC_CHARGEARROW) para arqueiros                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ AC_MAKINGARROW ] -
// ------------------------------------------------------------------
moc_ruins,118,99,5	script	Roberto	4_M_ORIENT01,{
	if (BaseClass == Job_Archer) {
		if (getskilllv("AC_MAKINGARROW")) {
			mes "[Roberto]";
			mes "Ooh, você é da minha cidade natal!";
			mes "Estou feliz por ver você!";
			mes "Como você está?";
			mes "Ah! Esta flecha!";
			mes "Você conseguiu!";
			next;
			mes "[Roberto]";
			mes "Haha...!";
			mes "Não é muito melhor?";
			mes "Haha... de qualquer jeito, estou feliz.";
			mes "Volte aqui de vez em quando com novidades de casa.";
			mes "Adeus.";
			close;
		} else if (JobLevel >= 30 || (BaseJob == Job_Hunter || BaseJob == Job_Bard || BaseJob == Job_Dancer)) {
			mes "[Roberto]";
			mes "Eh!";
			mes " ";
			mes "Você é...";
			next;
			if ((countitem(Resin) > 19) && (countitem(Mushroom_Spore) > 6) && (countitem(Pointed_Scale) > 40) && (countitem(Wooden_Block) > 12) && (countitem(Red_Potion) > 0)) {
				mes "[Roberto]";
				mes "Você trouxe os itens!";
				mes "Muito obrigado.";
				mes "Então, como eu prometi, irei lhe ensinar a habilidade.";
				next;
				delitem(Resin,20);
				delitem(Mushroom_Spore,7);
				delitem(Pointed_Scale,41);
				delitem(Wooden_Block,13);
				delitem(Red_Potion,1);
				skill("AC_MAKINGARROW",1,0);
				mes "Não é preciso mais se preocupar com flechas.";
				mes "Oh, você viu alguém chamado Jason em Payon?";
				mes "Cuidado.";
				mes "Ele se irrita facilmente.";
				next;
				mes "[Roberto]";
				mes "Você só precisa ter cuidado com o Jason em Payon.";
				mes "Lembre-se.";
				mes "Adeus e obrigado pelos presentes.";
				close;
			}
			mes "[Roberto]";
			mes "Um arqueiro em Morroc!?";
			mes "Estou feliz em vê-lo!";
			mes "Conhecer um parceiro arqueiro em um lugar desses!";
			mes "*sniffsniff*!";
			mes "Eu vim só para Morroc..";
			mes "E eu era um recem-chegado, e a pressão... waaah.";
			mes "Eu era muito solitário.";
			next;
			switch (select("Deve ter sido difícil...","Continue sofrendo")) {
				case 1:
				mes "[Roberto]";
				mes "Sim. Obrigado.";
				mes "Você deve estar tendo dias difíceis em um lugar desses.";
				mes "Não é difícil achar flechas?";
				mes "É por isso que eu mesmo faço as minhas.";
				next;
				select("É sério?!");
				mes "[Roberto]";
				mes "Sim! Eu pego diferentes itens e faço flecha usando-os.";
				mes "É uma habilidade muito útil para me ajudar a sobreviver sozinho neste mundo tão difícil.";
				mes "Se você quiser, eu posso lhe ensinar.";
				next;
				select("Seria ótimo.");
				mes "[Roberto]";
				mes "Mas.. mas eu não posso fazer isso de graça.";
				mes "Nada é de graça neste mundo.";
				mes "Mmm... que tal isso?";
				mes "Você me traz o que eu pedir e eu lhe ensino a habilidade.";
				next;
				mes "[Roberto]";
				mes "Eu tenho estado muito só desde que deixei minha cidade natal.";
				mes "Eu gostaria de acabar com essa sensação de solidão com coisas de lá.";
				mes "Me traga 20 Resinas das árvores da floresta de Payon e 1 Poção Vermelha que é vendida nas lojas.";
				next;
				mes "[Roberto]";
				mes "E também, 13 troncos dos Salgueiros que vivem perto da floresta de Payon.";
				mes "41 Pedaços de Escama Dura,";
				mes "07 Esporos de Cogumelos.";
				mes "Se você me trouxer todos esses itens.";
				next;
				mes "[Roberto]";
				mes "Eu lhe ensinarei esta habilidade.";
				mes "Estarei esperando novidades da nossa cidade.";
				close;
				case 2:
				mes "[Roberto]";
				mes "...Ei "+((Sex == SEX_MALE)?"senhora":"senhor")+".";
				mes "...Tenha cuidado á noite..";
				close;
			}
		}
		mes "[Roberto]";
		mes "Hmm... Você tem?";
		mes "Algo para falar?";
		mes "Eu,";
		mes "Não tenho nada para falar.";
		mes "A diferença de nível cortou a conversa.";
		close;
	}
	mes "[?]";
	mes "Eh... É a primeira vez que você ve um arqueiro ou parecido?";
	mes "Apenas vá para onde você está indo.";
	mes "Eu só falo com arqueiros de alto nível.";
	mes "Ou não abro minha boca para nada!";
	close;
}

// ------------------------------------------------------------------
// - [ AC_CHARGEARROW ] -
// ------------------------------------------------------------------
payon,103,63,3	script	Jason	4_M_ORIENT01,3,3,{
	if (BaseClass == Job_Archer) {
		if (getskilllv("AC_CHARGEARROW")) {
			mes "[Jason]";
			mes "Eh, nos encontramos denovo.";
			mes "Ehhhh tão esquisito.";
			mes "Sempre eu vejo alguém denovo eu começo a falar muito 'Ehh'.";
			mes "Ehhh... de qualquer jeito, gostei de vê-lo.";
			mes "Ehhhh... não venha aqui ehh...";
			close;
		} else if (JobLevel >= 35 || (BaseJob == Job_Hunter || BaseJob == Job_Bard || BaseJob == Job_Dancer)) {
			mes "[Jason]";
			mes "Droga... minha ferida não está sarando.";
			mes "Bleh.. Eu fui muito descuidado... ";
			mes "para ficar deste jeito.. err...";
			mes "Mas assim, me machucando deste jeito me dando tantas lesões...";
			next;
			mes "[Jason]";
			mes "O que eu devo fazer sobre o Roberto.";
			mes "Mmmm... Ah!";
			mes "Você? Faz quanto tempo que você esteve lá?";
			mes "Mmm... nível muito alto.";
			mes "Alguém como você com certeza deve estar preparado para usar Disparo Violento.";
			next;
			switch (select("O que é isso?","Me ensine")) {
				case 1:
				mes "[Jason]";
				mes "...você está brincando né?";
				mes "Meu Deus, você não sabe o que é";
				mes "Disparo Violento neste nível?";
				mes "Você é estranho.";
				next;
				mes "[Jason]";
				mes "(Jason estava na Lua.)";
				next;
				mes "[Jason]";
				mes "Bem, ok. Eu vou lhe falar o que é Disparo Violento";
				next;
				mes "[Jason]";
				mes "Disparo Violento é uma habilidade que empurra o inimigo, afastando de ele de você.";
				mes "Você só pode usar quando mirar exatamente no alvo.";
				mes "Mas diferente de magias, ela não pode ser refletida.";
				next;
				mes "[Jason]";
				mes "É muito útil para arqueiros que são fracos em lutas de alcance curto.";
				mes "Se você quiser aprender fale comigo depois.";
				mes "É preciso algumas coisas.";
				next;
				mes "[Jason]";
				mes "Primeiro, porque você precisa de um arco modificado traga uma besta que você não use.";
				mes "10 Tentáculos, 10 Bicos de Aves,";
				mes "3 Caudas de Yoyos.. são bastante elásticas.";
				mes "E também, 2 Esmeraldas. E por último...";
				mes "36 gararfas de Suco de Banana que eu amo!";
				next;
				mes "[Jason]";
				mes "......Ehem!";
				mes "Se você me trouxer todos os itens,";
				mes "Eu lhe ensinarei Disparo Violento.";
				mes "Te vejo mais tarde.";
				mes "(Eu vou ficar irritado se você não trouxer o suco de banana.)";
				close;
				case 2:
				if ((countitem(Azure_Jewel) > 1) && (countitem(Yoyo_Tail) > 2) && (countitem(Tentacle) > 9) && (countitem(Bill_Of_Birds) > 9) && (countitem(Banana_Juice) > 35)) {
					mes "[Jason]";
					mes "Ok! Perfeito!";
					mes "Eu lhe ensinarei a habilidade Disparo Violento!";
					next;
					delitem(Azure_Jewel,2);
					delitem(Yoyo_Tail,3);
					delitem(Tentacle,10);
					delitem(Bill_Of_Birds,10);
					delitem(Banana_Juice,36);
					skill("AC_CHARGEARROW",1,0);
					mes "[Jason]";
					mes "Oh, está funcionando melhor do que eu esperava.";
					mes "Não será necessário modificar o arco!";
					mes "Aproveite a habilidade nos campos e calabouços!";
					mes "He.heh.!";
					close;
				}
				mes "[Jason]";
				mes "Mmm... que pena.";
				mes "Está faltando alguns itens.";
				mes "Denovo, você precisa de 2 Esmeraldas,";
				mes "3 Caudas de Yoyo, 10 Tentáculos,";
				mes "10 Bicos de Aves, e por último";
				mes "36 garrafas de Suco de Banana!";
				next;
				mes "[Jason]";
				mes "Assim que pegar os itens faltando, volte aqui!";
				close;
			}
		}
		mes "[Jason]";
		mes "Ooh... você é um arqueiro.";
		mes "Se você tentar um pouco mais você terá uma ótima reputação como um arqueiro!";
		close;
	}
	mes "[?]";
	mes "O que a vida quer de um rapaz solitário como eu?";
	close;

	OnTouch:
	mes "[???]";
	mes "Errrrrrr...";
	close;
}
