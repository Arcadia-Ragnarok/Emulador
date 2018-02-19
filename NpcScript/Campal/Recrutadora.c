/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Criação: Spell Master 20/02/2017                                |
| - Nota: Recutadoras e teletrasportadora da batalha campal         |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Recrutadora da Batalha Campal]
//-------------------------------------------------------------------
-	script	BattlegroundRecruit	FAKE_NPC,{
	mes("[Emissária de Maroll]\n Olá aventureir" + (Sex == SEX_MALE ? "o":"a") + ".\n Eu venho de um reino distante, onde dois herdeiros do trono lutam para decidir quem vai govenar.");
	next;
	if (BaseLevel < 80) {
		mes("[Emissária de Maroll]\n Jovem.\n Vejo potencial de um grande guerreiro em você.\n Quando se tornar mais experiente porque não se une ao um dos herdeiros para decidir o futuro do reino de Maroll?");
		close;
	} else if ((BaseJob == Job_Novice) || (BaseJob == Job_SuperNovice) || (BaseJob == Job_Novice_High)) {
		mes("[Emissária de Maroll]\n Apesar de jovem vejo que você possui muito poder.\n Mas ainda é apenas uma criança, não é quem eu procuro");
		close;
	} else if ((agitcheck()) || (agitcheck2())) {
		mes("[Emissária de Maroll]\n Uma guerra em seu reino está em andamento\n Porque não se une a um clã para conquistar o castelo?");
		close;
	} else {
		mes("[Emissária de Maroll]\n Ambos estão precisando de guerreiros experientes como você.\n Deseja colocar suas forças a prova em uma guerra pelo reino de Maroll?");
		next;
		if (select("Sim", "Não") == 1) {
			mes("[Emissária de Maroll]\n Boa sorte em sua jornarda.");
			if (strnpcinfo(NPC_MAP)      == "prontera")    { batreturn = 1; }
			else if (strnpcinfo(NPC_MAP) == "aldebaran")   { batreturn = 2; }
			else if (strnpcinfo(NPC_MAP) == "geffen")      { batreturn = 3; }
			else if (strnpcinfo(NPC_MAP) == "payon")       { batreturn = 4; }
			else if (strnpcinfo(NPC_MAP) == "lighthalzen") { batreturn = 5; }
			else if (strnpcinfo(NPC_MAP) == "rachel")      { batreturn = 6; }
			else if (strnpcinfo(NPC_MAP) == "moc_ruins")   { batreturn = 7; }
			close2;
			warp("bat_room", 155, 150);
			end;
		}
		mes("[Emissária de Maroll]\n Eu entendo lutar por uma guerra que não é sua, é algo a se pensar.\n Mas saiba que todos que ajudam em Maroll são recompensados.");
		close;
	}
}

prontera,123,83,3	duplicate(BattlegroundRecruit)	Emissária de Maroll::BatRecruit1	4_F_JOB_KNIGHT
aldebaran,146,109,3	duplicate(BattlegroundRecruit)	Emissária de Maroll::BatRecruit2	4_F_JOB_KNIGHT
geffen,109,66,3	duplicate(BattlegroundRecruit)	Emissária de Maroll::BatRecruit3	4_F_JOB_KNIGHT
payon,189,105,3	duplicate(BattlegroundRecruit)	Emissária de Maroll::BatRecruit4	4_F_JOB_KNIGHT
lighthalzen,153,86,5	duplicate(BattlegroundRecruit)	Emissária de Maroll::BatRecruit5	4_F_JOB_KNIGHT
rachel,149,138,3	duplicate(BattlegroundRecruit)	Emissária de Maroll::BatRecruit6	4_F_JOB_KNIGHT
moc_ruins,75,162,3	duplicate(BattlegroundRecruit)	Emissária de Maroll::BatRecruit7	4_F_JOB_KNIGHT

//-------------------------------------------------------------------
// - [Saída da Batalha Campal]
//-------------------------------------------------------------------
bat_room,148,150,5	script	Emissária de Maroll#bgreturn	4_F_JOB_KNIGHT,{
	mes("[Emissária de Maroll]\n Deseja sair da sala de preparação do campo de batalha?");
	next;
	if (select("Sim desejo voltar", "Quero ficar mais tempo") == 1) {
		close2;
		if (batreturn == 1)      { warp("prontera", 116, 72); }
		else if (batreturn == 2) { warp("aldebaran", 168, 112); }
		else if (batreturn == 3) { warp("geffen", 120, 39); }
		else if (batreturn == 4) { warp("payon", 161, 58); }
		else if (batreturn == 5) { warp("lighthalzen", 159, 93); }
		else if (batreturn == 6) { warp("rachel", 115, 124); }
		else if (batreturn == 7) { warp("moc_ruins", 152, 148); }
		else { warp("prontera", 273, 354); }
		batreturn = 0;
		end;
	}
	mes("[Emissária de Maroll]\n Fique o tempo que desejar.");
	close;
}
