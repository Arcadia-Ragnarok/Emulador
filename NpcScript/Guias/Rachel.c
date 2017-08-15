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
| - Nota: Guias de Rachel                                           |
\*-----------------------------------------------------------------*/

rachel,138,146,5	script	Rachel Guide#rachel	4_M_RASWORD,{
	mes "[Guia de Rachel]";
	mes "Bem-vind"+(Sex == SEX_MALE ?"o":"a")+" a ^8B4513Rachel^000000, Capital de Arunafeltz";
	next;
	while (1) {
		switch(select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores do mini-mapa","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Estalagem]","[Loja de Armas]","[Loja de Utilidades]","[Aeroporto]","[Cheshrumnir]","[Casa de Zed]","Menu Anterior")) {
					case 1:
					mes "[Guia de Rachel]";
					mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
					viewpoint (1,115,144,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Rachel]";
					mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
					viewpoint (1,42,82,1,0xFF4500);
					next;
					break;
					case 3:
					mes "[Guia de Rachel]";
					mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,83,73,2,0xDAA520);
					next;
					break;
					case 4:
					mes "[Guia de Rachel]";
					mes "Posição do^0000FF Aeroporto^000000 marcado em seu mini mapa.";
					viewpoint (1,272,125,3,0x008000);
					next;
					break;
					case 5:
					mes "[Guia de Rachel]";
					mes "Posição da^0000FF Cheshrumnir^000000 marcada em seu mini mapa.";
					viewpoint (1,150,243,4,0x0000FF);
					next;
					break;
					case 6:
					mes "[Guia de Rachel]";
					mes "Posição da^0000FF Casa de Zed^000000 marcada em seu mini mapa.";
					viewpoint (1,98,238,5,0x000080);
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
				switch(select("[Representante Eventos Inc.]","[Oficial Eden]","Menu Anterior")) {
					case 1:
					mes "[Guia de Rachel]";
					mes "Posição da^0000FF Representante Eventos Inc.^000000 marcada em seu mini mapa.";
					viewpoint (1,110,138,7,0x803232);
					next;
					break;
					case 2:
					mes "[Guia de Rachel]";
					mes "Posição da^0000FF Representante Eventos Inc.^000000 marcada em seu mini mapa.";
					viewpoint (1,125,144,8,0x556B2F);
					next;
					break;
					case 3:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Rachel Guide]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,115,144,0,0xFFFFFF);
			viewpoint (2,42,82,1,0xFFFFFF);
			viewpoint (2,83,73,2,0xFFFFFF);
			viewpoint (2,272,125,3,0xFFFFFF);
			viewpoint (2,150,243,4,0xFFFFFF);
			viewpoint (2,98,238,5,0xFFFFFF);
			viewpoint (2,110,138,7,0xFFFFFF);
			viewpoint (2,125,144,8,0xFFFFFF);
			next;
			break;
			case 4:
			mes "[Rachel Guide]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}
