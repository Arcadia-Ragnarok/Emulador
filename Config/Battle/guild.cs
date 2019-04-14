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
| - Arquivo de configura��o de Cl�s.                                   |
\*--------------------------------------------------------------------*/

guild_config: {

	// Quando um cl� � criado, o Emperium � usado?
	guild_emperium_check: true

	// Limite da taxa de doa��o para um membro do cl�.
	guild_exp_limit: 50

	// M�ximo de castelos que um cl� pode conquistar (0 = ilimitado)
	guild_max_castles: 0

	// Como deve ser calculado o Delay nas habilidades de cl� quando ao relogar?
	// 0 - O delay � zerado
	// 1 - Reinicia o delay para a completa dura��o.
	// 2 - Mesmo deslogado o tempo para uso continua sendo contado
	guild_skill_relog_delay: 2

	// Ajuse de danos de Guerra do Emperium contra guardi�es
	castle_defense_rate: 100

	// Penalidade na Esquiva em mapas GvG.
	// O padr�o oficial � 20
	// NOTA: A configura��o � feita em porcentagem (%),
	//ent�o 20 = -20% da esquiva total
	gvg_flee_penalty: 20

	// A habilidade 'Gl�ria do Cl�' pode ser aprendida, e para mudar de
	//emblema � precisa desta habilidade?
	// NOTA: Esta habilidade n�o � implementada em servidores oficiais.
	require_glory_guild: false

	// Limite de alian�as de um cl�.
	// O valor vai de 0 a 3.
	// Se voc� deseja modificar, execute uma limpeza na tabela
	//relacionada a alian�as de cl�s.
	// Padr�o: 3
	max_guild_alliance: 3

	// Quando voltar a exibir o aviso do Cl�.
	// Ap�s teleportar (independentemente de mudar de mapa): 2 (oficial)
	// Ap�s mudar de mapa: 1
	// N�o voltar a exibir: 0 (desativado)
	guild_notice_changemap: 2

	// Membros podem realizar convites/expulsar outros membros dentro do
	//castelo nas Guerras?
	guild_castle_invite: false
	guild_castle_expulsion: false

	// Configura��es do Chamado Urgente
	//(Se Necess�rio Some os valores Desejados).
	// Note que para que esta habilidade funcione, 
	// voc� precisa de pelo menos um de 1/2 e 4/8
	// 1: � poss�vel usar a habilidade sem GdE.
	// 2: � poss�vel usar a habilidade durante a GdE.
	// 4: � poss�vel usar a habilidade fora de locais GvG
	// 8: � poss�vel usar a habilidade em mapas GvG
	//16: Desabilitar habilidade em mapas com "nowarpto"
	// (ir� funcionar em Castelos GvG mesmo se somado o valor 16 na
	//configura��o)
	emergency_call: 11

	// Configura��es da Aura do Cl�
	//(Se Necess�rio Some os valores Desejados).
	// (Isto afeta GD_LEADERSHIP, GD_GLORYWOUNDS, GD_SOULCOLD
	//e GD_HAWKEYES)
	// Note que para que esta habilidade funcione, 
	// voc� precisa de pelo menos um de 1/2 e 4/8
	// 1: � poss�vel usar a habilidade sem GdE.
	// 2: � poss�vel usar a habilidade durante a GdE.
	// 4: � poss�vel usar a habilidade fora de locais GvG
	// 8: � poss�vel usar a habilidade em mapas GvG
	//16: Desabilitar o efeito sobre o L�der do Cl�
	guild_aura: 31
}
