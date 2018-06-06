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
| - Info: Npcs comuns nos Campos de Juno                            |
\*-----------------------------------------------------------------*/

kh_school,57,142,6	script	Estudante#khs	4_F_HUWOMAN,3,3,{
	mes "[Laci]";
	mes "Oh, wow! nós normalmente não temos muitos visitantes no campus!";
	mes "Um, você não é um novo membro da faculdade, é?";
	close;

	OnTouch:
	mes "[Laci]";
	mes "Hey, Nesha...!";
	mes "Você ouviu por quê Aaci não tem vindo para aula por enquanto?";
	next;
	mes "[Gui Nesha]";
	mes "Isso mesmo eu não tenho visto Aaci faz um tempo.";
	mes "Algo aconteceu?";
	next;
	mes "[Laci]";
	mes "É porque....";
	mes "Aaci viu um fantasma assustador!";
	mes "É cem por cento verdade...";
	mes "Ouvi sobre isso de, bem, você conhece minhas fontes.";
	next;
	mes "[Gui Nesha]";
	mes "...Quê...?";
	mes "Ah, vai!!!";
	mes "Cai fora da cidade.";
	close;
}

// ------------------------------------------------------------------
kh_school,57,139,0	script	Estudante#khs2	4_F_HUWOMAN,{
	mes "[Gui Nesha]";
	mes "Não estamos um pouquinho velhos para ficar falando desse tipo de coisa?";
	mes "Você sabe, rumores e fantasmas estórias que não fazem sentido?";
	mes "Qualé, Laci, sai dessa!";
	emotion(e_swt2);
	close;
}
