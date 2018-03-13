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
| - Info: Guias de Dewata                                           |
\*-----------------------------------------------------------------*/

dewata,202,106,4	script	Guia#dewguide	4_M_DEWOLDWOMAN,{
	mes "[Guia de Dewata]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Dewata^000000.";
	while (1) {
		next;
		switch(select("[Funcionária Kafra]","[Loja de Armas]","[Loja de Armaduras]","[Loja de Utilidades]","[Porteiro de Krakatau]","[Retorno à Alberta]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Dewata]";
			mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
			viewpoint (1,202,184,0,0x000FFF);
			break;
			case 2:
			mes "[Guia de Dewata]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,218,163,1,0x008080);
			break;
			case 3:
			mes "[Guia de Dewata]";
			mes "Posição da^0000FF Loja de Armaduras^000000 marcada em seu mini mapa.";
			viewpoint (1,158,182,2,0x008080);
			break;
			case 4:
			mes "[Guia de Dewata]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,182,164,3,0xFF1493);
			break;
			case 5:
			mes "[Guia de Dewata]";
			mes "Posição do^0000FF Porteiro de Krakatau^000000 marcado em seu mini mapa.";
			viewpoint (1,235,56,4,0x8A2BE2);
			break;
			case 6:
			mes "[Guia de Dewata]";
			mes "Posição da^0000FF Retorno à Alberta^000000 marcada em seu mini mapa.";
			viewpoint (1,229,49,5,0x00BFFF);
			break;
			case 7:
			mes "[Guia de Dewata]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,202,184,0,0xFFFFFF);
			viewpoint (2,218,163,1,0xFFFFFF);
			viewpoint (2,158,182,2,0xFFFFFF);
			viewpoint (2,182,164,3,0xFFFFFF);
			viewpoint (2,232,59,4,0xFFFFFF);
			viewpoint (2,195,235,5,0xFFFFFF);
			break;
			case 8:
			mes "[Guia de Dewata]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}

dewata,197,184,4	duplicate(Guia#dewguide)	Guia#dewguide_b	4_M_DEWOLDWOMAN
