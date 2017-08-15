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
| - Nota: Guias de Malaya                                           |
\*-----------------------------------------------------------------*/

malaya,71,72,4	script	Guia#malyguide	4_F_BARYO_WOMAN,{
	mes "[Guia de Malaya]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Malaya^000000, o Vilareijo da Respiração..";
	while(1) {
		next;
		switch(select("[Funcionária Kafras]","[Estalagem & Taverna]","[Loja de Equipamentos]","[Loja de Utilidades]","[Hospital]","[Parque]","[Porto]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Mora]";
			mes "Posição das^0000FF Funcionárias Kafras^000000 marcadas em seu mini mapa.";
			viewpoint (1,71,79,0,0x0A82FF);
			viewpoint (1,234,204,1,0x0A82FF);
			break;
			case 2:
			mes "[Guia de Mora]";
			mes "Posição da^0000FF Estalagem & Taverna^000000 marcada em seu mini mapa.";
			viewpoint (1,193,215,2,0xAAFF00);
			break;
			case 3:
			mes "[Guia de Mora]";
			mes "Posição da^0000FF Loja de Equipamentos^000000 marcada em seu mini mapa.";
			viewpoint (1,114,212,3,0x4F543C);
			break;
			case 4:
			mes "[Guia de Mora]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,297,167,4,0xFF1493);
			break;
			case 5:
			mes "[Guia de Mora]";
			mes "Posição do^0000FF Hospital^000000 marcado em seu mini mapa.";
			viewpoint (1,50,75,5,0x8B4513);
			break;
			case 6:
			mes "[Guia de Mora]";
			mes "Posição do^0000FF Parque^000000 marcado em seu mini mapa.";
			viewpoint (1,280,371,6,0x8B4513);
			break;
			case 7:
			mes "[Guia de Mora]";
			mes "Posição do^0000FF Porto^000000 marcado em seu mini mapa.";
			viewpoint (1,276,55,7,0x8A2BE2);
			break;
			case 8:
			mes "[Guia de Mora]";
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
			case 9:
			mes "[Guia de Mora]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}

malaya,250,83,6	duplicate(Guia#malyguide)	Guia#malyguide_b	4_F_BARYO_WOMAN
malaya,224,204,6	duplicate(Guia#malyguide)	Guia#malyguide_c	4_F_BARYO_WOMAN
