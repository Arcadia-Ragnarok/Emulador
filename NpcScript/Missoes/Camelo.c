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
| - Info: Quest do Camelo (Im�os de Veins)                          |
| * Pr� requisito para a quest da Base do Vulc�o.                   |
\*-----------------------------------------------------------------*/

veins,327,185,3	script	Garoto#camel	4_M_DST_CHILD,{
	if (!rachel_camel) {
		mes "[Garoto Karyn]";
		mes "*Solu�o*";
		next;
		mes "^3355FFEsta crian�a chorando parece estar bem preocupada...^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu, porque voc� est� chorando?";
		mes "Voc� est� perdido?";
		mes "Onde est� sua m�e?";
		next;
		mes "[Garoto Karyn]";
		mes "Minha... M�e...";
		mes "Em casa...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "......";
		mes ".........";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Entendo.";
		mes "Ent�o...";
		mes "Voc� est� tendo problemas procurando o caminho de volta para casa?";
		next;
		mes "[Garoto Karyn]";
		mes "N�o! Eu tenho 10 anos de idade!";
		mes "Eu posso achar o caminho de volta, de olhos fechados!";
		mes "^333333*Sniff sniff*^000000";
		mes "Buaaaaaaaahh!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Voc� pode me dizer por que voc� est� chorando?";
		next;
		mes "[Garoto Karyn]";
		mes "Eu... ^333333*Sniff*^000000";
		mes "E-eu havia ido para... O-o...";
		mes "Vulc�o.... c-c-com minha irm-- Buuaaaaaaah!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Pobre garoto...";
		mes "Vamos, respire fundo, assim voc� pode me dizer sobre o que aconte�eu um pouco mais devagar.";
		next;
		mes "[Garoto Karyn]";
		mes "*^333333*Solu�o*^000000";
		mes "...Est� bem...";
		mes "Eu fui ao Vulc�o de Thor com minha pequena irm� para ver quem de n�s � mais corajoso...";
		mes "Mas ent�o, n�s conhecemos algumas...";
		mes "Pessoas assustadoras l�... e...";
		next;
		mes "[Garoto Karyn]";
		mes "Eu fiquei assustado, ent�o... Ent�o...";
		mes "Minha irm�... Uaah! *Solu�o*";
		next;
		mes "[Garoto Karyn]";
		mes "*Solu�o*";
		next;
		mes "[Garoto Karyn]";
		mes "E-eu corri para longe deles...";
		mes "Mas deixei minha irm� l� com estes homens assustadores...";
		next;
		mes "[Garoto Karyn]";
		mes "Mam�e est� doente, e papai est� sempre no trabalho...";
		mes "Ele � o capit�o de um navio, ent�o...";
		mes "N�o acho que eles possam ajudar.";
		next;
		mes "[Garoto Karyn]";
		mes "Por favor voc� poderia me ajudar, e trazer minha irm� de volta?";
		mes "*Sniff*";
		mes "Por favor?";
		mes "Eu prometo que eu irei lhe pagar assim que meu pai voltar!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espere... Eu tenho uma pergunta.";
		mes "Voc� disse que algu�m pegou sua irm� no Vulc�o de Thor?";
		mes "O que eles fizeram?";
		mes "Voc� tem certeza de que haviam pessoas l�?";
		next;
		mes "[Garoto Karyn]";
		mes "Eu... Eu n�o sei!";
		mes "Eu fiquei t�o assustado, eu s� fugi para longe!";
		mes "Eu... Eu n�o queria deixar minha l�!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmmm...";
		mes "Talvez sua irm� tenha sido sequestrada por bandidos...";
		next;
		if (select("Rejeitar pedido","Aceitar Pedido") == 1) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Lamento garoto mas eu tenho muitas coisas para fazer.";
			mes "Estou certo de que algu�m vir� logo logo para salvar sua irm�.";
			next;
			mes "[Garoto Karyn]";
			mes "Uah";
			close;
		}
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ok, Vou ver o que posso fazer.";
		mes "Eu irei tentar de tudo para achar sua irm�";
		next;
		mes "[Garoto Karyn]";
		mes "Muito obrigado!";
		mes "Por favor encontre minha irm�";
		mes "Curdie logo!";
		mes "Oh, Espero que ela esteja bem!";
		mes "Se ela n�o...";
		mes "^333333*Sniff*^000000";
		mes "Eu n�o sei o que eu iria fazer! Buaaaaaaaah";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Certo...";
		mes "Deseje-me sorte.";
		mes "Eu irei procurar pelo Vulc�o de Thor para achar sua pequena irm� Curdie.";
		setquest(3060);
		rachel_camel = 1;
		close;
	} else if (rachel_camel == 1) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu devo procurar pelo Vulc�o de Thor por Curdie, a pequena irm� de Karyn.";
		close;
	} else if (rachel_camel == 2) {
		mes "[Garoto Karyn]";
		mes "Vo-voc� conseguiu encontrar minha irm�?";
		mes "Ela est� bem?";
		mes "O que aconteceu?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu a encontrei, ela est� bem, mas...";
		next;
		mes "[Garoto Karyn]";
		mes "O que?";
		mes "Por que ela n�o est� com voc�?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Curdie est�...";
		mes "Bem, ela est� acorrentada.";
		mes "N�s precisamos achar uma forma de libert�-la.";
		mes "Voc� sabe onde h� um forjador ou um chaveiro que seja capaz de ajud�-la?";
		next;
		mes "[Garoto Karyn]";
		mes "Ah! Ah, h� um Chaveiro, na Rua do Mercado!";
		mes "Voc� pode o perguntar se ele poderia libertar Curdie!";
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
		mes "� melhor falar com o Sr. Lockenlock primeiro, o chaveiro na rua do mercado.";
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
		mes "Eu deveria estar levando todos os ingredientes do sab�o para a Srta. Ivory.";
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
		mes "Eu preciso falar com algu�m chamado Saraman para conseguir os ingredientes do sab�o...";
		close;
	} else if (rachel_camel == 8) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu preciso levar para o Sr. Saraman todas as coisas que ele precisa para estimular o apetite de um camelo.";
		mes "Eu preciso conseguir...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^4D4DFF1 Ma�� Verde^000000,";
		mes "^4D4DFF5 Ra��es para Monstros^000000,";
		mes "^4D4DFF1 Garrafa Vazia^000000, e";
		mes "^4D4DFF1 Po��o Amarela^000000.";
		close;
	} else if (rachel_camel == 9) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho tudo que � necess�rio para estimular o apetite de um camelo.";
		mes "Agora eu preciso de alimentar o camelo ent�o.";
		mes "Eu poderei conseguir os ingredientes para o sab�o, 5 Blocos de Estrume.";
		close;
	} else if (rachel_camel == 10) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora,seria melhor gastar meu tempo procurando pelos ingredientes no deserto de camelos.";
		close;
	} else if (rachel_camel == 11) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu deveria achar o camelo perdido do Sr. Saraman, alimentar este camelo com estimulantes de apetite.";
		mes "E depois pegar os ingredientes para o sab�o e 5 Blocos de Estrume se eu quiser libertar Curdie.";
		close;
	} else if (rachel_camel > 11 && rachel_camel < 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem... Eu encontrei o camelo.";
		mes "Agora eu preciso conseguir todos os ingredientes para o sab�o.";
		mes "Quanto mais cedo eu fizer isto, mais cedo eu irei ajudar Curdie.";
		close;
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sab�o e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao SR. Saraman para dizer a ele onde est� o seu camelo, e depois ir at� a Srta. Ivory.";
		close;
	} else if (rachel_camel == 18) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu n�o deveria estar indo ver a Srta. Ivory agora?";
		close;
	} else if (rachel_camel == 19) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora que eu tenho o Sab�o de Camelo de Veludo, eu devo levar isto para o Sr. Lockenlock.";
		close;
	} else if (rachel_camel == 20) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho de utilizar o sab�o para fazer um molde de chave que eu possa levar ao Sr. Lockenlock.";
		close;
	} else if (rachel_camel == 21) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Fazer a chave � mais importante do que dizer a Karyn sobre o que est� acontecendo.";
		close;
	} else if (rachel_camel == 22) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu preciso levar 1 A�o para o Mr. Lockenlock ent�o ele poder� fazer uma chave que finalmente libertar� Curdie.";
		close;
	} else if (rachel_camel == 23) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu finalmente consegui a chave que eu posso usar para libertar Curdie.";
		mes "Eu estou";
		mes "indo salv�-la neste momento.";
		next;
		mes "[Garoto Karyn]";
		mes "Muito obrigado!";
		mes "Por favor traga Curdie o mais r�pido poss�vel! ^333333*Solu�o*^000000";
		close;
	} else if (rachel_camel == 24) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ei, Karyn! Eu enviei sua irm� de volta para a cidade com uma Asa de Borboleta.";
		mes "Ela voltou com seguran�a?";
		next;
		mes "[Garoto Karyn]";
		mes "Sim, Curdie est� de volta e ela est� de repouso no hospital agora.";
		mes "Muito obrigado por toda a sua ajuda!";
		next;
		mes "[Garoto Karyn]";
		mes "Eu n�o sei o que h� de errado com Curdie.";
		mes "Desde que ela retornou, ela fica assustada sempre que v� os soldados na cidade.";
		next;
		mes "[Garoto Karyn]";
		mes "Eu prometo dizer ao meu pai sobre o que voc� fez assim que ele voltar.";
		mes "Obrigado por tudo que voc� fez por n�s!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hmm... Entendo...";
		mes "Eu irei voltar depois, quando Curdie tiver sa�do do hospital.";
		next;
		mes "[Garoto Karyn]";
		mes "Sim, por favor fa�a isto.";
		mes "Eu prometo lhe ajudar sempre que precisar de mim!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hahahaha!";
		mes "Bem...";
		mes "Que isto � bem tranquilizante.";
		mes "Ent�o at�, tome conta de sua m�e e de sua irm� muito bem.";
		mes "Entendeu?";
		next;
		mes "[Garoto Karyn]";
		mes "Entendi!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bom, muito bom...";
		mes "� uma promessa, ent�o.";
		mes "Vejo voc� por a�";
		completequest(3083);
		rachel_camel = 25;
		specialeffect(EF_ABSORBSPIRITS,AREA,playerattached());
		getexp(1000000,700000);
		close;
	} else if (aru_monas < 15) {
		mes "[Pequeno Karyn]";
		mes "Ol�, ol�!";
		mes "Ei, voc� precisa de mim para ajud�-lo?";
		mes "N�o...??";
		mes "Awww, deve haver algo que eu possa fazer...";
		close;
	} else if (aru_monas == 15) {
		mes "[Pequeno Karyn]";
		mes "Curdi acabou de voltar do hospital e est�, a cada dia ficando melhor!";
		mes "Ah, e eu estou cuidando dele, como tinha prometido.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "S�rio? Isto � �timo.";
		mes "Voc� deveria estar orgulhoso de si.";
		next;
		mes "[Pequeno Karyn]";
		mes "^666666*envergonhado*^000000 Heh heh!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, eu estava me perguntando se voc� poderia me ajudar.";
		mes "Seu pai � um pescador, certo?";
		mes "Voc� perguntaria a ele se ele poderia me emprestar seu barco?";
		next;
		mes "[Pequeno Karyn]";
		mes "Bem... Na verdade...";
		mes "O papa disse ao meu pai para n�o utilizar o barco dele por um tempo...";
		mes "N�o estou certo do porque...";
		next;
		mes "[Pequeno Karyn]";
		mes "Ent�o � isso.";
		mes "Papai n�o pode sair para o mar agora.";
		mes "Mas acho n�o teria problema se fosse voc�, certo?";
		mes "Hey, voc� me ajudou!";
		mes "Ent�o eu tenho que ajud�-lo, certo?";
		next;
		mes "[Pequeno Karyn]";
		mes "Meu pai est� t�o nervoso por n�o poder usar o barco dele que talvez seja melhor n�o contarmos que voc� deseja us�-lo.";
		mes "Vamos manter nosso segredinho, certo?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "C-claro!";
		next;
		mes "[Pequeno Karyn]";
		mes "De qualquer forma, seu barco � o �nico da praia do sul uma vez que todos os outros pescadores atracam seus barcos em outros lugares.";
		mes "E ainda, o barco do meu pai vai enferrujar se ningu�m us�-lo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "�timo! Muito obrigado pela sua ajuda, Karyn.";
		mes "Eu me certificarei de cuidar muito bem do barco do seu pai.";
		mes "E eu s� preciso dele por um momento, de qualquer forma.";
		next;
		mes "[Pequeno Karyn]";
		mes "Heh heh! Obrigado!";
		mes "Estou feliz de poder ajud�-lo, tamb�m!";
		aru_monas = 16;
		changequest(17011,17012);
		close;
	} else if (aru_monas < 26) {
		mes "[Pequeno Karyn]";
		mes "Oi! Voc� gostaria de ir pescar no barco do meu pai?";
		mes "Oh, e Curdie disse oi!";
		close;
	} else {
		mes "[Pequeno Karyn]";
		mes "Ol�, ol�!";
		mes "Ei, voc� precisa de mim para ajudar em algo?";
		mes "N�o...??";
		mes "Awww, deve haver alguma coisa que eu possa fazer...";
		close;
	}
}

// ------------------------------------------------------------------
que_thor,36,66,5	script	Pequena Curdie#camel	4_F_DST_CHILD,{
	if (rachel_camel == 1) {
		mes "^3355FFVoc� se depara com uma menina deitada sobre o ch�o inconsciente.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ei, menina! Acorde!";
		mes "Voc� pode me escutar?";
		next;
		mes "^3355FFEla tem pulso, mas apesar de suas palavras parece que, ela n�o ir� abrir seus olhos.";
		mes "Voc� d� um leve tapa na bochecha dela para acord�-la.^000000";
		next;
		mes "[Pequena Curdie]";
		mes "Huh?!";
		mes "...Ah, owwww";
		mes "W-waaaaaaaah!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Desculpe!";
		mes "Eu n�o queria fazer voc� chorar!";
		mes "Voc�... Voc� est� bem?";
		next;
		mes "[Pequena Curdie]";
		mes "Huh? Qu-Quem � voc�?";
		mes "Ah n�o, voc� tem que sair daqui!";
		mes "Voc� estar� em apuros se eles o capturarem!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "� voc� Curdie?";
		mes "Seu irm�o Karyn me pediu para resgatar voc�.";
		mes "Vamos, N�s precisamos de tirar voc� daqui.";
		next;
		mes "[Pequena Curdie]";
		mes "Karyn...?";
		mes "Oh, oh n�o! Eu...";
		mes "Eles me prenderam nestas algemas e eu n�o posso me mexer!";
		mes "Voc� tem de sair antes que aqueles homens assustadores voltem!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que...?!";
		mes "Que bastardos!";
		mes "Prendendo uma pequena menina como esta...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Argh!";
		mes "E eu n�o posso usar for�a bruta para quebrar estas algemas!";
		mes "Eu acabaria te machucando...!";
		next;
		mes "[Pequena Curdie]";
		mes "N�o se preocupe comigo...";
		mes "Apenas se apresse e saia!";
		mes "Eu... Eu irei ficar bem!";
		mes "Agora apresse-se!";
		mes "Algu�m est� vindo!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ok, Eu vou...";
		mes "Mas tenha paci�ncia, e espere por mim.";
		mes "Eu irei descobrir uma forma para libert�-la.";
		next;
		mes "[Pequena Curdie]";
		mes "^333333*Solu�o*^000000";
		mes "S-S�rio...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu prometo.";
		mes "Eu estou certo de que h� algu�m na cidade que saiba uma forma de soltar estas algemas.";
		mes "Eu estarei de volta o mais r�pido poss�vel!";
		changequest(3060,3061);
		rachel_camel = 2;
		close;
	} else if (rachel_camel == 2) {
		mes "^3355FFAlgu�m na cidade deve ter uma per�cia para soltar estas algemas.";
		mes "� a �nica maneira de libertar Curdie destas correntes.^000000";
		close;
	} else if (rachel_camel == 3 || rachel_camel == 6 || rachel_camel == 8 || rachel_camel == 22) {
		mes "^3355FFCurdie est� chorando deitada sobre o ch�o.^000000";
		close;
	} else if (rachel_camel == 4) {
		mes "[Pequena Curdie]";
		mes "Eu odeio o som que o metal faz quando bate em outro..";
		mes "O-os soldados, eles...";
		mes "Eles est�o...";
		next;
		mes "^3355FFCurdie est� ca�da sobre o ch�o, seus olhos est�o bem fechados.";
		mes "O seu corpo todo est� tremendo de medo.^000000";
		close;
	} else if (rachel_camel == 5) {
		mes "^3355FFNo ch�o, voc� v� alguns equipamentos.";
		mes "Que s�o semelhantes aos utilizados pelos soldados de Rachel.^000000";
		close;
	} else if (rachel_camel == 7) {
		mes "^3355FFParece que algu�m veio veio aqui para dar a Curdie comida e �gua.^000000";
		close;
	} else if (rachel_camel == 9) {
		mes "^3355FFCurdie olha bem para voc� quando voc� anda por perto.";
		mes "Parece que sua vis�o fica mais fraca a cada segundo que ela fica presa nesta caverna.";
		close;
	} else if (rachel_camel == 10) {
		mes "^3355FF� melhor voc� encontrar os";
		mes "Camelos e conseguir os";
		mes "ingredientes para o sab�o se";
		mes "voc� realmente deseja libertar";
		mes "Curdie de suas algemas.^000000";
		close;
	} else if (rachel_camel == 11) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu deveria achar o camelo perdido do Sr. Saraman, alimentar este camelo com estimulantes de apetite.";
		mes "Edepois pegar os ingredientes para o sab�o e 5 Blocos de Estrume se eu quiser libertar Curdie.";
		close;
	} else if (rachel_camel > 11 && rachel_camel < 17) {
		mes "^3355FFVoc� j� encontrou o camelo, ent�o voc� precisa coletar os ingredientes para o sab�o se quiser libertar Curdie.^000000";
		close;
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sab�o e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao Sr. Saraman para dizer a ele onde est� o seu camelo, e depois ir at� a Srta. Ivory.";
		close;
	} else if (rachel_camel == 18) {
		mes "^3355FFVoc� deveria estar indo ver Srta. Ivory agora, se realmente deseja libertar Curdie de suas algemas.^000000";
		close;
	} else if (rachel_camel == 19) {
		mes "^3355FFAgora que voc� tem Sab�o de Camelo de Veludo.";
		mes "Voc� deve lev�-lo ao Sr. Lockenlock.^000000";
		close;
	} else if (rachel_camel == 20) {
		mes "^3355FFCurdie est� exatamente onde voc� a deixou.";
		mes "H� uma tigela de sab�o fria perto dela, ent�o � certo de que algu�m deve estar a alimentando.^000000";
		next;
		mes "^3355FFVoc� p�e o Sab�o na fechadura da Corrente para criar um molde que o Sr. Lockenlock possa usar para criar uma chave.^000000";
		next;
		mes "[Pequena Curdie]";
		mes "Irei...";
		mes "Irei eu estar sempre presa aqui?";
		mes "Eu... Eu quero minha m�e...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ah... Voc� est� acordada?";
		mes "N�o se preocupe, Curdie, eu estou certo de que eu logo poderei te libertar.";
		mes "Tente esperar mais um pouco.";
		next;
		mes "[Pequena Curdie]";
		mes "Quando a porta est� aberta, eu vejo chamas...";
		mes "E eu escuto... O som de m�quinas?";
		mes "Estes homens usando roupas id�nticas continuam marchando depois de passar por mim...";
		next;
		mes "[Pequena Curdie]";
		mes "Eu... Eles me assustam muito!";
		mes "O-o homem que me traz comida";
		mes "disse que eles n�o me deixar�o";
		mes "sair por causa do que";
		mes "Eu vi l� dentro. Eles...";
		mes "Eles n�o me deixar�o ir para casa...";
		next;
		mes "^3355FFOs olhos de Curdie est�o perdendo o foco e est�o virando para cima.";
		mes "Ela talvez n�o sobreviva se continuasse sendo for�ada a ficar aqui por muito tempo.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "N�o se preocupe.";
		mes "Eu virei resgat�-la assim que eu fizer a chave para soltar estas horr�veis algemas.";
		mes "N�o se preocupe...";
		next;
		mes "[Pequena Curdie]";
		mes "Se eu n�o estiver aqui da pr�xima vez que voc� vier, ent�o fuja.";
		mes "N�o diga isto ao meu irm�o.";
		mes "V� para bem longe antes que eles possam o capturar.";
		mes "E-Estou falando s�rio...";
		next;
		mes "[Pequena Curdie]";
		mes "Se eu n�o ver voc� novamente saiba que...";
		mes "Eu quero...";
		mes "Eu queria apenas lhe agradecer por fazer o poss�vel para me ajudar.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Tudo estar� bem.";
		mes "Eu tenho apenas de me apressar um pouco mais r�pido.";
		mes "Certo, � hora de ir.";
		next;
		mes "^3355FFVoc� extrai o sab�o da fechadura, e o guarda cuidadosamente.";
		mes "Agora voc� precisa levar o molde de voltar para a cidade para o Sr. Lockenlock.^000000";
		changequest(3079,3080);
		rachel_camel = 21;
		close;
	} else if (rachel_camel == 21) {
		mes "^3355FFVoc� deve voltar depressa para a cidade.";
		mes "E levar o molde de chave para o Sr. Lockenlock apenas assim ele poder� fazer a chave para libertar Curdie das Algemas.^000000";
		close;
	} else if (rachel_camel == 23) {
		mes "[Pequena Curdie]";
		mes "Vo-Voc�...";
		mes "� realmente voc�?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sim sou eu Curdie!";
		mes "Eu espero que esta chave funcione...";
		next;
		mes "^3355FFVoc� solta as correntes com a chave feita pelo Sr. Lockenlock.^000000";
		next;
		mes "^333333*Creck*^000000";
		next;
		mes "[Pequena Curdie]";
		mes "Aaaah!";
		mes "M-minhas... Minhas...!";
		next;
		mes "^3355FFAs pernas de Curdie est�o inchadas por causa do peso e da press�o de usar as correntes por muito tempo.^000000";
		next;
		mes "[Pequena Curdie]";
		mes "Eu n�o consigo mover minhas pernas!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, n�o temos outra escolha.";
		mes "Curdie, eu irei envi�-la de volta para a cidade com uma Asa de Borboleta.";
		mes "Tente n�o se mexer, certo?";
		next;
		mes "[Pequena Curdie]";
		mes "Ah! Obrigada...";
		mes "Eu... Eu posso voltar para casa...";
		mes "Muito O-obrigada...";
		next;
		mes "^3355FFVoc� usa o poder de uma Asa de Borboleta para enviar Curdie de volta a cidade.";
		mes "Felizmente, ela ir� chegar a salvo e poder� ver seu irm�o Karyn novamente.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que ser� que ela viu por traz daquela porta de a�o neste velho vulc�o?";
		mes "Deve ser algo bem perigoso...";
		mes "Algo relacionado com o Ex�rcito de Rachel...";
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
		mes "Meu nome � Toby.";
		mes "Eu nasci e cresci aqui, e ningu�m sabe mais sobre esta cidade do que eu.";
		mes "Sinta-se livre para perguntar se voc� precisar encontrar seu caminho por aqui.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Com licen�a, mas voc� sabe aonde eu posso encontrar um chaveiro?";
		next;
		mes "[Toby]";
		mes "Claro, eu sei!";
		mes "Sr. Lockenlock e um famoso chaveiro.";
		mes "E ele faz quase todas as chaves e fechaduras em Veins e tamb�m em Rachel.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Mr. Lockenlock, eh?";
		mes "Mas aonde eu posso encontr�-lo?";
		next;
		mes "[Toby]";
		mes "Oh, ele est� sempre sentando em algum lugar na rua do mercado.";
		mes "Ele bebe muito, tanto que ele n�o consegue trabalhar quando est� b�bado.";
		next;
		mes "[Toby]";
		mes "Ah, mas sabe o que iria fazer ele ficar s�brio?";
		mes "Uma Po��o Amarela!";
		mes "Isto nunca falha com este cara!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Entendi.";
		mes "Obrigado pelo conselho.";
		next;
		mes "[Toby]";
		mes "Voc� � muito bem vindo!";
		mes "Finalmente...";
		mes "Depois de todos estes anos...";
		mes "Eu fui �til para algo!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "...Anh...?";
		next;
		mes "^3355FFEncontre o Sr.Lockenlock na Rua do Mercado, e leve a ele uma Po��o Amarela.^000000";
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
		mes "^3355FFEncontre o Sr.Lockenlock na Rua do Mercado, e leve a ele uma Po��o Amarela.^000000";
		close;
	} else {
		mes "[Jovem Nativo]";
		mes "Meu nome � Toby.";
		mes "Eu nasci e cresci aqui e ningu�m sabe mais sobre esta cidade do que eu.";
		mes "Sinta-se livre para perguntar se voc� precisar encontrar seu caminho por aqui.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "N�o, Obrigado.";
		next;
		mes "[Jovem Nativo]";
		mes "Voc� n�o...";
		mes "^333333*Solu�o*^000000";
		mes "Voc� n�o precisa de mim para nada?";
		close;
	}
}

// ------------------------------------------------------------------
veins,181,166,3	script	Lockenlock#camel	4_M_HUMERCHANT,{
	if (rachel_camel < 4) {
		mes "^3355FF� um beb�do...";
		mes "O cheiro de �lcool puro vem dele.";
		mes "Existe uma certa beleza em sua mis�ria.^000000";
		close;
	} else if (rachel_camel == 4) {
		if (countitem(Yellow_Potion)) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Com licen�a...?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Huh? Arrrgh...";
			mes "Minha cabe�a...";
			mes "O que voc� quer?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Oh, eu gostaria de fazer uma chave.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Chaves? Sim, sim...";
			mes "Isso � o que eu fa�o.";
			mes "Se voc� tem o cadeado, isto ser� moleza.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Ugh, eu estou t�o sedento e esta dor de cabe�a est� me matando.";
			mes "Voc� poderia me trazer uma Po��o Amarela primeiro?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Certo, eu acho.";
			mes "Eu posso lhe dar apenas 1 Po��o Amarela.";
			mes "Aqui est�.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Ah, isto atingiu o ponto!";
			mes "Espere, espere...";
			mes "Agora eu me sinto meio tonto...";
			mes "O que est�...";
			mes "O que est� acontecendo...?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Ok, ok...";
			mes "Eu estou bem agora.";
			mes "O que voc� disse que precisava, de uma chave?";
			mes "Voc� trouxe a fechadura com voc�?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Eu sou um expert em lidar com chaves e cadeados.";
			mes "Meus cadeados s�o fortes o suficiente para suportar um drag�o, voc� sabia disto?";
			mes "Saiba que o ex�rcito de Rachel � um de meus melhores clientes.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "^333333Esse cara faz fechaduras para o ex�rcito de Rachel?!";
			mes "Talvez n�o seja uma boa id�ia permitir que ele saiba.";
			mes "Que eu estou tentando libertar um de seus prisioneiros.";
			mes "E se ele for fiel ao Ex�rcito?^000000";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Ent�o, o que aconteceu foi...";
			mes "Perdi a minha chave, mas n�o posso trazer o cadeado aqui comigo..";
			mes "Eu acho que iria acabar quebrando se eu trouxesse ele comigo.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Ah, entendo... N�o tem problema.";
			mes "Apenas me leve at� o cadeado.";
			mes "Eu vou lhe cobrar um extra, no entanto especialmente porque o meu joelho v�o mal.";
			mes "Ent�o, onde n�s vamos exatamente?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Espere!";
			mes "N�o podemos fazer isso!";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "O que voc� quer dizer?";
			mes "Voc� n�o est� tentando abrir um cofre de um banco ou algo assim, est�?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "N�o, n�o � nada disto!";
			mes "� que a fechadura est� em um lugar muito perigoso.";
			mes "Isto � realmente importante...";
			mes "Por favor, voc� tem que me ajudar!";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Huh. Bem, vai ser dif�cil,";
			mes "Eu n�o posso fazer uma chave sem olhar bem para a fechadura.";
			mes "Deixe-me pensar em um modo de ajud�-lo.";
			mes "Me d� um segundo, certo?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "...............................";
			mes "Bem, eu acho que voc� pode tentar fazer um molde da fechadura.";
			mes "Ele dever� ser perfeito, ent�o isto ser� um pouco caro.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "V� ao mercado e tente achar a Senhorita que vende sab�o org�nico.";
			mes "Voc� precisa conseguir uma garrafa de Sab�o Chamelepu.";
			mes "Voc� ir� precisar deste tipo exato de sab�o:";
			mes "Nenhum outro tipo funcionar�.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Sab�o Chamelepu?";
			mes "O que � is--";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "N�o h� tempo para explicar.";
			mes "Voc� deve se apressar e encontr�-la antes que ela feche sua loja.";
			mes "A dona da loja � uma mo�a bonita, ent�o ser� dif�cil de n�o encontr�-la.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "...........";
			delitem(Yellow_Potion,1);
			changequest(3063,3064);
			rachel_camel = 5;
			close;
		} else {
			mes "^3355FF� um b�bado...";
			mes "Este homem deve ser o Sr. Lockenlock que voc� procurava.";
			mes "� melhor voc� seguir o conselho de toby e trazer para este homem uma Po��o Amarela primeiro.^000000";
			close;
		}
	} else if (rachel_camel == 5) {
		mes "[Chaveiro Lockenlock]";
		mes "V� para o mercado e encontre uma mo�a vendendo sab�o org�nico.";
		mes "E consiga uma garrafa de Sab�o Chamelepu.";
		mes "Voc� ir� precisar deste tipo de sab�o:";
		mes "Nenhum outro tipo funcionar�.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sab�o Chamelepu?";
		mes "O que � is--";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "N�o h� tempo para explicar.";
		mes "Voc� deve se apressar e encontr�-la antes que ela feche sua loja.";
		mes "A dona da loja � uma mo�a bonita, ent�o ser� dif�cil de n�o encontr�-la.";
		close;
	} else if (rachel_camel == 6) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espera... Eu deveria estar levando todos os ingredientes do sab�o para a Srta. Ivory.";
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
		mes "Eu preciso falar com algu�m chamado Saraman para conseguir os ingredientes do sab�o...";
		close;
	} else if (rachel_camel == 8) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu preciso levar para o Sr. Saraman todas as coisas que ele precisa para estimular o apetite de um camelo.";
		mes "Eu preciso conseguir...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^4D4DFF1 Ma�� Verde^000000,";
		mes "^4D4DFF5 Ra��es para Monstros^000000,";
		mes "^4D4DFF1 Garrafa Vazia^000000, e";
		mes "^4D4DFF1 Po��o Amarela^000000.";
		close;
	} else if (rachel_camel == 9) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho tudo que � necess�rio para estimular o apetite de um camelo.";
		mes "Agora eu preciso de alimentar o camelo.";
		mes "Ent�o eu poderei conseguir os ingredientes para o sab�o, 5 Blocos de Estrume.";
		close;
	} else if (rachel_camel == 10) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora,seria melhor gastar meu tempo procurando pelos ingredientes no deserto de camelos.";
		close;
	} else if (rachel_camel == 11) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu deveria achar o camelo perdido do Sr. Saraman, alimentar este camelo com estimulantes de apetite.";
		mes "E depois pegar os ingredientes para o sab�o e 5 Blocos de Estrume e eu quiser libertar Curdie.";
		close;
	} else if (rachel_camel == 12) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem... Eu econtrei o camelo.";
		mes "Agora eu preciso conseguir todos os ingredientes para o sab�o.";
		mes "Quanto mais cedo eu fizer isto, mais cedo eu irei ajudar Curdie.";
		close;
	} else if (rachel_camel > 12 && rachel_camel < 17) {
		mes "^3355FFVoc� j� encontrou o camelo, ent�o voc� precisa coletar os ingredientes para o sab�o se quiser libertar Curdie.^000000";
		close;
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sab�o e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao SR. Saraman para dizer a ele onde est� o seu camelo, depois ir at� a Srta. Ivory.";
		close;
	} else if (rachel_camel == 18) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu n�o deveria estar indo ver a Srta. Ivory agora?";
		close;
	} else if (rachel_camel == 19) {
		mes "[Chaveiro Lockenlock]";
		mes "Oh, ent�o voc� finalmente voltou com o Sab�o Chamelepu.";
		mes "Porque demorou tanto?";
		mes "Tudo o que tinha a fazer era ir ao mercado e compr�-lo.";
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
		mes "Uh, de qualquer jeito, Ivory lhe disse como usar o sab�o?";
		mes "Voc� apenas deve despejar o sab�o na buraco da chave.";
		mes "E depois colocar o sab�o devolta na garrafa.";
		mes "Fa�a isto com rapidamente e com cuidado.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Certifique-se de fechar a garrafa direito quando estiver feito n�o deixe entrar ar dentro.";
		mes "Se voc� demorar mais de 30 segundos, o sab�o n�o ir� reter a forma da chave muito bem.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Despeje o sabonete l�quido no buraco da chave na fechadura.";
		mes "Derrame o sab�o de volta � garrafa.";
		mes "Feche a tampa t�o bem para que o ar n�o entre dentro da garrafa..";
		mes "Lembre-se, voc� n�o pode demorar mais de 30 segundos para concluir os procedimentos.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Finalmente, traga a garrafa de volta para mim, para que eu possa fazer a chave.";
		mes "Mas quando voc� voltar, eu preciso ter certeza que a chave que voc� est� fazendo n�o � para nada ilegal...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Tudo bem.";
		changequest(3078,3079);
		rachel_camel = 20;
		close;
	} else if (rachel_camel == 20) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho de utilizar o sab�o para fazer um molde de chave que eu possa levar ao Sr. Lockenlock.";
		close;
	} else if (rachel_camel == 21) {
		mes "[Chaveiro Lockenlock]";
		mes "Oh, voc� est� de volta...";
		mes "Ent�o voc� conseguiu fazer o molde de chave com o sab�o?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sim, eu consegui.";
		mes "Voc� poderia por favor se apressar?";
		mes "Isto � uma emerg�ncia, e isto poder� ficar bem ruim se eu n�o conseguir esta chave pronta logo...";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Deixe-me ver... Bem, n�o � totalmente perfeita.";
		mes "Mas eu devo ser capaz de moldar uma chave para esta fechadura. Aah...";
		mes "Tem outra coisa tamb�m sabe o que?";
		mes "Eu n�o tenho nenhum material comigo.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Eu j� fiz todas as chaves e cadeados para esta cidade, ent�o ningu�m me me enviou mais materiais.";
		mes "Por isto, eu n�o tenho materiais em m�o.";
		mes "Desculpe-me.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Tudo que preciso � de ^4D4DFF1 A�o^000000.";
		mes "N�o vai demorar mais do que cinco minutos para fazer a chave, quanto mais cedo voc� puder me trazer o a�o mais cedo farei a chave.";
		mes "Eu estarei esperando.";
		changequest(3080,3081);
		rachel_camel = 22;
		close;
	} else if (rachel_camel == 22) {
		if (countitem(Steel)) {
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Aqui est� o que A�o de que voc� precisa.";
			mes "Por favor";
			mes "voc� poderia fazer a chave agora?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "...............................";
			mes "Eu estive estudando este molde de chave, e eu percebi algo...";
			mes "Diga-me agora: Para que voc� est� usando esta chave?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Huh...?";
			mes "Para que voc� quer saber...?";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Eu lhe perguntei primeiro.";
			mes "Diga-me o que voc� pretende fazer com esta chave!";
			mes "Se n�o me disser, eu n�o poderei ajud�-lo.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "N�o minta para mim.";
			mes "Este molde...";
			mes "Ele � da fechadura das algemas que";
			mes "Eu tenho feito em em ordens do Ex�rcito de Rachel.";
			mes "Eu tenho a chave mestra para isto.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Estas algemas s� podem ser usadas por prisioneiros!";
			mes "Se eu soltar um deles, eles ir�o ca��-lo e me responsabilizar.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "A verdade � que...";
			mes "Eu estou tentando libertar algu�m que o Ex�rcito de Rachel prendeu...";
			mes "Ela � Curdie, uma garotinha que eles trancaram no Vulc�o de Thor...";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "O que...?!";
			mes "Est� falando s�rio?";
			mes "Vo-Voc�... N�o pode.";
			mes "Voc� n�o est� mentindo.";
			mes "Isto...";
			mes "Lamento, voc� n�o deveria ter se envolvido com isto, mas...";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Oh c�us!";
			mes "Eles... Eles realmente aprisionaram uma crian�a inocente?!";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Aqui. Pegue-a.";
			mes "Pegue a Chave Mestra.";
			mes "Leve isto at� o Vulc�o de Thor e resgate esta pobre crian�a.";
			mes "Poder�amos ter um monte de problemas por fazer isto, mas...";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "A minha consci�ncia n�o permitir� que eles fa�am algo como isto.";
			mes "Resgate esta crian�a, e depois jogue esta chave fora em algum lugar quando voc� terminar.";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Dessa forma, se o ex�rcito vier me interrogar.";
			mes "Eu vou apenas dizer que ela foi roubada da minha loja por algum ladr�o.";
			mes "Eu tamb�m deveria me livrar de todas as minhas chaves...";
			next;
			mes "[Chaveiro Lockenlock]";
			mes "Apresse-se e v�!";
			mes "Certifique-se de que voc� trar� a crian�a de volta a salvo para sua fam�lia!";
			changequest(3081,3082);
			rachel_camel = 23;
			close;
		} else {
			mes "[Chaveiro Lockenlock]";
			mes "Tudo que preciso � de ^4D4DFF1 A�o^000000.";
			mes "N�o vai demorar mais do que cinco minutos para fazer a chave.";
			mes "Quanto mais cedo voc� puder me trazer o a�o mais cedo farei a chave.";
			mes "Eu estarei esperando.";
			close;
		}
	} else if (rachel_camel == 23) {
		mes "[Chaveiro Lockenlock]";
		mes "Aqui. Pegue-a.";
		mes "Pegue a Chave Mestra.";
		mes "Leve isto at� o Vulc�o de Thor e resgate esta pobre crian�a.";
		mes "Poder�amos ter um monte de problemas por fazer isto, mas...";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Apresse-se e v�!";
		mes "Certifique-se de que voc� trar� a crian�a de volta a salvo para sua fam�lia!";
		close;
	} else if (rachel_camel == 24) {
		mes "[Chaveiro Lockenlock]";
		mes "Ei, esta crian�a que voc� salvou...";
		mes "Curdie.";
		mes "Ela voltou com seguran�a para a cidade.";
		mes "Eu me sinto culpado pelo o que aconteceu.";
		mes "Digo, ela foi presa nas algemas que Eu criei para o ex�rcito.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Sendo assim, eu estou empacotando minhas coisas.";
		mes "Eu estou pensando em deixar esta cidade para sempre.";
		mes "O ex�rcito fugiu de sua fun��o fazendo algo como isto.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Voc� � uma pessoa boa de verdade, fico feliz em te conhecer.";
		mes "Eu n�o sei se iremos nos encontrar novamente, mas � bom saber que h� pessoas boas como voc� neste mundo.";
		close;
	} else if (rachel_camel == 25) {
		mes "[Chaveiro Lockenlock]";
		mes "Ei, esta crian�a que voc� salvou...";
		mes "Curdie.";
		mes "Ela voltou com seguran�a para a cidade.";
		mes "Eu me sinto culpado pelo o que aconteceu.";
		mes "Digo, ela foi presa nas algemas que eu criei para o ex�rcito.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Sendo assim, eu estou empacotando minhas coisas.";
		mes "Eu estou pensando em deixar esta cidade para sempre.";
		mes "O ex�rcito fugiu de sua fun��o fazendo algo como isto.";
		next;
		mes "[Chaveiro Lockenlock]";
		mes "Voc� � uma pessoa boa de verdade, fico feliz em te conhecer.";
		mes "Eu n�o sei se iremos nos encontrar novamente, mas � bom saber que h� pessoas boas como voc� neste mundo.";
		close;
	} else {
		mes "[Lockenlock]";
		mes "Zzzz...";
		mes "Zzzz... Argh!";
		mes "...Zzz...";
		next;
		mes "^3355FFEle est� b�bado e roncando.^000000";
		close;
	}
}

// ------------------------------------------------------------------
veins,227,127,5	script	Ivory#camel	4_F_DESERT,{
	if (rachel_camel < 5) {
		mes "[Produtora de Sab�o]";
		mes "Eu preciso fazer mais de meu sab�o, mas meus ingredientes se esgotaram.";
		mes "Bem, n�o h� muito que eu possa fazer sem eles, por isto seria melhor fechar a loja por hoje...";
		close;
	} else if (rachel_camel == 5) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Com licen�a...?";
		next;
		mes "[Produtora de Sab�o]";
		mes "Ah, lamento muito mas eu estou fechando a loja agora por que eu preciso correr atr�s de ingredientes para sab�o.";
		mes "Se voc� encomendou algo, voc� poderia voltar aqui amanh�.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Um, � uma Emerg�ncia!";
		mes "Sr. Lockenlock me pediu para vir aqui e conseguir algum tipo de sab�o especial.";
		mes "Eu preciso disto para fazer um molde para que ele possa fazer uma chave para mim...";
		next;
		mes "[Produtora de Sab�o]";
		mes "Anh? Voc� trancou a si mesmo?";
		mes "Ah, o Sr. Lockenlock deve estar falando sobre o meu Sab�o Chamelepu org�nico.";
		mes "Este � um sabonete art�stico que voc� pode moldar facilmente.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sim, este mesmo!";
		mes "Sab�o Chamelepu!";
		next;
		mes "[Produtora de Sab�o]";
		mes "Meu Sab�o Chamelepu � muito popular.";
		mes "� um sabonete l�quido que pode ser derramando em qualquer coisa.";
		mes "E ir� endurecer em qualquer formato que quiser.";
		mes "Simples, huh?";
		next;
		mes "[Produtora de Sab�o]";
		mes "Bem, como eu j� lhe disse.";
		mes "Eu n�o tenho nenhum dos ingredientes para o sab�o.";
		mes "Ent�o eu n�o posso fazer mais nenhum sab�o hoje.";
		mes "Voc� deve voltar amanh� de tarde se voc� quiser comprar o sab�o.";
		next;
		mes "[Produtora de Sab�o]";
		mes "Se voc� realmente precisa dele neste momento.";
		mes "Posso ainda fazer isto para voc� se voc� me trouxer todos os ingredientes.";
		mes "Embora...";
		mes "Eles possam ser um pouco dif�ceis de se conseguir.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Excelente. O importante";
		mes "para mim � conseguir";
		mes "este fazer este sab�o";
		mes "O mais r�pido poss�vel!";
		next;
		mes "[Produtora de Sab�o]";
		mes "Certo, primeiro eu gostaria que voc� me trouxesse o b�sico.";
		mes "Traga-me estes itens na quantia exata que eu lhe disser.";
		mes "Tudo bem?";
		mes "A quantia � muito importante ao fazer o sab�o.";
		next;
		mes "[Produtora de Sab�o]";
		mes "^4D4DFF10 Leites^000000,";
		mes "^4D4DFF100 Ervas Verdes^000000,";
		mes "^4D4DFF50 Jellopys^000000, e";
		mes "^4D4DFF5 Garrafas Vazias^000000.";
		mes "Depois poderemos ir para a parte dif�cil.";
		changequest(3064,3065);
		rachel_camel = 6;
		close;
	} else if (rachel_camel == 6) {
		if ((countitem(Green_Herb) > 99) && (countitem(Jellopy) > 49) && (countitem(Milk) > 9) && (countitem(Empty_Bottle) > 4)) {
			mes "[Produtora de Sab�o]";
			mes "Ah, que �timo!";
			mes "Voc� trouxe tudo! Agora...";
			mes "� hora de voc� fazer a, parte dif�cil.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "...............................";
			mes "...............................";
			mes "...............................";
			next;
			mes "[Produtora de Sab�o]";
			mes "Por favor diga ao Dono da Fazenda de Camelos na cidade.";
			mes "Que eu lhe enviei e mostre a ele os ingredientes que voc� teve de me trazer.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Espere...";
			mes "Porque eu iria querer ver o cara que toma conta dos camelos?";
			mes "O que ele t�m a ver com a fabrica��o do sab�o?";
			next;
			mes "[Produtora de Sab�o]";
			mes "� melhor voc� n�o saber disto agora...";
			mes "apenas v� visitar o Sr. Saraman, o dono da Fazenda de Camelos.";
			mes "Eu n�o posso esperar por muito tempo, ent�o por favor volte o mais r�pido poss�vel.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Sr. Saraman...?";
			mes "Ok, ent�o eu preciso visit�-lo se eu realmente precisar de voc� para fazer o sab�o...";
			changequest(3065,3066);
			rachel_camel = 7;
			close;
		} else {
			mes "[Produtora de Sab�o]";
			mes "Certo, primeiro eu gostaria que voc� me trouxesse o b�sico.";
			mes "Traga-me estes itens na quantia exata que eu lhe disser, tudo bem?";
			mes "A quantia � muito importante ao fazer o sab�o.";
			next;
			mes "[Produtora de Sab�o]";
			mes "^4D4DFF10 Leites^000000,";
			mes "^4D4DFF100 Ervas Verdes^000000,";
			mes "^4D4DFF50 Jellopys^000000, e";
			mes "^4D4DFF5 Garrafas Vazias^000000.";
			mes "Depois poderemos ir para a parte dif�cil.";
			close;
		}
	} else if (rachel_camel == 7) {
		mes "[Mo�a Bonita]";
		mes "Hm? Voc� precisa de alguma coisa?";
		mes "Eu estou abrindo a loja agora ent�o eu n�o estou pronta para vender nada ainda.";
		close;
	} else if (rachel_camel == 8) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu preciso levar para o Sr. Saraman todas as coisas que ele precisa para estimular o apetite de um camelo.";
		mes "Eu preciso conseguir...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^4D4DFF1 Ma�� Verde^000000,";
		mes "^4D4DFF5 Ra��es para Monstros^000000,";
		mes "^4D4DFF1 Garrafa Vazia^000000, e";
		mes "^4D4DFF1 Po��o Amarela^000000.";
		close;
	} else if (rachel_camel == 9) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu tenho tudo que � necess�rio para estimular o apetite de um camelo.";
		mes "Agora eu preciso de alimentar o camelo ent�o eu poderei conseguir os ingredientes para o sab�o e 5 Blocos de Estrume.";
		close;
	} else if (rachel_camel == 10) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Agora,seria melhor gastar meu tempo procurando pelos ingredientes no deserto de camelos.";
		close;
	} else if (rachel_camel == 11) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu deveria achar o camelo perdido do Sr. Saraman, alimentar este camelo com estimulantes de apetite.";
		mes "E depois pegar os ingredientes para o sab�o e 5 Blocos de Estrume se eu quiser libertar Curdie.";
		close;
	} else if (rachel_camel == 12) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem... Eu encontrei o camelo.";
		mes "Agora eu preciso conseguir todos os ingredientes para o sab�o.";
		mes "Quanto mais cedo eu fizer isto, mais cedo eu irei ajudar Curdie.";
		close;
	} else if (rachel_camel > 12 && rachel_camel < 17) {
		mes "^3355FFVoc� j� encontrou o camelo, ent�o voc� precisa coletar os ingredientes para o sab�o se quiser libertar Curdie.^000000";
		close;
	} else if (rachel_camel == 17) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu consegui todos os ingredientes para o sab�o e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao SR. Saraman para dizer a ele onde est� o seu camelo, e depois ir at� a Srta. Ivory.";
		close;
	} else if (rachel_camel == 18) {
		mes "[Produtora de Sab�o]";
		mes "Hm, Soony por acaso lhe causou algum problema?";
		mes "Eu estou achando que sim, por isto voc� demorou tanto para conseguir estes blocos de estrume de camelo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Parece que foi um grande inc�modo...";
		mes "Mas felizmente, tudo isto vai valer a pena.";
		mes "De qualquer forma, pegue este Bloco de Estrume.";
		mes "N�o quero mexer muito com isto.";
		next;
		mes "[Produtora de Sab�o]";
		mes "Sim, eu posso entender.";
		mes "Embora ele esteja em garrafas, � um pouco dif�cil de manusear isto...";
		mes "Enfim, vamos nessa.";
		mes "Deixe-me fazer um pouco de sab�o pra voc�.";
		next;
		mes "[Produtora de Sab�o]";
		mes "Voc� gastou bastante tempo e energia para conseguir estes itens.";
		mes "Ent�o eu n�o irei lhe cobrar pelos meus servi�os.";
		mes "Al�m disso, voc� trouxe a quantidade certa de materiais que eu irei utilizar.";
		next;
		mes "^3355FFIvory vestiu um par de luvas longas, e misturou os ingredientes.";
		mes "Depois ela colocou a mistura em um pote vazio.^000000";
		next;
		mes "[Produtora de Sab�o]";
		mes "Aqui est� seu sab�o!";
		mes "Depois de derramar o sab�o em algo.";
		mes "N�o se esque�a de coloc�-lo em uma garrafa larga ap�s cerca de vinte segundos.";
		next;
		mes "[Produtora de Sab�o]";
		mes "E hum... N�o deixe que ningu�m saiba o que eu uso para fazer este sab�o.";
		mes "As pessoas n�o ir�o compr�-lo se eles souberem que eles lavam seus rostos com...";
		mes "Voc� sabe...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "N�o se preocupe, eu n�o direi a ningu�m.";
		mes "Obrigado por fazer o sab�o!";
		next;
		mes "^3355FFAgora que voc� tem Sab�o de Camelo de Veludo, voc� deve lev�-lo ao Sr. Lockenlock.^000000";
		changequest(3077,3078);
		rachel_camel = 19;
		close;
	} else if (rachel_camel == 19) {
		mes "^3355FFAgora que voc� tem Sab�o de Camelo de Veludo, voc� deve lev�-lo ao Sr. Lockenlock.^000000";
		close;
	} else if (rachel_camel > 19 && rachel_camel < 26) {
		mes "[Produtora de Sab�o]";
		mes "^333333*Ufa!*^000000 Hoje foi um dia longo.";
		mes "Eu acho que vou fechar a loja agora.";
		close;
	} else {
		mes "[Mo�a Bonita]";
		mes "Hm? Voc� precisa de alguma coisa?";
		mes "Eu estou abrindo a loja agora ent�o eu n�o estou pronta para vender nada ainda.";
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
		mes "Com licen�a. Ol�.";
		mes "A Srta. Ivory me enviou aqui com estes ingredientes de sab�o?";
		mes "Ela disse que eu tinha de vir at� voc� se eu quiser que ela fa�a um para mim.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Sab�o, eh? Oh, entendi.";
		mes "Voc� deve estar aqui para pegar alguns Blocos de Estrume de Camelo Fresco.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O-o Q-Que!?";
		mes "Meu Deus!";
		mes "Vo-Voc� tem certeza?";
		mes "Voc� s� pode estar brincando!";
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
		mes "Eh... aqueles ingredientes que voc� me trouxe?";
		mes "Eles s�o para fazer sab�o certo.";
		mes "^FF0000Aquilo com que alimentamos os Camelos^000000 para que eles fa�am Estrume aos montes.";
		mes "Estrume para fazer sab�o.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Oh, n�o se preocupe.";
		mes "Estrume de Camelo � est�ril, completamente seguro.";
		mes "Na verdade, isto cheira bem, tem propriedades medicinais.";
		mes "E � considerada uma delicadeza em certos pa�ses.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Infelizmente, Camelas de Veludo est�o quase extintas, por isto s� temos uma nesta fazenda.";
		mes "Este � o porque de n�s termos um contrato especial com a Srta. Ivory para que ela possa fazer seu sab�o.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Digo... Eu n�o estava esperando que ela enviaria um mensageiro at� amanh�.";
		mes "Por que voc� est� aqui t�o cedo assim?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Na verdade, este � um tipo de emerg�ncia.";
		mes "Entende, eu preciso do sab�o para fazer um molde de chave porque eu perdi--";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Entendo, entendo.";
		mes "Me desculpe por ter lhe perguntado!";
		mes "Ent�o, este � um favor pessoal para voc�?";
		mes "Bem, temos um pequeno problema que precisamos resolver primeiro.";
		mes "Ou�a...";
		next;
		mes "[Fazendeiro Saraman]";
		mes "N�s s� podemos obter Estrume de camelo depois do mesmo comer, certo?";
		mes "Bem, minha camela n�o est� acostumada a comer t�o tarde no dia.";
		mes "Mesmo que coloquemos comida na frente dela, ela n�o ir� comer.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que?";
		mes "N�o h� nada que possamos fazer?";
		mes "Quero dizer, isto se trata de um caso de Vida ou Morte!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "*Suspiro*";
		mes "...Isso n�o � bom...";
		mes "Ok ent�o, vamos fazer isso.";
		mes "As vezes eu fa�o um estimulante de apetite para a camela quando ela est� doente e n�o come nada.";
		mes "N�s podemos tentar aliment�-la com o estimulante, e faz�-la defecar.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Bem, n�s n�o podemos aliment�-la a for�a.";
		mes "Mas n�s podemos fazer com que ela d� uma mordida em um pouco de estimulante de apetite.";
		mes "Eu geralmente uso isto se ela adoecer, mas se voc� diz que esta � uma emerg�ncia...";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Certo, eu acho que podemos tentar isto.";
		mes "Mas eu quero que voc� me traga os ingredientes.";
		mes "S� um minuto...";
		mes "Vamos ver agora...";
		next;
		mes "[Fazendeiro Saraman]";
		mes "^4D4DFF1 Ma�� Verde^000000,";
		mes "^4D4DFF5 Ra��es para Monstros^000000,";
		mes "^4D4DFF1 Garrafa Vazia^000000 e";
		mes "^4D4DFF1 Po��o Amarela^000000.";
		changequest(3066,3067);
		rachel_camel = 8;
		close;
	} else if (rachel_camel == 8) {
		if ((countitem(Monsters_Feed) > 4) && (countitem(Yellow_Potion) > 0) && (countitem(Unripe_Apple) > 0) && (countitem(Empty_Bottle) > 0)) {
			mes "[Fazendeiro Saraman]";
			mes "Oh que bom que est� de volta.";
			mes "Voc� trouxe tudo?";
			mes "Agora, primeiro eu preciso misturar tudo junto antes que voc� possa alimentar minha camela com isto.";
			mes "S� um minuto...";
			next;
			mes "^3355FFSaraman misturou todos os ingredientes, e depois os colocou dentro de um frasco.^000000";
			next;
			mes "[Fazendeiro Saraman]";
			mes "Certo, agora leve isto aos camelos aqui perto.";
			mes "Somente a minha Camela de Veludo saber� que deve comer isto, ent�o ela ir� at� voc�.";
			next;
			mes "[Fazendeiro Saraman]";
			mes "Assim que ela morder este estimulante de apetite, ela ir� comer sua comida como louca.";
			mes "Depois o Estrume sair� dela como se fosse em uma torneira.";
			mes "Vamos, por que voc� n�o tenta?";
			next;
			mes "[Fazendeiro Saraman]";
			mes "Tudo certo.";
			mes "Voc� deve ser capaz de obter 5 Blocos de Estrume de Camelo com estes ingredientes.";
			mes "Esta � uma boa quantia de acordo com o que a Srta. Ivory ordenou.";
			delitem(Monsters_Feed,5);
			delitem(Yellow_Potion,1);
			delitem(Unripe_Apple,1);
			delitem(Empty_Bottle,1);
			changequest(3067,3068);
			rachel_camel = 9;
			close;
		} else {
			mes "[Fazendeiro Saraman]";
			mes "Bem, n�s n�o podemos aliment�-la a for�a.";
			mes "Mas n�s podemos fazer com que ela d� uma mordida em um pouco de estimulante de apetite.";
			mes "Eu geralmente uso isto se ela adoecer, mas se voc� diz que esta � uma emerg�ncia...";
			next;
			mes "[Fazendeiro Saraman]";
			mes "Certo, eu acho que podemos tentar isto.";
			mes "Mas eu quero que voc� me traga os ingredientes.";
			mes "S� um minuto...";
			mes "Vamos ver agora...";
			next;
			mes "[Fazendeiro Saraman]";
			mes "^4D4DFF1 Ma�� Verde^000000,";
			mes "^4D4DFF5 Ra��es para Monstros^000000,";
			mes "^4D4DFF1 Garrafa Vazia^000000 e";
			mes "^4D4DFF1 Po��o Amarela^000000.";
			close;
		}
	} else if (rachel_camel == 9) {
		mes "[Fazendeiro Saraman]";
		mes "Assim que ela morder este estimulante de apetite, ela ir� comer sua comida como louca.";
		mes "Depois o Estrume sair� dela como se fosse em uma torneira.";
		mes "Vamos, por que voc� n�o tenta?";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Tudo certo.";
		mes "Voc� deve ser capaz de obter 5 Blocos de Estrume de Camelo com estes ingredientes.";
		mes "Esta � uma boa quantia de acordo com o que a Srta. Ivory ordenou.";
		close;
	} else if (rachel_camel == 10) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sr. Saraman, nenhum dos camelos quer comer este estimulante de apetite...";
		mes "Eu estou fazendo algo errado?";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Oh, sim, Bem...";
		mes "Um de meus funcion�rios veio at� mim.";
		mes "E me disse que minha Camela de Veludo desapareceu em algum lugar...";
		mes "Esta not�cia � terr�vel!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Minha preciosa Camela de Veludo...";
		mes "� o meu maior investimento em neg�cios!";
		mes "Eu estou arruinado com isto!";
		mes "Por favor...";
		mes "Eu irei lhe recompensar se voc� encontrar minha camela para mim!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Meu est�pido funcion�rio esqueceu de amarr�-la, ent�o ela acabou conseguindo fugir!";
		mes "Ugh! Por favor me ajude a encontr�-la!";
		mes "Sem ela, eu n�o poderei ser capaz de conseguir o seu Estrume de Camelo especial.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Calma, sem p�nico...";
		mes "Tudo ir� ficar bem.";
		mes "Esta camela se move muito lentamente ent�o ela n�o pode ter ido muito longe daqui.";
		mes "Por favor encontre minha camela Soony o mais r�pido poss�vel!";
		changequest(3069,3070);
		rachel_camel = 11;
		close;
	} else if (rachel_camel == 11) {
		mes "[Fazendeiro Saraman]";
		mes "Soony! Soony...!";
		mes "On-onde est� voc�?!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Por favor, me ajude a encontrar minha Soony, minha Camela de";
		mes "Veludo.";
		mes "Voc� n�o poder� fazer seu sab�o sem ela!";
		mes "E meu neg�cio realmente depende de minha Soony!";
		close;
	} else if (rachel_camel == 12) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem... Eu encontrei o camelo.";
		mes "Agora eu preciso conseguir todos os ingredientes para o sab�o.";
		mes "Quanto mais cedo eu fizer isto, mais cedo eu irei ajudar Curdie.";
		close;
	} else if (rachel_camel > 12 && rachel_camel < 17) {
		mes "^3355FFVoc� j� encontrou o camelo, ent�o voc� precisa coletar os ingredientes para o sab�o se quiser libertar Curdie.^000000";
		close;
	} else if (rachel_camel == 17) {
		mes "[Fazendeiro Saraman]";
		mes "Oh, � voc�!";
		mes "Voc� encontrou minha Soony?";
		mes "Onde est� ela?";
		mes "O que aconteceu com ela?";
		mes "Oh, eu n�o sei o que iria fazer sem minha Camela!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "N�o se preocupe, Sr. Saraman, eu encontrei Soony perto da cidade.";
		mes "Ela machucou sua perna ent�o eu acho que iria ser uma boa id�ia.";
		mes "Se voc� enviasse algumas pessoas para ajudar a traz�-la de volta.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Obrigado Deus! Muito obrigado, muito obrigado mesmo!";
		mes "Eu irei enviar meus funcion�rios at� l� imediatamente.";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Muito bom, voc� n�o tem id�ia de quanto esta camela vale!";
		mes "Eu vou enviar alguns de meus homens at� l� para traz�-la de volta para casa imediatamente!";
		mes "Obrigado, voc� salvou meu neg�cio!";
		next;
		mes "[Fazendeiro Saraman]";
		mes "Aqui, eu quero que voc� pegue isto.";
		mes "Considere isso como um pequeno presente de agradecimento pelo que voc� fez por mim.";
		mes "Boa sorte em conseguir o sab�o que voc� quer fazer.";
		changequest(3076,3077);
		getitem(Old_Violet_Box,1);
		rachel_camel = 18;
		close;
	} else if (rachel_camel == 18) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Eu n�o deveria estar indo ver a Srta. Ivory agora?";
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
		mes "roncar faz voc�";
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
		mes "Este provavelmente n�o � o camelo que voc� est� procurando.^000000";
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
		mes "^3355FFA perna desta camela est� ferida.";
		mes "Embora pare�a ferida, suas narinas farejaram rapidamente o estimulante de apetite para camelos.";
		mes "E o mastigou.^000000";
		next;
		mes "[Camel]";
		mes "^333333*Chew Chew.*^000000";
		mes "^333333*Mastiga*^000000";
		next;
		mes "^3355FFA camela come�ou a mastigar o estimulante.";
		mes "Ent�o ela come�ou a comer cada vez mais r�pido e mais da comida at� o seu completo consumo.^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Esta deve ser a";
		mes "Camela de Veludo...";
		mes "Eu acho que tudo que eu tenho que fazer � coletar um pouco deste seu precioso Estrume de Camelo.";
		changequest(3070,3071);
		rachel_camel = 13;
		close;
	} else if (rachel_camel > 11 && rachel_camel < 17) {
		if (countitem(Green_Herb) > 19 && countitem(Jellopy) > 9 && countitem(Milk) > 1 && countitem(Empty_Bottle) > 0) {
			mes "^3355FFA camela sente o cheiro, e percebe que voc� tem comida para ela, e come�a a babar.";
			mes "Voc� deveria aliment�-la.^000000";
			next;
			switch (rand(3)) {
				case 1:
				if (rachel_camel == 12) {
					mes "[Camela de Veludo]";
					mes "^333333*Chew Chew.*^000000";
					mes "^333333*Mastiga*^000000";
					next;
					mes "^3355FFA camela comeu tudo, mas ela parece n�o querer fazer suas necessidades agora.^000000";
				} else {
					mes "^3355FFA camela torceu o rosto como se estivesse sofrendo de dor de est�mago e...";
					mes "Sa�ram 2 Batatas Doces.";
					mes "Elas provavelmente s�o seguras para consumo...";
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
				mes "^3355FFA camela torceu o rosto como se estivesse sofrendo de dor de est�mago...";
				mes "Tcharam! Voc� conseguiu um bloco de estrume de camelo!";
				mes "Pode comemorar!^000000";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				if (rachel_camel == 12) {
					mes "Agora tudo de que preciso s�o mais 4 destes blocos de estrumes.";
					rachel_camel = 13;
					changequest(3071,3072);
				} else if (rachel_camel == 13) {
					mes "Incr�vel! Eu consegui 2 gloriosos Blocos de Estrume de Camelo!";
					mes "S� faltam mais 3!";
					rachel_camel = 14;
					changequest(3072,3073);
				} else if (rachel_camel == 14) {
					mes "Yeah! Agora eu tenho 3 Blocos de Estrume de Camelo.";
					mes "S� faltam 2...";
					mes "Eu tenho mais da metade do que eu precisava!";
					rachel_camel = 15;
					changequest(3073,3074);
				} else if (rachel_camel == 15) {
					mes "4 Blocos de Estrume de Camelo...";
					mes "Heh heh! Isto est� indo melhor do que eu pensei!";
					mes "S� mais 1!";
					rachel_camel = 16;
					changequest(3074,3075);
				} else if (rachel_camel == 16) {
					mes "Em minhas m�os...";
					mes "Eu estou segurando 5 Blocos de Estrume de Camelo.";
					mes "Este � o meu melhor momento.";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Nunca, em todos estes anos de aventura, salvando os oprimidos.";
					mes "Protegendo os inocentes, eu pensei que iria completar este feito magnificente.";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Eu estou t�o feliz --com isto--";
					mes "^4D4DFFProvei^000000 minha for�a, meu valor, e minha determina��o nesta tarefa.";
					mes "Este dia entrar� para a Hist�ria!";
					mes "Longa Vida a "+strcharinfo(CHAR_NAME)+"!";
					next;
					mes "^3355FF� hora de voc� voltar para o Sr. Saraman.^000000";
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
				mes "^3355FFA camela torceu o rosto como se estivesse sofrendo de dor de est�mago e...";
				mes "Saiu uma Batata Doce.";
				mes "Provavelmente � seguro para se comer...";
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
				mes "Eu preciso alimentar esta camela, se n�o nunca vou conseguir algum";
				mes "Estrume dela.";
				mes "Vamos ver, os itens que o Sr Saraman mencionou que a Srta. Ivory me pediram para alimentar a camela.";
				mes "Eu tenho que ter...";
			} else {
				mes "J� fiquei sem comida?";
				mes "Se eu quiser alimentar este camelo de novo, ent�o eu preciso trazer mais comida...";
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
		mes "Eu consegui todos os ingredientes para o sab�o e 5 destes Blocos de Estrume.";
		mes "Eu tenho voltar ao Sr. Saraman para dizer a ele onde est� o seu camelo, e depois ir at� a Srta. Ivory.";
		close;
	} else {
		mes "[Camela de Veludo]";
		mes "^333333*Chew Chew*^000000";
		next;
		mes "^3355FFCamelo Mastigando.^000000";
		close;
	}
}
