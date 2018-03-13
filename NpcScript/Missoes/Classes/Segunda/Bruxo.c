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
| - Info: Quest de Mudança de Classe para Buxo.                     |
\*-----------------------------------------------------------------*/

gef_tower,111,37,4	script	Bruxa#wizardq	1_F_GYPSY,{
	if (BaseJob == Job_Mage) {
		if (!wizardq) {
			mes "[Bruxa]";
			mes "Hã? O que você faz aqui em cima...?";
			mes "O que trouxe você aqui?";
			next;
			if (select("Eu quero me tornar um Bruxo.","Nada.") == 2) {
				mes "[Bruxa]";
				mes "Então você não tem nenhum assunto para tratar aqui.";
				close;
			} else {
				mes "[Bruxa]";
				mes "Humm...";
				mes "Bem, é claro que você quer se tornar um Bruxo.";
				mes "Senão você não subiria todas aquelas escadas até aqui, certo?";
				mes "Em todo caso, eu devo lhe dar as boas-vindas.";
				next;
				mes "[Bruxa]";
				mes "Meu nome é Catherine Medici.";
				next;
				mes "[Catherine]";
				mes "Muitas pessoas querem se tornar Bruxos.";
				mes "Mas apenas as fortes e as pacientes vão alcançar seus objetivos.";
				mes "Para se tornar um Bruxo, deve-se passar por tarefas difíceis.";
				next;
				mes "[Catherine]";
				mes "Também, apenas Magos que alcançaram o nível de classe 40 ou mais.";
				mes "Estão classificados para essas tarefas.";
				mes "Magos de nível mais baixo que esse não têm experiência suficiente com magia para se tornarem Bruxos...";
				next;
				mes "[Catherine]";
				mes "Para se tornar um Bruxo você deve cumprir 3 testes.";
				mes "1º teste, coletar itens mágicos.";
				mes "2º teste, teste escrito.";
				mes "O último é um teste prático de magia.";
				next;
				mes "[Catherine]";
				mes "Nós dispensamos aqueles que são Nível de classe 50, em um dos três testes.";
				next;
				if (JobLevel < 40) {
					mes "[Catherine]";
					mes "Mas você ainda tem o que aprender como mago.";
					next;
					mes "[Catherine]";
					mes "Não precisa se apressar, vá refletir e conhecer mais sobre o Mundo da Magia.";
					mes "Quando você estiver qualificad"+(Sex == SEX_MALE ? "o":"a")+".";
					mes "Com pelo menos \"Level 40 de Classe\" retorne.";
					close;
				} else {
					mes "[Catherine]";
					mes "Bom, eu vou dar mais informações quando você se inscrever no teste.";
					mes "Então... você quer se inscrever agora?";
					next;
					if (select("Sim, claro","Deixe-me pensar mais") == 2) {
						mes "[Catherine]";
						mes "Oh, ok então, não tenha pressa.";
						mes "Já que eu sempre estou aqui, aceitando inscrições...";
						close;
					} else {
						mes "[Catherine]";
						mes "Muito bem então, eu aceito sua inscrição.";
						mes "Seu nome é...";
						mes strcharinfo(PC_NAME)+", certo?";
						mes "Não estou certa, pronunciei corretamente?";
						next;
						mes "[Catherine]";
						mes "Se o Mago completar esses testes.";
						mes "É o bastante para nos provar o esforço que vai fazer para se tornar um Bruxo.";
						next;
						if (JobLevel != 50) {
							mes "[Catherine]";
							mes "Então, desde que eu tenha tudo que eu preciso.";
							mes "Vou lhe dar mais informações sobre o primeiro teste.";
							mes "Você pode memorizar ou escrever se quiser, não importa.";
							mes "Mas você deve se lembrar, com certeza.";
							next;
							mes "[Catherine]";
							mes "O primeiro teste é coletar itens mágicos.";
							mes "A parte mais importante é que você deve consegui-los sozinho.";
							next;
							mes "[Catherine]";
							mes "Os itens que você deve coletar são...";
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
							mes "Acha difícil?";
							mes "Não, qualquer um que queira se tornar um Bruxo deve ser capaz de coletar esses itens.";
							next;
							mes "[Catherine]";
							mes "Boa sorte.";
							mes "Vou esperar.";
							close;
						} else {
							mes "[Catherine]";
							mes "Hmm, você está no nível de classe 50!?";
							mes "Você deve ter se esforçado muito.";
							mes "Você vai se tornar um Bruxo muito poderoso, eu posso sentir isso em você.";
							next;
							mes "[Catherine]";
							mes "Ok. Você já passou o 1º teste então.";
							mes "Não fique muito relaxado, ainda restam 2 testes.";
							next;
							mes "[Catherine]";
							mes "Vá falar com o homem no canto dessa sala e ele lhe dará os testes restantes.";
							mes "Tenha cuidado.";
							mes "Nós perdemos muitos Magos devido a dificuldade dos exames.";
							wizardq = 3;
							setquest (9015);
							close;
						}
					}
				}
			}
		} else if (wizardq == 1) {
			mes "[Catherine]";
			mes "Deixe-me ver, você pegou todos os itens?";
			mes "Vamos checar...";
			next;
			if (countitem(Red_Gemstone) < 10 && countitem(Blue_Gemstone) < 10 && countitem(Yellow_Gemstone) < 10) {
				mes "[Catherine]";
				mes "Ei, eu acho que você não tem tudo ainda!";
				next;
				mes "[Catherine]";
				mes "Deve ter sido difícil vir até aqui em cima, mas volte e pegue todos os itens.";
				mes "A vida é curta o suficiente, então para de perder tempo e consiga os itens que eu te pedi.";
				next;
				mes "[Catherine]";
				mes "10 exemplares de ^3355FFGema Vermelha^000000,";
				mes "10 exemplares de ^3355FFGema Azul^000000,";
				mes "10 exemplares de ^3355FFGema Amarela^000000,";
				mes "Não esqueça dessa vez, e traga todos os itens, ok?...";
				close;
			} else {
				delitem (Red_Gemstone,10);
				delitem (Blue_Gemstone,10);
				delitem (Yellow_Gemstone,10);
				wizardq = 3;
				changequest (9013,9015);
				mes "[Catherine]";
				mes "Perfeito!";
				mes "Você pegou todos os itens!";
				mes "Esses itens serão bem úteis para nossa guilda.";
				next;
				mes "[Catherine]";
				mes "Muito bem!";
				mes "Você passou o primeiro teste.";
				mes "Mas ainda restam 2 testes, então não fique tão relaxado.";
				next;
				mes "[Catherine]";
				mes "Vá falar com o homem no canto para saber sobre os outros testes.";
				mes "Eles podem ser um pouco difíceis, então tome cuidado, eu não gostaria que você terminasse como a maioria dos Magos que vêm para esses exames... pobres almas na verdade, que descansem em paz. ~Hehehe.";
				close;
			}
		} else if (wizardq == 2) {
			mes "[Catherine]";
			mes "Você pegou todos os itens?";
			mes "Vamos ver se você tem os itens corretos...";
			next;
			if (countitem(Crystal_Blue) < 5 && countitem(Yellow_Live) < 5 && countitem(Boody_Red) < 5 && countitem(Wind_Of_Verdure) < 5) {
				mes "[Catherine]";
				mes "Ei, eu acho que você não tem tudo ainda!";
				next;
				mes "[Catherine]";
				mes "Deve ter sido difícil vir até aqui em cima, mas volte e pegue todos os itens.";
				mes "A vida é curta o suficiente, então para de perder tempo e consiga os itens que eu te pedi.";
				next;
				mes "[Catherine]";
				mes "5 exemplares de ^3355FFCristal Azul^000000,";
				mes "5 exemplares de ^3355FFVida Verdejante^000000,";
				mes "5 exemplares de ^3355FFSangue Escarlate^000000,";
				mes "5 exemplares de ^3355FFFrescor do Vento^000000,";
				mes "Não esqueça dessa vez e pegue os certos, certo?...";
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
				mes "Você pegou todos os itens!";
				mes "Esses itens serão bem úteis para nossa guilda.";
				next;
				mes "[Catherine]";
				mes "Perfeito!";
				mes "Você pegou todos os itens!";
				mes "Esses itens serão bem úteis para nossa guilda.";
				next;
				mes "[Catherine]";
				mes "Muito bem!";
				mes "Você passou o primeiro teste.";
				mes "Mas ainda restam 2 testes, então não fique tão relaxado.";
				next;
				mes "[Catherine]";
				mes "Vá falar com o homem no canto para saber sobre os outros testes.";
				mes "Eles podem ser um pouco difíceis, então tome cuidado, eu não gostaria que você terminasse como a maioria dos Magos que vêm para esses exames... pobres almas na verdade, que descansem em paz. ~Hehehe.";
				close;
			}
		} else if (wizardq == 3) {
			mes "[Catherine]";
			mes "O que foi?";
			mes "Você ainda não foi falar com o homem ali no canto?";
			mes "Você não vai se tornar um Bruxo só trazendo os itens que eu pedi...";
			next;
			mes "[Catherine]";
			mes "Você apenas pode se tornar um Bruxo depois que passar nos outros 2 testes.";
			mes "Estou esperando completar-los, então vá.";
			close;
		} else if (wizardq == 4) {
			mes "[Catherine]";
			mes "Eu ouvi tudo.";
			mes "Muito bem em responder todas aquelas perguntas.";
			next;
			mes "[Catherine]";
			mes "Você ainda tem mais um teste, certo?";
			mes "Apenas mais um pouco e você será qualificad"+(Sex == SEX_MALE ? "o":"a")+" para se tornar Bruxo.";
			close;
		} else if (wizardq == 5 || wizardq == 6) {
			mes "[Catherine]";
			mes "O que houve?";
			mes "*suspiro*....";
			next;
			mes "[Catherine]";
			if (Sex == SEX_MALE) {
				mes "Com certeza você é um Mago, mas como um cara pode ser tão fraco?!";
				mes "Bom, ao menos você ainda está vivo.";
				mes "Vá e consiga dessa vez.";
			} else {
				mes "Não tente parecer fraca só porque é uma garota.";
				mes "Olhe para mim!";
				mes "Eu consegui, e você também pode.";
				next;
				mes "[Catherine]";
				mes "Eu concordo que é difícil, mas não ao ponto de desistir.";
				mes "Você deve encontrar a força e a paciência para passar naquele teste!";
			}
			next;
			mes "[Catherine]";
			mes "Então, se esforce...";
			close;
		} else if (wizardq == 7) {
			if (SkillPoint) {
				mes "[Catherine]";
				mes "Você acabou com todos os testes?";
				mes "Oh, me parece que você têm algums pontos de habilidades sobrando.";
				mes "Aprenda algumas outras habilidades com seus pontos restantes, e então venha falar comigo de novo.";
				close;
			} else {
				mes "[Catherine]";
				mes "Parabéns, Parabéns, Parabéns!!";
				next;
				mes "[Catherine]";
				mes "Bom, não precisamos esperar, parabenizo você.";
				mes "Eu considero você "+(Sex == SEX_MALE ? "um Bruxo":"uma Bruxa")+".";
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
			mes "Desde que você se tornou um Bruxo, você não tem mais negócios comigo, tem...?";
			mes "Agora, com licença.";
			close;
		} else {
			mes "[Bruxa]";
			mes "Hã? O que traz você a um lugar como esse...?";
			mes "Se não tiver nenhum assunto específico, saia imediatamente.";
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
			mes "Eu não sei quem é você ou o que você faz.";
			mes "Mas eu não tenho nada a tratar com você.";
			next;
			mes "[Bruxo]";
			mes "Vá embora! Saia!";
			close;
		} else if (wizardq == 1 || wizardq == 2) {
			mes "[Bruxo]";
			mes "Você quer se tornar um Bruxo?!";
			next;
			mes "[Bruxo]";
			mes "*ESPIRRO*";
			mes "Se você vivesse como está, tudo o quê tinha que fazer era caçar um pouco e viver a vida fácil...";
			next;
			mes "[Bruxo]";
			mes "*TOSSE*";
			mes "Vamos ver de que maneira você vive como um Bruxo.";
			close;
		} else if (wizardq == 3) {
			if (!wizardq2) {
				mes "[Bruxo]";
				mes "*TOSSE*";
				mes "Você deve ter passado o primeiro teste.";
				mes "Ok, eu sou o Bruxo responsável pelos seus testes de agora em diante.";
				mes "Meu nome é \"Raulel Asparagus\".";
				next;
				mes "[Raulel]";
				mes "*ESPIRRO*";
				mes "Ainda não é tão tarde, não seria melhor voltar para cidade e aproveitar a vida pacata?";
				next;
				mes "[Raulel]";
				mes "Você não sabe o quão perigoso é lidar com Magia.";
				next;
				if (select("Desistir do teste","Continuar teste") == 1) {
					mes "[Raulel]";
					mes "*ESPIRRO*";
					mes "Boa escolha...";
					mes "*TOSSE*";
					mes "Melhor nem sonhar em como ser um Bruxo.";
					mes "Maa...Maa...*ESPIRRO*";
					mes "Magia não foi feita para Humanos usarem!";
					next;
					mes "[Raulel]";
					mes "Deixe o topo dessa torre calmamente e nem olhe para trás.";
					mes "Apenas viva pacificamente com os poderes que você tem agora.";
					close;
				} else {
					mes "[Raulel]";
					mes "*espirro*";
					mes "Agora tem um louco aqui!";
					mes "Bem então, deixe-me ver o quão bom você é.";
					mes "*TOSSE*";
					mes "Eu quero ver isso com meus próprios olhos!";
					next;
					mes "[Raulel]";
					mes "*ESPIRRO*";
					mes "Então vamos começar o teste!";
					mes "Se você não responder todas elas corretamente.";
					next;
					mes "[Raulel]";
					mes "Eu vou fazer 10 perguntas então me responda corretamente.";
					mes "Se responder alguma errada, você não passa e eu não vou te dizer qual é!";
					if (questprogress(9015)) { changequest (9015,9016); }
				}
			} else {
				mes "[Raulel]";
				mes "Você está tão desesperad"+(Sex == SEX_MALE ? "o":"a")+" assim?";
				mes "*ESPIRRO*";
				next;
				mes "[Raulel]";
				mes "Já que você não quer viver uma vida pacífica e estável, vou te dar outra chance...";
				next;
				mes "[Raulel]";
				mes "Se você errar apenas uma questão, então desista.";
				mes "Você não terá nenhum talento sendo Bruxo!";
			}
			next;
			mes "[Raulel]";
			mes "*TOSSE* então vamos às perguntas!";
			next;
			switch(rand(3)) {
				case 1:
				mes "[Raulel]";
				mes "1. Qual destes não é necessário para aprender barreira de fogo?";
				next;
				if (select("Lanças de Fogo","Bola de Fogo","Chama Reveladora","Ataque Espiritual") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "2. Sem importar o atributo anterior.";
				mes "Qual o atributo final do monstro quando você conjura Rajada Congelante nele?";
				next;
				if (select("Água","Terra","Fogo","Vento") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "3. Quando você domina completamente Ataque Espiritual.";
				mes "Qual é a taxa de aumento no M-ATK usando essa magia?";
				next;
				if (select("1,6 vezes","1,7 vezes","2 vezes","20 vezes") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "4. Que item você precisa para conjurar Petrificar?";
				next;
				if (select("Sangue Escarlate","Gema Azul","Gema Amarela","Gema Vermelha") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "5. Qual destes não é requerido para dominar Escudo Mágico?";
				next;
				if (select("Ataque Espiritual","Espiritos Anciões","Aumentar Recuperação de SP","Escudo Mágico") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "6. Sem o bônus de INT.";
				mes "Qual a quantidade de SP recperada a cada 10 segundos quando você aprendeu Aumentar Recuperação de SP Lv 7?";
				next;
				if (select("14","21","28","35") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "7. Usando Proteção Arcana, quando você tem 50% do seu SP restante.";
				mes "Quanto de SP é usado ao receber dano, e qual é a porcentagem de dano reduzido?";
				next;
				if (select("Dano 18%, SP 1.5%","Dano 18%, SP 2%","Dano 24%, SP 1.5%","Dano 24%, SP 2%") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "8. Qual é o SP consumido e quantas vezes você pode evitar ataques usando Escudo Mágico Lv 6?";
				next;
				if (select("SP 40, 6 vezes","SP 35, 6 vezes","SP 40, 7 vezes","SP 35, 7 vezes") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "9. Qual o SP necessário para usar Tempestade de Raios Lv 10?";
				next;
				if (select("84","74","64","54") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "10. Qual habilidade é mais útil para caçar na Caverna Byalan?";
				next;
				if (select("Relâmpago","Lanças de Fogo","Lanças de Gelo","Chama Reveladora") == 1) {
					.@wizq += 1;
				}
				break;
				case 2:
				mes "[Raulel]";
				mes "1. De que monstro você pode obter Vembrassa com Slot?";
				next;
				if (select("Besouro Ladrão","PecoPeco","Pupa","Kobold (Marreta)") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "2. Qual destes é o monstro mais fácil para um Mago de baixo nível matar?";
				next;
				if (select("Flora","Giearth","Golem","Névoa") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "3. Qual destes monstros não são imunes a Petrificar?";
				next;
				if (select("Salgueiro Ancião","Druida Maligno","Magnólia","Cavalo-Marinho") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "4. Quando atacar um monstro de atributo água Lv 3 com uma arma de atributo vento.";
				mes "Qual será a porcentagem do dano?";
				next;
				if (select("125%","150%","175%","200%") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "5. Se um Filhote de Lobo do Deserto e um Familiar lutassem, qual dos dois ganharia?";
				next;
				if (select("Filhote de Lobo do Deserto","Familiar","Nenhum dos dois","Eu não sei") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "6. Qual destes não podem ser domesticados?";
				next;
				if (select("Poporing","Sapo de Rodda","Fumacento","Esporo Venenoso") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "7. Escolha o monstro que é fraco contra o atributo Fogo.";
				next;
				if (select("Golbin da Faca","Goblin da Maça","Morningstar Goblin","Goblin da Marreta") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "8. Qual destes tem maior defesa?";
				next;
				if (select("Besouro-Chifre","Chonchon","Andre","Caramelo") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "9. Escolha o monstro que é de uma espécie diferente.";
				next;
				if (select("Poring","Mastering","Ghostring","Esporo") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "10. Qual destes não é um Morto-Vivo?";
				next;
				if (select("Drake","Megalodon","Deviace","Khalitzburg") == 3) {
					.@wizq += 1;
				}
				break;
				default:
				mes "[Raulel]";
				mes "1. Qual destes é mais importante para um Mago?";
				next;
				if (select("INT","AGI","DES","VIT") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "2. Qual destes atributos não tem um ataque tipo \"Lanças\"?";
				next;
				if (select("Água","Terra","Fogo","Vento") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "3. Escolha qual não é relacionado a um Mago.";
				next;
				if (select("Força física fraca","Ataque à distância","Bom em vender coisas","Defesa mágica alta") == 3) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "4. Qual é a cidade natal dos Magos?";
				next;
				if (select("Prontera","Morroc","Alberta","Geffen") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "5. Qual destas cartas não tem nada a ver com INT?";
				next;
				if (select("Ovo de Andre","Andre","Filhote Lobo do Deserto","Salgueiro Ancião") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "6. Em que um Mago é bom comparado as outras classes?";
				next;
				if (select("Habilidade Vocal","Habilidade em Atuação","Habilidades de Dança","Habilidades Mágicas") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "7. Qual é o bônus de INT do nível de classe 40 para Magos?";
				next;
				if (select("8","7","6","5") == 4) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "8. Qual item um Mago não pode equipar?";
				next;
				if (select("Faca","Quepe","Sandálias","Olho de Dullahan") == 2) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "9. Qual destes é o catalisador para fazer a Solução Mágica número 3?";
				next;
				if (select("Gema Azul","Gema Vermelha","Gema Amarela","Sangue Escarlate") == 1) {
					.@wizq += 1;
				}
				mes "[Raulel]";
				mes "10. Qual destas cartas é irrelavante à Magica?";
				next;
				if (select("Carta Marduk","Carta Magnólia","Carta Salgueiro","Carta Maya") == 2) {
					.@wizq += 1;
				}
				break;
			}
			mes "[Raulel]";
			mes "Muito bem respondeu todas as perguntas.";
			if (.@wizq == 8 || .@wizq == 9) {
				mes "Você não foi muito bem, mas dexarei que você passe no segundo teste.";
				next;
				mes "[Raulel]";
				mes "*ESPIRRO*";
				mes "Não relaxe ainda, ainda há o problema do Terceiro teste final.";
				mes "Eu aconselho você a descansar um pouco enquanto o Teste final é preparado.";
				mes "Você vai precisar.";
				wizardq = 4;
				if (wizardq2) { wizardq2 = 0; }
				changequest (9016,9017);
				close;
			} else if (.@wizq == 10) {
				wizardq = 4;
				if (wizardq2) { wizardq2 = 0; }
				changequest (9016,9017);
				mes "Muito bem, você passou o segundo teste.";
				mes "Não foi feito em uma tentativa como a minha foi, mas eu vou deixar você passar...";
				next;
				mes "[Raulel]";
				mes "*ESPIRRO*";
				mes "Não relaxe ainda, ainda há o problema do Terceiro teste final.";
				mes "Eu aconselho você a descansar um pouco enquanto o Teste final é preparado.";
				mes "Você vai precisar.";
				close;
			} else {
				wizardq2 = 1;
				mes "Você é uma vergonha.";
				mes "Estude mais!";
				next;
				mes "[Raulel]";
				mes "*TOSSE*";
				mes "Realmente achou que poderia se tornar Bruxo em um nível mediocre de conhecimento como o seu?";
				mes "Dê o fora!";
				close;
			}
		} else if (wizardq == 4) {
			mes "[Raulel]";
			mes "Ok, espero que tenha descansado o bastente.";
			mes "Então vamos começar o último teste.";
			next;
			mes "[Raulel]";
			mes "Devo explicar um pouco sobre o último teste?";
			mes "É difícil, eu não vou mentir...";
			next;
			if (select("Conte-me sobre o teste","Começar agora") == 1) {
				mes "[Raulel]";
				mes "Muito bem, irei explicar.";
				mes "Não importa quanto difícil esse teste possa parecer.";
				mes "Se fizer como eu digo, você vai poder acabar rápido e fácil.";
				next;
				mes "[Raulel]";
				mes "O teste final tem um total de 3 partes.";
				mes "A ordem é Sala da Água, Sala da Terra, Sala do Fogo.";
				mes "Em cada sala, existem monstros do mesmo atributo.";
				next;
				mes "[Raulel]";
				mes "Você vai descobrir que os monstros vão estar lá quando você entrar.";
				mes "Se você usar os ataques com os atributos certos, não será muito difícil.";
				next;
				mes "[Raulel]";
				mes "Uma que você tenha derrotado todos os monstros dentro do tempo dado na sala...";
				mes "Você irá para a próxima sala.";
				next;
				mes "[Raulel]";
				mes "Depois que essas 3 salas estiverem limpas, o teste está acabado.";
				mes "Você se tornará um Bruxo que é controlado pelos poderes da Grande Magia!";
				mes "Depois disso...";
				mes "Não há retorno para a vida calma.";
				next;
				mes "[Raulel]";
				mes "Você parece assustad"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Sabe, ainda não é tão tarde para voltar a sua vida calma.";
				mes "Se você quiser, posso te mandar para a cidade agora mesmo...";
				mes "O que acha?";
				next;
				if (select ("Vou desistir do teste","Continuar") == 1) {
					mes "[Raulel]";
					mes "Boa idéia.";
					mes "Essa é a melhor escolha para você.";
					mes "Volte e viva uma vida tranquila.";
					mes "Magia superior é uma força que não pode ser manipulada por pessoas fracas.";
					close2;
					warp ("geffen",120,110);
					end;
				}
			}
			wizardq = 5;
			savepoint ("geffen",120,107);
			mes "[Raulel]";
			mes "Então, como você deseja.";
			mes "Eu vou mandar você pra lá agora.";
			close2;
			warp ("job_wiz",57,154);
			end;
		} else if (wizardq == 5) {
			mes "[Raulel]";
			mes "Então quer tentar de novo é?";
			next;
			mes "[Raulel]";
			mes "Ok, aqui vai uma proposta.";
			mes "Já que provavelmente não vai passar.";
			mes "Posso ver claramente o desejo da Grande Magia queimando em seus olhos...";
			mes "Me traga um ^3355FFPergaminho Desgastado^000000.";
			next;
			mes "[Raulel]";
			mes "Então vou substituir esse teste por outro de conhecimento.";
			if (countitem(Worn_Out_Scroll)) {
				mes "O que me diz heim?";
				next;
				if (select ("Claro está aqui o pergaminho","Não, quero continuar") == 1) {
					delitem (Worn_Out_Scroll,1);
					mes "[Raulel]";
					mes "Então você optou por essa ecolha, pois bem...";
					mes "Eu acho que posso continuar minha pesquisa com isso...";
					next;
					mes "[Raulel]";
					mes "Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para responder meu questionário volte.";
					mes "Serão apenas perguntas práticas e teóricas que qualquer bruxo deve saber.";
					wizardq = 6;
					close;
				}
			} else {
				next;
				if (select ("Continuarei com o teste","Irei conseguir o item") == 2) {
					mes "[Raulel]";
					mes "Está certo então.";
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
			mes "Já que não é capaz de concluir o o teste prático!";
			mes "E me trouxe o pergaminho que precisava você pode escolher qual teste fazer.";
			next;
			if (select ("Quero fazer o teste prático","Quero fazer o teste teórico") == 1) {
				mes "[Raulel]";
				mes "Boa sorte então.";
				mes "Vou te mandar para o local de teste agora.";
				close2;
				warp ("job_wiz",57,154);
				end;
			} else {
				mes "[Raulel]";
				mes "Bem, é melhor responder esses problemas se você planeja se tornar um Bruxo. Hahahahahahaha~";
				next;
				mes "[Raulel]";
				mes "1. Escolha o Monstros com o atributo diferente dos outros.";
				next;
				if (select("Louva-a-Deus","Cornutus","Giearth","Caramelo") == 2) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "2. Escolha o monstro que não é do tipo de pilhagem.";
				next;
				if (select("Yoyo","Magnólia","Metaller","Zerom") == 4) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "3. Qual desses monstros não reconhece Conjurações?";
				next;
				if (select("Marina","Vitata","Escorpião","Giearth") == 1) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "4. Escolha a magia que é a mais eficiente contra Esfera Marinha.";
				next;
				if (select("Lanças de Gelo","Lanças de Fogo","Relâmpago","Petrificar") == 3) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "5. Escolha o monstro que pode se mover.";
				next;
				if (select("Hidra","Mandrágora","Guardião da Floresta","Frilldora") == 4) {
					.@wizq2 += 1;
				}
				mes "[Raulel]";
				mes "Bem, só são essas perguntas mesmo.";
				if (.@wizq2 != 5) {
					mes "E você falhou denovo!";
					mes "Vá estudar mais!";
					next;
					mes "[Raulel]";
					mes "Você tem uma deficiência em algo...";
					mes "*ESPIRRO*...";
					mes "Algo como Inteligência.";
					mes "É por isso que você continua falhando.";
					close;
				} else {
					mes "*TOSSE*";
					mes "Se você pode responder todas essas perguntas corretamente.";
					mes "Por que você não se sai bem em batalhas?";
					next;
					mes "[Raulel]";
					mes "Então, com um pouco mais de esforço pode ser que consiga ser "+(Sex == SEX_MALE ? "um grande Bruxo":"uma grande Bruxa")+".";
					mes "Vou dizer a Catherine que você passou no teste final.";
					mes "Então agora vá, já perdir muito tempo com seus consecutivos fracassos.";
					wizardq = 7;
					changequest (9017,9018);
					close;
				}
			}
		} else if (wizardq == 7) {
			mes "[Raulel]";
			mes "Você não tem nada a tratar comigo que eu saiba.";
			next;
			mes "[Raulel]";
			mes "Vá! Vá e se torne o Bruxo se é o que você realmente quer.";
			close;
		}
	} else {
		if (BaseJob == Job_Wizard) {
			mes "[Raulel]";
			mes "*TOSSE*";
			mes "O que você quer?";
			mes "Se você é uma pessoa que usa magia, então você precisa ter certeza que está bem informado sobre isso.";
			next;
			mes "[Raulel]";
			mes "Não viva desonestamente, ou seja mal-educado, ou então um dia você vai ser pego numa magia que você não pode controlar, e BOOM, você morre!";
			mes "Se você não quer que isso aconteca, então lembre como usar as magias corretamente!";
			next;
			mes "[Raulel]";
			mes "Você pode viver aleijado se ficar muito obcecado com a Magia.";
			close;
		} else {
			mes "[Bruxo]";
			mes "*ESPIRRO*";
			mes "*TOSSE*";
			next;
			mes "Oooowww...";
			mes "Meu corpo todo está dolorido.";
			mes "Eu sinto como se estivesse preso num tubo de gelo!";
			next;
			mes "[Bruxo]";
			mes "O que você quer?!!";
			close;
		}
	}
}

// ------------------------------------------------------------------
job_wiz,50,165,4	script	Assistente da Arena#wizardq	8_F_GIRL,{
	mes "[Assistente da Arena]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à Arena de teste.";
	mes "Se você quiser fazer o teste final, por favor entre na sala de espera.";
	next;
	mes "[Assistente da Arena]";
	mes "Se alguem estiver fazendo o teste, por favor espere.";
	mes "Todas as informações do teste serão publicadas, e vai começar assim que o jogador anterior sair.";
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
	mapannounce (strnpcinfo(NPC_MAP),"Sala da Água; O teste agora vai continuar.",bc_map);
	end;

	OnTimer2000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo limite é de 3 minutos. Nós vamos iniciar o teste agora.",bc_map);
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
	mapannounce (strnpcinfo(NPC_MAP),"Próximo candidato, entre por favor.",bc_map);
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
	monster (strnpcinfo(NPC_MAP),107,98,"Pé-Grande",1060,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
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
	mapannounce (strnpcinfo(NPC_MAP),"O tempo limite é de 3 minutos.",bc_map);
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
	mapannounce (strnpcinfo(NPC_MAP),"Próximo candidato, entre por favor.",bc_map);
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
	monster (strnpcinfo(NPC_MAP),40,103,"Escorpião",1001,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),51,103,"Frilldora",1119,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),40,92,"PecoPeco",1019,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster (strnpcinfo(NPC_MAP),51,92,"Salgueiro Ancião",1033,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
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
		mapannounce (strnpcinfo(NPC_MAP),"Parabéns, "+strcharinfo(PC_NAME)+". Você passou no teste.",bc_map);
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
	mapannounce (strnpcinfo(NPC_MAP),"O tempo limite é de 3 minutos. Nós vamos começar o teste agora.",bc_map);
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
	mapannounce (strnpcinfo(NPC_MAP),"Próximo candidato, entre por favor.",bc_map);
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
			mes "Eu sei o que você quer dizer.";
			mes "Você quer se tornar um Bruxo, certo?";
			next;
			mes "[Cachorro]";
			mes "Vá falar com Catherine.";
			mes "Ela vai te ajudar.";
			next;
			mes "[Cachorro]";
			mes "Além disso, se você quiser saber algo sobre o teste, eu posso explicar.";
			next;
			switch (select("?!","Um Cachorro falante!...")) {
				case 1:
				mes "[Cachorro]";
				mes "...*late*...?";
				mes "O que é??";
				mes "Por que você está olhando pra mim assim?!";
				mes "É a primeira vez que você vê um Cachorro falar?";
				next;
				mes "[Cachorro]";
				mes "*Late*";
				mes "Não é normal você ver um cachorro falando eu suponho.";
				mes "...Sim eu acho que é uma visão rara...";
				next;
				mes "[Cachorro]";
				mes "Meu nome é \"Maria Splodofska\".";
				mes "Apenas me chame Maria.";
				next;
				cutin ("job_wizard_maria03",2);
				mes "[Maria]";
				mes "*Late*";
				mes "Bem, eu me tornei um cachorro porque...";
				mes "Eu estava ajudando meu namorado num experimento para o teste final dele em Graduação em Mágica.";
				mes "Ele acidentalmente me transformou num cachorro.";
				mes "Teoricamente, em algums meses a química vai acabar e eu vou voltar ao normal.";
				mes "Quando exatamente, não tenho idéia.";
				close2;
				cutin ("",255);
				end;
				case 2:
				cutin ("job_wizard_maria02",2);
				mes "[Cachorro]";
				mes "*Late* *Late* *Late*";
				mes "Não diga o óbvio!";
				mes "Certo, eu sei que sou um cachorro!";
				next;
				cutin "job_wizard_maria01",2;
				mes "[Cachorro]";
				mes "Meu nome é \"Maria Splodofska\".";
				mes "O pessoal me chama Maria.";
				mes "Eu ajudo pessoas como você que desejam se tornar um Bruxo.";
				next;
				cutin ("job_wizard_maria03",2);
				mes "[Cachorro]";
				mes "O motivo de eu ter me tornado um cachorro...";
				mes "Meu namorado estava fazendo experimentos para a Graduação em Magia dele.";
				mes "Acidentalmente ele me transformou em cachorro.";
				mes "Teoricamente, em alguns meses, a química vai acabar e eu vou voltar ao normal.";
				mes "Quando exatamente, não tenho idéia.";
				close2;
				cutin ("",255);
				end;
			}
		} else if (wizardq == 1) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Você se inscreveu, e agora está procurando pelos itens certo?";
			next;
			mes "[Maria]";
			mes "Mas já que esse é apenas o primeiro teste, não dependa dos outros.";
			mes "Faça sozinho.";
			mes "Essa é a melhor maneira.";
			next;
			mes "[Maria]";
			mes "Pelo o que eu escutei, você tem que coletar gemas...";
			mes "Eu não posso te ajudar diretamente, mas eu posso te dar umas dicas.";
			next;
			mes "[Maria]";
			mes "Primeiro, para pegar Gemas vermelhas, vá aos esgotos de Prontera.";
			mes "Você pode obtê-las dos Besouros-ladrões e dos Ovos de Besouro-ladrão encontrados lás.";
			next;
			mes "[Maria]";
			mes "Gemas Amarelas são fáceis de achar no deserto.";
			mes "Condores, Pickys, e algums monstros como Golem soltam elas.";
			next;
			mes "[Maria]";
			mes "Para conseguir Gemas azuis.";
			mes "Tente ir na Ilha Byalan.";
			mes "Cornutus, Vadon, e monstros como Marte podem soltar essas gemas.";
			next;
			mes "[Maria]";
			mes "Mas é claro que você pode pegar Gemas azuis na Loja Mágica aqui na cidade...";
			mes "Mas, encontrar elas por si só seria muito mais gratificante e útil no teste.";
			next;
			mes "[Maria]";
			mes "De qualquer jeito, faça seu melhor.";
			mes "Essa é a base de ser um Bruxo.";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq == 2) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Você parece perdido...";
			mes "Você se inscreveu, e agora você está procurando pelos itens certo?";
			next;
			mes "[Maria]";
			mes "Mas já que esse é apenas o primeiro teste, não dependa dos outros.";
			mes "Faça sozinho.";
			mes "Essa é a melhor maneira.";
			next;
			mes "[Maria]";
			mes "Pelo o que eu escutei, você tem que coletar pedras elementais...";
			mes "Eu não posso te ajudar diretamente, mas eu posso te dar umas dicas.";
			next;
			mes "[Maria]";
			mes "Bem, você pode encontrar Cristal Azul na Ilha Byalan.";
			mes "Cornutus, Kukre, Marina, Vadon...esses monstros soltam com frequência.";
			next;
			mes "[Maria]";
			mes "Você pode pegar Vida Verdejante dos monstros tipo inseto.";
			mes "Tente caçar monstros como Besouro-Chifre,Louva-a-Deus ou Vitata.";
			next;
			mes "[Maria]";
			mes "Sangue Escarlate.";
			mes "Você pode pegar um monte desses de...";
			mes "Salgueiro Anciões, Metallers ou Escorpiões encontrados no deserto.";
			next;
			mes "[Maria]";
			mes "Para Frescor do Vento.";
			mes "Zangão, Percevejo, Chonchon de Aço.";
			mes "Se você tentar um pouco, você pode conseguir facilmente.";
			next;
			mes "[Maria]";
			mes "De qualquer jeito, faça seu melhor.";
			mes "Essa é a base de ser um Bruxo.";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Não fique relaxado apenas depois do primeiro teste.";
			mes "Faça seu melhor, porque você ainda tem dois testes para passar.";
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
			mes "Oh, você está indo bem não é?";
			next;
			mes "[Maria]";
			mes "Bem, Faça seu melhor até o final.";
			mes "Laurel está esperando.";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq == 5 || wizardq == 6) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Você desistiu?";
			mes "Como você pode se tornar um bruxo com o coração fraco?";
			next;
			mes "[Maria]";
			mes "Você sabe que cada sala tem monstros do mesmo atributo...";
			mes "Se você é uma pessoa que lida com magia, você precisa saber sobre os diferentes tipos de magia.";
			next;
			mes "[Maria]";
			mes "Você também precisa aprender como contra-atacar monstros que usam habilidades.";
			mes "Sua melhor tática é atacar os monstros que estão atacando você primeiro.";
			next;
			mes "[Maria]";
			mes "*Grrr* De qualquer maneira, Continue o teste.";
			mes "Não tenha uma mente fraca, *au* e volte! *Late* *Late* agora mesmo! *BARK*";
			close2;
			cutin ("",255);
			end;
		} else if (wizardq == 7) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Como eu pensava, sabia que você era capaz de fazer isso, eu podia cheirar isso em você!";
			mes "Agora eu posso te chamar de Bruxo.";
			next;
			mes "[Maria]";
			mes "Parabéns.";
			mes "Sempre dê seu melhor em tudo, não importa o quê.";
			close2;
			cutin ("",255);
			end;
		}
	} else {
		if (BaseJob == Job_Wizard) {
			cutin ("job_wizard_maria01",2);
			mes "[Maria]";
			mes "Ao invés de ficar andando por aqui, não seria melhor testar o quão forte você ficou?";
			next;
			mes "[Maria]";
			mes "Não esqueça que Bruxos crescem e melhoram seus poderes todos os dias.";
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

