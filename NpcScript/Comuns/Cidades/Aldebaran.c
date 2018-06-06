/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na cidade Al de Baran                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
aldebaran,113,70,4	script	Ferreiro Munster#alde	1_M_02,{
	mes "[Munster]";
	mes "Minha fam�lia morava em Geffen.";
	mes "Ent�o eu acho que era natural que estud�ssemos forja, e eventualmente nos torn�ssemos Ferreiros.";
	mes "Ent�o, finalmente nos mudamos para essa cidade, Al De Baran.";
	next;
	if (select("^3355FFRefinamento de Itens^000000","Cancelar") == 1) {
		mes "[Munster]";
		mes "Meu pai era um Ferreiro famoso em Geffen.";
		mes "Ele me ensinou muito sobre forjar equipamentos.";
		next;
		mes "[Munster]";
		mes "Uma das coisas fundamentais � que a probabilidade de sucesso ao refinar um item depende do n�vel da arma.";
		next;
		mes "[Munster]";
		mes "Para armas de n�vel 1, voc� pode refinar at� +7 sem correr o risco de quebr�-la.";
		mes "Armas de n�vel 2 podem ser refinadas at� +6, enquanto as de n�vel 3 podem ser refinadas at� +5 sem correr risco.";
		next;
		mes "[Munster]";
		mes "Para armas de n�vel 4, voc� pode refinar at� +4 sem muito risco.";
		mes "Para armaduras, voc� pode refinar at� +4.";
		mes "Se o processo falhar, o equipamento ser� destruido!";
		close;
	}
	mes "[Munster]";
	mes "Hmm...";
	mes "Se puder, tente visitar a oficina do meu pai aqui em Al de Baran.";
	mes "Se me permite dizer, ele � um Ferreiro muito talentoso.";
	close;
}

// ------------------------------------------------------------------
aldebaran,64,104,4	script	Sr. Quattro#alde	1_M_JOBTESTER,{
	mes "[Quatro]";
	mes "Voc� ouviu falar que aquele Ferreiro famoso se mudou de Geffen para c�?";
	next;
	if (select("Ferreiro Famoso?","Encerrar Conversa") == 1) {
		mes "[Quatro]";
		mes "Pelo o que eu ouvi, ele � um daqueles Ferreiros que consegue refinar armas e armaduras.";
		mes "Quando uma arma � refinada o seu ataque � aumentado.";
		next;
		mes "[Quatro]";
		mes "Para cada n�vel de refinamento, a for�a de ataque � aumentada em 2 para armas de n�vel 1.";
		mes "Para armas de n�vel 2, a for�a de ataque aumenta em 3.";
		next;
		mes "[Quatro]";
		mes "Para armas de n�vel 3, s�o adicionados 5 na for�a de ataque para cada n�vel de refinamento.";
		mes "Para armas n�vel 4, s�o adicionados 7 na for�a de ataque.";
		close;
	}
	mes "[Quatro]";
	mes "Essa fam�lia de ferreiros vive aqui desde que a sua esposa ficou doente e fraca.";
	mes "Por causa dessa doen�a, ela precisa de ervas medicinais que crescem perto de Al De Baran.";
	next;
	mes "[Quatro]";
	mes "Eles tamb�m t�m um filho prestativo que est� sempre ajudando nos n�gocios da fam�lia.";
	mes "Tenho certeza que o menino vai se tornar um bom Ferreiro, assim como o Pai.";
	close;
}

// ------------------------------------------------------------------
aldebaran,49,93,4	script	Miguel#alde	4_M_01,{
	mes "[Miguel]";
	mes "As armas de n�vel 4 n�o s�o legais?!";
	mes "Eu n�o consigo acreditar como armas t�o poderosas existem!";
	next;
	mes "[Miguel]";
	mes "Bem, elas raramente s�o vistas no mercado.";
	mes "Mas Monstros Chefes t�m uma chance pequena de derrubar elas se voc� for capaz de matar um.";
	close;
}

// ------------------------------------------------------------------
aldebaran,81,61,4	script	Catadora de Conchas#ald	4W_F_01,{
	mes "[Catadora]";
	mes "Eu gosto de colecionar conchas do mar.";
	mes "� muito relaxante e divertido.";
	next;
	if (select("Catar Conchas?","Finalizar Conversa") == 1) {
		mes "[Catadora]";
		mes "Quando voc� ver bolhas saindo da areia, ou de po�as de lama, tente cavar um pouco.";
		mes "Voc� provavelmente vai encontrar conchas enterradas!";
		next;
		mes "[Catadora]";
		mes "Voc� j� ouviu falar de Ambernite?";
		mes "Aquela concha monstro � bem dura.";
		next;
		mes "[Catadora]";
		mes "� normalmente vista na praia perto da prov�ncia � oeste de Prontera.";
		mes "Se voc� atacar uma sem estar preparado, voc� poder� estar em apuros.";
		next;
		mes "[Catadora]";
		mes "Ambernite � muito forte!";
		mes "Ent�o tome cuidado!";
		close;
	}
	mes "[Catadora]";
	mes "Ambernite � muito forte!";
	mes "Ent�o tome cuidado!";
	close;
}

// ------------------------------------------------------------------
aldebaran,46,129,4	script	Panama#alde	4W_M_01,{
	mes "[Panama]";
	mes "Al De Baran � conhecida mundialmente como a Cidade dos Canais.";
	mes "Os canais realmente d�o um toque sofisticado e rom�ntico a nossa cidade.";
	next;
	switch (select("Sobre os Canais","Finalizar Conversa")) {
		case 1:
		mes "[Panama]";
		mes "Bem, um canal � um lugar criado para a �gua passar normalmente usado para embarca��es, ou irriga��es.";
		next;
		mes "[Panama]";
		mes "Mas, os canais daqui s�o apenas para ver.";
		mes "Se n�s precisamos transportar alguma coisa.";
		mes "N�s apenas usar�amos o servi�o de teletransporte da Corpora��o Kafra!";
		close;
		case 2:
		mes "[Panama]";
		mes "Eu espero que voc� aprecie sua estadia em Al De Baran.";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,67,154,4	script	Montanhista#alde	4W_M_02,{
	mes "[Montanhista]";
	mes "Mt. Mjolnir e Floresta de Payon.";
	mes "Ambos s�o lugares dif�ceis de atravessar.";
	next;
	switch (select("Mt.Mjolnir?","Floresta Payon...?","Finalizar Conversa")) {
		case 1:
		mes "[Montanhista]";
		mes "Para chegar aqui vindo de Prontera ou Geffen, voc� tem que atravessar as Montanhas Mjolnir.";
		next;
		mes "[Montanhista]";
		mes "Se voc� veio at� aqui sem usar o servi�o de teletransporte da Corpora��o Kafra, bom trabalho!";
		next;
		mes "[Montanhista]";
		mes "As Montanhas Mjolnir s�o realmente �ngremes, e ela � cheia de monstros agressivos.";
		mes "Ent�o sempre � um risco tentar andar por l� sozinho.";
		close;
		case 2:
		mes "[Montanhista]";
		mes "Se voc� deseja visitar Alberta ou a cidade de Payon.";
		mes "Voc� deve primeiro atravessar a Floresta de Payon.";
		next;
		mes "[Montanhista]";
		mes "A Floresta de Payon � um labirinto tortuoso e complexo onde � facil se perder.";
		mes "Ao menos que se concentre no seu caminho, voc� poder� ficar preso naquele lugar perigoso.";
		next;
		mes "[Montanhista]";
		mes "Payon, a vila dos aqueiros, foi construida dentro dessa floresta para se proteger de invasores.";
		mes "Eu achei uma boa id�ia da parte deles.";
		close;
		case 3:
		mes "[Montanhista]";
		mes "As enormes montanhas cercando essa cidade impede que pessoas de fora venham para essa cidade.";
		mes "Talvez seja esse o motivo de termos sido capazes de manter esse canal bonito e limpo sem nenhuma influ�ncia de fora.";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,90,170,4	script	Edu#alde	1_M_01,{
	mes "[Edu]";
	mes "Algumas armas ou amaduras t�m slots onde voc� pode inserir cartas obtidas de monstros.";
	next;
	switch (select("Sobre o n�mero de slots","Rela��o entre cartas e slots","Finalizar a Conversa")) {
		case 1:
		mes "[Edu]";
		mes "Itens soltos por monstros possuem mais slots que armas ou armaduras comuns vendidas em Lojas de NPCs.";
		next;
		mes "[Edu]";
		mes "Eu acho que voc� pode deduzir que um item com mais Slots tem mais valor do que um mesmo item com menos slots.";
		close;
		case 2:
		mes "[Edu]";
		mes "Uma vez que uma carta � inserida num slot, � impossivel remov�-la.";
		mes "Ent�o tenha cuidado quando for inserir cartas em armas ou armaduras.";
		next;
		mes "[Edu]";
		mes "Al�m disso, quando voc� passar o mouse em cima de um equipamento na janela de itens, ou na janela de vendas.";
		mes "O nome do item ser� seguido do n�mero de slots que ele possui em colchetes.";
		next;
		mes "[Edu]";
		mes "Por exemplo, um escudo com 1 slot, quando o cursor passar por cima, vai aparecer o nome 'Escudo [1].'";
		next;
		mes "[Edu]";
		mes "Voc� tamb�m pode clicar com o bot�o direito no item, e checar a janela de slots embaixo da descri��o.";
		close;
		case 3:
		mes "[Edu]";
		mes "Voc� alguma vez j� conseguiu uma carta de um monstro?";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,117,181,4	script	Joy#alde	1_M_02,{
	mes "[Joy]";
	mes "Armas de n�vel 1, que s�os as mais fracas, precisa de um metal chamado ^3355FFFracon^000000 para serem refinadas.";
	next;
	switch (select("Sobre Fracon","Conselho sobre Fracon","Finalizar Conversa")) {
		case 1:
		mes "[Joy]";
		mes "Fracon � um metal muito comum, e pode ser encontrado por todo o continente de Rune-Midgard.";
		next;
		mes "[Joy]";
		mes "Apesar de n�o ter a for�a dos outros metais, � facil de obter.";
		mes "Voc� pode conseguir matando monstros ou comprando em Lojas na cidade.";
		next;
		mes "[Joy]";
		mes "Quando voc� estiver usando armas de alto n�vel, e n�o precisar mais deles, voc� pode vender por alguns zeny!";
		close;
		case 2:
		mes "[Joy]";
		mes "Bem, eu ouvi falar que muitos monstros carregam Fracons e derrubam eles quando mortos.";
		mes "Por que voc� n�o vai ca�a-los?";
		next;
		mes "[Joy]";
		mes "N�o deve ser muito dif�cil.";
		mes "Uma vez eu peguei um fracon depois de ter matado um Beb� Selvagem!";
		mes "Mas se voc� estiver desesperado, voc� sempre pode comprar na Loja de Forja.";
		close;
		case 3:
		mes "[Joy]";
		mes "Boa sorte em achar Fracons!";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,121,231,4	script	Alquimista#alde	1_M_03,{
	mes "[Alquimista]";
	mes "Alquimistas, uma das 2� classes, s�o capazes de criar itens de diversos materiais utilizando o conhecimento da antiga era de Al De Baran.";
	next;
	switch (select("Sobre Alquimia em Payon","Defini��o de Alquimia",". . . . .","Finalizar Conversa")) {
		case 1:
		mes "[Alquimista]";
		mes "A Maioria das pessoas n�o sabe que existia uma forma oriental de alquimia desenvolvida em Payon.";
		next;
		mes "[Alquimista]";
		mes "Os Alquimistas de Payon eram capazes de criar Ouro de diferentes tipos de materiais.";
		mes "Apesar de a alquimia de Payon nunca se desenvolveu tanto como em Al De Baran.";
		next;
		mes "[Alquimista]";
		mes "Os materiais para a Alquimia de payon eram escassos.";
		mes "Ent�o o interesse nesse campo eventualmente diminuiu.";
		mes "Agora, voc� apenas pode estudar Aqluimia aqui.";
		next;
		mes "[Alquimista]";
		mes "Ainda sim, Eu penso que aqueles segredos foram perdidos depois que a Alquimia de Payon desapareceu da face da terra...";
		close;
		case 2:
		mes "[Alquimista]";
		mes "Alquimistas se especializam em pesquisas qu�micas para criar itens �teis de v�rias outras coisas.";
		next;
		mes "[Alquimista]";
		mes "Eu tamb�m ouvi falar que eles podem criar v�rios tipos de Po��es, e at� podem sumonar alguns Monstros!";
		mes "Me parece que os estudos deles t�m v�rios tipos de aplica��es.";
		close;
		case 3:
		mes "[Alquimista]";
		mes "Voc� est� entediado, n�o �?";
		mes "Ok ent�o, Eu vou contar uma hist�ria sobre cartas de monstro e slots de itens.";
		mes "Como voc� j� deve saber, se j� conseguiu alguma uma carta antes...";
		next;
		mes "[Alquimista]";
		mes "Voc� apenas pode inserir cartas em um item que satisfa�a o local requerido pela carta.";
		mes "Por exemplo, vamos dizer que voc� obteve uma Carta Poring.";
		next;
		mes "[Alquimista]";
		mes "Quando voc� clicar com o bot�o direito na carta, voc� vai ver o b�nus como SOR+2 e Esquiva Perfeita+1 e o tipo como 'Armadura'.";
		next;
		mes "[Alquimista]";
		mes "Se voc� tentar inserir essa carta em uma adaga com v�rios slots, n�o vai funcionar porque a carta s� pode ser inserida em armaduras.";
		next;
		mes "[Alquimista]";
		mes "A maioria das armaduras vendidas em lojas na cidade n�o possuem slots.";
		mes "Isso quer dizer, que voc� s� pode obter Armaduras Slotadas ca�ando monstros.";
		next;
		mes "[Alquimista]";
		mes "Ah, deixe-me dizer como colocar uma carta em um equipamento.";
		mes "Se quiser inserir uma carta na sua armadura equipadar, voc� primeiro deve desequip�-la.";
		mes "E ent�o, clicar duas vezes na carda que deseja usar.";
		mes "Ent�o uma lista de armaduras, que voc� pode inserir cartas, vai aparecer.";
		next;
		mes "[Alquimista]";
		mes "N�o � t�o complicado, �?";
		close;
		case 4:
		mes "[Alquimista]";
		mes "Voc� n�o pode falar sobre Alquimia de Rune-Midgard sem falar sobre a Guilda dos Alquimistas de Al De Baran!";
		mes "Vida Longa aos Alquimistas!";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,86,228,4	script	Crian�a#alde	1_M_SIZ,{
	mes "[Crian�a]";
	mes "Um tempo atr�s quando eu sai para uma caminhada em dire��o ao Mt. Mjolnir com meu Beb� Selvagem chamado NukNuk, n�s fomos atacados, felizmente n�o fomos feridos.";
	next;
	switch (select("Atacados?","Sobre Mt.Mjolnir","Finalizar Conversa")) {
		case 1:
		mes "[Crian�a]";
		mes "Eu estava andando por um caminho estreiro e de repente, uma planta grande e feia come�ou a nos atacar!";
		next;
		mes "[Crian�a]";
		mes "Fiquei t�o assustado, come�amos a correr.";
		mes "Eu joguei pedras nela, mas acho que n�o a machuquei.";
		next;
		mes "[Crian�a]";
		mes "O que realmente me surpreendeu foi que a planta que me atacou era uma planta gigante com o rosto de uma pessoa!";
		mes "Ent�o tome cuidado com essas, elas s�o perigosas!";
		close;
		case 2:
		mes "[Crian�a]";
		mes "Apesar de que as pessoas s�o fascinadas pela beleza do Mt. Mjolnir, l� est� cheio de monstros perigosos!";
		next;
		mes "[Crian�a]";
		mes "Existem flores, insetos, abelhas, borboletas e mariposas que s�o grandes o suficiente para matar voc� se voc� n�o for cuidadoso!";
		next;
		mes "[Crian�a]";
		mes "Ent�o de novo, a maioria desses monstros n�o vai machucar voc� se voc� n�o atac�-los primeiro.";
		mes "Mas alguns deles v�o atacar voc� uma vez que eles verem voc�!";
		close;
		case 3:
		mes "[Crian�a]";
		mes "A prop�sito, onde est� NukNuk...?";
		mes "NukNuk! Venha aqui!";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,159,242,4	script	Estudioso#alde	2_M_SWORDMASTER,{
	mes "[Estudioso]";
	mes "At� para um forte Espadachim, os insetos no Mt. Mjolnir podem ser considerados amea�as.";
	mes "Voc� deve conhecer seu inimigo antes de come�ar uma batalha!";
	next;
	if (select("Sobre Insetos","Finalizar Conversa") == 1) {
		mes "[Estudioso]";
		mes "Abelhas, Borboletas e Mariposas parecem criaturas simples.";
		mes "Mas isso n�o significa que voc� pode subestim�-las.";
		next;
		mes "[Estudioso]";
		mes "Esses insetos evoluiram atrav�s dos tempos, e podem contra-atacar amea�as como voc�s Aventureiros!";
		next;
		mes "[Estudioso]";
		mes "Tamb�m existem Insetos carn�voros, como Aranhas, Louva-a-Deus, e Argiopes.";
		next;
		mes "[Estudioso]";
		mes "Esses monstros sofreram muta��es e s�o muito fortes para pessoas em certos n�veis.";
		mes "Voc� deve tomar cuidado com Argiopes principalmente.";
		next;
		mes "[Estudioso]";
		mes "Felizmente, a vis�o deles � muito ruim, ent�o eles n�o v�o notar voc� se voc� andar a uma dist�ncia segura deles.";
		close;
	}
	mes "[Estudioso]";
	mes "N�o importa quanto inofensivo e bonito os insetos s�o, tenha cautela ao tocar neles.";
	mes "Eles s�o extremamente fortes ao contr�rio da sua apar�ncia inocente.";
	mes "N�o desmere�a os seres do Mt. Mjolnit.";
	close;
}

// ------------------------------------------------------------------
aldebaran,60,70,4	script	Senhorita#alde	1_F_04,{
	mes "[Senhorita]";
	mes "Eu vim aqui de Prontera poque eu ouvi falar que o Escrit�rio Principal Kafra � em algum lugar aqui em Al De Baran.";
	next;
	mes "[Senhorita]";
	mes "N�o deve ser dif�cil achar, mas eu sou horr�vel com dire��es.";
	mes "Eu sempre me perco, n�o importa como!";
	next;
	mes "[Senhorita]";
	mes "Se isso n�o fosse ruim o suficiente, eu ainda deixei minhas Lupas em Prontera.";
	mes "Agora eu preciso achar algu�m para me ajudar com essas armas que tenho que identificar!";
	next;
	if (select("Identificar?","Isso � bom.") == 1) {
		mes "[Senhorita]";
		mes "Equipamentos que s�o soltos por monstros n�o podem ser equipados imediatamente.";
		next;
		mes "[Senhorita]";
		mes "Se voc� clicar com o bot�o direito no item equip�vel, voc� vai ver que � necess�rio identificar o item.";
		mes "O que fazer?";
		next;
		mes "[Senhorita]";
		mes "Bom, nesse caso, voc� tem que usar uma ^3355FFLupa^000000!";
		next;
		mes "[Senhorita]";
		mes "Mesmo sem um Ferreiro, Alquimista ou Mercador no seu grupo, voc� pode identificar seu equipamento!";
		mes "Claro que uma Lupa � consumida cada vez que voc� usa...";
		close;
	}
	mes "[Senhorita]";
	mes "Hey...";
	mes "Isso foi um tom de sarcasmo na sua voz quando voc� falou?";
	close;
}

// ------------------------------------------------------------------
aldebaran,93,80,4	script	Jovem#alde	1_M_02,{
	mes "[Jovem]";
	mes "Al De Baran � um lugar maravilhoso com seus canais rom�nticos e sua arquitetura cl�ssica.";
	mes "Eu amo passear pela cidade com minha linda namorada.";
	next;
	if (select("Voc� tem uma Namorada?","Finalizar Conversa.") == 1) {
		mes "[Jovem]";
		mes "Ei...";
		mes "� t�o dif�cil de acreditar?!";
		mes "Pergunte pra qualquer um!";
		mes "Ela existe!";
		mes "Apesar de, algumas vezes, ela fica muita animada com armas e armaduras.";
		next;
		mes "[Jovem]";
		mes "Quero dizer, ao inv�s de aproveitar um jantar rom�ntico, ela come�a a falar sobre como equipamentos soltos por monstros t�m mais qualidade que aqueles vendidos em lojas...";
		next;
		mes "[Jovem]";
		mes "Por que devo me preocupar se equipamentos soltos por monstros tendem a ter mais slots?!";
		mes "Eu nem consigo matar um Poring!";
		next;
		mes "[Jovem]";
		mes "Como voc� poder ver...";
		mes "Eu sou um amante, n�o um lutador.";
		close;
	}
	mes "[Jovem]";
	mes "Ent�o, n�o me ache est�pido, ok?";
	close;
}

// ------------------------------------------------------------------
aldebaran,180,46,4	script	Joo Jahk#alde	4_M_ORIENT01,{
	mes "[Joo Jahk]\n, Eu sou um turista de Payon a Cidade na Floresta.";
	next;
	mes "[Joo Jahk]";
	mes "A temperatura aqui em Al De Baran � bem fresca, provavelmente por causa dos canais.";
	mes "Voc� acha que podemos beber?";
	next;
	mes "[Joo Jahk]";
	mes "Bem, j� � tarde para perguntar, eu j� bebi um pouco.";
	mes "Ainda sim, Eu estou um pouco preocupado...";
	next;
	if (select("Continar","Finalizar Conversa") == 1) {
		mes "[Joo Jahk]";
		mes "Em uma das minhas viagens por Rune-Midgard.";
		mes "Ouvi de um Mago muito poderoso que ataques f�sicos ou magias de propriedade neutra n�o funcionam contra monstros da propriedade Fantasma.";
		next;
		mes "[Joo Jahk]";
		mes "Talvez esse conselho seja �til agora que voc� sabe.";
		mes "Sempre se lembre da import�ncia das propriedades de suas Habilidades ou Armas, quando estiver lutando contra monstros.";
		close;
	}
	mes "[Joo Jahk]";
	mes "Por outro lado, a �gua que tomei era muito boa.";
	mes "Espero que n�o tivesse nada muito estranho dentro...";
	close;
}

// ------------------------------------------------------------------
aldebaran,212,122,4	script	Cidad�o#alde	4W_M_01,{
	mes "[Gavin]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!";
	mes "A Cidade de Al De Baran d� as boas vindas a voc�!";
	next;
	mes "[Gavin]";
	mes "Bem, pode ser exagero.";
	mes "Afinal, sou apenas eu que estou dando as boas vindas a voc�.";
	next;
	if (select("Agora, me fale sobre monstros","Finalizar Conversa.") == 1) {
		mes "[Gavin]";
		mes "Monstros...?";
		mes "N�o estamos saindo do tema um pouco?";
		mes "Ah, voc� deve ser um daqueles aventureiros!";
		next;
		mes "[Gavin]";
		mes "N�o consegue tirar a cabe�a do trabalho, �?";
		mes "Certo, existe um monstro que eu vi recentemente...";
		next;
		mes "[Gavin]";
		mes "Ah, lembrei!";
		mes "Apenas a alguns dias, vi um monstro muito interessante!";
		mes "Era um Poring com asas de anjo!";
		next;
		mes "[Gavin]";
		mes "Eu juro!";
		mes "Ele estava pulando em volta de algum lugar perto do Mt. Mjolnir com alguns Porings.";
		mes "Eu acho que ele era o l�der deles, algo do tipo.";
		close;
	}
	mes "[Gavin]";
	mes "Awww...";
	mes "N�o fique desapontado s� porque eu sou a �nica pessoa a te receber!";
	close;
}

// ------------------------------------------------------------------
aldebaran,146,124,4	script	Menina#alde	4W_F_01,{
	mes "[Nastasia]";
	mes "Em algum lugar do mundo existe uma ^3355FFGuilda dos Mercen�rios^000000, onde eles ensinam pessoas a sutil arte do assassinato.";
	next;
	mes "[Nastasia]";
	mes "Mas matar n�o � ilegal?";
	mes "E eles ainda chamam aquilo de instutui��o de ensino?";
	next;
	if (select("Continuar conversa","Finalizar Conversa") == 1) {
		mes "[Nastasia]";
		mes "Apesar de Assassinos se beneficiarem por serem muito r�pidos e ter muita AGI.";
		mes "Eles ainda devem ter muita DES.";
		next;
		mes "[Nastasia]";
		mes "DES � especialmente importante se voc� quiser atacar monstros voadores.";
		mes "Aqueles monstros s�o r�pidos ao se mover e ao atacar.";
		next;
		mes "[Nastasia]";
		mes "Em geral, se voc� quiser atacar monstros que s�o mais r�pidos, voc� vai precisar de DES.";
		close;
	}
	mes "[Nastasia]";
	mes "Normalmente se diz que nesse mundo, nada � de gra�a.";
	mes "Ainda sim, se voc� n�o tiver que pagar para aprender a se tornar um Mercen�rio...";
	close;
}

// ------------------------------------------------------------------
aldebaran,143,136,4	script	Sineiro#alde	4_M_ORIENT02,{
	mes "[Sineiro]";
	mes "Eu fui ordenado pelo Comit� do 'C�u na Terra' a guardar esse entrada da Torre do Rel�gio.";
	next;
	if (select("Sobre Torre do Rel�gio","Sair") == 1) {
		mes "[Sineiro]";
		mes "Cada andar dessa torre � conectado ao outro por um dispositivo que chamamos de 'Engrenagem de Portais.'";
		next;
		mes "[Sineiro]";
		mes "Apesar de exitir portais se conectando por todo o lugar na Torre do Rel�gio, cuidado com 'Portais Sem Rumo.'";
		next;
		mes "[Sineiro]";
		mes "Os 'Portais Sem Rumo' v�o transportar voc� para um lugar desconhecido do mapa.";
		mes "Esteja atento se n�o quiser se separar do seu grupo..";
		next;
		mes "[Sineiro]";
		mes "Lembre-se, 'Portais Sem Rumo' ser�o mostrados em verde no mini-mapa.";
		mes "Ent�o fique com seus olhos abertos, bem como para aqueles perigosos Rel�gios.";
		close;
	}
	mes "[Sineiro]";
	mes "Tome cuidado com essa Torre, ela est� repleta de monstros perigosos.";
	close;
}

// ------------------------------------------------------------------
// - [Casas] -
// ------------------------------------------------------------------
aldeba_in,232,241,4	script	RS125#alde	1_M_02,{
	mes "[RS125]";
	mes "Eu posso soar muito rob�tico.";
	mes "Mas, eu espero que voc� n�o tenha medo de mim.";
	mes "Eu sou t�o humano quanto voc�.";
	next;
	mes "[RS125]";
	mes "Eu posso ter um cora��o mec�nico e posso incomodar voc� com barulhos vindos dele.";
	mes "Isso nunca vai me impedir de correr pelo Futuro de Al De Baran.";
	next;
	if (select("Ouvir a Hist�ria","Finalizar Conversa") == 1) {
		mes "[RS125]";
		mes "J� faz 3 anos.";
		mes "Meu irm�o 996 costumava ser um atleta de metros rasos no time de Al De Baran.";
		mes "Naquela �poca, as pessoas deram um apelido a ele:";
		mes "O Peco Peco de Al De Baran', por suas pernas incrivelmente r�pidas...";
		next;
		mes "[RS125]";
		mes "Ele se tornou t�o popular por suas corridas.";
		mes "Que toda vez que a 'Turbo Track' acontecia de 4 em 4 anos.";
		mes "Muitas pessoas de todo o continente viam a essa cidade apenas para ver meu irm�o.";
		mes "Eu era o empres�rio dele na �poca, eu me estressava muito por causa dos F�s.";
		next;
		mes "[RS125]";
		mes "Mas, nada � para sempre...";
		mes "Um dia, uma garota de Payon ganhou do meu irm�o numa corrida.";
		next;
		mes "[RS125]";
		mes "Meu irm�o n�o aceitava o fato de que tinha perdido ent�o ele treinou muito e teve uma s�ria parada card�aca.";
		mes "Ele ainda est� de cama.";
		next;
		mes "[RS125]";
		mes "Eu sou a �nica esperan�a do meu irm�o e do Futuro de Al De Baran!";
		mes "Me deseje sorte, eu vou ganhar dela, 'Breezy Havana' de Payon!";
		close;
	}
	mes "[RS125]";
	mes "Eu quero viajar pelo mundo em um dia dessess.";
	mes "Se eu puder ver o oceano do porto de Alberta, deve ser t�o maravilhoso.";
	mes "Depois da pr�xima competi��o, Eu vou com meu irm�o em um tour ao redor do mundo.";
	close;
}

// ------------------------------------------------------------------
aldeba_in,223,121,4	script	Homem Amea�ador#alde	1_M_SMITH,{
	mes "[Homem Amea�ador]";
	mes "Ei, n�o se deve entrar na casa de alguem sem permiss�o.";
	mes "Isso � ridiculo!";
	mes "Como ousa entrar na minha casa e falar comigo como se fosse uma coisa normal?";
	next;
	mes "[Homem Amea�ador]";
	mes "Hahahaha...";
	mes "Eu apenas estava brincando.";
	next;
	if (select("Continuar","Terminar Conversa") == 1) {
		mes "[Homem Amea�ador]";
		mes "Voc� j� deve saber disso, mas n�s temos um sistema chamado 'O Sistema de Assistentes'.";
		mes "Sim, Eu sou um Soldado Assistente.";
		next;
		mes "[Homem Amea�ador]";
		mes "� simples, voc� paga para algu�m o ajudar na batalha.";
		mes "Se quiser Soldados Assistentes melhores voc� deve pagar mais, sabe?";
		next;
		mes "[Homem Amea�ador]";
		mes "Vamos parar de falar coisas chatas.";
		mes "Eu vou te ensinar como escolher um bom Assistente.";
		next;
		mes "[Homem Amea�ador]";
		mes "Cheque o nariz, veja se est� limpo e �mido.";
		mes "Um bom Assistente deve ter o nariz �mido.";
		mes "Isso mostra que o Assistente est� em suas melhores condi��es.";
		mes "Se o nariz est� seco, significa que ele pegou um resfriado.";
		next;
		mes "[Homem Amea�ador]";
		mes "E n�o esque�a de checar o tornozelo.";
		mes "Os melhores assistentes t�m o tornozelo magro e pesco�o branco!";
		mes "Se ele tiver cabelo comprido, � melhor!";
		mes "Se ele tiver cabelo encaracolado, � perfeito!";
		next;
		mes "[Homem Amea�ador]";
		mes "Por �ltimo, voc� deve checar se ele est� pronto para servir voc�!";
		mes "Quero dizer, ele deve fazer o melhor ao ajudar voc� numa luta!";
		close;
	}
	mes "[Homem Amea�ador]";
	mes "Saia daqui, agora!";
	mes "Se voc� � um policial, me mostre um mandato, se voc� � da fam�lia, prove com sua marca de nascen�a!";
	close;
}

// ------------------------------------------------------------------
aldeba_in,219,61,4	script	Homem Amig�vel#alde	4_M_MANAGER,{
	mes "[Homem Amig�vel]";
	mes "Voc� n�o precisa escutar o cara ao lado do meu quarto.";
	mes "Dois anos atr�s, ele estava num centro de treinamento de Assistentes quando ele caiu de uma �rvore tentando pegar uma noz.";
	next;
	mes "[Homem Amig�vel]";
	mes "Agora ele continua falanto alto para si.";
	mes "Isso me dar dor de cabe�a...";
	mes "Meu Deus!";
	close;
}

// ------------------------------------------------------------------
aldeba_in,152,47,4	script	Homem Inquieto#alde	4W_M_01,{
	mes "[Homem Inquieto]";
	mes "Aaaaarrrggghhh...ESTOU COM PROBLEMAS!";
	mes "Minha pequena galinha me deixou!";
	next;
	if (select("Como voc� chama ela?",". . . . .") == 1) {
		mes "[Homem Inquieto]";
		mes "Eu costumava chamar de 'Incr�vel Picky'...";
		mes "O que eu fa�o!";
		mes "Como isso aconteceu comigo!";
		mes "Por favor, me ajude a encontrar miha pequena picky!";
		next;
		if (select("O qu�? Que nome rid�culo!",". . . . .") == 1) {
			mes "[Homem Inquieto]";
			mes "N�o seja rid�culo!";
			mes "\"Incr�vel Picky\" � o melhor e mais exclusivo nome nesse mundo, e minha galinha merece ele!";
			close;
		}
		mes "[Homem Inquieto]";
		mes "Voc� n�o se importa, n�o �?";
		mes "Eu sou filho �nico, ent�o eu sempre pensei nela como uma irm�!";
		mes "Eu quero ela de volta...";
		close;
	}
	mes "[Homem Inquieto]";
	mes "Voc� n�o se importa, n�o �?";
	mes "Eu sou filho �nico, ent�o eu sempre pensei nela como uma irm�!";
	mes "Eu quero ela de volta...";
	close;
}

// ------------------------------------------------------------------
aldeba_in,156,179,4	script	Gerente do Bar#alde	1_M_PUBMASTER,{
	mes "[Gerente do Bar]";
	mes "A Sede da Corpora��o Kafra est� localizada aqui em Al De Baran.";
	mes "Sabe o que isso significa?";
	next;
	mes "[Gerente do Bar]";
	mes "Isso significa que aquelas lindas funcion�rias v�m aqui para almo�ar, n�o � maravilhoso?!";
	next;
	if (Sex == SEX_FEMALE) {
		mes "[Gerente do Bar]";
		mes "Ah, n�o se preocupe.";
		mes "Eu sei que as meninas t�m alguma opini�o sobre as outras meninas.";
		mes "Mas quero saber a opini�o dos garotos.";
		close;
	} else {
		mes "[Gerente do Bar]";
		mes "Muito bem!";
		mes "Est� na hora das perguntas!";
		mes "Qual sua Kafra favorita?";
		next;
		if (select("Impressionante!","Eu n�o sou pevertido") == 1) {
			mes "[Gerente do Bar]";
			mes "Muito bem, aqui vamos n�s!";
			mes "Escolha a sua Fafra favorita!";
			next;
			mes "[Gerente do Bar]";
			mes "A Kafra original, com seus lindos cabelos azuis!";
			mes "Candidata n�mero um: ^3355FFDenise^000000!";
			mes "Ela � graciosa, usa o cabelo com rabo-de-cavalo, tira o f�lego dos homens.";
			mes "E � a favorita entre os adolescentes!";
			next;
			mes "[Gerente do Bar]";
			mes "Candidata n�mero dois: ^5533FFTatiana^000000!";
			mes "Seus cabelos longos e lisos, � o ponto do seu charme.";
			mes "Ela veio de Payon.";
			next;
			mes "[Gerente do Bar]";
			mes "Candidata n�mero tr�s: ^555555Marianne^000000!";
			mes "Ela tem um jeito sorridente, cabelo curto cor alaranjado.";
			next;
			mes "[Gerente do Bar]";
			mes "Candidata n�mero quatro: ^1133DDBianca^000000!";
			mes "Inteligente, sofisticada e nunca vista sem seus �culos luxuosos.";
			next;
			mes "[Gerente do Bar]";
			mes "Candidata n�mero cinco: ^33FF55Sofia^000000!";
			mes "Linda, fofa e novata.";
			mes "Ela parece jovem e imatura, mas � a melhor da equipe!";
			mes "Candidata n�mero seis ^AAAA00Deborah^000000!!";
			next;
			switch (select("Denise","Tatiana","Marianne","Bianca","Sofia","Deborah")) {
				case 1:
				mes "[Gerente do Bar]";
				mes "Oh!";
				mes "Ent�o voc� gosta das cl�ssicas n�!";
				mes "Eu respeito isso.";
				next;
				mes "[Gerente do Bar]";
				mes "Eu suponho que voc� gosta de filmes originais.";
				mes "N�o gosta de se beneficiar com m�s imita��es.";
				mes "Estou certo?";
				close;
				case 2:
				mes "[Gerente do Bar]";
				mes "Humm...";
				mes "Tatiana, Parece-me que esta garota est� atraindo muitos por a�, hein?";
				close;
				case 3:
				mes "[Gerente do Bar]";
				mes "Ent�o...";
				mes "Cabelos compridos e luxuosos � importante para voc�, hein?";
				mes "Suponho que esse tipo de cabelo d� as mulheres um olhar elegante.";
				close;
				case 4:
				mes "[Gerente do Bar]";
				mes "Ah, ent�o voc� gosta das agitadas, e espont�neas.";
				mes "Eu entendo perfeitamente...";
				next;
				mes "[Gerente do Bar]";
				mes "Bianca n�o � exatamente o tipo dona de casa.";
				mes "Voc� provavelmente tem a mente aberta quando se trata de definir feminilidade, certo?";
				close;
				case 5:
				mes "[Gerente do Bar]";
				mes "Ah, ent�o voc� gosta do tipo intelectual.";
				mes "Isso � bom, isso � bom.";
				next;
				mes "[Gerente do Bar]";
				mes "Bem, Sofia pode ser fria como uma pedra �s vezes.";
				mes "Mas eu j� vi ela balan�ando o cora��o de muitos por ai!";
				close;
				case 6:
				mes "[Gerente do Bar]";
				mes "Massss o que?!";
				mes "Ela � jovem demais!";
				close;
			}
		}
		mes "[Gerente do Bar]";
		mes "Mas eu trabalhei duro nessas perguntas!";
		mes "Leve na esportiva!";
		mes "Admirar uma bela mulher � como apreciar uma arte.";
		close;
	}
}

// ------------------------------------------------------------------
aldeba_in,83,245,4	script	Tatiana#alde	4_F_KAFRA2,{
	cutin("kafra_02", 2);
	mes "[Kafra Tatiana]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Corpora��o Kafra.";
	mes "As Funcion�rias Kafras estar�o sempre aqui para servir voc�.";
	next;
	mes "[Kafra Tatiana]";
	mes "N�s apreciamos o seu cont�nuo uso do Servi�o Kafra.";
	mes "Por favor se sinta livre para perguntar se tiver alguma d�vida.";
	next;
	switch (select("Como o Armaz�m Kafra funciona?","Como voc� teletransporta as pessoas?")) {
		case 1:
		mes "[Kafra Tatiana]";
		mes "Bom, Aventureiros como voc� pode colocar itens no Armaz�m Kafra, assim voc� n�o vai precisar ficar levando todas as suas coisas.";
		next;
		mes "[Kafra Tatiana]";
		mes "A janela do Armaz�m Kafra � separada em 3 abas onde os itens s�o separados automaticamente.";
		next;
		mes "[Kafra Tatiana]";
		mes "As ^3355FFItem^000000, ^3355FFEquip^000000, e ^3355FFEtc^000000 abas funcionam do mesmo jeito que as abas no invent�rio dos itens.";
		next;
		mes "[Kafra Tatiana]";
		mes "M�ltiplos itens do mesmo tipo v�o apenas ocupar um Slot em Item ou em Etc.";
		mes "Por exemplo, 324 Jellopies v�o apenas ocupar um Slot, e 22 Po��es Vermelhas v�o ocupar outro Slot.";
		next;
		mes "[Kafra Tatiana]";
		mes "Mas, na aba Equip, cada equipamento ocupa seu pr�prio Slot.";
		mes "Eu acho que � porque cada equipamento pode ser aprimorado com cartas ou refinamento.";
		next;
		mes "[Kafra Tatiana]";
		mes "Exite um total de 300 Slots para todas as categorias de itens no Armaz�m Kafra, � bom se lembrar disso.";
		close;
		case 2:
		mes "[Kafra Tatiana]";
		mes "Oh, todos me fazem essa pergunta.";
		mes "'^CC0066Oh Tatiana, como voc� faz isso?^000000'";
		mes "Bem...";
		next;
		mes "[Kafra Tatiana]";
		mes "Eu n�o posso entrar em muito detalhes, claro.";
		mes "Isso � informa��o confidencial.";
		mes "Mas eu posso dizer que nosso teletransporte funciona com uma mistura de m�gica e tecnologia.";
		next;
		mes "[Kafra Tatiana]";
		mes "Tamb�m, as Funcion�rias Kafras sozinhas n�o podem teletransportar os clientes.";
		mes "N�s apenas recebemos e processamos seu pedido de Teletransporte.";
		next;
		mes "[Kafra Tatiana]";
		mes "Atr�s dos panos, profissionais habilidosos est�o trabalhando 24 horas por dia para assegurar que voc� chegue r�pido e seguro no seu destido.";
		close;
	}
	mes "[Kafra Tatiana]";
	mes "Em todo caso, espero que voc� goste da visita � Sede da Corpora��o Kafra.";
	close2;
	cutin("",255);
	end;
}

// ------------------------------------------------------------------
aldeba_in,24,245,4	script	Marianne#alde	4_F_KAFRA3,{
	cutin("kafra_03", 2);
	mes "[Kafra Marianne]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+"!";
	mes "O Servi�o Kafra est� sempre ao seu lado.";
	next;
	mes "[Kafra Marianne]";
	mes "Obrigada por vir nos visitar na Sede da Corpora��o Kafra aqui em Al De Baran!";
	next;
	mes "[Kafra Marianne]";
	mes "O Servi�o Kafra tem uma reputa��o com os clientes que foi formada por mais de cinco mil e oitocentos anos...";
	next;
	switch (select("O qu�?! N�o acredito!","Ahh Cale a boca!","Seus Servi�os s�o �timos!")) {
		case 1:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O qu�?!";
		mes "N�o acredito nisso!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "CINCO MIL E OITOCENTOS ANOS?! VOC� EST� LOUCA?!";
		next;
		mes "[Kafra Marianne]";
		mes "Eu levei uma semana para memorizar tudo isso!";
		mes "Minha mem�ria n�o � t�o boa quanto a das outras Funcion�rias Kafra...!";
		next;
		mes "[Kafra Marianne]";
		mes "Agora, err...";
		mes "Como eu estava dizendo, a Corpora��o Kafra foi fundada h� oito mil e quinhentos anos atr�s por Emilio Alexander Kafra... Criador da Palavra 'Kafra?'";
		next;
		mes "[Kafra Marianne]";
		mes "Ele...";
		mes "Ele era um bom homem.";
		mes "Ele... Grr!";
		mes "N�o consigo lembrar!";
		next;
		mes "[Kafra Marianne]";
		mes "Ah n�o...!";
		mes "Essa n�o pode ser a hist�ria certa!";
		mes "Cinco mil e oitocentos...?!";
		mes "� impossivel!";
		close;
		case 2:
		mes "[Kafra Marianne]";
		mes "Escuta...";
		mes "Cara.";
		next;
		mes "[Kafra Marianne]";
		mes "Eu era uma membra das Tropas Kafra antes de entrar no Time do Servi�o Kafra.";
		mes "Minha especialidade era ^990000Impacto Explosivo^000000, ent�o se voc� sabe o que � bom para voc�.";
		mes "N�o mexa comigo.";
		next;
		mes "[Kafra Marianne]";
		mes "Eu tento ao m�ximo viver t�o feminina e quieta que eu puder.";
		mes "Ent�o n�o me fa�a quebrar seus ossos!";
		mes "Entendeu?!";
		close;
		case 3:
		mes "[Kafra Marianne]";
		mes "Oraa!";
		mes "Boas not�cias para ouvir.";
		mes "N�s sempre estamos trabalhando duro para satisfazer nossos clientes com os servi�os que n�s oferecemos.";
		close;
	}
	close2;
	cutin("",255);
	end;
}

// ------------------------------------------------------------------
aldeba_in,142,238,4	script	Bianca#alde	4_F_KAFRA4,{
	cutin("kafra_04", 2);
	mes "[Kafra Bianca]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!";
	mes "A Corpora��o Kafra sempre ajudar� os aventureiros de Rune-Midgard com os nossos excelentes servi�os.";
	next;
	mes "[Kafra Bianca]";
	mes "Meu nome � Bianca!";
	mes "Eu espero que voc� goste da sua visita a Sede da Corpora��o Kafra.";
	next;
	mes "[Kafra Bianca]";
	mes "Estou aqui para responder qualquer uma das suas d�vidas em rela��o a Pol�tica da Corpora��o Kafra, assim como registrar qualquer opini�o.";
	next;
	switch (select("Pol�tica Kafra","Eu amo a Kafra!")) {
		case 1:
		mes "[Kafra Bianca]";
		mes "Ent�o, voc� gostaria de mais detalhes sobre nossa pol�tica e a elegibilidade dos nossos servi�os?";
		mes "O que voc� gostaria de saber mais sobre?";
		next;
		switch (select("Armaz�m Kafra","Aluguel de Carrinho","Na verdade, nem importa")) {
			case 1:
			mes "[Kafra Bianca]";
			mes "Como voc� j� sabe, nossos clientes devem ter pelo menos n�vel 6 em Habilidades B�sicas para poder usar o Armaz�m Kafra.";
			next;
			mes "[Kafra Bianca]";
			mes "A raz�o para essa pol�tica � que n�s tivemos problemas com jovens Aprendizes, que colocariam tudo o qu� tem dentro do Armaz�m.";
			next;
			mes "[Kafra Bianca]";
			mes "Lembre-se dos dias de Aprendiz.";
			mes "Tudo era novo e excitante, mas o zeny era escasso.";
			mes "Bem, muitos Aprendizes colocariam at� mesmo suas armas e armaduras no Armaz�m.";
			next;
			mes "[Kafra Bianca]";
			mes "Mas, nessa altura, eles j� gastaram aquele pouco zeny que tinham para abrir o Armaz�m.";
			mes "E ent�o eles n�o v�o ter dinheiro para acessar de novo!";
			next;
			mes "[Kafra Bianca]";
			mes "Ent�o, esse Aprendiz sem arma e sem armadura vai lutar contra monstros at� conseguir zeny suficiente para abrir o Armaz�m de novo!";
			next;
			mes "[Kafra Bianca]";
			mes "� um pequeno erro, na verdade, n�s aqui da Corpora��o Kafra valorizamos a vida humana.";
			mes "Ent�o decidimos que n�vel 6 em Habilidades B�sicas � um requerimento para prevenir esse tipo de problema.";
			close2;
			cutin("",255);
			end;
			case 2:
			mes "[Kafra Bianca]";
			mes "Como voc� sabe, a Corpora��o Kafra tem uma rela��o especial com a Guilda dos Mercadores.";
			mes "Assim como a Guilda dos Ferreiros e dos Alquimistas.";
			next;
			mes "[Kafra Bianca]";
			mes "A Corpora��o Kafra apenas aluga Carrinhos para Mercadores, Ferreiros e Alquimistas.";
			mes "J� que essas classes t�m um contrato especial conosco.";
			next;
			mes "[Kafra Bianca]";
			mes "Mas tamb�m, n�o teria sentido vender carrinhos para pessoas que n�o possam vender mercadorias.";
			next;
			mes "[Kafra Bianca]";
			mes "Para os Super Aprendizes, bem, n�o devemos alugar carrinhos para eles j� que a Sociedade dos Super Aprendizes n�o tem contrato conosco.";
			next;
			mes "[Kafra Bianca]";
			mes "Se uma Funcion�ria Kafra alugar um carro para um Super Aprendiz, ela provavelmente vai arrumar problemas com Leilah...";
			close2;
			cutin("",255);
			end;
			case 3:
			mes "[Kafra Bianca]";
			mes "Oh, Ok!";
			mes "Se tiver qualquer pergunta, por favor me diga!";
			close2;
			cutin("",255);
			end;
		}
		case 2:
		mes "[Kafra Bianca]";
		mes "Obrigada!";
		mes "� sempre bom saber que somos apreciadas por nossos clientes!";
		mes "Todas n�s trabalhamos duro para assegurar que o nosso servi�o esteja ao seus padr�es de excel�ncia.";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
aldeba_in,91,244,4	script	Deborah#alde	4_F_KAFRA6,{
	cutin("kafra_06", 2);
	mes "[Kafra Deborah]";
	mes "Ol�, Ol�!!";
	mes "Eu sou Deborah, a mais nova membra das Funcion�rias Kafra!";
	next;
	mes "[Kafra Deborah]";
	mes "Eu posso ainda precisar aprender mais sobre como servir nossos clientes.";
	mes "Mas eu estou sempre me esfor�ando!";
	next;
	if (select("Cad� sua m�e, crian�a?","Finalizar Conversa.") == 1) {
		mes "[Kafra Deborah]";
		mes "Waaaaaaah!";
		mes "Eu n�o sou uma crian�a!";
		close2;
		cutin("",255);
		end;
	}
	mes "[Kafra Deborah]";
	mes "Aqui na Corpora��o Kafra, n�s estamos sempre fazendo o melhor para oferecer o excelente servi�o que voc� espera de n�s.";
	close2;
	cutin("",255);
	end;
}
