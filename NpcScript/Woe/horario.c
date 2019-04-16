/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Controla in�cio e t�rmino da Guerra do imperio.           |
| - Doc:                                                            |
| * Configurado para iniciar aos s�bados e domingos �s 19:00 Horas  |
| * Configurado para terminar aos s�bados e domingos �s 22:00 Horas |
\*-----------------------------------------------------------------*/

-	script	Agit_Event	FAKE_NPC,{
	end;

	OnClock1900:
	OnClock2200:

	OnAgitInit:
	OnAgitInit2:

	// -------------------------------------------------------------
	// - [ In�cio ] -
	// -------------------------------------------------------------
	if ((gettime(TIME_DAY) == SUNDAY || gettime(TIME_DAY) == SATURDAY) && gettime(TIME_HOUR) >= 19 && gettime(TIME_HOUR) < 22) {
		if (!agitcheck()) {
			agitstart;
			announce("Nesse momento inicia-se o per�odo de guerra do imperio",bc_all|bc_woe);
		}
		if (!agitcheck2()) {
			agitstart2;
		}
		end;
	}

	// -------------------------------------------------------------
	// - [ T�rmino ] -
	// -------------------------------------------------------------
	if ((gettime(TIME_DAY) == SUNDAY || gettime(TIME_DAY) == SATURDAY) && gettime(TIME_HOUR) == 22) {
		if (agitcheck()) {
			agitend;
			announce("Nesse momento termina o per�odo de guerra do imperio",bc_all|bc_woe);
		}
		if (agitcheck2()) {
			agitend2;
		}
		end;
	}
	end;
}
