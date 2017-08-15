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
| - Por: Spell Master                                               |
| - Nota: Guia de Mora                                              |
\*-----------------------------------------------------------------*/

mora,25,158,5	script	Guia#morguide	4_M_RAFLE_GR,{
	mes "[Guia de Mora]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" ao ^8B4513Vilarejo de Mora^000000.";
	next;
	switch(select("[Estalagem]","[Residência Raffle]","[Loja]","[Armazém]","Remover marcadores","Cancelar")) {
		case 1:
		mes "[Guia de Mora]";
		mes "Posição da^0000FF Estalagem^000000 marcada em seu mini mapa.";
		viewpoint (1,44,134,0,0x0A82FF);
		close;
		case 2:
		mes "[Guia de Mora]";
		mes "Posição da^0000FF Residência Raffle^000000 marcada em seu mini mapa.";
		viewpoint (1,119,170,1,0xAAFF00);
		close;
		case 3:
		mes "[Guia de Mora]";
		mes "Posição da^0000FF Loja^000000 marcada em seu mini mapa.";
		viewpoint (1,112,110,2,0xDA70D6);
		close;
		case 4:
		mes "[Guia de Mora]";
		mes "Posição do^0000FF Armazém^000000 marcado em seu mini mapa.";
		viewpoint (1,182,161,3,0xFF1493);
		close;
		case 5:
		mes "[Guia de Mora]";
		mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
		viewpoint (2,1,1,0,0xFFFF00);
		viewpoint (2,1,1,1,0xFFFF00);
		viewpoint (2,1,1,2,0xFFFF00);
		viewpoint (2,1,1,3,0xFFFF00);
		close;
		case 6:
		mes "[Guia de Mora]";
		mes "Aproveite sua estadia.";
		close;
	}
}

mora,167,76,3	duplicate(Guia#morguide)	Guia#morguide_b	4_M_RAFLE_OR
mora,115,138,5	duplicate(Guia#morguide)	Guia#morguide_c	4_M_RAFLE_VI
mora,72,51,3	duplicate(Guia#morguide)	Guia#morguide_d	4_F_RAFLE_PK
