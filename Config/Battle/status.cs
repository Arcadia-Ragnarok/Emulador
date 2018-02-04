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
| - Arquivo de configuração de Status.                                 |
\*--------------------------------------------------------------------*/


status_config: {
	// O carregamento de uma habilidade deve ser cancelado quando
	//inflingida por maldição/artordoar/sono/etc (inclui silêncio)?
	status_cast_cancel: 0

	// Ajuste para a taxa natural de resistência para mudanças de
	//status.
	// Se 50, o status defesa é reduzido pela metade, e você precisará
	//do dobro de stats para bloqueá-los.
	// Por exemplo: 200 vit para bloquear completamente atordoar ao
	//invés de 100
	pc_status_def_rate: 100
	mob_status_def_rate: 100

	// Resistências máxima às mudanças de status. (100 = 100%)
	// NOTA: Cartas e equipamentos podem ultrapassar esse limite, então
	//isto só se aplica a resistência natural.
	pc_max_status_def: 100
	mob_max_status_def: 100
}
