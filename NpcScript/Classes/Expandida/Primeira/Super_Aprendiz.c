
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
| - Copyright: Spell Master (26/09/2017)                            |
| - Info: Quest de Mudan�a de Classe para Super Aprendiz.           |
| - Nota: Possui 1 funcion�ria Kafra para aluguel de Carrinho.      |
\*-----------------------------------------------------------------*/

aldeba_in,223,167,3	script	Tzerero#supernovq	4_M_SEAMAN,{
	if (BaseJob == Job_Novice) {
		if (!supernovq) {
			mes("[Tzerero]\n"
				"Hmm?\n"
				"Eu percebo em voc� um grande desejo de aprender...\n"
				"Sim! Olhando de perto, eu vejo que voc� tem a �nsia do Super Aprendiz!");
			next;
			mes("[Tzerero]\n"
				"Que tal?\n"
				"Junte-se ao Clube do Aprendiz e seja algu�m humilde, que vive para aprender novidades.\n"
				"Viva uma vida humilde e n�o se prenda a uma s� classe.\n"
				"Voc� deseja curtir a vida e divertir-se com a eterna busca de novidades!");
			next;
			mes("[Tzerero]\n"
				"Ao se juntar ao nosso clube voc� passar� por uma pequena transforma��o.\n"
				"Deixar� de ser um Aprendiz para ser um Super Aprendiz!");
			next;
			switch (select("N�o, obrigado...", "Quero ser Super Aprendiz", "Conte-me mais")) {
				case 1:
				mes("[Tzerero]\n"
					"Ora, voc� ainda n�o percebeu a beleza da vida humilde de um aprendiz.\n"
					"Tudo bem, � o que voc� escolheu para sua vida.");
				next;
				mes("[Tzerero]\n"
					"Se mudar de id�ia, me procure.");
				next;
				mes("[Tzerero]\n"
					"Ah... Talvez, quando o Clube crescer ou se tornar mais influente.\n"
					"As condi��es para juntar-se a n�s sejam maiores, quem sabe?");
				close;
				case 2:
				if (getskilllv("NV_BASIC") < 9) {
					mes("[Tzerero]\n"
						"Ops... Que pena!\n"
						"Voc� ainda n�o est� pront"+(Sex == SEX_MALE ? "o":"a")+" ainda.\n"
						"Volte depois que aprender suas habilidades b�sicas.");
					close;
				} else if (BaseLevel < 45) {
					mes("[Tzerero]\n"
						"Ops... Que pena!\n"
						"Voc� ainda n�o est� pront"+(Sex == SEX_MALE ? "o":"a")+" ainda.\n"
						"Volte depois tiver alca�ado pelo menos Level 45 de Base.");
					close;
				}
				break;
				case 3:
				mes("[Tzerero]\n"
					"Hum-hum, deixe-me contar algo sobre o clube.\n"
					"O fundador do Clube do Aprendiz e presidente de honra do clube, Sr. Kimu-shon.\n"
					"Ele se sente triste pelas pessoas terem esquecido a beleza de uma vida de aprendizado...");
				next;
				mes("*^777777Tzerero passa aproximadamente 30 minutos contando a hist�ria do clube^000000*.");
				next;
				mes("[Tzerero]\n"
					"...e essa � a raz�o da exist�ncia do Clube do Aprendiz.\n"
					"Se o Clube do Aprendiz crescer mais...\n"
					"Com certeza esses conceitos v�o virar perguntas de um teste de admiss�o.");
				next;
				mes("[Tzerero]\n"
					"Ent�o o que me diz, deseja ser um eterno aprendiz?");
				next;
				if (select("N�o mesmo!","Claro que quero!") == 1) {
					mes("[Tzerero]\n"
						"Ora, voc� ainda n�o percebeu a beleza da vida humilde de um aprendiz.\n"
						"Tudo bem, � o que voc� escolheu para sua vida.");
					close;
				}
				break;
			}
			mes("[Tzerero]\n"
				"Oh! Que �timo!\n"
				"Voc� tem mesmo a alma do Aprendiz!\n"
				"N�o se acham muitos como voc� hoje em dia!\n"
				"Parab�ns!\n"
				"Fez uma excelente escolha!");
			next;
			mes("[Tzerero]\n"
				"Honestamente, nada � melhor que a liberdade.\n"
				"N�o acha?");
			next;
			mes("[Tzerero]\n"
				"Apesar de sermos muito humildes, ainda � preciso um pouco mais que querer para se juntar a n�s. \n"
				"H� um pequeno teste de qualifica��o...");
			next;
			mes("[Tzerero]\n"
				"Para provar sua paix�o pela simplicidade da vida.\n"
				"Gostaria que voc� fosse atr�s de monstros f�ceis e trouxesse alguns itens comuns.\n"
				"Hmm... Traga-me:");
			next;
			mes("[Tzerero]\n"
				"^ff000030 Mucos pegajosos^000000 e\n"
				"^ff000030 Resinas^000000\n"
				"Que tal, muito simples n�o �?");
			supernovq = 1;
			setquest(6010);
			close;
		} else if (supernovq == 1) {
			if (countitem(Sticky_Mucus) > 29 && countitem(Resin) > 29) {
				delitem(Sticky_Mucus,30);
				delitem(Resin,30);
				mes("[Tzerero]\n"
					"Eu pressinto que o que voc� quer � ser algu�m humilde.\n"
					"Que vive para aprender o maior n�mero de coisas poss�vel.\n"
					"Esse ser� seu destino se voc� se juntar ao Clube do Aprendiz.");
				next;
				mes("[Tzerero]\n"
					"Ok, ent�o agora eu farei o que foi combinado e transformarei voc� em um Super Aprendiz...\n"
					"H�!? \n"
					"O que � isso atr�s de voc�!?");
				next;
				select("H�?","O qu�?");
				mes("*^777777Voc� se vira e olha mas n�o h� nada -\n"
					"Que coisa estranha!^000000*");
				next;
				if (!Upper) { jobchange(Job_SuperNovice); }
				else if (Upper == 2) { jobchange(Job_Super_Baby); }
				completequest(6010);
				callfunc("ClearJobQuest");
				mes("[Tzerero]\n"
					"Hahahahaha!\n"
					"Voc� caiu nessa!\n"
					"Fazer pegadinhas desse tipo � uma das divers�es favoritas do Clube do Aprendiz.\n"
					"O que achou da habilidade de Tzerero?");
				next;
				mes("[Tzerero]\n"
					"Hmm... Pegadinhas n�o s�o t�o importantes.\n"
					"O que importa mesmo � ter se tornado um Super Aprendiz.");
				next;
				mes("[Tzerero]\n"
					"E aqui est� um presente para voc� por ter se juntado ao nosso Clube.\n"
					"� uma das lend�rias armaduras criadas pelo Sr. Kimu-Shon!");
				getitem(G_Strings,1);
				next;
				mes("[Tzerero]\n"
					"Viva uma vida de divers�o e aprendizado, fa�a o nosso Clube brilhar.\n"
					"E viva uma vida feliz!");
				close;
			} else {
				mes("[Tzerero]\n"
					"Hmm, eu acho que voc� se esqueceu de trazer alguma coisa...\n"
					"Vou repetir.\n"
					"N�o se esque�a!");
				next;
				mes("[Tzerero]\n"
					"Voc� precisa trazer ^FF0000 30 Mucos Pegajosos^000000 e ^FF0000 30 Resinas^000000");
				close;
			}
		}
	} else {
		if (BaseJob == Job_SuperNovice) {
			mes("[Tzerero]\n"
				"Voc� � um membro do Clube do Aprendiz.\n"
				"Voc� recebeu seu treinamento e chegou pr�ximo � perfei��o.\n"
				"Aprender � a sua profiss�o!");
			next;
			mes("[Tzerero]\n"
				"Espero que voc� continue a aprender, e promover a exist�ncia e o talento de um Aprendiz.");
			close;
		} else {
			mes("[Tzerero]\n"
				"Hmm, voc� n�o � um Aprendiz.\n"
				"Meu nome � Tzerero e eu sou o encarregado do Clube do Aprendiz.");
			next;
			mes("[Tzerero]\n"
				"N�o h� lugar em nosso clube, para algu�m como voc�, que j� tem uma classe definida...\n"
				"Agora que voc� j� decidiu seu caminho na vida n�o h� mais como voltar atr�s.\n"
				"Por favor, compreenda nossa posic�o.");
			next;
			mes("[Tzerero]\n"
				"Cada um tem que seguir seu pr�prio caminho.\n"
				"S�o as diferen�as que tornam a vida bonita.\n"
				"Siga a vida que escolheu, e seja feliz!");
			close;
		}
	}
}

aldebaran,54,238,5	script	Funcion�ria Kafra#supernovq	4_F_KAFRA1,{
	cutin("kafra_01",2);
	mes("[Funcion�ria Kafra]");
	if (BaseJob == Job_SuperNovice) {
		mes("Devido a insistentes pedidos...\n"
			"N�s criamos um carrinho especialmente para os Super Aprendizes!\n"
			"Mas parece que a dire��o da Companhia das Kafras n�o gostou muito da id�ia.\n"
			"Ent�o temos que oferecer esse servi�o secretamente...");
		next;
		mes("[Funcion�ria Kafra]\n"
			"Voc� vai querer alugar o carrinho?\n"
			"A taxa � 1900 zeny");
		next;
		if (select("Sim, por favor", "N�o, obrigado") == 1) {
			if (!getskilllv("MC_PUSHCART")) {
				mes("[Funcion�ria Kafra]\n"
					"Primeiramente voc� deve aprender a habilidade.\n"
					"^ff0000Usar Carrinho^000000.\n"
					"Para poder alugar um.");
				close2; cutin("",255); end;
			} else if (checkcart() == 1) {
				mes("[Funcion�ria Kafra]\n"
					"Mas voc� j� possui um carrinho.");
				close;
			} else if (Zeny < 1900) {
				mes("[Funcion�ria Kafra]\n"
					"Voc� n�o tem dinheiro suficiente.\n"
					"O pre�o pelo aluguel do carrinho � de 1.900 zeny.");
				close2; cutin("",255); end;
			} else {
				setcart;
				mes("[Funcion�ria Kafra]\n"
					"Muito obrigada pela prefer�ncia.\n"
					"Mesmo n�o sendo oficial, foi um prazer serv�-l"+(Sex == SEX_MALE ? "o":"a")+".");
				close2; cutin("",255); end;
			}
		} else {
			mes("[Funcion�ria Kafra]\n"
				"Volte se mudar de id�ia!");
			close2; cutin("",255); end;
		}
	} else {
		mes("Me desculpe...\n"
			"Acho que n�o posso fazer nada por voc�.\n"
			"Por favor, procure outra funcion�ria Kafra ela poder� te ajudar.");
		close2; cutin("",255); end;
	}
}

