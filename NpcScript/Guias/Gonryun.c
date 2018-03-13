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
| - Info: Guia de Kunlun                                            |
\*-----------------------------------------------------------------*/

gonryun,163,60,4	script	Kunlun Guide#01gonryun	8_M_TWSOLDIER,{
	mes "[Guia de Kunlun]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Kunlun^000000.";
	while (1) {
		next;
		switch(select("[Funcionária Kafra]","[Residência do Chefe]","[Loja de Utilidades]","[Loja de Armas]","[Loja de Armaduras]","[Fabricante de Vinho]","[Embaixador de Kunlun]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Kunlun]";
			mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
			viewpoint (1,159,122,0,0x0A82FF);
			break;
			case 2:
			mes "[Guia de Kunlun]";
			mes "Posição da^0000FF Residência do Chefe^000000 marcada em seu mini mapa.";
			viewpoint (1,110,131,1,0xAAFF00);
			break;
			case 3:
			mes "[Guia de Kunlun]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,147,84,2,0xD8BFD8);
			break;
			case 4:
			mes "[Guia de Kunlun]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,174,101,3,0xFF1493);
			break;
			case 5:
			mes "[Guia de Kunlun]";
			mes "Posição da^0000FF Loja de Armaduras^000000 marcada em seu mini mapa.";
			viewpoint (1,173,84,4,0x8B4513);
			break;
			case 6:
			mes "[Guia de Kunlun]";
			mes "Posição do^0000FF Fabricante de Vinho^000000 marcado em seu mini mapa.";
			viewpoint (1,213,115,5,0x9400D3);
			break;
			case 7:
			mes "[Guia de Kunlun]";
			mes "Posição da^0000FF Embaixador de Kunlun^000000 marcada em seu mini mapa.";
			viewpoint (1,161,11,6,0x00BFFF);
			break;
			case 8:
			mes "[Guia de Kunlun]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,1,1,0,0xFFFFFF);
			viewpoint (2,1,1,1,0xFFFFFF);
			viewpoint (2,1,1,2,0xFFFFFF);
			viewpoint (2,1,1,3,0xFFFFFF);
			viewpoint (2,1,1,4,0xFFFFFF);
			viewpoint (2,1,1,5,0xFFFFFF);
			viewpoint (2,1,1,6,0xFFFFFF);
			break;
			case 9:
			mes "[Guia de Kunlun]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}
