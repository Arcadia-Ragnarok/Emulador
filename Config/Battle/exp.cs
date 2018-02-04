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
| - Arquivo de configura��o de EXP.                                    |
\*--------------------------------------------------------------------*/

exp_config: {
	// Taxa de experi�ncia ganha em base.
	// NOTA: Valor m�ximo aceito � de 1000
	base_exp_rate: 1000

	// Taxa de experi�ncia ganha em classe.
	// NOTA: Valor m�ximo aceito � de 1000
	job_exp_rate: 1000

	// Defina para yes se deseja habilitar um jogador a ganhar mais de
	//um n�vel quando ganhar mais que 100% da experi�ncia necess�ria.
	multi_level_up: true

	// Configurando isto pode restringir o m�ximo de experi�ncia que
	//pode ser ganha pela morte espec�fica de um monstro na % da barra
	//de experi�ncia atual. (Cada 10 = 1.0%)
	// Por exemplo, defina para 500 e n�o importa o quanto de experi�ncia
	//um monstro garante, ele nunca dar� mais da metade da barra de
	//experi�ncia atual.
	max_exp_gain_rate: 0

	// M�todo do c�lculo de experi�ncia ganha quando se mata um monstro:
	// 0 = dano causado / dano total como dano proporcional
	// 1 = dano causado / max_hp como dano proporcional
	// NOTA: Usando o tipo 1 desabilita o b�nus onde o primeiro
	//atacante recebe sua experi�ncia compartilhada dobrada quando
	//v�rias pessoas atacam um monstro.
	exp_calc_type: 0

	// Experi�ncia aumentada por atacante. 
	// Isto �, cada atacante adicional para o monstro faz ele dar
	//mais experi�ncia.
	// (ex: 5 atacantes com 25 na configura��o, +(25*4)% -> +100% exp)
	exp_bonus_attacker: 25

	// M�ximo de atacantes para tornar o b�nus de experi�ncia limitado
	// (ex: se definido como 5, o b�nus m�ximo � 4*b�nus-por-personagem
	//independente de quem atacar)
	exp_bonus_max_attacker: 12

	// Taxa de experi�ncia b�nus em MVPs.
	// NOTA: Valor m�ximo aceito � de 1000
	mvp_exp_rate: 1000

	// Taxa de experi�ncia em base/classe ganha por NPCs.
	// NOTA: Valor m�ximo aceito � de 1000
	quest_exp_rate: 1000

	// A taxa de experi�ncia dada pelo uso da habilidade Curar 
	//100 � o mesmo que a quantidade de cura, 200 � o dobro.
	// O balanceamento da taxa de experi�ncia � melhor quando
	//usado de 5 at� 10)
	heal_exp: 0

	// A taxa de experi�ncia ganha no processo de ressucita��o,
	//a unidade � 0.01%.
	// O c�lculo de experi�ncia para para o valor * diferen�a de n�vel
	//da pessoa revivida / 100 * resurrection_exp/10000 que o jogador
	//revivido ganha.
	resurrection_exp: 0

	// A Taxa de experi�ncia em classe ganha quando usado Desconto e
	//Superfaturar em um NPC
	// (em incrementos de 0.01% - 100 � 1%, 10000 � normal,
	//20000 � o dobro.)
	// A f�rmula do c�lculo � (dinheiro recebido * nv da
	//habilidade) * shop_exp / 10000.
	shop_exp: 0

	// Os jogadores ganham experi�ncia em mapas PvP?
	// (Nota: experi�ncia N�O matando jogadores, mas atrav�s de monstros etc)
	pvp_exp: true

	// Quando um jogador morre, como ele deve ser penalizado?
	// 0 = Sem penalidade.
	// 1 = Perder % da experi�ncia do n�vel atual quando morto.
	// 2 = Perder % de toda a experi�ncia quando morto.
	death_penalty_type: 2

	// Taxa de penalidade de experi�ncia em base
	//(Cada 100 � 1% da exp)
	death_penalty_base: 500

	// Taxa de penalidade de experi�ncia em classe
	//(Cada 100 � 1% da exp)
	death_penalty_job: 500

	// Quando o jogador morre, qual a penalidade em zeny
	//deve ser aplicada?
	// NOTA: � a porcentagem do zeny do jogador, ent�o 100 = 1%
	zeny_penalty: 0

	// Exibir a experi�ncia ganha ao matar um monstro.
	disp_experience: false

	// Exibir a quantia de zeny ganho
	//(em monstros, negocia��es, etc)
	disp_zeny: false

	// Usar o conte�do da statpoint quando os stats s�o
	//resetados ou ganha-se um n�vel?
	// Caso n�o, uma equa��o ser� usada que preservar�
	//os pontos de atributos ganhos/perdidos atrav�s de meios
	//externos (ex.: compradores/vendedores de pontos de atributos)
	use_statpoint_table: true
}
