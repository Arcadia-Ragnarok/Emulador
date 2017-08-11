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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na Porto de Malaya                            |
\*-----------------------------------------------------------------*/

malaya,227,311,4	script	Vov�#ma01	4_F_BARYO_OLD,{
	mes "[Vov�]";
	mes "Eu estou preocupada com minha nora gr�vida.";
	mes "Espero que Meoneonuncle n�o a aborre�a.";
	next;
	select("Meoneonuncle?");
	mes "[Vov�]";
	mes "N�o conhece as hist�rias daqui?";
	mes "Vou lhe falar, at� por que "+(Sex?"um estrangeiro":"uma estrangeira")+" como voc� deveria ter cuidado.";
	next;
	mes "[Vov�]";
	mes "Meoneonuncle era uma mulher que viveu h� muito tempo em Porto Malaya.";
	mes "Ela se casou um homem decente e tamb�m teve um beb�.";
	next;
	mes "[Vov�]";
	mes "Mas felicidade nunca dura sempre, n�o �?";
	mes "O beb� foi morto em um acidente...";
	next;
	mes "[Vov�]";
	mes "Ela faleceu eventualmente depois de chorar por dias em cima do beb� perdido dela.";
	next;
	select("Que hist�ria triste.");
	mes "[Vov�]";
	mes "Meoneonuncle come�ou a se aparecer como um esp�rito.";
	mes "Pegado os beb�s de mulheres gr�vidas da aldeia ent�o.";
	next;
	mes "[Vov�]";
	mes "Se voc� j� caminha � noite ao redor de Porto Malaya...";
	next;
	mes "[Vov�]";
	mes "E se ouvir sons estranhos, deve-se ter muito cuidado, porque esses sons s�o feitos por Meoneonuncle.";
	close;
}

// ------------------------------------------------------------------
malaya,189,263,4	script	Vov�#ma02	4_M_BARYO_MAN,{
	emotion (e_omg);
	mes "[Vov�]";
	mes "Bakonawa tamb�m � conhecido como o \"monstro que engole a lua\" em Malaya.";
	next;
	mes "[Vov�]";
	mes "Mas eu sei que Bakonawa tamb�m pode \"engolir as pessoas\".";
	next;
	select("Nossa! Ent�o � perigoso?");
	emotion (e_gg);
	mes "[Vov�]";
	mes "Ha ha ha. H� um modo para parar Bakonawa de engolir as pessoas.";
	next;
	mes "[Vov�]";
	mes "H� uma fraqueza, at� mesmo no pior monstro que j� engoliu 6 luas.";
	next;
	select("Intere�ante. Continue...");
	mes "[Vov�]";
	mes "Ele � sens�vel a barulho assim quando ele est� a ponto de engolir a lua!!";
	next;
	mes "[Vov�]";
	mes "Sua chance �!!";
	mes "N�o importa que tipo de barulho!!";
	mes "Se � um caldeir�o, tambor ou uma panela velha, n�ao pare de fazer barulho.";
	next;
	mes "[Vov�]";
	mes "Ent�o Bakonawa ser� pegado de surpresa!";
	close;
}

// ------------------------------------------------------------------
malaya,270,59,4	script	Guarda do Porto#ma03	4_MAL_SOLDIER,{
	emotion (e_omg);
	mes "[Guarda do Porto]";
	mes "Huh??";
	mes "Voc� me assustou.";
	mes "Eu recebi um documento oficial para viajantes.";
	next;
	select("Que documento?");
	mes "[Guarda do Porto]";
	mes "Diz que os viajantes deveriam ter cuidado com monstros ao entrar � noite na aldeia.";
	next;
	mes "[Guarda do Porto]";
	mes "Buwaya n�o v�m freq�entemente.";
	mes "Mas l� para a aldeia h� casos de pessoas que desaparecem � noite.";
	next;
	mes "[Guarda do Porto]";
	mes "Huh?! E diz aqui que um monstro especialmente nomeado que Wokwok.";
	mes "Visita freq�entemente a aldeia durante � noite.";
	next;
	switch(select("Eu entendo","Existe algum modo de impedir isso?")) {
		case 1:
		mes "[Guarda do Porto]";
		mes "Tenha cuidado � noite!";
		close;
		case 2:
		mes "[Guarda do Porto]";
		mes "Eles dizem que voc� pode atacar o ponto fraco de Buwaya.";
		next;
		mes "[Guarda do Porto]";
		mes "E voc� deve encontrar o pr�dio mais pr�ximo quando ouve as asas Wokwoks voando de longe.";
		next;
		emotion (e_hmm);
		mes "[Guarda do Porto]";
		mes "Mas se o som vibrante for pequeno ou se voc� n�o ouvir nada.";
		mes "Digamos que voc� deve se preparar para atacar e desejar sorte.";
		close;
	}
}

// ------------------------------------------------------------------
malaya,88,252,4	script	Garota#ma04	4_F_BARYO_GIRL,{
	mes "[Garota]";
	mes "Meu pai disse que n�o vou pegar doen�as da pele uma vez que eu sou amigo da fada da floresta.";
	next;
	select("Fada??");
	mes "[Garota]";
	mes "Fadas encantadas vivem em grandes �rvores ou pedras na floresta.";
	mes "H� fadas de garotos e fadas...";
	next;
	mes "[Garota]";
	mes "Mas as fadas dos meninos s�o mais bonitas.";
	mes "Ser� por que?";
	close;
}

// ------------------------------------------------------------------
malaya,219,92,6	script	Garoto#ma05	4_M_BARYO_BOY,{
	mes "[Garoto]";
	mes "Eu acho que algu�m est� roubando todos os chap�us na aldeia.";
	next;
	mes "[Garoto]";
	mes "O chap�u que minha m�e lavou ontem desapareceu.";
	mes "O chap�u do nosso vizinho tamb�m desapareceu alguns dias atr�s.";
	next;
	mes "[Garoto]";
	mes "Hmm ... voc� acha que Jejeling tomou isso??";
	next;
	mes "[Garoto]";
	mes "Visitei um amigo em Baryo Mahiwaga e ele disse que viu Jejeling vestindo o chap�u faltante...";
	close;
}

// ------------------------------------------------------------------
malaya,363,283,4	script	Moradora#ma06	4_M_MALAYA,{
	mes "[Moradora]";
	mes "A aldeia est� ca�tica hoje em dia.";
	mes "Parece que Mongkukurum est� de volta � aldeia.";
	next;
	select("Mongkukurum?");
	mes "[Moradora]";
	mes "Um monstro que tamb�m � chamado de bruxa.";
	mes "Parece uma pessoa e tamb�m usa roupas.";
	next;
	mes "[Moradora]";
	mes "Mongkukurum faz uma boneca das pessoas que v� e amaldi�oa com agulhas.";
	next;
	select("Existe uma maneira de reconhecer esse monstro?");
	mes "[Moradora]";
	mes "H� uma maneira.";
	mes "Todos Mongkukurum t�m olhos vermelhos.";
	next;
	mes "[Moradora]";
	mes "Voc� pode reconhec�-los pelos seus olhos.";
	mes "Mas, voc� deve se lembrar de uma coisa.";
	next;
	mes "[Moradora]";
	mes "Voc� ser� infenti�ado por Mongkukurum se voc� olhar seus olhos por muito tempo.";
	next;
	mes "[Moradora]";
	mes "Nunca olhe nos seus olhos por muito tempo.";
	close;
}

// ------------------------------------------------------------------
malaya,41,127,6	script	Velho#ma07	4_M_BARYO_OLD,{
	mes "[Velho]";
	mes "Voc� tamb�m deve procurar se Bangungot vive em uma �rvore que voc� est� prestes a reduzir.";
	next;
	mes "[Velho]";
	mes "Porque coisas estranhas acontecem se os troncos de �rvores em que Bangungot vivia s�o usados como pilares de constru��o.";
	next;
	select("Como assim?");
	mes "[Velho]";
	mes "Bem, para um Bangungot, isso significa perder sua casa para se vingar.";
	next;
	mes "[Velho]";
	mes "Quando voc� tenta dormir perto do pilar, ele ficar� acordado ao jogar brincadeiras no in�cio.";
	next;
	mes "[Velho]";
	mes "Mas � medida que o tempo passa e sua vingan�a cresce, eles se sentam em cima de voc� at� sufocarem.";
	next;
	select("Oh, nossa!...");
	mes "[Velho]";
	mes "Ha ha ha. N�o h� Bangungots em pilares normais, ent�o n�o perca o sono sobre ele.";
	close;
}

// ------------------------------------------------------------------
malaya,63,185,4	script	Mulher#ma08	4_F_MALAYA,{
	mes "[Mulher]";
	mes "Se voc� ouvir um beb� chorando da floresta fora da aldeia, nunca se aproxime disso.";
	next;
	select("O que?");
	mes "[Mulher]";
	mes "H� um monstro chamado Tiucknuc que vagava por fora da aldeia e chora depois de transformar-se em um beb�.";
	next;
	mes "[Mulher]";
	mes "Mas quando viajantes gentis pegam o beb�, ele volta � sua forma original e ataca.";
	next;
	select("Parece um monstro sorrateiro.");
	mes "[Mulher]";
	mes "Sim, esse monstro � terr�l em enganar a bondade dos viajantes, mas...";
	next;
	mes "[Mulher]";
	mes "H� rumores de que o monstro veio da alma de um beb� que nunca nasceu.";
	mes "T�o triste.";
	close;
}
