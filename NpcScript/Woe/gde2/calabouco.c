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
| - Copyright: ?                                                    |
| - Version: Spell Master                                           |
| - Info: Acesso aos calabouços dos catelos na WOE 2.0              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	SunflowerSE	FAKE_NPC,{
	if (getcharid(CHARID_GUILD) != getcastledata(strnpcinfo(NPC_MAP), 1)) {
		mes("- É um enorme girassol, é tão grande quanto um ser humano!..."
			"Você sente que algo misterioso é emanado da flor. -");
		next;
		if (select("Segurar o Tronco", "Não fazer nada") == 1) {
			if (compare(strnpcinfo(NPC_MAP), "arug")) {
				.@map$ = "arug_dun01";
				setarray(.@mapx[0], 350, 350, 50,  50, 200);
				setarray(.@mapy[0], 350,  50, 50, 350, 386);
			} else {
				.@map$ = "schg_dun01";
				setarray(.@mapx[0], 262,  94,  79, 212, 322);
				setarray(.@mapy[0], 314, 284, 140,  70, 166);
			}
			.@i = atoi(charat(strnpcinfo(NPC_MAP), 9)) -1;
			close2;
			warp(.@map$, .@mapx[.@i], .@mapy[.@i]);
			end;
			close;
		} else {
			mes("É muito assustador tocar em coisas desconhecidas.");
			close;
		}
	}
}

// ------------------------------------------------------------------
// - [ Duplicações (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,280,391,3	duplicate(SunflowerSE)	Girasol Misterioso#01	4_BLUE_FLOWER
// Andlangr
schg_cas02,174,328,3	duplicate(SunflowerSE)	Girasol Misterioso#02	4_BLUE_FLOWER
// Viblainn
schg_cas03,25,22,3	duplicate(SunflowerSE)	Girasol Misterioso#03	4_BLUE_FLOWER
// Hljod
schg_cas04,280,391,3	duplicate(SunflowerSE)	Girasol Misterioso#04	4_BLUE_FLOWER
// Skidbladnir
schg_cas05,280,391,3	duplicate(SunflowerSE)	Girasol Misterioso#05	4_BLUE_FLOWER

// ------------------------------------------------------------------
// - [ Duplicações (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,157,345,3	duplicate(SunflowerSE)	Girasol Misterioso#06	4_RED_FLOWER
// Cyr
arug_cas02,350,294,3	duplicate(SunflowerSE)	Girasol Misterioso#07	4_RED_FLOWER
// Horn
arug_cas03,312,154,3	duplicate(SunflowerSE)	Girasol Misterioso#08	4_RED_FLOWER
// Gefn
arug_cas04,312,154,3	duplicate(SunflowerSE)	Girasol Misterioso#09	4_RED_FLOWER
// Banadis
arug_cas05,312,154,3	duplicate(SunflowerSE)	Girasol Misterioso#10	4_RED_FLOWER
