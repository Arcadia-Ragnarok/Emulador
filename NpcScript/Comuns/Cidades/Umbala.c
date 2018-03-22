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
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na cidade Umbala                              |
\*-----------------------------------------------------------------*/

umbala,70,106,3	script	Crian�a Utan#umb	4_F_UMGIRL,{
	if (event_umbala >= 3) {
		mes "[Crian�a Utan]";
		mes "Huh?";
		mes "Voc� n�o � um de n�s, �?";
		next;
		mes "[Crian�a Utan]";
		mes "Heh! Oi!";
		mes "Meu nome � Haatan.";
		emotion(e_heh);
		next;
		mes "[Haatan]";
		mes "...*Suspiro*";
		mes "Me desculpe, mas eu n�o posso jogar com voc� agora.";
		mes "A casa dos meus pais foi atingida por um raio ontem e ele queimou o nosso telhado...";
		emotion(e_sob);
		next;
		mes "[Haatan]";
		mes ". . . !";
		next;
		mes "[Haatan]";
		mes "Ah sim! Voc� pode me ajudar?";
		mes "Voc� parece muito bem...";
		mes "Voc� pode doar algum dinheiro para a reconstru��o da casa dos meus pais?";
		mes "Voc�s de Rune-Midgard s�o todos mais ricos do que os Utans!";
		mes "Eu imploro!";
		emotion(e_heh);
		next;
		if (select("Acenar com a cabe�a","Negar com a cabe�a") == 1) {
			mes "[Haatan]";
			mes "Whoaaaa!!";
			mes "Muito obrigado, yay!";
			emotion(e_swt2);
			next;
			mes "[Haatan]";
			mes "Muito obrigado!";
			emotion(e_heh);
			close;
		}
		mes "[Haatan]";
		mes "................";
		emotion(e_sob);
		close;
	} else {
		mes "[Crian�a Utan]";
		mes "Umbah?";
		mes "Umbala umbabah umbah?";
		emotion(e_sob);
		close;
	}
}

// ------------------------------------------------------------------
umbala,59,243,5	script	Crian�a Utan#umb2	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes "[Kotan]";
		mes "............";
		mes ".........poop!";
		mes ".....eu gosto de carne.";
		mes "....me d� uma carne.";
		emotion(e_rock);
		next;
		if (select("Dar-lhe carne","Recusar") == 1) {
			if (countitem(Meat) > 0) {
				mes "[Kotan]";
				mes "Whoa, voc� realmente est� me dando carne?";
				mes "Obrigado!";
				delitem(Meat, 1);
				emotion(e_scissors);
				close;
			}
			mes "[Kotan]";
			mes "Hah! Voc� n�o tem carne, mas vai fingir que tem?!";
			mes "Eu odeio pessoas que mentem para mim!!";
			percentheal(-20, 0);
			emotion(e_an);
			close;
		}
		mes "[Kotan]";
		mes ".........";
		mes ".....hungwee.";
		mes ".....Eu quero carne.";
		percentheal(-1, 0);
		emotion(e_sob);
		close;
	} else {
		mes "[Crian�a Utan]";
		mes "............";
		mes "........umbah.";
		mes ".......umbabah.";
		mes "......humbah.";
		emotion(e_rock);
		close;
	}
}

// ------------------------------------------------------------------
umbala,194,104,4	script	Crian�a Utan#umb3	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes "[Boorkatan]";
		mes "Huh? Voc� � de Rune-Midgard, n�o �?";
		mes "Voc� j� foi em um bungee jump?";
		next;
		if (select("Sim","N�o") == 1) {
			mes "[Boorkatan]";
			mes "Wow, que surpresa!";
			mes "Eu nunca falei com algu�m de fora que que j� tivesse feito isso.";
			mes "Ok, vou tomar a palavra para lhe dar as boas vindas � nossa aldeia.";
			close;
		}
		mes "[Boorkatan]";
		mes "Er, Eu vejo...";
		mes "Faz parte da cerimonia de idade adulta, todos os Utans tem que fazer um salto de bungee jump.";
		mes "Quando eu crescer eu vou fazer tamb�m e provar para todos que sou um homem!";
		close;
	} else {
		mes "[Crian�a Utan]";
		mes "Er, Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,177,153,3	script	Pasto#umb	4W_M_01,{
	mes "[Pasto]";
	mes "Oh! Finalmente, outra pessoa de Rune-Midgard!";
	mes "Eu nunca vi ningu�m de casa neste lugar antes!";
	mes "Prazer em conhec�-lo, meu nome � Pasto!";
	emotion(e_gasp);
	next;
	mes "[Pasto]";
	mes "Este lugar � chamado de Umbala.";
	mes "As pessoas locais nesta vila constru�ram uma cultura que � completamente diferente dos outros lugares que eu fui.";
	next;
	mes "[Pasto]";
	mes "Eu acho que � porque este local foi isolado de outras regi�es devido as suas caracter�sticas geogr�ficas.";
	next;
	mes "[Pasto]";
	mes "Eles parecem diferente de n�s, e utilizam uma linguagem que ainda � muito confusa para mim.";
	mes "Fiquei confuso tamb�m com suas express�es faciais.";
	next;
	mes "[Pasto]";
	mes "Claro, existem algumas semelhan�as.";
	mes "Por�m, voc� tem que ter cuidado com certas quest�es.";
	next;
	mes "[Pasto]";
	mes "�s vezes, algo que voc� diz ou faz pode ser interpretado com o sentido totalmente oposto.";
	next;
	mes "[Pasto]";
	mes "Eu desejo poder falar seu idioma...";
	mes "*Suspiro*";
	mes "...Ou conhecer aqui mais pessoas que falem meu idioma...";
	mes "Eu... Eu estou...";
	mes "T�o sozinho...";
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
umbala,140,157,6	script	Homem Utan#umb	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes "[Jertan]";
		mes "Bungee jumping pode ser perigoso, e voc� arriscar sua vida fazendo isso.";
		mes "N�s Utans consideramos o bungee jumping uma importante parte da cerimonia de se tornar adulto.";
		close;
	} else {
		mes "[Homem Utan]";
		mes "Umbaumbah humba.";
		mes "Woo umbaumbaumbabah woo humbah";
		mes "Umbababah umba umba.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,193,208,6	script	Homem Utan#umb2	4_M_UMSOLDIER,{
	if (event_umbala >= 3) {
		mes "[Weitan]";
		mes "Eu tamb�m pratiquei bungee jump quando eu era jovem.";
		mes "Lembro-me bem... Foi minha primeira vez, e o ch�o queria me conhecer...";
		mes "Por um momento, eu pensei que eu fosse me suicidar...";
		next;
		mes "[Weitan]";
		mes "Mas depois que fiz isso, eu tive tanto orgulho de mim.";
		mes "Alguns Utans podem n�o concordar.";
		mes "Mas eu acho que o bungee jumping � um parte importante da cerimonia da vida adulta.";
		close;
	} else {
		mes "[Homem Utan]";
		mes "Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}
