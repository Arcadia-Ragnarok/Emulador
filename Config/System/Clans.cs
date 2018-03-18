clan_configuration: {

	// Maximum players for each clan
	MaxMembers: 500

	// Maximum alliances/oppositions for each clan
	MaxRelations: 6

	// how many hours player must be inactive to be kicked?
	// Disabled: 0
	// Official: 336 (2 weeks)
	InactivityKickTime: 336
	
	// Checks each clan member every 'InactivityCheckTime' hour(s) (default 24h, minimum value of 1h)
	InactivityCheckTime: 24

	// Clan Database
	@include "Database/Guild_DB/Clans.conf"
}
