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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest dos livros de Culin�ria.                            |
\*-----------------------------------------------------------------*/

prt_castle,43,30,3	script	Charles Orleans#cook	4_M_OILMAN,{
	if (MaxWeight - Weight < 2000) {
		mes "[Charles Orleans]";
		mes "S� um segundo.";
		mes "Voc� est� carregando muitos itens com voc� nesse momento.";
		mes "Ent�o n�o acha que seria melhor colocar algumas de suas coisas no Armaz�m Kafra?";
		close;
	}
	if (BaseJob == Job_Novice) {
		if (Sex == SEX_MALE) {
			cutin("orleans_5",0);
			mes "[Charles Orleans]";
			mes "Com licen�a, senh"+(Sex == SEX_MALE ? "or" : "ra")+"?";
			mes "Sim, voc�.";
			mes "Se voc� n�o est� aqui para ajudar na cozinha, ent�o eu gostaria de pedir que retire-se agora.";
			next;
			emotion(e_an);
			mes "[Charles Orleans]";
			mes "Por favor, n�o sinta-se ofendido.";
			mes "Mas n�o consigo concentrar-me na minha cozinha quando novatos como voc� ficam correndo por aqui feitos crian�a.";
			close;
		}
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Mademoiselle, o que voc� est� fazendo aqui nesta �rea do castelo?";
		mes "Ah, voc� deve ter se perdido.";
		next;
		cutin("orleans_2",0);
		mes "[Charles Orleans]";
		mes "Porfavor, use as escadas virando a direita para ir a estrutura principal.";
		mes "E tenha cuidado e preste aten��o nos seus passos quando subir as escadas, est� bem?";
		close2;
		cutin("",255);
		end;
	} else if (!isequipped(Hat_Of_Cook)) {
		if (Sex == SEX_MALE) {
			cutin("orleans_5",0);
			emotion(e_an);
			mes "[Charles Orleans]";
			mes "Monsieur, porque est� olhando assim para mim?";
			mes "� pela Bata de Seda de Morroc que estou usando, meu penteado de cabelo feito pela madame Veronica.";
			mes "Ou pelo meu cachecol de marca refinado pelo Monsieur Antonio?";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Puxa voc� est� t�o feliz com a moda atual, espet�culos de design feitos por artistas da Corpora��o Rekenber?";
			mes "Por favor, me conte.";
			next;
			cutin("orleans_2",0);
			mes "[Charles Orleans]";
			mes "Espere, espere um momento.";
			mes "Voc� sabe sobre as �ltimas tend�ncias?";
			mes "Me parece que voc� n�o est� muito na moda...";
			next;
			cutin("orleans_5",0);
			mes "[Charles Orleans]";
			mes "Ugh, se eu puder evitar, normalmente prefiro n�o me envolver com pessoas sem estilo.";
			mes "Mas eu acho que voc�s aventureiro t�m seus pontos fortes...";
			close2; cutin("",255); end;
		}
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Ah! Perdoe a mis�ria da minha humilde cozinha, Mademoiselle.";
		mes "Mas mesmo o explendor do castelo de Prontera empalidece ao esplendor de sua beleza cativante.";
		next;
		cutin("orleans_2",0);
		mes "[Charles Orleans]";
		mes "Diga-me, quem � a ador�vel crian�a, segurando o gato que est� ao seu lado?";
		mes "Sei que � rude perguntar, mas estou encorajado pela minha, digamos, curiosidade.";
		next;
		switch (select("......?","Ela � minha irm�","Na verdade, eu n�o a conhe�o")) {
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
			mes "Seja uma crian�a ador�vel.";
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
			mes "Ela � ador�vel e muito quieta, embora ela n�o se pare�a com voc�.";
			mes "At� mesmo seu gato � ador�vel.";
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
			mes "Eu pensei que essa crian�a era afortunada o bastante para ser uma companheira de Mademoiselle.";
			break;
		}
		next;
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Permita-me apresentar-me a v�s, amour.";
		mes "Eu sou o seu sempre fiel servo, cujo cora��o � extasiado com seu olhar.";
		mes "Meu nome � Charles Orleans.";
		next;
		cutin("orleans_4",0);
		mes "[Charles Orleans]";
		mes "No entanto, h� uma coisa que me causa angustia.";
		mes "Desde que sua alteza, o Rei Tristram III, desapareceu.";
		mes "N�o encontrei ningu�m digno de saborear os meus produtos.";
		mes "Minha vida agora n�o tem mais sentido...";
		next;
		mes "[Charles Orleans]";
		mes "Infelizmente, recentemente eu fui rebaixado a um mero professor de aprendizes, eu sou um mestre com minhas habilidades na arte da culin�ria.";
		mes "Isso � frustrante, muitos deles n�o t�m nenhum talento!";
		next;
		cutin("orleans_3",0);
		mes "[Charles Orleans]";
		mes "Ah, perdoe-me, querida Mademoiselle.";
		mes "Eu espero que voc� entenda como est� sendo dificil.";
		mes "Sou for�ado a sofrer.";
		mes "Quando nos encontrarmos novamente, eu gostaria muito de dar-lhe uma doce sobremesa.";
		next;
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Sim, as mulheres com sua beleza, definitivamente merecem os sabores deliciosos que apenas eu sou capaz de oferecer.";
		mes "Quando esse dia chegar, irei relutantemente convidar voc�, adeus.";
		close2; cutin("",255); end;
	} else if (cooking_q == 0) {
		cutin("orleans_5",0);
		emotion(e_dots);
		mes "[Charles Orleans]";
		mes "Oh, voc� veio aqui para aprender a cozinhar?";
		mes "^333333*suspiro*^000000";
		mes "Eu n�o sei como ensinar nada hoje, na verdade, eu acho que ensinar � um desperdicio do meu tempo!";
		mes "^333333*suspiro*^000000";
		mes "No entanto...";
		next;
		switch (select("Est� falando isso para mim?","Voc� n�o se lembra de mim?","Senhor Orleans?")) {
			case 1:
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Para quem mais eu estaria falando?";
			mes "Para Madeleine logo ali?";
			mes "Ou para a crian�a abra�ando aquele gato sarnento?";
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
			mes "Meu Deus, voc� me assustou!";
			mes "Mas que crian�a mal humorada!";
			mes "Quem trouxe essa crian�a aqui em?";
			break;
			case 2:
			mes "[Charles Orleans]";
			mes "Eu n�o consigo lembrar-me de cada principiante que j� veio aqui pedir aulas das artes da culin�ria.";
			mes "Eu poderia jurar que voc� esteve aqui meses atr�s, ent�o como � mesmo seu nome...?";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Bah! n�o importa.";
			mes "Eu suponho que isso n�o tenha import�ncia nesse momento.";
			break;
			case 3:
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Com licen�a?";
			mes "Eu posso ser seu instrutor, mas voc� pode me chamar pelo meu primeiro nome.";
			mes "Eu sei que posso ser bem rigoroso, mas porfavor.";
			mes "No final, somos colegas, mesmo eu sendo superior.";
			next;
			cutin("orleans_1",0);
			mes "[Charles Orleans]";
			mes "Tudo bem, tudo bem...";
			mes "J� que voc� insiste em demonstrar o minimo de respeito, ent�o voc� pode me chamar de 'Sr. Charles.'";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Ah... Ningu�m tem um anel lindo como esse.";
			mes "Eu realmente ganhei esse t�tulo do pr�rprio rei, mesmo eu sendo um cavaleiro apenas no t�tulo e forma, e n�o na for�a.";
			break;
		}
		next;
		cutin("orleans_7",0);
		mes "[Charles Orleans]";
		mes "Bem, ent�o vamos come�ar hoje fazendo um prato simples.";
		mes "Ok, ^FF0000Eu n�o ensino receitas mais de uma vez^000000, ^FF0000certifique-se de que ir� anotar tudo^000000.";
		mes "Ent�o agora, o que vamos cozinhar?";
		next;
		cutin("orleans_6",0);
		.@cook_m1 = rand(1,6);
		if (.@cook_m1 == 1) {
			cooking_q = 1;
			mes "[Charles Orleans]";
			mes "Ahhh, ent�o quer saber sobre as 'Pernas de gafanhoto fritas'.";
			mes "Para os leigos, elas podem parecer um prato nojento, mas acredite em mim, seu sabor requintado � um puro prazer ao paladar.";
			next;
			mes "[Charles Orleans]";
			mes "Agora, por favor traga";
			mes "^4D4DFF5 Pernas de Gafanhoto^000000,";
			mes "^4D4DFF1 �leo de Cozinha^000000, e";
			mes "^4D4DFF1 Frigideiras Velhas^000000.";
			mes "e ent�o, poderemos come�ar.";
			close2; cutin("",255); end;
		} else if (.@cook_m1 == 2) {
			cooking_q = 2;
			mes "[Charles Orleans]";
			mes "Ah, eu j� tenho isso!";
			mes "Vamos fazer 'Ch� de Ervas com Suco de Uva'.";
			mes "O Tempo est� perfeito para uma bebida refrescante.";
			next;
			mes "[Charles Orleans]";
			mes "Por favor Traga";
			mes "^4D4DFF3 Cachos de Uvas^000000, e";
			mes "^4D4DFF2 Po��es Vermelhas^000000";
			mes "para que possamos come�ar a aula";
			close2; cutin("",255); end;
		} else if (.@cook_m1 == 3) {
			cooking_q = 3;
			mes "[Charles Orleans]";
			mes "Ah eu j� tenho isso n�s podemos fazer 'Suco de Uvas com Mel'.";
			mes "Por favor traga-me os seguintes ingredientes para come�armos a aula.";
			next;
			mes "[Charles Orleans]";
			mes "^4D4DFF1 Mel^000000,";
			mes "^4D4DFF2 Cachos de Uva^000000, e";
			mes "^4D4DFF1 Po��o Vermelha^000000.";
			close2; cutin("",255); end;
		} else if (.@cook_m1 == 4) {
			cooking_q = 4;
			mes "[Charles Orleans]";
			mes "Hum, Porque n�s n�o fazemos 'Sopa de Ovos de Sapo com Tinta de Lula?'";
			mes "Aqueles distituidos de um paladar refinado podem achar isso nojento.";
			mes "Mas este prato � realmente muito saboroso.";
			next;
			mes "[Charles Orleans]";
			mes "Bem ent�o,";
			mes "por favor, traga-me";
			mes "^4D4DFF1 Saco de Gr�os^000000,";
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
			mes "^4D4DFF10 Garra de Crust�ceo^000000, e";
			mes "^4D4DFF1 Po��o Amarela^000000.";
			close2; cutin("",255); end;
		} else {
			cooking_q = 6;
			mes "[Charles Orleans]";
			mes "Ah, voc� sabe o que seria delicioso?";
			mes "'Caldas de Macacos Fritas.'";
			mes "Sim, isso soa perfeitamente bem!";
			mes "Por favor traga-me os ingredientes para que eu possa te ensinar esse prato.";
			next;
			mes "[Charles Orleans]";
			mes "N�s iremos precisar de";
			mes "^4D4DFF1 Frigideira^000000,";
			mes "^4D4DFF5 Rabos de Yoyo^000000, e";
			mes "^4D4DFF1 �leo de Cozinha^000000.";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 1) {
		if (countitem(Grasshoppers_Leg) > 4 && countitem(Old_Frying_Pan) > 0 && countitem(Cooking_Oil) > 0) {
			cutin("orleans_4",0);
			emotion(e_an);
			mes "[Charles Orleans]";
			mes "Finalmente, voc� est� aqui!";
			mes "Nunca esque�a: seus ingredientes devem ser sempre os mais frescos poss�veis.";
			mes "Caso contr�tio, ser�o pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Deixe as Pernas de Gafanhoto o mais limpo poss�vel antes de coloc�-las na frigideira.";
			mes "Depois, despeje metade da garrafa de �leo de Cozinha e frite as pernas em fogo alto por cerca de 20 minutos.";
			next;
			mes "[Charles Orleans]";
			mes "Depois, siga as instru��es que eu dei para voc� corretamente!";
			mes "Humm... Bom, bom.";
			mes "Nada mal.";
			mes "Tudo bem, voc� est� quase l�...";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Nossa, voc� terminou!";
			mes "A apar�ncia poderia ter ficado um pouco mais trabalhada, mas pelo menos voc� sabe a receita agora.";
			mes "Isso � tudo por hoje, agora v� e pratique por si mesmo.";
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
			mes "Se isso tivese sido ordenado por seu patr�o em um restaurante, demorando assim voc� j� estaria o irritando!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Basta que voc� cace aqueles gafanhotos felizes que pulam pelos campos.";
			mes "V� derrota-l�s, e em seguida arranque suas pernas fora, mas seja humano ao fizer isso!";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 2) {
		if (countitem(Grape) > 2 && countitem(Red_Potion) > 1) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, voc� est� aqui!";
			mes "Nunca esque�a: seus ingredientes devem ser sempre os mais frescos poss�veis.";
			mes "Caso contr�tio, ser�o pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Voc� deve extrair o suco de uvas direto da uva.";
			mes "N�o podemos usar sucos de uvas pr�-fabricados, pois eles devem estar sempre frescos.";
			mes "Ent�o, voc� precisa ferver as po��es vermelhas em banho maria...";
			next;
			mes "[Charles Orleans]";
			mes "Quando a po��o vermelha atingir a consist�ncia certa.";
			mes "Misture delicadamente o suco que voc� acaba de espremer das uvas.";
			mes "Agora, eu quero que voc� tente. Hum... Nada mal... Bom, bom...";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Nossa, voc� terminou!";
			mes "A apar�ncia poderia ter ficado um pouco mais trabalhada, mas pelo menos voc� sabe a receita agora.";
			mes "Isso � tudo por hoje, agora v� e pratique por si mesmo.";
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
			mes "O que voc� est� fazendo?";
			mes "Depressa v� e traga-me os ingredientes para preparar o suco de uvas com ch� de ervas!";
			mes "Em um restaurante de verdade, voc� nunca seria capaz de conseguir fazer seu trabalho perdendo tanto tempo assim!";
			mes "V� depressa, agora!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Est� tendo dificuldades para encontrar uvas?";
			mes "Basta estourar aqueles pequenos e fofos Poporings bonitinhos...";
			mes "Claro, voc� deve tentar ser humano quando ca��-los...";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 3) {
		if (countitem(Honey) > 0 && countitem(Grape) > 1 && countitem(Red_Potion) > 0) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, voc� est� aqui!";
			mes "Nunca esque�a: seus ingredientes devem ser sempre os mais frescos poss�veis.";
			mes "Caso contr�rio, ser�o pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Primeiro, retire a pele e as sementes das uvas.";
			mes "Ent�o, misture as uvas com o mel.";
			mes "Tome isso, misture e mecha cuisadosamente depois coloque a Po��o Vermelha...";
			next;
			mes "[Charles Orleans]";
			mes "Quando a polpa estiver totalmente misturada na Po��o Vermelha, voc� ter� acabado.";
			mes "Agora, v� e tente fazer voc� mesmo.";
			mes "Isso mesmo, muito bem. Sim...";
			mes "Espere, espere! Ok, agora v�";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Nossa, voc� terminou!";
			mes "A apar�ncia poderia ter ficado um pouco mais trabalhada, mas pelo menos voc� sabe a receita agora.";
			mes "Isso � tudo por hoje, agora v� e pratique por si mesmo.";
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
			mes "O que ainda est� fazendo por aqui?";
			mes "Voc� j� deveria ter ido buscar os ingredientes para fazer o Suco de Uva e Mel a muito tempo.";
			mes "Depressa!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Est� tendo problemas para conseguir o mel para o suco de uvas com mel, n�o �?";
			mes "Basta ir ca�ar ursos, eles sempre carregam consigo um pouco de mel.";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 4) {
		if (countitem(Grain) > 0 && countitem(Spawn) > 9 && countitem(Chinese_Ink) > 0) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, voc� chegou!";
			mes "Nunca esque�a: seus ingredientes devem ser sempre os mais frescos poss�veis.";
			mes "Caso contr�tio, ser�o pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Voc� deve moer o gr�o at� formar uma farinha fina, ent�o depois ferver a tinta de lula em fogo m�dio.";
			mes "Quando estiver borbulhando, despeje a farinha.";
			next;
			mes "[Charles Orleans]";
			mes "Continue mexendo, lentamente adicione as Ovas de Sapo.";
			mes "Quando come�ar a ferver novamente, reduza o fogo e cozinhe por cerca de 10 minutos.";
			mes "Ok, agora tente fazer.";
			mes "Muito bem, bom... Certo";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Ent�o, voc� terminou!";
			mes "A apar�ncia poderia ter ficado um pouco mais trabalhada, mas pelo menos voc� sabe esta receita agora.";
			mes "Isso � tudo por hoje, por isso v� e pratique por si mesmo.";
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
			mes "O que voc� est� fazendo?";
			mes "Voc� deve ir pegar os ingredientes para o preparo da Sopa de Tinta de Lula e Ovos de Sapo agora mesmo!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Voc� deve ter cuidado quando se est� lidando com Ovos de Sapo.";
			mes "Se voc� servir uma comida mal cozida para algu�m, o gosto definitivamente n�o ser� bom.";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 5) {
		if (countitem(Nipper) > 9 && countitem(Green_Herb) > 9 && countitem(Yellow_Potion) > 0) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, voc� est� aqui!";
			mes "Nunca esque�a: seus ingredientes devem ser sempre os mais frescos poss�veis.";
			mes "Caso contr�tio, ser�o pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Ferva as Garras de Crust�ceo com a Po��o Amarela por cerca de 30 minutos em fogo baixo.";
			mes "Ent�o, depois de ferver v� colocando as Ervas Verdes uma a uma e mechendo com cuidado.";
			next;
			mes "[Charles Orleans]";
			mes "Essa � uma receita f�cil, mas eu ainda quero que voc� demonstre para mim.";
			mes "Ok, vamos ver agora...";
			mes "Voc� est� indo bem.";
			mes "Agora, espere...";
			mes "Bom, bom, ok, est� pronto coloque as Ervas Verdes agora...";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Ent�o, voc� terminou!";
			mes "A apar�ncia poderia ter ficado um pouco mais trabalhada, mas pelo menos voc� sabe esta receita agora.";
			mes "Isso � tudo por hoje, por isso v� e pratique por si mesmo.";
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
			mes "Voc� n�o deveria estar";
			mes "preparando todos os";
			mes "ingredientes para fazer As Garras de Caranguejo";
			mes "no Vapor? Voc� precisa";
			mes "trabalhar r�pidamente para";
			mes "atender aqueles clientes famintos do restaurante!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "N�o deve ser muito dif�cil conseguir as garras.";
			mes "Basta apenas ca�ar alguns Vadons, derrote-os e arranque suas garras.";
			mes "Isso soa estranho, eu sei, mas apenas fa�a.";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 6) {
		if (countitem(Yoyo_Tail) > 4 && countitem(Old_Frying_Pan) > 0 && countitem(Cooking_Oil) > 0) {
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes "Finalmente, voc� voltou!";
			mes "Nunca esque�a: seus ingredientes devem ser sempre os mais frescos poss�veis.";
			mes "Caso contr�rio, ser�o pobres em qualidade.";
			mes "Agora, deixe-me explicar como prepara-se esse prato.";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Arranque os p�los das caudas e lave-os bem sob a �gua fria.";
			mes "Despeje metade de uma garrafa de �leo de Cozinha em uma panela pr�-aquecida, e depois frite as caldas.";
			next;
			mes "[Charles Orleans]";
			mes "O Truque � fritar as caldas r�pidamente sem queima-l�s, ent�o provavelmente voc� ir� usar fogo m�dio-alto.";
			mes "Mostre-me o que voc� aprendeu agora...";
			mes "Muito bem, nada mal... Humm...";
			next;
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Ent�o, voc� terminou!";
			mes "A apar�ncia poderia ter ficado um pouco mais trabalhada.";
			mes "Mas pelo menos voc� sabe essa receita agora.";
			mes "Isso � tudo por hoje, por isso v� e pratique por si mesmo.";
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
			mes "Voc� deve ir preparar os ingredientes para o fazer as Caudas de Macaco Fritas r�pidamente.";
			mes "Em um restaurante de verdade, voc� nunca poder� perder seu tempo com isso.";
			mes "R�pido!";
			close2; cutin("",255); end;
		} else {
			mes "[Charles Orleans]";
			mes "Voc� precisa de mais Caudas?";
			mes "basta procurar alguns Yoyos, mata-l�s e cortar suas caudas fora.";
			mes "Voc� � um novato, por isso n�o seja desumano quando fizer isso!";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 7) {
		cutin("orleans_7",0);
		mes "[Charles Orleans]";
		mes "Oh... Estou t�o exausto!";
		mes "Tenho muita sabedoria e";
		mes "habilidades para compartilhar! Ensinar";
		mes "n�o � t�o ruim, gosto e";
		mes "reconhe�o que � necess�rio";
		mes "para minha cozinha sobreviver...";
		next;
		cutin("orleans_1",0);
		mes "[Charles Orleans]";
		mes "Peser le bien et le mal...";
		mes "Mesmo que me doa, acho que devo continuar o ensino, at� que um de voc�s seja capaz de tornar-se um sucessor digno.";
		mes "Isso vai levar algum tempo...";
		close2; cutin("",255); end;
	} else if (cooking_q == 8) {
		cutin("orleans_5",0);
		mes "[Charles Orleans]";
		mes "Estranho, estranho...";
		mes "O que essa garota e esse gato fazem aqui?";
		mes "A cozinha n�o � lugar para eles, pelo menos n�o para animais de estima��o, voc� sabe disso.";
		next;
		cutin("orleans_4",0);
		mes "[Charles Orleans]";
		mes "Pardon moi, crian�a, mas seria pedir muito que voc� e seu gato retirem-se daqui?";
		mes "Isso � uma cozinha, e tudo aqui precisa estar limpo!";
		next;
		cutin("nyuang_1",2);
		mes "[Menina com gato]";
		mes "...Nyaaa?";
		mes "...Miau?";
		next;
		switch (select("Qual o seu nome, menina?","Voc� quer comer alguma coisa?","Aqui, gatinho","Saia!")) {
			case 1:
			emotion(e_ok,0,"Menina com gato#cook");
			mes "[Menina com gato]";
			mes "Nyaaa";
			mes "nyaaa";
			mes "(Purrrrrr)";
			next;
			cutin("orleans_4",0);
			mes "[Charles Orleans]";
			mes ".....Quem mandou voc� perguntar o nome dela?";
			mes "Voc� nem precisa saber o que ela t�m a dizer.";
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
			mes "Isso � uma boa id�ia...";
			mes "Oferecendo-lhes comida para faze-los sair.";
			mes "Mon dieu, a menina n�o vai falar com a gente...";
			mes "Ainda assim, n�s precisamos fazer com que aqueles dois saiam da cozinha.";
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
			mes "...Voc� est� brincando com essa garota...?";
			mes "...Ent�o eu n�o preciso de voc� aqui.";
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
			mes "Voc� deve ter, mas cuidado ao segurar aquele gato...";
			close2; cutin("",255); end;
		}
	} else if (cooking_q == 9) {
		cutin("orleans_5",0);
		emotion(e_an);
		mes "[Charles Orleans]";
		mes "Tudo bem, j� basta.";
		mes "N�s n�o podemos continuar a cozinhar se houver animais vivos na cozinha.";
		mes "Isso � uma viola��o aos nossos padr�es sanit�rios!";
		next;
		cutin("orleans_6",0);
		mes "[Charles Orleans]";
		mes "Sinto muito, mon chere, mas voc� tem de sair.";
		mes "Menina, por favor pegue seu gato e passe logo por esta porta antes que esse felino possa soltar p�los sobre os alimentos!";
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
		mes "Nyuyang, � voc�!";
		mes "O que voc� est� fazendo aqui na Cozinha do Charles?";
		next;
		cutin("orleans_3",0);
		mes "[Charles Orleans]";
		mes "S-Senhora Wickebine...!";
		mes "Perdoe-me, estou supreso que voc� tenha vindo at� aqui.";
		mes "Por acaso voc� sabe quem � essa menina?";
		next;
		cutin("job_black_hucke02",1);
		mes "[Wickebine]";
		mes "Oh, esta � Nyuyang minha irm� mais nova.";
		mes "Pode parecer dif�cil de encontrar semelhan�a entre n�s, mas somos irm�s...";
		mes "De qualquer forma, estive procurando-a por todos os cantos.";
		mes "Por acaso minha irm� Nyuyang estava o incomodando Charles?";
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
		mes "Ah, ent�o ela estava te incomodando!";
		mes "Ent�o Charles voc� quer que ela v� embora?";
		next;
		cutin("orleans_3",0);
		emotion(e_swt2);
		mes "[Charles Orleans]";
		mes "Hahahahah, o que voc� est� dizendo!";
		mes "N�o tem sentido!";
		mes "Como essa bela e pequena menina poderia estar causando algum problema para mim?";
		next;
		cutin("orleans_7",0);
		mes "[Charles Orleans]";
		mes "� um fato interessante, eu estava prestes a convidar essa preciosa menina e e seu gato para provar de minha deliciosa culin�ria.";
		mes "N�o se preocupe, madame";
		next;
		cutin("job_black_hucke01",1);
		emotion(e_what,0,"Wickebine#cook");
		mes "[Wickebine]";
		mes "Tem certeza, Charles?";
		mes "Eu sei o qu�o s�rio voc� � sobre sua cozinha, e eu n�o quero que Nyuyang te perturbe de nenhuma maneira...";
		next;
		cutin("job_black_hucke02",1);
		mes "[Wickebine]";
		mes "Oh, Charles, mas j� que me disse que ela n�o te causou nenhum tipo de problema.";
		mes "Fico contente que voc� esteja se dando bem com a Nyuyang.";
		mes "Bem ent�o, tome cuidado";
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
		mes "Ai est� uma verdadeira senhora...";
		mes "Madame Wickebine...";
		close2; cutin("",255); end;
	} else if (cooking_q == 10) {
		cutin("orleans_5",0);
		mes "[Charles Orleans]";
		mes "O que tem me incomodado � o fato de sua alteza ter desaparecido a algum tempo.";
		mes "Porque ser� que ningu�m sabe onde ele est�?";
		next;
		cutin("orleans_3",0);
		mes "[Charles Orleans]";
		mes "O s�bio e benevolente Rei Tristram III que nunca abandona seus s�ditos.";
		mes "Espero que nada de ruim possa ter acontecido com ele...";
		next;
		cutin("orleans_6",0);
		mes "[Charles Orleans]";
		mes "Como seria poss�vel que o nossos amado rei possa ter inimigos?";
		mes "Ele nunca fez nada que n�o fosse bom para o reino de Rune-Midgard e nem para o resto do mundo!";
		next;
		mes "[Charles Orleans]";
		mes "N�o consigo imaginar que tipo de problemas uma pessoa t�o boa como ele poderia causar.";
		mes "Tenho vontade de rir sempre que algu�m diz que acha que ele est� escondido na rep�blica de Schwarzwald...";
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
		switch (select("Quero aprender mais","Para quem voc� cozinha?","Me desculpe...")) {
			case 1:
			cutin("orleans_7",0);
			mes "[Charles Orleans]";
			mes "Voc� quer aprender mais receitas?";
			mes "Ent�o suponho que voc� quer pedir outro livro de receitas.";
			mes "Antes disso, por favor devolva o livro de receitas que voc� estava estudando, ok?";
			next;
			mes "[Charles Orleans]";
			mes "Agora, escolha o livro de receitas que voc� quer pedir, de um n�vel entre 1 e 5.";
			mes "Existem outros livros mais avn�ados, mas eu n�o estou emprestando-os para fora.";
			mes "Ah, e se quiser digite 0 para cancelar.";
			next;
			input(.@new_book);
			if (.@new_book < 0 || .@new_book > 5) {
				cutin("orleans_5",0);
				mes "[Charles Orleans]";
				mes "Hum...";
				mes "Eu disse para voc� digitar um n�vel entre 1 e 5.";
				mes "Esses s�o os �nicos livros de culin�ria que eu vou emprestar aos meus alunos.";
				close2; cutin("",255); end;
			} else if (.@new_book == 0) {
				cutin("orleans_5",0);
				mes "[Charles Orleans]";
				mes "Ent�o voc� mudou de id�ia?";
				mes "Tamb�m acho melhor que voc� estude as receitas que tem agora antes de tentar algo novo.";
				close2; cutin("",255); end;
			}
			mes "[Charles Orleans]";
			mes "Ent�o voc� queria pedir um livro de culin�ria n�vel "+.@new_book+", eh?";
			mes "Oh, poderia por favor me dizer o n�vel do livro de receitas que voc� est� me devolvendo?";
			next;
			input(.@old_book);
			if (.@old_book < 0 || .@old_book > 5) {
				mes "[Charles Orleans]";
				mes "Deve haver algum tipo de erro eu apenas empresto livros de culin�ria de n�vel 1 ao 5.";
				mes "Bem, fale comigo novamente quando voc� lembrar o n�vel do livro que est� com voc�, ok?";
				close2; cutin("",255); end;
			} else if (.@old_book == 0) {
				cutin("orleans_5",0);
				mes "[Charles Orleans]";
				mes "Ent�o voc� mudou de id�ia?";
				mes "Tamb�m acho melhor que voc� estude as receitas que j� possui antes de tentar algo novo.";
				close2; cutin("",255); end;
			} else if (.@old_book == .@new_book) {
				cutin("orleans_4",0);
				mes "[Charles Orleans]";
				mes "Espere, espere...";
				mes "Porque voc� quer pedir uma c�pia do livro de culin�ria que voc� j� possui?";
				mes "Acho que voc� cometeu um pequeno engano em?";
				close2; cutin("",255); end;
			} else {
				if (countitem(7471 + .@old_book) < 1) {
					mes "[Charles Orleans]";
					mes "Espere, Espere...";
					mes "Porque voc� n�o tem o livro que disse que iria me devolver?";
					mes "Encontre-o primeiro, e ent�o poderei emprestar outro livro de culin�ria a voc�.";
					close2; cutin("",255); end;
				}
				cutin("orleans_2",0);
				mes "[Charles Orleans]";
				switch (.@old_book) {
					case 1:
					mes "Ah, ent�o voc� terminou de ler o livro de culin�ria n�vel 1.";
					mes "Isso � bom, significa que voc� j� sabe o b�sico do b�sico.";
					mes "A partir de agora, as receitas ser�o mais dif�ceis...";
					break;
					case 2:
					mes "Ah, ent�o voc� aprendeu as receitas do livro de culin�ria n�vel 2?";
					mes "Cozinhar corretamente pode ser simples, e um verdadeiro chefe nunca pode ser negligente.";
					break;
					case 3:
					mes "Ah, terminou de ler o livro de Culin�ria n�vel 3?";
					mes "Essas receitas s�o realmente boas, principalmente quando se est� fazendo jantares rom�nticos.";
					mes "As vezes elas v�m em dias �teis, se � que voc� sabe o que quero dizer.";
					break;
					case 4:
					mes "Ent�o j� terminou de ler o livro de Culin�ria n�vel 4.";
					mes "Isso n�o � pouca coisa!";
					mes "Pois com o aprendizado voc� pode usar ingredientes estranhos para fazer pratos deliciosos!";
					break;
					case 5:
					mes "Voc� j� aprendeu o livro de Culin�ria n�vel 5?";
					mes "Bom trabalho alguns dos novatos n�o conseguem chegar at� esse n�vel.";
					mes "Suponho que voc� queira rever algumas das receitas mais f�ceis agora";
					break;
				}
				next;
			}
			cutin("orleans_1",0);
			mes "[Charles Orleans]";
			mes "Espere, antes de lhe emprestar um dos meus amados livros de culin�ria.";
			mes "Tenho uma pequena exig�ncia que voc� deve cumprir. ";
			next;
			if (.@new_book == 1) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Quando eu era uma crian�a, minha fam�lia ficou t�o pobre ao ponto de comer sobras de vegetais.";
				mes "At� mesmo ra��o para monstros era uma deliciosa refei��o naquele tempo.";
				next;
				mes "[Charles Orleans]";
				mes "Meu pai s� nos servia ab�bora.";
				mes "Eu cresci, mas era um garoto que estava sempre doente, e agora me veio de volta lembran�as daqueles dias inocentes.";
				next;
				mes "[Charles Orleans]";
				mes "Por que n�o fazemos assim?";
				mes "Se voc� me trazer 10 ab�boras, eu te deixo pegar o meu livro de culin�ria n�vel 1.";
				if (countitem(Pumpkin) > 9) {
					next;
					if (select("Dar 10 Ab�boras e o Livro","Cancelar") == 1) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Perfeito, voc� me trouxe 10 Ab�boras!";
						mes "Eu mal posso esperar para experimentar novamente os sabores experimentados na minha inf�ncia.";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Ah, como eu sinto falta do gosto das ab�boras!";
						mes "Ahhh, como � nost�lgico";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			} else if (.@new_book== 2) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Hoje eu estou com vontade de tomar um chicara de ch�.";
				mes "E claro, que voc� n�o pode beber um ch� sem bolachas ou biscoitos.";
				mes "Por favor traga-me 5 bicoitos bem cozidos e em troca te emprestarei meu livro de Culin�ria n�vel 2.";
				if (countitem(Well_Baked_Cookie) > 4) {
					next;
					if (select("Entregar Biscoitos e Livro","Cancelar") == 1) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Nossa, voc� trouxe esses biscoitos muito mais r�pido do que eu esperava!";
						mes "�timo, agora eu posso relaxar tomando meu ch� aproveitando esse delicioso lanche";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Hum...";
						mes "Em breve poderei tomar meu ch�...";
						mes "Mas a experi�ncia n�o estar� completa sem os deliciosos biscoitos bem cozidos";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			} else if (.@new_book== 3) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Voc� sabe qual � o prato especial de Amatsu?";
				mes "Tenho sentido falta dele ultimamente.";
				mes "Por favor traga-me 5 Sushi, e eu te emprestarei o meu livro de culin�ria n�vel 3, certo?";
				if (countitem(Shusi) > 4) {
					next;
					if (select("Entregar Sushi e Livro","Cancelar")) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Ah, parecem t�o frescos!";
						mes "E a apar�ncia tamb�m est� maravilhosa!";
						mes "Estes concerteza foram preparados por um Chefe habilidoso!";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Ahhh, Sushi...";
						mes "� uma das poucas coisas que eu n�o sei como fazer muito bem.";
						mes "Da para acreditar nisso?";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			} else if (.@new_book== 4) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Estou com vontade de comer da culin�ria de Kunlun.";
				mes "Voc� poderia trazer para mim aqueles deliciosos Bao?";
				mes "5 deles seria perfeito.";
				mes "Ent�o se me trouxer te emprestarei meu Livro de Culin�ria n�vel 4.";
				if (countitem(Bun) > 4) {
					next;
					if (select("Entregar Bao e Livro","Cancelar") == 1) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "�timo, voc� realmente trouxe eles!";
						mes "Esses Baos tem uma apar�ncia especialmente deliciosa!";
						mes "Eu mal posso ver a hora de come-l�s!";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Ah...";
						mes "Faz bastante tempo desde que eu provei um delicioso Bao.";
						mes "Eu poderia cozinh�-l�s eu mesmo, mas eu n�o sei o segredo!";
						close2; cutin("",255); end;
					}
				} else {
					close2; cutin("",255); end;
				}
			} else if (.@new_book== 5) {
				cutin("orleans_7",0);
				mes "[Charles Orleans]";
				mes "Ultimamente, em minha despensa tenho precisado de alguns brotos.";
				mes "Eles s�o um ingrediente saboroso com um valor indispens�vel para sa�de.";
				mes "Traga-me 10 desses e eu te emprestarei meu Livro de Culin�ria n�vel 5.";
				if (countitem(Shoot) > 9) {
					next;
					if (select("Dar os brotos e o Livro","Cancelar") == 1) {
						cutin("orleans_6",0);
						mes "[Charles Orleans]";
						mes "Meu Deus, estes s�o brotos de alta qualidade!";
						mes "Eles t�m uma apar�ncia t�o boa, eu concerteza digo que se pode com�-los at� mesmo cru!";
						next;
					} else {
						mes "[Charles Orleans]";
						mes "Eu vou precisar fazer uma receita com brotos em breve.";
						mes "Irei te agradecer muito se voc� puder me fazer esse pequeno favor";
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
			mes "Bem, como prometido, aqui est� o Livro de Culin�ria que voc� me pediu.";
			mes "Cuide bem dele e n�o o venda, perca ou qualquer coisa assim.";
			mes "Boa sorte nas suas receitas";
			close2; cutin("",255); end;
			case 2:
			cutin("orleans_3",0);
			mes "[Charles Orleans]";
			mes "O que quer dizer com, 'Para quem eu cozinho?'";
			mes "Essa � uma pergunta estranha mas com uma resposta simples.";
			mes "Eu sou um artista e devo trazer mais da minha arte para o mundo.";
			next;
			cutin("orleans_3",0);
			mes "[Charles Orleans]";
			mes "Espere, espere...";
			mes "Quando voc� foi falar com a Madeleine Chu?";
			mes "Ela n�o disse nada fora do comum n�o �?";
			mes "Por que, se ela disse, ignore-a!";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "N�o.";
			mes "N�o h� nenhuma raz�o especial.";
			mes "Apenas minha inspira��o para criar essas obras de arte culin�rias foi revigorada ultimamente...";
			close2; cutin("",255); end;
			case 3:
			cutin("orleans_5",0);
			mes "[Charles Orleans]";
			mes "Por favor, n�o se preocupe com isso.";
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
		mes "Sinto muito, mas agora voc� est� carregando muitos itens.";
		mes "Voc� deve colocar os seus itens a mais no Armaz�m Kafra, e depois volte e fale comigo, ok? ";
		close;
	}
	if (cooking_q == 0) {
		mes "[Madeleine Chu]";
		mes "Ah, ol�";
		mes "Eu sou Madeleine Chu, chefe aprendiz do Senhor Charles.";
		mes "Posso te ajudar com alguma coisa hoje?";
		next;
		switch (select("O que voc� faz como Chefe?","Quais as comidas voc� faz?","Quero aprender a cozinhar!")) {
			case 1:
			mes "[Madeleine Chu]";
			mes "O que eu fa�o como uma Chefe?";
			mes "Bem, eu sou apenas uma aprendiz, ent�o ainda estou aprendendo a cozinhar.";
			mes "Mas um dia, eu vou me tornar uma grande Chefe e todo mundo ir� reconhecer meus talentos culin�rios";
			next;
			mes "[Madeleine Chu]";
			mes "Cozinhar � um trabalho um tanto quanto cansativo, � preciso ter muita delicadeza.";
			mes "Al�m de que tamb�m tenho de saber controlar bem o fogo e fazer pratos bonitos assim como os verdadeiros artistas fazem.";
			next;
			mes "[Madeleine Chu]";
			mes "Bem, eu posso estar exagerando um pouco.";
			mes "Mas cozinhar n�o � assim t�o f�cil, � bem mais dif�cil do que parece.";
			close;
			case 2:
			mes "[Madeleine Chu]";
			mes "Por enquanto eu s� sei as receitas b�sicas.";
			mes "Sr. Charles diz que os melhores chefes s�o aqueles que sabem trazer o melhor sabor at� mesmo de alimentos simples.";
			next;
			mes "[Madeleine Chu]";
			mes "Ele diz que eu preciso desenvolver minhas habilidades culin�rias, para aprender receitas avan�adas.";
			mes "Algum dia, eu vou avan�ar e depois eu serei capaz de criar os meus pr�prios pratos deliciosos.";
			next;
			mes "[Madeleine Chu]";
			mes "Sr. Charles pode pegar pesado com seus alunos, mas suas habilidades s�o inigual�veis.";
			mes "Provei uma de suas sobremesas uma vez, e foi uma experi�ncia �tima, era como estar no c�u.";
			mes "Eu juro que vi cora��es alados!";
			next;
			mes "[Madeleine Chu]";
			mes "Infelizmente, eu ainda tenho um longo caminho de aprendizado a percorrer para conseguir fazer suas especialidades com chocolates.";
			mes "Antes disso, eu preciso dominar essas receitas estranhas que ele est� me ensinando...";
			close;
			case 3:
			mes "[Madeleine Chu]";
			mes "Se voc� quer aprender a cozinhar, por que n�o fala com o Sr. Charles?";
			mes "Ele � bastante duro com seus alunos, mas � muito dific�l para ele agir assim.";
			mes "Ele exige nada menos do que perfei��o absoluta, voc� sabe.";
			next;
			mes "[Madeleine Chu]";
			mes "Se voc� tiver o";
			mes "Sr. Charles para lhe ensinar uma receita, voc� deve praticar uma ou outra vez para aprimorar suas habilidades.";
			mes "Ent�o, voc� vai conseguir ver que est� melhorando na cozinha.";
			next;
			mes "[Madeleine Chu]";
			mes "Agora, Sr. Charles somente ensina a alunos que se dedicam verdadeiramente ao compromisso de cozinhar.";
			mes "Voc� pode mostrar sua dedica��o com um bom traje...";
			mes "Como um chap�u de chefe.";
			next;
			mes "[Madeleine Chu]";
			mes "Mas sim, Sr. Charles tem muito pouca paci�ncia com novatos.";
			mes "O que significa que voc� ir� precisar ter muita paci�ncia com seus m�todos de ensino...";
			close;
		}
	} else if (cooking_q > 0 && cooking_q < 7) {
		mes "[Madeleine Chu]";
		mes "Ol�, posso te ajudar de alguma forma hoje";
		mes "Ah, se voc� est� estudando culin�ria com o Sr. Charles, eu posso lembrar dos ingredientes que voc� precisa se os tiver esquecido";
		next;
		switch (select("Pernas de Gafanhoto Frita","Ch� de Ervas com Suco de Uva","Suco de Uvas com Mel","Sopa de Ovos de Sapo e Tinta de Lula","Garras de Caranguejo Cozidas no Vapor","Rabo de Macaco Frito")) {
			case 1:
			mes "[Madeleine Chu]";
			mes "Ah! voc� precisa de";
			mes "^4D4DFF5 Pernas de Gafanhoto^000000,";
			mes "^4D4DFF1 �leo de Cozinha^000000, e";
			mes "^4D4DFF1 Frigideira Velha^000000 para fazer";
			mes "Pernas de Gafanhoto Fritas.";
			break;
			case 2:
			mes "[Madeleine Chu]";
			mes "Ah! voc� precisa de";
			mes "^4D4DFF3 Uvas^000000, e";
			mes "^4D4DFF2 Po��es Vermelhas^000000 para fazer";
			mes "Ch� de Ervas com Suco de Uva.";
			break;
			case 3:
			mes "[Madeleine Chu]";
			mes "Ah! voc� precisa de";
			mes "^4D4DFF1 Mel^000000,";
			mes "^4D4DFF2 Uvas^000000, e";
			mes "^4D4DFF1 Po��o Vermelha^000000.";
			break;
			case 4:
			mes "[Madeleine Chu]";
			mes "Ah! voc� precisa de";
			mes "^4D4DFF1 Bolsa de gr�os^000000,";
			mes "^4D4DFF10 Ovos de Sapo^000000, e";
			mes "^4D4DFF1 Tinta de Lula^000000 para preparar a Sopa de Ovos";
			mes "de Sapo com Tinta de Lula.";
			break;
			case 5:
			mes "[Madeleine Chu]";
			mes "Ah! voc� precisa de";
			mes "^4D4DFF10 Ervas Verdes^000000,";
			mes "^4D4DFF10 Garras de Carangueijo^000000, e";
			mes "^4D4DFF1 Po��o Amarela ^000000 para as";
			mes "Garras de Carangueijo Cozidas no Vapor.";
			break;
			case 6:
			mes "[Madeleine Chu]";
			mes "Ah! voc� precisa de";
			mes "^4D4DFF1 Frigideira Velha^000000,";
			mes "^4D4DFF5 Caldas de Yoyo^000000, e";
			mes "^4D4DFF1 �leo de Cozinha^000000 para os";
			mes "Rabos de Macaco Fritos.";
			break;
		}
		next;
		mes "[Madeleine Chu]";
		mes "Eu sei que o Sr. Charles � teimoso e n�o ir� dizer os ingredientes novamente se voc� perguntar.";
		mes "De quakquer forma, espero que voc� colete os ingredientes e complete a receita assim que puder";
		close;
	} else if (cooking_q == 7) {
		mes "[Madeleine Chu]";
		mes "Sr. Charles ensinou uma receita a voc�?";
		mes "Isso � �timo!";
		mes "Espero que voc� lembre-se que a qualidade dos seus pratos � o mais importante.";
		mes "Que se baseia em suas habilidades, ent�o continue sempre praticando.";
		next;
		mes "[Madeleine Chu]";
		mes "Ah, voc� sabe o que pode ajud�-lo a melhorar suas habilidades culin�rias?";
		mes "Por que voc� n�o pega emprestado esse Livro de Culin�ria e tenta criar algumas de suas receitas?";
		next;
		mes "[Madeleine Chu]";
		mes "Antes de cozinhar, tenha certeza de que voc� possui todos os ingredientes necess�rios.";
		mes "Ah, e mantenha o livro de culin�rias por perto enquanto cozinha.";
		mes "Voc� provavelmente ir� precisar consult�-lo com muita frequ�ncia...";
		next;
		mes "[Madeleine Chu]";
		mes "Voc� pode falhar algumas vezes enquanto prepara os alimentos,nas suas primeiras tentativas, mas com a pr�tica voc� melhora.";
		mes "Por favor pegue este Livro de Culin�ria";
		mes "B�sica de N�vel 1 e tente fazer suas receitas.";
		cooking_q = 8;
		getitem(Cookbook01,1);
		next;
		mes "[Madeleine Chu]";
		mes "Depois de ter aprendido todas as receitas,";
		mes "sinta-se a vontade para voltar a falar comigo, ok? Ah �, voc� tamb�m";
		mes "vai precisar desse Kits de Cozinha para come�ar.";
		mes "Vou te dar esses de gra�a, e caso precise de mais voc� poder� comprar eles de mim";
		getitem(Outdoor_Cooking_Kits,10);
		close;
	} else if (cooking_q == 8) {
		mes "[Madeleine Chu]";
		mes "Ent�o como tem se saido na cozinha?";
		mes "Voc� precisa praticar para desenvolver cada vez mais suas habilidades culin�rias.";
		mes "Agora, posso te ajudar em alguma coisa?";
		next;
		switch (select("Preciso de Kits de Cozinha","Gostaria de provar os pratos que fiz?","Como est� a comida que eu fiz?")) {
			case 1:
			mes "[Madeleine Chu]";
			mes "Claro, qual tipo de Kit de culin�ria voc� precisa?";
			next;
			switch (select("Kit de Culin�ria Port�til - 500z","Kit de Culin�ria Caseiro - 1,000z","Cancelar")) {
				case 1:
				callsub(S_SellSets,12125);
				close;
				case 2:
				mes "[Madeleine Chu]";
				mes "Ah, me desculpe, mas voc� n�o possui habilidades culin�rias o bastante para usar o Kit de Culin�ria caseiro.";
				mes "Por favor pratique usando o Kit de Culin�ria Port�til primeiro, tudo bem?";
				close;
				case 3:
				mes "[Madeleine Chu]";
				mes "Por favor volte a falar comigo quando precisar de algum Kit de Culin�ria, tudo bem?";
				mes "Vejo voc� depois.";
				close;
			}
			case 2:
			if (countitem(Str_Dish01) && countitem(Int_Dish01) && countitem(Dex_Dish01) && countitem(Agi_Dish01) && countitem(Vit_Dish01) && countitem(Luk_Dish01)) {
				mes "[Madeleine Chu]";
				mes "Ah, voc� fez uma amostra detalhada de cada uma das receitas do livro de culin�ria b�sico, n�o �?";
				mes "Isso deve ter sido um �timo treinamento para suas habilidades culin�rias.";
				next;
				mes "[Madeleine Chu]";
				mes "Eu adoraria provar de sua comida e dar minha opini�o.";
				mes "Mas voc� se importaria se eu pedisse um favor primeiro?";
				mes "Eu tenho um amigo em Payon que veio para estudar culin�ria em Prontera.";
				next;
				mes "[Madeleine Chu]";
				mes "No entanto, ele ficou frustrado com as aulas de culin�ria e deixou a cidade de Prontera.";
				mes "Voc� deve entregar uma encomenda a ele.";
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
				mes "Agora pode ir, o pacote est� pronto para ser entregue.";
				mes "Agora, lembre-se que voc� n�o deve abrir isso antes de entregar ao meu amigo, Chulsoo.";
				mes "Voc� pode encontr�-lo pelos arredores de Payon...";
				next;
				mes "[Madeleine Chu]";
				mes "Voc� deve ser capaz de encontrar Chulsoo pr�ximo ao moinho de �gua ou no bar em Payon.";
				mes "Ah, e n�o esque�a de dizer para ele que eu mandei voc�, ok? Obrigada";
				close;
			} else {
				mes "[Madeleine Chu]";
				mes "Hum... Eu acho que seria melhor se voc� tentasse fazer cada uma das receitas do Livro de Culin�ria B�sico que te dei primeiro.";
				mes "Dessa maneita, poderei avaliar melhor suas habilidades.";
				next;
				mes "[Madeleine Chu]";
				mes "N�o � ruim concentrar-se em";
				mes "apenas uma receita, mas";
				mes "como um novato, voc� precisa";
				mes "aprender todo o b�sico.";
				mes "Por favor leia o Livro de Culin�ria que te dei atentamente, ok?";
				close;
			}
			case 3:
			if (countitem(Str_Dish01) || countitem(Int_Dish01) || countitem(Dex_Dish01) || countitem(Agi_Dish01) || countitem(Vit_Dish01) || countitem(Luk_Dish01)) {
				mes "[Madeleine Chu]";
				mes "Ah, vejo que voc� tentou algumas das receitas do Livro de Culin�ria B�sica que te dei.";
				mes "Tudo que voc� fez parece delicioso.";
				mes "Tudo que precisa agora � de algu�m para provar...";
				close;
			} else {
				mes "[Madeleine Chu]";
				mes "Bem... Eu n�o sei...";
				mes "Eu acho que voc� deveria tentar";
				mes "fazer cada uma das receitas listadas";
				mes "no livro de culin�ria b�sica que";
				mes "eu dei para voc� primeiro. E ent�o, voc�";
				mes "poder� apresentar seus pratos";
				close;
			}
		}
	} else if (cooking_q == 9) {
		if (countitem(Food_Package)) {
			mes "[Madeleine Chu]";
			mes "Por favor procure meu amigo Chulsoo em Payon e entregue a ele o pacote de comida, assim ele poder� provar os pratos que voc� fez.";
			close;
		} else {
			mes "[Madeleine Chu]";
			mes "Ah, oi, poderia me dar um segundo?";
			mes "Agora, eu preciso fritar isso, tenho de me concentrar por um tempo.";
			mes "Hahahaha.";
			next;
			mes "[Madeleine Chu]";
			mes "Ah, ent�o voc� j� conheceu Chulsoo, o meu amigo?";
			mes "Voc� deu a ele o pacote de comida, certo?";
			mes "Eu ficaria desapontada se voc� perdesse ou o vendesse...";
			next;
			if (select("Eu entreguei!","Eu perdi o pacote de comida!") == 1) {
				mes "[Madeleine Chu]";
				mes "Hahaha, sabia que voc� entregaria.";
				mes "Mesmo que voc� n�o tivesse entregado ainda, certifique-se de que ir� entregar depois, tudo bem? Te vejo depois";
				close;
			}
			if (countitem(Cookbook01) > 0) {
				mes "[Madeleine Chu]";
				mes "Voc� perdeu?";
				mes "Ah, isso n�o � bom.";
				mes "Como voc� p�de desrepeitar as artes culin�rias desta forma?";
				mes "Eu estou muito desapontada com voc�...";
				next;
				delitem(Cookbook01,1);
				cooking_q = 0;
				mes "[Madeleine Chu]";
				mes "Antes de mais nada, eu gostaria de pedir de volta meu livro de culin�ria.";
				mes "Eu quero que voc� reflita sobre o que fez, e comece novamente o treinamento de culin�ria com o Sr. Charles, desde o in�cio.";
				close;
			} else {
				mes "[Madeleine Chu]";
				mes "Voc� deve estar brincando...";
				mes "Tenho certeza de que voc� deve ter escondido em algum lugar.";
				mes "Mas de toda forma, por favor entregue o pacote de comida ao Chulsoo.";
				close;
			}
		}
	} else if (cooking_q == 10) {
		mes "[Madeleine Chu]";
		mes "Eu acabei de receber uma mensagem de Chulsoo agradecendo por eu ter mandando voc� levar a comida at� ele.";
		mes "Com certeza ele realmente gostou de sua comida.";
		next;
		mes "[Madeleine Chu]";
		mes "Acredito que voc� est� pronto para usar os ingredientes j� em um n�vel superior.";
		mes "Mas nunca se esque�a que suas pr�rprias habilidades s�o mais importantes no fator qualidade em uma cozinha.";
		next;
		cooking_q = 11;
		getitem(Indoor_Cooking_Kits,10);
		mes "[Madeleine Chu]";
		mes "Por favor tente usar esses Kits de Culin�ria, eles ir�o te ajudar a criar pratos delicados.";
		mes "Quando eles acabarem, fique a vontade para comprar mais um de mim se quiser, certo?";
		next;
		mes "[Madeleine Chu]";
		mes "Al�m disso, se tamb�m quiser aprender algumas receitas novas, por que n�o fala com Sr.";
		mes "Charles novamente?";
		mes "Ent�o boa Sorte, nos vemos depois ";
		close;
	} else if (cooking_q == 11) {
		mes "[Madeleine Chu]";
		mes "Como voc� est�?";
		mes "Espero que voc� tenha aprimorado suas habilidades culin�rias.";
		mes "Posso ajud�-lo com algo em particular";
		next;
		switch (select("Preciso de Kits de Culin�ria","Como vai o Sr. Charles?","Um, quem � aquela crian�a?")) {
			case 1:
			mes "[Madeleine Chu]";
			mes "Claro, qual tipo de Kit de Culin�ria voc� precisa?";
			next;
			switch (select("Kit de Culin�ria Port�til - 500z","Kit de Culin�ria Caseiro - 1,000z","Mostre-me outros Kits","Cancelar")) {
				case 1:
				callsub(S_SellSets,12125);
				close;
				case 2:
				callsub(S_SellSets,12126);
				close;
				case 3:
				mes "[Madeleine Chu]";
				mes "Bem, Eu tenho apenas dois tipos de Kits de culin�ria.";
				mes "Apesar de que existe um Kit Superior o Kit de Culin�ria Profissional que � para verdadeiros especialistas, como o Sr. Charles.";
				mes "Incr�vel, n�o �?";
				next;
				mes "[Madeleine Chu]";
				mes "Voc� ainda � um novato, ent�o meus kits ir�o te servir muito bem.";
				mes "Voc� sabe, h� um boato sobre um Kit de Culin�ria que pode fazer perfeitamente qualquer receita, contanto que se possua todos os ingredientes.";
				next;
				mes "[Madeleine Chu]";
				mes "Claro, � apenas um boato, provavelmente apenas uma imagina��o de algu�m.";
				mes "Eu acredito que as pr�prias habilidades s�o o ingrediente mais importante";
				close;
				case 4:
				mes "[Madeleine Chu]";
				mes "Por favor volte a falar comigo quando precisar comprar algum kit, certo?";
				mes "Vejo voc� depois";
				close;
			}
			case 2:
			mes "[Madeleine Chu]";
			mes "Hum? Sr. Charles est� muito bem, mas ultimamente ele tem ficado muito chateado com coisas muito pequenas.";
			mes "Acho que, ele est� sendo incompreensivel.";
			next;
			.@talk_j = rand(1,3);
			if (.@talk_j == 1) {
				mes "[Madeleine Chu]";
				mes "Voc� sabe, quando eu conheci ele pela primeira vez, confesso que pensava que ele era bom apenas em fazer doces como chocolates e caramelos.";
				mes "No entando, ele est� altamente qualificado em cozinhar quase tudo!";
				next;
				mes "[Madeleine Chu]";
				mes "Eu acho que ele deve estar concentrando-se em outros tipos de sobremesas por causa do aparecimento do nosso rei.";
				mes "Eu me pergunto se o desaparecimento do Rei Tristram III's est� relacionado com a recente mudan�a de humor do Sr. Charles?";
				close;
			} else if (.@talk_j == 2) {
				mes "[Madeleine Chu]";
				mes "Quero dizer, o Sr. Charles parece ser do tipo que tem problema em se abrir com as outras pessoas.";
				mes "Isso pode explicar por que ele � muito mais agrad�vel com as mulheres do que com os homens.";
				mes "Isso n�o faz sentido?";
				close;
			} else {
				mes "[Madeleine Chu]";
				mes "Talvez seja porque ele";
				mes "est� fazendo experi�ncias com";
				mes "novas receitas ultimamente. Eu acho";
				mes "que ele mencionou algo sobre";
				mes "querer fazer a melhor receita de";
				mes "todos os tempos para uma mulher.";
				next;
				mes "[Madeleine Chu]";
				mes "Eu nunca vi o Sr. Charles t�o animado antes.";
				mes "Aquela mulher deve ter muita sorte.";
				mes "Ela pode comer as comidas dele todos os dias que quiser!";
				mes "Eu estou quase com ci�mes dela, voc� sabia disso?";
				close;
			}
			case 3:
			mes "[Madeleine Chu]";
			mes "Ah, voc� quer dizer a Menina com gato?";
			mes "Eu n�o tenho certeza, mas acho que ouvi dizer que ela talvez seja a irm� mais nova da Senhora Wickebine.";
			next;
			mes "[Madeleine Chu]";
			mes "Eu me pergunto porque o Sr. Charles da tal tratamento especial a Senhora Wickebine.";
			mes "Sempre que eu falo sobre isso com ele, ele acaba ficando chateado e n�o diz nada!";
			next;
			cutin("orleans_6",0);
			mes "[Charles Orleans]";
			mes "Nossa!";
			mes "Eu senti um frio na espinha...";
			mes "Ser� que algu�m est� falando sobre mim?";
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
	mes "Quantos Kits de Culin�ria"+(getarg(0) == 12125 ? "Port�teis":"Caseiros")+" voc� gostaria de comprar?";
	mes "Se voc� quiser cancelar, por favor digite o n�mero 0.";
	next;
	while (true) {
		input(.@sell);
		if (.@sell == 0) {
			mes "[Madeleine Chu]";
			mes "Voc� mudou de id�ia?";
			mes "Bem, quando voc� precisar comprar "+getitemname(getarg(0))+" kits, volte a falar comigo novamente, certo?";
			close;
		} else if (.@sell > 100) {
			mes "[Madeleine Chu]";
			mes "Ah, desculpe, mas eu n�o vendo mais do que 100 "+getitemname(getarg(0))+" de uma vez, � apenas por seguran�a.";
			next;
		}
		else { break; }
	}
	.@total_cost = .@sell * .@item_cost;
	.@total_weight = .@sell * .@item_weight;
	if (Zeny < .@total_cost) {
		mes "[Madeleine Chu]";
		mes "Ah, desculpe, mas voc� voc� n�o pode comprar "+getitemname(getarg(0));
		mes "Por favor verifique seus Zenys antes de comprar meus kits";
		close;
	}
	if (!checkweight(getarg(0),.@sell)) {
		mes "[Madeleine Chu]";
		mes "Desculpe, mas voc� n�o possui espa�o suficiente em seu invent�rio para tantos "+getitemname(getarg(0))+"...";
		close;
	}
	Zeny -= .@total_cost;
	getitem(getarg(0),.@sell);
	mes "[Madeleine Chu]";
	mes "Aqui est�.";
	mes "Boa sorte com sua forma��o culin�ria!";
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
		mes "Espere, voc� est� carregando muitos itens com voc�.";
		mes "Por que n�o guarda alguns dos seus itens no Armaz�m Kafra antes de falar comigo?";
		close;
	}
	if (cooking_q == 10) {
		mes "[Chulsoo]";
		mes "Quando voc� tiver a chance, por favor d� a Madeline meus agradecimentos.";
		mes "Logo irei visitar Prontera para v�-la, e tamb�m para fazer as pazes com o Sr. Charles.";
		close;
	} else if (cooking_q == 9) {
		mes "[Chulsoo]";
		mes "Voc� gostaria de comprar um bolinho de arroz?";
		mes "S� ir� custar 200 zeny, mas � muito gostoso";
		next;
		switch (select("Claro, eu vou comprar um!","N�o, obrigado","Na verdade, Madeleine me enviou...")) {
			case 1:
			if (Zeny < 200) {
				mes "[Chulsoo]";
				mes "Ah, me desculpe, mas voc� n�o possui a quantia em dinheiro necess�ria para comprar o Bolinho de Arroz...";
				mes "Ainda assim, deve ser f�cil conseguir 200 zeny, certo?";
				close;
			} else {
				Zeny -= 200;
				getitem(Rice_Cake,1);
				mes "[Chulsoo]";
				mes "Muito Obrigado!";
				mes "Eu espero que voc� goste do bolinho de arroz";
				close;
			}
			case 2:
			mes "[Chulsoo]";
			mes "Tem certeza disso?";
			mes "Voc� n�o vai ter a chance de comprar um bolinho de arroz t�o gostoso quanto esse.";
			mes "Bem, � isso que eu penso";
			close;
			case 3:
			if (countitem(Food_Package)) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Na verdade, Madeleine";
				mes "me mandou aqui para encontrar voc�.";
				mes "Ela disse que voc� estaria disposto a provar essa comida do pacote...";
				next;
				mes "[Chulsoo]";
				mes "Madeleine?";
				mes "Voc� quer dizer Madeleine Chu?";
				mes "Ah, eu n�o tenho ouvido falar dela por um bom tempo!";
				mes "Bom, deixe-me ver o pacote que ela me enviou.";
				mes "Ah, tudo aqui parece delicioso!";
				next;
				mes "[Chulsoo]";
				mes "Ah, espere.";
				mes "Ela ainda mandou uma mensagem dentro deste pacote vamos ver, aqui...";
				next;
				mes "^333333Caro Chulsoo,";
				mes "j� faz algum tempo.";
				mes "Eu sei que voc� deixou Prontera por n�o se dar bem com o Sr. Charles.";
				mes "Mas por favor entenda que ele estava apenas fazendo seu melhor para ajudar voc� a melhorar na cozinha.^000000";
				next;
				mes "^333333 Sr. Charles sempre quis que voc� expandise seu repert�rio, e que voc� fizesse diversos tipos de pratos um dia.";
				mes "A pessoa que entregou essa comida tamb�m foi quem a cozinhou.";
				mes "Por favor tente^000000...";
				next;
				mes "^333333 Com sorte, voc� ser� capaz de entender o Sr. Charles um pouco melhor depois de degustar estes alimentos.";
				mes " ";
				mes " Sua amiga, Madeleine^000000";
				next;
				mes "[Chulsoo]";
				mes "Agora eu entendi...";
				mes "Estas s�o as receitas que o Sr. Charles tentou me ensinar.";
				mes "Mas eu recusei aprend�-las, pois pensei que ele era muito rude...";
				next;
				mes "[Chulsoo]";
				mes "......";
				mes ".........";
				mes "Isso est� t�o delicioso...";
				mes "Voc� tem certeza que � apenas um iniciante?";
				mes "N�o... Isso deve ser o que eu estava perdendo...";
				next;
				mes "[Chulsoo]";
				mes "Isso � o que o meu mestre sempre tentou me ensinar, mas eu tamb�m estava muito impaciente para aprender corretamente.";
				mes "O maior ingrediente de todos eles...";
				mes "^D02090O cora��o^000000.";
				mes "Depois de todo esse tempo, eu entendo.";
				next;
				mes "[Chulsoo]";
				mes "Obrigado por trazer essa comida at� mim.";
				mes "Irei aproveitar e refletir sobre o que meu  velho professor estava tentando dizer-me.";
				mes "Em troca, porfavor aceite um de meus humildes bolinhos de arroz.";
				next;
				delitem(Food_Package,1);
				cooking_q = 10;
				getitem(Rice_Cake,1);
				mes "[Chulsoo]";
				mes "� melhor eu visitar Prontera novamente.";
				mes "J� faz um bom tempo que eu n�o vejo a Madeleine.";
				mes "E o mais importante, eu acho que deveria pedir desculpas ao Sr. Charles. ";
				close;
			} else {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Na verdade, Madeleine me mandou aqui para encontrar voc�.";
				mes "Ela disse que voc� est�ria disposto a provar essa comida do pacote...";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Espere, espere...";
				mes "Eu n�o acredito nisso!";
				mes "Onde eu coloquei o pacote de comida?";
				close;
			}
		}
	} else if (cooking_q == 8) {
		mes "[Chulsoo]";
		mes "Ultimamente, ningu�m quer comprar os meus bolinhos de arroz.";
		mes "Tem sido assim desde que deixei Prontera... ";
		next;
		mes "[Chulsoo]";
		mes "Veja, eu costumava estudar naquela cidade como um dos aprendizes do Sr. Charless.";
		mes "Isso foi a apenas alguns meses, mas eu estava muito animado em ter a chance de aprender com ele.";
		next;
		mes "[Chulsoo]";
		mes "Pelo menos, eu estava animado no come�o.";
		mes "Sr. Charles realmente frustrou-me.";
		mes "Ele s� me ensinava a fazer essas receitas realmente estranhas!";
		mes "Como pernas de gafanhotos e-- hugh!";
		next;
		mes "[Chulsoo]";
		mes "E ele continuava a insistir que eu estava esquecendo o ingrediente mais importante.";
		mes "Com isso fui poss�vel fazer pratos como rabos de macacos fritos deliciosos.";
		mes "Mas eu n�o posso acreditar nesse absurdo!";
		next;
		mes "[Chulsoo]";
		mes "No final, eu fugi.";
		mes "Por alguma raz�o, eu sinto um pouco de vergonha e arrependimento pelo que fiz.";
		mes "Ainda assim, eu n�o sei o que Sr. Charles quis dizer...";
		close;
	} else {
		mes "[Chulsoo]";
		mes "Voc� gostaria de";
		mes "comprar um bolinho de arroz?";
		mes "� s� 200 zeny, mas � muito gostoso.";
		next;
		if (select("Claro, eu quero comprar!","N�o, obrigado") == 1) {
			if (Zeny < 200) {
				mes "[Chulsoo]";
				mes "Ah, me desculpe, mas voc� n�o possui a quantia de dinheiro necess�ria para comprar o Bolinho de Arroz...";
				mes "Ainda assim, deve ser f�cil conseguir";
				mes "200 zenys, certo?";
				close;
			} else {
				Zeny -= 200;
				getitem(Rice_Cake,1);
				mes "[Chulsoo]";
				mes "Muito Obrigado!";
				mes "Eu espero que voc� goste do bolinho de arroz";
				close;
			}
		}
		mes "[Chulsoo]";
		mes "Tem certeza disso?";
		mes "Voc� n�o vai ter a chance de comprar um bolinho de arroz t�o gostoso quanto esse.";
		mes "Bem, � isso que eu penso";
		close;
	}
}
