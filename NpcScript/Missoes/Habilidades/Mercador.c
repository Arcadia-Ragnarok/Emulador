/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Source Script                      |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest da habilidades para mercador                        |
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
			mes "[Necko]";
			mes "Sinto muito. A Loja do Necko ...";
			mes "Oh? Quem � este?";
			mes "Pukakakakakakakakakaka!!!";
			mes "H� quanto tempo!";
			mes "Como voc� est�?";
			mes "Prazer em v�-lo novamente!";
			mes "Nada de novo?";
			mes "Eu estou t�o contente de v�-lo!!";
			mes "Voc�! Apare�a de vez em quando!!";
			mes "Eu poderia esquecer sua apar�ncia!!";
			mes "Pukakakakakakakakaka!!!";
			mes "Muito, muito bom ver voc�!!";
			mes "� t�o bom te ver assim!!";
			mes "Venha para Alberta frequentemente!!";
			mes "Matar dois coelhos com uma cajadada s�!!";
			mes "Eu consigo ver voc�, e grito tamb�m!!";
			mes "Quanto melhor ele pode chegar!!";
			mes "Keuhahahahahahahaha!!";
			mes "Pukakakakakakakakakaka!!!";
			mes "Ppyakikakikakakakakakakaka!!";
			close;
		} else if (JobLevel < 15) {
			mes "[Necko]";
			mes "Ah, voc� veio porque voc� est� encantado com a minha voz?";
			mes "Minha voz � alta, n�o � considerando que voc� pode ouvi-la � dist�ncia.";
			mes "E tamb�m...";
			mes "*Olhando em volta*";
			next;
			mes "[Necko]";
			mes "Minha voz n�o � apenas uma voz alta!";
			mes "Uma vez que voc� � um Mercador n�vel 15.";
			mes "Vou lhe contar o segredo!";
			mes "Ent�o, virei outra vez!!!";
			next;
			mes "[Necko]";
			mes "Uahahahahahahahahahahahaha!";
			mes "Kyukwakakakakakakakakakaka!";
			close;
		} else if ((countitem(Scarlet_Jewel) > 6) && (countitem(Banana_Juice) > 0) && (countitem(Mushroom_Spore) > 49) && (JobLevel >= 15 || (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist))) {
			mes "[Necko]";
			mes "Oh! Voc�!";
			mes "Voc� est� qualificado para aprender a gritar!";
			mes "Aprenda a gritar com a minha ajuda!";
			mes "Gostaria de aprender o Grito de Guerra?";
			next;
			switch (select("Sim!!!!", "N�o", "O que � isso?")) {
				case 1:
				mes "[Necko]";
				mes "Ahahahahaha!! Bom!!!";
				mes "Esse � o esp�rito!";
				mes "Aqui vamos n�s!";
				next;
				delitem(Scarlet_Jewel, 7);
				delitem(Banana_Juice, 1);
				delitem(Mushroom_Spore, 50);
				skill("MC_LOUD", 1, 0);
				mes "[Necko]";
				mes "Voc� aprendeu o Grito de Guerra!!";
				mes "Grite o quanto quiser!!";
				mes "Hahahahahahaha!";
				close;
				case 2:
				mes "[Necko]";
				mes "Eh... ok.";
				mes "Pooooh...";
				close;
				case 3:
				mes "[Necko]";
				mes "Grito de Guerra usa sua voz para impulsionar o esp�rito de batalha com 8 de SP.";
				mes "Voc� recebe um adicional de 4 FOR durante 5 minutos!";
				mes "Se voc� us�-la repetidamente bastam 5 minutos daquele ponto em diante.";
				next;
				mes "[Necko]";
				mes "Fique descontra�do na vida cotidiana, e quando precisar lutar ele reunir� o seu esp�rito.";
				mes "Muito �til, devo dizer!!!!";
				close;
			}
		}
		mes "[Necko]";
		mes "Oh, voc� estava encantado com a minha voz?";
		mes "Na verdade, minha voz � alta!";
		mes "Voc� pode ouvi-la de t�o longe.";
		mes "E tamb�m...";
		mes "*olha em volta*";
		next;
		mes "[Necko]";
		mes "Minha voz n�o � apenas alta!";
		mes "Eu aprendi a habilidade que me deixa gritar..";
		mes "A habilidade Grito de Guerra!!";
		next;
		mes "[Necko]";
		mes "O Grito de Guerra usa sua voz para aumentar o esp�rito de batalha com 8 sp.";
		mes "Voc� recebe um adicional 4 FOR por 5 minutos!";
		mes "Se voc� us�-la repetidamente bastam 5 minutos daquele ponto em diante.";
		next;
		mes "[Necko]";
		mes "Permane�a descontra�do na vida cotidiana, mas grite para conseguir mais for�a quando voc� lutar.";
		mes "� muito �til!!!!";
		mes "Para aprender essa habilidade, voc� precisa primeiro aprender os fundamentos do som!!!";
		next;
		mes "[Necko]";
		mes "Voc� poderia aprender isso em Payon a partir de um cantor com apenas uma voz alta...";
		mes "Voc� poderia ter aulas com ele!";
		next;
		mes "[Necko]";
		mes "Por�m essa pessoa morreu!";
		mes "Ent�o voc� n�o pode aprender mais!";
		mes "Hahahahahahahaha!!!!";
		mes "..............................";
		mes "...Aww voc� me observa decepcionado.";
		mes "Voc� quer aprender o Grito de Guerra?";
		next;
		mes "[Necko]";
		mes "Hmm ... Devo ensinar-lhe?";
		mes "Se voc� realmente quer aprender, primeiro deve treinar as cordas vocais.";
		mes "Existem algumas coisas necess�rias para o fazer.";
		next;
		mes "[Necko]";
		mes "7 P�rolas, 1 garrafa de suco de banana, e 50 esporos de cogumelos!";
		mes "Ent�o eu vou treinar suas cordas vocais!";
		next;
		mes "[Necko]";
		mes "Vejo voc� quando estiver pronto!";
		mes "Eu irei preparar a minha garganta para em seguida eu lhe ensinar!!";
		mes "Bboowuuuuuuuuuuuuuuuuh...!!";
		close;
	}
	mes "[Necko]";
	mes "A loja do Necko est� fechada nesse momento.";
	mes "Volte mais tarde....";
	close;

	OnTouch:
	mes "[!?]";
	mes "Muahahahahahahahahahahahaha!!";
	mes "Pukakakakakakakakakakakakaka!";
	close;
}

// ------------------------------------------------------------------
// - [ MC_CHANGECART ] -
// ------------------------------------------------------------------
alberta,119,221,6	script	Charlron	1_M_PAY_ELDER,{
	if (BaseClass == Job_Merchant) {
		if (getskilllv("MC_CHANGECART")) {
			mes "[Charlron]";
			mes "Mmm? Fiquei me perguntando quem estava fazendo todo";
			mes "esse barulho transportando um carrinho.";
			mes "Foi voc�.";
			mes "Sim, eu lembro de voc�.";
			mes "O que voc� acha do carrinho novo .. bom, n�o �?";
			next;
			mes "[Charlron]";
			mes "Aproveite a vida.";
			mes "A vida n�o � simplesmente passar a frente...";
			mes "Devagar, olhando em volta, arrastando um carrinho pesado, � a forma como n�s, comerciantes vivemos.";
			mes "At� a pr�xima vez.";
			next;
			mes "[Charlron]";
			mes "Esteja saud�vel.";
			close;
		} else if (JobLevel >= 30|| (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist)) {
			mes "[Charlron]";
			mes "� bom ver um colega Mercador.";
			mes "Se me lembro bem, voc� � aquele famoso Mercador que vi esses dias.";
			next;
			mes "Mas seu carrinho n�o parece se encaixar a sua fama.";
			mes "Que pena.";
			next;
			switch (select("� por isso que eu vim", "O que acontece com o meu carrinho?")) {
				case 1:
				if ((countitem(Wooden_Block) > 49) && (countitem(Iron) > 9) && (countitem(Animals_Skin) > 19)) {
					mes "[Charlron]";
					mes "Haha! Ok, ok!";
					mes "Com as coisas que voc� trouxe";
					mes "Eu posso mudar seu carrinho.";
					next;
					delitem(Wooden_Block, 50);
					delitem(Iron, 10);
					delitem(Animals_Skin, 20);
					skill("MC_CHANGECART", 1, 0);
					mes "[Charlron]";
					mes "Parab�ns.";
					mes "Agora � poss�vel escolher um carrinho de acordo com seu gosto.";
					mes "E agora voc� n�o precisa mesmo de mim para ajud�-lo.";
					mes "Tudo o que � necess�rio � um pouco de SP.";
					next;
					mes "[Charlron]";
					mes "Conveniente, n�o acha?";
					mes "Ah, e mais uma coisa!";
					mes "Conforme voc� aumenta de n�vel, voc� poder� ter um novo carrinho, ent�o trabalhe duro.";
					next;
					mes "[Charlron]";
					mes "Mas de qualquer maneira, ficar� muito bem em voc�!";
					mes "Hahaha! Tenha um bom dia!";
					close;
				}
				mes "[Charlron]";
				mes "Hum... � verdade que eu modifico carrinhos, mas...";
				mes "Para fazer isso, eu preciso de alguns materiais.";
				next;
				mes "[Charlron]";
				mes "50 Troncos.";
				mes "10 Ferros.";
				mes "20 Couro de animais.";
				mes "Eu preciso, pelo menos, dessas coisas para modificar seu carrinho.";
				next;
				mes "[Charlron]";
				mes "Ent�o venha me ver quando tiver tudo preparado.";
				close;
				case 2:
				mes "[Charlron]";
				mes "Ah, n�o, voc� n�o sabe de nada?";
				mes "*Aumenta o tom de voz*";
				mes "Uma nova maneira de mostrar o ego de um Mercador!";
				mes "Uma express�o de um c�rebro excelente!";
				mes "Personalizar Carrinho � uma habilidade que faz com que um Mercador se destaque!";
				next;
				mes "[Charlron]";
				mes "Uma habilidade divertida que lhe permite usar um carrinho diferente de acordo com o seu n�vel e com apenas 40 de SP!";
				next;
				mes "[Charlron]";
				mes "Isso � Personalizar Carrinho uma habilidade fundamental para qualquer Mercador.";
				mes "Eu vou te ensinar como fazer, observe com bastante aten��o.";
				mes "Fa�a exatamente o que eu digo para fazer e far� o seu pr�prio no futuro";
				next;
				mes "[Charlron]";
				mes "Uma vez que far� a primeira vez, precisarei de alguns materiais.";
				mes "50 Troncos!";
				mes "10 Ferros!";
				mes "20 Couro Animais!";
				mes "Traga esses itens por favor!";
				next;
				mes "[Charlron]";
				mes "Tudo o que temos que fazer � usar esses materiais, ent�o volte quando estiver com tudo pronto.";
				mes "Ok?";
				close;
				case 3:
				mes "[Charlron]";
				mes "...Isso n�o � 'CARTA'!";
				close;
			}
		}
		mes "[Charlron]";
		mes "Bem-vindo jovem.";
		mes "Est� vendendo divers�o?";
		mes "Eu sou o Mercador Charlron.";
		mes "Eu fui fazendo uma pesquisa sobre carrinhos.";
		next;
		mes "[Charlron]";
		mes "Voc� n�o est� cansado desse carrinho?";
		mes "Venha at� mim se voc� quiser modificar seu carrinho.";
		mes "Farei um bom trabalho.";
		mes "Mas, existem algumas condi��es.";
		next;
		mes "[Charlron]";
		mes "Eu sou um Mercador muito famoso, ent�o eu realmente n�o sei lidar com iniciantes.";
		mes "Uma vez que voc� � n�vel 30 de Classe.";
		mes "Eu posso considerar a cria��o de um acordo com voc�.";
		close;
	}
	mes "[Charlron]";
	mes "Eu sou um Mercador que lida com muitas coisas.";
	mes "Se voc� alguma vez encontrar alguma coisa interessante volte e tente fazer um acordo comigo.";
	close;
}

// ------------------------------------------------------------------
// - [ MC_CARTREVOLUTION ] -
// ------------------------------------------------------------------
-	script	::Gershaun_alberta	-1,{
	if (BaseClass == Job_Merchant) {
		if (getskilllv("MC_CARTREVOLUTION")) {
			mes "[Gershaun]";
			mes "Ah, quanto tempo sem te ver!";
			mes "Ohh, as marcas vermelhas em seu carrinho.";
			mes "Elas devem ser as marcas dele...";
			mes "Parece que eu te ensinei a habilidade corretamente!";
			next;
			mes "[Gershaun]";
			mes "Voc� tem sangue como o meu!";
			mes "Mmm! afinal...";
			mes "Eu sou feliz!";
			mes "Co�e minhas costas!";
			mes "Aqui! Depressa!";
			close;
		} else if (JobLevel >= 35 || (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist)) {
			mes "[Gershaun]";
			mes "Ooh. Voc� tem um corpo firme para um mercador.";
			mes "Voc� deve ser muito bom com algumas coisas que transporta!?";
			mes "Mmm, voc� deve ser capaz de aprender";
			mes "Cavalo de Pau!";
			next;
			switch (select("Ei, � por isso que eu vim", "O que � isso?")) {
				case 1:
				if ((countitem(Grape_Juice) > 1) && (countitem(Iron) > 19) && (countitem(Sticky_Mucus) > 29) && (countitem(Wing_Of_Fly) > 19) && (countitem(Tentacle) > 4)) {
					mes "[Gershaun]";
					mes "Hoho!";
					mes "Vejo que est� pronto! agora vou te ensinar";
					mes "Cavalo de Pau!";
					next;
					mes "[Gershaun]";
					mes "Ah, � um dia t�o agrad�vel!";
					mes "Vou premiar aqueles que";
					mes "est�o ansiosos para balan�ar seus carrinhos!";
					next;
					delitem(Grape_Juice, 2);
					delitem(Iron, 20);
					delitem(Sticky_Mucus, 30);
					delitem(Wing_Of_Fly, 20);
					delitem(Tentacle, 5);
					skill("MC_CARTREVOLUTION", 1, 0);
					mes "Agora voc� pode usar o Cavalo de Pau.";
					mes "Espero que voc� fa�a Mercadores famosos por usar este incr�vel poder destrutivo.";
					mes "Muahahahahaha!!!";
					next;
					mes "[Gershaun]";
					mes "Tenha um �timo dia!!";
					close;
				} else if (countitem(Banana_Juice)) {
					mes "[Gershaun]";
					mes "Ooh!";
					mes "� suco de banana!";
					mes "Muito obrigado!";
					mes "...............Kaah!";
					delitem(Banana_Juice, 1);
					mes "Muito refrescante! Obrigado! At� logo!";
					next;
					mes "[Gershaun]";
					mes "Hmm?";
					mes "Voc� n�o se foi ainda?";
					mes "Ah! Voc� ainda est� ligado no Cavalo de Pau!";
					mes "Ok ent�o.";
					mes "Considerando que voc� trouxe o suco de banana, eu vou te ensinar.";
					next;
					mes "[Gershaun]";
					mes "N�o � dif�cil ensin�-lo a fazer o Cavalo de Pau.";
					mes "Mas eu preciso de voc� para preparar os materiais para eu modificar o seu carrinho.";
					mes "Os itens que eu preciso s�o...";
					next;
					mes "[Gershaun]";
					mes "Primeiro eu preciso de 20 Ferros para fazer o carrinho dur�vel.";
					mes "Em seguida, 30 Muco Pegajosos para absorver o choque.";
					mes "E cerca de 20 Asas de Mosca e 5 tent�culos.";
					mes "E 2 garrafas de suco de uva para mim!";
					next;
					mes "[Gershaun]";
					mes "Basta trazer os itens.";
					mes "N�o estou dizendo que s�o apenas 20 ou 30.";
					mes "Depende do meu estado!";
					mes "Hahahaha!";
					mes "Eu estarei esperando. At� logo!";
					close;
				}
				mes "[Gershaun]";
				mes "Mmm!";
				mes "Nada pode ser feito sem uma bebida refrescante!";
				mes "Que tal come�ar uma conversa com pelo menos uma garrafa de suco de banana?";
				close;
				case 2:
				mes "[Gershaun]";
				mes "Voc� n�o parece saber sobre a habilidade Cavalo de Pau.";
				mes "Ok, eu vou lhe contar uma hist�ria";
				mes "Eu nunca disse a ningu�m antes.";
				mes "Ou�a com aten��o.";
				next;
				mes "[Gershaun]";
				mes "Fiz uma pesquisa sobre uma diferente forma de usar o carrinho.";
				mes "Tentei cozinhar ramen e ainda tentei pular corda.";
				mes "Mas nenhum deles era capaz de me satisfazer.";
				next;
				mes "[Gershaun]";
				mes "Em desespero, eu vagava atrav�s dos campos com o meu carrinho.";
				mes "Depois de perambular dia ap�s dia confuso..";
				mes "Eu conheci um monstro muito forte.";
				mes "Minha vida estava em perigo!";
				mes "Por que eu - um desarmado, Mercador sem armadura!";
				next;
				mes "[Gershaun]";
				mes "Eu estava morrendo de medo...";
				mes "Pensando e esperando que este n�o era o meu �ltimo suspiro.";
				mes "Com pouca esperan�a a esquerda eu tentei a �ltima coisa poss�vel.";
				mes "Eu usei o meu carrinho para acertar o monstro!";
				next;
				mes "[Gershaun]";
				mes "O monstro morreu em uma �nica batida.";
				mes "Foi ent�o que eu percebi uma coisa.";
				mes "Os carrinhos tamb�m podem se tornar armas!";
				mes "Eu finalmente percebi que n�s podemos atacar com nossos carrinhos!";
				next;
				mes "[Gershaun]";
				mes "Cavalo de Pau!";
				mes "Essa � a habilidade nova de ataque que eu desenvolvi.";
				mes "Usando 12 SP voc� poder� levantar seu carrinho para bater no seu advers�rio com um golpe certeiro na cabe�a!";
				next;
				mes "[Gershaun]";
				mes "Quanto mais pesado o seu carrinho �, mais forte � o dano de ataque com um golpe.";
				mes "O advers�rio vai se machucar e ser� for�ado a recuar!";
				mes "Isso � o Cavalo de Pau!";
				close;
			}
		}
		mes "[Gershaun]";
		mes "Mmm, um jovem Mercador.";
		mes "Mmm, Voc� tamb�m deve usar carrinhos.";
		mes "J� que voc� vai precisar para fazer neg�cios.";
		mes "Mas isso � tudo?";
		next;
		mes "[Gershaun]";
		mes "Fiz uma pesquisa sobre uma diferente forma de usar o carrinho.";
		mes "Tentei cozinhar ramen e ainda tentei pular corda.";
		mes "Mas nenhum deles era capaz de me satisfazer.";
		next;
		switch (select("Eu sei, Eu sei.", "...?")) {
			case 1:
			mes "[Gershaun]";
			mes "N�o, o que eu estou dizendo �...";
			close;
			case 2:
			mes "[Gershaun]";
			mes "Em desespero, eu vagava atrav�s dos campos com o meu carrinho.";
			mes "Depois de perambular dia ap�s dia confuso..";
			mes "Eu conheci um monstro muito forte.";
			mes "Minha vida estava em perigo!";
			mes "Por que eu, um desarmado, Mercador sem armadura!";
			next;
			mes "[Gershaun]";
			mes "Eu estava morrendo de medo.";
			mes "Pensando e esperando que este n�o era o meu �ltimo suspiro.";
			mes "Com pouca esperan�a a esquerda eu tentei a �ltima coisa poss�vel.";
			mes "Eu usei o meu carrinho para acertar o monstro!";
			mes "E ent�o... E ent�o!";
			next;
			mes "[Gershaun]";
			mes "O monstro morreu em uma �nica batida.";
			mes "Foi ent�o que eu percebi uma coisa.";
			mes "Os carrinhos tamb�m podem se tornar armas!";
			mes "Eu finalmente percebi que n�s podemos atacar com nossos carrinhos!";
			next;
			mes "[Gershaun]";
			mes "Cavalo de Pau!";
			mes "Essa � a habilidade nova de ataque que eu desenvolvi.";
			mes "Usando 12 SP voc� poder� levantar seu carrinho para bater no seu advers�rio com um golpe certeiro na cabe�a!";
			next;
			mes "[Gershaun]";
			mes "Quanto mais pesado o seu carrinho � mais forte � o dano de ataque com um golpe, o advers�rio vai se machucar e ser� for�ado a recuar!";
			next;
			mes "[Gershaun]";
			mes "Voc� gostaria de aprender esta habilidade?";
			next;
			switch (select("Sim!!", "Eu quero aprender...")) {
				case 1:
				mes "[Gershaun]";
				mes "Ok!";
				mes "Vou te dar um treinamento especial!";
				mes "Primeiro voc� precisa de sa�de!";
				mes "Torne-se um Mercador de n�vel 35 de classe!";
				mes "Nos falamos depois!";
				close;
				case 2:
				mes "[Rei do Sushi Gershaun]";
				if (Sex == SEX_MALE) {
					mes "Garota est�pida!";
				} else {
					mes "Garoto est�pida!";
				}
				mes "� muito cedo para voc�, at� mesmo para colocar suas m�os em sushis!";
				close;
			}
		}
	}
	mes "[Gershaun]";
	mes "Se n�o funcionar, fa�a com que funcione.";
	mes "Se n�o funcionar, fa�a com que funcione.";
	mes "Se n�o funcionar, fa�a com que funcione.";
	close;
}
