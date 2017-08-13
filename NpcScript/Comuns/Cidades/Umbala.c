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

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
umbala,70,106,3	script	Crian�a Utan#umb	4_F_UMGIRL,{
	if (event_umbala >= 3) {
		mes "[???]";
		mes "Huh?";
		mes "Voc� n�o � um de n�s, �?";
		next;
		mes "[???]";
		mes "Heh! Oi!";
		mes "Meu nome � Haatan.";
		emotion (e_heh);
		next;
		mes "[Haatan]";
		mes "...*Suspiro*";
		mes "Me desculpe, mas eu n�o posso jogar com voc� agora.";
		mes "A casa dos meus pais foi atingida por um raio ontem e ele queimou o nosso telhado...";
		emotion (e_sob);
		next;
		mes "[Haatan]";
		mes " . . . !";
		next;
		mes "[Haatan]";
		mes "Ah sim! Voc� pode me ajudar?";
		mes "Voc� parece muito bem...";
		mes "Voc� pode doar algum dinheiro para a reconstru��o da casa dos meus pais?";
		mes "Voc�s de Rune-Midgard s�o todos mais ricos do que os Utans!";
		mes "Eu imploro!";
		emotion (e_heh);
		next;
		if (select("Acenar com a cabe�a","Negar com a cabe�a") == 1) {
			mes "[Haatan]";
			mes "Whoaaaa!!";
			mes "Muito obrigado, yay!";
			emotion (e_swt2);
			next;
			mes "[Haatan]";
			mes "Muito obrigado!";
			emotion (e_heh);
			close;
		}
		mes "[Haatan]";
		mes ".............*Sob*...";
		emotion (e_sob);
		close;
	}
	else {
		mes "[???]";
		mes "Umbah?";
		mes "Umbala umbabah umbah?";
		next;
		mes "[???]";
		mes "Umbah! Umbaumbah!";
		mes "Umbahumbah Haatan babah.";
		emotion (e_sob);
		next;
		mes "[Haatan]";
		mes "........umbah,";
		mes "Umbah umbah umbaumbumbah umbah umbah";
		mes "Babaum babahum woombah umbah umbabah";
		mes "Umbah umbah";
		mes "..Umbah umbabah umbah...";
		emotion (e_heh);
		next;
		mes "[Haatan]";
		mes " . . . !";
		next;
		mes "[Haatan]";
		mes "Umbah!";
		mes "Umbah umbah? Umbah umbahbah";
		mes "abaum babahum woombah!";
		mes "Umbahumbah umbabahumbaumhumbah! Umbah!";
		emotion (e_heh);
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
		emotion (e_rock);
		next;
		if (select("Dar-lhe carne.","Recusar.") == 1) {
			if (countitem(Meat) > 0) {
				mes "[Kotan]";
				mes "Whoa, voc� realmente est� me dando";
				mes "carne? Obrigado!";
				delitem (Meat,1);
				emotion (e_scissors);
				close;
			}
			mes "[Kotan]";
			mes "Hah! Voc� n�o tem carne,";
			mes "mas vai fingir que tem?!";
			mes "Eu odeio pessoas que mentem para mim!!";
			percentheal (-20,0);
			emotion (e_an);
			close;
		}
		mes "[Kotan]";
		mes ".........";
		mes ".....hungwee.";
		mes ".....Eu quero carne.";
		percentheal (-1,0);
		emotion (e_sob);
		close;
	}
	else {
		mes "[???]";
		mes "............";
		mes "........umbah.";
		mes ".......umbabah.";
		mes "......humbah.";
		emotion (e_rock);
		close;
	}
}

// ------------------------------------------------------------------
umbala,149,165,4	script	Crian�a Utan#umb3	4_F_UMGIRL,{
	if (event_umbala >= 3) {
		mes "[Klumatan]";
		mes "� realmente assustador, cair de um lugar t�o alto...";
		mes "Mas eu acho que voc� tem que, fazer isso, caso contr�rio n�o v�o considerar voc� um adulto.";
		next;
		mes "[Klumatan]";
		mes "Eu acho que eu n�o quero ser adulto imediatamente.";
		mes "Mas algumas crian�as da minha idade tem uma pressa muito grande para n�o serem mais crian�as.";
		close;
	}
	else {
		mes "[???]";
		mes "Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,194,104,4	script	Crian�a Utan#umb4	4_M_UMKID,{
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
	}
	else {
		mes "[???]";
		mes "Er, Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}


// ------------------------------------------------------------------
umbala,139,205,4	script	Crian�a Utan#umb5	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes "[Jooltan]";
		mes "Faz muito tempo desde a �ltima vez que eu vi algu�m de Rune-Midgard!";
		next;
		mes "[Jooltan]";
		mes "N�s Utans usamos estes lugar para bungee jumping.";
		mes "Muitos jovens Utans tem demonstrado sua bravura, ganhando seu auto-respeito, e se tornanado adultos neste lugar.";
		next;
		mes "[Jooltan]";
		mes "Oh... certo.";
		mes "Algumas pessoas azaradas h� pouco ca�ram e morreram depois de realizar o salto.";
		mes "E algumas tiveram ataques card�acos enquanto saltavam...";
		next;
		mes "[Jooltan]";
		mes "Ent�o...";
		mes "Tome cuidado quando andar por ai, voc� n�o vai querer cair.";
		mes "E se voc� quiser experimentar o bungee jump, voc� deve estar pronto.";
		next;
		mes "[Jooltan]";
		mes "Oh...certo. Supostamente, h� uma criatura n�o identificada vivendo na �gua...";
		mes "Ent�o se voc� se molhar, saia de l�!";
		close;
	}
	else {
		mes "[???]";
		mes "Umbah umbah!";
		mes "Umbaumbah bababah umbah.";
		mes "Babaumm Utan umbah umbabah";
		mes "Umbaba hum.";
		mes "Umumhumbah umbaumbah umbabah.";
		next;
		mes "[???]";
		mes "Umbaum mahbababh umba,";
		mes "Umbabatan umbaumbah.";
		mes "Ba, umbaumbaumumbabaumm.";
		mes "Umbabah umbaumumum.";
		mes "Umbaumbaubahum.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,177,153,3	script	Pasto#umb	4W_M_01,{
	mes "[Pasto]";
	emotion (e_gasp);
	mes "Oh! Finalmente, outra pessoa de Rune-Midgard!";
	mes "Eu nunca vi ningu�m de casa neste lugar antes!";
	mes "Prazer em conhec�-lo, meu nome � Pasto!";
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
	mes "T�o sozinho...*Sob*";
	emotion (e_sob);
	close;
}

// ------------------------------------------------------------------
umbala,80,146,4	script	Yuwooki#umb	4_M_MONK,{
	mes "[Yuwooki]";
	mes "Umbah umbah woogawoo...";
	mes "Opa, desculpa! eu estou t�o acostumado falar em Utan agora.";
	mes "� um prazer conhec�-lo.";
	next;
	mes "[Yuwooki]";
	mes "Eu nunca imaginei que eu fosse conhecer uma pessoa da minha terra natal nesta aldeia.";
	mes "Hahahahah!";
	next;
	mes "[Yuwooki]";
	mes "Eu vim em busca de um povo forte para me ajudar a melhorar minhas habilidades de luta.";
	mes "Mas logo fiquei um pouco frustrada porque levei um tempo para aprender a l�ngua...";
	next;
	mes "[Yuwooki]";
	mes "Bem, agora eu estou acostumada com as circunstancias.";
	mes "Embora isso tenha levada um tempo para me acostumar com a Cultura Utan.";
	mes "Hahahaha!";
	next;
	mes "[Yuwooki]";
	mes "Mas voc� sabe a coisa mais estranha que eu descobri sobre a cultura Utan?";
	mes "No princ�pio os homens Utan pareciam ter, digamos, um instinto de preserva��o de esp�cies fortes.";
	next;
	mes "[Yuwooki]";
	mes "H� muitos playboys Utan nesta aldeia.";
	mes "Alguns podem pensar que os Utans s�o primitivos neste respeito, mas...";
	next;
	mes "[Yuwooki]";
	mes "Como eu aprendi mais sobre eles, eu finalmente percebi.";
	mes "Que o seu ritual de namoro � realmente o mais avan�ado do que qualquer outra coisa que Rune-Midgard tem a oferecer.";
	next;
	mes "[Yuwooki]";
	mes "� realmente muito fascinante.";
	mes "Eu estou aprendendo de fato bastante sobre os playboys Utans e os seus m�todos temerosos.";
	close;
}

// ------------------------------------------------------------------
umbala,140,157,6	script	Homem Utan#umb	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes "[Jertan]";
		mes "Bungee jumping pode ser perigoso, e voc� arriscar sua vida fazendo isso.";
		mes "N�s Utans consideramos o bungee jumping uma importante parte da cerimonia de se tornar adulto.";
		close;
	}
	else {
		mes "[???]";
		mes "Umbaumbah humba.";
		mes "Woo umbaumbaumbabah woo humbah";
		mes "Umbababah umba umba.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,146,157,4	script	Homem Utan#umb2	4_M_UMDANCEKID,{
	if (event_umbala >= 3) {
		mes "[Arotan]";
		mes "Completar o bungee jump � muito dif�cil.";
		mes "Hoje, n�s estamos em celebra��o ao povo que realizou e tem demonstrado a sua coragem.";
		close;
	}
	else {
		mes "[???]";
		mes "Woo umbaumbaumbabah woo humbah";
		mes "Umbababah umba umba.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,193,208,6	script	Homem Utan#umb3	4_M_UMSOLDIER,{
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
	}
	else {
		mes "[???]";
		mes "Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,92,159,4	script	Bertan#umb	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes "[Bertan]";
		mes "E a�, perdedor!";
		next;
		mes "[Bertan]";
		mes "Qual � o assunto grande Rune-Midgardiano?!?!";
		mes "Eu te chamei de 'perdedor'!";
		mes "Eu acho que voc� � muito est�pido para entender!!";
		mes "Hahahahahahaahahhahaha~!";
		next;
		mes "[Bertan]";
		mes "...";
		mes "Uh...oh!";
		next;
		mes "[Bertan]";
		mes "Parece que voc� pode me entender--!";
		mes "Bom trabalho, bom trabalho!";
		mes "Muito bem, por meio de desculpas, quer ouvir uma piada?";
		next;
		mes "[Bertan]";
		mes "Ok, tudo bem.";
		mes "Aqui vamos n�s.";
		mes "Ummmm...";
		mes "Ok, eu tenho uma.";
		next;
		switch(rand(1,6)) {
			case 1:
			mes "[Bertan]";
			mes "O que o Rune-Midgardiano disse ao Selvagem?";
			mes "...";
			next;
			mes "[Bertan]";
			mes "Eu n�o sei...";
			mes "Mas eles n�o tem qualquer dificuldade para entender uns aos outros!!!";
			mes "HAHAHA!";
			mes "Pegou essa?";
			mes "'Primo, como, eles s�o ambos porcos!'";
			next;
			mes "[Bertan]";
			mes "N�o tem gra�a, n�?";
			mes "Oh bem.";
			mes "Acho que o meu senso de humor � apenas muito sofisticado.";
			close;
			case 2:
			mes "[Bertan]";
			mes "Ok... qual � a melhor forma de domar uma Senhora Orc?";
			mes "Se rende..?";
			next;
			mes "[Bertan]";
			mes "Com um anel de casamento!";
			mes "HAHAHAHAHAHAHHA!";
			mes "Oh Deus!";
			mes "Eu sou hil�rio!!";
			next;
			mes "[Bertan]";
			mes "...";
			mes "...Espere.";
			mes "Espere um minuto...";
			next;
			mes "[Bertan]";
			mes "N�o � mesmo engra�ado...";
			mes "Apenas incr�vel...";
			mes "Assustadora...";
			mes "Brrr--!";
			mes "Ela � horr�vel!!";
			close;
			case 3:
			mes "[Bertan]";
			mes "De fato... esque�a.";
			next;
			mes "[Bertan]";
			mes "Eu ia dizer uma piada sobre a �sis, mas decidi que que este tipo de humor � muito sujo.";
			mes "...Zing!";
			close;
			case 4:
			mes "[Bertan]";
			mes "Porque s�o Rune-Midgardianos";
			mes "SOOoOOoo...";
			mes "Um, hmmmmm.";
			mes "Talvez esta piada n�o seja t�o boa para esta situa��o, sim?";
			close;
			case 5:
			mes "[Bertan]";
			mes "Ok, porque � que os GMs preferem n�o serem vistos...?";
			mes "Desiste?";
			next;
			mes "[Bertan]";
			mes "PORQUE ESSES CARAS USAM VESTIDO!";
			mes "HAHAHA!";
			mes "OH CARA, EU FIZ UMA ENGRA�ADA!";
			next;
			mes "[Bertan]";
			mes "*Whew* Yowza";
			mes "Oh, cara.";
			mes "Absolutamente cl�ssica.";
			close;
			case 6:
			mes "[Bertan]";
			mes "Um Templ�rio, um Alquimista e um Aprendiz entram em um bar.";
			next;
			mes "[Bertan]";
			mes "Dentro, eles veem um cartaz que diz:";
			mes "'^CC0000Ag�ncia de Ajuda aos Monstros:'";
			mes "SOMENTE SENHORAS.^000000'";
			next;
			mes "[Bertan]";
			mes "'^000099Oh!^000000' diz o Templ�rio.";
			mes "'^000099� �timo n�s sermos todas senhoras.^000000'";
			mes "Ela se levanta e diz '^000099D�-me uma montaria.^000000'";
			mes "Pense numa montaria de Templ�rio, mas de qualquer jeito...";
			next;
			mes "[Bertan]";
			mes "Do nada, este Grand Peco Peco aparece e diz '^CC0000Eu lhe darei uma carona, baby.";
			mes "Cuidado, esta estrada pode ser acidentaaaaaada.^000000'";
			mes "E ent�o eles v�o.";
			next;
			mes "[Bertan]";
			mes "Depois vem o Alquimista e ela gosta '^330099Eu preciso de ajuda para matar Zumbis^000000' e ent�o esta Esfera Marinha aparece do nada e isto � tudo...";
			next;
			mes "[Bertan]";
			mes "'^CC0000Eu peguei seu fogo.";
			mes "Cuidado baby, toque-me na parte errada e eu s� me exploooodo.";
			mes "^000000'Ent�o eles est�o desligados em sua alegre forma demasiada.";
			next;
			mes "[Bertan]";
			mes "Finalmente, o Aprendiz aparece e diz:";
			mes "'^006633Eu preciso de algu�m para um grupo.^000000'";
			next;
			mes "[Bertan]";
			mes "Do nada, um Hode aparece e diz...";
			next;
			mes "[Bertan]";
			mes "'^CC0000Eu conhe�o algumas pessoas mas deixei de conferir meu Rolodex.";
			mes "HODE on!^000000'";
			mes "....";
			next;
			mes "[Bertan]";
			mes ".....";
			mes "..........";
			mes "N�o vai?";
			next;
			mes "[Bertan]";
			mes "Bem, vamos l�!";
			mes "N�o pode ser divertido todo o tempo, voc� sabe?";
			close;
		}
	}
	else {
		mes "[????]";
		mes "Umbaumba Umbaumbah";
		next;
		mes "[????]";
		mes "Bwahbwah hahbrah!";
		mes "Umbaumba Umbaumbah";
		mes "Umbaumba Umbaumbah";
		next;
		mes "[????]";
		mes "Umbaumba Umbaumbah woo~";
		emotion (e_ho);
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
um_in,158,71,3	script	Crian�a Utan#umb6	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes "[Mutakutan]";
		mes "Umbala tem muitas �rvores!";
		mes "Eu, Mutakutan, gosto muito de �rvores.";
		mes "Heh heh";
		next;
		mes "[Mutakutan]";
		mes "H� uma �rvore especial que eu gosto mais!";
		mes "� a mais antiga e a maior �rvore em Umbala!";
		mes "N�o espere, eu acho que � a mais velha e grande do mundo...";
		mes "Eu tenho certeza que �!";
		next;
		mes "[Mutakutan]";
		mes "� realmente muito grande e velha!";
		mes "� t�o alto que eu nunca vi o topo dessa �rvore ainda.";
		mes "Eu tentei escalar ela antes, mas eu poderia nunca chegar ao topo...";
		mes "Apesar de eu ser um grande escalador de �rvores.";
		next;
		mes "[Mutakutan]";
		mes "Oh, o fruto da �rvore tamb�m � muito saboroso!";
		mes "Aposto que eles s�o os mais deliciosos frutos do mundo.";
		mes "Doce e amargo...";
		mes "Comendo ele faz voc� se sentir refrescado e revigorado!";
		next;
		mes "[Mutakutan]";
		mes "H� um incr�vel hist�ria sobre este fruto.";
		mes "Um velho homem na aldeia estava sofrendo de uma doen�a mortal...";
		mes "Nada parecia ajudar...";
		next;
		mes "[Mutakutan]";
		mes "Mas depois que ele tomou o medicamento feito a partir das folhas da �rvore, ele ficou bom e sa�davel novamente!";
		mes "Eu acho que Deus nos enviou a �rvore para nos aben�oar.";
		next;
		mes "[Mutakutan]";
		mes "� ao norte da minha aldeia.";
		mes "Por que voc� n�o vai ver a grandeza dessa �rvore voc� mesmo?";
		close;
	}
	else {
		mes "[??????]";
		mes "Umbaumbah umbahbah woomhah!";
		mes "Umbah umbah umbabah umbah";
		mes "Umbah umbah umbah";
		mes "Umbabah umbah umbabbah";
		next;
		mes "[??????]";
		mes "....";
		mes "......";
		mes "Umbah balooooga?";
		mes "Umbah balooooooooga?";
		next;
		mes "[??????]";
		mes "...";
		mes "Moogahaloo schluloo.";
		close;
	}
}
