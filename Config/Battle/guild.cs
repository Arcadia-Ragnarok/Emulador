/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
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

	// Como deve ser calculado o Delay nas habilidades de clã quando ao relogar?
	// 0 - O delay é zerado
	// 1 - Reinicia o delay para a completa duração.
	// 2 - Mesmo deslogado o tempo para uso continua sendo contado
	guild_skill_relog_delay: 2

	// Ajuse de danos de Guerra do Emperium contra guardiões
	castle_defense_rate: 100

	// Penalidade na Esquiva em mapas GvG.
	// O padrão oficial é 20
	// NOTA: A configuração é feita em porcentagem (%),
	//então 20 = -20% da esquiva total
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

	// Configurações do Chamado Urgente
	//(Se Necessário Some os valores Desejados).
	// Note que para que esta habilidade funcione, 
	// você precisa de pelo menos um de 1/2 e 4/8
	// 1: É possível usar a habilidade sem GdE.
	// 2: É possível usar a habilidade durante a GdE.
	// 4: É possível usar a habilidade fora de locais GvG
	// 8: É possível usar a habilidade em mapas GvG
	//16: Desabilitar habilidade em mapas com "nowarpto"
	// (irá funcionar em Castelos GvG mesmo se somado o valor 16 na
	//configuração)
	emergency_call: 11

	// Configurações da Aura do Clã
	//(Se Necessário Some os valores Desejados).
	// (Isto afeta GD_LEADERSHIP, GD_GLORYWOUNDS, GD_SOULCOLD
	//e GD_HAWKEYES)
	// Note que para que esta habilidade funcione, 
	// você precisa de pelo menos um de 1/2 e 4/8
	// 1: É possível usar a habilidade sem GdE.
	// 2: É possível usar a habilidade durante a GdE.
	// 4: É possível usar a habilidade fora de locais GvG
	// 8: É possível usar a habilidade em mapas GvG
	//16: Desabilitar o efeito sobre o Líder do Clã
	guild_aura: 31
}
