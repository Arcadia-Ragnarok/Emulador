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
| - Arquivo de configuração de bixinhos de estimação.                  |
\*--------------------------------------------------------------------*/

pet_config: {
	// Taxa para capturar bichos de estimação.    
	pet_catch_rate: 100

	// Um jogador pode renomear seu pet mais de uma vez?    
	pet_rename: false

	// A taxa em que o pet vai ganhando lealdade através da comida.    
	pet_friendly_rate: 100

	// A taxa em que o pet vai ficando com fome.    
	pet_hungry_delay_rate: 100

	// Se o pet ficar com fome, o quanto da lealdade será reduzida
	//dele. (O padrão é 5)
	// Nota: A lealdade vai de 0-1000, em 0 o bicho de estimação foge.
	pet_hungry_friendly_decrease: 5

	// Um pet precisa estar com equipamento antes de utilizar
	//sua habilidade?    
	pet_equip_required: true

	// Quando o dono ataca um monstro, o pet deve atacar
	//também?    
	pet_attack_support: false

	// Quanto o dono recebe dano, o pet deve revidar?    
	pet_damage_support: false

	// Lealdade mínima para o pet dar suporte ao seu dono.
	//O padrão é 900.
	// Nesta quantidade, a taxa de suporte é de 50% do valor normal.
	// No máximo (1000) a taxa de suporte é de 150%.
	pet_support_min_friendly: 900

	// O mesmo de cima, porém para usar o campo pet_script
	//com as habilidades oficiais.
	pet_equip_min_friendly: 900

	// Os pets irão utilizar habilidades.    
	// Nota: Habilidades ofensivas precisam pelo menos do
	//pet_attack_support ou pet_damage_support para funcionar
	//(elas são ativadas quando o pet está atacando).
	pet_status_support: false

	// Taxa onde o pet irá dar suporte ao seu dono durante uma luta.    
	// Afeta pet_attack_support e pet_damage_support.
	pet_support_rate: 100

	// O dono do pet receberá exp pelos ataques dele?
	pet_attack_exp_to_master: false

	// A taxa de experiência ganha com pets.
	pet_attack_exp_rate: 100

	// Sistema de nível em pets.
	//Use 0 para desabilitar (padrão).
	// Quando habilitado, o nível do pet é uma % fixada
	//do seu dono.    
	// Caso esteja 200%, o pet terá o nível do dobro do seu dono,
	//com 50% terá a metade, etc.
	pet_lv_rate: 0

	// Quando o sistema de nível em pets é habilitado,
	//qual o máximo de stats?
	pet_max_stats: 99

	// Quando o sistema de nível em pets é ativado, estes são
	//os limites impostos
	// no min/máx dano.
	//Note que somente limita o atk1 e atk2, se você
	// habilitar o pet_str, o dano máximo será base_atk + pet_max_atk2
	pet_max_atk1: 500
	pet_max_atk2: 1000

	// Os pets estão desabilitados durante GvGs?
	// Defina para yes, e os pets retornarão automaticamente
	//para seus ovos quando seu dono entrar num mapa GvG
	// e chocar o ovo também é proibido.
	pet_disable_in_gvg: true

	// Auto alimentar bichinhos de estimação?
	enable_pet_autofeed: true
}