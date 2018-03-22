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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest das Orelhas de Coelho                          |
\*-----------------------------------------------------------------*/

alberta,26,229,0	script	Funcionária#bunny	4_M_01,{
	if (BUNYBND == 1) {
		mes "[Funcionária]";
		mes "Olá você aí!!";
		mes "Você gostaria de participar do Evento especial da ^529DFFOrelhas de Coelho^000000 da Corporação Kafra?";
		next;
		switch (select("Claro, está aqui os itens","Informações do Evento","Cancelar")) {
			case 1:
			mes "[Funcionária]";
			mes "Ok.";
			mes "Deixe-me verificar vendo se você trouxe todos os itens...";
			next;
			setarray(.@items[0],949,100,706,1,722,1,2213,1);
			for (.@i = 0; .@i < 8; .@i += 2) {
				if (countitem(.@items[.@i]) < .@items[.@i+1]) {
					mes "[Funcionária]";
					mes "Ooh, eu sinto muito mas você precisa trazer pelo menos:";
					mes .@items[.@i+1]+" "+getitemname(.@items[.@i])+((!.@i)?"s.":".");
					close;
				}
			}
			mes "[Funcionária]";
			mes "Perfeito, eu vejo que você pegou tudo que eu preciso para fazer a Orelhas de Coelho.";
			mes "Por favor espere um momento enquanto eu coloco eles juntos...";
			next;
			for (.@i = 0; .@i < 8; .@i += 2) {
				if (countitem(.@items[.@i]) < .@items[.@i+1]) {
					mes "[Funcionária]";
					mes "Hm? Sinto muito, mas eu realmente não posso fazer isso agora.";
					mes "Você precisa de "+.@items[.@i+1]+" "+getitemname(.@items[.@i])+((!.@i)?"s":"")+" em ordem para eu colocar isso junto na Orelhas de Coelho...";
					close;
				}
			}
			delitem(Feather,100);
			delitem(Four_Leaf_Clover,1);
			delitem(Scarlet_Jewel,1);
			delitem(Cat_Hairband,1);
			mes "[Funcionária]";
			mes "Ah, aqui vai!";
			mes "A perfeita Orelhas de Coelho!";
			mes "Bem, espero que goste.";
			getitem(Bunny_Band,1);
			BUNYBND = 0;
			next;
			mes "[Funcionária]";
			mes "Obrigado por participar deste evento especial e que é patrocinado pelos Serviços Kafra.";
			close;
			case 2:
			break;
			case 3:
			close;
		}
	} else {
		mes "[Funcionária]";
		mes "Oi você aí! Você gostaria de juntar-se ao nosso especial ^529DFFEvento da Orelhas de Coelho^000000 feito pela Corporação";
		mes "Kafra e patrocinado pela a Corporação de Mercadores de Alberta?";
		next;
		switch (select("Entrar no Evento","Informação do Evento","Cancelar")) {
			case 1:
			BUNYBND = 1;
			mes "[Funcionária]";
			mes "Ótimo!";
			mes "Obrigado por participar!";
			mes "Se você ainda não ouviu, você precisa coletar esses itens, caso você deseje que eu coloque uma Orelhas de Coelho em você!...";
			next;
			mes "[Funcionária]";
			mes "100 Pulmas,";
			mes "1 Trevo de Quatro Folhas,";
			mes "1 Orelhas de Gato e";
			mes "1 Pérola.";
			mes "É isso aí!";
			mes "Boa sorte e eu vou estar esperando por você aqui.";
			close;
			case 2:
			break;
			case 3:
			close;
		}
	}
	mes "[Funcionária]";
	mes "Para agradecer os nossos valiosos clientes, Corporação Kafra preparou um evento especial";
	mes "Onde a Funcionária irá montar Orelhas de Coelho para os aventureiros que trouxerem os itens necessários.";
	next;
	mes "[Funcionária]";
	mes "Para este tipo de item muito especial, você deve";
	mes "trazer 100 Plumas,";
	mes "1 Trevo de Quatro Folhas,";
	mes "1 Orelhas de Gato e";
	mes "1 Pérola.";
	next;
	mes "[Funcionária]";
	mes "Quando estiver pronto, volte e traga os itens para mim.";
	mes "(Patrocinado pela Corporação de Mercadores de Alberta).";
	close;
}
