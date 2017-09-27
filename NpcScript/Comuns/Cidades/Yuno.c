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
yuno,14,262,5	script	Funcionário#yun	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirigível que voa até Izlude dentro do Reino de Rune-Midgard.";
	mes "E para Rachel na República de Arunafeltz.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, desça as escadas e peça para a Equipe de Recepção levá-lo até o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}

//-------------------------------------------------------------------
yuno,88,263,3	script	Funcionário#yun2	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirigível que voa até Einbroch, Lighthalzen e Hugel na República de Schwaltzvalt.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, desça as escadas e peça para a Equipe de Recepção levá-lo até o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}

//-------------------------------------------------------------------
yuno,184,173,4	script	Freidrich#yun	4_F_NOVICE,{
	if (rand(1,5) == 1) {
		mes "[Freidrich]";
		mes "^3355FFJuno^000000 é mantida no ar por uma força anciã misteriosa.";
		next;
		mes "[Freidrich]";
		mes "Dizem que este poder vem de uma relíquia de uma antiga civilização chamada ^3355FFJuperos^000000.";
		mes "Que existia aqui muito antes de Juno.";
		next;
		mes "[Freidrich]";
		mes "Uma investigação revelou que o poder de Juno vem dos ^3355FFPedaços do Coração de Ymir^000000.";
		mes "Ouvi dizer que esta fonte de poder é encontrada onde Juperos existia.";
		next;
		mes "[Freidrich]";
		mes "Desde que muitos estudiosos vieram a Juno para estudar e investigar esta fonte de poder.!";
		mes "Nossa cidade é basicamente uma capital dos estudiosos.";
		close;
	}
	else {
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
}

//-------------------------------------------------------------------
yuno,337,227,4	script	Granny#yun	8_F_GRANDMOTHER,{
	mes "[Granny]";
	mes "Sou o Sábio Granny aquele que tudo prevê...";
	next;
	mes "[Granny]";
	mes "Você soube de um monstro chefe que está a muito tempo pelos arredores de Juno?";
	mes "É chamado de ^FF3355Senhor da Morte^000000.";
	next;
	mes "[Granny]";
	mes "Há rumores de que ele veio do mundo dos mortos.";
	mes "Ele traz vários monstros morto-vivos consigo";
	mes "Pretendendo liderar criaturas vivas em seu frio e gelado reino.";
	next;
	mes "[Granny]";
	mes "Você já deve ter escolhido se vai ou não enfentar o Senhor da Morte.";
	mes "Tudo que precisa fazer agora é saber porque você tomou essa decisão.";
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
yuno,343,68,4	script	Ninno#yun	4_M_JOB_ASSASSIN,{
	mes "[Ninno]";
	mes "Já ouviu falar em um rei Egípcio que acredita-se que é filho de um Deus?";
	mes "Seu nome é ^3355FFFaraó^000000.";
	next;
	mes "[Ninno]";
	mes "Há rumores de que ele é um grande feiticeiro que amaldiçoou inocentes.";
	mes "Dizem que ele ainda esta por aí, amaldiçoando pessoas.";
	next;
	mes "[Ninno]";
	mes "Como aventureiro, é possível que você o veja em suas viagens. Tenha cuidado...";
	close;
}

//-------------------------------------------------------------------
yuno,165,111,4	script	Sábio#yun	2_F_MAGICMASTER,,{
	mes "[Le Morpheus]";
	mes "^3355FFApocalypse^000000...";
	mes "É o nome do androide que costumava proteger Juno há muito tempo.";
	next;
	mes "[Le Morpheus]";
	mes "Devido sua inteligêngia artificial ter se corrompido com o passar do tempo";
	mes "Ele não pode mais distinguir inimigos de aliados.";
	mes "Infelizmente, este andróide não passa de um monstro estúpido agora.";
	close;
}

//-------------------------------------------------------------------
yuno,157,205,4	script	Artesão#yun	1_M_JOBGUIDER,{
	mes "[Artesão]";
	mes "*Resmungo resmungo...*";
	next;
	mes "[Artesão]";
	mes "Oh, como vai.";
	mes "Deixe me apresentar.";
	mes "Eu sou um artesão que está tentando continuar as tradições e os deveres dos artesões mestres daqui de Juno.";
	next;
	switch(select("Equipamentos Poderosos","Itens Únicos","Comidas Tradicionais","Finalizar Conversa")) {
		case 1:
		mes "[Artesão]";
		mes "Deixe-me sugerir o ^3355FFArauto Divino^000000 e a ^3355FFVingadora Sagrada^000000 que são itens especiais para Templários.";
		next;
		mes "[Artesão]";
		mes "Estes equipamentos são bem leves e têm muito potencial.";
		mes "Eles te fazem possuir o poder divino.";
		next;
		mes "[Artesão]";
		mes "Portanto, este equipamento é mais forte sobre alguns tipos de monstros, como fantasmas ou mortos-vivos.";
		next;
		mes "[Artesão]";
		mes "Entretanto, há rumores de que só alguns Templários escolhidos estão aptos a obter estes itens, devido a suas raridades.";
		close;
		case 2:
		mes "[Artesão]";
		mes "Parece que um pergaminho marcado com um pentagrama.";
		mes "Entretanto o ^FF3355Pergaminho Antigo^000000 é muito antigo, é procurado por muitos Sábios para fins de investigação.";
		next;
		mes "[Artesão]";
		mes "Parece que você pode usar este item quando conjurar uma magia de alto nível.";
		close;
		case 3:
		mes "[Artesão]";
		mes "^3355FFBolinho de Arroz^000000!";
		mes "Sim, é uma comida tradicional fornecida por várias pessoas.";
		mes "Há um monte de lembranças nostálgicas de antigos mercadores referente ao Bolinho de Arroz.";
		next;
		mes "[Artesão]";
		mes "Ahhh";
		mes "Eu queria poder comer um Bolinho de Arroz agora.";
		close;
		case 4:
		mes "[Artesão]";
		mes "Embora Juno seja conhecida como cidade dos sábios,espero que entenda que pessoas comuns vivem aqui também.";
		mes "Por favor, aproveite a atmosfera única que Juno tem a oferecer.";
		close;
	}
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
yuno,165,283,4	script	Soldado#yun2	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Planta Carnívora...";
	mes "Este monstro parece uma flor brotando do chão.";
	next;
	mes "[Soldado de Juno]";
	mes "Estranhamente, ela pode estender seu corpo a longas distâncias.";
	mes "Mesmo se você estiver de longe, ela pode ser uma ameaça.";
	next;
	mes "[Soldado de Juno]";
	mes "O nome deste monstro, originou-se da história de um pobre geógrafo.";
	mes "Que infelizmente, foi devorado por este monstro enquanto ele estava concentrado nos estudos.";
	close;
}

//-------------------------------------------------------------------
yuno,227,292,4	script	Soldado#yun3	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Próximo a Juno, existe um falso anjo chamado 'Anjo Fajuto'.";
	mes "Ele finge ser inocente, parecendo abençoar aventureiros e então ele os ataca pelas costas, sem qualquer aviso.";
	next;
	mes "[Soldado de Juno]";
	mes "Não se engane pelas aparências ou você vai ter sérios problemas.";
	close;
}

//-------------------------------------------------------------------
yuno,165,228,4	script	Soldado#yun4	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "'Bode' é um monstro que foi um antílope e vive em montanhas altas, agora não passa de um monstro qualquer.";
	next;
	mes "[Soldado de Juno]";
	mes "Mesmo se você conseguir esquivar-se de seus chifres, ainda precisa tomar cuidado com suas poderosas pernas.";
	next;
	mes "[Soldado de Juno]";
	mes "As pernas do Bode são muito fortes, porque está sempre escalando penhascos quando não está matando inocentes.";
	close;
}

//-------------------------------------------------------------------
yuno,150,228,4	script	Soldado#yun5	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Você já viu";
	mes "um Jellopy Tamanho Família?";
	mes "Elas são enooormes!";
	next;
	mes "[Soldado de Juno]";
	mes "É difícil de acreditar mais é o maior e mais brilhante jellopy que existe!";
	close;
}

//-------------------------------------------------------------------
yuno,334,182,4	script	Soldado#yun6	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Entre as armas dos Sábios, existe a 'Adaga Certeira'.";
	next;
	mes "[Soldado de Juno]";
	mes "Seu uso é restrito a Sábios, e aumenta a chance de inflingir ataques críticos.";
	mes "Assim, para os Sábios, esta adaga pode ser muito útil, bem como dar mais estilo a eles em batalhas.";
	close;
}

//-------------------------------------------------------------------
yuno,263,320,4	script	Soldado#yun7	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "É um longo e estreito escudo com asas de anjo gravadas no centro da frente.";
	mes "É especialmente poderoso contra Demônios e Mortos-Vivos.";
	close;
}

//-------------------------------------------------------------------
// - [ Casas ] -
//-------------------------------------------------------------------
yuno_in04,20,123,7	script	Representante#yun	4_F_SISTER,{
	mes "[Marlin Putiur]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Organização de Pesquisa de Monstros.";
	next;
	mes "[Marlin Putiur]";
	mes "Nós estamos pesquisando monstros baseado em informações de aventureiros.";
	mes "A fim de lidar eficientemente com monstros no estado selvagem.";
	next;
	mes "[Marlin Putiur]";
	mes "Nós estamos aceitando qualquer tipo de informação relacionada com monstros.";
	mes "Então se você tiver qualquer novidade ou informação, por favor não hesite em dizer-me.";
	next;
	mes "[Marlin Putiur]";
	mes "Você pode usar o formulário de relatório neste quarto a sua conveniência.";
	next;
	mes "[Marlin Putiur]";
	mes "Nós estamos investigando monstros neste mundo no intento de ajudar os aventureiros em suas jornadas.";
	close;
}

//-------------------------------------------------------------------
yuno_in04,33,119,3	script	Aventureiro#yun	4_M_ROGUE,{
	mes "...";
	next;
	mes "...";
	mes ".......";
	next;
	mes "^3355FF*Rabisca Rabisca*^000000";
	next;
	mes "[Jovem Dinâmico]";
	mes "Err...?";
	mes "O que é isto?";
	next;
	if (Sex == SEX_FEMALE) {
		emotion e_heh;
		mes "[Jovem Dinâmico]";
		mes "Oh...!";
		mes "Uma linda, mocinha!";
		next;
		mes "[Jovem Dinâmico]";
		mes "Olá aí.";
		mes "Meu nome é Pane.";
		mes "Posso perguntar o seu?";
		input (.@input$);
		next;
		mes "[Jovem Dinâmico]";
		mes "Oh...";
		if (strcharinfo(PC_NAME) == .@input$) {
			next;
			mes "[Jovem Dinâmico]";
			mes "^FF6699"+@input$+"!";
			mes "Um nome maravilhoso!";
			next;
			mes "[Jovem Dinâmico]";
			mes "Irei lembrar de seu nome, minha senhora.";
			mes "Oh, mas eu sinto muito.";
			mes "Eu estou muito ocupado agora.";
			mes "Você poderia voltar mais tarde?";
			mes "Farei o meu melhor para agradá-la na próxima vez.";
			emotion (e_kis);
			close;
		} else {
			mes "Esse é o seu nome?";
			next;
			mes "[Jovem Dinâmico]";
			mes "Eh, que seja.";
			mes "Oh, mas eu sinto muito.";
			mes "Eu estou muito ocupado agora.";
			mes "Você poderia voltar mais tarde?";
			mes "Farei o meu melhor para agradá-la na próxima vez.";
			emotion (e_heh);
			close;
		}
	} else {
		mes "[Jovem Dinâmico]";
		mes "O quê, cara...!";
		mes "Deixe-me sozinho.";
		mes "Não está vendo que estou ocupado?";
		close;
	}
}

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
	mes "Você será abençoada";
	mes "Por cada deus...";
	close;
}

//-------------------------------------------------------------------
yuno_in01,173,94,0	script	Canções de Batalha#yun	HIDDEN_NPC,{
	mes "[Canções de Batalha]";
	mes "Esta canção foi escrita para dar coragem aos soldados no campo de batalha.";
	next;
	mes "[Canções de Batalha]";
	mes "Os sons do galope ecoam à distância.";
	mes "Uma nuvem nebulosa de poeira";
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
	mes " ";
	mes "Sumário";
	next;
	switch(select("Canção do Casamento","A vida, moinho de água","Nós")) {
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

//-------------------------------------------------------------------
