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
| - Nota: Npcs comuns na cidade Eclage                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
ecl_in01,8,71,5	script	Guarda de Eclage#ecl	4_M_FAIRYSOLDIER,{
	mes "[Guarda de Eclage]";
	mes "Este caminho o levará à parte baixa de Eclage.";
	mes "Você achará uma prisão e uma clínica lá.";
	close;
}

// ------------------------------------------------------------------
ecl_in02,135,45,5	script	Laphine Ferido#ecl	4_F_FAIRYKID6,{
	mes "[Laphine Ferido]";
	mes "Ooww...";
	mes "Onde... é... que eu estou?";
	next;
	mes "[Doctor]";
	mes "Você está em uma clínica.";
	mes "Não preocupe.";
	mes "Nós paramos a hemorragia com feitiços de emergência.";
	mes "Você estava sangrando muito.";
	mes "Isso era muito perigoso para você.";
	next;
	mes "[Laphine Ferido]";
	mes "......";
	mes "O que, não, eu... eu não sinto nada... o no qual vai?";
	next;
	mes "[Doutor]";
	mes "Uma... flecha danificou sua asa gravimente...";
	next;
	mes "[Laphine Ferido]";
	mes "...o que quer dizer?";
	next;
	mes "[Doutor]";
	mes "Bem... eu ia lhe falar depois que você recupera, mas você deve saber.";
	mes "Você não pode decorar o Yai mais.";
	mes "Em outras palavras, a flecha feril irrecuperavelmente sua asa.";
	next;
	mes "[Laphine Ferido]";
	mes "O que?";
	mes "Não pode... por favor... o doutor!!";
	mes "Nãooo!!";
	close;
}

ecl_in02,137,44,3	duplicate(Laphine Ferido#ecl)	Doutor Laphine#ecl	4_M_FAIRYKID
