/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest dos livros de Culinária.                            |
\*-----------------------------------------------------------------*/

prt_castle,43,30,3	script	Charles Orleans#cook	4_M_OILMAN,{
	if (MaxWeight - Weight < 2000) {
		mes "[Charles Orleans]";
		mes "Só um segundo.";
		mes "Você está carregando muitos itens com você nesse momento.";
		mes "Então não acha que seria melhor colocar algumas de suas coisas no Armazém Kafra?";
		close;
	}
	if (BaseJob == Job_Novice) {
		if (Sex == SEX_MALE) {
			cutin("orleans_5",0);
			mes "[Charles Orleans]";
			mes "Com licença, senh"+(Sex == SEX_MALE ? "or" : "ra")+"?";
			mes "Sim, você.";
			mes "Se você não está aqui para ajudar na cozinha, então eu gostaria de pedir que retire-se agora.";
			next;
			emotion(e_an);
			mes "[Charles Orleans]";
			mes "Por favor, não sinta-se ofendido.";
			mes "Mas não consigo concentrar-me na minha cozinha quando novatos como você ficam correndo por aqui feitos criança.";
			close;
		}
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Mademoiselle, o que você está fazendo aqui nesta área do castelo?";
		mes "Ah, você deve ter se perdido.";
		next;
		cutin("orleans_2",0);
		mes "[Charles Orleans]";
		mes "Porfavor, use as escadas virando a direita para ir a estrutura principal.";
		mes "E tenha cuidado e preste atenção nos seus passos quando subir as escadas, está bem?";
		close2;
		cutin("",255);
		end;
	} else if (!isequipped(Hat_Of_Cook)) {
		if (Sex == SEX_MALE) {
			cutin("orleans_5",0);
			emotion(e_an);
			mes "[Charles Orleans]";
			mes "Monsieur, porque está olhando assim para mim?";
			mes "É pela Bata de Seda de Morroc que estou usando, meu penteado de cabelo feito pela madame Veronica.";
			mes "Ou pelo meu cachecol de marca refinado pelo Monsieur Antonio?";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Puxa você está tão feliz com a moda atual, espetáculos de design feitos por artistas da Corporação Rekenber?";
			mes "Por favor, me conte.";
			next;
			cutin("orleans_2",0);
			mes "[Charles Orleans]";
			mes "Espere, espere um momento.";
			mes "Você sabe sobre as últimas tendências?";
			mes "Me parece que você não está muito na moda...";
			next;
			cutin("orleans_5",0);
			mes "[Charles Orleans]";
			mes "Ugh, se eu puder evitar, normalmente prefiro não me envolver com pessoas sem estilo.";
			mes "Mas eu acho que vocês aventureiro têm seus pontos fortes...";
			close2; cutin("",255); end;
		}
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Ah! Perdoe a miséria da minha humilde cozinha, Mademoiselle.";
		mes "Mas mesmo o explendor do castelo de Prontera empalidece ao esplendor de sua beleza cativante.";
		next;
		cutin("orleans_2",0);
		mes "[Charles Orleans]";
		mes "Diga-me, quem é a adorável criança, segurando o gato que está ao seu lado?";
		mes "Sei que é rude perguntar, mas estou encorajado pela minha, digamos, curiosidade.";
		next;
		switch (select("......?","Ela é minha irmã","Na verdade, eu não a conheço")) {
			case 1:
			cutin("nyuang_3",2);
			emotion(e_ho,0,"Menina com gato#cook");
			mes "[Menina com gato]";
			mes "Nyahahaha";
			mes "Nyahahaha";
			mes "Meow Meow";
			next;
			cutin("orleans_2",0);
			emotion e_heh;
			mes "[Charles Orleans]";
			mes "Seja uma criança adorável.";
			mes "Fique quieta como uma boa menina.";
			next;
			break;
			case 2:
			cutin("nyuang_1",2);
			emotion(e_what,0,"Menina com gato#cook");
			mes "[Menina com gato]";
			mes "...Nya?";
			mes "...Meow?";
			next;
			cutin("orleans_2",0);
			emotion(e_lv2);
			mes "[Charles Orleans]";
			mes "Ela é adorável e muito quieta, embora ela não se pareça com você.";
			mes "Até mesmo seu gato é adorável.";
			break;
			case 3:
			cutin("nyuang_2",2);
			emotion(e_pif,0,"Menina com gato#cook");
			mes "[Menina com gato]";
			mes "Nyahahaha,";
			mes "Nyahahaha";
			mes "Meow, meow";
			next;
			cutin("orleans_4",0);
			emotion(e_swt2);
			mes "[Charles Orleans]";
			mes "Ah, mais uma vez, deixe-me desculpar-me.";
			mes "Eu pensei que essa criança era afortunada o bastante para ser uma companheira de Mademoiselle.";
			break;
		}
		next;
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Permita-me apresentar-me a vós, amour.";
		mes "Eu sou o seu sempre fiel servo, cujo coração é extasiado com seu olhar.";
		mes "Meu nome é Charles Orleans.";
		next;
		cutin("orleans_4",0);
		mes "[Charles Orleans]";
		mes "No entanto, há uma coisa que me causa angustia.";
		mes "Desde que sua alteza, o Rei Tristram III, desapareceu.";
		mes "Não encontrei ninguém digno de saborear os meus produtos.";
		mes "Minha vida agora não tem mais sentido...";
		next;
		mes "[Charles Orleans]";
		mes "Infelizmente, recentemente eu fui rebaixado a um mero professor de aprendizes, eu sou um mestre com minhas habilidades na arte da culinária.";
		mes "Isso é frustrante, muitos deles não têm nenhum talento!";
		next;
		cutin("orleans_3",0);
		mes "[Charles Orleans]";
		mes "Ah, perdoe-me, querida Mademoiselle.";
		mes "Eu espero que você entenda como está sendo dificil.";
		mes "Sou forçado a sofrer.";
		mes "Quando nos encontrarmos novamente, eu gostaria muito de dar-lhe uma doce sobremesa.";
		next;
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Sim, as mulheres com sua beleza, definitivamente merecem os sabores deliciosos que apenas eu sou capaz de oferecer.";
		mes "Quando esse dia chegar, irei relutantemente convidar você, adeus.";
		close2; cutin("",255); end;
	} else if (cooking_q == 0) {
		cutin("orleans_5",0);
		emotion(e_dots);
		mes "[Charles Orleans]";
		mes "Oh, você veio aqui para aprender a cozinhar?";
		mes "^333333*suspiro*^000000";
		mes "Eu não sei como ensinar nada hoje, na verdade, eu acho que ensinar é um desperdicio do meu tempo!";
		mes "^333333*suspiro*^000000";
		mes "No entanto...";
		next;
		switch (select("Está falando isso para mim?","Você não se lembra de mim?","Senhor Orleans?")) {
			case 1:
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Para quem mais eu estaria falando?";
			mes "Para Madeleine logo ali?";
			mes "Ou para a criança abraçando aquele gato sarnento?";
			mes "Eca!";
			next;
			cutin("nyuang_4",2);
			mes "[Menina com gato]";
			mes "Grrrrrrr!";
			mes "Rrrroreow!";
			next;
			cutin("orleans_3",0);
			emotion(e_omg);
			mes "[Charles Orleans]";
			mes "Meu Deus, você me assustou!";
			mes "Mas que criança mal humorada!";
			mes "Quem trouxe essa criança aqui em?";
			break;
			case 2:
			mes "[Charles Orleans]";
			mes "Eu não consigo lembrar-me de cada principiante que já veio aqui pedir aulas das artes da culinária.";
			mes "Eu poderia jurar que você esteve aqui meses atrás, então como é mesmo seu nome...?";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Bah! não importa.";
			mes "Eu suponho que isso não tenha importância nesse momento.";
			break;
			case 3:
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Com licença?";
			mes "Eu posso ser seu instrutor, mas você pode me chamar pelo meu primeiro nome.";
			mes "Eu sei que posso ser bem rigoroso, mas porfavor.";
			mes "No final, somos colegas, mesmo eu sendo superior.";
			next;
			cutin("orleans_1",0);
			mes "[Charles Orleans]";
			mes "Tudo bem, tudo bem...";
			mes "Já que você insiste em demonstrar o minimo de respeito, então você pode me chamar de 'Sr. Charles.'";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Ah... Ninguém tem um anel lindo como esse.";
			mes "Eu realmente ganhei esse título do prórprio rei, mesmo eu sendo um cavaleiro apenas no título e forma, e não na força.";
			break;
		}
		next;
		cutin("orleans_7",0);
		mes "[Charles Orleans]";
		mes "Bem, então vamos começar hoje fazendo um prato simples.";
		mes "Ok, ^FF0000Eu não ensino receitas mais de uma vez^000000, ^FF0000certifique-se de que irá anotar tudo^000000.";
		mes "Então agora, o que vamos cozinhar?";
		next;
		cutin("orleans_6",0);
		.@cook_m1 = rand(1,6);
		if (.@cook_m1 == 1) {
			cooking_q = 1;
			mes "[Charles Orleans]";
			mes "Ahhh, então quer saber sobre as 'Pernas de gafanhoto fritas'.";
			mes "Para os leigos, elas podem parecer um prato nojento, mas acredite em mim, seu sabor requintado é um puro prazer ao paladar.";
			next;
			mes "[Charles Orleans]";
			mes "Agora, por favor traga";
			mes "^4D4DFF5 Pernas de Gafanhoto^000000,";
			mes "^4D4DFF1 Óleo de Cozinha^000000, e";
			mes "^4D4DFF1 Frigideiras Velhas^000000.";
			mes "e então, poderemos começar.";
			close2; cutin("",255); end;
		} else if (.@cook_m1 == 2) {
			cooking_q = 2;
			mes "[Charles Orleans]";
			mes "Ah, eu já tenho isso!";
			mes "Vamos fazer 'Chá de Ervas com Suco de Uva'.";
			mes "O Tempo está perfeito para uma bebida refrescante.";
			next;
			mes "[Charles Orleans]";
			mes "Por favor Traga";
			mes "^4D4DFF3 Cachos de Uvas^000000, e";
			mes "^4D4DFF2 Poções Vermelhas^000000";
			mes "para que possamos começar a aula";
			close2; cutin("",255); end;
		} else if (.@cook_m1 == 3) {
			cooking_q = 3;
			mes "[Charles Orleans]";
			mes "Ah eu já tenho isso nós podemos fazer 'Suco de Uvas com Mel'.";
			mes "Por favor traga-me os seguintes ingredientes para começarmos a aula.";
			next;
			mes "[Charles Orleans]";
			mes "^4D4DFF1 Mel^000000,";
			mes "^4D4DFF2 Cachos de Uva^000000, e";
			mes "^4D4DFF1 Poção Vermelha^000000.";
			close2; cutin("",255); end;
		} else if (.@cook_m1 == 4) {
			cooking_q = 4;
			mes "[Charles Orleans]";
			mes "Hum, Porque nós não fazemos 'Sopa de Ovos de Sapo com Tinta de Lula?'";
			mes "Aqueles distituidos de um paladar refinado podem achar isso nojento.";
			mes "Mas este prato é realmente muito saboroso.";
			next;
			mes "[Charles Orleans]";
			mes "Bem então,";
			mes "por favor, traga-me";
			mes "^4D4DFF1 Saco de Grãos^000000,";
			mes "^4D4DFF10 Ovas de Sapo^000000, e";
			mes "^4D4DFF1 Tinta de Lula^000000.";
			close2; cutin("",255); end;
		} else if (.@cook_m1 == 5) {
			cooking_q = 5;
			mes "[Charles Orleans]";
			mes "Ah, eu sei o que cairia perfeitamente bem agora.";
			mes "'Caranguejo Cozido no Vapor'.";
			mes "Agora, por favor traga-me os ingredientes para fazermos o cozido.";
			next;
			mes "[Charles Orleans]";
			mes "Iremos precisar de";
			mes "^4D4DFF10 Ervas Verdes^000000,";
			mes "^4D4DFF10 Garra de Crustáceo^000000, e";
			mes "^4D4DFF1 Poção Amarela^000000.";
			close2; cutin("",255); end;
		} else {
			cooking_q = 6;
			mes "[Charles Orleans]";
			mes "Ah, você sabe o que seria delicioso?";
			mes "'Caldas de Macacos Fritas.'";
			mes "Sim, isso soa perfeitamente bem!";
			mes "Por favor traga-me os ingredientes para que eu possa te ensinar esse prato.";
			next;
			mes "[Charles Orleans]";
			mes "Nós iremos precisar de";
			mes "^4D4DFF1 Frigideira^000000,";
			mes "^4D4DFF5 Rabos de Yoyo^000000, e";
			mes "^4D4DFF1 Óleo de Cozinha^000000.";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 1) {
		if (countitem(Grasshoppers_Leg) > 4 && countitem(Old_Frying_Pan) > 0 && countitem(Cooking_Oil) > 0) {
			cutin("orleans_4",0);
			emotion(e_an);
			mes "[Charles Orleans]";
			mes "Finalmente, você está aqui!";
			mes "Nunca esqueça: seus ingredientes devem ser sempre os mais frescos possíveis.";
			mes "Caso contrátio, serão pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Deixe as Pernas de Gafanhoto o mais limpo possível antes de colocá-las na frigideira.";
			mes "Depois, despeje metade da garrafa de Óleo de Cozinha e frite as pernas em fogo alto por cerca de 20 minutos.";
			next;
			mes "[Charles Orleans]";
			mes "Depois, siga as instruções que eu dei para você corretamente!";
			mes "Humm... Bom, bom.";
			mes "Nada mal.";
			mes "Tudo bem, você está quase lá...";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Nossa, você terminou!";
			mes "A aparência poderia ter ficado um pouco mais trabalhada, mas pelo menos você sabe a receita agora.";
			mes "Isso é tudo por hoje, agora vá e pratique por si mesmo.";
			delitem(Grasshoppers_Leg,5);
			delitem(Old_Frying_Pan,1);
			delitem(Cooking_Oil,1);
			cooking_q = 7;
			getitem(Str_Dish01,1);
			close2; cutin("",255); end;
		}
		cutin("orleans_6",0);
		.@talk_j = rand(1,2);
		if (.@talk_j == 1) {
			mes "[Charles Orleans]";
			mes "Depressa traga-me os ingredientes para fazer as Pernas Fritas de Gafanhoto!";
			mes "Se isso tivese sido ordenado por seu patrão em um restaurante, demorando assim você já estaria o irritando!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Basta que você cace aqueles gafanhotos felizes que pulam pelos campos.";
			mes "Vá derrota-lós, e em seguida arranque suas pernas fora, mas seja humano ao fizer isso!";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 2) {
		if (countitem(Grape) > 2 && countitem(Red_Potion) > 1) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, você está aqui!";
			mes "Nunca esqueça: seus ingredientes devem ser sempre os mais frescos possíveis.";
			mes "Caso contrátio, serão pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Você deve extrair o suco de uvas direto da uva.";
			mes "Não podemos usar sucos de uvas pré-fabricados, pois eles devem estar sempre frescos.";
			mes "Então, você precisa ferver as poções vermelhas em banho maria...";
			next;
			mes "[Charles Orleans]";
			mes "Quando a poção vermelha atingir a consistência certa.";
			mes "Misture delicadamente o suco que você acaba de espremer das uvas.";
			mes "Agora, eu quero que você tente. Hum... Nada mal... Bom, bom...";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Nossa, você terminou!";
			mes "A aparência poderia ter ficado um pouco mais trabalhada, mas pelo menos você sabe a receita agora.";
			mes "Isso é tudo por hoje, agora vá e pratique por si mesmo.";
			delitem(Grape,3);
			delitem(Red_Potion,2);
			cooking_q = 7;
			getitem(Int_Dish01,1);
			close2; cutin("",255); end;
		}
		cutin("orleans_6",0);
		.@talk_j = rand(1,2);
		if (.@talk_j == 1) {
			mes "[Charles Orleans]";
			mes "O que você está fazendo?";
			mes "Depressa vá e traga-me os ingredientes para preparar o suco de uvas com chá de ervas!";
			mes "Em um restaurante de verdade, você nunca seria capaz de conseguir fazer seu trabalho perdendo tanto tempo assim!";
			mes "Vá depressa, agora!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Está tendo dificuldades para encontrar uvas?";
			mes "Basta estourar aqueles pequenos e fofos Poporings bonitinhos...";
			mes "Claro, você deve tentar ser humano quando caçá-los...";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 3) {
		if (countitem(Honey) > 0 && countitem(Grape) > 1 && countitem(Red_Potion) > 0) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, você está aqui!";
			mes "Nunca esqueça: seus ingredientes devem ser sempre os mais frescos possíveis.";
			mes "Caso contrário, serão pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Primeiro, retire a pele e as sementes das uvas.";
			mes "Então, misture as uvas com o mel.";
			mes "Tome isso, misture e mecha cuisadosamente depois coloque a Poção Vermelha...";
			next;
			mes "[Charles Orleans]";
			mes "Quando a polpa estiver totalmente misturada na Poção Vermelha, você terá acabado.";
			mes "Agora, vá e tente fazer você mesmo.";
			mes "Isso mesmo, muito bem. Sim...";
			mes "Espere, espere! Ok, agora vá";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Nossa, você terminou!";
			mes "A aparência poderia ter ficado um pouco mais trabalhada, mas pelo menos você sabe a receita agora.";
			mes "Isso é tudo por hoje, agora vá e pratique por si mesmo.";
			delitem(Honey,1);
			delitem(Grape,2);
			delitem(Red_Potion,1);
			cooking_q = 7;
			getitem(Dex_Dish01,1);
			close2; cutin("",255); end;
		}
		cutin("orleans_6",0);
		.@talk_j = rand(1,2);
		if (.@talk_j == 1) {
			mes "[Charles Orleans]";
			mes "O que ainda está fazendo por aqui?";
			mes "Você já deveria ter ido buscar os ingredientes para fazer o Suco de Uva e Mel a muito tempo.";
			mes "Depressa!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Está tendo problemas para conseguir o mel para o suco de uvas com mel, não é?";
			mes "Basta ir caçar ursos, eles sempre carregam consigo um pouco de mel.";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 4) {
		if (countitem(Grain) > 0 && countitem(Spawn) > 9 && countitem(Chinese_Ink) > 0) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, você chegou!";
			mes "Nunca esqueça: seus ingredientes devem ser sempre os mais frescos possíveis.";
			mes "Caso contrátio, serão pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Você deve moer o grão até formar uma farinha fina, então depois ferver a tinta de lula em fogo médio.";
			mes "Quando estiver borbulhando, despeje a farinha.";
			next;
			mes "[Charles Orleans]";
			mes "Continue mexendo, lentamente adicione as Ovas de Sapo.";
			mes "Quando começar a ferver novamente, reduza o fogo e cozinhe por cerca de 10 minutos.";
			mes "Ok, agora tente fazer.";
			mes "Muito bem, bom... Certo";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Então, você terminou!";
			mes "A aparência poderia ter ficado um pouco mais trabalhada, mas pelo menos você sabe esta receita agora.";
			mes "Isso é tudo por hoje, por isso vá e pratique por si mesmo.";
			delitem(Grain,1);
			delitem(Spawn,10);
			delitem(Chinese_Ink,1);
			cooking_q = 7;
			getitem(Agi_Dish01,1);
			close2; cutin("",255); end;
		}
		cutin("orleans_6",0);
		.@talk_j = rand(1,2);
		if (.@talk_j == 1) {
			mes "[Charles Orleans]";
			mes "O que você está fazendo?";
			mes "Você deve ir pegar os ingredientes para o preparo da Sopa de Tinta de Lula e Ovos de Sapo agora mesmo!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Você deve ter cuidado quando se está lidando com Ovos de Sapo.";
			mes "Se você servir uma comida mal cozida para alguém, o gosto definitivamente não será bom.";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 5) {
		if (countitem(Nipper) > 9 && countitem(Green_Herb) > 9 && countitem(Yellow_Potion) > 0) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, você está aqui!";
			mes "Nunca esqueça: seus ingredientes devem ser sempre os mais frescos possíveis.";
			mes "Caso contrátio, serão pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Ferva as Garras de Crustáceo com a Poção Amarela por cerca de 30 minutos em fogo baixo.";
			mes "Então, depois de ferver vá colocando as Ervas Verdes uma a uma e mechendo com cuidado.";
			next;
			mes "[Charles Orleans]";
			mes "Essa é uma receita fácil, mas eu ainda quero que você demonstre para mim.";
			mes "Ok, vamos ver agora...";
			mes "Você está indo bem.";
			mes "Agora, espere...";
			mes "Bom, bom, ok, está pronto coloque as Ervas Verdes agora...";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Então, você terminou!";
			mes "A aparência poderia ter ficado um pouco mais trabalhada, mas pelo menos você sabe esta receita agora.";
			mes "Isso é tudo por hoje, por isso vá e pratique por si mesmo.";
			delitem(Nipper,10);
			delitem(Green_Herb,10);
			delitem(Yellow_Potion,1);
			cooking_q = 7;
			getitem(Vit_Dish01,1);
			close2; cutin("",255); end;
		}
		cutin("orleans_6",0);
		.@talk_j = rand(1,2);
		if (.@talk_j == 1) {
			mes "[Charles Orleans]";
			mes "Você não deveria estar";
			mes "preparando todos os";
			mes "ingredientes para fazer As Garras de Caranguejo";
			mes "no Vapor? Você precisa";
			mes "trabalhar rápidamente para";
			mes "atender aqueles clientes famintos do restaurante!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Não deve ser muito difícil conseguir as garras.";
			mes "Basta apenas caçar alguns Vadons, derrote-os e arranque suas garras.";
			mes "Isso soa estranho, eu sei, mas apenas faça.";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 6) {
		if (countitem(Yoyo_Tail) > 4 && countitem(Old_Frying_Pan) > 0 && countitem(Cooking_Oil) > 0) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, você voltou!";
			mes "Nunca esqueça: seus ingredientes devem ser sempre os mais frescos possíveis.";
			mes "Caso contrário, serão pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Arranque os pêlos das caudas e lave-os bem sob a água fria.";
			mes "Despeje metade de uma garrafa de Óleo de Cozinha em uma panela pré-aquecida, e depois frite as caldas.";
			next;
			mes "[Charles Orleans]";
			mes "O Truque é fritar as caldas rápidamente sem queima-lás, então provavelmente você irá usar fogo médio-alto.";
			mes "Mostre-me o que você aprendeu agora...";
			mes "Muito bem, nada mal... Humm...";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Então, você terminou!";
			mes "A aparência poderia ter ficado um pouco mais trabalhada.";
			mes "Mas pelo menos você sabe essa receita agora.";
			mes "Isso é tudo por hoje, por isso vá e pratique por si mesmo.";
			delitem(Yoyo_Tail,5);
			delitem(Old_Frying_Pan,1);
			delitem(Cooking_Oil,1);
			cooking_q = 7;
			getitem(Luk_Dish01,1);
			close2; cutin("",255); end;
		}
		cutin("orleans_6",0);
		.@talk_j = rand(1,2);
		if (.@talk_j == 1) {
			mes "[Charles Orleans]";
			mes "Você deve ir preparar os ingredientes para o fazer as Caudas de Macaco Fritas rápidamente.";
			mes "Em um restaurante de verdade, você nunca poderá perder seu tempo com isso.";
			mes "Rápido!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Você precisa de mais Caudas?";
			mes "basta procurar alguns Yoyos, mata-lós e cortar suas caudas fora.";
			mes "Você é um novato, por isso não seja desumano quando fizer isso!";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 7) {
		cutin("orleans_7",0);
		mes "[Charles Orleans]";
		mes "Oh... Estou tão exausto!";
		mes "Tenho muita sabedoria e";
		mes "habilidades para compartilhar! Ensinar";
		mes "não é tão ruim, gosto e";
		mes "reconheço que é necessário";
		mes "para minha cozinha sobreviver...";
		next;
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Peser le bien et le mal...";
		mes "Mesmo que me doa, acho que devo continuar o ensino, até que um de vocês seja capaz de tornar-se um sucessor digno.";
		mes "Isso vai levar algum tempo...";
		close2; cutin("",255); end;
	} else if (cooking_q == 8) {
		cutin("orleans_5",0);
		mes "[Charles Orleans]";
		mes "Estranho, estranho...";
		mes "O que essa garota e esse gato fazem aqui?";
		mes "A cozinha não é lugar para eles, pelo menos não para animais de estimação, você sabe disso.";
		next;
		cutin("orleans_4",0);
		mes "[Charles Orleans]";
		mes "Pardon moi, criança, mas seria pedir muito que você e seu gato retirem-se daqui?";
		mes "Isso é uma cozinha, e tudo aqui precisa estar limpo!";
		next;
		cutin("nyuang_1",2);
		mes "[Menina com gato]";
		mes "...Nyaaa?";
		mes "...Miau?";
		next;
		switch (select("Qual o seu nome, menina?","Você quer comer alguma coisa?","Aqui, gatinho","Saia!")) {
			case 1:
			emotion(e_ok,0,"Menina com gato#cook");
			mes "[Menina com gato]";
			mes "Nyaaa";
			mes "nyaaa";
			mes "(Purrrrrr)";
			next;
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes ".....Quem mandou você perguntar o nome dela?";
			mes "Você nem precisa saber o que ela têm a dizer.";
			close2; cutin("",255); end;
			case 2:
			cutin("nyuang_2",2);
			emotion(e_pif,0,"Menina com gato#cook");
			mes "[Menina com gato]";
			mes "Nyaaaa";
			mes "(Purrrrrr)";
			next;
			cutin("orleans_5",0);
			mes "[Charles Orleans]";
			mes "Isso é uma boa idéia...";
			mes "Oferecendo-lhes comida para faze-los sair.";
			mes "Mon dieu, a menina não vai falar com a gente...";
			mes "Ainda assim, nós precisamos fazer com que aqueles dois saiam da cozinha.";
			close2; cutin("",255); end;
			case 3:
			cutin("nyuang_3",2);
			emotion(e_heh,0,"Menina com gato#cook");
			mes "[Menina com gato]";
			mes "Nyahahaha";
			mes "Nyhhahaha";
			mes "(Miau, miau)";
			next;
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "...Você está brincando com essa garota...?";
			mes "...Então eu não preciso de você aqui.";
			close2; cutin("",255); end;
			case 4:
			emotion(e_dots,0,"Menina com gato#cook");
			mes "[Menina com gato]";
			mes "...";
			mes "(Miau?)";
			next;
			cutin("nyuang_4",2);
			emotion(e_an,0,"Menina com gato#cook");
			specialeffect(EF_HIT2,AREA,playerattached());
			percentheal(-10,0);
			mes "[Menina com gato]";
			mes "Grrrrrrr!";
			mes "(RRRrrreow!)";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Oh, olhe!";
			mes "Você deve ter, mas cuidado ao segurar aquele gato...";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 9) {
		cutin("orleans_5",0);
		emotion(e_an);
		mes "[Charles Orleans]";
		mes "Tudo bem, já basta.";
		mes "Nós não podemos continuar a cozinhar se houver animais vivos na cozinha.";
		mes "Isso é uma violação aos nossos padrões sanitários!";
		next;
		cutin("orleans_6",0);
		mes "[Charles Orleans]";
		mes "Sinto muito, mon chere, mas você tem de sair.";
		mes "Menina, por favor pegue seu gato e passe logo por esta porta antes que esse felino possa soltar pêlos sobre os alimentos!";
		next;
		cutin("nyuang_4",2);
		emotion(e_an,0,"Menina com gato#cook");
		mes "[Menina com gato]";
		mes "Grrrrrrr!";
		mes "RRRRreow!";
		next;
		donpcevent("Wickebine#cook::OnEnable");
		emotion(e_omg);
		emotion(e_ho,0,"Menina com gato#cook");
		next;
		cutin("job_black_hucke01",1);
		mes "[Wickebine]";
		mes "Oh...!";
		mes "Nyuyang, é você!";
		mes "O que você está fazendo aqui na Cozinha do Charles?";
		next;
		cutin("orleans_3",0);
		mes "[Charles Orleans]";
		mes "S-Senhora Wickebine...!";
		mes "Perdoe-me, estou supreso que você tenha vindo até aqui.";
		mes "Por acaso você sabe quem é essa menina?";
		next;
		cutin("job_black_hucke02",1);
		mes "[Wickebine]";
		mes "Oh, esta é Nyuyang minha irmã mais nova.";
		mes "Pode parecer difícil de encontrar semelhança entre nós, mas somos irmãs...";
		mes "De qualquer forma, estive procurando-a por todos os cantos.";
		mes "Por acaso minha irmã Nyuyang estava o incomodando Charles?";
		next;
		cutin("nyuang_3",2);
		emotion(e_heh,0,"Menina com gato#cook");
		mes "[Menina com gato]";
		mes "Nyuuuunyuuu nyuuuunyuuu";
		mes "Miaaaaau";
		next;
		cutin("orleans_3",0);
		mes "[Charles Orleans]";
		mes "...!!!";
		next;
		cutin("job_black_hucke03",1);
		mes "[Wickebine]";
		mes "Ah, então ela estava te incomodando!";
		mes "Então Charles você quer que ela vá embora?";
		next;
		cutin("orleans_3",0);
		emotion(e_swt2);
		mes "[Charles Orleans]";
		mes "Hahahahah, o que você está dizendo!";
		mes "Não tem sentido!";
		mes "Como essa bela e pequena menina poderia estar causando algum problema para mim?";
		next;
		cutin("orleans_7",0);
		mes "[Charles Orleans]";
		mes "É um fato interessante, eu estava prestes a convidar essa preciosa menina e e seu gato para provar de minha deliciosa culinária.";
		mes "Não se preocupe, madame";
		next;
		cutin("job_black_hucke01",1);
		emotion(e_what,0,"Wickebine#cook");
		mes "[Wickebine]";
		mes "Tem certeza, Charles?";
		mes "Eu sei o quão sério você é sobre sua cozinha, e eu não quero que Nyuyang te perturbe de nenhuma maneira...";
		next;
		cutin("job_black_hucke02",1);
		mes "[Wickebine]";
		mes "Oh, Charles, mas já que me disse que ela não te causou nenhum tipo de problema.";
		mes "Fico contente que você esteja se dando bem com a Nyuyang.";
		mes "Bem então, tome cuidado";
		next;
		cutin("nyuang_3",2);
		emotion(e_heh,0,"Menina com gato#cook");
		mes "[Menina com gato]";
		mes "Nyahahaha";
		mes "Nyahahaha";
		mes "(Miau, miau)";
		next;
		cutin("job_black_hucke02",255);
		emotion(e_ho,0,"Wickebine#cook");
		donpcevent("Wickebine#cook::OnDisable");
		next;
		emotion(e_dots);
		emotion(e_dots,0,"Menina com gato#cook");
		mes "[Charles Orleans]";
		mes "......";
		next;
		cutin("orleans_6",0);
		mes "[Charles Orleans]";
		mes "Oh...";
		mes "Ai está uma verdadeira senhora...";
		mes "Madame Wickebine...";
		close2; cutin("",255); end;
	} else if (cooking_q == 10) {
		cutin("orleans_5",0);
		mes "[Charles Orleans]";
		mes "O que tem me incomodado é o fato de sua alteza ter desaparecido a algum tempo.";
		mes "Porque será que ninguém sabe onde ele está?";
		next;
		cutin("orleans_3",0);
		mes "[Charles Orleans]";
		mes "O sábio e benevolente Rei Tristram III que nunca abandona seus súditos.";
		mes "Espero que nada de ruim possa ter acontecido com ele...";
		next;
		cutin("orleans_6",0);
		mes "[Charles Orleans]";
		mes "Como seria possível que o nossos amado rei possa ter inimigos?";
		mes "Ele nunca fez nada que não fosse bom para o reino de Rune-Midgard e nem para o resto do mundo!";
		next;
		mes "[Charles Orleans]";
		mes "Não consigo imaginar que tipo de problemas uma pessoa tão boa como ele poderia causar.";
		mes "Tenho vontade de rir sempre que alguém diz que acha que ele está escondido na república de Schwarzwald...";
		next;
		emotion(e_go);
		mes "[Charles Orleans]";
		mes "Todos salvem o glorioso reino de Rune-Midgard!";
		mes "Vida longa ao Rei Tristram III!";
		close2; cutin("",255); end;
	} else if (cooking_q == 11) {
		cutin("orleans_5",0);
		emotion(e_dots);
		mes "[Charles Orleans]";
		mes "Oh, eu estou precisando muito de um descanso.";
		mes "A menos que tenha algo incrivelmente importante para me perguntar, deixe-me descansar.";
		next;
		switch (select("Quero aprender mais","Para quem você cozinha?","Me desculpe...")) {
			case 1:
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Você quer aprender mais receitas?";
			mes "Então suponho que você quer pedir outro livro de receitas.";
			mes "Antes disso, por favor devolva o livro de receitas que você estava estudando, ok?";
			next;
			mes "[Charles Orleans]";
			mes "Agora, escolha o livro de receitas que você quer pedir, de um nível entre 1 e 5.";
			mes "Existem outros livros mais avnçados, mas eu não estou emprestando-os para fora.";
			mes "Ah, e se quiser digite 0 para cancelar.";
			next;
			input(.@new_book);
			if (.@new_book < 0 || .@new_book > 5) {
				cutin("orleans_5",0);
				mes "[Charles Orleans]";
				mes "Hum...";
				mes "Eu disse para você digitar um nível entre 1 e 5.";
				mes "Esses são os únicos livros de culinária que eu vou emprestar aos meus alunos.";
				close2; cutin("",255); end;
			} else if (.@new_book == 0) {
				cutin("orleans_5",0);
				mes "[Charles Orleans]";
				mes "Então você mudou de idéia?";
				mes "Também acho melhor que você estude as receitas que tem agora antes de tentar algo novo.";
				close2; cutin("",255); end;
			}
			mes "[Charles Orleans]";
			mes "Então você queria pedir um livro de culinária nível "+.@new_book+", eh?";
			mes "Oh, poderia por favor me dizer o nível do livro de receitas que você está me devolvendo?";
			next;
			input(.@old_book);
			if (.@old_book < 0 || .@old_book > 5) {
				mes "[Charles Orleans]";
				mes "Deve haver algum tipo de erro eu apenas empresto livros de culinária de nível 1 ao 5.";
				mes "Bem, fale comigo novamente quando você lembrar o nível do livro que está com você, ok?";
				close2; cutin("",255); end;
			} else if (.@old_book == 0) {
				cutin("orleans_5",0);
				mes "[Charles Orleans]";
				mes "Então você mudou de idéia?";
				mes "Também acho melhor que você estude as receitas que já possui antes de tentar algo novo.";
				close2; cutin("",255); end;
			} else if (.@old_book == .@new_book) {
				cutin("orleans_4",0);
				mes "[Charles Orleans]";
				mes "Espere, espere...";
				mes "Porque você quer pedir uma cópia do livro de culinária que você já possui?";
				mes "Acho que você cometeu um pequeno engano em?";
				close2; cutin("",255); end;
			} else {
				if (countitem(7471 + .@old_book) < 1) {
					mes "[Charles Orleans]";
					mes "Espere, Espere...";
					mes "Porque você não tem o livro que disse que iria me devolver?";
					mes "Encontre-o primeiro, e então poderei emprestar outro livro de culinária a você.";
					close2; cutin("",255); end;
				}
				cutin("orleans_2",0);
				mes "[Charles Orleans]";
				switch (.@old_book) {
					case 1:
					mes "Ah, então você terminou de ler o livro de culinária nível 1.";
					mes "Isso é bom, significa que você já sabe o básico do básico.";
					mes "A partir de agora, as receitas serão mais difíceis...";
					break;
					case 2:
					mes "Ah, então você aprendeu as receitas do livro de culinária nível 2?";
					mes "Cozinhar corretamente pode ser simples, e um verdadeiro chefe nunca pode ser negligente.";
					break;
					case 3:
					mes "Ah, terminou de ler o livro de Culinária nível 3?";
					mes "Essas receitas são realmente boas, principalmente quando se está fazendo jantares românticos.";
					mes "As vezes elas vêm em dias úteis, se é que você sabe o que quero dizer.";
					break;
					case 4:
					mes "Então já terminou de ler o livro de Culinária nível 4.";
					mes "Isso não é pouca coisa!";
					mes "Pois com o aprendizado você pode usar ingredientes estranhos para fazer pratos deliciosos!";
					break;
					case 5:
					mes "Você já aprendeu o livro de Culinária nível 5?";
					mes "Bom trabalho alguns dos novatos não conseguem chegar até esse nível.";
					mes "Suponho que você queira rever algumas das receitas mais fáceis agora";
					break;
				}
				next;
			}
			cutin("orleans_1",0);
			mes "[Charles Orleans]";
			mes "Espere, antes de lhe emprestar um dos meus amados livros de culinária.";
			mes "Tenho uma pequena exigência que você deve cumprir. ";
			next;
			if (.@new_book == 1) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Quando eu era uma criança, minha família ficou tão pobre ao ponto de comer sobras de vegetais.";
				mes "Até mesmo ração para monstros era uma deliciosa refeição naquele tempo.";
				next;
				mes "[Charles Orleans]";
				mes "Meu pai só nos servia abóbora.";
				mes "Eu cresci, mas era um garoto que estava sempre doente, e agora me veio de volta lembranças daqueles dias inocentes.";
				next;
				mes "[Charles Orleans]";
				mes "Por que não fazemos assim?";
				mes "Se você me trazer 10 abóboras, eu te deixo pegar o meu livro de culinária nível 1.";
				if (countitem(Pumpkin) > 9) {
					next;
					if (select("Dar 10 Abóboras e o Livro","Cancelar") == 1) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Perfeito, você me trouxe 10 Abóboras!";
						mes "Eu mal posso esperar para experimentar novamente os sabores experimentados na minha infância.";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Ah, como eu sinto falta do gosto das abóboras!";
						mes "Ahhh, como é nostálgico";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			} else if (.@new_book== 2) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Hoje eu estou com vontade de tomar um chicara de chá.";
				mes "E claro, que você não pode beber um chá sem bolachas ou biscoitos.";
				mes "Por favor traga-me 5 bicoitos bem cozidos e em troca te emprestarei meu livro de Culinária nível 2.";
				if (countitem(Well_Baked_Cookie) > 4) {
					next;
					if (select("Entregar Biscoitos e Livro","Cancelar") == 1) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Nossa, você trouxe esses biscoitos muito mais rápido do que eu esperava!";
						mes "Ótimo, agora eu posso relaxar tomando meu chá aproveitando esse delicioso lanche";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Hum...";
						mes "Em breve poderei tomar meu chá...";
						mes "Mas a experiência não estará completa sem os deliciosos biscoitos bem cozidos";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			} else if (.@new_book== 3) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Você sabe qual é o prato especial de Amatsu?";
				mes "Tenho sentido falta dele ultimamente.";
				mes "Por favor traga-me 5 Sushi, e eu te emprestarei o meu livro de culinária nível 3, certo?";
				if (countitem(Shusi) > 4) {
					next;
					if (select("Entregar Sushi e Livro","Cancelar")) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Ah, parecem tão frescos!";
						mes "E a aparência também está maravilhosa!";
						mes "Estes concerteza foram preparados por um Chefe habilidoso!";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Ahhh, Sushi...";
						mes "É uma das poucas coisas que eu não sei como fazer muito bem.";
						mes "Da para acreditar nisso?";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			} else if (.@new_book== 4) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Estou com vontade de comer da culinária de Kunlun.";
				mes "Você poderia trazer para mim aqueles deliciosos Bao?";
				mes "5 deles seria perfeito.";
				mes "Então se me trouxer te emprestarei meu Livro de Culinária nível 4.";
				if (countitem(Bun) > 4) {
					next;
					if (select("Entregar Bao e Livro","Cancelar") == 1) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Ótimo, você realmente trouxe eles!";
						mes "Esses Baos tem uma aparência especialmente deliciosa!";
						mes "Eu mal posso ver a hora de come-lós!";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Ah...";
						mes "Faz bastante tempo desde que eu provei um delicioso Bao.";
						mes "Eu poderia cozinhá-lós eu mesmo, mas eu não sei o segredo!";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			} else if (.@new_book== 5) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Ultimamente, em minha despensa tenho precisado de alguns brotos.";
				mes "Eles são um ingrediente saboroso com um valor indispensável para saúde.";
				mes "Traga-me 10 desses e eu te emprestarei meu Livro de Culinária nível 5.";
				if (countitem(Shoot) > 9) {
					next;
					if (select("Dar os brotos e o Livro","Cancelar") == 1) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Meu Deus, estes são brotos de alta qualidade!";
						mes "Eles têm uma aparência tão boa, eu concerteza digo que se pode comê-los até mesmo cru!";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Eu vou precisar fazer uma receita com brotos em breve.";
						mes "Irei te agradecer muito se você puder me fazer esse pequeno favor";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			}

			if (.@old_book == 1) { delitem(Cookbook01,1); }
			else if (.@old_book == 2) { delitem(Cookbook02,1); }
			else if (.@old_book == 3) { delitem(Cookbook03,1); }
			else if (.@old_book == 4) { delitem(Cookbook04,1); }
			else if (.@old_book == 5) { delitem(Cookbook05,1); }
			if (.@new_book == 1) {
				delitem(Pumpkin,10);
				getitem(Cookbook01,1);
			} else if (.@new_book== 2) {
				delitem(Well_Baked_Cookie,5);
				getitem(Cookbook02,1);
			} else if (.@new_book== 3) {
				delitem(Shusi,5);
				getitem(Cookbook03,1);
			} else if (.@new_book== 4) {
				delitem(Bun,5);
				getitem(Cookbook04,1);
			} else if (.@new_book== 5) {
				delitem(Shoot,10);
				getitem(Cookbook05,1);
			}
			mes "[Charles Orleans]";
			mes "Bem, como prometido, aqui está o Livro de Culinária que você me pediu.";
			mes "Cuide bem dele e não o venda, perca ou qualquer coisa assim.";
			mes "Boa sorte nas suas receitas";
			close2; cutin("",255); end;
			case 2:
			cutin("orleans_3",0);
			mes "[Charles Orleans]";
			mes "O que quer dizer com, 'Para quem eu cozinho?'";
			mes "Essa é uma pergunta estranha mas com uma resposta simples.";
			mes "Eu sou um artista e devo trazer mais da minha arte para o mundo.";
			next;
			cutin("orleans_3",0);
			mes "[Charles Orleans]";
			mes "Espere, espere...";
			mes "Quando você foi falar com a Madeleine Chu?";
			mes "Ela não disse nada fora do comum não é?";
			mes "Por que, se ela disse, ignore-a!";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Não.";
			mes "Não há nenhuma razão especial.";
			mes "Apenas minha inspiração para criar essas obras de arte culinárias foi revigorada ultimamente...";
			close2; cutin("",255); end;
			case 3:
			cutin("orleans_5",0);
			mes "[Charles Orleans]";
			mes "Por favor, não se preocupe com isso.";
			mes "Deixe apenas que eu descanse um pouco agora";
			close2; cutin("",255); end;
		}
	} else {
		mes "[Charles Orleans]";
		mes "Mon dieu!";
		mes "Algo de errado aconteceu!";
		close2; cutin("",255); end;
	}
}

prt_castle,45,35,5	script	Madeleine Chu#cook	4_COOK,{
	if (MaxWeight - Weight < 2000) {
		mes "[Madeleine Chu]";
		mes "Sinto muito, mas agora você está carregando muitos itens.";
		mes "Você deve colocar os seus itens a mais no Armazém Kafra, e depois volte e fale comigo, ok? ";
		close;
	}
	if (cooking_q == 0) {
		mes "[Madeleine Chu]";
		mes "Ah, olá";
		mes "Eu sou Madeleine Chu, chefe aprendiz do Senhor Charles.";
		mes "Posso te ajudar com alguma coisa hoje?";
		next;
		switch (select("O que você faz como Chefe?","Quais as comidas você faz?","Quero aprender a cozinhar!")) {
			case 1:
			mes "[Madeleine Chu]";
			mes "O que eu faço como uma Chefe?";
			mes "Bem, eu sou apenas uma aprendiz, então ainda estou aprendendo a cozinhar.";
			mes "Mas um dia, eu vou me tornar uma grande Chefe e todo mundo irá reconhecer meus talentos culinários";
			next;
			mes "[Madeleine Chu]";
			mes "Cozinhar é um trabalho um tanto quanto cansativo, é preciso ter muita delicadeza.";
			mes "Além de que também tenho de saber controlar bem o fogo e fazer pratos bonitos assim como os verdadeiros artistas fazem.";
			next;
			mes "[Madeleine Chu]";
			mes "Bem, eu posso estar exagerando um pouco.";
			mes "Mas cozinhar não é assim tão fácil, é bem mais difícil do que parece.";
			close;
			case 2:
			mes "[Madeleine Chu]";
			mes "Por enquanto eu só sei as receitas básicas.";
			mes "Sr. Charles diz que os melhores chefes são aqueles que sabem trazer o melhor sabor até mesmo de alimentos simples.";
			next;
			mes "[Madeleine Chu]";
			mes "Ele diz que eu preciso desenvolver minhas habilidades culinárias, para aprender receitas avançadas.";
			mes "Algum dia, eu vou avançar e depois eu serei capaz de criar os meus próprios pratos deliciosos.";
			next;
			mes "[Madeleine Chu]";
			mes "Sr. Charles pode pegar pesado com seus alunos, mas suas habilidades são inigualáveis.";
			mes "Provei uma de suas sobremesas uma vez, e foi uma experiência ótima, era como estar no céu.";
			mes "Eu juro que vi corações alados!";
			next;
			mes "[Madeleine Chu]";
			mes "Infelizmente, eu ainda tenho um longo caminho de aprendizado a percorrer para conseguir fazer suas especialidades com chocolates.";
			mes "Antes disso, eu preciso dominar essas receitas estranhas que ele está me ensinando...";
			close;
			case 3:
			mes "[Madeleine Chu]";
			mes "Se você quer aprender a cozinhar, por que não fala com o Sr. Charles?";
			mes "Ele é bastante duro com seus alunos, mas é muito dificíl para ele agir assim.";
			mes "Ele exige nada menos do que perfeição absoluta, você sabe.";
			next;
			mes "[Madeleine Chu]";
			mes "Se você tiver o";
			mes "Sr. Charles para lhe ensinar uma receita, você deve praticar uma ou outra vez para aprimorar suas habilidades.";
			mes "Então, você vai conseguir ver que está melhorando na cozinha.";
			next;
			mes "[Madeleine Chu]";
			mes "Agora, Sr. Charles somente ensina a alunos que se dedicam verdadeiramente ao compromisso de cozinhar.";
			mes "Você pode mostrar sua dedicação com um bom traje...";
			mes "Como um chapéu de chefe.";
			next;
			mes "[Madeleine Chu]";
			mes "Mas sim, Sr. Charles tem muito pouca paciência com novatos.";
			mes "O que significa que você irá precisar ter muita paciência com seus métodos de ensino...";
			close;
		}
	} else if (cooking_q > 0 && cooking_q < 7) {
		mes "[Madeleine Chu]";
		mes "Olá, posso te ajudar de alguma forma hoje";
		mes "Ah, se você está estudando culinária com o Sr. Charles, eu posso lembrar dos ingredientes que você precisa se os tiver esquecido";
		next;
		switch (select("Pernas de Gafanhoto Frita","Chá de Ervas com Suco de Uva","Suco de Uvas com Mel","Sopa de Ovos de Sapo e Tinta de Lula","Garras de Caranguejo Cozidas no Vapor","Rabo de Macaco Frito")) {
			case 1:
			mes "[Madeleine Chu]";
			mes "Ah! você precisa de";
			mes "^4D4DFF5 Pernas de Gafanhoto^000000,";
			mes "^4D4DFF1 Óleo de Cozinha^000000, e";
			mes "^4D4DFF1 Frigideira Velha^000000 para fazer";
			mes "Pernas de Gafanhoto Fritas.";
			break;
			case 2:
			mes "[Madeleine Chu]";
			mes "Ah! você precisa de";
			mes "^4D4DFF3 Uvas^000000, e";
			mes "^4D4DFF2 Poções Vermelhas^000000 para fazer";
			mes "Chá de Ervas com Suco de Uva.";
			break;
			case 3:
			mes "[Madeleine Chu]";
			mes "Ah! você precisa de";
			mes "^4D4DFF1 Mel^000000,";
			mes "^4D4DFF2 Uvas^000000, e";
			mes "^4D4DFF1 Poção Vermelha^000000.";
			break;
			case 4:
			mes "[Madeleine Chu]";
			mes "Ah! você precisa de";
			mes "^4D4DFF1 Bolsa de grãos^000000,";
			mes "^4D4DFF10 Ovos de Sapo^000000, e";
			mes "^4D4DFF1 Tinta de Lula^000000 para preparar a Sopa de Ovos";
			mes "de Sapo com Tinta de Lula.";
			break;
			case 5:
			mes "[Madeleine Chu]";
			mes "Ah! você precisa de";
			mes "^4D4DFF10 Ervas Verdes^000000,";
			mes "^4D4DFF10 Garras de Carangueijo^000000, e";
			mes "^4D4DFF1 Poção Amarela ^000000 para as";
			mes "Garras de Carangueijo Cozidas no Vapor.";
			break;
			case 6:
			mes "[Madeleine Chu]";
			mes "Ah! você precisa de";
			mes "^4D4DFF1 Frigideira Velha^000000,";
			mes "^4D4DFF5 Caldas de Yoyo^000000, e";
			mes "^4D4DFF1 Óleo de Cozinha^000000 para os";
			mes "Rabos de Macaco Fritos.";
			break;
		}
		next;
		mes "[Madeleine Chu]";
		mes "Eu sei que o Sr. Charles é teimoso e não irá dizer os ingredientes novamente se você perguntar.";
		mes "De quakquer forma, espero que você colete os ingredientes e complete a receita assim que puder";
		close;
	} else if (cooking_q == 7) {
		mes "[Madeleine Chu]";
		mes "Sr. Charles ensinou uma receita a você?";
		mes "Isso é ótimo!";
		mes "Espero que você lembre-se que a qualidade dos seus pratos é o mais importante.";
		mes "Que se baseia em suas habilidades, então continue sempre praticando.";
		next;
		mes "[Madeleine Chu]";
		mes "Ah, você sabe o que pode ajudá-lo a melhorar suas habilidades culinárias?";
		mes "Por que você não pega emprestado esse Livro de Culinária e tenta criar algumas de suas receitas?";
		next;
		mes "[Madeleine Chu]";
		mes "Antes de cozinhar, tenha certeza de que você possui todos os ingredientes necessários.";
		mes "Ah, e mantenha o livro de culinárias por perto enquanto cozinha.";
		mes "Você provavelmente irá precisar consultá-lo com muita frequência...";
		next;
		mes "[Madeleine Chu]";
		mes "Você pode falhar algumas vezes enquanto prepara os alimentos,nas suas primeiras tentativas, mas com a prática você melhora.";
		mes "Por favor pegue este Livro de Culinária";
		mes "Básica de Nível 1 e tente fazer suas receitas.";
		cooking_q = 8;
		getitem(Cookbook01,1);
		next;
		mes "[Madeleine Chu]";
		mes "Depois de ter aprendido todas as receitas,";
		mes "sinta-se a vontade para voltar a falar comigo, ok? Ah é, você também";
		mes "vai precisar desse Kits de Cozinha para começar.";
		mes "Vou te dar esses de graça, e caso precise de mais você poderá comprar eles de mim";
		getitem(Outdoor_Cooking_Kits,10);
		close;
	} else if (cooking_q == 8) {
		mes "[Madeleine Chu]";
		mes "Então como tem se saido na cozinha?";
		mes "Você precisa praticar para desenvolver cada vez mais suas habilidades culinárias.";
		mes "Agora, posso te ajudar em alguma coisa?";
		next;
		switch (select("Preciso de Kits de Cozinha","Gostaria de provar os pratos que fiz?","Como está a comida que eu fiz?")) {
			case 1:
			mes "[Madeleine Chu]";
			mes "Claro, qual tipo de Kit de culinária você precisa?";
			next;
			switch (select("Kit de Culinária Portátil - 500z","Kit de Culinária Caseiro - 1,000z","Cancelar")) {
				case 1:
				callsub(S_SellSets,12125);
				close;
				case 2:
				mes "[Madeleine Chu]";
				mes "Ah, me desculpe, mas você não possui habilidades culinárias o bastante para usar o Kit de Culinária caseiro.";
				mes "Por favor pratique usando o Kit de Culinária Portátil primeiro, tudo bem?";
				close;
				case 3:
				mes "[Madeleine Chu]";
				mes "Por favor volte a falar comigo quando precisar de algum Kit de Culinária, tudo bem?";
				mes "Vejo você depois.";
				close;
			}
			case 2:
			if (countitem(Str_Dish01) && countitem(Int_Dish01) && countitem(Dex_Dish01) && countitem(Agi_Dish01) && countitem(Vit_Dish01) && countitem(Luk_Dish01)) {
				mes "[Madeleine Chu]";
				mes "Ah, você fez uma amostra detalhada de cada uma das receitas do livro de culinária básico, não é?";
				mes "Isso deve ter sido um ótimo treinamento para suas habilidades culinárias.";
				next;
				mes "[Madeleine Chu]";
				mes "Eu adoraria provar de sua comida e dar minha opinião.";
				mes "Mas você se importaria se eu pedisse um favor primeiro?";
				mes "Eu tenho um amigo em Payon que veio para estudar culinária em Prontera.";
				next;
				mes "[Madeleine Chu]";
				mes "No entanto, ele ficou frustrado com as aulas de culinária e deixou a cidade de Prontera.";
				mes "Você deve entregar uma encomenda a ele.";
				mes "Aqui, irei embrulhar sua comida neste pacote...";
				next;
				delitem(Str_Dish01,1);
				delitem(Int_Dish01,1);
				delitem(Dex_Dish01,1);
				delitem(Agi_Dish01,1);
				delitem(Vit_Dish01,1);
				delitem(Luk_Dish01,1);
				cooking_q = 9;
				getitem(Food_Package,1);
				mes "[Madeleine Chu]";
				mes "Agora pode ir, o pacote está pronto para ser entregue.";
				mes "Agora, lembre-se que você não deve abrir isso antes de entregar ao meu amigo, Chulsoo.";
				mes "Você pode encontrá-lo pelos arredores de Payon...";
				next;
				mes "[Madeleine Chu]";
				mes "Você deve ser capaz de encontrar Chulsoo próximo ao moinho de água ou no bar em Payon.";
				mes "Ah, e não esqueça de dizer para ele que eu mandei você, ok? Obrigada";
				close;
			} else {
				mes "[Madeleine Chu]";
				mes "Hum... Eu acho que seria melhor se você tentasse fazer cada uma das receitas do Livro de Culinária Básico que te dei primeiro.";
				mes "Dessa maneita, poderei avaliar melhor suas habilidades.";
				next;
				mes "[Madeleine Chu]";
				mes "Não é ruim concentrar-se em";
				mes "apenas uma receita, mas";
				mes "como um novato, você precisa";
				mes "aprender todo o básico.";
				mes "Por favor leia o Livro de Culinária que te dei atentamente, ok?";
				close;
			}
			case 3:
			if (countitem(Str_Dish01) || countitem(Int_Dish01) || countitem(Dex_Dish01) || countitem(Agi_Dish01) || countitem(Vit_Dish01) || countitem(Luk_Dish01)) {
				mes "[Madeleine Chu]";
				mes "Ah, vejo que você tentou algumas das receitas do Livro de Culinária Básica que te dei.";
				mes "Tudo que você fez parece delicioso.";
				mes "Tudo que precisa agora é de alguém para provar...";
				close;
			} else {
				mes "[Madeleine Chu]";
				mes "Bem... Eu não sei...";
				mes "Eu acho que você deveria tentar";
				mes "fazer cada uma das receitas listadas";
				mes "no livro de culinária básica que";
				mes "eu dei para você primeiro. E então, você";
				mes "poderá apresentar seus pratos";
				close;
			}
		}
	} else if (cooking_q == 9) {
		if (countitem(Food_Package)) {
			mes "[Madeleine Chu]";
			mes "Por favor procure meu amigo Chulsoo em Payon e entregue a ele o pacote de comida, assim ele poderá provar os pratos que você fez.";
			close;
		} else {
			mes "[Madeleine Chu]";
			mes "Ah, oi, poderia me dar um segundo?";
			mes "Agora, eu preciso fritar isso, tenho de me concentrar por um tempo.";
			mes "Hahahaha.";
			next;
			mes "[Madeleine Chu]";
			mes "Ah, então você já conheceu Chulsoo, o meu amigo?";
			mes "Você deu a ele o pacote de comida, certo?";
			mes "Eu ficaria desapontada se você perdesse ou o vendesse...";
			next;
			if (select("Eu entreguei!","Eu perdi o pacote de comida!") == 1) {
				mes "[Madeleine Chu]";
				mes "Hahaha, sabia que você entregaria.";
				mes "Mesmo que você não tivesse entregado ainda, certifique-se de que irá entregar depois, tudo bem? Te vejo depois";
				close;
			}
			if (countitem(Cookbook01) > 0) {
				mes "[Madeleine Chu]";
				mes "Você perdeu?";
				mes "Ah, isso não é bom.";
				mes "Como você pôde desrepeitar as artes culinárias desta forma?";
				mes "Eu estou muito desapontada com você...";
				next;
				delitem(Cookbook01,1);
				cooking_q = 0;
				mes "[Madeleine Chu]";
				mes "Antes de mais nada, eu gostaria de pedir de volta meu livro de culinária.";
				mes "Eu quero que você reflita sobre o que fez, e comece novamente o treinamento de culinária com o Sr. Charles, desde o início.";
				close;
			} else {
				mes "[Madeleine Chu]";
				mes "Você deve estar brincando...";
				mes "Tenho certeza de que você deve ter escondido em algum lugar.";
				mes "Mas de toda forma, por favor entregue o pacote de comida ao Chulsoo.";
				close;
			}
		}
	} else if (cooking_q == 10) {
		mes "[Madeleine Chu]";
		mes "Eu acabei de receber uma mensagem de Chulsoo agradecendo por eu ter mandando você levar a comida até ele.";
		mes "Com certeza ele realmente gostou de sua comida.";
		next;
		mes "[Madeleine Chu]";
		mes "Acredito que você está pronto para usar os ingredientes já em um nível superior.";
		mes "Mas nunca se esqueça que suas prórprias habilidades são mais importantes no fator qualidade em uma cozinha.";
		next;
		cooking_q = 11;
		getitem(Indoor_Cooking_Kits,10);
		mes "[Madeleine Chu]";
		mes "Por favor tente usar esses Kits de Culinária, eles irão te ajudar a criar pratos delicados.";
		mes "Quando eles acabarem, fique a vontade para comprar mais um de mim se quiser, certo?";
		next;
		mes "[Madeleine Chu]";
		mes "Além disso, se também quiser aprender algumas receitas novas, por que não fala com Sr.";
		mes "Charles novamente?";
		mes "Então boa Sorte, nos vemos depois ";
		close;
	} else if (cooking_q == 11) {
		mes "[Madeleine Chu]";
		mes "Como você está?";
		mes "Espero que você tenha aprimorado suas habilidades culinárias.";
		mes "Posso ajudá-lo com algo em particular";
		next;
		switch (select("Preciso de Kits de Culinária","Como vai o Sr. Charles?","Um, quem é aquela criança?")) {
			case 1:
			mes "[Madeleine Chu]";
			mes "Claro, qual tipo de Kit de Culinária você precisa?";
			next;
			switch (select("Kit de Culinária Portátil - 500z","Kit de Culinária Caseiro - 1,000z","Mostre-me outros Kits","Cancelar")) {
				case 1:
				callsub(S_SellSets,12125);
				close;
				case 2:
				callsub(S_SellSets,12126);
				close;
				case 3:
				mes "[Madeleine Chu]";
				mes "Bem, Eu tenho apenas dois tipos de Kits de culinária.";
				mes "Apesar de que existe um Kit Superior o Kit de Culinária Profissional que é para verdadeiros especialistas, como o Sr. Charles.";
				mes "Incrível, não é?";
				next;
				mes "[Madeleine Chu]";
				mes "Você ainda é um novato, então meus kits irão te servir muito bem.";
				mes "Você sabe, há um boato sobre um Kit de Culinária que pode fazer perfeitamente qualquer receita, contanto que se possua todos os ingredientes.";
				next;
				mes "[Madeleine Chu]";
				mes "Claro, é apenas um boato, provavelmente apenas uma imaginação de alguém.";
				mes "Eu acredito que as próprias habilidades são o ingrediente mais importante";
				close;
				case 4:
				mes "[Madeleine Chu]";
				mes "Por favor volte a falar comigo quando precisar comprar algum kit, certo?";
				mes "Vejo você depois";
				close;
			}
			case 2:
			mes "[Madeleine Chu]";
			mes "Hum? Sr. Charles está muito bem, mas ultimamente ele tem ficado muito chateado com coisas muito pequenas.";
			mes "Acho que, ele está sendo incompreensivel.";
			next;
			.@talk_j = rand(1,3);
			if (.@talk_j == 1) {
				mes "[Madeleine Chu]";
				mes "Você sabe, quando eu conheci ele pela primeira vez, confesso que pensava que ele era bom apenas em fazer doces como chocolates e caramelos.";
				mes "No entando, ele está altamente qualificado em cozinhar quase tudo!";
				next;
				mes "[Madeleine Chu]";
				mes "Eu acho que ele deve estar concentrando-se em outros tipos de sobremesas por causa do aparecimento do nosso rei.";
				mes "Eu me pergunto se o desaparecimento do Rei Tristram III's está relacionado com a recente mudança de humor do Sr. Charles?";
				close;
			} else if (.@talk_j == 2) {
				mes "[Madeleine Chu]";
				mes "Quero dizer, o Sr. Charles parece ser do tipo que tem problema em se abrir com as outras pessoas.";
				mes "Isso pode explicar por que ele é muito mais agradável com as mulheres do que com os homens.";
				mes "Isso não faz sentido?";
				close;
			} else {
				mes "[Madeleine Chu]";
				mes "Talvez seja porque ele";
				mes "está fazendo experiências com";
				mes "novas receitas ultimamente. Eu acho";
				mes "que ele mencionou algo sobre";
				mes "querer fazer a melhor receita de";
				mes "todos os tempos para uma mulher.";
				next;
				mes "[Madeleine Chu]";
				mes "Eu nunca vi o Sr. Charles tão animado antes.";
				mes "Aquela mulher deve ter muita sorte.";
				mes "Ela pode comer as comidas dele todos os dias que quiser!";
				mes "Eu estou quase com ciúmes dela, você sabia disso?";
				close;
			}
			case 3:
			mes "[Madeleine Chu]";
			mes "Ah, você quer dizer a Menina com gato?";
			mes "Eu não tenho certeza, mas acho que ouvi dizer que ela talvez seja a irmã mais nova da Senhora Wickebine.";
			next;
			mes "[Madeleine Chu]";
			mes "Eu me pergunto porque o Sr. Charles da tal tratamento especial a Senhora Wickebine.";
			mes "Sempre que eu falo sobre isso com ele, ele acaba ficando chateado e não diz nada!";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Nossa!";
			mes "Eu senti um frio na espinha...";
			mes "Será que alguém está falando sobre mim?";
			close2;
			cutin("",255);
			end;
		}
	} else {
		mes "[Madeleine Chu]";
		mes "..........";
		close;
	}

	S_SellSets:
	.@item_cost = getiteminfo(getarg(0),0);
	.@item_weight = getiteminfo(getarg(0),6);
	mes "[Madeleine Chu]";
	mes "Quantos Kits de Culinária"+(getarg(0) == 12125 ? "Portáteis":"Caseiros")+" você gostaria de comprar?";
	mes "Se você quiser cancelar, por favor digite o número 0.";
	next;
	while (true) {
		input(.@sell);
		if (.@sell == 0) {
			mes "[Madeleine Chu]";
			mes "Você mudou de idéia?";
			mes "Bem, quando você precisar comprar "+getitemname(getarg(0))+" kits, volte a falar comigo novamente, certo?";
			close;
		} else if (.@sell > 100) {
			mes "[Madeleine Chu]";
			mes "Ah, desculpe, mas eu não vendo mais do que 100 "+getitemname(getarg(0))+" de uma vez, é apenas por segurança.";
			next;
		}
		else { break; }
	}
	.@total_cost = .@sell * .@item_cost;
	.@total_weight = .@sell * .@item_weight;
	if (Zeny < .@total_cost) {
		mes "[Madeleine Chu]";
		mes "Ah, desculpe, mas você você não pode comprar "+getitemname(getarg(0));
		mes "Por favor verifique seus Zenys antes de comprar meus kits";
		close;
	}
	if (!checkweight(getarg(0),.@sell)) {
		mes "[Madeleine Chu]";
		mes "Desculpe, mas você não possui espaço suficiente em seu inventário para tantos "+getitemname(getarg(0))+"...";
		close;
	}
	Zeny -= .@total_cost;
	getitem(getarg(0),.@sell);
	mes "[Madeleine Chu]";
	mes "Aqui está.";
	mes "Boa sorte com sua formação culinária!";
	return;
}

prt_castle,45,28,3	script	Menina com gato#cook	4_F_YUNYANG,{
	.@nyu = rand(1,2);
	if (.@nyu == 1) {
		cutin("nyuang_1",2);
		emotion(e_what);
		mes "[Menina com gato]";
		mes "...Nya?";
		mes "(...Miau?)";
		close2;
		cutin("",255);
		end;
	} else {
		cutin("nyuang_3",2);
		emotion(e_ho);
		mes "[Menina com gato]";
		mes "Nyahahahaha,";
		mes "nyahahahaha";
		mes "(Miau, miau)";
		close2;
		cutin("",255);
		end;
	}
}

prt_castle,44,30,5	script	Wickebine#cook	4_F_JOB_ASSASSIN,{
	//disablenpc("Wickebine#cook");
	end;

	OnInit:
	disablenpc(strnpcinfo(PC_NAME));
	end;

	OnEnable:
	enablenpc(strnpcinfo(PC_NAME));
	end;

	OnDisable:
	disablenpc(strnpcinfo(PC_NAME));
	end;
}

payon,209,127,3	script	Servo#cook	4_M_ORIENT01,{
	if (!checkweight(Rice_Cake,1)) {
		mes "[Chulsoo]";
		mes "Espere, você está carregando muitos itens com você.";
		mes "Por que não guarda alguns dos seus itens no Armazém Kafra antes de falar comigo?";
		close;
	}
	if (cooking_q == 10) {
		mes "[Chulsoo]";
		mes "Quando você tiver a chance, por favor dê a Madeline meus agradecimentos.";
		mes "Logo irei visitar Prontera para vê-la, e também para fazer as pazes com o Sr. Charles.";
		close;
	} else if (cooking_q == 9) {
		mes "[Chulsoo]";
		mes "Você gostaria de comprar um bolinho de arroz?";
		mes "Só irá custar 200 zeny, mas é muito gostoso";
		next;
		switch (select("Claro, eu vou comprar um!","Não, obrigado","Na verdade, Madeleine me enviou...")) {
			case 1:
			if (Zeny < 200) {
				mes "[Chulsoo]";
				mes "Ah, me desculpe, mas você não possui a quantia em dinheiro necessária para comprar o Bolinho de Arroz...";
				mes "Ainda assim, deve ser fácil conseguir 200 zeny, certo?";
				close;
			} else {
				Zeny -= 200;
				getitem(Rice_Cake,1);
				mes "[Chulsoo]";
				mes "Muito Obrigado!";
				mes "Eu espero que você goste do bolinho de arroz";
				close;
			}
			case 2:
			mes "[Chulsoo]";
			mes "Tem certeza disso?";
			mes "Você não vai ter a chance de comprar um bolinho de arroz tão gostoso quanto esse.";
			mes "Bem, é isso que eu penso";
			close;
			case 3:
			if (countitem(Food_Package)) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Na verdade, Madeleine";
				mes "me mandou aqui para encontrar você.";
				mes "Ela disse que você estaria disposto a provar essa comida do pacote...";
				next;
				mes "[Chulsoo]";
				mes "Madeleine?";
				mes "Você quer dizer Madeleine Chu?";
				mes "Ah, eu não tenho ouvido falar dela por um bom tempo!";
				mes "Bom, deixe-me ver o pacote que ela me enviou.";
				mes "Ah, tudo aqui parece delicioso!";
				next;
				mes "[Chulsoo]";
				mes "Ah, espere.";
				mes "Ela ainda mandou uma mensagem dentro deste pacote vamos ver, aqui...";
				next;
				mes "^333333Caro Chulsoo,";
				mes "já faz algum tempo.";
				mes "Eu sei que você deixou Prontera por não se dar bem com o Sr. Charles.";
				mes "Mas por favor entenda que ele estava apenas fazendo seu melhor para ajudar você a melhorar na cozinha.^000000";
				next;
				mes "^333333 Sr. Charles sempre quis que você expandise seu repertório, e que você fizesse diversos tipos de pratos um dia.";
				mes "A pessoa que entregou essa comida também foi quem a cozinhou.";
				mes "Por favor tente^000000...";
				next;
				mes "^333333 Com sorte, você será capaz de entender o Sr. Charles um pouco melhor depois de degustar estes alimentos.";
				mes " ";
				mes " Sua amiga, Madeleine^000000";
				next;
				mes "[Chulsoo]";
				mes "Agora eu entendi...";
				mes "Estas são as receitas que o Sr. Charles tentou me ensinar.";
				mes "Mas eu recusei aprendê-las, pois pensei que ele era muito rude...";
				next;
				mes "[Chulsoo]";
				mes "......";
				mes ".........";
				mes "Isso está tão delicioso...";
				mes "Você tem certeza que é apenas um iniciante?";
				mes "Não... Isso deve ser o que eu estava perdendo...";
				next;
				mes "[Chulsoo]";
				mes "Isso é o que o meu mestre sempre tentou me ensinar, mas eu também estava muito impaciente para aprender corretamente.";
				mes "O maior ingrediente de todos eles...";
				mes "^D02090O coração^000000.";
				mes "Depois de todo esse tempo, eu entendo.";
				next;
				mes "[Chulsoo]";
				mes "Obrigado por trazer essa comida até mim.";
				mes "Irei aproveitar e refletir sobre o que meu  velho professor estava tentando dizer-me.";
				mes "Em troca, porfavor aceite um de meus humildes bolinhos de arroz.";
				next;
				delitem(Food_Package,1);
				cooking_q = 10;
				getitem(Rice_Cake,1);
				mes "[Chulsoo]";
				mes "É melhor eu visitar Prontera novamente.";
				mes "Já faz um bom tempo que eu não vejo a Madeleine.";
				mes "E o mais importante, eu acho que deveria pedir desculpas ao Sr. Charles. ";
				close;
			} else {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Na verdade, Madeleine me mandou aqui para encontrar você.";
				mes "Ela disse que você estária disposto a provar essa comida do pacote...";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Espere, espere...";
				mes "Eu não acredito nisso!";
				mes "Onde eu coloquei o pacote de comida?";
				close;
			}
		}
	} else if (cooking_q == 8) {
		mes "[Chulsoo]";
		mes "Ultimamente, ninguém quer comprar os meus bolinhos de arroz.";
		mes "Tem sido assim desde que deixei Prontera... ";
		next;
		mes "[Chulsoo]";
		mes "Veja, eu costumava estudar naquela cidade como um dos aprendizes do Sr. Charless.";
		mes "Isso foi a apenas alguns meses, mas eu estava muito animado em ter a chance de aprender com ele.";
		next;
		mes "[Chulsoo]";
		mes "Pelo menos, eu estava animado no começo.";
		mes "Sr. Charles realmente frustrou-me.";
		mes "Ele só me ensinava a fazer essas receitas realmente estranhas!";
		mes "Como pernas de gafanhotos e-- hugh!";
		next;
		mes "[Chulsoo]";
		mes "E ele continuava a insistir que eu estava esquecendo o ingrediente mais importante.";
		mes "Com isso fui possível fazer pratos como rabos de macacos fritos deliciosos.";
		mes "Mas eu não posso acreditar nesse absurdo!";
		next;
		mes "[Chulsoo]";
		mes "No final, eu fugi.";
		mes "Por alguma razão, eu sinto um pouco de vergonha e arrependimento pelo que fiz.";
		mes "Ainda assim, eu não sei o que Sr. Charles quis dizer...";
		close;
	} else {
		mes "[Chulsoo]";
		mes "Você gostaria de";
		mes "comprar um bolinho de arroz?";
		mes "é só 200 zeny, mas é muito gostoso.";
		next;
		if (select("Claro, eu quero comprar!","Não, obrigado") == 1) {
			if (Zeny < 200) {
				mes "[Chulsoo]";
				mes "Ah, me desculpe, mas você não possui a quantia de dinheiro necessária para comprar o Bolinho de Arroz...";
				mes "Ainda assim, deve ser fácil conseguir";
				mes "200 zenys, certo?";
				close;
			} else {
				Zeny -= 200;
				getitem(Rice_Cake,1);
				mes "[Chulsoo]";
				mes "Muito Obrigado!";
				mes "Eu espero que você goste do bolinho de arroz";
				close;
			}
		}
		mes "[Chulsoo]";
		mes "Tem certeza disso?";
		mes "Você não vai ter a chance de comprar um bolinho de arroz tão gostoso quanto esse.";
		mes "Bem, é isso que eu penso";
		close;
	}
}
