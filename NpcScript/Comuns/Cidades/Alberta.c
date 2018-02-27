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
| - Nota: Npcs comuns na cidade Alberta                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
alberta,97,51,0	script	Mercador#alb	4_M_02,{
	mes("[Mercador]\n Quando você viaja para muitos lugares como eu faço, você fica sabendo de muitos rumores.\n Um dos rumores que eu ouvi é realmente interessante.");
	next;
	mes("[Mercador]\n Aparentemente existem cartas que selam o poder de certos monstros dentro delas.\n Se alguém conseguir obter uma dessas cartas, ele irá obter o poder do monstro...");
	next;
	mes("[Mercador]\n Ah! Eu não acredito nisso.");
	close;
}

// ------------------------------------------------------------------
alberta,53,39,0	script	Mercador#alb2	4W_SAILOR,{
	mes("[Mercador]\n Oh, você parece ser de fora da cidade.\n Seja bem vind" + (Sex == SEX_MALE ? "o" : "a") + " à Alberta.");
	emotion(e_gasp);
	next;
	mes("[Mercador]\n Eu estava apenas pensando em algumas idéias que eu tenho para o meu negócio.");
	next;
	mes("[Steiner]\n Olha só, eu ouvi falar que tem uma loja em Geffen que vende armaduras raras, resistentes a ataques mágicos.\n Se eu de alguma forma pudesse comprá-las por um preço baixo e vendê-las pro pessoal em outras cidades...");
	emotion(e_cash);
	close;
}

// ------------------------------------------------------------------
alberta,58,80,2	script	Mercador#alb3	4W_M_03,{
	switch(rand(2)) {
		case 1:
		mes("[Mercador]\n Nós, mercadores muitas vezes colocamos o pé na estrada para fazer bons negócio.");
		next;
		mes("[Mercador]\n Com a habilidade de desconto, podemos comprar produtos mais baratos das lojas das cidades e carregá-los em nosso carrinho alugado.");
		next;
		mes("[Mercador]\n Então, depois disso, podemos viajar para qualquer lugar, e re-vender esses itens para lucrar um pouco!");
		next;
		mes("[Mercador]\n Desta forma, o negócio é mais conveniente e seguro....\n EI NÃO DURMA!.");
		close;
		case 2:
		mes("[Mercador]\n Nós mercadores podemos fazer nosso comércio em qualquer lugar.\n Com o ^0000ffDesconto^000000 nós podemos comprar tudo na loja com preço mais baixo..");
		next;
		mes("[Mercador]\n É mais do que apenas sair gritando 'Você tem que me dar mais dinheiro por favor!'\n Você precisa ter carisma e retórica de mestre!");
		next;
		mes("[Mercador]\n A porcentagem máxima que conseguimos tirar a mais nos itens que vendemos aos NPCs é de 24%.\n Mas precisa de trabalho duro e treino para conseguir essa habilidade!!");
	}
}

// ------------------------------------------------------------------
alberta,131,139,2	script	Velho Bêbado#alb	1_M_JOBGUIDER,{
	mes("[Velho Bêbado]\n ^666666*Hiccup*^000000\n O quqquê você está olhando?\n Sai fora!!");
	next;
	switch(select("Não, vou ficar aqui mesmo.", "Tah tah! Seu velho bêbado.")) {
		case 1:
		mes("[Velho Bêbado]\n Hahahaha ^666666*hiccup*^000000...\n Então você tem nervos.\n Heh...\n Eu posso parecer um lixo agora.\n Mas voltando no tempo, eu era um belo marinheiro à bordo do 'Going Mary.'");
		next;
		switch(select("Isso é um navio?", "Sério? Não brinca!")) {
			case 1:
			mes("[Velho Bêbado]\n O quê?!\n Nunca ouviu falar dele?\n Todo mundo conhece o notável navio pirata 'Going Mary!'\n ^666666*Hiccup*^000000");
			next;
			mes("[Velho Bêbado]\n Ah bons dias ... mas... se nós não tivéssemos entrado naquela TEMPESTADE...\n ^666666*hiccup*^000000");
			next;
			mes("[Velho Bêbado]\n AH Capitão.\n Sinto falta do nosso capitão mais do que tudo....\n Nenhum monstro sobrevivia ao golpe da espada do capitão.\n CAPITÃO!!! (HICCUP) Ele usava sua espada ASSIM!...\n Depois ASSIM... e ASSIM...!!!");
			next; 
			mes "[Velho Bêbado]"; 
			mes "O inimigo e tudo ao redor dele ardiam em chamas!";
			mes "Agora quando penso nisso, a espada devia ter algum tipo de poder misterioso."; 
			next; 
			mes("[Velho Bêbado]\n (sigh!) (sob, sob)... Como eu sinto falta de todos...\n Agora me deprimi.\n Vá embora e me deixe sozinho.....");
			emotion(e_sob); 
			close; 
			case 2:
			mes("[Velho Bêbado]\n Está certo! (HICCUP)!");
			close;
		}
		case 2:
		mes("[Velho Bêbado]\n É isso mesmo!\n Vá EMBORA!");
		emotion(e_awsm); 
		close;
	}
}

// ------------------------------------------------------------------
alberta,62,156,2	script	Phina#alb	8_F,{
	switch(rand(3)){
		case 0:
		mes("[Phina]\n Uns dias atrás, eu estava andando na floresta e vi um longo, fino pedaço de grama verde saindo direto do chão.");
		next;
		mes("[Phina]\n Ele era tãããão bonitinho, que me deu vontade de tocá-lo.\n Quando eu encostei nele, sabe o que aconteceu?\n A grama deu uma chicotada na minha mão!");
		next;
		mes("[Phina]\n Achei aquilo estranho, e recuei por um momento.\n Foi então que eu vi, não era grama, mas sim uma pequena criatura.");
		next;
		mes("[Phina]\n Até os montros mais calmos podem ser muito perigosos quando se sentem ameaçados.\n Então não se engane com eles.");
		close;
		case 1:
		mes("[Phina]\n Sabe aqueles ursos com cara de bobo que vivem na floresta que liga Alberta à Payon?\n Claro que sabe...\n Aqueles que ficam brincando com as abelhas que voam nos seus narizes.");
		next;
		mes("[Phina]\n Então, outro dia eu joguei um galho em um deles apenas por diversão.\n De repente, ELE VEIO CORRENDO NA MINHA DIREÇÃO!");
		next;
		mes("[Phina]\n Eu fiquei TÃÃÃO assustada!!\n Eu rapidinho pulei pro lado pra desviar dele.\n Então BAMB!!!\n Ele acertou uma gigantesca árvore e a deixou em pedacinhos.");
		emotion(e_wah);
		next;
		mes("[Phina]\n Aquele dia eu aprendi uma lição.\n NUNCA provoque nenhuma criatura pois se ela ficar nervosa, você estará em sérios apuros!");
		close;
		case 2:
		mes("[Phina]\n Uma vez eu vi um bando de lobos pegarem um daqueles enormes, ursos preguiçosos!");
		next;
		mes("[Phina]\n Você sabia?\n Lobos são mais cooperativos do que aparentam.\n Se um deles é atacado, os outros vêm ajudá-lo.");
		next;
		mes("[Phina]\n Então tome muito cuidado se você decidir lutar com um!");
		close;
	}
}

// ------------------------------------------------------------------
alberta,93,174,2	script	Vovó#alb	8_F_GRANDMOTHER,{
	mes("[Vovó]\n Algum tempo atrás, um navio à deriva foi trazido pelo mar ao porto de Alberta.");
	next;
	mes("[Vovó]\n Alguns jovens da cidade entraram no navio em busca de sobreviventes.\n Mas depois de alguns momentos todos correram pra fora horrorizados.\n Disseram que viram CADÁVERES andando pelo navio!");
	next;
	mes("[Vovó]\n O navio também estava lotado de monstros marinhos nunca vistos, que impediam as pessoas de entrar.");
	next;
	mes("[Vovó]\n Nós nunca fomos capazes de fazer algo sobre esse estranho navio.\n Então apenas o deixamos lá, esperando que um dia ele afundasse ou fosse embora.");
	next;
	mes "[Vovó]\n Assim, pode ser uma boa experiência para um jovem aventureiro como você.\n Mas, ainda não vale a pena arriscar sua vida se você não é forte o suficiente.");
	close;
}
