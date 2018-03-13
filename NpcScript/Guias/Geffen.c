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
| - Info: Guias de Geffen                                           |
\*-----------------------------------------------------------------*/

geffen,203,116,4	script	Guia#gefguide	4_M_GEF_SOLDIER,{
	cutin ("gef_soldier",2);
	mes "[Guia de Geffen]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Geffen^000000, cidade da Magia.";
	next;
	while (1) {
		switch(select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Guilda dos Magos]","[Torre de Geffen]","[Fonte]","[Loja de Utilidades]","[Compra & Reparo de Equip.]","[Estalagem]","[Taverna]","[Forja]","Menu Anterior")) {
					case 1:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Guilda dos Magos^000000 marcada em seu mini mapa.";
					viewpoint (1,61,180,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Torre de Geffen^000000 marcada em seu mini mapa.";
					viewpoint (1,120,114,1,0x0000FF);
					next;
					break;
					case 3:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Fonte^000000 marcada em seu mini mapa.";
					viewpoint (1,126,48,2,0xFFB400);
					next;
					break;
					case 4:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,44,86,3,0xAAFF00);
					next;
					break;
					case 5:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Compra & Reparo de Equip.^000000 marcada em seu mini mapa.";
					viewpoint (1,99,140,4,0xD2691E);
					next;
					break;
					case 6:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
					viewpoint (1,172,174,5,0xDA70D6);
					next;
					break;
					case 7:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Taverna^000000 marcada em seu mini mapa.";
					viewpoint (1,138,138,6,0xFF0000);
					next;
					break;
					case 8:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Forja^000000 marcada em seu mini mapa.";
					viewpoint (1,182,59,6,0x0000FF);
					next;
					break;
					case 9:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Oficial Eden]","[Funcionária Kafra]","[Cozinheiro]",
					"[Guia Arcano]",
					"Menu Anterior")) {
					case 1:
					mes "[Guia de Geffen]";
					mes "Posição do^0000FF Oficial Eden^000000 marcado em seu mini mapa.";
					viewpoint (1,61,180,7,0xFF0000);
					viewpoint (1,132,66,8,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Geffen]";
					mes "Posição das^0000FF Funcionárias Kafra^000000 marcadas em seu mini mapa.";
					viewpoint (1,203,123,10,0xFFB400);
					viewpoint (1,120,62,11,0xFFB400);
					next;
					break;
					case 3:
					mes "[Guia de Geffen]";
					mes "Posição do^0000FF Cozinheiro^000000 marcado em seu mini mapa.";
					viewpoint (1,196,111,12,0xD2691E);
					next;
					break;
					case 4:
					mes "[Guia de Geffen]";
					mes "Posição da^0000FF Guia Arcano^000000 marcada em seu mini mapa.";
					viewpoint (1,140,196,13,0xDA70D6);
					next;
					break;
					case 5:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Geffen]";
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
			mes "[Guia de Geffen]";
			mes "Aproveite sua estadia.";
			close2;
			cutin ("",255);
			end;
		}
	}
}

geffen,118,62,0	duplicate(Guia#gefguide)	Guia#gefguide_b	4_M_GEF_SOLDIER
geffen,36,123,6	duplicate(Guia#gefguide)	Guia#gefguide_c	4_M_GEF_SOLDIER
geffen,123,203,4	duplicate(Guia#gefguide)	Guia#gefguide_d	4_M_GEF_SOLDIER
