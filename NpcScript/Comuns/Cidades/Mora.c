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
| - Nota: Npcs comuns na cidade Mora                                |
\*-----------------------------------------------------------------*/

mora,52,138,5	script	Mungmung#mor	4_M_RAFLE_GR,{
	mes("[Mungmung]\n Eu não sou o estalajadeiro!\n Por que as pessoas querem me pagar quando me vêem?");
	close;
}

// ------------------------------------------------------------------
mora,160,123,3	script	Nemnem#mor	4_M_RAFLE_OLD,{
	mes("[Nemnem]\n Minha dor está cada vez pior, já que a fenda apareceu em Bifrost.\n Você é responsável por isso, jovem?");
	next;
	switch(select("Claro que sou!", "Essa é uma acusação injusta!")) {
		case 1:
		mes("[Nemnem]\n Bravo!");
		emotion(e_awsm);
		close;
		case 2:
		mes("[Nemnem]\n Se não, não importa!");
		emotion(e_swt2, 1);
		close;
	}
}

// ------------------------------------------------------------------
mora,105,104,3	script	Fanfarrão#mor	4_M_DOGTRAVELER2,{
	mes("[Fanfarrão]\n Então, a situação estava no seu pior.");
	next;
	mes("[Raffles]\n Oh!");
	next;
	mes("[Fanfarrão]\n Entediado até a morte, comecei a chorar.\n Então adormeci, cansado de todos os choros.\n E quando acordei, fiquei ainda mais aborrecido do que antes!");
	next;
	mes("[Raffles]\n Oh, oh!\n Isso é terrível, tão terrível.\n Como isso poderia acontecer?!");
	next;
	mes("[Fanfarrão]\n Então, a situação ficou cada vez mais séria...\n Agora me dê mais algumas moedas.");
	emotion(e_swt2, 1);
	close;
}

// ------------------------------------------------------------------
mora,99,100,7	script	Decoy#mor	4_F_DOGTRAVELER,{
	mes("[A Decoy]\n Oh!\n Isso é tão inacreditável!\n Estou tão curioso, vamos dar-lhe algumas moedas!");
	close;
}

// ------------------------------------------------------------------
mora,98,104,5	script	Raffle Mudando#mor	4_M_RAFLE_GR,{
	mes("[Raffle Mudando]\n Isso é triste, muito triste!\n Não tenho certeza por que, mas deve estar triste porque todos os outros dizem.");
	close;
}

// ------------------------------------------------------------------
mora,102,107,5	script	Raffle Aliviado#mor	4_M_RAFLE_OLD,{
	mes("[Raffle Aliviado]\n Wow!\n Isso é emocionante.\n Ele acordou e som novamente!\n Bem, tenho certeza que ele vai da próxima vez!\n ...");
	next;
	mes("[Raffle Aliviado]\n Eh?");
	close;
}

// ------------------------------------------------------------------
mora,101,107,5	script	Raffle Animado#mor	4_F_RAFLE_PK,{
	mes("[Raffle Animado]\n Agora\n A história não é nada divertida.\n Agora!\n Mas é como se estivéssemos cantando em coro, é realmente divertido.\n Agora!");
	close;
}

// ------------------------------------------------------------------
mora,103,100,5	script	Raffle Imprecionado#mor	4_F_RAFLE_PK,{
	mes("[Raffle Imprecionado]\n Agora! Agora!");
	close;
}

// ------------------------------------------------------------------
mora,123,94,7	script	Visitante de Mora#mor1	4_F_DOGTRAVELER,{
	mes("[Visitante de Mora]\n Estou preso aqui por causa da fenda, que apareceu do nada.\n Ha......");
	close;
}

// ------------------------------------------------------------------
mora,155,72,3	script	Visitante de Mora#mor2	4_M_DOGTRAVELER,{
	mes("[Visitante de Mora]\n Não é essa uma vila alegre?\n Com Bifrost bloqueado assim, estou pensando em estabelecer aqui permanentemente.");
	close;
}

// ------------------------------------------------------------------
mora,184,169,5	script	Trabalhador#mor	4_M_RAFLE_GR,{
	mes("[Trabalhador]\n Ouvi dizer que alguém conseguiu sair do \"Floresta da Neblina\".\n Quem quer que seja, eu quero conhecer essa pessoa.");
	close;
}

// ------------------------------------------------------------------
mora,108,182,5	script	Trabalhador#mor2	4_M_RAFLE_GR,{
	mes("[Trabalhador]\n Mantenha-se afastado da \"Floresta da Neblina\".\n Nunca sonhe com espreitar por curiosidade.\n Muitos viajantes saíram depois de ir para lá.");
	close;
}

// ------------------------------------------------------------------
mora,179,155,1	script	Jovem Aprendiz#mor	4_M_RAFLE_GR,{
	mes("[Jovem Aprendiz]\n Vou sair da \"Floresta da Neblina\" e me tornar um herói!");
	next;
	mes("[Jovem Aprendiz]\n Ouvi dizer que alguém já fez isso.");
	next;
	mes("[Jovem Aprendiz]\n E se eu disser que sou alguém?");
	next;
	mes("[Jovem Aprendiz]\n Esqueça. É mais crível dizer que fiz isso.");
	next;
	mes("[Jovem Aprendiz]\n Bem, isso é verdade.");
	close;
}
mora,177,157,5	duplicate(Jovem Aprendiz#mor)	Trabalhador Indiferente#mor	4_F_RAFLE_PK

// ------------------------------------------------------------------
mora,122,97,6	script	Raffle Relaxando#mor	4_M_RAFLE_OLD,{
	mes("[Raffle Relaxando]\n O banho público no centro da aldeia é um símbolo da Vila de Mora.");
	next;
	mes("[Raffle Relaxando]\n Não é apenas uma poça simples.\n Tem um tremendo poder para curar feridas.");
	next;
	mes("[Raffle Relaxando]\n Tente andar no banho se quiser ver por si mesmo.\n Ele cicatrizará lenta e seguramente suas feridas.");
	close;
}

// ------------------------------------------------------------------
mora,174,171,0	script	Trabalhador do Armazém#mor	4_F_RAFLE_PK,{
	mes("[Trabalhador do Armazém]\n Eu quero escalar a escada, mas minhas pernas são muito curtas para fazer isso.");
	emotion(e_sob);
	next;
	mes("[Trabalhador do Armazém]\n Eu me pergunto quem trouxe aqui.");
	close;
}

// ------------------------------------------------------------------
mora,168,161,4	script	Lively#mor	4_M_DOGTRAVELER,{
	mes("[Lively]\n A pousada lá.\n Deveria ter sido meu.");
	next;
	mes("[Lively]\n A loja por aí.\n Deveria ter sido meu também.");
	next;
	mes("[Lively]\n O armazém aqui e todas as coisas nele.\n Todos esses deveriam ter sido meus.");
	next;
	mes("[Lively]\n Ahhh... Gostaria de ganhar dinheiro...");
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
mora,175,161,6	script	Kuorita#mor	4_F_RAFLE_PK,{
	mes("[Kuorita]\n Oh... este pato...");
	next;
	mes("[Kuorita]\n Seu beco vermelho esbelto, o rubor das bochechas e as asas, pronto para tirar qualquer momento...");
	emotion(e_shy);
	next;
	mes("[Kuorita]\n Eu quero ter isso mal...\n O que aconteceria se eu roubasse isso?");
	emotion(e_rice);
	close;
}

// ------------------------------------------------------------------
mora,113,185,4	script	Estudioso#mor	4_M_RAFLE_GR,{
	mes("^777777Você vê um Rafflesia perdida na leitura^000000.");
	next;
	switch(select("Veja o que ele está lendo", "Deixe-lo Sozinho")) {
		case 1:
		mes("^777777Curioso sobre o que ele está lendo, você se aproxima silenciosamente dele por trás.\n O Rafflesia está lendo em voz baixa^000000.");
		next;
		mes("[Estudioso]\n Seiren estava indo para o Eremes.\n Ele estava indo para emprestar os livros de referência de Eremes, mas ele também esperava ver sua linda irmã, Seiren.\n Seiren bateu na porta de Eremes com o coração batendo.");
		next;
		mes("[Estudioso]\n Toc! Toc! Toc!\n Com licença.\n Tem alguém aí?\n .........\n Ele não ouve nada.");
		next;
		mes("[Estudioso]\n Não há ninguém em casa?\n Ele bateu de novo, com medo de ter feito a viagem por nada.");
		next;
		mes("[Estudioso]\n Toc! Toc! Toc!\n Não resposta novamente.\n Não há ninguém para casa?\n Ele sabia que era grosseiro fazer isso.\n Mas ele decidiu entrar de qualquer maneira e esperar que Eremes voltasse para casa.");
		next;
		mes("[Estudioso]\n Seiren abriu a porta da frente com o coração palpitante.\n *........*\n A porta não estava trancada.\n Eremes parece estar ausente por um tempo.");
		next;
		mes("[Estudioso]\n Seiren entrou na casa hesitante.\n No momento em que entrou na casa, ele ouviu um som de água correndo.");
		next;
		mes("[Estudioso]\n Seiren de repente veio a seus sentidos e voltou para sair.\n Mas no momento!!");
		next;
		mes("[Estudioso]\n A porta do banheiro abriu, e com o vapor branco derramando veio um pé.");
		next;
		mes("[Estudioso]\n O coração de Seiren quase parou ao vê-lo.\n E um momento depois, alguém saiu do banheiro, com apenas uma toalha em volta do corpo dela.");
		next;
		mes("[Estudioso]\n Com o corpo ainda molhado do chuveiro...");
		next;
		emotion(e_omg);
		mes("[Estudioso]\n Quem é Você?\n Quanto tempo você estava aí?");
		next;
		mes("^777777O Rafflesia fechou o livro apressadamente.\n Você está curioso o que acontecerá depois.\n Mas você foi bastante grosseiro, então você simplesmente desistiu.^000000");
		close;
		case 2:
		mes("Você deixa o lugar quietamente para não incomodar.");
		close;
	}
}

// ------------------------------------------------------------------
mora,99,65,6	script	Rafflesia Banana#mor	4_M_RAFLE_GR,{
	mes("[Rafflesia Banana]\n Você quer uma banana?");
	next;
	switch(select("Sim, eu quero", "Não, obrigado")) {
		case 1:
		mes("[Rafflesia Banana]\n Pegue se você puder.\n Estava brincando não ia te dar uma gratuitamente.");
		emotion(e_ok);
		close;
		case 2:
		mes("[Rafflesia Banana]\n Bem, eu ia dar isso de graça, mas se você não quiser, está bem comigo.");
		emotion(e_pif);
		close;
	}
}

// ------------------------------------------------------------------
mora,30,128,5	script	Traveler Relaxando#mor	4_M_DOGTRAVELER2,{
	mes("[Traveler]\n O Hotel de Mora é famoso por seus móveis incomuns.\n Armarios de cogumelos e maçã...\n Não são tão inovadores?");
	next;
	select("... ... ...");
	mes("[Traveler]\n Desculpe... Talvez seja só minha opinião...");
	emotion(e_sry);
	close;
}

// ------------------------------------------------------------------
mora,130,96,4	script	Viajante Relaxando#mor2	4_M_DOGTRAVELER,{
	mes("[Viajante]\n As Rafflesias na Vila de Mora se parece tanto, é tão confuso.\n É como olhar quintuplos...");
	next;
	mes("[Viajante]\n Contudo! Se você olhar de perto, você encontrará que cada um deles tem personalidade.\n Para encontrar, é uma das coisas divertidas que você pode fazer na aldeia.");
	close;
}

// ------------------------------------------------------------------
mora,43,113,4	script	Rafflen Apreensivo#mor	4_M_RAFLE_OLD,{
	mes("[Rafflen Apreensivo]\n Ugghh... O que foi que estava no banho?... Arrrghh...\n Para atacar de repente assim... Cuidado...\n Seja lá o que for, é muito agressivo.");
	close;
}

// ------------------------------------------------------------------
-	script	#mora_traveler	FAKE_NPC,{
	mes("Você ... ousa jogar um jogo comigo?");
	emotion(e_ag, 0, "Viajante Chateado#mor");
	next;
	mes("O que...? Você tem provas?\n Você tem provas?!!");
	emotion(e_an, 0, "Viajante Nervoso#mor");
	next;
	mes("Olhe, pare, basta parar!\n Tenho medo de se transformar em uma grande luta...");
	emotion(e_swt2, 0, "Viajante Apartador#mor");
	next;
	mes("Ah! Por que não pedimos a essa pessoa lá ...?");
	next;
	mes("Ai sim! Essa é uma ótima ideia.\n Bem. Olá.\n Você está lá, viajante!");
	emotion(e_ic, 0, "Viajante Chateado#mor");
	next;
	mes("Eles parecem estar te chamando.");
	next;
	if(select("Veja o que é o assunto", "Não tenho nada a ver com isso") == 2) {
		mes("Você foi no seu caminho deixando os viajantes atrás de você.");
		close;
	}
	mes("[" + strcharinfo(PC_NAME) + "]\n O que está acontecendo aqui?");
	emotion(e_what, 1);
	next;
	mes("Eu vou te dizer o que.\n A mãe de Rose tinha 10 filhos.\n O filho mais velho é chamado Roseone, o segundo Rosetwo, o terceiro Rosethree, a nona Rosenina, você consegue como funciona, certo?");
	emotion(e_ag, 0, "Viajante Chateado#mor");
	next;
	mes("Certo, é assim que funciona.\n Então perguntei para o que o mais jovem seria chamado, e quando eu lhe contei a resposta, ele ficou aborrecido e começou a me amaldiçoar.");
	emotion(e_an,0,"Viajante Nervoso#mor");
	next;
	mes("Você ... seu bastardo!\n Ei, o que você acha que a resposta é a questão?");
	emotion(e_ag, 0, "Viajante Chateado#mo");
	next;
	switch(select("Roseten", "Rose", "Como eu saberia isso?")) {
		case 1:
		mes("["+strcharinfo(PC_NAME)+"]\n A resposta à pergunta é Roseten.\n Por que você está lutando por um assunto tão trivial?");
		next;
		mes("Vejo? Mesmo este viajante diz que Roseten é a resposta.\n Como você ousa tentar me fazer truques?");
		emotion(e_gg,0, "Viajante Chateado#mor");
		next;
		mes "Você idiota ... você não tem a menor idéia!";
		emotion(e_an, 0, "Viajante Nervoso#mor");
		break;
		case 2:
		mes("["+strcharinfo(PC_NAME)+"]\n A resposta à pergunta é Rose.\n Você disse que a mãe de Rose tinha 10 filhos.\n Então, mesmo que os nomes dos outros filhos sejam Roseone, Rosetwo...\n Rosenine, a mais jovem deve ser Rose, ou não seria chamada de mãe de Rose.");
		next;
		mes "É exatamente o que quero dizer!";
		mes "Eu não posso ficar com ele.";
		mes "Acho que vivemos em dois mundos diferentes.";
		emotion(e_an, 0, "Viajante Nervoso#mor");
		next;
		mes "Acho que vivemos em dois mundos diferentes....";
		emotion(e_gg,0, "Viajante Chateado#mor");
		break;
		case 3:
		mes("["+strcharinfo(PC_NAME)+"]\n Eu não faço ideia.\n Tente ordená-los.");
		next;
		mes("Você é bastardo bom para nada, está tentando deixar essa bagunça para mim?");
		emotion(e_an, 0, "Viajante Apartador#mor");
		break;
	}
	next;
	mes("^777777Você sente um impacto repentino na parte de trás da sua cabeça.\n Sua visão está embaçada.^000000");
	specialeffect(EF_HIT1, AREA, playerattached());
	sc_start(SC_BLIND, 20000, 0);
	close2;
	warp("mora", 31, 132);
	end;
}

mora,140,72,4	duplicate(#mora_traveler)	Viajante Chateado#mor	4_M_DOGTRAVELER
mora,138,72,6	duplicate(#mora_traveler)	Viajante Nervoso#mor	4_M_DOGTRAVELER
mora,139,73,4	duplicate(#mora_traveler)	Viajante Apartador#mor	4_M_DOGTRAVELER

// ------------------------------------------------------------------
mora,132,185,5	script	Habitante de Mora#mor	4_F_RAFLE_PK,{
	mes("[Habitante de Mora]\n Z....Z....Z.....");
	close;
}

mora,133,185,5	duplicate(Habitante de Mora#mor)	Habitante de Mora#mor2	4_M_RAFLE_VI
mora,134,185,3	duplicate(Habitante de Mora#mor)	Habitante de Mora#mor3	4_F_RAFLE_VI
mora,132,184,5	duplicate(Habitante de Mora#mor)	Habitante de Mora#mor4	4_M_RAFLE_OR
mora,133,184,1	duplicate(Habitante de Mora#mor)	Habitante de Mora#mor5	G_RAFFLESIA
mora,134,184,1	duplicate(Habitante de Mora#mor)	Habitante de Mora#mor6	4_M_RAFLE_GR
mora,132,183,7	duplicate(Habitante de Mora#mor)	Habitante de Mora#mor7	4_M_RAFLE_VI
mora,133,183,7	duplicate(Habitante de Mora#mor)	Habitante de Mora#mor8	4_F_RAFLE_PK
mora,134,183,1	duplicate(Habitante de Mora#mor)	Habitante de Mora#mor9	4_M_RAFLE_OR
