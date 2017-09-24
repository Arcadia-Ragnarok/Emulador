/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Desenvolvido por: Spell Master (17/09/2017)                     |
| - Nota: Quest de Mudança de Classe para Templário.                |
\*-----------------------------------------------------------------*/

prt_castle,45,169,5	script	Templário#crusaderq	4_M_CRU_OLD,{
	if(BaseJob == Job_Swordman) {
		if (!crusaderq) {
			mes "[Templário]";
			mes "Nós somos Templários, guerreiros estamos nos preparando para a Guerra Santa.";
			mes "O que traz você a este lugar?";
			next;
			if (select("Quero me juntar a vocês!","Nada em particular") == 2) {
				mes "[Templário]";
				if (Sex == SEX_MALE) {
					mes "Se você tambem é um homem da espada, treine constantemente e prepare-se.";
					mes "Ninguém sabe quando a Guerra Santa começará.";
				} else {
					mes "Como uma mulher de espada, você deve treinar constantemente.";
					mes "Prepare-se, pois ninguém sabe quando a Guerra Santa irá começar.";
				}
				close;
			} else {
				if(JobLevel < 40) {
					mes "[Templário]";
					mes "Espere...";
					mes "Você precisa estar no Nivel de Classe 40 ou mais para se juntar a nós.";
					next;
					mes "[Templário]";
					mes "Treine mais como um Espadachim e espere você ser chamado.";
					mes "Eu entendo sua intenção, mas no momento, você não pode se juntar a nós.";
					close;
				} else {
					mes "[Templário]";
					mes "Você deseja se tornar "+(Sex == SEX_MALE ? "um Templário":"uma Templária")+"...?";
					mes "Se juntar a nós não é tão facil como parece.";
					next;
					mes "[Templário]";
					mes "Eu sou Michael Halig, Líder dos Templários.";
					mes "Também sou um dos muitos Templários que estão se preparando para a Guerra Santa.";
					mes "Nós continuamos treinando com fé e lealdade infinita.";
					next;
					mes "[Michael Halig]";
					mes "Nós recrutamos Espadachins que expressem fé.";
					mes "Aqueles que nasceram como guerreiros.";
					next;
					mes "[Michael Halig]";
					mes "Possuindo o ^3355FFEmblema da Cavalaria^000000 e a ^3355FFMão Divina^000000.";
					mes "É o sinal de que você foi escolhido para se tornar um Templário.";
					next;
					mes "[Michael Halig]";
					mes "Eu não sei que tipo de pessoa você é ao certo.";
					mes "Mas posso testa-l"+(Sex == SEX_MALE ? "o":"a")+" se desejar.";
					mes "Você está pront"+(Sex == SEX_MALE ? "o":"a")+" para suportar os testes de preparação para a Guerra Santa?";
					next;
					if (select("Sim, estou","Gostaria de pensar mais") == 2) {
						mes "[Michael Halig]";
						mes "Ninguém sabe quando a Guerra Santa começará.";
						mes "Temos que nos preparar desde cedo.";
						next;
						mes "[Michael Halig]";
						mes "Se você achar que você foi escolhid"+(Sex == SEX_MALE ? "o":"a")+" para participar da Guerra Santa.";
						mes "Volte imediatamente e faça o teste dos Templários.";
						close;
					} else {
						mes "[Michael Halig]";
						mes "Então...";
						mes "Vou testa-l"+(Sex == SEX_MALE ? "o":"a")+" para ver se você está pronto para se tornar um Templário.";
						next;
						mes "[Michael Halig]";
						mes "Seu nome é "+strcharinfo(PC_NAME)+"...?";
						mes "Está correto?...";
						next;
						if (countitem(Patriotism_Marks) && countitem(Sacred_Marks)) {
							mes "[Michael Halig]";
							mes "Ah...";
							mes "Vejo que você carrega os símbolos dos escolhidos.";
							mes "O ^3355FFEmblema da Cavalaria^000000 e a ^3355FFMão Divina^000000.";
							mes "Com isso poupamos tempo.";
							next;
							mes "[Michael Halig]";
							mes "Fale com Moorenak Miyol ele está treinando na caverna subterrânea do Castelo de Prontera.";
							mes "Vá, até ele.";
							next;
							delitem (Patriotism_Marks,1);
							delitem (Sacred_Marks,1);
							crusaderq = 4;
							setquest (3009);
							mes "[Michael Halig]";
							mes "Moorenak e outros como ele querem testar o limite de suas capacidades.";
							mes "E ajudar você a encontrar seu caminho.";
							mes "Retorne a mim quando tiver completado seus testes...";
							close;
						} else {
							mes "[Michael Halig]";
							mes "Mmm.";
							mes "Eu não posso dizer se você tem ou não o coração dos Templários.";
							mes "No entanto, se você tiver vontade, você conseguirá o que é preciso.";
							next;
							mes "[Michael Halig]";
							mes "Agora...";
							mes "O meu teste para você.";
							mes "Traga-me os seguintes itens e mostre-me sua determinação.";
							switch(rand(3)) {
								case 1:
								setarray (.@cruItm[0],957,959,1099,901);
								crusaderq = 1;
								setquest (3006);
								break;
								case 2:
								setarray (.@cruItm[0],932,1043,1098,1094);
								crusaderq = 2;
								setquest (3007);
								break;
								default:
								setarray (.@cruItm[0],958,930,1041,1062);
								crusaderq = 3;
								setquest (3008);
								break;
							}
							next;
							mes "[Michael Halig]";
							mes "10 ^3355ff"+getitemname(.@cruItm[0])+"^000000";
							mes "10 ^3355ff"+getitemname(.@cruItm[1])+"^000000";
							mes "10 ^3355ff"+getitemname(.@cruItm[2])+"^000000";
							mes "10 ^3355ff"+getitemname(.@cruItm[3])+"^000000";
							next;
							mes "[Michael Halig]";
							mes "Mostre-me o seu poder, trazendo-me estes itens. Se você conseguir, você estará pronto para o proximo teste. Que Odin lhe proteja.";
							close;
						}
					}
				}
			}
		} else if (crusaderq >= 1 && crusaderq <= 3) {
			switch(crusaderq) {
				case 1: setarray (.@cruItm[0],957,959,1099,901); break;
				case 2: setarray (.@cruItm[0],932,1043,1098,1094); break;
				default: setarray (.@cruItm[0],958,930,1041,1062); break;
			}
			if (countitem(.@cruItm[0]) < 10 && countitem(.@cruItm[1]) < 10 && countitem(.@cruItm[2]) < 10 && countitem(.@cruItm[3]) < 10) {
				mes "[Michael Halig]";
				mes "Ah, Você ainda não completou o teste que lhe dei.";
				mes "Traga-me os seguintes itens, e prove a mim que você pode se tornar Templário...";
				next;
				mes "[Michael Halig]";
				mes "10 ^3355ff"+getitemname(.@cruItm[0])+"^000000";
				mes "10 ^3355ff"+getitemname(.@cruItm[1])+"^000000";
				mes "10 ^3355ff"+getitemname(.@cruItm[2])+"^000000";
				mes "10 ^3355ff"+getitemname(.@cruItm[3])+"^000000";
				next;
				mes "[Michael Halig]";
				mes "Se você se esforçar, você conseguirá completar essa tarefa.";
				mes "Que Odin proteja sua jornada.";
				close;
			} else {
				mes "[Michael Halig]";
				mes "Ah, muito bem.";
				mes "Você mostrou seu esforço e determinação.";
				mes "Você está pront"+(Sex == SEX_MALE ? "o":"a")+" para proceder para o próximo teste.";
				next;
				mes "[Michael Halig]";
				mes "Fale com Moorenak Miyol ele está treinando no calabouço subterrâneo do Castelo de Prontera.";
				mes "Agora vá até ele.";
				delitem (.@cruItm[0],10);
				delitem (.@cruItm[1],10);
				delitem (.@cruItm[2],10);
				delitem (.@cruItm[3],10);
				if (questprogress(3006)) { changequest (3006,3009); }
				else if (questprogress(3007)) { changequest (3007,3009); }
				else if (questprogress(3008)) { changequest (3008,3009); }
				crusaderq = 4;
				next;
				mes "[Michael Halig]";
				mes "Moorenak e outros como ele vão testar suas capacidades.";
				mes "E ajudar você a escolher seu caminho.";
				mes "Retorne a mim quando você tiver completado seus testes...";
				close;
			}
		} else if (crusaderq == 4) {
			mes "[Michael Halig]";
			mes "Fale com Moorenak Miyol ele está treinando no calabouço subterrâneo do Castelo de Prontera.";
			mes "Agora vá até ele.";
			close;
		} else if (crusaderq == 5) {
			mes "[Michael Halig]";
			mes "Moorenak e outros como ele vão testar suas capacidades.";
			mes "E ajudar você a escolher seu caminho.";
			mes "Retorne a mim quando você tiver completado seus testes...";
			close;
		} else if (crusaderq == 6 || crusaderq == 7) {
			mes "[Michael Halig]";
			mes "Você completou o teste de resitência, mas ainda não acabou.";
			next;
			mes "[Michael Halig]";
			mes "Para seu próximo teste, vá até Gabriel Valentine na Catedral de Prontera.";
			close;
		} else if (crusaderq == 8 || crusaderq == 9) {
			mes "[Michael Halig]";
			mes "Me disseram que você se tem saído muito bem nos testes.";
			mes "Mas ainda falta o teste final.";
			close;
		} else if (crusaderq == 10 || crusaderq == 11) {
			mes "[Michael Halig]";
			mes "Parece que você não completou todos os testes.";
			mes "Você não estará pront"+(Sex == SEX_MALE ? "o":"a")+" para se juntar aos Templários.";
			mes "Enquanto não tiver completado todos os testes.";
			next;
			mes "[Michael Halig]";
			mes "Quando você tiver terminado, você poderá se juntar ao grupo dos melhores Templários.";
			close;
		} else if (crusaderq == 12) {
			if(SkillPoint) {
				mes "[Michael Halig]";
				mes "Você ainda não terminou de aprender tudo como Espadachim.";
				mes "Use todos os pontos de habilidade restantes.";
				close;
			} else {
				.@Joblevel = JobLevel;
				mes "[Michael Halig]";
				mes "Parabéns por completar todos os seus testes.";
				next;
				mes "[Michael Halig]";
				mes "Juntos, vamos vencer a Guerra Santa e derrotar o mal e a tirania!";
				next;
				jobchange (Job_Crusader);
				completequest (3015);
				callfunc ("ClearJobQuest2nd",14);
				mes "[Michael Halig]";
				mes "Quando a Guerra Sagrada começar, nós estaremos do mesmo lado para derrotar o mal.";
				next;
				mes "[Michael Halig]";
				mes "Agora você é um de nós!";
				if (.@Joblevel == 50) {
					getitem(Flamberge,1);
				}
				next;
				mes "[Michael Halig]";
				mes "Nunca esqueça, a Guerra Sagrada que se aproxima.";
				mes "Nós precisamos nos preparar para a maré inevitável do mal que varrera este mundo.";
				mes "Agora, vá e lute pelos nossos princiopios de liberdade e justiça!";
				close;
			}
		}
	} else {
		if(BaseJob == Job_Crusader) {
			mes "[Templário]";
			mes "Vá e treine para se preparar para a Guerra Santa que está chegando.";
			mes "A vitória estara nas mãos dos que estiverem melhor preparados para recebe-la.";
			next;
			mes "[Templário]";
			mes "O Caos um dia surgirá para abalar nosso príncipios de paz, justiça e ordem.";
			mes "Enquanto não acabarmos com o mal e criarmos nosso mundo ideal.";
			mes "Nós não podemos parar de treinar.";
			close;
		} else {
			mes "[Templário]";
			mes "Nós somos Templários,";
			mes "guerreiros preparados";
			mes "para lutar na Guerra Santa.";
			next;
			mes "[Templário]";
			mes "Como aconteceu a mil anos atrás, as forças do mal um dia irão atacar, para tentar conquistar o mundo novamente.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_castle,165,27,3	script	Templário#2crusaderq	4_M_JOB_KNIGHT1,{
	if (crusaderq == 4) {
		mes "[Murnak Mijoul]";
		mes "Para que veio à um lugar como esse?";
		next;
		if (select("Para o teste dos Templários","Só estou de olhando") == 2) {
			mes "[Murnak Mijoul]";
			mes "Parece que você tem bastante tempo em suas mãos.";
			mes "Porque não vai fazer algo mais produtivo.";
			mes "Como pegar jellopys fora das ruas ou algo assim?";
			close;
		} else {
			if (!isequipped(Rosary)) {
				mes "[Murnak Mijoul]";
				mes "Você deseja se tornar "+(Sex == SEX_MALE ? "um Templário":"uma Templária")+".";
				mes "Mas não usa um Rosário?";
				mes "Comece mostrando sua fé antes de mostrar sua força.";
				mes "Porque o verdadeiro poder dos Templários está na Fé.";
				close;
			} else {
				if (crusaderq2) { crusaderq2 = 0; }
				mes "[Murnak Mijoul]";
				mes "Você deseja se tornar "+(Sex == SEX_MALE ? "um Templário":"uma Templária")+"...?";
				mes "Hm, lutar na Guerra Santa é algo admirável.";
				next;
				mes "[Murnak Mijoul]";
				mes "Seu nome é "+strcharinfo(PC_NAME)+"?";
				mes "Deixe-me dar uma olhada em seu rosto...";
				next;
				mes "[Murnak Mijoul]";
				mes "Não me de razão para duvidar de você, e me mostre sua paciência.";
				mes "Você deve resistir ao meu teste com sua paciência.";
				next;
				mes "[Murnak Mijoul]";
				mes "Você pode fazer o teste agora.";
				mes "É muito simples.";
				mes "Tudo que você tem que fazer é andar até o fim do corredor.";
				next;
				if (!$cruendurecetest) {
					mes "[Murnak Mijoul]";
					mes "Porém...";
					mes "Mas você tem que ter uma coisa em mente.";
					mes "Em nenhuma condição você poderá matar os monstros.";
					mes "Faça com calma, você terá dois minutos para pecorrer um curto trajeto.";
					crusaderq = 5;
					changequest (3009,3010);
					next;
					mes "[Murnak Mijoul]";
					mes "Então...";
					mes "Lhe desejo boa sorte, mas nunca precisará de sorte se tiver Fé.";
					close2;
					$cruendurecetest = 1;
					donpcevent("Endurance#crusaderq::OnStartTimer");
					warp ("job_cru",98,40);
					end;
				} else {
					mes "[Murnak Mijoul]";
					mes "Mas no momento outra pessoa está fazendo esse teste.";
					mes "Tenha paciência e espere até que ela termine.";
					mes "Será avisad"+(Sex == SEX_MALE ? "o":"a")+" quando estiver tudo pronto.";
					close;
				}
			}
		}
		close;
	} else if (crusaderq == 5) {
		if (!isequipped(Rosary)) {
			mes "[Murnak Mijoul]";
			mes "Espere...";
			mes "Você perdeu seu Rosário?";
			mes "Você não pode deixa-lo em qualquer lugar.";
			mes "Nós somos guerreiros da santidade.";
			next;
			mes "[Murnak Mijoul]";
			mes "Perder as coisas são atitudes de meros Espadachins.";
			mes "Se você realmente quer refazer o teste.";
			mes "Precisa respeitar as tradições dos Templários.";
			close;
		} else {
			mes "[Murnak Mijoul]";
			mes "O que é isso...?";
			mes "Você é o Espadachim de antes.";
			mes "O que aconteceu, você falhou?";
			next;
			mes "[Murnak Mijoul]";
			mes "Este é um teste de Fé, a mesma só pode ser plena se houver paciência.";
			next;
			mes "[Murnak Mijoul]";
			mes "Seu problema é o habito de atacar monstros de forma impensável.";
			mes "Você tem que desenvolver a paciência e a resistência.";
			next;
			if (!$cruendurecetest) {
				mes "[Murnak Mijoul]";
				mes "Apenas concentre-se...";
				mes "No seu objetivo apenas e ande até o fim do corredor.";
				next;
				mes "[Murnak Mijoul]";
				mes "Não importa como você vai fazer.";
				mes "Mas não mate nenhum monstro.";
				mes "Desta vez, você tem que pensar bem antes de sacar sua espada.";
				mes "Faça com calma, você terá dois minutos para pecorrer um curto trajeto.";
				close2;
				$cruendurecetest = 1;
				donpcevent("Endurance#crusaderq::OnStartTimer");
				warp ("job_cru",98,40);
				end;
			} else {
				mes "[Murnak Mijoul]";
				mes "Agora mesmo outra pessoa está passando por esse teste.";
				mes "Tenha paciência e espere até que ele termine.";
				close;
			}
		}
	} else if (crusaderq == 6 || crusaderq == 7) {
		mes "[Murnak Mijoul]";
		mes "Hmm, parece que você foi bem.";
		mes "Você não tem mais nada atratar comigo.";
		next;
		mes "[Murnak Mijoul]";
		mes "Para seu próximo teste, vá até Gabriel Valentine na Catedral de Prontera.";
		close;
	} else {
		mes "[Murnak Mijoul]";
		mes "Hm...?";
		mes "O que você quer...?";
		mes "Se você não nem nada neste lugar, então por favor deixe-o.";
		mes "Um estado tranquilo na mente é essencial para se treinar...";
		next;
		mes "[Murnak Mijoul]";
		mes "Desejo melhorar meu senso de serenidade no meu coração.";
		mes "Para me preparar para a Guerra Santa que está por vir.";
		mes "Então por favor, não me pertube.";
		close;
	}
}

// ------------------------------------------------------------------
job_cru,1,1,1	script	Endurance#crusaderq	HIDDEN_NPC,{
	OnInit:
	stopnpctimer;
	end;

	OnStartTimer:
	initnpctimer;
	end;

	OnSummon:
	monster (strnpcinfo(NPC_MAP),94,45,"Mandragora",1020,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),101,45,"Mandragora",1020,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),94,55,"Mandragora",1020,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),101,55,"Mandragora",1020,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon2:
	monster (strnpcinfo(NPC_MAP),98,50,"Flora",1118,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),92,60,"Flora",1118,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),104,60,"Flora",1118,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),98,70,"Flora",1118,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon3:
	monster (strnpcinfo(NPC_MAP),92,50,"Guardião da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),104,50,"Guardião da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),92,70,"Guardião da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),104,70,"Guardião da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),98,80,"Guardião da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),92,90,"Guardião da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),104,90,"Guardião da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnMobDead:
	$cruendurecetest = 0;
	warp ("prt_fild05",353,251);
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnDisable:
	stopnpctimer;
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMobDead");
	mapannounce ("prt_castle","Próximo candidato ao teste de resistência dos Templários. Por favor entre.",bc_map);
	$cruendurecetest = 0;
	end;

	OnTimer120000:
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	areawarp (strnpcinfo(NPC_MAP),90,34, 105,105,"prt_fild05",353,251);
	end;
}

// ------------------------------------------------------------------
job_cru,98,49,0	script	EnduranceMob#1crusaderq	FAKE_NPC,9,1,{
	end;

	OnTouch:
	switch(atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),0))) {
		case 1:
		if (!crusaderq2) { crusaderq2 = 1; donpcevent ("Endurance#crusaderq::OnSummon"); } end;
		case 2:
		if (crusaderq2 == 1) { crusaderq2 = 2; donpcevent ("Endurance#crusaderq::OnSummon2"); } end;
		case 3:
		if (crusaderq2 == 2) { crusaderq2 = 3; donpcevent ("Endurance#crusaderq::OnSummon3"); } end;
	}
	end;
}
job_cru,98,64,0	duplicate(EnduranceMob#1crusaderq)	EnduranceMob#2crusaderq	FAKE_NPC,9,1
job_cru,98,84,0	duplicate(EnduranceMob#1crusaderq)	EnduranceMob#3crusaderq	FAKE_NPC,9,1


// ------------------------------------------------------------------
job_cru,98,105,4	script	warp#crusaderq	WARPNPC,3,3,{
	OnTouch:
	donpcevent ("Endurance#crusaderq::OnDisable");
	crusaderq2 = 0;
	crusaderq = 6;
	changequest (3010,3011);
	warp ("prt_castle",158,26);
	end;
}

// ------------------------------------------------------------------
prt_church,95,127,3	script	Templária#3crusaderq	4_F_CRU,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Crusader) {
			mes "[Gabriel Valentine]";
			mes "Bem vindo, colega Templári"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Como tem passado?";
			next;
			mes "[Gabriel Valentine]";
			mes "Você não pode esquecer de treinar todos os dias.";
			mes "E preparar-se para o dia da Guerra Santa que está chegando.";
			close;
		} else {
			mes "[Templária]";
			mes "Nós Templários.";
			mes "Nós estamos nos preparando para a Guerra Santa que está por vir.";
			next;
			mes "[Templária]";
			mes "Espero que você treine para se peparar para o futuro também.";
			close;
		}
	} else {
		if (!crusaderq) {
			mes "[Templária]";
			mes "Nós Templários.";
			mes "Nós estamos nos preparando para a Guerra Santa que está por vir.";
			next;
			mes "[Templária]";
			mes "Espero que você treine para se peparar para o futuro também.";
			close;
		} else if (crusaderq <= 5) {
			mes "[Templária]";
			mes "Hun..?";
			mes "Você é o Espadachim que iniciou o treinamento para se tornar um de nós Templários.";
			mes "Treine duro para alcançar seu objetivo.";
			close;
		} else if (crusaderq == 6 || crusaderq == 7) {
			if (crusaderq == 6) {
				mes "[Templária]";
				mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Meu nome é Gabriel Valentine.";
				mes "Eu, também, estou me preparando para a Guerra Santa.";
				mes "Por enquanto, eu sou o guarda desta igreja.";
				next;
				mes "[Gabriel Valentine]";
				mes "Vou testar você para ver se você tem o conhecimento necessário.";
				mes "Não podemos ganhar a Guerra Santa apenas empunhando nossas espadas.";
				next;
				mes "[Gabriel Valentine]";
				mes "Farei 10 perguntas a você.";
				mes "Responda-as corretamente.";
				next;
			} else if (crusaderq == 7) {
				mes "[Gabriel Valentine]";
				mes "Você se preparou dessa vez para as perguntas que farei?";
				next;
				mes "[Gabriel Valentine]";
				mes "Vamos tentar novamente...?";
				next;
			}
			switch(rand(3)) {
				case 1:
				mes "[Gabriel Valentine]";
				mes "1. Qual o nivel da \"Proteção Divina\" é necessário para aprender \"Flagelo do Mal\"?";
				next;
				if (select("Nivel 1","Nivel 2","Nivel 3","Nivel 4") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "2. Se sua INT for 30, incluindo bonus de INT dos equipamentos, no nível 55.";
				mes "Quanto de HP a habilidade Cura Nivel 5 recupera?";
				next;
				if (select("396","440","484","528") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "3. Com nivel 7 de Proteção Divina.";
				mes "Em quanto sua defesa é almentada sobre Morto-Vivo?";
				next;
				if (select("21","22","23","24") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "4. Qual dessas lanças pode atacar o Pesadelo Sombrio?";
				next;
				if (select("Lança","Guisarme-Bico","Foice","Zephyrus") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "5. Qual o nivel de \"Curar\" necessário para aprender \"Medicar\"?";
				next;
				if (select("Nivel 1","Nivel 2","Nivel 3","Nivel 4") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "6. Qual a velocidade de ataque quando Perícia em Montario Nivel 3 é aprendido?";
				next;
				if (select("70%","80%","90%","100%") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "7. Qual dos seguintes não está correto para a habilidade Flagelo do Mal?";
				next;
				if (select("Dano em Morto-Vivo","Apenas Noviços podem usar","ATQ+30 no nível 10") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "8. Quanto de SP é necessário para usar a habilidade Curar no Nivel 7?";
				next;
				if (select("30","31","33","35") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "9. Qual destes status não pode ser curado com Medicar?";
				next;
				if (select("Maldição","Silêncio","Caos","Cegueira") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "10. O que mais tem relação com um Templário?";
				next;
				if (select("Matrimônio","Guerra Santa","Sacrifício","Descanço") == 2) {
					.@cruquizz += 1;
				}
				break;
				case 2:
				mes "[Gabriel Valentine]";
				mes "1. Qual o atributo mais efetivo para atacar um Morto-Vivo?";
				next;
				if (select("Neutro","Terra","Morto-Vivo","Sagrado") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "2. Se o monstro for um Morto-Vivo Nivel 2.";
				mes "Quanto de dano a mais o ataque Sagrado causará?";
				next;
				if (select("25%","50%","75%","100%") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "3. Qual desses itens não pode ser obtido de um Druida Maligno?";
				next;
				if (select("Chapéu de Monge","Folha de Yggdrasil","Erva Branca","Amuleto ") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "4. Qual monstro Morto-Vivo tem mais HP?";
				next;
				if (select("Carniçal","Esqueleto Prisioneiro","Alma Penada","Zumbi Prisioneiro") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "5. Qual desses montros tem tamanho diferente que os outros?";
				next;
				if (select("Alma Penada","Khalitzburg","Drake","Druida Malígno") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "6. Qual dessas cartas garante a você tolerancia a ataques da propriedade Morto-Vivo?";
				next;
				if (select("Orc Esqueleto","Orc Zumbi","Carniçal","Esqueleto Operário") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "7. Qual dos seguintes monstros não é agressivo?";
				next;
				if (select("Soldado Esqueleto","Orc Esqueleto","Esqueleto","Esqueleto Operário") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "8. Qual o nome do escudo com uma Carta Munak inserida?";
				next;
				if (select("Escudo Energizante","Escudo Escarlate","Escudo Hipnotizante","Escudo de Alga") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "9. Qual desses monstros não derrubam Espólio?";
				next;
				if (select("Munak","Carniçal","Mumia","Soldado Esqueleto") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "10. O que mais tem relação com um Templário?";
				next;
				if (select("Matrimônio","Guerra Santa","Sacrifício","Descanço") == 2) {
					.@cruquizz += 1;
				}
				break;
				default:
				mes "[Gabriel Valentine]";
				mes "1. Qual dos seguintes monstros tem atributo diferente dos outros?";
				next;
				if (select("Carat","Xamã do Vento","Isis","Andarilho") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "2. Qual efeito de carta em uma espada é efetiva ao atacar um monstro Demonio?";
				next;
				if (select("Exorcizante","Celestial","Abissal","Nocauteante") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "3. Qual desses itens não é derrubado pelo Dokebi?";
				next;
				if (select("Minério de Elunium","Martelo de Ouro","Maça Espada","Cajado do Poder") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "4. Qual monstro Demonio tem mais HP?";
				next;
				if (select("Giearth","Magnólia","Dokebi","Marionette") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "5. Qual desses monstros Demonio é de um tamanho diferente dos outros?";
				next;
				if (select("Ghostring","Sussuro","Deviruchi","Baphomet Jr.") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "6. Qual escudo reduz o dano de monstros Demonio?";
				next;
				if (select("Escudo do Paraíso","Escudo do Inferno","Escudo Escarlate","Escudo Excelente") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "7. Qual desses atributos é mais efetivo contra o Xamã do Vento?";
				next;
				if (select("Agua","Terra","Fogo","Vento") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "8. Qual dos monstros é diferente dos outros monstros Demonio?";
				next;
				if (select("Sohee","Isis","Dokebi","Sussurro") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "9. Qual dessas é uma maneira efetiva para agir ao encontrar um monstro Demonio?";
				next;
				if (select("Gritar com ele","Oferecer um acordo.","Atacar com o Sagrado","Usar o Chapéu Deviruchi.") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "10. O que mais tem relação com um Templário?";
				next;
				if (select("Matrimônio","Guerra Santa","Sacrifício","Descanço") == 2) {
					.@cruquizz += 1;
				}
				break;
			}
			if (.@cruquizz < 8) {
				crusaderq = 7;
				if (questprogress(3011)) { changequest (3011,3012); }
				mes "[Gabriel Valentine]";
				mes "Hmmm... Que pena.";
				mes "Vá estudar mais e tente faça este teste novamente.";
				next;
				mes "[Gabriel Valentine]";
				mes "Não se estresse, você precisa saber muito para passar neste teste.";
				mes "De qualquer forma, eu estarei esperando bem aqui.";
				close;
			} else if (.@cruquizz == 8 || .@cruquizz == 9) {
				mes "[Gabriel Valentine]";
				mes "Bem, deixe-me ver....";
				next;
				mes "[Gabriel Valentine]";
				mes "hunn...";
				mes "Você acertou "+.@cruquizz+" das 10 perguntas.";
				next;
				mes "[Gabriel Valentine]";
				mes "Tudo bem!";
				mes "Você passou, pois sei o quão difíceis são essas perguntas.";
			} else {
				mes "[Gabriel Valentine]";
				mes "Muito bem você respondeu todas as 10 perguntas corretamente!";
			}
			next;
			mes "[Gabriel Valentine]";
			mes "Agora vá para o Castelo de Prontera e fale com Bliant Piyord.";
			mes "Eu vou informa-lo para preparar seu proximo teste.";
			crusaderq = 8;
			if (questprogress(3011)) { changequest (3011,3013); }
			else if (questprogress(3012)) { changequest (3012,3013); }
			close;
		} else if (crusaderq == 8 || crusaderq == 9) {
			mes "[Gabriel Valentine]";
			mes "Pensei ter dito para, você ir ao Castelo de Prontera e falar com Bliant Piyord.";
			mes "Ele está encarregado do seu próximo teste.";
			close;
		} else {
			mes "[Gabriel Valentine]";
			mes "O que você esta fazendo aqui?.";
			next;
			mes "[Gabriel Valentine]";
			mes "Você não tem nenhum assunto a mais para tratar comigo.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_castle,35,151,5	script	Templário#4crusaderq	4_M_CRU,{
	if (BaseJob == Job_Swordman) {
		if (crusaderq < 8) {
			mes "[Templário]";
			mes "Nós somos Templários,";
			mes "guerreiros santos preparados para a grande Guerra Santa que está por vir.";
			next;
			mes "[Templário]";
			mes "Neste tempo relativamente quieto, nosso treinamento é incessante.";
			mes "Nós estamos prontos para o dia que as sombras aparecerem...";
			close;
		} else if (crusaderq == 8) {
			mes "[Templário]";
			mes "Você deve ser "+strcharinfo(PC_NAME)+" não é?";
			mes "Você está se preparando para se tornar "+(Sex == SEX_MALE ? "um Templário":"uma Templária")+".";
			next;
			mes "[Templário]";
			mes "Meu nome é Bliant Piyord e eu também, estou me preparando para a Guerra Santa.";
			mes "Deve ter sido muito dificil para você chegar até aqui.";
			next;
			mes "[Bliant Piyord]";
			mes "Este teste, avalia suas habildiade em batalha.";
			mes "Apenas quem possui uma boa habilidade de luta pode se tornar Templário.";
			next;
			mes "[Bliant Piyord]";
			mes "Para poder fazer esse teste, o teste de batalha.";
			mes "Traga-me 1 ^3355FFAgua Benta^000000.";
			mes "Será usada para purificar seu interior para receber o teste.";
			crusaderq = 9;
			changequest (3013,3014);
			close;
		} else if (crusaderq == 9) {
			if(!countitem(Holy_Water)) {
				mes "[Bliant Piyord]";
				mes "Para o teste de batalha, por favor prepare uma ^3355FFAgua Sagrada^000000.";
				mes "Estarei esperando por você.";
				close;
			} else {
				delitem (Holy_Water,1);
				crusaderq = 10;
				mes "[Bliant Piyord]";
				mes "Bem, Vou iniciar o teste.";
				mes "Você será purificad"+(Sex == SEX_MALE ? "o":"a")+" com a Agua Benta que preparou.";
				next;
				mes "[Bliant Piyord]";
				mes "...............";
				next;
				mes "[Bliant Piyord]";
				mes "Vamos la.";
				mes "Mandarei você agora ao local de teste, lá entre na sala de espera e espere sua vez.";
				next;
				mes "[Bliant Piyord]";
				mes "É simples basta que ande pelo local e derrote os monstros que aparecerem.";
				mes "Boa sorte.";
				close2;
				warp ("job_cru",24,169);
				end;
			}
		} else if (crusaderq == 10 || crusaderq == 11) {
			mes "[Bliant Piyord]";
			mes "Esse teste é simples basta que ande pelo local e derrote os monstros que aparecerem.";
			mes "Confie na sua Fé e em si mesmo que vai conseguir.";
			mes "Quer voltar ao local de testes?";
			next;
			if (select ("Sim, por favor","Espere um pouco") == 1) {
				mes "[Bliant Piyord]";
				mes "Boa sorte.";
				close2;
				warp ("job_cru",24,169);
				end;
			} else {
				mes "[Bliant Piyord]";
				mes "Está bem, se prepare antes de ir.";
				close;
			}
		} else if (crusaderq == 12) {
			mes "[Bliant Piyord]";
			mes "Muito Bem.";
			mes "Você completou todos os testes.";
			next;
			mes "[Bliant Piyord]";
			mes "Vá e fale com nosso lider.";
			mes "Nós damos boas vindas para você";
			mes "por se juntar a nós na Guerra Santa.";
			close;
		}
	} else if(BaseJob == Job_Crusader) {
		mes "Como vai";
		mes "seu treinamento?";
		next;
		mes "[Bliant Piyord]";
		mes "Desenvolva sua fé.";
		mes "Através da fé nasce a força e a disciplina.";
		close;
	} else {
		mes "[Templário]";
		mes "Nós somos Templários,";
		mes "guerreiros santos preparados para a grande Guerra Santa que está por vir.";
		next;
		mes "[Templário]";
		mes "Neste tempo relativamente quieto, nosso treinamento é incessante.";
		mes "Nós estamos prontos para o dia que as sombras aparecerem...";
		close;
	}
}

// ------------------------------------------------------------------
job_cru,23,185,5	script	Piyord#crusaderq	4_M_CRU,{
	mes "[Bliant Piyord]";
	mes "Você fará o ultimo teste aqui.";
	mes "Quando você estiver pront"+(Sex == SEX_MALE)+" para o teste, entre na sala de espera.";
	next;
	mes "[Bliant Piyord]";
	mes "Apenas uma pessoa por vez pode fazer o teste.";
	next;
	mes "[Bliant Piyord]";
	mes "Cada pessoa tem 4 minutos para completar o teste.";
	mes "Se você quizer sair relogue.";
	next;
	mes "[Bliant Piyord]";
	mes "Siga pelo corredor até o final e elimine os montros que aparecerem durante o trajeto.";
	close;

	OnInit:
	waitingroom ("Sala de Espera",20,strnpcinfo(NPC_NAME)+"::OnStartArena",1);
	enablewaitingroomevent;
	end;

	OnStartArena:
	donpcevent ("BattleMob#crusaderq::OnEnable");
	warpwaitingpc (strnpcinfo(NPC_MAP),168,21);
	disablewaitingroomevent;
	end;

	OnStart:
	enablewaitingroomevent;
	end;
}

// ------------------------------------------------------------------
job_cru,2,1,0	script	BattleMob#crusaderq	FAKE_NPC,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	.cruMob = 20;
	initnpctimer;
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMobDead");
	donpcevent ("Piyord#crusaderq::OnStart");
	stopnpctimer;
	end;

	OnSummon1:
	monster (strnpcinfo(NPC_MAP),166,60,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,60,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),168,60,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),169,60,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,60,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,80,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,81,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,82,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,83,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,84,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon2:
	monster (strnpcinfo(NPC_MAP),166,80,"Esqueleto Soldado",1028,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,80,"Esqueleto Soldado",1028,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),168,80,"Esqueleto Soldado",1028,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),166,110,"Esqueleto Soldado",1028,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,110,"Esqueleto Soldado",1028,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),168,110,"Esqueleto Soldado",1028,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnSummon3:
	monster (strnpcinfo(NPC_MAP),166,110,"Esqueleto Arqueiro",1016,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,110,"Esqueleto Arqueiro",1016,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),166,115,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,115,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnMobDead:
	--.cruMob;
	if (.cruMob < 1) {
		crusaderq = 11;
		mes "[Bliant Piyord]";
		mes "Parabéns!";
		mes "Você eliminou todas as criaturas sombrias.";
		mes "Agora se parece e passe pelo portal.";
		close;
	}
	end;

	OnTimer240000:
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	areawarp (strnpcinfo(NPC_MAP),160,14, 175,178,"job_cru",24,169);
	end;
}

// ------------------------------------------------------------------
job_cru,167,50,0	script	BattleMob#1crusaderq	FAKE_NPC,9,1,{
	end;

	OnTouch:
	switch(atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),0))) {
		case 1:
		if (!crusaderq2) { crusaderq2 = 1; donpcevent ("BattleMob#crusaderq::OnSummon1"); } end;
		case 2:
		if (crusaderq2 == 1) { crusaderq2 = 2; donpcevent ("BattleMob#crusaderq::OnSummon2"); } end;
		case 3:
		if (crusaderq2 == 2) { crusaderq2 = 3; donpcevent ("BattleMob#crusaderq::OnSummon3"); } end;
	}
	end;
}
job_cru,167,74,0	duplicate(BattleMob#1crusaderq)	BattleMob#2crusaderq	FAKE_NPC,9,1
job_cru,167,100,0	duplicate(BattleMob#1crusaderq)	BattleMob#3crusaderq	FAKE_NPC,9,1


// ------------------------------------------------------------------
job_cru,168,180,0	script	warp2#crusaderq	WARPNPC,3,3,{
	OnTouch:
	if (crusaderq == 11) {
		crusaderq2 = 0;
		crusaderq = 12;
		changequest (3014,3015);
		warp ("prt_castle",35,147);
		donpcevent ("BattleMob#crusaderq::OnDisable");
	}
	end;
}

