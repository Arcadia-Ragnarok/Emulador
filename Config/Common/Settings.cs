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
	// Configura��es relacionadas ao battleground
	@include "Config/Battle/Battleground.cs"

	// Configura��es relacionadas ao client.
	@include "Config/Battle/Client.cs"

	// Configura��es relacionadas a drop de item
	@include "Config/Battle/Drops.cs"

	// Configura��es relacionadas a experi�ncia
	@include "Config/Battle/Exp.cs"

	// Configura��es globais de batalha.
	@include "Config/Battle/Global.cs"

	// Configura��es relacionadas a GM.
	@include "Config/Battle/Gm.cs"

	// Configura��es relacionadas a cl�s
	@include "Config/Battle/Guild.cs"

	// Configura��es relacionadas a homunculus
	@include "Config/Battle/Homunc.cs"

	// Configura��es relacionadas a itens
	@include "Config/Battle/Items.cs"

	// Configura��es variadas
	@include "Config/Battle/Misc.cs"

	// Configura��es relacionadas a monstros
	@include "Config/Battle/Monster.cs"

	// Configura��es relacionadas a grupo
	@include "Config/Battle/Party.cs"

	// Configura��es relacionadas a Pet's
	@include "Config/Battle/Pet.cs"

	// Configura��es relacionadas a jogadores
	@include "Config/Battle/Player.cs"

	// Configura��es relacionadas a habilidades
	@include "Config/Battle/Skill.cs"

}
