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
| - Info: Quest de mudan�a de Classe para Ferreiro.                 |
\*-----------------------------------------------------------------*/

ein_in01,18,28,4	script	Ferreiro#blacksmithq	4_M_JOB_BLACKSMITH,{
	if (BaseJob == Job_Merchant) {
		if (!blacksmithq) {
			mes "[Altiregen]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!";
			mes "N�s somos Trabalhadores do A�o, a Guilda dos Ferreiros.";
			next;
			mes "[Altiregen]";
			mes "N�s colocamos o fervor e a paix�o de nossas almas em nossas forjas.";
			mes "Nossa habilidade de derreter metal em novas armas e ferramentas � realmente uma forma de arte!";
			next;
			mes "[Altiregen]";
			mes "Por que voc� n�o para de lutar para fazer zeny como um Mercador e se junta � classe de elite Ferreiro?";
			mes "Se voc� estiver interessado, preencha este formul�rio com seu nome e seu N�vel de Classe.";
			next;
			switch(select("Preencher o Formul�rio","Quais s�o os requerimentos?","Hm, eu preciso pensar sobre isto")) {
				case 1:
				if (JobLevel < 40) {
					mes "[Altiregen]";
					mes "Hmmm, parece que voc� n�o tem muita experi�ncia como um Mercad"+(Sex == SEX_MALE ? "or" : "ora")+"or.";
					mes "N�s requerimos que voc� seja ao menos N�vel de Classe 40.";
					next;
					mes "[Altiregen]";
					mes "Eu me sinto mal descartando voc� depois de ter vindo t�o longe, mas regras s�o regras.";
					mes "Desculpe te desapontar, voc� ser� bem vind"+(Sex == SEX_MALE ? "o" : "a")+" quando estiver pront"+(Sex == SEX_MALE ? "o" : "o")+".";
					close;
				} else {
					mes "[Altiregen]";
					mes "Primeiro, n�s s� aceitamos Mercadores experientes com um desejo real de se tornar um �timo Ferreiro.";
					mes "Vejamos...";
					next;
					mes "^3355ff*Mexendo nos Pap�is*^000000";
					next;
					mes "[Altiregen]";
					mes "Hmmm...";
					mes "Um de nossos Ferreiros em Einbech, ^8e6b23Geschupenschte^000000 n�s enviou um comunicado que ele precisa de uma ajuda. Seu primeiro teste de car�ter ser� ajud�-lo.";
					next;
					blacksmithq = 1;
					setquest (2000);
					mes "[Altiregen]";
					mes "V� at� ele e boa Sorte.";
					close;
				}
				case 2:
				mes "[Altiregen]";
				mes "Voc� quer saber nossos requerimentos?";
				mes "Primeiro, voc� deve ter N�vel de Classe 40 ou mais como um Mercador.";
				mes "Depois, voc� precisa passar de um teste que ser� aqui pela Guilda dos Ferreiros.";
				next;
				mes "[Altiregen]";
				mes "O teste deve consistir de tarefas dif�ceis, mas definitivamente n�o � imposs�vel.";
				mes "Voc� precisar� entregar certos itens � diferentes �reas ao redor do mundo para completar o teste.";
				close;
				case 3:
				mes "[Altiregen]";
				mes "Hmmm...";
				mes "Bem, espero v�-l"+(Sex == SEX_MALE ? "o" : "a")+" novamente.";
				close;
			}
		} else if (blacksmithq > 1 && blacksmithq < 6) {
			mes "[Altiregen]";
			mes "Voc� ainda n�o se foi?";
			mes "V� at� Einbech e procure por ^8E6B23Geschupenschte^000000.";
			mes "Ajude-o, e quando voc� terminar, volte at� mim.";
			close;
		} else if (blacksmithq == 6) {
			mes "[Altiregen]";
			mes "�timo trabalho!!";
			mes "Voc� foi passou no primeiro teste...";
			next;
			mes "[Altiregen]";
			mes "Hm?.";
			mes "Voc� n�o pensava que n�o haveria mais de um teste.";
			mes "Haha, mas n�o se preocupe, voc� n�o ir� viajar t�o longe.";
			mes "Por favor v� falar com o membro da guilda dentro da constru��o para mais detalhes sobre o pr�ximo teste.";
			next;
			if (select("Mais um teste?! Est� bem.","J� basta!") == 1) {
				mes "[Altiregen]";
				mes "Me desculpe, mas estou certo que voc� entende.";
				mes "N�s n�o podemos aceitar qualquer um em nossa guilda!";
				next;
				mes "[Altiregen]";
				mes "Se n�s n�o mentermos nossos padr�es, n�s n�o seremos capazes de manter o respeito da Guilda dos Ferreiros!";
				mes "N�s n�o podemos embassar nossa guilda desta maneira!";
				mes "De qualquer jeito, voc� deve falar com o membro da guilda dentro da constru��o agora.";
				mes "Procure por ^3355ffMitehmaeeuh^000000";
				changequest (2013,2014);
				blacksmithq = 7;
				close;
			}
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu viajei, fiz uma entrega extressante, e voc� ainda quer que eu fa�a mais um teste?!";
			next;
			mes "[Altiregen]";
			mes "Voc� n�o tem esp�rito!";
			mes "Se voc� n�o puder aguentar isto, voc� nunca ser� um Ferreiro!";
			close;
		} else if (blacksmithq == 7) {
			mes "[Altiregen]";
			mes "Hm? Voc� ainda n�o foi falar com o membro da guilda?";
			mes "Se voc� n�o foi, sugiro que voc� v� falar o mais r�pido poss�vel.";
			mes "Procure por ^3355ffMitehmaeeuh^000000";
			close;
		} else if (blacksmithq == 8) {
			if (SkillPoint) {
				mes "[Altiregen]";
				mes "Voc� n�o pode mudar para a Classe dos Ferreiros sem antes usar todos os seus pontos de habilidade.";
				mes "Por favor volte ap�s usar sabiamente todos os seus pontos de habilidade.";
				close;
			} else if (!countitem(Hammer_Of_Blacksmith)) {
				mes "[Altiregen]";
				mes "E ent�o j� terminou o teste com Mitehmaeeuh?";
				mes "Onde est� a prova disso?";
				mes "N�o era para voc� ter um Martelo do Ferreiro?";
				close;
			} else {
				mes "[Altiregen]";
				mes "�timo "+strcharinfo(PC_NAME)+" voc� completou todos os testes de nossa guilda";
				mes "Sem d�vida voc� merece ser chamado de Ferreiro.";
				jobchange (Job_Blacksmith);
				completequest (2015);
				callfunc ("ClearJobQuest2nd",10);
				close;
			}
		}
	} else if (Job_Blacksmith) {
		mes "[Altiregen]";
		mes "Lembre-se das dificuldades que voc� superou quando estava fazendo seus testes de admiss�o.";
		mes "Eles ser�o um elo com a dignidade do ferreiro";
		close;
	} else {
		mes "[Altiregen]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!";
		mes "N�s somos Trabalhadores do A�o, a Guilda dos Ferreiros.";
		next;
		mes "[Altiregen]";
		mes "N�s colocamos o fervor e a paix�o de nossas almas em nossas forjas.";
		mes "Nossa habilidade de derreter metal em novas armas e ferramentas � realmente uma forma de arte!";
		close;
	}
}

// ------------------------------------------------------------------
ein_in01,201,27,3	script	Geschupenschte#blacksmithq	1_M_SMITH,{
	if (!blacksmithq) {
		mes "[Geschupenschte]";
		mes "Ser um Ferreiro � realmente maravilhoso!";
		mes "Voc� n�o acha?";
	} else {
		if (blacksmithq == 1) {
			mes "[Geschupenschte]";
			mes "Ol�!";
			mes "Eu sou ^8E6b23Geschupenschte^000000.";
			mes "Prazer em conhec�-l"+(Sex == SEX_MALE ? "o" : "a")+"!";
			next;
			mes "[Geschupenschte]";
			mes "Eu estou correto em presumir que voc� foi enviado pela Guilda dos Ferreiros?";
			mes "N�o h� muitas pessoas confi�veis em que eu possa contar para me ajudar.";
			mes "Eu estou sempre precisando de ajuda.";
			next;
			mes "[Geschupenschte]";
			mes "Hmm, de qualquer jeito, voc� foi a ajuda que foi enviada, certo?";
			mes "Tenho algum trabalho para voc� que deve ser feito da maneira correta!";
			next;
			mes "[Geschupenschte]";
			mes "Algum tempo atr�z, eu tinha um garoto trabalhando para mim que n�o tinha experi�ncia e comprou os suprimentos errados!";
			mes "Foi terr�vel...";
			next;
			mes "[Geschupenschte]";
			mes "Qualquer um odiaria perder dinheiro atrav�z de erros tolos como este.";
			mes "Mesmo assim, eu tenho um trabalho mais dif�cil para voc�.";
			next;
			mes "[Geschupenschte]";
			mes "Mesmo assim, eu quero ter certeza que voc� tem um conhecimento b�sico como um Mercador.";
			mes "Gostaria de fazer algumas perguntas, se n�o houver problema.";
			next;
			if (select("Sim, pode perguntar","Pode me dar um tempo?") == 2) {
				mes "[Geschupenschte]";
				mes "Ah, � claro que eu n�o ligo se voc� voltar um pouco mais tarde.";
				mes "Se preparar previne desastres no futuro.";
				close;
			}
			switch(rand(2)) {
				case 1:
				mes "[Geschupenschte]";
				mes "1. Qual das cidades n�o vende o item correspondente?";
				next;
				if (select("Morroc - Traje de Gatuno","Alberta - Machado de Duas M�os","Comodo - Po��o da F�ria Selvagem","Alberta - Clava") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "2. Que condi��o pode ser inflingido com a habilidade ^8e6b23Martelo de Thor^000000?";
				next;
				if (select("Atordoamento","Cegueira","Sil�ncio","Sono") == 1) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "3. Qual das seguintes habilidades n�o pertence ao Mercador?";
				next;
				if (select("Com�rcio","Desconto","Superfaturar","Aumentar Agilidade") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "4. Onde voc� pode achar uma loja que vende Gemas Azuis?";
				next;
				if (select("Alberta", "Morroc", "Geffen", "Prontera") == 3) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "5. Onde o Vendedor de Utilidades fica ocalizado em Geffen em rela��o ao centro da cidade?";
				next;
				if (select("Dire��o 8 horas","Dire��o 11 horas","Dire��o 6 horas",":Dire��o 5 horas") == 1) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "6. Que arma n�o pode ser usada por um Mercador?";
				next;
				if (select("Stiletto","Sabre de Impacto","Mangual Pesado","B�blia") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "7. Quais dos seguintes itens tem a maior taxa de defesa?";
				next;
				if (select("Roupa de Baixo","Casaco de Pele","Armadura de Madeira","Manto de Seda") == 2) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "8. Para armas de N�vel 3, qual � o limite ^8e6b23Seguro^000000 de aprimoramento?";
				next;
				if (select("At� + 3","At� + 4","At� + 5","At� + 6") == 3) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "9. Qual item n�o pode ser equipado na cabe�a?";
				next;
				if (select("Cap�","Bandana Fantasma","Chifres Magestosos","Chifre de Alce") == 1) {
					.@smithPoint += 1;
				}
				break;
				default:
				mes "[Geschupenschte]";
				mes "1. Qual das cidades n�o vende o item em quest�o?";
				next;
				if (select("Al De Baran - Folha de Yggdrasil","Alberta - Marreta","Comodo - Po��o da F�ria Selvagem","Al De Baran - Marreta") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "2. Quantos Zeny valhe um Jellopy?";
				next;
				if (select("1 Zeny","2 Zeny","3 Zeny","4 Zeny") == 3) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "3. O que � pr� requerido para um Mercador para usar a habilidade ^8E6B23Com�rcio^000000?";
				next;
				if (select("Deve ter um Carrinho","Deve ter itens para vender","Deve estar empunhando uma arma","Deve estar vestindo uma armadura") == 1) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "4. Onde voc� poder mudar de Classe para se tornar um Mercador?";
				next;
				if (select("Alberta","Morroc","Geffen","Prontera") == 1) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "5. Onde o Vendedor de Armas fica localizado em Morroc em rela��o ao centro da cidade?";
				next;
				if (select("7 horas","11 horas","6 horas","5 horas") == 4) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "6. Qual destas armas um Mercador n�o pode usar?";
				next;
				if (select("Main Gauche","Claymore","Mangual Pesado","Machado do Duas M�os") == 2) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "7. Qual dos seguintes itens tem a maior taxa de defesa?";
				next;
				if (select("Roupa de Baixo","Casaco de Pele","Armadura de Madeira","Manto de Seda") == 2) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "8. Para armas de N�vel 3, qual � o limite ^8e6b23Seguro^000000 de aprimoramento?";
				next;
				if (select("At� + 3","At� + 4","At� + 5","At� + 6") == 3) {
					.@smithPoint += 1;
				}
				mes "[Geschupenschte]";
				mes "9. Que monstro n�o dropa Min�rio de Ferro?";
				next;
				if (select("Chon Chon","Chon Chon de A�o","Zerom","Anolian") == 4) {
					.@smithPoint += 1;
				}
			}
			mes "[Geschupenschte]";
			mes "Muito bem, voc� respondeu todas as minhas perguntas.";
			next;
			if (.@smithPoint < 5) {
				mes "[Geschupenschte]";
				mes "Hmm...";
				mes "Mas voc� precisa estudar um pouco mais.";
				mes "Assim nunca pode ser um Ferreiro se nem sabe responder corretamente 5 dessas perguntas.";
				close;
			} else {
				mes "[Geschupenschte]";
				mes "Eu irei confiar em voc� para o trabalho!";
				mes "S� me d� um pequeno tempo para que eu possa arrumar as coisas.";
				mes "Quando voc� voltar, eu estarei pronto!";
				blacksmithq = 2;
				changequest (2000,2002);
				close;
			}
		} else if (blacksmithq == 2) {
			mes "[Geschupenschte]";
			mes "Hmm...";
			mes "Agora, onde est�o aqueles formul�rios de pedidos...";
			next;
			mes "^3355ff*Revirando os Pap�is*^000000";
			next;
			mes "[Geschupenschte]";
			mes "Oh! Aqui est�!";
			mes "Este foi o pedido que mais foi adiado...";
			next;
			mes "[Geschupenschte]";
			mes "Bem, para fazer isto voc� vai precisar me trazer...";
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
				mes "Voc� ainda n�o trouxe todos os itens que pedi.";
				mes "Lembre-se que preciso de:";
				next;
				mes "[Geschupenschte]";
				mes "^8e6b23"+.@item[1]+" "+getitemname (.@item[0])+"^000000,";
				mes "^8e6b23"+.@item[3]+" "+getitemname (.@item[2])+"^000000,";
				mes "^8e6b23"+.@item[5]+" "+getitemname (.@item[4])+"^000000,";
				mes "^8e6b23"+.@item[7]+" "+getitemname (.@item[6])+"^000000.";
				next;
				mes "[Geschupenschte]";
				mes "Agora, tenha certeza de ter tudo, quando voc� voltar.";
				mes "Como pretende ser "+(Sex == SEX_MALE ? "um Ferreiro" : "uma Ferreira")+" se nem consegue itens t�o b�sicos?";
				close;
			} else {
				mes "[Geschupenschte]";
				mes "Voc� voltou e trouxe tudo que pedi.";
				mes "�timo.";
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
					mes "E n�o perca esse cajado!";
					mes "Basta entreg�-lo e trazer o recibo para mim.";
					getitem (Arc_Wand,1);
					changequest (2003,2008);
					blacksmithq = 4;
					close;
				} else if (blacksmithq_2 == 2) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8E6B23Whichebain^000000 em Morroc.";
					next;
					mes "[Geschupenschte]";
					mes "E n�o perca essa adaga!";
					mes "Basta entreg�-la e trazer o recibo para mim.";
					getitem (Gladius,1);
					changequest (2004,2009);
					blacksmithq = 4;
					close;
				} else if (blacksmithq_2 == 3) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8e6b23Grongast^000000 em Lighthalzen.";
					next;
					mes "[Geschupenschte]";
					mes "E n�o perca essa espada!";
					mes "Basta entreg�-la e trazer o recibo para mim.";
					getitem (Tsurugi,1);
					changequest (2005,2010);
					blacksmithq = 4;
					close;
				} else if (blacksmithq_2 == 4) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8e6b23Talpiz^000000 em Payon.";
					next;
					mes "[Geschupenschte]";
					mes "E n�o perca esse arco!";
					mes "Basta entreg�-lo e trazer o recibo para mim.";
					getitem (Arbalest,1);
					changequest (2006,2011);
					blacksmithq = 4;
					close;
				} else if (blacksmithq_2 == 5) {
					mes "[Geschupenschte]";
					mes "Muito bem, agora leve isso para ^8e6b23Bismark^000000 em Hugel.";
					next;
					mes "[Geschupenschte]";
					mes "E n�o perca essa espada!";
					mes "Basta entreg�-la e trazer o recibo para mim.";
					getitem (Ring_Pommel_Saber,1);
					changequest (2007,2012);
					blacksmithq = 4;
					close;
				}
			}
		} else if (blacksmithq == 4) {
			mes "[Geschupenschte]";
			mes "O que voc� ainda est� fazendo aqui?";
			mes "Apresse-se e entregue para a pessoa que eu lhe pedi para entregar.";
			next;
			mes "[Geschupenschte]";
			if (blacksmithq_2 == 1) {
				mes "V� at� Geffen e entregue o cajado para ^8e6b23Bysliter^000000.";
			} else if (blacksmithq_2 == 2) {
				mes "V� at� Morroc e entregue a adaga para ^8e6b23Whichebain^000000.";
			} else if (blacksmithq_2 == 3) {
				mes "V� at� Lighthalzen e entregue a espada para ^8e6b23Grongast^000000.";
			} else if (blacksmithq_2 == 4) {
				mes "V� at� Payon e entregue o arco para ^8e6b23Talpiz^000000.";
			} else if (blacksmithq_2 == 5) {
				mes "V� at� Hugel e entregue a espada para ^8e6b23Bismark^000000.";
			}
			mes "E n�o esque�a de trazer o recibo.";
			close;
		} else if (blacksmithq == 5) {
			if (!countitem(Merchant_Voucher_1)) {
				mes "[Geschupenschte]";
				mes "Fez a entrega que lhe pedi?";
				mes "Ent�o onde est� o recibo?";
				close;
			} else {
				mes "[Geschupenschte]";
				mes "Oh ho ho";
				mes "�timo!";
				mes "Voc� � realmente um grande Mercador!";
				next;
				mes "[Geschupenschte]";
				mes "�timo trabalho!";
				mes "Retorne para ^8e6b23Altiregen^000000 em Einbroch, o cara que voc� primeiro conheceu para se tornar Ferreiro.";
				next;
				mes "[Geschupenschte]";
				mes "Eu tenho esperan�as de que voc� ser� "+(Sex == SEX_MALE ? "um grande Ferreiro" : "uma grande Ferreira")+"!";
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
		mes "Tem muito tempo desde que eu sa� de Alberta.";
		next;
		mes "[Bysliter]";
		mes "Eu pedi uma coisa para a Guilda dos Ferreiros, mas eu ainda n�o recebi meu pedido...";
		next;
		mes "[Bysliter]";
		mes "Me pergunto...";
		mes "Poderia a Guilda dos Ferreiros estar sem pessoal?";
		mes "Eu n�o consigo pensar em outro motivo para demorarem tanto...";
		next;
		mes "[Bysliter]";
		mes "Quando vou conseguir meu Cajado especial?";
		close;
	} else {
		if (blacksmithq_2 == 1 && countitem(Arc_Wand) > 0) {
			mes "[Bysliter]";
			mes "Oh, ol�!";
			mes "Voc� veio para entregar meu Cajado?";
			next;
			mes "[Bysliter]";
			mes "Tem certeza que este foi o que eu pedi, n�?";
			mes "Quero dizer, se ele j� foi ultilizado eu n�o vou querer.";
			next;
			mes "[Bysliter]";
			mes "Estava muito tempo esperando por isso!";
			mes "Muito obrigado por voc� me trazer o cajado.";
			next;
			mes "[Bysliter]";
			mes "E j� ia me esquecendo...";
			mes "Leve esse recibo.";
			delitem (Arc_Wand,1);
			getitem (Merchant_Voucher_1,1);
			blacksmithq_2 = 0;
			blacksmithq = 5;
			close;
		} else if (blacksmithq == 5) {
			mes "[Bysliter]";
			mes "Muito obrigado, por voc� viajar at� aqui e me trazer meu cajado.";
			close;
		} else {
			mes "[Bysliter]";
			mes "Voc� veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas at� agora ela n�o chegou.";
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
		mes "Eles est�o atrasados.";
		mes "Eles est�o atrasados, eles est�o atrasados, eles est�o atrasados!";
		next;
		mes "[Whichebain]";
		mes "Quanto tempo demora para chegar minha encomenda?";
		mes "Normalmente, a Guilda de Ferreiros de Geffen � bastante r�pida...";
		next;
		emotion (e_lv);
		mes "[Whichebain]";
		mes "Ooohh...";
		mes "Isto � muito agoniante...";
		close;
	} else {
		if (blacksmithq_2 == 2 && countitem(Gladius) > 0) {
			mes "[Whichebain]";
			mes "Voc� veio da Guilda de Ferreiros de Einbroch?";
			mes "Entregue esta mensagem para o Geschupenschte!";
			next;
			mes "[Whichebain]";
			mes "'^660000Voc� est� atrasado!";
			mes "N�o t�m id�ia do quanto eu estive esperando?!^000000'";
			next;
			mes "[Whichebain]";
			mes "Mas, este � um item totalmente artesanal.";
			mes "Diga a ele que estou satisfeito com a qualidade do trabalho.";
			next;
			emotion (e_lv);
			mes "[Whichebain]";
			mes "Aqui est� o recibo.";
			mes "Eu acho que voc� fez um bom trabalho.";
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
			mes "Voc� veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas at� agora ela n�o chegou.";
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
		mes "Quando � que finalmente vai chegar a espada que eu pedi?";
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
			mes "Isto � �timo.";
			mes "Muito melhor do que eu esperava.";
			next;
			mes "[Krongast]";
			mes "Com esta espada...";
			mes "Minhas t�cnicas especiais v�o ficar muito mais poderosas!";
			mes "Eu posso at� ser capaz de aperfei�oar minhas t�cnicas de velocidade!";
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
			mes "Voc� veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas at� agora ela n�o chegou.";
			close;
		}
	}
}

// ------------------------------------------------------------------
payon,214,79,4	script	Talpiz#blacksmithq	1_M_ORIENT01,{
	if (!blacksmithq) {
		mes "[Talpiz]";
		mes "Eh...";
		mes "Quando meu pedido chegar�?";
		next;
		mes "[Talpiz]";
		mes "Um Arbaleste personalizado feito com um estojo de qualidade para segurar seu tapa-olho.";
		mes "S� uma pessoa pode fazer uma coisa dessas...";
		next;
		mes "[Talpiz]";
		mes "Ahhhhhh...";
		mes "A espera � agoniante!";
		close;
	} else {
		if (blacksmithq_2 == 4 && countitem(Arbalest) > 0) {
			mes "[Talpiz]";
			mes "*wheet whoo*";
			mes "Muito bom!!";
			next;
			mes "[Talpiz]";
			mes "Este � realmente um item personalizado de qualidade.";
			mes "Eu adoro como tem um estojo para o tapa-olho!";
			mes "Eu realmente adorei!";
			next;
			mes "[Talpiz]";
			mes "Obrigado!";
			mes "Por algo desta qualidade, eu at� posso vend�-lo por um pre�o elevado, mesmo depois que eu usei ele!";
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
			mes "Voc� veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas at� agora ela n�o chegou.";
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
			mes "� voc� que veio me trazer meu sabre?";
			next;
			mes "[Bismarc]";
			mes "Uau!!!.";
			mes "Estava muito ancioso esperando por isso.";
			mes "Obrigado por voc� te-lo trazido para mim!";
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
			mes "Voc� veio da Guilda dos Ferreiros?";
			mes "Estou esperando minha encomenda, mas at� agora ela n�o chegou.";
			close;
		}
	}
}

// ------------------------------------------------------------------
ein_in01,24,41,5	script	Mitehmaeeuh#blacksmithq	4_F_JOB_BLACKSMITH,{
	if (blacksmithq == 7) {
		emotion e_hmm;
		mes "[Mitehmaeeuh]";
		mes "Oh... ent�o � voc� quem quer se tornar ferreiro?";
		mes "Legal, heh heh.";
		mes "N�o � por ter passado pelo teste passado que voc� ser� promovido de Mercador a Ferreiro de imediato.";
		next;
		mes "[Mitehmaeeuh]";
		mes "Quanto voc� realmente sabe sobre forja?";
		mes "Est� pronto para que fa�a algumas perguntas?";
		next;
		if (select("Sim","N�o") == 1) {
			mes "[Mitehmaeeuh]";
			mes "Certo...";
			mes "Meu teste � simples.";
			mes "Farei cinco perguntas.";
			mes "Se errar uma, voc� falha.";
			mes "E n�o direi qual voc� errou.";
			next;
			mes "[Mitehmaeeuh]";
			mes "Por favor, ou�a e responda cuidadosamente...";
			next;
			switch(rand(3)) {
				case 1:
				mes "[Mitehmaeeuh]";
				mes "1. Qual habilidade � pr� requisito para aprender a habilidade ^8e6b23Desconto^000000?";
				next;
				if (select("Usar Carrinho Level 3","Identificar Item","Mammonita Level 10","Aumentar Capacidade de Carga") == 4) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "2. Quando voc� ataca com ^8e6b23Matelo de Thor^000000, qual efeito de condi��o voc� pode inflingir nos inimigos?";
				next;
				if (select("Atordoamento","Cegueira","Caos","Sil�ncio") == 1) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "3. Quanto de zeny � gasto ao utilizar ^8e6b23Mammonita^000000 no NV 10?";
				next;
				if (select("900 Zeny","1000 Zeny","2000 Zeny","100,000 Zeny") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "4. Qual � a taxa de desconto quando a habilidade ^8e6b23Desconto^000000 est� no n�vel m�ximo?";
				next;
				if (select("21%","22%","23%","24%") == 4) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "5. Qual � a m�xima porcentagem que voc� pode lucrar.";
				mes "Com itens vendidos quando a habilidade ^8e6b23Superfaturar^000000 estiver no m�ximo?";
				next;
				if (select("21%","22%","23%","24%") == 3) {
					.@bs_q += 1;
				}
				break;
				case 2:
				mes "[Mitehmaeeuh]";
				mes "1. Qual dos seguintes monstros dropa a�o?";
				next;
				if (select("Zerom","ChonChon","Esqueleto Oper�rio","R�quiem") == 3) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "2. Qual das seguintes pedras pode ser feita de Sangue Escarlate?";
				next;
				if (select("Cora��o Flamejante","Vento Bruto","Natureza Grandioza","Gelo M�stico") == 1) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "3. Qual das seguintes pedras � dropada do mostro Deniro?";
				next;
				if (select("Frescor do Vento","Sangue Escarlate","Vida Verdejante","Cristal Azul") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "4. Qual das seguintes propriedades � vuner�vel a arma de propriedade Vento?";
				next;
				if (select("Fogo","�gua","Terra","Vento") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "5. Quantos Min�rios de Ferro s�o necess�rios para fazer 1 A�o?";
				next;
				if (select("5 Min�rio de Ferro","4 Min�rio de Ferro","3 Min�rio de Ferro","6 Min�rio de Ferro") == 1) {
					.@bs_q += 1;
				}
				break;
				default:
				mes "[Mitehmaeeuh]";
				mes "1. O que voc� geralmente faz quando voc� encontra algu�m por acaso na rua?";
				next;
				switch(select("Pergunto o que precisam","Tenho uma conversa r�pida","Ignoro","Dou alguns itens")) {
					case 1:
					case 2:
					.@bs_q += 1;
					break;
					default:
					break;
				}
				mes "[Mitehmaeeuh]";
				mes "2. Em qual cidade";
				mes "voc� pode aprender as habilidades ^8e6b23Grito de Guerra^000000 e ^8e6b23Personalizar Carrinho^000000?";
				next;
				if (select("Al De Baran","Alberta","Morroc","Izlude") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "3. Do centro de Einbroch, em qual dire��o fica a Guilda dos Ferreiros?";
				next;
				if (select("Noroeste","Sudeste","Sudoeste","Norte") == 2) {
					.@bs_q += 1;
				}
				mes "[Mitehmaeeuh]";
				mes "4. Em qual cidade t�pica dos Ferreiros?";
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
			mes "S� s�o essas perguntas mesmo...";
			mes "Por mais simples que sejam elas s�o para saber se voc� ser� capaz de se juntar a nossa Guilda.";
			next;
			if (.@bs_q != 5) {
				mes "[Mitehmaeeuh]";
				mes "E olha s�, voc� n�o passou no question�rio.";
				mes "Ter� que estudar mais se quiser se tornar "+(Sex == SEX_MALE ? "um Ferreiro" : "uma Ferreira")+".";
				close;
			} else {
				mes "[Mitehmaeeuh]";
				mes "Muito bem";
				mes "Parab�ns!";
				mes "Voc� passou!";
				next;
				mes "[Mitehmaeeuh]";
				mes "Entretanto, n�o deixe seu sucesso lhe tornar superconfiante.";
				mes "A vida de um Ferreiro n�o � f�cil.";
				mes "Como prova de que voc� passou no teste, eu lhe dou este Martelo do Ferreiro.";
				blacksmithq = 8;
				getitem (Hammer_Of_Blacksmith,1);
				changequest (2014,2015);
				next;
				mes "[Mitehmaeeuh]";
				mes "Agora retorne at� o Sr. Altiregen";
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
		mes "Ah, voc� acabou de fazer o teste de Ferreiro!";
		next;
		mes "[Mitehmaeeuh]";
		mes "Por que n�o volta ao Sr. Altiregen?";
		next;
		mes "[Mitehmaeeuh]";
		mes "N�o se esque�a de levar o Martelo do Ferreiro com voc�!";
		close;
	} else {
		emotion (e_hmm);
		mes "[Mitehmaeeuh]";
		mes "Tive que lidar com o calor, enquanto estive em Morroc";
		mes "e agora eu tenho que lidar com a fuma�a em Einbroch!";
		next;
		mes "[Mitehmaeeuh]";
		mes "Mas, eu tenho que admitir que este � um lugar perfeito para Ferreiros, porque n�s temos suprimento em abund�ncia de materiais de forja, bem como equipamento de primeira.";
		next;
		mes "[Mitehmaeeuh]";
		mes "N�s, Ferreiros, estamos dando o m�ximo de n�s para forjar as melhores armas.";
		next;
		mes "[Mitehmaeeuh]";
		mes "N�s temos nossa honra nisso!";
		close;
	}
}
