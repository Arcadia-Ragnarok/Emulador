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
| - Info: Venda de Poções para Acistentes.                          |
\*-----------------------------------------------------------------*/

-	script	MercPotion	FAKE_NPC,{
	mes("[Itens para Assistente]\n"
		"Olá, eu vendo mercadorias que os Assistentes podem utilizar.\n"
		"^BB0000E somente útil para acistentes,\n"
		"não sendo possível usa-los em você ou outra pessoa^000000.");
	next;
	mes("[Itens para Assistente]\n"
		"Veja meus produtos e me diga se quer comprar algo.");
	next;
	switch (select("Poção Vermelha", "Poção Azul", "Poção de Concentração", "Poção do Despertar", "Poção da Fúria Selvagem", "Nada Obrigado")) {
		case 1: .@item = 12184; .@Zeny = 2500; break;
		case 2: .@item = 12185; .@Zeny = 5000; break;
		case 3: .@item = 12241; .@Zeny = 800;  break;
		case 4: .@item = 12242; .@Zeny = 1500; break;
		case 5: .@item = 12243; .@Zeny = 3000; break;
		case 6:
		mes("[Itens para Assistente]\n"
			"Volte quando quiser algum item excluzivo para acistentes.");
		close;
	}
	mes("[Itens para Assistente]\n"
		"1 " + getitemname(.@item) + " custa " + .@Zeny + " Zenys.");
	next;
	mes("[Itens para Assistente]\n"
		"Me diga quantos você quer?\n"
		"Mas só posso vender no máximo 100 por vez!\n"
		"Caso queira cancelar digite \"0\",  entendido?");
	next;
	input(.@quant);
	if (!.@quant) {
		mes("[Itens para Assistente]\n"
			"Você digitou zero!\n"
			"A negociação foi cancelada.");
		close;
	} else if (.@quant > 100) {
		mes("[Itens para Assistente]\n"
			"Eu disse que só poderia vender 100 por vez.");
		close;
	} else {
		.@ZenyRequire = .@Zeny * .@quant;
		.@weight = getiteminfo(.@item,ITEM_WEIGHT);
		.@total_weight = .@quant * .@weight;
		mes("[Itens para Assistente]\n"
			"Certo você quer comprar " + .@quant + " " + getitemname(.@item) + ",  não é mesmo?\n"
			"Então serão necessários " + .@ZenyRequire + " Zenys.");
		next;
		mes("[Itens para Assistente]\n"
			"Deseja comprar-los agora?");
		next;
		if (select("Sim", "Não. Mudei de idéia") == 1) {
			mes("[Itens para Assistente]");
			if ((MaxWeight - Weight) < .@total_weight) {
				mes("Infelismente parece que você carrega muito peso, e não vai poder levar tudo.\n"
					"Diminua o peso em itens que carrega,\n"
					"depois venha negociar comigo novamente.");
				close;
			} else if (Zeny < .@ZenyRequire) {
				mes("Infelismente parece que você não possui a quantidade de Zenys necessária.\n"
					"Quando conseguir mais zenys, venha negociar comigo novamente.");
				close;
			} else {
				Zeny -= .@ZenyRequire;
				getitem(.@item,.@quant);
				mes("Estão aqui seus " + getitemname(.@item) + ".\n"
					"Lembrando a você que estes itens só funcionam em acistentes.");
				close;
			}
		}
		mes("[Itens para Assistente]\n"
			"Volte quando quiser algum item excluzivo para acistentes.");
		close;
	}
}

prontera,30,337,4	duplicate(MercPotion)	Poções de Acistentes#prtMercP	8_F_GIRL
izlude,56,139,4	duplicate(MercPotion)	Poções de Acistentes#izlMercP	4_F_HUWOMAN
pay_arche,102,167,5	duplicate(MercPotion)	Poções de Acistentes#payMercP	4_F_CAPEGIRL
