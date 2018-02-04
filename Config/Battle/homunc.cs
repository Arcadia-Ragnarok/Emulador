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
| - Arquivo de configuração de Homunculus.                             |
\*--------------------------------------------------------------------*/

homunc_config: {
	// Configurações de homunculus (Nota 3)
	// Ativa várias 'peculiaridades' que fazem os homunculus agirem
	//diferentemente dos jogadores comuns.
	// 0x001: Não podem ser alvo de habilidades de suporte
	//(exceto pela de seu dono)
	// 0x004: Monstros sempre irão atrás deles ao invés dos donos
	//enquanto não receberem dano.
	// 0x008: Copiam a velocidade do dono em mudança de mapas/monstros
	// 0x010: Exibem SOR/3+1 ao invés de seu crítico atual na janela
	//de stats (por padrão eles não tem crítico)
	// 0x020: Seu MATQ mínimo é sempre o mesmo que o máximo
	// 0x040: O delay do reuso de habilidades é resetado quando
	//são vaporizados.
	hom_setting: 0x1D

	// A taxa que o homunculus aumenta sua lealdade em relação a
	//sua alimentação.
	homunculus_friendly_rate: 100

	// O homunculus pode ser renomeado mais de uma vez?
	hom_rename: false

	// Lealdade necessária para usar Autodestruição do Vanilmirth. 
	hvan_explosion_intimate: 45000

	// Exibir o aumento de status para o dono quando um Homunculus
	//evoluir de nível?
	homunculus_show_growth: true

	// Se um monstro for morto somente pelo homunculus,
	//autoloot funcionará?
	homunculus_autoloot: false

	// O homunculus é vaporizado quando seu dono morre?
	homunculus_auto_vapor: true

	// Nível máximo para homunculus
	homunculus_max_level: 99

	// Nível máximo para o homunculus S
	homunculus_S_max_level: 150
}
