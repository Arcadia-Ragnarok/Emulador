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
| - Nota: Npcs comuns na cidade Juno (yuno)                         |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Ruas ] -
//-------------------------------------------------------------------
yuno,184,173,4	script	Cidad�o#yun	4_F_NOVICE,{
	mes("[Freidrich]\n A cidade dos s�bios, ^3355FFJuno,^000000 � constitu�da por tr�s ilhas.");
	next;
	mes("[Freidrich]\n S�o elas Solomon, a ilha da honra, Mineta, a ilha da prosperidade, e Snotora, a ilha do conhecimento.");
	next;
	mes("[Freidrich]\n Os locais destas ilhas s�o:\n Noroeste : Solomon\n Nordeste : Snotora\n Sul: Mineta.");
	close;
}

//-------------------------------------------------------------------
yuno,328,239,4	script	Lutador#yun	4_M_JOB_HUNTER,{
	mes("[Sergiof]\n Meu nome � Sergiof, o lutador que serve Granny.");
	next;
	mes("[Sergiof]\n Vou te falar sobre o ^3355FFGrande Peco^000000 que � um Peco Peco de level alto.\n O Grande Peco � mais r�pido que o Peco Peco e � bastante agressivo.");
	next;
	mes("[Sergiof]\n Ele ataca usando seu resistente bico e muitos Peco Peco o seguem.\n H� uma grande diferen�a entre o poder de um Peco Peco e do Grande Peco.");
	close;
}

//-------------------------------------------------------------------
yuno,165,111,4	script	S�bia#yun	2_F_MAGICMASTER,{
	mes("[Le Morpheus]\n 3355FFApocalypse^000000...\n � o nome do androide que costumava proteger Juno h� muito tempo.");
	next;
	mes("[Le Morpheus]\n Devido sua intelig�ngia artificial ter se corrompido com o passar do tempo.\n Ele n�o pode mais distinguir inimigos de aliados.\n Infelizmente, este andr�ide n�o passa de um monstro est�pido agora.");
	close;
}

//-------------------------------------------------------------------
yuno,150,283,4	script	Soldado#yun	4_M_EIN_SOLDIER,{
	mes("[Soldado de Juno]\n Existe aqui perto um monstro chamado de Golem de Lava.\n Este Golem � feito de um cora��o de pedra cuja pot�ncia foi amplificada por magia.");
	next;
	mes("[Soldado de Juno]\n A lava que fica escorrendo de seu corpo � t�o quente que pode derreter as armaduras e armas feitas de a�o de alta qualidade.");
	next;
	mes("[Soldado de Juno]\n � melhor voc� tomar cuidado quando encontrar este monstro. Destruir� seus equipamentos em um piscar de olhos.");
	close;
}

//-------------------------------------------------------------------
yuno,227,292,4	script	Soldado#yun2	4_M_EIN_SOLDIER,{
	mes("[Soldado de Juno]\n Pr�ximo a Juno, existe um falso anjo chamado 'Anjo Fajuto'.\n Ele finge ser inocente, parecendo aben�oar aventureiros e ent�o ele os ataca pelas costas, sem qualquer aviso.");
	next;
	mes("[Soldado de Juno]\n N�o se engane pelas apar�ncias ou voc� vai ter s�rios problemas.");
	close;
}

//-------------------------------------------------------------------
yuno,150,228,4	script	Soldado#yun3	4_M_EIN_SOLDIER,{
	mes("[Soldado de Juno]\n Voc� j� viu um Jellopy Tamanho Fam�lia?\n Elas s�o enooormes!");
	next;
	mes("[Soldado de Juno]\n � dif�cil de acreditar mais � o maior e mais brilhante jellopy que existe!");
	close;
}

//-------------------------------------------------------------------
yuno,263,320,4	script	Soldado#yun4	4_M_EIN_SOLDIER,{
	mes("[Soldado de Juno]\n � um longo e estreito escudo com asas de anjo gravadas no centro da frente.\n � especialmente poderoso contra Dem�nios e Mortos-Vivos.");
	close;
}

//-------------------------------------------------------------------
// - [ Casas ] -
//-------------------------------------------------------------------
yuno_in01,173,92,0	script	Ma��s de Idun#yun	HIDDEN_NPC,{
	mes("[Ma��s de Idun]\n Esta can��o elogia as ma��s de ouro da deusa Idun.\n Estes foram a fonte do poder do deuses, uma vez que os impediu de envelhecer.");
	next;
	mes("[Ma��s de Idun]\n Todo deus nunca envelhecem por causa da bela Deusa, Idun.\n Guardi� das ma��s da juventude Deusa da imortalidade.");
	next;
	mes("[Ma��s de Idun]\n Todo deus nunca cresce velho.\n Idun, a esposa de Bragi, Idun, � filha de Odin.\n As ma��s ela mant�m na sua cesta.");
	next;
	mes("[Ma��s de Idun]\n Sem Idun, todos os deuses sucumbiriam � idade.");
	next;
	mes("[Ma��s de Idun]\n Mesmo Thor, o mais forte dos deuses, teria um crescimento d�bil.\n Megingjard ia escorregar de sua cintura, e Mj�lnir nunca iria voar novamente.");
	next;
	mes("[Ma��s de Idun]\n Loki foi negligente uma s� vez, e fez com que perdesse para os deuses.\n Ele foi obrigado a lev�-la de volta.");
	next;
	mes("[Ma��s de Idun]\n A minha deusa vive no campo de Asgard ela me d� frutos do c�u.\n Voc� ser� amada por todos os deuses...\n Voc� ser� aben�oada Por cada deus...");
	next;
	mes("[Ma��s de Idun]\n Se voc� compartilha a Ma�� da juventude comigo.\n Mesmo sendo uma mordida com este pobre poeta.");
	next;
	mes("[Ma��s de Idun]\n Voc� ser� amada por todos os deuses...\n Voc� ser� aben�oada por cada deus...");
	close;
}

//-------------------------------------------------------------------
yuno_in01,173,94,0	script	Can��es de Batalha#yun	HIDDEN_NPC,{
	mes("[Can��es de Batalha]\n Esta can��o foi escrita para dar coragem aos soldados no campo de batalha.");
	next;
	mes("[Can��es de Batalha]\n Os sons do galope ecoam � dist�ncia.\n Uma nuvem nebulosa de poeira.");
	next;
	mes("[Can��es de Batalha]\n Preenche o sol poente milhares de olhos abertos.\n Tochas no castelo chamas como milhares de Ifrits.");
	next;
	mes("[Can��es de Batalha]\n Escute meu cora��o latejante, o sangue flui nas minhas veias.\n Sentido o peso da minha armadura.\n O inimigo tem aparecido antes de n�s.");
	next;
	mes("[Can��es de Batalha]\n Toque forte os tambores, mais forte!\n Coragem, soldados, marchem pra frente!\n Gritem alto, soldados, mais alto!\n Hoje nunca vai voltar!");
	next;
	mes("[Can��es de Batalha]\n Atordoar o c�u provocar a terra.\n Sinto novamente meu cora��o.\n Toquem as cornetas para balan�ar a fortaleza.\n Hoje nunca vai voltar!");
	close;
}

//-------------------------------------------------------------------
yuno_in01,173,96,0	script	Can��es de Luke#yun	HIDDEN_NPC,{
	mes("[Preface]\n Eu, Luke de Izlude, o maior dos bardos do meu tempo.\n Deixo as letras das minhas can��es essenciais para a posteridade.\n Sum�rio");
	next;
	switch(select("Can��o do Casamento", "A vida, moinho de �gua", "N�s")) {
		case 1:
		mes("[Can��o do Casamento]\n Santu�rio de Prontera � onde est� todo mundo.\n Para festejar a uni�o no seu casamento feliz.");
		next;
		mes("[Can��o do Casamento]\n Com alegria eu arranho meu ala�de como esse � o meu com�rcio.\n Trazer uma can��o alegre para seu casamento.");
		next;
		mes("[Can��o do Casamento]\n Para minhas can��es, pagam-me n�o Zeny ou ouro.\n Mas o sorriso da noiva, se me permitem ser t�o ousado.");
		next;
		mes("[Can��o do Casamento]\n Os olhos brilhantes de uma bela mo�a aquelas fechaduras acetinadas\n E essa empresa...");
		next;
		mes("[Can��o do Casamento]\n Perdoe-me, noivo!\n Mas ela � t�o linda!\n Que a vossa uni�o seja aben�oada!\n Er, fa�a sua esposa ser obediente.");
		next;
		mes("[Notas de Luke]\n Esta can��o � sobre um certo bardo.\n Que foi convidado para uma cerim�nia de casamento.\n E que n�o p�de resistir � beleza da noiva.\n Ele acabou cantando a noiva.");
		next;
		mes("[Notas de Luke]\n As letras, claro, s�o fict�cias e n�o s�o aned�ticas.");
		close;
		case 2:
		mes("[A vida, moinho de �gua]\n Eu persegui a fama.\n Ela me iludiu.\n Corri depois da felicidade, mas nunca peguei ela.");
		next;
		mes("[A vida, moinho de �gua]\n Mas o amanh� ainda ser� ser�, tenho certeza.\n Como o moinho de �gua em Al de Baran.\n Que transforma e a vida continua.");
		next;
		mes("[A vida, moinho de �gua]\n Anima-te! a vida continua.\n De certo como a �gua ao moinho retorna, amanh� vir�.");
		next;
		mes("[Notas de Luke]\n Esta can��o foi feita pra confortar pessoas em desespero.");
		close;
		case 3:
		mes("[N�s]\n Um bom bardo canta para agradar seus ouvintes.\n Ent�o, n�o espere uma can��o triste isso aumenta a sua ang�stia.");
		next;
		mes("[N�s]\n Uma boa Odalisca dan�a para agradar seu p�blico-alvo.\n Vamos dan�ar juntos?\n Basta segurar a minha m�o.\n *La la la* *La la la*");
		next;
		mes("[N�s]\n Morador: 'Ent�o porque as vezes voc�s brigam?!'\n Bardo: 'Bem... ningu�m � perfeito!'");
		next;
		mes("[Notas de Luke]\n Esta m�sica � boa para ser cantada durante festas.\n Pois a disc�rdia intencional incentiva o p�blico a participar.\n Fora isso, esta can��o tem um significado bonito.");
		close;
	}
}
