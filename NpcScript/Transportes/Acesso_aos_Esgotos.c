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
| - Copyright: Spell Master                                         |
| - Info: Acesso aos Esgotos de Prontera                            |
\*-----------------------------------------------------------------*/

prt_fild05,270,212,5	script	Guardi�o dos Esgotos#prt	8W_SOLDIER,{
	mes "[Guardi�o dos Esgotos]";
	mes "Essa � a entrada para os Esgotos de Prontera.";
	mes "Voc� quer entrar agora?";
	next;
	if (select("Quero","Cancelar") == 1) {
		close2;
		warp("prt_sewb1",131,247);
		end;
	}
}

