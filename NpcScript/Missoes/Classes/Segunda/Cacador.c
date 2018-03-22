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
| - Copyright: Spell Master (06/09/2017)                            |
| - Info: Quest de Mudança de Classe para Caçador.                  |
\*-----------------------------------------------------------------*/

hu_in01,386,373,4	script	Caçadora#hunterq	4_F_JOB_HUNTER,{
	if (BaseJob == Job_Archer) {
		if (JobLevel < 40) {
			mes "[Caçadora Dejiko]";
			mes "Você não teve treinamento suficiente ainda como um Arqueiro.";
			next;
			mes "[Caçadora Dejiko]";
			mes "Você precisará ter pelo menos nível de classe 40 para se tornar um Caçador.";
			mes "Claro, você pode treinar mais do que isso, se quiser.";
			next;
			mes "[Caçadora Dejiko]";
			mes "Até a próxima.";
			close;
		} else if (!hunterq) {
			mes "[Caçadora Dejiko]";
			mes "Você veio aqui para se tornar Caçador?";
			next;
			switch (select("É para isso que eu estou aqui","Quais são os requisitos?","Só estou de passagem")) {
				case 1:
				mes "[Caçadora Dejiko]";
				mes "Hehe...";
				mes "Eu estava certa!";
				mes "Deixe-me colocá-lo na lista de candidatos.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Hum... Vamos começar com a entrevista.";
				mes "Espere um momento e relaxe.";
				mes "Não precisa se preocupar, eu irei preparar tudo.";
				next;
				mes "^3355FF*Reunindo e coletando papéis*^000000";
				next;
				mes "^3355FF*Vasculhando...*^000000";
				next;
				mes "[Caçadora Dejiko]";
				mes "Ah!";
				mes "Aqui estão elas: as perguntas da entrevista.";
				mes "Primeiro de tudo, meu nome é \"Dejiko\".";
				mes "Prazer em conhecê-l"+(Sex == SEX_MALE ? "o" : "a")+".";
				next;
				mes "[Caçadora Dejiko]";
				mes "Pronto, já lhe registrei na lista de candidatos, quando estiver pront"+(Sex == SEX_MALE ? "o" : "a")+" para começar venha falar comigo novamente.";
				mes "Até logo, então.";
				hunterq = 1;
				setquest(4000);
				close;
				case 2:
				mes "[Caçadora Dejiko]";
				mes "Requisitos para mudança de classe?";
				mes "Primeiro...";
				mes "Você deve ser um arqueiro.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Segundo...";
				mes "Você deve possuir no mínimo Nível de Classe 40.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Terceiro...";
				mes "Você deve trazer todos os itens que serão solicitados pela guilda.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Quarto...";
				mes "Você tem que passar no teste administrado pela corporação.";
				mes "Se você já tiver bastante treinamento como um Arqueiro, será capaz de passar nos testes.";
				close;
				case 3:
				mes "[Caçadora Dejiko]";
				mes "Ok, então, até a próxima.";
				close;
			}
		} else if (hunterq == 1) {
			mes "[Caçadora Dejiko]";
			mes "Está pront"+(Sex == SEX_MALE ? "o" : "a")+" para começar-mos?";
			next;
			if (select("Sim, vamos começar agora","Não, eu volto mais tarde.") == 1) {
				mes "[Caçadora Dejiko]";
				mes "Ouça com atenção aos cenários que eu descrevo.";
				mes "Quando eu faço uma pergunta, você escolhe uma resposta.";
				mes "Muito simples, você não acha?";
				next;
				mes "[Caçadora Dejiko]";
				mes "Eu só quero saber o você pensa sobre a vida, e porque você quer se tornar um Caçador.";
				mes "Então não há necessidade de nervosismo.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Você é um Arqueiro, e não sabe onde você deve ir para caçar.";
				mes "O que você faz?";
				next;
				if (select("Grito bem alto perguntando onde devo ir","Pergunto silenciosamente a alguém","Ando sozinho e procuro um lugar.") != 1) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Assim que tiver decidido um lugar para caçar.";
				mes "Você vai caçar alguns monstros conhecidos como Hodes no deserto de Sograt..";
				next;
				mes "[Caçadora Dejiko]";
				mes "Mas você está em Payon!!";
				mes "Como você chegará ao deserto?";
				next;
				if (select("Peço um portal gratuitamente","Uso o serviço da Kafra","Vou caminhando com um amigo.") != 1) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Não há nenhum sacerdote para pedir a abertura de um portal.";
				mes "E nenhum amigo por perto para andar com você.";
				mes "Você deve usar o serviço da Kafra, mas você não tem Zeny!";
				next;
				mes "[Caçadora Dejiko]";
				mes "Como você irá fazer para conseguir a quantia de Zenys que precisa?";
				next;
				if (select("Peço esmola","Vendo os itens que não preciso","Caço em um lugar por perto.") != 1) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Então, você finalmente chegou ao deserto de Sograt.";
				mes "Mas você percebe que os Hodes são muito fortes para você caçar sozinho.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Qual é a sua solução para resolver essa situação?";
				next;
				if (select("Ataco um Hode de cima do topo de uma colina","Volto para a cidade","Ataco o Hode junto com outra pessoa.") == 2) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Vamos dizer que você estava tendo muito trabalho em caçar os Hodes e  teve que voltar para a cidade.";
				mes "Agora você está com pouco HP e um sacerdote passa do seu lado.";
				mes "Como você pediria uma Cura?";
				next;
				if (select("É possível que você me cure?","Cura, por favor","Cure me.") == 1) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Por sorte, você encontrou um item raro, enquanto você estava vendo seu inventário.";
				mes "Você sai para vender o item, e há muitas pessoas com lojas e salas abertas.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Qual é a melhor maneira para vender seu item?";
				next;
				if (select("Grito bem alto para todo mundo ouvir","Abro uma sala de chat e espero","Procuro conversando") != 1) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Você encontra alguém implorando por itens e zeny.";
				mes "O que você faz?";
				next;
				if (select("Dou alguns de meus itens e zenys","Ignoro e vou embora","Falo a pessoa sobre um bom lugar para caçar.") != 2) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Agora, você decide ir para o labirinto da floresta por conta própria.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Mas em seu caminho, você encontra alguém que está perdido.";
				mes "O que você deve fazer?";
				next;
				if (select("Digo a ele qual caminho deve seguir","O guio até seu destino","Ignoro") != 3) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Depois de encontrar esta pessoa perdida, você decide voltar para a caça.";
				mes "Só então, você descobre que alguém está atacando um monstro chefe!";
				next;
				mes "[Caçadora Dejiko]";
				mes "O que você deve fazer?";
				next;
				if (select("Ataco se pedir ajuda","Ataco e vejo o que acontece","Volto para a cidade.") == 1) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Você agora está muito exaust"+(Sex == SEX_MALE ? "o" : "a")+" após um dia de caça.";
				mes "É hora de voltar para a cidade.";
				next;
				mes "[Caçadora Dejiko]";
				mes "Mas o que é isso?";
				mes "Você encontra um item caro jogado no chão!";
				mes "O que você deve fazer com ele?";
				next;
				if (select("Apanho e guardo","Tento encontrar o dono","Deixo onde está") != 3) {
					.@hquiz += 1;
				}
				mes "[Caçadora Dejiko]";
				mes "Ok, esse é o fim do questionário!";
				mes "Vejamos.. de acordo com as resposta que deu.";
				next;
				if (.@hquiz < 9) {
					mes "[Caçadora Dejiko]";
					mes "Você não pode se tornar um Caçador sem conhecer as regras básicas de etiqueta.";
					next;
					mes "[Caçadora Dejiko]";
					mes "Pense em como você responde às perguntas mais uma vez.";
					mes "Não valorize apenas a natureza, primeiro você deve valorizar o seu relacionamento com os outros.";
					next;
					mes "[Caçadora Dejiko]";
					mes "Então, você estará mais em sintonia com a natureza e com outras pessoas.";
					mes "É esse tipo de harmonia que cria os melhores caçadores.";
					close;
				} else {
					hunterq = 2;
					changequest(4000,4001);
					mes "[Caçadora Dejiko]";
					mes "Bom trabalho!";
					mes "Suas respostas mostram que você tem a visão certa da vida.";
					mes "Você definitivamente tem as qualidades certas para se tornar Caçador.";
					next;
					mes "[Caçadora Dejiko]";
					mes "Eu estou contente em dizer que você passou na entrevista.";
					mes "Agora, vá até aquela pessoa alí no canto e confirme quais os itens são necessários.";
					mes "Para o teste de mudança de classe.";
					close;
				}
			} else {
				mes "[Caçadora Dejiko]";
				mes "Ok...";
				mes "Volte quando você quiser.";
				close;
			}
		} else if (hunterq == 2 || hunterq == 3) {
			mes "[Caçadora Dejiko]";
			mes "Agora você deve ir falar com o Caçador de Demônio.";
			close;
		} else if (hunterq == 4 || hunterq == 5) {
			mes "[Caçadora Dejiko]";
			mes "Hum? Você não procurou pelo líder tanto no Palácio Central de Payon ou na Guilda dos Arqueiros?";
			mes "Ele deve estar em um desses dois lugares, então vá até lá e procure por ele.";
			close;
		} else if (hunterq == 6) {
			mes "[Caçadora Dejiko]";
			mes "Você ainda tem assuntos inacabados com o líder de nossa guilda.";
			close;
		} else if (hunterq == 7) {
			if (SkillPoint) {
				mes "[Caçadora Dejiko]";
				mes "Você não pode mudar de classe se você ainda possui pontos de habilidade não utilizados.";
				mes "Use os seus pontos de habilidade restantes antes de falar comigo.";
				close;
			} else if (!countitem(Penetration)) {
				mes "[Caçadora Dejiko]";
				mes "Você passou no teste de nosso líder?";
				mes "Onde então está o "+getitemname(Penetration)+"?";
				close;
			} else {
				mes "[Caçadora Dejiko]";
				mes "Nossa...?";
				mes "Você passou no teste?!";
				mes "Parabéns!!";
				next;
				mes "[Caçadora Dejiko]";
				mes "Pois bem, agora irei mudar sua classe para Caçador.";
				next;
				.@chararcherlv = JobLevel;
				jobchange(Job_Hunter);
				completequest(4013);
				callfunc("ClearJobQuest2nd",11);
				mes "[Caçadora Dejiko]";
				mes "Torne-se uma pessoa nobre e seja um digno representante da nossa guilda de Caçadores.";
				mes "Mostre seu amor pela natureza como Caçador.";
				next;
				mes "[Caçadora Dejiko]";
				mes "E também, aqui está um pequeno presente por todo o esforço que você teve.";
				if (.@chararcherlv == 50) {
					getitem(Hunter_Bow,1);
				} else {
					getitem(CrossBow,1);
				}
				close;
			}
		}
	} else if (BaseJob == Job_Hunter) {
		mes "[Caçadora Dejiko]";
		mes "Torne-se uma pessoa nobre e seja um digno representante da nossa guilda de Caçadores.";
		mes "Mostre seu amor pela natureza como Caçador.";
		next;
		mes "[Caçadora Dejiko]";
		mes "E também, aqui está um pequeno presente por todo o esforço que você teve.";
		close;
	} else {
		mes "[Caçadora Dejiko]";
		mes "Bem vind"+(Sex == SEX_MALE ? "o" : "a")+" à Guilda dos Caçadores.";
		mes "Este é o local onde arqueiros podem se tornar caçadores.";
		close;
	}
}

// ------------------------------------------------------------------
hu_in01,382,382,4	script	Caçador da Guilda#hunterq	4_M_JOB_HUNTER,{
	if (!hunterq || hunterq == 1) {
		if (BaseJob == Job_Archer) {
			mes "[Recepcionista da Guilda]";
			mes "Se você deseja mudar a sua classe para um caçador, você deve registrar-se primeiro com Dejiko.";
			close;
		} else if (BaseJob == Job_Hunter) {
			mes "[Caçador de Demônio]";
			mes "Torne-se uma pessoa nobre e seja um digno representante da nossa guilda de Caçadores.";
			mes "Mostre seu amor pela natureza como Caçador.";
			next;
			mes "[Caçador de Demônio]";
			mes "E também, aqui está um pequeno presente por todo o esforço que você teve.";
			close;
		} else {
			mes "[Recepcionista da Guilda]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o" : "a")+" à Guilda dos Caçadores.";
			mes "Este é o local onde arqueiros podem se tornar caçadores.";
			close;
		}
	} else if (hunterq == 2) {
		mes "[Caçadora da Guilda]";
		mes "Saudações.";
		mes "Eles me chamam... de ^660000O Caçador de Demônio^000000.";
		mes "Eu sou o encarregado pelas aplicações de classe.";
		mes "Seu nome é... "+strcharinfo(PC_NAME)+", correto?";
		next;
		mes "[Caçador de Demônio]";
		mes "Ok. Estes são os itens que você precisa para o teste.";
		mes "Como nós fornecemos todas as flechas que você irá utilizar para este teste.";
		mes "Precisamos que você colete os materiais para criá-las.";
		next;
		mes "[Caçador de Demônio]";
		mes "Você vê, estamos tendo alguns problemas financeiros.";
		mes "Vejamos, estamos escasso destes itens...";
		next;
		switch (rand(7)) {
			case 1: setarray  (.@htitm[0], 7030,5, 1019,5, 509, 3);  hunterq2 = 1; changequest(4001,4002); break;
			case 2: setarray  (.@htitm[0], 925, 3, 932, 5, 511, 3);  hunterq2 = 2; changequest(4001,4003); break;
			case 3: setarray  (.@htitm[0], 937, 3, 919, 3, 507, 5);  hunterq2 = 3; changequest(4001,4004); break;
			case 4: setarray  (.@htitm[0], 1021,3, 7032,3, 914, 10); hunterq2 = 4; changequest(4001,4005); break;
			case 5: setarray  (.@htitm[0], 935, 9, 955, 9, 508, 9);  hunterq2 = 5; changequest(4001,4006); break;
			case 6: setarray  (.@htitm[0], 913, 3, 938, 1, 948, 1);  hunterq2 = 6; changequest(4001,4007); break;
			default: setarray(.@htitm[0], 1027,2, 942, 1, 1026,1);  hunterq2 = 7; changequest(4001,4008); break;
		}
		hunterq = 3;
		mes "[Caçador de Demônio]";
		mes "Hum. ^660000"+.@htitm[1]+" "+getitemname(.@htitm[0])+"^000000.";
		mes "^660000"+.@htitm[3]+" "+getitemname(.@htitm[2])+"^000000.";
		mes "E ^660000"+.@htitm[5]+" "+getitemname(.@htitm[4])+"^000000.";
		next;
		mes "[Caçador de Demônio]";
		mes "Volte aqui quando você tiver tudo pronto.";
		close;
	} else if (hunterq == 3) {
		switch (hunterq2) {
			case 1: setarray  (.@htitm[0], 7030,5, 1019,5, 509, 3);  break;
			case 2: setarray  (.@htitm[0], 925, 3, 932, 5, 511, 3);  break;
			case 3: setarray  (.@htitm[0], 937, 3, 919, 3, 507, 5);  break;
			case 4: setarray  (.@htitm[0], 1021,3, 7032,3, 914, 10); break;
			case 5: setarray  (.@htitm[0], 935, 9, 955, 9, 508, 9);  break;
			case 6: setarray  (.@htitm[0], 913, 3, 938, 1, 948, 1);  break;
			default: setarray(.@htitm[0], 1027,2, 942, 1, 1026,1);  break;
		}
		if (countitem(.@htitm[0]) < .@htitm[1] && countitem(.@htitm[2]) < .@htitm[3] && countitem(.@htitm[4]) < .@htitm[5]) {
			mes "[Caçador de Demônio]";
			mes "Você não tem todos os materiais necessários...";
			next;
			mes "[Caçador de Demônio]";
			mes "Os itens que você precisa são";
			mes "^660000"+.@htitm[1]+" "+getitemname(.@htitm[0])+"^000000,";
			mes "^660000"+.@htitm[3]+" "+getitemname(.@htitm[2])+"^000000 e";
			mes "^660000"+.@htitm[5]+" "+getitemname(.@htitm[4])+"^000000.";
			mes "Volte quando você tiver reunido todos os itens.";
			close;
		} else {
			mes "[Caçador de Demônio]";
			mes "Você trouxe todos os materiais necessários...";
			if (questprogress(4002))      { changequest(4002,4009); hunterq3 = 1; }
			else if (questprogress(4003)) { changequest(4003,4009); hunterq3 = 1; }
			else if (questprogress(4004)) { changequest(4004,4009); hunterq3 = 1; }
			else if (questprogress(4005)) { changequest(4005,4009); hunterq3 = 1; }
			else if (questprogress(4006)) { changequest(4006,4010); hunterq3 = 2; }
			else if (questprogress(4007)) { changequest(4007,4010); hunterq3 = 2; }
			else if (questprogress(4008)) { changequest(4008,4010); hunterq3 = 2; }
			hunterq = 4;
			hunterq2 = 0;
			delitem(.@htitm[0],.@htitm[1]);
			delitem(.@htitm[2],.@htitm[3]);
			delitem(.@htitm[4],.@htitm[5]);
			next;
			mes "[Caçador de Demônio]";
			mes "Nosso líder viajou até o Palácio de Payon.";
			mes "Você deverá ir até lá para ter mais informações sobre seu próximo teste.";
			close;
		}
	} else if (hunterq == 4 || hunterq == 5) {
		mes "[Caçador de Demônio]";
		mes "Hum? Você não procurou pelo líder tanto no Palácio Central de Payon ou na Guilda dos Arqueiros?";
		mes "Ele deve estar em um desses dois lugares, então vá até lá e procure por ele.";
		close;
	} else if (hunterq == 6) {
		mes "[Caçador de Demônio]";
		mes "Você ainda tem assuntos inacabados com o líder de nossa guilda.";
		close;
	} else if (hunterq == 7) {
		mes "[Caçador de Demônio]";
		mes "Meus parabéns você completou o teste de nosso líder.";
		mes "Agora vá falar com Dejiko e não esqueça que você deverá apresentar o "+getitemname(Penetration)+" para ela.";
		close;
	}
}

// ------------------------------------------------------------------
payon_in03,131,7,3	script	Caçador#1_hunterq	1_M_ORIENT01,{
	if (!hunterq) {
		mes "[Caçador]";
		mes "Não posso ajudar, estou aqui para um negócio oficial e estou ocupado no momento.";
		mes "Com licença...";
		close;
	} else if (hunterq < 4) {
		mes "[Caçador]";
		mes "Hum...?";
		mes "Por que um arqueiro está me visitando?";
		next;
		mes "[Caçador]";
		mes "Eu não fui notificado sobre nada em particular da Guilda de Caçadores.";
		mes "Você não está tentando pular a parte do meio do teste de Caçador, está?";
		next;
		mes "[Caçador]";
		mes "Reuna os itens para o teste, e volte depois que você visitou a Guilda de Caçadores.";
		close;
	} else if (hunterq == 4) {
		if (atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),0)) != hunterq3) {
			mes "[Caçador]";
			mes "O que veio fazer aqui?";
			next;
			if (select("Estou aqui para o teste de Caçador","Nada, só estou olhando") == 1) {
				mes "[Caçador]";
				mes "Estranho não fui informado de nada.";
				mes "Talvez a pessoa certa não seja eu.";
				close;
			} else {
				mes "[Caçador]";
				mes "Com licença então, no momento estou muito ocupado.";
				close;
			}
		} else {
			cutin("job_huntermaster",2);
			mes "[Líder dos Caçadores]";
			mes "Você deve estar aqui para o teste de Caçador.";
			mes "Posso dar informações sobre o processo do teste.";
			mes "O que você deseja saber?";
			next;
			if (select("Sobre o teste","Comece teste") == 1) {
				mes "[Líder dos Caçadores]";
				mes "Você tem que caçar certos monstros com um nome específico.";
				mes "Você deve evitar todas as armadilhas enquanto você estiver lá.";
				next;
				mes "[Líder dos Caçadores]";
				mes "Dentro do limite de tempo, começando na direção das 6 horas do mapa.";
				mes "Você deve caçar os monstros com o nome \"^3355FFMostro Alvo^000000\".";
				mes "Depois então apertar o interruptor de fuga que aparecerá no centro do mapa.";
				next;
				mes "[Líder dos Caçadores]";
				mes "Se cair em uma armadilha, você terá que começar desde o início.";
				mes "Tudo isso deve ser feito em um prazo de 3 minutos.";
				next;
				mes "[Líder dos Caçadores]";
				mes "Isso é para testar sua capacidade de mover-se rapidamente e localizar alvos em diversas situações.";
				close2;
				cutin("",255);
				end;
			} else {
				if (questprogress(4009)) { changequest(4009,4011);}
				else if (questprogress(4010)) { changequest(4010,4011);}
				hunterq = 5;
				getitem(Silver_Arrow,200);
				mes "[Líder dos Caçadores]";
				mes "Certo lhe enviarei para o local do teste.";
				mes "Boa sorte.";
				next;
				mes "[Líder dos Caçadores]";
				mes "Tome isso pode ser útil para o teste.";
				close2;
				warp("job_hunte",176,22);
				savepoint("job_hunte",176,22);
				cutin("",255);
				end;
			}
		}
	} else if (hunterq == 5) {
		cutin("job_huntermaster",2);
		mes "[Líder dos Caçadores]";
		mes "O que houve, parece que facassou no teste?";
		next;
		if (select("Voltar para o teste","Ficar aqui") == 1) {
			mes "[Líder dos Caçadores]";
			mes "Boa sorte novamente.";
			mes "E lembre-se que deve caçar os \"^3355FFMostro Alvo^000000\" para completar o teste.";
			mes "Só então siga para o centro o mapa onde estará o interruptor de fuga.";
			close2;
			warp("job_hunte",176,22);
			savepoint("job_hunte",176,22);
			cutin("",255);
			end;
		} else {
			mes "[Líder dos Caçadores]";
			mes "Tudo bem volte quando estiver preparad"+(Sex == SEX_MALE ? "o" : "a")+".";
			close2;
			cutin("",255);
			end;
		}
	} else if (hunterq >= 6) {
		if (atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),0)) != hunterq3) {
			mes "[Caçador]";
			mes "O que veio fazer aqui?";
			mes "Por acaso está perdido?";
			close;
		} else {
			cutin("job_huntermaster",2);
			mes "[Líder dos Caçadores]";
			if (hunterq == 6) {
				mes "Enfim você retornou!";
				next;
				mes "[Líder dos Caçadores]";
				mes "Como foi o teste?";
				next;
				switch (select("Foi moleza","Muito difícil")) {
					case 1:
					mes "[Líder dos Caçadores]";
					mes "Sabia desde quando te vi, que você já possuia um espirito de caçador.";
					break;
					case 2:
					mes "[Líder dos Caçadores]";
					mes "Mas conseguiu superar-lo e concluir perfeitamente.";
					break;
				}
				next;
				mes "[Líder dos Caçadores]";
				mes "Pegue esse colar e leve-o até a guilda dos caçadores.";
				mes "Ele será aprova que você concluíu o teste.";
				getitem(Penetration,1);
				hunterq = 7;
				changequest(4012,4013);
				next;
				mes "[Líder dos Caçadores]";
				mes "Agora siga até a guilda para se tornar Caçador.";
				close2;
				cutin("",255);
				warp("hugel",208,223);
				end;
			} else {
				mes "[Líder dos Caçadores]";
				mes "O que?!";
				mes "Não deveria ter ido até a guilda dos caçadores?";
				close2;
				cutin("",255);
				warp("hugel",208,223);
				end;
			}
		}
	}
}
payon_in02,21,31,1	duplicate(Caçador#1_hunterq)	Caçador#2_hunterq	1_M_ORIENT01

// ------------------------------------------------------------------
job_hunte,178,32,1	script	Guia#hunterq	1_M_PAY_ELDER,{
	if (hunterq != 5) {
		mes "[Guia]";
		mes "Você não deveria está aqui.";
		close2;
		savepoint("payon",104,99);
		warp("payon",104,99);
		end;
	} else {
		mes "[Guia]";
		mes "Este é local do teste de Caçador.";
		mes "O teste começa quando você entra na sala ao lado.";
		next;
		switch (select("Informações","Recuperar HP/SP","Desistir do teste")) {
			case 1:
			mes "[Guia]";
			mes "Como explicado anteriormente, derrote 4 ou mais dos monstros nomeados ^3355FFMonstro Alvo^000000.";
			mes "Ao fazê-lo, um interruptor no centro do mapa aparecerá.";
			next;
			mes "[Guia]";
			mes "Quando destruir o interruptor, a saída irá aparecer na direção das 12 horas do mapa.";
			mes "Complete tudo dentro do tempo de 3 minutos e escape.";
			next;
			mes "[Guia]";
			mes "Se você desmaiar no meio, cair em uma armadilha, ou ultrapassar o limite de tempo, você vai falhar.";
			mes "Então você deve refazer o teste.";
			close;
			case 2:
			percentheal(100,100);
			close;
			case 3:
			mes "[Guia]";
			mes "Apenas vou lhe enviar para payon.";
			mes "Se quiser retornar até aqui, procure pelo Líder da Guilda.";
			close2;
			warp("payon",104,99);
			end;
		}
	}
}

// ------------------------------------------------------------------
job_hunte,178,38,1	script	Sala de Espera#hunterq	1_F_01,{
	end;

	OnInit:
	waitingroom("Sala de Espera", 10,strnpcinfo(NPC_NAME)+"::OnStartArena",1);
	enablewaitingroomevent;
	end;

	OnStartArena:
	warpwaitingpc(strnpcinfo(NPC_MAP),90,67);
	donpcevent("hunterengine#hunterq::OnEnable");
	disablewaitingroomevent;
	end;

	OnStart:
	enablewaitingroomevent;
	end;
}

// ------------------------------------------------------------------
job_hunte,1,1,1	script	hunterengine#hunterq	1_F_01,{
	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnEnable:
	donpcevent("Interruptor#hunterq::OnDisable");
	enablenpc(strnpcinfo(NPC_NAME));
	.hntMob = 6;
	initnpctimer;

	// Montros alvos
	monster(strnpcinfo(NPC_MAP),67,80,"Monstro Alvo",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),114,78,"Monstro Alvo",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),89,127,"Monstro Alvo",PORING,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),53,73,"Monstro Alvo",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),125,70,"Monstro Alvo",ARCHER_SKELETON,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),90,92,"Monstro Alvo",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	// Demais Monstros
	monster(strnpcinfo(NPC_MAP),85,100,"Monstro Albo",ARCHER_SKELETON,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),72,102,"Monstro Albo",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),108,103,"Monstro Albo",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),88,127,"Monstro Albo",PORING,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),125,69,"Monstro Albo",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),77,112,"Monstro Alboe",ARCHER_SKELETON,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),53,106,"Monstro Alboe",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),53,73,"Monstro Alboe",PORING,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),125,70,"Monstro Alboe",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),90,91,"Monstro Alboe",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),67,80,"Me mate!",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),77,112,"Me mate!",ARCHER_SKELETON,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),53,106,"Me mate!",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),53,73,"Me mate!",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),125,70,"Me mate!",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),90,91,"Me Ataque",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,100,"Me Ataque",PORING,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),72,102,"Me Ataque",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),108,103,"Me Ataque",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),77,112,"Me Ataque",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),112,139,"Binnie",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),112,139,"Darrel",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),112,139,"Rex",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),112,139,"Anselmo",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),90,91,"Anolian",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),53,73,"Monstro Exemplo",PORING,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),53,106,"Eu Não",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),77,112,"Ajude Me",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),72,102,"Não me Ataque",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),108,103,"Me Mate Rápido",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	end;

	OnMyMobDead:
	--.hntMob;
	if (.hntMob < 3) {
		mapannounce(strnpcinfo(NPC_MAP),"Ok, bom trabalho ... Agora, encontre o interruptor no centro do mapa! Tenha cuidado com as armadilhas!",bc_map);
		donpcevent("Interruptor#hunterq::OnEnable");
		donpcevent(strnpcinfo(NPC_NAME)+"::OnClearMob");
	} else {
		mapannounce(strnpcinfo(NPC_MAP),"Muito bem continue...",bc_map);
	}
	end;

	OnMyMobDead2:
	mapannounce(strnpcinfo(NPC_MAP),"!! Você cometeu um erro... Tente novamente.",bc_map);
	warp("job_hunte",176,22);
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	//donpcevent "hunterengine#hunterq::OnReset";
	donpcevent("Sala de Espera#hunterq::OnStart");
	end;

	OnClearMob:
	killmonsterall strnpcinfo(NPC_MAP);
	end;

	OnDisable:
	stopnpctimer;
	killmonsterall strnpcinfo(NPC_MAP);
	disablenpc strnpcinfo(NPC_NAME);
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"O teste deve começar agora.",bc_map);
	end;

	OnTimer3000:
	mapannounce(strnpcinfo(NPC_MAP),"Como mencionado antes, você só deve caçar os monstros marcados com 'Monstro Alvo'.",bc_map);
	end;

	OnTimer5000:
	mapannounce(strnpcinfo(NPC_MAP),"***** Tenha cuidado com as armadilhas enquanto caça. *****",bc_map);
	end;

	OnTimer7000:
	mapannounce(strnpcinfo(NPC_MAP),"Depois de caçar 4 'Monstro Alvo' o interruptor no centro começará a operar.",bc_map);
	end;

	OnTimer9000:
	mapannounce(strnpcinfo(NPC_MAP),"Quando você ativar a opção de fuga, sairá da área de teste através do portal de teleporte na direção das 12 horas do relógio.",bc_map);
	end;

	OnTimer11000:
	mapannounce(strnpcinfo(NPC_MAP),"Tudo deve ser concluído no prazo de 3 minutos.",bc_map);
	end;

	OnTimer13000:
	mapannounce(strnpcinfo(NPC_MAP),"Você terá 3 minutos a partir de agora. Você será notificado após cada minuto passa.",bc_map);
	end;

	OnTimer14000:
	mapannounce(strnpcinfo(NPC_MAP)," ****** 3 minutos restantes. ****** ",bc_map);
	end;

	OnTimer74000:
	mapannounce(strnpcinfo(NPC_MAP)," ****** 2 minutos restantes. ****** ",bc_map);
	end;

	OnTimer134000:
	mapannounce(strnpcinfo(NPC_MAP)," ****** 1 minutos restantes. ****** ",bc_map);
	end;

	OnTimer164000:
	mapannounce(strnpcinfo(NPC_MAP)," ****** 30 segundos restantes. ****** ",bc_map);
	end;

	OnTimer187000:
	mapannounce(strnpcinfo(NPC_MAP)," O teste termina em 5 segundos...",bc_map);
	end;

	OnTimer188000:
	mapannounce(strnpcinfo(NPC_MAP)," O teste termina em 4 segundos...",bc_map);
	end;

	OnTimer189000:
	mapannounce(strnpcinfo(NPC_MAP)," Fim do teste em 3 segundos...",bc_map);
	end;

	OnTimer191000:
	mapannounce(strnpcinfo(NPC_MAP)," Fim do teste em 2 segundos...",bc_map);
	end;

	OnTimer192000:
	mapannounce(strnpcinfo(NPC_MAP)," Fim do teste em 1 segundo.",bc_map);
	end;

	OnTimer193000:
	mapannounce(strnpcinfo(NPC_MAP)," Tempo esgotado. Por favor, tente novamente.",bc_map);
	end;

	OnTimer194000:
	areawarp("job_hunte",50,64, 129,143,"job_hunte",176,22);
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	donpcevent("Interruptor#hunterq::OnDisable");
	donpcevent("Sala de Espera#hunterq::OnStart");
	end;

}

// ------------------------------------------------------------------
job_hunte,93,101,1	script	Interruptor#hunterq	1_SHADOW_NPC,1,1,{
	OnTouch:
	mes "^3355FFExistem 2 botões no interruptor.^000000";
	next;
	if (select("Escapar","Cancelar") == 1) {
		close2;
		mapannounce(strnpcinfo(NPC_MAP),"Ativação do portal de escape!!",bc_map);
		disablenpc(strnpcinfo(NPC_NAME));
		enablenpc("exithnt#hunterqtest");
		end;
	} else {
		close2;
		mapannounce(strnpcinfo(NPC_MAP),"A operação foi cancelada!!",bc_map);
		end;
	}

	OnDisable:
	disablenpc("exithnt#hunterqtest");
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnEnable:
	enablenpc(strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
job_hunte,89,139,0	script	exithnt#hunterqtest	WARPNPC,2,2,{
	OnInit:
	disablenpc("exithnt#hunterqtest");
	end;

	OnTouch:
	donpcevent("hunterengine#hunterq::OnDisable");
	donpcevent("Sala de Espera#hunterq::OnStart");
	hunterq = 6;
	changequest(4011,4012);
	savepoint("payon",104,99);
	switch (hunterq3) {
		case 1: warp("payon_in03",128,7); end;
		case 2: warp("payon_in02",21,27); end;
	}
}

// ------------------------------------------------------------------
job_hunte,52,140,0	script	HntTrap_1_1::HntTrap	FAKE_NPC,0,1,{
	OnTouch:
	mapannounce(strnpcinfo(NPC_MAP),"!! Você cometeu um erro... Tente novamente.",bc_map);
	warp("job_hunte",176,22);
	donpcevent("hunterengine#hunterq::OnDisable");
	donpcevent("Sala de Espera#hunterq::OnStart");
	end;
}

job_hunte,53,140,0	duplicate(HntTrap)	HntTrap_1_2	FAKE_NPC,0,1
job_hunte,54,141,0	duplicate(HntTrap)	HntTrap_1_3	FAKE_NPC,0,0
job_hunte,55,141,0	duplicate(HntTrap)	HntTrap_1_4	FAKE_NPC,0,0
job_hunte,55,140,0	duplicate(HntTrap)	HntTrap_1_5	FAKE_NPC,0,0
job_hunte,54,140,0	duplicate(HntTrap)	HntTrap_1_6	FAKE_NPC,0,0
job_hunte,52,138,0	duplicate(HntTrap)	HntTrap_1_7	FAKE_NPC,0,0
job_hunte,53,138,0	duplicate(HntTrap)	HntTrap_1_8	FAKE_NPC,0,0
job_hunte,62,140,0	duplicate(HntTrap)	HntTrap_2_1	FAKE_NPC,0,1
job_hunte,63,140,0	duplicate(HntTrap)	HntTrap_2_2	FAKE_NPC,0,1
job_hunte,64,140,0	duplicate(HntTrap)	HntTrap_2_3	FAKE_NPC,0,0
job_hunte,64,141,0	duplicate(HntTrap)	HntTrap_2_4	FAKE_NPC,0,0
job_hunte,65,140,0	duplicate(HntTrap)	HntTrap_2_5	FAKE_NPC,0,0
job_hunte,65,141,0	duplicate(HntTrap)	HntTrap_2_6	FAKE_NPC,0,0
job_hunte,62,138,0	duplicate(HntTrap)	HntTrap_2_7	FAKE_NPC,0,0
job_hunte,63,138,0	duplicate(HntTrap)	HntTrap_2_8	FAKE_NPC,0,0
job_hunte,72,140,0	duplicate(HntTrap)	HntTrap_3_1	FAKE_NPC,0,1
job_hunte,73,140,0	duplicate(HntTrap)	HntTrap_3_2	FAKE_NPC,0,1
job_hunte,72,138,0	duplicate(HntTrap)	HntTrap_3_3	FAKE_NPC,0,0
job_hunte,72,138,0	duplicate(HntTrap)	HntTrap_3_4	FAKE_NPC,0,0
job_hunte,78,140,0	duplicate(HntTrap)	HntTrap_4_1	FAKE_NPC,0,0
job_hunte,78,141,0	duplicate(HntTrap)	HntTrap_4_2	FAKE_NPC,0,0
job_hunte,79,140,0	duplicate(HntTrap)	HntTrap_4_3	FAKE_NPC,0,0
job_hunte,79,141,0	duplicate(HntTrap)	HntTrap_4_4	FAKE_NPC,0,0
job_hunte,82,138,0	duplicate(HntTrap)	HntTrap_5_1	FAKE_NPC,0,0
job_hunte,82,139,0	duplicate(HntTrap)	HntTrap_5_2	FAKE_NPC,0,0
job_hunte,83,138,0	duplicate(HntTrap)	HntTrap_5_3	FAKE_NPC,0,0
job_hunte,83,139,0	duplicate(HntTrap)	HntTrap_5_4	FAKE_NPC,0,0
job_hunte,99,138,0	duplicate(HntTrap)	HntTrap_6_1	FAKE_NPC,1,0
job_hunte,99,139,0	duplicate(HntTrap)	HntTrap_6_2	FAKE_NPC,1,0
job_hunte,101,138,0	duplicate(HntTrap)	HntTrap_6_3	FAKE_NPC,0,0
job_hunte,101,139,0	duplicate(HntTrap)	HntTrap_6_4	FAKE_NPC,0,0
job_hunte,106,140,0	duplicate(HntTrap)	HntTrap_7_1	FAKE_NPC,0,1
job_hunte,107,140,0	duplicate(HntTrap)	HntTrap_7_2	FAKE_NPC,0,1
job_hunte,106,138,0	duplicate(HntTrap)	HntTrap_7_3	FAKE_NPC,0,0
job_hunte,107,138,0	duplicate(HntTrap)	HntTrap_7_4	FAKE_NPC,0,0
job_hunte,112,140,0	duplicate(HntTrap)	HntTrap_8_1	FAKE_NPC,0,0
job_hunte,112,141,0	duplicate(HntTrap)	HntTrap_8_2	FAKE_NPC,0,0
job_hunte,113,140,0	duplicate(HntTrap)	HntTrap_8_3	FAKE_NPC,0,0
job_hunte,113,141,0	duplicate(HntTrap)	HntTrap_8_4	FAKE_NPC,0,0
job_hunte,116,140,0	duplicate(HntTrap)	HntTrap_9_1	FAKE_NPC,0,0
job_hunte,116,141,0	duplicate(HntTrap)	HntTrap_9_2	FAKE_NPC,0,0
job_hunte,117,140,0	duplicate(HntTrap)	HntTrap_9_3	FAKE_NPC,0,0
job_hunte,117,141,0	duplicate(HntTrap)	HntTrap_9_4	FAKE_NPC,0,0
job_hunte,120,138,0	duplicate(HntTrap)	HntTrap_10_1	FAKE_NPC,0,0
job_hunte,120,139,0	duplicate(HntTrap)	HntTrap_10_2	FAKE_NPC,0,0
job_hunte,121,138,0	duplicate(HntTrap)	HntTrap_10_3	FAKE_NPC,0,0
job_hunte,121,139,0	duplicate(HntTrap)	HntTrap_10_4	FAKE_NPC,0,0
job_hunte,126,139,0	duplicate(HntTrap)	HntTrap_11_1	FAKE_NPC,0,2
job_hunte,127,139,0	duplicate(HntTrap)	HntTrap_11_2	FAKE_NPC,0,2
job_hunte,126,136,0	duplicate(HntTrap)	HntTrap_11_3	FAKE_NPC,0,0
job_hunte,127,136,0	duplicate(HntTrap)	HntTrap_11_4	FAKE_NPC,0,0
job_hunte,52,134,0	duplicate(HntTrap)	HntTrap_12_1	FAKE_NPC,0,1
job_hunte,53,134,0	duplicate(HntTrap)	HntTrap_12_2	FAKE_NPC,0,1
job_hunte,52,132,0	duplicate(HntTrap)	HntTrap_12_3	FAKE_NPC,0,0
job_hunte,53,132,0	duplicate(HntTrap)	HntTrap_12_4	FAKE_NPC,0,0
job_hunte,124,130,0	duplicate(HntTrap)	HntTrap_13_1	FAKE_NPC,0,0
job_hunte,124,131,0	duplicate(HntTrap)	HntTrap_13_2	FAKE_NPC,0,0
job_hunte,125,130,0	duplicate(HntTrap)	HntTrap_13_3	FAKE_NPC,0,0
job_hunte,125,131,0	duplicate(HntTrap)	HntTrap_13_4	FAKE_NPC,0,0
job_hunte,64,128,0	duplicate(HntTrap)	HntTrap_14_1	FAKE_NPC,0,0
job_hunte,64,129,0	duplicate(HntTrap)	HntTrap_14_2	FAKE_NPC,0,0
job_hunte,65,128,0	duplicate(HntTrap)	HntTrap_14_3	FAKE_NPC,0,0
job_hunte,65,129,0	duplicate(HntTrap)	HntTrap_14_4	FAKE_NPC,0,0
job_hunte,68,126,0	duplicate(HntTrap)	HntTrap_15_1	FAKE_NPC,0,0
job_hunte,68,127,0	duplicate(HntTrap)	HntTrap_15_2	FAKE_NPC,0,0
job_hunte,69,126,0	duplicate(HntTrap)	HntTrap_15_3	FAKE_NPC,0,0
job_hunte,69,127,0	duplicate(HntTrap)	HntTrap_15_4	FAKE_NPC,0,0
job_hunte,75,128,0	duplicate(HntTrap)	HntTrap_16_1	FAKE_NPC,1,0
job_hunte,75,129,0	duplicate(HntTrap)	HntTrap_16_2	FAKE_NPC,1,0
job_hunte,77,128,0	duplicate(HntTrap)	HntTrap_16_3	FAKE_NPC,0,0
job_hunte,77,129,0	duplicate(HntTrap)	HntTrap_16_4	FAKE_NPC,0,0
job_hunte,82,126,0	duplicate(HntTrap)	HntTrap_17_1	FAKE_NPC,0,0
job_hunte,82,127,0	duplicate(HntTrap)	HntTrap_17_2	FAKE_NPC,0,0
job_hunte,83,126,0	duplicate(HntTrap)	HntTrap_17_3	FAKE_NPC,0,0
job_hunte,83,127,0	duplicate(HntTrap)	HntTrap_17_4	FAKE_NPC,0,0
job_hunte,96,128,0	duplicate(HntTrap)	HntTrap_18_1	FAKE_NPC,0,0
job_hunte,96,129,0	duplicate(HntTrap)	HntTrap_18_2	FAKE_NPC,0,0
job_hunte,97,128,0	duplicate(HntTrap)	HntTrap_18_3	FAKE_NPC,0,0
job_hunte,97,129,0	duplicate(HntTrap)	HntTrap_18_4	FAKE_NPC,0,0
job_hunte,100,126,0	duplicate(HntTrap)	HntTrap_19_1	FAKE_NPC,0,0
job_hunte,100,127,0	duplicate(HntTrap)	HntTrap_19_2	FAKE_NPC,0,0
job_hunte,101,126,0	duplicate(HntTrap)	HntTrap_19_3	FAKE_NPC,0,0
job_hunte,101,127,0	duplicate(HntTrap)	HntTrap_19_4	FAKE_NPC,0,0
job_hunte,106,128,0	duplicate(HntTrap)	HntTrap_20_1	FAKE_NPC,0,0
job_hunte,106,129,0	duplicate(HntTrap)	HntTrap_20_2	FAKE_NPC,0,0
job_hunte,107,128,0	duplicate(HntTrap)	HntTrap_20_3	FAKE_NPC,0,0
job_hunte,107,129,0	duplicate(HntTrap)	HntTrap_20_4	FAKE_NPC,0,0
job_hunte,112,126,0	duplicate(HntTrap)	HntTrap_21_1	FAKE_NPC,0,0
job_hunte,112,127,0	duplicate(HntTrap)	HntTrap_21_2	FAKE_NPC,0,0
job_hunte,113,126,0	duplicate(HntTrap)	HntTrap_21_3	FAKE_NPC,0,0
job_hunte,113,127,0	duplicate(HntTrap)	HntTrap_21_4	FAKE_NPC,0,0
job_hunte,126,126,0	duplicate(HntTrap)	HntTrap_22_1	FAKE_NPC,0,0
job_hunte,126,127,0	duplicate(HntTrap)	HntTrap_22_2	FAKE_NPC,0,0
job_hunte,127,126,0	duplicate(HntTrap)	HntTrap_22_3	FAKE_NPC,0,0
job_hunte,127,127,0	duplicate(HntTrap)	HntTrap_22_4	FAKE_NPC,0,0
job_hunte,52,122,0	duplicate(HntTrap)	HntTrap_23_1	FAKE_NPC,0,1
job_hunte,52,122,0	duplicate(HntTrap)	HntTrap_23_2	FAKE_NPC,0,1
job_hunte,53,120,0	duplicate(HntTrap)	HntTrap_23_3	FAKE_NPC,1,0
job_hunte,54,121,0	duplicate(HntTrap)	HntTrap_23_4	FAKE_NPC,0,0
job_hunte,55,121,0	duplicate(HntTrap)	HntTrap_23_5	FAKE_NPC,0,0
job_hunte,55,120,0	duplicate(HntTrap)	HntTrap_23_6	FAKE_NPC,0,0
job_hunte,66,120,0	duplicate(HntTrap)	HntTrap_24_1	FAKE_NPC,0,0
job_hunte,66,121,0	duplicate(HntTrap)	HntTrap_24_2	FAKE_NPC,0,0
job_hunte,67,120,0	duplicate(HntTrap)	HntTrap_24_3	FAKE_NPC,0,0
job_hunte,67,121,0	duplicate(HntTrap)	HntTrap_24_4	FAKE_NPC,0,0
job_hunte,114,118,0	duplicate(HntTrap)	HntTrap_25_1	FAKE_NPC,0,0
job_hunte,114,119,0	duplicate(HntTrap)	HntTrap_25_2	FAKE_NPC,0,0
job_hunte,115,118,0	duplicate(HntTrap)	HntTrap_25_3	FAKE_NPC,0,0
job_hunte,115,119,0	duplicate(HntTrap)	HntTrap_25_4	FAKE_NPC,0,0
job_hunte,124,120,0	duplicate(HntTrap)	HntTrap_26_1	FAKE_NPC,0,1
job_hunte,125,120,0	duplicate(HntTrap)	HntTrap_26_2	FAKE_NPC,0,1
job_hunte,124,118,0	duplicate(HntTrap)	HntTrap_26_3	FAKE_NPC,0,0
job_hunte,125,118,0	duplicate(HntTrap)	HntTrap_26_4	FAKE_NPC,0,0
job_hunte,66,116,0	duplicate(HntTrap)	HntTrap_27_1	FAKE_NPC,0,0
job_hunte,66,117,0	duplicate(HntTrap)	HntTrap_27_2	FAKE_NPC,0,0
job_hunte,67,116,0	duplicate(HntTrap)	HntTrap_27_3	FAKE_NPC,0,0
job_hunte,67,117,0	duplicate(HntTrap)	HntTrap_27_4	FAKE_NPC,0,0
job_hunte,76,114,0	duplicate(HntTrap)	HntTrap_28_1	FAKE_NPC,0,0
job_hunte,76,115,0	duplicate(HntTrap)	HntTrap_28_2	FAKE_NPC,0,0
job_hunte,77,114,0	duplicate(HntTrap)	HntTrap_28_3	FAKE_NPC,0,0
job_hunte,77,115,0	duplicate(HntTrap)	HntTrap_28_4	FAKE_NPC,0,0
job_hunte,82,116,0	duplicate(HntTrap)	HntTrap_29_1	FAKE_NPC,0,0
job_hunte,82,117,0	duplicate(HntTrap)	HntTrap_29_2	FAKE_NPC,0,0
job_hunte,83,116,0	duplicate(HntTrap)	HntTrap_29_3	FAKE_NPC,0,0
job_hunte,83,117,0	duplicate(HntTrap)	HntTrap_29_4	FAKE_NPC,0,0
job_hunte,86,114,0	duplicate(HntTrap)	HntTrap_30_1	FAKE_NPC,0,0
job_hunte,86,115,0	duplicate(HntTrap)	HntTrap_30_2	FAKE_NPC,0,0
job_hunte,87,114,0	duplicate(HntTrap)	HntTrap_30_3	FAKE_NPC,0,0
job_hunte,87,115,0	duplicate(HntTrap)	HntTrap_30_4	FAKE_NPC,0,0
job_hunte,92,115,0	duplicate(HntTrap)	HntTrap_31_1	FAKE_NPC,1,0
job_hunte,92,114,0	duplicate(HntTrap)	HntTrap_31_2	FAKE_NPC,1,0
job_hunte,90,115,0	duplicate(HntTrap)	HntTrap_31_3	FAKE_NPC,0,0
job_hunte,102,116,0	duplicate(HntTrap)	HntTrap_32_1	FAKE_NPC,0,0
job_hunte,102,117,0	duplicate(HntTrap)	HntTrap_32_2	FAKE_NPC,0,0
job_hunte,103,116,0	duplicate(HntTrap)	HntTrap_32_3	FAKE_NPC,0,0
job_hunte,103,117,0	duplicate(HntTrap)	HntTrap_32_4	FAKE_NPC,0,0
job_hunte,114,114,0	duplicate(HntTrap)	HntTrap_33_1	FAKE_NPC,0,0
job_hunte,114,115,0	duplicate(HntTrap)	HntTrap_33_2	FAKE_NPC,0,0
job_hunte,115,114,0	duplicate(HntTrap)	HntTrap_33_3	FAKE_NPC,0,0
job_hunte,115,115,0	duplicate(HntTrap)	HntTrap_33_4	FAKE_NPC,0,0
job_hunte,54,110,0	duplicate(HntTrap)	HntTrap_34_1	FAKE_NPC,0,1
job_hunte,55,110,0	duplicate(HntTrap)	HntTrap_34_2	FAKE_NPC,0,1
job_hunte,54,108,0	duplicate(HntTrap)	HntTrap_34_3	FAKE_NPC,0,0
job_hunte,55,108,0	duplicate(HntTrap)	HntTrap_34_4	FAKE_NPC,0,0
job_hunte,64,112,0	duplicate(HntTrap)	HntTrap_35_1	FAKE_NPC,0,0
job_hunte,64,113,0	duplicate(HntTrap)	HntTrap_35_2	FAKE_NPC,0,0
job_hunte,65,112,0	duplicate(HntTrap)	HntTrap_35_3	FAKE_NPC,0,0
job_hunte,65,113,0	duplicate(HntTrap)	HntTrap_35_4	FAKE_NPC,0,0
job_hunte,80,110,0	duplicate(HntTrap)	HntTrap_36_1	FAKE_NPC,0,0
job_hunte,80,111,0	duplicate(HntTrap)	HntTrap_36_2	FAKE_NPC,0,0
job_hunte,81,110,0	duplicate(HntTrap)	HntTrap_36_3	FAKE_NPC,0,0
job_hunte,81,111,0	duplicate(HntTrap)	HntTrap_36_4	FAKE_NPC,0,0
job_hunte,90,108,0	duplicate(HntTrap)	HntTrap_37_1	FAKE_NPC,0,6
job_hunte,91,108,0	duplicate(HntTrap)	HntTrap_37_2	FAKE_NPC,0,5
job_hunte,91,102,0	duplicate(HntTrap)	HntTrap_37_3	FAKE_NPC,0,0
job_hunte,98,109,0	duplicate(HntTrap)	HntTrap_38_1	FAKE_NPC,0,2
job_hunte,99,109,0	duplicate(HntTrap)	HntTrap_38_2	FAKE_NPC,0,2
job_hunte,103,109,0	duplicate(HntTrap)	HntTrap_38_3	FAKE_NPC,3,0
job_hunte,103,108,0	duplicate(HntTrap)	HntTrap_38_4	FAKE_NPC,3,0
job_hunte,97,106,0	duplicate(HntTrap)	HntTrap_39_1	FAKE_NPC,2,0
job_hunte,96,107,0	duplicate(HntTrap)	HntTrap_39_2	FAKE_NPC,1,0
job_hunte,94,108,0	duplicate(HntTrap)	HntTrap_39_3	FAKE_NPC,0,1
job_hunte,95,109,0	duplicate(HntTrap)	HntTrap_39_4	FAKE_NPC,0,0
job_hunte,95,108,0	duplicate(HntTrap)	HntTrap_40_1	FAKE_NPC,0,0
job_hunte,94,106,0	duplicate(HntTrap)	HntTrap_40_2	FAKE_NPC,0,0
job_hunte,96,102,0	duplicate(HntTrap)	HntTrap_40_3	FAKE_NPC,0,3
job_hunte,97,102,0	duplicate(HntTrap)	HntTrap_40_4	FAKE_NPC,0,3
job_hunte,95,98,0	duplicate(HntTrap)	HntTrap_41_1	FAKE_NPC,2,0
job_hunte,94,99,0	duplicate(HntTrap)	HntTrap_42_1	FAKE_NPC,1,0
job_hunte,92,98,0	duplicate(HntTrap)	HntTrap_43_1	FAKE_NPC,0,0
job_hunte,112,110,0	duplicate(HntTrap)	HntTrap_44_1	FAKE_NPC,0,0
job_hunte,112,111,0	duplicate(HntTrap)	HntTrap_44_2	FAKE_NPC,0,0
job_hunte,113,110,0	duplicate(HntTrap)	HntTrap_44_3	FAKE_NPC,0,0
job_hunte,113,111,0	duplicate(HntTrap)	HntTrap_44_4	FAKE_NPC,0,0
job_hunte,126,108,0	duplicate(HntTrap)	HntTrap_45_1	FAKE_NPC,0,1
job_hunte,127,108,0	duplicate(HntTrap)	HntTrap_45_2	FAKE_NPC,0,1
job_hunte,126,106,0	duplicate(HntTrap)	HntTrap_45_3	FAKE_NPC,0,0
job_hunte,126,106,0	duplicate(HntTrap)	HntTrap_45_4	FAKE_NPC,0,0
job_hunte,53,102,0	duplicate(HntTrap)	HntTrap_46_1	FAKE_NPC,1,1
job_hunte,55,102,0	duplicate(HntTrap)	HntTrap_46_2	FAKE_NPC,0,1
job_hunte,53,100,0	duplicate(HntTrap)	HntTrap_46_3	FAKE_NPC,1,0
job_hunte,55,100,0	duplicate(HntTrap)	HntTrap_46_4	FAKE_NPC,0,0
job_hunte,64,106,0	duplicate(HntTrap)	HntTrap_47_1	FAKE_NPC,0,0
job_hunte,64,107,0	duplicate(HntTrap)	HntTrap_47_2	FAKE_NPC,0,0
job_hunte,65,106,0	duplicate(HntTrap)	HntTrap_47_3	FAKE_NPC,0,0
job_hunte,65,107,0	duplicate(HntTrap)	HntTrap_47_4	FAKE_NPC,0,0
job_hunte,66,100,0	duplicate(HntTrap)	HntTrap_48_1	FAKE_NPC,0,0
job_hunte,66,101,0	duplicate(HntTrap)	HntTrap_48_2	FAKE_NPC,0,0
job_hunte,67,100,0	duplicate(HntTrap)	HntTrap_48_3	FAKE_NPC,0,0
job_hunte,67,101,0	duplicate(HntTrap)	HntTrap_48_4	FAKE_NPC,0,0
job_hunte,86,106,0	duplicate(HntTrap)	HntTrap_49_1	FAKE_NPC,0,1
job_hunte,87,106,0	duplicate(HntTrap)	HntTrap_49_2	FAKE_NPC,0,1
job_hunte,82,104,0	duplicate(HntTrap)	HntTrap_49_3	FAKE_NPC,5,0
job_hunte,81,105,0	duplicate(HntTrap)	HntTrap_49_4	FAKE_NPC,4,0
job_hunte,76,105,0	duplicate(HntTrap)	HntTrap_50_1	FAKE_NPC,0,0
job_hunte,76,104,0	duplicate(HntTrap)	HntTrap_50_2	FAKE_NPC,0,0
job_hunte,78,101,0	duplicate(HntTrap)	HntTrap_50_3	FAKE_NPC,0,2
job_hunte,79,101,0	duplicate(HntTrap)	HntTrap_50_4	FAKE_NPC,0,2
job_hunte,76,99,0	duplicate(HntTrap)	HntTrap_51_1	FAKE_NPC,1,0
job_hunte,77,98,0	duplicate(HntTrap)	HntTrap_51_2	FAKE_NPC,2,0
job_hunte,74,99,0	duplicate(HntTrap)	HntTrap_51_3	FAKE_NPC,0,0
job_hunte,74,98,0	duplicate(HntTrap)	HntTrap_51_4	FAKE_NPC,0,0
job_hunte,82,100,0	duplicate(HntTrap)	HntTrap_53_1	FAKE_NPC,0,0
job_hunte,82,101,0	duplicate(HntTrap)	HntTrap_53_2	FAKE_NPC,0,0
job_hunte,83,100,0	duplicate(HntTrap)	HntTrap_53_3	FAKE_NPC,0,0
job_hunte,83,101,0	duplicate(HntTrap)	HntTrap_53_4	FAKE_NPC,0,0
job_hunte,106,104,0	duplicate(HntTrap)	HntTrap_54_1	FAKE_NPC,0,0
job_hunte,106,105,0	duplicate(HntTrap)	HntTrap_54_2	FAKE_NPC,0,0
job_hunte,107,104,0	duplicate(HntTrap)	HntTrap_54_3	FAKE_NPC,0,0
job_hunte,107,105,0	duplicate(HntTrap)	HntTrap_54_4	FAKE_NPC,0,0
job_hunte,112,104,0	duplicate(HntTrap)	HntTrap_55_1	FAKE_NPC,0,1
job_hunte,113,104,0	duplicate(HntTrap)	HntTrap_55_2	FAKE_NPC,0,1
job_hunte,112,102,0	duplicate(HntTrap)	HntTrap_55_3	FAKE_NPC,0,0
job_hunte,113,102,0	duplicate(HntTrap)	HntTrap_55_4	FAKE_NPC,0,0
job_hunte,54,92,0	duplicate(HntTrap)	HntTrap_56_1	FAKE_NPC,0,0
job_hunte,54,93,0	duplicate(HntTrap)	HntTrap_56_2	FAKE_NPC,0,0
job_hunte,55,92,0	duplicate(HntTrap)	HntTrap_56_3	FAKE_NPC,0,0
job_hunte,55,93,0	duplicate(HntTrap)	HntTrap_56_4	FAKE_NPC,0,0
job_hunte,52,90,0	duplicate(HntTrap)	HntTrap_56_5	FAKE_NPC,0,0
job_hunte,52,91,0	duplicate(HntTrap)	HntTrap_56_6	FAKE_NPC,0,0
job_hunte,53,90,0	duplicate(HntTrap)	HntTrap_56_7	FAKE_NPC,0,0
job_hunte,53,91,0	duplicate(HntTrap)	HntTrap_56_8	FAKE_NPC,0,0
job_hunte,64,92,0	duplicate(HntTrap)	HntTrap_57_1	FAKE_NPC,0,0
job_hunte,64,93,0	duplicate(HntTrap)	HntTrap_57_2	FAKE_NPC,0,0
job_hunte,65,92,0	duplicate(HntTrap)	HntTrap_57_3	FAKE_NPC,0,0

// ------------------------------------------------------------------
job_hunte,65,93,0	script	HntTrap_57_4::HntTrap2	FAKE_NPC,{
	OnTouch:
	mapannounce(strnpcinfo(NPC_MAP),"!! Você cometeu um erro... Tente novamente.",bc_map);
	warp("job_hunte",176,22);
	donpcevent("hunterengine#hunterq::OnDisable");
	donpcevent("Sala de Espera#hunterq::OnStart");
	end;
}

job_hunte,76,94,0	duplicate(HntTrap2)	HntTrap_58_1	FAKE_NPC,0,0
job_hunte,76,95,0	duplicate(HntTrap2)	HntTrap_58_2	FAKE_NPC,0,0
job_hunte,77,94,0	duplicate(HntTrap2)	HntTrap_58_3	FAKE_NPC,0,0
job_hunte,77,95,0	duplicate(HntTrap2)	HntTrap_58_4	FAKE_NPC,0,0
job_hunte,78,92,0	duplicate(HntTrap2)	HntTrap_59_1	FAKE_NPC,0,0
job_hunte,78,93,0	duplicate(HntTrap2)	HntTrap_59_2	FAKE_NPC,0,0
job_hunte,79,92,0	duplicate(HntTrap2)	HntTrap_59_3	FAKE_NPC,0,0
job_hunte,79,93,0	duplicate(HntTrap2)	HntTrap_59_4	FAKE_NPC,0,0
job_hunte,86,92,0	duplicate(HntTrap2)	HntTrap_60_1	FAKE_NPC,0,0
job_hunte,86,93,0	duplicate(HntTrap2)	HntTrap_60_2	FAKE_NPC,0,0
job_hunte,87,92,0	duplicate(HntTrap2)	HntTrap_60_3	FAKE_NPC,0,0
job_hunte,87,93,0	duplicate(HntTrap2)	HntTrap_60_4	FAKE_NPC,0,0
job_hunte,90,96,0	duplicate(HntTrap2)	HntTrap_61_1	FAKE_NPC,0,0
job_hunte,90,97,0	duplicate(HntTrap2)	HntTrap_61_2	FAKE_NPC,0,0
job_hunte,91,96,0	duplicate(HntTrap2)	HntTrap_61_3	FAKE_NPC,0,0
job_hunte,91,97,0	duplicate(HntTrap2)	HntTrap_61_4	FAKE_NPC,0,0
job_hunte,99,95,0	duplicate(HntTrap2)	HntTrap_62_1	FAKE_NPC,1,0
job_hunte,99,94,0	duplicate(HntTrap2)	HntTrap_62_2	FAKE_NPC,1,0
job_hunte,101,94,0	duplicate(HntTrap2)	HntTrap_62_3	FAKE_NPC,0,1
job_hunte,100,93,0	duplicate(HntTrap2)	HntTrap_62_4	FAKE_NPC,0,0
job_hunte,100,92,0	duplicate(HntTrap2)	HntTrap_63_1	FAKE_NPC,0,0
job_hunte,101,92,0	duplicate(HntTrap2)	HntTrap_63_2	FAKE_NPC,0,0
job_hunte,102,98,0	duplicate(HntTrap2)	HntTrap_64_1	FAKE_NPC,0,0
job_hunte,102,99,0	duplicate(HntTrap2)	HntTrap_64_2	FAKE_NPC,0,0
job_hunte,103,98,0	duplicate(HntTrap2)	HntTrap_64_3	FAKE_NPC,0,0
job_hunte,103,99,0	duplicate(HntTrap2)	HntTrap_64_4	FAKE_NPC,0,0
job_hunte,102,90,0	duplicate(HntTrap2)	HntTrap_65_1	FAKE_NPC,0,0
job_hunte,102,91,0	duplicate(HntTrap2)	HntTrap_65_2	FAKE_NPC,0,0
job_hunte,103,90,0	duplicate(HntTrap2)	HntTrap_65_3	FAKE_NPC,0,0
job_hunte,103,91,0	duplicate(HntTrap2)	HntTrap_65_4	FAKE_NPC,0,0
job_hunte,114,96,0	duplicate(HntTrap2)	HntTrap_66_1	FAKE_NPC,0,0
job_hunte,114,97,0	duplicate(HntTrap2)	HntTrap_66_2	FAKE_NPC,0,0
job_hunte,115,96,0	duplicate(HntTrap2)	HntTrap_66_3	FAKE_NPC,0,0
job_hunte,115,97,0	duplicate(HntTrap2)	HntTrap_66_4	FAKE_NPC,0,0
job_hunte,112,90,0	duplicate(HntTrap2)	HntTrap_67_1	FAKE_NPC,0,0
job_hunte,112,91,0	duplicate(HntTrap2)	HntTrap_67_2	FAKE_NPC,0,0
job_hunte,113,90,0	duplicate(HntTrap2)	HntTrap_67_3	FAKE_NPC,0,0
job_hunte,113,91,0	duplicate(HntTrap2)	HntTrap_67_4	FAKE_NPC,0,0
job_hunte,125,97,0	duplicate(HntTrap2)	HntTrap_68_1	FAKE_NPC,1,0
job_hunte,125,96,0	duplicate(HntTrap2)	HntTrap_68_2	FAKE_NPC,1,0
job_hunte,127,96,0	duplicate(HntTrap2)	HntTrap_68_3	FAKE_NPC,0,0
job_hunte,127,97,0	duplicate(HntTrap2)	HntTrap_68_4	FAKE_NPC,0,0
job_hunte,52,86,0	duplicate(HntTrap2)	HntTrap_69_1	FAKE_NPC,0,0
job_hunte,52,87,0	duplicate(HntTrap2)	HntTrap_69_2	FAKE_NPC,0,0
job_hunte,53,86,0	duplicate(HntTrap2)	HntTrap_69_3	FAKE_NPC,0,0
job_hunte,53,87,0	duplicate(HntTrap2)	HntTrap_69_4	FAKE_NPC,0,0
job_hunte,66,88,0	duplicate(HntTrap2)	HntTrap_70_1	FAKE_NPC,0,0
job_hunte,66,89,0	duplicate(HntTrap2)	HntTrap_70_2	FAKE_NPC,0,0
job_hunte,67,88,0	duplicate(HntTrap2)	HntTrap_70_3	FAKE_NPC,0,0
job_hunte,67,89,0	duplicate(HntTrap2)	HntTrap_70_4	FAKE_NPC,0,0
job_hunte,114,84,0	duplicate(HntTrap2)	HntTrap_71_1	FAKE_NPC,0,0
job_hunte,114,85,0	duplicate(HntTrap2)	HntTrap_71_2	FAKE_NPC,0,0
job_hunte,115,84,0	duplicate(HntTrap2)	HntTrap_71_3	FAKE_NPC,0,0
job_hunte,115,85,0	duplicate(HntTrap2)	HntTrap_71_4	FAKE_NPC,0,0
job_hunte,126,86,0	duplicate(HntTrap2)	HntTrap_72_1	FAKE_NPC,0,0
job_hunte,126,87,0	duplicate(HntTrap2)	HntTrap_72_2	FAKE_NPC,0,0
job_hunte,127,86,0	duplicate(HntTrap2)	HntTrap_72_3	FAKE_NPC,0,0
job_hunte,127,87,0	duplicate(HntTrap2)	HntTrap_72_4	FAKE_NPC,0,0
job_hunte,54,80,0	duplicate(HntTrap2)	HntTrap_73_1	FAKE_NPC,0,1
job_hunte,55,80,0	duplicate(HntTrap2)	HntTrap_73_2	FAKE_NPC,0,1
job_hunte,55,80,0	duplicate(HntTrap2)	HntTrap_73_3	FAKE_NPC,0,0
job_hunte,55,78,0	duplicate(HntTrap2)	HntTrap_73_4	FAKE_NPC,0,0
job_hunte,64,82,0	duplicate(HntTrap2)	HntTrap_74_1	FAKE_NPC,0,1
job_hunte,65,82,0	duplicate(HntTrap2)	HntTrap_74_2	FAKE_NPC,0,1
job_hunte,64,80,0	duplicate(HntTrap2)	HntTrap_74_3	FAKE_NPC,0,0
job_hunte,65,80,0	duplicate(HntTrap2)	HntTrap_74_4	FAKE_NPC,0,0
job_hunte,66,78,0	duplicate(HntTrap2)	HntTrap_75_1	FAKE_NPC,0,0
job_hunte,66,79,0	duplicate(HntTrap2)	HntTrap_75_2	FAKE_NPC,0,0
job_hunte,67,78,0	duplicate(HntTrap2)	HntTrap_75_3	FAKE_NPC,0,0
job_hunte,67,79,0	duplicate(HntTrap2)	HntTrap_75_4	FAKE_NPC,0,0
job_hunte,74,78,0	duplicate(HntTrap2)	HntTrap_76_1	FAKE_NPC,0,0
job_hunte,74,79,0	duplicate(HntTrap2)	HntTrap_76_2	FAKE_NPC,0,0
job_hunte,75,78,0	duplicate(HntTrap2)	HntTrap_76_3	FAKE_NPC,0,0
job_hunte,75,79,0	duplicate(HntTrap2)	HntTrap_76_4	FAKE_NPC,0,0
job_hunte,78,80,0	duplicate(HntTrap2)	HntTrap_77_1	FAKE_NPC,0,0
job_hunte,78,81,0	duplicate(HntTrap2)	HntTrap_77_2	FAKE_NPC,0,0
job_hunte,79,80,0	duplicate(HntTrap2)	HntTrap_77_3	FAKE_NPC,0,0
job_hunte,79,81,0	duplicate(HntTrap2)	HntTrap_77_4	FAKE_NPC,0,0
job_hunte,82,78,0	duplicate(HntTrap2)	HntTrap_78_1	FAKE_NPC,0,0
job_hunte,82,79,0	duplicate(HntTrap2)	HntTrap_78_2	FAKE_NPC,0,0
job_hunte,83,78,0	duplicate(HntTrap2)	HntTrap_78_3	FAKE_NPC,0,0
job_hunte,83,79,0	duplicate(HntTrap2)	HntTrap_78_4	FAKE_NPC,0,0
job_hunte,94,78,0	duplicate(HntTrap2)	HntTrap_79_1	FAKE_NPC,0,0
job_hunte,94,79,0	duplicate(HntTrap2)	HntTrap_79_2	FAKE_NPC,0,0
job_hunte,95,78,0	duplicate(HntTrap2)	HntTrap_79_3	FAKE_NPC,0,0
job_hunte,95,79,0	duplicate(HntTrap2)	HntTrap_79_4	FAKE_NPC,0,0
job_hunte,101,80,0	duplicate(HntTrap2)	HntTrap_80_1	FAKE_NPC,1,0
job_hunte,101,81,0	duplicate(HntTrap2)	HntTrap_80_2	FAKE_NPC,1,0
job_hunte,103,81,0	duplicate(HntTrap2)	HntTrap_80_3	FAKE_NPC,0,0
job_hunte,103,80,0	duplicate(HntTrap2)	HntTrap_80_4	FAKE_NPC,0,0
job_hunte,104,78,0	duplicate(HntTrap2)	HntTrap_81_1	FAKE_NPC,0,0
job_hunte,104,79,0	duplicate(HntTrap2)	HntTrap_81_2	FAKE_NPC,0,0
job_hunte,105,78,0	duplicate(HntTrap2)	HntTrap_81_3	FAKE_NPC,0,0
job_hunte,105,79,0	duplicate(HntTrap2)	HntTrap_81_4	FAKE_NPC,0,0
job_hunte,110,78,0	duplicate(HntTrap2)	HntTrap_82_1	FAKE_NPC,0,0
job_hunte,110,79,0	duplicate(HntTrap2)	HntTrap_82_2	FAKE_NPC,0,0
job_hunte,111,78,0	duplicate(HntTrap2)	HntTrap_82_3	FAKE_NPC,0,0
job_hunte,111,79,0	duplicate(HntTrap2)	HntTrap_82_4	FAKE_NPC,0,0
job_hunte,114,80,0	duplicate(HntTrap2)	HntTrap_83_1	FAKE_NPC,0,0
job_hunte,114,81,0	duplicate(HntTrap2)	HntTrap_83_2	FAKE_NPC,0,0
job_hunte,115,80,0	duplicate(HntTrap2)	HntTrap_83_3	FAKE_NPC,0,0
job_hunte,115,81,0	duplicate(HntTrap2)	HntTrap_83_4	FAKE_NPC,0,0
job_hunte,124,78,0	duplicate(HntTrap2)	HntTrap_84_1	FAKE_NPC,0,0
job_hunte,124,79,0	duplicate(HntTrap2)	HntTrap_84_2	FAKE_NPC,0,0
job_hunte,125,78,0	duplicate(HntTrap2)	HntTrap_84_3	FAKE_NPC,0,0
job_hunte,125,79,0	duplicate(HntTrap2)	HntTrap_84_4	FAKE_NPC,0,0
job_hunte,126,82,0	duplicate(HntTrap2)	HntTrap_85_1	FAKE_NPC,0,0
job_hunte,126,83,0	duplicate(HntTrap2)	HntTrap_85_2	FAKE_NPC,0,0
job_hunte,127,82,0	duplicate(HntTrap2)	HntTrap_85_3	FAKE_NPC,0,0
job_hunte,127,83,0	duplicate(HntTrap2)	HntTrap_85_4	FAKE_NPC,0,0
job_hunte,52,68,0	duplicate(HntTrap2)	HntTrap_86_1	FAKE_NPC,0,1
job_hunte,53,68,0	duplicate(HntTrap2)	HntTrap_86_2	FAKE_NPC,0,1
job_hunte,52,66,0	duplicate(HntTrap2)	HntTrap_86_3	FAKE_NPC,0,0
job_hunte,53,66,0	duplicate(HntTrap2)	HntTrap_86_4	FAKE_NPC,0,0
job_hunte,54,70,0	duplicate(HntTrap2)	HntTrap_87_1	FAKE_NPC,0,1
job_hunte,55,70,0	duplicate(HntTrap2)	HntTrap_87_2	FAKE_NPC,0,1
job_hunte,54,68,0	duplicate(HntTrap2)	HntTrap_87_3	FAKE_NPC,0,0
job_hunte,55,68,0	duplicate(HntTrap2)	HntTrap_87_4	FAKE_NPC,0,0
job_hunte,59,66,0	duplicate(HntTrap2)	HntTrap_88_1	FAKE_NPC,1,0
job_hunte,59,67,0	duplicate(HntTrap2)	HntTrap_88_2	FAKE_NPC,1,0
job_hunte,61,67,0	duplicate(HntTrap2)	HntTrap_88_3	FAKE_NPC,0,0
job_hunte,61,66,0	duplicate(HntTrap2)	HntTrap_88_4	FAKE_NPC,0,0
job_hunte,68,68,0	duplicate(HntTrap2)	HntTrap_89_1	FAKE_NPC,0,1
job_hunte,69,68,0	duplicate(HntTrap2)	HntTrap_89_2	FAKE_NPC,0,1
job_hunte,68,66,0	duplicate(HntTrap2)	HntTrap_89_3	FAKE_NPC,0,0
job_hunte,69,66,0	duplicate(HntTrap2)	HntTrap_89_4	FAKE_NPC,0,0
job_hunte,76,66,0	duplicate(HntTrap2)	HntTrap_90_1	FAKE_NPC,0,0
job_hunte,76,67,0	duplicate(HntTrap2)	HntTrap_90_2	FAKE_NPC,0,0
job_hunte,77,66,0	duplicate(HntTrap2)	HntTrap_90_3	FAKE_NPC,0,0
job_hunte,77,67,0	duplicate(HntTrap2)	HntTrap_90_4	FAKE_NPC,0,0
job_hunte,82,68,0	duplicate(HntTrap2)	HntTrap_91_1	FAKE_NPC,0,0
job_hunte,82,69,0	duplicate(HntTrap2)	HntTrap_91_2	FAKE_NPC,0,0
job_hunte,83,68,0	duplicate(HntTrap2)	HntTrap_91_3	FAKE_NPC,0,0
job_hunte,83,69,0	duplicate(HntTrap2)	HntTrap_91_4	FAKE_NPC,0,0
job_hunte,96,66,0	duplicate(HntTrap2)	HntTrap_92_1	FAKE_NPC,0,0
job_hunte,96,67,0	duplicate(HntTrap2)	HntTrap_92_2	FAKE_NPC,0,0
job_hunte,97,66,0	duplicate(HntTrap2)	HntTrap_92_3	FAKE_NPC,0,0
job_hunte,97,67,0	duplicate(HntTrap2)	HntTrap_92_4	FAKE_NPC,0,0
job_hunte,100,68,0	duplicate(HntTrap2)	HntTrap_93_1	FAKE_NPC,0,0
job_hunte,100,69,0	duplicate(HntTrap2)	HntTrap_93_2	FAKE_NPC,0,0
job_hunte,101,68,0	duplicate(HntTrap2)	HntTrap_93_3	FAKE_NPC,0,0
job_hunte,101,69,0	duplicate(HntTrap2)	HntTrap_93_4	FAKE_NPC,0,0
job_hunte,107,66,0	duplicate(HntTrap2)	HntTrap_94_1	FAKE_NPC,1,0
job_hunte,107,67,0	duplicate(HntTrap2)	HntTrap_94_2	FAKE_NPC,1,0
job_hunte,109,67,0	duplicate(HntTrap2)	HntTrap_94_3	FAKE_NPC,0,0
job_hunte,109,66,0	duplicate(HntTrap2)	HntTrap_94_4	FAKE_NPC,0,0
job_hunte,117,69,0	duplicate(HntTrap2)	HntTrap_95_1	FAKE_NPC,1,0
job_hunte,117,68,0	duplicate(HntTrap2)	HntTrap_95_2	FAKE_NPC,1,0
job_hunte,119,69,0	duplicate(HntTrap2)	HntTrap_95_3	FAKE_NPC,0,0
job_hunte,119,68,0	duplicate(HntTrap2)	HntTrap_95_4	FAKE_NPC,0,0
job_hunte,124,66,0	duplicate(HntTrap2)	HntTrap_96_1	FAKE_NPC,0,0
job_hunte,124,67,0	duplicate(HntTrap2)	HntTrap_96_2	FAKE_NPC,0,0
job_hunte,125,66,0	duplicate(HntTrap2)	HntTrap_96_3	FAKE_NPC,0,0
job_hunte,125,67,0	duplicate(HntTrap2)	HntTrap_96_4	FAKE_NPC,0,0
job_hunte,126,70,0	duplicate(HntTrap2)	HntTrap_97_1	FAKE_NPC,0,0
job_hunte,126,71,0	duplicate(HntTrap2)	HntTrap_97_2	FAKE_NPC,0,0
job_hunte,127,70,0	duplicate(HntTrap2)	HntTrap_97_3	FAKE_NPC,0,0
job_hunte,127,71,0	duplicate(HntTrap2)	HntTrap_97_4	FAKE_NPC,0,0
