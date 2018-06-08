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
| - Info: Quest de Mudan�a de Classe para Monge.                    |
\*-----------------------------------------------------------------*/

prt_monk,59,247,1	script	Monge Guardi�o#monkq	2_M_PHARMACIST,{
	if (BaseJob == Job_Acolyte) {
		if (!monkq) {
			mes "[Monge Guardi�o]";
			mes "Hum?";
			mes "O que veio fazer aqui?";
			mes "Se voc� deseja entrar nesta �rea sagrada, voc� deve me dizer o seu nome.";
			next;
			mes "[Monge Guardi�o]";
			mes "Agora, por favor me diga o seu nome e n�vel de classe.";
			next;
			if (select("Ignorar","Dizer") == 1) {
				mes "[Monge Guardi�o]";
				mes "Por favor ent�o, saia!";
				close;
			} else {
				mes "[Monge Guardi�o]";
				mes strcharinfo(CHAR_NAME)+" � seu nome?";
				mes "...Eu falei certo?";
				next;
				mes "[Monge Guardi�o]";
				mes "Muito bem ...";
				mes "Por que voc� veio aqui "+strcharinfo(CHAR_NAME)+"?";
				next;
				if (select("Aprender sobre os Monges","Me tornar Monge") == 1) {
					mes "[Monge Guardi�o]";
					mes "Entendo...";
					mes "N�s monges vivemos nossas vidas para a ilumina��o espiritual.";
					mes "Melhoramos os nossos corpos, bem como as nossas mentes.";
					mes "Para chegar a verdadeira paz interior.";
					mes "Que voc� encontre sua paz interior.";
					close;
				} else {
					mes "[Monge Guardi�o]";
					mes "Hum, me parece que voc� esteve treinando para isto...";
					mes "Isso � bom.";
					mes "V� ver o nosso sensei Moohae e fale com ele.";
					mes "Ele ir� ajud�-lo a come�ar seu treinamento.";
					monkq = 1;
					setquest(3016);
					close;
				}
			}
		} else if (monkq == 1) {
			mes "[Monge Guardi�o]";
			mes "N�o sabe onde encontrar o sensei Moohae?";
			mes "Ele est� na �rea sudeste no \"Sal�o dos Monges\".";
			close;
		} else if (monkq == 16) {
			mes "[Monge Guardi�o]";
			mes "Vejam s�!";
			mes "Meus parab�ns por passar em todos os testes.";
			mes "Agora voc� deve ir at� o Anci�o Moohae";
			close;
		} else {
			mes "[Monge Guardi�o]";
			mes "Espero que voc� se saia bem em seu treinamento, eu estou ansioso para v�-lo novamente.";
			close;
		}
	} else if (BaseJob == Job_Monk) {
		mes "[Monge Guardi�o]";
		mes "Como est� indo seu treinamento?";
		close;
	} else {
		mes "[Monge Guardi�o]";
		mes "Por favor n�o pertube esse lugar.";
		mes "� um local que deve ser preservado em paz.";
		mes "Aqui � onde novi�os se tornam monges.";
		close;
	}
}

// ------------------------------------------------------------------
monk_in,99,58,1	script	Sensei Moohae#monkq	1_M_PASTOR,{
	if (BaseJob == Job_Acolyte) {
		if (!monkq) {
			mes "[Sensei Moohae]";
			mes "Voc� �...um novi�o..?";
			mes "Se voc� procura consulta, v� ao Santu�rio em Prontera.";
			mes "Este lugar � para Monges, n�o para voc�.";
			mes "A menos que voc� pretenda se tornar um monge....";
			close;
		} else if (monkq == 1) {
			mes "[Sensei Moohae]";
			mes "Sauda��es, voc� parece estar em um caminho puro.";
			mes "O que posso fazer por voc� hoje?";
			next;
			mes "[Sensei Moohae]";
			mes "Eu sinto um esp�rito de luta, voc� deseja se tornar monge? ";
			next;
			if (select("Sim","N�o") == 2) {
				mes "[Sensei Moohae]";
				mes "As minhas desculpas...";
				mes "J� faz algum tempo desde que eu senti algu�m com sua for�a.";
				mes "Espero que voc� encontre seu caminho jovem.";
				close;
			} else {
				mes "[Sensei Moohae]";
				mes "H� ainda aqueles que desejam seguir os caminhos dos antigos.";
				mes "Como "+(Sex == SEX_MALE ? "um homem jovem e forte.":"uma flor delicada.");
				mes "Tenho prazer em ver a sua vontade de se juntar a n�s.";
				next;
				mes "[Sensei Moohae]";
				mes "Bem, existem algumas coisas que voc� deve saber antes de come�ar seu treinamento.";
				next;
				mes "[Sensei Moohae]";
				mes "N�s, os monges, seguimos um caminho de paz interior e ilumina��o.";
				mes "Nos esfor�amos para trazer a paz para todos os outros.";
				next;
				mes "[Sensei Moohae]";
				mes "N�s monges conseguimos isso a partir do treinamento f�sico e mental.";
				mes "Procuramos a ilumina��o em nosso ambiente e na natureza.";
				next;
				mes "[Sensei Moohae]";
				mes "�, naturalmente, importante sempre manter a nossa f� original em Deus.";
				next;
				mes "[Sensei Moohae]";
				mes "Esta n�o � uma vida f�cil.";
				mes "E o verdadeiro desafio de se tornar um monge.";
				mes "� ter a capacidade de suportar tudo o que eu disse...";
				mes "A vida de um monge n�o � para todos.";
				mes "Apenas aqueles que s�o fortes podem se tornar monge.";
				next;
				mes "[Sensei Moohae]";
				mes "Agora, que voc� entende tudo isso.";
				mes "Prepare-se para treinar sua for�a e esp�rito.";
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
				mes "Re�na estes itens e volte a falar comigo.";
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
				mes "Como voc� pode pensar que est� preparado?";
				mes "Voc� n�o trouxe o que eu pedi!";
				mes "^cc0000"+.@mk_itm[1]+" "+getitemname(.@mk_itm[0])+"^000000,";
				mes "^cc0000"+.@mk_itm[3]+" "+getitemname(.@mk_itm[2])+"^000000,";
				mes "^cc0000"+.@mk_itm[5]+" "+getitemname(.@mk_itm[4])+"^000000.";
				mes "Estes s�o os itens que eu preciso, encontre todos.";
				close;
			} else {
				mes "[Sensei Moohae]";
				mes "Muito bem, voc� encontrou todos os itens.";
				mes "Direi isso para os anci�es.";
				monkq = 9;
				changequest(3017,3024);
				delitem(.@mk_itm[0],.@mk_itm[1]);
				delitem(.@mk_itm[2],.@mk_itm[3]);
				delitem(.@mk_itm[4],.@mk_itm[5]);
				next;
				mes "[Sensei Moohae]";
				mes "Vamos ver qual ser� a pr�xima etapa...";
				mes "Ah... v� encontrar Touha.";
				mes "Ela est� ao noroeste desse lugar sagrado.";
				close;
			}
		} else if (monkq == 9 || monkq == 10) {
			mes "[Sensei Moohae]";
			mes "Eu j� te disse.";
			mes "V� procurar ^cc0000Touha^000000.";
			mes "Ela est� a noroeste de aqui.";
			close;
		} else if (monkq == 16 || monkq == 17) {
			if (SkillPoint) {
				mes "[Sensei Moohae]";
				mes "Voc� ainda n�o pode mudar de classe enquanto tiver pontos de habilidade sobrando.";
				mes "Volte depois de usar todos os pontos restantes.";
				close;
			} else {
				if (monkq == 16) {
					mes "[Sensei Moohae]";
					mes "Voc� j� terminou todos os testes n�o foi?";
					next;
					mes "[Sensei Moohae]";
					mes "Sim voc� terminou...";
					next;
					mes "[Sensei Moohae]";
					mes "Antes que voc� possa se tornar Monge, farei algumas perguntas a voc�.";
				} else {
					mes "[Sensei Moohae]";
					mes "Reavaliou seu pensamento?";
					mes "Ent�o vamos tentar novamente...";
				}
				next;
				mes "[Sensei Moohae]";
				mes "Voc� ir� dedicar o resto de sua vida � busca pela pureza?";
				next;
				if (select("Sim","N�o") == 2) {
					mes "[Sensei Moohae]";
					mes "....Com esse tipo de resposta...";
					mes "Voc� n�o tem o cora��o puro o suficiente para se tornar monge.";
					mes "Voc� n�o sente que sofreu o suficiente?";
					next;
					mes "[Sensei Moohae]";
					mes "Pense nisso um pouco mais e volte!";
					mes "N�o podemos aceitar um monge que est� contaminado com d�vidas...";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Voc� vai tirar proveito das habilidades que ganhou atrav�s de nosso treinamento.";
				mes "Somente para usar em benef�cio pr�prio?";
				next;
				if (select("Sim","N�o") == 1) {
					mes "[Sensei Moohae]";
					mes "...Ent�o n�o podemos aceit�-l"+(Sex == SEX_MALE ? "o":"a")+" como um monge.";
					mes "N�s, os monges, n�o praticamos nossas habilidades para benef�cio pr�prio.";
					mes "N�s conduzimos nossas vidas honradamente.";
					next;
					mes "[Sensei Moohae]";
					mes "Volte de onde voc� veio e reconsidere o que significa ser um monge...";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Voc� vai punir aqueles que s�o contra aVerdade e Justi�a?";
				next;
				if (select("Sim","N�o") == 2) {
					mes "[Sensei Moohae]";
					mes "Quem voc� acha que n�s, os monges somos!";
					mes "Qualquer criatura que seja afavor a vontade proveniente da esc�ria do mundo n�o � digna de existir!";
					next;
					mes "[Sensei Moohae]";
					mes "Volte quando voc� estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para enfrentar e eliminar o que � mau.";
					mes "Ent�o voc� ir� saber o que voc� tem que fazer em seguida.";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Voc� vai cooperar com os outros que t�m o mesmo objetivo que o seu.";
				mes "Sacrificar-se do come�o ao fim?";
				next;
				if (select("Sim","N�o") == 2) {
					mes "[Sensei Moohae]";
					mes "Voc� disse que n�o ...?";
					mes "Isto � inaceit�vel...";
					mes "Se voc� pode ajudar seus companheiros, sacrificando a si mesmo.";
					mes "Isso � uma verdadeira demonstra��o de pureza.";
					next;
					mes "[Sensei Moohae]";
					mes "Volte e contemple o que significa sacrificar-se por aqueles que voc� se importa.";
					mes "Sacrificar-se pelos outros pode parecer f�cil.";
					mes "Mas � a coisa mais dif�cil de fazer como um ser humano.";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Voc� est� disposto a morrer pelos outros em sua jornada de monge?";
				next;
				if (select("Sim","N�o") == 2) {
					mes "[Sensei Moohae]";
					mes "Voc� n�o pode se tornar um monge com tal atitude!!!";
					mes "Se pudermos eliminar pelo menos mais um inimigo nosso dever � faz�-lo.";
					mes "Mesmo sacrificando a n�s mesmos, � o que se espera de n�s.";
					mes "Para isso que somos treinados para sermos executores sagrados.";
					next;
					mes "[Sensei Moohae]";
					mes "Se voc� n�o est� disposto a sacrificar-se por aqueles que voc� se preocupa.";
					mes "Como voc� pensa que chegar� a verdadeira ilumina��o?";
					mes "Reflita sobre o verdadeiro significado da vida e da morte!!";
					monkq = 17;
					close;
				}
				mes "[Sensei Moohae]";
				mes "Ent�o o seu treinamento est� completo...";
				mes "Por favor, chegue mais perto.";
				if (Sex == SEX_MALE) {
					mes "Acolhemos voc� irm�o, em nossa batalha santa contra o mal!";
				} else {
					mes "Acolhemos voc� irm�, em nossa batalha santa contra o mal!";
				}
				next;
				mes "[Sensei Moohae]";
				if (Sex) {
					mes "Meu irm�o, o seu juramento foi ouvido por todos ao nosso redor.";
				} else {
					mes "Minha irm�, o seu juramento foi ouvido por todos ao nosso redor.";
				}
				next;
				mes "[Sensei Moohae]";
				mes "Vou agora realizar as t�cnicas finais sobre o seu corpo...";
				next;
				mes "[Sensei Moohae]";
				mes "Vou usar essas t�cnicas antigas para amplificar sua for�a.";
				mes "Atrav�s da utiliza��o de pontos de press�o sobre seu corpo.";
				next;
				mes "[Sensei Moohae]";
				mes "Feche seus olhos......";
				next;
				mes "[Sensei Moohae]";
				mes "E relaxe seu corpo....";
				next;
				mes "^00cccc- Voc� respira profundamente -^000000";
				next;
				mes "^cc0000- Voc� sente dedos cutucando-lhe todo o seu corpo com rapidez -^000000";
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
				mes "....E veja a vida atrav�s dos olhos de um monge.";
				next;
				.@jl = JobLevel;
				jobchange(Job_Monk);
				completequest(3032);
				callfunc("ClearJobQuest2nd",15);
				mes "[Sensei Moohae]";
				mes "Voc� se tornou Monge.";
				next;
				mes "[Sensei Moohae]";
				mes "Bem...";
				mes "Eu acho que eu sou velho demais para fazer isso...";
				mes "Eu era melhor quando era mais jovem...";
				next;
				mes "[Sensei Moohae]";
				mes "De qualquer maneira, voc� � monge agora.";
				next;
				mes "[Sensei Moohae]";
				mes "Eu espero que voc� mantenha seu voto..";
				next;
				mes "[Sensei Moohae]";
				mes "E continue sua forma��o no caminho mais �rduo.";
				next;
				mes "[Sensei Moohae]";
				mes "Agora...";
				mes "Voc� deve ir aonde vento lhe levar.";
				mes "Ah, e eu tenho um presente para voc� antes de sair.";
				if (.@jlevel == 50) { getitem(Knuckle_Duster_,1); }
				else { getitem(Waghnakh,1); }
				close;
			} 
		} else {
			mes "[Sensei Moohae]";
			mes "Parece que voc� ainda tem tarefas a cumpri.";
			mes "Volte depois de passar em todos os testes.";
			close;
		}
	} else if (BaseJob == Job_Monk) {
		mes "[Sensei Moohae]";
		mes "Devemos sempre continuar a nossa forma��o na vida e permanecer fi�is no nosso caminho.";
		mes "Caso contr�rio, o mal vir� manchar nossa mente com impurezas.";
		next;
		mes "[Sensei Moohae]";
		mes "N�o se esque�a de seus votos.";
		mes "Fique em seu caminho e n�o deixe que qualquer mal suje seu cora��o puro.";
		close;
	} else {
		mes "[Sensei Moohae]";
		mes "Se voc� procura consulta, v� ao Santu�rio de Prontera.";
		mes "N�s n�o temos nada de interesse seu aqui, por favor saia e n�o perturbe os outros monges.";
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
			mes "No entanto, o sangue dos �mpios deve fluir como um rio.";
			next;
			mes "[Touha]";
			mes "Vamos abrir nossas asas escurecidas e sermos o martelo do deus vingativo.";
			next;
			mes "[Touha]";
			mes "Vamos fluir um rio diante de ti, e repleto de almas ele sempre deve ser.";
			next;
			mes "[Touha]";
			mes "Em nome do Pai, do Filho e do Esp�rito Santo.";
			next;
			mes "[Touha]";
			mes "...Voc� n�o precisa ter medo de mim...";
			close;
		} else if (monkq == 9 || monkq == 10) {
			if (monkq == 9) {
				mes "[Touha]";
				mes "O que o traz aqui?";
				next;
				mes "[Touha]";
				mes "Oh, eu vejo.";
				mes "Voc� est� no treinamento monge.";
				mes "Voc� j� possui um esp�rito semelhante ao de um monge.";
				next;
				mes "[Touha]";
				mes "Pelo que me parece voc� j� visitou o Anci�o Moohae.";
				next;
				mes "[Touha]";
				mes "Deixe-me inform�-l"+(Sex == SEX_MALE ? "o":"a")+" sobre certas coisas.";
				mes "Que voc� deve saber como um monge.";
				mes "Ent�o eu vou ajud�-l"+(Sex == SEX_MALE ? "o":"a")+" a fortalecer seu corpo.";
				mes "Para que voc� possa suportar o seu pr�ximo treino.";
				next;
				mes "[Touha]";
				mes "Acalme sua mente.";
				mes "Relaxe seu corpo...";
				changequest(3024,3025);
			} else {
				mes "[Touha]";
				mes "Agora, preste aten��o...";
				next;
			}
			next;
			mes "[Touha]";
			mes "Procuro o caminho";
			next;
			mes "[Touha]";
			mes "Da ilumina��o";
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
			mes "Ok, isso � tudo.";
			mes "Agora repita o que eu falei.";
			next;
			mes "[Touha]";
			mes "Ser� seu juramento como Monge.";
			next;
			if (select("Procuro o caminho","Buscarei a verdade","Da ilumina��o","Protegerei os outros","Que aprendi","Ao longo da vida","Pelos ensinamentos") != 2) {
				mes "[Touha]";
				mes "Parece que voc� n�o ouviu o que eu disse.";
				close;
			} else {
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Procuro o caminho";
			}
			if (select("Acredito","Procuro o caminho","Buscarei a verdade","Da ilumina��o","Que aprendi","Protegerei os outros","Ao longo da vida","Pelos ensinamentos") != 4) {
				next;
				mes "[Touha]";
				mes "Parece que voc� n�o ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Da ilumina��o";
			}
			if (select("Buscarei a verdade","Procuro o caminho","Da ilumina��o","Que aprendi","Ao longo da vida.","Protegerei os outros","Pelos ensinamentos") != 1) {
				next;
				mes "[Touha]";
				mes "Parece que voc� n�o ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Buscarei a verdade";
			}
			if (select("Buscarei a verdade","Da ilumina��o","Que aprendi","Procuro o caminho","Protegerei os outros","Ao longo da vida","Pelos ensinamentos") != 5) {
				next;
				mes "[Touha]";
				mes "Parece que voc� n�o ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Protegerei os outros";
			}
			if (select("Procuro o caminho","Pelos ensinamentos","Protegerei os outros","Ao longo da vida","Da ilumina��o","buscar a verdade","Que aprendi") != 2) {
				next;
				mes "[Touha]";
				mes "Parece que voc� n�o ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Pelos ensinamentos";
			}
			if (select("Procuro o caminho","Da ilumina��o","Buscarei a verdade","Que aprendi","Protegerei os outros","Ao longo da vida","Pelos ensinamentos") != 4) {
				next;
				mes "[Touha]";
				mes "Parece que voc� n�o ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Que aprendi";
			}
			if (select("Ao longo da vida","Pelos ensinamentos","Procuro o caminho","Buscarei a verdade","Protegerei os outros","da ilumina��o") != 1) {
				next;
				mes "[Touha]";
				mes "Parece que voc� n�o ouviu o que eu disse.";
				monkq = 10;
				close;
			} else {
				mes "Ao longo da vida";
			}
			mes "[Touha]";
			mes "...Perfeito.";
			mes "Voc� prestou bem aten��o...";
			next;
			mes "[Touha]";
			mes "No entanto esse foi s� seu juramento.";
			mes "Seu caminho ainda � longo.";
			next;
			mes "[Touha]";
			mes "Agora, como eu prometi, vou ajudar a fortalecer o seu corpo.";
			next;
			mes "[Touha]";
			mes "Concentre sua mente e n�o se mova.";
			next;
			mes "^33CCFFVoc� sente o vento em todo o seu corpo.^000000";
			next;
			mes "^33CCFFUma energia cresce dentro de voc�.^000000";
			next;
			mes "[Touha]";
			mes "Eu sinto o que cresce dentro de voc�.";
			mes "Voc� pode continuar agora...";
			next;
			mes "[Touha]";
			mes "...o pr�ximo passo ser� feito por ^cc0000Boohae^000000.";
			monkq = 11;
			changequest(3025,3026);
			close;
		}
		else if (monkq == 11) {
			mes "[Touha]";
			mes "Agora voc� deve ir at� Boohae para continuar seu treinamento.";
			close;
		} else {
			mes "[Touha]";
			mes "Fa�a o seu melhor...";
			close;
		}
	} else if (monkq == 16) {
		mes "[Touha]";
		mes "Vejam s�!";
		mes "Meus parab�ns por passar em todos os testes.";
		mes "Agora voc� deve ir at� o Anci�o Moohae";
		close;
	} else {
		mes "[Touha]";
		mes "Nunca deve ser derramado sangue inocente.";
		next;
		mes "[Touha]";
		mes "No entanto, o sangue dos �mpios deve fluir como um rio.";
		next;
		mes "[Touha]";
		mes "Vamos abrir nossas asas escurecidas e sermos o martelo do deus vingativo.";
		next;
		mes "[Touha]";
		mes "Vamos fluir um rio diante de ti, e repleto de almas ele sempre deve ser.";
		next;
		mes "[Touha]";
		mes "Em nome do Pai, do Filho e do Esp�rito Santo.";
		next;
		mes "[Touha]";
		mes "...Voc� n�o precisa ter medo de mim...";
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
			mes "Voc� interrompeu a minha medita��o, eu deveria quebrar suas pernas...";
			next;
			mes "[Boohae]";
			mes "........";
			mes "Eu vou lhe dar uma chance para explicar por que voc� me interrompeu.";
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
				mes "...voc� deve estar desejando a morte por ter me interrompido intencionalmente...";
				close;
			} else {
				mes "[Boohae]";
				mes "Eu entendo...";
				mes "Bem, ent�o vamos ver....";
				next;
				mes "[Boohae]";
				mes "....Seu corpo parece..";
				mes "Fortalecido.";
				mes "Bom...";
				next;
				mes "[Boohae]";
				mes "O que voc� fez junto com Touha?";
				next;
				switch (select("Humm... bem...ah..","Um juramento","Ele me diagnosticou")) {
					case 1:
					mes "[Boohae]";
					mes "Voc� nem consegue responder a uma pergunta simples.";
					mes "Deixe-me com as minhas ora��es.";
					close;
					case 2:
					mes "[Boohae]";
					mes "Bom, ent�o vamos passar para a pr�xima etapa...";
					break;
					case 3:
					mes "[Boohae]";
					mes "Isso n�o � importante para mim...";
					mes "Pare de me perturbar e v� embora!";
					close;
				}
				mes "[Boohae]";
				mes "Temos dois testes...";
				mes "Escolha qual deles voc� quer fazer...";
				next;
				if (select("Coletar cogumelos","Maratona") == 1) {
					mes "[Boohae]";
					mes "Voc� n�o vai precisar de nada, apenas de muita determina��o.";
					next;
					mes "[Boohae]";
					mes "O teste de recolher cogumelo destina-se em testar sua paci�ncia.";
					next;
					mes "[Boohae]";
					mes "V� para dentro do edif�cio perto da abadia.";
					next;
					mes "[Boohae]";
					mes "Voc� e outros cadidatos a monge poder�o est� l� para o mesmo teste.";
					monkq = 12;
					changequest(3026,3027);
					close;
				} else {
					mes "[Boohae]";
					mes "Voc� n�o ir� precisar de nada, apenas pernas fortes.";
					next;
					mes "[Boohae]";
					mes "A maratona destina-se em testar sua capacidade de auto-controle.";
					next;
					mes "[Boohae]";
					mes "V� para dentro do edif�cio perto da abadia.";
					next;
					mes "[Boohae]";
					mes "Tudo que voc� tem a fazer � correr ao redor do pr�dio.";
					mes "Quantas vezes for necess�rio.";
					monkq = 13;
					changequest(3026,3028);
					close;
				}
			}
		} else if (monkq == 12) {
			mes "[Boohae]";
			mes "Voc� n�o vai precisar de nada, apenas de muita determina��o.";
			next;
			mes "[Boohae]";
			mes "O teste de recolher cogumelo destina-se em testar sua paci�ncia.";
			next;
			mes "[Boohae]";
			mes "V� para dentro do edif�cio perto da abadia.";
			next;
			mes "[Boohae]";
			mes "Voc� e outros cadidatos a monge poder�o est� l� para o mesmo teste.";
			next;
			mes "[Boohae]";
			mes "Quanto mais pessoas estiverem no teste, menos cogumelos voc�s encontrar�o.";
			mes "Ent�o eu espero que voc� entenda que eles est�o testando sua paci�ncia.";
			close;
		} else if (monkq == 13) {
			mes "[Boohae]";
			mes "Voc� n�o ir� precisar de nada, apenas pernas fortes.";
			next;
			mes "[Boohae]";
			mes "A maratona destina-se em testar sua capacidade de auto-controle.";
			next;
			mes "[Boohae]";
			mes "V� para dentro do edif�cio perto da abadia.";
			next;
			mes "[Boohae]";
			mes "Tudo que voc� tem a fazer � correr ao redor do pr�dio.";
			mes "Quantas vezes for necess�rio.";
			close;
		} else {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Hmmmm...!?";
			next;
			mes "Ele parece estar em medita��o.";
			close;
		}
	} else {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmmmm...!?";
		next;
		mes "Ele parece estar em medita��o.";
		close;
	}
}

// ------------------------------------------------------------------
monk_test,329,61,3	script	Bashu#monkq	4_M_MONK,{
	if (monkq == 12) {
		mes "[Bashu]";
		mes "Voc� deve ser "+strcharinfo(CHAR_NAME)+" que far� o teste de toler�ncia em ^ff0000Coletar Cogumelos^000000.";
		next;
		mes "[Bashu]";
		mes "Certo deixe-me enviar-l"+(Sex == SEX_MALE ? "o":"a")+" para o local.";
		close2;
		warp("job_monk",226,175);
		end;
	} else if (monkq == 13) {
		mes "[Bashu]";
		mes "Voc� deve ser "+strcharinfo(CHAR_NAME)+" que decidiu fazer o teste de auto-controle a ^ff0000Maratona^000000.";
		next;
		mes "[Bashu]";
		mes "Certo deixe-me enviar-l"+(Sex == SEX_MALE ? "o":"a")+" para o local.";
		close2;
		warp("monk_test",386,387);
		end;
	} else if (monkq == 16) {
		mes "[Bashu]";
		mes "Vejam s�!";
		mes "Meus parab�ns por passar em todos os testes.";
		mes "Agora voc� deve ir at� o Anci�o Moohae";
		close;
	} else {
		mes "[Bashu]";
		mes "Este lugar � o lugar de forma��o para os monges, Abadia de Santa Capitolina..";
		mes "Voc� vai encontrar Tomoon o mais antigo monge que sucede aos antecessores.";
		next;
		mes "[Bashu]";
		mes "Por favor, avisamos que n�o toque em nada.";
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
				mes "Sua tarefa ser� a de colher cogumelos.";
				next;
				mes "[Hyunmoo]";
				mes "Colher cogumelos � treinar a sua toler�ncia.";
				mes "N�s plantamos um jardim, a fim de sobreviver, bem como a disciplinar nossas mentes.";
				next;
				mes "[Hyunmoo]";
				mes "Acredito que n�o h� melhor maneira de encontrar a paz interior verdadeira.";
				mes "E logo, estar em harmonia com a natureza.";
				mes "Ent�o n�s criamos o nosso jardim.";
				mes "No entanto estes cogumelos come�aram a brotar por todo os lados!";
				next;
				mes "[Hyunmoo]";
				mes "O que n�s pedimos para voc� como parte de seu treinamento � retirar estes cogumelos.";
				mes "Simplesmente voc� ter� que coletar:";
				mes "30 ^ff0000"+getitemname(Mushroom_Of_Thief_1)+"^000000";
				mes "E 30 ^ff0000"+getitemname(Mushroom_Of_Thief_2)+"^000000.";
				close;
			} else {
				mes "[Hyunmoo]";
				mes "...Hmm...";
				mes "Nada mau.";
				mes "Ok, voc� passou.";
				next;
				mes "[Hyunmoo]";
				mes "V� visitar Tomoon para iniciar o seu pr�ximo teste.";
				mes "Tomoon est� nas profundezas dentro de um edif�cio perto desta abadia, v� visit�-lo.";
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
			mes "N�o deveria est� fazendo o teste da maratona?";
			close;
		} else if (monkq == 14) {
			mes "[Hyunmoo]";
			mes "Eu n�o disse a voc� para ir encontrar ^ff0000Tomoon^000000?";
			mes "Ou voc� quer coletar mais alguns cogumelos?";
			mes "Tomoon est� nas profundezas dentro de um edif�cio perto desta abadia.";
			close;
		} else if (monkq == 16) {
			mes "[Hyunmoo]";
			mes "Vejam s�!";
			mes "Meus parab�ns por passar em todos os testes.";
			mes "Agora voc� deve ir at� o Anci�o Moohae";
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
	mes "Este lugar testa a toler�ncia de candidatos a monge!";
	next;
	switch (select("Explica��o","Desistir","Continuar")) {
		case 1:
		mes "[Supervisor]";
		mes "Basta correr...";
		mes "At� o final desse corredor.";
		next;
		mes "[Supervisor]";
		mes "Haver� muitas buracos no caminho.";
		mes "Cuidado! S�o armadilhas!";
		next;
		mes "[Supervisor]";
		mes "Se cair em uma ser� mandad"+(Sex == SEX_MALE ? "o":"a")+" devolta para o come�o.";
		mes "Voc� pode desistir se quiser.";
		close;
		case 2:
		close2;
		warp("prt_monk",194,168);
		end;
		case 3:
		mes "[Supervisor]";
		mes "At� que te mandem parar, voc� deve correr....";
		mes "Corra!";
		close;
	}
}

// ------------------------------------------------------------------
monk_test,82,384,0	script	MonkTrap#monkq	FAKE_NPC,{
	OnTouch:
	mapannounce(strnpcinfo(NPC_NAME),strcharinfo(CHAR_NAME)+", Voc� caiu em uma armadilha, voltar� para o in�cio.",bc_map);
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
	mes "Voc� pode ir visitar Tomoon.";
	next;
	mes "[Supervisor]";
	mes "Tomoon est� nas profundezas dentro de um edif�cio perto desta abadia.";
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
			mes "Meu nome � Tomoon, e eu sou respons�vel pelo �ltimo teste da forma��o espiritual!";
			next;
			mes "[Tomoon]";
			mes "Nesse teste voc� ter� que pecorrer um dos tr�s labirinto invis�veis.";
			mes "Sim, voc� pode escolher qual deseja passar.";
			next;
			mes "[Tomoon]";
			mes "Se durante o percuso monstros poder�o surgir para te atacar.";
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
			mes "Voc� falhou?";
			mes "Anime-se!";
			mes "O fracasso nada mais � do que um processo para o sucesso!";
			close2;
			warp(strnpcinfo(NPC_MAP),88,70);
			end;
		} else if (monkq == 16) {
			mes "[Tomoon]";
			mes "Vejam s�!";
			mes "Meus parab�ns por passar em todos os testes.";
			mes "Agora voc� deve ir at� o Anci�o Moohae";
			close;
		} else {
			mes "[Tomoon]";
			mes ".....";
			next;
			mes "[Tomoon]";
			mes "Eu n�o vou permitir que ningu�m cause qualquer problema nesta abadia.";
			next;
			mes "[Tomoon]";
			mes "� melhor n�o estar pensando em causar qualquer problema.";
			close;
		}
	} else {
		mes "[Tomoon]";
		mes "....Fique quieto.";
		mes ".....";
		next;
		mes "[Tomoon]";
		mes "Eu n�o vou permitir que ningu�m cause qualquer problema nesta abadia.";
		next;
		mes "[Tomoon]";
		mes "� melhor n�o estar pensando em causar qualquer problema.";
		close;
	}
}

// ------------------------------------------------------------------
monk_test,82,85,1	script	Procurador#1monkq	4_F_SISTER,{
	mes "[Procurador]";
	mes "O labirinto dos esp�ritos est� dentro da sala de teste.";
	mes "H� esp�ritos l� dentro que ir�o bloque�-l"+(Sex == SEX_MALE ? "o":"a")+" de se mover livremente.";
	next;
	mes "[Procurador]";
	mes "Se voc� quiser sair da sala de teste.";
	mes "Deve ir para o portal localizado no lado oposto do sal�o.";
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
	mes "Parab�ns!";
	mes "Voc� conclu�u todos os testes dos monges.";
	mes "Volte ao Anci�o Moohae.";
	close2;
	monkq = 16;
	changequest(3031,3032);
	warp("prt_monk",196,168);
	end;
}
monk_test,166,178,1	duplicate(exitwall#monkq)	exitwall#2monkq	WARPNPC
monk_test,270,278,1	duplicate(exitwall#monkq)	exitwall#3monkq	WARPNPC
