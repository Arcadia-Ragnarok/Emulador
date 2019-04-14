/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
\*--------------------------------------------------------------------*/

socket_configuration: {
	// Por quanto tempo um soquete pode ser mantido antes da conex�o
	//ser interrompida (em segundos)
	stall_time: 60

	// Exibir relat�rio de depura��o (quando acontece algo errado
	//durante o relat�rio, o mesmo � salvo).
	debug: false

	// Linux / Epoll: Eventos m�ximos por ciclo
	// Valor padr�o:
	// (M�ximo de conex�es suportadas) / 2
	// NOTA: isso controla o m�ximo coletado socket-eventos por ciclo
	//(chamada para epoll_wait ())
	// Por exemplo, as configura��es para 32 permitir�o at� 32 eventos
	//(dados de entrada / novas conex�es
	// por ciclo de servidor.
	// NOTA: Configura��es recomendadas � pelo menos metade das
	//conex�es suportadas maxmimum
	// Ajusta este valor para um valor inferior, pode causar
	//atrasos / atrasos
	// Dependendo do tempo de CPU dispon�vel
	// OBSERVA��O: Esta configura��o est� dispon�vel apenas no
	//Linux quando construir usando EPoll como distribuidor de eventos!
	//
	//epoll_maxevents: 1024

	// Tamanho m�ximo permitido para pacotes de clientes em bytes.
	// 24576 (Clients < 20131223)
	// 65535 (Clients >= 20131223)
	// NOTA: Para reduzir o tamanho dos pacotes relatados,
	//diminua os valores de define, que
	// foram personalizados, como
	//MAX_STORAGE, MAX_GUILD_STORAGE ou MAX_CART.
	// Observa��o: N�o modifique esta configura��o, a menos
	//que o cliente tenha sido modificado para suporte
	// pacotes maiores. O cliente ir� falhar, quando
	//recebe pacotes maiores.
	//
	//socket_max_client_packet: 65535

	ip_rules: {
		// O IP deve ser checado na conex�o?.
		// Isso habilita a prote��o DDoS.
		enable: true

		// deny,allow     : Checa as regras de proibi��o e
		//ent�o as de permiss�o. Permite caso as regras n�o coincidam.
		// allow,deny     : Checa as regras de permiss�o e
		//ent�o as de proibi��o. Permite caso as regras n�o coincidam.
		// mutual-failure : Permite apenas se as regras de
		//permiss�o e de proibi��o concidirem.
		// (o padr�o � deny,allow)
		order: "deny,allow"

		// IP rules
		// allow: Aceita conex�es do intervalo ip
		//(mesmo se marcado como DDoS)
		// deny: Rejeita conex�es do intervalo ip
		// As regras s�o processadas em ordem, a primeira
		//regra de correspond�ncia de cada lista (permitir e negar) � usada
		allow_list: (
			//"127.0.0.1",
			//"192.168.0.0/16",
			//"10.0.0.0/255.0.0.0",
			//"all",
		)
		deny_list: (
			//"127.0.0.1",
		)
	}

	//---- Prote��o contra DDoS ----
	// Se a solicita��o de conex�o ddos.count for feita
	//dentro ddos.interval ms, ele assume que � um ataque DDoS
	ddos: {
		// Se a permiss�o de conex�o ddos_count � realizada
		//com o ddos_interval msec, isso configura um ataque DDoS
		// Intervalos de tentativas consecutivas (msec)
		// (o padr�o � 3000 msecs, 3 segundos)
		interval: 3000 //ddos_interval

		// Gatilho de tentativas consecutivas
		// (o padr�o � 5 tentativas)
		count: 5 //ddos_count

		// O intervalo de tempo em que as amea�as de ataque
		//DDoS n�o ser�o mais configuradas. (msec)
		// Ap�s esse tempo, as restri��es de DDoS s�o levantadas.
		// (o padr�o � 600000 msecs, 10 minutos)
		autoreset: 600000 //ddos_autoreset
	}
}
