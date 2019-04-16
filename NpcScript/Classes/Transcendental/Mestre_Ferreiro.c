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
| - Info: Mudan�a de Classe para Mestre Ferreiro.                   |
\*-----------------------------------------------------------------*/

valkyrie,44,50,5	script	Mestre-Ferreiro#Valkyrie	4_M_JOB_BLACKSMITH,{
	if (ADVJOB == Job_Whitesmith && Class == Job_Merchant_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Mestre-Ferreiro]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Mestre-Ferreiro]";
			mes "Chegou a hora!";
			mes "Nosso mundo precisa de coragem, e de esfor�ados aventureiros como voc�...";
			next;
			jobchange(Job_Whitesmith);
			ADVJOB = 0;
			mes "[Mestre-Ferreiro]";
			mes "Parab�ns!";
			mes "Sendo um Mestre-Ferreiro...";
			mes "Acredito que voc� ir� construir um brilhante futuro para Rune-Midgard.";
			close;
		}
	} else {
		mes "[Mestre-Ferreiro]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Mestre-Ferreiro]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

