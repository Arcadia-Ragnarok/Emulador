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
| - Desenvolvido por: Spell Master 14/03/2017                       |
| - Nota: Trem de transporte entre Einbroch & Einbech               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Einbroch > Einbech] -
// ------------------------------------------------------------------
einbroch,232,272,3	script	Esta��o de Trem#EinTrain	4_M_EIN_SOLDIER,{
	mes "[Funcion�rio]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a esta��o de trem.";
	mes "Trens para Einbech est�o sempre passando ent�o se voc� perder um, n�o ser� um problema.";
	next;
	mes "[Funcion�rio]";
	mes "A taxa para embarcar no trem que vai de Einbroch para Einbech � de 200 zeny.";
	mes "Gostaria de comprar um ticket!?";
	next;
	switch(select("Sim.","N�o.","Sobre o meio ambiente...")) {
		case 1:
		if (Zeny > 199) {
			mes "[Funcion�rio]";
			mes "Muito obrigado.";
			mes "Tenha uma boa viagem.";
			mes "Todos a bordo!";
			close2;
			Zeny -= 200;
			warp ("einbech",43,215);
			end;
		}
		else {
			mes "[Funcion�rio]";
			mes "Sinto muito, mas voc� n�o tem dinheiro suficiente para pagar a taxa do trem.";
			close;
		}
		case 2:
		mes "[Funcion�rio]";
		mes "Muito bem, ent�o.";
		mes "Por favor, aproveite sua estadia em Einbroch.";
		close;
		case 3:
		mes "[Funcion�rio]";
		mes "Einbroch � abomin�vel por sua polui��o do ar, sem d�vida causada pelas instala��es industriais locais.";
		mes "� realmente horr�vel...";
		next;
		mes "[Funcion�rio]";
		mes "Algumas vezes e a polui��o do ar � t�o forte que fica dif�cil at� de respirar.";
		mes "Ent�o se voc� ouvir o alerta de Fuma�a, voc� deve encontrar abrigo imediatamente!"; 
		close;
	}
}

einbroch,252,301,3	duplicate(Esta��o de Trem#EinTrain)	Esta��o de Trem#EinTrain2	4_M_EIN_SOLDIER

// ------------------------------------------------------------------
// - [Einbech > Einbroch] -
// ------------------------------------------------------------------
einbech,39,215,5	script	Equipe da Esta��o#EinTrain3	4_M_EIN_SOLDIER,{
	mes "[Equipe]";
	mes "Bem vindo a Esta��o de Trem.";
	mes "O pre�o para pegar o trem para Einbroch � 200 zeny.";
	mes "Voc� gostaria de embarcar?";
	next;
	switch(select("Sim.","N�o.")) {
		case 1:
		if (Zeny > 199) {
			mes "[Equipe]";
			mes "Obrigado e n�s esperamos que voc� aproveite a viagem.";
			mes "Todos a bordo!";
			close2;
			Zeny -= 200;
			warp ("einbroch",226,276);
			end;
		}
		else {
			mes "[Equipe]";
			mes "Me desculpe, mas voc� n�o tem zeny suficiente para pagar a passagem do trem.";
			close;
		}
		case 2:
		mes "[Equipe]";
		mes "Por favor aproveite sua estada aqui em Einbech.";
		close;
	}
}
