/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Entrada para o calabouço nos castelos da primeira edição  |
|         de Guerra do Império.                                     |
\*-----------------------------------------------------------------*/

-	script	Alavanca#gd::gdlever	FAKE_NPC,{

	.@GID = getcastledata(.@npc$,1);

	if (.@GID == 0) {
		mes "[Voz Sussurrando]";
		mes "'Aqueles que superam sua aprovação mostraram muita coragem....";
		mes "Ainda vão achar outra aprovação pelo caminho.'";
		close;
	} else {
		if (compare(strnpcinfo(NPC_NAME_HIDDEN),"aldeg")) {
			.@destination$ = "gld_dun02";
			if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas01")) { setarray(.@coordinates[0],32,122); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas02")) { setarray(.@coordinates[0],79,30); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas03")) { setarray(.@coordinates[0],165,38); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas04")) { setarray(.@coordinates[0],160,148); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas05")) { setarray(.@coordinates[0],103,169); }
		} else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"gefg")) {
			.@destination$ = "gld_dun04";
			if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas01")) { setarray(.@coordinates[0],39,258); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas02")) { setarray(.@coordinates[0],125,270); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas03")) { setarray(.@coordinates[0],268,251); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas04")) { setarray(.@coordinates[0],268,108); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas05")) { setarray(.@coordinates[0],230,35); }
		} else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"payg")) {
			.@destination$ = "gld_dun01";
			if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas01")) { setarray(.@coordinates[0],186,165); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas02")) { setarray(.@coordinates[0],54,165); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas03")) { setarray(.@coordinates[0],54,39); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas04")) { setarray(.@coordinates[0],186,39); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas05")) { setarray(.@coordinates[0],223,202); }
		} else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"prtg")) {
			.@destination$ = "gld_dun03";
			if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas01")) { setarray(.@coordinates[0],28,251); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas02")) { setarray(.@coordinates[0],164,268); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas03")) { setarray(.@coordinates[0],164,179); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas04")) { setarray(.@coordinates[0],268,203); }
			else if (compare(strnpcinfo(NPC_NAME_HIDDEN),"cas05")) { setarray(.@coordinates[0],199,28); }
		}
		mes "[Voz Sussurrando]";
		mes "'Só o verdadeiramente valente podem fazer a prova.'";
		next;
		mes " ";
		mes "Há uma alavanca pequena.";
		mes "Puxar isto?";
		next;
		if (select("Puxar","Não Puxar") == 1) {
			if (getcharid(CHAR_ID_GUILD) == .@GID) {
				close2;
				warp(.@destination$,.@coordinates[0],.@coordinates[1]);
				end;
			}
			mes " ";
			mes "nada Aconteceu.";
			close;
		}
		close;
	}
}

// ------------------------------------------------------------------
// - [ Duplicações ] -
// ------------------------------------------------------------------
// - Luina
aldeg_cas01,211,181,0	duplicate(gdlever)	#aldeg_cas01	HIDDEN_NPC
aldeg_cas02,194,136,0	duplicate(gdlever)	#aldeg_cas02	HIDDEN_NPC
aldeg_cas03,200,177,0	duplicate(gdlever)	#aldeg_cas03	HIDDEN_NPC
aldeg_cas04,76,64,0	duplicate(gdlever)	#aldeg_cas04	HIDDEN_NPC
aldeg_cas05,22,205,0	duplicate(gdlever)	#aldeg_cas05	HIDDEN_NPC

// - Britoniah
gefg_cas01,78,84,0	duplicate(gdlever)	#gefg_cas01	HIDDEN_NPC
gefg_cas02,167,40,0	duplicate(gdlever)	#gefg_cas02	HIDDEN_NPC
gefg_cas03,221,43,0	duplicate(gdlever)	#gefg_cas03	HIDDEN_NPC
gefg_cas04,58,75,0	duplicate(gdlever)	#gefg_cas04	HIDDEN_NPC
gefg_cas05,65,22,0	duplicate(gdlever)	#gefg_cas05	HIDDEN_NPC

// - Bosque Celestial
payg_cas01,101,25,0	duplicate(gdlever)	#payg_cas01	HIDDEN_NPC
payg_cas02,278,247,0	duplicate(gdlever)	#payg_cas02	HIDDEN_NPC
payg_cas03,38,42,0	duplicate(gdlever)	#payg_cas03	HIDDEN_NPC
payg_cas04,52,48,0	duplicate(gdlever)	#payg_cas04	HIDDEN_NPC
payg_cas05,249,15,0	duplicate(gdlever)	#payg_cas05	HIDDEN_NPC

// - Valkirias
prtg_cas01,94,200,0	duplicate(gdlever)	#prtg_cas01	HIDDEN_NPC
prtg_cas02,84,72,0	duplicate(gdlever)	#prtg_cas02	HIDDEN_NPC
prtg_cas03,5,70,0	duplicate(gdlever)	#prtg_cas03	HIDDEN_NPC
prtg_cas04,56,283,0	duplicate(gdlever)	#prtg_cas04	HIDDEN_NPC
prtg_cas05,212,95,0	duplicate(gdlever)	#prtg_cas05	HIDDEN_NPC
