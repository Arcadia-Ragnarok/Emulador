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
| - Arquivo de configuração de Client.                                 |
\*--------------------------------------------------------------------*/

client_config: {
	// Habilitar suporte a obfuscação de pacotes.
	// Se ativado sem mudanças necessárias irá bloquear a conexão com
	//o cliente.
	// 0: desativado
	// 1: opcional
	// 2: habilitado
	packet_obfuscation: 1

	// Delay mínimo entre mensagens whisper/global/grupo/clã (em ms)
	// Mensagem que ultrapassam o delay serão omitidas.
	min_chat_delay: 0

	// número de tinturas e estilos no client
	min_hair_style: 0
	max_hair_style: 29
	min_hair_color: 0
	max_hair_color: 8
	min_cloth_color: 0
	max_cloth_color: 4
	min_body_style: 0
	max_body_style: 4

	// Quando definido como yes, o campo de dano no envio de pacotes
	//para os mapas da gde serão definidos como -1, fazendo-se
	//impossível para GMs, Bots e Hexeds saber qual dano causado
	//por ataques
	hide_woe_damage: true

	// número "hair style" que identifica os pets.
	// NOTA: O client usa o campo "hair style" nos pacotes de
	//monstros para comunicá-los independentemente dos monstros.
	// Este valor é sempre maior que o max hair style disponível
	//no client referido.
	// Valores que sabe-se que funcionam (todos de clients de 2005):
	// sakexes antigos: 20
	// sakexe 0614: 24
	// sakexe 0628 (e mais novos): 100
	pet_hair_style: 100

	// Área visível (quantos quadrados os jogadores podem ver
	//itens/monstros/npc/etc)
	area_size: 14

	// Qual é o alcance do chat de um jogador.
	// NOTA: Distância em que jogador A digita um texto no chat aberto
	//e os demais jogadores verão o que foi dito.
	chat_area_size: 9

	// Caminho máximo a pé (quantas células que um jogador pode
	//andar de uma vez só)
	// padrão: 17 (oficial)
	max_walk_path: 17

	// Nível máximo permitido a ser enviado para a unidade de pacotes.
	// Use juno da configuração do aura_lv para enviar exatamente
	//quando a aura deve ser exibida.
	// NOTA: Você deve também configurar o client se quer que isto
	//funcione.
	// NOTA: O valor máximo é 150 (Padrão oficial).
	// NOTA: Se você não sabe o que isto faz, não altere!!!
	max_lv: 150

	// Nível exigido para exibir a aura.
	// NOTA: Isto assume que envia o max_lv para o client então
	//exibir a aura.
	// NOTA: aura_lv não deve ser menor que o max_lv.
	aura_lv: 150

	// Tipos de unidades afetados por max_lv e aura_lv.
	// NOTA: Se um tipo de unidade If an unit type, que normalmente
	//não mostram uma aura, está definido que vai obter uma aura
	//quando ele atende o requisito de nível.
	// Padrão: 0 (nenhum)
	client_limit_unit_lv: 0

	// Exibir vestido de noiva e smoking ao usá-los?
	wedding_modifydisplay: false

	// Salvar cores de roupa. (Isto irá reduzir a performance)
	save_clothcolor: true

	// Salvar as alterações de sprite do personagem?
	// Note: Não ativar isso, a menos que você saiba o que está fazendo.
	save_body_style: false

	// Não exibir cores para as roupas de casamento?
	// Nota: Ambos, save_clothcolor e wedding_modifydisplay,
	//têm que estar habilitados para que esta opção funcione.
	//Defina para 'true' se as paletas de cores não possuir as paletas
	// para roupas de Casamento (ou possui menos que de outras classes)
	wedding_ignorepalette: true

	// Não exibir cores para as roupas de Natal?
	// Defina para 'true' se as paletas de cores não possuir as
	//paletas para roupas de Natal (ou possui menos que de outras classes)
	xmas_ignorepalette: true

	// Não exibir cores para as roupas de Praia?
	// Defina para 'true' se as paletas de cores não possuir as
	//paletas para roupas de Praia (ou possui menos que de outras classes)
	summer_ignorepalette: true

	// Não exibir cores para as roupas de Praia da segunda versão?
	// Defina para 'true' se as paletas de cores não possuir as
	//paletas para roupas de Praia (ou possui menos que de outras classes)
	summer2_ignorepalette: true

	// Não exibir cores de roupa para o traje Hanbok?
	// Defina esta opção para 'true' se seu pacote de paletas de roupa não
	//tem paletas Hanbok (ou tem menos do que as outras classes)
	hanbok_ignorepalette: true

	// Não exibir cores de roupa para o traje oktoberfest?
	// Defina esta opção para 'true' se seu pacote de paletas de roupa não
	//tem paletas Hanbok (ou tem menos do que as outras classes)
	oktoberfest_ignorepalette: true

	// Exibir versão do emulador quando o usuário conectar-se?
	display_version: false

	// Quando afetado pelo efeito "Hallucination", enviar o efeito ao client?
	// Nota: Defina como 'false' se o client sofre lag devido ao
	//efeito ondulatório na tela.
	display_hallucination: true

	// Exibir temporizador de habilidades?
	display_status_timers: true

	// Tornar aleatório o emoction /dice via servidor, previnindo manipulação
	//do client para o número desejado.
	client_reshuffle_dice: true

	// Organiza o armazém do jogador e do clã antes de enviar para o cliente.
	// Servidores oficiais não organizam o armazém.
	// NOTA: Habilitando esta opção a performance do servidor será reduzida!
	client_sort_storage: false

	// Duração de auto mute em minutos do cliente.
	// Nota: Não habilitar isso, se você ativou os comandos para os jogadores,
	// Porque o cliente vê vários comandos em sucessão como spam.
	// Padrão: 0 (significa desativado)
	client_accept_chatdori: 0

	// Limita o uso de píxeis transparentes nos emblemas de guild
	//através de uma porcentagem
	// O valor de 100 desativa essa checagem
	client_emblem_max_blank_percent: 100

	// Exibir recompensa de EXP ao derrotar MVP?
	mvp_exp_reward_message: false

	// Habilitar loja de compras?
	buying_store: false

	// Habilitar pesquisa no armazém?
	search_stores: true

	// Habilitar o banco?
	banking: false

	// Habilitar sistema de leilão?
	auction: false

	// Habilitar sistema de roleta?
	roulette: false

	//Habilitar sistema Mail RODEX?
	rodex: false

	// Permitir RODEX vinculado a account?
	// NOTA: Isso não é possível utilizar na maioria dos clients
	rodex_use_accountmail: false

	// Auto alimentar Homunculus?
	enable_homun_autofeed: false

	// Auto alimentar bichinhos de estimação?
	enable_pet_autofeed: false

	// Exibe o mesmo valor de HP que os servidores oficiais quando um personagem está morto.
	// Em servidores oficiais, a HP nunca é exibida como 0, mas quando morta, exibe o valor que será exibido após a ressurreição (50% HP para classes iniciantes, 1 HP para outras classes).
	// Servidores Athena, mostram o valor real (0 quando morto), para evitar confusão.
	// Note: Esta é apenas uma configuração visual, e o servidor tratará internamente como 0, independentemente disso.
	// Isso significa que os scripts saberão que o personagem tem 0 HP quando morto.
	display_fake_hp_when_dead: true
}
