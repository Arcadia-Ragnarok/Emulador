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
| - Info: Guia de Louyang                                           |
\*-----------------------------------------------------------------*/

louyang,224,104,4	script	Guia#louguide	4_F_CHNWOMAN,{
	mes "[Guia de Louyang]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Louyang^000000.";
	while (1) {
		next;
		switch (select("[Castelo do Dragão]","[Consultório Médico]","[Prefeitura]","[Loja de Armas]","[Loja de Utilidades]","[Taverna]","[Observatorio]","[Retorno a Alberta]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Louyang]";
			mes "Posição do^0000FF Castelo do Dragão^000000 marcado em seu mini mapa.";
			viewpoint (1,218,253,0,0x0A82FF);
			break;
			case 2:
			mes "[Guia de Louyang]";
			mes "Posição do^0000FF Consultório Médico^000000 marcado em seu mini mapa.";
			viewpoint (1,261,93,1,0xAAFF00);
			break;
			case 3:
			mes "[Guia de Louyang]";
			mes "Posição da^0000FF Prefeitura^000000 marcada em seu mini mapa.";
			viewpoint (1,309,78,2,0x20B2AA);
			break;
			case 4:
			mes "[Guia de Louyang]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,145,172,3,0xFF1493);
			break;
			case 5:
			mes "[Guia de Louyang]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,138,99,4,0xFF0000);
			break;
			case 6:
			mes "[Guia de Louyang]";
			mes "Posição da^0000FF Taverna^000000 marcada em seu mini mapa.";
			viewpoint (1,280,165,5,0xDAA520);
			break;
			case 7:
			mes "[Guia de Louyang]";
			mes "Posição do^0000FF Observatorio^000000 marcado em seu mini mapa.";
			viewpoint (1,136,245,6,0xD8BFD8);
			break;
			case 8:
			mes "[Guia de Louyang]";
			mes "Posição do^0000FF Retorno a Alberta^000000 marcado em seu mini mapa.";
			viewpoint (1,218,22,7,0x00BFFF);
			break;
			case 9:
			mes "[Guia de Louyang]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,1,1,0,0xFFFFFF);
			viewpoint (2,1,1,1,0xFFFFFF);
			viewpoint (2,1,1,2,0xFFFFFF);
			viewpoint (2,1,1,3,0xFFFFFF);
			viewpoint (2,1,1,4,0xFFFFFF);
			viewpoint (2,1,1,5,0xFFFFFF);
			viewpoint (2,1,1,6,0xFFFFFF);
			viewpoint (2,1,1,7,0xFFFFFF);
			break;
			case 10:
			mes "[Guia de Louyang]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}
