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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Umbala                              |
\*-----------------------------------------------------------------*/

umbala,70,106,3	script	Crian�a Utan#umb	4_F_UMGIRL,{
	if (event_umbala >= 3) {
		mes("[Crian�a Utan]\n Huh?\n Voc� n�o � um de n�s, �?");
		next;
		mes("[Crian�a Utan]\n Heh! Oi!\n Meu nome � Haatan.");
		emotion(e_heh);
		next;
		mes("[Haatan]\n ...*Suspiro*\n Me desculpe, mas eu n�o posso jogar com voc� agora.\n A casa dos meus pais foi atingida por um raio ontem e ele queimou o nosso telhado...");
		emotion(e_sob);
		next;
		mes("[Haatan]\n . . . !");
		next;
		mes("[Haatan]\n Ah sim! Voc� pode me ajudar?\n Voc� parece muito bem...\n Voc� pode doar algum dinheiro para a reconstru��o da casa dos meus pais?\n Voc�s de Rune-Midgard s�o todos mais ricos do que os Utans!\n Eu imploro!");
		emotion (e_heh);
		next;
		if (select("Acenar com a cabe�a", "Negar com a cabe�a") == 1) {
			mes("[Haatan]\n Whoaaaa!!\n Muito obrigado, yay!");
			emotion(e_swt2);
			next;
			mes("[Haatan]\n Muito obrigado!");
			emotion(e_heh);
			close;
		}
		mes("[Haatan]\n ................");
		emotion(e_sob);
		close;
	} else {
		mes("[Crian�a Utan]\n Umbah?\n Umbala umbabah umbah?");
		emotion (e_sob);
		close;
	}
}

// ------------------------------------------------------------------
umbala,59,243,5	script	Crian�a Utan#umb2	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes("[Kotan]\n ............\n .........poop!\n .....eu gosto de carne.\n ....me d� uma carne.");
		emotion(e_rock);
		next;
		if (select("Dar-lhe carne", "Recusar") == 1) {
			if (countitem(Meat) > 0) {
				mes("[Kotan]\n Whoa, voc� realmente est� me dando carne?\n Obrigado!");
				delitem(Meat, 1);
				emotion(e_scissors);
				close;
			}
			mes("[Kotan]\n Hah! Voc� n�o tem carne, mas vai fingir que tem?!\n Eu odeio pessoas que mentem para mim!!");
			percentheal(-20, 0);
			emotion(e_an);
			close;
		}
		mes("[Kotan]\n .........\n .....hungwee.\n .....Eu quero carne.");
		percentheal(-1, 0);
		emotion(e_sob);
		close;
	} else {
		mes("[Crian�a Utan]\n ............\n ........umbah.\n .......umbabah.\n ......humbah.");
		emotion(e_rock);
		close;
	}
}

// ------------------------------------------------------------------
umbala,194,104,4	script	Crian�a Utan#umb3	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes("[Boorkatan]\n Huh? Voc� � de Rune-Midgard, n�o �?\n Voc� j� foi em um bungee jump?");
		next;
		if (select("Sim", "N�o") == 1) {
			mes("[Boorkatan]\n Wow, que surpresa!\n Eu nunca falei com algu�m de fora que que j� tivesse feito isso.\n Ok, vou tomar a palavra para lhe dar as boas vindas � nossa aldeia.");
			close;
		}
		mes("[Boorkatan]\n Er, Eu vejo...\n Faz parte da cerimonia de idade adulta, todos os Utans tem que fazer um salto de bungee jump.\n Quando eu crescer eu vou fazer tamb�m e provar para todos que sou um homem!");
		close;
	} else {
		mes("[Crian�a Utan]\n Er, Umbahumba umumbah.\n Umbahumbah umbabah.\n Umbahumhumbabahum.");
		close;
	}
}

// ------------------------------------------------------------------
umbala,177,153,3	script	Pasto#umb	4W_M_01,{
	mes("[Pasto]\n Oh! Finalmente, outra pessoa de Rune-Midgard!\n Eu nunca vi ningu�m de casa neste lugar antes!\n Prazer em conhec�-lo, meu nome � Pasto!");
	emotion(e_gasp);
	next;
	mes("[Pasto]\n Este lugar � chamado de Umbala.\n As pessoas locais nesta vila constru�ram uma cultura que � completamente diferente dos outros lugares que eu fui.");
	next;
	mes("[Pasto]\n Eu acho que � porque este local foi isolado de outras regi�es devido as suas caracter�sticas geogr�ficas.");
	next;
	mes("[Pasto]\n Eles parecem diferente de n�s, e utilizam uma linguagem que ainda � muito confusa para mim.\n Fiquei confuso tamb�m com suas express�es faciais.");
	next;
	mes("[Pasto]\n Claro, existem algumas semelhan�as.\n Por�m, voc� tem que ter cuidado com certas quest�es.");
	next;
	mes("[Pasto]\n �s vezes, algo que voc� diz ou faz pode ser interpretado com o sentido totalmente oposto.");
	next;
	mes("[Pasto]\n Eu desejo poder falar seu idioma...\n *Suspiro*\n ...Ou conhecer aqui mais pessoas que falem meu idioma...\n Eu... Eu estou...\n T�o sozinho...");
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
umbala,140,157,6	script	Homem Utan#umb	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes("[Jertan]\n Bungee jumping pode ser perigoso, e voc� arriscar sua vida fazendo isso.\n N�s Utans consideramos o bungee jumping uma importante parte da cerimonia de se tornar adulto.");
		close;
	} else {
		mes("[Homem Utan]\n Umbaumbah humba.\n Woo umbaumbaumbabah woo humbah\n Umbababah umba umba.");
		close;
	}
}

// ------------------------------------------------------------------
umbala,193,208,6	script	Homem Utan#umb2	4_M_UMSOLDIER,{
	if (event_umbala >= 3) {
		mes("[Weitan]\n Eu tamb�m pratiquei bungee jump quando eu era jovem.\n Lembro-me bem... Foi minha primeira vez, e o ch�o queria me conhecer...\n Por um momento, eu pensei que eu fosse me suicidar...");
		next;
		mes("[Weitan]\n Mas depois que fiz isso, eu tive tanto orgulho de mim.\n Alguns Utans podem n�o concordar.\n Mas eu acho que o bungee jumping � um parte importante da cerimonia da vida adulta.");
		close;
	} else {
		mes("[Homem Utan]\n Umbahumba umumbah.\n Umbahumbah umbabah.\n Umbahumhumbabahum.");
		close;
	}
}
