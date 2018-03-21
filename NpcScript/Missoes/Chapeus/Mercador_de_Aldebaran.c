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
| - Info: Mini-Quest para                                           |
| * Espelho de Médico                                               |
| * Chapéu com Pluma                                                |
| * Máscara do Fantasma                                             |
| * Chapéu Chinês                                                   |
\*-----------------------------------------------------------------*/

aldeba_in,152,166,4	script	Mercador#aldeb	4_M_04,{
	mes "[Mercador]";
	mes "Quem é este homem misterioso?";
	mes "Eu, o enigmático e charmoso 'Mercador?'";
	next;
	mes "[Mercador]";
	mes "Viajando pelo continente de Rune-Midgard, com todos os seus chapéus maravilhosos?";
	mes "Ninguém sabe...";
	next;
	mes "[Mercador]";
	mes "Para que propósito posso colecionar e trocar esses chapéus de todo o mundo?";
	mes "Escolha um chapéu, vão desvendando o mistério...";
	next;
	mes "[Mercador]";
	mes "^3355FFEspelho de Médico^000000:";
	mes "1 Faixa Marrom";
	mes "50 Ferros";
	mes "1 Diamante Rachado";
	mes "3.500 zenys";
	next;
	mes "[Mercador]";
	mes "^3355FFChapéu com Pluma^000000:";
	mes "1 Chapéu Romântico";
	mes "300 Plumas de Aves";
	mes "500 zenys";
	next;
	mes "[Mercador]";
	mes "^3355FFMáscara do Fantasma^000000:";
	mes "20 Ferro";
	mes "1 Planta da Melodia";
	mes "5.000 zenys";
	next;
	mes "[Mercador]";
	mes "^3355FFChapéu Chinês^000000:";
	mes "120 Troncos";
	mes "10.000 zenys ";
	next;
	switch (select("Espelho de Médico","Chapéu com Pluma","Máscara do Fantasma","Chapéu Chinês")) {
	case 1:
		if ((countitem(Red_Bandana) > 0) && (countitem(Iron) > 49) && (countitem(Crystal_Jewel___) > 0) && (Zeny > 3499)) {
			Zeny -= 3500;
			mes "[Mercador]";
			mes "Hm! Você não tem uma licença médica, não é?";
			mes "Está tudo bem, eu ouvi sobre um Gatuno, o médico não licenciado que realizou milagres médicos!";
			mes "Mas... Isso pode ter sido uma história em quadrinhos.";
			next;
			mes "[Mercador]";
			mes "Que seja. Só não seja pego com isso.";
			delitem(Iron,50);
			delitem(Red_Bandana,1);
			delitem(Crystal_Jewel___,1);
			getitem(Doctor_Cap,1);
			close;
		} else {
			mes "[Mercador]";
			mes "Você cara!";
			mes "Verifique os requisitos de novo.";
			mes "Você não parece idiota. Então... caia na real.";
			close;
		}
	case 2:
		if ((countitem(Oldmans_Romance) > 0) && (countitem(Feather_Of_Birds) > 299) && (Zeny > 499)) {
			mes "[Mercador]";
			mes "Ah! Você tem bom senso de moda.";
			mes "Eu sei que você teve um tempo difícil coletando esse material.";
			mes "Mas este chapéu vale a pena.";
			mes "Pegue. Tudo que você precisa agora é de um casaco de pele e uma bengala!";
			delitem(Oldmans_Romance,1);
			Zeny -= 500;
			delitem(Feather_Of_Birds,300);
			getitem(Feather_Bonnet,1);
			close;
		} else {
			mes "[Mercador]";
			mes "Ei cara";
			mes "Verifique os requisitos de novo.";
			mes "Você não parece idiota.";
			mes "Então... caia na real.";
			close;
		}
	case 3:
		if ((countitem(Iron) > 19) && (countitem(Singing_Plant) > 0) && (Zeny > 4999)) {
			mes "[Mercador]";
			mes "Isso aqui?";
			mes "É um pouco assustador, embora ele tenha algum tipo de aspecto romântico.";
			mes "O que você acha?";
			mes "Você gosta disso?";
			mes "Tudo bem, pegue, é seu!";
			delitem(Iron,20);
			delitem(Singing_Plant,1);
			Zeny -= 5000;
			getitem(Phantom_Of_Opera,1);
			close;
		} else {
			mes "[Mercador]";
			mes "Palhaço.";
			mes "Verifique os requisitos de novo.";
			mes "Não é fácil conseguir uma ^3355FFMáscara do Fantasma^000000.";
			mes "Então... caia na real.";
			close;
		}
	case 4:
		if ((countitem(Wooden_Block) > 119) && (Zeny > 9999)) {
			mes "[Mercador]";
			mes "O Chapéu Chinês nunca foi vendido para comerciantes além de mim.";
			mes "Já que apenas eu posso reconhecer a sua qualidade.";
			mes "Devido à sua raridade, o Chapéu Chinês se tornou um produto muito especial e excepcional.";
			mes "Tudo bem!";
			mes "Pegue, é seu!";
			delitem(Wooden_Block,120);
			Zeny -= 10000;
			getitem(Sahkkat,1);
			close;
		} else {
			mes "[Mercador]";
			mes "*Aiai*";
			mes "Verifique meus requisitos de novo.";
			mes "Então... Você não pareçe um idiota, caia na real.";
			close;
		}
	}
}
