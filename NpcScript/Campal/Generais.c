/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master 21/02/2017                              |
| - Nota: Generais e seus acistentes da batalha campal              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Azul] -
// ------------------------------------------------------------------
bat_room,160,159,3	script	General Guillaume#bg	4_M_KY_KIYOM,{
	if ((agitcheck()) || (agitcheck2())) {
		mes("[General Guillaume]\n No momento seu reino est� em uma guerra.\n Porque n�o mostra sua bravura ajudando seu povo?");
		close;
	} else if (BaseLevel < 80) {
		mes("[General Guillaume]\n Me pergunto o que algu�m t�o jovem como voc� faz num lugar como esse.");
		close;
	} else {
		cutin("bat_kiyom2", 2);
		mes("[General Guillaume]\n Aventureir" + (Sex == SEX_MALE ? "o" : "a") + " de sangue quente, n�o precisamos de sua habilidade para ganhar esta batalha.");
		next;
		cutin("bat_kiyom1", 2);
		mes ("[General Guillaume]\n Nosso rei, Marcel Marollo VII, est�o muito doente.\n Vossa Majestade declarou que seria eu ou Pr�ncipe Croix o pr�ximo rei dentre seus 9 filhos.");
		next;
		mes("[General Guillaume]\n Dois reis n�o podem dividir uma na��o!\n Somente o vitorioso desta batalha ser� coroado.");
		next;
		mes("[General Guillaume]\n Isto n�o � apenas uma batalha entre n�s.\n Esta batalha determinar� o futuro deste pa�s.\n Eu jurei por minha honra que serei o �nico que proteger� Maroll de amea�as vindas de fora.");
		next;
		switch(select("Sim, eu quero me juntar a voc�", "Cancelar")) {
			case 1:
			mes("[General Guillaume]\n Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + " ao meu ex�rcito.\n Seus olhos me dizem que voc� � um soldado em que eu posso confiar.");
			next;
			mes("[General Guillaume]\n Suba as escadas e se aliste para a batalha com seus camaradas.\n Tenho certeza que eles o receber�o de cora��o aberto!");
			Bat_Team = 1;
			close2; cutin("", 255); end;
			case 2:
			mes("[General Guillaume]\n � uma pena seus taletos seriam realmente �teis!");
			close2; cutin("", 255); end;
		}
	}
}

// ------------------------------------------------------------------
bat_room,161,160,3	script	Pajem de Guillaume#bg_pg	4_M_KY_HEAD,{
	if (!Bat_Team || Bat_Team == 2) {
		mes("[Pajem de Guillaume]\n Para de juntar ao nosso ex�rcito fale com o ^2C5EC0General Guillaume^000000");
	} else {
		mes("[Pajem de Guillaume]\n Para adentrar na batalha suba as escadas e fale com nossos camaradas.");
	}
	close;
}
bat_room,161,158,3	duplicate(Pajem de Guillaume#bg_pg)	Pajem de Guillaume#bg_pg2	4_M_KY_HEAD

// ------------------------------------------------------------------
bat_room,162,157,3	script	#Flag_Guillaume	1_FLAG_LION,{ end; }
bat_room,162,160,3	duplicate(#Flag_Guillaume)	#Flag_Guillaume2	1_FLAG_LION

// ------------------------------------------------------------------
// - [Vermelho] -
// ------------------------------------------------------------------
bat_room,160,140,3	script	Pr�ncipe Croix#bg	4_M_CRU_CRUA,{
	if ((agitcheck()) || (agitcheck2())) {
		mes("[Pr�ncipe Croix]\n No momento seu reino est� em uma guerra.\n Porque n�o mostra sua bravura ajudando seu povo?");
		close;
	} else if (BaseLevel < 80) {
		mes("[Pr�ncipe Croix]\n Me pergunto o que algu�m t�o jovem como voc� faz num lugar como esse.");
		close;
	} else {
		cutin("bat_crua1", 2);
		mes("[Pr�ncipe Croix]\n Aventureir" + (Sex == SEX_MALE ? "o" : "a") + ", por que n�o nos empresta seu poder para a vit�ria?");
		next;
		cutin("bat_crua2", 2);
		mes("[Pr�ncipe Croix]\n Eu n�o quero derramar sangue, mas eu n�o tenho escolha a n�o ser lutar pela possibilidade de paz para o amor do meu povo.");
		next;
		mes("[Pr�ncipe Croix]\n O General Guillaume pode ter uma vantagem nesta batalha e ele � um �timo general de Maroll.\n Mas isto n�o quer dizer que ele vai vencer.\n Eu quero vencer esta batalha para garantir um futuro melhor para o meu povo.");
		next;
		switch(select("Sim, quero me juntar a voc�", "Cancelar")) {
			case 1:
			mes("[Pr�ncipe Croix]\n Muito obrigado.\n Eu sinto que poderei vencer com a ajuda de aventureir" + (Sex == SEX_MALE ? "o" : "a") + "s como voc�\n Agora, por favor suba as escadas e se junte a seus camaradas que est�o treinando suas habilidades para lutar com o inimigo!");
			Bat_Team = 2;
			close2; cutin("", 255); end;
			case 2:
			mes("[Pr�ncipe Croix]\n Mesmo assim fico-lhe grato por mostrar interesse.");
			close2; cutin("", 255); end;
		}
	}
}

// ------------------------------------------------------------------
bat_room,161,141,3	script	Pajem de Croix#bg_pc	4_M_CRU_HEAD,{
	mes("[Pajem de Croix]\n Para de juntar ao nosso ex�rcito fale com o ^BB0000Pr�ncepe Croix^000000.");
	close;
}
bat_room,161,139,3	duplicate(Pajem de Croix#bg_pc)	Pajem de Croix#bg_pc2	4_M_CRU_HEAD

// ------------------------------------------------------------------
bat_room,162,141,3	script	#Flag_Croix	1_FLAG_EAGLE,{ end; }
bat_room,162,139,3	duplicate(#Flag_Croix)	#Flag_Croix2	1_FLAG_EAGLE

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - 15/02/2018 (Spell Master): Adicionado restri��o de Level m�nimo
// 80 aos generais.
