/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__  (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|                                                 |
|                                                                      |
+----------------------------------------------------------------------+
| - Arquivo de configura��o de Grupo.                                  |
\*--------------------------------------------------------------------*/

party_config: {

	// If someone steals (gank/steal skills), show name in party? (Note 1)
	show_steal_in_same_party: false

	// Interval before updating the party-member map mini-dots (milliseconds)
	party_update_interval: 1000

	// Method used to update party-mate hp-bars:
	// 0: Aegis - bar is updated every time HP changes (bandwidth intensive)
	// 1: Athena - bar is updated with the party map dots (up to 1 second delay)
	party_hp_mode: 0

	// When changing party leader, should the new leader be in the same map
	// as the current leader. (Note 1)
	// true: Aegis - They must be in the same map
	// false: Athena - They can be in different maps
	party_change_leader_same_map: true

	// When 'Party Share' item sharing is enabled in a party,
	// announce in the party which party-member received the item and what's he received? (Note 1)
	show_party_share_picker: true

	// What types of items are going to be announced when 'show_party_share_picker' is active?
	// 1:   IT_HEALING,  2:   IT_UNKNOWN,  4:    IT_USABLE, 8:    IT_ETC,
	// 16:  IT_WEAPON,   32:  IT_ARMOR,    64:   IT_CARD,   128:  IT_PETEGG,
	// 256: IT_PETARMOR, 512: IT_UNKNOWN2, 1024: IT_AMMO,   2048: IT_DELAYCONSUME
	// 262144: IT_CASH
	show_picker_item_type: 112

	// Method of distribution when item party share is enabled in a party:
	// 0: Normal (item goes to a random party member)
	// 1: Item Share is disabled for non-mob drops (player/pet drops)
	// 2: Round Robin (items are distributed evenly and in order among members)
	// 3: 1+2
	party_item_share_type: 0

	// Is exp/item sharing disabled for idle members in the party?
	// Set to 0, or the amount of seconds (NOT milliseconds) that need to pass before considering
	// a character idle.
	// Characters in a chat/vending are always considered idle.
	// A character's idle status is reset upon item use/skill use/attack (auto attack counts too)/movement.
	idle_no_share: 0

	// Give additional experience bonus per party-member involved on even-share parties (excluding yourself)?
	// ex. If set to 10, an even-share party of 5 people will receive +40% exp (4 members * 10% exp):
	//     140% party experience in total, so each member receives 140%/5 = 28% exp (instead of 20%).
	party_even_share_bonus: 0

	// Display party name regardless if player is in a guild.
	// Official servers do not display party name unless the user is in a guild. (Note 1)
	display_party_name: false
}
