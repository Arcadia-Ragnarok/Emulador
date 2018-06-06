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
| - Copyright: Spell Master (27/09/2017)                            |
| - Info: Quest do bardo de Geffen                                  |
| - Nota: Necessária para a quest da habilidade de bardo            |
|         "Voz Dolorosa"                                            |
\*-----------------------------------------------------------------*/

geffen,132,38,3	script	Bardo#gef_bard_q	1_M_BARD,{
	if (!gef_bard_q) {
		cutin("bard_eland03",2);
		mes "[Bardo]";
		mes "^483D8BQue dia é melhor para beber?";
		mes "*La la la*";
		mes "É o dia da terra, do sol e da lua";
		mes "*La la la*^000000";
		next;
		mes "^483D8B*La la la*";
		mes "Venho beber apenas em um dia.";
		mes "Então, se você vai me dizer quando você bebe.";
		mes "Eu digo-te quando vou beber com você.^000000";
		next;
		mes "^483D8BVamos ficar juntos Yeah yeah ye...^000000 Hmmmmm...?";
		next;
		mes "[Bardo]";
		mes "Olá, olá.";
		mes "Oh, você veio para ouvir a minha canção e esquecer suas preocupações?";
		next;
		if (select("Ignora-o.","Quem é você?") == 2) {
			cutin("bard_eland04",2);
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Você parece ser novo por aqui...";
			mes "Quem é você?";
			next;
			cutin("bard_eland02",2);
			mes "[Errende]";
			mes "Hm? Ah sim.";
			mes "Sou apenas mais um poeta errante, que vai onde o vento leva.";
			mes "Por favor, me chame de ^483D8BErrende^000000, o Bardo que deseja agradá-lo.";
			next;
			mes "[Errende]";
			mes "Se você me permitir, eu vou te contar sobre minhas viagens.";
		} else {
			mes "[Errende]";
			mes "Aaaah, Aah...";
			mes "Você não pode simplesmente ignorar-me assim!";
			mes "Onde está o seu sentimento de alegria, o seu senso de romance?";
			close2;
			cutin("",255);
			end;
		}
	} else if (gef_bard_q == 1) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Bem-vind"+(Sex == SEX_MALE)+" de volta, "+strcharinfo(PC_NAME)+".";
		mes "O que você gostaria que fizesse por você?";
		mes "Gostaria de ouvir um conto ou escutar uma canção?";
	} else if (gef_bard_q == 2) {
		cutin "bard_eland04",2;
		mes "[Errende]";
		mes "*Sigh...*";
		mes "Onde posso encontrar o 8º amor...?";
		mes "Já conheceu Gunther?";
		mes "Ah, talvez ainda não.";
		next;
		mes "[Errende]";
		mes "*Sigh*";
		mes "Perdi o coração pra cantar desde que eu esqueci a linha da canção.";
		mes "Eu só ...não posso.";
		mes "Meu espírito é insensível.";
		mes "Não há nenhuma inspiração.";
		next;
		mes "[Errende]";
		mes "Por favor, pergunte a ^483D8BGunther^000000 sobre o ^483D8B8º amor^000000.";
		mes "^483D8BEu fico apaixonado^000000.";
		mes "Agradeço antecipadamente.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 3) {
		cutin("bard_eland02",2);
		mes "[Errende]";
		mes "Então...";
		mes "Já viu Gunther?";
		next;
		mes "^3355FFVocê vira para mostrar-lhe as costas.^000000";
		next;
		cutin("bard_eland03",2);
		mes "[Errende]";
		mes "Huh...?!";
		mes "Não é isso?!";
		mes "Que linha da canção é essa escrita em suas costas?";
		mes "Espere, não se mova!";
		mes "O 8º amor é...";
		mes "Agora eu vejo!";
		next;
		mes "[Errende]";
		mes "Em um, eu fico apaixonado.";
		mes "Em dois, você me mostra um sorriso.";
		mes "Em três, eu adoro seu toque.";
		mes "Em quatro, um beijo macio.";
		next;
		mes "[Errende]";
		mes "Em cinco, vamos mudar nossas mentes.";
		mes "Uma pétala cai pelo ar.";
		mes "Em seis, eu fico apaixonado.";
		mes "Em sete, você se apaixona.";
		next;
		mes "[Errende]";
		mes "Em oito nos afastamos...";
		mes "Em nove, o amor renasce.";
		mes "Em dez, meu amor se foi.";
		mes "Em onze eu descubro porquê.";
		if (Sex == SEX_MALE) {
			mes "Em doze vejo seu novo namorado?";
		} else {
			mes "Em doze vejo sua nova namorada?";
		}
		next;
		mes "[Errende]";
		mes "...";
		next;
		mes "[Errende]";
		mes "...";
		mes "......";
		next;
		cutin("bard_eland04",2);
		mes "[Errende]";
		mes "Isso...";
		mes "Isso não pode ser.";
		mes "Essa música supostamente é sobre amor, não uma farsa romântica!";
		next;
		mes "[Errende]";
		mes "As letras.";
		mes "Elas devem ter sido mudadas.";
		mes "Gunther disse alguma coisa sobre isto?!";
		mes "Hmmm, mas quem é que iria alterar as letras...?";
		next;
		input(.@input$);
		if (.@input$ == "Kino Gato") {
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "Ah, é claro!";
			mes "Com certeza você está certo!";
			mes "Como eu não pensei nisso antes?";
			next;
			mes "[Errende]";
			mes "Tudo faz sentido agora.";
			mes "Afinal, ele costumava ser um membro do Único Exército Invencível.";
			mes "Suas mudanças podem ter significado pouco.";
			mes "Uma vez que esta canção é usada sobre um casal feliz...";
			next;
			mes "[Errende]";
			mes "Hmmm...";
			mes "Estou arrependido de pedir um favor de você novamente.";
			mes "Mas em suas viagens, você acha que poderia encontrar a letra original para esta canção?";
			mes "Posso esperar por ela...";
			next;
			if (select("Não, desculpe","Posso sim") == 1) {
				mes "[Errende]";
				mes "Ah, eu acho que era demais para pedir-lhe.";
				mes "Minhas desculpas.";
				mes "Não se preocupe, eu vou descobrir alguma outra maneira.";
				gef_bard_q = 5;
				close2;
				cutin("",255); 
				end;
			} else {
				mes "[Errende]";
				mes "Está falando sério?";
				mes "Oh, muito obrigado!";
				mes "Você deve ser um anjo!";
				mes "Um anjo que realmente entende o coração de um poeta!";
				next;
				mes "[Errende]";
				mes "Pagarei sua volta de alguma forma!";
				mes "Obrigado pela sua preocupação.";
				gef_bard_q = 4;
				close2;
				cutin("",255); 
				end;
			}
		} else if (.@input$ == "Gunther") {
			mes "[Errende]";
			mes "Gunther?";
			mes "Eu não acho que ele faria isso.";
			mes "Ele coloca sempre linhas em suas músicas como 'doubleharmony for you.'";
			mes "Ele é muito bobo pra isso.";
			gef_bard_q = 6;
			close2;
			cutin("",255);
			end;
		} else if (.@input$ == "Gunther Doubleharmony") {
			mes "[Errende]";
			mes "Gunther?";
			mes "Eu não acho que ele faria isso.";
			mes "Ele coloca sempre linhas em suas músicas como 'doubleharmony for you.'";
			mes "Ele é muito bobo pra isso.";
			gef_bard_q = 6;
			close2;
			cutin("",255);
			end;
		} else if (.@input$ == "Errende") {
			cutin "bard_eland04",2;
			mes "[Errende]";
			mes "Certamente você está brincando!";
			mes "Se eu fiz, é por que eu não sei sobre o que é esta canção?";
			gef_bard_q = 6;
			close2;
			cutin("",255);
			end;
		} else {
			mes "[Errende]";
			mes ""+@input$+"...?";
			mes "Acho que não conheço essa pessoa.";
			mes "Talvez tenha sido um mal-entendido?";
			mes "*Sigh...*";
			next;
			mes "[Errende]";
			mes "Qual foi a linha...?";
			mes "Como poderia esquecer o 8º amor?";
			gef_bard_q = 6;
			close2;
			cutin("",255);
			end;
		}
	} else if (gef_bard_q == 4) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Hmm...";
		mes "Não sei exatamente onde o Sr. Gato está.";
		mes "Talvez você possa ser capaz de descobrir...";
		mes "Mas ouvir dizer que ele mora em Morroc atualmente.";
		next;
		mes "[Errende]";
		mes "Se você é experiente com exploração, você conhece a Organização de Estudo de Monstros.";
		mes "Recentemente, muitos estudiosos têm sido feridos em resultado de pesquisa de monstros.";
		next;
		mes "[Errende]";
		mes "Por causa dos perigos da investigação.";
		mes "Aventureiros são necessários para recolher as informações para os pesquisadores.";
		next;
		mes "[Errende]";
		mes "Para nômades, como eu, é uma ótima maneira de ganhar dinheiro.";
		mes "Damos-lhes as informações que precisam e eles nos dão apoio financeiro para sobrevivermos.";
		next;
		mes "[Errende]";
		mes "Mais uma vez, muito obrigado por sua ajuda.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 5) {
		cutin("bard_eland04",2);
		mes "[Errende]";
		mes "Oh...!";
		mes "Estas lágrimas não vão parar!";
		mes "Por-porquê as pessoas costumam tratar os bardos assim?";
		next;
		mes "^483D8BQuem fez esse pobre bardo chorar?";
		mes "Quem quebrou os corações de vidro?";
		mes "Quebre seus sonhos...";
		mes "Não tem sonhos, não tem coração, não tem amor, não tem esperança não tem...^000000";
		next;
		.@rand = rand(1,50);
		if (.@rand > 27 && .@rand < 37) {
			mes "^3355FFErrende continua a cantar sobre o seu desespero pessoal.";
			mes "Ele parece estar decepcionado com a sua recusa em ajudá-lo.";
			mes "Claro, você começa a sentir pena dele.^000000";
			next;
			if (select("Está bem, vou te ajudar...","Ignora-o assim mesmo") == 1) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Ei. Ei, Errende.";
				mes "Pare de cantar essa canção.";
				mes "É embaraçoso, ok?";
				mes "Tudo bem, eu vou encontrar a canção original para você.";
				next;
				cutin("bard_eland01",2);
				mes "[Errende]";
				mes "*Gasp!*";
				mes "Sério! Tem certeza? Obrigado!";
				mes "Muito obrigado!";
				mes "Você realmente se importa com a tristeza de um Bardo!";
				next;
				mes "[Errende]";
				mes "Eu prometo lhe pagar de volta o melhor que puder!";
				mes "Vou esperar por você aqui até voltar!";
				gef_bard_q = 4;
			} else {
				mes "^3355FFVocê ignora o coração dele flexionando a canção.";
				mes "Mas a que custo para a sua alma?^000000";
			}
			close2;
			cutin("",255);
			end;
		} else {
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "Você não tem nada que queira me perguntar, não é?";
			mes "Se não, você gostaria de ouvir a minha música?";
			next;
			mes "^483D8BMiserável...";
			mes "Ninguém me ama.";
			mes "Amigos para nada...";
			mes "Ooooooooh não!^000000";
			close2;
			cutin("",255);
			end;
		}
	} else if (gef_bard_q == 6) {
		cutin("bard_eland04",2);
		mes "[Errende]";
		mes "Quem mudou as palavras desta canção afinal?";
		mes "É realmente difícil de entender.";
		mes "Gostaria de poder falar com pessoa que mudou a expressão.";
		next;
		mes "[Errende]";
		mes "*Sigh*";
		mes "Eu estou tão frustrado que não posso cantar..";
		mes "Eu só... não posso.";
		mes "Meu espírito é insensível.";
		mes "Não há nenhuma inspiração.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O senhor não acha...";
		mes "Que a pessoa...";
		mes "que mudou a canção seria...";
		input(.@input$);
		next;
		if (.@input$ == "Kino Gato") {
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "Ah! É claro!";
			mes "Acho que você está certo!";
			mes "Como eu não pensei nisso antes?";
			next;
			mes "[Errende]";
			mes "Tudo faz sentido agora.";
			mes "Afinal, ele costumava ser um membro do Único Exército Invencível.";
			mes "Suas mudanças podem ter significado pouco.";
			mes "Uma vez que esta canção é usada sobre um casal feliz...";
			next;
			mes "[Errende]";
			mes "Hmmm...";
			mes "Estou arrependido de pedir um favor de você novamente.";
			mes "Mas em suas viagens, você acha que poderia encontrar a letra original para esta canção?";
			mes "Posso esperar por ela...";
			next;
			if (select("Não, desculpe","Posso, sim") == 1) {
				mes "[Errende]";
				mes "Ah, eu acho que era demais para pedir-lhe.";
				mes "Minhas desculpas.";
				mes "Não se preocupe, eu vou descobrir alguma outra maneira.";
				gef_bard_q = 5;
				close2;
				cutin("",255);
				end;
			} else {
				mes "[Errende]";
				mes "Está falando sério?";
				mes "Oh, muito obrigado!";
				mes "Você deve ser um anjo!";
				mes "Um anjo que realmente entende o coração de um poeta!";
				next;
				mes "[Errende]";
				mes "Pagarei sua volta de alguma forma!";
				mes "Obrigado pela sua preocupação.";
				gef_bard_q = 4;
				close2;
				cutin("",255);
				end;
			}
		} else if (.@input$ == "Gunther") {
			mes "[Errende]";
			mes "Gunther?";
			mes "Eu não acho que ele faria isso.";
			mes "Ele coloca sempre linhas em suas músicas como 'doubleharmony for you.'";
			mes "Ele é muito bobo pra isso.";
			close2;
			cutin("",255);
			end;
		} else if (.@input$ == "Gunther Doubleharmony") {
			mes "[Errende]";
			mes "Gunther? Eu não acho que ele faria isso.";
			mes "Ele coloca sempre linhas em suas músicas como 'doubleharmony for you.'";
			mes "Ele é muito bobo pra isso.";
			close2;
			cutin("",255);
			end;
		} else if (.@input$ == "Errende") {
			cutin "bard_eland04",2;
			mes "[Errende]";
			mes "Certamente você está brincando!";
			mes "Se eu fiz, é por que eu não sei sobre o que é esta canção?";
			close2;
			cutin("",255);
			end;
		} else {
			mes "[Errende]";
			mes ""+@input$+"...?";
			mes "Acho que não conheço essa pessoa.";
			mes "Talvez tenha sido um mal-entendido?";
			mes "*Sigh...*";
			next;
			mes "[Errende]";
			mes "Qual foi a linha...?";
			mes "Como poderia esquecer o 8º amor?";
			close2;
			cutin("",255);
			end;
		}
	} else if (gef_bard_q == 7) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Então, você conhece o Sr. Gato?";
		mes "Ah, em Morroc?";
		mes "Ele tem uma doença crônica, mas, obviamente, não parecem importar-se com ela.";
		mes "Então, o que ele disse?";
		next;
		mes "[Errende]";
		mes "Hm? Em Juno?";
		mes "Vamos, deve ser isso.";
		mes "Não será fácil visitar a livraria do Sr. Sketzi.";
		mes "Deixe-me marcar você com";
		mes "^483D8BO Selo da Amizade.^000000.";
		next;
		cutin("bard_eland03",2);
		mes "[Errende]";
		mes "Dá-me a tua mão esquerda.";
		mes "Agora, deixe-me lançar um feitiço...";
		mes "*Gagueja gagueja...*";
		next;
		specialeffect(EF_CONE, AREA, playerattached());
		mes "^3355FFEm seu punho esquerdo, uma marca em forma crescente com uma luz brilhante apareceu.";
		mes "É perceptível só quando se concentrar em encontrá-lo.";
		mes "Mas pode aparecer claramente sob o luar.^000000";
		next;
		mes "[Errende]";
		mes "Vá. Agora, você pode ir até o Sr. Sketzi.";
		mes "Lembre-se, você deve mostrar-lhe o Selo da Amizade.";
		mes "Boa sorte.";
		gef_bard_q = 8;
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 8) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Sr. Skezti tem uma pequena livraria na rua do livro no lado direito da Mineta em Juno.";
		mes "Se você mostrar-lhe o selo, ele vai te ajudar.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q > 8 && gef_bard_q < 10) {
		cutin("bard_eland02",2);
		mes "[Errende]";
		mes "Parece que você não encontrou ainda.";
		mes "Bem, fique à vontade, eu posso esperar o tempo que quiser.";
		mes "Realmente não me aborrece, pois paciência parece ser uma parte da minha profissão.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 10 || gef_bard_q == 11) {
		if (gef_bard_q == 11) {
			cutin("bard_eland04",2);
			mes "[Errende]";
			mes "Hmmm?";
			mes "É isso o selo preto ...?";
			mes "Kino Gato removeu o que ele me deu sem deixar rastro.";
			mes "Por isso, faz de conta que ele gosta muito de ti.";
			mes "Caso contrário...";
			next;
			mes "^3355FFVocê dá à Errende a carta que recebeu de Kino Gato.^000000";
			next;
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "Er, ele já sabe tudo?";
			mes "Essa mancha de sangue...";
			mes "Acho que ele ainda tem problemas de saúde.";
			mes "Ele devia parar de se torturar...";
			next;
		} else {
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "E então, como foi?";
			mes "Pera ai, você já achou?";
			mes "Sim, é isso! Perfeito!";
			mes "Isto é tão fascinante!!";
			mes "Sim, certo.";
			mes "Certo.";
			next;
		}
		gef_bard_q = 12;
		mes "[Errende]";
		mes "Obrigado, eu realmente aprecio o que você fez por mim.";
		mes "Mas, o que seria uma forma mais adequada para expressar a minha gratidão?";
		next;
		mes "[Errende]";
		mes "Ah! Tenho apenas 'a coisa'.";
		mes "Tudo bem,ajeite-se ai, e escute minha canção.";
		next;
		cutin("bard_eland03",2);
		mes "^483D8BTodo Deus nunca cresce velho por causa da bela Deusa, Idun.";
		mes "Guardiã das maçãs da juventude Deusa da imortalidade.^000000";
		specialeffect(EF_STEAL,AREA,playerattached());
		next;
		mes "^483D8BTodo Deus nunca cresce velho.";
		mes "Idun, a esposa de Bragi, Idun, a filha de Odin na lei.";
		mes "As maçãs ela mantém na sua cesta.^000000";
		next;
		mes "^483D8BSem Idun,";
		mes "Todo deus sucumbiria à idade.";
		mes "Mesmo Thor, o mais forte dos deuses, teria um crescimento débil.";
		mes "Megingjard ia escorregar de sua cintura, e Mjölnir nunca iria voar novamente.^000000";
		next;
		mes "Loki foi negligente uma só vez, e fez com que perdesse para os deuses.";
		mes "Ele foi obrigado a levá-la de volta.^000000";
		specialeffect(EF_STEAL,AREA,playerattached());
		next;
		mes "^483D8BA minha deusa vive";
		mes "No campo de Asgard, ela me dá frutos do céu.";
		mes "Você será amada por todos os deuses...";
		mes "Você será abençoada por cada deus...^000000";
		next;
		specialeffect(EF_BEGINSPELL6);
		mes "^483D8BSe você compartilha a maçã da juventude comigo.";
		mes "Mesmo sendo uma mordida com este pobre poeta.";
		mes "Você será amada por todos os deuses...";
		mes "Você será abençoada";
		mes "Por cada deus...^000000";
		next;
		specialeffect(EF_RESURRECTION,AREA,playerattached());
		mes "^3355FFAo ouvir o seu canto, você se sente à vontade.";
		mes "E os seus pensamentos tornam-se mais claros.";
		mes "Você acredita que você veja a visão de um anjo.";
		mes "E você ganha alguns pontos de experiência.^000000";
		if (BaseLevel < 56) {getexp(450,0); }
		else if ((BaseLevel > 55) && (BaseLevel < 61)) { getexp(550,0); }
		else if ((BaseLevel > 60) && (BaseLevel < 66)) { getexp(968,0); }
		else if ((BaseLevel > 65) && (BaseLevel < 71)) { getexp(1341,0); }
		else if ((BaseLevel > 70) && (BaseLevel < 76)) { getexp(3575,0); }
		else if ((BaseLevel > 75) && (BaseLevel < 81)) { getexp(6024,0); }
		else if ((BaseLevel > 80) && (BaseLevel < 86)) { getexp(7034,0); }
		else if ((BaseLevel > 85) && (BaseLevel < 91)) { getexp(9205,0); }
		else { getexp(15678,0); }
		next;
		cutin("bard_eland02",2);
		mes "[Errende]";
		mes "Então, como você se sente agora?";
		mes "Espero que a minha canção tenha lhe feito bem.";
		mes "Acho que ela pode não ser suficiente para lhe restituir.";
		mes "Mas por favor, compreenda que esta é a melhor maneira de expressar a minha gratidão.";
		next;
		mes "[Errende]";
		mes "Além disso, tenho estado a pensar em ti agora como amig"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Com quem eu falo mais abertamente, sem qualquer preocupação.";
		mes "E eu acho que você tem um belo sorriso.";
		mes "Estou errado?";
		next;
		mes "[Errende]";
		mes "Espero que você permaneça honesta e respeitosa para com outras pessoas.";
		mes "E que você continue a ignorar a ganância de fortuna ou poder.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 12) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Olá "+strcharinfo(PC_NAME)+" o que você gostaria que fizesse por você?";
		mes "Gostaria de ouvir um conto ou escutar uma canção?";
	}
	next;
	switch (select("Conte-me a história","Toque uma música?","Err, talvez mais tarde.")) {
		case 1:
		mes "[Errende]";
		mes "Você gosta de histórias, hein?";
		mes "Vou te contar o que eu sei...";
		mes "Só para você, é claro.";
		next;
		cutin("bard_eland01",2);
		mes "[Errende]";
		switch (rand(3)) {
			case 1:
			mes "Hmmm....";
			mes "Então vamos falar sobre Geffen?";
			mes "Alguma vez já foste para o bar ou o Estaleiro aqui?";
			next;
			mes "[Errende]";
			mes "Eu estaria mentindo se eu não dissesse que as irmãs que trabalham no Pub e no Estaleiro são...";
			mes "^FF6699Cativantes^000000.";
			next;
			mes "[Errende]";
			mes "A senhora é uma mulher linda, graciosa e traz com ela um ar de requinte.";
			mes "E a mais jovem é uma moça tão alegre, tão enérgica e... núbil.";
			next;
			mes "[Errende]";
			mes "Mas eu divago.";
			mes "Às vezes, porém, só às vezes você mente, eles não são tão sexy como de costume.";
			next;
			mes "[Errende]";
			mes "Parece que o espírito de seu pai, tão importante para elas, às possui de vez em quando.";
			next;
			cutin("bard_eland02",2);
			mes "[Errende]";
			mes "Acho que quando alguém age até mesmo um pouco covarde para essas meninas.";
			mes "O pai retoma o espírito.";
			next;
			mes "[Errende]";
			mes "Acho que o amor de um pai dura pra sempre, mesmo depois da vida.";
			mes "Mas, é claro, não tenho certeza.";
			next;
			mes "[Errende]";
			cutin("bard_eland01",2);
			mes "Vamos ver...";
			mes "Esteja atento a esta realidade que mostra sombra que paira por detrás dos Comerciantes do Bar, em Geffen.";
			next;
			mes "[Errende]";
			mes "A julgar pelas suas roupas, ele deve ser de Morroc, que é muito mais quente.";
			mes "É por isso que ele tem um exaustor, mesmo que ele não tenha aquecedor.";
			mes "Para as condições atmosféricas mais frias por aqui.";
			next;
			mes "[Errende]";
			mes "Devo adverti-lo, não deixe que ele fale que você compra aquecedor.";
			mes "Porque ele irá vendê-lo por um preço escandaloso.";
			mes "Ele definitivamente não é confiável.";
			next;
			mes "[Errende]";
			mes "Por último, gostaria de lembrar a cidade de Geffenia perdida.";
			mes "Escondida sob a Torre de Geffen.";
			mes "Eu ouvi dizer que algum tipo de condição é necessária para entrar Geffenia.";
			mes "Mas não tenho certeza.";
			next;
			mes "[Errende]";
			mes "Geffenia está relacionado com as duas senhoras atraentes que mencionei há pouco.";
			mes "Parece que seu pai, William, entrou na Torre de Geffen com um grupo.";
			mes "Para exterminar monstros, mas ele nunca retornou.";
			next;
			mes "[Errende]";
			mes "É trágico que ele deixou sua família pra trás dessa forma.";
			mes "Mas, talvez, seja mais trágico que o seu espírito...";
			mes "Assuste qualquer pessoa interessada nessas meninas.";
			break;
			case 2:
			mes "Ok, deixe-me contar uma história sobre Morroc, cidade do deserto.";
			mes "Aventureiros para valer os seus sais são esperados para ter explorado a cidade e seu envolvente deserto.";
			next;
			mes "[Errende]";
			mes "A Esfinge e as pirâmides são zonas populares e especiais de exploração por aventureiros.";
			mes "Você já esteve lá antes?";
			mes "Eu ainda não, mas talvez algum dia eu vá.";
			next;
			mes "[Errende]";
			mes "Enquanto eu estava em Morroc, encontrei um mercador que vendia Maça-Espada.";
			mes "Para Sacerdotes e Sacerdotisas.";
			mes "Fora esses, Sacerdotes estão proibidos de utilizar qualquer tipo de arma com lâminas.";
			next;
			mes "[Errende]";
			mes "Também vi um garotinho vigoroso que implorava ao pai para domar um Munak para ele.";
			mes "Eu ouvi o pai falar um pouco e parece que um dos seus amigos do Morroc está perdido em Alberta.";
			next;
			cutin("bard_eland02",2);
			mes "[Errende]";
			mes "Em todo caso, eu ajudei o pai a fazer um recado e ele me deu uma misteriosa caixa em troca.";
			mes "Quando eu abri a caixa, encontrei uma pena estranha.";
			mes "Tenho conhecimento de como funciona, mas...";
			next;
			mes "[Errende]";
			mes "Pergunto-me se esse amigo do homem, Pandger Mayer, alguma vez encontrou o caminho de volta para casa...";
			break;
			default:
			mes "Por que não falamos de Alberta?";
			mes "Há um navio afundado para eventos.";
			mes "É um lugar onde os aventureiros podem ir em expedições.";
			mes "Parece que eles estão fazendo um monte de dinheiro.";
			next;
			mes "[Errende]";
			mes "Quando o primeiro navio foi afundado perto de Alberta.";
			mes "Ele foi imediatamente encontrado por um dos Cavaleiros de Segurança de Alberta.";
			next;
			mes "[Errende]";
			mes "Aquele Cavaleiro de Segurança se aventurou dentro e encontrou um bebê dentro de um dos quartos.";
			mes "Avançou até o bebê...";
			mes "Que tinha consigo uma caixa de música.";
			next;
			mes "[Errende]";
			mes "Este bebê foi o primeiro e único sobrevivente do navio afundado.";
			mes "Ele foi trazido para Alberta.";
			mes "Embora ele tenha sido tratado com desprezo quando ele era uma criança.";
			mes "Ele está bem agora.";
			next;
			mes "[Errende]";
			mes "Tal como o navio afundado, estou inseguro se era ou não um navio pirata.";
			mes "Diz-se que esqueletos vestindo trajes piratas vagam seus restos mortais.";
			next;
			mes "[Errende]";
			mes "Um dos outros mistérios de Alberta é a Ilha Tartaruga.";
			mes "Parece que um marinheiro encontradou uma rota segura para aquele lugar.";
			mes "E está dando passagem para aventureiros.";
			next;
			mes "[Errende]";
			mes "Ainda assim, a Ilha Tartaruga não é absolutamente segura.";
			mes "Dois esquadrões de Cavaleiros de Segurança de Alberta Segurança já passaram por lá.";
			mes "Mas não retornaram.";
			mes "Certamente, este é um motivo de preocupação.";
			next;
			mes "[Errende]";
			mes "E, mesmo assim, não parava de visitar aquele lugar.";
			mes "Por puro acaso, encontrei o diário de um aventureiro que já tinha estado lá.";
			mes "Parece que ele é um famoso sábio agora.";
			next;
			cutin("bard_eland02",2);
			mes "[Errende]";
			mes "Nas revistas existem detalhes sobre um derradeiro espadachim.";
			mes "E da exploração da Ilha Tartaruga.";
			mes "Tenho certeza de que ninguém à procura do tesouro naquele lugar vai achar a aventura emocionante.";
			break;
		}
		case 2:
		next;
		mes "[Errende]";
		mes "Até que enfim, conheci alguém que reconhece o meu talento!";
		mes "Você merece a ouvir minhas músicas!";
		mes "Agora, o que você gostaria de ouvir?";
		next;
		if (select("Hunn.., Você quem escolhe","Toque uma canção elegre!") == 1) {
			cutin("bard_eland03",2);
			mes "[Errende]";
			mes "Então deixe-me ver....";
			mes ".....";
			next;
			switch (rand(3)) {
				case 1:
				soundeffect("ring_of_nibelungen.wav",0); break;
				case 2:
				soundeffect("dont_forget_me_not.wav",0); break;
				default:
				soundeffect("in_to_the_abyss.wav",0); break;
			}
			close2; cutin("",255); end;
		} else {
			cutin("bard_eland03",2);
			mes "[Errende]";
			mes "Uma canção otimista?";
			mes "Bom, deixe-me ver.";
			mes "Uma canção otimista, uma canção otimista...";
			mes "Ok, aqui vamos nós...";
			next;
			switch (rand(3)) {
				case 1:
				mes "^483D8BValhalla reluz em ouro.";
				mes "O Quinto, como sabemos é a velha Glast Heim!";
				mes "Guerreiros gloriosos pronunciam a convocação de Odin.^000000";
				next;
				mes "^483D8BPalácio dos mortos com um telhado cor de prata o terceiro, como sabemos...";
				mes "Valaskjalf!";
				mes "Guerreiros gloriosos pronunciam a convocação de Odin.^000000";
				next;
				mes "^483D8BQuinhentos e quarenta portas.";
				mes "Nos grandes salões de Valhalla aventuram-se a abrir o coração de um herói.";
				mes "Oitocentos guerreiros recolhem sob a vontade de Deus.";
				mes "E com um encargo de sair dessas portas.^000000";
				next;
				mes "^483D8BPiedosos guerreiros entram em Yggdrasil para sua sorte.";
				mes "Com orgulho e honra, eles aceitam as boas-vindas de Valkyrie.^000000";
				next;
				mes "^483D8BGuerreiros caídos em batalha Nos gloriosos confrontos do vermelho.";
				mes "A morte pode ter chegado.";
				mes "Mas sua fama e seu espírito conduziram Valhalla.^000000";
				if (!gef_bard_q) { gef_bard_q = 1; }
				break;
				case 2:
				mes "^483D8BOs sons do galope ecoam à distância.";
				mes "Uma nuvem nebulosa de poeira preenche o sol poente.";
				mes "Milhares de olhos abertos tochas no castelo chamas como milhares de Ifrits.";
				next;
				mes "^483D8BEscute meu coração latejante, o sangue flui nas minhas veias.";
				mes "Sentido o peso da minha armadura.";
				mes "O inimigo tem aparecido antes de nós.^000000";
				next;
				mes "^483D8BToque forte os tambores, mais forte!";
				mes "Coragem, soldados, marchem pra frente!";
				mes "Gritem alto, soldados, mais alto!";
				mes "Hoje nunca vai voltar!^000000";
				next;
				mes "^483D8BAtordoar o céu provocar a terra.";
				mes "Sinto novamente meu coração.";
				mes "Toquem as cornetas para balançar a fortaleza.";
				mes "Hoje nunca vai voltar!^000000";
				next;
				mes "[Errende]";
				mes "Ah, essa se chama 'Tambores no Campo de Batalha' que é de autoria do Sr. Iolo.";
				mes "Sim, sim, eu gosto dessa música.";
				break;
				default:
				if (gef_bard_q == 1) {
					mes "[Errende]";
					if (Sex == SEX_MALE) {
						mes "Guerreiro heróico.";
					} else {
						mes "Minha justa senhora.";
					}
					mes "Por favor, ouça a minha canção.";
					mes "Se você tem uma flor na mão e está apaixonado.";
					mes "Vamos contar as pétalas de flores enquanto prosseguimos com o projeto.";
					next;
					mes "^483D8BEm um, eu fico apaixonado.";
					mes "Em dois, você me mostra um sorriso.";
					mes "Em três, eu adoro seu toque.";
					mes "Em quatro, um beijo macio.";
					mes "Em cinco, vamos mudar nossas mentes.";
					mes "Uma pétala cai pelo ar.^000000";
					next;
					cutin("bard_eland04",2);
					mes "^483D8BEm seis, eu fico apaixonado.";
					mes "Em sete, você se apaixona.";
					mes "Em oito...^000000";
					next;
					mes "[Errende]";
					mes "Em oito...";
					mes "Em... oito...";
					mes "Qual seria a próxima...?";
					next;
					mes "[Errende]";
					mes "Qual é a próxima parte?";
					mes "Qual é o 8º amor?";
					mes "Que vergonha para um bardo esquecer as palavras de uma canção!";
					next;
					mes "[Errende]";
					mes "Eu...";
					mes "não posso suportar a humilhação!";
					mes "Ou o suspense do que acontece a seguir...!";
					next;
					mes "[Errende]";
					mes "Tu és um aventureiro, não és?";
					mes "Então você ao menos viaja um pouco, certo?";
					mes "É embaraçoso para mim pedir, mas eu tenho um pedido a fazer.";
					next;
					if (select("Claro, sem problema","Eu não vou te ajudar.") == 1) {
						cutin("bard_eland01",2);
						mes "[Errende]";
						mes "Muito obrigado!";
						mes "Vamos ver, quem sabe? ";
						mes "Já sei! Gunther!";
						next;
						mes "[Errende]";
						mes "Se por ventura encontrar ^483D8BGunther Doubleharmony^000000.";
						mes "Informe-o do meu dilema.";
						next;
						mes "[Errende]";
						mes "Diga a ele que ^483D8BErrende Menta^000000 esqueceu uma linha da canção.";
						mes "^483D8BEm um, eu fico apaixonado^000000.";
						mes "A linha se chama ^483D8B8º amor^000000.";
						next;
						mes "[Errende]";
						mes "Eu te suplico, se você encontrá-lo, por favor, pergunte-lhe o 8º amor.";
						mes "E me diga imediatamente a letra.";
						if (gef_bard_q == 1) { gef_bard_q = 2; }
					} else {
						mes "[Errende]";
						mes "*Sigh...*";
						mes "Não me lembro da 8ª parte desta canção....";
						mes "Se minha vida dependesse disso...";
						mes "E depende!";
						mes "*Wahhhh*";
					}
				} else {
					mes "^483D8BUm bom bardo canta para agradar seus ouvintes.";
					mes "Então, não espere uma canção triste isso aumenta a sua angústia.^000000";
					next;
					mes "^483D8BUma boa Odalisca dança para agradar seu público-alvo.";
					mes "Vamos dançar juntos?";
					mes "Basta segurar a minha mão.";
					mes "*La la la* *La la la*^000000";
					next;
					mes "["+strcharinfo(PC_NAME)+"]";
					mes "À propósito...";
					mes "Porque é que vocês brigam às vezes?";
					mes "Soa estranho quando você faz isso.";
					next;
					mes "[Errende]";
					mes "C-como você pode dizer tal coisa, "+strcharinfo(PC_NAME)+"?";
					mes "É difícil chegar a melodias originais!";
				}
				break;
			}
			close2;
			cutin("",255);
			end;
		}
		case 3:
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Hmm?";
		mes "Tudo bem.";
		mes "No entanto, ao ouvir uma boa história ou alegre canção você pode realmente se sentir bem.";
		mes "Então, vejo você mais tarde.";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
payon,181,172,3	script	Bardo#2gef_bard_q	1_M_BARD,{
	if (gef_bard_q == 2) {
		mes "[Gunther Doubleharmony]";
		mes "Hahaha";
		mes "Escute, escute!";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Foi-me dito esta canção por um dos meus amigos sobre este Mercador.";
		mes "Que vive em Payon e todo mundo adora essa música.";
		mes "Especialmente porque eu estou cantando e você sabe disso...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença.";
		mes "Você é...";
		mes "Gunther Doubleharmony?";
		next;
		mes "[Gunther Doubleharmony]";
		mes "... o mercador era tão pobre que não tinha sequer...?";
		mes "Ah sim, certo.";
		mes "Isso é comigo.";
		mes "O que está acontecendo?";
		next;
		mes "^3355FFVocê explica a ele que está buscando a letra perdida da canção.^000000";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Ahhhhhhh, eu vejo.";
		mes "Agora, qual foi";
		mes "o nome da canção que você disse?";
		next;
		input(.@input$);
		if (.@input$ == "Eu fico apaixonado") {
			mes "[Gunther Doubleharmony]";
			mes "Ah... essa canção?";
			mes "Pelo jeito que falas, quem te pediu pra achar informações sobre essa canção?";
			next;
			input(.@input$);
			if (.@input$ == "Errende" || .@input$ == "Errende Menta") {
				mes "[Gunther Doubleharmony]";
				mes "Sim, é meu amigo!";
				mes "Errende Menta!";
				mes "Nós eramos muito próximos...";
				mes "Então eu vou escrever cada palavra dessa canção para meu amigo Errende Menta.";
				next;
				mes "^3355FFGunther rascunha algo furiosamente em suas costas.^000000";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Agora vá!";
				mes "Você pode voltar para Errende Menta e mostrar-lhe as costas.";
				mes "Ele vai ver o que eu escrevi e, em seguida, se lembrará da letra!";
				if (gef_bard_q == 2) { gef_bard_q = 3; }
				close;
			} else {
				mes "[Gunther Doubleharmony]";
				mes "Não, não, não, eu não conheço ninguém com esse nome.";
				mes "Então é melhor você ir e verificar o nome da pessoa que solicita de novo, ok?";
				close;
			}
		} else {
			mes "[Gunther Doubleharmony]";
			mes "Não, não, não, não, eu não conheço nenhuma canção com esse título.";
			mes "Ela pode até não existir.";
			mes "Então você deve ir e verificar o nome da canção de novo e me dizer, ok?";
			close;
		}
	} else if (gef_bard_q == 6) {
		mes "[Gunther Doubleharmony]";
		mes "Você retornou!";
		mes "Huh, a canção que escrevi sobre suas costas?";
		mes "Calma, calma, deixe-me pensar..";
		mes "Ah, certo, eu tenho!";
		next;
		mes "[Gunther Doubleharmony]";
		mes "As palavras que escrevi sobre as suas costas eram da autoria do Sr. Gato, meu ídolo, meu herói!";
		mes "Essa música é a arte de Kino Gato.";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Gostaria de um dia ser um grande bardo como ele!";
		close;
	} else {
		mes "[Gunther Doubleharmony]";
		mes "Hahaha";
		mes "Escute, escute!";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Foi-me dito esta canção por um dos meus amigos sobre este Mercador.";
		mes "Que vive em Payon e todo mundo adora essa música.";
		mes "Especialmente porque eu estou cantando e você sabe disso...";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Ah, certo!";
		mes "Você quer ouvir";
		mes "a minha música ou uma história?";
		mes "Eu sei o que você quer!";
		mes "Certo?";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Então você quer ouvir uma canção ou uma história?";
		next;
		switch (select("Uma canção","Uma história","Talvez outra hora")) {
			case 1:
			switch (rand(3)) {
				case 1:
				mes "[Gunther Doubleharmony]";
				mes "Gunther canta!";
				mes "Gunther dança!";
				mes "O nome dessa canção é:";
				mes "'O rico Sr. Kim'";
				next;
				mes "^228B22Mercador de Payon";
				mes "Tão poooooobre";
				mes "Sem dinheiro pra armadura.";
				mes "Sem dinheiro pra fazer nada.";
				next;
				mes "^228B22Vendeu sua camisa de Algodão";
				mes "Sua costas ficaram à mostra...";
				mes "Sem pena alguma.^000000";
				next;
				mes "^228B22Primeiro ele só vendeu Poções Vermelhas.";
				mes "Na primeira, só vendeu poções vermelhas.";
				mes "Então ele começou a vender Cenouras, *uau*";
				mes "Ele poderia comprar uma nova armadura e até mesmo vestí-la.";
				mes "*UAU*^000000";
				next;
				mes "^228B22Mas um dia, ele estava sonegando.";
				mes "Sonegando por uma guilda de ímpios.";
				mes "Virando pobre outra vez.";
				mes "Ele decidiu ir até o Formigueiro Infernal";
				mes "Bem ali e então à direita.";
				next;
				mes "^228B22Morcegos, Anões, ovos, Formigas!";
				mes "Ele lutou contra todos.";
				mes "Pele de verme, Jellopy!";
				mes "Ele reuniu grandes e pequenos despojos.^000000";
				next;
				mes "^228B22Em seguida, veio o glorioso dia.";
				mes "Quando ele encontrou um cartão valioso.";
				mes "Que iria trazer grande riqueza para seu nome.^000000";
				next;
				mes "^228B22Mas ele o manteve caro, para lembrar dos tempos que trabalhava tão duro.";
				mes "Ele nunca vendeu, nunca vendeu o precioso cartão.^000000";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Essa é uma velha história sobre o rico Sr. Kim.";
				mes "E sua ascensão a partir de trapos até riquezas.";
				mes "Até a riqueza novamente.";
				mes "É verdade ou é ficção?";
				mes "Ah, por favor, não me pergunte!";
				mes "Eu não sei!";
				close;
				mes "[Gunther Doubleharmony]";
				mes "*Caham*";
				mes "Gunther canta";
				mes "de Yggdrasil.";
				next;
				mes "^228B22Sempre verde Yggdrasil...";
				mes "Árvore gigante pálida";
				mes "Chegando no céu.";
				mes "Cristal, orvalho matinal";
				mes "de suas folhas.";
				mes "Formando o largo de Urd.^000000";
				next;
				mes "^228B22Três garotas sábias";
				mes "Sentadas sobre seus ramos.";
				mes "Urd do passado,";
				mes "Belldandy do presente,";
				mes "Skuld do futuro.^000000";
				next;
				mes "^228B22Fiação, tecelagem...";
				mes "Linhas do destino";
				mes "Sempre verde Yggdrasil...";
				mes "Árvore gigante pálida";
				mes "Chegando no céu.";
				mes "Suas raízes molhado com lágrimas.^000000";
				next;
				mes "^228B22Morte em Hvergelmir.";
				mes "Um malvado dragão";
				mes "Queimando suas raízes";
				mes "Com a chama eterna.";
				mes "O malvado dragão Nidhogg";
				mes "Vivendo entre Yggdrasil ";
				mes "e Niflheim.^000000";
				next;
				mes "^228B22Sempre verde Yggdrasil...";
				mes "Árvore gigante pálida";
				mes "Chegando no céu.";
				mes "Sabedoria em suas raízes";
				mes "Raízes atingindo";
				mes "o lago de Mimir.^000000";
				next;
				mes "^228B22Guardada por um sábio gigante.";
				mes "Odin sacrificou um";
				mes "dos seus olhos para a sabedoria.";
				mes "Chifre de Heimdall está oculto";
				mes "Na raiz da Yggdrasil";
				mes "Irá soar uma última vez";
				mes "Sinalizando Ragnarok.^000000";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Essa é uma história muito velha...";
				mes "É verdade ou é ficção? Ah, por favor, não me pergunte! Eu não sei!";
				close;
				case 2:
				mes "[Gunther Doubleharmony]";
				mes "*Caham*";
				mes "Gunther canta de Yggdrasil.";
				next;
				mes "^228B22Sempre verde Yggdrasil...";
				mes "Árvore gigante pálida chegando no céu.";
				mes "Cristal, orvalho matinal de suas folhas.";
				mes "Formando o largo de Urd.^000000";
				next;
				mes "^228B22Três garotas sábias sentadas sobre seus ramos.";
				mes "Urd do passado, Belldandy do presente, Skuld do futuro.^000000";
				next;
				mes "^228B22Fiação, tecelagem...";
				mes "Linhas do destino, sempre verde Yggdrasil...";
				mes "Árvore gigante pálida chegando no céu.";
				mes "Suas raízes molhado com lágrimas.^000000";
				next;
				mes "^228B22Morte em Hvergelmir.";
				mes "Um malvado dragão.";
				mes "Queimando suas raízes";
				mes "Com a chama eterna.";
				mes "O malvado dragão Nidhogg.";
				mes "Vivendo entre Yggdrasil e Niflheim.^000000";
				next;
				mes "^228B22Sempre verde Yggdrasil...";
				mes "Árvore gigante pálida chegando no céu.";
				mes "Sabedoria em suas raízes raízes atingindo o lago de Mimir.^000000";
				next;
				mes "^228B22Guardada por um sábio gigante.";
				mes "Odin sacrificou um dos seus olhos para a sabedoria.";
				mes "Chifre de Heimdall está oculto na raiz da Yggdrasil.";
				mes "Irá soar uma última vez sinalizando Ragnarok.^000000";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Essa é uma história muito velha...";
				mes "É verdade ou é ficção?";
				mes "Ah, por favor, não me pergunte!";
				mes "Eu não sei!";
				close;
				default:
				mes "[Gunther Doubleharmony]";
				mes "Vou cantar uma das canções de Luke, você sabe, Luke.";
				mes "Um dos maiores bardos do seu tempo?";
				mes "Mas eu mudei um pouco as palavras.";
				next;
				mes "^228B22Encontrei em uma gaveta, velhas, desgastadas letras";
				mes "Formando elaboradas palavras.";
				mes "Sincera reflexão de uma sincera opinião.^000000";
				next;
				mes "^228B22Encontrei em uma gaveta.";
				mes "Sou eu realmente como aquele que fui?";
				mes "Sou eu realmente um crianção?";
				mes "Minhas memórias estão manchadas.";
				next;
				mes "^228B22Encontrei em uma gaveta.";
				mes "Havia esquecido do amor.";
				mes "Ela nunca recebeu essa carta.";
				mes "Mas nós dois eramos tímidos.";
				next;
				mes "^228B22Encontrei em uma gaveta.";
				mes "Havia esquecido do amor.";
				mes "Eu nunca lhe dei essa carta.";
				mes "Mas nós dois estávamos orgulhosos de si mesmos.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Você tem alguém em mente?";
				mes "Conhece?";
				mes "Se você escrever uma carta de amor, você deve enviá-la e manifestar-se.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Caso você tenha escrito cartas de amor que você nunca enviou, jogue-as fora.";
				mes "Mande seu maldito orgulho pra longe.";
				close;
			}
			case 2:
			switch (rand(3)) {
				case 1:
				mes "[Gunther Doubleharmony]";
				mes "Hm, você já provou o queijo de Comodo?";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Você só pode experimentá-lo em Comodo.";
				mes "Mas é necessário que você tenha um estômago forte para digeri-lo.";
				mes "Oh! E o queijo tem um segredo!";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Você ^228B22pode^000000 se tornar invulnerável ao poder das espadas condenadas.";
				mes "Que vêm do outro mundo, se você come esse queijo!";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Por que você não vai experimentá-lo";
				mes " Eu tentei experimentá-lo uma vez.";
				mes "Era gostoso, mas ai eu desmaiei.";
				mes "Hahahaha!";
				close;
				case 2:
				mes "[Gunther Doubleharmony]";
				mes "Eu estava passando por Prontera no outro dia.";
				mes "No lugar onde costumava ser o terreno de formação de Espadachins.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Eu vi um garoto em um treino realmente muito difícil.";
				mes "E ele não percebeu quando estava o vendo, então eu acho que era realmente muito grave!";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Ele olhou como quem queria ser um Espadachim profissional.";
				mes "Mas ele estava dando também distância aos principiantes.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Fiquei entediado assistindo-lhe fazer a mesma coisa uma e outra e outra vez.";
				mes "Mas acho que a Organização de Estudo do Monstro gostaria que ele se apresentasse.";
				close;
				default:
				mes "[Gunther Doubleharmony]";
				mes "Alguma vez já estiveste em Lutie, terra onde cai neve o ano inteiro?";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Existe um boneco de neve chamado SnowySnow e se você conhecê-lo.";
				mes "Você sabe todos os tipos de coisas sobre ele como se ele conseguisse falar!";
				mes "É tão estranho e misterioso !";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Ele tem uma misteriosa sacola onde saem infinitas prendas.";
				mes "Ele tem um passado misterioso que envolve algumas cidades mais frias.";
				mes "E alguma coisa sobre uma bruxa desagradável.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Mas ele está bem, porque ele foi resgatado por algum alquimista e voltou à vida.";
				mes "Mas você deve ir para Lutie se você quiser saber mais sobre ele.";
				close;
			}
			case 3:
			mes "[Gunther Doubleharmony]";
			mes "Você vai agora e nem sequer me escutou um pouquinho?";
			mes "Ok, mas prometa voltar, para você apenas vai ouvir uma das minhas canções.";
			close;
		}
	}
}

// ------------------------------------------------------------------
morocc,134,111,3	script	Bardo#3gef_bard_q	2_M_BARD_ORIENT,{
	if (gef_bard_q == 4) {
		mes "[Bardo Misterioso]";
		mes "Ah, você é muito admirável.";
		mes "Você realmente respeita os bardos, não é?";
		next;
		mes "[Bardo Misterioso]";
		mes "Agora que pensei nisso, se você olhar para alguma coisa.";
		mes "Ou se há uma razão para você querer falar comigo?";
		next;
		if (select("Estou procurando Kino Gato","Não há nada mesmo.") == 1) {
			mes "[Kino Gato]";
			mes "Como você sabe meu nome?";
			mes "Ah, estou lisonjeado que a minha reputação me precede.";
			next;
			mes "^3355FFVocê dá um doce para a menina que está chorando.";
			mes "E relata o seu conto no que se refere à letra para a canção.";
			mes "'Em um, eu fico apaixonado'^000000.";
			next;
			mes "[Kino Gato]";
			mes "Hmm...";
			mes "Estou ofendido porque Errende não gostou das palavras que escrevi para 'Eu fico apaixonado'.";
			mes "Mas, eu suponho que ele é um romântico de coração.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Então...";
			mes "Você conhece a letra original dessa canção?";
			next;
			mes "[Kino Gato]";
			mes "As letras originais eram horríveis.";
			mes "Não há espaço suficiente na minha mente para lembre-se tão romântico disparate.";
			mes "^333333*Lágrimas*...^000000";
			next;
			mes "[Kino Gato]";
			mes "Romance é para tolos sonhadores!";
			mes "Recuso-me a cantar, quanto mais lembrar dessa letra sem graça!";
			next;
			mes "[Jorti]";
			mes "T-tio Kino";
			mes "Você está me assustando.";
			mes "Por favor, não grite!";
			mes "Faz-me ter vontade de chorar...";
			next;
			mes "[Kino Gato]";
			mes "Ah...";
			mes "Desculpe, princesa.";
			mes "Isso não acontecerá novamente.";
			mes "Seu tio Kino vai tentar ser bom a partir de agora.";
			next;
			mes "[Kino Gato]";
			mes "*Sigh...*";
			mes "Tudo bem, escute.";
			next;
			mes "[Kino Gato]";
			mes "Você precisará de um livro antigo das letras de Letras de Odes.";
			mes "Para achar as letrar originais dessa canção.";
			mes "Todos os livros novos não contêm a versão original.";
			next;
			mes "[Kino Gato]";
			mes "Me pergunto...";
			mes "Como Errende conhece as letras originais?";
			mes "Em todo caso, sinto muito por tudo isso.";
			mes "Devo estar um pouco cansado.";
			next;
			mes "[Kino Gato]";
			mes "Sabe, talvez você deva ir para Juno.";
			mes "Há uma pequena livraria na Rua do Livro.";
			mes "Você provavelmente poderá encontrar a canção nessa loja.";
			next;
			mes "[Kino Gato]";
			mes "^333333^333333*Cof Cof*^000000^000000";
			mes "Po-porque tenho que sofrer?";
			mes "Será os meus últimos dias como bardo nessa terra se aproximando?";
			mes "Sinto-me tão patético...";
			gef_bard_q = 7;
			close;
		} else {
			mes "[Bardo Misterioso]";
			mes "Realmente, e agora?";
			mes "É estranho.";
			mes "Vocês, aventureiros, são do tipo que gosta de aventura sempre, não?";
			mes "Quer dizer, essa é a própria definição da palavra.";
			close;
		}
	} else if (gef_bard_q == 7) {
		mes "[Kino Gato]";
		mes "Você já não saiu?";
		mes "Tenho certeza que você pode encontrar as letras em uma livraria em Juno.";
		next;
		mes "[Kino Gato]";
		mes "Bem, tenho certeza de que Errende sabe mais sobre livrarias.";
		mes "De forma que ele possa dizer-lhe para onde olhar em Juno.";
		next;
		mes "[Kino Gato]";
		mes "Se você não se importar, entre novamente e escute as músicas deste pobre bardo.";
		mes "Vou preparar uma canção especialmente para você.";
		next;
		mes "[Kino Gato]";
		mes "Não se preocupe com a minha saúde.";
		mes "Eu sou um bardo de coração, e não posso deixar de cantar para meu público-alvo.";
		next;
		mes "[Kino Gato]";
		mes "Além disso, eu gostaria de agradecer por ajudar Errende.";
		mes "Ele pode ser um pouco desafinado, mas ele é uma boa pessoa.";
		close;
	} else if (gef_bard_q == 8 || gef_bard_q == 9) {
		mes "[Kino Gato]";
		mes "Um selo prata?";
		next;
		mes "[Kino Gato]";
		mes "Se você tem esse selo, o Sr. Sketzi irá permitir que você leia seus livros.";
		mes "Eles estão cheios de canções escandinavas.";
		close;
	} else if (gef_bard_q == 10) {
		mes "[Kino Gato]";
		mes "Acho que você conhece o Sr. Sketzi.";
		mes "Dessa forma, porque você tem que olhar na cara?";
		mes "Não encontrou o que queria?";
		mes "Haha, ia me mostrar a mão esquerda?";
		next;
		mes "[Kino Gato]";
		mes "Bem, enquanto você estava desaparecido,";
		mes "Eu lembrava a letra original da canção.";
		mes "Acho que elas são realmente importantes.";
		next;
		mes "[Kino Gato]";
		mes "Aqui, deixe-me dar-lhe uma carta com as letras para Errende.";
		mes "Eu devia dar-lhe também o meu selo de modo que Errende saiba que ele está comigo.";
		next;
		mes "[Kino Gato]";
		mes "Vamos ver...";
		mes "Como que começa?";
		mes "...Lu lu lu...";
		mes "...La la la...";
		next;
		mes "^D43D1AEm um, eu fico apaixonado.";
		mes "Em dois, você me mostra um sorriso.";
		mes "Em três, eu adoro seu toque.";
		mes "Em quatro, um beijo macio.";
		mes "Em cinco, vamos mudar nossas mentes.";
		mes "Uma pétala cai pelo ar.^000000";
		next;
		mes "^D43D1AEm seis, eu fico apaixonado.";
		mes "Em sete, você se apaixona.";
		mes "Em oito, estamos ambos no amor.";
		mes "Em nove, você conhece meu coração.";
		mes "Em dez, eu sei que você está esperando por mim.^000000";
		next;
		mes "^D43D1AEm onze, um sussurro precioso:";
		mes "'Você quer casar comigo?'";
		mes "Em doze, os nossos dois corações são um.";
		mes "12 pétalas, o nosso amor finalmente floresce.^000000";
		next;
		specialeffect(EF_POISONREACT2, AREA, playerattached());
		mes "^3355FFApós a canção, Kino sorri para você.";
		mes "Você sente uma dor aguda em seu pulso.";
		mes "No local onde a prata foi crescente, você verá uma pequena cruz preta.^000000";
		next;
		mes "[Kino Gato]";
		mes "Então, como você gosta?";
		mes "Bem, estou certo de que Errende vai amar, com certeza.";
		next;
		mes "[Kino Gato]";
		mes "Quero pedir desculpas.";
		mes "Eu não queria fazer você esperar.";
		mes "Mas eu só lembrava a letra para a canção antiga.";
		mes "Agora, vai até Errende, ele deve estar a te esperar.";
		next;
		mes "^3355FFKino Gato lhe dá em mãos uma carta com o escrito 'Caro Errende' na frente.^000000";
		gef_bard_q = 11;
		close;
	} else if (gef_bard_q == 11) {
		mes "[Kino Gato]";
		mes "Errende deve estar esperando por você.";
		mes "Embora outros estivessem angustiados se ficassem esperando.";
		mes "O povo como Errende é mais delicado com pressa quanto pode.";
		close;
	} else {
		mes "[Kino Gato]";
		mes "Tudo vai ficou bem no final, certo?";
		mes "Eu vou ficar bem, Jorti vai ficar bem, e ela vai ser...";
		mes "*Oh*";
		next;
		mes "[Kino Gato]";
		mes "Peço desculpas, estava apenas balbuciando comigo mesmo.";
		mes "Tem alguma coisa que você queira de mim?";
		next;
		if (select("Cante uma canção","Não, obrigado") == 1) {
			mes "[Kino Gato]";
			mes "Ah... Bem, eu tenho uma doença crônica, portanto não posso falar alto.";
			mes "Mas, além disso, estou perfeitamente saudável.";
			next;
			mes "^3355FFUm olhar de amargura momentaneamente aparece na face de Kino Gato.";
			mes "Ele então ajusta as cordas de seu violão e começa a tocar.";
			mes "Cantarolando uma melodia baixa.^000000";
			soundeffect("humming.wav",0);
			close;
		} else {
			mes "[Kino Gato]";
			mes "Hmm...?";
			mes "Queria que todas as pessoas do mundo fossem gentis e honestas.";
			mes "Se fosse esse o caso, aí não haveria brigas egoístas.";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_in01,172,100,3	script	Velho#gef_bard_q	4_M_05,{
	if (gef_bard_q == 8) {
		mes "[Sketzi Bundin]";
		mes "Você deve estar procurando algo especial.";
		mes "Bem, temos quase todos os poemas escandinavos ou 'Odes'.";
		mes "Este é o único lugar onde você pode encontrar estes tipos de canções antigas.";
		next;
		mes "[Sketzi Bundin]";
		mes "No entanto, não posso mostrá-los para ninguém esses frágeis livros.";
		mes "Por razões de preservação, só posso mostrar esses trabalhos para clientes preferenciais.";
		next;
		if (select("Mostrar a mão esquerda","Mostrar a mão direita") == 1) {
			mes "[Sketzi Bundin]";
			mes "Ah! Você deve ser o amigo de um bardo de alto escalão!";
			mes "Eu vejo, eu vejo.";
			mes "Você deve ser amig"+(Sex == SEX_MALE ? "o":"a")+" de Errende Menta.";
			next;
			mes "[Sketzi Bundin]";
			mes "Então, o que é que você está procurando?";
			mes "Bem, eu suponho que realmente não precisaria perguntar isso.";
			next;
			mes "[Sketzi Bundin]";
			mes "Por favor...";
			mes "Use os livros o tempo que desejar.";
			mes "Espero que encontre o que você está procurando.";
			gef_bard_q = 9;
			close;
		} else {
			mes "[Sketzi Bundin]";
			mes "Deixe-me ver...";
			mes "Bem, seu batimento cardíaco é um pouco mais rápido que o normal.";
			mes "Você deve ver isso, quem sabe, para o bem da sua saúde?";
			next;
			mes "[Sketzi Bundin]";
			mes "Você não está procurando por qualquer livro médico ou relacionado à saúde, naõ é?";
			mes "Desculpe, mas nós não temos nenhum destes.";
			close;
		}
	} else if (gef_bard_q > 8) {
		mes "[Sketzi Bundin]";
		mes "Bem, já encontrou o que estava procurando?";
		mes "Embora todos os livros que temos sejam antigos, empoeirados, espero que encontre.";
		mes "E, por favor, dê meus cumprimentos aos seus amigos bardos.";
		close;
	} else {
		mes "[Sketzi Bundin]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Você deve estar procurando algo de especial e raro.";
		mes "Mas você só transportar uma espécie de livro por aqui.";
		next;
		mes "[Sketzi Bundin]";
		mes "Se você estiver procurando informações sobre monstros.";
		mes "Porque você não verifica na Biblioteca de Prontera ou o Museu do Monstro, aqui em Juno?";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in01,163,101,0	script	Livro Velho#gef_bard_q	HIDDEN_NPC,{
	if (gef_bard_q > 8) {
		mes "^3355FFVocê abriu o livro.";
		mes "Há uma fragilidade para passar as páginas.";
		mes "Bem como as letras estão desbotadas e pouco legíveis.";
		mes "Você não consegue sequer identificar o nome do autor.^000000";
		next;
		mes "[Coleção de Odes]";
		mes "Esta é uma canção de amor.";
		mes "Todo mundo sofre de amor não correspondido, pelo menos uma vez na vida.";
		next;
		mes "[Coleção de Odes]";
		mes "Em um, eu fico apaixonado.";
		mes "Em dois, você me mostra um sorriso.";
		mes "Em três, eu adoro seu toque.";
		mes "Em quatro, um beijo macio.";
		next;
		mes "[Coleção de Odes]";
		mes "Em cinco, vamos mudar nossas mentes.";
		mes "Uma pétala cai pelo ar.";
		mes "Em seis, eu fico apaixonado.";
		mes "Em sete, você se apaixona.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Acho que é isso!";
		mes "É melhor eu anotá-la.";
		next;
		mes "[Coleção de Odes]";
		mes "Em oito, estamos ambos no amor.";
		mes "Em nove, você conhece meu coração.";
		mes "Em dez, eu sei que você está esperando por mim.";
		next;
		mes "[Coleção de Odes]";
		mes "Em onze, um sussurro precioso:";
		mes "'Você quer casar comigo?'";
		mes "Em doze, os nossos dois corações são um.";
		mes "12 pétalas, o nosso amor finalmente floresce.";
		next;
		mes "^3355FFVocê anota as linhas finais e mantêm em uma nota dentro do seu bolso.^000000";
		if (gef_bard_q == 9) { gef_bard_q = 10; }
		close;
	} else {
		mes "[Sketzi Bundin]";
		mes "Desculpe, mas esse livro é frágil demais para a manipulação.";
		mes "Apenas clientes especiais podem folhear esse livro.";
		close;
	}
}

// ------------------------------------------------------------------
morocc,132,111,3	script	Garota#gef_bard_q	4_F_KID2,{
	mes "[Bardo Misterioso]";
	mes "Mesmo depois de um vento arenoso,";
	mes "Mesmo na copiosa chuva,";
	mes "Mesmo na queda de neve,";
	mes "Sei que...";
	mes "........";
	next;
	mes "[Garota]";
	mes "Tio...?";
	mes "Você está bem?";
	next;
	mes "[Bardo Misterioso]";
	mes "Hmmm...";
	mes "Minhas desculpas, mas esta é uma performance privada.";
	mes "Essa canção é somente pra minha pequena princesa, Jorti.";
	close;
}
