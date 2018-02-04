/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
+----------------------------------------------------------------------+
| - Arquivo de configura��o de Status.                                 |
\*--------------------------------------------------------------------*/


status_config: {
	// O carregamento de uma habilidade deve ser cancelado quando
	//inflingida por maldi��o/artordoar/sono/etc (inclui sil�ncio)?
	status_cast_cancel: 0

	// Ajuste para a taxa natural de resist�ncia para mudan�as de
	//status.
	// Se 50, o status defesa � reduzido pela metade, e voc� precisar�
	//do dobro de stats para bloque�-los.
	// Por exemplo: 200 vit para bloquear completamente atordoar ao
	//inv�s de 100
	pc_status_def_rate: 100
	mob_status_def_rate: 100

	// Resist�ncias m�xima �s mudan�as de status. (100 = 100%)
	// NOTA: Cartas e equipamentos podem ultrapassar esse limite, ent�o
	//isto s� se aplica a resist�ncia natural.
	pc_max_status_def: 100
	mob_max_status_def: 100
}
