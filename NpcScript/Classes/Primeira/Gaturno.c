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
| - Info: Quest de Mudança de Classe para Gaturno.                  |
\*-----------------------------------------------------------------*/

moc_prydb1,39,129,2	script	Gatuna Ajudante#thiefq	1_F_04,{
	if (Upper == 1) {
		if (ADVJOB == Job_Assassin_Cross || ADVJOB == Job_Stalker) {
			if (Class == Job_Novice_High) {
				mes("[Gatuna Ajudante]\n"
					"Eu te conheço?\n"
					"É assustador que você me parece tão familiar.");
				next;
				if (getskilllv("NV_BASIC") < 9) {
					mes("[Gatuna Ajudante]\n"
						"O quê, você quer ser Gatuno?\n"
						"Sinto muito, mas parece que você precisa de mais treinamento.");
					next;
					mes("[Gatuna Ajudante]\n"
						"Não tenha pressa e aprenda todas as Habilidades Básicas.\n"
						"Então, vejo você mais tarde!");
					close;
				} else {
					mes("[Gatuna Ajudante]\n"
						"Bem, eu tive o pressentimento que você teve uma vida de lutas.\n"
						"Então estou te promovendo para Gatuno neste minuto.\n"
						"É melhor eu dar o que você quer...");
					next;
					jobchange(Job_Thief_High);
					mes("[Gatuna Ajudante]\n"
						"Desde que você se tornar Gatuno, viver como um Gatuno.\n"
						"Agora, vá por isso!");
					close;
				}
			} else {
				mes("[Gatuna Ajudante]");
				if (Sex == SEX_MALE) {
					mes("Ei, cara.");
				} else {
					mes("Ei, bebê.");
				}
				close;
			}
		} else {
			mes("[Gatuna Ajudante]\n"
				"...Ei! Você parece muito estranho para querer ser um Gatuno!\n"
				"Agora suma, estou ocupada!");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Thief) {
			mes("[Gatuna Ajudante]\n"
				"No momento a guilda não tem qualquer missão para você agora.");
			close;
		} else {
			mes("[Gatuna]\n"
				"O que faz você aqui?\n"
				"Por acaso está tentando ser roubad"+(Sex == SEX_MALE ? "o":"a")+"?");
			next;
			mes("[Gatuna]\n"
				"É melhor você sair daqui o mais rápido o possível, este local é a guilda dos gaturnos.\n"
				"Então não nos responsabilizamos se ter sua carteira afanada!");
			close;
		}
	} else {
		if (!thiefq) {
			mes("[Gatuna Ajudante]\n"
				"Garotinh"+(Sex == SEX_MALE ? "o":"a")+", está aqui porque eim?...");
			if (getskilllv ("NV_BASIC") < 9) {
				mes("Deveria aprender as habilidades básicas antes de se aventurar por locais como esse.");
				close;
			} else {
				mes("Não sabe que esse lugar é a Guilda dos Gaturnos?");
				next;
				switch (select("Estou aqui para ser Gaturno", "Só estou de passagem", "Fale-me sobre o teste")) {
					case 1:
					mes("[Gatuna Ajudante]\n"
						"O que faz pensar que pode ser "+(Sex == SEX_MALE ? "um Gaturno":"uma Gaturna")+"?\n"
						"Está bem, assine seu nome nesse formulário.");
					next;
					if (select("Assinar", "Cancelar inscrição") == 1) {
						mes("[Gatuna Ajudante]\n"
							"Hunnn... "+strcharinfo(CHAR_NAME)+"?\n"
							"Que tipo de nome estranho é esse?");
						next;
						mes("[Gatuna Ajudante]\n"
							"Então que comece seu teste.\n"
							"Vá para fora da Pirâmide e procure pelo^0066ff Senhor Irrelevante ^000000.\n"
							"Ele lhe guiará até a plantação de cogumelos.");
						thiefq = 1;
						setquest(1013);
						close;
					}
					mes("[Gatuna Ajudante]\n"
						"Desistiu?\n"
						"Algo me dizia que você era mesmo covarde.");
					close;
					case 2:
					mes("[Gatuna Ajudante]\n"
						"Então é melhor você sair daqui o mais rápido o possível, este local é a guilda dos gaturnos.\n"
						"Então não nos responsabilizamos se ter sua carteira afanada!");
					close;
					case 3:
					mes("[Gatuna Ajudante]\n"
						"Jovens Aprendizes assim como você, podem ser tornar gaturnos ao realizar os teste de nossa guilda\n"
						"Gaturnos devem ser ótimos em adquirir as coisas");
					next;
					mes("[Gatuna Ajudante]\n"
						"Nosso teste mede a capacidade de se infiltrar e roubar itens\n"
						"O candidato do teste deve roubar 2 tipos de cogumelos\n"
						"Cada tipo de cogumelo vale uma pontuação:");
					next;
					mes("[Gatuna Ajudante]\n"
						+ getitemname(Mushroom_Of_Thief_1)+" vale 3 pontos cada.\n"
						+ getitemname(Mushroom_Of_Thief_2)+" vale 1 ponto cada.\n"
						"O objetivo final é marcar 25 pontos, na soma de todos pontos.");
					next;
					mes("[Gatuna Ajudante]\n"
						"Basta ir á fazenda de cogumelos e conseguir essa pontuação.");
					close;
				}
			}
		} else if (thiefq) {
			if (job_thief_q == 2 && countitem(Mushroom_Of_Thief_1) > 0 || countitem(Mushroom_Of_Thief_2) > 0) {
				mes("[Gatuna Ajudante]\n"
					"Você enfim voltou\n"
					"Como foi lá na plantação de cogumelos?");
				next;
				switch (select("Foi moleza", "Aquele lugar é horrível!")) {
					case 1:
					mes("[Gatuna Ajudante]\n"
						"Se achou essa tafera fácil, sem dúviadas será "+(Sex == SEX_MALE ? "um ótimo Gaturno":"uma ótima Gatuna")+".");
					break;
					case 2:
					mes("[Gatuna Ajudante]\n"
						"Entendo, mas você já deveria saber que gaturnos não tem uma vida fácil e glamurosa.");
					break;
				}
				next;
				mes("[Gatuna Ajudante]\n"
					"Vê aquele sujeito ali?\n"
					"Leve os cogumelos para ele.");
				next;
				mes("[Gatuna Ajudante]\n"
					"Seu teste continua com ele, quando conferir os que você trouxe");
				close;
			} else if (thiefq == 3) {
				mes("[Gatuna Ajudante]\n"
					"Você veio aqui para se tornar "+(Sex == SEX_MALE ? "um Gaturno":"uma Gaturna")+"?\n"
					"E o que está pensando ainda?");
				close;
			} else {
				mes("[Gatuna Ajudante]\n"
					"O que ainda faz aqui?!\n"
					"Procure pelo^777777 Senhor Irrelevante^000000 do lado de fora da Pirâmide\n"
					"Ele vai lhe guiar até a plantação de cogumelos");
				next;
				if (select("Fale-me sobre o teste", "Sair") == 1) {
					mes("[Gatuna Ajudante]\n"
						"Nosso teste mede a capacidade de se infiltrar e roubar itens.\n"
						"O candidato do teste deve roubar 2 tipos de cogumelos.\n"
						"Cada tipo de cogumelo vale uma pontuação:");
					next;
					mes("[Gatuna Ajudante]\n"
						+ getitemname(Mushroom_Of_Thief_1)+" vale 3 pontos cada.\n"
						+ getitemname(Mushroom_Of_Thief_2)+" vale 1 ponto cada.\n"
						"O objetivo final é marcar 25 pontos, na soma de todos pontos.");
					next;
					mes("[Gatuna Ajudante]\n"
						"Basta ir á fazenda de cogumelos e conseguir essa pontuação.");
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
				"Eu me lembro de você\n"
				"Você é "+(Sex == SEX_MALE ? "aquele":"aquela")+"Aprendiz que veio até aqui para ser tornar Gaturno");
			next;
			mes("[Senhor Irrelevante]\n"
				"Vejo que conseguiu alcançar seu objetivo.\n"
				"Meus parabéns");
			close;
		} else {
			mes("[Senhor Irrelevante]\n"
				"Você sabia que na pirâmide fica a Guilda dos Gaturnos?\n"
				"É melhor ficar longe de lá, pois você pode ter seus zenys roubados naquele lugar.");
			close;
		}
	} else {
		if (!thiefq) {
			mes("[Senhor Irrelevante]\n"
				"Hora "+(Sex == SEX_MALE ? "um":"uma")+" Aprendiz!\n"
				"Já pensou em se tornar Gaturno?");
			close;
		} else if (thiefq == 1) {
			mes("[Senhor Irrelevante]\n"
				"O que faz aqui?");
			select ("Fui enviad"+(Sex == SEX_MALE ? "o":"a")+" aqui para fazer um teste");
			next;
			mes("[Senhor Irrelevante]\n"
				"A sim, o teste da guilda dos gaturnos.\n"
				"Qual é o seu nome?");
			select (strcharinfo(CHAR_NAME));
			next;
			mes("[Senhor Irrelevante]\n"
				"Claro seu nome está aqui nessa lista.\n"
				"Vou te enviar para a fazenda de cogumelos.\n"
				"Lembre-se que você deve marcar 25 Pontos adquirindo "+getitemname(Mushroom_Of_Thief_1)+" e "+getitemname(Mushroom_Of_Thief_2)+"\n"
				"Para passar no teste da guilda");
			next;
			mes("[Senhor Irrelevante]\n"
				"Pront"+(Sex == SEX_MALE ? "o":"a")+" para ir?");
			next;
			if (select("Sim, agora mesmo", "Não, preciso fazer algo primeiro") == 1) {
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
				"Está bem volte quando desejar.");
			thiefq = 2;
			close;
		} else if (thiefq == 2) {
			mes("[Senhor Irrelevante]\n"
				"Você voltou, pront"+(Sex == SEX_MALE ? "o":"a")+" para ir á fazenda de cogumelos?");
			next;
			if (select("Sim, agora mesmo","Agora não") == 1) {
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
				"Você passou em nos requisitos necessários para se Gaturno.\n"
				"Parabéns");
			close;
		}
	}
}

moc_prydb1,42,133,2	script	Camarada#thiefq	2_M_THIEFMASTER,{
	if (!thiefq) {
		mes("[Brad]\n"
			"Me pergunto porque as pessoas são tolas em vir em um lugar como esse.");
		close;
	} else if (thiefq == 1) {
		mes("[Brad]\n"
			"Você então quer se tornar Gaturno não é mesmo?\n"
			"E por acaso sabe onde encontrar o Senhor Irrelevante?");
		next;
		if (select("Claro que sei", "Não, poderia me levar até lá?") == 1) {
			mes("[Brad]\n"
				"Certo, certo...\n"
				"Você me parece uma pessoa esperta.");
			close;
		}
		mes("[Brad]\n"
			"Não deveria fazer isso, mas gostei de você.\n"
			"Posso sim ter enviar agora mesmo para lá.\n"
			"Deseja ir agora?");
		next;
		if (select("Sim, por favor", "Não, eu chego lá só mesmo") == 2) {
			mes("[Brad]\n"
				"Certo, certo...\n"
				"Você me parece uma pessoa esperta.");
			close;
		}
		close2;
		warp("moc_ruins",145,125);
		end;
	} else if (thiefq == 2) {
		mes("[Brad]\n"
			"Você denovo?!");
		if (!countitem(Mushroom_Of_Thief_1) || !countitem(Mushroom_Of_Thief_2)) {
			mes("Não deberia está pegando cogumelos?");
			close;
		} else {
			mes("Hunmmmm...\n"
				"Agora você trouxe algo consigo não é?");
			next;
			mes("[Brad]\n"
				"Deixe me ver...");
			.@MushroomTh1 = countitem(Mushroom_Of_Thief_1) * 3;
			.@MushroomTh2 = countitem(Mushroom_Of_Thief_2);
			.@MushroomTh3 = .@MushroomTh1 + .@MushroomTh2;
			if (countitem(Mushroom_Of_Thief_1)) {
				mes(countitem(Mushroom_Of_Thief_1)+" "+getitemname(Mushroom_Of_Thief_1)+" são "+.@MushroomTh1+" pontos.");
			}
			if (countitem(Mushroom_Of_Thief_2)) {
				mes(countitem(Mushroom_Of_Thief_2)+" "+getitemname(Mushroom_Of_Thief_2)+" são "+.@MushroomTh2+" pontos.");
			}
			next;
			mes("[Brad]");
			if (.@MushroomTh3 < 25) {
				mes("Sua pontuação é muito baixa.\n"
					"Você deverá voltar a plantação e pegar mais cogumelos.");
				close;
			} else if (.@MushroomTh3 >= 25) {
				mes("Ótimo!\n"
					"Você fez ^ff0000"+.@MushroomTh3+"^000000 Pontos.\n"
					"Com isso você passa no teste.");
				if (countitem(Mushroom_Of_Thief_1)) { delitem(Mushroom_Of_Thief_1, countitem(Mushroom_Of_Thief_1)); }
				if (countitem(Mushroom_Of_Thief_2)) { delitem(Mushroom_Of_Thief_2, countitem(Mushroom_Of_Thief_2)); }
				next;
				mes("[Brad]\n"
					"Desmostrou que merece ser membro da nossa guilda\n"
					"Mas antes de oficializar isso tenho que lhe perguntar.");
				next;
				mes("[Brad]\n"
					"É isso mesmo que deseja?\n"
					"Porque se virar Gaturno agora, não vai poder escolher outra classe.\n"
					"Mas gaturnos podem ser tornar Arruaceiros ou Mercenários");
				next;
				if (select("Quero ser Gaturno agora mesmo", "Vou pensar mais no assunto") == 1) {
					mes("[Brad]\n"
						"Então de agora em diante você é membro da guilda dos gaturnos.");
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
			"Então já se decidiu?\n"
			"Quer se tornar "+(Sex == SEX_MALE ? "um Gaturno":"uma Gaturna")+"?");
		next;
		if (select("Sim", "Não") == 1) {
			mes("[Brad]\n"
				"Então de agora em diante você é membro da guilda dos gaturnos.");
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

