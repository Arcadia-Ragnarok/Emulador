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
| - Info: Mudança de Classe para Mestre Ferreiro.                   |
\*-----------------------------------------------------------------*/

valkyrie,44,50,5	script	Mestre-Ferreiro#Valkyrie	4_M_JOB_BLACKSMITH,{
	if (ADVJOB == Job_Whitesmith && Class == Job_Merchant_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Mestre-Ferreiro]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Mestre-Ferreiro]";
			mes "Chegou a hora!";
			mes "Nosso mundo precisa de coragem, e de esforçados aventureiros como você...";
			next;
			jobchange(Job_Whitesmith);
			ADVJOB = 0;
			mes "[Mestre-Ferreiro]";
			mes "Parabéns!";
			mes "Sendo um Mestre-Ferreiro...";
			mes "Acredito que você irá construir um brilhante futuro para Rune-Midgard.";
			close;
		}
	} else {
		mes "[Mestre-Ferreiro]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Mestre-Ferreiro]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

