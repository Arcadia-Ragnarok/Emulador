/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
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
			mes "[Bruxa]";
			mes "H�? O que voc� faz aqui em cima...?";
			mes "O que trouxe voc� aqui?";
			next;
			if (select("Eu quero me tornar um Bruxo.","Nada.") == 2) {
				mes "[Bruxa]";
				mes "Ent�o voc� n�o tem nenhum assunto para tratar aqui.";
				close;
			} else {
				mes "[Bruxa]";
				mes "Humm...";
				mes "Bem, � claro que voc� quer se tornar um Bruxo.";
				mes "Sen�o voc� n�o subiria todas aquelas escadas at� aqui, certo?";
				mes "Em todo caso, eu devo lhe dar as boas-vindas.";
				next;
				mes "[Bruxa]";
				mes "Meu nome � Catherine Medici.";
				next;
				mes "[Catherine]";
				mes "Muitas pessoas querem se tornar Bruxos.";
				mes "Mas apenas as fortes e as pacientes v�o alcan�ar seus objetivos.";
				mes "Para se tornar um Bruxo, deve-se passar por tarefas dif�ceis.";
				next;
				mes "[Catherine]";
				mes "Tamb�m, apenas Magos que alcan�aram o n�vel de classe 40 ou mais.";
				mes "Est�o classificados para essas tarefas.";
				mes "Magos de n�vel mais baixo que esse n�o t�m experi�ncia suficiente com magia para se tornarem Bruxos...";
				next;
				mes "[Catherine]";
				mes "Para se tornar um Bruxo voc� deve cumprir 3 testes.";
				mes "1� teste, coletar itens m�gicos.";
				mes "2� teste, teste escrito.";
				mes "O �ltimo � um teste pr�tico de magia.";
				next;
				mes "[Catherine]";
				mes "N�s dispensamos aqueles que s�o N�vel de classe 50, em um dos tr�s testes.";
				next;
				if (JobLevel < 40) {
					mes "[Catherine]";
					mes "Mas voc� ainda tem o que aprender como mago.";
					next;
					mes "[Catherine]";
					mes "N�o precisa se apressar, v� refletir e conhecer mais sobre o Mundo da Magia.";
					mes "Quando voc� estiver qualificad"+(Sex == SEX_MALE ? "o":"a")+".";
					mes "Com pelo menos \"Level 40 de Classe\" retorne.";
					close;
				} else {
					mes "[Catherine]";
					mes "Bom, eu vou dar mais informa��es quando voc� se inscrever no teste.";
					mes "Ent�o... voc� quer se inscrever agora?";
					next;
					if (select("Sim, claro","Deixe-me pensar mais") == 2) {
						mes "[Catherine]";
						mes "Oh, ok ent�o, n�o tenha pressa.";
						mes "J� que eu sempre estou aqui, aceitando inscri��es...";
						close;
					} else {
						mes "[Catherine]";
						mes "Muito bem ent�o, eu aceito sua inscri��o.";
						mes "Seu nome �...";
						mes strcharinfo(PC_NAME)+", certo?";
						mes "N�o estou certa, pronunciei corretamente?";
						next;
						mes "[Catherine]";
						mes "Se o Mago completar esses testes.";
						mes "� o bastante para nos provar o esfor�o que vai fazer para se tornar um Bruxo.";
						next;
						if (JobLevel != 50) {
							mes "[Catherine]";
							mes "Ent�o, desde que eu tenha tudo que eu preciso.";
							mes "Vou lhe dar mais informa��es sobre o primeiro teste.";
							mes "Voc� pode memorizar ou escrever se quiser, n�o importa.";
							mes "Mas voc� deve se lembrar, com certeza.";
							next;
							mes "[Catherine]";
							mes "O primeiro teste � coletar itens m�gicos.";
							mes "A parte mais importante � que voc� deve consegui-los sozinho.";
							next;
							mes "[Catherine]";
							mes "Os itens que voc� deve coletar s�o...";
							next;
							mes "[Catherine]";
							switch(rand(2)) {
								case 1:
								mes "10 exemplares de ^3355FFGema Vermelha^000000.";
								mes "10 exemplares de ^3355FFGema Azul^000000.";
								mes "10 exemplares de ^3355FFGema Amarela^000000.";
								wizardq = 1;
								setquest (9013);
								default:
								wizardq = 2;
								setquest (9014);
								mes "5 exemplares de ^3355FFCristal Azul^000000.";
								mes "5 exemplares de ^3355FFVida Verdejante^000000.";
								mes "5 exemplares de ^3355FFSangue Escarlate^000000.";
								mes "5 exemplares de ^3355FFFrescor do Vento^000000.";
							}
							next;
							mes "[Catherine]";
							mes "Acha dif�cil?";
							mes "N�o, qualquer um que queira se tornar um Bruxo deve ser capaz de coletar esses itens.";
							next;
							mes "[Catherine]";
							mes "Boa sorte.";
							mes "Vou esperar.";
							close;
						} else {
							mes "[Catherine]";
							mes "Hmm, voc� est� no n�vel de classe 50!?";
							mes "Voc� deve ter se esfor�ado muito.";
							mes "Voc� vai se tornar um Bruxo muito poderoso, eu posso sentir isso em voc�.";
							next;
							mes "[Catherine]";
							mes "Ok. Voc� j� passou o 1� teste ent�o.";
							mes "N�o fique muito relaxado, ainda restam 2 testes.";
							next;
							mes "[Catherine]";
							mes "V� falar com o homem no canto dessa sala e ele lhe dar� os testes restantes.";
							mes "Tenha cuidado.";
							mes "N�s perdemos muitos Magos devido a dificuldade dos exames.";
							wizardq = 3;
							setquest (9015);
							close;
						}
					}
				}
			}
		} else if (wizardq == 1) {
			mes "[Catherine]";
			mes "Deixe-me ver, voc� pegou todos os itens?";
			mes "Vamos checar...";
			next;
			if (countitem(Red_Gemstone) < 10 && countitem(Blue_Gemstone) < 10 && countitem(Yellow_Gemstone) < 10) {
				mes "[Catherine]";
				mes "Ei, eu acho que voc� n�o tem tudo ainda!";
				next;
				mes "[Catherine]";
				mes "Deve ter sido dif�cil vir at� aqui em cima, mas volte e pegue todos os itens.";
				mes "A vida � curta o suficiente, ent�o para de perder tempo e consiga os itens que eu te pedi.";
				next;
				mes "[Catherine]";
				mes "10 exemplares de ^3355FFGema Vermelha^000000,";
				mes "10 exemplares de ^3355FFGema Azul^000000,";
				mes "10 exemplares de ^3355FFGema Amarela^000000,";
				mes "N�o esque�a dessa vez, e traga todos os itens, ok?...";
				close;
			} else {
				delitem (Red_Gemstone,10);
				delitem (Blue_Gemstone,10);
				delitem (Yellow_Gemstone,10);
				wizardq = 3;
				changequest (9013,9015);
				mes "[Catherine]";
				mes "Perfeito!";
				mes "Voc� pegou todos os itens!";
				mes "Esses itens ser�o bem �teis para nossa guilda.";
				next;
				mes "[Catherine]";
				mes "Muito bem!";
				mes "Voc� passou o primeiro teste.";
				mes "Mas ainda restam 2 testes, ent�o n�o fique t�o relaxado.";
				next;
				mes "[Catherine]";
				mes "V� falar com o homem no canto para saber sobre os outros testes.";
				mes "Eles podem ser um pouco dif�ceis, ent�o tome cuidado, eu n�o gostaria que voc� terminasse como a maioria dos Magos que v�m para esses exames... pobres almas na verdade, que descansem em paz. ~Hehehe.";
				close;
			}
		} else if (wizardq == 2) {
			mes "[Catherine]";
			mes "Voc� pegou todos os itens?";
			mes "Vamos ver se voc� tem os itens corretos...";
			next;
			if (countitem(Crystal_Blue) < 5 && countitem(Yellow_Live) < 5 && countitem(Boody_Red) < 5 && countitem(Wind_Of_Verdure) < 5) {
				mes "[Catherine]";
				mes "Ei, eu acho que voc� n�o tem tudo ainda!";
				next;
				mes "[Catherine]";
				mes "Deve ter sido dif�cil vir at� aqui em cima, mas volte e pegue todos os itens.";
				mes "A vida � curta o suficiente, ent�o para de perder tempo e consiga os itens que eu te pedi.";
				next;
				mes "[Catherine]";
				mes "5 exemplares de ^3355FFCristal Azul^000000,";
				mes "5 exemplares de ^3355FFVida Verdejante^000000,";
				mes "5 exemplares de ^3355FFSangue Escarlate^000000,";
				mes "5 exemplares de ^3355FFFrescor do Vento^000000,";
				mes "N�o esque�a dessa vez e pegue os certos, certo?...";
				close;
			} else {
				delitem (Crystal_Blue,5);
				delitem (Yellow_Live,5);
				delitem (Boody_Red,5);
				delitem (Wind_Of_Verdure,5);
				wizardq = 3;
				changequest (9014,9015);
				mes "[Catherine]";
				mes "Perfeito!";
				mes "Voc� pegou todos os itens!";
				mes "Esses itens ser�o bem �teis para nossa guilda.";
				next;
				mes "[Catherine]";
				mes "Perfeito!";
				mes "Voc� pegou todos os itens!";
				mes "Esses itens ser�o bem �teis para nossa guilda.";
				next;
				mes "[Catherine]";
				mes "Muito bem!";
				mes "Voc� passou o primeiro teste.";
				mes "Mas ainda restam 2 testes, ent�o n�o fique t�o relaxado.";
				next;
				mes "[Catherine]";
				mes "V� falar com o homem no canto para saber sobre os outros testes.";
				mes "Eles podem ser um pouco dif�ceis, ent�o tome cuidado, eu n�o gostaria que voc� terminasse como a maioria dos Magos que v�m para esses exames... pobres almas na verdade, que descansem em paz. ~Hehehe.";
				close;
			}
		} else if (wizardq == 3) {
			mes "[Catherine]";
			mes "O que foi?";
			mes "Voc� ainda n�o foi falar com o homem ali no canto?";
			mes "Voc� n�o vai se tornar um Bruxo s� trazendo os itens que eu pedi...";
			next;
			mes "[Catherine]";
			mes "Voc� apenas pode se tornar um Bruxo depois que passar nos outros 2 testes.";
			mes "Estou esperando completar-los, ent�o v�.";
			close;
		} else if (wizardq == 4) {
			mes "[Catherine]";
			mes "Eu ouvi tudo.";
			mes "Muito bem em responder todas aquelas perguntas.";
			next;
			mes "[Catherine]";
			mes "Voc� ainda tem mais um teste, certo?";
			mes "Apenas mais um pouco e voc� ser� qualificad"+(Sex == SEX_MALE ? "o":"a")+" para se tornar Bruxo.";
			close;
		} else if (wizardq == 5 || wizardq == 6) {
			mes "[Catherine]";
			mes "O que houve?";
			mes "*suspiro*....";
			next;
			mes "[Catherine]";
			if (Sex == SEX_MALE) {
				mes "Com certeza voc� � um Mago, mas como um cara pode ser t�o fraco?!";
				mes "Bom, ao menos voc� ainda est� vivo.";
				mes "V� e consiga dessa vez.";
			} else {
				mes "N�o tente parecer fraca s� porque � uma garota.";
				mes "Olhe para mim!";
				mes "Eu consegui, e voc� tamb�m pode.";
				next;
				mes "[Catherine]";
				mes "Eu concordo que � dif�cil, mas n�o ao ponto de desistir.";
				mes "Voc� deve encontrar a for�a e a paci�ncia para passar naquele teste!";
			}
			next;
			mes "[Catherine]";
			mes "Ent�o, se esforce...";
			close;
		} else if (wizardq == 7) {
			if (SkillPoint) {
				mes "[Catherine]";
				mes "Voc� acabou com todos os testes?";
				mes "Oh, me parece que voc� t�m algums pontos de habilidades sobrando.";
				mes "Aprenda algumas outras habilidades com seus pontos restantes, e ent�o venha falar comigo de novo.";
				close;
			} else {
				mes "[Catherine]";
				mes "Parab�ns, Parab�ns, Parab�ns!!";
				next;
				mes "[Catherine]";
				mes "Bom, n�o precisamos esperar, parabenizo voc�.";
				mes "Eu considero voc� "+(Sex == SEX_MALE ? "um Bruxo":"uma Bruxa")+".";
				next;
				jobchange (Job_Wizard);
				completequest (9018);
				callfunc ("ClearJobQuest2nd",9);
				getitem (Blue_Potion,6);
				next;
				mes "[Catherine]";
				mes "Viva uma vida maravilhosa como Bruxo, se torne o mais forte de todos!";
				close;
			}
		}
	} else {
		if (BaseJob == Job_Wizard) {
			mes "[Catherine]";
			mes "Desde que voc� se tornou um Bruxo, voc� n�o tem mais neg�cios comigo, tem...?";
			mes "Agora, com licen�a.";
			close;
		} else {
			mes "[Bruxa]";
			mes "H�? O que traz voc� a um lugar como esse...?";
			mes "Se n�o tiver nenhum assunto espec�fico, saia imediatamente.";
			close;
		}
	}
}

// ------------------------------------------------------------------
gef_tower,102,24,2	script	Bruxo Sombrio#wizardq	4_M_JOB_WIZARD,{
	if (BaseJob == Job_Mage) {
		if (!wizardq) {
			mes "[Bruxo]";
			mes "*TOSSE*";
			mes "*TOSSE*";
			mes "*ESPIRRO*";
			next;
			mes "[Bruxo]";
			mes "Eu n�o sei quem � voc� ou o que voc� faz.";
			mes "Mas eu n�o tenho nada a tratar com voc�.";
			next;
			mes "[Bruxo]";
			mes "V� embora! Saia!";
			close;
		} else if (wizardq == 1 || wizardq == 2) {
			mes "[Bruxo]";
			mes "Voc� quer se tornar um Bruxo?!";
			next;
			mes "[Bruxo]";
			mes "*ESPIRRO*";
			mes "Se voc� vivesse como est�, tudo o qu� tinha que fazer era ca�ar um pouco e viver a vida f�cil...";
			next;
			mes "[Bruxo]";
			mes "*TOSSE*";
			mes "Vamos ver de que maneira voc� vive como um Bruxo.";
			close;
		} else if (wizardq == 3) {
			if (!wizardq2) {
				mes "[Bruxo]";
				mes "*TOSSE*";
				mes "Voc� deve ter passado o primeiro teste.";
				mes "Ok, eu sou o Bruxo respons�vel pelos seus testes de agora em diante.";
				mes "Meu nome � \"Raulel Asparagus\".";
				next;
				mes "[Raulel]";
				mes "*ESPIRRO*";
				mes "Ainda n�o � t�o tarde, n�o seria melhor voltar para cidade e aproveitar a vida pacata?";
				next;
				mes "[Raulel]";
				mes "Voc� n�o sabe o qu�o perigoso � lidar com Magia.";
				next;
				if (select("Desistir do teste","Continuar teste") == 1) {
					mes "[Raulel]";
					mes "*ESPIRRO*";
					mes "Boa escolha...";
					mes "*TOSSE*";
					mes "Melhor nem sonhar em como ser um Bruxo.";
					mes "Maa...Maa...*ESPIRRO*";
					mes "Magia n�o foi feita para Humanos usarem!";
					next;
					mes "[Raulel]";
					mes "Deixe o topo dessa torre calmamente e nem olhe para tr�s.";
					mes "Apenas viva pacificamente com os poderes que voc� tem agora.";
					close;
				} else {
					mes "[Raulel]";
					mes "*espirro*";
					mes "Agora tem um louco aqui!";
					mes "Bem ent�o, deixe-me ver o qu�o bom voc� �.";
					mes "*TOSSE*";
					mes "Eu quero ver isso com meus pr�prios olhos!";
					next;
					mes "[Raulel]";
					mes "*ESPIRRO*";
					mes "Ent�o vamos come�ar o teste!";
					mes "Se voc� n�o responder todas elas corretamente.";
					next;
					mes "[Raulel]";
					mes "Eu vou fazer 10 perguntas ent�o me responda corretamente.";
					mes "Se responder alguma errada, voc� n�o passa e eu n�o vou te dizer qual �!";
					if (questprogress(9015)) { changequest (9015,9016); }
				}
			} else {
				mes "[Raulel]";
				mes "Voc� est� t�o desesperad"+(Sex == SEX_MALE ? "o":"a")+" assim?";
				mes "*ESPIRRO*";
				next;
				mes "[Raulel]";
				mes "J� que voc� n�o quer viver uma vida pac�fica e est�vel, vou te dar outra chance...";
				next;
				mes "[Raulel]";
				mes "Se voc� errar apenas uma quest�o, ent�o desista.";
				mes "Voc� n�o ter� nenhum talento sendo Bruxo!";
			}
			next;
			mes "[Raulel]";
			mes "*TOSSE* ent�o vamos �s perguntas!";
			next;
			switch(rand(3)) {
				case 1:
				mes "[Raulel]";
				mes "1. Qual destes n�o � necess�rio para aprender barreira de fogo?";
				next;
				if (select("Lan�as de Fogo","Bola de Fogo","Chama Reveladora","Ataque Espiritual") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "2. Sem importar o atributo anterior.";
				mes "Qual o atributo final do monstro quando voc� conjura Rajada Congelante nele?";
				next;
				if (select("�gua","Terra","Fogo","Vento") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "3. Quando voc� domina completamente Ataque Espiritual.";
				mes "Qual � a taxa de aumento no M-ATK usando essa magia?";
				next;
				if (select("1,6 vezes","1,7 vezes","2 vezes","20 vezes") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "4. Que item voc� precisa para conjurar Petrificar?";
				next;
				if (select("Sangue Escarlate","Gema Azul","Gema Amarela","Gema Vermelha") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "5. Qual destes n�o � requerido para dominar Escudo M�gico?";
				next;
				if (select("Ataque Espiritual","Espiritos Anci�es","Aumentar Recupera��o de SP","Escudo M�gico") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "6. Sem o b�nus de INT.";
				mes "Qual a quantidade de SP recperada a cada 10 segundos quando voc� aprendeu Aumentar Recupera��o de SP Lv 7?";
				next;
				if (select("14","21","28","35") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "7. Usando Prote��o Arcana, quando voc� tem 50% do seu SP restante.";
				mes "Quanto de SP � usado ao receber dano, e qual � a porcentagem de dano reduzido?";
				next;
				if (select("Dano 18%, SP 1.5%","Dano 18%, SP 2%","Dano 24%, SP 1.5%","Dano 24%, SP 2%") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "8. Qual � o SP consumido e quantas vezes voc� pode evitar ataques usando Escudo M�gico Lv 6?";
				next;
				if (select("SP 40, 6 vezes","SP 35, 6 vezes","SP 40, 7 vezes","SP 35, 7 vezes") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "9. Qual o SP necess�rio para usar Tempestade de Raios Lv 10?";
				next;
				if (select("84","74","64","54") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "10. Qual habilidade � mais �til para ca�ar na Caverna Byalan?";
				next;
				if (select("Rel�mpago","Lan�as de Fogo","Lan�as de Gelo","Chama Reveladora") == 1) {
					.@wizq += 1;
				}
				break;
				case 2:
				mes "[Raulel]";
				mes "1. De que monstro voc� pode obter Vembrassa com Slot?";
				next;
				if (select("Besouro Ladr�o","PecoPeco","Pupa","Kobold (Marreta)") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "2. Qual destes � o monstro mais f�cil para um Mago de baixo n�vel matar?";
				next;
				if (select("Flora","Giearth","Golem","N�voa") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "3. Qual destes monstros n�o s�o imunes a Petrificar?";
				next;
				if (select("Salgueiro Anci�o","Druida Maligno","Magn�lia","Cavalo-Marinho") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "4. Quando atacar um monstro de atributo �gua Lv 3 com uma arma de atributo vento.";
				mes "Qual ser� a porcentagem do dano?";
				next;
				if (select("125%","150%","175%","200%") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "5. Se um Filhote de Lobo do Deserto e um Familiar lutassem, qual dos dois ganharia?";
				next;
				if (select("Filhote de Lobo do Deserto","Familiar","Nenhum dos dois","Eu n�o sei") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "6. Qual destes n�o podem ser domesticados?";
				next;
				if (select("Poporing","Sapo de Rodda","Fumacento","Esporo Venenoso") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "7. Escolha o monstro que � fraco contra o atributo Fogo.";
				next;
				if (select("Golbin da Faca","Goblin da Ma�a","Morningstar Goblin","Goblin da Marreta") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "8. Qual destes tem maior defesa?";
				next;
				if (select("Besouro-Chifre","Chonchon","Andre","Caramelo") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "9. Escolha o monstro que � de uma esp�cie diferente.";
				next;
				if (select("Poring","Mastering","Ghostring","Esporo") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "10. Qual destes n�o � um Morto-Vivo?";
				next;
				if (select("Drake","Megalodon","Deviace","Khalitzburg") == 3) {
					.@wizq += 1;
				}
				break;
				default:
				mes "[Raulel]";
				mes "1. Qual destes � mais importante para um Mago?";
				next;
				if (select("INT","AGI","DES","VIT") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "2. Qual destes atributos n�o tem um ataque tipo \"Lan�as\"?";
				next;
				if (select("�gua","Terra","Fogo","Vento") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "3. Escolha qual n�o � relacionado a um Mago.";
				next;
				if (select("For�a f�sica fraca","Ataque � dist�ncia","Bom em vender coisas","Defesa m�gica alta") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "4. Qual � a cidade natal dos Magos?";
				next;
				if (select("Prontera","Morroc","Alberta","Geffen") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "5. Qual destas cartas n�o tem nada a ver com INT?";
				next;
				if (select("Ovo de Andre","Andre","Filhote Lobo do Deserto","Salgueiro Anci�o") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "6. Em que um Mago � bom comparado as outras classes?";
				next;
				if (select("Habilidade Vocal","Habilidade em Atua��o","Habilidades de Dan�a","Habilidades M�gicas") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "7. Qual � o b�nus de INT do n�vel de classe 40 para Magos?";
				next;
				if (select("8","7","6","5") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "8. Qual item um Mago n�o pode equipar?";
				next;
				if (select("Faca","Quepe","Sand�lias","Olho de Dullahan") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "9. Qual destes � o catalisador para fazer a Solu��o M�gica n�mero 3?";
				next;
				if (select("Gema Azul","Gema Vermelha","Gema Amarela","Sangue Escarlate") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "10. Qual destas cartas � irrelavante � Magica?";
				next;
				if (select("Carta Marduk","Carta Magn�lia","Carta Salgueiro","Carta Maya") == 2) {
					.@wizq += 1;
				}
				break;
			}
			mes "[Raulel]";
			mes "Muito bem respondeu todas as perguntas.";
			if (.@wizq == 8 || .@wizq == 9) {
				mes "Voc� n�o foi muito bem, mas dexarei que voc� passe no segundo teste.";
				next;
				mes "[Raulel]";
				mes "*ESPIRRO*";
				mes "N�o relaxe ainda, ainda h� o problema do Terceiro teste final.";
				mes "Eu aconselho voc� a descansar um pouco enquanto o Teste final � preparado.";
				mes "Voc� vai precisar.";
				wizardq = 4;
				if (wizardq2) { wizardq2 = 0; }
				changequest (9016,9017);
				close;
			} else if (.@wizq == 10) {
				wizardq = 4;
				if (wizardq2) { wizardq2 = 0; }
				changequest (9016,9017);
				mes "Muito bem, voc� passou o segundo teste.";
				mes "N�o foi feito em uma tentativa como a minha foi, mas eu vou deixar voc� passar...";
				next;
				mes "[Raulel]";
				mes "*ESPIRRO*";
				mes "N�o relaxe ainda, ainda h� o problema do Terceiro teste final.";
				mes "Eu aconselho voc� a descansar um pouco enquanto o Teste final � preparado.";
				mes "Voc� vai precisar.";
				close;
			} else {
				wizardq2 = 1;
				mes "Voc� � uma vergonha.";
				mes "Estude mais!";
				next;
				mes "[Raulel]";
				mes "*TOSSE*";
				mes "Realmente achou que poderia se tornar Bruxo em um n�vel mediocre de conhecimento como o seu?";
				mes "D� o fora!";
				close;
			}
		} else if (wizardq == 4) {
			mes "[Raulel]";
			mes "Ok, espero que tenha descansado o bastente.";
			mes "Ent�o vamos come�ar o �ltimo teste.";
			next;
			mes "[Raulel]";
			mes "Devo explicar um pouco sobre o �ltimo teste?";
			mes "� dif�cil, eu n�o vou mentir...";
			next;
			if (select("Conte-me sobre o teste","Come�ar agora") == 1) {
				mes "[Raulel]";
				mes "Muito bem, irei explicar.";
				mes "N�o importa quanto dif�cil esse teste possa parecer.";
				mes "Se fizer como eu digo, voc� vai poder acabar r�pido e f�cil.";
				next;
				mes "[Raulel]";
				mes "O teste final tem um total de 3 partes.";
				mes "A ordem � Sala da �gua, Sala da Terra, Sala do Fogo.";
				mes "Em cada sala, existem monstros do mesmo atributo.";
				next;
				mes "[Raulel]";
				mes "Voc� vai descobrir que os monstros v�o estar l� quando voc� entrar.";
				mes "Se voc� usar os ataques com os atributos certos, n�o ser� muito dif�cil.";
				next;
				mes "[Raulel]";
				mes "Uma que voc� tenha derrotado todos os monstros dentro do tempo dado na sala...";
				mes "Voc� ir� para a pr�xima sala.";
				next;
				mes "[Raulel]";
				mes "Depois que essas 3 salas estiverem limpas, o teste est� acabado.";
				mes "Voc� se tornar� um Bruxo que � controlado pelos poderes da Grande Magia!";
				mes "Depois disso...";
				mes "N�o h� retorno para a vida calma.";
				next;
				mes "[Raulel]";
				mes "Voc� parece assustad"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Sabe, ainda n�o � t�o tarde para voltar a sua vida calma.";
				mes "Se voc� quiser, posso te mandar para a cidade agora mesmo...";
				mes "O que acha?";
				next;
				if (select ("Vou desistir do teste","Continuar") == 1) {
					mes "[Raulel]";
					mes "Boa id�ia.";
					mes "Essa � a melhor escolha para voc�.";
					mes "Volte e viva uma vida tranquila.";
					mes "Magia superior � uma for�a que n�o pode ser manipulada por pessoas fracas.";
					close2;
					warp ("geffen",120,110);
					end;
				}
			}
			wizardq = 5;
			savepoint ("geffen",120,107);
			mes "[Raulel]";
			mes "Ent�o, como voc� deseja.";
			mes "Eu vou mandar voc� pra l� agora.";
			close2;
			warp ("job_wiz",57,154);
			end;
		} else if (wizardq == 5) {
			mes "[Raulel]";
			mes "Ent�o quer tentar de novo �?";
			next;
			mes "[Raulel]";
			mes "Ok, aqui vai uma proposta.";
			mes "J� que provavelmente n�o vai passar.";
			mes "Posso ver claramente o desejo da Grande Magia queimando em seus olhos...";
			mes "Me traga um ^3355FFPergaminho Desgastado^000000.";
			next;
			mes "[Raulel]";
			mes "Ent�o vou substituir esse teste por outro de conhecimento.";
			if (countitem(Worn_Out_Scroll)) {
				mes "O que me diz heim?";
				next;
				if (select ("Claro est� aqui o pergaminho","N�o, quero continuar") == 1) {
					delitem (Worn_Out_Scroll,1);
					mes "[Raulel]";
					mes "Ent�o voc� optou por essa ecolha, pois bem...";
					mes "Eu acho que posso continuar minha pesquisa com isso...";
					next;
					mes "[Raulel]";
					mes "Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para responder meu question�rio volte.";
					mes "Ser�o apenas perguntas pr�ticas e te�ricas que qualquer bruxo deve saber.";
					wizardq = 6;
					close;
				}
			} else {
				next;
				if (select ("Continuarei com o teste","Irei conseguir o item") == 2) {
					mes "[Raulel]";
					mes "Est� certo ent�o.";
					mes "Aguardo seu retorno.";
					close;
				}
			}
			mes "[Raulel]";
			mes "Bem, Eu vou te mandar para o local de teste agora.";
			close2;
			warp ("job_wiz",57,154);
			end;
		} else if (wizardq == 6) {
			mes "[Raulel]";
			mes "J� que n�o � capaz de concluir o o teste pr�tico!";
			mes "E me trouxe o pergaminho que precisava voc� pode escolher qual teste fazer.";
			next;
			if (select ("Quero fazer o teste pr�tico","Quero fazer o teste te�rico") == 1) {
				mes "[Raulel]";
				mes "Boa sorte ent�o.";
				mes "Vou te mandar para o local de teste agora.";
				close2;
				warp ("job_wiz",57,154);
				end;
			} else {
				mes "[Raulel]";
				mes "Bem, � melhor responder esses problemas se voc� planeja se tornar um Bruxo. Hahahahahahaha~";
				next;
				mes "[Raulel]";
				mes "1. Escolha o Monstros com o atributo diferente dos outros.";
				next;
				if (select("Louva-a-Deus","Cornutus","Giearth","Caramelo") == 2) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "2. Escolha o monstro que n�o � do tipo de pilhagem.";
				next;
				if (select("Yoyo","Magn�lia","Metaller","Zerom") == 4) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "3. Qual desses monstros n�o reconhece Conjura��es?";
				next;
				if (select("Marina","Vitata","Escorpi�o","Giearth") == 1) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "4. Escolha a magia que � a mais eficiente contra Esfera Marinha.";
				next;
				if (select("Lan�as de Gelo","Lan�as de Fogo","Rel�mpago","Petrificar") == 3) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "5. Escolha o monstro que pode se mover.";
				next;
				if (select("Hidra","Mandr�gora","Guardi�o da Floresta","Frilldora") == 4) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "Bem, s� s�o essas perguntas mesmo.";
				if (.@wizq2 != 5) {
					mes "E voc� falhou denovo!";
					mes "V� estudar mais!";
					next;
					mes "[Raulel]";
					mes "Voc� tem uma defici�ncia em algo...";
					mes "*ESPIRRO*...";
					mes "Algo como Intelig�ncia.";
					mes "� por isso que voc� continua falhando.";
					close;
				} else {
					mes "*TOSSE*";
					mes "Se voc� pode responder todas essas perguntas corretamente.";
					mes "Por que voc� n�o se sai bem em batalhas?";
					next;
					mes "[Raulel]";
					mes "Ent�o, com um pouco mais de esfor�o pode ser que consiga ser "+(Sex == SEX_MALE ? "um grande Bruxo":"uma grande Bruxa")+".";
					mes "Vou dizer a Catherine que voc� passou no teste final.";
					mes "Ent�o agora v�, j� perdir muito tempo com seus consecutivos fracassos.";
					wizardq = 7;
					changequest (9017,9018);
					close;
				}
			}
		} else if (wizardq == 7) {
			mes "[Raulel]";
			mes "Voc� n�o tem nada a tratar comigo que eu saiba.";
			next;
			mes "[Raulel]";
			mes "V�! V� e se torne o Bruxo se � o que voc� realmente quer.";
			close;
		}
	} else {
		if (BaseJob == Job_Wizard) {
			mes "[Raulel]";
			mes "*TOSSE*";
			mes "O que voc� quer?";
			mes "Se voc� � uma pessoa que usa magia, ent�o voc� precisa ter certeza que est� bem informado sobre isso.";
			next;
			mes "[Raulel]";
			mes "N�o viva desonestamente, ou seja mal-educado, ou ent�o um dia voc� vai ser pego numa magia que voc� n�o pode controlar, e BOOM, voc� morre!";
			mes "Se voc� n�o quer que isso aconteca, ent�o lembre como usar as magias corretamente!";
			next;
			mes "[Raulel]";
			mes "Voc� pode viver aleijado se ficar muito obcecado com a Magia.";
			close;
		} else {
			mes "[Bruxo]";
			mes "*ESPIRRO*";
			mes "*TOSSE*";
			next;
			mes "Oooowww...";
			mes "Meu corpo todo est� dolorido.";
			mes "Eu sinto como se estivesse preso num tubo de gelo!";
			next;
			mes "[Bruxo]";
			mes "O que voc� quer?!!";
			close;
		}
	}
}

// ------------------------------------------------------------------
job_wiz,50,165,4	script	Assistente da Arena#wizardq	8_F_GIRL,{
	mes "[Assistente da Arena]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � Arena de teste.";
	mes "Se voc� quiser fazer o teste final, por favor entre na sala de espera.";
	next;
	mes "[Assistente da Arena]";
	mes "Se alguem estiver fazendo o teste, por favor espere.";
	mes "Todas as informa��es do teste ser�o publicadas, e vai come�ar assim que o jogador anterior sair.";
	next;
	mes "[Assistente da Arena]";
	mes "Cada teste leva aproximadamente 5 a 10 minutos.";
	mes "Se quiser sair da arena, por favor deslogue.";
	close;

	OnInit:
	waitingroom ("Sala de Espera",20,strnpcinfo(NPC_NAME)+"::OnStartArena",1);
	enablewaitingroomevent;
	end;

	OnStartArena:
	killmonsterall (strnpcinfo(NPC_MAP));
	warpwaitingpc (strnpcinfo(NPC_MAP),114,169);
	donpcevent ("Room_of_Water#wizardq::OnEnable");
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
	monster (strnpcinfo(NPC_MAP),109,174,"Fen",1158,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),118,174,"Molusco",1074,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),109,165,"Vadon",1066,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),118,165,"Cornutus",1067,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),101,157,"Marina",1141,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),126,157,"Marin",1242,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),98,170,"Magnolia",1138,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonsterall (strnpcinfo(NPC_MAP));
	end;

	OnMyMobDead:
	--.MyMobs;
	if (.MyMobs < 1) {
		percentheal (100,100);
		mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" eliminou todos os Monstros.",bc_map);
		warp (strnpcinfo(NPC_MAP),116,97);
		donpcevent ("Room_of_Earth#wizardq::OnEnable");
		stopnpctimer;
	}
	end;

	OnTimer1000:
	mapannounce (strnpcinfo(NPC_MAP),"Sala da �gua; O teste agora vai continuar.",bc_map);
	end;

	OnTimer2000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo limite � de 3 minutos. N�s vamos iniciar o teste agora.",bc_map);
	end;

	OnTimer3000:
	mapannounce (strnpcinfo(NPC_MAP),"Por favor elimine todos os montros dentro do tempo estabelecido.",bc_map);
	end;

	OnTimer33000:
	mapannounce (strnpcinfo(NPC_MAP),"2 minutos e 30 segundos restantes.",bc_map);
	end;

	OnTimer63000:
	mapannounce (strnpcinfo(NPC_MAP),"2 minutos restantes.",bc_map);
	end;

	OnTimer93000:
	mapannounce (strnpcinfo(NPC_MAP),"1 minuto e 30 segundos restantes.",bc_map);
	end;

	OnTimer123000:
	mapannounce (strnpcinfo(NPC_MAP),"1 minuto restante.",bc_map);
	end;

	OnTimer153000:
	mapannounce (strnpcinfo(NPC_MAP),"30 segundos restantes.",bc_map);
	end;

	OnTimer173000:
	mapannounce (strnpcinfo(NPC_MAP),"10 segundos restantes.",bc_map);
	end;

	OnTimer183000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo acabou.",bc_map);
	areawarp (strnpcinfo(NPC_MAP),98,154, 129,185,"gef_tower",110,30);
	end;

	OnTimer184000:
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer185000:
	mapannounce (strnpcinfo(NPC_MAP),"Pr�ximo candidato, entre por favor.",bc_map);
	end;

	OnTimer186000:
	donpcevent ("Assistente da Arena#wizardq::OnStart");
	end;
}

// ------------------------------------------------------------------
job_wiz,1,3,1	script	Room_of_Earth#wizardq	1_F_01,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	.MyMobs = 7;
	monster (strnpcinfo(NPC_MAP),111,102,"Yoyo",1057,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),120,102,"Deniro",1105,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),111,102,"Caramelo",1103,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),120,93,"Giearth",1121,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),107,98,"P�-Grande",1060,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),124,98,"Guerreiro Orc",1023,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),104,86,"Vitata",1176,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonsterall (strnpcinfo(NPC_MAP));
	end;

	OnMyMobDead:
	--.MyMobs;
	if (.MyMobs < 1) {
		mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME) + " eliminou todos os monstros.",bc_map);
		percentheal (100,100);
		warp (strnpcinfo(NPC_MAP),46,99);
		donpcevent ("Room_of_Fire#wizardq::OnEnable");
		stopnpctimer;
	}
	end;

	OnTimer1000:
	mapannounce (strnpcinfo(NPC_MAP),"Sala da Terra; O teste agora vai continuar.",bc_map);
	end;

	OnTimer2000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo limite � de 3 minutos.",bc_map);
	end;

	OnTimer3000:
	mapannounce (strnpcinfo(NPC_MAP),"Elimie todos os monstros dentro do tempo dado.",bc_map);
	end;

	OnTimer33000:
	mapannounce (strnpcinfo(NPC_MAP),"2 minutos e 30 segundos restantes.",bc_map);
	end;

	OnTimer63000:
	mapannounce (strnpcinfo(NPC_MAP),"2 minutos restantes.",bc_map);
	end;

	OnTimer93000:
	mapannounce (strnpcinfo(NPC_MAP),"1 minuto e 30 segundos restantes.",bc_map);
	end;

	OnTimer123000:
	mapannounce (strnpcinfo(NPC_MAP),"1 minuto restante.",bc_map);
	end;

	OnTimer153000:
	mapannounce (strnpcinfo(NPC_MAP),"30 segundos restantes.",bc_map);
	end;

	OnTimer173000:
	mapannounce (strnpcinfo(NPC_MAP),"10 segundos restantes.",bc_map);
	end;

	OnTimer183000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo acabou.",bc_map);
	areawarp (strnpcinfo(NPC_MAP),100,82, 131,113,"gef_tower",110,30);
	end;

	OnTimer184000:
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer185000:
	mapannounce (strnpcinfo(NPC_MAP),"Pr�ximo candidato, entre por favor.",bc_map);
	end;

	OnTimer186000:
	donpcevent ("Assistente da Arena#wizardq::OnStart");
	end;
}

// ------------------------------------------------------------------
job_wiz,1,5,1	script	Room_of_Fire#wizardq	1_F_01,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	.MyMobs = 6;
	monster (strnpcinfo(NPC_MAP),33,110,"Goblin",1123,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),40,103,"Escorpi�o",1001,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),51,103,"Frilldora",1119,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),40,92,"PecoPeco",1019,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),51,92,"Salgueiro Anci�o",1033,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),37,89,"Metaller",1058,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonsterall (strnpcinfo(NPC_MAP));
	end;

	OnMyMobDead:
	--.MyMobs;
	if (.MyMobs < 1) {
		wizardq = 7;
		changequest (9017,9018);
		mapannounce (strnpcinfo(NPC_MAP),"Parab�ns, "+strcharinfo(PC_NAME)+". Voc� passou no teste.",bc_map);
		sleep(500);
		areawarp (strnpcinfo(NPC_MAP),30,82, 61,113,"gef_tower",110,30);
		donpcevent ("Assistente da Arena#wizardq::OnStart");
		stopnpctimer;
	}
	end;

	OnTimer1000:
	mapannounce (strnpcinfo(NPC_MAP),"Sala de Fogo. O teste agora vai continuar.",bc_map);
	end;

	OnTimer2000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo limite � de 3 minutos. N�s vamos come�ar o teste agora.",bc_map);
	end;

	OnTimer3000:
	mapannounce (strnpcinfo(NPC_MAP),"Elimine todos os montros no tempo dado.",bc_map);
	end;

	OnTimer33000:
	mapannounce (strnpcinfo(NPC_MAP),"2 minutos e 30 segundos restantes.",bc_map);
	end;

	OnTimer63000:
	mapannounce (strnpcinfo(NPC_MAP),"2 minutos restantes.",bc_map);
	end;

	OnTimer93000:
	mapannounce (strnpcinfo(NPC_MAP),"1 minuto e 30 segundos restantes.",bc_map);
	end;

	OnTimer123000:
	mapannounce (strnpcinfo(NPC_MAP),"1 minuto restante.",bc_map);
	end;

	OnTimer153000:
	mapannounce (strnpcinfo(NPC_MAP),"30 segundos restantes.",bc_map);
	end;

	OnTimer173000:
	mapannounce (strnpcinfo(NPC_MAP),"10 segundos restantes.",bc_map);
	end;

	OnTimer183000:
	mapannounce (strnpcinfo(NPC_MAP),"O Tempo acabou.",bc_map);
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer184000:
	areawarp (strnpcinfo(NPC_MAP),30,82, 61,113,"gef_tower",110,30);
	end;

	OnTimer185000:
	mapannounce (strnpcinfo(NPC_MAP),"Pr�ximo candidato, entre por favor.",bc_map);
	end;

	OnTimer186000:
	donpcevent ("Assistente da Arena#wizardq::OnStart");
	end;
}

// ------------------------------------------------------------------
gef_tower,107,36,4	script	Cachorro#wizardq	4_DOG01,{
	if (BaseJob == Job_Mage) {
		if (!wizardq) {
			cutin ("job_wizard_maria01",2);
			mes "[Cachorro]";
			mes "Ah...";
			mes "Eu sei o que voc� quer dizer.";
			mes "Voc� quer se tornar um Bruxo, certo?";
			next;
			mes "[Cachorro]";
			mes "V� falar com Catherine.";
			mes "Ela vai te ajudar.";
			next;
			mes "[Cachorro]";
			mes "Al�m disso, se voc� quiser saber algo sobre o teste, eu posso explicar.";
			next;
			switch (select("?!","Um Cachorro falante!...")) {
				case 1:
				mes "[Cachorro]";
				mes "...*late*...?";
				mes "O que �??";
				mes "Por que voc� est� olhando pra mim assim?!";
				mes "� a primeira vez que voc� v� um Cachorro falar?";
				next;
				mes "[Cachorro]";
				mes "*Late*";
				mes "N�o � normal voc� ver um cachorro falando eu suponho.";
				mes "...Sim eu acho que � uma vis�o rara...";
				next;
				mes "[Cachorro]";
				mes "Meu nome � \"Maria Splodofska\".";
				mes "Apenas me chame Maria.";
				next;
				cutin ("job_wizard_maria03",2);
				mes "[Maria]";
				mes "*Late*";
				mes "Bem, eu me tornei um cachorro porque...";
				mes "Eu estava ajudando meu namorado num experimento para o teste final dele em Gradua��o em M�gica.";
				mes "Ele acidentalmente me transformou num cachorro.";
				mes "Teoricamente, em algums meses a qu�mica vai acabar e eu vou voltar ao normal.";
				mes "Quando exatamente, n�o tenho id�ia.";
				close2;
				cutin ("",255);
				end;
				case 2:
				cutin ("job_wizard_maria02",2);
				mes "[Cachorro]";
				mes "*Late* *Late* *Late*";
				mes "N�o diga o �bvio!";
				mes "Certo, eu sei que sou um cachorro!";
				next;
				cutin "job_wizard_maria01",2;
				mes "[Cachorro]";
				mes "Meu nome � \"Maria Splodofska\".";
				mes "O pessoal me chama Maria.";
				mes "Eu ajudo pessoas como voc� que desejam se tornar um Bruxo.";
				next;
				cutin ("job_wizard_maria03",2);
				mes "[Cachorro]";
				mes "O motivo de eu ter me tornado um cachorro...";
				mes "Meu namorado estava fazendo experimentos para a Gradua��o em Magia dele.";
				mes "Acidentalmente ele me transformou em cachorro.";
				mes "Teoricamente, em alguns meses, a qu�mica vai acabar e eu vou voltar ao normal.";
				mes "Quando exatamente, n�o tenho id�ia.";
				close2;
				cutin ("",255);
				end;
			}
		} else if (wizardq == 1) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Voc� se inscreveu, e agora est� procurando pelos itens certo?";
			next;
			mes "[Maria]";
			mes "Mas j� que esse � apenas o primeiro teste, n�o dependa dos outros.";
			mes "Fa�a sozinho.";
			mes "Essa � a melhor maneira.";
			next;
			mes "[Maria]";
			mes "Pelo o que eu escutei, voc� tem que coletar gemas...";
			mes "Eu n�o posso te ajudar diretamente, mas eu posso te dar umas dicas.";
			next;
			mes "[Maria]";
			mes "Primeiro, para pegar Gemas vermelhas, v� aos esgotos de Prontera.";
			mes "Voc� pode obt�-las dos Besouros-ladr�es e dos Ovos de Besouro-ladr�o encontrados l�s.";
			next;
			mes "[Maria]";
			mes "Gemas Amarelas s�o f�ceis de achar no deserto.";
			mes "Condores, Pickys, e algums monstros como Golem soltam elas.";
			next;
			mes "[Maria]";
			mes "Para conseguir Gemas azuis.";
			mes "Tente ir na Ilha Byalan.";
			mes "Cornutus, Vadon, e monstros como Marte podem soltar essas gemas.";
			next;
			mes "[Maria]";
			mes "Mas � claro que voc� pode pegar Gemas azuis na Loja M�gica aqui na cidade...";
			mes "Mas, encontrar elas por si s� seria muito mais gratificante e �til no teste.";
			next;
			mes "[Maria]";
			mes "De qualquer jeito, fa�a seu melhor.";
			mes "Essa � a base de ser um Bruxo.";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq == 2) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Voc� parece perdido...";
			mes "Voc� se inscreveu, e agora voc� est� procurando pelos itens certo?";
			next;
			mes "[Maria]";
			mes "Mas j� que esse � apenas o primeiro teste, n�o dependa dos outros.";
			mes "Fa�a sozinho.";
			mes "Essa � a melhor maneira.";
			next;
			mes "[Maria]";
			mes "Pelo o que eu escutei, voc� tem que coletar pedras elementais...";
			mes "Eu n�o posso te ajudar diretamente, mas eu posso te dar umas dicas.";
			next;
			mes "[Maria]";
			mes "Bem, voc� pode encontrar Cristal Azul na Ilha Byalan.";
			mes "Cornutus, Kukre, Marina, Vadon...esses monstros soltam com frequ�ncia.";
			next;
			mes "[Maria]";
			mes "Voc� pode pegar Vida Verdejante dos monstros tipo inseto.";
			mes "Tente ca�ar monstros como Besouro-Chifre,Louva-a-Deus ou Vitata.";
			next;
			mes "[Maria]";
			mes "Sangue Escarlate.";
			mes "Voc� pode pegar um monte desses de...";
			mes "Salgueiro Anci�es, Metallers ou Escorpi�es encontrados no deserto.";
			next;
			mes "[Maria]";
			mes "Para Frescor do Vento.";
			mes "Zang�o, Percevejo, Chonchon de A�o.";
			mes "Se voc� tentar um pouco, voc� pode conseguir facilmente.";
			next;
			mes "[Maria]";
			mes "De qualquer jeito, fa�a seu melhor.";
			mes "Essa � a base de ser um Bruxo.";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "N�o fique relaxado apenas depois do primeiro teste.";
			mes "Fa�a seu melhor, porque voc� ainda tem dois testes para passar.";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq == 3) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "ZzzzZzzzZzzz...";
			next;
			cutin ("job_wizard_maria02",2);
			mes "[Maria]";
			mes "*wimper*...Blizadris...seu idiota...Zzz...";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq == 4) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Oh, voc� est� indo bem n�o �?";
			next;
			mes "[Maria]";
			mes "Bem, Fa�a seu melhor at� o final.";
			mes "Laurel est� esperando.";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq == 5 || wizardq == 6) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Voc� desistiu?";
			mes "Como voc� pode se tornar um bruxo com o cora��o fraco?";
			next;
			mes "[Maria]";
			mes "Voc� sabe que cada sala tem monstros do mesmo atributo...";
			mes "Se voc� � uma pessoa que lida com magia, voc� precisa saber sobre os diferentes tipos de magia.";
			next;
			mes "[Maria]";
			mes "Voc� tamb�m precisa aprender como contra-atacar monstros que usam habilidades.";
			mes "Sua melhor t�tica � atacar os monstros que est�o atacando voc� primeiro.";
			next;
			mes "[Maria]";
			mes "*Grrr* De qualquer maneira, Continue o teste.";
			mes "N�o tenha uma mente fraca, *au* e volte! *Late* *Late* agora mesmo! *BARK*";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq == 7) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Como eu pensava, sabia que voc� era capaz de fazer isso, eu podia cheirar isso em voc�!";
			mes "Agora eu posso te chamar de Bruxo.";
			next;
			mes "[Maria]";
			mes "Parab�ns.";
			mes "Sempre d� seu melhor em tudo, n�o importa o qu�.";
			close2;
			cutin ("",255);
			end;
		}
	} else {
		if (BaseJob == Job_Wizard) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Ao inv�s de ficar andando por aqui, n�o seria melhor testar o qu�o forte voc� ficou?";
			next;
			mes "[Maria]";
			mes "N�o esque�a que Bruxos crescem e melhoram seus poderes todos os dias.";
			close2;
			cutin ("",255);
			end;
		} else {
			mes "[Maria]";
			mes "..........";
			close;
		}
	}
}

