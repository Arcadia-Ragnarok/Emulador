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
| - Info: Npcs comuns na cidade Juno (yuno)                         |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Ruas ] -
//-------------------------------------------------------------------
yuno,184,173,4	script	Cidadão#yun	4_F_NOVICE,{
	mes "[Freidrich]";
	mes "A cidade dos sábios, ^3355FFJuno,^000000 é constituída por três ilhas.";
	next;
	mes "[Freidrich]";
	mes "São elas Solomon, a ilha da honra, Mineta, a ilha da prosperidade, e Snotora, a ilha do conhecimento.";
	next;
	mes "[Freidrich]";
	mes "Os locais destas ilhas são:";
	mes "Noroeste : Solomon";
	mes "Nordeste : Snotora";
	mes "Sul: Mineta.";
	close;
}

//-------------------------------------------------------------------
yuno,328,239,4	script	Lutador#yun	4_M_JOB_HUNTER,{
	mes "[Sergiof]";
	mes "Meu nome é Sergiof, o lutador que serve Granny.";
	next;
	mes "[Sergiof]";
	mes "Vou te falar sobre o ^3355FFGrande Peco^000000 que é um Peco Peco de level alto.";
	mes "O Grande Peco é mais rápido que o Peco Peco e é bastante agressivo.";
	next;
	mes "[Sergiof]";
	mes "Ele ataca usando seu resistente bico e muitos Peco Peco o seguem.";
	mes "Há uma grande diferença entre o poder de um Peco Peco e do Grande Peco.";
	close;
}

//-------------------------------------------------------------------
yuno,165,111,4	script	Sábia#yun	2_F_MAGICMASTER,{
	mes "[Le Morpheus]";
	mes "3355FFApocalypse^000000...";
	mes "É o nome do androide que costumava proteger Juno há muito tempo.";
	next;
	mes "[Le Morpheus]";
	mes "Devido sua inteligêngia artificial ter se corrompido com o passar do tempo.";
	mes "Ele não pode mais distinguir inimigos de aliados.";
	mes "Infelizmente, este andróide não passa de um monstro estúpido agora.";
	close;
}

//-------------------------------------------------------------------
yuno,150,283,4	script	Soldado#yun	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Existe aqui perto um monstro chamado de Golem de Lava.";
	mes "Este Golem é feito de um coração de pedra cuja potência foi amplificada por magia.";
	next;
	mes "[Soldado de Juno]";
	mes "A lava que fica escorrendo de seu corpo é tão quente que pode derreter as armaduras e armas feitas de aço de alta qualidade.";
	next;
	mes "[Soldado de Juno]";
	mes "É melhor você tomar cuidado quando encontrar este monstro. Destruirá seus equipamentos em um piscar de olhos.";
	close;
}

//-------------------------------------------------------------------
yuno,227,292,4	script	Soldado#yun2	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Próximo a Juno, existe um falso anjo chamado 'Anjo Fajuto'.";
	mes "Ele finge ser inocente, parecendo abençoar aventureiros e então ele os ataca pelas costas, sem qualquer aviso.";
	next;
	mes "[Soldado de Juno]";
	mes "Não se engane pelas aparências ou você vai ter sérios problemas.";
	close;
}

//-------------------------------------------------------------------
yuno,150,228,4	script	Soldado#yun3	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Você já viu um Jellopy Tamanho Família?";
	mes "Elas são enooormes!";
	next;
	mes "[Soldado de Juno]";
	mes "É difícil de acreditar mais é o maior e mais brilhante jellopy que existe!";
	close;
}

//-------------------------------------------------------------------
yuno,263,320,4	script	Soldado#yun4	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "É um longo e estreito escudo com asas de anjo gravadas no centro da frente.";
	mes "É especialmente poderoso contra Demônios e Mortos-Vivos.";
	close;
}

//-------------------------------------------------------------------
// - [ Casas ] -
//-------------------------------------------------------------------
yuno_in01,173,92,0	script	Maçãs de Idun#yun	HIDDEN_NPC,{
	mes "[Maçãs de Idun]";
	mes "Esta canção elogia as maçãs de ouro da deusa Idun.";
	mes "Estes foram a fonte do poder do deuses, uma vez que os impediu de envelhecer.";
	next;
	mes "[Maçãs de Idun]";
	mes "Todo deus nunca envelhecem por causa da bela Deusa, Idun.";
	mes "Guardiã das maçãs da juventude Deusa da imortalidade.";
	next;
	mes "[Maçãs de Idun]";
	mes "Todo deus nunca cresce velho.";
	mes "Idun, a esposa de Bragi, Idun, é filha de Odin.";
	mes "As maçãs ela mantém na sua cesta.";
	next;
	mes "[Maçãs de Idun]";
	mes "Sem Idun, todos os deuses sucumbiriam à idade.";
	next;
	mes "[Maçãs de Idun]";
	mes "Mesmo Thor, o mais forte dos deuses, teria um crescimento débil.";
	mes "Megingjard ia escorregar de sua cintura, e Mjölnir nunca iria voar novamente.";
	next;
	mes "[Maçãs de Idun]";
	mes "Loki foi negligente uma só vez, e fez com que perdesse para os deuses.";
	mes "Ele foi obrigado a levá-la de volta.";
	next;
	mes "[Maçãs de Idun]";
	mes "A minha deusa vive no campo de Asgard ela me dá frutos do céu.";
	mes "Você será amada por todos os deuses...";
	mes "Você será abençoada Por cada deus...";
	next;
	mes "[Maçãs de Idun]";
	mes "Se você compartilha a Maçã da juventude comigo.";
	mes "Mesmo sendo uma mordida com este pobre poeta.";
	next;
	mes "[Maçãs de Idun]";
	mes "Você será amada por todos os deuses...";
	mes "Você será abençoada por cada deus...";
	close;
}

//-------------------------------------------------------------------
yuno_in01,173,94,0	script	Canções de Batalha#yun	HIDDEN_NPC,{
	mes "[Canções de Batalha]";
	mes "Esta canção foi escrita para dar coragem aos soldados no campo de batalha.";
	next;
	mes "[Canções de Batalha]";
	mes "Os sons do galope ecoam à distância.";
	mes "Uma nuvem nebulosa de poeira.";
	next;
	mes "[Canções de Batalha]";
	mes "Preenche o sol poente milhares de olhos abertos.";
	mes "Tochas no castelo chamas como milhares de Ifrits.";
	next;
	mes "[Canções de Batalha]";
	mes "Escute meu coração latejante, o sangue flui nas minhas veias.";
	mes "Sentido o peso da minha armadura.";
	mes "O inimigo tem aparecido antes de nós.";
	next;
	mes "[Canções de Batalha]";
	mes "Toque forte os tambores, mais forte!";
	mes "Coragem, soldados, marchem pra frente!";
	mes "Gritem alto, soldados, mais alto!";
	mes "Hoje nunca vai voltar!";
	next;
	mes "[Canções de Batalha]";
	mes "Atordoar o céu provocar a terra.";
	mes "Sinto novamente meu coração.";
	mes "Toquem as cornetas para balançar a fortaleza.";
	mes "Hoje nunca vai voltar!";
	close;
}

//-------------------------------------------------------------------
yuno_in01,173,96,0	script	Canções de Luke#yun	HIDDEN_NPC,{
	mes "[Preface]";
	mes "Eu, Luke de Izlude, o maior dos bardos do meu tempo.";
	mes "Deixo as letras das minhas canções essenciais para a posteridade.";
	mes "Sumário";
	next;
	switch (select("Canção do Casamento","A vida, moinho de água","Nós")) {
		case 1:
		mes "[Canção do Casamento]";
		mes "Santuário de Prontera é onde está todo mundo.";
		mes "Para festejar a união no seu casamento feliz.";
		next;
		mes "[Canção do Casamento]";
		mes "Com alegria eu arranho meu alaúde como esse é o meu comércio.";
		mes "Trazer uma canção alegre para seu casamento.";
		next;
		mes "[Canção do Casamento]";
		mes "Para minhas canções, pagam-me não Zeny ou ouro.";
		mes "Mas o sorriso da noiva, se me permitem ser tão ousado.";
		next;
		mes "[Canção do Casamento]";
		mes "Os olhos brilhantes de uma bela moça aquelas fechaduras acetinadas";
		mes "E essa empresa...";
		next;
		mes "[Canção do Casamento]";
		mes "Perdoe-me, noivo!";
		mes "Mas ela é tão linda!";
		mes "Que a vossa união seja abençoada!";
		mes "Er, faça sua esposa ser obediente.";
		next;
		mes "[Notas de Luke]";
		mes "Esta canção é sobre um certo bardo.";
		mes "Que foi convidado para uma cerimônia de casamento.";
		mes "E que não pôde resistir à beleza da noiva.";
		mes "Ele acabou cantando a noiva.";
		next;
		mes "[Notas de Luke]";
		mes "As letras, claro, são fictícias e não são anedóticas.";
		close;
		case 2:
		mes "[A vida, moinho de água]";
		mes "Eu persegui a fama.";
		mes "Ela me iludiu.";
		mes "Corri depois da felicidade, mas nunca peguei ela.";
		next;
		mes "[A vida, moinho de água]";
		mes "Mas o amanhã ainda será será, tenho certeza.";
		mes "Como o moinho de água em Al de Baran.";
		mes "Que transforma e a vida continua.";
		next;
		mes "[A vida, moinho de água]";
		mes "Anima-te! a vida continua.";
		mes "De certo como a água ao moinho retorna, amanhã virá.";
		next;
		mes "[Notas de Luke]";
		mes "Esta canção foi feita pra confortar pessoas em desespero.";
		close;
		case 3:
		mes "[Nós]";
		mes "Um bom bardo canta para agradar seus ouvintes.";
		mes "Então, não espere uma canção triste isso aumenta a sua angústia.";
		next;
		mes "[Nós]";
		mes "Uma boa Odalisca dança para agradar seu público-alvo.";
		mes "Vamos dançar juntos?";
		mes "Basta segurar a minha mão.";
		mes "*La la la* *La la la*";
		next;
		mes "[Nós]";
		mes "Morador: 'Então porque as vezes vocês brigam?!'";
		mes "Bardo: 'Bem... ninguém é perfeito!'";
		next;
		mes "[Notas de Luke]";
		mes "Esta música é boa para ser cantada durante festas.";
		mes "Pois a discórdia intencional incentiva o público a participar.";
		mes "Fora isso, esta canção tem um significado bonito.";
		close;
	}
}
