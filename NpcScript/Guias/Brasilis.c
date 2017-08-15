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
| - Desenvolvido por: Spell Master                                  |
| - Nota: Guias de Brasilis                                         |
\*-----------------------------------------------------------------*/

brasilis,219,97,3	script	Brasilis Guide	4_F_BRZ_WOMAN,{
	mes "[Guia de Brasilis]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Brasilis^000000.";
	next;
	while (1) {
		switch(select("[Hotel]","[Entrada da Selva]","[Museu]","[Mercado]","[Monumento Verass]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Brasilis]";
			mes "Posição do^0000FF Hotel^000000 marcado em seu mini mapa.";
			viewpoint (1,274,151,2,0xFF3355);
			next;
			break;
			case 2:
			mes "[Guia de Brasilis]";
			mes "Posição da^0000FF Entrada da Selva^000000 marcada em seu mini mapa.";
			viewpoint (1,308,335,3,0xCE6300);
			next;
			break;
			case 3:
			mes "[Guia de Brasilis]";
			mes "Posição da^0000FF Museu^000000 marcada em seu mini mapa.";
			viewpoint (1,137,167,4,0x00FF00);
			next;
			break;
			case 4:
			mes "[Guia de Brasilis]";
			mes "Posição do^0000FF Mercado^000000 marcado em seu mini mapa.";
			viewpoint (1,254,248,5,0x55FF33);
			close;
			case 5:
			mes "[Guia de Brasilis]";
			mes "Posição da^0000FF Monumento Verass^000000 marcada em seu mini mapa.";
			viewpoint (1,195,235,6,0x3355FF);
			next;
			break;
			case 6:
			mes "[Guia de Brasilis]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (0,274,151,2,0x00FF00);
			viewpoint (0,308,335,3,0x00FF00);
			viewpoint (0,137,167,4,0x00FF00);
			viewpoint (0,254,248,5,0x00FF00);
			viewpoint (0,195,235,6,0x00FF00);
			next;
			break;
			case 7:
			mes "[Guia de Alberta]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}