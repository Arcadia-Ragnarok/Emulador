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
| - Info: Guias de Einbroch                                         |
\*-----------------------------------------------------------------*/

einbroch,72,202,4	script	Guia#embguide	4_M_EIN_SOLDIER,{
	cutin("ein_soldier",2);
	mes "[Guia de Einbroch]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Einbroch^000000, a Cidade do Metal.";
	next;
	while (1) {
		switch (select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Aeroporto]","[Fábrica]","[Plaza]","[Hotel]","[Estação de Trem]","[Loja de Armas]","[Laboratório]","[Monumento]","[Guilda dos Ferreiros]","[Guilda dos Justiceiros]","Menu Anterior")) {
					case 1:
					mes "[Guia de Einbroch]";
					mes "Posição do^0000FF Aeroporto^000000 marcado em seu mini mapa.";
					next;
					break;
					case 2:
					mes "[Guia de Einbroch]";
					mes "Posição da^0000FF Fábrica^000000 marcada em seu mini mapa.";
					viewpoint (1,129,79,1,0xFF4500);
					next;
					break;
					case 3:
					mes "[Guia de Einbroch]";
					mes "Posição do^0000FF Plaza^000000 marcado em seu mini mapa.";
					viewpoint (1,254,199,2,0xDAA520);
					next;
					break;
					case 4:
					mes "[Guia de Einbroch]";
					mes "Posição do^0000FF Hotel^000000 marcado em seu mini mapa.";
					viewpoint (1,254,199,3,0x008000);
					next;
					break;
					case 5:
					mes "[Guia de Einbroch]";
					mes "Posição da^0000FF Estação de Trem^000000 marcada em seu mini mapa.";
					viewpoint (1,232,272,4,0x0000FF);
					next;
					break;
					case 6:
					mes "[Guia de Einbroch]";
					mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
					viewpoint (1,216,211,5,0x000080);
					next;
					break;
					case 7:
					mes "[Guia de Einbroch]";
					mes "Posição da^0000FF Laboratório^000000 marcada em seu mini mapa.";
					viewpoint (1,55,52,6,0x800080);
					next;
					break;
					case 8:
					mes "[Guia de Einbroch]";
					mes "Posição do^0000FF Monumento^000000 marcado em seu mini mapa.";
					viewpoint (1,178,173,7,0x808080);
					next;
					break;
					case 9:
					mes "[Guia de Einbroch]";
					mes "Posição da^0000FF Guilda dos Ferreiros^000000 marcada em seu mini mapa.";
					viewpoint (1,255,110,8,0x556B2F);
					next;
					break;
					case 10:
					mes "[Guia de Einbroch]";
					mes "Posição da^0000FF Guilda dos Justiceiros^000000 marcada em seu mini mapa.";
					viewpoint (1,130,197,9,0x008080);
					next;
					break;
					case 11:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Armeiro]","[Funcionária Kafra]","[Oficial Eden]","Menu Anterior")) {
					case 1:
					mes "[Guia de Einbroch]";
					mes "Posição do^0000FF Armeiro^000000 marcado em seu mini mapa.";
					viewpoint (1,255,110,10,0xFF1493);
					next;
					break;
					case 2:
					mes "[Guia de Einbroch]";
					mes "Posição das^0000FF Funcionárias Kafra^000000 marcadas em seu mini mapa.";
					viewpoint (1,242,205,11,0xDA70D6);
					viewpoint (1,59,203,12,0xDA70D6);
					next;
					break;
					case 3:
					mes "[Guia de Einbroch]";
					mes "Posição do^0000FF Oficial Eden^000000 marcado em seu mini mapa.";
					viewpoint (1,130,197,13,0xCD1039);
					next;
					break;
					case 4:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Einbroch]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,64,204,0,0xFFFFFF);
			viewpoint (2,129,79,1,0xFFFFFF);
			viewpoint (2,254,199,2,0xFFFFFF);
			viewpoint (2,254,199,3,0xFFFFFF);
			viewpoint (2,232,272,4,0xFFFFFF);
			viewpoint (2,216,211,5,0xFFFFFF);
			viewpoint (2,55,52,6,0xFFFFFF);
			viewpoint (2,178,173,7,0xFFFFFF);
			viewpoint (2,255,110,8,0xFFFFFF);
			viewpoint (2,130,197,9,0xFFFFFF);
			viewpoint (2,255,110,10,0xFFFFFF);
			viewpoint (2,242,205,11,0xFFFFFF);
			viewpoint (2,59,203,12,0xFFFFFF);
			viewpoint (2,130,197,13,0xDA70D6);
			next;
			break;
			case 4:
			mes "[Guia de Einbroch]";
			mes "Aproveite sua estadia.";
			close2;
			cutin("",255);
			end;
		}
	}
}

einbroch,155,43,4	duplicate(Guia#embguide)	Guia#embguide_b	4_M_EIN_SOLDIER
einbroch,162,317,4	duplicate(Guia#embguide)	Guia#embguide_c	4_M_EIN_SOLDIER
