/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Desenvolvimento: Spell Master                                   |
| - Nota: Potais em Jawaii                                          | 
\*-----------------------------------------------------------------*/

jawaii,192,215,0	warp	jawaiiwarp_1	1,1,jawaii_in,28,94

// ------------------------------------------------------------------
jawaii_in,90,78,0	warp	jawaiiwarp_2	1,1,jawaii,115,172
jawaii_in,88,117,0	warp	jawaiiwarp_3	1,1,jawaii,111,186
jawaii_in,132,107,0	warp	jawaiiwarp_4	1,1,jawaii,114,196
jawaii_in,113,61,0	warp	jawaiiwarp_5	1,1,jawaii,136,203
jawaii_in,27,91,4	script	jawaiiwarp_6	WARPNPC,1,1,{
	if (getpartnerid() > 0) { end; }
	else { warp ("jawaii_in",192,218); end; }
}
