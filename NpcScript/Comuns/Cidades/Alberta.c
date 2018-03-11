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
	mes "[Mercador]";
	mes "Quando voc� viaja para muitos lugares como eu fa�o, voc� fica sabendo de muitos rumores.";
	mes "Um dos rumores que eu ouvi � realmente interessante.";
	next;
	mes "[Mercador]";
	mes "Aparentemente existem cartas que selam o poder de certos monstros dentro delas.";
	mes "Se algu�m conseguir obter uma dessas cartas, ele ir� obter o poder do monstro...";
	next;
	mes "[Mercador]";
	mes "Ah! Eu n�o acredito nisso.";
	close;
}

// ------------------------------------------------------------------
alberta,53,39,0	script	Mercador#alb2	4W_SAILOR,{
	mes "[Mercador]";
	mes "Oh, voc� parece ser de fora da cidade.";
	mes "Seja bem vind" + (Sex == SEX_MALE ? "o" : "a") + " � Alberta.";
	emotion(e_gasp);
	next;
	mes "[Mercador]";
	mes "Eu estava apenas pensando em algumas id�ias que eu tenho para o meu neg�cio.";
	next;
	mes "[Steiner]";
	mes "Olha s�, eu ouvi falar que tem uma loja em Geffen que vende armaduras raras, resistentes a ataques m�gicos.";
	mes "Se eu de alguma forma pudesse compr�-las por um pre�o baixo e vend�-las pro pessoal em outras cidades...";
	emotion(e_cash);
	close;
}

// ------------------------------------------------------------------
alberta,58,80,2	script	Mercador#alb3	4W_M_03,{
	switch(rand(2)) {
		case 1:
		mes "[Mercador]";
		mes "N�s, mercadores muitas vezes colocamos o p� na estrada para fazer bons neg�cio.";
		next;
		mes "[Mercador]";
		mes "Com a habilidade de desconto, podemos comprar produtos mais baratos das lojas das cidades e carreg�-los em nosso carrinho alugado.";
		next;
		mes "[Mercador]";
		mes "Ent�o, depois disso, podemos viajar para qualquer lugar, e re-vender esses itens para lucrar um pouco!";
		next;
		mes "[Mercador]";
		mes "Desta forma, o neg�cio � mais conveniente e seguro....";
		mes "EI N�O DURMA!.";
		close;
		case 2:
		mes "[Mercador]";
		mes "N�s mercadores podemos fazer nosso com�rcio em qualquer lugar.";
		mes "Com o ^0000ffDesconto^000000 n�s podemos comprar tudo na loja com pre�o mais baixo..";
		next;
		mes "[Mercador]";
		mes "� mais do que apenas sair gritando 'Voc� tem que me dar mais dinheiro por favor!'";
		mes "Voc� precisa ter carisma e ret�rica de mestre!";
		next;
		mes "[Mercador]";
		mes "A porcentagem m�xima que conseguimos tirar a mais nos itens que vendemos aos NPCs � de 24%.";
		mes "Mas precisa de trabalho duro e treino para conseguir essa habilidade!!";
	}
}

// ------------------------------------------------------------------
alberta,131,139,2	script	Velho B�bado#alb	1_M_JOBGUIDER,{
	mes "[Velho B�bado]";
	mes "^666666*Hiccup*^000000";
	mes "O quqqu� voc� est� olhando?";
	mes "Sai fora!!";
	next;
	switch(select("N�o, vou ficar aqui mesmo.", "Tah tah! Seu velho b�bado.")) {
		case 1:
		mes "[Velho B�bado]";
		mes "Hahahaha ^666666*hiccup*^000000...";
		mes "Ent�o voc� tem nervos.";
		mes "Heh...";
		mes "Eu posso parecer um lixo agora.";
		mes "Mas voltando no tempo, eu era um belo marinheiro � bordo do 'Going Mary.'";
		next;
		switch(select("Isso � um navio?", "S�rio? N�o brinca!")) {
			case 1:
			mes "[Velho B�bado]";
			mes "O qu�?!";
			mes "Nunca ouviu falar dele?";
			mes "Todo mundo conhece o not�vel navio pirata 'Going Mary!'";
			mes "^666666*Hiccup*^000000";
			next;
			mes "[Velho B�bado]";
			mes "Ah bons dias ... mas... se n�s n�o tiv�ssemos entrado naquela TEMPESTADE...";
			mes "^666666*hiccup*^000000";
			next;
			mes "[Velho B�bado]";
			mes "AH Capit�o.";
			mes "Sinto falta do nosso capit�o mais do que tudo....";
			mes "Nenhum monstro sobrevivia ao golpe da espada do capit�o.";
			mes "CAPIT�O!!! (HICCUP) Ele usava sua espada ASSIM!...";
			mes "Depois ASSIM... e ASSIM...!!!";
			next; 
			mes "[Velho B�bado]";
			mes "O inimigo e tudo ao redor dele ardiam em chamas!";
			mes "Agora quando penso nisso, a espada devia ter algum tipo de poder misterioso.";
			next; 
			mes "[Velho B�bado]";
			mes "(sigh!) (sob, sob)... Como eu sinto falta de todos...";
			mes "Agora me deprimi.";
			mes "V� embora e me deixe sozinho.....";
			emotion(e_sob); 
			close; 
			case 2:
			mes "[Velho B�bado]";
			mes "Est� certo! (HICCUP)!";
			close;
		}
		case 2:
		mes "[Velho B�bado]";
		mes "� isso mesmo!";
		mes "V� EMBORA!";
		emotion(e_awsm); 
		close;
	}
}

// ------------------------------------------------------------------
alberta,62,156,2	script	Phina#alb	8_F,{
	switch(rand(3)){
		case 0:
		mes "[Phina]";
		mes "Uns dias atr�s, eu estava andando na floresta e vi um longo, fino peda�o de grama verde saindo direto do ch�o.";
		next;
		mes "[Phina]";
		mes "Ele era t����o bonitinho, que me deu vontade de toc�-lo.";
		mes "Quando eu encostei nele, sabe o que aconteceu?";
		mes "A grama deu uma chicotada na minha m�o!";
		next;
		mes "[Phina]";
		mes "Achei aquilo estranho, e recuei por um momento.";
		mes "Foi ent�o que eu vi, n�o era grama, mas sim uma pequena criatura.";
		next;
		mes "[Phina]";
		mes "At� os montros mais calmos podem ser muito perigosos quando se sentem amea�ados.";
		mes "Ent�o n�o se engane com eles.";
		close;
		case 1:
		mes "[Phina]";
		mes "Sabe aqueles ursos com cara de bobo que vivem na floresta que liga Alberta � Payon?";
		mes "Claro que sabe...";
		mes "Aqueles que ficam brincando com as abelhas que voam nos seus narizes.";
		next;
		mes "[Phina]";
		mes "Ent�o, outro dia eu joguei um galho em um deles apenas por divers�o.";
		mes "De repente, ELE VEIO CORRENDO NA MINHA DIRE��O!";
		next;
		mes "[Phina]";
		mes "Eu fiquei T���O assustada!!";
		mes "Eu rapidinho pulei pro lado pra desviar dele.";
		mes "Ent�o BAMB!!!";
		mes "Ele acertou uma gigantesca �rvore e a deixou em pedacinhos.";
		emotion(e_wah);
		next;
		mes "[Phina]";
		mes "Aquele dia eu aprendi uma li��o.";
		mes "NUNCA provoque nenhuma criatura pois se ela ficar nervosa, voc� estar� em s�rios apuros!";
		close;
		case 2:
		mes "[Phina]";
		mes "Uma vez eu vi um bando de lobos pegarem um daqueles enormes, ursos pregui�osos!";
		next;
		mes "[Phina]";
		mes "Voc� sabia?";
		mes "Lobos s�o mais cooperativos do que aparentam.";
		mes "Se um deles � atacado, os outros v�m ajud�-lo.";
		next;
		mes "[Phina]";
		mes "Ent�o tome muito cuidado se voc� decidir lutar com um!";
		close;
	}
}

// ------------------------------------------------------------------
alberta,93,174,2	script	Vov�#alb	8_F_GRANDMOTHER,{
	mes "[Vov�]";
	mes "Algum tempo atr�s, um navio � deriva foi trazido pelo mar ao porto de Alberta.";
	next;
	mes "[Vov�]";
	mes "Alguns jovens da cidade entraram no navio em busca de sobreviventes.";
	mes "Mas depois de alguns momentos todos correram pra fora horrorizados.";
	mes "Disseram que viram CAD�VERES andando pelo navio!";
	next;
	mes "[Vov�]";
	mes "O navio tamb�m estava lotado de monstros marinhos nunca vistos, que impediam as pessoas de entrar.";
	next;
	mes "[Vov�]";
	mes "N�s nunca fomos capazes de fazer algo sobre esse estranho navio.";
	mes "Ent�o apenas o deixamos l�, esperando que um dia ele afundasse ou fosse embora.";
	next;
	mes "[Vov�]";
	mes "Assim, pode ser uma boa experi�ncia para um jovem aventureiro como voc�.";
	mes "Mas, ainda n�o vale a pena arriscar sua vida se voc� n�o � forte o suficiente.";
	close;
}
