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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest do Chifre de Alce                              |
\*-----------------------------------------------------------------*/

alberta_in,122,53,4	script	Cherokee	1_M_01,{
	mes "[Cherokee]";
	mes "Ei!";
	next;
	mes "[Cherokee]";
	mes "O que voc� sabe sobre chifres de animais?";
	mes "Ah, eu acho que eles s�o �timos!";
	mes "Voc� n�o?";
	mes "Eu amo chifres de animais tanto que me tornei um ^3355FFColecionador de Chifres^000000.";
	next;
	mes "[Cherokee]";
	mes "H� muitas coisas que se pode fazer com chifres.";
	mes "Voc� pode us�-los em sua cabe�a, voc� tamb�m pode us�-los na, hum ... na sua casa?";
	mes "V�rios tipos de coisas!";
	next;
	mes "[Cherokee]";
	mes "Eu juntei quase todos os tipos de chifre com exce��o de um tipo ^FF3355Chifre Diab�lico^000000.";
	mes "Algumas pessoas dizem que o chifre diab�lico n�o vem mesmo de um animal, mas de um dem�nio.";
	mes "Mesmo assim, eu ainda o quero.";
	next;
	mes "[Cherokee]";
	mes "Voc�...";
	mes "Voc� possui ^FF3355Chifres Diab�lico^000000?";
	mes "Se voc� me oferecer 20 Chifres Diab�licos, vou lhe dar um ^3355FFChifre^000000 da minha cole��o preciosa.";
	mes "Ent�o, aceita?";
	next;
	switch(select("Ok, vamos negociar", "Cale a boca, Dumbo")) {
		case 1:
		if (countitem(Evil_Horn) > 19) {
			delitem Evil_Horn,20;
			mes "[Cherokee]";
			mes "Oba! Esta � a primeira vez que eu vejo um ^FF3355Chifre Diab�lico^000000!!";
			mes "Obrigado!";
			mes "Aqui, este � o meu Chifre de Alce para voc�!";
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
			mes "Voc� parece n�o ter o suficiente.";
			mes "Eu preciso ^FF335520 Chifres Diab�licos^000000 para minha cole��o.";
			close;
		}
		case 2:
		mes "[Cherokee]";
		mes "Embora seja um pouco rude, eu vou te perdoar.";
		mes "N�s provavelmente vamos falar novamente...";
		close;
	}
}
