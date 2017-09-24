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
| - Nota: Mudan�a de Classe para Lorde.                             |
\*-----------------------------------------------------------------*/

valkyrie,44,39,5	script	Lorde#Valkyrie	1_M_KNIGHTMASTER,{
	if (ADVJOB == Job_Lord_Knight && Class == Job_Swordman_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Lorde]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Lorde]";
			mes "� chegada a hora!";
			mes "O mundo precisa de voc�.";
			mes "Por favor continue sua v�da de her�i com uma nova apar�ncia.";
			next;
			jobchange (Job_Lord_Knight);
			ADVJOB = 0;
			mes "[Lorde]";
			mes "Parab�ns!";
			mes "Sendo um Lorde, acredito que voc� ir� ser a frente da batalha.";
			mes "E levar seus aliados para a vit�ria!";
			close;
		}
	} else {
		mes "[Lorde]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Lorde]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

