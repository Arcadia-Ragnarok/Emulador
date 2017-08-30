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
| - Nota: Potais na Floresta Encantada                              |
\*-----------------------------------------------------------------*/

mosk_dun01,189,42,0	warp	moskwarp_1	1,1,mosk_fild02,190,254

mosk_dun01,207,276,3	script	Pedra Marcada#moskwarp_2	HIDDEN_NPC,{
	mes "- Está escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que avaçam pode ser sofrido, mas por ser corajoso de coração, esses que movem atrás permanecerão seguros.";
	mes "Se você tiver coragem, avance.";
	mes "Caso contrário, pise para trás. -^000000";
	next;
	if(select("Avançar.:Ficar.") == 1) {
		mes "- Você segue ao modo de antes. -";
		close2;
		warp ("mosk_dun02",165,30);
		end;
	}
	mes "- Você não avança. -";
	close;
}

mosk_dun01,264,191,3	script	Pedra Marcada#moskwarp_3	HIDDEN_NPC,{
	mes "- Está escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que avaçam pode ser sofrido.";
	mes "Mas por ser corajoso de coração, esses que movem atrás permanecerão seguros.";
	mes "Se você tiver coragem, avance.  -^000000";
	next;
	if(select("Avançar:Ficar") == 1) {
		mes "- Você segue ao modo de antes. -";
		close2;
		warp ("mosk_dun03",117,36);
		end;
	}
	mes "- Você não avança. -";
	close;
}

// ------------------------------------------------------------------
mosk_dun02,168,28,3	script	Pedra Marcada#moskwarp_4	HIDDEN_NPC,{
	mes "- Está escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que avaçam pode ser sofrido.";
	mes "Mas por ser corajoso de coração, esses que movem atrás permanecerão seguros.";
	mes "Se você tiver coragem, avance.  -^000000";
	next;
	if(select("Avançar:Ficar.") == 1) {
		mes "- Você segue ao modo de antes. -";
		close2;
		warp ("mosk_dun01",201,269);
		end;
	}
	mes "- Você não avança. -";
	close;
}

mosk_dun02,268,117,3	script	Pedra Marcada#moskwarp_5	HIDDEN_NPC,{
	mes "- Está escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que avaçam pode ser sofrido.";
	mes "Mas por ser corajoso de coração, esses que movem atrás permanecerão seguros.";
	mes "Se você tiver coragem, avance.  -^000000";
	next;
	if(select("Avançar.:Ficar.") == 1) {
		mes "- Você segue ao modo de antes. -";
		close2;
		warp ("mosk_dun03",32,135);
		end;
	}
	mes "- Você não avança. -";
	close;
}

// ------------------------------------------------------------------
mosk_dun03,27,131,3	script	Pedra Marcada#moskwarp_6	HIDDEN_NPC,{
	mes "- Está escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que avaçam pode ser sofrido.";
	mes "Mas por ser corajoso de coração, esses que movem atrás permanecerão seguros.";
	mes "Se você tiver coragem, avance.  -^000000";
	next;
	if(select("Para trás.:Ficar.") == 1) {
		mes "- Você sente perigo e decide voltar -";
		close2;
		warp ("mosk_dun02",262,118);
		end;
	}
	mes "- Você decide Ficar. -";
	close;
}

mosk_dun03,119,46,3	script	Pedra Marcada#moskwarp_7	HIDDEN_NPC,{
	mes "- Está escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que avaçam pode ser sofrido.";
	mes "Mas por ser corajoso de coração, esses que movem atrás permanecerão seguros.";
	mes "Se você tiver coragem, avance.  -^000000";
	next;
	if(select("Para trás.:Ficar.") == 1) {
		mes "- Você sente perigo e decide voltar -";
		close2;
		warp ("mosk_dun01",257,190);
		end;
	}
	mes "- Você decide Ficar. -";
	close;
}
