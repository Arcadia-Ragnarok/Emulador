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
| - Info: Funcionárias da corporação kafra nos castelos da primeira |
|         edição de Guerra do Império.                              |
\*-----------------------------------------------------------------*/

-	script	Funcionária Kafra#woe::guildkafra	FAKE_NPC,{

	.@GID = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),1);

	if (compare(strnpcinfo(NPC_NAME_HIDDEN),"aldeg")) {
		setarray(.@destination$[0],"Al De Baran","aldebaran");
		setarray(.@coordinates[0],132,103);
	} else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"gefg")) {
		setarray(.@destination$[0],"Geffen","geffen");
		setarray(.@coordinates[0],120,39);
	} else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"payg")) {
		setarray(.@destination$[0],"Payon","payon");
		setarray(.@coordinates[0],70,100);
	} else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"prtg")) {
		setarray(.@destination$[0],"Prontera","prontera");
		setarray(.@coordinates[0],278,211);
	}

	cutin("kafra_01",2);
	if (getcharid(CHAR_ID_GUILD) == .@GID) {
		mes "[Funcionária Kafra]";
		mes "Bem vind"+(Sex == SEX_MALE ?"o":"a")+".";
		mes "Membro ^ff0000"+getguildname(.@GID)+"^000000.";
		mes "A Corporação Kafra estará com você aonde quer que vá.";
		next;
		switch (select("Usar Armazém","Usar Serviço de Teleporte","Alugar Carrinho","Cancelar")) {
			case 1:
			if (getskilllv("NV_BASIC") < 6) {
				mes "[Funcionária Kafra]";
				mes "Sinto muito, mas você não tem a Habilidades";
				mes "Básicas Nível 6 de Aprendiz para usar o Serviço de Armazém.";
				close2;
				cutin("",255);
				end;
			} else if (#kafra_code) {
				mes "[Funcionária Kafra]";
				mes "Digite a senha do seu armazém";
				input(.@storagecode);
				next;
				if (.@storagecode != #kafra_code) {
					mes "[Funcionária Kafra]";
					mes "Você não digitou a senha corretamente.";
					close2;
					cutin("",255);
					end;
				}
			} else {
				mes "[Funcionária Kafra]";
				mes "Deixe-me abrir o Armazém para você.";
				mes "Obrigado por utilizar o Serviço da corporação Kafra.";
				close2;
				cutin("",255);
				openstorage;
				end;
			}
			case 2:
			mes "[Funcionária Kafra]";
			mes "Por favor selecione seu destino";
			next;
			switch (select(.@destination$+" -> 200z","Cancelar")) {
				case 1:
				if (Zeny < 200) {
					mes "[Funcionária Kafra]";
					mes "Sinto muito, mas você não tem Zeny suficiente para o Serviço de Teleporte.";
					mes "A taxa de teleporte para "+.@destination$+" é de 200 Zenys.";
					close2; cutin("",255); end;
				}
				Zeny -= 200;
				close2;
				warp(.@destination$[1],.@coordinates[0],.@coordinates[1]);
				end;
				case 2:
				close2; cutin("",255); end;
			}
			case 3:
			if (BaseClass != Job_Merchant) {
				mes "[Funcionária Kafra]";
				mes "Me desculpe ma o Aluguel de carrinho só está disponível para:";
				mes "Mercador, Ferreiro, Mestre-Ferreiro, Alquimísta, Criador, Mecânico e Bioquímico.";
				close2;
				cutin("",255);
				end;
			} else if (checkcart()) {
				mes "[Funcionária Kafra]";
				mes "Você já tem um Carrinho.";
				mes "Infelizmente, nós só podemos ceder um carrinho por cada cliente.";
				close2;
				cutin("",255);
				end;
			} else {
				mes "[Funcionária Kafra]";
				mes "O preço para o aluguel é de 800 Zenys.";
				mes "Você gostaria de alugar um Carrinho?";
				next;
				switch (select("Alugar","Cancelar")) {
					case 1:
					if (Zeny < 800) {
						mes "[Funcionária Kafra]";
						mes "Eu sinto muito, mas você não tem zenys o bastante para pagar o aluguel do Carrinho";
						mes "A taxa do aluguel é de 800 zeny.";
						close2; cutin("",255); end;
					} else {
						Zeny -= 800;
						setcart;
						close2; cutin("",255); end;
					}
					case 2:
					close2; cutin("",255); end;
				}
			}
			case 4:
			mes "[Funcionária Kafra]";
			mes "Nós, aqui da Corporação Kafra, sempre estamos aqui para lhe proporcionar os melhores serviços.";
			mes "Nós esperamos satisfazer suas necessidades com padrões de excelência.";
			close2;
			cutin("",255);
			end;
		}
	} else {
		mes "[Funcionária Kafra]";
		mes "Eu só posso atender membros do Clã ^ff0000"+getguildname(.@GID)+"^000000.";
		mes "Se necessita usar os serviços encontre outra funcionária.";
		mes "E desculpe-me pela incoveniência.";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
// - [ Duplicações ] -
// ------------------------------------------------------------------
// - Luina
aldeg_cas01,218,170,0	duplicate(guildkafra)	Funcionária Kafra#aldeg_cas01	4_F_KAFRA1
aldeg_cas02,84,74,0	duplicate(guildkafra)	Funcionária Kafra#aldeg_cas02	4_F_KAFRA1
aldeg_cas03,118,76,0	duplicate(guildkafra)	Funcionária Kafra#aldeg_cas03	4_F_KAFRA1
aldeg_cas04,45,88,0	duplicate(guildkafra)	Funcionária Kafra#aldeg_cas04	4_F_KAFRA1
aldeg_cas05,31,190,0	duplicate(guildkafra)	Funcionária Kafra#aldeg_cas05	4_F_KAFRA1

// - Britoniah
gefg_cas01,83,47,3	duplicate(guildkafra)	Funcionária Kafra#gefg_cas01	4_F_KAFRA1
gefg_cas02,23,66,3	duplicate(guildkafra)	Funcionária Kafra#gefg_cas02	4_F_KAFRA1
gefg_cas03,116,89,5	duplicate(guildkafra)	Funcionária Kafra#gefg_cas03	4_F_KAFRA1
gefg_cas04,59,70,3	duplicate(guildkafra)	Funcionária Kafra#gefg_cas04	4_F_KAFRA1
gefg_cas05,61,52,5	duplicate(guildkafra)	Funcionária Kafra#gefg_cas05	4_F_KAFRA1

// - Bosque Celestial
payg_cas01,128,58,3	duplicate(guildkafra)	Funcionária Kafra#payg_cas01	4_F_KAFRA1
payg_cas02,22,275,5	duplicate(guildkafra)	Funcionária Kafra#payg_cas02	4_F_KAFRA1
payg_cas03,9,263,5	duplicate(guildkafra)	Funcionária Kafra#payg_cas03	4_F_KAFRA1
payg_cas04,40,235,1	duplicate(guildkafra)	Funcionária Kafra#payg_cas04	4_F_KAFRA1
payg_cas05,276,227,1	duplicate(guildkafra)	Funcionária Kafra#payg_cas05	4_F_KAFRA1

// - Valkirias
prtg_cas01,96,173,0	duplicate(guildkafra)	Funcionária Kafra#prtg_cas01	4_F_KAFRA1
prtg_cas02,71,36,4	duplicate(guildkafra)	Funcionária Kafra#prtg_cas02	4_F_KAFRA1
prtg_cas03,181,215,4	duplicate(guildkafra)	Funcionária Kafra#prtg_cas03	4_F_KAFRA1
prtg_cas04,258,247,4	duplicate(guildkafra)	Funcionária Kafra#prtg_cas04	4_F_KAFRA1
prtg_cas05,52,41,4	duplicate(guildkafra)	Funcionária Kafra#prtg_cas05	4_F_KAFRA1
