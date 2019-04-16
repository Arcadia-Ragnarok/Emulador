/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master (07/08/2017)                            |
| - Info: Quest de Mudan�a de Classe para Arqueiro.                 |
\*-----------------------------------------------------------------*/

payon_in02,64,71,4	script	Guia dos Arqueiros#archerq	4_M_03,{
	mes("[Guia dos Arqueiros]");
	if (Upper == 1) {
		if (Class == Job_Novice_High && (ADVJOB == Job_Sniper || ADVJOB == Job_Clown || ADVJOB == Job_Gypsy)) {
			mes("Ei, eu te conhe�o.\n"
				"Voc� j� deve ter feito este teste antes, n�o foi?");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Ah, voc� deve ter ido a Valhala para renascer.\n"
				"Humm, muito impressionante!");
			next;
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Guia dos Arqueiros]\n"
					"Err...\n"
					"O melhor a fazer � aprender todas as habilidades b�sicas antes de se tornar Arqueiro.");
				next;
				mes("[Guia dos Arqueiros]\n"
					"Tudo bem, te vejo mas tarde.");
				close;
			} else {
				mes("[Guia dos Arqueiros]\n"
					"Bem, ent�o eu n�o preciso dizer mais nada.\n"
					"Eu sei que voc� pode se tornar um grande Arqueiro...");
				next;
				jobchange(Job_Archer_High);
				mes("[Guia dos Arqueiros]\n"
					"Embora n�o haja uma recompensa especial para voc� desta vez, espero que compreenda.\n"
					"Tome muito cuidado.");
				close;
			}
		} else {
			mes("[Guia dos Arqueiros]\n"
				"Oh...?\n"
				"Ei, o que voc� est� fazendo aqui...?");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Eu posso dizer que voc� n�o est� destinado para ser um Arqueiro.\n"
				"Algo me da a entender que voc� deve procurar fazer uma outra coisa...");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Archer) {
			mes("Agora que �s "+(Sex == SEX_MALE ? "um arqueiro":"uma arqueira")+" aprenda ao m�ximo o uso do Arco e Flecha.");
			close;
		} else {
			mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+"� guilda dos Arqueiros.\n"
				"Este � o local onde Aprendizes podem ser tonar arqueiros.");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Fique o tempo que desejar, mas por favor n�o incomode os novatos que querem ser arqueiros.");
			close;
		}
	} else if (!archerquest) {
		mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+" ^777777Aprendiz^000000 � guilda dos Arqueiros.\n"
			"Este � o local onde voc� pode se tonar um arqueiro, se desejar...");
		next;
		if (getskilllv("NV_BASIC") < 9) {
			mes("[Guia dos Arqueiros]\n"
				"Mas primeiro voc� deve ter pelo menos suas habilidades b�sicas no N�vel 9.\n"
				"S� ent�o poder� fazer o teste de nossa guilda.");
			close;
		} else {
			mes("[Guia dos Arqueiros]\n"
				"Estaria entere�ad"+(Sex == SEX_MALE ? "o":"a")+"?");
			next;
			switch (select("Claro que sim", "O que tenho de fazer", "N�o mesmo")) {
				case 1:
				mes("[Guia dos Arqueiros]\n"
					"Ent�o um cadidato...\n"
					"Por favor preencha esse formul�rio com seu nome.");
				next;
				if (select("Assinar", "Desistir") == 1) {
					mes("[Guia dos Arqueiros]\n"
						"Deixe-me ver.... Seu nome �.....\n"
						"^0066ff"+strcharinfo(CHAR_NAME)+"^000000.\n"
						"Muito bem seu teste come�a agora.");
					next;
					mes("[Guia dos Arqueiros]\n"
						"Quer ouvir os requisitos do seu teste?");
					next;
					if (select("Sim por favor", "Eu j� sei o que fazer") == 1) {
						mes("[Guia dos Arqueiros]\n"
							"O teste � simples basta voc� me trazer ^777777Troncos^000000.\n"
							"E marcar pelo menos 25 pontos com os troncos que trazer.\n"
							"Existem 4 tipos de troncos cada um deles vale determinada quantidade de pontos.");
						next;
						mes("[Guia dos Arqueiros]\n"
							"^0066ff "+getitemname(Tree_Of_Archer_1)+" ^000000 vale 5 Pontos\n"
							"^0066ff "+getitemname(Tree_Of_Archer_2)+" ^000000 vale 3 Pontos\n"
							"^0066ff "+getitemname(Tree_Of_Archer_3)+" ^000000 vale 2 Pontos\n"
							"^0066ff "+getitemname(Wooden_Block)+" ^000000 vale 1 Ponto");
						next;
						mes("[Guia dos Arqueiros]\n"
							"Um arqueiro deve ser muito experi�nte em ca�ar monstros � dist�ncia.\n"
							"Por isso esse teste, para medir sua paci�ncia e frieza na ca�a.");
						next;
						mes("[Guia dos Arqueiros]\n"
							"Normalmente voc� poder� conseguir troncos derrorando ^ff0000Salgueiros^000000.\n"
							"Mas cuidado! Eles podem ser fortes para pessoas desatentas.");
						next;
						mes("[Guia dos Arqueiros]\n"
							"Boa sorte em sua ca�ada.\n"
							"Aquardo seu regre�o.");
						archerquest = 1;
						setquest(1004);
						close;
					}
				}
				mes(strcharinfo(CHAR_NAME) + "\n"
					"Acho melhor eu pensar mais um pouco");
				next;
				mes("[Guia dos Arqueiros]\n"
					"Se mudar de ideia volte a procurar nossa guilda.\n"
					"Vejo em seus olhos que seria "+(Sex == SEX_MALE ? "um �timo arqueiro":"uma �tima arqueira")+".");
				close;
				case 2:
				mes("[Guia dos Arqueiros]\n"
					"O teste � simples basta voc� me trazer ^777777Troncos^000000.\n"
					"E marcar pelo menos 25 pontos com os troncos que trazer.\n"
					"Existem 4 tipos de troncos cada um deles vale determinada quantidade de pontos.");
				next;
				mes("[Guia dos Arqueiros]\n"
					"^0066ff "+getitemname(Tree_Of_Archer_1)+" ^000000 vale 5 Pontos\n"
					"^0066ff "+getitemname(Tree_Of_Archer_2)+" ^000000 vale 3 Pontos\n"
					"^0066ff "+getitemname(Tree_Of_Archer_3)+" ^000000 vale 2 Pontos\n"
					"^0066ff "+getitemname(Wooden_Block)+" ^000000 vale 1 Ponto");
				next;
				mes("[Guia dos Arqueiros]\n"
					"Um arqueiro deve ser muito experi�nte em ca�ar monstros � dist�ncia.\n"
					"Por isso esse teste, para medir sua paci�ncia e frieza na ca�a.");
				next;
				mes("[Guia dos Arqueiros]\n"
					"Normalmente voc� poder� conseguir troncos derrorando ^ff0000Salgueiros^000000.\n"
					"Mas cuidado! Eles podem ser fortes para pessoas desatentas.");
				close;
				case 3:
				mes("[Guia dos Arqueiros]\n"
					"Se mudar de ideia volte a procurar nossa guilda.\n"
					"Vejo em seus olhos que seria "+(Sex == SEX_MALE ? "um �timo arqueiro":"uma �tima arqueira")+".");
				close;
			}
		}
	} else {
		if (!countitem(Wooden_Block) && !countitem(Tree_Of_Archer_1) && !countitem(Tree_Of_Archer_2) && !countitem(Tree_Of_Archer_3)) {
			mes("Volte somente quando tiver os troncos necess�rios.\n"
				"S� lembrando que voc� deve marcar^ff0000 25 Pontos^000000!\n"
				"Boa sorte.");
			close;
		}
		.@wooden1 = countitem(Wooden_Block);
		.@wooden2 = countitem(Tree_Of_Archer_1) * 5;
		.@wooden3 = countitem(Tree_Of_Archer_2) * 3;
		.@wooden4 = countitem(Tree_Of_Archer_3) * 2;
		.@wooden_quant = .@wooden1 + .@wooden2 + .@wooden3 + .@wooden4;
		mes("Vamos ver quantos pontos marcou com os troncos que trouxe...");
		next;
		mes("[Guia dos Arqueiros]");
		if (countitem(Wooden_Block)) {
			mes(countitem(Wooden_Block)+" unidades de "+getitemname(Wooden_Block)+" s�o "+.@wooden1+" Pontos.");
		}
		if (countitem(Tree_Of_Archer_1)) {
			mes(countitem(Tree_Of_Archer_1)+" unidades de "+getitemname(Tree_Of_Archer_1)+" s�o "+.@wooden2+" Pontos.");
		}
		if (countitem(Tree_Of_Archer_2)) {
			mes(countitem(Tree_Of_Archer_2)+" unidades de "+getitemname(Tree_Of_Archer_2)+" s�o "+.@wooden3+" Pontos.");
		}
		if (countitem(Tree_Of_Archer_3)) {
			mes(countitem(Tree_Of_Archer_3)+" unidades de "+getitemname(Tree_Of_Archer_3)+" s�o "+.@wooden4+" Pontos.");
		}
		next;
		mes("[Guia dos Arqueiros]");
		if (.@wooden_quant < 10) {
			mes("Que pena seu resultado � muito baixo\n"
				"Volte e traga mais troncos.\n"
				"Sei que consegue, basta se esfor�ar um pouco mais.");
			close;
		} else if ((.@wooden_quant >= 10) && (.@wooden_quant < 25)) {
			mes("Seu resultado n�o � ruim.\n"
				"Mas ainda n�o � o bastante.\n"
				"Volte e traga mais troncos.\n"
				"Sei que consegue, basta se esfor�ar um pouco mais.");
			close;
		} else if (.@wooden_quant >= 25) {
			mes("Belo trabalho.\n"
				"Voc� marcou "+.@wooden_quant+"!\n"
				"Isso lhe qualifica em ser um arqueiro.");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Mas antes de lhe formar Arqueiro.\n"
				"Preciso saber se � realmente isso que quer.");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Porque n�o haver� volta, uma vez arqueiro n�o poder� mudar para nenhuma outra classe inicial.\n"
				"Mas ainda poder� se tornar Ca�ador, ou "+(Sex == SEX_MALE ? " Bardo":"Odalisca")+".");
			next;
			if (countitem(Wooden_Block)) { delitem(Wooden_Block,countitem(Wooden_Block)); }
			if (countitem(Tree_Of_Archer_1)) { delitem(Tree_Of_Archer_1,countitem(Tree_Of_Archer_1)); }
			if (countitem(Tree_Of_Archer_2)) { delitem(Tree_Of_Archer_2,countitem(Tree_Of_Archer_2)); }
			if (countitem(Tree_Of_Archer_3)) { delitem(Tree_Of_Archer_3,countitem(Tree_Of_Archer_3)); }
			mes("[Guia dos Arqueiros]\n"
				"Por�m se desistir agora, ter� que fazer novamente o teste de arqueiro.\n"
				"Ent�o lhe pergunto.\n"
				"� realmente isso que deseja?");
			next;
			if (select("Sim", "N�o") == 1) {
				getitem(N_Composite_Bow,1);
				getitem(Arrow,.@wooden_quant);
				if (.@wooden_quant >= 40) {
					getitem(Arrow_Container,1);
					getitem(Silver_Arrow_Container,1);
					getitem(Fire_Arrow_Container,1);
				}
				jobchange(Job_Archer);
				completequest(1004);
				callfunc("ClearJobQuest");
				mes("[Guia dos Arqueiros]\n"
					"Parab�ns!\n"
					"De agora em diante voc� � "+(Sex == SEX_MALE ? "um Arqueiro":"uma Arqueira")+".");
				next;
				mes("[Guia dos Arqueiros]\n"
					"Mas sua jornada n�o termina aqui.\n"
					"V�, existe um mundo inteiro agora para voc� viajar.");
				close;
			}
			mes("[Guia dos Arqueiros]\n"
				"N�o lhe culpo, grandes decis�es devem ser bem pensadas.");
			callfunc("ClearJobQuest");
			close;
		}
	}
}
