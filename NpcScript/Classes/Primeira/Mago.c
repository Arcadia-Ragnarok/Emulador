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
| - Copyright: Spell Master (13/08/2017)                            |
| - Info: Quest de Mudança de Classe para Mago.                     |
\*-----------------------------------------------------------------*/

geffen_in,164,124,4	script	Líder da Guilda#mageq	2_F_MAGICMASTER,{
	if (Upper == 1) {
		if (ADVJOB == Job_High_Wizard || ADVJOB == Job_Professor) {
			if (Class == Job_Novice_High) {
				mes("[Líder da Guilda]\n"
					"Olá, faz bastante tempo que não nos vemos!\n"
					"Mas você não deveria estar morto?");
				next;
				mes("[Líder da Guilda]\n"
					"Ah, você deve ter sido renascido.\n"
					"Bem, eu estou contente em vê-lo novamente.");
				next;
				if (getskilllv("NV_BASIC") < 9) {
					mes("[Líder da Guilda]\n"
						"Sinto muito, mas eu acho que você ainda não está pronto para se tornar um Mago.\n"
						"Por que você não termina de aprender as habilidades básicas primeiro?");
					next;
					mes("[Líder da Guilda]\n"
						"Fique à vontade.\n"
						"Quanto mais você aprende, mais você estará pronto para aprender magia.");
					close;
				} else {
					mes("[Líder da Guilda]\n"
						"Bem, já que que você passou no teste de Mago uma vez.\n"
						"Não vou questionar a sua qualificação.\n"
						"Você quer ter suas habilidades mágicas de volta imediatamente, não é?");
					next;
					jobchange(Job_Mage_High);
					mes("[Líder da Guilda]\n"
						"Uau, por alguma razão você está bem melhor do que antes.\n"
						"De qualquer forma, acredito que você irá fazer um trabalho melhor dessa vez.");
					close;
				}
			} else {
				mes("[Líder da Guilda]\n"
					"Há algo mais que eu possa ajudá-lo?\n"
					"Se não, por que você não vai testar suas habilidades?\n"
					"O mundo está esperando por você!");
				close;
			}
		} else {
			mes("[Líder da Guilda]\n"
				"O que, você está interessado na Guilda dos Magos?\n"
				"Eu não queria dizer isso, mas você não pertence a ela.");
			next;
			mes("[Líder da Guilda]\n"
				"Eu não sei por que você ainda está na minha frente.\n"
				"Mas eu posso dizer que você não está destinado a ser um Mago.");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Mage) {
			mes("[Líder da Guilda]\n"
				"Um dia você irá perceber quão grande é o poder que existe dentro de você.");
			close;
		} else {
			mes("[Líder da Guilda]\n"
				"Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à Guilda dos Magos.\n"
				"Este é o local onde Aprendizes apredem a magia para ser tornarem magos.");
			close;
		}
	} else {
		if (!mageq) {
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Líder da Guilda]\n"
					"Jovem Aprendiz, como pretende aprender novas habilidades, se nem o básico você aprendeu.");
				close;
			} else {
				mes("[Líder da Guilda]\n"
					"Então está aqui para aprender a magia se ser tornar "+(Sex == SEX_MALE ? "um Mago":"uma Maga")+"?\n"
					"Tudo bem... assine essa ficha de inscrição para começar-mos o seu teste.");
				next;
				if (select("Quero me inscrever no teste","Não, quero ser Mago") == 2) {
					mes("[Líder da Guilda]\n"
						"Não está aqui para o teste de mago?\n"
						"Desculpe, me enganei.");
					close;
				}
				mes("[Líder da Guilda]\n"
					"Certo. Assine aqui mesmo.\n"
					"Oh, você é muito bom para escrever.\n"
					"Certo. Seu nome é... "+strcharinfo(CHAR_NAME)+".");
				next;
				mes("[Líder da Guilda]");
				switch (rand(3)) {
					case 1:
					mes("Para seu teste eu preciso que você faça uma poção mágica.\n"
						"A ^3355FFSolução de Nº.1^000000");
					setquest(1005);
					mageq = 1;
					break;
					case 2:
					mes("Para seu teste eu preciso que você faça uma poção mágica.\n"
						"A ^3355FFSolução de Nº.2^000000");
					setquest(1006);
					mageq = 2;
					break;
					case 3:
					mes("Para seu teste eu preciso que você faça uma poção mágica.\n"
						"A ^3355FFSolução de Nº.3^000000");
					setquest(1007);
					mageq = 3;
					break;
					default:
					mes("Para seu teste eu preciso que você faça uma poção mágica.\n"
						"A ^3355FFSolução de Nº.4^000000");
					setquest(1008);
					mageq = 4;
				}
				getitem(Empty_Cylinder,1);
				next;
				mes("[Líder da Guilda]\n"
					"Quando ela estiver pronta traga ela para mim.\n"
					"Você encontrará informações de como produzir-la, na estante de livros bem alí.");
				close;
			}
		} else if (mageq < 5) {
			if (!countitem(Mage_Test_1) && !countitem(Mage_Test_2) && !countitem(Mage_Test_3) && !countitem(Mage_Test_4)) {
				mes("[Líder da Guilda]\n"
					"Eu pedi a você que fizesse a ^3355FFSolução de Nº."+mageq+"^000000.\n"
					"E onde ela está?");
				next;
				if (select("Não sei como fazer a Solução", "Tudo bem") == 2) {
					mes("[Líder da Guilda]\n"
						"Tudo bem, lembre-se que você deve fazer a ^3355FFSolução de Nº."+mageq+"^000000.\n"
						"Você encontrará instruções naquela estante de livros");
					close;
				}
				mes("[Líder da Guilda]\n"
					"Primeiramente você deve ir pesquisar nos livros daquela estante, quais são os materiais necessários para a produção da solução.");
				next;
				mes("[Líder da Guilda]\n"
					"Com todos os materiais necessários, use a máquina de mistura no centro da sala para misturar os materiais.\n"
					"Se fazer tudo corretamente, conseguirá fazer a Solução.\n"
					"Então traga ela para mim.");
				next;
				mes("[Líder da Guilda]\n"
					"Lembre-se que você deve fazer a ^3355FFSolução de Nº."+mageq+"^000000.");
				close;
			} else if ( (mageq == 1 && !countitem(Mage_Test_1)) || (mageq == 2 && !countitem(Mage_Test_2)) || (mageq == 3 && !countitem(Mage_Test_3)) || (mageq == 4 && !countitem(Mage_Test_4)) ) {
				mes("[Líder da Guilda]\n"
					"Não! Você me trouxe a Solução errada!\n"
					"Eu havia lhe pedido para fazer a ^3355FFSolução de Nº."+mageq+"^000000.\n"
					"Terá que fazer a correta.");
				if (countitem(Mage_Test_1)) { delitem(Mage_Test_1,countitem(Mage_Test_1)); }
				if (countitem(Mage_Test_2)) { delitem(Mage_Test_2,countitem(Mage_Test_2)); }
				if (countitem(Mage_Test_3)) { delitem(Mage_Test_3,countitem(Mage_Test_3)); }
				if (countitem(Mage_Test_4)) { delitem(Mage_Test_4,countitem(Mage_Test_4)); }
				getitem(Empty_Cylinder,1);
				close;
			} else {
				mageq = 6;
				if (countitem(Mage_Test_1)) { delitem(Mage_Test_1,countitem(Mage_Test_1)); }
				if (countitem(Mage_Test_2)) { delitem(Mage_Test_2,countitem(Mage_Test_2)); }
				if (countitem(Mage_Test_3)) { delitem(Mage_Test_3,countitem(Mage_Test_3)); }
				if (countitem(Mage_Test_4)) { delitem(Mage_Test_4,countitem(Mage_Test_4)); }
				if (questprogress(1005)) { completequest(1005); }
				if (questprogress(1006)) { completequest(1006); }
				if (questprogress(1007)) { completequest(1007); }
				if (questprogress(1008)) { completequest(1008); }
				mes("[Líder da Guilda]\n"
					"Muito bem, vi seu esforço na pesquisa para produzir a Solução.\n"
					"Esse é o espírito de um mago.\n"
					"Um eterno estudioso.");
				next;
				mes("[Líder da Guilda]\n"
					"Mas antes que faça você virá "+(Sex == SEX_MALE ? "um Mago":"uma Maga")+", tenha certeza se é realmente isso que quer.\n"
					"Porque se virar Mago agora, não poderá escolher outra classe.");
				next;
				mes("[Líder da Guilda]\n"
					"Mas magos podem ser tornar Bruxos ou Sábios\n"
					"Darei um tempo para você refletir sobre sua decisão.\n"
					"Sei que tomará a correta.");
				close;
			}
		} else if (mageq == 6) {
			mes("[Líder da Guilda]\n"
				"Então já tomou sua decisão?\n"
				"Quer ser mago agora?");
			next;
			if (select("Sim, quero ser Mago agora","Vou pensar mais") == 2) {
				mes("[Líder da Guilda]\n"
					"Tudo bem, se ainda quiser se tornar "+(Sex == SEX_MALE ? "um Mago":"uma Maga")+" é só vir falar comigo.");
				close;
			}
			jobchange(Job_Mage);
			callfunc("ClearJobQuest");
			getitem(N_Rod,1);
			mes("[Líder da Guilda]\n"
				"Agora você é "+(Sex == SEX_MALE ? "um Mago":"uma Maga")+", estude mais e mais o uso da magia.\n"
				"Aprendar a controlar não só os elementos como também a força natural.");
			close;
		}
	}
}

// ------------------------------------------------------------------
geffen_in,177,112,4	script	Estante de Livros#mageq	HIDDEN_NPC,{
	mes("[Livro Guia]\n"
		"Este guia é propriedade da Guilda dos Magos de Geffen.\n"
		"Contém listas de ingredientes para produção de Soluções Mágicas.");
	next;
	switch (select("Solução Nº 1", "Solução Nº 2", "Solução Nº 3", "Solução Nº 4", "Cancelar")) {
		case 1:
		mes("[^3355FF Solução Nº 1 ^000000]\n"
			"Lista de ingredientes:\n"
			"2 "+getitemname(Jellopy)+"\n"
			"3 "+getitemname(Fluff)+"\n"
			"1 "+getitemname(Milk)+".");
		next;
		mes("[^3355FF Solução Nº 1 ^000000]\n"
			"Solvente:\n"
			+ getitemname(Payon_Potion)+"\n"
			"Onde encontrá-la:\n"
			"Perto de uma lagoa na vila dos arqueiros.");
		next;
		mes("[^3355FF Solução Nº 1 ^000000]\n"
			"Código de série do pó mágico:\n"
			"8472");
		next;
		mes("[^3355FF Solução Nº 1 ^000000]\n"
			"Catalisador:\n"
			+ getitemname(Yellow_Gemstone)+" (^777777 Provida pela Máquina de mistura ^000000)");
		close;
		case 2:
		mes("[^3355FF Solução Nº 2 ^000000]\n"
			"Lista de ingredientes:\n"
			"3 "+getitemname(Jellopy)+"\n"
			"1 "+getitemname(Fluff)+"\n"
			"1 "+getitemname(Milk)+".");
		next;
		mes("[^3355FF Solução Nº 2 ^000000]\n"
			"Nenhum Solvente:");
		next;
		mes("[^3355FF Solução Nº 2 ^000000]\n"
			"Código de série do pó mágico:\n"
			"3735");
		next;
		mes("[^3355FF Solução Nº 2 ^000000]\n"
			"Catalisador:\n"
			+ getitemname(Red_Gemstone)+" (^777777 Provida pela Máquina de mistura ^000000)");
		close;
		case 3:
		mes("[^3355FF Solução Nº 3 ^000000]\n"
			"Lista de ingredientes:\n"
			"6 "+getitemname(Jellopy)+"\n"
			"1 "+getitemname(Fluff)+".");
		next;
		mes("[^3355FF Solução Nº 3 ^000000]\n"
			"Solvente:\n"
			+ getitemname(Payon_Potion)+"\n"
			"Onde encontrá-la: Perto de uma lagoa na vila dos arqueiros.");
		next;
		mes("[^3355FF Solução Nº 3 ^000000]\n"
			"Código de série do pó mágico:\n"
			"2750");
		next;
		mes("[^3355FF Solução Nº 3 ^000000]\n"
			"Catalisador:\n"
			+ getitemname(Blue_Gemstone)+" (^777777 Provida pela Máquina de mistura ^000000)");
		close;
		case 4:
		mes("[^3355FF Solução Nº 4 ^000000]\n"
			"Lista de ingredientes:\n"
			"2 "+getitemname(Jellopy)+"\n"
			"3 "+getitemname(Fluff)+".");
		next;
		mes("[^3355FF Solução Nº 4 ^000000]\n"
			"Solvente:\n"
			+ getitemname(Morocc_Potion)+"\n"
			"Aonde encontrar: Em uma lagoa perto da Pirâmide de Morroc.");
		next;
		mes("[^3355FF Solução Nº 4 ^000000]\n"
			"Código de série do pó mágico:\n"
			"5429");
		next;
		mes("[^3355FF Solução Nº 4 ^000000]\n"
			"Catalisador:\n"
			+ getitemname(Crystal_Jewel)+" (^777777 Provida pela Máquina de mistura ^000000)");
		close;
	}
	close;
}

// ------------------------------------------------------------------
geffen_in,164,112,4	script	Máquina de Mistura#mageq	HIDDEN_NPC,{
	mes("[Máquina de Mistura]\n"
		"Esta máquina é propriedade da Geffen Mage Guild e é usada apenas para misturar soluções para fins mágicos.");
	if (!mageq) { close; }
	next;
	if (select("Usar a Máquina","Cancelar") == 1) {
		mes("[Máquina de Mistura]\n"
			"Escolha o solvente para a solução.");
		next;
		switch (select(getitemname(Payon_Potion), getitemname(Morocc_Potion), "Nenhum Solvente")) {
			case 1:
			if (!countitem(Payon_Potion)) {
				mes("[Máquina de Mistura]\n"
					"Error.\n"
					"Processo cancelado.\n"
					"Nenhum "+getitemname(Payon_Potion)+" inserido.");
				close;
			}
			.@mixitem2 = 1;
			break;
			case 2:
			if (!countitem(Morocc_Potion)) {
				mes("[Máquina de Mistura]\n"
					"Error.\n"
					"Processo cancelado.\n"
					"Nenhum "+getitemname(Morocc_Potion)+" inserido.");
				close;
			}
			.@mixitem2 = 2;
			break;
			case 3:
			.@mixitem2 = 0;
			break;
		}
		while (true) {
			if (.@progress == 2) {
				mes("[Máquina de Mistura]");
				if (.@mixitem1_1 != 0) { mes(getitemname(Jellopy)+" "+.@mixitem1_1+"."); }
				if (.@mixitem1_2 != 0) { mes(getitemname(Fluff)+" "+.@mixitem1_2+"."); }
				if (.@mixitem1_3 != 0) { mes(getitemname(Milk)+" "+.@mixitem1_3+"."); }
				if (.@mixitem2 == 0) { mes("Solvente: Nenhum."); }
				if (.@mixitem2 == 1) { mes("Solvente: "+getitemname(Payon_Potion)+"."); }
				if (.@mixitem2 == 2) { mes("Solvente: "+getitemname(Morocc_Potion)+"."); }
				next;
				mes("[Máquina de Mistura]\n"
					"Escolha se deseja começar a misturar, ou para voltar a inserir o número de itens a serem misturados.");
				next;
				switch (select("Comece a misturar", "Re-Adicionar itens", "Voltar")) {
					case 1:
					mes("[Máquina de Mistura]\n"
						"Coloque os itens no Receptáculo de Mistura.\n"
						"Verifique se os montantes dos itens estão corretos.");
					next;
					mes("[Máquina de Mistura]\n"
						"Você não pode ajustar ou restaurar itens uma vez que eles são colocados no Receptáculo de Mistura.");
					next;
					mes("[Máquina de Mistura]\n"
						"Se tudo estiver correto, pressione o botão \"Misturar\" quando estiver pronto.\n"
						"Caso contrário, pressione o botão \"Cancelar\".");
					next;
					if (select("Misturar","Cancelar") == 1) {
						mes("[Máquina de Mistura]\n"
							"Coloque os itens no receptáculo de mistura agora.\n"
							"E espere.");
						next;
						mes("[Máquina de Mistura]\n"
							".....");
						next;
						mes("[Máquina de Mistura]\n"
							"......");
						next;
						mes("[Máquina de Mistura]");
						if (countitem(Jellopy) < .@mixitem1_1) {
							mes("Quantidade de "+getitemname(Jellopy)+" insuficientes.\n"
								"Processo cancelado.");
							close;
						} else if (countitem(Fluff) < .@mixitem1_2) {
							mes("Quantidade de "+getitemname(Fluff)+" insuficientes.\n"
								"Processo cancelado.");
							close;
						} else if (countitem(Milk) < .@mixitem1_3) {
							mes("Quantidade de "+getitemname(Milk)+" insuficientes.\n"
								"Processo cancelado.");
							close;
						} else if (.@mixitem2 == 1 && !countitem(Payon_Potion)) {
							mes(getitemname(Payon_Potion)+" está em falta.\n"
								"Processo cancelado.");
							close;
						} else if (.@mixitem2 == 2 && !countitem(Morocc_Potion)) {
							mes(getitemname(Payon_Potion)+" está em falta.\n"
								"Processo cancelado.");
							close;
						}
						if (.@mixitem1_1 != 0) delitem(Jellopy,.@mixitem1_1);
						if (.@mixitem1_2 != 0) delitem(Fluff,.@mixitem1_2);
						if (.@mixitem1_3 != 0) delitem(Milk,.@mixitem1_3);
						if (.@mixitem2 == 1) delitem(Payon_Potion,1);
						if (.@mixitem2 == 2) delitem(Morocc_Potion,1);
						mes("Itens estão prontos.\n"
							"Feche a tampa.");
						.@progress = 3;
						next;
					}
					break;
					case 2:
					.@continue = 0;
					next;
					break;
					case 3:
					.@mixitem1_1 = 0;
					.@mixitem1_2 = 0;
					.@mixitem1_3 = 0;
					.@progress = 0;
					.@continue = 0;
					mes("[Máquina de Mistura]\n"
						"Processo foi cancelado.\n"
						"Tentar novamente?");
					next;
					if (select("Sim", "Não") == 1) { break; }
					mes("[Máquina de Mistura]\n"
						"Processo interrompido.");
					close;
				}
				if (.@progress == 3) { break; }
			} else if (.@progress == 1) {
				mes("[Máquina de Mistura]\n"
					"Nada encontrado.");
				next;
			}
			mes("[Máquina de Mistura]\n"
				"Inserir itens necessários.");
			while (true) {
				switch (select(getitemname(Jellopy), getitemname(Fluff), getitemname(Milk), "Começar a Misturar")) {
					case 1:
					while (true) {
						input .@input;
						if (.@input > 9) {
							next;
							mes("[Máquina de Mistura]\n"
								"Erro: limite do item excedido.\n"
								"Insira valores de 10 e tente novamente.");
							next;
						} else {
							if (countitem(Jellopy) > 0) {
								.@mixitem1_1 += .@input;
							}
							.@progress = 2;
							break;
						}
					}
					break;
					case 2:
					while (true) {
						input .@input;
						if (.@input > 9) {
							next;
							mes("[Máquina de Mistura]\n"
								"Erro: limite do item excedido.\n"
								"Insira valores de 10 e tente novamente.");
							next;
						} else {
							if (countitem(Fluff) > 0) {
								.@mixitem1_2 += .@input;
							}
							.@progress = 2;
							break;
						}
					}
					break;
					case 3:
					while (true) {
						input .@input;
						if (.@input > 9) {
							next;
							mes("[Máquina de Mistura]\n"
								"Erro: limite do item excedido.\n"
								"Insira valores de 10 e tente novamente.");
							next;
						} else {
							if (countitem(Milk) > 0) {
								.@mixitem1_3 += .@input;
							}
							.@progress = 2;
							break;
						}
					}
					break;
					case 4:
					if (.@progress != 2) {
						.@progress = 1;
					}
					.@continue = 1;
					next;
				}
				if (.@continue) { break; }
			}
		}
		mes("[Máquina de Mistura]\n"
			"Digite o número de série do pó mágico.");
		next;
		while (true) {
			input .@input;
			if (.@input < 1000 || .@input > 9999) {
				mes("[Máquina de Mistura]");
				if (.@input == 0) {
					mes("Você quer ignorar este menu?");
					next;
					if (select("Sim", "Não") == 1) { break; }
				} else {
					mes("Número de série incorreto.\n"
						"Tente novamente.");
					next;
				}
			} else {
				mes("[Máquina de Mistura]\n"
					"O número de série é: "+.@input+", está correto?");
				next;
				if (select("Confirmar", "Cancelar") == 1) {
					if (.@input == 8472) { .@magic_powder = 1; }
					else if (.@input == 3735) { .@magic_powder = 2; }
					else if (.@input == 2750) { .@magic_powder = 3; }
					else if (.@input == 5429) { .@magic_powder = 4; }
					else { .@magic_powder = 5; }
				}
				break;
			}
		}
		mes("[Máquina de Mistura]\n"
			"Coloque o Catalisador.");
		next;
		switch (select(getitemname(Yellow_Gemstone),getitemname(Red_Gemstone),getitemname(Blue_Gemstone),getitemname(Crystal_Jewel),"Ignorar")) {
			case 1: .@mixitem3 = 1; break;
			case 2: .@mixitem3 = 2; break;
			case 3: .@mixitem3 = 3; break;
			case 4: .@mixitem3 = 4; break;
			case 5: break;
		}
		mes("[Máquina de Mistura]\n"
			"Tudo pronto.\n"
			"Iniciando processo de mistura.\n"
			"Aguarde um momento.");
		next;
		mes("[Máquina de Mistura]\n"
			"....");
		next;
		mes("[Máquina de Mistura]\n"
			".....");
		next;
		mes("[Máquina de Mistura]\n"
			"......");
		next;
		mes("[Máquina de Mistura]\n"
			".......");
		next;
		mes("[Máquina de Mistura]\n"
			".......");
		next;
		mes("[Máquina de Mistura]\n"
			"........");
		next;
		if (.@mixitem1_1 == 2 && .@mixitem1_2 == 3 && .@mixitem1_3 == 1 && .@mixitem2 == 1 && .@mixitem3 == 1 && .@magic_powder == 1) {
			mes("[Máquina de Mistura]\n"
				"Processo de produção da Solução Mágica Nº 1 completado.");
			getitem(Mage_Test_1,1);
			next;
		} else if (.@mixitem1_1 == 3 && .@mixitem1_2 == 1 && .@mixitem1_3 == 1 && .@mixitem2 == 0 && .@mixitem3 == 2 && .@magic_powder == 2) {
			mes("[Máquina de Mistura]\n"
				"Processo de produção da Solução Mágica Nº 2 completado.");
			getitem(Mage_Test_2,1);
			next;
		} else if (.@mixitem1_1 == 6 && .@mixitem1_2 == 1 && .@mixitem1_3 == 0 && .@mixitem2 == 1 && .@mixitem3 == 3 && .@magic_powder == 3) {
			mes("[Máquina de Mistura]\n"
				"Processo de produção da Solução Mágica Nº 3 completado.");
			getitem(Mage_Test_3,1);
			next;
		} else if (.@mixitem1_1 == 2 && .@mixitem1_2 == 3 && .@mixitem1_3 == 0 && .@mixitem2 == 2 && .@mixitem3 == 4 && .@magic_powder == 4) {
			mes("[Máquina de Mistura]\n"
				"Processo de produção da Solução Mágica Nº 4 completado.");
			getitem(Mage_Test_4,1);
			next;
		} else {
			mes("[Máquina de Mistura]\n"
				"Erro ineperado");
			next;
		}
		close;
	}
	close;
}

// ------------------------------------------------------------------
pay_arche,122,100,0	script	Dollshoi#mageq	4_M_ORIENT01,{
	mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
		"Você quer uma solução?\n"
		"Hum, me dê 50 zenys e um "+getitemname(Empty_Cylinder)+".");
	next;
	if (select("Negócio Fechado", "Não, esquece.") == 2) { close; }
	if (Zeny < 50) {
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"Ei! Você não possui 50 zenys.");
		close;
	} else if (!countitem(Empty_Cylinder)) {
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"Você não pode carregar as soluções!\n"
			"Me traga um "+getitemname(Empty_Cylinder)+" para eu colocar a Solução dentro.");
		close;
	} else {
		delitem(Empty_Cylinder,1);
		Zeny -= 50;
		if (strnpcinfo(NPC_NAME) == "Dollshoi#mageq") { getitem(Payon_Potion,1); }
		else if (strnpcinfo(NPC_NAME) == "Ponka-Hontas#mageq") { getitem(Morocc_Potion,1); }
		close;
	}
}
moc_ruins,91,150,0	duplicate(Dollshoi#mageq)	Ponka-Hontas#mageq	4_F_04
