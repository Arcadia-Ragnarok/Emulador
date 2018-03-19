/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Source Script                      |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest da habilidade Luz Divina (AL_HOLYLIGHT) para noviço |
\*-----------------------------------------------------------------*/

prt_church,173,23,4	script	Noviço Klift	1_F_PRIEST,{
	mes "[Noviço Klift]";
	mes "Ahh. Irmãos!";
	mes "Será que a tarefa de cuidar das ovelhas perdidas é muito fardo para você?";
	mes "Estou aqui para ajudá-lo.";
	next;
	switch(select("^3355FF\"Sobre habilidades ocultas de Noviço\"^000000", "Treinar ^3355FF\"Luz Divina\"^000000", "Terminar conversa")) {
		case 1:
		mes "[Noviço Klift]";
		mes "Nossos membros do clero normalmente vencem com suas habilidades naturais.";
		mes "Com o tempo os noviços desenvolvem uma habilidade especial.";
		next;
		mes "[Noviço Klift]";
		mes "Confrontando com perigos intermináveis contra o mal, nossos irmãos necessitam muito de ajuda.";
		mes "^3355FF\"Luz Divina\"^000000 é a habilidade.";
		mes "Para obter esta habilidade, é preciso algum trabalho.";
		next;
		mes "[Noviço Klift]";
		mes "Para obter esta habilidade, você precisa encontrar estes itens:";
		mes "^FF33551 Opala^000000";
		mes "^FF33551 Cristal Azul^000000";
		mes "^FF33551 Rosário^000000 ";
		next;
		mes "[Noviço Klift]";
		mes "Quando você obtiver a experiência necessária, você poderá usar esta habilidade..";
		mes "^FF3355 Nível 30 de classe^000000 é necessário para você aprender esta habilidade.";
		next;
		mes "[Noviço Klift]";
		mes "Sacerdotes, por terem uma vasta experiência, podem aprender esta habilidade em qualquer nível de classe.";
		close;
		case 2:
		if (getskilllv("AL_HOLYLIGHT") == 1) {
			mes "[Noviço Klift]";
			mes "Irmão, você já possui a habilidade \"Luz Divina\".";
			mes "Você não pode ganhar uma habilidade que já possui...";
			mes "Rezo para que você esteja usando esta habilidade para o bem...";
			close;
		}
		if ((countitem(White_Jewel) > 0) && (countitem(Crystal_Blue) > 0) && (countitem(Rosary) > 0) && (JobLevel > 29 || (BaseJob == Job_Priest || BaseJob == Job_Monk)) && (BaseClass == Job_Acolyte)) {
			mes "[Noviço Klift]";
			mes "Sua fé provou que você é digno de usar a habilidade \"Luz Divina\".";
			mes "Sua experiência é suficiente para usar esta habilidade.";
			mes "Use-a sabiamente...";
			next;
			delitem(White_Jewel, 1);
			delitem(Crystal_Blue, 1);
			delitem(Rosary, 1);
			skill("AL_HOLYLIGHT", 1, 0);
			mes "[Noviço Klift]";
			mes "Você agora possui a \"Luz Divina\".";
			mes "Use esta habilidade somente para bons propósitos...";
			close;
		}
		mes "[Noviço Klift]";
		mes "Ah, é claro.";
		mes "Você ainda não está pronto para receber a habilidade \"Luz Divina\".";
		next;
		mes "[Noviço Klift]";
		mes "Você deve ouvir atentamente o que é necessário para obter esta habilidade.";
		mes "Se você escutasse, saberia o que falta para poder adquirí-la.";
		mes "Assim você pode aperfeiçoar-se.";
		close;
		case 3:
		mes "[Noviço Klift]";
		mes ".....";
		mes "Eu entendo o seu zelo.";
		mes "Você ainda tem muito tempo para praticar e adquirir experiência.";
		mes "Bênçãos sobre vós!";
		close;
	}
}
