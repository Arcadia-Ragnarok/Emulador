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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Troca garrafas vazias e zenys por leite                   |
\*-----------------------------------------------------------------*/

-	script	MilkVendor	FAKE_NPC,{
	.@npc$ = strnpcinfo(NPC_NAME_VISIBLE);
	mes("[" + .@npc$ +"]\n"
		"Ei, ei...\n"
		"Se voc� me trouxer 1 Garrafa Vazia e 15 Zenys, poderei troc�-los por 1 Leite.\n"
		"Isso parece ser bom para voc�?");
	next;
	if (select("Trocar minhas Garrafas Vazias", "Cancelar") == 1) {
		if (!countitem(Empty_Bottle)) {
			mes("[" + .@npc$ +"]\n"
				"Ei...\n"
				"Voc� n�o tem nenhuma Garrafa Vazia.\n"
				"Eu realmente n�o posso te dar o leite de outra forma, voc� sabe...");
			close;
		}
		.@bottles = countitem(Empty_Bottle);
		.@total_weight = .@bottles * 50;
		.@total_cost = .@bottles * 15;
		if (Zeny < .@total_cost) {
			mes("[" + .@npc$ +"]\n"
				"Oh, whoa!\n"
				"Voc� n�o tem os zenys necess�rios para esse n�mero de Garrafas Vazias.\n"
				"Voc� precisa me trazer um total de " + .@total_cost + " zenys.");
			close;
		} else if (MaxWeight - Weight < .@total_weight) {
			mes("[" + .@npc$ +"]\n"
				"Hmm...\n"
				"Acho que voc� deveria abrir mais espa�o em seu invent�rio antes que eu lhe d� todo esse leite...");
			close;
		} else {
			Zeny -= .@total_cost;
			delitem(Empty_Bottle, .@bottles);
			getitem(Milk, .@bottles);
			close;
		}
	}
	close;
}

prontera,73,140,0	duplicate(MilkVendor)	Vendedora de Leite#prtMilk	4_M_04
hugel,105,169,5	duplicate(MilkVendor)	Vendedora de Leite#hugMilk	4_F_01
lighthalzen,220,122,3	duplicate(MilkVendor)	Vendedor de Leite#lhzMilk	4_F_01
moscovia,199,110,3	duplicate(MilkVendor)	Vendedora de Leite#moscMilk	4_F_RUSWOMAN1
