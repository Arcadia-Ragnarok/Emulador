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
| - Nota: Quest de Mudança de Classe para Noviço.                   |
| - Observações: Contém trechos da quest de Mudança de Classe       |
|                para Sacerdote (Ainda não adicionado)              |
\*-----------------------------------------------------------------*/

prt_church,184,41,4	script	Bispo#acolyteq	1_M_PASTOR,{
	if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Acolyte) {
			mes "[Bispo]";
			mes "Que você possa levar um pouco de alento a todos aqueles que sofrem.";
			close;
		} else {
			mes "[Bispo]";
			mes "Vejo que você já escolheu o seu caminho, desejo sucesso a você!";
			close;
		}
	} else {
		if (!acolyteq) {
			if (getskilllv("NV_BASIC") < 9) {
				mes "[Bispo]";
				mes "Jovem porque você não aprende suas Habilidades Básicas.";
				mes "Seria de grande ajuda.";
				close;
			} else {
				mes "[Bispo]";
				mes "Jovem você veio a mim para se tornar "+(Sex == SEX_MALE ? "um Noviço":"uma Noviça")+"?";
				next;
				if (select("Sim estou aqui para isso","Só estou de passagem") == 2) {
					mes "[Bispo]";
					mes "É sempre bom convesar com jovens como você";
					close;
				}
				mes "[Bispo]";
				mes "Espero que você entenda que para se tornar um servo do Senhor, deve realizar uma penitência.";
				mes "Está dispost"+(Sex == SEX_MALE ? "o":"a")+" a esse sacrifício?";
				next;
				if (select("Sim estou","Não estou") == 2) {
					mes "[Bispo]";
					mes "Tudo bem Siga em paz,"+(Sex == SEX_MALE ? "meu filho":"minha filha")+".";
					close;
				}
				mes "[Bispo]";
				mes "Se é de sua verdadeira vontade, lhe direi qual será sua penitência";
				next;
				mes "[Bispo]";
				mes "Deverá fazer uma peregrinação em busca da iluminação...";
				switch(rand(3)) {
					case 1:
					mes "Você deve visitar o ^000077Irmão Simão^000000.";
					mes "Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.";
					acolyteq = 1;
					setquest (1001);
					break;
					case 2:
					mes "Você deve visitar a ^000077Irmâ Matilda^000000.";
					mes "Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.";
					acolyteq = 2;
					setquest (1002);
					break;
					default:
					mes "Você deve visitar o ^000077Irmão Bartolomeu^000000.";
					mes "Ele pode ser encontrado em uma ponte á ^000077Noroeste de Prontera^000000.";
					setquest (1003);
					acolyteq = 3;
					break;
				}
				next;
				mes "[Bispo]";
				mes "Que a graça de Deus lhe acompanhe em sua jornada.";
				mes "Estarei rezando por você, esperando seu regreço.";
				close;
			}
		} else if (acolyteq < 4) {
			switch(acolyteq) {
				case 1:
				mes "[Bispo]";
				mes "Vá visitar o ^000077Irmão Simão^000000.";
				mes "Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.";
				close;
				case 2:
				mes "[Bispo]";
				mes "Vá visitar a ^000077Irmâ Matilda^000000.";
				mes "Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.";
				close;
				case 3:
				mes "[Bispo]";
				mes "Vá visitar o ^000077Irmão Bartolomeu^000000.";
				mes "Ele pode ser encontrado em uma ponte á ^000077Noroeste de Prontera^000000.";
				close;
			}
		} else if (acolyteq == 4) {
			if (questprogress(1001)) { completequest (1001); }
			else if (questprogress(1002)) { completequest (1002); }
			else if (questprogress(1003)) { completequest (1003); }
			mes "[Bispo]";
			mes "Você retornou em segurança e completou sua peregrinação.";
			mes "Isso enche meu coração de alegria.";
			next;
			mes "[Bispo]";
			mes "Sei que não se daria ao esforço de completar a tarefa que lhe foi dada se não quisesse ser Noviço.";
			mes "Mas antes que você mude tenho que lhe perguntar...";
			next;
			mes "[Bispo]";
			mes "É realmente isso que seu coração manda?";
			mes "Porque se você ser tornar "+(Sex == SEX_MALE ? "um Noviço":"uma Noviça")+" agora.";
			mes "Não poderá escolher outra classe.";
			mes "Mas Noviços podem se tornar Sacerdotes ou Monjes.";
			next;
			mes "[Bispo]";
			mes "Por isso lhe darei um tempo para pensar em sua decisão.";
			mes "Quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" venha falar comigo novamente";
			acolyteq = 5;
			close;
		} else if (acolyteq == 5) {
			mes "[Bispo]";
			mes "Já se decidiu?";
			mes "Quer se tornar Noviço agora?";
			next;
			if (select("Sim, quero ser Noviço","Ainda não") == 1) {
				mes "[Bispo]";
				mes "Neste momento o recebo nos caminhos do Senhor e o torno "+(Sex == SEX_MALE ? "um Noviço":"uma Noviça")+".";
				mes "Do mesmo modo que você não hesitou em sua penitência.";
				mes "Espero que você nunca hesite frente ás tentações do pecado.";
				jobchange (Job_Acolyte);
				getitem (N_Mace,1);
				callfunc ("ClearJobVar");
				next;
				mes "[Bispo]";
				mes "Agora vá, e leve a esperança ao mundo.";
				close;
			}
			mes "[Bispo]";
			mes "Tudo bem, leve o tempo que achar necessário para se decidir.";
			close;
		}
	}
}

// ------------------------------------------------------------------
prt_fild03,365,255,2	script	Irmão Simão#nov	4_M_ORIENT02,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes "[Simão]";
		mes "Olá, você deve ser "+(strcharinfo(PC_NAME))+".";
		next;
		switch(acolyteq) {
			case 1:
			mes "[Simão]";
			mes "Eu acredito que você foi mandado pelo Bispo.";
			next;
			mes "[Simão]";
			mes "Eu acho que não há realmente nenhuma necessidade de te ensinar muito.";
			mes "Além disso, eu tenho certeza que alguém da sua geração pode ter problemas para ouvir um velho como eu.";
			next;
			mes "[Simão]";
			mes "Ainda assim, as lições podem vir de lugares que você menos espera.";
			mes "Deus gosta de ensinar seus filhos de maneira estranha.";
			next;
			mes "[Simão]";
			mes "Bem, eu vou enviar a mensagem dizendo que você veio me visitar.";
			mes "Então, agora você pode voltar para o Santuário de Prontera.";
			next;
			mes "[Simão]";
			mes "Adeus.";
			acolyteq = 4;
			close;
			case 2:
			mes "[Simão]";
			mes "Sua peregrinação é visitar a ^000077Irmâ Matilda^000000.";
			mes "Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.";
			close;
			case 3:
			mes "[Simão]";
			mes "Sua peregrinação visitar o ^000077Irmão Bartolomeu^000000.";
			mes "Ele pode ser encontrado em uma ponte á ^000077Noroeste de Prontera^000000.";
			close;
			default:
			mes "[Simão]";
			mes "Vá "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.";
			mes "O Bispo lhe espera.";
			mes "Siga em paz.";
			close;
		}
	} else {
		mes "[Simão]";
		mes "Seja você quem for, por favor cuide de si mesmo.";
		mes "Os monstros aqui são fortes.";
		close;
	}
}

// ------------------------------------------------------------------
moc_fild07,41,355,4	script	Irmã Matilda#acolyteq	4_F_SISTER,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes "[Matilda]";
		mes "Olá, você deve ser "+(strcharinfo(PC_NAME))+".";
		next;
		switch(acolyteq) {
			case 1:
			mes "[Matilda]";
			mes "Sua peregrinação visitar o ^000077Irmão Simão^000000.";
			mes "Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.";
			close;
			case 2:
			mes "[Matilda]";
			mes "Vou enviar uma mensagem para a Catedral, confirmando que você, me visitou e completou sua penitência.";
			next;
			mes "[Matilda]";
			mes "Por favor, retorne ao Santuário de Prontera e fale com o Bispo.";
			acolyteq = 4;
			close;
			case 3:
			mes "[Matilda]";
			mes "Sua peregrinação visitar o ^000077Irmão Bartolomeu^000000.";
			mes "Ele pode ser encontrado em uma ponte á ^000077Noroeste de Prontera^000000.";
			close;
			default:
			mes "[Matilda]";
			mes "Vá "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.";
			mes "O Bispo lhe espera.";
			mes "Siga em paz.";
			close;
		}
	} else {
		mes "[Matilda]";
		mes "Seja você quem for, por favor cuide de si mesmo.";
		mes "Os monstros aqui são fortes.";
		close;
	}
}

// ------------------------------------------------------------------
prt_fild00,208,218,6	script	Irmão Bartolomeu#acolyteq	4W_M_02,{
	if (BaseJob == Job_Novice && acolyteq) {
		mes "[Bartolomeu]";
		mes "Olá, você deve ser "+(strcharinfo(PC_NAME))+".";
		next;
		switch(acolyteq) {
			case 1:
			mes "[Bartolomeu]";
			mes "Sua peregrinação visitar o ^000077Irmão Simão^000000.";
			mes "Ele se isolou com o animais perto da ^000077Abadia ao Nordeste de Prontera^000000.";
			close;
			case 2:
			mes "[Bartolomeu]";
			mes "Sua peregrinação é visitar a ^000077Irmâ Matilda^000000.";
			mes "Ela se isolou no deserto, no mapa ao ^000077Norte de Morroc^000000.";
			close;
			case 3:
			mes "[Bartolomeu]";
			mes "Nada mal, nada mal.";
			mes "Você resistiu ao julgamento de penitência muito bem.";
			mes "Agora regreçe a Catedral para se tornar Noviço.";
			acolyteq = 4;
			close;
			default:
			mes "[Bartolomeu]";
			mes "Vá "+(Sex == SEX_MALE ? "meu filho":"minha filha")+" retorne a Catedral de Prontera.";
			mes "O Bispo lhe espera.";
			mes "Siga em paz.";
			close;
		}
	} else {
		mes "[Bartolomeu]";
		mes "Seja você quem for, por favor cuide de si mesmo.";
		mes "Os monstros aqui são fortes.";
		close;
	}
}
