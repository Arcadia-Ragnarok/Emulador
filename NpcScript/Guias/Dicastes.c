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
| - Info: Guia de Dicastes                                          |
\*-----------------------------------------------------------------*/

dicastes01,181,191,5	script	Guia#dicguide	4_M_SHADOWCHASER,2,2,{
	mes "[Guia de Dicastes]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à ^8B4513Dicastes^000000.";
	next;
	switch (select("Diel","Área Residencial","Sala de Treino","Fábrica","Bar","Agência Pata de Gato")) {
		case 1:
		mes "[Guia de Dicastes]";
		mes "Posição do^0000FF Diel^000000 marcado em seu mini mapa.";
		viewpoint (1,198,351,0,0x00FF00);
		close;
		case 2:
		mes "[Guia de Dicastes]";
		mes "Posição da^0000FF Área Residencial Baixa^000000 e ^0000FF Área Residencial Alta^000000 marcadas em seu mini mapa.";
		viewpoint (1,280,283,1,0x01FF01);
		viewpoint (1,136,106,2,0x0066FF);
		close;
		case 3:
		mes "[Guia de Dicastes]";
		mes "Posição da^0000FF Sala de Treino^000000 marcada em seu mini mapa.";
		viewpoint (1,255,172,3,0xFFCCCC);
		close;
		case 4:
		mes "[Guia de Dicastes]";
		mes "Posição da^0000FF Fábrica^000000 marcada em seu mini mapa.";
		viewpoint (1,97,256,4,0x0066FF);
		close;
		case 5:
		mes "[Guia de Dicastes]";
		mes "Posição do^0000FF Bar^000000 marcado em seu mini mapa.";
		viewpoint (1,136,106,5,0xFF3300);
		close;
		case 6:
		mes "[Guia de Dicastes]";
		mes "Posição da^0000FF Agência Pata de Gato^000000 marcada em seu mini mapa.";
		viewpoint (1,199,39,6,0x9933FF);
		close;
	}
}
