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
| - Nota: Npcs comuns na cidade Izlude                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
izlude,55,74,2	script	Paula#izl	4_F_01,{
	mes("[Paula]\n Saudações!\n Izlude recebe vocês.");
	next;
	mes("[Paula]\n Izlude é uma cidade satélite de Prontera, capital do Reino de Rune-Midgart.");
	next;
	mes("[Paula]\n Izlude é fundamental para nosso reino pois a 'Associação dos Espadachim' é sediada aqui.\n Bem como o fato de Izlude proteger a costa de Rune-Midgard.");
	next;
	mes("[Paula]\n Eu sei, esta ponte parece velha e frágil.\n Mas é realmente uma arte, construída com a mais avançada tecnologia.");
	next;
	mes("[Paula]\n Não se preocupe com tempestades fortes, ou quantas pessoas ela aguenta, esta ponte nunca cairá.");
	next;
	mes("[Paula]\n Por favor, aproveite sua estadia aqui em Izlude.");
	close;
}

// ------------------------------------------------------------------
izlude,135,78,2	script	Charfri#izl	4_F_02,{
	switch(rand(2)) {
		case 1:
		mes("[Charfri]\n Muitas pessoas acham que Izlude é apenas uma cidade satélite de Prontera, e não é tão importante...");
		next;
		mes("[Charfri]\n Mas Izlude é uma bela cidade litorãnea, assim como a linda Ilha Bylan.");
		next;
		mes("[Charfri]\n Você terá de embarcar em um navio no porto para chegar à Ilha Byalan.\n Existem perigosas cavernas naquela ilha, então tome cuidado por onde anda.");
		close;
		case 2:
		mes("[Charfri]\n Embora seja muito bonita, a Ilha Byalan tem uma misteriosa caverna profunda que se estende sob o mar.");
		next;
		mes("[Charfri]\n Pessoas que visitaram recentemente disseram que se você descer até uma certa profundidade.\n A caverna fica realmente sub-aquática.");
		next;
		mes("[Charfri]\n Surpeendentemente, quando você chegar lá, poderá respirar como um peixe.\n Talvez algum tipo de força sobrenatural exista por lá.");
		next;
		mes("[Charfri]\n Ah...\n As pessoas que foram até lá dizem que continuar sonhando com o local até os dias de hoje.");
		next;
		mes("[Charfri]\n Mas infelizmente, os monstros são muito fortes para pessoas comuns irem até lá.\n Ainda assim, apenas uma vez, eu gostaria de ir até lá...");
		close;
	}
}

// ------------------------------------------------------------------
izlude,119,121,2	script	Cuskoal#izl	4_F_TELEPORTER,{
	switch(rand(2)) {
		case 1:
		mes("[Cuskoal]\n Esta arena é O lugar para jovens habilidosos de todo reino de Rune-Midgart se enfrentarem e testar suas habilidades.");
		next;
		mes("[Cuskoal]\n Você pode duelar com monstros de diferentes leveis.\n Então, quanto mais estágios você sobreviver é a prova do quão forte você é.");
		next;
		mes("[Cuskoal]\n Então, o que você me diz?");
		close;
		case 2:
		mes("[Cuskoal]\n Os bares de Prontera estão sempre cheios de pessoas de áreas locais e forasteiros.\n Pode ficar muito ocupado.");
		next;
		mes("[Cuskoal]\n É um bom lugar para se conseguir informações e escutar rumores.");
		next;
		mes("[Cuskoal]\n Então, se você ouvir atentamente, com alguma sorte você pode ouvir coisas úteis para você.");
		close;
	}
}

// ------------------------------------------------------------------
izlude,150,118,2	script	Dega#izl	4_M_02,{
	switch(rand(3)) {
		case 1:
		mes("[Dega]\n Monte Mjornir, fica ao norte de Prontera, é de difícil acesso, com uma subida íngrime.");
		next;
		mes("[Dega]\n Fora os perigos próprios da montanha, insetos insanos vivem por lá.\n Ou seja, eles te atacam sem motivo algum.");
		next;
		mes("[Dega]\n Se você quiser visitar os arredores além do Monte Mjolnir, se prepare para o desafio.\n Ou você pode dar a volta nele.");
		close;
		case 2:
		mes("[Dega]\n Alguns monstros no mundo, tem a capacidade de sentir energia mística.\n Podem detectar magias antes de serem conjuradas.");
		next;
		mes("[Dega]\n Golem do deserto é um deles.\n Não o subestime devido a sua lentidão...");
		next;
		mes("[Dega]\n Se você tentar conjurar uma magia próximo a ele, ele irá detectar e vai saltar sobre você para te esmagar.\n Então é melhor você tomar cuidado com o Golem.");
		close;
		case 3:
		mes("[Dega]\n Tem um lugar muito agradável onde se pode encontrar todos os tipos de Poring.");
		next;
		mes("[Dega]\n Fica em algum lugar próximo a ponte que liga a floresta e o deserto...\n A caminho da cidade de Payon que fica ao sudeste daqui.");
		next;
		mes("[Dega]\n Não tem só Porings rosa mas também Drops, que podem ser encontrados no deserto, e os Poporing Verdes.");
		next;
		mes("[Dega]\n Mas cuidado, antes de você fazer isso, você pode ficar cara a cara com um Ghostring.\n Um Poring mortal que flutua pelo ar como um fantasma.");
		next;
		mes("[Dega]\n Bem, é claro, eles são todos muito bonitinhos, mas o Ghostring é uma exceção.\n É muito perigoso.");
		next;
		mes("[Dega]\n Se você tiver sorte, pode até deparar-se com um Angelring, o Poring com asas de anjo.");
		next;
		while(true) {
			switch(select("Ghostring?", "Angelring?", "Finalizar Conversa")) {
				case 1:
				mes("[Dega]\n Ghostring é um Poring cizento que flutua pelo ar como um fantasma.\n Assim como outros fantasmas, ataques físicos não podem afeta-lo.");
				next;
				mes("[Dega]\n Aqueles que têm ataques físicos como principal forma de ataque como os Espadachins tem que correr para salvar suas vidas quando avistam um Ghostring.");
				next;
				mes("[Dega]\n Mas não desista ainda!\n Existe uma ótima notícia para estas classes.\n Fazer uma arma de alguma propriedade elemental é a chave.");
				next;
				mes("[Dega]\n Assim, mesmo um Espadachim ou Arqueiro pode causar dano, do mesmo jeito que a Mágica faz, em Ghostrings.");
				next;
				break;
				case 2:
				mes("[Dega]\n Angelrings são imunes a ataques mágicos.\n Se uma pessoa que só possui ataques mágicos avistar um  Angelring, então ela tem que correr.");
				next;
				mes("[Dega]\n Se você tem uma faca ou espada extra, você poderia tentar.\n Mas seria muito difícil sozinho, não acha...?");
				next;
				break;
				case 3:
				mes("[Dega]\n Boa Sorte.");
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
izlude,150,143,2	script	Kylick#izl	4W_M_01,{
	mes("[Kylick]\n Eu estava pensando, apesar de o povo de Izlude viver tão perto do oceano...");
	next;
	mes("[Kylick]\n Existem outras culturas que têm completamente se desenvolvido sem a vida no mar.\n Claro, estou falando de Amatsu.");
	next;
	mes("[Kylick]\n Eu ouvi dizer que as comidas de lá são muito boas!\n Embora a ideia de comer peixe cru seja nova para mim, eu adoraria ir para lá, para experimentar só uma vez!");
	close;
}

// ------------------------------------------------------------------
izlude,56,126,2	script	Dan#izl	4_M_03,{
	mes("[Dan]\n A única habilidade necessária a um Espadachim é o ^FF2400Golpe Fulminante^000000!\n Golpe Fulminante, Golpe Fulminante e SÓ ^FF2400Golpe Fulminante^000000!\n Não perca tempo aprimorando outras habilidades insignificantes!\n O resto é para fracos e covardes!");
	next;
	mes("[Rami]\n O que você está falando!?\n O verdadeiro espadachim resolve tudo sozinho.\n Quando esta cercado por inúmeros inimigos quebra todos eles com um incrível ataque.");
	next;
	mes("[Rami]\n ^EE0000IMPACTO EXPLOSIVO!^000000\n Certamente, o Impacto Explosivo é uma habilidade que faz o trabalho certo!!");
	next;
	mes("[Rami]\n Bem, algumas vezes o dano da explosão pode atingir acidentalmente os monstros errados.\n Quando atingidos, vão querer lhe atacar.\n Mas isso é somente um risco que um Espadachim deve correr!!");
	next;
	mes("[Dan]\n E por isso que você é burro, um idiota!\n E o que é 'o Espadachim Ideal?'\n Eu me lembro da última vez que você usou o Impacto Explosivo...");
	next;
	mes("[Dan]\n Você fugiu de todos os monstros que você bateu com a habilidade estúpida!\n Frouxo!\n Todos aqueles Porings a sua volta que foram atingidos querendo te matar..");
	next;
	mes("[Rami]\n Se me lembro bem, você estava correndo também...\n Aparentemente muito ocupado para usar seu precisoso Golpe Fulminante.\n Em todo caso, Impacto Explosivo é A habilidade de um Espadachim!!");
	next;
	mes("[Rami]\n Algo simples como Golpe Fulminante é só um dos pequenos passos para o Impacto Explosivo.");
	next;
	mes("[Dan]\n Ei, eu sei que você ouviu tudo.\n O que você acha?");
	next;
	mes("[Dan]\n O que você acha melhor?\n Uma habilidade de dano crítico, ^FF2400Golpe Fulminante^000000.\n Ou uma de dano em área, ^EE0000Impacto Explosivo^000000?");
	next;
	if (select("Golpe Fulminante", "Impacto Explosivo") == 1)  {
		mes("[Red]\n Hahahaha!!!\n Sabia que você pensa como eu!!\n Sem dúvida, só o ^FF2400Golpe Fulminante^000000 realiza um Espadachim.\n Por favor diga isso para esse outro aqui Hahaha!");
		close;
	}
	mes("[Rami]\n Certo?!\n ^EE0000Impacto Explosivo^000000!!!\n Você sabe do que está falando, né?\n Eu não sei porque você é tãoooo teimoso.");
	close;
}
izlude,58,126,2	duplicate(Dan#izl)	Rami#izl	4W_M_02

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
izlude_in,125,164,2	script	Aaron#izl	1_M_YOUNGKNIGHT,{
	mes("[Aaron]\n Não acha que Força, VIT e treinar um método unico de respirar que permite uma rápida recuperação de HP são as maiores vantagens de um Espadachim?");
	next;
	mes("[Aaron]\n Se você treinar suas habilidades, você pode ver seu HP recuperando.\n A quantidade de recuperação depende da vitalidade, ou VIT.");
	next;
	mes("[Aaron]\n Então quando mais pontos você colocar de VIT, você poderá recuperar mais HP quando em repouso.");
	next;
	mes("[Aaron]\n Mas, evidentemente, que seria bom ter Ataque alto, não é?\n Você pode adquirir uma boa arma ou aumentar sua FOR para fortalecer o ataque.");
	next;
	mes("[Aaron]\n De qualquer maneira você sabe que vai precisar de muita força para manusear equipamentos de qualidade facilmente.");
	next;
	mes("[Aaron]\n Outra coisa importante é a forma como vai acertar seus oponentes.\n DES é a chave.\n Se você aumentar a DES, então a diferença entre o dano MIN e o MAX irá diminuir.");
	next;
	mes("[Aaron]\n Hm...\n Você está entediado por toda esta conversa?\n Ou você quer que eu continue?");
	next;
	if (select("Conte-me mais", "Finalizar conversa") == 1) {
		mes("[Aaron]\n Hmm...\n Nesse caso, eu vou falar um pouco sobre os outros atributos.\n A fim de atacar e fugir rapidamente, você tem que treinar a AGI.");
		next;
		mes("[Aaron]\n No caso de querer mais ataques críticos, você deve investir em SOR.\n INT vai aumentar o SP, que é necessário para utilizar a maioria das habilidades...\n Isto é tudo.");
		close;
	}
	mes("[Aaron]\n Tudo bem, até logo.");
	close;
}
