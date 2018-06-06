/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master (20/02/2017)                            |
| - Info: Recutadoras e teletrasportadora da batalha campal         |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Recrutadora da Batalha Campal]
//-------------------------------------------------------------------
-	script	BattlegroundRecruit	FAKE_NPC,{
	mes "[Emiss�ria de Maroll]";
	mes "Ol� aventureir"+(Sex == SEX_MALE ? "o":"a")+".";
	mes "Eu venho de um reino distante, onde dois herdeiros do trono lutam para decidir quem vai govenar.";
	next;
	if (BaseLevel < 80) {
		mes "[Emiss�ria de Maroll]";
		mes "Jovem.";
		mes "Vejo potencial de um grande guerreiro em voc�.";
		mes "Quando se tornar mais experiente porque n�o se une ao um dos herdeiros para decidir o futuro do reino de Maroll?";
		close;
	} else if ((BaseJob == Job_Novice) || (BaseJob == Job_SuperNovice) || (BaseJob == Job_Novice_High)) {
		mes "[Emiss�ria de Maroll]";
		mes "Apesar de jovem vejo que voc� possui muito poder.";
		mes "Mas ainda � apenas uma crian�a, n�o � quem eu procuro";
		close;
	} else if ((agitcheck()) || (agitcheck2())) {
		mes "[Emiss�ria de Maroll]";
		mes "Uma guerra em seu reino est� em andamento";
		mes "Porque n�o se une a um cl� para conquistar o castelo?";
		close;
	} else {
		mes "[Emiss�ria de Maroll]";
		mes "Ambos est�o precisando de guerreiros experientes como voc�.";
		mes "Deseja colocar suas for�as a prova em uma guerra pelo reino de Maroll?";
		next;
		if (select("Sim","N�o") == 1) {
			mes "[Emiss�ria de Maroll]";
			mes "Boa sorte em sua jornarda.";
			if (strnpcinfo(NPC_MAP)      == "prontera")    { batreturn = 1; }
			else if (strnpcinfo(NPC_MAP) == "aldebaran")   { batreturn = 2; }
			else if (strnpcinfo(NPC_MAP) == "geffen")      { batreturn = 3; }
			else if (strnpcinfo(NPC_MAP) == "payon")       { batreturn = 4; }
			else if (strnpcinfo(NPC_MAP) == "lighthalzen") { batreturn = 5; }
			else if (strnpcinfo(NPC_MAP) == "rachel")      { batreturn = 6; }
			else if (strnpcinfo(NPC_MAP) == "moc_ruins")   { batreturn = 7; }
			close2;
			warp("bat_room",155,150);
			end;
		}
		mes "[Emiss�ria de Maroll]";
		mes "Eu entendo lutar por uma guerra que n�o � sua, � algo a se pensar.";
		mes "Mas saiba que todos que ajudam em Maroll s�o recompensados.";
		close;
	}
}

prontera,123,83,3	duplicate(BattlegroundRecruit)	Emiss�ria de Maroll::BatRecruit1	4_F_JOB_KNIGHT
aldebaran,146,109,3	duplicate(BattlegroundRecruit)	Emiss�ria de Maroll::BatRecruit2	4_F_JOB_KNIGHT
geffen,109,66,3	duplicate(BattlegroundRecruit)	Emiss�ria de Maroll::BatRecruit3	4_F_JOB_KNIGHT
payon,189,105,3	duplicate(BattlegroundRecruit)	Emiss�ria de Maroll::BatRecruit4	4_F_JOB_KNIGHT
lighthalzen,153,86,5	duplicate(BattlegroundRecruit)	Emiss�ria de Maroll::BatRecruit5	4_F_JOB_KNIGHT
rachel,149,138,3	duplicate(BattlegroundRecruit)	Emiss�ria de Maroll::BatRecruit6	4_F_JOB_KNIGHT
moc_ruins,75,162,3	duplicate(BattlegroundRecruit)	Emiss�ria de Maroll::BatRecruit7	4_F_JOB_KNIGHT

//-------------------------------------------------------------------
// - [Sa�da da Batalha Campal]
//-------------------------------------------------------------------
bat_room,148,150,5	script	Emiss�ria de Maroll#bgreturn	4_F_JOB_KNIGHT,{
	mes "[Emiss�ria de Maroll]";
	mes "Deseja sair da sala de prepara��o do campo de batalha?";
	next;
	if (select("Sim desejo voltar","Quero ficar mais tempo") == 1) {
		close2;
		if (batreturn == 1)      { warp("prontera",116,72); }
		else if (batreturn == 2) { warp("aldebaran",168,112); }
		else if (batreturn == 3) { warp("geffen",120,39); }
		else if (batreturn == 4) { warp("payon",161,58); }
		else if (batreturn == 5) { warp("lighthalzen",159,93); }
		else if (batreturn == 6) { warp("rachel",115,124); }
		else if (batreturn == 7) { warp("moc_ruins",152,148); }
		else { warp("prontera",273,354); }
		batreturn = 0;
		end;
	}
	mes "[Emiss�ria de Maroll]";
	mes "Fique o tempo que desejar.";
	close;
}
