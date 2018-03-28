/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
\*--------------------------------------------------------------------*/

map_configuration: {
	@include "Config/System/Console.cs"
	@include "Config/Connect/Connections.cs"

	// Listas de mapas
	@include "Config/Common/Maps.cs"

	// Quando @help ou @h � digitado quando voc� � um gm, isso � exibido para ajudar os novos gms a entender os comandos gm.
	help_txt: "Config/Help.txt"
	charhelp_txt: "Config/Char-Help.txt"

	// Ativar os comandos @guildspy e @partyspy em?
	// Note que habilit�-los diminui o desempenho de envio de pacotes.
	enable_spy: false

	database: {
		// Tempo de salvamento autom�tico da base de dados
		// Todos os caracteres s�o salvos neste tempo em segundos (exemplo:
		// autosave de 60 segundos com 60 caracteres on-line -> um char �
		// salvo a cada segundo)
		autosave_time: 300

		// Min banco de dados salvar intervalos (em ms)
		// Evita salvar caracteres mais r�pido do que a essa taxa (evita char-server save-load ficando muito alto como character-count aumenta)
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
