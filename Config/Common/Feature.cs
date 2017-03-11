/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/__/ /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|    Config File          \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                      Projeto Ragnarok Online                      |
+-------------------------------------------------------------------+
| - Descri��o: Configua��o para o Client                            |
+-------------------------------------------------------------------+
| - Nota: O valor � configurado por (true/false)                    |
\*-----------------------------------------------------------------*/

features: {
	// Loja de compras (Nota 1)
	// Necessita de 2010-04-27aRagexeRE ou mais novo
	buying_store: false

	// Search store (Nota 1)
	// Necessita de 2010-08-03aRagexeRE ou mais novo
	search_stores: true

	// Sugest�o no atcommand (Nota 1)
	// Se for digitado um atcommand incompleto, ir� ser sugerido o correto.
	atcommand_suggestions: false

	// Banco (Nota 1)
	// Necess�rio 2013-07-24aRagexe ou mais atualizado
	// Padr�o: off
	banking: false

	// Leil�o (Nota 1)
	// Se tornou inst�vel nos �ltimos Clientes 2012.
	// De qualquer maneira, nos clientes mais atualizados que 15-05-2013 tornou-se funcional novamente
	// Padr�o: off
	auction: false

	// Roleta (Note 1)
	// Requere: 2014-10-22bRagexe ou mais atual
	// Desativado por padr�o. Em fase de testes, habilite por sua conta e risco!
	roulette: false
}
