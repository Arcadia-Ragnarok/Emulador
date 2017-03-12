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
| - Nota: Npcs comuns na cidade Juno (yuno)                         |
\*-----------------------------------------------------------------*/

yuno,14,262,5	script	Funcion�rio#yuno01	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirig�vel que voa at� Izlude dentro do Reino de Rune-Midgard.";
	mes "E para Rachel na Rep�blica de Arunafeltz.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, des�a as escadas e pe�a para a Equipe de Recep��o lev�-lo at� o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}

//-------------------------------------------------------------------
yuno,88,263,3	script	Funcion�rio#yuno02	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirig�vel que voa at� Einbroch, Lighthalzen e Hugel na Rep�blica de Schwaltzvalt.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, des�a as escadas e pe�a para a Equipe de Recep��o lev�-lo at� o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}