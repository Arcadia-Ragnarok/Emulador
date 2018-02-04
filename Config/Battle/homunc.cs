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
| - Arquivo de configura��o de Homunculus.                             |
\*--------------------------------------------------------------------*/

homunc_config: {
	// Configura��es de homunculus (Nota 3)
	// Ativa v�rias 'peculiaridades' que fazem os homunculus agirem
	//diferentemente dos jogadores comuns.
	// 0x001: N�o podem ser alvo de habilidades de suporte
	//(exceto pela de seu dono)
	// 0x004: Monstros sempre ir�o atr�s deles ao inv�s dos donos
	//enquanto n�o receberem dano.
	// 0x008: Copiam a velocidade do dono em mudan�a de mapas/monstros
	// 0x010: Exibem SOR/3+1 ao inv�s de seu cr�tico atual na janela
	//de stats (por padr�o eles n�o tem cr�tico)
	// 0x020: Seu MATQ m�nimo � sempre o mesmo que o m�ximo
	// 0x040: O delay do reuso de habilidades � resetado quando
	//s�o vaporizados.
	hom_setting: 0x1D

	// A taxa que o homunculus aumenta sua lealdade em rela��o a
	//sua alimenta��o.
	homunculus_friendly_rate: 100

	// O homunculus pode ser renomeado mais de uma vez?
	hom_rename: false

	// Lealdade necess�ria para usar Autodestrui��o do Vanilmirth. 
	hvan_explosion_intimate: 45000

	// Exibir o aumento de status para o dono quando um Homunculus
	//evoluir de n�vel?
	homunculus_show_growth: true

	// Se um monstro for morto somente pelo homunculus,
	//autoloot funcionar�?
	homunculus_autoloot: false

	// O homunculus � vaporizado quando seu dono morre?
	homunculus_auto_vapor: true

	// N�vel m�ximo para homunculus
	homunculus_max_level: 99

	// N�vel m�ximo para o homunculus S
	homunculus_S_max_level: 150
}
