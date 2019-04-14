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
| - Arquivo de configura��o de Jogadores.                              |
\*--------------------------------------------------------------------*/

player_config: {

	// Taxa m�xima de HP para jogador. (O padr�o � 100)
	hp_rate: 100

	// Taxa m�xima de SP para jogador. (O padr�o � 100)
	sp_rate: 100

	// Cartas e atributos para a m�o esquerda tamb�m s�o aplicados na
	//m�o direita?
	// (Definido para 'true' em servidores oficiais)
	left_cardfix_to_right: true

	// Quantidade de HP que um jogador ir� reviver, 0 � o padr�o.
	// (A unidade � a porcentagem total de HP, 100 � o HP por
	//completo, 0 significa 1 de HP.)
	restart_hp_rate: 0

	// Quantidade de SP que um jogador ir� reviver, 0 � o padr�o.
	// (A unidade � a porcentagem total de SP, 100 � o SP por
	//completo, 0 significa 1 de SP.)
	restart_sp_rate: 0

	// Um jogador comum pode burlar a �rvore de habilidades?
	player_skillfree: false

	// Quando definido para yes, for�a pontos de habilidade ganhos
	//na 1� classe serem distribu�dos nela e for�a habilidades de
	//aprendiz serem distribu�das na Habilidades B�sicas.    
	player_skillup_limit: true

	// Habilidades de quest podem ser aprendidas?    
	// Configurando para yes poder� abrir exploits em seu servidor!
	quest_skill_learn: false


	// Quando as habilidades s�o resetadas, as habilidades de quest
	//tamb�m s�o?    
	// Configurando para yes poder� abrir exploits em seu servidor!
	// NOTA: Se voc� tiver quest_skill_learn definida para yes,
	//habilidades de quests sempre ser�o resetadas.
	quest_skill_reset: false

	// � obrigat�rio possuir Habilidades B�sicas para sentar,
	//realizar negocia��es, criar grupos ou salas de chat?    
	basic_skill_check: true

	// Quando movido, ou mandado para um mapa, quanto tempo antes
	//do monstro detectar a presen�a do jogador sem que ele se mova
	//em milissegundos.
	// Se voc� atacar um monstro, ele ir� atac�-lo independente
	//desta configura��o.
	player_invincible_time: 5000

	// Quando definido como true, evita o abuso do portal
	fix_warp_hit_delay_abuse: false

	// Intervalo de recupera��o natural de HP em milissegundos
	natural_healhp_interval: 6000

	// Intervalo de recupera��o natural de SP em milissegundos
	natural_healsp_interval: 8000

	// Intervalo de recupera��o autom�tico de habilidades
	//de cura em milissegundos.
	natural_heal_skill_interval: 10000

	// O peso m�ximo que um personagem pode carregar para que
	//a recupera��o de hp natural seja interrompida em porcentagem.
	natural_heal_weight_rate: 50

	// M�xima velocidade de ataque.
	// O m�ximo aceito � 190 padr�o oficial
	max_aspd: 190

	// M�xima velocidade de ataque, mas para as 3� classes.
	// O m�ximo aceito � 193 padr�o oficial
	max_third_aspd: 193

	// M�xima taxa de velocidade de movimento
	// 200 � o dobro da velocidade normal
	max_walk_speed: 300

	// HP m�ximo. (O padr�o � 1000000)
	max_hp: 1000000

	// SP m�ximo. (O padr�o � 1000000)
	max_sp: 1000000

	// Limite m�ximo de stats. (agi, str, etc.)
	// O m�ximo aceito � 99 padr�o oficial
	max_parameter: 99

	// O mesmo que max_parameter, mas para classes 3.
	// Nota: Este valor deve ser igual ou maior que o definido em
	//max_parameter.
	// O m�ximo aceito � 130 padr�o oficial
	max_third_parameter: 130

	// O mesmo que max_parameter, mas para classes extendidas
	//(Ex. Super Novice, Kagero/Oboro, Rebellion).
	// O m�ximo aceito � 125 padr�o oficial
	max_extended_parameter: 125

	// Mesmo do max_parameter, mas para classe summoner
	// O m�ximo aceito � 120 padr�o oficial
	max_summoner_parameter: 120

	// Mesmo do max_parameter, mas para classe beb�.
	// O m�ximo aceito � 80 padr�o oficial
	max_baby_parameter: 80

	// Mesmo do max_third_parameter, mas para classe beb� 3rd's.
	// O m�ximo aceito � 117 padr�o oficial
	max_baby_third_parameter: 117

	// M�ximo de def/mdef
	// NOTA: n�o afeta habilidades e efeitos como Corpo Fechado
	// Se weapon_defense_type n�o for zero, n�o ser� aplicada a m�x def.
	// Se magic_defense_type n�o for zero, n�o ser� aplicada a m�x mdef.
	// O m�ximo aceito � 99 padr�o oficial
	max_def: 99

	// Convers�o de b�nus de Def para Def2. Se a def/mdef da armadura
	//exceder a max_def, o restante � convertido em vit def/int mdef
	//usando este multiplicador.
	// (eg: se definido para 10, cada ponto restante gerar� 10 pontos de vit def)
	over_def_bonus: 0

	// O peso m�ximo que um carrinho pode suportar.
	max_cart_weight: 8000

	// Previnir que um jogador saia do jogo enquanto esteja sendo atacado em
	//milissegundos. Se definido como 0 desativa.
	prevent_logout: 10000

	// Quando o servidor deve impedir que um jogador se desconecte?
	// N�o tem efeito se prevent_logout estiver desabilitado.
	// Os servidores oficiais impedem que os jogadores se desconectem
	// depois de atacar, lan�ar habilidades e sofrer danos.
	// 0 = Os jogadores sempre podem sair
	// 1 = Impedir sair logo ap�s o login
	// 2 = Impedir sair depois de atacar
	// 4 = Impedir sair ap�s a habilidade de lan�amento
	// 8 = Impedir sair depois de ser atingido
	prevent_logout_trigger: 14

	// Exibir hp/sp "drenados" de ataques normais?
	//(ex.: Carta Mosca Ca�adora)
	show_hp_sp_drain: false

	// Exibir hp/sp ganhos ao matar monstros?
	//(ex.: Carta Delet�rio Voador)
	show_hp_sp_gain: true

	// Mostre o b�nus cr�tico para a arma da classe Katar na janela de
	//status do jogador?
	// No servidor oficial, o b�nus cr�tico da arma da classe Katar n�o � exibido.
	show_katar_crit_bonus: false

	// Caso definido, quando A aceita B como amigo, B ser� adicionado a
	//lista de amigos de A, do contr�rio, somente A aparecer� na lista
	//de amigos de B.
	// NOTA: esta configura��o n�o habilita a remo��o m�tua de
	//amigos, somente a adi��o.
	friend_auto_add: true

	// Convite de grupo/cl� ou negocia��es simult�neas s�o
	//automaticamente rejeitadas?
	invite_request_check: true

	// Jogadores deixar�o seu "Cr�nio" quando morrerem?
	// 0 = Desabiltiado
	// 1 = Apenas em mapas PvPs
	// 2 = Em todas as situa��es
	bone_drop: 0

	// Personagens montados (em Peco) ter�o seus tamanhos aumentados
	// 0 = n�o
	// 1 = somente classes normais em Peco ter�o tamanho grande
	// 2 = somente classes beb�s em Peco ter�o tamanho m�dio
	// 3 = as classes normais em Peco ter�o tamanho grande e as
	//classes beb�s em Peco ter�o tamanho m�dio
	character_size: 0

	// Personagens inativos recebem itens do autoloot?
	// Defina o tempo em segundos onde um personagem inativo n�o
	//receber� itens do autoloot (0: desativado).
	idle_no_autoloot: 0

	// Dist�ncia m�nima que lojas/chat devem ter de NPCs
	// Padr�o: 3 c�lulas (0: desativado).
	min_npc_vendchat_distance: 3

	// Se min_npc_vendchat_distance estiver ativado, os jogadores
	//podem abrir lojas/chat nas proximidades do npc escondido?
	vendchat_near_hiddennpc: false

	// A habilidade F�ria do Super Aprendiz pode ter incrementos
	//de 10%, 20%-80%, 90%
	// Alterando a configura��o abaixo para 1 permitir� sua
	//utiliza��o em 0%, para maximizar o Super Aprendiz.
	// Padr�o: 0
	snovice_call_type: 0

	// Como o servidor deve medir o tempo de inatividade do personagem?    
	// 0x001 - Andar
	// 0x002 - Habilidades de Alvo �nico 
	// 0x004 - Habilidades em �rea 
	// 0x008 - Usar item ( Equipar/Desequipar tamb�m )
	// 0x010 - Atacar
	// 0x020 - Chat ( PM, grupo, cl�, bg )
	// 0x040 - Sentar/Levantar
	// 0x080 - Emoticon
	// 0x100 - Dropar Item
	// 0x200 - Uso de Comandos @/#
	// Note que pelo menos uma dessas op��es deve estar ativa
	// Esteja ciente, que quanto mais essas op��es estiverem ativas
	//mais f�cil ser� o uso de trapa�as usando o tempo de inatividade.
	// Default: Andar ( 0x1 ) + Habilidades em Alvo �nico ( 0x2 )
	//                        + Habilidades em �rea  ( 0x4 )
	//                        + Usar item ( 0x8 )
	//                        + Atacar ( 0x10 ) = 0x1F
	idletime_criteria: 0x1F

	// Os jogadores podem obter ATK / DEF de refinamentos em
	//equipamentos de costume?
	costume_refine_def: true
	shadow_refine_def: true
	shadow_refine_atk: true

	// Manter o jogador virado para a dire��o ap�s ser teleportado?
	player_warp_keep_direction: true
}
