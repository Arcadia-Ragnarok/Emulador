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
				"Oh? Quem é este?\n"
				"Pukakakakakakakakakaka!!!\n"
				"Há quanto tempo!\n"
				"Como você está?\n"
				"Prazer em vê-lo novamente!\n"
				"Nada de novo?\n"
				"Eu estou tão contente de vê-lo!!\n"
				"Você! Apareça de vez em quando!!\n"
				"Eu poderia esquecer sua aparência!!\n"
				"Pukakakakakakakakaka!!!\n"
				"Muito, muito bom ver você!!\n"
				"É tão bom te ver assim!!\n"
				"Venha para Alberta frequentemente!!\n"
				"Matar dois coelhos com uma cajadada só!!\n"
				"Eu consigo ver você, e grito também!!\n"
				"Quanto melhor ele pode chegar!!\n"
				"Keuhahahahahahahaha!!\n"
				"Pukakakakakakakakakaka!!!\n"
				"Ppyakikakikakakakakakakaka!!");
			close;
		} else if (JobLevel < 15) {
			mes("[Necko]\n"
				"Ah, você veio porque você está encantado com a minha voz?\n"
				"Minha voz é alta, não é considerando que você pode ouvi-la à distância.\n"
				"E também...\n"
				"*Olhando em volta*");
			next;
			mes("[Necko]\n"
				"Minha voz não é apenas uma voz alta!\n"
				"Uma vez que você é um Mercador nível 15.\n"
				"Vou lhe contar o segredo!\n"
				"Então, virei outra vez!!!");
			next;
			mes("[Necko]\n"
				"Uahahahahahahahahahahahaha!\n"
				"Kyukwakakakakakakakakakaka!");
			close;
		} else if ((countitem(Scarlet_Jewel) > 6) && (countitem(Banana_Juice) > 0) && (countitem(Mushroom_Spore) > 49) && (JobLevel >= 15 || (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist))) {
			mes("[Necko]\n"
				"Oh! Você!\n"
				"Você está qualificado para aprender a gritar!\n"
				"Aprenda a gritar com a minha ajuda!\n"
				"Gostaria de aprender o Grito de Guerra?");
			next;
			switch (select("Sim!!!!", "Não", "O que é isso?")) {
				case 1:
				mes("[Necko]\n"
					"Ahahahahaha!! Bom!!!\n"
					"Esse é o espírito!\n"
					"Aqui vamos nós!");
				next;
				delitem(Scarlet_Jewel,7);
				delitem(Banana_Juice,1);
				delitem(Mushroom_Spore,50);
				skill("MC_LOUD", 1, 0);
				mes("[Necko]\n"
					"Você aprendeu o Grito de Guerra!!\n"
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
					"Grito de Guerra usa sua voz para impulsionar o espírito de batalha com 8 de SP.\n"
					"Você recebe um adicional de 4 FOR durante 5 minutos!\n"
					"Se você usá-la repetidamente bastam 5 minutos daquele ponto em diante.");
				next;
				mes("[Necko]\n"
					"Fique descontraído na vida cotidiana, e quando precisar lutar ele reunirá o seu espírito.\n"
					"Muito útil, devo dizer!!!!");
				close;
			}
		}
		mes("[Necko]\n"
			"Oh, você estava encantado com a minha voz?\n"
			"Na verdade, minha voz é alta!\n"
			"Você pode ouvi-la de tão longe.\n"
			"E também...\n"
			"*olha em volta*");
		next;
		mes("[Necko]\n"
			"Minha voz não é apenas alta!\n"
			"Eu aprendi a habilidade que me deixa gritar..\n"
			"A habilidade Grito de Guerra!!");
		next;
		mes("[Necko]\n"
			"O Grito de Guerra usa sua voz para aumentar o espírito de batalha com 8 sp.\n"
			"Você recebe um adicional 4 FOR por 5 minutos!\n"
			"Se você usá-la repetidamente bastam 5 minutos daquele ponto em diante.");
		next;
		mes("[Necko]\n"
			"Permaneça descontraído na vida cotidiana, mas grite para conseguir mais força quando você lutar.\n"
			"É muito útil!!!!\n"
			"Para aprender essa habilidade, você precisa primeiro aprender os fundamentos do som!!!");
		next;
		mes("[Necko]\n"
			"Você poderia aprender isso em Payon a partir de um cantor com apenas uma voz alta...\n"
			"Você poderia ter aulas com ele!");
		next;
		mes("[Necko]\n"
			"Porém essa pessoa morreu!\n"
			"Então você não pode aprender mais!\n"
			"Hahahahahahahaha!!!!\n"
			"..............................\n"
			"...Aww você me observa decepcionado.\n"
			"Você quer aprender o Grito de Guerra?");
		next;
		mes("[Necko]\n"
			"Hmm ... Devo ensinar-lhe?\n"
			"Se você realmente quer aprender, primeiro deve treinar as cordas vocais.\n"
			"Existem algumas coisas necessárias para o fazer.");
		next;
		mes("[Necko]\n"
			"7 Pérolas, 1 garrafa de suco de banana, e 50 esporos de cogumelos!\n"
			"Então eu vou treinar suas cordas vocais!");
		next;
		mes("[Necko]\n"
			"Vejo você quando estiver pronto!\n"
			"Eu irei preparar a minha garganta para em seguida eu lhe ensinar!!\n"
			"Bboowuuuuuuuuuuuuuuuuh...!!");
		close;
	}
	mes("[Necko]\n"
		"A loja do Necko está fechada nesse momento.\n"
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
				"Foi você.\n"
				"Sim, eu lembro de você.\n"
				"O que você acha do carrinho novo .. bom, não é?");
			next;
			mes("[Charlron]\n"
				"Aproveite a vida.\n"
				"A vida não é simplesmente passar a frente...\n"
				"Devagar, olhando em volta, arrastando um carrinho pesado, é a forma como nós, comerciantes vivemos.\n"
				"Até a próxima vez.");
			next;
			mes("[Charlron]\n"
				"Esteja saudável.");
			close;
		} else if (JobLevel >= 30|| (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist)) {
			mes("[Charlron]\n"
				"É bom ver um colega Mercador.\n"
				"Se me lembro bem, você é aquele famoso Mercador que vi esses dias.");
			next;
			mes("[Charlron]\n"
				"Mas seu carrinho não parece se encaixar a sua fama.\n"
				"Que pena.");
			next;
			switch (select("É por isso que eu vim", "O que acontece com o meu carrinho?")) {
				case 1:
				if ((countitem(Wooden_Block) > 49) && (countitem(Iron) > 9) && (countitem(Animals_Skin) > 19)) {
					mes("[Charlron]\n"
						"Haha! Ok, ok!\n"
						"Com as coisas que você trouxe\n"
						"Eu posso mudar seu carrinho.");
					next;
					delitem(Wooden_Block, 50);
					delitem(Iron, 10);
					delitem(Animals_Skin, 20);
					skill("MC_CHANGECART", 1, 0);
					mes("[Charlron]\n"
						"Parabéns.\n"
						"Agora é possível escolher um carrinho de acordo com seu gosto.\n"
						"E agora você não precisa mesmo de mim para ajudá-lo.\n"
						"Tudo o que é necessário é um pouco de SP.");
					next;
					mes("[Charlron]\n"
						"Conveniente, não acha?\n"
						"Ah, e mais uma coisa!\n"
						"Conforme você aumenta de nível, você poderá ter um novo carrinho,\n"
						"então trabalhe duro.");
					next;
					mes("[Charlron]\n"
						"Mas de qualquer maneira, ficará muito bem em você!\n"
						"Hahaha! Tenha um bom dia!");
					close;
				}
				mes("[Charlron]\n"
					"Hum... É verdade que eu modifico carrinhos, mas...\n"
					"Para fazer isso, eu preciso de alguns materiais.");
				next;
				mes("[Charlron]\n"
					"50 Troncos.\n"
					"10 Ferros.\n"
					"20 Couro de animais.\n"
					"Eu preciso, pelo menos, dessas coisas para modificar seu carrinho.");
				next;
				mes("[Charlron]\n"
					"Então venha me ver quando tiver tudo preparado.");
				close;
				case 2:
				mes("[Charlron]\n"
					"Ah, não, você não sabe de nada?\n"
					"*Aumenta o tom de voz*\n"
					"Uma nova maneira de mostrar o ego de um Mercador!\n"
					"Uma expressão de um cérebro excelente!\n"
					"Personalizar Carrinho é uma habilidade que faz com que um Mercador se destaque!");
				next;
				mes("[Charlron]\n"
					"Uma habilidade divertida que lhe permite usar um carrinho diferente de acordo com o seu nível e com apenas 40 de SP!");
				next;
				mes("[Charlron]\n"
					"Isso é Personalizar Carrinho uma habilidade fundamental para qualquer Mercador.\n"
					"Eu vou te ensinar como fazer, observe com bastante atenção.\n"
					"Faça exatamente o que eu digo para fazer e fará o seu próprio no futuro.");
				next;
				mes("[Charlron]\n"
					"Uma vez que fará a primeira vez, precisarei de alguns materiais.\n"
					"50 Troncos!\n"
					"10 Ferros!\n"
					"20 Couro Animais!\n"
					"Traga esses itens por favor!");
				next;
				mes("[Charlron]\n"
					"Tudo o que temos que fazer é usar esses materiais."
					"Então volte quando estiver com tudo pronto.\n"
					"Ok?");
				close;
				case 3:
				mes("[Charlron]\n"
					"...Isso não é 'CARTA'!");
				close;
			}
		}
		mes("[Charlron]\n"
			"Bem-vindo jovem.\n"
			"Está vendendo diversão?\n"
			"Eu sou o Mercador Charlron.\n"
			"Eu fui fazendo uma pesquisa sobre carrinhos.");
		next;
		mes("[Charlron]\n"
			"Você não está cansado desse carrinho?\n"
			"Venha até mim se você quiser modificar seu carrinho.\n"
			"Farei um bom trabalho.\n"
			"Mas, existem algumas condições.");
		next;
		mes("[Charlron]\n"
			"Eu sou um Mercador muito famoso, então eu realmente não sei lidar com iniciantes.\n"
			"Uma vez que você é nível 30 de Classe.\n"
			"Eu posso considerar a criação de um acordo com você.");
		close;
	}
	mes("[Charlron]\n"
		"Eu sou um Mercador que lida com muitas coisas.\n"
		"Se você alguma vez encontrar alguma coisa interessante volte e tente fazer um acordo comigo.");
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
				"Você tem sangue como o meu!\n"
				"Mmm! afinal...\n"
				"Eu sou feliz!\n"
				"Coçe minhas costas!\n"
				"Aqui! Depressa!");
			close;
		} else if (JobLevel >= 35 || (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist)) {
			mes("[Gershaun]\n"
				"Ooh. Você tem um corpo firme para um mercador.\n"
				"Você deve ser muito bom com algumas coisas que transporta!?\n"
				"Mmm, você deve ser capaz de aprender\n"
				"Cavalo de Pau!");
			next;
			switch (select("Ei, é por isso que eu vim", "O que é isso?")) {
				case 1:
				if ((countitem(Grape_Juice) > 1) && (countitem(Iron) > 19) && (countitem(Sticky_Mucus) > 29) && (countitem(Wing_Of_Fly) > 19) && (countitem(Tentacle) > 4)) {
					mes("[Gershaun]\n"
						"Hoho!\n"
						"Vejo que está pronto! Agora vou te ensinar\n"
						"Cavalo de Pau!");
					next;
					mes("[Gershaun]\n"
						"Ah, é um dia tão agradável!\n"
						"Vou premiar aqueles que\n"
						"estão ansiosos para balançar seus carrinhos!");
					next;
					delitem(Grape_Juice, 2);
					delitem(Iron, 20);
					delitem(Sticky_Mucus, 30);
					delitem(Wing_Of_Fly, 20);
					delitem(Tentacle, 5);
					skill("MC_CARTREVOLUTION", 1, 0);
					mes("[Gershaun]\n"
						"Agora você pode usar o Cavalo de Pau.\n"
						"Espero que você faça Mercadores famosos por usar este incrível poder destrutivo.\n"
						"Muahahahahaha!!!");
					next;
					mes("[Gershaun]\n"
						"Tenha um ótimo dia!!");
					close;
				} else if (countitem(Banana_Juice)) {
					mes("[Gershaun]\n"
						"Ooh!\n"
						"É suco de banana!\n"
						"Muito obrigado!\n"
						"...............Kaah!\n"
						"Muito refrescante! Obrigado! Até logo!");
					delitem(Banana_Juice, 1);
					next;
					mes("[Gershaun]\n"
						"Hmm?\n"
						"Você não se foi ainda?\n"
						"Ah! Você ainda está ligado no Cavalo de Pau!\n"
						"Ok então.\n"
						"Considerando que você trouxe o suco de banana, eu vou te ensinar.");
					next;
					mes("[Gershaun]\n"
						"Não é difícil ensiná-lo a fazer o Cavalo de Pau.\n"
						"Mas eu preciso de você para preparar os materiais para eu modificar o seu carrinho.\n"
						"Os itens que eu preciso são...");
					next;
					mes("[Gershaun]\n"
						"Primeiro eu preciso de 20 Ferros para fazer o carrinho durável.\n"
						"Em seguida, 30 Muco Pegajosos para absorver o choque.\n"
						"E cerca de 20 Asas de Mosca e 5 tentáculos.\n"
						"E 2 garrafas de suco de uva para mim!");
					next;
					mes("[Gershaun]\n"
						"Basta trazer os itens.\n"
						"Não estou dizendo que são apenas 20 ou 30.\n"
						"Depende do meu estado!\n"
						"Hahahaha!\n"
						"Eu estarei esperando. Até logo!");
					close;
				}
				mes("[Gershaun]\n"
					"Mmm!\n"
					"Nada pode ser feito sem uma bebida refrescante!\n"
					"Que tal começar uma conversa com pelo menos uma garrafa de suco de banana?");
				close;
				case 2:
				mes("[Gershaun]\n"
					"Você não parece saber sobre a habilidade Cavalo de Pau.\n"
					"Ok, eu vou lhe contar uma história\n"
					"Eu nunca disse a ninguém antes.\n"
					"Ouça com atenção.");
				next;
				mes("[Gershaun]\n"
					"Fiz uma pesquisa sobre uma diferente forma de usar o carrinho.\n"
					"Tentei cozinhar ramen e ainda tentei pular corda.\n"
					"Mas nenhum deles era capaz de me satisfazer.");
				next;
				mes("[Gershaun]\n"
					"Em desespero, eu vagava através dos campos com o meu carrinho.\n"
					"Depois de perambular dia após dia confuso..\n"
					"Eu conheci um monstro muito forte.\n"
					"Minha vida estava em perigo!\n"
					"Por que eu - um desarmado, Mercador sem armadura!");
				next;
				mes("[Gershaun]\n"
					"Eu estava morrendo de medo...\n"
					"Pensando e esperando que este não era o meu último suspiro.\n"
					"Com pouca esperança a esquerda eu tentei a última coisa possível.\n"
					"Eu usei o meu carrinho para acertar o monstro!");
				next;
				mes("[Gershaun]\n"
					"O monstro morreu em uma única batida.\n"
					"Foi então que eu percebi uma coisa.\n"
					"Os carrinhos também podem se tornar armas!\n"
					"Eu finalmente percebi que nós podemos atacar com nossos carrinhos!");
				next;
				mes("[Gershaun]\n"
					"Cavalo de Pau!\n"
					"Essa é a habilidade nova de ataque que eu desenvolvi.\n"
					"Usando 12 SP você poderá levantar seu carrinho para bater no seu adversário com um golpe certeiro na cabeça!");
				next;
				mes("[Gershaun]\n"
					"Quanto mais pesado o seu carrinho é, mais forte é o dano de ataque com um golpe.\n"
					"O adversário vai se machucar e será forçado a recuar!\n"
					"Isso é o Cavalo de Pau!");
				close;
			}
		}
		mes("[Gershaun]\n"
			"Mmm, um jovem Mercador.\n"
			"Mmm, Você também deve usar carrinhos.\n"
			"Já que você vai precisar para fazer negócios.\n"
			"Mas isso é tudo?");
		next;
		mes("[Gershaun]\n"
			"Fiz uma pesquisa sobre uma diferente forma de usar o carrinho.\n"
			"Tentei cozinhar ramen e ainda tentei pular corda.\n"
			"Mas nenhum deles era capaz de me satisfazer.");
		next;
		switch (select("Eu sei, Eu sei.","...?")) {
			case 1:
			mes("[Gershaun]\n"
				"Não, o que eu estou dizendo é...");
			close;
			case 2:
			mes("[Gershaun]\n"
				"Em desespero, eu vagava através dos campos com o meu carrinho.\n"
				"Depois de perambular dia após dia confuso..\n"
				"Eu conheci um monstro muito forte.\n"
				"Minha vida estava em perigo!\n"
				"Por que eu, um desarmado, Mercador sem armadura!");
			next;
			mes("[Gershaun]\n"
				"Eu estava morrendo de medo.\n"
				"Pensando e esperando que este não era o meu último suspiro.\n"
				"Com pouca esperança a esquerda eu tentei a última coisa possível.\n"
				"Eu usei o meu carrinho para acertar o monstro!\n"
				"E então... E então!");
			next;
			mes("[Gershaun]\n"
				"O monstro morreu em uma única batida.\n"
				"Foi então que eu percebi uma coisa.\n"
				"Os carrinhos também podem se tornar armas!\n"
				"Eu finalmente percebi que nós podemos atacar com nossos carrinhos!");
			next;
			mes("[Gershaun]\n"
				"Cavalo de Pau!\n"
				"Essa é a habilidade nova de ataque que eu desenvolvi.\n"
				"Usando 12 SP você poderá levantar seu carrinho para bater no seu adversário com um golpe certeiro na cabeça!");
			next;
			mes("[Gershaun]\n"
				"Quanto mais pesado o seu carrinho é mais forte é o dano de ataque com um golpe,\n"
				"o adversário vai se machucar e será forçado a recuar!");
			next;
			mes("[Gershaun]\n"
				"Você gostaria de aprender esta habilidade?");
			next;
			switch (select("Sim!!","Eu quero aprender...")) {
				case 1:
				mes("[Gershaun]\n"
					"Ok!\n"
					"Vou te dar um treinamento especial!\n"
					"Primeiro você precisa de saúde!\n"
					"Torne-se um Mercador de nível 35 de classe!\n"
					"Nos falamos depois!");
				close;
				case 2:
				mes("[Rei do Sushi Gershaun]");
				if (Sex == SEX_MALE) {
					mes("Garota estúpida!");
				} else {
					mes("Garoto estúpida!");
				}
				mes("É muito cedo para você, até mesmo para colocar suas mãos em sushis!");
				close;
			}
		}
	}
	mes("[Gershaun]\n"
		"Se não funcionar, faça com que funcione.\n"
		"Se não funcionar, faça com que funcione.\n"
		"Se não funcionar, faça com que funcione.");
	close;
}
