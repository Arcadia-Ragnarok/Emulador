/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Gerentes nos castelos da primeira edição de Guerra do     |
|         Império.                                                  |
\*-----------------------------------------------------------------*/

-	script	Castle Manager#cm::cm	FAKE_NPC,{

	.@GID = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),1);

	// .@guardiantype = Define os tipos de guardiões por base dos castelos.
	// 1 - Guardião Soldado, 2 - Guardião Arqueiro, 3 - Guardião Espadachim
	// .@guardianposx = Define o ponto x de invocação de cada guardião.
	// [0] = Ponto x do 1º guardião invocado.
	// .@guardianposy = Define o ponto y de invocação de cada guardião.
	// [0] = Ponto y do 1º guardião invocado.
	// .@masterroom = Define as coordenadas da Sala do Tesouro.
	if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas01") {
		setarray(.@guardiantype[0],1,2,2,2,2,3,3,3);
		setarray(.@guardianposx[0],17,39,38,45,21,218,213,73);
		setarray(.@guardianposy[0],218,208,196,228,194,24,24,70);
		setarray(.@masterroom[0],113,223);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas02") {
		setarray(.@guardiantype[0],3,3,3,1,1,2,2,2);
		setarray(.@guardianposx[0],27,88,117,60,51,21,36,210);
		setarray(.@guardianposy[0],184,43,46,202,183,177,183,7);
		setarray(.@masterroom[0],134,225);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas03") {
		setarray(.@guardiantype[0],3,3,1,1,1,2,2,2);
		setarray(.@guardianposx[0],90,116,86,116,64,212,195,110);
		setarray(.@guardianposy[0],112,112,120,76,103,160,151,217);
		setarray(.@masterroom[0],229,267);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas04") {
		setarray(.@guardiantype[0],2,2,2,1,1,1,3,3);
		setarray(.@guardianposx[0],187,192,148,145,169,198,48,55);
		setarray(.@guardianposy[0],100,42,88,209,53,77,72,88);
		setarray(.@masterroom[0],83,17);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas05") {
		setarray(.@guardiantype[0],2,2,1,1,3,3,3,3);
		setarray(.@guardianposx[0],51,188,157,157,27,145,156,41);
		setarray(.@guardianposy[0],202,79,192,74,221,78,73,112);
		setarray(.@masterroom[0],64,8);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas01") {
		setarray(.@guardiantype[0],1,1,1,2,2,3,3,3);
		setarray(.@guardianposx[0],67,184,62,36,50,50,189,200);
		setarray(.@guardianposy[0],179,20,41,186,186,67,41,167);
		setarray(.@masterroom[0],152,117);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas02") {
		setarray(.@guardiantype[0],1,1,1,2,2,3,3,3);
		setarray(.@guardianposx[0],64,56,166,35,20,19,166,159);
		setarray(.@guardianposy[0],168,41,25,148,150,41,42,188);
		setarray(.@masterroom[0],145,115);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas03") {
		setarray(.@guardiantype[0],2,2,1,1,1,3,3,3);
		setarray(.@guardianposx[0],48,113,48,157,243,157,234,238);
		setarray(.@guardianposy[0],176,214,207,62,41,45,25,160);
		setarray(.@masterroom[0],275,289);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas04") {
		setarray(.@guardiantype[0],2,2,1,1,1,3,3,3);
		setarray(.@guardianposx[0],53,31,49,29,147,57,160,148);
		setarray(.@guardianposy[0],191,178,220,46,65,46,50,189);
		setarray(.@masterroom[0],116,123);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas05") {
		setarray(.@guardiantype[0],2,2,1,1,1,3,3,3);
		setarray(.@guardianposx[0],45,71,72,66,177,66,177,193);
		setarray(.@guardianposy[0],149,163,142,47,50,17,35,166);
		setarray(.@masterroom[0],149,106);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas01") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],229,225,222,99,65,36,51,138);
		setarray(.@guardianposy[0],92,80,111,45,31,127,144,133);
		setarray(.@masterroom[0],295,8);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas02") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],237,228,210,57,42,287,264,27);
		setarray(.@guardianposy[0],54,72,41,241,241,257,272,20);
		setarray(.@masterroom[0],141,149);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas03") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],245,269,36,41,39,19,37,268);
		setarray(.@guardianposy[0],37,51,39,39,65,276,277,244);
		setarray(.@masterroom[0],163,167);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas04") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],251,232,231,32,32,35,36,270);
		setarray(.@guardianposy[0],212,212,175,287,232,45,17,41);
		setarray(.@masterroom[0],151,47);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas05") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],19,33,266,266,263,263,250,36);
		setarray(.@guardianposy[0],279,260,234,279,37,21,22,36);
		setarray(.@masterroom[0],153,137);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas01") {
		setarray(.@guardiantype[0],1,1,1,2,2,3,3,3);
		setarray(.@guardianposx[0],182,182,153,59,50,184,196,107);
		setarray(.@guardianposy[0],62,116,86,28,36,183,189,179);
		setarray(.@masterroom[0],15,209);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas02") {
		setarray(.@guardiantype[0],3,3,3,1,1,2,2,2);
		setarray(.@guardianposx[0],161,153,178,71,49,64,7,75);
		setarray(.@guardianposy[0],161,161,44,75,28,186,196,175);
		setarray(.@masterroom[0],207,229);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas03") {
		setarray(.@guardiantype[0],3,3,3,1,1,2,2,2);
		setarray(.@guardianposx[0],191,137,45,50,41,191,179,191);
		setarray(.@guardianposy[0],190,190,99,87,87,42,43,72);
		setarray(.@masterroom[0],190,130);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas04") {
		setarray(.@guardiantype[0],3,3,3,1,1,1,2,2);
		setarray(.@guardianposx[0],276,274,246,38,29,33,78,36);
		setarray(.@guardianposy[0],14,35,246,240,240,258,48,61);
		setarray(.@masterroom[0],275,160);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas05") {
		setarray(.@guardiantype[0],3,3,3,1,1,1,2,2);
		setarray(.@guardianposx[0],266,287,245,236,251,278,32,44);
		setarray(.@guardianposy[0],262,280,250,63,63,253,253,248);
		setarray(.@masterroom[0],281,176);
	}

	if (.@GID == 0) {
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Estou aguardando um mestre para cumprir meu destino.";
		mes "Que as almas valentes... lhe guie em seu futuro...";
		close;
	} else if (getguildmaster(.@GID) != strcharinfo(CHAR_NAME)) {
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Não importa o quanto você vai me incomodar, eu ainda vou seguir o mestre: ^ff0000"+getguildmaster(.@GID)+"^000000.";
		mes "Não importa quanto você me importuna, eu ainda seguirei meu mestre^ff0000"+getguildmaster(.@GID)+"^000000.";
		mes "Onde estão os Guardiões?!";
		mes "Expulsem ess"+(Sex?"e intruso":"a intrusa")+" daqui!";
		close;
	} else {
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Bem vindo"+(Sex == SEX_MALE ?"o":"a")+" mestre, ^ff0000"+strcharinfo(CHAR_NAME)+"^000000...";
		mes "Seu humilde servo, "+strnpcinfo(NPC_NAME_VISIBLE)+", está aqui para lhe atender.";
		next;
		switch (select("Instruções do castelo","Investir no Crescimento Comercial","Investir nas Defesas do Castelo","Convocar Guardiões","Contrato com a Cop. Kafra","Ir para sala do mestre")) {
			case 1:
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Mestre, vou relatar as informações do castelo.";
			mes " ";
			mes "^0000ffAgora, o nível de Crescimento Comercial é de "+getcastledata(strnpcinfo(NPC_NAME_HIDDEN),2)+".";
			if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),4)) {
				mes " Você investiu "+getcastledata(strnpcinfo(NPC_NAME_HIDDEN),4)+" vezes no último dia.";
			}
			mes "Agora, o nível de Defesa do Castelo é de "+getcastledata(strnpcinfo(NPC_NAME_HIDDEN),3)+".^000000";
			if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),5)) {
				mes "^0000ff- Você investiu "+getcastledata(strnpcinfo(NPC_NAME_HIDDEN),5)+" vezes no último dia.^000000";
			}
			mes " ";
			mes "Mestre, isso é tudo que tenho para relatar.";
			close;
			case 2:
			.@Economy = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),2);
			if (.@Economy < 6) { .@eco_invest = 5000; }
			else if ((.@Economy >= 6) && (.@Economy <= 10)) { .@eco_invest = 10000; }
			else if ((.@Economy >= 11) && (.@Economy <= 15)) { .@eco_invest = 20000; }
			else if ((.@Economy >= 16) && (.@Economy <= 20)) { .@eco_invest = 35000; }
			else if ((.@Economy >= 21) && (.@Economy <= 25)) { .@eco_invest = 55000; }
			else if ((.@Economy >= 26) && (.@Economy <= 30)) { .@eco_invest = 80000; }
			else if ((.@Economy >= 31) && (.@Economy <= 35)) { .@eco_invest = 110000; }
			else if ((.@Economy >= 36) && (.@Economy <= 40)) { .@eco_invest = 145000; }
			else if ((.@Economy >= 41) && (.@Economy <= 45)) { .@eco_invest = 185000; }
			else if ((.@Economy >= 46) && (.@Economy <= 50)) { .@eco_invest = 230000; }
			else if ((.@Economy >= 51) && (.@Economy <= 55)) { .@eco_invest = 280000; }
			else if ((.@Economy >= 56) && (.@Economy <= 60)) { .@eco_invest = 335000; }
			else if ((.@Economy >= 61) && (.@Economy <= 65)) { .@eco_invest = 395000; }
			else if ((.@Economy >= 66) && (.@Economy <= 70)) { .@eco_invest = 460000; }
			else if ((.@Economy >= 71) && (.@Economy <= 75)) { .@eco_invest = 530000; }
			else if ((.@Economy >= 76) && (.@Economy <= 80)) { .@eco_invest = 605000; }
			else if ((.@Economy >= 81) && (.@Economy <= 85)) { .@eco_invest = 685000; }
			else if ((.@Economy >= 86) && (.@Economy <= 90)) { .@eco_invest = 770000; }
			else if ((.@Economy >= 91) && (.@Economy <= 95)) { .@eco_invest = 860000; }
			else if ((.@Economy >= 96) && (.@Economy <= 100)) { .@eco_invest = 955000; }
			//Quadruplica o custo de investimento, se você já investiu uma vez.
			if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),4)) {
				.@eco_invest *= 4;
			}
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Toda vez que você investe em crescimento comercial, a quantidade de bens produzido pelo clã aumentará.";
			mes "Investimentos serão uma necessidade, você deve considerar isso para o nosso futuro.";
			mes " ";
			mes "Inicialmente, você pode investir uma vez, mas se você pagar mais dinheiro, você poderá investir até duas vezes.";
			if (.@Economy >= 100) {
				mes " ";
				mes "^ff0000O nível de crescimento comercial de nosso Castelo está em 100%.";
				mes "De nenhum investimento mais é preciso.";
				mes "É dessa maneira que esperei que fosse de um grande economista como você, Mestre.^000000";
				close;
			} else if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),4) >= 2) {
				mes " ";
				mes "^ff0000Você já investiu duas vezes no crescimento comercial hoje.";
				mes "E não pode investir mais por enquanto.^000000";
				mes "Espero que as riquezas do Clã creça em um ritimo acelerado.";
				close;
			} else if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),4) == 0) {
				mes " ";
				mes "O custo total do investimento necessário atual é de ^ff0000"+.@eco_invest+"^000000 Zeny.";
				mes "Você vai investir?";
			} else {
				mes " ";
				mes "Você já investiu uma vez hoje...";
				mes "Se deseja investir mais, uma vez, será nescessário mais ^ff0000"+.@eco_invest+"^000000 Zeny.";
			}
			next;
			switch (select("Investir no crescimento","Cancelar")) {
				case 1:
				if (Zeny < .@eco_invest) {
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Me desculpe, mas não há Zeny suficiente para investir.";
					mes "Você pode tentar novamente quando tiver mais fundos.";
					close;
				} else {
					Zeny -= .@eco_invest;
					setcastledata(strnpcinfo(NPC_NAME_HIDDEN),4,getcastledata(strnpcinfo(NPC_NAME_HIDDEN),4)+1);
					mes "[ "+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Nós terminamos o investimento seguramente.";
					mes "Eu espero que nosso nível de crescimento seja aumentado até amanhã.";
					close;
				}
				case 2:
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Meu mestre, vou fazer como você solicita...";
				mes "Não há presa. Sei que faremos sempre o melhor.";
				close;
			}
			case 3:
			.@defence = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),3);
			if (.@defence < 6) { .@def_invest = 10000; }
			else if ((.@defence >= 6) && (.@defence <= 10)) { .@def_invest = 20000; }
			else if ((.@defence >= 11) && (.@defence <= 15)) { .@def_invest = 40000; }
			else if ((.@defence >= 16) && (.@defence <= 20)) { .@def_invest = 70000; }
			else if ((.@defence >= 21) && (.@defence <= 25)) { .@def_invest = 110000; }
			else if ((.@defence >= 26) && (.@defence <= 30)) { .@def_invest = 160000; }
			else if ((.@defence >= 31) && (.@defence <= 35)) { .@def_invest = 220000; }
			else if ((.@defence >= 36) && (.@defence <= 40)) { .@def_invest = 290000; }
			else if ((.@defence >= 41) && (.@defence <= 45)) { .@def_invest = 370000; }
			else if ((.@defence >= 46) && (.@defence <= 50)) { .@def_invest = 460000; }
			else if ((.@defence >= 51) && (.@defence <= 55)) { .@def_invest = 560000; }
			else if ((.@defence >= 56) && (.@defence <= 60)) { .@def_invest = 670000; }
			else if ((.@defence >= 61) && (.@defence <= 65)) { .@def_invest = 790000; }
			else if ((.@defence >= 66) && (.@defence <= 70)) { .@def_invest = 920000; }
			else if ((.@defence >= 71) && (.@defence <= 75)) { .@def_invest = 1060000; }
			else if ((.@defence >= 76) && (.@defence <= 80)) { .@def_invest = 1210000; }
			else if ((.@defence >= 81) && (.@defence <= 85)) { .@def_invest = 1370000; }
			else if ((.@defence >= 86) && (.@defence <= 90)) { .@def_invest = 1540000; }
			else if ((.@defence >= 91) && (.@defence <= 95)) { .@def_invest = 1720000; }
			else if ((.@defence >= 96) && (.@defence <= 100)) { .@def_invest = 1910000; }
			//Quadruplica o custo de investimento, se você já investiu uma vez.
			if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),5)) {
				.@def_invest *= 4;
			}
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Se você investir nas defesas do Castelo, a durabilidade dos Guardiões e Emperium vão aumentar.";
			mes "Então, Se você considerar as batalhas que estão por vir, algum investimento nesta área será necessário.";
			mes " ";
			mes "Inicialmente, você pode investir uma vez, mas se você pagar mais dinheiro, você poderá investir até duas vezes.";
			if (.@defence >= 100) {
				mes " ";
				mes "^ff0000O nível de Defesa de nosso Castelo está em 100%.";
				mes "De nenhum investimento a mais é preciso.";
				mes "Foi assim que eu esperei de um grande estrategista como você, Mestre.^000000";
				close;
			} else if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),5) >= 2) {
				mes " ";
				mes "^ff0000Você já investiu duas vezes hoje.";
				mes "Você não pode fazer qualquer investimento a mais por enquanto.^000000";
				mes "Eu espero que as Defesas do nosso clã cresçam bem.";
				close;
			} else if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),5) == 0) {
				mes " ";
				mes "O custo de investimento atual é de ^ff0000"+.@def_invest+"^000000 Zeny.";
				mes "Você vai investir?";
			} else {
				mes " ";
				mes "Você já fez um investimento joje...";
				mes "Se investir mais uma vez será necessário mais ^ff0000"+.@def_invest+"^000000 Zenys.";
			}
			next;
			switch (select("Investir na Defesa","Cancelar")) {
				case 1:
				if (Zeny < .@def_invest) {
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Eu sinto muito mas não há zenys o bastante para investir.";
					mes "Você pode tentar novamente quando tiver mais fundos, Mestre.";
					close;
				} else {
					Zeny -= .@def_invest;
					setcastledata(strnpcinfo(NPC_NAME_HIDDEN),5,getcastledata(strnpcinfo(NPC_NAME_HIDDEN),5)+1);
					mes "[ "+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Nós terminamos o investimento com sucesso.";
					mes "Eu espero que nosso nível de Defesa do Castelo seja aumentado até amanhã.";
					close;
				}
				case 2:
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Meu mestre, vou fazer como você solicita...";
				mes "Não há presa. Sei que faremos sempre o melhor.";
				close;
			}
			case 4:
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Você quer convocar um guardião?";
			mes "Será um protetor leal para nos defender.";
			mes "Por favor selecione um guardião para nos defender.";
			next;
			for (.@i = 0; .@i <= 7; ++.@i) {
				if (.@guardiantype[.@i] == 1) { .@type$ = "Guardião Soldado"; }
				else if (.@guardiantype[.@i] == 2) { .@type$ = "Guardião Arqueiro"; }
				else { .@type$ = "Guardião Cavaleiro"; }
				if (guardianinfo(strnpcinfo(NPC_NAME_HIDDEN),.@i,0)) {
					setarray(.@gname$[.@i], .@type$+" - Implementado ("+guardianinfo(strnpcinfo(NPC_NAME_HIDDEN),.@i,2)+"/"+guardianinfo(strnpcinfo(NPC_NAME_HIDDEN),.@i,1)+")");
				} else {
					setarray(.@gname$[.@i], .@type$+" - Não Implementado");
				}
			}
			.@GDnum = select(.@gname$[0]+":"+.@gname$[1]+":"+.@gname$[2]+":"+.@gname$[3]+":"+.@gname$[4]+":"+.@gname$[5]+":"+.@gname$[6]+":"+.@gname$[7])+9;
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Você deseja convocar outro guardião?";
			mes "Serão necessários mais 10,000 zenys.";
			next;
			switch (select("Convocar","Cancelar")) {
				case 1:
				if (getgdskilllv(.@GID,10002) == 0) {
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Mestre, nós não temos os recursos para Chamar o Guardião.";
					mes "Se você quiser acumula-los, você tem que aprender a habilidade \"Comandar Guardiões\".";
					mes "Por isso não foi possível convocar o Guardião.";
					close;
				} else if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),.@GDnum) == 1) {
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Mestre, você já convocou esse Guardião.";
					mes "Não podemos convocar outro.";
					close;
				} else if (Zeny < 10000) {
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Bem...";
					mes "Sinto muito, mas não temos recursos para convocar o Guardião.";
					mes "Por isso não foi possível convocar o Guardião.";
					close;
				} else {
					Zeny -= 10000;
					setcastledata(strnpcinfo(NPC_NAME_HIDDEN),.@GDnum,1); // Marca como 'instalado' o Guardião
					.@UseGID = .@GDnum - 10;
					if (.@guardiantype[.@UseGID] == 1) { .@type = 1287; }
					else if (.@guardiantype[.@UseGID] == 2) { .@type = 1285; }
					else { .@type = 1286; }
					guardian(strnpcinfo(NPC_NAME_HIDDEN),.@guardianposx[.@UseGID],.@guardianposy[.@UseGID],strmobinfo(2,.@type),.@type,"Guardião#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnGuardianDied",.@UseGID);
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Completamos a convocação do Guardião.";
					mes "Nossas defesas serão reforçadas com ele.";
					close;
				}
				case 2:
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Eu fiz como você ordenou.";
				mes "Mas por favor se lembre caso tenha dinheiro para poupado, será melhor covocar-lo.";
				close;
			}
			case 5:
			if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),9) == 1) {
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "No momento contratamos uma Funcionária Kafra...";
				mes "Deseja demitir a Funcionária Kafra?";
				next;
				switch (select("Demitir","Cancelar")) {
					case 1:
					cutin "kafra_01",2;
					mes "[Funcionária Kafra]";
					mes "Eu trabalhei tão duro... Como você pode fazer isso, Mestre?...";
					mes "Por favor...";
					mes "Reconsidere...";
					mes "Me dê outra chance, Mastre... Por favor...";
					next;
					switch (select("Demitir","Cancelar")) {
						case 1:
						mes "[Funcionária Kafra]";
						mes "Oh, meu deus!";
						mes "Isso é um absurdo!";
						next;
						cutin("",255);
						break;
						case 2:
						mes "[Funcionária Kafra]";
						mes "Eu vou trabalhar duro para você...";
						mes "Obrigado!";
						close;
					}
					break;
					case 2:
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Na minha opnião, ela trabalhou duro.";
					mes "Foi uma boa decisão em mantê-la.";
					close;
				}
				disablenpc("Funcionária Kafra#"+strnpcinfo(NPC_NAME_HIDDEN));
				setcastledata(strnpcinfo(NPC_NAME_HIDDEN),9,0);
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "....";
				mes "Eu despachei a funcionária Kafra...";
				mes "Mas... você está insatisfeito com algo?";
				close;
			}
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Deseja assinar um contrato com a central da Kafra para trazer uma funcionária para nosso castelo?";
			mes "^ff0000 10,000 zenys serão precisos para esses serviço. ";
			next;
			switch (select("Contratar","Cancelar")) {
				case 1:
				if (getgdskilllv(.@GID,10001) == 0) {
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Mestre, nós não podemos contratar uma Funcionária de Kafra porque nós não temos um contrato com o Escritório central de Kafra.";
					mes "Se você quiser obter um contrato com o Escritório central de Kafra, nosso clã precisa aprender a habilidade \"Contato com a Kafra\".";
					close;
				} else if (Zeny < 10000) {
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Bem... eu sinto muito mas nós não temos fundos o bastante para contratar uma Funcionária Kafra.";
					close;
				} else {
					Zeny -= 10000;
					enablenpc("Funcionária Kafra#"+strnpcinfo(NPC_NAME_HIDDEN));
					setcastledata(strnpcinfo(NPC_NAME_HIDDEN),9,1);
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "Nós obtivemos um contrato com o Escritório central de kafra.";
					next;
					cutin("kafra_01",2);
					mes "[Funcionária Kafra]";
					mes "Olá, como você está?";
					mes "Eu fui despachada do Escritório central da Kafra.";
					mes "Farei o meu melhor não manchar a reputação do nosso Clã.";
					next;
					cutin("",255);
					mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
					mes "As condições de Contrato da Funcionária Kafra é de 1 mês e depois deste termo, você precisará pagar uma taxa adicional.";
					mes "Ela será muito útil para nossos membros";
					close;
				}
				case 2:
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Eu fiz como você ordenou, mas alguns de nossos membros não ficarão infelizes.";
				mes "Será melhor contratar uma Funcionária de Kafra o quanto antes.";
				close;
			}
			case 6:
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Você quer visitar o quarto onde nossos tesouros são armazenados?";
			mes "Aquele quarto é restringido a você... você é o único com acesso.";
			next;
			switch (select("Ir para sala do mestre","Cancelar")) {
				case 1:
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Eu lhe mostrarei o caminho secreto.";
				mes "Por favor... siga-me.";
				mes "Quando você quiser voltar para cá, aperte o interruptor secreto.";
				close2;
				warp(strnpcinfo(NPC_NAME_HIDDEN),.@masterroom[0],.@masterroom[1]);
				end;
				case 2:
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Os tesouros são produzidos uma vez por dia... se você não os remove-los a tempo, eles não serão produzidos mais.";
				mes "Então, será melhor se você verificasse eles de vez em quando.";
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
// - [ Duplicações ] -
// ------------------------------------------------------------------
// - Luina
aldeg_cas01,218,175,0	duplicate(cm)	Alfredo#aldeg_cas01	1_M_JOBTESTER
aldeg_cas02,78,74,0	duplicate(cm)	Chenchenlie#aldeg_cas02	1_M_JOBTESTER
aldeg_cas03,110,118,0	duplicate(cm)	Nahzarf#aldeg_cas03	1_M_JOBTESTER
aldeg_cas04,67,116,0	duplicate(cm)	Brymhensen#aldeg_cas04	1_M_JOBTESTER
aldeg_cas05,51,179,0	duplicate(cm)	Esmarehk#aldeg_cas05	1_M_JOBTESTER

// - Britoniah
gefg_cas01,40,48,5	duplicate(cm)	Gnahcher#gefg_cas01	1_M_JOBTESTER
gefg_cas02,12,66,5	duplicate(cm)	Esmarehk#gefg_cas02	1_M_JOBTESTER
gefg_cas03,106,23,5	duplicate(cm)	Jyang#gefg_cas03	1_M_JOBTESTER
gefg_cas04,73,46,3	duplicate(cm)	Kellvahni#gefg_cas04	1_M_JOBTESTER
gefg_cas05,70,52,3	duplicate(cm)	Byohre#gefg_cas05	1_M_JOBTESTER

// - Bosque Celestial
payg_cas01,120,58,4	duplicate(cm)	Kurunnadi#payg_cas01	1_M_JOBTESTER
payg_cas02,22,260,7	duplicate(cm)	Cherieos#payg_cas02	1_M_JOBTESTER
payg_cas03,50,261,3	duplicate(cm)	Gheriot#payg_cas03	1_M_JOBTESTER
payg_cas04,38,284,3	duplicate(cm)	DJ#payg_cas04	1_M_JOBTESTER
payg_cas05,277,249,3	duplicate(cm)	Nahzarf#payg_cas05	1_M_JOBTESTER

// - Valkirias
prtg_cas01,112,181,0	duplicate(cm)	Ahvray#prtg_cas01	1_M_JOBTESTER
prtg_cas02,94,61,4	duplicate(cm)	Roy#prtg_cas02	1_M_JOBTESTER
prtg_cas03,51,100,4	duplicate(cm)	Sttick#prtg_cas03	1_M_JOBTESTER
prtg_cas04,259,265,4	duplicate(cm)	Van Dreth#prtg_cas04	1_M_JOBTESTER
prtg_cas05,36,37,4	duplicate(cm)	Raynor#prtg_cas05	1_M_JOBTESTER
