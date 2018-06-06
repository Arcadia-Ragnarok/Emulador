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
| - Info: Mini-Quest do Aquecedor de Orelha                         |
\*-----------------------------------------------------------------*/

payon_in01,18,10,4	script	Senhora Mística	1_F_ORIENT_02,{
	mes "[Senhora Mística]";
	mes "Minha família tem produzido e vendido um produto especial de inverno chamado ^3355FFAquecedor de Orelha^000000.";
	mes "Por muitos anos, nós nos mudamos para cá, mas o clima é sempre quente, então não poderemos ganhar a vida.";
	next;
	mes "[Senhora Mística]";
	mes "Se você planeja viajar para regiões mais frias, é melhor você levar alguns ^3355FFAquecedores de Orelha^000000...";
	emotion e_dots;
	next;
	mes "[Senhora Mística]";
	mes "Aquecedores de Orelha é a especialidade da minha família, e nós o fornecemos aos clientes que tenham";
	mes "^FF33551 Rubi Amaldiçoado^000000,";
	mes "^3311AA1 Fone de Ouvido,";
	mes "^000000 ^3355FF 200 Plumas^000000";
	mes "e ^DDDD005.000 zenys^000000.";
	emotion e_dots;
	next;
	switch (select("Ah é? Isso me parece bom!","Não, obrigado, senhora.")) {
		case 1:
		if (!checkweight(Ear_Mufs,1)) {
			mes "^3355FFEspere um segundo!";
			mes "Agora, você está carregando muitos itens com você.";
			mes "Por favor, volte depois de colocar algumas de suas coisas no Armazém da Kafra.^000000";
			close;
		} else if ((countitem(Cardinal_Jewel_) > 0) && (countitem(Feather) > 199) && (countitem(Headset) > 0) && (Zeny > 4999)) {
			mes "[Mystic Lady]";
			delitem(Cardinal_Jewel_,1);
			delitem(Feather,200);
			delitem(Headset,1);
			Zeny -= 5000;
			mes "Aqui, vou lhe dar este que já foi feito.";
			getitem(Ear_Mufs,1);
			next;
			mes "[Senhora Mística]";
			mes "Obrigado por adquirir nosso produto.";
			mes "Você não vai se arrepender de comprar o nosso Aquecedor de Orelha!";
			mes "Satisfação garantida!";
			emotion(e_dots);
			close;
		} else {
			mes "[Senhora Mística]";
			mes "Oh querido...";
			mes "Você não tem dinheiro suficiente ou itens.";
			mes "Infelizmente, não podemos dar descontos.";
			mes "Por favor, entenda que nós temos que ganhar a vida...";
			emotion(e_dots);
			close;
		}
		case 2:
		mes "[Senhora Mística]";
		mes "Isso é bom.";
		mes "Eu acredito que nos encontraremos novamente.";
		mes "...Um destes dias.";
		emotion(e_dots);
		close;
	}
}
