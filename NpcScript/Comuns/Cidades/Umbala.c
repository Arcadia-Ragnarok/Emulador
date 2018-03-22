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

umbala,70,106,3	script	Criança Utan#umb	4_F_UMGIRL,{
	if (event_umbala >= 3) {
		mes "[Criança Utan]";
		mes "Huh?";
		mes "Você não é um de nós, é?";
		next;
		mes "[Criança Utan]";
		mes "Heh! Oi!";
		mes "Meu nome é Haatan.";
		emotion(e_heh);
		next;
		mes "[Haatan]";
		mes "...*Suspiro*";
		mes "Me desculpe, mas eu não posso jogar com você agora.";
		mes "A casa dos meus pais foi atingida por um raio ontem e ele queimou o nosso telhado...";
		emotion(e_sob);
		next;
		mes "[Haatan]";
		mes ". . . !";
		next;
		mes "[Haatan]";
		mes "Ah sim! Você pode me ajudar?";
		mes "Você parece muito bem...";
		mes "Você pode doar algum dinheiro para a reconstrução da casa dos meus pais?";
		mes "Vocês de Rune-Midgard são todos mais ricos do que os Utans!";
		mes "Eu imploro!";
		emotion(e_heh);
		next;
		if (select("Acenar com a cabeça","Negar com a cabeça") == 1) {
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
		mes "[Criança Utan]";
		mes "Umbah?";
		mes "Umbala umbabah umbah?";
		emotion(e_sob);
		close;
	}
}

// ------------------------------------------------------------------
umbala,59,243,5	script	Criança Utan#umb2	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes "[Kotan]";
		mes "............";
		mes ".........poop!";
		mes ".....eu gosto de carne.";
		mes "....me dê uma carne.";
		emotion(e_rock);
		next;
		if (select("Dar-lhe carne","Recusar") == 1) {
			if (countitem(Meat) > 0) {
				mes "[Kotan]";
				mes "Whoa, você realmente está me dando carne?";
				mes "Obrigado!";
				delitem(Meat, 1);
				emotion(e_scissors);
				close;
			}
			mes "[Kotan]";
			mes "Hah! Você não tem carne, mas vai fingir que tem?!";
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
		mes "[Criança Utan]";
		mes "............";
		mes "........umbah.";
		mes ".......umbabah.";
		mes "......humbah.";
		emotion(e_rock);
		close;
	}
}

// ------------------------------------------------------------------
umbala,194,104,4	script	Criança Utan#umb3	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes "[Boorkatan]";
		mes "Huh? Você é de Rune-Midgard, não é?";
		mes "Você já foi em um bungee jump?";
		next;
		if (select("Sim","Não") == 1) {
			mes "[Boorkatan]";
			mes "Wow, que surpresa!";
			mes "Eu nunca falei com alguém de fora que que já tivesse feito isso.";
			mes "Ok, vou tomar a palavra para lhe dar as boas vindas à nossa aldeia.";
			close;
		}
		mes "[Boorkatan]";
		mes "Er, Eu vejo...";
		mes "Faz parte da cerimonia de idade adulta, todos os Utans tem que fazer um salto de bungee jump.";
		mes "Quando eu crescer eu vou fazer também e provar para todos que sou um homem!";
		close;
	} else {
		mes "[Criança Utan]";
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
	mes "Eu nunca vi ninguém de casa neste lugar antes!";
	mes "Prazer em conhecê-lo, meu nome é Pasto!";
	emotion(e_gasp);
	next;
	mes "[Pasto]";
	mes "Este lugar é chamado de Umbala.";
	mes "As pessoas locais nesta vila construíram uma cultura que é completamente diferente dos outros lugares que eu fui.";
	next;
	mes "[Pasto]";
	mes "Eu acho que é porque este local foi isolado de outras regiões devido as suas características geográficas.";
	next;
	mes "[Pasto]";
	mes "Eles parecem diferente de nós, e utilizam uma linguagem que ainda é muito confusa para mim.";
	mes "Fiquei confuso também com suas expressões faciais.";
	next;
	mes "[Pasto]";
	mes "Claro, existem algumas semelhanças.";
	mes "Porém, você tem que ter cuidado com certas questões.";
	next;
	mes "[Pasto]";
	mes "Às vezes, algo que você diz ou faz pode ser interpretado com o sentido totalmente oposto.";
	next;
	mes "[Pasto]";
	mes "Eu desejo poder falar seu idioma...";
	mes "*Suspiro*";
	mes "...Ou conhecer aqui mais pessoas que falem meu idioma...";
	mes "Eu... Eu estou...";
	mes "Tão sozinho...";
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
umbala,140,157,6	script	Homem Utan#umb	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes "[Jertan]";
		mes "Bungee jumping pode ser perigoso, e você arriscar sua vida fazendo isso.";
		mes "Nós Utans consideramos o bungee jumping uma importante parte da cerimonia de se tornar adulto.";
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
		mes "Eu também pratiquei bungee jump quando eu era jovem.";
		mes "Lembro-me bem... Foi minha primeira vez, e o chão queria me conhecer...";
		mes "Por um momento, eu pensei que eu fosse me suicidar...";
		next;
		mes "[Weitan]";
		mes "Mas depois que fiz isso, eu tive tanto orgulho de mim.";
		mes "Alguns Utans podem não concordar.";
		mes "Mas eu acho que o bungee jumping é um parte importante da cerimonia da vida adulta.";
		close;
	} else {
		mes "[Homem Utan]";
		mes "Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}
