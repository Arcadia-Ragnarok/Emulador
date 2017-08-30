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
| - Nota: Fun��es de auxilio a Scripts e Itens.                     |
| - Observa��o:                                                     |
|   * Estas fun��es visam diminuir a quantidade de linhas de        |
|     Scripts.                                                      |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ ClearJobVar ] -
// ------------------------------------------------------------------
// - Localiza vari�veis atribuidas ao personagem durante as quests
// de mudan�a de classe e Remove.
// * Semelhante a "F_ClearJobVar" padr�o dos emuladores.
// ------------------------------------------------------------------
function	script	ClearJobVar	{
	if (archerquest) { archerquest = 0; }
	if (swordq) { swordq = 0; }
	if (thiefq) { thiefq = 0; }
	if (acolyteq) { acolyteq = 0; }
	if (mageq) { mageq = 0; }
	if (merchantq) { merchantq = 0; }
	if (merchantq_1) { merchantq_1 = 0; }
	if (merchantq_2) { merchantq_2 = 0; }
	if (gunslingerq) { gunslingerq = 0; }
	return;
}

// ------------------------------------------------------------------
// - [ F_Navi ] -
// ------------------------------------------------------------------
// - getarg(0) : Nome de Exibi��o
// - getarg(1) : Mapa e Cordenadas para Link da Navega��o
// - <NAVI><INFO></INFO></NAVI> : Fun��o Client Exe
// * Necess�rio Client Exe (20111010) ou Superior
// !! ARQUIVOS LUA DE NAVEGA��O DISPIN�VEIS NA WEB EST�O BUGADOS !!
// ------------------------------------------------------------------
function	script	F_Navi	{
	return "<NAVI>["+getarg(0)+"]<INFO>"+getarg(1)+",0,000,0</INFO></NAVI>";
}
