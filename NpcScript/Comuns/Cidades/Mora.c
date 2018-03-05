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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Mora                                |
\*-----------------------------------------------------------------*/

mora,52,138,5	script	Mungmung#mor	4_M_RAFLE_GR,{
	mes("[Mungmung]\n Eu n�o sou o estalajadeiro!\n Por que as pessoas querem me pagar quando me v�em?");
	close;
}

// ------------------------------------------------------------------
mora,160,123,3	script	Nemnem#mor	4_M_RAFLE_OLD,{
	mes("[Nemnem]\n Minha dor est� cada vez pior, j� que a fenda apareceu em Bifrost.\n Voc� � respons�vel por isso, jovem?");
	next;
	switch(select("Claro que sou!", "Essa � uma acusa��o injusta!")) {
		case 1:
		mes("[Nemnem]\n Bravo!");
		emotion(e_awsm);
		close;
		case 2:
		mes("[Nemnem]\n Se n�o, n�o importa!");
		emotion(e_swt2, 1);
		close;
	}
}

// ------------------------------------------------------------------
mora,105,104,3	script	Fanfarr�o#mor	4_M_DOGTRAVELER2,{
	mes("[Fanfarr�o]\n Ent�o, a situa��o estava no seu pior.");
	next;
	mes("[Raffles]\n Oh!");
	next;
	mes("[Fanfarr�o]\n Entediado at� a morte, comecei a chorar.\n Ent�o adormeci, cansado de todos os choros.\n E quando acordei, fiquei ainda mais aborrecido do que antes!");
	next;
	mes("[Raffles]\n Oh, oh!\n Isso � terr�vel, t�o terr�vel.\n Como isso poderia acontecer?!");
	next;
	mes("[Fanfarr�o]\n Ent�o, a situa��o ficou cada vez mais s�ria...\n Agora me d� mais algumas moedas.");
	emotion(e_swt2, 1);
	close;
}

// ------------------------------------------------------------------
mora,99,100,7	script	Decoy#mor	4_F_DOGTRAVELER,{
	mes("[A Decoy]\n Oh!\n Isso � t�o inacredit�vel!\n Estou t�o curioso, vamos dar-lhe algumas moedas!");
	close;
}

// ------------------------------------------------------------------
mora,98,104,5	script	Raffle Mudando#mor	4_M_RAFLE_GR,{
	mes("[Raffle Mudando]\n Isso � triste, muito triste!\n N�o tenho certeza por que, mas deve estar triste porque todos os outros dizem.");
	close;
}

// ------------------------------------------------------------------
mora,102,107,5	script	Raffle Aliviado#mor	4_M_RAFLE_OLD,{
	mes("[Raffle Aliviado]\n Wow!\n Isso � emocionante.\n Ele acordou e som novamente!\n Bem, tenho certeza que ele vai da pr�xima vez!\n ...");
	next;
	mes("[Raffle Aliviado]\n Eh?");
	close;
}

// ------------------------------------------------------------------
mora,101,107,5	script	Raffle Animado#mor	4_F_RAFLE_PK,{
	mes("[Raffle Animado]\n Agora\n A hist�ria n�o � nada divertida.\n Agora!\n Mas � como se estiv�ssemos cantando em coro, � realmente divertido.\n Agora!");
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
	mes("[Visitante de Mora]\n N�o � essa uma vila alegre?\n Com Bifrost bloqueado assim, estou pensando em estabelecer aqui permanentemente.");
	close;
}

// ------------------------------------------------------------------
mora,184,169,5	script	Trabalhador#mor	4_M_RAFLE_GR,{
	mes("[Trabalhador]\n Ouvi dizer que algu�m conseguiu sair do \"Floresta da Neblina\".\n Quem quer que seja, eu quero conhecer essa pessoa.");
	close;
}

// ------------------------------------------------------------------
mora,108,182,5	script	Trabalhador#mor2	4_M_RAFLE_GR,{
	mes("[Trabalhador]\n Mantenha-se afastado da \"Floresta da Neblina\".\n Nunca sonhe com espreitar por curiosidade.\n Muitos viajantes sa�ram depois de ir para l�.");
	close;
}

// ------------------------------------------------------------------
mora,179,155,1	script	Jovem Aprendiz#mor	4_M_RAFLE_GR,{
	mes("[Jovem Aprendiz]\n Vou sair da \"Floresta da Neblina\" e me tornar um her�i!");
	next;
	mes("[Jovem Aprendiz]\n Ouvi dizer que algu�m j� fez isso.");
	next;
	mes("[Jovem Aprendiz]\n E se eu disser que sou algu�m?");
	next;
	mes("[Jovem Aprendiz]\n Esque�a. � mais cr�vel dizer que fiz isso.");
	next;
	mes("[Jovem Aprendiz]\n Bem, isso � verdade.");
	close;
}
mora,177,157,5	duplicate(Jovem Aprendiz#mor)	Trabalhador Indiferente#mor	4_F_RAFLE_PK

// ------------------------------------------------------------------
mora,122,97,6	script	Raffle Relaxando#mor	4_M_RAFLE_OLD,{
	mes("[Raffle Relaxando]\n O banho p�blico no centro da aldeia � um s�mbolo da Vila de Mora.");
	next;
	mes("[Raffle Relaxando]\n N�o � apenas uma po�a simples.\n Tem um tremendo poder para curar feridas.");
	next;
	mes("[Raffle Relaxando]\n Tente andar no banho se quiser ver por si mesmo.\n Ele cicatrizar� lenta e seguramente suas feridas.");
	close;
}

// ------------------------------------------------------------------
mora,174,171,0	script	Trabalhador do Armaz�m#mor	4_F_RAFLE_PK,{
	mes("[Trabalhador do Armaz�m]\n Eu quero escalar a escada, mas minhas pernas s�o muito curtas para fazer isso.");
	emotion(e_sob);
	next;
	mes("[Trabalhador do Armaz�m]\n Eu me pergunto quem trouxe aqui.");
	close;
}

// ------------------------------------------------------------------
mora,168,161,4	script	Lively#mor	4_M_DOGTRAVELER,{
	mes("[Lively]\n A pousada l�.\n Deveria ter sido meu.");
	next;
	mes("[Lively]\n A loja por a�.\n Deveria ter sido meu tamb�m.");
	next;
	mes("[Lively]\n O armaz�m aqui e todas as coisas nele.\n Todos esses deveriam ter sido meus.");
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
	mes("^777777Voc� v� um Rafflesia perdida na leitura^000000.");
	next;
	switch(select("Veja o que ele est� lendo", "Deixe-lo Sozinho")) {
		case 1:
		mes("^777777Curioso sobre o que ele est� lendo, voc� se aproxima silenciosamente dele por tr�s.\n O Rafflesia est� lendo em voz baixa^000000.");
		next;
		mes("[Estudioso]\n Seiren estava indo para o Eremes.\n Ele estava indo para emprestar os livros de refer�ncia de Eremes, mas ele tamb�m esperava ver sua linda irm�, Seiren.\n Seiren bateu na porta de Eremes com o cora��o batendo.");
		next;
		mes("[Estudioso]\n Toc! Toc! Toc!\n Com licen�a.\n Tem algu�m a�?\n .........\n Ele n�o ouve nada.");
		next;
		mes("[Estudioso]\n N�o h� ningu�m em casa?\n Ele bateu de novo, com medo de ter feito a viagem por nada.");
		next;
		mes("[Estudioso]\n Toc! Toc! Toc!\n N�o resposta novamente.\n N�o h� ningu�m para casa?\n Ele sabia que era grosseiro fazer isso.\n Mas ele decidiu entrar de qualquer maneira e esperar que Eremes voltasse para casa.");
		next;
		mes("[Estudioso]\n Seiren abriu a porta da frente com o cora��o palpitante.\n *........*\n A porta n�o estava trancada.\n Eremes parece estar ausente por um tempo.");
		next;
		mes("[Estudioso]\n Seiren entrou na casa hesitante.\n No momento em que entrou na casa, ele ouviu um som de �gua correndo.");
		next;
		mes("[Estudioso]\n Seiren de repente veio a seus sentidos e voltou para sair.\n Mas no momento!!");
		next;
		mes("[Estudioso]\n A porta do banheiro abriu, e com o vapor branco derramando veio um p�.");
		next;
		mes("[Estudioso]\n O cora��o de Seiren quase parou ao v�-lo.\n E um momento depois, algu�m saiu do banheiro, com apenas uma toalha em volta do corpo dela.");
		next;
		mes("[Estudioso]\n Com o corpo ainda molhado do chuveiro...");
		next;
		emotion(e_omg);
		mes("[Estudioso]\n Quem � Voc�?\n Quanto tempo voc� estava a�?");
		next;
		mes("^777777O Rafflesia fechou o livro apressadamente.\n Voc� est� curioso o que acontecer� depois.\n Mas voc� foi bastante grosseiro, ent�o voc� simplesmente desistiu.^000000");
		close;
		case 2:
		mes("Voc� deixa o lugar quietamente para n�o incomodar.");
		close;
	}
}

// ------------------------------------------------------------------
mora,99,65,6	script	Rafflesia Banana#mor	4_M_RAFLE_GR,{
	mes("[Rafflesia Banana]\n Voc� quer uma banana?");
	next;
	switch(select("Sim, eu quero", "N�o, obrigado")) {
		case 1:
		mes("[Rafflesia Banana]\n Pegue se voc� puder.\n Estava brincando n�o ia te dar uma gratuitamente.");
		emotion(e_ok);
		close;
		case 2:
		mes("[Rafflesia Banana]\n Bem, eu ia dar isso de gra�a, mas se voc� n�o quiser, est� bem comigo.");
		emotion(e_pif);
		close;
	}
}

// ------------------------------------------------------------------
mora,30,128,5	script	Traveler Relaxando#mor	4_M_DOGTRAVELER2,{
	mes("[Traveler]\n O Hotel de Mora � famoso por seus m�veis incomuns.\n Armarios de cogumelos e ma��...\n N�o s�o t�o inovadores?");
	next;
	select("... ... ...");
	mes("[Traveler]\n Desculpe... Talvez seja s� minha opini�o...");
	emotion(e_sry);
	close;
}

// ------------------------------------------------------------------
mora,130,96,4	script	Viajante Relaxando#mor2	4_M_DOGTRAVELER,{
	mes("[Viajante]\n As Rafflesias na Vila de Mora se parece tanto, � t�o confuso.\n � como olhar quintuplos...");
	next;
	mes("[Viajante]\n Contudo! Se voc� olhar de perto, voc� encontrar� que cada um deles tem personalidade.\n Para encontrar, � uma das coisas divertidas que voc� pode fazer na aldeia.");
	close;
}

// ------------------------------------------------------------------
mora,43,113,4	script	Rafflen Apreensivo#mor	4_M_RAFLE_OLD,{
	mes("[Rafflen Apreensivo]\n Ugghh... O que foi que estava no banho?... Arrrghh...\n Para atacar de repente assim... Cuidado...\n Seja l� o que for, � muito agressivo.");
	close;
}

// ------------------------------------------------------------------
-	script	#mora_traveler	FAKE_NPC,{
	mes("Voc� ... ousa jogar um jogo comigo?");
	emotion(e_ag, 0, "Viajante Chateado#mor");
	next;
	mes("O que...? Voc� tem provas?\n Voc� tem provas?!!");
	emotion(e_an, 0, "Viajante Nervoso#mor");
	next;
	mes("Olhe, pare, basta parar!\n Tenho medo de se transformar em uma grande luta...");
	emotion(e_swt2, 0, "Viajante Apartador#mor");
	next;
	mes("Ah! Por que n�o pedimos a essa pessoa l� ...?");
	next;
	mes("Ai sim! Essa � uma �tima ideia.\n Bem. Ol�.\n Voc� est� l�, viajante!");
	emotion(e_ic, 0, "Viajante Chateado#mor");
	next;
	mes("Eles parecem estar te chamando.");
	next;
	if(select("Veja o que � o assunto", "N�o tenho nada a ver com isso") == 2) {
		mes("Voc� foi no seu caminho deixando os viajantes atr�s de voc�.");
		close;
	}
	mes("[" + strcharinfo(PC_NAME) + "]\n O que est� acontecendo aqui?");
	emotion(e_what, 1);
	next;
	mes("Eu vou te dizer o que.\n A m�e de Rose tinha 10 filhos.\n O filho mais velho � chamado Roseone, o segundo Rosetwo, o terceiro Rosethree, a nona Rosenina, voc� consegue como funciona, certo?");
	emotion(e_ag, 0, "Viajante Chateado#mor");
	next;
	mes("Certo, � assim que funciona.\n Ent�o perguntei para o que o mais jovem seria chamado, e quando eu lhe contei a resposta, ele ficou aborrecido e come�ou a me amaldi�oar.");
	emotion(e_an,0,"Viajante Nervoso#mor");
	next;
	mes("Voc� ... seu bastardo!\n Ei, o que voc� acha que a resposta � a quest�o?");
	emotion(e_ag, 0, "Viajante Chateado#mo");
	next;
	switch(select("Roseten", "Rose", "Como eu saberia isso?")) {
		case 1:
		mes("["+strcharinfo(PC_NAME)+"]\n A resposta � pergunta � Roseten.\n Por que voc� est� lutando por um assunto t�o trivial?");
		next;
		mes("Vejo? Mesmo este viajante diz que Roseten � a resposta.\n Como voc� ousa tentar me fazer truques?");
		emotion(e_gg,0, "Viajante Chateado#mor");
		next;
		mes "Voc� idiota ... voc� n�o tem a menor id�ia!";
		emotion(e_an, 0, "Viajante Nervoso#mor");
		break;
		case 2:
		mes("["+strcharinfo(PC_NAME)+"]\n A resposta � pergunta � Rose.\n Voc� disse que a m�e de Rose tinha 10 filhos.\n Ent�o, mesmo que os nomes dos outros filhos sejam Roseone, Rosetwo...\n Rosenine, a mais jovem deve ser Rose, ou n�o seria chamada de m�e de Rose.");
		next;
		mes "� exatamente o que quero dizer!";
		mes "Eu n�o posso ficar com ele.";
		mes "Acho que vivemos em dois mundos diferentes.";
		emotion(e_an, 0, "Viajante Nervoso#mor");
		next;
		mes "Acho que vivemos em dois mundos diferentes....";
		emotion(e_gg,0, "Viajante Chateado#mor");
		break;
		case 3:
		mes("["+strcharinfo(PC_NAME)+"]\n Eu n�o fa�o ideia.\n Tente orden�-los.");
		next;
		mes("Voc� � bastardo bom para nada, est� tentando deixar essa bagun�a para mim?");
		emotion(e_an, 0, "Viajante Apartador#mor");
		break;
	}
	next;
	mes("^777777Voc� sente um impacto repentino na parte de tr�s da sua cabe�a.\n Sua vis�o est� emba�ada.^000000");
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
