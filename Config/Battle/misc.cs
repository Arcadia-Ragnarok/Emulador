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
| - Arquivo de configuração geral.                                     |
\*--------------------------------------------------------------------*/

misc_config: {

	// Modo PK. O servidor inteiro fica em PvP (exceto as cidades).
	//A perda de experiência é dobrada quando se morre para um jogador.
	// Ao matar monstros 20 níveis acima do seu, será recebido 15% de
	//exp adicional e 25% de bônus de drop de itens. 
	// Existe o nopvp.txt para configurar mapas que não possuem PK
	//neste modo.
	// Aprendizes não podem ser atacados ou atacar.
	// O contador de PvP e o ranking também serão desabilitados.
	// Nota: Se pk_mode for definido para 2 ao invés de 1 (yes),
	//os jogadores receberão uma penalidade de manner de 5 toda vez
	//que matar outro jogador (veja a configuração de manner_system
	// para configurar como isto afetará os jogadores)
	pk_mode: 0

	// Para servidores PK. Modifique isto para o nível mínimo que os
	//jogadores podem ficar em PK
	pk_min_level: 55

	// Para servidores PK. Especifica o nível máximo de diferença
	//entre jogadores para poderem se atacar. 0 desabilita o limite.
	pk_level_range: 0

	// Configuração do Manner/karma. Especifica como o manner irá
	// afetar os jogadores (some quando necessário):
	//  0: Sem penalidades.
	//  1: Desabilita o chat (incluí whispers, mensagens de
	//grupo/clã, etc)
	//  2: Desabilita o uso de habilidades
	//  4: Desabilita o uso de comandos
	//  8: Desabilita usar/pegar/dropar itens
	// 16: Desabilita criação de salas de chats e vendas
	manner_system: 31

	// Exibir registro (log) da battle? (somente somente depuração)
	battle_log: false

	// Exibir outros registros (logs)? (somente depuração)
	etc_log: false

	// Depurar pontos de warp?
	//Se sim, pontos de warp irão aparecer como flags.
	// Isto também irá rodar na inicialização do servidor uma checagem
	//de warps para exibir quais warps estão diretamente na parte
	//superior de npcs com OnTouch, que pode causar warps com
	//loops infinitos
	warp_point_debug: false

	// O servidor será iniciado no periodo norturno?
	night_at_start: false

	// Defina a duração do dia em milissegundos
	// Escolha 0 para desabilitar o ciclo do dia
	day_duration: 3600000

	// Define duration in msec of the night (default: 1800000 = 30 min)
	// Set to 0 to disable night cycle (but not @night GM command).
	// Except 0, minimum is 60000 (1 minute)
	night_duration: 0

	// Habilitar duelos em mapas com pvp
	duel_allow_pvp: false

	// Habilitar duelos em mapas com gvg
	duel_allow_gvg: false

	// Permitir o uso de teleporte durante o duelo
	duel_allow_teleport: false

	// Sair automaticamente de um duelo quando morrer
	duel_autoleave_when_die: true

	// Intervalo em minutos para utilizar "@duel"
	duel_time_interval: 5

	// Restringir o duelo somente no mesmo mapa
	duel_only_on_same_map: false

	// Determine o número máximo de personagens que podem ocupar uma
	//única célula.
	official_cell_stack_limit: 1
	custom_cell_stack_limit: 1

	// Se 0 ao caminhar não verificar as células está ocupada
	// Se 1 enquanto andar checar se as células está ocupada
	check_occupied_cells: true

	// Permitir usar autotrade em mapas somente com a mapflag
	//para tal?
	at_mapflag: false

	// Configure isto para quantos minutos de autotrade serão
	//necessários para expulsar um personagem do servidor.
	at_timeout: 0

	// Tempo mínimo entre o uso do search store em segundos.
	searchstore_querydelay: 10

	// Quantidade máxima de resultados do search store,
	//antes de ser cancelado.
	searchstore_maxresults: 30

	// A perda ou o ganho de pontos de cash serão exibidos
	cashshop_show_points: false

	// O status do sistema de e-mails é exibido ao logar.
	// Padrão: 0
	// 0 = Não
	// 1 = Sim
	// 2 = Sim, quando houver e-mails não lidos.
	mail_show_status: 0

	// Transformação de Monstro é desativada na woe?
	// Se caso for configurado com 'true', a transformação
	//do jogador é automaticamente anulada ao entrar no
	//mapa em períodos de guerra
	mon_trans_disable_in_gvg: true

	// Realiza verificações através das pesquisas dentro do
	//jogo (@ii/@mi) com a condição "Case Sensitive".
	// Padrão (yes)
	// Example: Given the two items:
	// -  { Id: 553,  AegisName: "Bun",  Name: "Bao" }
	// -  { Id: 6115, AegisName: "Bun_", Name: "Bun" }
	// query       when 'yes'    when 'no'
	// @item bun   # 6115        # 553
	// @item Bun   # 553         # 553
	// @item Bao   # 553         # 553
	// @item Bun_  # 6115        # 6115
	case_sensitive_aegisnames: true

	// Ativar sistema de conquista ?
	enable_achievement_system: false
}