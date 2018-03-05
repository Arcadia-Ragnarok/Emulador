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
| - Nota: Npcs comuns na cidade Juno (yuno)                         |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Ruas ] -
//-------------------------------------------------------------------
yuno,184,173,4	script	Cidadão#yun	4_F_NOVICE,{
	mes("[Freidrich]\n A cidade dos sábios, ^3355FFJuno,^000000 é constituída por três ilhas.");
	next;
	mes("[Freidrich]\n São elas Solomon, a ilha da honra, Mineta, a ilha da prosperidade, e Snotora, a ilha do conhecimento.");
	next;
	mes("[Freidrich]\n Os locais destas ilhas são:\n Noroeste : Solomon\n Nordeste : Snotora\n Sul: Mineta.");
	close;
}

//-------------------------------------------------------------------
yuno,328,239,4	script	Lutador#yun	4_M_JOB_HUNTER,{
	mes("[Sergiof]\n Meu nome é Sergiof, o lutador que serve Granny.");
	next;
	mes("[Sergiof]\n Vou te falar sobre o ^3355FFGrande Peco^000000 que é um Peco Peco de level alto.\n O Grande Peco é mais rápido que o Peco Peco e é bastante agressivo.");
	next;
	mes("[Sergiof]\n Ele ataca usando seu resistente bico e muitos Peco Peco o seguem.\n Há uma grande diferença entre o poder de um Peco Peco e do Grande Peco.");
	close;
}

//-------------------------------------------------------------------
yuno,165,111,4	script	Sábia#yun	2_F_MAGICMASTER,{
	mes("[Le Morpheus]\n 3355FFApocalypse^000000...\n É o nome do androide que costumava proteger Juno há muito tempo.");
	next;
	mes("[Le Morpheus]\n Devido sua inteligêngia artificial ter se corrompido com o passar do tempo.\n Ele não pode mais distinguir inimigos de aliados.\n Infelizmente, este andróide não passa de um monstro estúpido agora.");
	close;
}

//-------------------------------------------------------------------
yuno,150,283,4	script	Soldado#yun	4_M_EIN_SOLDIER,{
	mes("[Soldado de Juno]\n Existe aqui perto um monstro chamado de Golem de Lava.\n Este Golem é feito de um coração de pedra cuja potência foi amplificada por magia.");
	next;
	mes("[Soldado de Juno]\n A lava que fica escorrendo de seu corpo é tão quente que pode derreter as armaduras e armas feitas de aço de alta qualidade.");
	next;
	mes("[Soldado de Juno]\n É melhor você tomar cuidado quando encontrar este monstro. Destruirá seus equipamentos em um piscar de olhos.");
	close;
}

//-------------------------------------------------------------------
yuno,227,292,4	script	Soldado#yun2	4_M_EIN_SOLDIER,{
	mes("[Soldado de Juno]\n Próximo a Juno, existe um falso anjo chamado 'Anjo Fajuto'.\n Ele finge ser inocente, parecendo abençoar aventureiros e então ele os ataca pelas costas, sem qualquer aviso.");
	next;
	mes("[Soldado de Juno]\n Não se engane pelas aparências ou você vai ter sérios problemas.");
	close;
}

//-------------------------------------------------------------------
yuno,150,228,4	script	Soldado#yun3	4_M_EIN_SOLDIER,{
	mes("[Soldado de Juno]\n Você já viu um Jellopy Tamanho Família?\n Elas são enooormes!");
	next;
	mes("[Soldado de Juno]\n É difícil de acreditar mais é o maior e mais brilhante jellopy que existe!");
	close;
}

//-------------------------------------------------------------------
yuno,263,320,4	script	Soldado#yun4	4_M_EIN_SOLDIER,{
	mes("[Soldado de Juno]\n É um longo e estreito escudo com asas de anjo gravadas no centro da frente.\n É especialmente poderoso contra Demônios e Mortos-Vivos.");
	close;
}

//-------------------------------------------------------------------
// - [ Casas ] -
//-------------------------------------------------------------------
yuno_in01,173,92,0	script	Maçãs de Idun#yun	HIDDEN_NPC,{
	mes("[Maçãs de Idun]\n Esta canção elogia as maçãs de ouro da deusa Idun.\n Estes foram a fonte do poder do deuses, uma vez que os impediu de envelhecer.");
	next;
	mes("[Maçãs de Idun]\n Todo deus nunca envelhecem por causa da bela Deusa, Idun.\n Guardiã das maçãs da juventude Deusa da imortalidade.");
	next;
	mes("[Maçãs de Idun]\n Todo deus nunca cresce velho.\n Idun, a esposa de Bragi, Idun, é filha de Odin.\n As maçãs ela mantém na sua cesta.");
	next;
	mes("[Maçãs de Idun]\n Sem Idun, todos os deuses sucumbiriam à idade.");
	next;
	mes("[Maçãs de Idun]\n Mesmo Thor, o mais forte dos deuses, teria um crescimento débil.\n Megingjard ia escorregar de sua cintura, e Mjölnir nunca iria voar novamente.");
	next;
	mes("[Maçãs de Idun]\n Loki foi negligente uma só vez, e fez com que perdesse para os deuses.\n Ele foi obrigado a levá-la de volta.");
	next;
	mes("[Maçãs de Idun]\n A minha deusa vive no campo de Asgard ela me dá frutos do céu.\n Você será amada por todos os deuses...\n Você será abençoada Por cada deus...");
	next;
	mes("[Maçãs de Idun]\n Se você compartilha a Maçã da juventude comigo.\n Mesmo sendo uma mordida com este pobre poeta.");
	next;
	mes("[Maçãs de Idun]\n Você será amada por todos os deuses...\n Você será abençoada por cada deus...");
	close;
}

//-------------------------------------------------------------------
yuno_in01,173,94,0	script	Canções de Batalha#yun	HIDDEN_NPC,{
	mes("[Canções de Batalha]\n Esta canção foi escrita para dar coragem aos soldados no campo de batalha.");
	next;
	mes("[Canções de Batalha]\n Os sons do galope ecoam à distância.\n Uma nuvem nebulosa de poeira.");
	next;
	mes("[Canções de Batalha]\n Preenche o sol poente milhares de olhos abertos.\n Tochas no castelo chamas como milhares de Ifrits.");
	next;
	mes("[Canções de Batalha]\n Escute meu coração latejante, o sangue flui nas minhas veias.\n Sentido o peso da minha armadura.\n O inimigo tem aparecido antes de nós.");
	next;
	mes("[Canções de Batalha]\n Toque forte os tambores, mais forte!\n Coragem, soldados, marchem pra frente!\n Gritem alto, soldados, mais alto!\n Hoje nunca vai voltar!");
	next;
	mes("[Canções de Batalha]\n Atordoar o céu provocar a terra.\n Sinto novamente meu coração.\n Toquem as cornetas para balançar a fortaleza.\n Hoje nunca vai voltar!");
	close;
}

//-------------------------------------------------------------------
yuno_in01,173,96,0	script	Canções de Luke#yun	HIDDEN_NPC,{
	mes("[Preface]\n Eu, Luke de Izlude, o maior dos bardos do meu tempo.\n Deixo as letras das minhas canções essenciais para a posteridade.\n Sumário");
	next;
	switch(select("Canção do Casamento", "A vida, moinho de água", "Nós")) {
		case 1:
		mes("[Canção do Casamento]\n Santuário de Prontera é onde está todo mundo.\n Para festejar a união no seu casamento feliz.");
		next;
		mes("[Canção do Casamento]\n Com alegria eu arranho meu alaúde como esse é o meu comércio.\n Trazer uma canção alegre para seu casamento.");
		next;
		mes("[Canção do Casamento]\n Para minhas canções, pagam-me não Zeny ou ouro.\n Mas o sorriso da noiva, se me permitem ser tão ousado.");
		next;
		mes("[Canção do Casamento]\n Os olhos brilhantes de uma bela moça aquelas fechaduras acetinadas\n E essa empresa...");
		next;
		mes("[Canção do Casamento]\n Perdoe-me, noivo!\n Mas ela é tão linda!\n Que a vossa união seja abençoada!\n Er, faça sua esposa ser obediente.");
		next;
		mes("[Notas de Luke]\n Esta canção é sobre um certo bardo.\n Que foi convidado para uma cerimônia de casamento.\n E que não pôde resistir à beleza da noiva.\n Ele acabou cantando a noiva.");
		next;
		mes("[Notas de Luke]\n As letras, claro, são fictícias e não são anedóticas.");
		close;
		case 2:
		mes("[A vida, moinho de água]\n Eu persegui a fama.\n Ela me iludiu.\n Corri depois da felicidade, mas nunca peguei ela.");
		next;
		mes("[A vida, moinho de água]\n Mas o amanhã ainda será será, tenho certeza.\n Como o moinho de água em Al de Baran.\n Que transforma e a vida continua.");
		next;
		mes("[A vida, moinho de água]\n Anima-te! a vida continua.\n De certo como a água ao moinho retorna, amanhã virá.");
		next;
		mes("[Notas de Luke]\n Esta canção foi feita pra confortar pessoas em desespero.");
		close;
		case 3:
		mes("[Nós]\n Um bom bardo canta para agradar seus ouvintes.\n Então, não espere uma canção triste isso aumenta a sua angústia.");
		next;
		mes("[Nós]\n Uma boa Odalisca dança para agradar seu público-alvo.\n Vamos dançar juntos?\n Basta segurar a minha mão.\n *La la la* *La la la*");
		next;
		mes("[Nós]\n Morador: 'Então porque as vezes vocês brigam?!'\n Bardo: 'Bem... ninguém é perfeito!'");
		next;
		mes("[Notas de Luke]\n Esta música é boa para ser cantada durante festas.\n Pois a discórdia intencional incentiva o público a participar.\n Fora isso, esta canção tem um significado bonito.");
		close;
	}
}
