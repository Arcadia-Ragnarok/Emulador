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
| - Info: Invoca��o de Monstros em GlastHeim                        |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Glast ] -
// ------------------------------------------------------------------
glast_01,380,304,0	warp	glastwarp_1	3,3,gef_fild06,22,304
glast_01,51,108,0	warp	glastwarp_2	1,1,gl_step,12,7
glast_01,200,137,0	warp	glastwarp_3	1,1,gl_church,156,7
glast_01,77,193,0	warp	glastwarp_4	1,1,gl_knt01,150,15
glast_01,200,297,0	warp	glastwarp_5	1,1,gl_cas01,199,29
glast_01,179,360,0	warp	glastwarp_6	1,1,gl_in01,80,174
glast_01,162,330,0	warp	glastwarp_7	1,1,gl_in01,77,68
glast_01,220,360,0	warp	glastwarp_8	1,1,gl_in01,110,125
glast_01,237,330,0	warp	glastwarp_9	1,1,gl_in01,122,59
glast_01,199,322,0	warp	glastwarp_10	1,1,gl_cas02,104,189

// ------------------------------------------------------------------
// - [ GL_Cas ] -
// ------------------------------------------------------------------
gl_cas01,200,18,	warp	glcaswarp_1	1,1,glast_01,200,294
gl_cas01,149,314,	warp	glcaswarp_2	1,1,gl_prison,14,70
gl_cas01,371,301,	warp	glcaswarp_3	1,1,gl_prison,14,70
gl_cas01,185,236,	warp	glcaswarp_4	2,1,gl_cas01,163,191
gl_cas01,215,236,	warp	glcaswarp_5	1,1,gl_cas01,238,192
gl_cas01,167,191,	warp	glcaswarp_6	1,1,gl_prison,14,70
gl_cas01,234,192,	warp	glcaswarp_7	1,1,gl_prison,14,70
gl_cas01,200,165,	warp	glcaswarp_8	1,1,gl_cas02,104,25
gl_cas01,135,40,	warp	glcaswarp_9	1,1,gl_cas01,144,314
gl_cas01,372,39,	warp	glcaswarp_10	1,1,gl_cas01,367,301

// ------------------------------------------------------------------
gl_cas02,104,15,0	warp	glcaswarp_11	1,1,gl_cas01,200,160
gl_cas02,104,193,0	warp	glcaswarp_12	1,1,glast_01,199,325

// ------------------------------------------------------------------
// - [ Gl_Church ]
// ------------------------------------------------------------------
gl_church,156,4,0	warp	glchurch_1	1,1,glast_01,200,134
gl_church,16,299,0	warp	glchurch_2	1,1,gl_chyard,147,284
gl_church,301,46,0	warp	glchurch_3	1,1,gl_chyard,147,15

// ------------------------------------------------------------------
// - [ Gl_Chyard ] -
// ------------------------------------------------------------------
gl_chyard,147,287,0	warp	glchyardwarp_1	1,1,gl_church,16,295
gl_chyard,147,12,0	warp	glchyardwarp_2	1,1,gl_church,295,46
gl_chyard,12,149,0	warp	glchyardwarp_3	1,1,gl_sew02,29,270

// ------------------------------------------------------------------
// - [ Gl_Dun ] -
// ------------------------------------------------------------------
gl_dun01,133,277,0	warp	gldunwarp_1	1,1,gl_sew04,101,78
gl_dun01,225,18,0	warp	gldunwarp_2	1,1,gl_dun02,224,274

// ------------------------------------------------------------------
gl_dun02,224,277,0	warp	gldunwarp_3	1,1,gl_dun01,225,22

// ------------------------------------------------------------------
// - [ Gl_In ] -
// ------------------------------------------------------------------
gl_in01,81,68,0	warp	glinwarp_1	1,1,glast_01,165,330
gl_in01,118,59,0	warp	glinwarp_2	1,1,glast_01,234,330
gl_in01,83,174,0	warp	glinwarp_3	1,1,glast_01,181,357
gl_in01,106,125,0	warp	glinwarp_4	1,1,glast_01,219,357

// ------------------------------------------------------------------
// - [ Gl_Knt ] -
// ------------------------------------------------------------------
gl_knt01,150,6,0	warp	glkntwarp_1	2,2,glast_01,74,193
gl_knt01,12,148,0	warp	glkntwarp_2	1,1,gl_knt02,15,140
gl_knt01,287,144,0	warp	glkntwarp_3	1,1,gl_knt02,283,140
gl_knt01,150,291,0	warp	glkntwarp_4	1,1,gl_knt02,157,287
gl_knt01,231,197,0	warp	glkntwarp_5	1,1,gl_sew02,296,22
gl_knt01,128,292,0	warp	glkntwarp_6	1,1,gl_knt01,104,199
gl_knt01,104,204,0	warp	glkntwarp_7	1,1,gl_knt01,123,292

// ------------------------------------------------------------------
gl_knt02,10,138,0	warp	glkntwarp_8	1,1,gl_knt01,7,148
gl_knt02,157,292,0	warp	glkntwarp_9	1,1,gl_knt01,150,286
gl_knt02,289,138,0	warp	glkntwarp_10	1,1,gl_knt01,292,144

// ------------------------------------------------------------------
// - [ Gl_Prision ] -
// ------------------------------------------------------------------
gl_prison,149,183,0	warp	glprisonwarp_1	1,1,gl_prison1,150,14

gl_prison,11,70,0	script	glprisonwarp_2	WARPNPC,1,1,{
	switch (rand(4)) {
		case 0: warp("gl_cas01",163,193); end;
		case 1: warp("gl_cas01",238,192); end;
		case 2: warp("gl_cas01",144,314); end;
		case 3: warp("gl_cas01",367,301); end;
	}
}

// ------------------------------------------------------------------
gl_prison1,150,10,0	warp	glprisonwarp_3	1,1,gl_prison,149,178
gl_prison1,62,187,0	warp	glprisonwarp_4	1,1,gl_sew01,258,255

// ------------------------------------------------------------------
// - [ Gl_Sew ] -
// ------------------------------------------------------------------
gl_sew01,258,258,0	warp	glsewwarp_1	1,1,gl_prison1,61,183
gl_sew01,19,21,0	warp	glsewwarp_2	1,1,gl_sew02,108,291

// ------------------------------------------------------------------
gl_sew02,107,292,0	warp	glsewwarp_3	1,1,gl_sew01,19,24
gl_sew02,30,273,0	warp	glsewwarp_4	1,1,gl_chyard,15,149
gl_sew02,16,26,0	warp	glsewwarp_5	1,1,gl_prison1,61,183
gl_sew02,299,294,0	warp	glsewwarp_6	1,1,gl_sew03,171,283
gl_sew02,290,156,0	warp	glsewwarp_7	1,1,gl_step,117,124
gl_sew02,296,18,0	warp	glsewwarp_8	1,1,gl_knt01,231,192

// ------------------------------------------------------------------
gl_sew03,171,286,0	warp	glsewwarp_9	1,1,gl_sew02,295,294
gl_sew03,64,10,0	warp	glsewwarp_10	1,1,gl_sew04,68,277

// ------------------------------------------------------------------
gl_sew04,68,280,0	warp	glsewwarp_11	1,1,gl_sew03,64,13
gl_sew04,104,78,0	warp	glsewwarp_12	1,1,gl_dun01,133,271

// ------------------------------------------------------------------
// - [ Gl_Step ] -
// ------------------------------------------------------------------
gl_step,8,7,0	warp	glstepwarp_1	1,1,glast_01,54,108
gl_step,120,124,0	warp	glstepwarp_2	1,1,gl_sew02,285,158
