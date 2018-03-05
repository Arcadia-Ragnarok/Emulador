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
	id: 0 /* group 0 por padrão todas novos logins pertecem a esse grupo */
	name: "Player"
	level: 0
	inherit: ( /*Não herda nada*/ )
	commands: {
		/* Nenhum comando por padrão */
	}
	permissions: {
		/* Permições básicas que permitem, executar trocas e pertecerem a grupos */
		can_trade: true
		can_party: true
	}
},
{
	id: 1
	name: "Super Player"
	inherit: ( "Player" ) /* Herda os comandos e permições do "Player" */
	level: 0
	commands: {
		commands: true
		charcommands: true
		help: true
		rates: true
		uptime: true
		showdelay: true
		exp: true
		mobinfo: true
		iteminfo: true
		whodrops: true
		time: true
		jailtime: true
		hominfo: true
		homstats: true
		showexp: true
		showzeny: true
		whereis: true
		refresh: true
		noask: true
		noks: true
		autoloot: true
		alootid: true
		autoloottype: true
		autotrade: true
		request: true
		go: true
		breakguild: true
	}
	permissions: {
	}
},
{
	id: 2
	name: "Support"
	inherit: ( "Super Player" )
	level: 1
	commands: {
		version: true
		where: true
		jumpto: true
		who: true
		who2: true
		who3: true
		whomap: true
		whomap2: true
		whomap3: true
		users: true
		broadcast: true
		localbroadcast: true
	}
	log_commands: true
	permissions: {
		receive_requests: true
		view_equipment: true
	}
},
{
	id: 3
	name: "Script Manager"
	inherit: ( "Support" )
	level: 1
	commands: {
		tonpc: true
		hidenpc: true
		shownpc: true
		loadnpc: true
		unloadnpc: true
		npcmove: true
		addwarp: true
	}
	log_commands: true
	permissions: {
		any_warp: true
	}
},
{
	id: 4
	name: "Event Manager"
	inherit: ( "Support" )
	level: 1
	commands: {
		monster: true
		monstersmall: true
		monsterbig: true
		killmonster2: true
		cleanarea: true
		cleanmap: true
		item: [true, true]
		zeny: [true, true]
		disguise: [true, true]
		undisguise: [true, true]
		size: [true, true]
		raise: true
		raisemap: true
		day: true
		night: true
		skillon: true
		skilloff: true
		pvpon: true
		pvpoff: true
		gvgon: true
		gvgoff: true
		allowks: true
		me: true
		marry: true
		divorce: true
		refreshall: true
	}
	log_commands: true
	permissions: {
		can_trade: false
		any_warp: true
	}
},
{
	id: 10
	name: "Law Enforcement"
	inherit: ( "Support" )
	level: 2
	commands: {
		hide: true
		follow: true
		kick: true
		disguise: true
		fakename: true
		option: true
		speed: true
		warp: true
		kill: true
		recall: true
		ban: true
		block: true
		jail: true
		jailfor: true
		mute: true
		storagelist: true
		cartlist: true
		itemlist: true
		stats: true
	}
	log_commands: true
	permissions: {
		join_chat: true
		kick_chat: true
		hide_session: true
		who_display_aid: true
		hack_info: true
		any_warp: true
		view_hpmeter: true
	}
},
{
	id: 99
	name: "Admin"
	level: 99
	inherit: ( "Support", "Law Enforcement" )
	commands: {
		/* Não é necessário, por causa da permissão all_commands: true */
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
		all_commands: true
		hchsys_admin: true
	}
}
)
