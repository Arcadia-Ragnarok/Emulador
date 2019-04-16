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
| - Info: Aprendizagem das habilidades para mercador.               |
|   Grito de Guerra (MC_LOUD)                                       |
|   Personalizar Carrinho (MC_CHANGECART)                           | 
|   Cavalo de Pau (MC_CARTREVOLUTION)                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ MC_LOUD ] -
// ------------------------------------------------------------------
alberta,83,96,5	script	Necko	4W_M_02,7,7,{
	if (BaseClass == Job_Merchant) {
		if (getskilllv("MC_LOUD")) {
			mes("[Necko]\n"
				"Sinto muito. A Loja do Necko ...\n"
				"Oh? Quem � este?\n"
				"Pukakakakakakakakakaka!!!\n"
				"H� quanto tempo!\n"
				"Como voc� est�?\n"
				"Prazer em v�-lo novamente!\n"
				"Nada de novo?\n"
				"Eu estou t�o contente de v�-lo!!\n"
				"Voc�! Apare�a de vez em quando!!\n"
				"Eu poderia esquecer sua apar�ncia!!\n"
				"Pukakakakakakakakaka!!!\n"
				"Muito, muito bom ver voc�!!\n"
				"� t�o bom te ver assim!!\n"
				"Venha para Alberta frequentemente!!\n"
				"Matar dois coelhos com uma cajadada s�!!\n"
				"Eu consigo ver voc�, e grito tamb�m!!\n"
				"Quanto melhor ele pode chegar!!\n"
				"Keuhahahahahahahaha!!\n"
				"Pukakakakakakakakakaka!!!\n"
				"Ppyakikakikakakakakakakaka!!");
			close;
		} else if (JobLevel < 15) {
			mes("[Necko]\n"
				"Ah, voc� veio porque voc� est� encantado com a minha voz?\n"
				"Minha voz � alta, n�o � considerando que voc� pode ouvi-la � dist�ncia.\n"
				"E tamb�m...\n"
				"*Olhando em volta*");
			next;
			mes("[Necko]\n"
				"Minha voz n�o � apenas uma voz alta!\n"
				"Uma vez que voc� � um Mercador n�vel 15.\n"
				"Vou lhe contar o segredo!\n"
				"Ent�o, virei outra vez!!!");
			next;
			mes("[Necko]\n"
				"Uahahahahahahahahahahahaha!\n"
				"Kyukwakakakakakakakakakaka!");
			close;
		} else if ((countitem(Scarlet_Jewel) > 6) && (countitem(Banana_Juice) > 0) && (countitem(Mushroom_Spore) > 49) && (JobLevel >= 15 || (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist))) {
			mes("[Necko]\n"
				"Oh! Voc�!\n"
				"Voc� est� qualificado para aprender a gritar!\n"
				"Aprenda a gritar com a minha ajuda!\n"
				"Gostaria de aprender o Grito de Guerra?");
			next;
			switch (select("Sim!!!!", "N�o", "O que � isso?")) {
				case 1:
				mes("[Necko]\n"
					"Ahahahahaha!! Bom!!!\n"
					"Esse � o esp�rito!\n"
					"Aqui vamos n�s!");
				next;
				delitem(Scarlet_Jewel,7);
				delitem(Banana_Juice,1);
				delitem(Mushroom_Spore,50);
				skill("MC_LOUD", 1, 0);
				mes("[Necko]\n"
					"Voc� aprendeu o Grito de Guerra!!\n"
					"Grite o quanto quiser!!\n"
					"Hahahahahahaha!");
				close;
				case 2:
				mes("[Necko]\n"
					"Eh... ok.\n"
					"Pooooh...");
				close;
				case 3:
				mes("[Necko]\n"
					"Grito de Guerra usa sua voz para impulsionar o esp�rito de batalha com 8 de SP.\n"
					"Voc� recebe um adicional de 4 FOR durante 5 minutos!\n"
					"Se voc� us�-la repetidamente bastam 5 minutos daquele ponto em diante.");
				next;
				mes("[Necko]\n"
					"Fique descontra�do na vida cotidiana, e quando precisar lutar ele reunir� o seu esp�rito.\n"
					"Muito �til, devo dizer!!!!");
				close;
			}
		}
		mes("[Necko]\n"
			"Oh, voc� estava encantado com a minha voz?\n"
			"Na verdade, minha voz � alta!\n"
			"Voc� pode ouvi-la de t�o longe.\n"
			"E tamb�m...\n"
			"*olha em volta*");
		next;
		mes("[Necko]\n"
			"Minha voz n�o � apenas alta!\n"
			"Eu aprendi a habilidade que me deixa gritar..\n"
			"A habilidade Grito de Guerra!!");
		next;
		mes("[Necko]\n"
			"O Grito de Guerra usa sua voz para aumentar o esp�rito de batalha com 8 sp.\n"
			"Voc� recebe um adicional 4 FOR por 5 minutos!\n"
			"Se voc� us�-la repetidamente bastam 5 minutos daquele ponto em diante.");
		next;
		mes("[Necko]\n"
			"Permane�a descontra�do na vida cotidiana, mas grite para conseguir mais for�a quando voc� lutar.\n"
			"� muito �til!!!!\n"
			"Para aprender essa habilidade, voc� precisa primeiro aprender os fundamentos do som!!!");
		next;
		mes("[Necko]\n"
			"Voc� poderia aprender isso em Payon a partir de um cantor com apenas uma voz alta...\n"
			"Voc� poderia ter aulas com ele!");
		next;
		mes("[Necko]\n"
			"Por�m essa pessoa morreu!\n"
			"Ent�o voc� n�o pode aprender mais!\n"
			"Hahahahahahahaha!!!!\n"
			"..............................\n"
			"...Aww voc� me observa decepcionado.\n"
			"Voc� quer aprender o Grito de Guerra?");
		next;
		mes("[Necko]\n"
			"Hmm ... Devo ensinar-lhe?\n"
			"Se voc� realmente quer aprender, primeiro deve treinar as cordas vocais.\n"
			"Existem algumas coisas necess�rias para o fazer.");
		next;
		mes("[Necko]\n"
			"7 P�rolas, 1 garrafa de suco de banana, e 50 esporos de cogumelos!\n"
			"Ent�o eu vou treinar suas cordas vocais!");
		next;
		mes("[Necko]\n"
			"Vejo voc� quando estiver pronto!\n"
			"Eu irei preparar a minha garganta para em seguida eu lhe ensinar!!\n"
			"Bboowuuuuuuuuuuuuuuuuh...!!");
		close;
	}
	mes("[Necko]\n"
		"A loja do Necko est� fechada nesse momento.\n"
		"Volte mais tarde....");
	close;

	OnTouch:
	mes("[!?]\n"
		"Muahahahahahahahahahahahaha!!\n"
		"Pukakakakakakakakakakakakaka!");
	close;
}

// ------------------------------------------------------------------
// - [ MC_CHANGECART ] -
// ------------------------------------------------------------------
alberta,119,221,6	script	Charlron	1_M_PAY_ELDER,{
	if (BaseClass == Job_Merchant) {
		if (getskilllv("MC_CHANGECART")) {
			mes("[Charlron]\n"
				"Mmm? Fiquei me perguntando quem estava fazendo todo\n"
				"esse barulho transportando um carrinho.\n"
				"Foi voc�.\n"
				"Sim, eu lembro de voc�.\n"
				"O que voc� acha do carrinho novo .. bom, n�o �?");
			next;
			mes("[Charlron]\n"
				"Aproveite a vida.\n"
				"A vida n�o � simplesmente passar a frente...\n"
				"Devagar, olhando em volta, arrastando um carrinho pesado, � a forma como n�s, comerciantes vivemos.\n"
				"At� a pr�xima vez.");
			next;
			mes("[Charlron]\n"
				"Esteja saud�vel.");
			close;
		} else if (JobLevel >= 30|| (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist)) {
			mes("[Charlron]\n"
				"� bom ver um colega Mercador.\n"
				"Se me lembro bem, voc� � aquele famoso Mercador que vi esses dias.");
			next;
			mes("[Charlron]\n"
				"Mas seu carrinho n�o parece se encaixar a sua fama.\n"
				"Que pena.");
			next;
			switch (select("� por isso que eu vim", "O que acontece com o meu carrinho?")) {
				case 1:
				if ((countitem(Wooden_Block) > 49) && (countitem(Iron) > 9) && (countitem(Animals_Skin) > 19)) {
					mes("[Charlron]\n"
						"Haha! Ok, ok!\n"
						"Com as coisas que voc� trouxe\n"
						"Eu posso mudar seu carrinho.");
					next;
					delitem(Wooden_Block, 50);
					delitem(Iron, 10);
					delitem(Animals_Skin, 20);
					skill("MC_CHANGECART", 1, 0);
					mes("[Charlron]\n"
						"Parab�ns.\n"
						"Agora � poss�vel escolher um carrinho de acordo com seu gosto.\n"
						"E agora voc� n�o precisa mesmo de mim para ajud�-lo.\n"
						"Tudo o que � necess�rio � um pouco de SP.");
					next;
					mes("[Charlron]\n"
						"Conveniente, n�o acha?\n"
						"Ah, e mais uma coisa!\n"
						"Conforme voc� aumenta de n�vel, voc� poder� ter um novo carrinho,\n"
						"ent�o trabalhe duro.");
					next;
					mes("[Charlron]\n"
						"Mas de qualquer maneira, ficar� muito bem em voc�!\n"
						"Hahaha! Tenha um bom dia!");
					close;
				}
				mes("[Charlron]\n"
					"Hum... � verdade que eu modifico carrinhos, mas...\n"
					"Para fazer isso, eu preciso de alguns materiais.");
				next;
				mes("[Charlron]\n"
					"50 Troncos.\n"
					"10 Ferros.\n"
					"20 Couro de animais.\n"
					"Eu preciso, pelo menos, dessas coisas para modificar seu carrinho.");
				next;
				mes("[Charlron]\n"
					"Ent�o venha me ver quando tiver tudo preparado.");
				close;
				case 2:
				mes("[Charlron]\n"
					"Ah, n�o, voc� n�o sabe de nada?\n"
					"*Aumenta o tom de voz*\n"
					"Uma nova maneira de mostrar o ego de um Mercador!\n"
					"Uma express�o de um c�rebro excelente!\n"
					"Personalizar Carrinho � uma habilidade que faz com que um Mercador se destaque!");
				next;
				mes("[Charlron]\n"
					"Uma habilidade divertida que lhe permite usar um carrinho diferente de acordo com o seu n�vel e com apenas 40 de SP!");
				next;
				mes("[Charlron]\n"
					"Isso � Personalizar Carrinho uma habilidade fundamental para qualquer Mercador.\n"
					"Eu vou te ensinar como fazer, observe com bastante aten��o.\n"
					"Fa�a exatamente o que eu digo para fazer e far� o seu pr�prio no futuro.");
				next;
				mes("[Charlron]\n"
					"Uma vez que far� a primeira vez, precisarei de alguns materiais.\n"
					"50 Troncos!\n"
					"10 Ferros!\n"
					"20 Couro Animais!\n"
					"Traga esses itens por favor!");
				next;
				mes("[Charlron]\n"
					"Tudo o que temos que fazer � usar esses materiais."
					"Ent�o volte quando estiver com tudo pronto.\n"
					"Ok?");
				close;
				case 3:
				mes("[Charlron]\n"
					"...Isso n�o � 'CARTA'!");
				close;
			}
		}
		mes("[Charlron]\n"
			"Bem-vindo jovem.\n"
			"Est� vendendo divers�o?\n"
			"Eu sou o Mercador Charlron.\n"
			"Eu fui fazendo uma pesquisa sobre carrinhos.");
		next;
		mes("[Charlron]\n"
			"Voc� n�o est� cansado desse carrinho?\n"
			"Venha at� mim se voc� quiser modificar seu carrinho.\n"
			"Farei um bom trabalho.\n"
			"Mas, existem algumas condi��es.");
		next;
		mes("[Charlron]\n"
			"Eu sou um Mercador muito famoso, ent�o eu realmente n�o sei lidar com iniciantes.\n"
			"Uma vez que voc� � n�vel 30 de Classe.\n"
			"Eu posso considerar a cria��o de um acordo com voc�.");
		close;
	}
	mes("[Charlron]\n"
		"Eu sou um Mercador que lida com muitas coisas.\n"
		"Se voc� alguma vez encontrar alguma coisa interessante volte e tente fazer um acordo comigo.");
	close;
}

// ------------------------------------------------------------------
// - [ MC_CARTREVOLUTION ] -
// ------------------------------------------------------------------
-	script	::Gershaun_alberta	-1,{
	if (BaseClass == Job_Merchant) {
		if (getskilllv("MC_CARTREVOLUTION")) {
			mes("[Gershaun]\n"
				"Ah, quanto tempo sem te ver!\n"
				"Ohh, as marcas vermelhas em seu carrinho.\n"
				"Elas devem ser as marcas dele...\n"
				"Parece que eu te ensinei a habilidade corretamente!");
			next;
			mes("[Gershaun]\n"
				"Voc� tem sangue como o meu!\n"
				"Mmm! afinal...\n"
				"Eu sou feliz!\n"
				"Co�e minhas costas!\n"
				"Aqui! Depressa!");
			close;
		} else if (JobLevel >= 35 || (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist)) {
			mes("[Gershaun]\n"
				"Ooh. Voc� tem um corpo firme para um mercador.\n"
				"Voc� deve ser muito bom com algumas coisas que transporta!?\n"
				"Mmm, voc� deve ser capaz de aprender\n"
				"Cavalo de Pau!");
			next;
			switch (select("Ei, � por isso que eu vim", "O que � isso?")) {
				case 1:
				if ((countitem(Grape_Juice) > 1) && (countitem(Iron) > 19) && (countitem(Sticky_Mucus) > 29) && (countitem(Wing_Of_Fly) > 19) && (countitem(Tentacle) > 4)) {
					mes("[Gershaun]\n"
						"Hoho!\n"
						"Vejo que est� pronto! Agora vou te ensinar\n"
						"Cavalo de Pau!");
					next;
					mes("[Gershaun]\n"
						"Ah, � um dia t�o agrad�vel!\n"
						"Vou premiar aqueles que\n"
						"est�o ansiosos para balan�ar seus carrinhos!");
					next;
					delitem(Grape_Juice, 2);
					delitem(Iron, 20);
					delitem(Sticky_Mucus, 30);
					delitem(Wing_Of_Fly, 20);
					delitem(Tentacle, 5);
					skill("MC_CARTREVOLUTION", 1, 0);
					mes("[Gershaun]\n"
						"Agora voc� pode usar o Cavalo de Pau.\n"
						"Espero que voc� fa�a Mercadores famosos por usar este incr�vel poder destrutivo.\n"
						"Muahahahahaha!!!");
					next;
					mes("[Gershaun]\n"
						"Tenha um �timo dia!!");
					close;
				} else if (countitem(Banana_Juice)) {
					mes("[Gershaun]\n"
						"Ooh!\n"
						"� suco de banana!\n"
						"Muito obrigado!\n"
						"...............Kaah!\n"
						"Muito refrescante! Obrigado! At� logo!");
					delitem(Banana_Juice, 1);
					next;
					mes("[Gershaun]\n"
						"Hmm?\n"
						"Voc� n�o se foi ainda?\n"
						"Ah! Voc� ainda est� ligado no Cavalo de Pau!\n"
						"Ok ent�o.\n"
						"Considerando que voc� trouxe o suco de banana, eu vou te ensinar.");
					next;
					mes("[Gershaun]\n"
						"N�o � dif�cil ensin�-lo a fazer o Cavalo de Pau.\n"
						"Mas eu preciso de voc� para preparar os materiais para eu modificar o seu carrinho.\n"
						"Os itens que eu preciso s�o...");
					next;
					mes("[Gershaun]\n"
						"Primeiro eu preciso de 20 Ferros para fazer o carrinho dur�vel.\n"
						"Em seguida, 30 Muco Pegajosos para absorver o choque.\n"
						"E cerca de 20 Asas de Mosca e 5 tent�culos.\n"
						"E 2 garrafas de suco de uva para mim!");
					next;
					mes("[Gershaun]\n"
						"Basta trazer os itens.\n"
						"N�o estou dizendo que s�o apenas 20 ou 30.\n"
						"Depende do meu estado!\n"
						"Hahahaha!\n"
						"Eu estarei esperando. At� logo!");
					close;
				}
				mes("[Gershaun]\n"
					"Mmm!\n"
					"Nada pode ser feito sem uma bebida refrescante!\n"
					"Que tal come�ar uma conversa com pelo menos uma garrafa de suco de banana?");
				close;
				case 2:
				mes("[Gershaun]\n"
					"Voc� n�o parece saber sobre a habilidade Cavalo de Pau.\n"
					"Ok, eu vou lhe contar uma hist�ria\n"
					"Eu nunca disse a ningu�m antes.\n"
					"Ou�a com aten��o.");
				next;
				mes("[Gershaun]\n"
					"Fiz uma pesquisa sobre uma diferente forma de usar o carrinho.\n"
					"Tentei cozinhar ramen e ainda tentei pular corda.\n"
					"Mas nenhum deles era capaz de me satisfazer.");
				next;
				mes("[Gershaun]\n"
					"Em desespero, eu vagava atrav�s dos campos com o meu carrinho.\n"
					"Depois de perambular dia ap�s dia confuso..\n"
					"Eu conheci um monstro muito forte.\n"
					"Minha vida estava em perigo!\n"
					"Por que eu - um desarmado, Mercador sem armadura!");
				next;
				mes("[Gershaun]\n"
					"Eu estava morrendo de medo...\n"
					"Pensando e esperando que este n�o era o meu �ltimo suspiro.\n"
					"Com pouca esperan�a a esquerda eu tentei a �ltima coisa poss�vel.\n"
					"Eu usei o meu carrinho para acertar o monstro!");
				next;
				mes("[Gershaun]\n"
					"O monstro morreu em uma �nica batida.\n"
					"Foi ent�o que eu percebi uma coisa.\n"
					"Os carrinhos tamb�m podem se tornar armas!\n"
					"Eu finalmente percebi que n�s podemos atacar com nossos carrinhos!");
				next;
				mes("[Gershaun]\n"
					"Cavalo de Pau!\n"
					"Essa � a habilidade nova de ataque que eu desenvolvi.\n"
					"Usando 12 SP voc� poder� levantar seu carrinho para bater no seu advers�rio com um golpe certeiro na cabe�a!");
				next;
				mes("[Gershaun]\n"
					"Quanto mais pesado o seu carrinho �, mais forte � o dano de ataque com um golpe.\n"
					"O advers�rio vai se machucar e ser� for�ado a recuar!\n"
					"Isso � o Cavalo de Pau!");
				close;
			}
		}
		mes("[Gershaun]\n"
			"Mmm, um jovem Mercador.\n"
			"Mmm, Voc� tamb�m deve usar carrinhos.\n"
			"J� que voc� vai precisar para fazer neg�cios.\n"
			"Mas isso � tudo?");
		next;
		mes("[Gershaun]\n"
			"Fiz uma pesquisa sobre uma diferente forma de usar o carrinho.\n"
			"Tentei cozinhar ramen e ainda tentei pular corda.\n"
			"Mas nenhum deles era capaz de me satisfazer.");
		next;
		switch (select("Eu sei, Eu sei.","...?")) {
			case 1:
			mes("[Gershaun]\n"
				"N�o, o que eu estou dizendo �...");
			close;
			case 2:
			mes("[Gershaun]\n"
				"Em desespero, eu vagava atrav�s dos campos com o meu carrinho.\n"
				"Depois de perambular dia ap�s dia confuso..\n"
				"Eu conheci um monstro muito forte.\n"
				"Minha vida estava em perigo!\n"
				"Por que eu, um desarmado, Mercador sem armadura!");
			next;
			mes("[Gershaun]\n"
				"Eu estava morrendo de medo.\n"
				"Pensando e esperando que este n�o era o meu �ltimo suspiro.\n"
				"Com pouca esperan�a a esquerda eu tentei a �ltima coisa poss�vel.\n"
				"Eu usei o meu carrinho para acertar o monstro!\n"
				"E ent�o... E ent�o!");
			next;
			mes("[Gershaun]\n"
				"O monstro morreu em uma �nica batida.\n"
				"Foi ent�o que eu percebi uma coisa.\n"
				"Os carrinhos tamb�m podem se tornar armas!\n"
				"Eu finalmente percebi que n�s podemos atacar com nossos carrinhos!");
			next;
			mes("[Gershaun]\n"
				"Cavalo de Pau!\n"
				"Essa � a habilidade nova de ataque que eu desenvolvi.\n"
				"Usando 12 SP voc� poder� levantar seu carrinho para bater no seu advers�rio com um golpe certeiro na cabe�a!");
			next;
			mes("[Gershaun]\n"
				"Quanto mais pesado o seu carrinho � mais forte � o dano de ataque com um golpe,\n"
				"o advers�rio vai se machucar e ser� for�ado a recuar!");
			next;
			mes("[Gershaun]\n"
				"Voc� gostaria de aprender esta habilidade?");
			next;
			switch (select("Sim!!","Eu quero aprender...")) {
				case 1:
				mes("[Gershaun]\n"
					"Ok!\n"
					"Vou te dar um treinamento especial!\n"
					"Primeiro voc� precisa de sa�de!\n"
					"Torne-se um Mercador de n�vel 35 de classe!\n"
					"Nos falamos depois!");
				close;
				case 2:
				mes("[Rei do Sushi Gershaun]");
				if (Sex == SEX_MALE) {
					mes("Garota est�pida!");
				} else {
					mes("Garoto est�pida!");
				}
				mes("� muito cedo para voc�, at� mesmo para colocar suas m�os em sushis!");
				close;
			}
		}
	}
	mes("[Gershaun]\n"
		"Se n�o funcionar, fa�a com que funcione.\n"
		"Se n�o funcionar, fa�a com que funcione.\n"
		"Se n�o funcionar, fa�a com que funcione.");
	close;
}
