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
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Geffen                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
geffen,59,143,0	script	Meera#gef	4_F_02,{
	mes("[Meera]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Geffen, a Cidade da Magia!");
	next;
	mes("[Meera]\n Você gosta de mel?");
	next;
	mes("[Meera]\n Isto é muiiiito doce e delicioso.\n Não tenho certeza se é um afrodiziaco, mas eu sei de um fato que vai alivia-lo da fadiga e recuperar sua saúde!");
	next;
	mes("[Meera]\n Os zangões vivem nos campos e passam a vida recolhendo o néctar sob comando da Abelha Rainha.\n O Mel é feito a partir do nectar que eles reúnem.");
	next;
	mes("[Meera]\n Mas isso não é tudo.\n Há um tipo especial de mel que é feito somente para as Abelhas Rainhas comerem:\n ^CC6600Geléia Real^000000!");
	next;
	mes("[Meera]\n Nada se compara ao delicioso sabor da Geléia Real.\n E eu acho que é melhor pra você do que o mel comum!");
	close;
}

// ------------------------------------------------------------------
geffen,156,190,0	script	Orwalk#gef	4_KID01,{
	mes("[Orwalk]\n Interessante.\n Muito intrigante.\n Deixe-me lhe contar esta história maravilhosa.");
	next;
	mes("[Orwalk]\n Quando eu estava pesquisando magia, eu descobri este pergaminho misterioso.\n Ele descrevia esta árvore chamada Yggdrasil.");
	next;
	mes("[Orwalk]\n As folhas, sementes e frutos de Yggdrasil ligam todos os seres vivos deste mundo.\n De acordo com este pergaminho, Yggdrasil também está envolvido com a criação do mundo.");
	next;
	mes("[Orwalk]\n Falando nisso, também ouvi falar de um rumor sobre uma árvore em um terreno perto de Comodo.\n Eles devem ser ligados, tenho certeza disso!");
	close;
}

// ------------------------------------------------------------------
geffen,147,26,0	script	Ralphie#gef	4W_M_01,{
	mes("[Ralphie]\n Em algum lugar neste mundo...\n Há uma equipe rara que pode transformar energia psíquica em vigor físico.\n Dotando seu dono com ^990000poder destrutivo^000000...");
	next;
	mes("[Ralphie]\n Com isso, qualquer um poderia ser forte como Hercules...\n Mesmo um fracote como eu!\n Hahahahahah.\n Tenho que ter isso!");
	next;
	emotion(e_gasp);
	mes("[Ralphie]\n ...Céus!\n Desde quando você estava ouvindo?");
	next;
	mes("[Ralphie]\n Por acaso você não ouviu nada disso?\n Muhwaha... ha. Ha.");
	next;
	mes("[Ralphie]\n Bem...\n Eu não disse nada.\n Mas se eu disse, esqueça tudo sobre isso, o que quer que fosse.");
	next;
	mes("[Ralphie]\n ...isso é estranho.");
	close;
}

// ------------------------------------------------------------------
geffen,111,48,0	script	Stacey#gef	4W_F_01,{
	if (getequipid(EQI_HEAD_TOP) == Viking_Helm) {
		mes("[Stacey]\n Oh...!\n É um Elmo de Orc que você está vestindo?!\n Isso é muito legal!\n Agora...");
		next;
		mes("[Stacey]");
		if (Sex == SEX_MALE) {
			mes(" Você parece tão...\n Robusto e viril.");
		} else {
			mes(" Oooh!\n Estou com tanta inveja!");
		}
		close;
	} else if (getequipid(EQI_HEAD_TOP) == Orc_Hero_Helm) {
		mes("[Stacey]\n Oh...");
		next;
		mes("[Stacey]\n Isto...\n Isto é um capacete de orc Herói!");
		next;
		if (Sex == SEX_MALE) {
			mes("[Stacey]\n Isto...\n É como se você estivesse cercado por uma aurea masculina!\n Oooh! Você deve ser irresistível para todas as garotas!");
			next;
			emotion(e_lv);
			mes("[Stacey]\n E eu não sou exceção.");
		} else {
			mes("[Stacey]\n Nossa, você deve ser tão forte!\n Mas eu pensei que apenas membros da Tribo de Orcs usavam isso?");
		}
		close;
	} else {
		mes("[Stacey]\n Olá!\n Oh, você não é " + (Sex == SEX_MALE ? "um aventureiro" : "uma aventureira") + "?");
		next;
		mes("[Stacey]\n Você já viu alguns Orcs da tribo de Demi-Human?\n Se você descer para o sul a partir daqui, eu acho que você pode encontrar Orcs na floresta profunda.");
		next;
		mes("[Stacey]\n Eu ouvi que os Orcs possuem uma cultura e linguagem própria, supostamente apenas como nós humanos.\n Será que os Orcs vão a encontros...?");
		next;
		mes("[Stacey]\n Sabe, onde eles sussuram coisas bonitas e depois...\n Ah! Eu realmente queria saber!");
		close;
	}
}

// ------------------------------------------------------------------
geffen,203,146,5	script	Cidadão#gef	4W_M_01,{
	mes("[Cidadão]\n Havia um hábil criador de armas em Al De Baran, e ele tinha 4 filhos.\n Infelizmente, ele perdeu todos enquanto desenvolvia uma arma poderosa.\n Somente ele sobreviveu à tragédia.");
	next;
	mes("[Cidadão]\n Como deve ter sido triste para ele...\n Graças ao incidente, o criador de armas se aposentou e foi embora, viver em outro lugar.\n Depois disso, ninguém nunca pôde ver a arma que eles estavam desenvolvendo.");
	next;
	mes("[Cidadão]\n Não acho que os filhos dele foram para o céu com a ansiedade.");
	close;
}

// ------------------------------------------------------------------
// - [Casas] -
// ------------------------------------------------------------------
geffen_in,34,170,0	script	Theodoro#gef	1_M_01,{
	mes("[Theodoro]\n Olá!\n Não está um maravilhoso dia hoje?");
	next;
	mes("[Theodoro]\n Bem, eu não sei.\n Venho estudando duro para me tornar um Mago.\n Fico acordado a noite toda, agonizando sobre tudo que é mágico.");
	next;
	mes("[Theodoro]\n *Suspiro..*\n Eu me preocupo especialmente sobre todas as desvantagens de utilizar magia.");
	next;
	mes("[Theodoro]\n Foi realmente irritante quando um inimigo de longa data me encontrou na ultima vez que estava explorando.\n Esse monstro miserável interrompeu todos os meus feitiços!\n Não consegui atingir tudo!");
	next;
	mes("[Theodoro]\n Depois disso, eu percebi que precisava de algum tipo de arma para combater os ataques de longo alcance dos inimigos.\n Algo que posso atacar a longas distâncias...");
	next;
	mes("[Theodoro]\n Algum tipo de...\n Afiação, perfuração lançador de projétil, preferencialmente feito com madeira.");
	next;
	mes("[Theodoro]\n Mas onde eu poderia encontrar algo como isso?!");
	close;
}

// ------------------------------------------------------------------
geffen_in,27,134,5	script	Garçonete#gef	4_F_02,{
	mes("[Elenore]\n Esse lugar...\n Tem uma atmosfera diferente.");
	next;
	mes("[Elenore]\n Nós temos uma espécie de vidente que está sempre por aí.\n É um bêbado que passa o dia inteiro reclamando dos magos.");
	next;
	mes("[Elenore]\n Bem...\n O que posso fazer por você?");
	next;
	if (select("Posso beber algo?", "Você tem novidades para me contar?") == 1) {
		mes("[Elenore]\n Bem...\n Se você quiser algo alcoólico, o Rei Tristam III proibiu a venda.\n Ouvi dizer que agora só podem serví-lo em determinados lugares.");
		next;
		mes("[Elenore]\n Mesmo assim as pessoas conseguem ficar bêbadas com os drinques sem álcool que servimos aqui.\n Acho que é psicológico.");
		next;
		mes("[Elenore]\n Eu realmentee queria poder visitar o lugar em que servem drinques de verdade.\n Ouvi dizer que é o paraíso!");
		close;
	}
	switch(rand(1, 4)) {
		case 1:
		mes("[Elenore]\n Novidades...?\n Bem, ouvi dizer que estão abrindo um novo aeroporto em Juno!");
		next;
		mes("[Elenore]\n Ou pelo menos, estão planejando.\n O avião ainda não está pronto para decolar.\n Enquanto isso existe uma espécie de representante da corporação lá, oferecendo serviços de teletransporte.");
		next;
		mes("[Elenore]\n Parece que a Corporação Kafra finalmente tem concorrência!\n Mas não acho que existam muitas garotas atraentes como as garotas Kafra...");
		close;
		case 2:
		mes("[Elenore]\n Você não ouviu?\n Há uma nova moda no Reino de Rune-Midgard!");
		next;
		mes("[Elenore]\n As pessoas estão vindo, usando chapéus novos e bonitinhos!\n Vi um de ursinho, e teve uma garota que chegou usando orelhinhas de gato pretas...");
		next;
		mes("[Elenore]\n Claro, nem todo estilo popular me agrada.\n Porque sabe, eu vi um cara andando com um cogumelo na cabeça.\n E ouvi dizer que tem alguém fazendo chapéus de peixes!");
		next;
		mes("[Elenore]\n Acho que chapéus como esses são artísticos demais para o meu gosto.");
		close;
		case 3:
		mes("[Elenore]\n Novidades?");
		next;
		mes("[Elenore]\n Bem...\n Ouvi dizer que tem uma pessoa em Rune-Midgard...");
		next;
		mes("[Elenore]\n Você ouviu falar de " + strcharinfo(PC_NAME) + "?");
		if (Sex == SEX_MALE) {
			mes(" Ele é supostamente o herói mais lindo da região!");
		} else {
			mes(" Dizem que ela é uma das meninas mais bonitas de Rune-Midgard!");
		}
		close;
		case 4:
		switch(rand(1, 2)) {
			case 1:
			mes("[Elenore]\n Novidades?\n E-espere...");
			next;
			mes("[Elenore]\n Ugh...\n Ooooh...\n Minha c-cabeça...\n Está doendo...");
			next;
			mes("[Espírito de William]\n ^990000Saia de perto da minha filha, escória, antes que eu venda seus orgãos por zeny!\n Tá me ouvindo?!^000000");
			next;
			mes("[Elenore]\n *cof*\n Oh...!\n Desculpe por isso!\n Eu devo estar com um começo de gripe!\n ...Ou algo do tipo.");
			next;
			mes("^3355FFEstranho...\n A voz dela tava realmente grossa por um minuto, ali...");
			close;
			case 2:
			mes("[Espírito de William]\n ^990000Ei, seu maníaco sexual!!!\n Pare de olhar pra minha filha desse jeito.\n Antes que eu arranque seus olhos e os coma com macarrão!^000000");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]");
			if (Sex == SEX_MALE) {
				mes(" Huh...?\n D-de novo?");
				next;
				mes("[Elenore]\n Huh...?\n Oh, papai deve ter me possuído de novo.\n Acontece comigo e minha irmã o tempo todo.");
				next;
				mes("[" + strcharinfo(PC_NAME) + "]\n Sério?\n Huh.\n É uma chatice.");
				next;
				mes("[Elenore]\n É...\n Me fala disso.");
				close;
			} else {
				mes(" E-espeeeeeera...\n Mas, mas eu sou uma garota!");
				next;
				mes("[Espírito de William]\n ^990000Que parte do ^FF0000eu vou gritar onde você estiver^000000 ^990000você não entendeu?!\n Agora sai daqui, pervertido!^000000");
				next;
				mes("^3355FFAaaah!\n Como ela ficou tão assustadora?!^000000");
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
geffen_in,70,67,3	script	Arrumadeira#gef	4_F_01,{
	mes("[Elisa]\n Olá\n Posso te ajudar com alguma coisa?");
	next;
	select("Tem alguma fofoca interessante recentemente?");
	mes("[Elisa]\n Sabe o que é tão estranho?");
	next;
	mes("[Elisa]\n Fui pro santuário de Prontera e tenho certeza que vi um sacerdote casando com uma sacerdotisa!");
	next;
	mes("[Elisa]\n Eu não tinha ideia se sacerdotes poderiam se casar ou não.\n Mas até o Rei Tristram estava lá, então acho que está tudo bem!");
	close;
}

// ------------------------------------------------------------------
geffen_in,79,76,2	script	Mercador Daven#gef	2_M_PHARMACIST,{
	mes("[Mercador Daven]\n Eu lembro de Geffen quando ainda era chata.");
	next;
	mes("[Mercador Daven]\n Mas agora tem Magos e Bruxos e uma economia próspera nessa cidade!");
	next;
	switch(select("Magos...?", "Economia?")) {
		case 1:
		mes("[Mercador Daven]\n Magos e Bruxos estão sempre carregando livros e estudando magia.\n É assim que eles são.");
		next;
		mes("[Mercador Daven]\n Tem uma escola de magia no noroeste da cidade, para aprendizes interessados em se tornar Magos.\n Lá, eles podem aprender o básico de magia.");
		next;
		mes("[Mercador Daven]\n Depois de se tornar experiente no uso de magia, Magos podem se qualificar para se tornar Bruxos.");
		next;
		mes("[Mercador Daven]\n Bruxos tem acesso a magias mais poderosas e destrutivas do que os Magos.\n Magos podem aplicar para se tornar Bruxos no topo da Torre de Geffen.");
		break;
		case 2:
		mes("[Mercador Daven]\n Bem, acho que você pode agradecer aos Ferreiros pela economia aqui em Geffen.\n Com certeza, eles sempre sujos, suados, fedendo e falam meio rude...");
		next;
		mes("[Mercador Daven]\n Mas são pessoas que trabalham duro.\n E também, os minérios que eles refinam e as armas que criam tem alta demanda.");
		next;
		mes("[Mercador Daven]\n Aventureiros pagam aos Ferreiros um monte do seus suados zenys por armas de alta qualidade que somente eles podem criar.");
		break;
	}
	close;
}

// ------------------------------------------------------------------
geffen_in,114,73,5	script	Hadenheim#gef	4_M_SEAMAN,{
	mes("[Hans Hadenheim]\n Cara, o continente de Rune-Midgard é tão grande!\n Como vai você, jovem?");
	next;
	mes("[Hans Hadenheim]\n Essa Geffen é estranha.\n Mas valeu a pena viajar da República de Schubaltzwald até aqui.");
	next;
	if (select("República de Schubaltzwald?", "Então, por que você está viajando?") == 1) {
		mes("[Hans Hadenheim]\n Você...\n Não conhece a República de Schubaltzwald?");
		next;
		mes("[Hans Hadenheim]\n Voce sabe, aliado do reino de Rune-Midgarts.\n Um... Nossa cidade capital é Juno?");
		next;
		mes("[Hans Hadenheim]\n Você realmente deveria se atualizar nos eventos globais!");
		close;
	}
	mes("[Hans Hadenheim]\n Ah, estou viajando a negócios.\n Parece que o comércio estrangeiro dá muito dinheiro.");
	next;
	mes("[Hans Hadenheim]\n Todas essas cidades que estão sendo descobertas por exploradores.\n Estão fazendo as importações e exportações explodirem!");
	next;
	mes("[Hans Handenheim]\n Enfim...");
	next;
	mes("[Hans Hadenheim]\n Você foi a alguma das terras novas?\n Elas são muito interessantes, e você pode aprender muito com a cultura estrangeira.");
	next;
	mes("[Hans Hadenheim]\n Mas se você quiser apreciar uma bela vista.\n Sugiro que visita minha cidade natal, Juno.\n É muito bonita, sabe.");
	close;
}

// ------------------------------------------------------------------
geffen_in,39,127,2	script	Vidente#gef	4_M_BIBI,{
	mes("[Vidente]\n Ah...\n Não diga!\n Você veio saber seu futuro, não?\n Eu sei...\n Eu sei...\n Posso prever o futuro!\n Então, sobre o que você quer saber?");
	next;
	switch(select("Vida!", "Amor!", "Dinheiro!", "Notas!", "Futuro!", "Moda!")) {
		case 1:
		mes("[Vidente]");
		switch(rand(1,5)) {
			case 1:
			mes(" Vida...?\n Nossa, é uma categoria ampla.\n Mas vou entrar em contato com alguns espíritos e verei o que posso fazer.");
			next;
			mes("[Vidente]\n Hmmm...\n Certo, consegui algo.\n Hmmm você viverá até uma idade avançada.\n Até quando?");
			next;
			mes("[Vidente]\n ^333333*cof!*^000000enta e nove anos.\n Isso não é ótimo?\n É uma idade avançada, e você ainda tem muitos anos abençoados para aproveitar.");
			next;
			mes("[Vidente]\n E você também terá sucesso sempre.\n Você terá sucesso em obter vitórias e derrotas!");
			next;
			mes("[Vidente]\n Você talvez não entenda esse pedaço de sabedoria agora.\n Mas quando souber mais sobre esse mundo maluco, ele fará sentido.");
			next;
			break;
			case 2:
			mes(" Hmm...\n O que posso te contar sobre a vida?\n Vou entrar em contato com o mundo dos espíritos.");
			next;
			mes("[Vidente]\n Certo, entendi!\n Seus sonhos se tornarão realidade!");
			next;
			mes("[Vidente]\n Claro, não sei bem quais sonhos.\n Mas espero que sejam os agradáveis que se tornarão realidade, e não aqueles seus pesadelos estranhos.");
			next;
			mes("[Vidente]\n Qual sonhos exatamente?\n Bem, os espíritos estão meio reticentes hoje.\n Eles não estão com humor para falar.\n Eles também têm vida, sabe.\n Espere, isso não faz sentido.");
			next;
			break;
			case 3:
			mes(" Sinto que você está prestes a tomar uma decisão que talvez se arrependa.\n Aconselho que você espere e reflita.");
			next;
			mes("[Vidente]\n Embora a pressão seja grande, lembre-se de que as decisões tomadas impulsivamente são normalmente ruins.\n Respire fundo e relaxe.");
			next;
			mes("[Vidente]\n Mesmo se você estiver sem tempo.\n É melhor planejar tudo cuidadosamente para não desperdiçar esforços ou cometer erros.");
			next;
			mes("[Vidente]\n Lembre-se de que calma e paciência são as chaves para resolver qualquer crise.");
			next;
			break;
			case 4:
			mes(" Hmmm... Sinto que você está passando por uma fase difícil.\n Você deveria priorizar segurança ou felicidade?");
			next;
			mes("[Vidente]\n Sugiro que você pense cuidadosamente antes de decidir o seu caminho.\n E lembre-se, você apenas aprenderá quando cometer erros.");
			next;
			mes("[Vidente]\n Se você planejar cuidadosamente e realizar ações positivas, você pode ter tudo!");
			next;
			break;
			case 5:
			mes(" Hmm...\n Sinto que você brigou com alguém próximo a você Alguém com quem você se importa muito.");
			next;
			mes("[Vidente]\n Você precisa tomar a iniciativa!\n Resolva esse problema sem se deixar abalar por suas emoções.");
			next;
			mes("[Vidente]\n Tente consertar seus erros, engula seu orgulho e peça desculpas sinceramente se precisar.\n Uma amizade vale isso? Eu acho que sim.");
			next;
		}
		mes("[Vidente]\n Bem, espero ter sanado todas as suas dúvidas sobre o futuro.\n Afinal, meu trabalho é ser um consultor psíquico. Volte quando quiser.");
		close;
		case 2:
		mes("[Vidente]"); 
		switch(rand(1,4)) {
			case 1:
			mes("Quer saber seu futuro no amor?\n Oh ho Então você gosta de alguém!\n Vamos, pode me contar!");
			next;
			mes("[Vidente]\n Certo...\n Sinto uma forte energia amorosa emanando da sua alma.\n É intimidadora, e afasta os fracos.");
			next;
			mes("[Vidente]\n Então basicamente, prevejo que você logo atrairá pessoas realmente fortes.\n Atletas, fisiculturistas, pedreiros, gente desse tipo.");
			next;
			mes("[Vidente]\n Então se é isso que você quer, parabéns!\n A sorte lhe sorri hoje.");
			next;
			mes("[Vidente]\n Mas se você quer o oposto, sinto muito.\n A sorte sorri sarcasticamente hoje.\n Mas não é tarde demais para mudar o destino!");
			next;
			break;
			case 2:
			mes(" Amoooor, então?\n Deixe-me entrar em contato com os espíritos rapidamente.");
			next;
			mes("[Vidente]\n Ah! Uma velha chama se reacenderá!\n Não sei se a pessoa se apaixonará por você de novo.\n Se pedirá dinheiro ou se está de volta para se vingar...");
			next;
			mes("[Vidente]\n Mas um velho amor voltará à sua vida.\n De alguma forma.\n Então, se isso for uma boa notícia, parabéns!\n Mas se for uma notícia ruim, tome cuidado!");
			next;
			break;
			case 3:
			if (Sex == SEX_MALE) {
				mes(" Um... A menina com quem você está saindo agora é ideal para você!");
			} else {
				mes(" Um... O menino com quem você está saindo agora é ideal para você!");
			}
			next;
			switch(select("Como você sabe?", "Você está errado!", "Estou solteiro!")) {
				case 1:
				mes("[Vidente]\n Bem...\n Nós que temos poderes psíquicos somos muito bons nesse tipo de coisa.\n E é tão bom ver que você está feliz com a pessoa que você gosta!");
				close;
				case 2:
				mes("[Vidente]\n Você não me deixou terminar a frase.");
				next;
				if (Sex == SEX_MALE) {
					mes("[Vidente]\n A menina com quem você está saindo agora é ideal para você.");
				} else {
					mes("[Vidente]\n O menino com quem você está saindo agora é ideal para você.");
				}
				mes(" Se você quiser passar o resto da vida infeliz!");
				next;
				mes("[Vidente]\n Mas se você for terminar, faça isso logo e tente manter a amizade.");
				next;
				mes("[Vidente]\n Isso fará com que vocês dois se tornem melhores.\n Pelo menos é o que eu acho.");
				close;
				case 3:
				mes("[Vidente]\n Oh...\n Bem, me desculpe.\n As vezes eu misturo o presente e o futuro.\n Você entende não é, já que estou sempre prevendo o futuro...");
				next;
				if (Sex == SEX_MALE) {
					mes("[Vidente]\n O que eu quis dizer na verdade foi que ^3355FFvocê encontrará a mulher perfeita em breve^000000.");
				} else {
					mes("[Vidente]\n O que eu quis dizer na verdade foi que ^3355FFvocê encontrará o homem perfeito em breve^000000.");
				}
				close;
			}
			break;
			case 4:
			mes(" Querendo um romance, eh?\n Sempre bom ter novas emoções.");
			next;
			mes("[Vidente]\n Estranho, eu vejo um triângulo amoroso em seu futuro.\n Não, espere!\n Na verdade...\n Um decágono amoroso?");
			next;
			mes("[Vidente]\n Qual o polígono com onze lados?\n Ah, você não pode esperar que eu saiba qual é.\n Sou um vidente, não um matemático.");
			next;
		}
		mes("[Vidente]\n O amor é sempre divertido!\n Mesmo nesse mundo sombrio, o amor nos rodeia com seu brilho convidativo.\n Cuide de quem for especial para você, e volte para outra leitura!");
		close;
		case 3:
		mes("[Vidente]"); 
		switch(rand(1,3)) {
			case 1:
			mes(" Dinheiro?\n Bem, aposto que você tem mais sorte com isso do que eu.\n Afinal, eu fico sentado aqui o dia inteiro, fazendo consultas de graça!");
			next;
			mes("[Vidente]\n Bem...\n Os espíritos me dizem que você talvez não ganhe na loteria.\n Não importa quantos tíquetes você compre. Me desculpe, mas é verdade.");
			next;
			mes("[Vidente]\n Mas eu impedi você de continuar perdendo dinheiro com isso!\n Se você comprasse tíquetes de loteria durante toda a vida, gastaria quase uma fortuna!");
			next;
			break;
			case 2:
			mes("Ah sim.\n Entrarei em contato com os espíritos.\n Eles normalmentes dão bons conselhos financeiros, mesmo não tendo nenhum tipo de economia lá.");
			next;
			mes("[Vidente]\n Primeiro, controle seu dinheiro e só gaste o que puder.\n Quer uma dica?\n De cada dez zenys que você ganhar, guarde um para investir ou deixar de reserva.");
			next;
			mes("[Vidente]\n E, não importa o que você faça, não seja um vidente em Rune-Midgard.\n Parece que o que dá dinheiro mesmo é descobrir novas terras.\n Por que eu não fiz isso?");
			next;
			break;
			case 3:
			mes(" Então você quer saber sobre dinheiro.\n Vou entrar em contato com os espíritos...");
			next;
			mes("[Vidente]\n Ah, sim.\n Eles estão me dizendo que é melhor ser sempre cauteloso.\n Certamente você deve saber que exploradores nunca gastam mais do que a verba destinada a eles.");
			next;
			mes("[Vidente]\n E você também deve evitar apostar com seu dinheiro.\n Quero dizer que você deve guardar e investir cuidadosamente.\n Não se deixe cair na tentação de entrar em esquemas do tipo fique-rico-rápido!");
			next;
			mes("[Vidente]\n Mas por outro lado, esquemas desse tipo podem ser bons, se você souber o que está fazendo.\n Estou certo, não?");
			next;
		}
		mes("[Vidente]\n Bem, precisamos de dinheiro para viver, mas ter dinheiro não significa ter uma vida plena.\n Não esqueça que existem outras coisas que são importantes também.\n E tente não ficar muito nervoso, certo?");
		close;
		case 4:
		mes("[Vidente]");
		switch(rand(1,4)) {
			case 1:
			mes(" Suas notas? Você ainda está na escola?\n Estou impressionado!\n Seus olhos me dizem que você é muito maduro para a sua idade.\n Certo, vou consultar os espíritos...");
			next;
			mes("[Vidente]\n Hm? Tudo que eles disseram foi 'Você estuda?'\n Bem, acho que acabei respondendo sua pergunta com outra pergunta!");
			next;
			break;
			case 2:
			mes(" Você está me perguntando sobre as suas notas?\n Que estranho.\n Digo, você está querendo saber sobre o seu boletim?");
			next;
			mes("[Vidente]\n A educação é muito importante, mas não desanime se suas notas não são tão boas quanto você gostaria.");
			next;
			mes("[Vidente]\n Talvez o seu estilo de aprendizado não seja condizente com o método da sua escola.\n Ou talvez você não esteja muito interessado nos assuntos que ensinam lá.\n É compreensível.");
			next;
			mes("[Vidente]\n Os espíritos me dizem que você deve tentar diferentes estilos de aprendizagem.\n Para garantir que obtenha as notas que quer.");
			next;
			mes("[Vidente]\n Sim...\n Os espíritos estão incrivelmente preguiçosos hoje.");
			next;
			break;
			case 3:
			mes("[Vidente]\n Hmm. Os espíritos estão rudes hoje.\n Eles estão dizendo 'Se você está tão preocupado com suas notas.\n Por que não vai falar com seu professor?'");
			next;
			mes("[Vidente]\n Agora que estou pensando nisso, eles tem razão.\n Por que você não vai falar com seu professor para ver se há algum problema?");
			next;
			mes("[Vidente]\n Eles são pagos para te ajudar.\n E minha consulta é de graça.\n Então...");
			next;
			break;
			case 4:
			mes("Ah, legal!\n Sinto que você logo vai tirar um Dez...\n Em Esforço!");
			next;
			mes("[Vidente]\n Não posso te dizer quais as suas notas.\n Talvez você esteja destinado a tirar dez em todas as matérias, mas se eu falar isso...");
			next;
			mes("[Vidente]\n Você provavelmente relaxaria, pararia de estudar, reprovaria e causaria um paradoxo no tempo.\n Porque eu realmente preciso ir para o futuro para ver o que vai acontecer, entende?");
			next;
			mes("[Vidente]\n Ao invés de se preocupar com paradoxos no tempo, por que você não faz o seu próprio destino?");
			next;
		}
		mes("[Vidente]\n De qualquer forma, é difícil se concentrar nos estudos, mas pode compensar.\n Espero que você se dê bem no que você decida fazer.");
		close;
		case 5:
		mes("[Vidente]\n O futuro?\n Achei que estava implícito que tudo que eu falar será sobre o futuro, de qualquer tema que você escolha.");
		next;
		mes("[Vidente]\n Acho que você quer saber sobre o futuro em geral.\n Vou consultar os espíritos, e veremos o que eles têm a dizer, ok?");
		next;
		mes("[Vidente]");
		switch(rand(1,4)) {
			case 1:
			mes(" Hmm...\n No futuro, Sexo, Violência e Rock and Roll serão abolidos.\n A humanidade viverá numa era de paz e chatice.");
			next;
			mes("[Vidente]\n Não sei quando isso vai acontecer, mas espero que demore bastante!");
			next;
			break;
			case 2:
			mes("No futuro a Terra será protegida por um único robô:\n Plutonium Overdrive Ignition Negatron G, ou POING.");
			next;
			mes("[Vidente]\n POING expulsou os invasores Kylorianos por muito tempo, até ser derrotado pelo Nyxltron 47, feito pelo Dr. Hubris.");
			next;
			mes("[Vidente]\n Mas felizmente o doutor Pyeus finalizou bem a tempo o Dispostivo de Desconhecimento de Gravidade para o POING.");
			next;
			mes("[Vidente]\n Então POING levantou-se novamente, renascido como o Herói Automático: GOD-POING.\n Que obviamente destruiu o Nyxltron 47.");
			next;
			mes("[Vidente]\n Essa é provavelmente a coisa mais importante que posso te contar sobre o futuro.\n O resto é muito sem graça.");
			next;
			break;
			case 3:
			mes(" No futuro, acredite ou não, a internet será substituída por um grande cérebro.\n Não sei como, mas acredite, o cérebro é enorme.");
			next;
			mes("[Vidente]\n Graças ao grande número de blogs, o cérebro se torna pacífico, e decide não dominar o mundo.\n Como tinha planejado antes.");
			next;
			mes("[Vidente]\n Sim...\n Esse cérebro se torna uma fonte do bem, um benfeitor da raça humana.\n Pelo menos enquanto as pessoas continuarem a escrever assuntos pessoais na internet.");
			next;
			break;
			case 4:
			mes(" No futuro, muitas plantas serão modificadas geneticamente.\n Existirão muitos tipos diferentes!\n É bem estranho!");
			next;
			mes("[Vidente]\n Eventualmente surgirão árvores que ao invés de frutos, originam clones de celebridades.\n Hoje, isso parece um milagre da ciência, e uma ameaça às estrelas de Hollywood.");
			next;
			mes("[Vidente]\n Mas as pessoas que compram essas árvores são as mesmas que usam aquelas camisetas estranhas...");
			next;
			mes("[Vidente]\n Sabe, que tem um senso de humor tosco, com a palavra 'Gatostrófico' e o desenho de um gatinho vestido como um cientista maluco ou algo do gênero.");
			next;
		}
		mes("[Vidente]\n Bem...\n Essa é a minha predição.\n Você pode argumentar com a sabedoria do mundo dos espíritos?");
		close;
		case 6:
		mes("[Vidente]\n Moda...?\n O que isso tem a ver com o sobrenatural?\n Bem, entrarei em contato com os espíritos.\n Lá vamos nós...");
		next;
		mes("[Vidente]"); 
		switch(rand(1,5)) {
			case 1:
			mes("[Vidente]\n .........");
			next;
			mes("[Vidente]\n Estou vendo algo...\n Parece, com...");
			next;
			mes("[Vidente]\n Um... Peixe?\n Na cabeça de alguém?");
			next;
			mes("[Vidente]\n Que visão horrível!");
			next;
			break;
			case 2:
			mes(" É bom usar elmos valiosos!\n E também é bom usar roupas bonitas!\n Mas lembre-se...");
			next;
			mes("[Vidente]\n Não importa o quanto você gastou no seu guarda-roupa, você ainda vai parecer bobo se não usar peças que combinem.");
			next;
			mes("[Vidente]\n Vou te dar um exemplo de gente que não sabe se vestir.\n Imagine um Crusader usando uma coroa, orelhas de elfo e um Iron Cain.");
			next;
			mes("[Vidente]\n Ele não ia parecer na moda, ia parecer o Príncipe da Breguice.");
			next;
			break;
			case 3:
			mes(" Eu vejo...\n Que chapéus de caubói serão muito populares entre garotas Super Novices em breve!");
			next;
			mes("[Vidente]\n Você não concorda?\n Chapéus de caubói ficam ótimos em Super Novices!");
			next;
			break;
			case 4:
			mes(" Pode ser uma boa idéia seguir um tema.\n Por exemplo, você pode usar Asas de Anjo e Orelhas de Anjo ao mesmo tempo.");
			next;
			mes("[Vidente]\n Claro que isso pode ser caro demais para a maioria das pessoas, mas você entendeu.");
			next;
			break;
			case 5:
			mes(" Eu prevejo que sombreros se tornarão muito populares quando um grande grupo de Bardos formarem uma guild na qual os membros só usarão sombreros.");
			next;
			mes("[Vidente]\n Ou será que é o Boina Alada que estourará em popularidade?\n Os dois chapéus são muito estilosos, principamente em bardos...");
			next;
		}
		mes("[Vidente]\n Bem...\n Nós, videntes, não sabemos muito sobre moda, mas eu espero ter ajudado.");
		close;
	}
}

// ------------------------------------------------------------------
geffen_in,109,72,2	script	Perito em Monstros#gef	4_F_01,{
	mes("[Estheres]\n Olá, sou o especialista em Monstros daqui de Geffen. Você gostaria de saber alguma coisa?");
	next;
	switch(select("Area de Monstros", "Notícias Recentes", "Era dos Monstros", "Teoria do Jellopy")) {
		case 1:
		mes("[Estheres]\n Bem, como você talvez saiba, já que Mages e Wizards treinam em Geffen.\n Os monstros não chegam muito perto da cidade.\n Então aventureiros fatigados podem descansar aqui.");
		next;
		mes("[Estheres]\n Mas se você quiser caçar monstros fortes, pode cruzar a ponte a oeste e lutar com Kobolds.");
		next;
		mes("[Estheres]"); 
		if (BaseLevel > 80) {
			mes(" Você parece forte o suficiente para ir até lá.\n Mas se vir alguém com menos experiência atravessando a ponte, poderia avisá-lo do perigo.");
		} else {
			mes(" Mas se você está planejando ir lá, melhor não ir sozinho.\n Recomendo que você vá preparado se quiser lutar com esse tipo de monstros.");
		}
		break;
		case 2:
		mes("[Estheres]\n Novidades?\n Bem, o Museu de Monstros de Juno está aberto ao público.\n Há uma exposição fascinante, e vários monstros estão a mostra.");
		next;
		mes("[Estheres]\n Eu li sobre todos os tipos de monstros nas livrarias de Juno e de Prontera, e cacei alguns.\n Mas agora tenho a chance de ver monstros muito fortes pessoalmente!");
		next;
		mes("[Estheres]\n E os aventureiros de Rune-Midgarts fizeram descobertas fantásticas em suas explorações.");
		next;
		mes("[Estheres]\n Quando uma nova terra é encontrada, normalmente existem lá monstros desconhecidos.");
		next;
		mes("[Estheres]\n Então estamos descobrindo monstros novos o tempo todo!\n A variedade de criaturas que povoam o planeta é impressionante.");
		break;
		case 3:
		mes("[Estheres]\n A verdade é que os monstros existem desde tempos antigos.\n A Era dos Monstros ocorreu quando o poder deles estava no auge.");
		next;
		mes("[Estheres]\n Eles oprimiram os humanos por muito tempo.\n Mas foram aniquilados numa guerra entre os monstros e a humanidade.");
		next;
		mes("[Estheres]\n Entretanto, o equilíbrio da natureza mudou, e os monstros retornaram.\n Poucas pessoas sabem disso, mas os monstros já foram criaturas gentis.\n É triste...");
		break;
		case 4:
		mes("[Estheres]\n Ah sim, Jellopy.\n Parece que todos os monstros daqui são compostos de Jellopy.\n Mas isso é apenas uma cristalização formada por alguns monstros...\n Ou é mais que isso?");
		next;
		mes("[Estheres]\n Nossas pesquisas sobre monstros antigos e estudos feitos com monstros descobertos recentemente mostram que nenhum traço de Jellopy é encontrado em monstros fortes.");
		next;
		mes("[Estheres]\n Mas mesmo assim, muitos acreditam numa relação entre Jellopys e monstros.\n Apesar de ser difícil de acreditar nisso.");
		next;
		mes("[Estheres]\n É possível que as Jellopys estejam relacionadas com a personalidade e a força dos monstros.\n Então, se você misturar Jellopy com alguma coisa, poderia criar um monstro mais forte.");
		next;
		mes("[Estheres]\n Mas fazer esse tipo de experimento pode ser perigoso.\n Você pode acabar soltando monstros assustadores no mundo...");
		break;
	}
	close;
}


