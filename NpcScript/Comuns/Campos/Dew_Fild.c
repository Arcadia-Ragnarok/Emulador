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
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns nos Campos de Dewata.                         |
\*-----------------------------------------------------------------*/

dew_fild01,101,259,6	script	Porteiro da Tribo Jaty	4_M_DEWZATIMAN,{
	mes "[Porteiro da Tribo Jaty]";
	mes "Olá! Dou-lhe as boas vindas à cidade de ^FF0000Jaty^000000.";
	mes "Nossa tribo venera a força e a bravura.";
	mes "Nós desejamos a você uma estadia segura e proveitosa por aqui.";
	close;
}

// ------------------------------------------------------------------
dew_fild01,106,306,4	script	Guerreiro da Tribo Jaty	4_M_DEWZATIMAN,{
	mes "[Guerreiro da Tribo Jaty]";
	mes "Eu quero ser o melhor como ninguém nunca foi.";
	next;
	mes "[Guerreiro da Tribo Jaty]";
	mes "Estou aprendendo a caçar nestes tempos e estou ficando cada vez melhor com o passar dos dias!";
	next;
	mes "[Guerreiro da Tribo Jaty]";
	mes "Não vou parar enquanto";
	mes "Não me tornar um verdadeiro guerreiro!";
	close;
}