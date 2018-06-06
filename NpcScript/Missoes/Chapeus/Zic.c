/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest para                                           |
| * Bao Bao                                                         |
| * Fivela de Lua                                                   |
| * �culos Fashion                                                  |
| * Fivela de Cora��o                                               |
\*-----------------------------------------------------------------*/

alberta,120,53,1	script	Zic#alb	1_M_BARD,{
	if ((countitem(Silk_Ribbon) > 0) && (countitem(Voucher_Of_Orcish_Hero) > 49)) {
		mes "[Zic]";
		mes "Eu sei eu sei, voc� est� querendo ganhar logo o seu Bao-Bao.";
		mes "Mas n�o consigo me concentrar no meu trabalho se voc� continuar me pertubando assim.";
		next;
		mes "^3355FF*Bate! Bate!*";
		mes "*Ah! Sucesso!*";
		mes "*Que bom!*^000000";
		next;
		mes "[Zic]";
		mes "Ufa!";
		mes "Aqui est�!";
		mes "Agora fa�a bom uso dela!!";
		delitem(Silk_Ribbon,1);
		delitem(Voucher_Of_Orcish_Hero,50);
		getitem(Hair_Protector,1);
		close;
	} else if ((countitem(Heart_Hair_Pin) > 0) && (countitem(Steel) > 9)) {
		mes "[Zic]";
		mes "Tudo bem! Puxa, sua Fivela de Lua estar� pronta em pouco tempo.";
		mes "Mas n�o consigo me concentrar no meu trabalho se voc� continuar me pertubando assim!";
		next;
		mes "^3355FF*Bate! Bate!*";
		mes "*Ah! Sucesso!*";
		mes "*Que bom!*^000000";
		next;
		mes "[Zic]";
		mes "Ufa!";
		mes "Est� pronto!";
		mes "Agora use-a, o que achou ?";
		mes "Bonita ou simples?";
		delitem(Heart_Hair_Pin,1);
		delitem(Steel,10);
		getitem(First_Moon_Hair_Pin,1);
		close;
	} else if ((countitem(Jack_A_Dandy) > 0) && (countitem(Scarlet_Dyestuffs) > 0)) {
		mes "[Zic]";
		mes "Certo, voc� veio atr�s dos �culos Fashion.";
		mes "S� n�o me apresse, ou n�o vou ser capaz de me concentrar em meu trabalho, tudo bem? ";
		next;
		mes "^3355FF*Bate! Bate!*";
		mes "*Ah! Sucesso!*";
		mes "*Que bom!*^000000";
		next;
		mes "[Zic]";
		mes "Ufa, est� pronto!";
		mes "Now go wear these and look, well, as fashionable as these glasses, I guess.";
		delitem(Jack_A_Dandy,1);
		delitem(Scarlet_Dyestuffs,1);
		getitem(Fashion_Sunglass,1);
		close;
	} else if (countitem(Coral_Reef) > 1199) {
		mes "[Zic]";
		mes "Ok, voc� quer que sua Fivela de Cora��o.";
		mes "Eu estou trabalhando nela.";
		mes "Por�m, n�o consigo me concentrar com voc� me apressando, voc� sabia?";
		next;
		mes "^3355FF*Bate! Bate!*";
		mes "*Ah! Sucesso!*";
		mes "*Que bom!*^000000";
		next;
		mes "[Zic]";
		mes "Ufa!";
		mes "Finalmente, est� pronta!";
		mes "Fa�a-me feliz e";
		mes "use-a com orgulho";
		delitem(Coral_Reef,1200);
		getitem(Heart_Hair_Pin,1);
		close;
	} else {
		mes "[Zic]";
		mes "Oba, esta";
		mes "brisa fresca � maravilhosa!";
		mes "Eu amo o mar!";
		next;
		mes "[Zic]";
		mes "...Hum?";
		mes "Ahhh. Voc� n�o pode dizer que eu estou de f�rias? Tudo o que eu quero � descansar um pouco.";
		next;
		mes "[Zic]";
		mes "Ok, voc� venceu. Mais uma vez, a minha reputa��o como um mestre artes�o me persegue.";
		next;
		mes "[Zic]";
		mes "Deixe-me saber o item que voc� est� interessado e talvez eu fa�a isso por voc�...";
		next;
		switch (select("Bao Bao","Fivela de Lua","�culos Fashion","Fivela de Cora��o")) {
			case 1:
			mes "[Zic]";
			mes "Huuum...";
			mes "Voc� quer que eu fa�a um Bao-Bao, certo? Tudo bem...";
			next;
			mes "[Zic]";
			mes "Vamos ver, vou precisar de...";
			mes "1 ^0000FFLa�o de Seda^000000";
			mes "50 ^0000FFEmblema de Her�i^000000";
			mes "...Voc� j� sabia disso?";
			close;
			case 2:
			mes "[Zic]";
			mes "Ent�o voc� quer uma Fivela de Lua, certo? Eu imagino que elas sejam muito desejadas.";
			next;
			mes "[Zic]";
			mes "Ok, eu vou precisar de...";
			mes "1 ^0000FFFivela de Cora��o^000000";
			mes "10 ^0000FFA�o^000000";
			mes "...Voc� j� sabia disso?";
			close;
			case 3:
			mes "[Zic]";
			mes "Estranho. Como voc� sabe que eu fa�o �culos Fashion? Ele deve ser mais famoso do que eu pensei.";
			next;
			mes "[Zic]";
			mes "Eu preciso de...";
			mes "1 ^0000FF�culos Charmoso^000000";
			mes "1 ^0000FFTintura Vermelha^000000";
			mes "...Voc� j� sabia disso?";
			close;
			case 4:
			mes "[Zic]";
			mes "Voc� quer uma Fivela de Cora��o, certo? Ok, eu acho que posso faz�-la para voc�...";
			next;
			mes "[Zic]";
			mes "Apenas traga-me...";
			mes "1200 ^0000FFCoral^000000.";
			mes "...Voc� j� sabia disso?";
			close;
		}
	}
}
