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
| - Arquivo de configura��o de GM.                                     |
\*--------------------------------------------------------------------*/

gm_config: {

	// A quantidade m�xima de monstros que podem ser invocados por
	//atcommand (0 significa quantidade ilimitada)
	atcommand_spawn_quantity_limit: 100

	// N�mero m�ximo de clones escravos que pode-se ter usando o comando
	//@slaveclone.
	//(0 significa quantidade ilimitada)
	atcommand_slave_clone_limit: 25

	// Se 'false', comandos exigir�o o nome exato do jogador.
	//Se 'true', digitando parcialmente o nome ir� funcionar, quando
	//houver apenas um resultado de todos os jogadores no mapa atual.
	partial_name_scan: true

	// (@) @allstats/@str/@agi/@vit/@int/@dex/@luk
	// Permite aos gms ultrapassar o limite m�ximo dos status?
	// NOTA: Habilitar isso pode causar danos a emula��o, mas o GM
	//podem atingir at� 32k nos atributos.
	atcommand_max_stat_bypass: false

	// Banir pessoas que tentam burlar a negocia��o.
	// Dura��o do banimento, em minutos (padr�o: 5).
	//Para desabilitar, defina 0.
	ban_hack_trade: 5

	// 1: Modifica @mobinfo para informar ao usu�rio a chance de
	//drop real pela formula do renewal_drop.
	// 2: Modifica @iteminfo para n�o exibir a chance m�nima de
	//drop do item, desde que possa indicar o n�vel do mob.
	atcommand_mobinfo_type: 0

	// Ignorar configura��o de �rea teleport�vel.
	// Definar o id m�nimo do grupo para ignorar c�lulas inv�lidas
	//ao teleportar.
	// Escolha 100 para desabilitar tal configura��o.
	gm_ignore_warpable_area: 2

	// Comandos deve desencadear eventos de n�vel para NPCs?
	// Essa op��o funciona apenas em @baselevelup and @joblevelup
	atcommand_levelup_events: false

	// Sugest�o no atcommand
	// Se for digitado um atcommand incompleto, ir� ser sugerido o correto.
	atcommand_suggestions: false

}
