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
| - Nota: Mudança de Classe para Sumo Sacerdote.                    |
\*-----------------------------------------------------------------*/

valkyrie,44,42,5	script	Sumo-Sacerdote#Valkyrie	1_M_PASTOR,{
	if (ADVJOB == Job_High_Priest && Class == Job_Acolyte_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Sumo-Sacerdote]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Sumo-Sacerdote]";
			mes "Nosso mundo está precisando de pessoas com talento e convicção.";
			mes "Por favor continue com seu bom trabalho assim como um grande herói da santidade...";
			next;
			jobchange (Job_High_Priest);
			ADVJOB = 0;
			mes "[Sumo-Sacerdote]";
			mes "Parabéns.";
			mes "Como um Sumo-Sacerdote.";
			mes "Acredito que você irá guiar outros para o caminho da santidade...";
			close;
		}
	} else {
		mes "[Sumo-Sacerdote]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Sumo-Sacerdote]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

