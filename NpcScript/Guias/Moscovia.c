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
| - Info: Guias de Moscovia                                         |
\*-----------------------------------------------------------------*/

moscovia,161,76,3	script	Guia#moscguide	4_F_RUSWOMAN1,{
	mes "[Guia de Moscovia]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Moscovia^000000, o paraíso perto ao mar.";
	while (1) {
		next;
		switch(select("[Funcionária Kafra]","[Palácio]","[Capela]","[Loja de Armas]","[Loja de Armaduras]","[Loja de Utilidades]","[Estalagem]","[Marina]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Moscovia]";
			mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
			viewpoint (1,223,191,0,0x0A82FF);
			break;
			case 2:
			mes "[Guia de Moscovia]";
			mes "Posição do^0000FF Palácio^000000 marcado em seu mini mapa.";
			viewpoint (1,255,140,1,0x0A82FF);
			break;
			case 3:
			mes "[Guia de Moscovia]";
			mes "Posição da^0000FF Capela^000000 marcada em seu mini mapa.";
			viewpoint (1,253,179,2,0xAAFF00);
			break;
			case 4:
			mes "[Guia de Moscovia]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,186,191,3,0x008080);
			break;
			case 5:
			mes "[Guia de Moscovia]";
			mes "Posição da^0000FF Loja de Armaduras^000000 marcada em seu mini mapa.";
			viewpoint (1,204,169,4,0xB200FF);
			break;
			case 6:
			mes "[Guia de Moscovia]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,221,176,5,0xFF1493);
			break;
			case 7:
			mes "[Guia de Moscovia]";
			mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
			viewpoint (1,227,206,6,0x8B4513);
			break;
			case 8:
			mes "[Guia de Moscovia]";
			mes "Posição da^0000FF Marina^000000 marcada em seu mini mapa.";
			viewpoint (1,166,53,7,0x00BFFF);
			break;
			case 9:
			mes "[Guia de Moscovia]";
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
			mes "[Guia de Moscovia]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}

moscovia,226,191,4	duplicate(Guia#moscguide)	Guia#moscguide_b	4_F_RUSWOMAN1
