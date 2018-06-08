/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: L0ne_W0lf                                               |
| - Version: Spell Master                                           |
| - Info: Quest do Camelo (Imãos de Veins)                          |
| * Pré requisito para a quest da Base do Vulcão.                   |
\*-----------------------------------------------------------------*/

veins,327,185,3	script	Garoto#camel	4_M_DST_CHILD,{
	if (!rachel_camel) {
		mes "[Garoto Karyn]";
		mes "*Soluço*";
		next;
		mes "^3355FFEsta criança chorando parece estar bem preocupada...^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu, porque você está chorando?";
		mes "Você está perdido?";
		mes "Onde está sua mãe?";
		next;
		mes "[Garoto Karyn]";
		mes "Minha... Mãe...";
		mes "Em casa...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "......";
		mes ".........";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Entendo.";
		mes "Então...";
		mes "Você está tendo problemas procurando o caminho de volta para casa?";
		next;
		mes "[Garoto Karyn]";
		mes "Não! Eu tenho 10 anos de idade!";
		mes "Eu posso achar o caminho de volta, de olhos fechados!";
		mes "^333333*Sniff sniff*^000000";
		mes "Buaaaaaaaahh!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Você pode me dizer por que você está chorando?";
		next;
		mes "[Garoto Karyn]";
		mes "Eu... ^333333*Sniff*^000000";
		mes "E-eu havia ido para... O-o...";
		mes "Vulcão.... c-c-com minha irm-- Buuaaaaaaah!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Pobre garoto...";
		mes "Vamos, respire fundo, assim você pode me dizer sobre o que aconteçeu um pouco mais devagar.";
		next;
		mes "[Garoto Karyn]";
		mes "*^333333*Soluço*^000000";
		mes "...Está bem...";
		mes "Eu fui ao Vulcão de Thor com minha pequena irmã para ver quem de nós é mais corajoso...";
		mes "Mas então, nós conhecemos algumas...";
		mes "Pessoas assustadoras lá... e...";
		next;
		mes "[Garoto Karyn]";
		mes "Eu fiquei assustado, então... Então...";
		mes "Minha irmã... Uaah! *Soluço*";
		next;
		mes "[Garoto Karyn]";
		mes "*Soluço*";
		next;
		mes "[Garoto Karyn]";
		mes "E-eu corri para longe deles...";
		mes "Mas deixei minha irmã lá com estes homens assustadores...";
		next;
		mes "[Garoto Karyn]";
		mes "Mamãe está doente, e papai está sempre no trabalho...";
		mes "Ele é o capitão de um navio, então...";
		mes "Não acho que eles possam ajudar.";
		next;
		mes "[Garoto Karyn]";
		mes "Por favor você poderia me ajudar, e trazer minha irmã de volta?";
		mes "*Sniff*";
		mes "Por favor?";
		mes "Eu prometo que eu irei lhe pagar assim que meu pai voltar!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espere... Eu tenho uma pergunta.";
		mes "Você disse que alguém pegou sua irmã no Vulcão de Thor?";
		mes "O que eles fizeram?";
		mes "Você tem certeza de que haviam pessoas lá?";
		next;
		mes "[Garoto Karyn]";
		mes "Eu... Eu não sei!";
		mes "Eu fiquei tão assustado, eu só fugi para longe!";
		mes "Eu... Eu não queria deixar minha lá!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmmm...";
		mes "Talvez sua irmã tenha sido sequestrada por bandidos...";
		next;
		if (select("Rejeitar pedido","Aceitar Pedido") == 1) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Lamento garoto mas eu tenho muitas coisas para fazer.";
			mes "Estou certo de que alguém virá logo logo para salvar sua irmã.";
			next;
			mes "[Garoto Karyn]";
			mes "Uah";
			close;
		}
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ok, Vou ver o que posso fazer.";
		mes "Eu irei tentar de tudo para achar sua irmã";
		next;
		mes "[Garoto Karyn]";
		mes "Muito obrigado!";
		mes "Por favor encontre minha irmã";
		mes "Curdie logo!";
		mes "Oh, Espero que ela esteja bem!";
		mes "Se ela não...";
		mes "^333333*Sniff*^000000";
		mes "Eu não sei o que eu iria fazer! Buaaaaaaaah";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Certo...";
		mes "Deseje-me sorte.";
		mes "Eu irei procurar pelo Vulcão de Thor para achar sua pequena irmã Curdie.";
		setquest(3060);
		rachel_camel = 1;
		close;
	} else if (rachel_camel == 1) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu devo procurar pelo Vulcão de Thor por Curdie, a pequena irmã de Karyn.";
		close;
	} else if (rachel_camel == 2) {
		mes "[Garoto Karyn]";
		mes "Vo-você conseguiu encontrar minha irmã?";
		mes "Ela está bem?";
		mes "O que aconteceu?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu a encontrei, ela está bem, mas...";
		next;
		mes "[Garoto Karyn]";
		mes "O que?";
		mes "Por que ela não está com você?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Curdie está...";
		mes "Bem, ela está acorrentada.";
		mes "Nós precisamos achar uma forma de libertá-la.";
		mes "Você sabe onde há um forjador ou um chaveiro que seja capaz de ajudá-la?";
		next;
		mes "[Garoto Karyn]";
		mes "Ah! Ah, há um Chaveiro, na Rua do Mercado!";
		mes "Você pode o perguntar se ele poderia libertar Curdie!";
		changequest(3061,3062);
		rachel_camel = 3;
		close;
	} else if (rachel_camel == 3) {
		mes "[Garoto Karyn]";
		mes "Vamos ver...";
		mes "Eu devo encontrar o chaveiro na Rua do Mercado.";
		mes "E o perguntar se ele poderia me ajudar a soltar as algemas de Curdie.";
		close;
	} else if (rachel_camel == 4) {
		mes "[Pequeno Karyn]";
		mes "É melhor falar com o Sr. Lockenlock primeiro, o chaveiro na rua do mercado.";
		close;
	} else if (rachel_camel == 5) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu devo encontrar o chaveiro na Rua do Mercado.";
		mes "E o perguntar se ele poderia me ajudar a soltar as algemas de Curdie.";
		close;
	} else if (rachel_camel == 6) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espera...";
		mes "Eu deveria estar levando todos os ingredientes do sabão para a Srta. Ivory.";
		mes "Quais eram eles mesmo...?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^4D4DFF10 Leites^000000,";
		mes "^4D4DFF100 Ervas Verdes^000000,";
		mes "^4D4DFF50 Jellopys^000000, e";
		mes "^4D4DFF5 Garrafas Vazias^000000.";
		mes "Eu devo pegar estes...";
		close;
	} else if (rachel_camel == 7) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu preciso falar com alguém chamado Saraman para conseguir os ingredientes do sabão...";
		close;
	} else if (rachel_camel == 8) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu preciso levar para o Sr. Saraman todas as coisas que ele precisa para estimular o apetite de um camelo.";
		mes "Eu preciso conseguir...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^4D4DFF1 Maçã Verde^000000,";
		mes "^4D4DFF5 Rações para Monstros^000000,";
		mes "^4D4DFF1 Garrafa Vazia^000000, e";
		mes "^4D4DFF1 Poção Amarela^000000.";
		close;
	} else if (rachel_camel == 9) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho tudo que é necessário para estimular o apetite de um camelo.";
		mes "Agora eu preciso de alimentar o camelo então.";
		mes "Eu poderei conseguir os ingredientes para o sabão, 5 Blocos de Estrume.";
		close;
	} else if (rachel_camel == 10) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora,seria melhor gastar meu tempo procurando pelos ingredientes no deserto de camelos.";
		close;
	} else if (rachel_camel == 11) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu deveria achar o camelo perdido do Sr. Saraman, alimentar este camelo com estimulantes de apetite.";
		mes "E depois pegar os ingredientes para o sabão e 5 Blocos de Estrume se eu quiser libertar Curdie.";
		close;
	} else if (rachel_camel > 11 && rachel_camel < 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem... Eu encontrei o camelo.";
		mes "Agora eu preciso conseguir todos os ingredientes para o sabão.";
		mes "Quanto mais cedo eu fizer isto, mais cedo eu irei ajudar Curdie.";
		close;
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sabão e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao SR. Saraman para dizer a ele onde está o seu camelo, e depois ir até a Srta. Ivory.";
		close;
	} else if (rachel_camel == 18) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu não deveria estar indo ver a Srta. Ivory agora?";
		close;
	} else if (rachel_camel == 19) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora que eu tenho o Sabão de Camelo de Veludo, eu devo levar isto para o Sr. Lockenlock.";
		close;
	} else if (rachel_camel == 20) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho de utilizar o sabão para fazer um molde de chave que eu possa levar ao Sr. Lockenlock.";
		close;
	} else if (rachel_camel == 21) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Fazer a chave é mais importante do que dizer a Karyn sobre o que está acontecendo.";
		close;
	} else if (rachel_camel == 22) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu preciso levar 1 Aço para o Mr. Lockenlock então ele poderá fazer uma chave que finalmente libertará Curdie.";
		close;
	} else if (rachel_camel == 23) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu finalmente consegui a chave que eu posso usar para libertar Curdie.";
		mes "Eu estou";
		mes "indo salvá-la neste momento.";
		next;
		mes "[Garoto Karyn]";
		mes "Muito obrigado!";
		mes "Por favor traga Curdie o mais rápido possível! ^333333*Soluço*^000000";
		close;
	} else if (rachel_camel == 24) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ei, Karyn! Eu enviei sua irmã de volta para a cidade com uma Asa de Borboleta.";
		mes "Ela voltou com segurança?";
		next;
		mes "[Garoto Karyn]";
		mes "Sim, Curdie está de volta e ela está de repouso no hospital agora.";
		mes "Muito obrigado por toda a sua ajuda!";
		next;
		mes "[Garoto Karyn]";
		mes "Eu não sei o que há de errado com Curdie.";
		mes "Desde que ela retornou, ela fica assustada sempre que vê os soldados na cidade.";
		next;
		mes "[Garoto Karyn]";
		mes "Eu prometo dizer ao meu pai sobre o que você fez assim que ele voltar.";
		mes "Obrigado por tudo que você fez por nós!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmm... Entendo...";
		mes "Eu irei voltar depois, quando Curdie tiver saído do hospital.";
		next;
		mes "[Garoto Karyn]";
		mes "Sim, por favor faça isto.";
		mes "Eu prometo lhe ajudar sempre que precisar de mim!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hahahaha!";
		mes "Bem...";
		mes "Que isto é bem tranquilizante.";
		mes "Então até, tome conta de sua mãe e de sua irmã muito bem.";
		mes "Entendeu?";
		next;
		mes "[Garoto Karyn]";
		mes "Entendi!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bom, muito bom...";
		mes "É uma promessa, então.";
		mes "Vejo você por aí";
		completequest(3083);
		rachel_camel = 25;
		specialeffect(EF_ABSORBSPIRITS,AREA,playerattached());
		getexp(1000000,700000);
		close;
	} else if (aru_monas < 15) {
		mes "[Pequeno Karyn]";
		mes "Olá, olá!";
		mes "Ei, você precisa de mim para ajudá-lo?";
		mes "Não...??";
		mes "Awww, deve haver algo que eu possa fazer...";
		close;
	} else if (aru_monas == 15) {
		mes "[Pequeno Karyn]";
		mes "Curdi acabou de voltar do hospital e está, a cada dia ficando melhor!";
		mes "Ah, e eu estou cuidando dele, como tinha prometido.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sério? Isto é ótimo.";
		mes "Você deveria estar orgulhoso de si.";
		next;
		mes "[Pequeno Karyn]";
		mes "^666666*envergonhado*^000000 Heh heh!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, eu estava me perguntando se você poderia me ajudar.";
		mes "Seu pai é um pescador, certo?";
		mes "Você perguntaria a ele se ele poderia me emprestar seu barco?";
		next;
		mes "[Pequeno Karyn]";
		mes "Bem... Na verdade...";
		mes "O papa disse ao meu pai para não utilizar o barco dele por um tempo...";
		mes "Não estou certo do porque...";
		next;
		mes "[Pequeno Karyn]";
		mes "Então é isso.";
		mes "Papai não pode sair para o mar agora.";
		mes "Mas acho não teria problema se fosse você, certo?";
		mes "Hey, você me ajudou!";
		mes "Então eu tenho que ajudá-lo, certo?";
		next;
		mes "[Pequeno Karyn]";
		mes "Meu pai está tão nervoso por não poder usar o barco dele que talvez seja melhor não contarmos que você deseja usá-lo.";
		mes "Vamos manter nosso segredinho, certo?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "C-claro!";
		next;
		mes "[Pequeno Karyn]";
		mes "De qualquer forma, seu barco é o único da praia do sul uma vez que todos os outros pescadores atracam seus barcos em outros lugares.";
		mes "E ainda, o barco do meu pai vai enferrujar se ninguém usá-lo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ótimo! Muito obrigado pela sua ajuda, Karyn.";
		mes "Eu me certificarei de cuidar muito bem do barco do seu pai.";
		mes "E eu só preciso dele por um momento, de qualquer forma.";
		next;
		mes "[Pequeno Karyn]";
		mes "Heh heh! Obrigado!";
		mes "Estou feliz de poder ajudá-lo, também!";
		aru_monas = 16;
		changequest(17011,17012);
		close;
	} else if (aru_monas < 26) {
		mes "[Pequeno Karyn]";
		mes "Oi! Você gostaria de ir pescar no barco do meu pai?";
		mes "Oh, e Curdie disse oi!";
		close;
	} else {
		mes "[Pequeno Karyn]";
		mes "Olá, olá!";
		mes "Ei, você precisa de mim para ajudar em algo?";
		mes "Não...??";
		mes "Awww, deve haver alguma coisa que eu possa fazer...";
		close;
	}
}

// ------------------------------------------------------------------
que_thor,36,66,5	script	Pequena Curdie#camel	4_F_DST_CHILD,{
	if (rachel_camel == 1) {
		mes "^3355FFVocê se depara com uma menina deitada sobre o chão inconsciente.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ei, menina! Acorde!";
		mes "Você pode me escutar?";
		next;
		mes "^3355FFEla tem pulso, mas apesar de suas palavras parece que, ela não irá abrir seus olhos.";
		mes "Você dá um leve tapa na bochecha dela para acordá-la.^000000";
		next;
		mes "[Pequena Curdie]";
		mes "Huh?!";
		mes "...Ah, owwww";
		mes "W-waaaaaaaah!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Desculpe!";
		mes "Eu não queria fazer você chorar!";
		mes "Você... Você está bem?";
		next;
		mes "[Pequena Curdie]";
		mes "Huh? Qu-Quem é você?";
		mes "Ah não, você tem que sair daqui!";
		mes "Você estará em apuros se eles o capturarem!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "É você Curdie?";
		mes "Seu irmão Karyn me pediu para resgatar você.";
		mes "Vamos, Nós precisamos de tirar você daqui.";
		next;
		mes "[Pequena Curdie]";
		mes "Karyn...?";
		mes "Oh, oh não! Eu...";
		mes "Eles me prenderam nestas algemas e eu não posso me mexer!";
		mes "Você tem de sair antes que aqueles homens assustadores voltem!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que...?!";
		mes "Que bastardos!";
		mes "Prendendo uma pequena menina como esta...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Argh!";
		mes "E eu não posso usar força bruta para quebrar estas algemas!";
		mes "Eu acabaria te machucando...!";
		next;
		mes "[Pequena Curdie]";
		mes "Não se preocupe comigo...";
		mes "Apenas se apresse e saia!";
		mes "Eu... Eu irei ficar bem!";
		mes "Agora apresse-se!";
		mes "Alguém está vindo!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ok, Eu vou...";
		mes "Mas tenha paciência, e espere por mim.";
		mes "Eu irei descobrir uma forma para libertá-la.";
		next;
		mes "[Pequena Curdie]";
		mes "^333333*Soluço*^000000";
		mes "S-Sério...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu prometo.";
		mes "Eu estou certo de que há alguém na cidade que saiba uma forma de soltar estas algemas.";
		mes "Eu estarei de volta o mais rápido possível!";
		changequest(3060,3061);
		rachel_camel = 2;
		close;
	} else if (rachel_camel == 2) {
		mes "^3355FFAlguém na cidade deve ter uma perícia para soltar estas algemas.";
		mes "É a única maneira de libertar Curdie destas correntes.^000000";
		close;
	} else if (rachel_camel == 3 || rachel_camel == 6 || rachel_camel == 8 || rachel_camel == 22) {
		mes "^3355FFCurdie está chorando deitada sobre o chão.^000000";
		close;
	} else if (rachel_camel == 4) {
		mes "[Pequena Curdie]";
		mes "Eu odeio o som que o metal faz quando bate em outro..";
		mes "O-os soldados, eles...";
		mes "Eles estão...";
		next;
		mes "^3355FFCurdie está caída sobre o chão, seus olhos estão bem fechados.";
		mes "O seu corpo todo está tremendo de medo.^000000";
		close;
	} else if (rachel_camel == 5) {
		mes "^3355FFNo chão, você vê alguns equipamentos.";
		mes "Que são semelhantes aos utilizados pelos soldados de Rachel.^000000";
		close;
	} else if (rachel_camel == 7) {
		mes "^3355FFParece que alguém veio veio aqui para dar a Curdie comida e água.^000000";
		close;
	} else if (rachel_camel == 9) {
		mes "^3355FFCurdie olha bem para você quando você anda por perto.";
		mes "Parece que sua visão fica mais fraca a cada segundo que ela fica presa nesta caverna.";
		close;
	} else if (rachel_camel == 10) {
		mes "^3355FFÉ melhor você encontrar os";
		mes "Camelos e conseguir os";
		mes "ingredientes para o sabão se";
		mes "você realmente deseja libertar";
		mes "Curdie de suas algemas.^000000";
		close;
	} else if (rachel_camel == 11) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu deveria achar o camelo perdido do Sr. Saraman, alimentar este camelo com estimulantes de apetite.";
		mes "Edepois pegar os ingredientes para o sabão e 5 Blocos de Estrume se eu quiser libertar Curdie.";
		close;
	} else if (rachel_camel > 11 && rachel_camel < 17) {
		mes "^3355FFVocê já encontrou o camelo, então você precisa coletar os ingredientes para o sabão se quiser libertar Curdie.^000000";
		close;
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sabão e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao Sr. Saraman para dizer a ele onde está o seu camelo, e depois ir até a Srta. Ivory.";
		close;
	} else if (rachel_camel == 18) {
		mes "^3355FFVocê deveria estar indo ver Srta. Ivory agora, se realmente deseja libertar Curdie de suas algemas.^000000";
		close;
	} else if (rachel_camel == 19) {
		mes "^3355FFAgora que você tem Sabão de Camelo de Veludo.";
		mes "Você deve levá-lo ao Sr. Lockenlock.^000000";
		close;
	} else if (rachel_camel == 20) {
		mes "^3355FFCurdie está exatamente onde você a deixou.";
		mes "Há uma tigela de sabão fria perto dela, então é certo de que alguém deve estar a alimentando.^000000";
		next;
		mes "^3355FFVocê põe o Sabão na fechadura da Corrente para criar um molde que o Sr. Lockenlock possa usar para criar uma chave.^000000";
		next;
		mes "[Pequena Curdie]";
		mes "Irei...";
		mes "Irei eu estar sempre presa aqui?";
		mes "Eu... Eu quero minha mãe...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ah... Você está acordada?";
		mes "Não se preocupe, Curdie, eu estou certo de que eu logo poderei te libertar.";
		mes "Tente esperar mais um pouco.";
		next;
		mes "[Pequena Curdie]";
		mes "Quando a porta está aberta, eu vejo chamas...";
		mes "E eu escuto... O som de máquinas?";
		mes "Estes homens usando roupas idênticas continuam marchando depois de passar por mim...";
		next;
		mes "[Pequena Curdie]";
		mes "Eu... Eles me assustam muito!";
		mes "O-o homem que me traz comida";
		mes "disse que eles não me deixarão";
		mes "sair por causa do que";
		mes "Eu vi lá dentro. Eles...";
		mes "Eles não me deixarão ir para casa...";
		next;
		mes "^3355FFOs olhos de Curdie estão perdendo o foco e estão virando para cima.";
		mes "Ela talvez não sobreviva se continuasse sendo forçada a ficar aqui por muito tempo.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Não se preocupe.";
		mes "Eu virei resgatá-la assim que eu fizer a chave para soltar estas horríveis algemas.";
		mes "Não se preocupe...";
		next;
		mes "[Pequena Curdie]";
		mes "Se eu não estiver aqui da próxima vez que você vier, então fuja.";
		mes "Não diga isto ao meu irmão.";
		mes "Vá para bem longe antes que eles possam o capturar.";
		mes "E-Estou falando sério...";
		next;
		mes "[Pequena Curdie]";
		mes "Se eu não ver você novamente saiba que...";
		mes "Eu quero...";
		mes "Eu queria apenas lhe agradecer por fazer o possível para me ajudar.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Tudo estará bem.";
		mes "Eu tenho apenas de me apressar um pouco mais rápido.";
		mes "Certo, é hora de ir.";
		next;
		mes "^3355FFVocê extrai o sabão da fechadura, e o guarda cuidadosamente.";
		mes "Agora você precisa levar o molde de voltar para a cidade para o Sr. Lockenlock.^000000";
		changequest(3079,3080);
		rachel_camel = 21;
		close;
	} else if (rachel_camel == 21) {
		mes "^3355FFVocê deve voltar depressa para a cidade.";
		mes "E levar o molde de chave para o Sr. Lockenlock apenas assim ele poderá fazer a chave para libertar Curdie das Algemas.^000000";
		close;
	} else if (rachel_camel == 23) {
		mes "[Pequena Curdie]";
		mes "Vo-Você...";
		mes "É realmente você?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sim sou eu Curdie!";
		mes "Eu espero que esta chave funcione...";
		next;
		mes "^3355FFVocê solta as correntes com a chave feita pelo Sr. Lockenlock.^000000";
		next;
		mes "^333333*Creck*^000000";
		next;
		mes "[Pequena Curdie]";
		mes "Aaaah!";
		mes "M-minhas... Minhas...!";
		next;
		mes "^3355FFAs pernas de Curdie estão inchadas por causa do peso e da pressão de usar as correntes por muito tempo.^000000";
		next;
		mes "[Pequena Curdie]";
		mes "Eu não consigo mover minhas pernas!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, não temos outra escolha.";
		mes "Curdie, eu irei enviá-la de volta para a cidade com uma Asa de Borboleta.";
		mes "Tente não se mexer, certo?";
		next;
		mes "[Pequena Curdie]";
		mes "Ah! Obrigada...";
		mes "Eu... Eu posso voltar para casa...";
		mes "Muito O-obrigada...";
		next;
		mes "^3355FFVocê usa o poder de uma Asa de Borboleta para enviar Curdie de volta a cidade.";
		mes "Felizmente, ela irá chegar a salvo e poderá ver seu irmão Karyn novamente.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que será que ela viu por traz daquela porta de aço neste velho vulcão?";
		mes "Deve ser algo bem perigoso...";
		mes "Algo relacionado com o Exército de Rachel...";
		changequest(3082,3083);
		rachel_camel = 24;
		close;
	} else {
		mes "[Pequena Curdie]";
		mes " .......";
		close;
	}
}

// ------------------------------------------------------------------
veins,221,120,5	script	Jovem Nativo#camel	4_M_DESERT,{
	if (rachel_camel == 3) {
		mes "[Jovem Nativo]";
		mes "Meu nome é Toby.";
		mes "Eu nasci e cresci aqui, e ninguém sabe mais sobre esta cidade do que eu.";
		mes "Sinta-se livre para perguntar se você precisar encontrar seu caminho por aqui.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Com licença, mas você sabe aonde eu posso encontrar um chaveiro?";
		next;
		mes "[Toby]";
		mes "Claro, eu sei!";
		mes "Sr. Lockenlock e um famoso chaveiro.";
		mes "E ele faz quase todas as chaves e fechaduras em Veins e também em Rachel.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Mr. Lockenlock, eh?";
		mes "Mas aonde eu posso encontrá-lo?";
		next;
		mes "[Toby]";
		mes "Oh, ele está sempre sentando em algum lugar na rua do mercado.";
		mes "Ele bebe muito, tanto que ele não consegue trabalhar quando está bêbado.";
		next;
		mes "[Toby]";
		mes "Ah, mas sabe o que iria fazer ele ficar sóbrio?";
		mes "Uma Poção Amarela!";
		mes "Isto nunca falha com este cara!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Entendi.";
		mes "Obrigado pelo conselho.";
		next;
		mes "[Toby]";
		mes "Você é muito bem vindo!";
		mes "Finalmente...";
		mes "Depois de todos estes anos...";
		mes "Eu fui útil para algo!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "...Anh...?";
		next;
		mes "^3355FFEncontre o Sr.Lockenlock na Rua do Mercado, e leve a ele uma Poção Amarela.^000000";
		changequest(3062,3063);
		rachel_camel = 4;
		close;
	} else if (rachel_camel == 4) {
		mes "[Toby]";
		mes "Depois de todos estes anos...";
		mes "Eu finalmente fui util para algo!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "...Anh...?";
		next;
		mes "^3355FFEncontre o Sr.Lockenlock na Rua do Mercado, e leve a ele uma Poção Amarela.^000000";
		close;
	} else {
		mes "[Jovem Nativo]";
		mes "Meu nome é Toby.";
		mes "Eu nasci e cresci aqui e ninguém sabe mais sobre esta cidade do que eu.";
		mes "Sinta-se livre para perguntar se você precisar encontrar seu caminho por aqui.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Não, Obrigado.";
		next;
		mes "[Jovem Nativo]";
		mes "Você não...";
		mes "^333333*Soluço*^000000";
		mes "Você não precisa de mim para nada?";
		close;
	}
}

// ------------------------------------------------------------------
veins,181,166,3	script	Lockenlock#camel	4_M_HUMERCHANT,{
	if (rachel_camel < 4) {
		mes "^3355FFÉ um bebâdo...";
		mes "O cheiro de álcool puro vem dele.";
		mes "Existe uma certa beleza em sua miséria.^000000";
		close;
	} else if (rachel_camel == 4) {
		if (countitem(Yellow_Potion)) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Com licença...?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Huh? Arrrgh...";
			mes "Minha cabeça...";
			mes "O que você quer?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Oh, eu gostaria de fazer uma chave.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Chaves? Sim, sim...";
			mes "Isso é o que eu faço.";
			mes "Se você tem o cadeado, isto será moleza.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Ugh, eu estou tão sedento e esta dor de cabeça está me matando.";
			mes "Você poderia me trazer uma Poção Amarela primeiro?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Certo, eu acho.";
			mes "Eu posso lhe dar apenas 1 Poção Amarela.";
			mes "Aqui está.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Ah, isto atingiu o ponto!";
			mes "Espere, espere...";
			mes "Agora eu me sinto meio tonto...";
			mes "O que está...";
			mes "O que está acontecendo...?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Ok, ok...";
			mes "Eu estou bem agora.";
			mes "O que você disse que precisava, de uma chave?";
			mes "Você trouxe a fechadura com você?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Eu sou um expert em lidar com chaves e cadeados.";
			mes "Meus cadeados são fortes o suficiente para suportar um dragão, você sabia disto?";
			mes "Saiba que o exército de Rachel é um de meus melhores clientes.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "^333333Esse cara faz fechaduras para o exército de Rachel?!";
			mes "Talvez não seja uma boa idéia permitir que ele saiba.";
			mes "Que eu estou tentando libertar um de seus prisioneiros.";
			mes "E se ele for fiel ao Exército?^000000";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Então, o que aconteceu foi...";
			mes "Perdi a minha chave, mas não posso trazer o cadeado aqui comigo..";
			mes "Eu acho que iria acabar quebrando se eu trouxesse ele comigo.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Ah, entendo... Não tem problema.";
			mes "Apenas me leve até o cadeado.";
			mes "Eu vou lhe cobrar um extra, no entanto especialmente porque o meu joelho vão mal.";
			mes "Então, onde nós vamos exatamente?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Espere!";
			mes "Não podemos fazer isso!";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "O que você quer dizer?";
			mes "Você não está tentando abrir um cofre de um banco ou algo assim, está?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Não, não é nada disto!";
			mes "É que a fechadura está em um lugar muito perigoso.";
			mes "Isto é realmente importante...";
			mes "Por favor, você tem que me ajudar!";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Huh. Bem, vai ser difícil,";
			mes "Eu não posso fazer uma chave sem olhar bem para a fechadura.";
			mes "Deixe-me pensar em um modo de ajudá-lo.";
			mes "Me dê um segundo, certo?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "...............................";
			mes "Bem, eu acho que você pode tentar fazer um molde da fechadura.";
			mes "Ele deverá ser perfeito, então isto será um pouco caro.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Vá ao mercado e tente achar a Senhorita que vende sabão orgânico.";
			mes "Você precisa conseguir uma garrafa de Sabão Chamelepu.";
			mes "Você irá precisar deste tipo exato de sabão:";
			mes "Nenhum outro tipo funcionará.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Sabão Chamelepu?";
			mes "O que é is--";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Não há tempo para explicar.";
			mes "Você deve se apressar e encontrá-la antes que ela feche sua loja.";
			mes "A dona da loja é uma moça bonita, então será difícil de não encontrá-la.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "...........";
			delitem(Yellow_Potion,1);
			changequest(3063,3064);
			rachel_camel = 5;
			close;
		} else {
			mes "^3355FFÉ um bêbado...";
			mes "Este homem deve ser o Sr. Lockenlock que você procurava.";
			mes "É melhor você seguir o conselho de toby e trazer para este homem uma Poção Amarela primeiro.^000000";
			close;
		}
	} else if (rachel_camel == 5) {
		mes "[Chaveiro Lockenlock]";
		mes "Vá para o mercado e encontre uma moça vendendo sabão orgânico.";
		mes "E consiga uma garrafa de Sabão Chamelepu.";
		mes "Você irá precisar deste tipo de sabão:";
		mes "Nenhum outro tipo funcionará.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sabão Chamelepu?";
		mes "O que é is--";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Não há tempo para explicar.";
		mes "Você deve se apressar e encontrá-la antes que ela feche sua loja.";
		mes "A dona da loja é uma moça bonita, então será difícil de não encontrá-la.";
		close;
	} else if (rachel_camel == 6) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espera... Eu deveria estar levando todos os ingredientes do sabão para a Srta. Ivory.";
		mes "Quais eram eles mesmo...?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^4D4DFF10 Leites^000000,";
		mes "^4D4DFF100 Ervas Verdes^000000,";
		mes "^4D4DFF50 Jellopys^000000, e";
		mes "^4D4DFF5 Garrafas Vazias^000000.";
		mes "Eu devo pegar estes...";
		close;
	} else if (rachel_camel == 7) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu preciso falar com alguém chamado Saraman para conseguir os ingredientes do sabão...";
		close;
	} else if (rachel_camel == 8) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu preciso levar para o Sr. Saraman todas as coisas que ele precisa para estimular o apetite de um camelo.";
		mes "Eu preciso conseguir...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^4D4DFF1 Maçã Verde^000000,";
		mes "^4D4DFF5 Rações para Monstros^000000,";
		mes "^4D4DFF1 Garrafa Vazia^000000, e";
		mes "^4D4DFF1 Poção Amarela^000000.";
		close;
	} else if (rachel_camel == 9) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho tudo que é necessário para estimular o apetite de um camelo.";
		mes "Agora eu preciso de alimentar o camelo.";
		mes "Então eu poderei conseguir os ingredientes para o sabão, 5 Blocos de Estrume.";
		close;
	} else if (rachel_camel == 10) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora,seria melhor gastar meu tempo procurando pelos ingredientes no deserto de camelos.";
		close;
	} else if (rachel_camel == 11) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu deveria achar o camelo perdido do Sr. Saraman, alimentar este camelo com estimulantes de apetite.";
		mes "E depois pegar os ingredientes para o sabão e 5 Blocos de Estrume e eu quiser libertar Curdie.";
		close;
	} else if (rachel_camel == 12) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem... Eu econtrei o camelo.";
		mes "Agora eu preciso conseguir todos os ingredientes para o sabão.";
		mes "Quanto mais cedo eu fizer isto, mais cedo eu irei ajudar Curdie.";
		close;
	} else if (rachel_camel > 12 && rachel_camel < 17) {
		mes "^3355FFVocê já encontrou o camelo, então você precisa coletar os ingredientes para o sabão se quiser libertar Curdie.^000000";
		close;
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sabão e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao SR. Saraman para dizer a ele onde está o seu camelo, depois ir até a Srta. Ivory.";
		close;
	} else if (rachel_camel == 18) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu não deveria estar indo ver a Srta. Ivory agora?";
		close;
	} else if (rachel_camel == 19) {
		mes "[Chaveiro Lockenlock]";
		mes "Oh, então você finalmente voltou com o Sabão Chamelepu.";
		mes "Porque demorou tanto?";
		mes "Tudo o que tinha a fazer era ir ao mercado e comprá-lo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Uh, de qualquer jeito, Ivory lhe disse como usar o sabão?";
		mes "Você apenas deve despejar o sabão na buraco da chave.";
		mes "E depois colocar o sabão devolta na garrafa.";
		mes "Faça isto com rapidamente e com cuidado.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Certifique-se de fechar a garrafa direito quando estiver feito não deixe entrar ar dentro.";
		mes "Se você demorar mais de 30 segundos, o sabão não irá reter a forma da chave muito bem.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Despeje o sabonete líquido no buraco da chave na fechadura.";
		mes "Derrame o sabão de volta à garrafa.";
		mes "Feche a tampa tão bem para que o ar não entre dentro da garrafa..";
		mes "Lembre-se, você não pode demorar mais de 30 segundos para concluir os procedimentos.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Finalmente, traga a garrafa de volta para mim, para que eu possa fazer a chave.";
		mes "Mas quando você voltar, eu preciso ter certeza que a chave que você está fazendo não é para nada ilegal...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Tudo bem.";
		changequest(3078,3079);
		rachel_camel = 20;
		close;
	} else if (rachel_camel == 20) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho de utilizar o sabão para fazer um molde de chave que eu possa levar ao Sr. Lockenlock.";
		close;
	} else if (rachel_camel == 21) {
		mes "[Chaveiro Lockenlock]";
		mes "Oh, você está de volta...";
		mes "Então você conseguiu fazer o molde de chave com o sabão?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sim, eu consegui.";
		mes "Você poderia por favor se apressar?";
		mes "Isto é uma emergência, e isto poderá ficar bem ruim se eu não conseguir esta chave pronta logo...";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Deixe-me ver... Bem, não é totalmente perfeita.";
		mes "Mas eu devo ser capaz de moldar uma chave para esta fechadura. Aah...";
		mes "Tem outra coisa também sabe o que?";
		mes "Eu não tenho nenhum material comigo.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Eu já fiz todas as chaves e cadeados para esta cidade, então ninguém me me enviou mais materiais.";
		mes "Por isto, eu não tenho materiais em mão.";
		mes "Desculpe-me.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Tudo que preciso é de ^4D4DFF1 Aço^000000.";
		mes "Não vai demorar mais do que cinco minutos para fazer a chave, quanto mais cedo você puder me trazer o aço mais cedo farei a chave.";
		mes "Eu estarei esperando.";
		changequest(3080,3081);
		rachel_camel = 22;
		close;
	} else if (rachel_camel == 22) {
		if (countitem(Steel)) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Aqui está o que Aço de que você precisa.";
			mes "Por favor";
			mes "você poderia fazer a chave agora?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "...............................";
			mes "Eu estive estudando este molde de chave, e eu percebi algo...";
			mes "Diga-me agora: Para que você está usando esta chave?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Huh...?";
			mes "Para que você quer saber...?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Eu lhe perguntei primeiro.";
			mes "Diga-me o que você pretende fazer com esta chave!";
			mes "Se não me disser, eu não poderei ajudá-lo.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Não minta para mim.";
			mes "Este molde...";
			mes "Ele é da fechadura das algemas que";
			mes "Eu tenho feito em em ordens do Exército de Rachel.";
			mes "Eu tenho a chave mestra para isto.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Estas algemas só podem ser usadas por prisioneiros!";
			mes "Se eu soltar um deles, eles irão caçá-lo e me responsabilizar.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "A verdade é que...";
			mes "Eu estou tentando libertar alguém que o Exército de Rachel prendeu...";
			mes "Ela é Curdie, uma garotinha que eles trancaram no Vulcão de Thor...";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "O que...?!";
			mes "Está falando sério?";
			mes "Vo-Você... Não pode.";
			mes "Você não está mentindo.";
			mes "Isto...";
			mes "Lamento, você não deveria ter se envolvido com isto, mas...";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Oh céus!";
			mes "Eles... Eles realmente aprisionaram uma criança inocente?!";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Aqui. Pegue-a.";
			mes "Pegue a Chave Mestra.";
			mes "Leve isto até o Vulcão de Thor e resgate esta pobre criança.";
			mes "Poderíamos ter um monte de problemas por fazer isto, mas...";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "A minha consciência não permitirá que eles façam algo como isto.";
			mes "Resgate esta criança, e depois jogue esta chave fora em algum lugar quando você terminar.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Dessa forma, se o exército vier me interrogar.";
			mes "Eu vou apenas dizer que ela foi roubada da minha loja por algum ladrão.";
			mes "Eu também deveria me livrar de todas as minhas chaves...";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Apresse-se e vá!";
			mes "Certifique-se de que você trará a criança de volta a salvo para sua família!";
			changequest(3081,3082);
			rachel_camel = 23;
			close;
		} else {
			mes "[Chaveiro Lockenlock]";
			mes "Tudo que preciso é de ^4D4DFF1 Aço^000000.";
			mes "Não vai demorar mais do que cinco minutos para fazer a chave.";
			mes "Quanto mais cedo você puder me trazer o aço mais cedo farei a chave.";
			mes "Eu estarei esperando.";
			close;
		}
	} else if (rachel_camel == 23) {
		mes "[Chaveiro Lockenlock]";
		mes "Aqui. Pegue-a.";
		mes "Pegue a Chave Mestra.";
		mes "Leve isto até o Vulcão de Thor e resgate esta pobre criança.";
		mes "Poderíamos ter um monte de problemas por fazer isto, mas...";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Apresse-se e vá!";
		mes "Certifique-se de que você trará a criança de volta a salvo para sua família!";
		close;
	} else if (rachel_camel == 24) {
		mes "[Chaveiro Lockenlock]";
		mes "Ei, esta criança que você salvou...";
		mes "Curdie.";
		mes "Ela voltou com segurança para a cidade.";
		mes "Eu me sinto culpado pelo o que aconteceu.";
		mes "Digo, ela foi presa nas algemas que Eu criei para o exército.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Sendo assim, eu estou empacotando minhas coisas.";
		mes "Eu estou pensando em deixar esta cidade para sempre.";
		mes "O exército fugiu de sua função fazendo algo como isto.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Você é uma pessoa boa de verdade, fico feliz em te conhecer.";
		mes "Eu não sei se iremos nos encontrar novamente, mas é bom saber que há pessoas boas como você neste mundo.";
		close;
	} else if (rachel_camel == 25) {
		mes "[Chaveiro Lockenlock]";
		mes "Ei, esta criança que você salvou...";
		mes "Curdie.";
		mes "Ela voltou com segurança para a cidade.";
		mes "Eu me sinto culpado pelo o que aconteceu.";
		mes "Digo, ela foi presa nas algemas que eu criei para o exército.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Sendo assim, eu estou empacotando minhas coisas.";
		mes "Eu estou pensando em deixar esta cidade para sempre.";
		mes "O exército fugiu de sua função fazendo algo como isto.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Você é uma pessoa boa de verdade, fico feliz em te conhecer.";
		mes "Eu não sei se iremos nos encontrar novamente, mas é bom saber que há pessoas boas como você neste mundo.";
		close;
	} else {
		mes "[Lockenlock]";
		mes "Zzzz...";
		mes "Zzzz... Argh!";
		mes "...Zzz...";
		next;
		mes "^3355FFEle está bêbado e roncando.^000000";
		close;
	}
}

// ------------------------------------------------------------------
veins,227,127,5	script	Ivory#camel	4_F_DESERT,{
	if (rachel_camel < 5) {
		mes "[Produtora de Sabão]";
		mes "Eu preciso fazer mais de meu sabão, mas meus ingredientes se esgotaram.";
		mes "Bem, não há muito que eu possa fazer sem eles, por isto seria melhor fechar a loja por hoje...";
		close;
	} else if (rachel_camel == 5) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Com licença...?";
		next;
		mes "[Produtora de Sabão]";
		mes "Ah, lamento muito mas eu estou fechando a loja agora por que eu preciso correr atrás de ingredientes para sabão.";
		mes "Se você encomendou algo, você poderia voltar aqui amanhã.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Um, é uma Emergência!";
		mes "Sr. Lockenlock me pediu para vir aqui e conseguir algum tipo de sabão especial.";
		mes "Eu preciso disto para fazer um molde para que ele possa fazer uma chave para mim...";
		next;
		mes "[Produtora de Sabão]";
		mes "Anh? Você trancou a si mesmo?";
		mes "Ah, o Sr. Lockenlock deve estar falando sobre o meu Sabão Chamelepu orgânico.";
		mes "Este é um sabonete artístico que você pode moldar facilmente.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sim, este mesmo!";
		mes "Sabão Chamelepu!";
		next;
		mes "[Produtora de Sabão]";
		mes "Meu Sabão Chamelepu é muito popular.";
		mes "É um sabonete líquido que pode ser derramando em qualquer coisa.";
		mes "E irá endurecer em qualquer formato que quiser.";
		mes "Simples, huh?";
		next;
		mes "[Produtora de Sabão]";
		mes "Bem, como eu já lhe disse.";
		mes "Eu não tenho nenhum dos ingredientes para o sabão.";
		mes "Então eu não posso fazer mais nenhum sabão hoje.";
		mes "Você deve voltar amanhã de tarde se você quiser comprar o sabão.";
		next;
		mes "[Produtora de Sabão]";
		mes "Se você realmente precisa dele neste momento.";
		mes "Posso ainda fazer isto para você se você me trouxer todos os ingredientes.";
		mes "Embora...";
		mes "Eles possam ser um pouco difíceis de se conseguir.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Excelente. O importante";
		mes "para mim é conseguir";
		mes "este fazer este sabão";
		mes "O mais rápido possível!";
		next;
		mes "[Produtora de Sabão]";
		mes "Certo, primeiro eu gostaria que você me trouxesse o básico.";
		mes "Traga-me estes itens na quantia exata que eu lhe disser.";
		mes "Tudo bem?";
		mes "A quantia é muito importante ao fazer o sabão.";
		next;
		mes "[Produtora de Sabão]";
		mes "^4D4DFF10 Leites^000000,";
		mes "^4D4DFF100 Ervas Verdes^000000,";
		mes "^4D4DFF50 Jellopys^000000, e";
		mes "^4D4DFF5 Garrafas Vazias^000000.";
		mes "Depois poderemos ir para a parte difícil.";
		changequest(3064,3065);
		rachel_camel = 6;
		close;
	} else if (rachel_camel == 6) {
		if ((countitem(Green_Herb) > 99) && (countitem(Jellopy) > 49) && (countitem(Milk) > 9) && (countitem(Empty_Bottle) > 4)) {
			mes "[Produtora de Sabão]";
			mes "Ah, que ótimo!";
			mes "Você trouxe tudo! Agora...";
			mes "É hora de você fazer a, parte difícil.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			next;
			mes "[Produtora de Sabão]";
			mes "Por favor diga ao Dono da Fazenda de Camelos na cidade.";
			mes "Que eu lhe enviei e mostre a ele os ingredientes que você teve de me trazer.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Espere...";
			mes "Porque eu iria querer ver o cara que toma conta dos camelos?";
			mes "O que ele têm a ver com a fabricação do sabão?";
			next;
			mes "[Produtora de Sabão]";
			mes "É melhor você não saber disto agora...";
			mes "apenas vá visitar o Sr. Saraman, o dono da Fazenda de Camelos.";
			mes "Eu não posso esperar por muito tempo, então por favor volte o mais rápido possível.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Sr. Saraman...?";
			mes "Ok, então eu preciso visitá-lo se eu realmente precisar de você para fazer o sabão...";
			changequest(3065,3066);
			rachel_camel = 7;
			close;
		} else {
			mes "[Produtora de Sabão]";
			mes "Certo, primeiro eu gostaria que você me trouxesse o básico.";
			mes "Traga-me estes itens na quantia exata que eu lhe disser, tudo bem?";
			mes "A quantia é muito importante ao fazer o sabão.";
			next;
			mes "[Produtora de Sabão]";
			mes "^4D4DFF10 Leites^000000,";
			mes "^4D4DFF100 Ervas Verdes^000000,";
			mes "^4D4DFF50 Jellopys^000000, e";
			mes "^4D4DFF5 Garrafas Vazias^000000.";
			mes "Depois poderemos ir para a parte difícil.";
			close;
		}
	} else if (rachel_camel == 7) {
		mes "[Moça Bonita]";
		mes "Hm? Você precisa de alguma coisa?";
		mes "Eu estou abrindo a loja agora então eu não estou pronta para vender nada ainda.";
		close;
	} else if (rachel_camel == 8) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu preciso levar para o Sr. Saraman todas as coisas que ele precisa para estimular o apetite de um camelo.";
		mes "Eu preciso conseguir...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^4D4DFF1 Maçã Verde^000000,";
		mes "^4D4DFF5 Rações para Monstros^000000,";
		mes "^4D4DFF1 Garrafa Vazia^000000, e";
		mes "^4D4DFF1 Poção Amarela^000000.";
		close;
	} else if (rachel_camel == 9) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho tudo que é necessário para estimular o apetite de um camelo.";
		mes "Agora eu preciso de alimentar o camelo então eu poderei conseguir os ingredientes para o sabão e 5 Blocos de Estrume.";
		close;
	} else if (rachel_camel == 10) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora,seria melhor gastar meu tempo procurando pelos ingredientes no deserto de camelos.";
		close;
	} else if (rachel_camel == 11) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu deveria achar o camelo perdido do Sr. Saraman, alimentar este camelo com estimulantes de apetite.";
		mes "E depois pegar os ingredientes para o sabão e 5 Blocos de Estrume se eu quiser libertar Curdie.";
		close;
	} else if (rachel_camel == 12) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem... Eu encontrei o camelo.";
		mes "Agora eu preciso conseguir todos os ingredientes para o sabão.";
		mes "Quanto mais cedo eu fizer isto, mais cedo eu irei ajudar Curdie.";
		close;
	} else if (rachel_camel > 12 && rachel_camel < 17) {
		mes "^3355FFVocê já encontrou o camelo, então você precisa coletar os ingredientes para o sabão se quiser libertar Curdie.^000000";
		close;
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sabão e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao SR. Saraman para dizer a ele onde está o seu camelo, e depois ir até a Srta. Ivory.";
		close;
	} else if (rachel_camel == 18) {
		mes "[Produtora de Sabão]";
		mes "Hm, Soony por acaso lhe causou algum problema?";
		mes "Eu estou achando que sim, por isto você demorou tanto para conseguir estes blocos de estrume de camelo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Parece que foi um grande incômodo...";
		mes "Mas felizmente, tudo isto vai valer a pena.";
		mes "De qualquer forma, pegue este Bloco de Estrume.";
		mes "Não quero mexer muito com isto.";
		next;
		mes "[Produtora de Sabão]";
		mes "Sim, eu posso entender.";
		mes "Embora ele esteja em garrafas, é um pouco difícil de manusear isto...";
		mes "Enfim, vamos nessa.";
		mes "Deixe-me fazer um pouco de sabão pra você.";
		next;
		mes "[Produtora de Sabão]";
		mes "Você gastou bastante tempo e energia para conseguir estes itens.";
		mes "Então eu não irei lhe cobrar pelos meus serviços.";
		mes "Além disso, você trouxe a quantidade certa de materiais que eu irei utilizar.";
		next;
		mes "^3355FFIvory vestiu um par de luvas longas, e misturou os ingredientes.";
		mes "Depois ela colocou a mistura em um pote vazio.^000000";
		next;
		mes "[Produtora de Sabão]";
		mes "Aqui está seu sabão!";
		mes "Depois de derramar o sabão em algo.";
		mes "Não se esqueça de colocá-lo em uma garrafa larga após cerca de vinte segundos.";
		next;
		mes "[Produtora de Sabão]";
		mes "E hum... Não deixe que ninguém saiba o que eu uso para fazer este sabão.";
		mes "As pessoas não irão comprá-lo se eles souberem que eles lavam seus rostos com...";
		mes "Você sabe...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Não se preocupe, eu não direi a ninguém.";
		mes "Obrigado por fazer o sabão!";
		next;
		mes "^3355FFAgora que você tem Sabão de Camelo de Veludo, você deve levá-lo ao Sr. Lockenlock.^000000";
		changequest(3077,3078);
		rachel_camel = 19;
		close;
	} else if (rachel_camel == 19) {
		mes "^3355FFAgora que você tem Sabão de Camelo de Veludo, você deve levá-lo ao Sr. Lockenlock.^000000";
		close;
	} else if (rachel_camel > 19 && rachel_camel < 26) {
		mes "[Produtora de Sabão]";
		mes "^333333*Ufa!*^000000 Hoje foi um dia longo.";
		mes "Eu acho que vou fechar a loja agora.";
		close;
	} else {
		mes "[Moça Bonita]";
		mes "Hm? Você precisa de alguma coisa?";
		mes "Eu estou abrindo a loja agora então eu não estou pronta para vender nada ainda.";
		close;
	}
}

// ------------------------------------------------------------------
veins,115,59,5	script	Saraman#camel	4_M_EINOLD,{
	if (rachel_camel < 7) {
		mes "[Saraman]";
		mes "Zzzzz...";
		mes "Zzz... Zzzzzz...";
		close;
	} else if (rachel_camel == 7) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Com licença. Olá.";
		mes "A Srta. Ivory me enviou aqui com estes ingredientes de sabão?";
		mes "Ela disse que eu tinha de vir até você se eu quiser que ela faça um para mim.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Sabão, eh? Oh, entendi.";
		mes "Você deve estar aqui para pegar alguns Blocos de Estrume de Camelo Fresco.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O-o Q-Que!?";
		mes "Meu Deus!";
		mes "Vo-Você tem certeza?";
		mes "Você só pode estar brincando!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Claro como o pegado, e honesto como Deus.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "...............................";
		mes "...............................";
		mes "...............................";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Eh... aqueles ingredientes que você me trouxe?";
		mes "Eles são para fazer sabão certo.";
		mes "^FF0000Aquilo com que alimentamos os Camelos^000000 para que eles façam Estrume aos montes.";
		mes "Estrume para fazer sabão.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Oh, não se preocupe.";
		mes "Estrume de Camelo é estéril, completamente seguro.";
		mes "Na verdade, isto cheira bem, tem propriedades medicinais.";
		mes "E é considerada uma delicadeza em certos países.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Infelizmente, Camelas de Veludo estão quase extintas, por isto só temos uma nesta fazenda.";
		mes "Este é o porque de nós termos um contrato especial com a Srta. Ivory para que ela possa fazer seu sabão.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Digo... Eu não estava esperando que ela enviaria um mensageiro até amanhã.";
		mes "Por que você está aqui tão cedo assim?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Na verdade, este é um tipo de emergência.";
		mes "Entende, eu preciso do sabão para fazer um molde de chave porque eu perdi--";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Entendo, entendo.";
		mes "Me desculpe por ter lhe perguntado!";
		mes "Então, este é um favor pessoal para você?";
		mes "Bem, temos um pequeno problema que precisamos resolver primeiro.";
		mes "Ouça...";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Nós só podemos obter Estrume de camelo depois do mesmo comer, certo?";
		mes "Bem, minha camela não está acostumada a comer tão tarde no dia.";
		mes "Mesmo que coloquemos comida na frente dela, ela não irá comer.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que?";
		mes "Não há nada que possamos fazer?";
		mes "Quero dizer, isto se trata de um caso de Vida ou Morte!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "*Suspiro*";
		mes "...Isso não é bom...";
		mes "Ok então, vamos fazer isso.";
		mes "As vezes eu faço um estimulante de apetite para a camela quando ela está doente e não come nada.";
		mes "Nós podemos tentar alimentá-la com o estimulante, e fazê-la defecar.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Bem, nós não podemos alimentá-la a força.";
		mes "Mas nós podemos fazer com que ela dê uma mordida em um pouco de estimulante de apetite.";
		mes "Eu geralmente uso isto se ela adoecer, mas se você diz que esta é uma emergência...";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Certo, eu acho que podemos tentar isto.";
		mes "Mas eu quero que você me traga os ingredientes.";
		mes "Só um minuto...";
		mes "Vamos ver agora...";
		next;
		mes "[Fazendeiro Saraman]";
		mes "^4D4DFF1 Maçã Verde^000000,";
		mes "^4D4DFF5 Rações para Monstros^000000,";
		mes "^4D4DFF1 Garrafa Vazia^000000 e";
		mes "^4D4DFF1 Poção Amarela^000000.";
		changequest(3066,3067);
		rachel_camel = 8;
		close;
	} else if (rachel_camel == 8) {
		if ((countitem(Monsters_Feed) > 4) && (countitem(Yellow_Potion) > 0) && (countitem(Unripe_Apple) > 0) && (countitem(Empty_Bottle) > 0)) {
			mes "[Fazendeiro Saraman]";
			mes "Oh que bom que está de volta.";
			mes "Você trouxe tudo?";
			mes "Agora, primeiro eu preciso misturar tudo junto antes que você possa alimentar minha camela com isto.";
			mes "Só um minuto...";
			next;
			mes "^3355FFSaraman misturou todos os ingredientes, e depois os colocou dentro de um frasco.^000000";
			next;
			mes "[Fazendeiro Saraman]";
			mes "Certo, agora leve isto aos camelos aqui perto.";
			mes "Somente a minha Camela de Veludo saberá que deve comer isto, então ela irá até você.";
			next;
			mes "[Fazendeiro Saraman]";
			mes "Assim que ela morder este estimulante de apetite, ela irá comer sua comida como louca.";
			mes "Depois o Estrume sairá dela como se fosse em uma torneira.";
			mes "Vamos, por que você não tenta?";
			next;
			mes "[Fazendeiro Saraman]";
			mes "Tudo certo.";
			mes "Você deve ser capaz de obter 5 Blocos de Estrume de Camelo com estes ingredientes.";
			mes "Esta é uma boa quantia de acordo com o que a Srta. Ivory ordenou.";
			delitem(Monsters_Feed,5);
			delitem(Yellow_Potion,1);
			delitem(Unripe_Apple,1);
			delitem(Empty_Bottle,1);
			changequest(3067,3068);
			rachel_camel = 9;
			close;
		} else {
			mes "[Fazendeiro Saraman]";
			mes "Bem, nós não podemos alimentá-la a força.";
			mes "Mas nós podemos fazer com que ela dê uma mordida em um pouco de estimulante de apetite.";
			mes "Eu geralmente uso isto se ela adoecer, mas se você diz que esta é uma emergência...";
			next;
			mes "[Fazendeiro Saraman]";
			mes "Certo, eu acho que podemos tentar isto.";
			mes "Mas eu quero que você me traga os ingredientes.";
			mes "Só um minuto...";
			mes "Vamos ver agora...";
			next;
			mes "[Fazendeiro Saraman]";
			mes "^4D4DFF1 Maçã Verde^000000,";
			mes "^4D4DFF5 Rações para Monstros^000000,";
			mes "^4D4DFF1 Garrafa Vazia^000000 e";
			mes "^4D4DFF1 Poção Amarela^000000.";
			close;
		}
	} else if (rachel_camel == 9) {
		mes "[Fazendeiro Saraman]";
		mes "Assim que ela morder este estimulante de apetite, ela irá comer sua comida como louca.";
		mes "Depois o Estrume sairá dela como se fosse em uma torneira.";
		mes "Vamos, por que você não tenta?";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Tudo certo.";
		mes "Você deve ser capaz de obter 5 Blocos de Estrume de Camelo com estes ingredientes.";
		mes "Esta é uma boa quantia de acordo com o que a Srta. Ivory ordenou.";
		close;
	} else if (rachel_camel == 10) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sr. Saraman, nenhum dos camelos quer comer este estimulante de apetite...";
		mes "Eu estou fazendo algo errado?";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Oh, sim, Bem...";
		mes "Um de meus funcionários veio até mim.";
		mes "E me disse que minha Camela de Veludo desapareceu em algum lugar...";
		mes "Esta notícia é terrível!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Minha preciosa Camela de Veludo...";
		mes "É o meu maior investimento em negócios!";
		mes "Eu estou arruinado com isto!";
		mes "Por favor...";
		mes "Eu irei lhe recompensar se você encontrar minha camela para mim!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Meu estúpido funcionário esqueceu de amarrá-la, então ela acabou conseguindo fugir!";
		mes "Ugh! Por favor me ajude a encontrá-la!";
		mes "Sem ela, eu não poderei ser capaz de conseguir o seu Estrume de Camelo especial.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Calma, sem pânico...";
		mes "Tudo irá ficar bem.";
		mes "Esta camela se move muito lentamente então ela não pode ter ido muito longe daqui.";
		mes "Por favor encontre minha camela Soony o mais rápido possível!";
		changequest(3069,3070);
		rachel_camel = 11;
		close;
	} else if (rachel_camel == 11) {
		mes "[Fazendeiro Saraman]";
		mes "Soony! Soony...!";
		mes "On-onde está você?!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Por favor, me ajude a encontrar minha Soony, minha Camela de";
		mes "Veludo.";
		mes "Você não poderá fazer seu sabão sem ela!";
		mes "E meu negócio realmente depende de minha Soony!";
		close;
	} else if (rachel_camel == 12) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem... Eu encontrei o camelo.";
		mes "Agora eu preciso conseguir todos os ingredientes para o sabão.";
		mes "Quanto mais cedo eu fizer isto, mais cedo eu irei ajudar Curdie.";
		close;
	} else if (rachel_camel > 12 && rachel_camel < 17) {
		mes "^3355FFVocê já encontrou o camelo, então você precisa coletar os ingredientes para o sabão se quiser libertar Curdie.^000000";
		close;
	} else if (rachel_camel == 17) {
		mes "[Fazendeiro Saraman]";
		mes "Oh, é você!";
		mes "Você encontrou minha Soony?";
		mes "Onde está ela?";
		mes "O que aconteceu com ela?";
		mes "Oh, eu não sei o que iria fazer sem minha Camela!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Não se preocupe, Sr. Saraman, eu encontrei Soony perto da cidade.";
		mes "Ela machucou sua perna então eu acho que iria ser uma boa idéia.";
		mes "Se você enviasse algumas pessoas para ajudar a trazê-la de volta.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Obrigado Deus! Muito obrigado, muito obrigado mesmo!";
		mes "Eu irei enviar meus funcionários até lá imediatamente.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Muito bom, você não tem idéia de quanto esta camela vale!";
		mes "Eu vou enviar alguns de meus homens até lá para trazê-la de volta para casa imediatamente!";
		mes "Obrigado, você salvou meu negócio!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Aqui, eu quero que você pegue isto.";
		mes "Considere isso como um pequeno presente de agradecimento pelo que você fez por mim.";
		mes "Boa sorte em conseguir o sabão que você quer fazer.";
		changequest(3076,3077);
		getitem(Old_Violet_Box,1);
		rachel_camel = 18;
		close;
	} else if (rachel_camel == 18) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu não deveria estar indo ver a Srta. Ivory agora?";
		close;
	} else if (rachel_camel > 18 && rachel_camel < 24) {
		mes "[Fazendeiro Saraman]";
		mes "Obrigado por me ajudar a encontrar minha preciosa Camela de Veludo Soony.";
		mes "Volte aqui qualquer hora, e talvez possamos tomar meu Iogurte de Camelo juntos.";
		close;
	} else {
		mes "[Saraman]";
		mes "Zzz... Zzz.";
		mes "Zzz...";
		next;
		mes "^3355FFAssistir este homem";
		mes "roncar faz você";
		mes "querer tirar uma soneca.^000000";
		close;
	}
}

// ------------------------------------------------------------------
veins,78,226,5	script	Camelo#camel	4_DST_CAMEL,{
	if (rachel_camel == 9) {
		mes "^3355FFO camelo cheirou o estimulante de apetite.";
		mes "Mas tirou seu nariz bruscamente para longe do estimulante.^000000";
		changequest(3068,3069);
		rachel_camel = 10;
		close;
	} else if (rachel_camel == 10) {
		mes "^3355FFO camelo cheirou o estimulante de apetite.";
		mes "Mas tirou seu nariz bruscamente para longe do estimulante.";
		mes "Este provavelmente não é o camelo que você está procurando.^000000";
		close;
	} else {
		mes "[Camel]";
		mes "*Neigh*";
		mes "*Chew Chew*";
		close;
	}
}
veins,72,227,3	duplicate(Camelo#camel)	Camelo#2camel	4_DST_CAMEL
veins,81,222,1	duplicate(Camelo#camel)	Camelo#3camel	4_DST_CAMEL
veins,77,219,5	duplicate(Camelo#camel)	Camelo#4camel	4_DST_CAMEL
veins,73,215,0	duplicate(Camelo#camel)	Camelo#5camel	4_DST_CAMEL
veins,68,215,5	duplicate(Camelo#camel)	Camelo#6camel	4_DST_CAMEL

// ------------------------------------------------------------------
ve_fild07,235,42,3	script	Camela de Veludo#camel	4_DST_CAMEL,{
	if (rachel_camel == 11) {
		mes "^3355FFA perna desta camela está ferida.";
		mes "Embora pareça ferida, suas narinas farejaram rapidamente o estimulante de apetite para camelos.";
		mes "E o mastigou.^000000";
		next;
		mes "[Camel]";
		mes "^333333*Chew Chew.*^000000";
		mes "^333333*Mastiga*^000000";
		next;
		mes "^3355FFA camela começou a mastigar o estimulante.";
		mes "Então ela começou a comer cada vez mais rápido e mais da comida até o seu completo consumo.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Esta deve ser a";
		mes "Camela de Veludo...";
		mes "Eu acho que tudo que eu tenho que fazer é coletar um pouco deste seu precioso Estrume de Camelo.";
		changequest(3070,3071);
		rachel_camel = 13;
		close;
	} else if (rachel_camel > 11 && rachel_camel < 17) {
		if (countitem(Green_Herb) > 19 && countitem(Jellopy) > 9 && countitem(Milk) > 1 && countitem(Empty_Bottle) > 0) {
			mes "^3355FFA camela sente o cheiro, e percebe que você tem comida para ela, e começa a babar.";
			mes "Você deveria alimentá-la.^000000";
			next;
			switch (rand(3)) {
				case 1:
				if (rachel_camel == 12) {
					mes "[Camela de Veludo]";
					mes "^333333*Chew Chew.*^000000";
					mes "^333333*Mastiga*^000000";
					next;
					mes "^3355FFA camela comeu tudo, mas ela parece não querer fazer suas necessidades agora.^000000";
				} else {
					mes "^3355FFA camela torceu o rosto como se estivesse sofrendo de dor de estômago e...";
					mes "Saíram 2 Batatas Doces.";
					mes "Elas provavelmente são seguras para consumo...";
					mes "Espero que sim.^000000";
					getitem(Sweet_Potato,2);
				}
				delitem(Milk,2);
				delitem(Green_Herb,20);
				delitem(Jellopy,10);
				close;
				case 2:
				mes "[Camela de Veludo]";
				mes "^333333*Chew Chew*^000000";
				mes "^333333*Mastiga*^000000";
				next;
				mes "^3355FFA camela torceu o rosto como se estivesse sofrendo de dor de estômago...";
				mes "Tcharam! Você conseguiu um bloco de estrume de camelo!";
				mes "Pode comemorar!^000000";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				if (rachel_camel == 12) {
					mes "Agora tudo de que preciso são mais 4 destes blocos de estrumes.";
					rachel_camel = 13;
					changequest(3071,3072);
				} else if (rachel_camel == 13) {
					mes "Incrível! Eu consegui 2 gloriosos Blocos de Estrume de Camelo!";
					mes "Só faltam mais 3!";
					rachel_camel = 14;
					changequest(3072,3073);
				} else if (rachel_camel == 14) {
					mes "Yeah! Agora eu tenho 3 Blocos de Estrume de Camelo.";
					mes "Só faltam 2...";
					mes "Eu tenho mais da metade do que eu precisava!";
					rachel_camel = 15;
					changequest(3073,3074);
				} else if (rachel_camel == 15) {
					mes "4 Blocos de Estrume de Camelo...";
					mes "Heh heh! Isto está indo melhor do que eu pensei!";
					mes "Só mais 1!";
					rachel_camel = 16;
					changequest(3074,3075);
				} else if (rachel_camel == 16) {
					mes "Em minhas mãos...";
					mes "Eu estou segurando 5 Blocos de Estrume de Camelo.";
					mes "Este é o meu melhor momento.";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Nunca, em todos estes anos de aventura, salvando os oprimidos.";
					mes "Protegendo os inocentes, eu pensei que iria completar este feito magnificente.";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Eu estou tão feliz --com isto--";
					mes "^4D4DFFProvei^000000 minha força, meu valor, e minha determinação nesta tarefa.";
					mes "Este dia entrará para a História!";
					mes "Longa Vida a "+strcharinfo(CHAR_NAME)+"!";
					next;
					mes "^3355FFÉ hora de você voltar para o Sr. Saraman.^000000";
					rachel_camel = 17;
					changequest(3075,3076);
				}
				delitem(Milk,2);
				delitem(Green_Herb,20);
				delitem(Jellopy,10);
				delitem(Empty_Bottle,1);
				close;
				default:
				mes "[Camela de Veludo]";
				mes "^333333*Chew Chew.*^000000";
				mes "^333333*Mastiga*^000000";
				next;
				mes "^3355FFA camela torceu o rosto como se estivesse sofrendo de dor de estômago e...";
				mes "Saiu uma Batata Doce.";
				mes "Provavelmente é seguro para se comer...";
				mes "Eu acho...^000000";
				delitem(Milk,2);
				delitem(Green_Herb,20);
				delitem(Jellopy,10);
				getitem(Sweet_Potato,1);
				close;
			}
		} else {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			if (rachel_camel == 12) {
				mes "Eu preciso alimentar esta camela, se não nunca vou conseguir algum";
				mes "Estrume dela.";
				mes "Vamos ver, os itens que o Sr Saraman mencionou que a Srta. Ivory me pediram para alimentar a camela.";
				mes "Eu tenho que ter...";
			} else {
				mes "Já fiquei sem comida?";
				mes "Se eu quiser alimentar este camelo de novo, então eu preciso trazer mais comida...";
			}
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "^4D4DFF10 Leites^000000,";
			mes "^4D4DFF100 Ervas Verde^000000,";
			mes "^4D4DFF50 Jellopys^000000, e";
			mes "^4D4DFF5 Garrafas Vazias^000000.";
			next;
			mes "[Camela de Veludo]";
			mes "*Chew Chew*";
			mes "^333333*Mastiga*^000000";
			close;
		}
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sabão e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao Sr. Saraman para dizer a ele onde está o seu camelo, e depois ir até a Srta. Ivory.";
		close;
	} else {
		mes "[Camela de Veludo]";
		mes "^333333*Chew Chew*^000000";
		next;
		mes "^3355FFCamelo Mastigando.^000000";
		close;
	}
}
