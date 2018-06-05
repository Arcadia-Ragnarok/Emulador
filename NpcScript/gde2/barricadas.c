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
| - Info: Constru��o das barricadas na WOE 2.0                      |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	DeviceSE	FAKE_NPC,{

	.@guild = getcastledata(strnpcinfo(NPC_NAME_HIDDEN), 1);
	.@value = atoi(charat(strnpcinfo(NPC_NAME_VISIBLE), 12));
	.@data$ = "$agitse_" + strnpcinfo(NPC_NAME_HIDDEN);

	if (getguildmaster(.@guild) == strcharinfo(PC_NAME)) {
		if (.@value == 1)      { .@name$ = "Primeiro"; }
		else if (.@value == 2) { .@name$ = "Segundo";  }
		else if (.@value == 3) { .@name$ = "Terceiro"; }

		mes("^3355FFOs Port�es Demolidos do Castelo podem ser reparados."
			"Mas voc� ter� que recolher os seguintes materiais.^000000");
		next;
		mes("^4D4DFF10 A�o\n"
			"30 Troncos\n"
			"5 Oridecon\n"
			"10 Emveretarcon.");
		next;
		if (select("Continuar", "Cancelar") == 2) {
			close;
		} else {
			if ((countitem(Wooden_Block) < 30) && (countitem(Steel) < 10) && (countitem(Emveretarcon) < 10) && (countitem(Oridecon) < 10)) {
				mes("^3355FFVoc� n�o pode tentar reparar o Port�o da Fortaleza.\n"
					"Se voc� n�o possuir todos os materiais necess�rios.^000000");
				close;
			} else {
				mes("^3355FFVoc� precisa de Troncos para reparar a estrutura de suporte.\n"
					"Oridecon para melhorar a resist�ncia do port�o,\n"
					"e Emveretarcon para basicamente manter tudo junto.^000000");
				.@rand = rand(10, 15);
				while (true) {
					next;
					switch (rand(4)) {
						case 0:
						mes("^3355FFA estrutura de suporte est� muito danificada.\n"
							"Consertar essa parte � a maior prioridade.^000000");
						next;
						switch (select("Tronco", "^777777A�o", "Emveretarcon", "Oridecon^000000")) {
							case 1:
							++.@repair;
							specialeffect(EF_REPAIRWEAPON, AREA, playerattached());
							mes("^00990A estrutura foi reparada com madeira.^000000");
							break;
							case 2:
							mes("^BB0000Voc� tentou usar A�o.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 3:
							mes("^BB0000Voc� tentou usar Emveretarcon.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 4:
							mes("^BB0000Voc� tentou usar Oridecon.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
						}
						break;
						case 1:
						mes("^3355FFOs danos a esse port�o causaram todas estas rachaduras.\n"
							"Voc� ter� que sold�-lo com algo.^000000");
						next;
						switch (select("^777777Tronco^000000", "A�o", "^777777Emveretarcon", "Oridecon^000000")) {
							case 1:
							mes("^BB0000Voc� tentou usar Tronco.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 2:
							++.@repair;
							specialeffect(EF_REPAIRWEAPON, AREA, playerattached());
							mes("^009900Voc� usou a�o para soldar todas as rachaduras.\n"
								"O port�o come�ou a aparentar estar mais s�lido.^000000");
							break;
							case 3:
							mes("^BB0000Voc� tentou usar Emveretarcon.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 4:
							mes("^BB0000Voc� tentou usar Oridecon.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
						}
						break;
						case 2:
						mes("^3355FFAgora voc� precisa ter certeza de que o port�o est� s�lido e firme.^000000");
						next;
						switch (select("^777777Tronco", "A�o^000000", "Emveretarcon", "^777777Oridecon^000000")) {
							case 1:
							mes("^BB0000Voc� tentou usar Tronco.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 2:
							mes("^BB0000Voc� tentou usar A�o.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 3:
							++.@repair;
							specialeffect(EF_REPAIRWEAPON, AREA, playerattached());
							mes("^009900Voc� conseguiu usar o emveretarcon para reparar muito do dano causado ao port�o.^000000");
							break;
							case 4:
							mes("^BB0000Voc� tentou usar Oridecon.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
						}
						break;
						case 3:
						mes("^3355FFParece que a resist�ncia do port�o precisa ser refor�ada com alguma coisa.^000000");
						next;
						switch (select("^777777Tronco", "A�o", "Emveretarcon^000000", "Oridecon")) {
							case 1:
							mes("^BB0000Voc� tentou usar Tronco.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 2:
							mes("^BB0000Voc� tentou usar A�o.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 3:
							mes("^BB0000Voc� tentou usar Emveretarcon.\n"
								"Mas n�o funcionou corretamente.\n"
								"Voc� deve tentar de outra forma.^000000");
							specialeffect(EF_CRASHEARTH, AREA, playerattached());
							close;
							case 4:
							++.@repair;
							specialeffect(EF_REPAIRWEAPON, AREA, playerattached());
							mes("^009900Voc� martelou o port�o com oridecon.\n"
								"Parece que funcionou.^000000");
							break;
						}
						break;
					}
					if (.@repair == .@rand) {
						if (!agitcheck2()) {
							mes("^3355FFInfelizmente, o Port�o do Castelo n�o pode ser reconstru�do.\n"
								"O Emperium n�o est� presente.^000000");
							close;
						} else {
							delitem(Wooden_Block, 30);
							delitem(Steel, 10);
							delitem(Emveretarcon, 10);
							delitem(Oridecon, 5);
							donpcevent("BarrierSE_" + .@value + "#" + strnpcinfo(NPC_NAME_HIDDEN) + "::OnEnable");
							disablenpc(strnpcinfo(NPC_NAME));
							mapannounce(strnpcinfo(NPC_NAME_HIDDEN), "O " + .@name$ + " Port�o do Castelo foi reconstru�do!", bc_map, "0x00ff00");
							if (.@value != 1) {
								donpcevent((.@value - 1) + "� Port�o#" + strnpcinfo(NPC_NAME_HIDDEN) + "::OnEnable");
							}
							next;
							mes("O port�o do castelo foi reparado!");
							close;
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
	end;
}

// ------------------------------------------------------------------
// - [ Duplica��es (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,247,52,0	duplicate(DeviceSE)	1� Port�o#arug_cas01	HIDDEN_NPC
arug_cas01,118,131,0	duplicate(DeviceSE)	2� Port�o#arug_cas01	HIDDEN_NPC
arug_cas01,82,172,0	duplicate(DeviceSE)	3� Port�o#arug_cas01	HIDDEN_NPC
// Cyr
arug_cas02,143,228,0	duplicate(DeviceSE)	1� Port�o#arug_cas02	HIDDEN_NPC
arug_cas02,118,356,0	duplicate(DeviceSE)	2� Port�o#arug_cas02	HIDDEN_NPC
arug_cas02,56,308,0	duplicate(DeviceSE)	3� Port�o#arug_cas02	HIDDEN_NPC
// Horn
arug_cas03,136,158,0	duplicate(DeviceSE)	1� Port�o#arug_cas03	HIDDEN_NPC
arug_cas03,135,212,0	duplicate(DeviceSE)	2� Port�o#arug_cas03	HIDDEN_NPC
arug_cas03,134,266,0	duplicate(DeviceSE)	3� Port�o#arug_cas03	HIDDEN_NPC
// Gefn
arug_cas04,136,158,0	duplicate(DeviceSE)	1� Port�o#arug_cas04	HIDDEN_NPC
arug_cas04,135,212,0	duplicate(DeviceSE)	2� Port�o#arug_cas04	HIDDEN_NPC
arug_cas04,134,266,0	duplicate(DeviceSE)	3� Port�o#arug_cas04	HIDDEN_NPC
// Bandis
arug_cas05,135,212,0	duplicate(DeviceSE)	2� Port�o#arug_cas05	HIDDEN_NPC
arug_cas05,134,266,0	duplicate(DeviceSE)	3� Port�o#arug_cas05	HIDDEN_NPC
arug_cas05,136,158,0	duplicate(DeviceSE)	1� Port�o#arug_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - [ Duplica��es (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,124,52,0	duplicate(DeviceSE)	1� Port�o#schg_cas01	HIDDEN_NPC
schg_cas01,128,157,0	duplicate(DeviceSE)	2� Port�o#schg_cas01	HIDDEN_NPC
schg_cas01,109,247,0	duplicate(DeviceSE)	3� Port�o#schg_cas01	HIDDEN_NPC
// Andlangr
schg_cas02,288,97,0	duplicate(DeviceSE)	1� Port�o#schg_cas02	HIDDEN_NPC
schg_cas02,230,209,0	duplicate(DeviceSE)	2� Port�o#schg_cas02	HIDDEN_NPC
schg_cas02,159,143,0	duplicate(DeviceSE)	3� Port�o#schg_cas02	HIDDEN_NPC
// Viblainn
schg_cas03,335,298,0	duplicate(DeviceSE)	1� Port�o#schg_cas03	HIDDEN_NPC
schg_cas03,200,227,0	duplicate(DeviceSE)	2� Port�o#schg_cas03	HIDDEN_NPC
schg_cas03,273,205,0	duplicate(DeviceSE)	3� Port�o#schg_cas03	HIDDEN_NPC
// Hljod
schg_cas04,124,52,0	duplicate(DeviceSE)	1� Port�o#schg_cas04	HIDDEN_NPC
schg_cas04,128,157,0	duplicate(DeviceSE)	2� Port�o#schg_cas04	HIDDEN_NPC
schg_cas04,109,247,0	duplicate(DeviceSE)	3� Port�o#schg_cas04	HIDDEN_NPC
// Skidbladnir
schg_cas05,124,52,0	duplicate(DeviceSE)	1� Port�o#schg_cas05	HIDDEN_NPC
schg_cas05,128,157,0	duplicate(DeviceSE)	2� Port�o#schg_cas05	HIDDEN_NPC
schg_cas05,109,247,0	duplicate(DeviceSE)	3� Port�o#schg_cas05	HIDDEN_NPC

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - (05/05/2018) [Spell Master]
// * Modificado e adaptado para o c�digo fonte do emulador Arcadia
