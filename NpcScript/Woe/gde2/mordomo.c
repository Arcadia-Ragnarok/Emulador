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
| - Info: Gerentes dos castelos na WOE 2.0                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------

-	script	StewardSE	FAKE_NPC,{

	.@map$ = strnpcinfo(NPC_NAME_HIDDEN);
	.@name$ = strnpcinfo(NPC_NAME_VISIBLE);
	.@guild = getcastledata(.@map$, 1);

	setarray(.@status$[0], "^FF0000Inoperante", "^4D4DFFOperacional");
	if (!.@guild) {
		close;
	} else if (getcharid(ID_GUILD) != .@guild) {
		mes("[" + .@name$ + "]\n"
			"Suas amea�as n�o me assustam!\n"
			"Guardi�es, levem-lo para longe daqui!\n"
			"Eu sempre serei leal ao mestre ^FF0000" + getguildmaster(.@GID) + "^000000.");
		close;
	} else if (strcharinfo(CHAR_NAME) == getguildmaster(.@guild)) {
		if (agitcheck2()) {
			switch (select("Situa��o da Fortalesa", "Contrato com Kafra", "Cancelar")) {
				case 1:
				mes("[" + .@name$ + "]\n"
					"Claro " + (Sex == SEX_MALE ? "meu senhor" : "minha senhora") + "\n"
					"Irei lhe informar o relat�rio sobre a Situa��o do nosso castelo");
				next;
				mes("[" + .@name$ + "]\n"
					"Situa��o das Runas.\n"
					"Primeira Runa Guardi�: " + .@status$[getd("$agitse_" + .@map$ + "[0]")] + "^000000\n"
					"Segunda Runa Guardi�: " + .@status$[getd("$agitse_" + .@map$ + "[1]")] + "^000000");
				next;
				mes("[" + .@name$ + "]\n"
					"Situa��o dos Port�es.\n"
					"Primeiro Port�o: " + .@status$[getd("$agitse_" + .@map$ + "[2]")] + "^000000\n"
					"Segundo Port�o: " + .@status$[getd("$agitse_" + .@map$ + "[3]")] + "^000000\n"
					"Terceiro Port�o: " + .@status$[getd("$agitse_" + .@map$ + "[4]")] + "^000000");
				close;
				case 2:
				if (getcastledata(.@map$, 9)) {
					mes("[" + .@name$ + "]\n"
						+ (Sex == SEX_MALE ? "meu senhor" : "minha senhora") + ".\n"
						"N�s j� temos uma funcionaria da corpora��o kafra nos prestando servi�o.");
					close;
				} else {
					mes("[" + .@name$ + "]\n"
						"Voc� vai contratar uma Funcion�ria Kafra para servir nossa fortaleza?\n"
						"Voc� deve pagar ^FF000010,000 Zeny^000000 para contratar uma.");
					next;
					switch (select("Contratar", "Cancelar")) {
						case 1:
						if (!getgdskilllv(.@guild, GD_KAFRACONTRACT)) {
							mes("[" + .@name$ + "]\n"
								+ (Sex == SEX_MALE ? "meu senhor" : "minha senhora") + "n�s n�o podemos contarar uma Funcion�ria Kafra.\n"
								"Porque nosso cl� ainda n�o tem a habilidade ^FF0000Contrato com Kafra.^000000");
							close;
						}
						if (Zeny < 10000) {
							mes("[" + .@name$ + "]\n"
								"N�s n�o podemos contratar uma Funcion�ria Kafra.\n"
								"Porque n�o temos fundos o suficiente para pagar o contrato.");
							close;
						} else {
							enablenpc("Funcion�ria Kafra#" + .@map$);
							setcastledata(.@map$, 9, 1);
							mes("[" + .@name$ + "]\n"
								"Muito bem.\n"
								"N�s formamos um contrato com o Escrit�rio Central Kafra,\n"
								"e contratamos uma Funcion�ria Kafra para a fortaleza.");
							next;
							cutin("kafra_01", 2);
							mes("[Funcion�ria Kafra ]\n"
								"Como vai " + strcharinfo(CHAR_NAME) + "?\n"
								"Fui enviada pelo Escrit�rio Central Kafra para servir o seu cl�.");
							next;
							mes("[Funcion�ria Kafra ]\n"
								"Mestre, eu vou fazer o meu melhor para seguir suas ordens.");
							next;
							cutin("", 255);
							mes("[" + .@name$ + "]\n"
								"Nosso contrato vai expirar depois de um m�s.\n"
								"Por isso temos que pagar taxas adicionais para manter a Funcion�ria Kafra a servi�o de nosso cl�.");
							close;
						}
						case 2:
						mes("[" + .@name$ + "]\n"
							"Como queira.\n"
							"No entanto, eu sugiro contratar uma Funcion�ria Kafra logo que poss�vel.\n"
							"Ela iria beneficiar muito nossos membros seus servi�os.");
						close;
					}
				}
				case 3:
				mes("[" + .@name$ + "]\n"
					"Que nosso cl� seja glorioso e que possa prosperar cada vez mais.");
				close;
			}
		} else {
			.@menu1 = 1;
			while (.@menu1) {
				mes("[" + .@name$ + "]\n"
					"Em mais o que esse umilde servo pode ser �til?");
				next;
				switch (select("Administrar Investimentos", "Contrato com a Kafra Corp.", "Ir a Sala dos Tesouros", "Nada")) {
					case 1:
					.@menu2 = 1;
					while (.@menu2) {
						mes("[" + .@name$ + "]\n"
							"Sobre os investimentos o que deseja administrar?");
						next;
						switch (select("Visualiar Investimentos", "Investir no Castelo", "^777777- Menu Anterior^000000", "Cancelar")) {
							case 1:
							mes("[" + .@name$ + "]\n"
								"O Status do investimento atual � de:\n"
								"Crecimento Comercial ^BB0000" + getcastledata(.@map$, 2) + "^000000.\n"
								"N�vel de Defesa ^BB0000" + getcastledata(.@map$, 3) + "^000000." + "\n"
								"Total de Investimentos no Crecimento Comercial feitos da �ltima vez:\n"
								+ getcastledata(.@map$, 4) + ".\n"
								"Total de Investimentos no Crecimento das Defesas feitos da �ltima vez:\n"
								+ getcastledata(.@map$, 5) + ".");
							next;
							break;
							case 2:
							.@menu3 = 1;
							while (.@menu2) {
								mes("[" + .@name$ + "]\n"
									"Em que deseja investir\n" + (Sex == SEX_MALE ? "meu meu senhor" : "minha senhora") + "?");
								next;
								switch (select("Crescimento da Economia", "Crescimento da Defesa", "^777777- Menu Anterior","- Menu Principal^000000","Cancelar")) {
									case 1:
									if (getcastledata(.@map$, 4) >= 2) {
										mes("[" + .@name$ + "]\n"
											"Voc� j� fez dois investimentos hoje.\n"
											"Ent�o voc� vai ter que esperar at� amanh� para fazer outro investimento.");
										next;
										break;
									} else if (getcastledata(.@map$, 2) == 100) {
										mes("[" + .@name$ + "]\n"
											"No entanto, o n�vel de crescimento da nossa fortaleza est� em 100%.");
										next;
										mes("[" + .@name$ + "]\n"
											"N�o � poss�vel desenvolver o crescimento comercial mais do que isso.");
										next;
										break;
									}
									.@Economy = getcastledata(.@map$, 2);
									if (.@Economy < 6) { .@EcoInvest = 5000; }
									else if ((.@Economy >= 6) && (.@Economy <= 10)) { .@EcoInvest = 10000; }
									else if ((.@Economy >= 11) && (.@Economy <= 15)) { .@EcoInvest = 20000; }
									else if ((.@Economy >= 16) && (.@Economy <= 20)) { .@EcoInvest = 35000; }
									else if ((.@Economy >= 21) && (.@Economy <= 25)) { .@EcoInvest = 55000; }
									else if ((.@Economy >= 26) && (.@Economy <= 30)) { .@EcoInvest = 80000; }
									else if ((.@Economy >= 31) && (.@Economy <= 35)) { .@EcoInvest = 110000; }
									else if ((.@Economy >= 36) && (.@Economy <= 40)) { .@EcoInvest = 145000; }
									else if ((.@Economy >= 41) && (.@Economy <= 45)) { .@EcoInvest = 185000; }
									else if ((.@Economy >= 46) && (.@Economy <= 50)) { .@EcoInvest = 230000; }
									else if ((.@Economy >= 51) && (.@Economy <= 55)) { .@EcoInvest = 280000; }
									else if ((.@Economy >= 56) && (.@Economy <= 60)) { .@EcoInvest = 335000; }
									else if ((.@Economy >= 61) && (.@Economy <= 65)) { .@EcoInvest = 395000; }
									else if ((.@Economy >= 66) && (.@Economy <= 70)) { .@EcoInvest = 460000; }
									else if ((.@Economy >= 71) && (.@Economy <= 75)) { .@EcoInvest = 530000; }
									else if ((.@Economy >= 76) && (.@Economy <= 80)) { .@EcoInvest = 605000; }
									else if ((.@Economy >= 81) && (.@Economy <= 85)) { .@EcoInvest = 685000; }
									else if ((.@Economy >= 86) && (.@Economy <= 90)) { .@EcoInvest = 770000; }
									else if ((.@Economy >= 91) && (.@Economy <= 95)) { .@EcoInvest = 860000; }
									else if ((.@Economy >= 96) && (.@Economy <= 100)) { .@EcoInvest = 955000; }
									if (getcastledata(.@map$, 4)) {
										.@EcoInvest *= 4;
									}
									mes("[" + .@name$ + "]\n"
										"Aumentar o crescimento comercial da fortaleza.\n"
										"Vai atumentar a quantidade de tesouros produzidos para o Cl�.");
									next;
									mes("[" + .@name$ + "]\n"
										"Voc� pode fazer um investimento por dia.\n"
										"Mas voc� pode fazer dois investimentos se voc� pagar mais Zeny.\n"
										"Isto ir� acelerar o desenvolvimento comercial mas pode sair muito caro.");
									next;
									if (!getcastledata(.@map$, 4)) {
										mes("[" + .@name$ + "]\n"
											"Voc� tem quer pagar\n"
											"^FF0000" + .@EcoInvest + "^000000 Zeny para fazer um investimento?");
									} else {
										mes("[" + .@name$ + "]\n"
											"Voc� tem que pagar mais ^FF0000" + .@EcoInvest + "^000000 Zeny para investir pela segunda vez hoje.");
									}
									next;
									switch (select("Confirmar Investimento Comercial", "^777777- Menu de Investimentos ","- Menu Principal^000000","Cancelar")) {
										case 1:
										if (Zeny < .@EcoInvest) {
											mes("[" + .@name$ + "]\n"
												"Lamento, mas voc� n�o tem Zeny suficiente para fazer um investimento para o cl� hoje.");
											next;
											break;
										}
										Zeny -= .@EcoInvest;
										setcastledata(.@map$, 4, getcastledata(.@map$, 4) + 1);
										mes("[" + .@name$ + "]\n"
											"Mestre, foi feito utiliza��o racional dos recrusos do cl�.");
										next;
										mes("[" + .@name$ + "]\n"
											"Podemos esperar at� amanh� para ver os resultados deste investimento.");
										next;
										break;
										case 2:
										break;
										case 3:
										.@menu2 = 0;
										.@menu3 = 0;
										break;
										case 4:
										mes("[" + .@name$ + "]\n"
											"Que nosso cl� seja glorioso e que possa prosperar cada vez mais.");
										close;
									}
									break;
									case 2:
									if (getcastledata(.@map$, 5) >= 2) {
										mes("[" + .@name$ + "]\n"
											"Voc� j� fez dois investimentos hoje.\n"
											"Ent�o voc� vai ter que esperar at� amanh� para fazer outro investimento.");
										next;
										break;
									} else if (getcastledata(.@map$, 3) == 100) {
										mes("[" + .@name$ + "]\n"
											"^ff0000O n�vel de Defesa de nosso Castelo est� elevado a 100%.\n"
											"N�o � nescess�rio mais investimentos.^000000");
										next;
										break;
									}
									.@Defence = getcastledata(.@map$, 3);
									if (.@Defence < 6) { .@DefInvest = 10000; }
									else if ((.@Defence >= 6) && (.@Defence <= 10)) { .@DefInvest = 20000; }
									else if ((.@Defence >= 11) && (.@Defence <= 15)) { .@DefInvest = 40000; }
									else if ((.@Defence >= 16) && (.@Defence <= 20)) { .@DefInvest = 70000; }
									else if ((.@Defence >= 21) && (.@Defence <= 25)) { .@DefInvest = 110000; }
									else if ((.@Defence >= 26) && (.@Defence <= 30)) { .@DefInvest = 160000; }
									else if ((.@Defence >= 31) && (.@Defence <= 35)) { .@DefInvest = 220000; }
									else if ((.@Defence >= 36) && (.@Defence <= 40)) { .@DefInvest = 290000; }
									else if ((.@Defence >= 41) && (.@Defence <= 45)) { .@DefInvest = 370000; }
									else if ((.@Defence >= 46) && (.@Defence <= 50)) { .@DefInvest = 460000; }
									else if ((.@Defence >= 51) && (.@Defence <= 55)) { .@DefInvest = 560000; }
									else if ((.@Defence >= 56) && (.@Defence <= 60)) { .@DefInvest = 670000; }
									else if ((.@Defence >= 61) && (.@Defence <= 65)) { .@DefInvest = 790000; }
									else if ((.@Defence >= 66) && (.@Defence <= 70)) { .@DefInvest = 920000; }
									else if ((.@Defence >= 71) && (.@Defence <= 75)) { .@DefInvest = 1060000; }
									else if ((.@Defence >= 76) && (.@Defence <= 80)) { .@DefInvest = 1210000; }
									else if ((.@Defence >= 81) && (.@Defence <= 85)) { .@DefInvest = 1370000; }
									else if ((.@Defence >= 86) && (.@Defence <= 90)) { .@DefInvest = 1540000; }
									else if ((.@Defence >= 91) && (.@Defence <= 95)) { .@DefInvest = 1720000; }
									else if ((.@Defence >= 96) && (.@Defence <= 100)) { .@DefInvest = 1910000; }
									if (getcastledata(.@map$, 5)) {
										.@DefInvest *= 4;
									}
									mes("[" + .@name$ + "]\n"
										"Se voc� aumentar as Defesas do Castelo, as durabilidade dos Guardi�es e Emperium v�o aumentar.");
									next;
									mes("[" + .@name$ + "]\n"
										"Originalmente voc� pode investir apenas uma vez.\n"
										"Mas se voc� pagar mais dinheiro voc� pode investir duas vezes.\n"
										"Para cada Investimento feito o valor para investir novamente � quadruplicado.");
									next;
									if (!getcastledata(.@map$, 5)) {
										mes("[" + .@name$ + "]\n"
											"Voc� tem quer pagar ^FF0000" + .@DefInvest + "^000000 Zeny para fazer um investimento?");
									} else {
										mes("[" + .@name$ + "]\n"
											"Voc� tem que pagar mais ^FF0000" + .@DefInvest + "^000000 Zeny para investir pela segunda vez hoje.");
									}
									next;
									switch (select("Confirmar Investimento Defensivo", "^777777- Menu de Investimentos ","- Menu Principal^000000","Cancelar")) {
										case 1:
										if (Zeny < .@DefInvest) {
											mes("[" + .@name$ + "]\n"
												"Lamento, mas voc� n�o tem Zeny suficiente para fazer um investimento para o cl� hoje.");
											next;
											break;
										}
										Zeny -= .@DefInvest;
										setcastledata(.@map$, 5, getcastledata(.@map$, 5) + 1);
										mes("[" + .@name$ + "]\n"
											"Terminamos o investimento em seguran�a.\n"
											"Espero que o nosso n�vel de Defesa do Castelo seja aumentado at� amanh�.");
										next;
										mes("[" + .@name$ + "]\n"
											"Podemos esperar at� amanh� para ver os resultados deste investimento.");
										next;
										break;
										case 2:
										break;
										case 3:
										.@menu2 = 0;
										.@menu3 = 0;
										break;
										case 4:
										mes("[" + .@name$ + "]\n"
											"Que nosso cl� seja glorioso e que possa prosperar cada vez mais.");
										close;
									}
									break;
									case 3:
									.@menu3 = 0;
									break;
									case 4:
									.@menu2 = 0;
									.@menu3 = 0;
									break;
									case 5:
									close;
								}
								break;
							}
							break;
							case 3:
							.@menu2 = 0;
							break;
							case 4:
							close;
						}
					}
					break;
					case 2:
					if (getcastledata(.@map$, 9)) {
						mes("[" + .@name$ + "]\n"
							"Deseja dispensar a funcion�ria Kafra contratada?");
						next;
						switch (select("Demitir Funcin�ria Kafra", "^777777- Menu Anterior^000000")) {
							case 1:
							cutin("kafra_01", 2);
							mes("[Funcion�ria Kafra]\n"
								"Eu tenho trabalhado muito duro para o sucesso do cl�!\n"
								"Vou me esfor�ar mais para servir os membros do cl�, eu prometo!");
							next;
							mes("[" + .@name$ + "]\n"
								"Eu lhe pe�o que pense melhor...\n"
								"Ela est� sendo de grande utilidade ao nosso cl�.\n"
								"Mas � " + (Sex == SEX_MALE ?"meu senhor":"minha senhora") + "quem decide.");
							next;
							switch (select("Confirmar demiss�o", "Cancelar Demiss�o")) {
								case 1:
								mes("[Funcion�ria Kafra]\n"
									"Apesar de tudo eu me esforcei ao m�ximo pelo cl�... Adeus...");
								disablenpc("Funcion�ria Kafra#" + .@map$);
								setcastledata(.@map$, 9, 0);
								cutin("", 255);
								next;
								mes("[" + .@name$ + "]\n"
									"Sinto que vamos nos arrender de termos dispensado ela.");
								next;
								break;
								case 2:
								cutin "kafra_01",2;
								mes("[Funcion�ria Kafra]\n"
									"Obrigado pela confian�a vou fazer melhor ainda!\n"
									"Prometo que n�o vai se arrepender.");
								next;
								mes("[" + .@name$ + "]\n"
									"S�bia decis�o, os os servi�os dela s�o �teis a todos membros de nosso cl�.");
								cutin("", 255);
								next;
								.@menu3 = 0;
								break;
							}
							break;
							case 2:
							.@menu3 = 0;
							break;
						}
					} else {
						mes("[" + .@name$ + "]\n"
							"Voc� vai contratar uma Funcion�ria Kafra para servir nossa fortaleza?\n"
							"Voc� deve pagar ^FF000010,000 Zeny^000000 para contratar uma.");
						next;
						switch (select("Contratar", "^777777- Menu Anteriror^000000")) {
							case 1:
							if (!getgdskilllv(.@guild,GD_KAFRACONTRACT)) {
								mes("[" + .@name$ + "]\n"
									+ (Sex == SEX_MALE ? "meu senhor" : "minha senhora") + "\n"
									"N�s n�o podemos contarar uma Funcion�ria Kafra.\n"
									"Porque nosso cl� ainda n�o tem a habilidade ^FF0000Contrato com Kafra.^000000");
								break;
							}
							if (Zeny < 10000) {
								mes("[" + .@name$ + "]\n"
									"N�s n�o podemos contratar uma Funcion�ria Kafra porque n�o temos fundos o suficiente para pagar o contrato.");
								break;
							} else {
								enablenpc("Funcion�ria Kafra#" + .@map$);
								setcastledata(.@map$, 9, 1);
								mes("[" + .@name$ + "]\n"
									"Muito bem.\n"
									"N�s formamos um contrato com o Escrit�rio Central Kafra,\n"
									"e contratamos uma Funcion�ria Kafra para a fortaleza.");
								next;
								cutin("kafra_01", 2);
								mes("[Funcion�ria Kafra]\n"
									"Como vai " + strcharinfo(CHAR_NAME) + "?\n"
									"Fui enviada pelo Escrit�rio Central Kafra para servir o seu cl�.");
								next;
								mes("[Funcion�ria Kafra]\n"
									"Mestre, eu vou fazer o meu melhor para seguir suas ordens.");
								next;
								cutin "",255;
								mes("[" + .@name$ + "]\n"
									"Nosso contrato vai expirar depois de um m�s.\n"
									"Por isso temos que pagar taxas adicionais para manter a Funcion�ria Kafra a servi�o de nosso cl�.");
								close;
							}
							case 2:
							mes("[" + .@name$ + "]\n"
								"Como queira.\n"
								"No entanto, eu sugiro contratar uma Funcion�ria Kafra logo que poss�vel.\n"
								"Ela iria beneficiar muito nossos membros seus servi�os.");
							next;
							.@menu3 = 0;
							break;
						}
					}
					break;
					case 3:
					mes("[" + .@name$ + "]\n"
						"� uma honra guiar\n"
						+ (Sex == SEX_MALE ? "o senhor" : "a Senhora") + "at� a sala dos tesouros.\n"
						"Mas devo alertar que eles s� aparecem l� durante 10 mitutos a patir do primeiro minuto de cada dia.");
					next;
					mes("[" + .@name$ + "]\n"
						"Uma vez l� basta acionar o interrupitor secreto para retonar at� aqui.");
					close2;
					if (compare(.@map$, "arug")) {
						if (.@map$ == "arug_cas01") { setarray(.@Treasure[0], 250, 363); }
						else if (.@map$ == "arug_cas02") { setarray(.@Treasure[0], 382, 227); }
						else if (.@map$ == "arug_cas03") { setarray(.@Treasure[0], 292, 266); }
						else if (.@map$ == "arug_cas04") { setarray(.@Treasure[0], 292, 266); }
						else if (.@map$ == "arug_cas05") { setarray(.@Treasure[0], 292, 266); }
					} else {
						if (.@map$ == "schg_cas01") { setarray(.@Treasure[0], 381, 381); }
						if (.@map$ == "schg_cas02") { setarray(.@Treasure[0], 249, 373); }
						else if (.@map$ == "schg_cas03") { setarray(.@Treasure[0], 190, 16); }
						else if (.@map$ == "schg_cas04") { setarray(.@Treasure[0], 381, 381); }
						else if (.@map$ == "schg_cas05") { setarray(.@Treasure[0], 381, 381); }
					}
					warp(.@map$, .@Treasure[0], .@Treasure[1]);
					end;
					case 4:
					mes("[" + .@name$ + "]\n"
						"Que nosso cl� seja glorioso e que possa prosperar cada vez mais.");
					close;
				}
			}
		}
	} else {
		mes("[" + .@name$ + "]\n"
			"Como vai honor�vel membro\n"
			"^00FF00" + strcharinfo(CHAR_NAME) + "^000000");
		next;
		if (agitcheck2()) {
			select("Visualizar Situa��o da Fortaleza");
			mes("[" + .@name$ + "]\n"
				"Irei lhe informar o relat�rio\n"
				"Sobre nosso castelo");
			next;
			mes("[" + .@name$ + "]\n"
				"Runas Guardi�s.\n"
				"Primeira Runa Guardi�: " + .@status$[getd("$agitse_" + .@map$ + "[0]")] + "^000000\n"
				"Segunda Runa Guardi�: " + .@status$[getd("$agitse_" + .@map$ + "[1]")] + "^000000");
			next;
			mes("[" + .@name$ + "]\n"
				"Port�es.\n"
				"Primeiro Port�o: " + .@status$[getd("$agitse_" + .@map$ + "[2]")] + "^000000\n"
				"Segundo Port�o: " + .@status$[getd("$agitse_" + .@map$ + "[3]")] + "^000000\n"
				"Terceiro Port�o: " + .@status$[getd("$agitse_" + .@map$ + "[4]")] + "^000000");
			close;
		} else {
			select("Visualizar investimentos.");
			mes("[" + .@name$ + "]\n"
				"O Status do investimento atual � de:\n"
				"Crecimento Comercial ^BB0000[" + getcastledata(.@map$, 2) + "]^000000.\n"
				"N�vel de Defesa ^BB0000[" + getcastledata(.@map$, 3) + "]^000000.\n"
				"Total de Investimentos no Crecimento Comercial feitos pela �ltima vez:\n"
				+ getcastledata(.@map$, 4) + ".\n \n"
				"Total de Investimentos no Crecimento das Defesas feitos pela �ltima vez:\n"
				+ getcastledata(.@map$, 5) + ".");
			next;
			mes("[" + .@name$ + "]\n"
				"Estou aguardando novas instru��es do nosso lider ^BB0000" + getguildmaster(.@guild) + "^000000.\n"
				"At� l� isso � tudo.");
			close;
		}
	}
}

// ------------------------------------------------------------------
// - [ Duplica��es (Arunafeltz) ] -
// ------------------------------------------------------------------
// Mardol
arug_cas01,92,380,3	duplicate(StewardSE)	Gerente Brace#arug_cas01	1_M_JOBTESTER
// Cyr
arug_cas02,303,341,3	duplicate(StewardSE)	Gerente Yumenes#arug_cas02	1_M_JOBTESTER
// Horn
arug_cas03,328,98,3	duplicate(StewardSE)	Gerente Yehsus#arug_cas03	1_M_JOBTESTER
// Gefn
arug_cas04,328,98,3	duplicate(StewardSE)	Gerente Nios#arug_cas04	1_M_JOBTESTER
// Banadis
arug_cas05,328,98,3	duplicate(StewardSE)	Gerente Eeos#arug_cas05	1_M_JOBTESTER

// ------------------------------------------------------------------
// - [ Duplica��es (Schwaltzvalt) ] -
// ------------------------------------------------------------------
// Himinn
schg_cas01,247,305,3	duplicate(StewardSE)	Gerente Ef#schg_cas01	1_M_JOBTESTER
// Andlangr
schg_cas02,105,378,3	duplicate(StewardSE)	Gerente Endeef#schg_cas02	1_M_JOBTESTER
// Viblainn
schg_cas03,88,90,3	duplicate(StewardSE)	Gerente Elzee#schg_cas03	1_M_JOBTESTER
// Hljod
schg_cas04,247,305,3	duplicate(StewardSE)	Gerente Efielz#schg_cas04	1_M_JOBTESTER
// Skidbladnir
schg_cas05,247,305,3	duplicate(StewardSE)	Gerente Anaf#schg_cas05	1_M_JOBTESTER

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - (05/05/2018) [Spell Master]
// * Modificado e adaptado para o c�digo fonte do emulador Arcadia
