/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: Playtester                                           |
| - Info: Mini-Quests de armas usadas por Justiceiros               |
| * Garrison                                                        |
| * Garrison[1]                                                     |
| * Inferno                                                         |
| * Destruidora                                                     |
| * Destruidora[1]                                                  |
| * Retalhadora                                                     |
| * Retalhadora[1]                                                  |
| * Andarilho                                                       |
| * Raio Vermelho                                                   |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Garrison / Garrison[1] ] -
// ------------------------------------------------------------------
que_ng,182,85,3	script	Garrison#gungs	4_M_MANAGER,{
	if (BaseJob != Job_Gunslinger) {
		mes "[Garrison]";
		mes "Voc� n�o � um Justiceiro";
		mes "Voc�s est� me distraindo de meu trabalho.";
		mes "V� embora";
		close;
	} else if (BaseLevel < 55) {
		mes "[Garrison]";
		mes "Meu nome � Garrison.";
		mes "Eu sou um mestre em cria��o de armas.";
		mes "A arma que eu fabrico tamb�m se chama Garrison.";
		mes "Eu a nomeei assim porque acho Garrison um nome legal e perfeito assim como eu.";
		close;
	}
	switch (gun_gs) {
		case 0:
		if (countitem(The_Garrison) < 1) {
			mes "[Garrison]";
			mes "Meu nome � Garrison.";
			mes "Eu sou um mestre em cria��o de armas.";
			mes "A arma que eu fabrico tamb�m se chama Garrison.";
			mes "Eu a nomeei assim porque acho Garrison um nome legal e perfeito assim como eu.";
			next;
			mes "[Garrison]";
			mes "Voc� est� aqui para encomendar uma Garrison de mim?";
			next;
			callsub(SubGarrison);
		}
		mes "[Garrison]";
		mes "Hmm.";
		mes "O que est� rolando?";
		mes "Voc� est� aqui porque precisa de uma arma?";
		next;
		switch (select("Eu preciso de uma Garrison","N�o mesmo","Cancelar")) {
			case 1:
			mes "[Garrison]";
			mes "Oh. Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Todos precisam de mim!";
			mes "Isso prova que minha arma,a Garrison,� a melhor de todas";
			mes "Ent�o,voc� est� me pedindo para fazer uma agora?";
			next;
			callsub(SubGarrison);
			case 2:
			mes "[Garrison]";
			mes "Hmm. Voc� est� parecendo que est� vagando sem uma miss�o.";
			mes "Se voc� tiver tempo,voc� me faria um favor?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "O que �?";
			next;
			mes "[Garrison]";
			mes "Mmm. Bem, eu recebi atualmente recebi uma carta declarando que h� v�rias armas com defeito que eu criei chamada de Pistola de Seis Tiros";
			next;
			mes "[Garrison]";
			mes "Eu sou um perfeccionista, mas cara com minha idade, minha vis�o est� escurecendo.";
			mes "Eu acho que talvez vendi a Pistola de Seis Tiros defeituosa.";
			next;
			mes "[Garrison]";
			mes "Ent�o o que eu estou tentando dizer �,eu estou esperando algu�m que ache partes sobressalentes para que eu possa usar para consertar as partes defeituosas da Pistola de Seis Tiros";
			next;
			mes "[Garrison]";
			mes "Se voc� me ajudar, eu irei por 1 slot nesta Garrison que voc� est� segurando agora";
			mes "O que voc� me diz?";
			next;
			mes "[Garrison]";
			mes "S� pra voc� saber, se eu por o slot na sua Garrison, qualquer refinamento ou carta slotada ir� desaparecer.";
			mes "Decida cuidadosamente";
			next;
			switch (select("Eu n�o gosto de como isso soa","Ok, vamos tentar")) {
				case 1:
				mes "[Garrison]";
				mes "Hmm, eu entendo, acho que vou procurar outra pessoa";
				close;
				case 2:
				mes "[Garrison]";
				mes "Oh,voc� ir�?";
				mes "Estou t�o agradecido";
				mes "Estes s�o os materiais que eu preciso para fazer as partes sobresalentes";
				next;
				mes "[Garrison]";
				mes "10 "+getitemname(Steel)+",";
				mes "1 "+getitemname(Screw)+",";
				mes "10 "+getitemname(Emveretarcon)+",";
				mes "30 "+getitemname(Coal)+", e";
				mes "10 "+getitemname(Elunium)+".";
				mes "N�o se esque�a.";
				gun_gs = 1;
				close;
			}
			case 3:
			mes "[Garrison]";
			mes "Hmm... Venha me ver depois";
			close;
		}
		case 1:
		if ((countitem(Steel) < 10) || (countitem(Screw) < 10) || (countitem(Emveretarcon) < 10) || (countitem(Coal) < 30) || (countitem(Elunium) < 1)) {
			mes "[Garrison]";
			mes "10 "+getitemname(Steel)+",";
			mes "1 "+getitemname(Screw)+",";
			mes "10 "+getitemname(Emveretarcon)+",";
			mes "30 "+getitemname(Coal)+", e";
			mes "10 "+getitemname(Elunium)+".";
			mes "N�o se esque�a.";
			close;
		}
		mes "[Garrison]";
		mes "Oh voc� voltou com o que eu preciso?";
		mes "Estou t�o agradecido";
		mes "Oh... Tem outro favor que eu preciso que seja feito.";
		next;
		mes "[Garrison]";
		mes "Eu preciso entregar as partes sobressalentes uma vez que eu as fiz para outra pessoa.";
		mes "Mas eu tenho muito trabalho por aqui";
		next;
		mes "[Garrison]";
		mes "Desculpe pedir, mas eu estava esperando que voc� pudesse entregar o que eu fiz desses materiais para outra pessoa.";
		next;
		mes "[Garrison]";
		mes "Enquanto eu espero.";
		mes "Vou fazer as prepara��es para slotar sua Garrison, como prometido.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmm, eu n�o quero fazer isso,mas eu irei fazer de qualquer forma.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ok.";
		next;
		mes "[Garrison]";
		mes "Oh,muito obrigado";
		mes "Ent�o entregue isto para uma pessoa chamada Ravery.";
		mes "Ele mora na favela de Lighthalzen";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Voc� recebeu a boa encomenda de Garrison";
		mes "Vamos entregar-las para a pessoa chamada Ravery,que mora na favela de Lighthalzen";
		delitem(Steel,10);
		delitem(Emveretarcon,10);
		delitem(Screw,10);
		delitem(Elunium,1);
		delitem(Coal,30);
		gun_gs = 2;
		close;
		case 2:
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Voc� recebeu as boas encomendas de Garrison.";
		mes "Vamos entrega-las para a pessoa chamada Ravery,que mora na favela de Lighthalzen";
		close;
		case 3:
		mes "[Garrison]";
		mes "Oh como est� sua viagem?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Gyah";
		mes "Aquele homem tentou me atacar assim que me viu.";
		mes "Mal escapo da morte!";
		next;
		mes "[Garrison]";
		mes "Ahh n�o";
		mes "Eu n�o tinha ideia de que a pessoa que me mandou a carta estava na verdade planejando me matar.";
		mes "Ele provavelmente foi mandado de uma guilda de nossos inimigos...";
		next;
		mes "[Garrison]";
		mes "Parece que eu lhe mandei sem inten��es para uma miss�o muito perigosa";
		next;
		mes "[Garrison]";
		mes "Me desculpe";
		mes "Voc� tamb�m deve saber, mas h� pessoas m�s planejando atacar a Guilda dos Justiceiros em todos os lugares.";
		next;
		mes "[Garrison]";
		mes "Considere isso uma parte de seu treino como Justiceiro";
		next;
		mes "[Garrison]";
		mes "Me desculpe por isso ter acontecido";
		mes "Mas, como prometido, irei slotar sua Garrison";
		next;
		if (!countitem(The_Garrison)) {
			mes "[Garrison]";
			mes "Huh? Suspiro.";
			mes "Voc� vendeu sua arma enquanto voc� esteve fora?";
			mes "Eu disse que slotaria sua arma, mas nunca disse que slotaria uma arma que n�o est� aqui.";
			mes "V� e pegue sua Garrison e traga-a aqui";
			gun_gs = 4;
			close;
		}
		mes "[Garrison]";
		mes "Deixe-me ver";
		mes "*tonk* *tonk* *thump* *whump*";
		mes "Aqui est� sua Garrison modificada.";
		mes "Fa�a bom uso";
		delitem(The_Garrison,1);
		getitem(The_Garrison_,1);
		gun_gs = 5;
		close;
		case 4:
		if (!countitem(The_Garrison)) {
			mes "[Garrison]";
			mes "V� e pegue sua Garrison e traga-a aqui";
			close;
		}
		mes "[Garrison]";
		mes "Ah,aqui est�";
		mes "Aqui est� sua Garrison modificada.";
		mes "Fa�a bom uso";
		delitem(The_Garrison,1);
		getitem(The_Garrison_,1);
		gun_gs = 5;
		close;
		case 5:
		mes "[Garrison]";
		mes "Hmm voc� est� aqui de novo?";
		mes "Qual o problema?";
		mes "Voc� voltou porque precisa de uma arma?";
		mes "De que voc� precisa?";
		next;
		switch (select("Garrison","Garrison[2]","Cancelar")) {
			case 1:
			callsub(SubGarrison);
			case 2:
			callsub(SubGarrison_);
			case 3:
			mes "[Garrison]";
			mes "Certo.";
			mes "Ent�o te vejo por a�.";
			close;
		}
	}

	SubGarrison:
	mes "[Garrison]";
	mes "Para criar uma Garrison,eu preciso de...";
	mes "50 "+getitemname(Steel)+",";
	mes "20 "+getitemname(Screw)+",";
	mes "1 "+getitemname(Oridecon)+",";
	mes "50 "+getitemname(Coal)+",";
	mes "3 "+getitemname(Elunium)+",";
	mes "e h� uma taxa de 30,000 Zenys";
	mes "Bem, voc� quer uma?";
	next;
	switch (select("Talvez mais tarde","Sim, fa�a pra mim","Cancelar")) {
		case 1:
		mes "[Garrison]";
		mes "Hmmm trabalhei pesado por nada";
		mes "Pense sobre isso.";
		mes "Venha me ver quando tiver decidido";
		close;
		case 2:
		if ((countitem(Steel) < 50) || (countitem(Screw) < 20) || (countitem(Oridecon) < 1) || (countitem(Coal) < 50) ||(countitem(Elunium) < 3)) {
			mes "[Garrison]";
			mes "Voc� n�o trouxe materiais suficientes";
			mes "Para criar uma Garrison, eu preciso de...";
			mes "50 "+getitemname(Steel)+",";
			mes "20 "+getitemname(Screw)+",";
			mes "1 "+getitemname(Oridecon)+",";
			mes "50 "+getitemname(Coal)+",";
			mes "3 "+getitemname(Elunium)+",";
			mes "e h� uma taxa de 30,000 Zenys";
			mes "N�o esque�a";
			close;
		} else if (Zeny < 30000) {
			mes "[Garrison]";
			mes "Voc� precisa de mais Zeny";
			mes "Mais Zeny";
			close;
		} else if (!checkweight(The_Garrison,1)) {
			mes "[Garrison]";
			mes "N�o h� espa�o no seu invent�rio para minha cria��o";
			mes "Abra uma vaga";
			mes "Em seu invent�rio, e ent�o";
			mes "Venha me ver";
			close;
		}
		mes "[Garrison]";
		mes "Hmm, parece que h� a quantia exata de materiais e Zeny.";
		mes "Aqui est� sua Garrison";
		mes "Se voc� precisar de outra, venha me ver.";
		delitem(Oridecon,1);
		delitem(Elunium,3);
		delitem(Steel,50);
		delitem(Coal,50);
		delitem(Screw,20);
		Zeny -= 30000;
		getitem(The_Garrison,1);
		close;
		case 3:
		mes "[Garrison]";
		mes "Eu irei te ver quando eu te ver";
		close;
	}

	SubGarrison_:
	mes "[Garrison]";
	mes "Para slotar uma Garrison,eu preciso de";
	mes "10 "+getitemname(Steel)+",";
	mes "10 "+getitemname(Screw)+",";
	mes "10 "+getitemname(Emveretarcon)+", e";
	mes "30 "+getitemname(Coal)+",";
	mes "1 "+getitemname(Elunium)+",";
	mes "1 "+getitemname(The_Garrison)+".";
	mes "Bem, voc� quer uma?";
	next;
	switch (select("Talvez mais tarde","Sim, fa�a pra mim","Cancelar")) {
		case 1:
		mes "[Garrison]";
		mes "Voc� me fez trabalhar a toa";
		mes "Volte quando voc� tiver decidido";
		close;
		case 2:
		if ((countitem(Steel) < 10) || (countitem(Screw) < 10) || (countitem(Emveretarcon) < 10) || (countitem(Coal) < 30) || (countitem(Elunium) < 1) || (countitem(The_Garrison) < 1)) {
			mes "[Garrison]";
			mes "Voc� n�o trouxe materiais suficientes";
			mes "Para fazer uma Garrison, eu preciso de";
			mes "10 "+getitemname(Steel)+",";
			mes "10 "+getitemname(Screw)+",";
			mes "10 "+getitemname(Emveretarcon)+", e";
			mes "30 "+getitemname(Coal)+",";
			mes "1 "+getitemname(Elunium)+",";
			mes "1 "+getitemname(The_Garrison)+".";
			mes "N�o se esque�a";
			close;
		} else if (!checkweight(The_Garrison_, 1)) {
			mes "[Garrison]";
			mes "N�o h� espa�o em seu invent�rio para minha cria��o.";
			mes "Fa�a algum espa�o em seu invent�rio, e ent�o Venha me ver.";
			close;
		}
		mes "[Garrison]";
		mes "Hmm,parece que tem a quantidade certa de materiais e Zeny.";
		mes "Aqui est� uma Garrison modificada e com slot.";
		mes "Se voc� precisar de outra, venha me ver.";
		delitem(Steel,10);
		delitem(Emveretarcon,10);
		delitem(Screw,10);
		delitem(Elunium,1);
		delitem(Coal,30);
		delitem(The_Garrison,1);
		getitem(The_Garrison_,1);
		close;
		case 3:
		mes "[Garrison]";
		mes "Eu irei lhe ver quando eu lhe ver";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,322,247,6	script	Ravey#gungs	4_M_04,{
	if (gun_gs == 2) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Com licen�a.";
		mes "Ol�, eu estou aqui para repor as partes da defeituosa arma dos Justicei..";
		next;
		mes "[Ravey]";
		mes "Voc�!!!";
		mes "Huuut!!";
		mes "Morra!!!";
		gun_gs = 3;
		percentheal(100,0);
		percentheal(-90,0);
		next;
		mes "^bb0000O homem chamado Ravery ataca repentinamente, como se ele estivesse esperando a palavra Justiceiro^000000";
		mes "Voc� quase morreu";
		next;
		mes "Voc� foje sem olhar pra tr�s";
		mes "Vamos voltar r�pido para Garrison";
		close;
	}
	if (gun_gs == 3) {
		mes "^bb0000O homem chamado Ravery ataca repentinamente, como se ele estivesse esperando a palavra Justiceiro^000000";
		mes "Voc� quase morreu";
		next;
		mes "Voc� foje sem olhar pra tr�s";
		mes "Vamos voltar r�pido para Garrison";
		close;
	}
	mes "[Ravey]";
	mes "Ugh...";
	mes "Err.. Err..";
	mes "......";
	close;
}

// ------------------------------------------------------------------
// - [ Inferno ]
// ------------------------------------------------------------------
que_ng,187,163,3	script	Ingrid#guninf	4_F_ALCHE,{
	if (BaseJob != Job_Gunslinger) {
		mes "[Ingrid]";
		mes "Como voc� est�?";
		mes "Eu tenho sido apontada como a nova Criadora de Armas de Justiceiros.";
		mes "Meu nome � Ingrid";
		next;
		mes "[Ingrid]";
		mes "De qualquer forma,voc� n�o parece ser um membro da Guilda de Justiceiros.";
		mes "Ent�o eu n�o posso lhe ajudar em nada. Desculpe";
		close;
	}
	switch (gun_inf) {
		case 0:
		mes "[Ingrid]";
		mes "Como voc� est�?";
		mes "Eu tenho sido apontada como a nova Criadora de Armas de Justiceiros. Meu nome � Ingrid";
		mes "� um prazer servir voc�!";
		next;
		mes "[Ingrid]";
		mes "H� t�o pouco tempo que eu comecei a trabalhar.";
		mes "Mas eu irei fazer o meu melhor para lhe ajudar";
		next;
		mes "[Ingrid]";
		mes "Ahh ... Estou t�o anciosa.";
		mes "Como agora,eu estou tendo o trabalho de criar uma arma chamada O Inferno pelos clientes";
		next;
		mes "[Ingrid]";
		mes "A Inferno � a arma mais avan�ada de nosso laborat�rio.";
		next;
		mes "[Ingrid]";
		mes "Tem um incr�vel poder e precis�o, e um desenho ergon�mino.";
		mes "Ent�o ela pode ser facilmente segurada e m�nimiza significantemente a press�o quando se atira.";
		mes "� uma arma digna de ser chama de a verdadeira arma para qualquer Justiceiro.";
		mes "huff huff...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Voc� sabe muito sobre isso.";
		mes ".....";
		next;
		mes "[Ingrid]";
		mes "Ah. � claro, eu sou a pessoa que desenhou essa arma.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Wooow isto � incr�vel";
		next;
		mes "[Ingrid]";
		mes "Ah Oops...";
		mes "Eu acabei de divugar-la?";
		mes "Eu ainda n�o sou comparada a professora Serena.";
		next;
		mes "[Ingrid]";
		mes "Na verdade, eu tamb�m queria me tornar uma Justiceira.";
		mes "Mas gra�as a minha fraca determina��o fis�ca, tive que desistir";
		next;
		mes "[Ingrid]";
		mes "Enquanto eu me aplicava para me tornar uma Justiceira.";
		mes "Eu tive muita sorte da professora Serena ter visto meus talentos";
		mes "Com a ajuda dela, estou aonde estou ajudando com a manufatura e venda de armas de Justiceiros.";
		next;
		mes "[Ingrid]";
		mes "Eu continuo com remorso de n�o ter sido capaz de virar uma Justiceira.";
		mes "Mas ao menos meu irm�o, que fez o teste em meu lugar, passou e se tornou um.";
		next;
		mes "[Ingrid]";
		mes "Estou feliz desde que eu sinto que, meu irm�o � capaz de cumprir nosso sonho.";
		next;
		mes "[Ingrid]";
		mes "Haha olhe para mim lhe falando todas essas coisas quando voc� nem se quer perguntou.";
		mes "Desculpe.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "N�o,tudo bem";
		mes "Voc� pode n�o ter se tornado uma Justiceira, mas acho que voc� se tornou uma grande pessoa.";
		next;
		mes "[Ingrid]";
		mes "Verdade?";
		mes "Obrigada, tentarei o meu melhor";
		next;
		mes "[Ingrid]";
		mes "Para produzir a Inferno";
		mes "Eu preciso de 100 Placas de ferro usadas, 10 Oridecons, 50 Parafusos enferrujados velhos, 100 Cora��es incandescentes, e 200,000Zeny";
		mes "Gostaria de produzir uma agora?";
		next;
		switch (select("Vou pensar nisso","Sim, por favor")) {
			case 1:
			mes "[Ingrid]";
			mes "AH eu entendo.";
			mes "Bem, pense sobre isto e venha me ver quando tiver se decidido";
			close;
			case 2:
			mes "[Ingrid]";
			mes "Eu entendo";
			mes "Aqui est�o os materiais de novo";
			next;
			mes "[Inferno]";
			mes "Para produzir uma Inferno.";
			mes "Eu preciso de";
			mes "100 "+getitemname(Old_Steel_Plate)+",";
			mes "50 "+getitemname(Screw)+",";
			mes "10 "+getitemname(Oridecon)+",";
			mes "100 "+getitemname(Burning_Heart)+",";
			mes "e 200.000 Zenys";
			mes "Voc� deve me trazer o n�mero EXATO de materiais";
			mes "Por favor n�o se esque�a";
			gun_inf = 1;
			close;
		}
		case 1:
		callsub(SubInferno);
		case 2:
		mes "[Ingrid]";
		mes "Ol�,voc� voltou";
		mes "Voc� est� aqui porque precisa de uma Inferno?";
		next;
		switch (select("N�o, eu voltei s� porque...","Sim, me fa�a uma Inferno")) {
			case 1:
			mes "[Ingrid]";
			mes "Ah eu entendo";
			mes "Entendo";
			mes "Bem, pense sobre isto e volte quando tiver se decidido";
			close;
			case 2:
			callsub(SubInferno);
		}
	}

	SubInferno:
	if ((countitem(Old_Steel_Plate) < 100) || (countitem(Screw) < 50) || (countitem(Oridecon) < 10) || countitem(Burning_Heart) < 100 || Zeny < 200000) {
		mes "[Ingrid]";
		mes "Para produzir uma Inferno.";
		mes "Eu preciso de";
		mes "100 "+getitemname(Old_Steel_Plate)+",";
		mes "50 "+getitemname(Screw)+",";
		mes "10 "+getitemname(Oridecon)+",";
		mes "100 "+getitemname(Burning_Heart)+",";
		mes "e 200.000 Zenys";
		mes "Voc� deve me trazer o n�mero EXATO de materiais";
		mes "Por favor n�o se esque�a";
		close;
	}else if (!checkweight(Inferno,1)) {
		mes "[Ingrid]";
		mes "Parece que voc� tem muitos itens para minha cria��o,entao eu n�o posso lhe dar isso.";
		mes "Por que voc� nao volta e me ver de novo quando tiver pronto para receber isto?";
		close;
	} else {
		mes "[Ingrid]";
		mes "Eu vejo que voc� tem a quantia pr�pria de materiais e Zeny";
		mes "Aqui est� a Inferno que eu criei para voc�.";
		mes "Fa�a bom uso.";
		Zeny -= 200000;
		delitem(Old_Steel_Plate,100);
		delitem(Oridecon,10);
		delitem(Screw,50);
		delitem(Burning_Heart,100);
		getitem(Inferno,1);
		if (gun_inf == 1) {
			gun_inf = 2;
		}
		close;
	}
}

// ------------------------------------------------------------------
// - [ Destruidora / Destruidora[1] ]
// ------------------------------------------------------------------
que_ng,185,180,3	script	Vanessa#gunst	4_F_JOB_BLACKSMITH,{
	if (BaseJob != Job_Gunslinger) {
		mes "[Vanessa]";
		mes "Hah !Hah !!";
		mes "Ballitude! Comandante Sambo!";
		mes "Arrebatando!, Muye Tai!";
		mes "Pancracion!, Lucharibre!";
		mes "Eu irei melhorar todas as armas de m�os nuas neste mundo!!";
		next;
		mes "[Vanessa]";
		mes "Hmm?!";
		mes "Quem � voc�?";
		mes "Voc� est� interrompendo meu treino!";
		mes "Suma!";
		close;
	}
	switch (gunst) {
		case 0:
		mes "[Vanessa]";
		mes "Ha!Hyaa!!";
		mes "Vale Tudo! Commando Sambo!";
		mes "Arrebentando!, Muay Thai!";
		mes "Pankration!, Mucho Libre!";
		mes "Eu irei melhorar todos os estilos de luta neste mundo!!";
		next;
		mes "[Vanessa]";
		mes "Hm?";
		mes "Voc� � um Justiceiro, huh?";
		mes "Por que voc� est� interrompendo meus exerc�cios e eu ficando em frente a mim?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "� apenas excerc�cios de observa��o parce bom...";
		mes ".............";
		next;
		mes "[Vanessa]";
		mes "Oh! Voc� gosta de artes marc�ais?";
		mes "Venha aqui, eu irei imobilizar voc� em uma queda de bra�os.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "N N�o obrigado";
		next;
		mes "[Vanessa]";
		mes "Venha aqui";
		mes "-Bam! Bam!-";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "AahUgh N�o fa�a isso";
		mes "Aa..Aaaahhhh!!";
		mes "Argh";
		mes "-Sons de algo quebrando";
		mes "Owww";
		mes "*L�grimas*";
		next;
		mes "[Vanessa]";
		mes "Hmm...eu coloquei muita for�a..";
		mes "Hm";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem obviamente";
		mes "Idiota! Idiota!!";
		mes "*l�grimas*";
		next;
		mes "[Vanessa]";
		mes "Ummumm";
		mes "Desculpe";
		mes "Okey, okey,";
		mes "N�o chore";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "*l�grimas*";
		next;
		mes "[Vanessa]";
		mes "Okey okey..";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "*l�grimas*";
		next;
		mes "[Vanessa]";
		mes "Pare!Arrgh!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "........";
		next;
		mes "[Vanessa]";
		mes "Bem.....";
		mes "Desculpe pelo que aconteceu.";
		mes "Vou lhe fazer uma arma se voc� pegar uns materiais...";
		next;
		mes "[Vanessa]";
		mes "Eu sou Vanessa Louise.";
		mes "Uma original Art�sta Marcial Aplicadora mas eu peguei o caminho errado e eu estou numa furada fazendo armas.";
		mes "Oh meu deus oh minha minha vida miser�vel";
		next;
		mes "[Vanessa]";
		mes "A arma que eu crio � chama de Destruidora";
		next;
		mes "[Vanessa]";
		mes "Eu a expeciamente nomiei assim";
		mes "depois de uma tecn�ca que eu usei numa arena.";
		mes "Hehe";
		next;
		mes "[Vanessa]";
		mes "Primeiro para fazer um Destruidora precisarei de alguns materiais.";
		next;
		switch (select("Talvez da pr�xima vez","Certo")) {
			case 1:
			mes "[Vanessa]";
			mes "Mm Isto � t�o, ser� uma oportunidade para voc�.";
			mes "Voc� ir� lamentar isto, ent�o lhe vejo depois.";
			close;
			case 2:
			mes "[Vanessa]";
			mes "Para fazer uma Destruidora";
			mes "Voc� precisa de";
			mes "50 "+getitemname(Old_Steel_Plate)+",";
			mes "70 "+getitemname(Screw)+",";
			mes "5 "+getitemname(Oridecon)+" e";
			mes "e uma taxa de 100,000 Zenys.";
			gunst = 1;
			close;
		}
		case 1:
		callsub(SubDestroyer);
		case 2:
		mes "[Vanessa]";
		mes "Oh voc� est� de volta?";
		mes "Como voc� est� agora?";
		mes "Tem um novo item no invent�rio.";
		mes "V� em frente e escolha.";
		next;
		switch (select("Destru�dora","Destru�dora[1]","Cancelar")) {
			case 1:
			mes "[Vanessa]";
			mes "Yeah, isto est� bom.";
			mes "Para uma Destruidora normal.";
			mes "Voc� precisa de";
			mes "50 "+getitemname(Old_Steel_Plate)+",";
			mes "70 "+getitemname(Screw)+",";
			mes "5 "+getitemname(Oridecon)+" e";
			mes "100,000 Zenys para cria-la.";
			next;
			switch (select("Talvez mais tarde","Certo")) {
				case 1:
				mes "[Vanessa]";
				mes "O QUE? Qual �?";
				mes "O que h� para se pensar?";
				mes "Ok, bem, pense sobre isso e volte...";
				close;
				case 2:
				callsub(SubDestroyer);
			}
			case 2:
			mes "[Vanessa]";
			mes "Oh A Destru�dora[1] � iferente da Destruidora normal.";
			mes "Eu quero que voc� encontre um dos raros itens que eu estou colecionando.";
			mes "Ent�o eu darei uma pra voc�.";
			next;
			mes "[Vanessa]";
			mes "Esou procurando por";
			mes "Dedos Afiados[2]";
			mes "5 Oridecons tamb�m.";
			next;
			switch (select("Talvez da pr�xima vez","OK! Farei!")) {
				case 1:
				mes "[Vanessa]";
				mes "O que qual �";
				mes "O que h� para se pensar?";
				mes "Bem, pense sobre isso e volte...";
				close;
				case 2:
				callsub(SubDestroyer_);
			}
			case 3:
			mes "[Vanessa]";
			mes "Hmm Yeah";
			mes "Tome seu tempo.";
			mes "Talves voc� gostaria de poupar comigo?";
			close;
		}
	}

	SubDestroyer:
	if ((countitem(Old_Steel_Plate) < 50) || (countitem(Screw) < 70) || (countitem(Oridecon) < 5) || Zeny < 100000) {
		mes "[Vanessa]";
		mes "Para fazer uma Destruidora";
		mes "Voc� precisa de";
		mes "50 "+getitemname(Old_Steel_Plate)+",";
		mes "70 "+getitemname(Screw)+",";
		mes "5 "+getitemname(Oridecon)+"e";
		mes "e uma taxa de 100,000 Zenys.";
		close;
	} else if (!checkweight(Destroyer,1)) {
		mes "[Vanessa]";
		mes "Parece que voc� n�o est� possibilitado de carregar minha cria��o com voc� mesmo se eu tiver feito isso.";
		mes "V� e limpe seu ivent�rio um pouco.";
		close;
	} else {
		mes "[Vanessa]";
		mes "Okay Muito bem";
		mes "Tudo checado";
		mes "Voc� tem os materiais perfeitos e Zeny.";
		mes "Aqui est� a Destruidora que eu criei a tempo para voc�.";
		mes "Fa�a bom uso.";
		Zeny -= 100000;
		delitem(Old_Steel_Plate,50);
		delitem(Oridecon,5);
		delitem(Screw,70);
		getitem(Destroyer,1);
		if (gunst == 1) { gunst = 2; }
		next;
		mes "[Vanessa]";
		mes "Se voc� precisar novamente venha depois.";
		mes "Venha qualquer hora.";
		mes "Pr�xima vez eu irei usar um diferente tipo de t�cnica de m�os nuas.";
		close;
	}

	SubDestroyer_:
	if ((countitem(Finger_) < 1) || (countitem(Oridecon) < 5)) {
		mes "[Vanessa]";
		mes "Os materiais requeridos s�o";
		mes "1 Dedos Afiados[2]";
		mes "e 5 Oridecons.";
		close;
	} else if (!checkweight(Destroyer_,1)) {
		mes "[Vanessa]";
		mes "N�o h� espa�o em seu ivent�rio.";
		mes "Mesmo eu tendo feito uma.";
		mes "Voc� n�o parece h�bil para carregar isso.";
		mes "Venha me ver depois que voc� tiver limpado seu ivent�rio.";
		close;
	} else {
		mes "[Vanessa]";
		mes "Okay Muito bem.";
		mes "Aqui est� a Destruidora Slotada que eu fiz a tempo para voc�.";
		mes "Fa�a bom uso.";
		delitem(Finger_,1);
		delitem(Oridecon,5);
		getitem(Destroyer_,1);
		next;
		mes "[Vanessa]";
		mes "Se voc� precisar de outra venha depois.";
		mes "Volte a qualquer hora";
		mes "Pr�xima vez eu irei usar um diferente tipo de t�cnica de m�os nuas.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Retalhadora / Retalhadora[1] / Andarilho / Raio Vermelho ] -
// ------------------------------------------------------------------
que_ng,149,178,4	script	Diretor do Laborat�rio#gunna	4_F_ALCHE,{
	if (gun_na == 1) {
		if (countitem(Nail_Of_Orc) > 999 && countitem(Skel_Bone) > 999) {
			delitem(Nail_Of_Orc,1000);
			delitem(Skel_Bone,1000);
			gun_na = 2;
			mes "[N. A]";
			mes "Ahh,est� tudo aqui!";
			mes "Ahh,e eu estava precocupado com nada estarei habilitado a al�ar minha ^ff0000Retalhadora^000000 quando eu tiver terminado de cria-la";
			next;
			mes "[N. A]";
			mes "T� bom, eu darei a ^ff0000Retalhadora^000000 para voc�.";
			mes "Mesmo assim, n�s n�o trabalhamos de gra�a, ent�o n�s precisamos cobrar voc� por isso.";
			mes "Tamb�m, voc� precisa obter permiss�o para usar a Retalhadora de Lady Celena.";
			next;
			mes "[N. A]";
			mes "Uma vez que voc� tenha pego a permiss�o, eu irei dar a Retalhadora para voc�, ap�s pagar a taxa de 100.000 Zenys";
			close;
		} else {
			mes "[N. A]";
			mes "Voc� precisa encontrar ^ff00001000 Garra de Orc^000000 e ^ff00001000 Osso^000000 ainda?";
			mes "Se voc� acha que � muito dif�cil,";
			mes "voc� pode escolher desistir";
			next;
			if (select("Eu n�o estou desistindo!","Eu desisto..") == 1) {
				mes "[N. A]";
				mes "Tudo bem, confio em voc�";
				mes "Boa sorte";
				close;
			} else {
				mes "[N. A]";
				mes "Voc� est� desistindo huh?";
				mes "Bem, eu admito que o teste � um pouco dif�cil.";
				mes "Mas voc� n�o pode al�ar esta arma se n�o consegue fazer o teste.";
				mes "Voc� deve voltar depois para pegar o desafio de novo";
				gun_na = 0;
				close;
			}
		}
	} else if (gun_na == 2) {
		mes "[N. A]";
		mes "Eu ja consegui a permiss�o da Lady Serena para deixar voc� usar a Retalhadora.";
		mes "Voc� pode usar uma vez que tenha me pago 100.000 zeny.";
		mes "Voc� quer pagar agora?";
		next;
		if (select("N�o","Sim") == 1) {
			mes "[N. A]";
			mes "Tudo bem.";
			mes "Irei esperar o seu retorno";
			close;
		} else {
			if (Zeny < 100000) {
				mes "[N. A]";
				mes "Uh, eu n�o acho que voc� tem dinheiro sufuciente consigo.";
				mes "Venha me ver com o dinheiro certo?";
				close;
			}
			if (!checkweight(Butcher,1)) {
				mes "[N. A]";
				mes "Voc� est� com excesso de peso.";
				mes "Mesmo se eu lhe der a arma, voc� n�o pode carrega-la.";
				mes "Por favor limpe seu invent�rio.";
				close;
			}
			Zeny -= 100000;
			gun_na = 0;
			getitem(Butcher,1);
			mes "[N. A]";
			mes "1,2,3,4,5";
			mes "6... 99997, 99998, 99999...";
			mes "100000. *ding!* Muito bem!!";
			mes "A taxa est� limpa agora.";
			mes "Voc� deve pegar a ^ff0000Retalhadora^000000 agora!";
			next;
			mes "[N. A]";
			mes "Sr. F. Harrison de Lighthalzen est� muito interessado em seu novo brinquedo l�.";
			mes "Mostre pra ele alguma vez.";
			mes "Ele ficar� muito feliz.";
			next;
			mes "[N. A]";
			mes "Fa�a bom uso disto.";
			mes "Te vejo por ai!";
			close;
		}
	} else if (gun_na == 10) {
		if (countitem(Steel) > 69 && countitem(Elunium) > 4 && countitem(Oridecon) > 2 && countitem(Coal) > 69 && countitem(Screw) > 49 && Zeny > 50000) {
			delitem(Steel,70);
			delitem(Elunium,5);
			delitem(Oridecon,3);
			delitem(Coal,70);
			delitem(Screw,50);
			Zeny -= 50000;
			gun_na = 11;
			mes "[N. A]";
			mes "Aha,voc� me trouxe todos os materiais.";
			mes "Aqui, deixe-me apressar para isso sair r�pido!";
			mes "Isso vai me levar algum tempo, ent�o espere.";
			close;
		} else {
			mes "[N. A]";
			mes "Eh? Voc� n�o tem os materiais com voc� ainda?";
			next;
			mes "[N. A]";
			mes "Para fazer a Andarilho, eu irei precisar de";
			mes "70 "+getitemname(Steel)+",";
			mes "5 "+getitemname(Elunium)+",";
			mes "3 "+getitemname(Oridecon)+",";
			mes "70 "+getitemname(Coal)+",";
			mes "50 "+getitemname(Screw)+",";
			mes "e tamb�m uma taxa de 50.000 zeny.";
			mes "Volte assim que tiver tudo pronto";
			next;
			mes "[N. A]";
			mes "Se voc� n�o quer mais isso voc� pode cancelar o pedido";
			next;
			if (select("N�o cancele","Cancele isso") == 1) {
				mes "[N. A]";
				mes "Bem,venha me ver com os materiais.";
				mes "Estarei esperando.";
				close;
			} else {
				mes "[N. A]";
				mes "Tudo certo, os pedidos para fazer uma Andarilho para voc� est� cancelado.";
				mes "Lhe desejo boa sorte no futuro.";
				gun_na = 0;
				close;
			}
		}
	} else if (gun_na == 11) {
		if (!checkweight(Drifter,1)) {
			mes "[N. A]";
			mes "Voc� est� com excesso de peso.";
			mes "Mesmo se eu fizer a arma, voc� n�o poder� carrega-la.";
			mes "Por favor limpe seu ivent�rio";
			close;
		}
		gun_na = 0;
		getitem(Drifter,1);
		mes "[N. A]";
		mes "Ahh, aqui est� completa para voc� o Andarilho.";
		next;
		mes "[N. A]";
		mes "Por favor aprenda a usar as Metralhadoras direito.";
		mes "A louca destrui��o vai ser certamente �til para voc� mentalmente.";
		close;
	} else if (gun_na == 101) {
		mes "[N. A]";
		mes "Ah, ol�?";
		mes "Eu sou o coordenador do desenvolvimento de Armas de Einbroch.";
		mes "Meu nome � 'Diretor de laborat�rio'.";
		mes "Voc� precisa de algo?";
		next;
		select("Eu preciso de uma Haste Especial de Metal");
		mes "[N. A]";
		mes "Huh...? Ei,voc� nao � aquele cara";
		mes "que venho aqui com uma";
		mes "Retalhadora um tempo atr�s? Como est� a";
		mes "Retalhadora?";
		next;
		mes "[N. A]";
		mes "....... O QUE?!? VOC� A QUEBROU!?";
		mes "Eu achei que voc� fosse capaz de";
		mes "us�-la bem... Voc� me desapontou!!!";
		next;
		mes "[N. A]";
		mes "Voc� traiu a minha confian�a em voc�!";
		mes "Seu traidor! Traidor!! TRAIDOR!!!!";
		next;
		select("Explica tudo");
		mes "[N. A]";
		mes "...... Bem.";
		mes "Ent�o foi  Mr. F. Harrison que quebrou? huh?";
		mes "Desculpe, eu n�o devia ter suspeitado de voc�";
		next;
		mes "[N. A]";
		mes "Lady Celena tem a haste de metal especial que voc� quer, mas o doutor n�o est� agora, e ningu�m mais sabe aonde isso est�";
		next;
		mes "[N. A]";
		mes "Eu tenho outra pesquisa pra voc� agora ent�o eu n�o posso perder meu tempo procurando por...Grr...";
		mes "Preciso das Esferas Elementais para continuar com minha pesquisa...";
		next;
		select("Fa�a uma oferta a ele");
		mes "[N. A]";
		mes "Uma oferta? Tipo o que?";
		next;
		select("N�s achamos coisas por cada oferta");
		mes "[N. A]";
		mes "Hmm... Parece interessante.";
		mes "Bem, de acordo com a oferta.";
		mes "Eu irei procurar a haste pra voc� enquanto voc� me tras as";
		mes "Esferas Elementais.";
		next;
		mes "[N. A]";
		mes "30 "+getitemname(Poison_Sphere)+",";
		mes "30 "+getitemname(Flare_Sphere)+",";
		mes "30 "+getitemname(Lighting_Sphere)+",";
		mes "30 "+getitemname(Blind_Sphere)+", e";
		mes "30 "+getitemname(Freezing_Sphere)+".";
		gun_na = 102;
		close;
	} else if (gun_na == 102) {
		mes "[N. A]";
		mes "Voc� trouxe as eferas?";
		next;
		switch (select("N�o","Aqui as 30 "+getitemname(Poison_Sphere), "Aqui as 30 "+getitemname(Flare_Sphere), "Aqui as 30 "+getitemname(Lighting_Sphere), "Aqui as 30 Esferas Cegantes","Aqui as 30 "+getitemname(Freezing_Sphere))) {
			case 1:
			mes "[N. A]";
			mes "S� me traga qualquer tipo";
			mes "que voc� possa achar.";
			close;
			case 2:
			if (countitem(Poison_Sphere) >= 30) {
				delitem(13205,30);
				gun_na = 103;
			}
			break;
			case 3:
			if (countitem(Flare_Sphere) >= 30) {
				delitem(13203,30);
				gun_na = 103;
			}
			break;
			case 4:
			if (countitem(Lighting_Sphere) >= 30) {
				delitem(13204,30);
				gun_na = 103;
			}
			break;
			case 5:
			if (countitem(Blind_Sphere) >= 30) {
				delitem(13206,30);
				gun_na = 103;
			}
			break;
			case 6:
			if (countitem(Freezing_Sphere) >= 30) {
				delitem(13207,30);
				gun_na = 103;
			}
			break;
		}
		if (gun_na != 103) {
			mes "[N. A]";
			mes "Eh? O qu�?";
			mes "Eu sou a �nica pessoa que n�o pode ver eles?";
			mes "Me traga mais!";
			close;
		}
		mes "[N. A]";
		mes "Oo, voc� achou todos eles!";
		mes "Eu tenho que revirar o laborat�rio da Lady Celena para achar essa haste tamb�m.";
		mes "Vamos fazer a troca!";
		next;
		mes "-Voc� deu as Esferas Elementais para o Coordenador de Pesquisa e ganhou a Haste de Metal em troca.-";
		next;
		mes "[N. A]";
		mes "Mr. F. Harrison est� muito bom..";
		mes "Tenho certeza que ele pode consertar a Retalhadora para voc�.";
		mes "Bem, te vejo depois!";
		close;
	} else if (gun_na == 103 || gun_na == 104) {
		mes "[N. A]";
		mes "Mr. F. Harrison est� muito bom..";
		mes "Tenho certeza que ele pode consertar a Retalhadora para voc�.";
		mes "Bem, te vejo depois!";
		close;
	}
	mes "[N. A]";
	mes "Ah. Ol�?";
	mes "Eu sou o Coordenador de desenvolvimento de armas de Einbroch.";
	mes "Meu nome � 'Diretor do Laborat�rio'.";
	mes "Voc� precisa de algo?";
	next;
	if (BaseJob != Job_Gunslinger) {
		select("Falar com ele");
		mes "[N. A]";
		mes "Se voc� ver Justiceiros por ai, fale para eles que eu tenho as mais novas armas.";
		mes "Se necess�rio, mande os aqui.";
		mes "Heheheheheheheheh...";
		close;
	}
	if (BaseLevel < 55) {
		select("Falar");
		mes "[N. A]";
		mes "... Destrui��o... Loucura...";
		mes "Hmm... Velocidade de ataque acima de 180...";
		next;
		mes "[N. A]";
		mes "Desculpa, eu estava desenvolvendo algumas armas novas.";
		mes "Por favor n�o me pertube.";
		close;
	}
	switch (select(((BaseLevel > 67) ? "Perguntar sobre 'Retalhadora'" : ""), "Perguntar sobre 'Andarilho'","Cancelar")) {
		case 1:
		mes "[N. A]";
		mes "Ah, voc� ouviu as not�cias ap�s o recente fim do desenvolvimento �?";
		next;
		mes "[N. A]";
		mes "^ff0000Retalhadora^000000 � o mais novo deselvolvimento por n�s, o Lab. de Armas de Fogo de Einbroch.";
		mes "� o mais novo tipo de Metralhadora que desenvolvemos.";
		mes "Enquanto ^ff0000Andarilho^000000 � uma boa arma assim como, a ^ff0000Retalhadora^000000 definitivamente tem um poder de fogo muito maior!";
		next;
		mes "[N. A]";
		mes "Devido a este poderoso poder de fogo, a Retalhadora tamb�m foi apelidada como a 'Assassina'.";
		next;
		mes "[N. A]";
		mes "Ainda assim,mesmo Justiceiros tem tido problemas para controlar uma arma t�o poderosa.";
		next;
		mes "[N. A]";
		mes "Acha que consegue dar conta disso?";
		next;
		if (select("N�o tenho certeza...","Claro que eu posso!!") == 1) {
			mes "[N. A]";
			mes "A ^ff0000Retalhadora^000000 � uma arma que voc� n�o poder� controlar sem fo�a.";
			mes "Eu irei te ver de novo quando voc� tiver confian�a suficiente para segurar este monstro.";
			close;
		} else {
			mes "[N. A]";
			mes "Aha, como auto-confiante voc� �!";
			mes "Mesmo assim, eu vejo pessoas com tanta auto-confian�a em qualquer lugar.";
			mes "Voc� precisar� provar isso";
			mes "Mas agora......Hmm.....";
			next;
			mes "[N. A]";
			mes "Hmmm......";
			next;
			mes "[N. A]";
			mes "Aha! J� sei!";
			next;
			mes "[N. A]";
			mes "Aqui, me traga  ^ff00001000 Garras de Orc^000000 e ^ff00001000 Ossos^000000.";
			mes "Se voc� puder me trazer estes itens, deixarei voc� usar a Retalhadora.";
			next;
			mes "[N. A]";
			mes "F�cil,n�o?";
			mes "V� e prove";
			mes "sua habilidade!Heheheheheh....";
			gun_na = 1;
			close;
		}
		case 2:
		mes "[N. A]";
		mes "Ah,voc� est� aqui para aprender sobre a ^ff0000Andarilho^000000 �?";
		next;
		mes "[N. A]";
		mes "A ^ff0000Andarilho^000000 � uma de muitas armas de alta classe desenvoldidas pela Lady Celena.";
		mes "� uma autom�tica Metralhadora que prov�m de alto poder de fogo, ao que � o maior dentre todas as armas de Justiceiros.";
		next;
		mes "[N. A]";
		mes "Claro, voc� precisa da Habilidade que permita que voc� controle Metralhadoras.";
		mes "Mas quem puder controlar Metralhadoras bem receber� ajuda total da ^ff0000Andarilho^000000.";
		next;
		mes "[N. A]";
		mes "Voc� quer tentar usar a ^ff0000Andarilho^000000?";
		next;
		if (select("Um, n�o","Sim!") == 1) {
			mes "[N. A]";
			mes "Se voc� n�o quer tentar volte aqui, outra hora.";
			close;
		} else {
			gun_na = 10;
			mes "[N. A]";
			mes "Desde que seja realmente dif�cil de achar os materiais para construir a ^ff0000Andarilho^000000.";
			mes "N�s apenas fazemos elas com pedidos, e n�s requeremos estes que querem usar a ^ff0000Andarilho^000000 para trazer a n�s os materiais.";
			next;
			mes "[N. A]";
			mes "Eu irei te falar os materiais necess�rios, apenas traga-os e n�s construiremos para voc�.";
			next;
			mes "[N. A]";
			mes "Para fabricar uma Andarilho, n�s precisamos de";
			mes "70 "+getitemname(Steel)+",";
			mes "5 "+getitemname(Elunium)+",";
			mes "3 "+getitemname(Oridecon)+",";
			mes "70 "+getitemname(Coal)+",";
			mes "50 "+getitemname(Screw)+",";
			mes "e tamb�m uma taxa de 50.000 zeny.";
			mes "Volte quando voc� tiver achado todos eles.";
			close;
		}
		case 3:
		mes "[N. A]";
		mes "Eu tenho as �ltimas not�cias das novas";
		mes "armas mas....acho que voc� est�";
		mes "muito ocupado para ouvi-l�s.";
		mes "Talvez da pr�xima vez.";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,205,284,6	script	Harrison#gunna	4_M_03,{
	if (gun_na == 100) {
		if (!checkweight(Crimson_Bolt,1)) {
			mes "[F. Harrison]";
			mes "Voc� est� sobrecarregado.";
			mes "Mesmo que eu lhe de a arma, voc� n�o poder� carrega-la.";
			mes "Por favor limpe seu ivent�rio.";
			close;
		}
		mes "[F. Harrison]";
		mes "Hmm... Oh?";
		mes "Ahh...... Eh?";
		next;
		mes "[F. Harrison]";
		mes "Heheh... Hmm... Huh...?";
		next;
		mes "[F. Harrison]";
		mes "Uh? Oh, umm... Heheh...";
		next;
		mes "[F. Harrison]";
		mes "Is-isto, huh?";
		mes "Eh... Heheh...";
		next;
		mes "[F. Harrison]";
		mes "Ahahahah! I uh...";
		next;
		mes "[F. Harrison]";
		mes "Essa coisa! BOOM!";
		next;
		mes "[F. Harrison]";
		mes "Bam bam! Eu ia atirar!";
		mes "Yeah!";
		next;
		mes "[F. Harrison]";
		mes "Mas ela resistiu!";
		mes "Ent�o eu fui 'BAM!' com minha m�o! MUAHAHAHAH!!";
		next;
		mes "[F. Harrison]";
		mes "E ela quebrou......";
		mes "*l�grimas*";
		next;
		mes "[F. Harrison]";
		mes "Eu me chamo de 'Dr. Qualquer coisa'.";
		mes "Eu queria consertar, mas eu n�o vejo os materiais para consertar...";
		mes "E os materiais s�o muito raros...";
		mes "*l�grimas*";
		next;
		mes "[F. Harrison]";
		mes "Umm... Desculpe por quebr�-la mas....";
		mes "Voc� poderia me arrumar os materiais necess�rios para consertar isso?";
		mes "Me traga estes materiais, e eu posso consertar isso, e mais modificarei isso para voc�!";
		mes "EU PROMETO!!";
		next;
		mes "[F. Harrison]";
		mes "Ent�o por favor me traga os materiais...";
		next;
		mes "[F. Harrison]";
		mes "Os materiais que eu preciso s�o";
		mes "10 A�os,";
		mes "2 Eluniums,";
		mes "1 Oridecon,";
		mes "20 Carv�es...";
		mes "E uma Haste Especial de Metal usada na Retalhadora.";
		mes "Acho que somente Lady Celena pode fabricar essas hastes........";
		next;
		mes "[F. Harrison]";
		mes "Mas primeiro, voc� precisa falar com o assistente da Lady Celena, o 'Diretor do Laborat�rio' e pedir pela ajuda dele.";
		mes "Est� � uma crian�a um pouco hist�rica, mas ela ser� de boa ajuda se voc� falar gentilmente com ela...";
		next;
		mes "[F. Harrison]";
		mes "Desculpe....";
		mes "Aqui, te emprestar a minha valiosa arma, 'Raio Vermelho'.";
		mes "Mas tenha certeza que voc� trar� todos estes materiais para mim assim que voc� os achar!!";
		mes "Me prometa!!!";
		gun_na = 101;
		getitem(Crimson_Bolt,1);
		close;
	} else if (gun_na == 101 || gun_na == 102) {
		mes "[F. Harrison]";
		mes "Os materiais que eu preciso s�o";
		mes "10 A�os,";
		mes "2 Eluniums,";
		mes "1 Oridecon,";
		mes "20 Carv�es...";
		mes "e uma Haste Especial de Metal usada na Retalhadora....";
		mes "Converse com o 'Diretor do Laborat�rio' para a sua ajuda com a haste.";
		close;
	} else if (gun_na == 103) {
		if (countitem(Steel) >= 10 && countitem(Elunium) >= 2 && countitem(Oridecon) >= 1 && countitem(Coal) >= 20 && countitem(Crimson_Bolt)) {
			delitem(Steel,10);
			delitem(Elunium,2);
			delitem(Oridecon,1);
			delitem(Coal,20);
			delitem(Crimson_Bolt,1);
			gun_na = 104;
			mes "[F. Harrison]";
			mes "Aha! Voc� conseguiu todos os materiais para mim!";
			mes "Eu irei come�ar com os";
			mes "reparos logo, por favor espere.....";
			close;
		} else{
			mes "[F. Harrison]";
			mes "Os materiais que eu preciso s�o";
			mes "10 A�os,";
			mes "2 Eluniums,";
			mes "1 Oridecon,";
			mes "20 Carv�es...";
			mes "E uma Haste Especial de Metal usada na Retalhadora...";
			mes "Ser� bom voc� arrumar a";
			mes "Haste Especial de Metal logo.";
			close;
		}
	} else if (gun_na == 104) {
		if (checkweight(Butcher_,1) == 0) {
			mes "Voc� est� com exceso de peso.";
			mes "Volte quando tiver se livrado de alguma coisa primeiro.";
			close;
		}
		gun_na = 0;
		getitem(Butcher_, 1);
		mes "[F. Harrison]";
		mes "Finalmente est� consertada, obrigado pelo seu esfor�o.";
		mes "Estou muito chateado por te-la quebrado, e obrigado pelo seu esfor�o.";
		mes "Me sinto culpado por somente consertar ela, ent�o eu adicionei um pouco mais de poder nela.";
		mes "Espero que seja de bom agrado pra voc�.";
		mes "Bem, desfrute.";
		close;
	} else if (gun_na == 0) {
		if (BaseJob != Job_Gunslinger) {
			mes "[F. Harrison]";
			mes "Cara estou t�o entediado...";
			mes "Me pergunto se h� algo interessante....";
			next;
			mes "[F. Harrison]";
			mes "Oh bem...irei apenas brincar com minha linda 'Raio Vermelho'.";
			close;
		}
		if (BaseLevel > 67 && countitem(Butcher)) {
			mes "[F. Harrison]";
			mes "Cara,estou t�o entediado me pergunto se h� algo interessante...";
			next;
			mes "[F. Harrison]";
			mes "Eh? Voc� � um Justiceiro?";
			mes "Eu n�o havia visto essa arma em suas m�o antes...";
			next;
			mes "[F. Harrison]";
			mes "Posso peg�-la?";
			mes "Por favor?";
			mes "Qual �, deixe me dar uma olhada!";
			mes "Estou entediado de mais aqui!";
			mes "Por favorrrrrrrrrr?";
			next;
			if (select("Agora n�o","Agora...") == 1) {
				mes "[F. Harrison]";
				mes "Hah! Voc� acha que � o �nico com uma arma legal?";
				mes "Bem eu tenho a minha linda Crimson Bolt!";
				mes "Hmph!!";
				close;
			}
			mes "[F. Harrison]";
			mes "Heheh...";
			mes "Est� � a mais nova Arma de fogo devenvolvida pelo Laborat�rio de Einbroch, chamada de Retalhadora Destruidora, �?";
			mes "Interessante...";
			mes "MUITO interessante....";
			next;
			mes "[F. Harrison]";
			mes "EI,deixe me testa-la um pouco,certo?";
			mes "N�o se preocupe, eu sei como cuidar de uma arma, eu n�o vou quebrar ela!";
			mes "Isto isto!";
			mes "Vamos l�";
			delitem(Butcher,1);
			gun_na = 100;
			close;
		}
	}
}
