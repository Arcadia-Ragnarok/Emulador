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
| - Copyright: Spell Master                                         |
| - Info: Funções de auxilio a Scripts e Itens.                     |
| - Note: Estas funções visam diminuir a quantidade de linhas de    |
|         Scripts.                                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ ClearJobQuest ] -
// ------------------------------------------------------------------
// - Localiza variáveis e quests atribuidas ao personagem durante
// as quests de mudança de classe e Remove.
// ------------------------------------------------------------------
function	script	ClearJobQuest	{
	if (getskilllv("FIRSTAID")) { FIRSTAID = 0; }
	if (getskilllv("PLAYDEAD")) { PLAYDEAD = 0; }
	if (archerquest) {
		archerquest = 0;
		if (questprogress(1004)) { erasequest(1004); }
	}
	if (swordq) {
		swordq = 0;
		if (questprogress(1014)) { erasequest(1014); }
	}
	if (thiefq) {
		thiefq = 0; if (questprogress(1013)) { erasequest(1013); }
	}
	if (mageq) {
		mageq = 0;
		if (questprogress(1005)) { erasequest(1005); }
		if (questprogress(1006)) { erasequest(1006); }
		if (questprogress(1007)) { erasequest(1007); }
		if (questprogress(1008)) { erasequest(1008); }
	}
	if (merchantq) {
		merchantq = 0; merchantq_2 = 0; merchantq_3 = 0;
		if (questprogress(1010)) { erasequest(1010); }
		if (questprogress(1011)) { erasequest(1011); }
		if (questprogress(1012)) { erasequest(1012); }
	}
	if (acolyteq) {
		acolyteq = 0;
		if (questprogress(1001)) { erasequest(1001); }
		if (questprogress(1002)) { erasequest(1002); }
		if (questprogress(1003)) { erasequest(1003); }
	}
	if (gunslingerq) {
		gunslingerq = 0;
		if (questprogress(6020)) { erasequest(6020); }
		if (questprogress(6021)) { erasequest(6021); }
		if (questprogress(6022)) { erasequest(6022); }
		if (questprogress(6023)) { erasequest(6023); }
		if (questprogress(6024)) { erasequest(6024); }
	}
	if (taekwonq) {
		taekwonq = 0; taekwonq_2 = 0;
		if (questprogress(6000)) { erasequest(6000); }
		if (questprogress(6001)) { erasequest(6001); }
		if (questprogress(6002)) { erasequest(6002); }
	}
	if (supernovq) {
		supernovq = 0;
		if (questprogress(6010)) { erasequest(6010); }
	}
	return;
}

function	script	ClearJobQuest2nd	{
	if (getarg(0) == 10 || getarg(0) == 18) {
		if (alchemistq) {
			alchemistq = 0;
			if (questprogress(2028)) { erasequest(2028); }
			if (questprogress(2028)) { erasequest(2028); }
			if (questprogress(2029)) { erasequest(2029); }
			if (questprogress(2030)) { erasequest(2030); }
			if (questprogress(2031)) { erasequest(2031); }
			if (questprogress(2032)) { erasequest(2032); }
			if (questprogress(2033)) { erasequest(2033); }
			if (questprogress(2034)) { erasequest(2034); }
			if (questprogress(2035)) { erasequest(2035); }
			if (questprogress(2036)) { erasequest(2036); }
			if (questprogress(2037)) { erasequest(2037); }
			if (questprogress(2038)) { erasequest(2038); }
			if (questprogress(2039)) { erasequest(2039); }
			if (questprogress(2040)) { erasequest(2040); }
		}
		if (blacksmithq) {
			blacksmithq = 0;
			if (questprogress(2000)) { erasequest(2000); }
			//if (questprogress(2001)) { erasequest(2001); }
			if (questprogress(2002)) { erasequest(2002); }
			if (questprogress(2003)) { erasequest(2003); }
			if (questprogress(2004)) { erasequest(2004); }
			if (questprogress(2005)) { erasequest(2005); }
			if (questprogress(2006)) { erasequest(2006); }
			if (questprogress(2007)) { erasequest(2007); }
			if (questprogress(2008)) { erasequest(2008); }
			if (questprogress(2009)) { erasequest(2009); }
			if (questprogress(2010)) { erasequest(2010); }
			if (questprogress(2011)) { erasequest(2011); }
			if (questprogress(2012)) { erasequest(2012); }
			if (questprogress(2013)) { erasequest(2013); }
			if (questprogress(2014)) { erasequest(2014); }
			if (questprogress(2015)) { erasequest(2015); }
		}
	} else if (getarg(0) == 17 || getarg(0) == 12) {
		if (rogueq) {
			rogueq = 0;
			if (questprogress(2017)) { erasequest(2017); }
			if (questprogress(2018)) { erasequest(2018); }
			if (questprogress(2019)) { erasequest(2019); }
			if (questprogress(2020)) { erasequest(2020); }
			if (questprogress(2021)) { erasequest(2021); }
			if (questprogress(2022)) { erasequest(2022); }
			if (questprogress(2023)) { erasequest(2023); }
			if (questprogress(2024)) { erasequest(2024); }
			if (questprogress(2025)) { erasequest(2025); }
			if (questprogress(2026)) { erasequest(2026); }
		}
		if (assassinq) {
			assassinq = 0; assassinq2 = 0; assassinq3 = 0;
			if (questprogress(8000)) { erasequest(8000); }
			if (questprogress(8001)) { erasequest(8001); }
			if (questprogress(8002)) { erasequest(8002); }
			if (questprogress(8003)) { erasequest(8003); }
			if (questprogress(8004)) { erasequest(8004); }
			if (questprogress(8005)) { erasequest(8005); }
			if (questprogress(8006)) { erasequest(8006); }
			if (questprogress(8007)) { erasequest(8007); }
			//if (questprogress(8008)) { erasequest(8008); }
		}
	} else if (getarg(0) == 19 || getarg(0) == 16) {
		if (wizardq) {
			wizardq = 0; wizardq2 = 0;
			if (questprogress(9013)) { erasequest(9013); }
			if (questprogress(9014)) { erasequest(9014); }
			if (questprogress(9015)) { erasequest(9015); }
			if (questprogress(9016)) { erasequest(9016); }
			if (questprogress(9017)) { erasequest(9017); }
			if (questprogress(9018)) { erasequest(9018); }
		}
		if (sageq) {
			sageq = 0; sageq2 = 0;
			if (questprogress(2041)) { erasequest(2041); }
			//if (questprogress(2042)) { erasequest(2042); }
			if (questprogress(2043)) { erasequest(2043); }
			if (questprogress(2044)) { erasequest(2044); }
			if (questprogress(2045)) { erasequest(2045); }
			if (questprogress(2046)) { erasequest(2046); }
			if (questprogress(2047)) { erasequest(2047); }
			if (questprogress(2048)) { erasequest(2048); }
			if (questprogress(2049)) { erasequest(2049); }
			if (questprogress(2050)) { erasequest(2050); }
			if (questprogress(2051)) { erasequest(2051); }
			if (questprogress(2052)) { erasequest(2052); }
			if (questprogress(2053)) { erasequest(2053); }
			if (questprogress(2054)) { erasequest(2054); }
			if (questprogress(2055)) { erasequest(2055); }
			if (questprogress(2056)) { erasequest(2056); }
			if (questprogress(2057)) { erasequest(2057); }
			if (questprogress(2058)) { erasequest(2058); }
			if (questprogress(2059)) { erasequest(2059); }
			if (questprogress(2060)) { erasequest(2060); }
			if (questprogress(2061)) { erasequest(2061); }
			if (questprogress(2062)) { erasequest(2062); }
		}
	} else if (getarg(0) == 19 || getarg(0) == 20 || getarg(0) == 11) {
		if (bardq) {
			bardq = 0;
			if (questprogress(3000)) { erasequest(3000); }
			if (questprogress(3001)) { erasequest(3001); }
			if (questprogress(3002)) { erasequest(3002); }
			if (questprogress(3003)) { erasequest(3003); }
			if (questprogress(3004)) { erasequest(3004); }
		}
		if (dancerq) {
			dancerq = 0;
			if (questprogress(7000)) { erasequest(7000); }
			if (questprogress(7001)) { erasequest(7001); }
			if (questprogress(7002)) { erasequest(7002); }
			if (questprogress(7003)) { erasequest(7003); }
			if (questprogress(7004)) { erasequest(7004); }
			if (questprogress(7005)) { erasequest(7005); }
			if (questprogress(7006)) { erasequest(7006); }
		}
		if (hunterq) {
			hunterq = 0; hunterq2 = 0; hunterq3 = 0;
			if (questprogress(4000)) { erasequest(4000); }
			if (questprogress(4001)) { erasequest(4001); }
			if (questprogress(4002)) { erasequest(4002); }
			if (questprogress(4003)) { erasequest(4003); }
			if (questprogress(4004)) { erasequest(4004); }
			if (questprogress(4005)) { erasequest(4005); }
			if (questprogress(4006)) { erasequest(4006); }
			if (questprogress(4007)) { erasequest(4007); }
			if (questprogress(4008)) { erasequest(4008); }
			if (questprogress(4009)) { erasequest(4009); }
			if (questprogress(4010)) { erasequest(4010); }
			if (questprogress(4011)) { erasequest(4011); }
			if (questprogress(4012)) { erasequest(4012); }
			if (questprogress(4013)) { erasequest(4013); }
		}
	} else if (getarg(0) == 7 || getarg(0) == 14) {
		if (knightq) {
			knightq = 0; knightq2 = 0;
			if (questprogress(9000)) { erasequest(9000); }
			if (questprogress(9001)) { erasequest(9001); }
			if (questprogress(9002)) { erasequest(9002); }
			if (questprogress(9003)) { erasequest(9003); }
			if (questprogress(9004)) { erasequest(9004); }
			if (questprogress(9005)) { erasequest(9005); }
			if (questprogress(9006)) { erasequest(9006); }
			if (questprogress(9007)) { erasequest(9007); }
			if (questprogress(9008)) { erasequest(9008); }
			if (questprogress(9009)) { erasequest(9009); }
			if (questprogress(9010)) { erasequest(9010); }
			if (questprogress(9011)) { erasequest(9011); }
			if (questprogress(9012)) { erasequest(9012); }
		}
		if (crusaderq) {
			crusaderq = 0; crusaderq2 = 0;
			if (questprogress(3006)) { erasequest(3006); }
			if (questprogress(3007)) { erasequest(3007); }
			if (questprogress(3008)) { erasequest(3008); }
			if (questprogress(3009)) { erasequest(3009); }
			if (questprogress(3010)) { erasequest(3010); }
			if (questprogress(3011)) { erasequest(3011); }
			if (questprogress(3012)) { erasequest(3012); }
			if (questprogress(3013)) { erasequest(3013); }
			if (questprogress(3014)) { erasequest(3014); }
			if (questprogress(3015)) { erasequest(3015); }
		}
	} else if (getarg(0) == 15 || getarg(0) == 8) {
		if (monkq) {
			monkq = 0;
			if (questprogress(3016)) { erasequest(3016); }
			if (questprogress(3017)) { erasequest(3017); }
			if (questprogress(3018)) { erasequest(3018); }
			if (questprogress(3019)) { erasequest(3019); }
			if (questprogress(3020)) { erasequest(3020); }
			if (questprogress(3021)) { erasequest(3021); }
			if (questprogress(3022)) { erasequest(3022); }
			if (questprogress(3023)) { erasequest(3023); }
			if (questprogress(3024)) { erasequest(3024); }
			if (questprogress(3025)) { erasequest(3025); }
			if (questprogress(3026)) { erasequest(3026); }
			if (questprogress(3027)) { erasequest(3027); }
			if (questprogress(3028)) { erasequest(3028); }
			if (questprogress(3029)) { erasequest(3029); }
			if (questprogress(3030)) { erasequest(3030); }
			if (questprogress(3031)) { erasequest(3031); }
			if (questprogress(3032)) { erasequest(3032); }
		}
		if (priestq) {
			priestq = 0; priestq2 = 0;
			if (questprogress(8009)) { erasequest(8009); }
			if (questprogress(8010)) { erasequest(8010); }
			if (questprogress(8011)) { erasequest(8011); }
			if (questprogress(8012)) { erasequest(8012); }
			if (questprogress(8013)) { erasequest(8013); }
			if (questprogress(8014)) { erasequest(8014); }
			if (questprogress(8015)) { erasequest(8015); }
		}
	} else if (getarg(0) == 4047 || getarg(0) == 4049) {
		if (sgladiatorq) {
			sgladiatorq = 0;
			if (questprogress(7007)) { erasequest(7007); }
			if (questprogress(7008)) { erasequest(7008); }
			if (questprogress(7009)) { erasequest(7009); }
			if (questprogress(7010)) { erasequest(7010); }
			if (questprogress(7011)) { erasequest(7011); }
		}
		if (slinkerq) {
			slinkerq = 0;
			if (questprogress(6005)) { erasequest(6005); }
			if (questprogress(6006)) { erasequest(6006); }
			if (questprogress(6007)) { erasequest(6007); }
			if (questprogress(6008)) { erasequest(6008); }
		}
	}
	return;
}

// ------------------------------------------------------------------
// - [ F_Navi ] -
// ------------------------------------------------------------------
// - getarg(0) : Nome de Exibição
// - getarg(1) : Mapa e Cordenadas para Link da Navegação
// - <NAVI><INFO></INFO></NAVI> : Função Client Exe
// * Necessário Client Exe (20111010) ou Superior
// !! ARQUIVOS LUA DE NAVEGAÇÂO DISPINÌVEIS NA WEB ESTÂO BUGADOS !!
// ------------------------------------------------------------------
function	script	F_Navi	{
	return "<NAVI>["+getarg(0)+"]<INFO>"+getarg(1)+",0,000,0</INFO></NAVI>";
}

