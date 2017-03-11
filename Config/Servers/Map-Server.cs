/*--------------------------------------------------------------------*\
|              ______ ____ _____ ___   __                              |
|             / ____ / _  / ____/  /  /  /                             |
|             \___  /  __/ __/ /  /__/  /___                           |
|            /_____/__/ /____//_____/______/                           |
|                 /\  /|   __    __________ _________                  |
|                /  \/ |  /  |  /  ___  __/ ___/ _  /                  |
|               /      | / ' | _\  \ / / / __//  __/                   |
|              /  /\/| |/_/|_|/____//_/ /____/_/\ \                    |
|             /__/   |_|    Config File          \/                    |
|                                                                      |
+----------------------------------------------------------------------+
|                      Projeto Ragnarok Online                         |
+----------------------------------------------------------------------+
| - Descri��o: Configua��o para Map-Serve                              |
\*--------------------------------------------------------------------*/

map_configuration: {
	@include "Config/System/Console.cs"
	@include "Config/Connect/Connections.cs"

	// Listas de mapa
	@include "Config/Common/Maps.cs"

	// Quando @help ou @h � digitado quando voc� � um gm, isso � exibido para ajudar os novos gms a entender os comandos gm.
	help_txt: "Config/help.txt"
	charhelp_txt: "Config/charhelp.txt"

	// Ativar os comandos @guildspy e @partyspy em?
	// Note que habilit�-los diminui o desempenho de envio de pacotes.
	enable_spy: false

	// Leia dados de mapa de GATs e RSWs em arquivos GRF ou um diret�rio de dados
	// como referenciado por grf-files.txt em vez de partir do mapcache?
	use_grf: false

	// Informa��es relacionadas ao comportamento entre servidores
	database: {
		// Onde devem ser lidos todos os dados do banco de dados?
		db_path: "db"

		// Tempo de salvamento autom�tico da base de dados
		// Todos os caracteres s�o salvos neste tempo em segundos (exemplo:
		// autosave de 60 segundos com 60 caracteres on-line -> um char �
		// salvo a cada segundo)
		autosave_time: 300

		// Min banco de dados salvar intervalos (em ms)
		// Evita salvar caracteres mais r�pido do que a essa taxa (evita
		// char-server save-load ficando muito alto como character-count
		// aumenta)
		minsave_time: 100

		// Al�m do autosave_time, os jogadores tamb�m ser�o salvos
		// quando envolvido no seguinte (adicione conforme necess�rio):
		// 0x001: Ap�s cada troca bem-sucedida
		// 0x002: Ap�s cada transa��o de venda autom�tica
		// 0x004: Ap�s fechar armazenamento / guild armazenamento.
		// 0x008: Ap�s a eclos�o / retorno para ovo de um animal de estima��o.
		// 0x010: depois de enviar com �xito um email com anexo
		// 0x020: Ap�s enviar com �xito um item para leil�o
		// 0x040: Depois de obter / excluir / concluir com �xito uma miss�o
		// 0x080: ap�s cada transa��o de loja de compra
		// 0x100: Ap�s cada transa��o banc�ria (dep�sito / retirada)
		// NOTA: Essas configura��es diminuem a chance de dupes / itens perdidos
		// quando h� um crash do servidor � custa de aumentar o
		// map / char lag do servidor. Se o seu servidor raramente falhar, mas
		// experimenta o intervalo interserver, voc� pode querer ajust�-los fora.
		save_settings: 0x1ff
	}
}