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
| - Copyright: Spell Master                                         |
| - Info: Npcs comuns nos Campos de Juno                            |
\*-----------------------------------------------------------------*/

yuno_fild08,196,196,5	script	Hanie#yunf	8_F,{
	mes "[Hanie]";
	mes "Oh, eu gostaria de poder estudar na Academia de Kiel Hyre...";
	mes "Todos os formandos conseguem excelentes empregos!";
	mes "Estou quase com ci�mes dos estudantes!";
	next;
	select("Academia Kiel Hyre?");
	mes "[Hanie]";
	mes "Oh, a Academia de Kiel Hyre � uma escola fundada por Kiel Hyre.";
	mes "Um inventor que se tornou rico por suas estranhas m�quinas.";
	mes "Ele decidiu devolver � sociedade construindo essa Academia particular.";
	next;
	mes "[Hanie]";
	mes "De qualquer forma, a escola somente aceitar� �rf�os que s�o t�o pobres para entrar em qualquer outra escola.";
	mes "Algumas vezes me faz desejar que eu fosse um �rf�o tamb�m!";
	mes "Bem, nem tanto, mas sabe...";
	close;
}
