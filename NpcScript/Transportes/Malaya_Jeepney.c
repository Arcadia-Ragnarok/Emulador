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
| - Desenvolvido por: Spell Master 11/08/2017                       |
| - Nota: Transporte de ônibus em Malaya                            |
\*-----------------------------------------------------------------*/

-	script	JeepneyMal	FAKE_NPC,{
	.@JeepneyID = atoi(strnpcinfo(NPC_NAME_HIDDEN));
	.@JeepneyMap$ = strnpcinfo(NPC_NAME_UNIQUE);

	mes "[Motorista do Jeepney]";
	mes "Olá eu sou o motorista do Jeepney para ^1561EA"+.@JeepneyID+"^000000 passageiros.";
	mes "Em que posso ajudar?";
	next;
	switch(select("Embarcar","Sobre os Jeepney","Localização dos Jeepney")) {
		case 1:
		mes "[Motorista do Jeepney]";
		if (getmapusers(.@JeepneyMap$) >= .@JeepneyID) {
			mes "Sinto muito mas o Jeepney está lotado no momento.";
			mes "Você pode tentar embarcar em outro Jeepney";
			close;
		} else {
			mes "Faça um boa viagem";
			close2; warp (.@JeepneyMap$,29,24); end;
		}
		case 2:
		mes "[Motorista do Jeepney]";
		mes "É a sua primeira vez em Port Malaya?";
		mes "Os motoristas da Jeepney aqui também promovem Jeepneys, então deixe-me explicá-los para você.";
		next;
		mes "[Motorista do Jeepney]";
		mes "Os Jeepneys foram desenvolvidos pela primeira vez para transportar mercadorias rapidamente";
		mes "Mas agora são usados como transporte público.";
		next;
		mes "[Motorista do Jeepney]";
		if (.@JeepneyMap$ == "ma_zif01") {
			mes "Como todos têm gostos diferentes, você pode ver aqueles com decorações legais e elaboradas.";
			mes "Claro que você não precisa dirigi-los, mas você pode montá-los, então sinta-se livre para fazê-lo.";
		} else if (.@JeepneyMap$ == "ma_zif02") {
			mes "Eu modifiquei meu Jeepney eu mesmo...";
			mes "Por razões de segurança, há um limite para o número de passageiros";
			mes "É seguro, portanto, não há preocupações...";
		} else if (.@JeepneyMap$ == "ma_zif03") {
			mes "Todos eles parecem diferentes, dependendo de seus motoristas...";
			mes "Agora possui uma grande fama no Port Malaya.";
		} else if (.@JeepneyMap$ == "ma_zif04") {
			mes "Você vem para Port Malaya, você pode embarcar em um Jeepney.";
			mes "Ha ha ha, é claro que você não pode dirigi-lo sozinho.";
		} else if (.@JeepneyMap$ == "ma_zif05") {
			mes "Por razões de segurança, Jeepneys tem um limite no número de passageiros.";
		} else if (.@JeepneyMap$ == "ma_zif06") {
			mes "Este Jeepney é o meu próprio trabalho.";
			mes "Ha ha ha...";
			mes "Está legal, certo? Ha ha ha";
			mes "Mesmo que o cliente seja rei, não posso deixar você dirigi-lo...";
		} else if (.@JeepneyMap$ == "ma_zif07") {
			mes "Jeepney é o transporte público de Port Malaya.";
			mes "Portanto, eles estão em todos os lugares.";
			mes "E é grátis!";
			mes "Eu sei que todos eles têm diferentes limites de passageiros";
			mes "Mas isso não é problema porque eles estão em todos os lugares.";
		} else if (.@JeepneyMap$ == "ma_zif08") {
			mes "Jeepneys são transportes públicos, então a segurança é a nossa prioridade.";
			mes "Meu Jeepney recebeu a melhor classificação do Porto de Malaya.";
			mes "Significado!!";
			mes "Que é perfeitamente seguro!";
		} else if (.@JeepneyMap$ == "ma_zif09") {
			mes "Como todos têm gostos diferentes, você pode ver aqueles com decorações legais e elaboradas.";
			mes "Claro que você não precisa dirigi-los, mas você pode montá-los, então sinta-se livre para fazê-lo.";
		}
		close;
		case 3:
		mes "[Motorista do Jeepney]";
		mes "Ah! Outros Jeepneys estão em operação, é claro.";
		next;
		mes "[Motorista do Jeepney]";
		mes "No Port Malaya há 12, 30 e 60 passageiros Jeepneys são 3 de cada em operação.";
		next;
		switch (select("12 passageiros.","30 passageiros.","60 passageiros.")) {
			case 1:
			viewpoint 1,237,240,1,0x1561EA;
			viewpoint 1,67,44,2,0x1561EA;
			viewpoint 1,282,129,3,0x1561EA;
			.@Jeepney = 12;
			break;
			case 2:
			viewpoint 1,134,250,4,0xF7E009;
			viewpoint 1,341,153,5,0xF7E009;
			viewpoint 1,293,290,6,0xF7E009;
			.@Jeepney = 30;
			break;
			case 3:
			viewpoint 1,242,221,7,0xBB0000;
			viewpoint 1,62,245,8,0xBB0000;
			viewpoint 1,257,58,9,0xBB0000;
			.@Jeepney = 60;
			break;
		}
		mes "[Motorista do Jeepney]";
		mes "A localização dos Jeepney "+.@Jeepney+" foram marcados no seu mapa.";
		next;
		mes "[Motorista do Jeepney]";
		mes "Tenha uma boa viagem.";
		close;
	}
}

malaya,237,240,4	duplicate(JeepneyMal)	Motorista Jeepney#12::ma_zif01	4_M_MALAYA
malaya,67,44,4	duplicate(JeepneyMal)	Motorista Jeepney#12::ma_zif02	4_M_MALAYA
malaya,282,129,4	duplicate(JeepneyMal)	Motorista Jeepney#12::ma_zif03	4_M_MALAYA

malaya,134,250,6	duplicate(JeepneyMal)	Motorista Jeepney#30::ma_zif04	4_M_MALAYA
malaya,341,153,4	duplicate(JeepneyMal)	Motorista Jeepney#30::ma_zif05	4_M_MALAYA
malaya,293,290,6	duplicate(JeepneyMal)	Motorista Jeepney#30::ma_zif06	4_M_MALAYA

malaya,242,221,4	duplicate(JeepneyMal)	Motorista Jeepney#60::ma_zif07	4_M_MALAYA
malaya,62,245,6	duplicate(JeepneyMal)	Motorista Jeepney#60::ma_zif08	4_M_MALAYA
malaya,257,58,6	duplicate(JeepneyMal)	Motorista Jeepney#60::ma_zif09	4_M_MALAYA
