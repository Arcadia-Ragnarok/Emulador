/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
\*--------------------------------------------------------------------*/

battle_configuration: {
	// Configurações relacionadas ao battleground
	@include "Config/Battle/battleground.cs"

	// Configurações relacionadas ao client.
	@include "Config/Battle/client.cs"

	// Configurações relacionadas a drop de item
	@include "Config/Battle/drops.cs"

	// Configurações relacionadas a experiência
	@include "Config/Battle/exp.cs"

	// Configurações globais de batalha.
	@include "Config/Battle/global.cs"

	// Configurações relacionadas a GM.
	@include "Config/Battle/gm.cs"

	// Configurações relacionadas a clãs
	@include "Config/Battle/guild.cs"

	// Configurações relacionadas a homunculus
	@include "Config/Battle/homunc.cs"

	// Configurações relacionadas a itens
	@include "Config/Battle/items.cs"

	// Configurações variadas
	@include "Config/Battle/misc.cs"

	// Configurações relacionadas a monstros
	@include "Config/Battle/monster.cs"

	// Configurações relacionadas a grupo
	@include "Config/Battle/party.cs"

	// Configurações relacionadas a Pet's
	@include "Config/Battle/pet.cs"

	// Configurações relacionadas a jogadores
	@include "Config/Battle/player.cs"

	// Configurações relacionadas a habilidades
	@include "Config/Battle/skill.cs"

	// Configurações relacionadas aos status
	@include "Config/Battle/status.cs"
}
