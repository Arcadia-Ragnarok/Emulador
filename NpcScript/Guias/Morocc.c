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
| - Info: Guia de Morroc                                            |
\*-----------------------------------------------------------------*/

morocc,153,286,6	script	Guia#mocguide	4_M_MOC_SOLDIER,{
	cutin("moc_soldier",2);
	mes "[Guia de Morroc]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Alberta^000000, a cidade no deserto.";
	next;
	while (1) {
		switch (select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Guilda dos Gaturnos]","[Esfinge]","[Oasis]","[Forja]","[Loja de Equipamentos]","[Estalagem]","[Taverna]","Menu Anterior")) {
					case 1:
					mes "[Guia de Alberta]";
					mes "Direção para a^0000FF Guilda dos Gaturnos^000000 marcada em seu mini mapa.";
					viewpoint (1,26,294,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Alberta]";
					mes "Direção para a^0000FF Esfinge^000000 marcada em seu mini mapa.";
					viewpoint (1,26,164,1,0x0A82FF);
					next;
					break;
					case 3:
					mes "[Guia de Alberta]";
					mes "Direção para o^0000FF Oasis^000000 marcado em seu mini mapa.";
					viewpoint (1,26,294,2,0xFFB400);
					next;
					break;
					case 4:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Forja^000000 marcada em seu mini mapa.";
					viewpoint (1,47,47,3,0xAAFF00);
					next;
					break;
					case 5:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Loja de Equipamentos^000000 marcada em seu mini mapa.";
					viewpoint (1,253,56,4,0xD2691E);
					next;
					break;
					case 6:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
					viewpoint (1,273,269,5,0xDA70D6);
					next;
					break;
					case 7:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Taverna^000000 marcada em seu mini mapa.";
					viewpoint (1,52,259,6,0xFF0000);
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
				switch (select("[Funcionária Kafra]","[Loja de Ervas Tóxicas]","[Tintureiro]","Menu Anterior")) {
					case 1:
					mes "[Guia de Alberta]";
					mes "Posição das^0000FF Funcionárias Kafras^000000 marcadas em seu mini mapa.";
					viewpoint (1,156,97,7,0x0A82FF);
					viewpoint (1,160,258,8,0x0A82FF);
					next;
					break;
					case 2:
					mes "[Guia de Alberta]";
					mes "Posição do^0000FF Comércio de Ervas^000000 marcada em seu mini mapa.";
					viewpoint (1,190,96,9,0xAAFF00);
					next;
					break;
					case 3:
					mes "[Guia de Alberta]";
					mes "Posição do^0000FF Tintureiro^000000 marcado em seu mini mapa.";
					viewpoint (1,273,269,10,0xD2691E);
					next;
					break;
					case 4:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Morroc Guide]";
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
			next;
			break;
			case 4:
			mes "[Morroc Guide]";
			mes "Aproveite sua estadia.";
			close2;
			cutin("",255);
			end;
		}
	}
}