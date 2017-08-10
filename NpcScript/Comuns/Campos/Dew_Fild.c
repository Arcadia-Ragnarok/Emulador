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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns nos Campos de Dewata.                         |
\*-----------------------------------------------------------------*/

dew_fild01,101,259,6	script	Porteiro da Tribo Jaty	4_M_DEWZATIMAN,{
	mes "[Porteiro da Tribo Jaty]";
	mes "Ol�! Dou-lhe as boas vindas � cidade de ^FF0000Jaty^000000.";
	mes "Nossa tribo venera a for�a e a bravura.";
	mes "N�s desejamos a voc� uma estadia segura e proveitosa por aqui.";
	close;
}

// ------------------------------------------------------------------
dew_fild01,106,306,4	script	Guerreiro da Tribo Jaty	4_M_DEWZATIMAN,{
	mes "[Guerreiro da Tribo Jaty]";
	mes "Eu quero ser o melhor como ningu�m nunca foi.";
	next;
	mes "[Guerreiro da Tribo Jaty]";
	mes "Estou aprendendo a ca�ar nestes tempos e estou ficando cada vez melhor com o passar dos dias!";
	next;
	mes "[Guerreiro da Tribo Jaty]";
	mes "N�o vou parar enquanto";
	mes "N�o me tornar um verdadeiro guerreiro!";
	close;
}