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
| - Copyright: Spell Master (05/05/2018)                            |
| - Info: Bandeiras nas portas/ cidades dos castelos na WOE 2.0     |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Nos portões dos castelos ] -
// ------------------------------------------------------------------
-	script	FieldGdeFlagSE	FAKE_NPC,{

	.@castle$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@guild = getcastledata(.@castle$,1);
	.@str$ = (compare(.@castle$, "arug")) ? "Arunafeltz" : "Schwaltzvalt";

	if (!.@guild) {
		mes("[" + .@str$ + " Decreto Real]\n"
			"O Reino Sagrado de " + .@str$ + " declara que ainda não existe um propietário deste castelo.\n"
			"Quem quebrar o Emperium será reconhecido como o seu novo proprietário.");
		close;
	} else if (getcharid(ID_GUILD) == .@guild) {
		if (compare(.@castle$, "arug")) {
			if (.@castle$ == "arug_cas01") { setarray(.@in[0], 67, 193); }
			else if (.@castle$ == "arug_cas02") { setarray(.@in[0], 43, 256); }
			else { setarray(.@in[0], 121, 318); }
		}
		else {
			if (.@castle$ == "schg_cas02") { setarray(.@in[0], 136, 188); }
			else if (.@castle$ == "schg_cas03") { setarray(.@in[0], 308, 202); }
			else { setarray(.@in[0], 120, 290); }
		}
		mes "[ Voz Sussurrando ]";
		mes "Aos bravos...";
		mes "Deseja retornar ao seu palácio de honra?";
		next;
		if (select("Retornar ao Castelo","Sair") == 1) {
			close2;
			if (getcharid(ID_GUILD) == getcastledata(.@castle$, 1)) { // @FIX (Bug das bandeiras)
				warp(.@castle$, .@in[0], .@in[1]);
			}
			end;
		}
		close;
	} else {
		mes("[ " + .@str$ +" Decreto Real]\n"
		"O Reino Sagrado de " + .@str$ + " decreta que este castelo pertence ao Clã ^FF0000" + getguildname(.@guild) + "^000000.");
		next;
		mes("[" + .@str$ + " Decreto Real]\n"
		"Quem se opõe a esse clã e deseja ser o dono deste castelo.\n"
		"Deve atacar através da força do aço e da magia, usando-os nos tempos de Guerra.");
		close;
	}

	OnInit:
	OnGdeFlagSE:
	.@castle$ = strnpcinfo(NPC_NAME_HIDDEN);
	if (.@castle$ == "arug_cas01") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "arug_cas02") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "arug_cas03") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "arug_cas04") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "arug_cas05") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "schg_cas01") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "schg_cas02") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "schg_cas03") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "schg_cas04") { flagemblem(getcastledata(.@castle$, 1)); }
	else if (.@castle$ == "schg_cas05") { flagemblem(getcastledata(.@castle$, 1)); }
	end;
}

// ------------------------------------------------------------------
// - [ Nas Cidades ] -
// ------------------------------------------------------------------
-	script	CitieFlagSE	FAKE_NPC,{

	.@npc$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@cla = getcastledata(.@npc$, 1);
	.@eco = getcastledata(.@npc$, 2);
	.@def = getcastledata(.@npc$, 3);
	.@val = .@eco + .@def;

	if (.@val == 1) {.@bar$ = "^0077BF|^000000";}
	else if (.@val >= 1 && .@val < 5) {.@bar$ = "^0081CF|^0077BF|^000000";}
	else if (.@val >= 5 && .@val < 10) {.@bar$ = "^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 10 && .@val < 15) {.@bar$ = "^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 15 && .@val < 20) {.@bar$ = "^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 20 && .@val < 25) {.@bar$ = "^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 25 && .@val < 30) {.@bar$ = "^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 30 && .@val < 35) {.@bar$ = "^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 35 && .@val < 40) {.@bar$ = "^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 40 && .@val < 45) {.@bar$ = "^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 45 && .@val < 50) {.@bar$ = "^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 50 && .@val < 55) {.@bar$ = "^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 55 && .@val < 60) {.@bar$ = "^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 60 && .@val < 65) {.@bar$ = "^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 65 && .@val < 70) {.@bar$ = "^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 70 && .@val < 75) {.@bar$ = "^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 75 && .@val < 80) {.@bar$ = "^BFE5FF|^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 80 && .@val < 85) {.@bar$ = "^CFEBFF|^BFE5FF|^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val >= 85 && .@val < 100) {.@bar$ = "^DFF1FF|^CFEBFF|^BFE5FF|^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else if (.@val == 100) {.@bar$ = "^EFF8FF|^DFF1FF|^CFEBFF|^BFE5FF|^AFDFFF|^9FD8FF|^8FD2FF|^7FCCFF|^6FC8FF|^5FC2FF|^4FBCFF|^3FB6FF|^2FB0FF|^1FAAFF|^0FA4FF|^009EFF|^0094EF|^008BDF|^0081CF|^0077BF|^000000";}
	else {.@bar$ = " ";}

	if (.@cla) {
		mes("[" + .@npc$ + "]\n"
		"Atualmente o castelo está me posse do clã: ^0094EF" + getguildname(.@cla) + "^000000.\n \n"
		"Economia: ^0094EF" + .@eco + "^000000.\n"
		"Defesa: ^0094EF" + .@def + "^000000.\n"
		+ .@bar$);
		close;
	} else {
		end;
	}

	OnInit:
	OnGdeFlagSE:
	.@npc$ = strnpcinfo(NPC_NAME_HIDDEN);
	if (.@npc$ == "arug_cas01") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "arug_cas02") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "arug_cas03") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "arug_cas04") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "arug_cas05") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "schg_cas01") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "schg_cas02") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "schg_cas03") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "schg_cas04") { flagemblem(getcastledata(.@npc$, 1)); }
	else if (.@npc$ == "schg_cas05") { flagemblem(getcastledata(.@npc$, 1)); }
	end;
}


// ------------------------------------------------------------------
// - [ Duplicações (Portas) ] -
// ------------------------------------------------------------------
aru_gld,164,270,4	duplicate(FieldGdeFlagSE)	Mardol#arug_cas01::FieldFlagSE01	GUILD_FLAG
aru_gld,142,235,4	duplicate(FieldGdeFlagSE)	Mardol#arug_cas01::FieldFlagSE02	GUILD_FLAG
aru_gld,164,245,5	duplicate(FieldGdeFlagSE)	Mardol#arug_cas01::FieldFlagSE03	GUILD_FLAG
aru_gld,182,255,5	duplicate(FieldGdeFlagSE)	Mardol#arug_cas01::FieldFlagSE04	GUILD_FLAG
aru_gld,80,41,6	duplicate(FieldGdeFlagSE)	Cyr#arug_cas02::FieldFlagSE05	GUILD_FLAG
aru_gld,80,52,6	duplicate(FieldGdeFlagSE)	Cyr#arug_cas02::FieldFlagSE06	GUILD_FLAG
aru_gld,120,83,5	duplicate(FieldGdeFlagSE)	Cyr#arug_cas02::FieldFlagSE07	GUILD_FLAG
aru_gld,60,174,0	duplicate(FieldGdeFlagSE)	Horn#arug_cas03::FieldFlagSE08	GUILD_FLAG
aru_gld,74,174,0	duplicate(FieldGdeFlagSE)	Horn#arug_cas03::FieldFlagSE09	GUILD_FLAG
aru_gld,306,359,6	duplicate(FieldGdeFlagSE)	Gefn#arug_cas04::FieldFlagSE10	GUILD_FLAG
aru_gld,306,348,6	duplicate(FieldGdeFlagSE)	Gefn#arug_cas04::FieldFlagSE11	GUILD_FLAG
aru_gld,301,318,4	duplicate(FieldGdeFlagSE)	Gefn#arug_cas04::FieldFlagSE12	GUILD_FLAG
aru_gld,313,318,4	duplicate(FieldGdeFlagSE)	Gefn#arug_cas04::FieldFlagSE13	GUILD_FLAG
aru_gld,289,103,6	duplicate(FieldGdeFlagSE)	Banadis#arug_cas05::FieldFlagSE14	GUILD_FLAG
aru_gld,289,112,6	duplicate(FieldGdeFlagSE)	Banadis#arug_cas05::FieldFlagSE15	GUILD_FLAG
aru_gld,350,98,6	duplicate(FieldGdeFlagSE)	Banadis#arug_cas05::FieldFlagSE16	GUILD_FLAG
aru_gld,350,88,6	duplicate(FieldGdeFlagSE)	Banadis#arug_cas05::FieldFlagSE17	GUILD_FLAG
sch_gld,290,90,0	duplicate(FieldGdeFlagSE)	Himinn#schg_cas01::FieldFlagSE18	GUILD_FLAG
sch_gld,297,90,0	duplicate(FieldGdeFlagSE)	Himinn#schg_cas01::FieldFlagSE19	GUILD_FLAG
sch_gld,296,247,4	duplicate(FieldGdeFlagSE)	Andlangr#schg_cas02::FieldFlagSE20	GUILD_FLAG
sch_gld,280,247,4	duplicate(FieldGdeFlagSE)	Andlangr#schg_cas02::FieldFlagSE21	GUILD_FLAG
sch_gld,91,191,0	duplicate(FieldGdeFlagSE)	Vidblainn#schg_cas03::FieldFlagSE22	GUILD_FLAG
sch_gld,104,191,0	duplicate(FieldGdeFlagSE)	Vidblainn#schg_cas03::FieldFlagSE23	GUILD_FLAG
sch_gld,134,97,4	duplicate(FieldGdeFlagSE)	Hljod#schg_cas04::FieldFlagSE24	GUILD_FLAG
sch_gld,141,97,4	duplicate(FieldGdeFlagSE)	Hljod#schg_cas04::FieldFlagSE25	GUILD_FLAG
sch_gld,101,284,4	duplicate(FieldGdeFlagSE)	Skidbladnir#schg_cas05::FieldFlagSE26	GUILD_FLAG
sch_gld,91,284,4	duplicate(FieldGdeFlagSE)	Skidbladnir#schg_cas05::FieldFlagSE27	GUILD_FLAG
sch_gld,66,320,6	duplicate(FieldGdeFlagSE)	Skidbladnir#schg_cas05::FieldFlagSE28	GUILD_FLAG
sch_gld,66,310,6	duplicate(FieldGdeFlagSE)	Skidbladnir#schg_cas05::FieldFlagSE29	GUILD_FLAG

// ------------------------------------------------------------------
// - [ Duplicações (Cidades) ] -
// ------------------------------------------------------------------
rachel,124,120,3	duplicate(CitieFlagSE)	Mardol#arug_cas01::CitieFlagSE01	GUILD_FLAG
rachel,136,120,5	duplicate(CitieFlagSE)	Cyr#arug_cas02::CitieFlagSE02	GUILD_FLAG
rachel,138,126,6	duplicate(CitieFlagSE)	Horn#arug_cas03::CitieFlagSE03	GUILD_FLAG
rachel,135,131,7	duplicate(CitieFlagSE)	Gefn#arug_cas04::CitieFlagSE04	GUILD_FLAG
rachel,124,130,1	duplicate(CitieFlagSE)	Banadis#arug_cas05::CitieFlagSE05	GUILD_FLAG
yuno,109,167,5	duplicate(CitieFlagSE)	Himinn#schg_cas01::CitieFlagSE06	GUILD_FLAG
yuno,110,171,5	duplicate(CitieFlagSE)	Andlangr#schg_cas02::CitieFlagSE07	GUILD_FLAG
yuno,111,175,5	duplicate(CitieFlagSE)	Viblainn#schg_cas03::CitieFlagSE08	GUILD_FLAG
yuno,112,179,5	duplicate(CitieFlagSE)	Hljod#schg_cas04::CitieFlagSE09	GUILD_FLAG
yuno,114,183,5	duplicate(CitieFlagSE)	Skidbladnir#schg_cas05::CitieFlagSE10	GUILD_FLAG
