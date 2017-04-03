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
| - Nota: Npcs comuns na cidade prontera                            |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Ruas]
//-------------------------------------------------------------------

prontera,160,330,4	script	Guarda#pront::prtguard	8W_SOLDIER,{
	mes "[Guarda de Prontera]";
	mes "Bem vindo a prontera.";
	close;
}
prontera,223,99,1	duplicate(prtguard)	Guarda#2pront	8W_SOLDIER
prontera,229,104,5	duplicate(prtguard)	Guarda#3pront	8W_SOLDIER
prontera,47,339,5	duplicate(prtguard)	Guarda#4pront	8W_SOLDIER

//-------------------------------------------------------------------
prontera,101,288,3	script	Shuger#pront	4W_M_02,{
	mes "[Shuger]";
	mes "Fora dos port�es da cidade, h� um bixinho rosa chamado ^000077Poring^000000.";
	next;
	mes "[Shuger]";
	mes "Apesar de ser bonito na apar�ncia e n�o atacar as pessoas, Porings s�o conhecidos por devorar itens caidos no ch�o para dentro deles.";
	next;
	mes "[Shuger]";
	mes "Portanto, se h� algo no ch�o que voc� queira pegar, tenha cuidado para que n�o seja consumido por um Poring.";
	mes "Apesar de que...";
	mes "Porings s�o muito fracos...";
	next;
	mes "[Shuger]";
	mes "O de cor verde se chama ^000077Poporing^000000 ele � mais resistente que o Poring.";
	mes "Novatos geralmente cometem o erro de atac�-lo sem saberem que ele � muito forte...";
	mes "Por isso tenha cuidado!";
	close;
}

//-------------------------------------------------------------------
prontera,54,240,6	script	Tono#pront	4W_M_01,{
	mes "[Tono]";
	mes "Voc� sabia?";
	next;
	mes "[Tono]";
	mes "O Fabre � a larva dos Creamys.";
	mes "Quando o Fabre amadurece, ele se fecha num Casulo";
	next;
	mes "[Tono]";
	mes "Ap�s permanecer no Casulo por algum tempo, ele torna-se um Creamy, uma esp�cie de borboleta, bem mais forte do que um Fabre comum.";
	next;
	mes "[Tono]";
	mes "H� um outro monstro que passa por uma dessas evolu��es tamb�m...";
	mes "O Picky.";
	next;
	mes "[Tono]";
	mes "Pickys s�o muito bonitinhos quando jovens, mas quando crescem, se transformam em tipo de pass�ro enorme, muito desajeitado chamado Peco Peco.";
	mes "Na verdade...";
	mes "Falar sobre puberdade � estranho.";
	close;
}

//-------------------------------------------------------------------
prontera,106,116,6	script	Merideth#pront	4_F_02,{
	mes "[Merideth]";
	mes "O tempo estava bom no meu dia de folga ent�o minha fam�lia e eu fomos a um piquenique.";
	mes "N�s escolhemos ir para uma �rea um pouco isolada onde n�s vimos algo realmente interessante...";
	next;
	mes "[Merideth]";
	mes "Foi um grande grupo de zang�es gigantes!";
	mes "O mais estranho de tudo era que eles eram todos controlados por uma tao de Abelha Rainha, seguindo cada comando seu.";
	next;
	mes "[Merideth]";
	mes "Eles podem ser apenas insetos, mas acho que eles estavam certos.";
	mes "Homens realmente deveria receber comandos a partir de n�s mulheres...";
	mes "N�s fazemos as coisas direito!";
	close;
}

//-------------------------------------------------------------------
prontera,160,133,2	script	YuPi#pront	8_F,{
	mes "[YuPi]";
	mes "Entre monstros da mesma forma, existem alguns mais ferozes que outros.";
	mes "Um exemplo s�o Porings e Poporings, que tem a mesma forma, mas for�as diferentes.";
	mes "� bom tomar cuidado ao atacar algum deles, pois voc� pode ser da mal.";
	next;
	mes "[YuPi]";
	mes "Normalmente, voc� pode determinar qual � qual pela diferen�a de cores.";
	mes "Como eu disse, tomar cuidado � sempre bom, ent�o cheque os nomes dos inimigos antes de atacar.";
	close;
}

//-------------------------------------------------------------------
prontera,149,202,2	script	YuNa#pront	8_F_GIRL,{
	mes "[YuNa]";
	mes "Odin � o mais poderoso dos Deuses, o todo-poderoso, o lorde dos Aesir.";
	mes "Ele � um Deus guerreiro e muito S�bio.";
	mes "Para conseguir sua sabedoria sem-limites, Odin bebeu da �gua do po�o de Imir, e para isso teve de perder um de seus olhos.";
	mes "Isso mostra sua incr�vel coragem e determina��o!";
	mes "Aquela est�tua no centro da fonte � Odin.";
	next;
	mes "[YuNA]";
	mes "Olhe!";
	mes "Ele n�o est� usando seu capacete de �guia, n�o tem barba, e nem est� montado em Sleipnir, seu poderoso cavalo de oito patas!";
	mes "Isso � um ultraje!";
	mes "Eu n�o sei como o Rei aprovou essa est�tua como o principal monumento de nossa cidade!";
	close;
}

//-------------------------------------------------------------------
prontera,78,150,3	script	Dairenne#pront	4_F_01,{
	mes "[Menina da Cidade]";
	mes "Ahh...";
	mes "As ruas ficam lotadas nos dias de hoje.";
	mes "*Tosse Tosse*";
	mes "Olhe para toda essa poeira, nem tudo sobre morar na capital � bom.";
	mes "De qualquer forma, eu posso ajud�-lo?";
	next;
	if (select("Conversar","Ir Andando") == 1) {
		mes "[Menina da Cidade]";
		mes "Gostaria de saber se voc� tamb�m � interessado em moda ou em vestidos.";
		mes "*Risos*.";
		mes "Nesta esta��o de calor o tema colorido � definitivamente perfeito.";
		mes "Vestidos extravagantes e magn�ficos podem ser a sua cara.";
		next;
		mes "[Menina da Cidade]";
		mes "Para obter tais cores deslumbrantes ouvi dizer que as alfaiates usam um corante que s� � fabricado em Morroc.";
		mes "O pior de tudo � saber que o pre�o est� al�m da imagina��o.";
		next;
		mes "[Menina da Cidade]";
		mes "Aahhhh...";
		mes "Eu gostaria de poder usar um vestido.";
		mes "Mesmo que seja apenas uma vez...";
		close;
	}
	mes "[Menina da Cidade]";
	mes "Hm...?";
	mes "Por que voc� n�o fala comigo primeiro?";
	mes "Que pessoa estranha...";
	close;
}


//-------------------------------------------------------------------
// - [Casas]
//-------------------------------------------------------------------
prt_in,178,92,0	script	Bibliotec�rio Mestre#pront	1_M_LIBRARYMASTER,{
	mes "[Bibliotec�rio Mestre]";
	mes "Aqui, no ramo ocidental da Biblioteca de Prontera, ";
	mes "mantemos registros de monstros encontrados em v�rios cavernas espalhadas por todo o reino de Rune-Midgard.";
	next;
	mes "[Bibliotec�rio Mestre]";
	mes "Voc� ver� que nossas enciclop�dias de monstros s�o de grande conveni�ncia,";
	mes "n�s organizamos as informa��es das criaturas pelo lugar em que residem.";
	next;
	mes "[Bibliotec�rio Mestre]";
	mes "Devo dizer que este lugar � uma das refer�ncia mais �teis para voc�s aventureiros.";
	mes "Ao lidar com monstros � bom estar sempre informado para saber contra o que voc� luta.";
	mes "Agora, ee voc� quiser de procurar por registros de monstros organizados por suas propriedades.";
	mes "Por favor visite a parte oriental de nossa biblioteca.";
	close;
}

//-------------------------------------------------------------------
prt_in,175,50,0	script	Bibliotec�ria#pront	1_F_LIBRARYGIRL,{
	mes "[Bibliotec�ria Ellen]";
	mes "Bem-vindo!";
	mes "Os dados nesta biblioteca est�o separados pelos nomes dos monstros.";
	mes "Voc� pode ler livros e escritas de seu interesse aqui.";
	mes "Aqui tamb�m existem livros sobre as classes dos Ferreiros e Mercadores.";
	next;
	mes "Ah!";
	mes "A pr�xima biblioteca tamb�m � muito interessante.";
	mes "Visite-a se puder.";
	close;
}

//-------------------------------------------------------------------
prt_in,47,141,0	script	Idoso#pront	1_M_KNIGHTMASTER,{
	mes "[Idoso]";
	mes "Os Esgotos de Prontera ficaram vazios por um longo tempo.";
	mes "Agora o lugar est� infestado de ^000077Besouros Ladr�es^000000!";
	next;
	mes "[Idoso]";
	mes "Estes insetos conseguem roubar rapidamente itens que caem no ch�o, e depois fogem com eles...";
	mes "Eles s�o ainda mais irritante do que as baratas!!";
	close;
}

//-------------------------------------------------------------------
prt_in,26,31,0	script	Idoso#2pront	1_M_JOBGUIDER,{
	mes "[Idoso]";
	mes "Voc� pode n�o acreditar em mim, mas eu vi uma coisa incr�vel nos ^000077Esgotos de Prontera^000000.";
	mes "Eu j� fui l� muitas vezes, pois sou um dos encarregados da manuten��o das tubula��es de l�...";
	mes "Conhe�o tudo como a palma da minha m�o!";
	mes "Eu vi a tal coisa.";
	mes "Na quarta noite remendando uma tubula��o furada no subsolo";
	mes "Eu contenplei...";
	mes "Era um ^000077Besouro Ladr�o^000000 brilhante!";
	mes "Dourado e reluzia no escuro! Foi muito estranho!";
	next;
	mes "[Idoso]";
	mes "Um Besouro Ladr�o Dourado, imagine s�!";
	mes "Ele tinha uma luz m�gica, acho que at� sagrada e parecia ser muito, mais muito forte!";
	mes "Como pode um bicho t�o repulsivo e sujo ter uma luz dessas?";
	close;
}

//-------------------------------------------------------------------
prt_in,180,20,2	script	Gar�om#pront	1_M_PUBMASTER,{
	mes "[Gar�om]";
	mes "Ol�, seja bem-vindo!";
	mes "Hehehe!";
	mes "A freguesia anda aumentando por aqui!";
	mes "Este j� foi um neg�cio bem dif�cil, sabe?";
	mes "Pelo menos os lucros sempre foram bons...";
	mes "Hehe, mas agora est�o melhores...";
	mes "A dificuldade?";
	mes "Ora, conseguir os ingredientes para a cozinha!";
	next;
	mes "[Gar�om]";
	mes "Como voc� deve saber, o aumento das hordas de monstros agressivos em torno das cidade do reino criou uma escassez na obeten��o de certas mat�rias-primas e produtos...";
	mes "Por isso, tentamos adaptar o menu do restaurante quando h� falta de alimentos.";
	mes "Fazemos especiais ou inventamos pratos mais simples pra n�o perder a clientela.";
	next;
	mes "[Gar�om]";
	mes "Ent�o, eu tenho contratado ca�adores para me trazerem ingredientes frescos e especiais.";
	mes "Mas a demanda excedeu a oferta nestes �ltimos dias.";
	next;
	mes "[Gar�om]";
	mes "Eu n�o posso manter o meu neg�cio ocupado sem meu menu especial 'Carapa�as de formiga ao molho' e 'Perna de Gafanhoto frita'...*Suspiro*";
	next;
	.@drink = 1;
	while(.@drink) {
		switch(select("'Carapa�a de formiga ao molho'?","'Perna de Gafanhoto frita'?","Eu... acho que vou indo.")) {
			case 1:
			mes "[Gar�om]";
			mes "� uma deleciosa iguaria e um cl�ssico local!";
			mes "� feito � partir das cascas das formigas do deserto sograt, ao sul daqui.";
			mes "Essas formiga s�o bem grandes e ferozes, e o melhor lugar para ca��-las � no Formigueiro Infernal...";
			mes "O problema � que l� �s vezes h� formigas demais... Por isso, a maioria das pessoas tem medo de enfrent�-las...";
			next;
			mes "[Gar�om]";
			mes "Mesmo assim, a maioria das pessoas tamb�m gostam de um belo prato de formiga ao molho...";
			mes "E adoram reclamar se acaba meu estoque.";
			next;
			break;
			case 2:
			mes "[Gar�om]";
			mes "Sim, as pernas de gafanhoto ficam especialmente boas fritas com azeite de olive...";
			mes "Uma del�cia.";
			mes "S� � pena que hoje os gafanhotos estejam t�o agressivos...";
			mes "Mas ainda assim, n�o s�o t�o dif�ceis de ca�ar.";
			mes "O problema � que eu sou meio covarde na hora de matar monstros, sen�o ia l� e ensinava uma li��o a eles!";
			next;
			mes "[Gar�om]";
			mes "�, mas do jeito que v�o as coisas logo, logo, vou ter que voltar a feazer pratos comuns de novo...";
			next;
			break;
			case 3:
			mes "[Gar�om]";
			mes "Bem, tenha cuidado l� fora, e coma uma pouco da pr�xima vez!";
			close2;
			.@drink = 0;
			break;
		}
	}
	end;
}

//-------------------------------------------------------------------
prt_in,173,24,2	script	Shevild#pront	4_M_03,{
	mes "[Shevild]";
	mes "Ei, colega!";
	mes "Chegue aqui e tome um drinque comigo!";
	mes "Eu tenho umas hist�rias boas pra te contar.";
	mes "Sabe, eu j� andei por todos os arredores de Prontera!";
	mes "Lugares cheios de monstros, lugares cheios de itens. �timos para treinar!";
	next;
	if (select("E como voc� foi pra tantos lugares?","�? E da�?") == 1) {
		mes "[Shevild]";
		mes "Ora, eu sou um cara muito talentoso!";
		mes "Eu j� fiz de tudo!";
		mes "Eu j� viajei bastante por a� fazendo servi�os para os aventureiros e para a cidade...";
		mes "Fazendo o qu�?";
		mes "Bem...h�...entregando coisas.";
		mes "�... Eu sei que �s vezes � um trabalho meio chato e sem gra�a, esse de fazer entregas.";
		next;
		mes "[Shevild]";
		mes "Mas assim eu tenho a oportunidade de viajar bastante e conhecer novos lugares!";
		mes "� muito divertido!";
		mes "Mas n�o pense que eu fa�o isso por divers�o...";
		mes "Eu sou um cara muito dedicado, viu?";
		mes "Se voc� precisa entregar alguma coisa, eu sou seu homem!";
		next;
		mes "[Shevild]";
		mes "Viajando por a� eu j� achei alguns lugares bem estranhos e tamb�m fascinantes...";
		mes "(� muito legal, porque eu sei que quase ningu�m aqui sabe deles... Hehehe.)";
		mes "Por exemplo, uma certa caverna que eu conhe�o...";
		mes "E tamb�m aquela floresta perigos�ssima...";
		next;
		switch(select("Que caverna?","Floresta perigosa?","Bem, eu preciso ir...")) {
			case 1:
			mes "[Shevild]";
			mes "Hmm... A caverna...";
			mes "Ela fica ao Norte daqui.";
			mes "Eu acompanhei alguns ca�adores at� l� uma vez.";
			next;
			mes "[Shevild]";
			mes "Embora existam muitos montros por l�, ouvi dizer que h� �timos tesouros tamb�m.";
			mes "Quando eu estive l�, mesmo estando com aventureiros experientes, era dif�cil n�o se perder.";
			next;
			mes "[Shevild]";
			mes "Chegou uma hora em que todos os caminhos pareciam dar no mesmo lugar.";
			mes "Est�vamos sem muitas op��es e ficando sem suprimentos.";
			mes "Ent�o, acabamos voltando...";
			mes "De m�os abanando, claro.";
			mes "Mas...";
			mes "Quem sabe eu volto l� algum dia.";
			next;
			if (select("Como eu fa�o pra chegar l�?","Bom, a gente se v� por ai.") == 1) {
				mes "[Shevild]";
				mes "O qu�?";
				mes "Mas � aqui do lado!";
				mes "Voc� deveria conhecer...";
				mes "� s� sair da cidade pelo port�o Norte.";
				mes "A caverna fica na parte de cima da floresta...";
				close;
			}
			mes "[Shevild]";
			mes "Tudo bem... Tome cuidado por a�.";
			close;
			case 2:
			mes "[Shevild]";
			mes "Essa floresta fica � nordeste daqui.";
			mes "Existem algumas ru�nas bem bonitas ali perto...";
			mes "Eu fui entregar um pacote para um ca�ador que mora l� uma vez.";
			mes "Antes dessas ru�nas, voc� vai ver a tal flotesta.";
			mes "Ela � cheia de texugos e macacos.";
			next;
			mes "[Shevild]";
			mes "� bom tomar cuidado l�...";
			mes "Se voc� deixar cair algum item no ch�o, os Yoyos saem correndo pra peg�-lo.";
			mes "E o pior � que se voc� atacar um deles, eles v�o se juntar contra voc�.";
			next;
			if (select("Como se chega l�?","Ah, cansei dessa conversa...") == 1) {
				mes "[Shevild]";
				mes "O caminho � um pouquinho complicado, mas se voc� seguir para o Norte e depois Leste, n�o tem como errar.";
				mes "S� cuidado com algumas plantas que tem pelo caminho...";
				mes "Elas atacam qualquer um que chegar muito perto.";
				close;
			}
			mes "[Shevild]";
			mes "Tudo bem, ent�o!...";
			mes "Lembre sempre de tomar cuidado quando viajar por a�.";
			close;
			case 3:
			mes "[Shevild]";
			mes "Tudo bem... Tome cuidado por a�.";
			close;
		}
	}
	mes "[Shevild]";
	mes "Bem, se tiver alguma d�vida, venha falar comigo~";
	close;
}

//-------------------------------------------------------------------
prt_in,177,20,2	script	TenSue#pront	4W_M_01,{
	switch(rand(3)) {
		case 1:
		mes "[TenSue]";
		mes "O que...?";
		mes "Ent�o, voc� est� cansado de s� matar monstros?";
		mes "N�o aguenta mais ficar dentro de calabou�os ou se perdendo nas florestas?...";
		next;
		mes "[TenSue]";
		mes "Hahaha, parece que voc� n�o est� confiante de sua for�a, hein?";
		mes "Hmm...";
		mes "Por que voc� n�o vai entra num cl�?";
		mes "Quero dizer, todos os caras dur�es fazem isso.";
		next;
		mes "[TenSue]";
		mes "Pessoalmente, eu n�o conhe�o nenhuma para te recomendar, ent�o voc� vai ter que procurar ao redor da cidade.";
		mes "Fazer alguns contatos, conex�es, voc� sabe, networking.";
		next;
		mes "[TenSue]";
		mes "Eu n�o sei mesmo se voc� n�o gosta de receber ordens, mas se esse � o caso, por que n�o fazer o seu pr�prio cl�?";
		close;
		case 2:
		mes "[TenSue]";
		mes "Uma vez que eu andei todo o caminho at� Al de Baran.";
		mes "Era muito perigoso com todos aqueles monstros!";
		next;
		mes "[TenSue]";
		mes "Eu quase morri!";
		mes "Alguns desses monstros s� ficavam me seguindo e tentando me matar, mesmo se eu n�o fizesse nada, s� de passar perto eles atacavam!";
		mes "Foi muito louco.";
		next;
		mes "[TenSue]";
		mes "Bem, ainda, sinto que tomar a rota mais dificil valeu a pena.";
		mes "Conheci alguns lugares bastante magn�ficos no caminho.";
		next;
		mes "[TenSue]";
		mes "Mesmo a cidade de Al de Baran tem uma vis�o espl�ndida para os olhos, com sua arquitetura elegante e seu rom�ntico canal.";
		next;
		mes "[TenSue]";
		mes "A sede da Corpora��o Kafra tamb�m est� localizada em Al de Baran.";
		mes "Voc� realmente deveria ir l� e verificar por si mesmo.";
		close;
		default:
		mes "[TenSue]";
		mes "O reino de Rune-Midgard � governado pelo benevolente Rei Tristan III.";
		next;
		mes "[TenSue]";
		mes "N�s realmente devemos a prosperidade de Rune-Midgard a ele.";
		mes "Ele foi capaz de convencer as pessoas a acolher estrangeiros em Prontera, bem como estabelecer o com�rcio com outras terras, como Amatsu e Kunlun.";
		next;
		mes "[TenSue]";
		mes "Mas �s vezes...";
		mes "Pode ser dif�cil de acreditar que ele � um l�der t�o brilhante e capaz.";
		next;
		mes "[TenSue]";
		mes "Afinal, a �nica vez que o vejo � quando ele est� realizando casamentos.";
		mes "Mesmo se um casamento n�o estiver acontecendo, ele ainda � o tipo de pessoa que vive em torno da igreja de Prontera!";
		next;
		mes "[TenSue]";
		mes "Por�m...";
		mes "Eu acho que pode acontecer um monte de coisas quando voc� � o senhor e governante de uma na��o inteira.";
		close;
	}
}

//-------------------------------------------------------------------
prt_in,177,18,2	script	Marvin#pront	1_F_PUBGIRL,{
	mes "[Marvin]";
	mes "Quando se trata de paquerar o sexo oposto, eu tenho que dizer � tudo quest�o de ^333399habilidade^000000.";
	next;
	mes "[Marvin]";
	if (Sex == SEX_MALE) {
		mes "Eu n�o posso ajud�-lo muito quando o assunto � falar com mulheres atraentes, como eu.";
	}
	else {
		mes "Eu realmente n�o tenho algum conselho de habilidades quando se trata de falar com um cara bonito.";
	}
	mes "Mas eu posso te ensinar o que eu sei sobre as habilidades que ajudam na batalha.";
	next;
	mes "[Marvin]";
	mes "A maioria das habilidades � maximizada no n�vel 10, e isso s�o muitos pontos...";
	next;
	mes "[Marvin]";
	mes "Ao decidir que habilidades voc� vai usar, seja muito cuidadoso.";
	mes "Pesquise a respeito delas, por que nem todas valem a pena ser maximizadas.";
	next;
	mes "[Marvin]";
	mes "Muitas vezes, abrimos m�os de certas habilidades por n�o temos pontos o bastante...";
	mes "Por isso em certas classes � importante ir at� o n�vel 50 de classe.";
	next;
	mes "[Marvin]";
	mes "Claro que versatilidade � algo importante, mas� sempre bom pensar com que tipo de pessoas voc� vai estar acompanhado.";
	mes "Minha dica � sempre a mesma:";
	mes "Estude, estude, estude!";
	mes "Voc� n�o vai querer se arrepender depois...";
	close;
}

//-------------------------------------------------------------------
prt_in,284,168,3	script	Ginedin Rephere#pront	1_M_JOBTESTER,{
	mes "[Ginedin Rephere]";
	mes "Hmmm...";
	mes "Espero que caiba todos os meus convidados aqui...";
	mes "Oh! Perd�o, eu mal percebi que voc� estava aqui!";
	next;
	switch(select("Conversar","Tingir Roupas","Cancelar")) {
		case 1:
		mes "[Ginedin Rephere]";
		mes "As pessoas ficam cada vez mais ricas, e podem gastar dinheiro com mais coisas.";
		mes "Eu acho isso maravilhoso, por que assim as pessoas podem deixar de usar farrapos e investirem em lindas roupas!";
		mes "Eu n�o acho que roupas bonitas sejam algo superfluo, como muitos acham.";
		mes "Mas � claro que antes voc� deve se preocupar em por comida na mesa!";
		next;
		mes "[Ginedin Rephere]";
		mes "Uma roupa bem escolhida faz com que voc� se sinta melhor consigo mesmo, e seja mais feliz.";
		mes "E eu adoro trabalhar com isso..";
		mes "Fazer roupas que deixem as pessoas mais felizes, que expressem as suas personalidades..";
		mes "Pode ser um trabalho muito dif�cil, mas � imensamente recompensador.";
		close;
		case 2:
		mes "[Ginedin Rephere]";
		mes "Ah...";
		mes "Voc� veio aqui tingir suas roupas?";
		mes "Eu sinto muito, eu estou ocupad�ssimo no momento, n�o posso mais tingir roupas.";
		mes "Volte mais tarde, e quem sabe eu tenho um tempinho pra voc�.";
		close;
		case 3:
		mes "[Ginedin Rephere]";
		mes "Por favor, sinta-se em casa.";
		mes "Perdoe-me por n�o poder lhe dar aten��o, tenho que organizar a minha festa.";
		close;
	}
}

//-------------------------------------------------------------------
prt_in,173,13,4	script	Cliente#SoloHan	4_M_04,{
	mes "[SoloHan]";
	if (getpartnerid()) {
		mes "Nossa...";
		mes "Acho que estou b�bado.";
		mes "*Hiccup!*";
		next;
		mes "[SoloHan]";
		mes "...O qu�!?";
		mes "Ah rapaz!";
		mes "Saia da minha frente!";
		if (Sex == SEX_MALE) {
			mes "Voc� parece um daqueles maridos que s� obedece a mulher!";
		}
		else {
			next;
			mes "[SoloHan]";
			mes "Acho que sei reconhecer uma esposa mandona quando vejo uma!";
			mes "V� irritar seu marido com alguma besteira!";
		}
		next;
		mes "[SoloHan]";
		mes "Me deixe em paz!";
		mes "N�o quero saber da sua felicidade conjugal!";
		mes "Vamos l�, Bachewcca!";
		mes "Fale pra eles que o tipo deles n�o � bem vindo aqui!";
		next;
		mes "[Bachewcca]";
		mes "^666666*Grrr...!*^000000";
		specialeffect EF_THROWITEM,AREA,"Cliente#Bachewcca";
		close;
	}
	else {
		mes "Nossa...";
		mes "Acho que estou b�bado~";
		mes "^666666*Hiccup...!*^000000";
		next;
		mes "[SoloHan]";
		mes "Ei, voc�...!";
		mes "Voc� compreende, n�o?!";
		mes "N�o fica chateado por ver todos esses rec�m-casados felizes?!";
		mes "Fica~? Eu tamb�m!";
		next;
		mes "[SoloHan]";
		mes "Como eles se atrevem a ficar felizes na nossa frente--!! ^666666*Snif*^000000 S� porque eles encontraram o amor verdadeiro, acham que s�o melhores que n�s?!";
		next;
		mes "[SoloHan]";
		mes "Lembro quando os casais eram educados e s� demonstravam seu amor com portas fechadas. Agora andam de m�os dadas e se agarram em p�blico. Qual �! Arrumem um quarto!";
		next;
		mes "[SoloHan]";
		mes "Quero dizer, ^666666*Sniff*^000000, n�o � como se eu fosse solit�rio nem nada. N�o preciiiso de uma mulher~!";
		mes "Certo, Bachewcca!";
		next;
		mes "[Bachewcca]";
		mes "...!";
		emotion e_no1,0,"Cliente#Bachewcca";
		next;
		mes "[SoloHan]";
		mes "N�o faz muita diferen�a se voc� � casado ou n�o, certo? Certo?!";
		mes "Vamos l�! Beba comigo!!";
		next;
		mes "^3355FFDo nada ele passou a me tratar como um amigo �ntimo.";
		mes "� meio constrangedor, mas uma bebida gr�tis n�o � m� id�ia...^000000";
		next;
		mes "^3355FF* Gulp Gulp Gulp *^000000";
		close;
	}
}

//-------------------------------------------------------------------
prt_in,170,14,0	script	Cliente#Bachewcca	4_M_ORIENT02,{
	mes "[Bachewcca]";
	mes "..............";
	mes "^666666*Gulp....gulp...*^000000";
	mes "Grrrrr!! Essa foi boa!";
	emotion e_sob;
	close;
}
