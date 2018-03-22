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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mudan�a de Classe para Menestrel.                         |
\*-----------------------------------------------------------------*/

valkyrie,53,54,3	script	Menestrel#Valkyrie	2_M_BARD_ORIENT,{
	if (ADVJOB == Job_Clown && Class == Job_Archer_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Menestrel]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Menestrel]";
			mes "O mundo aborrecido dos mortais est� necessitando de uma can��o mais alegre.";
			mes "Voc� vai trazer isto para eles e virar a mar� na batalha contra o mal?";
			next;
			jobchange(Job_Clown);
			ADVJOB = 0;
			mes "[Menestrel]";
			mes "Parab�ns!";
			mes "Como um Menestrel, suas can��es trar�o a esperan�a aos seus aliados.";
			mes "E o desespero aos seus inimigos.";
			close;
		}
	} else {
		mes "[Menestrel]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Menestrel]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
