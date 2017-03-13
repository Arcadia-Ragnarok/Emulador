/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Por: Spell Master/eAthena/rAthena/Hercules                      |
| - Nota: Diversos npcs Barqueiros                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Alberta > Izlude ] - 
// ------------------------------------------------------------------
alberta,189,151,5	script	Marinheiro Fisk#AlbIz	4W_SAILOR,{
	mes "[Marinheiro Fisk]";
	mes "Ol�, partirei em breve para Izlude.";
	mes "Gostaria de ir, por ap�nas 500 Zenys?";
	next;
	if (select("Ir � Izlude","Ficar em Alberta") == 1) {
		if (Zeny < 500) {
			mes "[Marinheiro Fisk]";
			mes "Eu disse que preciso de 500 Zeny, e parece que voc� n�o tem.";
			close;
		}
		close2;
		Zeny -= 500;
		warp "izlude",195,212;
		end;
	}
	mes "[Marinheiro Fisk]";
	mes "Bem...";
	mes "Voc� parece mesmo uma pessoa que gosta de terra firme.";
	close;
}

// ------------------------------------------------------------------
// - [Alberta ~ Alb2Trea] - 
// ------------------------------------------------------------------
alberta,195,151,2	script	Paul#AlbTre	4_M_04,{
	mes "[Paul]";
	mes "Bom dia";
	mes "Voc� gostaria de juntar-se ao time de explora��o do Navio Fantasma?";
	next;
	mes "[Paul]";
	mes "Oh! Melhor lhe alertar, esse evento � recomendado para guerreiros de ALTO N�VEL.";
	next;
	mes "[Paul]";
	mes "Ent�o o que diz?";
	mes "Apenas 200 zeny para participar e voc� vai ter uma tonelada de experi�ncia, eu garanto.";
	next;
	switch(select("Inscreva-me!","Uh, n�o obrigado.")) {
		case 1:
		if (Zeny < 200) {
			mes "[Paul]";
			mes "Parece que voc� n�o tem o dinheiro, meu amigo. Por favor, volte quando for capaz de pagar.";
			close;
		}
		else {
			Zeny -= 200;
			warp "alb2trea",62,69;
			close;
		}
		case 2:
		mes "[Paul]";
		mes "Tudo bem, bem... eu estarei por perto se voc� mudar de id�ia";
		close;
	}
}

alb2trea,39,50,6	script	Paul#2AlbTre	4W_SAILOR,{
	mes "[Paul]";
	mes "Deseja voltar para alberta Alberta?";
	next;
	if (select("Sim por favor.","N�o, Mudei de id�ia.") == 1 ) {
		close2; warp "alberta",192,169; end;
	}
	close;
}

// ------------------------------------------------------------------
// - [Alberta ~ Amatsu ] - 
// ------------------------------------------------------------------
alberta,246,74,3	script	Capit�o#Walter	4_M_SEAMAN,{
	mes "[Walter Moers]";
	mes "Ei, voc� a�...";
	mes "Por acaso voc� sabia que existem pa�ses completamente diferentes do reino de Rune Midgard?";
	next;
	switch(select("Saber mais sobre Amatsu...","Ir para Amatsu:Cancelar")) {
		case 1:
		mes "[Walter Moers]";
		mes "Eu ouvi falar que um navio � deriva acidentalmente descobriu este pa�s peculiar...";
		mes "A embarca��o foi completamente destru�da por uma incr�vel tempestade de f�ria indescrit�vel.";
		next;
		mes "[Walter Moers]";
		mes "Enfim, o viajante acordou em uma praia, cercado pelos destro�os de seu antigo navio.";
		mes "Se levantando, cansado e ferido, ele avistou Amatsu.";
		mes "Os habitantes de l� o acolheram e cuidaram de seus ferimentos, e ele continuou vivendo l� at� poder completar um mapa para voltar.";
		next;
		mes "[Walter Moers]";
		mes "Ele faleceu quando retornou dessa incr�vel viagem.";
		mes "Por sorte, o mapa foi encontrado e entregue � Tristan III.";
		mes "Que prometeu recompensar aqueles que se aventurarem em Amatsu, com sua eterna gratid�o e reconhecimento.";
		next;
		mes "[Walter Moers]";
		mes "Incont�veis aventureiros e corajosos capit�es resolveram aceitar o desafio.";
		mes "Pois al�m da grande fortuna que poderiam adquirir com a troca de produtos e conhecimento com os habitantes de Amatsu.";
		mes "Ainda haveria a generosa recompensa de nosso Rei...";
		next;
		mes "[Walter Moers]";
		mes "Por�m, todos eles falharam!";
		mes "Para superar as fortes correntes mar�timas e as tempestades que cercam esse p�is.";
		mes "� preciso de nada menos que os mais experientes homens e mulheres.";
		mes "Mas eles foram todos cegos pela promessa de fama e fortuna.";
		mes "Eles n�o estavam preparados para essa viagem.";
		next;
		mes "[Walter Moers]";
		mes "O que eles n�o sabiam � que existia uma rota muito mais tranquila e segura para Amatsu...";
		mes "E apenas um homem a conhece...";
		mes "Eu! Capit�o Walter Moers! Hahaha!";
		mes "E aqui termina a minha hist�ria sobre Amatsu.";
		next;
		mes "[Walter Moers]";
		mes "Eu obtive excelentes lucros com o com�rcio entre Amatsu e Rune Midgard durante todos esses anos.";
		mes "Mas agora, eu estou interessado apenas no turismo.";
		mes "Se voc� deseja ir a Amatsu, fale comigo para negociarmos sua viagem!";
		close;
		case 2:
		mes "[Walter Moers]";
		mes "Voc� quer ir at� Amatsu �?";
		mes "� um longo caminho...";
		mes "E por isso, eu terei que lhe cobrar uma taxa.";
		mes "Voc� n�o pensou que eu ia fazer uma viagem longa e perigosa dessas de gra�a n�?";
		next;
		mes "[Walter Moers]";
		mes "Ser�o apenas 10,000 zeny pelo pacote completo!";
		mes "Voc� ter� um quarto com len��is limpos e boa comida durante toda a viagem!";
		mes "Considerando que esta viagem n�o � apenas de ida, eu diria que o pre�o est� �timo, n�o?";
		next;
		mes "[Walter Moers]";
		mes "Ent�o, vamos partir agora?";
		mes "Voc� est� levando o dinheiro consigo, n�o?";
		mes "Ent�o vamos l�!";
		next;
		if (select("Embarcar no Navio!","Cancelar") == 1) {
			if (Zeny > 9999) {
				mes "[Walter Moers]";
				mes "Ok, eu vou i�ar as velas!";
				mes "Todos preparem-se para zarpar!";
				close2;
				Zeny -= 10000;
				warp "amatsu",197,83;
				end;
			}
			mes "[Walter Moers]";
			mes "Por acaso voc� n�o fui claro o suficiente?";
			mes "S�o 10,000 zeny.";
			mes "Se voc� n�o tem isso, v� ca�ar monstros...";
			mes "Ou procurar tesouros em algum navio fantasma.";
			mes "Eu quero ver essa grana contadinha na minha m�o.";
			close;
		}
		mes "[Walter Moers]";
		mes "Se voc� � um aventureiro, essa � a sua grande chance de se aventurar em novos reinos...";
		mes "Bem, a decis�o final � sua.";
		close;
		case 3:
		mes "[Walter Moers]";
		mes "Quando voc� se cansar da sua vida rotineira, viaje comigo at� esse pa�s distante do outro lado do oceano.";
		close;
	}
}

amatsu,194,79,5	script	Capit�o#Walter2	4_M_SEAMAN,{
	mes "[Walter Moers]";
	mes "Ahn, � voc�! Me conte, o que est� achando da sua visita em Amatsu?";
	mes "N�o vai me dizer que j� quer voltar para Alberta?";
	next;
	if (select("Voltar para Alberta","Cancelar") == 1) {
		mes "[Walter Moers]";
		mes "Vou preparar o navio para a partida!";
		mes "Aposto que voc� tem muita coisa pra contar quando voltar!";
		mes "Todos � bordo!";
		close2;
		warp "alberta",243,91;
		end;
	}
	mes "[Walter Moers]";
	mes "Tudo bem, fique o tempo que desejar.";
	mes "O navio estar� sempre aqui para quando voc� quiser voltar...";
	close;
}

// ------------------------------------------------------------------
// - [] - 
// ------------------------------------------------------------------

