/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
|----------------------------------------------------------------------|
| - Descri��o: Configua��o para comunica��o                            |
\*--------------------------------------------------------------------*/

inter_configuration: {

	// Log configuration
	log: {
		log_inter: false // Logs devem ser gerados?
		//inter_log_filename: "log/inter.log"
		@include "Config/Connect/Connections.cs"
	}

	mysql_reconnect: {
		// == Configura��es do MySQL Reconnect
		// ===========================
		// - mysql_reconnect_type
		// - 1: quando o mysql se desconecta durante o tempo de execu��o, o servidor tenta reconectar mysql_reconnect_count vezes e,
		// - se n�o tiver �xito, o servidor ser� desligado
		// - 2: quando o mysql se desconecta durante o tempo de execu��o ele tenta se reconectar indefinidamente
		type: 2

		// - mysql_reconnect_count
		// - n�mero de tentativas de reconex�o que o servidor deve fazer quando o banco de dados � desconectado durante o tempo de execu��o
		// - usado somente quando mysql_reconnect_type � 1
		count: 1
	}

	// TODOS os nomes de tabelas da base de dados MySQL
	// N�O MUDE ALGUMA COISA AL�M DESTE LINHA A MENOS QUE VOC� CONHE�A SEU DATABASE MUITO BEM
	// isso � para pessoas que CONHECEM suas coisas e, por algum motivo, querem mudar suas
	// layout do banco de dados.
	database_names: {
		account_db: "login"
		login_db: "loginlog"
		ipban_table: "ipbanlist"
		char_db: "char"
		interlog_db: "interlog"
		ragsrvinfo_db: "ragsrvinfo"
		registry: {
			acc_reg_num_db: "acc_reg_num_db"
			acc_reg_str_db: "acc_reg_str_db"
			char_reg_str_db: "char_reg_str_db"
			char_reg_num_db: "char_reg_num_db"

			global_acc_reg_num_db: "global_acc_reg_num_db"
			global_acc_reg_str_db: "global_acc_reg_str_db"
		}
		pc: {
			hotkey_db: "hotkey"
			scdata_db: "sc_data"
			cart_db: "cart_inventory"
			inventory_db: "inventory"
			charlog_db: "charlog"
			storage_db: "storage"
			skill_db: "skill"
			memo_db: "memo"
			party_db: "party"
			pet_db: "pet"
			friend_db: "friends"
			mail_db: "mail"
			auction_db: "auction"
			quest_db: "quest"
			homunculus_db: "homunculus"
			skill_homunculus_db: "skill_homunculus"
			mercenary_db: "mercenary"
			mercenary_owner_db: "mercenary_owner"
			elemental_db: "elemental"
			account_data_db: "account_data"
		}
		guild: {
			main_db: "guild"
			alliance_db: "guild_alliance"
			castle_db: "guild_castle"
			expulsion_db: "guild_expulsion"
			member_db: "guild_member"
			skill_db: "guild_skill"
			position_db: "guild_position"
			storage_db: "guild_storage"
		}
		mapreg_db: "mapreg"
		autotrade_merchants_db: "autotrade_merchants"
		autotrade_data_db: "autotrade_data"
		npc_market_data_db: "npc_market_data"
	}
}
