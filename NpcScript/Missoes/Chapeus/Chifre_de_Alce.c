/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Source Script                      |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest do Chifre de Alce                              |
\*-----------------------------------------------------------------*/

alberta_in,122,53,4	script	Cherokee	1_M_01,{
	mes "[Cherokee]";
	mes "Ei!";
	next;
	mes "[Cherokee]";
	mes "O que você sabe sobre chifres de animais?";
	mes "Ah, eu acho que eles são ótimos!";
	mes "Você não?";
	mes "Eu amo chifres de animais tanto que me tornei um ^3355FFColecionador de Chifres^000000.";
	next;
	mes "[Cherokee]";
	mes "Há muitas coisas que se pode fazer com chifres.";
	mes "Você pode usá-los em sua cabeça, você também pode usá-los na, hum ... na sua casa?";
	mes "Vários tipos de coisas!";
	next;
	mes "[Cherokee]";
	mes "Eu juntei quase todos os tipos de chifre com exceção de um tipo ^FF3355Chifre Diabólico^000000.";
	mes "Algumas pessoas dizem que o chifre diabólico não vem mesmo de um animal, mas de um demônio.";
	mes "Mesmo assim, eu ainda o quero.";
	next;
	mes "[Cherokee]";
	mes "Você...";
	mes "Você possui ^FF3355Chifres Diabólico^000000?";
	mes "Se você me oferecer 20 Chifres Diabólicos, vou lhe dar um ^3355FFChifre^000000 da minha coleção preciosa.";
	mes "Então, aceita?";
	next;
	switch(select("Ok, vamos negociar", "Cale a boca, Dumbo")) {
		case 1:
		if (countitem(Evil_Horn) > 19) {
			delitem Evil_Horn,20;
			mes "[Cherokee]";
			mes "Oba! Esta é a primeira vez que eu vejo um ^FF3355Chifre Diabólico^000000!!";
			mes "Obrigado!";
			mes "Aqui, este é o meu Chifre de Alce para você!";
			getitem(Antler,1);
			next;
			mes "[Cherokee]";
			mes "Com a sua grande ajuda, eu posso fazer o meu desejo se tornar realidade neste momento.";
			mes "Finalmente, eu vou ser reconhecido como um grande Coletor de Chifres.";
			mes "Eu gosto disso!";
			close;
		} else {
			mes "[Cherokee]";
			mes "Humm...";
			mes "Você parece não ter o suficiente.";
			mes "Eu preciso ^FF335520 Chifres Diabólicos^000000 para minha coleção.";
			close;
		}
		case 2:
		mes "[Cherokee]";
		mes "Embora seja um pouco rude, eu vou te perdoar.";
		mes "Nós provavelmente vamos falar novamente...";
		close;
	}
}
