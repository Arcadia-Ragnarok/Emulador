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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Mora                                |
\*-----------------------------------------------------------------*/

mora,52,138,5	script	Mungmung#mor	4_M_RAFLE_GR,{
	mes "[Mungmung]";
	mes "Eu não sou o estalajadeiro!";
	mes "Por que as pessoas querem me pagar quando me vêem??";
	close;
}

// ------------------------------------------------------------------
mora,160,123,3	script	Nemnem#mor	4_M_RAFLE_OLD,{
	mes "[Nemnem]";
	mes "Minha dor está cada vez pior, já que a fenda apareceu em Bifrost.";
	mes "Você é responsável por isso, jovem?";
	next;
	switch(select("Claro que sou!","Essa é uma acusação injusta!")) {
		case 1:
		mes "[Nemnem]";
		mes "Bravo!";
		emotion (e_awsm);
		close;
		case 2:
		mes "[Nemnem]";
		mes "Se não, não importa!";
		emotion (e_swt2,1);
		close;
	}
}

// ------------------------------------------------------------------
mora,105,104,3	script	Fanfarrão#mor	4_M_DOGTRAVELER2,{
	mes "[Fanfarrão]";
	mes "Então, a situação estava no seu pior.";
	next;
	mes "[Raffles]";
	mes "Oh!";
	next;
	mes "[Fanfarrão]";
	mes "Entediado até a morte, comecei a chorar.";
	mes "Então adormeci, cansado de todos os choros.";
	mes "E quando acordei, fiquei ainda mais aborrecido do que antes!";
	next;
	mes "[Raffles]";
	mes "Oh, oh!";
	mes "Isso é terrível, tão terrível.";
	mes "Como isso poderia acontecer?!";
	next;
	mes "[Fanfarrão]";
	mes "Então, a situação ficou cada vez mais séria...";
	mes "Agora me dê mais algumas moedas.";
	emotion (e_swt2,1);
	close;
}

// ------------------------------------------------------------------
mora,105,100,1	script	Rangrang#mor	4_F_RAFLE_PK,{
	mes "[Rangrang]";
	mes "Nunca ouvi uma história tão chata e triste.";
	mes "Acho que vou chorar!";
	close;
}

// ------------------------------------------------------------------
mora,99,100,7	script	Decoy#mor	4_F_DOGTRAVELER,{
	mes "[A Decoy]";
	mes "Oh!";
	mes "Isso é tão inacreditável!";
	mes "Estou tão curioso, vamos dar-lhe algumas moedas!";
	close;
}

// ------------------------------------------------------------------
mora,98,104,5	script	Raffle Mudando#mor	4_M_RAFLE_GR,{
	mes "[Raffle Mudando]";
	mes "Isso é triste, muito triste!";
	mes "Não tenho certeza por que, mas deve estar triste porque todos os outros dizem.";
	close;
}

// ------------------------------------------------------------------
mora,102,107,5	script	Raffle Aliviado#mor	4_M_RAFLE_OLD,{
	mes "[Raffle Aliviado]";
	mes "Wow!";
	mes "Isso é emocionante.";
	mes "Ele acordou e som novamente!";
	mes "Bem, tenho certeza que ele vai da próxima vez!";
	mes "...";
	next;
	mes "[Raffle Aliviado]";
	mes "Eh?";
	close;
}

// ------------------------------------------------------------------
mora,101,107,5	script	Raffle Animado#mor	4_F_RAFLE_PK,{
	mes "[Raffle Animado]";
	mes "Agora";
	mes "A história não é nada divertida.";
	mes "Agora!";
	mes "Mas é como se estivéssemos cantando em coro, é realmente divertido.";
	mes "Agora!";
	close;
}

// ------------------------------------------------------------------
mora,103,100,5	script	Raffle Imprecionado#mor	4_F_RAFLE_PK,{
	mes "[Raffle Imprecionado]";
	mes "Agora! Agora!";
	close;
}

// ------------------------------------------------------------------
mora,123,94,7	script	Visitante de Mora#mor1	4_F_DOGTRAVELER,{
	mes "[Visitante de Mora]";
	mes "Estou preso aqui por causa da fenda, que apareceu do nada.";
	mes "Ha......";
	close;
}

// ------------------------------------------------------------------
mora,155,72,3	script	Visitante de Mora#mor2	4_M_DOGTRAVELER,{
	mes "[Visitante de Mora]";
	mes "Não é essa uma vila alegre?";
	mes "Com Bifrost bloqueado assim, estou pensando em estabelecer aqui permanentemente.";
	close;
}

// ------------------------------------------------------------------
mora,184,169,5	script	Trabalhador#mor	4_M_RAFLE_GR,{
	mes "[Trabalhador]";
	mes "Ouvi dizer que alguém conseguiu sair do \"Floresta da Neblina\".";
	mes "Quem quer que seja, eu quero conhecer essa pessoa.";
	close;
}

// ------------------------------------------------------------------
mora,108,182,5	script	Trabalhador#mor2	4_M_RAFLE_GR,{
	mes "[Trabalhador]";
	mes "Mantenha-se afastado da \"Floresta da Neblina\".";
	mes "Nunca sonhe com espreitar por curiosidade.";
	mes "Muitos viajantes saíram depois de ir para lá.";
	close;
}

// ------------------------------------------------------------------
mora,179,155,1	script	Jovem Aprendiz#mor	4_M_RAFLE_GR,{
	mes "[Jovem Aprendiz]";
	mes "Vou sair da \"Floresta da Neblina\" e me tornar um herói!";
	next;
	mes "[Trabalhador Indiferente]";
	mes "Ouvi dizer que alguém já fez isso.";
	next;
	mes "[Novice Worker]";
	mes "E se eu disser que sou alguém?";
	next;
	mes "[Trabalhador Indiferente]";
	mes "Esqueça. É mais crível dizer que fiz isso.";
	next;
	mes "[Novice Worker]";
	mes "Bem, isso é verdade.";
	close;
}
mora,177,157,5	duplicate(Jovem Aprendiz#mor)	Trabalhador Indiferente#mor	4_F_RAFLE_PK

// ------------------------------------------------------------------
mora,122,97,6	script	Raffle Relaxando#mor	4_M_RAFLE_OLD,{
	mes "[Raffle Relaxando]";
	mes "O banho público no centro da aldeia é um símbolo da Vila de Mora.";
	next;
	mes "[Raffle Relaxando]";
	mes "Não é apenas uma poça simples.";
	mes "Tem um tremendo poder para curar feridas.";
	next;
	mes "[Raffle Relaxando]";
	mes "Tente andar no banho se quiser ver por si mesmo.";
	mes "Ele cicatrizará lenta e seguramente suas feridas.";
	close;
}

// ------------------------------------------------------------------
mora,174,171,0	script	Trabalhador do Armazém#mor	4_F_RAFLE_PK,{
	mes "[Trabalhador do Armazém]";
	mes "Eu quero escalar a escada, mas minhas pernas são muito curtas para fazer isso.";
	emotion (e_sob);
	next;
	mes "[Trabalhador do Armazém]";
	mes "Eu me pergunto quem trouxe aqui.";
	close;
}

// ------------------------------------------------------------------
mora,168,161,4	script	Trabalhador do Armazém#mor2	4_M_DOGTRAVELER,{
	mes "[Lively]";
	mes "A pousada lá.";
	mes "Deveria ter sido meu.";
	next;
	mes "[Lively]";
	mes "A loja por aí.";
	mes "Deveria ter sido meu também.";
	next;
	mes "[Lively]";
	mes "O armazém aqui e todas as coisas nele.";
	mes "Todos esses deveriam ter sido meus.";
	next;
	mes "[Lively]";
	mes "Ahhh... Gostaria de ganhar dinheiro...";
	emotion (e_sob);
	close;
}

// ------------------------------------------------------------------
mora,175,161,6	script	Trabalhador do Armazém#mor3	4_F_RAFLE_PK,{
	mes "[Kuorita]";
	mes "Oh... este pato...";
	next;
	mes "[Kuorita]";
	mes "Seu beco vermelho esbelto, o rubor das bochechas e as asas, pronto para tirar qualquer momento...";
	emotion (e_shy);
	next;
	mes "[Kuorita]";
	mes "Eu quero ter isso mal...";
	mes "O que aconteceria se eu roubasse isso?";
	emotion (e_rice);
	close;
}

// ------------------------------------------------------------------
mora,113,185,4	script	Estudioso#mor	4_M_RAFLE_GR,{
	mes "^777777Você vê um Rafflesia perdida na leitura^000000.";
	next;
	switch(select("Veja o que ele está lendo.","Deixe-lo Sozinho.")) {
		case 1:
		mes "^777777Curioso sobre o que ele está lendo, você se aproxima silenciosamente dele por trás.";
		mes "O Rafflesia está lendo em voz baixa^000000.";
		next;
		mes "[Estudioso]";
		mes "Seiren estava indo para o Eremes.";
		mes "Ele estava indo para emprestar os livros de referência de Eremes, mas ele também esperava ver sua linda irmã, Seiren.";
		mes "Seiren bateu na porta de Eremes com o coração batendo.";
		next;
		mes "[Estudioso]";
		mes "Toc! Toc! Toc!";
		mes "Com licença. Tem alguém aí?";
		mes "... ... ...";
		mes "Ele não ouve nada.";
		next;
		mes "[Estudioso]";
		mes "Não há ninguém em casa?";
		mes "Ele bateu de novo, com medo de ter feito a viagem por nada.";
		next;
		mes "[Estudioso]";
		mes "Toc! Toc! Toc!";
		mes "Não resposta novamente.";
		mes "Não há ninguém para casa?";
		mes "Ele sabia que era grosseiro fazer isso.";
		mes "Mas ele decidiu entrar de qualquer maneira e esperar que Eremes voltasse para casa.";
		next;
		mes "[Estudioso]";
		mes "Seiren abriu a porta da frente com o coração palpitante.";
		mes "*........*";
		mes "A porta não estava trancada.";
		mes "Eremes parece estar ausente por um tempo.";
		next;
		mes "[Estudioso]";
		mes "Seiren entrou na casa hesitante.";
		mes "No momento em que entrou na casa, ele ouviu um som de água correndo.";
		next;
		mes "[Estudioso]";
		mes "Seiren de repente veio a seus sentidos e voltou para sair.";
		mes "Mas no momento!!";
		next;
		mes "[Estudioso]";
		mes "A porta do banheiro abriu, e com o vapor branco derramando veio um pé.";
		next;
		mes "[Estudioso]";
		mes "O coração de Seiren quase parou ao vê-lo.";
		mes "E um momento depois, alguém saiu do banheiro, com apenas uma toalha em volta do corpo dela.";
		next;
		mes "[Estudioso]";
		mes "Com o corpo ainda molhado do chuveiro...";
		next;
		emotion (e_omg);
		mes "[Estudioso]";
		mes "Quem é Você?";
		mes "Quanto tempo você estava aí?";
		next;
		mes "^777777O Rafflesia fechou o livro apressadamente.";
		mes "Você está curioso o que acontecerá depois.";
		mes "Mas você foi bastante grosseiro, então você simplesmente desistiu.^000000";
		close;
		case 2:
		mes "Você deixa o lugar quietamente para não incomodar.";
		close;
	}
}

// ------------------------------------------------------------------
mora,99,65,6	script	Rafflesia Banana#mor	4_M_RAFLE_GR,{
	mes "[Rafflesia Banana]";
	mes "Você quer uma banana?";
	next;
	switch(select("Sim, eu quero","Não, obrigado")) {
		case 1:
		mes "[Rafflesia Banana]";
		mes "Pegue se você puder.";
		mes "Estava brincando não ia te dar uma gratuitamente.";
		emotion (e_ok);
		close;
		case 2:
		mes "[Rafflesia Banana]";
		mes "Bem, eu ia dar isso de graça, mas se você não quiser, está bem comigo.";
		emotion (e_pif);
		close;
	}
}

// ------------------------------------------------------------------
mora,30,128,5	script	Traveler Relaxando#mor	4_M_DOGTRAVELER2,{
	mes "[Traveler]";
	mes "O Hotel de Mora é famoso por seus móveis incomuns.";
	mes "Armarios de cogumelos e maçã...";
	mes "Não são tão inovadores?";
	next;
	select("... ... ...");
	mes "[Traveler]";
	mes "Desculpe... Talvez seja só minha opinião...";
	emotion (e_sry);
	close;
}

// ------------------------------------------------------------------
mora,130,96,4	script	Traveler Relaxando#mor2	4_M_DOGTRAVELER,{
	mes "[Traveler]";
	mes "As Rafflesias na Vila de Mora se parece tanto, é tão confuso.";
	mes "É como olhar quintuplos...";
	next;
	mes "[Traveler]";
	mes "Contudo! Se você olhar de perto, você encontrará que cada um deles tem personalidade.";
	mes "Para encontrar, é uma das coisas divertidas que você pode fazer na aldeia.";
	close;
}

// ------------------------------------------------------------------
mora,43,113,4	script	Rafflesia Ferido#mor	4_M_RAFLE_OLD,{
	mes "[Wounded Raffle]";
	mes "Ugghh... O que foi que estava no banho?... Arrrghh...";
	mes "Para atacar de repente assim... Cuidado...";
	mes "Seja lá o que for, é muito agressivo.";
	close;
}

// ------------------------------------------------------------------
-	script	#mora_traveler	FAKE_NPC,{
	mes "Você ... ousa jogar um jogo comigo?";
	emotion (e_ag,0,"Traveler#mor");
	next;
	mes "O que...? Você tem provas?";
	mes "Você tem provas?!!";
	emotion (e_an,0,"Traveler#mor2");
	next;
	mes "Olhe, pare, basta parar!";
	mes "Tenho medo de se transformar em uma grande luta...";
	emotion (e_swt2,0,"Traveler#mor3");
	next;
	mes "Ah! Por que não pedimos a essa pessoa lá ...?";
	next;
	mes "Ai sim! Essa é uma ótima ideia.";
	mes "Bem. Olá.";
	mes "Você está lá, viajante!";
	emotion (e_ic,0,"Traveler#mor");
	next;
	mes "Eles parecem estar te chamando.";
	next;
	if(select("Veja o que é o assunto.","Não tenho nada a ver com isso.") == 2) {
		mes "Você foi no seu caminho deixando os viajantes atrás de você.";
		close;
	}
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "O que está acontecendo aqui?";
	emotion (e_what,1);
	next;
	mes "Eu vou te dizer o que.";
	mes "A mãe de Rose tinha 10 filhos.";
	mes "O filho mais velho é chamado Roseone, o segundo Rosetwo, o terceiro Rosethree, a nona Rosenina, você consegue como funciona, certo?";
	emotion (e_ag,0,"Traveler#mor");
	next;
	mes "Certo, é assim que funciona.";
	mes "Então perguntei para o que o mais jovem seria chamado, e quando eu lhe contei a resposta, ele ficou aborrecido e começou a me amaldiçoar.";
	emotion (e_an,0,"Traveler#mor2");
	next;
	mes "Você ... seu bastardo!";
	mes "Ei, o que você acha que a resposta é a questão?";
	emotion e_ag,0,"Traveler#mor";
	next;
	switch(select("Roseten.","Rose.","Como eu saberia isso?")) {
		case 1:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A resposta à pergunta é Roseten.";
		mes "Por que você está lutando por um assunto tão trivial?";
		next;
		mes "Vejo? Mesmo este viajante diz que Roseten é a resposta.";
		mes "Como você ousa tentar me fazer truques?";
		emotion (e_gg,0,"Traveler#mor");
		next;
		mes "Você idiota ... você não tem a menor idéia!";
		emotion (e_an,0,"Traveler#mor2");
		break;
		case 2:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A resposta à pergunta é Rose.";
		mes "Você disse que a mãe de Rose tinha 10 filhos.";
		mes "Então, mesmo que os nomes dos outros filhos sejam Roseone, Rosetwo...";
		mes "Rosenine, a mais jovem deve ser Rose, ou não seria chamada de mãe de Rose.";
		next;
		mes "É exatamente o que quero dizer!";
		mes "Eu não posso ficar com ele.";
		mes "Acho que vivemos em dois mundos diferentes.";
		emotion (e_ok,0,"Traveler#mor2");
		next;
		mes "Acho que vivemos em dois mundos diferentes....";
		emotion (e_ag,0,"Traveler#mor");
		break;
		case 3:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu não faço ideia.";
		mes "Tente ordená-los.";
		next;
		mes "Você é bastardo bom para nada, está tentando deixar essa bagunça para mim?";
		emotion (e_an,0,"Traveler#mor3");
		break;
	}
	next;
	mes "^777777Você sente um impacto repentino na parte de trás da sua cabeça.";
	mes "Sua visão está embaçada.^000000";
	specialeffect(EF_HIT1, AREA, playerattached());
	sc_start SC_BLIND,20000,0;
	close2;
	warp ("mora",31,132);
	end;
}

mora,140,72,4	duplicate(#mora_traveler)	Traveler#mor	4_M_DOGTRAVELER
mora,138,72,6	duplicate(#mora_traveler)	Traveler#mor2	4_M_DOGTRAVELER
mora,139,73,4	duplicate(#mora_traveler)	Traveler#mor3	4_M_DOGTRAVELER

// ------------------------------------------------------------------
mora,132,185,5	script	Habitante de Mora#mor	4_F_RAFLE_PK,{
	mes "[Habitante de Mora]";
	mes "Z....Z....Z.....";
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

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

// ------------------------------------------------------------------

