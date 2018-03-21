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
| - Info: Mini-Quest para                                           |
| * Espelho de M�dico                                               |
| * Chap�u com Pluma                                                |
| * M�scara do Fantasma                                             |
| * Chap�u Chin�s                                                   |
\*-----------------------------------------------------------------*/

aldeba_in,152,166,4	script	Mercador#aldeb	4_M_04,{
	mes "[Mercador]";
	mes "Quem � este homem misterioso?";
	mes "Eu, o enigm�tico e charmoso 'Mercador?'";
	next;
	mes "[Mercador]";
	mes "Viajando pelo continente de Rune-Midgard, com todos os seus chap�us maravilhosos?";
	mes "Ningu�m sabe...";
	next;
	mes "[Mercador]";
	mes "Para que prop�sito posso colecionar e trocar esses chap�us de todo o mundo?";
	mes "Escolha um chap�u, v�o desvendando o mist�rio...";
	next;
	mes "[Mercador]";
	mes "^3355FFEspelho de M�dico^000000:";
	mes "1 Faixa Marrom";
	mes "50 Ferros";
	mes "1 Diamante Rachado";
	mes "3.500 zenys";
	next;
	mes "[Mercador]";
	mes "^3355FFChap�u com Pluma^000000:";
	mes "1 Chap�u Rom�ntico";
	mes "300 Plumas de Aves";
	mes "500 zenys";
	next;
	mes "[Mercador]";
	mes "^3355FFM�scara do Fantasma^000000:";
	mes "20 Ferro";
	mes "1 Planta da Melodia";
	mes "5.000 zenys";
	next;
	mes "[Mercador]";
	mes "^3355FFChap�u Chin�s^000000:";
	mes "120 Troncos";
	mes "10.000 zenys ";
	next;
	switch (select("Espelho de M�dico","Chap�u com Pluma","M�scara do Fantasma","Chap�u Chin�s")) {
	case 1:
		if ((countitem(Red_Bandana) > 0) && (countitem(Iron) > 49) && (countitem(Crystal_Jewel___) > 0) && (Zeny > 3499)) {
			Zeny -= 3500;
			mes "[Mercador]";
			mes "Hm! Voc� n�o tem uma licen�a m�dica, n�o �?";
			mes "Est� tudo bem, eu ouvi sobre um Gatuno, o m�dico n�o licenciado que realizou milagres m�dicos!";
			mes "Mas... Isso pode ter sido uma hist�ria em quadrinhos.";
			next;
			mes "[Mercador]";
			mes "Que seja. S� n�o seja pego com isso.";
			delitem(Iron,50);
			delitem(Red_Bandana,1);
			delitem(Crystal_Jewel___,1);
			getitem(Doctor_Cap,1);
			close;
		} else {
			mes "[Mercador]";
			mes "Voc� cara!";
			mes "Verifique os requisitos de novo.";
			mes "Voc� n�o parece idiota. Ent�o... caia na real.";
			close;
		}
	case 2:
		if ((countitem(Oldmans_Romance) > 0) && (countitem(Feather_Of_Birds) > 299) && (Zeny > 499)) {
			mes "[Mercador]";
			mes "Ah! Voc� tem bom senso de moda.";
			mes "Eu sei que voc� teve um tempo dif�cil coletando esse material.";
			mes "Mas este chap�u vale a pena.";
			mes "Pegue. Tudo que voc� precisa agora � de um casaco de pele e uma bengala!";
			delitem(Oldmans_Romance,1);
			Zeny -= 500;
			delitem(Feather_Of_Birds,300);
			getitem(Feather_Bonnet,1);
			close;
		} else {
			mes "[Mercador]";
			mes "Ei cara";
			mes "Verifique os requisitos de novo.";
			mes "Voc� n�o parece idiota.";
			mes "Ent�o... caia na real.";
			close;
		}
	case 3:
		if ((countitem(Iron) > 19) && (countitem(Singing_Plant) > 0) && (Zeny > 4999)) {
			mes "[Mercador]";
			mes "Isso aqui?";
			mes "� um pouco assustador, embora ele tenha algum tipo de aspecto rom�ntico.";
			mes "O que voc� acha?";
			mes "Voc� gosta disso?";
			mes "Tudo bem, pegue, � seu!";
			delitem(Iron,20);
			delitem(Singing_Plant,1);
			Zeny -= 5000;
			getitem(Phantom_Of_Opera,1);
			close;
		} else {
			mes "[Mercador]";
			mes "Palha�o.";
			mes "Verifique os requisitos de novo.";
			mes "N�o � f�cil conseguir uma ^3355FFM�scara do Fantasma^000000.";
			mes "Ent�o... caia na real.";
			close;
		}
	case 4:
		if ((countitem(Wooden_Block) > 119) && (Zeny > 9999)) {
			mes "[Mercador]";
			mes "O Chap�u Chin�s nunca foi vendido para comerciantes al�m de mim.";
			mes "J� que apenas eu posso reconhecer a sua qualidade.";
			mes "Devido � sua raridade, o Chap�u Chin�s se tornou um produto muito especial e excepcional.";
			mes "Tudo bem!";
			mes "Pegue, � seu!";
			delitem(Wooden_Block,120);
			Zeny -= 10000;
			getitem(Sahkkat,1);
			close;
		} else {
			mes "[Mercador]";
			mes "*Aiai*";
			mes "Verifique meus requisitos de novo.";
			mes "Ent�o... Voc� n�o pare�e um idiota, caia na real.";
			close;
		}
	}
}
