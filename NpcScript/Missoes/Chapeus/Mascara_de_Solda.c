/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest da M�scara de Solda                            |
\*-----------------------------------------------------------------*/

geffen_in,144,166,4	script	Ferreiro#gefq	1_M_SMITH,{
	mes "[Ferreiro]";
	mes "Voc� nunca ouviu falar de mim?";
	mes "Ora, eu sou o veterano Ferreiro desta terra.";
	mes "Eu passei 30 anos neste inferno quente e sangrento, dobrando ferro para o criar meu pr�prio a�o!";
	next;
	mes "[Ferreiro]";
	mes "Mas...";
	mes "Estou envelhecendo e meu talento come�a a desaparecer com a idade.";
	mes "Ent�o eu tenho inventado algo para os jovens ferreiros pr�ximos.";
	mes "Na esperan�a de que eles tamb�m ir�o dominar a minha arte...";
	next;
	switch (select("O que � isso?","...")) {
		case 1:
		mes "[Ferreiro]";
		mes "N�s Ferreiros, devemos sempre manipular o a�o sob calor extremo, ar quente e metais fundidos.";
		mes "Esaas condi��es s�o mais do que a maioria das pessoas podem aguentar.";
		next;
		mes "[Ferreiro]";
		mes "Para o bem do nosso artesanato, os nossos belos rostos masculinos s�o colocados em risco...";
		next;
		mes "[Ferreiro]";
		mes "Mas, com esta maravilha da tecnologia, n�o h� necessidade de se preocupar!";
		mes "Eis ent�o, a ^3355FFM�scara de Solda^000000!";
		next;
		mes "[Ferreiro]";
		mes "Ela funciona cobrindo seu rosto com uma grossa placa de metal.";
		mes "Na verdade, � um item que todo mundo deveria querer!";
		mes "Se n�o for para voc� mesmo, seria uma boa id�ia dar a um amigo que est� estudando forja.";
		next;
		mes "[Ferreiro]";
		mes "Ent�o, o que dizer sobre isto?";
		mes "Se voc� me der ^2244FF50 A�os^000000 e";
		mes "^4422FFapenas 2.000 zenys^000000.";
		mes "Eu vou fazer isso para voc� imediatamente!";
		next;
		switch (select("Hm... Nada mau. Certo","Como � que funciona mesmo?")) {
			case 1:
			if ((countitem(Steel) > 49) && (Zeny > 1999)){
				mes "[Ferreiro]";
				mes "Ah, vejo que voc� aprecia o trabalho de um ferreiro!";
				mes "Tudo bem, eu vou faz�-lo imediatamente!!";
				next;
				delitem(Steel,50);
				Zeny -= 2000;
				getitem(Welding_Mask,1);
				mes "[Ferreiro]";
				mes "Hahaha! Fa�a bom uso dela!";
				close;
			} else {
				mes "[Ferreiro]";
				mes "Hmmm...";
				mes "Voc� n�o tem os itens requeridos.";
				next;
				mes "[Ferreiro]";
				mes "Um ferreiro comum iria interpretar isso como um sinal de desrespeito, mas eu vou te perdoar.";
				mes "S� n�o se esque�a o que eu preciso se voc� quiser mesmo fazer esta m�scara.";
				close;
			}
			case 2:
			mes "[Ferreiro]";
			mes "A ^3355FFM�scara de Solda^000000 protege seu rosto, cobrindo-o com uma placa grossa de metal.";
			mes "Esta inven��o � o resultado de 30 anos de infind�vel trabalho no martelo e bigorna.";
			close;
		}
		case 2:
		mes "[Ferreiro]";
		mes "Ah...!";
		mes "Eu acho que essa � a primeira vez que voc� encontrou um ferreiro t�o bom como eu, e voc� fica a�...";
		mes "Me reverenciando, mudo.";
		mes "Por Favor, volte quando estiver pronto para falar comigo.";
		next;
		mes "^3355FF*Esse cara parece";
		mes "um pouco cheio";
		mes "de si mesmo.*^000000";
		close;
	}
}