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
| - Arquivo de configuração de loot de itens.                          |
\*--------------------------------------------------------------------*/

drops_config: {
	// Quando um item é dropado, o mesmo vai diretamente para o
	//inventário do jogador?
	item_auto_get: false

	// Quanto tempo em milissegundos leva para um item desaparecer do
	//chão quando é dropado?
	flooritem_lifetime: 60000

	// Tempo em milissegundos para que o personagem que causou mais
	//dano ao monstro pegue o item antes dos outros?
	item_first_get_time: 3000

	// Tempo para que os dois personagens que causaram mais dano ao
	//monstro peguem o item antes dos outros? (em milissegundos)
	// (Funciona após o tempo do item_first_get_time passar)
	item_second_get_time: 1000

	// Tempo para que os três personagens que causaram mais dano ao
	//monstro peguem o item antes dos outros? (em milissegundos)
	// (Funciona após o tempo do item_second_get_time passar)
	item_third_get_time: 1000

	// Tempo em milissegundos para que outros personagens possam
	//pegar os itens do MvP ao passo que o causador do maior dano não
	//conseguiu pegar?
	mvp_item_first_get_time: 10000

	// Tempo em milissegundos para que os dois personagens que causaram
	//mais dano ao MvP peguem o item antes dos outros?
	// (Funciona após o tempo do mvp_first_second_get_time passar)
	mvp_item_second_get_time: 10000

	// Tempo em milissegundos para que os três personagens que causaram
	//mais dano ao MvP peguem o item antes dos outros?
	// (Funciona após o tempo do mvp_item_second_get_time passar)
	mvp_item_third_get_time: 2000

	// A taxa cujo os itens comuns são dropados
	//(Itens localizados na aba ETC, exceto cartas)
	item_rate_common: 1000
	item_rate_common_boss: 1000
	item_drop_common_min: 1
	item_drop_common_max: 1000

	// A taxa cujo os itens de cura são dropados
	//(itens que recuperam HP ou SP)
	item_rate_heal: 1000
	item_rate_heal_boss: 1000
	item_drop_heal_min: 1
	item_drop_heal_max: 1000

	// A taxa cujo os itens usáveis diferentes dos itens de cura são dropados.
	//(na aba item)
	item_rate_use: 1000
	item_rate_use_boss: 1000
	item_drop_use_min: 1
	item_drop_use_max: 1000

	// A taxa cujo os equipamentos são dropados.
	item_rate_equip: 1000
	item_rate_equip_boss: 1000
	item_drop_equip_min: 1
	item_drop_equip_max: 1000

	// A taxa cujo as cartas são dropadas.
	item_rate_card: 1000
	item_rate_card_boss: 1000
	item_drop_card_min: 1
	item_drop_card_max: 1000

	// A taxa de ajuste para itens de MvP que vão diretamente para o
	//inventário de quem o matar
	item_rate_mvp: 1000
	item_drop_mvp_min: 1
	item_drop_mvp_max: 1000

	// A taxa de ajuste para itens ganhos por bônus dados por cartas.
	item_rate_adddrop: 1000
	item_drop_add_min: 1
	item_drop_add_max: 1000

	// A taxa de ajuste para os drops de Baú do Tesouro
	//(estes possuem prioridade sobre todos os outros modificadores)
	item_rate_treasure: 1000
	item_drop_treasure_min: 1
	item_drop_treasure_max: 1000

	// Utilizar drops logarítmicos?
	// Drops logarítmicos são escalas de drops não-lineares utilizando a equação
	// drop_rate(x,y) = x * (5 - log(x)) ^ (ln(y) / ln(5))
	// Onde x é a taxa de drop original e y é o modificador drop_rate
	//(variáveis item_rate* previamente mencionadas)
	// Use a tabela a seguir para ter uma ideia de como a taxa afetará as
	//taxas de drop quando drops logarítmicos são utilizados:
	// Y: Taxa de drop original
	// X: Taxa de drop modificadora (eg: item_rate_equip)
	//  X\Y | 0.01 0.02  0.05  0.10  0.20  0.50  1.00  2.00  5.00 10.00 20.00
	// -----+---------------------------------------------------------------
	//   50 | 0.01 0.01  0.03  0.06  0.11  0.30  0.62  1.30  3.49  7.42 15.92
	//  100 | 0.01 0.02  0.05  0.10  0.20  0.50  1.00  2.00  5.00 10.00 20.00
	//  200 | 0.02 0.04  0.09  0.18  0.35  0.84  1.61  3.07  7.16 13.48 25.13
	//  500 | 0.05 0.09  0.22  0.40  0.74  1.65  3.00  5.40 11.51 20.00 33.98
	// 1000 | 0.10 0.18  0.40  0.73  1.30  2.76  4.82  8.28 16.47 26.96 42.69
	// 2000 | 0.20 0.36  0.76  1.32  2.28  4.62  7.73 12.70 23.58 36.33 53.64
	// 5000 | 0.50 0.86  1.73  2.91  4.81  9.11 14.45 22.34 37.90 53.91 72.53
	//10000 | 1.00 1.67  3.25  5.28  8.44 15.24 23.19 34.26 54.57 72.67 91.13
	//20000 | 2.00 3.26  6.09  9.59 14.83 25.49 37.21 52.55 77.70 97.95  100%
	//50000 | 5.00 7.87 13.98 21.12 31.23 50.31 69.56 92.48  100%  100%  100%
	item_logarithmic_drops: false

	// A taxa de drops de monstros pode se tornar 0?
	// Padrão: no (padrão dos servidores oficiais).
	drop_rate0item: false

	// Habilitar o efeito da SOR/LUK no drop de itens em base absoluta.
	// Configurando para 100 significa que cada ponto de sorte adiciona em
	//0.01% na chance de dropar itens
	// (independente da taxa de drop de base de itens).
	drops_by_luk: 0

	// Habilitar o efeito da SOR/LUK no drop de itens em base relativa.
	// Configurando para 100 significa que cada ponto de sorte adiciona
	//em 1% na chance de dropar itens
	// (Então com 100 de sorte, todos os itens terão chance dobrada de
	//serem dropados).
	drops_by_luk2: 0

	// Invocações de alquimistas (Esfera Marinha e Planta Carnívora) dropam itens?
	// Esta configuração possui três valores:
	// 0: Nenhum dropa.
	// 1: Somente Esfera Marinha dropa itens.
	// 2: Todas as invocações de alquimistas dropam itens.
	alchemist_summon_reward: 1
}
