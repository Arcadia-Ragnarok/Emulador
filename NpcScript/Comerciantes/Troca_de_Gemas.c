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
| - Info: Troca de Gemas, 2 de uma cor por outra.                   |
\*-----------------------------------------------------------------*/

payon,173,238,5	script	Jade#GenStone	4_M_SAGE_A,{
	mes("[Jade]\n"
		"Traga para mim 2 Gemas da mesma cor, e eu vou troc�-las por Gemas de cores diferentes.");
	next;
	switch (select("Gemas Azuis para Vermelhas!", "Gemas Vermelhas para Amarelas!", "Gemas Amarelas para Azuis!")) {
		case 1: callsub(S_TradeGems, 717, 716);
		case 2: callsub(S_TradeGems, 716, 715);
		case 3: callsub(S_TradeGems, 715, 717);
	}

	S_TradeGems:
	if (countitem(getarg(0)) < 2) {
		mes("[Jade]\n"
			"Haha...!\n"
			"Voc� est� de brincadeira comigo, certo?\n"
			"Eu n�o poderei fazer este servi�o se voc� n�o me trouxer as 2 " + getitemname(getarg(0)) + "s!");
		close;
	} else {
		.@gems = countitem(getarg(0)) / 2;
		mes("[Jade]\n"
			"Acredito que posso criar um total de " + .@gems + " " + getitemname(getarg(1)) + "s usando as " + getitemname(getarg(0)) + "s que voc� tem no momento.\n"
			"O que gostaria de fazer?");
		next;
		switch (select("Me d� quantas puder", "Quero digitar quantas preciso", "Deixa pra l�")) {
			case 1:
			delitem(getarg(0), .@gems * 2);
			getitem(getarg(1), .@gems);
			break;
			case 2:
			mes("[Jade]\n"
				"Ent�o aqui est�!\n"
				"Sinta-se livre para voltar quando quiser.\n"
				"Hm, o que voc� est� olhando?\n"
				"Tem algo no meu rosto!?!?");
			next;
			while (true) {
				input(.@input,0,101);
				if (.@input == 0) {
					mes("[Jade]\n"
						"Ent�o quantas gemas vai querer?\n"
						"O m�ximo que voc� poder� escolher � 100.");
					close;
				} else if (.@input > 100) {
					mes("[Jade]\n"
						"Hunn...\n"
						"Eu s� posso realizar a troca de at� 100 gemas.");
					next;
				} else if (.@gems < .@input) {
					mes("[Jade]\n"
						"Nenhuma!?\n"
						"Acho que voc� precisa mudar de ideia...");
					next;
				} else {
					break;
				}
			}
			delitem(getarg(0), .@input * 2);
			getitem(getarg(1), .@input);
			break;
			case 3:
			mes("[Jade]\n"
				"Claro, sem problema.\n"
				"Volte quando quiser.");
			close;
		}
		mes("[Jade]\n"
			"Ent�o aqui est�!\n"
			"Sinta-se livre para voltar quando quiser.\n"
			"Hm, o que voc� est� olhando?\n"
			"Tem algo no meu rosto!?!?");
		close;
	}
}
