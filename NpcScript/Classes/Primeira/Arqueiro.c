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
| - Info: Quest de Mudança de Classe para Arqueiro.                 |
\*-----------------------------------------------------------------*/

payon_in02,64,71,4	script	Guia dos Arqueiros#archerq	4_M_03,{
	mes("[Guia dos Arqueiros]");
	if (Upper == 1) {
		if (Class == Job_Novice_High && (ADVJOB == Job_Sniper || ADVJOB == Job_Clown || ADVJOB == Job_Gypsy)) {
			mes("Ei, eu te conheço.\n"
				"Você já deve ter feito este teste antes, não foi?");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Ah, você deve ter ido a Valhala para renascer.\n"
				"Humm, muito impressionante!");
			next;
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Guia dos Arqueiros]\n"
					"Err...\n"
					"O melhor a fazer é aprender todas as habilidades básicas antes de se tornar Arqueiro.");
				next;
				mes("[Guia dos Arqueiros]\n"
					"Tudo bem, te vejo mas tarde.");
				close;
			} else {
				mes("[Guia dos Arqueiros]\n"
					"Bem, então eu não preciso dizer mais nada.\n"
					"Eu sei que você pode se tornar um grande Arqueiro...");
				next;
				jobchange(Job_Archer_High);
				mes("[Guia dos Arqueiros]\n"
					"Embora não haja uma recompensa especial para você desta vez, espero que compreenda.\n"
					"Tome muito cuidado.");
				close;
			}
		} else {
			mes("[Guia dos Arqueiros]\n"
				"Oh...?\n"
				"Ei, o que você está fazendo aqui...?");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Eu posso dizer que você não está destinado para ser um Arqueiro.\n"
				"Algo me da a entender que você deve procurar fazer uma outra coisa...");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Archer) {
			mes("Agora que és "+(Sex == SEX_MALE ? "um arqueiro":"uma arqueira")+" aprenda ao máximo o uso do Arco e Flecha.");
			close;
		} else {
			mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+"á guilda dos Arqueiros.\n"
				"Este é o local onde Aprendizes podem ser tonar arqueiros.");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Fique o tempo que desejar, mas por favor não incomode os novatos que querem ser arqueiros.");
			close;
		}
	} else if (!archerquest) {
		mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+" ^777777Aprendiz^000000 á guilda dos Arqueiros.\n"
			"Este é o local onde você pode se tonar um arqueiro, se desejar...");
		next;
		if (getskilllv("NV_BASIC") < 9) {
			mes("[Guia dos Arqueiros]\n"
				"Mas primeiro você deve ter pelo menos suas habilidades básicas no Nível 9.\n"
				"Só então poderá fazer o teste de nossa guilda.");
			close;
		} else {
			mes("[Guia dos Arqueiros]\n"
				"Estaria entereçad"+(Sex == SEX_MALE ? "o":"a")+"?");
			next;
			switch (select("Claro que sim", "O que tenho de fazer", "Não mesmo")) {
				case 1:
				mes("[Guia dos Arqueiros]\n"
					"Então um cadidato...\n"
					"Por favor preencha esse formulário com seu nome.");
				next;
				if (select("Assinar", "Desistir") == 1) {
					mes("[Guia dos Arqueiros]\n"
						"Deixe-me ver.... Seu nome é.....\n"
						"^0066ff"+strcharinfo(CHAR_NAME)+"^000000.\n"
						"Muito bem seu teste começa agora.");
					next;
					mes("[Guia dos Arqueiros]\n"
						"Quer ouvir os requisitos do seu teste?");
					next;
					if (select("Sim por favor", "Eu já sei o que fazer") == 1) {
						mes("[Guia dos Arqueiros]\n"
							"O teste é simples basta você me trazer ^777777Troncos^000000.\n"
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
							"Um arqueiro deve ser muito experiênte em caçar monstros á distância.\n"
							"Por isso esse teste, para medir sua paciência e frieza na caça.");
						next;
						mes("[Guia dos Arqueiros]\n"
							"Normalmente você poderá conseguir troncos derrorando ^ff0000Salgueiros^000000.\n"
							"Mas cuidado! Eles podem ser fortes para pessoas desatentas.");
						next;
						mes("[Guia dos Arqueiros]\n"
							"Boa sorte em sua caçada.\n"
							"Aquardo seu regreço.");
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
					"Vejo em seus olhos que seria "+(Sex == SEX_MALE ? "um ótimo arqueiro":"uma ótima arqueira")+".");
				close;
				case 2:
				mes("[Guia dos Arqueiros]\n"
					"O teste é simples basta você me trazer ^777777Troncos^000000.\n"
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
					"Um arqueiro deve ser muito experiênte em caçar monstros á distância.\n"
					"Por isso esse teste, para medir sua paciência e frieza na caça.");
				next;
				mes("[Guia dos Arqueiros]\n"
					"Normalmente você poderá conseguir troncos derrorando ^ff0000Salgueiros^000000.\n"
					"Mas cuidado! Eles podem ser fortes para pessoas desatentas.");
				close;
				case 3:
				mes("[Guia dos Arqueiros]\n"
					"Se mudar de ideia volte a procurar nossa guilda.\n"
					"Vejo em seus olhos que seria "+(Sex == SEX_MALE ? "um ótimo arqueiro":"uma ótima arqueira")+".");
				close;
			}
		}
	} else {
		if (!countitem(Wooden_Block) && !countitem(Tree_Of_Archer_1) && !countitem(Tree_Of_Archer_2) && !countitem(Tree_Of_Archer_3)) {
			mes("Volte somente quando tiver os troncos necessários.\n"
				"Só lembrando que você deve marcar^ff0000 25 Pontos^000000!\n"
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
			mes(countitem(Wooden_Block)+" unidades de "+getitemname(Wooden_Block)+" são "+.@wooden1+" Pontos.");
		}
		if (countitem(Tree_Of_Archer_1)) {
			mes(countitem(Tree_Of_Archer_1)+" unidades de "+getitemname(Tree_Of_Archer_1)+" são "+.@wooden2+" Pontos.");
		}
		if (countitem(Tree_Of_Archer_2)) {
			mes(countitem(Tree_Of_Archer_2)+" unidades de "+getitemname(Tree_Of_Archer_2)+" são "+.@wooden3+" Pontos.");
		}
		if (countitem(Tree_Of_Archer_3)) {
			mes(countitem(Tree_Of_Archer_3)+" unidades de "+getitemname(Tree_Of_Archer_3)+" são "+.@wooden4+" Pontos.");
		}
		next;
		mes("[Guia dos Arqueiros]");
		if (.@wooden_quant < 10) {
			mes("Que pena seu resultado é muito baixo\n"
				"Volte e traga mais troncos.\n"
				"Sei que consegue, basta se esforçar um pouco mais.");
			close;
		} else if ((.@wooden_quant >= 10) && (.@wooden_quant < 25)) {
			mes("Seu resultado não é ruim.\n"
				"Mas ainda não é o bastante.\n"
				"Volte e traga mais troncos.\n"
				"Sei que consegue, basta se esforçar um pouco mais.");
			close;
		} else if (.@wooden_quant >= 25) {
			mes("Belo trabalho.\n"
				"Você marcou "+.@wooden_quant+"!\n"
				"Isso lhe qualifica em ser um arqueiro.");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Mas antes de lhe formar Arqueiro.\n"
				"Preciso saber se é realmente isso que quer.");
			next;
			mes("[Guia dos Arqueiros]\n"
				"Porque não haverá volta, uma vez arqueiro não poderá mudar para nenhuma outra classe inicial.\n"
				"Mas ainda poderá se tornar Caçador, ou "+(Sex == SEX_MALE ? " Bardo":"Odalisca")+".");
			next;
			if (countitem(Wooden_Block)) { delitem(Wooden_Block,countitem(Wooden_Block)); }
			if (countitem(Tree_Of_Archer_1)) { delitem(Tree_Of_Archer_1,countitem(Tree_Of_Archer_1)); }
			if (countitem(Tree_Of_Archer_2)) { delitem(Tree_Of_Archer_2,countitem(Tree_Of_Archer_2)); }
			if (countitem(Tree_Of_Archer_3)) { delitem(Tree_Of_Archer_3,countitem(Tree_Of_Archer_3)); }
			mes("[Guia dos Arqueiros]\n"
				"Porém se desistir agora, terá que fazer novamente o teste de arqueiro.\n"
				"Então lhe pergunto.\n"
				"É realmente isso que deseja?");
			next;
			if (select("Sim", "Não") == 1) {
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
					"Parabéns!\n"
					"De agora em diante você é "+(Sex == SEX_MALE ? "um Arqueiro":"uma Arqueira")+".");
				next;
				mes("[Guia dos Arqueiros]\n"
					"Mas sua jornada não termina aqui.\n"
					"Vá, existe um mundo inteiro agora para você viajar.");
				close;
			}
			mes("[Guia dos Arqueiros]\n"
				"Não lhe culpo, grandes decisões devem ser bem pensadas.");
			callfunc("ClearJobQuest");
			close;
		}
	}
}
