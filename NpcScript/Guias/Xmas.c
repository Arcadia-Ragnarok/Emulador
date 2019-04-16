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
| - Info: Guia de Lutie                                             |
\*-----------------------------------------------------------------*/

xmas,140,137,3	script	Guia#xmaguide	4_F_KID3,{
	mes "[Guia de Lutie]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Lutie^000000, a Cidade Natalina.";
	while (1) {
		next;
		switch (select("[Loja de Presentes]","[Igreja]","[Loja de Equipamentos]","[Loja de Utilidades]","[Casa do Papai Noel]","[Fábrica de Brinquedos]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Lutie]";
			mes "Posição da^0000FF Loja de Presentes^000000 marcada em seu mini mapa.";
			viewpoint (1,172,131,2,0x008080);
			break;
			case 2:
			mes "[Guia de Lutie]";
			mes "Posição da^0000FF Igreja^000000 marcada em seu mini mapa.";
			viewpoint (1,104,287,1,0xAAFF00);
			break;
			case 3:
			mes "[Guia de Lutie]";
			mes "Posição da^0000FF Loja de Equipamentos^000000 marcada em seu mini mapa.";
			viewpoint (1,171,158,3,0xFF1493);
			break;
			case 4:
			mes "[Guia de Lutie]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,122,131,4,0x8B4513);
			break;
			case 5:
			mes "[Guia de Lutie]";
			mes "Posição da^0000FF Cada do Papai Noel^000000 marcada em seu mini mapa.";
			viewpoint (1,149,237,5,0x9400D3);
			break;
			case 6:
			mes "[Guia de Lutie]";
			mes "Posição da^0000FF Fábrica de Brinquedos^000000 marcada em seu mini mapa.";
			viewpoint (1,143,312,6,0xFF0000);
			break;
			case 7:
			mes "[Lutie Guide]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,1,1,0,0xFFFFFF);
			viewpoint (2,1,1,1,0xFFFFFF);
			viewpoint (2,1,1,2,0xFFFFFF);
			viewpoint (2,1,1,3,0xFFFFFF);
			viewpoint (2,1,1,4,0xFFFFFF);
			viewpoint (2,1,1,5,0xFFFFFF);
			viewpoint (2,1,1,6,0xFFFFFF);
			break;
			case 8:
			mes "[Lutie Guide]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}