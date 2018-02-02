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
| - Descri��o: Configua��o para char-Serve                             |
\*--------------------------------------------------------------------*/

char_configuration: {
	@include "Config/System/Console.cs"
	@include "Config/Connect/Connections.cs"

	// Nome do servidor, use caracteres alternativos como ASCII 160 para espa�os.
	// NOTA: N�o use espa�os ou qualquer um destes caracteres que n�o s�o permitidos em
	// Nomes de arquivos do Windows \ /: *? "<> |
	// ... ou ent�o os emblemas da guilda n�o funcionar�o do lado do cliente!
	server_name: "Arcadia"

	// Wisp nome para servidor: usado para enviar wisp do servidor para os jogadores (entre 4 a 23 caracteres)
	wisp_server_name: "Emulador Arcadia"

	// -----------------------------------------------------------------
	// - Configura��o de permiss�o de acesso
	// -----------------------------------------------------------------
	permission: {
		// Ativar ou desativar a cria��o de novos caracteres.
		enable_char_creation: true

		// Exibir (New) na lista de servidores.
		display_new: false

		// M�ximo de usu�rios capazes de se conectar ao servidor.
		// Definir como 0 para desativar os usu�rios para log-in. (-1 significa ilimitado)
		max_connect_user: -1

		// ID de grupo que tem permiss�o para ignorar o limite de servidores de usu�rios.
		// Default: -1 = todos (n�o h� grupos com ID <0)
		gm_allow_group: -1

		// Tipo de servidor.
		// Sem efeitos colaterais funcionais no momento.
		// Exibido ao lado do nome do servidor no cliente.
		// 0 = normal, 1 = manuten��o, 2 = acima de 18
		server_type: 0

		// ID de grupo m�nimo para ingressar no servidor char quando ele estiver no char_server_type 1 (manuten��o)
		maintenance_min_group_id: 99
	}

	// -----------------------------------------------------------------
	// - Configura��o para jogadores
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
		// Configura��o do nome dos personagens
		name: {
			// Nome usado para pesonagens desconhecidos
			unknown_char_name: "Unknown"

			// Permitir ou n�o nome id�ntico para caracteres mas com um caso diferente (superior / inferior):
			// exemplo: Test-test-TEST-TesT; Valor: 0 n�o permitido (padr�o), 1 permitido
			name_ignoring_case: false

			// Gerenciar poss�veis letras / s�mbolo no nome do charater. O caractere de controle (0x00-0x1f) nunca � aceito. Os valores poss�veis s�o:
			// NOTA: Aplica-se a nomes de personagens, partidos e guildas.
			// 0: nenhuma restri��o (padr�o)
			// 1: apenas letras / s�mbolos na op��o 'name_letters'.
			// 2: As letras / s�mbolos na op��o 'name_letters' s�o proibidas. Todos os outros s�o poss�veis.
			name_option: 1

			// Defina as letras / s�mbolos que voc� deseja usar com a op��o 'nome_do_caracteres'.
			// Nota: Antes de modificar esses caracteres leia a respeito de inje��o SQL.
			// Em ferramentas de uso conhecidas como CP-Painel t�picas de ragnarok pode abrir brechas
			// na seguran�a do servidor.
			// Mais informa��es: https://pt.wikipedia.org/wiki/Inje��o_de_SQL
			name_letters: "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890$%�&*-+._-^~"
		}

		// -----------------------------------------------------------
		// Configura��o para apagar personagens
		deletion: {
			// Restringir a exclus�o de caracteres por BaseLevel
			// 0: nenhuma restri��o (os jogadores podem excluir caracteres de qualquer n�vel)
			// -X: voc� n�o pode excluir caracteres com BaseLevel <= X
			// Y: voc� n�o pode excluir caracteres com BaseLevel> = Y
			// por exemplo. Char_del_level: 80 (os jogadores n�o podem excluir caracteres com 80 + BaseLevel)
			level: 0

			// Quantidade de tempo em segundos pelo qual a exclus�o do caractere est� atrasada.
			// Padr�o: 86400 (24 horas)
			// NOTA: requer o cliente 2010-08-03aragexeRE ou mais recente.
			delay: 86400

			// Bloqueia a exclus�o se o personagem estiver dentro de uma guild ou de uma festa? (BOOL)
			// official: true
			// Esta verifica��o � imposta pela Aegis para evitar entradas mortas nos bancos de dados e _is_not_needed_ como n�s limpar dados corretamente!
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
		// Quantas vezes o servidor deve salvar todas as informa��es relacionadas � guilda?
		// (O intervalo de grava��o de caracteres � definido na configura��o do mapa, em segundos)
		autosave_time: 60

		// Salvar log para o servidor de personagens?
		log_char: true
	}

	// -----------------------------------------------------------------
	// - Configura��o para uso do sistema de Pincode
	// -----------------------------------------------------------------
	pincode: {
		// Uma janela � aberta antes que voc� possa selecionar seu personagem e voc� ter� que inserir um c�digo PIN usando apenas o mouse
		// NOTA: Requer cliente 2011-03-09aragexeRE ou mais recente.
		enabled: false

		// Solicitar o Pincode apenas no login ou em cada toda vez na sele��o de personagens?
		// 0: Somente no login (Padr�o)
		// 1: Para cada vez que selecionar personagem
		request: 0

		// Quantas vezes um usu�rio tem que mudar seu c�digo PIN?
		// Padr�o: 0
		// 0: nunca
		// X: a cada X minutos
		change_time: 0

		// Com que freq��ncia um usu�rio pode digitar a senha errada?
		// Padr�o: 3
		// M�ximo permitido pelo lado do cliente: 3
		max_tries: 3
	}

}
