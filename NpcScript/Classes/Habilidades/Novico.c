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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Aprendizagem da habilidade Luz Divina (AL_HOLYLIGHT) para |
| novi�o.                                                           |
\*-----------------------------------------------------------------*/

prt_church,173,23,4	script	Novi�o Klift	1_F_PRIEST,{
	mes("[Novi�o Klift]\n"
		"Ahh. Irm�os!\n"
		"Ser� que a tarefa de cuidar das ovelhas perdidas � muito fardo para voc�?\n"
		"Estou aqui para ajud�-lo.");
	next;
	switch (select("^3355FF\"habilidades ocultas de Novi�o\"^000000", "Treinar ^3355FF\"Luz Divina\"^000000", "Terminar conversa")) {
		case 1:
		mes("[Novi�o Klift]\n"
			"Nossos membros do clero normalmente vencem com suas habilidades naturais.\n"
			"Com o tempo os novi�os desenvolvem uma habilidade especial.");
		next;
		mes("[Novi�o Klift]\n"
			"Confrontando com perigos intermin�veis contra o mal, nossos irm�os necessitam muito de ajuda.\n"
			"^3355FF\"Luz Divina\"^000000 � a habilidade.\n"
			"Para obter esta habilidade, � preciso algum trabalho.");
		next;
		mes("[Novi�o Klift]\n"
			"Para obter esta habilidade, voc� precisa encontrar estes itens:\n"
			"^FF33551 Opala^000000\n"
			"^FF33551 Cristal Azul^000000\n"
			"^FF33551 Ros�rio^000000");
		next;
		mes("[Novi�o Klift]\n"
			"Quando voc� obtiver a experi�ncia necess�ria, voc� poder� usar esta habilidade..\n"
			"^FF3355 N�vel 30 de classe^000000 � necess�rio para voc� aprender esta habilidade.");
		next;
		mes("[Novi�o Klift]\n"
			"Sacerdotes, por terem uma vasta experi�ncia,\n"
			"podem aprender esta habilidade em qualquer n�vel de classe.");
		close;
		case 2:
		if (getskilllv("AL_HOLYLIGHT")) {
			mes("[Novi�o Klift]\n"
				"Irm�o, voc� j� possui a habilidade \"Luz Divina\".\n"
				"Voc� n�o pode ganhar uma habilidade que j� possui...\n"
				"Rezo para que voc� esteja usando esta habilidade para o bem...");
			close;
		}
		if ((countitem(White_Jewel)) && (countitem(Crystal_Blue)) && (countitem(Rosary)) && (JobLevel > 29 || (BaseJob == Job_Priest || BaseJob == Job_Monk)) && (BaseClass == Job_Acolyte)) {
			mes("[Novi�o Klift]\n"
				"Sua f� provou que voc� � digno de usar a habilidade \"Luz Divina\".\n"
				"Sua experi�ncia � suficiente para usar esta habilidade.\n"
				"Use-a sabiamente...");
			next;
			delitem(White_Jewel, 1);
			delitem(Crystal_Blue, 1);
			delitem(Rosary, 1);
			skill("AL_HOLYLIGHT", 1, 0);
			mes("[Novi�o Klift]\n"
				"Voc� agora possui a \"Luz Divina\".\n"
				"Use esta habilidade somente para bons prop�sitos...");
			close;
		}
		mes("[Novi�o Klift]\n"
			"Ah, � claro.\n"
			"Voc� ainda n�o est� pronto para receber a habilidade \"Luz Divina\".");
		next;
		mes("[Novi�o Klift]\n"
			"Voc� deve ouvir atentamente o que � necess�rio para obter esta habilidade.\n"
			"Se voc� escutasse, saberia o que falta para poder adquir�-la.\n"
			"Assim voc� pode aperfei�oar-se.");
		close;
		case 3:
		mes("[Novi�o Klift]\n"
			".....\n"
			"Eu entendo o seu zelo.\n"
			"Voc� ainda tem muito tempo para praticar e adquirir experi�ncia.\n"
			"B�n��os sobre v�s!");
		close;
	}
}
