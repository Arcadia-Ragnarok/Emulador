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
| - Copyright: Spell Master (02/09/2017)                            |
| - Info: Quest de mudança de Classe para Ferreiro.                 |
\*-----------------------------------------------------------------*/

ein_in01,18,28,4	script	Ferreiro#blacksmithq	4_M_JOB_BLACKSMITH,{
	if (BaseJob == Job_Merchant) {
		if (!blacksmithq) {
			mes "[Altiregen]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!";
			mes "Nós somos Trabalhadores do Aço, a Guilda dos Ferreiros.";
			next;
			mes "[Altiregen]";
			mes "Nós colocamos o fervor e a paixão de nossas almas em nossas forjas.";
			mes "Nossa habilidade de derreter metal em novas armas e ferramentas é realmente uma forma de arte!";
			next;
			mes "[Altiregen]";
			mes "Por que você não para de lutar para fazer zeny como um Mercador e se junta à classe de elite Ferreiro?";
			mes "Se você estiver interessado, preencha este formulário com seu nome e seu Nível de Classe.";
			next;
			switch(select("Preencher o Formulário","Quais são os requerimentos?","Hm, eu preciso pensar sobre isto")) {
				case 1:
				if (JobLevel < 40) {
					mes "[Altiregen]";
					mes "Hmmm, parece que você não tem muita experiência como um Mercad"+(Sex == SEX_MALE ? "or" : "ora")+"or.";
					mes "Nós requerimos que você seja ao menos Nível de Classe 40.";
					next;
					mes "[Altiregen]";
					mes "Eu me sinto mal descartando você depois de ter vindo tão longe, mas regras são regras.";
					mes "Desculpe te desapontar, você será bem vind"+(Sex == SEX_MALE ? "o" : "a")+" quando estiver pront"+(Sex == SEX_MALE ? "o" : "o")+".";
					close;
				} else {
					mes "[Altiregen]";
					mes "Primeiro, nós sõ aceitamos Mercadores experientes com um desejo real de se tornar um ótimo Ferreiro.";
					mes "Vejamos...";
					next;
					mes "^3355ff*Mexendo nos Papéis*^000000";
					next;
					mes "[Altiregen]";
					mes "Hmmm...";
					mes "Um de nossos Ferreiros em Einbech, ^8e6b23Geschupenschte^000000 nós enviou um comunicado que ele precisa de uma ajuda. Seu primeiro teste de caráter será ajudá-lo.";
					next;
					blacksmithq = 1;
					setquest (2000);
					mes "[Altiregen]";
					mes "Vá até ele e boa Sorte.";
					close;
				}
				case 2:
				mes "[Altiregen]";
				mes "Você quer saber nossos requerimentos?";
				mes "Primeiro, você deve ter Nível de Classe 40 ou mais como um Mercador.";
				mes "Depois, você precisa passar de um teste que será aqui pela Guilda dos Ferreiros.";
				next;
				mes "[Altiregen]";
				mes "O teste deve consistir de tarefas difíceis, mas definitivamente não é impossível.";
				mes "Você precisará entregar certos itens à diferentes áreas ao redor do mundo para completar o teste.";
				close;
				case 3:
				mes "[Altiregen]";
				mes "Hmmm...";
				mes "Bem, espero vê-l"+(Sex == SEX_MALE ? "o" : "a")+" novamente.";
				close;
			}
		} else if (blacksmithq > 1 && blacksmithq < 6) {
			mes "[Altiregen]";
			mes "Você ainda não se foi?";
			mes "Vá até Einbech e procure por ^8E6B23Geschupenschte^000000.";
			mes "Ajude-o, e quando você terminar, volte até mim.";
			close;
		} else if (blacksmithq == 6) {
			mes "[Altiregen]";
			mes "Ótimo trabalho!!";
			mes "Você foi passou no primeiro teste...";
			next;
			mes "[Altiregen]";
			mes "Hm?.";
			mes "Você não pensava que não haveria mais de um teste.";
			mes "Haha, mas não se preocupe, você não irá viajar tão longe.";
			mes "Por favor vá falar com o membro da guilda dentro da construção para mais detalhes sobre o próximo teste.";
			next;
			if (select("Mais um teste?! Está bem.","Já basta!") == 1) {
				mes "[Altiregen]";
				mes "Me desculpe, mas estou certo que você entende.";
				mes "Nós não podemos aceitar qualquer um em nossa guilda!";
				next;
				mes "[Altiregen]";
				mes "Se nós não mentermos nossos padrões, nós não seremos capazes de manter o respeito da Guilda dos Ferreiros!";
				mes "Nós não podemos embassar nossa guilda desta maneira!";
				mes "De qualquer jeito, você deve falar com o membro da guilda dentro da construção agora.";
				mes "Procure por ^3355ffMitehmaeeuh^000000";
				changequest (2013,2014);
				blacksmithq = 7;
				close;
			}
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu viajei, fiz uma entrega extressante, e você ainda quer que eu faça mais um teste?!";
			next;
			mes "[Altiregen]";
			mes "Você não tem espírito!";
			mes "Se você não puder aguentar isto, você nunca será um Ferreiro!";
			close;
		} else if (blacksmithq == 7) {
			mes "[Altiregen]";
			mes "Hm? Você ainda não foi falar com o membro da guilda?";
			mes "Se você não foi, sugiro que você vá falar o mais rápido possível.";
			mes "Procure por ^3355ffMitehmaeeuh^000000";
			close;
		} else if (blacksmithq == 8) {
			if (SkillPoint) {
				mes "[Altiregen]";
				mes "Você não pode mudar para a Classe dos Ferreiros sem antes usar todos os seus pontos de habilidade.";
				mes "Por favor volte após usar sabiamente todos os seus pontos de habilidade.";
				close;
			} else if (!countitem(Hammer_Of_Blacksmith)) {
				mes "[Altiregen]";
				mes "E então já terminou o teste com Mitehmaeeuh?";
				mes "Onde está a prova disso?";
				mes "Não era para você ter um Martelo do Ferreiro?";
				close;
			} else {
				mes "[Altiregen]";
				mes "Ótimo "+strcharinfo(PC_NAME)+" você completou todos os testes de nossa guilda";
				mes "Sem dúvida você merece ser chamado de Ferreiro.";
				jobchange (Job_Blacksmith);
				completequest (2015);
				callfunc ("ClearJobQuest2nd",10);
				close;
			}
		}
	} else if (Job_Blacksmith) {
		mes "[Altiregen]";
		mes "Lembre-se das dificuldades que você superou quando estava fazendo seus testes de admissão.";
		mes "Eles serão um elo com a dignidade do ferreiro";
		close;
	} else {
		mes "[Altiregen]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!";
		mes "Nós somos Trabalhadores do Aço, a Guilda dos Ferreiros.";
		next;
		mes "[Altiregen]";
		mes "Nós colocamos o fervor e a paixão de nossas almas em nossas forjas.";
		mes "Nossa habilidade de derreter metal em novas armas e ferramentas é realmente uma forma de arte!";
		close;
	}
}

// ------------------------------------------------------------------
ein_in01,201,27,3	script	Geschupenschte#blacksmithq	1_M_SMITH,{
	if (!blacksmithq) {
		mes "[Geschupenschte]";
		mes "Ser um Ferreiro é realmente maravilhoso!";
		mes "Você não acha?";
	} else {
		if (blacksmithq == 1) {
			mes "[Geschupenschte]";
			mes "Olá!";
			mes "Eu sou ^8E6b23Geschupenschte^000000.";
			mes "Prazer em conhecê-l"+(Sex == SEX_MALE ? "o" : "a")+"!";
			next;
			mes "[Geschupenschte]";
			mes "Eu estou correto em presumir que você foi enviado pela Guilda dos Ferreiros?";
			mes "Não há muitas pessoas confiáveis em que eu possa contar para me ajudar.";
			mes "Eu estou sempre precisando de ajuda.";
			next;
			mes "[Geschupenschte]";
			mes "Hmm, de qualquer jeito, você foi a ajuda que foi enviada, certo?";
			mes "Tenho algum trabalho para você que deve ser feito da maneira correta!";
			next;
			mes "[Geschupenschte]";
			mes "Algum tempo atráz, eu tinha um garoto trabalhando para mim que não tinha experiência e comprou os suprimentos errados!";
			mes "Foi terrível...";
			next;
			mes "[Geschupenschte]";
			mes "Qualquer um odiaria perder dinheiro atravéz de erros tolos como este.";
			mes "Mesmo assim, eu tenho um trabalho mais difícil para você.";
			next;
			mes "[Geschupenschte]";
			mes "Mesmo assim, eu quero ter certeza que você tem um conhecimento básico como um Mercador.";
			mes "Gostaria de fazer algumas perguntas, se não houver problema.";
			next;
			if (select("Sim, pode perguntar","Pode me dar um tempo?") == 2) {
				mes "[Geschupenschte]";
				mes "Ah, é claro que eu não ligo se você voltar um pouco mais tarde.";
				mes "Se preparar previne desastres no futuro.";
				close;
			}
			switch(rand(2)) {
				case 1:
				mes "[Geschupenschte]";
				mes "1. Qual das cidades não vende o item correspondente?";
				next;
				if (select("Morroc - Traje de Gatuno","Alberta - Machado de Duas Mãos","Comodo - Poção da Fúria Selvagem","Alberta - Clava") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "2. Que condição pode ser inflingido com a habilidade ^8e6b23Martelo de Thor^000000?";
				next;
				if (select("Atordoamento","Cegueira","Silêncio","Sono") == 1) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "3. Qual das seguintes habilidades não pertence ao Mercador?";
				next;
				if (select("Comércio","Desconto","Superfaturar","Aumentar Agilidade") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "4. Onde você pode achar uma loja que vende Gemas Azuis?";
				next;
				if (select("Alberta", "Morroc", "Geffen", "Prontera") == 3) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "5. Onde o Vendedor de Utilidades fica ocalizado em Geffen em relação ao centro da cidade?";
				next;
				if (select("Direção 8 horas","Direção 11 horas","Direção 6 horas",":Direção 5 horas") == 1) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "6. Que arma não pode ser usada por um Mercador?";
				next;
				if (select("Stiletto","Sabre de Impacto","Mangual Pesado","Bíblia") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "7. Quais dos seguintes itens tem a maior taxa de defesa?";
				next;
				if (select("Roupa de Baixo","Casaco de Pele","Armadura de Madeira","Manto de Seda") == 2) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "8. Para armas de Nível 3, qual é o limite ^8e6b23Seguro^000000 de aprimoramento?";
				next;
				if (select("Até + 3","Até + 4","Até + 5","Até + 6") == 3) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "9. Qual item não pode ser equipado na cabeça?";
				next;
				if (select("Capú","Bandana Fantasma","Chifres Magestosos","Chifre de Alce") == 1) {
					.@smithPoint += 1;
				}
				break;
				default:
				mes "[Geschupenschte]";
				mes "1. Qual das cidades não vende o item em questão?";
				next;
				if (select("Al De Baran - Folha de Yggdrasil","Alberta - Marreta","Comodo - Poção da Fúria Selvagem","Al De Baran - Marreta") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "2. Quantos Zeny valhe um Jellopy?";
				next;
				if (select("1 Zeny","2 Zeny","3 Zeny","4 Zeny") == 3) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "3. O que é pré requerido para um Mercador para usar a habilidade ^8E6B23Comércio^000000?";
				next;
				if (select("Deve ter um Carrinho","Deve ter itens para vender","Deve estar empunhando uma arma","Deve estar vestindo uma armadura") == 1) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "4. Onde você poder mudar de Classe para se tornar um Mercador?";
				next;
				if (select("Alberta","Morroc","Geffen","Prontera") == 1) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "5. Onde o Vendedor de Armas fica localizado em Morroc em relação ao centro da cidade?";
				next;
				if (select("7 horas","11 horas","6 horas","5 horas") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "6. Qual destas armas um Mercador não pode usar?";
				next;
				if (select("Main Gauche","Claymore","Mangual Pesado","Machado do Duas Mãos") == 2) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "7. Qual dos seguintes itens tem a maior taxa de defesa?";
				next;
				if (select("Roupa de Baixo","Casaco de Pele","Armadura de Madeira","Manto de Seda") == 2) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "8. Para armas de Nível 3, qual é o limite ^8e6b23Seguro^000000 de aprimoramento?";
				next;
				if (select("Até + 3","Até + 4","Até + 5","Até + 6") == 3) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "9. Que monstro não dropa Minério de Ferro?";
				next;
				if (select("Chon Chon","Chon Chon de Aço","Zerom","Anolian") == 4) {
					.@smithPoint += 1;
				}
			}
			mes "[Geschupenschte]";
			mes "Muito bem, você respondeu todas as minhas perguntas.";
			next;
			if (.@smithPoint < 5) {
				mes "[Geschupenschte]";
				mes "Hmm...";
				mes "Mas você precisa estudar um pouco mais.";
				mes "Assim nunca pode ser um Ferreiro se nem sabe responder corretamente 5 dessas perguntas.";
				close;
			} else {
				mes "[Geschupenschte]";
				mes "Eu irei confiar em você para o trabalho!";
				mes "Só me dê um pequeno tempo para que eu possa arrumar as coisas.";
				mes "Quando você voltar, eu estarei pronto!";
				blacksmithq = 2;
				changequest (2000,2002);
				close;
			}
		} else if (blacksmithq == 2) {
			mes "[Geschupenschte]";
			mes "Hmm...";
			mes "Agora, onde estão aqueles formulários de pedidos...";
			next;
			mes "^3355ff*Revirando os Papéis*^000000";
			next;
			mes "[Geschupenschte]";
			mes "Oh! Aqui está!";
			mes "Este foi o pedido que mais foi adiado...";
			next;
			mes "[Geschupenschte]";
			mes "Bem, para fazer isto você vai precisar me trazer...";
			next;
			switch(rand(5)) {
				case 1:
				blacksmithq_2 = 1;
				setarray (.@item[0],999, 2, 930,1, 717,2, 1610,1);
				changequest (2002,2003);
				break;
				case 2:
				blacksmithq_2 = 2;
				setarray (.@item[0],1001,2, 932,1, 912,1, 1219,1);
				changequest (2002,2004);
				break;
				case 3:
				blacksmithq_2 = 3;
				setarray (.@item[0],1003,2, 935,2, 990,2, 1119,1);
				changequest (2002,2005);
				break;
				case 4:
				blacksmithq_2 = 4;
				setarray (.@item[0],1002,8, 2212,1, 717,2, 1713,1);
				changequest (2002,2006);
				break;
				default:
				blacksmithq_2 = 5;
				setarray (.@item[0],998,8, 511,20, 919,2, 1122,1);
				changequest (2002,2007);
				break;
			}
			mes "[Geschupenschte]";
			mes "^8e6b23"+.@item[1]+" "+getitemname (.@item[0])+"^000000,";
			mes "^8e6b23"+.@item[3]+" "+getitemname (.@item[2])+"^000000,";
			mes "^8e6b23"+.@item[5]+" "+getitemname (.@item[4])+"^000000,";
			mes "^8e6b23"+.@item[7]+" "+getitemname (.@item[6])+"^000000.";
			next;
			mes "[Geschupenschte]";
			mes "Traga esses itens e depois conersamos.";
			blacksmithq = 3;
			close;
		} else if (blacksmithq == 3) {
			switch(blacksmithq_2) {
				case 1: setarray (.@item[0],999, 2, 930,1, 717,2, 1610,1); break;
				case 2: setarray (.@item[0],1001,2, 932,1, 912,1, 1219,1); break;
				case 3: setarray (.@item[0],1003,2, 935,2, 990,2, 1119,1); break;
				case 4: setarray (.@item[0],1002,8, 2212,1, 717,2, 1713,1); break;
				case 5: setarray (.@item[0],998,8, 511,20, 919,2, 1122,1); break;
			}
			if (countitem(.@item[0]) < .@item[1] && countitem(.@item[2]) < .@item[3] && countitem(.@item[4]) < .@item[5] && countitem(.@item[6]) < .@item[7]) {
				mes "[Geschupenschte]";
				mes "Você ainda não trouxe todos os itens que pedi.";
				mes "Lembre-se que preciso de:";
				next;
				mes "[Geschupenschte]";
				mes "^8e6b23"+.@item[1]+" "+getitemname (.@item[0])+"^000000,";
				mes "^8e6b23"+.@item[3]+" "+getitemname (.@item[2])+"^000000,";
				mes "^8e6b23"+.@item[5]+" "+getitemname (.@item[4])+"^000000,";
				mes "^8e6b23"+.@item[7]+" "+getitemname (.@item[6])+"^000000.";
				next;
				mes "[Geschupenschte]";
				mes "Agora, tenha certeza de ter tudo, quando você voltar.";
				mes "Como pretende ser "+(Sex == SEX_MALE ? "um Ferreiro" : "uma Ferreira")+" se nem consegue itens tão básicos?";
				close;
			} else {
				mes "[Geschupenschte]";
				mes "Você voltou e trouxe tudo que pedi.";
				mes "Ótimo.";
				next;
				mes "[Geschupenschte]";
				mes "Agora me der todos esse itens para que eu possa mostrar a capacidade de um ferreiro.";
				delitem (.@item[0],.@item[1]);
				delitem (.@item[2],.@item[3]);
				delitem (.@item[4],.@item[5]);
				delitem (.@item[6],.@item[7]);
				next;
				mes "[Geschupenschte]";
				mes "^3355ff*Clang...!*^000000";
				next;
				mes "[Geschupenschte]";
				mes "^3355ff*Crash Crash!*^000000";
				next;
				if (blacksmithq_2 == 1) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8E6B23Bysliter^000000 em Geffen.";
					next;
					mes "[Geschupenschte]";
					mes "E não perca esse cajado!";
					mes "Basta entregá-lo e trazer o recibo para mim.";
					getitem (Arc_Wand,1);
					changequest (2003,2008);
					blacksmithq = 4;
					close;
				} else if (blacksmithq_2 == 2) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8E6B23Whichebain^000000 em Morroc.";
					next;
					mes "[Geschupenschte]";
					mes "E não perca essa adaga!";
					mes "Basta entregá-la e trazer o recibo para mim.";
					getitem (Gladius,1);
					changequest (2004,2009);
					blacksmithq = 4;
					close;
				} else if (blacksmithq_2 == 3) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8e6b23Grongast^000000 em Lighthalzen.";
					next;
					mes "[Geschupenschte]";
					mes "E não perca essa espada!";
					mes "Basta entregá-la e trazer o recibo para mim.";
					getitem (Tsurugi,1);
					changequest (2005,2010);
					blacksmithq = 4;
					close;
				} else if (blacksmithq_2 == 4) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8e6b23Talpiz^000000 em Payon.";
					next;
					mes "[Geschupenschte]";
					mes "E não perca esse arco!";
					mes "Basta entregá-lo e trazer o recibo para mim.";
					getitem (Arbalest,1);
					changequest (2006,2011);
					blacksmithq = 4;
					close;
				} else if (blacksmithq_2 == 5) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8e6b23Bismark^000000 em Hugel.";
					next;
					mes "[Geschupenschte]";
					mes "E não perca essa espada!";
					mes "Basta entregá-la e trazer o recibo para mim.";
					getitem (Ring_Pommel_Saber,1);
					changequest (2007,2012);
					blacksmithq = 4;
					close;
				}
			}
		} else if (blacksmithq == 4) {
			mes "[Geschupenschte]";
			mes "O que você ainda está fazendo aqui?";
			mes "Apresse-se e entregue para a pessoa que eu lhe pedi para entregar.";
			next;
			mes "[Geschupenschte]";
			if (blacksmithq_2 == 1) {
				mes "Vá até Geffen e entregue o cajado para ^8e6b23Bysliter^000000.";
			} else if (blacksmithq_2 == 2) {
				mes "Vá até Morroc e entregue a adaga para ^8e6b23Whichebain^000000.";
			} else if (blacksmithq_2 == 3) {
				mes "Vá até Lighthalzen e entregue a espada para ^8e6b23Grongast^000000.";
			} else if (blacksmithq_2 == 4) {
				mes "Vá até Payon e entregue o arco para ^8e6b23Talpiz^000000.";
			} else if (blacksmithq_2 == 5) {
				mes "Vá até Hugel e entregue a espada para ^8e6b23Bismark^000000.";
			}
			mes "E não esqueça de trazer o recibo.";
			close;
		} else if (blacksmithq == 5) {
			if (!countitem(Merchant_Voucher_1)) {
				mes "[Geschupenschte]";
				mes "Fez a entrega que lhe pedi?";
				mes "Então onde está o recibo?";
				close;
			} else {
				mes "[Geschupenschte]";
				mes "Oh ho ho";
				mes "Ótimo!";
				mes "Você é realmente um grande Mercador!";
				next;
				mes "[Geschupenschte]";
				mes "Ótimo trabalho!";
				mes "Retorne para ^8e6b23Altiregen^000000 em Einbroch, o cara que você primeiro conheceu para se tornar Ferreiro.";
				next;
				mes "[Geschupenschte]";
				mes "Eu tenho esperanças de que você será "+(Sex == SEX_MALE ? "um grande Ferreiro" : "uma grande Ferreira")+"!";
				if (questprogress (2008)) { changequest (2008,2013); }
				else if (questprogress (2009)) { changequest (2009,2013); }
				else if (questprogress (2010)) { changequest (2010,2013); }
				else if (questprogress (2011)) { changequest (2011,2013); }
				else if (questprogress (2012)) { changequest (2012,2013); }
				delitem (Merchant_Voucher_1,1);
				blacksmithq = 6;
				close;
			}
		} else if (blacksmithq > 5) {
			mes "[Geschupenschte]";
			mes "Muito obrigado, muito mesmo, pela sua ajuda.";
			mes "Retorne para Einbroch e encontre ^8e6b23Altiregen^000000!";
			close;
		}
	}
}

// ------------------------------------------------------------------
geffen,46,164,1	script	Bysliter#blacksmithq	1_F_04,{
	if (!blacksmithq) {
		mes "[Bysliter]";
		mes "Oh...";
		mes "Tem muito tempo desde que eu saí de Alberta.";
		next;
		mes "[Bysliter]";
		mes "Eu pedi uma coisa para a Guilda dos Ferreiros, mas eu ainda não recebi meu pedido...";
		next;
		mes "[Bysliter]";
		mes "Me pergunto...";
		mes "Poderia a Guilda dos Ferreiros estar sem pessoal?";
		mes "Eu não consigo pensar em outro motivo para demorarem tanto...";
		next;
		mes "[Bysliter]";
		mes "Quando vou conseguir meu Cajado especial?";
		close;
	} else {
		if (blacksmithq_2 == 1 && countitem(Arc_Wand) > 0) {
			mes "[Bysliter]";
			mes "Oh, olá!";
			mes "Você veio para entregar meu Cajado?";
			next;
			mes "[Bysliter]";
			mes "Tem certeza que este foi o que eu pedi, né?";
			mes "Quero dizer, se ele já foi ultilizado eu não vou querer.";
			next;
			mes "[Bysliter]";
			mes "Estava muito tempo esperando por isso!";
			mes "Muito obrigado por você me trazer o cajado.";
			next;
			mes "[Bysliter]";
			mes "E já ia me esquecendo...";
			mes "Leve esse recibo.";
			delitem (Arc_Wand,1);
			getitem (Merchant_Voucher_1,1);
			blacksmithq_2 = 0;
			blacksmithq = 5;
			close;
		} else if (blacksmithq == 5) {
			mes "[Bysliter]";
			mes "Muito obrigado, por você viajar até aqui e me trazer meu cajado.";
			close;
		} else {
			mes "[Bysliter]";
			mes "Você veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas até agora ela não chegou.";
			close;
		}
	}
}

// ------------------------------------------------------------------
morocc,27,112,4	script	Whichebain#blacksmithq	4_F_JOB_ASSASSIN,{
	if (!blacksmithq) {
		mes "[Whichebain]";
		mes "...";
		next;
		mes "[Whichebain]";
		mes "...";
		mes "......";
		next;
		mes "[Whichebain]";
		mes "Eles estão atrasados.";
		mes "Eles estão atrasados, eles estão atrasados, eles estão atrasados!";
		next;
		mes "[Whichebain]";
		mes "Quanto tempo demora para chegar minha encomenda?";
		mes "Normalmente, a Guilda de Ferreiros de Geffen é bastante rápida...";
		next;
		emotion (e_lv);
		mes "[Whichebain]";
		mes "Ooohh...";
		mes "Isto é muito agoniante...";
		close;
	} else {
		if (blacksmithq_2 == 2 && countitem(Gladius) > 0) {
			mes "[Whichebain]";
			mes "Você veio da Guilda de Ferreiros de Einbroch?";
			mes "Entregue esta mensagem para o Geschupenschte!";
			next;
			mes "[Whichebain]";
			mes "'^660000Você está atrasado!";
			mes "Não têm idéia do quanto eu estive esperando?!^000000'";
			next;
			mes "[Whichebain]";
			mes "Mas, este é um item totalmente artesanal.";
			mes "Diga a ele que estou satisfeito com a qualidade do trabalho.";
			next;
			emotion (e_lv);
			mes "[Whichebain]";
			mes "Aqui está o recibo.";
			mes "Eu acho que você fez um bom trabalho.";
			delitem (Gladius,1);
			getitem (Merchant_Voucher_1,1);
			blacksmithq_2 = 0;
			blacksmithq = 5;
			close;
		} else if (blacksmithq == 5) {
			mes "[Whichebain]";
			mes "Obrigado pela entrega.";
			close;
		} else {
			mes "[Whichebain]";
			mes "Você veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas até agora ela não chegou.";
			close;
		}
	}
}

// ------------------------------------------------------------------
lighthalzen,209,80,4	script	Krongast#blacksmithq	4_M_JOB_KNIGHT2,{
	if (!blacksmithq) {
		mes "[Krongast]";
		mes "...";
		next;
		mes "[Krongast]";
		mes "...";
		mes "......";
		next;
		mes "[Krongast]";
		mes "Quando é que finalmente vai chegar a espada que eu pedi?";
		mes "Preciso treinar minha habilidade suprema, ^2F4F4FFine Edge^000000 com ela.";
		next;
		mes "[Krongast]";
		mes "Ahhhhhhh!";
		mes "Eu tenho que ter aquela espada!";
		close;
	} else {
		if (blacksmithq_2 == 3 && countitem(Tsurugi) > 0) {
			mes "[Krongast]";
			mes "Oh ho...";
			mes "Isto é ótimo.";
			mes "Muito melhor do que eu esperava.";
			next;
			mes "[Krongast]";
			mes "Com esta espada...";
			mes "Minhas técnicas especiais vão ficar muito mais poderosas!";
			mes "Eu posso até ser capaz de aperfeiçoar minhas técnicas de velocidade!";
			mes "Eu amei!";
			next;
			mes "[Krongast]";
			mes "Certo.";
			mes "Deixa eu te dar seu recibo.";
			delitem (Tsurugi,1);
			getitem (Merchant_Voucher_1,1);
			blacksmithq_2 = 0;
			blacksmithq = 5;
			close;
		} else if (blacksmithq == 5) {
			mes "[Krongast]";
			mes "Obrigado pela entrega.";
			close;
		} else {
			mes "[Krongast]";
			mes "Você veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas até agora ela não chegou.";
			close;
		}
	}
}

// ------------------------------------------------------------------
payon,214,79,4	script	Talpiz#blacksmithq	1_M_ORIENT01,{
	if (!blacksmithq) {
		mes "[Talpiz]";
		mes "Eh...";
		mes "Quando meu pedido chegará?";
		next;
		mes "[Talpiz]";
		mes "Um Arbaleste personalizado feito com um estojo de qualidade para segurar seu tapa-olho.";
		mes "Só uma pessoa pode fazer uma coisa dessas...";
		next;
		mes "[Talpiz]";
		mes "Ahhhhhh...";
		mes "A espera é agoniante!";
		close;
	} else {
		if (blacksmithq_2 == 4 && countitem(Arbalest) > 0) {
			mes "[Talpiz]";
			mes "*wheet whoo*";
			mes "Muito bom!!";
			next;
			mes "[Talpiz]";
			mes "Este é realmente um item personalizado de qualidade.";
			mes "Eu adoro como tem um estojo para o tapa-olho!";
			mes "Eu realmente adorei!";
			next;
			mes "[Talpiz]";
			mes "Obrigado!";
			mes "Por algo desta qualidade, eu até posso vendê-lo por um preço elevado, mesmo depois que eu usei ele!";
			next;
			mes "[Talpiz]";
			mes "Aqui!";
			mes "Pegue por favor, seu recibo.";
			mes "Eu realmente apreciei seu trabalho duro.";
			delitem (Arbalest,1);
			getitem (Merchant_Voucher_1,1);
			blacksmithq_2 = 0;
			blacksmithq = 5;
			close;
		} else if (blacksmithq == 5) {
			mes "[Talpiz]";
			mes "Obrigado pela entrega.";
			close;
		} else {
			mes "[Talpiz]";
			mes "Você veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas até agora ela não chegou.";
			close;
		}
	}
}

// ------------------------------------------------------------------
hugel,168,183,1	script	Bismarc#BLS	2_M_THIEFMASTER,{
	if (!blacksmithq) {
		mes "[Bismarc]";
		mes "^666666*Ghyklk*^000000";
		mes "^666666*Huk Hukk*^000000";
		mes "Quando meu pedido vai chegar...?";
		close;
	} else {
		if (blacksmithq_2 == 5 && countitem(Ring_Pommel_Saber) > 0) {
			mes "[Bismarc]";
			mes "É você que veio me trazer meu sabre?";
			next;
			mes "[Bismarc]";
			mes "Uau!!!.";
			mes "Estava muito ancioso esperando por isso.";
			mes "Obrigado por você te-lo trazido para mim!";
			next;
			mes "[Bismarc]";
			mes "Aqui!";
			mes "Pegue por favor, seu recibo.";
			mes "Muito obrigado pela sua gentileza.";
			delitem (Ring_Pommel_Saber,1);
			getitem (Merchant_Voucher_1,1);
			blacksmithq_2 = 0;
			blacksmithq = 5;
			close;
		} else if (blacksmithq == 5) {
			mes "[Bismarc]";
			mes "Obrigado pela entrega.";
			close;
		} else {
			mes "[Bismarc]";
			mes "Você veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas até agora ela não chegou.";
			close;
		}
	}
}

// ------------------------------------------------------------------
ein_in01,24,41,5	script	Mitehmaeeuh#blacksmithq	4_F_JOB_BLACKSMITH,{
	if (blacksmithq == 7) {
		emotion e_hmm;
		mes "[Mitehmaeeuh]";
		mes "Oh... então é você quem quer se tornar ferreiro?";
		mes "Legal, heh heh.";
		mes "Não é por ter passado pelo teste passado que você será promovido de Mercador a Ferreiro de imediato.";
		next;
		mes "[Mitehmaeeuh]";
		mes "Quanto você realmente sabe sobre forja?";
		mes "Está pronto para que faça algumas perguntas?";
		next;
		if (select("Sim","Não") == 1) {
			mes "[Mitehmaeeuh]";
			mes "Certo...";
			mes "Meu teste é simples.";
			mes "Farei cinco perguntas.";
			mes "Se errar uma, você falha.";
			mes "E não direi qual você errou.";
			next;
			mes "[Mitehmaeeuh]";
			mes "Por favor, ouça e responda cuidadosamente...";
			next;
			switch(rand(3)) {
				case 1:
				mes "[Mitehmaeeuh]";
				mes "1. Qual habilidade é pré requisito para aprender a habilidade ^8e6b23Desconto^000000?";
				next;
				if (select("Usar Carrinho Level 3","Identificar Item","Mammonita Level 10","Aumentar Capacidade de Carga") == 4) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "2. Quando você ataca com ^8e6b23Matelo de Thor^000000, qual efeito de condição você pode inflingir nos inimigos?";
				next;
				if (select("Atordoamento","Cegueira","Caos","Silêncio") == 1) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "3. Quanto de zeny é gasto ao utilizar ^8e6b23Mammonita^000000 no NV 10?";
				next;
				if (select("900 Zeny","1000 Zeny","2000 Zeny","100,000 Zeny") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "4. Qual é a taxa de desconto quando a habilidade ^8e6b23Desconto^000000 está no nível máximo?";
				next;
				if (select("21%","22%","23%","24%") == 4) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "5. Qual é a máxima porcentagem que você pode lucrar.";
				mes "Com itens vendidos quando a habilidade ^8e6b23Superfaturar^000000 estiver no máximo?";
				next;
				if (select("21%","22%","23%","24%") == 3) {
					.@bs_q += 1;
				}
				break;
				case 2:
				mes "[Mitehmaeeuh]";
				mes "1. Qual dos seguintes monstros dropa aço?";
				next;
				if (select("Zerom","ChonChon","Esqueleto Operário","Réquiem") == 3) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "2. Qual das seguintes pedras pode ser feita de Sangue Escarlate?";
				next;
				if (select("Coração Flamejante","Vento Bruto","Natureza Grandioza","Gelo Místico") == 1) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "3. Qual das seguintes pedras é dropada do mostro Deniro?";
				next;
				if (select("Frescor do Vento","Sangue Escarlate","Vida Verdejante","Cristal Azul") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "4. Qual das seguintes propriedades é vunerável a arma de propriedade Vento?";
				next;
				if (select("Fogo","Água","Terra","Vento") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "5. Quantos Minérios de Ferro são necessários para fazer 1 Aço?";
				next;
				if (select("5 Minério de Ferro","4 Minério de Ferro","3 Minério de Ferro","6 Minério de Ferro") == 1) {
					.@bs_q += 1;
				}
				break;
				default:
				mes "[Mitehmaeeuh]";
				mes "1. O que você geralmente faz quando você encontra alguém por acaso na rua?";
				next;
				switch(select("Pergunto o que precisam","Tenho uma conversa rápida","Ignoro","Dou alguns itens")) {
					case 1:
					case 2:
					.@bs_q += 1;
					break;
					default:
					break;
				}
				mes "[Mitehmaeeuh]";
				mes "2. Em qual cidade";
				mes "você pode aprender as habilidades ^8e6b23Grito de Guerra^000000 e ^8e6b23Personalizar Carrinho^000000?";
				next;
				if (select("Al De Baran","Alberta","Morroc","Izlude") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "3. Do centro de Einbroch, em qual direção fica a Guilda dos Ferreiros?";
				next;
				if (select("Noroeste","Sudeste","Sudoeste","Norte") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "4. Em qual cidade típica dos Ferreiros?";
				next;
				if (select("Prontera","Morroc","Alberta","Einbroch") == 4) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "5. Qual dos seguintes atributam afetam a habilidade Ferreiro em forjar armas?";
				next;
				if (select("FOR","DES","AGI","VIT") == 2) {
					.@bs_q += 1;
				}
				break;
			}
			mes "[Mitehmaeeuh]";
			mes "Só são essas perguntas mesmo...";
			mes "Por mais simples que sejam elas são para saber se você será capaz de se juntar a nossa Guilda.";
			next;
			if (.@bs_q != 5) {
				mes "[Mitehmaeeuh]";
				mes "E olha só, você não passou no questionário.";
				mes "Terá que estudar mais se quiser se tornar "+(Sex == SEX_MALE ? "um Ferreiro" : "uma Ferreira")+".";
				close;
			} else {
				mes "[Mitehmaeeuh]";
				mes "Muito bem";
				mes "Parabéns!";
				mes "Você passou!";
				next;
				mes "[Mitehmaeeuh]";
				mes "Entretanto, não deixe seu sucesso lhe tornar superconfiante.";
				mes "A vida de um Ferreiro não é fácil.";
				mes "Como prova de que você passou no teste, eu lhe dou este Martelo do Ferreiro.";
				blacksmithq = 8;
				getitem (Hammer_Of_Blacksmith,1);
				changequest (2014,2015);
				next;
				mes "[Mitehmaeeuh]";
				mes "Agora retorne até o Sr. Altiregen";
				close;
			}
		}
		mes "[Mitehmaeeuh]";
		mes "Certo.";
		mes "Por favor, prepare-se e volte quando estiver pront"+(Sex == SEX_MALE ? "o" : "a")+"...";
		close;
	} else if (blacksmithq == 8) {
		emotion (e_hmm);
		mes "[Mitehmaeeuh]";
		mes "Ah, você acabou de fazer o teste de Ferreiro!";
		next;
		mes "[Mitehmaeeuh]";
		mes "Por que não volta ao Sr. Altiregen?";
		next;
		mes "[Mitehmaeeuh]";
		mes "Não se esqueça de levar o Martelo do Ferreiro com você!";
		close;
	} else {
		emotion (e_hmm);
		mes "[Mitehmaeeuh]";
		mes "Tive que lidar com o calor, enquanto estive em Morroc";
		mes "e agora eu tenho que lidar com a fumaça em Einbroch!";
		next;
		mes "[Mitehmaeeuh]";
		mes "Mas, eu tenho que admitir que este é um lugar perfeito para Ferreiros, porque nós temos suprimento em abundância de materiais de forja, bem como equipamento de primeira.";
		next;
		mes "[Mitehmaeeuh]";
		mes "Nós, Ferreiros, estamos dando o máximo de nós para forjar as melhores armas.";
		next;
		mes "[Mitehmaeeuh]";
		mes "Nós temos nossa honra nisso!";
		close;
	}
}
