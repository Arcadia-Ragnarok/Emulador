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
| - Nota: Guia de Niflheim                                          |
\*-----------------------------------------------------------------*/

niflheim,201,187,3	script	Guia#nifguide	4_M_DIEMAN,{
	mes "[Guia de Niflheim]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Niflheim^000000, cidade dos Mortos.";
	while (1) {
		next;
		switch(select("[Loja de Utilidades]","[Bar]","[Loja de Armas]","[Castelo da Bruxa]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Niflheim]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,218,196,0,0x0A82FF);
			break;
			case 2:
			mes "[Guia de Niflheim]";
			mes "Posição do^0000FF Bar^000000 marcado em seu mini mapa.";
			viewpoint (1,189,208,1,0xAAFF00);
			break;
			case 3:
			mes "[Guia de Niflheim]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,218,170,2,0xDA70D6);
			break;
			case 4:
			mes "[Guia de Niflheim]";
			mes "Posição do^0000FF Castelo da Bruxa^000000 marcado em seu mini mapa.";
			viewpoint (1,255,195,3,0xFF1493);
			break;
			case 5:
			mes "[Guia de Niflheim]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,1,1,0,0xFFFFFF);
			viewpoint (2,1,1,1,0xFFFFFF);
			viewpoint (2,1,1,2,0xFFFFFF);
			viewpoint (2,1,1,3,0xFFFFFF);
			break;
			case 6:
			mes "[Guia de Niflheim]";
			mes "Adeus...";
			close;
		}
	}
}