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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mudan�a de Classe para Arquimago.                         |
\*-----------------------------------------------------------------*/

valkyrie,44,47,5	script	Arquimago#Valkyrie	4_M_JOB_WIZARD,{
	if (ADVJOB == Job_High_Wizard && Class == Job_Mage_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Arquimago]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Arquimago]";
			mes "Chegou a hora.";
			mes "E Rune-Midgard est� precisando daqueles que podem exercer o poder da magia...";
			next;
			jobchange(Job_High_Wizard);
			ADVJOB = 0;
			mes "[Arquimago]";
			mes "Parab�ns.";
			mes "Como um Arquimago, espero que voc� use seus poderes para gerar paz aos necessitados.";
			close;
		}
	} else {
		mes "[Arquimago]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Arquimago]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

