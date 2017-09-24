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
| - Nota: Quest de Mudan�a de Classe para Templ�rio.                |
\*-----------------------------------------------------------------*/

prt_castle,45,169,5	script	Templ�rio#crusaderq	4_M_CRU_OLD,{
	if(BaseJob == Job_Swordman) {
		if (!crusaderq) {
			mes "[Templ�rio]";
			mes "N�s somos Templ�rios, guerreiros estamos nos preparando para a Guerra Santa.";
			mes "O que traz voc� a este lugar?";
			next;
			if (select("Quero me juntar a voc�s!","Nada em particular") == 2) {
				mes "[Templ�rio]";
				if (Sex == SEX_MALE) {
					mes "Se voc� tambem � um homem da espada, treine constantemente e prepare-se.";
					mes "Ningu�m sabe quando a Guerra Santa come�ar�.";
				} else {
					mes "Como uma mulher de espada, voc� deve treinar constantemente.";
					mes "Prepare-se, pois ningu�m sabe quando a Guerra Santa ir� come�ar.";
				}
				close;
			} else {
				if(JobLevel < 40) {
					mes "[Templ�rio]";
					mes "Espere...";
					mes "Voc� precisa estar no Nivel de Classe 40 ou mais para se juntar a n�s.";
					next;
					mes "[Templ�rio]";
					mes "Treine mais como um Espadachim e espere voc� ser chamado.";
					mes "Eu entendo sua inten��o, mas no momento, voc� n�o pode se juntar a n�s.";
					close;
				} else {
					mes "[Templ�rio]";
					mes "Voc� deseja se tornar "+(Sex == SEX_MALE ? "um Templ�rio":"uma Templ�ria")+"...?";
					mes "Se juntar a n�s n�o � t�o facil como parece.";
					next;
					mes "[Templ�rio]";
					mes "Eu sou Michael Halig, L�der dos Templ�rios.";
					mes "Tamb�m sou um dos muitos Templ�rios que est�o se preparando para a Guerra Santa.";
					mes "N�s continuamos treinando com f� e lealdade infinita.";
					next;
					mes "[Michael Halig]";
					mes "N�s recrutamos Espadachins que expressem f�.";
					mes "Aqueles que nasceram como guerreiros.";
					next;
					mes "[Michael Halig]";
					mes "Possuindo o ^3355FFEmblema da Cavalaria^000000 e a ^3355FFM�o Divina^000000.";
					mes "� o sinal de que voc� foi escolhido para se tornar um Templ�rio.";
					next;
					mes "[Michael Halig]";
					mes "Eu n�o sei que tipo de pessoa voc� � ao certo.";
					mes "Mas posso testa-l"+(Sex == SEX_MALE ? "o":"a")+" se desejar.";
					mes "Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para suportar os testes de prepara��o para a Guerra Santa?";
					next;
					if (select("Sim, estou","Gostaria de pensar mais") == 2) {
						mes "[Michael Halig]";
						mes "Ningu�m sabe quando a Guerra Santa come�ar�.";
						mes "Temos que nos preparar desde cedo.";
						next;
						mes "[Michael Halig]";
						mes "Se voc� achar que voc� foi escolhid"+(Sex == SEX_MALE ? "o":"a")+" para participar da Guerra Santa.";
						mes "Volte imediatamente e fa�a o teste dos Templ�rios.";
						close;
					} else {
						mes "[Michael Halig]";
						mes "Ent�o...";
						mes "Vou testa-l"+(Sex == SEX_MALE ? "o":"a")+" para ver se voc� est� pronto para se tornar um Templ�rio.";
						next;
						mes "[Michael Halig]";
						mes "Seu nome � "+strcharinfo(PC_NAME)+"...?";
						mes "Est� correto?...";
						next;
						if (countitem(Patriotism_Marks) && countitem(Sacred_Marks)) {
							mes "[Michael Halig]";
							mes "Ah...";
							mes "Vejo que voc� carrega os s�mbolos dos escolhidos.";
							mes "O ^3355FFEmblema da Cavalaria^000000 e a ^3355FFM�o Divina^000000.";
							mes "Com isso poupamos tempo.";
							next;
							mes "[Michael Halig]";
							mes "Fale com Moorenak Miyol ele est� treinando na caverna subterr�nea do Castelo de Prontera.";
							mes "V�, at� ele.";
							next;
							delitem (Patriotism_Marks,1);
							delitem (Sacred_Marks,1);
							crusaderq = 4;
							setquest (3009);
							mes "[Michael Halig]";
							mes "Moorenak e outros como ele querem testar o limite de suas capacidades.";
							mes "E ajudar voc� a encontrar seu caminho.";
							mes "Retorne a mim quando tiver completado seus testes...";
							close;
						} else {
							mes "[Michael Halig]";
							mes "Mmm.";
							mes "Eu n�o posso dizer se voc� tem ou n�o o cora��o dos Templ�rios.";
							mes "No entanto, se voc� tiver vontade, voc� conseguir� o que � preciso.";
							next;
							mes "[Michael Halig]";
							mes "Agora...";
							mes "O meu teste para voc�.";
							mes "Traga-me os seguintes itens e mostre-me sua determina��o.";
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
							mes "Mostre-me o seu poder, trazendo-me estes itens. Se voc� conseguir, voc� estar� pronto para o proximo teste. Que Odin lhe proteja.";
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
				mes "Ah, Voc� ainda n�o completou o teste que lhe dei.";
				mes "Traga-me os seguintes itens, e prove a mim que voc� pode se tornar Templ�rio...";
				next;
				mes "[Michael Halig]";
				mes "10 ^3355ff"+getitemname(.@cruItm[0])+"^000000";
				mes "10 ^3355ff"+getitemname(.@cruItm[1])+"^000000";
				mes "10 ^3355ff"+getitemname(.@cruItm[2])+"^000000";
				mes "10 ^3355ff"+getitemname(.@cruItm[3])+"^000000";
				next;
				mes "[Michael Halig]";
				mes "Se voc� se esfor�ar, voc� conseguir� completar essa tarefa.";
				mes "Que Odin proteja sua jornada.";
				close;
			} else {
				mes "[Michael Halig]";
				mes "Ah, muito bem.";
				mes "Voc� mostrou seu esfor�o e determina��o.";
				mes "Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para proceder para o pr�ximo teste.";
				next;
				mes "[Michael Halig]";
				mes "Fale com Moorenak Miyol ele est� treinando no calabou�o subterr�neo do Castelo de Prontera.";
				mes "Agora v� at� ele.";
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
				mes "Moorenak e outros como ele v�o testar suas capacidades.";
				mes "E ajudar voc� a escolher seu caminho.";
				mes "Retorne a mim quando voc� tiver completado seus testes...";
				close;
			}
		} else if (crusaderq == 4) {
			mes "[Michael Halig]";
			mes "Fale com Moorenak Miyol ele est� treinando no calabou�o subterr�neo do Castelo de Prontera.";
			mes "Agora v� at� ele.";
			close;
		} else if (crusaderq == 5) {
			mes "[Michael Halig]";
			mes "Moorenak e outros como ele v�o testar suas capacidades.";
			mes "E ajudar voc� a escolher seu caminho.";
			mes "Retorne a mim quando voc� tiver completado seus testes...";
			close;
		} else if (crusaderq == 6 || crusaderq == 7) {
			mes "[Michael Halig]";
			mes "Voc� completou o teste de resit�ncia, mas ainda n�o acabou.";
			next;
			mes "[Michael Halig]";
			mes "Para seu pr�ximo teste, v� at� Gabriel Valentine na Catedral de Prontera.";
			close;
		} else if (crusaderq == 8 || crusaderq == 9) {
			mes "[Michael Halig]";
			mes "Me disseram que voc� se tem sa�do muito bem nos testes.";
			mes "Mas ainda falta o teste final.";
			close;
		} else if (crusaderq == 10 || crusaderq == 11) {
			mes "[Michael Halig]";
			mes "Parece que voc� n�o completou todos os testes.";
			mes "Voc� n�o estar� pront"+(Sex == SEX_MALE ? "o":"a")+" para se juntar aos Templ�rios.";
			mes "Enquanto n�o tiver completado todos os testes.";
			next;
			mes "[Michael Halig]";
			mes "Quando voc� tiver terminado, voc� poder� se juntar ao grupo dos melhores Templ�rios.";
			close;
		} else if (crusaderq == 12) {
			if(SkillPoint) {
				mes "[Michael Halig]";
				mes "Voc� ainda n�o terminou de aprender tudo como Espadachim.";
				mes "Use todos os pontos de habilidade restantes.";
				close;
			} else {
				.@Joblevel = JobLevel;
				mes "[Michael Halig]";
				mes "Parab�ns por completar todos os seus testes.";
				next;
				mes "[Michael Halig]";
				mes "Juntos, vamos vencer a Guerra Santa e derrotar o mal e a tirania!";
				next;
				jobchange (Job_Crusader);
				completequest (3015);
				callfunc ("ClearJobQuest2nd",14);
				mes "[Michael Halig]";
				mes "Quando a Guerra Sagrada come�ar, n�s estaremos do mesmo lado para derrotar o mal.";
				next;
				mes "[Michael Halig]";
				mes "Agora voc� � um de n�s!";
				if (.@Joblevel == 50) {
					getitem(Flamberge,1);
				}
				next;
				mes "[Michael Halig]";
				mes "Nunca esque�a, a Guerra Sagrada que se aproxima.";
				mes "N�s precisamos nos preparar para a mar� inevit�vel do mal que varrera este mundo.";
				mes "Agora, v� e lute pelos nossos princiopios de liberdade e justi�a!";
				close;
			}
		}
	} else {
		if(BaseJob == Job_Crusader) {
			mes "[Templ�rio]";
			mes "V� e treine para se preparar para a Guerra Santa que est� chegando.";
			mes "A vit�ria estara nas m�os dos que estiverem melhor preparados para recebe-la.";
			next;
			mes "[Templ�rio]";
			mes "O Caos um dia surgir� para abalar nosso pr�ncipios de paz, justi�a e ordem.";
			mes "Enquanto n�o acabarmos com o mal e criarmos nosso mundo ideal.";
			mes "N�s n�o podemos parar de treinar.";
			close;
		} else {
			mes "[Templ�rio]";
			mes "N�s somos Templ�rios,";
			mes "guerreiros preparados";
			mes "para lutar na Guerra Santa.";
			next;
			mes "[Templ�rio]";
			mes "Como aconteceu a mil anos atr�s, as for�as do mal um dia ir�o atacar, para tentar conquistar o mundo novamente.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_castle,165,27,3	script	Templ�rio#2crusaderq	4_M_JOB_KNIGHT1,{
	if (crusaderq == 4) {
		mes "[Murnak Mijoul]";
		mes "Para que veio � um lugar como esse?";
		next;
		if (select("Para o teste dos Templ�rios","S� estou de olhando") == 2) {
			mes "[Murnak Mijoul]";
			mes "Parece que voc� tem bastante tempo em suas m�os.";
			mes "Porque n�o vai fazer algo mais produtivo.";
			mes "Como pegar jellopys fora das ruas ou algo assim?";
			close;
		} else {
			if (!isequipped(Rosary)) {
				mes "[Murnak Mijoul]";
				mes "Voc� deseja se tornar "+(Sex == SEX_MALE ? "um Templ�rio":"uma Templ�ria")+".";
				mes "Mas n�o usa um Ros�rio?";
				mes "Comece mostrando sua f� antes de mostrar sua for�a.";
				mes "Porque o verdadeiro poder dos Templ�rios est� na F�.";
				close;
			} else {
				if (crusaderq2) { crusaderq2 = 0; }
				mes "[Murnak Mijoul]";
				mes "Voc� deseja se tornar "+(Sex == SEX_MALE ? "um Templ�rio":"uma Templ�ria")+"...?";
				mes "Hm, lutar na Guerra Santa � algo admir�vel.";
				next;
				mes "[Murnak Mijoul]";
				mes "Seu nome � "+strcharinfo(PC_NAME)+"?";
				mes "Deixe-me dar uma olhada em seu rosto...";
				next;
				mes "[Murnak Mijoul]";
				mes "N�o me de raz�o para duvidar de voc�, e me mostre sua paci�ncia.";
				mes "Voc� deve resistir ao meu teste com sua paci�ncia.";
				next;
				mes "[Murnak Mijoul]";
				mes "Voc� pode fazer o teste agora.";
				mes "� muito simples.";
				mes "Tudo que voc� tem que fazer � andar at� o fim do corredor.";
				next;
				if (!$cruendurecetest) {
					mes "[Murnak Mijoul]";
					mes "Por�m...";
					mes "Mas voc� tem que ter uma coisa em mente.";
					mes "Em nenhuma condi��o voc� poder� matar os monstros.";
					mes "Fa�a com calma, voc� ter� dois minutos para pecorrer um curto trajeto.";
					crusaderq = 5;
					changequest (3009,3010);
					next;
					mes "[Murnak Mijoul]";
					mes "Ent�o...";
					mes "Lhe desejo boa sorte, mas nunca precisar� de sorte se tiver F�.";
					close2;
					$cruendurecetest = 1;
					donpcevent("Endurance#crusaderq::OnStartTimer");
					warp ("job_cru",98,40);
					end;
				} else {
					mes "[Murnak Mijoul]";
					mes "Mas no momento outra pessoa est� fazendo esse teste.";
					mes "Tenha paci�ncia e espere at� que ela termine.";
					mes "Ser� avisad"+(Sex == SEX_MALE ? "o":"a")+" quando estiver tudo pronto.";
					close;
				}
			}
		}
		close;
	} else if (crusaderq == 5) {
		if (!isequipped(Rosary)) {
			mes "[Murnak Mijoul]";
			mes "Espere...";
			mes "Voc� perdeu seu Ros�rio?";
			mes "Voc� n�o pode deixa-lo em qualquer lugar.";
			mes "N�s somos guerreiros da santidade.";
			next;
			mes "[Murnak Mijoul]";
			mes "Perder as coisas s�o atitudes de meros Espadachins.";
			mes "Se voc� realmente quer refazer o teste.";
			mes "Precisa respeitar as tradi��es dos Templ�rios.";
			close;
		} else {
			mes "[Murnak Mijoul]";
			mes "O que � isso...?";
			mes "Voc� � o Espadachim de antes.";
			mes "O que aconteceu, voc� falhou?";
			next;
			mes "[Murnak Mijoul]";
			mes "Este � um teste de F�, a mesma s� pode ser plena se houver paci�ncia.";
			next;
			mes "[Murnak Mijoul]";
			mes "Seu problema � o habito de atacar monstros de forma impens�vel.";
			mes "Voc� tem que desenvolver a paci�ncia e a resist�ncia.";
			next;
			if (!$cruendurecetest) {
				mes "[Murnak Mijoul]";
				mes "Apenas concentre-se...";
				mes "No seu objetivo apenas e ande at� o fim do corredor.";
				next;
				mes "[Murnak Mijoul]";
				mes "N�o importa como voc� vai fazer.";
				mes "Mas n�o mate nenhum monstro.";
				mes "Desta vez, voc� tem que pensar bem antes de sacar sua espada.";
				mes "Fa�a com calma, voc� ter� dois minutos para pecorrer um curto trajeto.";
				close2;
				$cruendurecetest = 1;
				donpcevent("Endurance#crusaderq::OnStartTimer");
				warp ("job_cru",98,40);
				end;
			} else {
				mes "[Murnak Mijoul]";
				mes "Agora mesmo outra pessoa est� passando por esse teste.";
				mes "Tenha paci�ncia e espere at� que ele termine.";
				close;
			}
		}
	} else if (crusaderq == 6 || crusaderq == 7) {
		mes "[Murnak Mijoul]";
		mes "Hmm, parece que voc� foi bem.";
		mes "Voc� n�o tem mais nada atratar comigo.";
		next;
		mes "[Murnak Mijoul]";
		mes "Para seu pr�ximo teste, v� at� Gabriel Valentine na Catedral de Prontera.";
		close;
	} else {
		mes "[Murnak Mijoul]";
		mes "Hm...?";
		mes "O que voc� quer...?";
		mes "Se voc� n�o nem nada neste lugar, ent�o por favor deixe-o.";
		mes "Um estado tranquilo na mente � essencial para se treinar...";
		next;
		mes "[Murnak Mijoul]";
		mes "Desejo melhorar meu senso de serenidade no meu cora��o.";
		mes "Para me preparar para a Guerra Santa que est� por vir.";
		mes "Ent�o por favor, n�o me pertube.";
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
	monster (strnpcinfo(NPC_MAP),92,50,"Guardi�o da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),104,50,"Guardi�o da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),92,70,"Guardi�o da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),104,70,"Guardi�o da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),98,80,"Guardi�o da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),92,90,"Guardi�o da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),104,90,"Guardi�o da Floresta",1277,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnMobDead:
	$cruendurecetest = 0;
	warp ("prt_fild05",353,251);
	donpcevent (strnpcinfo(NPC_NAME)+"::OnDisable");
	end;

	OnDisable:
	stopnpctimer;
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMobDead");
	mapannounce ("prt_castle","Pr�ximo candidato ao teste de resist�ncia dos Templ�rios. Por favor entre.",bc_map);
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
prt_church,95,127,3	script	Templ�ria#3crusaderq	4_F_CRU,{
	if (BaseJob != Job_Swordman) {
		if (BaseJob == Job_Crusader) {
			mes "[Gabriel Valentine]";
			mes "Bem vindo, colega Templ�ri"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Como tem passado?";
			next;
			mes "[Gabriel Valentine]";
			mes "Voc� n�o pode esquecer de treinar todos os dias.";
			mes "E preparar-se para o dia da Guerra Santa que est� chegando.";
			close;
		} else {
			mes "[Templ�ria]";
			mes "N�s Templ�rios.";
			mes "N�s estamos nos preparando para a Guerra Santa que est� por vir.";
			next;
			mes "[Templ�ria]";
			mes "Espero que voc� treine para se peparar para o futuro tamb�m.";
			close;
		}
	} else {
		if (!crusaderq) {
			mes "[Templ�ria]";
			mes "N�s Templ�rios.";
			mes "N�s estamos nos preparando para a Guerra Santa que est� por vir.";
			next;
			mes "[Templ�ria]";
			mes "Espero que voc� treine para se peparar para o futuro tamb�m.";
			close;
		} else if (crusaderq <= 5) {
			mes "[Templ�ria]";
			mes "Hun..?";
			mes "Voc� � o Espadachim que iniciou o treinamento para se tornar um de n�s Templ�rios.";
			mes "Treine duro para alcan�ar seu objetivo.";
			close;
		} else if (crusaderq == 6 || crusaderq == 7) {
			if (crusaderq == 6) {
				mes "[Templ�ria]";
				mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Meu nome � Gabriel Valentine.";
				mes "Eu, tamb�m, estou me preparando para a Guerra Santa.";
				mes "Por enquanto, eu sou o guarda desta igreja.";
				next;
				mes "[Gabriel Valentine]";
				mes "Vou testar voc� para ver se voc� tem o conhecimento necess�rio.";
				mes "N�o podemos ganhar a Guerra Santa apenas empunhando nossas espadas.";
				next;
				mes "[Gabriel Valentine]";
				mes "Farei 10 perguntas a voc�.";
				mes "Responda-as corretamente.";
				next;
			} else if (crusaderq == 7) {
				mes "[Gabriel Valentine]";
				mes "Voc� se preparou dessa vez para as perguntas que farei?";
				next;
				mes "[Gabriel Valentine]";
				mes "Vamos tentar novamente...?";
				next;
			}
			switch(rand(3)) {
				case 1:
				mes "[Gabriel Valentine]";
				mes "1. Qual o nivel da \"Prote��o Divina\" � necess�rio para aprender \"Flagelo do Mal\"?";
				next;
				if (select("Nivel 1","Nivel 2","Nivel 3","Nivel 4") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "2. Se sua INT for 30, incluindo bonus de INT dos equipamentos, no n�vel 55.";
				mes "Quanto de HP a habilidade Cura Nivel 5 recupera?";
				next;
				if (select("396","440","484","528") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "3. Com nivel 7 de Prote��o Divina.";
				mes "Em quanto sua defesa � almentada sobre Morto-Vivo?";
				next;
				if (select("21","22","23","24") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "4. Qual dessas lan�as pode atacar o Pesadelo Sombrio?";
				next;
				if (select("Lan�a","Guisarme-Bico","Foice","Zephyrus") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "5. Qual o nivel de \"Curar\" necess�rio para aprender \"Medicar\"?";
				next;
				if (select("Nivel 1","Nivel 2","Nivel 3","Nivel 4") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "6. Qual a velocidade de ataque quando Per�cia em Montario Nivel 3 � aprendido?";
				next;
				if (select("70%","80%","90%","100%") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "7. Qual dos seguintes n�o est� correto para a habilidade Flagelo do Mal?";
				next;
				if (select("Dano em Morto-Vivo","Apenas Novi�os podem usar","ATQ+30 no n�vel 10") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "8. Quanto de SP � necess�rio para usar a habilidade Curar no Nivel 7?";
				next;
				if (select("30","31","33","35") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "9. Qual destes status n�o pode ser curado com Medicar?";
				next;
				if (select("Maldi��o","Sil�ncio","Caos","Cegueira") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "10. O que mais tem rela��o com um Templ�rio?";
				next;
				if (select("Matrim�nio","Guerra Santa","Sacrif�cio","Descan�o") == 2) {
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
				mes "Quanto de dano a mais o ataque Sagrado causar�?";
				next;
				if (select("25%","50%","75%","100%") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "3. Qual desses itens n�o pode ser obtido de um Druida Maligno?";
				next;
				if (select("Chap�u de Monge","Folha de Yggdrasil","Erva Branca","Amuleto ") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "4. Qual monstro Morto-Vivo tem mais HP?";
				next;
				if (select("Carni�al","Esqueleto Prisioneiro","Alma Penada","Zumbi Prisioneiro") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "5. Qual desses montros tem tamanho diferente que os outros?";
				next;
				if (select("Alma Penada","Khalitzburg","Drake","Druida Mal�gno") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "6. Qual dessas cartas garante a voc� tolerancia a ataques da propriedade Morto-Vivo?";
				next;
				if (select("Orc Esqueleto","Orc Zumbi","Carni�al","Esqueleto Oper�rio") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "7. Qual dos seguintes monstros n�o � agressivo?";
				next;
				if (select("Soldado Esqueleto","Orc Esqueleto","Esqueleto","Esqueleto Oper�rio") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "8. Qual o nome do escudo com uma Carta Munak inserida?";
				next;
				if (select("Escudo Energizante","Escudo Escarlate","Escudo Hipnotizante","Escudo de Alga") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "9. Qual desses monstros n�o derrubam Esp�lio?";
				next;
				if (select("Munak","Carni�al","Mumia","Soldado Esqueleto") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "10. O que mais tem rela��o com um Templ�rio?";
				next;
				if (select("Matrim�nio","Guerra Santa","Sacrif�cio","Descan�o") == 2) {
					.@cruquizz += 1;
				}
				break;
				default:
				mes "[Gabriel Valentine]";
				mes "1. Qual dos seguintes monstros tem atributo diferente dos outros?";
				next;
				if (select("Carat","Xam� do Vento","Isis","Andarilho") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "2. Qual efeito de carta em uma espada � efetiva ao atacar um monstro Demonio?";
				next;
				if (select("Exorcizante","Celestial","Abissal","Nocauteante") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "3. Qual desses itens n�o � derrubado pelo Dokebi?";
				next;
				if (select("Min�rio de Elunium","Martelo de Ouro","Ma�a Espada","Cajado do Poder") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "4. Qual monstro Demonio tem mais HP?";
				next;
				if (select("Giearth","Magn�lia","Dokebi","Marionette") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "5. Qual desses monstros Demonio � de um tamanho diferente dos outros?";
				next;
				if (select("Ghostring","Sussuro","Deviruchi","Baphomet Jr.") == 1) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "6. Qual escudo reduz o dano de monstros Demonio?";
				next;
				if (select("Escudo do Para�so","Escudo do Inferno","Escudo Escarlate","Escudo Excelente") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "7. Qual desses atributos � mais efetivo contra o Xam� do Vento?";
				next;
				if (select("Agua","Terra","Fogo","Vento") == 2) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "8. Qual dos monstros � diferente dos outros monstros Demonio?";
				next;
				if (select("Sohee","Isis","Dokebi","Sussurro") == 4) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "9. Qual dessas � uma maneira efetiva para agir ao encontrar um monstro Demonio?";
				next;
				if (select("Gritar com ele","Oferecer um acordo.","Atacar com o Sagrado","Usar o Chap�u Deviruchi.") == 3) {
					.@cruquizz += 1;
				}
				mes "[Gabriel Valentine]";
				mes "10. O que mais tem rela��o com um Templ�rio?";
				next;
				if (select("Matrim�nio","Guerra Santa","Sacrif�cio","Descan�o") == 2) {
					.@cruquizz += 1;
				}
				break;
			}
			if (.@cruquizz < 8) {
				crusaderq = 7;
				if (questprogress(3011)) { changequest (3011,3012); }
				mes "[Gabriel Valentine]";
				mes "Hmmm... Que pena.";
				mes "V� estudar mais e tente fa�a este teste novamente.";
				next;
				mes "[Gabriel Valentine]";
				mes "N�o se estresse, voc� precisa saber muito para passar neste teste.";
				mes "De qualquer forma, eu estarei esperando bem aqui.";
				close;
			} else if (.@cruquizz == 8 || .@cruquizz == 9) {
				mes "[Gabriel Valentine]";
				mes "Bem, deixe-me ver....";
				next;
				mes "[Gabriel Valentine]";
				mes "hunn...";
				mes "Voc� acertou "+.@cruquizz+" das 10 perguntas.";
				next;
				mes "[Gabriel Valentine]";
				mes "Tudo bem!";
				mes "Voc� passou, pois sei o qu�o dif�ceis s�o essas perguntas.";
			} else {
				mes "[Gabriel Valentine]";
				mes "Muito bem voc� respondeu todas as 10 perguntas corretamente!";
			}
			next;
			mes "[Gabriel Valentine]";
			mes "Agora v� para o Castelo de Prontera e fale com Bliant Piyord.";
			mes "Eu vou informa-lo para preparar seu proximo teste.";
			crusaderq = 8;
			if (questprogress(3011)) { changequest (3011,3013); }
			else if (questprogress(3012)) { changequest (3012,3013); }
			close;
		} else if (crusaderq == 8 || crusaderq == 9) {
			mes "[Gabriel Valentine]";
			mes "Pensei ter dito para, voc� ir ao Castelo de Prontera e falar com Bliant Piyord.";
			mes "Ele est� encarregado do seu pr�ximo teste.";
			close;
		} else {
			mes "[Gabriel Valentine]";
			mes "O que voc� esta fazendo aqui?.";
			next;
			mes "[Gabriel Valentine]";
			mes "Voc� n�o tem nenhum assunto a mais para tratar comigo.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_castle,35,151,5	script	Templ�rio#4crusaderq	4_M_CRU,{
	if (BaseJob == Job_Swordman) {
		if (crusaderq < 8) {
			mes "[Templ�rio]";
			mes "N�s somos Templ�rios,";
			mes "guerreiros santos preparados para a grande Guerra Santa que est� por vir.";
			next;
			mes "[Templ�rio]";
			mes "Neste tempo relativamente quieto, nosso treinamento � incessante.";
			mes "N�s estamos prontos para o dia que as sombras aparecerem...";
			close;
		} else if (crusaderq == 8) {
			mes "[Templ�rio]";
			mes "Voc� deve ser "+strcharinfo(PC_NAME)+" n�o �?";
			mes "Voc� est� se preparando para se tornar "+(Sex == SEX_MALE ? "um Templ�rio":"uma Templ�ria")+".";
			next;
			mes "[Templ�rio]";
			mes "Meu nome � Bliant Piyord e eu tamb�m, estou me preparando para a Guerra Santa.";
			mes "Deve ter sido muito dificil para voc� chegar at� aqui.";
			next;
			mes "[Bliant Piyord]";
			mes "Este teste, avalia suas habildiade em batalha.";
			mes "Apenas quem possui uma boa habilidade de luta pode se tornar Templ�rio.";
			next;
			mes "[Bliant Piyord]";
			mes "Para poder fazer esse teste, o teste de batalha.";
			mes "Traga-me 1 ^3355FFAgua Benta^000000.";
			mes "Ser� usada para purificar seu interior para receber o teste.";
			crusaderq = 9;
			changequest (3013,3014);
			close;
		} else if (crusaderq == 9) {
			if(!countitem(Holy_Water)) {
				mes "[Bliant Piyord]";
				mes "Para o teste de batalha, por favor prepare uma ^3355FFAgua Sagrada^000000.";
				mes "Estarei esperando por voc�.";
				close;
			} else {
				delitem (Holy_Water,1);
				crusaderq = 10;
				mes "[Bliant Piyord]";
				mes "Bem, Vou iniciar o teste.";
				mes "Voc� ser� purificad"+(Sex == SEX_MALE ? "o":"a")+" com a Agua Benta que preparou.";
				next;
				mes "[Bliant Piyord]";
				mes "...............";
				next;
				mes "[Bliant Piyord]";
				mes "Vamos la.";
				mes "Mandarei voc� agora ao local de teste, l� entre na sala de espera e espere sua vez.";
				next;
				mes "[Bliant Piyord]";
				mes "� simples basta que ande pelo local e derrote os monstros que aparecerem.";
				mes "Boa sorte.";
				close2;
				warp ("job_cru",24,169);
				end;
			}
		} else if (crusaderq == 10 || crusaderq == 11) {
			mes "[Bliant Piyord]";
			mes "Esse teste � simples basta que ande pelo local e derrote os monstros que aparecerem.";
			mes "Confie na sua F� e em si mesmo que vai conseguir.";
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
				mes "Est� bem, se prepare antes de ir.";
				close;
			}
		} else if (crusaderq == 12) {
			mes "[Bliant Piyord]";
			mes "Muito Bem.";
			mes "Voc� completou todos os testes.";
			next;
			mes "[Bliant Piyord]";
			mes "V� e fale com nosso lider.";
			mes "N�s damos boas vindas para voc�";
			mes "por se juntar a n�s na Guerra Santa.";
			close;
		}
	} else if(BaseJob == Job_Crusader) {
		mes "Como vai";
		mes "seu treinamento?";
		next;
		mes "[Bliant Piyord]";
		mes "Desenvolva sua f�.";
		mes "Atrav�s da f� nasce a for�a e a disciplina.";
		close;
	} else {
		mes "[Templ�rio]";
		mes "N�s somos Templ�rios,";
		mes "guerreiros santos preparados para a grande Guerra Santa que est� por vir.";
		next;
		mes "[Templ�rio]";
		mes "Neste tempo relativamente quieto, nosso treinamento � incessante.";
		mes "N�s estamos prontos para o dia que as sombras aparecerem...";
		close;
	}
}

// ------------------------------------------------------------------
job_cru,23,185,5	script	Piyord#crusaderq	4_M_CRU,{
	mes "[Bliant Piyord]";
	mes "Voc� far� o ultimo teste aqui.";
	mes "Quando voc� estiver pront"+(Sex == SEX_MALE)+" para o teste, entre na sala de espera.";
	next;
	mes "[Bliant Piyord]";
	mes "Apenas uma pessoa por vez pode fazer o teste.";
	next;
	mes "[Bliant Piyord]";
	mes "Cada pessoa tem 4 minutos para completar o teste.";
	mes "Se voc� quizer sair relogue.";
	next;
	mes "[Bliant Piyord]";
	mes "Siga pelo corredor at� o final e elimine os montros que aparecerem durante o trajeto.";
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
	monster (strnpcinfo(NPC_MAP),166,115,"M�mia",1041,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster (strnpcinfo(NPC_MAP),167,115,"M�mia",1041,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	end;

	OnMobDead:
	--.cruMob;
	if (.cruMob < 1) {
		crusaderq = 11;
		mes "[Bliant Piyord]";
		mes "Parab�ns!";
		mes "Voc� eliminou todas as criaturas sombrias.";
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

