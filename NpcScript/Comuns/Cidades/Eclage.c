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
	mes("[Guarda de Eclage]\n Este caminho o levará à parte baixa de Eclage.\n Você achará uma prisão e uma clínica lá.");
	close;
}

// ------------------------------------------------------------------
ecl_in02,135,45,5	script	Laphine Ferido#ecl	4_F_FAIRYKID6,{
	mes("[Laphine Ferido]\n Ooww...\n Onde... é... que eu estou?");
	next;
	mes("[Doctor]\n Você está em uma clínica.\n Não preocupe.\n Nós paramos a hemorragia com feitiços de emergência.\n Você estava sangrando muito.\n Isso era muito perigoso para você.");
	next;
	mes("[Laphine Ferido]\n ......\n O que, não, eu... eu não sinto nada... o no qual vai?");
	next;
	mes("[Doutor]\n Uma... flecha danificou sua asa gravimente...");
	next;
	mes("[Laphine Ferido]\n ...o que quer dizer?");
	next;
	mes("[Doutor]\n Bem... eu ia lhe falar depois que você recupera, mas você deve saber.\n Você não pode decorar o Yai mais.\n Em outras palavras, a flecha feril irrecuperavelmente sua asa.");
	next;
	mes("[Laphine Ferido]\n O que?\n Não pode... por favor... o doutor!!\n Nãooo!!");
	close;
}

ecl_in02,137,44,3	duplicate(Laphine Ferido#ecl)	Doutor Laphine#ecl	4_M_FAIRYKID
