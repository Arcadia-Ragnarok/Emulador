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
| - Copyright: Spell Master (14/08/2017)                            |
| - Info: Quest de Mudan�a de Classe para Mercador.                 |
| - Nota:                                                           |
|   * Entrega na Cidade Morroc                                      |
|        Npc: morocc_in,146,99 (Dullihan#dyestuff)                  |
|        Arquivo: NpcScript/Comerciantes/Tinturas                   |
|   * Entrega na Ilha de Byalan                                     |
|        Npc: izlu2dun,106,58 (Funcion�ria Kafra#kafra_03::izlkaf2) |
|        Arquivo: NpcScript/Outros/Funcionarias_Kafra               |
\*-----------------------------------------------------------------*/

alberta_in,53,43,6	script	Chefe Mansur#merchantq	4_M_04,{
	if (Upper == 1) {
		if (Class == Job_Novice_High && (ADVJOB == Job_Whitesmith || ADVJOB == Job_Creator)) {
			mes "[Chefe Mansur]";
			mes "Faz bastante tempo que n�o nos vemos!";
			mes "Ei, voc� n�o deixou sua classe, n�o foi?";
			mes "Est� feliz?";
			next;
			mes "[Chefe Mansur]";
			mes "Nossa... Voc� realmente veio de Valhalla?!";
			mes "Uau, voc� j� percorreu um longo caminho...";
			next;
			if (getskilllv("NV_BASIC") < 9) {
				mes "[Chefe Mansur]";
				mes "Humm... Parece que voc� n�o est� pronto para se tornar mercador de novo.";
				mes "Primeiro termine de aprender as Habilidades B�sicas.";
				next;
				mes "[Chefe Mansur]";
				mes "N�o se preocupe, n�s vamos ter sempre um lugar nos Mercadores aberto para voc�.";
				mes "Basta voltar quando estiver pronto, ok?";
				close;
			} else {
				mes "[Chefe Mansur]";
				mes "Eu acho que � o destino nos encontrarmos denovo.";
				mes "Deixe-me transform�-lo em um Mercador!";
				next;
				jobchange(Job_Merchant_High);
				mes "[Chefe Mansur]";
				mes "Ah. Como � nost�lgico.";
				mes "Assim como nos velhos tempos!";
				mes "Tudo bem, d� o seu melhor!";
				close;
			}
		} else {
			mes "[Chefe Mansur]";
			mes "^333333*Suspiro*^000000";
			mes "Estou t�o entediado...";
			mes "Quando vou ouvir minha linda flor?";
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Merchant) {
			mes "[Chefe Mansur]";
			mes "Agora como mercador, voc� pode acumular riquezas facilmente.";
			close;
		} else {
			mes "[Chefe Mansur]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Guilda dos Mercadores.";
			mes "Aqui onde Aprendizes ganham licen�a para o com�rcio, tornando-se mercadores.";
			close;
		}
	} else {
		if (!merchantq) {
			mes "[Chefe Mansur]";
			mes "Ol� Aprendiz, o que lhe tr�s � Guilda dos Mercadores?";
			next;
			if (select("Eu quero ser mercador","Nada, s� estou olhando") == 2) {
				mes "[Chefe Mansur]";
				mes "Tudo bem, tenha um bom dia ent�o.";
				close;
			}
			if (getskilllv("NV_BASIC") < 9) {
				mes "[Chefe Mansur]";
				mes "Ent�o deveria pelo menos aprender suas \"Habilidades B�sicas\" primeiro.";
				close;
			}
			mes "[Chefe Mansur]";
			mes "Tudo bem, ent�o preencha seu nome nessa ficha de inscri��o.";
			mes "Tamb�m ter� que pagar 1.000 Zenys pela taxa de inscri��o.";
			mes "Voc� n�o precisar� pagar tudo agora, pode dar 500 Zenys agora, e mais 500 quando terminar o teste.";
			next;
			switch (select("Preencer a inscri��o","Teste do mercador?","Cancelar")) {
				case 1:
				mes "[Chefe Mansur]";
				mes strcharinfo(CHAR_NAME)+"?!";
				mes "Intere�ante seu nome.";
				mes "Agora vamos a taxa de inscri��o, como quer pagar?";
				next;
				switch (select("Pagar tudo (1.000 Zenys)","Pagar a metade (500) Zenys")) {
					case 1:
					mes "[Chefe Mansur]";
					if (Zeny < 1000) {
						mes "Onde est� os 1.000 Zenys?";
						mes "Terei que cancelar sua inscri��o.";
						close;
					} else {
						Zeny -= 1000;
						mes "�timo, �timo, �timo, pagando tudo agora voc� evita problemas no futuro.";
						merchantq_2 = 2;
					}
					break;
					case 2:
					mes "[Chefe Mansur]";
					if (Zeny < 500) {
						mes "Onde est� os 500 Zenys?";
						mes "Terei que cancelar sua inscri��o.";
						close;
					} else {
						Zeny -= 500;
						mes "Certo, mas lembre-se que ter� que pagar os 500 Zenys restantes no final do teste.";
						merchantq_2 = 1;
					}
					break;
				}
				switch (rand(1,8)) {
					// Entrega em Prontera
					case 1: merchantq_3 = 2485741; break;
					case 2: merchantq_3 = 2328137; break;
					// Entrega em Geffen
					case 3: merchantq_3 = 2989396; break;
					case 4: merchantq_3 = 2191737; break;
					// Entrega em Morroc
					case 5: merchantq_3 = 3012685; break;
					case 6: merchantq_3 = 3487372; break;
					// Entrega em Byalan
					case 7: merchantq_3 = 3318702; break;
					case 8: merchantq_3 = 3543625; break;
				}
				next;
				mes "[Chefe Mansur]";
				mes "Primeiramente v� ao dep�sito, aqui do lado em minha direita e retire o pacote de entrega.";
				next;
				mes "[Chefe Mansur]";
				if (merchantq_3 == 2485741 || merchantq_3 == 2328137) {
					mes "Depois leve at� a antiga Associa��o dos Espadachins em Prontera.";
					mes "E entregue a Funcion�ria Kafra que fica l� por perto.";
					setquest(1009);
				} else if (merchantq_3 == 2989396 || merchantq_3 == 2191737) {
					mes "Depois leve at� a Guilda dos Magos em Geffen.";
					mes "E entregue para o mago.";
					setquest(1010);
				} else if (merchantq_3 == 3012685 || merchantq_3 == 3487372) {
					mes "Depois leve at� a Morroc.";
					mes "E entregue para Java Dulian, um sujeito que costuma fazer tinturas por l�.";
					setquest(1011);
				} else if (merchantq_3 == 3318702 || merchantq_3 == 3543625) {
					mes "Depois leve at� a Ilha de Byalan.";
					mes "E entregue para Funcion�ria Kafra.";
					next;
					mes "[Chefe Mansur]";
					mes "Quando chegar at� ela por favor entregue essa mensagem para ela.";
					mes "N�o � nada de mais, apenas um pedido pessoal meu.";
					getitem(Delivery_Message,1);
					setquest(1012);
				}
				next;
				mes "[Chefe Mansur]";
				mes "Antes que eu me esque�a voc� vai precisar do n�mero para retirar o pacote.";
				mes "O n�mero �: ^3355ff"+merchantq_3+"^000000.";
				mes "Estarei esperando seu retorno.";
				merchantq = 2;
				close;
				case 2:
				mes "[Chefe Mansur]";
				mes "Um mercador viaja a muitos lugares, para obter itens e revender-los a um pre�o maior.";
				mes "E esse ser� o teste, voc� dever� viajar e realizar uma entrega.";
				mes "Assim saberemos se voc� � capaz de ser "+(Sex == SEX_MALE ? "um Mercador":"uma Mercadora")+".";
				close;
				case 3:
				mes "[Chefe Mansur]";
				mes "Tudo bem, tenha um bom dia ent�o.";
				close;
			}
		} else if (merchantq == 2 || merchantq == 3) {
			mes "[Chefe Mansur]";
			mes "V� ao dep�sito, aqui do lado em minha direita e retire o pacote de entrega.";
			next;
			mes "[Chefe Mansur]";
			if (merchantq_3 == 2485741 || merchantq_3 == 2328137) {
				mes "Depois leve at� a antiga Associa��o dos Espadachins em Prontera.";
				mes "E entregue a Funcion�ria Kafra que fica l� por perto.";
			} else if (merchantq_3 == 2989396 || merchantq_3 == 2191737) {
				mes "Depois leve at� a antiga Guilda dos Magos em Geffen.";
				mes "E entregue para o mago.";
			} else if (merchantq_3 == 3012685 || merchantq_3 == 3487372) {
				mes "Depois leve at� a Morroc.";
				mes "E entregue para Java Dullihan, um sujeito que costuma fazer tinturas por l�.";
			} else if (merchantq_3 == 3318702 || merchantq_3 == 3543625) {
				mes "Depois leve at� a Ilha de Byalan.";
				mes "E entregue para Funcion�ria Kafra.";
			}
			next;
			mes "[Chefe Mansur]";
			if (merchantq == 2) {
				mes "O n�mero para retirar o pacote �: ^3355ff"+merchantq_3+"^000000.";
			}
			mes "Estarei esperando seu retorno.";
			close;
		} else if (merchantq == 4) {
			mes "[Chefe Mansur]";
			mes "Voc� voltou.";
			if ( (merchantq_3 == 1 && !countitem(Merchant_Voucher_1)) || (merchantq_3 == 2 && !countitem(Merchant_Voucher_2)) || (merchantq_3 == 3 && !countitem(Merchant_Voucher_3)) || (merchantq_3 == 4 && !countitem(Merchant_Voucher_4)) || (merchantq_3 == 5 && !countitem(Merchant_Voucher_5)) || (merchantq_3 == 6 && !countitem(Merchant_Voucher_6)) || (merchantq_3 == 7 && !countitem(Merchant_Voucher_7)) || (merchantq_3 == 8 && !countitem(Merchant_Voucher_8)) ) {
				mes "Mas onde est� o recibo da entrega?";
				close;
			} else {
				if (questprogress(1009)) { completequest(1009); }
				if (questprogress(1010)) { completequest(1010); }
				if (questprogress(1011)) { completequest(1011); }
				if (questprogress(1012)) { completequest(1012); }
				if (countitem(Merchant_Voucher_1)) { delitem(Merchant_Voucher_1,1); }
				if (countitem(Merchant_Voucher_2)) { delitem(Merchant_Voucher_2,1); }
				if (countitem(Merchant_Voucher_3)) { delitem(Merchant_Voucher_3,1); }
				if (countitem(Merchant_Voucher_4)) { delitem(Merchant_Voucher_4,1); }
				if (countitem(Merchant_Voucher_5)) { delitem(Merchant_Voucher_5,1); }
				if (countitem(Merchant_Voucher_6)) { delitem(Merchant_Voucher_6,1); }
				if (countitem(Merchant_Voucher_7)) { delitem(Merchant_Voucher_7,1); }
				if (countitem(Merchant_Voucher_8)) { delitem(Merchant_Voucher_8,1); }
				merchantq = 5;
				mes "Muito bem, completou o teste de Guilda e j� pode ser "+(Sex == SEX_MALE ? "uma Mercador":"uma Mercadora")+".";
				next;
				if (merchantq_2 != 2) {
					mes "[Chefe Mansur]";
					mes "Mas ainda falta voc� pagar os 500 Zenys de sua taxa de inscri��o.";
					next;
					if (merchantq_2 == 3) {
						mes "[Chefe Mansur]";
						mes "Entretanto por voc� ter me feito o favor de entregar a minha mensagem.";
						mes "N�o vou lhe cobrar esse adicional";
						next;
						mes "[Chefe Mansur]";
						mes "Digamos apenas que fica por conta da casa pela sua gentileza em me ajudar.";
						mes "Ent�o quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para ser Mercador.";
						mes "Venha falar comigo novamente.";
						merchantq = 6;
						close;
					} else {
						mes "[Chefe Mansur]";
						mes "Ent�o quando tiver o montante de 500 Zenys fale comigo novamente.";
						mes "Voc� como deseja ser "+(Sex == SEX_MALE ? "um Mercador":"uma Mercadora")+" j� deveria saber que as coisas n�o s�o de gra�a.";
						close;
					}
				} else {
					mes "Tudo certo para voc� "+(Sex == SEX_MALE ? "um Mercador":"uma Mercadora")+".";
					mes "Mas antes que eu te promova.";
					mes "Pense bem antes de sua decis�o, porque se vir� Mercador agora, n�o poder� escolher outra classe.";
					mes "Mas mercadores podem ser tornar Ferreiros ou Alquimistas.";
					next;
					mes "[Chefe Mansur]";
					mes "Quando tiver se decidid"+(Sex == SEX_MALE ? "o":"a")+" venha falar comigo novamente.";
					merchantq = 6;
					close;
				}
			}
		} else if (merchantq == 5) {
			mes "[Chefe Mansur]";
			if (Zeny < 500) {
				mes "Parece que no momento voc� n�o tem Zenys o suficiente.";
				mes "Lembre-se que ainda precisa pagar 500 Zenys.";
				close;
			} else {
				Zeny -= 500;
				merchantq = 6;
				mes "[Chefe Mansur]";
				mes "Tudo certo para voc� "+(Sex == SEX_MALE ? "um Mercador":"uma Mercadora")+".";
				mes "Mas antes que eu te promova.";
				mes "Pense bem antes de sua decis�o, porque se vir� Mercador agora, n�o poder� escolher outra classe.";
				mes "Mas mercadores podem ser tornar Ferreiros ou Alquimistas.";
				next;
				mes "[Chefe Mansur]";
				mes "Quando tiver se decidid"+(Sex == SEX_MALE ? "o":"a")+" venha falar comigo novamente.";
				close;
			}
		} else if (merchantq == 6) {
			mes "[Chefe Mansur]";
			mes "J� se decidil?";
			mes "Quer ser "+(Sex == SEX_MALE ? "um Mercador":"uma Mercadora")+" agora?";
			next;
			if (select("Sim, agora mesmo","Vou pensar mais nisso") == 2) {
				mes "[Chefe Mansur]";
				mes "Serto, quando se decidir fale comigo novamente.";
				close;
			}
			mes "[Chefe Mansur]";
			mes "Que de agora em diante possa fazer fortuna como "+(Sex == SEX_MALE ? "um Mercador":"uma Mercadora")+".";
			jobchange(Job_Merchant);
			callfunc("ClearJobQuest");
			close;
		}
	}
}

// ------------------------------------------------------------------
alberta_in,28,29,2	script	Mercador#merchantq	4_M_01,{
	if (!merchantq) {
		mes "[Mercador da Guilda]";
		mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Guilda dos mercadores.";
		close;
	} else if (merchantq == 2) {
		mes "[Mercador da Guilda]";
		mes "Seu nome � "+strcharinfo(CHAR_NAME)+"?";
		select("Sim, me mandaram aqui");
		next;
		mes "[Mercador da Guilda]";
		mes "Claro seu nome est� na lista.";
		mes "Qual � o n�mero de s�rie do pacote de entrega?";
		input(.@input);
		next;
		if ( (!.@input || .@input > 5000000) || (.@input != merchantq_3) ) {
			mes "[Mercador da Guilda]";
			mes "Esse n�mero de s�rie n�o condiz com nenhum pacote de entrega.";
			close;
		} else {
			if (merchantq_3 == 2485741 || merchantq_3 == 2989396 || merchantq_3 == 3012685 || merchantq_3 == 3318702) {
				getitem(Merchant_Box_1,1);
			} else if (merchantq_3 == 2328137 || merchantq_3 == 2191737 || merchantq_3 == 3487372 || merchantq_3 == 3543625) {
				getitem(Merchant_Box_2,1);
			}
			mes "[Mercador da Guilda]";
			mes "Aqui est� o pacote de entrega, agora v� e tome muito cuidado com a encomenda.";
			merchantq = 3;
			close;
		}
	} else if (merchantq == 3) {
		mes "[Mercador da Guilda]";
		if ( (merchantq_3 == 2485741 || merchantq_3 == 2989396 || merchantq_3 == 3012685 || merchantq_3 == 3318702) && !countitem(Merchant_Box_1) ) {
			mes "Como voc� pode perder o pacote de entrega?!";
			mes "Tome mais cuidado.";
			getitem(Merchant_Box_1,1);
		} else if ( (merchantq_3 == 2328137 || merchantq_3 == 2191737 || merchantq_3 == 3487372 || merchantq_3 == 3543625) && !countitem(Merchant_Box_2)) {
			getitem(Merchant_Box_2,1);
			mes "Como voc� pode perder o pacote de entrega?!";
			mes "Tome mais cuidado.";
			close;
		} else {
			mes "V� logo, algu�m est� esperando por essa encomenda.";
			close;
		}
	} else if (merchantq >= 4) {
		mes "[Mercador da Guilda]";
		mes "Agora que voc� conpletou seu teste.";
		mes "Deveria ir falar com o Chefe Mansur.";
		close;
	}
}

// ------------------------------------------------------------------
prontera,248,42,0	script	Funcion�ria Kafra#merchantq	4_F_KAFRA2,{
	cutin("kafra_02",2);
	mes "[Funcion�ria Kafra]";
	if (merchantq == 3) {
		if (merchantq_3 == 2485741 || merchantq_3 == 2328137) {
			if (countitem(Merchant_Box_1) || countitem(Merchant_Box_2)) {
				mes "Voc� deve ter sido enviad"+(Sex == SEX_MALE ? "o":"a")+" pela Guilda dos Mercadores.";
				mes "Para me entregar algo.";
				next;
				if (select("Sim, est� aqui sua encomenda","N�o sei do que est� falando") == 2) {
					mes "[Funcion�ria Kafra]";
					mes "Estranho achei que era voc�.";
					close2; cutin("",255); end;
				}
				mes "[Funcion�ria Kafra]";
				mes "Muito obrigada.";
				mes "Agora leve esse recibo para a Guilda dos Mercadores.";
				mes "Ele prova que voc� fez a entrega.";
				if (countitem(Merchant_Box_1)) {
					merchantq = 4;
					merchantq_3 = 1;
					getitem(Merchant_Voucher_1,1);
					delitem(Merchant_Box_1,1);
				} else if (countitem(Merchant_Box_2)) {
					merchantq = 4;
					merchantq_3 = 2;
					getitem(Merchant_Voucher_2,2);
					delitem(Merchant_Box_2,1);
				}
				close2; cutin("",255); end;
			} else {
				mes "Acho que voc� n�o tem a encomenda que pedi a Guilda dos Mercadores.";
				close2; cutin("",255); end;
			}
		} else {
			mes "Acho que voc� n�o tem a encomenda que pedi a Guilda dos Mercadores.";
			close2; cutin("",255); end;
		}
	} else if (merchantq == 4) {
		mes "Muito obrigada.";
		mes "Agora leve esse recibo para a Guilda dos Mercadores.";
		mes "Ele prova que voc� fez a entrega.";
		close2; cutin("",255); end;
	} else {
		mes "Ol�, estou esperando um encomenda.";
		mes "Se deseja usar os servi�os da Corpora��o Kafra.";
		mes "Por favor procure outra funcion�ria.";
		mes "E desculpe pelo incoveniente.";
		close2; cutin("",255); end;
	}
}

// ------------------------------------------------------------------
geffen_in,155,122,4	script	Estudioso#merchantq	1_M_01,{
	mes "[Estudioso]";
	if (merchantq == 3) {
		if (merchantq_3 == 2989396 || merchantq_3 == 2191737) {
			if (countitem(Merchant_Box_1) || countitem(Merchant_Box_2)) {
				mes "Voc� deve ter sido enviad"+(Sex == SEX_MALE ? "o":"a")+" pela Guilda dos Mercadores.";
				mes "Para me entregar algo.";
				next;
				if (select("Sim, est� aqui sua encomenda","N�o sei do que est� falando") == 2) {
					mes "[Estudioso]";
					mes "Estranho achei que era voc�.";
					close;
				}
				mes "[Estudioso]";
				mes "Muito obrigado.";
				mes "Agora leve esse recibo para a Guilda dos Mercadores.";
				mes "Ele prova que voc� fez a entrega.";
				if (countitem(Merchant_Box_1)) {
					merchantq = 4;
					merchantq_3 = 3;
					getitem(Merchant_Voucher_3,1);
					delitem(Merchant_Box_1,1);
				} else if (countitem(Merchant_Box_2)) {
					merchantq = 4;
					merchantq_3 = 4;
					getitem(Merchant_Voucher_4,2);
					delitem(Merchant_Box_2,1);
				}
				close;
			} else {
				mes "Acho que voc� n�o tem a encomenda que pedi a Guilda dos Mercadores.";
				close;
			}
		} else {
			mes "Acho que voc� n�o tem a encomenda que pedi a Guilda dos Mercadores.";
			close;
		}
	} else if (merchantq == 4) {
		mes "Muito obrigado.";
		mes "Agora leve esse recibo para a Guilda dos Mercadores.";
		mes "Ele prova que voc� fez a entrega.";
		close;
	} else {
		mes "Ol�, estou esperando uma encomenda da Guilda dos Mercadores.";
		mes "Para continuar meus estudos sobre a Magia dos Magos.";
		close;
	}
}

