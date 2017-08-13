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
| - Cria��o: Spell Master 21/02/2017                                |
| - Nota: Generais e seus acistentes da batalha campal              |
\*-----------------------------------------------------------------*/

//--------------------------------------------------------------
// - [Azul] -
//--------------------------------------------------------------
bat_room,160,159,3	script	General Guillaume	4_M_KY_KIYOM,{
	if ((agitcheck()) || (agitcheck2())) {
		mes "[General Guillaume]";
		mes "No momento seu reino est� em uma guerra.";
		mes "Porque n�o mostra sua bravura ajudando seu povo?";
		close;
	}
	cutin("bat_kiyom2",2);
	mes "[General Guillaume]";
	mes "Aventureir"+(Sex?"o":"a")+" de sangue quente, n�o precisamos de sua habilidade para ganhar esta batalha.";
	next;
	cutin("bat_kiyom1",2);
	mes "[General Guillaume]";
	mes "Nosso rei, Marcel Marollo VII, est�o muito doente.";
	mes "Vossa Majestade declarou que seria eu ou Pr�ncipe Croix o pr�ximo rei dentre seus 9 filhos.";
	next;
	mes "[General Guillaume]";
	mes "Dois reis n�o podem dividir uma na��o!";
	mes "Somente o vitorioso desta batalha ser� coroado.";
	next;
	mes "[General Guillaume]";
	mes "Isto n�o � apenas uma batalha entre n�s.";
	mes "Esta batalha determinar� o futuro deste pa�s.";
	mes "Eu jurei por minha honra que serei o �nico que proteger� Maroll de amea�as vindas de fora.";
	next;
	switch(select("Sim, eu quero me juntar a voc�:Cancelar")) {
		case 1:
		mes "[General Guillaume]";
		mes "Bem-vindo ao meu ex�rcito.";
		mes "Seus olhos me dizem que voc� � um soldado em que eu posso confiar.";
		next;
		mes "[General Guillaume]";
		mes "Agora, suba as escadas e se aliste para a batalha com seus camaradas.";
		mes "Tenho certeza que eles o receber�o de cora��o aberto!";
		Bat_Team = 1;
		close2; cutin("",255); end;
		case 2:
		mes "[General Guillaume]";
		mes "� uma pena seus taletos seriam realmente �teis!";
		close2; cutin("",255); end;
	}
}

//--------------------------------------------------------------
bat_room,161,160,3	script	Acistente#A_Guillaume	4_M_KY_HEAD,{
	mes "[Acistente de Guillaume]";
	mes "Para de juntar ao nosso ex�rcito fale com o ^2c5ec0General Guillaume^000000";
	close;
}
bat_room,161,158,3	duplicate(Acistente#A_Guillaume)	Acistente#A_Guillaume2	4_M_KY_HEAD

//--------------------------------------------------------------
bat_room,162,157,3	script	#Flag_Guillaume	1_FLAG_LION,{ end; }
bat_room,162,160,3	duplicate(#Flag_Guillaume)	#Flag_Guillaume2	1_FLAG_LION

//--------------------------------------------------------------
// - [Vermelho] -
//--------------------------------------------------------------
bat_room,160,140,3	script	Pr�ncipe Croix	4_M_CRU_CRUA,{
	if ( (agitcheck()) || (agitcheck2()) ) {
		mes "[Pr�ncipe Croix]";
		mes "No momento seu reino est?em uma guerra.";
		mes "Porque n�o mostra sua bravura ajudando seu povo?";
		close;
	}
	cutin("bat_crua1",2);
	mes "[Pr�ncipe Croix]";
	mes "Aventureir"+(Sex?"o":"a")+", por que n�o nos empresta seu poder para a vit�ria?";
	next;
	cutin("bat_crua2",2);
	mes "[Pr�ncipe Croix]";
	mes "Eu n�o quero derramar sangue, mas eu n�o tenho escolha a n�o ser lutar pela possibilidade de paz para o amor do meu povo.";
	next;
	mes "[Pr�ncipe Croix]";
	mes "O General Guillaume pode ter uma vantagem nesta batalha e ele � um �timo general de Maroll, mas isto n�o quer dizer que ele vai vencer.";
	mes "Eu quero vencer esta batalha para garantir um futuro melhor para o meu povo.";
	next;
	switch(select("Sim, eu quero me juntar a voc�:Cancelar")) {
		case 1:
		mes "[Pr�ncipe Croix]";
		mes "Muito obrigado.";
		mes "Eu sinto que poderei vencer com a ajuda de aventureir"+(Sex?"o":"a")+"s como voc�";
		mes "Agora, por favor suba as escadas e se junte a seus camaradas que est�o treinando suas habilidades para lutar com o inimigo!";
		Bat_Team = 2;
		close2; cutin("",255); end;
		case 2:
		mes "[Pr�ncipe Croix]";
		mes "Mesmo assim fico-lhe grato por mostrar interesse.";
		close2; cutin("",255); end;
	}
}

//--------------------------------------------------------------
bat_room,161,141,3	script	Acistente#A_Croix	4_M_CRU_HEAD,{
	mes "[Acistente de Croix]";
	mes "Para de juntar ao nosso ex�rcito fale com o ^bb0000Pr�ncepe Croix^000000.";
	close;
}
bat_room,161,139,3	duplicate(Acistente#A_Croix)	Acistente#A_Croix2	4_M_CRU_HEAD

//--------------------------------------------------------------
bat_room,162,141,3	script	#Flag_Croix	1_FLAG_EAGLE,{ end; }
bat_room,162,139,3	duplicate(#Flag_Croix)	#Flag_Croix2	1_FLAG_EAGLE
