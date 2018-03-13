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
| - Info: Guias de Einbech                                          |
\*-----------------------------------------------------------------*/

einbech,67,37,4	script	Guia#embeguide	4_M_EIN_SOLDIER,{
	cutin ("ein_soldier",2);
	mes "[Guia de Einbech]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Einbech^000000.";
	next;
	while (1) {
		switch(select("[Taverna]","[Loja de Utilidades]","[Estação de Trem]",
			"[Mina]",
			"[Funcionária Kafra]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Einbech]";
			mes "Posição da^0000FF Taverna^000000 marcada em seu mini mapa.";
			viewpoint (1,157,106,0,0x497649);
			next;
			break;
			case 2:
			mes "[Guia de Einbech]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,177,133,1,0xFA8072);
			next;
			break;
			case 3:
			mes "[Guia de Einbech]";
			mes "Posição da^0000FF Estação de Trem^000000 marcada em seu mini mapa.";
			viewpoint (1,39,215,2,0xCD1039);
			next;
			break;
			case 4:
			mes "[Guia de Einbech]";
			mes "Posição da^0000FF Mina^000000 marcada em seu mini mapa.";
			viewpoint (1,137,248,3,0xDA70D6);
			next;
			break;
			case 5:
			mes "[Guia de Einbech]";
			mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
			viewpoint (1,181,132,4,0xFF1493);
			next;
			break;
			case 6:
			mes "[Guia de Einbech]";
			mes "Claro, irei remover todos os pontos marcados de seu mini-mapa.";
			viewpoint (2,157,106,0,0xFFFFFF);
			viewpoint (2,177,133,1,0xFFFFFF);
			viewpoint (2,39,215,2,0xFFFFFF);
			viewpoint (2,137,248,3,0xFFFFFF);
			viewpoint (2,181,132,4,0xFFFFFF);
			next;
			break;
			case 7:
			mes "[Guia de Einbech]";
			mes "Aproveite sua estadia.";
			close2;
			cutin ("",255);
			end;
		}
	}
}

einbech,48,214,4	duplicate(Guia#embeguide)	Guia#embeguide_b	4_M_EIN_SOLDIER
