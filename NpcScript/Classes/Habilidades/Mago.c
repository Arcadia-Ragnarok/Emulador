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
| - Info: Aprendizagem da habilidade Proteção Arcana (MG_ENERGYCOAT)|
| para Mago.                                                        |
\*-----------------------------------------------------------------*/

geffen_in,151,119,4	script	Grande Mago	1_M_WIZARD,{
	if (getskilllv("MG_ENERGYCOAT")) {
		mes("[BLIZZARDRISS]\n"
			"Eu posso ver que você já desenvolveu essa habilidade.\n"
			"Sua habilidade com a 'Proteção Arcana' é evidente.\n"
			"Eu sinto muito, eu não tenho mais nada para ensiná-lo ...");
		close;
	} else {
		mes("[BLIZZARDRISS]\n"
			"Ei! Meu amigo!\n"
			"Eu estou vendo que você é um mago.\n"
			"Conheça a si mesmo para descobrir as suas habilidades secretas!");
		next;
		switch (select("Habilidades secretas", "Habilidade ^3355FFProteção Arcana^000000", "Terminar a conversa")) {
			case 1:
			mes("[BLIZZARDRISS]\n"
				"Por muitos anos eu eu andei estudando a antiga magia de Geffen.\n"
				"Recentemente, eu descobri sobre uma grande habilidade esquecida!!!\n"
				"Isso não é ótimo?");
			next;
			mes("[BLIZZARDRISS]\n"
				"Essa habilidade usa sua energia mental para bloquear ataques contra você.\n"
				"Funciona como um escudo ou armadura mágico.\n"
				"Só algumas pessoas podem usar esta grande habilidade.");
			next;
			mes("[BLIZZARDRISS]\n"
				"Mas a melhor parte é que eu posso usar essa habilidade!!!\n"
				"Eu posso usá-la para me proteger de ataques!\n"
				"hah hah hah!!");
			next;
			mes("[BLIZZARDRISS]\n"
				"Ok Ok, não fique muito animado.\n"
				"Ouça com atenção o que eu irei dizer.\n"
				"Aqueles que usam essa magia devem liberar a energia e habilidades que estão presas neles mesmos!");
			next;
			mes("[BLIZZARDRISS]\n"
				"Se você quer mesmo aprender essa habilidade.\n"
				"Você deve primeiro trazer alguns itens usados durante o processo.");
			next;
			mes("[BLIZZARDRISS]\n"
				"3 ^3355FFBolinha de Gude^000000 \n"
				"1 ^3355FFDiamante de 1 quilate^000000 \n"
				"5 ^3355FFCasca^000000 \n"
				"1 ^3355FFCasca Rija^000000 \n"
				"Traga-me estes itens.");
			next;
			mes("[BLIZZARDRISS]\n"
				"Além disso, mais uma coisa...\n"
				"Você deve ter uma certa experiência com a arte da magia.\n"
				"Quer dizer que você deve ter um nivel de classe de Mago 35 ou mais.");
			next;
			mes("[BLIZZARDRISS]\n"
				"Bruxos já tem uma grande experiência no mundo da magia e não necessitam de nível de classe.\n"
				"Em qualquer caso, ambos devem estar treinados nessa arte e ter um alto grau de poder mental e físico.");
			next;
			mes("[BLIZZARDRISS]\n"
				"OK . .\n"
				"Não há nada mais a dizer, você está interessado?");
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
					"Eu procuro a iluminação e a honra de sua presença. \n"
					"Eu me humilho diante de você!\n"
					"...");
				next;
				mes("[BLIZZARDRISS]\n"
					"Conceda-me o seu poder!\n"
					"Libere o espirito!\n"
					"Escudo de Mana!\n"
					"Armadura de Metal!\n"
					"............\n"
					"PROTEÇÃO ARCANA!!!");
				next;
				delitem(Glass_Bead, 3);
				delitem(Crystal_Jewel, 1);
				delitem(Shell, 5);
				delitem(Solid_Shell, 1);
				skill("MG_ENERGYCOAT", 1, 0);
				mes("[BLIZZARDRISS]\n"
					".....\n"
					"Pronto...\n"
					"Agora você possui a habilidade de elite ^3355FF'Proteção Arcana'^000000.\n"
					"Use-a bem.");
				next;
				mes("[BLIZZARDRISS]\n"
					"Não ouse manchar o nome da nossa classe usando mal esta ou qualquer habilidade.\n"
					"Sua nova habilidade traz novas responsabilidades.");
				close;
			} else {
				mes("[BLIZZARDRISS]\n"
					"Ei!!\n"
					"Você não ouviu a minha explicação?!\n"
					"Você não está com tudo preparado para que eu possa lhe ajudar.\n"
					"Cheque se você tem tudo o que eu pedi.");
				next;
				mes("[BLIZZARDRISS]\n"
					"Se você precisar que eu explique de novo, venha me perguntar.\n"
					"Eu ficarei feliz em explicar se você quiser ouvir...");
				close;
			}
			case 3:
			mes("[BLIZZARDRISS]\n"
				"O homem sábio deve ter muita paciência!\n"
				"Prepare-se novamente, e volte quando você estiver pronto.");
			close;
		}
	}
}
