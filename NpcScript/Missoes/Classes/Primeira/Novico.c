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
| - Desenvolvido por: Spell Master 10/08/2017                       |
| - Nota: Quest de Mudan�a de Classe para Novi�o.                   |
| - Observa��es: Cont�m trechos da quest de Mudan�a de Classe       |
|                para Sacerdote.                                    |
\*-----------------------------------------------------------------*/

prt_church,184,41,4	script	Bispo#acolyteq	1_M_PASTOR,{
	if (Upper == 1 && BaseJob == Job_Novice_High) {
		if (ADVJOB == Job_High_Priest || ADVJOB == Job_Champion) {
			if (getskilllv("NV_BASIC") < 9) {
				mes "[Bispo]";
				mes "Voc� ainda n�o est� pront"+(Sex == SEX_MALE ? "o":"a")+" para se tornar um Novi�o.";
				mes "Por favor, conclua o aprendizado de todas as Habilidades B�sicas primeiro.";
				close;
			} else {
				mes "[Bispo]";
				mes "Ah, eu sinto seu vigor e experi�ncia.";
				mes "Voc� deve ter aprendido muitas coisas antes de entrar em Valhalla.";
				jobchange (Job_Acolyte_High);
				close;
			}
		} else {
			mes "[Bispo]";
			mes "Sinto que voc� passou por uma experi�ncia de vida passada.";
			mes "Voc� deve ter aprendido muitas coisas antes de entrar em Valhalla.";
			next;
			mes "[Bispo]";
			mes "No entanto, posso dizer que voc� n�o est� preparado para ser Novi�o.";
			mes "Lembre-se de quem voc� era em sua vida passada e encontre o seu caminho.";
			close;
		}
	} else if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Acolyte) {
			mes "[Bispo]";
			mes "Que voc� possa levar um pouco de alento a todos aqueles que sofrem.";
			close;
		} else {
			mes "[Bispo]";
			mes "Vejo que voc� j� escolheu o seu caminho, desejo sucesso a voc�!";
			close;
		}
	} else {
		if (!acolyteq) {
			if (getskilllv("NV_BASIC") < 9) {
				mes "[Bispo]";
				mes "Jovem porque voc� n�o aprende suas Habilidades B�sicas.";
				mes "Seria de grande ajuda.";
				close;
			} else {
				mes "[Bispo]";
				mes "Jovem voc� veio a mim para se tornar "+(Sex == SEX_MALE ? "um Novi�o":"uma Novi�a")+"?";
				next;
				if (select("Sim estou aqui para isso","S� estou de passagem") == 2) {
					mes "[Bispo]";
					mes "� sempre bom convesar com jovens como voc�";
					close;
				}
				mes "[Bispo]";
				mes "Espero que voc� entenda que para se tornar um servo do Senhor, deve realizar uma penit�ncia.";
				mes "Est� dispost"+(Sex == SEX_MALE ? "o":"a")+" a esse sacrif�cio?";
				next;
				if (select("Sim estou","N�o estou") == 2) {
					mes "[Bispo]";
					mes "Tudo bem Siga em paz,"+(Sex == SEX_MALE ? "meu filho":"minha filha")+".";
					close;
				}
				mes "[Bispo]";
				mes "Se � de sua verdadeira vontade, lhe direi qual ser� sua penit�ncia";
				next;
				mes "[Bispo]";
				mes "Dever� fazer uma peregrina��o em busca da ilumina��o...";
				switch(rand(3)) {
					case 1:
					mes "Voc� deve visitar o ^000077Irm�o Sim�o^000000.";
					mes "Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.";
					acolyteq = 1;
					setquest (1001);
					break;
					case 2:
					mes "Voc� deve visitar a ^000077Irm� Matilda^000000.";
					mes "Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.";
					acolyteq = 2;
					setquest (1002);
					break;
					default:
					mes "Voc� deve visitar o ^000077Irm�o Bartolomeu^000000.";
					mes "Ele pode ser encontrado em uma ponte � ^000077Noroeste de Prontera^000000.";
					setquest (1003);
					acolyteq = 3;
					break;
				}
				next;
				mes "[Bispo]";
				mes "Que a gra�a de Deus lhe acompanhe em sua jornada.";
				mes "Estarei rezando por voc�, esperando seu regre�o.";
				close;
			}
		} else if (acolyteq < 4) {
			switch(acolyteq) {
				case 1:
				mes "[Bispo]";
				mes "V� visitar o ^000077Irm�o Sim�o^000000.";
				mes "Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.";
				close;
				case 2:
				mes "[Bispo]";
				mes "V� visitar a ^000077Irm� Matilda^000000.";
				mes "Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.";
				close;
				case 3:
				mes "[Bispo]";
				mes "V� visitar o ^000077Irm�o Bartolomeu^000000.";
				mes "Ele pode ser encontrado em uma ponte � ^000077Noroeste de Prontera^000000.";
				close;
			}
		} else if (acolyteq == 4) {
			if (questprogress(1001)) { completequest (1001); }
			else if (questprogress(1002)) { completequest (1002); }
			else if (questprogress(1003)) { completequest (1003); }
			mes "[Bispo]";
			mes "Voc� retornou em seguran�a e completou sua peregrina��o.";
			mes "Isso enche meu cora��o de alegria.";
			next;
			mes "[Bispo]";
			mes "Sei que n�o se daria ao esfor�o de completar a tarefa que lhe foi dada se n�o quisesse ser Novi�o.";
			mes "Mas antes que voc� mude tenho que lhe perguntar...";
			next;
			mes "[Bispo]";
			mes "� realmente isso que seu cora��o manda?";
			mes "Porque se voc� ser tornar "+(Sex == SEX_MALE ? "um Novi�o":"uma Novi�a")+" agora.";
			mes "N�o poder� escolher outra classe.";
			mes "Mas Novi�os podem se tornar Sacerdotes ou Monjes.";
			next;
			mes "[Bispo]";
			mes "Por isso lhe darei um tempo para pensar em sua decis�o.";
			mes "Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" venha falar comigo novamente";
			acolyteq = 5;
			close;
		} else if (acolyteq == 5) {
			mes "[Bispo]";
			mes "J� se decidiu?";
			mes "Quer se tornar Novi�o agora?";
			next;
			if (select("Sim, quero ser Novi�o","Ainda n�o") == 1) {
				mes "[Bispo]";
				mes "Neste momento o recebo nos caminhos do Senhor e o torno "+(Sex == SEX_MALE ? "um Novi�o":"uma Novi�a")+".";
				mes "Do mesmo modo que voc� n�o hesitou em sua penit�ncia.";
				mes "Espero que voc� nunca hesite frente �s tenta��es do pecado.";
				getitem (N_Mace,1);
				jobchange (Job_Acolyte);
				callfunc ("ClearJobQuest");
				next;
				mes "[Bispo]";
				mes "Agora v�, e leve a esperan�a ao mundo.";
				close;
			}
			mes "[Bispo]";
			mes "Tudo bem, leve o tempo que achar necess�rio para se decidir.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_fild03,365,255,2	script	Irm�o Sim�o#nov	4_M_ORIENT02,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes "[Sim�o]";
		mes "Ol�, voc� deve ser "+(strcharinfo(PC_NAME))+".";
		next;
		switch(acolyteq) {
			case 1:
			mes "[Sim�o]";
			mes "Eu acredito que voc� foi mandado pelo Bispo.";
			next;
			mes "[Sim�o]";
			mes "Eu acho que n�o h� realmente nenhuma necessidade de te ensinar muito.";
			mes "Al�m disso, eu tenho certeza que algu�m da sua gera��o pode ter problemas para ouvir um velho como eu.";
			next;
			mes "[Sim�o]";
			mes "Ainda assim, as li��es podem vir de lugares que voc� menos espera.";
			mes "Deus gosta de ensinar seus filhos de maneira estranha.";
			next;
			mes "[Sim�o]";
			mes "Bem, eu vou enviar a mensagem dizendo que voc� veio me visitar.";
			mes "Ent�o, agora voc� pode voltar para o Santu�rio de Prontera.";
			next;
			mes "[Sim�o]";
			mes "Adeus.";
			acolyteq = 4;
			close;
			case 2:
			mes "[Sim�o]";
			mes "Sua peregrina��o � visitar a ^000077Irm� Matilda^000000.";
			mes "Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.";
			close;
			case 3:
			mes "[Sim�o]";
			mes "Sua peregrina��o visitar o ^000077Irm�o Bartolomeu^000000.";
			mes "Ele pode ser encontrado em uma ponte � ^000077Noroeste de Prontera^000000.";
			close;
			default:
			mes "[Sim�o]";
			mes "V� "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.";
			mes "O Bispo lhe espera.";
			mes "Siga em paz.";
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq == 2) {
			mes "[Irm�o Sim�o]";
			mes "Ah, ent�o voc� � o jovem Novi�o que deseja se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+".";
			next;
			mes "[Irm�o Sim�o]";
			mes "Eu recebi a mensagem do Bispo Paul.";
			mes "Aqui � um lugar sagrado para a nossa igreja.";
			next;
			mes "[Irm�o Sim�o]";
			mes "Bem ent�o, por favor dirija-se ao seu pr�ximo destino da sua jornada.";
			mes "E fique seguro em suas viagens.";
			priestq = 3;
			close;
		} else {
			mes "[Irm�o Sim�o]";
			mes "Posso te perguntar por que voc� voltou?";
			mes "Por favor, continue sua pr�tica religiosa.";
			close;
		}
	} else {
		mes "[Sim�o]";
		mes "Seja voc� quem for, por favor cuide de si mesmo.";
		mes "Os monstros aqui s�o fortes.";
		close;
	}
}

// ------------------------------------------------------------------
moc_fild07,41,355,4	script	Irm� Matilda#acolyteq	4_F_SISTER,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes "[Matilda]";
		mes "Ol�, voc� deve ser "+(strcharinfo(PC_NAME))+".";
		next;
		switch(acolyteq) {
			case 1:
			mes "[Matilda]";
			mes "Sua peregrina��o visitar o ^000077Irm�o Sim�o^000000.";
			mes "Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.";
			close;
			case 2:
			mes "[Matilda]";
			mes "Vou enviar uma mensagem para a Catedral, confirmando que voc�, me visitou e completou sua penit�ncia.";
			next;
			mes "[Matilda]";
			mes "Por favor, retorne ao Santu�rio de Prontera e fale com o Bispo.";
			acolyteq = 4;
			close;
			case 3:
			mes "[Matilda]";
			mes "Sua peregrina��o visitar o ^000077Irm�o Bartolomeu^000000.";
			mes "Ele pode ser encontrado em uma ponte � ^000077Noroeste de Prontera^000000.";
			close;
			default:
			mes "[Matilda]";
			mes "V� "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.";
			mes "O Bispo lhe espera.";
			mes "Siga em paz.";
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq == 2) {
			mes "[Irm� Matilda]";
			mes "Parece que voc� est� treinando para se tornar "+(Sex == SEX_MALE ? "um Sacerdote":"uma Sacerdotisa")+".";
			next;
			mes "[Irm� Matilda]";
			mes "Entretanto, no momento n�o sou a pessoa que voc� deve visitar.";
			next;
			mes "[Irm� Matilda]";
			mes "Talvez voc� deva falar novamente com o Bispo Paul ou com a Irm� Cecilia.";
			mes "Bem, que Deus esteja com voc�...";
			close;
		} else if (priestq == 3) {
			mes "[Irm� Matilda]";
			mes "Ah, voc� �";
			mes "um aprendiz de Sacerdote...?";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+"!";
			next;
			mes "[Irm� Matilda]";
			mes "N�s Sacerdotes somos obrigados a espalhar a mensagem de Deus para as pessoas na Terra.";
			next;
			mes "[Irm� Matilda]";
			mes "Depois de se tornar Sacerdote, suas viagens poder�o lev�-lo as Pir�mides de Morroc.";
			mes "E eu espero que voc� possa libertar os Mortos-vivos de l� do mal que est� os arrondando.";
			next;
			mes "[Irm� Matilda]";
			mes "Bem...";
			mes "Ent�o eu orarei a Deus para que voc� fique seguro em sua jornada.";
			priestq = 4;
			close;
		} else {
			mes "[Irm� Matilda]";
			mes "Posso te perguntar por que voc� voltou?";
			mes "Por favor, continue sua pr�tica religiosa.";
			close;
		}
	} else {
		mes "[Matilda]";
		mes "Seja voc� quem for, por favor cuide de si mesmo.";
		mes "Os monstros aqui s�o fortes.";
		close;
	}
}

// ------------------------------------------------------------------
prt_fild00,208,218,6	script	Irm�o Bartolomeu#acolyteq	4W_M_02,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes "[Bartolomeu]";
		mes "Ol�, voc� deve ser "+(strcharinfo(PC_NAME))+".";
		next;
		switch(acolyteq) {
			case 1:
			mes "[Bartolomeu]";
			mes "Sua peregrina��o visitar o ^000077Irm�o Sim�o^000000.";
			mes "Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.";
			close;
			case 2:
			mes "[Bartolomeu]";
			mes "Sua peregrina��o � visitar a ^000077Irm� Matilda^000000.";
			mes "Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.";
			close;
			case 3:
			mes "[Bartolomeu]";
			mes "Nada mal, nada mal.";
			mes "Voc� resistiu ao julgamento de penit�ncia muito bem.";
			mes "Agora regre�e a Catedral para se tornar Novi�o.";
			acolyteq = 4;
			close;
			default:
			mes "[Bartolomeu]";
			mes "V� "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.";
			mes "O Bispo lhe espera.";
			mes "Siga em paz.";
			close;
		}
	} else if (BaseJob == Job_Acolyte) {
		if (priestq < 4) {
			mes "[Irm�o Bartolomeu]";
			mes "Hum...";
			mes "Um aprendiz de Sacerdote, em?";
			next;
			mes "[Irm�o Bartolomeu]";
			mes "Bem, voc� est� falando com a pessoa errada.";
			mes "Ainda n�o � o momento certo de nos encontrarmos.";
			close;
		} else if (priestq == 4) {
			mes "[Irm�o Bartolomeu]";
			mes "Hum.";
			mes "Um aprendiz de Sacerdote, em?";
			mes "Seja bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
			next;
			mes "[Irm�o Bartolomeu]";
			mes "Eu n�o vou te dizer mais nada.";
			mes "Apenas dedique sua vida a Deus";
			next;
			mes "[Irm�o Bartolomeu]";
			mes "Agora volte para a igreja.";
			mes "Pronto, seu primeiro exame est� conclu�do.";
			priestq = 5;
			close;
		} else {
			mes "[Irm�o Bartolomeu]";
			mes "Posso te perguntar por que voc� voltou?";
			mes "Por favor, continue sua pr�tica religiosa.";
			close;
		}
	} else {
		mes "[Bartolomeu]";
		mes "Seja voc� quem for, por favor cuide de si mesmo.";
		mes "Os monstros aqui s�o fortes.";
		close;
	}
}

