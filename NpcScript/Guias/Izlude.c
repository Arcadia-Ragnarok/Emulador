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
| - Nota: Guia de Izlude                                            |
\*-----------------------------------------------------------------*/

izlude,129,175,4	script	Guia#izlguide	8W_SOLDIER,{
	cutin ("prt_soldier",2);
	mes "[Guia de Izlude]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Izlude^000000, cidade satélite de Prontera.";
	while (1) {
		switch(select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Marina]","[Aeroplano]","[Loja de Equipamento]","[Guilda dos Espadachins]","[Forja]","Menu Anterior")) {
					case 1:
					mes "[Guia de Izlude]";
					mes "Posição da^0000FF Marina^000000 marcada em seu mini mapa.";
					viewpoint (1,197,205,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Izlude]";
					mes "Posição do^0000FF Aeroplano^000000 marcado em seu mini mapa.";
					viewpoint (1,210,73,1,0x0A82FF);
					next;
					break;
					case 3:
					mes "[Guia de Izlude]";
					mes "Posição da^0000FF Loja de Equipamento^000000 marcada em seu mini mapa.";
					viewpoint (1,108,179,2,0xAAFF00);
					next;
					break;
					case 4:
					mes "[Guia de Izlude]";
					mes "Posição da^0000FF Guilda dos Espadachins^000000 marcada em seu mini mapa.";
					viewpoint (1,52,172,3,0xDA70D6);
					next;
					break;
					case 5:
					mes "[Guia de Izlude]";
					mes "Posição da^0000FF Forja^000000 marcada em seu mini mapa.";
					viewpoint (1,153,126,4,0xAAFF00);
					next;
					break;
					case 6:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Oficial Eden]","[Funcionária Kafra]","[Auxiliar de Lua de Mel]","[Aluguel de Acistentes]","[Pet Groomer]","Menu Anterior")) {
					case 1:
					mes "[Guia de Izlude]";
					mes "Posição do^0000FF Oficial Eden^000000 marcado em seu mini mapa.";
					viewpoint (1,131,148,5,0x0A82FF);
					next;
					break;
					case 2:
					mes "[Guia de Izlude]";
					mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
					viewpoint (1,128,148,6,0xFF5400);
					next;
					break;
					case 3:
					mes "[Guia de Izlude]";
					mes "Posição da^0000FF Auxiliar de Lua de Mel^000000 marcada em seu mini mapa.";
					viewpoint (1,180,224,7,0xFF0000);
					next;
					break;
					case 4:
					mes "[Guia de Izlude]";
					mes "Posição do^0000FF Aluguel de Acistentes^000000 marcado em seu mini mapa.";
					viewpoint (1,47,170,8,0xDA70D6);
					next;
					break;
					case 6:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Izlude]";
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
			next;
			break;
			case 4:
			mes "[Guia de Izlude]";
			mes "Aproveite sua estadia.";
			close2;
			cutin ("",255);
			end;
		}
	}
}
