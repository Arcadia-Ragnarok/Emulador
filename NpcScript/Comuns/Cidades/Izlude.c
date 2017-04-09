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
| - Nota: Npcs comuns na cidade Izlude                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
izlude,55,74,2	script	Bonne#izl	4_F_01,{
	mes "[Bonne]";
	mes "Sauda��es!";
	mes "Izlude recebe voc�s.";
	next;
	mes "[Bonne]";
	mes "Izlude � uma cidade sat�lite de Prontera, capital do Reino de Rune-Midgart.";
	next;
	mes "[Bonne]";
	mes "Izlude � fundamental para nosso reino pois a 'Associa��o dos Espadachim' � sediada aqui.";
	mes "Bem como o fato de Izlude proteger a costa de Rune-Midgard .";
	next;
	mes "[Bonne]";
	mes "Eu sei, esta ponte parece velha e fr�gil.";
	mes "Mas � realmente uma arte, constru�da com a mais avan�ada tecnologia.";
	next;
	mes "[Bonne]";
	mes "N�o se preocupe com tempestades fortes, ou quantas pessoas ela aguenta, esta ponte nunca cair�.";
	next;
	mes "[Bonne]";
	mes "Por favor, aproveite sua estadia aqui em Izlude.";
	close;
}

// ------------------------------------------------------------------
izlude,135,78,2	script	Charfri#izl	4_F_02,{
	mes "[Charfri]";
	switch(rand(2)) {
		case 1:
		mes "Muitas pessoas acham que Izlude � apenas uma cidade sat�lite de Prontera, e n�o � t�o importante...";
		next;
		mes "[Charfri]";
		mes "Mas Izlude � uma bela cidade litor�nea, assim como a linda Ilha Bylan.";
		next;
		mes "[Charfri]";
		mes "Voc� ter� de embarcar em um navio no porto para chegar � Ilha Byalan.";
		mes "Existem perigosas cavernas naquela ilha, ent�o tome cuidado por onde anda.";
		close;
		case 2:
		mes "Embora seja muito bonita, a Ilha Byalan tem uma misteriosa caverna profunda que se estende sob o mar.";
		next;
		mes "[Charfri]";
		mes "Pessoas que visitaram recentemente disseram que se voc� descer at� uma certa profundidade.";
		mes "A caverna fica realmente sub-aqu�tica.";
		next;
		mes "[Charfri]";
		mes "Surpeendentemente, quando voc� chegar l�, poder� respirar como um peixe.";
		mes "Talvez algum tipo de for�a sobrenatural exista por l�.";
		next;
		mes "[Charfri]";
		mes "Ah...";
		mes "As pessoas que foram at� l� dizem que continuar sonhando com o local at� os dias de hoje.";
		next;
		mes "[Charfri]";
		mes "Mas infelizmente, os monstros s�o muito fortes para pessoas comuns irem at� l�.";
		mes "Ainda assim, apenas uma vez, eu gostaria de ir at� l�...";
		close;
	}
}

// ------------------------------------------------------------------
izlude,119,121,2	script	Cuskoal#izl	4_F_TELEPORTER,{
	mes "[Cuskoal]";
	switch(rand(2)) {
		case 1:
		mes "Esta arena � O lugar para jovens habilidosos de todo reino de Rune-Midgart se enfrentarem e testar suas habilidades.";
		next;
		mes "[Cuskoal]";
		mes "Voc� pode duelar com monstros de diferentes leveis.";
		mes "Ent�o, quanto mais est�gios voc� sobreviver � a prova do qu�o forte voc� �.";
		next;
		mes "[Cuskoal]";
		mes "Ent�o, o que voc� me diz?";
		close;
		case 2:
		mes "Os bares de Prontera est�o sempre cheios de pessoas de �reas locais e forasteiros.";
		mes "Pode ficar muito ocupado.";
		next;
		mes "[Cuskoal]";
		mes "� um bom lugar para se conseguir informa��es e escutar rumores.";
		next;
		mes "[Cuskoal]";
		mes "Ent�o, se voc� ouvir atentamente, com alguma sorte voc� pode ouvir coisas �teis para voc�.";
		close;
	}
}

// ------------------------------------------------------------------
izlude,150,118,2	script	Dega#izl	4_M_02,{
	mes "[Dega]";
	switch(rand(3)) {
		case 1:
		mes "Monte Mjornir, fica ao norte de Prontera, � de dif�cil";
		mes "acesso, com uma subida �ngrime.";
		next;
		mes "[Dega]";
		mes "Fora os perigos pr�prios da montanha, insetos insanos vivem por l�.";
		mes "Ou seja, eles te atacam sem motivo algum.";
		next;
		mes "[Dega]";
		mes "Se voc� quiser visitar os arredores al�m do Monte Mjolnir, se prepare para o desafio.";
		mes "Ou voc� pode dar a volta nele.";
		close;
		case 2:
		mes "Alguns monstros no mundo, tem a capacidade de sentir energia m�stica.";
		mes "Podem detectar magias antes de serem conjuradas.";
		next;
		mes "[Dega]";
		mes "Golem do deserto � um deles.";
		mes "N�o o subestime devido a sua lentid�o...";
		next;
		mes "[Dega]";
		mes "Se voc� tentar conjurar uma magia pr�ximo a ele, ele ir� detectar e vai saltar sobre voc� para te esmagar.";
		mes "Ent�o � melhor voc� tomar cuidado com o Golem.";
		close;
		case 3:
		mes "Tem um lugar muito agrad�vel onde se pode encontrar todos os tipos de Poring.";
		next;
		mes "[Dega]";
		mes "Fica em algum lugar pr�ximo a ponte que liga a floresta e o deserto...";
		mes "A caminho da cidade de Payon que fica ao sudeste daqui.";
		next;
		mes "[Dega]";
		mes "N�o tem s� Porings rosa mas tamb�m Drops, que podem ser encontrados no deserto, e os Poporing Verdes.";
		next;
		mes "[Dega]";
		mes "Mas cuidado, antes de voc� fazer isso, voc� pode ficar cara a cara com um Ghostring.";
		mes "Um Poring mortal que flutua pelo ar como um fantasma.";
		next;
		mes "[Dega]";
		mes "Bem, � claro, eles s�o todos muito bonitinhos, mas o Ghostring � uma exce��o.";
		mes "� muito perigoso.";
		next;
		mes "[Dega]";
		mes "Se voc� tiver sorte, pode at� deparar-se com um Angelring, o Poring com asas de anjo.";
		next;
		while(1) {
			switch(select("Ghostring?","Angelring?","Finalizar Conversa.")) {
				case 1:
				mes "[Dega]";
				mes "Ghostring � um Poring cizento que flutua pelo ar como um fantasma.";
				mes "Assim como outros fantasmas, ataques f�sicos n�o podem afeta-lo.";
				next;
				mes "[Dega]";
				mes "Aqueles que t�m ataques f�sicos como principal forma de ataque como os Espadachins tem que correr para salvar suas vidas quando avistam um Ghostring.";
				next;
				mes "[Dega]";
				mes "Mas n�o desista ainda!";
				mes "Existe uma �tima not�cia para estas classes.";
				mes "Fazer uma arma de alguma propriedade elemental � a chave.";
				next;
				mes "[Dega]";
				mes "Assim, mesmo um Espadachim ou Arqueiro pode causar dano, do mesmo jeito que a M�gica faz, em Ghostrings.";
				next;
				break;
				case 2:
				mes "[Dega]";
				mes "Angelrings s�o imunes a ataques m�gicos.";
				mes "Se uma pessoa que s� possui ataques m�gicos avistar um  Angelring, ent�o ela tem que correr.";
				next;
				mes "[Dega]";
				mes "Se voc� tem uma faca ou espada extra, voc� poderia tentar.";
				mes "Mas seria muito dif�cil sozinho, n�o acha...?";
				next;
				break;
				case 3:
				mes "[Dega]";
				mes "Boa Sorte.";
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
izlude,150,143,2	script	Kylick#izl	4W_M_01,{
	mes "[Kylick]";
	mes "Eu estava pensando, apesar de o povo de Izlude viver t�o perto do oceano...";
	next;
	mes "[Kylick]";
	mes "Existem outras culturas que t�m completamente se desenvolvido sem a vida no mar.";
	mes "Claro, estou falando de Amatsu.";
	next;
	mes "[Kylick]";
	mes "Eu ouvi dizer que as comidas de l� s�o muito boas!";
	mes "Embora a ideia de comer peixe cru seja nova para mim, eu adoraria ir para l�, para experimentar s� uma vez!";
	close;
}

// ------------------------------------------------------------------
izlude,56,126,2	script	Red#izl::RedCebalis	4_M_03,{
	mes "[Red]";
	mes "A �nica habilidade necess�ria a um Espadachim � o ^FF2400Golpe Fulminante^000000!";
	mes "Golpe Fulminante, Golpe Fulminante e S� ^FF2400Golpe Fulminante^000000!";
	mes "N�o perca tempo aprimorando outras habilidades insignificantes!";
	mes "O resto � para fracos e covardes!";
	next;
	mes "[Cebalis]";
	mes "O que voc� est� falando!?";
	mes "O verdadeiro espadachim resolve tudo sozinho.";
	mes "Quando esta cercado por in�meros inimigos quebra todos eles com um incr�vel ataque.";
	next;
	mes "[Cebalis]";
	mes "^EE0000IMPACTO EXPLOSIVO!^000000";
	mes "Certamente, o Impacto Explosivo � uma habilidade que faz o trabalho certo!!";
	next;
	mes "[Cebalis]";
	mes "Bem, algumas vezes o dano da explos�o pode atingir acidentalmente os monstros errados.";
	mes "Quando atingidos, v�o querer lhe atacar.";
	mes "Mas isso � somente um risco que um Espadachim deve correr!!";
	next;
	mes "[Red]";
	mes "E por isso que voc� � burro, um idiota!";
	mes "E o que � 'o Espadachim Ideal?'";
	mes "Eu me lembro da �ltima vez que voc� usou o Impacto Explosivo...";
	next;
	mes "[Red]";
	mes "Voc� fugiu de todos os monstros que voc� bateu com a habilidade est�pida!";
	mes "Frouxo!";
	mes "Todos aqueles Porings a sua volta que foram atingidos querendo te matar.. ";
	next;
	mes "[Cebalis]";
	mes "Se me lembro bem, voc� estava correndo tamb�m...";
	mes "Aparentemente muito ocupado para usar seu precisoso Golpe Fulminante.";
	mes "Em todo caso, Impacto Explosivo � A habilidade de um Espadachim~!!";
	next;
	mes "[Cebalis]";
	mes "Algo simples como Golpe Fulminante � s� um dos pequenos passos para o Impacto Explosivo.";
	next;
	mes "[Red]";
	mes "Ei, eu sei que voc� ouviu tudo.";
	mes "O que voc� acha?";
	next;
	mes "[Red]";
	mes "O que voc� acha melhor?";
	mes "Uma habilidade de dano cr�tico, ^FF2400Golpe Fulminante^000000.";
	mes "Ou uma de dano em �rea, ^EE0000Impacto Explosivo^000000?";
	next;
	if (select("Golpe Fulminante","Impacto Explosivo") == 1)  {
		mes "[Red]";
		mes "Hahahaha!!!";
		mes "Sabia que voc� pensa como eu!!";
		mes "Sem d�vida, s� o ^FF2400Golpe Fulminante^000000 realiza um Espadachim.";
		mes "Por favor diga isso para esse outro aqui Hahaha!";
		close;
	}
	mes "[Cebalis]";
	mes "Certo?!";
	mes "^EE0000Impacto Explosivo^000000!!!";
	mes "Voc� sabe do que est� falando, n�?";
	mes "Eu n�o sei porque voc� � t�oooo teimoso.";
	close;
}
izlude,58,126,2	duplicate(RedCebalis)	Cebalis#izl	4W_M_02

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
izlude_in,125,164,2	script	Aaron#izl	1_M_YOUNGKNIGHT,{
	mes "[Aaron]";
	mes "N�o acha que For�a, VIT e treinar um m�todo unico de respirar que permite uma r�pida recupera��o de HP s�o as maiores vantagens de um Espadachim?";
	next;
	mes "[Aaron]";
	mes "Se voc� treinar suas habilidades, voc� pode ver seu HP recuperando.";
	mes "A quantidade de recupera��o depende da vitalidade, ou VIT.";
	next;
	mes "[Aaron]";
	mes "Ent�o quando mais pontos voc� colocar de VIT, voc� poder� recuperar mais HP quando em repouso.";
	next;
	mes "[Aaron]";
	mes "Mas, evidentemente, que seria bom ter Ataque alto, n�o �?";
	mes "Voc� pode adquirir uma boa arma ou aumentar sua FOR para fortalecer o ataque.";
	next;
	mes "[Aaron]";
	mes "De qualquer maneira voc� sabe que vai precisar de muita for�a para manusear equipamentos de qualidade facilmente.";
	next;
	mes "[Aaron]";
	mes "Outra coisa importante � a forma como vai acertar seus oponentes.";
	mes "DES � a chave.";
	mes "Se voc� aumentar a DES, ent�o a diferen�a entre o dano MIN e o MAX ir� diminuir.";
	next;
	mes "[Aaron]";
	mes "Hm...";
	mes "Voc� est� entediado por toda esta conversa?";
	mes "Ou voc� quer que eu continue?";
	next;
	if (select("Conte-me mais.","Finalizar conversa.") == 1) {
		mes "[Aaron]";
		mes "Hmm...";
		mes "Nesse caso, eu vou falar um pouco sobre os outros atributos.";
		mes "A fim de atacar e fugir rapidamente, voc� tem que treinar a AGI. ";
		next;
		mes "[Aaron]";
		mes "No caso de querer mais ataques cr�ticos, voc� deve investir em SOR.";
		mes "INT vai aumentar o SP, que � necess�rio para utilizar a maioria das habilidades...";
		mes "Isto � tudo.";
		close;
	}
	mes "[Aaron]";
	mes "Tudo bem, at� logo.";
	close;
}