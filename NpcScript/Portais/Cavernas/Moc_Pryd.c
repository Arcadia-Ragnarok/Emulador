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
| - Info: Potais na Pirâmide                                        |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Moc_Pryd ] -
// ------------------------------------------------------------------
moc_pryd01,195,9,0	warp	mocprydwarp_1	2,5,moc_ruins,60,161
moc_pryd01,10,195,0	warp	mocprydwarp_2	5,2,moc_pryd02,10,192
moc_pryd01,90,109,0	warp	mocprydwarp_3	1,2,moc_prydb1,100,185

// ------------------------------------------------------------------
moc_pryd02,10,195,0	warp	mocprydwarp_4	5,2,moc_pryd01,10,192
moc_pryd02,100,99,0	warp	mocprydwarp_5	3,2,moc_pryd03,100,92

// ------------------------------------------------------------------
moc_pryd03,100,97,0	warp	mocprydwarp_6	3,2,moc_pryd02,100,92
moc_pryd03,15,187,0	warp	mocprydwarp_7	2,3,moc_pryd04,18,187
moc_pryd03,12,15,0	warp	mocprydwarp_8	3,2,moc_pryd04,12,18
moc_pryd03,184,11,0	warp	mocprydwarp_9	2,3,moc_pryd04,181,11
moc_pryd03,188,184,0	warp	mocprydwarp_10	3,2,moc_pryd04,188,181

// ------------------------------------------------------------------
moc_pryd04,12,15,0	warp	mocprydwarp_11	3,2,moc_pryd03,12,18
moc_pryd04,15,187,0	warp	mocprydwarp_12	2,3,moc_pryd03,18,187
moc_pryd04,184,11,0	warp	mocprydwarp_13	2,3,moc_pryd03,181,11
moc_pryd04,188,184,0	warp	mocprydwarp_14	3,2,moc_pryd03,188,181

// ------------------------------------------------------------------
moc_pryd05,94,98,0	warp	mocprydwarp_15	2,1,moc_prydb1,100,57
moc_pryd05,223,9,0	warp	mocprydwarp_16	2,2,moc_pryd06,192,10

// ------------------------------------------------------------------
moc_pryd06,197,10,0	warp	mocprydwarp_17	2,3,moc_pryd05,220,9

// ------------------------------------------------------------------
// - [ Moc_PryDb (Guilda dos Gaturnos) ] -
// ------------------------------------------------------------------
moc_prydb1,100,55,0	warp	mocprydbwarp_1	2,1,moc_pryd05,94,96
moc_prydb1,100,191,0	warp	mocprydbwarp_2	2,2,moc_pryd01,90,105
moc_prydb1,88,115,0	warp	mocprydbwarp_3	2,6,moc_prydb1,56,115
moc_prydb1,59,115,0	warp	mocprydbwarp_4	2,6,moc_prydb1,92,115
moc_prydb1,111,115,0	warp	mocprydbwarp_5	2,6,moc_prydb1,145,115
moc_prydb1,142,115,0	warp	mocprydbwarp_6	2,6,moc_prydb1,108,115
moc_prydb1,100,104,0	warp	mocprydbwarp_7	5,2,moc_prydb1,100,74
moc_prydb1,100,77,0	warp	mocprydbwarp_8	5,2,moc_prydb1,100,107
