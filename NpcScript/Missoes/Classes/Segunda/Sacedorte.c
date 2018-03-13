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
| - Copyright: Spell Master (12/09/2017)                            |
| - Info: Quest de Mudan�a de Classe para Sacerdote.                |
| - Nota: Requer quest de mudan�a de classe para Novi�o.            |
| - Nota2: Ambos arquivos de scripts com ambas quests devem ser     |
|          do mesmo desenvolvedor desse script.                     |
\*-----------------------------------------------------------------*/

prt_church,16,41,4	script	Bispo#priestq	1_M_PASTOR,{
	if (BaseJob == Job_Acolyte) {
		if (!priestq) {
			mes "[Bispo Paul]";
			mes "Que deus esteja com";
			mes "voc�, "+(Sex == SEX_MAME ?"Irm�o.":"Irm�.")+".";
			mes "O que o traz at� aqui?";
			next;
			if (select("Eu quero me tornar Sacerdote","Como voc� est�, Bispo?") == 2) {
				mes "[Bispo Paul]";
				mes "Eu vou indo bem e estou com boa sa�de.";
				mes "Obrigado por perguntar.";
				next;
				mes "[Bispo Paul]";
				mes "Espero que voc� continue em sua miss�o como servo de Deus.";
				next;
				mes "[Bispo Paul]";
				mes "Espero, que nossos caminhos se cruzem novamente.";
				mes "Que Deus te aben�oe...";
				close;
			} else {
				if (JobLevel < 40) {
					mes "[Bispo Paul]";
					mes "Voc� n�o est� capacitad"+(Sex == SEX_MAME ? "o":"a")+" ainda para se tornar Sacerdote.";
					mes "Por favor saia pelo mundo e aumente suas experi�ncias.";
					next;
					mes "[Bispo Paul]";
					mes "Ainda existem algumas coisas que voc� deve aprender como um Novi�o.";
					mes "Entretanto, estou ansioso em v�-l"+(Sex == SEX_MAME ? "o":"a")+" novamente.";
					close;
				} else {
					mes "[Bispo Paul]";
					mes "Compreendo.";
					mes "Ent�o voc� deseja se tornar "+(Sex == SEX_MAME ? "um Sacerdote":"uma Sacerdotisa")+".";
					mes "Deus ficar� satisfeito com sua decis�o e ir� te aben�oar.";
					next;
					mes "[Bispo Paul]";
					mes "Eu sou o Bispo Paul Cervantes, e estou no comando da Catedral de Prontera.";
					mes "Fico satisfeito em encontrar uma pessoa t�o interessada como voc�.";
					next;
					mes "[Bispo Paul]";
					mes "Agora irei explicar os Tr�s Exames do Saced�cio.";
					mes "Esses testes ir�o lhe trazer muito sofrimento.";
					mes "Mas espero que voc� consiga super�-los.";
					next;
					mes "[Bispo Paul]";
					mes "No primeiro exame, voc� deve fazer uma viagem.";
					mes "E visitar tr�s sacerdotes em uma ordem espec�fica.";
					next;
					mes "[Bispo Paul]";
					mes "O segundo exame consiste em um treinamento espiritual.";
					mes "Voc� deve resistir as tenta��es de Dem�nios e Mortos-Vivos.";
					next;
					mes "[Bispo Paul]";
					mes "E por fim no exame final, voc� ir� prometer sua devo��o a Deus.";
					mes "Sua vontade de se sacrificar tamb�m ser� questionada.";
					next;
					if (JobLevel != 50) {
						mes "[Bispo Paul]";
						mes "Se est� dispost"+(Sex == SEX_MAME ? "o":"a")+" a cumprir essas tarefas venha falar comigo novamente.";
						priestq = 1;
						setquest (8009);
						close;
					} else {
						mes "[Bispo Paul]";
						mes "Vejo o esfor�o que voc� fez para alcan�ar o N�vel de Classe 50.";
						mes "Ent�o n�o h� necessidade de provar sua devo��o e n�o precisar� concluir o primeiro teste.";
						next;
						mes "[Bispo Paul]";
						mes "Agora, voc� poder� ir diretamente para o segundo exame: Treinamento Espiritual.";
						next;
						mes "[Bispo Paul]";
						mes "Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" venha coneversar comigo novamente.";
						mes "Que lhe enviarei para o campo de treinamento.";
						setquest (8011);
						priestq = 6;
						close;
					}
				}
			}
		} else if (priestq == 1) {
			mes "[Bispo Paul]";
			mes "Bem, deixe me dizer a ordem dos sacerdotes que voc� deve visitar na sua viagem.";
			next;
			mes "[Bispo Paul]";
			mes "Primeiro, por favor visite o Irm�o Sim�o que est� a Nordeste de Prontera.";
			next;
			mes "[Bispo Paul]";
			mes "Segundo, visite a Irm� Matilda.";
			mes "Ela est� localizada em uma �rea pr�xima a Morroc.";
			next;
			mes "[Bispo Paul]";
			mes "O terceiro sacerdote que voc� deve visitar ser� o Irm�o Bartolomeu.";
			mes "Ele est� em um campo a Noroeste de Prontera.";
			next;
			mes "[Bispo Paul]";
			mes "Ent�o Bem, desejo a voc� uma jornada segura.";
			mes "Se voc� tiver alguma d�vida, por favor pergunte a Irm� Cec�lia.";
			next;
			mes "[Bispo Paul]";
			mes "Ao retornar de sua viagem, eu falarei mais sobre o pr�ximo teste.";
			next;
			mes "[Bispo Paul]";
			mes "Que Deus te aben�oe...";
			priestq = 2;
			changequest (8009,8010);
			close;
		}
		// priestq (2) => "Irm�o Sim�o#acolyteq" prt_fild03,365,255
		// priestq (3) => "Irm� Matilda#acolyteq" moc_fild07,41,355
		// priestq (4) => "Irm�o Bartolomeu#acolyteq" prt_fild00,208,218
		else if (priestq > 1 && priestq < 5) {
			mes "[Bispo Paul]";
			mes "Posso perguntar por que raz�o voc� ainda est� por aqui?";
			mes "Voc� n�o esqueceu que deve viajar, esqueceu?";
			next;
			if (select("Explique novamente","N�o, imagina.") == 1) {
				mes "[Bispo Paul]";
				mes "Certo.";
				mes "Irei relembrar a ordem de vistita novamente, e espero que voc� tenha uma jornada segura.";
				next;
				mes "[Bispo Paul]";
				mes "Primeiro, encontre o Irm�o Sim�o, ele est� a Nordeste das ru�nas de Prontera.";
				next;
				mes "[Bispo Paul]";
				mes "Lembre-se de se encontrar com a Irm� Matilda.";
				mes "Ela est� em algum lugar perto da cidade de Morroc ao Sudoeste de Prontera.";
				next;
				mes "[Bispo Paul]";
				mes "E finalmente, por favor procure pelo Irm�o Bartolomeu.";
				mes "Ele est� em um campo a Noroeste de Prontera.";
				next;
				mes "[Bispo Paul]";
				mes "Bem, ent�o eu vou rezar para que sua jornada seja tranquila.";
				mes "Se quiser mais informa��es, por favor pergunte a Irm� Cec�lia.";
				next;
				mes "[Bispo Paul]";
				mes "Quando voc� voltar de sua jornada, falarei mais sobre seu pr�ximo teste.";
				next;
				mes "[Bispo Paul]";
				mes "Que Deus te aben�oe...";
				close;
			} else {
				mes "[Bispo Paul]";
				mes "Entendo.";
				mes "Mas se voc� tiver qualquer pergunta, pode perguntar a Irm� Cec�lia.";
				mes "Ela ir� responder qualquer d�vida sua.";
				next;
				mes "[Bispo Paul]";
				mes "Bem, ent�o eu vou rezar para que sua jornada seja segura.";
				mes "Que Deus te aben�oe...";
				close;
			}
		} else if (priestq == 5) {
			mes "[Bispo Paul]";
			mes "Sua viagem est� terminada.";
			mes "Parab�ns, voc� passou no primeiro teste de peregrina��o.";
			next;
			mes "[Bispo Paul]";
			mes "� hora de come�ar seu treinamento espiritual.";
			mes "Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" venha coneversar comigo novamente.";
			mes "Que lhe enviarei para o campo de treinamento.";
			changequest (8010,8011);
			priestq = 6;
			close;
		} else if (priestq == 6) {
			if (getmapusers("job_prist") >= 1) {
				mes "[Bispo Paul]";
				mes "No momento outro irm�o est� fazendo seus tentes na �rea.";
				mes "Voc� dever� esperar at� que ele termine.";
				close;
			} else {
				mes "[Bispo Paul]";
				mes "Bem, voc� est� pronto para o treinamento espiritual?";
				next;
				if (select("Sim estou","Me d� um minuto") == 1) {
					mes "[Bispo Paul]";
					mes "Irei mand�-lo para o campo de treinamento.";
					mes "Quando chegar l�, por favor fale com o irm�o Pedro, que est� encarregado do treinamento.";
					close2;
					warp ("job_prist",24,180);
					end;
				} else {
					mes "[Bispo Paul]";
					mes "Sem problema, n�o tenha pressa.";
					mes "Que Deus lhe d� for�a para superar seus medos...";
					close;
				}
			}
		} else if (priestq == 7) {
			mes "[Bispo Paul]";
			mes "Estou feliz por voc� ter terminado o treinamento espiritual.";
			mes "Parab�ns.";
			mes "Agora voc� pode ser chamado de Sacerdote.";
			next;
			mes "[Bispo Paul]";
			mes "Mas no momento v� at� a Irm� Cec�lia.";
			mes "Ela tem algumas perguntas a fazer.";
			next;
			mes "[Bispo Paul]";
			mes "Bem...";
			mes "Estarei aqui esperando por voc�.";
			close;
		} else if (priestq == 8) {
			if (SkillPoint) {
				mes "[Bispo Paul]";
				mes "Voc� ainda possui pontos de habilidade restando.";
				mes "Por favor use todos essses pontos para melhorar suas habilidades, e depois volte.";
				close;
			} else {
				mes "[Bispo Paul]";
				mes "Parab�ns, voc� completou todos os exames necess�rios dos Sacerdotes.";
				mes "Deixe-me promov�-lo a "+(Sex == SEX_MALE ? "um Sacerdote": "uma Sacerdotisa")+" agora mesmo.";
				next;
				mes "[Bispo Paul]";
				mes "Deus, conceda seu poder para este servo diante de ti.";
				mes "Deixe-o que envie sua mensagem pelos arredores do mundo.";
				next;
				mes "[Bispo Paul]";
				mes "Fa�a desse servo um instrumento de seu trabalho...";
				next;
				.@acolyteLv = JobLevel;
				jobchange (Job_Priest);
				completequest (8015);
				callfunc ("ClearJobQuest2nd",8);
				mes "[Bispo Paul]";
				mes "Agora sendo Sacerdote.";
				mes "Eu te parabenizo, e que voc� ajude outras pessoas pelo resto de sua vida.";
				next;
				mes "[Bispo Paul]";
				if (.@acolyteLv != 50) {
					getitem (Book,1);
					mes "Este livro � seu.";
					mes "Espero que ele te ajude a espalhar a mensagem de Deus na Terra.";
				}
				else {
					getitem (Bible,1);
					mes "Em comemora��o a sua mudan�a de classe, te darei uma b�blia.";
					mes "Isto ir� ilumin�-lo pelo caminho da gra�a.";
				}
				next;
				mes "[Bispo Paul]";
				mes "Voc� demonstrou muito esfor�o, e fez um admir�vel progresso em sua tarefa pessoal de santidade.";
				mes "Por favor viva sua vida como um verdadeiro Sacerdote...";
				close;
			}
		}
	} else {
		if (BaseJob == Job_Priest) {
			mes "[Bispo Paul]";
			mes "Ah...";
			mes "� bom ver voc�, "+(Sex == SEX_MALE ? "Irm�o":"Irm�")+" "+strcharinfo(PC_NAME)+".";
			next;
			mes "[Bispo Paul]";
			mes "Fico satisfeito em ver que voc� continuar� orientando as crian�as de Deus pelo caminho certo.";
			close;
		} else {
			mes "[Bispo Paul]";
			mes "Voc� est� dentro do Santu�rio.";
			mes "O que o trouxe at� aqui?";
			next;
			switch(select("Informa��es sobre os Sacerdotes","Nada")) {
				case 1:
				mes "[Bispo Paul]";
				mes "Nosso dever e obriga��o como Sacerdote � nos devotar.";
				mes "Ajudando os outros sem esperar nenhuma tipo de recompensa.";
				next;
				mes "[Bispo Paul]";
				mes "� medida que vamos ajudando os outros, n�o devemos esperar tratamento igual.";
				mes "Ser um grande sacerdote � de responsabilidade op��o exclusivamente pessoal.";
				next;
				mes "[Bispo Paul]";
				mes "Por�m, quem recebe ajuda deve ser grato.";
				mes "Voc� deve dar exemplo, mas voc� tamb�m deve ter seu limite como humano.";
				next;
				mes "[Bispo Paul]";
				mes "Espero que tenha explicado o suficiente sobre Sacerdotes.";
				mes "Por que voc� n�o vai l� fora e conversa com alguns outros Sacerdores.";
				mes "Se quer saber mais sobre seus estilos de vida?";
				next;
				break;
				case 2:
				mes "[Bispo Paul]";
				mes "Por favor sinta-se em casa.";
				mes "Na Terra, nenhum lugar � t�o seguro como esse Santu�rio.";
				next;
				break;
			}
			mes "[Bispo Paul]";
			mes "Bem...";
			mes "Que Deus lhe aben�oe.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_church,27,24,1	script	Irm� Cecilia#priestq	1_F_PRIEST,{
	if (BaseJob == Job_Acolyte) {
		if (!priestq) {
			mes "[Irm� Cecilia]";
			mes "Meu cora��o fica alegre ao ver que voc� est� trabalhando duro para cumprir a vontade de Deus.";
			mes "A Catedral de Prontera o parabeniza.";
			next;
			mes "[Irm� Cecilia]";
			mes "Voc� ainda n�o escolheu uma classe?";
			mes "Por que voc� n�o dedica sua vida a Deus?";
			next;
			mes "[Irm� Cecilia]";
			mes "Voc� pode ter uma vida completa sendo um Novi�o, ajudando outras pessoas.";
			next;
			mes "[Irm� Cecilia]";
			mes "Se voc� estiver interessad"+(Sex == SEX_MALE ? "o":"a")+", fale com o Bispo na outra sala.";
			close;
		} else if (priestq == 1) {
			mes "[Irm� Cecilia]";
			mes "Posso perguntar o que te faz vir aqui?";
			next;
			switch(select("Eu quero me tornar um Sacerdote","Nada")) {
				case 1:
				mes "[Irm� Cecilia]";
				mes "Voc� se dedica a Deus.";
				mes "Muitos Novi�os desejam ser sacerdotes e continuar em sua jornada pessoal de santidade.";
				next;
				mes "[Irm� Cecilia]";
				mes "Deixe-me que eu me apresente.";
				mes "Sou Cec�lia Margarita, e estou no comando da �rea encarregada pelo processo de mudan�a de classe para Sacerdote.";
				next;
				mes "[Irm� Cecilia]";
				mes "Tenho ajudado muitas pessoas a se tornarem Sacerdotes desde quando entrei na Catedral de Prontera.";
				mes "Essa � uma das minhas responsabilidades.";
				next;
				mes "[Irm� Cecilia]";
				mes "Para se tornar um Sacerdote, voc� deve completar 3 exames.";
				mes "Uma viajem, uma sess�o de treinamento espiritual, e um juramento de devo��o a Deus.";
				next;
				mes "[Irm� Cecilia]";
				mes "Se voc� deseja se tornar um servo de Deus, por favor inscreva-se com o Bispo Paul.";
				next;
				mes "[Irm� Cecilia]";
				mes "E se por acaso voc� experimentar um problema durante qualquer um dos exames.";
				mes "Sinta-se a vontade para vir falar comigo.";
				mes "Eu vou te ajudar como puder.";
				close;
				case 2:
				mes "[Irm� Cecilia]";
				mes "Fique � vontade.";
				mes "Eu insisto que voc� se recupere e tenha um bom descanso neste Santu�rio.";
				mes "Que Deus te aben�oe...";
				close;
			}
		} else if (priestq == 2) {
			mes "[Irm� Cecilia]";
			mes "Ah, voc� come�ou sua jornada.";
			mes "Por favor d� seu melhor para completar sua primeira tarefa.";
			next;
			mes "[Irm� Cecilia]";
			mes "O primeiro Sacerdote que voc� precisa encontrar � o Irm�o Sim�o.";
			mes "Ele est� nas ruinas ao nordeste de Prontera.";
			next;
			mes "[Irm� Cecilia]";
			mes "V� para o Norte de Prontera, e ent�o siga 3 campos a Leste, e voc� chegar� nas ruinas.";
			next;
			mes "[Irm� Cecilia]";
			mes "Claro, voc� tamb�m poder ir para o campo Leste de Prontera, ent�o ir 1 Campo para o Norte, e seguir 2 campos a Leste...";
			next;
			mes "[Irm� Cecilia]";
			mes "Irm�o Sim�o estar� na entrada das ruinas de Prontera.";
			mes "Tenha cuidado.";
			mes "Aquele lugar est� cheio de Chocos agressivos.";
			next;
			mes "[Irm� Cecilia]";
			mes "Depois de falar com o Irm�o Sim�o, por favor visite Irm� Matilda e Irm�o Bartolomeu.";
			mes "Voc� pode checar o progresso da sua peregrina��o comigo se voc� tiver qualquer perguntas.";
			next;
			mes "[Irm� Cecilia]";
			mes "Bem ent�o, fa�a uma boa jornada.";
			mes "Por favor n�o desista por sofrimentos de pouca vida, e eu espero que voc� cumpra seus objetivos.";
			close;
		} else if (priestq == 3) {
			mes "[Irm� Cecilia]";
			mes "Ah, voc� encontrou o Irm�o Sim�o.";
			mes "Agora � hora de visitar a Irm� Matilda.";
			mes "Ela est� perto de uma cidade chamada Morroc.";
			next;
			mes "[Irm� Cecilia]";
			mes "Ela tem treinado sua disciplina religiosa em um lugar ao Norte de Morroc.";
			mes "Se voc� procur�-la por l�, ir� encontr�-la.";
			next;
			mes "[Irm� Cecilia]";
			mes "�bvio, as vezes tenho vontade de me dedicar ao treinamento como esses Sacerdotes,";
			mes "Mas eu possuo essa tarefa de ajudar os Novi�os a se tornarem Sacerdotes.";
			next;
			mes "[Irm� Cecilia]";
			mes "Sei que essa � a vontade de Deus, e esse � o trabalho que ele pretende que eu fa�a como sua serva.";
			mes "Tenha uma viagem segura.";
			close;
		} else if (priestq == 4) {
			mes "[Irm� Cecilia]";
			mes "Por fim, O �ltimo Sacerdote que voc� deve encontrar � o Irm�o Bartolomeu.";
			mes "Ouvi dizer que ele est� treinando perto de um lago localizado a Noroeste de Prontera.";
			next;
			mes "[Irm� Cecilia]";
			mes "Saindo de Prontera, v� um campo para o Norte, e dois campos para Oeste.";
			mes "Voc� tamb�m pode viajar por dois campos Oeste, e percorrer um campo para Norte.";
			next;
			mes "[Irm� Cecilia]";
			mes "Mesmo apesar de ainda existirem 2 exames esperando por voc�.";
			mes "Renho f� de que voc� ser� capaz de cumprir seu objetivo que � se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+"...";
			close;
		} else if (priestq == 5) {
			mes "[Irm� Cecilia]";
			mes "Voc� demonstrou grande esfor�o ao completer seu primeira exame.";
			mes "Fale com o Bispo Paulo para come�ar seu pr�ximo teste no caminho do sacerd�cio.";
			next;
			mes "[Irm� Cecilia]";
			mes "A forma��o espiritual � muito mais dif�cil do que a viagem, mas acredito em voc�.";
			close;
		} else if (priestq == 6) {
			mes "[Irm� Cecilia]";
			mes "Ah, voc� ainda n�o acabou o treinamento espiritual?";
			next;
			mes "[Irm� Cecilia]";
			mes "Eu n�o posso dar detalhes.";
			mes "Mas se voc� acreditar em si mesmo e tiver f� em tudo que � bom.";
			mes "Voc� se sair� bem.";
			next;
			mes "[Irm� Cecilia]";
			mes "Por favor fale com Irm�o Pedro na sala de testes se quiser saber mais.";
			mes "Ele � um amigo pr�ximo do Bispo Paul e pode te dar algumas dicas �teis sobre o treinamento espiritual.";
			close;
		} else if (priestq == 7) {
			if (questprogress(8013)) {
				changequest (8013,8014);
			}
			mes "[Irm� Cecilia]";
			mes "Agora poderemos come�ar seu formal Juramento de Sacerd�cio.";
			mes "Essas perguntas servir�o para sabermos sua devo��o.";
			next;
			mes "[Irm� Cecilia]";
			mes "Sinta-se confort�vel, e apenas responda com seu cora��o.";
			mes "Que se sair� bem.";
			next;
			mes "[Irm� Cecilia]";
			mes "Voc� est� disposto a entregar sua vida a Deus?";
			next;
			if (select("Sim","N�o") == 2) {
				.@prstq += 1;
			}
			mes "[Irm� Cecilia]";
			mes "Voc� usar� seus poderes apenas para si mesmo?";
			next;
			if (select("Sim","N�o") == 1) {
				.@prstq += 1;
			}
			mes "[Irm� Cecilia]";
			mes "Voc� vai usar seus poderes para ajudar os outros?" ;
			next;
			if (select("Sim","N�o") == 2) {
				.@prstq += 1;
			}
			mes "[Irm� Cecilia]";
			mes "Voc� se sacrificaria pela vida de outra pessoa?";
			next;
			if (select("Sim","N�o") == 2) {
				.@prstq += 1;
			}
			mes "[Irm� Cecilia]";
			mes "Voc� viver� e morrer� pela gl�ria divina?";
			next;
			if (select("Sim","N�o") == 2) {
				.@prstq += 1;
			}
			mes "[Irm� Cecilia]";
			mes "Voc� respondeu tudo honestamente com seu cora��o?";
			next;
			mes "[Irm� Cecilia]";
			mes "...";
			mes "......";
			next;
			if (.@prstq) {
				mes "[Irm� Cecilia]";
				mes "Ent�o, reflita um pouco mais nos ensinamentos da santidade e volte ap�s isso.";
				mes "Voc� n�o pode ser "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+" com um esp�rito fraco.";
				close;
			} else {
				priestq = 8;
				changequest (8014,8015);
				mes "[Irm� Cecilia]";
				mes "Agora, voc� completou seu juramento de Sacerd�cio.";
				mes "E todos os exames para se tornar um Sacerdote.";
				next;
				mes "[Irm� Cecilia]";
				mes "V� ao Bispo Paul.";
				mes "E lembre-se, n�s todos somos irm�os e irm�s aos olhos de Deus.";
				mes "Que a paz esteja com voc�...";
				close;
			}
		} else if (priestq == 8) {
			mes "[Irm� Cecilia]";
			mes "V� ao Bispo Paul.";
			mes "E lembre-se, n�s todos somos irm�os e irm�s aos olhos de Deus.";
			mes "Que a paz esteja com voc�...";
			close;
		}
	} else {
		mes "[Irm� Cecilia]";
		mes "Sinta-se livre para relaxar e sentir-se em casa.";
		mes "Nenhum lugar na terra � mais seguro do que a Catedral de Prontera.";
		next;
		mes "[Irm� Cecilia]";
		mes "Que Deus te aben�oe...";
		close;
	}
}

// ------------------------------------------------------------------
job_prist,24,187,4	script	Peter S. Alberto#priestq	4_M_MINISTER,{
	if (priestq < 6) {
		mes "[Irm�o Peter]";
		mes "Voc� n�o deveria est� nesse lugar.";
		mes "Retire-se agora mesmo.";
		close2;
		warp ("prontera",230,311);
		end;
	} else if (priestq == 6) {
		if (!priestq2) {
			priestq2 = 1;
			mes "[Irm�o Peter]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Meu nome � Pedro S. Alberto.";
			mes "Como est� meu colega Paulo?";
			mes "Ele est� bem durante esses dias?";
			next;
			mes "[Irm�o Peter]";
			mes "Ah, sempre me esque�o que ele foi promovido a Bispo.";
			mes "Acho que deveria cham�-lo de Bispo Paul, ou Sua Excel�ncia.";
			next;
		} else {
			mes "[Irm�o Peter]";
			mes "Voc� voltou, como posso ajudar?";
			next;
		}
		switch(select("Informa��es do teste","Come�ar o teste","Voltar � Prontera")) {
			case 1:
			mes "[Irm�o Peter]";
			mes "No treinamento espiritual, voc� ir� derrotar criaturas malignas.";
			mes "Mortos-vivos e Dem�nios s�o do mal.";
			next;
			mes "[Irm�o Peter]";
			mes "Existem muitas criaturas malignas que vagam por esse mundo contra a vontade de Deus.";
			mes "Pessoas inocentes sofrem por causa de suas maldades.";
			next;
			mes "[Irm�o Peter]";
			mes "N�s, como Sacerdotes, somos obrigados a exterminar todas essas criaturas, assim espalhando amor e paz.";
			next;
			mes "[Irm�o Peter]";
			mes "Esse treinamento ir� testar sua habildade de eliminar o mal.";
			next;
			mes "[Irm�o Peter]";
			mes "Pronto para come�ar?";
			next;
			if (select("Sim","N�o") == 1) {
				break;
			} else {
				close;
			}
			case 2: break;
			case 3:
			close2; warp ("prontera",230,311); end;
		}
		if ($PriestJoinTest) {
			mes "No momento outra pessoa j� est� fazendo o teste de aprova��o.";
			mes "Voc� dever� esperar at� que essa pessoa terminine para entrar na �rea";
			close;
		} else {
			mes "[Irm�o Peter]";
			mes "Lhe desejo boa sorte, que Deus lhe proteja.";
			close2;
			donpcevent ("prstmob#priestq::OnEnable");
			priestq2 = 1;
			if (questprogress(8011)) { changequest (8011,8012); }
			if (!$PriestJoinTest) {
				warp ("job_prist",24,44);
			}
		}
	}
}

// ------------------------------------------------------------------
job_prist,1,1,0	script	prstmob#priestq	HIDDEN_NPC,{
	end;

	OnInit:
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnEnable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMobDead");
	.PrstMobs = 13;
	initnpctimer;
	end;

	OnDisable:
	areawarp (strnpcinfo(NPC_MAP),8,34,39,109,"prontera",230,311);
	stopnpctimer;
	end;

	OnMobDead:
	--.PrstMobs;
	if (.PrstMobs < 1) {
		mes "[Irm�o Peter]";
		mes "Muito bem voc� derrotou todas criaturas mal�gnas.";
		mes "Atravesse o portal para continuar seu teste.";
		close;
	}
	end;

	OnStop:
	stopnpctimer;
	end;

	OnSummon1:
	monster (strnpcinfo(NPC_MAP),24,52,"Furto",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),18,52,"Desejo de Virtude",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),30,52,"Ci�me",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon2:
	monster (strnpcinfo(NPC_MAP),21,62,"F�ria",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),27,62,"Inveja",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon3:
	monster (strnpcinfo(NPC_MAP),24,72,"Arrog�ncia",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),18,72,"Lux�ria",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),30,72,"Pregui�a",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon4:
	monster (strnpcinfo(NPC_MAP),21,82,"Gula",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),27,82,"Gan�ncia",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon5:
	monster (strnpcinfo(NPC_MAP),24,92,"Desespero",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),18,92,"Desconfian�a",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),30,92,"Medo",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnTimer300000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo acabou! Pr�ximo cadidato entre na �rea de testes.",bc_map);
	$PriestJoinTest = 0;
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMobDead");
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	end;
}

// ------------------------------------------------------------------
job_prist,24,44,0	script	prstmob2#priestq	FAKE_NPC,17,1,{
	OnTouch:
	if (priestq2 == 1) {
		mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" Acaba de entrar na �rea de testes. 5 minutos ser�o dados para derrotar as criaturas do mal.",bc_map);
		mes "[Irm�o Peter]";
		mes "Derrote todos os zumbis e passe pelo portal no final do corredor.";
		mes "Certifique-se de eliminar todos.";
		donpcevent ("prstmob#priestq::OnSummon1");
		priestq2 = 2;
		close2;
	} else if (priestq2 == 2) {
		donpcevent ("prstmob#priestq::OnSummon2");
		priestq2 = 3;
	} else if (priestq2 == 3) {
		donpcevent ("prstmob#priestq::OnSummon3");
		priestq2 = 4;
	} else if (priestq2 == 4) {
		donpcevent ("prstmob#priestq::OnSummon4");
		priestq2 = 5;
	} else if (priestq2 == 5) {
		donpcevent ("prstmob#priestq::OnSummon5");
		priestq2 = 6;
	}
	end;
}
job_prist,24,52,0	duplicate(prstmob2#priestq)	prstmob3#priestq	FAKE_NPC,17,1
job_prist,24,62,0	duplicate(prstmob2#priestq)	prstmob4#priestq	FAKE_NPC,17,1
job_prist,24,72,0	duplicate(prstmob2#priestq)	prstmob5#priestq	FAKE_NPC,17,1
job_prist,24,82,0	duplicate(prstmob2#priestq)	prstmob6#priestq	FAKE_NPC,17,1

// ------------------------------------------------------------------
job_prist,24,109,0	script	prstestwarp#priestq	WARPNPC,3,3,{
	OnTouch:
	if (priestq2 == 6) {
		mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" Acaba de entrar na �rea 2 de testes. 5 minutos ser�o dados para completar a tarefa.",bc_map);
		warp(strnpcinfo(NPC_MAP),168,17);
		donpcevent ("prstmob#priestq::OnStop");
		donpcevent ("prsttime#priestq::OnEnable");
	}
	end;
}

// ------------------------------------------------------------------
job_prist,2,1,0	script	prsttime#priestq	HIDDEN_NPC,{
	end;

	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	initnpctimer;
	end;

	OnStop:
	stopnpctimer;
	end;

	OnDisable:
	mapannounce (strnpcinfo(NPC_MAP),"O candidato fracassou no teste! Pr�ximo cadidato entre na �rea de testes.",bc_map);
	$PriestJoinTest = 0;
	stopnpctimer;
	end;

	OnTimer300000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo acabou! Pr�ximo cadidato entre na �rea de testes.",bc_map);
	$PriestJoinTest = 0;
	areawarp (strnpcinfo(NPC_MAP),160,14,178,175,"prontera",230,311);
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
job_prist,168,45,4	script	Deviruchi#priestq	4_DEVIRUCHI,8,1,{
	OnTouch:
	if (priestq2 == 6) {
		mes "[Deviruchi]";
		mes "Por que...";
		mes "Ol� pequeno Novi�o.";
		next;
		mes "[Deviruchi]";
		mes "Voc� deve treinar duro para se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+".";
		mes "� engra�ado, atualmente eu conhe�o um monte de servos de Deus.";
		mes "Eles me falam que � muito dif�cil servir Deus o tempo todo.";
		mes "Muito... muito ^666666cansativo^000000 e ^666666sem Recompensas^000000.";
		next;
		mes "[Deviruchi]";
		mes "Digo, as pessoas est�o sempre chorando e pedindo por ajuda de Sacerdotes, n�o importa onde eles estejam.";
		mes "E os Sacerdotes nunca ganham nada em troca...";
		next;
		mes "[Deviruchi]";
		mes "� realmente tr�gico, como os Sacerdotes s�o pouco reconhecidos.";
		mes "� not�vel que qualquer outro trabalho � melhor.";
		mes "Qualquer um...";
		next;
		mes "[Deviruchi]";
		mes "Ser� que a vida n�o seria muito mais f�cil se voc� n�o fosse um sacerdote?";
		mes "Tudo que voc� tem que fazer � s� desistir...";
		next;
		if (select("Est� certo, melhor desisir","Desapare�a, dem�nio!") == 1) {
			mes "[Deviruchi]";
			mes "H�...?";
			mes "Olha a ^660000hora^000000.";
			mes "� melhor ir andando.";
			next;
			mes "[Deviruchi]";
			mes "BUAHAHAHAHAHAH!";
			mes "GOSTOU DA PIADA!?";
			close2;
			donpcevent ("prsttime#priestq::OnDisable");
			warp ("prontera",230,311);
			end;
		} else {
			cutin ("",255);
			priestq2 = 7;
			mes "[Deviruchi]";
			mes "Voc� ir� lamentar pela sua decis�o depois!";
			close;
		}
	}
	end;
}

// ------------------------------------------------------------------
job_prist,168,80,4	script	Doppelganger#priestq	8_DOPPEL,8,1,{
	OnTouch:
	if (priestq2 == 7) {
		mes "[Doppelganger]";
		mes "Espere ai, Novi�o.";
		mes "Eu n�o gosto do Deviruchi, ent�o eu posso falar com voc�.";
		next;
		mes "[Doppelganger]";
		mes "Agora me fale, por que voc� quer se tornar um Sacerdote?";
		mes "� um trabalho d�ficil, n�o compensa.";
		mes "Se voc� quiser, te dou a chance de se tornar um Aprendiz.";
		mes "E ent�o voc� poder� se tornar algo muito melhor!";
		next;
		mes "[Doppelganger]";
		mes "E � claro que irei deixar voc� redistribuir seus pontos de atributos.";
		mes "Me fale, n�o � um bom neg�cio...?";
		next;
		if (select("Sim � mesmo","N�o negocio com voc�!") == 1) {
			mes "[Doppelganger]";
			mes "Boa escolha.";
			mes "Irei transformar sua classe em um Aprendiz.";
			next;
			mes "[Doppelganger]";
			mes "Agora vamos!!";
			mes "Nunca passe para a luz novamente!";
			close2;
			donpcevent ("prsttime#priestq::OnDisable");
			warp ("prontera",230,311);
			end;
		} else {
			priestq2 = 8;
			mes "[Doppelganger]";
			mes "Hmpf. Admiro sua determina��o.";
			mes "Tudo bem, voc� pode passar.";
			next;
			mes "[Doppelganger]";
			mes "Mas se por acaso nos encontrarmos novamente.";
			mes "Te garanto... Voc� n�o ir� ficar feliz em me ver.";
			close;
		}
	}
	end;
}

// ------------------------------------------------------------------
job_prist,168,115,4	script	Senhor das Trevas#priestq	4_DARKLORD,8,1,{
	OnTouch:
	if (priestq2 == 8) {
		mes "[Senhor das Trevas]";
		mes "^330033Pare, humano.";
		mes "Quem permitiu sua passagem?^000000";
		next;
		mes "[Senhor das Trevas]";
		mes "^330033Voc� ainda deseja se tornar um Sacerdote?!";
		mes "Ent�o, eu n�o irei deixar voc� passar.";
		mes "Volte!";
		mes "Caso contr�rio, voc� n�o ir� sobreviver.^000000";
		next;
		mes "[Senhor das Trevas]";
		mes "^330033Seria t�o f�cil para mim para cortar o seu corpo fr�gil em dois e moer os ossos at� virarem p�.";
		mes "Agora, volte mortal!^000000";
		next;
		if (select("Eu sinto muito. Poupe-me!","Deus ir� me proteger.") == 1) {
			mes "[Senhor das Trevas]";
			mes "^330033N�o volte nunca mais!^000000";
			close2;
			donpcevent ("prsttime#priestq::OnDisable");
			warp ("prontera",230,311);
			end;
		} else {
			priestq2 = 9;
			mes "[Senhor das Trevas]";
			mes "^330033Por que...";
			mes "Por que voc� n�o tem medo de mim?!";
			mes "Para um fr�gil mortal, voc� � tem muita coragem.^000000";
			next;
			mes "[Senhor das Trevas]";
			mes "^330033Quando nos encontrarmos novamente.";
			mes "Te levarei a um reino de sofrimento onde voc� ir� passar anos sob uma dor imagin�vel.";
			mes "Guarde minhas palavras...^000000";
			close;
		}
	}
	end;
}

// ------------------------------------------------------------------
job_prist,168,150,4	script	Bafom�#priestq	4_BAPHOMET,8,1,{
	OnTouch:
	if (priestq2 == 9) {
		mes "[Bafom�]";
		mes "Sauda��es "+strcharinfo(PC_NAME)+".";
		next;
		mes "[Bafom�]";
		mes "Sim, humano, sei quem � voc�.";
		next;
		mes "[Bafom�]";
		mes "Eu posso te garantir e dar qualquer tesouro que voc� queira e tamb�m posso te conceder poder infinito.";
		mes "Armas poderosas que humanos jamais viram...";
		next;
		mes "[Bafom�]";
		mes "Montanhas de zeny que voc� em vida nunca conseguir� gastar.";
		mes "Quem disse que sua vida precisa ser limitada?";
		mes "Fama, poder, imortalidade: tudo isso pode ser seu.";
		next;
		mes "[Bafom�]";
		mes "Eu poderei ser chamado a qualquer instante.";
		mes "Todos os humanos temer�o ao serem seus inimigos.";
		mes "Voc� se tornar� a pessoa mais poderosa de toda a hist�ria!";
		next;
		mes "[Bafom�]";
		mes "Deixe de lado essa idiotisse de buscar o sacerd�cio.";
		mes "Fa�a um contrato comigo.";
		mes "O mundo inteiro ser� seu.";
		next;
		if (select("Eu quero tudo!","Afaste-se de mim mal�gno!") == 1) {
			mes "[Bafom�]";
			mes "Ent�o n�s podemos formar um contrato.";
			mes "Voc� nunca se esquecer� desse momento...";
			next;
			mes "[Bafom�]";
			mes "Siga-me.";
			mes "N�s faremos o contrato no meu santu�rio da escurid�o.";
			close2;
			donpcevent ("prsttime#priestq::OnDisable");
			warp ("prontera",230,311);
			end;
		} else {
			priestq2 = 10;
			mes "[Bafom�]";
			mes "Humano tolo...";
			mes "Voc� fez sua escolha.";
			mes "Eu o deixarei.";
			mes "Entretanto, seu treinamento n�o ser� t�o f�cil como voc� pensa.";
			next;
			mes "[Bafom�]";
			mes "Eu prepararei minhas tropas para voc�.";
			mes "O momento que apreciarei a agonia de sua alma enquanto meus amigos lentamente a devoram chegar�.";
			close;
		}
	}
	end;
}

// ------------------------------------------------------------------
job_prist,168,180,0	script	prstestwarp2#priestq	WARPNPC,3,3,{
	OnTouch:
	if (priestq2 == 10) {
		mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" Acaba de entrar na �rea 3 de testes. 2 minutos ser�o dados para completar a tarefa.",bc_map);
		warp(strnpcinfo(NPC_MAP),98,40);
		donpcevent ("prsttime#priestq::OnStop");
		donpcevent ("prsttime2#priestq::OnEnable");
		donpcevent ("prstmummy#priestq::OnEnable");
	}
	end;
}

// ------------------------------------------------------------------
job_prist,2,1,0	script	prsttime2#priestq	HIDDEN_NPC,{
	end;

	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	initnpctimer;
	end;

	OnStop:
	stopnpctimer;
	end;

	OnTimer120000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo acabou! Pr�ximo cadidato entre na �rea de testes.",bc_map);
	$PriestJoinTest = 0;
	donpcevent ("prstmummy#priestq::OnDisable");
	areawarp (strnpcinfo(NPC_MAP),90,34,105,105,"prontera",230,311);
	end;

}

// ------------------------------------------------------------------
job_prist,1,1,0	script	prstmummy#priestq	HIDDEN_NPC,{
	end;

	OnInit:
	disablenpc ("prstmummy1#priestq");
	disablenpc ("prstmummy2#priestq");
	disablenpc ("prstmummy3#priestq");
	end;

	OnEnable:
	enablenpc ("prstmummy#priestq");
	enablenpc ("prstmummy2#priestq");
	enablenpc ("prstmummy3#priestq");
	end;

	OnDisable:
	disablenpc ("prstmummy#priestq");
	disablenpc ("prstmummy2#priestq");
	disablenpc ("prstmummy3#priestq");
	killmonsterall (strnpcinfo(NPC_MAP));
	end;
}

// ------------------------------------------------------------------
job_prist,90,55,0	script	prstmummy1#priestq	FAKE_NPC,15,1,{
	OnTouch:
	monster (strnpcinfo(NPC_MAP),90,55,"M�mia",1041,1);
	monster (strnpcinfo(NPC_MAP),105,55,"M�mia",1041,1);
	disablenpc (strnpcinfo(NPC_NAME));
	end;
}

job_prist,90,55,0	script	prstmummy2#priestq	FAKE_NPC,15,1,{
	OnTouch:
	monster (strnpcinfo(NPC_MAP),90,70,"M�mia",1041,1);
	monster (strnpcinfo(NPC_MAP),105,70,"M�mia",1041,1);
	disablenpc (strnpcinfo(NPC_NAME));
	end;
}

job_prist,90,55,0	script	prstmummy3#priestq	FAKE_NPC,15,1,{
	OnTouch:
	monster (strnpcinfo(NPC_MAP),90,85,"M�mia",1041,1);
	monster (strnpcinfo(NPC_MAP),105,85,"M�mia",1041,1);
	disablenpc (strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
job_prist,98,105,4	script	prstestwarp3#priestq	WARPNPC,3,3,{
	OnTouch:
	donpcevent ("prstmummy#priestq::OnDisable");
	donpcevent ("prsttime2#priestq::OnStop");
	priestq = 7;
	priestq2 = 0;
	changequest (8012,8013);
	warp ("prt_church",16,37);
	$PriestJoinTest = 0;
	mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+"Acaba de concluir seu teste espiritual! Pr�ximo cadidato entre na �rea de testes.",bc_map);
	end;
}

// ------------------------------------------------------------------
job_prist,4,1,0	script	PriestJoinTest#priestq	HIDDEN_NPC,{
	OnInit:
	mapwarp (strnpcinfo(NPC_MAP),"prontera",230,311);
	if ($PriestJoinTest) { $PriestJoinTest = 0; }
	end;
}
