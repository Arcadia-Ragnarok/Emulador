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
| - Nota: Mudan�a de Classe para Sumo Sacerdote.                    |
\*-----------------------------------------------------------------*/

valkyrie,44,42,5	script	Sumo-Sacerdote#Valkyrie	1_M_PASTOR,{
	if (ADVJOB == Job_High_Priest && Class == Job_Acolyte_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Sumo-Sacerdote]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Sumo-Sacerdote]";
			mes "Nosso mundo est� precisando de pessoas com talento e convic��o.";
			mes "Por favor continue com seu bom trabalho assim como um grande her�i da santidade...";
			next;
			jobchange (Job_High_Priest);
			ADVJOB = 0;
			mes "[Sumo-Sacerdote]";
			mes "Parab�ns.";
			mes "Como um Sumo-Sacerdote.";
			mes "Acredito que voc� ir� guiar outros para o caminho da santidade...";
			close;
		}
	} else {
		mes "[Sumo-Sacerdote]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Sumo-Sacerdote]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

