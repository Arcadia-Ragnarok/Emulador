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
| - Copyright: Spell Master (18/09/2017)                            |
| - Info: Quest de Mudança de Classe para Odalisaca.                |
\*-----------------------------------------------------------------*/

job_duncer,43,93,4	script	Aile#dancerq	4_F_07,{
	if (Sex == SEX_FEMALE) {
		if (BaseJob == Job_Dancer) {
			cutin("job_dancer_eir01",2);
			mes "[Aile]";
			mes "Muitas pessoas admiram nossa performances de danças.";
			mes "Porque somos lindas ou somos boas de dança?";
			close2;
			cutin("",255);
			end;
		} else if (BaseJob == Job_Archer) {
			if (!dancerq) {
				cutin("job_dancer_eir01",2);
				mes "Bem-Vinda!";
				mes "Esta é a \"Escola de Dança de Comodo\", onde ensinamos várias danças de diferentes países.";
				mes "Nós promovemos entretenimento para viajantes de todas as partes do mundo.";
				next;
				mes "[Aire]";
				mes "Nós tambem promovemos a oportunidade para aspirantes a Odaliscas.";
				mes "Tornarem-se famosas por toda Rune-Midgard!";
				mes "Dançar no foco das atenções não parece espetacular?";
				next;
				mes "[Aire]";
				mes "Eu acho melhor lhe dizer que nossa escola é seletiva.";
				mes "Então, não aceitamos estudantes que não parecem ter talento para se tornarem Odaliscas.";
				next;
				cutin("job_dancer_eir02",2);
				mes "[Aire]";
				mes "O que acha?";
				mes "Quer se inscrever?";
				mes "Você só tem que preencher alguns desses formulários.";
				mes "E pode vir para nossas aulas para fazer os testes.";
				next;
				cutin("job_dancer_eir01",2);
				mes "[Aire]";
				mes "Então, o que você quer fazer?";
				next;
				if (select("Preencher os formulários","Sair") == 2) {
					mes "[Aire]";
					mes "Ahh!";
					mes "Pense novamente.";
					mes "Não se esqueça de voltar se você mudar de idéia.";
					close2;
					cutin("",255);
					end;
				} else {
					if (JobLevel < 40) {
						mes "[Aire]";
						mes "Hmm...";
						mes "Parece que";
						mes "você não está qualificada para entrar em nossa escola ainda.";
						mes "Você precisa estar, no mínimo, no nível 40 de Classe.";
						next;
						mes "[Aire]";
						mes "Bem, espero que você se inscreva quando atingir os requerimentos.";
						close2;
						cutin("",255);
						end;
					} else {
						cutin("job_dancer_eir02",2);
						mes "[Aire]";
						mes "Boa escolha!!";
						mes "Apenas preencha os formulários aqui...";
						next;
						mes "...";
						next;
						mes "...";
						mes "......";
						next;
						mes "^3355FF*Shuffle Shuffle*^000000";
						next;
						cutin("job_dancer_eir01",2);
						mes "[Aire]";
						mes "Seu nome é "+strcharinfo(PC_NAME)+"?";
						mes "Oh! Que belo nome!";
						mes "Apenas um momento, tenho que mostrar isso ao diretor.";
						mes "Então volte daqui a pouco, certo?";
						close2;
						cutin "",255;
						dancerq = 1;
						setquest(7000);
						end;
					}
				}
			} else if (dancerq == 1) {
				cutin("job_dancer_eir01",2);
				mes "[Aile]";
				mes "Bom.";
				mes "Lhe informo sobre algumas coisas que você precisará trazer para suas lições.";
				next;
				mes "[Aile]";
				mes "Nós temos poucos suprimentos, mas você vai usá-los para você de qualquer maneira.";
				mes "Basta pensar nisso como parte da taxa de matrícula, então não se preocupe demais.";
				next;
				switch (rand(3)) {
					case 1:
					setarray(.@item[0], 938, 909, 501, 2403);
					setarray(.@count[0], 20,   3,   5,    1);
					dancerq = 2;
					changequest(7000,7001);
					break;
					case 2:
					setarray(.@item[0], 1055,2405);
					setarray(.@count[0],   5,   1);
					dancerq = 3;
					changequest(7000,7002);
					break;
					default:
					setarray(.@item[0], 965,503,909,1020,2401);
					setarray(.@count[0],  2,  5, 20,  10,   1);
					dancerq = 4;
					changequest(7000,7003);
					break;
				}
				mes "[Aire]";
				mes "Primeiramente, há o custo inicial de ^cd688910,000 Zeny^000000.";
				mes "Então, você deve trazer:";
				next;
				mes "[Aire]";
				mes "Primeiramente, há o custo inicial de ^cd688910,000 Zeny^000000.";
				mes "Então, você deve trazer:";
				next;
				mes "[Aire]";
				for (.@i = 0; .@i < getarraysize(.@item); .@i++) {
					mes "^cd6889"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.";
				}
				next;
				mes "[Aire]";
				mes "Uma vez que você tenha juntado tudo que precisa.";
				mes "Volte para começarmos suas aulas.";
				close2;
				cutin "",255;
				end;
				close;
			} else if (dancerq >= 2 && dancerq <= 4) {
				switch (dancerq) {
					case 2:
					setarray(.@item[0], 938, 909, 501, 2403);
					setarray(.@count[0], 20,   3,   5,    1);
					break;
					case 3:
					setarray(.@item[0], 1055,2405);
					setarray(.@count[0],   5,   1);
					break;
					case 4:
					setarray(.@item[0], 965,503,909,1020,2401);
					setarray(.@count[0],  2,  5, 20,  10,   1);
					break;
				}
				.@arraysize = getarraysize(.@item);
				for (.@i = 0; .@i < .@arraysize; .@i++) {
					if (countitem (.@item[.@i]) < .@count[.@i]) {
						break;
					}
				}
				if (.@i == .@arraysize && Zeny >= 10000) {
					cutin("job_dancer_eir02",2);
					mes "[Aile]";
					mes "Oh...!";
					mes "Você trouxe tudo!";
					mes "Muito bem!";
					for (.@i = 0; .@i < .@arraysize; .@i++) {
						delitem(.@item[.@i],.@count[.@i]);
					}
					Zeny -= 10000;
					next;
					cutin("job_dancer_eir01",2);
					mes "[Aile]";
					mes "Agora, vá até ^cd6889Bijou^000000, aquela que está no comando das entrevistas.";
					mes "Ela precisa te perguntar algumas coisas.";
					dancerq = 5;
					if (questprogress(7001)) { changequest(7001,7004); }
					else if (questprogress(7002)) { changequest(7002,7004); }
					else if (questprogress(7003)) { changequest(7003,7004); }
					close2;
					cutin("",255);
					end;
				} else {
					cutin("job_dancer_eir01",2);
					mes "[Aile]";
					mes "Mmm...?";
					mes "Você ainda não tem os itens que lhe pedi.";
					mes "Deixe me lembrar a você o que têm que trazer pois você precisará depois.";
					next;
					mes "[Aile]";
					mes "Traga...";
					mes "^cd688910,000 Zeny^000000 e:";
					next;
					mes "[Aile]";
					for (.@i = 0; .@i < .@arraysize; .@i++) {
						mes "^cd6889"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.";
					}
					close2;
					cutin "",255;
					end;
				}
			} else if (dancerq == 5) {
				cutin("job_dancer_eir01",2);
				mes "[Aile]";
				mes "Hmm...?";
				mes "Você está com dificuldades para encontrar";
				mes "^cd6889Bijou^000000?";
				next;
				mes "[Aile]";
				mes "Você têm que falar com ela porque ela está a frente das entrevistas.";
				mes "Não se preocupe, ela deve estar em algum lugar na Escola de Odaliscas.";
				close2;
				cutin("",255);
				end;
			} else {
				cutin("job_dancer_eir01",2);
				mes "[Aile]";
				mes "Estou esperando por uma grande performance, de você!";
				close2;
				cutin("",255);
				end;
			}
		} else {
			cutin("job_dancer_eir01",2);
			mes "[Aile]";
			mes "Bem-Vinda!";
			mes "Veio aqui, para ver a habilidade de nós Odaliscas na dança?";
			close2;
			cutin("",255);
			end;
		}
	} else if (Sex == SEX_MALE) {
		if (BaseJob == Job_Bard) {
			cutin("job_dancer_eir01",2);
			mes "[Aile]";
			mes "Deixe me ver se você possui novas músicas.";
			mes "Podemos sempre usar algumas músicas novas para complementar nossas performances.";
			close2;
			cutin("",255);
			end;
		} else {
			cutin("job_dancer_eir03",2);
			mes "[Aire]";
			mes "Hm?";
			mes "Ei você não está aqui para ficar de olho em nossas candidatas, ou está?";
			close2;
			cutin("",255);
			end;
		}
	}
}

// ------------------------------------------------------------------
job_duncer,95,93,4	script	Bijou#dancerq	4W_F_01,{
	if (BaseJob == Job_Archer && Sex == SEX_FEMALE) {
		if (dancerq == 5 || dancerq == 6) {
			if (dancerq == 5) {
				mes "[Bijou]";
				mes "Você quer se tornar uma Odalisca, não é mesmo?";
				next;
				mes "[Bijou]";
				mes "Olhe para essa barriga gorda!";
				mes "Bem, não é muito, então você terá que perder isso em pouco tempo.";
				mes "Especialmente que eu vou cuidar de seu treinamento.";
				next;
				mes "[Bijou]";
				mes "Então...";
				mes "A idéia de um corpo perfeito claro vem mudado desde que eu era jovem.";
				mes "De qualquer forma...";
				next;
				mes "[Bijou]";
				mes "Vamos começar com a entrevista.";
				mes "Eu somente irei perguntar algumas coisas bem simples então não se preocupe.";
				next;
				mes "[Bijou]";
				mes "Ok...";
				mes "Vamos começar.";
				next;
			}
			if (dancerq == 6) {
				mes "[Bijou]";
				mes "Oh, você voltou.";
				mes "Você já estudou um pouco mais?";
				mes "Tente passar desta vez.";
				next;
			}
			switch (rand(3)) {
				case 1:
				mes "[Bijou]";
				mes "1. A dança da Odalisca, ^cd6889LBeijo da Sorte^000000.";
				mes "Aumenta qual das seguintes opções a seguir?";
				next;
				if (select("Inteligência","Destreza","Vitalidade","Crítico") == 4) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "2. O que a seguir, não pode ser considerado uma dança?";
				next;
				if (select("Tango","Sapateado","Dança do Ventre","Relâmpago") == 4) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "3. O que a seguir descreve melhor uma Odalisca?";
				next;
				if (select("Pessoa que grita","Pessoa barulhenta","Dançarina","Cantora") == 3) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "4. O que a seguir não pode ser associado com Comodo?";
				next;
				if (select("Praia","Odaliscas","Escura como a noite","3 Cavernas","Gatunos") == 5) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "5. Antes de Comodo, qual é o nome da região Nordeste da Ilha do Farol do Faros";
				next;
				if (select("Planalto Elmeth","Praia de Comuko","Praia de Comodo","Pântano Ginai") == 3) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "6. Quem é a Odalisca mais bonita?";
				next;
				if (select(strcharinfo(PC_NAME),"Bijou","Aile","Bonjour") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "7. Qual das opções a seguir, pode fazer performances junto com uma Odalisca?";
				next;
				if (select("Assassino","Bardo","Alquimista","Sábio") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "8. Qual das opções a seguir não pode ser encontrado em Comodo?";
				next;
				if (select("Poção da Fúria Selvagem","Casco de Ostra","Casco de Caranguejo","Pedra Brilhante") == 4) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "9. Quem é o gerente do cassino de Comodo?";
				next;
				if (select("Yoo","Moo","Hoon","Roul") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "10. Quem aceita a mudança de classe para Odalisca?";
				next;
				if (select("Bijou","Aile","Athena","Sonotora") == 2) {
					.@da_score += 10;
				}
				break;
				case 2:
				mes "[Bijou]";
				mes "1. Qual é o efeito da habilidade de Dueto, ^cd6889Banquete de Njord^000000?";
				next;
				if (select("Morte instantânea","Dobra o dano","Aumenta experiência","Velocidade de ataque") == 3) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "2. O que é considerado falta de etiqueta no palco depois de uma dança?";
				next;
				if (select("Agradecer o parceiro","Elogiar o parceiro","Dançar diferente","Criticar o parceiro") == 4) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "3. O que não é uma resposta adequada.";
				mes "Quando alguem comete um erro enquanto estiverem dançando juntos?";
				next;
				if (select("Continuar dançando","Apontar o erro","Ignorar") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "4. Onde fica esse teatro de dança?";
				next;
				if (select("Cocomo","Sandarman","Comudo","Comodo") == 4) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "5. Quantos cavernas são conectadas diretamente com Comodo?";
				next;
				if (select("1","2","3","4") == 3) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "6. Qual das opções a seguir não é um bichinho de estimação?";
				next;
				if (select("Isis","Argiope","Dokebi","Deviruchi") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "7. Quem é a Odalisca mais graciosa?";
				next;
				if (select(strcharinfo(PC_NAME),"Bijou","Isis","Mercy Bokou") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "8. Qual é o local onde as funcionárias kafras costumam dançar?";
				next;
				if (select("Prontera","Al Debaran","Izlude","Elas não dançam") == 4) {
					.@da_score += 10;
				}
				mes "[......]";
				mes "9. Qual é o meu nome?";
				next;
				if (select("Borjuis","Bourgeois","Bijou","Beruberu") == 3) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "10. Qual é";
				mes "o efeito da habilidade^cd6889Cantiga de Ninar^000000?";
				next;
				if (select("Cegueira","Sono","Congelamento") == 2) {
					.@da_score += 10;
				}
				break;
				default:
				mes "[Bijou]";
				mes "1. Qual o efeito da habilidade ^cd6889Lições de Dança^000000?";
				next;
				if (select("Aumenta a INT","Dano com chicote","Atordoamento") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "2. Qual dança usa sapatos para fazer sons quando o dançarino pisa?";
				next;
				if (select("Sapateado","Concentração","Tango","Rajada de Flechas") == 1) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "3. O que a seguir não é uma característica de uma Odalisca?";
				next;
				if (select("Dançar","Atacar a distância","Usar chicotes","Usar espadas") == 4) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "4. Qual cidade têm a maioria das Odaliscas?";
				next;
				if (select("Al De Baran","Juno","Morroc","Comodo") == 4) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "5. Quem a seguir, é a Odalisca mais maravilhosa?";
				next;
				if (select(strcharinfo(PC_NAME),"Bijou","Isis","Guton Tak") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "6. Em que a Odalisca é melhor que as outras classes?";
				next;
				if (select("Curar","Atuar","Dançar","Mágica") == 3) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "7. Quem é o gerente do Cassino de Comodo?";
				next;
				if (select("Ryu","Moo","Roul","Hoon") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "8. Qual item não pode ser equipado por uma Odalisca?";
				next;
				if (select("Orelha de Gato","Espadas de 2 Mãos","Sandálias","Brincos") == 2) {
					.@da_score += 10;
				}
				mes "[Bijou]";
				mes "9. Você acha que os homens não entendem as mulheres?";
				next;
				select("Sim","Não");
				mes "[Bijou]";
				mes "10. Quem a seguir não é um músico de Jazz?";
				next;
				if (select("Art Blakey","Billie Holiday","Louis Armstrong","Bud Powell","Salgueiro Ancião") == 5) {
					.@da_score += 10;
				}
				break;
			}
			mes "[Bijou]";
			mes "Bom trabalho você respondeu todas as perguntas.";
			next;
			if (.@da_score == 100) {
				dancerq = 7;
				mes "[Bijou]";
				mes "Muito bem feito!";
				mes "Uma pontuação perfeita!";
				next;
				mes "[Bijou]";
				mes "Não existe muitas pessoas que se candidatam para se tornar uma Odalisca com esse tipo de conhecimento.";
				mes "Me desculpe por te julgar por sua aparência.";
				next;
				mes "[Bijou]";
				mes "Agora só resta para você o Teste de Dança.";
				mes "Enquanto nós preparamos o teste, por que você não descansa um pouco?";
				close;
			} else if (.@da_score > 70) {
				dancerq = 7;
				mes "[Bijou]";
				mes "Não foi perfeito, mas vou lhe deixar passar.";
				next;
				mes "[Bijou]";
				mes "Agora só resta para você o Teste de Dança.";
				mes "Enquanto nós preparamos o teste, por que você não descansa um pouco?";
				close;
			} else {
				dancerq = 6;
				mes "[Bijou]";
				mes "Você falhou!";
				next;
				mes "[Bijou]";
				mes "Foi muito difícil?";
				mes "Quando eu era jovem, todos sabiam pelo menos o suficiente para passar esse teste.";
				mes "Vá e estude um pouco mais antes de voltar.";
				close;
			}
		} else if (dancerq == 7) {
			mes "[Bijou]";
			mes "Ok...";
			mes "Você está pronta para o Teste de Dança?";
			mes "Se você quiser, posso explicar algumas coisas.";
			next;
			if (select("Ouvir as instruções","Ir para o teste.") == 1) {
				mes "[Bijou]";
				mes "Primeiro de tudo, cada pessoa têm ^cd68891 minuto^000000 para o teste.";
				mes "E todas dançam ^cd6889uma de cada vez^000000.";
				mes "Não se preocupe se você nunca dançou antes.";
				next;
				mes "[Bijou]";
				mes "Depois de entrar na área de teste, você vai ver o palco.";
				mes "Primeiro, ^cd6889mude o seu angulo de câmera para que você fique de frente^000000.";
				mes "Irá provavelmente funcionar se você der um^cd6889duplo-clique no botão direito do mouse^000000.";
				next;
				mes "[Bijou]";
				mes "Se você não resetar o seu ângulo da câmera, irá se confundir com os comandos ^cd6889Cima, Baixo, Esquerda, Direita^000000.";
				next;
				mes "[Bijou]";
				mes "Espere a sua vez na^cd6889Sala de Espera^000000.";
				mes "Se a pessoa a sua frente falhar, se é a sua vez na fila e seu teste irá começar.";
				next;
				mes "[Bijou]";
				mes "Se houver muitas pessoas, nem todos poderão caber na sala de espera.";
				mes "Se for esse o caso, basta criar uma fila ordenada.";
				next;
				mes "[Bijou]";
				mes "Quando o teste começar, a música será transmitida.";
				mes "Bem como a direção na qual você deverá se mover.";
				mes "Apenas siga as instruções e mova suas pernas.";
				next;
				mes "[Bijou]";
				mes "Lembre-se, ^cd6889você será desqualificada se você não executar os passos com o tempo certo^000000.";
				mes "Tenha cuidado, o teste é muito rigoroso.";
				close;
			} else {
				mes "[Bijou]";
				mes "Muito bem então.";
				mes "Boa Sorte...!!";
				changequest(7004,7005);
				dancerq = 8;
				close2;
				warp("job_duncer",105,109);
				end;
			}
		} else if (dancerq == 8) {
			mes "[Bijou]";
			mes "Oh minha nossa...";
			mes "Você falhou?";
			mes "Não se preocupe, apenas tente sentir o ritmo.";
			mes "Preste atenção nos comando que lhe são passados.";
			close2;
			warp("job_duncer",105,109);
			end;
		} else if (dancerq == 9) {
			if (SkillPoint) {
				mes "[Bijou]";
				mes "Você não poderá mudar de classe se você ainda tiver pontos de habilidades sobrando.";
				mes "Use o restante e volte novamente mais tarde.";
				close;
			} else {
				mes "[Bijou]";
				mes "Sua performance me mostrou que você está qualificada para se tornar uma Odalisca.";
				mes "Muito bem então, deixe me mudar sua classe.";
				next;
				mes "[Bijou]";
				mes "Com a bênção de nossa deusa, você ira renascer como uma Odalisca.";
				mes "A partir de agora, ninguém vai deixar a sua presença sem um sorriso.";
				next;
				.@jl = JobLevel;
				jobchange(Job_Dancer);
				completequest(7006);
				callfunc("ClearJobQuest2nd",20);
				mes "[Bijou]";
				mes "Ooh...!";
				mes "Você está ótima como uma Odalisca.";
				mes "Parabéns";
				next;
				mes "[Bijou]";
				mes "Aqui está um pequeno presente.";
				mes "Por favor, aceite.";
				mes "Que a sua performance sempre traga alegria para seus espectadores.";
				if (.@jl == 50) { getitem(Line_,1); }
				else { getitem(Rope,1); }
				close;
			}
		} else {
			mes "[Bijou]";
			mes "Oh querid"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Você deve ter viajado de muito longe para assistir minha performance.";
			next;
			mes "[Bijou]";
			mes "Desculpe, mas eu me aposentei.";
			mes "Agora estou me focando em treinar novas Odaliscas.";
			close;
		}
	} else {
		if (BaseJob == Job_Bard) {
			mes "[Bijou]";
			mes "Oh, um Bardo!";
			mes "Por acaso você teria uma nova música para nos mostrar?";
			mes "Nós sempre usamos algum acompanhamento musical para as nossas danças.";
			close;
		} else if (BaseJob == Job_Dancer) {
			mes "[Bijou]";
			mes "Oh minha nossa...!";
			mes "Seja Bem-Vinda novamente.";
			next;
			mes "[Bijou]";
			mes "Muitas pessoas adoraram assistir sua dança?";
			mes "Você está se divertindo com os holofotes?";
			close;
		} else {
			mes "[Bijou]";
			mes "Oh querid"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Você deve ter viajado de muito longe para assistir minha performance.";
			next;
			mes "[Bijou]";
			mes "Desculpe, mas eu me aposentei.";
			mes "Agora estou me focando em treinar novas Odaliscas.";
			close;
		}
	}
}

// ------------------------------------------------------------------
job_duncer,32,154,1	script	Sala de Espera#dancerq	1_F_01,{
	mes "[Pyorgin]";
	mes "Por favor, espere na Sala de Espera.";
	mes "Clique na sala de chat para entrar.";
	next;
	mes "[Pyorgin]";
	mes "Aqueles que estiverem curiosos sobre o teste podem assistir por detrás.";
	close;

	OnInit:
	waitingroom("Sala de Espera",20,"Sala de Espera#dancerq::OnStartArena",1);
	enablewaitingroomevent;
	end;

	OnStartArena:
	warpwaitingpc(strnpcinfo(NPC_MAP),69,110,1);
	donpcevent("dance_timer#dancerq::OnStart");
	donpcevent("dance#dancerq::OnPoints");
	disablewaitingroomevent;
	end;

	OnEnable:
	enablewaitingroomevent;
	end;
}

// ------------------------------------------------------------------
job_duncer,1,1,0	script	dance_timer#dancerq	4_F_07,3,3,{
	OnInit:
	disablenpc("dance_return#dancerq");
	stopnpctimer;
	end;

	OnStart:
	initnpctimer;
	end;

	OnStop:
	stopnpctimer;
	disablenpc("dance_return#dancerq");
	donpcevent("Sala de Espera#dancerq::OnEnable");
	end;

	OnTimer3000:
	mapannounce(strnpcinfo(NPC_MAP),"Certo, vamos começar. Agora relaxe, o teste demora 1 minuto.",bc_map);
	end;

	OnTimer6000:
	.DanceDir = 6;
	mapannounce(strnpcinfo(NPC_MAP),"Para Baixo",bc_map);
	end;

	OnTimer9000:
	.DanceDir = 9;
	mapannounce(strnpcinfo(NPC_MAP),"Para Esquerda",bc_map);
	end;

	OnTimer12000:
	.DanceDir = 3;
	mapannounce(strnpcinfo(NPC_MAP),"Para Direita",bc_map);
	end;

	OnTimer15000:
	.DanceDir = 0;
	mapannounce(strnpcinfo(NPC_MAP),"Volte ao centro",bc_map);
	end;

	OnTimer21000:
	.DanceDir = 9;
	mapannounce(strnpcinfo(NPC_MAP),"Para Esquerda",bc_map);
	end;

	OnTimer24000:
	.DanceDir = 6;
	mapannounce(strnpcinfo(NPC_MAP),"Para Baixo",bc_map);
	end;

	OnTimer27000:
	.DanceDir = 3;
	mapannounce(strnpcinfo(NPC_MAP),"Para Direita",bc_map);
	end;

	OnTimer30000:
	.DanceDir = 1;
	mapannounce(strnpcinfo(NPC_MAP),"Para Cima",bc_map);
	end;

	OnTimer33000:
	.DanceDir = 0;
	mapannounce(strnpcinfo(NPC_MAP),"Volte ao Centro",bc_map);
	end;

	OnTimer36000:
	.DanceDir = 3;
	mapannounce(strnpcinfo(NPC_MAP),"Para Direita",bc_map);
	end;

	OnTimer39000:
	mapannounce(strnpcinfo(NPC_MAP),"Para Cima",bc_map);
	.DanceDir = 1;
	end;

	OnTimer41000:
	.DanceDir = 3;
	mapannounce(strnpcinfo(NPC_MAP),"Para Direita",bc_map);
	end;

	OnTimer44000:
	.DanceDir = 9;
	mapannounce(strnpcinfo(NPC_MAP),"Para Esquerda",bc_map);
	end;

	OnTimer47000:
	mapannounce(strnpcinfo(NPC_MAP),"Para Cima",bc_map);
	.DanceDir = 1;
	end;

	OnTimer50000:
	.DanceDir = 9;
	mapannounce(strnpcinfo(NPC_MAP),"Para Esquerda",bc_map);
	end;

	OnTimer56000:
	.DanceDir = 1;
	mapannounce(strnpcinfo(NPC_MAP),"Para Cima",bc_map);
	end;

	OnTimer59000:
	.DanceDir = 0;
	mapannounce(strnpcinfo(NPC_MAP),"Volte ao Centro",bc_map);
	end;

	OnTimer60000:
	mapannounce(strnpcinfo(NPC_MAP),"Finalizando com 'Chuva de Flechas'!",bc_map);
	end;

	OnTimer62000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo acabou!",bc_map);
	enablenpc("dance_return#dancerq");
	end;

	OnTimer63000:
	stopnpctimer;
	disablenpc("dance_return#dancerq");
	donpcevent("Sala de Espera#dancerq::OnEnable");
	end;
}

// ------------------------------------------------------------------
job_duncer,2,1,0	script	dance#dancerq	FAKE_NPC,{

	OnTouch:
	.@npcId = atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),0));
	.@DanceDir = getvariableofnpc(.DanceDir,"dance_timer#dancerq");

	OnPoints:
	.DancePoints = 1;
	end;

	if (.@npcId == .@DanceDir) {
		donpcevent("Instrutora#dancerq::OnAccept");
		++.DancePoints;
		end;
	} else {
		--.DancePoints;
		donpcevent("Instrutora#dancerq::OnError");
		if (!.DancePoints) {
			mapannounce(strnpcinfo(NPC_MAP),"Você se atrasou no ritmo!!!",bc_map);
			donpcevent("dance_timer#dancerq::OnStop");
			warp("comodo",188,162);
		}
		end;
	}
}
// Cima
job_duncer,71,113,0	duplicate(dance#dancerq)	dance#1dancerq	FAKE_NPC,4,1
// Direita
job_duncer,72,108,0	duplicate(dance#dancerq)	dance#3dancerq	FAKE_NPC,1,4
// Baixo
job_duncer,67,107,0	duplicate(dance#dancerq)	dance#6dancerq	FAKE_NPC,4,1
// Esquerda
job_duncer,66,112,0	duplicate(dance#dancerq)	dance#9dancerq	FAKE_NPC,1,4

// ------------------------------------------------------------------
job_duncer,69,114,0	script	dance_return#dancerq	FAKE_NPC,8,8,{
	end;

	OnTouch:
	if (getvariableofnpc(.DancePoints,"dance#dancerq") > 12) {
		mapannounce(strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" Passou no teste de dança!!",bc_map);
		dancerq = 9;
		changequest(7005,7006);
		warp(strnpcinfo(NPC_MAP),69,49);
	} else {
		mapannounce(strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" Reprovou no teste de dança!!",bc_map);
		warp("comodo",188,162);
	}
	donpcevent("dance_timer#dancerq::OnStop");
	end;
}

// ------------------------------------------------------------------
job_duncer,66,113,5	script	Instrutora#dancerq	4W_F_01,{
	end;

	OnAccept:
	emotion(e_no1);
	end;

	OnError:
	emotion(e_omg);
	end;
}
