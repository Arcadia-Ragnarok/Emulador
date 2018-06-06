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
			mes "Oh? Quem é este?";
			mes "Pukakakakakakakakakaka!!!";
			mes "Há quanto tempo!";
			mes "Como você está?";
			mes "Prazer em vê-lo novamente!";
			mes "Nada de novo?";
			mes "Eu estou tão contente de vê-lo!!";
			mes "Você! Apareça de vez em quando!!";
			mes "Eu poderia esquecer sua aparência!!";
			mes "Pukakakakakakakakaka!!!";
			mes "Muito, muito bom ver você!!";
			mes "É tão bom te ver assim!!";
			mes "Venha para Alberta frequentemente!!";
			mes "Matar dois coelhos com uma cajadada só!!";
			mes "Eu consigo ver você, e grito também!!";
			mes "Quanto melhor ele pode chegar!!";
			mes "Keuhahahahahahahaha!!";
			mes "Pukakakakakakakakakaka!!!";
			mes "Ppyakikakikakakakakakakaka!!";
			close;
		} else if (JobLevel < 15) {
			mes "[Necko]";
			mes "Ah, você veio porque você está encantado com a minha voz?";
			mes "Minha voz é alta, não é considerando que você pode ouvi-la à distância.";
			mes "E também...";
			mes "*Olhando em volta*";
			next;
			mes "[Necko]";
			mes "Minha voz não é apenas uma voz alta!";
			mes "Uma vez que você é um Mercador nível 15.";
			mes "Vou lhe contar o segredo!";
			mes "Então, virei outra vez!!!";
			next;
			mes "[Necko]";
			mes "Uahahahahahahahahahahahaha!";
			mes "Kyukwakakakakakakakakakaka!";
			close;
		} else if ((countitem(Scarlet_Jewel) > 6) && (countitem(Banana_Juice) > 0) && (countitem(Mushroom_Spore) > 49) && (JobLevel >= 15 || (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist))) {
			mes "[Necko]";
			mes "Oh! Você!";
			mes "Você está qualificado para aprender a gritar!";
			mes "Aprenda a gritar com a minha ajuda!";
			mes "Gostaria de aprender o Grito de Guerra?";
			next;
			switch (select("Sim!!!!","Não","O que é isso?")) {
				case 1:
				mes "[Necko]";
				mes "Ahahahahaha!! Bom!!!";
				mes "Esse é o espírito!";
				mes "Aqui vamos nós!";
				next;
				delitem(Scarlet_Jewel,7);
				delitem(Banana_Juice,1);
				delitem(Mushroom_Spore,50);
				skill("MC_LOUD",1,0);
				mes "[Necko]";
				mes "Você aprendeu o Grito de Guerra!!";
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
				mes "Grito de Guerra usa sua voz para impulsionar o espírito de batalha com 8 de SP.";
				mes "Você recebe um adicional de 4 FOR durante 5 minutos!";
				mes "Se você usá-la repetidamente bastam 5 minutos daquele ponto em diante.";
				next;
				mes "[Necko]";
				mes "Fique descontraído na vida cotidiana, e quando precisar lutar ele reunirá o seu espírito.";
				mes "Muito útil, devo dizer!!!!";
				close;
			}
		}
		mes "[Necko]";
		mes "Oh, você estava encantado com a minha voz?";
		mes "Na verdade, minha voz é alta!";
		mes "Você pode ouvi-la de tão longe.";
		mes "E também...";
		mes "*olha em volta*";
		next;
		mes "[Necko]";
		mes "Minha voz não é apenas alta!";
		mes "Eu aprendi a habilidade que me deixa gritar..";
		mes "A habilidade Grito de Guerra!!";
		next;
		mes "[Necko]";
		mes "O Grito de Guerra usa sua voz para aumentar o espírito de batalha com 8 sp.";
		mes "Você recebe um adicional 4 FOR por 5 minutos!";
		mes "Se você usá-la repetidamente bastam 5 minutos daquele ponto em diante.";
		next;
		mes "[Necko]";
		mes "Permaneça descontraído na vida cotidiana, mas grite para conseguir mais força quando você lutar.";
		mes "É muito útil!!!!";
		mes "Para aprender essa habilidade, você precisa primeiro aprender os fundamentos do som!!!";
		next;
		mes "[Necko]";
		mes "Você poderia aprender isso em Payon a partir de um cantor com apenas uma voz alta...";
		mes "Você poderia ter aulas com ele!";
		next;
		mes "[Necko]";
		mes "Porém essa pessoa morreu!";
		mes "Então você não pode aprender mais!";
		mes "Hahahahahahahaha!!!!";
		mes "..............................";
		mes "...Aww você me observa decepcionado.";
		mes "Você quer aprender o Grito de Guerra?";
		next;
		mes "[Necko]";
		mes "Hmm ... Devo ensinar-lhe?";
		mes "Se você realmente quer aprender, primeiro deve treinar as cordas vocais.";
		mes "Existem algumas coisas necessárias para o fazer.";
		next;
		mes "[Necko]";
		mes "7 Pérolas, 1 garrafa de suco de banana, e 50 esporos de cogumelos!";
		mes "Então eu vou treinar suas cordas vocais!";
		next;
		mes "[Necko]";
		mes "Vejo você quando estiver pronto!";
		mes "Eu irei preparar a minha garganta para em seguida eu lhe ensinar!!";
		mes "Bboowuuuuuuuuuuuuuuuuh...!!";
		close;
	}
	mes "[Necko]";
	mes "A loja do Necko está fechada nesse momento.";
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
			mes "Foi você.";
			mes "Sim, eu lembro de você.";
			mes "O que você acha do carrinho novo .. bom, não é?";
			next;
			mes "[Charlron]";
			mes "Aproveite a vida.";
			mes "A vida não é simplesmente passar a frente...";
			mes "Devagar, olhando em volta, arrastando um carrinho pesado, é a forma como nós, comerciantes vivemos.";
			mes "Até a próxima vez.";
			next;
			mes "[Charlron]";
			mes "Esteja saudável.";
			close;
		} else if (JobLevel >= 30|| (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist)) {
			mes "[Charlron]";
			mes "É bom ver um colega Mercador.";
			mes "Se me lembro bem, você é aquele famoso Mercador que vi esses dias.";
			next;
			mes "Mas seu carrinho não parece se encaixar a sua fama.";
			mes "Que pena.";
			next;
			switch (select("É por isso que eu vim","O que acontece com o meu carrinho?")) {
				case 1:
				if ((countitem(Wooden_Block) > 49) && (countitem(Iron) > 9) && (countitem(Animals_Skin) > 19)) {
					mes "[Charlron]";
					mes "Haha! Ok, ok!";
					mes "Com as coisas que você trouxe";
					mes "Eu posso mudar seu carrinho.";
					next;
					delitem(Wooden_Block,50);
					delitem(Iron,10);
					delitem(Animals_Skin,20);
					skill("MC_CHANGECART",1,0);
					mes "[Charlron]";
					mes "Parabéns.";
					mes "Agora é possível escolher um carrinho de acordo com seu gosto.";
					mes "E agora você não precisa mesmo de mim para ajudá-lo.";
					mes "Tudo o que é necessário é um pouco de SP.";
					next;
					mes "[Charlron]";
					mes "Conveniente, não acha?";
					mes "Ah, e mais uma coisa!";
					mes "Conforme você aumenta de nível, você poderá ter um novo carrinho, então trabalhe duro.";
					next;
					mes "[Charlron]";
					mes "Mas de qualquer maneira, ficará muito bem em você!";
					mes "Hahaha! Tenha um bom dia!";
					close;
				}
				mes "[Charlron]";
				mes "Hum... É verdade que eu modifico carrinhos, mas...";
				mes "Para fazer isso, eu preciso de alguns materiais.";
				next;
				mes "[Charlron]";
				mes "50 Troncos.";
				mes "10 Ferros.";
				mes "20 Couro de animais.";
				mes "Eu preciso, pelo menos, dessas coisas para modificar seu carrinho.";
				next;
				mes "[Charlron]";
				mes "Então venha me ver quando tiver tudo preparado.";
				close;
				case 2:
				mes "[Charlron]";
				mes "Ah, não, você não sabe de nada?";
				mes "*Aumenta o tom de voz*";
				mes "Uma nova maneira de mostrar o ego de um Mercador!";
				mes "Uma expressão de um cérebro excelente!";
				mes "Personalizar Carrinho é uma habilidade que faz com que um Mercador se destaque!";
				next;
				mes "[Charlron]";
				mes "Uma habilidade divertida que lhe permite usar um carrinho diferente de acordo com o seu nível e com apenas 40 de SP!";
				next;
				mes "[Charlron]";
				mes "Isso é Personalizar Carrinho uma habilidade fundamental para qualquer Mercador.";
				mes "Eu vou te ensinar como fazer, observe com bastante atenção.";
				mes "Faça exatamente o que eu digo para fazer e fará o seu próprio no futuro";
				next;
				mes "[Charlron]";
				mes "Uma vez que fará a primeira vez, precisarei de alguns materiais.";
				mes "50 Troncos!";
				mes "10 Ferros!";
				mes "20 Couro Animais!";
				mes "Traga esses itens por favor!";
				next;
				mes "[Charlron]";
				mes "Tudo o que temos que fazer é usar esses materiais, então volte quando estiver com tudo pronto.";
				mes "Ok?";
				close;
				case 3:
				mes "[Charlron]";
				mes "...Isso não é 'CARTA'!";
				close;
			}
		}
		mes "[Charlron]";
		mes "Bem-vindo jovem.";
		mes "Está vendendo diversão?";
		mes "Eu sou o Mercador Charlron.";
		mes "Eu fui fazendo uma pesquisa sobre carrinhos.";
		next;
		mes "[Charlron]";
		mes "Você não está cansado desse carrinho?";
		mes "Venha até mim se você quiser modificar seu carrinho.";
		mes "Farei um bom trabalho.";
		mes "Mas, existem algumas condições.";
		next;
		mes "[Charlron]";
		mes "Eu sou um Mercador muito famoso, então eu realmente não sei lidar com iniciantes.";
		mes "Uma vez que você é nível 30 de Classe.";
		mes "Eu posso considerar a criação de um acordo com você.";
		close;
	}
	mes "[Charlron]";
	mes "Eu sou um Mercador que lida com muitas coisas.";
	mes "Se você alguma vez encontrar alguma coisa interessante volte e tente fazer um acordo comigo.";
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
			mes "Você tem sangue como o meu!";
			mes "Mmm! afinal...";
			mes "Eu sou feliz!";
			mes "Coçe minhas costas!";
			mes "Aqui! Depressa!";
			close;
		} else if (JobLevel >= 35 || (BaseJob == Job_Blacksmith || BaseJob == Job_Alchemist)) {
			mes "[Gershaun]";
			mes "Ooh. Você tem um corpo firme para um mercador.";
			mes "Você deve ser muito bom com algumas coisas que transporta!?";
			mes "Mmm, você deve ser capaz de aprender";
			mes "Cavalo de Pau!";
			next;
			switch (select("Ei, é por isso que eu vim","O que é isso?")) {
				case 1:
				if ((countitem(Grape_Juice) > 1) && (countitem(Iron) > 19) && (countitem(Sticky_Mucus) > 29) && (countitem(Wing_Of_Fly) > 19) && (countitem(Tentacle) > 4)) {
					mes "[Gershaun]";
					mes "Hoho!";
					mes "Vejo que está pronto! agora vou te ensinar";
					mes "Cavalo de Pau!";
					next;
					mes "[Gershaun]";
					mes "Ah, é um dia tão agradável!";
					mes "Vou premiar aqueles que";
					mes "estão ansiosos para balançar seus carrinhos!";
					next;
					delitem(Grape_Juice,2);
					delitem(Iron,20);
					delitem(Sticky_Mucus,30);
					delitem(Wing_Of_Fly,20);
					delitem(Tentacle,5);
					skill("MC_CARTREVOLUTION",1,0);
					mes "Agora você pode usar o Cavalo de Pau.";
					mes "Espero que você faça Mercadores famosos por usar este incrível poder destrutivo.";
					mes "Muahahahahaha!!!";
					next;
					mes "[Gershaun]";
					mes "Tenha um ótimo dia!!";
					close;
				} else if (countitem(Banana_Juice)) {
					mes "[Gershaun]";
					mes "Ooh!";
					mes "É suco de banana!";
					mes "Muito obrigado!";
					mes "...............Kaah!";
					delitem(Banana_Juice,1);
					mes "Muito refrescante! Obrigado! Até logo!";
					next;
					mes "[Gershaun]";
					mes "Hmm?";
					mes "Você não se foi ainda?";
					mes "Ah! Você ainda está ligado no Cavalo de Pau!";
					mes "Ok então.";
					mes "Considerando que você trouxe o suco de banana, eu vou te ensinar.";
					next;
					mes "[Gershaun]";
					mes "Não é difícil ensiná-lo a fazer o Cavalo de Pau.";
					mes "Mas eu preciso de você para preparar os materiais para eu modificar o seu carrinho.";
					mes "Os itens que eu preciso são...";
					next;
					mes "[Gershaun]";
					mes "Primeiro eu preciso de 20 Ferros para fazer o carrinho durável.";
					mes "Em seguida, 30 Muco Pegajosos para absorver o choque.";
					mes "E cerca de 20 Asas de Mosca e 5 tentáculos.";
					mes "E 2 garrafas de suco de uva para mim!";
					next;
					mes "[Gershaun]";
					mes "Basta trazer os itens.";
					mes "Não estou dizendo que são apenas 20 ou 30.";
					mes "Depende do meu estado!";
					mes "Hahahaha!";
					mes "Eu estarei esperando. Até logo!";
					close;
				}
				mes "[Gershaun]";
				mes "Mmm!";
				mes "Nada pode ser feito sem uma bebida refrescante!";
				mes "Que tal começar uma conversa com pelo menos uma garrafa de suco de banana?";
				close;
				case 2:
				mes "[Gershaun]";
				mes "Você não parece saber sobre a habilidade Cavalo de Pau.";
				mes "Ok, eu vou lhe contar uma história";
				mes "Eu nunca disse a ninguém antes.";
				mes "Ouça com atenção.";
				next;
				mes "[Gershaun]";
				mes "Fiz uma pesquisa sobre uma diferente forma de usar o carrinho.";
				mes "Tentei cozinhar ramen e ainda tentei pular corda.";
				mes "Mas nenhum deles era capaz de me satisfazer.";
				next;
				mes "[Gershaun]";
				mes "Em desespero, eu vagava através dos campos com o meu carrinho.";
				mes "Depois de perambular dia após dia confuso..";
				mes "Eu conheci um monstro muito forte.";
				mes "Minha vida estava em perigo!";
				mes "Por que eu - um desarmado, Mercador sem armadura!";
				next;
				mes "[Gershaun]";
				mes "Eu estava morrendo de medo...";
				mes "Pensando e esperando que este não era o meu último suspiro.";
				mes "Com pouca esperança a esquerda eu tentei a última coisa possível.";
				mes "Eu usei o meu carrinho para acertar o monstro!";
				next;
				mes "[Gershaun]";
				mes "O monstro morreu em uma única batida.";
				mes "Foi então que eu percebi uma coisa.";
				mes "Os carrinhos também podem se tornar armas!";
				mes "Eu finalmente percebi que nós podemos atacar com nossos carrinhos!";
				next;
				mes "[Gershaun]";
				mes "Cavalo de Pau!";
				mes "Essa é a habilidade nova de ataque que eu desenvolvi.";
				mes "Usando 12 SP você poderá levantar seu carrinho para bater no seu adversário com um golpe certeiro na cabeça!";
				next;
				mes "[Gershaun]";
				mes "Quanto mais pesado o seu carrinho é, mais forte é o dano de ataque com um golpe.";
				mes "O adversário vai se machucar e será forçado a recuar!";
				mes "Isso é o Cavalo de Pau!";
				close;
			}
		}
		mes "[Gershaun]";
		mes "Mmm, um jovem Mercador.";
		mes "Mmm, Você também deve usar carrinhos.";
		mes "Já que você vai precisar para fazer negócios.";
		mes "Mas isso é tudo?";
		next;
		mes "[Gershaun]";
		mes "Fiz uma pesquisa sobre uma diferente forma de usar o carrinho.";
		mes "Tentei cozinhar ramen e ainda tentei pular corda.";
		mes "Mas nenhum deles era capaz de me satisfazer.";
		next;
		switch (select("Eu sei, Eu sei.","...?")) {
			case 1:
			mes "[Gershaun]";
			mes "Não, o que eu estou dizendo é...";
			close;
			case 2:
			mes "[Gershaun]";
			mes "Em desespero, eu vagava através dos campos com o meu carrinho.";
			mes "Depois de perambular dia após dia confuso..";
			mes "Eu conheci um monstro muito forte.";
			mes "Minha vida estava em perigo!";
			mes "Por que eu, um desarmado, Mercador sem armadura!";
			next;
			mes "[Gershaun]";
			mes "Eu estava morrendo de medo.";
			mes "Pensando e esperando que este não era o meu último suspiro.";
			mes "Com pouca esperança a esquerda eu tentei a última coisa possível.";
			mes "Eu usei o meu carrinho para acertar o monstro!";
			mes "E então... E então!";
			next;
			mes "[Gershaun]";
			mes "O monstro morreu em uma única batida.";
			mes "Foi então que eu percebi uma coisa.";
			mes "Os carrinhos também podem se tornar armas!";
			mes "Eu finalmente percebi que nós podemos atacar com nossos carrinhos!";
			next;
			mes "[Gershaun]";
			mes "Cavalo de Pau!";
			mes "Essa é a habilidade nova de ataque que eu desenvolvi.";
			mes "Usando 12 SP você poderá levantar seu carrinho para bater no seu adversário com um golpe certeiro na cabeça!";
			next;
			mes "[Gershaun]";
			mes "Quanto mais pesado o seu carrinho é mais forte é o dano de ataque com um golpe, o adversário vai se machucar e será forçado a recuar!";
			next;
			mes "[Gershaun]";
			mes "Você gostaria de aprender esta habilidade?";
			next;
			switch (select("Sim!!","Eu quero aprender...")) {
				case 1:
				mes "[Gershaun]";
				mes "Ok!";
				mes "Vou te dar um treinamento especial!";
				mes "Primeiro você precisa de saúde!";
				mes "Torne-se um Mercador de nível 35 de classe!";
				mes "Nos falamos depois!";
				close;
				case 2:
				mes "[Rei do Sushi Gershaun]";
				if (Sex == SEX_MALE) {
					mes "Garota estúpida!";
				} else {
					mes "Garoto estúpida!";
				}
				mes "É muito cedo para você, até mesmo para colocar suas mãos em sushis!";
				close;
			}
		}
	}
	mes "[Gershaun]";
	mes "Se não funcionar, faça com que funcione.";
	mes "Se não funcionar, faça com que funcione.";
	mes "Se não funcionar, faça com que funcione.";
	close;
}
