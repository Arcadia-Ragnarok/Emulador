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
| - Por: Spell Master/eAthena/rAthena/Hercules                      |
| - Nota: Troca garrafas vazias e zenys por leite                   |
\*-----------------------------------------------------------------*/

-	script	MilkVendor	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME)+"]";
	mes "Ei, ei...";
	mes "Se voc� me trouxer 1 Garrafa Vazia e 15 Zenys, poderei troc�-los por 1 Leite.";
	mes "Isso parece ser bom para voc�?";
	next;
	if (select("Trocar minhas Garrafas Vazias.","Cancelar") == 1) {
		if (countitem(Empty_Bottle) <= 0) {
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Ei...";
			mes "Voc� n�o tem nenhuma Garrafa Vazia.";
			mes "Eu realmente n�o posso te dar o leite de outra forma, voc� sabe...";
			close;
		}
		.@bottles = countitem(Empty_Bottle);
		.@total_weight = .@bottles * 50;
		.@total_cost = .@bottles * 15;
		if (Zeny < .@total_cost) {
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Oh, whoa!";
			mes "Voc� n�o tem os zenys necess�rios para esse n�mero de Garrafas Vazias.";
			mes "Voc� precisa me trazer um total de "+.@total_cost+" zenys.";
			close;
		}
		if (MaxWeight - Weight < .@total_weight) {
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Hmm...";
			mes "Acho que voc� deveria abrir mais espa�o em seu invent�rio antes que eu lhe d� todo esse leite...";
			close;
		}
		Zeny -= .@total_cost;
		delitem (Empty_Bottle,.@bottles);
		getitem (Milk,.@bottles);
		close;
	}
	close;
}

prontera,73,140,0	duplicate(MilkVendor)	Vendedora de Leite#prt	4_M_04
hugel,105,169,5	duplicate(MilkVendor)	Vendedora de Leite#hug	4_F_01
lighthalzen,220,122,3	duplicate(MilkVendor)	Vendedor de Leite#lhz	4_F_01
moscovia,199,110,3	duplicate(MilkVendor)	Vendedora de Leite#mosc	4_F_RUSWOMAN1