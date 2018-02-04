/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
+----------------------------------------------------------------------+
| - Arquivo de configuração de Clãs.                                   |
\*--------------------------------------------------------------------*/

guild_config: {
	// Quando um clã é criado, o Emperium é usado?
	guild_emperium_check: true

	// Limite da taxa de doação para um membro do clã.
	guild_exp_limit: 50

	// Máximo de castelos que um clã pode conquistar (0 = ilimitado)
	guild_max_castles: 0

	// Reiniciar o Delay das Skills quando relogar?
	// Quando "false", o tempo permanece inalterado.
	//Caso contrário, zera-se.
	guild_skill_relog_delay: false

	// Ajuse de danos de Guerra do Emperium contra guardiões
	castle_defense_rate: 100

	// Penalidade na Esquiva em mapas GvG.
	// O padrão oficial é 20
	// NOTA: A configuração é feita em porcentagem (%), então 20 = -20%
	//da esquiva total
	gvg_flee_penalty: 20

	// A habilidade 'Glória do Clã' pode ser aprendida, e para mudar de
	//emblema é precisa desta habilidade?
	// NOTA: Esta habilidade não é implementada em servidores oficiais.
	require_glory_guild: false

	// Limite de alianças de um clã.
	// O valor vai de 0 a 3.
	// Se você deseja modificar, execute uma limpeza na tabela
	//relacionada a alianças de clãs.
	// Padrão: 3
	max_guild_alliance: 3

	// Quando voltar a exibir o aviso do Clã.
	// Após teleportar (independentemente de mudar de mapa): 2 (oficial)
	// Após mudar de mapa: 1
	// Não voltar a exibir: 0 (desativado)
	guild_notice_changemap: 2

	// Membros podem realizar convites/expulsar outros membros dentro do
	//castelo nas Guerras?
	guild_castle_invite: false
	guild_castle_expulsion: false
}
