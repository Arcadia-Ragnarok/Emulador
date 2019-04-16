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
| - Info: Aprendizagem da habilidade Prote��o Arcana (MG_ENERGYCOAT)|
| para Mago.                                                        |
\*-----------------------------------------------------------------*/

geffen_in,151,119,4	script	Grande Mago	1_M_WIZARD,{
	if (getskilllv("MG_ENERGYCOAT")) {
		mes("[BLIZZARDRISS]\n"
			"Eu posso ver que voc� j� desenvolveu essa habilidade.\n"
			"Sua habilidade com a 'Prote��o Arcana' � evidente.\n"
			"Eu sinto muito, eu n�o tenho mais nada para ensin�-lo ...");
		close;
	} else {
		mes("[BLIZZARDRISS]\n"
			"Ei! Meu amigo!\n"
			"Eu estou vendo que voc� � um mago.\n"
			"Conhe�a a si mesmo para descobrir as suas habilidades secretas!");
		next;
		switch (select("Habilidades secretas", "Habilidade ^3355FFProte��o Arcana^000000", "Terminar a conversa")) {
			case 1:
			mes("[BLIZZARDRISS]\n"
				"Por muitos anos eu eu andei estudando a antiga magia de Geffen.\n"
				"Recentemente, eu descobri sobre uma grande habilidade esquecida!!!\n"
				"Isso n�o � �timo?");
			next;
			mes("[BLIZZARDRISS]\n"
				"Essa habilidade usa sua energia mental para bloquear ataques contra voc�.\n"
				"Funciona como um escudo ou armadura m�gico.\n"
				"S� algumas pessoas podem usar esta grande habilidade.");
			next;
			mes("[BLIZZARDRISS]\n"
				"Mas a melhor parte � que eu posso usar essa habilidade!!!\n"
				"Eu posso us�-la para me proteger de ataques!\n"
				"hah hah hah!!");
			next;
			mes("[BLIZZARDRISS]\n"
				"Ok Ok, n�o fique muito animado.\n"
				"Ou�a com aten��o o que eu irei dizer.\n"
				"Aqueles que usam essa magia devem liberar a energia e habilidades que est�o presas neles mesmos!");
			next;
			mes("[BLIZZARDRISS]\n"
				"Se voc� quer mesmo aprender essa habilidade.\n"
				"Voc� deve primeiro trazer alguns itens usados durante o processo.");
			next;
			mes("[BLIZZARDRISS]\n"
				"3 ^3355FFBolinha de Gude^000000 \n"
				"1 ^3355FFDiamante de 1 quilate^000000 \n"
				"5 ^3355FFCasca^000000 \n"
				"1 ^3355FFCasca Rija^000000 \n"
				"Traga-me estes itens.");
			next;
			mes("[BLIZZARDRISS]\n"
				"Al�m disso, mais uma coisa...\n"
				"Voc� deve ter uma certa experi�ncia com a arte da magia.\n"
				"Quer dizer que voc� deve ter um nivel de classe de Mago 35 ou mais.");
			next;
			mes("[BLIZZARDRISS]\n"
				"Bruxos j� tem uma grande experi�ncia no mundo da magia e n�o necessitam de n�vel de classe.\n"
				"Em qualquer caso, ambos devem estar treinados nessa arte e ter um alto grau de poder mental e f�sico.");
			next;
			mes("[BLIZZARDRISS]\n"
				"OK . .\n"
				"N�o h� nada mais a dizer, voc� est� interessado?");
			close;
			case 2:
			if ((countitem(Glass_Bead) > 2) && (countitem(Crystal_Jewel) > 0) && (countitem(Shell) > 4) && (countitem(Solid_Shell) > 0) && (JobLevel > 34 || (BaseJob == Job_Wizard || BaseJob == Job_Sage)) && (BaseClass == Job_Mage)) {
				mes("[BLIZZARDRISS]\n"
					"Ok, eu irei atender seu pedido.\n"
					"Eu irei acordar sua energia adormecida..\n"
					"......\n"
					".............\n"
					"..........................");
				next;
				mes("[BLIZZARDRISS]\n"
					"Poderes antigos de Geffen!\n"
					"Eu procuro a ilumina��o e a honra de sua presen�a. \n"
					"Eu me humilho diante de voc�!\n"
					"...");
				next;
				mes("[BLIZZARDRISS]\n"
					"Conceda-me o seu poder!\n"
					"Libere o espirito!\n"
					"Escudo de Mana!\n"
					"Armadura de Metal!\n"
					"............\n"
					"PROTE��O ARCANA!!!");
				next;
				delitem(Glass_Bead, 3);
				delitem(Crystal_Jewel, 1);
				delitem(Shell, 5);
				delitem(Solid_Shell, 1);
				skill("MG_ENERGYCOAT", 1, 0);
				mes("[BLIZZARDRISS]\n"
					".....\n"
					"Pronto...\n"
					"Agora voc� possui a habilidade de elite ^3355FF'Prote��o Arcana'^000000.\n"
					"Use-a bem.");
				next;
				mes("[BLIZZARDRISS]\n"
					"N�o ouse manchar o nome da nossa classe usando mal esta ou qualquer habilidade.\n"
					"Sua nova habilidade traz novas responsabilidades.");
				close;
			} else {
				mes("[BLIZZARDRISS]\n"
					"Ei!!\n"
					"Voc� n�o ouviu a minha explica��o?!\n"
					"Voc� n�o est� com tudo preparado para que eu possa lhe ajudar.\n"
					"Cheque se voc� tem tudo o que eu pedi.");
				next;
				mes("[BLIZZARDRISS]\n"
					"Se voc� precisar que eu explique de novo, venha me perguntar.\n"
					"Eu ficarei feliz em explicar se voc� quiser ouvir...");
				close;
			}
			case 3:
			mes("[BLIZZARDRISS]\n"
				"O homem s�bio deve ter muita paci�ncia!\n"
				"Prepare-se novamente, e volte quando voc� estiver pronto.");
			close;
		}
	}
}
