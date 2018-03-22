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
| - Info: Guias de Ayothaya                                         |
\*-----------------------------------------------------------------*/

ayothaya,203,169,4	script	Guia#ayoguide	4_F_THAIGIRL,{
	mes "[Guia de Ayothaya]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Ayothaya^000000.";
	while (1) {
		next;
		switch (select("[Loja de Armas]","[Loja de Utilidades]","[Taverna]","[Santuário]","[Local de Pesca]",
			"Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Ayothaya]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,163,90,0,0x0A82FF);
			break;
			case 2:
			mes "[Guia de Ayothaya]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,131,86,1,0xAAFF00);
			break;
			case 3:
			mes "[Guia de Ayothaya]";
			mes "Posição da^0000FF Taverna^000000 marcada em seu mini mapa.";
			viewpoint (1,229,72,2,0x008080);
			break;
			case 4:
			mes "[Guia de Ayothaya]";
			mes "Posição do^0000FF Santuário^000000 marcado em seu mini mapa.";
			viewpoint (1,208,280,3,0xFF1493);
			break;
			case 5:
			mes "[Guia de Ayothaya]";
			mes "Posição do^0000FF Local de Pesca^000000 marcado em seu mini mapa.";
			viewpoint (1,255,99,4,0x8B4513);
			break;
			case 6:
			mes "[Guia de Ayothaya]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,1,1,0,0xFFFFFF);
			viewpoint (2,1,1,1,0xFFFFFF);
			viewpoint (2,1,1,2,0xFFFFFF);
			viewpoint (2,1,1,3,0xFFFFFF);
			viewpoint (2,1,1,4,0xFFFFFF);
			break;
			case 7:
			mes "[Guia de Ayothaya]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}

ayothaya,146,86,4	duplicate(Guia#ayoguide)	Guia#ayoguide_b	4_F_THAIGIRL
