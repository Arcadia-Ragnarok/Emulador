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
| - Nota: Guias de Juno                                             |
\*-----------------------------------------------------------------*/

yuno,59,212,4	script	Guia#yunguide	8_F_GIRL,{
	mes "[Guia de Juno]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Juno^000000, a Cidade cede do Conhecimento.";
	next;
	while (1) {
		switch(select("[Principais Lugares]","[Lojas & Ajudantes]","Remover marcadores","Cancelar")) {
			case 1:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Loja de Utilidades]","[Forja]","[Aeroporto]","[Prédio do Governo]","[Rua das Livrarias]","[Estalagem & Bar]","[Castelo dos Sábios]","[Academia dos Monstros]","[Livraria]","[Loja de Equipamentos]","[Juphero Plaza]","[Museu de Monstros]","[Academia de Magia]","Menu Anterior")) {
					case 1:
					mes "[Guia de Juno]";
					mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
					viewpoint (1,194,140,0,0xFF0000);
					next;
					break;
					case 2:
					mes "[Guia de Juno]";
					mes "Posição da^0000FF Forja^000000 marcada em seu mini mapa.";
					viewpoint (1,120,137,1,0xFF4500);
					next;
					break;
					case 3:
					mes "[Guia de Juno]";
					mes "Posição do^0000FF Aeroporto^000000 marcado em seu mini mapa.";
					viewpoint (1,16,261,2,0xDAA520);
					next;
					break;
					case 4:
					mes "[Guia de Juno]";
					mes "Posição do^0000FF Prédio do Governo^000000 marcado em seu mini mapa.";
					viewpoint (1,157,317,3,0x008000);
					next;
					break;
					case 5:
					mes "[Guia de Juno]";
					mes "Posição da^0000FF Rua das Livrarias^000000 marcada em seu mini mapa.";
					viewpoint (1,172,100,4,0x0000FF);
					next;
					break;
					case 6:
					mes "[Guia de Juno]";
					mes "Posição da^0000FF Estalagem & Bar^000000 marcada em seu mini mapa.";
					viewpoint (1,51,105,5,0x000080);
					next;
					break;
					case 7:
					mes "[Guia de Juno]";
					mes "Posição do^0000FF Castelo dos Sábios^000000 marcado em seu mini mapa.";
					viewpoint (1,90,318,6,0x800080);
					next;
					break;
					case 8:
					mes "[Guia de Juno]";
					mes "Posição da^0000FF Academia dos Monstros^000000 marcada em seu mini mapa.";
					viewpoint (1,95,184,7,0x834683);
					next;
					break;
					case 9:
					mes "[Guia de Juno]";
					mes "Posição da^0000FF Livraria^000000 marcada em seu mini mapa.";
					viewpoint (1,338,203,8,0x4B0082);
					next;
					break;
					case 10:
					mes "[Guia de Juno]";
					mes "Posição da^0000FF Loja de Equipamentos^000000 marcada em seu mini mapa.";
					viewpoint (1,120,137,9,0x008080);
					next;
					break;
					case 11:
					mes "[Guia de Juno]";
					mes "Posição do^0000FF Juphero Plaza^000000 marcado em seu mini mapa.";
					viewpoint (1,115,157,10,0xFF1493);
					next;
					break;
					case 12:
					mes "[Guia de Juno]";
					mes "Posição do^0000FF Museu de Monstros^000000 marcado em seu mini mapa.";
					viewpoint (1,278,290,11,0xDA70D6);
					next;
					break;
					case 13:
					mes "[Guia de Juno]";
					mes "Posição da^0000FF Academia de Magia^000000 marcada em seu mini mapa.";
					viewpoint (1,323,280,12,0xCD1039);
					next;
					break;
					case 14:
					.@loop = 0;
					break;
				}
			}
			break;
			case 2:
			.@loop = 1;
			while (.@loop) {
				switch(select("[Funcionária Kafras]","[Oficial Eden]","Menu Anterior")) {
					case 1:
					mes "[Guia de Juno]";
					mes "Posição das^0000FF Funcionárias Kafras^000000 marcadas em seu mini mapa.";
					viewpoint (1,152,187,13,0xFA8072);
					viewpoint (1,277,221,14,0xFA8072);
					viewpoint (1,327,108,15,0xFA8072);
					next;
					break;
					case 2:
					mes "[Guia de Juno]";
					mes "Posição do^0000FF Oficial Eden^000000 marcado em seu mini mapa.";
					viewpoint (1,144,189,16,0x803232);
					next;
					break;
					case 3:
					.@loop = 0;
					break;
				}
			}
			break;
			case 3:
			mes "[Guia de Juno]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,194,140,0,0xFFFFFF);
			viewpoint (2,120,137,1,0xFFFFFF);
			viewpoint (2,16,261,2,0xFFFFFF);
			viewpoint (2,157,317,3,0xFFFFFF);
			viewpoint (2,172,100,4,0xFFFFFF);
			viewpoint (2,51,105,5,0xFFFFFF);
			viewpoint (2,90,318,6,0xFFFFFF);
			viewpoint (2,95,184,7,0xFFFFFF);
			viewpoint (2,338,203,8,0xFFFFFF);
			viewpoint (2,120,137,9,0xFFFFFF);
			viewpoint (2,115,157,10,0xFFFFFF);
			viewpoint (2,278,290,11,0xFFFFFF);
			viewpoint (2,323,280,12,0xFFFFFF);
			viewpoint (2,152,187,13,0xFFFFFF);
			viewpoint (2,277,221,14,0xFFFFFF);
			viewpoint (2,327,108,15,0xFFFFFF);
			viewpoint (2,144,189,16,0xFFFFFF);
			next;
			break;
			case 4:
			mes "[Guia de Juno]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}

yuno,153,47,4	duplicate(Guia#yunguide)	Guia#yunguide_b	8_F_GIRL
