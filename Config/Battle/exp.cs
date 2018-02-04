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
| - Arquivo de configuração de EXP.                                    |
\*--------------------------------------------------------------------*/

exp_config: {
	// Taxa de experiência ganha em base.
	// NOTA: Valor máximo aceito é de 1000
	base_exp_rate: 1000

	// Taxa de experiência ganha em classe.
	// NOTA: Valor máximo aceito é de 1000
	job_exp_rate: 1000

	// Defina para yes se deseja habilitar um jogador a ganhar mais de
	//um nível quando ganhar mais que 100% da experiência necessária.
	multi_level_up: true

	// Configurando isto pode restringir o máximo de experiência que
	//pode ser ganha pela morte específica de um monstro na % da barra
	//de experiência atual. (Cada 10 = 1.0%)
	// Por exemplo, defina para 500 e não importa o quanto de experiência
	//um monstro garante, ele nunca dará mais da metade da barra de
	//experiência atual.
	max_exp_gain_rate: 0

	// Método do cálculo de experiência ganha quando se mata um monstro:
	// 0 = dano causado / dano total como dano proporcional
	// 1 = dano causado / max_hp como dano proporcional
	// NOTA: Usando o tipo 1 desabilita o bônus onde o primeiro
	//atacante recebe sua experiência compartilhada dobrada quando
	//várias pessoas atacam um monstro.
	exp_calc_type: 0

	// Experiência aumentada por atacante. 
	// Isto é, cada atacante adicional para o monstro faz ele dar
	//mais experiência.
	// (ex: 5 atacantes com 25 na configuração, +(25*4)% -> +100% exp)
	exp_bonus_attacker: 25

	// Máximo de atacantes para tornar o bônus de experiência limitado
	// (ex: se definido como 5, o bônus máximo é 4*bônus-por-personagem
	//independente de quem atacar)
	exp_bonus_max_attacker: 12

	// Taxa de experiência bônus em MVPs.
	// NOTA: Valor máximo aceito é de 1000
	mvp_exp_rate: 1000

	// Taxa de experiência em base/classe ganha por NPCs.
	// NOTA: Valor máximo aceito é de 1000
	quest_exp_rate: 1000

	// A taxa de experiência dada pelo uso da habilidade Curar 
	//100 é o mesmo que a quantidade de cura, 200 é o dobro.
	// O balanceamento da taxa de experiência é melhor quando
	//usado de 5 até 10)
	heal_exp: 0

	// A taxa de experiência ganha no processo de ressucitação,
	//a unidade é 0.01%.
	// O cálculo de experiência para para o valor * diferença de nível
	//da pessoa revivida / 100 * resurrection_exp/10000 que o jogador
	//revivido ganha.
	resurrection_exp: 0

	// A Taxa de experiência em classe ganha quando usado Desconto e
	//Superfaturar em um NPC
	// (em incrementos de 0.01% - 100 é 1%, 10000 é normal,
	//20000 é o dobro.)
	// A fórmula do cálculo é (dinheiro recebido * nv da
	//habilidade) * shop_exp / 10000.
	shop_exp: 0

	// Os jogadores ganham experiência em mapas PvP?
	// (Nota: experiência NÃO matando jogadores, mas através de monstros etc)
	pvp_exp: true

	// Quando um jogador morre, como ele deve ser penalizado?
	// 0 = Sem penalidade.
	// 1 = Perder % da experiência do nível atual quando morto.
	// 2 = Perder % de toda a experiência quando morto.
	death_penalty_type: 2

	// Taxa de penalidade de experiência em base
	//(Cada 100 é 1% da exp)
	death_penalty_base: 500

	// Taxa de penalidade de experiência em classe
	//(Cada 100 é 1% da exp)
	death_penalty_job: 500

	// Quando o jogador morre, qual a penalidade em zeny
	//deve ser aplicada?
	// NOTA: É a porcentagem do zeny do jogador, então 100 = 1%
	zeny_penalty: 0

	// Exibir a experiência ganha ao matar um monstro.
	disp_experience: false

	// Exibir a quantia de zeny ganho
	//(em monstros, negociações, etc)
	disp_zeny: false

	// Usar o conteúdo da statpoint quando os stats são
	//resetados ou ganha-se um nível?
	// Caso não, uma equação será usada que preservará
	//os pontos de atributos ganhos/perdidos através de meios
	//externos (ex.: compradores/vendedores de pontos de atributos)
	use_statpoint_table: true
}
