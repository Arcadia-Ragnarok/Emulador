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
| - Copyright: Spell Master (?/?/2011)                              |
| - Info: Construção da Runas Guardiãs na WOE 2.0                   |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	GuardianStoneSE	FAKE_NPC,{
	.@rune = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 0));
	.@data$ = "$agitse_" + strnpcinfo(NPC_NAME_HIDDEN);

	if (getcharid(CHARID_GUILD) == getcastledata(strnpcinfo(NPC_NAME_HIDDEN), 1)) {
		mes("^3355FFVocê precisa dos seguintes materiais para reconstruir a Runa Guardiã destruída.^000000");
		next;
		mes("1 Oridecon\n"
			"1 Elunium\n"
			"30 Pedras\n"
			"5 Gemas Azuis\n"
			"5 Gemas Amarelas\n"
			"5 Gemas Vermelhas");
		next;
		if (select("Cancelar", "Continuar") == 1) {
			mes("^3355FFTrabalho Cancelado.^000000");
			close;
		} else {
			if ((!countitem(Oridecon)) && (!countitem(Elunium)) && (countitem(Stone) < 30) && (countitem(Blue_Gemstone) < 5) && (countitem(Yellow_Gemstone) < 5) && (countitem(Red_Gemstone) < 5)) {
				mes("^3355FFVocê não possui os materiais suficientes para reparar a Runa Guardiã.^000000");
				close;
			} else {
				mes("^3355FFOrganizar Pedras,\n"
					"Elunium e Oridecon,\n"
					"nessa ordem, no centro.\n"
					"Então você deve organizar as pedras encantadas para reconstruir a Runa Guardiã.^000000");
				next;
				switch (select("^777777Elunium^000000", "^777777Oridecon^000000", "Pedra")) {
					case 3:
					mes("^3355FFPedras foram colocados no centro.^000000");
					next;
					break;
					default: .@fail = 1; break;
				}
				switch (select("Elunium", "^777777Oridecon^000000", "^777777Pedra^000000")) {
					case 1:
					mes("^3355FFVocê enfileirou no centro Eluniuns.^000000");
					next;
					break;
					default: .@fail = 1; break;
				}
				switch (select("^777777Elunium^000000", "Oridecon", "^777777Pedra^000000")) {
					case 2:
					mes("^3355FFVocê cobriu o resto dos materiais com alguns Oridecons.^000000");
					next;
					break;
					default: .@fail = 1; break;
				}
				if (.@fail) {
					mes("Parece que você não entendeu a ordem correta.\n"
						"Terá que recomeçar.");
					close;
				} else {
					mes("^3355FFAgora você precisa organizar de acordo as Gemas encantadas.\n"
						"Você pode identificar suas propriedades mágicas por seu efeito.^000000");
					next;
					mes("^3355FFAs Gemas devem ser organizadas na ordem de acordo com suas propriedades e poder.^000000");
					while (true) {
						switch (rand(1, 3)) {
							case 1:
							specialeffect(EF_CHANGEFIRE);
							switch (select("^CC3300Gema Vermelha^000000", "Gema Amarela", "Gema Azul")) {
								case 1:
								mes("^00990EVocê adiciona o poder da Gema Vermelha a Runa.^000000");
								.@sucess += 1;
								specialeffect(EF_STEAL);
								next;
								break;
								default:
								.@fail = 1;
								break;
							}
							break;
							case 2:
							specialeffect(EF_CHANGEWIND);
							switch (select("Gema Vermelha","^CCCC00Gema Amarela^000000","Gema Azul")) {
								case 2:
								mes("^00990EVocê adiciona o poder da Gema Amarela a Runa.^000000");
								.@sucess += 1;
								specialeffect(EF_STEAL);
								next;
								break;
								default:
								.@fail = 1;
								break;
							}
							break;
							case 3:
							specialeffect(EF_CHANGECOLD);
							switch (select("Gema Vermelha","Gema Amarela","^0033CCGema Azul^000000")) {
								case 3:
								mes("^00990EVocê adiciona o poder da Gema Azul a Runa.^000000");
								.@sucess += 1;
								specialeffect(EF_STEAL);
								next;
								break;
								default:
								.@fail = 1;
								break;
							}
							break;
						}
						if (.@fail) {
							next;
							mes("^B0000A Runa não foi restaurada.\n"
								"Por causa de um conflito nos poderes mágicos das Gemas.^000000\n"
								"Você terá que recomeçar...");
							close;
						} else if (.@sucess >= 8) {
							if (getd(.@data$ + "[" + (.@rune - 1) + "]")) {
								mes("^B0000A Runa já está reparada.");
								close;
							} else if (!agitcheck2()) {
								mes("^3355FFÉ impossível reconstruir a Runa Guardiã.\n"
									"Por que o Emperium não está presente.^000000");
								close;
							} else {
								mes("^3355FFAs gemas foram arrumadas com sucesso.\n"
									"A Runa Guardiã poderá ser reparada.^000000");
								delitem(Oridecon, 1);
								delitem(Elunium, 1);
								delitem(Stone, 30);
								delitem(Blue_Gemstone, 5);
								delitem(Yellow_Gemstone, 5);
								delitem(Red_Gemstone, 5);

								specialeffect(EF_ICECRASH);
								disablenpc(strnpcinfo(NPC_NAME));
								donpcevent("RuneSE_" + .@rune + "#" + strnpcinfo(NPC_NAME_HIDDEN) + "::OnEnable");
								if (getd(.@data$ + "[0]") && getd(.@data$ + "[1]")) {
									mapannounce(strnpcinfo(NPC_MAP), "Todas as Runas Guardiãs foram erguidas, a defesa do Castelo foi reforçada!", bc_map, "0x00ff00");
								} else {
									mapannounce(strnpcinfo(NPC_MAP), "A " + strnpcinfo(NPC_NAME_VISIBLE) + " foi reconstruída com sucesso.", bc_map, "0x00ff00");
								}
								close;
							}
						}
					}
				}
			}
		}
	}
	end;

	OnInit:
	OnDisable:
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnEnable:
	enablenpc(strnpcinfo(NPC_NAME));
	specialeffect(EF_MAPPILLAR2);
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,211,234,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#arug_cas01	CLEAR_NPC
arug_cas01,308,189,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#arug_cas01	CLEAR_NPC
// Cyr
arug_cas02,33,168,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#arug_cas02	CLEAR_NPC
arug_cas02,245,168,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#arug_cas02	CLEAR_NPC
// Horn
arug_cas03,65,171,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#arug_cas03	CLEAR_NPC
arug_cas03,212,149,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#arug_cas03	CLEAR_NPC
// Gefn
arug_cas04,65,171,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#arug_cas04	CLEAR_NPC
arug_cas04,212,149,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#arug_cas04	CLEAR_NPC
// Banadis
arug_cas05,65,171,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#arug_cas05	CLEAR_NPC
arug_cas05,212,149,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#arug_cas05	CLEAR_NPC

// ------------------------------------------------------------------
// - [ Duplicações (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,27,36,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#schg_cas01	CLEAR_NPC
schg_cas01,208,75,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#schg_cas01	CLEAR_NPC
// Andlangr
schg_cas02,231,57,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#schg_cas02	CLEAR_NPC
schg_cas02,335,231,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#schg_cas02	CLEAR_NPC
// Viblainn
schg_cas03,242,309,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#schg_cas03	CLEAR_NPC
schg_cas03,376,250,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#schg_cas03	CLEAR_NPC
// Hljod
schg_cas04,27,36,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#schg_cas04	CLEAR_NPC
schg_cas04,208,75,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#schg_cas04	CLEAR_NPC
// Skidbladnir
schg_cas05,27,36,0	duplicate(GuardianStoneSE)	1º Runa Guardiã#schg_cas05	CLEAR_NPC
schg_cas05,208,75,0	duplicate(GuardianStoneSE)	2º Runa Guardiã#schg_cas05	CLEAR_NPC

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - (05/05/2018) [Spell Master]
// * Modificado e adaptado para o código fonte do emulador Arcadia
