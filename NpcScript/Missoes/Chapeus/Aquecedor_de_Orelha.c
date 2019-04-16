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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest do Aquecedor de Orelha                         |
\*-----------------------------------------------------------------*/

payon_in01,18,10,4	script	Senhora M�stica	1_F_ORIENT_02,{
	mes "[Senhora M�stica]";
	mes "Minha fam�lia tem produzido e vendido um produto especial de inverno chamado ^3355FFAquecedor de Orelha^000000.";
	mes "Por muitos anos, n�s nos mudamos para c�, mas o clima � sempre quente, ent�o n�o poderemos ganhar a vida.";
	next;
	mes "[Senhora M�stica]";
	mes "Se voc� planeja viajar para regi�es mais frias, � melhor voc� levar alguns ^3355FFAquecedores de Orelha^000000...";
	emotion e_dots;
	next;
	mes "[Senhora M�stica]";
	mes "Aquecedores de Orelha � a especialidade da minha fam�lia, e n�s o fornecemos aos clientes que tenham";
	mes "^FF33551 Rubi Amaldi�oado^000000,";
	mes "^3311AA1 Fone de Ouvido,";
	mes "^000000 ^3355FF 200 Plumas^000000";
	mes "e ^DDDD005.000 zenys^000000.";
	emotion e_dots;
	next;
	switch (select("Ah �? Isso me parece bom!","N�o, obrigado, senhora.")) {
		case 1:
		if (!checkweight(Ear_Mufs,1)) {
			mes "^3355FFEspere um segundo!";
			mes "Agora, voc� est� carregando muitos itens com voc�.";
			mes "Por favor, volte depois de colocar algumas de suas coisas no Armaz�m da Kafra.^000000";
			close;
		} else if ((countitem(Cardinal_Jewel_) > 0) && (countitem(Feather) > 199) && (countitem(Headset) > 0) && (Zeny > 4999)) {
			mes "[Mystic Lady]";
			delitem(Cardinal_Jewel_,1);
			delitem(Feather,200);
			delitem(Headset,1);
			Zeny -= 5000;
			mes "Aqui, vou lhe dar este que j� foi feito.";
			getitem(Ear_Mufs,1);
			next;
			mes "[Senhora M�stica]";
			mes "Obrigado por adquirir nosso produto.";
			mes "Voc� n�o vai se arrepender de comprar o nosso Aquecedor de Orelha!";
			mes "Satisfa��o garantida!";
			emotion(e_dots);
			close;
		} else {
			mes "[Senhora M�stica]";
			mes "Oh querido...";
			mes "Voc� n�o tem dinheiro suficiente ou itens.";
			mes "Infelizmente, n�o podemos dar descontos.";
			mes "Por favor, entenda que n�s temos que ganhar a vida...";
			emotion(e_dots);
			close;
		}
		case 2:
		mes "[Senhora M�stica]";
		mes "Isso � bom.";
		mes "Eu acredito que nos encontraremos novamente.";
		mes "...Um destes dias.";
		emotion(e_dots);
		close;
	}
}
