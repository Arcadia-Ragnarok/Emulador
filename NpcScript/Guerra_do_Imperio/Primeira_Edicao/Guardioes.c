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
| - Info: Controle dos Guardiões nos castelos da primeira edição de |
|         Guerra do Império.                                        |
\*-----------------------------------------------------------------*/

-	script	Gld_Guard_Template::Gld_Guard_Template	FAKE_NPC,{

	// Invocação de Guardiões nos castelos
	// Ao adicionar novos castelos, certifique-se que as coordenadas coincidem
	// com as coordenadas definidas na Estrutura do Gerente do Castelo.
	OnSpawnGuardians:
	// Define os tipos de guardiões em uma base do castelo.
	// 1 - Guardião Soldado; 2 - Guardião Arqueiro; 3 - Guardião Espadachim
	// Definir o ponto x de invocação para cada guardião.
	// [0] = Ponto de invocação do 1º guardião.
	// Definir o ponto y de invocação para cada guardião.
	// [0] = Ponto de invocação do 1º guardião.

	if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas01") {
		setarray(.@guardiantype[0],1,2,2,2,2,3,3,3);
		setarray(.@guardianposx[0],17,39,38,45,21,218,213,73);
		setarray(.@guardianposy[0],218,208,196,228,194,24,24,70);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas02") {
		setarray(.@guardiantype[0],3,3,3,1,1,2,2,2);
		setarray(.@guardianposx[0],27,88,117,60,51,21,36,210);
		setarray(.@guardianposy[0],184,43,46,202,183,177,183,7);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas03") {
		setarray(.@guardiantype[0],3,3,1,1,1,2,2,2);
		setarray(.@guardianposx[0],90,116,86,116,64,212,195,110);
		setarray(.@guardianposy[0],112,112,120,76,103,160,151,217);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas04") {
		setarray(.@guardiantype[0],2,2,2,1,1,1,3,3);
		setarray(.@guardianposx[0],187,192,148,145,169,198,48,55);
		setarray(.@guardianposy[0],100,42,88,209,53,77,72,88);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas05") {
		setarray(.@guardiantype[0],2,2,1,1,3,3,3,3);
		setarray(.@guardianposx[0],51,188,157,157,27,145,156,41);
		setarray(.@guardianposy[0],202,79,192,74,221,78,73,112);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas01") {
		setarray(.@guardiantype[0],1,1,1,2,2,3,3,3);
		setarray(.@guardianposx[0],67,184,62,36,50,50,189,200);
		setarray(.@guardianposy[0],179,20,41,186,186,67,41,167);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas02") {
		setarray(.@guardiantype[0],1,1,1,2,2,3,3,3);
		setarray(.@guardianposx[0],64,56,166,35,20,19,166,159);
		setarray(.@guardianposy[0],168,41,25,148,150,41,42,188);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas03") {
		setarray(.@guardiantype[0],2,2,1,1,1,3,3,3);
		setarray(.@guardianposx[0],48,113,48,157,243,157,234,238);
		setarray(.@guardianposy[0],176,214,207,62,41,45,25,160);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas04") {
		setarray(.@guardiantype[0],2,2,1,1,1,3,3,3);
		setarray(.@guardianposx[0],53,31,49,29,147,57,160,148);
		setarray(.@guardianposy[0],191,178,220,46,65,46,50,189);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas05") {
		setarray(.@guardiantype[0],2,2,1,1,1,3,3,3);
		setarray(.@guardianposx[0],45,71,72,66,177,66,177,193);
		setarray(.@guardianposy[0],149,163,142,47,50,17,35,166);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas01") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],229,225,222,99,65,36,51,138);
		setarray(.@guardianposy[0],92,80,111,45,31,127,144,133);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas02") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],237,228,210,57,42,287,264,27);
		setarray(.@guardianposy[0],54,72,41,241,241,257,272,20);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas03") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],245,269,36,41,39,19,37,268);
		setarray(.@guardianposy[0],37,51,39,39,65,276,277,244);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas04") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],251,232,231,32,32,35,36,270);
		setarray(.@guardianposy[0],212,212,175,287,232,45,17,41);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas05") {
		setarray(.@guardiantype[0],2,2,2,2,2,2,2,3);
		setarray(.@guardianposx[0],19,33,266,266,263,263,250,36);
		setarray(.@guardianposy[0],279,260,234,279,37,21,22,36);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas01") {
		setarray(.@guardiantype[0],1,1,1,2,2,3,3,3);
		setarray(.@guardianposx[0],182,182,153,59,50,184,196,107);
		setarray(.@guardianposy[0],62,116,86,28,36,183,189,179);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas02") {
		setarray(.@guardiantype[0],3,3,3,1,1,2,2,2);
		setarray(.@guardianposx[0],161,153,178,71,49,64,7,75);
		setarray(.@guardianposy[0],161,161,44,75,28,186,196,175);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas03") {
		setarray(.@guardiantype[0],3,3,3,1,1,2,2,2);
		setarray(.@guardianposx[0],191,137,45,50,41,191,179,191);
		setarray(.@guardianposy[0],190,190,99,87,87,42,43,72);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas04") {
		setarray(.@guardiantype[0],3,3,3,1,1,1,2,2);
		setarray(.@guardianposx[0],276,274,246,38,29,33,78,36);
		setarray(.@guardianposy[0],14,35,246,240,240,258,48,61);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas05") {
		setarray(.@guardiantype[0],3,3,3,1,1,1,2,2);
		setarray(.@guardianposx[0],266,287,245,236,251,278,32,44);
		setarray(.@guardianposy[0],262,280,250,63,63,253,253,248);
	}

	// Elimina todos guardiões já invocados antes da novas invocações.
	// Isso deve previnir a duplicações de Guardiões antes de desconectar do Server.
	killmonster(strnpcinfo(NPC_NAME_HIDDEN),strnpcinfo(NPC_NAME)+"::OnGuardianDied");

	for (.@i = 0; .@i <= 7; ++.@i) {
		.@UseGID = .@i + 10;
		if (.@guardiantype[.@i] == 1) { .@type = 1287; }
		else if (.@guardiantype[.@i] == 2) { .@type = 1285; }
		else { .@type = 1286; }
		if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),.@UseGID)) {
			guardian(strnpcinfo(NPC_NAME_HIDDEN),.@guardianposx[.@i],.@guardianposy[.@i],strmobinfo(2,.@type),.@type,"Guardião#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnGuardianDied",.@i);
		}
	}
	end;

	OnGuardianDied:
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações ] -
// ------------------------------------------------------------------
// - Luina
aldeg_cas01,218,175,0	duplicate(Gld_Guard_Template)	Guardião#aldeg_cas01	FAKE_NPC
aldeg_cas02,78,74,0	duplicate(Gld_Guard_Template)	Guardião#aldeg_cas02	FAKE_NPC
aldeg_cas03,110,118,0	duplicate(Gld_Guard_Template)	Guardião#aldeg_cas03	FAKE_NPC
aldeg_cas04,67,116,0	duplicate(Gld_Guard_Template)	Guardião#aldeg_cas04	FAKE_NPC
aldeg_cas05,52,179,0	duplicate(Gld_Guard_Template)	Guardião#aldeg_cas05	FAKE_NPC

// - Britoniah
gefg_cas01,40,48,5	duplicate(Gld_Guard_Template)	Guardião#gefg_cas01	FAKE_NPC
gefg_cas02,12,66,5	duplicate(Gld_Guard_Template)	Guardião#gefg_cas02	FAKE_NPC
gefg_cas03,106,23,5	duplicate(Gld_Guard_Template)	Guardião#gefg_cas03	FAKE_NPC
gefg_cas04,73,46,3	duplicate(Gld_Guard_Template)	Guardião#gefg_cas04	FAKE_NPC
gefg_cas05,70,52,3	duplicate(Gld_Guard_Template)	Guardião#gefg_cas05	FAKE_NPC

// - Bosque Celestial
payg_cas01,120,58,4	duplicate(Gld_Guard_Template)	Guardião#payg_cas01	FAKE_NPC
payg_cas02,22,260,7	duplicate(Gld_Guard_Template)	Guardião#payg_cas02	FAKE_NPC
payg_cas03,10,277,0	duplicate(Gld_Guard_Template)	Guardião#payg_cas03	FAKE_NPC
payg_cas04,38,284,3	duplicate(Gld_Guard_Template)	Guardião#payg_cas04	FAKE_NPC
payg_cas05,277,249,3	duplicate(Gld_Guard_Template)	Guardião#payg_cas05	FAKE_NPC

// - Valkirias
prtg_cas01,112,181,0	duplicate(Gld_Guard_Template)	Guardião#prtg_cas01	FAKE_NPC
prtg_cas02,94,61,4	duplicate(Gld_Guard_Template)	Guardião#prtg_cas02	FAKE_NPC
prtg_cas03,51,100,4	duplicate(Gld_Guard_Template)	Guardião#prtg_cas03	FAKE_NPC
prtg_cas04,259,265,4	duplicate(Gld_Guard_Template)	Guardião#prtg_cas04	FAKE_NPC
prtg_cas05,36,37,4	duplicate(Gld_Guard_Template)	Guardião#prtg_cas05	FAKE_NPC
