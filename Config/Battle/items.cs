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
| - Arquivo de configura��o de Itens.                                  |
\*--------------------------------------------------------------------*/

item_config: {
	// O valor m�ximo que um item pode ser vendido pela habilidade
	//Com�rcio.
	vending_max_value: 1000000000

	// Permitir a compra em lojas onde os personagens est�o no limite
	//m�ximo de zenys.
	// Se definido yes, o valor recebido acima da capacidade de zeny do
	//personagem n�o ser� somada ao zeny atual.
	vending_over_max: false

	// Taxa aplicada a todas as transa��es de vendas
	//(ex: 10000 = 100%, 50 = 0.50%)
	// Quando a taxa � aplicada, o pre�o total do item �
	//cobrado do comprador, por�m o vendedor n�o ganhar� todo o valor
	//pago (ele ganhar�: 100% - vending_tax).
	vending_tax: 200

	// Exibir o nome do comprador quando uma venda for realizada?
	buyer_name: true

	// Taxa de sucesso no processo de forjamento.
	weapon_produce_rate: 100

	// Taxa de sucesso no preparo de po��es.
	potion_produce_rate: 100

	// Itens produzidos devem ter o nome de seus criadores neles?
	// 0x01: Armas produzidas
	// 0x02: Po��es produzidas
	// 0x04: Flechas produzidas
	// 0x08: �gua Benta/Ancilla produzidas
	// 0x10: Garrafa de Veneno produzidas
	// 0x80: Outros itens produzidos
	produce_item_name_input: 0x90

	// Um monstro invocado pelo Galho Seco ser� agressivo?
	dead_branch_active: true

	// Os monstros invocados de galhos secos devem checar o n�vel
	//de base do jogador?
	// Em servidores oficiais a configura��o � no - monstros
	//invocados de galhos secos/sangrentos podem ser de QUALQUER n�vel.
	// Modifique para 'yes' para somente monstros invocados terem o
	//n�vel de base menor ou igual dos jogadores que o invocarem.
	random_monster_checklv: false

	// Um jogador pode equipar um item independente das
	//restri��es de sexo?
	// NOTA: Anel de Casamento e Chicotes/Instrumentos Musicais ser�o
	//verificados independente desta configura��o.
	ignore_items_gender: true

	// Checagem de item?
	// Na mudan�a de mapa itens n�o definidos como "dispon�vel" ser�o
	// automaticamente deletados do invent�rio/carrinho.
	// NOTA: Um item n�o � dispon�vel caso n�o seja carregado da
	//item_db.
	item_check: false

	// Qual o intervalo de uso de itens?
	// Apenas afeta o delay no uso de itens, prevenindo abuso no uso de
	//itens de cura.
	//Recomendado ~500 ms
	// Em servidores oficiais � configurado para 0, mas foi configurado
	//para 100ms como medida contra bots/macros.
	item_use_interval: 100

	// N�vel necess�rio em bNoMagicDamage para bloquear a mudan�a nos
	//status (Carta Besouro-Ladr�o Dourado).
	// Por exemplo, se fixado em 50, o item pode dar bNoMagicDamage,40;
	// que reduz o dano m�gico em 40%, mas n�o bloqueia mudan�as nos status.
	gtb_sc_immunity: 100

	// Permitir efeitos de cartas 'autospell' acumulem?
	// NOTA: Diferentes cartas que concedem a mesma habilidade, ir�o
	//sempre trabalhar de forma independente uma da outra, independente
	//de configura��o.
	autospell_stacking: false

	// Desativar os itens consum�veis desativados em map_zone de serem
	//consumidos quando tentar utiliz�-los?
	item_restricted_consumption_type: true

	// Permitir a todos os NPCs mudar os equipamentos durante a intera��o?
	// Comandos de script 'enable_items/disable_items' n�o ser�o ignorados.
	item_enabled_npc: true

	// Desequipar os equipamentos nos mapas definidos em map_zone?
	// 0 : equipamentos e cartas bloqueados s�o desconsiderados (oficial)
	// 1 : equipamentos bloqueados s�o desequipados e cartas bloqueadas
	//s�o desconsideradas
	// 2 : equipamentos bloqueados s�o desconsiderados, cartas bloquedas
	//causam o desequipamento do item
	// 3 : equipamentos bloqueados s�o desequipados e cartas bloqueadas
	//causam o desequipamento do item (1+2)
	unequip_restricted_equipment: 3

	// Quando n�o h� um arco com flechas equipadas, tamb�m n�o usa a flecha?
	bow_unequip_arrow: true

	// Quanto as montarias de aluguel podem aumentar a velocidade de
	//movimento de um jogador?
	// Oficial � 25 (Padr�o)
	boarding_halter_speed: 25
}