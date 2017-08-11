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
| - Nota: Transporte de �nibus em Malaya                            |
\*-----------------------------------------------------------------*/

-	script	JeepneyMal	FAKE_NPC,{
	.@JeepneyID = atoi(strnpcinfo(NPC_NAME_HIDDEN));
	.@JeepneyMap$ = strnpcinfo(NPC_NAME_UNIQUE);

	mes "[Motorista do Jeepney]";
	mes "Ol� eu sou o motorista do Jeepney para ^1561EA"+.@JeepneyID+"^000000 passageiros.";
	mes "Em que posso ajudar?";
	next;
	switch(select("Embarcar","Sobre os Jeepney","Localiza��o dos Jeepney")) {
		case 1:
		mes "[Motorista do Jeepney]";
		if (getmapusers(.@JeepneyMap$) >= .@JeepneyID) {
			mes "Sinto muito mas o Jeepney est� lotado no momento.";
			mes "Voc� pode tentar embarcar em outro Jeepney";
			close;
		} else {
			mes "Fa�a um boa viagem";
			close2; warp (.@JeepneyMap$,29,24); end;
		}
		case 2:
		mes "[Motorista do Jeepney]";
		mes "� a sua primeira vez em Port Malaya?";
		mes "Os motoristas da Jeepney aqui tamb�m promovem Jeepneys, ent�o deixe-me explic�-los para voc�.";
		next;
		mes "[Motorista do Jeepney]";
		mes "Os Jeepneys foram desenvolvidos pela primeira vez para transportar mercadorias rapidamente";
		mes "Mas agora s�o usados como transporte p�blico.";
		next;
		mes "[Motorista do Jeepney]";
		if (.@JeepneyMap$ == "ma_zif01") {
			mes "Como todos t�m gostos diferentes, voc� pode ver aqueles com decora��es legais e elaboradas.";
			mes "Claro que voc� n�o precisa dirigi-los, mas voc� pode mont�-los, ent�o sinta-se livre para faz�-lo.";
		} else if (.@JeepneyMap$ == "ma_zif02") {
			mes "Eu modifiquei meu Jeepney eu mesmo...";
			mes "Por raz�es de seguran�a, h� um limite para o n�mero de passageiros";
			mes "� seguro, portanto, n�o h� preocupa��es...";
		} else if (.@JeepneyMap$ == "ma_zif03") {
			mes "Todos eles parecem diferentes, dependendo de seus motoristas...";
			mes "Agora possui uma grande fama no Port Malaya.";
		} else if (.@JeepneyMap$ == "ma_zif04") {
			mes "Voc� vem para Port Malaya, voc� pode embarcar em um Jeepney.";
			mes "Ha ha ha, � claro que voc� n�o pode dirigi-lo sozinho.";
		} else if (.@JeepneyMap$ == "ma_zif05") {
			mes "Por raz�es de seguran�a, Jeepneys tem um limite no n�mero de passageiros.";
		} else if (.@JeepneyMap$ == "ma_zif06") {
			mes "Este Jeepney � o meu pr�prio trabalho.";
			mes "Ha ha ha...";
			mes "Est� legal, certo? Ha ha ha";
			mes "Mesmo que o cliente seja rei, n�o posso deixar voc� dirigi-lo...";
		} else if (.@JeepneyMap$ == "ma_zif07") {
			mes "Jeepney � o transporte p�blico de Port Malaya.";
			mes "Portanto, eles est�o em todos os lugares.";
			mes "E � gr�tis!";
			mes "Eu sei que todos eles t�m diferentes limites de passageiros";
			mes "Mas isso n�o � problema porque eles est�o em todos os lugares.";
		} else if (.@JeepneyMap$ == "ma_zif08") {
			mes "Jeepneys s�o transportes p�blicos, ent�o a seguran�a � a nossa prioridade.";
			mes "Meu Jeepney recebeu a melhor classifica��o do Porto de Malaya.";
			mes "Significado!!";
			mes "Que � perfeitamente seguro!";
		} else if (.@JeepneyMap$ == "ma_zif09") {
			mes "Como todos t�m gostos diferentes, voc� pode ver aqueles com decora��es legais e elaboradas.";
			mes "Claro que voc� n�o precisa dirigi-los, mas voc� pode mont�-los, ent�o sinta-se livre para faz�-lo.";
		}
		close;
		case 3:
		mes "[Motorista do Jeepney]";
		mes "Ah! Outros Jeepneys est�o em opera��o, � claro.";
		next;
		mes "[Motorista do Jeepney]";
		mes "No Port Malaya h� 12, 30 e 60 passageiros Jeepneys s�o 3 de cada em opera��o.";
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
		mes "A localiza��o dos Jeepney "+.@Jeepney+" foram marcados no seu mapa.";
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
