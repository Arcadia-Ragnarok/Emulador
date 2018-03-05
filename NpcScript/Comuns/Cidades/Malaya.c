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
| - Nota: Npcs comuns na Porto de Malaya                            |
\*-----------------------------------------------------------------*/

/*
malaya,227,311,4	script	Vovó#ma01	4_F_BARYO_OLD,{
	mes("[Vovó]\n Eu estou preocupada com minha nora grávida.\n Espero que Meoneonuncle não a aborreça.");
	next;
	select("Meoneonuncle?");
	mes("[Vovó]\n Não conhece as histórias daqui?\n Vou lhe falar, até por que " + (Sex == SEX_MALE ? "um estrangeiro":"uma estrangeira") + " como você deveria ter cuidado.");
	next;
	mes("[Vovó]\n Meoneonuncle era uma mulher que viveu há muito tempo em Porto Malaya.\n Ela se casou um homem decente e também teve um bebê.");
	next;
	mes("[Vovó]\n Mas felicidade nunca dura sempre, não é?\n O bebê foi morto em um acidente...");
	next;
	mes("[Vovó]\n Ela faleceu eventualmente depois de chorar por dias em cima do bebê perdido dela.");
	next;
	select("Que história triste.");
	mes("[Vovó]\n Meoneonuncle começou a se aparecer como um espírito.\n Pegado os bebês de mulheres grávidas da aldeia então.");
	next;
	mes("[Vovó]\n Se você já caminha à noite ao redor de Porto Malaya...");
	next;
	mes("[Vovó]\n E se ouvir sons estranhos, deve-se ter muito cuidado, porque esses sons são feitos por Meoneonuncle.");
	close;
}
*/

// ------------------------------------------------------------------
/*
malaya,189,263,4	script	Vovô#ma02	4_M_BARYO_MAN,{
	emotion (e_omg);
	mes("[Vovô]\n Bakonawa também é conhecido como o \"monstro que engole a lua\" em Malaya.");
	next;
	mes("[Vovô]\n Mas eu sei que Bakonawa também pode \"engolir as pessoas\".");
	next;
	select("Nossa! Então é perigoso?");
	emotion(e_gg);
	mes("[Vovô]\n Ha ha ha. Há um modo para parar Bakonawa de engolir as pessoas.");
	next;
	mes("[Vovô]\n Há uma fraqueza, até mesmo no pior monstro que já engoliu 6 luas.");
	next;
	select("Intereçante. Continue...");
	mes("[Vovô]\n Ele é sensível a barulho assim quando ele está a ponto de engolir a lua!!");
	next;
	mes("[Vovô]\n Sua chance é!!\n Não importa que tipo de barulho!!\n Se é um caldeirão, tambor ou uma panela velha, nçao pare de fazer barulho.");
	next;
	mes("[Vovô]\n Então Bakonawa será pegado de surpresa!");
	close;
}
*/

// ------------------------------------------------------------------
/*
malaya,270,59,4	script	Guarda do Porto#ma03	4_MAL_SOLDIER,{
	emotion(e_omg);
	mes("[Guarda do Porto]\n Huh??\n Você me assustou.\n Eu recebi um documento oficial para viajantes.");
	next;
	select("Que documento?");
	mes("[Guarda do Porto]\n Diz que os viajantes deveriam ter cuidado com monstros ao entrar à noite na aldeia.");
	next;
	mes("[Guarda do Porto]\n Buwaya não vêm freqüentemente.\n Mas lá para a aldeia há casos de pessoas que desaparecem à noite.");
	next;
	mes("[Guarda do Porto]\n Huh?! E diz aqui que um monstro especialmente nomeado que Wokwok.\n Visita freqüentemente a aldeia durante á noite.");
	next;
	switch(select("Eu entendo", "Existe algum modo de impedir isso?")) {
		case 1:
		mes("[Guarda do Porto]\n Tenha cuidado à noite!");
		close;
		case 2:
		mes("[Guarda do Porto]\n Eles dizem que você pode atacar o ponto fraco de Buwaya.");
		next;
		mes("[Guarda do Porto]\n E você deve encontrar o prédio mais próximo quando ouve as asas Wokwoks voando de longe.");
		next;
		emotion(e_hmm);
		mes("[Guarda do Porto]\n Mas se o som vibrante for pequeno ou se você não ouvir nada.\n Digamos que você deve se preparar para atacar e desejar sorte.");
		close;
	}
}
*/

// ------------------------------------------------------------------
malaya,88,252,4	script	Garota#ma04	4_F_BARYO_GIRL,{
	mes("[Garota]\n Meu pai disse que não vou pegar doenças da pele uma vez que eu sou amigo da fada da floresta.");
	next;
	select("Fada??");
	mes("[Garota]\n Fadas encantadas vivem em grandes árvores ou pedras na floresta.\n Há fadas de garotos e fadas...");
	next;
	mes("[Garota]\n Mas as fadas dos meninos são mais bonitas.\n Será por que?");
	close;
}

// ------------------------------------------------------------------
malaya,219,92,6	script	Garoto#ma05	4_M_BARYO_BOY,{
	mes("[Garoto]\n Eu acho que alguém está roubando todos os chapéus na aldeia.");
	next;
	mes("[Garoto]\n O chapéu que minha mãe lavou ontem desapareceu.\n O chapéu do nosso vizinho também desapareceu alguns dias atrás.");
	next;
	mes("[Garoto]\n Hmm ... você acha que Jejeling tomou isso??");
	next;
	mes("[Garoto]\n Visitei um amigo em Baryo Mahiwaga e ele disse que viu Jejeling vestindo o chapéu faltante...");
	close;
}

// ------------------------------------------------------------------
/*
malaya,363,283,4	script	Moradora#ma06	4_M_MALAYA,{
	mes("[Moradora]\n A aldeia está caótica hoje em dia.\n Parece que Mongkukurum está de volta à aldeia.");
	next;
	select("Mongkukurum?");
	mes("[Moradora]\n Um monstro que também é chamado de bruxa.\n Parece uma pessoa e também usa roupas.");
	next;
	mes("[Moradora]\n Mongkukurum faz uma boneca das pessoas que vê e amaldiçoa com agulhas.");
	next;
	select("Existe uma maneira de reconhecer esse monstro?");
	mes("[Moradora]\n Há uma maneira.\n Todos Mongkukurum têm olhos vermelhos.");
	next;
	mes("[Moradora]\n Você pode reconhecê-los pelos seus olhos.\n Mas, você deve se lembrar de uma coisa.");
	next;
	mes("[Moradora]\n Você será infentiçado por Mongkukurum se você olhar seus olhos por muito tempo.");
	next;
	mes("[Moradora]\n Nunca olhe nos seus olhos por muito tempo.");
	close;
}
*/

// ------------------------------------------------------------------
/*
malaya,41,127,6	script	Velho#ma07	4_M_BARYO_OLD,{
	mes("[Velho]\n Você também deve procurar se Bangungot vive em uma árvore que você está prestes a reduzir.");
	next;
	mes("[Velho]\n Porque coisas estranhas acontecem se os troncos de árvores em que Bangungot vivia são usados como pilares de construção.");
	next;
	select("Como assim?");
	mes("[Velho]\n Bem, para um Bangungot, isso significa perder sua casa para se vingar.");
	next;
	mes("[Velho]\n Quando você tenta dormir perto do pilar, ele ficará acordado ao jogar brincadeiras no início.");
	next;
	mes("[Velho]\n Mas à medida que o tempo passa e sua vingança cresce, eles se sentam em cima de você até sufocarem.");
	next;
	select("Oh, nossa!...");
	mes("[Velho]\n Ha ha ha. Não há Bangungots em pilares normais, então não perca o sono sobre ele.");
	close;
}
*/

// ------------------------------------------------------------------
malaya,63,185,4	script	Mulher#ma08	4_F_MALAYA,{
	mes("[Mulher]\n Se você ouvir um bebê chorando da floresta fora da aldeia, nunca se aproxime disso.");
	next;
	select("O que?");
	mes("[Mulher]\n Há um monstro chamado Tiucknuc que vagava por fora da aldeia e chora depois de transformar-se em um bebê.");
	next;
	mes("[Mulher]\n Mas quando viajantes gentis pegam o bebê, ele volta à sua forma original e ataca.");
	next;
	select("Parece um monstro sorrateiro.");
	mes("[Mulher]\n Sim, esse monstro é terríl em enganar a bondade dos viajantes, mas...");
	next;
	mes("[Mulher]\n Há rumores de que o monstro veio da alma de um bebê que nunca nasceu.\n Tão triste.");
	close;
}
