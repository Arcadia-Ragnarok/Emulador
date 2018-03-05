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
| - Nota: Npcs comuns na cidade Morroc                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
morocc,202,244,0	script	Volunt�rio#moc	4_F_CRU,{
	mes("[Volunt�rio de Morroc]\n Depois que o terr�vel acidente varreu Morroc inteira.\n O Reino de Rune-Midgard tem reunido volunt�rios para ajudar nas restaura��es.");
	next;
	mes("[Volunt�rio de Morroc]\n Por mais importante que pare�a, todos est�o sendo cautelosos.\n Mas h� sempre alguns que realmente n�o compreendem a situa��o, n�o acha?");
	close;
}

// ------------------------------------------------------------------
morocc,88,133,3	script	Volunt�rio#moc2	4_M_ALCHE_A,{
	mes("[Volunt�rio de Morroc]\n Estamos inundados de trabalho...");
	next;
	mes("[Volunt�rio de Morroc]\n Este trabalho � como o infinito.\n N�o importa quanto esfor�o fa�amos!!!\n Povo de Rune-Midgard!! Nos d�em uma m�ozinha!");
	close;
}

// ------------------------------------------------------------------
morocc,202,110,0	script	Volunt�rio#moc3	4_M_JOB_ASSASSIN,{
	mes("[Volunt�rio de Morroc]\n Ainda estamos incapazes de estimar os danos gerais.");
	next;
	mes("[Volunt�rio de Morroc]\n A Uni�o dos Aventureiros e o Reino de Prontera est�o colocando seus esfor�os.\n Na restaura��o bem como nas restri��es da causa original do desastre.");
	next;
	mes("[Volunt�rio de Morroc]\n Se n�o desvendarmos a causa orginal.\n Os danos ultrapassar�o os limites de Morroc.\n A �nica coisa que falta � piorar.");
	close;
}

// ------------------------------------------------------------------
morocc,268,287,3	script	Volunt�rio#moc4	4_F_JOB_HUNTER,{
	mes("[Volunt�rio de Morroc]\n Por pior que pare�a, nem sequer podemos pedir mais apoio.\n Certamente esta deve ser a pior coisa que aconteceu na hist�ria de Rune-Midgard.");
	next;
	mes("[Volunt�rio de Morroc]\n Eu queria saber como ruim foi o dano, mas eu m�o posso estim�-lo.\n � como jogar p�s de areia contra a mar�..");
	close;
}

// ------------------------------------------------------------------
morocc,37,287,0	script	Volunt�rio#moc5	1_F_PRIEST,{
	mes("[Volunt�rio de Morroc]\n Est� tudo destru�do na cidade, mas o problema real s�o os cidad�es.");
	next;
	mes("[Volunt�rio de Morroc]\n � muito triste ver as v�timas do desastre.\n As pessoas que testemunharam o ocorrido est�o muito chocadas.\n E simplesmente n�o est�o mais normais...");
	next;
	mes("[Volunt�rio de Morroc]\n As pessoas est�o extremamente assustadas.\n Mas at� que elas tem sorte...\n Muitos dos que presenciaram o desastre ficaram mentalmente perturbados.");
	close;
}

// ------------------------------------------------------------------
morocc,223,102,0	script	Volunt�rio#moc6::MocVolunteer	2_M_BARD_ORIENT,{
	mes("[Volunt�rio de Morroc]\n Argh...\n Esse local � meio fantasmag�rico...\n At� mesmo essas brisas secas do deserto parece ter uma natureza sombria...");
	next;
	mes("[Volunt�rio de Morroc]\n Ooh!! Eu...\n Eu estou sentindo alguma coisa!\n Esse clima sombrio daqui est� me dando inspira��o musical!");
	next;
	mes("[Volunt�rio de Morroc]\n Certo, acho que voc� deveria ouvi-la.\n O nome da can��o �...\n 'A Raps�dia da Ressurrei��o do Imperador Morroc'!!!");
	next;
	mes("[Volunt�rio de Morroc]\n Quando finalmente acordar.\n Ser� a mesma escurid�o falhou ao renascer no mesmo lugar.\n Precisa se esfor�ar mais e nunca desistir.\n Mas mesmo depois de centenas e milhares de tentativas.\n O grande Imperador Morroc n�o poder� renascer.");
	next;
	mes("[Volunt�rio de Morroc]\n Meus est�pidos h�mens s�o in�teis, contra esses aventureiros.\n Agora eu devo renascer, rompendo o tempo e o espa�o...");
	next;
	mes("[Voz Ecoante]\n Calado! Voc� n�o v� o que est� acontecendo?!");
	next;
	mes("[Volunt�rio de Morroc]\n Ei, voc� est� pegando pesado demais.\n Seu punho aparenta ser bem fr�gil, mas certamente pode machucar algu�m.");
	next;
	mes("[Voz Ecoante]\n Bem... n�o tenho tempo a perder.\n Eu acho que j� ouvi algo parecido antes...");
	next;
	mes("[Volunt�rio de Morroc]\n N�o, n�o diga isso!\n Com certeza n�o!");
	close;
}
morocc,226,102,4	duplicate(MocVolunteer)	Volunt�rio#moc7	4_F_JOB_BLACKSMITH

// ------------------------------------------------------------------
morocc,54,251,0	script	B�bado#mocr	4_M_ORIENT02,{
	mes("[B�bado]\n Espere um segundo...!\n Voc� � talvez um aventureiro?\n Como vai a sua viagem?\n Heh heh...");
	next;
	mes("[B�bado]\n Deixe-me te contar uma hist�ria.\n Voc� sabe que eu acabei de sair daquela taberna, al�, n�?");
	next;
	mes("[B�bado]\n Eu ouvi que Satan Morroc chegou.\n Simplesmente saiu da fissura do tempo e do espa�o bl�...\n hic............");
	next;
	mes("[B�bado]\n Ah... Eu quero ver este Satan com meus pr�prios olhos!\n Mas eu realmente n�o deveria.\n Nem em sonho eu veria este Satan em pessoa.");
	next;
	mes("[B�bado]\n Mas eu acho que n�o teria nada a perder se voc�, uma pessoa de coragem.\n Que veio atrav�s do deserto tentar seduzir para encontr�-lo, n�o acha?\n Teehee........\n N�o se esque�a de me pagar uma bebida quando voc� encontr�-lo!\n Hic!");
	next;
	mes("[B�bado]\n Enfim, voc� sabe onde estamos?\n Eu s� estava dando uma bebidinha na taverna, mas repentinamente, todos os cidad�es haviam desaparecido quando sa�...\n Ou, uns quinhentos anos se passaram???!");
	close;
}
