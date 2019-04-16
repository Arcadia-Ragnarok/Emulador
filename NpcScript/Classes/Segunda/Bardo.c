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
| - Copyright: Spell Master (15/09/2017)                            |
| - Info: Quest de Mudan�a de Classe para Bardo.                    |
\*-----------------------------------------------------------------*/

comodo,226,123,5	script	Bardo Andarilho#bardq	2_M_BARD_ORIENT,{
	if (BaseJob == Job_Archer && Sex == SEX_MALE) {
		if (!bardq) {
			cutin("job_bard_aiolo01",2);
			mes("[Lalo]\n"
				"Oi! Encantador Arqueiro.\n"
				"Como um andarilho como eu pode te ajudar?");
			next;
			switch (select("Voc� tem uma voz agrad�vel","Voc� pode cantar um pouco?","Em nada")) {
				case 1:
				mes("[Lalo]\n"
					"Hahaha! � claro!\n"
					"Se voc� canta com o cora��o feliz, a sua voz sempre fica melhor.");
				next;
				mes("[Lalo]\n"
					"Mas, para os Bardos a voz � sua vida.\n"
					"Por�m, em alguns momentos � necess�rio se ter cuidado com sua voz.");
				close2; cutin("",255); end;
				case 2:
				mes("[Lalo]\n"
					"Uma can��o... vejamos.\n"
					"Ok, eu tenho...");
				next;
				mes("[Lalo]\n"
					"Irei cantar...\n"
					"Tambores de Guerra.\n"
					"*ehem...*cough...gag..mememememe...\n"
					"1, 2, 3, 4...");
				next;
				mes("^000088O som de cavalos galopando sobre o horizonte a poeira que cobre o sol distante.\n"
					"Enquanto milhares de olhos se abrem no luar do c�u, o castelo ir� se destruir com o poder^000000");
				next;
				mes("^000088Eu posso ouvir.. as batidas do meu cora��o.\n"
					"Eu posso sentir.. o sangue correndo pelas minhas veias.\n"
					".. e o peso da minha armadura.\n"
					"Posso ver.. meus inimigos.^000000");
				next;
				mes("^000088Mais alto, mais alto mais alto..\n"
					"D� for�a aos guerreiros!\n"
					"Superior, superior, superior..\n"
					"Esse dia nunca voltar�!^000000");
				next;
				mes("^000088Agite o c�u e balance a terra.\n"
					"Fa�a meu cora��o bater novamente!\n"
					"Ou�a o som das trombetas, e as as muralhas do castelo tremem.\n"
					"Esse momento nunca mais voltar�!^000000");
				next;
				mes("[Lalo]\n"
					"Hmm... essa � sempre uma boa can��o para cantar.\n"
					"O que achou?\n"
					"N�o � uma m�sica agrad�vel?");
				next;
				if (select("Sim, � muito boa","N�o, realmente n�o mesmo...") == 1) {
					mes("[Lalo]\n"
						"Seria bom se mais pessoas a cantassem...\n"
						"Bem, � tudo... hmmhmm.");
					if (JobLevel > 39) {
						bardq = 1;
						setquest(3000);
					}
					close2; cutin("",255); end;
				} else {
					mes("[Lalo]\n"
						"Hmm... Eu perdi meus sentidos, terei que me esfor�ar mais.\n"
						"De qualquer forma...\n"
						"Obrigado pela aten��o.");
					close2; cutin("",255); end;
				}
				case 3:
				cutin("job_bard_aiolo02",2);
				mes("[Lalo]\n"
					"Nossa, n�o pedir uma m�sica quando se encontra um Bardo � falta de educa��o.\n"
					"Bem... N�o posso ajud�-lo enquanto voc� parecer que est� com pressa.");
				next;
				mes("[Lalo]\n"
					"A ca�a � algo bom... Mas voc� n�o pode esquecer de relaxar de vez em quando.\n"
					"A juventude � curta e n�o volta..");
				close2; cutin("",255); end;
			}
		} else if (bardq == 1) {
			cutin("job_bard_aiolo01",2);
			mes("[Lalo]\n"
				"Ol� novamente arqueiro\n"
				"Quer ouvir outra can��o?");
			next;
			if (select("Como posso ser um bardo?","Deixa para outra hora") == 1) {
				mes("[Lalo]\n"
					"Ah sim, voc� tamb�m quer aprender can��es.\n"
					"Eu irei ajud�-lo ent�o para se tornar um Bardo");
				next;
				mes("[Lalo]\n"
					"Mas antes disso... voc� pode me trazer uma Flor?\n"
					"Eu preciso sentir o cheiro de uma flor para ver como ser� o ensino.");
				next;
				mes("[Lalo]\n"
					"O tipo de flor n�o importa, mas tente trazer uma que eu goste.\n"
					"E n�o compre qualquer flor barata, certo?");
				bardq = 2;
				changequest(3000,3001);
				close2; cutin("",255); end;
			} else {
				mes("[Lalo]\n"
					"Hmm... Eu n�o tenho certeza do que voc� ser�, mas aproveite a vida.\n"
					"Voc� parece muito tenso.");
				next;
				mes("[Lalo]\n"
					"Bem ent�o, tenha um bom dia.");
				close2; cutin("",255); end;
			}
		} else if (bardq == 2) {
			cutin("job_bard_aiolo01",2);
			mes("[Lalo]\n"
				"Bem-Vindo!\n"
				"Amigo arqueiro.\n"
				"Trouxe uma flor?\n"
				"Deixe-me ver...");
			next;
			if (countitem(Singing_Flower)) {
				delitem(Singing_Flower,1);
				mes("[Lalo]\n"
					"Ooh! Isto � uma Flor Cantante!\n"
					"Ela me traz muitas lembran�as...");
				next;
				mes("[Lalo]\n"
					"Meu amigo Tchaikovsky gosta muito delas.\n"
					"Me pergunto o que ele est� fazendo agora...");
				next;
			} else if (countitem(Hinalle)) {
				delitem(Hinalle,1);
				mes("[Lalo]\n"
					"Aah... uma linda Hinalle...\n"
					"Ela n�o tem cheiro, mas � uma linda flor.");
				next;
				mes("[Lalo]\n"
					"As folhas me d�o for�a quando eu costumo cair.\n"
					"Eu realmente gosto dessa flor, obrigado.");
				next;
			} else if (countitem(Aloe)) {
				delitem(Aloe,1);
				mes("[Lalo]\n"
					"Aloe... � uma flor rara.\n"
					"Como voc� a conseguiu?\n"
					"Voc� � um perito?");
				next;
				mes("[Lalo]\n"
					"As folhas s�o boas e a Aloe Vera � deliciosa...\n"
					"e ela � definitivamente a mais bela das flores.");
				next;
			} else if (countitem(Ment)) {
				delitem(Ment,1);
				mes("[Lalo]\n"
					"Menta... Voc� pode esquecer todos os seus problemas com uma dessas.\n"
					"� �timo ver uma depois de tanto tempo!");
				next;
				mes("[Lalo]\n"
					"Ouvi dizer que � poss�vel fazer Analg�sicos com ela...\n"
					"Mas pode ser apenas um boato..\n"
					"Obrigado!");
				next;
			} else if (countitem(Izidor)) {
				delitem(Izidor,1);
				mes("Nossa, � uma Izidor?\n"
					"� uma perigosa e bela flor...");
				next;
				mes("[Lalo]\n"
					"Possui os profundos encantos de uma pessoa..\n"
					"Obrigado, eu gosto muito dessa flor.");
				next;
			} else if (countitem(Witherless_Rose)) {
				delitem(Witherless_Rose,1);
				mes("[Lalo]\n"
					"Uma Rosa Eterna.\n"
					"A flor forte, que n�o murcha.\n"
					"�timo presente para sua namorada.");
				next;
				mes("[Lalo]\n"
					"Eu me pergunto se � permitido que um andarilho como eu tenha uma dessas.");
				next;
			} else if (countitem(Frozen_Rose)) {
				delitem(Frozen_Rose,1);
				mes("[Lalo]\n"
					"Rosa de Gelo...\n"
					"Voc� n�o pode chamar isso de flor, por�m ainda sim � linda...");
				next;
				mes("[Lalo]\n"
					"Ela n�o possui mais seu aroma.\n"
					"Estou muito contente, pois � uma flor diferente.");
				next;
			} else if (countitem(Illusion_Flower)) {
				delitem(Illusion_Flower,1);
				mes("[Lalo]\n"
					"Ah, isso n�o � uma Flor das Ilus�es!?\n"
					"Uau, como voc� conseguiu essa flor rara!!");
				next;
				mes("[Lalo]\n"
					"Muito obrigado, aah...\n"
					"Me sinto como se o c�u estivesse na frente dos meus olhos.\n"
					"Que sensa��o maravilhosa!\n"
					"Estou muito feliz.");
				next;
			} else {
				cutin("job_bard_aiolo02",2);
				mes("[Lalo]\n"
					"Hmm? O qu�...\n"
					"Voc� n�o trouxe nada.\n"
					"Eu n�o te pedi para me trazer uma flor expecial?");
				next;
				mes("[Lalo]\n"
					"Bem... se voc� quer aprender sozinho, ent�o que assim seja.\n"
					"Qualquer pessoa pode simplesmente sair e cantar.");
				close2; cutin("",255); end;
			}
			mes("[Lalo]\n"
				"Como eu prometi, irei ajud�-lo a se tornar um Bardo.\n"
				"Mas n�o � f�cil meu amigo.");
			next;
			mes("[Lalo]\n"
				"� importante conhecer um monte de gente para aprender a cantar.\n"
				"Voc� tamb�m deve se manter atualizado do que est� acontecendo nos diferentes vilarejos...");
			next;
			mes("[Lalo]\n"
				"H� um boneco de neve em uma cidade chamada Lutie.\n"
				"V� at� l� e fa�a amizade com ele.");
			next;
			bardq = 3;
			changequest(3001,3002);
			next;
			mes("[Lalo]\n"
				"Se voc� se tornar amigo do ^008800Boneco de Neve^000000, voc� ir� receber algo.\n"
				"E tamb�m fale com as pessoas da cidade enquanto estiver l�...");
			close2; cutin("",255); end;
		} else if (bardq < 13) {
			cutin("job_bard_aiolo01",2);
			mes("[Lalo]\n"
				"�, voc� ainda n�o se tornou amigo do boneco de neve em Lutie?\n"
				"Falar comigo n�o te ajudar�.");
			next;
			mes("[Lalo]\n"
				"Se voc� se tornar amigo do ^008800Boneco de Neve^000000, voc� ir� receber algo.\n"
				"E tamb�m fale com as pessoas da cidade enquanto estiver l�...");
			close2; cutin("",255); end;
		} else if (bardq == 13) {
			cutin "job_bard_aiolo01",2;
			mes("[Lalo]\n"
				"Ent�o, voc� quer tentar cantar...?\n"
				"Irei cantar uma curta melodia...\n"
				"E voc� tenta depois.");
			next;
			mes("[Lalo]\n"
				"Aqui vou eu.\n"
				"Aham *limpa a garganta*\n"
				"1, 2, 3, 4");
			if (questprogress(3002)) {
				changequest(3002,3003);
			}
			next;
			switch (rand(4)) {
				case 1:
				.@bardMusic1$ = "Havia um homem";
				.@bardMusic2$ = "Que dizia ser imortal";
				.@bardMusic3$ = "Seu nome era Jichfreid";
				.@bardMusic4$ = "Filho do her�i Jichmunt";
				.@bardMusic5$ = "O gigante malvado Papner";
				.@bardMusic6$ = "Se transformou em um drag�o e o comeu.";
				break;
				case 2:
				.@bardMusic1$ = "Todos os deuses nunca envelhecem";
				.@bardMusic2$ = "A sempre t�o bela Idun";
				.@bardMusic3$ = "Bela e graciosa Idun";
				.@bardMusic4$ = "Nora de Odin e esposa de Bragi";
				.@bardMusic5$ = "Suas doces ma��s em sua cesta";
				.@bardMusic6$ = "Tudo gra�as a suas doces ma��s";
				break;
				case 3:
				.@bardMusic1$ = "Bragi, Bragi";
				.@bardMusic2$ = "Eternamente chame o nome do poeta";
				.@bardMusic3$ = "Minhas can��es s�o sua respira��o";
				.@bardMusic4$ = "Minha mente � a sua vontade";
				.@bardMusic5$ = "Todos os poetas s�o o seu povo";
				.@bardMusic6$ = "E todo o louvor deve ir at� ele";
				break;
				default:
				.@bardMusic1$ = "Mais alto, mais alto, mais alto";
				.@bardMusic2$ = "D� for�a aos guerreiros!";
				.@bardMusic3$ = "Agite o c�u e ruja pela terra";
				.@bardMusic4$ = "Fa�a meu cora��o bater denovo!";
				.@bardMusic5$ = "Deixe as muralhas do castelo";
				.@bardMusic6$ = "Esse dia nunca vai voltar!";
				break;
			}
			mes("[Lalo]\n"
				"^3377ff"+.@bardMusic1$+"\n"
				+ .@bardMusic2$+"\n"
				+ .@bardMusic3$+"\n"
				+ .@bardMusic4$+"\n"
				+ .@bardMusic5$+"\n"
				+ .@bardMusic6$+"^000000");
			next;
			mes("[Lalo]\n"
				"Agora � sua vez, retita a m�sica que acabei de cantar.\n"
				"Uma frase de cada vez.");
			next;
			if (select("Cante novamente","Est� bem") == 1) {
				mes("[Lalo]\n"
					"^3377ff"+.@bardMusic1$+"\n"
					+ .@bardMusic2$+"\n"
					+ .@bardMusic3$+"\n"
					+ .@bardMusic4$+"\n"
					+ .@bardMusic5$+"\n"
					+ .@bardMusic6$+"^000000");
				next;
				mes("[Lalo]\n"
					"Agora � sua vez, retita a m�sica que acabei de cantar.\n"
					"Uma frase de cada vez.");
				next;
			}
			mes("["+strcharinfo(CHAR_NAME)+"]");
			input(.@playerMusic1$);
			if (.@playerMusic1$ != .@bardMusic1$) {
				.@musicError = 1;
				mes("^ff0000"+.@playerMusic1$+"^000000");
			} else {
				mes("^3377ff"+.@playerMusic1$+"^000000");
			}
			input(.@playerMusic2$);
			if (.@playerMusic2$ != .@bardMusic2$) {
				.@musicError = 1;
				mes("^ff0000"+.@playerMusic2$+"^000000");
			} else {
				mes("^3377ff"+.@playerMusic2$+"^000000");
			}
			input(.@playerMusic3$);
			if (.@playerMusic3$ != .@bardMusic3$) {
				.@musicError = 1;
				mes("^ff0000"+.@playerMusic3$+"^000000");
			} else {
				mes("^3377ff"+.@playerMusic3$+"^000000");
			}
			input(.@playerMusic4$);
			if (.@playerMusic4$ != .@bardMusic4$) {
				.@musicError = 1;
				mes("^ff0000"+.@playerMusic4$+"^000000");
			} else {
				mes("^3377ff"+.@playerMusic4$+"^000000");
			}
			input(.@playerMusic5$);
			if (.@playerMusic5$ != .@bardMusic5$) {
				.@musicError = 1;
				mes("^ff0000"+.@playerMusic5$+"^000000");
			} else {
				mes("^3377ff"+.@playerMusic5$+"^000000");
			}
			input(.@playerMusic6$);
			if (.@playerMusic6$ != .@bardMusic6$) {
				.@musicError = 1;
				mes("^ff0000"+.@playerMusic6$+"^000000");
			} else {
				mes("^3377ff"+.@playerMusic6$+"^000000");
			}
			next;
			if (.@musicError) {
				cutin("job_bard_aiolo02",2);
				mes("[Lalo]\n"
					"Voc� errou na letra.\n"
					"� feio errar a letras das can��es\n"
					"Mais aten��o na pr�xima vez");
				close2; cutin("",255); end;
			} else {
				cutin("job_bard_aiolo01",2);
				mes("[Lalo]\n"
					"..........");
				next;
				mes("[Lalo]\n"
					"Maravilhoso!\n"
					"Voc� pode se tornar um �timo Bardo.");
				next;
				mes("[Lalo]\n"
					"Mmm... Ent�o voc� se tornar� um Bardo.\n"
					"Mas eu quero te dar um souvenir...");
				next;
				mes("[Lalo]\n"
					"Hmm... muito bem, traga alguns troncos.\n"
					"N�o importa qual o tipo, desde que sejam 60 do mesmo tipo...");
				next;
				mes("[Lalo]\n"
					"Vou te dar um presente, uma vez que traz�-los.\n"
					"Tenha uma boa viagem.");
				bardq = 14;
				changequest(3003,3004);
				close2; cutin("",255); end;
			}
		} else if (bardq == 14) {
			cutin("job_bard_aiolo02",2);
			mes("[Lalo]");
			if ((countitem(Wooden_Block) < 60) && (countitem(Tree_Of_Archer_1) < 60) && (countitem(Tree_Of_Archer_2) < 60) && (countitem(Tree_Of_Archer_3) < 60)) {
				mes("Mmm? Parece que voc� n�o preparou todos os troncos ainda?\n"
					"Traga 60 troncos de qualquer tipo.");
				close2; cutin("",255); end;
			} else {
				if (SkillPoint) {
					mes("Bom trabalho.\n"
						"Mas voc� ainda tem pontos de habilidades sobrando.\n"
						"Gaste todos pontos, e depois retorne");
					close2; cutin("",255); end;
				} else {
					mes("Bom trabalho.\n"
						"Farei seu souvenir de mudan�a de classe com isso.\n"
						"Espere um momento.");
					next;
					mes("[Lalo]\n"
						"^3355FFScrape Scrape Tang Tang^000000\n"
						"^3355FFSqueak Squeak Scratch Scratch^000000");
					next;
					if (countitem(Wooden_Block) >= 60) { delitem(Wooden_Block,60); .@item = 1901; }
					else if (countitem(Tree_Of_Archer_1) >= 60) { delitem(Tree_Of_Archer_1,60); .@item = 1910; }
					else if (countitem(Tree_Of_Archer_2) >= 60) { delitem(Tree_Of_Archer_2,60); .@item = 1903; }
					else if (countitem(Tree_Of_Archer_3) >= 60) { delitem(Tree_Of_Archer_3,60); .@item = 1905; }
					mes("[Lalo]\n"
						"Muito bem!!\n"
						"Espero que voc� cante boas m�sicas agrad�veis.\n"
						"Viva como o vento e as nuvens!");
					next;
					mes("[Lalo]\n"
						"Te vejo na pr�xima vez!");
					jobchange(Job_Bard);
					completequest(3004);
					callfunc("ClearJobQuest2nd",19);
					getitem(.@item,1);
					close2; cutin("",255); end;
				}
			}
		}
	} else {
		if (BaseJob == Job_Bard) {
			cutin("job_bard_aiolo01",2);
			mes("[Lalo]\n"
				"Voc� n�o ir� se esquecer de espalhar as not�cias pelas cidades?\n"
				"E n�o se esque�a de tamb�m aprender novas can��es...");
			next;
			mes("[Lalo]\n"
				"Nunca se esque�a de ter uma atitude positiva e de continuar alegre.\n"
				"Nossas m�sicas s�o feitas para alegrar as pessoas.");
			close2; cutin("",255); end;
		} else {
			mes("[Lalo]\n"
				"Lalala, lalala.\n"
				"Linda Comodo.\n"
				"Sempre cheia de momentos felizes.");
			close;
		}
	}
}

// ------------------------------------------------------------------
xmas_in,167,173,4	script	Duffle#snownow	4_F_05,{
	if (bardq == 3) {
		mes("[Duffle]\n"
			"Feliz Natal!\n"
			"Bem-vindo a Lutie!");
		next;
		mes("[Duffle]\n"
			"Voc� ganhou um presente do Papai Noel?!\n"
			"Ha ha, voc� deve estar muito animado!");
		next;
		mes("[Duffle]\n"
			"Ei, voc� sabia que aqui em Lutie n�s temos outra atra��o t�o famosa quanto o Papai Noel?");
		next;
		mes("[Duffle]\n"
			"� o ^3355FFBoneco de Neve^000000, o homem de neve falante!");
		next;
		mes("[Duffle]\n"
			"Antes de ir embora, voc� realmente deve procurar Boneco de Neve.\n"
			"Ele � muito legal, e � divertido conversar com ele.");
		next;
		mes("[Duffle]\n"
			"Ent�o...\n"
			"Feliz Natal!!");
		bardq = 4;
		close;
	} else if (bardq > 3) {
		mes("[Duffle]\n"
			"Voc� j� conversou com o homem de neve daqui?\n"
			"Aquele que � bem solit�rio...");
		next;
		mes("[Duffle]\n"
			"Mas ele tem um cora��o enorme.!\n"
			"De vez em quando vou conversar com ele.\n"
			"Por alguma raz�o, ele consegue falar como n�s!");
		next;
		mes("[Duffle]\n"
			"Quando eu converso com ele, eu me pergunto como ele ficou assim.\n"
			"Se voc� falar com ele, acho que vai se perguntar a mesma coisa.");
		next;
		mes("[Duffle]\n"
			"Como ele foi criado e como ele consegue pensar e falar como um humano � um mist�rio...");
		next;
		mes("[Duffle]\n"
			"De onde ele veio, e que tipo de lugar seria?\n"
			"E como ele chegou em Lutie sem poder andar...?");
		next;
		mes("[Duffle]\n"
			"Ultimamente, mais pessoas est�o vindo aqui para conhecer o Boneco de Neve.");
		next;
		mes("[Duffle]\n"
			"Acho que voc� deveria falar com os outros moradores de Lutie para aprender mais sobre a hist�ria do Boneco de Neve...");
		close;
	} else {
		mes("[Duffle]\n"
			"Oh...!\n"
			"N�o se esque�a de visitar o verdadeiro Papai Noel!\n"
			"Ele mora aqui em Lutie!");
		close;
	}
}

// ------------------------------------------------------------------
xmas,134,112,4	script	Boneco de Neve#snownow	4_M_SNOWMAN,{
	cutin("rutie_snownow03.bmp",2);
	mes("[Boneco de Neve]\n"
		"Eu...\n"
		"Me sinto t�o sozinho!");
	next;
	mes("[Boneco de Neve]\n"
		"Sempre parado aqui...\n"
		"No mesmo lugar...\n"
		"Dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia...");
	next;
	switch (select("^3355FFBoneco de Neve?^000000","F�brica de Brinquedos?","Acabar a conversa")) {
		case 1:
		if (bardq < 4) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Eu nasci no Norte, num lugar em que nevava o tempo todo.\n"
				"Era muito mais frio do que aqui em Lutie, pode acreditar.");
			next;
			mes("[Boneco de Neve]\n"
				"Fui feito com amor por um humano, e era muito feliz.\n"
				"Minha vida era simples, mas aben�oada.");
			next;
			mes("[Boneco de Neve]\n"
				"Pensei que pudesse passar o resto da vida daquele jeito.\n"
				"Mas... n�o foi assim.");
			next;
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Um dia, uma mulher feia e idosa chegou na cidade.\n"
				"Chamavam-na de 'Merlophechum', e ela vinha de uma cidade estranha em que estava sempre calor.");
			next;
			mes("[Boneco de Neve]\n"
				"Na terceira noite ap�s sua chegada, ela colocou fogo na cidade com uma magia assustadora.\n"
				"Todos correram em meio ao medo e ao caos.\n"
				"E eu desmaiei.");
			next;
			cutin("rutie_snownow02.bmp",2);
			mes("[Boneco de Neve]\n"
				"N�o sei quanto tempo se passou, mas quando acordei, estava aqui.\n"
				"Bem, posso dizer que Lutie � como se fosse o c�u.");
			next;
			mes("[Boneco de Neve]\n"
				"Ningu�m nunca se preocupa, e estou sempre ouvindo can��es natalinas e coisas assim.");
			next;
			cutin("rutie_snownow03.bmp",2);
			mes("[Boneco de Neve]\n"
				"Mas ainda assim...\n"
				"As vezes nem a alegria do Natal consegue curar a escura solid�o que existe dentro de mim.");
			next;
			mes("[Boneco de Neve]\n"
				"Ent�o, quer ser meu amigo?\n"
				"Se voc� for, serei seu amigo tamb�m.!");
			close2; cutin("",255); end;
		} else if (bardq == 4) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Oh...?\n"
				"Voc� conheceu Duffle?\n"
				"Ah, de vez em quando ela passa aqui para me dar um oi...");
			next;
			mes("[Boneco de Neve]\n"
				"� estranho que as pessoas de Lutie me chamem de boneco de neve misterioso.\n"
				"Porque por dentro somos todos iguais, n�o �?");
			next;
			mes("[Boneco de Neve]\n"
				"*Sniff*\n"
				"As ve-vezes, eu tamb�m n�o sei o que sou.\n"
				"Mas as pessoas de Lutie me aceitam de qualquer jeito.");
			next;
			mes("[Boneco de Neve]\n"
				"^3355FFPoze^000000 me deu o cart�o dele com seu endere�o, e disse para eu ir visit�-lo quando estivesse triste.\n"
				"Fiquei t�o feliz ao ouvir isso...");
			next;
			mes("[Boneco de Neve]\n"
				"Mas o destino me pregou outra pe�a, j� que percebi que n�o tenho pernas para ir visit�-lo.");
			next;
			mes("[Boneco de Neve]\n"
				"Como eu cheguei nessa cidade?\n"
				"E como eu posso falar?!\n"
				"N�-n�o � natural, �?\n"
				"Ser�... ser� que eu sou um monstro?");
			next;
			mes("^3355FFBoneco de Neve se perde em pensamentos,^000000\n"
				"^3355FFcom os olhos fixos no cart�o de Poze.^000000");
			bardq = 5;
			close2; cutin("",255); end;
		} else if (bardq == 5) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"...");
			next;
			mes("^3355FFBoneco de Neve se perde em pensamentos^000000\n"
				"^3355FFcom os olhos fixos no cart�o de Poze.^000000");
			close2; cutin("",255); end;
		} else if (bardq == 6) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Ah que legal!\n"
				"Voc� conheceu Poze!");
			next;
			mes("[Boneco de Neve]\n"
				"Ele � um cara t�o honesto e bondoso!\n"
				"Espero que ele e Duffle fiquem juntos algum dia!");
			next;
			mes("[Boneco de Neve]\n"
				"...Ah n�o.!\n"
				"Eu disse isso em voz alta?\n"
				"Devia ter ficado calado!\n"
				"Me desculpeee!\n"
				"Sou realmente um cabe�udo, n�?");
			next;
			mes("[Boneco de Neve]\n"
				"�...\n"
				"Poze est� apaixonado pela Duffle.\n"
				"E ela � bondosa com todo mundo, menos com ele.");
			next;
			mes("[Boneco de Neve]\n"
				"Mas eu sei que ela faz isso porque gosta muito dele!\n"
				"Hee hee hee!");
			close2; cutin("",255); end;
		} else if (bardq == 7) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Oh...?\n"
				"Voc� conheceu o\n"
				"^3355FFCantata, o Tio Cabeludo^000000?");
			next;
			cutin("rutie_snownow02.bmp",2);
			mes("[Boneco de Neve]\n"
				"Bem, ele fala muito alto, n�o toma banho e cheira que nem comida podre.\n"
				"Mas ele � muito legal e bondoso.\n"
				"Todos adoram ele!");
			next;
			mes("[Boneco de Neve]\n"
				"E ele adora beber coisas estranhas.\n"
				"� um milagre que n�o passe mal. Hee hee.! Ah, eu amo aquele cara!");
			close2; cutin("",255); end;
		} else if (bardq == 8) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Oh...?\n"
				"Voc� conheceu a ^3355FFTia Mima^000000?");
			next;
			mes("[Boneco de Neve]\n"
				"Bem, ela adora vegetais mesmo.\n"
				"Voc� poderia entregar isso para ela? Estive guardando nos �ltimos tempos.");
			next;
			mes("^3355FFBoneco de Neve te d� O Melhor Sal do Mundo^000000.");
			next;
			mes("[Boneco de Neve]\n"
				"Adoro a comida dela, � deliciosa!\n"
				"Ela me traz suco de uva com flocos de neve.\n"
				"Bem, por favor entregue para ela, amigo.!");
			bardq = 9;
			close2; cutin("",255); end;
		} else if (bardq == 9) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"'^3355FFUm item para colher vegetais^000000...'\n"
				"Uau. A Tia Mima adora vegetais, ent�o ela gostaria disso!");
			close2;
			cutin("",255);
			end;
		} else if (bardq == 10) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Hashokii, o palha�o sem-gra�a?\n"
				"Ele n�o parece muito engra�ado mesmo.\n"
				"Mas ele se importa muito com as outras pessoas.");
			next;
			mes("[Boneco de Neve]\n"
				"Ele faz de tudo para que aqueles �rf�os d�em risada e esque�am os problemas...");
			close2; cutin("",255); end;
		} else if (bardq == 11) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Ah...\n"
				"Ent�o voc� conheceu o Charu Charu?\n"
				"Aquele menino � muito otimista e sempre olha para o futuro.\n"
				"Aposto que vai se dar muito bem quando crescer!");
			next;
			mes("[Boneco de Neve]\n"
				"Ali�s, tenho certeza!\n"
				"Hee hee hee.!");
			close2; cutin("",255); end;
		} else if (bardq == 12) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Muito obrigado por me ouvir por tanto tempo.\n"
				"Gostei muito que voc� tentou me entender, mesmo sendo um estranho.");
			next;
			mes("[Boneco de Neve]\n"
				"Agora voc� me conhece melhor que muita gente nessa cidade.\n"
				"Eu gostaria de te dar um presentinho!");
			next;
			mes("[Boneco de Neve]\n"
				"Tah dah!\n"
				"Escolha o que voc� quiser daqui!");
			next;
			mes("[Boneco de Neve]\n"
				"^3355FFVoc� sorteia um presente de dentro da bolsa m�gica de Boneco de Neve^000000.");
			next;
			switch (rand(8)) {
				case 1:
				getitem(Candy,5);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Wow.!\n"
					"^3355FF5 Balas^000000!\n"
					"Parab�ns!");
				break;
				case 2:
				getitem(Candy,10);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Ooh.!\n"
					"^3355FF10 Balas^000000!");
				break;
				case 3:
				getitem(Candy_Striper,5);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Hoooraaaay.!\n"
					"^3355FF5 Bengalas Doce^000000!");
				break;
				case 4:
				getitem(Candy_Striper,10);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Wow, Isso � perfeito!\n"
					"^3355FF10 Bengalas Doce^000000!");
				break;
				case 5:
				getitem(Piece_Of_Cake,1);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Wow, Isso � perfeito!\n"
					"^3355FF1 Peda�os de Bolo^000000!");
				break;
				case 6:
				getitem(Piece_Of_Cake,2);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Wow, Isso � perfeito!\n"
					"^3355FF2 Peda�os de Bolo^000000!");
				break;
				case 7:
				getitem(Well_Baked_Cookie,5);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Oh woooooow.!\n"
					"^3355FF5 Biscoitos^000000!");
				break;
				default:
				getitem(Well_Baked_Cookie,10);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"*Gasp!* Ooh.\n"
					"^3355FF10 Biscoitos^000000!");
				break;
			}
			next;
			mes("[Boneco de Neve]\n"
				"Meu amigo, venha me visitar quando puder para conversarmos!\n"
				"Venha logo!\n"
				"E Feliz Natal!");
			bardq = 13;
			close2; cutin("",255); end;
		}
		case 2:
		cutin("rutie_snownow01.bmp",2);
		mes("[Boneco de Neve]\n"
			"Em volta dessa cidade maravilhosa, aben�oada pelo Natal, tem uma f�brica horr�vel, amaldi�oada pelo Natal.");
		next;
		mes("[Boneco de Neve]\n"
			"Ouvi dizer que � bem decorada e parece uma f�brica de brinquedos, onde tudo � bonitinho.\n"
			"Tem soldadinhos de brinquedos e caixas de presente por todos os lados.");
		next;
		cutin("rutie_snownow02.bmp",2);
		mes("[Boneco de Neve]\n"
			"Isso n�o � muuito legal?!\n"
			"*Suspiro*\n"
			"Mesmo sabendo que � uma dungeon, gostaria de ir l� dar uma olhada.\n"
			"Se eu fosse um menino de verdade, ou se ao menos tivesse pernas...");
		close2; cutin("",255); end;
		case 3:
		cutin("rutie_snownow03.bmp",2);
		mes("[Boneco de Neve]\n"
			"At� mais, amigo.!\n"
			"Obrigado por me ouvir.\n"
			"Espero te ver novamente!\n"
			"Voc� sempre estar� no meu cora��o!");
		close2; cutin("",255); end;
	}
}

// ------------------------------------------------------------------
xmas,117,304,4	script	Poze#bardq	4_M_06,{
	if (bardq == 5) {
		mes("[Poze]\n"
			"Voc� foi falar com ^3355FFBoneco de Neve^000000 e ele mencionou o meu nome?");
		next;
		mes("[Poze]\n"
			"Entendo...\n"
			"Ele � um boneco de neve que n�o tem pernas.\n"
			"N�o me surpreende que nunca tenha vindo me visitar.\n"
			"Que vergonha!\n"
			"Eu que deveria ir visit�-lo.");
		next;
		mes("[Poze]\n"
			"Ah, lembrei de algu�m que sabe como Boneco de Neve come�ou a falar.\n"
			"� o ^3355FFCantata, o Tio Cabeludo^000000...");
		next;
		mes("[Poze]\n"
			"Um dia, o aprendiz de um grande Alquimista veio visitar Lutie, e eu ouvi uma conversa dele com o Tio Cabeludo.");
		next;
		mes("[Poze]\n"
			"Muito tempo atr�s, um poderoso Alquimista chegou na terra natal de Boneco de Neve, e encontrou-o morrendo, derretendo e virando �gua.\n"
			"Mas Boneco de Neve foi reanimado pelo Alquimista.");
		next;
		mes("[Poze]\n"
			"E isso � tudo que sei.\n"
			"Para saber detalhes, converse com o ^3355FFTio Cabeludo Cantata.^000000.");
		bardq = 6;
		close;
	} else {
		mes("[Poze]\n"
			"Bem vindo a Lutie, a cidade que aben�oa os visitantes com o esp�rito de Natal!\n"
			"Feliz Natal!");
		next;
		mes("[Poze]\n"
			"Aqui nessa terra m�gica voc� pode aproveitar o esp�rito de Natal durante o ano todo.!\n"
			"N�o � maravilhoso?");
		next;
		mes("[Poze]\n"
			"Lutie n�o � apenas um lugar tur�stico.\n"
			"Temos lojas e tudo que as outras cidades tem, mas em um ambiente festivo.");
		next;
		mes("[Poze]\n"
			"Ent�o se voc� quiser passar um tempo aqui n�o vai se arrepender.\n"
			"Feliz Natal.");
		close;
	}
}

// ------------------------------------------------------------------
xmas,176,236,4	script	Hairy#bardq	4_M_05,{
	if (bardq == 6) {
		if (countitem(Chinese_Ink) && countitem(Sticky_Mucus)) {
			mes("[Hairy]\n"
				"Oh? Vo-voc� trouxe os ingredientes?\n"
				"����timo.\n"
				"Faz tanto tempo que n�o provo disso...\n"
				"D�-d� para mim!");
			next;
			delitem(Chinese_Ink,1);
			delitem(Sticky_Mucus,1);
			bardq = 7;
			mes("^3355FFVoc� rapidamente d� a ele o Tinta de Polvo e o Muco Pegajoso,\n"
				"E olha com um pouco de nojo enquanto ele saboreia o drinque.^000000");
			next;
			mes("[Hairy]\n"
				"*Burrrrpppp.*\n"
				"Bem, � hora da hist�ria.\n"
				"Lembre-se que � tudo que sei.\n"
				"N�o sei quanto voc� j� ouviu...");
			next;
			mes("[Hairy]\n"
				"Muito tempo atr�s, havia um poderoso Alquimista vivendo no Norte.\n"
				"Seu nome era ^3355FFPhilip Varsez^000000!");
			next;
			mes("[Hairy]\n"
				"Ele era um pioneiro em pesquisas sobre Alquimia, e precisava de materiais raros para seus estudos.\n"
				"Por isso, viajava o mundo atr�s de materiais que continham energia m�gica...");
			next;
			mes("[Hairy]\n"
				"Um dia, suas viagens levaram-no para um vilarejo no Norte, conhecido por seu tempo frio.\n"
				"Mas ao chegar l�, ele se deparou com uma cidade destru�da.");
			next;
			mes("[Hairy]\n"
				"Era uma vis�o terr�vel:\n"
				"As pessoas jaziam na cal�ada, moribundas.\n"
				"Quando viam Varsez, imploravam para que ele os matasse e acabasse com a agonia.");
			next;
			mes("[Hairy]\n"
				"Entre os gritos de desespero, o choro de duas crian�as chegou aos ouvidos de Philip Varsez.\n"
				"Ele correu e achou dois beb�s agarrados em um boneco de neve que se derretia.");
			next;
			mes("[Hairy]\n"
				"Aquele boneco de neve...\n"
				"Era ^3355FFBoneco de Neve^000000.");
			next;
			mes("[Hairy]\n"
				"Sendo o poderoso Alquimista que era, Varsez percebeu que Boneco de Neve se sacrificara para proteger os beb�s do desastre que ca�ra sobre o vilarejo.");
			next;
			mes("[Hairy]\n"
				"Varsez ficou emocionado e decidiu salvar a vida do boneco com seus poderes.\n"
				"E o trouxe para Lutie, o lugar mais seguro do mundo.");
			next;
			mes("[Hairy]\n"
				"Claro, tamb�m existem rumores de que Boneco de Neve p�de sobreviver n�o s� pela piedade do Alquimista.\n"
				"Mas tamb�m pela neve com a qual era feito.");
			next;
			mes("[Hairy]\n"
				"Acredita-se que a neve que formou Boneco de Neve cobria um campo misterioso, supostamente cheio de flores m�gicas.");
			next;
			mes("[Hairy]\n"
				"Muhahaha.\n"
				"Bem, isso � tudo que sei.\n"
				"Espero que voc� tenha gostado da minha hist�ria!");
			next;
			mes("[Hairy]\n"
				"Bem...\n"
				"Agora que penso nisso...");
			next;
			mes("[Hairy]\n"
				"Boneco de Neve n�o s� fala, mas tamb�m tem um estoque inacab�vel de presentes de Natal.\n"
				"Pelo menos foi o que me disseram.");
			next;
			mes("[Hairy]\n"
				"^3355FFMima^000000, a mulher dos vegetais, sabe mais sobre isso.\n"
				"Voc� devia ir falar com ela.\n"
				"Feliz Natal!");
			close;
		} else {
			mes("Humm... Foi Poze quem falou sobre mim?\n"
				"He he he! Sei sim sobre Boneco de Neve.\n"
				"Pode me considerar com o ponto fraco dele, j� que...");
			next;
			mes("[Hairy]\n"
				"Eu sei\n"
				"o segredo do\n"
				"^3355FFnascimento de Boneco de Neve^000000!!");
			next;
			mes("[Hairy]\n"
				"Est� curioso?\n"
				"Heh heh heh.\n"
				"Bom, n�o vou te contar sem ganhar nada em troca.");
			next;
			mes("[Hairy]\n"
				"O ruim de morar nessa cidade � que n�o tenho nenhuma chance de tomar um drinque de verdade.\n"
				"Vejamos, me traga...");
			next;
			mes("[Hairy]\n"
				"^3355FF1 Tinta de Polvo e 1 Muco Pegajoso^000000!");
			next;
			mes("[Hairy]\n"
				"Wahhahaha!\n"
				"Por que est� me olhando assim?!\n"
				"Meu gosto n�o � da sua conta! Ao trabalho.!");
			close;
		}
	} else {
		mes("[Hairy]\n"
			"Feliz Natal!\n"
			"Bem vindo a Lutie!");
		next;
		mes("[Hairy]\n"
			"Parece que o frio deixou suas bochechas rosadas!\n"
			"Ha ha ha!");
		next;
		mes("[Hairy]\n"
			"Tenha cuidado para n�o pegar a Gripe de Lutie.\n"
			"...");
		next;
		mes("[Hairy]\n"
			"*Suspiro*\n"
			"Isso me lembra...\n"
			"Meu filho pegou uma Gripe de Lutie muito forte um tempo atr�s.");
		next;
		mes("[Hairy]\n"
			"Foi durante a noite, eu n�o tinha onde buscar rem�dios e parecia que n�o havia o que fazer.");
		next;
		mes("[Hairy]\n"
			"Achei que o m�nimo que poderia fazer por ele era pegar algo frio para tentar abaixar sua febre.\n"
			"Mas a neve de Lutie derretia assim que tocava em sua testa.\n"
			"Ele estava queimando em febre e eu n�o conseguia alivi�-lo.");
		next;
		mes("[Hairy]\n"
			"E foi a� que eu soube que precisaria de gelo m�gico.");
		next;
		mes("[Hairy]\n"
			"Acabei chegando na Dungeon Natalina e l� encontrei, gra�as a Deus, uma criatura inteira de gelo!");
		next;
		mes("[Hairy]\n"
			"Era um ^3355FFPoring de Gelo^000000!\n"
			"Os habitantes locais chamam-no de 'Icepantzering.'\n"
			"De qualquer modo, salvei a vida do meu filho com isso.\n"
			"Agrade�o at� hoje por ter encontrado algo assim nessa cidade.");
		next;
		mes("[Hairy]\n"
			"Oops, acho que falei demais\n"
			" Feliz Natal.!");
		close;
	}
}

// ------------------------------------------------------------------
xmas_in,27,103,4	script	Tia Mima#bardq	4_F_GODEMOM,{
	if (bardq == 7) {
		mes("[Mima]\n"
			"Hmm? Aquele cabeludo falou bem de mim, n�o �?\n"
			"Bem...");
		next;
		mes("[Mima]\n"
			"Eu sei o que ele quer...\n"
			"Ho ho ho.!\n"
			"Ele quer me deixar feliz para que eu d� a ele vegetais de gra�a!\n"
			"Ah bem.!");
		next;
		mes("[Mima]\n"
			"Ele me conhece bem. Sempre acaba ganhando vegetais de gra�a.\n"
			"Sim, porque os meus s�o os melhores da cidade!");
		next;
		mes("[Mima]\n"
			"Hmmm.?\n"
			"Voc� quer saber sobre ^3355FFBoneco de Neve^000000?\n"
			"Ah. Sim, sim, entendo...");
		next;
		mes("[Mima]\n"
			"Bem, n�o posso deixar qualquer um saber sobre algu�m t�o importante quanto Boneco de Neve.\n"
			"Hmmm...");
		next;
		mes("[Mima]\n"
			"Boneco de Neve est� guardando ^3355FFO Melhor Sal do Mundo^000000 para mim.\n"
			"� algo muito importante, que eu uso para temperar vegetais.");
		next;
		mes("[Mima]\n"
			"Se voc� realmente for amigo do Boneco de Neve, ele confiar� em voc� para me devolver.\n"
			"E de qualquer forma, eu preciso do Sal de volta.");
		next;
		mes("[Mima]\n"
			"Agora seja um bom menino e se apresse.\n"
			"Volte r�pido.");
		bardq = 8;
		close;
	} else if (bardq == 9) {
		mes("[Mima]\n"
			"Hohohohoh hohohohoho !\n"
			"Vejamos, vejamos...\n"
			"Obrigada, querido, obrigada.");
		next;
		mes("^3355FFVoc� devolveu a ela\n"
			"O Melhor Sal do Mundo.^000000");
		next;
		mes("[Mima]\n"
			"Agora posso temperar meus vegetais decentemente.\n"
			"Obrigada, querido.\n"
			"Obrigada...");
		next;
		mes("...");
		next;
		mes("......");
		next;
		mes("[Mima]\n"
			"Ah �, quase esqueci a minha promessa.\n"
			"Voc� quer saber sobre o dom m�gico de Boneco de Neve, n�o �?");
		next;
		mes("[Mima]\n"
			"Se voc� ja falou com o Tio Cantata.;\n"
			"Sabe que Boneco de Neve foi feito com uma neve misteriosa, que cobria um campo de flores m�gicas.");
		next;
		mes("[Mima]\n"
			"Posso te dizer que quando Boneco de Neve foi revivido.\n"
			"Houve uma rea��o entre os materiais do Alquimista e a energia contida na neve de Boneco de Neve.");
		next;
		mes("[Mima]\n"
			"Por alguma raz�o, Boneco de Neve tem uma Caixa de Presentes que cria quantos presentes ele quiser.\n"
			"Como se fosse o Papai Noel.");
		next;
		mes("[Mima]\n"
			"Claro, se esse poder ca�sse nas m�os do mal, ter�amos problemas.");
		next;
		mes("[Mima]\n"
			"Mas todo mundo sabe que Boneco de Neve � bondoso e carinhoso com os outros.\n"
			"Ent�o nunca nos preocupamos com isso.");
		next;
		mes("[Mima]\n"
			"Ah, e eu ouvi not�cias incr�veis.\n"
			"Quem me contou foi ^3355FFHashokii^000000 o palha�o.\n"
			"� uma hist�ria muito interessante.\n"
			"Voc� deveria ir falar com ele.");
		bardq = 10;
		close;
	} else {
		mes("[Mima]\n"
			"Feliz Natal.\n"
			"Ho! Ho! Ho!");
		next;
		mes("[Mima]\n"
			"Sinto o esp�rito de Natal em todo lugar!\n"
			"At� nos olhos dos jovens viajantes que v�m at� Lutie.\n"
			"Hoho, desejo a voc� um Natal muito feliz!");
		close;
	}
}

// ------------------------------------------------------------------
xmas,146,136,4	script	Hashokii#bardq	4_M_PIERROT,{
	if (bardq == 10) {
		mes("[Hashokii]\n"
			"Sabe os beb�s que Boneco de Neve salvou?\n"
			"Acho que Charu Charu e Marcell n�o sabem disso.");
		next;
		mes("[Hashokii]\n"
			"Boneco de Neve me contou como ele tentou bloquear a enorme bola de fogo que iria cair nos beb�s.\n"
			"Ele estava disposto a se sacrificar por eles.");
		next;
		mes("[Hashokii]\n"
			"Por que voc� n�o procura as crian�as?\n"
			"Eles talvez te contem a hist�ria completa.\n"
			"Boa sorte.!");
		bardq = 11;
		close;
	} else {
		mes("[Hashokii]\n"
			"Feellliiizz Natal.!\n"
			"La La La.!\n"
			"Dum di Dum di Dum!");
		next;
		switch (select("E a� cara, beleza?","Sobre Boneco de Neve","Cancelar")) {
			case 1:
			mes("[Hashokii]\n"
				"La La La.!\n"
				"Dum di Dum di Dum!\n"
				"Ooh, estou pensando em um show para animar o Charu Charu e a Marcell!");
			close;
			case 2:
			mes("[Hashokii]\n"
				"Ah... ^3355FFBoneco de Neve^000000?\n"
				"Claro que conhe�o ele!\n"
				"Qualquer um que n�o conhe�a com certeza n�o mora aqui!\n"
				"De vez em quando vou l� conversar com ele...");
			close;
			case 3:
			mes("[Hashokii]\n"
				"La La La.!\n"
				"Dum di Dum di Dum\n"
				"Feliz Natal.!");
			close;
		}
	}
}

// ------------------------------------------------------------------
xmas,208,168,4	script	Pequena Menina#bardq	4_F_KID2,{
	if (bardq == 11) {
		mes("[Marcell]\n"
			"Charu Charu e eu somos �rf�os, e n�o lembro dos nossos pais.\n"
			"Fomos criados pelo povo de Lutie.");
		next;
		mes("[Marcell]\n"
			"O Tio Cantata e a Tia Mima nos tratam como filhos, e Poze e Duffle s�o como nossos irm�os!");
		next;
		mes("[Marcell]\n"
			"Eles s�o bons e generosos, e n�s agradecemos muito tudo o que fazem para cuidar de n�s!");
		next;
		mes("[Marcell]\n"
			"Ouvi dizer que Boneco de Neve tamb�m n�o tem pais.\n"
			"E tamb�m ouvi que ele n�o nasceu aqui.");
		next;
		mes("[Marcell]\n"
			"Ouvi dizer que Boneco de Neve e n�s somos do mesmo lugar, mas n�o tenho certeza.\n"
			"Mas sei que Boneco de Neve e eu temos o mesmo tipo de queimaduras no corpo.");
		next;
		mes("[Marcell]\n"
			"Charu Charu e eu temos queimaduras nas costas, e Boneco de Neve tamb�m tem uma bem grande.\n"
			"Acho que o que foi que fez isso, fez em n�s tr�s de uma vez...");
		next;
		mes("[Marcell]\n"
			"Hum, deixa eu ver...\n"
			"Voc� quer saber tudo sobre Boneco de Neve porque quer ser amigo dele!\n"
			"Ah, ele vai ficar t�o feliz quando souber disso! Talvez at� te d� um presente! Boa sorte!");
		bardq = 12;
		close;
	} else if (bardq == 13) {
		mes("[Marcell]\n"
			"Voc� sabe mais sobre Boneco de Neve do que qualquer outro!\n"
			"V� falar com ele, ele vai ficar feliz de ver que voc� se importa com ele.\n"
			"Feliz Natal!");
		close;
	} else {
		mes("[Marcell]\n"
			"Estou congelando aqui...!\n"
			"E Charu Charu me deixa com mais frio ainda com essas piadas rid�culas.\n"
			"E o vento est� t�o forte!");
		next;
		mes("[Marcell]\n"
			"Sabe de uma coisa? Boneco de Neve tem um poder especial.\n"
			"Ele pode fazer tantos presentes quanto o Papai Noel! Isso n�o � �timo?");
		next;
		mes("[Marcell]\n"
			"Huh? Por que est� me olhando assim?\n"
			"Boneco de Neve tem uma grande caixa de presentes e distribui lembran�as quando quer.\n"
			"N�o � dif�cil acreditar nisso!");
		close;
	}
}
