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
| - Vers�o: Spell Master.                                           |
| - Nota: Mudan�a de Classe para Cigana.                            |
\*-----------------------------------------------------------------*/

valkyrie,53,56,3	script	Cigana#Valkyrie	4W_F_01,{
	if (ADVJOB == Job_Gypsy && Class == Job_Archer_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Cigana]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Cigana]";
			mes "A terra de Rune-Midgard est� precisando de mulheres talentosas.";
			mes "Para mudar sutilmente o balan�o nas batalhas entre o bem e o mal.";
			next;
			jobchange (Job_Gypsy);
			ADVJOB = 0;
			mes "[Cigana]";
			mes "Parab�ns!";
			mes "Como Cigana, eu sei que suas performances.";
			mes "V�o abalar os cora��es de todos aqueles que estar�o assistindo...";
			close;
		}
	} else {
		mes "[Cigana]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Cigana]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
