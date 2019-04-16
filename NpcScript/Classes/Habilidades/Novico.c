/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Aprendizagem da habilidade Luz Divina (AL_HOLYLIGHT) para |
| noviço.                                                           |
\*-----------------------------------------------------------------*/

prt_church,173,23,4	script	Noviço Klift	1_F_PRIEST,{
	mes("[Noviço Klift]\n"
		"Ahh. Irmãos!\n"
		"Será que a tarefa de cuidar das ovelhas perdidas é muito fardo para você?\n"
		"Estou aqui para ajudá-lo.");
	next;
	switch (select("^3355FF\"habilidades ocultas de Noviço\"^000000", "Treinar ^3355FF\"Luz Divina\"^000000", "Terminar conversa")) {
		case 1:
		mes("[Noviço Klift]\n"
			"Nossos membros do clero normalmente vencem com suas habilidades naturais.\n"
			"Com o tempo os noviços desenvolvem uma habilidade especial.");
		next;
		mes("[Noviço Klift]\n"
			"Confrontando com perigos intermináveis contra o mal, nossos irmãos necessitam muito de ajuda.\n"
			"^3355FF\"Luz Divina\"^000000 é a habilidade.\n"
			"Para obter esta habilidade, é preciso algum trabalho.");
		next;
		mes("[Noviço Klift]\n"
			"Para obter esta habilidade, você precisa encontrar estes itens:\n"
			"^FF33551 Opala^000000\n"
			"^FF33551 Cristal Azul^000000\n"
			"^FF33551 Rosário^000000");
		next;
		mes("[Noviço Klift]\n"
			"Quando você obtiver a experiência necessária, você poderá usar esta habilidade..\n"
			"^FF3355 Nível 30 de classe^000000 é necessário para você aprender esta habilidade.");
		next;
		mes("[Noviço Klift]\n"
			"Sacerdotes, por terem uma vasta experiência,\n"
			"podem aprender esta habilidade em qualquer nível de classe.");
		close;
		case 2:
		if (getskilllv("AL_HOLYLIGHT")) {
			mes("[Noviço Klift]\n"
				"Irmão, você já possui a habilidade \"Luz Divina\".\n"
				"Você não pode ganhar uma habilidade que já possui...\n"
				"Rezo para que você esteja usando esta habilidade para o bem...");
			close;
		}
		if ((countitem(White_Jewel)) && (countitem(Crystal_Blue)) && (countitem(Rosary)) && (JobLevel > 29 || (BaseJob == Job_Priest || BaseJob == Job_Monk)) && (BaseClass == Job_Acolyte)) {
			mes("[Noviço Klift]\n"
				"Sua fé provou que você é digno de usar a habilidade \"Luz Divina\".\n"
				"Sua experiência é suficiente para usar esta habilidade.\n"
				"Use-a sabiamente...");
			next;
			delitem(White_Jewel, 1);
			delitem(Crystal_Blue, 1);
			delitem(Rosary, 1);
			skill("AL_HOLYLIGHT", 1, 0);
			mes("[Noviço Klift]\n"
				"Você agora possui a \"Luz Divina\".\n"
				"Use esta habilidade somente para bons propósitos...");
			close;
		}
		mes("[Noviço Klift]\n"
			"Ah, é claro.\n"
			"Você ainda não está pronto para receber a habilidade \"Luz Divina\".");
		next;
		mes("[Noviço Klift]\n"
			"Você deve ouvir atentamente o que é necessário para obter esta habilidade.\n"
			"Se você escutasse, saberia o que falta para poder adquirí-la.\n"
			"Assim você pode aperfeiçoar-se.");
		close;
		case 3:
		mes("[Noviço Klift]\n"
			".....\n"
			"Eu entendo o seu zelo.\n"
			"Você ainda tem muito tempo para praticar e adquirir experiência.\n"
			"Bênçãos sobre vós!");
		close;
	}
}
