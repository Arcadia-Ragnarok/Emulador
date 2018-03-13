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
| - Info: Guias de Aldebaran                                        |
\*-----------------------------------------------------------------*/

aldebaran,139,63,4	script	Guia#aldguide	8W_SOLDIER,{
	cutin ("prt_soldier",2);
	mes "[Guia de Alberta]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513AlDeBaran^000000, a cidade da Fronteira.";
	next;
	while (1) {
		switch(select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Central Kafra]","[Guilda dos Alquimistas]","[Torre do Relógio]","[Estalagem & Utilidades]","[Reparo e Compra de Equip.]","[Taverna]","Menu Anterior")) {
					case 1:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Central Kafra^000000 marcada em seu mini mapa.";
					viewpoint (1,61,229,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Guilda dos Alquimistas^000000 marcada em seu mini mapa.";
					viewpoint (1,60,60,1,0x0A82FF);
					next;
					break;
					case 3:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Torre do Relógio^000000 marcada em seu mini mapa.";
					viewpoint (1,139,133,2,0xFFB400);
					next;
					break;
					case 4:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Estalagem & Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,197,70,3,0xAAFF00);
					next;
					break;
					case 5:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Reparo e Compra de Equip.^000000 marcada em seu mini mapa.";
					viewpoint (1,72,197,4,0xD2691E);
					next;
					break;
					case 6:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Taverna^000000 marcada em seu mini mapa.";
					viewpoint (1,231,106,5,0xDA70D6);
					next;
					break;
					case 7:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Oficial Eden]","[Funcionária Kafra]","[Papai Noel]","[Cozinheiro]","Menu Anterior")) {
					case 1:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Oficial Eden^000000 marcada em seu mini mapa.";
					viewpoint (1,133,119,6,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
					viewpoint (1,143,119,7,0x0A82FF);
					next;
					break;
					case 3:
					mes "[Guia de Aldebaran]";
					mes "Posição do^0000FF Papai Noel^000000 marcado em seu mini mapa.";
					viewpoint (1,168,168,8,0xAAFF00);
					next;
					break;
					case 4:
					mes "[Guia de Aldebaran]";
					mes "Posição da^0000FF Cozinheiro^000000 marcada em seu mini mapa.";
					viewpoint (1,165,107,9,0xD2691E);
					next;
					break;
					case 5:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Aldebaran]";
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
			next;
			break;
			case 4:
			mes "[Guia de Aldebaran]";
			mes "Aproveite sua estadia.";
			close2;
			cutin ("",255);
			end;
		}
	}

}

aldebaran,135,243,4	duplicate(Guia#aldguide)	Guia#aldguide_c	8W_SOLDIER
aldebaran,36,135,6	duplicate(Guia#aldguide)	Guia#aldguide_d	8W_SOLDIER
