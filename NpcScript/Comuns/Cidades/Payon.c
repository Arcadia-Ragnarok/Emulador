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
| - Nota: Npcs comuns na cidade Payon                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
payon,246,154,0	script	Senhorita#pay	4_F_01,{
	mes("[Senhorita]\n H� muito tempo atr�s Payon, quando ainda estava em desenvolvimento, muitos dos alde�es viviam na pobreza.");
	next;
	mes("[Senhorita]\n Muitas fam�lias tiveram que lutar para sobreviver, e muitas vezes n�o conseguiam.\n Elas tiveram que lutar para sobreviver, e muitas vezes n�o conseguiam pagar corretamente o enterro dos seus mortos.\n Algumas pessoas jogavam seus mortos na caverna perto da aldeia.");
	next;
	mes("[Senhorita]\n Ent�o, naquela caverna, � dito que existem muitos zumbis andando.\n Eles s�o mortos que n�o podem descansar em paz e s�o incapazes de passar para o outro mundo.");
	next;
	mes("[Senhorita]\n Os Zumbis,ap�s detectarem o calor de um ser humano, come�am a atac�-los.\n Mas isso n�o significa que esses mortos-vivos guardam rancor contra os vivos.");
	next;
	mes("[Senhorita]\n Seus corpos podres n�o puderam sair da caverna fria, escura e �mida.\n Por isso � instintivo para eles atacarem o calor que vai acelerar a decomposi��o de seus corpos.");
	next;
	mes("[Senhorita]\n Os zumbis na caverna de Payon podem ser assustadores,mas as suas hist�rias tamb�m s�o tr�gicas.");
	close;
}

// ------------------------------------------------------------------
payon,134,211,4	script	Homem Jovem#pay	1_M_ORIENT01,{
	mes("[Homem Jovem]\n Pelo seu rosto eu posso ver que voc� n�o � daqui.\n Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + " a Payon.");
	next;
	mes("[Homem Jovem]\n Voc� deve ser um lutador bem experiente.\n Caso contr�rio voc� nunca seria capaz de chegar aqui depois de passar por areas �ngremes.\n �reas montanhosas e criaturas perigosas ao redor desta cidade.");
	next;
	mes("[Homem Jovem]\n Eu n�o sou nenhum perito em combate.\n Mas algu�m me disse uma vez que a for�a bruta sozinha n�o ser� capaz de vencer algumas batalhas");
	next;
	mes("[Homem Jovem]\n �s vezes, voc� poder� encontrar criaturas protegidas por uma casca dura que n�o � danificada por ataques f�sicos.\n S� o poder ps�quico, como os dos M�gicos, podem facilmente derrotar essas criaturas.");
	next;
	mes("[Homem Jovem]\n Naturalmente, nem todos podem estudar magia.\n O ponto � que voc� deve manter diferentes tipos de amigos e camaradas perto de voc�.\n Porque voc� n�o pode lidar com cada situa��o por si mesmo.");
	close;
}

// ------------------------------------------------------------------
payon,176,85,0	script	Homem Jovem#pay2	4_M_ORIENT01,{
	mes("[Homem Jovem]\n Lembro-me da hist�ria do meu saudoso av� me contou.");
	next;
	mes("[Homem Jovem]\n � sobre este amuleto, que possui um poder maligno.\n Com ele, voc� pode despertar os mortos da sepultura.");
	next;
	mes("[Homem Jovem]\n Bem, eu n�o tenho certeza se � verdade ou n�o.\n Mas, eu pergunto, o que aconteceria se eu o usasse para chamar meu av� de outro reino ....");
	next;
	mes("[?]\n ^3299CCnunca pense uma coisa dessas meu filho.^000000");
	next;
	mes("[Homem Jovem]\n EEEEEEK-!\n O que foi aquilo?\n A-av�...?");
	next;
	mes("...");
	next;
	mes("[Homem Jovem]\n ...\n D-Deus...?");
	close;
}

// ------------------------------------------------------------------
payon,158,246,3	script	Guarda#pay	4_M_PAY_SOLDIER,{
	mes("[Guarda]\n Este � o Pal�cio Central de Payon.\n Este local � aberto ao p�blico, mas de acordo com nossas leis.\n Voc� deve se comportar de forma ordenada, uma vez dentro.");
	next;
	mes("[Guarda]\n No interesse de proteger a paz, vamos desarmar o equipamento uma vez que voc� entrar.\n Sua coopera��o � muito apreciada.");
	close;
}

// ------------------------------------------------------------------
payon,249,156,1	script	Mulher#pay	1_F_01,{
	mes("[Mulher]\n Voc� deve ter tido uma certa dificuldade em conseguir andar atrav�s da floresta de payon como foi a viagem?");
	next;
	mes("[Mulher]\n Temos recebido menos turistas por causa do aumento de monstros l� fora, por isso est� mais quieto hoje.");
	next;
	mes("[Mulher]\n Para ser honesto, as coisas est�o ficando dif�ceis, por causa de todos esses monstros.\n ^666666*Sigh...*^000000");
	next;
	if (Sex == SEX_MALE) {
		mes("[Mulher]\n Eu notei que seus bra�os s�o bastante grossos.\n Voc� parece muito forte, cara.\n Quantos monstros voc� matou?");
	} else {
		mes("[Mulher]\n Eu n�o percebi antes, mas voc� olhar bem forte embaixo de todo esse charme feminino.");
	}
	next;
	mes("[Mulher]\n Ei, eu sei de um lugar bom para voc� ca�ar.\n Acontece que h� uma caverna no meio de Payon.");
	next;
	mes("[Mulher]\n Se voc� estiver interessado, v� para o Norte, passe pela floresta, e siga em dire��o ao noroeste.\n Voc� saber� que voc� chegou quando voc� estiver num lugar com o o mau cheiro de monstros.");
	next;
	switch(select("Parece perigoso!", "Melhor eu me preparar ...!", "� um belo vestido o seu")) {
		case 1:
		mes("[Mulher]\n Oh venha, n�o seja coverde.\n � apenas uma simples caverna cheia de monstros normais.\n � bastante seguro.\n Temos ainda uma vila de arqueiros perto da caverna para evitar incidentes infelizes.\n Hohoohoho.");
		break;
		case 2:
		mes("[Mulher]\n Ah, n�o se preocupe com qualquer prepara��o.\n Existe uma loja de ferramenta perto da caverna.\n Assim voc� pode comprar qualquer coisa que voc� precise com o senhor husban.");
		break;
		case 3:
		mes("[Mulher]\n Oh hohohoho!\n Voc� soube da mais nova not�cia?\n Eu ouvi que saiu umas novas tend�ncias de moda em Prontera esses dias.");
		next;
		mes("[Mulher]\n A maioria das mulheres nesta cidade ainda n�o sabem nada sobre moda!\n Meu marido comprou esse presente pra mim.\n Ele faz muito dinheiro, voc� sabia? Hohohoho.");
		break;
	}
	close;
}

// ------------------------------------------------------------------
payon,246,158,5	script	Mulher#pay2	1_F_01,0,0,{
	mes("[M�e de Jim]\n Oh Garoto.\n L� vai ela de novo.\n Est� vendo aquela mulher?\n � a fofoqueira da cidade.");
	next;
	mes("[M�e de Jim]\n Por favor, n�o julgue o resto das pessoas que vivem em Payon por seu comportamento.\n Ela � a �nica pessoa que grita.\n Eu acho que ela est� muito animada pelo que a cartomante lhe disse.");
	next;
	if (Sex == SEX_MALE) {
		mes("[M�e de Jim]\n Ooh, garoto...\n voc� tem ombros largos voc� gostaria de sair comigo?\n Posso te convidar para um jantar.");
	} else {
		mes("[M�e de Jim]\n Meu, voc� � uma bela garota!\n Tenho certeza que voc� anda ocupada batendo nos meninos com um peda�o de pau.");
	}
	next;
	if (select("Cartomante..?", "Bem, eu vejo voc� mais tarde") == 1) {
		mes("[M�e de Jim]\n Oh sim...\n Existe uma cartomante extraordin�ria no Pal�cio Central de Payon.\n Quanto mais voc� paga a ela, mais sorte voc� vai ganhar!");
		next;
		mes("[M�e de Jim]\n Ela me disse que gostaria de conhecer um cara legal este m�s.\n Hohohoho.");
		close;
	}
	mes("[M�e de Jim]\n Mmmm...?\n Voc� n�o tem um tempo, para ficar e bater um papo comigo?");
	close;
}

// ------------------------------------------------------------------
payon,210,110,1	script	B�bado#pay	2_M_PHARMACIST,{
	if (Class != Job_Archer) {
		mes("[B�bado]\n Ei...\n E-Ei...!");
		next;
		mes("[B�bado]\n Eu me pergunto porque esses estupidos arqueiros vem me incomodar com o mesmo objetivo sempre!\n Voc� � t�o fraco!\n Eu disse FRAAAAACO!");
		next;
		mes("[B�bado]\n Bwahahahaha!\n Ser� que voc� poderia comprar para mim uma bebida?");
	} else {
		mes("[B�bado]\n Opa, um arqueiro! Seja homem ou um garoto\n Voc�s s�o os melhores!");
		next;
		mes("[B�bado]\n Bwahahahaha!\n Ser� que voc� poderia comprar para mim uma bebida?");
	}
	next;
	switch(select("Certo, mas s� uma bebida", "N�o, obrigado amigo", "Nem pensar!!")) {
		case 1:
		if (Zeny > 100) { 
			Zeny -= 100;
			mes("[B�bado]\n Obrigado...!");
			next;
			mes("[B�bado]\n A maioria das pessoas nunca querem comprar bebidas para mim!\n Talvez porque eu era acostumado abrincar demais com as senhoras da minha �poca!");
			next;
			mes("[B�bado]\n Embora, as mulheres que eu costumava brincar est�o velhinhas agora!\n Hahahahaha!\n Um dia desses elas ainda se enfeitavam e colocavam maquiagem, voc� acredita nisso?");
			next;
		}
		mes("[B�bado]\n Eu sou assim mesmo, um pouco brincalh�o...\n Vamos l�...\n Alguns rostos eram minhas paix�es!\n Calma, hahaha eu fiz uma piada.\n Bwahahahahahah!");
		close;
		case 2:
		mes("[B�bado]\n Bah!\n As crian�as de hoje n�o respeitam os mais velhos.\n Por isso n�o te cobrarei respeito a mim");
		close;
		case 3:
		mes("[B�bado]\n Tudo bem...\n Por mim tudo bem, n�o preciso do seu respeito por mim!");
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
payon_in01,180,7,2	script	Gar�onete#pay	4_F_01,{
	mes("[Gar�onete]\n Este lugar sempre est� movimentado com pessoas.\n Novi�os sempre aparecem por aqui para virar arqueiros, ou para comprar flecha.\n Eles se divertem enquanto eu fico aqui nessa pequena loja.");
	next;
	mes("[Gar�onete]\n Eu j� estou ficando cansada e doente de tanto fazer sopa de macarr�o.\n Tenho que tomar diversos banhos ao dia, para me livrar desse cheiro.\n E acredite n�o � nada f�cil livrar-se dele.");
	next;
	mes("[Gar�onete]\n Eu me sinto t�o...\n Entediada e sozinha...");
	next;
	if (Sex == SEX_MALE) {
		mes("[Gar�onete]\n Onde posso encontrar a pessoa certa, algu�m am�vel e meiga, para me levar daqui?\n Hum, Hey! voc� est� me ouvindo?");
	} else {
		mes("[Gar�onete]\n Onde eu posso encontrar a pessoa certa.\n Mas que seja um pouco dificil de conquistar, para poder me levar daqui?\n Hum, heeeeei voc� est� me ouvindo?");
	}
	next;
	mes("[Gar�onete]\n A cartomante velha, me disse que eu teria muita sorte em um futuro pr�ximo.\n Mas o que h� de errado comigo?\n Eu estou vivendo dia ap�s dia e nada...\n Talvez eu seja um burro e azarado mesmo...");
	next;
	mes("[Gar�onete]\n Sinto muito.\n Eu falo demais.\n Agora vou apenas ouvir...\n Lamento por voc� ter ouvido tantas asneiras.");
	next;
	mes("[Gar�onete]\n Ent�o...\n Como posso te ajudar?");
	next;
	switch(select("Voc� ja ouviu falar de zumbis?", "Banc�rio...?", "Preciso de uma bebida.")) {
		case 1:
		mes("[Gar�onete]\n � claro que quero ouvir sobre zumbis!\n Esta � Payon agora.\n Voc� pode encontrar zumbis caminhando, eles s�o mortos-vivos, e voc� pode facilmente encontr�-los aqui.");
		next;
		mes("[Gar�onete]\n Eu ouvi dizer que eles temem a santidade, por isso eles tem medo de arqueiros.\n Eles preferem usar setas feitas de prata, um metal sagrado, que � infal�vel contra eles.");
		next;
		mes("[Gar�onete]\n A lenda diz que o chefe desta cidade, usava flechas de prata contra os zumbis.\n Que costumavam ser seus irm�os, afim de liberar suas almas para que pudessem descansar em paz.");
		next;
		mes("[Gar�onete]\n N�s acreditamos que se exorcizarmos os zumbis, poderemos lev�los pacificamente a uma vida ap�s a morte.\n E que suas almas n�o precisaram viver angustiadas nunca mais.");
		next;
		mes("[Gar�onete]\n Voc� pode n�o acreditar nas nossas cren�as,mas meu av� foi um dos mortos-vivos.\n Acredito que meu chefe era capaz de libert�-lo do mundo dos vivos.");
		close;
		case 2:
		mes("[Gar�onete]\n Temos uma cartomante, ela � uma pessoa extraordin�ria.\n Por�m ela n�o fica mais por aqui, como ela fazia antigamente.");
		next;
		mes("[Gar�onete]\n Ela costumava ficar aqui, para nos contar sobre a sorte da nossa vida, s� que ela foi reconhecida por ter este talento.\n Foi levada pelo nosso chefe.\n Agora ela fica no pal�cio central, ent�o se quiser v�-la ter� que ir at� la.");
		close;
		case 3:
		mes("[Gar�onete]\n Voc�... precisa de alguma bebida?\n N�o temos nada ao seu gosto?");
		next;
		mes("[Gar�onete]\n Eu sinto muito, n�o vendemos para fora.\n N�o podemos nos dar ao luxo de preparar o alc�ol, poos h� criaturas hostis l� fora.\n Mas por favor, volte mais tarde.\n Desculpe-nos pelos transtornos.");
		close;
	}
}
