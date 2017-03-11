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
| - Descri��o: Configua��o para Conex�o                                |
+----------------------------------------------------------------------+
| * Configure aqui os endere�os de IP/Login e senha de acesso.         |
\*--------------------------------------------------------------------*/

sql_connection: {
	//default_codepage: ""  // Voc� pode especificar a cofifica��o das tabelas mySQL aqui.
	//case_sensitive: false // O `userid` em account_db diferencia mai�sculas de min�sculas?

	db_hostname: "127.0.0.1"          // Ip do banco de dados no servidor MySql onde est�o armazenas as tabelas do servidor
	db_port: 3306                     // Porta de acesso ao servidor MySql
	db_username: "arcadiasqluser"     // Login do usu�rio MySql que tem permiss�o de acessar o banco de dados
	db_password: "arcadiasqluserpass" // Senha do usu�rio MySql que tem permiss�o de acessar o banco de dados
	db_database: "arcadia"            // Nome do Banco de dados onde est�o armazenadas as tabelas do servidor
	//codepage:""                     // Voc� pode especificar a cofifica��o expec�fica das tabelas aqui.

	log_db_hostname: "127.0.0.1"          // Ip do banco de dados no servidor MySql onde est�o armazenas as tabelas de logs
	log_db_port: 3306                     // Porta de acesso ao servidor MySql
	log_db_username: "arcadiasqluser"     // Login do usu�rio MySql que tem permiss�o de acessar o banco de dados
	log_db_password: "arcadiasqluserpass" // Senha do usu�rio MySql que tem permiss�o de acessar o banco de dados
	log_db_database: "arcadia_logs"       // Nome do Banco de dados onde est�o armazenadas as tabelas de logs
	log_login_db: "loginlog"              // Nome da tabela para gerar logs do servidor de login
}

inter: {
	userid: "arcadiauser" // Login da conta principal usada para fazer comunica��o entre os servidores (Jamais loge nessa conta!)
	passwd: "arcadiapass" // Senha da conta principal usada para fazer comunica��o entre os servidores

	char_ip: "127.0.0.1" // Ip do servidor do Char-Serve
	char_port: 6121      // Porta de acesso ao Char-Serve

	map_ip: "127.0.0.1" // Ip do servidor do Map-Serve
	map_port: 5121      // Porta de acesso ao Map-Serve

	login_ip: "127.0.0.1"  // Ip do servidor de Login-Serve
	login_port: 6900       // Porta de acesso ao Login-Serve

	//bind_ip: "127.0.0.1" // IP compartilhado por mais de 1 emulador
	//ip_sync_interval: 10 // Intervalo (em minutos) para executar uma atualiza��o DNS / IP. Desativado por padr�o.
}