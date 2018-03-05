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
| - Nota: Npcs comuns na cidade Geffen                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
geffen,59,143,0	script	Meera#gef	4_F_02,{
	mes("[Meera]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Geffen, a Cidade da Magia!");
	next;
	mes("[Meera]\n Voc� gosta de mel?");
	next;
	mes("[Meera]\n Isto � muiiiito doce e delicioso.\n N�o tenho certeza se � um afrodiziaco, mas eu sei de um fato que vai alivia-lo da fadiga e recuperar sua sa�de!");
	next;
	mes("[Meera]\n Os zang�es vivem nos campos e passam a vida recolhendo o n�ctar sob comando da Abelha Rainha.\n O Mel � feito a partir do nectar que eles re�nem.");
	next;
	mes("[Meera]\n Mas isso n�o � tudo.\n H� um tipo especial de mel que � feito somente para as Abelhas Rainhas comerem:\n ^CC6600Gel�ia Real^000000!");
	next;
	mes("[Meera]\n Nada se compara ao delicioso sabor da Gel�ia Real.\n E eu acho que � melhor pra voc� do que o mel comum!");
	close;
}

// ------------------------------------------------------------------
geffen,156,190,0	script	Orwalk#gef	4_KID01,{
	mes("[Orwalk]\n Interessante.\n Muito intrigante.\n Deixe-me lhe contar esta hist�ria maravilhosa.");
	next;
	mes("[Orwalk]\n Quando eu estava pesquisando magia, eu descobri este pergaminho misterioso.\n Ele descrevia esta �rvore chamada Yggdrasil.");
	next;
	mes("[Orwalk]\n As folhas, sementes e frutos de Yggdrasil ligam todos os seres vivos deste mundo.\n De acordo com este pergaminho, Yggdrasil tamb�m est� envolvido com a cria��o do mundo.");
	next;
	mes("[Orwalk]\n Falando nisso, tamb�m ouvi falar de um rumor sobre uma �rvore em um terreno perto de Comodo.\n Eles devem ser ligados, tenho certeza disso!");
	close;
}

// ------------------------------------------------------------------
geffen,147,26,0	script	Ralphie#gef	4W_M_01,{
	mes("[Ralphie]\n Em algum lugar neste mundo...\n H� uma equipe rara que pode transformar energia ps�quica em vigor f�sico.\n Dotando seu dono com ^990000poder destrutivo^000000...");
	next;
	mes("[Ralphie]\n Com isso, qualquer um poderia ser forte como Hercules...\n Mesmo um fracote como eu!\n Hahahahahah.\n Tenho que ter isso!");
	next;
	emotion(e_gasp);
	mes("[Ralphie]\n ...C�us!\n Desde quando voc� estava ouvindo?");
	next;
	mes("[Ralphie]\n Por acaso voc� n�o ouviu nada disso?\n Muhwaha... ha. Ha.");
	next;
	mes("[Ralphie]\n Bem...\n Eu n�o disse nada.\n Mas se eu disse, esque�a tudo sobre isso, o que quer que fosse.");
	next;
	mes("[Ralphie]\n ...isso � estranho.");
	close;
}

// ------------------------------------------------------------------
geffen,111,48,0	script	Stacey#gef	4W_F_01,{
	if (getequipid(EQI_HEAD_TOP) == Viking_Helm) {
		mes("[Stacey]\n Oh...!\n � um Elmo de Orc que voc� est� vestindo?!\n Isso � muito legal!\n Agora...");
		next;
		mes("[Stacey]");
		if (Sex == SEX_MALE) {
			mes(" Voc� parece t�o...\n Robusto e viril.");
		} else {
			mes(" Oooh!\n Estou com tanta inveja!");
		}
		close;
	} else if (getequipid(EQI_HEAD_TOP) == Orc_Hero_Helm) {
		mes("[Stacey]\n Oh...");
		next;
		mes("[Stacey]\n Isto...\n Isto � um capacete de orc Her�i!");
		next;
		if (Sex == SEX_MALE) {
			mes("[Stacey]\n Isto...\n � como se voc� estivesse cercado por uma aurea masculina!\n Oooh! Voc� deve ser irresist�vel para todas as garotas!");
			next;
			emotion(e_lv);
			mes("[Stacey]\n E eu n�o sou exce��o.");
		} else {
			mes("[Stacey]\n Nossa, voc� deve ser t�o forte!\n Mas eu pensei que apenas membros da Tribo de Orcs usavam isso?");
		}
		close;
	} else {
		mes("[Stacey]\n Ol�!\n Oh, voc� n�o � " + (Sex == SEX_MALE ? "um aventureiro" : "uma aventureira") + "?");
		next;
		mes("[Stacey]\n Voc� j� viu alguns Orcs da tribo de Demi-Human?\n Se voc� descer para o sul a partir daqui, eu acho que voc� pode encontrar Orcs na floresta profunda.");
		next;
		mes("[Stacey]\n Eu ouvi que os Orcs possuem uma cultura e linguagem pr�pria, supostamente apenas como n�s humanos.\n Ser� que os Orcs v�o a encontros...?");
		next;
		mes("[Stacey]\n Sabe, onde eles sussuram coisas bonitas e depois...\n Ah! Eu realmente queria saber!");
		close;
	}
}

// ------------------------------------------------------------------
geffen,203,146,5	script	Cidad�o#gef	4W_M_01,{
	mes("[Cidad�o]\n Havia um h�bil criador de armas em Al De Baran, e ele tinha 4 filhos.\n Infelizmente, ele perdeu todos enquanto desenvolvia uma arma poderosa.\n Somente ele sobreviveu � trag�dia.");
	next;
	mes("[Cidad�o]\n Como deve ter sido triste para ele...\n Gra�as ao incidente, o criador de armas se aposentou e foi embora, viver em outro lugar.\n Depois disso, ningu�m nunca p�de ver a arma que eles estavam desenvolvendo.");
	next;
	mes("[Cidad�o]\n N�o acho que os filhos dele foram para o c�u com a ansiedade.");
	close;
}

// ------------------------------------------------------------------
// - [Casas] -
// ------------------------------------------------------------------
geffen_in,34,170,0	script	Theodoro#gef	1_M_01,{
	mes("[Theodoro]\n Ol�!\n N�o est� um maravilhoso dia hoje?");
	next;
	mes("[Theodoro]\n Bem, eu n�o sei.\n Venho estudando duro para me tornar um Mago.\n Fico acordado a noite toda, agonizando sobre tudo que � m�gico.");
	next;
	mes("[Theodoro]\n *Suspiro..*\n Eu me preocupo especialmente sobre todas as desvantagens de utilizar magia.");
	next;
	mes("[Theodoro]\n Foi realmente irritante quando um inimigo de longa data me encontrou na ultima vez que estava explorando.\n Esse monstro miser�vel interrompeu todos os meus feiti�os!\n N�o consegui atingir tudo!");
	next;
	mes("[Theodoro]\n Depois disso, eu percebi que precisava de algum tipo de arma para combater os ataques de longo alcance dos inimigos.\n Algo que posso atacar a longas dist�ncias...");
	next;
	mes("[Theodoro]\n Algum tipo de...\n Afia��o, perfura��o lan�ador de proj�til, preferencialmente feito com madeira.");
	next;
	mes("[Theodoro]\n Mas onde eu poderia encontrar algo como isso?!");
	close;
}

// ------------------------------------------------------------------
geffen_in,27,134,5	script	Gar�onete#gef	4_F_02,{
	mes("[Elenore]\n Esse lugar...\n Tem uma atmosfera diferente.");
	next;
	mes("[Elenore]\n N�s temos uma esp�cie de vidente que est� sempre por a�.\n � um b�bado que passa o dia inteiro reclamando dos magos.");
	next;
	mes("[Elenore]\n Bem...\n O que posso fazer por voc�?");
	next;
	if (select("Posso beber algo?", "Voc� tem novidades para me contar?") == 1) {
		mes("[Elenore]\n Bem...\n Se voc� quiser algo alco�lico, o Rei Tristam III proibiu a venda.\n Ouvi dizer que agora s� podem serv�-lo em determinados lugares.");
		next;
		mes("[Elenore]\n Mesmo assim as pessoas conseguem ficar b�badas com os drinques sem �lcool que servimos aqui.\n Acho que � psicol�gico.");
		next;
		mes("[Elenore]\n Eu realmentee queria poder visitar o lugar em que servem drinques de verdade.\n Ouvi dizer que � o para�so!");
		close;
	}
	switch(rand(1, 4)) {
		case 1:
		mes("[Elenore]\n Novidades...?\n Bem, ouvi dizer que est�o abrindo um novo aeroporto em Juno!");
		next;
		mes("[Elenore]\n Ou pelo menos, est�o planejando.\n O avi�o ainda n�o est� pronto para decolar.\n Enquanto isso existe uma esp�cie de representante da corpora��o l�, oferecendo servi�os de teletransporte.");
		next;
		mes("[Elenore]\n Parece que a Corpora��o Kafra finalmente tem concorr�ncia!\n Mas n�o acho que existam muitas garotas atraentes como as garotas Kafra...");
		close;
		case 2:
		mes("[Elenore]\n Voc� n�o ouviu?\n H� uma nova moda no Reino de Rune-Midgard!");
		next;
		mes("[Elenore]\n As pessoas est�o vindo, usando chap�us novos e bonitinhos!\n Vi um de ursinho, e teve uma garota que chegou usando orelhinhas de gato pretas...");
		next;
		mes("[Elenore]\n Claro, nem todo estilo popular me agrada.\n Porque sabe, eu vi um cara andando com um cogumelo na cabe�a.\n E ouvi dizer que tem algu�m fazendo chap�us de peixes!");
		next;
		mes("[Elenore]\n Acho que chap�us como esses s�o art�sticos demais para o meu gosto.");
		close;
		case 3:
		mes("[Elenore]\n Novidades?");
		next;
		mes("[Elenore]\n Bem...\n Ouvi dizer que tem uma pessoa em Rune-Midgard...");
		next;
		mes("[Elenore]\n Voc� ouviu falar de " + strcharinfo(PC_NAME) + "?");
		if (Sex == SEX_MALE) {
			mes(" Ele � supostamente o her�i mais lindo da regi�o!");
		} else {
			mes(" Dizem que ela � uma das meninas mais bonitas de Rune-Midgard!");
		}
		close;
		case 4:
		switch(rand(1, 2)) {
			case 1:
			mes("[Elenore]\n Novidades?\n E-espere...");
			next;
			mes("[Elenore]\n Ugh...\n Ooooh...\n Minha c-cabe�a...\n Est� doendo...");
			next;
			mes("[Esp�rito de William]\n ^990000Saia de perto da minha filha, esc�ria, antes que eu venda seus org�os por zeny!\n T� me ouvindo?!^000000");
			next;
			mes("[Elenore]\n *cof*\n Oh...!\n Desculpe por isso!\n Eu devo estar com um come�o de gripe!\n ...Ou algo do tipo.");
			next;
			mes("^3355FFEstranho...\n A voz dela tava realmente grossa por um minuto, ali...");
			close;
			case 2:
			mes("[Esp�rito de William]\n ^990000Ei, seu man�aco sexual!!!\n Pare de olhar pra minha filha desse jeito.\n Antes que eu arranque seus olhos e os coma com macarr�o!^000000");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]");
			if (Sex == SEX_MALE) {
				mes(" Huh...?\n D-de novo?");
				next;
				mes("[Elenore]\n Huh...?\n Oh, papai deve ter me possu�do de novo.\n Acontece comigo e minha irm� o tempo todo.");
				next;
				mes("[" + strcharinfo(PC_NAME) + "]\n S�rio?\n Huh.\n � uma chatice.");
				next;
				mes("[Elenore]\n �...\n Me fala disso.");
				close;
			} else {
				mes(" E-espeeeeeera...\n Mas, mas eu sou uma garota!");
				next;
				mes("[Esp�rito de William]\n ^990000Que parte do ^FF0000eu vou gritar onde voc� estiver^000000 ^990000voc� n�o entendeu?!\n Agora sai daqui, pervertido!^000000");
				next;
				mes("^3355FFAaaah!\n Como ela ficou t�o assustadora?!^000000");
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
geffen_in,70,67,3	script	Arrumadeira#gef	4_F_01,{
	mes("[Elisa]\n Ol�\n Posso te ajudar com alguma coisa?");
	next;
	select("Tem alguma fofoca interessante recentemente?");
	mes("[Elisa]\n Sabe o que � t�o estranho?");
	next;
	mes("[Elisa]\n Fui pro santu�rio de Prontera e tenho certeza que vi um sacerdote casando com uma sacerdotisa!");
	next;
	mes("[Elisa]\n Eu n�o tinha ideia se sacerdotes poderiam se casar ou n�o.\n Mas at� o Rei Tristram estava l�, ent�o acho que est� tudo bem!");
	close;
}

// ------------------------------------------------------------------
geffen_in,79,76,2	script	Mercador Daven#gef	2_M_PHARMACIST,{
	mes("[Mercador Daven]\n Eu lembro de Geffen quando ainda era chata.");
	next;
	mes("[Mercador Daven]\n Mas agora tem Magos e Bruxos e uma economia pr�spera nessa cidade!");
	next;
	switch(select("Magos...?", "Economia?")) {
		case 1:
		mes("[Mercador Daven]\n Magos e Bruxos est�o sempre carregando livros e estudando magia.\n � assim que eles s�o.");
		next;
		mes("[Mercador Daven]\n Tem uma escola de magia no noroeste da cidade, para aprendizes interessados em se tornar Magos.\n L�, eles podem aprender o b�sico de magia.");
		next;
		mes("[Mercador Daven]\n Depois de se tornar experiente no uso de magia, Magos podem se qualificar para se tornar Bruxos.");
		next;
		mes("[Mercador Daven]\n Bruxos tem acesso a magias mais poderosas e destrutivas do que os Magos.\n Magos podem aplicar para se tornar Bruxos no topo da Torre de Geffen.");
		break;
		case 2:
		mes("[Mercador Daven]\n Bem, acho que voc� pode agradecer aos Ferreiros pela economia aqui em Geffen.\n Com certeza, eles sempre sujos, suados, fedendo e falam meio rude...");
		next;
		mes("[Mercador Daven]\n Mas s�o pessoas que trabalham duro.\n E tamb�m, os min�rios que eles refinam e as armas que criam tem alta demanda.");
		next;
		mes("[Mercador Daven]\n Aventureiros pagam aos Ferreiros um monte do seus suados zenys por armas de alta qualidade que somente eles podem criar.");
		break;
	}
	close;
}

// ------------------------------------------------------------------
geffen_in,114,73,5	script	Hadenheim#gef	4_M_SEAMAN,{
	mes("[Hans Hadenheim]\n Cara, o continente de Rune-Midgard � t�o grande!\n Como vai voc�, jovem?");
	next;
	mes("[Hans Hadenheim]\n Essa Geffen � estranha.\n Mas valeu a pena viajar da Rep�blica de Schubaltzwald at� aqui.");
	next;
	if (select("Rep�blica de Schubaltzwald?", "Ent�o, por que voc� est� viajando?") == 1) {
		mes("[Hans Hadenheim]\n Voc�...\n N�o conhece a Rep�blica de Schubaltzwald?");
		next;
		mes("[Hans Hadenheim]\n Voce sabe, aliado do reino de Rune-Midgarts.\n Um... Nossa cidade capital � Juno?");
		next;
		mes("[Hans Hadenheim]\n Voc� realmente deveria se atualizar nos eventos globais!");
		close;
	}
	mes("[Hans Hadenheim]\n Ah, estou viajando a neg�cios.\n Parece que o com�rcio estrangeiro d� muito dinheiro.");
	next;
	mes("[Hans Hadenheim]\n Todas essas cidades que est�o sendo descobertas por exploradores.\n Est�o fazendo as importa��es e exporta��es explodirem!");
	next;
	mes("[Hans Handenheim]\n Enfim...");
	next;
	mes("[Hans Hadenheim]\n Voc� foi a alguma das terras novas?\n Elas s�o muito interessantes, e voc� pode aprender muito com a cultura estrangeira.");
	next;
	mes("[Hans Hadenheim]\n Mas se voc� quiser apreciar uma bela vista.\n Sugiro que visita minha cidade natal, Juno.\n � muito bonita, sabe.");
	close;
}

// ------------------------------------------------------------------
geffen_in,39,127,2	script	Vidente#gef	4_M_BIBI,{
	mes("[Vidente]\n Ah...\n N�o diga!\n Voc� veio saber seu futuro, n�o?\n Eu sei...\n Eu sei...\n Posso prever o futuro!\n Ent�o, sobre o que voc� quer saber?");
	next;
	switch(select("Vida!", "Amor!", "Dinheiro!", "Notas!", "Futuro!", "Moda!")) {
		case 1:
		mes("[Vidente]");
		switch(rand(1,5)) {
			case 1:
			mes(" Vida...?\n Nossa, � uma categoria ampla.\n Mas vou entrar em contato com alguns esp�ritos e verei o que posso fazer.");
			next;
			mes("[Vidente]\n Hmmm...\n Certo, consegui algo.\n Hmmm voc� viver� at� uma idade avan�ada.\n At� quando?");
			next;
			mes("[Vidente]\n ^333333*cof!*^000000enta e nove anos.\n Isso n�o � �timo?\n � uma idade avan�ada, e voc� ainda tem muitos anos aben�oados para aproveitar.");
			next;
			mes("[Vidente]\n E voc� tamb�m ter� sucesso sempre.\n Voc� ter� sucesso em obter vit�rias e derrotas!");
			next;
			mes("[Vidente]\n Voc� talvez n�o entenda esse peda�o de sabedoria agora.\n Mas quando souber mais sobre esse mundo maluco, ele far� sentido.");
			next;
			break;
			case 2:
			mes(" Hmm...\n O que posso te contar sobre a vida?\n Vou entrar em contato com o mundo dos esp�ritos.");
			next;
			mes("[Vidente]\n Certo, entendi!\n Seus sonhos se tornar�o realidade!");
			next;
			mes("[Vidente]\n Claro, n�o sei bem quais sonhos.\n Mas espero que sejam os agrad�veis que se tornar�o realidade, e n�o aqueles seus pesadelos estranhos.");
			next;
			mes("[Vidente]\n Qual sonhos exatamente?\n Bem, os esp�ritos est�o meio reticentes hoje.\n Eles n�o est�o com humor para falar.\n Eles tamb�m t�m vida, sabe.\n Espere, isso n�o faz sentido.");
			next;
			break;
			case 3:
			mes(" Sinto que voc� est� prestes a tomar uma decis�o que talvez se arrependa.\n Aconselho que voc� espere e reflita.");
			next;
			mes("[Vidente]\n Embora a press�o seja grande, lembre-se de que as decis�es tomadas impulsivamente s�o normalmente ruins.\n Respire fundo e relaxe.");
			next;
			mes("[Vidente]\n Mesmo se voc� estiver sem tempo.\n � melhor planejar tudo cuidadosamente para n�o desperdi�ar esfor�os ou cometer erros.");
			next;
			mes("[Vidente]\n Lembre-se de que calma e paci�ncia s�o as chaves para resolver qualquer crise.");
			next;
			break;
			case 4:
			mes(" Hmmm... Sinto que voc� est� passando por uma fase dif�cil.\n Voc� deveria priorizar seguran�a ou felicidade?");
			next;
			mes("[Vidente]\n Sugiro que voc� pense cuidadosamente antes de decidir o seu caminho.\n E lembre-se, voc� apenas aprender� quando cometer erros.");
			next;
			mes("[Vidente]\n Se voc� planejar cuidadosamente e realizar a��es positivas, voc� pode ter tudo!");
			next;
			break;
			case 5:
			mes(" Hmm...\n Sinto que voc� brigou com algu�m pr�ximo a voc� Algu�m com quem voc� se importa muito.");
			next;
			mes("[Vidente]\n Voc� precisa tomar a iniciativa!\n Resolva esse problema sem se deixar abalar por suas emo��es.");
			next;
			mes("[Vidente]\n Tente consertar seus erros, engula seu orgulho e pe�a desculpas sinceramente se precisar.\n Uma amizade vale isso? Eu acho que sim.");
			next;
		}
		mes("[Vidente]\n Bem, espero ter sanado todas as suas d�vidas sobre o futuro.\n Afinal, meu trabalho � ser um consultor ps�quico. Volte quando quiser.");
		close;
		case 2:
		mes("[Vidente]"); 
		switch(rand(1,4)) {
			case 1:
			mes("Quer saber seu futuro no amor?\n Oh ho Ent�o voc� gosta de algu�m!\n Vamos, pode me contar!");
			next;
			mes("[Vidente]\n Certo...\n Sinto uma forte energia amorosa emanando da sua alma.\n � intimidadora, e afasta os fracos.");
			next;
			mes("[Vidente]\n Ent�o basicamente, prevejo que voc� logo atrair� pessoas realmente fortes.\n Atletas, fisiculturistas, pedreiros, gente desse tipo.");
			next;
			mes("[Vidente]\n Ent�o se � isso que voc� quer, parab�ns!\n A sorte lhe sorri hoje.");
			next;
			mes("[Vidente]\n Mas se voc� quer o oposto, sinto muito.\n A sorte sorri sarcasticamente hoje.\n Mas n�o � tarde demais para mudar o destino!");
			next;
			break;
			case 2:
			mes(" Amoooor, ent�o?\n Deixe-me entrar em contato com os esp�ritos rapidamente.");
			next;
			mes("[Vidente]\n Ah! Uma velha chama se reacender�!\n N�o sei se a pessoa se apaixonar� por voc� de novo.\n Se pedir� dinheiro ou se est� de volta para se vingar...");
			next;
			mes("[Vidente]\n Mas um velho amor voltar� � sua vida.\n De alguma forma.\n Ent�o, se isso for uma boa not�cia, parab�ns!\n Mas se for uma not�cia ruim, tome cuidado!");
			next;
			break;
			case 3:
			if (Sex == SEX_MALE) {
				mes(" Um... A menina com quem voc� est� saindo agora � ideal para voc�!");
			} else {
				mes(" Um... O menino com quem voc� est� saindo agora � ideal para voc�!");
			}
			next;
			switch(select("Como voc� sabe?", "Voc� est� errado!", "Estou solteiro!")) {
				case 1:
				mes("[Vidente]\n Bem...\n N�s que temos poderes ps�quicos somos muito bons nesse tipo de coisa.\n E � t�o bom ver que voc� est� feliz com a pessoa que voc� gosta!");
				close;
				case 2:
				mes("[Vidente]\n Voc� n�o me deixou terminar a frase.");
				next;
				if (Sex == SEX_MALE) {
					mes("[Vidente]\n A menina com quem voc� est� saindo agora � ideal para voc�.");
				} else {
					mes("[Vidente]\n O menino com quem voc� est� saindo agora � ideal para voc�.");
				}
				mes(" Se voc� quiser passar o resto da vida infeliz!");
				next;
				mes("[Vidente]\n Mas se voc� for terminar, fa�a isso logo e tente manter a amizade.");
				next;
				mes("[Vidente]\n Isso far� com que voc�s dois se tornem melhores.\n Pelo menos � o que eu acho.");
				close;
				case 3:
				mes("[Vidente]\n Oh...\n Bem, me desculpe.\n As vezes eu misturo o presente e o futuro.\n Voc� entende n�o �, j� que estou sempre prevendo o futuro...");
				next;
				if (Sex == SEX_MALE) {
					mes("[Vidente]\n O que eu quis dizer na verdade foi que ^3355FFvoc� encontrar� a mulher perfeita em breve^000000.");
				} else {
					mes("[Vidente]\n O que eu quis dizer na verdade foi que ^3355FFvoc� encontrar� o homem perfeito em breve^000000.");
				}
				close;
			}
			break;
			case 4:
			mes(" Querendo um romance, eh?\n Sempre bom ter novas emo��es.");
			next;
			mes("[Vidente]\n Estranho, eu vejo um tri�ngulo amoroso em seu futuro.\n N�o, espere!\n Na verdade...\n Um dec�gono amoroso?");
			next;
			mes("[Vidente]\n Qual o pol�gono com onze lados?\n Ah, voc� n�o pode esperar que eu saiba qual �.\n Sou um vidente, n�o um matem�tico.");
			next;
		}
		mes("[Vidente]\n O amor � sempre divertido!\n Mesmo nesse mundo sombrio, o amor nos rodeia com seu brilho convidativo.\n Cuide de quem for especial para voc�, e volte para outra leitura!");
		close;
		case 3:
		mes("[Vidente]"); 
		switch(rand(1,3)) {
			case 1:
			mes(" Dinheiro?\n Bem, aposto que voc� tem mais sorte com isso do que eu.\n Afinal, eu fico sentado aqui o dia inteiro, fazendo consultas de gra�a!");
			next;
			mes("[Vidente]\n Bem...\n Os esp�ritos me dizem que voc� talvez n�o ganhe na loteria.\n N�o importa quantos t�quetes voc� compre. Me desculpe, mas � verdade.");
			next;
			mes("[Vidente]\n Mas eu impedi voc� de continuar perdendo dinheiro com isso!\n Se voc� comprasse t�quetes de loteria durante toda a vida, gastaria quase uma fortuna!");
			next;
			break;
			case 2:
			mes("Ah sim.\n Entrarei em contato com os esp�ritos.\n Eles normalmentes d�o bons conselhos financeiros, mesmo n�o tendo nenhum tipo de economia l�.");
			next;
			mes("[Vidente]\n Primeiro, controle seu dinheiro e s� gaste o que puder.\n Quer uma dica?\n De cada dez zenys que voc� ganhar, guarde um para investir ou deixar de reserva.");
			next;
			mes("[Vidente]\n E, n�o importa o que voc� fa�a, n�o seja um vidente em Rune-Midgard.\n Parece que o que d� dinheiro mesmo � descobrir novas terras.\n Por que eu n�o fiz isso?");
			next;
			break;
			case 3:
			mes(" Ent�o voc� quer saber sobre dinheiro.\n Vou entrar em contato com os esp�ritos...");
			next;
			mes("[Vidente]\n Ah, sim.\n Eles est�o me dizendo que � melhor ser sempre cauteloso.\n Certamente voc� deve saber que exploradores nunca gastam mais do que a verba destinada a eles.");
			next;
			mes("[Vidente]\n E voc� tamb�m deve evitar apostar com seu dinheiro.\n Quero dizer que voc� deve guardar e investir cuidadosamente.\n N�o se deixe cair na tenta��o de entrar em esquemas do tipo fique-rico-r�pido!");
			next;
			mes("[Vidente]\n Mas por outro lado, esquemas desse tipo podem ser bons, se voc� souber o que est� fazendo.\n Estou certo, n�o?");
			next;
		}
		mes("[Vidente]\n Bem, precisamos de dinheiro para viver, mas ter dinheiro n�o significa ter uma vida plena.\n N�o esque�a que existem outras coisas que s�o importantes tamb�m.\n E tente n�o ficar muito nervoso, certo?");
		close;
		case 4:
		mes("[Vidente]");
		switch(rand(1,4)) {
			case 1:
			mes(" Suas notas? Voc� ainda est� na escola?\n Estou impressionado!\n Seus olhos me dizem que voc� � muito maduro para a sua idade.\n Certo, vou consultar os esp�ritos...");
			next;
			mes("[Vidente]\n Hm? Tudo que eles disseram foi 'Voc� estuda?'\n Bem, acho que acabei respondendo sua pergunta com outra pergunta!");
			next;
			break;
			case 2:
			mes(" Voc� est� me perguntando sobre as suas notas?\n Que estranho.\n Digo, voc� est� querendo saber sobre o seu boletim?");
			next;
			mes("[Vidente]\n A educa��o � muito importante, mas n�o desanime se suas notas n�o s�o t�o boas quanto voc� gostaria.");
			next;
			mes("[Vidente]\n Talvez o seu estilo de aprendizado n�o seja condizente com o m�todo da sua escola.\n Ou talvez voc� n�o esteja muito interessado nos assuntos que ensinam l�.\n � compreens�vel.");
			next;
			mes("[Vidente]\n Os esp�ritos me dizem que voc� deve tentar diferentes estilos de aprendizagem.\n Para garantir que obtenha as notas que quer.");
			next;
			mes("[Vidente]\n Sim...\n Os esp�ritos est�o incrivelmente pregui�osos hoje.");
			next;
			break;
			case 3:
			mes("[Vidente]\n Hmm. Os esp�ritos est�o rudes hoje.\n Eles est�o dizendo 'Se voc� est� t�o preocupado com suas notas.\n Por que n�o vai falar com seu professor?'");
			next;
			mes("[Vidente]\n Agora que estou pensando nisso, eles tem raz�o.\n Por que voc� n�o vai falar com seu professor para ver se h� algum problema?");
			next;
			mes("[Vidente]\n Eles s�o pagos para te ajudar.\n E minha consulta � de gra�a.\n Ent�o...");
			next;
			break;
			case 4:
			mes("Ah, legal!\n Sinto que voc� logo vai tirar um Dez...\n Em Esfor�o!");
			next;
			mes("[Vidente]\n N�o posso te dizer quais as suas notas.\n Talvez voc� esteja destinado a tirar dez em todas as mat�rias, mas se eu falar isso...");
			next;
			mes("[Vidente]\n Voc� provavelmente relaxaria, pararia de estudar, reprovaria e causaria um paradoxo no tempo.\n Porque eu realmente preciso ir para o futuro para ver o que vai acontecer, entende?");
			next;
			mes("[Vidente]\n Ao inv�s de se preocupar com paradoxos no tempo, por que voc� n�o faz o seu pr�prio destino?");
			next;
		}
		mes("[Vidente]\n De qualquer forma, � dif�cil se concentrar nos estudos, mas pode compensar.\n Espero que voc� se d� bem no que voc� decida fazer.");
		close;
		case 5:
		mes("[Vidente]\n O futuro?\n Achei que estava impl�cito que tudo que eu falar ser� sobre o futuro, de qualquer tema que voc� escolha.");
		next;
		mes("[Vidente]\n Acho que voc� quer saber sobre o futuro em geral.\n Vou consultar os esp�ritos, e veremos o que eles t�m a dizer, ok?");
		next;
		mes("[Vidente]");
		switch(rand(1,4)) {
			case 1:
			mes(" Hmm...\n No futuro, Sexo, Viol�ncia e Rock and Roll ser�o abolidos.\n A humanidade viver� numa era de paz e chatice.");
			next;
			mes("[Vidente]\n N�o sei quando isso vai acontecer, mas espero que demore bastante!");
			next;
			break;
			case 2:
			mes("No futuro a Terra ser� protegida por um �nico rob�:\n Plutonium Overdrive Ignition Negatron G, ou POING.");
			next;
			mes("[Vidente]\n POING expulsou os invasores Kylorianos por muito tempo, at� ser derrotado pelo Nyxltron 47, feito pelo Dr. Hubris.");
			next;
			mes("[Vidente]\n Mas felizmente o doutor Pyeus finalizou bem a tempo o Dispostivo de Desconhecimento de Gravidade para o POING.");
			next;
			mes("[Vidente]\n Ent�o POING levantou-se novamente, renascido como o Her�i Autom�tico: GOD-POING.\n Que obviamente destruiu o Nyxltron 47.");
			next;
			mes("[Vidente]\n Essa � provavelmente a coisa mais importante que posso te contar sobre o futuro.\n O resto � muito sem gra�a.");
			next;
			break;
			case 3:
			mes(" No futuro, acredite ou n�o, a internet ser� substitu�da por um grande c�rebro.\n N�o sei como, mas acredite, o c�rebro � enorme.");
			next;
			mes("[Vidente]\n Gra�as ao grande n�mero de blogs, o c�rebro se torna pac�fico, e decide n�o dominar o mundo.\n Como tinha planejado antes.");
			next;
			mes("[Vidente]\n Sim...\n Esse c�rebro se torna uma fonte do bem, um benfeitor da ra�a humana.\n Pelo menos enquanto as pessoas continuarem a escrever assuntos pessoais na internet.");
			next;
			break;
			case 4:
			mes(" No futuro, muitas plantas ser�o modificadas geneticamente.\n Existir�o muitos tipos diferentes!\n � bem estranho!");
			next;
			mes("[Vidente]\n Eventualmente surgir�o �rvores que ao inv�s de frutos, originam clones de celebridades.\n Hoje, isso parece um milagre da ci�ncia, e uma amea�a �s estrelas de Hollywood.");
			next;
			mes("[Vidente]\n Mas as pessoas que compram essas �rvores s�o as mesmas que usam aquelas camisetas estranhas...");
			next;
			mes("[Vidente]\n Sabe, que tem um senso de humor tosco, com a palavra 'Gatostr�fico' e o desenho de um gatinho vestido como um cientista maluco ou algo do g�nero.");
			next;
		}
		mes("[Vidente]\n Bem...\n Essa � a minha predi��o.\n Voc� pode argumentar com a sabedoria do mundo dos esp�ritos?");
		close;
		case 6:
		mes("[Vidente]\n Moda...?\n O que isso tem a ver com o sobrenatural?\n Bem, entrarei em contato com os esp�ritos.\n L� vamos n�s...");
		next;
		mes("[Vidente]"); 
		switch(rand(1,5)) {
			case 1:
			mes("[Vidente]\n .........");
			next;
			mes("[Vidente]\n Estou vendo algo...\n Parece, com...");
			next;
			mes("[Vidente]\n Um... Peixe?\n Na cabe�a de algu�m?");
			next;
			mes("[Vidente]\n Que vis�o horr�vel!");
			next;
			break;
			case 2:
			mes(" � bom usar elmos valiosos!\n E tamb�m � bom usar roupas bonitas!\n Mas lembre-se...");
			next;
			mes("[Vidente]\n N�o importa o quanto voc� gastou no seu guarda-roupa, voc� ainda vai parecer bobo se n�o usar pe�as que combinem.");
			next;
			mes("[Vidente]\n Vou te dar um exemplo de gente que n�o sabe se vestir.\n Imagine um Crusader usando uma coroa, orelhas de elfo e um Iron Cain.");
			next;
			mes("[Vidente]\n Ele n�o ia parecer na moda, ia parecer o Pr�ncipe da Breguice.");
			next;
			break;
			case 3:
			mes(" Eu vejo...\n Que chap�us de caub�i ser�o muito populares entre garotas Super Novices em breve!");
			next;
			mes("[Vidente]\n Voc� n�o concorda?\n Chap�us de caub�i ficam �timos em Super Novices!");
			next;
			break;
			case 4:
			mes(" Pode ser uma boa id�ia seguir um tema.\n Por exemplo, voc� pode usar Asas de Anjo e Orelhas de Anjo ao mesmo tempo.");
			next;
			mes("[Vidente]\n Claro que isso pode ser caro demais para a maioria das pessoas, mas voc� entendeu.");
			next;
			break;
			case 5:
			mes(" Eu prevejo que sombreros se tornar�o muito populares quando um grande grupo de Bardos formarem uma guild na qual os membros s� usar�o sombreros.");
			next;
			mes("[Vidente]\n Ou ser� que � o Boina Alada que estourar� em popularidade?\n Os dois chap�us s�o muito estilosos, principamente em bardos...");
			next;
		}
		mes("[Vidente]\n Bem...\n N�s, videntes, n�o sabemos muito sobre moda, mas eu espero ter ajudado.");
		close;
	}
}

// ------------------------------------------------------------------
geffen_in,109,72,2	script	Perito em Monstros#gef	4_F_01,{
	mes("[Estheres]\n Ol�, sou o especialista em Monstros daqui de Geffen. Voc� gostaria de saber alguma coisa?");
	next;
	switch(select("Area de Monstros", "Not�cias Recentes", "Era dos Monstros", "Teoria do Jellopy")) {
		case 1:
		mes("[Estheres]\n Bem, como voc� talvez saiba, j� que Mages e Wizards treinam em Geffen.\n Os monstros n�o chegam muito perto da cidade.\n Ent�o aventureiros fatigados podem descansar aqui.");
		next;
		mes("[Estheres]\n Mas se voc� quiser ca�ar monstros fortes, pode cruzar a ponte a oeste e lutar com Kobolds.");
		next;
		mes("[Estheres]"); 
		if (BaseLevel > 80) {
			mes(" Voc� parece forte o suficiente para ir at� l�.\n Mas se vir algu�m com menos experi�ncia atravessando a ponte, poderia avis�-lo do perigo.");
		} else {
			mes(" Mas se voc� est� planejando ir l�, melhor n�o ir sozinho.\n Recomendo que voc� v� preparado se quiser lutar com esse tipo de monstros.");
		}
		break;
		case 2:
		mes("[Estheres]\n Novidades?\n Bem, o Museu de Monstros de Juno est� aberto ao p�blico.\n H� uma exposi��o fascinante, e v�rios monstros est�o a mostra.");
		next;
		mes("[Estheres]\n Eu li sobre todos os tipos de monstros nas livrarias de Juno e de Prontera, e cacei alguns.\n Mas agora tenho a chance de ver monstros muito fortes pessoalmente!");
		next;
		mes("[Estheres]\n E os aventureiros de Rune-Midgarts fizeram descobertas fant�sticas em suas explora��es.");
		next;
		mes("[Estheres]\n Quando uma nova terra � encontrada, normalmente existem l� monstros desconhecidos.");
		next;
		mes("[Estheres]\n Ent�o estamos descobrindo monstros novos o tempo todo!\n A variedade de criaturas que povoam o planeta � impressionante.");
		break;
		case 3:
		mes("[Estheres]\n A verdade � que os monstros existem desde tempos antigos.\n A Era dos Monstros ocorreu quando o poder deles estava no auge.");
		next;
		mes("[Estheres]\n Eles oprimiram os humanos por muito tempo.\n Mas foram aniquilados numa guerra entre os monstros e a humanidade.");
		next;
		mes("[Estheres]\n Entretanto, o equil�brio da natureza mudou, e os monstros retornaram.\n Poucas pessoas sabem disso, mas os monstros j� foram criaturas gentis.\n � triste...");
		break;
		case 4:
		mes("[Estheres]\n Ah sim, Jellopy.\n Parece que todos os monstros daqui s�o compostos de Jellopy.\n Mas isso � apenas uma cristaliza��o formada por alguns monstros...\n Ou � mais que isso?");
		next;
		mes("[Estheres]\n Nossas pesquisas sobre monstros antigos e estudos feitos com monstros descobertos recentemente mostram que nenhum tra�o de Jellopy � encontrado em monstros fortes.");
		next;
		mes("[Estheres]\n Mas mesmo assim, muitos acreditam numa rela��o entre Jellopys e monstros.\n Apesar de ser dif�cil de acreditar nisso.");
		next;
		mes("[Estheres]\n � poss�vel que as Jellopys estejam relacionadas com a personalidade e a for�a dos monstros.\n Ent�o, se voc� misturar Jellopy com alguma coisa, poderia criar um monstro mais forte.");
		next;
		mes("[Estheres]\n Mas fazer esse tipo de experimento pode ser perigoso.\n Voc� pode acabar soltando monstros assustadores no mundo...");
		break;
	}
	close;
}


