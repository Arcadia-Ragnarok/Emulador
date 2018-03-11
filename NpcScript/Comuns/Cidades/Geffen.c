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
	mes "[Meera]";
	mes "Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Geffen, a Cidade da Magia!";
	next;
	mes "[Meera]";
	mes "Voc� gosta de mel?";
	next;
	mes "[Meera]";
	mes "Isto � muiiiito doce e delicioso.";
	mes "N�o tenho certeza se � um afrodiziaco, mas eu sei de um fato que vai alivia-lo da fadiga e recuperar sua sa�de!";
	next;
	mes "[Meera]";
	mes "Os zang�es vivem nos campos e passam a vida recolhendo o n�ctar sob comando da Abelha Rainha.";
	mes "O Mel � feito a partir do nectar que eles re�nem.";
	next;
	mes "[Meera]";
	mes "Mas isso n�o � tudo.";
	mes "H� um tipo especial de mel que � feito somente para as Abelhas Rainhas comerem:";
	mes "^CC6600Gel�ia Real^000000!";
	next;
	mes "[Meera]";
	mes "Nada se compara ao delicioso sabor da Gel�ia Real.";
	mes "E eu acho que � melhor pra voc� do que o mel comum!";
	close;
}

// ------------------------------------------------------------------
geffen,156,190,0	script	Orwalk#gef	4_KID01,{
	mes "[Orwalk]";
	mes "Interessante.";
	mes "Muito intrigante.";
	mes "Deixe-me lhe contar esta hist�ria maravilhosa.";
	next;
	mes "[Orwalk]";
	mes "Quando eu estava pesquisando magia, eu descobri este pergaminho misterioso.";
	mes "Ele descrevia esta �rvore chamada Yggdrasil.";
	next;
	mes "[Orwalk]";
	mes "As folhas, sementes e frutos de Yggdrasil ligam todos os seres vivos deste mundo.";
	mes "De acordo com este pergaminho, Yggdrasil tamb�m est� envolvido com a cria��o do mundo.";
	next;
	mes "[Orwalk]";
	mes "Falando nisso, tamb�m ouvi falar de um rumor sobre uma �rvore em um terreno perto de Comodo.";
	mes "Eles devem ser ligados, tenho certeza disso!";
	close;
}

// ------------------------------------------------------------------
geffen,147,26,0	script	Ralphie#gef	4W_M_01,{
	mes "[Ralphie]";
	mes "Em algum lugar neste mundo...";
	mes "H� uma equipe rara que pode transformar energia ps�quica em vigor f�sico.";
	mes "Dotando seu dono com ^990000poder destrutivo^000000...";
	next;
	mes "[Ralphie]";
	mes "Com isso, qualquer um poderia ser forte como Hercules...";
	mes "Mesmo um fracote como eu!";
	mes "Hahahahahah.";
	mes "Tenho que ter isso!";
	next;
	emotion(e_gasp);
	mes "[Ralphie]";
	mes "...C�us!";
	mes "Desde quando voc� estava ouvindo?";
	next;
	mes "[Ralphie]";
	mes "Por acaso voc� n�o ouviu nada disso?";
	mes "Muhwaha... ha. Ha.";
	next;
	mes "[Ralphie]";
	mes "Bem...";
	mes "Eu n�o disse nada.";
	mes "Mas se eu disse, esque�a tudo sobre isso, o que quer que fosse.";
	next;
	mes "[Ralphie]";
	mes "...isso � estranho.";
	close;
}

// ------------------------------------------------------------------
geffen,111,48,0	script	Stacey#gef	4W_F_01,{
	if (getequipid(EQI_HEAD_TOP) == Viking_Helm) {
		mes "[Stacey]";
		mes "Oh...!";
		mes "� um Elmo de Orc que voc� est� vestindo?!";
		mes "Isso � muito legal!";
		mes "Agora...";
		next;
		mes "[Stacey]";
		if (Sex == SEX_MALE) {
			mes " Voc� parece t�o...";
			mes "Robusto e viril.";
		} else {
			mes " Oooh!";
			mes "Estou com tanta inveja!";
		}
		close;
	} else if (getequipid(EQI_HEAD_TOP) == Orc_Hero_Helm) {
		mes "[Stacey]";
		mes "Oh...";
		next;
		mes "[Stacey]";
		mes "Isto...";
		mes "Isto � um capacete de orc Her�i!";
		next;
		if (Sex == SEX_MALE) {
			mes "[Stacey]";
			mes "Isto...";
			mes "� como se voc� estivesse cercado por uma aurea masculina!";
			mes "Oooh! Voc� deve ser irresist�vel para todas as garotas!";
			next;
			emotion(e_lv);
			mes "[Stacey]";
			mes "E eu n�o sou exce��o.";
		} else {
			mes "[Stacey]";
			mes "Nossa, voc� deve ser t�o forte!";
			mes "Mas eu pensei que apenas membros da Tribo de Orcs usavam isso?";
		}
		close;
	} else {
		mes "[Stacey]";
		mes "Ol�!";
		mes "Oh, voc� n�o � " + (Sex == SEX_MALE ? "um aventureiro" : "uma aventureira") + "?";
		next;
		mes "[Stacey]";
		mes "Voc� j� viu alguns Orcs da tribo de Demi-Human?";
		mes "Se voc� descer para o sul a partir daqui, eu acho que voc� pode encontrar Orcs na floresta profunda.";
		next;
		mes "[Stacey]";
		mes "Eu ouvi que os Orcs possuem uma cultura e linguagem pr�pria, supostamente apenas como n�s humanos.";
		mes "Ser� que os Orcs v�o a encontros...?";
		next;
		mes "[Stacey]";
		mes "Sabe, onde eles sussuram coisas bonitas e depois...";
		mes "Ah! Eu realmente queria saber!";
		close;
	}
}

// ------------------------------------------------------------------
geffen,203,146,5	script	Cidad�o#gef	4W_M_01,{
	mes "[Cidad�o]";
	mes "Havia um h�bil criador de armas em Al De Baran, e ele tinha 4 filhos.";
	mes "Infelizmente, ele perdeu todos enquanto desenvolvia uma arma poderosa.";
	mes "Somente ele sobreviveu � trag�dia.";
	next;
	mes "[Cidad�o]";
	mes "Como deve ter sido triste para ele...";
	mes "Gra�as ao incidente, o criador de armas se aposentou e foi embora, viver em outro lugar.";
	mes "Depois disso, ningu�m nunca p�de ver a arma que eles estavam desenvolvendo.";
	next;
	mes "[Cidad�o]";
	mes "N�o acho que os filhos dele foram para o c�u com a ansiedade.";
	close;
}

// ------------------------------------------------------------------
// - [Casas] -
// ------------------------------------------------------------------
geffen_in,34,170,0	script	Theodoro#gef	1_M_01,{
	mes "[Theodoro]";
	mes "Ol�!";
	mes "N�o est� um maravilhoso dia hoje?";
	next;
	mes "[Theodoro]";
	mes "Bem, eu n�o sei.";
	mes "Venho estudando duro para me tornar um Mago.";
	mes "Fico acordado a noite toda, agonizando sobre tudo que � m�gico.";
	next;
	mes "[Theodoro]";
	mes "*Suspiro..*";
	mes "Eu me preocupo especialmente sobre todas as desvantagens de utilizar magia.";
	next;
	mes "[Theodoro]";
	mes "Foi realmente irritante quando um inimigo de longa data me encontrou na ultima vez que estava explorando.";
	mes "Esse monstro miser�vel interrompeu todos os meus feiti�os!";
	mes "N�o consegui atingir tudo!";
	next;
	mes "[Theodoro]";
	mes "Depois disso, eu percebi que precisava de algum tipo de arma para combater os ataques de longo alcance dos inimigos.";
	mes "Algo que posso atacar a longas dist�ncias...";
	next;
	mes "[Theodoro]";
	mes "Algum tipo de...";
	mes "Afia��o, perfura��o lan�ador de proj�til, preferencialmente feito com madeira.";
	next;
	mes "[Theodoro]";
	mes "Mas onde eu poderia encontrar algo como isso?!";
	close;
}

// ------------------------------------------------------------------
geffen_in,27,134,5	script	Gar�onete#gef	4_F_02,{
	mes "[Elenore]";
	mes "Esse lugar...";
	mes "Tem uma atmosfera diferente.";
	next;
	mes "[Elenore]";
	mes "N�s temos uma esp�cie de vidente que est� sempre por a�.";
	mes "� um b�bado que passa o dia inteiro reclamando dos magos.";
	next;
	mes "[Elenore]";
	mes "Bem...";
	mes "O que posso fazer por voc�?";
	next;
	if (select("Posso beber algo?", "Voc� tem novidades para me contar?") == 1) {
		mes "[Elenore]";
		mes "Bem...";
		mes "Se voc� quiser algo alco�lico, o Rei Tristam III proibiu a venda.";
		mes "Ouvi dizer que agora s� podem serv�-lo em determinados lugares.";
		next;
		mes "[Elenore]";
		mes "Mesmo assim as pessoas conseguem ficar b�badas com os drinques sem �lcool que servimos aqui.";
		mes "Acho que � psicol�gico.";
		next;
		mes "[Elenore]";
		mes "Eu realmentee queria poder visitar o lugar em que servem drinques de verdade.";
		mes "Ouvi dizer que � o para�so!";
		close;
	}
	switch(rand(1, 4)) {
		case 1:
		mes "[Elenore]";
		mes "Novidades...?";
		mes "Bem, ouvi dizer que est�o abrindo um novo aeroporto em Juno!";
		next;
		mes "[Elenore]";
		mes "Ou pelo menos, est�o planejando.";
		mes "O avi�o ainda n�o est� pronto para decolar.";
		mes "Enquanto isso existe uma esp�cie de representante da corpora��o l�, oferecendo servi�os de teletransporte.";
		next;
		mes "[Elenore]";
		mes "Parece que a Corpora��o Kafra finalmente tem concorr�ncia!";
		mes "Mas n�o acho que existam muitas garotas atraentes como as garotas Kafra...";
		close;
		case 2:
		mes "[Elenore]";
		mes "Voc� n�o ouviu?";
		mes "H� uma nova moda no Reino de Rune-Midgard!";
		next;
		mes "[Elenore]";
		mes "As pessoas est�o vindo, usando chap�us novos e bonitinhos!";
		mes "Vi um de ursinho, e teve uma garota que chegou usando orelhinhas de gato pretas...";
		next;
		mes "[Elenore]";
		mes "Claro, nem todo estilo popular me agrada.";
		mes "Porque sabe, eu vi um cara andando com um cogumelo na cabe�a.";
		mes "E ouvi dizer que tem algu�m fazendo chap�us de peixes!";
		next;
		mes "[Elenore]";
		mes "Acho que chap�us como esses s�o art�sticos demais para o meu gosto.";
		close;
		case 3:
		mes "[Elenore]";
		mes "Novidades?";
		next;
		mes "[Elenore]";
		mes "Bem...";
		mes "Ouvi dizer que tem uma pessoa em Rune-Midgard...";
		next;
		mes "[Elenore]";
		mes "Voc� ouviu falar de " + strcharinfo(PC_NAME) + "?";
		if (Sex == SEX_MALE) {
			mes " Ele � supostamente o her�i mais lindo da regi�o!";
		} else {
			mes " Dizem que ela � uma das meninas mais bonitas de Rune-Midgard!";
		}
		close;
		case 4:
		switch(rand(1, 2)) {
			case 1:
			mes "[Elenore]";
			mes "Novidades?";
			mes "E-espere...";
			next;
			mes "[Elenore]";
			mes "Ugh...";
			mes "Ooooh...";
			mes "Minha c-cabe�a...";
			mes "Est� doendo...";
			next;
			mes "[Esp�rito de William]";
			mes "^990000Saia de perto da minha filha, esc�ria, antes que eu venda seus org�os por zeny!";
			mes "T� me ouvindo?!^000000";
			next;
			mes "[Elenore]";
			mes "*cof*";
			mes "Oh...!";
			mes "Desculpe por isso!";
			mes "Eu devo estar com um come�o de gripe!";
			mes "...Ou algo do tipo.";
			next;
			mes "^3355FFEstranho...";
			mes "A voz dela tava realmente grossa por um minuto, ali...";
			close;
			case 2:
			mes "[Esp�rito de William]";
			mes "^990000Ei, seu man�aco sexual!!!";
			mes "Pare de olhar pra minha filha desse jeito.";
			mes "Antes que eu arranque seus olhos e os coma com macarr�o!^000000";
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			if (Sex == SEX_MALE) {
				mes " Huh...?";
				mes "D-de novo?";
				next;
				mes "[Elenore]";
				mes "Huh...?";
				mes "Oh, papai deve ter me possu�do de novo.";
				mes "Acontece comigo e minha irm� o tempo todo.";
				next;
				mes "[" + strcharinfo(PC_NAME) + "]";
				mes "S�rio?";
				mes "Huh.";
				mes "� uma chatice.";
				next;
				mes "[Elenore]";
				mes "�...";
				mes "Me fala disso.";
				close;
			} else {
				mes " E-espeeeeeera...";
				mes "Mas, mas eu sou uma garota!";
				next;
				mes "[Esp�rito de William]";
				mes "^990000Que parte do ^FF0000eu vou gritar onde voc� estiver^000000 ^990000voc� n�o entendeu?!";
				mes "Agora sai daqui, pervertido!^000000";
				next;
				mes "^3355FFAaaah!";
				mes "Como ela ficou t�o assustadora?!^000000";
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
geffen_in,70,67,3	script	Arrumadeira#gef	4_F_01,{
	mes "[Elisa]";
	mes "Ol�";
	mes "Posso te ajudar com alguma coisa?";
	next;
	select("Tem alguma fofoca interessante recentemente?");
	mes "[Elisa]";
	mes "Sabe o que � t�o estranho?";
	next;
	mes "[Elisa]";
	mes "Fui pro santu�rio de Prontera e tenho certeza que vi um sacerdote casando com uma sacerdotisa!";
	next;
	mes "[Elisa]";
	mes "Eu n�o tinha ideia se sacerdotes poderiam se casar ou n�o.";
	mes "Mas at� o Rei Tristram estava l�, ent�o acho que est� tudo bem!";
	close;
}

// ------------------------------------------------------------------
geffen_in,79,76,2	script	Mercador Daven#gef	2_M_PHARMACIST,{
	mes "[Mercador Daven]";
	mes "Eu lembro de Geffen quando ainda era chata.";
	next;
	mes "[Mercador Daven]";
	mes "Mas agora tem Magos e Bruxos e uma economia pr�spera nessa cidade!";
	next;
	switch(select("Magos...?", "Economia?")) {
		case 1:
		mes "[Mercador Daven]";
		mes "Magos e Bruxos est�o sempre carregando livros e estudando magia.";
		mes "� assim que eles s�o.";
		next;
		mes "[Mercador Daven]";
		mes "Tem uma escola de magia no noroeste da cidade, para aprendizes interessados em se tornar Magos.";
		mes "L�, eles podem aprender o b�sico de magia.";
		next;
		mes "[Mercador Daven]";
		mes "Depois de se tornar experiente no uso de magia, Magos podem se qualificar para se tornar Bruxos.";
		next;
		mes "[Mercador Daven]";
		mes "Bruxos tem acesso a magias mais poderosas e destrutivas do que os Magos.";
		mes "Magos podem aplicar para se tornar Bruxos no topo da Torre de Geffen.";
		break;
		case 2:
		mes "[Mercador Daven]";
		mes "Bem, acho que voc� pode agradecer aos Ferreiros pela economia aqui em Geffen.";
		mes "Com certeza, eles sempre sujos, suados, fedendo e falam meio rude...";
		next;
		mes "[Mercador Daven]";
		mes "Mas s�o pessoas que trabalham duro.";
		mes "E tamb�m, os min�rios que eles refinam e as armas que criam tem alta demanda.";
		next;
		mes "[Mercador Daven]";
		mes "Aventureiros pagam aos Ferreiros um monte do seus suados zenys por armas de alta qualidade que somente eles podem criar.";
		break;
	}
	close;
}

// ------------------------------------------------------------------
geffen_in,114,73,5	script	Hadenheim#gef	4_M_SEAMAN,{
	mes "[Hans Hadenheim]";
	mes "Cara, o continente de Rune-Midgard � t�o grande!";
	mes "Como vai voc�, jovem?";
	next;
	mes "[Hans Hadenheim]";
	mes "Essa Geffen � estranha.";
	mes "Mas valeu a pena viajar da Rep�blica de Schubaltzwald at� aqui.";
	next;
	if (select("Rep�blica de Schubaltzwald?", "Ent�o, por que voc� est� viajando?") == 1) {
		mes "[Hans Hadenheim]";
		mes "Voc�...";
		mes "N�o conhece a Rep�blica de Schubaltzwald?";
		next;
		mes "[Hans Hadenheim]";
		mes "Voce sabe, aliado do reino de Rune-Midgarts.";
		mes "Um... Nossa cidade capital � Juno?";
		next;
		mes "[Hans Hadenheim]";
		mes "Voc� realmente deveria se atualizar nos eventos globais!";
		close;
	}
	mes "[Hans Hadenheim]";
	mes "Ah, estou viajando a neg�cios.";
	mes "Parece que o com�rcio estrangeiro d� muito dinheiro.";
	next;
	mes "[Hans Hadenheim]";
	mes "Todas essas cidades que est�o sendo descobertas por exploradores.";
	mes "Est�o fazendo as importa��es e exporta��es explodirem!";
	next;
	mes "[Hans Handenheim]";
	mes "Enfim...";
	next;
	mes "[Hans Hadenheim]";
	mes "Voc� foi a alguma das terras novas?";
	mes "Elas s�o muito interessantes, e voc� pode aprender muito com a cultura estrangeira.";
	next;
	mes "[Hans Hadenheim]";
	mes "Mas se voc� quiser apreciar uma bela vista.";
	mes "Sugiro que visita minha cidade natal, Juno.";
	mes "� muito bonita, sabe.";
	close;
}

// ------------------------------------------------------------------
geffen_in,39,127,2	script	Vidente#gef	4_M_BIBI,{
	mes "[Vidente]";
	mes "Ah...";
	mes "N�o diga!";
	mes "Voc� veio saber seu futuro, n�o?";
	mes "Eu sei...";
	mes "Eu sei...";
	mes "Posso prever o futuro!";
	mes "Ent�o, sobre o que voc� quer saber?";
	next;
	switch(select("Vida!", "Amor!", "Dinheiro!", "Notas!", "Futuro!", "Moda!")) {
		case 1:
		mes "[Vidente]";
		switch(rand(1,5)) {
			case 1:
			mes " Vida...?";
			mes "Nossa, � uma categoria ampla.";
			mes "Mas vou entrar em contato com alguns esp�ritos e verei o que posso fazer.";
			next;
			mes "[Vidente]";
			mes "Hmmm...";
			mes "Certo, consegui algo.";
			mes "Hmmm voc� viver� at� uma idade avan�ada.";
			mes "At� quando?";
			next;
			mes "[Vidente]";
			mes "^333333*cof!*^000000enta e nove anos.";
			mes "Isso n�o � �timo?";
			mes "� uma idade avan�ada, e voc� ainda tem muitos anos aben�oados para aproveitar.";
			next;
			mes "[Vidente]";
			mes "E voc� tamb�m ter� sucesso sempre.";
			mes "Voc� ter� sucesso em obter vit�rias e derrotas!";
			next;
			mes "[Vidente]";
			mes "Voc� talvez n�o entenda esse peda�o de sabedoria agora.";
			mes "Mas quando souber mais sobre esse mundo maluco, ele far� sentido.";
			next;
			break;
			case 2:
			mes " Hmm...";
			mes "O que posso te contar sobre a vida?";
			mes "Vou entrar em contato com o mundo dos esp�ritos.";
			next;
			mes "[Vidente]";
			mes "Certo, entendi!";
			mes "Seus sonhos se tornar�o realidade!";
			next;
			mes "[Vidente]";
			mes "Claro, n�o sei bem quais sonhos.";
			mes "Mas espero que sejam os agrad�veis que se tornar�o realidade, e n�o aqueles seus pesadelos estranhos.";
			next;
			mes "[Vidente]";
			mes "Qual sonhos exatamente?";
			mes "Bem, os esp�ritos est�o meio reticentes hoje.";
			mes "Eles n�o est�o com humor para falar.";
			mes "Eles tamb�m t�m vida, sabe.";
			mes "Espere, isso n�o faz sentido.";
			next;
			break;
			case 3:
			mes " Sinto que voc� est� prestes a tomar uma decis�o que talvez se arrependa.";
			mes "Aconselho que voc� espere e reflita.";
			next;
			mes "[Vidente]";
			mes "Embora a press�o seja grande, lembre-se de que as decis�es tomadas impulsivamente s�o normalmente ruins.";
			mes "Respire fundo e relaxe.";
			next;
			mes "[Vidente]";
			mes "Mesmo se voc� estiver sem tempo.";
			mes "� melhor planejar tudo cuidadosamente para n�o desperdi�ar esfor�os ou cometer erros.";
			next;
			mes "[Vidente]";
			mes "Lembre-se de que calma e paci�ncia s�o as chaves para resolver qualquer crise.";
			next;
			break;
			case 4:
			mes " Hmmm... Sinto que voc� est� passando por uma fase dif�cil.";
			mes "Voc� deveria priorizar seguran�a ou felicidade?";
			next;
			mes "[Vidente]";
			mes "Sugiro que voc� pense cuidadosamente antes de decidir o seu caminho.";
			mes "E lembre-se, voc� apenas aprender� quando cometer erros.";
			next;
			mes "[Vidente]";
			mes "Se voc� planejar cuidadosamente e realizar a��es positivas, voc� pode ter tudo!";
			next;
			break;
			case 5:
			mes " Hmm...";
			mes "Sinto que voc� brigou com algu�m pr�ximo a voc� Algu�m com quem voc� se importa muito.";
			next;
			mes "[Vidente]";
			mes "Voc� precisa tomar a iniciativa!";
			mes "Resolva esse problema sem se deixar abalar por suas emo��es.";
			next;
			mes "[Vidente]";
			mes "Tente consertar seus erros, engula seu orgulho e pe�a desculpas sinceramente se precisar.";
			mes "Uma amizade vale isso? Eu acho que sim.";
			next;
		}
		mes "[Vidente]";
		mes "Bem, espero ter sanado todas as suas d�vidas sobre o futuro.";
		mes "Afinal, meu trabalho � ser um consultor ps�quico. Volte quando quiser.";
		close;
		case 2:
		mes "[Vidente]"; 
		switch(rand(1,4)) {
			case 1:
			mes "Quer saber seu futuro no amor?";
			mes "Oh ho Ent�o voc� gosta de algu�m!";
			mes "Vamos, pode me contar!";
			next;
			mes "[Vidente]";
			mes "Certo...";
			mes "Sinto uma forte energia amorosa emanando da sua alma.";
			mes "� intimidadora, e afasta os fracos.";
			next;
			mes "[Vidente]";
			mes "Ent�o basicamente, prevejo que voc� logo atrair� pessoas realmente fortes.";
			mes "Atletas, fisiculturistas, pedreiros, gente desse tipo.";
			next;
			mes "[Vidente]";
			mes "Ent�o se � isso que voc� quer, parab�ns!";
			mes "A sorte lhe sorri hoje.";
			next;
			mes "[Vidente]";
			mes "Mas se voc� quer o oposto, sinto muito.";
			mes "A sorte sorri sarcasticamente hoje.";
			mes "Mas n�o � tarde demais para mudar o destino!";
			next;
			break;
			case 2:
			mes " Amoooor, ent�o?";
			mes "Deixe-me entrar em contato com os esp�ritos rapidamente.";
			next;
			mes "[Vidente]";
			mes "Ah! Uma velha chama se reacender�!";
			mes "N�o sei se a pessoa se apaixonar� por voc� de novo.";
			mes "Se pedir� dinheiro ou se est� de volta para se vingar...";
			next;
			mes "[Vidente]";
			mes "Mas um velho amor voltar� � sua vida.";
			mes "De alguma forma.";
			mes "Ent�o, se isso for uma boa not�cia, parab�ns!";
			mes "Mas se for uma not�cia ruim, tome cuidado!";
			next;
			break;
			case 3:
			if (Sex == SEX_MALE) {
				mes " Um... A menina com quem voc� est� saindo agora � ideal para voc�!";
			} else {
				mes " Um... O menino com quem voc� est� saindo agora � ideal para voc�!";
			}
			next;
			switch(select("Como voc� sabe?", "Voc� est� errado!", "Estou solteiro!")) {
				case 1:
				mes "[Vidente]";
				mes "Bem...";
				mes "N�s que temos poderes ps�quicos somos muito bons nesse tipo de coisa.";
				mes "E � t�o bom ver que voc� est� feliz com a pessoa que voc� gosta!";
				close;
				case 2:
				mes "[Vidente]";
				mes "Voc� n�o me deixou terminar a frase.";
				next;
				if (Sex == SEX_MALE) {
					mes "[Vidente]";
					mes "A menina com quem voc� est� saindo agora � ideal para voc�.";
				} else {
					mes "[Vidente]";
					mes "O menino com quem voc� est� saindo agora � ideal para voc�.";
				}
				mes " Se voc� quiser passar o resto da vida infeliz!";
				next;
				mes "[Vidente]";
				mes "Mas se voc� for terminar, fa�a isso logo e tente manter a amizade.";
				next;
				mes "[Vidente]";
				mes "Isso far� com que voc�s dois se tornem melhores.";
				mes "Pelo menos � o que eu acho.";
				close;
				case 3:
				mes "[Vidente]";
				mes "Oh...";
				mes "Bem, me desculpe.";
				mes "As vezes eu misturo o presente e o futuro.";
				mes "Voc� entende n�o �, j� que estou sempre prevendo o futuro...";
				next;
				if (Sex == SEX_MALE) {
					mes "[Vidente]";
					mes "O que eu quis dizer na verdade foi que ^3355FFvoc� encontrar� a mulher perfeita em breve^000000.";
				} else {
					mes "[Vidente]";
					mes "O que eu quis dizer na verdade foi que ^3355FFvoc� encontrar� o homem perfeito em breve^000000.";
				}
				close;
			}
			break;
			case 4:
			mes " Querendo um romance, eh?";
			mes "Sempre bom ter novas emo��es.";
			next;
			mes "[Vidente]";
			mes "Estranho, eu vejo um tri�ngulo amoroso em seu futuro.";
			mes "N�o, espere!";
			mes "Na verdade...";
			mes "Um dec�gono amoroso?";
			next;
			mes "[Vidente]";
			mes "Qual o pol�gono com onze lados?";
			mes "Ah, voc� n�o pode esperar que eu saiba qual �.";
			mes "Sou um vidente, n�o um matem�tico.";
			next;
		}
		mes "[Vidente]";
		mes "O amor � sempre divertido!";
		mes "Mesmo nesse mundo sombrio, o amor nos rodeia com seu brilho convidativo.";
		mes "Cuide de quem for especial para voc�, e volte para outra leitura!";
		close;
		case 3:
		mes "[Vidente]"; 
		switch(rand(1,3)) {
			case 1:
			mes " Dinheiro?";
			mes "Bem, aposto que voc� tem mais sorte com isso do que eu.";
			mes "Afinal, eu fico sentado aqui o dia inteiro, fazendo consultas de gra�a!";
			next;
			mes "[Vidente]";
			mes "Bem...";
			mes "Os esp�ritos me dizem que voc� talvez n�o ganhe na loteria.";
			mes "N�o importa quantos t�quetes voc� compre. Me desculpe, mas � verdade.";
			next;
			mes "[Vidente]";
			mes "Mas eu impedi voc� de continuar perdendo dinheiro com isso!";
			mes "Se voc� comprasse t�quetes de loteria durante toda a vida, gastaria quase uma fortuna!";
			next;
			break;
			case 2:
			mes "Ah sim.";
			mes "Entrarei em contato com os esp�ritos.";
			mes "Eles normalmentes d�o bons conselhos financeiros, mesmo n�o tendo nenhum tipo de economia l�.";
			next;
			mes "[Vidente]";
			mes "Primeiro, controle seu dinheiro e s� gaste o que puder.";
			mes "Quer uma dica?";
			mes "De cada dez zenys que voc� ganhar, guarde um para investir ou deixar de reserva.";
			next;
			mes "[Vidente]";
			mes "E, n�o importa o que voc� fa�a, n�o seja um vidente em Rune-Midgard.";
			mes "Parece que o que d� dinheiro mesmo � descobrir novas terras.";
			mes "Por que eu n�o fiz isso?";
			next;
			break;
			case 3:
			mes " Ent�o voc� quer saber sobre dinheiro.";
			mes "Vou entrar em contato com os esp�ritos...";
			next;
			mes "[Vidente]";
			mes "Ah, sim.";
			mes "Eles est�o me dizendo que � melhor ser sempre cauteloso.";
			mes "Certamente voc� deve saber que exploradores nunca gastam mais do que a verba destinada a eles.";
			next;
			mes "[Vidente]";
			mes "E voc� tamb�m deve evitar apostar com seu dinheiro.";
			mes "Quero dizer que voc� deve guardar e investir cuidadosamente.";
			mes "N�o se deixe cair na tenta��o de entrar em esquemas do tipo fique-rico-r�pido!";
			next;
			mes "[Vidente]";
			mes "Mas por outro lado, esquemas desse tipo podem ser bons, se voc� souber o que est� fazendo.";
			mes "Estou certo, n�o?";
			next;
		}
		mes "[Vidente]";
		mes "Bem, precisamos de dinheiro para viver, mas ter dinheiro n�o significa ter uma vida plena.";
		mes "N�o esque�a que existem outras coisas que s�o importantes tamb�m.";
		mes "E tente n�o ficar muito nervoso, certo?";
		close;
		case 4:
		mes "[Vidente]";
		switch(rand(1,4)) {
			case 1:
			mes " Suas notas? Voc� ainda est� na escola?";
			mes "Estou impressionado!";
			mes "Seus olhos me dizem que voc� � muito maduro para a sua idade.";
			mes "Certo, vou consultar os esp�ritos...";
			next;
			mes "[Vidente]";
			mes "Hm? Tudo que eles disseram foi 'Voc� estuda?'";
			mes "Bem, acho que acabei respondendo sua pergunta com outra pergunta!";
			next;
			break;
			case 2:
			mes " Voc� est� me perguntando sobre as suas notas?";
			mes "Que estranho.";
			mes "Digo, voc� est� querendo saber sobre o seu boletim?";
			next;
			mes "[Vidente]";
			mes "A educa��o � muito importante, mas n�o desanime se suas notas n�o s�o t�o boas quanto voc� gostaria.";
			next;
			mes "[Vidente]";
			mes "Talvez o seu estilo de aprendizado n�o seja condizente com o m�todo da sua escola.";
			mes "Ou talvez voc� n�o esteja muito interessado nos assuntos que ensinam l�.";
			mes "� compreens�vel.";
			next;
			mes "[Vidente]";
			mes "Os esp�ritos me dizem que voc� deve tentar diferentes estilos de aprendizagem.";
			mes "Para garantir que obtenha as notas que quer.";
			next;
			mes "[Vidente]";
			mes "Sim...";
			mes "Os esp�ritos est�o incrivelmente pregui�osos hoje.";
			next;
			break;
			case 3:
			mes "[Vidente]";
			mes "Hmm. Os esp�ritos est�o rudes hoje.";
			mes "Eles est�o dizendo 'Se voc� est� t�o preocupado com suas notas.";
			mes "Por que n�o vai falar com seu professor?'";
			next;
			mes "[Vidente]";
			mes "Agora que estou pensando nisso, eles tem raz�o.";
			mes "Por que voc� n�o vai falar com seu professor para ver se h� algum problema?";
			next;
			mes "[Vidente]";
			mes "Eles s�o pagos para te ajudar.";
			mes "E minha consulta � de gra�a.";
			mes "Ent�o...";
			next;
			break;
			case 4:
			mes "Ah, legal!";
			mes "Sinto que voc� logo vai tirar um Dez...";
			mes "Em Esfor�o!";
			next;
			mes "[Vidente]";
			mes "N�o posso te dizer quais as suas notas.";
			mes "Talvez voc� esteja destinado a tirar dez em todas as mat�rias, mas se eu falar isso...";
			next;
			mes "[Vidente]";
			mes "Voc� provavelmente relaxaria, pararia de estudar, reprovaria e causaria um paradoxo no tempo.";
			mes "Porque eu realmente preciso ir para o futuro para ver o que vai acontecer, entende?";
			next;
			mes "[Vidente]";
			mes "Ao inv�s de se preocupar com paradoxos no tempo, por que voc� n�o faz o seu pr�prio destino?";
			next;
		}
		mes "[Vidente]";
		mes "De qualquer forma, � dif�cil se concentrar nos estudos, mas pode compensar.";
		mes "Espero que voc� se d� bem no que voc� decida fazer.";
		close;
		case 5:
		mes "[Vidente]";
		mes "O futuro?";
		mes "Achei que estava impl�cito que tudo que eu falar ser� sobre o futuro, de qualquer tema que voc� escolha.";
		next;
		mes "[Vidente]";
		mes "Acho que voc� quer saber sobre o futuro em geral.";
		mes "Vou consultar os esp�ritos, e veremos o que eles t�m a dizer, ok?";
		next;
		mes "[Vidente]";
		switch(rand(1,4)) {
			case 1:
			mes " Hmm...";
			mes "No futuro, Sexo, Viol�ncia e Rock and Roll ser�o abolidos.";
			mes "A humanidade viver� numa era de paz e chatice.";
			next;
			mes "[Vidente]";
			mes "N�o sei quando isso vai acontecer, mas espero que demore bastante!";
			next;
			break;
			case 2:
			mes "No futuro a Terra ser� protegida por um �nico rob�:";
			mes "Plutonium Overdrive Ignition Negatron G, ou POING.";
			next;
			mes "[Vidente]";
			mes "POING expulsou os invasores Kylorianos por muito tempo, at� ser derrotado pelo Nyxltron 47, feito pelo Dr. Hubris.";
			next;
			mes "[Vidente]";
			mes "Mas felizmente o doutor Pyeus finalizou bem a tempo o Dispostivo de Desconhecimento de Gravidade para o POING.";
			next;
			mes "[Vidente]";
			mes "Ent�o POING levantou-se novamente, renascido como o Her�i Autom�tico: GOD-POING.";
			mes "Que obviamente destruiu o Nyxltron 47.";
			next;
			mes "[Vidente]";
			mes "Essa � provavelmente a coisa mais importante que posso te contar sobre o futuro.";
			mes "O resto � muito sem gra�a.";
			next;
			break;
			case 3:
			mes " No futuro, acredite ou n�o, a internet ser� substitu�da por um grande c�rebro.";
			mes "N�o sei como, mas acredite, o c�rebro � enorme.";
			next;
			mes "[Vidente]";
			mes "Gra�as ao grande n�mero de blogs, o c�rebro se torna pac�fico, e decide n�o dominar o mundo.";
			mes "Como tinha planejado antes.";
			next;
			mes "[Vidente]";
			mes "Sim...";
			mes "Esse c�rebro se torna uma fonte do bem, um benfeitor da ra�a humana.";
			mes "Pelo menos enquanto as pessoas continuarem a escrever assuntos pessoais na internet.";
			next;
			break;
			case 4:
			mes " No futuro, muitas plantas ser�o modificadas geneticamente.";
			mes "Existir�o muitos tipos diferentes!";
			mes "� bem estranho!";
			next;
			mes "[Vidente]";
			mes "Eventualmente surgir�o �rvores que ao inv�s de frutos, originam clones de celebridades.";
			mes "Hoje, isso parece um milagre da ci�ncia, e uma amea�a �s estrelas de Hollywood.";
			next;
			mes "[Vidente]";
			mes "Mas as pessoas que compram essas �rvores s�o as mesmas que usam aquelas camisetas estranhas...";
			next;
			mes "[Vidente]";
			mes "Sabe, que tem um senso de humor tosco, com a palavra 'Gatostr�fico' e o desenho de um gatinho vestido como um cientista maluco ou algo do g�nero.";
			next;
		}
		mes "[Vidente]";
		mes "Bem...";
		mes "Essa � a minha predi��o.";
		mes "Voc� pode argumentar com a sabedoria do mundo dos esp�ritos?";
		close;
		case 6:
		mes "[Vidente]";
		mes "Moda...?";
		mes "O que isso tem a ver com o sobrenatural?";
		mes "Bem, entrarei em contato com os esp�ritos.";
		mes "L� vamos n�s...";
		next;
		mes "[Vidente]"; 
		switch(rand(1,5)) {
			case 1:
			mes "[Vidente]";
			mes ".........";
			next;
			mes "[Vidente]";
			mes "Estou vendo algo...";
			mes "Parece, com...";
			next;
			mes "[Vidente]";
			mes "Um... Peixe?";
			mes "Na cabe�a de algu�m?";
			next;
			mes "[Vidente]";
			mes "Que vis�o horr�vel!";
			next;
			break;
			case 2:
			mes " � bom usar elmos valiosos!";
			mes "E tamb�m � bom usar roupas bonitas!";
			mes "Mas lembre-se...";
			next;
			mes "[Vidente]";
			mes "N�o importa o quanto voc� gastou no seu guarda-roupa, voc� ainda vai parecer bobo se n�o usar pe�as que combinem.";
			next;
			mes "[Vidente]";
			mes "Vou te dar um exemplo de gente que n�o sabe se vestir.";
			mes "Imagine um Crusader usando uma coroa, orelhas de elfo e um Iron Cain.";
			next;
			mes "[Vidente]";
			mes "Ele n�o ia parecer na moda, ia parecer o Pr�ncipe da Breguice.";
			next;
			break;
			case 3:
			mes " Eu vejo...";
			mes "Que chap�us de caub�i ser�o muito populares entre garotas Super Novices em breve!";
			next;
			mes "[Vidente]";
			mes "Voc� n�o concorda?";
			mes "Chap�us de caub�i ficam �timos em Super Novices!";
			next;
			break;
			case 4:
			mes " Pode ser uma boa id�ia seguir um tema.";
			mes "Por exemplo, voc� pode usar Asas de Anjo e Orelhas de Anjo ao mesmo tempo.";
			next;
			mes "[Vidente]";
			mes "Claro que isso pode ser caro demais para a maioria das pessoas, mas voc� entendeu.";
			next;
			break;
			case 5:
			mes " Eu prevejo que sombreros se tornar�o muito populares quando um grande grupo de Bardos formarem uma guild na qual os membros s� usar�o sombreros.";
			next;
			mes "[Vidente]";
			mes "Ou ser� que � o Boina Alada que estourar� em popularidade?";
			mes "Os dois chap�us s�o muito estilosos, principamente em bardos...";
			next;
		}
		mes "[Vidente]";
		mes "Bem...";
		mes "N�s, videntes, n�o sabemos muito sobre moda, mas eu espero ter ajudado.";
		close;
	}
}

// ------------------------------------------------------------------
geffen_in,109,72,2	script	Perito em Monstros#gef	4_F_01,{
	mes "[Estheres]";
	mes "Ol�, sou o especialista em Monstros daqui de Geffen. Voc� gostaria de saber alguma coisa?";
	next;
	switch(select("Area de Monstros", "Not�cias Recentes", "Era dos Monstros", "Teoria do Jellopy")) {
		case 1:
		mes "[Estheres]";
		mes "Bem, como voc� talvez saiba, j� que Mages e Wizards treinam em Geffen.";
		mes "Os monstros n�o chegam muito perto da cidade.";
		mes "Ent�o aventureiros fatigados podem descansar aqui.";
		next;
		mes "[Estheres]";
		mes "Mas se voc� quiser ca�ar monstros fortes, pode cruzar a ponte a oeste e lutar com Kobolds.";
		next;
		mes "[Estheres]"; 
		if (BaseLevel > 80) {
			mes " Voc� parece forte o suficiente para ir at� l�.";
			mes "Mas se vir algu�m com menos experi�ncia atravessando a ponte, poderia avis�-lo do perigo.";
		} else {
			mes " Mas se voc� est� planejando ir l�, melhor n�o ir sozinho.";
			mes "Recomendo que voc� v� preparado se quiser lutar com esse tipo de monstros.";
		}
		break;
		case 2:
		mes "[Estheres]";
		mes "Novidades?";
		mes "Bem, o Museu de Monstros de Juno est� aberto ao p�blico.";
		mes "H� uma exposi��o fascinante, e v�rios monstros est�o a mostra.";
		next;
		mes "[Estheres]";
		mes "Eu li sobre todos os tipos de monstros nas livrarias de Juno e de Prontera, e cacei alguns.";
		mes "Mas agora tenho a chance de ver monstros muito fortes pessoalmente!";
		next;
		mes "[Estheres]";
		mes "E os aventureiros de Rune-Midgarts fizeram descobertas fant�sticas em suas explora��es.";
		next;
		mes "[Estheres]";
		mes "Quando uma nova terra � encontrada, normalmente existem l� monstros desconhecidos.";
		next;
		mes "[Estheres]";
		mes "Ent�o estamos descobrindo monstros novos o tempo todo!";
		mes "A variedade de criaturas que povoam o planeta � impressionante.";
		break;
		case 3:
		mes "[Estheres]";
		mes "A verdade � que os monstros existem desde tempos antigos.";
		mes "A Era dos Monstros ocorreu quando o poder deles estava no auge.";
		next;
		mes "[Estheres]";
		mes "Eles oprimiram os humanos por muito tempo.";
		mes "Mas foram aniquilados numa guerra entre os monstros e a humanidade.";
		next;
		mes "[Estheres]";
		mes "Entretanto, o equil�brio da natureza mudou, e os monstros retornaram.";
		mes "Poucas pessoas sabem disso, mas os monstros j� foram criaturas gentis.";
		mes "� triste...";
		break;
		case 4:
		mes "[Estheres]";
		mes "Ah sim, Jellopy.";
		mes "Parece que todos os monstros daqui s�o compostos de Jellopy.";
		mes "Mas isso � apenas uma cristaliza��o formada por alguns monstros...";
		mes "Ou � mais que isso?";
		next;
		mes "[Estheres]";
		mes "Nossas pesquisas sobre monstros antigos e estudos feitos com monstros descobertos recentemente mostram que nenhum tra�o de Jellopy � encontrado em monstros fortes.";
		next;
		mes "[Estheres]";
		mes "Mas mesmo assim, muitos acreditam numa rela��o entre Jellopys e monstros.";
		mes "Apesar de ser dif�cil de acreditar nisso.";
		next;
		mes "[Estheres]";
		mes "� poss�vel que as Jellopys estejam relacionadas com a personalidade e a for�a dos monstros.";
		mes "Ent�o, se voc� misturar Jellopy com alguma coisa, poderia criar um monstro mais forte.";
		next;
		mes "[Estheres]";
		mes "Mas fazer esse tipo de experimento pode ser perigoso.";
		mes "Voc� pode acabar soltando monstros assustadores no mundo...";
		break;
	}
	close;
}


