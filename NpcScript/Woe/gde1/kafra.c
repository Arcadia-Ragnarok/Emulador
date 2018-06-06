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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Funcion�rias da corpora��o kafra nos castelos da primeira |
|         edi��o de Guerra do Imp�rio.                              |
\*-----------------------------------------------------------------*/

-	script	Funcion�ria Kafra#woe::guildkafra	FAKE_NPC,{

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
		mes "[Funcion�ria Kafra]";
		mes "Bem vind"+(Sex == SEX_MALE ?"o":"a")+".";
		mes "Membro ^ff0000"+getguildname(.@GID)+"^000000.";
		mes "A Corpora��o Kafra estar� com voc� aonde quer que v�.";
		next;
		switch (select("Usar Armaz�m","Usar Servi�o de Teleporte","Alugar Carrinho","Cancelar")) {
			case 1:
			if (getskilllv("NV_BASIC") < 6) {
				mes "[Funcion�ria Kafra]";
				mes "Sinto muito, mas voc� n�o tem a Habilidades";
				mes "B�sicas N�vel 6 de Aprendiz para usar o Servi�o de Armaz�m.";
				close2;
				cutin("",255);
				end;
			} else if (#kafra_code) {
				mes "[Funcion�ria Kafra]";
				mes "Digite a senha do seu armaz�m";
				input(.@storagecode);
				next;
				if (.@storagecode != #kafra_code) {
					mes "[Funcion�ria Kafra]";
					mes "Voc� n�o digitou a senha corretamente.";
					close2;
					cutin("",255);
					end;
				}
			} else {
				mes "[Funcion�ria Kafra]";
				mes "Deixe-me abrir o Armaz�m para voc�.";
				mes "Obrigado por utilizar o Servi�o da corpora��o Kafra.";
				close2;
				cutin("",255);
				openstorage;
				end;
			}
			case 2:
			mes "[Funcion�ria Kafra]";
			mes "Por favor selecione seu destino";
			next;
			switch (select(.@destination$+" -> 200z","Cancelar")) {
				case 1:
				if (Zeny < 200) {
					mes "[Funcion�ria Kafra]";
					mes "Sinto muito, mas voc� n�o tem Zeny suficiente para o Servi�o de Teleporte.";
					mes "A taxa de teleporte para "+.@destination$+" � de 200 Zenys.";
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
				mes "[Funcion�ria Kafra]";
				mes "Me desculpe ma o Aluguel de carrinho s� est� dispon�vel para:";
				mes "Mercador, Ferreiro, Mestre-Ferreiro, Alquim�sta, Criador, Mec�nico e Bioqu�mico.";
				close2;
				cutin("",255);
				end;
			} else if (checkcart()) {
				mes "[Funcion�ria Kafra]";
				mes "Voc� j� tem um Carrinho.";
				mes "Infelizmente, n�s s� podemos ceder um carrinho por cada cliente.";
				close2;
				cutin("",255);
				end;
			} else {
				mes "[Funcion�ria Kafra]";
				mes "O pre�o para o aluguel � de 800 Zenys.";
				mes "Voc� gostaria de alugar um Carrinho?";
				next;
				switch (select("Alugar","Cancelar")) {
					case 1:
					if (Zeny < 800) {
						mes "[Funcion�ria Kafra]";
						mes "Eu sinto muito, mas voc� n�o tem zenys o bastante para pagar o aluguel do Carrinho";
						mes "A taxa do aluguel � de 800 zeny.";
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
			mes "[Funcion�ria Kafra]";
			mes "N�s, aqui da Corpora��o Kafra, sempre estamos aqui para lhe proporcionar os melhores servi�os.";
			mes "N�s esperamos satisfazer suas necessidades com padr�es de excel�ncia.";
			close2;
			cutin("",255);
			end;
		}
	} else {
		mes "[Funcion�ria Kafra]";
		mes "Eu s� posso atender membros do Cl� ^ff0000"+getguildname(.@GID)+"^000000.";
		mes "Se necessita usar os servi�os encontre outra funcion�ria.";
		mes "E desculpe-me pela incoveni�ncia.";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
// - [ Duplica��es ] -
// ------------------------------------------------------------------
// - Luina
aldeg_cas01,218,170,0	duplicate(guildkafra)	Funcion�ria Kafra#aldeg_cas01	4_F_KAFRA1
aldeg_cas02,84,74,0	duplicate(guildkafra)	Funcion�ria Kafra#aldeg_cas02	4_F_KAFRA1
aldeg_cas03,118,76,0	duplicate(guildkafra)	Funcion�ria Kafra#aldeg_cas03	4_F_KAFRA1
aldeg_cas04,45,88,0	duplicate(guildkafra)	Funcion�ria Kafra#aldeg_cas04	4_F_KAFRA1
aldeg_cas05,31,190,0	duplicate(guildkafra)	Funcion�ria Kafra#aldeg_cas05	4_F_KAFRA1

// - Britoniah
gefg_cas01,83,47,3	duplicate(guildkafra)	Funcion�ria Kafra#gefg_cas01	4_F_KAFRA1
gefg_cas02,23,66,3	duplicate(guildkafra)	Funcion�ria Kafra#gefg_cas02	4_F_KAFRA1
gefg_cas03,116,89,5	duplicate(guildkafra)	Funcion�ria Kafra#gefg_cas03	4_F_KAFRA1
gefg_cas04,59,70,3	duplicate(guildkafra)	Funcion�ria Kafra#gefg_cas04	4_F_KAFRA1
gefg_cas05,61,52,5	duplicate(guildkafra)	Funcion�ria Kafra#gefg_cas05	4_F_KAFRA1

// - Bosque Celestial
payg_cas01,128,58,3	duplicate(guildkafra)	Funcion�ria Kafra#payg_cas01	4_F_KAFRA1
payg_cas02,22,275,5	duplicate(guildkafra)	Funcion�ria Kafra#payg_cas02	4_F_KAFRA1
payg_cas03,9,263,5	duplicate(guildkafra)	Funcion�ria Kafra#payg_cas03	4_F_KAFRA1
payg_cas04,40,235,1	duplicate(guildkafra)	Funcion�ria Kafra#payg_cas04	4_F_KAFRA1
payg_cas05,276,227,1	duplicate(guildkafra)	Funcion�ria Kafra#payg_cas05	4_F_KAFRA1

// - Valkirias
prtg_cas01,96,173,0	duplicate(guildkafra)	Funcion�ria Kafra#prtg_cas01	4_F_KAFRA1
prtg_cas02,71,36,4	duplicate(guildkafra)	Funcion�ria Kafra#prtg_cas02	4_F_KAFRA1
prtg_cas03,181,215,4	duplicate(guildkafra)	Funcion�ria Kafra#prtg_cas03	4_F_KAFRA1
prtg_cas04,258,247,4	duplicate(guildkafra)	Funcion�ria Kafra#prtg_cas04	4_F_KAFRA1
prtg_cas05,52,41,4	duplicate(guildkafra)	Funcion�ria Kafra#prtg_cas05	4_F_KAFRA1
