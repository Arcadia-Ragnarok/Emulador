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
| - Arquivo de configura��o geral.                                     |
\*--------------------------------------------------------------------*/

misc_config: {

	// Modo PK. O servidor inteiro fica em PvP (exceto as cidades).
	//A perda de experi�ncia � dobrada quando se morre para um jogador.
	// Ao matar monstros 20 n�veis acima do seu, ser� recebido 15% de
	//exp adicional e 25% de b�nus de drop de itens. 
	// Existe o nopvp.txt para configurar mapas que n�o possuem PK
	//neste modo.
	// Aprendizes n�o podem ser atacados ou atacar.
	// O contador de PvP e o ranking tamb�m ser�o desabilitados.
	// Nota: Se pk_mode for definido para 2 ao inv�s de 1 (yes),
	//os jogadores receber�o uma penalidade de manner de 5 toda vez
	//que matar outro jogador (veja a configura��o de manner_system
	// para configurar como isto afetar� os jogadores)
	pk_mode: 0

	// Para servidores PK. Modifique isto para o n�vel m�nimo que os
	//jogadores podem ficar em PK
	pk_min_level: 55

	// Para servidores PK. Especifica o n�vel m�ximo de diferen�a
	//entre jogadores para poderem se atacar. 0 desabilita o limite.
	pk_level_range: 0

	// Configura��o do Manner/karma. Especifica como o manner ir�
	// afetar os jogadores (some quando necess�rio):
	//  0: Sem penalidades.
	//  1: Desabilita o chat (inclu� whispers, mensagens de
	//grupo/cl�, etc)
	//  2: Desabilita o uso de habilidades
	//  4: Desabilita o uso de comandos
	//  8: Desabilita usar/pegar/dropar itens
	// 16: Desabilita cria��o de salas de chats e vendas
	manner_system: 31

	// Exibir registro (log) da battle? (somente somente depura��o)
	battle_log: false

	// Exibir outros registros (logs)? (somente depura��o)
	etc_log: false

	// Depurar pontos de warp?
	//Se sim, pontos de warp ir�o aparecer como flags.
	// Isto tamb�m ir� rodar na inicializa��o do servidor uma checagem
	//de warps para exibir quais warps est�o diretamente na parte
	//superior de npcs com OnTouch, que pode causar warps com
	//loops infinitos
	warp_point_debug: false

	// O servidor ser� iniciado no periodo norturno?
	night_at_start: false

	// Defina a dura��o do dia em milissegundos
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

	// Determine o n�mero m�ximo de personagens que podem ocupar uma
	//�nica c�lula.
	official_cell_stack_limit: 1
	custom_cell_stack_limit: 1

	// Se 0 ao caminhar n�o verificar as c�lulas est� ocupada
	// Se 1 enquanto andar checar se as c�lulas est� ocupada
	check_occupied_cells: true

	// Permitir usar autotrade em mapas somente com a mapflag
	//para tal?
	at_mapflag: false

	// Configure isto para quantos minutos de autotrade ser�o
	//necess�rios para expulsar um personagem do servidor.
	at_timeout: 0

	// Tempo m�nimo entre o uso do search store em segundos.
	searchstore_querydelay: 10

	// Quantidade m�xima de resultados do search store,
	//antes de ser cancelado.
	searchstore_maxresults: 30

	// A perda ou o ganho de pontos de cash ser�o exibidos
	cashshop_show_points: false

	// O status do sistema de e-mails � exibido ao logar.
	// Padr�o: 0
	// 0 = N�o
	// 1 = Sim
	// 2 = Sim, quando houver e-mails n�o lidos.
	mail_show_status: 0

	// Transforma��o de Monstro � desativada na woe?
	// Se caso for configurado com 'true', a transforma��o
	//do jogador � automaticamente anulada ao entrar no
	//mapa em per�odos de guerra
	mon_trans_disable_in_gvg: true

	// Realiza verifica��es atrav�s das pesquisas dentro do
	//jogo (@ii/@mi) com a condi��o "Case Sensitive".
	// Padr�o (yes)
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