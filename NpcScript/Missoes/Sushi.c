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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest dos Sushis e Sashimi em Amatsu                      |
\*-----------------------------------------------------------------*/

ama_in01,162,17,1	script	Mestre do Sushi#ama	4_M_JPNOJI2,{
	if (MaxWeight - Weight < 5000) {
		mes "[Magumagu]";
		mes "Ei. Voc� aparenta estar pesado.";
		mes "Voc� n�o tem problemas quando anda?";
		mes "Sinto muito, mas n�o h� espa�o para que voc� receba algum material da minha loja.";
		next;
		mes "[Magumagu]";
		mes "Guarde algumas de suas coisas em algum lugar.";
		mes "Por que voc� est� carregando tantas coisas...?";
		mes "Huhuhu...";
		close;
	} else if (ama_sushi == 4) {
		mes "[Magumagu]";
		mes "Cortando peixe cru diariamente voc� pode se tornar um mestre em sushi.";
		mes "Ent�o n�o perca seu tempo aqui, e procure descobrir no que voc� � bom.";
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
			mes "N�o � nada de mais, mas irei te dar minha especialidade, Peixe Cru.";
			next;
			fish_r = 0;
			erasequest(10036);
			delitem(Candy,10);
			getitem(Fish_Slice,15);
			mes "[Magumagu]";
			mes "Aqui est�o 15 fatias.";
			mes "Por favor aproveite desse alimento com seus amigos.";
			mes "E volte sempre que voc� quiser degustar do sabor da cozinha de Amatsu.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, voc� n�o preparou o que te pedi...";
		mes "N�o se esque�a.";
		next;
		mes "[Magumagu]";
		mes "10 ^0000FFBalas^000000";
		mes "Voc� n�o vai se esquecer, certo?";
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
			mes "N�o � nada de mais, mas irei te dar dois conjuntos de Sushi.";
			next;
			fish_r = 0;
			erasequest(10037);
			delitem(Crap_Shell,10);
			getitem(Shusi,20);
			mes "[Magumagu]";
			mes "Compartilhe com seus amigos e membros da sua fam�lia.";
			mes "E por favor volte novamente.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, voc� n�o preparou o que te pedi...";
		mes "N�o se esque�a.";
		next;
		mes "[Magumagu]";
		mes "10 ^0000FFCascos de Caranguejo^000000...";
		mes "Voc� n�o vai se esquecer, certo?";
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
			mes "Obrigado. N�o � nada de mais, mas irei te dar muitos conjuntos de Sushi.";
			next;
			fish_r = 0;
			erasequest(10038);
			delitem(Conch,10);
			getitem(Shusi,30);
			mes "[Magumagu]";
			mes "Estes s�o para tr�s pessoas, compartilhe com seus amigos.";
			mes "Volte novamente se voc� tiver vontade de ajudar um pouco mais.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, voc� n�o preparou o que eu pedi a voc�...";
		mes "N�o se esque�a do que eu te pedi.";
		next;
		mes "[Magumagu]";
		mes "10 ^0000FFConchas^000000";
		mes "Voc� n�o vai se esquecer, certo?";
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
			mes "Obrigado. N�o � nada de mais, mas irei te dar uma grande quantidade de comida.";
			next;
			fish_r = 0;
			erasequest(10039);
			delitem(Fish_Tail,10);
			getitem(Fish_Slice,20);
			getitem(Shusi,30);
			mes "[Magumagu]";
			mes "Voc� pode alimentar toda a sua Guilda com isso.";
			mes "Retorne com um amigo.";
			close;
		}
		mes "[Magumagu]";
		mes "Ah, voc� n�o preparou o que eu pedi a voc�...";
		mes "N�o se esque�a do que eu te pedi.";
		next;
		mes "[Magumagu]";
		mes "10 ^0000FFCaudas de Peixe^000000";
		mes "Voc� n�o vai se esquecer, certo?";
		mes "Traga-me esses ingredientes, por favor.";
		close;
	} else if (fish_r == 5) {
		if (countitem(White_Platter) > 0) {
			mes "[Magumagu]";
			mes "Ah! Que bom.";
			mes "Tudo certo!";
			mes "Eu n�o tenho um prato de porcelana.";
			next;
			mes "[Magumagu]";
			mes "Obrigado. N�o � nada de mais, mas irei te dar dois conjuntos de Sushi.";
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
		mes "Ah, voc� n�o preparou o que eu pedi a voc�...";
		mes "N�o se esque�a do que eu te pedi.";
		next;
		mes "[Magumagu]";
		mes "Eu preciso de um:";
		mes "1 ^0000FFPrato de Porcelana^000000";
		mes "Voc� n�o vai se esquecer, certo?";
		mes "Traga-o para mim, tudo bem?";
		close;
	} else if (fish_r == 6) {
		if (countitem(Heart_Of_Mermaid) > 99) {
			if (ama_sushi == 2) {
				mes "[Magumagu]";
				mes "..............................";
				next;
				mes "[Magumagu]";
				mes "Voc� � uma pessoa muito gentil.";
				mes "Trouxe tudo que te pedi...";
				next;
				mes "[Magumagu]";
				mes "Voc� n�o � o primeiro estrangeiro que eu encontro.";
				mes "Amatsu est� trazendo cada vez mais turistas.";
				mes "Eu s� queria te testar.";
				mes " ";
				next;
				mes "[Magumagu]";
				mes "Os pedidos eram apenas distra��o, eu queria mesmo era te conhecer...";
				mes "como voc� se dedicou e como foi s�rio em todo o processo.";
				next;
				mes "[Magumagu]";
				mes "Eu estava pensando,";
				mes "'Se h� uma pessoa assim, gostaria de ensin�-la todo o conhecimento que tenho sobre culin�ria'";
				next;
				mes "[Magumagu]";
				mes "E.....";
				mes "Voc�...";
				mes "Voc� � �nic"+(Sex == SEX_MALE ? "o":"a")+".";
				next;
				mes "[Magumagu]";
				mes "Estou velho agora.";
				mes "Ningu�m sabe quanto tempo eu posso continuar utilizando esta faca.";
				mes "Voc� foi escolhid"+(Sex == SEX_MALE ? "o":"a")+"...";
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
				mes "N�o irei mais te pedir favores e te dar fatias de peixe em troca....";
				mes "Pratique a sua habilidade com a faca e ensine a todos o prazer de cozinhar...";
				close;
			} else {
				mes "[Magumagu]";
				mes "Uau...estes s�o os verdadeiros cora��es de sereia.";
				mes "A lenda conta que eles podem ser encontrados em um outro continente...";
				mes " ";
				next;
				mes "[Magumagu]";
				mes "Juntar todos esses deve ter sido bastante dif�cil.";
				mes "Hoje, irei usar todos os meus ingredientes para preparar um prato especial para voc�!";
				next;
				mes "[Magumagu]";
				mes "Espere um momento...";
				mes "Eu irei te mostrar toda a minha ^0000FFverdadeira habilidade em culin�ria^000000.";
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
				mes "Experimente esses tamb�m.";
				mes "Os peixes da minha loja s�o os melhores!";
				next;
				delitem(Heart_Of_Mermaid,20);
				getitem(Shusi,20);
				mes "[Magumagu]";
				mes "Tenho um pouco mais.";
				mes "Vamos diga que � bom...!";
				mes "N�o � bom? Em? Est� gostando?";
				next;
				delitem(Heart_Of_Mermaid,20);
				getitem(Fish_Slice,20);
				mes "[Magumagu]";
				mes "Haha! N�o terminei ainda!";
				mes "Pegue um pouco mais!";
				next;
				delitem(Heart_Of_Mermaid,20);
				getitem(Fish_Slice,10);
				getitem(Shusi,10);
				mes "[Magumagu]";
				mes "Voc� parece cheio...";
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
		mes "Ah, voc� n�o preparou o que eu pedi a voc�...";
		mes "N�o se esque�a do que eu te pedi.";
		next;
		mes "[Magumagu]";
		mes "100 ^0000FFCora��es de Sereia^000000, tudo bem?";
		mes "Voc� n�o vai se esquecer, certo?";
		mes "Traga-me esses ingredientes, por favor.";
		close;
	}
	mes "[Magumagu]";
	mes "Nossa";
	mes "Isso � um problema.....";
	mes "H� tantos clientes, mas eu n�o tenho todos os ingredientes...";
	next;
	mes "[Magumagu]";
	mes "Isso � horr�vel...";
	mes "Alguns dos meus clientes n�o ter�o a chance de experimentar os �timos pratos de Amatsu...";
	mes " ";
	next;
	mes "[Magumagu]";
	mes "Bem, bem.";
	mes "Voc� � um cliente?";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
	mes "Como sempre, a minha loja valoriza o frescor dos Peixes Crus.";
	mes "O que te traz aqui...?";
	next;
	switch (select("Gostaria de comprar um Sushi","Gostaria de comprar Peixes Fatiados","Voc� precisa de ajuda?","Continue com o bom trabalho.")) {
		case 1:
		mes "[Magumagu]";
		mes "Certo...! Quantos?";
		mes "Um conjunto de Sushi custa 700z. Se voc� quiser apenas 1 Sushi, custar� 74z.";
		mes "Se voc� quiser mais, fale-me.";
		next;
		switch (select("700z um conjunto!","74z um peda�o!","Vou tentar mais tarde")) {
			case 1:
			if (Zeny < 700) {
				mes "[Magumagu]";
				mes "Voc� n�o tem dinheiro suficiente.";
				mes "Se voc� quiser experimentar as deliciosas fatias de peixe, � melhor conseguir mais dinheiro.";
				close;
			}
			Zeny -= 700;
			getitem(Shusi,10);
			mes "[Magumagu]";
			mes "Aqui est�.";
			mes "Se voc� gostar do sabor, por favor pe�a mais.";
			close;
			case 2:
			if (Zeny < 74) {
				mes "[Magumagu]";
				mes "Voc� n�o tem dinheiro suficiente.";
				mes "Se voc� quiser experimentar um delicioso Sushi, � melhor conseguir mais dinheiro.";
				close;
			}
			Zeny -= 74;
			getitem(Shusi,1);
			mes "[Magumagu]";
			mes "Aqui est�.";
			mes "Se voc� gostar do sabor, por favor pe�a mais.";
			close;
			case 3:
			mes "[Magumagu]";
			mes "Meu Sushi � o melhor de todos!";
			mes "O sabor e o frescor s�o os melhores do mundo.";
			mes "Se voc� tiver tempo, experimente o meu Sushi.";
			close;
		}
		case 2:
		mes "[Magumagu]";
		mes "Certo...! Quantos?";
		mes "Um conjunto de Peixe Fatiado custa 350. Se voc� quiser apenas 1 Peixe Fatiado, custar� 37z.";
		mes "Se voc� quiser mais, fale-me.";
		next;
		switch (select("350z um conjunto!","37z um peda�o!","Vou tentar mais tarde")) {
			case 1:
			if (Zeny < 350) {
				mes "[Magumagu]";
				mes "Voc� n�o tem dinheiro suficiente.";
				mes "Se voc� quiser experimentar as deliciosas fatias de peixe, � melhor conseguir mais dinheiro.";
				close;
			}
			Zeny -= 350;
			getitem(Fish_Slice,10);
			mes "[Magumagu]";
			mes "Aqui est�.";
			mes "Se voc� gostar do sabor, por favor pe�a mais.";
			close;
			case 2:
			if (Zeny < 37) {
				mes "[Magumagu]";
				mes "Voc� n�o tem dinheiro suficiente.";
				mes "Se voc� quiser experimentar as deliciosas fatias de peixe, � melhor conseguir mais dinheiro.";
				mes "";
				close;
			}
			Zeny -= 37;
			getitem(Fish_Slice,1);
			mes "[Magumagu]";
			mes "Aqui est�.";
			mes "Se voc� gostar do sabor, por favor pe�a mais.";
			close;
			case 3:
			mes "[Magumagu]";
			mes "Meu Peixe Fatiado � o melhor de todos!";
			mes "O sabor e o frescor s�o os melhores do mundo.";
			mes "Se voc� tiver tempo, experimente o meu Peixe Fatiado.";
			close;
		}
		case 3:
		if (BaseJob == Job_Novice) {
			mes "[Magumagu]";
			mes "Haha voc� � o �nico que precisa de ajuda!";
			mes "Apenas ofere�a ajuda aos outros quando puder cuidar de si mesm"+(Sex == SEX_MALE ? "o":"a")+".";
			close;
		} else {
			mes "[Magumagu]";
			mes "Qualquer ajuda seria �timo!!";
			mes "Eu estava preocupado, porque n�s sempre ficamos sem ingredientes...";
			mes "Voc� pode me fazer um favor?";
			mes "Eu irei te recompensar.";
			next;
			.@fish_m1 = rand(1,10);
			if (.@fish_m1 == 1 || .@fish_m1 == 2) {
				fish_r = 1;
				setquest(10036);
				mes "[Magumagu]";
				mes "Eu preciso de algumas balas";
				mes "a dessert for the customers.";
				mes "Se voc� me trouxer ^0000FF10 Bala^000000.";
				mes "Eu irei te recompensar.";
				mes "Certo?";
			} else if (.@fish_m1 == 3 || .@fish_m1 == 4) {
				fish_r = 2;
				setquest(10037);
				mes "[Magumagu]";
				mes "Eu preciso de alguns cascos de caranguejo para o molho que utilizo na cozinha...";
				mes "Se voc� me trouxer ^0000FF10 Cascos de Caranguejo^000000,";
				mes "Eu irei te recompensar.";
				mes "Certo?";
			} else if (.@fish_m1 == 5 || .@fish_m1 == 6) {
				fish_r = 3;
				setquest(10038);
				mes "[Magumagu]";
				mes "Eu utilizei todas as minhas conchas.";
				mes "Preciso delas para fazer os aperitivos...";
				mes "Traga-me ^0000FF10 Conchas^000000.";
				mes "E � dif�cil encontrar Conchas por aqui...";
				mes "Por favor fa�a-me esse favor.";
			} else if (.@fish_m1 == 7 || .@fish_m1 == 8) {
				fish_r = 4;
				setquest(10039);
				mes "[Magumagu]";
				mes "As Caudas de Peixe est�o em falta no estoque.";
				mes "Isso � urgente...";
				mes "Traga-me ^0000FF10 Caudas de Peixe^000000.";
				mes "Elas est�o sempre em falta quando preciso...";
				mes "Por favor fa�a-me esse favor.";
			} else if (.@fish_m1 == 9) {
				fish_r = 5;
				setquest(10040);
				mes "[Magumagu]";
				mes "Estamos deixando de servir pratos aos clientes por falta de pratos.";
				mes "Isso � horr�vel...";
				mes "Voc� pode me trazer alguns ^0000FFPratos de Porcelana^000000?";
				mes "Eu n�o posso colocar minhas comidas em qualquer prato...";
			} else {
				if (rand(1,10) == 1) {
					fish_r = 6;
					setquest(10041);
					mes "[Magumagu]";
					mes "N�o me pergunte por que...";
					mes "Mas, eu preciso de algo especial...";
					mes "^0000FF100 Cora��es de Sereia^000000.....";
					mes "Sei que parece imposs�vel, mas � muito importante para mim...";
					next;
					mes "[Magumagu]";
					mes "N�o fa�a nenhuma pergunta sobre meu pedido...";
					mes "Apenas traga o que estou te pedindo.";
				} else {
					fish_r = 5;
					setquest(10040);
					mes "[Magumagu]";
					mes "Estamos deixando de servir pratos aos clientes por falta de pratos.";
					mes "Isso � horr�vel...";
					mes "Voc� pode me trazer alguns ^0000FFPratos de Porcelana^000000?";
					mes "Eu n�o posso colocar minhas comidas em qualquer prato...";
				}
			}
			next;
			mes "[Magumagu]";
			mes "Bem, te desejo boa sorte...";
			mes "Estarei esperando por voc�.";
			mes "N�o esque�a do que te pedi...";
			close;
		}
		case 4:
		mes "[Magumagu]";
		mes "Haha, voc� nunca esquecer� o sabor dos meus pratos ao prov�-los.";
		mes "Se voc� tiver tempo, experimente algum deles.";
		close;
	}
}
