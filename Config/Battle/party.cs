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
| - Arquivo de configuração de Grupo.                                  |
\*--------------------------------------------------------------------*/

party_config: {
	// Se alguém roubar (habilidade furto/mãos leves),
	//exibir o nome no grupo?
	show_steal_in_same_party: false

	// Intervalo em milisegundos para atualizar a exibição dos membros
	//no mini-mapa
	party_update_interval: 1000

	// Método usado para atualizar a barra de hp do grupo:
	// 0: Aegis - a barra é atualizada toda vez que
	//o HP muda (banda intensiva)
	// 1: eAthena - a barra é atualizada juntamente com o mini-mapa
	// Acima de 0 especificar em segundos.
	party_hp_mode: 0

	//Ao mudar a liderança do grupo, o novo líder deve estar no
	//mesmo mapa que o líder atual?
	party_change_leader_same_map: true

	// Quando a divisão do grupo para itens está habilitada, 
	// anunciar quando um membro do grupo receber um item e o que
	//ele recebeu?
	show_party_share_picker: true

	// Que tipos de itens serão anunciados?
	// Faça a soma dos valores.
	// 1: IT_HEALING
	// 2: IT_UNKNOWN,
	// 4: IT_USABLE
	// 8: IT_ETC,
	// 16: IT_WEAPON
	// 32: IT_ARMOR
	// 64: IT_CARD
	// 128: IT_PETEGG,
	// 256: IT_PETARMOR
	// 512: IT_UNKNOWN2
	// 1024: IT_AMMO
	// 2048: IT_DELAYCONSUME
	// 262144: IT_CASH
	show_picker_item_type: 112

	// Método utilizado na distribuição de itens, quando este for habilitado
	// para o grupo:
	// 0: Comum (o item vai aleatoriamente para os membros do grupo)
	// 1: A divisão de itens é desabilitada para drops de não-monstros
	//(jogadores/drops de pet)
	// 2: Robin Hood (itens são distribuidos de maneira igualitária e entre
	// todos os membros)
	// 3: 1+2
	party_item_share_type: 0

	// A divisão de exp/itens é desabilitada para membros "preguiçosos"
	//no grupo?
	// Defina para 0, ou a quantidade de segundos (NÃO milissegundos)
	//para o personagem ser considerado ausente.
	// Personagens em chats/vendas são sempre considerados ausentes.
	// O personagem se torna ativo ao usar um item/habilidade/ataque.
	idle_no_share: 0

	// Conceder bônus adicional de experiência por membro no grupo
	// caso haja divisão de experiência?
	// Se definido para 10, a experiência de um grupo de 5 pessoas irá
	//receber +40% de exp.
	// 4 members * 10 exp = +40%
	party_even_share_bonus: 0

	// Exibir nome do grupo mesmo que o jogador não tenha um clã.
	// Servidores oficiais não exibem nome do grupo ao menos que
	//o jogador possua um clã.
	display_party_name: true
}
