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
|                      Projeto Ragnarok Online                         |
+----------------------------------------------------------------------+
| - Descri��o: Configua��o para Logs                                   |
\*--------------------------------------------------------------------*/

map_log: {
	// Habilitar Registros? (Nota 3)
	// 0x00000 - N�o fazer logs.
	// 0x00001 - (T) Log de negocia��es.
	// 0x00002 - (V) Log de vendas.
	// 0x00004 - (P) Log de itens ca�dos/recolhidos por jogadores.
	// 0x00008 - (L) Log de itens ca�dos/recolhidos por monstros.
	// 0x00010 - (S) Log de npcs (compra/venda).
	// 0x00020 - (N) Log de npcs (itens deletados/adquiridos atrav�s de quest).
	// 0x00040 - (D) Log de itens roubados dos monstros (habilidade furto).
	// 0x00080 - (C) Log de uso de itens.
	// 0x00100 - (O) Log de itens produzidos.
	// 0x00200 - (U) Log de itens MvP.
	// 0x00400 - (A) Log de cria��o/dele��o de itens por jogadores (com @/# commands)
	// 0x00800 - (R) Log de itens colocados/retirados do armaz�m.
	// 0x01000 - (G) Log de itens colocados/retirados do armaz�m da guilda.
	// 0x02000 - (E) Log de transa��es pelo sistema de email.
	// 0x04000 - (I) Log de transa�es do sistema de leil�es.
	// 0x08000 - (B) Log de transa��es da loja de compras.
	// 0x20000 - (K) Log de transa��es do Sistema de Banco.
	// 0x10000 - (X) Log de todas as transa��es.
	// Exemplo: Log de negocia��es+Log de vendas+Log de npcs (compra/venda)+Log de itens produzidos: 1+2+32+1024 = 1059
	// Mover itens do invent�rio para o carrinho n�o � gravado propositalmente.
	enable: 0xFFFFF

	// Logging files/tables
	// As configura��es a seguir indicam o local de registro.
	// Se 'use_sql' for true, as tabelas SQL s�o assumidas, caso contr�rio arquivos flat.
	database: {
		// Utilizar Registros em MySQL? (Nota 1)
		use_sql: true
		// log_gm_db: "log/atcommandlog.log"
		// log_branch_db: "log/branchlog.log"
		// log_chat_db: "log/chatlog.log"
		// log_mvpdrop_db: "log/mvplog.log"
		// log_npc_db: "log/npclog.log"
		// log_pick_db: "log/picklog.log"
		// log_zeny_db: "log/zenylog.log"
		// SQL tables
		log_gm_db: "atcommandlog"
		log_branch_db: "branchlog"
		log_chat_db: "chatlog"
		log_mvpdrop_db: "mvplog"
		log_npc_db: "npclog"
		log_pick_db: "picklog"
		log_zeny_db: "zenylog"
	}

	// Registrar uso de Galho Seco? (Nota 1)
	log_branch: false

	// Rastrear Circula��o de Zeny
	// Filter settings
	// 0 - n�o registrar; 1 - registrar qualquer circula��o de zeny; 2.....1000000 - m�nimo absoluto para registrar o valor
	log_zeny: 0

	// Registro de Itens de MVPs (Nota 1)
	// Obsoleto. Use Pick_Log. Mas este pode ser �til para rastrear MVPs derrotados
	log_mvpdrop: false

	// Log AtCommands & Charcommands (Note 1)
	// Somente os comandos emitidos por grupos de jogadores ('Config/System/Groups.cs') with
	// 'log_commands' configura��o definida para 'true' ser�o registradas.
	log_commands: false

	// Registrar o comando de NPC 'logmes' (Nota 1)
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

			// Registrar log de item
			// Nota: 1 = 0.01%, 100 = 1%
			rare_items_log: 100

			// Redistrar log de pre�o em item
			price_items_log: 10000

			// Registrar log na quantidade de item
			amount_items_log: 100
		} // item

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
			log_chat: 0x1f

			// Desativar o log de bate-papo quando o WoE est� sendo executado? (Nota 1)
			log_chat_woe_disable: false
		}
	}
}
