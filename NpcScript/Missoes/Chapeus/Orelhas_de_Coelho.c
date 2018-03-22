/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest das Orelhas de Coelho                          |
\*-----------------------------------------------------------------*/

alberta,26,229,0	script	Funcion�ria#bunny	4_M_01,{
	if (BUNYBND == 1) {
		mes "[Funcion�ria]";
		mes "Ol� voc� a�!!";
		mes "Voc� gostaria de participar do Evento especial da ^529DFFOrelhas de Coelho^000000 da Corpora��o Kafra?";
		next;
		switch (select("Claro, est� aqui os itens","Informa��es do Evento","Cancelar")) {
			case 1:
			mes "[Funcion�ria]";
			mes "Ok.";
			mes "Deixe-me verificar vendo se voc� trouxe todos os itens...";
			next;
			setarray(.@items[0],949,100,706,1,722,1,2213,1);
			for (.@i = 0; .@i < 8; .@i += 2) {
				if (countitem(.@items[.@i]) < .@items[.@i+1]) {
					mes "[Funcion�ria]";
					mes "Ooh, eu sinto muito mas voc� precisa trazer pelo menos:";
					mes .@items[.@i+1]+" "+getitemname(.@items[.@i])+((!.@i)?"s.":".");
					close;
				}
			}
			mes "[Funcion�ria]";
			mes "Perfeito, eu vejo que voc� pegou tudo que eu preciso para fazer a Orelhas de Coelho.";
			mes "Por favor espere um momento enquanto eu coloco eles juntos...";
			next;
			for (.@i = 0; .@i < 8; .@i += 2) {
				if (countitem(.@items[.@i]) < .@items[.@i+1]) {
					mes "[Funcion�ria]";
					mes "Hm? Sinto muito, mas eu realmente n�o posso fazer isso agora.";
					mes "Voc� precisa de "+.@items[.@i+1]+" "+getitemname(.@items[.@i])+((!.@i)?"s":"")+" em ordem para eu colocar isso junto na Orelhas de Coelho...";
					close;
				}
			}
			delitem(Feather,100);
			delitem(Four_Leaf_Clover,1);
			delitem(Scarlet_Jewel,1);
			delitem(Cat_Hairband,1);
			mes "[Funcion�ria]";
			mes "Ah, aqui vai!";
			mes "A perfeita Orelhas de Coelho!";
			mes "Bem, espero que goste.";
			getitem(Bunny_Band,1);
			BUNYBND = 0;
			next;
			mes "[Funcion�ria]";
			mes "Obrigado por participar deste evento especial e que � patrocinado pelos Servi�os Kafra.";
			close;
			case 2:
			break;
			case 3:
			close;
		}
	} else {
		mes "[Funcion�ria]";
		mes "Oi voc� a�! Voc� gostaria de juntar-se ao nosso especial ^529DFFEvento da Orelhas de Coelho^000000 feito pela Corpora��o";
		mes "Kafra e patrocinado pela a Corpora��o de Mercadores de Alberta?";
		next;
		switch (select("Entrar no Evento","Informa��o do Evento","Cancelar")) {
			case 1:
			BUNYBND = 1;
			mes "[Funcion�ria]";
			mes "�timo!";
			mes "Obrigado por participar!";
			mes "Se voc� ainda n�o ouviu, voc� precisa coletar esses itens, caso voc� deseje que eu coloque uma Orelhas de Coelho em voc�!...";
			next;
			mes "[Funcion�ria]";
			mes "100 Pulmas,";
			mes "1 Trevo de Quatro Folhas,";
			mes "1 Orelhas de Gato e";
			mes "1 P�rola.";
			mes "� isso a�!";
			mes "Boa sorte e eu vou estar esperando por voc� aqui.";
			close;
			case 2:
			break;
			case 3:
			close;
		}
	}
	mes "[Funcion�ria]";
	mes "Para agradecer os nossos valiosos clientes, Corpora��o Kafra preparou um evento especial";
	mes "Onde a Funcion�ria ir� montar Orelhas de Coelho para os aventureiros que trouxerem os itens necess�rios.";
	next;
	mes "[Funcion�ria]";
	mes "Para este tipo de item muito especial, voc� deve";
	mes "trazer 100 Plumas,";
	mes "1 Trevo de Quatro Folhas,";
	mes "1 Orelhas de Gato e";
	mes "1 P�rola.";
	next;
	mes "[Funcion�ria]";
	mes "Quando estiver pronto, volte e traga os itens para mim.";
	mes "(Patrocinado pela Corpora��o de Mercadores de Alberta).";
	close;
}
