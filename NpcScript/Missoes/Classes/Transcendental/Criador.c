/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mudança de Classe para Criador.                           |
\*-----------------------------------------------------------------*/

valkyrie,53,50,3	script	Criador#Valkyrie	2_M_DYEINGER,{
	if (ADVJOB == Job_Creator && Class == Job_Merchant_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Criador]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Criador]";
			mes "Sim...";
			mes "É sobre o tempo.";
			mes "Nós precisamos de mais gênios como você em Rune-Midgard.";
			next;
			jobchange (Job_Creator);
			ADVJOB = 0;
			mes "[Criador]";
			mes "Parabéns!";
			mes "Como Criador...";
			mes "Espero que você use seu vasto conhecimento para as finalidades certas.";
			if (bioeth == 13 && !getskilllv("AM_BIOETHICS")) {
				skill (AM_BIOETHICS,1,0);
				bioeth = 0;
			}
			close;
		}
	} else {
		mes "[Criador]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Criador]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
