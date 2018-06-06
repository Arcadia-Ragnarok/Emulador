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
| - Copyright: Spell Master (11/09/2017)                            |
| - Info: Quest de Mudança de Classe para Cavaleiro.                |
\*-----------------------------------------------------------------*/

prt_in,88,101,4	script	Capitão Herman#knightq	1_M_KNIGHTMASTER,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Knight) {
			mes "[Capitão Herman]";
			mes "Espero que você esteja vivendo às minhas expectativas.";
			mes "Nós prometemos ser fortes para o nosso reino.";
			mes "Mesmo que a morte seja uma consequência...";
			close;
		} else {
			mes "[Capitão Herman]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Nós, os cavaleiros orgulhosos da Cavalaria de Prontera, damos a vida pelo rei do nosso país!";
			mes "Por favor, desfrute da sua estadia.";
			close;
		}
	} else {
		if (!knightq) {
			mes "[Capitão Herman]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+", esta é a Cavalaria de Prontera.";
			mes "O que traz até aqui?";
			next;
			if (select("Eu quero ser Cavaleiro","Estou apenas visitando.") == 1) {
				if (JobLevel < 40) {
					mes "[Capitão Herman]";
					mes "Ah, você ainda não está pronto para se tornar um Cavaleiro!";
					mes "Eu me esqueci de mencionar que precisa ter pelo menos o nível 40 de classe.";
					next;
					mes "[Capitão Herman]";
					mes "Claro que eu entendo o seu forte desejo de se juntar a nós, mas agora não é o momento.";
					mes "Vá para fora e lute contra mais alguns monstros.";
					mes "Nós estaremos aqui esperando.";
					close;
				} else {
					mes "[Capitão Herman]";
					mes "Antes de tudo, eu sou o capitão da Cavalaria de Prontera, Herman Phon Efersirsus.";
					mes "Tenho o prazer de conhecer jovens que desejam ingressar na Cavalaria de Prontera.";
					next;
					mes "[Capitão Herman]";
					mes "Não podemos considerar os candidatos que ainda não são experientes o suficiente para se tornar cavaleiros.";
					next;
					mes "[Capitão Herman]";
					mes "Uma vez se regitrad"+(Sex == SEX_MALE ? "o":"a")+", iniciamos o procedimento de mudança de classe.";
					mes "Gostaria de se registar agora?";
					next;
					if (select("Sim, agora mesmo","Vou pensar mais a respeito") == 1) {
						mes "Deixe-me ver...";
						mes "Seu nome é "+strcharinfo(PC_NAME)+"...";
						mes "É isso mesmo?";
						next;
						mes "[Capitão Herman]";
						mes "Deixe-me explicar o procedimento de mudança de classe.";
						next;
						mes "[Capitão Herman]";
						mes "Você deve visitar uma série de cavaleiros e passar por cada um de seus testes.";
						next;
						mes "[Capitão Herman]";
						mes "Uma vez que todos os testes forem concluídos.";
						mes "Cada cavaleiro envolvido em seu teste irá se reunir e discutir o seu desempenho.";
						next;
						mes "[Capitão Herman]";
						mes "Os cavaleiros devem aprová-lo por unanimidade.";
						mes "Antes que você participe da Cavalaria de Prontera.";
						mes "Se apenas um pessoa te reprovar, você deve começar todos os teste de novo.";
						next;
						mes "[Capitão Herman]";
						mes "Mas eu acredito que se você persistir com um coração sincero.";
						mes "Você será reconhecido pelos cavaleiros e, finalmente será visto como um membro da nossa Cavalaria.";
						next;
						mes "[Capitão Herman]";
						mes "Então, não vamos perder mais tempo falando!";
						mes "Vá falar com esses cavaleiros e comece os testes.";
						mes "Depois de ter completado todos os testes, volte e fale comigo.";
						knightq = 1;
						setquest(9000);
						close;
					} else {
						mes "[Capitão Herman]";
						mes "Ah...!";
						mes "Bem, eu não quero pressionar.";
						mes "Reserve um tempo para pensar sobre isso.";
						mes "Volte quando você estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para a mudança de classe.";
						close;
					}
				}
			} else {
				mes "[Capitão Herman]";
				mes "Vamos pensar sobre isso, você não é um espadachim?";
				mes "Parece que você encontrou muitos inimigos no campo de batalha.";
				next;
				mes "[Capitão Herman]";
				mes "Se tiver interessad"+(Sex == SEX_MALE ? "o":"a")+" você poderia se tornar membro da Cavalaria.";
				mes "Lógico se tornando Cavaleiro.";
				close;
			}
		} else if (knightq == 1 || knightq == 2) {
			mes "Mmm?";
			mes strcharinfo(PC_NAME)+", o que posso fazer por você?";
			mes "Ah, você não sabe quem visitar?";
			next;
			mes "[Capitão Herman]";
			mes "Acredito que os cavaleiros encarregados do teste criaram uma ordem na qual você deve visitá-los.";
			mes "Acho que isso ajuda o processo de testes.";
			next;
			mes "[Capitão Herman]";
			mes "Primeiro, vá visitar o Senhor Andrew para o seu primeiro teste.";
			mes "Não fique muito nervos"+(Sex == SEX_MALE ? "o":"a")+", ele vai explicar tudo quando você falar com ele.";
			close;
		} else if (knightq == 3) {
			mes "[Capitão Herman]";
			mes "Vá até Senhor Siracuse e faça seu teste.";
			close;
		} else if (knightq == 4 || knightq == 5) {
			mes "[Capitão Herman]";
			mes "Vá até o Senhor Windsor para o seu próximo teste.";
			mes "Ouça com atenção os Cavaleiros encarregados dos testes.";
			close;
		} else if (knightq == 6 || knightq == 7) {
			mes "[Capitão Herman]";
			mes "Vá visitar a Senhorita Amy e faça seu teste.";
			mes "Certifique-se de prestar atenção em quem você deve ir para o próximo teste.";
			close;
		} else if (knightq == 8 || knightq == 9 || knightq == 10) {
			mes "[Capitão Herman]";
			mes "Agora, vá falar com o Senhor Edmond.";
			mes "Ele irá ser responsável pelo seu próximo teste.";
			close;
		} else if (knightq == 11) {
			mes "[Capitão Herman]";
			mes "Você só tem que visitar mais uma pessoa.";
			mes "O Cavaleiro encarregado do teste final é o Senhor Gray Próspero o Cavaleiro Modesto.";
			next;
			mes "[Senhor Edmond]";
			mes "Este mundo opera de acordo a lei de causa e efeito.";
			mes "Tudo será revelado no final.";
			next;
			mes "[Capitão Herman]";
			mes "Esteja alerta e faça seu melhor, por que é seu último teste.";
			next;
			mes "[Capitão Herman]";
			mes "Retorne até mim depois de ter completado o teste final.";
			close;
		} else if (knightq == 12) {
			if (SkillPoint) {
				mes "[Capitão Herman]";
				mes "Nossa...!";
				mes "Você não pode mudar de classe, se você tem pontos de habilidade restantes.";
				mes "Volte depois de ter distribuído todos os seus pontos de habilidade.";
				close;
			} else {
				mes "[Capitão Herman]";
				mes "Nossa, você já completou todos os testes?";
				mes "Mas nem todos os que terminaram os testes podem se tornar Cavaleiro.";
				next;
				mes "[Capitão Herman]";
				mes "Durante o teste, veja se você foi leal, honrado e se você é forte.";
				mes "Também veja se você foi cortês e se você sabe o valor da modéstia e reverência.";
				next;
				mes "[Capitão Herman]";
				mes "Através deste processo, eu também observarei suas ações.";
				mes "Todas as sete de nossas opiniões serão refletidas na decisão de sua mudança de classe.";
				next;
				mes "[Capitão Herman]";
				mes "Então...";
				mes "Ouviremos os pensamentos de todos!";
				mes "Andrew, o que você acha?";
				next;
				mes "[Senhor Andrew]";
				if (JobLevel == 50) {
					mes "O que posso dizer?";
					mes "Eu aprovo!";
					mes "Tendo vivido como Espadachim até agora é suficiente.";
				} else {
					mes "Ele tem juntado itens que são difíceis de conseguir.";
					mes "Eu aprovo!";
					mes "Acredito que "+(Sex == SEX_MALE ? "ele":"ela")+" vai continur a ser fiel.";
					mes "Mesmo depois de se tornar Cavaleiro.";
				}
				next;
				mes "[Capitão Herman]";
				mes "Hum.";
				mes "Que revisão interessante.";
				mes "Senhor Siracuse, qual foi sua avaliação?";
				next;
				mes "[Senhor Siracuse]";
				mes "Muito bem.";
				mes "Não é bem o que eu gostaria, mas espero que se torne melhor no futuro.";
				next;
				mes "[Senhor Siracuse]";
				mes "Depois de se tornar Cavaleiro, você deve construir uma boa reputação através da honra.";
				mes "Eu aprovo.";
				next;
				mes "[Capitão Herman]";
				mes "Ok...";
				mes "Windsor, o que você acha?";
				next;
				mes "[Senhor Windsor]";
				mes "...";
				next;
				mes "[Senhor Windsor]";
				mes "...";
				mes "......";
				next;
				mes "[Senhor Windsor]";
				mes "....Aprovad"+(Sex == SEX_MALE ? "o":"a")+".";
				next;
				mes "[Capitão Herman]";
				mes "Então, vamos ouvir a opinião da Ana.";
				next;
				mes "[Senhorita Amy]";
				if (Sex == SEX_MALE) {
					mes "Hum...";
					mes "Ele é tão educado!";
					mes "Vai crescer para ser um cavaleiro maravilhoso.!";
				} else {
					mes "Hum...";
					mes "Ela deve ser famosa!";
					mes "É muito simpática e também muito bonita, assim ganha mais alguns pontos!";
					mes "Eu não deveria estar dizendo essas coisas!";
				}
				next;
				mes "[Capitão Herman]";
				mes "Bem...";
				mes "Uma avaliação estranha, mas eu acredito que ela aprove.";
				mes "Edmond, diga sua opinião.";
				next;
				mes "[Senhor Edmond]";
				if (Sex == SEX_MALE) {
					mes "Ele parece um pouco bruto, mas algo brilha dentro dele.";
					mes "Com um polimento, seu verdadeiro valor vai brilhar como o sol.";
				} else {
					mes "É difícil ver, mas há uma beleza espiritual dentro dela.";
					mes "Com um polimento, seu verdadeiro valor vai brilhar como o resplendor da lua.";
				}
				next;
				mes "[Capitão Herman]";
				mes "Por fim...";
				mes "Gray, gostaria de ouvir sua avaliação.";
				next;
				mes "[Gray]";
				mes "Jovem  "+(Sex == SEX_MALE ? "cavalheiro":"dama")+" vindo aqui com a determinação de se tornar Cavaleiro";
				mes "É o suficiente...";
				next;
				mes "[Capitão Herman]";
				mes "Todos o aprovaram.";
				mes "Ninguém se opôs.";
				mes "Então eu direi a minha opinião.";
				next;
				mes "[Capitão Herman]";
				mes "Minha decisão é...";
				next;
				mes "[Capitão Herman]";
				mes "Eu aprovo.";
				next;
				mes "[Capitão Herman]";
				mes "Você pode não ter terminado todos os testes perfeitamente.";
				mes "Mas tem todas as qualidades necessárias para se tornar Cavaleiro.";
				next;
				.@level = JobLevel;
				jobchange(Job_Knight);
				completequest(9012);
				callfunc("ClearJobQuest2nd",7);
				getitem(Awakening_Potion,7);
				mes "[Capitão Herman]";
				mes "Declaro você membro da Cavalaria de Prontera.";
				mes "Proteja os fracos e viva com honra.";
				next;
				if (.@level == 50) {
					mes "[Capitão Herman]";
					mes "Ei...";
					mes "Nós preparamos um pequeno presente para parabenizá-lo por sua mudança de classe.";
					mes "Por favor use-o quando você estiver em batalha enquanto você estiver honradamente protegendo os outros.";
					getitem(Claymore,1);
					next;
				}
				mes "[Capitão Herman]";
				mes "Vá em frente!";
				mes "O futuro de Rune-Midgard será carregado em seus ombros!";
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
prt_in,75,107,4	script	Senhor Andrew#knightq	1_M_YOUNGKNIGHT,{
	if (BaseJob == Job_Knight) {
		mes "[Senhor Andrew]";
		mes "Você deve ser um membro da Cavalaria.";
		mes "Como você está?";
		next;
		mes "[Senhor Andrew]";
		mes "Você deve trabalhar arduamente para recolher alimentos.";
		mes "Bem como juntar zeny para comprar equipamentos.";
		mes "Guarde tudo o que você encontrar em batalha, mesmo um pequeno Jellopy.";
		close;
	} else if (!knightq) {
		mes "[Senhor Andrew]";
		mes "Nós, os membros da";
		mes "Cavalaria de Prontera, estamos dando o nosso melhor para proteger a paz neste mundo.";
		next;
		mes "[Senhor Andrew]";
		mes "Mesmo durante as batalhas que enfrentamos a cada dia.";
		mes "Sonhamos com um futuro brilhante que está por vir.";
		close;
	} else if (knightq == 1) {
		mes "[Senhor Andrew]";
		mes "Bom dia.";
		mes "Posso ajudar em algo?";
		next;
		if (select("Eu gostaria de fazer o teste","Ah, nada.") == 1) {
			mes "[Senhor Andrew]";
			mes "Ah...";
			mes "Deseja se tornar Cavaleiro.";
			mes "Seu nome é "+strcharinfo(PC_NAME)+", correto?";
			next;
			mes "[Senhor Andrew]";
			mes "Eu sou um Cavaleiro da Cavalaria de Prontera, Andrew Shylock.";
			mes "Eu sou responsável por seu primeiro teste.";
			next;
			mes "[Senhor Andrew]";
			mes "Eu vou estar testando o seu sentido de lealdade.";
			mes "Cada cavaleiro deve possuir esta virtude.";
			mes "Para este exame, você estará recolhendo prêmios do campo de batalha.";
			next;
			if (JobLevel != 50) {
				mes "[Senhor Andrew]";
				mes "Sem mais delongas, vamos começar!";
				mes "Vá e reuna os seguintes itens...";
				switch (rand(2)) {
					case 0:
					setarray(.@kntitm[0], 1040,5, 7006,5, 931,5, 1057,5, 903,5, 1028,5);
					knightq2 = 1;
					changequest(9000,9001);
					break;
					case 1:
					setarray(.@kntitm[0], 1042,5, 950,5, 1032,5, 966,5, 7031,5, 946,5);
					knightq2 = 2;
					changequest(9000,9002);
					break;
				}
				knightq = 2;
				next;
				mes "[Senhor Andrew]";
				mes "^236b8e"+.@kntitm[1]+" "+getitemname(.@kntitm[0])+"^000000.";
				mes "^236b8e"+.@kntitm[3]+" "+getitemname(.@kntitm[2])+"^000000.";
				mes "^236b8e"+.@kntitm[5]+" "+getitemname(.@kntitm[4])+"^000000.";
				mes "^236b8e"+.@kntitm[7]+" "+getitemname(.@kntitm[6])+"^000000.";
				mes "^236b8e"+.@kntitm[9]+" "+getitemname(.@kntitm[8])+"^000000.";
				mes "^236b8e"+.@kntitm[11]+" "+getitemname(.@kntitm[10])+"^000000.";
				next;
				mes "[Senhor Andrew]";
				mes "Estarei esperando aqui você trazer os os itens listados.";
				mes "Até breve.";
				close;
			} else {
				mes "[Senhor Andrew]";
				mes "Hum...?";
				mes "Espere aí.";
				mes "Você parece ter dominado totalmente as habilidades de um Espadachim.";
				next;
				mes "[Senhor Andrew]";
				mes "Impressionante...!";
				mes "Pensando bem, não acho que a sua lealdade precisa ser testada.";
				next;
				mes "[Senhor Andrew]";
				mes "Por favor, vá até o meu colega Senhor Siracuse.";
				mes "Ele lhe dará o seu próximo teste.";
				mes "Ótimo trabalho dominando as habilidades de Espadachim.";
				knightq = 3;
				changequest(9000,9003);
				close;
			}
		} else {
			mes "[Senhor Andrew]";
			mes "Bem, então...";
			mes "Bom dia.";
			close;
		}
	} else if (knightq == 2) {
		if (knightq2 == 1) {
			setarray(.@kntitm[0],1040,5,7006,5,931,5,1057,5,903,5,1028,5);
		} else {
			setarray(.@kntitm[0],1042,5,950,5,1032,5,966,5,7031,5,946,5);
		}
		mes "[Senhor Andrew]";
		mes "Você reúniu todos os itens?";
		mes "Vamos checar...";
		next;
		if (countitem(.@kntitm[0]) >= .@kntitm[1] && countitem(.@kntitm[2]) >= .@kntitm[3] && countitem(.@kntitm[4]) >= .@kntitm[5] && countitem(.@kntitm[6]) >= .@kntitm[7] && countitem(.@kntitm[8]) >= .@kntitm[9] && countitem(.@kntitm[10]) >= .@kntitm[11]) {
			if (questprogress(9001)) { changequest(9001,9003); }
			if (questprogress(9002)) { changequest(9002,9003); }
			knightq = 3;
			knightq2 = 0;
			delitem(.@kntitm[0],.@kntitm[1]);
			delitem(.@kntitm[2],.@kntitm[3]);
			delitem(.@kntitm[4],.@kntitm[5]);
			delitem(.@kntitm[6],.@kntitm[7]);
			delitem(.@kntitm[8],.@kntitm[9]);
			delitem(.@kntitm[10],.@kntitm[11]);
			mes "[Senhor Andrew]";
			mes "Perfeito!";
			mes "Nós apreciamos o seu esforço em reunir esses itens.";
			mes "Estes serão utilizados para apoiar as finanças da Cavalaria.";
			next;
			mes "[Senhor Andrew]";
			mes "Por favor, visite o meu colega Senhor Siracuse.";
			mes "E continue os testes com a dedicação e lealdade que você mostrou para mim hoje.";
			close;
		} else {
			mes "[Senhor Andrew]";
			mes "Espere, espere...";
			mes "Acho que ainda estão faltando alguns itens.";
			mes "No caso de você tenha esquecido...";
			next;
			mes "[Senhor Andrew]";
			mes "^236b8e"+.@kntitm[1]+" "+getitemname(.@kntitm[0])+"^000000.";
			mes "^236b8e"+.@kntitm[3]+" "+getitemname(.@kntitm[2])+"^000000.";
			mes "^236b8e"+.@kntitm[5]+" "+getitemname(.@kntitm[4])+"^000000.";
			mes "^236b8e"+.@kntitm[7]+" "+getitemname(.@kntitm[6])+"^000000.";
			mes "^236b8e"+.@kntitm[9]+" "+getitemname(.@kntitm[8])+"^000000.";
			mes "^236b8e"+.@kntitm[11]+" "+getitemname(.@kntitm[10])+"^000000.";
			next;
			mes "[Senhor Andrew]";
			mes "Por favor, faça este teste a sério e com sinceridade.";
			mes "Agora, eu estarei esperando por você quando trazer todos os itens.";
			close;

		}
	} else if (knightq == 3) {
		mes "[Senhor Andrew]";
		mes "Você deve ir e fazer o teste seguinte.";
		mes "Depressa, o Senhor Siracuse está esperando por você.";
		close;
	} else {
		mes "[Senhor Andrew]";
		mes "Com está os testes?";
		mes "Desejo-lhe boa sorte.";
		close;
	}
}

// ------------------------------------------------------------------
prt_in,71,91,0	script	Senhor Siracuse#knightq	1_M_YOUNGKNIGHT,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Knight) {
			mes "[Senhor Siracuse]";
			mes "Olá!";
			mes "Como você está?";
			next;
			mes "[Senhor Siracuse]";
			mes "Nós estivemos testando novos membros.";
			mes "Mas nem todos eles são promissores como você.";
			next;
			mes "[Senhor Siracuse]";
			mes "Espero que todos estes novos recrutas se comportem.";
			mes "E não tragam vergonha para a Cavalaria.";
			next;
			mes "[Senhor Siracuse]";
			mes "Se você pegar qualquer um dos novos recrutas agindo de forma imprópria para um cavaleiro.";
			mes "Eepreenda-os para mim por favor?";
			close;
		} else {
			mes "[Senhor Siracuse]";
			mes "Ataque e defesa.";
			mes "Existe uma maneira de ter ambos sem comprometer um ao outro?";
			next;
			mes "[Senhor Siracuse]";
			mes "Armas de duas mãos pode melhorar o seu ataque, mas diminue suas defesas.";
			mes "Existe algo que possa superar essa fraqueza?";
			next;
			mes "[Senhor Siracuse]";
			mes "Uma arma ou algum tipo de técnica que ajudasse muito aos Cavaleiros...";
			close;
		}
	} else {
		if (knightq < 3) {
			mes "[Senhor Siracuse]";
			mes "Ataque e defesa.";
			mes "Existe uma maneira de ter ambos sem comprometer um ao outro?";
			next;
			mes "[Senhor Siracuse]";
			mes "Armas de duas mãos pode melhorar o seu ataque, mas diminue suas defesas.";
			mes "Existe algo que possa superar essa fraqueza?";
			next;
			mes "[Senhor Siracuse]";
			mes "Uma arma ou algum tipo de técnica que ajudasse muito aos Cavaleiros...";
			close;
		} else if (knightq == 3) {
			mes "[Senhor Siracuse]";
			mes "Você tem algo para me perguntar?";
			next;
			if (select("Gostaria de fazer o teste","Ah, nada.") == 2) {
				mes "[Senhor Siracuse]";
				mes "Hmmm...?";
				mes "Certo.";
				mes "É só que você tem aquele olhar em seu rosto...";
				close;
			} else {
				if (!knightq2) {
					mes "[Senhor Siracuse]";
					mes "Eu vejo, você passou no primeiro teste.";
					mes "Muito bem, eu vou dar algum tempo para você.";
					mes "Deixe-me apresentar-me.";
					mes "Meu nome é James Siracusa.";
					next;
					mes "[Senhor Siracuse]";
					mes "Este teste vai medir o quanto você sabe sobre Cavalaria.";
					mes "Mais importante, eu quero saber seus pensamentos sobre honra.";
					next;
					mes "[Senhor Siracuse]";
					mes "Não fique nervos"+(Sex == SEX_MALE ? "o":"a")+", não vou tomar muito tempo.";
					mes "Estas serão perguntas rápidas.";
					mes "Além disso, você ainda tem que ver os outros, certo?";
					next;
					mes "[Senhor Siracuse]";
					mes "Bem, vamos começar.";
					mes "Por favor responda prontamente.";
					next;
				} else {
					mes "[Senhor Siracuse]";
					mes "O que...";
					mes "Você denovo?";
					next;
					if (select("Gostaria de tentar novamente","Desculpe não é nada") == 2) {
						mes "[Senhor Siracuse]";
						mes "Então não gaste meu tempo.";
						close;
					} else {
						mes "[Senhor Siracuse]";
						mes "É isso mesmo?";
						mes "Tem certeza de que está preparado desta vez?";
						next;
						mes "[Senhor Siracuse]";
						mes "Certo, então, aqui vamos nós outra vez...";
						next;
					}
				}
				mes "[Senhor Siracuse]";
				mes "Um Cavaleiro deve possuir grande força.";
				mes "Defesa, velocidade e habilidade para manejar uma espada de duas mãos.";
				mes "Qual das seguintes armas não é afetada pela habilidade Velocidade com Espada de 2 Mãos?";
				next;
				if (select("Kataná","Espada Matadora","Espada Larga","Flamberge") != 4) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Bom, agora deixe-me perguntar sobre algumas habilidades.";
				mes "Qual das seguintes habilidades não é necessária aprender Impacto de Tyr?";
				next;
				if (select("Perícia com Espada de Duas Mãos","Impacto Explosivo","Provocar","Golpe Fulminante") != 3) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Cavaleiros também podem usar Lanças.";
				mes "Ao contrário de outras classes, e também tem perícia com a Lanças.";
				mes "Quais as habilidades não são necessários para aprender a habilidade Brandir Lança?";
				next;
				if (select("Perfurar","Estocada","Lança Bumerangue","Montaria") != 4) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Algumas Lanças também têm atributos mágicos, assim como magias.";
				mes "Das seguintes lanças podem atacar um Pesadelo que tem o atributo Fantasma?";
				next;
				if (select("Zephyrus","Lança","Guisarme-Bico","Foice") != 1) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Quando você se torna um Cavaleiro você pode montar um Peco Peco.";
				mes "No entanto, sua velocidade de ataque diminui quando você está montado em um Peco Peco.";
				next;
				mes "[Senhor Siracuse]";
				mes "Mas, você pode contrariar esta diminuição da velocidade.";
				mes "Se você aprender a habilidade Perícia em Montaria.";
				mes "Qual a percentagem de sua velocidade de ataque normal você terá após a aprendizagem de Perícia em Montaria nível 3?";
				next;
				if (select("70% de velocidade","80% de velocidade","90% de velocidade","100% da velocidade") != 2) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Bem, Bem...";
				mes "Tenho certeza que você sabe bastante sobre Cavaleiros.";
				mes "Agora, deixe-me fazer algumas perguntas pessoais sobre Cavaleiros.";
				next;
				mes "[Senhor Siracuse]";
				mes "O que você deve fazer quando você topar com um Novato pedindo ajuda na cidade?";
				next;
				if (select("Ensino a ele","Chamo ele para o grupo","Dou zenys e itens.") == 3) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Certo...";
				mes "Agora, como deve ser sua ação dentro de um grupo?";
				next;
				if (select("Protejo a todos","Reúno monstros só para mim","Pego o máximo de itens possível") != 1) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Por fim...";
				mes "Qual é o valor mais importante que um Cavaleiro deve possuir?";
				next;
				if (select("Honra","Riqueza","Status") != 1) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Bem, então, este é o fim do meu teste.";
				next;
				if (.@kntQ >= 2) {
					knightq2 = 1;
					mes "[Senhor Siracuse]";
					mes "E de acordo com as respostas que me deu.";
					mes "Você ainda tem muito a aprender sobre os Cavaleiros.";
					next;
					mes "[Senhor Siracuse]";
					mes "Procure por outros cavaleiros e pergute a eles sobre o que é ser um cavaleiro.";
					close;
				} else if (.@kntQ >= 1) {
					mes "[Senhor Siracuse]";
					mes "E de acordo com as respostas que me deu.";
					mes "Você ainda tem muito a aprender sobre os Cavaleiros.";
					next;
					mes "[Senhor Siracuse]";
					mes "Mas vejo que mesmo não respondendo tudo como deveria.";
					mes "Vejo que você tem potencial, e para mim isso já é o bastante.";
					next;
				} else {
					mes "[Senhor Siracuse]";
					mes "Perfeito!";
					mes "Respondeu tudo como deveria.";
					next;
				}
				if (knightq2) { knightq2 = 0; }
				knightq = 4;
				changequest(9003,9004);
				mes "[Senhor Siracuse]";
				mes "Para o seu próximo teste, vá ver o Senhor Windsor.";
				mes "Ele é muito calmo e de poucas palavras.";
				mes "Mas não deixe que ele chegue até você.";
				next;
				mes "[Senhor Siracuse]";
				mes "Na verdade eu acho ele um cara muito estranho.";
				mes "Mas por favor, deixe esse meu comentário entre nós mesmo.";
				close;
			}
		} else if (knightq == 4 || knightq == 5) {
			mes "[Senhor Siracuse]";
			mes "Desculpe, mas eu estou ocupado no momento.";
			mes "Você deve ir ver o Senhor Windsor.";
			close;
		} else {
			mes "[Senhor Siracuse]";
			mes "Desculpe, mas eu estou ocupado no momento.";
			mes "Você deve ir terminar o resto de seus testes.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_in,79,94,4	script	Senhor Windsor#knightq	4_M_JOB_KNIGHT1,{
	mes "[Senhor Windsor]";
	mes "...";
	next;
	mes "[Senhor Windsor]";
	mes "...";
	mes "......";
	next;
	if (knightq == 4 || knightq == 5) {
		mes "[Senhor Windsor]";
		mes "O que deseja?";
		next;
		if (select("O Senhor Siracuse me enviou","Nada") == 2) {
			mes "[Senhor Windsor]";
			mes "...";
			close;
		} else {
			if (knightq != 5) { knightq = 5; }
			if (questprogress(9004)) { changequest(9004,9005); }
			mes "[Senhor Windsor]";
			mes "Ah, sim, o teste de admisão...";
			next;
			mes "[Senhor Windsor]";
			mes "....";
			next;
			mes "[Senhor Windsor]";
			mes "Siga-me...";
			close2;
			warp("job_knt",89,101);
			end;
		}
	} else if (knightq == 6 || knightq == 7) {
		mes "[Senhor Windsor]";
		mes "Fale com a Senhorita Amy...";
		mes "......";
		close;
	} else {
		mes "[Senhor Windsor]";
		mes "......";
		close;
	}
}

// ------------------------------------------------------------------
job_knt,89,106,4	script	Senhor Windsor#2knightq	4_M_JOB_KNIGHT1,{
	mes "[Senhor Windsor]";
	mes "...";
	next;
	mes "[Senhor Windsor]";
	mes "...";
	mes "......";
	next;
	mes "[Senhor Windsor]";
	mes "...Perguntas?";
	next;
	switch (select("Que tipo de teste é esse?","Como posso fazer o teste?","Eu quero de sair")) {
		case 1:
		mes "[Senhor Windsor]";
		mes "...Você lutará contra monstros.";
		next;
		mes "[Senhor Windsor]";
		mes "...Mate todos eles.";
		next;
		mes "[Senhor Windsor]";
		mes "...";
		next;
		mes "[Senhor Windsor]";
		mes "...Três estágios.";
		mes "Vença todos.";
		next;
		mes "[Senhor Windsor]";
		mes "......3 minutos para cada estágio.";
		next;
		mes "[Senhor Windsor]";
		mes "..........";
		close;
		case 2:
		mes "[Senhor Windsor]";
		mes "...Entre na sala de espera.";
		next;
		mes "[Senhor Windsor]";
		mes "...Em seguida, começará.";
		next;
		mes "[Senhor Windsor]";
		mes "...";
		next;
		mes "[Senhor Windsor]";
		mes "...Você tem que esperar se alguém estiver sendo testado.";
		next;
		mes "[Senhor Windsor]";
		mes "...Você pode começar depois que a pessoa sair.";
		next;
		mes "[Senhor Windsor]";
		mes "...";
		close;
		case 3:
		close2;
		warp("prt_in",80,100);
		end;
	}

	OnInit:
	waitingroom "Sala de Espera",20,strnpcinfo(NPC_NAME)+"::OnStartArena",1;
	enablewaitingroomevent;
	end;

	OnStartArena:
	killmonster(strnpcinfo(NPC_MAP), "kntTest#knightq::OnMyMobDead");
	killmonster(strnpcinfo(NPC_MAP), "kntTest#2knightq::OnMyMobDead");
	killmonster(strnpcinfo(NPC_MAP), "kntTest#3knightq::OnMyMobDead");
	warpwaitingpc(strnpcinfo(NPC_MAP),43,146);
	attachrid($@warpwaitingpc[0]);
	if (questprogress(9005)) { changequest(9005,9006); }
	donpcevent("kntTest#knightq::OnEnable");
	disablewaitingroomevent;
	end;

	OnStart:
	enablewaitingroomevent;
	end;

}

// ------------------------------------------------------------------
job_knt,1,1,0	script	kntTest#knightq	HIDDEN_NPC,{
	end;

	OnEnable:
	.KntMob = 8;
	monster(strnpcinfo(NPC_MAP),43,137,"Piere",PIERE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),43,155,"Piere",PIERE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),43,137,"Andre",ANDRE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),43,155,"Andre",ANDRE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),43,137,"Deniro",DENIRO,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),43,155,"Deniro",DENIRO,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),35,146,"Argos",ARGOS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),52,146,"Argos",ARGOS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	--.KntMob;
	if (.KntMob < 1) {
		mes "[Senhor Windsor]";
		mes "...";
		next;
		mes "[Senhor Windsor]";
		mes "...Agora para o próximo nível.";
		close2;
		warp(strnpcinfo(NPC_MAP),43,52);
		donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
		donpcevent("kntTest#2knightq::OnEnable");
		stopnpctimer;
	}
	end;

	OnTimer180000:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer181000:
	areawarp(strnpcinfo(NPC_MAP), 24, 126, 63, 165, "prt_in",80,100);
	end;

	OnTimer182000:
	stopnpctimer;
	donpcevent("Senhor Windsor#2knightq::OnStart");
	end;

}

// ------------------------------------------------------------------
job_knt,2,1,0	script	kntTest#2knightq	HIDDEN_NPC,{
	end;

	OnEnable:
	.KntMob2 = 6;
	monster(strnpcinfo(NPC_MAP),53,52,"Frilldora",FRILLDORA,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),34,52,"Frilldora",FRILLDORA,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),58,52,"Drainliar",DRAINLIAR,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),58,52,"Drainliar",DRAINLIAR,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),29,52,"Drainliar",DRAINLIAR,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),29,52,"Drainliar",DRAINLIAR,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	--.KntMob2;
	if (.KntMob2 < 1) {
		mes "[Senhor Windsor]";
		mes "...Hmm.";
		next;
		mes "[Senhor Windsor]";
		mes "...Para o último estágio.";
		close2;
		warp(strnpcinfo(NPC_MAP),143,152);
		donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
		donpcevent("kntTest#3knightq::OnEnable");
		stopnpctimer;
	}
	end;

	OnTimer180000:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer181000:
	areawarp(strnpcinfo(NPC_MAP),24,32, 63,71,"prt_in",80,100);
	end;

	OnTimer182000:
	stopnpctimer;
	donpcevent("Senhor Windsor#2knightq::OnStart");
	end;
}

// ------------------------------------------------------------------
job_knt,3,1,0	script	kntTest#3knightq	HIDDEN_NPC,{
	end;

	OnEnable:
	.KntMob3 = 5;
	monster(strnpcinfo(NPC_MAP),136,152,"Goblin",GOBLIN_1,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),150,152,"Goblin",GOBLIN_2,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),143,145,"Goblin",GOBLIN_3,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),143,167,"Goblin",GOBLIN_4,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),139,167,"Goblin",GOBLIN_5,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	initnpctimer;
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	--.KntMob3;
	if (.KntMob3 < 1) {
		mes "[Senhor Windsor]";
		mes "...";
		next;
		mes "[Senhor Windsor]";
		mes "...Muito bom.";
		next;
		mes "[Senhor Windsor]";
		mes "...Vá falar com a Senhorita Amy agora.";
		close2;
		knightq = 6;
		changequest(9006,9007);
		warp("prt_in",80,100);
		donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
		donpcevent("Senhor Windsor#2knightq::OnStart");
		stopnpctimer;
	}
	end;

	OnTimer180000:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer181000:
	areawarp(strnpcinfo(NPC_MAP),124,132, 163,171,"prt_in",80,100);
	end;

	OnTimer182000:
	stopnpctimer;
	donpcevent("Senhor Windsor#2knightq::OnStart");
	end;
}

// ------------------------------------------------------------------
prt_in,69,107,6	script	Senhorita Amy#knightq	4_F_JOB_KNIGHT,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Knight) {
			mes "[Senhorita Amy]";
			mes "Ah...!";
			mes "Eu me pergunto, por que você veio me visitar?";
			next;
			mes "[Senhorita Amy]";
			mes "Você não está tendo problemas como um Cavaleiro, está?";
			mes "Bem, eu acho você está se saindo bem.";
			next;
			mes "[Senhorita Amy]";
			mes "Claro!";
			mes "Você é um membro da Cavalaria de Prontera.";
			close;
		} else {
			mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" a Cavalaria de Prontera.";
			next;
			mes "[Senhorita Amy]";
			mes "Nós somos apenas cavaleiros, mas espero que goste da sua estadia aqui.";
			close;
		}
	} else {
		if (!knightq) {
			mes "[Senhorita Amy]";
			mes "Ooh, você é um Espadachim...?";
			mes "Você veio mudar sua classe para Cavaleiro?";
			next;
			mes "[Senhorita Amy]";
			mes "Para se candidatar, fale com o Capitão.";
			close;
		} else if (knightq < 6) {
			mes "[Senhorita Amy]";
			mes "Você tem que ir falar com outros cavaleiros antes de falar comigo.";
			close;
		} else if (knightq == 6) {
			mes "[Senhorita Amy]";
			mes "Hunnnm..";
			mes "O que você deseja?";
			next;
			if (select("O Senhor Windsor me enviou","Ah, nada") == 2) {
				mes "[Senhorita Amy]";
				mes "Certo...";
				close;
			} else {
				mes "[Senhorita Amy]";
				mes "Então está aqui para o teste de mudança de classe para cavaleiro?";
				next;
				mes "[Senhorita Amy]";
				mes "Tudo bem lhe farei algumas perguntas e quero que você responda como um cavaleiro deve responder.";
				mes "Então vou lhe dar um tempo para se preparar.";
				next;
				mes "[Senhorita Amy]";
				mes "Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" venha falar comigo novamente.";
				knightq = 7;
				changequest(9007,9008);
				close;
			}
		} else if (knightq == 7) {
			mes "[Senhorita Amy]";
			mes "Hmm?";
			mes "Você se preparou para responder minhas perguntas como um cavaleiro?";
			mes "o que você fez de errado";
			mes "Se falhar, eu vou ficar brava!";
			next;
			mes "[Senhorita Amy]";
			mes "Então escute cuidadosamente e responda como se você fosse um Cavaleiro.";
			mes "Bem, então, vamos começar!";
			next;
			mes "[Senhorita Amy]";
			mes "Você é um cavaleiro e você está procurando por um grupo em Morroc.";
			mes "Como é que você vai fazer para encontrar?";
			if (JobLevel == 50) { .@kntQ2 = 1; }
			next;
			if (select("Gritar que estou procurando","Abro um chat e espero","Procuro conversando") != 1) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Você formou um grupo com jogadores de niveis iguais.";
			mes "Há um Sacerdote, um Bruxo, um Caçador, um Assassino, e um Ferreiro...";
			next;
			mes "[Senhorita Amy]";
			mes "Vocês seis decidiram ir caçar e escolheram ir às Pirâmides.";
			next;
			mes "[Senhorita Amy]";
			mes "Vocês chegam até o Nível 4 das Pirâmides com o seu grupo.";
			mes "O que você deve fazer?";
			next;
			if (select("Checo a área a frente","Reúno os monstros para o grupo","Lidero o grupo á frente.") != 2) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Mas alguns jogadores rudes, vieram com um grupo de monstros e desapareceram!";
			mes "O que você deve fazer?";
			next;
			if (select("Defendo os membros restantes","Fujo no meu Peco Peco.") == 1) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Felizmente, todos sobreviveram á crise.";
			mes "Mas enquanto você anda, você encontra uma pessoa que não está no seu grupo, desabada no chão.";
			next;
			mes "[Senhorita Amy]";
			mes "A pessoa está pedindo educadamente por ajuda.";
			mes "O que você deve fazer?";
			next;
			if (select("Peço ao Sacerdote para ajudar","Digo que vou ajudar com Zeny","Ignoro e sigo em frente.") == 1) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Você deve despedir-se dos membros de seu grupo porque você deve ir para outro lugar.";
			next;
			mes "[Senhorita Amy]";
			mes "Mas você encontra um item raro durante a batalha.";
			mes "Qual sua ação?";
			next;
			if (select("Dou a quem mais merecer","Fico como ele pra mim","Decido com o grupo quem irá ficar") == 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Você acaba com o item e você vai para Prontera vendê-lo.";
			mes "Há muitas pessoas com lojas e salas abertas procurando vender itens.";
			next;
			mes "[Senhorita Amy]";
			mes "O que você deve fazer para vender seu item?";
			next;
			if (select("Grito bem alto para todos","Abro um chat e espero","Anuncio perguntando há alguém") != 1) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Enquanto você está esperando, alguém vem e implora por itens e zeny.";
			mes "O que você faz?";
			next;
			if (select("Dou-lhe alguns itens e zenys","Simplesmente o ignoro","Dou sugestões de um lugar para caçar.") == 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Agora você decide ir ao Labirinto da Floresta sozinho.";
			mes "Você feliz montad"+(Sex == SEX_MALE ? "o":"a")+" em seu Peco Peco.";
			next;
			mes "[Senhorita Amy]";
			mes "Mas você esbarra em alguém que está perdido.";
			mes "O que você deve fazer?";
			next;
			if (select("Digo onde é a saída","Levo a pessoa até a saída","Dou uma asa de borboleta.") != 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Você está caçando por um bom tempo, e agora você está com pouco HP!";
			mes "O que é muito perigoso.";
			next;
			mes "[Senhorita Amy]";
			mes "Então um sacerdote caminha próximo a você.";
			mes "Como você pediria ao Sacerdote uma Cura?";
			next;
			if (select("Poderia me curar, por favor?","Posso ser curado?","Me cure!!") != 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Agora você está muito exaust"+(Sex == SEX_MALE ? "o":"a")+" e é hora de voltar para a cidade.";
			next;
			mes "[Senhorita Amy]";
			mes "Então você encontra um item raro no chão.";
			mes "O que você faz?";
			next;
			if (select("Guardo o item","Procuro pelo dono","Apenas deixo jogado no chão") != 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Ok, este é o fim do meu teste!";
			next;
			if (.@kntQ2 < 8) {
				mes "[Senhorita Amy]";
				mes "Hmm...";
				mes "Para ser honesta, eu não acho que sua atitude é boa o suficiente para ser cavaleiro ainda.";
				next;
				mes "[Senhorita Amy]";
				mes "Se você realmente agir assim, todo mundo vai pensar que cavaleiros são rudes!";
				mes "Pense em como você respondeu as minhas perguntas e volte mais tarde.";
				close;
			} else {
				knightq = 8;
				changequest(9008,9009);
				mes "Bom trabalho, esse tipo de mentalidade é necessária para um Cavaleiro!";
				mes "Para o seu próximo teste, visite o Senhor Edmond.";
				next;
				mes "[Senhorita Amy]";
				mes "Eu vou farei comentários agradáveis sobre você para o capitão.";
				mes "Saia-se bem nos testes restantes, ok?";
				close;
			}
		} else if (knightq == 8 || knightq == 9 || knightq == 10) {
			mes "[Senhorita Amy]";
			mes "Você deve visitar o Senhor Edmond para seu próximo teste, ok?";
			close;
		} else {
			mes "[Senhorita Amy]";
			mes "Você ainda tem outros testes para fazer?";
			mes "Apresse-se e termine.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_in,70,99,6	script	Senhor Edmond#knightq	4_M_JOB_KNIGHT2,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Knight) {
			mes "[Senhor Edmond]";
			mes "Pense em sua mente como se houvesse água corrente.";
			next;
			mes "[Senhor Edmond]";
			mes "Água corrente não evita os obstáculos, que estão no seu caminho...";
			next;
			mes "[Senhor Edmond]";
			mes "Cavaleiros devem ser capaz de transmitir as coisas, como a água, em uma situação difícil.";
			close;
		} else {
			mes "[Senhor Edmond]";
			mes "Tudo neste mundo existe em harmonia.";
			mes "Viver sem interromper essa harmonia é o caminho certo para viver...";
			close;
		}
	} else {
		if (!knightq) {
			mes "[Senhor Edmond]";
			mes "Aqueles com pensamentos nefastos só sonham esses pensamentos.";
			mes "É melhor não ter sonhos em tudo do que ter sonhos de tristeza e desespero.";
			close;
		} else if (knightq == 8) {
			mes "[Senhor Edmond]";
			mes "Porque veio até a mim espadachim?";
			next;
			if (select("Gostaria de fazer o teste","Por nada") == 2) {
				mes "[Senhor Edmond]";
				mes "A vida que você quer em breve estará diante de seus olhos.";
				mes "Tudo virá em perfeita ordem.";
				close;
			} else {
				mes "[Senhor Edmond]";
				mes "Meu nome é Edmond Groster.";
				mes "Eu sou um membro da Cavalaria de Prontera.";
				next;
				mes "[Senhor Edmond]";
				mes "Cavaleiros estão sempre em posição para ajudar os outros.";
				mes "Portanto, você deve pensar modestamente sobre o mundo.";
				mes "E ter a personalidade para caber ao papel que você vai exercer.";
				next;
				mes "[Senhor Edmond]";
				mes "Você não deve tomar decisões precipitadas.";
				mes "Sua vontade deve dobrar-se como palha ou ser firme como pedra quando a situação pedir.";
				next;
				mes "[Senhor Edmond]";
				mes "Você não deve matar monstros sem motivo se não têm prazer em fazê-lo.";
				mes "Guarde este tempo para pensar calmamente sobre isso...";
				next;
				mes "[Senhor Edmond]";
				mes "Em seguida, deve começar o teste.";
				mes "Tenha em mente a qualidade de reverência.";
				if ($kntpatience) {
					next;
					mes "[Senhor Edmond]";
					mes "No momento alguém está passando pelo teste de paciência.";
					mes "Mostre sua calma e aguarde até que essa pessoa termine.";
					next;
					mes "[Senhor Edmond]";
					mes "Então venha falar comigo novamente.";
					close;
				} else {
					close2;
					knightq = 9;
					donpcevent("Patience#knightq::OnEnable");
					changequest(9009,9010);
					warp("job_knt",143,57);
					end;
				}
			}
		} else if (knightq == 9) {
			mes "[Senhor Edmond]";
			mes "Você foi muito descuidado no último teste.";
			mes "A Espada do Cavaleiro existe para proteger os outros.";
			mes "E não para atormentar os monstros mais fracos.";
			next;
			mes "[Senhor Edmond]";
			mes "Em um mundo onde tudo existe em harmonia.";
			mes "Você não pode deixar os seres humanos destruirem tudo continuamente sem propósito.";
			mes "Este princípio se aplica ao mundo real, não apenas para este teste.";
			next;
			mes "[Senhor Edmond]";
			mes "O teste irá começar.";
			mes "Me mostre sua paciencia...";
			close2;
			donpcevent("Patience#knightq::OnEnable");
			warp("job_knt",143,57);
			end;
		} else if (knightq == 10) {
			mes "[Senhor Edmond]";
			mes "Eu vi o seu caráter.";
			mes "Agora é hora de você fazer o teste final.";
			mes "Vá, e fale com o Senhor Gray...";
			knightq = 11;
			changequest(9010,9011);
			close;
		} else if (knightq == 11) {
			mes "[Senhor Edmond]";
			mes "Eu vi o seu caráter.";
			mes "Agora é hora de você fazer o teste final.";
			mes "Vá, e fale com o Senhor Gray...";
			close;
		} else {
			mes "[Senhor Edmond]";
			mes "A Espada do Cavaleiro existe para proteger os outros.";
			mes "E não para atormentar os monstros mais fracos.";
			close;
		}
	}
}

// ------------------------------------------------------------------
job_knt,4,1,0	script	Patience#knightq	HIDDEN_NPC,{
	OnInit:
	if ($kntpatience) { $kntpatience = 0; }
	disablenpc("Senhor Edmond#2knightq");
	stopnpctimer;
	end;

	OnEnable:
	monster(strnpcinfo(NPC_MAP),141,57,"Poring",PORING,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),145,57,"Poring",PORING,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),143,55,"Poring",PORING,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),143,59,"Poring",PORING,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),141,55,"Lunatico",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),141,59,"Lunatico",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),145,55,"Lunatico",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),145,59,"Lunatico",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),165,54,"Cogumelo",THIEF_MUSHROOM,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),165,57,"Cogumelo",THIEF_MUSHROOM,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),122,54,"Cogumelo",THIEF_MUSHROOM,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),122,57,"Cogumelo",THIEF_MUSHROOM,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	initnpctimer;
	end;

	OnDisable:
	$kntpatience = 0;
	stopnpctimer;
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMobDead");
	areawarp(strnpcinfo(NPC_MAP),124,36, 163,75,"prt_in",80,100);
	end;

	OnMobDead:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnTimer60000:
	enablenpc("Senhor Edmond#2knightq");
	end;

	OnTimer120000:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnDisable");
	end;
}

// ------------------------------------------------------------------
job_knt,143,63,4	script	Senhor Edmond#2knightq	4_M_JOB_KNIGHT2,{
	mes "[Senhor Edmond]";
	mes "Muito bem.";
	mes "Você mostrou a harmonia do espírito de um cavaleiro.";
	close2;
	knightq = 10;
	warp("prt_in",80,100);
	donpcevent("Patience#knightq::OnDisable");
	end;
}

// ------------------------------------------------------------------
prt_in,87,92,4	script	Senhor Gray#knightq	2_M_SWORDMASTER,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Knight) {
			mes "[Senhor Gray]";
			mes "O brilho da luz que brilha desta lâmina não pode ser dito em palavras.";
			mes "Esta é a arma que cada cavaleiro deve ter.";
			next;
			mes "[Senhor Gray]";
			mes "Sim...";
			mes "^3355FFClaymore^000000!";
			mes "Cada Cavaleiro gostaria de ter uma!";
			close;
		} else {
			mes "[Senhor Gray]";
			mes "Jovem, uma dica, use o seu tempo sabiamente.";
			next;
			mes "[Senhor Gray]";
			mes "Não tem sentido guardar mágoas uma vez que o tempo já passou.";
			close;
		}
	} else {
		if (knightq == 11) {
			mes "[Senhor Gray]";
			mes "Jovem Espadachim, o que posso fazer por você?";
			next;
			if (select("Gostaria de fazer o teste","Ah, nada.") == 2) {
				mes "[Senhor Gray]";
				mes "Tome cuidado!";
				mes "O tempo é a maior dádiva recebida pelos homens.";
				mes "Como você quer que seu tempo seja lembrado?";
				close;
			} else {
				mes "[Senhor Gray]";
				mes "Então você terminou todos os outros testes?";
				next;
				mes "[Senhor Gray]";
				mes "Então começaremos o meu?";
				mes "Não é realmente um teste.";
				next;
				mes "[Senhor Gray]";
				mes "Vamos conversar casualmente?";
				next;
				mes "[Senhor Gray]";
				mes "Primeiro...";
				mes "Por que você decidiu se tornar Cavaleiro?";
				next;
				switch (select("Para me tornar mais forte","Para ajudar meus amigos","Porque eu estou insatisfeito comigo")) {
					case 1:
					mes "[Senhor Gray]";
					mes "Para se tornar mais forte, você diz?";
					mes "Sim, os cavaleiros são fortes.";
					mes "Mas por que adquirir força?";
					next;
					mes "[Senhor Gray]";
					mes "É para mostrar aos outros?";
					mes "Para alcançar a fama?";
					mes "Ou você tem uma razão diferente?";
					mes "O que você acha que é tão bom quanto ganhar força como um Cavaleiro?";
					next;
					switch (select("Ganhar riqueza e fama","Poder me proteger","Poder proteger os outros.")) {
						case 1:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "Claro, a riqueza e a fama têm o seu lugar no mundo.";
						mes "Mas nós, como cavaleiros devemos viver para as virtudes mais elevadas.";
						next;
						break;
						case 2:
						mes "[Senhor Gray]";
						mes "Bom pensamento.";
						mes "Você deve primeiro ser capaz de se proteger, a fim de proteger os outros.";
						mes "Para isto, você deve treinar constantemente, e nunca ceder à preguiça.";
						next;
						break;
						case 3:
						mes "[Senhor Gray]";
						mes "Ah, uma idéia maravilhosa.";
						mes "A força de um Cavaleiro deve ser usada para proteger os fracos e defender a justiça.";
						next;
						mes "[Senhor Gray]";
						mes "Infelizmente, existem alguns cavaleiros que nos envergonham.";
						mes "Por esquecer os ideais que deveriam ser básicos para Cavalaria...";
						next;
						break;
					}
					break;
					case 2:
					mes "[Senhor Gray]";
					mes "Ah, para ajudar seus amigos, ou talvez até mesmo seu grupo.";
					mes "Nosso sábio e benevolente Rei Tristram III nos deu estas palavras de ouro...";
					next;
					mes "[Senhor Gray]";
					mes "^8B7500Após o rio calmo, existe uma cachoeira perigosa.";
					mes "Portanto, você deve sempre estar preparado para tudo...^000000";
					next;
					mes "[Senhor Gray]";
					mes "Assim, como você que pode ajudar seus amigos?";
					next;
					switch (select("Eles precisam de mim","Ganhando dinheiro","Eu posso protege-los")) {
						case 1:
						mes "[Senhor Gray]";
						mes "Qualquer pessoa, em qualquer lugar no mundo, tem um lugar onde eles são necessários.";
						mes "Nunca seja negligente com alguém que esteja em necessidade.";
						mes "Mesmo que ele não seja um membro da guilda.";
						next;
						break;
						case 2:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "É claro que a riqueza é importante.";
						mes "Mas nós cavaleiros devemos viver para as virtudes mais elevadas.";
						next;
						break;
						case 3:
						mes "[Senhor Gray]";
						mes "Ah, uma idéia maravilhosa.";
						mes "A força de um Cavaleiro deve ser usada para proteger os fracos e defender a justiça.";
						next;
						mes "[Senhor Gray]";
						mes "Infelizmente, há alguns cavaleiros que nos envergonham.";
						mes "Por esquecer os ideais que deveriam ser os básicos para a Cavalaria...";
						next;
						break;
					}
					break;
					case 3:
					.@kntQ3 += 1;
					mes "[Senhor Gray]";
					mes "Satisfação, você disse.";
					mes "Parece que você não se tornou um bom espadacim.";
					mes "Existe uma razão especial para que você deseje ser um Cavaleiro?";
					next;
					mes "[Senhor Gray]";
					mes "Eu não sei quanto a Espadachins.";
					mes "Mas Cavaleiros não permitem a auto-indulgência.";
					mes "Há aqueles tão obcecados por ganhar força que eles não conseguem se controlar.";
					next;
					mes "[Senhor Gray]";
					mes "Assim...";
					mes "Que parte de si mesmo não te satisfaz atualmente?";
					next;
					switch (select("Habilidades","Objetivo","Aparência.")) {
						case 1:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "Habilidade é algo que você ganha com a experiência como um Cavaleiro.";
						mes "Não pode ser seu maior objetivo.";
						mes "Caso contrário, você nunca ficará satisfeito como Cavaleiro.";
						next;
						break;
						case 2:
						if (.@kntQ3) { .@kntQ3 -= 1; }
						mes "[Senhor Gray]";
						mes "Eu vejo...";
						mes "Sempre ter uma meta é muito importante.";
						mes "Você pode estar cheio de idéias quando se tornar um cavaleiro.";
						mes "Mas isso pode mudar com o tempo.";
						next;
						break;
						case 3:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "Ah não...";
						mes "O que você vê não é o que realmente importa.";
						mes "Um espadachim pode ser mais forte do que um Cavaleiro.";
						mes "E até mesmo cavaleiro pode ficar fraco se ele se torna preguiçoso.";
						next;
						break;
					}
					break;
				}
				mes "[Senhor Gray]";
				mes "Eu entendo os seus pensamentos.";
				mes "Mas há aqueles que desejam tornar-se cavaleiros, sem pensar.";
				next;
				mes "[Senhor Gray]";
				mes "Aqueles são os que trazem problemas e envergonham a honra dos Cavaleiros.";
				mes "Trazendo resultados irreversíveis.";
				next;
				mes "[Senhor Gray]";
				mes "O mesmo vale para você.";
				mes "Depois de se tornar Cavaleiro, você nunca poderá se tornar um Espadachim novamente.";
				mes "Os deveres e responsabilidades de um cavaleiro estarão sempre com você.";
				next;
				mes "[Senhor Gray]";
				mes "Se você se tornar um Cavaleiro, o que você vai fazer primeiro?";
				next;
				switch (select("Eu irei direto para batalha","Existem pessoas esperando por mim","Vou aprender mais")) {
					case 1:
					mes "[Senhor Gray]";
					mes "Batalha...?";
					mes "E, em seguida?";
					next;
					switch (select("Ganhar level rápido","Testarei minhas habilidades","Viajarei")) {
						case 1:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "Não tenha muita pressa para se tornar forte.";
						mes "Mesmo que se torne Cavaleiro, você ainda será você mesmo.";
						next;
						break;
						case 2:
						mes "[Senhor Gray]";
						mes "Testar a si mesmo é uma coisa boa.";
						mes "Não há problema em ser feliz quando você mudar.";
						mes "Mas não se esqueça sobre as verdadeiras qualidades de ser um Cavaleiro.";
						next;
						break;
						case 3:
						mes "[Senhor Gray]";
						mes "Mesmo se você se tornar um Cavaleiro, você não está alterando o seu eu interior.";
						mes "Não há necessidade de sobrecarregar-se.";
						mes "Relaxe e leve as coisas passo a passo.";
						next;
						break;
					}
					break;
					case 2:
					mes "[Senhor Gray]";
					mes "Quem é que está esperando por você?";
					next;
					switch (select("Meus Amigos","Os membros do meu Clã","Meu amor")) {
						case 1:
						mes "[Senhor Gray]";
						mes "Eu entendo, eles querem compartilhar a alegria de suas conquistas.";
						mes "Nunca perca o seu bom coração, e sempre ajude os seus amigos.";
						next;
						break;
						case 2:
						mes "[Senhor Gray]";
						mes "Aqueles que desejam participar na sua felicidade e sofrimento.";
						mes "Como Cavaleiro, você deve sempre proteger.";
						next;
						break;
						case 3:
						if (.@kntQ3) { .@kntQ3 -= 1; }
						mes "[Senhor Gray]";
						mes "Oh, juventude!";
						mes "Tornando-se um Cavaleiro para o seu amor!";
						mes "Sempre proteja "+(Sex == SEX_MALE ? "ele":"ela")+" com o sacrifício de sua própria vida!";
						next;
						mes "[Senhor Gray]";
						mes "Também...";
						mes "Ame para sempre.";
						mes "Um sincero afeto é difícil de encontrar.";
						next;
						break;
					}
					break;
					case 3:
					mes "[Senhor Gray]";
					mes "Boa atitude...";
					mes "O que você planeja na aprendizagem?";
					next;
					switch (select("Lugares confortáveis","Os caminhos diferentes","Ganhar mais dinheiro")) {
						case 1:
						.@kntQ3 += 5;
						mes "[Senhor Gray]";
						mes "Há muitos lugares que são confortáveis ou desconfortáveis neste mundo.";
						mes "No entanto cavaleiros devem ser capazes de sobreviver em qualquer lugar.";
						next;
						break;
						case 2:
						mes "[Senhor Gray]";
						mes "Há muitos cavaleiros parecidos mundo a fora.";
						mes "Pense neles como veteranos e faça muitas perguntas.";
						next;
						break;
						case 3:
						.@kntQ3 += 5;
						mes "[Senhor Gray]";
						mes "Ah não.";
						mes "Você tem a riqueza como uma prioridade sendo um Cavaleiro?";
						mes "Nós não fomos treinados para ser assim.";
						next;
						break;
					}
					break;
				}
				mes "[Senhor Gray]";
				mes "Conversar com jovens é sempre agradável...";
				next;
				if (.@kntQ3 >= 5) {
					mes "[Senhor Gray]";
					mes "Mas fiquei desapontado com nossa conversa.";
					mes "Sinto em dizer, mas você ainda não está preparad"+(Sex == SEX_MALE ? "o":"a")+" para se juntar a Cavalaria.";
					mes "Pense, reflita sobre todos os testes que você teve aqui.";
					next;
					mes "[Senhor Gray]";
					mes "Só quando realmente compreender, o que é ser Cavaleiro.";
					mes "Venha conversar comigo novamente.";
					close;
				} else if (.@kntQ3 < 5 && .@kntQ3 > 0) {
					knightq = 12;
					changequest(9011,9012);
					mes "[Senhor Gray]";
					mes "E gostei de falar com você.";
					mes "Me fez lembrar quando também era jovem.";
					next;
					mes "[Senhor Gray]";
					mes "Podemos cometer erros, mas sempre devemos buscar corrigi-los.";
					next;
					mes "[Senhor Gray]";
					mes "Agora vá até o capitão, você terminou todos seus testes.";
					close;
				} else {
					knightq = 12;
					changequest(9011,9012);
					mes "[Senhor Gray]";
					mes "E gostei de falar com você.";
					mes "Me fez lembrar quando também era jovem.";
					next;
					mes "[Senhor Gray]";
					mes "Agora vá até o capitão, você terminou todos seus testes.";
					close;
				}
			}
		} else if (knightq == 12) {
			mes "[Senhor Gray]";
			mes "Todos os envolvidos agora vão cuidadosamente tomar sua decisão, de acordo com seu desempenho.";
			mes "Então vá falar com o capitão.";
			close;
		} else {
			mes "[Senhor Gray]";
			mes "Não perca seu valioso tempo.";
			mes "Vá completar os testes que lhe foram dado.";
			close;
		}
	}
}
