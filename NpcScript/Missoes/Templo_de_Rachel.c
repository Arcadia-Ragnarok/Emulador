/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: L0ne_W0lf                                            |
| - Info: Quest de Acesso ao templo de Rachel.                      |
| - Info: Doa��o ao templo de Rachel.                               |
| * Pr� requisito para a quest da Base do Vulc�o.                   |
\*-----------------------------------------------------------------*/

ra_temple,116,174,3	script	Nemma#ra_temple	4_F_TRAINEE,{
	if ($rachel_donate < 100000) {
		cutin("ra_nemma03",2);
		mes "[Sacerdotisa Nemma]";
		mes "Bom dia, aventureir"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Posso perguntar o que te traz ao templo hoje?";
		next;
		if (select("Nada, s� estou olhando","Eu vim para rezar") == 1) {
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Eu acredito que muitos estrangeiros n�o conhecem a nossa cren�a ent�o eu suponho que eles n�o viriam aqui rezar...";
			mes "Bem, eu espero que voc� goste de vir aqui, aventureiro";
			close2;
			cutin("",255);
			end;
		}
		mes "[Sacerdotisa Nemma]";
		mes "Oh! fico feliz em saber que nosso tipo de espiritualidade � praticada em outros pa�ses.";
		mes "Voc� sabe, n�s do Templo de Cheshrumnir estaremos realizando um festival aqui no templo.";
		next;
		cutin("ra_nemma01",2);
		mes "[Sacerdotisa Nemma]";
		mes "N�s estamos aceitando doa��es para o festival, ent�o n�s agradeceremos se voc� puder fazer uma contribui��o.";
		mes "Independente disso, n�s convidamos voc� a celebrar a gra�a da Deusa conosco";
		emotion(e_ho);
		next;
		mes "[Sacerdotisa Nemma]";
		mes "H� um Sumo sacerdote que n�o concorda com a coleta de dinheiro do templo dos patronos.";
		mes "Mas depende de voc�, se voc� quer doar ou n�o.";
		mes "Se voc� doar, voc� pode ser capaz de ganhar um pr�mio";
		next;
		mes "[Sacerdotisa Nemma]";
		mes "Voc� pode usar nossos Bilhetes de Loteria para ganhar algo legal do nosso Armaz�m do Templo.";
		mes "Entretando, voc� doa 50,000 zenys para cada Bilhete de Loteria.";
		mes "O que, por acaso tamb�m � a quantidade m�nima de doa��o";
		next;
		cutin("ra_nemma03",2);
		mes "[Sacerdotisa Nemma]";
		mes "Os pr�mios que s�o dados aos doadores s�o escolhidos tamb�m aleat�riamente.";
		mes "Ent�o eu n�o tenho como te dizer o que voc� ganhar�.";
		mes "Voc� estaria interessado em fazer uma doa��o?";
		next;
		if (select("N�o, Obrigado","Claro") == 1) {
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Eu entendo.";
			mes "Bem, talv�z uma outra hora.";
			mes "Que Freya te aben�oe em todas as suas jornadas.";
			mes "E que a gra�a da Deusa sempre nos ajude em tudo o que fizemos";
			close2;
			cutin("",255);
			end;
		}
		mes "[Sacerdotisa Nemma]";
		mes "�timo! Quanto voc� gostaria";
		mes "de doar? N�s s� podemos";
		mes "aceitar doa��es acima de 50,000 zeny, e n�s podemos apenas aceitar at� 150,000 zeny de uma vez.";
		mes "� um pouco complicdo, eu sei...";
		next;
		switch (select("50,000z - 1 Bilhete de Loteria","100,000z - 2 Bilhete de Loteria","150,000z - 3 Bilhete de Loteria","Cancelar")) {
			case 1: .@value$ = "50,000";  .@Ticket = 1; break;
			case 2: .@value$ = "100,000"; .@Ticket = 2; break;
			case 3: .@value$ = "150,000"; .@Ticket = 3; break;
			case 4:
			cutin("ra_nemma02",2);
			mes "[Sacerdotisa Nemma]";
			mes "Eu entendo que deveremos pensar nestante para se separar de uma quantidade de dinheiro como 50,000 zeny.";
			mes "Mesmo assim, Freya est� prontegendo-o sempre, onde quer que voc� v�";
			close2;
			cutin("",255);
			end;
			break;
		}
		cutin("ra_nemma01",2);
		mes "[Sacerdotisa Nemma]";
		mes "Assim,"+strcharinfo(PC_NAME)+"...";
		mes "Eu quero ter certeza que voc� quer doar"+.@value$+" zeny, e receber"+.@Ticket;
		if (.@Ticket == 1) {
			mes "Bilhete de Loteria. Est� certo?";
		} else {
			mes "Bilhetes de Loteria. Est� certo?";
		}
		next;
		if (Zeny >= .@Ticket * 50000) {
			if (!checkweight(Temple_Lottery_Ticket,.@Ticket)) {
				cutin("ra_nemma02",2);
				mes "[Sacerdotisa Nemma]";
				mes "Eu posso acreditar isto escassamente...";
				mes "Voc� est� levando tantos materias voc� n�o tem capacidade para carregar um ingresso de loteria.";
				mes "Seria melhor se voc� colocasse algums coisas no seu armaz�m, sim?";
				next;
				cutin("ra_nemma01",2);
				mes "[Sacerdotisa Nemma]";
				mes "N�o se preocupe, eu ainda estarei aqui depois que voc� tiver mais espa�o dispon�vel em seu invent�rio.";
				mes "Volte logo, e doe se voc� puder, ok?";
				close2;
				cutin("",255);
				end;
			}
			$rachel_donate += .@Ticket;
			Zeny -= .@Ticket * 50000;
			getitem(Temple_Lottery_Ticket,.@Ticket);
			if ($rachel_donate >= 100000) {
				cutin("ra_nemma03",2);
				mes "[Sacerdotisa Nemma]";
				mes "Ai est� voc�";
				mes "Muito obrigado por";
				mes "sua doa��o! eu estou certa";
				mes "Que Freya est� sorrindo para voc�, e ser� recompensado  por sua generosidade";
				close2;
				cutin("",255);
				end;
			} else {
				.@Remaining = 10000 - $rachel_donate;
				cutin("ra_nemma03",2);
				mes "[Sacerdotisa Nemma]";
				mes "Muito obrigado!";
				mes "N�s estaremos continuando aceitando doa��es at� que alcan�emos nosso objetivo.";
				mes "Uma vez n�s recebemos "+.@Remaining+" mais doa��es recebemos a quantia de 50,000 zeny.";
				mes "Mosso objetivo estava quase sendo alcan�ado.";
				next;
				mes "[Sacerdotisa Nemma]";
				mes "Se voc� est� sentindo meio inclinado, volte depois e fa�a outra contribui��o.";
				mes "Obrigado denovo, e Freya pode estar sempre olhando para voc�.";
				close2;
				cutin("",255);
				end;
			}
		} else {
			.@donate$ = .@Ticket * 50000;
			mes "[Sacerdotisa Nemma]";
			mes "Eu sinto muito, mas voc� tem menos que "+.@donate$+" zeny...";
			mes "Eu sei que est� perguntando muito mais essas s�o as regras que eu tenho que seguir, ent�o";
			mes "Bom, talvez outra hora, sim?";
			close2;
			cutin("",255);
			end;
		}
	} else {
		if (!ra_tem_q) {
			mes "[Sacerdotisa Nemma]";
			mes "Al�!!";
			mes "...............................";
			mes "Hm, por alguma raz�o, o port�o do templo ainda n�o abriu, mas deveria estar aberto agora.";
			mes "Bem isso acontece as vezes, ent�o...";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "Veja, h� esse sistema de trava autom�tica que foi adicionado ao port�o do templo.";
			mes "Quando ele foi construido, mas agora isso � mais um inc�modo do que seguran�a.";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "A todo momento, algu�m se complica com a trava, ou se ele quebra.";
			mes "Nos temos que esperar at� se reinicie novamente antes de funcionar.";
			mes "Ningu�m consegue consertar isso rapidamente, voc� sabe...";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "^333333*Sniff*^000000 O que eu devo fazer?";
			mes "A reinicia��o autom�tica nunca demora tanto, e eu realmente preciso entrar.";
			mes "^333333*Snif*^000000 P-Panno!";
			mes "Panno, eu preeecisooo de ajudaaaa!";
			ra_tem_q = 1;
			close2;
			cutin("",255);
			end;
		} else if ((ra_tem_q >= 1) && (ra_tem_q < 10)) {
			cutin("ra_nemma02",2);
			mes "[Sacerdotisa Nemma]";
			mes "Se o port�o est� trancado, ent�o eu tenho apenas que achar aquela entrada secreta.";
			mes "Algumas crian�as supostamente custumavam entrar e praticar travessuras no templo,";
			mes "Mas n�o sei quem eles s�o...";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "Panno saberia o que fazer... eu acho";
			mes "Ooh, Panno, ajude me!";
			close2;
			cutin("",255);
			end;
		} else if (ra_tem_q == 10) {
			cutin("ra_nemma04",2);
			mes "[Sacerdotisa Nemma]";
			mes "Oh, "+strcharinfo(PC_NAME)+"!";
			mes "O port�o acabou de abrir e eu pude entrar no templo!";
			mes "Eu estava ficando realmente preocupada sobre isso por enquanto";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "Essa � a primeira vez que o port�o foi trancado desde que Panno foi nomeada para seu posto no templo.";
			mes "Eu pensei que talvez algo tenha acontecido e ela estava com problemas, voc� sabe?";
			next;
			cutin("ra_nemma02",2);
			mes "[Sacerdotisa Nemma]";
			mes "Espere, espere...";
			mes "Eu estou fora.";
			mes "E se o port�o trancar novamente?";
			mes "Oooh, o que eu deveria fazer?!";
			close2;
			cutin("",255);
			end;
		} else if (ra_tem_q == 11) {
			emotion(e_ho);
			cutin("ra_nemma03",2);
			mes "[Sacerdotisa Nemma]";
			mes "Ei, "+strcharinfo(PC_NAME)+"!";
			mes "N�s conseguimos atingir nossas metas, isso n�o � legal?";
			mes "N�s n�o estamos mais pedindo doa��es.";
			mes "Mas voc� ainda pode trocar os seus";
			mes "Bilhetes de Loteria aqui dentro, ok?";
			close2;
			cutin("",255);
			end;
		} else if (ra_tem_q == 12) {
			mes "[Sacerdotisa Nemma]";
			mes "Mmm... Eu sei o que eu posso fazer!";
			mes "Eu posso procurar Fogos de Artif�cio!";
			mes "Sim, isso ser� bem divertido para o festival.";
			mes "Ei, voc� sabe onde eles s�o vendidos?";
			next;
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Eu, uh, n�o posso dar para voc�.";
			mes "Mas... Se voc� puder me trazer alguns Fogos de Artif�cios ent�o, eu rezarei para a sua boa sorte.";
			mes "Me desculpe, mas isso � tudo o que eu realmente posso oferecer";
			next;
			cutin("ra_nemma04",2);
			mes "[Sacerdotisa Nemma]";
			mes "Ei, me traga muitos fogos de Artif�cios como uns, ^FF000020 deles^000000!";
			mes "Obrigado, obrigado";
			ra_tem_q = 13;
			close2;
			cutin("",255);
			end;
		} else if (ra_tem_q == 13) {
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Ei, voc� me trouxe os ^FF000020 Fogos de Artif�cios^000000?";
			next;
			if (select("Sim","N�o, ainda n�o") == 1) {
				mes "[Sacerdotisa Nemma]";
				mes "Vejamos...";
				next;
				if (countitem(Fire_Cracker) >= 20) {
					cutin("ra_nemma04",2);
					delitem(Fire_Cracker,20);
					getexp(200000,0);
					ra_tem_q = 14;
					mes "[Sacerdotisa Nemma]";
					mes "Claro!";
					mes "Fogos de Artif�cios!!!";
					mes "Oh, me deixe rezar para sua grande fortuna!";
					next;
					mes "^3355FFA Sacerdotisa Nemma est� rezando fervorosamente para sua boa fortuna.";
					mes "Sinto como estivesse trabalhando de fato...^000000";
					next;
					mes "[Sacerdotisa Nemma]";
					mes "Eu terminei!";
					mes "Agora est� na hora de jogar!";
					mes "Hm, Talvez nossa papisa gostaria de ver tamb�m?";
					close2;
					cutin("",255);
					end;
				}
				cutin("ra_nemma02",2);
				mes "[Sacerdotisa Nemma]";
				mes "Ahhhh...";
				mes "Estes Fogos de artif�cios n�o s�o bastante.";
				mes "Quero dizer, eu sei que � uma doa��o mas ainda.";
				mes "Quantas divers�es ser�o se n�o houver muitos fogos de artificio?";
				close2;
				cutin("",255);
				end;
			}
		} else {
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Bem Vindo ao nosso templo";
			close2;
			cutin("",255);
			end;
		}
	}
}

// ------------------------------------------------------------------
rachel,243,37,3	script	Crian�a#Candy	4_M_CHILD1,{
	mes "[Crian�a]";
	mes "Hey! Pra que esse sorriso?";
	mes "Voc� n�o vai dar um tapa na minha cabe�a, vai?";
	mes "N�o! eu odeio isso!";
	next;
	mes "[Crian�a]";
	mes "N�o venha aqui!";
	mes "Eu n�o quero que voc� bata na minha cabe�a! Grrr. . . ";
	mes "E-eu estou avisando!";
	next;
	mes "[Crian�a]";
	mes "Ei, olhe para roupas, de onde voc� veio?";
	next;
	mes "[Crian�a]";
	mes "Voc� � de um Pa�s diferente?";
	next;
	mes "[Crian�a]";
	mes "Huh, huh?";
	mes "Qual Pa�s voc� veio?";
	next;
	mes "[Crian�a]";
	mes "Eh, que seja";
	next;
	mes "[Crian�a]";
	mes "Oh, hey voc� gosta de doce?";
	if (ra_tem_q == 1) {
		switch (select("N�o muito","Sim","Claro, Eu adoro essa coisa","De jaito nenhum")) {
			case 1:
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			mes "[Crian�a]";
			mes "Oh. � por que voc� � um Adulto.";
			mes "Por que voc� n�o gosta de doces??";
			close;
		}
		mes "[Crian�a]";
		mes "Oh, isso significa que voc� tem um doce a�?";
		next;
		mes "[Crian�a]";
		mes "Eu quero um!";
		next;
		mes "[Crian�a]";
		mes "Mme de um!";
		mes "Me d�, Me d�!";
		next;
		if (countitem(Candy)) {
			mes "[Crian�a]";
			mes "Hmm...";
			mes "Se voc� me der algum doce, ent�o eu vou te contar uma coisa realmente legal, sim?";
			next;
			if (select("Claro","N�o") == 1) {
				delitem(Candy,1);
				mes "[Crian�a]";
				mes "LEGAL!!!!";
				next;
				mes "[Crian�a]";
				mes "Voc� sabia que eles sempre deixam uma das janelas do templo destrancadas?";
				mes "Eu olhei os padres l� dentro.";
				mes "Estavam todos lutando!";
				mes "Isso n�o � ruim?";
				next;
				mes "[Crian�a]";
				mes "Hum, eles s�o maduros eu n�o sei.";
				mes "Talvez eles...";
				mes "Hmm. hmm, eu me lembro que lutar � uma coisa ruim";
				next;
				mes "[Crian�a]";
				mes "Ooow!";
				mes "Agora me lembrei!";
				mes "Se voc� � outro pa�s!";
				mes "Eu n�o deveria ter dito isso a voc�!";
				next;
				mes "[Crian�a]";
				mes "Oooh, Eu te odeio agora!";
				mes "Me deixa em paz";
				ra_tem_q = 2;
				close;
			}
		}
		mes "[Crian�a]";
		mes "Espere, voc� n�o tem algum doce?";
		mes "Como pode voc� ter me dito que adorava doce";
		mes "Quando voc� n�o tem nenhum?";
		mes "Olhe isso!";
		mes "Meus bolsos est�o cheios de doces!";
	} else if (ra_tem_q == 2) {
		mes "[Crian�a]";
		mes "Voc� est� partindo?";
		mes "Voc� n�o quer me assistir jogando pedra, papel, tesoura?";
		next;
		mes "[Crian�a]";
		mes "Ei! Eu n�o gosto do jeito que voc� est� olhando para mim.";
		mes "Eu n�o gosto de voc� me olhando desse jeito.";
		mes "Porque voc� n�o vai embora?";
		next;
		mes "[Crian�a]";
		mes "Aff, eu falei, v� embora!";
	}
	close;
}

// ------------------------------------------------------------------
ra_temple,67,209,0	script	zawa00	FAKE_NPC,3,3,{
	OnTouch:
	if ((ra_tem_q >= 2) && (ra_tem_q < 10)) {
		mes "^3355FFVoc� nota ligeramente uma janela aberta que � facil de entrar.^000000";
		next;
		if (select("Fique","Entrar na Janela") == 2) {
			mes "^3355FFVoc� puxa a janela, e abre suavemente.";
			mes "Isso provavelmente � como os ladr�es usam para entrar sem serem percebidos nesse templo.^000000";
			close2;
			warp("que_rachel",62,82);
			end;
		}
		mes "^3355FFVoc� decide que � errado entrar em um lugar furtivamente.";
		mes "Mas e se voc� tomar bastante cuidado?^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,63,82,0	script	Janela#ra_temple	HIDDEN_NPC,{
	mes "^3355FF est� janela est� aberta^000000";
	next;
	if (select("Ficar","Sair por essa janela") == 2) {
		close2;
		warp("ra_temple",73,208);
		end;
	}
	close;
}

// ------------------------------------------------------------------
que_rachel,60,80,0	script	zawa01	FAKE_NPC,5,5,{
	OnTouch:
	if (ra_tem_q == 2) {
		mes "^3355FF� estranhamente escuro aqui.^000000";
		ra_tem_q = 3;
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,59,112,0	script	zawa02	FAKE_NPC,10,10,{
	OnTouch:
	if (ra_tem_q == 3) {
		mes "^3355FFVoc� ouve algum som vindo do corredor para a capela.";
		mes "Parece sons iguais a outras pessoas aqui.^000000";
		ra_tem_q = 4;
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,94,139,0	script	zawa03	FAKE_NPC,10,10,{
	OnTouch:
	if (ra_tem_q == 4) {
		mes "^3355FFVoc� ouve sons de alguma coisa l� em cima";
		ra_tem_q = 5;
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,132,70,0	script	zawa04	FAKE_NPC,10,10,{
	OnTouch:
	if (ra_tem_q == 5) {
		mes " ";
		mes " ";
		mes "^ff0000Crash!^000000";
		next;
		mes "^3355FF Voc� ouve alguma coisa cair das escadas seguido por barulhos que paracem uma briga.^000000";
		ra_tem_q = 6;
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,28,315,0	script	Mancha de Sangue	FAKE_NPC,5,5,{
	OnTouch:
	if (ra_tem_q == 6) {
		mes "^3355FF H� uma mancha no ch�o que � mais escura que que o resto do ch�o.^000000";
		next;
		if (select("Investigar","Ignorar") == 1) {
			mes "^3355FF � muito escuro tambem realmente para ver a mancha^000000";
			next;
			mes "...";
			mes "......";
			mes ".........";
			next;
			mes "^3355FFcheira um pouco como Cobre ou ferro.";
			mes "Sangue foi derramado aqui provavelmente.^000000";
			ra_tem_q = 7;
			close;
		} else {
			mes "^3355FFVoc� decide que seu tempo seria melhor aproveitado investigando alguma coisa.^000000";
			close;
		}
	} else if (ra_tem_q == 7) {
		mes "^3355FF Essa manha preta no ch�o � realmente arrepiante n�o importa quanto tempo voc� olha para ela.^000000.";
		next;
		if (select("Investigar novamente","Ignorar") == 1) {
			mes "^3355FFO sangue no ch�o";
			mes "n�o secou, mas";
			mes "est� frio agora.^000000";
			next;
			mes "...";
			mes "......";
			mes ".........";
			next;
			mes "^3355FFA quantidade de sangue no ch�o � mais do que o sangue de uma pessoa.";
			mes "� melhor sair daqui antes que seja tarde de mais.^000000";
			ra_tem_q = 8;
			close;
		} else {
			mes "^3355FFVoc� decide que seu";
			mes "tempo seria melhor aproveitado";
			mes "investigando alguma coisa.^000000";
			close;
		}
	} else if (ra_tem_q == 8) {
		mes "^3355FFEst� mancha de sangue no ch�o � um mal sinal.";
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,170,37,0	script	nemma01::nemma01	FAKE_NPC,5,5,{
	OnTouch:
	if (ra_tem_q == 8) {
		mes "[???]";
		mes "S� a deusa existe.";
		next;
		mes "[???]";
		mes "Todo mundo deve estar pronto para a vinda dela.";
		next;
		mes "[???]";
		mes "Izlude, minha cidade natal,";
		mes "Eu vim para este lugar para construir";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "E-es-essa � a voz da sacerdotisa Panno!";
		mes "Mas ela n�o estava fora da porta?";
		mes "O que exatamente ela est� falando?";
		ra_tem_q = 9;
		close;
	}
	end;
}
que_rachel,175,37,0	duplicate(nemma01)	nemma02	FAKE_NPC,5,5
que_rachel,180,37,0	duplicate(nemma01)	nemma03	FAKE_NPC,5,5
que_rachel,165,37,0	duplicate(nemma01)	nemma04	FAKE_NPC,5,5
que_rachel,160,37,0	duplicate(nemma01)	nemma05	FAKE_NPC,5,5

// ------------------------------------------------------------------
que_rachel,169,18,0	script	Port�o#ra_tem	WARPNPC,2,2,{
	mes "^3355FFTO port�o est� fechado.^000000";
	next;
	switch (select("Puxar o port�o","Examinar o port�o","Chutar o Port�o","Bater no port�o com uma arma")) {
		case 1:
		mes "^3355FFVoc� puxa o port�o com toda sua for�a.";
		if (ra_tem_q == 9) {
			close2;
			ra_tem_q = 10;
			warp("ra_temple",119,175);
			end;
		}
		mes "Mas ele nem mesmo se move.^000000";
		break;
		case 2:
		mes "^3355FFTem alguma coisa estranha uma maquinaria instalada no port�o.";
		mes "E tem uma abertura aqui onde voc� pode inserir um cart�o ou permiss�o.";
		mes "As luzes est� acessa, ent�o ha algu�m trabalhando.^000000";
		break;
		case 3:
		mes "^3355FFVoc� chuta o port�o ferozmente";
		if (ra_tem_q == 9) {
			close2;
			ra_tem_q = 10;
			warp("ra_temple",119,175);
			end;
		}
		mes "Mas n�o importa quanta raiva que voc� p�s em seu chute, o port�o recusa a abrir para voc�.";
		mes "Oh, e seu p� d�i tamb�m.^000000";
		break;
		case 4:
		mes "^3355FFEspera!";
		mes "Isso n�o � uma boa id�ia.";
		mes "Voc� n�o pode";
		mes "quebrar o port�o de um lugar santo.";
		mes "Her�is n�o se especializam em descren�a.^000000";
		break;
	}
	close;
}

// ------------------------------------------------------------------
ra_temin,170,46,3	script	Panno#rachel	4_F_TRAINEE,{
	if (ra_tem_q == 10) {
		mes "[Sacerdotisa Panno]";
		mes "Bom dia.";
		next;
		select("O que est� acontecendo com o port�o?");
		cutin("ra_fano02",2);
		mes "[Sacerdotisa Panno]";
		mes "Porta...?";
		next;
		select("A porta trancada para o templo!");
		mes "[Sacerdotisa Panno]";
		mes "Eu n�o sei o que voc� quer dizer.";
		next;
		select("Explique");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu acho que Sacerdotisa Nemma ficou preocupada que o portal quebrou denovo.";
		mes "Embora n�o foi como aquela vez voc� come�ou sua posi��o aqui no templo.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Preocupada...?";
		mes "Sim, o minha irm� g�mea � conhecida por fazer muitas coisas, e chorar para ter minha ajuda.";
		mes "Estou certa?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "� estranho";
		mes "... Ela disse que o port�o iria se corrigir automaticamente propriamente dito.";
		mes "Mas n�o tem sido feito ultimamente.";
		mes "Ela estava agindo realmente engra�ada..";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ela estava falando sobre a hist�ria dos templos e como o sistema de seguran�a era constru�do.";
		mes "Ent�o ela mencionou voc�, assim tenho a sensa��o de que voc� possa saber alguma coisa sobre isto.";
		next;
		mes "[Sacerdotisa Panno]";
		mes ".........";
		ra_tem_q = 11;
		close2;
		cutin("",255);
		end;
	} else if (ra_tem_q == 11) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu lembrei agora...!";
		mes "Eu estava l� quando o port�o fecho, e eu ouvi alguem com exatamente sua voz sussurar algo para magicamente abrir o port�o!";
		mes "O que � que todos falam?";
		next;
		mes "[Sacerdotisa Panno]";
		mes "......";
		mes ".........";
		mes "............";
		next;
		mes "[Sacerdotisa Panno]";
		mes "......";
		mes ".........";
		mes "............";
		mes "N�s... Quero dizer....";
		next;
		cutin("ra_fano01",2);
		mes "[Sacerdotisa Panno]";
		mes "Nemma e eu somos descendentes de uma fam�lia de grandes alquimistas.";
		mes "Eles passaram por uma longa e religiosa peregrina��o e terminaram aqui.";
		mes "Eles foram os que constru�ram este templo e sistema de seguran�a.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Em certo sentido, este templo � o t�mulo dos nossos antepassados.";
		mes "Que deixaram Rune-Midgard e construiram esta cidade de Rachel a mais de dois mil anos atr�s.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Ao longo das gera��es, muitos alquimistas sairam de Rune-Midgard e instalaram-se aqui, convertendo o deserto em campos verdes.";
		mes "Este templo foi suposto ser um ref�gio para intrusos.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Meu ancestral projetou o sistema de seguran�a do templo para exigir uma autoriza��o especial para acessar o templo.";
		mes "Mas os invasores nunca vinheram, e n�s nunca necessitamos das autoriza��es.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "As autoriza��es especiais foram eliminados.";
		mes "Mas o autom�tico sistema de seguran�a foi deixado no port�o, apenas por precau��o.";
		mes "Agora, tenho ouvido que o sistema de seguran�a foi avariado.";
		next;
		cutin("ra_fano03",2);
		mes "[Sacerdotisa Panno]";
		mes "No entanto, isso n�o � poss�vel, mesmo pelos padr�es de hoje, o sistema foi perfeitamente desenhado.";
		mes "Enquanto eu estava rezando na Capela algum tempo atr�s, achei o que est� causando problemas no port�o.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "De repente, as luzes foram apagadas, e eu mal podia ver ao meu redor.";
		mes "Eu estava prestes a ir ao exterior quando eu ouvi um barulho na escada.";
		next;
		cutin("ra_fano02",2);
		mes "[Sacerdotisa Panno]";
		mes "O que eu posso dizer, algu�m est� transportando algo fora das terras sagradas.";
		mes "Eu n�o sei o que se mantem l�, embora.";
		mes "Eu n�o sou uma sacerdotisa de alto nivel.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "N�o sei se eu quero descobrir o que est� ali, ouvi alguma que soava como alguns horr�veis monstros uivando.";
		mes "Foi incrivelmente assustador.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Eu apavorei-me, corri para a frente da minha mesa.";
		mes "E recitei a secreta senha passada por gera��es por meus acestrais para abrir a porta.";
		next;
		cutin("ra_fano01",2);
		mes "[Sacerdotisa Panno]";
		mes "Voc� v�, meus ancestrais inclu�ram a caracter�stica secreta de reconhecimento da senha e de voz na porta caso algo disponha da permi��o do templo -- s� neste caso.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "A verdadeira raz�o pela qual e porta est� agindo estranhamente n�o � porque a porta est� quebrada.";
		mes "Mas porque algu�m est� tramando dentro e fora da terra santa";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Quem quer que seja, ele deve estar usando uma das velhas licen�as do templo a fim cobrir suas trilhas.";
		mes "Agora, voc� sabe tudo.";
		next;
		cutin("ra_fano01",2);
		mes "[Sacerdotisa Panno]";
		mes "� melhor voc� n�o contar o que voc� descobriu por mim.";
		mes "Caso contr�rio, estou certa que acabaremos mortos.";
		mes "Desculpe-me agora, eu preciso voltar para meu trabalho.";
		ra_tem_q = 12;
		close2;
		cutin("",255);
		end;
	} else {
		if (!checkweight(Yggdrasilberry,1)){
			cutin("ra_fano02",2);
			mes "[Sacerdotisa Panno]";
			mes "Voc� est� transportando itens demais no momento.";
			mes "O que voc� vai fazer se eu lhe dar algo grande, e pesado?";
			close2;
			cutin("",255);
			end;
		} else if (countitem(Temple_Lottery_Ticket)) {
			mes "[Sacerdotisa Panno]";
			mes "Eu posso resgatar apenas";
			mes "1 Bilhete de Loteria por vez.";
			mes "Sua recompensa para este bilhete �...";
			next;
			delitem(Temple_Lottery_Ticket,1);
			.@bonus_donate = rand(100);
			if (.@bonus_donate == 99) {
				.@bonus_donate2 = rand(100);
				if (.@bonus_donate2 > 0 && .@bonus_donate2 < 11) { getitem(Old_Card_Album,1); }
				else if (.@bonus_donate2 > 10 && .@bonus_donate2 < 31) { getitem(Old_Violet_Box,1); }
				else if (.@bonus_donate2 > 30 && .@bonus_donate2 < 61) { getitem(Old_Blue_Box,1); }
				else { getitem(Yggdrasilberry,1); }
			}
			else if (.@bonus_donate > 88 && .@bonus_donate < 96) { getitem(Gift_Box,1); }
			else if (.@bonus_donate > 76 && .@bonus_donate < 89) { getitem(Yggdrasilberry,1); }
			else if (.@bonus_donate > 65 && .@bonus_donate < 77) { getitem(Blue_Potion,1); }
			else if (.@bonus_donate > 57 && .@bonus_donate < 66) { getitem(Branch_Of_Dead_Tree,1); }
			else if (.@bonus_donate > 45 && .@bonus_donate < 58) { getitem(Seed_Of_Yggdrasil,1); }
			else if (.@bonus_donate > 5 && .@bonus_donate < 11) { getitem(Honey,1); }
			else if (.@bonus_donate > 0 && .@bonus_donate < 6) { getitem(Royal_Jelly,1); }
			else { getitem(White_Slim_Potion,1); }
			close2;
			cutin("",255);
			end;
		} else {
			cutin("ra_fano02",2);
			mes "[Sacerdotisa Panno]";
			mes "Isso � um pal�cio sagrado";
			mes "Comporte-se, e";
			mes "respeite aqueles que vieram aqui apenas para orar.";
			close2;
			cutin("",255);
			end;
		}
	}
}

// ------------------------------------------------------------------
ra_temin,277,159,3	script	Sumo Sacerdote Zhed#rachel	4_M_RACHOLD1,{
	if (lost_boy == 12) {
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Por alguma raz�o, voc� parece familiar para mim.";
		mes "Voc� era pra estar aqui?";
		mes "Caso contr�rio voc� deve sair deste lugar se voc� n�o tem a pr�pia autoriza��o.";
		next;
		select("Eu estou aqui no lado de Vincent");
		mes "[Sumo Sacerdote Zhed]";
		mes "Vicent te enviou?";
		mes "Ah sim.";
		mes "Voc� deve ter vindo me procurado.";
		mes "Eu sou o Sumo Sacerdote Zhed, e eu entendo que voc� tem um pacote para mim.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Geralmente, Vicente n�o confia em estranhos para entregar esses pacotes.";
		mes "Mas talvez isso foi necess�rio por uma estranha circunst�ncia.";
		mes "De qualquer maneira vamos ver o que ele mandou para mim.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Hm? Oque � isso?";
		mes "Vicente me mandou um recado?";
		mes "Eu suponho que isto seja muito";
		mes "importante.";
		mes "Me de somente um momento para ler isto, por favor.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "..................................";
		mes "Hrrrmm. Vincent.";
		mes "Agora eu entendo.";
		mes "Ent�o ele estava sendo frio intensionalmente para Jenny e Phobe para outras pessoas n�o levantarem suspeitas.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ainda, eu n�o penso que ele teve que fazer isto e foi um pouco longe de mais.";
		mes "Bom, eu realmente agrade�o a sua ajuda neste assunto.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Mas me fala, voc� s� ajudou Vicent e arriscou sua vida porque voc� seria pago?";
		mes "Voc� so estava sendo motivad"+(Sex == SEX_MALE ? "o":"a")+" pelo dinheiro?";
		next;
		select("De fato... Eu estava curios"+(Sex == SEX_MALE ? "o":"a")+".");
		mes "[Sumo Sacerdote Zhed]";
		mes "Voc� s� estava fazendo isso para satisfazer sua curiosidade?";
		mes "Heh, isto � muito interessante, tamb�m � a melhor atitude para um corajoso.";
		mes "Eu gosto disso.";
		mes "Eu posso saber seu nome?";
		next;
		select("Conte-lhe seu nome");
		mes "[Sumo Sacerdote Zhed]";
		mes ""+strcharinfo(PC_NAME)+"...";
		mes "Sim, � um bom nome, lhe cai bem.";
		mes "Eu estarei seguro que me lembrarei.";
		mes "Denovo, deixe me agrade�er por voc� arriscar sua vida retribuindo meus pertences";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Eu estarei rezando para Freya o guiar e proteger nas suas viagems.";
		mes "Que a Paz esteja com voc� "+strcharinfo(PC_NAME)+".";
		close2;
		cutin("",255);
		lost_boy = 13;
		completequest(8099);
		specialeffect(EF_ABSORBSPIRITS,AREA,playerattached());
		getexp(900000,0);
		end;
	} else if ((lost_boy == 13) && (ra_tem_q == 14)) {
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, bom, eu tenho um favor para te pedir.";
		mes "Estou muito ocupado para fazer isto eu mesmo.";
		mes "Confio em voc� mais que qualquer outro aventureiro.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Por�m, antes de eu dar vou te explicar que este favor deve ser mantido em segredo.";
		mes "Em outras palavras, uma vez que eu explicar a tarefa, voc� dever� aceitar meu pedido.";
		next;
		if (select("Deixe-me pensar","Sim, claro") == 1) {
			mes "[Sumo Sacerdote Zhed]";
			mes "Eu entendo.";
			mes "Para mim achar algu�m que eu realmente possa confiar para fazer isto.";
			close2;
			cutin("",255);
			end;
		}
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, eu estou aliviado que voc� aceitou.";
		mes "N�o se preocupe, est� tarefa n�o � complicada nem requerer� muito sacrificio.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Como voc� j� pode saber";
		mes "Nosso pa�s, Arunafeltz, faz adora��es a deusa Freya.";
		mes "N�o h� quase nenhuma separa��o entre pol�tica, sociedade e nossa religi�o, realmente.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Agora, o l�der de nossa religi�o nacional, nossa Papisa.";
		mes "� uma criada diretamente de Freya e entrega as mensagens dela como tal.";
		mes "Ela tem que viver atrav�s de diretrizes muito r�gidas";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Nossa Papisa � curiosa sobre o mundo externo e deseja aprender mais sobre que mentiras al�m de Arunafeltz.";
		mes "Mas ela n�o pode vir este tipo de conhecimento t�o facilmente.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Primeiramente, ela n�o pode deixar Rachel, o lugar onde esp�rito de deusa Freya mora.";
		mes "Segundo, s�o proibidos a todos os cidad�os e os sacerdotes deixarem a cidade para preservar nossa santidade.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Estas s�o regras impl�citas que normalmente n�o s�o discutidas abertamente.";
		mes "Mas todo o mundo as segue para prevenir ser estigmatizado.";
		mes "Francamente, eu penso que � um pouco vergonhoso, mas n�s estamos trabalhando nisto.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Al�m disso, nossa Papisa tem que manter a imagem dela longe de coisas impropriadas e quest�es fora do pa�s.";
		mes "Emboram tal conhecimento a beneficiaria";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Isto porque os Sumos-Sacerdotes decidiram recrutar um confi�vel aventureiro para informar nossa Papisa sobre o mundo externo.";
		mes "Agora voc� entende porque eu pedi para voc� deixar isto em segredo.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Voc� n�o precisar� divulgar segredos ultrajantes ou qualquer coisa assim.";
		mes "Eu presumo que detalhes seriam bastante para agradar ela.";
		mes "H� pouco deixe ela pressentir sua p�tria.";
		next;
		mes "[Sumo Sacerdote Zhed";
		mes "Pessoalmente, eu penso estar refrescando para nossa Papisa n�o ouvir hist�rias.";
		mes "Como ela � sempre adorada nossa deusa no lado de todo o mundo em nossa gloriosa cidade.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Infelizmente, eu n�o o posso escoltar � sacerdotisa.";
		mes "Mas eu posso relacionar os meios para que voc� consiga uma audiencia com ela.";
		mes "Primeiro, voc� precisar� uma ^FF0000Alta Recomenda��o do Sacerdote^000000";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Eu irei escrever isso para voc�, ent�o n�o ha necessidade de preocupar com isto.";
		mes "Logo voc� voc� precisar� juntar ^FF000040 Cora��es Glaciais^000000 como prova simb�lica de sua for�a e sua pureza.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Enquanto eu termino de escrever est� recomenda��o.";
		mes "Deixe eu te contar como chegar ao escrit�rio do Papisa.";
		mes "Onde voc� tem que ir para juntar 40 Cora��es Glaciais.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Oeste da capela no centro do templo e ent�o tem uma porta vigiada por dois soldados.";
		mes "Mostre a eles sua recomenda��o e os cora��es glaciais, e eles o deixaram passar.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, aqui est�!";
		mes "Eu terminei de escrever sua recomenda��o.";
		mes "Bom ent�o, eu acho que eu o verei depois que voc� terminar a tarefa.";
		next;
		mes "^3355FFVoc� recebeu a Recomenda��o do Sumo Sacerdote.^000000";
		close2;
		cutin("",255);
		ra_tem_q = 15;
		lost_boy = 14;
		setquest 8100;
		end;
	} else if ((ra_tem_q == 15) || (ra_tem_q == 16)) {
		mes "[Sumo Sacerdote Zhed]";
		mes "Uma vez voc� junta";
		mes "^FF000040 Cora��es Glaciais^000000, voc� pode mostrar para os soldados que guardam o escrit�rio da Papisa junto com a recomenda��o que eu escrevi para voc�.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Quando voc� estiver pronto para ir ao escrit�rio da Papisa.";
		mes "V� ao oeste da capela no centro do templo l� que fica a entrada.";
		close;
	} else if (ra_tem_q == 17) {
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, Muito obrigado por gastar algum tempo com a Papisa por mim.";
		mes "Eu posso contar que ela realmente gostou de falar com voc�.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Eu sou curioso, entretanto...";
		mes "Nossa Papisa est� desacostumada a falar com estranhos.";
		mes "Assim eu assumo que voc� tem suas pr�prias perguntas depois da sua conversa com ela.";
		next;
		select("Bem, ela mencionou um pouco do Solo Santo...");
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "O que...?";
		mes "Ela mencionou o solo Santo...?!";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "O solo Santo � o lugar onde todos os humanos, incluindo a Papisa, foi proibida.";
		mes "N�s permit�amos as pessoas visitarem no passado, mas...";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "S� os deuses podem acessar aquele lugar agora.";
		mes "Escute, se outros sacerdotes perguntarem sobre sua conversa com a Papisa.";
		mes "Por favor n�o fa�a qualquer men��o sobre o Solo Santo.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Por favor n�o me pergunte porque, mas acredite nisso.";
		mes "� muito importante que voc� finja ignor�ncia sobre a exist�ncia do Solo Santo!";
		next;
		mes "[????]";
		mes "Com licen�a, Zhed?";
		mes "Eu posso falar com voc� por um momento?";
		mes "Eu preciso te falar com voc� sobre um assunto privado.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Er, sim, � claro!";
		mes "Com licen�a um momento "+strcharinfo(PC_NAME)+"...";
		mes "Enquanto voc� est� esperando por mim porque n�o descansa no quarto ao lado?";
		mes "N�o se esque�a n�o h� nenhum Solo Santo.";
		select("Certo");
		close2;
		cutin("",255);
		ra_tem_q = 18;
		warp("ra_temin",297,156);
		end;
	} else if (ra_tem_q == 18) {
		mes "[Sumo Sacerdote Zhed]";
		mes "Er, eu pensei que eu lhe pedi";
		mes "para aguardar no quarto ao lado?";
		if (questprogress(8101)) {
			changequest(8101,8102);
		}
		close2;
		cutin("",255);
		warp "ra_temin",297,156;
		end;
	} else if (ra_tem_q == 19) {
		mes "[Sumo Sacerdote Zhed]";
		mes "Me desculpe por fazer voc� esperar muito tempo.";
		mes "Eu tive alguns assuntos cruciais para discutir.";
		mes "Agora, esse olhar em seu rosto me conta que voc� tem uma pergunta urgente";
		next;
		select("Perguntar sobre Bekento");
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Bekento? Ah, voc� deve ter falado com a Sumo Sacerdotisa Niren.";
		mes "Ela � a �nica que me chama desse jeito.";
		mes "Meu nome inteiro � Zhed Bekento.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Falando nisso Niren te perguntou a voc� alguma coisa ou te contou alguma coisa fora do usual?";
		next;
		mes "^3355FFDepois de uma pouca hesita��o, voc� conta ao Sumo Sacerdote Zhed vobre a conversa com a Sumo Sacerdotisa Niren.^000000";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Hm, Entendo";
		mes "Sim, isto parece algo que ela faria.";
		mes "Eu explicarei tudo depois.";
		mes "Mas agora, eu preciso descansar voc� sabe, estou ficando velho.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, mas antes de voc� ir, me deixe advertir, n�o se aproxime ^FF0000do Solo Santo^000000.";
		mes "Eu repito fique longe do Solo Santo.";
		next;
		mes "^3355FFO Solo Santo...";
		mes "Porque o Sumo Sacerdote Zhed";
		mes "� t�o inflexivel sobre proteger";
		mes "o Solo Santo?^000000";
		close2;
		cutin("",255);
		ra_tem_q = 20;
		changequest(8103,8104);
		end;
	} else if ((ra_tem_q >= 20) && (ra_tem_q <= 22)) {
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Tudo o que voc� fizer, qualquer jornada que voc� fazer.";
		mes "Por favor tenha certeza que voc� est� longe do Solo Santo";
		next;
		mes "^3355FFMais que nunca, agora voc� sentiu t�o compenetrado em entrar no Solo Santo.^000000";
		close2;
		cutin("",255);
		end;
	} else if (ra_tem_q == 23) {
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Oh, � voc�.";
		mes "Me deixe adivinhar...";
		mes "Depois de tudo que eu disse voc� ainda prosseguiu e visitou o Solo Santo?";
		mes "Oh, bem...";
		next;
		select("Algo aconteceu?");
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Bem, honestamente, eu estive temporariamente suspenso do trabalho, mas nenhuma necessidade para preocupar.";
		mes "Isto n�o � sua culpa.";
		mes "Eu estive em conflito com outros Sumo Sacerdotes por um momento, de qualquer maneira.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Por favor n�o preocupe sobre isto.";
		mes "Se n�o fosse isso, eles teriam achado outro jeito de me atacar.";
		mes "Seria s� uma quest�o de tempo.";
		mes "Eles est�o usando sua intrus�o para o benef�cio deles.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Tudo o que quero � que Arunafeltz esteja a salvo e em paz.";
		mes "Eu espero que essa terra nao seja conquistada por humanos gananciosos.";
		mes "Eu espero que todos trabalhem de acordo com a vontade de Freya.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, e por favor n�o n�o culpe Niren.";
		mes "Ela deve ter suas pr�pios raz�es para suas a��es.";
		mes "Ela mudou muito, mas no final eu acho que ainda continuamos amigos";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Uma �ltima coisa....";
		mes "Tente n�o deixar os outros sacerdotes o pegarem fazendo qualquer coisa errada isto seria embara�oso para mim, voc� entende.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Ainda, voc� foi convidado aqui secretamente assim eu estou seguro que s� muito poucos deles poderiam  poderiam o reconhecer voc�.";
		mes "No final, voc� vai fazer o que voc� tem que fazer, certo?";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Eu sei que voc� viu o Solo Santo.";
		mes "Eu estou certo que voc� tem muito a perguntar, mas agora n�o � a hora para buscar respostas.";
		mes "Por favor voc� dever ser paciente";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "At� que a hora chegue eu quero que voc� n�o conte para ningu�m que voc� viu o Solo Santo.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Bem ent�o, aventureiro obrigado por ter vindo.";
		mes "Eu preciso abaixar secular agora, assim se voc� me deixar descansar...";
		close2;
		ra_tem_q = 24;
		cutin("",255);
		completequest(8105);
		specialeffect(EF_ABSORBSPIRITS, AREA,playerattached());
		getexp(900000,600000);
		end;
	} else if (rachel_camel == 25) {
		if (aru_monas == 11) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Ah, ele foi um bocado, n�o �?";
			mes "Voc� parece bem, eu estou bem como voc� pode ver.";
			mes "O que posso fazer por voc� hoje, "+strcharinfo(PC_NAME)+"?";
			next;
			if (select("Eu s� queria dizer oi","Perguntar sobre o incidente em Veins") == 1) {
				mes "[Sumo Sacerdote Zhed]";
				mes "Como voc� bem sabe, sou apenas um Sumo Sacerdote no t�tulo.";
				mes "E perdi muito da minha influ�ncia entre muitos dos outros sacerdotes na minha opni�o.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Ainda assim, tenho f� que a justi�a e a boa vontade prevalecer�.";
				mes "Sobre a corrup��o que flagela os nossos sacerdotes.";
				mes "Enquanto pessoas boas est�o dispostos a agir.";
				close2;
				cutin("",255);
				end;
			}
			mes "[Sumo Sacerdote Zhed]";
			mes "Incidente em Veins?";
			mes "Eu n�o tenho ouvido falar de qualquer coisa...";
			mes "Bem, talvez se voc� deseja elaborar, em seguida eu entenda um pouco mais.";
			next;
			mes "^3355FFVoc� falou ao Sumo Sacerdote Zhed sobre o grupo de traficantes detidos em Veins.^000000";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Oh, eu acho que ouvi alguma coisa sobre mais cedo.";
			mes "Vamos ver agora...";
			mes "Ah, claro.";
			mes "Niren mencionou algo estranho sobre eles...";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Os contrabandistas estavam com um funcion�rio de alto escal�o de Rune-Midgard.";
			mes "� por isso que Niren foi t�o hesitante em tomar qualquer a��o contra eles por um tempo.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Eu estava muito preocupado com outros assuntos.";
			mes "E eu acho que na maior parte na �poca.";
			mes "Por que voc� n�o vai falar com Niren?";
			mes "Eu tenho certeza que ela pode dizer a voc� mais sobre o que aconteceu.";
			aru_monas = 12;
			changequest(17007,17008);
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Se voc� decidir ir visitar Niren, por favor mande meus cumprimentos.";
			close2;
			cutin("",255);
			end;
		} else if (aru_monas == 12) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Se voc� decidir ir visitar Niren, por favor mande meus cumprimentos.";
			close2;
			cutin("",255);
			end;
		} else if (!aru_vol) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Ah, ver voc� novamente faz meu cora��o se sentir bem.";
			mes "Aventureiros dispostos a trabalhar t�o duro querendo a paz no mundo como voc� s�o muito incomuns.";
			mes "Espero que saiba disto.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Huh...?";
			mes "Por favor n�o me lisonjeie desta maneira!";
			mes "Dizendo isto parece um tipo de exagero, n�o?";
			emotion(e_sigh,1);
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Nem tudo.";
			mes "Na verdade, eu estou certo de que h� um lugar em Valhalla j� reservado para voc� pelas Valqu�rias.";
			mes "Agora, como posso lhe ajudar?";
			next;
			select("Pr�dio Misterioso no Vulc�o");
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Atualmente, eu estava querendo saber se voc� sabe algo sobre esta instala��o no Vulc�o de Thor perto de Veins.";
			mes "Parece que est� acontecendo uma grande coisa dentro de l�.";
			next;
			mes "^3131FFVoc� fala ao Sumo Sacerdote Zhed sobre a crian�a acorrentada no Vulc�o de Thor.";
			mes "E como voc� encontrou a constru��o escondida por l�.";
			mes "O Sumo Sacerdote Zhed parece perturbado com suas palavras.^000000";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Entendo.";
			mes "Eu j� suspeitava sobre o que estava acontecendo.";
			mes "Agora, voc� est� ciente de que Arunafeltz � regida pela nossa igreja.";
			mes "E que a nossa na��o inteira adora a deusa Freya.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Os sacerdotes que lideram esta s�o divididos em duas grandes fac��es.";
			mes "Eu sou considerado um membro da fac��o moderada.";
			mes "Que geralmente bate a cabe�a com a fac��o Linha-Dura.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Estes sacerdotes da Linha-Dura est�o mais do que dispostos a utilizar m�todos violentos.";
			mes "Se eles acreditarem que est� � a vontade de Freya.";
			mes "E s�o eles que se estabeleceram na Base Militar no Vulc�o de Thor.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Claro que este local � tamb�m considerado um Campo de Geologia.";
			mes "Uma vez que eles est�o sempre acompanhando a atividade vulc�nica deste local.";
			mes "Mas com todas as inten��es e propostas, eles est�o treinando homens para lutar.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Fico assustado s� de pensar sobre isso.";
			mes "Mas estou certo de que eles tem muitos suprimentos militares.";
			mes "E m�quinas de destrui��o em massa escondidas pela base.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Espera, o que exatamente eles esperam conseguir lutando?";
			mes "Como eles pretendem ajudar a Deusa Freya usando a viol�ncia?";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Todos os Sacerdotes concordam que remontando o Cora��o de Ymir a Deusa Freya ser� ressuscitada.";
			mes "Como voc� sabe, os peda�os est�o espalhados pelo mundo todo.";
			mes "E alguns deles est�o em posse do Reino de Rune-Midgard.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "No interesse de evitar um conflito.";
			mes "A fac��o moderada de sacerdotes decidiu contratar cientistas para reproduzir o Cora��o de Ymir.";
			mes "Resultando em uma imita��o do artefato.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Uma imita��o do Cora��o de Ymir?";
			mes "Eu acho que conhe�o um famoso cientista da Rep�blica Schwartzvalt que estava trabalhando nisto!";
			mes "Vamos ver, qual era seu nome mesmo?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Qual era o nome do Cientista...";
			input(.@input$);
			mes "^3131FF"+.@input$+"^000000?";
			next;
			if (.@input$ == "Varmunt") {
				mes "[Sumo Sacerdote Zhed]";
				mes "Ah, voc� conhece ele?";
				mes "O homem que criou a imita��o do Cora��o de Ymir se chamava Varmunt.";
				mes "Ele � um verdadeiro G�nio.";
				next;
			} else {
				mes "[Sumo Sacerdote Zhed]";
				mes .@input$+"?";
				mes "N�o, esse n�o era ele.";
				mes "O homem que criou a imita��o do Cora��o de Ymir se chamava Varmunt.";
				mes "Ele � um Verdadeiro G�nio.";
				next;
			}
			mes "[Sumo Sacerdote Zhed]";
			mes "N�o tenho certeza do que aconteceu a Varmunt.";
			mes "Tudo que eu sei � que algo grave aconteceu na Rep�blica Schwaltzvalt.";
			mes "E que ele desapareceu em rapidamente.";
			mes "� estranho.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Apesar de que o trabalho da Imita��o do Cora��o de Ymir que Varmunt criou ter se quebrado em peda�os.";
			mes "Outros cientistas tentaram reproduzir este trabalho com Cora��es de Ymir inst�veis.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Desde que nossa fac��o moderada.";
			mes "S� podia providenciar Imita��es do Cora��o de Ymir inst�veis.";
			mes "A fac��o linha-dura ganhou rapidamente mais respeito do que n�s pelo povo.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Apesar de nosso armamento e defesa avan�ados, eu tenho medo que o nosso pa�s de Arunafeltz.";
			mes "N�o seja t�o civilizado e pac�fico como eu gostaria que fosse.";
			mes "E agora a fac��o linha-dura controla o nosso governo.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Embora os linhas-duras tenham...";
			mes "Nos permitido continuar com a nossa pesquisa fiel a reprodu��o do Cora��o de Ymir.";
			mes "Eles foram desenvolvendo o seu poder militar sem oposi��o.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Assim, basicamente, os moderados est�o a tentar recriar o Cora��o de Ymir.";
			mes "Em centros de pesquisa na Terra Santa e na Rep�blica de Schwaltzvalt.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Os linhas-duras est�o treinando soldados e acumulando fornecimentos militares.";
			mes "E armas em sua base no Vulc�o de Thor.";
			mes "No entanto, eu n�o sei mais de nenhum detalhe.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Isto n�o parece ser bom.";
			mes "Digo, se eles est�o tentando tomar os Peda�os do Cora��o de Ymir a for�a.";
			mes "Isto ser� uma guerra contra a Rep�blica Schwalzvalt e o Reino de Rune-Midgard!";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Vendo como eu sou parte da fac��o moderada, que recentemente foi rebaixada.";
			mes "Eu n�o tenho acesso a muitas informa��es sobre os linhas-duras.";
			mes "No entanto, ainda pode haver esperan�a.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "A Guerra seria ruim para todos os pa�ses envolvidos.";
			mes "Por isto eu gostaria de lhe pedir que voc� infiltre.";
			mes "Dentro da Base no Vulc�o de Thor pela raz�o de proteger a paz internacional.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu realmente quero saber mais sobre o que eles est�o planejando fazer.";
			mes "Mas este local � fortemente vigiado!";
			mes "Como eu irei me infiltrar?";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Voc� est� certo.";
			mes "Vamos ter de pensar";
			mes "em uma forma muito boa para voc� se infiltrar neste local. Hmmmm...";
			aru_vol = 1;
			setquest(2114);
			close2;
			cutin("",255);
			end;
		} else if ((aru_vol) && (aru_vol < 5)) {
			mes "[Sumo Sacerdote Zhed]";
			mes "Hmm...";
			next;
			switch (select("Como Infiltrar na Base","Os Moderados","Os linhas-duras")) {
				case 1:
				mes "[Sumo Sacerdote Zhed]";
				mes "Eu ainda n�o tenho nenhuma id�ia de como Infiltrar na base dentro do Vulc�o de Thor.";
				mes "D�-me um pouco mais de tempo, e espero que possamos pensar em alguma coisa juntos.";
				break;
				case 2:
				mes "[Sumo Sacerdote Zhed]";
				mes "N�s Sacerdotes da Fac��o Moderada somos opostos a guerra.";
				mes "Ent�o n�s fomos tentando desenvolver imita��es do Cora��o de Ymir por muito tempo.";
				mes "Temos ainda de ter sucesso, infelizmente.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Os linhas-duras se opuseram aos nossos esfor�os, mas eles nos deixaram continuar.";
				mes "Porque eles pensam que poder�o usar a imita��o do Cora��o de Ymir para fins militares.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "O projeto de Reprodu��o do Cora��o de Ymir tem sido frustrante as melhores mentes do mundo.";
				mes "E at� mesmo alguns cientistas t�m recorrido ao uso de m�todos proibidos.";
				mes "� uma pena, de verdade.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Varmunt teve sucesso em recriar o Cora��o de Ymir.";
				mes "Mas quando ele foi destru�do Varmunt desapareceu.";
				mes "Ele fez isso para evitar a guerra.";
				mes "Mas n�s poder�amos utilizar est� ajuda agora.";
				break;
				case 3:
				mes "[Sumo Sacerdote Zhed]";
				mes "Os linhas-duras s�o especialmente fan�ticos em sua devo��o a Freya, e ir�o fazer qualquer coisa para.";
				mes "Favorecer o que eles interpretam como ela seria.";
				mes "Eles est�o dispostos a ir para a guerra por suas cren�as.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "O fato de eles terem constru�do uma base militar dentro do Vulc�o de Thor.";
				mes "Me perturba bastante tenho mais do que certeza de que pretendem declarar guerra.";
				mes "Contra qualquer na��o que tenha um peda�o do Cora��o de Ymir.";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Quem est� no comando da base no Vulc�o de Thor?";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "O Sumo Sacerdote Vildt.";
				mes "Ele est� no comando da maioria das constru��es importantes em Arunafeltz.";
				mes "Sua sala fica no outro lado da Base, mas sempre fica bem vigiada por seus guardas.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Vildt � um dos membros de maior cargo dentro da fac��o linha-dura de sacerdotes.";
				mes "N�o � do estilo dele conversar com algu�m que tenha um cargo abaixo do dele.";
				break;
			}
			close2;
			cutin("",255);
			end;
		} else if (aru_vol == 5) {
			cutin("ra_gman",2);
			if (countitem(File01)) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Voc� poderia dar uma olhada nesta Pasta de arquivos, Sumo Sacerdote Zhed?";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Claro.";
				mes "Vamos ver, o que tem dentro desta Pasta de Arquivos?";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes ".............";
				mes ".................";
				mes "....................!";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Isto � um Relat�rio Geol�gico sobre o Vulc�o de Thor?";
				mes "Ah, entendo.";
				mes "Eles tem de ter algu�m que verifique regularmente o solo.";
				mes "Para verificar se o vulc�o entrar� em erup��o.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Embora seja muito perigoso construir uma Base Militar ali.";
				mes "Alguns materiais de armas s� podem ser forjados a partir do calor que vem do Vulc�o de Thor.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Sim, acho tamb�m que seja bem prov�vel que haja metais.";
				mes "E materiais especiais que s� podem ser encontrados dentro do Vulc�o de Thor.";
				mes "Isso faz todo sentido.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Apesar do vulc�o estar dormente agora.";
				mes "Estes relat�rios dizem que o vulc�o est� seguro.";
				mes "Ou pronto para entrar em erup��o a qualquer momento.";
				mes "Os dados que est�o aqui n�o fazem sentido.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Hm. Isto � apenas um palpite, mas vendo estas discrep�ncias em seus relat�rios.";
				mes "Eu realmente acho que esse ge�logo tem algo contra a base no Vulc�o de Thor.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Quem sabe, se isso for verdade, ele poderia ser capaz de ajudar voc� a se infiltrar dentro da Base.";
				mes "Voc� n�o acha que seria �timo verificar por isto agora?";
				next;
				if (select("Sim","N�o") == 2) {
					mes "[Sumo Sacerdote Zhed]";
					mes "Bem, voc� nunca saber� antes de perguntar.";
					mes "Al�m disso, eu n�o sei se voc� sabe alguma outra forma de se infiltrar dentro da Base no Vulc�o de Thor...";
					next;
				}
				mes "[Sumo Sacerdote Zhed]";
				mes "Espero que voc� v� falar com o ge�logo.";
				mes "Ele deve estar em Veins, a cidade do deserto a sul de Rachel.";
				mes "Ele � sua melhor oportunidade de entrar na Base do Vulc�o de Thor sem suspeitas.";
				delitem(File01,1);
				aru_vol = 6;
				changequest(2115,2116);
			} else {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Huh...?";
				mes "Onde eu coloquei aquela Pasta de Arquivos?";
				close2;
				cutin("",255);
				end;
			}
		} else if (aru_vol == 6) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Espero que voc� v� falar com o ge�logo.";
			mes "Ele deve estar em Veins, a cidade do deserto a sul de Rachel.";
			mes "Ele � sua melhor oportunidade de entrar na Base do Vulc�o de Thor sem suspeitas.";
			close2;
			cutin("",255);
			end;
		} else if ((aru_vol > 6) && (aru_vol < 26)) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Espero que voc� v� falar com o ge�logo.";
			mes "Ele deve estar em Veins, a cidade do deserto a sul de Rachel.";
			mes "Ele � sua melhor oportunidade de entrar na Base do Vulc�o de Thor sem suspeitas.";
			close2;
			cutin("",255);
			end;
		} else if (aru_vol == 26) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Ah! Voc� est� de volta!";
			mes "O Ge�logo conseguiu lhe ajudar a entrar dentro da Base no Vulc�o de Thor?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Mais do que isso.";
			mes "N�s conseguimos convencer a base de que o vulc�o est� prestes a explodir.";
			mes "Ent�o eles est�o evacuando a �rea rapidamente.";
			mes "Eles est�o em p�nico por l�!";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Hahaha! Isso � �timo!";
			mes "Mesmo que descubram que eles foram enganados.";
			mes "Levar� um tempo at� que eles descubram isto com toda essa confus�o.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Sim, agora poderia n�o ser o momento ideal para acabar com a fac��o linha-dura.";
			mes "Mas a oportunidade dever� se apresentar em breve.";
			mes "Obrigado por toda a sua ajuda.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Por favor descanse por um tempo, e eu vou cuidar do resto.";
			mes "Quando chega a hora do ataque, entrarei em contato com voc� novamente.";
			mes "Juntos, somos capazes de proteger a paz entre nossas na��es.";
			aru_vol = 27;
			completequest(60213);
			getexp(200000,0);
			close2;
			cutin("",255);
			end;
		} else {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Ugh...!";
			mes "Eu estou com uma dor de cabe�a horr�vel!";
			close2;
			cutin("",255);
			end;
		}
	} else {
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Que Freya esteja com voc�.";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
ra_temin,134,128,3	script	Guarda da Papisa#rac::raofficeguard	4_M_MASK1,{
	if ((ra_tem_q == 15) && (countitem(Ice_Heart) > 39)) {
		mes "[Guarda do Escrit�rio Papal]";
		mes "Hmm? O que � que voc� tem a�?";
		mes "Oh, voc� recolheu 40 Cora��es Congelados e trouxe uma carta de recomenda��o do Sumo Sacerdote?";
		mes "Muito Impressionante.";
		close2;
		ra_tem_q = 16;
		delitem(Ice_Heart,40);
		end;
	} else if (ra_tem_q == 16) {
		mes "[Guarda do Escrit�rio Papal]";
		mes "A Papisa est� dentro esperando voc�, por favor n�o a fa�a esperar muito.";
		close;
	} else {
		mes "[Guarda do Escrit�rio Papal]";
		mes "Sinto muito, mas a Papisa est� fazendo um servi�o agora.";
		mes "Por favor volte depois que o servi�o estiver terminado";
		close;
	}
}
ra_temin,134,134,3	duplicate(raofficeguard)	Guarda da Papisa#2ra	4_M_MASK1

// ------------------------------------------------------------------
ra_temin,134,131,0	script	gyoin1#rachel	WARPNPC,1,1,{
	OnTouch:
	if (ra_tem_q == 16) {
		warp("ra_temin",276,239);
	} else if (ra_tem_q > 16) {
		mes "[Guarda do Escrit�rio Papal]";
		mes "Sinto muito, mas a Papisa est� fazendo um servi�o agora.";
		mes "Por favor volte depois que o servi�o estiver terminado";
		close;
	} else {
		mes "^3355FFA porta est� fechada.^000000";
		close;
	}
}

// ------------------------------------------------------------------
ra_temsky,99,99,5	script	Papisa#rachel	4_F_ARUNA_POP,{
	if (ra_tem_q == 16) {
		cutin("ra_bishop",2);
		mes "^3355FFEs-essa pequena garota � a papisa...?!^000000";
		next;
		mes "[Papisa]";
		mes ".......................";
		mes "Hmm...";
		mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "A alguma coisa errada?";
		mes "Ah, eu sei, s�o os meus olhos.";
		mes "Pe�o desculpas se assustei um pouco voc�.";
		next;
		select("N�o, n�o para todos...!");
		mes "[Papisa]";
		mes "......";
		mes "......";
		mes ".....Eu sei, minha apar�cia...";
		next;
		mes "[Papisa]";
		mes "As pessoas geralmente ficam um pouco chocadas na primeira vez que me veem.";
		mes "Ent�o... �... De onde voc�";
		mes "Veio,"+strcharinfo(PC_NAME)+"?";
		next;
		input(.@input$);
		mes "[Papisa]";
		mes .@input$+"...?";
		mes "Eu acho que j� ter ouvido sobre est� lugar antes.";
		mes "O que voc� fazia quando morava l�?";
		next;
		input(.@input$);
		mes "[Papisa]";
		mes .@input$+"...?";
		mes "Isto soa bastante extraordinario.";
		mes "Ooh, ooh!";
		mes "Fale-me, como voc� veio aqui para Rachel?";
		mes "Estou interessada quero saber mais sobre voc�";
		next;
		mes "^3355FFVoc� e a papisa continuaram a confort�vel conversa.";
		mes "Como ela falou, ela parece mais com uma pequena garota solit�ria do que uma solene figura religiosa para a na��o.^000000";
		next;
		mes "[Papisa]";
		mes "...As vezes, eu realmente desejo viver como voc�.";
		mes "Voc� pensa que ser papisa � grande coisa.";
		mes "Mas eles me fazem trabalhar o tempo todo, e s�o todos os tipos de coisas que eu n�o posso fazer.";
		next;
		mes "[Papisa]";
		mes "Voc� sabe o que � estranho?";
		mes "Eu acho que sou a lider dessa religi�o, mas h� um local sagrado, que ainda n�o estou autorizada a visitar.";
		mes "N�o � esquisito?";
		next;
		select("S-S�rio...?");
		mes "[Papisa]";
		mes "...eh. Eu n�o sei muito sobre, e n�o posso realmente falar sobre isso.";
		mes "Deste lugar a \"Terra Santa\"...";
		next;
		select("Terra Santa?");
		mes "[Papisa]";
		mes "Desculpe-me...";
		mes "Eu quero falar mais para voc�, mas...";
		mes "Isso � tudo que eu sei.";
		mes "Eu queria saber...";
		mes "Eu me pergunto o que eles poderiam est� escondendo ali";
		next;
		mes "[Sacerdote]";
		mes "Desculpe-me por interrompe-la excel�ncia.";
		mes "Mas � a hora dos servi�os oficiais.";
		next;
		mes "[Papisa]";
		mes "J�?! Hmpf...";
		mes "Ah, antes que eu esque�a...";
		mes "Eu preciso dizer que Sumo Sacerdote Zhed quer falar com voc�, "+strcharinfo(PC_NAME)+".";
		next;
		mes "[Papisa]";
		mes "Eu realmente quero agradecer voc� por vir aqui falar comigo.";
		mes "Eu tive um grande tempo de aprendizado.";
		mes "Agora tenho de ir para o servi�os oficiais, ent�o...";
		mes "Isto � um adeus por enquanto";
		close2;
		cutin("",255);
		ra_tem_q = 17;
		changequest(8100,8101);
		end;
	}
	end;
}

// ------------------------------------------------------------------
ra_temin,288,151,0	script	hidden1#rachel	FAKE_NPC,1,6,{
	OnTouch:
	if (ra_tem_q == 18) {
		mes "^3355FFDessa dist�ncia, voc� pode ouvir claramente as vozes do outro lado da parede...^000000";
		next;
		mes "[????]";
		mes "...Foi realmente necess�rio involver um estrangeiro nesta situa��o?";
		mes "Responda-me!";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Isto tudo � sobre o acidente?";
		mes "Voc� sabe que eu n�o concordei com as a��es que levaram ao derramamento de mana.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Embora eu pensei que era uma decis�o negligente.";
		mes "Eu fechei o santu�rio e fiz o meu melhor para cobrir este lament�vel acidente.";
		next;
		mes "[????]";
		mes "N�o estou culpando voc�.";
		mes "Na verdade, eu vou admiti-lo: este foi o nosso erro.";
		mes "Deixamos com que a infesta��o de monstros e o vazamento de mana acontecesse.";
		next;
		mes "[????]";
		mes "Mas isso n�o tem nada a ver com o que eu estou lhe perguntando!";
		mes "Voc� acha que realmente est� tudo bem permitir um estrangeiro falar com a nossa papisa.";
		mes "Durante uma hora tumultuosa como esta?!";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Por que n�o?";
		mes "Pensei que iria trazer a ela um grande conforto.";
		mes "Ela est� muito confusa quanto a raz�o pela qual o Solo Sagrado foi fechado.";
		mes "E ela n�o pode saber o que est� acontecendo l�.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Novamente...";
		mes "Eu n�o concordo com o que secretamente est� acontecendo por l�.";
		mes "Eu sei que eu n�o posso oficialmente ser contra este tipo de a��o, mas...";
		next;
		mes "[????]";
		mes "N�o h� nada para se preocupar ali!";
		mes "Ela vai ter todos cargos antes de voc� sabe o que.";
		mes "Al�m disso, j� � tarde de mais para voltar atr�s agora ent�o eu estou avisando.";
		mes "N�o ouse fazer nada de est�pido.";
		next;
		mes "^3355FFAlgu�m est� vindo!";
		mes "� melhor voc� sair de perto da parede e se esconder da forma que puder!^000000";
		next;
		hideoffnpc("Sumo Sacerdotisa Niren#ra");
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Ah! Voc� deve ser o "+strcharinfo(PC_NAME)+", de quem me disseram.";
		mes "Prazer em conhec�-lo.";
		mes "Sumo Sacerdotisa Niren, ao seu servi�o.";
		next;
		mes "[Sumo Sacerdotisa Niren]";
		mes "Ouvi dizer que voc� teve o privil�gio de falar com nossa papisa, e que ela teve um grande momento.";
		mes "O que voc� achou dela, hm?";
		next;
		select("Ela � diferente do que eu esperava...");
		cutin("ra_gwoman2",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Ah, entendo o que voc� quer dizer...";
		mes "Normalmente, a maioria dos estrangeiros me dizem que esperavam que a nossa papisa seria uma mulher mais velha.";
		mes "Mas esse n�o � o caso aqui em Arunafeltz.";
		next;
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Geralmente, a nossa papisa � escolhida por sua semelhan�a com a nossa deusa Freya.";
		mes "Ela deve ter cabelos louros prateados, pele branca como neve, e olhos divinamente coloridos.";
		mes "Voc� viu, n�o �?";
		next;
		mes "[Sumo Sacerdotisa Niren]";
		mes "Estou curiosa: que tipo de coisas voc� e a papisa conversaram?";
		mes "Como voc� sabe, n�s sacerdotes somos proibidos de deixar Arunafeltz, ent�o...";
		next;
		mes "^3355FFVoc� fala os detalhes sobre o que voc� falou com a papisa.";
		mes "Mas voc� teve certeza de n�o mencionar nada sobre o Solo Sagrado como o Sumo Sacerdote Zhed lhe pediu.^000000";
		next;
		mes "[Sumo Sacerdotisa Niren]";
		mes "Ah, isto � muito interessante, sua terra.";
		mes "Diga-me, como voc� conhe�eu Bekento, er, digo, Sumo Sacerdote Zhed?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "(^666666Bekento?^000000)";
		next;
		select("Explicar como voc� conhe�eu o Sumo Sacerdote Zhed");
		cutin("ra_gwoman2",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes ".........................";
		mes "Isso � tudo? Hm?";
		mes "Bem legal.";
		mes "^333333*Suspiro*^000000";
		mes "Eu penso ele acredita muito nas pessoas...";
		mes "Mas isso � apenas minha opini�o.";
		next;
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Se voc� n�o se importa...";
		mes "Eu quero dar-lhe um pequeno conselho.";
		mes "N�o se aproxime tanto do Sumo Sacerdote Zhed.";
		mes "Se voc� ficar perto dele, voc� poder� ficar em apuros.";
		next;
		cutin("",255);
		hideonnpc("Sumo Sacerdotisa Niren#ra");
		mes "^3355FFA Sumo Sacerdotisa Niren se foi logo depois de dizer essas palavras.";
		mes "O que ela quis dizer?";
		mes "Por enquanto, voc� n�o v� problemas em conversar com o Sumo Sacerdote Zhed.^000000";
		ra_tem_q = 19;
		if (questprogress(8102)) {
			changequest(8102,8103);
		} else {
			changequest(8101,8103);
		}
		close;
	}
	end;
}
ra_temin,294,149,0	script	Sumo Sacerdotisa Niren#ra	4_F_MADAME,{
	end;

	OnInit:
	hideonnpc(strnpcinfo(NPC_NAME));
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer120000:
	stopnpctimer;
	hideonnpc(strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
ra_temin,293,144,0	script	out1#rachel	FAKE_NPC,3,3,{
	OnTouch:
	if (ra_tem_q == 18) {
		mes "^3355FFIsto soa como se eles estivecem falando ainda.";
		mes "� melhor ser paciente e esperar mais um pouco";
		mes "Ainda...^000000";
		next;
		mes "^3355FFUm pouco de escutas nunca feriu ningu�m.";
		mes "Talvez voc� possa escutar um pouco melhor se voc� escutar do lado esquerdo da parede.^000000";
		close2;
		warp("ra_temin",300,153);
		end;
	}
	end;
}

// ------------------------------------------------------------------
ra_temin,272,143,0	script	Chave#rachel	FAKE_NPC,3,3,{
	OnTouch:
	if (ra_tem_q == 20) {
		if (select("Ignorar","Apanhar") == 1) {
			mes "^3355FFVoc� decidiu ignorar o pequeno objeto brilhante.";
			mes "N�o importa o qu�o importante isto possa ser para voc� no futuro.^000000";
			close;
		}
		mes "^3355FFAp�s pegar este pequeno objeto, foi poss�vel identificar que isto � uma chave.";
		mes "Talvez voc� pode us�-la para abrir algum tipo de fechadura.";
		ra_tem_q = 21;
		close;
	}
	end;
}

// ------------------------------------------------------------------
ra_temin,28,319,0	script	saint1#rachel	WARPNPC,4,2,{
	OnTouch:
	if (ra_tem_q > 21) {
		warp("ra_san01",140,135);
		end;
	}
	if (ra_tem_q == 21) {
		mes "^3355FFEsta deve ser a entrada para o Solo Sagrado.";
		mes "Contudo, a porta parece estar trancada.^000000.";
		next;
		if (select("Sair","Usar chave pequena") == 2) {
			mes "^3355FFVoc� coloca a chave";
			mes "Pequena que voc� achou na sala do Sumo Sacerdote Zhed.";
			mes "E descobre que ela pode destrancar est� porta.^000000";
			close2;
			warp("ra_san01",140,135);
			end;
		}
		close;
	}
	mes "^3355FFA porta est� trancada.^000000";
	close;
}

// ------------------------------------------------------------------
que_san04,119,203,0	script	imir3#rachel	FAKE_NPC,7,7,{
	OnTouch:
	if (ra_tem_q == 21) {
		mes "^3355FFN�o me admira que este objeto sob a �gua seja t�o familiar.";
		mes "� um Peda�o do Cora��o de Ymir!";
		mes "Na verdade, tem dezenas deles por aqui.^000000";
		next;
		mes "^3355FFPorque teriam tantos desses poderosos artefatos por aqui no Solo Sagrado?";
		mes "Talvez este seja o segredo que os sacerdotes est�o tentando esconder.^000000";
		next;
		hideoffnpc("Sumo Sacerdotisa Niren#r2");
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Como voc� ousa invadir o Solo Sagrado!";
		mes "Identifique-se!";
		mes "Eu vi o que voc� tentou!";
		next;
		cutin("ra_gwoman2",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "A-ah! � voc�, o aventureiro recomendado por Bekento.";
		mes "Hm. Pe�o desculpas por falar assim com voc�.";
		mes "Voc� n�o sabe que n�o � permitido entrar aqui?";
		next;
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Hmm. Bem, voc�s aventureiros de Rune-Midgard s�o famosos por causa de suas habilidades e poderes.";
		mes "Mas isto n�o era esperado.";
		mes "Quero dizer, n�s queremos ter certeza de que este lugar esteja absolutamente seguro.";
		next;
		cutin("ra_gwoman2",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "O que est� feito est� feito...";
		mes "Eu avisei Bekento que ele poderia causar problemas para voc�.";
		mes "Mas parece que voc� tem causado problemas a ele.";
		next;
		mes "[Sumo Sacerdotisa Niren]";
		mes "Compreenda isto, intrusos s�o mais severamente punidos.";
		mes "Mas por causa da minha amizade, com Bekento, estou deixando voc� sair com facilidade.";
		mes "Lembre-se disto.";
		next;
		sc_start(SC_BLIND,600000,0);
		mes "^3355FFNiren come�ou a cantar num tom de voz baixo, e suas p�lpebras ficam pesadas ent�o voc� fica sonolento...^000000";
		close2;
		cutin("",255);
		hideonnpc("Sumo Sacerdotisa Niren#r2");
		ra_tem_q = 22;
		changequest(8104,8105);
		warp("rachel",163,152);
		end;
	}
	end;
}
que_san04,122,200,4	script	Sumo Sacerdotisa Niren#r2	4_F_MADAME,{
	end;

	OnInit:
	hideonnpc(strnpcinfo(NPC_NAME));
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer120000:
	stopnpctimer;
	hideonnpc(strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
rachel,163,152,0	script	imir3#rachel2	FAKE_NPC,3,3,{
	OnTouch:
	if (ra_tem_q == 22) {
		mes "^3355FFVoc� sente uma leve dor de cabe�a depois de recobrar os sentidos.";
		mes "De alguma forma, voc� foi levado de volta � Cidade de Rachel.";
		mes "Por quanto tempo voc� esteve inconsciente?^000000";
		next;
		sc_end(SC_BLIND);
		mes "^3355FF� melhor ir at� o Sumo Sacerdote Zhed, para perguntar sobre o que aconteceu.^000000";
		ra_tem_q = 23;
		close;
	}
	end;
}

// ------------------------------------------------------------------
ra_temple,119,180,0	script	Entrada do Templo#ra_tem	WARPNPC,1,1,{
	OnTouch:
	if ($rachel_donate >= 10000) {
		if (ra_tem_q < 10) {
			mes "^3355FFA entrada do templo est� trancada.^000000";
			next;
			select("Chutar porta","Quebar porta com a arma.");
			emotion(e_omg,0,"Nemma#ra_temple");
			mes "[Sacerdotisa Nemma]";
			mes "Por favor, n�o fa�a isso";
			close;
		}
	} else {
		warp("ra_temin",169,23);
		end;
	}
}
