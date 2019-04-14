/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
|----------------------------------------------------------------------|
| - Descri��o: Configua��o para Conex�o                                |
| * Configure aqui os endere�os de IP/Login e senha de acesso.         |
\*--------------------------------------------------------------------*/

// ---------------------------------------------------------------------
// - Conex�o com os bancos de dados SQL
// ---------------------------------------------------------------------
sql_connection: {
	// Se o codifica��o do banco de dados n�o for a mesma definida pelos
	//arquivos SQL do emulador.
	// Qual � a codifica��o dos bancos de dados?
	// NOTA: Desabilitado por padr�o.
	//codepage: "" // Especifique a codifica��o

	// ----------------------------------------------------------------
	// - Conex�o com o Banco de dados do emulador.
	// Usado para armazenamento de todos os dados em geral.

	// Ip do banco de dados no servidor SQL onde est�o armazenas as
	//tabelas do servidor
	db_hostname: "127.0.0.1"

	// Porta de acesso ao servidor SQL
	db_port: 3306

	// Login do usu�rio SQL que tem permiss�o de acessar o banco de
	//dados.
	// NOTA: Esse usu�rio deve possuir privil�gios globais para 
	// INSERT, UPDATE, SELECT e DELETE
	db_username: "arcadiasqluser"

	// Senha do usu�rio SQL usado em 'db_username' que tem permiss�o
	//total de acesso ao banco de dados
	db_password: "arcadiasqluserpass"

	// Nome do Banco de dados onde est�o armazenadas as tabelas do
	//servidor
	db_database: "arcadia"

	// ----------------------------------------------------------------
	// - Conex�o com o Banco de dados de LOG.
	// Usado para armazenamento de de logs corriqueiros.
	// Ip do banco de dados no servidor SQL onde est�o armazenas

	// Ip do banco de dados no servidor SQL onde est�o armazenas
	//as tabelas de logs
	log_hostname: "127.0.0.1"

	// Porta de acesso ao servidor SQL
	log_port: 3306

	// Login do usu�rio SQL que tem permiss�o de acessar o banco de
	//dados.
	// NOTA: Esse usu�rio deve possuir privil�gios globais para 
	//INSERT, UPDATE, SELECT e DELETE
	log_username: "arcadiasqluser"

	// Senha do usu�rio usado em 'log_db_username' que tem permiss�o
	//de acessar o banco de dados
	log_password: "arcadiasqluserpass"

	// Nome do Banco de dados onde est�o armazenadas as tabelas do
	//de armazenamento de LOGS
	log_database: "arcadia_logs"
}

// ---------------------------------------------------------------------
// - Conex�o de Comunica��o
// ---------------------------------------------------------------------
// Essas configura��es permitem que o char-serve, map-serve e 
//login-serve consigam se comunicar entre s�.
// E aceitem conex�es de usu�rios.
// ---------------------------------------------------------------------
inter_connection: {
	userid: "arcadiauser" // Login da conta principal usada para fazer comunica��o entre os servidores (Jamais loge nessa conta!)
	passwd: "arcadiapass" // Senha da conta usada em 'userid' para fazer comunica��o entre os servidores

	login_ip: "127.0.0.1" // Ip do servidor de Login-Serve *NOTA: Esse IP deve ser usado no arquivo ClientInfo.XML do client
	login_port: 6900      // Porta de acesso ao Login-Serve

	char_ip: "127.0.0.1"  // Ip do servidor do Char-Serve (127.0.0.1 para servidor local)
	char_port: 6121       // Porta de acesso ao Char-Serve

	map_ip: "127.0.0.1"   // Ip do servidor do Map-Serve (127.0.0.1 para servidor local)
	map_port: 5121        // Porta de acesso ao Map-Serve

	// Quando o emulador estiver compartilhando o IP com outro emulador
	//para serem executados juntos...
	// Qual o endere�o de IP que ambos usam?
	// NOTA: Isso desabilita as configura��es de IP convencionais
	//bind_ip: "" // Especifique o IP

	// Qual � o intervalo em minutos para executar a atualiza��o de DNS?
	// NOTA: Isso poder� almentar consideravelmente as chances do
	//servidor sofrer queda, mas reduzirar um pouco o LAG em caso de IP
	//din�mico. (Desabilitado para melhor performace)
	//ip_sync_interval: 10
}
