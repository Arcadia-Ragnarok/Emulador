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
	mes "Oh, wow! n�s normalmente n�o temos muitos visitantes no campus!";
	mes "Um, voc� n�o � um novo membro da faculdade, �?";
	close;

	OnTouch:
	mes "[Laci]";
	mes "Hey, Nesha...!";
	mes "Voc� ouviu por qu� Aaci n�o tem vindo para aula por enquanto?";
	next;
	mes "[Gui Nesha]";
	mes "Isso mesmo eu n�o tenho visto Aaci faz um tempo.";
	mes "Algo aconteceu?";
	next;
	mes "[Laci]";
	mes "� porque....";
	mes "Aaci viu um fantasma assustador!";
	mes "� cem por cento verdade...";
	mes "Ouvi sobre isso de, bem, voc� conhece minhas fontes.";
	next;
	mes "[Gui Nesha]";
	mes "...Qu�...?";
	mes "Ah, vai!!!";
	mes "Cai fora da cidade.";
	close;
}

// ------------------------------------------------------------------
kh_school,57,139,0	script	Estudante#khs2	4_F_HUWOMAN,{
	mes "[Gui Nesha]";
	mes "N�o estamos um pouquinho velhos para ficar falando desse tipo de coisa?";
	mes "Voc� sabe, rumores e fantasmas est�rias que n�o fazem sentido?";
	mes "Qual�, Laci, sai dessa!";
	emotion(e_swt2);
	close;
}
