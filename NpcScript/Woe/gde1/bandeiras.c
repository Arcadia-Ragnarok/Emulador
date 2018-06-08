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
| - Copyright: Spell Master (29/03/2018)                            |
| - Info: Bandeiras referentes aos castelos da primeira edição de   |
|         Guerra do Império.                                        |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Nos portões dos castelos ] -
// ------------------------------------------------------------------
-	script	::FieldGdeFlag	FAKE_NPC,{

	.@npc$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@GID = getcastledata(.@npc$,1);

	if (!.@GID) {
		mes "[Decreto de Rune-Midgard ]";
		mes " ";
		mes "1 - Pela ordenança do Divino Reino de Rune-Midgad.";
		mes "Declaramos que não há nenhum mestre formal deste castelo.";
		mes " ";
		mes "2 - Para quem puder superar todas provações e destruír o Emperium.";
		mes "O rei vai reconhecer esse como proprietário do castelo.";
		close;
	} else if (getcharid(ID_GUILD) == .@GID) {
		if (.@npc$ == "aldeg_cas01") { setarray(.@ReturnCastle[0],218,170); }
		else if (.@npc$ == "aldeg_cas02") { setarray(.@ReturnCastle[0],220,190); }
		else if (.@npc$ == "aldeg_cas03") { setarray(.@ReturnCastle[0],205,186); }
		else if (.@npc$ == "aldeg_cas04") { setarray(.@ReturnCastle[0],116,217); }
		else if (.@npc$ == "aldeg_cas05") { setarray(.@ReturnCastle[0],167,225); }
		else if (.@npc$ == "gefg_cas01") { setarray(.@ReturnCastle[0],197,36); }
		else if (.@npc$ == "gefg_cas02") { setarray(.@ReturnCastle[0],178,43); }
		else if (.@npc$ == "gefg_cas03") { setarray(.@ReturnCastle[0],221,30); }
		else if (.@npc$ == "gefg_cas04") { setarray(.@ReturnCastle[0],168,43); }
		else if (.@npc$ == "gefg_cas05") { setarray(.@ReturnCastle[0],168,31); }
		else if (.@npc$ == "payg_cas01") { setarray(.@ReturnCastle[0],54,144); }
		else if (.@npc$ == "payg_cas02") { setarray(.@ReturnCastle[0],278,251); }
		else if (.@npc$ == "payg_cas03") { setarray(.@ReturnCastle[0],9,263); }
		else if (.@npc$ == "payg_cas04") { setarray(.@ReturnCastle[0],40,235); }
		else if (.@npc$ == "payg_cas05") { setarray(.@ReturnCastle[0],243,27); }
		else if (.@npc$ == "prtg_cas01") { setarray(.@ReturnCastle[0],96,173); }
		else if (.@npc$ == "prtg_cas02") { setarray(.@ReturnCastle[0],169,55); }
		else if (.@npc$ == "prtg_cas03") { setarray(.@ReturnCastle[0],181,215); }
		else if (.@npc$ == "prtg_cas04") { setarray(.@ReturnCastle[0],258,247); }
		else if (.@npc$ == "prtg_cas05") { setarray(.@ReturnCastle[0],52,41); }

		mes "[ Voz Sussurrando ]";
		mes "Aos bravos...";
		mes "Deseja retornar ao seu palácio de honra?";
		next;
		if (select("Retornar ao Castelo","Sair") == 1) {
			close2;
			if (getcharid(ID_GUILD) == getcastledata(.@npc$,1)) {
				warp(.@npc$,.@ReturnCastle[0],.@ReturnCastle[1]);
			}
			end;
		}
		close;
	} else {
		mes "[Decreto de Rune-Midgard ]";
		mes " ";
		mes "1 - Pela ordenança do Divino Reino de Rune-Midgard que este lugar é de posse privada do Clã:";
		mes "^ff0000"+getguildname(.@GID)+"^000000.";
		mes " ";
		mes "2 - Se há alguém que se opõe a isso.";
		mes "Prove sua força e honra com uma lâmina de aço em sua mão.";
		close;
	}

	OnGdeFlag:
	if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas01") { flagemblem(getcastledata("aldeg_cas01",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas02") { flagemblem(getcastledata("aldeg_cas02",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas03") { flagemblem(getcastledata("aldeg_cas03",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas04") { flagemblem(getcastledata("aldeg_cas04",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas05") { flagemblem(getcastledata("aldeg_cas05",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas01") { flagemblem(getcastledata("gefg_cas01",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas02") { flagemblem(getcastledata("gefg_cas02",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas03") { flagemblem(getcastledata("gefg_cas03",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas04") { flagemblem(getcastledata("gefg_cas04",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas05") { flagemblem(getcastledata("gefg_cas05",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas01") { flagemblem(getcastledata("payg_cas01",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas02") { flagemblem(getcastledata("payg_cas02",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas03") { flagemblem(getcastledata("payg_cas03",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas04") { flagemblem(getcastledata("payg_cas04",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas05") { flagemblem(getcastledata("payg_cas05",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas01") { flagemblem(getcastledata("prtg_cas01",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas02") { flagemblem(getcastledata("prtg_cas02",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas03") { flagemblem(getcastledata("prtg_cas03",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas04") { flagemblem(getcastledata("prtg_cas04",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas05") { flagemblem(getcastledata("prtg_cas05",1)); }
	end;
}

// ------------------------------------------------------------------
// - [ Nas Cidades ] -
// ------------------------------------------------------------------
-	script	::CitieGdeFlag	FAKE_NPC,{

	.@npc$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@gid = getcastledata(.@npc$,1);
	.@eco = getcastledata(.@npc$,2);
	.@def = getcastledata(.@npc$,3);
	.@val = .@eco + .@def;

	if (.@val == 1) {
		.@bar$ = "^0077BF|^000000";
	} else if (.@val >= 1 && .@val < 5) {
		.@bar$ = "^0081CF|^0077BF|^000000";
	} else if (.@val >= 5 && .@val < 10) {
		.@bar$ = "^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 10 && .@val < 15) {
		.@bar$ = "^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 15 && .@val < 20) {
		.@bar$ = "^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 20 && .@val < 25) {
		.@bar$ = "^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 25 && .@val < 30) {
		.@bar$ = "^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 30 && .@val < 35) {
		.@bar$ = "^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 35 && .@val < 40) {
		.@bar$ = "^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 40 && .@val < 45) {
		.@bar$ = "^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 45 && .@val < 50) {
		.@bar$ = "^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 50 && .@val < 55) {
		.@bar$ = "^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 55 && .@val < 60) {
		.@bar$ = "^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 60 && .@val < 65) {
		.@bar$ = "^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 65 && .@val < 70) {
		.@bar$ = "^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 70 && .@val < 75) {
		.@bar$ = "^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 75 && .@val < 80) {
		.@bar$ = "^BFE5FF|^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 80 && .@val < 85) {
		.@bar$ = "^CFEBFF|^BFE5FF|^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val >= 85 && .@val < 100) {
		.@bar$ = "^DFF1FF|^CFEBFF|^BFE5FF|^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else if (.@val == 100) {
		.@bar$ = "^EFF8FF|^DFF1FF|^CFEBFF|^BFE5FF|^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";
	} else { .@bar$ = " ";}

	if (.@gid) {
		mes "[ "+strnpcinfo(NPC_NAME_HIDDEN)+" ]";
		mes "Atualmente o castelo está me posse do clã: ^0094EF"+getguildname(.@gid)+"^000000.";
		mes " ";
		mes "Economia: ^0094EF"+.@eco+"^000000.";
		mes "Defesa: ^0094EF"+getcastledata(.@npc$,3)+"^000000.";
		mes .@bar$;
		close;
	} else {
		end;
	}

	OnGdeFlag:
	if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas01") { flagemblem(getcastledata("aldeg_cas01",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas02") { flagemblem(getcastledata("aldeg_cas02",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas03") { flagemblem(getcastledata("aldeg_cas03",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas04") { flagemblem(getcastledata("aldeg_cas04",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas05") { flagemblem(getcastledata("aldeg_cas05",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas01") { flagemblem(getcastledata("gefg_cas01",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas02") { flagemblem(getcastledata("gefg_cas02",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas03") { flagemblem(getcastledata("gefg_cas03",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas04") { flagemblem(getcastledata("gefg_cas04",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas05") { flagemblem(getcastledata("gefg_cas05",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas01") { flagemblem(getcastledata("payg_cas01",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas02") { flagemblem(getcastledata("payg_cas02",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas03") { flagemblem(getcastledata("payg_cas03",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas04") { flagemblem(getcastledata("payg_cas04",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas05") { flagemblem(getcastledata("payg_cas05",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas01") { flagemblem(getcastledata("prtg_cas01",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas02") { flagemblem(getcastledata("prtg_cas02",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas03") { flagemblem(getcastledata("prtg_cas03",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas04") { flagemblem(getcastledata("prtg_cas04",1)); }
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas05") { flagemblem(getcastledata("prtg_cas05",1)); }
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações (Portões dos Castelos) ] -
// ------------------------------------------------------------------
// - Luina (Aldebaran)

alde_gld,61,87,6	duplicate(FieldGdeFlag)	Sirius#aldeg_cas01::FieldGdeFlag01	GUILD_FLAG
alde_gld,61,79,6	duplicate(FieldGdeFlag)	Sirius#aldeg_cas01::FieldGdeFlag02	GUILD_FLAG
alde_gld,45,87,0	duplicate(FieldGdeFlag)	Sirius#aldeg_cas01::FieldGdeFlag03	GUILD_FLAG
alde_gld,51,87,0	duplicate(FieldGdeFlag)	Sirius#aldeg_cas01::FieldGdeFlag04	GUILD_FLAG
alde_gld,99,251,4	duplicate(FieldGdeFlag)	Astrum#aldeg_cas02::FieldGdeFlag05	GUILD_FLAG
alde_gld,99,244,4	duplicate(FieldGdeFlag)	Astrum#aldeg_cas02::FieldGdeFlag06	GUILD_FLAG
alde_gld,146,82,0	duplicate(FieldGdeFlag)	Canopus#aldeg_cas03::FieldGdeFlag07	GUILD_FLAG
alde_gld,138,82,0	duplicate(FieldGdeFlag)	Canopus#aldeg_cas03::FieldGdeFlag08	GUILD_FLAG
alde_gld,239,246,2	duplicate(FieldGdeFlag)	Rigel#aldeg_cas04::FieldGdeFlag09	GUILD_FLAG
alde_gld,239,239,2	duplicate(FieldGdeFlag)	Rigel#aldeg_cas04::FieldGdeFlag10	GUILD_FLAG
alde_gld,265,93,6	duplicate(FieldGdeFlag)	Acrux#aldeg_cas05::FieldGdeFlag11	GUILD_FLAG
alde_gld,265,87,6	duplicate(FieldGdeFlag)	Acrux#aldeg_cas05::FieldGdeFlag12	GUILD_FLAG

// - Britoniah (Geffen)
gef_fild13,148,51,5	duplicate(FieldGdeFlag)	Arsulf#gefg_cas01::FieldGdeFlag13	GUILD_FLAG
gef_fild13,155,54,5	duplicate(FieldGdeFlag)	Arsulf#gefg_cas01::FieldGdeFlag14	GUILD_FLAG
gef_fild13,212,79,6	duplicate(FieldGdeFlag)	Arsulf#gefg_cas01::FieldGdeFlag15	GUILD_FLAG
gef_fild13,211,71,6	duplicate(FieldGdeFlag)	Arsulf#gefg_cas01::FieldGdeFlag16	GUILD_FLAG
gef_fild13,303,243,4	duplicate(FieldGdeFlag)	Trapesac#gefg_cas02::FieldGdeFlag17	GUILD_FLAG
gef_fild13,312,243,4	duplicate(FieldGdeFlag)	Trapesac#gefg_cas02::FieldGdeFlag18	GUILD_FLAG
gef_fild13,290,243,4	duplicate(FieldGdeFlag)	Trapesac#gefg_cas02::FieldGdeFlag19	GUILD_FLAG
gef_fild13,324,243,4	duplicate(FieldGdeFlag)	Trapesac#gefg_cas02::FieldGdeFlag20	GUILD_FLAG
gef_fild13,78,182,4	duplicate(FieldGdeFlag)	Ruaden#gefg_cas03::FieldGdeFlag21	GUILD_FLAG
gef_fild13,87,182,4	duplicate(FieldGdeFlag)	Ruaden#gefg_cas03::FieldGdeFlag22	GUILD_FLAG
gef_fild13,73,295,7	duplicate(FieldGdeFlag)	Ruaden#gefg_cas03::FieldGdeFlag23	GUILD_FLAG
gef_fild13,113,274,7	duplicate(FieldGdeFlag)	Ruaden#gefg_cas03::FieldGdeFlag24	GUILD_FLAG
gef_fild13,144,235,6	duplicate(FieldGdeFlag)	Ruaden#gefg_cas03::FieldGdeFlag25	GUILD_FLAG
gef_fild13,144,244,6	duplicate(FieldGdeFlag)	Ruaden#gefg_cas03::FieldGdeFlag26	GUILD_FLAG
gef_fild13,190,283,3	duplicate(FieldGdeFlag)	Saffran#gefg_cas04::FieldGdeFlag27	GUILD_FLAG
gef_fild13,199,274,3	duplicate(FieldGdeFlag)	Saffran#gefg_cas04::FieldGdeFlag28	GUILD_FLAG
gef_fild13,302,87,7	duplicate(FieldGdeFlag)	Arima#gefg_cas05::FieldGdeFlag29	GUILD_FLAG
gef_fild13,313,83,0	duplicate(FieldGdeFlag)	Arima#gefg_cas05::FieldGdeFlag30	GUILD_FLAG
gef_fild13,252,51,2	duplicate(FieldGdeFlag)	Arima#gefg_cas05::FieldGdeFlag31	GUILD_FLAG
gef_fild13,26,147,2	duplicate(FieldGdeFlag)	Arima#gefg_cas05::FieldGdeFlag32	GUILD_FLAG

// - Bosque Celestial (Payon)
pay_gld,125,236,4	duplicate(FieldGdeFlag)	Palácio do Sol#payg_cas01::FieldGdeFlag33	GUILD_FLAG
pay_gld,110,233,4	duplicate(FieldGdeFlag)	Palácio do Sol#payg_cas01::FieldGdeFlag34	GUILD_FLAG
pay_gld,116,233,4	duplicate(FieldGdeFlag)	Palácio do Sol#payg_cas01::FieldGdeFlag35	GUILD_FLAG
pay_gld,91,239,2	duplicate(FieldGdeFlag)	Palácio do Sol#payg_cas01::FieldGdeFlag36	GUILD_FLAG
pay_gld,292,112,6	duplicate(FieldGdeFlag)	Palácio do Lago Sagrado#payg_cas02::FieldGdeFlag37	GUILD_FLAG
pay_gld,292,120,6	duplicate(FieldGdeFlag)	Palácio do Lago Sagrado#payg_cas02::FieldGdeFlag38	GUILD_FLAG
pay_gld,291,135,6	duplicate(FieldGdeFlag)	Palácio do Lago Sagrado#payg_cas02::FieldGdeFlag39	GUILD_FLAG
pay_gld,271,163,0	duplicate(FieldGdeFlag)	Palácio do Lago Sagrado#payg_cas02::FieldGdeFlag40	GUILD_FLAG
pay_gld,321,298,2	duplicate(FieldGdeFlag)	Palácio da Sombra#payg_cas03::FieldGdeFlag41	GUILD_FLAG
pay_gld,321,289,2	duplicate(FieldGdeFlag)	Palácio da Sombra#payg_cas03::FieldGdeFlag42	GUILD_FLAG
pay_gld,327,304,1	duplicate(FieldGdeFlag)	Palácio da Sombra#payg_cas03::FieldGdeFlag43	GUILD_FLAG
pay_gld,333,254,4	duplicate(FieldGdeFlag)	Palácio da Sombra#payg_cas03::FieldGdeFlag44	GUILD_FLAG
pay_gld,137,160,0	duplicate(FieldGdeFlag)	Palácio Escarlate#payg_cas04::FieldGdeFlag45	GUILD_FLAG
pay_gld,143,160,0	duplicate(FieldGdeFlag)	Palácio Escarlate#payg_cas04::FieldGdeFlag46	GUILD_FLAG
pay_gld,133,151,2	duplicate(FieldGdeFlag)	Palácio Escarlate#payg_cas04::FieldGdeFlag47	GUILD_FLAG
pay_gld,153,166,1	duplicate(FieldGdeFlag)	Palácio Escarlate#payg_cas04::FieldGdeFlag48	GUILD_FLAG
pay_gld,208,268,4	duplicate(FieldGdeFlag)	Palácio da Colina#payg_cas05::FieldGdeFlag49	GUILD_FLAG
pay_gld,199,268,4	duplicate(FieldGdeFlag)	Palácio da Colina#payg_cas05::FieldGdeFlag50	GUILD_FLAG
pay_gld,190,277,3	duplicate(FieldGdeFlag)	Palácio da Colina#payg_cas05::FieldGdeFlag51	GUILD_FLAG
pay_gld,187,294,2	duplicate(FieldGdeFlag)	Palácio da Colina#payg_cas05::FieldGdeFlag52	GUILD_FLAG

// - Valquirias (Prontera)
prt_gld,131,60,6	duplicate(FieldGdeFlag)	Kriemhild#prtg_cas01::FieldGdeFlag53	GUILD_FLAG
prt_gld,138,68,6	duplicate(FieldGdeFlag)	Kriemhild#prtg_cas01::FieldGdeFlag54	GUILD_FLAG
prt_gld,138,60,6	duplicate(FieldGdeFlag)	Kriemhild#prtg_cas01::FieldGdeFlag55	GUILD_FLAG
prt_gld,135,60,6	duplicate(FieldGdeFlag)	Kriemhild#prtg_cas01::FieldGdeFlag56	GUILD_FLAG
prt_gld,244,126,0	duplicate(FieldGdeFlag)	Hrist#prtg_cas02::FieldGdeFlag57	GUILD_FLAG
prt_gld,244,128,0	duplicate(FieldGdeFlag)	Hrist#prtg_cas02::FieldGdeFlag58	GUILD_FLAG
prt_gld,236,126,0	duplicate(FieldGdeFlag)	Hrist#prtg_cas02::FieldGdeFlag59	GUILD_FLAG
prt_gld,236,128,0	duplicate(FieldGdeFlag)	Hrist#prtg_cas02::FieldGdeFlag60	GUILD_FLAG
prt_gld,147,140,4	duplicate(FieldGdeFlag)	Brynhildr#prtg_cas03::FieldGdeFlag61	GUILD_FLAG
prt_gld,147,136,4	duplicate(FieldGdeFlag)	Brynhildr#prtg_cas03::FieldGdeFlag62	GUILD_FLAG
prt_gld,158,140,4	duplicate(FieldGdeFlag)	Brynhildr#prtg_cas03::FieldGdeFlag63	GUILD_FLAG
prt_gld,158,136,4	duplicate(FieldGdeFlag)	Brynhildr#prtg_cas03::FieldGdeFlag64	GUILD_FLAG
prt_gld,120,243,6	duplicate(FieldGdeFlag)	Skoegul#prtg_cas04::FieldGdeFlag65	GUILD_FLAG
prt_gld,120,236,6	duplicate(FieldGdeFlag)	Skoegul#prtg_cas04::FieldGdeFlag66	GUILD_FLAG
prt_gld,122,243,6	duplicate(FieldGdeFlag)	Skoegul#prtg_cas04::FieldGdeFlag67	GUILD_FLAG
prt_gld,122,236,6	duplicate(FieldGdeFlag)	Skoegul#prtg_cas04::FieldGdeFlag68	GUILD_FLAG
prt_gld,199,243,2	duplicate(FieldGdeFlag)	Gondul#prtg_cas05::FieldGdeFlag69	GUILD_FLAG
prt_gld,199,236,2	duplicate(FieldGdeFlag)	Gondul#prtg_cas05::FieldGdeFlag70	GUILD_FLAG
prt_gld,197,243,2	duplicate(FieldGdeFlag)	Gondul#prtg_cas05::FieldGdeFlag71	GUILD_FLAG
prt_gld,197,236,2	duplicate(FieldGdeFlag)	Gondul#prtg_cas05::FieldGdeFlag72	GUILD_FLAG

// ------------------------------------------------------------------
// - [ Duplicações (Cidades) ] -
// ------------------------------------------------------------------
// - Luina (Aldebaran)

aldebaran,152,97,4	duplicate(CitieGdeFlag)	Sirius#aldeg_cas01::CitieGdeFlag01	GUILD_FLAG
aldebaran,149,97,4	duplicate(CitieGdeFlag)	Astrum#aldeg_cas02::CitieGdeFlag02	GUILD_FLAG
aldebaran,134,97,4	duplicate(CitieGdeFlag)	Canopus#aldeg_cas03::CitieGdeFlag03	GUILD_FLAG
aldebaran,131,97,4	duplicate(CitieGdeFlag)	Rigel#aldeg_cas04::CitieGdeFlag04	GUILD_FLAG
aldebaran,128,97,4	duplicate(CitieGdeFlag)	Acrux#aldeg_cas05::CitieGdeFlag05	GUILD_FLAG

// - Britoniah (Geffen)
geffen,109,123,2	duplicate(CitieGdeFlag)	Arsulf#gefg_cas01::CitieGdeFlag06	GUILD_FLAG
geffen,112,129,1	duplicate(CitieGdeFlag)	Trapesac#gefg_cas02::CitieGdeFlag07	GUILD_FLAG
geffen,120,132,0	duplicate(CitieGdeFlag)	Ruaden#gefg_cas03::CitieGdeFlag08	GUILD_FLAG
geffen,127,130,7	duplicate(CitieGdeFlag)	Saffran#gefg_cas04::CitieGdeFlag09	GUILD_FLAG
geffen,131,123,6	duplicate(CitieGdeFlag)	Arima#gefg_cas05::CitieGdeFlag10	GUILD_FLAG

// - Bosque Celestial (Payon)
payon,90,322,4	duplicate(CitieGdeFlag)	Palácio do Sol#payg_cas01::CitieGdeFlag11	GUILD_FLAG
payon,166,177,3	duplicate(CitieGdeFlag)	Palácio do Sol#payg_cas01::CitieGdeFlag12	GUILD_FLAG
payon,97,322,4	duplicate(CitieGdeFlag)	Palácio do Lago Sagrado#payg_cas02::CitieGdeFlag13	GUILD_FLAG
payon,166,173,3	duplicate(CitieGdeFlag)	Palácio do Lago Sagrado#payg_cas02::CitieGdeFlag14	GUILD_FLAG
payon,113,322,4	duplicate(CitieGdeFlag)	Palácio da Sombra#payg_cas03::CitieGdeFlag15	GUILD_FLAG
payon,166,169,3	duplicate(CitieGdeFlag)	Palácio da Sombra#payg_cas03::CitieGdeFlag16	GUILD_FLAG
payon,118,322,4	duplicate(CitieGdeFlag)	Palácio Escarlate#payg_cas04::CitieGdeFlag17	GUILD_FLAG
payon,166,165,3	duplicate(CitieGdeFlag)	Palácio Escarlate#payg_cas04::CitieGdeFlag18	GUILD_FLAG
payon,123,322,4	duplicate(CitieGdeFlag)	Palácio da Colina#payg_cas05::CitieGdeFlag19	GUILD_FLAG
payon,166,161,3	duplicate(CitieGdeFlag)	Palácio da Colina#payg_cas05::CitieGdeFlag20	GUILD_FLAG

// - Valquirias (Prontera)
prontera,155,190,4	duplicate(CitieGdeFlag)	Kriemhild#prtg_cas01::CitieGdeFlag21	GUILD_FLAG
prontera,146,194,3	duplicate(CitieGdeFlag)	Hrist#prtg_cas02::CitieGdeFlag22	GUILD_FLAG
prontera,143,203,2	duplicate(CitieGdeFlag)	Brynhildr#prtg_cas03::CitieGdeFlag23	GUILD_FLAG
prontera,167,203,6	duplicate(CitieGdeFlag)	Skoegul#prtg_cas04::CitieGdeFlag24	GUILD_FLAG
prontera,165,194,5	duplicate(CitieGdeFlag)	Gondul#prtg_cas05::CitieGdeFlag25	GUILD_FLAG
