/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Portais no Acampamento do Vulcão de Thor                  |
\*-----------------------------------------------------------------*/

thor_camp,141,62,0	script	#thorWarp	FAKE_NPC,3,3,{
	OnTouch:
	if ((aru_vol > 13 && aru_vol < 17) || (aru_vol == 19)) {
		warp("thor_camp",156,67);
	}
	end;
}
thor_camp,172,72,0	duplicate(#thorWarp)	#thorWarp2	FAKE_NPC,3,3
thor_camp,172,38,0	duplicate(#thorWarp)	#thorWarp3	FAKE_NPC,3,3

que_thor,69,56,0	warp	#thorWarp4	2,2,thor_v02,146,84
que_thor,187,56,0	warp	#thorWarp5	2,2,thor_v02,146,84
