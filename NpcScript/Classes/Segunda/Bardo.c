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
| - Info: Quest de Mudança de Classe para Bardo.                    |
\*-----------------------------------------------------------------*/

comodo,226,123,5	script	Bardo Andarilho#bardq	2_M_BARD_ORIENT,{
	if (BaseJob == Job_Archer && Sex == SEX_MALE) {
		if (!bardq) {
			cutin("job_bard_aiolo01",2);
			mes("[Lalo]\n"
				"Oi! Encantador Arqueiro.\n"
				"Como um andarilho como eu pode te ajudar?");
			next;
			switch (select("Você tem uma voz agradável","Você pode cantar um pouco?","Em nada")) {
				case 1:
				mes("[Lalo]\n"
					"Hahaha! É claro!\n"
					"Se você canta com o coração feliz, a sua voz sempre fica melhor.");
				next;
				mes("[Lalo]\n"
					"Mas, para os Bardos a voz é sua vida.\n"
					"Porém, em alguns momentos é necessário se ter cuidado com sua voz.");
				close2; cutin("",255); end;
				case 2:
				mes("[Lalo]\n"
					"Uma canção... vejamos.\n"
					"Ok, eu tenho...");
				next;
				mes("[Lalo]\n"
					"Irei cantar...\n"
					"Tambores de Guerra.\n"
					"*ehem...*cough...gag..mememememe...\n"
					"1, 2, 3, 4...");
				next;
				mes("^000088O som de cavalos galopando sobre o horizonte a poeira que cobre o sol distante.\n"
					"Enquanto milhares de olhos se abrem no luar do céu, o castelo irá se destruir com o poder^000000");
				next;
				mes("^000088Eu posso ouvir.. as batidas do meu coração.\n"
					"Eu posso sentir.. o sangue correndo pelas minhas veias.\n"
					".. e o peso da minha armadura.\n"
					"Posso ver.. meus inimigos.^000000");
				next;
				mes("^000088Mais alto, mais alto mais alto..\n"
					"Dê força aos guerreiros!\n"
					"Superior, superior, superior..\n"
					"Esse dia nunca voltará!^000000");
				next;
				mes("^000088Agite o céu e balance a terra.\n"
					"Faça meu coração bater novamente!\n"
					"Ouça o som das trombetas, e as as muralhas do castelo tremem.\n"
					"Esse momento nunca mais voltará!^000000");
				next;
				mes("[Lalo]\n"
					"Hmm... essa é sempre uma boa canção para cantar.\n"
					"O que achou?\n"
					"Não é uma música agradável?");
				next;
				if (select("Sim, é muito boa","Não, realmente não mesmo...") == 1) {
					mes("[Lalo]\n"
						"Seria bom se mais pessoas a cantassem...\n"
						"Bem, é tudo... hmmhmm.");
					if (JobLevel > 39) {
						bardq = 1;
						setquest(3000);
					}
					close2; cutin("",255); end;
				} else {
					mes("[Lalo]\n"
						"Hmm... Eu perdi meus sentidos, terei que me esforçar mais.\n"
						"De qualquer forma...\n"
						"Obrigado pela atenção.");
					close2; cutin("",255); end;
				}
				case 3:
				cutin("job_bard_aiolo02",2);
				mes("[Lalo]\n"
					"Nossa, não pedir uma música quando se encontra um Bardo é falta de educação.\n"
					"Bem... Não posso ajudá-lo enquanto você parecer que está com pressa.");
				next;
				mes("[Lalo]\n"
					"A caça é algo bom... Mas você não pode esquecer de relaxar de vez em quando.\n"
					"A juventude é curta e não volta..");
				close2; cutin("",255); end;
			}
		} else if (bardq == 1) {
			cutin("job_bard_aiolo01",2);
			mes("[Lalo]\n"
				"Olá novamente arqueiro\n"
				"Quer ouvir outra canção?");
			next;
			if (select("Como posso ser um bardo?","Deixa para outra hora") == 1) {
				mes("[Lalo]\n"
					"Ah sim, você também quer aprender canções.\n"
					"Eu irei ajudá-lo então para se tornar um Bardo");
				next;
				mes("[Lalo]\n"
					"Mas antes disso... você pode me trazer uma Flor?\n"
					"Eu preciso sentir o cheiro de uma flor para ver como será o ensino.");
				next;
				mes("[Lalo]\n"
					"O tipo de flor não importa, mas tente trazer uma que eu goste.\n"
					"E não compre qualquer flor barata, certo?");
				bardq = 2;
				changequest(3000,3001);
				close2; cutin("",255); end;
			} else {
				mes("[Lalo]\n"
					"Hmm... Eu não tenho certeza do que você será, mas aproveite a vida.\n"
					"Você parece muito tenso.");
				next;
				mes("[Lalo]\n"
					"Bem então, tenha um bom dia.");
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
					"Ooh! Isto é uma Flor Cantante!\n"
					"Ela me traz muitas lembranças...");
				next;
				mes("[Lalo]\n"
					"Meu amigo Tchaikovsky gosta muito delas.\n"
					"Me pergunto o que ele está fazendo agora...");
				next;
			} else if (countitem(Hinalle)) {
				delitem(Hinalle,1);
				mes("[Lalo]\n"
					"Aah... uma linda Hinalle...\n"
					"Ela não tem cheiro, mas é uma linda flor.");
				next;
				mes("[Lalo]\n"
					"As folhas me dão força quando eu costumo cair.\n"
					"Eu realmente gosto dessa flor, obrigado.");
				next;
			} else if (countitem(Aloe)) {
				delitem(Aloe,1);
				mes("[Lalo]\n"
					"Aloe... É uma flor rara.\n"
					"Como você a conseguiu?\n"
					"Você é um perito?");
				next;
				mes("[Lalo]\n"
					"As folhas são boas e a Aloe Vera é deliciosa...\n"
					"e ela é definitivamente a mais bela das flores.");
				next;
			} else if (countitem(Ment)) {
				delitem(Ment,1);
				mes("[Lalo]\n"
					"Menta... Você pode esquecer todos os seus problemas com uma dessas.\n"
					"É ótimo ver uma depois de tanto tempo!");
				next;
				mes("[Lalo]\n"
					"Ouvi dizer que é possível fazer Analgésicos com ela...\n"
					"Mas pode ser apenas um boato..\n"
					"Obrigado!");
				next;
			} else if (countitem(Izidor)) {
				delitem(Izidor,1);
				mes("Nossa, é uma Izidor?\n"
					"É uma perigosa e bela flor...");
				next;
				mes("[Lalo]\n"
					"Possui os profundos encantos de uma pessoa..\n"
					"Obrigado, eu gosto muito dessa flor.");
				next;
			} else if (countitem(Witherless_Rose)) {
				delitem(Witherless_Rose,1);
				mes("[Lalo]\n"
					"Uma Rosa Eterna.\n"
					"A flor forte, que não murcha.\n"
					"Ótimo presente para sua namorada.");
				next;
				mes("[Lalo]\n"
					"Eu me pergunto se é permitido que um andarilho como eu tenha uma dessas.");
				next;
			} else if (countitem(Frozen_Rose)) {
				delitem(Frozen_Rose,1);
				mes("[Lalo]\n"
					"Rosa de Gelo...\n"
					"Você não pode chamar isso de flor, porém ainda sim é linda...");
				next;
				mes("[Lalo]\n"
					"Ela não possui mais seu aroma.\n"
					"Estou muito contente, pois é uma flor diferente.");
				next;
			} else if (countitem(Illusion_Flower)) {
				delitem(Illusion_Flower,1);
				mes("[Lalo]\n"
					"Ah, isso não é uma Flor das Ilusões!?\n"
					"Uau, como você conseguiu essa flor rara!!");
				next;
				mes("[Lalo]\n"
					"Muito obrigado, aah...\n"
					"Me sinto como se o céu estivesse na frente dos meus olhos.\n"
					"Que sensação maravilhosa!\n"
					"Estou muito feliz.");
				next;
			} else {
				cutin("job_bard_aiolo02",2);
				mes("[Lalo]\n"
					"Hmm? O quê...\n"
					"Você não trouxe nada.\n"
					"Eu não te pedi para me trazer uma flor expecial?");
				next;
				mes("[Lalo]\n"
					"Bem... se você quer aprender sozinho, então que assim seja.\n"
					"Qualquer pessoa pode simplesmente sair e cantar.");
				close2; cutin("",255); end;
			}
			mes("[Lalo]\n"
				"Como eu prometi, irei ajudá-lo a se tornar um Bardo.\n"
				"Mas não é fácil meu amigo.");
			next;
			mes("[Lalo]\n"
				"É importante conhecer um monte de gente para aprender a cantar.\n"
				"Você também deve se manter atualizado do que está acontecendo nos diferentes vilarejos...");
			next;
			mes("[Lalo]\n"
				"Há um boneco de neve em uma cidade chamada Lutie.\n"
				"Vá até lá e faça amizade com ele.");
			next;
			bardq = 3;
			changequest(3001,3002);
			next;
			mes("[Lalo]\n"
				"Se você se tornar amigo do ^008800Boneco de Neve^000000, você irá receber algo.\n"
				"E também fale com as pessoas da cidade enquanto estiver lá...");
			close2; cutin("",255); end;
		} else if (bardq < 13) {
			cutin("job_bard_aiolo01",2);
			mes("[Lalo]\n"
				"É, você ainda não se tornou amigo do boneco de neve em Lutie?\n"
				"Falar comigo não te ajudará.");
			next;
			mes("[Lalo]\n"
				"Se você se tornar amigo do ^008800Boneco de Neve^000000, você irá receber algo.\n"
				"E também fale com as pessoas da cidade enquanto estiver lá...");
			close2; cutin("",255); end;
		} else if (bardq == 13) {
			cutin "job_bard_aiolo01",2;
			mes("[Lalo]\n"
				"Então, você quer tentar cantar...?\n"
				"Irei cantar uma curta melodia...\n"
				"E você tenta depois.");
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
				.@bardMusic4$ = "Filho do herói Jichmunt";
				.@bardMusic5$ = "O gigante malvado Papner";
				.@bardMusic6$ = "Se transformou em um dragão e o comeu.";
				break;
				case 2:
				.@bardMusic1$ = "Todos os deuses nunca envelhecem";
				.@bardMusic2$ = "A sempre tão bela Idun";
				.@bardMusic3$ = "Bela e graciosa Idun";
				.@bardMusic4$ = "Nora de Odin e esposa de Bragi";
				.@bardMusic5$ = "Suas doces maçãs em sua cesta";
				.@bardMusic6$ = "Tudo graças a suas doces maçãs";
				break;
				case 3:
				.@bardMusic1$ = "Bragi, Bragi";
				.@bardMusic2$ = "Eternamente chame o nome do poeta";
				.@bardMusic3$ = "Minhas canções são sua respiração";
				.@bardMusic4$ = "Minha mente é a sua vontade";
				.@bardMusic5$ = "Todos os poetas são o seu povo";
				.@bardMusic6$ = "E todo o louvor deve ir até ele";
				break;
				default:
				.@bardMusic1$ = "Mais alto, mais alto, mais alto";
				.@bardMusic2$ = "Dê força aos guerreiros!";
				.@bardMusic3$ = "Agite o céu e ruja pela terra";
				.@bardMusic4$ = "Faça meu coração bater denovo!";
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
				"Agora é sua vez, retita a música que acabei de cantar.\n"
				"Uma frase de cada vez.");
			next;
			if (select("Cante novamente","Está bem") == 1) {
				mes("[Lalo]\n"
					"^3377ff"+.@bardMusic1$+"\n"
					+ .@bardMusic2$+"\n"
					+ .@bardMusic3$+"\n"
					+ .@bardMusic4$+"\n"
					+ .@bardMusic5$+"\n"
					+ .@bardMusic6$+"^000000");
				next;
				mes("[Lalo]\n"
					"Agora é sua vez, retita a música que acabei de cantar.\n"
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
					"Você errou na letra.\n"
					"É feio errar a letras das canções\n"
					"Mais atenção na próxima vez");
				close2; cutin("",255); end;
			} else {
				cutin("job_bard_aiolo01",2);
				mes("[Lalo]\n"
					"..........");
				next;
				mes("[Lalo]\n"
					"Maravilhoso!\n"
					"Você pode se tornar um ótimo Bardo.");
				next;
				mes("[Lalo]\n"
					"Mmm... Então você se tornará um Bardo.\n"
					"Mas eu quero te dar um souvenir...");
				next;
				mes("[Lalo]\n"
					"Hmm... muito bem, traga alguns troncos.\n"
					"Não importa qual o tipo, desde que sejam 60 do mesmo tipo...");
				next;
				mes("[Lalo]\n"
					"Vou te dar um presente, uma vez que trazê-los.\n"
					"Tenha uma boa viagem.");
				bardq = 14;
				changequest(3003,3004);
				close2; cutin("",255); end;
			}
		} else if (bardq == 14) {
			cutin("job_bard_aiolo02",2);
			mes("[Lalo]");
			if ((countitem(Wooden_Block) < 60) && (countitem(Tree_Of_Archer_1) < 60) && (countitem(Tree_Of_Archer_2) < 60) && (countitem(Tree_Of_Archer_3) < 60)) {
				mes("Mmm? Parece que você não preparou todos os troncos ainda?\n"
					"Traga 60 troncos de qualquer tipo.");
				close2; cutin("",255); end;
			} else {
				if (SkillPoint) {
					mes("Bom trabalho.\n"
						"Mas você ainda tem pontos de habilidades sobrando.\n"
						"Gaste todos pontos, e depois retorne");
					close2; cutin("",255); end;
				} else {
					mes("Bom trabalho.\n"
						"Farei seu souvenir de mudança de classe com isso.\n"
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
						"Espero que você cante boas músicas agradáveis.\n"
						"Viva como o vento e as nuvens!");
					next;
					mes("[Lalo]\n"
						"Te vejo na próxima vez!");
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
				"Você não irá se esquecer de espalhar as notícias pelas cidades?\n"
				"E não se esqueça de também aprender novas canções...");
			next;
			mes("[Lalo]\n"
				"Nunca se esqueça de ter uma atitude positiva e de continuar alegre.\n"
				"Nossas músicas são feitas para alegrar as pessoas.");
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
			"Você ganhou um presente do Papai Noel?!\n"
			"Ha ha, você deve estar muito animado!");
		next;
		mes("[Duffle]\n"
			"Ei, você sabia que aqui em Lutie nós temos outra atração tão famosa quanto o Papai Noel?");
		next;
		mes("[Duffle]\n"
			"É o ^3355FFBoneco de Neve^000000, o homem de neve falante!");
		next;
		mes("[Duffle]\n"
			"Antes de ir embora, você realmente deve procurar Boneco de Neve.\n"
			"Ele é muito legal, e é divertido conversar com ele.");
		next;
		mes("[Duffle]\n"
			"Então...\n"
			"Feliz Natal!!");
		bardq = 4;
		close;
	} else if (bardq > 3) {
		mes("[Duffle]\n"
			"Você já conversou com o homem de neve daqui?\n"
			"Aquele que é bem solitário...");
		next;
		mes("[Duffle]\n"
			"Mas ele tem um coração enorme.!\n"
			"De vez em quando vou conversar com ele.\n"
			"Por alguma razão, ele consegue falar como nós!");
		next;
		mes("[Duffle]\n"
			"Quando eu converso com ele, eu me pergunto como ele ficou assim.\n"
			"Se você falar com ele, acho que vai se perguntar a mesma coisa.");
		next;
		mes("[Duffle]\n"
			"Como ele foi criado e como ele consegue pensar e falar como um humano é um mistério...");
		next;
		mes("[Duffle]\n"
			"De onde ele veio, e que tipo de lugar seria?\n"
			"E como ele chegou em Lutie sem poder andar...?");
		next;
		mes("[Duffle]\n"
			"Ultimamente, mais pessoas estão vindo aqui para conhecer o Boneco de Neve.");
		next;
		mes("[Duffle]\n"
			"Acho que você deveria falar com os outros moradores de Lutie para aprender mais sobre a história do Boneco de Neve...");
		close;
	} else {
		mes("[Duffle]\n"
			"Oh...!\n"
			"Não se esqueça de visitar o verdadeiro Papai Noel!\n"
			"Ele mora aqui em Lutie!");
		close;
	}
}

// ------------------------------------------------------------------
xmas,134,112,4	script	Boneco de Neve#snownow	4_M_SNOWMAN,{
	cutin("rutie_snownow03.bmp",2);
	mes("[Boneco de Neve]\n"
		"Eu...\n"
		"Me sinto tão sozinho!");
	next;
	mes("[Boneco de Neve]\n"
		"Sempre parado aqui...\n"
		"No mesmo lugar...\n"
		"Dia após dia após dia após dia após dia após dia após dia após dia após dia após dia...");
	next;
	switch (select("^3355FFBoneco de Neve?^000000","Fábrica de Brinquedos?","Acabar a conversa")) {
		case 1:
		if (bardq < 4) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Eu nasci no Norte, num lugar em que nevava o tempo todo.\n"
				"Era muito mais frio do que aqui em Lutie, pode acreditar.");
			next;
			mes("[Boneco de Neve]\n"
				"Fui feito com amor por um humano, e era muito feliz.\n"
				"Minha vida era simples, mas abençoada.");
			next;
			mes("[Boneco de Neve]\n"
				"Pensei que pudesse passar o resto da vida daquele jeito.\n"
				"Mas... não foi assim.");
			next;
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Um dia, uma mulher feia e idosa chegou na cidade.\n"
				"Chamavam-na de 'Merlophechum', e ela vinha de uma cidade estranha em que estava sempre calor.");
			next;
			mes("[Boneco de Neve]\n"
				"Na terceira noite após sua chegada, ela colocou fogo na cidade com uma magia assustadora.\n"
				"Todos correram em meio ao medo e ao caos.\n"
				"E eu desmaiei.");
			next;
			cutin("rutie_snownow02.bmp",2);
			mes("[Boneco de Neve]\n"
				"Não sei quanto tempo se passou, mas quando acordei, estava aqui.\n"
				"Bem, posso dizer que Lutie é como se fosse o céu.");
			next;
			mes("[Boneco de Neve]\n"
				"Ninguém nunca se preocupa, e estou sempre ouvindo canções natalinas e coisas assim.");
			next;
			cutin("rutie_snownow03.bmp",2);
			mes("[Boneco de Neve]\n"
				"Mas ainda assim...\n"
				"As vezes nem a alegria do Natal consegue curar a escura solidão que existe dentro de mim.");
			next;
			mes("[Boneco de Neve]\n"
				"Então, quer ser meu amigo?\n"
				"Se você for, serei seu amigo também.!");
			close2; cutin("",255); end;
		} else if (bardq == 4) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Oh...?\n"
				"Você conheceu Duffle?\n"
				"Ah, de vez em quando ela passa aqui para me dar um oi...");
			next;
			mes("[Boneco de Neve]\n"
				"É estranho que as pessoas de Lutie me chamem de boneco de neve misterioso.\n"
				"Porque por dentro somos todos iguais, não é?");
			next;
			mes("[Boneco de Neve]\n"
				"*Sniff*\n"
				"As ve-vezes, eu também não sei o que sou.\n"
				"Mas as pessoas de Lutie me aceitam de qualquer jeito.");
			next;
			mes("[Boneco de Neve]\n"
				"^3355FFPoze^000000 me deu o cartão dele com seu endereço, e disse para eu ir visitá-lo quando estivesse triste.\n"
				"Fiquei tão feliz ao ouvir isso...");
			next;
			mes("[Boneco de Neve]\n"
				"Mas o destino me pregou outra peça, já que percebi que não tenho pernas para ir visitá-lo.");
			next;
			mes("[Boneco de Neve]\n"
				"Como eu cheguei nessa cidade?\n"
				"E como eu posso falar?!\n"
				"Nã-não é natural, é?\n"
				"Será... será que eu sou um monstro?");
			next;
			mes("^3355FFBoneco de Neve se perde em pensamentos,^000000\n"
				"^3355FFcom os olhos fixos no cartão de Poze.^000000");
			bardq = 5;
			close2; cutin("",255); end;
		} else if (bardq == 5) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"...");
			next;
			mes("^3355FFBoneco de Neve se perde em pensamentos^000000\n"
				"^3355FFcom os olhos fixos no cartão de Poze.^000000");
			close2; cutin("",255); end;
		} else if (bardq == 6) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Ah que legal!\n"
				"Você conheceu Poze!");
			next;
			mes("[Boneco de Neve]\n"
				"Ele é um cara tão honesto e bondoso!\n"
				"Espero que ele e Duffle fiquem juntos algum dia!");
			next;
			mes("[Boneco de Neve]\n"
				"...Ah não.!\n"
				"Eu disse isso em voz alta?\n"
				"Devia ter ficado calado!\n"
				"Me desculpeee!\n"
				"Sou realmente um cabeçudo, né?");
			next;
			mes("[Boneco de Neve]\n"
				"É...\n"
				"Poze está apaixonado pela Duffle.\n"
				"E ela é bondosa com todo mundo, menos com ele.");
			next;
			mes("[Boneco de Neve]\n"
				"Mas eu sei que ela faz isso porque gosta muito dele!\n"
				"Hee hee hee!");
			close2; cutin("",255); end;
		} else if (bardq == 7) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Oh...?\n"
				"Você conheceu o\n"
				"^3355FFCantata, o Tio Cabeludo^000000?");
			next;
			cutin("rutie_snownow02.bmp",2);
			mes("[Boneco de Neve]\n"
				"Bem, ele fala muito alto, não toma banho e cheira que nem comida podre.\n"
				"Mas ele é muito legal e bondoso.\n"
				"Todos adoram ele!");
			next;
			mes("[Boneco de Neve]\n"
				"E ele adora beber coisas estranhas.\n"
				"É um milagre que não passe mal. Hee hee.! Ah, eu amo aquele cara!");
			close2; cutin("",255); end;
		} else if (bardq == 8) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Oh...?\n"
				"Você conheceu a ^3355FFTia Mima^000000?");
			next;
			mes("[Boneco de Neve]\n"
				"Bem, ela adora vegetais mesmo.\n"
				"Você poderia entregar isso para ela? Estive guardando nos últimos tempos.");
			next;
			mes("^3355FFBoneco de Neve te dá O Melhor Sal do Mundo^000000.");
			next;
			mes("[Boneco de Neve]\n"
				"Adoro a comida dela, é deliciosa!\n"
				"Ela me traz suco de uva com flocos de neve.\n"
				"Bem, por favor entregue para ela, amigo.!");
			bardq = 9;
			close2; cutin("",255); end;
		} else if (bardq == 9) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"'^3355FFUm item para colher vegetais^000000...'\n"
				"Uau. A Tia Mima adora vegetais, então ela gostaria disso!");
			close2;
			cutin("",255);
			end;
		} else if (bardq == 10) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Hashokii, o palhaço sem-graça?\n"
				"Ele não parece muito engraçado mesmo.\n"
				"Mas ele se importa muito com as outras pessoas.");
			next;
			mes("[Boneco de Neve]\n"
				"Ele faz de tudo para que aqueles órfãos dêem risada e esqueçam os problemas...");
			close2; cutin("",255); end;
		} else if (bardq == 11) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Ah...\n"
				"Então você conheceu o Charu Charu?\n"
				"Aquele menino é muito otimista e sempre olha para o futuro.\n"
				"Aposto que vai se dar muito bem quando crescer!");
			next;
			mes("[Boneco de Neve]\n"
				"Aliás, tenho certeza!\n"
				"Hee hee hee.!");
			close2; cutin("",255); end;
		} else if (bardq == 12) {
			cutin("rutie_snownow01.bmp",2);
			mes("[Boneco de Neve]\n"
				"Muito obrigado por me ouvir por tanto tempo.\n"
				"Gostei muito que você tentou me entender, mesmo sendo um estranho.");
			next;
			mes("[Boneco de Neve]\n"
				"Agora você me conhece melhor que muita gente nessa cidade.\n"
				"Eu gostaria de te dar um presentinho!");
			next;
			mes("[Boneco de Neve]\n"
				"Tah dah!\n"
				"Escolha o que você quiser daqui!");
			next;
			mes("[Boneco de Neve]\n"
				"^3355FFVocê sorteia um presente de dentro da bolsa mágica de Boneco de Neve^000000.");
			next;
			switch (rand(8)) {
				case 1:
				getitem(Candy,5);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Wow.!\n"
					"^3355FF5 Balas^000000!\n"
					"Parabéns!");
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
					"Wow, Isso é perfeito!\n"
					"^3355FF10 Bengalas Doce^000000!");
				break;
				case 5:
				getitem(Piece_Of_Cake,1);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Wow, Isso é perfeito!\n"
					"^3355FF1 Pedaços de Bolo^000000!");
				break;
				case 6:
				getitem(Piece_Of_Cake,2);
				cutin("rutie_snownow02.bmp",2);
				mes("[Boneco de Neve]\n"
					"Wow, Isso é perfeito!\n"
					"^3355FF2 Pedaços de Bolo^000000!");
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
			"Em volta dessa cidade maravilhosa, abençoada pelo Natal, tem uma fábrica horrível, amaldiçoada pelo Natal.");
		next;
		mes("[Boneco de Neve]\n"
			"Ouvi dizer que é bem decorada e parece uma fábrica de brinquedos, onde tudo é bonitinho.\n"
			"Tem soldadinhos de brinquedos e caixas de presente por todos os lados.");
		next;
		cutin("rutie_snownow02.bmp",2);
		mes("[Boneco de Neve]\n"
			"Isso não é muuito legal?!\n"
			"*Suspiro*\n"
			"Mesmo sabendo que é uma dungeon, gostaria de ir lá dar uma olhada.\n"
			"Se eu fosse um menino de verdade, ou se ao menos tivesse pernas...");
		close2; cutin("",255); end;
		case 3:
		cutin("rutie_snownow03.bmp",2);
		mes("[Boneco de Neve]\n"
			"Até mais, amigo.!\n"
			"Obrigado por me ouvir.\n"
			"Espero te ver novamente!\n"
			"Você sempre estará no meu coração!");
		close2; cutin("",255); end;
	}
}

// ------------------------------------------------------------------
xmas,117,304,4	script	Poze#bardq	4_M_06,{
	if (bardq == 5) {
		mes("[Poze]\n"
			"Você foi falar com ^3355FFBoneco de Neve^000000 e ele mencionou o meu nome?");
		next;
		mes("[Poze]\n"
			"Entendo...\n"
			"Ele é um boneco de neve que não tem pernas.\n"
			"Não me surpreende que nunca tenha vindo me visitar.\n"
			"Que vergonha!\n"
			"Eu que deveria ir visitá-lo.");
		next;
		mes("[Poze]\n"
			"Ah, lembrei de alguém que sabe como Boneco de Neve começou a falar.\n"
			"É o ^3355FFCantata, o Tio Cabeludo^000000...");
		next;
		mes("[Poze]\n"
			"Um dia, o aprendiz de um grande Alquimista veio visitar Lutie, e eu ouvi uma conversa dele com o Tio Cabeludo.");
		next;
		mes("[Poze]\n"
			"Muito tempo atrás, um poderoso Alquimista chegou na terra natal de Boneco de Neve, e encontrou-o morrendo, derretendo e virando água.\n"
			"Mas Boneco de Neve foi reanimado pelo Alquimista.");
		next;
		mes("[Poze]\n"
			"E isso é tudo que sei.\n"
			"Para saber detalhes, converse com o ^3355FFTio Cabeludo Cantata.^000000.");
		bardq = 6;
		close;
	} else {
		mes("[Poze]\n"
			"Bem vindo a Lutie, a cidade que abençoa os visitantes com o espírito de Natal!\n"
			"Feliz Natal!");
		next;
		mes("[Poze]\n"
			"Aqui nessa terra mágica você pode aproveitar o espírito de Natal durante o ano todo.!\n"
			"Não é maravilhoso?");
		next;
		mes("[Poze]\n"
			"Lutie não é apenas um lugar turístico.\n"
			"Temos lojas e tudo que as outras cidades tem, mas em um ambiente festivo.");
		next;
		mes("[Poze]\n"
			"Então se você quiser passar um tempo aqui não vai se arrepender.\n"
			"Feliz Natal.");
		close;
	}
}

// ------------------------------------------------------------------
xmas,176,236,4	script	Hairy#bardq	4_M_05,{
	if (bardq == 6) {
		if (countitem(Chinese_Ink) && countitem(Sticky_Mucus)) {
			mes("[Hairy]\n"
				"Oh? Vo-você trouxe os ingredientes?\n"
				"Óóóótimo.\n"
				"Faz tanto tempo que não provo disso...\n"
				"Dê-dê para mim!");
			next;
			delitem(Chinese_Ink,1);
			delitem(Sticky_Mucus,1);
			bardq = 7;
			mes("^3355FFVocê rapidamente dá a ele o Tinta de Polvo e o Muco Pegajoso,\n"
				"E olha com um pouco de nojo enquanto ele saboreia o drinque.^000000");
			next;
			mes("[Hairy]\n"
				"*Burrrrpppp.*\n"
				"Bem, é hora da história.\n"
				"Lembre-se que é tudo que sei.\n"
				"Não sei quanto você já ouviu...");
			next;
			mes("[Hairy]\n"
				"Muito tempo atrás, havia um poderoso Alquimista vivendo no Norte.\n"
				"Seu nome era ^3355FFPhilip Varsez^000000!");
			next;
			mes("[Hairy]\n"
				"Ele era um pioneiro em pesquisas sobre Alquimia, e precisava de materiais raros para seus estudos.\n"
				"Por isso, viajava o mundo atrás de materiais que continham energia mágica...");
			next;
			mes("[Hairy]\n"
				"Um dia, suas viagens levaram-no para um vilarejo no Norte, conhecido por seu tempo frio.\n"
				"Mas ao chegar lá, ele se deparou com uma cidade destruída.");
			next;
			mes("[Hairy]\n"
				"Era uma visão terrível:\n"
				"As pessoas jaziam na calçada, moribundas.\n"
				"Quando viam Varsez, imploravam para que ele os matasse e acabasse com a agonia.");
			next;
			mes("[Hairy]\n"
				"Entre os gritos de desespero, o choro de duas crianças chegou aos ouvidos de Philip Varsez.\n"
				"Ele correu e achou dois bebês agarrados em um boneco de neve que se derretia.");
			next;
			mes("[Hairy]\n"
				"Aquele boneco de neve...\n"
				"Era ^3355FFBoneco de Neve^000000.");
			next;
			mes("[Hairy]\n"
				"Sendo o poderoso Alquimista que era, Varsez percebeu que Boneco de Neve se sacrificara para proteger os bebês do desastre que caíra sobre o vilarejo.");
			next;
			mes("[Hairy]\n"
				"Varsez ficou emocionado e decidiu salvar a vida do boneco com seus poderes.\n"
				"E o trouxe para Lutie, o lugar mais seguro do mundo.");
			next;
			mes("[Hairy]\n"
				"Claro, também existem rumores de que Boneco de Neve pôde sobreviver não só pela piedade do Alquimista.\n"
				"Mas também pela neve com a qual era feito.");
			next;
			mes("[Hairy]\n"
				"Acredita-se que a neve que formou Boneco de Neve cobria um campo misterioso, supostamente cheio de flores mágicas.");
			next;
			mes("[Hairy]\n"
				"Muhahaha.\n"
				"Bem, isso é tudo que sei.\n"
				"Espero que você tenha gostado da minha história!");
			next;
			mes("[Hairy]\n"
				"Bem...\n"
				"Agora que penso nisso...");
			next;
			mes("[Hairy]\n"
				"Boneco de Neve não só fala, mas também tem um estoque inacabável de presentes de Natal.\n"
				"Pelo menos foi o que me disseram.");
			next;
			mes("[Hairy]\n"
				"^3355FFMima^000000, a mulher dos vegetais, sabe mais sobre isso.\n"
				"Você devia ir falar com ela.\n"
				"Feliz Natal!");
			close;
		} else {
			mes("Humm... Foi Poze quem falou sobre mim?\n"
				"He he he! Sei sim sobre Boneco de Neve.\n"
				"Pode me considerar com o ponto fraco dele, já que...");
			next;
			mes("[Hairy]\n"
				"Eu sei\n"
				"o segredo do\n"
				"^3355FFnascimento de Boneco de Neve^000000!!");
			next;
			mes("[Hairy]\n"
				"Está curioso?\n"
				"Heh heh heh.\n"
				"Bom, não vou te contar sem ganhar nada em troca.");
			next;
			mes("[Hairy]\n"
				"O ruim de morar nessa cidade é que não tenho nenhuma chance de tomar um drinque de verdade.\n"
				"Vejamos, me traga...");
			next;
			mes("[Hairy]\n"
				"^3355FF1 Tinta de Polvo e 1 Muco Pegajoso^000000!");
			next;
			mes("[Hairy]\n"
				"Wahhahaha!\n"
				"Por que está me olhando assim?!\n"
				"Meu gosto não é da sua conta! Ao trabalho.!");
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
			"Tenha cuidado para não pegar a Gripe de Lutie.\n"
			"...");
		next;
		mes("[Hairy]\n"
			"*Suspiro*\n"
			"Isso me lembra...\n"
			"Meu filho pegou uma Gripe de Lutie muito forte um tempo atrás.");
		next;
		mes("[Hairy]\n"
			"Foi durante a noite, eu não tinha onde buscar remédios e parecia que não havia o que fazer.");
		next;
		mes("[Hairy]\n"
			"Achei que o mínimo que poderia fazer por ele era pegar algo frio para tentar abaixar sua febre.\n"
			"Mas a neve de Lutie derretia assim que tocava em sua testa.\n"
			"Ele estava queimando em febre e eu não conseguia aliviá-lo.");
		next;
		mes("[Hairy]\n"
			"E foi aí que eu soube que precisaria de gelo mágico.");
		next;
		mes("[Hairy]\n"
			"Acabei chegando na Dungeon Natalina e lá encontrei, graças a Deus, uma criatura inteira de gelo!");
		next;
		mes("[Hairy]\n"
			"Era um ^3355FFPoring de Gelo^000000!\n"
			"Os habitantes locais chamam-no de 'Icepantzering.'\n"
			"De qualquer modo, salvei a vida do meu filho com isso.\n"
			"Agradeço até hoje por ter encontrado algo assim nessa cidade.");
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
			"Hmm? Aquele cabeludo falou bem de mim, não é?\n"
			"Bem...");
		next;
		mes("[Mima]\n"
			"Eu sei o que ele quer...\n"
			"Ho ho ho.!\n"
			"Ele quer me deixar feliz para que eu dê a ele vegetais de graça!\n"
			"Ah bem.!");
		next;
		mes("[Mima]\n"
			"Ele me conhece bem. Sempre acaba ganhando vegetais de graça.\n"
			"Sim, porque os meus são os melhores da cidade!");
		next;
		mes("[Mima]\n"
			"Hmmm.?\n"
			"Você quer saber sobre ^3355FFBoneco de Neve^000000?\n"
			"Ah. Sim, sim, entendo...");
		next;
		mes("[Mima]\n"
			"Bem, não posso deixar qualquer um saber sobre alguém tão importante quanto Boneco de Neve.\n"
			"Hmmm...");
		next;
		mes("[Mima]\n"
			"Boneco de Neve está guardando ^3355FFO Melhor Sal do Mundo^000000 para mim.\n"
			"É algo muito importante, que eu uso para temperar vegetais.");
		next;
		mes("[Mima]\n"
			"Se você realmente for amigo do Boneco de Neve, ele confiará em você para me devolver.\n"
			"E de qualquer forma, eu preciso do Sal de volta.");
		next;
		mes("[Mima]\n"
			"Agora seja um bom menino e se apresse.\n"
			"Volte rápido.");
		bardq = 8;
		close;
	} else if (bardq == 9) {
		mes("[Mima]\n"
			"Hohohohoh hohohohoho !\n"
			"Vejamos, vejamos...\n"
			"Obrigada, querido, obrigada.");
		next;
		mes("^3355FFVocê devolveu a ela\n"
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
			"Ah é, quase esqueci a minha promessa.\n"
			"Você quer saber sobre o dom mágico de Boneco de Neve, não é?");
		next;
		mes("[Mima]\n"
			"Se você ja falou com o Tio Cantata.;\n"
			"Sabe que Boneco de Neve foi feito com uma neve misteriosa, que cobria um campo de flores mágicas.");
		next;
		mes("[Mima]\n"
			"Posso te dizer que quando Boneco de Neve foi revivido.\n"
			"Houve uma reação entre os materiais do Alquimista e a energia contida na neve de Boneco de Neve.");
		next;
		mes("[Mima]\n"
			"Por alguma razão, Boneco de Neve tem uma Caixa de Presentes que cria quantos presentes ele quiser.\n"
			"Como se fosse o Papai Noel.");
		next;
		mes("[Mima]\n"
			"Claro, se esse poder caísse nas mãos do mal, teríamos problemas.");
		next;
		mes("[Mima]\n"
			"Mas todo mundo sabe que Boneco de Neve é bondoso e carinhoso com os outros.\n"
			"Então nunca nos preocupamos com isso.");
		next;
		mes("[Mima]\n"
			"Ah, e eu ouvi notícias incríveis.\n"
			"Quem me contou foi ^3355FFHashokii^000000 o palhaço.\n"
			"É uma história muito interessante.\n"
			"Você deveria ir falar com ele.");
		bardq = 10;
		close;
	} else {
		mes("[Mima]\n"
			"Feliz Natal.\n"
			"Ho! Ho! Ho!");
		next;
		mes("[Mima]\n"
			"Sinto o espírito de Natal em todo lugar!\n"
			"Até nos olhos dos jovens viajantes que vêm até Lutie.\n"
			"Hoho, desejo a você um Natal muito feliz!");
		close;
	}
}

// ------------------------------------------------------------------
xmas,146,136,4	script	Hashokii#bardq	4_M_PIERROT,{
	if (bardq == 10) {
		mes("[Hashokii]\n"
			"Sabe os bebês que Boneco de Neve salvou?\n"
			"Acho que Charu Charu e Marcell não sabem disso.");
		next;
		mes("[Hashokii]\n"
			"Boneco de Neve me contou como ele tentou bloquear a enorme bola de fogo que iria cair nos bebês.\n"
			"Ele estava disposto a se sacrificar por eles.");
		next;
		mes("[Hashokii]\n"
			"Por que você não procura as crianças?\n"
			"Eles talvez te contem a história completa.\n"
			"Boa sorte.!");
		bardq = 11;
		close;
	} else {
		mes("[Hashokii]\n"
			"Feellliiizz Natal.!\n"
			"La La La.!\n"
			"Dum di Dum di Dum!");
		next;
		switch (select("E aí cara, beleza?","Sobre Boneco de Neve","Cancelar")) {
			case 1:
			mes("[Hashokii]\n"
				"La La La.!\n"
				"Dum di Dum di Dum!\n"
				"Ooh, estou pensando em um show para animar o Charu Charu e a Marcell!");
			close;
			case 2:
			mes("[Hashokii]\n"
				"Ah... ^3355FFBoneco de Neve^000000?\n"
				"Claro que conheço ele!\n"
				"Qualquer um que não conheça com certeza não mora aqui!\n"
				"De vez em quando vou lá conversar com ele...");
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
			"Charu Charu e eu somos órfãos, e não lembro dos nossos pais.\n"
			"Fomos criados pelo povo de Lutie.");
		next;
		mes("[Marcell]\n"
			"O Tio Cantata e a Tia Mima nos tratam como filhos, e Poze e Duffle são como nossos irmãos!");
		next;
		mes("[Marcell]\n"
			"Eles são bons e generosos, e nós agradecemos muito tudo o que fazem para cuidar de nós!");
		next;
		mes("[Marcell]\n"
			"Ouvi dizer que Boneco de Neve também não tem pais.\n"
			"E também ouvi que ele não nasceu aqui.");
		next;
		mes("[Marcell]\n"
			"Ouvi dizer que Boneco de Neve e nós somos do mesmo lugar, mas não tenho certeza.\n"
			"Mas sei que Boneco de Neve e eu temos o mesmo tipo de queimaduras no corpo.");
		next;
		mes("[Marcell]\n"
			"Charu Charu e eu temos queimaduras nas costas, e Boneco de Neve também tem uma bem grande.\n"
			"Acho que o que foi que fez isso, fez em nós três de uma vez...");
		next;
		mes("[Marcell]\n"
			"Hum, deixa eu ver...\n"
			"Você quer saber tudo sobre Boneco de Neve porque quer ser amigo dele!\n"
			"Ah, ele vai ficar tão feliz quando souber disso! Talvez até te dê um presente! Boa sorte!");
		bardq = 12;
		close;
	} else if (bardq == 13) {
		mes("[Marcell]\n"
			"Você sabe mais sobre Boneco de Neve do que qualquer outro!\n"
			"Vá falar com ele, ele vai ficar feliz de ver que você se importa com ele.\n"
			"Feliz Natal!");
		close;
	} else {
		mes("[Marcell]\n"
			"Estou congelando aqui...!\n"
			"E Charu Charu me deixa com mais frio ainda com essas piadas ridículas.\n"
			"E o vento está tão forte!");
		next;
		mes("[Marcell]\n"
			"Sabe de uma coisa? Boneco de Neve tem um poder especial.\n"
			"Ele pode fazer tantos presentes quanto o Papai Noel! Isso não é ótimo?");
		next;
		mes("[Marcell]\n"
			"Huh? Por que está me olhando assim?\n"
			"Boneco de Neve tem uma grande caixa de presentes e distribui lembranças quando quer.\n"
			"Não é difícil acreditar nisso!");
		close;
	}
}
