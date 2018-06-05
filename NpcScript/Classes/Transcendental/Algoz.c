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
| - Info: Mudança de Classe para Algoz.                             |
\*-----------------------------------------------------------------*/

valkyrie,44,58,5	script	Algoz#Valkyrie	4_F_JOB_ASSASSIN,{
	if (ADVJOB == Job_Assassin_Cross && Class == Job_Thief_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Algoz]";
			mes "Você ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Algoz]";
			mes "O momento chegou.";
			mes "O mundo precisa de você...";
			mes "Mais do que nunca.";
			next;
			mes "[Algoz]";
			mes "Eu peço que você continue vivendo nas sombras.";
			mes "Mas como um bom assassino e com ainda mais aparência.";
			next;
			jobchange(Job_Assassin_Cross);
			ADVJOB = 0;
			mes "[Algoz]";
			mes "Parabéns.";
			mes "Como Algoz, espero que você lute por um futuro melhor mesmo que vivendo na escuridão.";
			close;
		}
	} else {
		mes "[Algoz]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Salão de Honras.";
		next;
		mes "[Algoz]";
		mes "Por favor, sinta-se confortável enquanto você estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

