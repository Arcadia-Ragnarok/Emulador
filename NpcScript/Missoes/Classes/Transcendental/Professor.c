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
| - Nota: Mudança de Classe para Professor.                         |
\*-----------------------------------------------------------------*/

valkyrie,53,47,3	script	Professor#Valkyrie	2_M_SAGE_OLD,{
	if (ADVJOB == Job_Professor && Class == Job_Mage_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Professor]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Professor]";
			mes "Rune-Midgard não tem Professores suficientes para ajudar o povo nessa nova era de prosperidade.";
			mes "O mundo precisa de você...";
			next;
			jobchange (Job_Professor);
			ADVJOB = 0;
			mes "[Professor]";
			mes "Parabéns!";
			mes "Como Professor...";
			mes "Espero que você fará sua parte trazendo a luz da sabedoria onde há escuridão.";
			close;
		}
	} else {
		mes "[Professor]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Professor]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
