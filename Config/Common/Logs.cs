/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
+----------------------------------------------------------------------+
| - Descri��o: Configua��o para Logs                                   |
\*--------------------------------------------------------------------*/

map_log: {
	// O que registrar nos logs 
	// 0x0000000 - Nada
	// 0x0000001 - (T) Trocas
	// 0x0000002 - (V) Vendas
	// 0x0000004 - (P) Itens dropados ou pegados por jogadpres
	// 0x0000008 - (L) Itens dropados ou consumido por monstros
	// 0x0000010 - (S) Compra e venda em NPC
	// 0x0000020 - (N) Itens apagados ou adquiridos por NPC
	// 0x0000040 - (D) Itens Roubados de monstros
	// 0x0000080 - (C) Itens do jogador usado por terceiros como requisito de habilidade por exemplo
	// 0x0000100 - (O) Itens usados para produ��o
	// 0x0000200 - (U) Dinheiro ganho ao derrotar MVP
	// 0x0000400 - (A) Cria��o de itens por comandos
	// 0x0000800 - (R) Itens colocados ou retirados do armaz�m
	// 0x0001000 - (G) Itens colocados ou retirados do armaz�m do cl�
	// 0x0002000 - (E) Transa��es pelo mail_system
	// 0x0004000 - (I) Transa��es por leil�o
	// 0x0008000 - (B) Transa��es pela lja de compras
	// 0x0010000 - (X) Outros tipos de transa��es
	// 0x0020000 - (K) Transa��es pelo banco
	// 0x0040000 - (Y) Div�rcio
	// 0x0080000 - (Z) Roleta
	// 0x0100000 - (W) Aluguel
	// 0x0200000 - (Q) Carata
	// 0x0400000 - (J) Itens inv�lidos no invent�rio
	// 0x0800000 - (H) Itens inv�lidos no carrinho
	// 0x1000000 - (@) Ovo
	// 0x2000000 - (0) Quest
	// 0x4000000 - (1) Habilidade
	// 0x8000000 - (2) Refinamento
	// Exemplo: Log de negocia��es+Log de vendas+Log de npcs (compra/venda)+Log de itens produzidos: 1+2+32+1024 = 1059
	enable: 0xFFFFFFF

	// As configura��es a seguir indicam o local de registro.
	// Se 'use_sql' for true, as tabelas SQL s�o assumidas, caso contr�rio arquivos flat.
	database: {
		// Registrar os LOGS no banco de dados?
		use_sql: true
		log_gm_db: "atcommandlog"
		log_branch_db: "branchlog"
		log_chat_db: "chatlog"
		log_mvpdrop_db: "mvplog"
		log_npc_db: "npclog"
		log_pick_db: "picklog"
		log_zeny_db: "zenylog"

		// Caso n�o usados os registros no banco de dados gerar arquivos para armazenar os dados
		// log_gm_db: "log/atcommandlog.log"
		// log_branch_db: "log/branchlog.log"
		// log_chat_db: "log/chatlog.log"
		// log_mvpdrop_db: "log/mvplog.log"
		// log_npc_db: "log/npclog.log"
		// log_pick_db: "log/picklog.log"
		// log_zeny_db: "log/zenylog.log"
	}

	// Registrar uso de Galho Seco?
	log_branch: false

	// Rastrear Circula��o de Zeny
	// Filter settings
	// 0 - n�o registrar; 1 - registrar qualquer circula��o de zeny; 2.....1000000 - m�nimo absoluto para registrar o valor
	log_zeny: 0

	// Registro de Itens de MVPs
	// Obsoleto. Use Pick_Log.
	// Mas este pode ser �til para rastrear MVPs derrotados
	log_mvpdrop: false

	// Log de Comandos
	// Somente os comandos emitidos por grupos de jogadores ('Config/System/Groups.cs')
	// 'log_commands' configura��o definida para 'true' ser�o registradas.
	log_commands: false

	// Registrar o comando de NPC 'logmes'
	log_npc: false

	// Filtros
	filter: {
		item: {
			// Se qualquer condi��o for verdadeira, ent�o o item ser� registrado
			// 0 = N�o efetuar log
			// 1 = Registar qualquer item
			// Bits de filtro avan�ados por tipo de item: ||
			// 0x002 - Artigos de cura (0)
			// 0x004 - Etc Itens (3) + setas (10)
			// 0x008 - Itens Utiliz�veis ??(2) + Lures, Scrolls (11) + Itens de Caixa Utiliz�veis ??(18)
			// 0x010 - Arma (4)
			// 0x020 - Escudos, Armaduras, Chap�us, Acess�rios, etc (5)
			// 0x040 - Cart�es (6)
			// 0x080 - Pet Accessories (8) + Eggs (7) (bem, os monstros n�o deixam cair, mas vamos usar o mesmo sistema para TODOS os logs)
			// 0x100 - Registre itens caros (> = price_items_log)
			// 0x200 - Registra grande quantidade de itens (> = amount_items_log)
			// 0x400 - Registra itens refinados (se seu refinar> = refine_items_log)
			// 0x800 - Registra itens raros (se a sua chance de queda <= rare_items_log)
			// Exemplos: (filtros de log)
			// log_filter: 1 = registra QUALQUER item
			// log_filter: 0x2 = registra somente itens de HEALING
			// log_filter: 0x4 = logs somente Etc Itens e setas
			// log_filter: 0x40 = logs only Cart�es
			// log_filter: 0x142 = registra apenas itens de Cura, Cart�es e itens cujo pre�o �> = price_items_log
			// log_filter: 0xff0 = registra todos os itens (incluindo todos raros, grande quantidade) exceto cura, etc, setas e us�veis
			log_filter: 1

			// Log de itens refinados 
			refine_items_log: 7

			// Registrar log de item raros?
			// Nota: 1 = 0.01%, 100 = 1%
			rare_items_log: 0

			// Redistrar log de pre�o em item
			price_items_log: 10000000

			// Registrar log na quantidade de item
			amount_items_log: 0
		}

		chat: {
			// Log CHAT (Global, Whisper, Party, Guild, Main chat) (Nota 3)
			// REGISTRANDO FILTROS
			// ================================================ -benz�ico.
			// 0x00 = N�o efetuar logon
			// 0x01 - Log Mensagens globais
			// 0x02 - mensagens do Whisper do registro
			// 0x04 - Mensagens do Log Party
			// 0x08 - Mensagens do Guild Guild
			// 0x10 - Log Principais mensagens de chat
			// Exemplo:
			// log_chat: 0x5 = registra mensagens Whisper & Party
			// log_chat: 0x8 = registra apenas as mensagens da Guild
			// log_chat: 0x1f = registra tudo
			// NOTA: Isso n�o � totalmente funcional, a partir de agora � s� verificar se o log estiver ativo ou n�o
			log_chat: 0x00

			// Desativar o log de bate-papo quando o WoE est� sendo executado? (Nota 1)
			log_chat_woe_disable: true
		}
	}
}
