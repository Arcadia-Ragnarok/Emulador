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
| - Info: Quest de Mudan�a de Classe para Bardo.                    |
\*-----------------------------------------------------------------*/

comodo,226,123,5	script	Bardo Andarilho#bardq	2_M_BARD_ORIENT,{
	if (BaseJob == Job_Archer && Sex == SEX_MALE) {
		if (!bardq) {
			cutin ("job_bard_aiolo01",2);
			mes "[Lalo]";
			mes "Oi! Encantador Arqueiro.";
			mes "Como um andarilho como eu pode te ajudar?";
			next;
			switch(select("Voc� tem uma voz agrad�vel","Voc� pode cantar um pouco?","Em nada")) {
				case 1:
				mes "[Lalo]";
				mes "Hahaha! � claro!";
				mes "Se voc� canta com o cora��o feliz, a sua voz sempre fica melhor.";
				next;
				mes "[Lalo]";
				mes "Mas, para os Bardos a voz � sua vida.";
				mes "Por�m, em alguns momentos � necess�rio se ter cuidado com sua voz.";
				close2; cutin ("",255); end;
				case 2:
				mes "[Lalo]";
				mes "Uma can��o... vejamos.";
				mes "Ok, eu tenho...";
				next;
				mes "[Lalo]";
				mes "Irei cantar...";
				mes "Tambores de Guerra.";
				mes "*ehem...*cough...gag..mememememe...";
				mes "1, 2, 3, 4...";
				next;
				mes "^000088O som de cavalos galopando sobre o horizonte a poeira que cobre o sol distante.";
				mes "Enquanto milhares de olhos se abrem no luar do c�u, o castelo ir� se destruir com o poder^000000";
				next;
				mes "^000088Eu posso ouvir.. as batidas do meu cora��o.";
				mes "Eu posso sentir.. o sangue correndo pelas minhas veias.";
				mes ".. e o peso da minha armadura.";
				mes "Posso ver.. meus inimigos.^000000";
				next;
				mes "^000088Mais alto, mais alto mais alto..";
				mes "D� for�a aos guerreiros!";
				mes "Superior, superior, superior..";
				mes "Esse dia nunca voltar�!^000000";
				next;
				mes "^000088Agite o c�u e balance a terra.";
				mes "Fa�a meu cora��o bater novamente!";
				mes "Ou�a o som das trombetas, e as as muralhas do castelo tremem.";
				mes "Esse momento nunca mais voltar�!^000000";
				next;
				mes "[Lalo]";
				mes "Hmm... essa � sempre uma boa can��o para cantar.";
				mes "O que achou?";
				mes "N�o � uma m�sica agrad�vel?";
				next;
				if (select("Sim, � muito boa","N�o, realmente n�o mesmo...") == 1) {
					mes "[Lalo]";
					mes "Seria bom se mais pessoas a cantassem...";
					mes "Bem, � tudo... hmmhmm.";
					if (JobLevel > 39) {
						bardq = 1;
						setquest (3000);
					}
					close2; cutin ("",255); end;
				} else {
					mes "[Lalo]";
					mes "Hmm... Eu perdi meus sentidos, terei que me esfor�ar mais.";
					mes "De qualquer forma...";
					mes "Obrigado pela aten��o.";
					close2; cutin ("",255); end;
				}
				case 3:
				cutin ("job_bard_aiolo02",2);
				mes "[Lalo]";
				mes "Nossa, n�o pedir uma m�sica quando se encontra um Bardo � falta de educa��o.";
				mes "Bem... N�o posso ajud�-lo enquanto voc� parecer que est� com pressa.";
				next;
				mes "[Lalo]";
				mes "A ca�a � algo bom... Mas voc� n�o pode esquecer de relaxar de vez em quando.";
				mes "A juventude � curta e n�o volta..";
				close2; cutin ("",255); end;
			}
		} else if (bardq == 1) {
			cutin ("job_bard_aiolo01",2);
			mes "[Lalo]";
			mes "Ol� novamente arqueiro";
			mes "Quer ouvir outra can��o?";
			next;
			if (select("Como posso ser um bardo?","Deixa para outra hora") == 1) {
				mes "[Lalo]";
				mes "Ah sim, voc� tamb�m quer aprender can��es.";
				mes "Eu irei ajud�-lo ent�o para se tornar um Bardo.";
				next;
				mes "[Lalo]";
				mes "Mas antes disso... voc� pode me trazer uma Flor?";
				mes "Eu preciso sentir o cheiro de uma flor para ver como ser� o ensino.";
				next;
				mes "[Lalo]";
				mes "O tipo de flor n�o importa, mas tente trazer uma que eu goste.";
				mes "E n�o compre qualquer flor barata, certo?";
				bardq = 2;
				changequest (3000,3001);
				close2; cutin ("",255); end;
			} else {
				mes "[Lalo]";
				mes "Hmm... Eu n�o tenho certeza do que voc� ser�, mas aproveite a vida.";
				mes "Voc� parece muito tenso.";
				next;
				mes "[Lalo]";
				mes "Bem ent�o, tenha um bom dia.";
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
				mes "Ooh! Isto � uma Flor Cantante!";
				mes "Ela me traz muitas lembran�as...";
				next;
				mes "[Lalo]";
				mes "Meu amigo Tchaikovsky gosta muito delas.";
				mes "Me pergunto o que ele est� fazendo agora...";
				next;
			} else if(countitem(Hinalle)) {
				delitem (Hinalle,1);
				mes "[Lalo]";
				mes "Aah... uma linda Hinalle...";
				mes "Ela n�o tem cheiro, mas � uma linda flor.";
				next;
				mes "[Lalo]";
				mes "As folhas me d�o for�a quando eu costumo cair.";
				mes "Eu realmente gosto dessa flor, obrigado.";
				next;
			} else if(countitem(Aloe)) {
				delitem (Aloe,1);
				mes "[Lalo]";
				mes "Aloe... � uma flor rara.";
				mes "Como voc� a conseguiu?";
				mes "Voc� � um perito?";
				next;
				mes "[Lalo]";
				mes "As folhas s�o boas e a Aloe Vera � deliciosa...";
				mes "e ela � definitivamente a mais bela das flores.";
				next;
			} else if(countitem(Ment)) {
				delitem (Ment,1);
				mes "[Lalo]";
				mes "Menta... Voc� pode esquecer todos os seus problemas com uma dessas.";
				mes "� �timo ver uma depois de tanto tempo!";
				next;
				mes "[Lalo]";
				mes "Ouvi dizer que � poss�vel fazer Analg�sicos com ela...";
				mes "Mas pode ser apenas um boato..";
				mes "Obrigado!";
				next;
			} else if(countitem(Izidor)) {
				delitem (Izidor,1);
				mes "Nossa, � uma Izidor?";
				mes "� uma perigosa e bela flor...";
				next;
				mes "[Lalo]";
				mes "Possui os profundos encantos de uma pessoa.. ";
				mes "Obrigado, eu gosto muito dessa flor.";
				next;
			} else if(countitem(Witherless_Rose)) {
				delitem (Witherless_Rose,1);
				mes "[Lalo]";
				mes "Uma Rosa Eterna.";
				mes "A flor forte, que n�o murcha.";
				mes "�timo presente para sua namorada.";
				next;
				mes "[Lalo]";
				mes "Eu me pergunto se � permitido que um andarilho como eu tenha uma dessas.";
				next;
			} else if(countitem(Frozen_Rose)) {
				delitem (Frozen_Rose,1);
				mes "[Lalo]";
				mes "Rosa de Gelo...";
				mes "Voc� n�o pode chamar isso de flor, por�m ainda sim � linda...";
				next;
				mes "[Lalo]";
				mes "Ela n�o possui mais seu aroma.";
				mes "Estou muito contente, pois � uma flor diferente.";
				next;
			} else if(countitem(Illusion_Flower)) {
				delitem (Illusion_Flower,1);
				mes "[Lalo]";
				mes "Ah, isso n�o � uma Flor das Ilus�es!?";
				mes "Uau, como voc� conseguiu essa flor rara!!";
				next;
				mes "[Lalo]";
				mes "Muito obrigado, aah...";
				mes "Me sinto como se o c�u estivesse na frente dos meus olhos.";
				mes "Que sensa��o maravilhosa!";
				mes "Estou muito feliz.";
				next;
			} else {
				cutin ("job_bard_aiolo02",2);
				mes "[Lalo]";
				mes "Hmm? O qu�...";
				mes "Voc� n�o trouxe nada.";
				mes "Eu n�o te pedi para me trazer uma flor expecial?";
				next;
				mes "[Lalo]";
				mes "Bem... se voc� quer aprender sozinho, ent�o que assim seja.";
				mes "Qualquer pessoa pode simplesmente sair e cantar.";
				close2; cutin ("",255); end;
			}
			mes "[Lalo]";
			mes "Como eu prometi, irei ajud�-lo a se tornar um Bardo.";
			mes "Mas n�o � f�cil meu amigo.";
			next;
			mes "[Lalo]";
			mes "� importante conhecer um monte de gente para aprender a cantar.";
			mes "Voc� tamb�m deve se manter atualizado do que est� acontecendo nos diferentes vilarejos...";
			next;
			mes "[Lalo]";
			mes "H� um boneco de neve em uma cidade chamada Lutie.";
			mes "V� at� l� e fa�a amizade com ele.";
			next;
			bardq = 3;
			changequest (3001,3002);
			next;
			mes "[Lalo]";
			mes "Se voc� se tornar amigo do ^008800Boneco de Neve^000000, voc� ir� receber algo.";
			mes "E tamb�m fale com as pessoas da cidade enquanto estiver l�...";
			close2; cutin ("",255); end;
		} else if (bardq < 13) {
			cutin ("job_bard_aiolo01",2);
			mes "[Lalo]";
			mes "�, voc� ainda n�o se tornou amigo do boneco de neve em Lutie?";
			mes "Falar comigo n�o te ajudar�.";
			next;
			mes "[Lalo]";
			mes "Se voc� se tornar amigo do ^008800Boneco de Neve^000000, voc� ir� receber algo.";
			mes "E tamb�m fale com as pessoas da cidade enquanto estiver l�...";
			close2; cutin ("",255); end;
		} else if (bardq == 13) {
			cutin "job_bard_aiolo01",2;
			mes "[Lalo]";
			mes "Ent�o, voc� quer tentar cantar...?";
			mes "Irei cantar uma curta melodia...";
			mes "E voc� tenta depois.";
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
			mes "[Lalo]";
			mes "^3377ff"+.@bardMusic1$;
			mes .@bardMusic2$;
			mes .@bardMusic3$;
			mes .@bardMusic4$;
			mes .@bardMusic5$;
			mes .@bardMusic6$+"^000000";
			next;
			mes "[Lalo]";
			mes "Agora � sua vez, retita a m�sica que acabei de cantar.";
			mes "Uma frase de cada vez.";
			next;
			if (select("Cante novamente","Est� bem") == 1) {
				mes "[Lalo]";
				mes "^3377ff"+.@bardMusic1$;
				mes .@bardMusic2$;
				mes .@bardMusic3$;
				mes .@bardMusic4$;
				mes .@bardMusic5$;
				mes .@bardMusic6$+"^000000";
				next;
				mes "[Lalo]";
				mes "Agora � sua vez, retita a m�sica que acabei de cantar.";
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
				mes "Voc� errou na letra.";
				mes "� feio errar a letras das can��es";
				mes "Mais aten��o na pr�xima vez";
				close2; cutin ("",255); end;
			} else {
				cutin ("job_bard_aiolo01",2);
				mes "[Lalo]";
				mes "..........";
				next;
				mes "[Lalo]";
				mes "Maravilhoso!";
				mes "Voc� pode se tornar um �timo Bardo.";
				next;
				mes "[Lalo]";
				mes "Mmm... Ent�o voc� se tornar� um Bardo.";
				mes "Mas eu quero te dar um souvenir...";
				next;
				mes "[Lalo]";
				mes "Hmm... muito bem, traga alguns troncos.";
				mes "N�o importa qual o tipo, desde que sejam 60 do mesmo tipo...";
				next;
				mes "[Lalo]";
				mes "Vou te dar um presente, uma vez que traz�-los.";
				mes "Tenha uma boa viagem.";
				bardq = 14;
				changequest (3003,3004);
				close2; cutin ("",255); end;
			}
		} else if (bardq == 14) {
			cutin ("job_bard_aiolo02",2);
			mes "[Lalo]";
			if ((countitem(Wooden_Block) < 60) && (countitem(Tree_Of_Archer_1) < 60) && (countitem(Tree_Of_Archer_2) < 60) && (countitem(Tree_Of_Archer_3) < 60)) {
				mes "Mmm? Parece que voc� n�o preparou todos os troncos ainda?";
				mes "Traga 60 troncos de qualquer tipo.";
				close2; cutin ("",255); end;
			} else {
				if (SkillPoint) {
					mes "Bom trabalho.";
					mes "Mas voc� ainda tem pontos de habilidades sobrando.";
					mes "Gaste todos pontos, e depois retorne";
					close2; cutin ("",255); end;
				} else {
					mes "Bom trabalho.";
					mes "Farei seu souvenir de mudan�a de classe com isso.";
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
					mes "Espero que voc� cante boas m�sicas agrad�veis.";
					mes "Viva como o vento e as nuvens!";
					next;
					mes "[Lalo]";
					mes "Te vejo na pr�xima vez!";
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
			mes "Voc� n�o ir� se esquecer de espalhar as not�cias pelas cidades?";
			mes "E n�o se esque�a de tamb�m aprender novas can��es...";
			next;
			mes "[Lalo]";
			mes "Nunca se esque�a de ter uma atitude positiva e de continuar alegre.";
			mes "Nossas m�sicas s�o feitas para alegrar as pessoas.";
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
		mes "Voc� ganhou um presente do Papai Noel?!";
		mes "Ha ha, voc� deve estar muito animado!";
		next;
		mes "[Duffle]";
		mes "Ei, voc� sabia que aqui em Lutie n�s temos outra atra��o t�o famosa quanto o Papai Noel?";
		next;
		mes "[Duffle]";
		mes "� o ^3355FFBoneco de Neve^000000, o homem de neve falante!";
		next;
		mes "[Duffle]";
		mes "Antes de ir embora, voc� realmente deve procurar Boneco de Neve.";
		mes "Ele � muito legal, e � divertido conversar com ele.";
		next;
		mes "[Duffle]";
		mes "Ent�o...";
		mes "Feliz Natal!!";
		bardq = 4;
		close;
	} else if (bardq > 3) {
		mes "[Duffle]";
		mes "Voc� j� conversou com o homem de neve daqui?";
		mes "Aquele que � bem solit�rio...";
		next;
		mes "[Duffle]";
		mes "Mas ele tem um cora��o enorme.!";
		mes "De vez em quando vou conversar com ele.";
		mes "Por alguma raz�o, ele consegue falar como n�s!";
		next;
		mes "[Duffle]";
		mes "Quando eu converso com ele, eu me pergunto como ele ficou assim.";
		mes "Se voc� falar com ele, acho que vai se perguntar a mesma coisa.";
		next;
		mes "[Duffle]";
		mes "Como ele foi criado e como ele consegue pensar e falar como um humano � um mist�rio...";
		next;
		mes "[Duffle]";
		mes "De onde ele veio, e que tipo de lugar seria?";
		mes "E como ele chegou em Lutie sem poder andar...?";
		next;
		mes "[Duffle]";
		mes "Ultimamente, mais pessoas est�o vindo aqui para conhecer o Boneco de Neve.";
		next;
		mes "[Duffle]";
		mes "Acho que voc� deveria falar com os outros moradores de Lutie para aprender mais sobre a hist�ria do Boneco de Neve...";
		close;
	} else {
		mes "[Duffle]";
		mes "Oh...!";
		mes "N�o se esque�a de visitar o verdadeiro Papai Noel!";
		mes "Ele mora aqui em Lutie!";
		close;
	}
}

// ------------------------------------------------------------------
xmas,134,112,4	script	Boneco de Neve#snownow	4_M_SNOWMAN,{
	cutin ("rutie_snownow03.bmp",2);
	mes "[Boneco de Neve]";
	mes "Eu...";
	mes "Me sinto t�o sozinho!";
	next;
	mes "[Boneco de Neve]";
	mes "Sempre parado aqui...";
	mes "No mesmo lugar...";
	mes "Dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia ap�s dia...";
	next;
	switch(select("^3355FFBoneco de Neve?^000000","F�brica de Brinquedos?","Acabar a conversa")) {
		case 1:
		if (bardq < 4) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Eu nasci no Norte, num lugar em que nevava o tempo todo.";
			mes "Era muito mais frio do que aqui em Lutie, pode acreditar.";
			next;
			mes "[Boneco de Neve]";
			mes "Fui feito com amor por um humano, e era muito feliz.";
			mes "Minha vida era simples, mas aben�oada.";
			next;
			mes "[Boneco de Neve]";
			mes "Pensei que pudesse passar o resto da vida daquele jeito.";
			mes "Mas... n�o foi assim.";
			next;
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Um dia, uma mulher feia e idosa chegou na cidade.";
			mes "Chamavam-na de 'Merlophechum', e ela vinha de uma cidade estranha em que estava sempre calor.";
			next;
			mes "[Boneco de Neve]";
			mes "Na terceira noite ap�s sua chegada, ela colocou fogo na cidade com uma magia assustadora.";
			mes "Todos correram em meio ao medo e ao caos. E eu desmaiei.";
			next;
			cutin ("rutie_snownow02.bmp",2);
			mes "[Boneco de Neve]";
			mes "N�o sei quanto tempo se passou, mas quando acordei, estava aqui.";
			mes "Bem, posso dizer que Lutie � como se fosse o c�u.";
			next;
			mes "[Boneco de Neve]";
			mes "Ningu�m nunca se preocupa, e estou sempre ouvindo can��es natalinas e coisas assim.";
			next;
			cutin ("rutie_snownow03.bmp",2);
			mes "[Boneco de Neve]";;
			mes "Mas ainda assim...";
			mes "As vezes nem a alegria do Natal consegue curar a escura solid�o que existe dentro de mim.";
			next;
			mes "[Boneco de Neve]";
			mes "Ent�o, quer ser meu amigo?";
			mes "Se voc� for, serei seu amigo tamb�m.!";
			close2; cutin ("",255); end;
		} else if (bardq == 4) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Oh...?";
			mes "Voc� conheceu Duffle?";
			mes "Ah, de vez em quando ela passa aqui para me dar um oi...";
			next;
			mes "[Boneco de Neve]";
			mes "� estranho que as pessoas de Lutie me chamem de boneco de neve misterioso.";
			mes "Porque por dentro somos todos iguais, n�o �?";
			next;
			mes "[Boneco de Neve]";
			mes "*Sniff*";
			mes "As ve-vezes, eu tamb�m n�o sei o que sou.";
			mes "Mas as pessoas de Lutie me aceitam de qualquer jeito.";
			next;
			mes "[Boneco de Neve]";
			mes "^3355FFPoze^000000 me deu o cart�o dele com seu endere�o, e disse para eu ir visit�-lo quando estivesse triste.";
			mes "Fiquei t�o feliz ao ouvir isso...";
			next;
			mes "[Boneco de Neve]";
			mes "Mas o destino me pregou outra pe�a, j� que percebi que n�o tenho pernas para ir visit�-lo.";
			next;
			mes "[Boneco de Neve]";
			mes "Como eu cheguei nessa cidade?";
			mes "E como eu posso falar?!";
			mes "N�-n�o � natural, �?";
			mes "Ser�... ser� que eu sou um monstro?";
			next;
			mes "^3355FFBoneco de Neve se perde em pensamentos,^000000";
			mes "^3355FFcom os olhos fixos no cart�o de Poze.^000000";
			bardq = 5;
			close2; cutin ("",255); end;
		} else if (bardq == 5) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "...";
			next;
			mes "^3355FFBoneco de Neve se perde em pensamentos^000000";
			mes "^3355FFcom os olhos fixos no cart�o de Poze.^000000";
			close2; cutin ("",255); end;
		} else if (bardq == 6) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Ah que legal!";
			mes "Voc� conheceu Poze!";
			next;
			mes "[Boneco de Neve]";
			mes "Ele � um cara t�o honesto e bondoso!";
			mes "Espero que ele e Duffle fiquem juntos algum dia!";
			next;
			mes "[Boneco de Neve]";
			mes "...Ah n�o.!";
			mes "Eu disse isso em voz alta?";
			mes "Devia ter ficado calado!";
			mes "Me desculpeee!";
			mes "Sou realmente um cabe�udo, n�?";
			next;
			mes "[Boneco de Neve]";
			mes "�...";
			mes "Poze est� apaixonado pela Duffle.";
			mes "E ela � bondosa com todo mundo, menos com ele.";
			next;
			mes "[Boneco de Neve]";
			mes "Mas eu sei que ela faz isso porque gosta muito dele!";
			mes "Hee hee hee!";
			close2; cutin ("",255); end;
		} else if (bardq == 7) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Oh...?";
			mes "Voc� conheceu o";
			mes "^3355FFCantata, o Tio Cabeludo^000000?";
			next;
			cutin ("rutie_snownow02.bmp",2);
			mes "[Boneco de Neve]";
			mes "Bem, ele fala muito alto, n�o toma banho e cheira que nem comida podre.";
			mes "Mas ele � muito legal e bondoso.";
			mes "Todos adoram ele!";
			next;
			mes "[Boneco de Neve]";
			mes "E ele adora beber coisas estranhas.";
			mes "� um milagre que n�o passe mal. Hee hee.! Ah, eu amo aquele cara!";
			close2; cutin ("",255); end;
		} else if (bardq == 8) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Oh...?";
			mes "Voc� conheceu a ^3355FFTia Mima^000000?";
			next;
			mes "[Boneco de Neve]";
			mes "Bem, ela adora vegetais mesmo.";
			mes "Voc� poderia entregar isso para ela? Estive guardando nos �ltimos tempos.";
			next;
			mes "^3355FFBoneco de Neve te d� O Melhor Sal do Mundo^000000.";
			next;
			mes "[Boneco de Neve]";
			mes "Adoro a comida dela, � deliciosa!";
			mes "Ela me traz suco de uva com flocos de neve.";
			mes "Bem, por favor entregue para ela, amigo.!";
			bardq = 9;
			close2; cutin ("",255); end;
		} else if (bardq == 9) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "'^3355FFUm item para colher vegetais^000000...'";
			mes "Uau. A Tia Mima adora vegetais, ent�o ela gostaria disso!";
			close2;
			cutin ("",255);
			end;
		} else if (bardq == 10) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Hashokii, o palha�o sem-gra�a?";
			mes "Ele n�o parece muito engra�ado mesmo.";
			mes "Mas ele se importa muito com as outras pessoas.";
			next;
			mes "[Boneco de Neve]";
			mes "Ele faz de tudo para que aqueles �rf�os d�em risada e esque�am os problemas...";
			close2; cutin ("",255); end;
		} else if (bardq == 11) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Ah...";
			mes "Ent�o voc� conheceu o Charu Charu?";
			mes "Aquele menino � muito otimista e sempre olha para o futuro.";
			mes "Aposto que vai se dar muito bem quando crescer!";
			next;
			mes "[Boneco de Neve]";
			mes "Ali�s, tenho certeza!";
			mes "Hee hee hee.!";
			close2; cutin ("",255); end;
		} else if (bardq == 12) {
			cutin ("rutie_snownow01.bmp",2);
			mes "[Boneco de Neve]";
			mes "Muito obrigado por me ouvir por tanto tempo.";
			mes "Gostei muito que voc� tentou me entender, mesmo sendo um estranho.";
			next;
			mes "[Boneco de Neve]";
			mes "Agora voc� me conhece melhor que muita gente nessa cidade.";
			mes "Eu gostaria de te dar um presentinho!";
			next;
			mes "[Boneco de Neve]";
			mes "Tah dah!";
			mes "Escolha o que voc� quiser daqui!";
			next;
			mes "[Boneco de Neve]";
			mes "^3355FFVoc� sorteia um presente de dentro da bolsa m�gica de Boneco de Neve^000000.";
			next;
			switch(rand(8)) {
				case 1:
				getitem (Candy,5);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Wow.!";
				mes "^3355FF5 Balas^000000!";
				mes "Parab�ns!";
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
				mes "Wow, Isso � perfeito!";
				mes "^3355FF10 Bengalas Doce^000000!";
				break;
				case 5:
				getitem (Piece_Of_Cake,1);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Wow, Isso � perfeito!";
				mes "^3355FF1 Peda�os de Bolo^000000!";
				break;
				case 6:
				getitem (Piece_Of_Cake,2);
				cutin ("rutie_snownow02.bmp",2);
				mes "[Boneco de Neve]";
				mes "Wow, Isso � perfeito!";
				mes "^3355FF2 Peda�os de Bolo^000000!";
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
		mes "Em volta dessa cidade maravilhosa, aben�oada pelo Natal, tem uma f�brica horr�vel, amaldi�oada pelo Natal.";
		next;
		mes "[Boneco de Neve]";
		mes "Ouvi dizer que � bem decorada e parece uma f�brica de brinquedos, onde tudo � bonitinho.";
		mes "Tem soldadinhos de brinquedos e caixas de presente por todos os lados.";
		next;
		cutin ("rutie_snownow02.bmp",2);
		mes "[Boneco de Neve]";
		mes "Isso n�o � muuito legal?!";
		mes "*Suspiro*";
		mes "Mesmo sabendo que � uma dungeon, gostaria de ir l� dar uma olhada.";
		mes "Se eu fosse um menino de verdade, ou se ao menos tivesse pernas...";
		close2; cutin ("",255); end;
		case 3:
		cutin ("rutie_snownow03.bmp",2);
		mes "[Boneco de Neve]";
		mes "At� mais, amigo.!";
		mes "Obrigado por me ouvir.";
		mes "Espero te ver novamente!";
		mes "Voc� sempre estar� no meu cora��o!";
		close2; cutin ("",255); end;
	}
}

// ------------------------------------------------------------------
xmas,117,304,4	script	Poze#bardq	4_M_06,{
	if (bardq == 5) {
		mes "[Poze]";
		mes "Voc� foi falar com ^3355FFBoneco de Neve^000000 e ele mencionou o meu nome?";
		next;
		mes "[Poze]";
		mes "Entendo...";
		mes "Ele � um boneco de neve que n�o tem pernas.";
		mes "N�o me surpreende que nunca tenha vindo me visitar.";
		mes "Que vergonha!";
		mes "Eu que deveria ir visit�-lo.";
		next;
		mes "[Poze]";
		mes "Ah, lembrei de algu�m que sabe como Boneco de Neve come�ou a falar.";
		mes "� o ^3355FFCantata, o Tio Cabeludo^000000...";
		next;
		mes "[Poze]";
		mes "Um dia, o aprendiz de um grande Alquimista veio visitar Lutie, e eu ouvi uma conversa dele com o Tio Cabeludo.";
		next;
		mes "[Poze]";
		mes "Muito tempo atr�s, um poderoso Alquimista chegou na terra natal de Boneco de Neve, e encontrou-o morrendo, derretendo e virando �gua.";
		mes "Mas Boneco de Neve foi reanimado pelo Alquimista.";
		next;
		mes "[Poze]";
		mes "E isso � tudo que sei.";
		mes "Para saber detalhes, converse com o ^3355FFTio Cabeludo Cantata.^000000.";
		bardq = 6;
		close;
	} else {
		mes "[Poze]";
		mes "Bem vindo a Lutie, a cidade que aben�oa os visitantes com o esp�rito de Natal!";
		mes "Feliz Natal!";
		next;
		mes "[Poze]";
		mes "Aqui nessa terra m�gica voc� pode aproveitar o esp�rito de Natal durante o ano todo.! N�o � maravilhoso?";
		next;
		mes "[Poze]";
		mes "Lutie n�o � apenas um lugar tur�stico.";
		mes "Temos lojas e tudo que as outras cidades tem, mas em um ambiente festivo.";
		next;
		mes "[Poze]";
		mes "Ent�o se voc� quiser passar um tempo aqui n�o vai se arrepender. Feliz Natal.";
		close;
	}
}

// ------------------------------------------------------------------
xmas,176,236,4	script	Hairy#bardq	4_M_05,{
	if (bardq == 6) {
		if (countitem(Chinese_Ink) && countitem(Sticky_Mucus)) {
			mes "[Hairy]";
			mes "Oh? Vo-voc� trouxe os ingredientes? ����timo.";
			mes "Faz tanto tempo que n�o provo disso... D�-d� para mim!";
			next;
			delitem (Chinese_Ink,1);
			delitem (Sticky_Mucus,1);
			bardq = 7;
			mes "^3355FFVoc� rapidamente d� a ele o Tinta de Polvo e o Muco Pegajoso,";
			mes "E olha com um pouco de nojo enquanto ele saboreia o drinque.^000000";
			next;
			mes "[Hairy]";
			mes "*Burrrrpppp.*";
			mes "Bem, � hora da hist�ria.";
			mes "Lembre-se que � tudo que sei.";
			mes "N�o sei quanto voc� j� ouviu...";
			next;
			mes "[Hairy]";
			mes "Muito tempo atr�s, havia um poderoso Alquimista vivendo no Norte.";
			mes "Seu nome era ^3355FFPhilip Varsez^000000!";
			next;
			mes "[Hairy]";
			mes "Ele era um pioneiro em pesquisas sobre Alquimia, e precisava de materiais raros para seus estudos.";
			mes "Por isso, viajava o mundo atr�s de materiais que continham energia m�gica...";
			next;
			mes "[Hairy]";
			mes "Um dia, suas viagens levaram-no para um vilarejo no Norte, conhecido por seu tempo frio.";
			mes "Mas ao chegar l�, ele se deparou com uma cidade destru�da.";
			next;
			mes "[Hairy]";
			mes "Era uma vis�o terr�vel:";
			mes "As pessoas jaziam na cal�ada, moribundas.";
			mes "Quando viam Varsez, imploravam para que ele os matasse e acabasse com a agonia.";
			next;
			mes "[Hairy]";
			mes "Entre os gritos de desespero, o choro de duas crian�as chegou aos ouvidos de Philip Varsez.";
			mes "Ele correu e achou dois beb�s agarrados em um boneco de neve que se derretia.";
			next;
			mes "[Hairy]";
			mes "Aquele boneco de neve...";
			mes "Era ^3355FFBoneco de Neve^000000.";
			next;
			mes "[Hairy]";
			mes "Sendo o poderoso Alquimista que era, Varsez percebeu que Boneco de Neve se sacrificara para proteger os beb�s do desastre que ca�ra sobre o vilarejo.";
			next;
			mes "[Hairy]";
			mes "Varsez ficou emocionado e decidiu salvar a vida do boneco com seus poderes.";
			mes "E o trouxe para Lutie, o lugar mais seguro do mundo.";
			next;
			mes "[Hairy]";
			mes "Claro, tamb�m existem rumores de que Boneco de Neve p�de sobreviver n�o s� pela piedade do Alquimista.";
			mes "Mas tamb�m pela neve com a qual era feito.";
			next;
			mes "[Hairy]";
			mes "Acredita-se que a neve que formou Boneco de Neve cobria um campo misterioso, supostamente cheio de flores m�gicas.";
			next;
			mes "[Hairy]";
			mes "Muhahaha.";
			mes "Bem, isso � tudo que sei.";
			mes "Espero que voc� tenha gostado da minha hist�ria!";
			next;
			mes "[Hairy]";
			mes "Bem...";
			mes "Agora que penso nisso...";
			next;
			mes "[Hairy]";
			mes "Boneco de Neve n�o s� fala, mas tamb�m tem um estoque inacab�vel de presentes de Natal.";
			mes "Pelo menos foi o que me disseram.";
			next;
			mes "[Hairy]";
			mes "^3355FFMima^000000, a mulher dos vegetais, sabe mais sobre isso.";
			mes "Voc� devia ir falar com ela.";
			mes "Feliz Natal!";
			close;
		} else {
			mes "Humm... Foi Poze quem falou sobre mim?";
			mes "He he he! Sei sim sobre Boneco de Neve.";
			mes "Pode me considerar com o ponto fraco dele, j� que...";
			next;
			mes "[Hairy]";
			mes "Eu sei";
			mes "o segredo do";
			mes "^3355FFnascimento de Boneco de Neve^000000!!";
			next;
			mes "[Hairy]";
			mes "Est� curioso?";
			mes "Heh heh heh. Bom, n�o vou te contar sem ganhar nada em troca.";
			next;
			mes "[Hairy]";
			mes "O ruim de morar nessa cidade � que n�o tenho nenhuma chance de tomar um drinque de verdade.";
			mes "Vejamos, me traga...";
			next;
			mes "[Hairy]";
			mes "^3355FF1 Tinta de Polvo e 1 Muco Pegajoso^000000!";
			next;
			mes "[Hairy]";
			mes "Wahhahaha!";
			mes "Por que est� me olhando assim?!";
			mes "Meu gosto n�o � da sua conta! Ao trabalho.!";
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
		mes "Tenha cuidado para n�o pegar a Gripe de Lutie.";
		mes "...";
		next;
		mes "[Hairy]";
		mes "*Suspiro*";
		mes "Isso me lembra...";
		mes "Meu filho pegou uma Gripe de Lutie muito forte um tempo atr�s.";
		next;
		mes "[Hairy]";
		mes "Foi durante a noite, eu n�o tinha onde buscar rem�dios e parecia que n�o havia o que fazer.";
		next;
		mes "[Hairy]";
		mes "Achei que o m�nimo que poderia fazer por ele era pegar algo frio para tentar abaixar sua febre.";
		mes "Mas a neve de Lutie derretia assim que tocava em sua testa.";
		mes "Ele estava queimando em febre e eu n�o conseguia alivi�-lo.";
		next;
		mes "[Hairy]";
		mes "E foi a� que eu soube que precisaria de gelo m�gico.";
		next;
		mes "[Hairy]";
		mes "Acabei chegando na Dungeon Natalina e l� encontrei, gra�as a Deus, uma criatura inteira de gelo!";
		next;
		mes "[Hairy]";
		mes "Era um ^3355FFPoring de Gelo^000000!";
		mes "Os habitantes locais chamam-no de 'Icepantzering.'";
		mes "De qualquer modo, salvei a vida do meu filho com isso.";
		mes "Agrade�o at� hoje por ter encontrado algo assim nessa cidade.";
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
		mes "Hmm? Aquele cabeludo falou bem de mim, n�o �?";
		mes "Bem...";
		next;
		mes "[Mima]";
		mes "Eu sei o que ele quer...";
		mes "Ho ho ho.!";
		mes "Ele quer me deixar feliz para que eu d� a ele vegetais de gra�a! Ah bem.!";
		next;
		mes "[Mima]";
		mes "Ele me conhece bem. Sempre acaba ganhando vegetais de gra�a.";
		mes "Sim, porque os meus s�o os melhores da cidade!";
		next;
		mes "[Mima]";
		mes "Hmmm.?";
		mes "Voc� quer saber sobre ^3355FFBoneco de Neve^000000?";
		mes "Ah. Sim, sim, entendo...";
		next;
		mes "[Mima]";
		mes "Bem, n�o posso deixar qualquer um saber sobre algu�m t�o importante quanto Boneco de Neve.";
		mes "Hmmm...";
		next;
		mes "[Mima]";
		mes "Boneco de Neve est� guardando ^3355FFO Melhor Sal do Mundo^000000 para mim.";
		mes "� algo muito importante, que eu uso para temperar vegetais.";
		next;
		mes "[Mima]";
		mes "Se voc� realmente for amigo do Boneco de Neve, ele confiar� em voc� para me devolver.";
		mes "E de qualquer forma, eu preciso do Sal de volta.";
		next;
		mes "[Mima]";
		mes "Agora seja um bom menino e se apresse.";
		mes "Volte r�pido.";
		bardq = 8;
		close;
	} else if (bardq == 9) {
		mes "[Mima]";
		mes "Hohohohoh hohohohoho !";
		mes "Vejamos, vejamos...";
		mes "Obrigada, querido, obrigada.";
		next;
		mes "^3355FFVoc� devolveu a ela";
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
		mes "Ah �, quase esqueci a minha promessa.";
		mes "Voc� quer saber sobre o dom m�gico de Boneco de Neve, n�o �?";
		next;
		mes "[Mima]";
		mes "Se voc� ja falou com o Tio Cantata.;";
		mes "Sabe que Boneco de Neve foi feito com uma neve misteriosa, que cobria um campo de flores m�gicas.";
		next;
		mes "[Mima]";
		mes "Posso te dizer que quando Boneco de Neve foi revivido.";
		mes "Houve uma rea��o entre os materiais do Alquimista e a energia contida na neve de Boneco de Neve.";
		next;
		mes "[Mima]";
		mes "Por alguma raz�o, Boneco de Neve tem uma Caixa de Presentes que cria quantos presentes ele quiser.";
		mes "Como se fosse o Papai Noel.";
		next;
		mes "[Mima]";
		mes "Claro, se esse poder ca�sse nas m�os do mal, ter�amos problemas.";
		next;
		mes "[Mima]";
		mes "Mas todo mundo sabe que Boneco de Neve � bondoso e carinhoso com os outros.";
		mes "Ent�o nunca nos preocupamos com isso.";
		next;
		mes "[Mima]";
		mes "Ah, e eu ouvi not�cias incr�veis.";
		mes "Quem me contou foi ^3355FFHashokii^000000 o palha�o.";
		mes "� uma hist�ria muito interessante.";
		mes "Voc� deveria ir falar com ele.";
		bardq = 10;
		close;
	} else {
		mes "[Mima]";
		mes "Feliz Natal.";
		mes "Ho! Ho! Ho!";
		next;
		mes "[Mima]";
		mes "Sinto o esp�rito de Natal em todo lugar!";
		mes "At� nos olhos dos jovens viajantes que v�m at� Lutie.";
		mes "Hoho, desejo a voc� um Natal muito feliz!";
		close;
	}
}

// ------------------------------------------------------------------
xmas,146,136,4	script	Hashokii#bardq	4_M_PIERROT,{
	if (bardq == 10) {
		mes "[Hashokii]";
		mes "Sabe os beb�s que Boneco de Neve salvou?";
		mes "Acho que Charu Charu e Marcell n�o sabem disso.";
		next;
		mes "[Hashokii]";
		mes "Boneco de Neve me contou como ele tentou bloquear a enorme bola de fogo que iria cair nos beb�s.";
		mes "Ele estava disposto a se sacrificar por eles.";
		next;
		mes "[Hashokii]";
		mes "Por que voc� n�o procura as crian�as?";
		mes "Eles talvez te contem a hist�ria completa.";
		mes "Boa sorte.!";
		bardq = 11;
		close;
	} else {
		mes "[Hashokii]";
		mes "Feellliiizz Natal.!";
		mes "La La La.!";
		mes "Dum di Dum di Dum!";
		next;
		switch(select("E a� cara, beleza?","Sobre Boneco de Neve","Cancelar")) {
			case 1:
			mes "[Hashokii]";
			mes "La La La.!";
			mes "Dum di Dum di Dum!";
			mes "Ooh, estou pensando em um show para animar o Charu Charu e a Marcell!";
			close;
			case 2:
			mes "[Hashokii]";
			mes "Ah... ^3355FFBoneco de Neve^000000?";
			mes "Claro que conhe�o ele!";
			mes "Qualquer um que n�o conhe�a com certeza n�o mora aqui!";
			mes "De vez em quando vou l� conversar com ele...";
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
		mes "Charu Charu e eu somos �rf�os, e n�o lembro dos nossos pais.";
		mes "Fomos criados pelo povo de Lutie.";
		next;
		mes "[Marcell]";
		mes "O Tio Cantata e a Tia Mima nos tratam como filhos, e Poze e Duffle s�o como nossos irm�os!";
		next;
		mes "[Marcell]";
		mes "Eles s�o bons e generosos, e n�s agradecemos muito tudo o que fazem para cuidar de n�s!";
		next;
		mes "[Marcell]";
		mes "Ouvi dizer que Boneco de Neve tamb�m n�o tem pais.";
		mes "E tamb�m ouvi que ele n�o nasceu aqui.";
		next;
		mes "[Marcell]";
		mes "Ouvi dizer que Boneco de Neve e n�s somos do mesmo lugar, mas n�o tenho certeza.";
		mes "Mas sei que Boneco de Neve e eu temos o mesmo tipo de queimaduras no corpo.";
		next;
		mes "[Marcell]";
		mes "Charu Charu e eu temos queimaduras nas costas, e Boneco de Neve tamb�m tem uma bem grande.";
		mes "Acho que o que foi que fez isso, fez em n�s tr�s de uma vez...";
		next;
		mes "[Marcell]";
		mes "Hum, deixa eu ver...";
		mes "Voc� quer saber tudo sobre Boneco de Neve porque quer ser amigo dele!";
		mes "Ah, ele vai ficar t�o feliz quando souber disso! Talvez at� te d� um presente! Boa sorte!";
		bardq = 12;
		close;
	} else if (bardq == 13) {
		mes "[Marcell]";
		mes "Voc� sabe mais sobre Boneco de Neve do que qualquer outro!";
		mes "V� falar com ele, ele vai ficar feliz de ver que voc� se importa com ele.";
		mes "Feliz Natal!";
		close;
	} else {
		mes "[Marcell]";
		mes "Estou congelando aqui...!";
		mes "E Charu Charu me deixa com mais frio ainda com essas piadas rid�culas.";
		mes "E o vento est� t�o forte!";
		next;
		mes "[Marcell]";
		mes "Sabe de uma coisa? Boneco de Neve tem um poder especial.";
		mes "Ele pode fazer tantos presentes quanto o Papai Noel! Isso n�o � �timo?";
		next;
		mes "[Marcell]";
		mes "Huh? Por que est� me olhando assim?";
		mes "Boneco de Neve tem uma grande caixa de presentes e distribui lembran�as quando quer.";
		mes "N�o � dif�cil acreditar nisso!";
		close;
	}
}

