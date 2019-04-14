/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
+----------------------------------------------------------------------+
| - Arquivo de configuração de GM.                                     |
\*--------------------------------------------------------------------*/

gm_config: {

	// A quantidade máxima de monstros que podem ser invocados por
	//atcommand (0 significa quantidade ilimitada)
	atcommand_spawn_quantity_limit: 100

	// Número máximo de clones escravos que pode-se ter usando o comando
	//@slaveclone.
	//(0 significa quantidade ilimitada)
	atcommand_slave_clone_limit: 25

	// Se 'false', comandos exigirão o nome exato do jogador.
	//Se 'true', digitando parcialmente o nome irá funcionar, quando
	//houver apenas um resultado de todos os jogadores no mapa atual.
	partial_name_scan: true

	// (@) @allstats/@str/@agi/@vit/@int/@dex/@luk
	// Permite aos gms ultrapassar o limite máximo dos status?
	// NOTA: Habilitar isso pode causar danos a emulação, mas o GM
	//podem atingir até 32k nos atributos.
	atcommand_max_stat_bypass: false

	// Banir pessoas que tentam burlar a negociação.
	// Duração do banimento, em minutos (padrão: 5).
	//Para desabilitar, defina 0.
	ban_hack_trade: 5

	// 1: Modifica @mobinfo para informar ao usuário a chance de
	//drop real pela formula do renewal_drop.
	// 2: Modifica @iteminfo para não exibir a chance mínima de
	//drop do item, desde que possa indicar o nível do mob.
	atcommand_mobinfo_type: 0

	// Ignorar configuração de área teleportável.
	// Definar o id mínimo do grupo para ignorar células inválidas
	//ao teleportar.
	// Escolha 100 para desabilitar tal configuração.
	gm_ignore_warpable_area: 2

	// Comandos deve desencadear eventos de nível para NPCs?
	// Essa opção funciona apenas em @baselevelup and @joblevelup
	atcommand_levelup_events: false

	// Sugestão no atcommand
	// Se for digitado um atcommand incompleto, irá ser sugerido o correto.
	atcommand_suggestions: false

}
