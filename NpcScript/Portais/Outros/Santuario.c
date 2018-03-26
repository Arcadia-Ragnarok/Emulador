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
| - Info: Portais no Santuário de Rachel                            |
\*-----------------------------------------------------------------*/

ra_temin,130,93,0	warp	rateminwarp_1	1,1,ra_temin,239,258
ra_temin,206,93,0	warp	rateminwarp_2	1,1,ra_temin,312,258
ra_temin,275,332,0	warp	rateminwarp_3	1,1,ra_temin,27,305
ra_temin,275,243,0	warp	rateminwarp_4	1,1,ra_temin,131,131
ra_temin,169,18,0	warp	rateminwarp_5	1,1,ra_temple,119,175
ra_temin,239,253,0	warp	rateminwarp_6	1,1,ra_temin,130,88
ra_temin,312,253,0	warp	rateminwarp_7	1,1,ra_temin,206,88
ra_temin,27,299,0	warp	rateminwarp_8	1,1,ra_temin,275,328

ra_temin,85,131,0	script	volWarp	FAKE_NPC,5,0,{
	OnTouch:
	if ((aru_vol != 3) && (aru_vol != 4)) { warp("ra_temin",85,137); }
	end;
}

ra_temin,82,131,0	script	volWarp2	FAKE_NPC,5,0,{
	OnTouch:
	if (aru_vol != 4) { warp("ra_temin",85,137); }
	end;
}

ra_temin,82,127,0	script	volWarp3	FAKE_NPC,5,1,{
	OnTouch:
	if (aru_vol == 5) { warp("ra_temin",84,124); }
	end;
}

// ------------------------------------------------------------------
ra_temsky,99,118,0	warp	ratemskywarp_1	1,1,ra_temsky,99,140
ra_temsky,112,143,0	warp	ratemskywarp_2	1,1,ra_temsky,141,139
ra_temsky,87,143,0	warp	ratemskywarp_3	1,1,ra_temsky,58,139
ra_temsky,99,8,0	warp	ratemskywarp_4	1,1,ra_temin,275,231
ra_temsky,99,135,0	warp	ratemskywarp_5	1,1,ra_temsky,99,113
ra_temsky,137,139,0	warp	ratemskywarp_6	1,1,ra_temsky,109,143
ra_temsky,62,139,0	warp	ratemskywarp_7	1,1,ra_temsky,91,143

// ------------------------------------------------------------------
ra_temple,120,22,0	warp	ratemplewarp	1,1,rachel,150,243

// ------------------------------------------------------------------
que_temsky,99,7,0	warp	quetemskyout	1,1,ra_temin,276,231
