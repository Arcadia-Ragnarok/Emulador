/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Por: Spell Master 03/08/2014                                    |
| - Vers�o Atual: Spell Master 07/04/2017                           |
| - Nota: Venda de Po��es para Acistentes.                          |
\*-----------------------------------------------------------------*/

-	script	MercPotion	FAKE_NPC,{
	mes "[Itens para Assistente]";
	mes "Ol�, eu vendo mercadorias que os Assistentes podem utilizar.";
	mes "^bb0000E somente �til para acistentes, n�o sendo poss�vel usa-los em voc� ou outra pessoa^000000.";
	next;
	mes "[Itens para Assistente]";
	mes "Veja meus produtos e me diga se quer comprar algo.";
	next;
	switch(select("Po��o Vermelha","Po��o Azul","Po��o de Concentra��o","Po��o do Despertar","Po��o da F�ria Selvagem","Nada Obrigado") ) {
		case 1: .@item = 12184; .@Zeny = 2500; break;
		case 2: .@item = 12185; .@Zeny = 5000; break;
		case 3: .@item = 12241; .@Zeny = 800;  break;
		case 4: .@item = 12242; .@Zeny = 1500; break;
		case 5: .@item = 12243; .@Zeny = 3000; break;
		case 6:
		mes "[Itens para Assistente]";
		mes "Volte quando quiser algum item excluzivo para acistentes.";
		close;
	}
	mes "[Itens para Assistente]";
	mes "1 "+getitemname(.@item)+" custa "+.@Zeny+" Zenys.";
	next;
	mes "[Itens para Assistente]";
	mes "Me diga quantos voc� quer?";
	mes "Mas s� posso vender no m�ximo 100 por vez!";
	mes "Caso queira cancelar digite \"0\", entendido?";
	next;
	input(.@quant);
	if (!.@quant) {
		mes "[Itens para Assistente]";
		mes "Voc� digitou zero!";
		mes "A negocia��o foi cancelada.";
		close;
	}
	else if (.@quant > 100) {
		mes "[Itens para Assistente]";
		mes "Eu disse que s� poderia vender 100 por vez.";
		close;
	}
	else {
		.@ZenyRequire = .@Zeny * .@quant;
		.@weight = getiteminfo(.@item,ITEM_WEIGHT);
		.@total_weight = .@quant * .@weight;
		mes "[Itens para Assistente]";
		mes "Certo voc� quer comprar "+.@quant+" "+getitemname(.@item)+", n�o � mesmo?";
		mes "Ent�o ser�o necess�rios "+.@ZenyRequire+" Zenys.";
		next;
		mes "[Itens para Assistente]";
		mes "Deseja comprar-los agora?";
		next;
		if (select("Sim","N�o. Mudei de id�ia") == 1) {
			mes "[Itens para Assistente]";
			if ((MaxWeight - Weight) < .@total_weight) {
				mes "Infelismente parece que voc� carrega muito peso, e n�o vai poder levar tudo.";
				mes "Diminua o peso em itens que carrega, depois venha negociar comigo novamente.";
				close;
			}
			else if (Zeny < .@ZenyRequire) {
				mes "Infelismente parece que voc� n�o possui a quantidade de Zenys necess�ria.";
				mes "Quando conseguir mais zenys, venha negociar comigo novamente.";
				close;
			}
			else {
				Zeny -= .@ZenyRequire;
				getitem(.@item,.@quant);
				mes "Est�o aqui seus "+getitemname(.@item)+".";
				mes "Lembrando a voc� que estes itens s� funcionam em acistentes.";
				close;
			}
		}
		mes "[Itens para Assistente]";
		mes "Volte quando quiser algum item excluzivo para acistentes.";
		close;
	}
}

prontera,30,337,4	duplicate(MercPotion)	Po��es de Acistentes#prt	8_F_GIRL
izlude,55,170,4	duplicate(MercPotion)	Po��es de Acistentes#izl	4_F_HUWOMAN
pay_arche,102,167,5	duplicate(MercPotion)	Po��es de Acistentes#pay	4_F_CAPEGIRL