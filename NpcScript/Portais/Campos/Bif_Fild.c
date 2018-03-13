/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Potais nos Campos da Fonteira                             |
\*-----------------------------------------------------------------*/

bif_fild01,318,48,0	warp	biffildwarp_1	1,1,splendide,271,386

// ------------------------------------------------------------------
bif_fild02,292,351,0	warp	biffildwarp_2	1,1,ecl_fild01,205,76

-	script	biffildwarp_3	FAKE_NPC,2,2,{
	mes "Voc� ver um pequeno buraco um jardim de luminoso.";
	next;
	if(select("Investigar","Que buraco � esse?") == 1) {
		mes "Quando voc� bate na porta-como a coisa apenas para o divertimento.";
		mes "A porta estala ao abrir e voc� sente alguma for�a misteriosa que puxa-o para dentro.";
		close2;
		switch(atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),12))) {
			case 4: warp ("mora",179,74); end;
			case 5: warp ("mora",22,157); end;
			case 6: warp ("mora",58,27); end;
		}
	}
}

bif_fild02,285,332,0	duplicate(biffildwarp_3)	Pequeno Buraco#biffildwarp_4	CLEAR_NPC
bif_fild02,95,310,0	duplicate(biffildwarp_3)	Pequeno Buraco#biffildwarp_5	CLEAR_NPC
bif_fild02,171,161,0	duplicate(biffildwarp_3)	Pequeno Buraco#biffildwarp_6	CLEAR_NPC
