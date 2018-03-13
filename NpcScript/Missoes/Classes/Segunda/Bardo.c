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
| - Copyright: Spell Master (15/09/2017)                            |
| - Info: Quest de Mudança de Classe para Bardo.                    |
\*-----------------------------------------------------------------*/

comodo,226,123,5	script	Bardo Andarilho#bardq	2_M_BARD_ORIENT,{
	if (BaseJob == Job_Archer && Sex == SEX_MALE) {
		if (!bardq) {
			cutin ("job_bard_aiolo01",2);
			mes "[Lalo]";
			mes "Oi! Encantador Arqueiro.";
			mes "Como um andarilho como eu pode te ajudar?";
			next;
			switch(select("Você tem uma voz agradável","Você pode cantar um pouco?","Em nada")) {
				case 1:
				mes "[Lalo]";
				mes "Hahaha! É claro!";
				mes "Se você canta com o coração feliz, a sua voz sempre fica melhor.";
				next;
				mes "[Lalo]";
				mes "Mas, para os Bardos a voz é sua vida.";
				mes "Porém, em alguns momentos é necessário se ter cuidado com sua voz.";
				close2; cutin ("",255); end;
				case 2:
				mes "[Lalo]";
				mes "Uma canção... vejamos.";
				mes "Ok, eu tenho...";
				next;
				mes "[Lalo]";
				mes "Irei cantar...";
				mes "Tambores de Guerra.";
				mes "*ehem...*cough...gag..mememememe...";
				mes "1, 2, 3, 4...";
				next;
				mes "^000088O som de cavalos galopando sobre o horizonte a poeira que cobre o sol distante.";
				mes "Enquanto milhares de olhos se abrem no luar do céu, o castelo irá se destruir com o poder^000000";
				next;
				mes "^000088Eu posso ouvir.. as batidas do meu coração.";
				mes "Eu posso sentir.. o sangue correndo pelas minhas veias.";
				mes ".. e o peso da minha armadura.";
				mes "Posso ver.. meus inimigos.^000000";
				next;
				mes "^000088Mais alto, mais alto mais alto..";
				mes "Dê força aos guerreiros!";
				mes "Superior, superior, superior..";
				mes "Esse dia nunca voltará!^000000";
				next;
				mes "^000088Agite o céu e balance a terra.";
				mes "Faça meu coração bater novamente!";
				mes "Ouça o som das trombetas, e as as muralhas do castelo tremem.";
				mes "Esse momento nunca mais voltará!^000000";
				next;
				mes "[Lalo]";
				mes "Hmm... essa é sempre uma boa canção para cantar.";
				mes "O que achou?";
				mes "Não é uma música agradável?";
				next;
				if (select("Sim, é muito boa","Não, realmente não mesmo...") == 1) {
					mes "[Lalo]";
					mes "Seria bom se mais pessoas a cantassem...";
					mes "Bem, é tudo... hmmhmm.";
					if (JobLevel > 39) {
						bardq = 1;
						setquest (3000);
					}
					close2; cutin ("",255); end;
				} else {
					mes "[Lalo]";
					mes "Hmm... Eu perdi meus sentidos, terei que me esforçar mais.";
					mes "De qualquer forma...";
					mes "Obrigado pela atenção.";
					close2; cutin ("",255); end;
				}
				case 3:
				cutin ("job_bard_aiolo02",2);
				mes "[Lalo]";
				mes "Nossa, não pedir uma música quando se encontra um Bardo é falta de educação.";
				mes "Bem... Não posso ajudá-lo enquanto você parecer que está com pressa.";
				next;
				mes "[Lalo]";
				mes "A caça é algo bom... Mas você não pode esquecer de relaxar de vez em quando.";
				mes "A juventude é curta e não volta..";
				close2; cutin ("",255); end;
			}
		} else if (bardq == 1) {
			cutin ("job_bard_aiolo01",2);
			mes "[Lalo]";
			mes "Olá novamente arqueiro";
			mes "Quer ouvir outra canção?";
			next;
			if (select("Como posso ser um bardo?","Deixa para outra hora") == 1) {
				mes "[Lalo]";
				mes "Ah sim, você também quer aprender canções.";
				mes "Eu irei ajudá-lo então para se tornar um Bardo.";
				next;
				mes "[Lalo]";
				mes "Mas antes disso... você pode me trazer uma Flor?";
				mes "Eu preciso sentir o cheiro de uma flor para ver como será o ensino.";
				next;
				mes "[Lalo]";
				mes "O tipo de flor não importa, mas tente trazer uma que eu goste.";
				mes "E não compre qualquer flor barata, certo?";
				bardq = 2;
				changequest (3000,3001);
				close2; cutin ("",255); end;
			} else {
				mes "[Lalo]";
				mes "Hmm... Eu não tenho certeza do que você será, mas aproveite a vida.";
				mes "Você parece muito tenso.";
				next;
				mes "[Lalo]";
				mes "Bem então, tenha um bom dia.";
				close2; cutin ("",255); end;
			}
		} else if (bardq == 2) {
			cutin ("job_bard_aiolo01",2);
			mes "[Lalo]";
			mes "Bem-Vindo!";
			mes "Amigo arqueiro.";
			mes "Trouxe uma flor?";
			mes "Deixe-me ver...";
			next;
			if (countitem(Singing_Flower)) {
				delitem (Singing_Flower,1);
				mes "[Lalo]";
				mes "Ooh! Isto é uma Flor Cantante!";
				mes "Ela me traz muitas lembranças...";
				next;
				mes "[Lalo]";
				mes "Meu amigo Tchaikovsky gosta muito delas.";
				mes "Me pergunto o que ele está fazendo agora...";
				next;
			} else if(countitem(Hinalle)) {
				delitem (Hinalle,1);
				mes "[Lalo]";
				mes "Aah... uma linda Hinalle...";
				mes "Ela não tem cheiro, mas é uma linda flor.";
				next;
				mes "[Lalo]";
				mes "As folhas me dão força quando eu costumo cair.";
				mes "Eu realmente gosto dessa flor, obrigado.";
				next;
			} else if(countitem(Aloe)) {
				delitem (Aloe,1);
				mes "[Lalo]";
				mes "Aloe... É uma flor rara.";
				mes "Como você a conseguiu?";
				mes "Você é um perito?";
				next;
				mes "[Lalo]";
				mes "As folhas são boas e a Aloe Vera é deliciosa...";
				mes "e ela é definitivamente a mais bela das flores.";
				next;
			} else if(countitem(Ment)) {
				delitem (Ment,1);
				mes "[Lalo]";
				mes "Menta... Você pode esquecer todos os seus problemas com uma dessas.";
				mes "É ótimo ver uma depois de tanto tempo!";
				next;
				mes "[Lalo]";
				mes "Ouvi dizer que é possível fazer Analgésicos com ela...";
				mes "Mas pode ser apenas um boato..";
				mes "Obrigado!";
				next;
			} else if(countitem(Izidor)) {
				delitem (Izidor,1);
				mes "Nossa, é uma Izidor?";
				mes "É uma perigosa e bela flor...";
				next;
				mes "[Lalo]";
				mes "Possui os profundos encantos de uma pessoa.. ";
				mes "Obrigado, eu gosto muito dessa flor.";
				next;
			} else if(countitem(Witherless_Rose)) {
				delitem (Witherless_Rose,1);
				mes "[Lalo]";
				mes "Uma Rosa Eterna.";
				mes "A flor forte, que não murcha.";
				mes "Ótimo presente para sua namorada.";
				next;
				mes "[Lalo]";
				mes "Eu me pergunto se é permitido que um andarilho como eu tenha uma dessas.";
				next;
			} else if(countitem(Frozen_Rose)) {
				delitem (Frozen_Rose,1);
				mes "[Lalo]";
				mes "Rosa de Gelo...";
				mes "Você não pode chamar isso de flor, porém ainda sim é linda...";
				next;
				mes "[Lalo]";
				mes "Ela não possui mais seu aroma.";
				mes "Estou muito contente, pois é uma flor diferente.";
				next;
			} else if(countitem(Illusion_Flower)) {
				delitem (Illusion_Flower,1);
				mes "[Lalo]";
				mes "Ah, isso não é uma Flor das Ilusões!?";
				mes "Uau, como você conseguiu essa flor rara!!";
				next;
				mes "[Lalo]";
				mes "Muito obrigado, aah...";
				mes "Me sinto como se o céu estivesse na frente dos meus olhos.";
				mes "Que sensação maravilhosa!";
				mes "Estou muito feliz.";
				next;
			} else {
				cutin ("job_bard_aiolo02",2);
				mes "[Lalo]";
				mes "Hmm? O quê...";
				mes "Você não trouxe nada.";
				mes "Eu não te pedi para me trazer uma flor expecial?";
				next;
				mes "[Lalo]";
				mes "Bem... se você quer aprender sozinho, então que assim seja.";
				mes "Qualquer pessoa pode simplesmente sair e cantar.";
				close2; cutin ("",255); end;
			}
			mes "[Lalo]";
			mes "Como eu prometi, irei ajudá-lo a se tornar um Bardo.";
			mes "Mas não é fácil meu amigo.";
			next;
			mes "[Lalo]";
			mes "É importante conhecer um monte de gente para aprender a cantar.";
			mes "Você também deve se manter atualizado do que está acontecendo nos diferentes vilarejos...";
			next;
			mes "[Lalo]";
			mes "Há um boneco de neve em uma cidade chamada Lutie.";
			mes "Vá até lá e faça amizade com ele.";
			next;
			bardq = 3;
			changequest (3001,3002);
			next;
			mes "[Lalo]";
			mes "Se você se tornar amigo do ^008800Boneco de Neve^000000, você irá receber algo.";
			mes "E também fale com as pessoas da cidade enquanto estiver lá...";
			close2; cutin ("",255); end;
		} else if (bardq < 13) {
			cutin ("job_bard_aiolo01",2);
			mes "[Lalo]";
			mes "É, você ainda não se tornou amigo do boneco de neve em Lutie?";
			mes "Falar comigo não te ajudará.";
			next;
			mes "[Lalo]";
			mes "Se você se tornar amigo do ^008800Boneco de Neve^000000, você irá receber algo.";
			mes "E também fale com as pessoas da cidade enquanto estiver lá...";
			close2; cutin ("",255); end;
		} else if (bardq == 13) {
			cutin "job_bard_aiolo01",2;
			mes "[Lalo]";
			mes "Então, você quer tentar cantar...?";
			mes "Irei cantar uma curta melodia...";
			mes "E você tenta depois.";
			next;
			mes "[Lalo]";
			mes "Aqui vou eu.";
			mes "Aham *limpa a garganta*";
			mes "1, 2, 3, 4";
			if (questprogress(3002)) {
				changequest (3002,3003);
			}
			next;
			switch(rand(4)) {
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
			mes "[Lalo]";
			mes "^3377ff"+.@bardMusic1$;
			mes .@bardMusic2$;
			mes .@bardMusic3$;
			mes .@bardMusic4$;
			mes .@bardMusic5$;
			mes .@bardMusic6$+"^000000";
			next;
			mes "[Lalo]";
			mes "Agora é sua vez, retita a música que acabei de cantar.";
			mes "Uma frase de cada vez.";
			next;
			if (select("Cante novamente","Está bem") == 1) {
				mes "[Lalo]";
				mes "^3377ff"+.@bardMusic1$;
				mes .@bardMusic2$;
				mes .@bardMusic3$;
				mes .@bardMusic4$;
				mes .@bardMusic5$;
				mes .@bardMusic6$+"^000000";
				next;
				mes "[Lalo]";
				mes "Agora é sua vez, retita a música que acabei de cantar.";
				mes "Uma frase de cada vez.";
				next;
			}
			mes "["+strcharinfo(PC_NAME)+"]";
			input (.@playerMusic1$);
			if (.@playerMusic1$ != .@bardMusic1$) {
				.@musicError = 1;
				mes "^ff0000"+.@playerMusic1$+"^000000";
			} else {
				mes "^3377ff"+.@playerMusic1$+"^000000";
			}
			input (.@playerMusic2$);
			if (.@playerMusic2$ != .@bardMusic2$) {
				.@musicError = 1;
				mes "^ff0000"+.@playerMusic2$+"^000000";
			} else {
				mes "^3377ff"+.@playerMusic2$+"^000000";
			}
			input (.@playerMusic3$);
			if (.@playerMusic3$ != .@bardMusic3$) {
				.@musicError = 1;
				mes "^ff0000"+.@playerMusic3$+"^000000";
			} else {
				mes "^3377ff"+.@playerMusic3$+"^000000";
			}
			input (.@playerMusic4$);
			if (.@playerMusic4$ != .@bardMusic4$) {
				.@musicError = 1;
				mes "^ff0000"+.@playerMusic4$+"^000000";
			} else {
				mes "^3377ff"+.@playerMusic4$+"^000000";
			}
			input (.@playerMusic5$);
			if (.@playerMusic5$ != .@bardMusic5$) {
				.@musicError = 1;
				mes "^ff0000"+.@playerMusic5$+"^000000";
			} else {
				mes "^3377ff"+.@playerMusic5$+"^000000";
			}
			input (.@playerMusic6$);
			if (.@playerMusic6$ != .@bardMusic6$) {
				.@musicError = 1;
				mes "^ff0000"+.@playerMusic6$+"^000000";
			} else {
				mes "^3377ff"+.@playerMusic6$+"^000000";
			}
			next;
			if (.@musicError) {
				cutin ("job_bard_aiolo02",2);
				mes "[Lalo]";
				mes "Você errou na letra.";
				mes "É feio errar a letras das canções";
				mes "Mais atenção na próxima vez";
				close2; cutin ("",255); end;
			} else {
				cutin ("job_bard_aiolo01",2);
				mes "[Lalo]";
				mes "..........";
				next;
				mes "[Lalo]";
				mes "Maravilhoso!";
				mes "Você pode se tornar um ótimo Bardo.";
				next;
				mes "[Lalo]";
				mes "Mmm... Então você se tornará um Bardo.";
				mes "Mas eu quero te dar um souvenir...";
				next;
				mes "[Lalo]";
				mes "Hmm... muito bem, traga alguns troncos.";
				mes "Não importa qual o tipo, desde que sejam 60 do mesmo tipo...";
				next;
				mes "[Lalo]";
				mes "Vou te dar um presente, uma vez que trazê-los.";
				mes "Tenha uma boa viagem.";
				bardq = 14;
				changequest (3003,3004);
				close2; cutin ("",255); end;
			}
		} else if (bardq == 14) {
			cutin ("job_bard_aiolo02",2);
			mes "[Lalo]";
			if ((countitem(Wooden_Block) < 60) && (countitem(Tree_Of_Archer_1) < 60) && (countitem(Tree_Of_Archer_2) < 60) && (countitem(Tree_Of_Archer_3) < 60)) {
				mes "Mmm? Parece que você não preparou todos os troncos ainda?";
				mes "Traga 60 troncos de qualquer tipo.";
				close2; cutin ("",255); end;
			} else {
				if (SkillPoint) {
					mes "Bom trabalho.";
					mes "Mas você ainda tem pontos de habilidades sobrando.";
					mes "Gaste todos pontos, e depois retorne";
					close2; cutin ("",255); end;
				} else {
					mes "Bom trabalho.";
					mes "Farei seu souvenir de mudança de classe com isso.";
					mes "Espere um momento.";
					next;
					mes "[Lalo]";
					mes "^3355FFScrape Scrape Tang Tang^000000";
					mes "^3355FFSqueak Squeak Scratch Scratch^000000";
					next;
					if (countitem(Wooden_Block) >= 60) { delitem(Wooden_Block,60); .@item = 1901; }
					else if (countitem(Tree_Of_Archer_1) >= 60) { delitem(Tree_Of_Archer_1,60); .@item = 1910; }
					else if (countitem(Tree_Of_Archer_2) >= 60) { delitem(Tree_Of_Archer_2,60); .@item = 1903; }
					else if (countitem(Tree_Of_Archer_3) >= 60) { delitem(Tree_Of_Archer_3,60); .@item = 1905; }
					mes "[Lalo]";
					mes "Muito bem!!";
					mes "Espero que você cante boas músicas agradáveis.";
					mes "Viva como o vento e as nuvens!";
					next;
					mes "[Lalo]";
					mes "Te vejo na próxima vez!";
					jobchange (Job_Bard);
					completequest (3004);
					callfunc ("ClearJobQuest2nd",19);
					getitem (.@item,1);
					close2; cutin ("",255); end;
				}
			}
		}
	} else {
		if (BaseJob == Job_Bard) {
			cutin ("job_bard_aiolo01",2);
			mes "[Lalo]";
			mes "Você não irá se esquecer de espalhar as notícias pelas cidades?";
			mes "E não se esqueça de também aprender novas canções...";
			next;
			mes "[Lalo]";
			mes "Nunca se esqueça de ter uma atitude positiva e de continuar alegre.";
			mes "Nossas músicas são feitas para alegrar as pessoas.";
			close2; cutin ("",255); end;
		} else {
			mes "[Lalo]";
			mes "Lalala, lalala.";
			mes "Linda Comodo.";
			mes "Sempre cheia de momentos felizes.";
			close;
		}
	}
}

// ------------------------------------------------------------------
xmas_in,167,173,4	script	Duffle#snownow	4_F_05,{
	if (bardq == 3) {
		mes "[Duffle]";
		mes "Feliz Natal!";
		mes "Bem-vindo a Lutie!";
		next;
		mes "[Duffle]";
		mes "Você ganhou um presente do Papai Noel?!";
		mes "Ha ha, você deve estar muito animado!";
		next;
		mes "[Duffle]";
		mes "Ei, você sabia que aqui em Lutie nós temos outra atração tão famosa quanto o Papai Noel?";
		next;
		mes "[Duffle]";
		mes "É o ^3355FFBoneco de Neve^000000, o homem de neve falante!";
		next;
		mes "[Duffle]";
		mes "Antes de ir embora, você realmente deve procurar Boneco de Neve.";
		mes "Ele é muito legal, e é divertido conversar com ele.";
		next;
		mes "[Duffle]";
		mes "Então...";
		mes "Feliz Natal!!";
		bardq = 4;
		close;
	} else if (bardq > 3) {
		mes "[Duffle]";
		mes "Você já conversou com o homem de neve daqui?";
		mes "Aquele que é bem solitário...";
		next;
		mes "[Duffle]";
		mes "Mas ele tem um coração enorme.!";
		mes "De vez em quando vou conversar com ele.";
		mes "Por alguma razão, ele consegue falar como nós!";
		next;
		mes "[Duffle]";
		mes "Quando eu converso com ele, eu me pergunto como ele ficou assim.";
		mes "Se você falar com ele, acho que vai se perguntar a mesma coisa.";
		next;
		mes "[Duffle]";
		mes "Como ele foi criado e como ele consegue pensar e falar como um humano é um mistério...";
		next;
		mes "[Duffle]";
		mes "De onde ele veio, e que tipo de lugar seria?";
		mes "E como ele chegou em Lutie sem poder andar...?";
		next;
		mes "[Duffle]";
		mes "Ultimamente, mais pessoas estão vindo aqui para conhecer o Boneco de Neve.";
		next;
		mes "[Duffle]";
		mes "Acho que você deveria falar com os outros moradores de Lutie para aprender mais sobre a história do Boneco de Neve...";
		close;
	} else {
		mes "[Duffle]";
		mes "Oh...!";
		mes "Não se esqueça de visitar o verdadeiro Papai Noel!";
		mes "Ele mora aqui em Lutie!";
		close;
	}
}

// ------------------------------------------------------------------
xmas,134,112,4	script	Boneco de Neve#snownow	4_M_SNOWMAN,{
	cutin ("rutie_snownow03.bmp",2);
	mes "[Boneco de Neve]";
	mes "Eu...";
	mes "Me sinto tão sozinho!";
	next;
	mes "[Boneco de Neve]";
	mes "Sempre parado aqui...";
	mes "No mesmo lugar...";
	mes "Dia após dia após dia após dia após dia após dia após dia após dia após dia após dia...";
	next;
	switch(select("^3355FFBoneco de Neve?^000000","Fábrica de Brinquedos?","Acabar a conversa")) {
		case 1:
		if (bardq < 4) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Eu nasci no Norte, num lugar em que nevava o tempo todo.";
			mes "Era muito mais frio do que aqui em Lutie, pode acreditar.";
			next;
			mes "[Boneco de Neve]";
			mes "Fui feito com amor por um humano, e era muito feliz.";
			mes "Minha vida era simples, mas abençoada.";
			next;
			mes "[Boneco de Neve]";
			mes "Pensei que pudesse passar o resto da vida daquele jeito.";
			mes "Mas... não foi assim.";
			next;
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Um dia, uma mulher feia e idosa chegou na cidade.";
			mes "Chamavam-na de 'Merlophechum', e ela vinha de uma cidade estranha em que estava sempre calor.";
			next;
			mes "[Boneco de Neve]";
			mes "Na terceira noite após sua chegada, ela colocou fogo na cidade com uma magia assustadora.";
			mes "Todos correram em meio ao medo e ao caos. E eu desmaiei.";
			next;
			cutin ("rutie_snownow02.bmp",2);
			mes "[Boneco de Neve]";
			mes "Não sei quanto tempo se passou, mas quando acordei, estava aqui.";
			mes "Bem, posso dizer que Lutie é como se fosse o céu.";
			next;
			mes "[Boneco de Neve]";
			mes "Ninguém nunca se preocupa, e estou sempre ouvindo canções natalinas e coisas assim.";
			next;
			cutin ("rutie_snownow03.bmp",2);
			mes "[Boneco de Neve]";;
			mes "Mas ainda assim...";
			mes "As vezes nem a alegria do Natal consegue curar a escura solidão que existe dentro de mim.";
			next;
			mes "[Boneco de Neve]";
			mes "Então, quer ser meu amigo?";
			mes "Se você for, serei seu amigo também.!";
			close2; cutin ("",255); end;
		} else if (bardq == 4) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Oh...?";
			mes "Você conheceu Duffle?";
			mes "Ah, de vez em quando ela passa aqui para me dar um oi...";
			next;
			mes "[Boneco de Neve]";
			mes "É estranho que as pessoas de Lutie me chamem de boneco de neve misterioso.";
			mes "Porque por dentro somos todos iguais, não é?";
			next;
			mes "[Boneco de Neve]";
			mes "*Sniff*";
			mes "As ve-vezes, eu também não sei o que sou.";
			mes "Mas as pessoas de Lutie me aceitam de qualquer jeito.";
			next;
			mes "[Boneco de Neve]";
			mes "^3355FFPoze^000000 me deu o cartão dele com seu endereço, e disse para eu ir visitá-lo quando estivesse triste.";
			mes "Fiquei tão feliz ao ouvir isso...";
			next;
			mes "[Boneco de Neve]";
			mes "Mas o destino me pregou outra peça, já que percebi que não tenho pernas para ir visitá-lo.";
			next;
			mes "[Boneco de Neve]";
			mes "Como eu cheguei nessa cidade?";
			mes "E como eu posso falar?!";
			mes "Nã-não é natural, é?";
			mes "Será... será que eu sou um monstro?";
			next;
			mes "^3355FFBoneco de Neve se perde em pensamentos,^000000";
			mes "^3355FFcom os olhos fixos no cartão de Poze.^000000";
			bardq = 5;
			close2; cutin ("",255); end;
		} else if (bardq == 5) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "...";
			next;
			mes "^3355FFBoneco de Neve se perde em pensamentos^000000";
			mes "^3355FFcom os olhos fixos no cartão de Poze.^000000";
			close2; cutin ("",255); end;
		} else if (bardq == 6) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Ah que legal!";
			mes "Você conheceu Poze!";
			next;
			mes "[Boneco de Neve]";
			mes "Ele é um cara tão honesto e bondoso!";
			mes "Espero que ele e Duffle fiquem juntos algum dia!";
			next;
			mes "[Boneco de Neve]";
			mes "...Ah não.!";
			mes "Eu disse isso em voz alta?";
			mes "Devia ter ficado calado!";
			mes "Me desculpeee!";
			mes "Sou realmente um cabeçudo, né?";
			next;
			mes "[Boneco de Neve]";
			mes "É...";
			mes "Poze está apaixonado pela Duffle.";
			mes "E ela é bondosa com todo mundo, menos com ele.";
			next;
			mes "[Boneco de Neve]";
			mes "Mas eu sei que ela faz isso porque gosta muito dele!";
			mes "Hee hee hee!";
			close2; cutin ("",255); end;
		} else if (bardq == 7) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Oh...?";
			mes "Você conheceu o";
			mes "^3355FFCantata, o Tio Cabeludo^000000?";
			next;
			cutin ("rutie_snownow02.bmp",2);
			mes "[Boneco de Neve]";
			mes "Bem, ele fala muito alto, não toma banho e cheira que nem comida podre.";
			mes "Mas ele é muito legal e bondoso.";
			mes "Todos adoram ele!";
			next;
			mes "[Boneco de Neve]";
			mes "E ele adora beber coisas estranhas.";
			mes "É um milagre que não passe mal. Hee hee.! Ah, eu amo aquele cara!";
			close2; cutin ("",255); end;
		} else if (bardq == 8) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Oh...?";
			mes "Você conheceu a ^3355FFTia Mima^000000?";
			next;
			mes "[Boneco de Neve]";
			mes "Bem, ela adora vegetais mesmo.";
			mes "Você poderia entregar isso para ela? Estive guardando nos últimos tempos.";
			next;
			mes "^3355FFBoneco de Neve te dá O Melhor Sal do Mundo^000000.";
			next;
			mes "[Boneco de Neve]";
			mes "Adoro a comida dela, é deliciosa!";
			mes "Ela me traz suco de uva com flocos de neve.";
			mes "Bem, por favor entregue para ela, amigo.!";
			bardq = 9;
			close2; cutin ("",255); end;
		} else if (bardq == 9) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "'^3355FFUm item para colher vegetais^000000...'";
			mes "Uau. A Tia Mima adora vegetais, então ela gostaria disso!";
			close2;
			cutin ("",255);
			end;
		} else if (bardq == 10) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Hashokii, o palhaço sem-graça?";
			mes "Ele não parece muito engraçado mesmo.";
			mes "Mas ele se importa muito com as outras pessoas.";
			next;
			mes "[Boneco de Neve]";
			mes "Ele faz de tudo para que aqueles órfãos dêem risada e esqueçam os problemas...";
			close2; cutin ("",255); end;
		} else if (bardq == 11) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Ah...";
			mes "Então você conheceu o Charu Charu?";
			mes "Aquele menino é muito otimista e sempre olha para o futuro.";
			mes "Aposto que vai se dar muito bem quando crescer!";
			next;
			mes "[Boneco de Neve]";
			mes "Aliás, tenho certeza!";
			mes "Hee hee hee.!";
			close2; cutin ("",255); end;
		} else if (bardq == 12) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Muito obrigado por me ouvir por tanto tempo.";
			mes "Gostei muito que você tentou me entender, mesmo sendo um estranho.";
			next;
			mes "[Boneco de Neve]";
			mes "Agora você me conhece melhor que muita gente nessa cidade.";
			mes "Eu gostaria de te dar um presentinho!";
			next;
			mes "[Boneco de Neve]";
			mes "Tah dah!";
			mes "Escolha o que você quiser daqui!";
			next;
			mes "[Boneco de Neve]";
			mes "^3355FFVocê sorteia um presente de dentro da bolsa mágica de Boneco de Neve^000000.";
			next;
			switch(rand(8)) {
				case 1:
				getitem (Candy,5);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Wow.!";
				mes "^3355FF5 Balas^000000!";
				mes "Parabéns!";
				break;
				case 2:
				getitem (Candy,10);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Ooh.!";
				mes "^3355FF10 Balas^000000!";
				break;
				case 3:
				getitem (Candy_Striper,5);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Hoooraaaay.!";
				mes "^3355FF5 Bengalas Doce^000000!";
				break;
				case 4:
				getitem (Candy_Striper,10);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Wow, Isso é perfeito!";
				mes "^3355FF10 Bengalas Doce^000000!";
				break;
				case 5:
				getitem (Piece_Of_Cake,1);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Wow, Isso é perfeito!";
				mes "^3355FF1 Pedaços de Bolo^000000!";
				break;
				case 6:
				getitem (Piece_Of_Cake,2);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Wow, Isso é perfeito!";
				mes "^3355FF2 Pedaços de Bolo^000000!";
				break;
				case 7:
				getitem (Well_Baked_Cookie,5);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Oh woooooow.!";
				mes "^3355FF5 Biscoitos^000000!";
				break;
				default:
				getitem (Well_Baked_Cookie,10);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "*Gasp!* Ooh.";
				mes "^3355FF10 Biscoitos^000000!";
				break;
			}
			next;
			mes "[Boneco de Neve]";
			mes "Meu amigo, venha me visitar quando puder para conversarmos!";
			mes "Venha logo!";
			mes "E Feliz Natal!";
			bardq = 13;
			close2; cutin ("",255); end;
		}
		case 2:
		cutin ("rutie_snownow01.bmp",2);
		mes "[Boneco de Neve]";
		mes "Em volta dessa cidade maravilhosa, abençoada pelo Natal, tem uma fábrica horrível, amaldiçoada pelo Natal.";
		next;
		mes "[Boneco de Neve]";
		mes "Ouvi dizer que é bem decorada e parece uma fábrica de brinquedos, onde tudo é bonitinho.";
		mes "Tem soldadinhos de brinquedos e caixas de presente por todos os lados.";
		next;
		cutin ("rutie_snownow02.bmp",2);
		mes "[Boneco de Neve]";
		mes "Isso não é muuito legal?!";
		mes "*Suspiro*";
		mes "Mesmo sabendo que é uma dungeon, gostaria de ir lá dar uma olhada.";
		mes "Se eu fosse um menino de verdade, ou se ao menos tivesse pernas...";
		close2; cutin ("",255); end;
		case 3:
		cutin ("rutie_snownow03.bmp",2);
		mes "[Boneco de Neve]";
		mes "Até mais, amigo.!";
		mes "Obrigado por me ouvir.";
		mes "Espero te ver novamente!";
		mes "Você sempre estará no meu coração!";
		close2; cutin ("",255); end;
	}
}

// ------------------------------------------------------------------
xmas,117,304,4	script	Poze#bardq	4_M_06,{
	if (bardq == 5) {
		mes "[Poze]";
		mes "Você foi falar com ^3355FFBoneco de Neve^000000 e ele mencionou o meu nome?";
		next;
		mes "[Poze]";
		mes "Entendo...";
		mes "Ele é um boneco de neve que não tem pernas.";
		mes "Não me surpreende que nunca tenha vindo me visitar.";
		mes "Que vergonha!";
		mes "Eu que deveria ir visitá-lo.";
		next;
		mes "[Poze]";
		mes "Ah, lembrei de alguém que sabe como Boneco de Neve começou a falar.";
		mes "É o ^3355FFCantata, o Tio Cabeludo^000000...";
		next;
		mes "[Poze]";
		mes "Um dia, o aprendiz de um grande Alquimista veio visitar Lutie, e eu ouvi uma conversa dele com o Tio Cabeludo.";
		next;
		mes "[Poze]";
		mes "Muito tempo atrás, um poderoso Alquimista chegou na terra natal de Boneco de Neve, e encontrou-o morrendo, derretendo e virando água.";
		mes "Mas Boneco de Neve foi reanimado pelo Alquimista.";
		next;
		mes "[Poze]";
		mes "E isso é tudo que sei.";
		mes "Para saber detalhes, converse com o ^3355FFTio Cabeludo Cantata.^000000.";
		bardq = 6;
		close;
	} else {
		mes "[Poze]";
		mes "Bem vindo a Lutie, a cidade que abençoa os visitantes com o espírito de Natal!";
		mes "Feliz Natal!";
		next;
		mes "[Poze]";
		mes "Aqui nessa terra mágica você pode aproveitar o espírito de Natal durante o ano todo.! Não é maravilhoso?";
		next;
		mes "[Poze]";
		mes "Lutie não é apenas um lugar turístico.";
		mes "Temos lojas e tudo que as outras cidades tem, mas em um ambiente festivo.";
		next;
		mes "[Poze]";
		mes "Então se você quiser passar um tempo aqui não vai se arrepender. Feliz Natal.";
		close;
	}
}

// ------------------------------------------------------------------
xmas,176,236,4	script	Hairy#bardq	4_M_05,{
	if (bardq == 6) {
		if (countitem(Chinese_Ink) && countitem(Sticky_Mucus)) {
			mes "[Hairy]";
			mes "Oh? Vo-você trouxe os ingredientes? Óóóótimo.";
			mes "Faz tanto tempo que não provo disso... Dê-dê para mim!";
			next;
			delitem (Chinese_Ink,1);
			delitem (Sticky_Mucus,1);
			bardq = 7;
			mes "^3355FFVocê rapidamente dá a ele o Tinta de Polvo e o Muco Pegajoso,";
			mes "E olha com um pouco de nojo enquanto ele saboreia o drinque.^000000";
			next;
			mes "[Hairy]";
			mes "*Burrrrpppp.*";
			mes "Bem, é hora da história.";
			mes "Lembre-se que é tudo que sei.";
			mes "Não sei quanto você já ouviu...";
			next;
			mes "[Hairy]";
			mes "Muito tempo atrás, havia um poderoso Alquimista vivendo no Norte.";
			mes "Seu nome era ^3355FFPhilip Varsez^000000!";
			next;
			mes "[Hairy]";
			mes "Ele era um pioneiro em pesquisas sobre Alquimia, e precisava de materiais raros para seus estudos.";
			mes "Por isso, viajava o mundo atrás de materiais que continham energia mágica...";
			next;
			mes "[Hairy]";
			mes "Um dia, suas viagens levaram-no para um vilarejo no Norte, conhecido por seu tempo frio.";
			mes "Mas ao chegar lá, ele se deparou com uma cidade destruída.";
			next;
			mes "[Hairy]";
			mes "Era uma visão terrível:";
			mes "As pessoas jaziam na calçada, moribundas.";
			mes "Quando viam Varsez, imploravam para que ele os matasse e acabasse com a agonia.";
			next;
			mes "[Hairy]";
			mes "Entre os gritos de desespero, o choro de duas crianças chegou aos ouvidos de Philip Varsez.";
			mes "Ele correu e achou dois bebês agarrados em um boneco de neve que se derretia.";
			next;
			mes "[Hairy]";
			mes "Aquele boneco de neve...";
			mes "Era ^3355FFBoneco de Neve^000000.";
			next;
			mes "[Hairy]";
			mes "Sendo o poderoso Alquimista que era, Varsez percebeu que Boneco de Neve se sacrificara para proteger os bebês do desastre que caíra sobre o vilarejo.";
			next;
			mes "[Hairy]";
			mes "Varsez ficou emocionado e decidiu salvar a vida do boneco com seus poderes.";
			mes "E o trouxe para Lutie, o lugar mais seguro do mundo.";
			next;
			mes "[Hairy]";
			mes "Claro, também existem rumores de que Boneco de Neve pôde sobreviver não só pela piedade do Alquimista.";
			mes "Mas também pela neve com a qual era feito.";
			next;
			mes "[Hairy]";
			mes "Acredita-se que a neve que formou Boneco de Neve cobria um campo misterioso, supostamente cheio de flores mágicas.";
			next;
			mes "[Hairy]";
			mes "Muhahaha.";
			mes "Bem, isso é tudo que sei.";
			mes "Espero que você tenha gostado da minha história!";
			next;
			mes "[Hairy]";
			mes "Bem...";
			mes "Agora que penso nisso...";
			next;
			mes "[Hairy]";
			mes "Boneco de Neve não só fala, mas também tem um estoque inacabável de presentes de Natal.";
			mes "Pelo menos foi o que me disseram.";
			next;
			mes "[Hairy]";
			mes "^3355FFMima^000000, a mulher dos vegetais, sabe mais sobre isso.";
			mes "Você devia ir falar com ela.";
			mes "Feliz Natal!";
			close;
		} else {
			mes "Humm... Foi Poze quem falou sobre mim?";
			mes "He he he! Sei sim sobre Boneco de Neve.";
			mes "Pode me considerar com o ponto fraco dele, já que...";
			next;
			mes "[Hairy]";
			mes "Eu sei";
			mes "o segredo do";
			mes "^3355FFnascimento de Boneco de Neve^000000!!";
			next;
			mes "[Hairy]";
			mes "Está curioso?";
			mes "Heh heh heh. Bom, não vou te contar sem ganhar nada em troca.";
			next;
			mes "[Hairy]";
			mes "O ruim de morar nessa cidade é que não tenho nenhuma chance de tomar um drinque de verdade.";
			mes "Vejamos, me traga...";
			next;
			mes "[Hairy]";
			mes "^3355FF1 Tinta de Polvo e 1 Muco Pegajoso^000000!";
			next;
			mes "[Hairy]";
			mes "Wahhahaha!";
			mes "Por que está me olhando assim?!";
			mes "Meu gosto não é da sua conta! Ao trabalho.!";
			close;
		}
	} else {
		mes "[Hairy]";
		mes "Feliz Natal!";
		mes "Bem vindo a Lutie!";
		next;
		mes "[Hairy]";
		mes "Parece que o frio deixou suas bochechas rosadas!";
		mes "Ha ha ha!";
		next;
		mes "[Hairy]";
		mes "Tenha cuidado para não pegar a Gripe de Lutie.";
		mes "...";
		next;
		mes "[Hairy]";
		mes "*Suspiro*";
		mes "Isso me lembra...";
		mes "Meu filho pegou uma Gripe de Lutie muito forte um tempo atrás.";
		next;
		mes "[Hairy]";
		mes "Foi durante a noite, eu não tinha onde buscar remédios e parecia que não havia o que fazer.";
		next;
		mes "[Hairy]";
		mes "Achei que o mínimo que poderia fazer por ele era pegar algo frio para tentar abaixar sua febre.";
		mes "Mas a neve de Lutie derretia assim que tocava em sua testa.";
		mes "Ele estava queimando em febre e eu não conseguia aliviá-lo.";
		next;
		mes "[Hairy]";
		mes "E foi aí que eu soube que precisaria de gelo mágico.";
		next;
		mes "[Hairy]";
		mes "Acabei chegando na Dungeon Natalina e lá encontrei, graças a Deus, uma criatura inteira de gelo!";
		next;
		mes "[Hairy]";
		mes "Era um ^3355FFPoring de Gelo^000000!";
		mes "Os habitantes locais chamam-no de 'Icepantzering.'";
		mes "De qualquer modo, salvei a vida do meu filho com isso.";
		mes "Agradeço até hoje por ter encontrado algo assim nessa cidade.";
		next;
		mes "[Hairy]";
		mes "Oops, acho que falei demais";
		mes " Feliz Natal.!";
		close;
	}
}

// ------------------------------------------------------------------
xmas_in,27,103,4	script	Tia Mima#bardq	4_F_GODEMOM,{
	if (bardq == 7) {
		mes "[Mima]";
		mes "Hmm? Aquele cabeludo falou bem de mim, não é?";
		mes "Bem...";
		next;
		mes "[Mima]";
		mes "Eu sei o que ele quer...";
		mes "Ho ho ho.!";
		mes "Ele quer me deixar feliz para que eu dê a ele vegetais de graça! Ah bem.!";
		next;
		mes "[Mima]";
		mes "Ele me conhece bem. Sempre acaba ganhando vegetais de graça.";
		mes "Sim, porque os meus são os melhores da cidade!";
		next;
		mes "[Mima]";
		mes "Hmmm.?";
		mes "Você quer saber sobre ^3355FFBoneco de Neve^000000?";
		mes "Ah. Sim, sim, entendo...";
		next;
		mes "[Mima]";
		mes "Bem, não posso deixar qualquer um saber sobre alguém tão importante quanto Boneco de Neve.";
		mes "Hmmm...";
		next;
		mes "[Mima]";
		mes "Boneco de Neve está guardando ^3355FFO Melhor Sal do Mundo^000000 para mim.";
		mes "É algo muito importante, que eu uso para temperar vegetais.";
		next;
		mes "[Mima]";
		mes "Se você realmente for amigo do Boneco de Neve, ele confiará em você para me devolver.";
		mes "E de qualquer forma, eu preciso do Sal de volta.";
		next;
		mes "[Mima]";
		mes "Agora seja um bom menino e se apresse.";
		mes "Volte rápido.";
		bardq = 8;
		close;
	} else if (bardq == 9) {
		mes "[Mima]";
		mes "Hohohohoh hohohohoho !";
		mes "Vejamos, vejamos...";
		mes "Obrigada, querido, obrigada.";
		next;
		mes "^3355FFVocê devolveu a ela";
		mes "O Melhor Sal do Mundo.^000000";
		next;
		mes "[Mima]";
		mes "Agora posso temperar meus vegetais decentemente.";
		mes "Obrigada, querido.";
		mes "Obrigada...";
		next;
		mes "...";
		next;
		mes "...";
		mes "......";
		next;
		mes "[Mima]";
		mes "Ah é, quase esqueci a minha promessa.";
		mes "Você quer saber sobre o dom mágico de Boneco de Neve, não é?";
		next;
		mes "[Mima]";
		mes "Se você ja falou com o Tio Cantata.;";
		mes "Sabe que Boneco de Neve foi feito com uma neve misteriosa, que cobria um campo de flores mágicas.";
		next;
		mes "[Mima]";
		mes "Posso te dizer que quando Boneco de Neve foi revivido.";
		mes "Houve uma reação entre os materiais do Alquimista e a energia contida na neve de Boneco de Neve.";
		next;
		mes "[Mima]";
		mes "Por alguma razão, Boneco de Neve tem uma Caixa de Presentes que cria quantos presentes ele quiser.";
		mes "Como se fosse o Papai Noel.";
		next;
		mes "[Mima]";
		mes "Claro, se esse poder caísse nas mãos do mal, teríamos problemas.";
		next;
		mes "[Mima]";
		mes "Mas todo mundo sabe que Boneco de Neve é bondoso e carinhoso com os outros.";
		mes "Então nunca nos preocupamos com isso.";
		next;
		mes "[Mima]";
		mes "Ah, e eu ouvi notícias incríveis.";
		mes "Quem me contou foi ^3355FFHashokii^000000 o palhaço.";
		mes "É uma história muito interessante.";
		mes "Você deveria ir falar com ele.";
		bardq = 10;
		close;
	} else {
		mes "[Mima]";
		mes "Feliz Natal.";
		mes "Ho! Ho! Ho!";
		next;
		mes "[Mima]";
		mes "Sinto o espírito de Natal em todo lugar!";
		mes "Até nos olhos dos jovens viajantes que vêm até Lutie.";
		mes "Hoho, desejo a você um Natal muito feliz!";
		close;
	}
}

// ------------------------------------------------------------------
xmas,146,136,4	script	Hashokii#bardq	4_M_PIERROT,{
	if (bardq == 10) {
		mes "[Hashokii]";
		mes "Sabe os bebês que Boneco de Neve salvou?";
		mes "Acho que Charu Charu e Marcell não sabem disso.";
		next;
		mes "[Hashokii]";
		mes "Boneco de Neve me contou como ele tentou bloquear a enorme bola de fogo que iria cair nos bebês.";
		mes "Ele estava disposto a se sacrificar por eles.";
		next;
		mes "[Hashokii]";
		mes "Por que você não procura as crianças?";
		mes "Eles talvez te contem a história completa.";
		mes "Boa sorte.!";
		bardq = 11;
		close;
	} else {
		mes "[Hashokii]";
		mes "Feellliiizz Natal.!";
		mes "La La La.!";
		mes "Dum di Dum di Dum!";
		next;
		switch(select("E aí cara, beleza?","Sobre Boneco de Neve","Cancelar")) {
			case 1:
			mes "[Hashokii]";
			mes "La La La.!";
			mes "Dum di Dum di Dum!";
			mes "Ooh, estou pensando em um show para animar o Charu Charu e a Marcell!";
			close;
			case 2:
			mes "[Hashokii]";
			mes "Ah... ^3355FFBoneco de Neve^000000?";
			mes "Claro que conheço ele!";
			mes "Qualquer um que não conheça com certeza não mora aqui!";
			mes "De vez em quando vou lá conversar com ele...";
			close;
			case 3:
			mes "[Hashokii]";
			mes "La La La.!";
			mes "Dum di Dum di Dum";
			mes "Feliz Natal.!";
			close;
		}
	}
}

// ------------------------------------------------------------------
xmas,208,168,4	script	Pequena Menina#bardq	4_F_KID2,{
	if (bardq == 11) {
		mes "[Marcell]";
		mes "Charu Charu e eu somos órfãos, e não lembro dos nossos pais.";
		mes "Fomos criados pelo povo de Lutie.";
		next;
		mes "[Marcell]";
		mes "O Tio Cantata e a Tia Mima nos tratam como filhos, e Poze e Duffle são como nossos irmãos!";
		next;
		mes "[Marcell]";
		mes "Eles são bons e generosos, e nós agradecemos muito tudo o que fazem para cuidar de nós!";
		next;
		mes "[Marcell]";
		mes "Ouvi dizer que Boneco de Neve também não tem pais.";
		mes "E também ouvi que ele não nasceu aqui.";
		next;
		mes "[Marcell]";
		mes "Ouvi dizer que Boneco de Neve e nós somos do mesmo lugar, mas não tenho certeza.";
		mes "Mas sei que Boneco de Neve e eu temos o mesmo tipo de queimaduras no corpo.";
		next;
		mes "[Marcell]";
		mes "Charu Charu e eu temos queimaduras nas costas, e Boneco de Neve também tem uma bem grande.";
		mes "Acho que o que foi que fez isso, fez em nós três de uma vez...";
		next;
		mes "[Marcell]";
		mes "Hum, deixa eu ver...";
		mes "Você quer saber tudo sobre Boneco de Neve porque quer ser amigo dele!";
		mes "Ah, ele vai ficar tão feliz quando souber disso! Talvez até te dê um presente! Boa sorte!";
		bardq = 12;
		close;
	} else if (bardq == 13) {
		mes "[Marcell]";
		mes "Você sabe mais sobre Boneco de Neve do que qualquer outro!";
		mes "Vá falar com ele, ele vai ficar feliz de ver que você se importa com ele.";
		mes "Feliz Natal!";
		close;
	} else {
		mes "[Marcell]";
		mes "Estou congelando aqui...!";
		mes "E Charu Charu me deixa com mais frio ainda com essas piadas ridículas.";
		mes "E o vento está tão forte!";
		next;
		mes "[Marcell]";
		mes "Sabe de uma coisa? Boneco de Neve tem um poder especial.";
		mes "Ele pode fazer tantos presentes quanto o Papai Noel! Isso não é ótimo?";
		next;
		mes "[Marcell]";
		mes "Huh? Por que está me olhando assim?";
		mes "Boneco de Neve tem uma grande caixa de presentes e distribui lembranças quando quer.";
		mes "Não é difícil acreditar nisso!";
		close;
	}
}

