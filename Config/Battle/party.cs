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
| - Arquivo de configura��o de Grupo.                                  |
\*--------------------------------------------------------------------*/

party_config: {
	// Se algu�m roubar (habilidade furto/m�os leves),
	//exibir o nome no grupo?
	show_steal_in_same_party: false

	// Intervalo em milisegundos para atualizar a exibi��o dos membros
	//no mini-mapa
	party_update_interval: 1000

	// M�todo usado para atualizar a barra de hp do grupo:
	// 0: Aegis - a barra � atualizada toda vez que
	//o HP muda (banda intensiva)
	// 1: eAthena - a barra � atualizada juntamente com o mini-mapa
	// Acima de 0 especificar em segundos.
	party_hp_mode: 0

	//Ao mudar a lideran�a do grupo, o novo l�der deve estar no
	//mesmo mapa que o l�der atual?
	party_change_leader_same_map: true

	// Quando a divis�o do grupo para itens est� habilitada, 
	// anunciar quando um membro do grupo receber um item e o que
	//ele recebeu?
	show_party_share_picker: true

	// Que tipos de itens ser�o anunciados?
	// Fa�a a soma dos valores.
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

	// M�todo utilizado na distribui��o de itens, quando este for habilitado
	// para o grupo:
	// 0: Comum (o item vai aleatoriamente para os membros do grupo)
	// 1: A divis�o de itens � desabilitada para drops de n�o-monstros
	//(jogadores/drops de pet)
	// 2: Robin Hood (itens s�o distribuidos de maneira igualit�ria e entre
	// todos os membros)
	// 3: 1+2
	party_item_share_type: 0

	// A divis�o de exp/itens � desabilitada para membros "pregui�osos"
	//no grupo?
	// Defina para 0, ou a quantidade de segundos (N�O milissegundos)
	//para o personagem ser considerado ausente.
	// Personagens em chats/vendas s�o sempre considerados ausentes.
	// O personagem se torna ativo ao usar um item/habilidade/ataque.
	idle_no_share: 0

	// Conceder b�nus adicional de experi�ncia por membro no grupo
	// caso haja divis�o de experi�ncia?
	// Se definido para 10, a experi�ncia de um grupo de 5 pessoas ir�
	//receber +40% de exp.
	// 4 members * 10 exp = +40%
	party_even_share_bonus: 0

	// Exibir nome do grupo mesmo que o jogador n�o tenha um cl�.
	// Servidores oficiais n�o exibem nome do grupo ao menos que
	//o jogador possua um cl�.
	display_party_name: true
}
