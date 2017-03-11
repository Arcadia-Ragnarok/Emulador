/*--------------------------------------------------------------------*\
|              ______ ____ _____ ___   __                              |
|             / ____ / _  / ____/  /  /  /                             |
|             \___  /  __/ __/ /  /__/  /___                           |
|            /_____/__/ /____//_____/______/                           |
|                 /\  /|   __    __________ _________                  |
|                /  \/ |  /  |  /  ___  __/ ___/ _  /                  |
|               /      | / ' | _\  \ / / / __//  __/                   |
|              /  /\/| |/_/|_|/____//_/ /____/_/\ \                    |
|             /__/   |_|    Config File          \/                    |
|                                                                      |
+----------------------------------------------------------------------+
|                      Projeto Ragnarok Online                         |
+----------------------------------------------------------------------+
| - Descri��o: Configua��o para o sistema de Batalha Campal            |
+----------------------------------------------------------------------+
| - NOTA: � necess�rio cincronia com os npcs e client para que isso    |
|         funcione.                                                    |
\*--------------------------------------------------------------------*/

battlegrounds: (
{
	/* feature is not complete */
	feature_off: true
	/* character variable for global bg delay */
	global_delay_var: "BG_Delay_Tick"
	/* how many seconds to consider a player "afk" and kick him out? */
	maximum_afk_seconds: 30

	/* one can add as many as he wishes */
	/* for custom ones, need to edit "lua files/entryqueue/entryqueuelist.lua" [Ind/Hercules] */
	arenas: ({
		name: "Tierra Gorge" //must match the name in client files
		event: "Tierra_BG2::OnPlayerListReady"
		allowedTypes: "All" /* Solo, Party and Guild */
		minLevel: 80
		maxLevel: 150
		reward: {/* amount of badges awarded on each case */
			win: 3
			loss: 1
			draw: 1
		}
		minPlayers: 6 /* minimum amount of players to start */
		maxPlayers: 60 /* maximum amount of players */
		minTeamPlayers: 6 /* minimum amount of team members required for a team (party or guild) to join */
		delay_var: "Tierra_BG_Tick" /* char variable name that will store the delay for this match */
		maxDuration: 30 /* maximum duration in minutes, if reached game ends and highest score wins (or calls a draw if scores are equal) */
		fillDuration: 20 /* time in seconds to wait for more applications when minimum has been reached */
		pGameDuration: 20 /* time to wait for players to confirm their attendence after queueing process has finished */
	},{
		name: "Flavius" //must match the name in client files
		event: "start#bat_b01::OnPlayerListReady"
		allowedTypes: "All" /* Solo, Party and Guild */
		minLevel: 80
		maxLevel: 150
		reward: {/* amount of badges awarded on each case */
			win: 9
			loss: 3
			draw: 3
		}
		minPlayers: 2 /* minimum amount of players to start (DEBUG VALUE, CHANGE BACK) */
		maxPlayers: 60 /* maximum amount of players */
		minTeamPlayers: 6 /* minimum amount of team members required for a team (party or guild) to join */
		delay_var: "Flavius_BG_Tick" /* char variable name that will store the delay for this match */
		maxDuration: 30 /* maximum duration in minutes, if reached game ends and highest score wins (or calls a draw if scores are equal) */
		fillDuration: 20 /* time in seconds to wait for more applications when minimum has been reached */
		pGameDuration: 20 /* time to wait for players to confirm their attendence after queueing process has finished */
	},{
		name: "KVM (Level 80 and up)" //must match the name in client files
		event: "KvM03_BG::OnPlayerListReady"
		allowedTypes: "All" /* Solo, Party and Guild */
		minLevel: 80
		maxLevel: 150
		reward: {/* amount of badges awarded on each case */
			win: 5
			loss: 1
			draw: 1
		}
		minPlayers: 4 /* minimum amount of players to start */
		maxPlayers: 60 /* maximum amount of players */
		minTeamPlayers: 5 /* minimum amount of team members required for a team (party or guild) to join */
		delay_var: "KVM_BG_Tick" /* char variable name that will store the delay for this match */
		maxDuration: 30 /* maximum duration in minutes, if reached game ends and highest score wins (or calls a draw if scores are equal) */
		fillDuration: 20 /* time in seconds to wait for more applications when minimum has been reached */
		pGameDuration: 20 /* time to wait for players to confirm their attendence after queueing process has finished */
	},{
		name: "KVM (Level 60~79)" //must match the name in client files
		event: "KvM03_BG::OnPlayerListReady"
		allowedTypes: "All" /* Solo, Party and Guild */
		minLevel: 60
		maxLevel: 79
		reward: {/* amount of badges awarded on each case */
			win: 2
			loss: 0
			draw: 1
		}
		minPlayers: 4 /* minimum amount of players to start */
		maxPlayers: 60 /* maximum amount of players */
		minTeamPlayers: 5 /* minimum amount of team members required for a team (party or guild) to join */
		delay_var: "KVM_BG_Tick" /* char variable name that will store the delay for this match */
		maxDuration: 30 /* maximum duration in minutes, if reached game ends and highest score wins (or calls a draw if scores are equal) */
		fillDuration: 20 /* time in seconds to wait for more applications when minimum has been reached */
		pGameDuration: 20 /* time to wait for players to confirm their attendence after queueing process has finished */
	},{
		name: "KVM (Level 59 and below)" //must match the name in client files
		event: "KvM03_BG::OnPlayerListReady"
		allowedTypes: "All" /* Solo, Party and Guild */
		minLevel: 1
		maxLevel: 59
		reward: {/* amount of badges awarded on each case */
			win: 1
			loss: 0
			draw: 0
		}
		minPlayers: 4 /* minimum amount of players to start */
		maxPlayers: 60 /* maximum amount of players */
		minTeamPlayers: 5 /* minimum amount of team members required for a team (party or guild) to join */
		delay_var: "KVM_BG_Tick" /* char variable name that will store the delay for this match */
		maxDuration: 30 /* maximum duration in minutes, if reached game ends and highest score wins (or calls a draw if scores are equal) */
		fillDuration: 20 /* time in seconds to wait for more applications when minimum has been reached */
		pGameDuration: 20 /* time to wait for players to confirm their attendence after queueing process has finished */
	}
	)
})
