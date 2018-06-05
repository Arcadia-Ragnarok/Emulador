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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mudan�a de Classe para Algoz.                             |
\*-----------------------------------------------------------------*/

valkyrie,44,58,5	script	Algoz#Valkyrie	4_F_JOB_ASSASSIN,{
	if (ADVJOB == Job_Assassin_Cross && Class == Job_Thief_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Algoz]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Algoz]";
			mes "O momento chegou.";
			mes "O mundo precisa de voc�...";
			mes "Mais do que nunca.";
			next;
			mes "[Algoz]";
			mes "Eu pe�o que voc� continue vivendo nas sombras.";
			mes "Mas como um bom assassino e com ainda mais apar�ncia.";
			next;
			jobchange(Job_Assassin_Cross);
			ADVJOB = 0;
			mes "[Algoz]";
			mes "Parab�ns.";
			mes "Como Algoz, espero que voc� lute por um futuro melhor mesmo que vivendo na escurid�o.";
			close;
		}
	} else {
		mes "[Algoz]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Algoz]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}

