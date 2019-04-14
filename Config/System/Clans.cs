/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
|----------------------------------------------------------------------|
| - Descrição: Configuação para máscaras de comandos                   |
\*--------------------------------------------------------------------*/

clan_configuration: {

	// Jogadores de máximo para cada clã
	MaxMembers: 500

	// Maximo de alianças e rivals para cada clã
	MaxRelations: 6

	// Quantas horas de inatividade de ser considerada para expulsar um jogador
	// Nota:
	// 0 - Desabilita
	// 336 - 2 Semanas
	InactivityKickTime: 336
	
	// Quantas horas deve ser iniciado a contagem de inatividade?
	InactivityCheckTime: 24

	clans: (
		{
			Id: 1
			Const: "SWORDCLAN"
			Name: "Sword Clan"
			Leader: "Raffam Oranpere"
			Map: "prontera"
			Buff: {
				Icon: "SI_SWORDCLAN"
				Script: <"
					bonus(bStr, 1);
					bonus(bVit, 1);
					bonus(bMaxHP, 30);
					bonus(bMaxSP, 10);
				">
			}
			Allies: [
				"GOLDENMACECLAN",
			]
		},
		{
			Id: 2
			Const: "ARCWANDCLAN"
			Name: "Arc Wand Clan"
			Leader: "Devon Aire"
			Map: "geffen"
			Buff: {
				Icon: "SI_ARCWANDCLAN"
				Script: <"
					bonus(bInt, 1);
					bonus(bDex, 1);
					bonus(bMaxHP, 30);
					bonus(bMaxSP, 10);
				">
			}
			Allies: [
				"GOLDENMACECLAN",
			]
			Antagonists: [
				"CROSSBOWCLAN",
			]
		},
		{
			Id: 3
			Const: "GOLDENMACECLAN"
			Name: "Golden Mace Clan"
			Leader: "Berman Aire"
			Map: "prontera"
			Buff: {
				Icon: "SI_GOLDENMACECLAN"
				Script: <"
					bonus(bInt, 1);
					bonus(bLuk, 1);
					bonus(bMaxHP, 30);
					bonus(bMaxSP, 10);
				">
			}
			Allies: [
				"SWORDCLAN",
				"ARCWANDCLAN",
				"CROSSBOWCLAN",
			]
		},
		{
			Id: 4
			Const: "CROSSBOWCLAN"
			Name: "Crossbow Clan"
			Leader: "Shaam Rumi"
			Map: "payon"
			Buff: {
				Icon: "SI_CROSSBOWCLAN"
				Script: <"
					bonus(bDex, 1);
					bonus(bAgi, 1);
					bonus(bMaxHP, 30);
					bonus(bMaxSP, 10);
				">
			}
			Allies: [
				"GOLDENMACECLAN",
			]
			Antagonists: [
				"ARCWANDCLAN",
			]
		},
	)
}
