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
| - Info: Guias de Comodo                                           |
\*-----------------------------------------------------------------*/

comodo,322,178,4	script	Guia#comguide	8_F_GIRL,{
	mes "[Guia de Comodo]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Comodo^000000^000000, a Cidade do Farol.";
	next;
	while (1) {
		switch (select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Taverna]","[Cassino]","[Loja de Utilidades]","[Acampamento]","[Vendedor de Souvenir]","[Mao, a Caverna do Leste]","[Karu, a Caverna do Oeste]","[Ruanda, a Caverna do Norte]","[Clube de Dança]","Menu Anterior")) {
					case 1:
					mes "[Guia de Comodo]";
					mes "Posição da^0000FF Taverna^000000 marcada em seu mini mapa.";
					viewpoint (1,166,298,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Comodo]";
					mes "Posição do^0000FF Cassino^000000 marcado em seu mini mapa.";
					viewpoint (1,140,98,1,0xFFA500);
					next;
					break;
					case 3:
					mes "[Guia de Comodo]";
					mes "Posição da^0000FF Loja de Equipamentos^000000 marcada em seu mini mapa.";
					viewpoint (1,266,70,2,0xFF4500);
					next;
					break;
					case 4:
					mes "[Guia de Comodo]";
					mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,86,128,3,0xB8860B);
					next;
					break;
					case 5:
					mes "[Guia de Comodo]";
					mes "Posição do^0000FF Acampamento^000000 marcado em seu mini mapa.";
					viewpoint (1,210,308,4,0x32CD32);
					next;
					break;
					case 6:
					mes "[Guia de Comodo]";
					mes "Posição do^0000FF Vendedor de Souvenir^000000 marcado em seu mini mapa.";
					viewpoint (1,298,124,5,0x6B8E23);
					next;
					break;
					case 7:
					mes "[Guia de Comodo]";
					mes "Posição da^0000FF Mao, a Caverna do Leste^000000 marcada em seu mini mapa.";
					viewpoint (1,333,175,6,0x008B8B);
					next;
					break;
					case 8:
					mes "[Guia de Comodo]";
					mes "Posição da^0000FF Karu, a Caverna do Oeste^000000 marcada em seu mini mapa.";
					viewpoint (1,24,214,7,0x1E90FF);
					next;
					break;
					case 9:
					mes "[Guia de Comodo]";
					mes "Posição da^0000FF Ruanda, a Caverna do Norte^000000 marcada em seu mini mapa.";
					viewpoint (1,176,358,8,0x0000CD);
					next;
					break;
					case 10:
					mes "[Guia de Comodo]";
					mes "Posição do^0000FF Clube de Dança^000000 marcado em seu mini mapa.";
					viewpoint (1,188,168,9,0xC71585);
					next;
					break;
					case 11:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch (select("[Casa do Chefe]","[Bor Robin]","[Funcionária Kafra]","[Bardo Andarilho]","Menu Anterior")) {
					case 1:
					mes "[Guia de Comodo]";
					mes "Posição da^0000FF Casa do Chefe^000000 marcada em seu mini mapa.";
					viewpoint (1,114,294,10,0x6495ED);
					next;
					break;
					case 2:
					mes "[Guia de Comodo]";
					mes "Posição do^0000FF Bor Robin^000000 marcado em seu mini mapa.";
					viewpoint (1,193,151,11,0x228B22);
					next;
					break;
					case 3:
					mes "[Guia de Comodo]";
					mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
					viewpoint (1,195,149,12,0x1E90FF);
					next;
					break;
					case 4:
					mes "[Guia de Comodo]";
					mes "Posição do^0000FF Bardo Andarilho^000000 marcado em seu mini mapa.";
					viewpoint (1,211,155,13,0xDB7093);
					next;
					break;
					case 5:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Comodo Guide]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,166,298,0,0xFFFFFF);
			viewpoint (2,140,98,1,0xFFFFFF);
			viewpoint (2,266,70,2,0xFFFFFF);
			viewpoint (2,86,128,3,0xFFFFFF);
			viewpoint (2,210,308,4,0xFFFFFF);
			viewpoint (2,298,124,5,0xFFFFFF);
			viewpoint (2,333,175,6,0xFFFFFF);
			viewpoint (2,24,214,7,0xFFFFFF);
			viewpoint (2,176,358,8,0xFFFFFF);
			viewpoint (2,188,168,9,0xFFFFFF);
			viewpoint (2,136,202,10,0xFFFFFF);
			viewpoint (2,114,294,11,0xFFFFFF);
			viewpoint (2,193,151,12,0xFFFFFF);
			viewpoint (2,195,149,13,0xFFFFFF);
			next;
			break;
			case 4:
			mes "[Comodo Guide]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}

comodo,176,350,4	duplicate(Guia#comguide)	Guia#comguide_b	8_F_GIRL
comodo,37,219,3	duplicate(Guia#comguide)	Guia#comguide_c	8_F_GIRL
