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
// - [ ClearJobVar ] -
// - Localiza variáveis atribuidas ao personagem durante as quests
// de mudança de classe e Remove.
// * Semelhante a "F_ClearJobVar" padrão dos emuladores.
// ------------------------------------------------------------------

function	script	ClearJobVar	{
	if (archerquest) { archerquest = 0; }
	if (swordq) { swordq = 0; }
	return;
}
