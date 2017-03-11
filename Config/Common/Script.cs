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
| - Descri��o: Configua��o para o Script                               |
\*--------------------------------------------------------------------*/

script_configuration: {
	// Especifica se um erro deve ou n�o ser emitido quando houver uma
	// incompatibilidade entre o n�mero de argumentos fornecidos
	// e os argumentos esperados
	// Padr�o:  true
	warn_func_mismatch_paramnum: true

	// Especifica se os argumentos de cada fun��o interna s�o verificados ou n�o para o tipo correto.
	// Quando uma fun��o recebe um argumento diferente do que espera,
	// um aviso � lan�ado antes que a fun��o seja executada de qualquer maneira.
	// Padr�o:  true
	warn_func_mismatch_argtypes: true

	// N�mero m�ximo de opera��es antes de considerar um conjunto de opera��es muito intensas
	// Padr�o � 655360
	check_cmdcount: 655360

	// N�mero m�ximo de itera��es antes de considerar um loop infinito
	// Padr�o � 2048
	check_gotocount: 2048

	// Valor padr�o para o argumento 'min' do comando de script 'input'.
	// Quando o argumento 'min' n�o for especificado, este valor ser� usado.
	// O padr�o � 0.
	//input_min_value: 0

	// Valor padr�o para o argumento 'max' do comando de script 'input'.
	// Quando o argumento 'max' n�o for especificado, este valor ser� usado.
	// O padr�o � INT_MAX.
	//input_max_value: 2147483647
	input_max_value: 10000000
}