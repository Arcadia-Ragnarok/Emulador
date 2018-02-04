/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
+----------------------------------------------------------------------+
| - Arquivo de configura��o da global da Battle.                       |
\*--------------------------------------------------------------------*/

global_config: {
	// Quem deve possuir um valor de BaseAtk?
	//(faz a for�a afetar o dano)
	enable_baseatk: 9

	// Quem pode ter Esquiva Perfeita?
	enable_perfect_flee: 1

	// Quem pode acertar danos cr�ticos?
	// (Algumas habilidades sempre acertam o alvo, independente de
	//ser cr�tico ou n�o)
	enable_critical: 17

	// Taxa de ajustes de cr�tico para n�o-jogadores
	mob_critical_rate: 100
	critical_rate: 100

	// Ataques normais resultam em delay na movimenta��o?
	// Se n�o, os personagens podem se mover logo que iniciam o
	//ataque (sprite de ataque ou de movimento podem ser omitidas do
	//client-side, causando ataques interrompidos ou monstros que se
	//teleportam at� voc�)
	// Caso contr�rio, o delay � igual ao 'sprite de ataque'
	//sem movimenta��o
	attack_walk_delay: 15

	// Ajuste no delay de movimento ap�s ser atacado.
	// O delay onde o jogador n�o pode andar ap�s receber um ataque
	//� calculado como porcentagem da dura��o da anima��o do ataque.
	// NOTA: Afeta apenas o atraso normal de um �nico ataque, n�o o
	//atraso adicionado pela op��o multihit_delay, logo abaixo.
	pc_damage_walk_delay_rate: 20
	damage_walk_delay_rate: 100

	// Ajuste no delay de movimento para ataques m�ltiplos.
	// Quando atingido por uma habilidade de m�ltiplos danos como
	//Ira de Thor ou Trov�o de J�piter, personagens ser�o
	// impossibilitados de se mover por
	//(n�mero de danos - 1) * multihit_delay" milisegundos adicionais.
	// 80 � a configura��o no estilo Aegis (vs L�minas Destruidoras)
	// 230 � a configura��o que faz o delay de movimento permanecer
	//at� o �ltimo dano (vs Trov�o de J�piter)
	multihit_delay: 80

	// Taxa do atraso dos danos para jogadores
	// (Defina no/0 e imitar� a habilidade Vigor)
	player_damage_delay_rate: 100

	// A detec��o de morto-vivo deve ser feita atrav�s da checagem
	//da ra�a ou do elemento?
	// 0 = elemento morto-vivo
	// 1 = ra�a morto-vivo
	// 2 = ambos (qualquer uma funciona)
	undead_detect_type: 0

	// Qual � a m�nima e m�xima taxa de ataque para danos normais? 
	min_hitrate: 5
	max_hitrate: 100

	// Penalidade que afeta a ESQUIVA quando o n�mero de monstros
	//atacando um jogador for maior que agi_penalty_count
	// 0 = nenhuma penalidade � aplicada
	// 1 = agi_penalty_num � reduzida da ESQUIVA como uma porcentagem
	// 2 = agi_penalty_num � reduzida da ESQUIVA como uma quantidade
	//exata
	agi_penalty_type: 1

	// Quando a penalidade na agilidade � habilitada, a quem ser�
	//aplicada?
	// Por padr�o, apenas jogadorem recebem a penalidade.
	agi_penalty_target: 1

	// Quantidade de inimigos requeridos para o jogador alvo antes
	//da ESQUIVA ser penalizada
	agi_penalty_count: 3

	// Quantidade de ESQUIVA a ser penalizada por cada ataque de
	//monstro maior que agi_penalty_count
	agi_penalty_num: 10

	// Tipo de penalidade aplicada para os equipamentos e vit DEF
	//quando mais do que vit_penalty_count monstros est�o atacando
	//um jogador
	// 0 = nenhuma penalidade � aplicada
	// 1 = vit_penalty_num � reduzida da DEF como uma porcentagem
	// 2 = vit_penalty_num � reduzida da DEF como uma quantidade exata
	vit_penalty_type: 1

	// Quando a penalidade na agilidade � habilitada, a quem ser�
	//aplicada?
	// Por padr�o, apenas jogadorem recebem a penalidade.
	vit_penalty_target: 1

	// Quantidade de inimigos requeridos para o jogador alvo antes
	//da defesa ser penalizada
	vit_penalty_count: 3

	// Quantidade de VIT def a ser penalizada por cada ataque de
	//monstro maior que vit_penalty_count
	vit_penalty_num: 5

	// Usar um m�todo alternativo de calcular a DEF para ataques f�sicos
	// Com 0, desabilita-a
	//(use redu��o normal de def% al�m da redu��o de def2)
	// Sendo 1 ou mais a defesa � subtraida de (DEF*valor)
	// eg: 10 + 50 def, torna-se 0 + (10*tipo + 50)
	weapon_defense_type: 0

	// MDEF�igualmente acima....(MDEF*valor)
	magic_defense_type: 0

	// Mudar a dire��o de quem ataca para quem est� sendo atacado?
	attack_direction_change: 0

	// Para quem definir isto, o elemento de ataque natural �
	//"n�o-elemental"
	// (100% contra todos os elementos de defesa)
	// NOTA: Esta configura��o faz com que n�o-jogadores possam
	//atacar com dano total contra alvos tipo Fantasma com ataques
	//normais (eg: vs. Ghostring).
	attack_attr_none: 14

	// Taxa na qual equipamentos podem ser quebrados (taxa-base
	//antes de modificada por qualquer habilidade)
	// 1 = 0.01% chance. Padr�o dos servidores oficiais: 0
	equip_natural_break_rate: 0

	// Taxa na qual seu equipamento � quebrado pelo jogador que
	//o equipa.
	// Esta taxa afeta a taxa de penalidade de quebra de habilidades
	//como For�a Violenta e sua taxa natural de quebra
	//(de equip_natural_break_rate).
	// Se uma das habilidades de encantamento de um s�bio falhar e
	//for definido acima de 0, o personagem selecionado ter� o
	//armamento quebrado.
	equip_self_break_rate: 100

	// Taxa na qual voc� pode quebrar o equipamento do seu alvo.
	// Afeta o comportamento das habilidades como Terror �cido
	//e Golpe Estilha�ante
	equip_skill_break_rate: 100

	// Ataques com armas tem delay em sua velocidade antes do dano
	//real ser aplicado?
	// NOTA: A configura��o oficial � yes, mesmo que compromenta
	//um pouco o desempenho.
	delay_battle_damage: true

	// Muni��es/flechas s�o consumidas quando usadas em arcos/armas?
	// 0 = N�o
	// 1 = Sim
	// 2 = Sim, mesmo para habilidades que n�o especifiquem o consumo de flechas
	// em habilidades usadas com armas e com armas de alcance
	//(adivinha automaticamente
	// quais habilidades devem consumir muni��o quando � adquirida
	//por carta ou Pl�gio)
	arrow_decrement: 1

	// O item script 'Autospell' deve checar alcance/obst�culos antes
	//de ser conjurada?
	// Comportamento oficial � "no", configure para "yes" e ent�o far�
	//as habilidades utilizarem seu alcance padr�o.
	// Por exemplo, L�minas Destruidoras precisa de 2 c�lulas de
	//dist�ncia antes de ser autoconjurada.
	// Esta configura��o tamb�m afeta autospellwhenhit.
	autospell_check_range: false

	// Caso o trajeto do atacante estiver a beira do trajeto traseiro e o
	//mesmo for empurrado para atr�s, o alvo dever� ser jogado
	//para a esquerda? 
	// Em servidores oficiais esta op��o est� habilitada.
	knockback_left: true

	// Caso o alvo seja jogado pra fora da tela, poder� fugir
	//do dano causado?
	// Em servidores oficiais isto n�o � poss�vel.
	// O jogador receber� o dano igualmente.
	snap_dodge: false
}
