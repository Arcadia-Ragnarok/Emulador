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
| - Desenvolvido por: Spell Master 09/08/2017                       |
| - Nota: Quest de Mudan�a de Classe para Gaturno.                  |
\*-----------------------------------------------------------------*/

moc_prydb1,39,129,2	script	Gatuna Ajudante#thiefq	1_F_04,{
	if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Thief) {
			mes "[Gatuna Ajudante]";
			mes "No momento a guilda n�o tem qualquer miss�o para voc� agora.";
			close;
		} else {
			mes "[Gatuna]";
			mes "O que faz voc� aqui?";
			mes "Por acaso est� tentando ser roubad"+(Sex?"o":"a")+"?";
			next;
			mes "[Gatuna]";
			mes "� melhor voc� sair daqui o mais r�pido o poss�vel, este local � a guilda dos gaturnos.";
			mes "Ent�o n�o nos responsabilizamos se ter sua carteira afanada!";
			close;
		}
	} else {
		if (!thiefq) {
			mes "[Gatuna Ajudante]";
			mes "Garotinh"+(Sex?"o":"a")+", est� aqui porque eim?...";
			if (getskilllv ("NV_BASIC") < 9) {
				mes "Deveria aprender as habilidades b�sicas antes de se aventurar por locais como esse.";
				close;
			} else {
				mes "N�o sabe que esse lugar � a Guilda dos Gaturnos?";
				next;
				switch(select("Estou aqui para ser Gaturno","S� estou de passagem","Fale-me sobre o teste")) {
					case 1:
					mes "[Gatuna Ajudante]";
					mes "O que faz pensar que pode ser "+(Sex?"um Gaturno":"uma Gaturna")+"?";
					mes "Est� bem, assine seu nome nesse formul�rio.";
					next;
					if (select("Assinar","Cancelar inscri��o") == 1) {
						mes "[Gatuna Ajudante]";
						mes "Hunnn... "+strcharinfo(PC_NAME)+"?";
						mes "Que tipo de nome estranho � esse?";
						next;
						mes "[Gatuna Ajudante]";
						mes "Ent�o que comece seu teste.";
						mes "V� para fora da Pir�mide e procure pelo^0066ff Senhor Irrelevante ^000000.";
						mes "Ele lhe guiar� at� a planta��o de cogumelos.";
						thiefq = 1;
						setquest (1013);
						close;
					}
					mes "[Gatuna Ajudante]";
					mes "Desistiu?";
					mes "Algo me dizia que voc� era mesmo covarde.";
					close;
					case 2:
					mes "[Gatuna Ajudante]";
					mes "Ent�o � melhor voc� sair daqui o mais r�pido o poss�vel, este local � a guilda dos gaturnos.";
					mes "Ent�o n�o nos responsabilizamos se ter sua carteira afanada!";
					close;
					case 3:
					mes "[Gatuna Ajudante]";
					mes "Jovens Aprendizes assim como voc�, podem ser tornar gaturnos ao realizar os teste de nossa guilda";
					mes "Gaturnos devem ser �timos em adquirir as coisas";
					next;
					mes "[Gatuna Ajudante]";
					mes "Nosso teste mede a capacidade de se infiltrar e roubar itens";
					mes "O candidato do teste deve roubar 2 tipos de cogumelos";
					mes "Cada tipo de cogumelo vale uma pontua��o:";
					next;
					mes "[Gatuna Ajudante]";
					mes getitemname(Mushroom_Of_Thief_1) + " vale 3 pontos cada.";
					mes getitemname(Mushroom_Of_Thief_2) + " vale 1 ponto cada.";
					mes "O objetivo final � marcar 25 pontos, na soma de todos pontos.";
					next;
					mes "[Gatuna Ajudante]";
					mes "Basta ir � fazenda de cogumelos e conseguir essa pontua��o.";
					close;
				}
			}
		} else if (thiefq) {
			if (job_thief_q == 2 && countitem(Mushroom_Of_Thief_1) > 0 || countitem(Mushroom_Of_Thief_2) > 0) {
				mes "[Gatuna Ajudante]";
				mes "Voc� enfim voltou";
				mes "Como foi l� na planta��o de cogumelos?";
				next;
				switch (select("Foi moleza","Aquele lugar � horr�vel!")) {
					case 1:
					mes "[Gatuna Ajudante]";
					mes "Se achou essa tafera f�cil, sem d�viadas ser� "+(Sex?"um �timo Gaturno":"uma �tima Gatuna");
					break;
					case 2:
					mes "[Gatuna Ajudante]";
					mes "Entendo, mas voc� j� deveria saber que gaturnos n�o tem uma vida f�cil e glamurosa.";
					break;
				}
				next;
				mes "[Gatuna Ajudante]";
				mes "V� aquele sujeito ali?";
				mes "Leve os cogumelos para ele.";
				next;
				mes "[Gatuna Ajudante]";
				mes "Seu teste continua com ele, quando conferir os que voc� trouxe";
				close;
			} else if (thiefq == 3) {
				mes "[Gatuna Ajudante]";
				mes "Voc� veio aqui para se tornar "+(Sex?"um Gaturno":"uma Gaturna")+"?";
				mes "E o que est� pensando ainda?";
				close;
			} else {
				mes "[Gatuna Ajudante]";
				mes "O que ainda faz aqui?!";
				mes "Procure pelo^777777 Senhor Irrelevante^000000 do lado de fora da Pir�mide";
				mes "Ele vai lhe guiar at� a planta��o de cogumelos";
				next;
				if (select("Fale-me sobre o teste","Sair") == 1) {
					mes "[Gatuna Ajudante]";
					mes "Nosso teste mede a capacidade de se infiltrar e roubar itens.";
					mes "O candidato do teste deve roubar 2 tipos de cogumelos.";
					mes "Cada tipo de cogumelo vale uma pontua��o:";
					next;
					mes "[Gatuna Ajudante]";
					mes getitemname(Mushroom_Of_Thief_1) + " vale 3 pontos cada.";
					mes getitemname(Mushroom_Of_Thief_2) + " vale 1 ponto cada.";
					mes "O objetivo final � marcar 25 pontos, na soma de todos pontos.";
					next;
					mes "[Gatuna Ajudante]";
					mes "Basta ir � fazenda de cogumelos e conseguir essa pontua��o.";
				}
				close;
			}
		}
	}
}

moc_ruins,141,125,3	script	Sr. Irrelevante#thiefq	4_M_01,{
	if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Thief) {
			mes "[Senhor Irrelevante]";
			mes "Ei!!";
			mes "Eu me lembro de voc�";
			mes "Voc� � "+(Sex?"aquele":"aquela")+ "Aprendiz que veio at� aqui para ser tornar Gaturno";
			next;
			mes "[Senhor Irrelevante]";
			mes "Vejo que conseguiu alcan�ar seu objetivo.";
			mes "Meus parab�ns";
			close;
		} else {
			mes "[Senhor Irrelevante]";
			mes "Voc� sabia que na pir�mide fica a Guilda dos Gaturnos?";
			mes "� melhor ficar longe de l�, pois voc� pode ter seus zenys roubados naquele lugar.";
			close;
		}
	} else {
		if (!thiefq) {
			mes "[Senhor Irrelevante]";
			mes "Hora "+(Sex?"um":"uma")+" Aprendiz!";
			mes "J� pensou em se tornar Gaturno?";
			close;
		} else if (thiefq == 1) {
			mes "[Senhor Irrelevante]";
			mes "O que faz aqui?";
			select ("Fui enviad"+(Sex?"o":"a")+" aqui para fazer um teste");
			next;
			mes "[Senhor Irrelevante]";
			mes "A sim, o teste da guilda dos gaturnos.";
			mes "Qual � o seu nome?";
			select (strcharinfo(PC_NAME));
			next;
			mes "[Senhor Irrelevante]";
			mes "Claro seu nome est� aqui nessa lista.";
			mes "Vou te enviar para a fazenda de cogumelos.";
			mes "Lembre-se que voc� deve marcar 25 Pontos adquirindo "+getitemname(Mushroom_Of_Thief_1)+" e "+getitemname(Mushroom_Of_Thief_2);
			mes "Para passar no teste da guilda";
			next;
			mes "[Senhor Irrelevante]";
			mes "Pront"+(Sex?"o":"a")+" para ir?";
			next;
			if (select("Sim, agora mesmo","N�o, preciso fazer algo primeiro") == 1) {
				close2;
				thiefq = 2;
				switch(rand(5)) {
					case 1: warp ("job_thief1",228,106); end;
					case 2: warp ("job_thief1",38,50); end;
					case 3: warp ("job_thief1",66,331); end;
					case 4: warp ("job_thief1",196,331); end;
					case 5: warp ("job_thief1",309,234); end;
				}
			}
			mes "[Senhor Irrelevante]";
			mes "Est� bem volte quando desejar.";
			thiefq = 2;
			close;
		} else if (thiefq == 2) {
			mes "[Senhor Irrelevante]";
			mes "Voc� voltou, pront"+(Sex?"o":"a")+" para ir � fazenda de cogumelos?";
			next;
			if (select("Sim, agora mesmo","Agora n�o") == 1) {
				close2;
				switch(rand(5)) {
					case 1: warp ("job_thief1",228,106); end;
					case 2: warp ("job_thief1",38,50); end;
					case 3: warp ("job_thief1",66,331); end;
					case 4: warp ("job_thief1",196,331); end;
					case 5: warp ("job_thief1",309,234); end;
				}
			}
		} else if (thiefq == 3) {
			mes "[Senhor Irrelevante]";
			mes "Voc� passou em nos requisitos necess�rios para se Gaturno.";
			mes "Parab�ns";
			close;
		}
	}
}

moc_prydb1,42,133,2	script	Camarada#thiefq	2_M_THIEFMASTER,{
	if (!thiefq) {
		mes "[Brad]";
		mes "Me pergunto porque as pessoas s�o tolas em vir em um lugar como esse.";
		close;
	} else if (thiefq == 1) {
		mes "[Brad]";
		mes "Voc� ent�o quer se tornar Gaturno n�o � mesmo?";
		mes "E por acaso sabe onde encontrar o Senhor Irrelevante?";
		next;
		if (select("Claro que sei","N�o, poderia me levar at� l�?") == 1) {
			mes "[Brad]";
			mes "Certo, certo...";
			mes "Voc� me parece uma pessoa esperta.";
			close;
		}
		mes "[Brad]";
		mes "N�o deveria fazer isso, mas gostei de voc�.";
		mes "Posso sim ter enviar agora mesmo para l�.";
		mes "Deseja ir agora?";
		next;
		if (select("Sim, por favor","N�o, eu chego l� s� mesmo") == 2) {
			mes "[Brad]";
			mes "Certo, certo...";
			mes "Voc� me parece uma pessoa esperta.";
			close;
		}
		close2;
		warp ("moc_ruins",145,125);
		end;
	} else if (thiefq == 2) {
		mes "[Brad]";
		mes "Voc� denovo?!";
		if (!countitem(Mushroom_Of_Thief_1) || !countitem(Mushroom_Of_Thief_2)) {
			mes "N�o deberia est� pegando cogumelos?";
			close;
		} else {
			mes "Hunmmmm...";
			mes "Agora voc� trouxe algo consigo n�o �?";
			next;
			mes "[Brad]";
			mes "Deixe me ver...";
			.@MushroomTh1 = countitem(Mushroom_Of_Thief_1) * 3;
			.@MushroomTh2 = countitem(Mushroom_Of_Thief_2);
			.@MushroomTh3 = countitem(Mushroom_Of_Thief_1) + countitem(Mushroom_Of_Thief_2);
			if (countitem(Mushroom_Of_Thief_1)) {
				mes countitem(Mushroom_Of_Thief_1)+" "+getitemname(Mushroom_Of_Thief_1)+" s�o "+.@MushroomTh1+" pontos.";
			}
			if (countitem(Mushroom_Of_Thief_2)) {
				mes countitem(Mushroom_Of_Thief_2)+" "+getitemname(Mushroom_Of_Thief_2)+" s�o "+.@MushroomTh2+" pontos.";
			}
			next;
			mes "[Brad]";
			if (.@MushroomTh3 < 25) {
				mes "Sua pontua��o � muito baixa.";
				mes "Voc� dever� voltar a planta��o e pegar mais cogumelos.";
				close;
			} else if (.@MushroomTh3 >= 25) {
				mes "�timo!";
				mes "Voc� fez ^ff0000"+ .@MushroomTh3 +"^000000 Pontos.";
				mes "Com isso voc� passa no teste.";
				if (countitem(Mushroom_Of_Thief_1)) { delitem(Mushroom_Of_Thief_1, countitem(Mushroom_Of_Thief_1)); }
				if (countitem(Mushroom_Of_Thief_2)) { delitem(Mushroom_Of_Thief_2, countitem(Mushroom_Of_Thief_2)); }
				next;
				mes "[Brad]";
				mes "Desmostrou que merece ser membro da nossa guilda";
				mes "Mas antes de oficializar isso tenho que lhe perguntar.";
				next;
				mes "[Brad]";
				mes "� isso mesmo que deseja?";
				mes "Porque se virar Gaturno agora, n�o vai poder escolher outra classe.";
				mes "Mas gaturnos podem ser tornar Arruaceiros ou Mercen�rios";
				next;
				if (select("Quero ser Gaturno agora mesmo","Vou pensar mais no assunto") == 1) {
					mes "[Brad]";
					mes "Ent�o de agora em diante voc� � membro da guilda dos gaturnos.";
					completequest (1013);
					jobchange (Job_Thief);
					getitem (N_Main_Gauche,1);
					callfunc ("ClearJobVar");
					close;
				}
				mes "[Brad]";
				mes "Tudo bem, quando se decidir volte a me procurar.";
				completequest(1013);
				thiefq = 3;
				close;
			}
		}
	} else if (thiefq == 3) {
		mes "[Brad]";
		mes "Ent�o j� se decidiu?";
		mes "Quer se tornar "+(Sex?"um Gaturno":"uma Gaturna")+"?";
		next;
		if (select("Sim","N�o") == 1) {
			mes "[Brad]";
			mes "Ent�o de agora em diante voc� � membro da guilda dos gaturnos.";
			jobchange (Job_Thief);
			getitem (N_Main_Gauche,1);
			callfunc ("ClearJobVar");
			close;
		}
		mes "[Brad]";
		mes "Tudo bem, quando se decidir volte a me procurar.";
		close;
	}
}
