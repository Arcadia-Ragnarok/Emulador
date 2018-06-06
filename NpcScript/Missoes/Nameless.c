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
| - Info: Quest de acesso ao Monasterio da Ilha Esquecida.          |
| * Necess�rio conlus�o da quest Templo de Rachel.                  |
| * Necess�rio conlus�o da quest Maldi��o da Fam�lia Gaebolg.       |
| * Necess�rio conlus�o da quest Irm�os de Veins (Camelo).          |
\*-----------------------------------------------------------------*/

/* **** Iniciando com o "Padre Bamph"
airplane_01,90,63,0	script	Event Switch#pc	FAKE_NPC,3,3,{
	end;
	OnTouch:
	if ((prt_curse == 36 || prt_curse == 45 || prt_curse == 56 || prt_curse == 61) && (aru_monas < 1)) {
		hideoffnpc("Agente#pc1");
		mes "[????]";
		mes "Voc� � "+strcharinfo(PC_NAME)+"?";
		mes "Eu estava esperando voc�.";
		mes "O \"^6B8E23Sacerdote Bamph^000000\" aguarda sua chegada na ^6B8E23Catedral de Prontera^000000.";
		mes "V� v�-lo o mais r�pido que puder.";
		aru_monas = 1;
		setquest(17000);
		close2;
		hideonnpc("Agente#pc1");
	}
	end;
}
airplane_01,95,61,3	script	Agente#pc1	4_M_HUMAN_02,{
	end;
	OnInit:
	hideonnpc("Agente#pc1");
	end;
}
*/

cmd_in02,174,89,7	script	Homem ordin�rio#pc1	4W_M_01,{
	if (aru_monas < 2) {
		mes "[Larjes]";
		mes "Droga, perdi de novo!";
		mes "Este jogo � uma arma��o!";
		mes "Por mais que eu tente, n�o consigo vencer!";
		close;
	} else if (aru_monas == 2) {
		mes "[Larjes]";
		mes "Argh, perdi neste jogo tantas vezes que j� perdi a conta, tamb�m!";
		mes "Uma hora tenho que vencer...";
		next;
		select("Desculpe-me.");
		mes "[Larjes]";
		mes "Oh! Ahn... Hum.";
		mes "Em que posso ajudar?";
		next;
		select ("O ^6B8E23Sacerdote Bamph^000000 me mandou.");
		mes "[Larjes]";
		mes "Oh, entendo.";
		mes "Desculpe se meus gritos incomodaram voc�.";
		mes "S� estou aqui matando o tempo...";
		mes "Agora entendo que jogar � algo prejudicial!";
		next;
		mes "[Larjes]";
		mes "Certo, poderia vir por aqui?";
		mes "N�o quero que ningu�m escute nossa conversa.";
		close2;
		aru_monas = 3;
		warp("cmd_in02",110,53);
		end;
	} else {
		mes "[Larjes]";
		mes "O qu�?!";
		mes "Eu perdi denovo?";
		mes "Como funciona...";
		mes "Como funciona esse jogo?!";
		close;
	}
}

// ------------------------------------------------------------------
cmd_in02,111,52,3	script	Homem ordin�rio#pc2	4W_M_01,{
	if (aru_monas < 3) {
		mes "[Larjes]";
		mes "^666666*Ai, ai...*^00000";
		mes "Isso n�o � nada bom.";
		mes "N�o sei o que fazer...";
		close;
	} else if (aru_monas == 3) {
		mes "[Larjes]";
		mes "�timo, ningu�m deve nos ouvir aqui.";
		mes "Depois que enviei uma mensagem para o lugar.";
		mes "Descobri informa��es novas que devem ajudar em minha investiga��o.";
		next;
		mes "[Larjes]";
		mes "Descobri dois detalhes sobre a noite em que o alto oficial desapareceu.";
		mes "Primeiro, ele se afastou dos guardas para encontrar uma mulher.";
		mes "� sempre uma mulher, n�?";
		next;
		mes "[Larjes]";
		mes "Segundo, depois que ele saiu para ver essa mulher, outras pessoas entraram.";
		mes "Ent�o carregaram uma enorme bagagem com elas quando partiram para o oeste.";
		next;
		mes "[Larjes]";
		mes "A bagagem era t�o grande que levantou suspeita.";
		mes "Parece que alguma organiza��o o seq�estrou, e quer lev�-lo para o oeste por alguma raz�o.";
		next;
		select("Por que para o oeste?");
		mes "[Larjes]";
		mes "� s� um palpite, mas acho que quem o seq�estrou � de ^2F4F2FArunafeltz^000000.";
		mes "N�o estou autorizado a entrar em Arunafeltz, ent�o n�o pude investigar mais por l�.";
		aru_monas = 4;
		changequest(17001,17002);
		close;
	} else {
		mes "[Larjes]";
		mes "Hmm, j� que estou em Comodo, acho que vou dar um belo mergulho no mar?!";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,308,59,1	script	Gar�om#pc	4_M_RACHMAN2,{
	if (aru_monas < 7) {
		mes "[Gar�om]";
		mes "Bem-vindo ao Palato de Rachel, um dos mais refinados restaurantes de Rachel.";
		if (aru_monas < 6) {
			close;
		} else if (aru_monas == 6) {
			next;
			mes "[Gar�om]";
			mes "O que gostaria de pedir?";
			mes "Ou... Ser� que me engano, ou voc� est� aqui por outro motivo?";
			next;
			if (select("Quero pedir algo","Sim, Por outro motivo") == 1) {
				mes "[Gar�om]";
				mes "Claro, ser� um prazer.";
				mes "Veio sozinho?";
				next;
				select("Sim.");
				mes "[Gar�om]";
				mes "Por aqui.";
				close2;
				aru_monas = 7;
				switch (rand(1,4)) {
					case 1: warp("ra_in01",303,43); end;
					case 2: warp("ra_in01",304,43); end;
					case 3: warp("ra_in01",304,39); end;
					case 4: warp("ra_in01",303,39); end;
				}
			}
			mes "[Gar�om]";
			mes "Hum, certo.";
			mes "Bem, o que quer que seja, espero que aproveite seu tempo no Palato de Rachel.";
			close;
		}
	} else {
		mes "[Gar�om]";
		mes "A comida neste restaurante � a melhor de Rachel.";
		mes "N�o, � a melhor de todas em Arunafeltz!";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,301,43,0	script	MealConversation Trigger	FAKE_NPC,3,3,{
	end;
	OnTouch:
	if (aru_monas == 7) {
		if (!checkweight(Vit_Dish02,4)) {
			mes "^3355FFEspere um pouco!";
			mes "Agora mesmo, voc� est� carregando itens demais com voc�.";
			mes "Por favor, volte depois de usar o Armaz�m Kafra para guardar alguns dos seus itens.^000000";
			close;
		}
		mes "[Gar�om]";
		mes "O que voc� gostaria de pedir?";
		mes "Nosso prato do dia � o Esgana-Gata Listrado de Veins.";
		mes "Recebemos um lote de alt�ssima qualidade de Veins hoje de mamh�.";
		next;
		select("...Sim, parece ser bom.");
		mes "[Gar�om]";
		mes "Excelente escolha.";
		mes "S� para lhe informar, esse prato custa ^9932CD3.000 zenys^000000.";
		mes "Volto j�.";
		next;
		mes "^3355FFO gar�om anotou seu pedido e saiu para a cozinha.";
		mes "Voc� decide escutar a conversa do pessoal da mesa ao lado enquanto espera.^000000";
		next;
		mes "[Voz Grave]";
		mes "...............................";
		mes "Eu vi mesmo, era o maior peixe do mundo!";
		mes "Da �ltima vez que fui a Veins, pude ver o Esgana-Gata Listrado Dourado de Veins!";
		mes "� verdade!";
		next;
		mes "[Voz Desanimada]";
		mes "Ent�o, voc� conseguiu provar o molho do Esgana-Gata Listrado Dourado de Veins?";
		next;
		mes "[Voz Confiante]";
		mes "Ah, cara, se fosse comigo, seria uma experi�ncia �nica na vida!";
		mes "S� conseguem pescar esses Esgana-Gatas Listrados Dourados uma vez a cada dez anos!";
		next;
		mes "[Voz Grave]";
		mes "Ah, sim, seu molho � incr�vel.";
		mes "Minha voz at� mudou depois que eu bebi!";
		mes "Foi t�o... Profundo.";
		next;
		mes "[Voz Confiante]";
		mes "Oh! Ent�o � por isso que sua voz est� diferente.";
		next;
		mes "[Voz Desanimada]";
		mes "Como voc� conseguiu beber um suco t�o raro?";
		mes "Quero dizer, deve ter um monte de gente fazendo fila, com reservas, s� esperando para beber!";
		next;
		mes "[Voz Grave]";
		mes "Tirei a sorte grande, fui a uma taverna em Veins, e ouvi dizer que..";
		mes "^DB7093Um grupo de contrabandistas havia sido preso pelos guardas na praia ao sudeste^000000.";
		next;
		mes "[Voz Grave]";
		mes "Ent�o pensei, talvez eles estivessem pescando.";
		mes "Ent�o fui � praia ver se achava o barco de pesca deles.";
		next;
		mes "[Voz Confiante]";
		mes "Cara, voc� � obcecado por comida.";
		mes "Digo, quem mais ia pensar que os contrabandistas estariam pescando ilegalmente?";
		next;
		mes "[Voz Grave]";
		mes "�, acho que voc� tem raz�o!";
		mes "Enfim, havia apenas um barco de pesca, e os guardas estavam inspecionando.";
		mes "Estava prestes a dar meia-volta, desapontado mas ent�o... avistei um pescador!";
		next;
		mes "[Voz Grave]";
		mes "Pelo canto dos olhos, vi que ele trazia a pescaria do dia:";
		mes "O Esgana-Gata Listrado Dourado de Veins!";
		mes "Comprei todos os peixes dele na hora.";
		next;
		mes "[Voz Desanimada]";
		mes "Cara, voc� teve sorte.";
		mes "E voc� nem hesita em esbanjar quando o assunto � comida, n�o �? He he!";
		next;
		mes "[Voz Grave]";
		mes "Ah, isso n�o foi esbanjar.";
		mes "Sei que voc�s teriam feito o mesmo no meu lugar.";
		mes "Sou grato por poder saborear um peixe t�o raro.";
		next;
		mes "^3355FF...............................";
		mes "Ent�o, os homens come�aram a brindar entre si.^000000";
		next;
		mes "[Gar�om]";
		mes "Ah, aqui est� o seu Esgana-Gata Listrado de Veins.";
		mes "Bom apetite.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "^ff0000Veins^000000, n�o �?";
		mes "� melhor eu dar uma olhada l� um dia desses, talvez encontre mais desses peixes.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Uau, esse peixe tem gosto de...";
		mes "Nunca saboreei nada igual!";
		mes "� quase como uma sobremesa. Hummm, que bom!";
		aru_monas = 8;
		changequest(17003,17004);
		if (Zeny >= 3000) {
			Zeny -= 3000;
			getitem(Vit_Dish02,4);
		}
		close;
	}
	end;
}

// ------------------------------------------------------------------
ve_in,78,314,5	script	Magistrado#Aru	4_M_DST_GRAND,{
	if (aru_monas < 8) {
		mes "[Al Hamad]";
		mes "Argh! Como isso foi acontecer comigo, logo quando estava para me aposentar!";
		mes "A-ai! Minha �lcera...";
		mes "T�o de repente...!";
		close;
	} else if (aru_monas == 8) {
		mes "[Al Hamad]";
		mes "Puxa, esse deve ser o pior caso da minha carreira.";
		mes "Por que isso tinha que acontecer agora?";
		mes "A aposentadoria estava t�o perto...";
		next;
		select("Est� com problemas?");
		mes "[Al Hamad]";
		mes "H�? N�o parece que voc� seja aqui destas bandas.";
		mes "Olhe, agrade�o sua preocupa��o.";
		mes "Mas n�o me sinto � vontade para falar com estranhos sobre meus problemas...";
		aru_monas = 9;
		changequest(17004,17005);
		close;
	} else if (aru_monas == 9) {
		mes "[Al Hamad]";
		mes "A menos que voc� tenha algum assunto importante, n�o tem permiss�o para entrar aqui.";
		mes "Estamos aqui para Homemter a ordem p�blica, e deixar qualquer um entrar vai causar problemas.";
		close;
	} else if (aru_monas == 10) {
		mes "[Al Hamad]";
		mes "Pensei ter dito que voc� n�o tem permiss�o para entrar aqui.";
		mes "Por que voc� voltou?";
		next;
		if (select("Desculpe","Quero saber sobre os contrabandistas.") == 1) {
			mes "[Al Hamad]";
			mes "Tudo bem.";
			mes "Apenas saia, e n�o volte a menos que tenha um motivo muito bom.";
			close;
		}
		mes "[Al Hamad]";
		mes "Ei, como voc� soube dos contrabandistas?";
		mes "A not�cia j� se espalhou?";
		mes "Bem, desculpe, mas n�o posso revelar nenhum detalhe sobre uma investiga��o em curso.";
		next;
		mes "[Al Hamad]";
		mes "^9370DBSe quiser mesmo saber mais, ent�o deve me trazer uma ordem por escrito de um oficial superior.^000000.";
		mes "Ah, e pro�bo voc� de perguntar a mais algu�m, ent�o comporte-se.";
		aru_monas = 11;
		changequest(17006,17007);
		close;
	} else if (aru_monas < 13) {
		mes "[Al Hamad]";
		mes "N�o culpo voc� por ser curioso, mas envolver-se com o que n�o deve s� pode lhe trazer problemas.";
		mes "Tenha cuidado, certo?";
		close;
	} else if (aru_monas == 13) {
		mes "[Al Hamad]";
		mes "Hum, que estranho.";
		mes "Voc� nem mesmo � cidad�o de Arunafeltz, mas de alguma forma conhece um homem de posi��o t�o alta.";
		mes "Certo, acho que posso lhe contar mais sobre nossa investiga��o.";
		next;
		mes "[Al Hamad]";
		mes "Voc� precisa saber que o que eu te disser pode n�o valer tanto a pena.";
		mes "Estas informa��es n�o devem ser t�o valiosas quanto voc� pensa.";
		next;
		mes "[Al Hamad]";
		mes "Os contrabandistas que pegamos s�o do pior tipo:";
		mes "Eles lidam com o tr�fico de pessoas, mas n�s os pegamos por terem invadido nossas �guas.";
		mes "A ficha criminal deles � t�pica.";
		next;
		mes "[Al Hamad]";
		mes "Vejamos...";
		mes "Eles seq�estraram um homem em Comodo.";
		mes "Isso fica na regi�o sudoeste de Rune-Midgard.";
		mes "Enfim, os contrabandistas pensaram que ele era rico, ent�o armaram uma cilada.";
		next;
		mes "[Al Hamad]";
		mes "Eles o afastaram dos seus guardas enviando uma mulher.";
		mes "Mas quando o capturaram descobriram que ele n�o s� � rico.";
		mes "Como tamb�m � um oficial de alta patente em Rune-Midgard.";
		next;
		mes "[Al Hamad]";
		mes "Foi a� que eles se descuidaram:";
		mes "Ficaram com tanto medo das tropas do reino os perseguirem que invadiram nossas fronteiras mar�timas.";
		mes "Ent�o n�s os pegamos.";
		next;
		mes "[Al Hamad]";
		mes "O que n�o entendo � por que ficaram t�o assustados.";
		mes "Afinal, o maior neg�cio deles � o tr�fico de pessoas, ent�o...";
		mes "Seq�estrar um oficial n�o � uma diferen�a t�o grande, �?";
		next;
		mes "[Al Hamad]";
		mes "Entramos em contato com o templo, falamos sobre os contrabandistas.";
		mes "Nossa investiga��o e o oficial de alta patente do Reino de Rune-Midgard.";
		next;
		mes "[Al Hamad]";
		mes "Depois disso, um grupo do templo interrompeu nossa investiga��o.";
		mes "Levou os contrabandistas embora antes que termin�ssemos o interrogat�rio, e nunca mais os vimos.";
		next;
		mes "[Al Hamad]";
		mes "Perguntei a um conhecido que trabalha no templo, mas nem ele sabe o que est� acontecendo aqui.";
		mes "O ^32CD32oficial de Rune-Midgard^000000 tamb�m sumiu.";
		mes "Tudo isso � frustrante demais...!";
		next;
		mes "[Al Hamad]";
		mes "Isso � tudo o que eu sei.";
		mes "Isso significa que temos de capturar os contrabandistas de novo?";
		mes "N�o sei o que est� acontecendo...";
		aru_monas = 14;
		changequest(17009,17010);
		next;
		mes "[Al Hamad]";
		mes "Mesmo que pudesse avan�ar com a investiga��o, recebi ordens superiores para arquiv�-la.";
		mes "Ser� que este caso n�o vale a pena para eles?";
		next;
		mes "[Al Hamad]";
		mes "N�o quero mais me envolver nisso.";
		mes "Eu j� devia ter me aposentado!";
		mes "Se voc� quiser saber mais, sua �nica op��o seria descobrir por conta pr�pria.";
		mes "Sem chance, n�o �?";
		close;
	} else {
		mes "[Al Hamad]";
		mes "J� sofri o bastante!";
		mes "Por que n�o consigo arquivar este caso?!";
		close;
	}
}

// ------------------------------------------------------------------
ve_in,81,296,3	script	Soldado#Aru	4_M_DST_MASTER,{
	if (aru_monas < 9) {
		mes "[Himus]";
		mes "Hum.";
		mes "O magistrado parece ainda estar nervoso com o caso que aconteceu h� uns meses...";
		close;
	} else if (aru_monas == 9) {
		mes "[Himus]";
		mes "Hum? Oh, o magistrado te deu um fora?";
		mes "Bem, ele n�o � mais o mesmo desde que prendemos aqueles ^32CD32contrabandistas do sul^000000 h� alguns meses.";
		next;
		mes "[Himus]";
		mes "Quando informamos sobre a pris�o ao templo, os soldados da papisa vieram e levaram os contrabandistas.";
		mes "N�o temos id�ia do que aconteceu com eles nem de onde eles est�o agora.";
		next;
		mes "[Himus]";
		mes "Pode n�o parecer grande coisa para voc�.";
		mes "Mas o magistrado � muito meticuloso, e odeia quando gente de fora interfere no trabalho dele, sabe?";
		next;
		select("Quem s�o os contrabandistas?");
		mes "[Himus]";
		mes "Bem, eu n�o sei.";
		mes "Talvez o magistrado soubesse se tivesse a chance de terminar de interrogar os contrabandistas.";
		mes "N�o sei se ele conseguiu antes dos contrabandistas serem levados.";
		aru_monas = 10;
		changequest(17005,17006);
		close;
	} else if (aru_monas == 10) {
		mes "[Himus]";
		mes "O magistrado est� prestes a se aposentar, ent�o espero que ele finalmente possa ir para casa e esquecer disso tudo.";
		mes "Ele n�o faz nada al�m de se estressar!";
		close;
	} else {
		mes "[Himus]";
		mes "Belo dia, n�o?";
		close;
	}
}

// ------------------------------------------------------------------
ra_temple,165,57,5	script	Niren#ss	4_F_MADAME,{
	cutin("ra_gwoman",2);
	mes "[Suma-Sacerdotisa Niren]";
	mes "Ent�o, voc� quer falar comigo?";
	mes "Estou muito cansada agora, mas posso conceder um minutinho.";
	mes "O que gostaria de saber?";
	next;
	if (select("Falaar sobre Contrabandistas","Perguntar sobre Zhed") == 1) {
		if (aru_monas == 12) {
			mes "[Niren]";
			mes "Contrabandistas de Veins...";
			mes "Pode me explicar exatamente o que quer dizer com contrabandistas de Veins?";
			next;
			mes "[Niren]";
			mes "Ah, eles. Sim, eu sei alguma coisa sobre eles.";
			mes "Temo que eu n�o possa revelar certas informa��es sobre eles, pois este � um caso confidencial...";
			next;
			mes "[Niren]";
			mes "Sinto n�o poder dar muitas informa��es sobre eles, pois h� muita coisa em jogo.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Na verdade, queria saber sobre quem foi seq�estrado.";
			next;
			mes "[Niren]";
			mes "Ah, bem, acho que posso contar mais sobre o ref�m.";
			mes "Mas antes gostaria de lhe pedir um favor.";
			next;
			select("Aceitar","N�o Recusar");
			mes "[Niren]";
			mes "Quando percebemos quem era o ref�m que estava nas m�os deles, n�s n�o sab�amos o que fazer com ele.";
			mes "T�nhamos muitos problemas internos para resolver...";
			next;
			mes "[Niren]";
			mes "Mesmo assim, achamos que pod�amos us�-lo em nosso plano.";
			mes "Ent�o o escondemos em um lugar secreto, cuja posi��o s� � conhecida por poucos.";
			mes "Mas ent�o... Perdemos todo o contato.";
			next;
			mes "[Niren]";
			mes "Enviamos investigadores, mas ainda n�o temos id�ia do que aconteceu.";
			mes "Tudo o que encontraram foi uma mensagem deixada por um sobrevivente:";
			mes "S�o todos dem�nios.";
			mes "O ref�m deve estar morto.";
			next;
			mes "[Niren]";
			mes "Ele podia ser um oficial de alto escal�o, mas est�vamos preocupados com outros assuntos.";
			mes "Na verdade n�o tive a chance de pensar no que fazer com ele...";
			next;
			mes "[Niren]";
			mes "Quero pedir que voc� v� at� esse lugar para descobrir o que aconteceu ali.";
			mes "E se o oficial de alto escal�o de Rune-Midgard ainda est� vivo.";
			mes "Duvido, mas...";
			next;
			mes "[Niren]";
			mes "Os investigadores que temos em nosso templo n�o s�o t�o bons quanto voc�s, aventureiros estrangeiros.";
			mes "Ent�o tenho f� de que voc� consiga.";
			mes "Mesmo assim ser� muito perigoso.";
			next;
			mes "[Niren]";
			mes "Se puder fazer isso, vou lhe dizer a localiza��o do lugar: n�s o chamamos de \"monast�rio\".";
			mes "Antes era um monast�rio de verdade, mas agora o usamos como cativeiro.";
			next;
			mes "[Niren]";
			mes "Desculpe, mas n�o posso contar mais nada sobre esse lugar.";
			mes "Ele est� a sudoeste de Veins, navegando pelo mar.";
			mes "Voc� deve conseguir encontrar um barco na Praia Sul de Veins.";
			next;
			mes "[Niren]";
			mes "No entanto...";
			mes "N�o importa.";
			mes "Gostaria de ajudar voc� mais, mas estaria comprometendo minha posi��o.";
			mes "Desculpe.";
			mes "Por favor, volte e me diga se descobrir alguma coisa l�.";
			aru_monas = 13;
			changequest(17008,17009);
			next;
			mes "[Niren]";
			mes "Vou Homemdar uma mensagem ao magistrado de Veins.";
			mes "Se voc� falar com ele, ele dar� algumas informa��es �teis para sua jornada.";
			mes "Boa sorte.";
			close2;
		} else if (aru_monas < 18) {
			mes "[Niren]";
			mes "Ir at� o monast�rio n�o � o problema:";
			mes "Voltar vivo deve ser o verdadeiro desafio.";
			next;
			mes "[Niren]";
			mes "N�o podemos enviar tropas at� entendermos o que estamos enfrentando por l�.";
			mes "� por isso que preciso que voc� investigue a �rea.";
			close2;
		} else if (aru_monas < 25) {
			mes "[Niren]";
			mes "Ainda est� investigando o monast�rio?";
			mes "Talvez voc� possa encontrar algum registro deixado por um dos residentes de l�...";
			close2;
		} else if (aru_monas == 25) {
			if (!countitem(Research_Note)) {
				mes "[Niren]";
				mes "Ainda est� investigando o monast�rio?";
				mes "Talvez voc� possa encontrar algum registro deixado por um dos residentes de l�...";
				close2;
			} else {
				mes "[Niren]";
				mes "Voc� encontrou este di�rio no monast�rio?";
				mes "Perfeito.";
				mes "Deixe-me ler, e ver";
				mes "o que podemos descobrir...";
				next;
				mes "[Niren]";
				mes "Hum, isso parece muito ruim.";
				mes "� tr�gico, ainda mais por termos Homemtido tanta gente importante ali.";
				mes "Vou solicitar o envio de tropas para l� agora mesmo.";
				mes "Algo precisa ser feito.";
				next;
				mes "[Niren]";
				mes "H� muitos problemas que precisamos enfrentar agora.";
				mes "Mas a quest�o do monast�rio ter� prioridade.";
				mes "N�o poderemos dar conta se outra amea�a vier daquele lugar.";
				delitem(Research_Note,1);
				aru_monas = 26;
				completequest(17017);
				getexp(500000,0);
				close2;
				cutin("",255);
				end;
			}
		} else {
			mes "[Niren]";
			mes "Parece que Arunafeltz e Rune-Midgard estar�o muito ocupadas com suas quest�es internas para entrar em guerra.";
			mes "O Sumo-Sacerdote Zhed ficar� feliz em saber disso.";
			close2;
			cutin("",255);
			end;
		}
	} else {
		if (aru_em < 10) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Desculpe-me...";
			mes "Eu n�o quero mesmo pensar no Zhed agora. Ele...";
			close2;
		}
		else {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Desculpe-me...";
			mes "Eu n�o quero mesmo pensar no Zhed agora...";
			close2;
			cutin("",255);
			end;
		}
	}
}

// ------------------------------------------------------------------
ve_in,239,115,0	script	B�bedo#Aru	4_M_DESERT,{
	if (aru_monas < 14) {
		mes "[B�bado]";
		mes "Cara, que legal! Ha ha!";
		mes "Ei, me d� mais um refresco!";
		close;
	} else if (aru_monas == 14) {
		if (rachel_camel == 25) {
			mes "[B�bado]";
			mes "Ent�o... o que eu... eu 'tava dizendo, sabe aquele cara que ^32CD32saiu de fininho para navegar com um barco^000000?";
			mes "Voc� sabe por que ele voltou t�o cedo?";
			mes "Voc� n�o vai acreditar!";
			next;
			mes "[B�bado]";
			mes "Ha ha!";
			mes "Ele achou ter visto um ^DBDB70fantasma^000000!";
			mes "Hua ha ha ha! Uuuug... Ei...";
			aru_monas = 15;
			changequest(17010,17011);
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Isso mesmo!";
			mes "Talvez eu deva falar com o ^32CD32pai de Karyn, j� que ele � um pescador^000000.";
			close;
		} else {
			mes "[Drunkard]";
			mes "Zzzz...";
			mes "Umm... Zzz...";
			close;
		}
	} else {
		mes "[B�bado]";
		mes "Por qu�?!";
		mes "Por que n�o posso sair com o barco para o mar?";
		mes "Preciso pescar para ganhar a vida!";
		mes "Eles 't�o querendo que eu morra de fome ou algo assim?!";
		mes "Hein?!";
		close;
	}
}

// ------------------------------------------------------------------
ve_fild07,125,128,0	script	Barco#Aru	HIDDEN_NPC,{
	if (aru_monas < 16) {
		mes "^3355FFEste barco parece estar em boas condi��es.";
		mes "De quem ele ser�?^000000";
		close;
	} else if (aru_monas == 16) {
		mes "^3355FFEste deve ser o barco de que Karyn me contou.";
		mes "Ele parece estar em bom estado.";
		mes "Bem, o monast�rio deve estar a sudoeste daqui...^000000";
		next;
		mes "[Larjes]";
		mes "A quanto tempo, "+strcharinfo(PC_NAME)+".";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Larjes!";
		next;
		mes "[Larjes]";
		mes "Foi dif�cil ficar seguindo voc�, sabia?";
		mes "Na verdade, quase que eu perco seu rastro.";
		mes "Voc� deve estar se perguntado por que estou aqui.";
		mes "Se puder me ouvir, vou explicar tudo.";
		next;
		mes "[Larjes]";
		mes "De acordo com nossa investiga��o, Arunafeltz est� definitivamente envolvida neste caso.";
		mes "Vigiamos voc� por sua rela��o com aquele alto oficial de Arunafeltz.";
		mes "Pe�o desculpas por isso.";
		next;
		mes "[Larjes]";
		mes "Este � um incidente";
		mes "internacional, ent�o para evitar que qualquer coisa vazasse para Arunafeltz.";
		mes "Tivemos que ser muito r�gidos para proteger todas as informa��es sobre esse caso.";
		next;
		mes "[Larjes]";
		mes "Enfim, decidi me revelar para voc�, j� que sou o �nico que pode ajudar voc� agora.";
		mes "Est� pensando em usar o barco, n�o est�?";
		next;
		mes "[Larjes]";
		mes "Se voc� n�o tiver a habilidade, conhecimento e prepara��o para navegar por essas �guas, provavelmente vai afundar com o barco.";
		mes "Conseguiria com sorte, mas... seria sorte demais.";
		next;
		mes "[Larjes]";
		mes "Vou ajudar voc� a navegar para chegar aonde voc� deve ir.";
		mes "Mas se falhar, talvez tenha que navegar com este barco sem mim.";
		mes "Ent�o, est� pronto para ir?";
		next;
		switch (select("Sim, estou pronto","D�-me mais um tempo.")) {
			case 1:
			mes "[Larjes]";
			mes "Certo, vamos l�, � melhor se segurar:";
			mes "Esta vai ser uma viagem dif�cil...";
			aru_monas = 17;
			changequest(17012,17013);
			close2;
			warp("nameless_i",257,217);
			end;
			case 2:
			mes "[Larjes]";
			mes "Tudo bem.";
			mes "Venha falar comigo quando estiver pronto.";
			close;
		}
	} else if (aru_monas < 20) {
		mes "^3355FFEste � o barco que pode levar voc� ao monast�rio.^000000";
		next;
		switch (select("Ir para o Monast�rio","Cancelar")) {
			case 1:
			mes "^3355FFVoc� zarpa em dire��o ao monast�rio...^000000";
			close2;
			warp("nameless_i",257,217);
			end;
			case 2:
			mes "^3355FFVoc� decide ficar em terra firme.^000000";
			close;
		}
	} else {
		mes "^3355FFEste � o barco que pode levar voc� ao monast�rio.^000000";
		next;
		switch (select("Ir para o Monast�rio","Cancelar")) {
			case 1:
			mes "^3355FFVoc� zarpa em dire��o ao monast�rio...^000000";
			close2;
			warp("nameless_n",257,217);
			end;
			case 2:
			mes "^3355FFVoc� decide ficar em terra firme.^000000";
			close;
		}
	}
}

// ------------------------------------------------------------------
nameless_i,212,184,0	script	Outside Island#Aru	FAKE_NPC,2,3,{
	end;
	OnTouch:
	if (aru_monas == 17) {
		mes "^3355FFA vila est� em total sil�ncio, como se toda a vida a tivesse abandonado.";
		mes "Voc� olha ao redor e percebe que algo estava aqui h� horas atr�s, mas foi embora.^000000";
		next;
		mes "^3355FFO que quer que fosse, definitivamente n�o era humano.";
		mes "Que tipo de criatura poderia ser?^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
nameless_in,21,176,0	script	Inside Island#Aru	FAKE_NPC,2,2,{
	end;
	OnTouch:
	if (aru_monas == 17) {
		mes "^3355FFH� tra�os de humanos por aqui.";
		mes "Juntamente com algum tipo de uma criatura que voc� n�o consegue identificar.^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
nameless_i,129,218,0	script	Grass Behind#Aru	FAKE_NPC,4,3,{
	end;
	OnTouch:
	if (aru_monas == 17) {
		mes "^3355FFA strange scent strikes you as you enter this field of grass.";
		mes "A few ^32CD32animal corpses^3355FF are strewn around the ground.^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
nameless_i,127,207,0	script	Corvo Morto#Aru	HIDDEN_NPC,{
	if (aru_monas < 17) {
		mes "^3355FF� apenas um corvo morto.^000000";
		close;
	} else if (aru_monas == 17) {
		mes "^3355FFA vis�o desse ^32CD32corvo morto^3355FF incomoda voc� por algum motivo.^000000";
		next;
		if (select("Ignorar","Investigar") == 1) {
			mes "^3355FFVoc� decide n�o tocar na carca�a do animal.^000000";
			close;
		}
		mes "^3355FFVoc� nota um pouco de seiva de grama no bico do corvo, ent�o ele devia estar mastigando a grama.";
		mes "Algumas penas e t�o faltando, revelando uma pele escamosa como a de uma cobra.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espere...";
		mes "Essa grama...?";
		next;
		mes "^3355FFEssa grama deve ser o ingrediente principal do veneno usado para matar os pr�ncipes da fam�lia Gaebolg.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Parece que tirei a sorte grande.";
		mes "H�? Tem algu�m atr�s...";
		next;
		mes "^3355FFUma dor forte e aguda atinge sua nuca, enquanto voc� cai inconsciente...^000000";
		aru_monas = 18;
		close2;
		warp("nameless_in",15,60);
		end;
	}
	end;
}

// ------------------------------------------------------------------
nameless_in,15,61,0	script	Pass Out#Aru	FAKE_NPC,2,3,{
	end;
	OnTouch:
	if (aru_monas == 18) {
		disablenpc("Out_from_Monastery");
		sc_start(SC_BLIND,600000,0,10000);
		mes "^3355FFA press�o no seu est�mago e o sangue correndo para sua cabe�a indicam que algu�m est� carregando voc� sobre os ombros.";
		mes "Ele para e voc� ouve uma voz fraca.^000000";
		next;
		mes "^3355FFA voz fraca vai ficando mais forte e mais distinta...";
		mes "Algu�m est� chamando seu nome.";
		mes "Voc� sente a �gua fria correr por seus l�bios, e ent�o voc� recupera os sentidos.^000000";
		next;
		sc_end(SC_BLIND);
		hideoffnpc("Larjes#Monastery");
		next;
		mes "Essa foi por pouco...";
		mes "Por um instante,";
		mes "Pensei ter perdido voc�.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Larjes...? O que...";
		mes "O que aconteceu?";
		mes "Ai, minha cabe�a...";
		next;
		mes "[Larjes]";
		mes "Tente n�o se mexer por enquanto.";
		mes "Tive uma sensa��o ruim enquanto esperava por voc� no barco.";
		mes "Foi sorte sua.";
		mes "Quando encontrei voc�, aquelas criaturas estranhas estavam atacando voc�!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� me salvou?";
		mes "Obrigado.";
		mes "Voc� por acaso sabe que criaturas eram aquelas?";
		next;
		mes "[Larjes]";
		mes "N�o tenho id�ia. Pareciam Homens, mas...";
		mes "N�o eram, definitivamente.";
		mes "Quando as matei, elas viraram areia.";
		next;
		hideoffnpc("Creature#Monas");
		emotion(e_omg,1);
		emotion(e_omg,0,"Larjes#Monastery");
		mes "[Larjes]";
		mes "?!?!?!!!!!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "!!!!?!?!!!!!!";
		mes "Elas... N�o s�o...?";
		next;
		mes "[Larjes]";
		mes "Elas se parecem com as criaturas que levaram voc�, mas...";
		mes "Por que ser� que n�o nos atacaram?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Acho que teremos de ir at� l� perguntar.";
		aru_monas = 19;
		close;
	}
}

// ------------------------------------------------------------------
nameless_in,13,53,1	script	Creature#Monas	ZOMBIE_SLAUGHTER,3,1,{
	end;
	OnInit:
	hideonnpc(strnpcinfo(NPC_NAME));
	end;

	OnTouch:
	if (aru_monas == 19 && mobcount("nameless_in","Creature#Monas::OnMyMobDead") < 1 && !@aru_monas_kill) {
		mes "[???????]";
		mes "Grrr!!!";
		close2;
		monster("nameless_in",13,53,"Massacre",ZOMBIE_SLAUGHTER,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		hideonnpc(strnpcinfo(NPC_NAME));
	}
	end;

	OnMyMobDead:
	@aru_monas_kill = 1;
	enablenpc("Out_from_Monastery");
	end;
}

// ------------------------------------------------------------------
nameless_in,12,37,0	script	Out_from_Monastery	WARPNPC,1,1,{
	end;
	OnTouch:
	if (aru_monas == 19) {
		aru_monas = 20;
		warp("nameless_n",168,252);
		end;
	}
	OnInit:
	disablenpc("Out_from_Monastery");
	end;
}

// ------------------------------------------------------------------
nameless_in,13,58,6	script	Larjes#Monastery	4W_M_01,{
	mes "[Larjes]";
	mes "Tenha cuidado.";
	mes "Esse cara parece bem perigoso.";
	close;
	OnInit:
	hideonnpc("Larjes#Monastery");
	end;
}

// ------------------------------------------------------------------
nameless_n,169,254,0	script	Noite#Aru2	FAKE_NPC,3,3,{
	end;

	OnTouch:
	if (aru_monas == 20) {
		hideoffnpc("Larjes#Monastery2");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas que diabos...?!";
		next;
		mes "[Larjes]";
		mes "Ent�o...";
		mes "Essa � a verdadeira natureza da ilha.";
		next;
		mes "[Larjes]";
		mes "Algu�m como eu n�o sobrevive em um lugar como este.";
		mes "Vou esperar por voc� no barco.";
		mes "Descubra o que tiver que descobrir, e volte a salvo, "+strcharinfo(PC_NAME)+".";
		aru_monas = 21;
		changequest(17013,17014);
		close2;
		hideonnpc("Larjes#Monastery2");
	}
	end;
}

// ------------------------------------------------------------------
nameless_n,166,254,0	script	Larjes#Monastery2	4W_M_01,{
	end;

	OnInit:
	hideonnpc("Larjes#Monastery2");
	end;
}

// ------------------------------------------------------------------
abbey02,224,70,0	script	Livros#Mona1	HIDDEN_NPC,{
	if (!checkweight(Research_Note,1)) {
		mes "^3355FFEspere um pouco!";
		mes "No momento, voc� est� carregando muitas coisas com voc�.";
		mes "Volte depois de usar os Servi�os Kafra para armazenar alguns dos seus itens.^000000";
		close;
	} else if (aru_monas < 21) {
		mes "^3355FF� apenas uma pilha de livros velhos e mofados.^000000";
		close;
	} else if (aru_monas == 21) {
		mes "^3355FFH� um livro manchado com sangue entre tudos estes livros velhos, mofados.^000000";
		next;
		if (select("Examinar o Livro","Ignorar")==1) {
			aru_monas = 22;
			changequest(17014,17015);
			getitem(Research_Note,1);
			readbook(Research_Note,1);
			close;
		}
		mes "^3355FFAquele livro devia ser in�til mesmo.^000000";
		close;
	} else {
		mes "^3355FFH� v�rios livros velhos espalhados por aqui.^000000";
		close;
	}
}

// ------------------------------------------------------------------
abbey03,232,233,4	script	Homem#King	4_M_TRISTAN,{
	if (aru_monas < 22) {
		mes "^3355FFVoc� encontra um homem deitado no ch�o, vestindo roupas rotas, mas luxuosas.";
		mes "Ele parece n�o estar respirando...^000000";
		next;
		mes "^3355FFEle est� morto.^000000";
		close;
	} else if (aru_monas == 22 || aru_monas == 23) {
		mes "^3355FFVoc� encontra um homem deitado no ch�o, vestindo roupas rotas, mas luxuosas.";
		mes "Ele parece n�o estar respirando...^000000";
		next;
		mes "^3355FFVoc� leva o ouvido mais perto da boca dele:";
		mes "Parece que ele ainda respira, mas est� quase morto.^000000";
		next;
		if (select("Toque-o","Ignore-o") == 1) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Este homem...";
			mes "Ele parece familiar, por algum motivo.";
			next;
			mes "^3355FFQuando voc� toca nele, o homem se levanta de repente, com um gemido alucinado.^000000";
			aru_monas = 23;
			monster("abbey03",232,232,"Tristan III",TRISTAN_3RD,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
			initnpctimer;
			hideonnpc(strnpcinfo(NPC_NAME));
			close;
		}
		mes "^3355FFVoc� n�o se sente � vontade para tocar neste homem.^000000";
		close;
	} else {
		mes "^3355FFEle est� morto... Agora.^000000";
		close;
	}

	OnMyMobDead:
	stopnpctimer;
	donpcevent("Homem Morto#King::OnEnable");
	end;

	OnTimer300000:
	stopnpctimer;
	hideonnpc("Homem Morto#King");
	hideoffnpc(strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
abbey03,232,232,4	script	Homem Morto#King	4_M_TRISTAN,{
	if (aru_monas == 23) {
		if (!checkweight(Token_Of_King,1)) {
			mes "^3355FFEspere um pouco!";
			mes "No momento, voc� est� carregando muitas coisas com voc�.";
			mes "Volte depois de usar os Servi�os Kafra para armazenar alguns dos seus itens.^000000";
			close;
		}
		mes "^3355FFVoc� n�o faz id�ia por que esse homem morto est� andando por a�, ent�o decide examin�-lo.";
		mes "Em sua casaca voc� encontra uma medalha brilhante...^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Essa medalha...";
		mes "Isso significa que este homem �...!";
		aru_monas = 24;
		getitem(Token_Of_King,1);
		changequest(17015,17016);
		hideonnpc(strnpcinfo(NPC_NAME));
		hideoffnpc("Homem#King");
		stopnpctimer;
		close;
	}
	end;

	OnEnable:
	initnpctimer;
	hideoffnpc(strnpcinfo(NPC_NAME));
	end;

	OnInit:
	hideonnpc(strnpcinfo(NPC_NAME));
	end;

	OnTimer150000:
	hideonnpc(strnpcinfo(NPC_NAME));
	hideoffnpc("Homem#King");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
nameless_n,259,218,3	script	Larjes#Boat1	4W_M_01,{
	if (aru_monas == 24) {
		if (countitem(Token_Of_King) < 1) {
			mes "[Larjes]";
			mes "Que bom, voc� voltou.";
			mes "Sei que ainda h� coisas nesta ilha que voc� quer investigar.";
			mes "Mas quer deixar este lugar por algum tempo?";
			next;
			switch (select("Sim","N�o")) {
				case 1:
				mes "[Larjes]";
				mes "Certo, vamos l�.";
				close2;
				warp("ve_fild07",130,130);
				end;
				case 2:
				mes "[Larjes]";
				mes "Certo, mas tenha cuidado.";
				mes "As criatura quase pegaram voc� uma vez.";
				close;
			}
		} else {
			mes "[Larjes]";
			mes "Eu n�o acredito...";
			mes "Aquele cara era Tristan III?!";
			mes "Isso explica muita coisa, ent�o.";
			mes "Vou relatar isso, junto com os autos.";
			mes "Ent�o Arunafeltz estava por tr�s da grama venenosa tamb�m...";
			next;
			mes "[Larjes]";
			mes "Estou chocado com tudo isso.";
			mes "Tenho certeza que a fam�lia real de Rune-Midgard vai ficar louca com tudo isso.";
			mes "E pensar que nos envolvemos em algo t�o grande...";
			next;
			mes "[Larjes]";
			mes "Enfim, � melhor eu ir";
			mes "andando... Isso � enorme!";
			delitem(Token_Of_King, 1);
			aru_monas = 25;
			changequest(17016,17017);
			getexp(1000000,0);
			close;
		}
	}
	mes "[Larjes]";
	mes "Voc� ainda quer investigar a ilha?";
	next;
	switch (select("N�o","Sim")) {
		case 1:
		mes "[Larjes]";
		mes "Certo, vamos l�.";
		close2;
		warp("ve_fild07",130,130);
		end;
		case 2:
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram voc� uma vez.";
		close;
	}
}

// ------------------------------------------------------------------
nameless_i,168,257,0	script	outtoin_01#mo	WARPNPC,1,1,{
	end;
	OnTouch:
	if (aru_monas == 18 || aru_monas == 19) {
		warp("nameless_in",12,41);
		end;
	}
	mes "^3355FFEssa porta n�o abre, voc� n�o pode passar por ela.^000000";
	close;
}

// ------------------------------------------------------------------
nameless_i,259,218,3	script	Larjes#Aru	4W_M_01,{
	if (aru_monas < 18) {
		mes "[Larjes]";
		mes "N�o gosto deste lugar...";
		mes "� melhor voc� tomar cuidado com essas criaturas estranhas andando por a�.";
		close;
	} else if (aru_monas < 24) {
		mes "[Larjes]";
		mes "Que bom, voc� voltou.";
		mes "Sei que ainda h� coisas nesta ilha que voc� quer investigar.";
		mes "Mas quer deixar este lugar por algum tempo?";
		next;
		if (select("Sim","N�o") == 1) {
			mes "[Larjes]";
			mes "Certo, vamos l�.";
			close2;
			warp("ve_fild07",130,130);
			end;
		}
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram voc� uma vez.";
		close;
	} else {
		mes "[Larjes]";
		mes "Voc� ainda quer investigar a ilha?";
		next;
		if (select("N�o","Sim") == 1) {
			mes "[Larjes]";
			mes "Certo, vamos l�.";
			close2;
			warp("ve_fild07",130,130);
			end;
		}
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram voc� uma vez.";
		close;
	}
}

// ------------------------------------------------------------------
nameless_n,145,162,0	script	AideAmi#Aru	HIDDEN_WARP_NPC,2,2,{
	end;
	OnTouch:
	if (aru_monas == 26) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "H� uma parede baixa aqui contra a outra parede, se eu escalo isto, eu poderia chegar ao lugar de descanso do Tristan III...";
		next;
		switch (select("Fique aqui","Escale a parede")) {
			case 1:
			warp("nameless_n",158,169);
			end;
			case 2:
			warp("abbey01",51,15);
			end;
		}
	} else {
		warp("nameless_n",158,169);
		end;
	}
}
