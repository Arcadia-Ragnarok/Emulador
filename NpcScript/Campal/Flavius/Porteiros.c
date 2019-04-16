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
| - Copyright: Spell Master (21/02/2017)                            |
| - Info: Cavaleiros da batalha campal Flavius                      |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Entrada para salas de espera] -
//-------------------------------------------------------------------
-	script	FlaviusEnter	FAKE_NPC,{
	if (!Bat_Team) {
		mes("[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]\n"
			"Voc� ainda n�o se alistou para a batalha.");
		close;
	} else if ((strnpcinfo(NPC_NAME_HIDDEN) == "Guillaume") && (Bat_Team == 2)) {
		mes("[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]\n"
			"O que um aliado de ^bb0000Pr�ncepe Croix^000000 faz aqui?");
		close;
	} else if ((strnpcinfo(NPC_NAME_HIDDEN) == "Croix") && (Bat_Team == 1)) {
		mes("[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]\n"
			"O que um aliado de ^2c5ec0General Guillaume^000000 faz aqui?");
		close;
	} else if ((agitcheck()) || (agitcheck2())) {
		mes("[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]\n"
			"No momento seu reino est� em uma guerra.\n"
			"Porque n�o mostra sua bravura ajudando seu povo?");
		close;
	} else {
		mes("[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]");
		if (strnpcinfo(NPC_NAME_HIDDEN) == "Guillaume") {
			mes("Ol� ^777777"+strcharinfo(CHAR_NAME)+"^000000, vamos mostrar o poder do Ex�rcito Guillaume para estes Croixs!");
		}
		if (strnpcinfo(NPC_NAME_HIDDEN) == "Croix") {
			mes("Ol� ^777777"+strcharinfo(CHAR_NAME)+"^000000, vamos mostrar o poder de n�s Croixs para estes Guillaumes");
		}
		mes("Est� pront"+(Sex == SEX_MALE ? "o":"a")+" para a batalha?");
		next;
		if (select("Sim","N�o") == 1) {
			mes("["+strnpcinfo(NPC_NAME_HIDDEN)+"]\n"
				"Boa sorte!");
			close2;
			if (Bat_Team == 1) { warp("bat_room", 85, 223); }
			if (Bat_Team == 2) { warp("bat_room", 85, 207); }
			end;
		}
		mes("[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]\n"
			"Tudo bem, quando sentir que est� preparado"+(Sex == SEX_MALE ? "o":"a")+", venha falar comigo novamente.");
		close;
	}
}
// Azul
bat_room,133,178,5	duplicate(FlaviusEnter)	Oficial de Flavius#fGuillaume	4_M_KY_KNT
// Vermelho
bat_room,133,121,1	duplicate(FlaviusEnter)	Oficial de Flavius#fCroix	4_M_CRU_KNT

//-------------------------------------------------------------------
// - [Cavaleiros da Entrada] -
//-------------------------------------------------------------------
-	script	::FlaviusKnt	FAKE_NPC,{
	mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
		"Ol� o que voc� deseja?");
	next;
	switch (select("Participar da batalha", "Informa��es da batalha", "Nada")) {
		case 1:
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"Para participar da batalha de Flavius.\n"
			"Primeiro voc� deve se alistar com o ^2C5EC0General Guillaume^000000 ou com o ^BB0000Pr�ncepe Croix^000000.\n"
			"Depois solicite aos oficiais que levem voc� as salas de espera da batalha.");
		close;
		case 2:
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"O objetivo da batalha � destruir o cristal inimino, localizado a parte oposta do mapa.\n"
			"Vence quem conseguir realizar essa fa�anha por 2 vezes.");
		next;
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"Os cristais s�o protegidos por uma barreira m�gica que impede que ele seja atingido, at� que seus guardi�es sejam destru�dos.\n"
			"Estes mesmos cristais s�o imunes a qualquer tipo de habilidade, somente o ataque f�sico pode dan�ficar-los.");
		next;
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"A batalha tem in�cio quando cada equipe estiver composta de 5 participantes dentro de suas respectivas salas de espera.");
		next;
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"O tempo limite de dura��o da batalha � de 00:20:00(Vinte minutos).\n"
			"Se dentro desse tempo n�o houver vencedor, a vit�ria ser� dada ao ex�rcito com a maior pontua��o.\n"
			"Caso a pontua��o esteja empatada ser� decretado um empate entre os ex�rcitos.");
		next;
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"Para os vencedores ser�o recompensados com 3 emblemas de bravura.\n"
			"Para os derrotados ter�o recompensa��o de 1 emblema de bravura.\n"
			"Em caso de empate ambos recebem 2 emblemas de bravura.");
		close;
		case 3:
		mes("["+strnpcinfo(NPC_NAME_VISIBLE)+"]\n"
			"Tudo bem estarei aqui caso precize de alguma informa��o.");
		close;
	}
}
// Azul
bat_room,135,178,5	duplicate(FlaviusKnt)	Cavaleiro de Guillaume#FlaviusKnt1	4_M_KY_SOLD
// Vermelho
bat_room,135,121,1	duplicate(FlaviusKnt)	Cavaleiro de Croix#FlaviusKnt2	4_M_CRU_SOLD
