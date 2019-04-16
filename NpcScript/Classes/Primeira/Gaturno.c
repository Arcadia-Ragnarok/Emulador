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
| - Copyright: Spell Master (09/08/2017)                            |
| - Info: Quest de Mudan�a de Classe para Gaturno.                  |
\*-----------------------------------------------------------------*/

moc_prydb1,39,129,2	script	Gatuna Ajudante#thiefq	1_F_04,{
	if (Upper == 1) {
		if (ADVJOB == Job_Assassin_Cross || ADVJOB == Job_Stalker) {
			if (Class == Job_Novice_High) {
				mes("[Gatuna Ajudante]\n"
					"Eu te conhe�o?\n"
					"� assustador que voc� me parece t�o familiar.");
				next;
				if (getskilllv("NV_BASIC") < 9) {
					mes("[Gatuna Ajudante]\n"
						"O qu�, voc� quer ser Gatuno?\n"
						"Sinto muito, mas parece que voc� precisa de mais treinamento.");
					next;
					mes("[Gatuna Ajudante]\n"
						"N�o tenha pressa e aprenda todas as Habilidades B�sicas.\n"
						"Ent�o, vejo voc� mais tarde!");
					close;
				} else {
					mes("[Gatuna Ajudante]\n"
						"Bem, eu tive o pressentimento que voc� teve uma vida de lutas.\n"
						"Ent�o estou te promovendo para Gatuno neste minuto.\n"
						"� melhor eu dar o que voc� quer...");
					next;
					jobchange(Job_Thief_High);
					mes("[Gatuna Ajudante]\n"
						"Desde que voc� se tornar Gatuno, viver como um Gatuno.\n"
						"Agora, v� por isso!");
					close;
				}
			} else {
				mes("[Gatuna Ajudante]");
				if (Sex == SEX_MALE) {
					mes("Ei, cara.");
				} else {
					mes("Ei, beb�.");
				}
				close;
			}
		} else {
			mes("[Gatuna Ajudante]\n"
				"...Ei! Voc� parece muito estranho para querer ser um Gatuno!\n"
				"Agora suma, estou ocupada!");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Thief) {
			mes("[Gatuna Ajudante]\n"
				"No momento a guilda n�o tem qualquer miss�o para voc� agora.");
			close;
		} else {
			mes("[Gatuna]\n"
				"O que faz voc� aqui?\n"
				"Por acaso est� tentando ser roubad"+(Sex == SEX_MALE ? "o":"a")+"?");
			next;
			mes("[Gatuna]\n"
				"� melhor voc� sair daqui o mais r�pido o poss�vel, este local � a guilda dos gaturnos.\n"
				"Ent�o n�o nos responsabilizamos se ter sua carteira afanada!");
			close;
		}
	} else {
		if (!thiefq) {
			mes("[Gatuna Ajudante]\n"
				"Garotinh"+(Sex == SEX_MALE ? "o":"a")+", est� aqui porque eim?...");
			if (getskilllv ("NV_BASIC") < 9) {
				mes("Deveria aprender as habilidades b�sicas antes de se aventurar por locais como esse.");
				close;
			} else {
				mes("N�o sabe que esse lugar � a Guilda dos Gaturnos?");
				next;
				switch (select("Estou aqui para ser Gaturno", "S� estou de passagem", "Fale-me sobre o teste")) {
					case 1:
					mes("[Gatuna Ajudante]\n"
						"O que faz pensar que pode ser "+(Sex == SEX_MALE ? "um Gaturno":"uma Gaturna")+"?\n"
						"Est� bem, assine seu nome nesse formul�rio.");
					next;
					if (select("Assinar", "Cancelar inscri��o") == 1) {
						mes("[Gatuna Ajudante]\n"
							"Hunnn... "+strcharinfo(CHAR_NAME)+"?\n"
							"Que tipo de nome estranho � esse?");
						next;
						mes("[Gatuna Ajudante]\n"
							"Ent�o que comece seu teste.\n"
							"V� para fora da Pir�mide e procure pelo^0066ff Senhor Irrelevante ^000000.\n"
							"Ele lhe guiar� at� a planta��o de cogumelos.");
						thiefq = 1;
						setquest(1013);
						close;
					}
					mes("[Gatuna Ajudante]\n"
						"Desistiu?\n"
						"Algo me dizia que voc� era mesmo covarde.");
					close;
					case 2:
					mes("[Gatuna Ajudante]\n"
						"Ent�o � melhor voc� sair daqui o mais r�pido o poss�vel, este local � a guilda dos gaturnos.\n"
						"Ent�o n�o nos responsabilizamos se ter sua carteira afanada!");
					close;
					case 3:
					mes("[Gatuna Ajudante]\n"
						"Jovens Aprendizes assim como voc�, podem ser tornar gaturnos ao realizar os teste de nossa guilda\n"
						"Gaturnos devem ser �timos em adquirir as coisas");
					next;
					mes("[Gatuna Ajudante]\n"
						"Nosso teste mede a capacidade de se infiltrar e roubar itens\n"
						"O candidato do teste deve roubar 2 tipos de cogumelos\n"
						"Cada tipo de cogumelo vale uma pontua��o:");
					next;
					mes("[Gatuna Ajudante]\n"
						+ getitemname(Mushroom_Of_Thief_1)+" vale 3 pontos cada.\n"
						+ getitemname(Mushroom_Of_Thief_2)+" vale 1 ponto cada.\n"
						"O objetivo final � marcar 25 pontos, na soma de todos pontos.");
					next;
					mes("[Gatuna Ajudante]\n"
						"Basta ir � fazenda de cogumelos e conseguir essa pontua��o.");
					close;
				}
			}
		} else if (thiefq) {
			if (job_thief_q == 2 && countitem(Mushroom_Of_Thief_1) > 0 || countitem(Mushroom_Of_Thief_2) > 0) {
				mes("[Gatuna Ajudante]\n"
					"Voc� enfim voltou\n"
					"Como foi l� na planta��o de cogumelos?");
				next;
				switch (select("Foi moleza", "Aquele lugar � horr�vel!")) {
					case 1:
					mes("[Gatuna Ajudante]\n"
						"Se achou essa tafera f�cil, sem d�viadas ser� "+(Sex == SEX_MALE ? "um �timo Gaturno":"uma �tima Gatuna")+".");
					break;
					case 2:
					mes("[Gatuna Ajudante]\n"
						"Entendo, mas voc� j� deveria saber que gaturnos n�o tem uma vida f�cil e glamurosa.");
					break;
				}
				next;
				mes("[Gatuna Ajudante]\n"
					"V� aquele sujeito ali?\n"
					"Leve os cogumelos para ele.");
				next;
				mes("[Gatuna Ajudante]\n"
					"Seu teste continua com ele, quando conferir os que voc� trouxe");
				close;
			} else if (thiefq == 3) {
				mes("[Gatuna Ajudante]\n"
					"Voc� veio aqui para se tornar "+(Sex == SEX_MALE ? "um Gaturno":"uma Gaturna")+"?\n"
					"E o que est� pensando ainda?");
				close;
			} else {
				mes("[Gatuna Ajudante]\n"
					"O que ainda faz aqui?!\n"
					"Procure pelo^777777 Senhor Irrelevante^000000 do lado de fora da Pir�mide\n"
					"Ele vai lhe guiar at� a planta��o de cogumelos");
				next;
				if (select("Fale-me sobre o teste", "Sair") == 1) {
					mes("[Gatuna Ajudante]\n"
						"Nosso teste mede a capacidade de se infiltrar e roubar itens.\n"
						"O candidato do teste deve roubar 2 tipos de cogumelos.\n"
						"Cada tipo de cogumelo vale uma pontua��o:");
					next;
					mes("[Gatuna Ajudante]\n"
						+ getitemname(Mushroom_Of_Thief_1)+" vale 3 pontos cada.\n"
						+ getitemname(Mushroom_Of_Thief_2)+" vale 1 ponto cada.\n"
						"O objetivo final � marcar 25 pontos, na soma de todos pontos.");
					next;
					mes("[Gatuna Ajudante]\n"
						"Basta ir � fazenda de cogumelos e conseguir essa pontua��o.");
				}
				close;
			}
		}
	}
}

moc_ruins,141,125,3	script	Sr. Irrelevante#thiefq	4_M_01,{
	if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Thief) {
			mes("[Senhor Irrelevante]\n"
				"Ei!!\n"
				"Eu me lembro de voc�\n"
				"Voc� � "+(Sex == SEX_MALE ? "aquele":"aquela")+"Aprendiz que veio at� aqui para ser tornar Gaturno");
			next;
			mes("[Senhor Irrelevante]\n"
				"Vejo que conseguiu alcan�ar seu objetivo.\n"
				"Meus parab�ns");
			close;
		} else {
			mes("[Senhor Irrelevante]\n"
				"Voc� sabia que na pir�mide fica a Guilda dos Gaturnos?\n"
				"� melhor ficar longe de l�, pois voc� pode ter seus zenys roubados naquele lugar.");
			close;
		}
	} else {
		if (!thiefq) {
			mes("[Senhor Irrelevante]\n"
				"Hora "+(Sex == SEX_MALE ? "um":"uma")+" Aprendiz!\n"
				"J� pensou em se tornar Gaturno?");
			close;
		} else if (thiefq == 1) {
			mes("[Senhor Irrelevante]\n"
				"O que faz aqui?");
			select ("Fui enviad"+(Sex == SEX_MALE ? "o":"a")+" aqui para fazer um teste");
			next;
			mes("[Senhor Irrelevante]\n"
				"A sim, o teste da guilda dos gaturnos.\n"
				"Qual � o seu nome?");
			select (strcharinfo(CHAR_NAME));
			next;
			mes("[Senhor Irrelevante]\n"
				"Claro seu nome est� aqui nessa lista.\n"
				"Vou te enviar para a fazenda de cogumelos.\n"
				"Lembre-se que voc� deve marcar 25 Pontos adquirindo "+getitemname(Mushroom_Of_Thief_1)+" e "+getitemname(Mushroom_Of_Thief_2)+"\n"
				"Para passar no teste da guilda");
			next;
			mes("[Senhor Irrelevante]\n"
				"Pront"+(Sex == SEX_MALE ? "o":"a")+" para ir?");
			next;
			if (select("Sim, agora mesmo", "N�o, preciso fazer algo primeiro") == 1) {
				close2;
				thiefq = 2;
				switch (rand(5)) {
					case 1: warp("job_thief1",228,106); end;
					case 2: warp("job_thief1",38,50); end;
					case 3: warp("job_thief1",66,331); end;
					case 4: warp("job_thief1",196,331); end;
					default: warp("job_thief1",309,234); end;
				}
			}
			mes("[Senhor Irrelevante]\n"
				"Est� bem volte quando desejar.");
			thiefq = 2;
			close;
		} else if (thiefq == 2) {
			mes("[Senhor Irrelevante]\n"
				"Voc� voltou, pront"+(Sex == SEX_MALE ? "o":"a")+" para ir � fazenda de cogumelos?");
			next;
			if (select("Sim, agora mesmo","Agora n�o") == 1) {
				close2;
				switch (rand(5)) {
					case 1: warp("job_thief1",228,106); end;
					case 2: warp("job_thief1",38,50); end;
					case 3: warp("job_thief1",66,331); end;
					case 4: warp("job_thief1",196,331); end;
					default: warp("job_thief1",309,234); end;
				}
			}
			close;
		} else if (thiefq == 3) {
			mes("[Senhor Irrelevante]\n"
				"Voc� passou em nos requisitos necess�rios para se Gaturno.\n"
				"Parab�ns");
			close;
		}
	}
}

moc_prydb1,42,133,2	script	Camarada#thiefq	2_M_THIEFMASTER,{
	if (!thiefq) {
		mes("[Brad]\n"
			"Me pergunto porque as pessoas s�o tolas em vir em um lugar como esse.");
		close;
	} else if (thiefq == 1) {
		mes("[Brad]\n"
			"Voc� ent�o quer se tornar Gaturno n�o � mesmo?\n"
			"E por acaso sabe onde encontrar o Senhor Irrelevante?");
		next;
		if (select("Claro que sei", "N�o, poderia me levar at� l�?") == 1) {
			mes("[Brad]\n"
				"Certo, certo...\n"
				"Voc� me parece uma pessoa esperta.");
			close;
		}
		mes("[Brad]\n"
			"N�o deveria fazer isso, mas gostei de voc�.\n"
			"Posso sim ter enviar agora mesmo para l�.\n"
			"Deseja ir agora?");
		next;
		if (select("Sim, por favor", "N�o, eu chego l� s� mesmo") == 2) {
			mes("[Brad]\n"
				"Certo, certo...\n"
				"Voc� me parece uma pessoa esperta.");
			close;
		}
		close2;
		warp("moc_ruins",145,125);
		end;
	} else if (thiefq == 2) {
		mes("[Brad]\n"
			"Voc� denovo?!");
		if (!countitem(Mushroom_Of_Thief_1) || !countitem(Mushroom_Of_Thief_2)) {
			mes("N�o deberia est� pegando cogumelos?");
			close;
		} else {
			mes("Hunmmmm...\n"
				"Agora voc� trouxe algo consigo n�o �?");
			next;
			mes("[Brad]\n"
				"Deixe me ver...");
			.@MushroomTh1 = countitem(Mushroom_Of_Thief_1) * 3;
			.@MushroomTh2 = countitem(Mushroom_Of_Thief_2);
			.@MushroomTh3 = .@MushroomTh1 + .@MushroomTh2;
			if (countitem(Mushroom_Of_Thief_1)) {
				mes(countitem(Mushroom_Of_Thief_1)+" "+getitemname(Mushroom_Of_Thief_1)+" s�o "+.@MushroomTh1+" pontos.");
			}
			if (countitem(Mushroom_Of_Thief_2)) {
				mes(countitem(Mushroom_Of_Thief_2)+" "+getitemname(Mushroom_Of_Thief_2)+" s�o "+.@MushroomTh2+" pontos.");
			}
			next;
			mes("[Brad]");
			if (.@MushroomTh3 < 25) {
				mes("Sua pontua��o � muito baixa.\n"
					"Voc� dever� voltar a planta��o e pegar mais cogumelos.");
				close;
			} else if (.@MushroomTh3 >= 25) {
				mes("�timo!\n"
					"Voc� fez ^ff0000"+.@MushroomTh3+"^000000 Pontos.\n"
					"Com isso voc� passa no teste.");
				if (countitem(Mushroom_Of_Thief_1)) { delitem(Mushroom_Of_Thief_1, countitem(Mushroom_Of_Thief_1)); }
				if (countitem(Mushroom_Of_Thief_2)) { delitem(Mushroom_Of_Thief_2, countitem(Mushroom_Of_Thief_2)); }
				next;
				mes("[Brad]\n"
					"Desmostrou que merece ser membro da nossa guilda\n"
					"Mas antes de oficializar isso tenho que lhe perguntar.");
				next;
				mes("[Brad]\n"
					"� isso mesmo que deseja?\n"
					"Porque se virar Gaturno agora, n�o vai poder escolher outra classe.\n"
					"Mas gaturnos podem ser tornar Arruaceiros ou Mercen�rios");
				next;
				if (select("Quero ser Gaturno agora mesmo", "Vou pensar mais no assunto") == 1) {
					mes("[Brad]\n"
						"Ent�o de agora em diante voc� � membro da guilda dos gaturnos.");
					getitem(N_Main_Gauche,1);
					jobchange(Job_Thief);
					completequest(1013);
					callfunc("ClearJobQuest");
					close;
				}
				mes("[Brad]\n"
					"Tudo bem, quando se decidir volte a me procurar.");
				thiefq = 3;
				close;
			}
		}
	} else if (thiefq == 3) {
		mes("[Brad]\n"
			"Ent�o j� se decidiu?\n"
			"Quer se tornar "+(Sex == SEX_MALE ? "um Gaturno":"uma Gaturna")+"?");
		next;
		if (select("Sim", "N�o") == 1) {
			mes("[Brad]\n"
				"Ent�o de agora em diante voc� � membro da guilda dos gaturnos.");
			getitem(N_Main_Gauche,1);
			jobchange(Job_Thief);
			completequest(1013);
			callfunc("ClearJobQuest");
			close;
		}
		mes("[Brad]\n"
			"Tudo bem, quando se decidir volte a me procurar.");
		close;
	}
}

