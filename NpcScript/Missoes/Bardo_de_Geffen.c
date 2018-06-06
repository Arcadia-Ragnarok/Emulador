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
| - Nota: Necess�ria para a quest da habilidade de bardo            |
|         "Voz Dolorosa"                                            |
\*-----------------------------------------------------------------*/

geffen,132,38,3	script	Bardo#gef_bard_q	1_M_BARD,{
	if (!gef_bard_q) {
		cutin("bard_eland03",2);
		mes "[Bardo]";
		mes "^483D8BQue dia � melhor para beber?";
		mes "*La la la*";
		mes "� o dia da terra, do sol e da lua";
		mes "*La la la*^000000";
		next;
		mes "^483D8B*La la la*";
		mes "Venho beber apenas em um dia.";
		mes "Ent�o, se voc� vai me dizer quando voc� bebe.";
		mes "Eu digo-te quando vou beber com voc�.^000000";
		next;
		mes "^483D8BVamos ficar juntos Yeah yeah ye...^000000 Hmmmmm...?";
		next;
		mes "[Bardo]";
		mes "Ol�, ol�.";
		mes "Oh, voc� veio para ouvir a minha can��o e esquecer suas preocupa��es?";
		next;
		if (select("Ignora-o.","Quem � voc�?") == 2) {
			cutin("bard_eland04",2);
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Voc� parece ser novo por aqui...";
			mes "Quem � voc�?";
			next;
			cutin("bard_eland02",2);
			mes "[Errende]";
			mes "Hm? Ah sim.";
			mes "Sou apenas mais um poeta errante, que vai onde o vento leva.";
			mes "Por favor, me chame de ^483D8BErrende^000000, o Bardo que deseja agrad�-lo.";
			next;
			mes "[Errende]";
			mes "Se voc� me permitir, eu vou te contar sobre minhas viagens.";
		} else {
			mes "[Errende]";
			mes "Aaaah, Aah...";
			mes "Voc� n�o pode simplesmente ignorar-me assim!";
			mes "Onde est� o seu sentimento de alegria, o seu senso de romance?";
			close2;
			cutin("",255);
			end;
		}
	} else if (gef_bard_q == 1) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Bem-vind"+(Sex == SEX_MALE)+" de volta, "+strcharinfo(PC_NAME)+".";
		mes "O que voc� gostaria que fizesse por voc�?";
		mes "Gostaria de ouvir um conto ou escutar uma can��o?";
	} else if (gef_bard_q == 2) {
		cutin "bard_eland04",2;
		mes "[Errende]";
		mes "*Sigh...*";
		mes "Onde posso encontrar o 8� amor...?";
		mes "J� conheceu Gunther?";
		mes "Ah, talvez ainda n�o.";
		next;
		mes "[Errende]";
		mes "*Sigh*";
		mes "Perdi o cora��o pra cantar desde que eu esqueci a linha da can��o.";
		mes "Eu s� ...n�o posso.";
		mes "Meu esp�rito � insens�vel.";
		mes "N�o h� nenhuma inspira��o.";
		next;
		mes "[Errende]";
		mes "Por favor, pergunte a ^483D8BGunther^000000 sobre o ^483D8B8� amor^000000.";
		mes "^483D8BEu fico apaixonado^000000.";
		mes "Agrade�o antecipadamente.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 3) {
		cutin("bard_eland02",2);
		mes "[Errende]";
		mes "Ent�o...";
		mes "J� viu Gunther?";
		next;
		mes "^3355FFVoc� vira para mostrar-lhe as costas.^000000";
		next;
		cutin("bard_eland03",2);
		mes "[Errende]";
		mes "Huh...?!";
		mes "N�o � isso?!";
		mes "Que linha da can��o � essa escrita em suas costas?";
		mes "Espere, n�o se mova!";
		mes "O 8� amor �...";
		mes "Agora eu vejo!";
		next;
		mes "[Errende]";
		mes "Em um, eu fico apaixonado.";
		mes "Em dois, voc� me mostra um sorriso.";
		mes "Em tr�s, eu adoro seu toque.";
		mes "Em quatro, um beijo macio.";
		next;
		mes "[Errende]";
		mes "Em cinco, vamos mudar nossas mentes.";
		mes "Uma p�tala cai pelo ar.";
		mes "Em seis, eu fico apaixonado.";
		mes "Em sete, voc� se apaixona.";
		next;
		mes "[Errende]";
		mes "Em oito nos afastamos...";
		mes "Em nove, o amor renasce.";
		mes "Em dez, meu amor se foi.";
		mes "Em onze eu descubro porqu�.";
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
		mes "Isso n�o pode ser.";
		mes "Essa m�sica supostamente � sobre amor, n�o uma farsa rom�ntica!";
		next;
		mes "[Errende]";
		mes "As letras.";
		mes "Elas devem ter sido mudadas.";
		mes "Gunther disse alguma coisa sobre isto?!";
		mes "Hmmm, mas quem � que iria alterar as letras...?";
		next;
		input(.@input$);
		if (.@input$ == "Kino Gato") {
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "Ah, � claro!";
			mes "Com certeza voc� est� certo!";
			mes "Como eu n�o pensei nisso antes?";
			next;
			mes "[Errende]";
			mes "Tudo faz sentido agora.";
			mes "Afinal, ele costumava ser um membro do �nico Ex�rcito Invenc�vel.";
			mes "Suas mudan�as podem ter significado pouco.";
			mes "Uma vez que esta can��o � usada sobre um casal feliz...";
			next;
			mes "[Errende]";
			mes "Hmmm...";
			mes "Estou arrependido de pedir um favor de voc� novamente.";
			mes "Mas em suas viagens, voc� acha que poderia encontrar a letra original para esta can��o?";
			mes "Posso esperar por ela...";
			next;
			if (select("N�o, desculpe","Posso sim") == 1) {
				mes "[Errende]";
				mes "Ah, eu acho que era demais para pedir-lhe.";
				mes "Minhas desculpas.";
				mes "N�o se preocupe, eu vou descobrir alguma outra maneira.";
				gef_bard_q = 5;
				close2;
				cutin("",255); 
				end;
			} else {
				mes "[Errende]";
				mes "Est� falando s�rio?";
				mes "Oh, muito obrigado!";
				mes "Voc� deve ser um anjo!";
				mes "Um anjo que realmente entende o cora��o de um poeta!";
				next;
				mes "[Errende]";
				mes "Pagarei sua volta de alguma forma!";
				mes "Obrigado pela sua preocupa��o.";
				gef_bard_q = 4;
				close2;
				cutin("",255); 
				end;
			}
		} else if (.@input$ == "Gunther") {
			mes "[Errende]";
			mes "Gunther?";
			mes "Eu n�o acho que ele faria isso.";
			mes "Ele coloca sempre linhas em suas m�sicas como 'doubleharmony for you.'";
			mes "Ele � muito bobo pra isso.";
			gef_bard_q = 6;
			close2;
			cutin("",255);
			end;
		} else if (.@input$ == "Gunther Doubleharmony") {
			mes "[Errende]";
			mes "Gunther?";
			mes "Eu n�o acho que ele faria isso.";
			mes "Ele coloca sempre linhas em suas m�sicas como 'doubleharmony for you.'";
			mes "Ele � muito bobo pra isso.";
			gef_bard_q = 6;
			close2;
			cutin("",255);
			end;
		} else if (.@input$ == "Errende") {
			cutin "bard_eland04",2;
			mes "[Errende]";
			mes "Certamente voc� est� brincando!";
			mes "Se eu fiz, � por que eu n�o sei sobre o que � esta can��o?";
			gef_bard_q = 6;
			close2;
			cutin("",255);
			end;
		} else {
			mes "[Errende]";
			mes ""+@input$+"...?";
			mes "Acho que n�o conhe�o essa pessoa.";
			mes "Talvez tenha sido um mal-entendido?";
			mes "*Sigh...*";
			next;
			mes "[Errende]";
			mes "Qual foi a linha...?";
			mes "Como poderia esquecer o 8� amor?";
			gef_bard_q = 6;
			close2;
			cutin("",255);
			end;
		}
	} else if (gef_bard_q == 4) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Hmm...";
		mes "N�o sei exatamente onde o Sr. Gato est�.";
		mes "Talvez voc� possa ser capaz de descobrir...";
		mes "Mas ouvir dizer que ele mora em Morroc atualmente.";
		next;
		mes "[Errende]";
		mes "Se voc� � experiente com explora��o, voc� conhece a Organiza��o de Estudo de Monstros.";
		mes "Recentemente, muitos estudiosos t�m sido feridos em resultado de pesquisa de monstros.";
		next;
		mes "[Errende]";
		mes "Por causa dos perigos da investiga��o.";
		mes "Aventureiros s�o necess�rios para recolher as informa��es para os pesquisadores.";
		next;
		mes "[Errende]";
		mes "Para n�mades, como eu, � uma �tima maneira de ganhar dinheiro.";
		mes "Damos-lhes as informa��es que precisam e eles nos d�o apoio financeiro para sobrevivermos.";
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
		mes "Estas l�grimas n�o v�o parar!";
		mes "Por-porqu� as pessoas costumam tratar os bardos assim?";
		next;
		mes "^483D8BQuem fez esse pobre bardo chorar?";
		mes "Quem quebrou os cora��es de vidro?";
		mes "Quebre seus sonhos...";
		mes "N�o tem sonhos, n�o tem cora��o, n�o tem amor, n�o tem esperan�a n�o tem...^000000";
		next;
		.@rand = rand(1,50);
		if (.@rand > 27 && .@rand < 37) {
			mes "^3355FFErrende continua a cantar sobre o seu desespero pessoal.";
			mes "Ele parece estar decepcionado com a sua recusa em ajud�-lo.";
			mes "Claro, voc� come�a a sentir pena dele.^000000";
			next;
			if (select("Est� bem, vou te ajudar...","Ignora-o assim mesmo") == 1) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Ei. Ei, Errende.";
				mes "Pare de cantar essa can��o.";
				mes "� embara�oso, ok?";
				mes "Tudo bem, eu vou encontrar a can��o original para voc�.";
				next;
				cutin("bard_eland01",2);
				mes "[Errende]";
				mes "*Gasp!*";
				mes "S�rio! Tem certeza? Obrigado!";
				mes "Muito obrigado!";
				mes "Voc� realmente se importa com a tristeza de um Bardo!";
				next;
				mes "[Errende]";
				mes "Eu prometo lhe pagar de volta o melhor que puder!";
				mes "Vou esperar por voc� aqui at� voltar!";
				gef_bard_q = 4;
			} else {
				mes "^3355FFVoc� ignora o cora��o dele flexionando a can��o.";
				mes "Mas a que custo para a sua alma?^000000";
			}
			close2;
			cutin("",255);
			end;
		} else {
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "Voc� n�o tem nada que queira me perguntar, n�o �?";
			mes "Se n�o, voc� gostaria de ouvir a minha m�sica?";
			next;
			mes "^483D8BMiser�vel...";
			mes "Ningu�m me ama.";
			mes "Amigos para nada...";
			mes "Ooooooooh n�o!^000000";
			close2;
			cutin("",255);
			end;
		}
	} else if (gef_bard_q == 6) {
		cutin("bard_eland04",2);
		mes "[Errende]";
		mes "Quem mudou as palavras desta can��o afinal?";
		mes "� realmente dif�cil de entender.";
		mes "Gostaria de poder falar com pessoa que mudou a express�o.";
		next;
		mes "[Errende]";
		mes "*Sigh*";
		mes "Eu estou t�o frustrado que n�o posso cantar..";
		mes "Eu s�... n�o posso.";
		mes "Meu esp�rito � insens�vel.";
		mes "N�o h� nenhuma inspira��o.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O senhor n�o acha...";
		mes "Que a pessoa...";
		mes "que mudou a can��o seria...";
		input(.@input$);
		next;
		if (.@input$ == "Kino Gato") {
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "Ah! � claro!";
			mes "Acho que voc� est� certo!";
			mes "Como eu n�o pensei nisso antes?";
			next;
			mes "[Errende]";
			mes "Tudo faz sentido agora.";
			mes "Afinal, ele costumava ser um membro do �nico Ex�rcito Invenc�vel.";
			mes "Suas mudan�as podem ter significado pouco.";
			mes "Uma vez que esta can��o � usada sobre um casal feliz...";
			next;
			mes "[Errende]";
			mes "Hmmm...";
			mes "Estou arrependido de pedir um favor de voc� novamente.";
			mes "Mas em suas viagens, voc� acha que poderia encontrar a letra original para esta can��o?";
			mes "Posso esperar por ela...";
			next;
			if (select("N�o, desculpe","Posso, sim") == 1) {
				mes "[Errende]";
				mes "Ah, eu acho que era demais para pedir-lhe.";
				mes "Minhas desculpas.";
				mes "N�o se preocupe, eu vou descobrir alguma outra maneira.";
				gef_bard_q = 5;
				close2;
				cutin("",255);
				end;
			} else {
				mes "[Errende]";
				mes "Est� falando s�rio?";
				mes "Oh, muito obrigado!";
				mes "Voc� deve ser um anjo!";
				mes "Um anjo que realmente entende o cora��o de um poeta!";
				next;
				mes "[Errende]";
				mes "Pagarei sua volta de alguma forma!";
				mes "Obrigado pela sua preocupa��o.";
				gef_bard_q = 4;
				close2;
				cutin("",255);
				end;
			}
		} else if (.@input$ == "Gunther") {
			mes "[Errende]";
			mes "Gunther?";
			mes "Eu n�o acho que ele faria isso.";
			mes "Ele coloca sempre linhas em suas m�sicas como 'doubleharmony for you.'";
			mes "Ele � muito bobo pra isso.";
			close2;
			cutin("",255);
			end;
		} else if (.@input$ == "Gunther Doubleharmony") {
			mes "[Errende]";
			mes "Gunther? Eu n�o acho que ele faria isso.";
			mes "Ele coloca sempre linhas em suas m�sicas como 'doubleharmony for you.'";
			mes "Ele � muito bobo pra isso.";
			close2;
			cutin("",255);
			end;
		} else if (.@input$ == "Errende") {
			cutin "bard_eland04",2;
			mes "[Errende]";
			mes "Certamente voc� est� brincando!";
			mes "Se eu fiz, � por que eu n�o sei sobre o que � esta can��o?";
			close2;
			cutin("",255);
			end;
		} else {
			mes "[Errende]";
			mes ""+@input$+"...?";
			mes "Acho que n�o conhe�o essa pessoa.";
			mes "Talvez tenha sido um mal-entendido?";
			mes "*Sigh...*";
			next;
			mes "[Errende]";
			mes "Qual foi a linha...?";
			mes "Como poderia esquecer o 8� amor?";
			close2;
			cutin("",255);
			end;
		}
	} else if (gef_bard_q == 7) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Ent�o, voc� conhece o Sr. Gato?";
		mes "Ah, em Morroc?";
		mes "Ele tem uma doen�a cr�nica, mas, obviamente, n�o parecem importar-se com ela.";
		mes "Ent�o, o que ele disse?";
		next;
		mes "[Errende]";
		mes "Hm? Em Juno?";
		mes "Vamos, deve ser isso.";
		mes "N�o ser� f�cil visitar a livraria do Sr. Sketzi.";
		mes "Deixe-me marcar voc� com";
		mes "^483D8BO Selo da Amizade.^000000.";
		next;
		cutin("bard_eland03",2);
		mes "[Errende]";
		mes "D�-me a tua m�o esquerda.";
		mes "Agora, deixe-me lan�ar um feiti�o...";
		mes "*Gagueja gagueja...*";
		next;
		specialeffect(EF_CONE, AREA, playerattached());
		mes "^3355FFEm seu punho esquerdo, uma marca em forma crescente com uma luz brilhante apareceu.";
		mes "� percept�vel s� quando se concentrar em encontr�-lo.";
		mes "Mas pode aparecer claramente sob o luar.^000000";
		next;
		mes "[Errende]";
		mes "V�. Agora, voc� pode ir at� o Sr. Sketzi.";
		mes "Lembre-se, voc� deve mostrar-lhe o Selo da Amizade.";
		mes "Boa sorte.";
		gef_bard_q = 8;
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 8) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Sr. Skezti tem uma pequena livraria na rua do livro no lado direito da Mineta em Juno.";
		mes "Se voc� mostrar-lhe o selo, ele vai te ajudar.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q > 8 && gef_bard_q < 10) {
		cutin("bard_eland02",2);
		mes "[Errende]";
		mes "Parece que voc� n�o encontrou ainda.";
		mes "Bem, fique � vontade, eu posso esperar o tempo que quiser.";
		mes "Realmente n�o me aborrece, pois paci�ncia parece ser uma parte da minha profiss�o.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 10 || gef_bard_q == 11) {
		if (gef_bard_q == 11) {
			cutin("bard_eland04",2);
			mes "[Errende]";
			mes "Hmmm?";
			mes "� isso o selo preto ...?";
			mes "Kino Gato removeu o que ele me deu sem deixar rastro.";
			mes "Por isso, faz de conta que ele gosta muito de ti.";
			mes "Caso contr�rio...";
			next;
			mes "^3355FFVoc� d� � Errende a carta que recebeu de Kino Gato.^000000";
			next;
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "Er, ele j� sabe tudo?";
			mes "Essa mancha de sangue...";
			mes "Acho que ele ainda tem problemas de sa�de.";
			mes "Ele devia parar de se torturar...";
			next;
		} else {
			cutin("bard_eland01",2);
			mes "[Errende]";
			mes "E ent�o, como foi?";
			mes "Pera ai, voc� j� achou?";
			mes "Sim, � isso! Perfeito!";
			mes "Isto � t�o fascinante!!";
			mes "Sim, certo.";
			mes "Certo.";
			next;
		}
		gef_bard_q = 12;
		mes "[Errende]";
		mes "Obrigado, eu realmente aprecio o que voc� fez por mim.";
		mes "Mas, o que seria uma forma mais adequada para expressar a minha gratid�o?";
		next;
		mes "[Errende]";
		mes "Ah! Tenho apenas 'a coisa'.";
		mes "Tudo bem,ajeite-se ai, e escute minha can��o.";
		next;
		cutin("bard_eland03",2);
		mes "^483D8BTodo Deus nunca cresce velho por causa da bela Deusa, Idun.";
		mes "Guardi� das ma��s da juventude Deusa da imortalidade.^000000";
		specialeffect(EF_STEAL,AREA,playerattached());
		next;
		mes "^483D8BTodo Deus nunca cresce velho.";
		mes "Idun, a esposa de Bragi, Idun, a filha de Odin na lei.";
		mes "As ma��s ela mant�m na sua cesta.^000000";
		next;
		mes "^483D8BSem Idun,";
		mes "Todo deus sucumbiria � idade.";
		mes "Mesmo Thor, o mais forte dos deuses, teria um crescimento d�bil.";
		mes "Megingjard ia escorregar de sua cintura, e Mj�lnir nunca iria voar novamente.^000000";
		next;
		mes "Loki foi negligente uma s� vez, e fez com que perdesse para os deuses.";
		mes "Ele foi obrigado a lev�-la de volta.^000000";
		specialeffect(EF_STEAL,AREA,playerattached());
		next;
		mes "^483D8BA minha deusa vive";
		mes "No campo de Asgard, ela me d� frutos do c�u.";
		mes "Voc� ser� amada por todos os deuses...";
		mes "Voc� ser� aben�oada por cada deus...^000000";
		next;
		specialeffect(EF_BEGINSPELL6);
		mes "^483D8BSe voc� compartilha a ma�� da juventude comigo.";
		mes "Mesmo sendo uma mordida com este pobre poeta.";
		mes "Voc� ser� amada por todos os deuses...";
		mes "Voc� ser� aben�oada";
		mes "Por cada deus...^000000";
		next;
		specialeffect(EF_RESURRECTION,AREA,playerattached());
		mes "^3355FFAo ouvir o seu canto, voc� se sente � vontade.";
		mes "E os seus pensamentos tornam-se mais claros.";
		mes "Voc� acredita que voc� veja a vis�o de um anjo.";
		mes "E voc� ganha alguns pontos de experi�ncia.^000000";
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
		mes "Ent�o, como voc� se sente agora?";
		mes "Espero que a minha can��o tenha lhe feito bem.";
		mes "Acho que ela pode n�o ser suficiente para lhe restituir.";
		mes "Mas por favor, compreenda que esta � a melhor maneira de expressar a minha gratid�o.";
		next;
		mes "[Errende]";
		mes "Al�m disso, tenho estado a pensar em ti agora como amig"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Com quem eu falo mais abertamente, sem qualquer preocupa��o.";
		mes "E eu acho que voc� tem um belo sorriso.";
		mes "Estou errado?";
		next;
		mes "[Errende]";
		mes "Espero que voc� permane�a honesta e respeitosa para com outras pessoas.";
		mes "E que voc� continue a ignorar a gan�ncia de fortuna ou poder.";
		close2;
		cutin("",255);
		end;
	} else if (gef_bard_q == 12) {
		cutin("bard_eland01",2);
		mes "[Errende]";
		mes "Ol� "+strcharinfo(PC_NAME)+" o que voc� gostaria que fizesse por voc�?";
		mes "Gostaria de ouvir um conto ou escutar uma can��o?";
	}
	next;
	switch (select("Conte-me a hist�ria","Toque uma m�sica?","Err, talvez mais tarde.")) {
		case 1:
		mes "[Errende]";
		mes "Voc� gosta de hist�rias, hein?";
		mes "Vou te contar o que eu sei...";
		mes "S� para voc�, � claro.";
		next;
		cutin("bard_eland01",2);
		mes "[Errende]";
		switch (rand(3)) {
			case 1:
			mes "Hmmm....";
			mes "Ent�o vamos falar sobre Geffen?";
			mes "Alguma vez j� foste para o bar ou o Estaleiro aqui?";
			next;
			mes "[Errende]";
			mes "Eu estaria mentindo se eu n�o dissesse que as irm�s que trabalham no Pub e no Estaleiro s�o...";
			mes "^FF6699Cativantes^000000.";
			next;
			mes "[Errende]";
			mes "A senhora � uma mulher linda, graciosa e traz com ela um ar de requinte.";
			mes "E a mais jovem � uma mo�a t�o alegre, t�o en�rgica e... n�bil.";
			next;
			mes "[Errende]";
			mes "Mas eu divago.";
			mes "�s vezes, por�m, s� �s vezes voc� mente, eles n�o s�o t�o sexy como de costume.";
			next;
			mes "[Errende]";
			mes "Parece que o esp�rito de seu pai, t�o importante para elas, �s possui de vez em quando.";
			next;
			cutin("bard_eland02",2);
			mes "[Errende]";
			mes "Acho que quando algu�m age at� mesmo um pouco covarde para essas meninas.";
			mes "O pai retoma o esp�rito.";
			next;
			mes "[Errende]";
			mes "Acho que o amor de um pai dura pra sempre, mesmo depois da vida.";
			mes "Mas, � claro, n�o tenho certeza.";
			next;
			mes "[Errende]";
			cutin("bard_eland01",2);
			mes "Vamos ver...";
			mes "Esteja atento a esta realidade que mostra sombra que paira por detr�s dos Comerciantes do Bar, em Geffen.";
			next;
			mes "[Errende]";
			mes "A julgar pelas suas roupas, ele deve ser de Morroc, que � muito mais quente.";
			mes "� por isso que ele tem um exaustor, mesmo que ele n�o tenha aquecedor.";
			mes "Para as condi��es atmosf�ricas mais frias por aqui.";
			next;
			mes "[Errende]";
			mes "Devo adverti-lo, n�o deixe que ele fale que voc� compra aquecedor.";
			mes "Porque ele ir� vend�-lo por um pre�o escandaloso.";
			mes "Ele definitivamente n�o � confi�vel.";
			next;
			mes "[Errende]";
			mes "Por �ltimo, gostaria de lembrar a cidade de Geffenia perdida.";
			mes "Escondida sob a Torre de Geffen.";
			mes "Eu ouvi dizer que algum tipo de condi��o � necess�ria para entrar Geffenia.";
			mes "Mas n�o tenho certeza.";
			next;
			mes "[Errende]";
			mes "Geffenia est� relacionado com as duas senhoras atraentes que mencionei h� pouco.";
			mes "Parece que seu pai, William, entrou na Torre de Geffen com um grupo.";
			mes "Para exterminar monstros, mas ele nunca retornou.";
			next;
			mes "[Errende]";
			mes "� tr�gico que ele deixou sua fam�lia pra tr�s dessa forma.";
			mes "Mas, talvez, seja mais tr�gico que o seu esp�rito...";
			mes "Assuste qualquer pessoa interessada nessas meninas.";
			break;
			case 2:
			mes "Ok, deixe-me contar uma hist�ria sobre Morroc, cidade do deserto.";
			mes "Aventureiros para valer os seus sais s�o esperados para ter explorado a cidade e seu envolvente deserto.";
			next;
			mes "[Errende]";
			mes "A Esfinge e as pir�mides s�o zonas populares e especiais de explora��o por aventureiros.";
			mes "Voc� j� esteve l� antes?";
			mes "Eu ainda n�o, mas talvez algum dia eu v�.";
			next;
			mes "[Errende]";
			mes "Enquanto eu estava em Morroc, encontrei um mercador que vendia Ma�a-Espada.";
			mes "Para Sacerdotes e Sacerdotisas.";
			mes "Fora esses, Sacerdotes est�o proibidos de utilizar qualquer tipo de arma com l�minas.";
			next;
			mes "[Errende]";
			mes "Tamb�m vi um garotinho vigoroso que implorava ao pai para domar um Munak para ele.";
			mes "Eu ouvi o pai falar um pouco e parece que um dos seus amigos do Morroc est� perdido em Alberta.";
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
			mes "Por que n�o falamos de Alberta?";
			mes "H� um navio afundado para eventos.";
			mes "� um lugar onde os aventureiros podem ir em expedi��es.";
			mes "Parece que eles est�o fazendo um monte de dinheiro.";
			next;
			mes "[Errende]";
			mes "Quando o primeiro navio foi afundado perto de Alberta.";
			mes "Ele foi imediatamente encontrado por um dos Cavaleiros de Seguran�a de Alberta.";
			next;
			mes "[Errende]";
			mes "Aquele Cavaleiro de Seguran�a se aventurou dentro e encontrou um beb� dentro de um dos quartos.";
			mes "Avan�ou at� o beb�...";
			mes "Que tinha consigo uma caixa de m�sica.";
			next;
			mes "[Errende]";
			mes "Este beb� foi o primeiro e �nico sobrevivente do navio afundado.";
			mes "Ele foi trazido para Alberta.";
			mes "Embora ele tenha sido tratado com desprezo quando ele era uma crian�a.";
			mes "Ele est� bem agora.";
			next;
			mes "[Errende]";
			mes "Tal como o navio afundado, estou inseguro se era ou n�o um navio pirata.";
			mes "Diz-se que esqueletos vestindo trajes piratas vagam seus restos mortais.";
			next;
			mes "[Errende]";
			mes "Um dos outros mist�rios de Alberta � a Ilha Tartaruga.";
			mes "Parece que um marinheiro encontradou uma rota segura para aquele lugar.";
			mes "E est� dando passagem para aventureiros.";
			next;
			mes "[Errende]";
			mes "Ainda assim, a Ilha Tartaruga n�o � absolutamente segura.";
			mes "Dois esquadr�es de Cavaleiros de Seguran�a de Alberta Seguran�a j� passaram por l�.";
			mes "Mas n�o retornaram.";
			mes "Certamente, este � um motivo de preocupa��o.";
			next;
			mes "[Errende]";
			mes "E, mesmo assim, n�o parava de visitar aquele lugar.";
			mes "Por puro acaso, encontrei o di�rio de um aventureiro que j� tinha estado l�.";
			mes "Parece que ele � um famoso s�bio agora.";
			next;
			cutin("bard_eland02",2);
			mes "[Errende]";
			mes "Nas revistas existem detalhes sobre um derradeiro espadachim.";
			mes "E da explora��o da Ilha Tartaruga.";
			mes "Tenho certeza de que ningu�m � procura do tesouro naquele lugar vai achar a aventura emocionante.";
			break;
		}
		case 2:
		next;
		mes "[Errende]";
		mes "At� que enfim, conheci algu�m que reconhece o meu talento!";
		mes "Voc� merece a ouvir minhas m�sicas!";
		mes "Agora, o que voc� gostaria de ouvir?";
		next;
		if (select("Hunn.., Voc� quem escolhe","Toque uma can��o elegre!") == 1) {
			cutin("bard_eland03",2);
			mes "[Errende]";
			mes "Ent�o deixe-me ver....";
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
			mes "Uma can��o otimista?";
			mes "Bom, deixe-me ver.";
			mes "Uma can��o otimista, uma can��o otimista...";
			mes "Ok, aqui vamos n�s...";
			next;
			switch (rand(3)) {
				case 1:
				mes "^483D8BValhalla reluz em ouro.";
				mes "O Quinto, como sabemos � a velha Glast Heim!";
				mes "Guerreiros gloriosos pronunciam a convoca��o de Odin.^000000";
				next;
				mes "^483D8BPal�cio dos mortos com um telhado cor de prata o terceiro, como sabemos...";
				mes "Valaskjalf!";
				mes "Guerreiros gloriosos pronunciam a convoca��o de Odin.^000000";
				next;
				mes "^483D8BQuinhentos e quarenta portas.";
				mes "Nos grandes sal�es de Valhalla aventuram-se a abrir o cora��o de um her�i.";
				mes "Oitocentos guerreiros recolhem sob a vontade de Deus.";
				mes "E com um encargo de sair dessas portas.^000000";
				next;
				mes "^483D8BPiedosos guerreiros entram em Yggdrasil para sua sorte.";
				mes "Com orgulho e honra, eles aceitam as boas-vindas de Valkyrie.^000000";
				next;
				mes "^483D8BGuerreiros ca�dos em batalha Nos gloriosos confrontos do vermelho.";
				mes "A morte pode ter chegado.";
				mes "Mas sua fama e seu esp�rito conduziram Valhalla.^000000";
				if (!gef_bard_q) { gef_bard_q = 1; }
				break;
				case 2:
				mes "^483D8BOs sons do galope ecoam � dist�ncia.";
				mes "Uma nuvem nebulosa de poeira preenche o sol poente.";
				mes "Milhares de olhos abertos tochas no castelo chamas como milhares de Ifrits.";
				next;
				mes "^483D8BEscute meu cora��o latejante, o sangue flui nas minhas veias.";
				mes "Sentido o peso da minha armadura.";
				mes "O inimigo tem aparecido antes de n�s.^000000";
				next;
				mes "^483D8BToque forte os tambores, mais forte!";
				mes "Coragem, soldados, marchem pra frente!";
				mes "Gritem alto, soldados, mais alto!";
				mes "Hoje nunca vai voltar!^000000";
				next;
				mes "^483D8BAtordoar o c�u provocar a terra.";
				mes "Sinto novamente meu cora��o.";
				mes "Toquem as cornetas para balan�ar a fortaleza.";
				mes "Hoje nunca vai voltar!^000000";
				next;
				mes "[Errende]";
				mes "Ah, essa se chama 'Tambores no Campo de Batalha' que � de autoria do Sr. Iolo.";
				mes "Sim, sim, eu gosto dessa m�sica.";
				break;
				default:
				if (gef_bard_q == 1) {
					mes "[Errende]";
					if (Sex == SEX_MALE) {
						mes "Guerreiro her�ico.";
					} else {
						mes "Minha justa senhora.";
					}
					mes "Por favor, ou�a a minha can��o.";
					mes "Se voc� tem uma flor na m�o e est� apaixonado.";
					mes "Vamos contar as p�talas de flores enquanto prosseguimos com o projeto.";
					next;
					mes "^483D8BEm um, eu fico apaixonado.";
					mes "Em dois, voc� me mostra um sorriso.";
					mes "Em tr�s, eu adoro seu toque.";
					mes "Em quatro, um beijo macio.";
					mes "Em cinco, vamos mudar nossas mentes.";
					mes "Uma p�tala cai pelo ar.^000000";
					next;
					cutin("bard_eland04",2);
					mes "^483D8BEm seis, eu fico apaixonado.";
					mes "Em sete, voc� se apaixona.";
					mes "Em oito...^000000";
					next;
					mes "[Errende]";
					mes "Em oito...";
					mes "Em... oito...";
					mes "Qual seria a pr�xima...?";
					next;
					mes "[Errende]";
					mes "Qual � a pr�xima parte?";
					mes "Qual � o 8� amor?";
					mes "Que vergonha para um bardo esquecer as palavras de uma can��o!";
					next;
					mes "[Errende]";
					mes "Eu...";
					mes "n�o posso suportar a humilha��o!";
					mes "Ou o suspense do que acontece a seguir...!";
					next;
					mes "[Errende]";
					mes "Tu �s um aventureiro, n�o �s?";
					mes "Ent�o voc� ao menos viaja um pouco, certo?";
					mes "� embara�oso para mim pedir, mas eu tenho um pedido a fazer.";
					next;
					if (select("Claro, sem problema","Eu n�o vou te ajudar.") == 1) {
						cutin("bard_eland01",2);
						mes "[Errende]";
						mes "Muito obrigado!";
						mes "Vamos ver, quem sabe? ";
						mes "J� sei! Gunther!";
						next;
						mes "[Errende]";
						mes "Se por ventura encontrar ^483D8BGunther Doubleharmony^000000.";
						mes "Informe-o do meu dilema.";
						next;
						mes "[Errende]";
						mes "Diga a ele que ^483D8BErrende Menta^000000 esqueceu uma linha da can��o.";
						mes "^483D8BEm um, eu fico apaixonado^000000.";
						mes "A linha se chama ^483D8B8� amor^000000.";
						next;
						mes "[Errende]";
						mes "Eu te suplico, se voc� encontr�-lo, por favor, pergunte-lhe o 8� amor.";
						mes "E me diga imediatamente a letra.";
						if (gef_bard_q == 1) { gef_bard_q = 2; }
					} else {
						mes "[Errende]";
						mes "*Sigh...*";
						mes "N�o me lembro da 8� parte desta can��o....";
						mes "Se minha vida dependesse disso...";
						mes "E depende!";
						mes "*Wahhhh*";
					}
				} else {
					mes "^483D8BUm bom bardo canta para agradar seus ouvintes.";
					mes "Ent�o, n�o espere uma can��o triste isso aumenta a sua ang�stia.^000000";
					next;
					mes "^483D8BUma boa Odalisca dan�a para agradar seu p�blico-alvo.";
					mes "Vamos dan�ar juntos?";
					mes "Basta segurar a minha m�o.";
					mes "*La la la* *La la la*^000000";
					next;
					mes "["+strcharinfo(PC_NAME)+"]";
					mes "� prop�sito...";
					mes "Porque � que voc�s brigam �s vezes?";
					mes "Soa estranho quando voc� faz isso.";
					next;
					mes "[Errende]";
					mes "C-como voc� pode dizer tal coisa, "+strcharinfo(PC_NAME)+"?";
					mes "� dif�cil chegar a melodias originais!";
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
		mes "No entanto, ao ouvir uma boa hist�ria ou alegre can��o voc� pode realmente se sentir bem.";
		mes "Ent�o, vejo voc� mais tarde.";
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
		mes "Foi-me dito esta can��o por um dos meus amigos sobre este Mercador.";
		mes "Que vive em Payon e todo mundo adora essa m�sica.";
		mes "Especialmente porque eu estou cantando e voc� sabe disso...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a.";
		mes "Voc� �...";
		mes "Gunther Doubleharmony?";
		next;
		mes "[Gunther Doubleharmony]";
		mes "... o mercador era t�o pobre que n�o tinha sequer...?";
		mes "Ah sim, certo.";
		mes "Isso � comigo.";
		mes "O que est� acontecendo?";
		next;
		mes "^3355FFVoc� explica a ele que est� buscando a letra perdida da can��o.^000000";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Ahhhhhhh, eu vejo.";
		mes "Agora, qual foi";
		mes "o nome da can��o que voc� disse?";
		next;
		input(.@input$);
		if (.@input$ == "Eu fico apaixonado") {
			mes "[Gunther Doubleharmony]";
			mes "Ah... essa can��o?";
			mes "Pelo jeito que falas, quem te pediu pra achar informa��es sobre essa can��o?";
			next;
			input(.@input$);
			if (.@input$ == "Errende" || .@input$ == "Errende Menta") {
				mes "[Gunther Doubleharmony]";
				mes "Sim, � meu amigo!";
				mes "Errende Menta!";
				mes "N�s eramos muito pr�ximos...";
				mes "Ent�o eu vou escrever cada palavra dessa can��o para meu amigo Errende Menta.";
				next;
				mes "^3355FFGunther rascunha algo furiosamente em suas costas.^000000";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Agora v�!";
				mes "Voc� pode voltar para Errende Menta e mostrar-lhe as costas.";
				mes "Ele vai ver o que eu escrevi e, em seguida, se lembrar� da letra!";
				if (gef_bard_q == 2) { gef_bard_q = 3; }
				close;
			} else {
				mes "[Gunther Doubleharmony]";
				mes "N�o, n�o, n�o, eu n�o conhe�o ningu�m com esse nome.";
				mes "Ent�o � melhor voc� ir e verificar o nome da pessoa que solicita de novo, ok?";
				close;
			}
		} else {
			mes "[Gunther Doubleharmony]";
			mes "N�o, n�o, n�o, n�o, eu n�o conhe�o nenhuma can��o com esse t�tulo.";
			mes "Ela pode at� n�o existir.";
			mes "Ent�o voc� deve ir e verificar o nome da can��o de novo e me dizer, ok?";
			close;
		}
	} else if (gef_bard_q == 6) {
		mes "[Gunther Doubleharmony]";
		mes "Voc� retornou!";
		mes "Huh, a can��o que escrevi sobre suas costas?";
		mes "Calma, calma, deixe-me pensar..";
		mes "Ah, certo, eu tenho!";
		next;
		mes "[Gunther Doubleharmony]";
		mes "As palavras que escrevi sobre as suas costas eram da autoria do Sr. Gato, meu �dolo, meu her�i!";
		mes "Essa m�sica � a arte de Kino Gato.";
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
		mes "Foi-me dito esta can��o por um dos meus amigos sobre este Mercador.";
		mes "Que vive em Payon e todo mundo adora essa m�sica.";
		mes "Especialmente porque eu estou cantando e voc� sabe disso...";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Ah, certo!";
		mes "Voc� quer ouvir";
		mes "a minha m�sica ou uma hist�ria?";
		mes "Eu sei o que voc� quer!";
		mes "Certo?";
		next;
		mes "[Gunther Doubleharmony]";
		mes "Ent�o voc� quer ouvir uma can��o ou uma hist�ria?";
		next;
		switch (select("Uma can��o","Uma hist�ria","Talvez outra hora")) {
			case 1:
			switch (rand(3)) {
				case 1:
				mes "[Gunther Doubleharmony]";
				mes "Gunther canta!";
				mes "Gunther dan�a!";
				mes "O nome dessa can��o �:";
				mes "'O rico Sr. Kim'";
				next;
				mes "^228B22Mercador de Payon";
				mes "T�o poooooobre";
				mes "Sem dinheiro pra armadura.";
				mes "Sem dinheiro pra fazer nada.";
				next;
				mes "^228B22Vendeu sua camisa de Algod�o";
				mes "Sua costas ficaram � mostra...";
				mes "Sem pena alguma.^000000";
				next;
				mes "^228B22Primeiro ele s� vendeu Po��es Vermelhas.";
				mes "Na primeira, s� vendeu po��es vermelhas.";
				mes "Ent�o ele come�ou a vender Cenouras, *uau*";
				mes "Ele poderia comprar uma nova armadura e at� mesmo vest�-la.";
				mes "*UAU*^000000";
				next;
				mes "^228B22Mas um dia, ele estava sonegando.";
				mes "Sonegando por uma guilda de �mpios.";
				mes "Virando pobre outra vez.";
				mes "Ele decidiu ir at� o Formigueiro Infernal";
				mes "Bem ali e ent�o � direita.";
				next;
				mes "^228B22Morcegos, An�es, ovos, Formigas!";
				mes "Ele lutou contra todos.";
				mes "Pele de verme, Jellopy!";
				mes "Ele reuniu grandes e pequenos despojos.^000000";
				next;
				mes "^228B22Em seguida, veio o glorioso dia.";
				mes "Quando ele encontrou um cart�o valioso.";
				mes "Que iria trazer grande riqueza para seu nome.^000000";
				next;
				mes "^228B22Mas ele o manteve caro, para lembrar dos tempos que trabalhava t�o duro.";
				mes "Ele nunca vendeu, nunca vendeu o precioso cart�o.^000000";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Essa � uma velha hist�ria sobre o rico Sr. Kim.";
				mes "E sua ascens�o a partir de trapos at� riquezas.";
				mes "At� a riqueza novamente.";
				mes "� verdade ou � fic��o?";
				mes "Ah, por favor, n�o me pergunte!";
				mes "Eu n�o sei!";
				close;
				mes "[Gunther Doubleharmony]";
				mes "*Caham*";
				mes "Gunther canta";
				mes "de Yggdrasil.";
				next;
				mes "^228B22Sempre verde Yggdrasil...";
				mes "�rvore gigante p�lida";
				mes "Chegando no c�u.";
				mes "Cristal, orvalho matinal";
				mes "de suas folhas.";
				mes "Formando o largo de Urd.^000000";
				next;
				mes "^228B22Tr�s garotas s�bias";
				mes "Sentadas sobre seus ramos.";
				mes "Urd do passado,";
				mes "Belldandy do presente,";
				mes "Skuld do futuro.^000000";
				next;
				mes "^228B22Fia��o, tecelagem...";
				mes "Linhas do destino";
				mes "Sempre verde Yggdrasil...";
				mes "�rvore gigante p�lida";
				mes "Chegando no c�u.";
				mes "Suas ra�zes molhado com l�grimas.^000000";
				next;
				mes "^228B22Morte em Hvergelmir.";
				mes "Um malvado drag�o";
				mes "Queimando suas ra�zes";
				mes "Com a chama eterna.";
				mes "O malvado drag�o Nidhogg";
				mes "Vivendo entre Yggdrasil ";
				mes "e Niflheim.^000000";
				next;
				mes "^228B22Sempre verde Yggdrasil...";
				mes "�rvore gigante p�lida";
				mes "Chegando no c�u.";
				mes "Sabedoria em suas ra�zes";
				mes "Ra�zes atingindo";
				mes "o lago de Mimir.^000000";
				next;
				mes "^228B22Guardada por um s�bio gigante.";
				mes "Odin sacrificou um";
				mes "dos seus olhos para a sabedoria.";
				mes "Chifre de Heimdall est� oculto";
				mes "Na raiz da Yggdrasil";
				mes "Ir� soar uma �ltima vez";
				mes "Sinalizando Ragnarok.^000000";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Essa � uma hist�ria muito velha...";
				mes "� verdade ou � fic��o? Ah, por favor, n�o me pergunte! Eu n�o sei!";
				close;
				case 2:
				mes "[Gunther Doubleharmony]";
				mes "*Caham*";
				mes "Gunther canta de Yggdrasil.";
				next;
				mes "^228B22Sempre verde Yggdrasil...";
				mes "�rvore gigante p�lida chegando no c�u.";
				mes "Cristal, orvalho matinal de suas folhas.";
				mes "Formando o largo de Urd.^000000";
				next;
				mes "^228B22Tr�s garotas s�bias sentadas sobre seus ramos.";
				mes "Urd do passado, Belldandy do presente, Skuld do futuro.^000000";
				next;
				mes "^228B22Fia��o, tecelagem...";
				mes "Linhas do destino, sempre verde Yggdrasil...";
				mes "�rvore gigante p�lida chegando no c�u.";
				mes "Suas ra�zes molhado com l�grimas.^000000";
				next;
				mes "^228B22Morte em Hvergelmir.";
				mes "Um malvado drag�o.";
				mes "Queimando suas ra�zes";
				mes "Com a chama eterna.";
				mes "O malvado drag�o Nidhogg.";
				mes "Vivendo entre Yggdrasil e Niflheim.^000000";
				next;
				mes "^228B22Sempre verde Yggdrasil...";
				mes "�rvore gigante p�lida chegando no c�u.";
				mes "Sabedoria em suas ra�zes ra�zes atingindo o lago de Mimir.^000000";
				next;
				mes "^228B22Guardada por um s�bio gigante.";
				mes "Odin sacrificou um dos seus olhos para a sabedoria.";
				mes "Chifre de Heimdall est� oculto na raiz da Yggdrasil.";
				mes "Ir� soar uma �ltima vez sinalizando Ragnarok.^000000";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Essa � uma hist�ria muito velha...";
				mes "� verdade ou � fic��o?";
				mes "Ah, por favor, n�o me pergunte!";
				mes "Eu n�o sei!";
				close;
				default:
				mes "[Gunther Doubleharmony]";
				mes "Vou cantar uma das can��es de Luke, voc� sabe, Luke.";
				mes "Um dos maiores bardos do seu tempo?";
				mes "Mas eu mudei um pouco as palavras.";
				next;
				mes "^228B22Encontrei em uma gaveta, velhas, desgastadas letras";
				mes "Formando elaboradas palavras.";
				mes "Sincera reflex�o de uma sincera opini�o.^000000";
				next;
				mes "^228B22Encontrei em uma gaveta.";
				mes "Sou eu realmente como aquele que fui?";
				mes "Sou eu realmente um crian��o?";
				mes "Minhas mem�rias est�o manchadas.";
				next;
				mes "^228B22Encontrei em uma gaveta.";
				mes "Havia esquecido do amor.";
				mes "Ela nunca recebeu essa carta.";
				mes "Mas n�s dois eramos t�midos.";
				next;
				mes "^228B22Encontrei em uma gaveta.";
				mes "Havia esquecido do amor.";
				mes "Eu nunca lhe dei essa carta.";
				mes "Mas n�s dois est�vamos orgulhosos de si mesmos.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Voc� tem algu�m em mente?";
				mes "Conhece?";
				mes "Se voc� escrever uma carta de amor, voc� deve envi�-la e manifestar-se.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Caso voc� tenha escrito cartas de amor que voc� nunca enviou, jogue-as fora.";
				mes "Mande seu maldito orgulho pra longe.";
				close;
			}
			case 2:
			switch (rand(3)) {
				case 1:
				mes "[Gunther Doubleharmony]";
				mes "Hm, voc� j� provou o queijo de Comodo?";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Voc� s� pode experiment�-lo em Comodo.";
				mes "Mas � necess�rio que voc� tenha um est�mago forte para digeri-lo.";
				mes "Oh! E o queijo tem um segredo!";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Voc� ^228B22pode^000000 se tornar invulner�vel ao poder das espadas condenadas.";
				mes "Que v�m do outro mundo, se voc� come esse queijo!";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Por que voc� n�o vai experiment�-lo";
				mes " Eu tentei experiment�-lo uma vez.";
				mes "Era gostoso, mas ai eu desmaiei.";
				mes "Hahahaha!";
				close;
				case 2:
				mes "[Gunther Doubleharmony]";
				mes "Eu estava passando por Prontera no outro dia.";
				mes "No lugar onde costumava ser o terreno de forma��o de Espadachins.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Eu vi um garoto em um treino realmente muito dif�cil.";
				mes "E ele n�o percebeu quando estava o vendo, ent�o eu acho que era realmente muito grave!";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Ele olhou como quem queria ser um Espadachim profissional.";
				mes "Mas ele estava dando tamb�m dist�ncia aos principiantes.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Fiquei entediado assistindo-lhe fazer a mesma coisa uma e outra e outra vez.";
				mes "Mas acho que a Organiza��o de Estudo do Monstro gostaria que ele se apresentasse.";
				close;
				default:
				mes "[Gunther Doubleharmony]";
				mes "Alguma vez j� estiveste em Lutie, terra onde cai neve o ano inteiro?";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Existe um boneco de neve chamado SnowySnow e se voc� conhec�-lo.";
				mes "Voc� sabe todos os tipos de coisas sobre ele como se ele conseguisse falar!";
				mes "� t�o estranho e misterioso !";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Ele tem uma misteriosa sacola onde saem infinitas prendas.";
				mes "Ele tem um passado misterioso que envolve algumas cidades mais frias.";
				mes "E alguma coisa sobre uma bruxa desagrad�vel.";
				next;
				mes "[Gunther Doubleharmony]";
				mes "Mas ele est� bem, porque ele foi resgatado por algum alquimista e voltou � vida.";
				mes "Mas voc� deve ir para Lutie se voc� quiser saber mais sobre ele.";
				close;
			}
			case 3:
			mes "[Gunther Doubleharmony]";
			mes "Voc� vai agora e nem sequer me escutou um pouquinho?";
			mes "Ok, mas prometa voltar, para voc� apenas vai ouvir uma das minhas can��es.";
			close;
		}
	}
}

// ------------------------------------------------------------------
morocc,134,111,3	script	Bardo#3gef_bard_q	2_M_BARD_ORIENT,{
	if (gef_bard_q == 4) {
		mes "[Bardo Misterioso]";
		mes "Ah, voc� � muito admir�vel.";
		mes "Voc� realmente respeita os bardos, n�o �?";
		next;
		mes "[Bardo Misterioso]";
		mes "Agora que pensei nisso, se voc� olhar para alguma coisa.";
		mes "Ou se h� uma raz�o para voc� querer falar comigo?";
		next;
		if (select("Estou procurando Kino Gato","N�o h� nada mesmo.") == 1) {
			mes "[Kino Gato]";
			mes "Como voc� sabe meu nome?";
			mes "Ah, estou lisonjeado que a minha reputa��o me precede.";
			next;
			mes "^3355FFVoc� d� um doce para a menina que est� chorando.";
			mes "E relata o seu conto no que se refere � letra para a can��o.";
			mes "'Em um, eu fico apaixonado'^000000.";
			next;
			mes "[Kino Gato]";
			mes "Hmm...";
			mes "Estou ofendido porque Errende n�o gostou das palavras que escrevi para 'Eu fico apaixonado'.";
			mes "Mas, eu suponho que ele � um rom�ntico de cora��o.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Ent�o...";
			mes "Voc� conhece a letra original dessa can��o?";
			next;
			mes "[Kino Gato]";
			mes "As letras originais eram horr�veis.";
			mes "N�o h� espa�o suficiente na minha mente para lembre-se t�o rom�ntico disparate.";
			mes "^333333*L�grimas*...^000000";
			next;
			mes "[Kino Gato]";
			mes "Romance � para tolos sonhadores!";
			mes "Recuso-me a cantar, quanto mais lembrar dessa letra sem gra�a!";
			next;
			mes "[Jorti]";
			mes "T-tio Kino";
			mes "Voc� est� me assustando.";
			mes "Por favor, n�o grite!";
			mes "Faz-me ter vontade de chorar...";
			next;
			mes "[Kino Gato]";
			mes "Ah...";
			mes "Desculpe, princesa.";
			mes "Isso n�o acontecer� novamente.";
			mes "Seu tio Kino vai tentar ser bom a partir de agora.";
			next;
			mes "[Kino Gato]";
			mes "*Sigh...*";
			mes "Tudo bem, escute.";
			next;
			mes "[Kino Gato]";
			mes "Voc� precisar� de um livro antigo das letras de Letras de Odes.";
			mes "Para achar as letrar originais dessa can��o.";
			mes "Todos os livros novos n�o cont�m a vers�o original.";
			next;
			mes "[Kino Gato]";
			mes "Me pergunto...";
			mes "Como Errende conhece as letras originais?";
			mes "Em todo caso, sinto muito por tudo isso.";
			mes "Devo estar um pouco cansado.";
			next;
			mes "[Kino Gato]";
			mes "Sabe, talvez voc� deva ir para Juno.";
			mes "H� uma pequena livraria na Rua do Livro.";
			mes "Voc� provavelmente poder� encontrar a can��o nessa loja.";
			next;
			mes "[Kino Gato]";
			mes "^333333^333333*Cof Cof*^000000^000000";
			mes "Po-porque tenho que sofrer?";
			mes "Ser� os meus �ltimos dias como bardo nessa terra se aproximando?";
			mes "Sinto-me t�o pat�tico...";
			gef_bard_q = 7;
			close;
		} else {
			mes "[Bardo Misterioso]";
			mes "Realmente, e agora?";
			mes "� estranho.";
			mes "Voc�s, aventureiros, s�o do tipo que gosta de aventura sempre, n�o?";
			mes "Quer dizer, essa � a pr�pria defini��o da palavra.";
			close;
		}
	} else if (gef_bard_q == 7) {
		mes "[Kino Gato]";
		mes "Voc� j� n�o saiu?";
		mes "Tenho certeza que voc� pode encontrar as letras em uma livraria em Juno.";
		next;
		mes "[Kino Gato]";
		mes "Bem, tenho certeza de que Errende sabe mais sobre livrarias.";
		mes "De forma que ele possa dizer-lhe para onde olhar em Juno.";
		next;
		mes "[Kino Gato]";
		mes "Se voc� n�o se importar, entre novamente e escute as m�sicas deste pobre bardo.";
		mes "Vou preparar uma can��o especialmente para voc�.";
		next;
		mes "[Kino Gato]";
		mes "N�o se preocupe com a minha sa�de.";
		mes "Eu sou um bardo de cora��o, e n�o posso deixar de cantar para meu p�blico-alvo.";
		next;
		mes "[Kino Gato]";
		mes "Al�m disso, eu gostaria de agradecer por ajudar Errende.";
		mes "Ele pode ser um pouco desafinado, mas ele � uma boa pessoa.";
		close;
	} else if (gef_bard_q == 8 || gef_bard_q == 9) {
		mes "[Kino Gato]";
		mes "Um selo prata?";
		next;
		mes "[Kino Gato]";
		mes "Se voc� tem esse selo, o Sr. Sketzi ir� permitir que voc� leia seus livros.";
		mes "Eles est�o cheios de can��es escandinavas.";
		close;
	} else if (gef_bard_q == 10) {
		mes "[Kino Gato]";
		mes "Acho que voc� conhece o Sr. Sketzi.";
		mes "Dessa forma, porque voc� tem que olhar na cara?";
		mes "N�o encontrou o que queria?";
		mes "Haha, ia me mostrar a m�o esquerda?";
		next;
		mes "[Kino Gato]";
		mes "Bem, enquanto voc� estava desaparecido,";
		mes "Eu lembrava a letra original da can��o.";
		mes "Acho que elas s�o realmente importantes.";
		next;
		mes "[Kino Gato]";
		mes "Aqui, deixe-me dar-lhe uma carta com as letras para Errende.";
		mes "Eu devia dar-lhe tamb�m o meu selo de modo que Errende saiba que ele est� comigo.";
		next;
		mes "[Kino Gato]";
		mes "Vamos ver...";
		mes "Como que come�a?";
		mes "...Lu lu lu...";
		mes "...La la la...";
		next;
		mes "^D43D1AEm um, eu fico apaixonado.";
		mes "Em dois, voc� me mostra um sorriso.";
		mes "Em tr�s, eu adoro seu toque.";
		mes "Em quatro, um beijo macio.";
		mes "Em cinco, vamos mudar nossas mentes.";
		mes "Uma p�tala cai pelo ar.^000000";
		next;
		mes "^D43D1AEm seis, eu fico apaixonado.";
		mes "Em sete, voc� se apaixona.";
		mes "Em oito, estamos ambos no amor.";
		mes "Em nove, voc� conhece meu cora��o.";
		mes "Em dez, eu sei que voc� est� esperando por mim.^000000";
		next;
		mes "^D43D1AEm onze, um sussurro precioso:";
		mes "'Voc� quer casar comigo?'";
		mes "Em doze, os nossos dois cora��es s�o um.";
		mes "12 p�talas, o nosso amor finalmente floresce.^000000";
		next;
		specialeffect(EF_POISONREACT2, AREA, playerattached());
		mes "^3355FFAp�s a can��o, Kino sorri para voc�.";
		mes "Voc� sente uma dor aguda em seu pulso.";
		mes "No local onde a prata foi crescente, voc� ver� uma pequena cruz preta.^000000";
		next;
		mes "[Kino Gato]";
		mes "Ent�o, como voc� gosta?";
		mes "Bem, estou certo de que Errende vai amar, com certeza.";
		next;
		mes "[Kino Gato]";
		mes "Quero pedir desculpas.";
		mes "Eu n�o queria fazer voc� esperar.";
		mes "Mas eu s� lembrava a letra para a can��o antiga.";
		mes "Agora, vai at� Errende, ele deve estar a te esperar.";
		next;
		mes "^3355FFKino Gato lhe d� em m�os uma carta com o escrito 'Caro Errende' na frente.^000000";
		gef_bard_q = 11;
		close;
	} else if (gef_bard_q == 11) {
		mes "[Kino Gato]";
		mes "Errende deve estar esperando por voc�.";
		mes "Embora outros estivessem angustiados se ficassem esperando.";
		mes "O povo como Errende � mais delicado com pressa quanto pode.";
		close;
	} else {
		mes "[Kino Gato]";
		mes "Tudo vai ficou bem no final, certo?";
		mes "Eu vou ficar bem, Jorti vai ficar bem, e ela vai ser...";
		mes "*Oh*";
		next;
		mes "[Kino Gato]";
		mes "Pe�o desculpas, estava apenas balbuciando comigo mesmo.";
		mes "Tem alguma coisa que voc� queira de mim?";
		next;
		if (select("Cante uma can��o","N�o, obrigado") == 1) {
			mes "[Kino Gato]";
			mes "Ah... Bem, eu tenho uma doen�a cr�nica, portanto n�o posso falar alto.";
			mes "Mas, al�m disso, estou perfeitamente saud�vel.";
			next;
			mes "^3355FFUm olhar de amargura momentaneamente aparece na face de Kino Gato.";
			mes "Ele ent�o ajusta as cordas de seu viol�o e come�a a tocar.";
			mes "Cantarolando uma melodia baixa.^000000";
			soundeffect("humming.wav",0);
			close;
		} else {
			mes "[Kino Gato]";
			mes "Hmm...?";
			mes "Queria que todas as pessoas do mundo fossem gentis e honestas.";
			mes "Se fosse esse o caso, a� n�o haveria brigas ego�stas.";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_in01,172,100,3	script	Velho#gef_bard_q	4_M_05,{
	if (gef_bard_q == 8) {
		mes "[Sketzi Bundin]";
		mes "Voc� deve estar procurando algo especial.";
		mes "Bem, temos quase todos os poemas escandinavos ou 'Odes'.";
		mes "Este � o �nico lugar onde voc� pode encontrar estes tipos de can��es antigas.";
		next;
		mes "[Sketzi Bundin]";
		mes "No entanto, n�o posso mostr�-los para ningu�m esses fr�geis livros.";
		mes "Por raz�es de preserva��o, s� posso mostrar esses trabalhos para clientes preferenciais.";
		next;
		if (select("Mostrar a m�o esquerda","Mostrar a m�o direita") == 1) {
			mes "[Sketzi Bundin]";
			mes "Ah! Voc� deve ser o amigo de um bardo de alto escal�o!";
			mes "Eu vejo, eu vejo.";
			mes "Voc� deve ser amig"+(Sex == SEX_MALE ? "o":"a")+" de Errende Menta.";
			next;
			mes "[Sketzi Bundin]";
			mes "Ent�o, o que � que voc� est� procurando?";
			mes "Bem, eu suponho que realmente n�o precisaria perguntar isso.";
			next;
			mes "[Sketzi Bundin]";
			mes "Por favor...";
			mes "Use os livros o tempo que desejar.";
			mes "Espero que encontre o que voc� est� procurando.";
			gef_bard_q = 9;
			close;
		} else {
			mes "[Sketzi Bundin]";
			mes "Deixe-me ver...";
			mes "Bem, seu batimento card�aco � um pouco mais r�pido que o normal.";
			mes "Voc� deve ver isso, quem sabe, para o bem da sua sa�de?";
			next;
			mes "[Sketzi Bundin]";
			mes "Voc� n�o est� procurando por qualquer livro m�dico ou relacionado � sa�de, na� �?";
			mes "Desculpe, mas n�s n�o temos nenhum destes.";
			close;
		}
	} else if (gef_bard_q > 8) {
		mes "[Sketzi Bundin]";
		mes "Bem, j� encontrou o que estava procurando?";
		mes "Embora todos os livros que temos sejam antigos, empoeirados, espero que encontre.";
		mes "E, por favor, d� meus cumprimentos aos seus amigos bardos.";
		close;
	} else {
		mes "[Sketzi Bundin]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Voc� deve estar procurando algo de especial e raro.";
		mes "Mas voc� s� transportar uma esp�cie de livro por aqui.";
		next;
		mes "[Sketzi Bundin]";
		mes "Se voc� estiver procurando informa��es sobre monstros.";
		mes "Porque voc� n�o verifica na Biblioteca de Prontera ou o Museu do Monstro, aqui em Juno?";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in01,163,101,0	script	Livro Velho#gef_bard_q	HIDDEN_NPC,{
	if (gef_bard_q > 8) {
		mes "^3355FFVoc� abriu o livro.";
		mes "H� uma fragilidade para passar as p�ginas.";
		mes "Bem como as letras est�o desbotadas e pouco leg�veis.";
		mes "Voc� n�o consegue sequer identificar o nome do autor.^000000";
		next;
		mes "[Cole��o de Odes]";
		mes "Esta � uma can��o de amor.";
		mes "Todo mundo sofre de amor n�o correspondido, pelo menos uma vez na vida.";
		next;
		mes "[Cole��o de Odes]";
		mes "Em um, eu fico apaixonado.";
		mes "Em dois, voc� me mostra um sorriso.";
		mes "Em tr�s, eu adoro seu toque.";
		mes "Em quatro, um beijo macio.";
		next;
		mes "[Cole��o de Odes]";
		mes "Em cinco, vamos mudar nossas mentes.";
		mes "Uma p�tala cai pelo ar.";
		mes "Em seis, eu fico apaixonado.";
		mes "Em sete, voc� se apaixona.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Acho que � isso!";
		mes "� melhor eu anot�-la.";
		next;
		mes "[Cole��o de Odes]";
		mes "Em oito, estamos ambos no amor.";
		mes "Em nove, voc� conhece meu cora��o.";
		mes "Em dez, eu sei que voc� est� esperando por mim.";
		next;
		mes "[Cole��o de Odes]";
		mes "Em onze, um sussurro precioso:";
		mes "'Voc� quer casar comigo?'";
		mes "Em doze, os nossos dois cora��es s�o um.";
		mes "12 p�talas, o nosso amor finalmente floresce.";
		next;
		mes "^3355FFVoc� anota as linhas finais e mant�m em uma nota dentro do seu bolso.^000000";
		if (gef_bard_q == 9) { gef_bard_q = 10; }
		close;
	} else {
		mes "[Sketzi Bundin]";
		mes "Desculpe, mas esse livro � fr�gil demais para a manipula��o.";
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
	mes "Voc� est� bem?";
	next;
	mes "[Bardo Misterioso]";
	mes "Hmmm...";
	mes "Minhas desculpas, mas esta � uma performance privada.";
	mes "Essa can��o � somente pra minha pequena princesa, Jorti.";
	close;
}
