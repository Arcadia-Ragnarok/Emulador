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
| - Info: Quest de Mudan�a de Classe para Mago.                     |
\*-----------------------------------------------------------------*/

geffen_in,164,124,4	script	L�der da Guilda#mageq	2_F_MAGICMASTER,{
	if (Upper == 1) {
		if (ADVJOB == Job_High_Wizard || ADVJOB == Job_Professor) {
			if (Class == Job_Novice_High) {
				mes("[L�der da Guilda]\n"
					"Ol�, faz bastante tempo que n�o nos vemos!\n"
					"Mas voc� n�o deveria estar morto?");
				next;
				mes("[L�der da Guilda]\n"
					"Ah, voc� deve ter sido renascido.\n"
					"Bem, eu estou contente em v�-lo novamente.");
				next;
				if (getskilllv("NV_BASIC") < 9) {
					mes("[L�der da Guilda]\n"
						"Sinto muito, mas eu acho que voc� ainda n�o est� pronto para se tornar um Mago.\n"
						"Por que voc� n�o termina de aprender as habilidades b�sicas primeiro?");
					next;
					mes("[L�der da Guilda]\n"
						"Fique � vontade.\n"
						"Quanto mais voc� aprende, mais voc� estar� pronto para aprender magia.");
					close;
				} else {
					mes("[L�der da Guilda]\n"
						"Bem, j� que que voc� passou no teste de Mago uma vez.\n"
						"N�o vou questionar a sua qualifica��o.\n"
						"Voc� quer ter suas habilidades m�gicas de volta imediatamente, n�o �?");
					next;
					jobchange(Job_Mage_High);
					mes("[L�der da Guilda]\n"
						"Uau, por alguma raz�o voc� est� bem melhor do que antes.\n"
						"De qualquer forma, acredito que voc� ir� fazer um trabalho melhor dessa vez.");
					close;
				}
			} else {
				mes("[L�der da Guilda]\n"
					"H� algo mais que eu possa ajud�-lo?\n"
					"Se n�o, por que voc� n�o vai testar suas habilidades?\n"
					"O mundo est� esperando por voc�!");
				close;
			}
		} else {
			mes("[L�der da Guilda]\n"
				"O que, voc� est� interessado na Guilda dos Magos?\n"
				"Eu n�o queria dizer isso, mas voc� n�o pertence a ela.");
			next;
			mes("[L�der da Guilda]\n"
				"Eu n�o sei por que voc� ainda est� na minha frente.\n"
				"Mas eu posso dizer que voc� n�o est� destinado a ser um Mago.");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Mage) {
			mes("[L�der da Guilda]\n"
				"Um dia voc� ir� perceber qu�o grande � o poder que existe dentro de voc�.");
			close;
		} else {
			mes("[L�der da Guilda]\n"
				"Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Guilda dos Magos.\n"
				"Este � o local onde Aprendizes apredem a magia para ser tornarem magos.");
			close;
		}
	} else {
		if (!mageq) {
			if (getskilllv("NV_BASIC") < 9) {
				mes("[L�der da Guilda]\n"
					"Jovem Aprendiz, como pretende aprender novas habilidades, se nem o b�sico voc� aprendeu.");
				close;
			} else {
				mes("[L�der da Guilda]\n"
					"Ent�o est� aqui para aprender a magia se ser tornar "+(Sex == SEX_MALE ? "um Mago":"uma Maga")+"?\n"
					"Tudo bem... assine essa ficha de inscri��o para come�ar-mos o seu teste.");
				next;
				if (select("Quero me inscrever no teste","N�o, quero ser Mago") == 2) {
					mes("[L�der da Guilda]\n"
						"N�o est� aqui para o teste de mago?\n"
						"Desculpe, me enganei.");
					close;
				}
				mes("[L�der da Guilda]\n"
					"Certo. Assine aqui mesmo.\n"
					"Oh, voc� � muito bom para escrever.\n"
					"Certo. Seu nome �... "+strcharinfo(CHAR_NAME)+".");
				next;
				mes("[L�der da Guilda]");
				switch (rand(3)) {
					case 1:
					mes("Para seu teste eu preciso que voc� fa�a uma po��o m�gica.\n"
						"A ^3355FFSolu��o de N�.1^000000");
					setquest(1005);
					mageq = 1;
					break;
					case 2:
					mes("Para seu teste eu preciso que voc� fa�a uma po��o m�gica.\n"
						"A ^3355FFSolu��o de N�.2^000000");
					setquest(1006);
					mageq = 2;
					break;
					case 3:
					mes("Para seu teste eu preciso que voc� fa�a uma po��o m�gica.\n"
						"A ^3355FFSolu��o de N�.3^000000");
					setquest(1007);
					mageq = 3;
					break;
					default:
					mes("Para seu teste eu preciso que voc� fa�a uma po��o m�gica.\n"
						"A ^3355FFSolu��o de N�.4^000000");
					setquest(1008);
					mageq = 4;
				}
				getitem(Empty_Cylinder,1);
				next;
				mes("[L�der da Guilda]\n"
					"Quando ela estiver pronta traga ela para mim.\n"
					"Voc� encontrar� informa��es de como produzir-la, na estante de livros bem al�.");
				close;
			}
		} else if (mageq < 5) {
			if (!countitem(Mage_Test_1) && !countitem(Mage_Test_2) && !countitem(Mage_Test_3) && !countitem(Mage_Test_4)) {
				mes("[L�der da Guilda]\n"
					"Eu pedi a voc� que fizesse a ^3355FFSolu��o de N�."+mageq+"^000000.\n"
					"E onde ela est�?");
				next;
				if (select("N�o sei como fazer a Solu��o", "Tudo bem") == 2) {
					mes("[L�der da Guilda]\n"
						"Tudo bem, lembre-se que voc� deve fazer a ^3355FFSolu��o de N�."+mageq+"^000000.\n"
						"Voc� encontrar� instru��es naquela estante de livros");
					close;
				}
				mes("[L�der da Guilda]\n"
					"Primeiramente voc� deve ir pesquisar nos livros daquela estante, quais s�o os materiais necess�rios para a produ��o da solu��o.");
				next;
				mes("[L�der da Guilda]\n"
					"Com todos os materiais necess�rios, use a m�quina de mistura no centro da sala para misturar os materiais.\n"
					"Se fazer tudo corretamente, conseguir� fazer a Solu��o.\n"
					"Ent�o traga ela para mim.");
				next;
				mes("[L�der da Guilda]\n"
					"Lembre-se que voc� deve fazer a ^3355FFSolu��o de N�."+mageq+"^000000.");
				close;
			} else if ( (mageq == 1 && !countitem(Mage_Test_1)) || (mageq == 2 && !countitem(Mage_Test_2)) || (mageq == 3 && !countitem(Mage_Test_3)) || (mageq == 4 && !countitem(Mage_Test_4)) ) {
				mes("[L�der da Guilda]\n"
					"N�o! Voc� me trouxe a Solu��o errada!\n"
					"Eu havia lhe pedido para fazer a ^3355FFSolu��o de N�."+mageq+"^000000.\n"
					"Ter� que fazer a correta.");
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
				mes("[L�der da Guilda]\n"
					"Muito bem, vi seu esfor�o na pesquisa para produzir a Solu��o.\n"
					"Esse � o esp�rito de um mago.\n"
					"Um eterno estudioso.");
				next;
				mes("[L�der da Guilda]\n"
					"Mas antes que fa�a voc� vir� "+(Sex == SEX_MALE ? "um Mago":"uma Maga")+", tenha certeza se � realmente isso que quer.\n"
					"Porque se virar Mago agora, n�o poder� escolher outra classe.");
				next;
				mes("[L�der da Guilda]\n"
					"Mas magos podem ser tornar Bruxos ou S�bios\n"
					"Darei um tempo para voc� refletir sobre sua decis�o.\n"
					"Sei que tomar� a correta.");
				close;
			}
		} else if (mageq == 6) {
			mes("[L�der da Guilda]\n"
				"Ent�o j� tomou sua decis�o?\n"
				"Quer ser mago agora?");
			next;
			if (select("Sim, quero ser Mago agora","Vou pensar mais") == 2) {
				mes("[L�der da Guilda]\n"
					"Tudo bem, se ainda quiser se tornar "+(Sex == SEX_MALE ? "um Mago":"uma Maga")+" � s� vir falar comigo.");
				close;
			}
			jobchange(Job_Mage);
			callfunc("ClearJobQuest");
			getitem(N_Rod,1);
			mes("[L�der da Guilda]\n"
				"Agora voc� � "+(Sex == SEX_MALE ? "um Mago":"uma Maga")+", estude mais e mais o uso da magia.\n"
				"Aprendar a controlar n�o s� os elementos como tamb�m a for�a natural.");
			close;
		}
	}
}

// ------------------------------------------------------------------
geffen_in,177,112,4	script	Estante de Livros#mageq	HIDDEN_NPC,{
	mes("[Livro Guia]\n"
		"Este guia � propriedade da Guilda dos Magos de Geffen.\n"
		"Cont�m listas de ingredientes para produ��o de Solu��es M�gicas.");
	next;
	switch (select("Solu��o N� 1", "Solu��o N� 2", "Solu��o N� 3", "Solu��o N� 4", "Cancelar")) {
		case 1:
		mes("[^3355FF Solu��o N� 1 ^000000]\n"
			"Lista de ingredientes:\n"
			"2 "+getitemname(Jellopy)+"\n"
			"3 "+getitemname(Fluff)+"\n"
			"1 "+getitemname(Milk)+".");
		next;
		mes("[^3355FF Solu��o N� 1 ^000000]\n"
			"Solvente:\n"
			+ getitemname(Payon_Potion)+"\n"
			"Onde encontr�-la:\n"
			"Perto de uma lagoa na vila dos arqueiros.");
		next;
		mes("[^3355FF Solu��o N� 1 ^000000]\n"
			"C�digo de s�rie do p� m�gico:\n"
			"8472");
		next;
		mes("[^3355FF Solu��o N� 1 ^000000]\n"
			"Catalisador:\n"
			+ getitemname(Yellow_Gemstone)+" (^777777 Provida pela M�quina de mistura ^000000)");
		close;
		case 2:
		mes("[^3355FF Solu��o N� 2 ^000000]\n"
			"Lista de ingredientes:\n"
			"3 "+getitemname(Jellopy)+"\n"
			"1 "+getitemname(Fluff)+"\n"
			"1 "+getitemname(Milk)+".");
		next;
		mes("[^3355FF Solu��o N� 2 ^000000]\n"
			"Nenhum Solvente:");
		next;
		mes("[^3355FF Solu��o N� 2 ^000000]\n"
			"C�digo de s�rie do p� m�gico:\n"
			"3735");
		next;
		mes("[^3355FF Solu��o N� 2 ^000000]\n"
			"Catalisador:\n"
			+ getitemname(Red_Gemstone)+" (^777777 Provida pela M�quina de mistura ^000000)");
		close;
		case 3:
		mes("[^3355FF Solu��o N� 3 ^000000]\n"
			"Lista de ingredientes:\n"
			"6 "+getitemname(Jellopy)+"\n"
			"1 "+getitemname(Fluff)+".");
		next;
		mes("[^3355FF Solu��o N� 3 ^000000]\n"
			"Solvente:\n"
			+ getitemname(Payon_Potion)+"\n"
			"Onde encontr�-la: Perto de uma lagoa na vila dos arqueiros.");
		next;
		mes("[^3355FF Solu��o N� 3 ^000000]\n"
			"C�digo de s�rie do p� m�gico:\n"
			"2750");
		next;
		mes("[^3355FF Solu��o N� 3 ^000000]\n"
			"Catalisador:\n"
			+ getitemname(Blue_Gemstone)+" (^777777 Provida pela M�quina de mistura ^000000)");
		close;
		case 4:
		mes("[^3355FF Solu��o N� 4 ^000000]\n"
			"Lista de ingredientes:\n"
			"2 "+getitemname(Jellopy)+"\n"
			"3 "+getitemname(Fluff)+".");
		next;
		mes("[^3355FF Solu��o N� 4 ^000000]\n"
			"Solvente:\n"
			+ getitemname(Morocc_Potion)+"\n"
			"Aonde encontrar: Em uma lagoa perto da Pir�mide de Morroc.");
		next;
		mes("[^3355FF Solu��o N� 4 ^000000]\n"
			"C�digo de s�rie do p� m�gico:\n"
			"5429");
		next;
		mes("[^3355FF Solu��o N� 4 ^000000]\n"
			"Catalisador:\n"
			+ getitemname(Crystal_Jewel)+" (^777777 Provida pela M�quina de mistura ^000000)");
		close;
	}
	close;
}

// ------------------------------------------------------------------
geffen_in,164,112,4	script	M�quina de Mistura#mageq	HIDDEN_NPC,{
	mes("[M�quina de Mistura]\n"
		"Esta m�quina � propriedade da Geffen Mage Guild e � usada apenas para misturar solu��es para fins m�gicos.");
	if (!mageq) { close; }
	next;
	if (select("Usar a M�quina","Cancelar") == 1) {
		mes("[M�quina de Mistura]\n"
			"Escolha o solvente para a solu��o.");
		next;
		switch (select(getitemname(Payon_Potion), getitemname(Morocc_Potion), "Nenhum Solvente")) {
			case 1:
			if (!countitem(Payon_Potion)) {
				mes("[M�quina de Mistura]\n"
					"Error.\n"
					"Processo cancelado.\n"
					"Nenhum "+getitemname(Payon_Potion)+" inserido.");
				close;
			}
			.@mixitem2 = 1;
			break;
			case 2:
			if (!countitem(Morocc_Potion)) {
				mes("[M�quina de Mistura]\n"
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
				mes("[M�quina de Mistura]");
				if (.@mixitem1_1 != 0) { mes(getitemname(Jellopy)+" "+.@mixitem1_1+"."); }
				if (.@mixitem1_2 != 0) { mes(getitemname(Fluff)+" "+.@mixitem1_2+"."); }
				if (.@mixitem1_3 != 0) { mes(getitemname(Milk)+" "+.@mixitem1_3+"."); }
				if (.@mixitem2 == 0) { mes("Solvente: Nenhum."); }
				if (.@mixitem2 == 1) { mes("Solvente: "+getitemname(Payon_Potion)+"."); }
				if (.@mixitem2 == 2) { mes("Solvente: "+getitemname(Morocc_Potion)+"."); }
				next;
				mes("[M�quina de Mistura]\n"
					"Escolha se deseja come�ar a misturar, ou para voltar a inserir o n�mero de itens a serem misturados.");
				next;
				switch (select("Comece a misturar", "Re-Adicionar itens", "Voltar")) {
					case 1:
					mes("[M�quina de Mistura]\n"
						"Coloque os itens no Recept�culo de Mistura.\n"
						"Verifique se os montantes dos itens est�o corretos.");
					next;
					mes("[M�quina de Mistura]\n"
						"Voc� n�o pode ajustar ou restaurar itens uma vez que eles s�o colocados no Recept�culo de Mistura.");
					next;
					mes("[M�quina de Mistura]\n"
						"Se tudo estiver correto, pressione o bot�o \"Misturar\" quando estiver pronto.\n"
						"Caso contr�rio, pressione o bot�o \"Cancelar\".");
					next;
					if (select("Misturar","Cancelar") == 1) {
						mes("[M�quina de Mistura]\n"
							"Coloque os itens no recept�culo de mistura agora.\n"
							"E espere.");
						next;
						mes("[M�quina de Mistura]\n"
							".....");
						next;
						mes("[M�quina de Mistura]\n"
							"......");
						next;
						mes("[M�quina de Mistura]");
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
							mes(getitemname(Payon_Potion)+" est� em falta.\n"
								"Processo cancelado.");
							close;
						} else if (.@mixitem2 == 2 && !countitem(Morocc_Potion)) {
							mes(getitemname(Payon_Potion)+" est� em falta.\n"
								"Processo cancelado.");
							close;
						}
						if (.@mixitem1_1 != 0) delitem(Jellopy,.@mixitem1_1);
						if (.@mixitem1_2 != 0) delitem(Fluff,.@mixitem1_2);
						if (.@mixitem1_3 != 0) delitem(Milk,.@mixitem1_3);
						if (.@mixitem2 == 1) delitem(Payon_Potion,1);
						if (.@mixitem2 == 2) delitem(Morocc_Potion,1);
						mes("Itens est�o prontos.\n"
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
					mes("[M�quina de Mistura]\n"
						"Processo foi cancelado.\n"
						"Tentar novamente?");
					next;
					if (select("Sim", "N�o") == 1) { break; }
					mes("[M�quina de Mistura]\n"
						"Processo interrompido.");
					close;
				}
				if (.@progress == 3) { break; }
			} else if (.@progress == 1) {
				mes("[M�quina de Mistura]\n"
					"Nada encontrado.");
				next;
			}
			mes("[M�quina de Mistura]\n"
				"Inserir itens necess�rios.");
			while (true) {
				switch (select(getitemname(Jellopy), getitemname(Fluff), getitemname(Milk), "Come�ar a Misturar")) {
					case 1:
					while (true) {
						input .@input;
						if (.@input > 9) {
							next;
							mes("[M�quina de Mistura]\n"
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
							mes("[M�quina de Mistura]\n"
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
							mes("[M�quina de Mistura]\n"
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
		mes("[M�quina de Mistura]\n"
			"Digite o n�mero de s�rie do p� m�gico.");
		next;
		while (true) {
			input .@input;
			if (.@input < 1000 || .@input > 9999) {
				mes("[M�quina de Mistura]");
				if (.@input == 0) {
					mes("Voc� quer ignorar este menu?");
					next;
					if (select("Sim", "N�o") == 1) { break; }
				} else {
					mes("N�mero de s�rie incorreto.\n"
						"Tente novamente.");
					next;
				}
			} else {
				mes("[M�quina de Mistura]\n"
					"O n�mero de s�rie �: "+.@input+", est� correto?");
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
		mes("[M�quina de Mistura]\n"
			"Coloque o Catalisador.");
		next;
		switch (select(getitemname(Yellow_Gemstone),getitemname(Red_Gemstone),getitemname(Blue_Gemstone),getitemname(Crystal_Jewel),"Ignorar")) {
			case 1: .@mixitem3 = 1; break;
			case 2: .@mixitem3 = 2; break;
			case 3: .@mixitem3 = 3; break;
			case 4: .@mixitem3 = 4; break;
			case 5: break;
		}
		mes("[M�quina de Mistura]\n"
			"Tudo pronto.\n"
			"Iniciando processo de mistura.\n"
			"Aguarde um momento.");
		next;
		mes("[M�quina de Mistura]\n"
			"....");
		next;
		mes("[M�quina de Mistura]\n"
			".....");
		next;
		mes("[M�quina de Mistura]\n"
			"......");
		next;
		mes("[M�quina de Mistura]\n"
			".......");
		next;
		mes("[M�quina de Mistura]\n"
			".......");
		next;
		mes("[M�quina de Mistura]\n"
			"........");
		next;
		if (.@mixitem1_1 == 2 && .@mixitem1_2 == 3 && .@mixitem1_3 == 1 && .@mixitem2 == 1 && .@mixitem3 == 1 && .@magic_powder == 1) {
			mes("[M�quina de Mistura]\n"
				"Processo de produ��o da Solu��o M�gica N� 1 completado.");
			getitem(Mage_Test_1,1);
			next;
		} else if (.@mixitem1_1 == 3 && .@mixitem1_2 == 1 && .@mixitem1_3 == 1 && .@mixitem2 == 0 && .@mixitem3 == 2 && .@magic_powder == 2) {
			mes("[M�quina de Mistura]\n"
				"Processo de produ��o da Solu��o M�gica N� 2 completado.");
			getitem(Mage_Test_2,1);
			next;
		} else if (.@mixitem1_1 == 6 && .@mixitem1_2 == 1 && .@mixitem1_3 == 0 && .@mixitem2 == 1 && .@mixitem3 == 3 && .@magic_powder == 3) {
			mes("[M�quina de Mistura]\n"
				"Processo de produ��o da Solu��o M�gica N� 3 completado.");
			getitem(Mage_Test_3,1);
			next;
		} else if (.@mixitem1_1 == 2 && .@mixitem1_2 == 3 && .@mixitem1_3 == 0 && .@mixitem2 == 2 && .@mixitem3 == 4 && .@magic_powder == 4) {
			mes("[M�quina de Mistura]\n"
				"Processo de produ��o da Solu��o M�gica N� 4 completado.");
			getitem(Mage_Test_4,1);
			next;
		} else {
			mes("[M�quina de Mistura]\n"
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
		"Voc� quer uma solu��o?\n"
		"Hum, me d� 50 zenys e um "+getitemname(Empty_Cylinder)+".");
	next;
	if (select("Neg�cio Fechado", "N�o, esquece.") == 2) { close; }
	if (Zeny < 50) {
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"Ei! Voc� n�o possui 50 zenys.");
		close;
	} else if (!countitem(Empty_Cylinder)) {
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"Voc� n�o pode carregar as solu��es!\n"
			"Me traga um "+getitemname(Empty_Cylinder)+" para eu colocar a Solu��o dentro.");
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
