/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
\*--------------------------------------------------------------------*/

battle_configuration: {
	// Configurações relacionadas ao battleground
	@include "Config/Battle/Battleground.cs"

	// Configurações relacionadas ao client.
	@include "Config/Battle/Client.cs"

	// Configurações relacionadas a drop de item
	@include "Config/Battle/Drops.cs"

	// Configurações relacionadas a experiência
	@include "Config/Battle/Exp.cs"

	// Configurações globais de batalha.
	@include "Config/Battle/Global.cs"

	// Configurações relacionadas a GM.
	@include "Config/Battle/Gm.cs"

	// Configurações relacionadas a clãs
	@include "Config/Battle/Guild.cs"

	// Configurações relacionadas a homunculus
	@include "Config/Battle/Homunc.cs"

	// Configurações relacionadas a itens
	@include "Config/Battle/Items.cs"

	// Configurações variadas
	@include "Config/Battle/Misc.cs"

	// Configurações relacionadas a monstros
	@include "Config/Battle/Monster.cs"

	// Configurações relacionadas a grupo
	@include "Config/Battle/Party.cs"

	// Configurações relacionadas a Pet's
	@include "Config/Battle/Pet.cs"

	// Configurações relacionadas a jogadores
	@include "Config/Battle/Player.cs"

	// Configurações relacionadas a habilidades
	@include "Config/Battle/Skill.cs"

}
