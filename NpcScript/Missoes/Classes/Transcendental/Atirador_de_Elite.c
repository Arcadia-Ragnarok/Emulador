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
| - Nota: Mudan�a de Classe para Atirador de Elite.                 |
\*-----------------------------------------------------------------*/

valkyrie,44,55,5	script	Atirador de Elite#Valkyrie	4_F_JOB_HUNTER,{
	if (ADVJOB == Job_Sniper && Class == Job_Archer_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Atirador de Elite]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Atirador de Elite]";
			mes "O mundo est� necessitando de Arqueiros poderosos como voc�.";
			next;
			jobchange (Job_Sniper);
			ADVJOB = 0;
			mes "[Atirador de Elite]";
			mes "Parab�ns!";
			mes "Sendo um Atirador de Elite...";
			mes "Acredito que os servos do mal nunca estar�o seguros enquanto estiverem sob seu campo de vis�o!";
			close;
		}
	} else {
		mes "[Atirador de Elite]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Atirador de Elite]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

