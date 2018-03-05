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
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Umbala                              |
\*-----------------------------------------------------------------*/

umbala,70,106,3	script	Criança Utan#umb	4_F_UMGIRL,{
	if (event_umbala >= 3) {
		mes("[Criança Utan]\n Huh?\n Você não é um de nós, é?");
		next;
		mes("[Criança Utan]\n Heh! Oi!\n Meu nome é Haatan.");
		emotion(e_heh);
		next;
		mes("[Haatan]\n ...*Suspiro*\n Me desculpe, mas eu não posso jogar com você agora.\n A casa dos meus pais foi atingida por um raio ontem e ele queimou o nosso telhado...");
		emotion(e_sob);
		next;
		mes("[Haatan]\n . . . !");
		next;
		mes("[Haatan]\n Ah sim! Você pode me ajudar?\n Você parece muito bem...\n Você pode doar algum dinheiro para a reconstrução da casa dos meus pais?\n Vocês de Rune-Midgard são todos mais ricos do que os Utans!\n Eu imploro!");
		emotion (e_heh);
		next;
		if (select("Acenar com a cabeça", "Negar com a cabeça") == 1) {
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
		mes("[Criança Utan]\n Umbah?\n Umbala umbabah umbah?");
		emotion (e_sob);
		close;
	}
}

// ------------------------------------------------------------------
umbala,59,243,5	script	Criança Utan#umb2	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes("[Kotan]\n ............\n .........poop!\n .....eu gosto de carne.\n ....me dê uma carne.");
		emotion(e_rock);
		next;
		if (select("Dar-lhe carne", "Recusar") == 1) {
			if (countitem(Meat) > 0) {
				mes("[Kotan]\n Whoa, você realmente está me dando carne?\n Obrigado!");
				delitem(Meat, 1);
				emotion(e_scissors);
				close;
			}
			mes("[Kotan]\n Hah! Você não tem carne, mas vai fingir que tem?!\n Eu odeio pessoas que mentem para mim!!");
			percentheal(-20, 0);
			emotion(e_an);
			close;
		}
		mes("[Kotan]\n .........\n .....hungwee.\n .....Eu quero carne.");
		percentheal(-1, 0);
		emotion(e_sob);
		close;
	} else {
		mes("[Criança Utan]\n ............\n ........umbah.\n .......umbabah.\n ......humbah.");
		emotion(e_rock);
		close;
	}
}

// ------------------------------------------------------------------
umbala,194,104,4	script	Criança Utan#umb3	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes("[Boorkatan]\n Huh? Você é de Rune-Midgard, não é?\n Você já foi em um bungee jump?");
		next;
		if (select("Sim", "Não") == 1) {
			mes("[Boorkatan]\n Wow, que surpresa!\n Eu nunca falei com alguém de fora que que já tivesse feito isso.\n Ok, vou tomar a palavra para lhe dar as boas vindas à nossa aldeia.");
			close;
		}
		mes("[Boorkatan]\n Er, Eu vejo...\n Faz parte da cerimonia de idade adulta, todos os Utans tem que fazer um salto de bungee jump.\n Quando eu crescer eu vou fazer também e provar para todos que sou um homem!");
		close;
	} else {
		mes("[Criança Utan]\n Er, Umbahumba umumbah.\n Umbahumbah umbabah.\n Umbahumhumbabahum.");
		close;
	}
}

// ------------------------------------------------------------------
umbala,177,153,3	script	Pasto#umb	4W_M_01,{
	mes("[Pasto]\n Oh! Finalmente, outra pessoa de Rune-Midgard!\n Eu nunca vi ninguém de casa neste lugar antes!\n Prazer em conhecê-lo, meu nome é Pasto!");
	emotion(e_gasp);
	next;
	mes("[Pasto]\n Este lugar é chamado de Umbala.\n As pessoas locais nesta vila construíram uma cultura que é completamente diferente dos outros lugares que eu fui.");
	next;
	mes("[Pasto]\n Eu acho que é porque este local foi isolado de outras regiões devido as suas características geográficas.");
	next;
	mes("[Pasto]\n Eles parecem diferente de nós, e utilizam uma linguagem que ainda é muito confusa para mim.\n Fiquei confuso também com suas expressões faciais.");
	next;
	mes("[Pasto]\n Claro, existem algumas semelhanças.\n Porém, você tem que ter cuidado com certas questões.");
	next;
	mes("[Pasto]\n Às vezes, algo que você diz ou faz pode ser interpretado com o sentido totalmente oposto.");
	next;
	mes("[Pasto]\n Eu desejo poder falar seu idioma...\n *Suspiro*\n ...Ou conhecer aqui mais pessoas que falem meu idioma...\n Eu... Eu estou...\n Tão sozinho...");
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
umbala,140,157,6	script	Homem Utan#umb	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes("[Jertan]\n Bungee jumping pode ser perigoso, e você arriscar sua vida fazendo isso.\n Nós Utans consideramos o bungee jumping uma importante parte da cerimonia de se tornar adulto.");
		close;
	} else {
		mes("[Homem Utan]\n Umbaumbah humba.\n Woo umbaumbaumbabah woo humbah\n Umbababah umba umba.");
		close;
	}
}

// ------------------------------------------------------------------
umbala,193,208,6	script	Homem Utan#umb2	4_M_UMSOLDIER,{
	if (event_umbala >= 3) {
		mes("[Weitan]\n Eu também pratiquei bungee jump quando eu era jovem.\n Lembro-me bem... Foi minha primeira vez, e o chão queria me conhecer...\n Por um momento, eu pensei que eu fosse me suicidar...");
		next;
		mes("[Weitan]\n Mas depois que fiz isso, eu tive tanto orgulho de mim.\n Alguns Utans podem não concordar.\n Mas eu acho que o bungee jumping é um parte importante da cerimonia da vida adulta.");
		close;
	} else {
		mes("[Homem Utan]\n Umbahumba umumbah.\n Umbahumbah umbabah.\n Umbahumhumbabahum.");
		close;
	}
}
