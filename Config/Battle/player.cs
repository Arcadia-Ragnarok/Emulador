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
| - Arquivo de configuração de Jogadores.                              |
\*--------------------------------------------------------------------*/

player_config: {

	// Taxa máxima de HP para jogador. (O padrão é 100)
	hp_rate: 100

	// Taxa máxima de SP para jogador. (O padrão é 100)
	sp_rate: 100

	// Cartas e atributos para a mão esquerda também são aplicados na
	//mão direita?
	// (Definido para 'true' em servidores oficiais)
	left_cardfix_to_right: true

	// Quantidade de HP que um jogador irá reviver, 0 é o padrão.
	// (A unidade é a porcentagem total de HP, 100 é o HP por
	//completo, 0 significa 1 de HP.)
	restart_hp_rate: 0

	// Quantidade de SP que um jogador irá reviver, 0 é o padrão.
	// (A unidade é a porcentagem total de SP, 100 é o SP por
	//completo, 0 significa 1 de SP.)
	restart_sp_rate: 0

	// Um jogador comum pode burlar a árvore de habilidades?
	player_skillfree: false

	// Quando definido para yes, força pontos de habilidade ganhos
	//na 1ª classe serem distribuídos nela e força habilidades de
	//aprendiz serem distribuídas na Habilidades Básicas.    
	player_skillup_limit: true

	// Habilidades de quest podem ser aprendidas?    
	// Configurando para yes poderá abrir exploits em seu servidor!
	quest_skill_learn: false


	// Quando as habilidades são resetadas, as habilidades de quest
	//também são?    
	// Configurando para yes poderá abrir exploits em seu servidor!
	// NOTA: Se você tiver quest_skill_learn definida para yes,
	//habilidades de quests sempre serão resetadas.
	quest_skill_reset: false

	// É obrigatório possuir Habilidades Básicas para sentar,
	//realizar negociações, criar grupos ou salas de chat?    
	basic_skill_check: true

	// Quando movido, ou mandado para um mapa, quanto tempo antes
	//do monstro detectar a presença do jogador sem que ele se mova
	//em milissegundos.
	// Se você atacar um monstro, ele irá atacá-lo independente
	//desta configuração.
	player_invincible_time: 5000

	// Quando definido como true, evita o abuso do portal
	fix_warp_hit_delay_abuse: false

	// Intervalo de recuperação natural de HP em milissegundos
	natural_healhp_interval: 6000

	// Intervalo de recuperação natural de SP em milissegundos
	natural_healsp_interval: 8000

	// Intervalo de recuperação automático de habilidades
	//de cura em milissegundos.
	natural_heal_skill_interval: 10000

	// O peso máximo que um personagem pode carregar para que
	//a recuperação de hp natural seja interrompida em porcentagem.
	natural_heal_weight_rate: 50

	// Máxima velocidade de ataque.
	// O máximo aceito é 190 padrão oficial
	max_aspd: 190

	// Máxima velocidade de ataque, mas para as 3ª classes.
	// O máximo aceito é 193 padrão oficial
	max_third_aspd: 193

	// Máxima taxa de velocidade de movimento
	// 200 é o dobro da velocidade normal
	max_walk_speed: 300

	// HP máximo. (O padrão é 1000000)
	max_hp: 1000000

	// SP máximo. (O padrão é 1000000)
	max_sp: 1000000

	// Limite máximo de stats. (agi, str, etc.)
	// O máximo aceito é 99 padrão oficial
	max_parameter: 99

	// O mesmo que max_parameter, mas para classes 3.
	// Nota: Este valor deve ser igual ou maior que o definido em
	//max_parameter.
	// O máximo aceito é 130 padrão oficial
	max_third_parameter: 130

	// O mesmo que max_parameter, mas para classes extendidas
	//(Ex. Super Novice, Kagero/Oboro, Rebellion).
	// O máximo aceito é 125 padrão oficial
	max_extended_parameter: 125

	// Mesmo do max_parameter, mas para classe summoner
	// O máximo aceito é 120 padrão oficial
	max_summoner_parameter: 120

	// Mesmo do max_parameter, mas para classe bebê.
	// O máximo aceito é 80 padrão oficial
	max_baby_parameter: 80

	// Mesmo do max_third_parameter, mas para classe bebê 3rd's.
	// O máximo aceito é 117 padrão oficial
	max_baby_third_parameter: 117

	// Máximo de def/mdef
	// NOTA: não afeta habilidades e efeitos como Corpo Fechado
	// Se weapon_defense_type não for zero, não será aplicada a máx def.
	// Se magic_defense_type não for zero, não será aplicada a máx mdef.
	// O máximo aceito é 99 padrão oficial
	max_def: 99

	// Conversão de bônus de Def para Def2. Se a def/mdef da armadura
	//exceder a max_def, o restante é convertido em vit def/int mdef
	//usando este multiplicador.
	// (eg: se definido para 10, cada ponto restante gerará 10 pontos de vit def)
	over_def_bonus: 0

	// O peso máximo que um carrinho pode suportar.
	max_cart_weight: 8000

	// Previnir que um jogador saia do jogo enquanto esteja sendo atacado em
	//milissegundos. Se definido como 0 desativa.
	prevent_logout: 10000

	// Quando o servidor deve impedir que um jogador se desconecte?
	// Não tem efeito se prevent_logout estiver desabilitado.
	// Os servidores oficiais impedem que os jogadores se desconectem
	// depois de atacar, lançar habilidades e sofrer danos.
	// 0 = Os jogadores sempre podem sair
	// 1 = Impedir sair logo após o login
	// 2 = Impedir sair depois de atacar
	// 4 = Impedir sair após a habilidade de lançamento
	// 8 = Impedir sair depois de ser atingido
	prevent_logout_trigger: 14

	// Exibir hp/sp "drenados" de ataques normais?
	//(ex.: Carta Mosca Caçadora)
	show_hp_sp_drain: false

	// Exibir hp/sp ganhos ao matar monstros?
	//(ex.: Carta Deletério Voador)
	show_hp_sp_gain: true

	// Mostre o bônus crítico para a arma da classe Katar na janela de
	//status do jogador?
	// No servidor oficial, o bônus crítico da arma da classe Katar não é exibido.
	show_katar_crit_bonus: false

	// Caso definido, quando A aceita B como amigo, B será adicionado a
	//lista de amigos de A, do contrário, somente A aparecerá na lista
	//de amigos de B.
	// NOTA: esta configuração não habilita a remoção mútua de
	//amigos, somente a adição.
	friend_auto_add: true

	// Convite de grupo/clã ou negociações simultâneas são
	//automaticamente rejeitadas?
	invite_request_check: true

	// Jogadores deixarão seu "Crânio" quando morrerem?
	// 0 = Desabiltiado
	// 1 = Apenas em mapas PvPs
	// 2 = Em todas as situações
	bone_drop: 0

	// Personagens montados (em Peco) terão seus tamanhos aumentados
	// 0 = não
	// 1 = somente classes normais em Peco terão tamanho grande
	// 2 = somente classes bebês em Peco terão tamanho médio
	// 3 = as classes normais em Peco terão tamanho grande e as
	//classes bebês em Peco terão tamanho médio
	character_size: 0

	// Personagens inativos recebem itens do autoloot?
	// Defina o tempo em segundos onde um personagem inativo não
	//receberá itens do autoloot (0: desativado).
	idle_no_autoloot: 0

	// Distância mínima que lojas/chat devem ter de NPCs
	// Padrão: 3 células (0: desativado).
	min_npc_vendchat_distance: 3

	// Se min_npc_vendchat_distance estiver ativado, os jogadores
	//podem abrir lojas/chat nas proximidades do npc escondido?
	vendchat_near_hiddennpc: false

	// A habilidade Fúria do Super Aprendiz pode ter incrementos
	//de 10%, 20%-80%, 90%
	// Alterando a configuração abaixo para 1 permitirá sua
	//utilização em 0%, para maximizar o Super Aprendiz.
	// Padrão: 0
	snovice_call_type: 0

	// Como o servidor deve medir o tempo de inatividade do personagem?    
	// 0x001 - Andar
	// 0x002 - Habilidades de Alvo Único 
	// 0x004 - Habilidades em Área 
	// 0x008 - Usar item ( Equipar/Desequipar também )
	// 0x010 - Atacar
	// 0x020 - Chat ( PM, grupo, clã, bg )
	// 0x040 - Sentar/Levantar
	// 0x080 - Emoticon
	// 0x100 - Dropar Item
	// 0x200 - Uso de Comandos @/#
	// Note que pelo menos uma dessas opções deve estar ativa
	// Esteja ciente, que quanto mais essas opções estiverem ativas
	//mais fácil será o uso de trapaças usando o tempo de inatividade.
	// Default: Andar ( 0x1 ) + Habilidades em Alvo Único ( 0x2 )
	//                        + Habilidades em Área  ( 0x4 )
	//                        + Usar item ( 0x8 )
	//                        + Atacar ( 0x10 ) = 0x1F
	idletime_criteria: 0x1F

	// Os jogadores podem obter ATK / DEF de refinamentos em
	//equipamentos de costume?
	costume_refine_def: true
	shadow_refine_def: true
	shadow_refine_atk: true

	// Manter o jogador virado para a direção após ser teleportado?
	player_warp_keep_direction: true
}
