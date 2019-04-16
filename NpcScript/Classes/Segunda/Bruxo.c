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
| - Info: Quest de Mudança de Classe para Buxo.                     |
\*-----------------------------------------------------------------*/

gef_tower,111,37,4	script	Bruxa#wizardq	1_F_GYPSY,{
	if (BaseJob == Job_Mage) {
		if (!wizardq) {
			mes("[Bruxa]\n"
				"Hã? O que faz aqui em cima...?\n"
				"O que trouxe você até aqui?");
			next;
			if (select("Eu quero me tornar um"+(Sex == SEX_MALE ? "bruxo":"a bruxa"), "Nada") == 2) {
				mes("[Bruxa]\n"
					"Então você não tem nenhum assunto para tratar aqui.");
				close;
			} else {
				mes("[Bruxa]\n"
					"Humm...\n"
					"Bem, é claro que você quer se tornar um Bruxo.\n"
					"Senão você não subiria todas aquelas escadas até aqui, certo?\n"
					"Em todo caso, eu devo lhe dar as boas-vindas.");
				next;
				mes("[Bruxa]\n"
					"Meu nome é Catherine Medici.");
				next;
				mes("[Catherine]\n"
					"Muitas pessoas querem se tornar Bruxos.\n"
					"Mas apenas as fortes e as pacientes vão alcançar seus objetivos.\n"
					"Para se tornar um Bruxo, deve-se passar por tarefas difíceis.");
				next;
				mes("[Catherine]\n"
					"Também, apenas Magos que alcançaram o nível de classe 40 ou mais.\n"
					"Estão classificados para essas tarefas.\n"
					"Magos de nível mais baixo que esse não têm experiência suficiente com magia para se tornarem Bruxos...");
				next;
				mes("[Catherine]\n"
					"Para se tornar um Bruxo você deve cumprir 3 testes.\n"
					"1º teste, coletar itens mágicos.\n"
					"2º teste, teste escrito.\n"
					"O último é um teste prático de magia.");
				next;
				mes("[Catherine]\n"
					"Nós dispensamos aqueles que são Nível de classe 50, em um dos três testes.");
				next;
				if (JobLevel < 40) {
					mes("[Catherine]\n"
						"Mas você ainda tem o que aprender como mago.");
					next;
					mes("[Catherine]\n"
						"Não precisa se apressar, vá refletir e conhecer mais sobre o Mundo da Magia.\n"
						"Quando você estiver qualificad"+(Sex == SEX_MALE ? "o":"a")+".\n"
						"Com pelo menos \"Level 40 de Classe\" retorne.");
					close;
				} else {
					mes("[Catherine]\n"
						"Bom, eu vou dar mais informações quando você se inscrever no teste.\n"
						"Então... você quer se inscrever agora?");
					next;
					if (select("Sim, claro", "Deixe-me pensar mais") == 2) {
						mes("[Catherine]\n"
							"Oh, ok então, não tenha pressa.\n"
							"Já que eu sempre estou aqui, aceitando inscrições...");
						close;
					}
					mes("[Catherine]\n"
						"Muito bem então, eu aceito sua inscrição.\n"
						"Seu nome é...\n"
						+ strcharinfo(CHAR_NAME)+", certo?\n"
						"Não estou certa, pronunciei corretamente?");
					next;
					mes("[Catherine]\n"
						"Se o Mago completar esses testes.\n"
						"É o bastante para nos provar o esforço que vai fazer para se tornar um Bruxo.");
					next;
					if (JobLevel != 50) {
						mes("[Catherine]\n"
							"Então, desde que eu tenha tudo que eu preciso.\n"
							"Vou lhe dar mais informações sobre o primeiro teste.\n"
							"Você pode memorizar ou escrever se quiser, não importa.\n"
							"Mas você deve se lembrar, com certeza.");
						next;
						mes("[Catherine]\n"
							"O primeiro teste é coletar itens mágicos.\n"
							"A parte mais importante é que você deve consegui-los sozinho.");
						next;
						mes("[Catherine]\n"
							"Os itens que você deve coletar são...");
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
							"Acha difícil?\n"
							"Não, qualquer um que queira se tornar um Bruxo deve ser capaz de coletar esses itens.");
						next;
						mes("[Catherine]\n"
							"Boa sorte.\n"
							"Vou esperar.");
						close;
					} else {
						mes("[Catherine]\n"
							"Hmm, você está no nível de classe 50!?\n"
							"Você deve ter se esforçado muito.\n"
							"Você vai se tornar um Bruxo muito poderoso, eu posso sentir isso em você.");
						next;
						mes("[Catherine]\n"
							"Ok. Você já passou o 1º teste então.\n"
							"Não fique muito relaxado, ainda restam 2 testes.");
						next;
						mes("[Catherine]\n"
							"Vá falar com o homem no canto dessa sala e ele lhe dará os testes restantes.\n"
							"Tenha cuidado.\n"
							"Nós perdemos muitos Magos devido a dificuldade dos exames.");
						wizardq = 3;
						setquest(9015);
						close;
					}
				}
			}
		} else if (wizardq == 1) {
			mes("[Catherine]\n"
				"Deixe-me ver, você pegou todos os itens?\n"
				"Vamos checar...");
			next;
			if (countitem(Red_Gemstone) < 10 && countitem(Blue_Gemstone) < 10 && countitem(Yellow_Gemstone) < 10) {
				mes("[Catherine]\n"
					"Ei, eu acho que você não tem tudo ainda!");
				next;
				mes("[Catherine]\n"
					"Deve ter sido difícil vir até aqui em cima, mas volte e pegue todos os itens.\n"
					"A vida é curta o suficiente, então para de perder tempo e consiga os itens que eu te pedi.");
				next;
				mes("[Catherine]\n"
					"10 ^3355FFGema Vermelha^000000,\n"
					"10 ^3355FFGema Azul^000000,\n"
					"10 ^3355FFGema Amarela^000000,\n"
					"Não esqueça dessa vez, e traga todos os itens, ok?...");
				close;
			} else {
				delitem(Red_Gemstone,10);
				delitem(Blue_Gemstone,10);
				delitem(Yellow_Gemstone,10);
				wizardq = 3;
				changequest(9013,9015);
				mes("[Catherine]\n"
					"Perfeito!\n"
					"Você pegou todos os itens!\n"
					"Esses itens serão bem úteis para nossa guilda.");
				next;
				mes("[Catherine]\n"
					"Muito bem!\n"
					"Você passou o primeiro teste.\n"
					"Mas ainda restam 2 testes, então não fique tão relaxado.");
				next;
				mes("[Catherine]\n"
					"Vá falar com o homem no canto para saber sobre os outros testes.\n"
					"Eles podem ser um pouco difíceis, então tome cuidado, eu não gostaria que você terminasse como a maioria dos Magos que vêm para esses exames...\n"
					"Pobres almas na verdade, que descansem em paz. Hehehe.");
				close;
			}
		} else if (wizardq == 2) {
			mes("[Catherine]\n"
				"Você pegou todos os itens?\n"
				"Vamos ver se você tem os itens corretos...");
			next;
			if (countitem(Crystal_Blue) < 5 && countitem(Yellow_Live) < 5 && countitem(Boody_Red) < 5 && countitem(Wind_Of_Verdure) < 5) {
				mes("[Catherine]\n"
					"Ei, eu acho que você não tem tudo ainda!");
				next;
				mes("[Catherine]\n"
					"Deve ter sido difícil vir até aqui em cima, mas volte e pegue todos os itens.\n"
					"A vida é curta o suficiente, então para de perder tempo e consiga os itens que eu te pedi.");
				next;
				mes("[Catherine]\n"
					"5 ^3355FFCristal Azul^000000,\n"
					"5 ^3355FFVida Verdejante^000000,\n"
					"5 ^3355FFSangue Escarlate^000000,\n"
					"5 ^3355FFFrescor do Vento^000000,\n"
					"Não esqueça dessa vez e pegue os certos, certo?...");
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
					"Você pegou todos os itens!\n"
					"Esses itens serão bem úteis para nossa guilda.");
				next;
				mes("[Catherine]\n"
					"Perfeito!\n"
					"Você pegou todos os itens!\n"
					"Esses itens serão bem úteis para nossa guilda.");
				next;
				mes("[Catherine]\n"
					"Muito bem!\n"
					"Você passou o primeiro teste.\n"
					"Mas ainda restam 2 testes, então não fique tão relaxado.");
				next;
				mes("[Catherine]\n"
					"Vá falar com o homem no canto para saber sobre os outros testes.\n"
					"Eles podem ser um pouco difíceis, então tome cuidado\n"
					"Eu não gostaria que você terminasse como a maioria dos Magos que vêm para esses exames...\n"
					"Pobres almas na verdade, que descansem em paz. Hehehe.");
				close;
			}
		} else if (wizardq == 3) {
			mes("[Catherine]\n"
				"O que foi?\n"
				"Você ainda não foi falar com o homem ali no canto?\n"
				"Você não vai se tornar um Bruxo só trazendo os itens que eu pedi...");
			next;
			mes("[Catherine]\n"
				"Você apenas pode se tornar um Bruxo depois que passar nos outros 2 testes.\n"
				"Estou esperando completar-los, então vá.");
			close;
		} else if (wizardq == 4) {
			mes("[Catherine]\n"
				"Eu ouvi tudo.\n"
				"Muito bem em responder todas aquelas perguntas.");
			next;
			mes("[Catherine]\n"
				"Você ainda tem mais um teste, certo?\n"
				"Apenas mais um pouco e você será qualificad"+(Sex == SEX_MALE ? "o":"a")+" para se tornar Bruxo.");
			close;
		} else if (wizardq == 5 || wizardq == 6) {
			mes("[Catherine]\n"
				"O que houve?\n"
				"*suspiro*....");
			next;
			mes("[Catherine]");
			if (Sex == SEX_MALE) {
				mes("Com certeza você é um Mago, mas como um cara pode ser tão fraco?!\n"
					"Bom, ao menos você ainda está vivo.\n"
					"Vá e consiga dessa vez.");
			} else {
				mes("Não tente parecer fraca só porque é uma garota.\n"
					"Olhe para mim!\n"
					"Eu consegui, e você também pode.");
				next;
				mes("[Catherine]\n"
					"Eu concordo que é difícil, mas não ao ponto de desistir.\n"
					"Você deve encontrar a força e a paciência para passar naquele teste!");
			}
			next;
			mes("[Catherine]\n"
				"Então, se esforce...");
			close;
		} else if (wizardq == 7) {
			if (SkillPoint) {
				mes("[Catherine]\n"
					"Você acabou com todos os testes?\n"
					"Oh, me parece que você têm algums pontos de habilidades sobrando.\n"
					"Aprenda algumas outras habilidades com seus pontos restantes, e então venha falar comigo de novo.");
				close;
			} else {
				mes("[Catherine]\n"
					"Parabéns, Parabéns, Parabéns!!");
				next;
				mes("[Catherine]\n"
					"Bom, não precisamos esperar, parabenizo você.\n"
					"Eu considero você "+(Sex == SEX_MALE ? "um Bruxo":"uma Bruxa")+".");
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
				"Desde que você se tornou um Bruxo, você não tem mais negócios comigo, tem...?\n"
				"Agora, com licença.");
			close;
		} else {
			mes("[Bruxa]\n"
				"Hã? O que traz você a um lugar como esse...?\n"
				"Se não tiver nenhum assunto específico, saia imediatamente.");
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
				"Eu não sei quem é você ou o que você faz.\n"
				"Mas eu não tenho nada a tratar com você.");
			next;
			mes("[Bruxo]\n"
				"Vá embora! Saia!");
			close;
		} else if (wizardq == 1 || wizardq == 2) {
			mes("[Bruxo]\n"
				"Você quer se tornar um"+(Sex == SEX_MALE ? "Bruxo":"a Bruxa")+"?!");
			next;
			mes("[Bruxo]\n"
				"*ESPIRRO*\n"
				"Se você vivesse como está, tudo o quê tinha que fazer era caçar um pouco e viver a vida fácil...");
			next;
			mes("[Bruxo]\n"
				"*TOSSE*\n"
				"Vamos ver de que maneira você vive como um Bruxo.");
			close;
		} else if (wizardq == 3) {
			if (!wizardq2) {
				mes("[Bruxo]\n"
					"*TOSSE*\n"
					"Você deve ter passado o primeiro teste.\n"
					"Ok, eu sou o Bruxo responsável pelos seus testes de agora em diante.\n"
					"Meu nome é \"Raulel Asparagus\".");
				next;
				mes("[Raulel]\n"
					"*ESPIRRO*\n"
					"Ainda não é tão tarde, não seria melhor voltar para cidade e aproveitar a vida pacata?");
				next;
				mes("[Raulel]\n"
					"Você não sabe o quão perigoso é lidar com Magia.");
				next;
				if (select("Desistir do teste","Continuar teste") == 1) {
					mes("[Raulel]\n"
						"*ESPIRRO*\n"
						"Boa escolha...\n"
						"*TOSSE*\n"
						"Melhor nem sonhar em como ser um Bruxo.\n"
						"Maa...Maa...*ESPIRRO*\n"
						"Magia não foi feita para Humanos usarem!");
					next;
					mes("[Raulel]\n"
						"Deixe o topo dessa torre calmamente e nem olhe para trás.\n"
						"Apenas viva pacificamente com os poderes que você tem agora.");
					close;
				} else {
					mes("[Raulel]\n"
						"*espirro*\n"
						"Agora tem um louco aqui!\n"
						"Bem então, deixe-me ver o quão bom você é.\n"
						"*TOSSE*\n"
						"Eu quero ver isso com meus próprios olhos!");
					next;
					mes("[Raulel]\n"
						"*ESPIRRO*\n"
						"Então vamos começar o teste!\n"
						"Se você não responder todas elas corretamente.");
					next;
					mes("[Raulel]\n"
						"Eu vou fazer 10 perguntas então me responda corretamente.\n"
						"Se responder alguma errada, você não passa e eu não vou te dizer qual é!");
					if (questprogress(9015)) { changequest(9015,9016); }
				}
			} else {
				mes("[Raulel]\n"
					"Você está tão desesperad"+(Sex == SEX_MALE ? "o":"a")+" assim?\n"
					"*ESPIRRO*");
				next;
				mes("[Raulel]\n"
					"Já que você não quer viver uma vida pacífica e estável, vou te dar outra chance...");
				next;
				mes("[Raulel]\n"
					"Se você errar apenas uma questão, então desista.\n"
					"Você não terá nenhum talento sendo Bruxo!");
			}
			next;
			mes("[Raulel]\n"
				"*TOSSE* então vamos às perguntas!");
			next;
			switch (rand(3)) {
				case 1:
				mes("[Raulel]\n"
					"1. Qual destes não é necessário para aprender barreira de fogo?");
				next;
				if (select("Lanças de Fogo", "Bola de Fogo", "Chama Reveladora", "Ataque Espiritual") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"2. Sem importar o atributo anterior.\n"
					"Qual o atributo final do monstro quando você conjura Rajada Congelante nele?");
				next;
				if (select("Água", "Terra", "Fogo", "Vento") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"3. Quando você domina completamente Ataque Espiritual.\n"
					"Qual é a taxa de aumento no M-ATK usando essa magia?");
				next;
				if (select("1,6 vezes", "1,7 vezes", "2 vezes", "20 vezes") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"4. Que item você precisa para conjurar Petrificar?");
				next;
				if (select("Sangue Escarlate", "Gema Azul", "Gema Amarela", "Gema Vermelha") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"5. Qual destes não é requerido para dominar Escudo Mágico?");
				next;
				if (select("Ataque Espiritual", "Espiritos Anciões", "Aumentar Recuperação de SP", "Escudo Mágico") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"6. Sem o bônus de INT.\n"
					"Qual a quantidade de SP recperada a cada 10 segundos quando você aprendeu Aumentar Recuperação de SP Lv 7?");
				next;
				if (select("14", "21", "28", "35") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"7. Usando Proteção Arcana, quando você tem 50% do seu SP restante.\n"
					"Quanto de SP é usado ao receber dano, e qual é a porcentagem de dano reduzido?");
				next;
				if (select("Dano 18%, SP 1.5%", "Dano 18%, SP 2%", "Dano 24%, SP 1.5%", "Dano 24%, SP 2%") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"8. Qual é o SP consumido e quantas vezes você pode evitar ataques usando Escudo Mágico Lv 6?");
				next;
				if (select("SP 40, 6 vezes", "SP 35, 6 vezes", "SP 40, 7 vezes", "SP 35, 7 vezes") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"9. Qual o SP necessário para usar Tempestade de Raios Lv 10?");
				next;
				if (select("84", "74", "64", "54") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"10. Qual habilidade é mais útil para caçar na Caverna Byalan?");
				next;
				if (select("Relâmpago", "Lanças de Fogo", "Lanças de Gelo", "Chama Reveladora") == 1) {
					.@wizq += 1;
				}
				break;
				case 2:
				mes("[Raulel]\n"
					"1. De que monstro você pode obter Vembrassa com Slot?");
				next;
				if (select("Besouro Ladrão", "PecoPeco", "Pupa", "Kobold (Marreta)") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"2. Qual destes é o monstro mais fácil para um Mago de baixo nível matar?");
				next;
				if (select("Flora","Giearth","Golem","Névoa") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"3. Qual destes monstros não são imunes a Petrificar?");
				next;
				if (select("Salgueiro Ancião", "Druida Maligno", "Magnólia", "Cavalo-Marinho") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"4. Quando atacar um monstro de atributo água Lv 3 com uma arma de atributo vento.\n"
					"Qual será a porcentagem do dano?");
				next;
				if (select("125%", "150%", "175%", "200%") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"5. Se um Filhote de Lobo do Deserto e um Familiar lutassem, qual dos dois ganharia?");
				next;
				if (select("Filhote de Lobo do Deserto", "Familiar", "Nenhum dos dois", "Eu não sei") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"6. Qual destes não podem ser domesticados?");
				next;
				if (select("Poporing", "Sapo de Rodda", "Fumacento", "Esporo Venenoso") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"7. Escolha o monstro que é fraco contra o atributo Fogo.");
				next;
				if (select("Golbin da Faca", "Goblin da Maça", "Morningstar Goblin", "Goblin da Marreta") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"8. Qual destes tem maior defesa?");
				next;
				if (select("Besouro-Chifre", "Chonchon", "Andre", "Caramelo") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"9. Escolha o monstro que é de uma espécie diferente.");
				next;
				if (select("Poring", "Mastering", "Ghostring", "Esporo") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"10. Qual destes não é um Morto-Vivo?");
				next;
				if (select("Drake", "Megalodon", "Deviace", "Khalitzburg") == 3) {
					.@wizq += 1;
				}
				break;
				default:
				mes("[Raulel]\n"
					"1. Qual destes é mais importante para um Mago?");
				next;
				if (select("INT", "AGI", "DES", "VIT") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"2. Qual destes atributos não tem um ataque tipo \"Lanças\"?");
				next;
				if (select("Água", "Terra", "Fogo", "Vento") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"3. Escolha qual não é relacionado a um Mago.");
				next;
				if (select("Força física fraca", "Ataque à distância", "Bom em vender coisas", "Defesa mágica alta") == 3) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"4. Qual é a cidade natal dos Magos?");
				next;
				if (select("Prontera", "Morroc", "Alberta", "Geffen") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"5. Qual destas cartas não tem nada a ver com INT?");
				next;
				if (select("Ovo de Andre", "Andre", "Filhote Lobo do Deserto", "Salgueiro Ancião") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"6. Em que um Mago é bom comparado as outras classes?");
				next;
				if (select("Habilidade Vocal", "Habilidade em Atuação", "Habilidades de Dança", "Habilidades Mágicas") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"7. Qual é o bônus de INT do nível de classe 40 para Magos?");
				next;
				if (select("8", "7", "6", "5") == 4) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"8. Qual item um Mago não pode equipar?");
				next;
				if (select("Faca", "Quepe", "Sandálias", "Olho de Dullahan") == 2) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"9. Qual destes é o catalisador para fazer a Solução Mágica número 3?");
				next;
				if (select("Gema Azul", "Gema Vermelha", "Gema Amarela", "Sangue Escarlate") == 1) {
					.@wizq += 1;
				}
				mes("[Raulel]\n"
					"10. Qual destas cartas é irrelavante à Magica?");
				next;
				if (select("Carta Marduk", "Carta Magnólia", "Carta Salgueiro", "Carta Maya") == 2) {
					.@wizq += 1;
				}
				break;
			}
			mes("[Raulel]\n"
				"Muito bem respondeu todas as perguntas.");
			if (.@wizq == 8 || .@wizq == 9) {
				mes("Você não foi muito bem, mas dexarei que você passe no segundo teste.");
				next;
				mes("[Raulel]\n"
					"*ESPIRRO*\n"
					"Não relaxe ainda, ainda há o problema do Terceiro teste final.\n"
					"Eu aconselho você a descansar um pouco enquanto o Teste final é preparado.\n"
					"Você vai precisar.");
				wizardq = 4;
				if (wizardq2) { wizardq2 = 0; }
				changequest(9016,9017);
				close;
			} else if (.@wizq == 10) {
				wizardq = 4;
				if (wizardq2) { wizardq2 = 0; }
				changequest(9016,9017);
				mes("Muito bem, você passou o segundo teste.\n"
					"Não foi feito em uma tentativa como a minha foi, mas eu vou deixar você passar...");
				next;
				mes("[Raulel]\n"
					"*ESPIRRO*\n"
					"Não relaxe ainda, ainda há o problema do Terceiro teste final.\n"
					"Eu aconselho você a descansar um pouco enquanto o Teste final é preparado.\n"
					"Você vai precisar.");
				close;
			} else {
				wizardq2 = 1;
				mes("Você é uma vergonha.\n"
					"Estude mais!");
				next;
				mes("[Raulel]\n"
					"*TOSSE*\n"
					"Realmente achou que poderia se tornar Bruxo em um nível mediocre de conhecimento como o seu?\n"
					"Dê o fora!");
				close;
			}
		} else if (wizardq == 4) {
			mes("[Raulel]\n"
				"Ok, espero que tenha descansado o bastente.\n"
				"Então vamos começar o último teste.");
			next;
			mes("[Raulel]\n"
				"Devo explicar um pouco sobre o último teste?\n"
				"É difícil, eu não vou mentir...");
			next;
			if (select("Conte-me sobre o teste", "Começar agora") == 1) {
				mes("[Raulel]\n"
					"Muito bem, irei explicar.\n"
					"Não importa quanto difícil esse teste possa parecer.\n"
					"Se fizer como eu digo, você vai poder acabar rápido e fácil.");
				next;
				mes("[Raulel]\n"
					"O teste final tem um total de 3 partes.\n"
					"A ordem é Sala da Água, Sala da Terra, Sala do Fogo.\n"
					"Em cada sala, existem monstros do mesmo atributo.");
				next;
				mes("[Raulel]\n"
					"Você vai descobrir que os monstros vão estar lá quando você entrar.\n"
					"Se você usar os ataques com os atributos certos, não será muito difícil.");
				next;
				mes("[Raulel]\n"
					"Uma que você tenha derrotado todos os monstros dentro do tempo dado na sala...\n"
					"Você irá para a próxima sala.");
				next;
				mes("[Raulel]\n"
					"Depois que essas 3 salas estiverem limpas, o teste está acabado.\n"
					"Você se tornará um Bruxo que é controlado pelos poderes da Grande Magia!\n"
					"Depois disso...\n"
					"Não há retorno para a vida calma.");
				next;
				mes("[Raulel]\n"
					"Você parece assustad"+(Sex == SEX_MALE ? "o":"a")+".\n"
					"Sabe, ainda não é tão tarde para voltar a sua vida calma.\n"
					"Se você quiser, posso te mandar para a cidade agora mesmo...\n"
					"O que acha?");
				next;
				if (select ("Vou desistir do teste", "Continuar") == 1) {
					mes("[Raulel]\n"
						"Boa idéia.\n"
						"Essa é a melhor escolha para você.\n"
						"Volte e viva uma vida tranquila.\n"
						"Magia superior é uma força que não pode ser manipulada por pessoas fracas.");
					close2;
					warp("geffen",120,110);
					end;
				}
			}
			wizardq = 5;
			savepoint("geffen",120,107);
			mes("[Raulel]\n"
				"Então, como você deseja.\n"
				"Eu vou mandar você pra lá agora.");
			close2;
			warp("job_wiz",57,154);
			end;
		} else if (wizardq == 5) {
			mes("[Raulel]\n"
				"Então quer tentar de novo é?");
			next;
			mes("[Raulel]\n"
				"Ok, aqui vai uma proposta.\n"
				"Já que provavelmente não vai passar.\n"
				"Posso ver claramente o desejo da Grande Magia queimando em seus olhos...\n"
				"Me traga um ^3355FFPergaminho Desgastado^000000.");
			next;
			mes("[Raulel]\n"
				"Então vou substituir esse teste por outro de conhecimento.");
			if (countitem(Worn_Out_Scroll)) {
				mes("O que me diz heim?");
				next;
				if (select ("Claro está aqui o pergaminho", "Não, quero continuar") == 1) {
					delitem(Worn_Out_Scroll,1);
					mes("[Raulel]\n"
						"Então você optou por essa ecolha, pois bem...\n"
						"Eu acho que posso continuar minha pesquisa com isso...");
					next;
					mes("[Raulel]\n"
						"Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para responder meu questionário volte.\n"
						"Serão apenas perguntas práticas e teóricas que qualquer bruxo deve saber.");
					wizardq = 6;
					close;
				}
			} else {
				next;
				if (select ("Continuarei com o teste", "Irei conseguir o item") == 2) {
					mes("[Raulel]\n"
						"Está certo então.\n"
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
				"Já que não é capaz de concluir o o teste prático!\n"
				"E me trouxe o pergaminho que precisava você pode escolher qual teste fazer.");
			next;
			if (select ("Quero fazer o teste prático", "Quero fazer o teste teórico") == 1) {
				mes("[Raulel]\n"
					"Boa sorte então.\n"
					"Vou te mandar para o local de teste agora.");
				close2;
				warp("job_wiz",57,154);
				end;
			}
			mes("[Raulel]\n"
				"Bem, é melhor responder esses problemas se você planeja se tornar um Bruxo.\n"
				"Hahahahahahaha");
			next;
			mes("[Raulel]\n"
				"1. Escolha o Monstros com o atributo diferente dos outros.");
			next;
			if (select("Louva-a-Deus", "Cornutus", "Giearth", "Caramelo") == 2) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"2. Escolha o monstro que não é do tipo de pilhagem.");
			next;
			if (select("Yoyo", "Magnólia", "Metaller", "Zerom") == 4) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"3. Qual desses monstros não reconhece Conjurações?");
			next;
			if (select("Marina", "Vitata", "Escorpião", "Giearth") == 1) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"4. Escolha a magia que é a mais eficiente contra Esfera Marinha.");
			next;
			if (select("Lanças de Gelo", "Lanças de Fogo", "Relâmpago", "Petrificar") == 3) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"5. Escolha o monstro que pode se mover.");
			next;
			if (select("Hidra", "Mandrágora", "Guardião da Floresta", "Frilldora") == 4) {
				.@wizq2 += 1;
			}
			mes("[Raulel]\n"
				"Bem, só são essas perguntas mesmo.");
			if (.@wizq2 != 5) {
				mes("E você falhou denovo!\n"
					"Vá estudar mais!");
				next;
				mes("[Raulel]\n"
					"Você tem uma deficiência em algo...\n"
					"*ESPIRRO*...\n"
					"Algo como Inteligência.\n"
					"É por isso que você continua falhando.");
				close;
			} else {
				mes("*TOSSE*\n"
					"Se você pode responder todas essas perguntas corretamente.\n"
					"Por que você não se sai bem em batalhas?");
				next;
				mes("[Raulel]\n"
					"Então, com um pouco mais de esforço pode ser que consiga ser "+(Sex == SEX_MALE ? "um grande Bruxo":"uma grande Bruxa")+".\n"
					"Vou dizer a Catherine que você passou no teste final.\n"
					"Então agora vá, já perdir muito tempo com seus consecutivos fracassos.");
				wizardq = 7;
				changequest(9017,9018);
				close;
			}
		} else if (wizardq == 7) {
			mes("[Raulel]\n"
				"Você não tem nada a tratar comigo que eu saiba.");
			next;
			mes("[Raulel]\n"
				"Vá! Vá e se torne o Bruxo se é o que você realmente quer.");
			close;
		}
	} else {
		if (BaseJob == Job_Wizard) {
			mes("[Raulel]\n"
				"*TOSSE*\n"
				"O que você quer?\n"
				"Se você é uma pessoa que usa magia, então você precisa ter certeza que está bem informado sobre isso.");
			next;
			mes("[Raulel]\n"
				"Não viva desonestamente, ou seja mal-educado, ou então um dia você vai ser pego numa magia que você não pode controlar, e BOOM, você morre!\n"
				"Se você não quer que isso aconteca, então lembre como usar as magias corretamente!");
			next;
			mes("[Raulel]\n"
				"Você pode viver aleijado se ficar muito obcecado com a Magia.");
			close;
		} else {
			mes("[Bruxo]\n"
				"*ESPIRRO*\n"
				"*TOSSE*");
			next;
			mes("[Bruxo]\n"
				"Oooowww...\n"
				"Meu corpo todo está dolorido.\n"
				"Eu sinto como se estivesse preso num tubo de gelo!");
			next;
			mes("[Bruxo]\n"
				"O que você quer?!!");
			close;
		}
	}
}

// ------------------------------------------------------------------
job_wiz,50,165,4	script	Assistente da Arena#wizardq	8_F_GIRL,{
	mes("[Assistente da Arena]\n"
		"Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à Arena de teste.\n"
		"Se você quiser fazer o teste final, por favor entre na sala de espera.");
	next;
	mes("[Assistente da Arena]\n"
		"Se alguem estiver fazendo o teste, por favor espere.\n"
		"Todas as informações do teste serão publicadas, e vai começar assim que o jogador anterior sair.");
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
	mapannounce(strnpcinfo(NPC_MAP),"Sala da Água; O teste agora vai continuar.",bc_map);
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo limite é de 3 minutos. Nós vamos iniciar o teste agora.",bc_map);
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
	mapannounce(strnpcinfo(NPC_MAP),"Próximo candidato, entre por favor.",bc_map);
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
	monster(strnpcinfo(NPC_MAP),107,98,"Pé-Grande",BIGFOOT,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
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
	mapannounce(strnpcinfo(NPC_MAP),"O tempo limite é de 3 minutos.",bc_map);
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
	mapannounce(strnpcinfo(NPC_MAP),"Próximo candidato, entre por favor.",bc_map);
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
	monster(strnpcinfo(NPC_MAP),40,103,"Escorpião",SCORPION,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),51,103,"Frilldora",FRILLDORA,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),40,92,"PecoPeco",PECOPECO,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),51,92,"Salgueiro Ancião",ELDER_WILOW,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
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
		mapannounce(strnpcinfo(NPC_MAP),"Parabéns, "+strcharinfo(CHAR_NAME)+". Você passou no teste.",bc_map);
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
	mapannounce(strnpcinfo(NPC_MAP),"O tempo limite é de 3 minutos. Nós vamos começar o teste agora.",bc_map);
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
	mapannounce(strnpcinfo(NPC_MAP),"Próximo candidato, entre por favor.",bc_map);
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
				"Eu sei o que você quer dizer.\n"
				"Você quer se tornar um Bruxo, certo?");
			next;
			mes("[Cachorro]\n"
				"Vá falar com Catherine.\n"
				"Ela vai te ajudar.");
			next;
			mes("[Cachorro]\n"
				"Além disso, se você quiser saber algo sobre o teste, eu posso explicar.");
			next;
			switch (select("?!", "Um Cachorro falante!...")) {
				case 1:
				mes("[Cachorro]\n"
					"...*late*...?\n"
					"O que é??\n"
					"Por que você está olhando pra mim assim?!\n"
					"É a primeira vez que você vê um Cachorro falar?");
				next;
				mes("[Cachorro]\n"
					"*Late*\n"
					"Não é normal você ver um cachorro falando eu suponho.\n"
					"...Sim eu acho que é uma visão rara...");
				next;
				mes("[Cachorro]\n"
					"Meu nome é \"Maria Splodofska\".\n"
					"Apenas me chame Maria.");
				next;
				cutin("job_wizard_maria03",2);
				mes("[Maria]\n"
					"*Late*\n"
					"Bem, eu me tornei um cachorro porque...\n"
					"Eu estava ajudando meu namorado num experimento para o teste final dele em Graduação em Mágica.\n"
					"Ele acidentalmente me transformou num cachorro.\n"
					"Teoricamente, em algums meses a química vai acabar e eu vou voltar ao normal.\n"
					"Quando exatamente, não tenho idéia.");
				close2;
				cutin("",255);
				end;
				case 2:
				cutin("job_wizard_maria02",2);
				mes("[Cachorro]\n"
					"*Late* *Late* *Late*\n"
					"Não diga o óbvio!\n"
					"Certo, eu sei que sou um cachorro!");
				next;
				cutin "job_wizard_maria01",2;
				mes("[Cachorro]\n"
					"Meu nome é \"Maria Splodofska\".\n"
					"O pessoal me chama Maria.\n"
					"Eu ajudo pessoas como você que desejam se tornar um Bruxo.");
				next;
				cutin("job_wizard_maria03",2);
				mes("[Cachorro]\n"
					"O motivo de eu ter me tornado um cachorro...\n"
					"Meu namorado estava fazendo experimentos para a Graduação em Magia dele.\n"
					"Acidentalmente ele me transformou em cachorro.\n"
					"Teoricamente, em alguns meses, a química vai acabar e eu vou voltar ao normal.\n"
					"Quando exatamente, não tenho idéia.");
				close2;
				cutin("",255);
				end;
			}
		} else if (wizardq == 1) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Você se inscreveu, e agora está procurando pelos itens certo?");
			next;
			mes("[Maria]\n"
				"Mas já que esse é apenas o primeiro teste, não dependa dos outros.\n"
				"Faça sozinho.\n"
				"Essa é a melhor maneira.");
			next;
			mes("[Maria]\n"
				"Pelo o que eu escutei, você tem que coletar gemas...\n"
				"Eu não posso te ajudar diretamente, mas eu posso te dar umas dicas.");
			next;
			mes("[Maria]\n"
				"Primeiro, para pegar Gemas vermelhas, vá aos esgotos de Prontera.\n"
				"Você pode obtê-las dos Besouros-ladrões e dos Ovos de Besouro-ladrão encontrados lás.");
			next;
			mes("[Maria]\n"
				"Gemas Amarelas são fáceis de achar no deserto.\n"
				"Condores, Pickys, e algums monstros como Golem soltam elas.");
			next;
			mes("[Maria]\n"
				"Para conseguir Gemas azuis.\n"
				"Tente ir na Ilha Byalan.\n"
				"Cornutus, Vadon, e monstros como Marte podem soltar essas gemas.");
			next;
			mes("[Maria]\n"
				"Mas é claro que você pode pegar Gemas azuis na Loja Mágica aqui na cidade...\n"
				"Mas, encontrar elas por si só seria muito mais gratificante e útil no teste.");
			next;
			mes("[Maria]\n"
				"De qualquer jeito, faça seu melhor.\n"
				"Essa é a base de ser um Bruxo.");
			close2;
			cutin("",255);
			end;
		} else if (wizardq == 2) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Você parece perdido...\n"
				"Você se inscreveu, e agora você está procurando pelos itens certo?");
			next;
			mes("[Maria]\n"
				"Mas já que esse é apenas o primeiro teste, não dependa dos outros.\n"
				"Faça sozinho.\n"
				"Essa é a melhor maneira.");
			next;
			mes("[Maria]\n"
				"Pelo o que eu escutei, você tem que coletar pedras elementais...\n"
				"Eu não posso te ajudar diretamente, mas eu posso te dar umas dicas.");
			next;
			mes("[Maria]\n"
				"Bem, você pode encontrar Cristal Azul na Ilha Byalan.\n"
				"Cornutus, Kukre, Marina, Vadon...esses monstros soltam com frequência.");
			next;
			mes("[Maria]\n"
				"Você pode pegar Vida Verdejante dos monstros tipo inseto.\n"
				"Tente caçar monstros como Besouro-Chifre,Louva-a-Deus ou Vitata.");
			next;
			mes("[Maria]\n"
				"Sangue Escarlate.\n"
				"Você pode pegar um monte desses de...\n"
				"Salgueiro Anciões, Metallers ou Escorpiões encontrados no deserto.");
			next;
			mes("[Maria]\n"
				"Para Frescor do Vento.\n"
				"Zangão, Percevejo, Chonchon de Aço.\n"
				"Se você tentar um pouco, você pode conseguir facilmente.");
			next;
			mes("[Maria]\n"
				"De qualquer jeito, faça seu melhor.\n"
				"Essa é a base de ser um Bruxo.");
			close2;
			cutin("",255);
			end;
		} else if (wizardq) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Não fique relaxado apenas depois do primeiro teste.\n"
				"Faça seu melhor, porque você ainda tem dois testes para passar.");
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
				"Oh, você está indo bem não é?");
			next;
			mes("[Maria]\n"
				"Bem, Faça seu melhor até o final.\n"
				"Laurel está esperando.");
			close2;
			cutin("",255);
			end;
		} else if (wizardq == 5 || wizardq == 6) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Você desistiu?\n"
				"Como você pode se tornar um bruxo com o coração fraco?");
			next;
			mes("[Maria]\n"
				"Você sabe que cada sala tem monstros do mesmo atributo...\n"
				"Se você é uma pessoa que lida com magia, você precisa saber sobre os diferentes tipos de magia.");
			next;
			mes("[Maria]\n"
				"Você também precisa aprender como contra-atacar monstros que usam habilidades.\n"
				"Sua melhor tática é atacar os monstros que estão atacando você primeiro.");
			next;
			mes("[Maria]\n"
				"*Grrr* De qualquer maneira, Continue o teste.\n"
				"Não tenha uma mente fraca, *au* e volte! *Late* *Late* agora mesmo! *BARK*");
			close2;
			cutin("",255);
			end;
		} else if (wizardq == 7) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Como eu pensava, sabia que você era capaz de fazer isso, eu podia cheirar isso em você!\n"
				"Agora eu posso te chamar de Bruxo.");
			next;
			mes("[Maria]\n"
				"Parabéns.\n"
				"Sempre dê seu melhor em tudo, não importa o quê.");
			close2;
			cutin("",255);
			end;
		}
	} else {
		if (BaseJob == Job_Wizard) {
			cutin("job_wizard_maria01",2);
			mes("[Maria]\n"
				"Ao invés de ficar andando por aqui, não seria melhor testar o quão forte você ficou?");
			next;
			mes("[Maria]\n"
				"Não esqueça que Bruxos crescem e melhoram seus poderes todos os dias.");
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
