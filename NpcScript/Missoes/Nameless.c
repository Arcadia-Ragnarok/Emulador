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
| * Necessário conlusão da quest Templo de Rachel.                  |
| * Necessário conlusão da quest Maldição da Família Gaebolg.       |
| * Necessário conlusão da quest Irmãos de Veins (Camelo).          |
\*-----------------------------------------------------------------*/

/* **** Iniciando com o "Padre Bamph"
airplane_01,90,63,0	script	Event Switch#pc	FAKE_NPC,3,3,{
	end;
	OnTouch:
	if ((prt_curse == 36 || prt_curse == 45 || prt_curse == 56 || prt_curse == 61) && (aru_monas < 1)) {
		hideoffnpc("Agente#pc1");
		mes "[????]";
		mes "Você é "+strcharinfo(PC_NAME)+"?";
		mes "Eu estava esperando você.";
		mes "O \"^6B8E23Sacerdote Bamph^000000\" aguarda sua chegada na ^6B8E23Catedral de Prontera^000000.";
		mes "Vá vê-lo o mais rápido que puder.";
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

cmd_in02,174,89,7	script	Homem ordinário#pc1	4W_M_01,{
	if (aru_monas < 2) {
		mes "[Larjes]";
		mes "Droga, perdi de novo!";
		mes "Este jogo é uma armação!";
		mes "Por mais que eu tente, não consigo vencer!";
		close;
	} else if (aru_monas == 2) {
		mes "[Larjes]";
		mes "Argh, perdi neste jogo tantas vezes que já perdi a conta, também!";
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
		mes "Desculpe se meus gritos incomodaram você.";
		mes "Só estou aqui matando o tempo...";
		mes "Agora entendo que jogar é algo prejudicial!";
		next;
		mes "[Larjes]";
		mes "Certo, poderia vir por aqui?";
		mes "Não quero que ninguém escute nossa conversa.";
		close2;
		aru_monas = 3;
		warp("cmd_in02",110,53);
		end;
	} else {
		mes "[Larjes]";
		mes "O quê?!";
		mes "Eu perdi denovo?";
		mes "Como funciona...";
		mes "Como funciona esse jogo?!";
		close;
	}
}

// ------------------------------------------------------------------
cmd_in02,111,52,3	script	Homem ordinário#pc2	4W_M_01,{
	if (aru_monas < 3) {
		mes "[Larjes]";
		mes "^666666*Ai, ai...*^00000";
		mes "Isso não é nada bom.";
		mes "Não sei o que fazer...";
		close;
	} else if (aru_monas == 3) {
		mes "[Larjes]";
		mes "Ótimo, ninguém deve nos ouvir aqui.";
		mes "Depois que enviei uma mensagem para o lugar.";
		mes "Descobri informações novas que devem ajudar em minha investigação.";
		next;
		mes "[Larjes]";
		mes "Descobri dois detalhes sobre a noite em que o alto oficial desapareceu.";
		mes "Primeiro, ele se afastou dos guardas para encontrar uma mulher.";
		mes "É sempre uma mulher, né?";
		next;
		mes "[Larjes]";
		mes "Segundo, depois que ele saiu para ver essa mulher, outras pessoas entraram.";
		mes "Então carregaram uma enorme bagagem com elas quando partiram para o oeste.";
		next;
		mes "[Larjes]";
		mes "A bagagem era tão grande que levantou suspeita.";
		mes "Parece que alguma organização o seqüestrou, e quer levá-lo para o oeste por alguma razão.";
		next;
		select("Por que para o oeste?");
		mes "[Larjes]";
		mes "É só um palpite, mas acho que quem o seqüestrou é de ^2F4F2FArunafeltz^000000.";
		mes "Não estou autorizado a entrar em Arunafeltz, então não pude investigar mais por lá.";
		aru_monas = 4;
		changequest(17001,17002);
		close;
	} else {
		mes "[Larjes]";
		mes "Hmm, já que estou em Comodo, acho que vou dar um belo mergulho no mar?!";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,308,59,1	script	Garçom#pc	4_M_RACHMAN2,{
	if (aru_monas < 7) {
		mes "[Garçom]";
		mes "Bem-vindo ao Palato de Rachel, um dos mais refinados restaurantes de Rachel.";
		if (aru_monas < 6) {
			close;
		} else if (aru_monas == 6) {
			next;
			mes "[Garçom]";
			mes "O que gostaria de pedir?";
			mes "Ou... Será que me engano, ou você está aqui por outro motivo?";
			next;
			if (select("Quero pedir algo","Sim, Por outro motivo") == 1) {
				mes "[Garçom]";
				mes "Claro, será um prazer.";
				mes "Veio sozinho?";
				next;
				select("Sim.");
				mes "[Garçom]";
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
			mes "[Garçom]";
			mes "Hum, certo.";
			mes "Bem, o que quer que seja, espero que aproveite seu tempo no Palato de Rachel.";
			close;
		}
	} else {
		mes "[Garçom]";
		mes "A comida neste restaurante é a melhor de Rachel.";
		mes "Não, é a melhor de todas em Arunafeltz!";
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
			mes "Agora mesmo, você está carregando itens demais com você.";
			mes "Por favor, volte depois de usar o Armazém Kafra para guardar alguns dos seus itens.^000000";
			close;
		}
		mes "[Garçom]";
		mes "O que você gostaria de pedir?";
		mes "Nosso prato do dia é o Esgana-Gata Listrado de Veins.";
		mes "Recebemos um lote de altíssima qualidade de Veins hoje de mamhã.";
		next;
		select("...Sim, parece ser bom.");
		mes "[Garçom]";
		mes "Excelente escolha.";
		mes "Só para lhe informar, esse prato custa ^9932CD3.000 zenys^000000.";
		mes "Volto já.";
		next;
		mes "^3355FFO garçom anotou seu pedido e saiu para a cozinha.";
		mes "Você decide escutar a conversa do pessoal da mesa ao lado enquanto espera.^000000";
		next;
		mes "[Voz Grave]";
		mes "...............................";
		mes "Eu vi mesmo, era o maior peixe do mundo!";
		mes "Da última vez que fui a Veins, pude ver o Esgana-Gata Listrado Dourado de Veins!";
		mes "É verdade!";
		next;
		mes "[Voz Desanimada]";
		mes "Então, você conseguiu provar o molho do Esgana-Gata Listrado Dourado de Veins?";
		next;
		mes "[Voz Confiante]";
		mes "Ah, cara, se fosse comigo, seria uma experiência única na vida!";
		mes "Só conseguem pescar esses Esgana-Gatas Listrados Dourados uma vez a cada dez anos!";
		next;
		mes "[Voz Grave]";
		mes "Ah, sim, seu molho é incrível.";
		mes "Minha voz até mudou depois que eu bebi!";
		mes "Foi tão... Profundo.";
		next;
		mes "[Voz Confiante]";
		mes "Oh! Então é por isso que sua voz está diferente.";
		next;
		mes "[Voz Desanimada]";
		mes "Como você conseguiu beber um suco tão raro?";
		mes "Quero dizer, deve ter um monte de gente fazendo fila, com reservas, só esperando para beber!";
		next;
		mes "[Voz Grave]";
		mes "Tirei a sorte grande, fui a uma taverna em Veins, e ouvi dizer que..";
		mes "^DB7093Um grupo de contrabandistas havia sido preso pelos guardas na praia ao sudeste^000000.";
		next;
		mes "[Voz Grave]";
		mes "Então pensei, talvez eles estivessem pescando.";
		mes "Então fui à praia ver se achava o barco de pesca deles.";
		next;
		mes "[Voz Confiante]";
		mes "Cara, você é obcecado por comida.";
		mes "Digo, quem mais ia pensar que os contrabandistas estariam pescando ilegalmente?";
		next;
		mes "[Voz Grave]";
		mes "É, acho que você tem razão!";
		mes "Enfim, havia apenas um barco de pesca, e os guardas estavam inspecionando.";
		mes "Estava prestes a dar meia-volta, desapontado mas então... avistei um pescador!";
		next;
		mes "[Voz Grave]";
		mes "Pelo canto dos olhos, vi que ele trazia a pescaria do dia:";
		mes "O Esgana-Gata Listrado Dourado de Veins!";
		mes "Comprei todos os peixes dele na hora.";
		next;
		mes "[Voz Desanimada]";
		mes "Cara, você teve sorte.";
		mes "E você nem hesita em esbanjar quando o assunto é comida, não é? He he!";
		next;
		mes "[Voz Grave]";
		mes "Ah, isso não foi esbanjar.";
		mes "Sei que vocês teriam feito o mesmo no meu lugar.";
		mes "Sou grato por poder saborear um peixe tão raro.";
		next;
		mes "^3355FF...............................";
		mes "Então, os homens começaram a brindar entre si.^000000";
		next;
		mes "[Garçom]";
		mes "Ah, aqui está o seu Esgana-Gata Listrado de Veins.";
		mes "Bom apetite.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "^ff0000Veins^000000, não é?";
		mes "É melhor eu dar uma olhada lá um dia desses, talvez encontre mais desses peixes.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Uau, esse peixe tem gosto de...";
		mes "Nunca saboreei nada igual!";
		mes "É quase como uma sobremesa. Hummm, que bom!";
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
		mes "A-ai! Minha úlcera...";
		mes "Tão de repente...!";
		close;
	} else if (aru_monas == 8) {
		mes "[Al Hamad]";
		mes "Puxa, esse deve ser o pior caso da minha carreira.";
		mes "Por que isso tinha que acontecer agora?";
		mes "A aposentadoria estava tão perto...";
		next;
		select("Está com problemas?");
		mes "[Al Hamad]";
		mes "Hã? Não parece que você seja aqui destas bandas.";
		mes "Olhe, agradeço sua preocupação.";
		mes "Mas não me sinto à vontade para falar com estranhos sobre meus problemas...";
		aru_monas = 9;
		changequest(17004,17005);
		close;
	} else if (aru_monas == 9) {
		mes "[Al Hamad]";
		mes "A menos que você tenha algum assunto importante, não tem permissão para entrar aqui.";
		mes "Estamos aqui para Homemter a ordem pública, e deixar qualquer um entrar vai causar problemas.";
		close;
	} else if (aru_monas == 10) {
		mes "[Al Hamad]";
		mes "Pensei ter dito que você não tem permissão para entrar aqui.";
		mes "Por que você voltou?";
		next;
		if (select("Desculpe","Quero saber sobre os contrabandistas.") == 1) {
			mes "[Al Hamad]";
			mes "Tudo bem.";
			mes "Apenas saia, e não volte a menos que tenha um motivo muito bom.";
			close;
		}
		mes "[Al Hamad]";
		mes "Ei, como você soube dos contrabandistas?";
		mes "A notícia já se espalhou?";
		mes "Bem, desculpe, mas não posso revelar nenhum detalhe sobre uma investigação em curso.";
		next;
		mes "[Al Hamad]";
		mes "^9370DBSe quiser mesmo saber mais, então deve me trazer uma ordem por escrito de um oficial superior.^000000.";
		mes "Ah, e proíbo você de perguntar a mais alguém, então comporte-se.";
		aru_monas = 11;
		changequest(17006,17007);
		close;
	} else if (aru_monas < 13) {
		mes "[Al Hamad]";
		mes "Não culpo você por ser curioso, mas envolver-se com o que não deve só pode lhe trazer problemas.";
		mes "Tenha cuidado, certo?";
		close;
	} else if (aru_monas == 13) {
		mes "[Al Hamad]";
		mes "Hum, que estranho.";
		mes "Você nem mesmo é cidadão de Arunafeltz, mas de alguma forma conhece um homem de posição tão alta.";
		mes "Certo, acho que posso lhe contar mais sobre nossa investigação.";
		next;
		mes "[Al Hamad]";
		mes "Você precisa saber que o que eu te disser pode não valer tanto a pena.";
		mes "Estas informações não devem ser tão valiosas quanto você pensa.";
		next;
		mes "[Al Hamad]";
		mes "Os contrabandistas que pegamos são do pior tipo:";
		mes "Eles lidam com o tráfico de pessoas, mas nós os pegamos por terem invadido nossas águas.";
		mes "A ficha criminal deles é típica.";
		next;
		mes "[Al Hamad]";
		mes "Vejamos...";
		mes "Eles seqüestraram um homem em Comodo.";
		mes "Isso fica na região sudoeste de Rune-Midgard.";
		mes "Enfim, os contrabandistas pensaram que ele era rico, então armaram uma cilada.";
		next;
		mes "[Al Hamad]";
		mes "Eles o afastaram dos seus guardas enviando uma mulher.";
		mes "Mas quando o capturaram descobriram que ele não só é rico.";
		mes "Como também é um oficial de alta patente em Rune-Midgard.";
		next;
		mes "[Al Hamad]";
		mes "Foi aí que eles se descuidaram:";
		mes "Ficaram com tanto medo das tropas do reino os perseguirem que invadiram nossas fronteiras marítimas.";
		mes "Então nós os pegamos.";
		next;
		mes "[Al Hamad]";
		mes "O que não entendo é por que ficaram tão assustados.";
		mes "Afinal, o maior negócio deles é o tráfico de pessoas, então...";
		mes "Seqüestrar um oficial não é uma diferença tão grande, é?";
		next;
		mes "[Al Hamad]";
		mes "Entramos em contato com o templo, falamos sobre os contrabandistas.";
		mes "Nossa investigação e o oficial de alta patente do Reino de Rune-Midgard.";
		next;
		mes "[Al Hamad]";
		mes "Depois disso, um grupo do templo interrompeu nossa investigação.";
		mes "Levou os contrabandistas embora antes que terminássemos o interrogatório, e nunca mais os vimos.";
		next;
		mes "[Al Hamad]";
		mes "Perguntei a um conhecido que trabalha no templo, mas nem ele sabe o que está acontecendo aqui.";
		mes "O ^32CD32oficial de Rune-Midgard^000000 também sumiu.";
		mes "Tudo isso é frustrante demais...!";
		next;
		mes "[Al Hamad]";
		mes "Isso é tudo o que eu sei.";
		mes "Isso significa que temos de capturar os contrabandistas de novo?";
		mes "Não sei o que está acontecendo...";
		aru_monas = 14;
		changequest(17009,17010);
		next;
		mes "[Al Hamad]";
		mes "Mesmo que pudesse avançar com a investigação, recebi ordens superiores para arquivá-la.";
		mes "Será que este caso não vale a pena para eles?";
		next;
		mes "[Al Hamad]";
		mes "Não quero mais me envolver nisso.";
		mes "Eu já devia ter me aposentado!";
		mes "Se você quiser saber mais, sua única opção seria descobrir por conta própria.";
		mes "Sem chance, não é?";
		close;
	} else {
		mes "[Al Hamad]";
		mes "Já sofri o bastante!";
		mes "Por que não consigo arquivar este caso?!";
		close;
	}
}

// ------------------------------------------------------------------
ve_in,81,296,3	script	Soldado#Aru	4_M_DST_MASTER,{
	if (aru_monas < 9) {
		mes "[Himus]";
		mes "Hum.";
		mes "O magistrado parece ainda estar nervoso com o caso que aconteceu há uns meses...";
		close;
	} else if (aru_monas == 9) {
		mes "[Himus]";
		mes "Hum? Oh, o magistrado te deu um fora?";
		mes "Bem, ele não é mais o mesmo desde que prendemos aqueles ^32CD32contrabandistas do sul^000000 há alguns meses.";
		next;
		mes "[Himus]";
		mes "Quando informamos sobre a prisão ao templo, os soldados da papisa vieram e levaram os contrabandistas.";
		mes "Não temos idéia do que aconteceu com eles nem de onde eles estão agora.";
		next;
		mes "[Himus]";
		mes "Pode não parecer grande coisa para você.";
		mes "Mas o magistrado é muito meticuloso, e odeia quando gente de fora interfere no trabalho dele, sabe?";
		next;
		select("Quem são os contrabandistas?");
		mes "[Himus]";
		mes "Bem, eu não sei.";
		mes "Talvez o magistrado soubesse se tivesse a chance de terminar de interrogar os contrabandistas.";
		mes "Não sei se ele conseguiu antes dos contrabandistas serem levados.";
		aru_monas = 10;
		changequest(17005,17006);
		close;
	} else if (aru_monas == 10) {
		mes "[Himus]";
		mes "O magistrado está prestes a se aposentar, então espero que ele finalmente possa ir para casa e esquecer disso tudo.";
		mes "Ele não faz nada além de se estressar!";
		close;
	} else {
		mes "[Himus]";
		mes "Belo dia, não?";
		close;
	}
}

// ------------------------------------------------------------------
ra_temple,165,57,5	script	Niren#ss	4_F_MADAME,{
	cutin("ra_gwoman",2);
	mes "[Suma-Sacerdotisa Niren]";
	mes "Então, você quer falar comigo?";
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
			mes "Temo que eu não possa revelar certas informações sobre eles, pois este é um caso confidencial...";
			next;
			mes "[Niren]";
			mes "Sinto não poder dar muitas informações sobre eles, pois há muita coisa em jogo.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Na verdade, queria saber sobre quem foi seqüestrado.";
			next;
			mes "[Niren]";
			mes "Ah, bem, acho que posso contar mais sobre o refém.";
			mes "Mas antes gostaria de lhe pedir um favor.";
			next;
			select("Aceitar","Não Recusar");
			mes "[Niren]";
			mes "Quando percebemos quem era o refém que estava nas mãos deles, nós não sabíamos o que fazer com ele.";
			mes "Tínhamos muitos problemas internos para resolver...";
			next;
			mes "[Niren]";
			mes "Mesmo assim, achamos que podíamos usá-lo em nosso plano.";
			mes "Então o escondemos em um lugar secreto, cuja posição só é conhecida por poucos.";
			mes "Mas então... Perdemos todo o contato.";
			next;
			mes "[Niren]";
			mes "Enviamos investigadores, mas ainda não temos idéia do que aconteceu.";
			mes "Tudo o que encontraram foi uma mensagem deixada por um sobrevivente:";
			mes "São todos demônios.";
			mes "O refém deve estar morto.";
			next;
			mes "[Niren]";
			mes "Ele podia ser um oficial de alto escalão, mas estávamos preocupados com outros assuntos.";
			mes "Na verdade não tive a chance de pensar no que fazer com ele...";
			next;
			mes "[Niren]";
			mes "Quero pedir que você vá até esse lugar para descobrir o que aconteceu ali.";
			mes "E se o oficial de alto escalão de Rune-Midgard ainda está vivo.";
			mes "Duvido, mas...";
			next;
			mes "[Niren]";
			mes "Os investigadores que temos em nosso templo não são tão bons quanto vocês, aventureiros estrangeiros.";
			mes "Então tenho fé de que você consiga.";
			mes "Mesmo assim será muito perigoso.";
			next;
			mes "[Niren]";
			mes "Se puder fazer isso, vou lhe dizer a localização do lugar: nós o chamamos de \"monastério\".";
			mes "Antes era um monastério de verdade, mas agora o usamos como cativeiro.";
			next;
			mes "[Niren]";
			mes "Desculpe, mas não posso contar mais nada sobre esse lugar.";
			mes "Ele está a sudoeste de Veins, navegando pelo mar.";
			mes "Você deve conseguir encontrar um barco na Praia Sul de Veins.";
			next;
			mes "[Niren]";
			mes "No entanto...";
			mes "Não importa.";
			mes "Gostaria de ajudar você mais, mas estaria comprometendo minha posição.";
			mes "Desculpe.";
			mes "Por favor, volte e me diga se descobrir alguma coisa lá.";
			aru_monas = 13;
			changequest(17008,17009);
			next;
			mes "[Niren]";
			mes "Vou Homemdar uma mensagem ao magistrado de Veins.";
			mes "Se você falar com ele, ele dará algumas informações úteis para sua jornada.";
			mes "Boa sorte.";
			close2;
		} else if (aru_monas < 18) {
			mes "[Niren]";
			mes "Ir até o monastério não é o problema:";
			mes "Voltar vivo deve ser o verdadeiro desafio.";
			next;
			mes "[Niren]";
			mes "Não podemos enviar tropas até entendermos o que estamos enfrentando por lá.";
			mes "É por isso que preciso que você investigue a área.";
			close2;
		} else if (aru_monas < 25) {
			mes "[Niren]";
			mes "Ainda está investigando o monastério?";
			mes "Talvez você possa encontrar algum registro deixado por um dos residentes de lá...";
			close2;
		} else if (aru_monas == 25) {
			if (!countitem(Research_Note)) {
				mes "[Niren]";
				mes "Ainda está investigando o monastério?";
				mes "Talvez você possa encontrar algum registro deixado por um dos residentes de lá...";
				close2;
			} else {
				mes "[Niren]";
				mes "Você encontrou este diário no monastério?";
				mes "Perfeito.";
				mes "Deixe-me ler, e ver";
				mes "o que podemos descobrir...";
				next;
				mes "[Niren]";
				mes "Hum, isso parece muito ruim.";
				mes "É trágico, ainda mais por termos Homemtido tanta gente importante ali.";
				mes "Vou solicitar o envio de tropas para lá agora mesmo.";
				mes "Algo precisa ser feito.";
				next;
				mes "[Niren]";
				mes "Há muitos problemas que precisamos enfrentar agora.";
				mes "Mas a questão do monastério terá prioridade.";
				mes "Não poderemos dar conta se outra ameaça vier daquele lugar.";
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
			mes "Parece que Arunafeltz e Rune-Midgard estarão muito ocupadas com suas questões internas para entrar em guerra.";
			mes "O Sumo-Sacerdote Zhed ficará feliz em saber disso.";
			close2;
			cutin("",255);
			end;
		}
	} else {
		if (aru_em < 10) {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Desculpe-me...";
			mes "Eu não quero mesmo pensar no Zhed agora. Ele...";
			close2;
		}
		else {
			mes "[Suma-Sacerdotisa Niren]";
			mes "Desculpe-me...";
			mes "Eu não quero mesmo pensar no Zhed agora...";
			close2;
			cutin("",255);
			end;
		}
	}
}

// ------------------------------------------------------------------
ve_in,239,115,0	script	Bêbedo#Aru	4_M_DESERT,{
	if (aru_monas < 14) {
		mes "[Bêbado]";
		mes "Cara, que legal! Ha ha!";
		mes "Ei, me dá mais um refresco!";
		close;
	} else if (aru_monas == 14) {
		if (rachel_camel == 25) {
			mes "[Bêbado]";
			mes "Então... o que eu... eu 'tava dizendo, sabe aquele cara que ^32CD32saiu de fininho para navegar com um barco^000000?";
			mes "Você sabe por que ele voltou tão cedo?";
			mes "Você não vai acreditar!";
			next;
			mes "[Bêbado]";
			mes "Ha ha!";
			mes "Ele achou ter visto um ^DBDB70fantasma^000000!";
			mes "Hua ha ha ha! Uuuug... Ei...";
			aru_monas = 15;
			changequest(17010,17011);
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Isso mesmo!";
			mes "Talvez eu deva falar com o ^32CD32pai de Karyn, já que ele é um pescador^000000.";
			close;
		} else {
			mes "[Drunkard]";
			mes "Zzzz...";
			mes "Umm... Zzz...";
			close;
		}
	} else {
		mes "[Bêbado]";
		mes "Por quê?!";
		mes "Por que não posso sair com o barco para o mar?";
		mes "Preciso pescar para ganhar a vida!";
		mes "Eles 'tão querendo que eu morra de fome ou algo assim?!";
		mes "Hein?!";
		close;
	}
}

// ------------------------------------------------------------------
ve_fild07,125,128,0	script	Barco#Aru	HIDDEN_NPC,{
	if (aru_monas < 16) {
		mes "^3355FFEste barco parece estar em boas condições.";
		mes "De quem ele será?^000000";
		close;
	} else if (aru_monas == 16) {
		mes "^3355FFEste deve ser o barco de que Karyn me contou.";
		mes "Ele parece estar em bom estado.";
		mes "Bem, o monastério deve estar a sudoeste daqui...^000000";
		next;
		mes "[Larjes]";
		mes "A quanto tempo, "+strcharinfo(PC_NAME)+".";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Larjes!";
		next;
		mes "[Larjes]";
		mes "Foi difícil ficar seguindo você, sabia?";
		mes "Na verdade, quase que eu perco seu rastro.";
		mes "Você deve estar se perguntado por que estou aqui.";
		mes "Se puder me ouvir, vou explicar tudo.";
		next;
		mes "[Larjes]";
		mes "De acordo com nossa investigação, Arunafeltz está definitivamente envolvida neste caso.";
		mes "Vigiamos você por sua relação com aquele alto oficial de Arunafeltz.";
		mes "Peço desculpas por isso.";
		next;
		mes "[Larjes]";
		mes "Este é um incidente";
		mes "internacional, então para evitar que qualquer coisa vazasse para Arunafeltz.";
		mes "Tivemos que ser muito rígidos para proteger todas as informações sobre esse caso.";
		next;
		mes "[Larjes]";
		mes "Enfim, decidi me revelar para você, já que sou o único que pode ajudar você agora.";
		mes "Está pensando em usar o barco, não está?";
		next;
		mes "[Larjes]";
		mes "Se você não tiver a habilidade, conhecimento e preparação para navegar por essas águas, provavelmente vai afundar com o barco.";
		mes "Conseguiria com sorte, mas... seria sorte demais.";
		next;
		mes "[Larjes]";
		mes "Vou ajudar você a navegar para chegar aonde você deve ir.";
		mes "Mas se falhar, talvez tenha que navegar com este barco sem mim.";
		mes "Então, está pronto para ir?";
		next;
		switch (select("Sim, estou pronto","Dê-me mais um tempo.")) {
			case 1:
			mes "[Larjes]";
			mes "Certo, vamos lá, é melhor se segurar:";
			mes "Esta vai ser uma viagem difícil...";
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
		mes "^3355FFEste é o barco que pode levar você ao monastério.^000000";
		next;
		switch (select("Ir para o Monastério","Cancelar")) {
			case 1:
			mes "^3355FFVocê zarpa em direção ao monastério...^000000";
			close2;
			warp("nameless_i",257,217);
			end;
			case 2:
			mes "^3355FFVocê decide ficar em terra firme.^000000";
			close;
		}
	} else {
		mes "^3355FFEste é o barco que pode levar você ao monastério.^000000";
		next;
		switch (select("Ir para o Monastério","Cancelar")) {
			case 1:
			mes "^3355FFVocê zarpa em direção ao monastério...^000000";
			close2;
			warp("nameless_n",257,217);
			end;
			case 2:
			mes "^3355FFVocê decide ficar em terra firme.^000000";
			close;
		}
	}
}

// ------------------------------------------------------------------
nameless_i,212,184,0	script	Outside Island#Aru	FAKE_NPC,2,3,{
	end;
	OnTouch:
	if (aru_monas == 17) {
		mes "^3355FFA vila está em total silêncio, como se toda a vida a tivesse abandonado.";
		mes "Você olha ao redor e percebe que algo estava aqui há horas atrás, mas foi embora.^000000";
		next;
		mes "^3355FFO que quer que fosse, definitivamente não era humano.";
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
		mes "^3355FFHá traços de humanos por aqui.";
		mes "Juntamente com algum tipo de uma criatura que você não consegue identificar.^000000";
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
		mes "^3355FFÉ apenas um corvo morto.^000000";
		close;
	} else if (aru_monas == 17) {
		mes "^3355FFA visão desse ^32CD32corvo morto^3355FF incomoda você por algum motivo.^000000";
		next;
		if (select("Ignorar","Investigar") == 1) {
			mes "^3355FFVocê decide não tocar na carcaça do animal.^000000";
			close;
		}
		mes "^3355FFVocê nota um pouco de seiva de grama no bico do corvo, então ele devia estar mastigando a grama.";
		mes "Algumas penas e tão faltando, revelando uma pele escamosa como a de uma cobra.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espere...";
		mes "Essa grama...?";
		next;
		mes "^3355FFEssa grama deve ser o ingrediente principal do veneno usado para matar os príncipes da família Gaebolg.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Parece que tirei a sorte grande.";
		mes "Hã? Tem alguém atrás...";
		next;
		mes "^3355FFUma dor forte e aguda atinge sua nuca, enquanto você cai inconsciente...^000000";
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
		mes "^3355FFA pressão no seu estômago e o sangue correndo para sua cabeça indicam que alguém está carregando você sobre os ombros.";
		mes "Ele para e você ouve uma voz fraca.^000000";
		next;
		mes "^3355FFA voz fraca vai ficando mais forte e mais distinta...";
		mes "Alguém está chamando seu nome.";
		mes "Você sente a água fria correr por seus lábios, e então você recupera os sentidos.^000000";
		next;
		sc_end(SC_BLIND);
		hideoffnpc("Larjes#Monastery");
		next;
		mes "Essa foi por pouco...";
		mes "Por um instante,";
		mes "Pensei ter perdido você.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Larjes...? O que...";
		mes "O que aconteceu?";
		mes "Ai, minha cabeça...";
		next;
		mes "[Larjes]";
		mes "Tente não se mexer por enquanto.";
		mes "Tive uma sensação ruim enquanto esperava por você no barco.";
		mes "Foi sorte sua.";
		mes "Quando encontrei você, aquelas criaturas estranhas estavam atacando você!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você me salvou?";
		mes "Obrigado.";
		mes "Você por acaso sabe que criaturas eram aquelas?";
		next;
		mes "[Larjes]";
		mes "Não tenho idéia. Pareciam Homens, mas...";
		mes "Não eram, definitivamente.";
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
		mes "Elas... Não são...?";
		next;
		mes "[Larjes]";
		mes "Elas se parecem com as criaturas que levaram você, mas...";
		mes "Por que será que não nos atacaram?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Acho que teremos de ir até lá perguntar.";
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
		mes "Então...";
		mes "Essa é a verdadeira natureza da ilha.";
		next;
		mes "[Larjes]";
		mes "Alguém como eu não sobrevive em um lugar como este.";
		mes "Vou esperar por você no barco.";
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
		mes "No momento, você está carregando muitas coisas com você.";
		mes "Volte depois de usar os Serviços Kafra para armazenar alguns dos seus itens.^000000";
		close;
	} else if (aru_monas < 21) {
		mes "^3355FFÉ apenas uma pilha de livros velhos e mofados.^000000";
		close;
	} else if (aru_monas == 21) {
		mes "^3355FFHá um livro manchado com sangue entre tudos estes livros velhos, mofados.^000000";
		next;
		if (select("Examinar o Livro","Ignorar")==1) {
			aru_monas = 22;
			changequest(17014,17015);
			getitem(Research_Note,1);
			readbook(Research_Note,1);
			close;
		}
		mes "^3355FFAquele livro devia ser inútil mesmo.^000000";
		close;
	} else {
		mes "^3355FFHá vários livros velhos espalhados por aqui.^000000";
		close;
	}
}

// ------------------------------------------------------------------
abbey03,232,233,4	script	Homem#King	4_M_TRISTAN,{
	if (aru_monas < 22) {
		mes "^3355FFVocê encontra um homem deitado no chão, vestindo roupas rotas, mas luxuosas.";
		mes "Ele parece não estar respirando...^000000";
		next;
		mes "^3355FFEle está morto.^000000";
		close;
	} else if (aru_monas == 22 || aru_monas == 23) {
		mes "^3355FFVocê encontra um homem deitado no chão, vestindo roupas rotas, mas luxuosas.";
		mes "Ele parece não estar respirando...^000000";
		next;
		mes "^3355FFVocê leva o ouvido mais perto da boca dele:";
		mes "Parece que ele ainda respira, mas está quase morto.^000000";
		next;
		if (select("Toque-o","Ignore-o") == 1) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Este homem...";
			mes "Ele parece familiar, por algum motivo.";
			next;
			mes "^3355FFQuando você toca nele, o homem se levanta de repente, com um gemido alucinado.^000000";
			aru_monas = 23;
			monster("abbey03",232,232,"Tristan III",TRISTAN_3RD,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
			initnpctimer;
			hideonnpc(strnpcinfo(NPC_NAME));
			close;
		}
		mes "^3355FFVocê não se sente à vontade para tocar neste homem.^000000";
		close;
	} else {
		mes "^3355FFEle está morto... Agora.^000000";
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
			mes "No momento, você está carregando muitas coisas com você.";
			mes "Volte depois de usar os Serviços Kafra para armazenar alguns dos seus itens.^000000";
			close;
		}
		mes "^3355FFVocê não faz idéia por que esse homem morto está andando por aí, então decide examiná-lo.";
		mes "Em sua casaca você encontra uma medalha brilhante...^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Essa medalha...";
		mes "Isso significa que este homem é...!";
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
			mes "Que bom, você voltou.";
			mes "Sei que ainda há coisas nesta ilha que você quer investigar.";
			mes "Mas quer deixar este lugar por algum tempo?";
			next;
			switch (select("Sim","Não")) {
				case 1:
				mes "[Larjes]";
				mes "Certo, vamos lá.";
				close2;
				warp("ve_fild07",130,130);
				end;
				case 2:
				mes "[Larjes]";
				mes "Certo, mas tenha cuidado.";
				mes "As criatura quase pegaram você uma vez.";
				close;
			}
		} else {
			mes "[Larjes]";
			mes "Eu não acredito...";
			mes "Aquele cara era Tristan III?!";
			mes "Isso explica muita coisa, então.";
			mes "Vou relatar isso, junto com os autos.";
			mes "Então Arunafeltz estava por trás da grama venenosa também...";
			next;
			mes "[Larjes]";
			mes "Estou chocado com tudo isso.";
			mes "Tenho certeza que a família real de Rune-Midgard vai ficar louca com tudo isso.";
			mes "E pensar que nos envolvemos em algo tão grande...";
			next;
			mes "[Larjes]";
			mes "Enfim, é melhor eu ir";
			mes "andando... Isso é enorme!";
			delitem(Token_Of_King, 1);
			aru_monas = 25;
			changequest(17016,17017);
			getexp(1000000,0);
			close;
		}
	}
	mes "[Larjes]";
	mes "Você ainda quer investigar a ilha?";
	next;
	switch (select("Não","Sim")) {
		case 1:
		mes "[Larjes]";
		mes "Certo, vamos lá.";
		close2;
		warp("ve_fild07",130,130);
		end;
		case 2:
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram você uma vez.";
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
	mes "^3355FFEssa porta não abre, você não pode passar por ela.^000000";
	close;
}

// ------------------------------------------------------------------
nameless_i,259,218,3	script	Larjes#Aru	4W_M_01,{
	if (aru_monas < 18) {
		mes "[Larjes]";
		mes "Não gosto deste lugar...";
		mes "É melhor você tomar cuidado com essas criaturas estranhas andando por aí.";
		close;
	} else if (aru_monas < 24) {
		mes "[Larjes]";
		mes "Que bom, você voltou.";
		mes "Sei que ainda há coisas nesta ilha que você quer investigar.";
		mes "Mas quer deixar este lugar por algum tempo?";
		next;
		if (select("Sim","Não") == 1) {
			mes "[Larjes]";
			mes "Certo, vamos lá.";
			close2;
			warp("ve_fild07",130,130);
			end;
		}
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram você uma vez.";
		close;
	} else {
		mes "[Larjes]";
		mes "Você ainda quer investigar a ilha?";
		next;
		if (select("Não","Sim") == 1) {
			mes "[Larjes]";
			mes "Certo, vamos lá.";
			close2;
			warp("ve_fild07",130,130);
			end;
		}
		mes "[Larjes]";
		mes "Certo, mas tenha cuidado.";
		mes "As criatura quase pegaram você uma vez.";
		close;
	}
}

// ------------------------------------------------------------------
nameless_n,145,162,0	script	AideAmi#Aru	HIDDEN_WARP_NPC,2,2,{
	end;
	OnTouch:
	if (aru_monas == 26) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Há uma parede baixa aqui contra a outra parede, se eu escalo isto, eu poderia chegar ao lugar de descanso do Tristan III...";
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
