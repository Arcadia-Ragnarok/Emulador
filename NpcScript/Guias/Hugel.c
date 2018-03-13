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
| - Info: Guias de Hugel                                            |
\*-----------------------------------------------------------------*/

hugel,98,56,3	script	Guia#hugguide	4_F_LGTGRAND,{
	mes "[Guia de Hegel]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Hugel^000000^000000.";
	while (1) {
		switch(select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Igreja]","[Estalagem]","[Bar]","[Aeroporto]","[Loja de Armas]","[Loja de Utilidades]","[Guilda dos Caçadores]","[Loja de Artigos]","[Expedição ao Santuário]","Menu Anterior")) {
					case 1:
					mes "[Guia de Hugel]";
					mes "Posição da^0000FF Igreja^000000 marcada em seu mini mapa.";
					viewpoint (1,159,113,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Hugel]";
					mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
					viewpoint (1,101,77,1,0x8B4513);
					next;
					break;
					case 3:
					mes "[Guia de Hugel]";
					mes "Posição do^0000FF Bar^000000 marcado em seu mini mapa.";
					viewpoint (1,126,65,2,0xDAA520);
					next;
					break;
					case 4:
					mes "[Guia de Hugel]";
					mes "Posição do^0000FF Aeroporto^000000 marcado em seu mini mapa.";
					viewpoint (1,178,146,3,0xD7567F);
					next;
					break;
					case 5:
					mes "[Guia de Hugel]";
					mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
					viewpoint (1,88,167,4,0xCD5C5C);
					next;
					break;
					case 6:
					mes "[Guia de Hugel]";
					mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,92,163,5,0x000080);
					next;
					break;
					case 7:
					mes "[Guia de Hugel]";
					mes "Posição da^0000FF Guilda dos Caçadores^000000 marcada em seu mini mapa.";
					viewpoint (1,209,224,6,0xFF1493);
					next;
					break;
					case 8:
					mes "[Guia de Hugel]";
					mes "Posição da^0000FF Loja de Artigos^000000 marcada em seu mini mapa.";
					viewpoint (1,95,103,7,0x483D8B);
					next;
					break;
					case 9:
					mes "[Guia de Hugel]";
					mes "Posição da^0000FF Expedição ao Santuário^000000 marcada em seu mini mapa.";
					viewpoint (1,52,95,8,0x834683);
					next;
					break;
					case 10:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Representante Eventos Inc.]","Menu Anterior")) {
					case 1:
					mes "[Guia de Hugel]";
					mes "Posição do^0000FF Representante Eventos Inc.^000000 marcado em seu mini mapa.";
					viewpoint (1,88,168,9,0xDA70D6);
					next;
					break;
					case 2:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Hugel]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,159,113,0,0xFFFFFF);
			viewpoint (2,101,77,1,0xFFFFFF);
			viewpoint (2,126,65,2,0xFFFFFF);
			viewpoint (2,178,146,3,0xFFFFFF);
			viewpoint (2,88,167,4,0xFFFFFF);
			viewpoint (2,92,163,5,0xFFFFFF);
			viewpoint (2,58,206,6,0xFFFFFF);
			viewpoint (2,209,224,7,0xFFFFFF);
			viewpoint (2,95,103,8,0xFFFFFF);
			viewpoint (2,52,95,9,0xFFFFFF);
			next;
			break;
			case 4:
			mes "[Guia de Hugel]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}

hugel,187,172,6	duplicate(Guia#hugguide)	Guia#hugguide_b	4_M_CRU_KNT
