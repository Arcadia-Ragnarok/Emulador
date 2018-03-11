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
	mes "[Senhorita]";
	mes "Há muito tempo atrás Payon, quando ainda estava em desenvolvimento, muitos dos aldeões viviam na pobreza.";
	next;
	mes "[Senhorita]";
	mes "Muitas famílias tiveram que lutar para sobreviver, e muitas vezes não conseguiam.";
	mes "Elas tiveram que lutar para sobreviver, e muitas vezes não conseguiam pagar corretamente o enterro dos seus mortos.";
	mes "Algumas pessoas jogavam seus mortos na caverna perto da aldeia.";
	next;
	mes "[Senhorita]";
	mes "Então, naquela caverna, é dito que existem muitos zumbis andando.";
	mes "Eles são mortos que não podem descansar em paz e são incapazes de passar para o outro mundo.";
	next;
	mes "[Senhorita]";
	mes "Os Zumbis,após detectarem o calor de um ser humano, começam a atacá-los.";
	mes "Mas isso não significa que esses mortos-vivos guardam rancor contra os vivos.";
	next;
	mes "[Senhorita]";
	mes "Seus corpos podres não puderam sair da caverna fria, escura e úmida.";
	mes "Por isso é instintivo para eles atacarem o calor que vai acelerar a decomposição de seus corpos.";
	next;
	mes "[Senhorita]";
	mes "Os zumbis na caverna de Payon podem ser assustadores,mas as suas histórias também são trágicas.";
	close;
}

// ------------------------------------------------------------------
payon,134,211,4	script	Homem Jovem#pay	1_M_ORIENT01,{
	mes "[Homem Jovem]";
	mes "Pelo seu rosto eu posso ver que você não é daqui.";
	mes "Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + " a Payon.";
	next;
	mes "[Homem Jovem]";
	mes "Você deve ser um lutador bem experiente.";
	mes "Caso contrário você nunca seria capaz de chegar aqui depois de passar por areas íngremes.";
	mes "Áreas montanhosas e criaturas perigosas ao redor desta cidade.";
	next;
	mes "[Homem Jovem]";
	mes "Eu não sou nenhum perito em combate.";
	mes "Mas alguém me disse uma vez que a força bruta sozinha não será capaz de vencer algumas batalhas";
	next;
	mes "[Homem Jovem]";
	mes "Às vezes, você poderá encontrar criaturas protegidas por uma casca dura que não é danificada por ataques físicos.";
	mes "Só o poder psíquico, como os dos Mágicos, podem facilmente derrotar essas criaturas.";
	next;
	mes "[Homem Jovem]";
	mes "Naturalmente, nem todos podem estudar magia.";
	mes "O ponto é que você deve manter diferentes tipos de amigos e camaradas perto de você.";
	mes "Porque você não pode lidar com cada situação por si mesmo.";
	close;
}

// ------------------------------------------------------------------
payon,176,85,0	script	Homem Jovem#pay2	4_M_ORIENT01,{
	mes "[Homem Jovem]";
	mes "Lembro-me da história do meu saudoso avô me contou.";
	next;
	mes "[Homem Jovem]";
	mes "É sobre este amuleto, que possui um poder maligno.";
	mes "Com ele, você pode despertar os mortos da sepultura.";
	next;
	mes "[Homem Jovem]";
	mes "Bem, eu não tenho certeza se é verdade ou não.";
	mes "Mas, eu pergunto, o que aconteceria se eu o usasse para chamar meu avô de outro reino ....";
	next;
	mes "[?]";
	mes "^3299CCnunca pense uma coisa dessas meu filho.^000000";
	next;
	mes "[Homem Jovem]";
	mes "EEEEEEK-!";
	mes "O que foi aquilo?";
	mes "A-avô...?";
	next;
	mes "...";
	next;
	mes "[Homem Jovem]";
	mes "...";
	mes "D-Deus...?";
	close;
}

// ------------------------------------------------------------------
payon,158,246,3	script	Guarda#pay	4_M_PAY_SOLDIER,{
	mes "[Guarda]";
	mes "Este é o Palácio Central de Payon.";
	mes "Este local é aberto ao público, mas de acordo com nossas leis.";
	mes "Você deve se comportar de forma ordenada, uma vez dentro.";
	next;
	mes "[Guarda]";
	mes "No interesse de proteger a paz, vamos desarmar o equipamento uma vez que você entrar.";
	mes "Sua cooperação é muito apreciada.";
	close;
}

// ------------------------------------------------------------------
payon,249,156,1	script	Mulher#pay	1_F_01,{
	mes "[Mulher]";
	mes "Você deve ter tido uma certa dificuldade em conseguir andar através da floresta de payon como foi a viagem?";
	next;
	mes "[Mulher]";
	mes "Temos recebido menos turistas por causa do aumento de monstros lá fora, por isso está mais quieto hoje.";
	next;
	mes "[Mulher]";
	mes "Para ser honesto, as coisas estão ficando difíceis, por causa de todos esses monstros.";
	mes "^666666*Sigh...*^000000";
	next;
	if (Sex == SEX_MALE) {
		mes "[Mulher]";
		mes "Eu notei que seus braços são bastante grossos.";
		mes "Você parece muito forte, cara.";
		mes "Quantos monstros você matou?";
	} else {
		mes "[Mulher]";
		mes "Eu não percebi antes, mas você olhar bem forte embaixo de todo esse charme feminino.";
	}
	next;
	mes "[Mulher]";
	mes "Ei, eu sei de um lugar bom para você caçar.";
	mes "Acontece que há uma caverna no meio de Payon.";
	next;
	mes "[Mulher]";
	mes "Se você estiver interessado, vá para o Norte, passe pela floresta, e siga em direção ao noroeste.";
	mes "Você saberá que você chegou quando você estiver num lugar com o o mau cheiro de monstros.";
	next;
	switch(select("Parece perigoso!", "Melhor eu me preparar ...!", "É um belo vestido o seu")) {
		case 1:
		mes "[Mulher]";
		mes "Oh venha, não seja coverde.";
		mes "É apenas uma simples caverna cheia de monstros normais.";
		mes "É bastante seguro.";
		mes "Temos ainda uma vila de arqueiros perto da caverna para evitar incidentes infelizes.";
		mes "Hohoohoho.";
		break;
		case 2:
		mes "[Mulher]";
		mes "Ah, não se preocupe com qualquer preparação.";
		mes "Existe uma loja de ferramenta perto da caverna.";
		mes "Assim você pode comprar qualquer coisa que você precise com o senhor husban.";
		break;
		case 3:
		mes "[Mulher]";
		mes "Oh hohohoho!";
		mes "Você soube da mais nova notícia?";
		mes "Eu ouvi que saiu umas novas tendências de moda em Prontera esses dias.";
		next;
		mes "[Mulher]";
		mes "A maioria das mulheres nesta cidade ainda não sabem nada sobre moda!";
		mes "Meu marido comprou esse presente pra mim.";
		mes "Ele faz muito dinheiro, você sabia? Hohohoho.";
		break;
	}
	close;
}

// ------------------------------------------------------------------
payon,246,158,5	script	Mulher#pay2	1_F_01,0,0,{
	mes "[Mãe de Jim]";
	mes "Oh Garoto.";
	mes "Lá vai ela de novo.";
	mes "Está vendo aquela mulher?";
	mes "É a fofoqueira da cidade.";
	next;
	mes "[Mãe de Jim]";
	mes "Por favor, não julgue o resto das pessoas que vivem em Payon por seu comportamento.";
	mes "Ela é a única pessoa que grita.";
	mes "Eu acho que ela está muito animada pelo que a cartomante lhe disse.";
	next;
	if (Sex == SEX_MALE) {
		mes "[Mãe de Jim]";
		mes "Ooh, garoto...";
		mes "você tem ombros largos você gostaria de sair comigo?";
		mes "Posso te convidar para um jantar.";
	} else {
		mes "[Mãe de Jim]";
		mes "Meu, você é uma bela garota!";
		mes "Tenho certeza que você anda ocupada batendo nos meninos com um pedaço de pau.";
	}
	next;
	if (select("Cartomante..?", "Bem, eu vejo você mais tarde") == 1) {
		mes "[Mãe de Jim]";
		mes "Oh sim...";
		mes "Existe uma cartomante extraordinária no Palácio Central de Payon.";
		mes "Quanto mais você paga a ela, mais sorte você vai ganhar!";
		next;
		mes "[Mãe de Jim]";
		mes "Ela me disse que gostaria de conhecer um cara legal este mês.";
		mes "Hohohoho.";
		close;
	}
	mes "[Mãe de Jim]";
	mes "Mmmm...?";
	mes "Você não tem um tempo, para ficar e bater um papo comigo?";
	close;
}

// ------------------------------------------------------------------
payon,210,110,1	script	Bêbado#pay	2_M_PHARMACIST,{
	if (Class != Job_Archer) {
		mes "[Bêbado]";
		mes "Ei...";
		mes "E-Ei...!";
		next;
		mes "[Bêbado]";
		mes "Eu me pergunto porque esses estupidos arqueiros vem me incomodar com o mesmo objetivo sempre!";
		mes "Você é tão fraco!";
		mes "Eu disse FRAAAAACO!";
		next;
		mes "[Bêbado]";
		mes "Bwahahahaha!";
		mes "Será que você poderia comprar para mim uma bebida?";
	} else {
		mes "[Bêbado]";
		mes "Opa, um arqueiro! Seja homem ou um garoto";
		mes "Vocês são os melhores!";
		next;
		mes "[Bêbado]";
		mes "Bwahahahaha!";
		mes "Será que você poderia comprar para mim uma bebida?";
	}
	next;
	switch(select("Certo, mas só uma bebida", "Não, obrigado amigo", "Nem pensar!!")) {
		case 1:
		if (Zeny > 100) { 
			Zeny -= 100;
			mes "[Bêbado]";
			mes "Obrigado...!";
			next;
			mes "[Bêbado]";
			mes "A maioria das pessoas nunca querem comprar bebidas para mim!";
			mes "Talvez porque eu era acostumado abrincar demais com as senhoras da minha época!";
			next;
			mes "[Bêbado]";
			mes "Embora, as mulheres que eu costumava brincar estão velhinhas agora!";
			mes "Hahahahaha!";
			mes "Um dia desses elas ainda se enfeitavam e colocavam maquiagem, você acredita nisso?";
			next;
		}
		mes "[Bêbado]";
		mes "Eu sou assim mesmo, um pouco brincalhão...";
		mes "Vamos lá...";
		mes "Alguns rostos eram minhas paixões!";
		mes "Calma, hahaha eu fiz uma piada.";
		mes "Bwahahahahahah!";
		close;
		case 2:
		mes "[Bêbado]";
		mes "Bah!";
		mes "As crianças de hoje não respeitam os mais velhos.";
		mes "Por isso não te cobrarei respeito a mim";
		close;
		case 3:
		mes "[Bêbado]";
		mes "Tudo bem...";
		mes "Por mim tudo bem, não preciso do seu respeito por mim!";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
payon_in01,180,7,2	script	Garçonete#pay	4_F_01,{
	mes "[Garçonete]";
	mes "Este lugar sempre está movimentado com pessoas.";
	mes "Noviços sempre aparecem por aqui para virar arqueiros, ou para comprar flecha.";
	mes "Eles se divertem enquanto eu fico aqui nessa pequena loja.";
	next;
	mes "[Garçonete]";
	mes "Eu já estou ficando cansada e doente de tanto fazer sopa de macarrão.";
	mes "Tenho que tomar diversos banhos ao dia, para me livrar desse cheiro.";
	mes "E acredite não é nada fácil livrar-se dele.";
	next;
	mes "[Garçonete]";
	mes "Eu me sinto tão...";
	mes "Entediada e sozinha...";
	next;
	if (Sex == SEX_MALE) {
		mes "[Garçonete]";
		mes "Onde posso encontrar a pessoa certa, alguém amável e meiga, para me levar daqui?";
		mes "Hum, Hey! você está me ouvindo?";
	} else {
		mes "[Garçonete]";
		mes "Onde eu posso encontrar a pessoa certa.";
		mes "Mas que seja um pouco dificil de conquistar, para poder me levar daqui?";
		mes "Hum, heeeeei você está me ouvindo?";
	}
	next;
	mes "[Garçonete]";
	mes "A cartomante velha, me disse que eu teria muita sorte em um futuro próximo.";
	mes "Mas o que há de errado comigo?";
	mes "Eu estou vivendo dia após dia e nada...";
	mes "Talvez eu seja um burro e azarado mesmo...";
	next;
	mes "[Garçonete]";
	mes "Sinto muito.";
	mes "Eu falo demais.";
	mes "Agora vou apenas ouvir...";
	mes "Lamento por você ter ouvido tantas asneiras.";
	next;
	mes "[Garçonete]";
	mes "Então...";
	mes "Como posso te ajudar?";
	next;
	switch(select("Você ja ouviu falar de zumbis?", "Bancário...?", "Preciso de uma bebida.")) {
		case 1:
		mes "[Garçonete]";
		mes "É claro que quero ouvir sobre zumbis!";
		mes "Esta é Payon agora.";
		mes "Você pode encontrar zumbis caminhando, eles são mortos-vivos, e você pode facilmente encontrá-los aqui.";
		next;
		mes "[Garçonete]";
		mes "Eu ouvi dizer que eles temem a santidade, por isso eles tem medo de arqueiros.";
		mes "Eles preferem usar setas feitas de prata, um metal sagrado, que é infalível contra eles.";
		next;
		mes "[Garçonete]";
		mes "A lenda diz que o chefe desta cidade, usava flechas de prata contra os zumbis.";
		mes "Que costumavam ser seus irmãos, afim de liberar suas almas para que pudessem descansar em paz.";
		next;
		mes "[Garçonete]";
		mes "Nós acreditamos que se exorcizarmos os zumbis, poderemos leválos pacificamente a uma vida após a morte.";
		mes "E que suas almas não precisaram viver angustiadas nunca mais.";
		next;
		mes "[Garçonete]";
		mes "Você pode não acreditar nas nossas crenças,mas meu avô foi um dos mortos-vivos.";
		mes "Acredito que meu chefe era capaz de libertá-lo do mundo dos vivos.";
		close;
		case 2:
		mes "[Garçonete]";
		mes "Temos uma cartomante, ela é uma pessoa extraordinária.";
		mes "Porém ela não fica mais por aqui, como ela fazia antigamente.";
		next;
		mes "[Garçonete]";
		mes "Ela costumava ficar aqui, para nos contar sobre a sorte da nossa vida, só que ela foi reconhecida por ter este talento.";
		mes "Foi levada pelo nosso chefe.";
		mes "Agora ela fica no palácio central, então se quiser vê-la terá que ir até la.";
		close;
		case 3:
		mes "[Garçonete]";
		mes "Você... precisa de alguma bebida?";
		mes "Não temos nada ao seu gosto?";
		next;
		mes "[Garçonete]";
		mes "Eu sinto muito, não vendemos para fora.";
		mes "Não podemos nos dar ao luxo de preparar o alcóol, poos há criaturas hostis lá fora.";
		mes "Mas por favor, volte mais tarde.";
		mes "Desculpe-nos pelos transtornos.";
		close;
	}
}
