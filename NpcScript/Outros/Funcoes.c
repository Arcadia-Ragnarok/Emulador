/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Desenvolvido por: Spell Master                                  |
| - Nota: Funções de auxilio a Scripts e Itens.                     |
| - Observação:                                                     |
|   * Estas funções visam diminuir a quantidade de linhas de        |
|     Scripts.                                                      |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ ClearJobQuest ] -
// ------------------------------------------------------------------
// - Localiza variáveis e quests atribuidas ao personagem durante
// as quests de mudança de classe e Remove.
// ------------------------------------------------------------------
function	script	ClearJobQuest	{
	if (archerquest) { archerquest = 0; if (questprogress (1004)) { erasequest (1004); } }
	if (swordq) { swordq = 0; if (questprogress (1014)) { erasequest (1014); } }
	if (thiefq) { thiefq = 0; if (questprogress (1013)) { erasequest (1013); } }
	if (mageq) { mageq = 0; if (questprogress (1005)) { erasequest (1005); } if (questprogress (1006)) { erasequest (1006); } if (questprogress (1007)) { erasequest (1007); } if (questprogress (1008)) { erasequest (1008); } }
	if (merchantq) { merchantq = 0; merchantq_2 = 0; merchantq_3 = 0; if (questprogress (1010)) { erasequest (1010); } if (questprogress (1011)) { erasequest (1011); } if (questprogress (1012)) { erasequest (1012); } }
	if (acolyteq) { acolyteq = 0; if (questprogress (1001)) { erasequest (1001); } if (questprogress (1002)) { erasequest (1002); } if (questprogress (1003)) { erasequest (1003); } }
	if (gunslingerq) { gunslingerq = 0; if (questprogress (6020)) { erasequest (6020); } if (questprogress (6021)) { erasequest (6021); } if (questprogress (6022)) { erasequest (6022); } if (questprogress (6023)) { erasequest (6023); } if (questprogress (6024)) { erasequest (6024); } }
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
