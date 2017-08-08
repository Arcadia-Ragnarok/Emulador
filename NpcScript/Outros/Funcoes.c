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
// - Localiza vari�veis atribuidas ao personagem durante as quests
// de mudan�a de classe e Remove.
// * Semelhante a "F_ClearJobVar" padr�o dos emuladores.
// ------------------------------------------------------------------

function	script	ClearJobVar	{
	if (archerquest) { archerquest = 0; }
	if (swordq) { swordq = 0; }
	return;
}
