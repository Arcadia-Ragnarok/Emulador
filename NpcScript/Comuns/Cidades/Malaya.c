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
	mes "Meu pai disse que não vou pegar doenças da pele uma vez que eu sou amigo da fada da floresta.";
	next;
	select("Fada??");
	mes "[Garota]";
	mes "Fadas encantadas vivem em grandes árvores ou pedras na floresta.";
	mes "Há fadas de garotos e fadas...";
	next;
	mes "[Garota]";
	mes "Mas as fadas dos meninos são mais bonitas.";
	mes "Será por que?";
	close;
}

// ------------------------------------------------------------------
malaya,219,92,6	script	Garoto#ma05	4_M_BARYO_BOY,{
	mes "[Garoto]";
	mes "Eu acho que alguém está roubando todos os chapéus na aldeia.";
	next;
	mes "[Garoto]";
	mes "O chapéu que minha mãe lavou ontem desapareceu.";
	mes "O chapéu do nosso vizinho também desapareceu alguns dias atrás.";
	next;
	mes "[Garoto]";
	mes "Hmm ... você acha que Jejeling tomou isso??";
	next;
	mes "[Garoto]";
	mes "Visitei um amigo em Baryo Mahiwaga e ele disse que viu Jejeling vestindo o chapéu faltante...";
	close;
}



// ------------------------------------------------------------------
malaya,63,185,4	script	Mulher#ma08	4_F_MALAYA,{
	mes "[Mulher]";
	mes "Se você ouvir um bebê chorando da floresta fora da aldeia, nunca se aproxime disso.";
	next;
	select("O que?");
	mes "[Mulher]";
	mes "Há um monstro chamado Tiucknuc que vagava por fora da aldeia e chora depois de transformar-se em um bebê.";
	next;
	mes "[Mulher]";
	mes "Mas quando viajantes gentis pegam o bebê, ele volta à sua forma original e ataca.";
	next;
	select("Parece um monstro sorrateiro.");
	mes "[Mulher]";
	mes "Sim, esse monstro é terríl em enganar a bondade dos viajantes, mas...";
	next;
	mes "[Mulher]";
	mes "Há rumores de que o monstro veio da alma de um bebê que nunca nasceu.";
	mes "Tão triste.";
	close;
}
