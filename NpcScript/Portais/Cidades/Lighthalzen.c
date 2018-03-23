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
| - Info: Potais em Lighthalzen                                     |
\*-----------------------------------------------------------------*/

lighthalzen,308,76,0	warp	lighthalzenwarp_1	1,1,airplane,224,58
lighthalzen,294,76,0	warp	lighthalzenwarp_2	1,1,lhz_airport,143,53
lighthalzen,322,320,0	warp	lighthalzenwarp_3	1,1,lhz_in03,15,162
lighthalzen,101,248,0	warp	lighthalzenwarp_4	1,1,lhz_in01,111,126
lighthalzen,106,248,0	warp	lighthalzenwarp_5	1,1,lhz_in01,116,126
lighthalzen,198,257,0	warp	lighthalzenwarp_6	1,1,lhz_in02,39,28
lighthalzen,236,276,0	warp	lighthalzenwarp_7	1,1,lhz_in02,133,199
lighthalzen,238,220,0	warp	lighthalzenwarp_8	1,1,lhz_in02,28,270
lighthalzen,93,110,0	warp	lighthalzenwarp_9	1,1,lhz_in02,104,26
lighthalzen,197,36,0	warp	lighthalzenwarp_10	1,1,lhz_in02,284,30
lighthalzen,196,46,0	warp	lighthalzenwarp_11	1,1,lhz_in02,282,83
lighthalzen,159,133,0	warp	lighthalzenwarp_12	1,1,lhz_in02,232,265
lighthalzen,198,163,0	warp	lighthalzenwarp_13	1,1,lhz_in02,21,195
lighthalzen,50,86,0	warp	lighthalzenwarp_14	1,1,lhz_in03,45,31
lighthalzen,251,299,0	warp	lighthalzenwarp_15	1,1,lhz_in03,97,21
lighthalzen,324,301,0	warp	lighthalzenwarp_16	1,1,lhz_in03,241,100
lighthalzen,345,259,0	warp	lighthalzenwarp_17	1,1,lhz_in03,14,218
lighthalzen,345,231,0	warp	lighthalzenwarp_18	1,1,lhz_in03,188,15
lighthalzen,340,240,0	warp	lighthalzenwarp_19	1,1,lhz_in03,180,86
lighthalzen,267,75,0	warp	lighthalzenwarp_20	1,1,lhz_airport,142,15
lighthalzen,214,329,0	warp	lighthalzenwarp_21	1,1,lhz_fild01,210,23
lighthalzen,188,204,0	warp	lighthalzenwarp_22	1,1,kh_mansion,84,49
lighthalzen,52,132,0	warp	lighthalzenwarp_23	1,1,job3_gen01,45,50
lighthalzen,41,52,0	warp	lighthalzenwarp_24	1,1,s_atelier,18,72

lighthalzen,313,301,0	script	#lighthalzenwarp_25	HIDDEN_NPC,{
	mes "^3355FFVocê achou algum tipo de tubo de esgoto grande.";
	mes "Naturalmente, o fedor que emana de dentro do tubo é um pouco desgradável.^000000";
	if (lhz_sincube > 10) {
		next;
		if (select("Entrar","Cancelar") == 1) { warp("lhz_cube",231,17); close2; end; }
	}
	close;
}

// ------------------------------------------------------------------
lhz_in01,43,114,0	warp	lighthalzenwarp_25	1,1,lhz_que01,97,30
lhz_in01,278,132,0	warp	lighthalzenwarp_26	1,1,lhz_in01,43,120
lhz_in01,88,215,0	warp	lighthalzenwarp_27	1,1,lhz_in01,106,18
lhz_in01,140,215,0	warp	lighthalzenwarp_28	1,1,lhz_in01,158,18
lhz_in01,149,179,0	warp	lighthalzenwarp_29	1,1,lhz_in01,15,24
lhz_in01,76,254,0	warp	lighthalzenwarp_30	1,1,lhz_in01,100,52
lhz_in01,188,254,0	warp	lighthalzenwarp_31	1,1,lhz_in01,191,52
lhz_in01,231,226,0	warp	lighthalzenwarp_32	1,1,lhz_in01,257,226
lhz_in01,40,224,0	warp	lighthalzenwarp_33	1,1,lhz_in01,19,129
lhz_in01,43,144,0	warp	lighthalzenwarp_34	1,1,lhz_in01,278,161
lhz_in01,58,129,0	warp	lighthalzenwarp_35	1,1,lhz_in01,196,127
lhz_in01,111,121,0	warp	lighthalzenwarp_36	1,1,lighthalzen,101,243
lhz_in01,116,121,0	warp	lighthalzenwarp_37	1,1,lighthalzen,106,243
lhz_in01,106,15,0	warp	lighthalzenwarp_38	1,1,lhz_in01,88,211
lhz_in01,158,15,0	warp	lighthalzenwarp_39	1,1,lhz_in01,140,211
lhz_in01,11,24,0	warp	lighthalzenwarp_40	1,1,lhz_in01,145,178
lhz_in01,98,55,0	warp	lighthalzenwarp_41	1,1,lhz_in01,76,250
lhz_in01,194,55,0	warp	lighthalzenwarp_42	1,1,lhz_in01,188,250
lhz_in01,251,226,0	warp	lighthalzenwarp_43	1,1,lhz_in01,225,226
lhz_in01,15,129,0	warp	lighthalzenwarp_44	1,1,lhz_in01,34,224
lhz_in01,278,157,0	warp	lighthalzenwarp_45	1,1,lhz_in01,43,139
lhz_in01,191,127,0	warp	lighthalzenwarp_46	1,1,lhz_in01,53,129

// ------------------------------------------------------------------
lhz_in02,13,284,0	warp	lighthalzenwarp_47	1,1,lhz_in02,89,285
lhz_in02,114,272,0	warp	lighthalzenwarp_48	1,1,lhz_in02,153,282
lhz_in02,39,204,0	warp	lighthalzenwarp_49	1,1,lhz_in02,41,136
lhz_in02,13,155,0	warp	lighthalzenwarp_50	1,1,lhz_in02,84,223
lhz_in02,49,154,0	warp	lighthalzenwarp_51	1,1,lhz_in02,98,155
lhz_in02,94,212,0	warp	lighthalzenwarp_52	1,1,lhz_in02,94,144
lhz_in02,210,284,0	warp	lighthalzenwarp_53	1,1,lhz_in02,241,219
lhz_in02,250,278,0	warp	lighthalzenwarp_54	1,1,lhz_in02,265,278
lhz_in02,254,212,0	warp	lighthalzenwarp_55	1,1,lhz_in02,273,212
lhz_in02,238,169,0	warp	lighthalzenwarp_56	1,1,lhz_in02,238,150
lhz_in02,231,182,0	warp	lighthalzenwarp_57	1,1,lhz_in02,212,182
lhz_in02,231,200,0	warp	lighthalzenwarp_58	1,1,lhz_in02,212,200
lhz_in02,265,14,0	warp	lighthalzenwarp_59	1,1,lhz_in02,269,82
lhz_in02,44,28,0	warp	lighthalzenwarp_60	1,1,lighthalzen,203,257
lhz_in02,129,199,0	warp	lighthalzenwarp_61	1,1,lighthalzen,232,275
lhz_in02,27,265,0	warp	lighthalzenwarp_62	1,1,lighthalzen,238,217
lhz_in02,108,26,0	warp	lighthalzenwarp_63	1,1,lighthalzen,96,110
lhz_in02,288,30,0	warp	lighthalzenwarp_64	1,1,lighthalzen,194,35
lhz_in02,282,79,0	warp	lighthalzenwarp_65	1,1,lighthalzen,194,48
lhz_in02,232,261,0	warp	lighthalzenwarp_66	1,1,lighthalzen,158,129
lhz_in02,21,191,0	warp	lighthalzenwarp_67	1,1,lighthalzen,202,160
lhz_in02,95,285,0	warp	lighthalzenwarp_68	1,1,lhz_in02,18,284
lhz_in02,149,282,0	warp	lighthalzenwarp_69	1,1,lhz_in02,109,272
lhz_in02,36,136,0	warp	lighthalzenwarp_70	1,1,lhz_in02,34,204
lhz_in02,79,223,0	warp	lighthalzenwarp_71	1,1,lhz_in02,17,155
lhz_in02,103,155,0	warp	lighthalzenwarp_72	1,1,lhz_in02,44,154
lhz_in02,89,144,0	warp	lighthalzenwarp_73	1,1,lhz_in02,89,212
lhz_in02,236,219,0	warp	lighthalzenwarp_74	1,1,lhz_in02,206,284
lhz_in02,261,278,0	warp	lighthalzenwarp_75	1,1,lhz_in02,246,278
lhz_in02,269,212,0	warp	lighthalzenwarp_76	1,1,lhz_in02,250,212
lhz_in02,238,154,0	warp	lighthalzenwarp_77	1,1,lhz_in02,238,173
lhz_in02,216,182,0	warp	lighthalzenwarp_78	1,1,lhz_in02,235,182
lhz_in02,216,200,0	warp	lighthalzenwarp_79	1,1,lhz_in02,235,200
lhz_in02,274,82,0	warp	lighthalzenwarp_80	1,1,lhz_in02,270,14

// ------------------------------------------------------------------
lhz_in03,12,162,0	warp	lighthalzenwarp_81	1,1,lighthalzen,321,322
lhz_in03,13,31,0	warp	lighthalzenwarp_82	1,1,lhz_in03,15,99
lhz_in03,134,14,0	warp	lighthalzenwarp_83	1,1,lhz_in03,125,90
lhz_in03,191,35,0	warp	lighthalzenwarp_84	1,1,lhz_in03,191,103
lhz_in03,257,83,0	warp	lighthalzenwarp_85	1,1,lhz_in03,255,14
lhz_in03,50,31,0	warp	lighthalzenwarp_86	1,1,lighthalzen,55,86
lhz_in03,93,21,0	warp	lighthalzenwarp_87	1,1,lighthalzen,247,299
lhz_in03,237,100,0	warp	lighthalzenwarp_88	1,1,lighthalzen,322,296
lhz_in03,10,216,0	warp	lighthalzenwarp_89	1,1,lighthalzen,341,261
lhz_in03,188,11,0	warp	lighthalzenwarp_90	1,1,lighthalzen,344,227
lhz_in03,180,90,0	warp	lighthalzenwarp_91	1,1,lighthalzen,339,245
lhz_in03,20,99,0	warp	lighthalzenwarp_92	1,1,lhz_in03,17,31
lhz_in03,120,90,0	warp	lighthalzenwarp_93	1,1,lhz_in03,130,14
lhz_in03,190,100,0	warp	lighthalzenwarp_94	1,1,lhz_in03,190,31
lhz_in03,250,14,0	warp	lighthalzenwarp_95	1,1,lhz_in03,252,83
