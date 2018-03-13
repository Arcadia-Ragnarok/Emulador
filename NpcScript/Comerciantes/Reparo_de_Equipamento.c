/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Conserta equipamentos danificados.                        |
\*-----------------------------------------------------------------*/

-	script	repairmain	FAKE_NPC,{
	mes "[Reparador]";
	mes "Ei voc�!";
	mes "Voc� precisa que eu repare algum item?";
	mes "Voc� pode contar comigo para reparar itens!";
	next;
	switch(select("Sim, fa�a os reparos.", "Nenhum no momento.")) {
		case 1:
		.@checkitem = 1;
		while (true) {
			if (getbrokenid(.@checkitem) == 0) {
				break;
			}
			++.@checkitem;
		}
		--.@checkitem;
		if (!.@checkitem) {
			mes "[Reparador]";
			mes "Oh, isso � incrivel!";
			mes "Parece que voc� toma muito cuidado com as suas coisas.";
			mes "Nenhum dos seus itens foi danificado!";
			next;
			mes "[Reparador]";
			mes "Se todos fossem como voc�, eu estaria desempregado!!";
			mes "Haha...!";
			close;
		}
		mes "[Reparador]";
		mes "Hmm...";
		mes "Deixe-me ver...";
		mes "De todos os seus itens, " + .@checkitem + " est�o danificados.";
		mes "Gostaria de repar�-los?";
		next;
		.@totalcost = 5000 * .@checkitem;
		mes "[Reparador]";
		mes "Cada reparo custa 5.000 Zenys.";
		mes "Ent�o para reparar todos os seus itens voc� ir� pagar " + .@totalcost + " Zeny!";
		mes "Voc� quer mesmo reparar os seus itens?";
		next;
		switch(select("Sim por favor.", "N�o obrigado.")) {
			case 1:
			if (Zeny < .@totalcost) {
				mes "[Reparador]";
				mes "Ei ei...";
				mes "Olhe a sua carteira antes de pedir para repararem um item, cara!";
				mes "Eu n�o posso reparar nada porque voc� n�o possui dinheiro suficiente.";
				close;
			}
			.@checkitem2 = 1;
			while (true) {
				if (getbrokenid(.@checkitem2) == 0) {
					break;
				}
				++.@checkitem2;
			}
			--.@checkitem2;
			if (.@checkitem == .@checkitem2) {
				Zeny -= .@totalcost;
				while (.@checkitem) {
					repair(.@checkitem);
					--.@checkitem;
				}
				mes "[Reparador]";
				mes "Tudo pronto.";
				mes "Agora, tente ter um pouco mais de cuidado.";
				mes "Voc� sabe, itens tem vida tamb�m.";
				close;
			} else {
				mes "[Reparador]";
				mes "Mmm?";
				mes "Tem algo errado.";
				mes "Espere...";
				mes "Pegue os itens que voc� quer reparar e volte aqui.";
				close;
			}
			case 2:
			mes "[Reparador]";
			mes "Bem, n�o � da minha conta, mas n�o � bom levar itens quebrados embora.";
			mes "Voc� deve repar�-los o mais r�pido possivel!";
			close;
		}
		case 2:
		mes "[Reparador]";
		mes "Hohoho...";
		mes "Voc� n�o tem nada para fazer aqui se voc� n�o tiver itens para reparar.";
		close;
	}
}

alberta_in,31,65,4	duplicate(repairmain)	Reparador#albRepair	4_M_04
moc_ruins,107,94,4	duplicate(repairmain)	Reparador#mocRepair	4W_M_03
payon,143,165,0	duplicate(repairmain)	Reparador#payRepair	4_M_ORIENT01
prt_in,63,54,2	duplicate(repairmain)	Reparador#prtRepair	4_M_04
yuno_in01,175,28,3	duplicate(repairmain)	Reparador#yunRepair	4_M_04
geffen_in,34,166,3	duplicate(repairmain)	Reparador#gefRepair	4_M_04
aldeba_in,38,60,3	duplicate(repairmain)	Reparador#aldRepair	4_M_04
lhz_in02,284,14,3	duplicate(repairmain)	Reparador#lhzRepair	4_M_04
bat_room,138,144,4	duplicate(repairmain)	Reparador#bgRepair	4_M_04
