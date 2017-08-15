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
| - Nota: Guia de Amatsu                                            |
\*-----------------------------------------------------------------*/

amatsu,202,91,3	script	Guia#amaguide	4_F_JPN,{
	mes "[Guia de Alberta]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Amatsu^000000, a Cidade no Oriente.";
	while (1) {
		next;
		switch(select("[Funcionária Kafra]","[Bar]","[Loja de Armas]","[Loja de Utilidades]","[Palácio]","[Cozinheiro]","[Guilda dos Ninjas]","[Capitão]","Remover marcadores","Cancelar")) {
			case 1:
			mes "[Guia de Amastu]";
			mes "Posição da^0000FF Funcionária Kafra^000000 marcada em seu mini mapa.";
			viewpoint (1,102,149,0,0x0A82FF);
			break;
			case 2:
			mes "[Guia de Amastu]";
			mes "Posição do^0000FF Bar^000000 marcado em seu mini mapa.";
			viewpoint (1,215,116,1,0xAAFF00);
			break;
			case 3:
			mes "[Guia de Amastu]";
			mes "Posição da^0000FF Loja de Armas^000000 marcada em seu mini mapa.";
			viewpoint (1,129,117,2,0x008080);
			break;
			case 4:
			mes "[Guia de Amastu]";
			mes "Posição da^0000FF Loja de Utilidades^000000 marcada em seu mini mapa.";
			viewpoint (1,97,117,3,0xFF1493);
			break;
			case 5:
			mes "[Guia de Amastu]";
			mes "Posição do^0000FF Palácio^000000 marcado em seu mini mapa.";
			viewpoint (1,87,235,4,0x8B4513);
			break;
			case 6:
			mes "[Guia de Amastu]";
			mes "Posição do^0000FF Cozinheiro^000000 marcado em seu mini mapa.";
			viewpoint (1,206,150,5,0x8A2BE2);
			break;
			case 7:
			mes "[Guia de Amastu]";
			mes "Posição da^0000FF Guilda dos Ninjas^000000 marcada em seu mini mapa.";
			viewpoint (1,148,137,6,0x4B0082);
			break;
			case 8:
			mes "[Guia de Amastu]";
			mes "Posição do^0000FF Capitão^000000 marcado em seu mini mapa.";
			viewpoint (1,195,79,7,0x00BFFF);
			break;
			case 9:
			mes "[Guia de Amastu]";
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
			mes "[Guia de Amastu]";
			mes "Aproveite sua estadia.";
			close;
		}
	}
}
