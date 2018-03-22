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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest da Máscara de Solda                            |
\*-----------------------------------------------------------------*/

geffen_in,144,166,4	script	Ferreiro#gefq	1_M_SMITH,{
	mes "[Ferreiro]";
	mes "Você nunca ouviu falar de mim?";
	mes "Ora, eu sou o veterano Ferreiro desta terra.";
	mes "Eu passei 30 anos neste inferno quente e sangrento, dobrando ferro para o criar meu próprio aço!";
	next;
	mes "[Ferreiro]";
	mes "Mas...";
	mes "Estou envelhecendo e meu talento começa a desaparecer com a idade.";
	mes "Então eu tenho inventado algo para os jovens ferreiros próximos.";
	mes "Na esperança de que eles também irão dominar a minha arte...";
	next;
	switch (select("O que é isso?","...")) {
		case 1:
		mes "[Ferreiro]";
		mes "Nós Ferreiros, devemos sempre manipular o aço sob calor extremo, ar quente e metais fundidos.";
		mes "Esaas condições são mais do que a maioria das pessoas podem aguentar.";
		next;
		mes "[Ferreiro]";
		mes "Para o bem do nosso artesanato, os nossos belos rostos masculinos são colocados em risco...";
		next;
		mes "[Ferreiro]";
		mes "Mas, com esta maravilha da tecnologia, não há necessidade de se preocupar!";
		mes "Eis então, a ^3355FFMáscara de Solda^000000!";
		next;
		mes "[Ferreiro]";
		mes "Ela funciona cobrindo seu rosto com uma grossa placa de metal.";
		mes "Na verdade, é um item que todo mundo deveria querer!";
		mes "Se não for para você mesmo, seria uma boa idéia dar a um amigo que está estudando forja.";
		next;
		mes "[Ferreiro]";
		mes "Então, o que dizer sobre isto?";
		mes "Se você me der ^2244FF50 Aços^000000 e";
		mes "^4422FFapenas 2.000 zenys^000000.";
		mes "Eu vou fazer isso para você imediatamente!";
		next;
		switch (select("Hm... Nada mau. Certo","Como é que funciona mesmo?")) {
			case 1:
			if ((countitem(Steel) > 49) && (Zeny > 1999)){
				mes "[Ferreiro]";
				mes "Ah, vejo que você aprecia o trabalho de um ferreiro!";
				mes "Tudo bem, eu vou fazê-lo imediatamente!!";
				next;
				delitem(Steel,50);
				Zeny -= 2000;
				getitem(Welding_Mask,1);
				mes "[Ferreiro]";
				mes "Hahaha! Faça bom uso dela!";
				close;
			} else {
				mes "[Ferreiro]";
				mes "Hmmm...";
				mes "Você não tem os itens requeridos.";
				next;
				mes "[Ferreiro]";
				mes "Um ferreiro comum iria interpretar isso como um sinal de desrespeito, mas eu vou te perdoar.";
				mes "Só não se esqueça o que eu preciso se você quiser mesmo fazer esta máscara.";
				close;
			}
			case 2:
			mes "[Ferreiro]";
			mes "A ^3355FFMáscara de Solda^000000 protege seu rosto, cobrindo-o com uma placa grossa de metal.";
			mes "Esta invenção é o resultado de 30 anos de infindável trabalho no martelo e bigorna.";
			close;
		}
		case 2:
		mes "[Ferreiro]";
		mes "Ah...!";
		mes "Eu acho que essa é a primeira vez que você encontrou um ferreiro tão bom como eu, e você fica aí...";
		mes "Me reverenciando, mudo.";
		mes "Por Favor, volte quando estiver pronto para falar comigo.";
		next;
		mes "^3355FF*Esse cara parece";
		mes "um pouco cheio";
		mes "de si mesmo.*^000000";
		close;
	}
}