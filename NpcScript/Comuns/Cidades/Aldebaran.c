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
| - Nota: Npcs comuns na cidade Al de Baran                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
aldebaran,113,70,4	script	Ferreiro Munster#alde	1_M_02,{
	mes("[Munster]\n Minha família morava em Geffen.\n Então eu acho que era natural que estudássemos forja, e eventualmente nos tornássemos Ferreiros.\n Então, finalmente nos mudamos para essa cidade, Al De Baran.");
	next;
	if (select("^3355FFRefinamento de Itens^000000","Cancelar") == 1) {
		mes("[Munster]\n Meu pai era um Ferreiro famoso em Geffen.\n Ele me ensinou muito sobre forjar equipamentos.");
		next;
		mes("[Munster]\n Uma das coisas fundamentais é que a probabilidade de sucesso ao refinar um item depende do nível da arma.");
		next;
		mes("[Munster]\n Para armas de nível 1, você pode refinar até +7 sem correr o risco de quebrá-la.\n Armas de nível 2 podem ser refinadas até +6, enquanto as de nível 3 podem ser refinadas até +5 sem correr risco.");
		next;
		mes("[Munster]\n Para armas de nível 4, você pode refinar até +4 sem muito risco.\n Para armaduras, você pode refinar até +4.\n Se o processo falhar, o equipamento será destruido!");
		close;
	}
	mes("[Munster]\n Hmm...\n Se puder, tente visitar a oficina do meu pai aqui em Al de Baran.\n Se me permite dizer, ele é um Ferreiro muito talentoso.");
	close;
}

// ------------------------------------------------------------------
aldebaran,64,104,4	script	Sr. Quattro#alde	1_M_JOBTESTER,{
	mes("[Quatro]\n Você ouviu falar que aquele Ferreiro famoso se mudou de Geffen para cá?");
	next;
	if (select("Ferreiro Famoso?", "Encerrar Conversa") == 1) {
		mes("[Quatro]\n Pelo o que eu ouvi, ele é um daqueles Ferreiros que consegue refinar armas e armaduras.\n Quando uma arma é refinada o seu ataque é aumentado.");
		next;
		mes("[Quatro]\n Para cada nível de refinamento, a força de ataque é aumentada em 2 para armas de nível 1.\n Para armas de nível 2, a força de ataque aumenta em 3.");
		next;
		mes("[Quatro]\n Para armas de nível 3, são adicionados 5 na força de ataque para cada nível de refinamento.\n Para armas nível 4, são adicionados 7 na força de ataque.");
		close;
	}
	mes("[Quatro]\n Essa família de ferreiros vive aqui desde que a sua esposa ficou doente e fraca.\n Por causa dessa doença, ela precisa de ervas medicinais que crescem perto de Al De Baran.");
	next;
	mes("[Quatro]\n Eles também têm um filho prestativo que está sempre ajudando nos négocios da família.\n Tenho certeza que o menino vai se tornar um bom Ferreiro, assim como o Pai.");
	close;
}

// ------------------------------------------------------------------
aldebaran,49,93,4	script	Miguel#alde	4_M_01,{
	mes("[Miguel]\n As armas de nível 4 não são legais?!\n Eu não consigo acreditar como armas tão poderosas existem!");
	next;
	mes("[Miguel]\n Bem, elas raramente são vistas no mercado.\n Mas Monstros Chefes têm uma chance pequena de derrubar elas se você for capaz de matar um.");
	close;
}

// ------------------------------------------------------------------
aldebaran,81,61,4	script	Catadora de Conchas#ald	4W_F_01,{
	mes("[Catadora]\n Eu gosto de colecionar conchas do mar.\n É muito relaxante e divertido.");
	next;
	if (select("Catar Conchas?", "Finalizar Conversa") == 1) {
		mes("[Catadora]\n Quando você ver bolhas saindo da areia, ou de poças de lama, tente cavar um pouco.\n Você provavelmente vai encontrar conchas enterradas!");
		next;
		mes("[Catadora]\n Você já ouviu falar de Ambernite?\n Aquela concha monstro é bem dura.");
		next;
		mes("[Catadora]\n É normalmente vista na praia perto da província à oeste de Prontera.\n Se você atacar uma sem estar preparado, você poderá estar em apuros.");
		next;
		mes("[Catadora]\n Ambernite é muito forte!\n Então tome cuidado!");
		close;
	}
	mes("[Catadora]\n Ambernite é muito forte!\n Então tome cuidado!");
	close;
}

// ------------------------------------------------------------------
aldebaran,46,129,4	script	Panama#alde	4W_M_01,{
	mes("[Panama]\n Al De Baran é conhecida mundialmente como a Cidade dos Canais.\n Os canais realmente dão um toque sofisticado e romântico a nossa cidade.");
	next;
	switch(select("Sobre os Canais", "Finalizar Conversa")) {
		case 1:
		mes("[Panama]\n Bem, um canal é um lugar criado para a água passar normalmente usado para embarcações, ou irrigações.");
		next;
		mes("[Panama]\n Mas, os canais daqui são apenas para ver.\n Se nós precisamos transportar alguma coisa.\n Nós apenas usaríamos o serviço de teletransporte da Corporação Kafra!");
		close;
		case 2:
		mes("[Panama]\n Eu espero que você aprecie sua estadia em Al De Baran.");
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,67,154,4	script	Montanhista#alde	4W_M_02,{
	mes("[Montanhista]\n Mt. Mjolnir e Floresta de Payon.\n Ambos são lugares difíceis de atravessar.");
	next;
	switch(select("Mt.Mjolnir?", "Floresta Payon...?", "Finalizar Conversa")) {
		case 1:
		mes("[Montanhista]\n Para chegar aqui vindo de Prontera ou Geffen, você tem que atravessar as Montanhas Mjolnir.");
		next;
		mes("[Montanhista]\n Se você veio até aqui sem usar o serviço de teletransporte da Corporação Kafra, bom trabalho!");
		next;
		mes("[Montanhista]\n As Montanhas Mjolnir são realmente íngremes, e ela é cheia de monstros agressivos.\n Então sempre é um risco tentar andar por lá sozinho.");
		close;
		case 2:
		mes("[Montanhista]\n Se você deseja visitar Alberta ou a cidade de Payon.\n Você deve primeiro atravessar a Floresta de Payon.");
		next;
		mes("[Montanhista]\n A Floresta de Payon é um labirinto tortuoso e complexo onde é facil se perder.\n Ao menos que se concentre no seu caminho, você poderá ficar preso naquele lugar perigoso.");
		next;
		mes("[Montanhista]\n Payon, a vila dos aqueiros, foi construida dentro dessa floresta para se proteger de invasores.\n Eu achei uma boa idéia da parte deles.");
		close;
		case 3:
		mes("[Montanhista]\n As enormes montanhas cercando essa cidade impede que pessoas de fora venham para essa cidade.\n Talvez seja esse o motivo de termos sido capazes de manter esse canal bonito e limpo sem nenhuma influência de fora.");
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,90,170,4	script	Edu#alde	1_M_01,{
	mes("[Edu]\n Algumas armas ou amaduras têm slots onde você pode inserir cartas obtidas de monstros.");
	next;
	switch(select("Sobre o número de slots","Relação entre cartas e slots","Finalizar a Conversa")) {
		case 1:
		mes("[Edu]\n Itens soltos por monstros possuem mais slots que armas ou armaduras comuns vendidas em Lojas de NPCs.");
		next;
		mes("[Edu]\n Eu acho que você pode deduzir que um item com mais Slots tem mais valor do que um mesmo item com menos slots.");
		close;
		case 2:
		mes("[Edu]\n Uma vez que uma carta é inserida num slot, é impossivel removê-la.\n Então tenha cuidado quando for inserir cartas em armas ou armaduras.");
		next;
		mes("[Edu]\n Além disso, quando você passar o mouse em cima de um equipamento na janela de itens, ou na janela de vendas.\n O nome do item será seguido do número de slots que ele possui em colchetes.");
		next;
		mes("[Edu]\n Por exemplo, um escudo com 1 slot, quando o cursor passar por cima, vai aparecer o nome 'Escudo [1].'");
		next;
		mes("[Edu]\n Você também pode clicar com o botão direito no item, e checar a janela de slots embaixo da descrição.");
		close;
		case 3:
		mes("[Edu]\n Você alguma vez já conseguiu uma carta de um monstro?");
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,117,181,4	script	Joy#alde	1_M_02,{
	mes("[Joy]\n Armas de nível 1, que sãos as mais fracas, precisa de um metal chamado ^3355FFFracon^000000 para serem refinadas.");
	next;
	switch(select("Sobre Fracon", "Conselho sobre Fracon", "Finalizar Conversa")) {
		case 1:
		mes("[Joy]\n Fracon é um metal muito comum, e pode ser encontrado por todo o continente de Rune-Midgard.");
		next;
		mes("[Joy]\n Apesar de não ter a força dos outros metais, é facil de obter.\n Você pode conseguir matando monstros ou comprando em Lojas na cidade.");
		next;
		mes("[Joy]\n Quando você estiver usando armas de alto nível, e não precisar mais deles, você pode vender por alguns zeny!");
		close;
		case 2:
		mes("[Joy]\n Bem, eu ouvi falar que muitos monstros carregam Fracons e derrubam eles quando mortos.\n Por que você não vai caça-los?");
		next;
		mes("[Joy]\n Não deve ser muito difícil.\n Uma vez eu peguei um fracon depois de ter matado um Bebê Selvagem!\n Mas se você estiver desesperado, você sempre pode comprar na Loja de Forja.");
		close;
		case 3:
		mes("[Joy]\n Boa sorte em achar Fracons!");
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,121,231,4	script	Alquimista#alde	1_M_03,{
	mes("[Alquimista]\n Alquimistas, uma das 2ª classes, são capazes de criar itens de diversos materiais utilizando o conhecimento da antiga era de Al De Baran.");
	next;
	switch(select("Sobre Alquimia em Payon", "Definição de Alquimia", ". . . . .", "Finalizar Conversa")) {
		case 1:
		mes("[Alquimista]\n A Maioria das pessoas não sabe que existia uma forma oriental de alquimia desenvolvida em Payon.");
		next;
		mes("[Alquimista]\n Os Alquimistas de Payon eram capazes de criar Ouro de diferentes tipos de materiais.\n Apesar de a alquimia de Payon nunca se desenvolveu tanto como em Al De Baran.");
		next;
		mes("[Alquimista]\n Os materiais para a Alquimia de payon eram escassos.\n Então o interesse nesse campo eventualmente diminuiu.\n Agora, você apenas pode estudar Aqluimia aqui.");
		next;
		mes("[Alquimista]\n Ainda sim, Eu penso que aqueles segredos foram perdidos depois que a Alquimia de Payon desapareceu da face da terra...");
		close;
		case 2:
		mes("[Alquimista]\n Alquimistas se especializam em pesquisas químicas para criar itens úteis de várias outras coisas.");
		next;
		mes("[Alquimista]\n Eu também ouvi falar que eles podem criar vários tipos de Poções, e até podem sumonar alguns Monstros!\n Me parece que os estudos deles têm vários tipos de aplicações.");
		close;
		case 3:
		mes("[Alquimista]\n Você está entediado, não é?\n Ok então, Eu vou contar uma história sobre cartas de monstro e slots de itens.\n Como você já deve saber, se já conseguiu alguma uma carta antes...");
		next;
		mes("[Alquimista]\n Você apenas pode inserir cartas em um item que satisfaça o local requerido pela carta.\n Por exemplo, vamos dizer que você obteve uma Carta Poring.");
		next;
		mes("[Alquimista]\n Quando você clicar com o botão direito na carta, você vai ver o bônus como SOR+2 e Esquiva Perfeita+1 e o tipo como 'Armadura'.");
		next;
		mes("[Alquimista]\n Se você tentar inserir essa carta em uma adaga com vários slots, não vai funcionar porque a carta só pode ser inserida em armaduras.");
		next;
		mes("[Alquimista]\n A maioria das armaduras vendidas em lojas na cidade não possuem slots.\n Isso quer dizer, que você só pode obter Armaduras Slotadas caçando monstros.");
		next;
		mes("[Alquimista]\n Ah, deixe-me dizer como colocar uma carta em um equipamento.\n Se quiser inserir uma carta na sua armadura equipadar, você primeiro deve desequipá-la.\n E então, clicar duas vezes na carda que deseja usar.\n Então uma lista de armaduras, que você pode inserir cartas, vai aparecer.");
		next;
		mes("[Alquimista]\n Não é tão complicado, é?");
		close;
		case 4:
		mes("[Alquimista]\n Você não pode falar sobre Alquimia de Rune-Midgard sem falar sobre a Guilda dos Alquimistas de Al De Baran!\n Vida Longa aos Alquimistas!");
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,86,228,4	script	Criança#alde	1_M_SIZ,{
	mes("[Criança]\n Um tempo atrás quando eu sai para uma caminhada em direção ao Mt. Mjolnir com meu Bebê Selvagem chamado NukNuk, nós fomos atacados, felizmente não fomos feridos.");
	next;
	switch(select("Atacados?", "Sobre Mt.Mjolnir", "Finalizar Conversa")) {
		case 1:
		mes("[Criança]\n Eu estava andando por um caminho estreiro e de repente, uma planta grande e feia começou a nos atacar!");
		next;
		mes("[Criança]\n Fiquei tão assustado, começamos a correr.\n Eu joguei pedras nela, mas acho que não a machuquei.");
		next;
		mes("[Criança]\n O que realmente me surpreendeu foi que a planta que me atacou era uma planta gigante com o rosto de uma pessoa!\m Então tome cuidado com essas, elas são perigosas!");
		close;
		case 2:
		mes("[Criança]\n Apesar de que as pessoas são fascinadas pela beleza do Mt. Mjolnir, lá está cheio de monstros perigosos!");
		next;
		mes("[Criança]\n Existem flores, insetos, abelhas, borboletas e mariposas que são grandes o suficiente para matar você se você não for cuidadoso!");
		next;
		mes("[Criança]\n Então de novo, a maioria desses monstros não vai machucar você se você não atacá-los primeiro.\n Mas alguns deles vão atacar você uma vez que eles verem você!");
		close;
		case 3:
		mes("[Criança]\n A propósito, onde está NukNuk...?\n NukNuk! Venha aqui!");
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,159,242,4	script	Estudioso#alde	2_M_SWORDMASTER,{
	mes("[Estudioso]\n Até para um forte Espadachim, os insetos no Mt. Mjolnir podem ser considerados ameaças.\n Você deve conhecer seu inimigo antes de começar uma batalha!");
	next;
	if (select("Sobre Insetos", "Finalizar Conversa") == 1) {
		mes("[Estudioso]\n Abelhas, Borboletas e Mariposas parecem criaturas simples.\n Mas isso não significa que você pode subestimá-las.");
		next;
		mes("[Estudioso]\n Esses insetos evoluiram através dos tempos, e podem contra-atacar ameaças como vocês Aventureiros!");
		next;
		mes("[Estudioso]\n Também existem Insetos carnívoros, como Aranhas, Louva-a-Deus, e Argiopes.");
		next;
		mes("[Estudioso]\n Esses monstros sofreram mutações e são muito fortes para pessoas em certos níveis.\n Você deve tomar cuidado com Argiopes principalmente.");
		next;
		mes("[Estudioso]\n Felizmente, a visão deles é muito ruim, então eles não vão notar você se você andar a uma distância segura deles.");
		close;
	}
	mes("[Estudioso]\n Não importa quanto inofensivo e bonito os insetos são, tenha cautela ao tocar neles.\n Eles são extremamente fortes ao contrário da sua aparência inocente.\n Não desmereça os seres do Mt. Mjolnit.");
	close;
}

// ------------------------------------------------------------------
aldebaran,60,70,4	script	Senhorita#alde	1_F_04,{
	mes("[Senhorita]\n Eu vim aqui de Prontera poque eu ouvi falar que o Escritório Principal Kafra é em algum lugar aqui em Al De Baran.");
	next;
	mes("[Senhorita]\n Não deve ser difícil achar, mas eu sou horrível com direções.\n Eu sempre me perco, não importa como!");
	next;
	mes("[Senhorita]\n Se isso não fosse ruim o suficiente, eu ainda deixei minhas Lupas em Prontera.\n Agora eu preciso achar alguém para me ajudar com essas armas que tenho que identificar!");
	next;
	if (select("Identificar?", "Isso é bom.") == 1) {
		mes("[Senhorita]\n Equipamentos que são soltos por monstros não podem ser equipados imediatamente.");
		next;
		mes("[Senhorita]\n Se você clicar com o botão direito no item equipável, você vai ver que é necessário identificar o item.\n O que fazer?");
		next;
		mes("[Senhorita]\n Bom, nesse caso, você tem que usar uma ^3355FFLupa^000000!");
		next;
		mes("[Senhorita]\n Mesmo sem um Ferreiro, Alquimista ou Mercador no seu grupo, você pode identificar seu equipamento!\n Claro que uma Lupa é consumida cada vez que você usa...");
		close;
	}
	mes("[Senhorita]\n Hey...\n Isso foi um tom de sarcasmo na sua voz quando você falou?");
	close;
}

// ------------------------------------------------------------------
aldebaran,93,80,4	script	Jovem#alde	1_M_02,{
	mes("[Jovem]\n Al De Baran é um lugar maravilhoso com seus canais românticos e sua arquitetura clássica.\n Eu amo passear pela cidade com minha linda namorada.");
	next;
	if (select("Você tem uma Namorada?", "Finalizar Conversa.") == 1) {
		mes("[Jovem]\n Ei...\n É tão difícil de acreditar?!\n Pergunte pra qualquer um!\n Ela existe!\n Apesar de, algumas vezes, ela fica muita animada com armas e armaduras.");
		next;
		mes("[Jovem]\n Quero dizer, ao invés de aproveitar um jantar romântico, ela começa a falar sobre como equipamentos soltos por monstros têm mais qualidade que aqueles vendidos em lojas...");
		next;
		mes("[Jovem]\n Por que devo me preocupar se equipamentos soltos por monstros tendem a ter mais slots?!\n Eu nem consigo matar um Poring!");
		next;
		mes("[Jovem]\n Como você poder ver...\n Eu sou um amante, não um lutador.");
		close;
	}
	mes("[Jovem]\n Então, não me ache estúpido, ok?");
	close;
}

// ------------------------------------------------------------------
aldebaran,180,46,4	script	Joo Jahk#alde	4_M_ORIENT01,{
	mes("[Joo Jahk]\n, Eu sou um turista de Payon a Cidade na Floresta.");
	next;
	mes("[Joo Jahk]\n A temperatura aqui em Al De Baran é bem fresca, provavelmente por causa dos canais.\n Você acha que podemos beber?");
	next;
	mes("[Joo Jahk]\n Bem, já é tarde para perguntar, eu já bebi um pouco.\n Ainda sim, Eu estou um pouco preocupado...");
	next;
	if (select("Continar", "Finalizar Conversa") == 1) {
		mes("[Joo Jahk]\n Em uma das minhas viagens por Rune-Midgard.\n Ouvi de um Mago muito poderoso que ataques físicos ou magias de propriedade neutra não funcionam contra monstros da propriedade Fantasma.");
		next;
		mes("[Joo Jahk]\n Talvez esse conselho seja útil agora que você sabe.\n Sempre se lembre da importância das propriedades de suas Habilidades ou Armas, quando estiver lutando contra monstros.");
		close;
	}
	mes("[Joo Jahk]\n Por outro lado, a água que tomei era muito boa.\n Espero que não tivesse nada muito estranho dentro...");
	close;
}

// ------------------------------------------------------------------
aldebaran,212,122,4	script	Cidadão#alde	4W_M_01,{
	mes("[Gavin]\n Bem-vind"+ (Sex == SEX_MALE ? "o" : "a")+"!\n A Cidade de Al De Baran dá as boas vindas a você!");
next;
mes("[Gavin]\n Bem, pode ser exagero.\n Afinal, sou apenas eu que estou dando as boas vindas a você.");
next;
if (select("Agora, me fale sobre monstros", "Finalizar Conversa.") == 1) {
	mes("[Gavin]\n Monstros...?\n Não estamos saindo do tema um pouco?\n Ah, você deve ser um daqueles aventureiros!");
	next;
	mes("[Gavin]\n Não consegue tirar a cabeça do trabalho, é?\n Certo, existe um monstro que eu vi recentemente...");
	next;
	mes("[Gavin]\n Ah, lembrei!\n Apenas a alguns dias, vi um monstro muito interessante!\n Era um Poring com asas de anjo!");
	next;
	mes("[Gavin]\n Eu juro!\n Ele estava pulando em volta de algum lugar perto do Mt. Mjolnir com alguns Porings.\n Eu acho que ele era o líder deles, algo do tipo.");
	close;
}
mes("[Gavin]\n Awww...\n Não fique desapontado só porque eu sou a única pessoa a te receber!");
close;
}

// ------------------------------------------------------------------
aldebaran,146,124,4	script	Menina#alde	4W_F_01,{
	mes("[Nastasia]\n Em algum lugar do mundo existe uma ^3355FFGuilda dos Mercenários^000000, onde eles ensinam pessoas a sutil arte do assassinato.");
	next;
	mes("[Nastasia]\n Mas matar não é ilegal?\n E eles ainda chamam aquilo de instutuição de ensino?");
	next;
	if (select("Continuar conversa", "Finalizar Conversa") == 1) {
		mes("[Nastasia]\n Apesar de Assassinos se beneficiarem por serem muito rápidos e ter muita AGI.\n Eles ainda devem ter muita DES.");
		next;
		mes("[Nastasia]\n DES é especialmente importante se você quiser atacar monstros voadores.\n Aqueles monstros são rápidos ao se mover e ao atacar.");
		next;
		mes("[Nastasia]\n Em geral, se você quiser atacar monstros que são mais rápidos, você vai precisar de DES.");
		close;
	}
	mes("[Nastasia]\n Normalmente se diz que nesse mundo, nada é de graça.\n Ainda sim, se você não tiver que pagar para aprender a se tornar um Mercenário...");
	close;
}

// ------------------------------------------------------------------
aldebaran,143,136,4	script	Sineiro#alde	4_M_ORIENT02,{
	mes("[Sineiro]\n Eu fui ordenado pelo Comitê do 'Céu na Terra' a guardar esse entrada da Torre do Relógio.");
	next;
	if (select("Sobre Torre do Relógio", "Sair") == 1) {
		mes("[Sineiro]\n Cada andar dessa torre é conectado ao outro por um dispositivo que chamamos de 'Engrenagem de Portais.'");
		next;
		mes("[Sineiro]\n Apesar de exitir portais se conectando por todo o lugar na Torre do Relógio, cuidado com 'Portais Sem Rumo.'");
		next;
		mes("[Sineiro]\n Os 'Portais Sem Rumo' vão transportar você para um lugar desconhecido do mapa.\n Esteja atento se não quiser se separar do seu grupo..");
		next;
		mes("[Sineiro]\n Lembre-se, 'Portais Sem Rumo' serão mostrados em verde no mini-mapa.\n Então fique com seus olhos abertos, bem como para aqueles perigosos Relógios.");
		close;
	}
	mes("[Sineiro]\n Tome cuidado com essa Torre, ela está repleta de monstros perigosos.");
	close;
}

// ------------------------------------------------------------------
// - [Casas] -
// ------------------------------------------------------------------
aldeba_in,232,241,4	script	RS125#alde	1_M_02,{
	mes("[RS125]\n Eu posso soar muito robótico.\n Mas, eu espero que você não tenha medo de mim.\n Eu sou tão humano quanto você.");
	next;
	mes("[RS125]\n Eu posso ter um coração mecânico e posso incomodar você com barulhos vindos dele.\n Isso nunca vai me impedir de correr pelo Futuro de Al De Baran.");
	next;
	if (select("Ouvir a História", "Finalizar Conversa") == 1) {
		mes("[RS125]\n Já faz 3 anos.\n Meu irmão 996 costumava ser um atleta de metros rasos no time de Al De Baran.\n Naquela época, as pessoas deram um apelido a ele:\n O Peco Peco de Al De Baran', por suas pernas incrivelmente rápidas...");
		next;
		mes("[RS125]\n Ele se tornou tão popular por suas corridas.\n Que toda vez que a 'Turbo Track' acontecia de 4 em 4 anos.\n Muitas pessoas de todo o continente viam a essa cidade apenas para ver meu irmão.\n Eu era o empresário dele na época, eu me estressava muito por causa dos Fãs.");
		next;
		mes("[RS125]\n Mas, nada é para sempre...\n Um dia, uma garota de Payon ganhou do meu irmão numa corrida.");
		next;
		mes("[RS125]\n Meu irmão não aceitava o fato de que tinha perdido então ele treinou muito e teve uma séria parada cardíaca.\n Ele ainda está de cama.");
		next;
		mes("[RS125]\n Eu sou a única esperança do meu irmão e do Futuro de Al De Baran!\n Me deseje sorte, eu vou ganhar dela, 'Breezy Havana' de Payon!");
		close;
	}
	mes("[RS125]\n Eu quero viajar pelo mundo em um dia dessess.\n Se eu puder ver o oceano do porto de Alberta, deve ser tão maravilhoso.\n Depois da próxima competição, Eu vou com meu irmão em um tour ao redor do mundo.");
	close;
}

// ------------------------------------------------------------------
aldeba_in,223,121,4	script	Homem Ameaçador#alde	1_M_SMITH,{
	mes("[Homem Ameaçador]\n Ei, não se deve entrar na casa de alguem sem permissão.\n Isso é ridiculo!\n Como ousa entrar na minha casa e falar comigo como se fosse uma coisa normal?");
	next;
	mes("[Homem Ameaçador]\n Hahahaha...\n Eu apenas estava brincando.");
	next;
	if (select("Continuar", "Terminar Conversa") == 1) {
		mes("[Homem Ameaçador]\n Você já deve saber disso, mas nós temos um sistema chamado 'O Sistema de Assistentes'.\n Sim, Eu sou um Soldado Assistente.");
		next;
		mes("[Homem Ameaçador]\n É simples, você paga para alguém o ajudar na batalha.\n Se quiser Soldados Assistentes melhores você deve pagar mais, sabe?");
		next;
		mes("[Homem Ameaçador]\n Vamos parar de falar coisas chatas.\n Eu vou te ensinar como escolher um bom Assistente.");
		next;
		mes("[Homem Ameaçador]\n Cheque o nariz, veja se está limpo e úmido.\n Um bom Assistente deve ter o nariz úmido.\n Isso mostra que o Assistente está em suas melhores condições.\n Se o nariz está seco, significa que ele pegou um resfriado.");
		next;
		mes("[Homem Ameaçador]\n E não esqueça de checar o tornozelo.\n Os melhores assistentes têm o tornozelo magro e pescoço branco!\n Se ele tiver cabelo comprido, é melhor!\n Se ele tiver cabelo encaracolado, é perfeito!");
		next;
		mes("[Homem Ameaçador]\n Por último, você deve checar se ele está pronto para servir você!\n Quero dizer, ele deve fazer o melhor ao ajudar você numa luta!");
		close;
	}
	mes("[Homem Ameaçador]\n Saia daqui, agora!\n Se você é um policial, me mostre um mandato, se você é da família, prove com sua marca de nascença!");
	close;
}

// ------------------------------------------------------------------
aldeba_in,219,61,4	script	Homem Amigável#alde	4_M_MANAGER,{
	mes("[Homem Amigável]\n Você não precisa escutar o cara ao lado do meu quarto.\n Dois anos atrás, ele estava num centro de treinamento de Assistentes quando ele caiu de uma árvore tentando pegar uma noz.");
	next;
	mes("[Homem Amigável]\n Agora ele continua falanto alto para si.\n Isso me dar dor de cabeça...\n Meu Deus!");
	close;
}

// ------------------------------------------------------------------
aldeba_in,152,47,4	script	Homem Inquieto#alde	4W_M_01,{
	mes("[Homem Inquieto]\n Aaaaarrrggghhh...ESTOU COM PROBLEMAS!\n Minha pequena galinha me deixou!");
	next;
	if (select("Como você chama ela?", ". . . . .") == 1) {
		mes("[Homem Inquieto]\n Eu costumava chamar de 'Incrível Picky'...\n O que eu faço!\n Como isso aconteceu comigo!\n Por favor, me ajude a encontrar miha pequena picky!");
		next;
		if (select("O quê? Que nome ridículo!", ". . . . .") == 1) {
			mes("[Homem Inquieto]\n Não seja ridículo!\n \"Incrível Picky\" é o melhor e mais exclusivo nome nesse mundo, e minha galinha merece ele!");
			close;
		}
		mes("[Homem Inquieto]\n Você não se importa, não é?\n Eu sou filho único, então eu sempre pensei nela como uma irmã!\n Eu quero ela de volta...");
		close;
	}
	mes("[Homem Inquieto]\n Você não se importa, não é?\n Eu sou filho único, então eu sempre pensei nela como uma irmã!\n Eu quero ela de volta...");
	close;
}

// ------------------------------------------------------------------
aldeba_in,156,179,4	script	Gerente do Bar#alde	1_M_PUBMASTER,{
	mes("[Gerente do Bar]\n A Sede da Corporação Kafra está localizada aqui em Al De Baran.\n Sabe o que isso significa?");
	next;
	mes("[Gerente do Bar]\n Isso significa que aquelas lindas funcionárias vêm aqui para almoçar, não é maravilhoso?!");
	next;
	if (Sex == SEX_FEMALE) {
		mes("[Gerente do Bar]\n Ah, não se preocupe.\n Eu sei que as meninas têm alguma opinião sobre as outras meninas.\n Mas quero saber a opinião dos garotos.");
		close;
	} else {
		mes("[Gerente do Bar]\n Muito bem!\n Está na hora das perguntas!\n Qual sua Kafra favorita?");
		next;
		if (select("Impressionante!", "Eu não sou pevertido") == 1) {
			mes("[Gerente do Bar]\n Muito bem, aqui vamos nós!\n Escolha a sua Fafra favorita!");
			next;
			mes("[Gerente do Bar]\n A Kafra original, com seus lindos cabelos azuis!\n Candidata número um: ^3355FFDenise^000000!\n Ela é graciosa, usa o cabelo com rabo-de-cavalo, tira o fôlego dos homens.\n E é a favorita entre os adolescentes!");
			next;
			mes("[Gerente do Bar]\n Candidata número dois: ^5533FFTatiana^000000!\n Seus cabelos longos e lisos, é o ponto do seu charme.\n Ela veio de Payon.");
			next;
			mes("[Gerente do Bar]\n Candidata número três: ^555555Marianne^000000!\n Ela tem um jeito sorridente, cabelo curto cor alaranjado.");
			next;
			mes("[Gerente do Bar]\n Candidata número quatro: ^1133DDBianca^000000!\n Inteligente, sofisticada e nunca vista sem seus óculos luxuosos.");
			next;
			mes("[Gerente do Bar]\n Candidata número cinco: ^33FF55Sofia^000000!\n Linda, fofa e novata.\n Ela parece jovem e imatura, mas é a melhor da equipe!\n Candidata número seis ^AAAA00Deborah^000000!!");
			next;
			switch(select("Denise", "Tatiana", "Marianne", "Bianca", "Sofia", "Deborah")) {
				case 1:
				mes("[Gerente do Bar]\n Oh!\n Então você gosta das clássicas né!\n Eu respeito isso.");
				next;
				mes("[Gerente do Bar]\n Eu suponho que você gosta de filmes originais.\n Não gosta de se beneficiar com más imitações.\n Estou certo?");
				close;
				case 2:
				mes("[Gerente do Bar]\n Humm...\n Tatiana, Parece-me que esta garota está atraindo muitos por aí, hein?");
				close;
				case 3:
				mes("[Gerente do Bar]\n Então...\n Cabelos compridos e luxuosos é importante para você, hein?\n Suponho que esse tipo de cabelo dá as mulheres um olhar elegante.");
				close;
				case 4:
				mes("[Gerente do Bar]\n Ah, então você gosta das agitadas, e espontâneas.\n Eu entendo perfeitamente...");
				next;
				mes("[Gerente do Bar]\n Bianca não é exatamente o tipo dona de casa.\n Você provavelmente tem a mente aberta quando se trata de definir feminilidade, certo?");
				close;
				case 5:
				mes("[Gerente do Bar]\n Ah, então você gosta do tipo intelectual.\n Isso é bom, isso é bom.");
				next;
				mes("[Gerente do Bar]\n Bem, Sofia pode ser fria como uma pedra às vezes.\n Mas eu já vi ela balançando o coração de muitos por ai!");
				close;
				case 6:
				mes("[Gerente do Bar]\n Massss o que?!\n Ela é jovem demais!");
				close;
			}
		}
		mes("[Gerente do Bar]\n Mas eu trabalhei duro nessas perguntas!\n Leve na esportiva!\n Admirar uma bela mulher é como apreciar uma arte.");
		close;
	}
}

// ------------------------------------------------------------------
aldeba_in,83,245,4	script	Tatiana#alde	4_F_KAFRA2,{
	cutin("kafra_02", 2);
	mes("[Kafra Tatiana]\n Bem-vind"(Sex == SEX_MALE ? "o" : "a")" a Corporação Kafra.\n As Funcionárias Kafras estarão sempre aqui para servir você.");
	next;
	mes("[Kafra Tatiana]\n Nós apreciamos o seu contínuo uso do Serviço Kafra.\n Por favor se sinta livre para perguntar se tiver alguma dúvida.");
	next;
	switch(select("Como o Armazém Kafra funciona?", "Como você teletransporta as pessoas?")) {
		case 1:
		mes("[Kafra Tatiana]\n Bom, Aventureiros como você pode colocar itens no Armazém Kafra, assim você não vai precisar ficar levando todas as suas coisas.");
		next;
		mes("[Kafra Tatiana]\n A janela do Armazém Kafra é separada em 3 abas onde os itens são separados automaticamente.");
		next;
		mes("[Kafra Tatiana]\n As ^3355FFItem^000000, ^3355FFEquip^000000, e ^3355FFEtc^000000 abas funcionam do mesmo jeito que as abas no inventário dos itens.");
		next;
		mes("[Kafra Tatiana]\n Múltiplos itens do mesmo tipo vão apenas ocupar um Slot em Item ou em Etc.\n Por exemplo, 324 Jellopies vão apenas ocupar um Slot, e 22 Poções Vermelhas vão ocupar outro Slot.");
		next;
		mes("[Kafra Tatiana]\n Mas, na aba Equip, cada equipamento ocupa seu próprio Slot.\n Eu acho que é porque cada equipamento pode ser aprimorado com cartas ou refinamento.");
		next;
		mes("[Kafra Tatiana]\n Exite um total de 300 Slots para todas as categorias de itens no Armazém Kafra, é bom se lembrar disso.");
		close;
		case 2:
		mes("[Kafra Tatiana]\n Oh, todos me fazem essa pergunta.\n '^CC0066Oh Tatiana, como você faz isso?^000000'\n Bem...");
		next;
		mes("[Kafra Tatiana]\n Eu não posso entrar em muito detalhes, claro.\n Isso é informação confidencial.\n Mas eu posso dizer que nosso teletransporte funciona com uma mistura de mágica e tecnologia.");
		next;
		mes("[Kafra Tatiana]\n Também, as Funcionárias Kafras sozinhas não podem teletransportar os clientes.\n Nós apenas recebemos e processamos seu pedido de Teletransporte.");
		next;
		mes("[Kafra Tatiana]\n Atrás dos panos, profissionais habilidosos estão trabalhando 24 horas por dia para assegurar que você chegue rápido e seguro no seu destido.");
		close;
	}
	mes("[Kafra Tatiana]\n Em todo caso, espero que você goste da visita à Sede da Corporação Kafra.");
	close2;
	cutin("", 255);
	end;
}

// ------------------------------------------------------------------
aldeba_in,24,245,4	script	Marianne#alde	4_F_KAFRA3,{
	cutin("kafra_03", 2);
	mes("[Kafra Marianne]\n Bem-vind"(Sex == SEX_MALE ? "o" : "a")"!\n O Serviço Kafra está sempre ao seu lado.");
	next;
	mes("[Kafra Marianne]\n Obrigada por vir nos visitar na Sede da Corporação Kafra aqui em Al De Baran!");
	next;
	mes("[Kafra Marianne]\n O Serviço Kafra tem uma reputação com os clientes que foi formada por mais de cinco mil e oitocentos anos...");
	next;
	switch(select("O quê?! Não acredito!", "Ahh Cale a boca!", "Seus Serviços são ótimos!")) {
		case 1:
		mes("[" + strcharinfo(PC_NAME) + "]\n O quê?!\n Não acredito nisso!");
		next;
		mes("[" + strcharinfo(PC_NAME) + "]\n CINCO MIL E OITOCENTOS ANOS?! VOCÊ ESTÁ LOUCA?!");
		next;
		mes("[Kafra Marianne]\n Eu levei uma semana para memorizar tudo isso!\n Minha memória não é tão boa quanto a das outras Funcionárias Kafra...!");
		next;
		mes("[Kafra Marianne]\n Agora, err...\n Como eu estava dizendo, a Corporação Kafra foi fundada há oito mil e quinhentos anos atrás por Emilio Alexander Kafra... Criador da Palavra 'Kafra?'");
		next;
		mes("[Kafra Marianne]\n Ele...\n Ele era um bom homem.\n Ele... Grr!\n Não consigo lembrar!");
		next;
		mes("[Kafra Marianne]\n Ah não...!\n Essa não pode ser a história certa!\n Cinco mil e oitocentos...?!\n É impossivel!");
		close;
		case 2:
		mes("[Kafra Marianne]\n Escuta...\n Cara.");
		next;
		mes("[Kafra Marianne]\n Eu era uma membra das Tropas Kafra antes de entrar no Time do Serviço Kafra.\n Minha especialidade era ^990000Impacto Explosivo^000000, então se você sabe o que é bom para você.\n Não mexa comigo.");
		next;
		mes("[Kafra Marianne]\n Eu tento ao máximo viver tão feminina e quieta que eu puder.\n Então não me faça quebrar seus ossos!\n Entendeu?!");
		close;
		case 3:
		mes("[Kafra Marianne]\n Oraa!\n Boas notícias para ouvir.\n Nós sempre estamos trabalhando duro para satisfazer nossos clientes com os serviços que nós oferecemos.");
		close;
	}
	close2;
	cutin("", 255);
	end;
}

// ------------------------------------------------------------------
aldeba_in,142,238,4	script	Bianca#alde	4_F_KAFRA4,{
	cutin("kafra_04", 2);
	mes("[Kafra Bianca]\n Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!\n A Corporação Kafra sempre ajudará os aventureiros de Rune-Midgard com os nossos excelentes serviços.");
	next;
	mes("[Kafra Bianca]\n Meu nome é Bianca!\n Eu espero que você goste da sua visita a Sede da Corporação Kafra.");
	next;
	mes("[Kafra Bianca]\n Estou aqui para responder qualquer uma das suas dúvidas em relação a Política da Corporação Kafra, assim como registrar qualquer opinião.");
	next;
	switch(select("Política Kafra", "Eu amo a Kafra!")) {
		case 1:
		mes("[Kafra Bianca]\n Então, você gostaria de mais detalhes sobre nossa política e a elegibilidade dos nossos serviços?\n O que você gostaria de saber mais sobre?");
		next;
		switch(select("Armazém Kafra", "Aluguel de Carrinho", "Na verdade, nem importa")) {
			case 1:
			mes("[Kafra Bianca]\n Como você já sabe, nossos clientes devem ter pelo menos nível 6 em Habilidades Básicas para poder usar o Armazém Kafra.");
			next;
			mes("[Kafra Bianca]\n A razão para essa política é que nós tivemos problemas com jovens Aprendizes, que colocariam tudo o quê tem dentro do Armazém.");
			next;
			mes("[Kafra Bianca]\n Lembre-se dos dias de Aprendiz.\n Tudo era novo e excitante, mas o zeny era escasso.\n Bem, muitos Aprendizes colocariam até mesmo suas armas e armaduras no Armazém.");
			next;
			mes("[Kafra Bianca]\n Mas, nessa altura, eles já gastaram aquele pouco zeny que tinham para abrir o Armazém.\n E então eles não vão ter dinheiro para acessar de novo!");
			next;
			mes("[Kafra Bianca]\n Então, esse Aprendiz sem arma e sem armadura vai lutar contra monstros até conseguir zeny suficiente para abrir o Armazém de novo!");
			next;
			mes("[Kafra Bianca]\n É um pequeno erro, na verdade, nós aqui da Corporação Kafra valorizamos a vida humana.\n Então decidimos que nível 6 em Habilidades Básicas é um requerimento para prevenir esse tipo de problema.");
			close2;
			cutin("", 255);
			end;
			case 2:
			mes("[Kafra Bianca]\n Como você sabe, a Corporação Kafra tem uma relação especial com a Guilda dos Mercadores.\n Assim como a Guilda dos Ferreiros e dos Alquimistas.");
			next;
			mes("[Kafra Bianca]\n A Corporação Kafra apenas aluga Carrinhos para Mercadores, Ferreiros e Alquimistas.\n Já que essas classes têm um contrato especial conosco.");
			next;
			mes("[Kafra Bianca]\n Mas também, não teria sentido vender carrinhos para pessoas que não possam vender mercadorias.");
			next;
			mes("[Kafra Bianca]\n Para os Super Aprendizes, bem, não devemos alugar carrinhos para eles já que a Sociedade dos Super Aprendizes não tem contrato conosco.");
			next;
			mes("[Kafra Bianca]\n Se uma Funcionária Kafra alugar um carro para um Super Aprendiz, ela provavelmente vai arrumar problemas com Leilah...");
			close2;
			cutin("", 255);
			end;
			case 3:
			mes("[Kafra Bianca]\n Oh, Ok!\n Se tiver qualquer pergunta, por favor me diga!");
			close2;
			cutin("", 255);
			end;
		}
		case 2:
		mes("[Kafra Bianca]\n Obrigada!\n É sempre bom saber que somos apreciadas por nossos clientes!\n Todas nós trabalhamos duro para assegurar que o nosso serviço esteja ao seus padrões de excelência.");
		close2;
		cutin("", 255);
		end;
	}
}

// ------------------------------------------------------------------
aldeba_in,91,244,4	script	Deborah#alde	4_F_KAFRA6,{
	cutin("kafra_06", 2);
	mes("[Kafra Deborah]\n Olá, Olá!!\n Eu sou Deborah, a mais nova membra das Funcionárias Kafra!");
	next;
	mes("[Kafra Deborah]\n Eu posso ainda precisar aprender mais sobre como servir nossos clientes.\n Mas eu estou sempre me esforçando!");
	next;
	if (select("Cadê sua mãe, criança?", "Finalizar Conversa.") == 1) {
		mes("[Kafra Deborah]\n Waaaaaaah!\n Eu não sou uma criança!");
		close2;
		cutin("", 255);
		end;
	}
	mes("[Kafra Deborah]\n Aqui na Corporação Kafra, nós estamos sempre fazendo o melhor para oferecer o excelente serviço que você espera de nós.");
	close2;
	cutin("", 255);
	end;
}
