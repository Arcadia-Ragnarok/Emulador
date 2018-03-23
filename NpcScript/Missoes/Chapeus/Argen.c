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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quet para                                            |
| * Presilha de X                                                   |
| * Curativo Gigante                                                |
| * Presilha de Flor                                                |
\*-----------------------------------------------------------------*/

geffen,129,148,3	script	Argen#gef	4_M_YOYOROGUE,{
	mes "[Argen]";
	mes "Ahhh! Aborrecida! Estou muito aborrecida!";
	mes "N�o h� ningu�m que eu preciso ver, e o tempo esta t�o bom!";
	mes "Estou aborrecida asim por que n�o tenho nada pra fazer.";
	emotion(e_gasp);
	next;
	mes "[Argen]";
	mes "Oh sim, hei! Voc�!!";
	mes "VOc� quer ter um grampo pra cabelo?";
	mes "Para uma pessoa t�o h�bil como eu, n�o h� nada que eu n�o posso fazer!! Ua haha!";
	mes "Clap ! Estar� pronto logo, como este.";
	emotion(e_omg);
	next;
	mes "[Argen]";
	mes "Afortunada. Eu sou livre certamente agora. Ent�o, traga-me os materiais e eu irei cria-lo para voc�!";
	mes "Ent�o, alguma id�ia de que acess�rio voc� gostaria de ter?";
	emotion(e_heh);
	next;
	switch (select("Presilha de X","Curativo Gigante","Presilha de Flor","Terminar Conversa.")) {
		case 1:
		if ((countitem(Star_Dust) > 0) && (countitem(Ectoplasm) > 399)) {
			mes "[Argen]";
			mes "Presilha de X!";
			mes "El� � realmente �tima!!";
			next;
			mes "[Argen]";
			mes "Oh sim!";
			mes "^CE3100Durante a produ��o, o N�vel de Refinamento desaparecer�, est� tudo bem apra voc�?^000000";
			next;
			switch (select("Tudo certo, fa�a isto logo para mim!","Eu vou voltar em outra hora.")) {
				case 1:
				mes "[Argen]";
				mes "Oh bem. Ent�o,";
				mes "� hora de mostrar minha habilidade ap�s toda esta conversa!";
				next;
				mes "^3131FF - Sha Sha !! - ^000000";
				mes "^3131FF - Cha Sha Haa  !! - ^000000";
				next;
				if ((countitem(Star_Dust) > 0) && (countitem(Ectoplasm) > 399)) {
					if (!checkweight(Crossed_Hair_Band,1)) {
						mes "[Argen]";
						mes "No momento voc� est� carregando muito peso.";
						mes "Guarde alguns de seus itens no armaz�m depois venha falar comigo novamente.";
						close;
					}
					delitem(Star_Dust,1);
					delitem(Ectoplasm,400);
					getitem(Crossed_Hair_Band,1);
					mes "[Argen]";
					mes "Tome ai a Presilha de X! Ela � realmente �tima!";
				} else {
					mes "[Argen]";
					mes "Parece que voc� n�o tem os materiais.";
				}
				next;
				mes "[Argen]";
				mes "Se voc� tiver alguma necessidade, venha aqui me encontrar a qualquer hora!";
				mes "Ent�o, at� mais.";
				close;
				case 2:
				mes "[Argen]";
				mes "Certo, certo, volte aqui quando estiver pronto!";
				close;
			}
		} else {
			mes "[Argen]";
			mes "Certo - a ^3131FFPresilha de X!^000000";
			mes "� simples!";
			next;
			mes "[Argen]";
			mes "1 ^FF0000Presilha de Estrela^000000";
			mes "400 ^FF0000Ectoplasma^000000";
			mes "Se voc� tiver preparado tudo isto, eu irei ajudar a criar isto para voc�!";
			close;
		}
		case 2:
		if (countitem(Alchol) > 0) && (countitem(Rotten_Bandage) > 499) {
			mes "[Argen]";
			mes "Curativo Gigante??..";
			mes "Oh bem. Ent�o,";
			mes "� hora de mostrar minha habilidade ap�s toda esta conversa!";
			next;
			mes "^3131FF - Sha Sha !! - ^000000";
			mes "^3131FF - Cha Sha Haa  !! - ^000000";
			next;
			if (countitem(Alchol) > 0) && (countitem(Rotten_Bandage) > 499) {
				delitem(Alchol,1);
				delitem(Rotten_Bandage,500);
				getitem(Plaster,1);
				mes "[Argen]";
				mes "Tome ai o Curativo Gigante! Ele � realmente �timo!";
			} else {
				mes "[Argen]";
				mes "Parece que voc� n�o tem os materiais.";
			}
			next;
			mes "[Argen]";
			mes "Se voc� tiver alguma necessidade, venha aqui me encontrar a qualquer hora!";
			mes "Ent�o, at� mais.";
			close;
		} else {
			mes "[Argen]";
			mes "Hoho! ^3131FF Curativo Gicante!^000000";
			mes "Se algu�m perguntar, onde � que est� este curativo quando alg�em � ferido.";
			mes "Diga-os que este � o verdadeiro curativo para as pessoas feridas.";
			mes "Hmm, n�o � facil?";
			next;
			mes "[Argen]";
			mes "1 ^FF0000�cool ^000000 e";
			mes "500 ^FF0000Bandagens Estragadas^000000";
			mes "Se voc� tiver preparado todos os itens, eu irei ajudar a criar isto para voc�!";
			close;
		}
		case 3:
		if ((countitem(Centimental_Flower) > 0) & (countitem(Steel) > 9) & (Zeny > 19999)) {
			mes "[Argen]";
			mes "�timo!! Presilha de Flor!";
			mes "� hora de mostrar minha habilidade ap�s toda esta conversa!";
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
				mes "Tome ai a Presilha de Flor! Ela � realmente �tima!";
			} else {
				mes "[Argen]";
				mes "Parece que voc� n�o tem os materiais.";
			}
			next;
			mes "[Argen]";
			mes "Se voc� tiver alguma necessidade, venha aqui me encontrar a qualquer hora!";
			mes "Ent�o, at� mais.";
			close;
		} else {
			mes "[Argen]";
			mes "Sim - ^3131FFPresilha de Flor!^000000";
			mes "�s vezes, eu vejo umas garotas com p�s descalsos e uma flor em suas bocas.";
			mes "Observando-as, eu tive uma id�ia!";
			next;
			mes "[Argen]";
			mes "^3131FFFlor^000000, ^3131FFFlor^000000!";
			mes "Ua ha ha, n�o � que � uma id�ia perfeita?";
			mes "Some even equip it on the Orc Warrior, you should be proud of it, right?";
			mes "Verdade...";
			next;
			mes "[Argen]";
			mes "Mas o processo precisa de um pouco mais de esfor�o,";
			mes "I need to take some process fee.";
			next;
			mes "[Argen]";
			mes "Voc� deve saber que,";
			mes "preciso estabilizar uma fr�gil flor na cabe�a";
			mes "tendo muita concentra��o";
			mes "e muita habilidade.";
			next;
			mes "[Argen]";
			mes "Ent�o, traga pro favor,";
			mes "1 ^FF0000Flor Rom�ntica^000000";
			mes "10 ^FF0000A�os^000000";
			mes "junto com ^3131FF20,000 zeny^000000!";
			mes "Se voc� preparar todos os itens, eu irei criar o item para voc�!";
			mes "Voc� entendeu?";
			close;
		}
		case 4:
		mes "[Argen]";
		mes "Ha, o que? Voc� n�o quer nenhum?";
		mes "Rumblerumblerumble";
		close;
	}
}
