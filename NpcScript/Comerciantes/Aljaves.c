/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Cria��o: Spell Master 15/03/2017                                |
| - Nota: Troca Flechas e Zenys por Aljaves de Flechas              |
| - Observa��es: Mantidos di�lagos e var iguais aos dos scripts     |
|                padr�es usados em outros emuladores.               |
\*-----------------------------------------------------------------*/

payon_in01,5,134,5	script	Inventor Jaax#Quiver	4_M_ORIENT02,{
	mes("[Inventor Jaxx]\n Meu nome � Jaxx.\n Sem d�vidas, posso dizer que sou o ^663300maior inventor dos �ltimos tempos^000000.");
	next;
	mes("[Inventor Jaxx]\n Atualmente, eu tenho criado algo verdadeiramente extraordin�rio.\n Eu os chamo de... ^663300Aljaves M�gicos^000000!!\n Isto ser� lembrado na hist�ria por uma Revolu��o das Flechas!");
	emotion(e_no1);
	next;
	mes("[Inventor Jaax]\n Eu estudei magia e aljaves durante anos, trabalhando noite e dia at� que finalmente descobri como condensar flechas com magia!\n Com Aljaves M�gicos, voc� estar� transportando mais flechas, mas com menos peso!");
	next;
	mes("[Inventor Jaax]\n Voc� gostaria de tentar usar um dos meu Aljaves M�gicos?\n N�o tenho d�vidas que algu�m como voc� pode apreciar minha geniosidade!");
	next;
	switch(select("Aljave de Flechas", "Aljave de Flechas de Ferro", "Aljave de Flechas de A�o", "Aljave de Flechas de Oridecon", "Aljave de Flechas de Fogo", "Aljave de Flechas de Prata", "Aljave de Flechas de Vento", "Aljave de Flechas de Pedra", "Aljave de Flechas de Cristal", "Aljave de Flechas Sombrias", "Aljave de Flechas Incorp�reas", "Aljave de Flechas Enferrujadas", "Nenhuma")) {
		case 1:  .@arrowItem = 1750; .@quiverItem = 12004; break;
		case 2:  .@arrowItem = 1770; .@quiverItem = 12005; break;
		case 3:  .@arrowItem = 1753; .@quiverItem = 12006; break;
		case 4:  .@arrowItem = 1765; .@quiverItem = 12007; break;
		case 5:  .@arrowItem = 1752; .@quiverItem = 12008; break;
		case 6:  .@arrowItem = 1751; .@quiverItem = 12009; break;
		case 7:  .@arrowItem = 1755; .@quiverItem = 12010; break;
		case 8:  .@arrowItem = 1756; .@quiverItem = 12011; break;
		case 9:  .@arrowItem = 1754; .@quiverItem = 12012; break;
		case 10: .@arrowItem = 1767; .@quiverItem = 12013; break;
		case 11: .@arrowItem = 1757; .@quiverItem = 12014; break;
		case 12: .@arrowItem = 1762; .@quiverItem = 12015; break;
		case 13:
		mes("[Inventor Jaax]\n O que...?\n Voc� n�o viu que essa inven��o pode mudar para sempre a forma que as Flechas s�o carregadas?!\n O Futuro � agora!");
		close;
	}
	if (countitem(.@arrowItem) >= 500) {
		mes("[Inventor Jaax]\n Excelente!\n As flechas est�o com voc�?\n Irei lhe providenciar um Aljave que pode carregar 500 de suas " + getitemname(.@arrowItem) + " por apenas^FF3131 500 Zeny^000000.");
		next;
		switch(select("Trocar quantas Aljaves poss�veis", "1 Aljave", "Cancelar")) {
			case 1:
			.@arrows = countitem(.@arrowItem);
			.@quiver = .@arrows / 500;
			.@arrows_used = .@quiver * 500;
			.@arrow_zeny01 = .@quiver * 500;
			mes("[Inventor Jaax]\n N�mero de Flechas: ^3131FF"+.@arrows+"^000000.\n N�mero m�ximo que pode ser comprado de Aljaves: ^3131FF" + .@quiver + "^000000.\n Zeny requerido: ^3131FF" + .@arrow_zeny01 + " Zeny^000000.");
			next;
			mes("[Inventor Jaax]\n Voc� gostaria de comprar quantos Aljaves poss�veis para as Flechas que voc� est� carregando?");
			next;
			if (select("Sim", "N�o") == 1) {
				if (.@arrow_zeny01 < Zeny) {
					mes("[Inventor Jaax]\n Aqui est�o!\n Apenas relembrando, ^FF0000voc� n�o poder� utilizar os Aljaves caso seu peso seja maior que 90% do peso m�ximo^000000.");
					Zeny -= .@arrow_zeny01;
					delitem(.@arrowItem, .@arrows_used);
					getitem(.@quiverItem, .@quiver);
					next;
					mes("[Inventor Jaax]\n Ent�o...\n Apenas tenha controle da quantidade que voc� carrega por vez e tudo ficar� bem.");
					close;
				} else {
					mes("[Inventor Jaax]\n Me desculpe, mas voc� n�o tem Zeny o suficiente.\n Eu n�o posso d�-las por nada depois de anos de trabalho para criar essa tecnologia revolucion�ria!");
					close;
				}
			}
			mes("[Inventor Jaax]\n Voc� mudou de id�ia?\n Logo agora que a gl�ria de possuir um Aljave estava t�o perto?");
			close;
			case 2:
			if (Zeny > 500) {
				mes("[Inventor Jaax]\n Aqui est�!\n Apenas relembrando, ^FF0000voc� n�o poder� utilizar os Aljaves caso seu peso seja maior que 90% do peso m�ximo^000000.");
				Zeny -= 500;
				delitem(.@arrowItem, 500);
				getitem(.@quiverItem, 1);
				next;
				mes("[Inventor Jaax]\n Ent�o...\n Apenas tenha controle da quantidade que voc� carrega por vez e tudo ficar� bem.");
				close;
			} else {
				mes("[Inventor Jaax]\n Voc� n�o possui 500 Zeny?\n Me desculpe.\n Eu n�o tinha id�ia que voc� era t�o...\n ^333333Desprovido^000000.");
				close;
			}
			case 3:
			mes("[Inventor Jaax]\n O que...?\n Voc� n�o viu que essa inven��o pode mudar para sempre a forma que as Flechas s�o carregadas?!\n O Futuro � agora!");
			close;
		}
	} else {
		mes("[Inventor Jaax]\n Voc� pode carregar no m�ximo 500 Flechas dentro deste Aljave.\n Isso foi feito usando meu m�todo secreto, para que o peso total de Flechas e Aljaves juntos � menor do que se carregasse apenas Flechas.");
		next;
		mes("[Inventor Jaax]\n Isso � um Milagre da Ci�ncia! Voc� mesmo pode experimentar se voc� me trazer no m�nimo 500 Flechas e 500 Zeny para cada Aljave.");
		close;
	}
}
