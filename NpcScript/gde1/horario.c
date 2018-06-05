/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Controla in�cio e t�rmino da Guerra do imperio.           |
\*-----------------------------------------------------------------*/

-	script	Agit_Event	FAKE_NPC,{
	end;

	OnClock1900:
	OnClock2200:

	OnAgitInit:
	// In�cio
	if ((gettime(TIME_DAY) == SUNDAY || gettime(TIME_DAY) == SATURDAY) && gettime(TIME_HOUR) >= 19 && gettime(TIME_HOUR) < 22) {
		if (!agitcheck()) {
			agitstart;
			announce("Nesse momento inicia-se o per�odo de guerra do imperio",bc_all|bc_woe);
		}
		end;
	}
	// T�rmino
	if ((gettime(TIME_DAY) == SUNDAY || gettime(TIME_DAY) == SATURDAY) && gettime(TIME_HOUR) == 22) {
		if (agitcheck()) {
			agitend;
			announce("Nesse momento termina o per�odo de guerra do imperio",bc_all|bc_woe);
		}
		end;
	}
	end;
}
