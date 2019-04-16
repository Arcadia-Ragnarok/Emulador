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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mudança de Classe para Arquimago.                         |
\*-----------------------------------------------------------------*/

valkyrie,44,47,5	script	Arquimago#Valkyrie	4_M_JOB_WIZARD,{
	if (ADVJOB == Job_High_Wizard && Class == Job_Mage_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Arquimago]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Arquimago]";
			mes "Chegou a hora.";
			mes "E Rune-Midgard está precisando daqueles que podem exercer o poder da magia...";
			next;
			jobchange(Job_High_Wizard);
			ADVJOB = 0;
			mes "[Arquimago]";
			mes "Parabéns.";
			mes "Como um Arquimago, espero que você use seus poderes para gerar paz aos necessitados.";
			close;
		}
	} else {
		mes "[Arquimago]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Arquimago]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

