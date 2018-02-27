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
| - Nota: Npcs comuns na cidade Comodo                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
comodo,171,137,1	script	Haith#com::cmdla	4_F_03,{
	mes("[La Ed]\n Deve haver um tesouro escondido naquele lugar!");
	next;
	mes("[Haith]\n Se nós acharmos ele, as pessoas não pensaram mais que somos perdedores!!");
	next;
	mes("[La Ed]\n Finalmente!");
	next;
	mes("[Haith]\n Vamos encontrar o tesouro!");
	next;
	mes("[La Ed]\n Vamos fazer isso!!");
	emotion(e_gg);
	next;
	mes("[Haith]\n ................");
	next;
	mes("[La Ed]\n A propósito...\n Você acha que ele iria nos falar facilmente sobre o grande tesouro?");
	emotion(e_hmm);
	emotion(e_hmm, 0, "La Ed#com");
	next;
	select("Hm? Que tesouro?");
	mes("[La Ed]\n Quê...?!\n Quando você começou a nos escutar?!");
	next;
	mes("[Haith]\n Hã... parece que você que saber mais sobre o tesouro.\n Bem, essa informação não sairá barata...");
	emotion(e_gg);
	next;
	mes("[La Ed]\n Além disso, precisamos de um pouco, uma coisa no caso de...\n *tosse!*\n ^555555Nós não acharmos absolutamente nada.^000000");
	next;
	mes("[La Ed, Haith]\n Se você nos pagar 1,000 Zenys, nós falamos para você!");
	emotion(e_gg);
	emotion(e_gg, 0, "La Ed#um");
	next;
	if (select("Ouvir Mais", "Sair") == 1) {
		mes("[Haith]\n Hahahaha!\n Você é o cara!");
		next;
		mes("[La Ed]\n Ok, não muito tempo atrás, um famoso aventureiro chamado Niels voltou de uma de suas viagens.");
		next;
		mes("[Haith]\n *Sussurros*\n ^555555Ele trouxe consigo uma caixa enorme.^000000");
		next;
		mes("[La Ed]\n Além disso, ele voltou no meio da noite sem ter falado nada a ninguém.\n Então, evidentemente que ele tem algum segredo, não acha?");
		next;
		mes("[Haith]\n O que poderia estar dentro da caixa?\n Só pode ser um tesouro!!");
		next;
		mes("[La Ed]\n Então!\n Nós decidimos ir em uma jornada atrás do nosso próprio tesouro!!");
		next;
		mes("[Haith]\n O problema é que nós não temos certeza de que o Niels vá nos dizer onde ele encontrou o tesouro...");
		emotion(e_hmm);
		next;
		mes("[La Ed]\n Porque o Niels sempre nos trata como se nós fomossemos estúpidos!!\n Bah!!");
		next;
		select("Onde está o Niels?");
		mes("[La Ed]\n Ele está hospedado na parte norte desta vila.");
		next;
		mes("[Haith]\n Nós vamos lhe dar boas informações, desde que nos pague!");
		next;
		mes("[La Ed, Haith]\n Boa sorte!");
		close;
	}
	emotion(e_hmm);
	close;
}
comodo,170,137,7	duplicate(cmdla)	La Ed#com	4_M_02

// ------------------------------------------------------------------
comodo,180,153,4	script	Sonotora#com	4_F_01,{
	mes("[Athena Sonotora]\n Dizem que uma famosa escola de dança aqui em Comodo vai abrir em breve.");
	next;
	mes("[Athena Sonotora]\n Aah...\n Para ser como uma prima donna no centro das atenções!");
	next;
	mes("[Athena Sonotora]\n Eu quero me inscrever também, mais os requisitos são muito específicos.\n Eu me pergunto se devo tentar mesmo assim...");
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
cmd_in01,175,120,3	script	Iriya#com	1_F_04,{
	mes("[Iriya]\n O Sr. Niels está na mesa na esquina.\n Ele tem muitas notícias sobre o mundo.");
	next;
	mes("[Iriya]\n Não tenho certeza onde ele esteve desta vez.\n Ele só da risadas e diz:\n 'Eu não acho que estou apto para este trabalho docente.'");
	next;
	mes("[Iriya]\n Entretanto, manter as pessoas visitando o Sr. Niels...\n Eu não poder ajudar, mas pergunto...\n Onde ele tem ido?");
	close;
}

// ------------------------------------------------------------------
cmd_in01,164,115,1	script	Niels#com	4_M_JOB_BLACKSMITH,{
	mes("[Niels]\n Hmm?\n O que você está procurando?\n Ah! Você deve ter ouvido os rumores de que eu achei algum tipo de tesouro.\n Sim, isto é compreensível...");
	next;
	mes("[Niels]\n Bem, estes rumores de que eu tropeço em algum tesouro maravilhoso é apenas o resultado de imaginações férteis.\n Tudo o que tenho encontrado são coisas para acrescentar na minha coleção.");
	next;
	mes("[Niels]\n Mas... desde que eu tenha provado que 'isto' realmente existe por ver com meus prãpios olhos\n Para mim, o que eu obtive foi um valioso tesouro.");
	next;
	mes("[Niels]\n Esta aldeia de Comodo!\n Você não acha que as cavernas são muito pequenas e estreista por alguma razão?");
	next;
	mes("[Niels]\n Então, eu estava pensando nisso...\n E eu cheguei a conclusão de que deve haver alguma coisa escondida dentro da caverna...");
	next;
	mes("[Niels]\n E então!\n Eu finalmente encontrei.\n A passagem para 'o lugar' que ninguém jamais encontrou!");
	next;
	mes("[Niels]\n ................");
	next;
	mes("[Niels]\n ................\n Hm?");
	next;
	mes("[Niels]\n Eu estava esperando um espetacular e dramático efeito sonoro para a minha declaração!\n Eh, oh bem...");
	emotion(e_hmm);
	next;
	mes("[Niels]\n Bem, no espírito da descobrta, nunca pense em me perguntar sobre direções para 'o lugar' ou sobre o que tem 'no lugar'.\n Eu não quero estragar a surpresa.");
	next;
	mes("[Niels]\n Se você é um verdadeiro aventureiro.\n Eu espero que você grite com toda a força de seus pulmões...");
	next;
	mes("[Niels]\n 'Ahhhh!\n Eu preciso saber o que é isto!!'\n Chute a porta aberta e corra como se estivesse fugindo do inferno para encontrar o lugar por conta própria!!");
	next;
	mes("[Niels]\n Agora!\n Rápido saia e busque por esse lugar!\n Será este lugar um mundo totalmente novo ou uma armadilha para o inferno?!\n Vá adiante, satisfaça seu destino, aventureiro!");
	close;
}

// ------------------------------------------------------------------
cmd_in02,73,81,4	script	Martine#com	1_M_02,{
	mes("[Martine]\n Jogatina?!\n Não!\n Não é isso!\n Não julgue o Cassino de Comodo como outro qualquer.\n Aqui existem os melhores jogos do mundo.\n São jogos de alto nível, e não simples jogos de azar percebe?!");
	next;
	mes("[Martine]\n Por que você está me olhando desse jeito?!\n Não me olhe assim!\n Eu não me importo com o que você acha...\n Eu perdi todo o meu dinheiro nesse cassino, mas eu não me importo!");
	next;
	mes("[Martine]\n Eu preciso ir as cavernas de Comodo...\n Matar alguns monstros e conseguir alguns zenys.\n Para voltar e continuar a jogar!!\n HaHaHa....");
	close;
}

// ------------------------------------------------------------------
cmd_in02,48,55,4	script	Scoursege#com	1_M_BARD,{
	mes("[Scoursege]\n Onde foi parar o cara que pegou meu dinheiro emprestado?\n Onde ele foi?\n Ele me disse que ia dobrar meu dinheiro!\n Oh! Meu Deus!");
	next;
	mes("[Scoursege]\n Será que fui trapaceado?\n Eu fui?\n Mesmo?!\n Meu dinheiro!!!\n Aaaahhhnnnn!");
	close;
}

// ------------------------------------------------------------------
cmd_in02,64,43,4	script	Roberto#com	4_M_SEAMAN,{
	mes("[Roberto]\n Outro otário...\n Consegui enrolar mais um!..\n HaHaHaHaHa......\n ...hmm...\n Quem é você?\n Sai! Sai!\n Vai embora!\n Nunca viu ninguém contando dinheiro antes?");
	close;
}

// ------------------------------------------------------------------
cmd_in02,89,72,4	script	Deniroz#com	4_M_ORIENT02,{
	mes("[Deniroz]\n Se essa bolinha cair agora...\n Eu vou ficar muito rico!!\n Tudo que é preciso fazer nesse jogo é fazer a bolinha entrar naquele buraco.\n Vamos lá!!\n É um buraco bem pequeno.");
	next;
	mes("[Deniroz]\n A maioria das pessoas desiste depois de algumas tentativas...\n Mas eu não!..\n Essa lata de cerveja na minha mão.\n É um imã!\n HaHaHaHaHa!");
	next;
	mes("[Deniroz]\n Eu vou ficar rico com meu plano secreto!!");
	close;
}

// ------------------------------------------------------------------
cmd_in02,178,92,4	script	Shalone#com	4W_F_01,{
	mes("[Shalone]\n Parece que o senhor perdeu de novo...\n Hmm... Se você quer um conselho...\n O senhor deveria parar quando sua sorte está tão ruim...");
	next;
	mes("[Shalone]\n Coitado...\n Ainda não ganhou nenhuma vez...");
	close;
}

// ------------------------------------------------------------------
cmd_in02,178,86,4	script	Stonae#com	4W_M_02,{
	mes("[Stonae]\n Oh Não!\n De novo?!\n Ai ai ai...\n Ai ai... Não posso desistir agora...\n Vou continuar até ganhar!\n Ugh!!");
	close;
}

// ------------------------------------------------------------------
cmd_in02,172,105,4	script	GJ#com	4_M_04,{
	mes("[G . J]\n Quanto mais eu penso...\n Melhor eu percebo que é mais fácil e certo ganhar dinheiro trabalhando e economizando, que jogando no cassino.\n É muito mais inteligente...\n Eu consigo ter mais dinheiro assim, mesmo depois de pagar os imposto e contas...");
	next;
	mes("[G . J]\n Só o trabalho duro faz o dinheiro ter valor mesmo.\n O dinheiro ganho com o trabalho é mais nobre que o dinheiro fácil...\n O dinheiro que um homem ganha com seu trabalho me parece mais limpo.\n Não acha?");
	next;
	mes("[G . J]\n Pense nisso...\n Se você não trabalha e passa o tempo jogando aqui com um amigo e ele ganha muito dinheiro...\n Fica rico!");
	next;
	mes("[G . J]\n Você não pediria a ele para lhe pagar um jantar...\n Ou até mesmo lhe emprestar uma parte do dinheiro?\n Como seu amigo ganhou o dinheiro fácil, esse dinheiro não parece ter tanto valor.");
	next;
	mes("[G . J]\n Mas se seu amigo ganhou esse dinheiro trabalhando duro...\n Você pediria a esse mesmo amigo para pagar o jantar ou pediria emprestado?!\n Você não ousaria...\n Já que ele ganhou o dinheiro com dificuldade.");
	close;
}

// ------------------------------------------------------------------
cmd_in02,174,126,4	script	Loyar#com	4_M_01,{
	mes("[Loyar]\n Esse Cassino de Comodo tem uma atmosfera tão agradável!\n Tudo simples e limpo...\n Tudo muito bem organizado!\n Realmente dá vontade de pssar o tempo aqui!!\n Vamos lá jogar!");
	next;
	switch(rand(1,3)) {
		case 1:
		mes("[Loyar]\n O quê?\n Estou vendo uma sujeira aqui?!\n Ah...(esfrega...).\n Não posso ver sujeira!\n *esfrega* *esfrega* *esfrega*\n Eu vou deixar isso tudo limpo!");
		next;
		mes("[Loyar]\n *esfrega* *esfrega* *esfrega* *esfrega*\n Ufa! Fiquei cansado...\n ...Ufffff... ...\n Agora está limpo!\n *varre* *varre*\n Perfeito!\n Agora sim as pessoas podem se divertir!");
		close;
		case 2:
		mes("[Loyar]\n Um lugar limpo é tudo quando se trata de diversão!\n Não importa se o jogo é interessante...\n Ninguém, vai querer ficar muito tempo em um lugar sujo e mal cheiroso...\n Ninguém iria se sentir bem!");
		next;
		mes("[Loyar]\n O Cassino de Comodo é o melhor!\n Nenhum no mundo se iguala...\n Toda essa beleza faz as pessoas se sentirem com sorte!\n Não é perfeito?");
		close;
		case 3:
		mes("[Loyar]\n Hmmm... péssima aposta...\n Ai! Você não é bom nisso...\n Hmmm... Que amador!..\n .........Hã?\n Não, sou apenas um morador de Comodo que ama esse cassino!");
		next;
		mes("[Loyar]\n ..........\n Alguma coisa contra?");
		close;
	}
}

// ------------------------------------------------------------------
cmd_in02,57,62,4	script	Moo#com	4_M_MANAGER,{
	mes("[Moo]\n Eu sou o gerente do Cassino de Comodo.\n Meu nome é ^3355FFMoo^000000.\n Aqui nós temos o melhor serviço para fazer nossos clientes se sentirem bem.\n Não podemos relaxar nunca!\n Aproveite sua visita...");
	next;
	mes("[Moo]\n Nesse momento estou trabalhando no andar VIP.\n Especiamente feito para visitantes especiais.\n Por favor, sinta-se a vontade e conheça nossas instalações.");
	next;
	mes("[Moo]\n No andar de baixo também...\n Toda a renda do cassino de Comodo é destinada ao bem-estar da comunidade da Cidade de Comodo.");
	close;
}
