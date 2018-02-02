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
| - Descrição: Configuação para Conexão                                |
| * Configure aqui os endereços de IP/Login e senha de acesso.         |
\*--------------------------------------------------------------------*/

// ---------------------------------------------------------------------
// - Conexão com os bancos de dados SQL
// ---------------------------------------------------------------------
sql_connection: {
	// Se o codificação do banco de dados não for a mesma definida pelos
	//arquivos SQL do emulador.
	// Qual é a codificação dos bancos de dados?
	// NOTA: Desabilitado por padrão.
	//codepage: "" // Especifique a codificação

	// O emulador deve interpretar letras maiúsculas de minúsculas no
	//banco de dados?
	// NOTA: Isso interfirá drasticamente nos registros na coluna 
	//`userid` em login (Desabilitado por padrão)
	//case_sensitive: false

	// ----------------------------------------------------------------
	// - Conexão com o Banco de dados do emulador.
	// Usado para armazenamento de todos os dados em geral.

	// Ip do banco de dados no servidor SQL onde estão armazenas as
	//tabelas do servidor
	db_hostname: "127.0.0.1"

	// Porta de acesso ao servidor SQL
	db_port: 3306

	// Login do usuário SQL que tem permissão de acessar o banco de
	//dados.
	// NOTA: Esse usuário deve possuir privilégios globais para 
	// INSERT, UPDATE, SELECT e DELETE
	db_username: "arcadiasqluser"

	// Senha do usuário usado em 'db_username' SQL que tem permissão
	//de acessar o banco de dados
	db_password: "arcadiasqluserpass"

	// Nome do Banco de dados onde estão armazenadas as tabelas do
	//servidor
	db_database: "arcadia"

	// ----------------------------------------------------------------
	// - Conexão com o Banco de dados de LOG.
	// Usado para armazenamento de de logs corriqueiros.

	// Ip do banco de dados no servidor SQL onde estão armazenas
	//as tabelas de logs
	log_db_hostname: "127.0.0.1"

	// Porta de acesso ao servidor SQL
	log_db_port: 3306

	// Login do usuário SQL que tem permissão de acessar o banco de
	//dados.
	// NOTA: Esse usuário deve possuir privilégios globais para 
	//INSERT, UPDATE, SELECT e DELETE
	log_db_username: "arcadiasqluser"

	// Senha do usuário usado em 'log_db_username' que tem permissão
	//de acessar o banco de dados
	log_db_password: "arcadiasqluserpass"

	// Nome do Banco de dados onde estão armazenadas as tabelas do
	//de armazenamento de LOGS
	log_db_database: "arcadia_logs"
	
	// Nome da tabela para gerar logs do servidor de login
	log_login_db: "loginlog"

}

// ---------------------------------------------------------------------
// - Conexão de Comunicação
// ---------------------------------------------------------------------
// Essas configurações permitem que o char-serve, map-serve e 
//login-serve consigam se comunicar entre sí. E aceitem conexões de
//usuários.
// ---------------------------------------------------------------------
inter: {
	// Login da conta principal usada para fazer comunicação entre os
	//servidores (Jamais loge nessa conta!)
	userid: "arcadiauser"
	// Senha da conta usada em 'userid' para fazer comunicação entre os
	//servidores
	passwd: "arcadiapass"

	// Ip do servidor do Char-Serve (127.0.0.1 para servidor local)
	char_ip: "127.0.0.1"
	// Porta de acesso ao Char-Serve
	char_port: 6121

	// Ip do servidor do Map-Serve (127.0.0.1 para servidor local)
	map_ip: "127.0.0.1"
	// Porta de acesso ao Map-Serve
	map_port: 5121

	// Ip do servidor de Login-Serve
	//NOTA: Esse IP deve ser usado no arquivo ClientInfo.XML do client
	login_ip: "127.0.0.1"
	// Porta de acesso ao Login-Serve
	login_port: 6900

	// Qual é o intervalo em minutos para executar a atualização de DNS?
	// NOTA: Isso poderá almentar consideravelmente as chances do
	//servidor sofrer queda, mas reduzirar um pouco o LAG em caso de IP
	//dinâmico. (Desabilitado para melhor performace)
	//ip_sync_interval: 10

	// Quando o emulador estiver compartilhando o IP com outro emulador
	//para serem executados juntos...
	// Qual o endereço de IP que ambos usam?
	// NOTA: Isso desabilita as configurações de IP convencionais
	//bind_ip: "" // Especifique o IP
}
