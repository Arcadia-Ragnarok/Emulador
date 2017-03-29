/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Por: eAthena/rAthena/Hercules                                   |
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na Caverna de Gelo                            |
\*-----------------------------------------------------------------*/

ice_dun04,33,166,3	script	Garoto congelado#ice	4_M_FROZEN,{
	cutin "ra_sboy.bmp",2;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Este garoto deve ser o que Ktullanux tenta proteger.";
	next;
	mes "- O garoto est� congelado dentro de uma grande pedra de gelo e parece mais que ele est� dormindo do que morto. -";
	next;
	mes "- Voc� se sente congelando ao se aproximar da grande pedra de gelo que prende o garoto,";
	mes "- mas por alguma raz�o, voc� sente uma for�a misteriosa vindo da pedra. -";
	next;
	mes "- O garoto parece ser branco como a neve, e bonito da cabe�a aos p�s. -";
	next;
	mes "- Voc� se pergunta porqu� um jovem garoto teve de ser confinado nesta caverna isolada, -";
	mes "- voc� instintivamente sabe que nenhuma magia no mundo seria capaz de libert�-lo desta pedra de gelo. -";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "O que aconteceu a este garoto?";
	close2;
	cutin "",255;
	end;
}