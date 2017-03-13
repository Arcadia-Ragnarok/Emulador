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
| - Descri��o: Configua��o para Login-Serve                            |
\*--------------------------------------------------------------------*/

login_configuration: {
	@include "Config/System/Console.cs"
	@include "Config/Connect/Connections.cs"

	log: {
		// Para registrar o servidor de login?
		// NOTA: O servidor de login-sql precisa dos logs de login para ativar as restri��es de falha de passagem din�mica.
		log_login: false

		// Indicar como exibir a data nos logs, nos jogadores, etc.
		date_format: "%Y-%m-%d %H:%M:%S"
	}

	// Configura��o de conta
	account: {
		// Voc� pode usar _M / _F para criar novas contas no servidor?
		new_account: true

		// Se new_account estiver ativada, o comprimento m�nimo para userid e senhas deve ser 4?
		// Deve ser 'true' a menos que seu cliente use 'Disable 4 LetterUserID / Password' Diffs
		new_acc_length_limit: true

		// Sistema de prote��o contra inunda��es de registro de conta
		// allowed_regs � o n�mero de registros permitidos em time_allowed (em segundos)
		allowed_regs: 1
		time_allowed: 10

		// Come�ando um segundo adicional a partir de agora pelo tempo limitado na cria��o da conta
		// -1: nova conta � criada com tempo ilimitado (valor padr�o)
		// 0 ou mais: novas contas foram criadas por adi��o do valor (em segundos) ao tempo real (para definir o primeiro tempo limitado)
		start_limited_time: -1

		// Armazena senhas como MD5 hashes em vez de texto sem formata��o?
		// Observa��o: n�o funcionar� com clientes que usam <passwordencrypt>
		use_MD5_passwords: false

		// Configura��o de armazenamento do mecanismo de dados da conta
		@include "Config/Connect/Connections.cs"

		//==================================================================
		// IP banning system
		//==================================================================
		ipban: {
			enabled: true

			// Intervalo (em segundos) para limpar proibi��es de IP expiradas. 0 = desativado. Padr�o = 60.
			// OBSERVA��O: Mesmo que isso esteja desativado, as proibi��es de IP expiradas ser�o limpas no in�cio / t�rmino do servidor de login.
			// Os jogadores ainda poder�o iniciar sess�o se existir uma entrada ipban mas o tempo de expira��o j� tiver passado.
			cleanup_interval: 60

			// Configura��es de conex�o SQL
			@include "Config/Connect/Connections.cs"

			// Sistema de ipban de falha de senha din�mica
			dynamic_pass_failure: {
				enabled: true

				// Intervalo em minutos entre tentativas falhadas
				// Somente as tentativas falhadas entre este intervalo ser�o contabilizadas ao
				ban_interval: 5

				// Quantas falhas antes de adicionar uma entrada de proibi��o tempor�ria?
				ban_limit: 7

				// Dura��o da proibi��o em minutos
				ban_duration: 5
			}
		}
	}

	permission: {
		// ID do grupo de contas necess�rio para se conectar ao servidor.
		// -1: disabled
		// 0 ou mais: id do grupo
		group_id_to_connect: -1

		// ID do grupo de contas m�nimo necess�rio para se conectar ao servidor.
		// N�o funcionar� se a configura��o group_id_to_connect estiver habilitada.
		// -1: disabled
		// 0 ou mais: id do grupo
		min_group_id_to_connect: -1

		// Verificar A vers�o do cliente definida no clientinfo?
		check_client_version: false

		// Que vers�o permitir�amos para conectar? (Se check_client_version estiver ativada)
		client_version_to_connect: 20

		// Sistema de verifica��o de hash do cliente
		hash: {
			// Verifica��o de hash do cliente MD5
			// Se ativado, o servidor de login verificar� se o hash do cliente corresponde
			// o valor abaixo, e n�o conectar� clientes adulterados.
			enabled: false

			// Client hashes MD5
			// O cliente com o hash especificado pode ser utilizado para iniciar sess�o com
			// um id_grupo igual ou maior que o valor especificado.
			// Se voc� especificar 'disabled' como hash, os jogadores com um group_id maior ou
			// igual ao valor especificado ser� capaz de fazer logon independentemente de hash (e at� mesmo
			// se seu cliente n�o envia um hash.)
			MD5_hashes: (
			//{
			//	group_id: group id
			//	hash: client hash
			//},
			//{
			//	group_id: 0
			//	hash: "113e195e6c051bb1cfb12a644bb084c5"
			//},
			//{
			//	group_id: 10
			//	hash: "cb1ea78023d337c38e8ba5124e2338ae"
			//},
			//{
			//	group_id: 99
			//	hash: "disabled"
			//},
			)
		}

		DNS_blacklist: {
			// Bloqueio de lista negra DNS
			// Se ativado, cada conex�o de entrada ser� testada em rela��o �s listas negras
			// no dnsbl_servers especificado
			enabled: false

			dnsbl_servers: (
				// Aqui est�o alguns servi�os gratuitos da lista negra do DNS: http://en.wikipedia.org/wiki/Comparison_of_DNS_blacklists
				"Bl.blocklist.de", // Endere�os IP que atacam outros servidores / honeypots atrav�s de SSH, FTP, IMAP, etc.
				//"ircbl.ahbl.org ", // AHBL (proxies abertos, m�quinas comprometidas, spammers de coment�rio)
				//"safe.dnsbl.sorbs.net ", // Todas as zonas em dnsbl.sorbs.net exceto" recentes "e" escalations "
				//"sbl-xbl.spamhaus.org ", // Lista negra de Spamhaus (spammers, proxies abertos)
				"Socks.dnsbl.sorbs.net", // Abrir servidores proxy SOCKS
				//"tor.ahbl.org ", // Rel� de corrente e n�s de sa�da
			)
		}
	}
}