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
| - Info: Doação ao templo de Rachel.                               |
| * Pré requisito para a quest da Base do Vulcão.                   |
\*-----------------------------------------------------------------*/

ra_temple,116,174,3	script	Nemma#ra_temple	4_F_TRAINEE,{
	if ($rachel_donate < 100000) {
		cutin("ra_nemma03",2);
		mes "[Sacerdotisa Nemma]";
		mes "Bom dia, aventureir"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Posso perguntar o que te traz ao templo hoje?";
		next;
		if (select("Nada, só estou olhando","Eu vim para rezar") == 1) {
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Eu acredito que muitos estrangeiros não conhecem a nossa crença então eu suponho que eles não viriam aqui rezar...";
			mes "Bem, eu espero que você goste de vir aqui, aventureiro";
			close2;
			cutin("",255);
			end;
		}
		mes "[Sacerdotisa Nemma]";
		mes "Oh! fico feliz em saber que nosso tipo de espiritualidade é praticada em outros países.";
		mes "Você sabe, nós do Templo de Cheshrumnir estaremos realizando um festival aqui no templo.";
		next;
		cutin("ra_nemma01",2);
		mes "[Sacerdotisa Nemma]";
		mes "Nós estamos aceitando doações para o festival, então nós agradeceremos se você puder fazer uma contribuição.";
		mes "Independente disso, nós convidamos você a celebrar a graça da Deusa conosco";
		emotion(e_ho);
		next;
		mes "[Sacerdotisa Nemma]";
		mes "Há um Sumo sacerdote que não concorda com a coleta de dinheiro do templo dos patronos.";
		mes "Mas depende de você, se você quer doar ou não.";
		mes "Se você doar, você pode ser capaz de ganhar um prêmio";
		next;
		mes "[Sacerdotisa Nemma]";
		mes "Você pode usar nossos Bilhetes de Loteria para ganhar algo legal do nosso Armazém do Templo.";
		mes "Entretando, você doa 50,000 zenys para cada Bilhete de Loteria.";
		mes "O que, por acaso também é a quantidade mínima de doação";
		next;
		cutin("ra_nemma03",2);
		mes "[Sacerdotisa Nemma]";
		mes "Os prêmios que são dados aos doadores são escolhidos também aleatóriamente.";
		mes "Então eu não tenho como te dizer o que você ganhará.";
		mes "Você estaria interessado em fazer uma doação?";
		next;
		if (select("Não, Obrigado","Claro") == 1) {
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Eu entendo.";
			mes "Bem, talvéz uma outra hora.";
			mes "Que Freya te abençoe em todas as suas jornadas.";
			mes "E que a graça da Deusa sempre nos ajude em tudo o que fizemos";
			close2;
			cutin("",255);
			end;
		}
		mes "[Sacerdotisa Nemma]";
		mes "Ótimo! Quanto você gostaria";
		mes "de doar? Nós só podemos";
		mes "aceitar doações acima de 50,000 zeny, e nós podemos apenas aceitar até 150,000 zeny de uma vez.";
		mes "É um pouco complicdo, eu sei...";
		next;
		switch (select("50,000z - 1 Bilhete de Loteria","100,000z - 2 Bilhete de Loteria","150,000z - 3 Bilhete de Loteria","Cancelar")) {
			case 1: .@value$ = "50,000";  .@Ticket = 1; break;
			case 2: .@value$ = "100,000"; .@Ticket = 2; break;
			case 3: .@value$ = "150,000"; .@Ticket = 3; break;
			case 4:
			cutin("ra_nemma02",2);
			mes "[Sacerdotisa Nemma]";
			mes "Eu entendo que deveremos pensar nestante para se separar de uma quantidade de dinheiro como 50,000 zeny.";
			mes "Mesmo assim, Freya está prontegendo-o sempre, onde quer que você vá";
			close2;
			cutin("",255);
			end;
			break;
		}
		cutin("ra_nemma01",2);
		mes "[Sacerdotisa Nemma]";
		mes "Assim,"+strcharinfo(PC_NAME)+"...";
		mes "Eu quero ter certeza que você quer doar"+.@value$+" zeny, e receber"+.@Ticket;
		if (.@Ticket == 1) {
			mes "Bilhete de Loteria. Está certo?";
		} else {
			mes "Bilhetes de Loteria. Está certo?";
		}
		next;
		if (Zeny >= .@Ticket * 50000) {
			if (!checkweight(Temple_Lottery_Ticket,.@Ticket)) {
				cutin("ra_nemma02",2);
				mes "[Sacerdotisa Nemma]";
				mes "Eu posso acreditar isto escassamente...";
				mes "Você está levando tantos materias você não tem capacidade para carregar um ingresso de loteria.";
				mes "Seria melhor se você colocasse algums coisas no seu armazém, sim?";
				next;
				cutin("ra_nemma01",2);
				mes "[Sacerdotisa Nemma]";
				mes "Não se preocupe, eu ainda estarei aqui depois que você tiver mais espaço disponível em seu inventário.";
				mes "Volte logo, e doe se você puder, ok?";
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
				mes "Ai está você";
				mes "Muito obrigado por";
				mes "sua doação! eu estou certa";
				mes "Que Freya está sorrindo para você, e será recompensado  por sua generosidade";
				close2;
				cutin("",255);
				end;
			} else {
				.@Remaining = 10000 - $rachel_donate;
				cutin("ra_nemma03",2);
				mes "[Sacerdotisa Nemma]";
				mes "Muito obrigado!";
				mes "Nós estaremos continuando aceitando doações até que alcançemos nosso objetivo.";
				mes "Uma vez nós recebemos "+.@Remaining+" mais doações recebemos a quantia de 50,000 zeny.";
				mes "Mosso objetivo estava quase sendo alcançado.";
				next;
				mes "[Sacerdotisa Nemma]";
				mes "Se você está sentindo meio inclinado, volte depois e faça outra contribuição.";
				mes "Obrigado denovo, e Freya pode estar sempre olhando para você.";
				close2;
				cutin("",255);
				end;
			}
		} else {
			.@donate$ = .@Ticket * 50000;
			mes "[Sacerdotisa Nemma]";
			mes "Eu sinto muito, mas você tem menos que "+.@donate$+" zeny...";
			mes "Eu sei que está perguntando muito mais essas são as regras que eu tenho que seguir, então";
			mes "Bom, talvez outra hora, sim?";
			close2;
			cutin("",255);
			end;
		}
	} else {
		if (!ra_tem_q) {
			mes "[Sacerdotisa Nemma]";
			mes "Alô!!";
			mes "...............................";
			mes "Hm, por alguma razão, o portão do templo ainda não abriu, mas deveria estar aberto agora.";
			mes "Bem isso acontece as vezes, então...";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "Veja, há esse sistema de trava automática que foi adicionado ao portão do templo.";
			mes "Quando ele foi construido, mas agora isso é mais um incômodo do que segurança.";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "A todo momento, alguém se complica com a trava, ou se ele quebra.";
			mes "Nos temos que esperar até se reinicie novamente antes de funcionar.";
			mes "Ninguém consegue consertar isso rapidamente, você sabe...";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "^333333*Sniff*^000000 O que eu devo fazer?";
			mes "A reiniciação automática nunca demora tanto, e eu realmente preciso entrar.";
			mes "^333333*Snif*^000000 P-Panno!";
			mes "Panno, eu preeecisooo de ajudaaaa!";
			ra_tem_q = 1;
			close2;
			cutin("",255);
			end;
		} else if ((ra_tem_q >= 1) && (ra_tem_q < 10)) {
			cutin("ra_nemma02",2);
			mes "[Sacerdotisa Nemma]";
			mes "Se o portão está trancado, então eu tenho apenas que achar aquela entrada secreta.";
			mes "Algumas crianças supostamente custumavam entrar e praticar travessuras no templo,";
			mes "Mas não sei quem eles são...";
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
			mes "O portão acabou de abrir e eu pude entrar no templo!";
			mes "Eu estava ficando realmente preocupada sobre isso por enquanto";
			next;
			mes "[Sacerdotisa Nemma]";
			mes "Essa é a primeira vez que o portão foi trancado desde que Panno foi nomeada para seu posto no templo.";
			mes "Eu pensei que talvez algo tenha acontecido e ela estava com problemas, você sabe?";
			next;
			cutin("ra_nemma02",2);
			mes "[Sacerdotisa Nemma]";
			mes "Espere, espere...";
			mes "Eu estou fora.";
			mes "E se o portão trancar novamente?";
			mes "Oooh, o que eu deveria fazer?!";
			close2;
			cutin("",255);
			end;
		} else if (ra_tem_q == 11) {
			emotion(e_ho);
			cutin("ra_nemma03",2);
			mes "[Sacerdotisa Nemma]";
			mes "Ei, "+strcharinfo(PC_NAME)+"!";
			mes "Nós conseguimos atingir nossas metas, isso não é legal?";
			mes "Nós não estamos mais pedindo doações.";
			mes "Mas você ainda pode trocar os seus";
			mes "Bilhetes de Loteria aqui dentro, ok?";
			close2;
			cutin("",255);
			end;
		} else if (ra_tem_q == 12) {
			mes "[Sacerdotisa Nemma]";
			mes "Mmm... Eu sei o que eu posso fazer!";
			mes "Eu posso procurar Fogos de Artifício!";
			mes "Sim, isso será bem divertido para o festival.";
			mes "Ei, você sabe onde eles são vendidos?";
			next;
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Eu, uh, não posso dar para você.";
			mes "Mas... Se você puder me trazer alguns Fogos de Artifícios então, eu rezarei para a sua boa sorte.";
			mes "Me desculpe, mas isso é tudo o que eu realmente posso oferecer";
			next;
			cutin("ra_nemma04",2);
			mes "[Sacerdotisa Nemma]";
			mes "Ei, me traga muitos fogos de Artifícios como uns, ^FF000020 deles^000000!";
			mes "Obrigado, obrigado";
			ra_tem_q = 13;
			close2;
			cutin("",255);
			end;
		} else if (ra_tem_q == 13) {
			cutin("ra_nemma01",2);
			mes "[Sacerdotisa Nemma]";
			mes "Ei, você me trouxe os ^FF000020 Fogos de Artifícios^000000?";
			next;
			if (select("Sim","Não, ainda não") == 1) {
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
					mes "Fogos de Artifícios!!!";
					mes "Oh, me deixe rezar para sua grande fortuna!";
					next;
					mes "^3355FFA Sacerdotisa Nemma está rezando fervorosamente para sua boa fortuna.";
					mes "Sinto como estivesse trabalhando de fato...^000000";
					next;
					mes "[Sacerdotisa Nemma]";
					mes "Eu terminei!";
					mes "Agora está na hora de jogar!";
					mes "Hm, Talvez nossa papisa gostaria de ver também?";
					close2;
					cutin("",255);
					end;
				}
				cutin("ra_nemma02",2);
				mes "[Sacerdotisa Nemma]";
				mes "Ahhhh...";
				mes "Estes Fogos de artifícios não são bastante.";
				mes "Quero dizer, eu sei que é uma doação mas ainda.";
				mes "Quantas diversões serão se não houver muitos fogos de artificio?";
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
rachel,243,37,3	script	Criança#Candy	4_M_CHILD1,{
	mes "[Criança]";
	mes "Hey! Pra que esse sorriso?";
	mes "Você não vai dar um tapa na minha cabeça, vai?";
	mes "Não! eu odeio isso!";
	next;
	mes "[Criança]";
	mes "Não venha aqui!";
	mes "Eu não quero que você bata na minha cabeça! Grrr. . . ";
	mes "E-eu estou avisando!";
	next;
	mes "[Criança]";
	mes "Ei, olhe para roupas, de onde você veio?";
	next;
	mes "[Criança]";
	mes "Você é de um País diferente?";
	next;
	mes "[Criança]";
	mes "Huh, huh?";
	mes "Qual País você veio?";
	next;
	mes "[Criança]";
	mes "Eh, que seja";
	next;
	mes "[Criança]";
	mes "Oh, hey você gosta de doce?";
	if (ra_tem_q == 1) {
		switch (select("Não muito","Sim","Claro, Eu adoro essa coisa","De jaito nenhum")) {
			case 1:
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			mes "[Criança]";
			mes "Oh. É por que você é um Adulto.";
			mes "Por que você não gosta de doces??";
			close;
		}
		mes "[Criança]";
		mes "Oh, isso significa que você tem um doce aí?";
		next;
		mes "[Criança]";
		mes "Eu quero um!";
		next;
		mes "[Criança]";
		mes "Mme de um!";
		mes "Me dá, Me dá!";
		next;
		if (countitem(Candy)) {
			mes "[Criança]";
			mes "Hmm...";
			mes "Se você me der algum doce, então eu vou te contar uma coisa realmente legal, sim?";
			next;
			if (select("Claro","Não") == 1) {
				delitem(Candy,1);
				mes "[Criança]";
				mes "LEGAL!!!!";
				next;
				mes "[Criança]";
				mes "Você sabia que eles sempre deixam uma das janelas do templo destrancadas?";
				mes "Eu olhei os padres lá dentro.";
				mes "Estavam todos lutando!";
				mes "Isso não é ruim?";
				next;
				mes "[Criança]";
				mes "Hum, eles são maduros eu não sei.";
				mes "Talvez eles...";
				mes "Hmm. hmm, eu me lembro que lutar é uma coisa ruim";
				next;
				mes "[Criança]";
				mes "Ooow!";
				mes "Agora me lembrei!";
				mes "Se você é outro país!";
				mes "Eu não deveria ter dito isso a você!";
				next;
				mes "[Criança]";
				mes "Oooh, Eu te odeio agora!";
				mes "Me deixa em paz";
				ra_tem_q = 2;
				close;
			}
		}
		mes "[Criança]";
		mes "Espere, você não tem algum doce?";
		mes "Como pode você ter me dito que adorava doce";
		mes "Quando você não tem nenhum?";
		mes "Olhe isso!";
		mes "Meus bolsos estão cheios de doces!";
	} else if (ra_tem_q == 2) {
		mes "[Criança]";
		mes "Você está partindo?";
		mes "Você não quer me assistir jogando pedra, papel, tesoura?";
		next;
		mes "[Criança]";
		mes "Ei! Eu não gosto do jeito que você está olhando para mim.";
		mes "Eu não gosto de você me olhando desse jeito.";
		mes "Porque você não vai embora?";
		next;
		mes "[Criança]";
		mes "Aff, eu falei, vá embora!";
	}
	close;
}

// ------------------------------------------------------------------
ra_temple,67,209,0	script	zawa00	FAKE_NPC,3,3,{
	OnTouch:
	if ((ra_tem_q >= 2) && (ra_tem_q < 10)) {
		mes "^3355FFVocê nota ligeramente uma janela aberta que é facil de entrar.^000000";
		next;
		if (select("Fique","Entrar na Janela") == 2) {
			mes "^3355FFVocê puxa a janela, e abre suavemente.";
			mes "Isso provavelmente é como os ladrões usam para entrar sem serem percebidos nesse templo.^000000";
			close2;
			warp("que_rachel",62,82);
			end;
		}
		mes "^3355FFVocê decide que é errado entrar em um lugar furtivamente.";
		mes "Mas e se você tomar bastante cuidado?^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,63,82,0	script	Janela#ra_temple	HIDDEN_NPC,{
	mes "^3355FF está janela está aberta^000000";
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
		mes "^3355FFÉ estranhamente escuro aqui.^000000";
		ra_tem_q = 3;
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,59,112,0	script	zawa02	FAKE_NPC,10,10,{
	OnTouch:
	if (ra_tem_q == 3) {
		mes "^3355FFVocê ouve algum som vindo do corredor para a capela.";
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
		mes "^3355FFVocê ouve sons de alguma coisa lá em cima";
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
		mes "^3355FF Você ouve alguma coisa cair das escadas seguido por barulhos que paracem uma briga.^000000";
		ra_tem_q = 6;
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,28,315,0	script	Mancha de Sangue	FAKE_NPC,5,5,{
	OnTouch:
	if (ra_tem_q == 6) {
		mes "^3355FF Há uma mancha no chão que é mais escura que que o resto do chão.^000000";
		next;
		if (select("Investigar","Ignorar") == 1) {
			mes "^3355FF É muito escuro tambem realmente para ver a mancha^000000";
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
			mes "^3355FFVocê decide que seu tempo seria melhor aproveitado investigando alguma coisa.^000000";
			close;
		}
	} else if (ra_tem_q == 7) {
		mes "^3355FF Essa manha preta no chão é realmente arrepiante não importa quanto tempo você olha para ela.^000000.";
		next;
		if (select("Investigar novamente","Ignorar") == 1) {
			mes "^3355FFO sangue no chão";
			mes "não secou, mas";
			mes "está frio agora.^000000";
			next;
			mes "...";
			mes "......";
			mes ".........";
			next;
			mes "^3355FFA quantidade de sangue no chão é mais do que o sangue de uma pessoa.";
			mes "É melhor sair daqui antes que seja tarde de mais.^000000";
			ra_tem_q = 8;
			close;
		} else {
			mes "^3355FFVocê decide que seu";
			mes "tempo seria melhor aproveitado";
			mes "investigando alguma coisa.^000000";
			close;
		}
	} else if (ra_tem_q == 8) {
		mes "^3355FFEstá mancha de sangue no chão é um mal sinal.";
		close;
	}
	end;
}

// ------------------------------------------------------------------
que_rachel,170,37,0	script	nemma01::nemma01	FAKE_NPC,5,5,{
	OnTouch:
	if (ra_tem_q == 8) {
		mes "[???]";
		mes "Só a deusa existe.";
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
		mes "E-es-essa é a voz da sacerdotisa Panno!";
		mes "Mas ela não estava fora da porta?";
		mes "O que exatamente ela está falando?";
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
que_rachel,169,18,0	script	Portão#ra_tem	WARPNPC,2,2,{
	mes "^3355FFTO portão está fechado.^000000";
	next;
	switch (select("Puxar o portão","Examinar o portão","Chutar o Portão","Bater no portão com uma arma")) {
		case 1:
		mes "^3355FFVocê puxa o portão com toda sua força.";
		if (ra_tem_q == 9) {
			close2;
			ra_tem_q = 10;
			warp("ra_temple",119,175);
			end;
		}
		mes "Mas ele nem mesmo se move.^000000";
		break;
		case 2:
		mes "^3355FFTem alguma coisa estranha uma maquinaria instalada no portão.";
		mes "E tem uma abertura aqui onde você pode inserir um cartão ou permissão.";
		mes "As luzes está acessa, então ha alguém trabalhando.^000000";
		break;
		case 3:
		mes "^3355FFVocê chuta o portão ferozmente";
		if (ra_tem_q == 9) {
			close2;
			ra_tem_q = 10;
			warp("ra_temple",119,175);
			end;
		}
		mes "Mas não importa quanta raiva que você pôs em seu chute, o portão recusa a abrir para você.";
		mes "Oh, e seu pé dói também.^000000";
		break;
		case 4:
		mes "^3355FFEspera!";
		mes "Isso não é uma boa idéia.";
		mes "Você não pode";
		mes "quebrar o portão de um lugar santo.";
		mes "Heróis não se especializam em descrença.^000000";
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
		select("O que está acontecendo com o portão?");
		cutin("ra_fano02",2);
		mes "[Sacerdotisa Panno]";
		mes "Porta...?";
		next;
		select("A porta trancada para o templo!");
		mes "[Sacerdotisa Panno]";
		mes "Eu não sei o que você quer dizer.";
		next;
		select("Explique");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu acho que Sacerdotisa Nemma ficou preocupada que o portal quebrou denovo.";
		mes "Embora não foi como aquela vez você começou sua posição aqui no templo.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Preocupada...?";
		mes "Sim, o minha irmã gêmea é conhecida por fazer muitas coisas, e chorar para ter minha ajuda.";
		mes "Estou certa?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "É estranho";
		mes "... Ela disse que o portão iria se corrigir automaticamente propriamente dito.";
		mes "Mas não tem sido feito ultimamente.";
		mes "Ela estava agindo realmente engraçada..";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ela estava falando sobre a história dos templos e como o sistema de segurança era construído.";
		mes "Então ela mencionou você, assim tenho a sensação de que você possa saber alguma coisa sobre isto.";
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
		mes "Eu estava lá quando o portão fecho, e eu ouvi alguem com exatamente sua voz sussurar algo para magicamente abrir o portão!";
		mes "O que é que todos falam?";
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
		mes "Nós... Quero dizer....";
		next;
		cutin("ra_fano01",2);
		mes "[Sacerdotisa Panno]";
		mes "Nemma e eu somos descendentes de uma família de grandes alquimistas.";
		mes "Eles passaram por uma longa e religiosa peregrinação e terminaram aqui.";
		mes "Eles foram os que construíram este templo e sistema de segurança.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Em certo sentido, este templo é o túmulo dos nossos antepassados.";
		mes "Que deixaram Rune-Midgard e construiram esta cidade de Rachel a mais de dois mil anos atrás.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Ao longo das gerações, muitos alquimistas sairam de Rune-Midgard e instalaram-se aqui, convertendo o deserto em campos verdes.";
		mes "Este templo foi suposto ser um refúgio para intrusos.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Meu ancestral projetou o sistema de segurança do templo para exigir uma autorização especial para acessar o templo.";
		mes "Mas os invasores nunca vinheram, e nós nunca necessitamos das autorizações.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "As autorizações especiais foram eliminados.";
		mes "Mas o automático sistema de segurança foi deixado no portão, apenas por precaução.";
		mes "Agora, tenho ouvido que o sistema de segurança foi avariado.";
		next;
		cutin("ra_fano03",2);
		mes "[Sacerdotisa Panno]";
		mes "No entanto, isso não é possível, mesmo pelos padrões de hoje, o sistema foi perfeitamente desenhado.";
		mes "Enquanto eu estava rezando na Capela algum tempo atrás, achei o que está causando problemas no portão.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "De repente, as luzes foram apagadas, e eu mal podia ver ao meu redor.";
		mes "Eu estava prestes a ir ao exterior quando eu ouvi um barulho na escada.";
		next;
		cutin("ra_fano02",2);
		mes "[Sacerdotisa Panno]";
		mes "O que eu posso dizer, alguém está transportando algo fora das terras sagradas.";
		mes "Eu não sei o que se mantem lá, embora.";
		mes "Eu não sou uma sacerdotisa de alto nivel.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Não sei se eu quero descobrir o que está ali, ouvi alguma que soava como alguns horríveis monstros uivando.";
		mes "Foi incrivelmente assustador.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Eu apavorei-me, corri para a frente da minha mesa.";
		mes "E recitei a secreta senha passada por gerações por meus acestrais para abrir a porta.";
		next;
		cutin("ra_fano01",2);
		mes "[Sacerdotisa Panno]";
		mes "Você vê, meus ancestrais incluíram a característica secreta de reconhecimento da senha e de voz na porta caso algo disponha da permição do templo -- só neste caso.";
		next;
		mes "[Sacerdotisa Panno]";
		mes "A verdadeira razão pela qual e porta está agindo estranhamente não é porque a porta está quebrada.";
		mes "Mas porque alguém está tramando dentro e fora da terra santa";
		next;
		mes "[Sacerdotisa Panno]";
		mes "Quem quer que seja, ele deve estar usando uma das velhas licenças do templo a fim cobrir suas trilhas.";
		mes "Agora, você sabe tudo.";
		next;
		cutin("ra_fano01",2);
		mes "[Sacerdotisa Panno]";
		mes "É melhor você não contar o que você descobriu por mim.";
		mes "Caso contrário, estou certa que acabaremos mortos.";
		mes "Desculpe-me agora, eu preciso voltar para meu trabalho.";
		ra_tem_q = 12;
		close2;
		cutin("",255);
		end;
	} else {
		if (!checkweight(Yggdrasilberry,1)){
			cutin("ra_fano02",2);
			mes "[Sacerdotisa Panno]";
			mes "Você está transportando itens demais no momento.";
			mes "O que você vai fazer se eu lhe dar algo grande, e pesado?";
			close2;
			cutin("",255);
			end;
		} else if (countitem(Temple_Lottery_Ticket)) {
			mes "[Sacerdotisa Panno]";
			mes "Eu posso resgatar apenas";
			mes "1 Bilhete de Loteria por vez.";
			mes "Sua recompensa para este bilhete é...";
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
			mes "Isso é um palácio sagrado";
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
		mes "Por alguma razão, você parece familiar para mim.";
		mes "Você era pra estar aqui?";
		mes "Caso contrário você deve sair deste lugar se você não tem a própia autorização.";
		next;
		select("Eu estou aqui no lado de Vincent");
		mes "[Sumo Sacerdote Zhed]";
		mes "Vicent te enviou?";
		mes "Ah sim.";
		mes "Você deve ter vindo me procurado.";
		mes "Eu sou o Sumo Sacerdote Zhed, e eu entendo que você tem um pacote para mim.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Geralmente, Vicente não confia em estranhos para entregar esses pacotes.";
		mes "Mas talvez isso foi necessário por uma estranha circunstância.";
		mes "De qualquer maneira vamos ver o que ele mandou para mim.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Hm? Oque é isso?";
		mes "Vicente me mandou um recado?";
		mes "Eu suponho que isto seja muito";
		mes "importante.";
		mes "Me de somente um momento para ler isto, por favor.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "..................................";
		mes "Hrrrmm. Vincent.";
		mes "Agora eu entendo.";
		mes "Então ele estava sendo frio intensionalmente para Jenny e Phobe para outras pessoas não levantarem suspeitas.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ainda, eu não penso que ele teve que fazer isto e foi um pouco longe de mais.";
		mes "Bom, eu realmente agradeço a sua ajuda neste assunto.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Mas me fala, você só ajudou Vicent e arriscou sua vida porque você seria pago?";
		mes "Você so estava sendo motivad"+(Sex == SEX_MALE ? "o":"a")+" pelo dinheiro?";
		next;
		select("De fato... Eu estava curios"+(Sex == SEX_MALE ? "o":"a")+".");
		mes "[Sumo Sacerdote Zhed]";
		mes "Você só estava fazendo isso para satisfazer sua curiosidade?";
		mes "Heh, isto é muito interessante, também é a melhor atitude para um corajoso.";
		mes "Eu gosto disso.";
		mes "Eu posso saber seu nome?";
		next;
		select("Conte-lhe seu nome");
		mes "[Sumo Sacerdote Zhed]";
		mes ""+strcharinfo(PC_NAME)+"...";
		mes "Sim, é um bom nome, lhe cai bem.";
		mes "Eu estarei seguro que me lembrarei.";
		mes "Denovo, deixe me agradeçer por você arriscar sua vida retribuindo meus pertences";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Eu estarei rezando para Freya o guiar e proteger nas suas viagems.";
		mes "Que a Paz esteja com você "+strcharinfo(PC_NAME)+".";
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
		mes "Confio em você mais que qualquer outro aventureiro.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Porém, antes de eu dar vou te explicar que este favor deve ser mantido em segredo.";
		mes "Em outras palavras, uma vez que eu explicar a tarefa, você deverá aceitar meu pedido.";
		next;
		if (select("Deixe-me pensar","Sim, claro") == 1) {
			mes "[Sumo Sacerdote Zhed]";
			mes "Eu entendo.";
			mes "Para mim achar alguém que eu realmente possa confiar para fazer isto.";
			close2;
			cutin("",255);
			end;
		}
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, eu estou aliviado que você aceitou.";
		mes "Não se preocupe, está tarefa não é complicada nem requererá muito sacrificio.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Como você já pode saber";
		mes "Nosso país, Arunafeltz, faz adorações a deusa Freya.";
		mes "Não há quase nenhuma separação entre política, sociedade e nossa religião, realmente.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Agora, o líder de nossa religião nacional, nossa Papisa.";
		mes "É uma criada diretamente de Freya e entrega as mensagens dela como tal.";
		mes "Ela tem que viver através de diretrizes muito rígidas";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Nossa Papisa é curiosa sobre o mundo externo e deseja aprender mais sobre que mentiras além de Arunafeltz.";
		mes "Mas ela não pode vir este tipo de conhecimento tão facilmente.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Primeiramente, ela não pode deixar Rachel, o lugar onde espírito de deusa Freya mora.";
		mes "Segundo, são proibidos a todos os cidadãos e os sacerdotes deixarem a cidade para preservar nossa santidade.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Estas são regras implícitas que normalmente não são discutidas abertamente.";
		mes "Mas todo o mundo as segue para prevenir ser estigmatizado.";
		mes "Francamente, eu penso que é um pouco vergonhoso, mas nós estamos trabalhando nisto.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Além disso, nossa Papisa tem que manter a imagem dela longe de coisas impropriadas e questões fora do país.";
		mes "Emboram tal conhecimento a beneficiaria";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Isto porque os Sumos-Sacerdotes decidiram recrutar um confiável aventureiro para informar nossa Papisa sobre o mundo externo.";
		mes "Agora você entende porque eu pedi para você deixar isto em segredo.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Você não precisará divulgar segredos ultrajantes ou qualquer coisa assim.";
		mes "Eu presumo que detalhes seriam bastante para agradar ela.";
		mes "Há pouco deixe ela pressentir sua pátria.";
		next;
		mes "[Sumo Sacerdote Zhed";
		mes "Pessoalmente, eu penso estar refrescando para nossa Papisa não ouvir histórias.";
		mes "Como ela é sempre adorada nossa deusa no lado de todo o mundo em nossa gloriosa cidade.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Infelizmente, eu não o posso escoltar à sacerdotisa.";
		mes "Mas eu posso relacionar os meios para que você consiga uma audiencia com ela.";
		mes "Primeiro, você precisará uma ^FF0000Alta Recomendação do Sacerdote^000000";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Eu irei escrever isso para você, então não ha necessidade de preocupar com isto.";
		mes "Logo você você precisará juntar ^FF000040 Corações Glaciais^000000 como prova simbólica de sua força e sua pureza.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Enquanto eu termino de escrever está recomendação.";
		mes "Deixe eu te contar como chegar ao escritório do Papisa.";
		mes "Onde você tem que ir para juntar 40 Corações Glaciais.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Oeste da capela no centro do templo e então tem uma porta vigiada por dois soldados.";
		mes "Mostre a eles sua recomendação e os corações glaciais, e eles o deixaram passar.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, aqui está!";
		mes "Eu terminei de escrever sua recomendação.";
		mes "Bom então, eu acho que eu o verei depois que você terminar a tarefa.";
		next;
		mes "^3355FFVocê recebeu a Recomendação do Sumo Sacerdote.^000000";
		close2;
		cutin("",255);
		ra_tem_q = 15;
		lost_boy = 14;
		setquest 8100;
		end;
	} else if ((ra_tem_q == 15) || (ra_tem_q == 16)) {
		mes "[Sumo Sacerdote Zhed]";
		mes "Uma vez você junta";
		mes "^FF000040 Corações Glaciais^000000, você pode mostrar para os soldados que guardam o escritório da Papisa junto com a recomendação que eu escrevi para você.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Quando você estiver pronto para ir ao escritório da Papisa.";
		mes "Vá ao oeste da capela no centro do templo lá que fica a entrada.";
		close;
	} else if (ra_tem_q == 17) {
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, Muito obrigado por gastar algum tempo com a Papisa por mim.";
		mes "Eu posso contar que ela realmente gostou de falar com você.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Eu sou curioso, entretanto...";
		mes "Nossa Papisa está desacostumada a falar com estranhos.";
		mes "Assim eu assumo que você tem suas próprias perguntas depois da sua conversa com ela.";
		next;
		select("Bem, ela mencionou um pouco do Solo Santo...");
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "O que...?";
		mes "Ela mencionou o solo Santo...?!";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "O solo Santo é o lugar onde todos os humanos, incluindo a Papisa, foi proibida.";
		mes "Nós permitíamos as pessoas visitarem no passado, mas...";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Só os deuses podem acessar aquele lugar agora.";
		mes "Escute, se outros sacerdotes perguntarem sobre sua conversa com a Papisa.";
		mes "Por favor não faça qualquer menção sobre o Solo Santo.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Por favor não me pergunte porque, mas acredite nisso.";
		mes "É muito importante que você finja ignorância sobre a existência do Solo Santo!";
		next;
		mes "[????]";
		mes "Com licença, Zhed?";
		mes "Eu posso falar com você por um momento?";
		mes "Eu preciso te falar com você sobre um assunto privado.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Er, sim, é claro!";
		mes "Com licença um momento "+strcharinfo(PC_NAME)+"...";
		mes "Enquanto você está esperando por mim porque não descansa no quarto ao lado?";
		mes "Não se esqueça não há nenhum Solo Santo.";
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
		mes "Me desculpe por fazer você esperar muito tempo.";
		mes "Eu tive alguns assuntos cruciais para discutir.";
		mes "Agora, esse olhar em seu rosto me conta que você tem uma pergunta urgente";
		next;
		select("Perguntar sobre Bekento");
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Bekento? Ah, você deve ter falado com a Sumo Sacerdotisa Niren.";
		mes "Ela é a única que me chama desse jeito.";
		mes "Meu nome inteiro é Zhed Bekento.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Falando nisso Niren te perguntou a você alguma coisa ou te contou alguma coisa fora do usual?";
		next;
		mes "^3355FFDepois de uma pouca hesitação, você conta ao Sumo Sacerdote Zhed vobre a conversa com a Sumo Sacerdotisa Niren.^000000";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Hm, Entendo";
		mes "Sim, isto parece algo que ela faria.";
		mes "Eu explicarei tudo depois.";
		mes "Mas agora, eu preciso descansar você sabe, estou ficando velho.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, mas antes de você ir, me deixe advertir, não se aproxime ^FF0000do Solo Santo^000000.";
		mes "Eu repito fique longe do Solo Santo.";
		next;
		mes "^3355FFO Solo Santo...";
		mes "Porque o Sumo Sacerdote Zhed";
		mes "é tão inflexivel sobre proteger";
		mes "o Solo Santo?^000000";
		close2;
		cutin("",255);
		ra_tem_q = 20;
		changequest(8103,8104);
		end;
	} else if ((ra_tem_q >= 20) && (ra_tem_q <= 22)) {
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Tudo o que você fizer, qualquer jornada que você fazer.";
		mes "Por favor tenha certeza que você está longe do Solo Santo";
		next;
		mes "^3355FFMais que nunca, agora você sentiu tão compenetrado em entrar no Solo Santo.^000000";
		close2;
		cutin("",255);
		end;
	} else if (ra_tem_q == 23) {
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Oh, é você.";
		mes "Me deixe adivinhar...";
		mes "Depois de tudo que eu disse você ainda prosseguiu e visitou o Solo Santo?";
		mes "Oh, bem...";
		next;
		select("Algo aconteceu?");
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Bem, honestamente, eu estive temporariamente suspenso do trabalho, mas nenhuma necessidade para preocupar.";
		mes "Isto não é sua culpa.";
		mes "Eu estive em conflito com outros Sumo Sacerdotes por um momento, de qualquer maneira.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Por favor não preocupe sobre isto.";
		mes "Se não fosse isso, eles teriam achado outro jeito de me atacar.";
		mes "Seria só uma questão de tempo.";
		mes "Eles estão usando sua intrusão para o benefício deles.";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Tudo o que quero é que Arunafeltz esteja a salvo e em paz.";
		mes "Eu espero que essa terra nao seja conquistada por humanos gananciosos.";
		mes "Eu espero que todos trabalhem de acordo com a vontade de Freya.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Ah, e por favor não não culpe Niren.";
		mes "Ela deve ter suas própios razões para suas ações.";
		mes "Ela mudou muito, mas no final eu acho que ainda continuamos amigos";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Uma última coisa....";
		mes "Tente não deixar os outros sacerdotes o pegarem fazendo qualquer coisa errada isto seria embaraçoso para mim, você entende.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Ainda, você foi convidado aqui secretamente assim eu estou seguro que só muito poucos deles poderiam  poderiam o reconhecer você.";
		mes "No final, você vai fazer o que você tem que fazer, certo?";
		next;
		cutin("ra_gman2",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Eu sei que você viu o Solo Santo.";
		mes "Eu estou certo que você tem muito a perguntar, mas agora não é a hora para buscar respostas.";
		mes "Por favor você dever ser paciente";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Até que a hora chegue eu quero que você não conte para ninguém que você viu o Solo Santo.";
		next;
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Bem então, aventureiro obrigado por ter vindo.";
		mes "Eu preciso abaixar secular agora, assim se você me deixar descansar...";
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
			mes "Ah, ele foi um bocado, não é?";
			mes "Você parece bem, eu estou bem como você pode ver.";
			mes "O que posso fazer por você hoje, "+strcharinfo(PC_NAME)+"?";
			next;
			if (select("Eu só queria dizer oi","Perguntar sobre o incidente em Veins") == 1) {
				mes "[Sumo Sacerdote Zhed]";
				mes "Como você bem sabe, sou apenas um Sumo Sacerdote no título.";
				mes "E perdi muito da minha influência entre muitos dos outros sacerdotes na minha opnião.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Ainda assim, tenho fé que a justiça e a boa vontade prevalecerá.";
				mes "Sobre a corrupção que flagela os nossos sacerdotes.";
				mes "Enquanto pessoas boas estão dispostos a agir.";
				close2;
				cutin("",255);
				end;
			}
			mes "[Sumo Sacerdote Zhed]";
			mes "Incidente em Veins?";
			mes "Eu não tenho ouvido falar de qualquer coisa...";
			mes "Bem, talvez se você deseja elaborar, em seguida eu entenda um pouco mais.";
			next;
			mes "^3355FFVocê falou ao Sumo Sacerdote Zhed sobre o grupo de traficantes detidos em Veins.^000000";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Oh, eu acho que ouvi alguma coisa sobre mais cedo.";
			mes "Vamos ver agora...";
			mes "Ah, claro.";
			mes "Niren mencionou algo estranho sobre eles...";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Os contrabandistas estavam com um funcionário de alto escalão de Rune-Midgard.";
			mes "É por isso que Niren foi tão hesitante em tomar qualquer ação contra eles por um tempo.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Eu estava muito preocupado com outros assuntos.";
			mes "E eu acho que na maior parte na época.";
			mes "Por que você não vai falar com Niren?";
			mes "Eu tenho certeza que ela pode dizer a você mais sobre o que aconteceu.";
			aru_monas = 12;
			changequest(17007,17008);
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Se você decidir ir visitar Niren, por favor mande meus cumprimentos.";
			close2;
			cutin("",255);
			end;
		} else if (aru_monas == 12) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Se você decidir ir visitar Niren, por favor mande meus cumprimentos.";
			close2;
			cutin("",255);
			end;
		} else if (!aru_vol) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Ah, ver você novamente faz meu coração se sentir bem.";
			mes "Aventureiros dispostos a trabalhar tão duro querendo a paz no mundo como você são muito incomuns.";
			mes "Espero que saiba disto.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Huh...?";
			mes "Por favor não me lisonjeie desta maneira!";
			mes "Dizendo isto parece um tipo de exagero, não?";
			emotion(e_sigh,1);
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Nem tudo.";
			mes "Na verdade, eu estou certo de que há um lugar em Valhalla já reservado para você pelas Valquírias.";
			mes "Agora, como posso lhe ajudar?";
			next;
			select("Prédio Misterioso no Vulcão");
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Atualmente, eu estava querendo saber se você sabe algo sobre esta instalação no Vulcão de Thor perto de Veins.";
			mes "Parece que está acontecendo uma grande coisa dentro de lá.";
			next;
			mes "^3131FFVocê fala ao Sumo Sacerdote Zhed sobre a criança acorrentada no Vulcão de Thor.";
			mes "E como você encontrou a construção escondida por lá.";
			mes "O Sumo Sacerdote Zhed parece perturbado com suas palavras.^000000";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Entendo.";
			mes "Eu já suspeitava sobre o que estava acontecendo.";
			mes "Agora, você está ciente de que Arunafeltz é regida pela nossa igreja.";
			mes "E que a nossa nação inteira adora a deusa Freya.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Os sacerdotes que lideram esta são divididos em duas grandes facções.";
			mes "Eu sou considerado um membro da facção moderada.";
			mes "Que geralmente bate a cabeça com a facção Linha-Dura.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Estes sacerdotes da Linha-Dura estão mais do que dispostos a utilizar métodos violentos.";
			mes "Se eles acreditarem que está é a vontade de Freya.";
			mes "E são eles que se estabeleceram na Base Militar no Vulcão de Thor.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Claro que este local é também considerado um Campo de Geologia.";
			mes "Uma vez que eles estão sempre acompanhando a atividade vulcânica deste local.";
			mes "Mas com todas as intenções e propostas, eles estão treinando homens para lutar.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Fico assustado só de pensar sobre isso.";
			mes "Mas estou certo de que eles tem muitos suprimentos militares.";
			mes "E máquinas de destruição em massa escondidas pela base.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Espera, o que exatamente eles esperam conseguir lutando?";
			mes "Como eles pretendem ajudar a Deusa Freya usando a violência?";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Todos os Sacerdotes concordam que remontando o Coração de Ymir a Deusa Freya será ressuscitada.";
			mes "Como você sabe, os pedaços estão espalhados pelo mundo todo.";
			mes "E alguns deles estão em posse do Reino de Rune-Midgard.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "No interesse de evitar um conflito.";
			mes "A facção moderada de sacerdotes decidiu contratar cientistas para reproduzir o Coração de Ymir.";
			mes "Resultando em uma imitação do artefato.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Uma imitação do Coração de Ymir?";
			mes "Eu acho que conheço um famoso cientista da República Schwartzvalt que estava trabalhando nisto!";
			mes "Vamos ver, qual era seu nome mesmo?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Qual era o nome do Cientista...";
			input(.@input$);
			mes "^3131FF"+.@input$+"^000000?";
			next;
			if (.@input$ == "Varmunt") {
				mes "[Sumo Sacerdote Zhed]";
				mes "Ah, você conhece ele?";
				mes "O homem que criou a imitação do Coração de Ymir se chamava Varmunt.";
				mes "Ele é um verdadeiro Gênio.";
				next;
			} else {
				mes "[Sumo Sacerdote Zhed]";
				mes .@input$+"?";
				mes "Não, esse não era ele.";
				mes "O homem que criou a imitação do Coração de Ymir se chamava Varmunt.";
				mes "Ele é um Verdadeiro Gênio.";
				next;
			}
			mes "[Sumo Sacerdote Zhed]";
			mes "Não tenho certeza do que aconteceu a Varmunt.";
			mes "Tudo que eu sei é que algo grave aconteceu na República Schwaltzvalt.";
			mes "E que ele desapareceu em rapidamente.";
			mes "É estranho.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Apesar de que o trabalho da Imitação do Coração de Ymir que Varmunt criou ter se quebrado em pedaços.";
			mes "Outros cientistas tentaram reproduzir este trabalho com Corações de Ymir instáveis.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Desde que nossa facção moderada.";
			mes "Só podia providenciar Imitações do Coração de Ymir instáveis.";
			mes "A facção linha-dura ganhou rapidamente mais respeito do que nós pelo povo.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Apesar de nosso armamento e defesa avançados, eu tenho medo que o nosso país de Arunafeltz.";
			mes "Não seja tão civilizado e pacífico como eu gostaria que fosse.";
			mes "E agora a facção linha-dura controla o nosso governo.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Embora os linhas-duras tenham...";
			mes "Nos permitido continuar com a nossa pesquisa fiel a reprodução do Coração de Ymir.";
			mes "Eles foram desenvolvendo o seu poder militar sem oposição.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Assim, basicamente, os moderados estão a tentar recriar o Coração de Ymir.";
			mes "Em centros de pesquisa na Terra Santa e na República de Schwaltzvalt.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Os linhas-duras estão treinando soldados e acumulando fornecimentos militares.";
			mes "E armas em sua base no Vulcão de Thor.";
			mes "No entanto, eu não sei mais de nenhum detalhe.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Isto não parece ser bom.";
			mes "Digo, se eles estão tentando tomar os Pedaços do Coração de Ymir a força.";
			mes "Isto será uma guerra contra a República Schwalzvalt e o Reino de Rune-Midgard!";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Vendo como eu sou parte da facção moderada, que recentemente foi rebaixada.";
			mes "Eu não tenho acesso a muitas informações sobre os linhas-duras.";
			mes "No entanto, ainda pode haver esperança.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "A Guerra seria ruim para todos os países envolvidos.";
			mes "Por isto eu gostaria de lhe pedir que você infiltre.";
			mes "Dentro da Base no Vulcão de Thor pela razão de proteger a paz internacional.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu realmente quero saber mais sobre o que eles estão planejando fazer.";
			mes "Mas este local é fortemente vigiado!";
			mes "Como eu irei me infiltrar?";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Você está certo.";
			mes "Vamos ter de pensar";
			mes "em uma forma muito boa para você se infiltrar neste local. Hmmmm...";
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
				mes "Eu ainda não tenho nenhuma idéia de como Infiltrar na base dentro do Vulcão de Thor.";
				mes "Dê-me um pouco mais de tempo, e espero que possamos pensar em alguma coisa juntos.";
				break;
				case 2:
				mes "[Sumo Sacerdote Zhed]";
				mes "Nós Sacerdotes da Facção Moderada somos opostos a guerra.";
				mes "Então nós fomos tentando desenvolver imitações do Coração de Ymir por muito tempo.";
				mes "Temos ainda de ter sucesso, infelizmente.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Os linhas-duras se opuseram aos nossos esforços, mas eles nos deixaram continuar.";
				mes "Porque eles pensam que poderão usar a imitação do Coração de Ymir para fins militares.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "O projeto de Reprodução do Coração de Ymir tem sido frustrante as melhores mentes do mundo.";
				mes "E até mesmo alguns cientistas têm recorrido ao uso de métodos proibidos.";
				mes "É uma pena, de verdade.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Varmunt teve sucesso em recriar o Coração de Ymir.";
				mes "Mas quando ele foi destruído Varmunt desapareceu.";
				mes "Ele fez isso para evitar a guerra.";
				mes "Mas nós poderíamos utilizar está ajuda agora.";
				break;
				case 3:
				mes "[Sumo Sacerdote Zhed]";
				mes "Os linhas-duras são especialmente fanáticos em sua devoção a Freya, e irão fazer qualquer coisa para.";
				mes "Favorecer o que eles interpretam como ela seria.";
				mes "Eles estão dispostos a ir para a guerra por suas crenças.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "O fato de eles terem construído uma base militar dentro do Vulcão de Thor.";
				mes "Me perturba bastante tenho mais do que certeza de que pretendem declarar guerra.";
				mes "Contra qualquer nação que tenha um pedaço do Coração de Ymir.";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Quem está no comando da base no Vulcão de Thor?";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "O Sumo Sacerdote Vildt.";
				mes "Ele está no comando da maioria das construções importantes em Arunafeltz.";
				mes "Sua sala fica no outro lado da Base, mas sempre fica bem vigiada por seus guardas.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Vildt é um dos membros de maior cargo dentro da facção linha-dura de sacerdotes.";
				mes "Não é do estilo dele conversar com alguém que tenha um cargo abaixo do dele.";
				break;
			}
			close2;
			cutin("",255);
			end;
		} else if (aru_vol == 5) {
			cutin("ra_gman",2);
			if (countitem(File01)) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Você poderia dar uma olhada nesta Pasta de arquivos, Sumo Sacerdote Zhed?";
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
				mes "Isto é um Relatório Geológico sobre o Vulcão de Thor?";
				mes "Ah, entendo.";
				mes "Eles tem de ter alguém que verifique regularmente o solo.";
				mes "Para verificar se o vulcão entrará em erupção.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Embora seja muito perigoso construir uma Base Militar ali.";
				mes "Alguns materiais de armas só podem ser forjados a partir do calor que vem do Vulcão de Thor.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Sim, acho também que seja bem provável que haja metais.";
				mes "E materiais especiais que só podem ser encontrados dentro do Vulcão de Thor.";
				mes "Isso faz todo sentido.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Apesar do vulcão estar dormente agora.";
				mes "Estes relatórios dizem que o vulcão está seguro.";
				mes "Ou pronto para entrar em erupção a qualquer momento.";
				mes "Os dados que estão aqui não fazem sentido.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Hm. Isto é apenas um palpite, mas vendo estas discrepâncias em seus relatórios.";
				mes "Eu realmente acho que esse geólogo tem algo contra a base no Vulcão de Thor.";
				next;
				mes "[Sumo Sacerdote Zhed]";
				mes "Quem sabe, se isso for verdade, ele poderia ser capaz de ajudar você a se infiltrar dentro da Base.";
				mes "Você não acha que seria ótimo verificar por isto agora?";
				next;
				if (select("Sim","Não") == 2) {
					mes "[Sumo Sacerdote Zhed]";
					mes "Bem, você nunca saberá antes de perguntar.";
					mes "Além disso, eu não sei se você sabe alguma outra forma de se infiltrar dentro da Base no Vulcão de Thor...";
					next;
				}
				mes "[Sumo Sacerdote Zhed]";
				mes "Espero que você vá falar com o geólogo.";
				mes "Ele deve estar em Veins, a cidade do deserto a sul de Rachel.";
				mes "Ele é sua melhor oportunidade de entrar na Base do Vulcão de Thor sem suspeitas.";
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
			mes "Espero que você vá falar com o geólogo.";
			mes "Ele deve estar em Veins, a cidade do deserto a sul de Rachel.";
			mes "Ele é sua melhor oportunidade de entrar na Base do Vulcão de Thor sem suspeitas.";
			close2;
			cutin("",255);
			end;
		} else if ((aru_vol > 6) && (aru_vol < 26)) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Espero que você vá falar com o geólogo.";
			mes "Ele deve estar em Veins, a cidade do deserto a sul de Rachel.";
			mes "Ele é sua melhor oportunidade de entrar na Base do Vulcão de Thor sem suspeitas.";
			close2;
			cutin("",255);
			end;
		} else if (aru_vol == 26) {
			cutin("ra_gman",2);
			mes "[Sumo Sacerdote Zhed]";
			mes "Ah! Você está de volta!";
			mes "O Geólogo conseguiu lhe ajudar a entrar dentro da Base no Vulcão de Thor?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Mais do que isso.";
			mes "Nós conseguimos convencer a base de que o vulcão está prestes a explodir.";
			mes "Então eles estão evacuando a área rapidamente.";
			mes "Eles estão em pânico por lá!";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Hahaha! Isso é ótimo!";
			mes "Mesmo que descubram que eles foram enganados.";
			mes "Levará um tempo até que eles descubram isto com toda essa confusão.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Sim, agora poderia não ser o momento ideal para acabar com a facção linha-dura.";
			mes "Mas a oportunidade deverá se apresentar em breve.";
			mes "Obrigado por toda a sua ajuda.";
			next;
			mes "[Sumo Sacerdote Zhed]";
			mes "Por favor descanse por um tempo, e eu vou cuidar do resto.";
			mes "Quando chega a hora do ataque, entrarei em contato com você novamente.";
			mes "Juntos, somos capazes de proteger a paz entre nossas nações.";
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
			mes "Eu estou com uma dor de cabeça horrível!";
			close2;
			cutin("",255);
			end;
		}
	} else {
		cutin("ra_gman",2);
		mes "[Sumo Sacerdote Zhed]";
		mes "Que Freya esteja com você.";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
ra_temin,134,128,3	script	Guarda da Papisa#rac::raofficeguard	4_M_MASK1,{
	if ((ra_tem_q == 15) && (countitem(Ice_Heart) > 39)) {
		mes "[Guarda do Escritório Papal]";
		mes "Hmm? O que é que você tem aí?";
		mes "Oh, você recolheu 40 Corações Congelados e trouxe uma carta de recomendação do Sumo Sacerdote?";
		mes "Muito Impressionante.";
		close2;
		ra_tem_q = 16;
		delitem(Ice_Heart,40);
		end;
	} else if (ra_tem_q == 16) {
		mes "[Guarda do Escritório Papal]";
		mes "A Papisa está dentro esperando você, por favor não a faça esperar muito.";
		close;
	} else {
		mes "[Guarda do Escritório Papal]";
		mes "Sinto muito, mas a Papisa está fazendo um serviço agora.";
		mes "Por favor volte depois que o serviço estiver terminado";
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
		mes "[Guarda do Escritório Papal]";
		mes "Sinto muito, mas a Papisa está fazendo um serviço agora.";
		mes "Por favor volte depois que o serviço estiver terminado";
		close;
	} else {
		mes "^3355FFA porta está fechada.^000000";
		close;
	}
}

// ------------------------------------------------------------------
ra_temsky,99,99,5	script	Papisa#rachel	4_F_ARUNA_POP,{
	if (ra_tem_q == 16) {
		cutin("ra_bishop",2);
		mes "^3355FFEs-essa pequena garota é a papisa...?!^000000";
		next;
		mes "[Papisa]";
		mes ".......................";
		mes "Hmm...";
		mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "A alguma coisa errada?";
		mes "Ah, eu sei, são os meus olhos.";
		mes "Peço desculpas se assustei um pouco você.";
		next;
		select("Não, não para todos...!");
		mes "[Papisa]";
		mes "......";
		mes "......";
		mes ".....Eu sei, minha aparêcia...";
		next;
		mes "[Papisa]";
		mes "As pessoas geralmente ficam um pouco chocadas na primeira vez que me veem.";
		mes "Então... É... De onde você";
		mes "Veio,"+strcharinfo(PC_NAME)+"?";
		next;
		input(.@input$);
		mes "[Papisa]";
		mes .@input$+"...?";
		mes "Eu acho que já ter ouvido sobre esté lugar antes.";
		mes "O que você fazia quando morava lá?";
		next;
		input(.@input$);
		mes "[Papisa]";
		mes .@input$+"...?";
		mes "Isto soa bastante extraordinario.";
		mes "Ooh, ooh!";
		mes "Fale-me, como você veio aqui para Rachel?";
		mes "Estou interessada quero saber mais sobre você";
		next;
		mes "^3355FFVocê e a papisa continuaram a confortável conversa.";
		mes "Como ela falou, ela parece mais com uma pequena garota solitária do que uma solene figura religiosa para a nação.^000000";
		next;
		mes "[Papisa]";
		mes "...As vezes, eu realmente desejo viver como você.";
		mes "Você pensa que ser papisa é grande coisa.";
		mes "Mas eles me fazem trabalhar o tempo todo, e são todos os tipos de coisas que eu não posso fazer.";
		next;
		mes "[Papisa]";
		mes "Você sabe o que é estranho?";
		mes "Eu acho que sou a lider dessa religião, mas há um local sagrado, que ainda não estou autorizada a visitar.";
		mes "Não é esquisito?";
		next;
		select("S-Sério...?");
		mes "[Papisa]";
		mes "...eh. Eu não sei muito sobre, e não posso realmente falar sobre isso.";
		mes "Deste lugar a \"Terra Santa\"...";
		next;
		select("Terra Santa?");
		mes "[Papisa]";
		mes "Desculpe-me...";
		mes "Eu quero falar mais para você, mas...";
		mes "Isso é tudo que eu sei.";
		mes "Eu queria saber...";
		mes "Eu me pergunto o que eles poderiam está escondendo ali";
		next;
		mes "[Sacerdote]";
		mes "Desculpe-me por interrompe-la excelência.";
		mes "Mas é a hora dos serviços oficiais.";
		next;
		mes "[Papisa]";
		mes "Já?! Hmpf...";
		mes "Ah, antes que eu esqueça...";
		mes "Eu preciso dizer que Sumo Sacerdote Zhed quer falar com você, "+strcharinfo(PC_NAME)+".";
		next;
		mes "[Papisa]";
		mes "Eu realmente quero agradecer você por vir aqui falar comigo.";
		mes "Eu tive um grande tempo de aprendizado.";
		mes "Agora tenho de ir para o serviços oficiais, então...";
		mes "Isto é um adeus por enquanto";
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
		mes "^3355FFDessa distância, você pode ouvir claramente as vozes do outro lado da parede...^000000";
		next;
		mes "[????]";
		mes "...Foi realmente necessário involver um estrangeiro nesta situação?";
		mes "Responda-me!";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Isto tudo é sobre o acidente?";
		mes "Você sabe que eu não concordei com as ações que levaram ao derramamento de mana.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Embora eu pensei que era uma decisão negligente.";
		mes "Eu fechei o santuário e fiz o meu melhor para cobrir este lamentável acidente.";
		next;
		mes "[????]";
		mes "Não estou culpando você.";
		mes "Na verdade, eu vou admiti-lo: este foi o nosso erro.";
		mes "Deixamos com que a infestação de monstros e o vazamento de mana acontecesse.";
		next;
		mes "[????]";
		mes "Mas isso não tem nada a ver com o que eu estou lhe perguntando!";
		mes "Você acha que realmente está tudo bem permitir um estrangeiro falar com a nossa papisa.";
		mes "Durante uma hora tumultuosa como esta?!";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Por que não?";
		mes "Pensei que iria trazer a ela um grande conforto.";
		mes "Ela está muito confusa quanto a razão pela qual o Solo Sagrado foi fechado.";
		mes "E ela não pode saber o que está acontecendo lá.";
		next;
		mes "[Sumo Sacerdote Zhed]";
		mes "Novamente...";
		mes "Eu não concordo com o que secretamente está acontecendo por lá.";
		mes "Eu sei que eu não posso oficialmente ser contra este tipo de ação, mas...";
		next;
		mes "[????]";
		mes "Não há nada para se preocupar ali!";
		mes "Ela vai ter todos cargos antes de você sabe o que.";
		mes "Além disso, já é tarde de mais para voltar atrás agora então eu estou avisando.";
		mes "Não ouse fazer nada de estúpido.";
		next;
		mes "^3355FFAlguém está vindo!";
		mes "É melhor você sair de perto da parede e se esconder da forma que puder!^000000";
		next;
		hideoffnpc("Sumo Sacerdotisa Niren#ra");
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Ah! Você deve ser o "+strcharinfo(PC_NAME)+", de quem me disseram.";
		mes "Prazer em conhecê-lo.";
		mes "Sumo Sacerdotisa Niren, ao seu serviço.";
		next;
		mes "[Sumo Sacerdotisa Niren]";
		mes "Ouvi dizer que você teve o privilégio de falar com nossa papisa, e que ela teve um grande momento.";
		mes "O que você achou dela, hm?";
		next;
		select("Ela é diferente do que eu esperava...");
		cutin("ra_gwoman2",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Ah, entendo o que você quer dizer...";
		mes "Normalmente, a maioria dos estrangeiros me dizem que esperavam que a nossa papisa seria uma mulher mais velha.";
		mes "Mas esse não é o caso aqui em Arunafeltz.";
		next;
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Geralmente, a nossa papisa é escolhida por sua semelhança com a nossa deusa Freya.";
		mes "Ela deve ter cabelos louros prateados, pele branca como neve, e olhos divinamente coloridos.";
		mes "Você viu, não é?";
		next;
		mes "[Sumo Sacerdotisa Niren]";
		mes "Estou curiosa: que tipo de coisas você e a papisa conversaram?";
		mes "Como você sabe, nós sacerdotes somos proibidos de deixar Arunafeltz, então...";
		next;
		mes "^3355FFVocê fala os detalhes sobre o que você falou com a papisa.";
		mes "Mas você teve certeza de não mencionar nada sobre o Solo Sagrado como o Sumo Sacerdote Zhed lhe pediu.^000000";
		next;
		mes "[Sumo Sacerdotisa Niren]";
		mes "Ah, isto é muito interessante, sua terra.";
		mes "Diga-me, como você conheçeu Bekento, er, digo, Sumo Sacerdote Zhed?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "(^666666Bekento?^000000)";
		next;
		select("Explicar como você conheçeu o Sumo Sacerdote Zhed");
		cutin("ra_gwoman2",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes ".........................";
		mes "Isso é tudo? Hm?";
		mes "Bem legal.";
		mes "^333333*Suspiro*^000000";
		mes "Eu penso ele acredita muito nas pessoas...";
		mes "Mas isso é apenas minha opinião.";
		next;
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Se você não se importa...";
		mes "Eu quero dar-lhe um pequeno conselho.";
		mes "Não se aproxime tanto do Sumo Sacerdote Zhed.";
		mes "Se você ficar perto dele, você poderá ficar em apuros.";
		next;
		cutin("",255);
		hideonnpc("Sumo Sacerdotisa Niren#ra");
		mes "^3355FFA Sumo Sacerdotisa Niren se foi logo depois de dizer essas palavras.";
		mes "O que ela quis dizer?";
		mes "Por enquanto, você não vê problemas em conversar com o Sumo Sacerdote Zhed.^000000";
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
		mes "É melhor ser paciente e esperar mais um pouco";
		mes "Ainda...^000000";
		next;
		mes "^3355FFUm pouco de escutas nunca feriu ninguém.";
		mes "Talvez você possa escutar um pouco melhor se você escutar do lado esquerdo da parede.^000000";
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
			mes "^3355FFVocê decidiu ignorar o pequeno objeto brilhante.";
			mes "Não importa o quão importante isto possa ser para você no futuro.^000000";
			close;
		}
		mes "^3355FFApós pegar este pequeno objeto, foi possível identificar que isto é uma chave.";
		mes "Talvez você pode usá-la para abrir algum tipo de fechadura.";
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
			mes "^3355FFVocê coloca a chave";
			mes "Pequena que você achou na sala do Sumo Sacerdote Zhed.";
			mes "E descobre que ela pode destrancar está porta.^000000";
			close2;
			warp("ra_san01",140,135);
			end;
		}
		close;
	}
	mes "^3355FFA porta está trancada.^000000";
	close;
}

// ------------------------------------------------------------------
que_san04,119,203,0	script	imir3#rachel	FAKE_NPC,7,7,{
	OnTouch:
	if (ra_tem_q == 21) {
		mes "^3355FFNão me admira que este objeto sob a água seja tão familiar.";
		mes "É um Pedaço do Coração de Ymir!";
		mes "Na verdade, tem dezenas deles por aqui.^000000";
		next;
		mes "^3355FFPorque teriam tantos desses poderosos artefatos por aqui no Solo Sagrado?";
		mes "Talvez este seja o segredo que os sacerdotes estão tentando esconder.^000000";
		next;
		hideoffnpc("Sumo Sacerdotisa Niren#r2");
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Como você ousa invadir o Solo Sagrado!";
		mes "Identifique-se!";
		mes "Eu vi o que você tentou!";
		next;
		cutin("ra_gwoman2",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "A-ah! É você, o aventureiro recomendado por Bekento.";
		mes "Hm. Peço desculpas por falar assim com você.";
		mes "Você não sabe que não é permitido entrar aqui?";
		next;
		cutin("ra_gwoman",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "Hmm. Bem, vocês aventureiros de Rune-Midgard são famosos por causa de suas habilidades e poderes.";
		mes "Mas isto não era esperado.";
		mes "Quero dizer, nós queremos ter certeza de que este lugar esteja absolutamente seguro.";
		next;
		cutin("ra_gwoman2",2);
		mes "[Sumo Sacerdotisa Niren]";
		mes "O que está feito está feito...";
		mes "Eu avisei Bekento que ele poderia causar problemas para você.";
		mes "Mas parece que você tem causado problemas a ele.";
		next;
		mes "[Sumo Sacerdotisa Niren]";
		mes "Compreenda isto, intrusos são mais severamente punidos.";
		mes "Mas por causa da minha amizade, com Bekento, estou deixando você sair com facilidade.";
		mes "Lembre-se disto.";
		next;
		sc_start(SC_BLIND,600000,0);
		mes "^3355FFNiren começou a cantar num tom de voz baixo, e suas pálpebras ficam pesadas então você fica sonolento...^000000";
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
		mes "^3355FFVocê sente uma leve dor de cabeça depois de recobrar os sentidos.";
		mes "De alguma forma, você foi levado de volta à Cidade de Rachel.";
		mes "Por quanto tempo você esteve inconsciente?^000000";
		next;
		sc_end(SC_BLIND);
		mes "^3355FFÉ melhor ir até o Sumo Sacerdote Zhed, para perguntar sobre o que aconteceu.^000000";
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
			mes "^3355FFA entrada do templo está trancada.^000000";
			next;
			select("Chutar porta","Quebar porta com a arma.");
			emotion(e_omg,0,"Nemma#ra_temple");
			mes "[Sacerdotisa Nemma]";
			mes "Por favor, não faça isso";
			close;
		}
	} else {
		warp("ra_temin",169,23);
		end;
	}
}
