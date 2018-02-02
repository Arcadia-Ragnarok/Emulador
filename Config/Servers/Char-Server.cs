/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
|----------------------------------------------------------------------|
| - Descrição: Configuação para char-Serve                             |
\*--------------------------------------------------------------------*/

char_configuration: {
	@include "Config/System/Console.cs"
	@include "Config/Connect/Connections.cs"

	// Nome do servidor, use caracteres alternativos como ASCII 160 para espaços.
	// NOTA: Não use espaços ou qualquer um destes caracteres que não são permitidos em
	// Nomes de arquivos do Windows \ /: *? "<> |
	// ... ou então os emblemas da guilda não funcionarão do lado do cliente!
	server_name: "Arcadia"

	// Wisp nome para servidor: usado para enviar wisp do servidor para os jogadores (entre 4 a 23 caracteres)
	wisp_server_name: "Emulador Arcadia"

	// -----------------------------------------------------------------
	// - Configuração de permissão de acesso
	// -----------------------------------------------------------------
	permission: {
		// Ativar ou desativar a criação de novos caracteres.
		enable_char_creation: true

		// Exibir (New) na lista de servidores.
		display_new: false

		// Máximo de usuários capazes de se conectar ao servidor.
		// Definir como 0 para desativar os usuários para log-in. (-1 significa ilimitado)
		max_connect_user: -1

		// ID de grupo que tem permissão para ignorar o limite de servidores de usuários.
		// Default: -1 = todos (não há grupos com ID <0)
		gm_allow_group: -1

		// Tipo de servidor.
		// Sem efeitos colaterais funcionais no momento.
		// Exibido ao lado do nome do servidor no cliente.
		// 0 = normal, 1 = manutenção, 2 = acima de 18
		server_type: 0

		// ID de grupo mínimo para ingressar no servidor char quando ele estiver no char_server_type 1 (manutenção)
		maintenance_min_group_id: 99
	}

	// -----------------------------------------------------------------
	// - Configuração para jogadores
	// -----------------------------------------------------------------
	player: {
		new: {
			// Ponto inicial
			start_point: {
				map: "new_1-1"
				x: 55
				y: 110
			}
			// Itens iniciais
			start_items: (
				{
					id: 1201
					amount: 1
					loc: 2
					stackable: false
				},
				{
					id: 2301
					amount: 1
					loc: 16
					stackable: false
				},
			)
			// Zeny inicial
			zeny: 0
		}

		// -----------------------------------------------------------
		// Configuração do nome dos personagens
		name: {
			// Nome usado para pesonagens desconhecidos
			unknown_char_name: "Unknown"

			// Permitir ou não nome idêntico para caracteres mas com um caso diferente (superior / inferior):
			// exemplo: Test-test-TEST-TesT; Valor: 0 não permitido (padrão), 1 permitido
			name_ignoring_case: false

			// Gerenciar possíveis letras / símbolo no nome do charater. O caractere de controle (0x00-0x1f) nunca é aceito. Os valores possíveis são:
			// NOTA: Aplica-se a nomes de personagens, partidos e guildas.
			// 0: nenhuma restrição (padrão)
			// 1: apenas letras / símbolos na opção 'name_letters'.
			// 2: As letras / símbolos na opção 'name_letters' são proibidas. Todos os outros são possíveis.
			name_option: 1

			// Defina as letras / símbolos que você deseja usar com a opção 'nome_do_caracteres'.
			// Nota: Antes de modificar esses caracteres leia a respeito de injeção SQL.
			// Em ferramentas de uso conhecidas como CP-Painel típicas de ragnarok pode abrir brechas
			// na segurança do servidor.
			// Mais informações: https://pt.wikipedia.org/wiki/Injeção_de_SQL
			name_letters: "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890$%¨&*-+._-^~"
		}

		// -----------------------------------------------------------
		// Configuração para apagar personagens
		deletion: {
			// Restringir a exclusão de caracteres por BaseLevel
			// 0: nenhuma restrição (os jogadores podem excluir caracteres de qualquer nível)
			// -X: você não pode excluir caracteres com BaseLevel <= X
			// Y: você não pode excluir caracteres com BaseLevel> = Y
			// por exemplo. Char_del_level: 80 (os jogadores não podem excluir caracteres com 80 + BaseLevel)
			level: 0

			// Quantidade de tempo em segundos pelo qual a exclusão do caractere está atrasada.
			// Padrão: 86400 (24 horas)
			// NOTA: requer o cliente 2010-08-03aragexeRE ou mais recente.
			delay: 86400

			// Bloqueia a exclusão se o personagem estiver dentro de uma guild ou de uma festa? (BOOL)
			// official: true
			// Esta verificação é imposta pela Aegis para evitar entradas mortas nos bancos de dados e _is_not_needed_ como nós limpar dados corretamente!
			use_aegis_delete: false
		}
		// Tamanho para as listas de Fama
		fame: {
			alchemist: 10
			blacksmith: 10
			taekwon: 10
		}
	}

	database: {
		// Quantas vezes o servidor deve salvar todas as informações relacionadas à guilda?
		// (O intervalo de gravação de caracteres é definido na configuração do mapa, em segundos)
		autosave_time: 60

		// Salvar log para o servidor de personagens?
		log_char: true
	}

	// -----------------------------------------------------------------
	// - Configuração para uso do sistema de Pincode
	// -----------------------------------------------------------------
	pincode: {
		// Uma janela é aberta antes que você possa selecionar seu personagem e você terá que inserir um código PIN usando apenas o mouse
		// NOTA: Requer cliente 2011-03-09aragexeRE ou mais recente.
		enabled: false

		// Solicitar o Pincode apenas no login ou em cada toda vez na seleção de personagens?
		// 0: Somente no login (Padrão)
		// 1: Para cada vez que selecionar personagem
		request: 0

		// Quantas vezes um usuário tem que mudar seu código PIN?
		// Padrão: 0
		// 0: nunca
		// X: a cada X minutos
		change_time: 0

		// Com que freqüência um usuário pode digitar a senha errada?
		// Padrão: 3
		// Máximo permitido pelo lado do cliente: 3
		max_tries: 3
	}

}
