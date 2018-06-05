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
| - Info: Venda de Materiais de Forja para Ferreiros.               |
\*-----------------------------------------------------------------*/

-	script	BlacksmithSupplier	FAKE_NPC,{
	.@npc$ = strnpcinfo(NPC_NAME_VISIBLE);
	mes("[" + .@npc$ + "]\n"
		"Seja bem-vind" + (Sex == SEX_MALE ? "o":"a") + " à minha loja.\n"
		"Você pode achar tudo relacionado a forja aqui.\n"
		"O que traz você até mim?");
	next;
	switch (select("Comprar uma bigorna", "Comprar itens de forja", "Comprar metais", "Purificar minérios", "Cancelar")) {
		case 1:
		mes("[" + .@npc$ + "]\n"
			"Uma boa bigorna aumenta muito as suas chances de se fazer uma boa arma, você sabe né?\n"
			"Mas irá custar mais zeny.\n"
			"Escolha a que melhor se encaixa em suas finalidade.");
		next;
		switch (select("Bigorna - 30,000 zeny", "Bigorna de Oridecon - 120,000 zeny", "Bigorna de Ouro - 300,000 zeny", "Uma bigorna melhor que as outras", "Cancelar.")) {
			case 1:
			if (Zeny < 30000) {
				mes("[" + .@npc$ + "]\n"
					"Eu não posso vende-la pra você se você não tem o dinheiro.");
				close;
			} else if (!checkweight(Anvil,1)) {
				mes("[" + .@npc$ + "]\n"
					"Você está levando muito peso e não vai poder carrega-la.");
				close;
			} else {
				Zeny -= 30000;
				getitem(Anvil,1);
				mes("[" + .@npc$ + "]\n"
					"Este é um dos mais baratos, mas suficiente para forjar vários itens.\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para voltar a qualquer hora, sempre que precisar.");
				close;
			}
			case 2:
			if (Zeny < 120000) {
				mes("[" + .@npc$ + "]\n"
					"Eu não posso vende-la pra você se você não tem o dinheiro.");
				close;
			} else if (!checkweight(Oridecon_Anvil,1)) {
				mes("[" + .@npc$ + "]\n"
					"Você está levando muito peso e não vai poder carrega-la.");
				close;
			} else {
				Zeny -= 120000;
				getitem(Oridecon_Anvil, 1);
				mes("[" + .@npc$ + "]\n"
					"Humm, muitos compram essa bigorna.\n"
					"Essa é uma bigorna própria para forjadores, não é?\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para voltar a qualquer hora, sempre que precisar.");
				close;
			}
			case 3:
			if (Zeny < 300000) {
				mes("[" + .@npc$ + "]\n"
					"Eu não posso vende-la pra você se você não tem o dinheiro.");
				close;
			} else if (!checkweight(Golden_Anvil,1)) {
				mes("[" + .@npc$ + "]\n"
					"Você está levando muito peso e não vai poder carrega-la.");
				close;
			} else {
				Zeny -= 300000;
				getitem(Golden_Anvil,1);
				mes("[" + .@npc$ + "]\n"
					"Essa é a melhor bigorna que eu vendo na minha oficina!\n"
					"Com ela, você irá dominar o mundo da forja!\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para voltar a qualquer hora, sempre que precisar.");
				close;
			}
			case 4:
			mes("[" + .@npc$ + "]\n"
				"Bem, sinto muito.\n"
				"Mas eu não tenha nada melhor que a Bigorna de Ouro.");
			next;
			mes("[" + .@npc$ + "]\n"
				"Eu acho, que o lendário criador de bigornas tem uma.\n"
				"Mas, eu não acho que você possa achá-lo, embora ele esteja em algum lugar do mundo.");
			close;
			case 5:
			mes("[" + .@npc$ + "]\n"
				"OK, sinta-se a vontade para voltar quando quiser, quando precisar.\n"
				"Até mais.");
			close;
		}
		case 2:
		mes("[" + .@npc$ + "]\n"
			"Um forjador respeitável deve usar ótimas ferramentas.\n"
			"Você pode comprá-las aqui.\n"
			"Escolha qual quer.");
		next;
		switch (select("Mini-Fornalha - 150 zeny", "Martelo de Ferro - 1000 zeny", "Martelo de Ouro - 3000 zeny", "Martelo de Oridecon - 5000 zeny", "Cancelar.")) {
			case 1:
			mes("[" + .@npc$ + "]\n"
				"É uma ferramenta muito útil para se refinar metais!\n"
				"Mas, quantas você irá comprar?\n"
				"Se você quiser desistir, basta colocar o número 0.");
			next;
			while (true) {
				input(.@input);
				if (.@input == 0) {
					mes("[" + .@npc$ + "]\n"
						"Bem, a negociação foi cancelada.\n"
						"Até mais.");
					close;
				} else if ((.@input < 0) || (.@input > 500)) {
					mes("[" + .@npc$ + "]\n"
						"Você pode comprar 500, ou menos.");
					next;
				} else {
					break;
				}
			}
			.@sell = .@input * 150;
			if (Zeny < .@sell) {
				mes("[" + .@npc$ + "]\n"
					"Você não possui zenys o suficiente.");
				close;
			} else if (!checkweight(Portable_Furnace, .@input)) {
				mes("[" + .@npc$ + "]\n"
					"Me parece que você não tem espaço suficiente no seu inventário.\n"
					"Porque você não coloca seus itens no armazém da Kafra?");
				close;
			} else {
				Zeny -= .@sell;
				getitem(Portable_Furnace, .@input);
				mes("[" + .@npc$ + "]\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para vir aqui, sempre que precisar.");
				close;
			}
			case 2:
			if (Zeny < 1000) {
				mes("[" + .@npc$ + "]\n"
					"Você não possui zenys o suficiente.");
				close;
			} else if (!checkweight(Iron_Hammer, 1)) {
				mes("[" + .@npc$ + "]\n"
					"Você está levando muito peso e não vai poder carrega-lo.");
				close;
			} else {
				Zeny -= 1000;
				getitem(Iron_Hammer, 1);
				mes("[" + .@npc$ + "]\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para vir aqui, sempre que precisar.");
				close;
			}
			case 3:
			if (Zeny < 3000) {
				mes("[" + .@npc$ + "]\n"
					"Você não possui zenys o suficiente.");
				close;
			} else if (!checkweight(Golden_Hammer, 1)) {
				mes("[" + .@npc$ + "]\n"
					"Você está levando muito peso e não vai poder carrega-lo.");
				close;
			} else {
				Zeny -= 3000;
				getitem(Golden_Hammer, 1);
				mes("[" + .@npc$ + "]\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para vir aqui, sempre que precisar.");
				close;
			}
			case 4:
			if (Zeny < 5000) {
				mes("[" + .@npc$ + "]\n"
					"Você não possui zenys o suficiente.");
				close;
			} else if (!checkweight(Oridecon_Hammer, 1)) {
				mes("[" + .@npc$ + "]\n"
					"Você está levando muito peso e não vai poder carrega-lo.");
				close;
			} else {
				Zeny -= 5000;
				getitem(Oridecon_Hammer, 1);
				mes("[" + .@npc$ + "]\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para vir aqui, sempre que precisar.");
				close;
			}
			case 5:
			mes("[" + .@npc$ + "]\n"
				"Volte aqui quando quiser, sempre que precisar.\n"
				"Até mais.");
			close;
		}
		case 3:
		mes("[" + .@npc$ + "]\n"
			"Eu preparo muitos metais, e todos com grande qualidade.\n"
			"Mas então, qual deles você precisa?");
		next;
		switch (select("Fracon - 200z.", "Emveretarcon - 1000z.", "Cancelar.")) {
			case 1:
			mes("[" + .@npc$ + "]\n"
				"Bem, quantos você deseja comprar?\n"
				"Se você quiser cancelar a negociação, basta colocar o número 0.");
			next;
			while (true) {
				input(.@input);
				if (.@input == 0) {
					mes("[" + .@npc$ + "]\n"
						"A negociação foi cancelada.\n"
						"Até mais.");
					close;
				} else if ((.@input < 0) || (.@input > 500)) {
					mes("[" + .@npc$ + "]\n"
						"Você só pode comprar 500, ou menos.");
					next;
				} else {
					break;
				}
			}
			.@sell = .@input * 200;
			if (Zeny < .@sell) {
				mes("[" + .@npc$ + "]\n"
					"Você não tem o dinheiro.\n"
					"Você sabe que eu não posso vender por um baixo preço...\n"
					"Minha esposa reclama muito sobre a falta de Zeny.");
				close;
			} else if (!checkweight(Phracon,.@input)) {
				mes("[" + .@npc$ + "]\n"
					"Me parece que você não tem espaço suficiente no seu inventário.\n"
					"Porque você não coloca seus itens no armazém da Kafra?");
				close;
			} else {
				Zeny -= .@sell;
				getitem(Phracon,.@input);
				mes("[" + .@npc$ + "]\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para vir aqui, sempre que precisar.");
				close;
			}
			case 2:
			mes("[" + .@npc$ + "]\n"
				"Bem, quantos você deseja comprar?\n"
				"Se você quiser cancelar a negociação, basta colocar o número 0.");
			next;
			while (true) {
				input(.@input);
				if (.@input == 0) {
					mes("[" + .@npc$ + "]\n"
						"A negociação foi cancelada.\n"
						"Até mais.");
					close;
				} else if ((.@input < 0) || (.@input > 500)) {
					mes("[" + .@npc$ + "]\n"
						"Você só pode comprar 500, ou menos.");
					next;
				} else {
					break;
				}
			}
			.@sell = .@input * 1000;
			if (Zeny < .@sell) {
				mes("[" + .@npc$ + "]\n"
					"Você não tem o dinheiro.\n"
					"Você sabe que eu não posso vender por um baixo preço...\n"
					"Minha esposa reclama muito sobre a falta de Zeny.");
				close;
			} else if (!checkweight(Emveretarcon,.@input)) {
				mes("[" + .@npc$ + "]\n"
					"Meu amigo...\n"
					"Você não tem espaço suficiente no inventário.\n"
					"Porque não guarda algumas coisas no armazém da Kafra primeiro?");
				close;
			} else {
				Zeny -= .@sell;
				getitem(Emveretarcon,.@input);
				mes("[" + .@npc$ + "]\n"
					"Obrigado por comprar na minha oficina.\n"
					"Sinta-se livre para vir aqui, sempre que precisar.");
				close;
			}
			case 3:
			mes("[" + .@npc$ + "]\n"
				"Sinta-se livre para voltar, sempre que precisar.\n"
				"Até mais.");
			close;
		}
		case 4:
		mes("[" + .@npc$ + "]\n"
			"Eu posso purificar Oridecons e Eluniuns.\n"
			"Eu crio um metal refinado a partir de 5 metais brutos, seus minérios.\n"
			"Bem...\n"
			"Qual deles você quer fazer?");
		next;
		switch (select("Fazer um Oridecon", "Fazer um Elunium", "Cancelar")) {
			case 1:
			if (countitem(Oridecon_Stone) < 5) {
				mes("[" + .@npc$ + "]\n"
					"Eu lhe disse, eu preciso de 5 Minérios de Oridecon para fazer um Oridecon.");
				close;
			} else {
				delitem(Oridecon_Stone, 5);
				getitem(Oridecon, 1); 
				mes("[" + .@npc$ + "]\n"
					"Ótimo, aqui está o seu Oridecon.\n"
					"Volte sempre que precisar, espero sua visita.");
				close;
			}
			case 2:
			if (countitem(Elunium_Stone) < 5) {
				mes("[" + .@npc$ + "]\n"
					"Eu lhe disse, eu preciso de 5 Minérios de Eluniuns para fazer um Elunium.");
				close;
			} else {
				delitem(Elunium_Stone, 5);
				getitem(Elunium, 1);
				mes("[" + .@npc$ + "]\n"
					"Ótimo, aqui está o seu Elunium.\n"
					"Volte sempre que precisar, espero sua visita.");
				close;
			}
			case 3:
			mes("[" + .@npc$ + "]\n"
				"Sinta-se livre para vir aqui, sempre que precisar.\n"
				"Até mais.");
			close;
		}
		case 5:
		mes("[" + .@npc$ + "]\n"
			"Volte sempre, sempre que precisar ou que quiser.\n"
			"Até mais.");
		close;
	}
}

geffen_in,110,172,0	duplicate(BlacksmithSupplier)	Christopher Guillenrow#gefSupplier	1_M_SMITH
ein_in01,38,29,0	duplicate(BlacksmithSupplier)	Paul Spanner#einSupplier	1_M_SMITH
