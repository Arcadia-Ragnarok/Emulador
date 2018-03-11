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
| - Versão: Spell Master                                            |
| - Nota: Guias de Alberta                                          |
\*-----------------------------------------------------------------*/

alberta,23,238,4	script	Guia#albguide	8W_SOLDIER,{
	cutin("prt_soldier",2);
	mes "[Guia de Alberta]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Alberta^000000, a Cidade Portuária.";
	next;
	while (1) {
		switch(select("[Principais Lugares]","[Lojas & Ajudantes]","[Portos]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Loja de Utilidades]","[Forja]","[Equipamentos]","[Estalagem]","[Salão de Beleza]","[Guilda dos Mercadores]","Menu Anterior")) {
					case 1:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,98,154,0,0x0A82FF);
					next;
					break;
					case 2:
					mes "[Guia de Alberta]";
					mes "Posição da ^0000FF Forja^000000 marcada em seu mini mapa.";
					viewpoint (1,35,41,1,0xFF0000);
					next;
					break;
					case 3:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Loja de Equipamentos^000000 marcada em seu mini mapa.";
					viewpoint (1,117,37,2,0xFFB400);
					next;
					break;
					case 4:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
					viewpoint (1,65,233,3,0xAAFF00);
					next;
					break;
					case 5:
					mes "[Guia de Alberta]";
					mes "Posição do^0000FF Salão de Beleza^000000 marcado em seu mini mapa.";
					viewpoint (1,48,145,4,0xD2691E);
					next;
					break;
					case 6:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Guilda dos Mercadores^000000 marcada em seu mini mapa.";
					viewpoint (1,33,41,5,0xDA70D6);
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
				switch(select("[Oficial Eden]","[Funcionária Kafra]","[Feirante]","Menu Anterior")) {
					case 1:
					mes "[Guia de Alberta]";
					mes "Posição do^0000FF Oficial Eden^000000 marcado em seu mini mapa.";
					viewpoint (1,121,68,6,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Alberta]";
					mes "Posição das^0000FF Funcionárias Kafras^000000 ao norte e sul marcadas em seu mini mapa.";
					viewpoint (1,33,41,7,0x0A82FF);
					viewpoint (1,113,60,8,0x0A82FF);
					next;
					break;
					case 3:
					mes "[Guia de Alberta]";
					mes "Posição do^0000FF Feirante^000000 marcado em seu mini mapa.";
					viewpoint (1,167,135,9,0xAAFF00);
					next;
					break;
					case 4:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Porto - Doca do Norte]","[Porto - Doca Central]","[Porto - Doca do Sul]","Menu Anterior")) {
					case 1:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Doca Norte ^000000 marcada em seu mini mapa.";
					mes "Onde você pode ir até ^B9062F Malaya^000000 ou ^B9062F Dewata ^000000.";
					viewpoint (1,192,196,10,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Doca Central ^000000 marcada em seu mini mapa.";
					mes "Onde você pode ir até o ^B9062F Navio Fantasma^000000 ou ^B9062F Izlude ^000000.";
					viewpoint (1,192,151,11,0xFF0000);
					next;
					break;
					case 3:
					mes "[Guia de Alberta]";
					mes "Posição da^0000FF Doca Sul ^000000 marcada em seu mini mapa.";
					mes "Onde você pode ir até:";
					mes "^B9062F Ilha da Tartaruga ^000000,";
					mes "^B9062F Brasilis ^000000,";
					mes "^B9062F Amatsu ^000000,";
					mes "^B9062F Kunlun ^000000,";
					mes "^B9062F Moscóvia ^000000,";
					mes "^B9062F Loyang^000000,";
					mes "^B9062F Ayothaya ^000000.";
					viewpoint (1,245,86,12,0xFF0000);
					next;
					break;
					case 4:
					.@loop = 0;
					break;
				}
			}
			break;
			case 4:
			mes "[Guia de Alberta]";
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
			viewpoint (2,1,1,12,0x000000);
			next;
			break;
			case 5:
			mes "[Guia de Alberta]";
			mes "Aproveite sua estadia.";
			close2;
			cutin ("",255);
			end;
		}
	}
}

alberta,120,60,3	duplicate(Guia#albguide)	Guia#albguide_b	8W_SOLDIER
alberta,184,143,4	duplicate(Guia#albguide)	Guia#albguide_c	8W_SOLDIER

