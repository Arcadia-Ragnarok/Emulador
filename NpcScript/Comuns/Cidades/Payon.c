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
| - Nota: Npcs comuns na cidade Payon                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
payon,246,154,0	script	Senhorita#pay	4_F_01,{
	mes("[Senhorita]\n Há muito tempo atrás Payon, quando ainda estava em desenvolvimento, muitos dos aldeões viviam na pobreza.");
	next;
	mes("[Senhorita]\n Muitas famílias tiveram que lutar para sobreviver, e muitas vezes não conseguiam.\n Elas tiveram que lutar para sobreviver, e muitas vezes não conseguiam pagar corretamente o enterro dos seus mortos.\n Algumas pessoas jogavam seus mortos na caverna perto da aldeia.");
	next;
	mes("[Senhorita]\n Então, naquela caverna, é dito que existem muitos zumbis andando.\n Eles são mortos que não podem descansar em paz e são incapazes de passar para o outro mundo.");
	next;
	mes("[Senhorita]\n Os Zumbis,após detectarem o calor de um ser humano, começam a atacá-los.\n Mas isso não significa que esses mortos-vivos guardam rancor contra os vivos.");
	next;
	mes("[Senhorita]\n Seus corpos podres não puderam sair da caverna fria, escura e úmida.\n Por isso é instintivo para eles atacarem o calor que vai acelerar a decomposição de seus corpos.");
	next;
	mes("[Senhorita]\n Os zumbis na caverna de Payon podem ser assustadores,mas as suas histórias também são trágicas.");
	close;
}

// ------------------------------------------------------------------
payon,134,211,4	script	Homem Jovem#pay	1_M_ORIENT01,{
	mes("[Homem Jovem]\n Pelo seu rosto eu posso ver que você não é daqui.\n Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + " a Payon.");
	next;
	mes("[Homem Jovem]\n Você deve ser um lutador bem experiente.\n Caso contrário você nunca seria capaz de chegar aqui depois de passar por areas íngremes.\n Áreas montanhosas e criaturas perigosas ao redor desta cidade.");
	next;
	mes("[Homem Jovem]\n Eu não sou nenhum perito em combate.\n Mas alguém me disse uma vez que a força bruta sozinha não será capaz de vencer algumas batalhas");
	next;
	mes("[Homem Jovem]\n Às vezes, você poderá encontrar criaturas protegidas por uma casca dura que não é danificada por ataques físicos.\n Só o poder psíquico, como os dos Mágicos, podem facilmente derrotar essas criaturas.");
	next;
	mes("[Homem Jovem]\n Naturalmente, nem todos podem estudar magia.\n O ponto é que você deve manter diferentes tipos de amigos e camaradas perto de você.\n Porque você não pode lidar com cada situação por si mesmo.");
	close;
}

// ------------------------------------------------------------------
payon,176,85,0	script	Homem Jovem#pay2	4_M_ORIENT01,{
	mes("[Homem Jovem]\n Lembro-me da história do meu saudoso avô me contou.");
	next;
	mes("[Homem Jovem]\n É sobre este amuleto, que possui um poder maligno.\n Com ele, você pode despertar os mortos da sepultura.");
	next;
	mes("[Homem Jovem]\n Bem, eu não tenho certeza se é verdade ou não.\n Mas, eu pergunto, o que aconteceria se eu o usasse para chamar meu avô de outro reino ....");
	next;
	mes("[?]\n ^3299CCnunca pense uma coisa dessas meu filho.^000000");
	next;
	mes("[Homem Jovem]\n EEEEEEK-!\n O que foi aquilo?\n A-avô...?");
	next;
	mes("...");
	next;
	mes("[Homem Jovem]\n ...\n D-Deus...?");
	close;
}

// ------------------------------------------------------------------
payon,158,246,3	script	Guarda#pay	4_M_PAY_SOLDIER,{
	mes("[Guarda]\n Este é o Palácio Central de Payon.\n Este local é aberto ao público, mas de acordo com nossas leis.\n Você deve se comportar de forma ordenada, uma vez dentro.");
	next;
	mes("[Guarda]\n No interesse de proteger a paz, vamos desarmar o equipamento uma vez que você entrar.\n Sua cooperação é muito apreciada.");
	close;
}

// ------------------------------------------------------------------
payon,249,156,1	script	Mulher#pay	1_F_01,{
	mes("[Mulher]\n Você deve ter tido uma certa dificuldade em conseguir andar através da floresta de payon como foi a viagem?");
	next;
	mes("[Mulher]\n Temos recebido menos turistas por causa do aumento de monstros lá fora, por isso está mais quieto hoje.");
	next;
	mes("[Mulher]\n Para ser honesto, as coisas estão ficando difíceis, por causa de todos esses monstros.\n ^666666*Sigh...*^000000");
	next;
	if (Sex == SEX_MALE) {
		mes("[Mulher]\n Eu notei que seus braços são bastante grossos.\n Você parece muito forte, cara.\n Quantos monstros você matou?");
	} else {
		mes("[Mulher]\n Eu não percebi antes, mas você olhar bem forte embaixo de todo esse charme feminino.");
	}
	next;
	mes("[Mulher]\n Ei, eu sei de um lugar bom para você caçar.\n Acontece que há uma caverna no meio de Payon.");
	next;
	mes("[Mulher]\n Se você estiver interessado, vá para o Norte, passe pela floresta, e siga em direção ao noroeste.\n Você saberá que você chegou quando você estiver num lugar com o o mau cheiro de monstros.");
	next;
	switch(select("Parece perigoso!", "Melhor eu me preparar ...!", "É um belo vestido o seu")) {
		case 1:
		mes("[Mulher]\n Oh venha, não seja coverde.\n É apenas uma simples caverna cheia de monstros normais.\n É bastante seguro.\n Temos ainda uma vila de arqueiros perto da caverna para evitar incidentes infelizes.\n Hohoohoho.");
		break;
		case 2:
		mes("[Mulher]\n Ah, não se preocupe com qualquer preparação.\n Existe uma loja de ferramenta perto da caverna.\n Assim você pode comprar qualquer coisa que você precise com o senhor husban.");
		break;
		case 3:
		mes("[Mulher]\n Oh hohohoho!\n Você soube da mais nova notícia?\n Eu ouvi que saiu umas novas tendências de moda em Prontera esses dias.");
		next;
		mes("[Mulher]\n A maioria das mulheres nesta cidade ainda não sabem nada sobre moda!\n Meu marido comprou esse presente pra mim.\n Ele faz muito dinheiro, você sabia? Hohohoho.");
		break;
	}
	close;
}

// ------------------------------------------------------------------
payon,246,158,5	script	Mulher#pay2	1_F_01,0,0,{
	mes("[Mãe de Jim]\n Oh Garoto.\n Lá vai ela de novo.\n Está vendo aquela mulher?\n É a fofoqueira da cidade.");
	next;
	mes("[Mãe de Jim]\n Por favor, não julgue o resto das pessoas que vivem em Payon por seu comportamento.\n Ela é a única pessoa que grita.\n Eu acho que ela está muito animada pelo que a cartomante lhe disse.");
	next;
	if (Sex == SEX_MALE) {
		mes("[Mãe de Jim]\n Ooh, garoto...\n você tem ombros largos você gostaria de sair comigo?\n Posso te convidar para um jantar.");
	} else {
		mes("[Mãe de Jim]\n Meu, você é uma bela garota!\n Tenho certeza que você anda ocupada batendo nos meninos com um pedaço de pau.");
	}
	next;
	if (select("Cartomante..?", "Bem, eu vejo você mais tarde") == 1) {
		mes("[Mãe de Jim]\n Oh sim...\n Existe uma cartomante extraordinária no Palácio Central de Payon.\n Quanto mais você paga a ela, mais sorte você vai ganhar!");
		next;
		mes("[Mãe de Jim]\n Ela me disse que gostaria de conhecer um cara legal este mês.\n Hohohoho.");
		close;
	}
	mes("[Mãe de Jim]\n Mmmm...?\n Você não tem um tempo, para ficar e bater um papo comigo?");
	close;
}

// ------------------------------------------------------------------
payon,210,110,1	script	Bêbado#pay	2_M_PHARMACIST,{
	if (Class != Job_Archer) {
		mes("[Bêbado]\n Ei...\n E-Ei...!");
		next;
		mes("[Bêbado]\n Eu me pergunto porque esses estupidos arqueiros vem me incomodar com o mesmo objetivo sempre!\n Você é tão fraco!\n Eu disse FRAAAAACO!");
		next;
		mes("[Bêbado]\n Bwahahahaha!\n Será que você poderia comprar para mim uma bebida?");
	} else {
		mes("[Bêbado]\n Opa, um arqueiro! Seja homem ou um garoto\n Vocês são os melhores!");
		next;
		mes("[Bêbado]\n Bwahahahaha!\n Será que você poderia comprar para mim uma bebida?");
	}
	next;
	switch(select("Certo, mas só uma bebida", "Não, obrigado amigo", "Nem pensar!!")) {
		case 1:
		if (Zeny > 100) { 
			Zeny -= 100;
			mes("[Bêbado]\n Obrigado...!");
			next;
			mes("[Bêbado]\n A maioria das pessoas nunca querem comprar bebidas para mim!\n Talvez porque eu era acostumado abrincar demais com as senhoras da minha época!");
			next;
			mes("[Bêbado]\n Embora, as mulheres que eu costumava brincar estão velhinhas agora!\n Hahahahaha!\n Um dia desses elas ainda se enfeitavam e colocavam maquiagem, você acredita nisso?");
			next;
		}
		mes("[Bêbado]\n Eu sou assim mesmo, um pouco brincalhão...\n Vamos lá...\n Alguns rostos eram minhas paixões!\n Calma, hahaha eu fiz uma piada.\n Bwahahahahahah!");
		close;
		case 2:
		mes("[Bêbado]\n Bah!\n As crianças de hoje não respeitam os mais velhos.\n Por isso não te cobrarei respeito a mim");
		close;
		case 3:
		mes("[Bêbado]\n Tudo bem...\n Por mim tudo bem, não preciso do seu respeito por mim!");
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
payon_in01,180,7,2	script	Garçonete#pay	4_F_01,{
	mes("[Garçonete]\n Este lugar sempre está movimentado com pessoas.\n Noviços sempre aparecem por aqui para virar arqueiros, ou para comprar flecha.\n Eles se divertem enquanto eu fico aqui nessa pequena loja.");
	next;
	mes("[Garçonete]\n Eu já estou ficando cansada e doente de tanto fazer sopa de macarrão.\n Tenho que tomar diversos banhos ao dia, para me livrar desse cheiro.\n E acredite não é nada fácil livrar-se dele.");
	next;
	mes("[Garçonete]\n Eu me sinto tão...\n Entediada e sozinha...");
	next;
	if (Sex == SEX_MALE) {
		mes("[Garçonete]\n Onde posso encontrar a pessoa certa, alguém amável e meiga, para me levar daqui?\n Hum, Hey! você está me ouvindo?");
	} else {
		mes("[Garçonete]\n Onde eu posso encontrar a pessoa certa.\n Mas que seja um pouco dificil de conquistar, para poder me levar daqui?\n Hum, heeeeei você está me ouvindo?");
	}
	next;
	mes("[Garçonete]\n A cartomante velha, me disse que eu teria muita sorte em um futuro próximo.\n Mas o que há de errado comigo?\n Eu estou vivendo dia após dia e nada...\n Talvez eu seja um burro e azarado mesmo...");
	next;
	mes("[Garçonete]\n Sinto muito.\n Eu falo demais.\n Agora vou apenas ouvir...\n Lamento por você ter ouvido tantas asneiras.");
	next;
	mes("[Garçonete]\n Então...\n Como posso te ajudar?");
	next;
	switch(select("Você ja ouviu falar de zumbis?", "Bancário...?", "Preciso de uma bebida.")) {
		case 1:
		mes("[Garçonete]\n É claro que quero ouvir sobre zumbis!\n Esta é Payon agora.\n Você pode encontrar zumbis caminhando, eles são mortos-vivos, e você pode facilmente encontrá-los aqui.");
		next;
		mes("[Garçonete]\n Eu ouvi dizer que eles temem a santidade, por isso eles tem medo de arqueiros.\n Eles preferem usar setas feitas de prata, um metal sagrado, que é infalível contra eles.");
		next;
		mes("[Garçonete]\n A lenda diz que o chefe desta cidade, usava flechas de prata contra os zumbis.\n Que costumavam ser seus irmãos, afim de liberar suas almas para que pudessem descansar em paz.");
		next;
		mes("[Garçonete]\n Nós acreditamos que se exorcizarmos os zumbis, poderemos leválos pacificamente a uma vida após a morte.\n E que suas almas não precisaram viver angustiadas nunca mais.");
		next;
		mes("[Garçonete]\n Você pode não acreditar nas nossas crenças,mas meu avô foi um dos mortos-vivos.\n Acredito que meu chefe era capaz de libertá-lo do mundo dos vivos.");
		close;
		case 2:
		mes("[Garçonete]\n Temos uma cartomante, ela é uma pessoa extraordinária.\n Porém ela não fica mais por aqui, como ela fazia antigamente.");
		next;
		mes("[Garçonete]\n Ela costumava ficar aqui, para nos contar sobre a sorte da nossa vida, só que ela foi reconhecida por ter este talento.\n Foi levada pelo nosso chefe.\n Agora ela fica no palácio central, então se quiser vê-la terá que ir até la.");
		close;
		case 3:
		mes("[Garçonete]\n Você... precisa de alguma bebida?\n Não temos nada ao seu gosto?");
		next;
		mes("[Garçonete]\n Eu sinto muito, não vendemos para fora.\n Não podemos nos dar ao luxo de preparar o alcóol, poos há criaturas hostis lá fora.\n Mas por favor, volte mais tarde.\n Desculpe-nos pelos transtornos.");
		close;
	}
}
