/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Por: eAthena/rAthena/Hercules                                   |
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Alberta                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
alberta,97,51,0	script	Fabian#alb	4_M_02,{
	mes "[Fabian]";
	mes "Quando voc� viaja para muitos lugares como eu fa�o, voc� fica sabendo de muitos rumores.";
	mes "Um dos rumores que eu ouvi � realmente interessante.";
	next;
	mes "[Fabian]";
	mes "Aparentemente existem cartas que selam o poder de certos monstros dentro delas.";
	mes "Se algu�m conseguir obter uma dessas cartas, ele ir� obter o poder do monstro...";
	next;
	mes "[Fabian]";
	mes "Ah! Eu n�o acredito nisso.";
	close;
}

// ------------------------------------------------------------------
alberta,53,39,0	script	Steiner#alb	4W_SAILOR,{
	mes "[Steiner]";
	mes "Oh, voc� parece ser de fora da cidade.";
	mes "Seja bem vind"+(Sex? "o":"a")+" � Alberta.";
	emotion e_gasp;
	next;
	mes "[Steiner]";
	mes "Eu estava apenas pensando em algumas id�ias que eu tenho para o meu neg�cio.";
	next;
	mes "[Steiner]"; 
	mes "Olha s�, eu ouvi falar que tem uma loja em Geffen que vende armaduras raras, resistentes a ataques m�gicos."; 
	mes "Se eu de alguma forma pudesse compr�-las por um pre�o baixo e vend�-las pro pessoal em outras cidades...";
	emotion e_cash;
	close;
}

// ------------------------------------------------------------------
alberta,20,183,0	script	Chad#alb	1_M_03,{
	mes "[Chad]";
	mes "As pessoas dizem que a lend�ria arma Gungnir nunca erra seu alvo.";
	mes "Eu me pergunto se isso � verdade...";
	next;
	mes "[Chad]";
	mes "As pessoas tamb�m dizem que as cegonhas � que trazem os beb�s depois do parto.";
	mes "Que Papai Noel existe!";
	mes "Mas s� em Lutie.";
	next;
	mes "[Chad]";
	mes "Eu me pergunto...";
	mes "Se qualquer uma dessas pessoas realmente acredita que isso seja verdade...";
	close;
}

// ------------------------------------------------------------------
alberta,131,139,2	script	Velho B�bado#alb	1_M_JOBGUIDER,{
	mes "[Velho B�bado]";
	mes "^666666*Hiccup*^000000";
	mes "O quqqu� voc� est� olhando?";
	mes "Sai fora!!";
	next;
	switch(select("N�o, vou ficar aqui mesmo.","Tah tah! Seu velho b�bado.")) {
		case 1:
		mes "[Velho B�bado]";
		mes "Hahahaha ^666666*hiccup*^000000...";
		mes "Ent�o voc� tem nervos.";
		mes "Heh... eu posso parecer um lixo agora.";
		mes "Mas voltando no tempo, eu era um belo marinheiro � bordo do 'Going Mary.'";
		next;
		switch(select("Isso � um navio?.","S�rio? N�o brinca!")) {
			case 1:
			mes "[Velho B�bado]";
			mes "O qu�?! Nunca ouviu falar dele?";
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
			mes "(sigh!) (sob, sob)... Desu, como eu sinto falta de todos...";
			mes "Agora me deprimi.";
			mes "V� embora e me deixe sozinho....."; 
			emotion e_sob; 
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
		emotion e_awsm; 
		close;
	}
}

// ------------------------------------------------------------------
alberta,58,80,2	script	Shakir#alb	4W_M_03,{
	switch(rand(2)) {
		case 1:
		mes "[Shakir]";
		mes "N�s, mercadores muitas vezes colocamos o p� na estrada para fazer bons neg�cio";
		next;
		mes "[Shakir]";
		mes "Com a habilidade de desconto, podemos comprar produtos mais baratos das lojas das cidades e carreg�-los em nosso carrinho alugado.";
		next;
		mes "[Shakir]";
		mes "Ent�o, depois disso, podemos viajar para qualquer lugar, e re-vender esses itens para lucrar um pouco!";
		next;
		mes "[Shakir]";
		mes "Desta forma, o neg�cio � mais conveniente e seguro....";
		mes "EI N�O DURMA!.";
		close;
		case 2:
		mes "[Shakir]";
		mes "N�s mercadores podemos fazer nosso com�rcio em qualquer lugar.";
		mes "Com o ^0000ffDesconto^000000 n�s podemos comprar tudo na loja com pre�o mais baixo..";
		next;
		mes "[Shakir]";
		mes "� mais do que apenas sair gritando 'Voc� tem que me dar mais dinheiro por favor!'";
		mes "Voc� precisa ter carisma e ret�rica de mestre!";
		next;
		mes "[Shakir]";
		mes "A porcentagem m�xima que conseguimos tirar a mais nos itens que vendemos aos NPCs � de 24%.";
		mes "Mas precisa de trabalho duro e treino para conseguir essa habilidade!!";
	}
}

// ------------------------------------------------------------------
alberta,62,156,2	script	Sonya#alb	8_F,{
	switch(rand(3)){
		case 0:
		mes "[Sonya]";
		mes "Uns dias atr�s, eu estava andando na floresta e vi um longo, fino peda�o de grama verde saindo direto do ch�o.";
		next;
		mes "[Sonya]";
		mes "Ele era t����o bonitinho, que me deu vontade de toc�-lo.";
		mes "Quando eu encostei nele, sabe o que aconteceu?";
		mes "A grama deu uma chicotada na minha m�o!";
		next;
		mes "[Sonya]";
		mes "Achei aquilo estranho, e recuei por um momento.";
		mes "Foi ent�o que eu vi, n�o era grama, mas sim uma pequena criatura.";
		next;
		mes "[Sonya]";
		mes "At� os montros mais calmos podem ser muito perigosos quando se sentem amea�ados.";
		mes "Ent�o n�o se engane com eles.";
		close;
		case 1:
		mes "[Sonya]";
		mes "Sabe aqueles ursos com cara de bobo que vivem na floresta que liga Alberta � Payon??";
		mes "Claro que sabe...";
		mes "aqueles que ficam brincando com as abelhas que voam nos seus narizes";
		next;
		mes "[Sonya]";
		mes "Ent�o, outro dia eu joguei um galho em um deles apenas por divers�o.";
		mes "De repente, ELE VEIO CORRENDO NA MINHA DIRE��O!";
		next;
		mes "[Sonya]";
		mes "Eu fiquei T���O assustada!!";
		mes "Eu rapidinho pulei pro lado pra desviar dele.";
		mes "Ent�o BAMB!!!";
		mes "Ele acertou uma gigantesca �rvore e a deixou em pedacinhos.";
		emotion e_wah;
		next;
		mes "[Sonya]";
		mes "Aquele dia eu aprendi uma li��o.";
		mes "NUNCA provoque nenhuma criatura pois se ela ficar nervosa, voc� estar� em s�rios apuros!";
		close;
		case 2:
		mes "[Sonya]";
		mes "Uma vez eu vi um bando de lobos pegarem um daqueles enormes, ursos pregui�osos!";
		next;
		mes "[Sonya]";
		mes "Voc� sabia? Lobos s�o mais cooperativos do que aparentam.";
		mes "Se um deles � atacado, os outros v�m ajud�-lo.";
		next;
		mes "[Sonya]";
		mes "Ent�o tome muito cuidado se voc� decidir lutar com um!";
		close;
	}
}

// ------------------------------------------------------------------
alberta,93,174,2	script	Vov� Alma#alb	8_F_GRANDMOTHER,{
	mes "[Vov� Alma]";
	mes "Algum tempo atr�s, um navio � deriva foi trazido pelo mar ao porto de Alberta.";
	next;
	mes "[Vov� Alma]";
	mes "Alguns jovens da cidade entraram no navio em busca de sobreviventes.";
	mes "Mas depois de alguns momentos todos correram pra fora horrorizados.";
	mes "Disseram que viram CAD�VERES andando pelo navio!";
	next;
	mes "[Vov� Alma]";
	mes "O navio tamb�m estava lotado de monstros marinhos nunca vistos, que impediam as pessoas de entrar.";
	next;
	mes "[Vov� Alma]";
	mes "N�s nunca fomos capazes de fazer algo sobre esse estranho navio, ent�o apenas o deixamos l�, esperando que um dia ele afundasse ou fosse embora.";
	next;
	mes "[Vov� Alma]";
	mes "Assim, pode ser uma boa experi�ncia para um jovem aventureiro como voc�.";
	mes "Mas, ainda n�o vale a pena arriscar sua vida se voc� n�o � forte o suficiente.";
	close;
}