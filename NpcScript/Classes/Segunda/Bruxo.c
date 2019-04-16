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
| - Copyright: Spell Master (14/09/2017)                            |
| - Info: Quest de Mudan�a de Classe para Buxo.                     |
\*-----------------------------------------------------------------*/

gef_tower,111,37,4	script	Bruxa#wizardq	1_F_GYPSY,{
	if (BaseJob == Job_Mage) {
		if (!wizardq) {
			mes("[Bruxa]\n"
				"H�? O que faz aqui em cima...?\n"
				"O que trouxe voc� at� aqui?");
			next;
			if (select("Eu quero me tornar um"+(Sex == SEX_MALE ? "bruxo":"a bruxa"), "Nada") == 2) {
				mes("[Bruxa]\n"
					"Ent�o voc� n�o tem nenhum assunto para tratar aqui.");
				close;
			} else {
				mes("[Bruxa]\n"
					"Humm...\n"
					"Bem, � claro que voc� quer se tornar um Bruxo.\n"
					"Sen�o voc� n�o subiria todas aquelas escadas at� aqui, certo?\n"
					"Em todo caso, eu devo lhe dar as boas-vindas.");
				next;
				mes("[Bruxa]\n"
					"Meu nome � Catherine Medici.");
				next;
				mes("[Catherine]\n"
					"Muitas pessoas querem se tornar Bruxos.\n"
					"Mas apenas as fortes e as pacientes v�o alcan�ar seus objetivos.\n"
					"Para se tornar um Bruxo, deve-se passar por tarefas dif�ceis.");
				next;
				mes("[Catherine]\n"
					"Tamb�m, apenas Magos que alcan�aram o n�vel de classe 40 ou mais.\n"
					"Est�o classificados para essas tarefas.\n"
					"Magos de n�vel mais baixo que esse n�o t�m experi�ncia suficiente com magia para se tornarem Bruxos...");
				next;
				mes("[Catherine]\n"
					"Para se tornar um Bruxo voc� deve cumprir 3 testes.\n"
					"1� teste, coletar itens m�gicos.\n"
					"2� teste, teste escrito.\n"
					"O �ltimo � um teste pr�tico de magia.");
				next;
				mes("[Catherine]\n"
					"N�s dispensamos aqueles que s�o N�vel de classe 50, em um dos tr�s testes.");
				next;
				if (JobLevel < 40) {
					mes("[Catherine]\n"
						"Mas voc� ainda tem o que aprender como mago.");
					next;
					mes("[Catherine]\n"
						"N�o precisa se apressar, v� refletir e conhecer mais sobre o Mundo da Magia.\n"
						"Quando voc� estiver qualificad"+(Sex == SEX_MALE ? "o":"a")+".\n"
						"Com pelo menos \"Level 40 de Classe\" retorne.");
					close;
				} else {
					mes("[Catherine]\n"
						"Bom, eu vou dar mais informa��es quando voc� se inscrever no teste.\n"
						"Ent�o... voc� quer se inscrever agora?");
					next;
					if (select("Sim, claro", "Deixe-me pensar mais") == 2) {
						mes("[Catherine]\n"
							"Oh, ok ent�o, n�o tenha pressa.\n"
							"J� que eu sempre estou aqui, aceitando inscri��es...");
						close;
					}
					mes("[Catherine]\n"
						"Muito bem ent�o, eu aceito sua inscri��o.\n"
						"Seu nome �...\n"
						+ strcharinfo(CHAR_NAME)+", certo?\n"
						"N�o estou certa, pronunciei corretamente?");
					next;
					mes("[Catherine]\n"
						"Se o Mago completar esses testes.\n"
						"� o bastante para nos provar o esfor�o que vai fazer para se tornar um Bruxo.");
					next;
					if (JobLevel != 50) {
						mes("[Catherine]\n"
							"Ent�o, desde que eu tenha tudo que eu preciso.\n"
							"Vou lhe dar mais informa��es sobre o primeiro teste.\n"
							"Voc� pode memorizar ou escrever se quiser, n�o importa.\n"
							"Mas voc� deve se lembrar, com certeza.");
						next;
						mes("[Catherine]\n"
							"O primeiro teste � coletar itens m�gicos.\n"
							"A parte mais importante � que voc� deve consegui-los sozinho.");
						next;
						mes("[Catherine]\n"
							"Os itens que voc� deve coletar s�o...");
						next;
						mes("[Catherine]");
						switch (rand(2)) {
							case 1:
							mes("10 ^3355FFGema Vermelha^000000.");
							mes("10 ^3355FFGema Azul^000000.");
							mes("10 ^3355FFGema Amarela^000000.");
							wizardq = 1;
							setquest(9013);
							default:
							wizardq = 2;
							setquest(9014);
							mes("5 ^3355FFCristal Azul^000000.");
							mes("5 ^3355FFVida Verdejante^000000.");
							mes("5 ^3355FFSangue Escarlate^000000.");
							mes("5 ^3355FFFrescor do Vento^000000.");
						}
						next;
						mes("[Catherine]\n"
							"Acha dif�cil?\n"
							"N�o, qualquer um que queira se tornar um Bruxo deve ser capaz de coletar esses itens.");
						next;
						mes("[Catherine]\n"
							"Boa sorte.\n"
							"Vou esperar.");
						close;
					} else {
						mes("[Catherine]\n"
							"Hmm, voc� est� no n�vel de classe 50!?\n"
							"Voc� deve ter se esfor�ado muito.\n"
							"Voc� vai se tornar um Bruxo muito poderoso, eu posso sentir isso em voc�.");
						next;
						mes("[Catherine]\n"
							"Ok. Voc� j� passou o 1� teste ent�o.\n"
							"N�o fique muito relaxado, ainda restam 2 testes.");
						next;
						mes("[Catherine]\n"
							"V� falar com o homem no canto dessa sala e ele lhe dar� os testes restantes.\n"
							"Tenha cuidado.\n"
							"N�s perdemos muitos Magos devido a dificuldade dos exames.");
						wizardq = 3;
						setquest(9015);
						close;
					}
				}
			}
		} else if (wizardq == 1) {
			mes("[Catherine]\n"
				"Deixe-me ver, voc� pegou todos os itens?\n"
				"Vamos checar...");
			next;
			if (countitem(Red_Gemstone) < 10 && countitem(Blue_Gemstone) < 10 && countitem(Yellow_Gemstone) < 10) {
				mes("[Catherine]\n"
					"Ei, eu acho que voc� n�o tem tudo ainda!");
				next;
				mes("[Catherine]\n"
					"Deve ter sido dif�cil vir at� aqui em cima, mas volte e pegue todos os itens.\n"
					"A vida � curta o suficiente, ent�o para de perder tempo e consiga os itens que eu te pedi.");
				next;
				mes("[Catherine]\n"
					"10 ^3355FFGema Vermelha^000000,\n"
					"10 ^3355FFGema Azul^000000,\n"
					"10 ^3355FFGema Amarela^000000,\n"
					"N�o esque�a dessa vez, e traga todos os itens, ok?...");
				close;
			} else {
				delitem(Red_Gemstone,10);
				delitem(Blue_Gemstone,10);
				delitem(Yellow_Gemstone,10);
				wizardq = 3;
				changequest(9013,9015);
				mes("[Catherine]\n"
					"Perfeito!\n"
					"Voc� pegou todos os itens!\n"
					"Esses itens ser�o bem �teis para nossa guilda.");
				next;
				mes("[Catherine]\n"
					"Muito bem!\n"
					"Voc� passou o primeiro teste.\n"
					"Mas ainda restam 2 testes, ent�o n�o fique t�o relaxado.");
				next;
				mes("[Catherine]\n"
					"V� falar com o homem no canto para saber sobre os outros testes.\n"
					"Eles podem ser um pouco dif�ceis, ent�o tome cuidado, eu n�o gostaria que voc� terminasse como a maioria dos Magos que v�m para esses exames...\n"
					"Pobres almas na verdade, que descansem em paz. Hehehe.");
				close;
			}
		} else if (wizardq == 2) {
			mes("[Catherine]\n"
				"Voc� pegou todos os itens?\n"
				"Vamos ver se voc� tem os itens corretos...");
			next;
			if (countitem(Crystal_Blue) < 5 && countitem(Yellow_Live) < 5 && countitem(Boody_Red) < 5 && countitem(Wind_Of_Verdure) < 5) {
				mes("[Catherine]\n"
					"Ei, eu acho que voc� n�o tem tudo ainda!");
				next;
				mes("[Catherine]\n"
					"Deve ter sido dif�cil vir at� aqui em cima, mas volte e pegue todos os itens.\n"
					"A vida � curta o suficiente, ent�o para de perder tempo e consiga os itens que eu te pedi.");
				next;
				mes("[Catherine]\n"
					"5 ^3355FFCristal Azul^000000,\n"
					"5 ^3355FFVida Verdejante^000000,\n"
					"5 ^3355FFSangue Escarlate^000000,\n"
					"5 ^3355FFFrescor do Vento^000000,\n"
					"N�o esque�a dessa vez e pegue os certos, certo?...");
				close;
			} else {
				delitem(Crystal_Blue,5);
				delitem(Yellow_Live,5);
				delitem(Boody_Red,5);
				delitem(Wind_Of_Verdure,5);
				wizardq = 3;
				changequest(9014,9015);
				mes("[Catherine]\n"
					"Perfeito!\n"
					"Voc� pegou todos os itens!\n"
					"Esses itens ser�o bem �teis para nossa guilda.");
				next;
				mes("[Catherine]\n"
					"Perfeito!\n"
					"Voc� pegou todos os itens!\n"
					"Esses itens ser�o bem �teis para nossa guilda.");
				next;
				mes("[Catherine]\n"
					"Muito bem!\n"
					"Voc� passou o primeiro teste.\n"
					"Mas ainda restam 2 testes, ent�o n�o fique t�o relaxado.");
				next;
				mes("[Catherine]\n"
					"V� falar com o homem no canto para saber sobre os outros testes.\n"
					"Eles podem ser um pouco dif�ceis, ent�o tome cuidado\n"
					"Eu n�o gostaria que voc� terminasse como a maioria dos Magos que v�m para esses exames...\n"
					"Pobres almas na verdade, que descansem em paz. Hehehe.");
				close;
			}
		} else if (wizardq == 3) {
			mes("[Catherine]\n"
				"O que foi?\n"
				"Voc� ainda n�o foi falar com o homem ali no canto?\n"
				"Voc� n�o vai se tornar um Bruxo s� trazendo os itens que eu pedi...");
			next;
			mes("[Catherine]\n"
				"Voc� apenas pode se tornar um Bruxo depois que passar nos outros 2 testes.\n"
				"Estou esperando completar-los, ent�o v�.");
			close;
		} else if (wizardq == 4) {
			mes("[Catherine]\n"
				"Eu ouvi tudo.\n"
				"Muito bem em responder todas aquelas perguntas.");
			next;
			mes("[Catherine]\n"
				"Voc� ainda tem mais um teste, certo?\n"
				"Apenas mais um pouco e voc� ser� qualificad"+(Sex == SEX_MALE ? "o":"a")+" para se tornar Bruxo.");
			close;
		} else if (wizardq == 5 || wizardq == 6) {
			mes("[Catherine]\n"
				"O que houve?\n"
				"*suspiro*....");
			next;
			mes("[Catherine]");
			if (Sex == SEX_MALE) {
				mes("Com certeza voc� � um Mago, mas como um cara pode ser t�o fraco?!\n"
					"Bom, ao menos voc� ainda est� vivo.\n"
					"V� e consiga dessa vez.");
			} else {
				mes("N�o tente parecer fraca s� porque � uma garota.\n"
					"Olhe para mim!\n"
					"Eu consegui, e voc� tamb�m pode.");
				next;
				mes("[Catherine]\n"
					"Eu concordo que � dif�cil, mas n�o ao ponto de desistir.\n"
					"Voc� deve encontrar a for�a e a paci�ncia para passar naquele teste!");
			}
			next;
			mes("[Catherine]\n"
				"Ent�o, se esforce...");
			close;
		} else if (wizardq == 7) {
			if (SkillPoint) {
				mes("[Catherine]\n"
					"Voc� acabou com todos os testes?\n"
					"Oh, me parece que voc� t�m algums pontos de habilidades sobrando.\n"
					"Aprenda algumas outras habilidades com seus pontos restantes, e ent�o venha falar comigo de novo.");
				close;
			} else {
				mes("[Catherine]\n"
					"Parab�ns, Parab�ns, Parab�ns!!");
				next;
				mes("[Catherine]\n"
					"Bom, n�o precisamos esperar, parabenizo voc�.\n"
					"Eu considero voc� "+(Sex == SEX_MALE ? "um Bruxo":"uma Bruxa")+".");
				next;
				jobchange(Job_Wizard);
				completequest(9018);
				callfunc("ClearJobQuest2nd",9);
				getitem(Blue_Potion,6);
				next;
				mes("[Catherine]\n"
					"Viva uma vida maravilhosa como Bruxo, se torne o mais forte de todos!");
				close;
			}
		}
	} else {
		if (BaseJob == Job_Wizard) {
			mes("[Catherine]\n"
				"Desde que voc� se tornou um Bruxo, voc� n�o tem mais neg�cios comigo, tem...?\n"
				"Agora, com licen�a.");
			close;
		} else {
			mes("[Bruxa]\n"
				"H�? O que traz voc� a um lugar como esse...?\n"
				"Se n�o tiver nenhum assunto espec�fico, saia imediatamente.");
			close;
		}
	}
}

// ------------------------------------------------------------------
gef_tower,102,24,2	script	Bruxo Sombrio#wizardq	4_M_JOB_WIZARD,{
	if (BaseJob == Job_Mage) {
		if (!wizardq) {
			mes("[Bruxo]\n"
				"*TOSSE*\n"
				"*TOSSE*\n"
				"*ESPIRRO*");
			next;
			mes("[Bruxo]\n"
				"Eu n�o sei quem � voc� ou o que voc� faz.\n"
				"Mas eu n�o tenho nada a tratar com voc�.");
			next;
			mes("[Bruxo]\n"
				"V� embora! Saia!");
			close;
		} else if (wizardq == 1 || wizardq == 2) {
			mes("[Bruxo]\n"
				"Voc� quer se tornar um"+(Sex == SEX_MALE ? "Bruxo":"a Bruxa")+"?!");
			next;
			mes("[Bruxo]\n"
				"*ESPIRRO*\n"
				"Se voc� vivesse como est�, tudo o qu� tinha que fazer era ca�ar um pouco e viver a vida f�cil...");
			next;
			mes("[Bruxo]\n"
				"*TOSSE*\n"
				"Vamos ver de que maneira voc� vive como um Bruxo.");
			close;
		} else if (wizardq == 3) {
			if (!wizardq2) {
				mes("[Bruxo]\n"
					"*TOSSE*\n"
					"Voc� deve ter passado o primeiro teste.\n"
					"Ok, eu sou o Bruxo respons�vel pelos seus testes de agora em diante.\n"
					"Meu nome � \"Raulel Asparagus\".");
				next;
				mes("[Raulel]\n"
					"*ESPIRRO*\n"
					"Ainda n�o � t�o tarde, n�o seria melhor voltar para cidade e aproveitar a vida pacata?");
				next;
				mes("[Raulel]\n"
					"Voc� n�o sabe o qu�o perigoso � lidar com Magia.");
				next;
				if (select("Desistir do teste","Continuar teste") == 1) {
					mes("[Raulel]\n"
						"*ESPIRRO*\n"
						"Boa escolha...\n"
						"*TOSSE*\n"
						"Melhor nem sonhar em como ser um Bruxo.\n"
						"Maa...Maa...*ESPIRRO*\n"
						"Magia n�o foi feita para Humanos usarem!");
					next;
					mes("[Raulel]\n"
						"Deixe o topo dessa torre calmamente e nem olhe para tr�s.\n"
						"Apenas viva pacificamente com os poderes que voc� tem agora.");
					close;
				} else {
					mes("[Raulel]\n"
						"*espirro*\n"
						"Agora tem um louco aqui!\n"
						"Bem ent�o, deixe-me ver o qu�o bom voc� �.\n"
						"*TOSSE*\n"
						"Eu quero ver isso com meus pr�prios olhos!");
					next;
					mes("[Raulel]\n"
						"*ESPIRRO*\n"
						"Ent�o vamos come�ar o teste!\n"
						"Se voc� n�o responder todas elas corretamente.");
					next;
					mes("[Raulel]\n"
						"Eu vou fazer 10 perguntas ent�o me responda corretamente.\n"
						"Se responder alguma errada, voc� n�o passa e eu n�o vou te dizer qual �!");
					if (questprogress(9015)) { changequest(9015,9016); }
				}
			} else {
				mes("[Raulel]\n"
					"Voc� est� t�o desesperad"+(Sex == SEX_MALE ? "o":"a")+" assim?\n"
					"*ESPIRRO*");
				next;
				mes("[Raulel]\n"
					"J� que voc� n�o quer viver uma vida pac�fica e est�vel, vou te dar outra chance...");
				next;
				mes("[Raulel]\n"
					"Se voc� errar apenas uma quest�o, ent�o desista.\n"
					"Voc� n�o ter� nenhum talento sendo Bruxo!");
			}
			next;
			mes("[Raulel]\n"
				"*TOSSE* ent�o vamos �s perguntas!");
			next;
			switch (rand(3)) {
				case 1:
				mes("[Raulel]\n"
					"1. Qual destes n�o � necess�rio para aprender barreira de fogo?");
				next;
				if (select("Lan�as de Fogo", "Bola de Fogo", "Chama Reveladora", "Ataque Espiritual") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"2. Sem importar o atributo anterior.\n"
					"Qual o atributo final do monstro quando voc� conjura Rajada Congelante nele?");
				next;
				if (select("�gua", "Terra", "Fogo", "Vento") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"3. Quando voc� domina completamente Ataque Espiritual.\n"
					"Qual � a taxa de aumento no M-ATK usando essa magia?");
				next;
				if (select("1,6 vezes", "1,7 vezes", "2 vezes", "20 vezes") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"4. Que item voc� precisa para conjurar Petrificar?");
				next;
				if (select("Sangue Escarlate", "Gema Azul", "Gema Amarela", "Gema Vermelha") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"5. Qual destes n�o � requerido para dominar Escudo M�gico?");
				next;
				if (select("Ataque Espiritual", "Espiritos Anci�es", "Aumentar Recupera��o de SP", "Escudo M�gico") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"6. Sem o b�nus de INT.\n"
					"Qual a quantidade de SP recperada a cada 10 segundos quando voc� aprendeu Aumentar Recupera��o de SP Lv 7?");
				next;
				if (select("14", "21", "28", "35") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"7. Usando Prote��o Arcana, quando voc� tem 50% do seu SP restante.\n"
					"Quanto de SP � usado ao receber dano, e qual � a porcentagem de dano reduzido?");
				next;
				if (select("Dano 18%, SP 1.5%", "Dano 18%, SP 2%", "Dano 24%, SP 1.5%", "Dano 24%, SP 2%") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"8. Qual � o SP consumido e quantas vezes voc� pode evitar ataques usando Escudo M�gico Lv 6?");
				next;
				if (select("SP 40, 6 vezes", "SP 35, 6 vezes", "SP 40, 7 vezes", "SP 35, 7 vezes") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"9. Qual o SP necess�rio para usar Tempestade de Raios Lv 10?");
				next;
				if (select("84", "74", "64", "54") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"10. Qual habilidade � mais �til para ca�ar na Caverna Byalan?");
				next;
				if (select("Rel�mpago", "Lan�as de Fogo", "Lan�as de Gelo", "Chama Reveladora") == 1) {
					.@wizq += 1;
				}
				break;
				case 2:
				mes("[Raulel]\n"
					"1. De que monstro voc� pode obter Vembrassa com Slot?");
				next;
				if (select("Besouro Ladr�o", "PecoPeco", "Pupa", "Kobold (Marreta)") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"2. Qual destes � o monstro mais f�cil para um Mago de baixo n�vel matar?");
				next;
				if (select("Flora","Giearth","Golem","N�voa") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"3. Qual destes monstros n�o s�o imunes a Petrificar?");
				next;
				if (select("Salgueiro Anci�o", "Druida Maligno", "Magn�lia", "Cavalo-Marinho") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"4. Quando atacar um monstro de atributo �gua Lv 3 com uma arma de atributo vento.\n"
					"Qual ser� a porcentagem do dano?");
				next;
				if (select("125%", "150%", "175%", "200%") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"5. Se um Filhote de Lobo do Deserto e um Familiar lutassem, qual dos dois ganharia?");
				next;
				if (select("Filhote de Lobo do Deserto", "Familiar", "Nenhum dos dois", "Eu n�o sei") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"6. Qual destes n�o podem ser domesticados?");
				next;
				if (select("Poporing", "Sapo de Rodda", "Fumacento", "Esporo Venenoso") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"7. Escolha o monstro que � fraco contra o atributo Fogo.");
				next;
				if (select("Golbin da Faca", "Goblin da Ma�a", "Morningstar Goblin", "Goblin da Marreta") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"8. Qual destes tem maior defesa?");
				next;
				if (select("Besouro-Chifre", "Chonchon", "Andre", "Caramelo") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"9. Escolha o monstro que � de uma esp�cie diferente.");
				next;
				if (select("Poring", "Mastering", "Ghostring", "Esporo") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"10. Qual destes n�o � um Morto-Vivo?");
				next;
				if (select("Drake", "Megalodon", "Deviace", "Khalitzburg") == 3) {
					.@wizq += 1;
				}
				break;
				default:
				mes("[Raulel]\n"
					"1. Qual destes � mais importante para um Mago?");
				next;
				if (select("INT", "AGI", "DES", "VIT") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"2. Qual destes atributos n�o tem um ataque tipo \"Lan�as\"?");
				next;
				if (select("�gua", "Terra", "Fogo", "Vento") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"3. Escolha qual n�o � relacionado a um Mago.");
				next;
				if (select("For�a f�sica fraca", "Ataque � dist�ncia", "Bom em vender coisas", "Defesa m�gica alta") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"4. Qual � a cidade natal dos Magos?");
				next;
				if (select("Prontera", "Morroc", "Alberta", "Geffen") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"5. Qual destas cartas n�o tem nada a ver com INT?");
				next;
				if (select("Ovo de Andre", "Andre", "Filhote Lobo do Deserto", "Salgueiro Anci�o") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"6. Em que um Mago � bom comparado as outras classes?");
				next;
				if (select("Habilidade Vocal", "Habilidade em Atua��o", "Habilidades de Dan�a", "Habilidades M�gicas") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"7. Qual � o b�nus de INT do n�vel de classe 40 para Magos?");
				next;
				if (select("8", "7", "6", "5") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"8. Qual item um Mago n�o pode equipar?");
				next;
				if (select("Faca", "Quepe", "Sand�lias", "Olho de Dullahan") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"9. Qual destes � o catalisador para fazer a Solu��o M�gica n�mero 3?");
				next;
				if (select("Gema Azul", "Gema Vermelha", "Gema Amarela", "Sangue Escarlate") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"10. Qual destas cartas � irrelavante � Magica?");
				next;
				if (select("Carta Marduk", "Carta Magn�lia", "Carta Salgueiro", "Carta Maya") == 2) {
					.@wizq += 1;
				}
				break;
			}
			mes("[Raulel]\n"
				"Muito bem respondeu todas as perguntas.");
			if (.@wizq == 8 || .@wizq == 9) {
				mes("Voc� n�o foi muito bem, mas dexarei que voc� passe no segundo teste.");
				next;
				mes("[Raulel]\n"
					"*ESPIRRO*\n"
					"N�o relaxe ainda, ainda h� o problema do Terceiro teste final.\n"
					"Eu aconselho voc� a descansar um pouco enquanto o Teste final � preparado.\n"
					"Voc� vai precisar.");
				wizardq = 4;
				if (wizardq2) { wizardq2 = 0; }
				changequest(9016,9017);
				close;
			} else if (.@wizq == 10) {
				wizardq = 4;
				if (wizardq2) { wizardq2 = 0; }
				changequest(9016,9017);
				mes("Muito bem, voc� passou o segundo teste.\n"
					"N�o foi feito em uma tentativa como a minha foi, mas eu vou deixar voc� passar...");
				next;
				mes("[Raulel]\n"
					"*ESPIRRO*\n"
					"N�o relaxe ainda, ainda h� o problema do Terceiro teste final.\n"
					"Eu aconselho voc� a descansar um pouco enquanto o Teste final � preparado.\n"
					"Voc� vai precisar.");
				close;
			} else {
				wizardq2 = 1;
				mes("Voc� � uma vergonha.\n"
					"Estude mais!");
				next;
				mes("[Raulel]\n"
					"*TOSSE*\n"
					"Realmente achou que poderia se tornar Bruxo em um n�vel mediocre de conhecimento como o seu?\n"
					"D� o fora!");
				close;
			}
		} else if (wizardq == 4) {
			mes("[Raulel]\n"
				"Ok, espero que tenha descansado o bastente.\n"
				"Ent�o vamos come�ar o �ltimo teste.");
			next;
			mes("[Raulel]\n"
				"Devo explicar um pouco sobre o �ltimo teste?\n"
				"� dif�cil, eu n�o vou mentir...");
			next;
			if (select("Conte-me sobre o teste", "Come�ar agora") == 1) {
				mes("[Raulel]\n"
					"Muito bem, irei explicar.\n"
					"N�o importa quanto dif�cil esse teste possa parecer.\n"
					"Se fizer como eu digo, voc� vai poder acabar r�pido e f�cil.");
				next;
				mes("[Raulel]\n"
					"O teste final tem um total de 3 partes.\n"
					"A ordem � Sala da �gua, Sala da Terra, Sala do Fogo.\n"
					"Em cada sala, existem monstros do mesmo atributo.");
				next;
				mes("[Raulel]\n"
					"Voc� vai descobrir que os monstros v�o estar l� quando voc� entrar.\n"
					"Se voc� usar os ataques com os atributos certos, n�o ser� muito dif�cil.");
				next;
				mes("[Raulel]\n"
					"Uma que voc� tenha derrotado todos os monstros dentro do tempo dado na sala...\n"
					"Voc� ir� para a pr�xima sala.");
				next;
				mes("[Raulel]\n"
					"Depois que essas 3 salas estiverem limpas, o teste est� acabado.\n"
					"Voc� se tornar� um Bruxo que � controlado pelos poderes da Grande Magia!\n"
					"Depois disso...\n"
					"N�o h� retorno para a vida calma.");
				next;
				mes("[Raulel]\n"
					"Voc� parece assustad"+(Sex == SEX_MALE ? "o":"a")+".\n"
					"Sabe, ainda n�o � t�o tarde para voltar a sua vida calma.\n"
					"Se voc� quiser, posso te mandar para a cidade agora mesmo...\n"
					"O que acha?");
				next;
				if (select ("Vou desistir do teste", "Continuar") == 1) {
					mes("[Raulel]\n"
						"Boa id�ia.\n"
						"Essa � a melhor escolha para voc�.\n"
						"Volte e viva uma vida tranquila.\n"
						"Magia superior � uma for�a que n�o pode ser manipulada por pessoas fracas.");
					close2;
					warp("geffen",120,110);
					end;
				}
			}
			wizardq = 5;
			savepoint("geffen",120,107);
			mes("[Raulel]\n"
				"Ent�o, como voc� deseja.\n"
				"Eu vou mandar voc� pra l� agora.");
			close2;
			warp("job_wiz",57,154);
			end;
		} else if (wizardq == 5) {
			mes("[Raulel]\n"
				"Ent�o quer tentar de novo �?");
			next;
			mes("[Raulel]\n"
				"Ok, aqui vai uma proposta.\n"
				"J� que provavelmente n�o vai passar.\n"
				"Posso ver claramente o desejo da Grande Magia queimando em seus olhos...\n"
				"Me traga um ^3355FFPergaminho Desgastado^000000.");
			next;
			mes("[Raulel]\n"
				"Ent�o vou substituir esse teste por outro de conhecimento.");
			if (countitem(Worn_Out_Scroll)) {
				mes("O que me diz heim?");
				next;
				if (select ("Claro est� aqui o pergaminho", "N�o, quero continuar") == 1) {
					delitem(Worn_Out_Scroll,1);
					mes("[Raulel]\n"
						"Ent�o voc� optou por essa ecolha, pois bem...\n"
						"Eu acho que posso continuar minha pesquisa com isso...");
					next;
					mes("[Raulel]\n"
						"Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para responder meu question�rio volte.\n"
						"Ser�o apenas perguntas pr�ticas e te�ricas que qualquer bruxo deve saber.");
					wizardq = 6;
					close;
				}
			} else {
				next;
				if (select ("Continuarei com o teste", "Irei conseguir o item") == 2) {
					mes("[Raulel]\n"
						"Est� certo ent�o.\n"
						"Aguardo seu retorno.");
					close;
				}
			}
			mes("[Raulel]\n"
				"Bem, Eu vou te mandar para o local de teste agora.");
			close2;
			warp("job_wiz",57,154);
			end;
		} else if (wizardq == 6) {
			mes("[Raulel]\n"
				"J� que n�o � capaz de concluir o o teste pr�tico!\n"
				"E me trouxe o pergaminho que precisava voc� pode escolher qual teste fazer.");
			next;
			if (select ("Quero fazer o teste pr�tico", "Quero fazer o teste te�rico") == 1) {
				mes("[Raulel]\n"
					"Boa sorte ent�o.\n"
					"Vou te mandar para o local de teste agora.");
				close2;
				warp("job_wiz",57,154);
				end;
			}
			mes("[Raulel]\n"
				"Bem, � melhor responder esses problemas se voc� planeja se tornar um Bruxo.\n"
				"Hahahahahahaha");
			next;
			mes("[Raulel]\n"
				"1. Escolha o Monstros com o atributo diferente dos outros.");
			next;
			if (select("Louva-a-Deus", "Cornutus", "Giearth", "Caramelo") == 2) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"2. Escolha o monstro que n�o � do tipo de pilhagem.");
			next;
			if (select("Yoyo", "Magn�lia", "Metaller", "Zerom") == 4) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"3. Qual desses monstros n�o reconhece Conjura��es?");
			next;
			if (select("Marina", "Vitata", "Escorpi�o", "Giearth") == 1) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"4. Escolha a magia que � a mais eficiente contra Esfera Marinha.");
			next;
			if (select("Lan�as de Gelo", "Lan�as de Fogo", "Rel�mpago", "Petrificar") == 3) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"5. Escolha o monstro que pode se mover.");
			next;
			if (select("Hidra", "Mandr�gora", "Guardi�o da Floresta", "Frilldora") == 4) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"Bem, s� s�o essas perguntas mesmo.");
			if (.@wizq2 != 5) {
				mes("E voc� falhou denovo!\n"
					"V� estudar mais!");
				next;
				mes("[Raulel]\n"
					"Voc� tem uma defici�ncia em algo...\n"
					"*ESPIRRO*...\n"
					"Algo como Intelig�ncia.\n"
					"� por isso que voc� continua falhando.");
				close;
			} else {
				mes("*TOSSE*\n"
					"Se voc� pode responder todas essas perguntas corretamente.\n"
					"Por que voc� n�o se sai bem em batalhas?");
				next;
				mes("[Raulel]\n"
					"Ent�o, com um pouco mais de esfor�o pode ser que consiga ser "+(Sex == SEX_MALE ? "um grande Bruxo":"uma grande Bruxa")+".\n"
					"Vou dizer a Catherine que voc� passou no teste final.\n"
					"Ent�o agora v�, j� perdir muito tempo com seus consecutivos fracassos.");
				wizardq = 7;
				changequest(9017,9018);
				close;
			}
		} else if (wizardq == 7) {
			mes("[Raulel]\n"
				"Voc� n�o tem nada a tratar comigo que eu saiba.");
			next;
			mes("[Raulel]\n"
				"V�! V� e se torne o Bruxo se � o que voc� realmente quer.");
			close;
		}
	} else {
		if (BaseJob == Job_Wizard) {
			mes("[Raulel]\n"
				"*TOSSE*\n"
				"O que voc� quer?\n"
				"Se voc� � uma pessoa que usa magia, ent�o voc� precisa ter certeza que est� bem informado sobre isso.");
			next;
			mes("[Raulel]\n"
				"N�o viva desonestamente, ou seja mal-educado, ou ent�o um dia voc� vai ser pego numa magia que voc� n�o pode controlar, e BOOM, voc� morre!\n"
				"Se voc� n�o quer que isso aconteca, ent�o lembre como usar as magias corretamente!");
			next;
			mes("[Raulel]\n"
				"Voc� pode viver aleijado se ficar muito obcecado com a Magia.");
			close;
		} else {
			mes("[Bruxo]\n"
				"*ESPIRRO*\n"
				"*TOSSE*");
			next;
			mes("[Bruxo]\n"
				"Oooowww...\n"
				"Meu corpo todo est� dolorido.\n"
				"Eu sinto como se estivesse preso num tubo de gelo!");
			next;
			mes("[Bruxo]\n"
				"O que voc� quer?!!");
			close;
		}
	}
}

// ------------------------------------------------------------------
job_wiz,50,165,4	script	Assistente da Arena#wizardq	8_F_GIRL,{
	mes("[Assistente da Arena]\n"
		"Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � Arena de teste.\n"
		"Se voc� quiser fazer o teste final, por favor entre na sala de espera.");
	next;
	mes("[Assistente da Arena]\n"
		"Se alguem estiver fazendo o teste, por favor espere.\n"
		"Todas as informa��es do teste ser�o publicadas, e vai come�ar assim que o jogador anterior sair.");
	next;
	mes("[Assistente da Arena]\n"
		"Cada teste leva aproximadamente 5 a 10 minutos.\n"
		"Se quiser sair da arena, por favor deslogue.");
	close;

	OnInit:
	waitingroom("Sala de Espera",20,strnpcinfo(NPC_NAME)+"::OnStartArena",1);
	enablewaitingroomevent;
	end;

	OnStartArena:
	killmonsterall(strnpcinfo(NPC_MAP));
	warpwaitingpc(strnpcinfo(NPC_MAP),114,169);
	donpcevent("Room_of_Water#wizardq::OnEnable");
	disablewaitingroomevent;
	end;

	OnStart:
	enablewaitingroomevent;
	end;
}

// ------------------------------------------------------------------
job_wiz,1,1,1	script	Room_of_Water#wizardq	1_F_01,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	.MyMobs = 7;
	monster(strnpcinfo(NPC_MAP),109,174,"Fen",PHEN,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),118,174,"Molusco",SHELLFISH,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),109,165,"Vadon",VADON,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),118,165,"Cornutus",CORNUTUS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),101,157,"Marina",MARINA,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),126,157,"Marin",MARINE_SPHERE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),98,170,"Magnolia",MAGNOLIA,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonsterall(strnpcinfo(NPC_MAP));
	end;

	OnMyMobDead:
	--.MyMobs;
	if (.MyMobs < 1) {
		percentheal(100,100);
		mapannounce(strnpcinfo(NPC_MAP),strcharinfo(CHAR_NAME)+" eliminou todos os Monstros.",bc_map);
		warp(strnpcinfo(NPC_MAP),116,97);
		donpcevent("Room_of_Earth#wizardq::OnEnable");
		stopnpctimer;
	}
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"Sala da �gua; O teste agora vai continuar.",bc_map);
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo limite � de 3 minutos. N�s vamos iniciar o teste agora.",bc_map);
	end;

	OnTimer3000:
	mapannounce(strnpcinfo(NPC_MAP),"Por favor elimine todos os montros dentro do tempo estabelecido.",bc_map);
	end;

	OnTimer33000:
	mapannounce(strnpcinfo(NPC_MAP),"2 minutos e 30 segundos restantes.",bc_map);
	end;

	OnTimer63000:
	mapannounce(strnpcinfo(NPC_MAP),"2 minutos restantes.",bc_map);
	end;

	OnTimer93000:
	mapannounce(strnpcinfo(NPC_MAP),"1 minuto e 30 segundos restantes.",bc_map);
	end;

	OnTimer123000:
	mapannounce(strnpcinfo(NPC_MAP),"1 minuto restante.",bc_map);
	end;

	OnTimer153000:
	mapannounce(strnpcinfo(NPC_MAP),"30 segundos restantes.",bc_map);
	end;

	OnTimer173000:
	mapannounce(strnpcinfo(NPC_MAP),"10 segundos restantes.",bc_map);
	end;

	OnTimer183000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo acabou.",bc_map);
	areawarp(strnpcinfo(NPC_MAP),98,154, 129,185,"gef_tower",110,30);
	end;

	OnTimer184000:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer185000:
	mapannounce(strnpcinfo(NPC_MAP),"Pr�ximo candidato, entre por favor.",bc_map);
	end;

	OnTimer186000:
	donpcevent("Assistente da Arena#wizardq::OnStart");
	end;
}

// ------------------------------------------------------------------
job_wiz,1,3,1	script	Room_of_Earth#wizardq	1_F_01,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	.MyMobs = 7;
	monster(strnpcinfo(NPC_MAP),111,102,"Yoyo",YOYO,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),120,102,"Deniro",DENIRO,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),111,102,"Caramelo",CARAMEL,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),120,93,"Giearth",GIEARTH,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),107,98,"P�-Grande",BIGFOOT,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),124,98,"Guerreiro Orc",ORK_WARRIOR,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),104,86,"Vitata",VITATA,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonsterall(strnpcinfo(NPC_MAP));
	end;

	OnMyMobDead:
	--.MyMobs;
	if (.MyMobs < 1) {
		mapannounce(strnpcinfo(NPC_MAP),strcharinfo(CHAR_NAME)+" eliminou todos os monstros.",bc_map);
		percentheal(100,100);
		warp(strnpcinfo(NPC_MAP),46,99);
		donpcevent("Room_of_Fire#wizardq::OnEnable");
		stopnpctimer;
	}
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"Sala da Terra; O teste agora vai continuar.",bc_map);
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo limite � de 3 minutos.",bc_map);
	end;

	OnTimer3000:
	mapannounce(strnpcinfo(NPC_MAP),"Elimie todos os monstros dentro do tempo dado.",bc_map);
	end;

	OnTimer33000:
	mapannounce(strnpcinfo(NPC_MAP),"2 minutos e 30 segundos restantes.",bc_map);
	end;

	OnTimer63000:
	mapannounce(strnpcinfo(NPC_MAP),"2 minutos restantes.",bc_map);
	end;

	OnTimer93000:
	mapannounce(strnpcinfo(NPC_MAP),"1 minuto e 30 segundos restantes.",bc_map);
	end;

	OnTimer123000:
	mapannounce(strnpcinfo(NPC_MAP),"1 minuto restante.",bc_map);
	end;

	OnTimer153000:
	mapannounce(strnpcinfo(NPC_MAP),"30 segundos restantes.",bc_map);
	end;

	OnTimer173000:
	mapannounce(strnpcinfo(NPC_MAP),"10 segundos restantes.",bc_map);
	end;

	OnTimer183000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo acabou.",bc_map);
	areawarp(strnpcinfo(NPC_MAP),100,82, 131,113,"gef_tower",110,30);
	end;

	OnTimer184000:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer185000:
	mapannounce(strnpcinfo(NPC_MAP),"Pr�ximo candidato, entre por favor.",bc_map);
	end;

	OnTimer186000:
	donpcevent("Assistente da Arena#wizardq::OnStart");
	end;
}

// ------------------------------------------------------------------
job_wiz,1,5,1	script	Room_of_Fire#wizardq	1_F_01,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	.MyMobs = 6;
	monster(strnpcinfo(NPC_MAP),33,110,"Goblin",GOBLIN_2,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),40,103,"Escorpi�o",SCORPION,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),51,103,"Frilldora",FRILLDORA,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),40,92,"PecoPeco",PECOPECO,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),51,92,"Salgueiro Anci�o",ELDER_WILOW,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),37,89,"Metaller",METALLER,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonsterall(strnpcinfo(NPC_MAP));
	end;

	OnMyMobDead:
	--.MyMobs;
	if (.MyMobs < 1) {
		wizardq = 7;
		changequest(9017,9018);
		mapannounce(strnpcinfo(NPC_MAP),"Parab�ns, "+strcharinfo(CHAR_NAME)+". Voc� passou no teste.",bc_map);
		sleep(500);
		areawarp(strnpcinfo(NPC_MAP),30,82, 61,113,"gef_tower",110,30);
		donpcevent("Assistente da Arena#wizardq::OnStart");
		stopnpctimer;
	}
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"Sala de Fogo. O teste agora vai continuar.",bc_map);
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo limite � de 3 minutos. N�s vamos come�ar o teste agora.",bc_map);
	end;

	OnTimer3000:
	mapannounce(strnpcinfo(NPC_MAP),"Elimine todos os montros no tempo dado.",bc_map);
	end;

	OnTimer33000:
	mapannounce(strnpcinfo(NPC_MAP),"2 minutos e 30 segundos restantes.",bc_map);
	end;

	OnTimer63000:
	mapannounce(strnpcinfo(NPC_MAP),"2 minutos restantes.",bc_map);
	end;

	OnTimer93000:
	mapannounce(strnpcinfo(NPC_MAP),"1 minuto e 30 segundos restantes.",bc_map);
	end;

	OnTimer123000:
	mapannounce(strnpcinfo(NPC_MAP),"1 minuto restante.",bc_map);
	end;

	OnTimer153000:
	mapannounce(strnpcinfo(NPC_MAP),"30 segundos restantes.",bc_map);
	end;

	OnTimer173000:
	mapannounce(strnpcinfo(NPC_MAP),"10 segundos restantes.",bc_map);
	end;

	OnTimer183000:
	mapannounce(strnpcinfo(NPC_MAP),"O Tempo acabou.",bc_map);
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer184000:
	areawarp(strnpcinfo(NPC_MAP),30,82, 61,113,"gef_tower",110,30);
	end;

	OnTimer185000:
	mapannounce(strnpcinfo(NPC_MAP),"Pr�ximo candidato, entre por favor.",bc_map);
	end;

	OnTimer186000:
	donpcevent("Assistente da Arena#wizardq::OnStart");
	end;
}

// ------------------------------------------------------------------
gef_tower,107,36,4	script	Cachorro#wizardq	4_DOG01,{
	if (BaseJob == Job_Mage) {
		if (!wizardq) {
			cutin("job_wizard_maria01",2);
			mes("[Cachorro]\n"
				"Ah...\n"
				"Eu sei o que voc� quer dizer.\n"
				"Voc� quer se tornar um Bruxo, certo?");
			next;
			mes("[Cachorro]\n"
				"V� falar com Catherine.\n"
				"Ela vai te ajudar.");
			next;
			mes("[Cachorro]\n"
				"Al�m disso, se voc� quiser saber algo sobre o teste, eu posso explicar.");
			next;
			switch (select("?!", "Um Cachorro falante!...")) {
				case 1:
				mes("[Cachorro]\n"
					"...*late*...?\n"
					"O que �??\n"
					"Por que voc� est� olhando pra mim assim?!\n"
					"� a primeira vez que voc� v� um Cachorro falar?");
				next;
				mes("[Cachorro]\n"
					"*Late*\n"
					"N�o � normal voc� ver um cachorro falando eu suponho.\n"
					"...Sim eu acho que � uma vis�o rara...");
				next;
				mes("[Cachorro]\n"
					"Meu nome � \"Maria Splodofska\".\n"
					"Apenas me chame Maria.");
				next;
				cutin("job_wizard_maria03",2);
				mes("[Maria]\n"
					"*Late*\n"
					"Bem, eu me tornei um cachorro porque...\n"
					"Eu estava ajudando meu namorado num experimento para o teste final dele em Gradua��o em M�gica.\n"
					"Ele acidentalmente me transformou num cachorro.\n"
					"Teoricamente, em algums meses a qu�mica vai acabar e eu vou voltar ao normal.\n"
					"Quando exatamente, n�o tenho id�ia.");
				close2;
				cutin("",255);
				end;
				case 2:
				cutin("job_wizard_maria02",2);
				mes("[Cachorro]\n"
					"*Late* *Late* *Late*\n"
					"N�o diga o �bvio!\n"
					"Certo, eu sei que sou um cachorro!");
				next;
				cutin "job_wizard_maria01",2;
				mes("[Cachorro]\n"
					"Meu nome � \"Maria Splodofska\".\n"
					"O pessoal me chama Maria.\n"
					"Eu ajudo pessoas como voc� que desejam se tornar um Bruxo.");
				next;
				cutin("job_wizard_maria03",2);
				mes("[Cachorro]\n"
					"O motivo de eu ter me tornado um cachorro...\n"
					"Meu namorado estava fazendo experimentos para a Gradua��o em Magia dele.\n"
					"Acidentalmente ele me transformou em cachorro.\n"
					"Teoricamente, em alguns meses, a qu�mica vai acabar e eu vou voltar ao normal.\n"
					"Quando exatamente, n�o tenho id�ia.");
				close2;
				cutin("",255);
				end;
			}
		} else if (wizardq == 1) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Voc� se inscreveu, e agora est� procurando pelos itens certo?");
			next;
			mes("[Maria]\n"
				"Mas j� que esse � apenas o primeiro teste, n�o dependa dos outros.\n"
				"Fa�a sozinho.\n"
				"Essa � a melhor maneira.");
			next;
			mes("[Maria]\n"
				"Pelo o que eu escutei, voc� tem que coletar gemas...\n"
				"Eu n�o posso te ajudar diretamente, mas eu posso te dar umas dicas.");
			next;
			mes("[Maria]\n"
				"Primeiro, para pegar Gemas vermelhas, v� aos esgotos de Prontera.\n"
				"Voc� pode obt�-las dos Besouros-ladr�es e dos Ovos de Besouro-ladr�o encontrados l�s.");
			next;
			mes("[Maria]\n"
				"Gemas Amarelas s�o f�ceis de achar no deserto.\n"
				"Condores, Pickys, e algums monstros como Golem soltam elas.");
			next;
			mes("[Maria]\n"
				"Para conseguir Gemas azuis.\n"
				"Tente ir na Ilha Byalan.\n"
				"Cornutus, Vadon, e monstros como Marte podem soltar essas gemas.");
			next;
			mes("[Maria]\n"
				"Mas � claro que voc� pode pegar Gemas azuis na Loja M�gica aqui na cidade...\n"
				"Mas, encontrar elas por si s� seria muito mais gratificante e �til no teste.");
			next;
			mes("[Maria]\n"
				"De qualquer jeito, fa�a seu melhor.\n"
				"Essa � a base de ser um Bruxo.");
			close2;
			cutin("",255);
			end;
		} else if (wizardq == 2) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Voc� parece perdido...\n"
				"Voc� se inscreveu, e agora voc� est� procurando pelos itens certo?");
			next;
			mes("[Maria]\n"
				"Mas j� que esse � apenas o primeiro teste, n�o dependa dos outros.\n"
				"Fa�a sozinho.\n"
				"Essa � a melhor maneira.");
			next;
			mes("[Maria]\n"
				"Pelo o que eu escutei, voc� tem que coletar pedras elementais...\n"
				"Eu n�o posso te ajudar diretamente, mas eu posso te dar umas dicas.");
			next;
			mes("[Maria]\n"
				"Bem, voc� pode encontrar Cristal Azul na Ilha Byalan.\n"
				"Cornutus, Kukre, Marina, Vadon...esses monstros soltam com frequ�ncia.");
			next;
			mes("[Maria]\n"
				"Voc� pode pegar Vida Verdejante dos monstros tipo inseto.\n"
				"Tente ca�ar monstros como Besouro-Chifre,Louva-a-Deus ou Vitata.");
			next;
			mes("[Maria]\n"
				"Sangue Escarlate.\n"
				"Voc� pode pegar um monte desses de...\n"
				"Salgueiro Anci�es, Metallers ou Escorpi�es encontrados no deserto.");
			next;
			mes("[Maria]\n"
				"Para Frescor do Vento.\n"
				"Zang�o, Percevejo, Chonchon de A�o.\n"
				"Se voc� tentar um pouco, voc� pode conseguir facilmente.");
			next;
			mes("[Maria]\n"
				"De qualquer jeito, fa�a seu melhor.\n"
				"Essa � a base de ser um Bruxo.");
			close2;
			cutin("",255);
			end;
		} else if (wizardq) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"N�o fique relaxado apenas depois do primeiro teste.\n"
				"Fa�a seu melhor, porque voc� ainda tem dois testes para passar.");
			close2;
			cutin("",255);
			end;
		} else if (wizardq == 3) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"ZzzzZzzzZzzz...");
			next;
			cutin("job_wizard_maria02",2);
			mes("[Maria]\n"
				"*wimper*...Blizadris...seu idiota...Zzz...");
			close2;
			cutin("",255);
			end;
		} else if (wizardq == 4) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Oh, voc� est� indo bem n�o �?");
			next;
			mes("[Maria]\n"
				"Bem, Fa�a seu melhor at� o final.\n"
				"Laurel est� esperando.");
			close2;
			cutin("",255);
			end;
		} else if (wizardq == 5 || wizardq == 6) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Voc� desistiu?\n"
				"Como voc� pode se tornar um bruxo com o cora��o fraco?");
			next;
			mes("[Maria]\n"
				"Voc� sabe que cada sala tem monstros do mesmo atributo...\n"
				"Se voc� � uma pessoa que lida com magia, voc� precisa saber sobre os diferentes tipos de magia.");
			next;
			mes("[Maria]\n"
				"Voc� tamb�m precisa aprender como contra-atacar monstros que usam habilidades.\n"
				"Sua melhor t�tica � atacar os monstros que est�o atacando voc� primeiro.");
			next;
			mes("[Maria]\n"
				"*Grrr* De qualquer maneira, Continue o teste.\n"
				"N�o tenha uma mente fraca, *au* e volte! *Late* *Late* agora mesmo! *BARK*");
			close2;
			cutin("",255);
			end;
		} else if (wizardq == 7) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Como eu pensava, sabia que voc� era capaz de fazer isso, eu podia cheirar isso em voc�!\n"
				"Agora eu posso te chamar de Bruxo.");
			next;
			mes("[Maria]\n"
				"Parab�ns.\n"
				"Sempre d� seu melhor em tudo, n�o importa o qu�.");
			close2;
			cutin("",255);
			end;
		}
	} else {
		if (BaseJob == Job_Wizard) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Ao inv�s de ficar andando por aqui, n�o seria melhor testar o qu�o forte voc� ficou?");
			next;
			mes("[Maria]\n"
				"N�o esque�a que Bruxos crescem e melhoram seus poderes todos os dias.");
			close2;
			cutin("",255);
			end;
		} else {
			mes("[Maria]\n"
				"..........");
			close;
		}
	}
}
