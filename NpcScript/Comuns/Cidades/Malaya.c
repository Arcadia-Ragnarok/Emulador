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
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na Porto de Malaya                            |
\*-----------------------------------------------------------------*/

malaya,227,311,4	script	Vovó#ma01	4_F_BARYO_OLD,{
	mes "[Vovó]";
	mes "Eu estou preocupada com minha nora grávida.";
	mes "Espero que Meoneonuncle não a aborreça.";
	next;
	select("Meoneonuncle?");
	mes "[Vovó]";
	mes "Não conhece as histórias daqui?";
	mes "Vou lhe falar, até por que "+(Sex?"um estrangeiro":"uma estrangeira")+" como você deveria ter cuidado.";
	next;
	mes "[Vovó]";
	mes "Meoneonuncle era uma mulher que viveu há muito tempo em Porto Malaya.";
	mes "Ela se casou um homem decente e também teve um bebê.";
	next;
	mes "[Vovó]";
	mes "Mas felicidade nunca dura sempre, não é?";
	mes "O bebê foi morto em um acidente...";
	next;
	mes "[Vovó]";
	mes "Ela faleceu eventualmente depois de chorar por dias em cima do bebê perdido dela.";
	next;
	select("Que história triste.");
	mes "[Vovó]";
	mes "Meoneonuncle começou a se aparecer como um espírito.";
	mes "Pegado os bebês de mulheres grávidas da aldeia então.";
	next;
	mes "[Vovó]";
	mes "Se você já caminha à noite ao redor de Porto Malaya...";
	next;
	mes "[Vovó]";
	mes "E se ouvir sons estranhos, deve-se ter muito cuidado, porque esses sons são feitos por Meoneonuncle.";
	close;
}

// ------------------------------------------------------------------
malaya,189,263,4	script	Vovô#ma02	4_M_BARYO_MAN,{
	emotion (e_omg);
	mes "[Vovô]";
	mes "Bakonawa também é conhecido como o \"monstro que engole a lua\" em Malaya.";
	next;
	mes "[Vovô]";
	mes "Mas eu sei que Bakonawa também pode \"engolir as pessoas\".";
	next;
	select("Nossa! Então é perigoso?");
	emotion (e_gg);
	mes "[Vovô]";
	mes "Ha ha ha. Há um modo para parar Bakonawa de engolir as pessoas.";
	next;
	mes "[Vovô]";
	mes "Há uma fraqueza, até mesmo no pior monstro que já engoliu 6 luas.";
	next;
	select("Intereçante. Continue...");
	mes "[Vovô]";
	mes "Ele é sensível a barulho assim quando ele está a ponto de engolir a lua!!";
	next;
	mes "[Vovô]";
	mes "Sua chance é!!";
	mes "Não importa que tipo de barulho!!";
	mes "Se é um caldeirão, tambor ou uma panela velha, nçao pare de fazer barulho.";
	next;
	mes "[Vovô]";
	mes "Então Bakonawa será pegado de surpresa!";
	close;
}

// ------------------------------------------------------------------
malaya,270,59,4	script	Guarda do Porto#ma03	4_MAL_SOLDIER,{
	emotion (e_omg);
	mes "[Guarda do Porto]";
	mes "Huh??";
	mes "Você me assustou.";
	mes "Eu recebi um documento oficial para viajantes.";
	next;
	select("Que documento?");
	mes "[Guarda do Porto]";
	mes "Diz que os viajantes deveriam ter cuidado com monstros ao entrar à noite na aldeia.";
	next;
	mes "[Guarda do Porto]";
	mes "Buwaya não vêm freqüentemente.";
	mes "Mas lá para a aldeia há casos de pessoas que desaparecem à noite.";
	next;
	mes "[Guarda do Porto]";
	mes "Huh?! E diz aqui que um monstro especialmente nomeado que Wokwok.";
	mes "Visita freqüentemente a aldeia durante á noite.";
	next;
	switch(select("Eu entendo","Existe algum modo de impedir isso?")) {
		case 1:
		mes "[Guarda do Porto]";
		mes "Tenha cuidado à noite!";
		close;
		case 2:
		mes "[Guarda do Porto]";
		mes "Eles dizem que você pode atacar o ponto fraco de Buwaya.";
		next;
		mes "[Guarda do Porto]";
		mes "E você deve encontrar o prédio mais próximo quando ouve as asas Wokwoks voando de longe.";
		next;
		emotion (e_hmm);
		mes "[Guarda do Porto]";
		mes "Mas se o som vibrante for pequeno ou se você não ouvir nada.";
		mes "Digamos que você deve se preparar para atacar e desejar sorte.";
		close;
	}
}

// ------------------------------------------------------------------
malaya,88,252,4	script	Garota#ma04	4_F_BARYO_GIRL,{
	mes "[Garota]";
	mes "Meu pai disse que não vou pegar doenças da pele uma vez que eu sou amigo da fada da floresta.";
	next;
	select("Fada??");
	mes "[Garota]";
	mes "Fadas encantadas vivem em grandes árvores ou pedras na floresta.";
	mes "Há fadas de garotos e fadas...";
	next;
	mes "[Garota]";
	mes "Mas as fadas dos meninos são mais bonitas.";
	mes "Será por que?";
	close;
}

// ------------------------------------------------------------------
malaya,219,92,6	script	Garoto#ma05	4_M_BARYO_BOY,{
	mes "[Garoto]";
	mes "Eu acho que alguém está roubando todos os chapéus na aldeia.";
	next;
	mes "[Garoto]";
	mes "O chapéu que minha mãe lavou ontem desapareceu.";
	mes "O chapéu do nosso vizinho também desapareceu alguns dias atrás.";
	next;
	mes "[Garoto]";
	mes "Hmm ... você acha que Jejeling tomou isso??";
	next;
	mes "[Garoto]";
	mes "Visitei um amigo em Baryo Mahiwaga e ele disse que viu Jejeling vestindo o chapéu faltante...";
	close;
}

// ------------------------------------------------------------------
malaya,363,283,4	script	Moradora#ma06	4_M_MALAYA,{
	mes "[Moradora]";
	mes "A aldeia está caótica hoje em dia.";
	mes "Parece que Mongkukurum está de volta à aldeia.";
	next;
	select("Mongkukurum?");
	mes "[Moradora]";
	mes "Um monstro que também é chamado de bruxa.";
	mes "Parece uma pessoa e também usa roupas.";
	next;
	mes "[Moradora]";
	mes "Mongkukurum faz uma boneca das pessoas que vê e amaldiçoa com agulhas.";
	next;
	select("Existe uma maneira de reconhecer esse monstro?");
	mes "[Moradora]";
	mes "Há uma maneira.";
	mes "Todos Mongkukurum têm olhos vermelhos.";
	next;
	mes "[Moradora]";
	mes "Você pode reconhecê-los pelos seus olhos.";
	mes "Mas, você deve se lembrar de uma coisa.";
	next;
	mes "[Moradora]";
	mes "Você será infentiçado por Mongkukurum se você olhar seus olhos por muito tempo.";
	next;
	mes "[Moradora]";
	mes "Nunca olhe nos seus olhos por muito tempo.";
	close;
}

// ------------------------------------------------------------------
malaya,41,127,6	script	Velho#ma07	4_M_BARYO_OLD,{
	mes "[Velho]";
	mes "Você também deve procurar se Bangungot vive em uma árvore que você está prestes a reduzir.";
	next;
	mes "[Velho]";
	mes "Porque coisas estranhas acontecem se os troncos de árvores em que Bangungot vivia são usados como pilares de construção.";
	next;
	select("Como assim?");
	mes "[Velho]";
	mes "Bem, para um Bangungot, isso significa perder sua casa para se vingar.";
	next;
	mes "[Velho]";
	mes "Quando você tenta dormir perto do pilar, ele ficará acordado ao jogar brincadeiras no início.";
	next;
	mes "[Velho]";
	mes "Mas à medida que o tempo passa e sua vingança cresce, eles se sentam em cima de você até sufocarem.";
	next;
	select("Oh, nossa!...");
	mes "[Velho]";
	mes "Ha ha ha. Não há Bangungots em pilares normais, então não perca o sono sobre ele.";
	close;
}

// ------------------------------------------------------------------
malaya,63,185,4	script	Mulher#ma08	4_F_MALAYA,{
	mes "[Mulher]";
	mes "Se você ouvir um bebê chorando da floresta fora da aldeia, nunca se aproxime disso.";
	next;
	select("O que?");
	mes "[Mulher]";
	mes "Há um monstro chamado Tiucknuc que vagava por fora da aldeia e chora depois de transformar-se em um bebê.";
	next;
	mes "[Mulher]";
	mes "Mas quando viajantes gentis pegam o bebê, ele volta à sua forma original e ataca.";
	next;
	select("Parece um monstro sorrateiro.");
	mes "[Mulher]";
	mes "Sim, esse monstro é terríl em enganar a bondade dos viajantes, mas...";
	next;
	mes "[Mulher]";
	mes "Há rumores de que o monstro veio da alma de um bebê que nunca nasceu.";
	mes "Tão triste.";
	close;
}
