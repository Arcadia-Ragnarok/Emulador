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
| - Nota: Npcs comuns na cidade Izlude                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
izlude,55,74,2	script	Paula#izl	4_F_01,{
	mes("[Paula]\n Sauda��es!\n Izlude recebe voc�s.");
	next;
	mes("[Paula]\n Izlude � uma cidade sat�lite de Prontera, capital do Reino de Rune-Midgart.");
	next;
	mes("[Paula]\n Izlude � fundamental para nosso reino pois a 'Associa��o dos Espadachim' � sediada aqui.\n Bem como o fato de Izlude proteger a costa de Rune-Midgard.");
	next;
	mes("[Paula]\n Eu sei, esta ponte parece velha e fr�gil.\n Mas � realmente uma arte, constru�da com a mais avan�ada tecnologia.");
	next;
	mes("[Paula]\n N�o se preocupe com tempestades fortes, ou quantas pessoas ela aguenta, esta ponte nunca cair�.");
	next;
	mes("[Paula]\n Por favor, aproveite sua estadia aqui em Izlude.");
	close;
}

// ------------------------------------------------------------------
izlude,135,78,2	script	Charfri#izl	4_F_02,{
	switch(rand(2)) {
		case 1:
		mes("[Charfri]\n Muitas pessoas acham que Izlude � apenas uma cidade sat�lite de Prontera, e n�o � t�o importante...");
		next;
		mes("[Charfri]\n Mas Izlude � uma bela cidade litor�nea, assim como a linda Ilha Bylan.");
		next;
		mes("[Charfri]\n Voc� ter� de embarcar em um navio no porto para chegar � Ilha Byalan.\n Existem perigosas cavernas naquela ilha, ent�o tome cuidado por onde anda.");
		close;
		case 2:
		mes("[Charfri]\n Embora seja muito bonita, a Ilha Byalan tem uma misteriosa caverna profunda que se estende sob o mar.");
		next;
		mes("[Charfri]\n Pessoas que visitaram recentemente disseram que se voc� descer at� uma certa profundidade.\n A caverna fica realmente sub-aqu�tica.");
		next;
		mes("[Charfri]\n Surpeendentemente, quando voc� chegar l�, poder� respirar como um peixe.\n Talvez algum tipo de for�a sobrenatural exista por l�.");
		next;
		mes("[Charfri]\n Ah...\n As pessoas que foram at� l� dizem que continuar sonhando com o local at� os dias de hoje.");
		next;
		mes("[Charfri]\n Mas infelizmente, os monstros s�o muito fortes para pessoas comuns irem at� l�.\n Ainda assim, apenas uma vez, eu gostaria de ir at� l�...");
		close;
	}
}

// ------------------------------------------------------------------
izlude,119,121,2	script	Cuskoal#izl	4_F_TELEPORTER,{
	switch(rand(2)) {
		case 1:
		mes("[Cuskoal]\n Esta arena � O lugar para jovens habilidosos de todo reino de Rune-Midgart se enfrentarem e testar suas habilidades.");
		next;
		mes("[Cuskoal]\n Voc� pode duelar com monstros de diferentes leveis.\n Ent�o, quanto mais est�gios voc� sobreviver � a prova do qu�o forte voc� �.");
		next;
		mes("[Cuskoal]\n Ent�o, o que voc� me diz?");
		close;
		case 2:
		mes("[Cuskoal]\n Os bares de Prontera est�o sempre cheios de pessoas de �reas locais e forasteiros.\n Pode ficar muito ocupado.");
		next;
		mes("[Cuskoal]\n � um bom lugar para se conseguir informa��es e escutar rumores.");
		next;
		mes("[Cuskoal]\n Ent�o, se voc� ouvir atentamente, com alguma sorte voc� pode ouvir coisas �teis para voc�.");
		close;
	}
}

// ------------------------------------------------------------------
izlude,150,118,2	script	Dega#izl	4_M_02,{
	switch(rand(3)) {
		case 1:
		mes("[Dega]\n Monte Mjornir, fica ao norte de Prontera, � de dif�cil acesso, com uma subida �ngrime.");
		next;
		mes("[Dega]\n Fora os perigos pr�prios da montanha, insetos insanos vivem por l�.\n Ou seja, eles te atacam sem motivo algum.");
		next;
		mes("[Dega]\n Se voc� quiser visitar os arredores al�m do Monte Mjolnir, se prepare para o desafio.\n Ou voc� pode dar a volta nele.");
		close;
		case 2:
		mes("[Dega]\n Alguns monstros no mundo, tem a capacidade de sentir energia m�stica.\n Podem detectar magias antes de serem conjuradas.");
		next;
		mes("[Dega]\n Golem do deserto � um deles.\n N�o o subestime devido a sua lentid�o...");
		next;
		mes("[Dega]\n Se voc� tentar conjurar uma magia pr�ximo a ele, ele ir� detectar e vai saltar sobre voc� para te esmagar.\n Ent�o � melhor voc� tomar cuidado com o Golem.");
		close;
		case 3:
		mes("[Dega]\n Tem um lugar muito agrad�vel onde se pode encontrar todos os tipos de Poring.");
		next;
		mes("[Dega]\n Fica em algum lugar pr�ximo a ponte que liga a floresta e o deserto...\n A caminho da cidade de Payon que fica ao sudeste daqui.");
		next;
		mes("[Dega]\n N�o tem s� Porings rosa mas tamb�m Drops, que podem ser encontrados no deserto, e os Poporing Verdes.");
		next;
		mes("[Dega]\n Mas cuidado, antes de voc� fazer isso, voc� pode ficar cara a cara com um Ghostring.\n Um Poring mortal que flutua pelo ar como um fantasma.");
		next;
		mes("[Dega]\n Bem, � claro, eles s�o todos muito bonitinhos, mas o Ghostring � uma exce��o.\n � muito perigoso.");
		next;
		mes("[Dega]\n Se voc� tiver sorte, pode at� deparar-se com um Angelring, o Poring com asas de anjo.");
		next;
		while(true) {
			switch(select("Ghostring?", "Angelring?", "Finalizar Conversa")) {
				case 1:
				mes("[Dega]\n Ghostring � um Poring cizento que flutua pelo ar como um fantasma.\n Assim como outros fantasmas, ataques f�sicos n�o podem afeta-lo.");
				next;
				mes("[Dega]\n Aqueles que t�m ataques f�sicos como principal forma de ataque como os Espadachins tem que correr para salvar suas vidas quando avistam um Ghostring.");
				next;
				mes("[Dega]\n Mas n�o desista ainda!\n Existe uma �tima not�cia para estas classes.\n Fazer uma arma de alguma propriedade elemental � a chave.");
				next;
				mes("[Dega]\n Assim, mesmo um Espadachim ou Arqueiro pode causar dano, do mesmo jeito que a M�gica faz, em Ghostrings.");
				next;
				break;
				case 2:
				mes("[Dega]\n Angelrings s�o imunes a ataques m�gicos.\n Se uma pessoa que s� possui ataques m�gicos avistar um  Angelring, ent�o ela tem que correr.");
				next;
				mes("[Dega]\n Se voc� tem uma faca ou espada extra, voc� poderia tentar.\n Mas seria muito dif�cil sozinho, n�o acha...?");
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
	mes("[Kylick]\n Eu estava pensando, apesar de o povo de Izlude viver t�o perto do oceano...");
	next;
	mes("[Kylick]\n Existem outras culturas que t�m completamente se desenvolvido sem a vida no mar.\n Claro, estou falando de Amatsu.");
	next;
	mes("[Kylick]\n Eu ouvi dizer que as comidas de l� s�o muito boas!\n Embora a ideia de comer peixe cru seja nova para mim, eu adoraria ir para l�, para experimentar s� uma vez!");
	close;
}

// ------------------------------------------------------------------
izlude,56,126,2	script	Dan#izl	4_M_03,{
	mes("[Dan]\n A �nica habilidade necess�ria a um Espadachim � o ^FF2400Golpe Fulminante^000000!\n Golpe Fulminante, Golpe Fulminante e S� ^FF2400Golpe Fulminante^000000!\n N�o perca tempo aprimorando outras habilidades insignificantes!\n O resto � para fracos e covardes!");
	next;
	mes("[Rami]\n O que voc� est� falando!?\n O verdadeiro espadachim resolve tudo sozinho.\n Quando esta cercado por in�meros inimigos quebra todos eles com um incr�vel ataque.");
	next;
	mes("[Rami]\n ^EE0000IMPACTO EXPLOSIVO!^000000\n Certamente, o Impacto Explosivo � uma habilidade que faz o trabalho certo!!");
	next;
	mes("[Rami]\n Bem, algumas vezes o dano da explos�o pode atingir acidentalmente os monstros errados.\n Quando atingidos, v�o querer lhe atacar.\n Mas isso � somente um risco que um Espadachim deve correr!!");
	next;
	mes("[Dan]\n E por isso que voc� � burro, um idiota!\n E o que � 'o Espadachim Ideal?'\n Eu me lembro da �ltima vez que voc� usou o Impacto Explosivo...");
	next;
	mes("[Dan]\n Voc� fugiu de todos os monstros que voc� bateu com a habilidade est�pida!\n Frouxo!\n Todos aqueles Porings a sua volta que foram atingidos querendo te matar..");
	next;
	mes("[Rami]\n Se me lembro bem, voc� estava correndo tamb�m...\n Aparentemente muito ocupado para usar seu precisoso Golpe Fulminante.\n Em todo caso, Impacto Explosivo � A habilidade de um Espadachim!!");
	next;
	mes("[Rami]\n Algo simples como Golpe Fulminante � s� um dos pequenos passos para o Impacto Explosivo.");
	next;
	mes("[Dan]\n Ei, eu sei que voc� ouviu tudo.\n O que voc� acha?");
	next;
	mes("[Dan]\n O que voc� acha melhor?\n Uma habilidade de dano cr�tico, ^FF2400Golpe Fulminante^000000.\n Ou uma de dano em �rea, ^EE0000Impacto Explosivo^000000?");
	next;
	if (select("Golpe Fulminante", "Impacto Explosivo") == 1)  {
		mes("[Red]\n Hahahaha!!!\n Sabia que voc� pensa como eu!!\n Sem d�vida, s� o ^FF2400Golpe Fulminante^000000 realiza um Espadachim.\n Por favor diga isso para esse outro aqui Hahaha!");
		close;
	}
	mes("[Rami]\n Certo?!\n ^EE0000Impacto Explosivo^000000!!!\n Voc� sabe do que est� falando, n�?\n Eu n�o sei porque voc� � t�oooo teimoso.");
	close;
}
izlude,58,126,2	duplicate(Dan#izl)	Rami#izl	4W_M_02

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
izlude_in,125,164,2	script	Aaron#izl	1_M_YOUNGKNIGHT,{
	mes("[Aaron]\n N�o acha que For�a, VIT e treinar um m�todo unico de respirar que permite uma r�pida recupera��o de HP s�o as maiores vantagens de um Espadachim?");
	next;
	mes("[Aaron]\n Se voc� treinar suas habilidades, voc� pode ver seu HP recuperando.\n A quantidade de recupera��o depende da vitalidade, ou VIT.");
	next;
	mes("[Aaron]\n Ent�o quando mais pontos voc� colocar de VIT, voc� poder� recuperar mais HP quando em repouso.");
	next;
	mes("[Aaron]\n Mas, evidentemente, que seria bom ter Ataque alto, n�o �?\n Voc� pode adquirir uma boa arma ou aumentar sua FOR para fortalecer o ataque.");
	next;
	mes("[Aaron]\n De qualquer maneira voc� sabe que vai precisar de muita for�a para manusear equipamentos de qualidade facilmente.");
	next;
	mes("[Aaron]\n Outra coisa importante � a forma como vai acertar seus oponentes.\n DES � a chave.\n Se voc� aumentar a DES, ent�o a diferen�a entre o dano MIN e o MAX ir� diminuir.");
	next;
	mes("[Aaron]\n Hm...\n Voc� est� entediado por toda esta conversa?\n Ou voc� quer que eu continue?");
	next;
	if (select("Conte-me mais", "Finalizar conversa") == 1) {
		mes("[Aaron]\n Hmm...\n Nesse caso, eu vou falar um pouco sobre os outros atributos.\n A fim de atacar e fugir rapidamente, voc� tem que treinar a AGI.");
		next;
		mes("[Aaron]\n No caso de querer mais ataques cr�ticos, voc� deve investir em SOR.\n INT vai aumentar o SP, que � necess�rio para utilizar a maioria das habilidades...\n Isto � tudo.");
		close;
	}
	mes("[Aaron]\n Tudo bem, at� logo.");
	close;
}
