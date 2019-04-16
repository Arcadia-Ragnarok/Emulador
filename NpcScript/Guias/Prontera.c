/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Guias de Prontera                                         |
\*-----------------------------------------------------------------*/

prontera,154,187,4	script	Guia#prtguide	8W_SOLDIER,{
	cutin("prt_soldier",2);
	mes "[Guia de Prontera]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Prontera^000000, capital de Rune-Midgard.";
	next;
	while (1) {
		switch (select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Loja de Utilidades]","[Equipamentos]","[Forja]","[Catedral]","[Cavalaria]","[Estalagem]","[Taverna]","[Livraria]","[Castelo]","[Agência]","[Prefeitura]","Menu Anterior")) {
					case 1:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,134,221,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Loja de Armas e Armaduras^000000 marcada em seu mini mapa.";
					viewpoint (1,175,220,1,0x0A82FF);
					next;
					break;
					case 3:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Forja^000000 marcada em seu mini mapa.";
					viewpoint (1,179,184,2,0xFFB400);
					next;
					break;
					case 4:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Catedral^000000 marcada em seu mini mapa.";
					viewpoint (1,236,316,3,0xAAFF00);
					next;
					break;
					case 5:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Cavalaria^000000 marcada em seu mini mapa.";
					viewpoint (1,46,345,4,0xD2691E);
					next;
					break;
					case 6:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
					viewpoint (1,204,191,5,0xDA70D6);
					next;
					break;
					case 7:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Taverna do Note^000000 e ^0000FF Taverna do Sul^000000 marcadas em seu mini mapa.";
					viewpoint (1,208,154,6,0xFF0000);
					viewpoint (1,46,67,7,0xFF0000);
					next;
					break;
					case 8:
					mes "[Guia de Prontera]";
					mes "Posição das^0000FF Livrarias^000000 marcadas em seu mini mapa.";
					viewpoint (1,120,264,8,0x0A82FF);
					viewpoint (1,192,264,9,0x0A82FF);
					next;
					break;
					case 9:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Castelo^000000 marcada em seu mini mapa.";
					viewpoint (1,156,360,10,0xFFB400);
					next;
					break;
					case 10:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Agência^000000 marcada em seu mini mapa.";
					viewpoint (1,133,183,11,0xAAFF00);
					next;
					break;
					case 11:
					mes "[Guia de Prontera]";
					mes "Posição da^0000FF Prefeitura^000000 marcada em seu mini mapa.";
					viewpoint (1,75,91,12,0xD2691E);
					next;
					break;
					case 12:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Oficial Eden]","[Aluguel de Montaria]","[Peco Peco Remover]","[Funcionária Kafra]","Menu Anterior")) {
					case 1:
					mes "[Guia de Prontera]";
					mes "Posição do^0000FF Oficial Eden^000000 marcado em seu mini mapa.";
					viewpoint (1,124,76,13,0xDA70D6);
					next;
					break;
					case 2:
					mes "[Guia de Prontera]";
					mes "Posição do^0000FF Aluguel de Peco Peco^000000 para cavaleiros e templários marcados em seu mini mapa.";
					viewpoint (1,55,350,14,0x0A82FF);
					viewpoint (1,232,310,15,0x0A82FF);
					next;
					break;
					case 3:
					mes "[Guia de Prontera]";
					mes "Posição das^0000FF Funcionárias Kafra^000000 em seu mini mapa.";
					viewpoint (1,152,326,16,0xAAFF00);
					viewpoint (1,30,207,17,0xAAFF00);
					viewpoint (1,282,200,18,0xAAFF00);
					viewpoint (1,151,29,19,0xAAFF00);
					viewpoint (1,146,89,20,0xAAFF00);
					next;
					break;
					case 4:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Prontera]";
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
			viewpoint (2,1,1,14,0xFFFF00);
			viewpoint (2,1,1,15,0xFFFF00);
			viewpoint (2,1,1,16,0xFFFF00);
			viewpoint (2,1,1,17,0xFFFF00);
			viewpoint (2,1,1,18,0xFFFF00);
			viewpoint (2,1,1,19,0xFFFF00);
			viewpoint (2,1,1,20,0xFFFF00);
			next;
			break;
			case 4:
			mes "[Guia de Prontera]";
			mes "Aproveite sua estadia.";
			close2;
			cutin("prt_soldier",255);
			end;
		}
	}
}

prontera,282,208,2	duplicate(Guia#prtguide)	Guia#prtguide_b	8W_SOLDIER
prontera,29,200,6	duplicate(Guia#prtguide)	Guia#prtguide_c	8W_SOLDIER
prontera,160,29,0	duplicate(Guia#prtguide)	Guia#prtguide_d	8W_SOLDIER
prontera,151,330,4	duplicate(Guia#prtguide)	Guia#prtguide_e	8W_SOLDIER
