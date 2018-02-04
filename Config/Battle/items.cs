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
| - Arquivo de configuração de Itens.                                  |
\*--------------------------------------------------------------------*/

item_config: {
	// O valor máximo que um item pode ser vendido pela habilidade
	//Comércio.
	vending_max_value: 1000000000

	// Permitir a compra em lojas onde os personagens estão no limite
	//máximo de zenys.
	// Se definido yes, o valor recebido acima da capacidade de zeny do
	//personagem não será somada ao zeny atual.
	vending_over_max: false

	// Taxa aplicada a todas as transações de vendas
	//(ex: 10000 = 100%, 50 = 0.50%)
	// Quando a taxa é aplicada, o preço total do item é
	//cobrado do comprador, porém o vendedor não ganhará todo o valor
	//pago (ele ganhará: 100% - vending_tax).
	vending_tax: 200

	// Exibir o nome do comprador quando uma venda for realizada?
	buyer_name: true

	// Taxa de sucesso no processo de forjamento.
	weapon_produce_rate: 100

	// Taxa de sucesso no preparo de poções.
	potion_produce_rate: 100

	// Itens produzidos devem ter o nome de seus criadores neles?
	// 0x01: Armas produzidas
	// 0x02: Poções produzidas
	// 0x04: Flechas produzidas
	// 0x08: Água Benta/Ancilla produzidas
	// 0x10: Garrafa de Veneno produzidas
	// 0x80: Outros itens produzidos
	produce_item_name_input: 0x90

	// Um monstro invocado pelo Galho Seco será agressivo?
	dead_branch_active: true

	// Os monstros invocados de galhos secos devem checar o nível
	//de base do jogador?
	// Em servidores oficiais a configuração é no - monstros
	//invocados de galhos secos/sangrentos podem ser de QUALQUER nível.
	// Modifique para 'yes' para somente monstros invocados terem o
	//nível de base menor ou igual dos jogadores que o invocarem.
	random_monster_checklv: false

	// Um jogador pode equipar um item independente das
	//restrições de sexo?
	// NOTA: Anel de Casamento e Chicotes/Instrumentos Musicais serão
	//verificados independente desta configuração.
	ignore_items_gender: true

	// Checagem de item?
	// Na mudança de mapa itens não definidos como "disponível" serão
	// automaticamente deletados do inventário/carrinho.
	// NOTA: Um item não é disponível caso não seja carregado da
	//item_db.
	item_check: false

	// Qual o intervalo de uso de itens?
	// Apenas afeta o delay no uso de itens, prevenindo abuso no uso de
	//itens de cura.
	//Recomendado ~500 ms
	// Em servidores oficiais é configurado para 0, mas foi configurado
	//para 100ms como medida contra bots/macros.
	item_use_interval: 100

	// Nível necessário em bNoMagicDamage para bloquear a mudança nos
	//status (Carta Besouro-Ladrão Dourado).
	// Por exemplo, se fixado em 50, o item pode dar bNoMagicDamage,40;
	// que reduz o dano mágico em 40%, mas não bloqueia mudanças nos status.
	gtb_sc_immunity: 100

	// Permitir efeitos de cartas 'autospell' acumulem?
	// NOTA: Diferentes cartas que concedem a mesma habilidade, irão
	//sempre trabalhar de forma independente uma da outra, independente
	//de configuração.
	autospell_stacking: false

	// Desativar os itens consumíveis desativados em map_zone de serem
	//consumidos quando tentar utilizá-los?
	item_restricted_consumption_type: true

	// Permitir a todos os NPCs mudar os equipamentos durante a interação?
	// Comandos de script 'enable_items/disable_items' não serão ignorados.
	item_enabled_npc: true

	// Desequipar os equipamentos nos mapas definidos em map_zone?
	// 0 : equipamentos e cartas bloqueados são desconsiderados (oficial)
	// 1 : equipamentos bloqueados são desequipados e cartas bloqueadas
	//são desconsideradas
	// 2 : equipamentos bloqueados são desconsiderados, cartas bloquedas
	//causam o desequipamento do item
	// 3 : equipamentos bloqueados são desequipados e cartas bloqueadas
	//causam o desequipamento do item (1+2)
	unequip_restricted_equipment: 3

	// Quando não há um arco com flechas equipadas, também não usa a flecha?
	bow_unequip_arrow: true

	// Quanto as montarias de aluguel podem aumentar a velocidade de
	//movimento de um jogador?
	// Oficial é 25 (Padrão)
	boarding_halter_speed: 25
}