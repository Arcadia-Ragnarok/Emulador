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
| - Nota: Mudança de Classe para Mestre.                            |
\*-----------------------------------------------------------------*/

valkyrie,53,42,3	script	Mestre#Valkyrie	1_M_HOF,{
	if (ADVJOB == Job_Champion && Class == Job_Acolyte_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Mestre]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Mestre]";
			mes "Este é o tempo.";
			mes "Tempo de grandes heróis para estar a frente contra as forças do mal.";
			mes "Que pragueiam o mundo de Rune-Midgard!";
			next;
			jobchange (Job_Champion);
			ADVJOB = 0;
			mes "[Mestre]";
			mes "Parabéns!";
			mes "Viva como um campeão, e traga a luz no mundo com a força de seus punhos.";
			close;
		}
	} else {
		mes "[Mestre]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Mestre]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
