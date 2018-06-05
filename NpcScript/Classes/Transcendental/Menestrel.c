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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mudança de Classe para Menestrel.                         |
\*-----------------------------------------------------------------*/

valkyrie,53,54,3	script	Menestrel#Valkyrie	2_M_BARD_ORIENT,{
	if (ADVJOB == Job_Clown && Class == Job_Archer_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Menestrel]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Menestrel]";
			mes "O mundo aborrecido dos mortais está necessitando de uma canção mais alegre.";
			mes "Você vai trazer isto para eles e virar a maré na batalha contra o mal?";
			next;
			jobchange(Job_Clown);
			ADVJOB = 0;
			mes "[Menestrel]";
			mes "Parabéns!";
			mes "Como um Menestrel, suas canções trarão a esperança aos seus aliados.";
			mes "E o desespero aos seus inimigos.";
			close;
		}
	} else {
		mes "[Menestrel]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Menestrel]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
