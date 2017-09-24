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
| - Nota: Mudan�a de Classe para Mestre.                            |
\*-----------------------------------------------------------------*/

valkyrie,53,42,3	script	Mestre#Valkyrie	1_M_HOF,{
	if (ADVJOB == Job_Champion && Class == Job_Acolyte_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Mestre]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Mestre]";
			mes "Este � o tempo.";
			mes "Tempo de grandes her�is para estar a frente contra as for�as do mal.";
			mes "Que pragueiam o mundo de Rune-Midgard!";
			next;
			jobchange (Job_Champion);
			ADVJOB = 0;
			mes "[Mestre]";
			mes "Parab�ns!";
			mes "Viva como um campe�o, e traga a luz no mundo com a for�a de seus punhos.";
			close;
		}
	} else {
		mes "[Mestre]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Mestre]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
