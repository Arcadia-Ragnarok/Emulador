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
	// Configura��es relacionadas ao battleground
	@include "Config/Battle/battleground.cs"

	// Configura��es relacionadas ao client.
	@include "Config/Battle/client.cs"

	// Configura��es relacionadas a drop de item
	@include "Config/Battle/drops.cs"

	// Configura��es relacionadas a experi�ncia
	@include "Config/Battle/exp.cs"

	// Configura��es globais de batalha.
	@include "Config/Battle/global.cs"

	// Configura��es relacionadas a GM.
	@include "Config/Battle/gm.cs"

	// Configura��es relacionadas a cl�s
	@include "Config/Battle/guild.cs"

	// Configura��es relacionadas a homunculus
	@include "Config/Battle/homunc.cs"

	// Configura��es relacionadas a itens
	@include "Config/Battle/items.cs"

	// Configura��es variadas
	@include "Config/Battle/misc.cs"

	// Configura��es relacionadas a monstros
	@include "Config/Battle/monster.cs"

	// Configura��es relacionadas a grupo
	@include "Config/Battle/party.cs"

	// Configura��es relacionadas a Pet's
	@include "Config/Battle/pet.cs"

	// Configura��es relacionadas a jogadores
	@include "Config/Battle/player.cs"

	// Configura��es relacionadas a habilidades
	@include "Config/Battle/skill.cs"

	// Configura��es relacionadas aos status
	@include "Config/Battle/status.cs"
}
