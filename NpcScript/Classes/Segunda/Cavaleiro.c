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
| - Info: Quest de Mudan�a de Classe para Cavaleiro.                |
\*-----------------------------------------------------------------*/

prt_in,88,101,4	script	Capit�o Herman#knightq	1_M_KNIGHTMASTER,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Knight) {
			mes "[Capit�o Herman]";
			mes "Espero que voc� esteja vivendo �s minhas expectativas.";
			mes "N�s prometemos ser fortes para o nosso reino.";
			mes "Mesmo que a morte seja uma consequ�ncia...";
			close;
		} else {
			mes "[Capit�o Herman]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "N�s, os cavaleiros orgulhosos da Cavalaria de Prontera, damos a vida pelo rei do nosso pa�s!";
			mes "Por favor, desfrute da sua estadia.";
			close;
		}
	} else {
		if (!knightq) {
			mes "[Capit�o Herman]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+", esta � a Cavalaria de Prontera.";
			mes "O que traz at� aqui?";
			next;
			if (select("Eu quero ser Cavaleiro","Estou apenas visitando.") == 1) {
				if (JobLevel < 40) {
					mes "[Capit�o Herman]";
					mes "Ah, voc� ainda n�o est� pronto para se tornar um Cavaleiro!";
					mes "Eu me esqueci de mencionar que precisa ter pelo menos o n�vel 40 de classe.";
					next;
					mes "[Capit�o Herman]";
					mes "Claro que eu entendo o seu forte desejo de se juntar a n�s, mas agora n�o � o momento.";
					mes "V� para fora e lute contra mais alguns monstros.";
					mes "N�s estaremos aqui esperando.";
					close;
				} else {
					mes "[Capit�o Herman]";
					mes "Antes de tudo, eu sou o capit�o da Cavalaria de Prontera, Herman Phon Efersirsus.";
					mes "Tenho o prazer de conhecer jovens que desejam ingressar na Cavalaria de Prontera.";
					next;
					mes "[Capit�o Herman]";
					mes "N�o podemos considerar os candidatos que ainda n�o s�o experientes o suficiente para se tornar cavaleiros.";
					next;
					mes "[Capit�o Herman]";
					mes "Uma vez se regitrad"+(Sex == SEX_MALE ? "o":"a")+", iniciamos o procedimento de mudan�a de classe.";
					mes "Gostaria de se registar agora?";
					next;
					if (select("Sim, agora mesmo","Vou pensar mais a respeito") == 1) {
						mes "Deixe-me ver...";
						mes "Seu nome � "+strcharinfo(PC_NAME)+"...";
						mes "� isso mesmo?";
						next;
						mes "[Capit�o Herman]";
						mes "Deixe-me explicar o procedimento de mudan�a de classe.";
						next;
						mes "[Capit�o Herman]";
						mes "Voc� deve visitar uma s�rie de cavaleiros e passar por cada um de seus testes.";
						next;
						mes "[Capit�o Herman]";
						mes "Uma vez que todos os testes forem conclu�dos.";
						mes "Cada cavaleiro envolvido em seu teste ir� se reunir e discutir o seu desempenho.";
						next;
						mes "[Capit�o Herman]";
						mes "Os cavaleiros devem aprov�-lo por unanimidade.";
						mes "Antes que voc� participe da Cavalaria de Prontera.";
						mes "Se apenas um pessoa te reprovar, voc� deve come�ar todos os teste de novo.";
						next;
						mes "[Capit�o Herman]";
						mes "Mas eu acredito que se voc� persistir com um cora��o sincero.";
						mes "Voc� ser� reconhecido pelos cavaleiros e, finalmente ser� visto como um membro da nossa Cavalaria.";
						next;
						mes "[Capit�o Herman]";
						mes "Ent�o, n�o vamos perder mais tempo falando!";
						mes "V� falar com esses cavaleiros e comece os testes.";
						mes "Depois de ter completado todos os testes, volte e fale comigo.";
						knightq = 1;
						setquest(9000);
						close;
					} else {
						mes "[Capit�o Herman]";
						mes "Ah...!";
						mes "Bem, eu n�o quero pressionar.";
						mes "Reserve um tempo para pensar sobre isso.";
						mes "Volte quando voc� estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para a mudan�a de classe.";
						close;
					}
				}
			} else {
				mes "[Capit�o Herman]";
				mes "Vamos pensar sobre isso, voc� n�o � um espadachim?";
				mes "Parece que voc� encontrou muitos inimigos no campo de batalha.";
				next;
				mes "[Capit�o Herman]";
				mes "Se tiver interessad"+(Sex == SEX_MALE ? "o":"a")+" voc� poderia se tornar membro da Cavalaria.";
				mes "L�gico se tornando Cavaleiro.";
				close;
			}
		} else if (knightq == 1 || knightq == 2) {
			mes "Mmm?";
			mes strcharinfo(PC_NAME)+", o que posso fazer por voc�?";
			mes "Ah, voc� n�o sabe quem visitar?";
			next;
			mes "[Capit�o Herman]";
			mes "Acredito que os cavaleiros encarregados do teste criaram uma ordem na qual voc� deve visit�-los.";
			mes "Acho que isso ajuda o processo de testes.";
			next;
			mes "[Capit�o Herman]";
			mes "Primeiro, v� visitar o Senhor Andrew para o seu primeiro teste.";
			mes "N�o fique muito nervos"+(Sex == SEX_MALE ? "o":"a")+", ele vai explicar tudo quando voc� falar com ele.";
			close;
		} else if (knightq == 3) {
			mes "[Capit�o Herman]";
			mes "V� at� Senhor Siracuse e fa�a seu teste.";
			close;
		} else if (knightq == 4 || knightq == 5) {
			mes "[Capit�o Herman]";
			mes "V� at� o Senhor Windsor para o seu pr�ximo teste.";
			mes "Ou�a com aten��o os Cavaleiros encarregados dos testes.";
			close;
		} else if (knightq == 6 || knightq == 7) {
			mes "[Capit�o Herman]";
			mes "V� visitar a Senhorita Amy e fa�a seu teste.";
			mes "Certifique-se de prestar aten��o em quem voc� deve ir para o pr�ximo teste.";
			close;
		} else if (knightq == 8 || knightq == 9 || knightq == 10) {
			mes "[Capit�o Herman]";
			mes "Agora, v� falar com o Senhor Edmond.";
			mes "Ele ir� ser respons�vel pelo seu pr�ximo teste.";
			close;
		} else if (knightq == 11) {
			mes "[Capit�o Herman]";
			mes "Voc� s� tem que visitar mais uma pessoa.";
			mes "O Cavaleiro encarregado do teste final � o Senhor Gray Pr�spero o Cavaleiro Modesto.";
			next;
			mes "[Senhor Edmond]";
			mes "Este mundo opera de acordo a lei de causa e efeito.";
			mes "Tudo ser� revelado no final.";
			next;
			mes "[Capit�o Herman]";
			mes "Esteja alerta e fa�a seu melhor, por que � seu �ltimo teste.";
			next;
			mes "[Capit�o Herman]";
			mes "Retorne at� mim depois de ter completado o teste final.";
			close;
		} else if (knightq == 12) {
			if (SkillPoint) {
				mes "[Capit�o Herman]";
				mes "Nossa...!";
				mes "Voc� n�o pode mudar de classe, se voc� tem pontos de habilidade restantes.";
				mes "Volte depois de ter distribu�do todos os seus pontos de habilidade.";
				close;
			} else {
				mes "[Capit�o Herman]";
				mes "Nossa, voc� j� completou todos os testes?";
				mes "Mas nem todos os que terminaram os testes podem se tornar Cavaleiro.";
				next;
				mes "[Capit�o Herman]";
				mes "Durante o teste, veja se voc� foi leal, honrado e se voc� � forte.";
				mes "Tamb�m veja se voc� foi cort�s e se voc� sabe o valor da mod�stia e rever�ncia.";
				next;
				mes "[Capit�o Herman]";
				mes "Atrav�s deste processo, eu tamb�m observarei suas a��es.";
				mes "Todas as sete de nossas opini�es ser�o refletidas na decis�o de sua mudan�a de classe.";
				next;
				mes "[Capit�o Herman]";
				mes "Ent�o...";
				mes "Ouviremos os pensamentos de todos!";
				mes "Andrew, o que voc� acha?";
				next;
				mes "[Senhor Andrew]";
				if (JobLevel == 50) {
					mes "O que posso dizer?";
					mes "Eu aprovo!";
					mes "Tendo vivido como Espadachim at� agora � suficiente.";
				} else {
					mes "Ele tem juntado itens que s�o dif�ceis de conseguir.";
					mes "Eu aprovo!";
					mes "Acredito que "+(Sex == SEX_MALE ? "ele":"ela")+" vai continur a ser fiel.";
					mes "Mesmo depois de se tornar Cavaleiro.";
				}
				next;
				mes "[Capit�o Herman]";
				mes "Hum.";
				mes "Que revis�o interessante.";
				mes "Senhor Siracuse, qual foi sua avalia��o?";
				next;
				mes "[Senhor Siracuse]";
				mes "Muito bem.";
				mes "N�o � bem o que eu gostaria, mas espero que se torne melhor no futuro.";
				next;
				mes "[Senhor Siracuse]";
				mes "Depois de se tornar Cavaleiro, voc� deve construir uma boa reputa��o atrav�s da honra.";
				mes "Eu aprovo.";
				next;
				mes "[Capit�o Herman]";
				mes "Ok...";
				mes "Windsor, o que voc� acha?";
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
				mes "[Capit�o Herman]";
				mes "Ent�o, vamos ouvir a opini�o da Ana.";
				next;
				mes "[Senhorita Amy]";
				if (Sex == SEX_MALE) {
					mes "Hum...";
					mes "Ele � t�o educado!";
					mes "Vai crescer para ser um cavaleiro maravilhoso.!";
				} else {
					mes "Hum...";
					mes "Ela deve ser famosa!";
					mes "� muito simp�tica e tamb�m muito bonita, assim ganha mais alguns pontos!";
					mes "Eu n�o deveria estar dizendo essas coisas!";
				}
				next;
				mes "[Capit�o Herman]";
				mes "Bem...";
				mes "Uma avalia��o estranha, mas eu acredito que ela aprove.";
				mes "Edmond, diga sua opini�o.";
				next;
				mes "[Senhor Edmond]";
				if (Sex == SEX_MALE) {
					mes "Ele parece um pouco bruto, mas algo brilha dentro dele.";
					mes "Com um polimento, seu verdadeiro valor vai brilhar como o sol.";
				} else {
					mes "� dif�cil ver, mas h� uma beleza espiritual dentro dela.";
					mes "Com um polimento, seu verdadeiro valor vai brilhar como o resplendor da lua.";
				}
				next;
				mes "[Capit�o Herman]";
				mes "Por fim...";
				mes "Gray, gostaria de ouvir sua avalia��o.";
				next;
				mes "[Gray]";
				mes "Jovem  "+(Sex == SEX_MALE ? "cavalheiro":"dama")+" vindo aqui com a determina��o de se tornar Cavaleiro";
				mes "� o suficiente...";
				next;
				mes "[Capit�o Herman]";
				mes "Todos o aprovaram.";
				mes "Ningu�m se op�s.";
				mes "Ent�o eu direi a minha opini�o.";
				next;
				mes "[Capit�o Herman]";
				mes "Minha decis�o �...";
				next;
				mes "[Capit�o Herman]";
				mes "Eu aprovo.";
				next;
				mes "[Capit�o Herman]";
				mes "Voc� pode n�o ter terminado todos os testes perfeitamente.";
				mes "Mas tem todas as qualidades necess�rias para se tornar Cavaleiro.";
				next;
				.@level = JobLevel;
				jobchange(Job_Knight);
				completequest(9012);
				callfunc("ClearJobQuest2nd",7);
				getitem(Awakening_Potion,7);
				mes "[Capit�o Herman]";
				mes "Declaro voc� membro da Cavalaria de Prontera.";
				mes "Proteja os fracos e viva com honra.";
				next;
				if (.@level == 50) {
					mes "[Capit�o Herman]";
					mes "Ei...";
					mes "N�s preparamos um pequeno presente para parabeniz�-lo por sua mudan�a de classe.";
					mes "Por favor use-o quando voc� estiver em batalha enquanto voc� estiver honradamente protegendo os outros.";
					getitem(Claymore,1);
					next;
				}
				mes "[Capit�o Herman]";
				mes "V� em frente!";
				mes "O futuro de Rune-Midgard ser� carregado em seus ombros!";
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
prt_in,75,107,4	script	Senhor Andrew#knightq	1_M_YOUNGKNIGHT,{
	if (BaseJob == Job_Knight) {
		mes "[Senhor Andrew]";
		mes "Voc� deve ser um membro da Cavalaria.";
		mes "Como voc� est�?";
		next;
		mes "[Senhor Andrew]";
		mes "Voc� deve trabalhar arduamente para recolher alimentos.";
		mes "Bem como juntar zeny para comprar equipamentos.";
		mes "Guarde tudo o que voc� encontrar em batalha, mesmo um pequeno Jellopy.";
		close;
	} else if (!knightq) {
		mes "[Senhor Andrew]";
		mes "N�s, os membros da";
		mes "Cavalaria de Prontera, estamos dando o nosso melhor para proteger a paz neste mundo.";
		next;
		mes "[Senhor Andrew]";
		mes "Mesmo durante as batalhas que enfrentamos a cada dia.";
		mes "Sonhamos com um futuro brilhante que est� por vir.";
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
			mes "Seu nome � "+strcharinfo(PC_NAME)+", correto?";
			next;
			mes "[Senhor Andrew]";
			mes "Eu sou um Cavaleiro da Cavalaria de Prontera, Andrew Shylock.";
			mes "Eu sou respons�vel por seu primeiro teste.";
			next;
			mes "[Senhor Andrew]";
			mes "Eu vou estar testando o seu sentido de lealdade.";
			mes "Cada cavaleiro deve possuir esta virtude.";
			mes "Para este exame, voc� estar� recolhendo pr�mios do campo de batalha.";
			next;
			if (JobLevel != 50) {
				mes "[Senhor Andrew]";
				mes "Sem mais delongas, vamos come�ar!";
				mes "V� e reuna os seguintes itens...";
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
				mes "Estarei esperando aqui voc� trazer os os itens listados.";
				mes "At� breve.";
				close;
			} else {
				mes "[Senhor Andrew]";
				mes "Hum...?";
				mes "Espere a�.";
				mes "Voc� parece ter dominado totalmente as habilidades de um Espadachim.";
				next;
				mes "[Senhor Andrew]";
				mes "Impressionante...!";
				mes "Pensando bem, n�o acho que a sua lealdade precisa ser testada.";
				next;
				mes "[Senhor Andrew]";
				mes "Por favor, v� at� o meu colega Senhor Siracuse.";
				mes "Ele lhe dar� o seu pr�ximo teste.";
				mes "�timo trabalho dominando as habilidades de Espadachim.";
				knightq = 3;
				changequest(9000,9003);
				close;
			}
		} else {
			mes "[Senhor Andrew]";
			mes "Bem, ent�o...";
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
		mes "Voc� re�niu todos os itens?";
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
			mes "N�s apreciamos o seu esfor�o em reunir esses itens.";
			mes "Estes ser�o utilizados para apoiar as finan�as da Cavalaria.";
			next;
			mes "[Senhor Andrew]";
			mes "Por favor, visite o meu colega Senhor Siracuse.";
			mes "E continue os testes com a dedica��o e lealdade que voc� mostrou para mim hoje.";
			close;
		} else {
			mes "[Senhor Andrew]";
			mes "Espere, espere...";
			mes "Acho que ainda est�o faltando alguns itens.";
			mes "No caso de voc� tenha esquecido...";
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
			mes "Por favor, fa�a este teste a s�rio e com sinceridade.";
			mes "Agora, eu estarei esperando por voc� quando trazer todos os itens.";
			close;

		}
	} else if (knightq == 3) {
		mes "[Senhor Andrew]";
		mes "Voc� deve ir e fazer o teste seguinte.";
		mes "Depressa, o Senhor Siracuse est� esperando por voc�.";
		close;
	} else {
		mes "[Senhor Andrew]";
		mes "Com est� os testes?";
		mes "Desejo-lhe boa sorte.";
		close;
	}
}

// ------------------------------------------------------------------
prt_in,71,91,0	script	Senhor Siracuse#knightq	1_M_YOUNGKNIGHT,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Knight) {
			mes "[Senhor Siracuse]";
			mes "Ol�!";
			mes "Como voc� est�?";
			next;
			mes "[Senhor Siracuse]";
			mes "N�s estivemos testando novos membros.";
			mes "Mas nem todos eles s�o promissores como voc�.";
			next;
			mes "[Senhor Siracuse]";
			mes "Espero que todos estes novos recrutas se comportem.";
			mes "E n�o tragam vergonha para a Cavalaria.";
			next;
			mes "[Senhor Siracuse]";
			mes "Se voc� pegar qualquer um dos novos recrutas agindo de forma impr�pria para um cavaleiro.";
			mes "Eepreenda-os para mim por favor?";
			close;
		} else {
			mes "[Senhor Siracuse]";
			mes "Ataque e defesa.";
			mes "Existe uma maneira de ter ambos sem comprometer um ao outro?";
			next;
			mes "[Senhor Siracuse]";
			mes "Armas de duas m�os pode melhorar o seu ataque, mas diminue suas defesas.";
			mes "Existe algo que possa superar essa fraqueza?";
			next;
			mes "[Senhor Siracuse]";
			mes "Uma arma ou algum tipo de t�cnica que ajudasse muito aos Cavaleiros...";
			close;
		}
	} else {
		if (knightq < 3) {
			mes "[Senhor Siracuse]";
			mes "Ataque e defesa.";
			mes "Existe uma maneira de ter ambos sem comprometer um ao outro?";
			next;
			mes "[Senhor Siracuse]";
			mes "Armas de duas m�os pode melhorar o seu ataque, mas diminue suas defesas.";
			mes "Existe algo que possa superar essa fraqueza?";
			next;
			mes "[Senhor Siracuse]";
			mes "Uma arma ou algum tipo de t�cnica que ajudasse muito aos Cavaleiros...";
			close;
		} else if (knightq == 3) {
			mes "[Senhor Siracuse]";
			mes "Voc� tem algo para me perguntar?";
			next;
			if (select("Gostaria de fazer o teste","Ah, nada.") == 2) {
				mes "[Senhor Siracuse]";
				mes "Hmmm...?";
				mes "Certo.";
				mes "� s� que voc� tem aquele olhar em seu rosto...";
				close;
			} else {
				if (!knightq2) {
					mes "[Senhor Siracuse]";
					mes "Eu vejo, voc� passou no primeiro teste.";
					mes "Muito bem, eu vou dar algum tempo para voc�.";
					mes "Deixe-me apresentar-me.";
					mes "Meu nome � James Siracusa.";
					next;
					mes "[Senhor Siracuse]";
					mes "Este teste vai medir o quanto voc� sabe sobre Cavalaria.";
					mes "Mais importante, eu quero saber seus pensamentos sobre honra.";
					next;
					mes "[Senhor Siracuse]";
					mes "N�o fique nervos"+(Sex == SEX_MALE ? "o":"a")+", n�o vou tomar muito tempo.";
					mes "Estas ser�o perguntas r�pidas.";
					mes "Al�m disso, voc� ainda tem que ver os outros, certo?";
					next;
					mes "[Senhor Siracuse]";
					mes "Bem, vamos come�ar.";
					mes "Por favor responda prontamente.";
					next;
				} else {
					mes "[Senhor Siracuse]";
					mes "O que...";
					mes "Voc� denovo?";
					next;
					if (select("Gostaria de tentar novamente","Desculpe n�o � nada") == 2) {
						mes "[Senhor Siracuse]";
						mes "Ent�o n�o gaste meu tempo.";
						close;
					} else {
						mes "[Senhor Siracuse]";
						mes "� isso mesmo?";
						mes "Tem certeza de que est� preparado desta vez?";
						next;
						mes "[Senhor Siracuse]";
						mes "Certo, ent�o, aqui vamos n�s outra vez...";
						next;
					}
				}
				mes "[Senhor Siracuse]";
				mes "Um Cavaleiro deve possuir grande for�a.";
				mes "Defesa, velocidade e habilidade para manejar uma espada de duas m�os.";
				mes "Qual das seguintes armas n�o � afetada pela habilidade Velocidade com Espada de 2 M�os?";
				next;
				if (select("Katan�","Espada Matadora","Espada Larga","Flamberge") != 4) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Bom, agora deixe-me perguntar sobre algumas habilidades.";
				mes "Qual das seguintes habilidades n�o � necess�ria aprender Impacto de Tyr?";
				next;
				if (select("Per�cia com Espada de Duas M�os","Impacto Explosivo","Provocar","Golpe Fulminante") != 3) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Cavaleiros tamb�m podem usar Lan�as.";
				mes "Ao contr�rio de outras classes, e tamb�m tem per�cia com a Lan�as.";
				mes "Quais as habilidades n�o s�o necess�rios para aprender a habilidade Brandir Lan�a?";
				next;
				if (select("Perfurar","Estocada","Lan�a Bumerangue","Montaria") != 4) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Algumas Lan�as tamb�m t�m atributos m�gicos, assim como magias.";
				mes "Das seguintes lan�as podem atacar um Pesadelo que tem o atributo Fantasma?";
				next;
				if (select("Zephyrus","Lan�a","Guisarme-Bico","Foice") != 1) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Quando voc� se torna um Cavaleiro voc� pode montar um Peco Peco.";
				mes "No entanto, sua velocidade de ataque diminui quando voc� est� montado em um Peco Peco.";
				next;
				mes "[Senhor Siracuse]";
				mes "Mas, voc� pode contrariar esta diminui��o da velocidade.";
				mes "Se voc� aprender a habilidade Per�cia em Montaria.";
				mes "Qual a percentagem de sua velocidade de ataque normal voc� ter� ap�s a aprendizagem de Per�cia em Montaria n�vel 3?";
				next;
				if (select("70% de velocidade","80% de velocidade","90% de velocidade","100% da velocidade") != 2) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Bem, Bem...";
				mes "Tenho certeza que voc� sabe bastante sobre Cavaleiros.";
				mes "Agora, deixe-me fazer algumas perguntas pessoais sobre Cavaleiros.";
				next;
				mes "[Senhor Siracuse]";
				mes "O que voc� deve fazer quando voc� topar com um Novato pedindo ajuda na cidade?";
				next;
				if (select("Ensino a ele","Chamo ele para o grupo","Dou zenys e itens.") == 3) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Certo...";
				mes "Agora, como deve ser sua a��o dentro de um grupo?";
				next;
				if (select("Protejo a todos","Re�no monstros s� para mim","Pego o m�ximo de itens poss�vel") != 1) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Por fim...";
				mes "Qual � o valor mais importante que um Cavaleiro deve possuir?";
				next;
				if (select("Honra","Riqueza","Status") != 1) {
					.@kntQ += 1;
				}
				mes "[Senhor Siracuse]";
				mes "Bem, ent�o, este � o fim do meu teste.";
				next;
				if (.@kntQ >= 2) {
					knightq2 = 1;
					mes "[Senhor Siracuse]";
					mes "E de acordo com as respostas que me deu.";
					mes "Voc� ainda tem muito a aprender sobre os Cavaleiros.";
					next;
					mes "[Senhor Siracuse]";
					mes "Procure por outros cavaleiros e pergute a eles sobre o que � ser um cavaleiro.";
					close;
				} else if (.@kntQ >= 1) {
					mes "[Senhor Siracuse]";
					mes "E de acordo com as respostas que me deu.";
					mes "Voc� ainda tem muito a aprender sobre os Cavaleiros.";
					next;
					mes "[Senhor Siracuse]";
					mes "Mas vejo que mesmo n�o respondendo tudo como deveria.";
					mes "Vejo que voc� tem potencial, e para mim isso j� � o bastante.";
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
				mes "Para o seu pr�ximo teste, v� ver o Senhor Windsor.";
				mes "Ele � muito calmo e de poucas palavras.";
				mes "Mas n�o deixe que ele chegue at� voc�.";
				next;
				mes "[Senhor Siracuse]";
				mes "Na verdade eu acho ele um cara muito estranho.";
				mes "Mas por favor, deixe esse meu coment�rio entre n�s mesmo.";
				close;
			}
		} else if (knightq == 4 || knightq == 5) {
			mes "[Senhor Siracuse]";
			mes "Desculpe, mas eu estou ocupado no momento.";
			mes "Voc� deve ir ver o Senhor Windsor.";
			close;
		} else {
			mes "[Senhor Siracuse]";
			mes "Desculpe, mas eu estou ocupado no momento.";
			mes "Voc� deve ir terminar o resto de seus testes.";
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
			mes "Ah, sim, o teste de admis�o...";
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
	switch (select("Que tipo de teste � esse?","Como posso fazer o teste?","Eu quero de sair")) {
		case 1:
		mes "[Senhor Windsor]";
		mes "...Voc� lutar� contra monstros.";
		next;
		mes "[Senhor Windsor]";
		mes "...Mate todos eles.";
		next;
		mes "[Senhor Windsor]";
		mes "...";
		next;
		mes "[Senhor Windsor]";
		mes "...Tr�s est�gios.";
		mes "Ven�a todos.";
		next;
		mes "[Senhor Windsor]";
		mes "......3 minutos para cada est�gio.";
		next;
		mes "[Senhor Windsor]";
		mes "..........";
		close;
		case 2:
		mes "[Senhor Windsor]";
		mes "...Entre na sala de espera.";
		next;
		mes "[Senhor Windsor]";
		mes "...Em seguida, come�ar�.";
		next;
		mes "[Senhor Windsor]";
		mes "...";
		next;
		mes "[Senhor Windsor]";
		mes "...Voc� tem que esperar se algu�m estiver sendo testado.";
		next;
		mes "[Senhor Windsor]";
		mes "...Voc� pode come�ar depois que a pessoa sair.";
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
		mes "...Agora para o pr�ximo n�vel.";
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
		mes "...Para o �ltimo est�gio.";
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
		mes "...V� falar com a Senhorita Amy agora.";
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
			mes "Eu me pergunto, por que voc� veio me visitar?";
			next;
			mes "[Senhorita Amy]";
			mes "Voc� n�o est� tendo problemas como um Cavaleiro, est�?";
			mes "Bem, eu acho voc� est� se saindo bem.";
			next;
			mes "[Senhorita Amy]";
			mes "Claro!";
			mes "Voc� � um membro da Cavalaria de Prontera.";
			close;
		} else {
			mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" a Cavalaria de Prontera.";
			next;
			mes "[Senhorita Amy]";
			mes "N�s somos apenas cavaleiros, mas espero que goste da sua estadia aqui.";
			close;
		}
	} else {
		if (!knightq) {
			mes "[Senhorita Amy]";
			mes "Ooh, voc� � um Espadachim...?";
			mes "Voc� veio mudar sua classe para Cavaleiro?";
			next;
			mes "[Senhorita Amy]";
			mes "Para se candidatar, fale com o Capit�o.";
			close;
		} else if (knightq < 6) {
			mes "[Senhorita Amy]";
			mes "Voc� tem que ir falar com outros cavaleiros antes de falar comigo.";
			close;
		} else if (knightq == 6) {
			mes "[Senhorita Amy]";
			mes "Hunnnm..";
			mes "O que voc� deseja?";
			next;
			if (select("O Senhor Windsor me enviou","Ah, nada") == 2) {
				mes "[Senhorita Amy]";
				mes "Certo...";
				close;
			} else {
				mes "[Senhorita Amy]";
				mes "Ent�o est� aqui para o teste de mudan�a de classe para cavaleiro?";
				next;
				mes "[Senhorita Amy]";
				mes "Tudo bem lhe farei algumas perguntas e quero que voc� responda como um cavaleiro deve responder.";
				mes "Ent�o vou lhe dar um tempo para se preparar.";
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
			mes "Voc� se preparou para responder minhas perguntas como um cavaleiro?";
			mes "o que voc� fez de errado";
			mes "Se falhar, eu vou ficar brava!";
			next;
			mes "[Senhorita Amy]";
			mes "Ent�o escute cuidadosamente e responda como se voc� fosse um Cavaleiro.";
			mes "Bem, ent�o, vamos come�ar!";
			next;
			mes "[Senhorita Amy]";
			mes "Voc� � um cavaleiro e voc� est� procurando por um grupo em Morroc.";
			mes "Como � que voc� vai fazer para encontrar?";
			if (JobLevel == 50) { .@kntQ2 = 1; }
			next;
			if (select("Gritar que estou procurando","Abro um chat e espero","Procuro conversando") != 1) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Voc� formou um grupo com jogadores de niveis iguais.";
			mes "H� um Sacerdote, um Bruxo, um Ca�ador, um Assassino, e um Ferreiro...";
			next;
			mes "[Senhorita Amy]";
			mes "Voc�s seis decidiram ir ca�ar e escolheram ir �s Pir�mides.";
			next;
			mes "[Senhorita Amy]";
			mes "Voc�s chegam at� o N�vel 4 das Pir�mides com o seu grupo.";
			mes "O que voc� deve fazer?";
			next;
			if (select("Checo a �rea a frente","Re�no os monstros para o grupo","Lidero o grupo � frente.") != 2) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Mas alguns jogadores rudes, vieram com um grupo de monstros e desapareceram!";
			mes "O que voc� deve fazer?";
			next;
			if (select("Defendo os membros restantes","Fujo no meu Peco Peco.") == 1) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Felizmente, todos sobreviveram � crise.";
			mes "Mas enquanto voc� anda, voc� encontra uma pessoa que n�o est� no seu grupo, desabada no ch�o.";
			next;
			mes "[Senhorita Amy]";
			mes "A pessoa est� pedindo educadamente por ajuda.";
			mes "O que voc� deve fazer?";
			next;
			if (select("Pe�o ao Sacerdote para ajudar","Digo que vou ajudar com Zeny","Ignoro e sigo em frente.") == 1) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Voc� deve despedir-se dos membros de seu grupo porque voc� deve ir para outro lugar.";
			next;
			mes "[Senhorita Amy]";
			mes "Mas voc� encontra um item raro durante a batalha.";
			mes "Qual sua a��o?";
			next;
			if (select("Dou a quem mais merecer","Fico como ele pra mim","Decido com o grupo quem ir� ficar") == 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Voc� acaba com o item e voc� vai para Prontera vend�-lo.";
			mes "H� muitas pessoas com lojas e salas abertas procurando vender itens.";
			next;
			mes "[Senhorita Amy]";
			mes "O que voc� deve fazer para vender seu item?";
			next;
			if (select("Grito bem alto para todos","Abro um chat e espero","Anuncio perguntando h� algu�m") != 1) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Enquanto voc� est� esperando, algu�m vem e implora por itens e zeny.";
			mes "O que voc� faz?";
			next;
			if (select("Dou-lhe alguns itens e zenys","Simplesmente o ignoro","Dou sugest�es de um lugar para ca�ar.") == 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Agora voc� decide ir ao Labirinto da Floresta sozinho.";
			mes "Voc� feliz montad"+(Sex == SEX_MALE ? "o":"a")+" em seu Peco Peco.";
			next;
			mes "[Senhorita Amy]";
			mes "Mas voc� esbarra em algu�m que est� perdido.";
			mes "O que voc� deve fazer?";
			next;
			if (select("Digo onde � a sa�da","Levo a pessoa at� a sa�da","Dou uma asa de borboleta.") != 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Voc� est� ca�ando por um bom tempo, e agora voc� est� com pouco HP!";
			mes "O que � muito perigoso.";
			next;
			mes "[Senhorita Amy]";
			mes "Ent�o um sacerdote caminha pr�ximo a voc�.";
			mes "Como voc� pediria ao Sacerdote uma Cura?";
			next;
			if (select("Poderia me curar, por favor?","Posso ser curado?","Me cure!!") != 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Agora voc� est� muito exaust"+(Sex == SEX_MALE ? "o":"a")+" e � hora de voltar para a cidade.";
			next;
			mes "[Senhorita Amy]";
			mes "Ent�o voc� encontra um item raro no ch�o.";
			mes "O que voc� faz?";
			next;
			if (select("Guardo o item","Procuro pelo dono","Apenas deixo jogado no ch�o") != 3) {
				.@kntQ2 += 1;
			}
			mes "[Senhorita Amy]";
			mes "Ok, este � o fim do meu teste!";
			next;
			if (.@kntQ2 < 8) {
				mes "[Senhorita Amy]";
				mes "Hmm...";
				mes "Para ser honesta, eu n�o acho que sua atitude � boa o suficiente para ser cavaleiro ainda.";
				next;
				mes "[Senhorita Amy]";
				mes "Se voc� realmente agir assim, todo mundo vai pensar que cavaleiros s�o rudes!";
				mes "Pense em como voc� respondeu as minhas perguntas e volte mais tarde.";
				close;
			} else {
				knightq = 8;
				changequest(9008,9009);
				mes "Bom trabalho, esse tipo de mentalidade � necess�ria para um Cavaleiro!";
				mes "Para o seu pr�ximo teste, visite o Senhor Edmond.";
				next;
				mes "[Senhorita Amy]";
				mes "Eu vou farei coment�rios agrad�veis sobre voc� para o capit�o.";
				mes "Saia-se bem nos testes restantes, ok?";
				close;
			}
		} else if (knightq == 8 || knightq == 9 || knightq == 10) {
			mes "[Senhorita Amy]";
			mes "Voc� deve visitar o Senhor Edmond para seu pr�ximo teste, ok?";
			close;
		} else {
			mes "[Senhorita Amy]";
			mes "Voc� ainda tem outros testes para fazer?";
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
			mes "Pense em sua mente como se houvesse �gua corrente.";
			next;
			mes "[Senhor Edmond]";
			mes "�gua corrente n�o evita os obst�culos, que est�o no seu caminho...";
			next;
			mes "[Senhor Edmond]";
			mes "Cavaleiros devem ser capaz de transmitir as coisas, como a �gua, em uma situa��o dif�cil.";
			close;
		} else {
			mes "[Senhor Edmond]";
			mes "Tudo neste mundo existe em harmonia.";
			mes "Viver sem interromper essa harmonia � o caminho certo para viver...";
			close;
		}
	} else {
		if (!knightq) {
			mes "[Senhor Edmond]";
			mes "Aqueles com pensamentos nefastos s� sonham esses pensamentos.";
			mes "� melhor n�o ter sonhos em tudo do que ter sonhos de tristeza e desespero.";
			close;
		} else if (knightq == 8) {
			mes "[Senhor Edmond]";
			mes "Porque veio at� a mim espadachim?";
			next;
			if (select("Gostaria de fazer o teste","Por nada") == 2) {
				mes "[Senhor Edmond]";
				mes "A vida que voc� quer em breve estar� diante de seus olhos.";
				mes "Tudo vir� em perfeita ordem.";
				close;
			} else {
				mes "[Senhor Edmond]";
				mes "Meu nome � Edmond Groster.";
				mes "Eu sou um membro da Cavalaria de Prontera.";
				next;
				mes "[Senhor Edmond]";
				mes "Cavaleiros est�o sempre em posi��o para ajudar os outros.";
				mes "Portanto, voc� deve pensar modestamente sobre o mundo.";
				mes "E ter a personalidade para caber ao papel que voc� vai exercer.";
				next;
				mes "[Senhor Edmond]";
				mes "Voc� n�o deve tomar decis�es precipitadas.";
				mes "Sua vontade deve dobrar-se como palha ou ser firme como pedra quando a situa��o pedir.";
				next;
				mes "[Senhor Edmond]";
				mes "Voc� n�o deve matar monstros sem motivo se n�o t�m prazer em faz�-lo.";
				mes "Guarde este tempo para pensar calmamente sobre isso...";
				next;
				mes "[Senhor Edmond]";
				mes "Em seguida, deve come�ar o teste.";
				mes "Tenha em mente a qualidade de rever�ncia.";
				if ($kntpatience) {
					next;
					mes "[Senhor Edmond]";
					mes "No momento algu�m est� passando pelo teste de paci�ncia.";
					mes "Mostre sua calma e aguarde at� que essa pessoa termine.";
					next;
					mes "[Senhor Edmond]";
					mes "Ent�o venha falar comigo novamente.";
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
			mes "Voc� foi muito descuidado no �ltimo teste.";
			mes "A Espada do Cavaleiro existe para proteger os outros.";
			mes "E n�o para atormentar os monstros mais fracos.";
			next;
			mes "[Senhor Edmond]";
			mes "Em um mundo onde tudo existe em harmonia.";
			mes "Voc� n�o pode deixar os seres humanos destruirem tudo continuamente sem prop�sito.";
			mes "Este princ�pio se aplica ao mundo real, n�o apenas para este teste.";
			next;
			mes "[Senhor Edmond]";
			mes "O teste ir� come�ar.";
			mes "Me mostre sua paciencia...";
			close2;
			donpcevent("Patience#knightq::OnEnable");
			warp("job_knt",143,57);
			end;
		} else if (knightq == 10) {
			mes "[Senhor Edmond]";
			mes "Eu vi o seu car�ter.";
			mes "Agora � hora de voc� fazer o teste final.";
			mes "V�, e fale com o Senhor Gray...";
			knightq = 11;
			changequest(9010,9011);
			close;
		} else if (knightq == 11) {
			mes "[Senhor Edmond]";
			mes "Eu vi o seu car�ter.";
			mes "Agora � hora de voc� fazer o teste final.";
			mes "V�, e fale com o Senhor Gray...";
			close;
		} else {
			mes "[Senhor Edmond]";
			mes "A Espada do Cavaleiro existe para proteger os outros.";
			mes "E n�o para atormentar os monstros mais fracos.";
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
	mes "Voc� mostrou a harmonia do esp�rito de um cavaleiro.";
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
			mes "O brilho da luz que brilha desta l�mina n�o pode ser dito em palavras.";
			mes "Esta � a arma que cada cavaleiro deve ter.";
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
			mes "N�o tem sentido guardar m�goas uma vez que o tempo j� passou.";
			close;
		}
	} else {
		if (knightq == 11) {
			mes "[Senhor Gray]";
			mes "Jovem Espadachim, o que posso fazer por voc�?";
			next;
			if (select("Gostaria de fazer o teste","Ah, nada.") == 2) {
				mes "[Senhor Gray]";
				mes "Tome cuidado!";
				mes "O tempo � a maior d�diva recebida pelos homens.";
				mes "Como voc� quer que seu tempo seja lembrado?";
				close;
			} else {
				mes "[Senhor Gray]";
				mes "Ent�o voc� terminou todos os outros testes?";
				next;
				mes "[Senhor Gray]";
				mes "Ent�o come�aremos o meu?";
				mes "N�o � realmente um teste.";
				next;
				mes "[Senhor Gray]";
				mes "Vamos conversar casualmente?";
				next;
				mes "[Senhor Gray]";
				mes "Primeiro...";
				mes "Por que voc� decidiu se tornar Cavaleiro?";
				next;
				switch (select("Para me tornar mais forte","Para ajudar meus amigos","Porque eu estou insatisfeito comigo")) {
					case 1:
					mes "[Senhor Gray]";
					mes "Para se tornar mais forte, voc� diz?";
					mes "Sim, os cavaleiros s�o fortes.";
					mes "Mas por que adquirir for�a?";
					next;
					mes "[Senhor Gray]";
					mes "� para mostrar aos outros?";
					mes "Para alcan�ar a fama?";
					mes "Ou voc� tem uma raz�o diferente?";
					mes "O que voc� acha que � t�o bom quanto ganhar for�a como um Cavaleiro?";
					next;
					switch (select("Ganhar riqueza e fama","Poder me proteger","Poder proteger os outros.")) {
						case 1:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "Claro, a riqueza e a fama t�m o seu lugar no mundo.";
						mes "Mas n�s, como cavaleiros devemos viver para as virtudes mais elevadas.";
						next;
						break;
						case 2:
						mes "[Senhor Gray]";
						mes "Bom pensamento.";
						mes "Voc� deve primeiro ser capaz de se proteger, a fim de proteger os outros.";
						mes "Para isto, voc� deve treinar constantemente, e nunca ceder � pregui�a.";
						next;
						break;
						case 3:
						mes "[Senhor Gray]";
						mes "Ah, uma id�ia maravilhosa.";
						mes "A for�a de um Cavaleiro deve ser usada para proteger os fracos e defender a justi�a.";
						next;
						mes "[Senhor Gray]";
						mes "Infelizmente, existem alguns cavaleiros que nos envergonham.";
						mes "Por esquecer os ideais que deveriam ser b�sicos para Cavalaria...";
						next;
						break;
					}
					break;
					case 2:
					mes "[Senhor Gray]";
					mes "Ah, para ajudar seus amigos, ou talvez at� mesmo seu grupo.";
					mes "Nosso s�bio e benevolente Rei Tristram III nos deu estas palavras de ouro...";
					next;
					mes "[Senhor Gray]";
					mes "^8B7500Ap�s o rio calmo, existe uma cachoeira perigosa.";
					mes "Portanto, voc� deve sempre estar preparado para tudo...^000000";
					next;
					mes "[Senhor Gray]";
					mes "Assim, como voc� que pode ajudar seus amigos?";
					next;
					switch (select("Eles precisam de mim","Ganhando dinheiro","Eu posso protege-los")) {
						case 1:
						mes "[Senhor Gray]";
						mes "Qualquer pessoa, em qualquer lugar no mundo, tem um lugar onde eles s�o necess�rios.";
						mes "Nunca seja negligente com algu�m que esteja em necessidade.";
						mes "Mesmo que ele n�o seja um membro da guilda.";
						next;
						break;
						case 2:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "� claro que a riqueza � importante.";
						mes "Mas n�s cavaleiros devemos viver para as virtudes mais elevadas.";
						next;
						break;
						case 3:
						mes "[Senhor Gray]";
						mes "Ah, uma id�ia maravilhosa.";
						mes "A for�a de um Cavaleiro deve ser usada para proteger os fracos e defender a justi�a.";
						next;
						mes "[Senhor Gray]";
						mes "Infelizmente, h� alguns cavaleiros que nos envergonham.";
						mes "Por esquecer os ideais que deveriam ser os b�sicos para a Cavalaria...";
						next;
						break;
					}
					break;
					case 3:
					.@kntQ3 += 1;
					mes "[Senhor Gray]";
					mes "Satisfa��o, voc� disse.";
					mes "Parece que voc� n�o se tornou um bom espadacim.";
					mes "Existe uma raz�o especial para que voc� deseje ser um Cavaleiro?";
					next;
					mes "[Senhor Gray]";
					mes "Eu n�o sei quanto a Espadachins.";
					mes "Mas Cavaleiros n�o permitem a auto-indulg�ncia.";
					mes "H� aqueles t�o obcecados por ganhar for�a que eles n�o conseguem se controlar.";
					next;
					mes "[Senhor Gray]";
					mes "Assim...";
					mes "Que parte de si mesmo n�o te satisfaz atualmente?";
					next;
					switch (select("Habilidades","Objetivo","Apar�ncia.")) {
						case 1:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "Habilidade � algo que voc� ganha com a experi�ncia como um Cavaleiro.";
						mes "N�o pode ser seu maior objetivo.";
						mes "Caso contr�rio, voc� nunca ficar� satisfeito como Cavaleiro.";
						next;
						break;
						case 2:
						if (.@kntQ3) { .@kntQ3 -= 1; }
						mes "[Senhor Gray]";
						mes "Eu vejo...";
						mes "Sempre ter uma meta � muito importante.";
						mes "Voc� pode estar cheio de id�ias quando se tornar um cavaleiro.";
						mes "Mas isso pode mudar com o tempo.";
						next;
						break;
						case 3:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "Ah n�o...";
						mes "O que voc� v� n�o � o que realmente importa.";
						mes "Um espadachim pode ser mais forte do que um Cavaleiro.";
						mes "E at� mesmo cavaleiro pode ficar fraco se ele se torna pregui�oso.";
						next;
						break;
					}
					break;
				}
				mes "[Senhor Gray]";
				mes "Eu entendo os seus pensamentos.";
				mes "Mas h� aqueles que desejam tornar-se cavaleiros, sem pensar.";
				next;
				mes "[Senhor Gray]";
				mes "Aqueles s�o os que trazem problemas e envergonham a honra dos Cavaleiros.";
				mes "Trazendo resultados irrevers�veis.";
				next;
				mes "[Senhor Gray]";
				mes "O mesmo vale para voc�.";
				mes "Depois de se tornar Cavaleiro, voc� nunca poder� se tornar um Espadachim novamente.";
				mes "Os deveres e responsabilidades de um cavaleiro estar�o sempre com voc�.";
				next;
				mes "[Senhor Gray]";
				mes "Se voc� se tornar um Cavaleiro, o que voc� vai fazer primeiro?";
				next;
				switch (select("Eu irei direto para batalha","Existem pessoas esperando por mim","Vou aprender mais")) {
					case 1:
					mes "[Senhor Gray]";
					mes "Batalha...?";
					mes "E, em seguida?";
					next;
					switch (select("Ganhar level r�pido","Testarei minhas habilidades","Viajarei")) {
						case 1:
						.@kntQ3 += 1;
						mes "[Senhor Gray]";
						mes "N�o tenha muita pressa para se tornar forte.";
						mes "Mesmo que se torne Cavaleiro, voc� ainda ser� voc� mesmo.";
						next;
						break;
						case 2:
						mes "[Senhor Gray]";
						mes "Testar a si mesmo � uma coisa boa.";
						mes "N�o h� problema em ser feliz quando voc� mudar.";
						mes "Mas n�o se esque�a sobre as verdadeiras qualidades de ser um Cavaleiro.";
						next;
						break;
						case 3:
						mes "[Senhor Gray]";
						mes "Mesmo se voc� se tornar um Cavaleiro, voc� n�o est� alterando o seu eu interior.";
						mes "N�o h� necessidade de sobrecarregar-se.";
						mes "Relaxe e leve as coisas passo a passo.";
						next;
						break;
					}
					break;
					case 2:
					mes "[Senhor Gray]";
					mes "Quem � que est� esperando por voc�?";
					next;
					switch (select("Meus Amigos","Os membros do meu Cl�","Meu amor")) {
						case 1:
						mes "[Senhor Gray]";
						mes "Eu entendo, eles querem compartilhar a alegria de suas conquistas.";
						mes "Nunca perca o seu bom cora��o, e sempre ajude os seus amigos.";
						next;
						break;
						case 2:
						mes "[Senhor Gray]";
						mes "Aqueles que desejam participar na sua felicidade e sofrimento.";
						mes "Como Cavaleiro, voc� deve sempre proteger.";
						next;
						break;
						case 3:
						if (.@kntQ3) { .@kntQ3 -= 1; }
						mes "[Senhor Gray]";
						mes "Oh, juventude!";
						mes "Tornando-se um Cavaleiro para o seu amor!";
						mes "Sempre proteja "+(Sex == SEX_MALE ? "ele":"ela")+" com o sacrif�cio de sua pr�pria vida!";
						next;
						mes "[Senhor Gray]";
						mes "Tamb�m...";
						mes "Ame para sempre.";
						mes "Um sincero afeto � dif�cil de encontrar.";
						next;
						break;
					}
					break;
					case 3:
					mes "[Senhor Gray]";
					mes "Boa atitude...";
					mes "O que voc� planeja na aprendizagem?";
					next;
					switch (select("Lugares confort�veis","Os caminhos diferentes","Ganhar mais dinheiro")) {
						case 1:
						.@kntQ3 += 5;
						mes "[Senhor Gray]";
						mes "H� muitos lugares que s�o confort�veis ou desconfort�veis neste mundo.";
						mes "No entanto cavaleiros devem ser capazes de sobreviver em qualquer lugar.";
						next;
						break;
						case 2:
						mes "[Senhor Gray]";
						mes "H� muitos cavaleiros parecidos mundo a fora.";
						mes "Pense neles como veteranos e fa�a muitas perguntas.";
						next;
						break;
						case 3:
						.@kntQ3 += 5;
						mes "[Senhor Gray]";
						mes "Ah n�o.";
						mes "Voc� tem a riqueza como uma prioridade sendo um Cavaleiro?";
						mes "N�s n�o fomos treinados para ser assim.";
						next;
						break;
					}
					break;
				}
				mes "[Senhor Gray]";
				mes "Conversar com jovens � sempre agrad�vel...";
				next;
				if (.@kntQ3 >= 5) {
					mes "[Senhor Gray]";
					mes "Mas fiquei desapontado com nossa conversa.";
					mes "Sinto em dizer, mas voc� ainda n�o est� preparad"+(Sex == SEX_MALE ? "o":"a")+" para se juntar a Cavalaria.";
					mes "Pense, reflita sobre todos os testes que voc� teve aqui.";
					next;
					mes "[Senhor Gray]";
					mes "S� quando realmente compreender, o que � ser Cavaleiro.";
					mes "Venha conversar comigo novamente.";
					close;
				} else if (.@kntQ3 < 5 && .@kntQ3 > 0) {
					knightq = 12;
					changequest(9011,9012);
					mes "[Senhor Gray]";
					mes "E gostei de falar com voc�.";
					mes "Me fez lembrar quando tamb�m era jovem.";
					next;
					mes "[Senhor Gray]";
					mes "Podemos cometer erros, mas sempre devemos buscar corrigi-los.";
					next;
					mes "[Senhor Gray]";
					mes "Agora v� at� o capit�o, voc� terminou todos seus testes.";
					close;
				} else {
					knightq = 12;
					changequest(9011,9012);
					mes "[Senhor Gray]";
					mes "E gostei de falar com voc�.";
					mes "Me fez lembrar quando tamb�m era jovem.";
					next;
					mes "[Senhor Gray]";
					mes "Agora v� at� o capit�o, voc� terminou todos seus testes.";
					close;
				}
			}
		} else if (knightq == 12) {
			mes "[Senhor Gray]";
			mes "Todos os envolvidos agora v�o cuidadosamente tomar sua decis�o, de acordo com seu desempenho.";
			mes "Ent�o v� falar com o capit�o.";
			close;
		} else {
			mes "[Senhor Gray]";
			mes "N�o perca seu valioso tempo.";
			mes "V� completar os testes que lhe foram dado.";
			close;
		}
	}
}
