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
| - Nota: Npcs comuns na cidade Alberta                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
alberta,97,51,0	script	Mercador#alb	4_M_02,{
	mes("[Mercador]\n Quando voc� viaja para muitos lugares como eu fa�o, voc� fica sabendo de muitos rumores.\n Um dos rumores que eu ouvi � realmente interessante.");
	next;
	mes("[Mercador]\n Aparentemente existem cartas que selam o poder de certos monstros dentro delas.\n Se algu�m conseguir obter uma dessas cartas, ele ir� obter o poder do monstro...");
	next;
	mes("[Mercador]\n Ah! Eu n�o acredito nisso.");
	close;
}

// ------------------------------------------------------------------
alberta,53,39,0	script	Mercador#alb2	4W_SAILOR,{
	mes("[Mercador]\n Oh, voc� parece ser de fora da cidade.\n Seja bem vind" + (Sex == SEX_MALE ? "o" : "a") + " � Alberta.");
	emotion(e_gasp);
	next;
	mes("[Mercador]\n Eu estava apenas pensando em algumas id�ias que eu tenho para o meu neg�cio.");
	next;
	mes("[Steiner]\n Olha s�, eu ouvi falar que tem uma loja em Geffen que vende armaduras raras, resistentes a ataques m�gicos.\n Se eu de alguma forma pudesse compr�-las por um pre�o baixo e vend�-las pro pessoal em outras cidades...");
	emotion(e_cash);
	close;
}

// ------------------------------------------------------------------
alberta,58,80,2	script	Mercador#alb3	4W_M_03,{
	switch(rand(2)) {
		case 1:
		mes("[Mercador]\n N�s, mercadores muitas vezes colocamos o p� na estrada para fazer bons neg�cio.");
		next;
		mes("[Mercador]\n Com a habilidade de desconto, podemos comprar produtos mais baratos das lojas das cidades e carreg�-los em nosso carrinho alugado.");
		next;
		mes("[Mercador]\n Ent�o, depois disso, podemos viajar para qualquer lugar, e re-vender esses itens para lucrar um pouco!");
		next;
		mes("[Mercador]\n Desta forma, o neg�cio � mais conveniente e seguro....\n EI N�O DURMA!.");
		close;
		case 2:
		mes("[Mercador]\n N�s mercadores podemos fazer nosso com�rcio em qualquer lugar.\n Com o ^0000ffDesconto^000000 n�s podemos comprar tudo na loja com pre�o mais baixo..");
		next;
		mes("[Mercador]\n � mais do que apenas sair gritando 'Voc� tem que me dar mais dinheiro por favor!'\n Voc� precisa ter carisma e ret�rica de mestre!");
		next;
		mes("[Mercador]\n A porcentagem m�xima que conseguimos tirar a mais nos itens que vendemos aos NPCs � de 24%.\n Mas precisa de trabalho duro e treino para conseguir essa habilidade!!");
	}
}

// ------------------------------------------------------------------
alberta,131,139,2	script	Velho B�bado#alb	1_M_JOBGUIDER,{
	mes("[Velho B�bado]\n ^666666*Hiccup*^000000\n O quqqu� voc� est� olhando?\n Sai fora!!");
	next;
	switch(select("N�o, vou ficar aqui mesmo.", "Tah tah! Seu velho b�bado.")) {
		case 1:
		mes("[Velho B�bado]\n Hahahaha ^666666*hiccup*^000000...\n Ent�o voc� tem nervos.\n Heh...\n Eu posso parecer um lixo agora.\n Mas voltando no tempo, eu era um belo marinheiro � bordo do 'Going Mary.'");
		next;
		switch(select("Isso � um navio?", "S�rio? N�o brinca!")) {
			case 1:
			mes("[Velho B�bado]\n O qu�?!\n Nunca ouviu falar dele?\n Todo mundo conhece o not�vel navio pirata 'Going Mary!'\n ^666666*Hiccup*^000000");
			next;
			mes("[Velho B�bado]\n Ah bons dias ... mas... se n�s n�o tiv�ssemos entrado naquela TEMPESTADE...\n ^666666*hiccup*^000000");
			next;
			mes("[Velho B�bado]\n AH Capit�o.\n Sinto falta do nosso capit�o mais do que tudo....\n Nenhum monstro sobrevivia ao golpe da espada do capit�o.\n CAPIT�O!!! (HICCUP) Ele usava sua espada ASSIM!...\n Depois ASSIM... e ASSIM...!!!");
			next; 
			mes "[Velho B�bado]"; 
			mes "O inimigo e tudo ao redor dele ardiam em chamas!";
			mes "Agora quando penso nisso, a espada devia ter algum tipo de poder misterioso."; 
			next; 
			mes("[Velho B�bado]\n (sigh!) (sob, sob)... Como eu sinto falta de todos...\n Agora me deprimi.\n V� embora e me deixe sozinho.....");
			emotion(e_sob); 
			close; 
			case 2:
			mes("[Velho B�bado]\n Est� certo! (HICCUP)!");
			close;
		}
		case 2:
		mes("[Velho B�bado]\n � isso mesmo!\n V� EMBORA!");
		emotion(e_awsm); 
		close;
	}
}

// ------------------------------------------------------------------
alberta,62,156,2	script	Phina#alb	8_F,{
	switch(rand(3)){
		case 0:
		mes("[Phina]\n Uns dias atr�s, eu estava andando na floresta e vi um longo, fino peda�o de grama verde saindo direto do ch�o.");
		next;
		mes("[Phina]\n Ele era t����o bonitinho, que me deu vontade de toc�-lo.\n Quando eu encostei nele, sabe o que aconteceu?\n A grama deu uma chicotada na minha m�o!");
		next;
		mes("[Phina]\n Achei aquilo estranho, e recuei por um momento.\n Foi ent�o que eu vi, n�o era grama, mas sim uma pequena criatura.");
		next;
		mes("[Phina]\n At� os montros mais calmos podem ser muito perigosos quando se sentem amea�ados.\n Ent�o n�o se engane com eles.");
		close;
		case 1:
		mes("[Phina]\n Sabe aqueles ursos com cara de bobo que vivem na floresta que liga Alberta � Payon?\n Claro que sabe...\n Aqueles que ficam brincando com as abelhas que voam nos seus narizes.");
		next;
		mes("[Phina]\n Ent�o, outro dia eu joguei um galho em um deles apenas por divers�o.\n De repente, ELE VEIO CORRENDO NA MINHA DIRE��O!");
		next;
		mes("[Phina]\n Eu fiquei T���O assustada!!\n Eu rapidinho pulei pro lado pra desviar dele.\n Ent�o BAMB!!!\n Ele acertou uma gigantesca �rvore e a deixou em pedacinhos.");
		emotion(e_wah);
		next;
		mes("[Phina]\n Aquele dia eu aprendi uma li��o.\n NUNCA provoque nenhuma criatura pois se ela ficar nervosa, voc� estar� em s�rios apuros!");
		close;
		case 2:
		mes("[Phina]\n Uma vez eu vi um bando de lobos pegarem um daqueles enormes, ursos pregui�osos!");
		next;
		mes("[Phina]\n Voc� sabia?\n Lobos s�o mais cooperativos do que aparentam.\n Se um deles � atacado, os outros v�m ajud�-lo.");
		next;
		mes("[Phina]\n Ent�o tome muito cuidado se voc� decidir lutar com um!");
		close;
	}
}

// ------------------------------------------------------------------
alberta,93,174,2	script	Vov�#alb	8_F_GRANDMOTHER,{
	mes("[Vov�]\n Algum tempo atr�s, um navio � deriva foi trazido pelo mar ao porto de Alberta.");
	next;
	mes("[Vov�]\n Alguns jovens da cidade entraram no navio em busca de sobreviventes.\n Mas depois de alguns momentos todos correram pra fora horrorizados.\n Disseram que viram CAD�VERES andando pelo navio!");
	next;
	mes("[Vov�]\n O navio tamb�m estava lotado de monstros marinhos nunca vistos, que impediam as pessoas de entrar.");
	next;
	mes("[Vov�]\n N�s nunca fomos capazes de fazer algo sobre esse estranho navio.\n Ent�o apenas o deixamos l�, esperando que um dia ele afundasse ou fosse embora.");
	next;
	mes "[Vov�]\n Assim, pode ser uma boa experi�ncia para um jovem aventureiro como voc�.\n Mas, ainda n�o vale a pena arriscar sua vida se voc� n�o � forte o suficiente.");
	close;
}
