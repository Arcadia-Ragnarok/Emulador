/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na cidade Comodo                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
comodo,171,137,1	script	Haith#com::cmdla	4_F_03,{
	mes "[La Ed]";
	mes "Deve haver um tesouro escondido naquele lugar!";
	next;
	mes "[Haith]";
	mes "Se nós acharmos ele, as pessoas não pensaram mais que somos perdedores!!";
	next;
	mes "[La Ed]";
	mes "Finalmente!";
	next;
	mes "[Haith]";
	mes "Vamos encontrar o tesouro!";
	next;
	mes "[La Ed]";
	mes "Vamos fazer isso!!";
	emotion(e_gg);
	next;
	mes "[Haith]";
	mes "................";
	next;
	mes "[La Ed]";
	mes "A propósito...";
	mes "Você acha que ele iria nos falar facilmente sobre o grande tesouro?";
	emotion(e_hmm);
	emotion(e_hmm, 0, "La Ed#com");
	next;
	select("Hm? Que tesouro?");
	mes "[La Ed]";
	mes "Quê...?!";
	mes "Quando você começou a nos escutar?!";
	next;
	mes "[Haith]";
	mes "Hã... parece que você que saber mais sobre o tesouro.";
	mes "Bem, essa informação não sairá barata...";
	emotion(e_gg);
	next;
	mes "[La Ed]";
	mes "Além disso, precisamos de um pouco, uma coisa no caso de...";
	mes "*tosse!*";
	mes "^555555Nós não acharmos absolutamente nada.^000000";
	next;
	mes "[La Ed, Haith]";
	mes "Se você nos pagar 1,000 Zenys, nós falamos para você!";
	emotion(e_gg);
	emotion(e_gg, 0, "La Ed#um");
	next;
	if (select("Ouvir Mais", "Sair") == 1) {
		mes "[Haith]";
		mes "Hahahaha!";
		mes "Você é o cara!";
		next;
		mes "[La Ed]";
		mes "Ok, não muito tempo atrás, um famoso aventureiro chamado Niels voltou de uma de suas viagens.";
		next;
		mes "[Haith]";
		mes "*Sussurros*";
		mes "^555555Ele trouxe consigo uma caixa enorme.^000000";
		next;
		mes "[La Ed]";
		mes "Além disso, ele voltou no meio da noite sem ter falado nada a ninguém.";
		mes "Então, evidentemente que ele tem algum segredo, não acha?";
		next;
		mes "[Haith]";
		mes "O que poderia estar dentro da caixa?";
		mes "Só pode ser um tesouro!!";
		next;
		mes "[La Ed]";
		mes "Então!";
		mes "Nós decidimos ir em uma jornada atrás do nosso próprio tesouro!!";
		next;
		mes "[Haith]";
		mes "O problema é que nós não temos certeza de que o Niels vá nos dizer onde ele encontrou o tesouro...";
		emotion(e_hmm);
		next;
		mes "[La Ed]";
		mes "Porque o Niels sempre nos trata como se nós fomossemos estúpidos!!";
		mes "Bah!!";
		next;
		select("Onde está o Niels?");
		mes "[La Ed]";
		mes "Ele está hospedado na parte norte desta vila.";
		next;
		mes "[Haith]";
		mes "Nós vamos lhe dar boas informações, desde que nos pague!";
		next;
		mes "[La Ed, Haith]";
		mes "Boa sorte!";
		close;
	}
	emotion(e_hmm);
	close;
}
comodo,170,137,7	duplicate(cmdla)	La Ed#com	4_M_02

// ------------------------------------------------------------------
comodo,180,153,4	script	Sonotora#com	4_F_01,{
	mes "[Athena Sonotora]";
	mes "Dizem que uma famosa escola de dança aqui em Comodo vai abrir em breve.";
	next;
	mes "[Athena Sonotora]";
	mes "Aah...";
	mes "Para ser como uma prima donna no centro das atenções!";
	next;
	mes "[Athena Sonotora]";
	mes "Eu quero me inscrever também, mais os requisitos são muito específicos.";
	mes "Eu me pergunto se devo tentar mesmo assim...";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
cmd_in01,175,120,3	script	Iriya#com	1_F_04,{
	mes "[Iriya]";
	mes "O Sr. Niels está na mesa na esquina.";
	mes "Ele tem muitas notícias sobre o mundo.";
	next;
	mes "[Iriya]";
	mes "Não tenho certeza onde ele esteve desta vez.";
	mes "Ele só da risadas e diz:";
	mes "'Eu não acho que estou apto para este trabalho docente.'";
	next;
	mes "[Iriya]";
	mes "Entretanto, manter as pessoas visitando o Sr. Niels...";
	mes "Eu não poder ajudar, mas pergunto...";
	mes "Onde ele tem ido?";
	close;
}

// ------------------------------------------------------------------
cmd_in01,164,115,1	script	Niels#com	4_M_JOB_BLACKSMITH,{
	mes "[Niels]";
	mes "Hmm?";
	mes "O que você está procurando?";
	mes "Ah! Você deve ter ouvido os rumores de que eu achei algum tipo de tesouro.";
	mes "Sim, isto é compreensível...";
	next;
	mes "[Niels]";
	mes "Bem, estes rumores de que eu tropeço em algum tesouro maravilhoso é apenas o resultado de imaginações férteis.";
	mes "Tudo o que tenho encontrado são coisas para acrescentar na minha coleção.";
	next;
	mes "[Niels]";
	mes "Mas... desde que eu tenha provado que 'isto' realmente existe por ver com meus prãpios olhos";
	mes "Para mim, o que eu obtive foi um valioso tesouro.";
	next;
	mes "[Niels]";
	mes "Esta aldeia de Comodo!";
	mes "Você não acha que as cavernas são muito pequenas e estreista por alguma razão?";
	next;
	mes "[Niels]";
	mes "Então, eu estava pensando nisso...";
	mes "E eu cheguei a conclusão de que deve haver alguma coisa escondida dentro da caverna...";
	next;
	mes "[Niels]";
	mes "E então!";
	mes "Eu finalmente encontrei.";
	mes "A passagem para 'o lugar' que ninguém jamais encontrou!";
	next;
	mes "[Niels]";
	mes "................";
	next;
	mes "[Niels]";
	mes "................";
	mes "Hm?";
	next;
	mes "[Niels]";
	mes "Eu estava esperando um espetacular e dramático efeito sonoro para a minha declaração!";
	mes "Eh, oh bem...";
	emotion(e_hmm);
	next;
	mes "[Niels]";
	mes "Bem, no espírito da descobrta, nunca pense em me perguntar sobre direções para 'o lugar' ou sobre o que tem 'no lugar'.";
	mes "Eu não quero estragar a surpresa.";
	next;
	mes "[Niels]";
	mes "Se você é um verdadeiro aventureiro.";
	mes "Eu espero que você grite com toda a força de seus pulmões...";
	next;
	mes "[Niels]";
	mes "'Ahhhh!";
	mes "Eu preciso saber o que é isto!!'";
	mes "Chute a porta aberta e corra como se estivesse fugindo do inferno para encontrar o lugar por conta própria!!";
	next;
	mes "[Niels]";
	mes "Agora!";
	mes "Rápido saia e busque por esse lugar!";
	mes "Será este lugar um mundo totalmente novo ou uma armadilha para o inferno?!";
	mes "Vá adiante, satisfaça seu destino, aventureiro!";
	close;
}

// ------------------------------------------------------------------
cmd_in02,73,81,4	script	Martine#com	1_M_02,{
	mes "[Martine]";
	mes "Jogatina?!";
	mes "Não!";
	mes "Não é isso!";
	mes "Não julgue o Cassino de Comodo como outro qualquer.";
	mes "Aqui existem os melhores jogos do mundo.";
	mes "São jogos de alto nível, e não simples jogos de azar percebe?!";
	next;
	mes "[Martine]";
	mes "Por que você está me olhando desse jeito?!";
	mes "Não me olhe assim!";
	mes "Eu não me importo com o que você acha...";
	mes "Eu perdi todo o meu dinheiro nesse cassino, mas eu não me importo!";
	next;
	mes "[Martine]";
	mes "Eu preciso ir as cavernas de Comodo...";
	mes "Matar alguns monstros e conseguir alguns zenys.";
	mes "Para voltar e continuar a jogar!!";
	mes "HaHaHa....";
	close;
}

// ------------------------------------------------------------------
cmd_in02,48,55,4	script	Scoursege#com	1_M_BARD,{
	mes "[Scoursege]";
	mes "Onde foi parar o cara que pegou meu dinheiro emprestado?";
	mes "Onde ele foi?";
	mes "Ele me disse que ia dobrar meu dinheiro!";
	mes "Oh! Meu Deus!";
	next;
	mes "[Scoursege]";
	mes "Será que fui trapaceado?";
	mes "Eu fui?";
	mes "Mesmo?!";
	mes "Meu dinheiro!!!";
	mes "Aaaahhhnnnn!";
	close;
}

// ------------------------------------------------------------------
cmd_in02,64,43,4	script	Roberto#com	4_M_SEAMAN,{
	mes "[Roberto]";
	mes "Outro otário...";
	mes "Consegui enrolar mais um!..";
	mes "HaHaHaHaHa......";
	mes "...hmm...";
	mes "Quem é você?";
	mes "Sai! Sai!";
	mes "Vai embora!";
	mes "Nunca viu ninguém contando dinheiro antes?";
	close;
}

// ------------------------------------------------------------------
cmd_in02,89,72,4	script	Deniroz#com	4_M_ORIENT02,{
	mes "[Deniroz]";
	mes "Se essa bolinha cair agora...";
	mes "Eu vou ficar muito rico!!";
	mes "Tudo que é preciso fazer nesse jogo é fazer a bolinha entrar naquele buraco.";
	mes "Vamos lá!!";
	mes "É um buraco bem pequeno.";
	next;
	mes "[Deniroz]";
	mes "A maioria das pessoas desiste depois de algumas tentativas...";
	mes "Mas eu não!..";
	mes "Essa lata de cerveja na minha mão.";
	mes "É um imã!";
	mes "HaHaHaHaHa!";
	next;
	mes "[Deniroz]";
	mes "Eu vou ficar rico com meu plano secreto!!";
	close;
}

// ------------------------------------------------------------------
cmd_in02,178,92,4	script	Shalone#com	4W_F_01,{
	mes "[Shalone]";
	mes "Parece que o senhor perdeu de novo...";
	mes "Hmm... Se você quer um conselho...";
	mes "O senhor deveria parar quando sua sorte está tão ruim...";
	next;
	mes "[Shalone]";
	mes "Coitado...";
	mes "Ainda não ganhou nenhuma vez...";
	close;
}

// ------------------------------------------------------------------
cmd_in02,178,86,4	script	Stonae#com	4W_M_02,{
	mes "[Stonae]";
	mes "Oh Não!";
	mes "De novo?!";
	mes "Ai ai ai...";
	mes "Ai ai... Não posso desistir agora...";
	mes "Vou continuar até ganhar!";
	mes "Ugh!!";
	close;
}

// ------------------------------------------------------------------
cmd_in02,172,105,4	script	GJ#com	4_M_04,{
	mes "[G . J]";
	mes "Quanto mais eu penso...";
	mes "Melhor eu percebo que é mais fácil e certo ganhar dinheiro trabalhando e economizando, que jogando no cassino.";
	mes "É muito mais inteligente...";
	mes "Eu consigo ter mais dinheiro assim, mesmo depois de pagar os imposto e contas...";
	next;
	mes "[G . J]";
	mes "Só o trabalho duro faz o dinheiro ter valor mesmo.";
	mes "O dinheiro ganho com o trabalho é mais nobre que o dinheiro fácil...";
	mes "O dinheiro que um homem ganha com seu trabalho me parece mais limpo.";
	mes "Não acha?";
	next;
	mes "[G . J]";
	mes "Pense nisso...";
	mes "Se você não trabalha e passa o tempo jogando aqui com um amigo e ele ganha muito dinheiro...";
	mes "Fica rico!";
	next;
	mes "[G . J]";
	mes "Você não pediria a ele para lhe pagar um jantar...";
	mes "Ou até mesmo lhe emprestar uma parte do dinheiro?";
	mes "Como seu amigo ganhou o dinheiro fácil, esse dinheiro não parece ter tanto valor.";
	next;
	mes "[G . J]";
	mes "Mas se seu amigo ganhou esse dinheiro trabalhando duro...";
	mes "Você pediria a esse mesmo amigo para pagar o jantar ou pediria emprestado?!";
	mes "Você não ousaria...";
	mes "Já que ele ganhou o dinheiro com dificuldade.";
	close;
}

// ------------------------------------------------------------------
cmd_in02,174,126,4	script	Loyar#com	4_M_01,{
	mes "[Loyar]";
	mes "Esse Cassino de Comodo tem uma atmosfera tão agradável!";
	mes "Tudo simples e limpo...";
	mes "Tudo muito bem organizado!";
	mes "Realmente dá vontade de pssar o tempo aqui!!";
	mes "Vamos lá jogar!";
	next;
	switch(rand(1,3)) {
		case 1:
		mes "[Loyar]";
		mes "O quê?";
		mes "Estou vendo uma sujeira aqui?!";
		mes "Ah...(esfrega...).";
		mes "Não posso ver sujeira!";
		mes "*esfrega* *esfrega* *esfrega*";
		mes "Eu vou deixar isso tudo limpo!";
		next;
		mes "[Loyar]";
		mes "*esfrega* *esfrega* *esfrega* *esfrega*";
		mes "Ufa! Fiquei cansado...";
		mes "...Ufffff... ...";
		mes "Agora está limpo!";
		mes "*varre* *varre*";
		mes "Perfeito!";
		mes "Agora sim as pessoas podem se divertir!";
		close;
		case 2:
		mes "[Loyar]";
		mes "Um lugar limpo é tudo quando se trata de diversão!";
		mes "Não importa se o jogo é interessante...";
		mes "Ninguém, vai querer ficar muito tempo em um lugar sujo e mal cheiroso...";
		mes "Ninguém iria se sentir bem!";
		next;
		mes "[Loyar]";
		mes "O Cassino de Comodo é o melhor!";
		mes "Nenhum no mundo se iguala...";
		mes "Toda essa beleza faz as pessoas se sentirem com sorte!";
		mes "Não é perfeito?";
		close;
		case 3:
		mes "[Loyar]";
		mes "Hmmm... péssima aposta...";
		mes "Ai! Você não é bom nisso...";
		mes "Hmmm... Que amador!..";
		mes ".........Hã?";
		mes "Não, sou apenas um morador de Comodo que ama esse cassino!";
		next;
		mes "[Loyar]";
		mes "..........";
		mes "Alguma coisa contra?";
		close;
	}
}

// ------------------------------------------------------------------
cmd_in02,57,62,4	script	Moo#com	4_M_MANAGER,{
	mes "[Moo]";
	mes "Eu sou o gerente do Cassino de Comodo.";
	mes "Meu nome é ^3355FFMoo^000000.";
	mes "Aqui nós temos o melhor serviço para fazer nossos clientes se sentirem bem.";
	mes "Não podemos relaxar nunca!";
	mes "Aproveite sua visita...";
	next;
	mes "[Moo]";
	mes "Nesse momento estou trabalhando no andar VIP.";
	mes "Especiamente feito para visitantes especiais.";
	mes "Por favor, sinta-se a vontade e conheça nossas instalações.";
	next;
	mes "[Moo]";
	mes "No andar de baixo também...";
	mes "Toda a renda do cassino de Comodo é destinada ao bem-estar da comunidade da Cidade de Comodo.";
	close;
}

// ------------------------------------------------------------------
cmd_in02,94,208,5	script	Investigador#com	4_M_ROGUE,{
	if ((diamond_edq == 22) || (diamond_edq == 23)) {
		if (BaseJob == Job_Rogue) {
			mes "[Investigador]";
			mes "Ei, amigo. Você faz parte da guilda?";
			mes "Legal.";
			mes "Se mandaram você para ajudar, bem, não há nada para fazer aqui.";
			mes "Este lugar está praticamente limpo.";
			close;
		} else {
			mes "[Investigador]";
			mes "O que você quer?";
			mes "Ah, sua guilda deve ter mandado você para ajudar.";
			mes "Investigamos....";
			mes "Não encontramos nada.";
			mes "A Gangue Z deu o fora.";
			next;
			mes "[Investigador]";
			mes "Fique à vontade para olhar por aí, mas se quer saber, acho uma perda de tempo.";
			close;
		}
	} else {
		mes "[Investigador]";
		mes "Puxa, estou preso aqui até receber novas ordens da guilda.";
		mes "Será que...";
		mes "Eles não se esqueceram de mim, não é?";
		close;
	}
}