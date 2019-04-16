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
| - Info: Quest de Mudan�a de Classe para Novi�o.                   |
| - Nota: Cont�m trechos da quest de Mudan�a de Classe para         |
|         Sacerdote.                                                |
\*-----------------------------------------------------------------*/

prt_church,184,41,4	script	Bispo#acolyteq	1_M_PASTOR,{
	if (Upper == 1 && BaseJob == Job_Novice_High) {
		if (ADVJOB == Job_High_Priest || ADVJOB == Job_Champion) {
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Bispo]\n"
					"Voc� ainda n�o est� pront"+(Sex == SEX_MALE ? "o":"a")+" para se tornar um Novi�o.\n"
					"Por favor, conclua o aprendizado de todas as Habilidades B�sicas primeiro.");
				close;
			} else {
				mes("[Bispo]\n"
					"Ah, eu sinto seu vigor e experi�ncia.\n"
					"Voc� deve ter aprendido muitas coisas antes de entrar em Valhalla.");
				jobchange(Job_Acolyte_High);
				close;
			}
		} else {
			mes("[Bispo]\n"
				"Sinto que voc� passou por uma experi�ncia de vida passada.\n"
				"Voc� deve ter aprendido muitas coisas antes de entrar em Valhalla.");
			next;
			mes("[Bispo]\n"
				"No entanto, posso dizer que voc� n�o est� preparado para ser Novi�o.\n"
				"Lembre-se de quem voc� era em sua vida passada e encontre o seu caminho.");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Acolyte) {
			mes("[Bispo]\n"
				"Que voc� possa levar um pouco de alento a todos aqueles que sofrem.");
			close;
		} else {
			mes("[Bispo]\n"
				"Vejo que voc� j� escolheu o seu caminho, desejo sucesso a voc�!");
			close;
		}
	} else {
		if (!acolyteq) {
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Bispo]\n"
					"Jovem porque voc� n�o aprende suas Habilidades B�sicas.\n"
					"Seria de grande ajuda.");
				close;
			} else {
				mes("[Bispo]\n"
					"Jovem voc� veio a mim para se tornar "+(Sex == SEX_MALE ? "um Novi�o":"uma Novi�a")+"?");
				next;
				if (select("Sim estou aqui para isso", "S� estou de passagem") == 2) {
					mes("[Bispo]\n"
						"� sempre bom convesar com jovens como voc�");
					close;
				}
				mes("[Bispo]\n"
					"Espero que voc� entenda que para se tornar um servo do Senhor, deve realizar uma penit�ncia.\n"
					"Est� dispost"+(Sex == SEX_MALE ? "o":"a")+" a esse sacrif�cio?");
				next;
				if (select("Sim estou", "N�o estou") == 2) {
					mes("[Bispo]\n"
						"Tudo bem Siga em paz,"+(Sex == SEX_MALE ? "meu filho":"minha filha")+".");
					close;
				}
				mes("[Bispo]\n"
					"Se � de sua verdadeira vontade, lhe direi qual ser� sua penit�ncia");
				next;
				mes("[Bispo]\n"
					"Dever� fazer uma peregrina��o em busca da ilumina��o...");
				switch (rand(3)) {
					case 1:
					mes("Voc� deve visitar o ^000077Irm�o Sim�o^000000.\n"
						"Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.");
					acolyteq = 1;
					setquest(1001);
					break;
					case 2:
					mes("Voc� deve visitar a ^000077Irm� Matilda^000000.\n"
						"Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.");
					acolyteq = 2;
					setquest(1002);
					break;
					default:
					mes("Voc� deve visitar o ^000077Irm�o Bartolomeu^000000.\n"
						"Ele pode ser encontrado em uma ponte � ^000077Noroeste de Prontera^000000.");
					setquest(1003);
					acolyteq = 3;
					break;
				}
				next;
				mes("[Bispo]\n"
					"Que a gra�a de Deus lhe acompanhe em sua jornada.\n"
					"Estarei rezando por voc�, esperando seu regre�o.");
				close;
			}
		} else if (acolyteq < 4) {
			switch (acolyteq) {
				case 1:
				mes("[Bispo]\n"
					"V� visitar o ^000077Irm�o Sim�o^000000.\n"
					"Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.");
				close;
				case 2:
				mes("[Bispo]\n"
					"V� visitar a ^000077Irm� Matilda^000000.\n"
					"Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.");
				close;
				case 3:
				mes("[Bispo]\n"
					"V� visitar o ^000077Irm�o Bartolomeu^000000.\n"
					"Ele pode ser encontrado em uma ponte � ^000077Noroeste de Prontera^000000.");
				close;
			}
		} else if (acolyteq == 4) {
			if (questprogress(1001)) { completequest(1001); }
			else if (questprogress(1002)) { completequest(1002); }
			else if (questprogress(1003)) { completequest(1003); }
			mes("[Bispo]\n"
				"Voc� retornou em seguran�a e completou sua peregrina��o.\n"
				"Isso enche meu cora��o de alegria.");
			next;
			mes("[Bispo]\n"
				"Sei que n�o se daria ao esfor�o de completar a tarefa que lhe foi dada se n�o quisesse ser Novi�o.\n"
				"Mas antes que voc� mude tenho que lhe perguntar...");
			next;
			mes("[Bispo]\n"
				"� realmente isso que seu cora��o manda?\n"
				"Porque se voc� ser tornar "+(Sex == SEX_MALE ? "um Novi�o":"uma Novi�a")+" agora.\n"
				"N�o poder� escolher outra classe.\n"
				"Mas Novi�os podem se tornar Sacerdotes ou Monjes.");
			next;
			mes("[Bispo]\n"
				"Por isso lhe darei um tempo para pensar em sua decis�o.\n"
				"Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" venha falar comigo novamente");
			acolyteq = 5;
			close;
		} else if (acolyteq == 5) {
			mes("[Bispo]\n"
				"J� se decidiu?\n"
				"Quer se tornar Novi�o agora?");
			next;
			if (select("Sim, quero ser Novi�o", "Ainda n�o") == 1) {
				mes("[Bispo]\n"
					"Neste momento o recebo nos caminhos do Senhor e o torno "+(Sex == SEX_MALE ? "um Novi�o":"uma Novi�a")+".\n"
					"Do mesmo modo que voc� n�o hesitou em sua penit�ncia.\n"
					"Espero que voc� nunca hesite frente �s tenta��es do pecado.");
				getitem(N_Mace,1);
				jobchange(Job_Acolyte);
				callfunc("ClearJobQuest");
				next;
				mes("[Bispo]\n"
					"Agora v�, e leve a esperan�a ao mundo.");
				close;
			}
			mes("[Bispo]\n"
				"Tudo bem, leve o tempo que achar necess�rio para se decidir.");
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_fild03,365,255,2	script	Irm�o Sim�o#nov	4_M_ORIENT02,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes("[Sim�o]\n"
			"Ol�, voc� deve ser "+(strcharinfo(CHAR_NAME))+".");
		next;
		switch (acolyteq) {
			case 1:
			mes("[Sim�o]\n"
				"Eu acredito que voc� foi mandado pelo Bispo.");
			next;
			mes("[Sim�o]\n"
				"Eu acho que n�o h� realmente nenhuma necessidade de te ensinar muito.\n"
				"Al�m disso, eu tenho certeza que algu�m da sua gera��o pode ter problemas para ouvir um velho como eu.");
			next;
			mes("[Sim�o]\n"
				"Ainda assim, as li��es podem vir de lugares que voc� menos espera.\n"
				"Deus gosta de ensinar seus filhos de maneira estranha.");
			next;
			mes("[Sim�o]\n"
				"Bem, eu vou enviar a mensagem dizendo que voc� veio me visitar.\n"
				"Ent�o, agora voc� pode voltar para o Santu�rio de Prontera.");
			next;
			mes("[Sim�o]\n"
				"Adeus.");
			acolyteq = 4;
			close;
			case 2:
			mes("[Sim�o]\n"
				"Sua peregrina��o � visitar a ^000077Irm� Matilda^000000.\n"
				"Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.");
			close;
			case 3:
			mes("[Sim�o]\n"
				"Sua peregrina��o visitar o ^000077Irm�o Bartolomeu^000000.\n"
				"Ele pode ser encontrado em uma ponte � ^000077Noroeste de Prontera^000000.");
			close;
			default:
			mes("[Sim�o]\n"
				"V� "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.\n"
				"O Bispo lhe espera.\n"
				"Siga em paz.");
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq == 2) {
			mes("[Irm�o Sim�o]\n"
				"Ah, ent�o voc� � o jovem Novi�o que deseja se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+".");
			next;
			mes("[Irm�o Sim�o]\n"
				"Eu recebi a mensagem do Bispo Paul.\n"
				"Aqui � um lugar sagrado para a nossa igreja.");
			next;
			mes("[Irm�o Sim�o]\n"
				"Bem ent�o, por favor dirija-se ao seu pr�ximo destino da sua jornada.\n"
				"E fique seguro em suas viagens.");
			priestq = 3;
			close;
		} else {
			mes("[Irm�o Sim�o]\n"
				"Posso te perguntar por que voc� voltou?\n"
				"Por favor, continue sua pr�tica religiosa.");
			close;
		}
	} else {
		mes("[Sim�o]\n"
			"Seja voc� quem for, por favor cuide de si mesmo.\n"
			"Os monstros aqui s�o fortes.");
		close;
	}
}

// ------------------------------------------------------------------
moc_fild07,41,355,4	script	Irm� Matilda#acolyteq	4_F_SISTER,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes("[Matilda]\n"
			"Ol�, voc� deve ser "+(strcharinfo(CHAR_NAME))+".");
		next;
		switch (acolyteq) {
			case 1:
			mes("[Matilda]\n"
				"Sua peregrina��o visitar o ^000077Irm�o Sim�o^000000.\n"
				"Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.");
			close;
			case 2:
			mes("[Matilda]\n"
				"Vou enviar uma mensagem para a Catedral, confirmando que voc�, me visitou e completou sua penit�ncia.");
			next;
			mes("[Matilda]\n"
				"Por favor, retorne ao Santu�rio de Prontera e fale com o Bispo.");
			acolyteq = 4;
			close;
			case 3:
			mes("[Matilda]\n"
				"Sua peregrina��o visitar o ^000077Irm�o Bartolomeu^000000.\n"
				"Ele pode ser encontrado em uma ponte � ^000077Noroeste de Prontera^000000.");
			close;
			default:
			mes("[Matilda]\n"
				"V� "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.\n"
				"O Bispo lhe espera.\n"
				"Siga em paz.");
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq == 2) {
			mes("[Irm� Matilda]\n"
				"Parece que voc� est� treinando para se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+".");
			next;
			mes("[Irm� Matilda]\n"
				"Entretanto, no momento n�o sou a pessoa que voc� deve visitar.");
			next;
			mes("[Irm� Matilda]\n"
				"Talvez voc� deva falar novamente com o Bispo Paul ou com a Irm� Cecilia.\n"
				"Bem, que Deus esteja com voc�...");
			close;
		} else if (priestq == 3) {
			mes("[Irm� Matilda]\n"
				"Ah, voc� �\n"
				"um aprendiz de Sacerdote...?\n"
				"Bem-vind"+(Sex == SEX_MALE ? "o":"a")+"!");
			next;
			mes("[Irm� Matilda]\n"
				"N�s Sacerdotes somos obrigados a espalhar a mensagem de Deus para as pessoas na Terra.");
			next;
			mes("[Irm� Matilda]\n"
				"Depois de se tornar Sacerdote, suas viagens poder�o lev�-lo as Pir�mides de Morroc.\n"
				"E eu espero que voc� possa libertar os Mortos-vivos de l� do mal que est� os arrondando.");
			next;
			mes("[Irm� Matilda]\n"
				"Bem...\n"
				"Ent�o eu orarei a Deus para que voc� fique seguro em sua jornada.");
			priestq = 4;
			close;
		} else {
			mes("[Irm� Matilda]\n"
				"Posso te perguntar por que voc� voltou?\n"
				"Por favor, continue sua pr�tica religiosa.");
			close;
		}
	} else {
		mes("[Matilda]\n"
			"Seja voc� quem for, por favor cuide de si mesmo.\n"
			"Os monstros aqui s�o fortes.");
		close;
	}
}

// ------------------------------------------------------------------
prt_fild00,208,218,6	script	Irm�o Bartolomeu#acolyteq	4W_M_02,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes("[Bartolomeu]\n"
			"Ol�, voc� deve ser "+(strcharinfo(CHAR_NAME))+".");
		next;
		switch (acolyteq) {
			case 1:
			mes("[Bartolomeu]\n"
				"Sua peregrina��o visitar o ^000077Irm�o Sim�o^000000.\n"
				"Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.");
			close;
			case 2:
			mes("[Bartolomeu]\n"
				"Sua peregrina��o � visitar a ^000077Irm� Matilda^000000.\n"
				"Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.");
			close;
			case 3:
			mes("[Bartolomeu]\n"
				"Nada mal, nada mal.\n"
				"Voc� resistiu ao julgamento de penit�ncia muito bem.\n"
				"Agora regre�e a Catedral para se tornar Novi�o.");
			acolyteq = 4;
			close;
			default:
			mes("[Bartolomeu]\n"
				"V� "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.\n"
				"O Bispo lhe espera.\n"
				"Siga em paz.");
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq < 4) {
			mes("[Irm�o Bartolomeu]\n"
				"Hum...\n"
				"Um aprendiz de Sacerdote, em?");
			next;
			mes("[Irm�o Bartolomeu]\n"
				"Bem, voc� est� falando com a pessoa errada.\n"
				"Ainda n�o � o momento certo de nos encontrarmos.");
			close;
		} else if (priestq == 4) {
			mes("[Irm�o Bartolomeu]\n"
				"Hum.\n"
				"Um aprendiz de Sacerdote, em?\n"
				"Seja bem-vind"+(Sex == SEX_MALE ? "o":"a")+".");
			next;
			mes("[Irm�o Bartolomeu]\n"
				"Eu n�o vou te dizer mais nada.\n"
				"Apenas dedique sua vida a Deus");
			next;
			mes("[Irm�o Bartolomeu]\n"
				"Agora volte para a igreja.\n"
				"Pronto, seu primeiro exame est� conclu�do.");
			priestq = 5;
			close;
		} else {
			mes("[Irm�o Bartolomeu]\n"
				"Posso te perguntar por que voc� voltou?\n"
				"Por favor, continue sua pr�tica religiosa.");
			close;
		}
	} else {
		mes("[Bartolomeu]\n"
			"Seja voc� quem for, por favor cuide de si mesmo.\n"
			"Os monstros aqui s�o fortes.");
		close;
	}
}

