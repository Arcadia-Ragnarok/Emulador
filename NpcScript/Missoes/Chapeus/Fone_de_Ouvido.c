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
| - Copyright: Spell Master (21/03/2018)                            |
| - Info: Mini-Quest dos Fones de Ouvido                            |
\*-----------------------------------------------------------------*/

geffen_in,30,71,4	script	Eric#gef	4_M_01,{
	mes "[Eric]";
	mes "Por favor, ou�a a hist�ria do meu aben�oado av�.";
	next;
	mes "[Eric]";
	mes "Meu av�, que faleceu h� alguns anos atr�s, fora muito especial para mim.";
	mes "Ele sempre esteve comigo, e cuidou de mim.";
	mes "Ele era muito melhor do que meu velho, que estava sempre ocupado trabalhando.";
	next;
	mes "[Eric]";
	mes "Para mim, a biblioteca do av� sempre foi como uma terra de fantasia onde eu pudesse escapar da realidade.";
	mes "Passei a maior parte do meu tempo l�.";
	next;
	mes "[Eric]";
	mes "Eu aprendi um monte de coisas de seus livros na Biblioteca.";
	mes "Meu av� estava interessado em Alquimia e m�sica.";
	mes "E sua Biblioteca encheu com muitos misteriosos livros antigos.";
	next;
	mes "[Eric]";
	mes "Um dia...";
	mes "Como de costume, fui � biblioteca e descobri um esquema interessante.";
	next;
	mes "[Eric]";
	mes "Ele mostrou alguns instrumentos que pareciam como Fones de Ouvido.";
	mes "Quando usado na cabe�a, podiam transmitir m�sica para os ouvidos ou sussurros atrav�s de um fio fino.";
	next;
	mes "[Eric]";
	mes "Eu acho...";
	mes "� a obra inacabada do meu av�.";
	mes "Eu conheci alguns Alquimistas, pedi para eles produzirem, mas eles rejeitaram a minha oferta...";
	next;
	mes "[Eric]";
	mes "No final, eu pensei, tenho que fazer isso sozinho.";
	mes "Ent�o, eu pesquisei por alguns anos, e agora eu compreendo perfeitamente como fazer essa coisa.";
	mes "Mas, eu nunca pude reunir o material para faz�-lo!";
	next;
	mes "[Eric]";
	mes "Se eu conseguir esses artigos, posso constru�-lo imediatamente.";
	mes "Se voc� est� interessado em minha id�ia, voc� poderia traz�-los para mim?";
	next;
	mes "[Eric]";
	mes "Tudo que eu quero fazer � construir essa coisa em homenagem ao meu av�.";
	mes "E terminar o trabalho que ele come�ou.";
	mes "Se voc� me pedir para continuar, eu n�o me importaria.";
	close;
	switch (select("Pergunte sobre os itens","Fabricar os Fones","Sair")) {
		case 1:
		mes "[Eric]";
		mes "^3355FF40 A�os^000000,";
		mes "^3355FF1 Oridecon^000000,";
		mes "^3355FF1 �lcool^000000 e";
		mes "^3355FF1 Carv�o^000000.";
		mes "Estas s�o as coisas que eu preciso para concluir a obra do meu av�.";
		close;
		case 2:
		if ((countitem(Steel) > 39) && (countitem(Oridecon) > 0) && (countitem(Alchol) > 0) && (countitem(Coal) > 0)) {
			delitem(Steel,40);
			delitem(Oridecon,1);
			delitem(Alchol,1);
			delitem(Coal,1);
			getitem(Headset,1);
			mes "*Tap! Tap! Tap!*";
			next;
			mes "[Eric]";
			mes "Obrigado.";
			mes "Por causa de voc�, eu pude realizar o desejo do meu av�.";
			mes "Se ele olhou para mim do c�u agora, ele deve estar feliz.";
			next;
			mes "[Eric]";
			mes "Como eu disse, por favor, tome isto.";
			mes "Eu apenas estou orgulhoso de que eu posso fazer isso sozinho.";
			close;
		} else {
			mes "[Eric]";
			mes "Obrigado por tentar me ajudar, mas voc� n�o trouxe todos os itens que eu preciso.";
			mes "Acho que voc� vai encontrar todos eles em breve.";
			close;
		}
		case 3:
		mes "[Eric]";
		mes "N-n�o?";
		mes "Bem...";
		mes "Voc� tem suas pr�prias preocupa��es, eu suponho.";
		mes "At� mais.";
		close;
	}
}
