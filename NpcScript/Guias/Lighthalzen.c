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
| - Info: Guias de Lighthalzen                                      |
\*-----------------------------------------------------------------*/

lighthalzen,207,310,5	script	Guia#lhzguide	4_M_EIN_SOLDIER,{
	cutin("ein_soldier",2);
	mes "[Guia de Lighthalzen]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Lighthalzen^000000, Cidade-Estado da Corporação.";
	next;
	while (1) {
		switch (select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Hotel]","[Banco]","[Aeroporto]","[Loja de Armas]","[Shopping]","[Central de Polícia]","[Joalheria]","[Corp. Eventos Incríveis]","[Laboratório]","[Cenrtro de Pesquisa]","Menu Anterior")) {
					case 1:
					mes "[Guia de Lighthalzen]";
					mes "Posição da^0000FF Hotel^000000 marcada em seu mini mapa.";
					viewpoint (1,160,217,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Lighthalzen]";
					mes "Posição do^0000FF Banco^000000 marcado em seu mini mapa.";
					viewpoint (1,203,257,1,0xFF4500);
					next;
					break;
					case 3:
					mes "[Guia de Lighthalzen]";
					mes "Posição do^0000FF Aeroporto^000000 marcado em seu mini mapa.";
					viewpoint (1,262,75,2,0xDAA520);
					next;
					break;
					case 4:
					mes "[Guia de Lighthalzen]";
					mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
					viewpoint (1,194,35,3,0x7B68EE);
					next;
					break;
					case 5:
					mes "[Guia de Lighthalzen]";
					mes "Posição do^0000FF Shopping^000000 marcado em seu mini mapa.";
					viewpoint (1,202,106,4,0xB91A4D);
					next;
					break;
					case 6:
					mes "[Guia de Lighthalzen]";
					mes "Posição da^0000FF Central de Polícia^000000 marcada em seu mini mapa.";
					viewpoint (1,234,276,5,0x008000);
					next;
					break;
					case 7:
					mes "[Guia de Lighthalzen]";
					mes "Posição da^0000FF Joalheria^000000 marcada em seu mini mapa.";
					viewpoint (1,96,110,6,0x0000FF);
					next;
					break;
					case 8:
					mes "[Guia de Lighthalzen]";
					mes "Posição de^0000FF Corp. Eventos Incríveis^000000 marcado em seu mini mapa.";
					viewpoint (1,238,217,7,0x000080);
					next;
					break;
					case 9:
					mes "[Guia de Lighthalzen]";
					mes "Posição do^0000FF Laboratório^000000 marcado em seu mini mapa.";
					viewpoint (1,101,243,8,0x800080);
					next;
					break;
					case 10:
					mes "[Guia de Lighthalzen]";
					mes "Posição do^0000FF Cenrtro de Pesquisa^000000 marcado em seu mini mapa.";
					viewpoint (1,54,132,9,0x0A9696);
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
				switch (select("[Armeiro]","[Funcionária Kafras]","[Representante Eventos Inc.]","Menu Anterior")) {
					case 1:
					mes "[Guia de Lighthalzen]";
					mes "Posição do^0000FF Armeiro^000000 marcado em seu mini mapa.";
					viewpoint (1,194,35,10,0x0A9696);
					next;
					break;
					case 2:
					mes "[Guia de Lighthalzen]";
					mes "Posição das^0000FF Funcionárias Kafrass^000000 marcadas em seu mini mapa.";
					viewpoint (1,164,99,11,0x008080);
					viewpoint (1,164,99,12,0x008080);
					next;
					break;
					case 3:
					mes "[Guia de Lighthalzen]";
					mes "Posição do^0000FF Representante Eventos Inc.^000000 marcado em seu mini mapa.";
					viewpoint (1,94,247,13,0xFF1493);
					next;
					break;
					case 4:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Lighthalzen]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,160,217,0,0xFFFFFF);
			viewpoint (2,203,257,1,0xFFFFFF);
			viewpoint (2,262,75,2,0xFFFFFF);
			viewpoint (2,194,35,3,0xFFFFFF);
			viewpoint (2,202,106,4,0xFFFFFF);
			viewpoint (2,234,276,5,0xFFFFFF);
			viewpoint (2,96,110,6,0xFFFFFF);
			viewpoint (2,238,217,7,0xFFFFFF);
			viewpoint (2,101,243,8,0xFFFFFF);
			viewpoint (2,54,132,9,0xFFFFFF);
			viewpoint (2,194,35,10,0xFFFFFF);
			viewpoint (2,194,35,11,0xFFFFFF);
			viewpoint (2,222,191,12,0xFFFFFF);
			viewpoint (2,164,99,13,0xFFFFFF);
			next;
			break;
			case 4:
			mes "[Guia de Lighthalzen]";
			mes "Aproveite sua estadia.";
			close2;
			cutin("",255);
			end;
		}
	}
}

lighthalzen,220,310,3	duplicate(Guia#lhzguide)	Guia#lhzguide_b	4_M_EIN_SOLDIER
lighthalzen,154,100,5	duplicate(Guia#lhzguide)	Guia#lhzguide_c	4_M_EIN_SOLDIER
lighthalzen,307,224,3	duplicate(Guia#lhzguide)	Guia#lhzguide_d	4_M_EIN_SOLDIER
