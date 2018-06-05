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
| - Info: Mudan�a de Classe para Paladino.                          |
\*-----------------------------------------------------------------*/

valkyrie,53,39,3	script	Paladin#Valkyrie	4_M_CRU_OLD,{
	if (ADVJOB == Job_Paladin && Class == Job_Swordman_High && JobLevel > 39) {
		if (SkillPoint) {
			mes "[Paladino]";
			mes "Voc� ainda tem pontos de habilidades.";
			mes "Por favor, use todos os seus pontos de habilidade restantes, e depois volte aqui.";
			close;
		} else {
			mes "[Paladino]";
			mes "A Guerra Santa ser� antes do que esperavamos.";
			mes "Mais do que nunca, precisamos de homens e mulheres fortes para lutar pelo bem e correto.";
			next;
			jobchange(Job_Paladin);
			ADVJOB = 0;
			mes "[Paladino]";
			mes "Parab�ns.";
			mes "Como um Paladino, espero que voc� proteja os mais fracos.";
			mes "E nos d� a vit�ria na pr�xima guerra entre o bem e o mal.";
			close;
		}
	} else {
		mes "[Paladino]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Valhalla, o Sal�o de Honras.";
		next;
		mes "[Paladino]";
		mes "Por favor, sinta-se confort�vel enquanto voc� estiver aqui.";
		mes "Honre os guerreiros.";
		close;
	}
}
