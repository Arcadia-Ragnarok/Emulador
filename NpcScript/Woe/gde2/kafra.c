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
| - Info: Funcionárias Kafra na WOE 2.0                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	KafraSE	FAKE_NPC,{
	cutin("kafra_01", 2);
	.@guild = getcastledata(strnpcinfo(NPC_NAME_HIDDEN), 1);
	if (getcharid(CHARID_GUILD) == .@guild && getgdskilllv(.@guild, GD_KAFRACONTRACT)) {
		mes("[Funcionária Kafra]\n"
			"Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + ", membro da Guilda ^FF0000" + getguildname(.@guild) + "^000000!\n"
			"A Corporação Kafra estará pronta para ajudar onde quer que esteja!");
		next;
		switch(select("Usar Armazém", "Usar Serviço de Teleporte", "Cancelar")) {
			case 1:
			if (basicskillcheck() && getskilllv("NV_BASIC") < 6) {
				mes("[Funcionária Kafra]\n"
					"Sinto muito, mas você deve possuir pelo menos as Habilidades Básicas no nível 6 para utilizar o Armazém.");
			} else {
				if (#kafra_code) {
					mes("[Funcionária Kafra]\n"
						"Digite a senha do seu armazém");
					input(.@storagecode);
					next;
					if (.@storagecode != #kafra_code) {
						mes("[Funcionária Kafra]\n"
							"A senha digitada está incorreta.");
						break;
					}
				}
				openstorage;
			}
			break;
			case 2:
			mes("[Funcionária Kafra]\n"
				"Por favor, me diga o seu destino.");
			next;
			if (compare(strnpcinfo(NPC_NAME_HIDDEN), "arug")) {
				setarray(.@map$[0], "Rachel", "rachel");
				setarray(.@coord[0], 115, 125);
			} else {
				setarray(.@des$[0], "Juno", "yuno");
				setarray(.@coord[0], 158, 125);
			}
			mes("[Funcionária Kafra]\n"
				"Deseja ser envia" + (Sex == SEX_MALE ? "o" : "a") + " para " + .@map$[0] + ".");
			next;
			if (select("Sim por favor", "Cancelar")) {
				warp(.@map$[1], .@coord[0], .@coord[1]);
			}
			break;
			case 3:
			mes("[Funcionária Kafra]\n"
				"Onde você for, a Kafra estará lá para te ajudar!");
			break;
		}
		close2;
		cutin("", 255);
		end;
	} else {
		mes("[Funcionária Kafra]\n"
			"Me desculpe, mas eu fui contratada exclusivamente para servir aos membros do clã ^FF0000" + getguildname(.@guild) + "^000000."
			"Você terá que falar com outra Funcionária Kafra para lhe ajudar...");
		close2;
		cutin("", 255);
		end;
	}

	OnInit:
	/*
	if (!getcastledata(strnpcinfo(NPC_NAME_HIDDEN), 9)) {
		disablenpc(strnpcinfo(NPC_NAME));
	}
	*/
	end;
}

// ------------------------------------------------------------------
// - [ Duplicações (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,31,362,3	duplicate(KafraSE)	Funcionária Kafra#arug_cas01	4_F_KAFRA1
// Cyr
arug_cas02,354,326,3	duplicate(KafraSE)	Funcionária Kafra#arug_cas02	4_F_KAFRA1
// Horn
arug_cas03,315,98,5	duplicate(KafraSE)	Funcionária Kafra#arug_cas03	4_F_KAFRA1
// Gefn
arug_cas04,315,98,5	duplicate(KafraSE)	Funcionária Kafra#arug_cas04	4_F_KAFRA1
// Banadis
arug_cas05,315,98,5	duplicate(KafraSE)	Funcionária Kafra#arug_cas05	4_F_KAFRA1

// ------------------------------------------------------------------
// - [ Duplicações (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,300,287,5	duplicate(KafraSE)	Funcionária Kafra#schg_cas01	4_F_KAFRA1
// Andlangr
schg_cas02,131,365,3	duplicate(KafraSE)	Funcionária Kafra#schg_cas02	4_F_KAFRA1
// Viblainn
schg_cas03,50,50,3	duplicate(KafraSE)	Funcionária Kafra#schg_cas03	4_F_KAFRA1
// Hljod
schg_cas04,300,287,5	duplicate(KafraSE)	Funcionária Kafra#schg_cas04	4_F_KAFRA1
// Skidbladnir
schg_cas05,300,287,5	duplicate(KafraSE)	Funcionária Kafra#schg_cas05	4_F_KAFRA1

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - (05/05/2018) [Spell Master]
// * Modificado e adaptado para o código fonte do emulador Arcadia
