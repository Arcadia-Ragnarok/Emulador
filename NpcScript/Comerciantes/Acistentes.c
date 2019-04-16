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
| - Copyright: Spell Master (03/08/2014)                            |
| - Info: Compra de pergaminhos para acistentes.                    |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	MercenaryRent	FAKE_NPC,{
	mes("[Gerente do Cl�]\n"
		"Ol� " + strcharinfo(CHAR_NAME) + ".\n"
		"Sou responsavel pela contrata��o de acistentes de nosso cl�.\n"
		"Estaria enter�ad"+(Sex == SEX_MALE ? "o":"a")+" em algum?");
	if (strnpcinfo(NPC_MAP) == "prontera")  { .@mercenaryType$ = "SPEAR_MERC_GUILD"; .@mercenaryName$ = "Lanceiro"; }
	if (strnpcinfo(NPC_MAP) == "izlude")    { .@mercenaryType$ = "SWORD_MERC_GUILD"; .@mercenaryName$ = "Espadachim"; }
	if (strnpcinfo(NPC_MAP) == "pay_arche") { .@mercenaryType$ = "ARCH_MERC_GUILD";  .@mercenaryName$ = "Arqueiro"; }
	next;
	switch (select("Contratar Acistente", "Informa��es", "Cancelar")) {
		case 1:
		mes("[Gerente do Cl�]\n"
			"Ent�o voc� quer contratar um ^0000bb" + .@mercenaryName$ + "^000000 de nosso cl�?\n"
			"Ent�o me diga qual N�vel que desejado.");
		next;
		switch (select("N�vel 1 (LV-20)","N�vel 2 (LV-30)","N�vel 3 (LV-40)","N�vel 4 (LV-50)","N�vel 5 (LV-60)","N�vel 6 (LV-70)","N�vel 7 (LV-80)","N�vel 8 (LV-90)","N�vel 9 (LV-95)","N�vel 10 (LV-99)","Nenhum, mudei de ideia")) {
			case 1:  .@level = 1;  .@minLevel = 15; .@loyalty = 0;   break;
			case 2:  .@level = 2;  .@minLevel = 25; .@loyalty = 0;   break;
			case 3:  .@level = 3;  .@minLevel = 35; .@loyalty = 0;   break;
			case 4:  .@level = 4;  .@minLevel = 45; .@loyalty = 0;   break;
			case 5:  .@level = 5;  .@minLevel = 55; .@loyalty = 0;   break;
			case 6:  .@level = 6;  .@minLevel = 65; .@loyalty = 0;   break;
			case 7:  .@level = 7;  .@minLevel = 70; .@loyalty = 50;  break;
			case 8:  .@level = 8;  .@minLevel = 75; .@loyalty = 100; break;
			case 9:  .@level = 9;  .@minLevel = 85; .@loyalty = 300; break;
			case 10: .@level = 10; .@minLevel = 95; .@loyalty = 500; break;
			case 11:
			mes("[Gerente do Cl�]\n"
				"Tudo bem, se sentir necessidade de nossa ajuda.\n"
				"Volte a me procurar");
			close;
		}
		break;
		case 2:
		mes("[Gerente do Cl�]"
			"Eu sou um gerente respons�vel pela contrata��o de acistentes de nosso cl�.\n"
			"Voc� pode encontrar outros como em alguns lugares,\n"
			"e cada um respons�vel pela contrato de acistentes expec�ficos.");
		next;
		mes("[Gerente do Cl�]\n"
			"Prontera: ^777777Acistentes Lanceiros^000000.\n"
			"Izlude: ^777777Acistentes Espadachins^000000.\n"
			"Vila dos Arqueiros: ^777777Acistentes Arqueiros^000000.");
		next;
		mes("[Gerente do Cl�]"
			"Assistentes s�o soldados que lutar�o a seu lado no campo de batalham.\n"
			"Mas existem alguns termos e condi��es que voc� deve cumprir para contrat�-los.");
		next;
		mes("[Gerente do Cl�]\n"
			"Voc� deve cumprir o requisito de n�vel e pagar uma taxa em Zeny para contratar um Assistente.");
		next;
		mes("[Gerente do Cl�]\n"
			"Assistente de alto n�vel tamb�m tem como condi��o que voc� tenha um certo n�vel de Lealdade a n�s.");
		next;
		mes("[Gerente do Cl�]\n"
			"Contratos de Assistentes n�o podem ser transferidos para outras pessoas.\n"
			"N�s s� permitimos uma diferen�a de 5 N�veis de Base entre Assistente e cliente\n"
			"Ent�o voc� n�o pode contratar algu�m muito mais forte que voc�.");
		next;
		mes("[Gerente do Cl�]\n"
			"Bem, voc� pode se informar melhor dos detalhes quando voc�,\n"
			"de fato contratar um de nossos Assistentes.\n"
			"Voc� receber o Pergaminho de Invoca��o que ir� convocar um Assistente para lhe escoltar.");
		next;
		mes("[Gerente do Cl�]\n"
			"Voc� n�o pode dar esse pergaminho para outra pessoa,\n"
			"e o Assistente s� ficar� com voc� at� 30 minutos.\n"
			"Depois que voc� convoc�-lo.");
		close;
		case 3:
		mes("[Gerente do Cl�]\n"
			"Tudo bem, se sentir necessidade de nossa ajuda.\n"
			"Volte a me procurar.");
		close;
	}
	.@zenyrequire = .@level * 1000;
	.@mercLevel = .@minLevel + 5;
	.@mercLoyalty = mercenary_get_faith(getd(.@mercenaryType$));
	if (.@mercenaryType$ == "SPEAR_MERC_GUILD") { setarray(.@arrItem[1],12173, 12174, 12175, 12176, 12177, 12178, 12179, 12180, 12181, 12182); }
	if (.@mercenaryType$ == "SWORD_MERC_GUILD") { setarray(.@arrItem[1],12163, 12164, 12165, 12166, 12167, 12168, 12169, 12170, 12171, 12172); }
	if (.@mercenaryType$ == "ARCH_MERC_GUILD") {  setarray(.@arrItem[1],12153, 12154, 12155, 12156, 12157, 12158, 12159, 12160, 12161, 12162); }
	mes("[Gerente do Cl�]\n"
		"Para contratar um acistente de N�vel " + .@level + ".\n"
		"Cujo seu level � " + .@mercLevel + " voc� vai precisar de:\n"
		"Est� no m�nimo com o level de base em ^0000BB" + .@minLevel + "^000000 ou maior.\n"
		"Possuir ^0000BB" + .@zenyrequire + "^000000 Zenys.");
	if (.@loyalty >= 50) {
		mes("Ter pelo menos ^0000BB" + .@loyalty + "^000000 pontos de fidelidade com nosso cl�.");
	}
	next;
	mes("[Gerente do Cl�]\n"
		"Deseja assinar o contrato agora?");
	next;
	if (select("Claro", "N�o obrigado") == 1) {
		mes("[Gerente do Cl�]");
		if (Zeny < .@zenyrequire) {
			mes("Sinto muito.\n"
				"Mas voc� n�o possui a quantidade de Zenys necess�ria para contrata��o desse acistente.");
			close;
		} else if (.@mercLoyalty < .@loyalty ) {
			mes("Sua Lealdade para com nosso cl� n�o � o suficiente para contratar esse acistente.\n"
				"Voc� pode contratar um de N�vel menor se preferir.");
			close;
		} else if (BaseLevel < .@minLevel) {
			mes("Hunn...\n"
				"Voc� n�o pode contratar esse acistente porque seu Level de Base � muito inferior ao dele.\n"
				"Lembre-se voc� deve est� no m�mino 5 Level de diferen�a entre ele.");
			close;
		} else {
			mes("Est� aqui seu pergaminho de invoca��o.");
			Zeny -= .@zenyrequire;
			getitem(.@arrItem[.@level],1);
			if (.@level == 10) {
				mercenary_set_faith(getd(.@mercenaryType$), - 400);
				mes("Pelo contrato com o acistente de N�vel 10.\n"
					"Seus pontos de Lealdade tamb�m foram reduzidos em 400 pontos.");
			}
			next;
			mes("[Gerente do Cl�]\n"
				"Lembre-se que depois de usado o acistente ir� acompanha-l" + (Sex == SEX_MALE ? "o" : "a") + " para qualquer lugar.\n"
				"Ir� enfrentar qualquer perigo por voc�.\n"
				"Mas seu contrato expira em ^BB000030 minutos^000000, depois desse tempo ele ir� embora.\n"
				"Use seus servi�os com sabedoria.");
			close;
		}
	}
	mes("[Gerente do Cl�]\n"
		"Tudo bem, se sentir necessidade de nossa ajuda.\n"
		"Volte a me procurar.");
	close;
}

// ------------------------------------------------------------------
// - [ Duplifica��es ] -
// ------------------------------------------------------------------
prontera,41,337,5	duplicate(MercenaryRent)	Cl� de Assis#SpearMR	8W_SOLDIER
izlude,47,139,5	duplicate(MercenaryRent)	Cl� de Assis#SwordMR	4_M_JOB_KNIGHT2
pay_arche,99,167,4	duplicate(MercenaryRent)	Cl� de Assis#BowMR	4_M_JOB_HUNTER
