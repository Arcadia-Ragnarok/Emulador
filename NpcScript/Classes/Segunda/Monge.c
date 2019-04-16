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
| - Copyright: Spell Master (22/09/2017)                            |
| - Info: Quest de Mudança de Classe para Monge.                    |
\*-----------------------------------------------------------------*/

prt_monk,59,247,1	script	Monge Guardião#monkq	2_M_PHARMACIST,{
	if (BaseJob == Job_Acolyte) {
		if (!monkq) {
			mes "[Monge Guardião]";
			mes "Hum?";
			mes "O que veio fazer aqui?";
			mes "Se você deseja entrar nesta área sagrada, você deve me dizer o seu nome.";
			next;
			mes "[Monge Guardião]";
			mes "Agora, por favor me diga o seu nome e nível de classe.";
			next;
			if (select("Ignorar","Dizer") == 1) {
				mes "[Monge Guardião]";
				mes "Por favor então, saia!";
				close;
			} else {
				mes "[Monge Guardião]";
				mes strcharinfo(CHAR_NAME)+" é seu nome?";
				mes "...Eu falei certo?";
				next;
				mes "[Monge Guardião]";
				mes "Muito bem ...";
				mes "Por que você veio aqui "+strcharinfo(CHAR_NAME)+"?";
				next;
				if (select("Aprender sobre os Monges","Me tornar Monge") == 1) {
					mes "[Monge Guardião]";
					mes "Entendo...";
					mes "Nós monges vivemos nossas vidas para a iluminação espiritual.";
					mes "Melhoramos os nossos corpos, bem como as nossas mentes.";
					mes "Para chegar a verdadeira paz interior.";
					mes "Que você encontre sua paz interior.";
					close;
				} else {
					mes "[Monge Guardião]";
					mes "Hum, me parece que você esteve treinando para isto...";
					mes "Isso é bom.";
					mes "Vá ver o nosso sensei Moohae e fale com ele.";
					mes "Ele irá ajudá-lo a começar seu treinamento.";
					monkq = 1;
					setquest(3016);
					close;
				}
			}
		} else if (monkq == 1) {
			mes "[Monge Guardião]";
			mes "Não sabe onde encontrar o sensei Moohae?";
			mes "Ele está na área sudeste no \"Salão dos Monges\".";
			close;
		} else if (monkq == 16) {
			mes "[Monge Guardião]";
			mes "Vejam só!";
			mes "Meus parabéns por passar em todos os testes.";
			mes "Agora você deve ir até o Ancião Moohae";
			close;
		} else {
			mes "[Monge Guardião]";
			mes "Espero que você se saia bem em seu treinamento, eu estou ansioso para vê-lo novamente.";
			close;
		}
	} else if (BaseJob == Job_Monk) {
		mes "[Monge Guardião]";
		mes "Como está indo seu treinamento?";
		close;
	} else {
		mes "[Monge Guardião]";
		mes "Por favor não pertube esse lugar.";
		mes "É um local que deve ser preservado em paz.";
		mes "Aqui é onde noviços se tornam monges.";
		close;
	}
}

// ------------------------------------------------------------------
monk_in,99,58,1	script	Sensei Moohae#monkq	1_M_PASTOR,{
	if (BaseJob == Job_Acolyte) {
		if (!monkq) {
			mes "[Sensei Moohae]";
			mes "Você é...um noviço..?";
			mes "Se você procura consulta, vá ao Santuário em Prontera.";
			mes "Este lugar é para Monges, não para você.";
			mes "A menos que você pretenda se tornar um monge....";
			close;
		} else if (monkq == 1) {
			mes "[Sensei Moohae]";
			mes "Saudações, você parece estar em um caminho puro.";
			mes "O que posso fazer por você hoje?";
			next;
			mes "[Sensei Moohae]";
			mes "Eu sinto um espírito de luta, você deseja se tornar monge? ";
			next;
			if (select("Sim","Não") == 2) {
				mes "[Sensei Moohae]";
				mes "As minhas desculpas...";
				mes "Já faz algum tempo desde que eu senti alguém com sua força.";
				mes "Espero que você encontre seu caminho jovem.";
				close;
			} else {
				mes "[Sensei Moohae]";
				mes "Há ainda aqueles que desejam seguir os caminhos dos antigos.";
				mes "Como "+(Sex == SEX_MALE ? "um homem jovem e forte.":"uma flor delicada.");
				mes "Tenho prazer em ver a sua vontade de se juntar a nós.";
				next;
				mes "[Sensei Moohae]";
				mes "Bem, existem algumas coisas que você deve saber antes de começar seu treinamento.";
				next;
				mes "[Sensei Moohae]";
				mes "Nós, os monges, seguimos um caminho de paz interior e iluminação.";
				mes "Nos esforçamos para trazer a paz para todos os outros.";
				next;
				mes "[Sensei Moohae]";
				mes "Nós monges conseguimos isso a partir do treinamento físico e mental.";
				mes "Procuramos a iluminação em nosso ambiente e na natureza.";
				next;
				mes "[Sensei Moohae]";
				mes "É, naturalmente, importante sempre manter a nossa fé original em Deus.";
				next;
				mes "[Sensei Moohae]";
				mes "Esta não é uma vida fácil.";
				mes "E o verdadeiro desafio de se tornar um monge.";
				mes "É ter a capacidade de suportar tudo o que eu disse...";
				mes "A vida de um monge não é para todos.";
				mes "Apenas aqueles que são fortes podem se tornar monge.";
				next;
				mes "[Sensei Moohae]";
				mes "Agora, que você entende tudo isso.";
				mes "Prepare-se para treinar sua força e espírito.";
				next;
				mes "[Sensei Moohae]";
				mes "Comecemos com uma tarefa simples.";
				next;
				switch (rand(7)) {
					case 1:
					setarray(.@mk_itm[0],938,5, 1055,10, 511,20);
					changequest(3016,3017);
					monkq = 2;
					break;
					case 2:
					setarray(.@mk_itm[0],942,20, 1002,5, 510,3);
					changequest(3016,3018);
					monkq = 3;
					break;
					case 3:
					setarray(.@mk_itm[0],905,30, 909,5, 955,10);
					changequest(3016,3019);
					monkq = 4;
					break;
					case 4:
					setarray(.@mk_itm[0],943,5, 935,20, 912,5);
					changequest(3016,3020);
					monkq = 5;
					break;
					case 5:
					setarray(.@mk_itm[0],7053,5, 509,10, 508,10);
					changequest(3016,3021);
					monkq = 6;
					break;
					case 6:
					setarray(.@mk_itm[0],913,10, 948,4, 7033,20);
					changequest(3016,3022);
					monkq = 7;
					break;
					default:
					setarray(.@mk_itm[0],1027,5, 1025,20, 1042,10);
					changequest(3016,3023);
					monkq = 8;
					break;
				}
				next;
				mes "[Sensei Moohae]";
				mes "^cc0000"+.@mk_itm[1]+" "+getitemname(.@mk_itm[0])+"^000000,";
				mes "^cc0000"+.@mk_itm[3]+" "+getitemname(.@mk_itm[2])+"^000000,";
				mes "^cc0000"+.@mk_itm[5]+" "+getitemname(.@mk_itm[4])+"^000000.";
				mes "Reúna estes itens e volte a falar comigo.";
				close;
			}
		} else if (monkq > 1 && monkq < 9) {
			switch (monkq) {
				case 2: setarray(.@mk_itm[0],938,5,  1055,10, 511,20);  break;
				case 3: setarray(.@mk_itm[0],942,20, 1002,5,  510,3);   break;
				case 4: setarray(.@mk_itm[0],905,30, 909,5,   955,10);  break;
				case 5: setarray(.@mk_itm[0],943,5,  935,20,  912,5);   break;
				case 6: setarray(.@mk_itm[0],7053,5, 509,10,  508,10);  break;
				case 7: setarray(.@mk_itm[0],913,10, 948,4,   7033,20); break;
				case 8: setarray(.@mk_itm[0],1027,5, 1025,20, 1042,10); break;
			}
			if (countitem(.@mk_itm[0]) < .@mk_itm[1] && countitem(.@mk_itm[2]) < .@mk_itm[3] && countitem(.@mk_itm[4]) < .@mk_itm[5]) {
				mes "[Sensei Moohae]";
				mes "Como você pode pensar que está preparado?";
				mes "Você não trouxe o que eu pedi!";
				mes "^cc0000"+.@mk_itm[1]+" "+getitemname(.@mk_itm[0])+"^000000,";
				mes "^cc0000"+.@mk_itm[3]+" "+getitemname(.@mk_itm[2])+"^000000,";
				mes "^cc0000"+.@mk_itm[5]+" "+getitemname(.@mk_itm[4])+"^000000.";
				mes "Estes são os itens que eu preciso, encontre todos.";
				close;
			} else {
				mes "[Sensei Moohae]";
				mes "Muito bem, você encontrou todos os itens.";
				mes "Direi isso para os anciões.";
				monkq = 9;
				changequest(3017,3024);
				delitem(.@mk_itm[0],.@mk_itm[1]);
				delitem(.@mk_itm[2],.@mk_itm[3]);
				delitem(.@mk_itm[4],.@mk_itm[5]);
				next;
				mes "[Sensei Moohae]";
				mes "Vamos ver qual será a próxima etapa...";
				mes "Ah... vá encontrar Touha.";
				mes "Ela está ao noroeste desse lugar sagrado.";
				close;
			}
		} else if (monkq == 9 || monkq == 10) {
			mes "[Sensei Moohae]";
			mes "Eu já te disse.";
			mes "Vá procurar ^cc0000Touha^000000.";
			mes "Ela está a noroeste de aqui.";
			close;
		} else if (monkq == 16 || monkq == 17) {
			if (SkillPoint) {
				mes "[Sensei Moohae]";
				mes "Você ainda não pode mudar de classe enquanto tiver pontos de habilidade sobrando.";
				mes "Volte depois de usar todos os pontos restantes.";
				close;
			} else {
				if (monkq == 16) {
					mes "[Sensei Moohae]";
					mes "Você já terminou todos os testes não foi?";
					next;
					mes "[Sensei Moohae]";
					mes "Sim você terminou...";
					next;
					mes "[Sensei Moohae]";
					mes "Antes que você possa se tornar Monge, farei algumas perguntas a você.";
				} else {
					mes "[Sensei Moohae]";
					mes "Reavaliou seu pensamento?";
					mes "Então vamos tentar novamente...";
				}
				next;
				mes "[Sensei Moohae]";
				mes "Você irá dedicar o resto de sua vida à busca pela pureza?";
				next;
				if (select("Sim","Não") == 2) {
					mes "[Sensei Moohae]";
					mes "....Com esse tipo de resposta...";
					mes "Você não tem o coração puro o suficiente para se tornar monge.";
					mes "Você não sente que sofreu o suficiente?";
					next;
					mes "[Sensei Moohae]";
					mes "Pense nisso um pouco mais e volte!";
					mes "Não podemos aceitar um monge que está contaminado com dúvidas...";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Você vai tirar proveito das habilidades que ganhou através de nosso treinamento.";
				mes "Somente para usar em benefício próprio?";
				next;
				if (select("Sim","Não") == 1) {
					mes "[Sensei Moohae]";
					mes "...Então não podemos aceitá-l"+(Sex == SEX_MALE ? "o":"a")+" como um monge.";
					mes "Nós, os monges, não praticamos nossas habilidades para benefício próprio.";
					mes "Nós conduzimos nossas vidas honradamente.";
					next;
					mes "[Sensei Moohae]";
					mes "Volte de onde você veio e reconsidere o que significa ser um monge...";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Você vai punir aqueles que são contra aVerdade e Justiça?";
				next;
				if (select("Sim","Não") == 2) {
					mes "[Sensei Moohae]";
					mes "Quem você acha que nós, os monges somos!";
					mes "Qualquer criatura que seja afavor a vontade proveniente da escória do mundo não é digna de existir!";
					next;
					mes "[Sensei Moohae]";
					mes "Volte quando você estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para enfrentar e eliminar o que é mau.";
					mes "Então você irá saber o que você tem que fazer em seguida.";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Você vai cooperar com os outros que têm o mesmo objetivo que o seu.";
				mes "Sacrificar-se do começo ao fim?";
				next;
				if (select("Sim","Não") == 2) {
					mes "[Sensei Moohae]";
					mes "Você disse que não ...?";
					mes "Isto é inaceitável...";
					mes "Se você pode ajudar seus companheiros, sacrificando a si mesmo.";
					mes "Isso é uma verdadeira demonstração de pureza.";
					next;
					mes "[Sensei Moohae]";
					mes "Volte e contemple o que significa sacrificar-se por aqueles que você se importa.";
					mes "Sacrificar-se pelos outros pode parecer fácil.";
					mes "Mas é a coisa mais difícil de fazer como um ser humano.";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Você está disposto a morrer pelos outros em sua jornada de monge?";
				next;
				if (select("Sim","Não") == 2) {
					mes "[Sensei Moohae]";
					mes "Você não pode se tornar um monge com tal atitude!!!";
					mes "Se pudermos eliminar pelo menos mais um inimigo nosso dever é fazê-lo.";
					mes "Mesmo sacrificando a nós mesmos, é o que se espera de nós.";
					mes "Para isso que somos treinados para sermos executores sagrados.";
					next;
					mes "[Sensei Moohae]";
					mes "Se você não está disposto a sacrificar-se por aqueles que você se preocupa.";
					mes "Como você pensa que chegará a verdadeira iluminação?";
					mes "Reflita sobre o verdadeiro significado da vida e da morte!!";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Então o seu treinamento está completo...";
				mes "Por favor, chegue mais perto.";
				if (Sex == SEX_MALE) {
					mes "Acolhemos você irmão, em nossa batalha santa contra o mal!";
				} else {
					mes "Acolhemos você irmã, em nossa batalha santa contra o mal!";
				}
				next;
				mes "[Sensei Moohae]";
				if (Sex) {
					mes "Meu irmão, o seu juramento foi ouvido por todos ao nosso redor.";
				} else {
					mes "Minha irmã, o seu juramento foi ouvido por todos ao nosso redor.";
				}
				next;
				mes "[Sensei Moohae]";
				mes "Vou agora realizar as técnicas finais sobre o seu corpo...";
				next;
				mes "[Sensei Moohae]";
				mes "Vou usar essas técnicas antigas para amplificar sua força.";
				mes "Através da utilização de pontos de pressão sobre seu corpo.";
				next;
				mes "[Sensei Moohae]";
				mes "Feche seus olhos......";
				next;
				mes "[Sensei Moohae]";
				mes "E relaxe seu corpo....";
				next;
				mes "^00cccc- Você respira profundamente -^000000";
				next;
				mes "^cc0000- Você sente dedos cutucando-lhe todo o seu corpo com rapidez -^000000";
				next;
				mes "[Sensei Moohae]";
				mes "Kiiii...Yahahhhhhhh!!!";
				next;
				mes "[Sensei Moohae]";
				mes "Ooooohaaa!!!";
				next;
				mes "[Sensei Moohae]";
				mes "Kiii...Yahahhhhhhh!!!";
				next;
				mes "[Sensei Moohae]";
				mes "Haa. Haa. Haa.!!!!!";
				next;
				mes "[Sensei Moohae]";
				mes ".... Agora abra seus olhos......";
				next;
				mes "[Sensei Moohae]";
				mes "....E veja a vida através dos olhos de um monge.";
				next;
				.@jl = JobLevel;
				jobchange(Job_Monk);
				completequest(3032);
				callfunc("ClearJobQuest2nd",15);
				mes "[Sensei Moohae]";
				mes "Você se tornou Monge.";
				next;
				mes "[Sensei Moohae]";
				mes "Bem...";
				mes "Eu acho que eu sou velho demais para fazer isso...";
				mes "Eu era melhor quando era mais jovem...";
				next;
				mes "[Sensei Moohae]";
				mes "De qualquer maneira, você é monge agora.";
				next;
				mes "[Sensei Moohae]";
				mes "Eu espero que você mantenha seu voto..";
				next;
				mes "[Sensei Moohae]";
				mes "E continue sua formação no caminho mais árduo.";
				next;
				mes "[Sensei Moohae]";
				mes "Agora...";
				mes "Você deve ir aonde vento lhe levar.";
				mes "Ah, e eu tenho um presente para você antes de sair.";
				if (.@jlevel == 50) { getitem(Knuckle_Duster_,1); }
				else { getitem(Waghnakh,1); }
				close;
			} 
		} else {
			mes "[Sensei Moohae]";
			mes "Parece que você ainda tem tarefas a cumpri.";
			mes "Volte depois de passar em todos os testes.";
			close;
		}
	} else if (BaseJob == Job_Monk) {
		mes "[Sensei Moohae]";
		mes "Devemos sempre continuar a nossa formação na vida e permanecer fiéis no nosso caminho.";
		mes "Caso contrário, o mal virá manchar nossa mente com impurezas.";
		next;
		mes "[Sensei Moohae]";
		mes "Não se esqueça de seus votos.";
		mes "Fique em seu caminho e não deixe que qualquer mal suje seu coração puro.";
		close;
	} else {
		mes "[Sensei Moohae]";
		mes "Se você procura consulta, vá ao Santuário de Prontera.";
		mes "Nós não temos nada de interesse seu aqui, por favor saia e não perturbe os outros monges.";
		close;
	}
}

// ------------------------------------------------------------------
prt_monk,251,255,1	script	Touha#monkq	1_F_PRIEST,{
	if (BaseJob == Job_Acolyte) {
		if (monkq < 9) {
			mes "[Touha]";
			mes "Nunca deve ser derramado sangue inocente.";
			next;
			mes "[Touha]";
			mes "No entanto, o sangue dos ímpios deve fluir como um rio.";
			next;
			mes "[Touha]";
			mes "Vamos abrir nossas asas escurecidas e sermos o martelo do deus vingativo.";
			next;
			mes "[Touha]";
			mes "Vamos fluir um rio diante de ti, e repleto de almas ele sempre deve ser.";
			next;
			mes "[Touha]";
			mes "Em nome do Pai, do Filho e do Espírito Santo.";
			next;
			mes "[Touha]";
			mes "...Você não precisa ter medo de mim...";
			close;
		} else if (monkq == 9 || monkq == 10) {
			if (monkq == 9) {
				mes "[Touha]";
				mes "O que o traz aqui?";
				next;
				mes "[Touha]";
				mes "Oh, eu vejo.";
				mes "Você está no treinamento monge.";
				mes "Você já possui um espírito semelhante ao de um monge.";
				next;
				mes "[Touha]";
				mes "Pelo que me parece você já visitou o Ancião Moohae.";
				next;
				mes "[Touha]";
				mes "Deixe-me informá-l"+(Sex == SEX_MALE ? "o":"a")+" sobre certas coisas.";
				mes "Que você deve saber como um monge.";
				mes "Então eu vou ajudá-l"+(Sex == SEX_MALE ? "o":"a")+" a fortalecer seu corpo.";
				mes "Para que você possa suportar o seu próximo treino.";
				next;
				mes "[Touha]";
				mes "Acalme sua mente.";
				mes "Relaxe seu corpo...";
				changequest(3024,3025);
			} else {
				mes "[Touha]";
				mes "Agora, preste atenção...";
				next;
			}
			next;
			mes "[Touha]";
			mes "Procuro o caminho";
			next;
			mes "[Touha]";
			mes "Da iluminação";
			next;
			mes "[Touha]";
			mes "Buscarei a verdade";
			next;
			mes "[Touha]";
			mes "Protegerei os outros";
			next;
			mes "[Touha]";
			mes "Pelos ensinamentos";
			next;
			mes "[Touha]";
			mes "Que aprendi";
			next;
			mes "[Touha]";
			mes "Ao longo da vida";
			next;
			mes "[Touha]";
			mes "Ok, isso é tudo.";
			mes "Agora repita o que eu falei.";
			next;
			mes "[Touha]";
			mes "Será seu juramento como Monge.";
			next;
			if (select("Procuro o caminho","Buscarei a verdade","Da iluminação","Protegerei os outros","Que aprendi","Ao longo da vida","Pelos ensinamentos") != 2) {
				mes "[Touha]";
				mes "Parece que você não ouviu o que eu disse.";
				close;
			} else {
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Procuro o caminho";
			}
			if (select("Acredito","Procuro o caminho","Buscarei a verdade","Da iluminação","Que aprendi","Protegerei os outros","Ao longo da vida","Pelos ensinamentos") != 4) {
				next;
				mes "[Touha]";
				mes "Parece que você não ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Da iluminação";
			}
			if (select("Buscarei a verdade","Procuro o caminho","Da iluminação","Que aprendi","Ao longo da vida.","Protegerei os outros","Pelos ensinamentos") != 1) {
				next;
				mes "[Touha]";
				mes "Parece que você não ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Buscarei a verdade";
			}
			if (select("Buscarei a verdade","Da iluminação","Que aprendi","Procuro o caminho","Protegerei os outros","Ao longo da vida","Pelos ensinamentos") != 5) {
				next;
				mes "[Touha]";
				mes "Parece que você não ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Protegerei os outros";
			}
			if (select("Procuro o caminho","Pelos ensinamentos","Protegerei os outros","Ao longo da vida","Da iluminação","buscar a verdade","Que aprendi") != 2) {
				next;
				mes "[Touha]";
				mes "Parece que você não ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Pelos ensinamentos";
			}
			if (select("Procuro o caminho","Da iluminação","Buscarei a verdade","Que aprendi","Protegerei os outros","Ao longo da vida","Pelos ensinamentos") != 4) {
				next;
				mes "[Touha]";
				mes "Parece que você não ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Que aprendi";
			}
			if (select("Ao longo da vida","Pelos ensinamentos","Procuro o caminho","Buscarei a verdade","Protegerei os outros","da iluminação") != 1) {
				next;
				mes "[Touha]";
				mes "Parece que você não ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Ao longo da vida";
			}
			mes "[Touha]";
			mes "...Perfeito.";
			mes "Você prestou bem atenção...";
			next;
			mes "[Touha]";
			mes "No entanto esse foi só seu juramento.";
			mes "Seu caminho ainda é longo.";
			next;
			mes "[Touha]";
			mes "Agora, como eu prometi, vou ajudar a fortalecer o seu corpo.";
			next;
			mes "[Touha]";
			mes "Concentre sua mente e não se mova.";
			next;
			mes "^33CCFFVocê sente o vento em todo o seu corpo.^000000";
			next;
			mes "^33CCFFUma energia cresce dentro de você.^000000";
			next;
			mes "[Touha]";
			mes "Eu sinto o que cresce dentro de você.";
			mes "Você pode continuar agora...";
			next;
			mes "[Touha]";
			mes "...o próximo passo será feito por ^cc0000Boohae^000000.";
			monkq = 11;
			changequest(3025,3026);
			close;
		}
		else if (monkq == 11) {
			mes "[Touha]";
			mes "Agora você deve ir até Boohae para continuar seu treinamento.";
			close;
		} else {
			mes "[Touha]";
			mes "Faça o seu melhor...";
			close;
		}
	} else if (monkq == 16) {
		mes "[Touha]";
		mes "Vejam só!";
		mes "Meus parabéns por passar em todos os testes.";
		mes "Agora você deve ir até o Ancião Moohae";
		close;
	} else {
		mes "[Touha]";
		mes "Nunca deve ser derramado sangue inocente.";
		next;
		mes "[Touha]";
		mes "No entanto, o sangue dos ímpios deve fluir como um rio.";
		next;
		mes "[Touha]";
		mes "Vamos abrir nossas asas escurecidas e sermos o martelo do deus vingativo.";
		next;
		mes "[Touha]";
		mes "Vamos fluir um rio diante de ti, e repleto de almas ele sempre deve ser.";
		next;
		mes "[Touha]";
		mes "Em nome do Pai, do Filho e do Espírito Santo.";
		next;
		mes "[Touha]";
		mes "...Você não precisa ter medo de mim...";
		close;
	}
}

// ------------------------------------------------------------------
prt_monk,57,179,1	script	Boohae#monkq	4_M_MINISTER,{
	if (BaseJob == Job_Acolyte) {
		if (monkq == 11) {
			mes "[Boohae]";
			mes "...";
			next;
			mes "[Boohae]";
			mes "......";
			next;
			mes "[Boohae]";
			mes ".........";
			next;
			mes "[Boohae]";
			mes "............";
			next;
			select("...Desculpe me...?");
			mes "[Boohae]";
			mes "...";
			mes "Você interrompeu a minha meditação, eu deveria quebrar suas pernas...";
			next;
			mes "[Boohae]";
			mes "........";
			mes "Eu vou lhe dar uma chance para explicar por que você me interrompeu.";
			next;
			mes "[Boohae]";
			mes ".....";
			next;
			mes "[Boohae]";
			mes "Bem, comece a explicar ...";
			next;
			if (select("Touha me enviou","Desculpe-me") == 2) {
				mes "[Boohae]";
				mes "........";
				mes "...você deve estar desejando a morte por ter me interrompido intencionalmente...";
				close;
			} else {
				mes "[Boohae]";
				mes "Eu entendo...";
				mes "Bem, então vamos ver....";
				next;
				mes "[Boohae]";
				mes "....Seu corpo parece..";
				mes "Fortalecido.";
				mes "Bom...";
				next;
				mes "[Boohae]";
				mes "O que você fez junto com Touha?";
				next;
				switch (select("Humm... bem...ah..","Um juramento","Ele me diagnosticou")) {
					case 1:
					mes "[Boohae]";
					mes "Você nem consegue responder a uma pergunta simples.";
					mes "Deixe-me com as minhas orações.";
					close;
					case 2:
					mes "[Boohae]";
					mes "Bom, então vamos passar para a próxima etapa...";
					break;
					case 3:
					mes "[Boohae]";
					mes "Isso não é importante para mim...";
					mes "Pare de me perturbar e vá embora!";
					close;
				}
				mes "[Boohae]";
				mes "Temos dois testes...";
				mes "Escolha qual deles você quer fazer...";
				next;
				if (select("Coletar cogumelos","Maratona") == 1) {
					mes "[Boohae]";
					mes "Você não vai precisar de nada, apenas de muita determinação.";
					next;
					mes "[Boohae]";
					mes "O teste de recolher cogumelo destina-se em testar sua paciência.";
					next;
					mes "[Boohae]";
					mes "Vá para dentro do edifício perto da abadia.";
					next;
					mes "[Boohae]";
					mes "Você e outros cadidatos a monge poderão está lá para o mesmo teste.";
					monkq = 12;
					changequest(3026,3027);
					close;
				} else {
					mes "[Boohae]";
					mes "Você não irá precisar de nada, apenas pernas fortes.";
					next;
					mes "[Boohae]";
					mes "A maratona destina-se em testar sua capacidade de auto-controle.";
					next;
					mes "[Boohae]";
					mes "Vá para dentro do edifício perto da abadia.";
					next;
					mes "[Boohae]";
					mes "Tudo que você tem a fazer é correr ao redor do prédio.";
					mes "Quantas vezes for necessário.";
					monkq = 13;
					changequest(3026,3028);
					close;
				}
			}
		} else if (monkq == 12) {
			mes "[Boohae]";
			mes "Você não vai precisar de nada, apenas de muita determinação.";
			next;
			mes "[Boohae]";
			mes "O teste de recolher cogumelo destina-se em testar sua paciência.";
			next;
			mes "[Boohae]";
			mes "Vá para dentro do edifício perto da abadia.";
			next;
			mes "[Boohae]";
			mes "Você e outros cadidatos a monge poderão está lá para o mesmo teste.";
			next;
			mes "[Boohae]";
			mes "Quanto mais pessoas estiverem no teste, menos cogumelos vocês encontrarão.";
			mes "Então eu espero que você entenda que eles estão testando sua paciência.";
			close;
		} else if (monkq == 13) {
			mes "[Boohae]";
			mes "Você não irá precisar de nada, apenas pernas fortes.";
			next;
			mes "[Boohae]";
			mes "A maratona destina-se em testar sua capacidade de auto-controle.";
			next;
			mes "[Boohae]";
			mes "Vá para dentro do edifício perto da abadia.";
			next;
			mes "[Boohae]";
			mes "Tudo que você tem a fazer é correr ao redor do prédio.";
			mes "Quantas vezes for necessário.";
			close;
		} else {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Hmmmm...!?";
			next;
			mes "Ele parece estar em meditação.";
			close;
		}
	} else {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmmmm...!?";
		next;
		mes "Ele parece estar em meditação.";
		close;
	}
}

// ------------------------------------------------------------------
monk_test,329,61,3	script	Bashu#monkq	4_M_MONK,{
	if (monkq == 12) {
		mes "[Bashu]";
		mes "Você deve ser "+strcharinfo(CHAR_NAME)+" que fará o teste de tolerância em ^ff0000Coletar Cogumelos^000000.";
		next;
		mes "[Bashu]";
		mes "Certo deixe-me enviar-l"+(Sex == SEX_MALE ? "o":"a")+" para o local.";
		close2;
		warp("job_monk",226,175);
		end;
	} else if (monkq == 13) {
		mes "[Bashu]";
		mes "Você deve ser "+strcharinfo(CHAR_NAME)+" que decidiu fazer o teste de auto-controle a ^ff0000Maratona^000000.";
		next;
		mes "[Bashu]";
		mes "Certo deixe-me enviar-l"+(Sex == SEX_MALE ? "o":"a")+" para o local.";
		close2;
		warp("monk_test",386,387);
		end;
	} else if (monkq == 16) {
		mes "[Bashu]";
		mes "Vejam só!";
		mes "Meus parabéns por passar em todos os testes.";
		mes "Agora você deve ir até o Ancião Moohae";
		close;
	} else {
		mes "[Bashu]";
		mes "Este lugar é o lugar de formação para os monges, Abadia de Santa Capitolina..";
		mes "Você vai encontrar Tomoon o mais antigo monge que sucede aos antecessores.";
		next;
		mes "[Bashu]";
		mes "Por favor, avisamos que não toque em nada.";
		mes "E evite falar alto aqui.";
		close;
	}
}

// ------------------------------------------------------------------
job_monk,226,180,1	script	Hyunmoo#monkq	4_M_ORIENT02,{
	if (BaseJob == Job_Acolyte) {
		if (monkq == 12) {
			if (countitem(Mushroom_Of_Thief_1) < 29 && countitem(Mushroom_Of_Thief_1) < 29) {
				mes "[Hyunmoo]";
				mes "Sua tarefa será a de colher cogumelos.";
				next;
				mes "[Hyunmoo]";
				mes "Colher cogumelos é treinar a sua tolerância.";
				mes "Nós plantamos um jardim, a fim de sobreviver, bem como a disciplinar nossas mentes.";
				next;
				mes "[Hyunmoo]";
				mes "Acredito que não há melhor maneira de encontrar a paz interior verdadeira.";
				mes "E logo, estar em harmonia com a natureza.";
				mes "Então nós criamos o nosso jardim.";
				mes "No entanto estes cogumelos começaram a brotar por todo os lados!";
				next;
				mes "[Hyunmoo]";
				mes "O que nós pedimos para você como parte de seu treinamento é retirar estes cogumelos.";
				mes "Simplesmente você terá que coletar:";
				mes "30 ^ff0000"+getitemname(Mushroom_Of_Thief_1)+"^000000";
				mes "E 30 ^ff0000"+getitemname(Mushroom_Of_Thief_2)+"^000000.";
				close;
			} else {
				mes "[Hyunmoo]";
				mes "...Hmm...";
				mes "Nada mau.";
				mes "Ok, você passou.";
				next;
				mes "[Hyunmoo]";
				mes "Vá visitar Tomoon para iniciar o seu próximo teste.";
				mes "Tomoon está nas profundezas dentro de um edifício perto desta abadia, vá visitá-lo.";
				monkq = 14;
				changequest(3027,3029);
				delitem(Mushroom_Of_Thief_1,countitem(Mushroom_Of_Thief_1));
				delitem(Mushroom_Of_Thief_2,countitem(Mushroom_Of_Thief_2));
				close2;
				warp("prt_monk",194,168);
				end;
			}
		} else if (monkq == 13) {
			mes "[Hyunmoo]";
			mes "Hunn...";
			mes "O que faz aqui?!";
			mes "Não deveria está fazendo o teste da maratona?";
			close;
		} else if (monkq == 14) {
			mes "[Hyunmoo]";
			mes "Eu não disse a você para ir encontrar ^ff0000Tomoon^000000?";
			mes "Ou você quer coletar mais alguns cogumelos?";
			mes "Tomoon está nas profundezas dentro de um edifício perto desta abadia.";
			close;
		} else if (monkq == 16) {
			mes "[Hyunmoo]";
			mes "Vejam só!";
			mes "Meus parabéns por passar em todos os testes.";
			mes "Agora você deve ir até o Ancião Moohae";
			close;
		} else {
			mes "[Hyunmoo]";
			mes "Me desculpe, mas agora estou ocupado.";
			close;
		}
	} else {
		mes "[Hyunmoo]";
		mes "Me desculpe, mas agora estou ocupado.";
		close;
	}
}

// ------------------------------------------------------------------
monk_test,386,388,4	script	Supervisor#monkq	4_M_MINISTER,{
	mes "[Supervisor]";
	mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+"!";
	mes "Este lugar testa a tolerância de candidatos a monge!";
	next;
	switch (select("Explicação","Desistir","Continuar")) {
		case 1:
		mes "[Supervisor]";
		mes "Basta correr...";
		mes "Até o final desse corredor.";
		next;
		mes "[Supervisor]";
		mes "Haverá muitas buracos no caminho.";
		mes "Cuidado! São armadilhas!";
		next;
		mes "[Supervisor]";
		mes "Se cair em uma será mandad"+(Sex == SEX_MALE ? "o":"a")+" devolta para o começo.";
		mes "Você pode desistir se quiser.";
		close;
		case 2:
		close2;
		warp("prt_monk",194,168);
		end;
		case 3:
		mes "[Supervisor]";
		mes "Até que te mandem parar, você deve correr....";
		mes "Corra!";
		close;
	}
}

// ------------------------------------------------------------------
monk_test,82,384,0	script	MonkTrap#monkq	FAKE_NPC,{
	OnTouch:
	mapannounce(strnpcinfo(NPC_NAME),strcharinfo(CHAR_NAME)+", Você caiu em uma armadilha, voltará para o início.",bc_map);
	warp(strnpcinfo(NPC_MAP),386,387);
	end;
}

monk_test,83,384,0	duplicate(MonkTrap#monkq)	MonkTrap#2monkq	FAKE_NPC
monk_test,82,385,0	duplicate(MonkTrap#monkq)	MonkTrap#3monkq	FAKE_NPC
monk_test,83,385,0	duplicate(MonkTrap#monkq)	MonkTrap#4monkq	FAKE_NPC
monk_test,38,388,0	duplicate(MonkTrap#monkq)	MonkTrap#5monkq	FAKE_NPC,0,1
monk_test,39,388,0	duplicate(MonkTrap#monkq)	MonkTrap#6monkq	FAKE_NPC,0,1
monk_test,38,386,0	duplicate(MonkTrap#monkq)	MonkTrap#7monkq	FAKE_NPC
monk_test,39,386,0	duplicate(MonkTrap#monkq)	MonkTrap#8monkq	FAKE_NPC
monk_test,11,158,0	duplicate(MonkTrap#monkq)	MonkTrap#9monkq	FAKE_NPC,1,0
monk_test,11,159,0	duplicate(MonkTrap#monkq)	MonkTrap#10monkq	FAKE_NPC,1,0
monk_test,13,159,0	duplicate(MonkTrap#monkq)	MonkTrap#11monkq	FAKE_NPC
monk_test,13,158,0	duplicate(MonkTrap#monkq)	MonkTrap#12monkq	FAKE_NPC
monk_test,11,30,0	duplicate(MonkTrap#monkq)	MonkTrap#13monkq	FAKE_NPC,3,0
monk_test,11,31,0	duplicate(MonkTrap#monkq)	MonkTrap#14monkq	FAKE_NPC,3,0
monk_test,15,30,0	duplicate(MonkTrap#monkq)	MonkTrap#15monkq	FAKE_NPC
monk_test,15,31,0	duplicate(MonkTrap#monkq)	MonkTrap#16monkq	FAKE_NPC
monk_test,70,12,0	duplicate(MonkTrap#monkq)	MonkTrap#17monkq	FAKE_NPC,0,1
monk_test,71,12,0	duplicate(MonkTrap#monkq)	MonkTrap#18monkq	FAKE_NPC,0,1
monk_test,70,10,0	duplicate(MonkTrap#monkq)	MonkTrap#19monkq	FAKE_NPC
monk_test,71,10,0	duplicate(MonkTrap#monkq)	MonkTrap#20monkq	FAKE_NPC
monk_test,186,11,0	duplicate(MonkTrap#monkq)	MonkTrap#21monkq	FAKE_NPC,2,3
monk_test,189,11,0	duplicate(MonkTrap#monkq)	MonkTrap#22monkq	FAKE_NPC,0,3
monk_test,387,43,0	duplicate(MonkTrap#monkq)	MonkTrap#23monkq	FAKE_NPC,1,0
monk_test,387,42,0	duplicate(MonkTrap#monkq)	MonkTrap#24monkq	FAKE_NPC,1,0
monk_test,389,43,0	duplicate(MonkTrap#monkq)	MonkTrap#25monkq	FAKE_NPC
monk_test,389,42,0	duplicate(MonkTrap#monkq)	MonkTrap#26monkq	FAKE_NPC

// ------------------------------------------------------------------
monk_test,387,348,0	script	Supervisor#2monkq	4_M_MINISTER,{
	mes "[Supervisor]";
	mes "Muito bem!";
	mes "Agora...";
	mes "Você pode ir visitar Tomoon.";
	next;
	mes "[Supervisor]";
	mes "Tomoon está nas profundezas dentro de um edifício perto desta abadia.";
	close2;
	monkq = 14;
	changequest(3028,3029);
	warp("prt_monk",194,168);
	end;
}

// ------------------------------------------------------------------
monk_test,319,139,1	script	Tomoon#monkq	1_M_HOF,{
	if (BaseJob == Job_Acolyte) {
		if (monkq == 14) {
			mes "[Tomoon]";
			mes "Meu nome é Tomoon, e eu sou responsável pelo último teste da formação espiritual!";
			next;
			mes "[Tomoon]";
			mes "Nesse teste você terá que pecorrer um dos três labirinto invisíveis.";
			mes "Sim, você pode escolher qual deseja passar.";
			next;
			mes "[Tomoon]";
			mes "Se durante o percuso monstros poderão surgir para te atacar.";
			mes "Se quiser pode eliminar-los.";
			next;
			mes "[Tomoon]";
			mes "O teste termina quando chegar ao outro lado do labirinto, e traspor o portal.";
			mes "Boa sorte.";
			close2;
			monkq = 15;
			changequest(3029,3031);
			warp(strnpcinfo(NPC_MAP),88,70);
			end;
		} else if (monkq == 15) {
			mes "[Tomoon]";
			mes "Hmm...";
			mes "Você falhou?";
			mes "Anime-se!";
			mes "O fracasso nada mais é do que um processo para o sucesso!";
			close2;
			warp(strnpcinfo(NPC_MAP),88,70);
			end;
		} else if (monkq == 16) {
			mes "[Tomoon]";
			mes "Vejam só!";
			mes "Meus parabéns por passar em todos os testes.";
			mes "Agora você deve ir até o Ancião Moohae";
			close;
		} else {
			mes "[Tomoon]";
			mes ".....";
			next;
			mes "[Tomoon]";
			mes "Eu não vou permitir que ninguém cause qualquer problema nesta abadia.";
			next;
			mes "[Tomoon]";
			mes "É melhor não estar pensando em causar qualquer problema.";
			close;
		}
	} else {
		mes "[Tomoon]";
		mes "....Fique quieto.";
		mes ".....";
		next;
		mes "[Tomoon]";
		mes "Eu não vou permitir que ninguém cause qualquer problema nesta abadia.";
		next;
		mes "[Tomoon]";
		mes "É melhor não estar pensando em causar qualquer problema.";
		close;
	}
}

// ------------------------------------------------------------------
monk_test,82,85,1	script	Procurador#1monkq	4_F_SISTER,{
	mes "[Procurador]";
	mes "O labirinto dos espíritos está dentro da sala de teste.";
	mes "Há espíritos lá dentro que irão bloqueá-l"+(Sex == SEX_MALE ? "o":"a")+" de se mover livremente.";
	next;
	mes "[Procurador]";
	mes "Se você quiser sair da sala de teste.";
	mes "Deve ir para o portal localizado no lado oposto do salão.";
	mes "Boa sorte.";
	close2;
	switch (atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),0))) {
		case 1: warp(strnpcinfo(NPC_MAP),125,277); end;
		case 2: warp(strnpcinfo(NPC_MAP),125,177); end;
		case 3: warp(strnpcinfo(NPC_MAP),230,277); end;
	}
}
monk_test,88,91,1	duplicate(Procurador#1monkq)	Procurador#2monkq	1_M_HOF
monk_test,95,85,1	duplicate(Procurador#1monkq)	Procurador#3monkq	1_F_PRIEST

// ------------------------------------------------------------------
monk_test,166,278,0	script	exitwall#monkq	WARPNPC,1,1,{
	OnTouch:
	mes "Parabéns!";
	mes "Você concluíu todos os testes dos monges.";
	mes "Volte ao Ancião Moohae.";
	close2;
	monkq = 16;
	changequest(3031,3032);
	warp("prt_monk",196,168);
	end;
}
monk_test,166,178,1	duplicate(exitwall#monkq)	exitwall#2monkq	WARPNPC
monk_test,270,278,1	duplicate(exitwall#monkq)	exitwall#3monkq	WARPNPC
