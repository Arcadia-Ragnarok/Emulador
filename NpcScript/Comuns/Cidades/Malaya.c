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
| - Nota: Npcs comuns na Porto de Malaya                            |
\*-----------------------------------------------------------------*/

/*
malaya,227,311,4	script	Vov�#ma01	4_F_BARYO_OLD,{
	mes("[Vov�]\n Eu estou preocupada com minha nora gr�vida.\n Espero que Meoneonuncle n�o a aborre�a.");
	next;
	select("Meoneonuncle?");
	mes("[Vov�]\n N�o conhece as hist�rias daqui?\n Vou lhe falar, at� por que " + (Sex == SEX_MALE ? "um estrangeiro":"uma estrangeira") + " como voc� deveria ter cuidado.");
	next;
	mes("[Vov�]\n Meoneonuncle era uma mulher que viveu h� muito tempo em Porto Malaya.\n Ela se casou um homem decente e tamb�m teve um beb�.");
	next;
	mes("[Vov�]\n Mas felicidade nunca dura sempre, n�o �?\n O beb� foi morto em um acidente...");
	next;
	mes("[Vov�]\n Ela faleceu eventualmente depois de chorar por dias em cima do beb� perdido dela.");
	next;
	select("Que hist�ria triste.");
	mes("[Vov�]\n Meoneonuncle come�ou a se aparecer como um esp�rito.\n Pegado os beb�s de mulheres gr�vidas da aldeia ent�o.");
	next;
	mes("[Vov�]\n Se voc� j� caminha � noite ao redor de Porto Malaya...");
	next;
	mes("[Vov�]\n E se ouvir sons estranhos, deve-se ter muito cuidado, porque esses sons s�o feitos por Meoneonuncle.");
	close;
}
*/

// ------------------------------------------------------------------
/*
malaya,189,263,4	script	Vov�#ma02	4_M_BARYO_MAN,{
	emotion (e_omg);
	mes("[Vov�]\n Bakonawa tamb�m � conhecido como o \"monstro que engole a lua\" em Malaya.");
	next;
	mes("[Vov�]\n Mas eu sei que Bakonawa tamb�m pode \"engolir as pessoas\".");
	next;
	select("Nossa! Ent�o � perigoso?");
	emotion(e_gg);
	mes("[Vov�]\n Ha ha ha. H� um modo para parar Bakonawa de engolir as pessoas.");
	next;
	mes("[Vov�]\n H� uma fraqueza, at� mesmo no pior monstro que j� engoliu 6 luas.");
	next;
	select("Intere�ante. Continue...");
	mes("[Vov�]\n Ele � sens�vel a barulho assim quando ele est� a ponto de engolir a lua!!");
	next;
	mes("[Vov�]\n Sua chance �!!\n N�o importa que tipo de barulho!!\n Se � um caldeir�o, tambor ou uma panela velha, n�ao pare de fazer barulho.");
	next;
	mes("[Vov�]\n Ent�o Bakonawa ser� pegado de surpresa!");
	close;
}
*/

// ------------------------------------------------------------------
/*
malaya,270,59,4	script	Guarda do Porto#ma03	4_MAL_SOLDIER,{
	emotion(e_omg);
	mes("[Guarda do Porto]\n Huh??\n Voc� me assustou.\n Eu recebi um documento oficial para viajantes.");
	next;
	select("Que documento?");
	mes("[Guarda do Porto]\n Diz que os viajantes deveriam ter cuidado com monstros ao entrar � noite na aldeia.");
	next;
	mes("[Guarda do Porto]\n Buwaya n�o v�m freq�entemente.\n Mas l� para a aldeia h� casos de pessoas que desaparecem � noite.");
	next;
	mes("[Guarda do Porto]\n Huh?! E diz aqui que um monstro especialmente nomeado que Wokwok.\n Visita freq�entemente a aldeia durante � noite.");
	next;
	switch(select("Eu entendo", "Existe algum modo de impedir isso?")) {
		case 1:
		mes("[Guarda do Porto]\n Tenha cuidado � noite!");
		close;
		case 2:
		mes("[Guarda do Porto]\n Eles dizem que voc� pode atacar o ponto fraco de Buwaya.");
		next;
		mes("[Guarda do Porto]\n E voc� deve encontrar o pr�dio mais pr�ximo quando ouve as asas Wokwoks voando de longe.");
		next;
		emotion(e_hmm);
		mes("[Guarda do Porto]\n Mas se o som vibrante for pequeno ou se voc� n�o ouvir nada.\n Digamos que voc� deve se preparar para atacar e desejar sorte.");
		close;
	}
}
*/

// ------------------------------------------------------------------
malaya,88,252,4	script	Garota#ma04	4_F_BARYO_GIRL,{
	mes("[Garota]\n Meu pai disse que n�o vou pegar doen�as da pele uma vez que eu sou amigo da fada da floresta.");
	next;
	select("Fada??");
	mes("[Garota]\n Fadas encantadas vivem em grandes �rvores ou pedras na floresta.\n H� fadas de garotos e fadas...");
	next;
	mes("[Garota]\n Mas as fadas dos meninos s�o mais bonitas.\n Ser� por que?");
	close;
}

// ------------------------------------------------------------------
malaya,219,92,6	script	Garoto#ma05	4_M_BARYO_BOY,{
	mes("[Garoto]\n Eu acho que algu�m est� roubando todos os chap�us na aldeia.");
	next;
	mes("[Garoto]\n O chap�u que minha m�e lavou ontem desapareceu.\n O chap�u do nosso vizinho tamb�m desapareceu alguns dias atr�s.");
	next;
	mes("[Garoto]\n Hmm ... voc� acha que Jejeling tomou isso??");
	next;
	mes("[Garoto]\n Visitei um amigo em Baryo Mahiwaga e ele disse que viu Jejeling vestindo o chap�u faltante...");
	close;
}

// ------------------------------------------------------------------
/*
malaya,363,283,4	script	Moradora#ma06	4_M_MALAYA,{
	mes("[Moradora]\n A aldeia est� ca�tica hoje em dia.\n Parece que Mongkukurum est� de volta � aldeia.");
	next;
	select("Mongkukurum?");
	mes("[Moradora]\n Um monstro que tamb�m � chamado de bruxa.\n Parece uma pessoa e tamb�m usa roupas.");
	next;
	mes("[Moradora]\n Mongkukurum faz uma boneca das pessoas que v� e amaldi�oa com agulhas.");
	next;
	select("Existe uma maneira de reconhecer esse monstro?");
	mes("[Moradora]\n H� uma maneira.\n Todos Mongkukurum t�m olhos vermelhos.");
	next;
	mes("[Moradora]\n Voc� pode reconhec�-los pelos seus olhos.\n Mas, voc� deve se lembrar de uma coisa.");
	next;
	mes("[Moradora]\n Voc� ser� infenti�ado por Mongkukurum se voc� olhar seus olhos por muito tempo.");
	next;
	mes("[Moradora]\n Nunca olhe nos seus olhos por muito tempo.");
	close;
}
*/

// ------------------------------------------------------------------
/*
malaya,41,127,6	script	Velho#ma07	4_M_BARYO_OLD,{
	mes("[Velho]\n Voc� tamb�m deve procurar se Bangungot vive em uma �rvore que voc� est� prestes a reduzir.");
	next;
	mes("[Velho]\n Porque coisas estranhas acontecem se os troncos de �rvores em que Bangungot vivia s�o usados como pilares de constru��o.");
	next;
	select("Como assim?");
	mes("[Velho]\n Bem, para um Bangungot, isso significa perder sua casa para se vingar.");
	next;
	mes("[Velho]\n Quando voc� tenta dormir perto do pilar, ele ficar� acordado ao jogar brincadeiras no in�cio.");
	next;
	mes("[Velho]\n Mas � medida que o tempo passa e sua vingan�a cresce, eles se sentam em cima de voc� at� sufocarem.");
	next;
	select("Oh, nossa!...");
	mes("[Velho]\n Ha ha ha. N�o h� Bangungots em pilares normais, ent�o n�o perca o sono sobre ele.");
	close;
}
*/

// ------------------------------------------------------------------
malaya,63,185,4	script	Mulher#ma08	4_F_MALAYA,{
	mes("[Mulher]\n Se voc� ouvir um beb� chorando da floresta fora da aldeia, nunca se aproxime disso.");
	next;
	select("O que?");
	mes("[Mulher]\n H� um monstro chamado Tiucknuc que vagava por fora da aldeia e chora depois de transformar-se em um beb�.");
	next;
	mes("[Mulher]\n Mas quando viajantes gentis pegam o beb�, ele volta � sua forma original e ataca.");
	next;
	select("Parece um monstro sorrateiro.");
	mes("[Mulher]\n Sim, esse monstro � terr�l em enganar a bondade dos viajantes, mas...");
	next;
	mes("[Mulher]\n H� rumores de que o monstro veio da alma de um beb� que nunca nasceu.\n T�o triste.");
	close;
}
