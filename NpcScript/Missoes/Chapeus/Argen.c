/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quet para                                            |
| * Presilha de X                                                   |
| * Curativo Gigante                                                |
| * Presilha de Flor                                                |
\*-----------------------------------------------------------------*/

geffen,129,148,3	script	Argen#gef	4_M_YOYOROGUE,{
	mes "[Argen]";
	mes "Ahhh! Aborrecida! Estou muito aborrecida!";
	mes "Não há ninguém que eu preciso ver, e o tempo esta tão bom!";
	mes "Estou aborrecida asim por que não tenho nada pra fazer.";
	emotion(e_gasp);
	next;
	mes "[Argen]";
	mes "Oh sim, hei! Você!!";
	mes "VOcê quer ter um grampo pra cabelo?";
	mes "Para uma pessoa tão hábil como eu, não há nada que eu não posso fazer!! Ua haha!";
	mes "Clap ! Estará pronto logo, como este.";
	emotion(e_omg);
	next;
	mes "[Argen]";
	mes "Afortunada. Eu sou livre certamente agora. Então, traga-me os materiais e eu irei cria-lo para você!";
	mes "Então, alguma idéia de que acessório você gostaria de ter?";
	emotion(e_heh);
	next;
	switch (select("Presilha de X","Curativo Gigante","Presilha de Flor","Terminar Conversa.")) {
		case 1:
		if ((countitem(Star_Dust) > 0) && (countitem(Ectoplasm) > 399)) {
			mes "[Argen]";
			mes "Presilha de X!";
			mes "Elá é realmente ótima!!";
			next;
			mes "[Argen]";
			mes "Oh sim!";
			mes "^CE3100Durante a produção, o Nível de Refinamento desaparecerá, está tudo bem apra você?^000000";
			next;
			switch (select("Tudo certo, faça isto logo para mim!","Eu vou voltar em outra hora.")) {
				case 1:
				mes "[Argen]";
				mes "Oh bem. Então,";
				mes "é hora de mostrar minha habilidade após toda esta conversa!";
				next;
				mes "^3131FF - Sha Sha !! - ^000000";
				mes "^3131FF - Cha Sha Haa  !! - ^000000";
				next;
				if ((countitem(Star_Dust) > 0) && (countitem(Ectoplasm) > 399)) {
					if (!checkweight(Crossed_Hair_Band,1)) {
						mes "[Argen]";
						mes "No momento você está carregando muito peso.";
						mes "Guarde alguns de seus itens no armazém depois venha falar comigo novamente.";
						close;
					}
					delitem(Star_Dust,1);
					delitem(Ectoplasm,400);
					getitem(Crossed_Hair_Band,1);
					mes "[Argen]";
					mes "Tome ai a Presilha de X! Ela é realmente ótima!";
				} else {
					mes "[Argen]";
					mes "Parece que você não tem os materiais.";
				}
				next;
				mes "[Argen]";
				mes "Se você tiver alguma necessidade, venha aqui me encontrar a qualquer hora!";
				mes "Então, até mais.";
				close;
				case 2:
				mes "[Argen]";
				mes "Certo, certo, volte aqui quando estiver pronto!";
				close;
			}
		} else {
			mes "[Argen]";
			mes "Certo - a ^3131FFPresilha de X!^000000";
			mes "É simples!";
			next;
			mes "[Argen]";
			mes "1 ^FF0000Presilha de Estrela^000000";
			mes "400 ^FF0000Ectoplasma^000000";
			mes "Se você tiver preparado tudo isto, eu irei ajudar a criar isto para você!";
			close;
		}
		case 2:
		if (countitem(Alchol) > 0) && (countitem(Rotten_Bandage) > 499) {
			mes "[Argen]";
			mes "Curativo Gigante??..";
			mes "Oh bem. Então,";
			mes "é hora de mostrar minha habilidade após toda esta conversa!";
			next;
			mes "^3131FF - Sha Sha !! - ^000000";
			mes "^3131FF - Cha Sha Haa  !! - ^000000";
			next;
			if (countitem(Alchol) > 0) && (countitem(Rotten_Bandage) > 499) {
				delitem(Alchol,1);
				delitem(Rotten_Bandage,500);
				getitem(Plaster,1);
				mes "[Argen]";
				mes "Tome ai o Curativo Gigante! Ele é realmente ótimo!";
			} else {
				mes "[Argen]";
				mes "Parece que você não tem os materiais.";
			}
			next;
			mes "[Argen]";
			mes "Se você tiver alguma necessidade, venha aqui me encontrar a qualquer hora!";
			mes "Então, até mais.";
			close;
		} else {
			mes "[Argen]";
			mes "Hoho! ^3131FF Curativo Gicante!^000000";
			mes "Se alguém perguntar, onde é que está este curativo quando algúem é ferido.";
			mes "Diga-os que este é o verdadeiro curativo para as pessoas feridas.";
			mes "Hmm, não é facil?";
			next;
			mes "[Argen]";
			mes "1 ^FF0000Ácool ^000000 e";
			mes "500 ^FF0000Bandagens Estragadas^000000";
			mes "Se você tiver preparado todos os itens, eu irei ajudar a criar isto para você!";
			close;
		}
		case 3:
		if ((countitem(Centimental_Flower) > 0) & (countitem(Steel) > 9) & (Zeny > 19999)) {
			mes "[Argen]";
			mes "Ótimo!! Presilha de Flor!";
			mes "É hora de mostrar minha habilidade após toda esta conversa!";
			next;
			mes "^3131FF - Sha Sha !! - ^000000";
			mes "^3131FF - Cha Sha Haa  !! - ^000000";
			next;
			if ((countitem(Centimental_Flower) > 0) & (countitem(Steel) > 9) & (Zeny > 19999)) {
				delitem(Centimental_Flower,1);
				delitem(Steel,10);
				Zeny -= 20000;
				getitem(Flower_Hairpin,1);
				mes "[Argen]";
				mes "Tome ai a Presilha de Flor! Ela é realmente ótima!";
			} else {
				mes "[Argen]";
				mes "Parece que você não tem os materiais.";
			}
			next;
			mes "[Argen]";
			mes "Se você tiver alguma necessidade, venha aqui me encontrar a qualquer hora!";
			mes "Então, até mais.";
			close;
		} else {
			mes "[Argen]";
			mes "Sim - ^3131FFPresilha de Flor!^000000";
			mes "Às vezes, eu vejo umas garotas com pés descalsos e uma flor em suas bocas.";
			mes "Observando-as, eu tive uma idéia!";
			next;
			mes "[Argen]";
			mes "^3131FFFlor^000000, ^3131FFFlor^000000!";
			mes "Ua ha ha, não é que é uma idéia perfeita?";
			mes "Some even equip it on the Orc Warrior, you should be proud of it, right?";
			mes "Verdade...";
			next;
			mes "[Argen]";
			mes "Mas o processo precisa de um pouco mais de esforço,";
			mes "I need to take some process fee.";
			next;
			mes "[Argen]";
			mes "Você deve saber que,";
			mes "preciso estabilizar uma frágil flor na cabeça";
			mes "tendo muita concentração";
			mes "e muita habilidade.";
			next;
			mes "[Argen]";
			mes "Então, traga pro favor,";
			mes "1 ^FF0000Flor Romântica^000000";
			mes "10 ^FF0000Aços^000000";
			mes "junto com ^3131FF20,000 zeny^000000!";
			mes "Se você preparar todos os itens, eu irei criar o item para você!";
			mes "Você entendeu?";
			close;
		}
		case 4:
		mes "[Argen]";
		mes "Ha, o que? Você não quer nenhum?";
		mes "Rumblerumblerumble";
		close;
	}
}
