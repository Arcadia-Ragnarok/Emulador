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
| - Info: Quest de Mudança de Classe para Sacerdote.                |
| - Nota: Requer quest de mudança de classe para Noviço.            |
| - Nota2: Ambos arquivos de scripts com ambas quests devem ser     |
|          do mesmo desenvolvedor desse script.                     |
\*-----------------------------------------------------------------*/

prt_church,16,41,4	script	Bispo#priestq	1_M_PASTOR,{
	if (BaseJob == Job_Acolyte) {
		if (!priestq) {
			mes "[Bispo Paul]";
			mes "Que deus esteja com";
			mes "você, "+(Sex == SEX_MAME ?"Irmão.":"Irmã.")+".";
			mes "O que o traz até aqui?";
			next;
			if (select("Eu quero me tornar Sacerdote","Como você está, Bispo?") == 2) {
				mes "[Bispo Paul]";
				mes "Eu vou indo bem e estou com boa saúde.";
				mes "Obrigado por perguntar.";
				next;
				mes "[Bispo Paul]";
				mes "Espero que você continue em sua missão como servo de Deus.";
				next;
				mes "[Bispo Paul]";
				mes "Espero, que nossos caminhos se cruzem novamente.";
				mes "Que Deus te abençoe...";
				close;
			} else {
				if (JobLevel < 40) {
					mes "[Bispo Paul]";
					mes "Você não está capacitad"+(Sex == SEX_MAME ? "o":"a")+" ainda para se tornar Sacerdote.";
					mes "Por favor saia pelo mundo e aumente suas experiências.";
					next;
					mes "[Bispo Paul]";
					mes "Ainda existem algumas coisas que você deve aprender como um Noviço.";
					mes "Entretanto, estou ansioso em vê-l"+(Sex == SEX_MAME ? "o":"a")+" novamente.";
					close;
				} else {
					mes "[Bispo Paul]";
					mes "Compreendo.";
					mes "Então você deseja se tornar "+(Sex == SEX_MAME ? "um Sacerdote":"uma Sacerdotisa")+".";
					mes "Deus ficará satisfeito com sua decisão e irá te abençoar.";
					next;
					mes "[Bispo Paul]";
					mes "Eu sou o Bispo Paul Cervantes, e estou no comando da Catedral de Prontera.";
					mes "Fico satisfeito em encontrar uma pessoa tão interessada como você.";
					next;
					mes "[Bispo Paul]";
					mes "Agora irei explicar os Três Exames do Sacedócio.";
					mes "Esses testes irão lhe trazer muito sofrimento.";
					mes "Mas espero que você consiga superá-los.";
					next;
					mes "[Bispo Paul]";
					mes "No primeiro exame, você deve fazer uma viagem.";
					mes "E visitar três sacerdotes em uma ordem específica.";
					next;
					mes "[Bispo Paul]";
					mes "O segundo exame consiste em um treinamento espiritual.";
					mes "Você deve resistir as tentações de Demônios e Mortos-Vivos.";
					next;
					mes "[Bispo Paul]";
					mes "E por fim no exame final, você irá prometer sua devoção a Deus.";
					mes "Sua vontade de se sacrificar também será questionada.";
					next;
					if (JobLevel != 50) {
						mes "[Bispo Paul]";
						mes "Se está dispost"+(Sex == SEX_MAME ? "o":"a")+" a cumprir essas tarefas venha falar comigo novamente.";
						priestq = 1;
						setquest (8009);
						close;
					} else {
						mes "[Bispo Paul]";
						mes "Vejo o esforço que você fez para alcançar o Nível de Classe 50.";
						mes "Então não há necessidade de provar sua devoção e não precisará concluir o primeiro teste.";
						next;
						mes "[Bispo Paul]";
						mes "Agora, você poderá ir diretamente para o segundo exame: Treinamento Espiritual.";
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
			mes "Bem, deixe me dizer a ordem dos sacerdotes que você deve visitar na sua viagem.";
			next;
			mes "[Bispo Paul]";
			mes "Primeiro, por favor visite o Irmão Simão que está a Nordeste de Prontera.";
			next;
			mes "[Bispo Paul]";
			mes "Segundo, visite a Irmã Matilda.";
			mes "Ela está localizada em uma área próxima a Morroc.";
			next;
			mes "[Bispo Paul]";
			mes "O terceiro sacerdote que você deve visitar será o Irmão Bartolomeu.";
			mes "Ele está em um campo a Noroeste de Prontera.";
			next;
			mes "[Bispo Paul]";
			mes "Então Bem, desejo a você uma jornada segura.";
			mes "Se você tiver alguma dúvida, por favor pergunte a Irmã Cecília.";
			next;
			mes "[Bispo Paul]";
			mes "Ao retornar de sua viagem, eu falarei mais sobre o próximo teste.";
			next;
			mes "[Bispo Paul]";
			mes "Que Deus te abençoe...";
			priestq = 2;
			changequest (8009,8010);
			close;
		}
		// priestq (2) => "Irmão Simão#acolyteq" prt_fild03,365,255
		// priestq (3) => "Irmã Matilda#acolyteq" moc_fild07,41,355
		// priestq (4) => "Irmão Bartolomeu#acolyteq" prt_fild00,208,218
		else if (priestq > 1 && priestq < 5) {
			mes "[Bispo Paul]";
			mes "Posso perguntar por que razão você ainda está por aqui?";
			mes "Você não esqueceu que deve viajar, esqueceu?";
			next;
			if (select("Explique novamente","Não, imagina.") == 1) {
				mes "[Bispo Paul]";
				mes "Certo.";
				mes "Irei relembrar a ordem de vistita novamente, e espero que você tenha uma jornada segura.";
				next;
				mes "[Bispo Paul]";
				mes "Primeiro, encontre o Irmão Simão, ele está a Nordeste das ruínas de Prontera.";
				next;
				mes "[Bispo Paul]";
				mes "Lembre-se de se encontrar com a Irmã Matilda.";
				mes "Ela está em algum lugar perto da cidade de Morroc ao Sudoeste de Prontera.";
				next;
				mes "[Bispo Paul]";
				mes "E finalmente, por favor procure pelo Irmão Bartolomeu.";
				mes "Ele está em um campo a Noroeste de Prontera.";
				next;
				mes "[Bispo Paul]";
				mes "Bem, então eu vou rezar para que sua jornada seja tranquila.";
				mes "Se quiser mais informações, por favor pergunte a Irmã Cecília.";
				next;
				mes "[Bispo Paul]";
				mes "Quando você voltar de sua jornada, falarei mais sobre seu próximo teste.";
				next;
				mes "[Bispo Paul]";
				mes "Que Deus te abençoe...";
				close;
			} else {
				mes "[Bispo Paul]";
				mes "Entendo.";
				mes "Mas se você tiver qualquer pergunta, pode perguntar a Irmã Cecília.";
				mes "Ela irá responder qualquer dúvida sua.";
				next;
				mes "[Bispo Paul]";
				mes "Bem, então eu vou rezar para que sua jornada seja segura.";
				mes "Que Deus te abençoe...";
				close;
			}
		} else if (priestq == 5) {
			mes "[Bispo Paul]";
			mes "Sua viagem está terminada.";
			mes "Parabéns, você passou no primeiro teste de peregrinação.";
			next;
			mes "[Bispo Paul]";
			mes "É hora de começar seu treinamento espiritual.";
			mes "Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" venha coneversar comigo novamente.";
			mes "Que lhe enviarei para o campo de treinamento.";
			changequest (8010,8011);
			priestq = 6;
			close;
		} else if (priestq == 6) {
			if (getmapusers("job_prist") >= 1) {
				mes "[Bispo Paul]";
				mes "No momento outro irmão está fazendo seus tentes na área.";
				mes "Você deverá esperar até que ele termine.";
				close;
			} else {
				mes "[Bispo Paul]";
				mes "Bem, você está pronto para o treinamento espiritual?";
				next;
				if (select("Sim estou","Me dê um minuto") == 1) {
					mes "[Bispo Paul]";
					mes "Irei mandá-lo para o campo de treinamento.";
					mes "Quando chegar lá, por favor fale com o irmão Pedro, que está encarregado do treinamento.";
					close2;
					warp ("job_prist",24,180);
					end;
				} else {
					mes "[Bispo Paul]";
					mes "Sem problema, não tenha pressa.";
					mes "Que Deus lhe dê força para superar seus medos...";
					close;
				}
			}
		} else if (priestq == 7) {
			mes "[Bispo Paul]";
			mes "Estou feliz por você ter terminado o treinamento espiritual.";
			mes "Parabéns.";
			mes "Agora você pode ser chamado de Sacerdote.";
			next;
			mes "[Bispo Paul]";
			mes "Mas no momento vá até a Irmã Cecília.";
			mes "Ela tem algumas perguntas a fazer.";
			next;
			mes "[Bispo Paul]";
			mes "Bem...";
			mes "Estarei aqui esperando por você.";
			close;
		} else if (priestq == 8) {
			if (SkillPoint) {
				mes "[Bispo Paul]";
				mes "Você ainda possui pontos de habilidade restando.";
				mes "Por favor use todos essses pontos para melhorar suas habilidades, e depois volte.";
				close;
			} else {
				mes "[Bispo Paul]";
				mes "Parabéns, você completou todos os exames necessários dos Sacerdotes.";
				mes "Deixe-me promovê-lo a "+(Sex == SEX_MALE ? "um Sacerdote": "uma Sacerdotisa")+" agora mesmo.";
				next;
				mes "[Bispo Paul]";
				mes "Deus, conceda seu poder para este servo diante de ti.";
				mes "Deixe-o que envie sua mensagem pelos arredores do mundo.";
				next;
				mes "[Bispo Paul]";
				mes "Faça desse servo um instrumento de seu trabalho...";
				next;
				.@acolyteLv = JobLevel;
				jobchange (Job_Priest);
				completequest (8015);
				callfunc ("ClearJobQuest2nd",8);
				mes "[Bispo Paul]";
				mes "Agora sendo Sacerdote.";
				mes "Eu te parabenizo, e que você ajude outras pessoas pelo resto de sua vida.";
				next;
				mes "[Bispo Paul]";
				if (.@acolyteLv != 50) {
					getitem (Book,1);
					mes "Este livro é seu.";
					mes "Espero que ele te ajude a espalhar a mensagem de Deus na Terra.";
				}
				else {
					getitem (Bible,1);
					mes "Em comemoração a sua mudança de classe, te darei uma bíblia.";
					mes "Isto irá iluminá-lo pelo caminho da graça.";
				}
				next;
				mes "[Bispo Paul]";
				mes "Você demonstrou muito esforço, e fez um admirável progresso em sua tarefa pessoal de santidade.";
				mes "Por favor viva sua vida como um verdadeiro Sacerdote...";
				close;
			}
		}
	} else {
		if (BaseJob == Job_Priest) {
			mes "[Bispo Paul]";
			mes "Ah...";
			mes "É bom ver você, "+(Sex == SEX_MALE ? "Irmão":"Irmã")+" "+strcharinfo(PC_NAME)+".";
			next;
			mes "[Bispo Paul]";
			mes "Fico satisfeito em ver que você continuará orientando as crianças de Deus pelo caminho certo.";
			close;
		} else {
			mes "[Bispo Paul]";
			mes "Você está dentro do Santuário.";
			mes "O que o trouxe até aqui?";
			next;
			switch(select("Informações sobre os Sacerdotes","Nada")) {
				case 1:
				mes "[Bispo Paul]";
				mes "Nosso dever e obrigação como Sacerdote é nos devotar.";
				mes "Ajudando os outros sem esperar nenhuma tipo de recompensa.";
				next;
				mes "[Bispo Paul]";
				mes "À medida que vamos ajudando os outros, não devemos esperar tratamento igual.";
				mes "Ser um grande sacerdote é de responsabilidade opção exclusivamente pessoal.";
				next;
				mes "[Bispo Paul]";
				mes "Porém, quem recebe ajuda deve ser grato.";
				mes "Você deve dar exemplo, mas você também deve ter seu limite como humano.";
				next;
				mes "[Bispo Paul]";
				mes "Espero que tenha explicado o suficiente sobre Sacerdotes.";
				mes "Por que você não vai lá fora e conversa com alguns outros Sacerdores.";
				mes "Se quer saber mais sobre seus estilos de vida?";
				next;
				break;
				case 2:
				mes "[Bispo Paul]";
				mes "Por favor sinta-se em casa.";
				mes "Na Terra, nenhum lugar é tão seguro como esse Santuário.";
				next;
				break;
			}
			mes "[Bispo Paul]";
			mes "Bem...";
			mes "Que Deus lhe abençoe.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_church,27,24,1	script	Irmã Cecilia#priestq	1_F_PRIEST,{
	if (BaseJob == Job_Acolyte) {
		if (!priestq) {
			mes "[Irmã Cecilia]";
			mes "Meu coração fica alegre ao ver que você está trabalhando duro para cumprir a vontade de Deus.";
			mes "A Catedral de Prontera o parabeniza.";
			next;
			mes "[Irmã Cecilia]";
			mes "Você ainda não escolheu uma classe?";
			mes "Por que você não dedica sua vida a Deus?";
			next;
			mes "[Irmã Cecilia]";
			mes "Você pode ter uma vida completa sendo um Noviço, ajudando outras pessoas.";
			next;
			mes "[Irmã Cecilia]";
			mes "Se você estiver interessad"+(Sex == SEX_MALE ? "o":"a")+", fale com o Bispo na outra sala.";
			close;
		} else if (priestq == 1) {
			mes "[Irmã Cecilia]";
			mes "Posso perguntar o que te faz vir aqui?";
			next;
			switch(select("Eu quero me tornar um Sacerdote","Nada")) {
				case 1:
				mes "[Irmã Cecilia]";
				mes "Você se dedica a Deus.";
				mes "Muitos Noviços desejam ser sacerdotes e continuar em sua jornada pessoal de santidade.";
				next;
				mes "[Irmã Cecilia]";
				mes "Deixe-me que eu me apresente.";
				mes "Sou Cecília Margarita, e estou no comando da área encarregada pelo processo de mudança de classe para Sacerdote.";
				next;
				mes "[Irmã Cecilia]";
				mes "Tenho ajudado muitas pessoas a se tornarem Sacerdotes desde quando entrei na Catedral de Prontera.";
				mes "Essa é uma das minhas responsabilidades.";
				next;
				mes "[Irmã Cecilia]";
				mes "Para se tornar um Sacerdote, você deve completar 3 exames.";
				mes "Uma viajem, uma sessão de treinamento espiritual, e um juramento de devoção a Deus.";
				next;
				mes "[Irmã Cecilia]";
				mes "Se você deseja se tornar um servo de Deus, por favor inscreva-se com o Bispo Paul.";
				next;
				mes "[Irmã Cecilia]";
				mes "E se por acaso você experimentar um problema durante qualquer um dos exames.";
				mes "Sinta-se a vontade para vir falar comigo.";
				mes "Eu vou te ajudar como puder.";
				close;
				case 2:
				mes "[Irmã Cecilia]";
				mes "Fique à vontade.";
				mes "Eu insisto que você se recupere e tenha um bom descanso neste Santuário.";
				mes "Que Deus te abençoe...";
				close;
			}
		} else if (priestq == 2) {
			mes "[Irmã Cecilia]";
			mes "Ah, você começou sua jornada.";
			mes "Por favor dê seu melhor para completar sua primeira tarefa.";
			next;
			mes "[Irmã Cecilia]";
			mes "O primeiro Sacerdote que você precisa encontrar é o Irmão Simão.";
			mes "Ele está nas ruinas ao nordeste de Prontera.";
			next;
			mes "[Irmã Cecilia]";
			mes "Vá para o Norte de Prontera, e então siga 3 campos a Leste, e você chegará nas ruinas.";
			next;
			mes "[Irmã Cecilia]";
			mes "Claro, você também poder ir para o campo Leste de Prontera, então ir 1 Campo para o Norte, e seguir 2 campos a Leste...";
			next;
			mes "[Irmã Cecilia]";
			mes "Irmão Simão estará na entrada das ruinas de Prontera.";
			mes "Tenha cuidado.";
			mes "Aquele lugar está cheio de Chocos agressivos.";
			next;
			mes "[Irmã Cecilia]";
			mes "Depois de falar com o Irmão Simão, por favor visite Irmã Matilda e Irmão Bartolomeu.";
			mes "Você pode checar o progresso da sua peregrinação comigo se você tiver qualquer perguntas.";
			next;
			mes "[Irmã Cecilia]";
			mes "Bem então, faça uma boa jornada.";
			mes "Por favor não desista por sofrimentos de pouca vida, e eu espero que você cumpra seus objetivos.";
			close;
		} else if (priestq == 3) {
			mes "[Irmã Cecilia]";
			mes "Ah, você encontrou o Irmão Simão.";
			mes "Agora é hora de visitar a Irmã Matilda.";
			mes "Ela está perto de uma cidade chamada Morroc.";
			next;
			mes "[Irmã Cecilia]";
			mes "Ela tem treinado sua disciplina religiosa em um lugar ao Norte de Morroc.";
			mes "Se você procurá-la por lá, irá encontrá-la.";
			next;
			mes "[Irmã Cecilia]";
			mes "Óbvio, as vezes tenho vontade de me dedicar ao treinamento como esses Sacerdotes,";
			mes "Mas eu possuo essa tarefa de ajudar os Noviços a se tornarem Sacerdotes.";
			next;
			mes "[Irmã Cecilia]";
			mes "Sei que essa é a vontade de Deus, e esse é o trabalho que ele pretende que eu faça como sua serva.";
			mes "Tenha uma viagem segura.";
			close;
		} else if (priestq == 4) {
			mes "[Irmã Cecilia]";
			mes "Por fim, O último Sacerdote que você deve encontrar é o Irmão Bartolomeu.";
			mes "Ouvi dizer que ele está treinando perto de um lago localizado a Noroeste de Prontera.";
			next;
			mes "[Irmã Cecilia]";
			mes "Saindo de Prontera, vá um campo para o Norte, e dois campos para Oeste.";
			mes "Você também pode viajar por dois campos Oeste, e percorrer um campo para Norte.";
			next;
			mes "[Irmã Cecilia]";
			mes "Mesmo apesar de ainda existirem 2 exames esperando por você.";
			mes "Renho fé de que você será capaz de cumprir seu objetivo que é se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+"...";
			close;
		} else if (priestq == 5) {
			mes "[Irmã Cecilia]";
			mes "Você demonstrou grande esforço ao completer seu primeira exame.";
			mes "Fale com o Bispo Paulo para começar seu próximo teste no caminho do sacerdócio.";
			next;
			mes "[Irmã Cecilia]";
			mes "A formação espiritual é muito mais difícil do que a viagem, mas acredito em você.";
			close;
		} else if (priestq == 6) {
			mes "[Irmã Cecilia]";
			mes "Ah, você ainda não acabou o treinamento espiritual?";
			next;
			mes "[Irmã Cecilia]";
			mes "Eu não posso dar detalhes.";
			mes "Mas se você acreditar em si mesmo e tiver fé em tudo que é bom.";
			mes "Você se sairá bem.";
			next;
			mes "[Irmã Cecilia]";
			mes "Por favor fale com Irmão Pedro na sala de testes se quiser saber mais.";
			mes "Ele é um amigo próximo do Bispo Paul e pode te dar algumas dicas úteis sobre o treinamento espiritual.";
			close;
		} else if (priestq == 7) {
			if (questprogress(8013)) {
				changequest (8013,8014);
			}
			mes "[Irmã Cecilia]";
			mes "Agora poderemos começar seu formal Juramento de Sacerdócio.";
			mes "Essas perguntas servirão para sabermos sua devoção.";
			next;
			mes "[Irmã Cecilia]";
			mes "Sinta-se confortável, e apenas responda com seu coração.";
			mes "Que se sairá bem.";
			next;
			mes "[Irmã Cecilia]";
			mes "Você está disposto a entregar sua vida a Deus?";
			next;
			if (select("Sim","Não") == 2) {
				.@prstq += 1;
			}
			mes "[Irmã Cecilia]";
			mes "Você usará seus poderes apenas para si mesmo?";
			next;
			if (select("Sim","Não") == 1) {
				.@prstq += 1;
			}
			mes "[Irmã Cecilia]";
			mes "Você vai usar seus poderes para ajudar os outros?" ;
			next;
			if (select("Sim","Não") == 2) {
				.@prstq += 1;
			}
			mes "[Irmã Cecilia]";
			mes "Você se sacrificaria pela vida de outra pessoa?";
			next;
			if (select("Sim","Não") == 2) {
				.@prstq += 1;
			}
			mes "[Irmã Cecilia]";
			mes "Você viverá e morrerá pela glória divina?";
			next;
			if (select("Sim","Não") == 2) {
				.@prstq += 1;
			}
			mes "[Irmã Cecilia]";
			mes "Você respondeu tudo honestamente com seu coração?";
			next;
			mes "[Irmã Cecilia]";
			mes "...";
			mes "......";
			next;
			if (.@prstq) {
				mes "[Irmã Cecilia]";
				mes "Então, reflita um pouco mais nos ensinamentos da santidade e volte após isso.";
				mes "Você não pode ser "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+" com um espírito fraco.";
				close;
			} else {
				priestq = 8;
				changequest (8014,8015);
				mes "[Irmã Cecilia]";
				mes "Agora, você completou seu juramento de Sacerdócio.";
				mes "E todos os exames para se tornar um Sacerdote.";
				next;
				mes "[Irmã Cecilia]";
				mes "Vá ao Bispo Paul.";
				mes "E lembre-se, nós todos somos irmãos e irmãs aos olhos de Deus.";
				mes "Que a paz esteja com você...";
				close;
			}
		} else if (priestq == 8) {
			mes "[Irmã Cecilia]";
			mes "Vá ao Bispo Paul.";
			mes "E lembre-se, nós todos somos irmãos e irmãs aos olhos de Deus.";
			mes "Que a paz esteja com você...";
			close;
		}
	} else {
		mes "[Irmã Cecilia]";
		mes "Sinta-se livre para relaxar e sentir-se em casa.";
		mes "Nenhum lugar na terra é mais seguro do que a Catedral de Prontera.";
		next;
		mes "[Irmã Cecilia]";
		mes "Que Deus te abençoe...";
		close;
	}
}

// ------------------------------------------------------------------
job_prist,24,187,4	script	Peter S. Alberto#priestq	4_M_MINISTER,{
	if (priestq < 6) {
		mes "[Irmão Peter]";
		mes "Você não deveria está nesse lugar.";
		mes "Retire-se agora mesmo.";
		close2;
		warp ("prontera",230,311);
		end;
	} else if (priestq == 6) {
		if (!priestq2) {
			priestq2 = 1;
			mes "[Irmão Peter]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Meu nome é Pedro S. Alberto.";
			mes "Como está meu colega Paulo?";
			mes "Ele está bem durante esses dias?";
			next;
			mes "[Irmão Peter]";
			mes "Ah, sempre me esqueço que ele foi promovido a Bispo.";
			mes "Acho que deveria chamá-lo de Bispo Paul, ou Sua Excelência.";
			next;
		} else {
			mes "[Irmão Peter]";
			mes "Você voltou, como posso ajudar?";
			next;
		}
		switch(select("Informações do teste","Começar o teste","Voltar à Prontera")) {
			case 1:
			mes "[Irmão Peter]";
			mes "No treinamento espiritual, você irá derrotar criaturas malignas.";
			mes "Mortos-vivos e Demônios são do mal.";
			next;
			mes "[Irmão Peter]";
			mes "Existem muitas criaturas malignas que vagam por esse mundo contra a vontade de Deus.";
			mes "Pessoas inocentes sofrem por causa de suas maldades.";
			next;
			mes "[Irmão Peter]";
			mes "Nós, como Sacerdotes, somos obrigados a exterminar todas essas criaturas, assim espalhando amor e paz.";
			next;
			mes "[Irmão Peter]";
			mes "Esse treinamento irá testar sua habildade de eliminar o mal.";
			next;
			mes "[Irmão Peter]";
			mes "Pronto para começar?";
			next;
			if (select("Sim","Não") == 1) {
				break;
			} else {
				close;
			}
			case 2: break;
			case 3:
			close2; warp ("prontera",230,311); end;
		}
		if ($PriestJoinTest) {
			mes "No momento outra pessoa já está fazendo o teste de aprovação.";
			mes "Você deverá esperar até que essa pessoa terminine para entrar na área";
			close;
		} else {
			mes "[Irmão Peter]";
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
		mes "[Irmão Peter]";
		mes "Muito bem você derrotou todas criaturas malígnas.";
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
	monster (strnpcinfo(NPC_MAP),30,52,"Ciúme",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon2:
	monster (strnpcinfo(NPC_MAP),21,62,"Fúria",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),27,62,"Inveja",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon3:
	monster (strnpcinfo(NPC_MAP),24,72,"Arrogância",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),18,72,"Luxúria",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),30,72,"Preguiça",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon4:
	monster (strnpcinfo(NPC_MAP),21,82,"Gula",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),27,82,"Ganância",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon5:
	monster (strnpcinfo(NPC_MAP),24,92,"Desespero",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),18,92,"Desconfiança",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),30,92,"Medo",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnTimer300000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo acabou! Próximo cadidato entre na área de testes.",bc_map);
	$PriestJoinTest = 0;
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMobDead");
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	end;
}

// ------------------------------------------------------------------
job_prist,24,44,0	script	prstmob2#priestq	FAKE_NPC,17,1,{
	OnTouch:
	if (priestq2 == 1) {
		mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" Acaba de entrar na área de testes. 5 minutos serão dados para derrotar as criaturas do mal.",bc_map);
		mes "[Irmão Peter]";
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
		mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" Acaba de entrar na área 2 de testes. 5 minutos serão dados para completar a tarefa.",bc_map);
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
	mapannounce (strnpcinfo(NPC_MAP),"O candidato fracassou no teste! Próximo cadidato entre na área de testes.",bc_map);
	$PriestJoinTest = 0;
	stopnpctimer;
	end;

	OnTimer300000:
	mapannounce (strnpcinfo(NPC_MAP),"O tempo acabou! Próximo cadidato entre na área de testes.",bc_map);
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
		mes "Olá pequeno Noviço.";
		next;
		mes "[Deviruchi]";
		mes "Você deve treinar duro para se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+".";
		mes "É engraçado, atualmente eu conheço um monte de servos de Deus.";
		mes "Eles me falam que é muito difícil servir Deus o tempo todo.";
		mes "Muito... muito ^666666cansativo^000000 e ^666666sem Recompensas^000000.";
		next;
		mes "[Deviruchi]";
		mes "Digo, as pessoas estão sempre chorando e pedindo por ajuda de Sacerdotes, não importa onde eles estejam.";
		mes "E os Sacerdotes nunca ganham nada em troca...";
		next;
		mes "[Deviruchi]";
		mes "É realmente trágico, como os Sacerdotes são pouco reconhecidos.";
		mes "É notável que qualquer outro trabalho é melhor.";
		mes "Qualquer um...";
		next;
		mes "[Deviruchi]";
		mes "Será que a vida não seria muito mais fácil se você não fosse um sacerdote?";
		mes "Tudo que você tem que fazer é só desistir...";
		next;
		if (select("Está certo, melhor desisir","Desapareça, demônio!") == 1) {
			mes "[Deviruchi]";
			mes "Hã...?";
			mes "Olha a ^660000hora^000000.";
			mes "É melhor ir andando.";
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
			mes "Você irá lamentar pela sua decisão depois!";
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
		mes "Espere ai, Noviço.";
		mes "Eu não gosto do Deviruchi, então eu posso falar com você.";
		next;
		mes "[Doppelganger]";
		mes "Agora me fale, por que você quer se tornar um Sacerdote?";
		mes "É um trabalho díficil, não compensa.";
		mes "Se você quiser, te dou a chance de se tornar um Aprendiz.";
		mes "E então você poderá se tornar algo muito melhor!";
		next;
		mes "[Doppelganger]";
		mes "E é claro que irei deixar você redistribuir seus pontos de atributos.";
		mes "Me fale, não é um bom negócio...?";
		next;
		if (select("Sim é mesmo","Não negocio com você!") == 1) {
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
			mes "Hmpf. Admiro sua determinação.";
			mes "Tudo bem, você pode passar.";
			next;
			mes "[Doppelganger]";
			mes "Mas se por acaso nos encontrarmos novamente.";
			mes "Te garanto... Você não irá ficar feliz em me ver.";
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
		mes "^330033Você ainda deseja se tornar um Sacerdote?!";
		mes "Então, eu não irei deixar você passar.";
		mes "Volte!";
		mes "Caso contrário, você não irá sobreviver.^000000";
		next;
		mes "[Senhor das Trevas]";
		mes "^330033Seria tão fácil para mim para cortar o seu corpo frágil em dois e moer os ossos até virarem pó.";
		mes "Agora, volte mortal!^000000";
		next;
		if (select("Eu sinto muito. Poupe-me!","Deus irá me proteger.") == 1) {
			mes "[Senhor das Trevas]";
			mes "^330033Não volte nunca mais!^000000";
			close2;
			donpcevent ("prsttime#priestq::OnDisable");
			warp ("prontera",230,311);
			end;
		} else {
			priestq2 = 9;
			mes "[Senhor das Trevas]";
			mes "^330033Por que...";
			mes "Por que você não tem medo de mim?!";
			mes "Para um frágil mortal, você é tem muita coragem.^000000";
			next;
			mes "[Senhor das Trevas]";
			mes "^330033Quando nos encontrarmos novamente.";
			mes "Te levarei a um reino de sofrimento onde você irá passar anos sob uma dor imaginável.";
			mes "Guarde minhas palavras...^000000";
			close;
		}
	}
	end;
}

// ------------------------------------------------------------------
job_prist,168,150,4	script	Bafomé#priestq	4_BAPHOMET,8,1,{
	OnTouch:
	if (priestq2 == 9) {
		mes "[Bafomé]";
		mes "Saudações "+strcharinfo(PC_NAME)+".";
		next;
		mes "[Bafomé]";
		mes "Sim, humano, sei quem é você.";
		next;
		mes "[Bafomé]";
		mes "Eu posso te garantir e dar qualquer tesouro que você queira e também posso te conceder poder infinito.";
		mes "Armas poderosas que humanos jamais viram...";
		next;
		mes "[Bafomé]";
		mes "Montanhas de zeny que você em vida nunca conseguirá gastar.";
		mes "Quem disse que sua vida precisa ser limitada?";
		mes "Fama, poder, imortalidade: tudo isso pode ser seu.";
		next;
		mes "[Bafomé]";
		mes "Eu poderei ser chamado a qualquer instante.";
		mes "Todos os humanos temerão ao serem seus inimigos.";
		mes "Você se tornará a pessoa mais poderosa de toda a história!";
		next;
		mes "[Bafomé]";
		mes "Deixe de lado essa idiotisse de buscar o sacerdócio.";
		mes "Faça um contrato comigo.";
		mes "O mundo inteiro será seu.";
		next;
		if (select("Eu quero tudo!","Afaste-se de mim malígno!") == 1) {
			mes "[Bafomé]";
			mes "Então nós podemos formar um contrato.";
			mes "Você nunca se esquecerá desse momento...";
			next;
			mes "[Bafomé]";
			mes "Siga-me.";
			mes "Nós faremos o contrato no meu santuário da escuridão.";
			close2;
			donpcevent ("prsttime#priestq::OnDisable");
			warp ("prontera",230,311);
			end;
		} else {
			priestq2 = 10;
			mes "[Bafomé]";
			mes "Humano tolo...";
			mes "Você fez sua escolha.";
			mes "Eu o deixarei.";
			mes "Entretanto, seu treinamento não será tão fácil como você pensa.";
			next;
			mes "[Bafomé]";
			mes "Eu prepararei minhas tropas para você.";
			mes "O momento que apreciarei a agonia de sua alma enquanto meus amigos lentamente a devoram chegará.";
			close;
		}
	}
	end;
}

// ------------------------------------------------------------------
job_prist,168,180,0	script	prstestwarp2#priestq	WARPNPC,3,3,{
	OnTouch:
	if (priestq2 == 10) {
		mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+" Acaba de entrar na área 3 de testes. 2 minutos serão dados para completar a tarefa.",bc_map);
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
	mapannounce (strnpcinfo(NPC_MAP),"O tempo acabou! Próximo cadidato entre na área de testes.",bc_map);
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
	monster (strnpcinfo(NPC_MAP),90,55,"Múmia",1041,1);
	monster (strnpcinfo(NPC_MAP),105,55,"Múmia",1041,1);
	disablenpc (strnpcinfo(NPC_NAME));
	end;
}

job_prist,90,55,0	script	prstmummy2#priestq	FAKE_NPC,15,1,{
	OnTouch:
	monster (strnpcinfo(NPC_MAP),90,70,"Múmia",1041,1);
	monster (strnpcinfo(NPC_MAP),105,70,"Múmia",1041,1);
	disablenpc (strnpcinfo(NPC_NAME));
	end;
}

job_prist,90,55,0	script	prstmummy3#priestq	FAKE_NPC,15,1,{
	OnTouch:
	monster (strnpcinfo(NPC_MAP),90,85,"Múmia",1041,1);
	monster (strnpcinfo(NPC_MAP),105,85,"Múmia",1041,1);
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
	mapannounce (strnpcinfo(NPC_MAP),strcharinfo(PC_NAME)+"Acaba de concluir seu teste espiritual! Próximo cadidato entre na área de testes.",bc_map);
	end;
}

// ------------------------------------------------------------------
job_prist,4,1,0	script	PriestJoinTest#priestq	HIDDEN_NPC,{
	OnInit:
	mapwarp (strnpcinfo(NPC_MAP),"prontera",230,311);
	if ($PriestJoinTest) { $PriestJoinTest = 0; }
	end;
}
