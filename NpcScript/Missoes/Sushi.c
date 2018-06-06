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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest dos Sushis e Sashimi em Amatsu                      |
\*-----------------------------------------------------------------*/

ama_in01,162,17,1	script	Mestre do Sushi#ama	4_M_JPNOJI2,{
	if (MaxWeight - Weight < 5000) {
		mes "[Magumagu]";
		mes "Ei. Você aparenta estar pesado.";
		mes "Você não tem problemas quando anda?";
		mes "Sinto muito, mas não há espaço para que você receba algum material da minha loja.";
		next;
		mes "[Magumagu]";
		mes "Guarde algumas de suas coisas em algum lugar.";
		mes "Por que você está carregando tantas coisas...?";
		mes "Huhuhu...";
		close;
	} else if (ama_sushi == 4) {
		mes "[Magumagu]";
		mes "Cortando peixe cru diariamente você pode se tornar um mestre em sushi.";
		mes "Então não perca seu tempo aqui, e procure descobrir no que você é bom.";
		close;
	} else if (fish_r == 1) {
		if (countitem(Candy) > 9) {
			mes "[Magumagu]";
			mes "Ah! Eu realmente aprecio isso.";
			mes "Na hora certa!";
			mes "Eu preciso deles agora mesmo.";
			next;
			mes "[Magumagu]";
			mes "Obrigado.";
			mes "Não é nada de mais, mas irei te dar minha especialidade, Peixe Cru.";
			next;
			fish_r = 0;
			erasequest(10036);
			delitem(Candy,10);
			getitem(Fish_Slice,15);
			mes "[Magumagu]";
			mes "Aqui estão 15 fatias.";
			mes "Por favor aproveite desse alimento com seus amigos.";
			mes "E volte sempre que você quiser degustar do sabor da cozinha de Amatsu.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, você não preparou o que te pedi...";
		mes "Não se esqueça.";
		next;
		mes "[Magumagu]";
		mes "10 ^0000FFBalas^000000";
		mes "Você não vai se esquecer, certo?";
		mes "Traga-me esses ingredientes, por favor.";
		close;
	} else if (fish_r == 2) {
		if (countitem(Crap_Shell) > 9) {
			mes "[Magumagu]";
			mes "Ah! Que bom.";
			mes "Tudo certo!";
			mes "Eu preciso deles para fazer o molho.";
			next;
			mes "[Magumagu]";
			mes "Obrigado.";
			mes "Não é nada de mais, mas irei te dar dois conjuntos de Sushi.";
			next;
			fish_r = 0;
			erasequest(10037);
			delitem(Crap_Shell,10);
			getitem(Shusi,20);
			mes "[Magumagu]";
			mes "Compartilhe com seus amigos e membros da sua família.";
			mes "E por favor volte novamente.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, você não preparou o que te pedi...";
		mes "Não se esqueça.";
		next;
		mes "[Magumagu]";
		mes "10 ^0000FFCascos de Caranguejo^000000...";
		mes "Você não vai se esquecer, certo?";
		mes "Traga-me esses ingredientes, por favor.";
		close;
	} else if (fish_r == 3) {
		if (countitem(Conch) > 9) {
			mes "[Magumagu]";
			mes "Ah! Que bom.";
			mes "Tudo certo!";
			mes "Eu estou preparando os aperitivos...";
			next;
			mes "[Magumagu]";
			mes "Obrigado. Não é nada de mais, mas irei te dar muitos conjuntos de Sushi.";
			next;
			fish_r = 0;
			erasequest(10038);
			delitem(Conch,10);
			getitem(Shusi,30);
			mes "[Magumagu]";
			mes "Estes são para três pessoas, compartilhe com seus amigos.";
			mes "Volte novamente se você tiver vontade de ajudar um pouco mais.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, você não preparou o que eu pedi a você...";
		mes "Não se esqueça do que eu te pedi.";
		next;
		mes "[Magumagu]";
		mes "10 ^0000FFConchas^000000";
		mes "Você não vai se esquecer, certo?";
		mes "Traga-me esses ingredientes, por favor.";
		close;
	} else if (fish_r == 4) {
		if (countitem(Fish_Tail) > 9) {
			mes "[Magumagu]";
			mes "Ah! Que bom.";
			mes "Tudo certo!";
			mes "Eu estava decorando o prato.";
			next;
			mes "[Magumagu]";
			mes "Obrigado. Não é nada de mais, mas irei te dar uma grande quantidade de comida.";
			next;
			fish_r = 0;
			erasequest(10039);
			delitem(Fish_Tail,10);
			getitem(Fish_Slice,20);
			getitem(Shusi,30);
			mes "[Magumagu]";
			mes "Você pode alimentar toda a sua Guilda com isso.";
			mes "Retorne com um amigo.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, você não preparou o que eu pedi a você...";
		mes "Não se esqueça do que eu te pedi.";
		next;
		mes "[Magumagu]";
		mes "10 ^0000FFCaudas de Peixe^000000";
		mes "Você não vai se esquecer, certo?";
		mes "Traga-me esses ingredientes, por favor.";
		close;
	} else if (fish_r == 5) {
		if (countitem(White_Platter) > 0) {
			mes "[Magumagu]";
			mes "Ah! Que bom.";
			mes "Tudo certo!";
			mes "Eu não tenho um prato de porcelana.";
			next;
			mes "[Magumagu]";
			mes "Obrigado. Não é nada de mais, mas irei te dar dois conjuntos de Sushi.";
			next;
			delitem(White_Platter,1);
			fish_r = 0;
			erasequest(10040);
			getitem(Shusi,20);
			mes "[Magumagu]";
			mes "Divida com seus amigos e familiares.";
			mes "E por favor volte novamente.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, você não preparou o que eu pedi a você...";
		mes "Não se esqueça do que eu te pedi.";
		next;
		mes "[Magumagu]";
		mes "Eu preciso de um:";
		mes "1 ^0000FFPrato de Porcelana^000000";
		mes "Você não vai se esquecer, certo?";
		mes "Traga-o para mim, tudo bem?";
		close;
	} else if (fish_r == 6) {
		if (countitem(Heart_Of_Mermaid) > 99) {
			if (ama_sushi == 2) {
				mes "[Magumagu]";
				mes "..............................";
				next;
				mes "[Magumagu]";
				mes "Você é uma pessoa muito gentil.";
				mes "Trouxe tudo que te pedi...";
				next;
				mes "[Magumagu]";
				mes "Você não é o primeiro estrangeiro que eu encontro.";
				mes "Amatsu está trazendo cada vez mais turistas.";
				mes "Eu só queria te testar.";
				mes " ";
				next;
				mes "[Magumagu]";
				mes "Os pedidos eram apenas distração, eu queria mesmo era te conhecer...";
				mes "como você se dedicou e como foi sério em todo o processo.";
				next;
				mes "[Magumagu]";
				mes "Eu estava pensando,";
				mes "'Se há uma pessoa assim, gostaria de ensiná-la todo o conhecimento que tenho sobre culinária'";
				next;
				mes "[Magumagu]";
				mes "E.....";
				mes "Você...";
				mes "Você é únic"+(Sex == SEX_MALE ? "o":"a")+".";
				next;
				mes "[Magumagu]";
				mes "Estou velho agora.";
				mes "Ninguém sabe quanto tempo eu posso continuar utilizando esta faca.";
				mes "Você foi escolhid"+(Sex == SEX_MALE ? "o":"a")+"...";
				next;
				delitem(Heart_Of_Mermaid,100);
				ama_sushi = 4;
				completequest(10041);
				getitem(Sasimi,1);
				mes "[Magumagu]";
				mes "Aqui, pegue minha faca.";
				mes "A partir de agora, seja "+(Sex == SEX_MALE ? "um bom cozinheiro":"uma boa cozinheira")+" com essa faca.";
				mes "...Aprenda a como cortar um peixe.";
				next;
				mes "[Magumagu]";
				mes "Não irei mais te pedir favores e te dar fatias de peixe em troca....";
				mes "Pratique a sua habilidade com a faca e ensine a todos o prazer de cozinhar...";
				close;
			} else {
				mes "[Magumagu]";
				mes "Uau...estes são os verdadeiros corações de sereia.";
				mes "A lenda conta que eles podem ser encontrados em um outro continente...";
				mes " ";
				next;
				mes "[Magumagu]";
				mes "Juntar todos esses deve ter sido bastante difícil.";
				mes "Hoje, irei usar todos os meus ingredientes para preparar um prato especial para você!";
				next;
				mes "[Magumagu]";
				mes "Espere um momento...";
				mes "Eu irei te mostrar toda a minha ^0000FFverdadeira habilidade em culinária^000000.";
				next;
				delitem(Heart_Of_Mermaid,20);
				getitem(Shusi,20);
				mes "[Magumagu]";
				mes "Experimente esses primeiro.";
				mes "Feito com ingredientes frescos.";
				next;
				delitem(Heart_Of_Mermaid,20);
				getitem(Fish_Slice,20);
				mes "[Magumagu]";
				mes "Experimente esses também.";
				mes "Os peixes da minha loja são os melhores!";
				next;
				delitem(Heart_Of_Mermaid,20);
				getitem(Shusi,20);
				mes "[Magumagu]";
				mes "Tenho um pouco mais.";
				mes "Vamos diga que é bom...!";
				mes "Não é bom? Em? Está gostando?";
				next;
				delitem(Heart_Of_Mermaid,20);
				getitem(Fish_Slice,20);
				mes "[Magumagu]";
				mes "Haha! Não terminei ainda!";
				mes "Pegue um pouco mais!";
				next;
				delitem(Heart_Of_Mermaid,20);
				getitem(Fish_Slice,10);
				getitem(Shusi,10);
				mes "[Magumagu]";
				mes "Você parece cheio...";
				mes "Pegue as sobras e divida com seus amigos e familiares.";
				next;
				++ama_sushi;
				fish_r = 0;
				erasequest(10041);
				mes "[Magumagu]";
				mes "Muito obrigado por hoje! Haha!";
				close;
			}
		}
		mes "[Magumagu]";
		mes "Ah, você não preparou o que eu pedi a você...";
		mes "Não se esqueça do que eu te pedi.";
		next;
		mes "[Magumagu]";
		mes "100 ^0000FFCorações de Sereia^000000, tudo bem?";
		mes "Você não vai se esquecer, certo?";
		mes "Traga-me esses ingredientes, por favor.";
		close;
	}
	mes "[Magumagu]";
	mes "Nossa";
	mes "Isso é um problema.....";
	mes "Há tantos clientes, mas eu não tenho todos os ingredientes...";
	next;
	mes "[Magumagu]";
	mes "Isso é horrível...";
	mes "Alguns dos meus clientes não terão a chance de experimentar os ótimos pratos de Amatsu...";
	mes " ";
	next;
	mes "[Magumagu]";
	mes "Bem, bem.";
	mes "Você é um cliente?";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
	mes "Como sempre, a minha loja valoriza o frescor dos Peixes Crus.";
	mes "O que te traz aqui...?";
	next;
	switch (select("Gostaria de comprar um Sushi","Gostaria de comprar Peixes Fatiados","Você precisa de ajuda?","Continue com o bom trabalho.")) {
		case 1:
		mes "[Magumagu]";
		mes "Certo...! Quantos?";
		mes "Um conjunto de Sushi custa 700z. Se você quiser apenas 1 Sushi, custará 74z.";
		mes "Se você quiser mais, fale-me.";
		next;
		switch (select("700z um conjunto!","74z um pedaço!","Vou tentar mais tarde")) {
			case 1:
			if (Zeny < 700) {
				mes "[Magumagu]";
				mes "Você não tem dinheiro suficiente.";
				mes "Se você quiser experimentar as deliciosas fatias de peixe, é melhor conseguir mais dinheiro.";
				close;
			}
			Zeny -= 700;
			getitem(Shusi,10);
			mes "[Magumagu]";
			mes "Aqui está.";
			mes "Se você gostar do sabor, por favor peça mais.";
			close;
			case 2:
			if (Zeny < 74) {
				mes "[Magumagu]";
				mes "Você não tem dinheiro suficiente.";
				mes "Se você quiser experimentar um delicioso Sushi, é melhor conseguir mais dinheiro.";
				close;
			}
			Zeny -= 74;
			getitem(Shusi,1);
			mes "[Magumagu]";
			mes "Aqui está.";
			mes "Se você gostar do sabor, por favor peça mais.";
			close;
			case 3:
			mes "[Magumagu]";
			mes "Meu Sushi é o melhor de todos!";
			mes "O sabor e o frescor são os melhores do mundo.";
			mes "Se você tiver tempo, experimente o meu Sushi.";
			close;
		}
		case 2:
		mes "[Magumagu]";
		mes "Certo...! Quantos?";
		mes "Um conjunto de Peixe Fatiado custa 350. Se você quiser apenas 1 Peixe Fatiado, custará 37z.";
		mes "Se você quiser mais, fale-me.";
		next;
		switch (select("350z um conjunto!","37z um pedaço!","Vou tentar mais tarde")) {
			case 1:
			if (Zeny < 350) {
				mes "[Magumagu]";
				mes "Você não tem dinheiro suficiente.";
				mes "Se você quiser experimentar as deliciosas fatias de peixe, é melhor conseguir mais dinheiro.";
				close;
			}
			Zeny -= 350;
			getitem(Fish_Slice,10);
			mes "[Magumagu]";
			mes "Aqui está.";
			mes "Se você gostar do sabor, por favor peça mais.";
			close;
			case 2:
			if (Zeny < 37) {
				mes "[Magumagu]";
				mes "Você não tem dinheiro suficiente.";
				mes "Se você quiser experimentar as deliciosas fatias de peixe, é melhor conseguir mais dinheiro.";
				mes "";
				close;
			}
			Zeny -= 37;
			getitem(Fish_Slice,1);
			mes "[Magumagu]";
			mes "Aqui está.";
			mes "Se você gostar do sabor, por favor peça mais.";
			close;
			case 3:
			mes "[Magumagu]";
			mes "Meu Peixe Fatiado é o melhor de todos!";
			mes "O sabor e o frescor são os melhores do mundo.";
			mes "Se você tiver tempo, experimente o meu Peixe Fatiado.";
			close;
		}
		case 3:
		if (BaseJob == Job_Novice) {
			mes "[Magumagu]";
			mes "Haha você é o único que precisa de ajuda!";
			mes "Apenas ofereça ajuda aos outros quando puder cuidar de si mesm"+(Sex == SEX_MALE ? "o":"a")+".";
			close;
		} else {
			mes "[Magumagu]";
			mes "Qualquer ajuda seria ótimo!!";
			mes "Eu estava preocupado, porque nós sempre ficamos sem ingredientes...";
			mes "Você pode me fazer um favor?";
			mes "Eu irei te recompensar.";
			next;
			.@fish_m1 = rand(1,10);
			if (.@fish_m1 == 1 || .@fish_m1 == 2) {
				fish_r = 1;
				setquest(10036);
				mes "[Magumagu]";
				mes "Eu preciso de algumas balas";
				mes "a dessert for the customers.";
				mes "Se você me trouxer ^0000FF10 Bala^000000.";
				mes "Eu irei te recompensar.";
				mes "Certo?";
			} else if (.@fish_m1 == 3 || .@fish_m1 == 4) {
				fish_r = 2;
				setquest(10037);
				mes "[Magumagu]";
				mes "Eu preciso de alguns cascos de caranguejo para o molho que utilizo na cozinha...";
				mes "Se você me trouxer ^0000FF10 Cascos de Caranguejo^000000,";
				mes "Eu irei te recompensar.";
				mes "Certo?";
			} else if (.@fish_m1 == 5 || .@fish_m1 == 6) {
				fish_r = 3;
				setquest(10038);
				mes "[Magumagu]";
				mes "Eu utilizei todas as minhas conchas.";
				mes "Preciso delas para fazer os aperitivos...";
				mes "Traga-me ^0000FF10 Conchas^000000.";
				mes "E é difícil encontrar Conchas por aqui...";
				mes "Por favor faça-me esse favor.";
			} else if (.@fish_m1 == 7 || .@fish_m1 == 8) {
				fish_r = 4;
				setquest(10039);
				mes "[Magumagu]";
				mes "As Caudas de Peixe estão em falta no estoque.";
				mes "Isso é urgente...";
				mes "Traga-me ^0000FF10 Caudas de Peixe^000000.";
				mes "Elas estão sempre em falta quando preciso...";
				mes "Por favor faça-me esse favor.";
			} else if (.@fish_m1 == 9) {
				fish_r = 5;
				setquest(10040);
				mes "[Magumagu]";
				mes "Estamos deixando de servir pratos aos clientes por falta de pratos.";
				mes "Isso é horrível...";
				mes "Você pode me trazer alguns ^0000FFPratos de Porcelana^000000?";
				mes "Eu não posso colocar minhas comidas em qualquer prato...";
			} else {
				if (rand(1,10) == 1) {
					fish_r = 6;
					setquest(10041);
					mes "[Magumagu]";
					mes "Não me pergunte por que...";
					mes "Mas, eu preciso de algo especial...";
					mes "^0000FF100 Corações de Sereia^000000.....";
					mes "Sei que parece impossível, mas é muito importante para mim...";
					next;
					mes "[Magumagu]";
					mes "Não faça nenhuma pergunta sobre meu pedido...";
					mes "Apenas traga o que estou te pedindo.";
				} else {
					fish_r = 5;
					setquest(10040);
					mes "[Magumagu]";
					mes "Estamos deixando de servir pratos aos clientes por falta de pratos.";
					mes "Isso é horrível...";
					mes "Você pode me trazer alguns ^0000FFPratos de Porcelana^000000?";
					mes "Eu não posso colocar minhas comidas em qualquer prato...";
				}
			}
			next;
			mes "[Magumagu]";
			mes "Bem, te desejo boa sorte...";
			mes "Estarei esperando por você.";
			mes "Não esqueça do que te pedi...";
			close;
		}
		case 4:
		mes "[Magumagu]";
		mes "Haha, você nunca esquecerá o sabor dos meus pratos ao prová-los.";
		mes "Se você tiver tempo, experimente algum deles.";
		close;
	}
}
