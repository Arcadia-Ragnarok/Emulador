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
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na Porto de Malaya                            |
\*-----------------------------------------------------------------*/


// ------------------------------------------------------------------
malaya,88,252,4	script	Garota#ma04	4_F_BARYO_GIRL,{
	mes "[Garota]";
	mes "Meu pai disse que n�o vou pegar doen�as da pele uma vez que eu sou amigo da fada da floresta.";
	next;
	select("Fada??");
	mes "[Garota]";
	mes "Fadas encantadas vivem em grandes �rvores ou pedras na floresta.";
	mes "H� fadas de garotos e fadas...";
	next;
	mes "[Garota]";
	mes "Mas as fadas dos meninos s�o mais bonitas.";
	mes "Ser� por que?";
	close;
}

// ------------------------------------------------------------------
malaya,219,92,6	script	Garoto#ma05	4_M_BARYO_BOY,{
	mes "[Garoto]";
	mes "Eu acho que algu�m est� roubando todos os chap�us na aldeia.";
	next;
	mes "[Garoto]";
	mes "O chap�u que minha m�e lavou ontem desapareceu.";
	mes "O chap�u do nosso vizinho tamb�m desapareceu alguns dias atr�s.";
	next;
	mes "[Garoto]";
	mes "Hmm ... voc� acha que Jejeling tomou isso??";
	next;
	mes "[Garoto]";
	mes "Visitei um amigo em Baryo Mahiwaga e ele disse que viu Jejeling vestindo o chap�u faltante...";
	close;
}



// ------------------------------------------------------------------
malaya,63,185,4	script	Mulher#ma08	4_F_MALAYA,{
	mes "[Mulher]";
	mes "Se voc� ouvir um beb� chorando da floresta fora da aldeia, nunca se aproxime disso.";
	next;
	select("O que?");
	mes "[Mulher]";
	mes "H� um monstro chamado Tiucknuc que vagava por fora da aldeia e chora depois de transformar-se em um beb�.";
	next;
	mes "[Mulher]";
	mes "Mas quando viajantes gentis pegam o beb�, ele volta � sua forma original e ataca.";
	next;
	select("Parece um monstro sorrateiro.");
	mes "[Mulher]";
	mes "Sim, esse monstro � terr�l em enganar a bondade dos viajantes, mas...";
	next;
	mes "[Mulher]";
	mes "H� rumores de que o monstro veio da alma de um beb� que nunca nasceu.";
	mes "T�o triste.";
	close;
}
