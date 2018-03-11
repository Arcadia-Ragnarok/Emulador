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
| - Vers�o: Spell Master                                            |
| - Nota: Troca de Gemas, 2 de uma cor por outra                    |
\*-----------------------------------------------------------------*/

payon,173,238,5	script	Jade#GenStone	4_M_SAGE_A,{
	mes "[Jade]";
	mes "Traga para mim 2 Gemas da mesma cor, e eu vou troc�-las por Gemas de cores diferentes.";
	next;
	switch(select("Gemas Azuis para Vermelhas!", "Gemas Vermelhas para Amarelas!", "Gemas Amarelas para Azuis!")) {
		case 1: callsub(S_TradeGems, 717, 716);
		case 2: callsub(S_TradeGems, 716, 715);
		case 3: callsub(S_TradeGems, 715, 717);
	}

	S_TradeGems:
	if (countitem(getarg(0)) < 2) {
		mes "[Jade]";
		mes "Haha...!";
		mes "Voc� est� de brincadeira comigo, certo?";
		mes "Eu n�o poderei fazer este servi�o se voc� n�o me trouxer as 2 " + getitemname(getarg(0)) + "s!";
		close;
	} else {
		.@gems = countitem(getarg(0)) / 2;
		mes "[Jade]";
		mes "Acredito que posso criar um total de " + .@gems + " " + getitemname(getarg(1)) + "s usando as " + getitemname(getarg(0)) + "s que voc� tem no momento.";
		mes "O que gostaria de fazer?";
		next;
		switch(select("Me d� quantas puder", "Quero digitar quantas preciso", "Deixa pra l�")) {
			case 1:
			delitem(getarg(0), .@gems * 2);
			getitem(getarg(1), .@gems);
			break;
			case 2:
			mes "[Jade]";
			mes "Ent�o aqui est�!";
			mes "Sinta-se livre para voltar quando quiser.";
			mes "Hm, o que voc� est� olhando?";
			mes "Tem algo no meu rosto!?!?";
			next;
			while(1) {
				input (.@input,0,101);
				if (.@input == 0) {
					mes "[Jade]";
					mes "Ent�o quantas gemas vai querer?";
					mes "O m�ximo que voc� poder� escolher � 100.";
					close;
				} else if (.@input > 100) {
					mes "[Jade]";
					mes "Hunn...";
					mes "Eu s� posso realizar a troca de at� 100 gemas.";
					next;
				} else if (.@gems < .@input) {
					mes "[Jade]";
					mes "Nenhuma!?";
					mes "Acho que voc� precisa mudar de ideia...";
					next;
				}
				else {
					break;
				}
			}
			delitem(getarg(0), .@input * 2);
			getitem(getarg(1), .@input);
			break;
			case 3:
			mes "[Jade]";
			mes "Claro, sem problema.";
			mes "Volte quando quiser.";
			close;
		}
		mes "[Jade]";
		mes "Ent�o aqui est�!";
		mes "Sinta-se livre para voltar quando quiser.";
		mes "Hm, o que voc� est� olhando?";
		mes "Tem algo no meu rosto!?!?";
		close;
	}
}
