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
| - Nota: Potais em Malaya                                          |
\*-----------------------------------------------------------------*/

malaya,370,277,0	warp	malayawarp_1	1,1,ma_fild01,40,272
malaya,309,70,0	warp	malayawarp_2	1,1,ma_in01,108,92

malaya,178,211,0	script	malayawarp_3	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 10) { mes "A porta está fechada"; close; }
	else { warp ("ma_in01",24,80); end; }
}

malaya,112,212,0	script	malayawarp_4	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 20) { mes "A porta está fechada"; close; }
	else { warp ("ma_in01",83,16); end; }
}

malaya,299,167,0	script	malayawarp_5	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 20) { mes "A porta está fechada"; close; }
	else { warp ("ma_in01",12,24); end; }
}

malaya,261,240,0	script	malayawarp_6	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 20) { mes "A porta está fechada"; close; }
	else { warp ("ma_in01",126,20); end; }
}

malaya,300,211,0	script	malayawarp_7	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 10) { mes "A porta está fechada"; close; }
	else { warp ("ma_in01",36,152); end; }
}


// ------------------------------------------------------------------
ma_in01,24,77,0	warp	malayawarp_8	1,1,malaya,178,208
ma_in01,86,16,0	warp	malayawarp_9	1,1,malaya,115,212
ma_in01,33,152,0	warp	malayawarp_10	1,1,malaya,52,75
ma_in01,105,92,0	warp	malayawarp_11	1,1,malaya,310,67
ma_in01,9,24,0	warp	malayawarp_12	1,1,malaya,296,167
ma_in01,126,17,0	warp	malayawarp_13	1,1,malaya,261,237
ma_in01,105,160,0	warp	malayawarp_14	1,1,ma_fild01,248,190

// ------------------------------------------------------------------
ma_scene01,140,80,0	warp	mascenewarp	1,1,ma_fild01,288,55

// ------------------------------------------------------------------
ma_zif01,30,22,0	warp	JeepneyWarp_1	1,1,malaya,241,238
ma_zif02,30,22,0	warp	JeepneyWarp_2	1,1,malaya,71,43
ma_zif03,30,22,0	warp	JeepneyWarp_3	1,1,malaya,284,129
ma_zif04,30,22,0	warp	JeepneyWarp_4	1,1,malaya,134,247
ma_zif05,30,22,0	warp	JeepneyWarp_5	1,1,malaya,341,150
ma_zif06,30,22,0	warp	JeepneyWarp_6	1,1,malaya,294,293
ma_zif07,30,22,0	warp	JeepneyWarp_7	1,1,malaya,239,221
ma_zif08,30,22,0	warp	JeepneyWarp_8	1,1,malaya,59,246
ma_zif09,30,22,0	warp	JeepneyWarp_9	1,1,malaya,254,68
