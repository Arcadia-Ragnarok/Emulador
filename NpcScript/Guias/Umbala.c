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
| - Info: Guias de Umbala                                           |
\*-----------------------------------------------------------------*/

umbala,128,94,3	script	Guia#umbguide	4_F_GON,{
	mes "[Guia de Umbala]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Alberta^000000, o Vilarejo da Tribo Wotan..";
	while (1) {
		next;
		switch (select("[Funcionária Kafra]","[Cabana do Chefe]","[Cabana do Xamã]","[Loja de Armas]","[Loja de Utilidades]","[Ponte do Suícidio]","[Tronco da Yggdrasil]","Remover marcadores do mini-mapa","Cancelar")) {
			case 1:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
			viewpoint (1,87,160,0,0x0A82FF);
			break;
			case 2:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Cabana do Chefe^000000 marcada em seu mini mapa.";
			viewpoint (1,68,251,1,0xAAFF00);
			break;
			case 3:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Cabana do Shaman^000000 marcada em seu mini mapa.";
			viewpoint (1,219,188,2,0x008080);
			break;
			case 4:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,125,155,3,0xFF1493);
			break;
			case 5:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,136,127,4,0x8B4513);
			break;
			case 6:
			mes "[Guia de Alberta]";
			mes "Posição da^0000FF Ponte do Suícidio^000000 marcada em seu mini mapa.";
			viewpoint (1,221,176,5,0x9400D3);
			break;
			case 7:
			mes "[Guia de Alberta]";
			mes "Posição do^0000FF Tronco da Yggdrasil^000000 marcada em seu mini mapa.";
			viewpoint (1,107,284,6,0xA52A2A);
			break;
			case 8:
			mes "[Umbala Guide]";
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
			mes "[Umbala Guide]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}
