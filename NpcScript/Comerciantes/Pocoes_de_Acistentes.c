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
| - Info: Venda de Po��es para Acistentes.                          |
\*-----------------------------------------------------------------*/

-	script	MercPotion	FAKE_NPC,{
	mes("[Itens para Assistente]\n"
		"Ol�, eu vendo mercadorias que os Assistentes podem utilizar.\n"
		"^BB0000E somente �til para acistentes,\n"
		"n�o sendo poss�vel usa-los em voc� ou outra pessoa^000000.");
	next;
	mes("[Itens para Assistente]\n"
		"Veja meus produtos e me diga se quer comprar algo.");
	next;
	switch (select("Po��o Vermelha", "Po��o Azul", "Po��o de Concentra��o", "Po��o do Despertar", "Po��o da F�ria Selvagem", "Nada Obrigado")) {
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
		"Me diga quantos voc� quer?\n"
		"Mas s� posso vender no m�ximo 100 por vez!\n"
		"Caso queira cancelar digite \"0\",  entendido?");
	next;
	input(.@quant);
	if (!.@quant) {
		mes("[Itens para Assistente]\n"
			"Voc� digitou zero!\n"
			"A negocia��o foi cancelada.");
		close;
	} else if (.@quant > 100) {
		mes("[Itens para Assistente]\n"
			"Eu disse que s� poderia vender 100 por vez.");
		close;
	} else {
		.@ZenyRequire = .@Zeny * .@quant;
		.@weight = getiteminfo(.@item,ITEM_WEIGHT);
		.@total_weight = .@quant * .@weight;
		mes("[Itens para Assistente]\n"
			"Certo voc� quer comprar " + .@quant + " " + getitemname(.@item) + ",  n�o � mesmo?\n"
			"Ent�o ser�o necess�rios " + .@ZenyRequire + " Zenys.");
		next;
		mes("[Itens para Assistente]\n"
			"Deseja comprar-los agora?");
		next;
		if (select("Sim", "N�o. Mudei de id�ia") == 1) {
			mes("[Itens para Assistente]");
			if ((MaxWeight - Weight) < .@total_weight) {
				mes("Infelismente parece que voc� carrega muito peso, e n�o vai poder levar tudo.\n"
					"Diminua o peso em itens que carrega,\n"
					"depois venha negociar comigo novamente.");
				close;
			} else if (Zeny < .@ZenyRequire) {
				mes("Infelismente parece que voc� n�o possui a quantidade de Zenys necess�ria.\n"
					"Quando conseguir mais zenys, venha negociar comigo novamente.");
				close;
			} else {
				Zeny -= .@ZenyRequire;
				getitem(.@item,.@quant);
				mes("Est�o aqui seus " + getitemname(.@item) + ".\n"
					"Lembrando a voc� que estes itens s� funcionam em acistentes.");
				close;
			}
		}
		mes("[Itens para Assistente]\n"
			"Volte quando quiser algum item excluzivo para acistentes.");
		close;
	}
}

prontera,30,337,4	duplicate(MercPotion)	Po��es de Acistentes#prtMercP	8_F_GIRL
izlude,56,139,4	duplicate(MercPotion)	Po��es de Acistentes#izlMercP	4_F_HUWOMAN
pay_arche,102,167,5	duplicate(MercPotion)	Po��es de Acistentes#payMercP	4_F_CAPEGIRL
