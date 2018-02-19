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
		mes("[General Guillaume]\n No momento seu reino está em uma guerra.\n Porque não mostra sua bravura ajudando seu povo?");
		close;
	} else if (BaseLevel < 80) {
		mes("[General Guillaume]\n Me pergunto o que alguém tão jovem como você faz num lugar como esse.");
		close;
	} else {
		cutin("bat_kiyom2", 2);
		mes("[General Guillaume]\n Aventureir" + (Sex == SEX_MALE ? "o" : "a") + " de sangue quente, não precisamos de sua habilidade para ganhar esta batalha.");
		next;
		cutin("bat_kiyom1", 2);
		mes ("[General Guillaume]\n Nosso rei, Marcel Marollo VII, estão muito doente.\n Vossa Majestade declarou que seria eu ou Príncipe Croix o próximo rei dentre seus 9 filhos.");
		next;
		mes("[General Guillaume]\n Dois reis não podem dividir uma nação!\n Somente o vitorioso desta batalha será coroado.");
		next;
		mes("[General Guillaume]\n Isto não é apenas uma batalha entre nós.\n Esta batalha determinará o futuro deste país.\n Eu jurei por minha honra que serei o único que protegerá Maroll de ameaças vindas de fora.");
		next;
		switch(select("Sim, eu quero me juntar a você", "Cancelar")) {
			case 1:
			mes("[General Guillaume]\n Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + " ao meu exêrcito.\n Seus olhos me dizem que você é um soldado em que eu posso confiar.");
			next;
			mes("[General Guillaume]\n Suba as escadas e se aliste para a batalha com seus camaradas.\n Tenho certeza que eles o receberão de coração aberto!");
			Bat_Team = 1;
			close2; cutin("", 255); end;
			case 2:
			mes("[General Guillaume]\n É uma pena seus taletos seriam realmente úteis!");
			close2; cutin("", 255); end;
		}
	}
}

// ------------------------------------------------------------------
bat_room,161,160,3	script	Pajem de Guillaume#bg_pg	4_M_KY_HEAD,{
	if (!Bat_Team || Bat_Team == 2) {
		mes("[Pajem de Guillaume]\n Para de juntar ao nosso exêrcito fale com o ^2C5EC0General Guillaume^000000");
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
bat_room,160,140,3	script	Príncipe Croix#bg	4_M_CRU_CRUA,{
	if ((agitcheck()) || (agitcheck2())) {
		mes("[Príncipe Croix]\n No momento seu reino está em uma guerra.\n Porque não mostra sua bravura ajudando seu povo?");
		close;
	} else if (BaseLevel < 80) {
		mes("[Príncipe Croix]\n Me pergunto o que alguém tão jovem como você faz num lugar como esse.");
		close;
	} else {
		cutin("bat_crua1", 2);
		mes("[Príncipe Croix]\n Aventureir" + (Sex == SEX_MALE ? "o" : "a") + ", por que não nos empresta seu poder para a vitória?");
		next;
		cutin("bat_crua2", 2);
		mes("[Príncipe Croix]\n Eu não quero derramar sangue, mas eu não tenho escolha a não ser lutar pela possibilidade de paz para o amor do meu povo.");
		next;
		mes("[Príncipe Croix]\n O General Guillaume pode ter uma vantagem nesta batalha e ele é um ótimo general de Maroll.\n Mas isto não quer dizer que ele vai vencer.\n Eu quero vencer esta batalha para garantir um futuro melhor para o meu povo.");
		next;
		switch(select("Sim, quero me juntar a você", "Cancelar")) {
			case 1:
			mes("[Príncipe Croix]\n Muito obrigado.\n Eu sinto que poderei vencer com a ajuda de aventureir" + (Sex == SEX_MALE ? "o" : "a") + "s como você\n Agora, por favor suba as escadas e se junte a seus camaradas que estão treinando suas habilidades para lutar com o inimigo!");
			Bat_Team = 2;
			close2; cutin("", 255); end;
			case 2:
			mes("[Príncipe Croix]\n Mesmo assim fico-lhe grato por mostrar interesse.");
			close2; cutin("", 255); end;
		}
	}
}

// ------------------------------------------------------------------
bat_room,161,141,3	script	Pajem de Croix#bg_pc	4_M_CRU_HEAD,{
	mes("[Pajem de Croix]\n Para de juntar ao nosso exêrcito fale com o ^BB0000Príncepe Croix^000000.");
	close;
}
bat_room,161,139,3	duplicate(Pajem de Croix#bg_pc)	Pajem de Croix#bg_pc2	4_M_CRU_HEAD

// ------------------------------------------------------------------
bat_room,162,141,3	script	#Flag_Croix	1_FLAG_EAGLE,{ end; }
bat_room,162,139,3	duplicate(#Flag_Croix)	#Flag_Croix2	1_FLAG_EAGLE

// ------------------------------------------------------------------
// - ChangeLog
// ------------------------------------------------------------------
// - 15/02/2018 (Spell Master): Adicionado restrição de Level mínimo
// 80 aos generais.
