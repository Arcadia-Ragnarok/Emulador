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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Acesso ao andares inferiores da Torre do rel�gio          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Acesso ao quarto andar] -
// - Uso da chave da torre do rel�gio
// ------------------------------------------------------------------
c_tower3,10,249,4	script	Porteiro#ct	4_M_02,{
	callfunc "F_ClockTowerGate","4th",7026,"c_tower4",185,44;
}

// ------------------------------------------------------------------
// - [Acesso ao subsolo] -
// - Uso da chave do subterr�neo
// ------------------------------------------------------------------
alde_dun03,264,16,4	script	Porteiro#ct1	4W_F_01,{
	callfunc "F_ClockTowerGate","B4th",7027,"alde_dun04",79,267;
}

// ------------------------------------------------------------------
// - [Fun��o] -
// ------------------------------------------------------------------
function	script	F_ClockTowerGate	{
	mes "[Porteiro]";
	mes "Bem vindo a";
	mes "Kinase - Blue Gallino";
	mes "O �nico com Especialidade Local em Al De baran.";
	mes "Voc� n�o pode passar do Andar "+getarg(0)+",";
	mes "Por favor volte.";
	next;
	switch(select("Sobre Torre do Rel�gio:Sobre o "+getarg(0)+" Andar:Ir para o "+getarg(0)+" Andar:Finalizar Conversa")) {
		case 1:
		mes "[Porteiro]";
		mes "Terra da Alquimia, Al De Baran!";
		mes "H� muito tempo atr�s, haviam 3 Alquimistas lend�rios...";
		mes "Eram eles:";
		mes "Bruke Seimer, Philip Warisez e...";
		next;
		mes "[Porteiro]";
		mes "Romero Specialre!";
		mes "Essa arquitetura vener�vel � a obra-prima deles.";
		mes "Eu presumo que voc� sentiria algo incomum no caminho desse Andar, cada caracter�stica dessa Torre do Rel�gio ";
		next;
		mes "[Porteiro]";
		mes "Consiste de Magias Misteriosas Antigas.";
		mes "Se voc� vagar por aqui, atoa.";
		next;
		mes "[Porteiro]";
		mes "Voc� vai encontrar v�rias criaturas que guardam o lugar.";
		mes "Tome cuidado ..";
		close;
		case 2:
		mes "[Porteiro]";
		mes "Alquimistas Poderosos";
		mes "Selaram o port�o do 4� andar usando um dispositivo qu�mico para manter algo afastado de Criaturas Malvadas e Inimigos Humanos.";
		next;
		mes "[Porteiro]";
		mes "Para abrir � necess�rio uma chave.";
		mes "Rumores dizem que as Criaturas Guardi�s que possuem a chave, vagam por aqui.";
		next;
		mes "[Porteiro]";
		mes "A Chave � a Intensifica��o da Alquimia Antiga,";
		mes "boatos dizem que quando usada uma vez.";
		mes "Ela ser� libertada do encantamento e desaparecer�.";
		next;
		mes "[Porteiro]";
		mes "Se essa chave vir a ser sua.";
		mes "Por favor me mostre.";
		mes "Quem possuir a chave ter� permiss�o de passar por esse port�o!";
		next;
		mes "[Porteiro]";
		mes "Eu vou te dar uma chance.";
		mes ". . . . .";
		close;
		case 3:
		if (countitem(getarg(1)) > 0) {
			mes "[Porteiro]";
			mes "Hmm! Eu j� senti que voc� n�o � uma pessoa comum.";
			mes "Por favor, entre.";
			mes "Que deus aben�oe voc�..";
			close2;
			delitem getarg(1),1;
			warp getarg(2),getarg(3),getarg(4);
			end;
		}
		else {
			mes "[Porteiro]";
			mes ". . . . . .";
			mes "Infelizmente voc� n�o tem o privil�gio de entrar nesse Port�o ..";
			mes "Voc� n�o ser� capaz de passar enquanto os Alquimistas n�o deixarem voc� ir.";
			close;
		}
		case 4:
		mes "[Porteiro]";
		mes "Essa torre do rel�gio";
		mes "� o lugar onde os 3 Alquimistas Lend�rios deixaram seus esp�ritos e habilidades.";
		mes "Por favor n�o rabisque ou fa�a danos ao interior.";
		close;
	}
}