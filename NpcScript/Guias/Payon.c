/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Guias de Payon                                            |
\*-----------------------------------------------------------------*/

payon,160,67,3	script	Guia#payguide	4_M_PAY_SOLDIER,{
	cutin("pay_soldier",2);
	mes "[Guia de Payon]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Payon^000000, a Cidade nas montanhas.";
	next;
	while (1) {
		switch (select("[Principais Lugares]","[Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Vila dos Arqueiros]","[Loja de Utilidades]","[Equipamentos]","[Estalagem & Taverna]","[Palácio Central]","[Palácio da Corte]","[Cozinha Real]","Menu Anterior")) {
					case 1:
					mes "[Guia de Payon]";
					mes "Posição da^0000FF Vila dos Arqueiros^000000 marcada em seu mini mapa.";
					viewpoint (1,227,328,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Payon]";
					mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,144,85,1,0x0A82FF);
					next;
					break;
					case 3:
					mes "[Guia de Payon]";
					mes "Posição da^0000FF Loja de Equipamentos^000000 marcada em seu mini mapa.";
					viewpoint (1,139,159,2,0xFFB400);
					next;
					break;
					case 4:
					mes "[Guia de Payon]";
					mes "Posição da^0000FF Estalagem & Taverna^000000 marcada em seu mini mapa.";
					viewpoint (1,220,117,3,0xAAFF00);
					next;
					break;
					case 5:
					mes "[Guia de Payon]";
					mes "Posição do^0000FF Palácio da Central^000000 marcado em seu mini mapa.";
					viewpoint (1,155,245,4,0xD2691E);
					next;
					break;
					case 6:
					mes "[Guia de Payon]";
					mes "Posição do^0000FF Palácio da Corte^000000 marcado em seu mini mapa.";
					viewpoint (1,107,325,5,0xDA70D6);
					next;
					break;
					case 7:
					mes "[Guia de Payon]";
					mes "Posição da^0000FF Cozinha Real^000000 marcada em seu mini mapa.";
					viewpoint (1,154,325,6,0xFF0000);
					next;
					break;
					case 8:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Oficial Eden]","[Reparador & Ferreiro]","[Funcionária Kafra]","[Especialista em Armadilha]","[Jade]","[Feirante]","Menu Anterior")) {
					case 1:
					mes "[Guia de Payon]";
					mes "Posição do^0000FF Oficial Eden^000000 marcado em seu mini mapa.";
					viewpoint (1,177,111,7,0x0A82FF);
					next;
					break;
					case 2:
					mes "[Guia de Payon]";
					mes "Posição do^0000FF Reparador & Ferreiro^000000 marcado em seu mini mapa.";
					viewpoint (1,144,170,8,0xAAFF00);
					next;
					break;
					case 3:
					mes "[Guia de Payon]";
					mes "Posição das^0000FF Funcionárias Kafras^000000 marcadas em seu mini mapa.";
					viewpoint (1,181,104,9,0xD2691E);
					viewpoint (1,175,226,10,0xD2691E);
					next;
					break;
					case 4:
					mes "[Guia de Payon]";
					mes "Posição do^0000FF Especialista em Armadilha^000000 marcado em seu mini mapa.";
					viewpoint (1,123,109,11,0xDA70D6);
					next;
					break;
					case 5:
					mes "[Guia de Payon]";
					mes "Posição de^0000FF Jade^000000 negociante de Gemas marcado em seu mini mapa.";
					viewpoint (1,173,238,12,0xFFB400);
					next;
					break;
					case 6:
					mes "[Guia de Payon]";
					mes "Posição da^0000FF Feirante^000000 marcada em seu mini mapa.";
					viewpoint (1,206,119,13,0xD2691E);
					next;
					break;
					case 7:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Payon]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,1,1,0,0xFFFF00);
			viewpoint (2,1,1,1,0x000000);
			viewpoint (2,1,1,2,0xFF0000);
			viewpoint (2,1,1,3,0xFFFF00);
			viewpoint (2,1,1,4,0xFFFF00);
			viewpoint (2,1,1,5,0xFFFF00);
			viewpoint (2,1,1,6,0xFFFF00);
			viewpoint (2,1,1,7,0xFFFF00);
			viewpoint (2,1,1,8,0xFFFF00);
			viewpoint (2,1,1,9,0xFFFF00);
			viewpoint (2,1,1,10,0xFFFF00);
			viewpoint (2,1,1,11,0xFFFF00);
			viewpoint (2,1,1,12,0xFFFF00);
			viewpoint (2,1,1,13,0xFFFF00);
			next;
			break;
			case 4:
			mes "[Guia de Payon]";
			mes "Aproveite sua estadia.";
			close;
			cutin("",255);
			end;
		}
	}
}

payon,151,182,6	duplicate(Guia#payguide)	Guia#payguide_b	4_M_PAY_SOLDIER
payon,221,85,6	duplicate(Guia#payguide)	Guia#payguide_c	4_M_PAY_SOLDIER
payon,233,324,4	duplicate(Guia#payguide)	Guia#payguide_d	4_M_PAY_SOLDIER
