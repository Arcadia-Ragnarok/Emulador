/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master (07/03/2017)                            |
| - Info: Porteiros da batalha campal Kreiger Von Midgard.          |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Entrada para salas de espera] -
//-------------------------------------------------------------------
-	script	KvmEnter	FAKE_NPC,{
	if (!Bat_Team) {
		mes "[Oficial de " + strnpcinfo(NPC_NAME_HIDDEN) + "]";
		mes "Voc� ainda n�o se alistou para a batalha.";
		close;
	} else if ((strnpcinfo(NPC_NAME_HIDDEN) == "Guillaume") && (Bat_Team == 2)) {
		mes "[Oficial de " + strnpcinfo(NPC_NAME_HIDDEN) + "]";
		mes "O que um aliado de ^bb0000Pr�ncepe Croix^000000 faz aqui?";
		close;
	} else if ((strnpcinfo(NPC_NAME_HIDDEN) == "Croix") && (Bat_Team == 1)) {
		mes "[Oficial de " + strnpcinfo(NPC_NAME_HIDDEN) + "]";
		mes "O que um aliado de ^2c5ec0General Guillaume^000000 faz aqui?";
		close;
	} else if ((agitcheck()) || (agitcheck2())) {
		mes "[Oficial de " + strnpcinfo(NPC_NAME_HIDDEN) + "]";
		mes "No momento seu reino est� em uma guerra.";
		mes "Porque n�o mostra sua bravura ajudando seu povo?";
		close;
	} else {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		if (strnpcinfo(NPC_NAME_HIDDEN) == "Guillaume") {
			mes "Ol� ^777777" + strcharinfo(PC_NAME) + "^000000, vamos mostrar o poder do Ex�rcito Guillaume para estes Croixs!";
		}
		if (strnpcinfo(NPC_NAME_HIDDEN) == "Croix") {
			mes "Ol� ^777777" + strcharinfo(PC_NAME) + "^000000, vamos mostrar o poder de n�s Croixs para estes Guillaumes";
		}
		mes "Est� pront" + (Sex == SEX_MALE ? "o" : "a") + " para a batalha?";
		next;
		if (select("Sim", "N�o") == 1) {
			mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN) + "]";
			mes "Boa sorte!";
			close2;
			if (Bat_Team == 1) { warp(strnpcinfo(NPC_MAP), 169, 223); }
			if (Bat_Team == 2) { warp(strnpcinfo(NPC_MAP), 169, 207); }
			end;
		}
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "Tudo bem, quando sentir que est� preparad" + (Sex == SEX_MALE ? "o" : "a") + ", venha falar comigo novamente.";
		close;
	}
}
// Azul
bat_room,141,178,5	duplicate(KvmEnter)	Oficial KVM#Guillaume	4_M_KY_KNT
// Vermelho
bat_room,140,121,1	duplicate(KvmEnter)	Oficial KVM#Croix	4_M_CRU_KNT

//-------------------------------------------------------------------
// - [Cavaleiros da Entrada] -
//-------------------------------------------------------------------
-	script	KvmKnt	FAKE_NPC,{
	mes "[" + strnpcinfo(NPC_NAME_VISIBLE) + "]";
	mes "Ol� o que voc� deseja?";
	next;
	switch(select("Participar da batalha", "Informa��es da batalha", "Nada")) {
		case 1:
		mes "[" + strnpcinfo(NPC_NAME_VISIBLE) + "]";
		mes "Para participar da batalha do Kreiger Von Midgard, primeiro voc� deve se alistar com o ^2C5EC0General Guillaume^000000 ou com o ^BB0000Pr�ncepe Croix^000000.";
		mes "Depois solicite aos oficiais que levem voc� as salas de espera da batalha.";
		close;
		case 2:
		mes "[" + strnpcinfo(NPC_NAME_VISIBLE) + "]";
		mes "A batalha tem seu in�cio quando ambos ex�rcitos estiverem compostos de 3 participantes em sua devida sala de espera.";
		next;
		mes "[" + strnpcinfo(NPC_NAME_VISIBLE) + "]";
		mes "O objetivo da batalha � simples!";
		mes "Derrotar todos in�migos.";
		mes "A batalha consta com 2 Rounds, a ex�rcito que vencer esses rounds ser� o vencedor.";
		mes "Em caso de emparte 1X1 haver� um terceiro round para decis�o.";
		next;
		mes "[" + strnpcinfo(NPC_NAME_VISIBLE) + "]";
		mes "O tempo limite de dura��o da batalha � de 00:10:00(Dez minutos).";
		mes "Se dentro desse tempo n�o houver vencedor, a vit�ria ser� dada ao ex�rcito com a maior pontua��o.";
		mes "Caso a pontua��o esteja empatada ser� decretado um empate entre os ex�rcitos.";
		next;
		mes "[" + strnpcinfo(NPC_NAME_VISIBLE) + "]";
		mes "Para os vencedores ser�o recompensados com 2 emblemas de Guerra.";
		mes "Para os derrotados ter�o recompensa��o de 1 emblema de Guerra.";
		mes "Em caso de empate ambos recebem 1 emblemas de Guerra.";
		next;
		mes "[" + strnpcinfo(NPC_NAME_VISIBLE) + "]";
		mes "Haver� sempre uma contagem dos participantes, se algum ex�rcito n�o tiver pelo menos 1 participante a batalha tem seu fim decretado.";
		mes "Vence ent�o a equipe que ainda tenha 1 ou mais membros na batalha.";
		close;
		case 3:
		mes "[" + strnpcinfo(NPC_NAME_VISIBLE) + "]";
		mes "Tudo bem estarei aqui caso precize de alguma informa��o.";
		close;
	}
}
// Azul
bat_room,143,178,5	duplicate(KvmKnt)	Cavaleiro de Guillaume#KvmKnt	4_M_KY_SOLD
// Vermelho
bat_room,143,121,1	duplicate(KvmKnt)	Cavaleiro de Croix#KvmKntc	4_M_CRU_SOLD
