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
| - Descri��o: Arquivo de configura��o de grupos de jogadores                   |
+-------------------------------------------------------------------------------+
| Este arquivo define "grupos de jogadores" e seus privil�gios.                 |
| Cada grupo tem seu id e nome, listas de comandos dispon�veis e outras         |
| permiss�es e uma lista de outros grupos de onde herda.                        |
+-------------------------------------------------------------------------------+
| - Configura��es de grupo                                                      |
| <Id>                                                                          |
| N�mero de grupo exclusivo. O �nico campo obrigat�rio.                         |
|                                                                               |
| <Name>                                                                        |
| Qualquer string. Se vazio, o padr�o � "Grupo <id>". � usado em v�rios @who    |
| commands.                                                                     |
|                                                                               |
| <Level>                                                                       |
| Equivalente de GM n�vel, que foi utilizado em revis�es antes r15572.          |
| Voc� pode definir para qualquer n�mero, mas geralmente � entre 0 (padr�o)     |
| e 99.                                                                         |
| Membros de grupos com n�vel inferior n�o podem executar algumas a��es         |
| comandos (como @kick) em membros de grupos com n�vel mais alto.               |
| � o comando de script getgmlevel () Retorna, o n�vel do grupo tamb�m pode     |
| ser usado para substituir as restri��es comerciais.                           |
|                                                                               |
| <Commands>                                                                    |
| Um grupo de configura��es                                                     |
|                                                                               |
| <Nome do comando>: <bool> ou <Commandname>: [<bool>, <bool>]                  |
| O primeiro valor booleano � para atcommand, o segundo para charcommand.       |
| Se configurado para true, o grupo pode usar o comando.                        |
| Se apenas o valor de atcommand � fornecido, false � assumido para charcommand.|
| Se um nome de comando n�o estiver inclu�do, false � assumido.                 |
| Para ambos o comando e charcommand.                                           |
| Para obter uma lista completa dos comandos dispon�veis, consulte a            |
| documenta��o.                                                                 |
|                                                                               |
| <Log_commands>                                                                |
| Boolean valor. Se for true, todos os comandos usados pelo grupo ser�o         |
| Atcommandlog.                                                                 |
| Se a configura��o for omitida em uma defini��o de grupo, false � assumido.    |
| Requer que 'log_commands' seja ativado em 'Config / Common / Logs.cs'.        |
|                                                                               |
| <Permissions>                                                                 |
| Um grupo de configura��es                                                     |
| <Permission>: <bool>                                                          |
| Se uma permiss�o n�o estiver inclu�da, false � assumido.                      |
| Para obter uma lista completa de permiss�es dispon�veis, consulte a           |
| documenta��o.                                                                 |
|                                                                               |
| <Inherit>                                                                     |
| Uma lista de nomes de grupo que o grupo dado herdar� comandos e permiss�es    |
| a partir de.                                                                  |
| Os nomes de grupo diferenciam mai�sculas de min�sculas.                       |
+-------------------------------------------------------------------------------+
| - Resultados de heran�a -                                                     |
|                                                                               |
| Tanto a heran�a m�ltipla (Grupo 2 -> Grupo 1 e Grupo 3 -> Grupo 1) e Heran�a  |
| recursiva (Grupo 3 -> Grupo 2 -> Grupo 1) s�o permitidos.                     |
|                                                                               |
| As regras de heran�a n�o devem criar ciclos (por exemplo, o Grupo 1           |
| herda do Grupo 2, e Grupo herda do Grupo 1 ao mesmo tempo).                   |
| A configura��o com ciclos � considerado defeituoso e n�o pode ser totalmente  |
| processado pelo servidor.                                                     |
|                                                                               |
| O comando ou permiss�o � herdado SOMENTE se ainda n�o estiver definido para o |
| grupo.                                                                        |
| Se o grupo herda de v�rios grupos eo mesmo comando ou permiss�o � definido    |
| para mais de um desses grupos, � indefinido qual ser� Herdado.                |
+-------------------------------------------------------------------------------+
| - Sintaxe  -                                                                  |
| Este arquivo de configura��o usa a sintaxe libconfig:                         |
| http://www.hyperrealm.com/libconfig/libconfig_manual.html#Configuration-Files |
\*-----------------------------------------------------------------------------*/

groups: (
	{
		id: 0 /* group 0 is the default group for every new account */
		name: "Player"
		level: 0
		inherit: ( /*empty list*/ )
		commands: {
			/* no commands by default */
		}
		permissions: {
			/* without this basic permissions regular players could not
			 * trade or party */
			can_trade: true
			can_party: true
			
			all_commands: true
		}
	},
	{
		id: 1
		name: "Super Player"
		inherit: ( "Player" ) /* can do everything Players can and more */
		level: 0
		commands: {
			/* informational commands */
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
			/* feature commands */
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
			channel: true
		}
		permissions: {
		}
	},
	{
		id: 2
		name: "Support"
		inherit: ( "Super Player" )
		level: 10
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
		log_commands: false
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
		log_commands: false
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
		log_commands: false
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
		log_commands: false
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
			/* not necessary due to all_commands: true */
		}
		log_commands: false
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
