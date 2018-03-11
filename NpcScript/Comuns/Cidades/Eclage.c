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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Eclage                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
ecl_in01,8,71,5	script	Guarda de Eclage#ecl	4_M_FAIRYSOLDIER,{
	mes "[Guarda de Eclage]";
	mes "Este caminho o levar� � parte baixa de Eclage.";
	mes "Voc� achar� uma pris�o e uma cl�nica l�.";
	close;
}

// ------------------------------------------------------------------
ecl_in02,135,45,5	script	Laphine Ferido#ecl	4_F_FAIRYKID6,{
	mes "[Laphine Ferido]";
	mes "Ooww...";
	mes "Onde... �... que eu estou?";
	next;
	mes "[Doctor]";
	mes "Voc� est� em uma cl�nica.";
	mes "N�o preocupe.";
	mes "N�s paramos a hemorragia com feiti�os de emerg�ncia.";
	mes "Voc� estava sangrando muito.";
	mes "Isso era muito perigoso para voc�.";
	next;
	mes "[Laphine Ferido]";
	mes "......";
	mes "O que, n�o, eu... eu n�o sinto nada... o no qual vai?";
	next;
	mes "[Doutor]";
	mes "Uma... flecha danificou sua asa gravimente...";
	next;
	mes "[Laphine Ferido]";
	mes "...o que quer dizer?";
	next;
	mes "[Doutor]";
	mes "Bem... eu ia lhe falar depois que voc� recupera, mas voc� deve saber.";
	mes "Voc� n�o pode decorar o Yai mais.";
	mes "Em outras palavras, a flecha feril irrecuperavelmente sua asa.";
	next;
	mes "[Laphine Ferido]";
	mes "O que?";
	mes "N�o pode... por favor... o doutor!!";
	mes "N�ooo!!";
	close;
}

ecl_in02,137,44,3	duplicate(Laphine Ferido#ecl)	Doutor Laphine#ecl	4_M_FAIRYKID
