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
		mes "Você não é um Justiceiro";
		mes "Vocês está me distraindo de meu trabalho.";
		mes "Vá embora";
		close;
	} else if (BaseLevel < 55) {
		mes "[Garrison]";
		mes "Meu nome é Garrison.";
		mes "Eu sou um mestre em criação de armas.";
		mes "A arma que eu fabrico também se chama Garrison.";
		mes "Eu a nomeei assim porque acho Garrison um nome legal e perfeito assim como eu.";
		close;
	}
	switch (gun_gs) {
		case 0:
		if (countitem(The_Garrison) < 1) {
			mes "[Garrison]";
			mes "Meu nome é Garrison.";
			mes "Eu sou um mestre em criação de armas.";
			mes "A arma que eu fabrico também se chama Garrison.";
			mes "Eu a nomeei assim porque acho Garrison um nome legal e perfeito assim como eu.";
			next;
			mes "[Garrison]";
			mes "Você está aqui para encomendar uma Garrison de mim?";
			next;
			callsub(SubGarrison);
		}
		mes "[Garrison]";
		mes "Hmm.";
		mes "O que está rolando?";
		mes "Você está aqui porque precisa de uma arma?";
		next;
		switch (select("Eu preciso de uma Garrison","Não mesmo","Cancelar")) {
			case 1:
			mes "[Garrison]";
			mes "Oh. Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Todos precisam de mim!";
			mes "Isso prova que minha arma,a Garrison,é a melhor de todas";
			mes "Então,você está me pedindo para fazer uma agora?";
			next;
			callsub(SubGarrison);
			case 2:
			mes "[Garrison]";
			mes "Hmm. Você está parecendo que está vagando sem uma missão.";
			mes "Se você tiver tempo,você me faria um favor?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "O que é?";
			next;
			mes "[Garrison]";
			mes "Mmm. Bem, eu recebi atualmente recebi uma carta declarando que há várias armas com defeito que eu criei chamada de Pistola de Seis Tiros";
			next;
			mes "[Garrison]";
			mes "Eu sou um perfeccionista, mas cara com minha idade, minha visão está escurecendo.";
			mes "Eu acho que talvez vendi a Pistola de Seis Tiros defeituosa.";
			next;
			mes "[Garrison]";
			mes "Então o que eu estou tentando dizer é,eu estou esperando alguém que ache partes sobressalentes para que eu possa usar para consertar as partes defeituosas da Pistola de Seis Tiros";
			next;
			mes "[Garrison]";
			mes "Se você me ajudar, eu irei por 1 slot nesta Garrison que você está segurando agora";
			mes "O que você me diz?";
			next;
			mes "[Garrison]";
			mes "Só pra você saber, se eu por o slot na sua Garrison, qualquer refinamento ou carta slotada irá desaparecer.";
			mes "Decida cuidadosamente";
			next;
			switch (select("Eu não gosto de como isso soa","Ok, vamos tentar")) {
				case 1:
				mes "[Garrison]";
				mes "Hmm, eu entendo, acho que vou procurar outra pessoa";
				close;
				case 2:
				mes "[Garrison]";
				mes "Oh,você irá?";
				mes "Estou tão agradecido";
				mes "Estes são os materiais que eu preciso para fazer as partes sobresalentes";
				next;
				mes "[Garrison]";
				mes "10 "+getitemname(Steel)+",";
				mes "1 "+getitemname(Screw)+",";
				mes "10 "+getitemname(Emveretarcon)+",";
				mes "30 "+getitemname(Coal)+", e";
				mes "10 "+getitemname(Elunium)+".";
				mes "Não se esqueça.";
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
			mes "Não se esqueça.";
			close;
		}
		mes "[Garrison]";
		mes "Oh você voltou com o que eu preciso?";
		mes "Estou tão agradecido";
		mes "Oh... Tem outro favor que eu preciso que seja feito.";
		next;
		mes "[Garrison]";
		mes "Eu preciso entregar as partes sobressalentes uma vez que eu as fiz para outra pessoa.";
		mes "Mas eu tenho muito trabalho por aqui";
		next;
		mes "[Garrison]";
		mes "Desculpe pedir, mas eu estava esperando que você pudesse entregar o que eu fiz desses materiais para outra pessoa.";
		next;
		mes "[Garrison]";
		mes "Enquanto eu espero.";
		mes "Vou fazer as preparações para slotar sua Garrison, como prometido.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmm, eu não quero fazer isso,mas eu irei fazer de qualquer forma.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ok.";
		next;
		mes "[Garrison]";
		mes "Oh,muito obrigado";
		mes "Então entregue isto para uma pessoa chamada Ravery.";
		mes "Ele mora na favela de Lighthalzen";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Você recebeu a boa encomenda de Garrison";
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
		mes "Você recebeu as boas encomendas de Garrison.";
		mes "Vamos entrega-las para a pessoa chamada Ravery,que mora na favela de Lighthalzen";
		close;
		case 3:
		mes "[Garrison]";
		mes "Oh como está sua viagem?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Gyah";
		mes "Aquele homem tentou me atacar assim que me viu.";
		mes "Mal escapo da morte!";
		next;
		mes "[Garrison]";
		mes "Ahh não";
		mes "Eu não tinha ideia de que a pessoa que me mandou a carta estava na verdade planejando me matar.";
		mes "Ele provavelmente foi mandado de uma guilda de nossos inimigos...";
		next;
		mes "[Garrison]";
		mes "Parece que eu lhe mandei sem intenções para uma missão muito perigosa";
		next;
		mes "[Garrison]";
		mes "Me desculpe";
		mes "Você também deve saber, mas há pessoas más planejando atacar a Guilda dos Justiceiros em todos os lugares.";
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
			mes "Você vendeu sua arma enquanto você esteve fora?";
			mes "Eu disse que slotaria sua arma, mas nunca disse que slotaria uma arma que não está aqui.";
			mes "Vá e pegue sua Garrison e traga-a aqui";
			gun_gs = 4;
			close;
		}
		mes "[Garrison]";
		mes "Deixe-me ver";
		mes "*tonk* *tonk* *thump* *whump*";
		mes "Aqui está sua Garrison modificada.";
		mes "Faça bom uso";
		delitem(The_Garrison,1);
		getitem(The_Garrison_,1);
		gun_gs = 5;
		close;
		case 4:
		if (!countitem(The_Garrison)) {
			mes "[Garrison]";
			mes "Vá e pegue sua Garrison e traga-a aqui";
			close;
		}
		mes "[Garrison]";
		mes "Ah,aqui está";
		mes "Aqui está sua Garrison modificada.";
		mes "Faça bom uso";
		delitem(The_Garrison,1);
		getitem(The_Garrison_,1);
		gun_gs = 5;
		close;
		case 5:
		mes "[Garrison]";
		mes "Hmm você está aqui de novo?";
		mes "Qual o problema?";
		mes "Você voltou porque precisa de uma arma?";
		mes "De que você precisa?";
		next;
		switch (select("Garrison","Garrison[2]","Cancelar")) {
			case 1:
			callsub(SubGarrison);
			case 2:
			callsub(SubGarrison_);
			case 3:
			mes "[Garrison]";
			mes "Certo.";
			mes "Então te vejo por aí.";
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
	mes "e há uma taxa de 30,000 Zenys";
	mes "Bem, você quer uma?";
	next;
	switch (select("Talvez mais tarde","Sim, faça pra mim","Cancelar")) {
		case 1:
		mes "[Garrison]";
		mes "Hmmm trabalhei pesado por nada";
		mes "Pense sobre isso.";
		mes "Venha me ver quando tiver decidido";
		close;
		case 2:
		if ((countitem(Steel) < 50) || (countitem(Screw) < 20) || (countitem(Oridecon) < 1) || (countitem(Coal) < 50) ||(countitem(Elunium) < 3)) {
			mes "[Garrison]";
			mes "Você não trouxe materiais suficientes";
			mes "Para criar uma Garrison, eu preciso de...";
			mes "50 "+getitemname(Steel)+",";
			mes "20 "+getitemname(Screw)+",";
			mes "1 "+getitemname(Oridecon)+",";
			mes "50 "+getitemname(Coal)+",";
			mes "3 "+getitemname(Elunium)+",";
			mes "e há uma taxa de 30,000 Zenys";
			mes "Não esqueça";
			close;
		} else if (Zeny < 30000) {
			mes "[Garrison]";
			mes "Você precisa de mais Zeny";
			mes "Mais Zeny";
			close;
		} else if (!checkweight(The_Garrison,1)) {
			mes "[Garrison]";
			mes "Não há espaço no seu inventário para minha criação";
			mes "Abra uma vaga";
			mes "Em seu inventário, e então";
			mes "Venha me ver";
			close;
		}
		mes "[Garrison]";
		mes "Hmm, parece que há a quantia exata de materiais e Zeny.";
		mes "Aqui está sua Garrison";
		mes "Se você precisar de outra, venha me ver.";
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
	mes "Bem, você quer uma?";
	next;
	switch (select("Talvez mais tarde","Sim, faça pra mim","Cancelar")) {
		case 1:
		mes "[Garrison]";
		mes "Você me fez trabalhar a toa";
		mes "Volte quando vocè tiver decidido";
		close;
		case 2:
		if ((countitem(Steel) < 10) || (countitem(Screw) < 10) || (countitem(Emveretarcon) < 10) || (countitem(Coal) < 30) || (countitem(Elunium) < 1) || (countitem(The_Garrison) < 1)) {
			mes "[Garrison]";
			mes "Você não trouxe materiais suficientes";
			mes "Para fazer uma Garrison, eu preciso de";
			mes "10 "+getitemname(Steel)+",";
			mes "10 "+getitemname(Screw)+",";
			mes "10 "+getitemname(Emveretarcon)+", e";
			mes "30 "+getitemname(Coal)+",";
			mes "1 "+getitemname(Elunium)+",";
			mes "1 "+getitemname(The_Garrison)+".";
			mes "Não se esqueça";
			close;
		} else if (!checkweight(The_Garrison_, 1)) {
			mes "[Garrison]";
			mes "Não há espaço em seu inventário para minha criação.";
			mes "Faça algum espaço em seu inventário, e então Venha me ver.";
			close;
		}
		mes "[Garrison]";
		mes "Hmm,parece que tem a quantidade certa de materiais e Zeny.";
		mes "Aqui está uma Garrison modificada e com slot.";
		mes "Se você precisar de outra, venha me ver.";
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
		mes "Com licença.";
		mes "Olá, eu estou aqui para repor as partes da defeituosa arma dos Justicei..";
		next;
		mes "[Ravey]";
		mes "Você!!!";
		mes "Huuut!!";
		mes "Morra!!!";
		gun_gs = 3;
		percentheal(100,0);
		percentheal(-90,0);
		next;
		mes "^bb0000O homem chamado Ravery ataca repentinamente, como se ele estivesse esperando a palavra Justiceiro^000000";
		mes "Você quase morreu";
		next;
		mes "Você foje sem olhar pra trás";
		mes "Vamos voltar rápido para Garrison";
		close;
	}
	if (gun_gs == 3) {
		mes "^bb0000O homem chamado Ravery ataca repentinamente, como se ele estivesse esperando a palavra Justiceiro^000000";
		mes "Você quase morreu";
		next;
		mes "Você foje sem olhar pra trás";
		mes "Vamos voltar rápido para Garrison";
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
		mes "Como você está?";
		mes "Eu tenho sido apontada como a nova Criadora de Armas de Justiceiros.";
		mes "Meu nome é Ingrid";
		next;
		mes "[Ingrid]";
		mes "De qualquer forma,você não parece ser um membro da Guilda de Justiceiros.";
		mes "Então eu não posso lhe ajudar em nada. Desculpe";
		close;
	}
	switch (gun_inf) {
		case 0:
		mes "[Ingrid]";
		mes "Como você está?";
		mes "Eu tenho sido apontada como a nova Criadora de Armas de Justiceiros. Meu nome é Ingrid";
		mes "É um prazer servir você!";
		next;
		mes "[Ingrid]";
		mes "Há tão pouco tempo que eu comecei a trabalhar.";
		mes "Mas eu irei fazer o meu melhor para lhe ajudar";
		next;
		mes "[Ingrid]";
		mes "Ahh ... Estou tão anciosa.";
		mes "Como agora,eu estou tendo o trabalho de criar uma arma chamada O Inferno pelos clientes";
		next;
		mes "[Ingrid]";
		mes "A Inferno é a arma mais avançada de nosso laboratório.";
		next;
		mes "[Ingrid]";
		mes "Tem um incrível poder e precisão, e um desenho ergonômino.";
		mes "Então ela pode ser facilmente segurada e mínimiza significantemente a pressão quando se atira.";
		mes "É uma arma digna de ser chama de a verdadeira arma para qualquer Justiceiro.";
		mes "huff huff...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Você sabe muito sobre isso.";
		mes ".....";
		next;
		mes "[Ingrid]";
		mes "Ah. É claro, eu sou a pessoa que desenhou essa arma.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Wooow isto é incrível";
		next;
		mes "[Ingrid]";
		mes "Ah Oops...";
		mes "Eu acabei de divugar-la?";
		mes "Eu ainda não sou comparada a professora Serena.";
		next;
		mes "[Ingrid]";
		mes "Na verdade, eu também queria me tornar uma Justiceira.";
		mes "Mas graças a minha fraca determinação fisíca, tive que desistir";
		next;
		mes "[Ingrid]";
		mes "Enquanto eu me aplicava para me tornar uma Justiceira.";
		mes "Eu tive muita sorte da professora Serena ter visto meus talentos";
		mes "Com a ajuda dela, estou aonde estou ajudando com a manufatura e venda de armas de Justiceiros.";
		next;
		mes "[Ingrid]";
		mes "Eu continuo com remorso de não ter sido capaz de virar uma Justiceira.";
		mes "Mas ao menos meu irmão, que fez o teste em meu lugar, passou e se tornou um.";
		next;
		mes "[Ingrid]";
		mes "Estou feliz desde que eu sinto que, meu irmão é capaz de cumprir nosso sonho.";
		next;
		mes "[Ingrid]";
		mes "Haha olhe para mim lhe falando todas essas coisas quando você nem se quer perguntou.";
		mes "Desculpe.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Não,tudo bem";
		mes "Você pode não ter se tornado uma Justiceira, mas acho que você se tornou uma grande pessoa.";
		next;
		mes "[Ingrid]";
		mes "Verdade?";
		mes "Obrigada, tentarei o meu melhor";
		next;
		mes "[Ingrid]";
		mes "Para produzir a Inferno";
		mes "Eu preciso de 100 Placas de ferro usadas, 10 Oridecons, 50 Parafusos enferrujados velhos, 100 Corações incandescentes, e 200,000Zeny";
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
			mes "Aqui estão os materiais de novo";
			next;
			mes "[Inferno]";
			mes "Para produzir uma Inferno.";
			mes "Eu preciso de";
			mes "100 "+getitemname(Old_Steel_Plate)+",";
			mes "50 "+getitemname(Screw)+",";
			mes "10 "+getitemname(Oridecon)+",";
			mes "100 "+getitemname(Burning_Heart)+",";
			mes "e 200.000 Zenys";
			mes "Você deve me trazer o número EXATO de materiais";
			mes "Por favor não se esqueça";
			gun_inf = 1;
			close;
		}
		case 1:
		callsub(SubInferno);
		case 2:
		mes "[Ingrid]";
		mes "Olá,você voltou";
		mes "Você está aqui porque precisa de uma Inferno?";
		next;
		switch (select("Não, eu voltei só porque...","Sim, me faça uma Inferno")) {
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
		mes "Você deve me trazer o número EXATO de materiais";
		mes "Por favor não se esqueça";
		close;
	}else if (!checkweight(Inferno,1)) {
		mes "[Ingrid]";
		mes "Parece que você tem muitos itens para minha criaçâo,entao eu não posso lhe dar isso.";
		mes "Por que você nao volta e me ver de novo quando tiver pronto para receber isto?";
		close;
	} else {
		mes "[Ingrid]";
		mes "Eu vejo que você tem a quantia própria de materiais e Zeny";
		mes "Aqui está a Inferno que eu criei para você.";
		mes "Faça bom uso.";
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
		mes "Eu irei melhorar todas as armas de mãos nuas neste mundo!!";
		next;
		mes "[Vanessa]";
		mes "Hmm?!";
		mes "Quem é você?";
		mes "Você está interrompendo meu treino!";
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
		mes "Você é um Justiceiro, huh?";
		mes "Por que você está interrompendo meus exercícios e eu ficando em frente a mim?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "É apenas excercícios de observação parce bom...";
		mes ".............";
		next;
		mes "[Vanessa]";
		mes "Oh! Você gosta de artes marcíais?";
		mes "Venha aqui, eu irei imobilizar você em uma queda de braços.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "N Não obrigado";
		next;
		mes "[Vanessa]";
		mes "Venha aqui";
		mes "-Bam! Bam!-";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "AahUgh Não faça isso";
		mes "Aa..Aaaahhhh!!";
		mes "Argh";
		mes "-Sons de algo quebrando";
		mes "Owww";
		mes "*Lágrimas*";
		next;
		mes "[Vanessa]";
		mes "Hmm...eu coloquei muita força..";
		mes "Hm";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem obviamente";
		mes "Idiota! Idiota!!";
		mes "*lágrimas*";
		next;
		mes "[Vanessa]";
		mes "Ummumm";
		mes "Desculpe";
		mes "Okey, okey,";
		mes "Não chore";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "*lágrimas*";
		next;
		mes "[Vanessa]";
		mes "Okey okey..";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "*lágrimas*";
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
		mes "Vou lhe fazer uma arma se você pegar uns materiais...";
		next;
		mes "[Vanessa]";
		mes "Eu sou Vanessa Louise.";
		mes "Uma original Artísta Marcial Aplicadora mas eu peguei o caminho errado e eu estou numa furada fazendo armas.";
		mes "Oh meu deus oh minha minha vida miserável";
		next;
		mes "[Vanessa]";
		mes "A arma que eu crio é chama de Destruidora";
		next;
		mes "[Vanessa]";
		mes "Eu a expeciamente nomiei assim";
		mes "depois de uma tecníca que eu usei numa arena.";
		mes "Hehe";
		next;
		mes "[Vanessa]";
		mes "Primeiro para fazer um Destruidora precisarei de alguns materiais.";
		next;
		switch (select("Talvez da próxima vez","Certo")) {
			case 1:
			mes "[Vanessa]";
			mes "Mm Isto é tão, será uma oportunidade para você.";
			mes "Você irá lamentar isto, então lhe vejo depois.";
			close;
			case 2:
			mes "[Vanessa]";
			mes "Para fazer uma Destruidora";
			mes "Você precisa de";
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
		mes "Oh você está de volta?";
		mes "Como você está agora?";
		mes "Tem um novo item no inventário.";
		mes "Vá em frente e escolha.";
		next;
		switch (select("Destruídora","Destruídora[1]","Cancelar")) {
			case 1:
			mes "[Vanessa]";
			mes "Yeah, isto está bom.";
			mes "Para uma Destruidora normal.";
			mes "Você precisa de";
			mes "50 "+getitemname(Old_Steel_Plate)+",";
			mes "70 "+getitemname(Screw)+",";
			mes "5 "+getitemname(Oridecon)+" e";
			mes "100,000 Zenys para cria-la.";
			next;
			switch (select("Talvez mais tarde","Certo")) {
				case 1:
				mes "[Vanessa]";
				mes "O QUE? Qual é?";
				mes "O que há para se pensar?";
				mes "Ok, bem, pense sobre isso e volte...";
				close;
				case 2:
				callsub(SubDestroyer);
			}
			case 2:
			mes "[Vanessa]";
			mes "Oh A Destruídora[1] é iferente da Destruidora normal.";
			mes "Eu quero que você encontre um dos raros itens que eu estou colecionando.";
			mes "Então eu darei uma pra você.";
			next;
			mes "[Vanessa]";
			mes "Esou procurando por";
			mes "Dedos Afiados[2]";
			mes "5 Oridecons também.";
			next;
			switch (select("Talvez da próxima vez","OK! Farei!")) {
				case 1:
				mes "[Vanessa]";
				mes "O que qual é";
				mes "O que há para se pensar?";
				mes "Bem, pense sobre isso e volte...";
				close;
				case 2:
				callsub(SubDestroyer_);
			}
			case 3:
			mes "[Vanessa]";
			mes "Hmm Yeah";
			mes "Tome seu tempo.";
			mes "Talves você gostaria de poupar comigo?";
			close;
		}
	}

	SubDestroyer:
	if ((countitem(Old_Steel_Plate) < 50) || (countitem(Screw) < 70) || (countitem(Oridecon) < 5) || Zeny < 100000) {
		mes "[Vanessa]";
		mes "Para fazer uma Destruidora";
		mes "Você precisa de";
		mes "50 "+getitemname(Old_Steel_Plate)+",";
		mes "70 "+getitemname(Screw)+",";
		mes "5 "+getitemname(Oridecon)+"e";
		mes "e uma taxa de 100,000 Zenys.";
		close;
	} else if (!checkweight(Destroyer,1)) {
		mes "[Vanessa]";
		mes "Parece que você não está possibilitado de carregar minha criação com você mesmo se eu tiver feito isso.";
		mes "Vá e limpe seu iventório um pouco.";
		close;
	} else {
		mes "[Vanessa]";
		mes "Okay Muito bem";
		mes "Tudo checado";
		mes "Você tem os materiais perfeitos e Zeny.";
		mes "Aqui está a Destruidora que eu criei a tempo para você.";
		mes "Faça bom uso.";
		Zeny -= 100000;
		delitem(Old_Steel_Plate,50);
		delitem(Oridecon,5);
		delitem(Screw,70);
		getitem(Destroyer,1);
		if (gunst == 1) { gunst = 2; }
		next;
		mes "[Vanessa]";
		mes "Se você precisar novamente venha depois.";
		mes "Venha qualquer hora.";
		mes "Próxima vez eu irei usar um diferente tipo de técnica de mãos nuas.";
		close;
	}

	SubDestroyer_:
	if ((countitem(Finger_) < 1) || (countitem(Oridecon) < 5)) {
		mes "[Vanessa]";
		mes "Os materiais requeridos são";
		mes "1 Dedos Afiados[2]";
		mes "e 5 Oridecons.";
		close;
	} else if (!checkweight(Destroyer_,1)) {
		mes "[Vanessa]";
		mes "Não há espaço em seu iventário.";
		mes "Mesmo eu tendo feito uma.";
		mes "Você não parece hábil para carregar isso.";
		mes "Venha me ver depois que você tiver limpado seu iventório.";
		close;
	} else {
		mes "[Vanessa]";
		mes "Okay Muito bem.";
		mes "Aqui está a Destruidora Slotada que eu fiz a tempo para você.";
		mes "Faça bom uso.";
		delitem(Finger_,1);
		delitem(Oridecon,5);
		getitem(Destroyer_,1);
		next;
		mes "[Vanessa]";
		mes "Se você precisar de outra venha depois.";
		mes "Volte a qualquer hora";
		mes "Próxima vez eu irei usar um diferente tipo de técnica de mãos nuas.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Retalhadora / Retalhadora[1] / Andarilho / Raio Vermelho ] -
// ------------------------------------------------------------------
que_ng,149,178,4	script	Diretor do Laboratório#gunna	4_F_ALCHE,{
	if (gun_na == 1) {
		if (countitem(Nail_Of_Orc) > 999 && countitem(Skel_Bone) > 999) {
			delitem(Nail_Of_Orc,1000);
			delitem(Skel_Bone,1000);
			gun_na = 2;
			mes "[N. A]";
			mes "Ahh,está tudo aqui!";
			mes "Ahh,e eu estava precocupado com nada estarei habilitado a alçar minha ^ff0000Retalhadora^000000 quando eu tiver terminado de cria-la";
			next;
			mes "[N. A]";
			mes "Tá bom, eu darei a ^ff0000Retalhadora^000000 para você.";
			mes "Mesmo assim, nós não trabalhamos de graça, então nós precisamos cobrar você por isso.";
			mes "Também, você precisa obter permissão para usar a Retalhadora de Lady Celena.";
			next;
			mes "[N. A]";
			mes "Uma vez que você tenha pego a permissão, eu irei dar a Retalhadora para você, após pagar a taxa de 100.000 Zenys";
			close;
		} else {
			mes "[N. A]";
			mes "Você precisa encontrar ^ff00001000 Garra de Orc^000000 e ^ff00001000 Osso^000000 ainda?";
			mes "Se você acha que é muito difícil,";
			mes "você pode escolher desistir";
			next;
			if (select("Eu não estou desistindo!","Eu desisto..") == 1) {
				mes "[N. A]";
				mes "Tudo bem, confio em você";
				mes "Boa sorte";
				close;
			} else {
				mes "[N. A]";
				mes "Você está desistindo huh?";
				mes "Bem, eu admito que o teste é um pouco difícil.";
				mes "Mas você não pode alçar esta arma se não consegue fazer o teste.";
				mes "Você deve voltar depois para pegar o desafio de novo";
				gun_na = 0;
				close;
			}
		}
	} else if (gun_na == 2) {
		mes "[N. A]";
		mes "Eu ja consegui a permissão da Lady Serena para deixar você usar a Retalhadora.";
		mes "Você pode usar uma vez que tenha me pago 100.000 zeny.";
		mes "Você quer pagar agora?";
		next;
		if (select("Não","Sim") == 1) {
			mes "[N. A]";
			mes "Tudo bem.";
			mes "Irei esperar o seu retorno";
			close;
		} else {
			if (Zeny < 100000) {
				mes "[N. A]";
				mes "Uh, eu não acho que você tem dinheiro sufuciente consigo.";
				mes "Venha me ver com o dinheiro certo?";
				close;
			}
			if (!checkweight(Butcher,1)) {
				mes "[N. A]";
				mes "Você está com excesso de peso.";
				mes "Mesmo se eu lhe der a arma, você não pode carrega-la.";
				mes "Por favor limpe seu inventário.";
				close;
			}
			Zeny -= 100000;
			gun_na = 0;
			getitem(Butcher,1);
			mes "[N. A]";
			mes "1,2,3,4,5";
			mes "6... 99997, 99998, 99999...";
			mes "100000. *ding!* Muito bem!!";
			mes "A taxa está limpa agora.";
			mes "Você deve pegar a ^ff0000Retalhadora^000000 agora!";
			next;
			mes "[N. A]";
			mes "Sr. F. Harrison de Lighthalzen está muito interessado em seu novo brinquedo lá.";
			mes "Mostre pra ele alguma vez.";
			mes "Ele ficará muito feliz.";
			next;
			mes "[N. A]";
			mes "Faça bom uso disto.";
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
			mes "Aha,você me trouxe todos os materiais.";
			mes "Aqui, deixe-me apressar para isso sair rápido!";
			mes "Isso vai me levar algum tempo, então espere.";
			close;
		} else {
			mes "[N. A]";
			mes "Eh? Você não tem os materiais com você ainda?";
			next;
			mes "[N. A]";
			mes "Para fazer a Andarilho, eu irei precisar de";
			mes "70 "+getitemname(Steel)+",";
			mes "5 "+getitemname(Elunium)+",";
			mes "3 "+getitemname(Oridecon)+",";
			mes "70 "+getitemname(Coal)+",";
			mes "50 "+getitemname(Screw)+",";
			mes "e também uma taxa de 50.000 zeny.";
			mes "Volte assim que tiver tudo pronto";
			next;
			mes "[N. A]";
			mes "Se você não quer mais isso você pode cancelar o pedido";
			next;
			if (select("Não cancele","Cancele isso") == 1) {
				mes "[N. A]";
				mes "Bem,venha me ver com os materiais.";
				mes "Estarei esperando.";
				close;
			} else {
				mes "[N. A]";
				mes "Tudo certo, os pedidos para fazer uma Andarilho para você está cancelado.";
				mes "Lhe desejo boa sorte no futuro.";
				gun_na = 0;
				close;
			}
		}
	} else if (gun_na == 11) {
		if (!checkweight(Drifter,1)) {
			mes "[N. A]";
			mes "Você está com excesso de peso.";
			mes "Mesmo se eu fizer a arma, você não poderá carrega-la.";
			mes "Por favor limpe seu iventário";
			close;
		}
		gun_na = 0;
		getitem(Drifter,1);
		mes "[N. A]";
		mes "Ahh, aqui está completa para você o Andarilho.";
		next;
		mes "[N. A]";
		mes "Por favor aprenda a usar as Metralhadoras direito.";
		mes "A louca destruição vai ser certamente útil para você mentalmente.";
		close;
	} else if (gun_na == 101) {
		mes "[N. A]";
		mes "Ah, olá?";
		mes "Eu sou o coordenador do desenvolvimento de Armas de Einbroch.";
		mes "Meu nome é 'Diretor de laboratório'.";
		mes "Você precisa de algo?";
		next;
		select("Eu preciso de uma Haste Especial de Metal");
		mes "[N. A]";
		mes "Huh...? Ei,você nao é aquele cara";
		mes "que venho aqui com uma";
		mes "Retalhadora um tempo atrás? Como está a";
		mes "Retalhadora?";
		next;
		mes "[N. A]";
		mes "....... O QUE?!? VOCÊ A QUEBROU!?";
		mes "Eu achei que vocè fosse capaz de";
		mes "usá-la bem... Você me desapontou!!!";
		next;
		mes "[N. A]";
		mes "Você traiu a minha confiança em você!";
		mes "Seu traidor! Traidor!! TRAIDOR!!!!";
		next;
		select("Explica tudo");
		mes "[N. A]";
		mes "...... Bem.";
		mes "Então foi  Mr. F. Harrison que quebrou? huh?";
		mes "Desculpe, eu não devia ter suspeitado de você";
		next;
		mes "[N. A]";
		mes "Lady Celena tem a haste de metal especial que você quer, mas o doutor não está agora, e ninguém mais sabe aonde isso está";
		next;
		mes "[N. A]";
		mes "Eu tenho outra pesquisa pra você agora então eu não posso perder meu tempo procurando por...Grr...";
		mes "Preciso das Esferas Elementais para continuar com minha pesquisa...";
		next;
		select("Faça uma oferta a ele");
		mes "[N. A]";
		mes "Uma oferta? Tipo o que?";
		next;
		select("Nós achamos coisas por cada oferta");
		mes "[N. A]";
		mes "Hmm... Parece interessante.";
		mes "Bem, de acordo com a oferta.";
		mes "Eu irei procurar a haste pra você enquanto você me tras as";
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
		mes "Você trouxe as eferas?";
		next;
		switch (select("Não","Aqui as 30 "+getitemname(Poison_Sphere), "Aqui as 30 "+getitemname(Flare_Sphere), "Aqui as 30 "+getitemname(Lighting_Sphere), "Aqui as 30 Esferas Cegantes","Aqui as 30 "+getitemname(Freezing_Sphere))) {
			case 1:
			mes "[N. A]";
			mes "Só me traga qualquer tipo";
			mes "que você possa achar.";
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
			mes "Eh? O quê?";
			mes "Eu sou a única pessoa que não pode ver eles?";
			mes "Me traga mais!";
			close;
		}
		mes "[N. A]";
		mes "Oo, você achou todos eles!";
		mes "Eu tenho que revirar o laboratório da Lady Celena para achar essa haste também.";
		mes "Vamos fazer a troca!";
		next;
		mes "-Você deu as Esferas Elementais para o Coordenador de Pesquisa e ganhou a Haste de Metal em troca.-";
		next;
		mes "[N. A]";
		mes "Mr. F. Harrison está muito bom..";
		mes "Tenho certeza que ele pode consertar a Retalhadora para você.";
		mes "Bem, te vejo depois!";
		close;
	} else if (gun_na == 103 || gun_na == 104) {
		mes "[N. A]";
		mes "Mr. F. Harrison está muito bom..";
		mes "Tenho certeza que ele pode consertar a Retalhadora para você.";
		mes "Bem, te vejo depois!";
		close;
	}
	mes "[N. A]";
	mes "Ah. Olá?";
	mes "Eu sou o Coordenador de desenvolvimento de armas de Einbroch.";
	mes "Meu nome é 'Diretor do Laboratório'.";
	mes "Você precisa de algo?";
	next;
	if (BaseJob != Job_Gunslinger) {
		select("Falar com ele");
		mes "[N. A]";
		mes "Se você ver Justiceiros por ai, fale para eles que eu tenho as mais novas armas.";
		mes "Se necessário, mande os aqui.";
		mes "Heheheheheheheheh...";
		close;
	}
	if (BaseLevel < 55) {
		select("Falar");
		mes "[N. A]";
		mes "... Destruição... Loucura...";
		mes "Hmm... Velocidade de ataque acima de 180...";
		next;
		mes "[N. A]";
		mes "Desculpa, eu estava desenvolvendo algumas armas novas.";
		mes "Por favor não me pertube.";
		close;
	}
	switch (select(((BaseLevel > 67) ? "Perguntar sobre 'Retalhadora'" : ""), "Perguntar sobre 'Andarilho'","Cancelar")) {
		case 1:
		mes "[N. A]";
		mes "Ah, você ouviu as notícias após o recente fim do desenvolvimento é?";
		next;
		mes "[N. A]";
		mes "^ff0000Retalhadora^000000 é o mais novo deselvolvimento por nós, o Lab. de Armas de Fogo de Einbroch.";
		mes "É o mais novo tipo de Metralhadora que desenvolvemos.";
		mes "Enquanto ^ff0000Andarilho^000000 é uma boa arma assim como, a ^ff0000Retalhadora^000000 definitivamente tem um poder de fogo muito maior!";
		next;
		mes "[N. A]";
		mes "Devido a este poderoso poder de fogo, a Retalhadora também foi apelidada como a 'Assassina'.";
		next;
		mes "[N. A]";
		mes "Ainda assim,mesmo Justiceiros tem tido problemas para controlar uma arma tão poderosa.";
		next;
		mes "[N. A]";
		mes "Acha que consegue dar conta disso?";
		next;
		if (select("Não tenho certeza...","Claro que eu posso!!") == 1) {
			mes "[N. A]";
			mes "A ^ff0000Retalhadora^000000 é uma arma que você não poderá controlar sem foça.";
			mes "Eu irei te ver de novo quando você tiver confiança suficiente para segurar este monstro.";
			close;
		} else {
			mes "[N. A]";
			mes "Aha, como auto-confiante você é!";
			mes "Mesmo assim, eu vejo pessoas com tanta auto-confiança em qualquer lugar.";
			mes "Você precisará provar isso";
			mes "Mas agora......Hmm.....";
			next;
			mes "[N. A]";
			mes "Hmmm......";
			next;
			mes "[N. A]";
			mes "Aha! Já sei!";
			next;
			mes "[N. A]";
			mes "Aqui, me traga  ^ff00001000 Garras de Orc^000000 e ^ff00001000 Ossos^000000.";
			mes "Se você puder me trazer estes itens, deixarei você usar a Retalhadora.";
			next;
			mes "[N. A]";
			mes "Fácil,não?";
			mes "Vá e prove";
			mes "sua habilidade!Heheheheheh....";
			gun_na = 1;
			close;
		}
		case 2:
		mes "[N. A]";
		mes "Ah,você está aqui para aprender sobre a ^ff0000Andarilho^000000 é?";
		next;
		mes "[N. A]";
		mes "A ^ff0000Andarilho^000000 é uma de muitas armas de alta classe desenvoldidas pela Lady Celena.";
		mes "É uma automática Metralhadora que provém de alto poder de fogo, ao que é o maior dentre todas as armas de Justiceiros.";
		next;
		mes "[N. A]";
		mes "Claro, você precisa da Habilidade que permita que você controle Metralhadoras.";
		mes "Mas quem puder controlar Metralhadoras bem receberá ajuda total da ^ff0000Andarilho^000000.";
		next;
		mes "[N. A]";
		mes "Você quer tentar usar a ^ff0000Andarilho^000000?";
		next;
		if (select("Um, não","Sim!") == 1) {
			mes "[N. A]";
			mes "Se você não quer tentar volte aqui, outra hora.";
			close;
		} else {
			gun_na = 10;
			mes "[N. A]";
			mes "Desde que seja realmente difícil de achar os materiais para construir a ^ff0000Andarilho^000000.";
			mes "Nós apenas fazemos elas com pedidos, e nós requeremos estes que querem usar a ^ff0000Andarilho^000000 para trazer a nós os materiais.";
			next;
			mes "[N. A]";
			mes "Eu irei te falar os materiais necessários, apenas traga-os e nós construiremos para você.";
			next;
			mes "[N. A]";
			mes "Para fabricar uma Andarilho, nós precisamos de";
			mes "70 "+getitemname(Steel)+",";
			mes "5 "+getitemname(Elunium)+",";
			mes "3 "+getitemname(Oridecon)+",";
			mes "70 "+getitemname(Coal)+",";
			mes "50 "+getitemname(Screw)+",";
			mes "e também uma taxa de 50.000 zeny.";
			mes "Volte quando você tiver achado todos eles.";
			close;
		}
		case 3:
		mes "[N. A]";
		mes "Eu tenho as últimas notícias das novas";
		mes "armas mas....acho que você está";
		mes "muito ocupado para ouvi-lás.";
		mes "Talvez da próxima vez.";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,205,284,6	script	Harrison#gunna	4_M_03,{
	if (gun_na == 100) {
		if (!checkweight(Crimson_Bolt,1)) {
			mes "[F. Harrison]";
			mes "Você está sobrecarregado.";
			mes "Mesmo que eu lhe de a arma, você não poderá carrega-la.";
			mes "Por favor limpe seu iventário.";
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
		mes "Então eu fui 'BAM!' com minha mão! MUAHAHAHAH!!";
		next;
		mes "[F. Harrison]";
		mes "E ela quebrou......";
		mes "*lágrimas*";
		next;
		mes "[F. Harrison]";
		mes "Eu me chamo de 'Dr. Qualquer coisa'.";
		mes "Eu queria consertar, mas eu não vejo os materiais para consertar...";
		mes "E os materiais são muito raros...";
		mes "*lágrimas*";
		next;
		mes "[F. Harrison]";
		mes "Umm... Desculpe por quebrá-la mas....";
		mes "Você poderia me arrumar os materiais necessários para consertar isso?";
		mes "Me traga estes materiais, e eu posso consertar isso, e mais modificarei isso para você!";
		mes "EU PROMETO!!";
		next;
		mes "[F. Harrison]";
		mes "Então por favor me traga os materiais...";
		next;
		mes "[F. Harrison]";
		mes "Os materiais que eu preciso são";
		mes "10 Aços,";
		mes "2 Eluniums,";
		mes "1 Oridecon,";
		mes "20 Carvões...";
		mes "E uma Haste Especial de Metal usada na Retalhadora.";
		mes "Acho que somente Lady Celena pode fabricar essas hastes........";
		next;
		mes "[F. Harrison]";
		mes "Mas primeiro, você precisa falar com o assistente da Lady Celena, o 'Diretor do Laboratório' e pedir pela ajuda dele.";
		mes "Está é uma criança um pouco histérica, mas ela será de boa ajuda se você falar gentilmente com ela...";
		next;
		mes "[F. Harrison]";
		mes "Desculpe....";
		mes "Aqui, te emprestar a minha valiosa arma, 'Raio Vermelho'.";
		mes "Mas tenha certeza que você trará todos estes materiais para mim assim que você os achar!!";
		mes "Me prometa!!!";
		gun_na = 101;
		getitem(Crimson_Bolt,1);
		close;
	} else if (gun_na == 101 || gun_na == 102) {
		mes "[F. Harrison]";
		mes "Os materiais que eu preciso são";
		mes "10 Aços,";
		mes "2 Eluniums,";
		mes "1 Oridecon,";
		mes "20 Carvões...";
		mes "e uma Haste Especial de Metal usada na Retalhadora....";
		mes "Converse com o 'Diretor do Laboratório' para a sua ajuda com a haste.";
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
			mes "Aha! Você conseguiu todos os materiais para mim!";
			mes "Eu irei começar com os";
			mes "reparos logo, por favor espere.....";
			close;
		} else{
			mes "[F. Harrison]";
			mes "Os materiais que eu preciso são";
			mes "10 Aços,";
			mes "2 Eluniums,";
			mes "1 Oridecon,";
			mes "20 Carvões...";
			mes "E uma Haste Especial de Metal usada na Retalhadora...";
			mes "Será bom você arrumar a";
			mes "Haste Especial de Metal logo.";
			close;
		}
	} else if (gun_na == 104) {
		if (checkweight(Butcher_,1) == 0) {
			mes "Você está com exceso de peso.";
			mes "Volte quando tiver se livrado de alguma coisa primeiro.";
			close;
		}
		gun_na = 0;
		getitem(Butcher_, 1);
		mes "[F. Harrison]";
		mes "Finalmente está consertada, obrigado pelo seu esforço.";
		mes "Estou muito chateado por te-la quebrado, e obrigado pelo seu esforço.";
		mes "Me sinto culpado por somente consertar ela, então eu adicionei um pouco mais de poder nela.";
		mes "Espero que seja de bom agrado pra você.";
		mes "Bem, desfrute.";
		close;
	} else if (gun_na == 0) {
		if (BaseJob != Job_Gunslinger) {
			mes "[F. Harrison]";
			mes "Cara estou tão entediado...";
			mes "Me pergunto se há algo interessante....";
			next;
			mes "[F. Harrison]";
			mes "Oh bem...irei apenas brincar com minha linda 'Raio Vermelho'.";
			close;
		}
		if (BaseLevel > 67 && countitem(Butcher)) {
			mes "[F. Harrison]";
			mes "Cara,estou tão entediado me pergunto se há algo interessante...";
			next;
			mes "[F. Harrison]";
			mes "Eh? Você é um Justiceiro?";
			mes "Eu não havia visto essa arma em suas mão antes...";
			next;
			mes "[F. Harrison]";
			mes "Posso pegá-la?";
			mes "Por favor?";
			mes "Qual é, deixe me dar uma olhada!";
			mes "Estou entediado de mais aqui!";
			mes "Por favorrrrrrrrrr?";
			next;
			if (select("Agora não","Agora...") == 1) {
				mes "[F. Harrison]";
				mes "Hah! Você acha que é o único com uma arma legal?";
				mes "Bem eu tenho a minha linda Crimson Bolt!";
				mes "Hmph!!";
				close;
			}
			mes "[F. Harrison]";
			mes "Heheh...";
			mes "Está é a mais nova Arma de fogo devenvolvida pelo Laboratório de Einbroch, chamada de Retalhadora Destruidora, é?";
			mes "Interessante...";
			mes "MUITO interessante....";
			next;
			mes "[F. Harrison]";
			mes "EI,deixe me testa-la um pouco,certo?";
			mes "Não se preocupe, eu sei como cuidar de uma arma, eu não vou quebrar ela!";
			mes "Isto isto!";
			mes "Vamos lá";
			delitem(Butcher,1);
			gun_na = 100;
			close;
		}
	}
}
