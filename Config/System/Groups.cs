/*-----------------------------------------------------------------------------*\
|                   ____                     _                                  |
|                  /    |                   | |_                                |
|                 /     |_ __ ____  __ _  __| |_  __ _                          |
|                /  /|  | '__/  __|/ _` |/ _  | |/ _` |                         |
|               /  __   | | |  |__| (_| | (_| | | (_| |                         |
|              /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                         |
|             /__/   |__|  [ Ragnarok Emulator ]                                |
|                                                                               |
|-------------------------------------------------------------------------------|
| - Descrição: Arquivo de configuração de grupos de jogadores                   |
+-------------------------------------------------------------------------------+
| Este arquivo define "grupos de jogadores" e seus privilégios.                 |
| Cada grupo tem seu id e nome, listas de comandos disponíveis e outras         |
| permissões e uma lista de outros grupos de onde herda.                        |
\*-----------------------------------------------------------------------------*/

groups: (
	{
		id: 0
		name: "Player"
		level: 0
		inherit: ()
		commands: {
			commands: true
			rates: true
			jailtime: true
			hominfo: true
			homstats: true
			showexp: true
			showzeny: true
			refresh: true
			noks: true
		}
		permissions: {
			all_commands: true
			
			can_trade: true
			can_party: true
		}
	},

	{
		id: 1
		name: "Player_VIP"
		inherit: ( "Player" )
		level: 0
		commands: {
			showdelay: true
			exp: true
			mobinfo: true
			iteminfo: true
			whodrops: true
			noask: true
			autoloot: true
			alootid: true
			autoloottype: true
			autotrade: true
			go: true
			dropall: true
			storeall: true
			itemreset: true
			load: true
		}
		permissions: {
		}
	},

	{
		id: 10
		name: "Player_Privileged"
		inherit: ( "Player_VIP" )
		level: 0
		commands: {
		}
		permissions: {
		}
	},

	{
		id: 30
		name: "Community_Master"
		inherit: ( "Player_VIP" )
		level: 0
		commands: {
			request: true
			whereis: true
			help: false
			charcommands: true
			where: true
			jumpto: true
			who: true
			who2: true
			who3: true
			whomap: true
			whomap2: true
			whomap3: true
			whogm: true
			users: true
			broadcast: true
			localbroadcast: true
			raise: true
			raisemap: true
			skillon: true
			skilloff: true
			pvpon: true
			pvpoff: true
			gvgon: true
			gvgoff: true
			allowks: true
			hide: true
			follow: true
			kick: true
			speed: true
			jump: true
			warp: true
			kill: true
			recall: true
			jail: true
			jailfor: true
			mute: true
			storagelist: true
			cartlist: true
			itemlist: true
			stats: true
			mapinfo: true
			gat: true
			mobsearch: true
			showmobs: true
			monsterignore: true
		}
		log_commands: true
		permissions: {
			can_trade: false
			can_party: false
			receive_requests: false
			view_equipment: true
			any_warp: true
			join_chat: true
			kick_chat: true
			view_hpmeter: true
		}
	},

	{
		id: 60
		name: "Game_Master"
		inherit: ( "Community_Master" )
		level: 0
		commands: {
			breakguild: true
			cleanmap: true
			cleanarea: true
			killmonster2: true
			disguise: [true, true]
			undisguise: [true, true]
			size: [true, true]
			day: true
			night: true
			me: true
			marry: true
			divorce: true
			refreshall: true
			disguise: true
			option: true
			ban: true
			unban: true
			block: true
			unblock: true
			pvpon: true
			pvpoff: true
			gvgon: true
			gvgoff: true
			skillon: true
			skilloff: true
			option: [true, true]
			identify: true
			save: true
			streset: true
			skreset: true
			reset: true
			feelreset: true
		}
		log_commands: true
		permissions: {
			hack_info: true
		}
	},

	{
		id: 90
		name: "Sub_Admin"
		inherit: ( "Game_Master" )
		level: 0
		commands: {
			version: true
			uptime: true
			time: true
			tonpc: true
			hidenpc: true
			shownpc: true
			loadnpc: true
			unloadnpc: true
			npcmove: true
			addwarp: true
			monster: true
			monstersmall: true
			monsterbig: true
			item: [true, true]
			zeny: [true, true]
			cash: [true, true]
			fakename: true
			accinfo: true
			agitstart: true
			agitend: true
			agitstart2: true
			agitend2: true
			questskill: true
			lostskill: true
			clone: true
			slaveclone: true
			evilclone: true
			produce: [true, true]
			refine: true
			repairall: true
			blvl: [true, true]
			jlvl: [true, true]
			allstats: true
			allskill: true
			stpoint: [true, true]
			skpoint: [true, true]
			jobchange: true
			killmonster: true
			mapexit: true
			reloaditemdb: true
			reloadmobdb: true
			reloadskilldb: true
			reloadquestdb: true
			reloadscript: true
			reloadatcommand: true
			reloadbattleconf: true
			reloadstatusdb: true
			reloadpcdb: true
		}
		log_commands: true
		permissions: {
			can_trade: true
			can_trade_bound: false
			can_party: true
			all_skill: false
			all_equipment: false
			skill_unconditional: false
			use_check: true
			use_changemaptype: true
		}
	},

	{
		id: 99
		name: "Admin"
		level: 99
		inherit: ( "Sub_Admin" )
		commands: {}
		log_commands: false
		permissions: {
			all_commands: true
			skill_unconditional: false
		}
	}
)
