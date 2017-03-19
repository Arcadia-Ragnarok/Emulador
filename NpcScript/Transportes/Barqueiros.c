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
// - [Alberta ~ Ayothaya ] - 
// ------------------------------------------------------------------
alberta,246,29,3	script	Aibakthing#ayo	4_M_THAIONGBAK,{
	mes "[Aibakthing]";
	mes "Hmm! Hahh! Hmm! Hahh!";
	mes "Deixe-me apresentar a voc� minha cidade, Ayothaya onde vive tudo o que � sagrado e misterioso!";
	next;
	switch(select("Fale-me sobre Ayothaya.","Ir para Ayothaya.","Cancelar.")) {
		case 1:
		mes "[Aibakthing]";
		mes "N�s, os Ayothayanos somos religiosos e amamos a paz e a sinceridade.";
		mes "N�s procuramos uma vida nobre e espl�ndida.";
		mes "Somos de natureza gentil, mas capazes de nos proteger quando � preciso.";
		next;
		mes "[Aibakthing]";
		mes "A comida � especialmente boa.";
		mes "Nosso prato mais tradicional � a Sopa Tailandesa feita com lim�o, camar�es e pimenta que possui um sabor incr�vel com aroma �nico.";
		mes "E sugiro que voc� prove-a em Ayothaya.";
		next;
		mes "[Aibakthing]";
		mes "Na hist�ria de Ayothaya existe um fato terr�vel que fala sobre uma criatura maligna chamada 'Tigre Sa-mhing' que, contam, devorava pessoas.";
		next;
		mes "[Aibakthing]";
		mes "Hmm! Hah! Hmm! Hah!";
		mes "Ningu�m resiste a um convite t�o tentador a visitar uma �rea t�o bela.";
		mes "Voc� ser� Bem-vindo a qualquer hora!";
		close;
		case 2:
		mes "[Aibakthing]";
		mes "Se voc� desejar visitar Ayothaya.";
		mes "Pedirei uma humilde taxa de 10.000 zenys!";
		mes "Hmm! Hah! Hmm! Hah!";
		next;
		mes "[Aibakthing]";
		mes "Agora, voc� gostaria de visitar Ayothaya!?";
		next;
		if (select("Estou pronto, Vamos L�!","N�o, obrigado.") == 1) {
			if (Zeny > 9999) {
				mes "[Aibakthing]";
				mes "Hmm! Hah! Hmm! Hah!";
				mes "Ah, minha cidade natal, Ayothaya...";
				mes "Eu estou chegando!";
				close2;
				Zeny -= 10000;
				warp "ayothaya",149,71;
				end;
			}
			mes "[Aibakthing]";
			mes "Como falei para voc�, sem a taxa de 10.000 zenys voc� n�o poder� apreciar a beleza de Ayothaya.";
			close;
		}
		mes "[Aibakthing]";
		mes "Se todos sonham em viver em um lugar pac�fico e belo, este lugar � Ayothaya, minha cidade!";
		close;
		case 3:
		mes "[Aibakthing]";
		mes "Se todos sonham em viver em um lugar pac�fico e belo, este lugar � Ayothaya, minha cidade!";
		close;
	}
}

ayothaya,152,68,1	script	Barqueiro Aibakthing#ayo2	4_M_THAIONGBAK,{
	mes "[Aibakthing]";
	mes "Hmm! Hah! Hmm! Hah!";
	mes "Ent�o, voc� gostou de conhecer Ayothaya?";
	mes "Gostou da Sopa Tailandesa?";
	mes "J� � hora de voltar para seu pa�s!";
	next;
	if (select("Voltar para Alberta.","Cancelar.") == 1) {
		mes "[Aibakthing]";
		mes "Estaremos aqui sempre para dar as boas-vindas.";
		mes "Espero que possamos nos rever em breve!";
		mes "Fa�a uma boa viagem!";
		close2;
		warp "alberta",238,22;
		end;
	}
	mes "[Aibakthing]";
	mes "Ah, eu entendo porque voc� n�o quer deixar um lugar t�o belo como Ayothaya.";
	mes "N�o se preocupe, fique o tempo que precisar.";
	close;
}

// ------------------------------------------------------------------
// - [Alberta ~ Kunlun(Gon_Fild) ] - 
// ------------------------------------------------------------------
alberta,246,62,3	script	Wabakho#gon	4_M_TWMIDMAN,{
	mes "[Wabakho]";
	mes "Sauda��es.";
	mes "Eu gostaria de convidar todos voc�s a Kunlun.";
	mes "Eu tenho a honra de ser o encarregado de transportar os cidad�os de Rune Midgard a um pa�s completamente novo.";
	mes "Kunlun!";
	next;
	switch(select("Saber mais sobre Kunlun...","Ir para Kunlun.","Cancelar.")) {
		case 1:
		mes "[Wabakho]";
		mes "Kunlun � o melhor lugar para realizar as fantasias de pessoas de toda Midgard.";
		mes "Voc� ir� passar pela casa em miniatura na Vila dos Pigmeus e entrar em Kunlun atrav�s de um pilar feito de uma luz encantadora.";
		next;
		mes "[Wabakho]";
		mes "Eu ouvi dizer que os s�bios daqui constru�ram uma cidade voadora...";
		mes "� um feito impressionante, por�m Kunlun sempre flutuou no c�u naturalmente!";
		mes "Kunlun possui a mais bela vista do mundo!";
		next;
		mes "[Wabakho]";
		mes "Nossas especialidades locais s�o p�o doce de passas e p�ssego, s�o suculentos e deliciosos.";
		mes "Como era de se esperar, um novo calabou�o repleto de novos perigos o espera em Kunlun.";
		mes "Ent�o esteja bem preparado quando resolver ir l�!";
		next;
		mes "[Wabakho]";
		mes "Quando voc� desejar partir, por favor me informe.";
		mes "� um grande prazer servir pessoas, como voc�, do continente de Midgard.";
		close;
		case 2:
		mes "[Wabakho]";
		mes "Bem, tudo pronto para a viagem?";
		mes "N�s cobramos ^0000FF10,000^000000z por uma passagem para Kunlun.";
		mes "A passagem � apenas v�lida para uma ida.";
		mes "Mas voc� pode voltar quando desejar sem custo algum.";
		next;
		mes "[Wabakho]";
		mes "Voc� quer embarcar agora?";
		next;
		if (select("Sim por favor!","Hmm, talvez outra hora.") == 1) {
			if (Zeny > 9999) {
				mes "[Wabakho]";
				mes "Tripula��o, preparem-se para a partida.";
				close2;
				Zeny -= 10000;
				warp "gon_fild01",258,82;
				end;
			}
			mes "[Wabakho]";
			mes "Eu sinto muito, mas voc� precisa trazer ^0000FF10,000^000000z para comprar sua passagem.";
			mes "Por favor, tenha certeza de que voc� tem dinheiro suficiente.";
			mes "Obrigado.";
			close;
		}
		mes "[Wabakho]";
		mes "Por favor, me avise se desejar visitar Kunlun.";
		mes "� um grande prazer servir pessoas, como voc�, do continente de Midgard.";
		close;
		case 3:
		mes "[Wabakho]";
		mes "Por favor, me avise se desejar visitar Kunlun.";
		mes "� um grande prazer servir pessoas, como voc�, do continente de Midgard.";
		close;
	}
}

gon_fild01,255,79,7	script	Wabakho#gon2	4_M_TWMIDMAN,{
	mes "[Wabakho]";
	mes "E ent�o ilustre visitante, o que achou de Kunlun?";
	mes "Podemos partir para o continente quando quiser, basta dar as ordens.";
	next;
	if (select("Quero voltar para Alberta.","Cancelar") == 1) {
		mes "[Wabakho]";
		mes "Espero que tenha gostado de Kunlun e que volte a nos visitar no futuro.";
		mes "Tripula��o, prepare-se para a partida!";
		close2;
		warp "alberta",243,67;
		end;
	}
	mes "[Wabakho]";
	mes "Demore o tempo que quiser aqui, amigo.";
	mes "Existem muitos lugares misteriosos em Kunlun pra voc� visitar.";
	close;
}

// ------------------------------------------------------------------
// - [Cmd_Fild > Alberta * Cmd_Fild > Izlude ] - 
// ------------------------------------------------------------------
-	script	cmdboard	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "Chamando os passageiros da escuna 'Lutifus'...";
	mes "Com destino a Izlude e Alberta...";
	mes "O embarque est� liberado!";
	mes "Agradecemos a prefer�ncia!";
	mes "Voc� vai embarcar na 'Lutifus'?";
	next;
	switch(select("Porto de Alberta - 600 Zenys","Porto de Izlude - 800 Zenys","Sair")) {
		case 1:
		if (Zeny < 600) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Voc� n�o tem dinheiro suficiente para pagar a passagem.";
			close;
		}
		Zeny -= 600;
		warp "alberta",192,169;
		end;
		case 2:
		if (Zeny < 800) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Voc� n�o tem dinheiro suficiente para pagar a passagem.";
			close;
		}
		Zeny -= 800;
		warp "izlude",195,212;
		end;
		case 3:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Muito obrigado por escolher a";
		mes "'Lutifus'!";
		close;
	}
}
cmd_fild07,299,83,4	duplicate(cmdboard)	Zain#cmd	4W_SAILOR
cmd_fild07,94,134,4	duplicate(cmdboard)	Sarumane#cmd	4W_SAILOR

// ------------------------------------------------------------------
// - [ Izlude > Izlu2Dun / Izlude > Alberta ] - 
// ------------------------------------------------------------------
izlude,197,205,1	script	Marinheiro#izlude	4W_SAILOR,{
	mes "[Marinheiro]";
	mes "Ol�, todo mundo!";
	mes "Aten��o, aten��o!";
	mes "Venham passear ao vento em um barco fascinante!";
	mes "R�pido, r�pido!";
	next;
	switch(select("Ilha Byalan -> 150 Zeny.","Marinha de Alberta  -> 500 Zeny.","Cancelar.")) {
		case 1:
		if (Zeny < 150) {
			mes "[Marinheiro]";
			mes "150 Zeny!";
			mes "Somente 150 Zeny para partir!";
			close;
		}
		Zeny -= 150; warp "izlu2dun",107,50; end;
		case 2:
		if (Zeny < 500) {
			mes "[Marinheiro]";
			mes "500 Zeny!";
			mes "Somente 500 Zeny para partir!";
			close;
		}
		Zeny -= 500; warp "alberta",188,169; end;
		case 3:
		close;
	}
}

izlu2dun,108,27,0	script	Marinheiro#2izlude	4W_SAILOR,{
	mes "[Marinheiro]";
	mes "Quer voltar para Izlude?";
	next;
	if (select("Sim.","N�o, quero ficar mais tempo!") == 1) {
		warp "izlude",197,210;
		end;
	}
	close;
}

// ------------------------------------------------------------------
// - [Izlude ~ Jawaii] - 
// ------------------------------------------------------------------
izlude,171,185,3	script	Auxiliar Lua de Mel#Izl	1_F_LIBRARYGIRL,{
	mes "[Auxiliar]";
	mes "Rec�m casados e casais antigos...";
	mes "N�s os convidamos para passar sua lua de mel aqui!";
	next;
	switch(select("Jawaii?","Ir para Jawaii!","Cancelar.")) {
		case 1:
		mes "[Auxiliar]";
		mes "Existe uma ilha distante, em um continente longe de Rune-Midgard.";
		mes "� uma ilha muito bonita e tranquila que abre as suas portas para os casais.";
		next;
		mes "[Auxiliar]";
		mes "Essa � uma oferta exclusiva de viagem para ref�gio da lua de mel especial para os cida��es de Rune-Midgard.";
		mes "Sendo que o pre�o � de 100.000 zeny.";
		mes "Pode ser caro, mas voc� vai aproveitar cada centavo.";
		next;
		mes "[Auxiliar]";
		mes "Eu garanto a voc� que esse ser�o os momentos mais felizes que voc� pode expereimentar em seu casamento estando na ilha.";
		mes "Voc� realmente vai colocar algum pre�o nisso?";
		close;
		case 2:
		mes "[Auxiliar]";
		if (!getpartnerid()) {
			mes "Hummm....";
			mes "Infelizmente, solteiros n�o s�o permitidos na ilha.";
			mes "Porque voc� n�o vai esquecer sua solid�o no barzinho de Prontera?";
			close;
		}
		else if (Zeny > 99999) {
			Zeny -= 100000;
			mes "Bon Voyage...!!";
			mes "Deixe-me guiar voc� para Jawaii";
			close2;
			warp "jawaii",245,125;
			end;
		}
		mes "Como eu expliquei antes, voc� precisa ter 100.000 zeny para poder visitar Jawaii.";
		mes "Porque voc� n�o pede para pessoa amada uma ajuda em zeny para essa viagem?";
		close;
		case 3:
		mes "[Auxiliar]";
		mes "N�o h� melhor forma de aproveitar momentos especiais com sua pessoa amada atrav�s de uma viagem secreta para um lugar remoto e ex�tico.";
		next;
		mes "[Auxiliar]";
		mes "Umas f�rias em Jawaii poderia ser um incr�vel presente para quem voc� ama~";
		close;
	}
}

jawaii,239,112,7	script	Marinheiro#jaw	4W_SAILOR,{
	mes "[Marinheiro]";
	mes "Este navio est� indo para ^666699Izlude^000000.";
	mes "Voc� aproveitou seu tempo em Jawaii?";
	mes "Voc� deve verficar se n�o esqueceu alguma coisa antes de partirmos.";
	next;
	mes "[Marinheiro]";
	mes "Bem, ent�o voc� gostaria de voltar para Izlude?";
	next;
	if (select("Voltar.","Cancelar.") == 1) {
		mes "[Marinheiro]";
		mes "Agora, deixe-me guiar voc� para Izlude.";
		close2;
		warp "izlude",195,212;
		end;
	}
	mes "[Marinheiro]";
	mes "Aproveite o seu tempo e olhe tudo que gostar ao seu redor.";
	mes "De qualquer forma, esse n�o � um lugar que voc� pode visitar com frequ�ncia.";
	mes "Entende?";
	close;
}

// ------------------------------------------------------------------
// - [ Jawaii > Alberta ] - 
// ------------------------------------------------------------------
jawaii,122,263,5	script	Marinheiro#jaw2	4W_SAILOR,{
	mes "[Marinheiro]";
	mes "Esse navio est� voltando para ^003399Alberta^000000.";
	mes "Voc� aproveitou seu tempo em Jawaii?";
	mes "Voc� deve verificar se n�o esqueceu alguma coisa antes de partirmos.";
	next;
	mes "[Marinheiro]";
	mes "Agora, voc� est� pront"+(Sex?"o":"a")+" para ir a Alberta?";
	next;
	if (select("Ir para Alberta.","Cancelar.") == 1) {
		mes "[Marinheiro]";
		mes "Agora, deixe-me levar voc� para Alberta.";
		close2;
		warp "alberta",192,157;
		end;
	}
	mes "[Marinheiro]";
	mes "Isso...";
	mes "Tente aproveitar suas f�rias o m�ximo que voc� puder.";
	mes "N�s vamos estar prontos para sair quando voc� quiser.";
	close;
}

// ------------------------------------------------------------------
// - [] - 
// ------------------------------------------------------------------

