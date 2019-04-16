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
| - Copyright: Spell Master (10/08/2017)                            |
| - Info: Quest de Mudança de Classe para Noviço.                   |
| - Nota: Contém trechos da quest de Mudança de Classe para         |
|         Sacerdote.                                                |
\*-----------------------------------------------------------------*/

prt_church,184,41,4	script	Bispo#acolyteq	1_M_PASTOR,{
	if (Upper == 1 && BaseJob == Job_Novice_High) {
		if (ADVJOB == Job_High_Priest || ADVJOB == Job_Champion) {
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Bispo]\n"
					"Você ainda não está pront"+(Sex == SEX_MALE ? "o":"a")+" para se tornar um Noviço.\n"
					"Por favor, conclua o aprendizado de todas as Habilidades Básicas primeiro.");
				close;
			} else {
				mes("[Bispo]\n"
					"Ah, eu sinto seu vigor e experiência.\n"
					"Você deve ter aprendido muitas coisas antes de entrar em Valhalla.");
				jobchange(Job_Acolyte_High);
				close;
			}
		} else {
			mes("[Bispo]\n"
				"Sinto que você passou por uma experiência de vida passada.\n"
				"Você deve ter aprendido muitas coisas antes de entrar em Valhalla.");
			next;
			mes("[Bispo]\n"
				"No entanto, posso dizer que você não está preparado para ser Noviço.\n"
				"Lembre-se de quem você era em sua vida passada e encontre o seu caminho.");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Acolyte) {
			mes("[Bispo]\n"
				"Que você possa levar um pouco de alento a todos aqueles que sofrem.");
			close;
		} else {
			mes("[Bispo]\n"
				"Vejo que você já escolheu o seu caminho, desejo sucesso a você!");
			close;
		}
	} else {
		if (!acolyteq) {
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Bispo]\n"
					"Jovem porque você não aprende suas Habilidades Básicas.\n"
					"Seria de grande ajuda.");
				close;
			} else {
				mes("[Bispo]\n"
					"Jovem você veio a mim para se tornar "+(Sex == SEX_MALE ? "um Noviço":"uma Noviça")+"?");
				next;
				if (select("Sim estou aqui para isso", "Só estou de passagem") == 2) {
					mes("[Bispo]\n"
						"É sempre bom convesar com jovens como você");
					close;
				}
				mes("[Bispo]\n"
					"Espero que você entenda que para se tornar um servo do Senhor, deve realizar uma penitência.\n"
					"Está dispost"+(Sex == SEX_MALE ? "o":"a")+" a esse sacrifício?");
				next;
				if (select("Sim estou", "Não estou") == 2) {
					mes("[Bispo]\n"
						"Tudo bem Siga em paz,"+(Sex == SEX_MALE ? "meu filho":"minha filha")+".");
					close;
				}
				mes("[Bispo]\n"
					"Se é de sua verdadeira vontade, lhe direi qual será sua penitência");
				next;
				mes("[Bispo]\n"
					"Deverá fazer uma peregrinação em busca da iluminação...");
				switch (rand(3)) {
					case 1:
					mes("Você deve visitar o ^000077Irmão Simão^000000.\n"
						"Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.");
					acolyteq = 1;
					setquest(1001);
					break;
					case 2:
					mes("Você deve visitar a ^000077Irmâ Matilda^000000.\n"
						"Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.");
					acolyteq = 2;
					setquest(1002);
					break;
					default:
					mes("Você deve visitar o ^000077Irmão Bartolomeu^000000.\n"
						"Ele pode ser encontrado em uma ponte á ^000077Noroeste de Prontera^000000.");
					setquest(1003);
					acolyteq = 3;
					break;
				}
				next;
				mes("[Bispo]\n"
					"Que a graça de Deus lhe acompanhe em sua jornada.\n"
					"Estarei rezando por você, esperando seu regreço.");
				close;
			}
		} else if (acolyteq < 4) {
			switch (acolyteq) {
				case 1:
				mes("[Bispo]\n"
					"Vá visitar o ^000077Irmão Simão^000000.\n"
					"Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.");
				close;
				case 2:
				mes("[Bispo]\n"
					"Vá visitar a ^000077Irmâ Matilda^000000.\n"
					"Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.");
				close;
				case 3:
				mes("[Bispo]\n"
					"Vá visitar o ^000077Irmão Bartolomeu^000000.\n"
					"Ele pode ser encontrado em uma ponte á ^000077Noroeste de Prontera^000000.");
				close;
			}
		} else if (acolyteq == 4) {
			if (questprogress(1001)) { completequest(1001); }
			else if (questprogress(1002)) { completequest(1002); }
			else if (questprogress(1003)) { completequest(1003); }
			mes("[Bispo]\n"
				"Você retornou em segurança e completou sua peregrinação.\n"
				"Isso enche meu coração de alegria.");
			next;
			mes("[Bispo]\n"
				"Sei que não se daria ao esforço de completar a tarefa que lhe foi dada se não quisesse ser Noviço.\n"
				"Mas antes que você mude tenho que lhe perguntar...");
			next;
			mes("[Bispo]\n"
				"É realmente isso que seu coração manda?\n"
				"Porque se você ser tornar "+(Sex == SEX_MALE ? "um Noviço":"uma Noviça")+" agora.\n"
				"Não poderá escolher outra classe.\n"
				"Mas Noviços podem se tornar Sacerdotes ou Monjes.");
			next;
			mes("[Bispo]\n"
				"Por isso lhe darei um tempo para pensar em sua decisão.\n"
				"Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" venha falar comigo novamente");
			acolyteq = 5;
			close;
		} else if (acolyteq == 5) {
			mes("[Bispo]\n"
				"Já se decidiu?\n"
				"Quer se tornar Noviço agora?");
			next;
			if (select("Sim, quero ser Noviço", "Ainda não") == 1) {
				mes("[Bispo]\n"
					"Neste momento o recebo nos caminhos do Senhor e o torno "+(Sex == SEX_MALE ? "um Noviço":"uma Noviça")+".\n"
					"Do mesmo modo que você não hesitou em sua penitência.\n"
					"Espero que você nunca hesite frente ás tentações do pecado.");
				getitem(N_Mace,1);
				jobchange(Job_Acolyte);
				callfunc("ClearJobQuest");
				next;
				mes("[Bispo]\n"
					"Agora vá, e leve a esperança ao mundo.");
				close;
			}
			mes("[Bispo]\n"
				"Tudo bem, leve o tempo que achar necessário para se decidir.");
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_fild03,365,255,2	script	Irmão Simão#nov	4_M_ORIENT02,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes("[Simão]\n"
			"Olá, você deve ser "+(strcharinfo(CHAR_NAME))+".");
		next;
		switch (acolyteq) {
			case 1:
			mes("[Simão]\n"
				"Eu acredito que você foi mandado pelo Bispo.");
			next;
			mes("[Simão]\n"
				"Eu acho que não há realmente nenhuma necessidade de te ensinar muito.\n"
				"Além disso, eu tenho certeza que alguém da sua geração pode ter problemas para ouvir um velho como eu.");
			next;
			mes("[Simão]\n"
				"Ainda assim, as lições podem vir de lugares que você menos espera.\n"
				"Deus gosta de ensinar seus filhos de maneira estranha.");
			next;
			mes("[Simão]\n"
				"Bem, eu vou enviar a mensagem dizendo que você veio me visitar.\n"
				"Então, agora você pode voltar para o Santuário de Prontera.");
			next;
			mes("[Simão]\n"
				"Adeus.");
			acolyteq = 4;
			close;
			case 2:
			mes("[Simão]\n"
				"Sua peregrinação é visitar a ^000077Irmâ Matilda^000000.\n"
				"Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.");
			close;
			case 3:
			mes("[Simão]\n"
				"Sua peregrinação visitar o ^000077Irmão Bartolomeu^000000.\n"
				"Ele pode ser encontrado em uma ponte á ^000077Noroeste de Prontera^000000.");
			close;
			default:
			mes("[Simão]\n"
				"Vá "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.\n"
				"O Bispo lhe espera.\n"
				"Siga em paz.");
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq == 2) {
			mes("[Irmão Simão]\n"
				"Ah, então você é o jovem Noviço que deseja se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+".");
			next;
			mes("[Irmão Simão]\n"
				"Eu recebi a mensagem do Bispo Paul.\n"
				"Aqui é um lugar sagrado para a nossa igreja.");
			next;
			mes("[Irmão Simão]\n"
				"Bem então, por favor dirija-se ao seu próximo destino da sua jornada.\n"
				"E fique seguro em suas viagens.");
			priestq = 3;
			close;
		} else {
			mes("[Irmão Simão]\n"
				"Posso te perguntar por que você voltou?\n"
				"Por favor, continue sua prática religiosa.");
			close;
		}
	} else {
		mes("[Simão]\n"
			"Seja você quem for, por favor cuide de si mesmo.\n"
			"Os monstros aqui são fortes.");
		close;
	}
}

// ------------------------------------------------------------------
moc_fild07,41,355,4	script	Irmã Matilda#acolyteq	4_F_SISTER,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes("[Matilda]\n"
			"Olá, você deve ser "+(strcharinfo(CHAR_NAME))+".");
		next;
		switch (acolyteq) {
			case 1:
			mes("[Matilda]\n"
				"Sua peregrinação visitar o ^000077Irmão Simão^000000.\n"
				"Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.");
			close;
			case 2:
			mes("[Matilda]\n"
				"Vou enviar uma mensagem para a Catedral, confirmando que você, me visitou e completou sua penitência.");
			next;
			mes("[Matilda]\n"
				"Por favor, retorne ao Santuário de Prontera e fale com o Bispo.");
			acolyteq = 4;
			close;
			case 3:
			mes("[Matilda]\n"
				"Sua peregrinação visitar o ^000077Irmão Bartolomeu^000000.\n"
				"Ele pode ser encontrado em uma ponte á ^000077Noroeste de Prontera^000000.");
			close;
			default:
			mes("[Matilda]\n"
				"Vá "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.\n"
				"O Bispo lhe espera.\n"
				"Siga em paz.");
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq == 2) {
			mes("[Irmã Matilda]\n"
				"Parece que você está treinando para se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+".");
			next;
			mes("[Irmã Matilda]\n"
				"Entretanto, no momento não sou a pessoa que você deve visitar.");
			next;
			mes("[Irmã Matilda]\n"
				"Talvez você deva falar novamente com o Bispo Paul ou com a Irmã Cecilia.\n"
				"Bem, que Deus esteja com você...");
			close;
		} else if (priestq == 3) {
			mes("[Irmã Matilda]\n"
				"Ah, você é\n"
				"um aprendiz de Sacerdote...?\n"
				"Bem-vind"+(Sex == SEX_MALE ? "o":"a")+"!");
			next;
			mes("[Irmã Matilda]\n"
				"Nós Sacerdotes somos obrigados a espalhar a mensagem de Deus para as pessoas na Terra.");
			next;
			mes("[Irmã Matilda]\n"
				"Depois de se tornar Sacerdote, suas viagens poderão levá-lo as Pirâmides de Morroc.\n"
				"E eu espero que você possa libertar os Mortos-vivos de lá do mal que está os arrondando.");
			next;
			mes("[Irmã Matilda]\n"
				"Bem...\n"
				"Então eu orarei a Deus para que você fique seguro em sua jornada.");
			priestq = 4;
			close;
		} else {
			mes("[Irmã Matilda]\n"
				"Posso te perguntar por que você voltou?\n"
				"Por favor, continue sua prática religiosa.");
			close;
		}
	} else {
		mes("[Matilda]\n"
			"Seja você quem for, por favor cuide de si mesmo.\n"
			"Os monstros aqui são fortes.");
		close;
	}
}

// ------------------------------------------------------------------
prt_fild00,208,218,6	script	Irmão Bartolomeu#acolyteq	4W_M_02,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes("[Bartolomeu]\n"
			"Olá, você deve ser "+(strcharinfo(CHAR_NAME))+".");
		next;
		switch (acolyteq) {
			case 1:
			mes("[Bartolomeu]\n"
				"Sua peregrinação visitar o ^000077Irmão Simão^000000.\n"
				"Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.");
			close;
			case 2:
			mes("[Bartolomeu]\n"
				"Sua peregrinação é visitar a ^000077Irmâ Matilda^000000.\n"
				"Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.");
			close;
			case 3:
			mes("[Bartolomeu]\n"
				"Nada mal, nada mal.\n"
				"Você resistiu ao julgamento de penitência muito bem.\n"
				"Agora regreçe a Catedral para se tornar Noviço.");
			acolyteq = 4;
			close;
			default:
			mes("[Bartolomeu]\n"
				"Vá "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.\n"
				"O Bispo lhe espera.\n"
				"Siga em paz.");
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq < 4) {
			mes("[Irmão Bartolomeu]\n"
				"Hum...\n"
				"Um aprendiz de Sacerdote, em?");
			next;
			mes("[Irmão Bartolomeu]\n"
				"Bem, você está falando com a pessoa errada.\n"
				"Ainda não é o momento certo de nos encontrarmos.");
			close;
		} else if (priestq == 4) {
			mes("[Irmão Bartolomeu]\n"
				"Hum.\n"
				"Um aprendiz de Sacerdote, em?\n"
				"Seja bem-vind"+(Sex == SEX_MALE ? "o":"a")+".");
			next;
			mes("[Irmão Bartolomeu]\n"
				"Eu não vou te dizer mais nada.\n"
				"Apenas dedique sua vida a Deus");
			next;
			mes("[Irmão Bartolomeu]\n"
				"Agora volte para a igreja.\n"
				"Pronto, seu primeiro exame está concluído.");
			priestq = 5;
			close;
		} else {
			mes("[Irmão Bartolomeu]\n"
				"Posso te perguntar por que você voltou?\n"
				"Por favor, continue sua prática religiosa.");
			close;
		}
	} else {
		mes("[Bartolomeu]\n"
			"Seja você quem for, por favor cuide de si mesmo.\n"
			"Os monstros aqui são fortes.");
		close;
	}
}

