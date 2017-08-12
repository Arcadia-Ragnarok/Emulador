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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Mora                                |
\*-----------------------------------------------------------------*/

mora,52,138,5	script	Mungmung#mor	4_M_RAFLE_GR,{
	mes "[Mungmung]";
	mes "Eu n�o sou o estalajadeiro!";
	mes "Por que as pessoas querem me pagar quando me v�em??";
	close;
}

// ------------------------------------------------------------------
mora,160,123,3	script	Nemnem#mor	4_M_RAFLE_OLD,{
	mes "[Nemnem]";
	mes "Minha dor est� cada vez pior, j� que a fenda apareceu em Bifrost.";
	mes "Voc� � respons�vel por isso, jovem?";
	next;
	switch(select("Claro que sou!","Essa � uma acusa��o injusta!")) {
		case 1:
		mes "[Nemnem]";
		mes "Bravo!";
		emotion (e_awsm);
		close;
		case 2:
		mes "[Nemnem]";
		mes "Se n�o, n�o importa!";
		emotion (e_swt2,1);
		close;
	}
}

// ------------------------------------------------------------------
mora,105,104,3	script	Fanfarr�o#mor	4_M_DOGTRAVELER2,{
	mes "[Fanfarr�o]";
	mes "Ent�o, a situa��o estava no seu pior.";
	next;
	mes "[Raffles]";
	mes "Oh!";
	next;
	mes "[Fanfarr�o]";
	mes "Entediado at� a morte, comecei a chorar.";
	mes "Ent�o adormeci, cansado de todos os choros.";
	mes "E quando acordei, fiquei ainda mais aborrecido do que antes!";
	next;
	mes "[Raffles]";
	mes "Oh, oh!";
	mes "Isso � terr�vel, t�o terr�vel.";
	mes "Como isso poderia acontecer?!";
	next;
	mes "[Fanfarr�o]";
	mes "Ent�o, a situa��o ficou cada vez mais s�ria...";
	mes "Agora me d� mais algumas moedas.";
	emotion (e_swt2,1);
	close;
}

// ------------------------------------------------------------------
mora,105,100,1	script	Rangrang#mor	4_F_RAFLE_PK,{
	mes "[Rangrang]";
	mes "Nunca ouvi uma hist�ria t�o chata e triste.";
	mes "Acho que vou chorar!";
	close;
}

// ------------------------------------------------------------------
mora,99,100,7	script	Decoy#mor	4_F_DOGTRAVELER,{
	mes "[A Decoy]";
	mes "Oh!";
	mes "Isso � t�o inacredit�vel!";
	mes "Estou t�o curioso, vamos dar-lhe algumas moedas!";
	close;
}

// ------------------------------------------------------------------
mora,98,104,5	script	Raffle Mudando#mor	4_M_RAFLE_GR,{
	mes "[Raffle Mudando]";
	mes "Isso � triste, muito triste!";
	mes "N�o tenho certeza por que, mas deve estar triste porque todos os outros dizem.";
	close;
}

// ------------------------------------------------------------------
mora,102,107,5	script	Raffle Aliviado#mor	4_M_RAFLE_OLD,{
	mes "[Raffle Aliviado]";
	mes "Wow!";
	mes "Isso � emocionante.";
	mes "Ele acordou e som novamente!";
	mes "Bem, tenho certeza que ele vai da pr�xima vez!";
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
	mes "A hist�ria n�o � nada divertida.";
	mes "Agora!";
	mes "Mas � como se estiv�ssemos cantando em coro, � realmente divertido.";
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
	mes "N�o � essa uma vila alegre?";
	mes "Com Bifrost bloqueado assim, estou pensando em estabelecer aqui permanentemente.";
	close;
}

// ------------------------------------------------------------------
mora,184,169,5	script	Trabalhador#mor	4_M_RAFLE_GR,{
	mes "[Trabalhador]";
	mes "Ouvi dizer que algu�m conseguiu sair do \"Floresta da Neblina\".";
	mes "Quem quer que seja, eu quero conhecer essa pessoa.";
	close;
}

// ------------------------------------------------------------------
mora,108,182,5	script	Trabalhador#mor2	4_M_RAFLE_GR,{
	mes "[Trabalhador]";
	mes "Mantenha-se afastado da \"Floresta da Neblina\".";
	mes "Nunca sonhe com espreitar por curiosidade.";
	mes "Muitos viajantes sa�ram depois de ir para l�.";
	close;
}

// ------------------------------------------------------------------
mora,179,155,1	script	Jovem Aprendiz#mor	4_M_RAFLE_GR,{
	mes "[Jovem Aprendiz]";
	mes "Vou sair da \"Floresta da Neblina\" e me tornar um her�i!";
	next;
	mes "[Trabalhador Indiferente]";
	mes "Ouvi dizer que algu�m j� fez isso.";
	next;
	mes "[Novice Worker]";
	mes "E se eu disser que sou algu�m?";
	next;
	mes "[Trabalhador Indiferente]";
	mes "Esque�a. � mais cr�vel dizer que fiz isso.";
	next;
	mes "[Novice Worker]";
	mes "Bem, isso � verdade.";
	close;
}
mora,177,157,5	duplicate(Jovem Aprendiz#mor)	Trabalhador Indiferente#mor	4_F_RAFLE_PK

// ------------------------------------------------------------------
mora,122,97,6	script	Raffle Relaxando#mor	4_M_RAFLE_OLD,{
	mes "[Raffle Relaxando]";
	mes "O banho p�blico no centro da aldeia � um s�mbolo da Vila de Mora.";
	next;
	mes "[Raffle Relaxando]";
	mes "N�o � apenas uma po�a simples.";
	mes "Tem um tremendo poder para curar feridas.";
	next;
	mes "[Raffle Relaxando]";
	mes "Tente andar no banho se quiser ver por si mesmo.";
	mes "Ele cicatrizar� lenta e seguramente suas feridas.";
	close;
}

// ------------------------------------------------------------------
mora,174,171,0	script	Trabalhador do Armaz�m#mor	4_F_RAFLE_PK,{
	mes "[Trabalhador do Armaz�m]";
	mes "Eu quero escalar a escada, mas minhas pernas s�o muito curtas para fazer isso.";
	emotion (e_sob);
	next;
	mes "[Trabalhador do Armaz�m]";
	mes "Eu me pergunto quem trouxe aqui.";
	close;
}

// ------------------------------------------------------------------
mora,168,161,4	script	Trabalhador do Armaz�m#mor2	4_M_DOGTRAVELER,{
	mes "[Lively]";
	mes "A pousada l�.";
	mes "Deveria ter sido meu.";
	next;
	mes "[Lively]";
	mes "A loja por a�.";
	mes "Deveria ter sido meu tamb�m.";
	next;
	mes "[Lively]";
	mes "O armaz�m aqui e todas as coisas nele.";
	mes "Todos esses deveriam ter sido meus.";
	next;
	mes "[Lively]";
	mes "Ahhh... Gostaria de ganhar dinheiro...";
	emotion (e_sob);
	close;
}

// ------------------------------------------------------------------
mora,175,161,6	script	Trabalhador do Armaz�m#mor3	4_F_RAFLE_PK,{
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
	mes "^777777Voc� v� um Rafflesia perdida na leitura^000000.";
	next;
	switch(select("Veja o que ele est� lendo.","Deixe-lo Sozinho.")) {
		case 1:
		mes "^777777Curioso sobre o que ele est� lendo, voc� se aproxima silenciosamente dele por tr�s.";
		mes "O Rafflesia est� lendo em voz baixa^000000.";
		next;
		mes "[Estudioso]";
		mes "Seiren estava indo para o Eremes.";
		mes "Ele estava indo para emprestar os livros de refer�ncia de Eremes, mas ele tamb�m esperava ver sua linda irm�, Seiren.";
		mes "Seiren bateu na porta de Eremes com o cora��o batendo.";
		next;
		mes "[Estudioso]";
		mes "Toc! Toc! Toc!";
		mes "Com licen�a. Tem algu�m a�?";
		mes "... ... ...";
		mes "Ele n�o ouve nada.";
		next;
		mes "[Estudioso]";
		mes "N�o h� ningu�m em casa?";
		mes "Ele bateu de novo, com medo de ter feito a viagem por nada.";
		next;
		mes "[Estudioso]";
		mes "Toc! Toc! Toc!";
		mes "N�o resposta novamente.";
		mes "N�o h� ningu�m para casa?";
		mes "Ele sabia que era grosseiro fazer isso.";
		mes "Mas ele decidiu entrar de qualquer maneira e esperar que Eremes voltasse para casa.";
		next;
		mes "[Estudioso]";
		mes "Seiren abriu a porta da frente com o cora��o palpitante.";
		mes "*........*";
		mes "A porta n�o estava trancada.";
		mes "Eremes parece estar ausente por um tempo.";
		next;
		mes "[Estudioso]";
		mes "Seiren entrou na casa hesitante.";
		mes "No momento em que entrou na casa, ele ouviu um som de �gua correndo.";
		next;
		mes "[Estudioso]";
		mes "Seiren de repente veio a seus sentidos e voltou para sair.";
		mes "Mas no momento!!";
		next;
		mes "[Estudioso]";
		mes "A porta do banheiro abriu, e com o vapor branco derramando veio um p�.";
		next;
		mes "[Estudioso]";
		mes "O cora��o de Seiren quase parou ao v�-lo.";
		mes "E um momento depois, algu�m saiu do banheiro, com apenas uma toalha em volta do corpo dela.";
		next;
		mes "[Estudioso]";
		mes "Com o corpo ainda molhado do chuveiro...";
		next;
		emotion (e_omg);
		mes "[Estudioso]";
		mes "Quem � Voc�?";
		mes "Quanto tempo voc� estava a�?";
		next;
		mes "^777777O Rafflesia fechou o livro apressadamente.";
		mes "Voc� est� curioso o que acontecer� depois.";
		mes "Mas voc� foi bastante grosseiro, ent�o voc� simplesmente desistiu.^000000";
		close;
		case 2:
		mes "Voc� deixa o lugar quietamente para n�o incomodar.";
		close;
	}
}

// ------------------------------------------------------------------
mora,99,65,6	script	Rafflesia Banana#mor	4_M_RAFLE_GR,{
	mes "[Rafflesia Banana]";
	mes "Voc� quer uma banana?";
	next;
	switch(select("Sim, eu quero","N�o, obrigado")) {
		case 1:
		mes "[Rafflesia Banana]";
		mes "Pegue se voc� puder.";
		mes "Estava brincando n�o ia te dar uma gratuitamente.";
		emotion (e_ok);
		close;
		case 2:
		mes "[Rafflesia Banana]";
		mes "Bem, eu ia dar isso de gra�a, mas se voc� n�o quiser, est� bem comigo.";
		emotion (e_pif);
		close;
	}
}

// ------------------------------------------------------------------
mora,30,128,5	script	Traveler Relaxando#mor	4_M_DOGTRAVELER2,{
	mes "[Traveler]";
	mes "O Hotel de Mora � famoso por seus m�veis incomuns.";
	mes "Armarios de cogumelos e ma��...";
	mes "N�o s�o t�o inovadores?";
	next;
	select("... ... ...");
	mes "[Traveler]";
	mes "Desculpe... Talvez seja s� minha opini�o...";
	emotion (e_sry);
	close;
}

// ------------------------------------------------------------------
mora,130,96,4	script	Traveler Relaxando#mor2	4_M_DOGTRAVELER,{
	mes "[Traveler]";
	mes "As Rafflesias na Vila de Mora se parece tanto, � t�o confuso.";
	mes "� como olhar quintuplos...";
	next;
	mes "[Traveler]";
	mes "Contudo! Se voc� olhar de perto, voc� encontrar� que cada um deles tem personalidade.";
	mes "Para encontrar, � uma das coisas divertidas que voc� pode fazer na aldeia.";
	close;
}

// ------------------------------------------------------------------
mora,43,113,4	script	Rafflesia Ferido#mor	4_M_RAFLE_OLD,{
	mes "[Wounded Raffle]";
	mes "Ugghh... O que foi que estava no banho?... Arrrghh...";
	mes "Para atacar de repente assim... Cuidado...";
	mes "Seja l� o que for, � muito agressivo.";
	close;
}

// ------------------------------------------------------------------
-	script	#mora_traveler	FAKE_NPC,{
	mes "Voc� ... ousa jogar um jogo comigo?";
	emotion (e_ag,0,"Traveler#mor");
	next;
	mes "O que...? Voc� tem provas?";
	mes "Voc� tem provas?!!";
	emotion (e_an,0,"Traveler#mor2");
	next;
	mes "Olhe, pare, basta parar!";
	mes "Tenho medo de se transformar em uma grande luta...";
	emotion (e_swt2,0,"Traveler#mor3");
	next;
	mes "Ah! Por que n�o pedimos a essa pessoa l� ...?";
	next;
	mes "Ai sim! Essa � uma �tima ideia.";
	mes "Bem. Ol�.";
	mes "Voc� est� l�, viajante!";
	emotion (e_ic,0,"Traveler#mor");
	next;
	mes "Eles parecem estar te chamando.";
	next;
	if(select("Veja o que � o assunto.","N�o tenho nada a ver com isso.") == 2) {
		mes "Voc� foi no seu caminho deixando os viajantes atr�s de voc�.";
		close;
	}
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "O que est� acontecendo aqui?";
	emotion (e_what,1);
	next;
	mes "Eu vou te dizer o que.";
	mes "A m�e de Rose tinha 10 filhos.";
	mes "O filho mais velho � chamado Roseone, o segundo Rosetwo, o terceiro Rosethree, a nona Rosenina, voc� consegue como funciona, certo?";
	emotion (e_ag,0,"Traveler#mor");
	next;
	mes "Certo, � assim que funciona.";
	mes "Ent�o perguntei para o que o mais jovem seria chamado, e quando eu lhe contei a resposta, ele ficou aborrecido e come�ou a me amaldi�oar.";
	emotion (e_an,0,"Traveler#mor2");
	next;
	mes "Voc� ... seu bastardo!";
	mes "Ei, o que voc� acha que a resposta � a quest�o?";
	emotion e_ag,0,"Traveler#mor";
	next;
	switch(select("Roseten.","Rose.","Como eu saberia isso?")) {
		case 1:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A resposta � pergunta � Roseten.";
		mes "Por que voc� est� lutando por um assunto t�o trivial?";
		next;
		mes "Vejo? Mesmo este viajante diz que Roseten � a resposta.";
		mes "Como voc� ousa tentar me fazer truques?";
		emotion (e_gg,0,"Traveler#mor");
		next;
		mes "Voc� idiota ... voc� n�o tem a menor id�ia!";
		emotion (e_an,0,"Traveler#mor2");
		break;
		case 2:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A resposta � pergunta � Rose.";
		mes "Voc� disse que a m�e de Rose tinha 10 filhos.";
		mes "Ent�o, mesmo que os nomes dos outros filhos sejam Roseone, Rosetwo...";
		mes "Rosenine, a mais jovem deve ser Rose, ou n�o seria chamada de m�e de Rose.";
		next;
		mes "� exatamente o que quero dizer!";
		mes "Eu n�o posso ficar com ele.";
		mes "Acho que vivemos em dois mundos diferentes.";
		emotion (e_ok,0,"Traveler#mor2");
		next;
		mes "Acho que vivemos em dois mundos diferentes....";
		emotion (e_ag,0,"Traveler#mor");
		break;
		case 3:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu n�o fa�o ideia.";
		mes "Tente orden�-los.";
		next;
		mes "Voc� � bastardo bom para nada, est� tentando deixar essa bagun�a para mim?";
		emotion (e_an,0,"Traveler#mor3");
		break;
	}
	next;
	mes "^777777Voc� sente um impacto repentino na parte de tr�s da sua cabe�a.";
	mes "Sua vis�o est� emba�ada.^000000";
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

