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
| - Info: Sala do Tesouro nos castelos da primeira edição de Guerra |
|         do Império.                                               |
| * Invocação dos baús do tesouro.                                  |
| * Aplicação dos invetimentos feitos.                              |
| * Saída da sala do tesouro.                                       |
\*-----------------------------------------------------------------*/

-	script	Gld_Trea_Spawn::Gld_Trea_Spawn	FAKE_NPC,{
	end;

	OnClock0001:
	if (strnpcinfo(NPC_NAME_VISIBLE) == "Gld_Trea_Spawn") { end; }

	.@GID = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),1);

	// Se não houver nenhum dono, não fazer nada.
	if (!.@GID) { end; }

	// Verifica como está a atual economia
	.@Treasure = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),2)/5+4;

	// Pega as informações e envia as coordenadas
	if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas01") {
		.@treasurebox = 1324;
		setarray(.@treasurex[0],115,122,115,122,116,117,118,119,120,121,121,121,121,121,121,120,119,118,117,116,116,116,116,116);
		setarray(.@treasurey[0],226,226,219,219,225,225,225,225,225,225,224,223,222,221,220,220,220,220,220,220,221,222,223,224);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas02") {
		.@treasurebox = 1326;
		setarray(.@treasurex[0],134,135,135,134,132,133,134,135,136,137,137,137,137,137,137,136,135,134,133,132,132,132,132,132);
		setarray(.@treasurey[0],231,231,230,230,233,233,233,233,233,233,232,231,230,229,228,228,228,228,228,228,229,230,231,232);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas03") {
		.@treasurebox = 1328;
		setarray(.@treasurex[0],224,225,225,224,222,223,224,225,226,227,227,227,227,227,227,226,225,224,223,222,222,222,222,222);
		setarray(.@treasurey[0],269,269,268,268,271,271,271,271,271,271,270,269,268,267,266,266,266,266,266,266,267,268,269,270);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas04") {
		.@treasurebox = 1330;
		setarray(.@treasurex[0],84,85,85,84,82,83,84,85,86,87,87,87,87,87,87,86,85,84,83,82,82,82,82,82);
		setarray(.@treasurey[0],13,13,12,12,15,15,15,15,15,15,14,13,12,11,10,10,10,10,10,10,11,12,13,14);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "aldeg_cas05") {
		.@treasurebox = 1332;
		setarray(.@treasurex[0],61,62,62,61,59,60,61,62,63,64,64,64,64,64,64,63,62,61,60,59,59,59,59,59);
		setarray(.@treasurey[0],12,12,11,11,14,14,14,14,14,14,13,12,11,10,9,9,9,9,9,9,10,11,12,13);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas01") {
		.@treasurebox = 1334;
		setarray(.@treasurex[0],153,154,154,153,151,152,153,154,155,156,156,156,156,156,156,155,154,153,152,151,151,151,151,151);
		setarray(.@treasurey[0],113,113,112,112,115,115,115,115,115,115,114,113,112,111,110,110,110,110,110,110,111,112,113,114);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas02") {
		.@treasurebox = 1336;
		setarray(.@treasurex[0],139,140,140,139,137,138,139,140,141,142,142,142,142,142,142,141,140,139,138,137,137,137,137,137);
		setarray(.@treasurey[0],115,115,114,114,117,117,117,117,117,117,116,115,114,113,112,112,112,112,112,112,113,114,115,116);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas03") {
		.@treasurebox = 1338;
		setarray(.@treasurex[0],269,270,270,269,267,268,269,270,271,272,272,272,272,272,272,271,270,269,268,267,267,267,267,267);
		setarray(.@treasurey[0],291,291,290,290,293,293,293,293,293,293,292,291,290,289,288,288,288,288,288,288,289,290,291,292);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas04") {
		.@treasurebox = 1340;
		setarray(.@treasurex[0],115,116,116,115,113,114,115,116,117,118,118,118,118,118,118,117,116,115,114,113,113,113,113,113);
		setarray(.@treasurey[0],119,119,118,118,121,121,121,121,121,121,120,119,118,117,116,116,116,116,116,116,117,118,119,120);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "gefg_cas05") {
		.@treasurebox = 1342;
		setarray(.@treasurex[0],143,144,144,143,141,142,143,144,145,146,146,146,146,146,146,145,144,143,142,141,141,141,141,141);
		setarray(.@treasurey[0],110,110,109,109,112,112,112,112,112,112,111,110,109,108,107,107,107,107,107,107,108,109,110,111);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas01") {
		.@treasurebox = 1344;
		setarray(.@treasurex[0],289,292,292,289,288,289,290,291,292,293,293,293,293,293,293,292,291,290,289,288,288,288,288,288);
		setarray(.@treasurey[0],10,10,7,7,11,11,11,11,11,11,10,9,8,7,6,6,6,6,6,6,7,8,9,10);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas02") {
		.@treasurebox = 1346;
		setarray(.@treasurex[0],143,146,146,143,142,143,144,145,146,147,147,147,147,147,147,146,145,144,143,142,142,142,142,142);
		setarray(.@treasurey[0],146,146,143,143,147,147,147,147,147,147,146,145,144,143,142,142,142,142,142,142,143,144,145,146);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas03") {
		.@treasurebox = 1348;
		setarray .@treasurex[0],158,159,159,158,156,157,158,159,160,161,161,161,161,161,161,160,159,158,157,156,156,156,156,156;
		setarray .@treasurey[0],169,169,168,168,171,171,171,171,171,171,170,169,168,167,166,166,166,166,166,166,167,168,169,170;
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas04") {
		.@treasurebox = 1350;
		setarray(.@treasurex[0],146,147,147,146,144,145,146,147,148,149,149,149,149,149,149,148,147,146,145,144,144,144,144,144);
		setarray(.@treasurey[0],48,48,47,47,50,50,50,50,50,50,49,48,47,46,45,45,45,45,45,45,46,47,48,49);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "payg_cas05") {
		.@treasurebox = 1352;
		setarray(.@treasurex[0],155,158,158,155,154,155,156,157,158,159,159,159,159,159,159,158,157,156,155,154,154,154,154,154);
		setarray(.@treasurey[0],134,134,131,131,135,135,135,135,135,135,134,133,132,131,130,130,130,130,130,130,131,132,133,134);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas01") {
		.@treasurebox = 1354;
		setarray(.@treasurex[0],10,11,11,10,8,9,10,11,12,13,13,13,13,13,13,12,11,10,9,8,8,8,8,8);
		setarray(.@treasurey[0],209,209,208,208,211,211,211,211,211,211,210,209,208,207,206,206,206,206,206,206,207,208,209,210);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas02") {
		.@treasurebox = 1356;
		setarray(.@treasurex[0],201,202,202,201,199,200,201,202,203,204,204,204,204,204,204,203,202,201,200,199,199,199,199,199);
		setarray(.@treasurey[0],228,228,227,227,230,230,230,230,230,230,229,228,227,226,225,225,225,225,225,225,226,227,228,229);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas03") {
		.@treasurebox = 1358;
		setarray(.@treasurex[0],187,188,188,187,185,186,187,188,189,190,190,190,190,190,190,189,188,187,186,185,185,185,185,185);
		setarray(.@treasurey[0],132,132,131,131,134,134,134,134,134,134,133,132,131,130,129,129,129,129,129,129,130,131,132,133);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas04") {
		.@treasurebox = 1360;
		setarray(.@treasurex[0],269,270,270,269,267,268,269,270,271,272,272,272,272,272,272,271,270,269,268,267,267,267,267,267);
		setarray(.@treasurey[0],162,162,161,161,164,164,164,164,164,164,163,162,161,160,159,159,159,159,159,159,160,161,162,163);
	} else if (strnpcinfo(NPC_NAME_HIDDEN) == "prtg_cas05") {
		.@treasurebox = 1362;
		setarray(.@treasurex[0],275,276,276,275,273,274,275,276,277,278,278,278,278,278,278,277,276,275,274,273,273,273,273,273);
		setarray(.@treasurey[0],178,178,177,177,180,180,180,180,180,180,179,178,177,176,175,175,175,175,175,175,176,177,178,179);
	}


	// Aplicar investimento nas Economias e Defesas.
	// Só acontece se houver investimentos realizados.
	if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),4)) {
		.@Economy = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),2);
		setcastledata(strnpcinfo(NPC_NAME_HIDDEN),2,.@Economy + getcastledata(strnpcinfo(NPC_NAME_HIDDEN),4) + (rand(2) && getgdskilllv(.@GID,10014)));
		if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),2) > 100) {
			setcastledata(strnpcinfo(NPC_NAME_HIDDEN),2,100);
		}
	}
	if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),5)) {
		.@defence = getcastledata(strnpcinfo(NPC_NAME_HIDDEN),3);
		setcastledata(strnpcinfo(NPC_NAME_HIDDEN),3,.@defence + getcastledata(strnpcinfo(NPC_NAME_HIDDEN),5));
		if (getcastledata(strnpcinfo(NPC_NAME_HIDDEN),3) > 100) {
			setcastledata(strnpcinfo(NPC_NAME_HIDDEN),3,100);
		}
	}
	// Redefinição de limites de investimentos diários.
	setcastledata(strnpcinfo(NPC_NAME_HIDDEN),4,0);
	setcastledata(strnpcinfo(NPC_NAME_HIDDEN),5,0);

	// Invocar caixas do tesouro na ordem correta.
	for (.@i = 0; .@i < .@Treasure ; ++.@i) {
		.@boxid = .@treasurebox + (.@i+2) % 2;
		.@box = 1 << .@i;
		// Não invoca baús se eles já existem.
		if ((getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & .@box) == 0) {
			monster(strnpcinfo(NPC_NAME_HIDDEN),.@treasurex[.@i],.@treasurey[.@i],"Baú do Tesouro",.@boxid,1,"Treasure#"+strnpcinfo(NPC_NAME_HIDDEN)+"::OnTreasureDied"+.@i);
			setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") | .@box);
		}
	}
	end;

	//--------------------------------------------------------------
	// Eventos individuais 'Você matou o Baú' para garantir
	// invocações adequadas na mudança diária.
	//--------------------------------------------------------------
	OnTreasureDied0:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 1);
	end;
	OnTreasureDied1:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 2);
	end;
	OnTreasureDied2:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 4);
	end;
	OnTreasureDied3:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 8);
	end;
	OnTreasureDied4:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 16);
	end;
	OnTreasureDied5:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 32);
	end;
	OnTreasureDied6:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 64);
	end;
	OnTreasureDied7:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 128);
	end;
	OnTreasureDied8:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 256);
	end;
	OnTreasureDied9:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 512);
	end;
	OnTreasureDied10:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 1024);
	end;
	OnTreasureDied11:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 2048);
	end;
	OnTreasureDied12:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 4096);
	end;
	OnTreasureDied13:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 8192);
	end;
	OnTreasureDied14:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 16384);
	end;
	OnTreasureDied15:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 32768);
	end;
	OnTreasureDied16:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 65536);
	end;
	OnTreasureDied17:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 131072);
	end;
	OnTreasureDied18:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 262144);
	end;
	OnTreasureDied19:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 524288);
	end;
	OnTreasureDied20:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 1048576);
	end;
	OnTreasureDied21:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 2097152);
	end;
	OnTreasureDied22:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 4194304);
	end;
	OnTreasureDied23:
	setd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure",getd("$@"+strnpcinfo(NPC_NAME_HIDDEN)+"_treasure") & 8388608);
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações ] -
// ------------------------------------------------------------------
// - Luina
aldeg_cas01,118,223,0	duplicate(Gld_Trea_Spawn)	Treasure#aldeg_cas01	FAKE_NPC
aldeg_cas02,135,230,0	duplicate(Gld_Trea_Spawn)	Treasure#aldeg_cas02	FAKE_NPC
aldeg_cas03,225,269,0	duplicate(Gld_Trea_Spawn)	Treasure#aldeg_cas03	FAKE_NPC
aldeg_cas04,84,13,0	duplicate(Gld_Trea_Spawn)	Treasure#aldeg_cas04	FAKE_NPC
aldeg_cas05,62,12,0	duplicate(Gld_Trea_Spawn)	Treasure#aldeg_cas05	FAKE_NPC

// - Britoniah
gefg_cas01,154,112,0	duplicate(Gld_Trea_Spawn)	Treasure#gefg_cas01	FAKE_NPC
gefg_cas02,140,116,0	duplicate(Gld_Trea_Spawn)	Treasure#gefg_cas02	FAKE_NPC
gefg_cas03,271,290,0	duplicate(Gld_Trea_Spawn)	Treasure#gefg_cas03	FAKE_NPC
gefg_cas04,116,119,0	duplicate(Gld_Trea_Spawn)	Treasure#gefg_cas04	FAKE_NPC
gefg_cas05,144,110,0	duplicate(Gld_Trea_Spawn)	Treasure#gefg_cas05	FAKE_NPC

// - Bosque Celestial
payg_cas01,291,8,0	duplicate(Gld_Trea_Spawn)	Treasure#payg_cas01	FAKE_NPC
payg_cas02,145,144,0	duplicate(Gld_Trea_Spawn)	Treasure#payg_cas02	FAKE_NPC
payg_cas03,159,168,0	duplicate(Gld_Trea_Spawn)	Treasure#payg_cas03	FAKE_NPC
payg_cas04,147,48,0	duplicate(Gld_Trea_Spawn)	Treasure#payg_cas04	FAKE_NPC
payg_cas05,157,132,0	duplicate(Gld_Trea_Spawn)	Treasure#payg_cas05	FAKE_NPC

// - Valkirias
prtg_cas01,11,208,0	duplicate(Gld_Trea_Spawn)	Treasure#prtg_cas01	FAKE_NPC
prtg_cas02,202,228,0	duplicate(Gld_Trea_Spawn)	Treasure#prtg_cas02	FAKE_NPC
prtg_cas03,189,132,0	duplicate(Gld_Trea_Spawn)	Treasure#prtg_cas03	FAKE_NPC
prtg_cas04,271,162,0	duplicate(Gld_Trea_Spawn)	Treasure#prtg_cas04	FAKE_NPC
prtg_cas05,276,178,0	duplicate(Gld_Trea_Spawn)	Treasure#prtg_cas05	FAKE_NPC


// ------------------------------------------------------------------
// - [ Saída ] -
// ------------------------------------------------------------------
-	script	#Gld_Trea_Lever	FAKE_NPC,{
	.@map$ = strnpcinfo(NPC_MAP);
	if (.@map$ == "aldeg_cas01") { setarray(.@exit[0],218,176); }
	else if (.@map$ == "aldeg_cas02") { setarray(.@exit[0],78,75); }
	else if (.@map$ == "aldeg_cas03") { setarray(.@exit[0],110,119); }
	else if (.@map$ == "aldeg_cas04") { setarray(.@exit[0],67,117); }
	else if (.@map$ == "aldeg_cas05") { setarray(.@exit[0],51,179); }
	else if (.@map$ == "gefg_cas01") { setarray(.@exit[0],40,49); }
	else if (.@map$ == "gefg_cas02") { setarray(.@exit[0],12,67); }
	else if (.@map$ == "gefg_cas03") { setarray(.@exit[0],106,24); }
	else if (.@map$ == "gefg_cas04") { setarray(.@exit[0],73,47); }
	else if (.@map$ == "gefg_cas05") { setarray(.@exit[0],70,53); }
	else if (.@map$ == "payg_cas01") { setarray(.@exit[0],120,59); }
	else if (.@map$ == "payg_cas02") { setarray(.@exit[0],22,261); }
	else if (.@map$ == "payg_cas03") { setarray(.@exit[0],50,261); }
	else if (.@map$ == "payg_cas04") { setarray(.@exit[0],38,285); }
	else if (.@map$ == "payg_cas05") { setarray(.@exit[0],277,250); }
	else if (.@map$ == "prtg_cas01") { setarray(.@exit[0],112,183); }
	else if (.@map$ == "prtg_cas02") { setarray(.@exit[0],94,62); }
	else if (.@map$ == "prtg_cas03") { setarray(.@exit[0],51,101); }
	else if (.@map$ == "prtg_cas04") { setarray(.@exit[0],259,265); }
	else if (.@map$ == "prtg_cas05") { setarray(.@exit[0],36,38); }

	mes " ";
	mes "Há uma alavanca pequena.";
	mes "Puxar isto?";
	next;
	if (select("Puxar","Não Puxar") == 1) {
		close2;
		warp(.@map$,.@exit[0],.@exit[1]);
		end;
	}
	close;
}

aldeg_cas01,123,223,0	duplicate(#Gld_Trea_Lever)	Saída#aldegLever1	HIDDEN_NPC
aldeg_cas02,139,234,0	duplicate(#Gld_Trea_Lever)	Saída#aldegLever2	HIDDEN_NPC
aldeg_cas03,229,267,0	duplicate(#Gld_Trea_Lever)	Saída#aldegLever3	HIDDEN_NPC
aldeg_cas04,83,17,0	duplicate(#Gld_Trea_Lever)	Saída#aldegLever4	HIDDEN_NPC
aldeg_cas05,64,8,0	duplicate(#Gld_Trea_Lever)	Saída#aldegLever5	HIDDEN_NPC
gefg_cas01,152,117,0	duplicate(#Gld_Trea_Lever)	Saída#gefgLever1	HIDDEN_NPC
gefg_cas02,145,114,0	duplicate(#Gld_Trea_Lever)	Saída#gefgLever2	HIDDEN_NPC
gefg_cas03,275,289,0	duplicate(#Gld_Trea_Lever)	Saída#gefgLever3	HIDDEN_NPC
gefg_cas04,116,123,0	duplicate(#Gld_Trea_Lever)	Saída#gefgLever4	HIDDEN_NPC
gefg_cas05,149,107,0	duplicate(#Gld_Trea_Lever)	Saída#gefgLever5	HIDDEN_NPC
payg_cas01,295,8,0	duplicate(#Gld_Trea_Lever)	Saída#paygLever1	HIDDEN_NPC
payg_cas02,149,149,0	duplicate(#Gld_Trea_Lever)	Saída#paygLever2	HIDDEN_NPC
payg_cas03,163,167,0	duplicate(#Gld_Trea_Lever)	Saída#paygLever3	HIDDEN_NPC
payg_cas04,151,47,0	duplicate(#Gld_Trea_Lever)	Saída#paygLever4	HIDDEN_NPC
payg_cas05,161,136,0	duplicate(#Gld_Trea_Lever)	Saída#paygLever5	HIDDEN_NPC
prtg_cas01,15,208,0	duplicate(#Gld_Trea_Lever)	Saída#prtgLever1	HIDDEN_NPC
prtg_cas02,207,228,0	duplicate(#Gld_Trea_Lever)	Saída#prtgLever2	HIDDEN_NPC
prtg_cas03,193,130,0	duplicate(#Gld_Trea_Lever)	Saída#prtgLever3	HIDDEN_NPC
prtg_cas04,275,160,0	duplicate(#Gld_Trea_Lever)	Saída#prtgLever4	HIDDEN_NPC
prtg_cas05,281,176,0	duplicate(#Gld_Trea_Lever)	Saída#prtgLever5	HIDDEN_NPC
