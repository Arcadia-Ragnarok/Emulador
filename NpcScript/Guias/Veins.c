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
| - Info: Guias de Veins                                            |
\*-----------------------------------------------------------------*/

veins,210,345,5	script	Guia#veiguide	4_M_RASWORD,{
	mes "[Guia de Veins]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Veins^000000, o Vilarejo do Defiladeiro..";
	next;
	while (1) {
		switch(select("[Templo]","[Estalagem]","[Bar]","[Loja de Armas]","[Loja de Utilidades]","[Aeroporto]","[Instituto de Pesquisa Geológica]","[Representante Eventos Inc.]","Remover marcadores do mini-mapa","Cancelar")) {
			case 1:
			mes "[Guia de Alberta]";
			mes "Posição do^0000FF Templo^000000 marcado em seu mini mapa.";
			viewpoint (1,197,256,0,0xFF0000);
			next;
			break;
			case 2:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
			viewpoint (1,110,278,1,0xFF4500);
			next;
			break;
			case 3:
			mes "[Guia de Alberta]";
			mes "Posição do^0000FF Bar^000000 marcado em seu mini mapa.";
			viewpoint (1,150,215,2,0xDAA520);
			next;
			break;
			case 4:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,150,175,3,0x008000);
			next;
			break;
			case 5:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,230,161,4,0x0000FF);
			next;
			break;
			case 6:
			mes "[Guia de Alberta]";
			mes "Posição do^0000FF Aeroporto^000000 marcado em seu mini mapa.";
			mes "Mas no momento ele se encontra desativado.";
			viewpoint (1,273,287,5,0x000080);
			next;
			break;
			case 7:
			mes "[Guia de Alberta]";
			mes "Posição do^0000FF Instituto de Pesquisa^000000 marcado em seu mini mapa.";
			viewpoint (1,150,175,6,0x800080);
			next;
			break;
			case 8:
			mes "[Guia de Alberta]";
			mes "Posição do^0000FF Eventos Incríveis^000000 marcado em seu mini mapa.";
			viewpoint (1,209,127,7,0x808080);
			next;
			break;
			case 9:
			mes "[Guia de Veins]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,197,256,0,0xFFFFFF);
			viewpoint (2,110,278,1,0xFFFFFF);
			viewpoint (2,150,215,2,0xFFFFFF);
			viewpoint (2,150,175,3,0xFFFFFF);
			viewpoint (2,230,161,4,0xFFFFFF);
			viewpoint (2,273,287,5,0xFFFFFF);
			viewpoint (2,150,175,6,0xFFFFFF);
			viewpoint (2,209,127,7,0xFFFFFF);
			next;
			break;
			case 10:
			mes "[Guia de Veins]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}

veins,189,101,5	duplicate(Guia#veiguide)	Guia#veiguide_b	4_M_RASWORD
