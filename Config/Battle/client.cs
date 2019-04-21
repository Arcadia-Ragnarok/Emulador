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
| - Arquivo de configura��o de Client.                                 |
\*--------------------------------------------------------------------*/

client_config: {

	// Habilitar suporte a obfusca��o de pacotes.
	// Se ativado sem mudan�as necess�rias ir� bloquear a conex�o com
	//o cliente.
	// 0: desativado
	// 1: opcional
	// 2: habilitado
	packet_obfuscation: 1

	// Delay m�nimo entre mensagens whisper/global/grupo/cl� (em ms)
	// Mensagem que ultrapassam o delay ser�o omitidas.
	min_chat_delay: 0

	// n�mero de tinturas e estilos no client
	min_hair_style: 0
	max_hair_style: 29
	min_hair_color: 0
	max_hair_color: 8
	min_cloth_color: 0
	max_cloth_color: 4
	min_body_style: 0
	max_body_style: 4

	// Quando definido como yes, o campo de dano no envio de pacotes
	//para os mapas da gde ser�o definidos como -1, fazendo-se
	//imposs�vel para GMs, Bots e Hexeds saber qual dano causado
	//por ataques
	hide_woe_damage: true

	// n�mero "hair style" que identifica os pets.
	// NOTA: O client usa o campo "hair style" nos pacotes de
	//monstros para comunic�-los independentemente dos monstros.
	// Este valor � sempre maior que o max hair style dispon�vel
	//no client referido.
	// Valores que sabe-se que funcionam (todos de clients de 2005):
	// sakexes antigos: 20
	// sakexe 0614: 24
	// sakexe 0628 (e mais novos): 100
	pet_hair_style: 100

	// �rea vis�vel (quantos quadrados os jogadores podem ver
	//itens/monstros/npc/etc)
	area_size: 14

	// Qual � o alcance do chat de um jogador.
	// NOTA: Dist�ncia em que jogador A digita um texto no chat aberto
	//e os demais jogadores ver�o o que foi dito.
	chat_area_size: 9

	// �rea para onde os pacotes de morte de monstros devem ser enviados.
	// Isso deve ser ajustado para a maior dist�ncia que um jogador pode alcan�ar em 250ms depois que um monstro morrer.
	// Configur�-lo para (area_size + 18) (18 sendo o intervalo da habilidade Passo �tero do Monge) deve ser um �timo valor
	dead_area_size: 32

	// Caminho m�ximo a p� (quantas c�lulas que um jogador pode
	//andar de uma vez s�)
	// padr�o: 17 (oficial)
	max_walk_path: 17

	// N�vel m�ximo permitido a ser enviado para a unidade de pacotes.
	// Use juno da configura��o do aura_lv para enviar exatamente
	//quando a aura deve ser exibida.
	// NOTA: Voc� deve tamb�m configurar o client se quer que isto
	//funcione.
	// NOTA: O valor m�ximo � 150 (Padr�o oficial).
	// NOTA: Se voc� n�o sabe o que isto faz, n�o altere!!!
	max_lv: 99

	// N�vel exigido para exibir a aura.
	// NOTA: Isto assume que envia o max_lv para o client ent�o
	//exibir a aura.
	// NOTA: aura_lv n�o deve ser menor que o max_lv.
	aura_lv: 99

	// Tipos de unidades afetados por max_lv e aura_lv.
	// NOTA: Se um tipo de unidade If an unit type, que normalmente
	//n�o mostram uma aura, est� definido que vai obter uma aura
	//quando ele atende o requisito de n�vel.
	// Padr�o: 0 (nenhum)
	client_limit_unit_lv: 0

	// Exibir vestido de noiva e smoking ao us�-los?
	wedding_modifydisplay: false

	// N�o exibir cores para as roupas de casamento?
	// Nota: Ambos, save_clothcolor e wedding_modifydisplay,
	//t�m que estar habilitados para que esta op��o funcione.
	//Defina para 'true' se as paletas de cores n�o possuir as paletas
	// para roupas de Casamento (ou possui menos que de outras classes)
	wedding_ignorepalette: false

	// Salvar cores de roupa. (Isto ir� reduzir a performance)
	save_clothcolor: true

	// Salvar as altera��es de sprite do personagem?
	save_body_style: true

	// N�o exibir cores para as roupas de Natal?
	// Defina para 'true' se as paletas de cores n�o possuir as
	//paletas para roupas de Natal (ou possui menos que de outras classes)
	xmas_ignorepalette: false

	// N�o exibir cores para as roupas de Praia?
	// Defina para 'true' se as paletas de cores n�o possuir as
	//paletas para roupas de Praia (ou possui menos que de outras classes)
	summer_ignorepalette: false

	// N�o exibir cores de roupa para o traje Hanbok?
	// Defina esta op��o para 'true' se seu pacote de paletas de roupa n�o
	//tem paletas Hanbok (ou tem menos do que as outras classes)
	hanbok_ignorepalette: false

	// N�o exibir cores de roupa para o traje oktoberfest?
	// Defina esta op��o para 'true' se seu pacote de paletas de roupa n�o
	//tem paletas Hanbok (ou tem menos do que as outras classes)
	oktoberfest_ignorepalette: false

	// N�o exibir cores para as roupas de Praia da segunda vers�o?
	// Defina para 'true' se as paletas de cores n�o possuir as
	//paletas para roupas de Praia (ou possui menos que de outras classes)
	summer2_ignorepalette: false

	// Exibir vers�o do emulador quando o usu�rio conectar-se?
	display_version: false

	// Quando afetado pelo efeito "Hallucination", enviar o efeito ao client?
	// Nota: Defina como 'false' se o client sofre lag devido ao
	//efeito ondulat�rio na tela.
	display_hallucination: true

	// Exibir temporizador de habilidades?
	display_status_timers: true

	// Tornar aleat�rio o emoction /dice via servidor, previnindo manipula��o
	//do client para o n�mero desejado.
	client_reshuffle_dice: true

	// Organiza o armaz�m do jogador e do cl� antes de enviar para o cliente.
	// Servidores oficiais n�o organizam o armaz�m.
	// NOTA: Habilitando esta op��o a performance do servidor ser� reduzida!
	client_sort_storage: false

	// Dura��o de auto mute em minutos do cliente.
	// Nota: N�o habilitar isso, se voc� ativou os comandos para os jogadores,
	// Porque o cliente v� v�rios comandos em sucess�o como spam.
	// Padr�o: 0 (significa desativado)
	client_accept_chatdori: 0

	// Limita o uso de p�xeis transparentes nos emblemas de guild
	//atrav�s de uma porcentagem
	// O valor de 100 desativa essa checagem
	client_emblem_max_blank_percent: 100

	// Exibir recompensa de EXP ao derrotar MVP?
	mvp_exp_reward_message: false

	// Exibe o mesmo valor de HP que os servidores oficiais fazem quando
	//um personagem est� morto.
	// Em servidores oficiais, a HP nunca � exibida como 0,
	//mas quando morto, exibe o valor que ser� exibido ap�s a ressurrei��o
	// (50% HP para classes iniciantes, 1 HP para outras classes).
	// Em servidores como base no Athena, mostram o valor real
	//(0 quando morto), para evitar confus�o.
	display_fake_hp_when_dead: false

	// Habilitar loja de compras?
	buying_store: false

	// Habilitar pesquisa no armaz�m?
	search_stores: true

	// Habilitar o banco?
	banking: false

	// Habilitar sistema de leil�o?
	auction: false

	// Taxa por hora no sistema de leil�es. O padr�o � 12000
	auction_feeperhour: 12000

	// Pre�o m�ximo de venda nos leil�es
	auction_maximumprice: 500000000

	// Habilitar sistema de roleta?
	roulette: false

	//Habilitar sistema Mail RODEX?
	rodex: false

	// Permitir RODEX vinculado a account?
	// NOTA: Isso n�o � poss�vel utilizar na maioria dos clients
	rodex_use_accountmail: false

	// Enviar temporizador de ping
	// Para clients 20190320
	// Intervalo em segundos para invocar.
	ping_timer_inverval: 30

	// Tempo limite dos pacotes em segundos antes que o pacote de ping possa ser enviado.
	// Para clients 20190320
	ping_time: 20
}
