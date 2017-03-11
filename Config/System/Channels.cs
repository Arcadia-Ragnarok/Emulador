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
| - Descrição: Configuação para os canais                              |
\*--------------------------------------------------------------------*/

chsys: (
{
	/* Default Channels (available on boot) */
	default_channels: {
		/* channel_name : channel_messages_color */
		main: "Orange" /* Available as #main */
		support: "Blue" /* Available as #support */
		trade: "Red" /* Available as #trade */
		offtopic: "Cyan" /* Available as #offtopic */
		/* You may add as many channels as you like */
	}
	/* Colors Available */
	colors: {
		Default: "0xffffff" /* Custom channels use the first color listed unless a font is selected through @channel. */
		Red: "0xff0000"
		Blue: "0x83cfe9"
		Orange: "0xe57c00"
		Cyan: "0x00b89d"
		Yellow: "0xffff90"
		Green: "0x28bf00"
		Light_Green: "0x3dff98"
		Normal: "0x00ff00"
		/* As many colors as you like */
	}
	/* Allow users to create their own (private) channels through @channels command? */
	/* (must also allow players to use @channels in Groups.cs) */
	allow_user_channel_creation: false

	/* "map_local_channel" is a instanced channel unique to each map. */
	map_local_channel: false
	map_local_channel_name: "map" /* Available as #map */
	map_local_channel_color: "Yellow"
	map_local_channel_autojoin: false /* You can disable autojoin in specific maps through a mapflag or zone. */

	/* "ally_channel" is a channel shared by all your guild allies */
	ally_channel_enabled: false
	ally_channel_name: "ally" /* Available as #ally */
	ally_channel_color: "Green"
	ally_channel_autojoin: false /* Will members autojoin to their respective #ally chats when they log-in? */

	/* "irc_channel" is a special channel connected to a specific chat room in any irc network. */
	irc_channel_enabled: false
	irc_channel_name: "irc" /* available as #irc */
	irc_channel_color: "Light_Green"
	irc_channel_network: "" /* network to connect to (:and port) */
	irc_channel_channel: "" /* channel in the network above to join */
	irc_channel_nick: "" /* nick the bot will use */
	irc_channel_nick_pw: "" /* password to this nick (if any) to identify to nick server on the irc network */
	irc_channel_use_ghost: false /* whether to send a GHOST command to the nick server (requires irc_channel_nick_pw to be defined) */
	irc_channel_autojoin: false
	irc_flood_protection_enabled: true /* Whether to enable anti-flood protection for outgoing messages */
	irc_flood_protection_rate: 1000 /* The delay between messages during anti-flood protection (milliseconds) */
	irc_flood_protection_burst: 3 /* The maximum number of messages that are sent at once burst size before triggering the anti-flood protection */
}
)
