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
| - Copyright: ?                                                    |
| - Info: Bandeiras de ligação na WOE 2.0                           |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - @funcion Base
// * getarg(0) : Referência 
// * getarg(1) : Coordernadas X 
// * getarg(2) : Coordernadas Y 
// ------------------------------------------------------------------

function	script	LinkFlag	{
	if (getcharid(CHAR_ID_GUILD) != getcastledata(strnpcinfo(NPC_MAP), 1)) {
		end;
	} else if (getarg(0) == "Central de Conveniência") {
		mes("^3355FFEste é o Lugar do Serviço de Teleporte.\n"
			"Você gostaria a teleportar à Facilidade de Conveniência para membros do Clã?^000000");
		if (select("Ir para Facilidade de C","Cancelar") == 1) {
			warp(strnpcinfo(NPC_MAP), getarg(1), getarg(2));
		}
		close;
	} else if (getarg(0) == "Central do Emperium") {
		mes("^3355FFEste é o Serviço de Teleporte ao Castelo.\n"
			"Por favor você deseja se teleportar para o Emperium?^000000");
		if (select("Teleportar","Cancelar") == 1) {
			warp(strnpcinfo(NPC_MAP), getarg(1), getarg(2));
		}
		close;
	} else {
		mes("^3355FFEste é o Serviço de Teleporte ao Castelo.\n"
			"Por favor escolha seu destino no castelo^000000");
		for (.@i = 0; .@i < getargcount(); .@i += 3) {
			.@menu$ += getarg(.@i) + ":";
		}
		.@menu$ += "Cancelar";
		.@i = select(.@menu$) - 1;
		if (.@i != getargcount() / 3) {
			warp(strnpcinfo(NPC_MAP), getarg(.@i * 3 + 1), getarg(.@i * 3 + 2));
		}
		close;
	}
}

// ------------------------------------------------------------------
// - Mardol
arug_cas01,74,232,0	script	Portão 1 e 2#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",158,237, "Segundo Portão",297,248);
}
arug_cas01,77,232,0	script	Área 1-1 e 1-2#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",197,144, "Área 1-2",245,103);
}
arug_cas01,80,232,0	script	Área 2-1 e 2-2#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag","Área 2-1",256,35, "Área 2-2",186,26);
}
arug_cas01,83,232,0	script	Área 2-3 e 2-4#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",146,65, "Área 2-4",176,111);
}
arug_cas01,86,232,0	script	Área 3-1 e 3-2#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",94,126, "Área 3-2",126,126);
}
arug_cas01,89,232,0	script	Área 3-3 e 3-4#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-3",68,171, "Área 3-4",105,182);
}
arug_cas01,95,232,0	script	Área 1-1 e 2-1 e 3-1#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",197,144, "Área 2-1",256,35, "Área 3-1",146,65);
}
arug_cas01,98,232,0	script	Área 1-2 e 2-2 e 3-3#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-2",245,103, "Área 2-2",186,26, "Área 3-3",68,171);
}
arug_cas01,92,232,0	script	Portão#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Portão",233,130);
}
arug_cas01,101,232,0	script	Conveniência#arug_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência", 121, 357);
}
arug_cas01,72,176,0	script	Emperium#Emp::LFMardol	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium", 67, 193);
}
arug_cas01,103,186,0	duplicate(LFMardol)	Mardol#Emp02	HIDDEN_NPC
arug_cas01,150,102,0	duplicate(LFMardol)	Mardol#Emp03	HIDDEN_NPC
arug_cas01,208,68,0	duplicate(LFMardol)	Mardol#Emp04	HIDDEN_NPC
arug_cas01,249,52,0	duplicate(LFMardol)	Mardol#Emp05	HIDDEN_NPC
arug_cas01,234,76,0	duplicate(LFMardol)	Mardol#Emp06	HIDDEN_NPC
arug_cas01,249,76,0	duplicate(LFMardol)	Mardol#Emp07	HIDDEN_NPC
arug_cas01,204,142,0	duplicate(LFMardol)	Mardol#Emp08	HIDDEN_NPC
arug_cas01,183,244,0	duplicate(LFMardol)	Mardol#Emp09	HIDDEN_NPC
arug_cas01,292,219,0	duplicate(LFMardol)	Mardol#Emp10	HIDDEN_NPC
arug_cas01,92,126,4	script	Mardol#LFE_Mardol	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium",67,193);
}
arug_cas01,127,126,4	duplicate(Mardol#LFE_Mardol)	Mardol#LFE_Mardol02	HIDDEN_NPC
//arug_cas01,102,120,4	duplicate(Mardol#LFE_Mardol)	Mardol#LFE_Mardol03	GUILD_FLAG
//arug_cas01,117,120,4	duplicate(Mardol#LFE_Mardol)	Mardol#LFE_Mardol04	GUILD_FLAG
//arug_cas01,233,140,4	duplicate(Mardol#LFE_Mardol)	Mardol#LFE_Mardol05	GUILD_FLAG

// ------------------------------------------------------------------
// - Cyr
arug_cas02,98,270,0	script	Portão 1 e 2#arug_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",10,187, "Segundo Portão",268,187);
}
arug_cas02,98,266,0	script	Área 1-1 e 1-2#arug_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",66,31, "Área 1-2",212,31);
}
arug_cas02,98,262,0	script	Área 1-3 e 1-4#arug_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-3",90,120, "Área 1-4",188,119);
}
arug_cas02,98,258,0	script	Área 2-1 e 2-2#arug_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",119, 183,"Área 2-2",159,183);
}
arug_cas02,98,253,0	script	Área 2-3 e 2-4#arug_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",156,324, "Área 2-4",174,372);
}
arug_cas02,98,249,0	script	Área 3-1 e 3-2#arug_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",28,325, "Área 3-2",57,325);
}
arug_cas02,98,245,0	script	Central 2 e 3#arug_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área Central 2",156,263, "Área Central 3",43,354);
}
arug_cas02,98,241,0	script	Conveniência#arug_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência",387,323);
}
arug_cas02,216,92,0	script	Emperium#LFE_Cyr	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium",43,256);
}
arug_cas02,63,92,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr02	HIDDEN_NPC
arug_cas02,127,133,4	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr03	HIDDEN_NPC
arug_cas02,152,133,4	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr04	HIDDEN_NPC
arug_cas02,149,218,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr05	HIDDEN_NPC
arug_cas02,162,218,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr06	HIDDEN_NPC
arug_cas02,128,350,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr07	HIDDEN_NPC
arug_cas02,128,341,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr08	HIDDEN_NPC
arug_cas02,49,317,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr09	HIDDEN_NPC
arug_cas02,30,317,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr10	HIDDEN_NPC
arug_cas02,9,190,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr11	HIDDEN_NPC
arug_cas02,271,190,0	duplicate(Emperium#LFE_Cyr)	Emperium#LFE_Cyr12	HIDDEN_NPC
/*
arug_cas02,129,178,4	script	Emperium#LF2E_Cyr	GUILD_FLAG,{
	callfunc("LinkFlag", "Central do Emperium",43,256);
}
arug_cas02,149,178,4	duplicate(Emperium#LF2E_Cyr)	Emperium#LF2E_Cyr02	GUILD_FLAG
arug_cas02,132,38,4	duplicate(Emperium#LF2E_Cyr)	Emperium#LF2E_Cyr03	GUILD_FLAG
arug_cas02,147,38,4	duplicate(Emperium#LF2E_Cyr)	Emperium#LF2E_Cyr04	GUILD_FLAG
*/

// ------------------------------------------------------------------
// - Horn
arug_cas03,122,314,0	script	Portão 1 e 2#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",84,158, "Segundo Portão",197,136);
}
arug_cas03,125,314,0	script	Área 1-1 e 1-2#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",65,94, "Área 1-2",211,97);
}
arug_cas03,128,314,0	script	Área 1-3 e 1-4#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-3",112,73, "Área 1-4",171,73);
}
arug_cas03,131,314,0	script	Área 2-1 e 2-2#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",112,152, "Área 2-2",172,152);
}
arug_cas03,134,314,0	script	Área 2-3 e 2-4#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",120,186, "Área 2-4",162,186);
}
arug_cas03,149,314,0	script	Área 3-1 e 3-2#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",116,235, "Área 3-2",164,235);
}
arug_cas03,152,314,0	script	Área 1-1 e 2-1#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",65,94, "Área 2-1",112,152,"Área 3-1",116,235);
}
arug_cas03,158,314,0	script	Área 1-4 e 2-4#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-4",171,73, "Área 2-4",162,186);
}
arug_cas03,155,314,0	script	Área 1-2 e 2-2 e 2-3#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-2",211,97, "Área 2-2",172,152,"Área 3-2",164,235);
}
arug_cas03,161,314,0	script	Conveniência#arug_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência",321,57);
}
arug_cas03,45,158,0	script	Emperium#LFE_Horn	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium",121,318);
}
arug_cas03,226,156,0	duplicate(Emperium#LFE_Horn)	Horn#LFE_Horn02	HIDDEN_NPC
arug_cas03,134,62,4	duplicate(Emperium#LFE_Horn)	Horn#LFE_Horn03	HIDDEN_NPC
arug_cas03,149,62,4	duplicate(Emperium#LFE_Horn)	Horn#LFE_Horn04	HIDDEN_NPC
arug_cas03,123,154,0	duplicate(Emperium#LFE_Horn)	Horn#LFE_Horn05	HIDDEN_NPC
arug_cas03,160,154,0	duplicate(Emperium#LFE_Horn)	Horn#LFE_Horn06	HIDDEN_NPC
arug_cas03,135,205,0	duplicate(Emperium#LFE_Horn)	Horn#LFE_Horn07	HIDDEN_NPC
arug_cas03,148,205,0	duplicate(Emperium#LFE_Horn)	Horn#LFE_Horn08	HIDDEN_NPC
arug_cas03,134,260,0	duplicate(Emperium#LFE_Horn)	Horn#LFE_Horn09	HIDDEN_NPC
/*
arug_cas03,148,103,4	script	Emperium#LF2E_Horn	GUILD_FLAG,{
	callfunc("LinkFlag", "Central do Emperium",121,318);
}
arug_cas03,135,103,4	duplicate(Emperium#LF2E_Horn)	Emperium#LF2E_Horn02	GUILD_FLAG
arug_cas03,63,51,7	duplicate(Emperium#LF2E_Horn)	Emperium#LF2E_Horn03	GUILD_FLAG
arug_cas03,214,51,1	duplicate(Emperium#LF2E_Horn)	Emperium#LF2E_Horn04	GUILD_FLAG
*/

// ------------------------------------------------------------------
// - Gefn
arug_cas04,122,314,0	script	Portão 1 e 2#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",84,158, "Segundo Portão",197,136);
}
arug_cas04,125,314,0	script	Área 1-1 e 1-2#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",65,94, "Área 1-2",211,97);
}
arug_cas04,128,314,0	script	Área 1-3 e 1-4#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-3",112,73, "Área 1-4",171,73);
}
arug_cas04,131,314,0	script	Área 2-1 e 2-2#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",112,152, "Área 2-2",172,152);
}
arug_cas04,134,314,0	script	Área 2-3 e 2-4#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",120,186, "Área 2-4",162,186);
}
arug_cas04,149,314,0	script	Área 3-1 e 3-2#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",116,235, "Área 3-2",164,235);
}
arug_cas04,152,314,0	script	Área 1-1 e 2-1 e 3-1#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",65,94, "Área 2-1",112,152, "Área 3-1",116,235);
}
arug_cas04,155,314,0	script	Área 1-2 e 2-2 e 3-2#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-2",211,97, "Área 2-2",172,152, "Área 3-2",164,235);
}
arug_cas04,158,314,0	script	Área 1-4 e 2-4#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-4",171,73, "Área 2-4",162,186);
}
arug_cas04,161,314,0	script	Conveniência#arug_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência",321,57);
}
arug_cas04,45,158,0	script	Emperium#LFE_Gefn	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium",121,318);
}
arug_cas04,226,156,0	duplicate(Emperium#LFE_Gefn)	Emperium#LFE_Gefn02	HIDDEN_NPC
arug_cas04,134,62,4	duplicate(Emperium#LFE_Gefn)	Emperium#LFE_Gefn03	HIDDEN_NPC
arug_cas04,149,62,4	duplicate(Emperium#LFE_Gefn)	Emperium#LFE_Gefn04	HIDDEN_NPC
arug_cas04,123,154,0	duplicate(Emperium#LFE_Gefn)	Emperium#LFE_Gefn05	HIDDEN_NPC
arug_cas04,160,154,0	duplicate(Emperium#LFE_Gefn)	Emperium#LFE_Gefn06	HIDDEN_NPC
arug_cas04,135,205,0	duplicate(Emperium#LFE_Gefn)	Emperium#LFE_Gefn07	HIDDEN_NPC
arug_cas04,148,205,0	duplicate(Emperium#LFE_Gefn)	Emperium#LFE_Gefn08	HIDDEN_NPC
arug_cas04,134,260,0	duplicate(Emperium#LFE_Gefn)	Emperium#LFE_Gefn09	HIDDEN_NPC
/*
arug_cas04,148,103,4	script	Emperium#LF2E_Gefn	GUILD_FLAG,{
	callfunc("LinkFlag", "Central do Emperium",121,318);
}
arug_cas04,135,103,4	duplicate(Emperium#LF2E_Gefn)	Emperium#LF2E_Gefn02	GUILD_FLAG
arug_cas04,63,51,7	duplicate(Emperium#LF2E_Gefn)	Emperium#LF2E_Gefn03	GUILD_FLAG
arug_cas04,214,51,1	duplicate(Emperium#LF2E_Gefn)	Emperium#LF2E_Gefn04	GUILD_FLAG
*/

// ------------------------------------------------------------------
// - Banadis
arug_cas05,122,314,0	script	Portão 1 e 2#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",84,158, "Segundo Portão",197,136);
}
arug_cas05,125,314,0	script	Área 1-1 e 1-2#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",65,94, "Área 1-2",211,97);
}
arug_cas05,128,314,0	script	Área 1-3 e 1-4#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-3",112,73, "Área 1-4",171,73);
}
arug_cas05,131,314,0	script	Área 2-1 e 2-2#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",112,152, "Área 2-2",172,152);
}
arug_cas05,134,314,0	script	Área 2-3 e 2-4#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",120,186, "Área 2-4",162,186);
}
arug_cas05,149,314,0	script	Área 3-1 e 3-2#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",116,235, "Área 3-2",164,235);
}
arug_cas05,152,314,0	script	Área 1-1 e 2-1 e 3-1#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",65,94, "Área 2-1",112,152, "Área 3-1",116,235);
}
arug_cas05,155,314,0	script	Área 1-2 e 2-2 e 3-2#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-2",211,97, "Área 2-2",172,152, "Área 3-2",164,235);
}
arug_cas05,158,314,0	script	Área 1-4 e 2-4#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-4",171,73, "Área 2-4",162,186);
}
arug_cas05,161,314,0	script	Conveniência#arug_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência",321,57);
}
arug_cas05,45,158,0	script	Emperium#LFE_Banadis	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium",121,318);
}
arug_cas05,226,156,0	duplicate(Emperium#LFE_Banadis)	Emperium#LFE_Banadis02	HIDDEN_NPC
arug_cas05,134,62,4	duplicate(Emperium#LFE_Banadis)	Emperium#LFE_Banadis03	HIDDEN_NPC
arug_cas05,149,62,4	duplicate(Emperium#LFE_Banadis)	Emperium#LFE_Banadis04	HIDDEN_NPC
arug_cas05,123,154,0	duplicate(Emperium#LFE_Banadis)	Emperium#LFE_Banadis05	HIDDEN_NPC
arug_cas05,160,154,0	duplicate(Emperium#LFE_Banadis)	Emperium#LFE_Banadis06	HIDDEN_NPC
arug_cas05,135,205,0	duplicate(Emperium#LFE_Banadis)	Emperium#LFE_Banadis07	HIDDEN_NPC
arug_cas05,148,205,0	duplicate(Emperium#LFE_Banadis)	Emperium#LFE_Banadis08	HIDDEN_NPC
arug_cas05,134,260,0	duplicate(Emperium#LFE_Banadis)	Emperium#LFE_Banadis09	HIDDEN_NPC
/*
arug_cas05,148,103,4	script	Emperium#LF2E_Banadis	GUILD_FLAG,{
	callfunc("LinkFlag", "Central do Emperium",121,318);
}
arug_cas05,135,103,4	duplicate(Emperium#LF2E_Banadis)	Emperium#LF2E_Banadis02	GUILD_FLAG
arug_cas05,63,51,7	duplicate(Emperium#LF2E_Banadis)	Emperium#LF2E_Banadis03	GUILD_FLAG
arug_cas05,214,51,1	duplicate(Emperium#LF2E_Banadis)	Emperium#LF2E_Banadis04	GUILD_FLAG
*/

// ------------------------------------------------------------------
// - Himinn
schg_cas01,106,302,0	script	Portão 1 e 2#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",19,26, "Segundo Portão",219,90);
}
schg_cas01,109,302,0	script	Área 1-1 e 1-2#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",89,43, "Área 1-2",141,45);
}
schg_cas01,112,302,0	script	Área 2-1 e 2-2#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",137,54, "Área 2-2",102,54);
}
schg_cas01,115,302,0	script	Área 2-3 e 2-4#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",94,147, "Área 2-4",163,140);
}
schg_cas01,118,302,0	script	Área 2-3b e 2-4b#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",87,220, "Área 2-4",151,220);
}
schg_cas01,121,302,0	script	Área 3-1 e 3-2#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",100,242, "Área 3-2",136,242);
}
schg_cas01,124,302,0	script	Central 1 e 2#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área Central 1",120,168, "Área Central 2",119,211);
}
schg_cas01,127,302,0	script	Área 1-1 e 2-1 e 3-1#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",89,43, "Área 2-1",94,147, "Área 3-1",100,242);
}
schg_cas01,130,302,0	script	Área 2-3 e 3-2#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-2",141,45, "Área 2-3",163,140, "Área 3-2",136,243);
}
schg_cas01,133,302,0	script	Conveniência#schg_cas01	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência",275,244);
}
schg_cas01,17,45,0	script	Emperium#LFE_Himinn	HIDDEN_NPC,{
	callfunc("LinkFlag","Central do Emperium",120,290);
}
schg_cas01,207,95,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn02	HIDDEN_NPC
schg_cas01,99,77,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn03	HIDDEN_NPC
schg_cas01,140,77,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn04	HIDDEN_NPC
schg_cas01,112,212,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn05	HIDDEN_NPC
schg_cas01,127,212,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn06	HIDDEN_NPC
schg_cas01,113,238,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn07	HIDDEN_NPC
schg_cas01,126,238,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn08	HIDDEN_NPC
schg_cas01,95,247,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn09	HIDDEN_NPC
schg_cas01,144,247,0	duplicate(Emperium#LFE_Himinn)	Emperium#LFE_Himinn10	HIDDEN_NPC
/*
schg_cas01,111,46,4	script	Emperium#LF2E_Himinn	GUILD_FLAG,{
	callfunc("LinkFlag", "Central do Emperium",120,290);
}
schg_cas01,129,46,4	duplicate(Emperium#LF2E_Himinn)	Emperium#LF2E_Himinn02	GUILD_FLAG
schg_cas01,109,150,4	duplicate(Emperium#LF2E_Himinn)	Emperium#LF2E_Himinn03	GUILD_FLAG
schg_cas01,130,150,4	duplicate(Emperium#LF2E_Himinn)	Emperium#LF2E_Himinn04	GUILD_FLAG
*/

// ------------------------------------------------------------------
// - Andlangr
schg_cas02,143,198,0	script	Portão 1 e 2#schg_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",235,44, "Segundo Portão",302,233);
}
schg_cas02,143,202,0	script	Área 1-1 e 1-2#schg_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",317,83, "Área 1-2",359,83);
}
schg_cas02,143,206,0	script	Área 2-1 e 2-2#schg_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",283,79, "Área 2-2",280,122);
}
schg_cas02,145,208,0	script	Área 3-1 e 3-2#schg_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",215,110, "Área 3-2",255,215);
}
schg_cas02,180,208,0	script	Central 1 e 2#schg_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área Central 1",338,153, "Área Central 2",213,226);
}
schg_cas02,182,206,0	script	Área 1-1 e 2-1#schg_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",317,83, "Área 2-1",283,79, "Área 3-1",215,110);
}
schg_cas02,182,202,0	script	Área 1-1 e 2-2 e 3-2#schg_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-2",359,83, "Área 2-2",280,122, "Área 3-2",255,215);
}
schg_cas02,182,198,0	script	Conveniência#schg_cas02	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência",101,306);
}
schg_cas02,235,222,0	script	Emperium#LFE_Andlangr	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium",136,188);
}
schg_cas02,157,136,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr02	HIDDEN_NPC
schg_cas02,168,136,4	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr03	HIDDEN_NPC
schg_cas02,320,232,4	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr04	HIDDEN_NPC
schg_cas02,295,109,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr05	HIDDEN_NPC
schg_cas02,295,92,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr06	HIDDEN_NPC
schg_cas02,285,90,4	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr07	HIDDEN_NPC
schg_cas02,285,190,4	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr08	HIDDEN_NPC
schg_cas02,238,66,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr09	HIDDEN_NPC
schg_cas02,230,45,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr10	HIDDEN_NPC
schg_cas02,233,120,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr11	HIDDEN_NPC
schg_cas02,247,120,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr12	HIDDEN_NPC
schg_cas02,261,162,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr13	HIDDEN_NPC
schg_cas02,244,162,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr14	HIDDEN_NPC
schg_cas02,235,207,0	duplicate(Emperium#LFE_Andlangr)	Emperium#LFE_Andlangr15	HIDDEN_NPC

// ------------------------------------------------------------------
// - Vidblainn
schg_cas03,346,211,0	script	Portão 1 e 2#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",262,323, "Segundo Portão",378,263);
}
schg_cas03,301,213,0	script	Área 1-2 e 2-2#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-2",262,323, "Área 2-2",378,263, "Área 3-2",306,320);
}
schg_cas03,346,203,0	script	Área 2-1 e 2-2#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",309,292, "Área 2-2",348,292);
}
schg_cas03,346,195,0	script	Área 3-1 e 3-2#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",226,220, "Área 3-2",185,249);
}
schg_cas03,301,209,0	script	Áreas 2 e Central 2#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",309,292, "Área 2-2",348,292, "Área Central 2",326,263);
}
schg_cas03,301,194,0	script	Áreas 3 e Central 3#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",226,220, "Área 3-2",185,249, "Área Central 3",271,226);
}
schg_cas03,346,207,0	script	Central 1#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área Central 1",306,320);
}
schg_cas03,346,199,0	script	Central 2#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área Central 2",266,263);
}
schg_cas03,346,191,0	script	Central 3#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área Central 3",271,226);
}
schg_cas03,301,190,0	script	Conveniência#schg_cas03	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência",57,13);
}
schg_cas03,335,305,0	script	Emperium#LFE_Vidblainn	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium",308,202);
}
schg_cas03,322,305,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn02	HIDDEN_NPC
schg_cas03,352,248,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn03	HIDDEN_NPC
schg_cas03,320,283,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn04	HIDDEN_NPC
schg_cas03,337,283,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn05	HIDDEN_NPC
schg_cas03,233,320,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn06	HIDDEN_NPC
schg_cas03,207,239,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn07	HIDDEN_NPC
schg_cas03,207,228,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn08	HIDDEN_NPC
schg_cas03,266,206,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn09	HIDDEN_NPC
schg_cas03,266,197,0	duplicate(Emperium#LFE_Vidblainn)	Emperium#LFE_Vidblainn10	HIDDEN_NPC
/*
schg_cas03,283,206,2	script	Emperium#LF2E_Vidblainn	GUILD_FLAG,{
	callfunc("LinkFlag", "Central do Emperium",308,202);
}
schg_cas03,283,197,2	duplicate(Emperium#LF2E_Vidblainn)	Emperium#LF2E_Vidblainn02	GUILD_FLAG
schg_cas03,332,323,6	duplicate(Emperium#LF2E_Vidblainn)	Emperium#LF2E_Vidblainn03	GUILD_FLAG
schg_cas03,343,323,2	duplicate(Emperium#LF2E_Vidblainn)	Emperium#LF2E_Vidblainn04	GUILD_FLAG
*/

// ------------------------------------------------------------------
// - Hljod
schg_cas04,106,302,0	script	Portão 1 e 2#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão",19,26, "Segundo Portão",219,90);
}
schg_cas04,109,302,0	script	Área 1-1 e 1-2#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",89,43, "Área 1-2",141,45);
}
schg_cas04,112,302,0	script	Área 2-1 e 2-2#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",137,54, "Área 2-2",102,54);
}
schg_cas04,115,302,0	script	Área 2-3a e 2-4a#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",94,147, "Área 2-4",163,140);
}
schg_cas04,118,302,0	script	Área 2-3b e 2-4b#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",87,220, "Área 2-4",151,220);
}
schg_cas04,121,302,0	script	Área 3-1 e 3-2#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",100,242, "Área 3-2",136,242);
}
schg_cas04,124,302,0	script	Central 1 e 2#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área Central 1",120,168, "Área Central 2",119,211);
}
schg_cas04,127,302,0	script	Área 1-1 e 2-1 e 3-1#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",89,43, "Área 2-1",94,147, "Área 3-1",100,242);
}
schg_cas04,130,302,0	script	Área 1-1 e 2-3 e 3-2#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-2",141,45, "Área 2-3",163,140, "Área 3-2",136,243);
}
schg_cas04,133,302,0	script	Conveniência#schg_cas04	HIDDEN_NPC,{
	callfunc("LinkFlag","Central de Conveniência",275,244);
}
schg_cas04,17,45,0	script	Emperium#LFE_Hljod	HIDDEN_NPC,{
	callfunc("LinkFlag","Central do Emperium",120,290);
}
schg_cas04,207,95,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod02	HIDDEN_NPC
schg_cas04,99,77,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod03	HIDDEN_NPC
schg_cas04,140,77,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod04	HIDDEN_NPC
schg_cas04,112,212,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod05	HIDDEN_NPC
schg_cas04,127,212,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod06	HIDDEN_NPC
schg_cas04,113,238,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod07	HIDDEN_NPC
schg_cas04,126,238,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod08	HIDDEN_NPC
schg_cas04,95,247,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod09	HIDDEN_NPC
schg_cas04,144,247,0	duplicate(Emperium#LFE_Hljod)	Emperium#LFE_Hljod10	HIDDEN_NPC
/*
schg_cas04,111,46,4	script	Emperium#LF2E_Hljod	GUILD_FLAG,{
	callfunc("LinkFlag", "Central do Emperium",120,290);
}
schg_cas04,129,46,4	duplicate(Emperium#LF2E_Hljod)	Emperium#LF2E_Hljod02	GUILD_FLAG
schg_cas04,109,150,4	duplicate(Emperium#LF2E_Hljod)	Emperium#LF2E_Hljod03	GUILD_FLAG
schg_cas04,130,150,4	duplicate(Emperium#LF2E_Hljod)	Emperium#LF2E_Hljod04	GUILD_FLAG
*/

// ------------------------------------------------------------------
// - Skidbladnir
schg_cas05,106,302,0	script	Portão 1 e 2#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Primeiro Portão", 19,26,"Segundo Portão",219,90);
}
schg_cas05,109,302,0	script	Área 1-1 e 1-2#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 1-1",89,43, "Área 1-2",141,45);
}
schg_cas05,112,302,0	script	Área 2-1 e 2-2#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-1",137,54, "Área 2-2",102,54);
}
schg_cas05,115,302,0	script	Área 2-3a e 2-4a#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",94,147, "Área 2-4",163,140);
}
schg_cas05,118,302,0	script	Área 2-3b e 2-4b#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 2-3",87,220, "Área 2-4",151,220);
}
schg_cas05,121,302,0	script	Área 3-1 e 3-2#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área 3-1",100,242, "Área 3-2",136,242);
}
schg_cas05,124,302,0	script	Central 1 e e#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Área Central 1",120,168, "Área Central 2",119,211);
}
schg_cas05,127,302,0	script	Área 1-1 e 2-1 e 3-1#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Area 1-1",89,43, "Area 2-1",94,147, "Area 3-1",100,242);
}
schg_cas05,130,302,0	script	Área 1-2 e 2-3 e 3-2#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Area 1-2",141,45, "Area 2-3",163,140, "Area 3-2",136,243);
}
schg_cas05,133,302,0	script	Conveniência#schg_cas05	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central de Conveniência",275,244);
}
schg_cas05,17,45,0	script	Emperium#LFE_Skidbladnir	HIDDEN_NPC,{
	callfunc("LinkFlag", "Central do Emperium",120,290);
}
schg_cas05,207,95,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir02	HIDDEN_NPC
schg_cas05,99,77,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir03	HIDDEN_NPC
schg_cas05,140,77,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir04	HIDDEN_NPC
schg_cas05,112,212,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir05	HIDDEN_NPC
schg_cas05,127,212,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir06	HIDDEN_NPC
schg_cas05,113,238,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir07	HIDDEN_NPC
schg_cas05,126,238,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir08	HIDDEN_NPC
schg_cas05,95,247,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir09	HIDDEN_NPC
schg_cas05,144,247,0	duplicate(Emperium#LFE_Skidbladnir)	Emperium#LFE_Skidbladnir10	HIDDEN_NPC
/*
schg_cas05,111,46,4	script	Emperium#LF2E_Skidbladnir	GUILD_FLAG,{
	callfunc("LinkFlag", "Central do Emperium",120,290);
}
schg_cas05,129,46,4	duplicate(Emperium#LF2E_Skidbladnir)	Emperium#LF2E_Skidbladnir02	GUILD_FLAG
schg_cas05,109,150,4	duplicate(Emperium#LF2E_Skidbladnir)	Emperium#LF2E_Skidbladnir03	GUILD_FLAG
schg_cas05,130,150,4	duplicate(Emperium#LF2E_Skidbladnir)	Emperium#LF2E_Skidbladnir04	GUILD_FLAG
*/
