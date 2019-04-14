/*---------------------------------------------------------------------*\
|                 ____                     _                            |
|                /    |                   | |_                          |
|               /     |_ __ ____  __ _  __| |_  __ _                    |
|              /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|             /  __   | | |  |__  (_| | (_| | | (_| |                   |
|            /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|           /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                       |
+-----------------------------------------------------------------------+
| - Arquivo de configuração de Habilidades.                             |
\*---------------------------------------------------------------------*/

skill_config: {

	// A taxa de tempo para conjurar uma magia.
	casting_rate: 100

	// Tempo de delay após conjurações.
	delay_rate: 100

	// O tempo de delay depende da DES e/ou AGI de quem conjura?
	// Nota: Em servidores oficiais, nem DES nem AGI afetam o tempo de
	delay_dependon_dex: false
	delay_dependon_agi: false

	// Delay mínimo permitido para QUALQUER habilidade antes de 
	//conjurá-la em milisegundos.
	// Nota: Configurando isto para qualquer valor acima de 0 pode acabar
	//com os speedhacks.
	min_skill_delay_limit: 100

	// Este é o delay mínimo onde o jogador não pode se movimentar para
	//todas as habilidaes.
	// NOTA: Não defina baixo demais, se um personagem começar a se mover
	//logo depois de usar uma habilidade, o client não irá identificar
	//isso, e o jogador/monstro irá aparecer após "teleportar".
	default_walk_delay: 300

	// Desabilitar completamente o delay das habilidades dos
	//seguintes tipos:
	// NOTA: Por padrão monstros não tem delay nas habilidades, como
	//especificado no banco de dados das habilidades, porém seguem seu
	//próprio delay de 'reuso' que é especificado na mob_skill_db.
	// Quando definido, o delay para todas as habilidades se torna
	//min_skill_delay_limit.
	no_skill_delay: 2

	// Com quantos pontos de DES o tempo de conjuração se torna zero?
	castrate_dex_scale: 150

	// Quanto (DES*2+INT) vai tonar a conjuração variável zero?
	vcast_stat_scale: 530

	// Qual grau de suavidade o sistema de habilidades dará para
	//habilidades quando estiver contabilizando a velocidade de 
	//ataque (ASPD) para habilidades conjuráveis.
	// NOTA: Configurando para 100 pode causar problemas com habilidades
	//válidas não sendo conjuradas.
	// A diferença entre o tempo do client e do servidor varia então
	//habilitando 90% de suavidade deve ser suficiente para compensar
	//pequenas margens de erro.
	// IMPORTANTE: Esta função habilita um pequeno delay, próximo a 2
	//segundos, se ativa.
	// Para desativar, acesse mmo.h e comente a linha #DEFINE NODELAY
	skill_amotion_leniency: 90

	// Ataques normais estão ignorarão o delay após o uso de habilidades?
	skill_delay_attack_enable: true

	// Alcance adicionado as habilidades após o tempo de conjuração
	//terminar.
	// Escolha o quanto longe o alvo pode andar após a habilidade começar
	//a ser conjurada antes da habilidade falhar.
	// 0 desabilita esta checagem no alcance (padrão)
	skill_add_range: 0

	// Se o alvo sair do campo de alcance enquanto a habilidade é
	//conjurada, itens e SP requeridos serão consumidos para tal
	//habilidade?
	skill_out_range_consume: false

	// A distância entre quem conjura e o alvo define se a habilidade é
	//uma habilidade de alcance?
	// Se definida, quando a distância entre quem conjura e o alvo for
	//maior que 3 a habilidade é de longo-alcance, caso contrário o
	//alcance é físico.
	// Caso não definida, o alcance é determinado pelo alcance de
	//habilidade, se for maior que 5, a habilidade é de alcance.
	// O padrão é 14 (monstros + pets + homun)
	skillrange_by_distance: 14

	// O alcance da arma equipada deve ignorar o alcance da habilidade
	//definida em skill_db para a maioria das habilidades que utilizam
	//armas?
	// NOTA: Habilidades afetadas por esta opção são aquelas cujo o
	//alcance na skill_db é negativo.
	// Note que ao menos que monster_ai&0x400 seja definido, o alcance
	//de todas as habilidades será 9 para monstros.
	skillrange_from_weapon: 0

	// Jogadores fora de combate poderão causar danos através de
	//habilidades de área?
	// Caso definido como sim, metoros, nevasca e outras habilidades
	//de área não terão efeito caso o jogador esteja fora de combate:
	// dormindo, congelado e etc...
	skill_caster_check: true

	// Habilidades de chão devem ser removidas assim que quem as
	//conjura morre?
	clear_skills_on_death: 0

	// Habilidades de chão devem ser removidas assim que quem as conjura
	//saí do mapa onde a habilidade foi conjurada?
	clear_skills_on_warp: 15

	//Definindo para true irá substituir o modo de alvo de habilidades
	//"de chão" com a flag x01 para "Sem Oponentes"
	// As duas habilidades afetadas por padrão são Escudo Sagrado e
	//Escudo Mágico.
	// Caso habilitado, estas duas habilidades não protegerão mais,
	//somente aliados
	defunit_not_enemy: false

	// Habilidades dão pelo menos 'hits' de dano quando não falham/são
	//bloqueadas?
	// Por exemplo, Lanças de Fogo sempre possuem causarão pelo menos o
	//dano do número de lanças contra plantas?
	//Valores (some quando achar apropriado): 1 para ataques baseados
	//em arma, 2 para ataques mágicos, 4 ataques variados.
	skill_min_damage: 6

	// Taxa de delay do combo dos monges
	combo_delay_rate: 100

	// Usar um tipo alternativa da habilidade Contra-Ataque?
	// Para os personagens nos quais esta configuração afeta,
	//100% crítico, caso contrário são desconsideradas
	//DEF e HIT+20, CRI*2
	auto_counter_type: 15

	// Habilidades de chão podem ser substituidas sobre outras?
	// Por padrão, habilidades com UF_NOREITERATION definidas não podem
	//ser colocadas sobre outras habilidades, esta configuração irá
	//substituir isto. (skill_unit_db)
	skill_reiteration: 0

	// Habilidades de chão NÃO podem ser colocadas em baixo/perto de
	//jogadores/monstros?
	// Se definida, somente habilidades com UF_NOFOOTSET
	//serão afetadas (skill_unit_db)
	skill_nofootset: 1

	// Armadilhas (armadilhas de caçador + pântano dos mortos) devem
	//mudar seu alvo para "todos" dentro do campo gvg/pvp?
	// Padrão nos servidores oficiais: yes para armadilhas de jogadores
	gvg_traps_target_all: 1

	// Algumas configurações de armadilhas.
	//(Se Necessário Some os valores Desejados):
	// 1: Armadilhas são invisíveis para quem entra na visão delas.
	//Quando indefinida, todas as armadilhas são vistas a todo tempo.
	// (Armadilhas invisíveis podem ser reveladas atráves da habilidade
	//Alerta)
	traps_setting: 0

	// Restrições aplicadas à habilidade Criar Planta Carnívora
	//(Se Necessário Some os valores Desejados)
	// 1: Habilitar jogadores a atacar as plantas fora da área de dano.
	// 2: Desabilitar diferentes tipos ao mesmo tempo
	// Exemplo: proibir invocar qualquer coisa exceto hidras quando já
	//há uma hidra
	summon_flora_setting: 3

	// Caso a canção seja cancelada ou terminada ou o jogador saia da
	//área, continuará com o efeito por um curto período de tempo, o
	//jogador poderá tocar a canção novamente para resetar  o efeito da
	//habilidade?
	// 0: Não, deverá aguardar 20 segundos APÓS perder o efeito da
	//habilidade (Aegis)
	// 1: Sim, poderá tocar novamente em seguida para resetar o efeito
	//da habilidade (eathena)
	song_timer_reset: 0

	// Habilidades colocadas no chão checarão paredes
	// (Faz com que Nevasca/Ira de Thor/etc quando conjuradas pertas de
	//uma parede, não irá causará dano do outro lado)
	skill_wall_check: true

	// Quando escondido, a parede é verificada ou não?
	// Nota: Quando a habilidade não faz a checagem por paredes, você
	//sempre será considerado como se tivesse uma parade próxima a
	//você (você terá a velocidade baseada na parede). 
	//  Some as configurações requeridas, ser atacado sempre tira
	//o efeito de esconderijo.
	// 
	// 0 = não verificar paredes
	// 1 = Procurar por paredes
	// 2 = Esconderijo não é cancelado quando atacado
	// 4 = Esconderijo não é cancelado quando usando habilidades
	player_cloak_check_type: 1
	monster_cloak_check_type: 4

	// Não permitir colocar habilidades ilimitadas no chão ao mesmo tempo
	land_skill_limit: 9

	//Determine que tipo de mensagem será exibida quando uma
	//habilidade falhar:
	// 1 - Desabilitar todas as mensagens.
	// 2 - Desabilitar mensagens devido a delay.
	// 4 - Desabilitar mensagens de Mãos Leves
	// 8 - Desabilitar mensagens de Envenenar
	display_skill_fail: 0

	// Um jogador numa sala de chat (in-game) pode ser teleportado em
	//um portal?
	chat_warpportal: false

	// O que a habilidade "Sentido Sobrenatural" irá exibir nos
	//campos de defesa?
	// 0: Não exibir defesa
	// 1: Base def
	// 2: Vit/Int def
	// 3: Ambos (Padrão)
	sense_type: 1

	// Qual estilo ofensivo deve ser usado?
	// 0 = Estilo Aegis (ataque único com vários hits)
	// 1 = Estilo Athena (ataques múltiplos consecutivos)
	finger_offensive_type: 0

	// Configurações de Crux Magnum (Não mexa se não souber)
	// Se definida para no, o intervalo de hits é aumentado baseado na
	//quantidade de monstros vivos na mesma célula.
	// (significa que quando há monstros na mesma célula, eles não
	//receberão todos os hits)
	gx_allhit: false

	// Tipo de exibição do Crux Magnum (Padrão: 1)
	// 0: Personagem Amarelado
	// 1: Personagem Esbranquiçado
	gx_disptype: 1

	// Máxima diferença entre níveis para usar a habilidade Redenção
	devotion_level_difference: 10

	// Se no, então pode-se usar habilidades de conjunto sozinho.
	player_skill_partner_check: true

	// Tipo de remoção de armadilha
	// 0 = Sistema Aegis : Retorna com 1 'Armadilha'
	// 1 = Sistema Athena : Retorna com todos os itens gastos para
	//fazer a armadilha
	skill_removetrap_type: 0

	// Quando se usa arco para atacar por trás há uma penalidade
	//de 50% no dano?
	backstab_bow_penalty: true

	// Quantas vezes você pode tentar furtar um monstro.
	// Nota: Isto ajuda a evitar o exploit de furtos em monstros
	//com itens raros
	// Use 0 para desabilitar (o valor máximo permitido é 255)
	skill_steal_max_tries: 0

	// Arruaceiros podem plagear habilidades de classes avançadas
	// 0 = sem restrições
	// 1 = somente desordeiros podem plagear habilidades avançadas     
	// 2 = habilidades avançadas não podem ser plageadas por
	//nenhuma classe
	// Configuração dos servidores oficiais: 2
	copyskill_restrict: 2

	// A habilidade Frenesi cancela buffs do jogador quando usada?
	berserk_cancels_buffs: false

	// Quantidade e Nível da Cura máximos. Quando alguém conjura
	//cura neste nível ou
	// maior, a fórmula da cura é ignorada e este valor é usado no lugar.
	max_heal: 9999
	max_heal_lv: 11

	// Habilitar jogadores de pular o menu quando utilizar Teleporte nível 1
	// O menu contém apenas duas opções. "Aleatório" e "Cancelar"
	skip_teleport_lv1_menu: false

	// Permitir o uso de habilidades de Mestre Taekwon independente
	//do dia ser apropriado (Solar/Luar/Estelar) ?
	allow_skill_without_day: false

	// Permitir o uso de habilidades mágicas de Espiritualistas
	//(Esma, Eswoo, etc) em jogadores?
	allow_es_magic_player: false

	// Taxa da habilidade Milagre Solar, Lunar e Estelar (100% = 10000)
	sg_miracle_skill_ratio: 2

	// Duração da habilidade Milagre Solar, Lunar e Estelar em
	//milisegundos
	sg_miracle_skill_duration: 3600000

	// Taxa da habilidade Anjo Solar, Lunar e Estelar (100% = 10000)
	sg_angel_skill_ratio: 10

	// Habilidades em que bHealPower afeta
	// 1: Cura, 2: Santuário, 4: Arremessar Poção, 8: Arremessar Poção
	//Compacta, 16: Maçã de Idun
	skill_add_heal_rate: 7

	// O dano da habilidade Terremoto com um alvo único na tela é
	//passível de ser refletido?
	// Nota: Em servidores oficiais, o Terremoto pode ser refletido
	//quando há somente um alvo na tela,
	// que provavelmente é um exploit para caçar MVPs.
	eq_single_target_reflectable: true

	// Em servidores oficiais, você receberá dano de Reflexão e Destino
	//das Cartas mesmo com status de invencível.
	// Quando esta configuração é habilitada, permite você de ser imune
	//a qualquer tipo de dano, incluindo os citados anteriormente.
	// (O número será exibido mas o valor atual não)
	invincible_nodamage: false

	// Dançando durante a troca de armas
	// Nos servidores oficiais, uma correção é feita para previnir o
	//cancelamento de habilidades musicais durante a troca de armas
	// Padrão: yes
	dancing_weaponswitch_fix: true

	// Skill Trap Type (GvG)
	// 0: (official) Traps in GvG only make player stop moving after its walk path is complete, and it activates other traps on the way.
	// 1: Traps in GvG make player stop moving right when stepping over it.
	skill_trap_type: 0

	// O dado de armadilhas pode ser refletido?
	trap_reflect: true

	// Tipos de Armadilhas (GvG)
	// 0: (oficial) Armadilhas usadas em GvG só farão o jogador parar de
	//se mover depois de sua trajetória completa, e ele ativa outras
	//armadilhas no caminho.
	// 1: Armadilhas usadas em GvG farão o jogador parar de se mover
	//ao pisar sobre ela.
	skill_trap_type: 0

	// Nível máximo para habilidades de monstros
	// Nota: Se seus MVPs estiverem muito difíceis, reduza o valor em 10.
	mob_max_skilllvl: 100

	// Área de reação do Impacto de Tyr
	// 0: Utilizar a linha de configuração de servidores oficiais.
	// 1: Utilizar a linha de configuração sem Bug
	// 2-20: Área de reação/dano personalizada
	//(2 = 5x5, 3 = 7x7, 4 = 9x9, ..., 20 = 41x41)
	// Nota: Se você bater o alvo fora da área, o alvo apenas será
	//atingido uma vez e não terá o dano agrupado.
	bowling_bash_area: 0

	// Em servidores oficiais a Nevasca consiste em 81 unidades de
	//dano, por 3x3 de distância do centro em relação à tela.
	// Caso você desabilite esta opção, o empurrão da Nevasca dentro das
	//células descritas serão totalmente aleatórios. (eAthena Padrão)
	stormgust_knockback: true

	// Magic Rod's animation behavior
	// 0 : (official) Magic Rod's animation occurs every time it is used.
	// 1 : Magic Rod's animation would not occur unless a spell was absorbed. (old behavior)
	magicrod_type: 0

	// Exibir uso de habilidades no console? (somente depuração)
	skill_log: false
}
