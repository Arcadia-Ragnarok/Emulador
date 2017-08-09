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
| - Nota: Quest de Mudança de Classe para Gaturno.                  |
\*-----------------------------------------------------------------*/

moc_prydb1,39,129,2	script	Gatuna Ajudante#thiefq	1_F_04,{
	if (BaseJob != Job_Novice) {
		if (BaseJob == Job_Thief) {
			mes "[Gatuna Ajudante]";
			mes "No momento a guilda não tem qualquer missão para você agora.";
			close;
		} else {
			mes "[Gatuna]";
			mes "O que faz você aqui?";
			mes "Por acaso está tentando ser roubad"+(Sex?"o":"a")+"?";
			next;
			mes "[Gatuna]";
			mes "É melhor você sair daqui o mais rápido o possível, este local é a guilda dos gaturnos.";
			mes "Então não nos responsabilizamos se ter sua carteira afanada!";
			close;
		}
	} else {
		if (!thiefq) {
			mes "[Gatuna Ajudante]";
			mes "Garotinh"+(Sex?"o":"a")+", está aqui porque eim?...";
			if (getskilllv ("NV_BASIC") < 9) {
				mes "Deveria aprender as habilidades básicas antes de se aventurar por locais como esse.";
				close;
			} else {
				mes "Não sabe que esse lugar é a Guilda dos Gaturnos?";
				next;
				switch(select("Estou aqui para ser Gaturno","Só estou de passagem","Fale-me sobre o teste")) {
					case 1:
					mes "[Gatuna Ajudante]";
					mes "O que faz pensar que pode ser "+(Sex?"um Gaturno":"uma Gaturna")+"?";
					mes "Está bem, assine seu nome nesse formulário.";
					next;
					if (select("Assinar","Cancelar inscrição") == 1) {
						mes "[Gatuna Ajudante]";
						mes "Hunnn... "+strcharinfo(PC_NAME)+"?";
						mes "Que tipo de nome estranho é esse?";
						next;
						mes "[Gatuna Ajudante]";
						mes "Então que comece seu teste.";
						mes "Vá para fora da Pirâmide e procure pelo^0066ff Senhor Irrelevante ^000000.";
						mes "Ele lhe guiará até a plantação de cogumelos.";
						thiefq = 1;
						setquest (1013);
						close;
					}
					mes "[Gatuna Ajudante]";
					mes "Desistiu?";
					mes "Algo me dizia que você era mesmo covarde.";
					close;
					case 2:
					mes "[Gatuna Ajudante]";
					mes "Então é melhor você sair daqui o mais rápido o possível, este local é a guilda dos gaturnos.";
					mes "Então não nos responsabilizamos se ter sua carteira afanada!";
					close;
					case 3:
					mes "[Gatuna Ajudante]";
					mes "Jovens Aprendizes assim como você, podem ser tornar gaturnos ao realizar os teste de nossa guilda";
					mes "Gaturnos devem ser ótimos em adquirir as coisas";
					next;
					mes "[Gatuna Ajudante]";
					mes "Nosso teste mede a capacidade de se infiltrar e roubar itens";
					mes "O candidato do teste deve roubar 2 tipos de cogumelos";
					mes "Cada tipo de cogumelo vale uma pontuação:";
					next;
					mes "[Gatuna Ajudante]";
					mes getitemname(Mushroom_Of_Thief_1) + " vale 3 pontos cada.";
					mes getitemname(Mushroom_Of_Thief_2) + " vale 1 ponto cada.";
					mes "O objetivo final é marcar 25 pontos, na soma de todos pontos.";
					next;
					mes "[Gatuna Ajudante]";
					mes "Basta ir á fazenda de cogumelos e conseguir essa pontuação.";
					close;
				}
			}
		} else if (thiefq) {
			if (job_thief_q == 2 && countitem(Mushroom_Of_Thief_1) > 0 || countitem(Mushroom_Of_Thief_2) > 0) {
				mes "[Gatuna Ajudante]";
				mes "Você enfim voltou";
				mes "Como foi lá na plantação de cogumelos?";
				next;
				switch (select("Foi moleza","Aquele lugar é horrível!")) {
					case 1:
					mes "[Gatuna Ajudante]";
					mes "Se achou essa tafera fácil, sem dúviadas será "+(Sex?"um ótimo Gaturno":"uma ótima Gatuna");
					break;
					case 2:
					mes "[Gatuna Ajudante]";
					mes "Entendo, mas você já deveria saber que gaturnos não tem uma vida fácil e glamurosa.";
					break;
				}
				next;
				mes "[Gatuna Ajudante]";
				mes "Vê aquele sujeito ali?";
				mes "Leve os cogumelos para ele.";
				next;
				mes "[Gatuna Ajudante]";
				mes "Seu teste continua com ele, quando conferir os que você trouxe";
				close;
			} else if (thiefq == 3) {
				mes "[Gatuna Ajudante]";
				mes "Você veio aqui para se tornar "+(Sex?"um Gaturno":"uma Gaturna")+"?";
				mes "E o que está pensando ainda?";
				close;
			} else {
				mes "[Gatuna Ajudante]";
				mes "O que ainda faz aqui?!";
				mes "Procure pelo^777777 Senhor Irrelevante^000000 do lado de fora da Pirâmide";
				mes "Ele vai lhe guiar até a plantação de cogumelos";
				next;
				if (select("Fale-me sobre o teste","Sair") == 1) {
					mes "[Gatuna Ajudante]";
					mes "Nosso teste mede a capacidade de se infiltrar e roubar itens.";
					mes "O candidato do teste deve roubar 2 tipos de cogumelos.";
					mes "Cada tipo de cogumelo vale uma pontuação:";
					next;
					mes "[Gatuna Ajudante]";
					mes getitemname(Mushroom_Of_Thief_1) + " vale 3 pontos cada.";
					mes getitemname(Mushroom_Of_Thief_2) + " vale 1 ponto cada.";
					mes "O objetivo final é marcar 25 pontos, na soma de todos pontos.";
					next;
					mes "[Gatuna Ajudante]";
					mes "Basta ir á fazenda de cogumelos e conseguir essa pontuação.";
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
			mes "Eu me lembro de você";
			mes "Você é "+(Sex?"aquele":"aquela")+ "Aprendiz que veio até aqui para ser tornar Gaturno";
			next;
			mes "[Senhor Irrelevante]";
			mes "Vejo que conseguiu alcançar seu objetivo.";
			mes "Meus parabéns";
			close;
		} else {
			mes "[Senhor Irrelevante]";
			mes "Você sabia que na pirâmide fica a Guilda dos Gaturnos?";
			mes "É melhor ficar longe de lá, pois você pode ter seus zenys roubados naquele lugar.";
			close;
		}
	} else {
		if (!thiefq) {
			mes "[Senhor Irrelevante]";
			mes "Hora "+(Sex?"um":"uma")+" Aprendiz!";
			mes "Já pensou em se tornar Gaturno?";
			close;
		} else if (thiefq == 1) {
			mes "[Senhor Irrelevante]";
			mes "O que faz aqui?";
			select ("Fui enviad"+(Sex?"o":"a")+" aqui para fazer um teste");
			next;
			mes "[Senhor Irrelevante]";
			mes "A sim, o teste da guilda dos gaturnos.";
			mes "Qual é o seu nome?";
			select (strcharinfo(PC_NAME));
			next;
			mes "[Senhor Irrelevante]";
			mes "Claro seu nome está aqui nessa lista.";
			mes "Vou te enviar para a fazenda de cogumelos.";
			mes "Lembre-se que você deve marcar 25 Pontos adquirindo "+getitemname(Mushroom_Of_Thief_1)+" e "+getitemname(Mushroom_Of_Thief_2);
			mes "Para passar no teste da guilda";
			next;
			mes "[Senhor Irrelevante]";
			mes "Pront"+(Sex?"o":"a")+" para ir?";
			next;
			if (select("Sim, agora mesmo","Não, preciso fazer algo primeiro") == 1) {
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
			mes "Está bem volte quando desejar.";
			thiefq = 2;
			close;
		} else if (thiefq == 2) {
			mes "[Senhor Irrelevante]";
			mes "Você voltou, pront"+(Sex?"o":"a")+" para ir á fazenda de cogumelos?";
			next;
			if (select("Sim, agora mesmo","Agora não") == 1) {
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
			mes "Você passou em nos requisitos necessários para se Gaturno.";
			mes "Parabéns";
			close;
		}
	}
}

moc_prydb1,42,133,2	script	Camarada#thiefq	2_M_THIEFMASTER,{
	if (!thiefq) {
		mes "[Brad]";
		mes "Me pergunto porque as pessoas são tolas em vir em um lugar como esse.";
		close;
	} else if (thiefq == 1) {
		mes "[Brad]";
		mes "Você então quer se tornar Gaturno não é mesmo?";
		mes "E por acaso sabe onde encontrar o Senhor Irrelevante?";
		next;
		if (select("Claro que sei","Não, poderia me levar até lá?") == 1) {
			mes "[Brad]";
			mes "Certo, certo...";
			mes "Você me parece uma pessoa esperta.";
			close;
		}
		mes "[Brad]";
		mes "Não deveria fazer isso, mas gostei de você.";
		mes "Posso sim ter enviar agora mesmo para lá.";
		mes "Deseja ir agora?";
		next;
		if (select("Sim, por favor","Não, eu chego lá só mesmo") == 2) {
			mes "[Brad]";
			mes "Certo, certo...";
			mes "Você me parece uma pessoa esperta.";
			close;
		}
		close2;
		warp ("moc_ruins",145,125);
		end;
	} else if (thiefq == 2) {
		mes "[Brad]";
		mes "Você denovo?!";
		if (!countitem(Mushroom_Of_Thief_1) || !countitem(Mushroom_Of_Thief_2)) {
			mes "Não deberia está pegando cogumelos?";
			close;
		} else {
			mes "Hunmmmm...";
			mes "Agora você trouxe algo consigo não é?";
			next;
			mes "[Brad]";
			mes "Deixe me ver...";
			.@MushroomTh1 = countitem(Mushroom_Of_Thief_1) * 3;
			.@MushroomTh2 = countitem(Mushroom_Of_Thief_2);
			.@MushroomTh3 = countitem(Mushroom_Of_Thief_1) + countitem(Mushroom_Of_Thief_2);
			if (countitem(Mushroom_Of_Thief_1)) {
				mes countitem(Mushroom_Of_Thief_1)+" "+getitemname(Mushroom_Of_Thief_1)+" são "+.@MushroomTh1+" pontos.";
			}
			if (countitem(Mushroom_Of_Thief_2)) {
				mes countitem(Mushroom_Of_Thief_2)+" "+getitemname(Mushroom_Of_Thief_2)+" são "+.@MushroomTh2+" pontos.";
			}
			next;
			mes "[Brad]";
			if (.@MushroomTh3 < 25) {
				mes "Sua pontuação é muito baixa.";
				mes "Você deverá voltar a plantação e pegar mais cogumelos.";
				close;
			} else if (.@MushroomTh3 >= 25) {
				mes "Ótimo!";
				mes "Você fez ^ff0000"+ .@MushroomTh3 +"^000000 Pontos.";
				mes "Com isso você passa no teste.";
				if (countitem(Mushroom_Of_Thief_1)) { delitem(Mushroom_Of_Thief_1, countitem(Mushroom_Of_Thief_1)); }
				if (countitem(Mushroom_Of_Thief_2)) { delitem(Mushroom_Of_Thief_2, countitem(Mushroom_Of_Thief_2)); }
				next;
				mes "[Brad]";
				mes "Desmostrou que merece ser membro da nossa guilda";
				mes "Mas antes de oficializar isso tenho que lhe perguntar.";
				next;
				mes "[Brad]";
				mes "É isso mesmo que deseja?";
				mes "Porque se virar Gaturno agora, não vai poder escolher outra classe.";
				mes "Mas gaturnos podem ser tornar Arruaceiros ou Mercenários";
				next;
				if (select("Quero ser Gaturno agora mesmo","Vou pensar mais no assunto") == 1) {
					mes "[Brad]";
					mes "Então de agora em diante você é membro da guilda dos gaturnos.";
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
		mes "Então já se decidiu?";
		mes "Quer se tornar "+(Sex?"um Gaturno":"uma Gaturna")+"?";
		next;
		if (select("Sim","Não") == 1) {
			mes "[Brad]";
			mes "Então de agora em diante você é membro da guilda dos gaturnos.";
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
