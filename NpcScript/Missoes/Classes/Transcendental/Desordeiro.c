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
| - Versão: Spell Master.                                           |
| - Nota: Mudança de Classe para Desordeiro.                        |
\*-----------------------------------------------------------------*/

valkyrie,53,58,3	script	Desordeiro#Valkyrie	4_F_ROGUE,{
	if (ADVJOB == Job_Stalker && Class == Job_Thief_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Desordeiro]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Desordeiro]";
			mes "Esse mundo precisa de mais heróis que estão dispostos a andar na linha entre a ordem e a anarquia.";
			next;
			jobchange (Job_Stalker);
			ADVJOB = 0;
			mes "[Desordeiro]";
			mes "Parabéns!";
			mes "Como Desordeiro, espero que você esfaqueie as pessoas certas nas costas.";
			mes "Banir os cruéis usando seus próprios métodos covardes!";
			close;
		}
	} else {
		mes "[Desordeiro]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Desordeiro]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
