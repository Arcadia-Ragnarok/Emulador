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
| - Nota: Mudança de Classe para Lorde.                             |
\*-----------------------------------------------------------------*/

valkyrie,44,39,5	script	Lorde#Valkyrie	1_M_KNIGHTMASTER,{
	if (ADVJOB == Job_Lord_Knight && Class == Job_Swordman_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Lorde]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Lorde]";
			mes "É chegada a hora!";
			mes "O mundo precisa de você.";
			mes "Por favor continue sua vída de herói com uma nova aparência.";
			next;
			jobchange (Job_Lord_Knight);
			ADVJOB = 0;
			mes "[Lorde]";
			mes "Parabéns!";
			mes "Sendo um Lorde, acredito que você irá ser a frente da batalha.";
			mes "E levar seus aliados para a vitória!";
			close;
		}
	} else {
		mes "[Lorde]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Lorde]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

