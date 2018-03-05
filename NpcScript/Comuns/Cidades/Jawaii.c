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
| - Nota: Npcs comuns na cidade Jawaii                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
jawaii,188,218,7	script	Senhorita da Taberna#jaw	1_F_PUBGIRL,{
	mes("[Senhorita]\n Oh, querida pessoa!\n Você não está indo para taberna, certo?");
	next;
	if (select("Não, eu não estou", "Oh sim") == 1) {
		mes("[Senhorita]\n Ufa!\n Graças a deus!\n É exatamente isso...\n A taberna provavelmente não é o melhor lugar para você se divertir.");
		next;
	}
	mes("[Senhorita]\n Mesmo que eu trabalhe lá, ainda não consigo acreditar que existe esse tipo de lugar.\n Pensei que o alcool fosse proibido no Reino de Rune-Midgard.");
	next;
	mes("[Senhorita]\n Eu não faço idéia do que os solteiros serão capazes de encontrar nesse lugar.\n Mas ouvi dizer que muitas pessoas diferentes vem aqui por razões diferentes.");
	next;
	mes("[Senhorita]\n Eu mesma vi pessoas que não são casadas vindo aqui somente para ficar bêbadas.\n Ah, e por algum motivo essas pessoas desaparecem da Taberna!");
	next;
	mes("[Senhorita]\n Então eu me pergunto, o que está acontecendo?\n Eu sou uma garçonete que trabalha lá, mas eu te digo para não ir lá...");
	close;
}

// ------------------------------------------------------------------
jawaii,220,235,3	script	Moradora de Jawaii#jaw	4_F_07,{
	mes("[Jawa Jawa]\n Você sabe qual é o lugar mais bonito de Jawaii?");
	next;
	mes("[Jawa Jawa]\n É a 'Ilha de Coração' onde a localização é ao norte da Ilha.\n A água ao redor do coração da ilha não é profunda, então você pode atravessar.");
	next;
	mes("[Jawa Jawa]\n Esse é o melhor lugar para compartilhar o momento mais íntimo com a pessoa que ama.\n É um lugar isolado cercado por uma linda área.");
	next;
	mes("[Jawa Jawa]\n É claro, provavelmente não é uma boa idéia ir lá se você estiver só.\n Você ficaria com cara de um perdedor patético!");
	close;
}

// ------------------------------------------------------------------
jawaii,240,146,5	script	Moradora de Jawaii#jaw2	4_F_07,{
	mes("[Waii Waii]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Jawaii!");
	next;
	mes("[Waii Waii]\n Aqui, você pode aproveitar sua lua de mel sem se preocupar com interrupções.\n Você não precisa se preocupar com as rotinas de um exército.");
	next;
	mes("[Waii Waii]\n Bem, ao redor existem alguns monstros, mas você ficará bem se não atacá-ls.\n Pense neles como habitantes originais da ilha, sendo uma visão a ser aprecidada.");
	close;
}

// ------------------------------------------------------------------
jawaii,168,247,5	script	Moradora de Jawaii#jaw3	4_F_07,{
	mes("[Waja Waja]\n Ah, você deve ser um turista.\n Se você está perdido, dirija-se ao Oeste, onde estão as acomodações dos recém casados.\n Que estão localizadas na parte ocidental de Jawaii.\n As acomodações são incríveis.");
	next;
	mes("[Waja Waja]\n Existem quatro diferentes salas temáticas, assim você pode escolher uma de seu gosto.\n Também existe um guia se precisar pedir informações.");
	next;
	mes("[Waja Waja]\n Quando você quiser sair, por favor, dirija-se ao navio do noroeste para ir em Alberta.\n Se você deseja retornar a Izlude, existe um navio aguardando ao Sudeste.");
	close;
}

// ------------------------------------------------------------------
jawaii,165,121,1	script	Moradora de Jawaii#jaw4	4_F_07,{
	mes("[Iwa Iwa]\n Jawaii...\n Jawaii....\n É onde você pode encontrar a felicidade!");
	next;
	mes("[Iwa Iwa]\n Ahh, não é linda?\n Você não precisa fazer mais nada além de relaxar e respirar nessa atmosfera pacífica.\n Essa é uma das melhores coisas em Jawaii.");
	next;
	mes("[Iwa Iwa]\n Ahh!\n As vezes a gente espera algum concerto nesse palco.\n Se você é um bom cantor porque não sobe ao palco e canta para nós?");
	next;
	mes("[Iwa Iwa]\n Jawaii...\n Jawaii....\n É onde você pode encontrar a felicidade...");
	close;
}

// ------------------------------------------------------------------
jawaii,141,200,3	script	Atendente#jaw	4_M_NFMAN,{
	mes("[Alowa]\n Essa é n-no-nossa sa-sala de doces.\n Nós, estamos li-limpando esta sa-sala para você é cla-claro.");
	next;
	mes("[Alowa]\n Para fi-ficar aqui é 1000 zeny po-por pessoa.\n Po-por favor, me pague a taxa e eu vou deixar você entrar... eu juro!");
	next;
	mes("[Alowa]\n E-eu também vou le-levar sua bagagem, ma-mas me pague primeiro.\n Ou meu pa-patrão vai ficar insatisfeito comigo...");
	next;
	if (select("Pagar", "Cancelar") == 1) {
		if (Zeny > 999) {
			mes("[Alowa]\n Mu-muito o-obrigada!\n De-deixe-me abrir os aposentos para você.\n Obrigada.\n E tenha um ótimo dia.");
			close2;
			Zeny -= 1000;
			warp("jawaii_in", 116, 64);
			end;
		}
		mes("[Alowa]\n Ah não! Ah não não não não.\n Se-seu dinheiro não é suficiente?");
		close;
	}
	mes("[Alowa]\n Ma-mas, eu prometo, es-se quarto é o mais bonito e li-limpo!\n Po-porfavor!\n Volte quando quiser!");
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
jawaii,108,199,5	script	Funcionária#jaw	1_F_MERCHANT_02,{
	mes("[Oran Pinheiro]\n Bem vind"+ (Sex == SEX_MALE ? "o" : "a") +" ao aposento antigo.");
	next;
	mes("[Oran Pinheiro]\n Esse aposento proporcionará aos amantes uma atmosfera de elegância com pelúcia.\n Todo conforto será providenciado para o jovem casal nesse aposento.");
	next;
	mes("[Oran Pinheiro]\n Todos os quartos basicamente tem a mesma estrutura.\n Mas cada um tem um interior único para antender a gostos diferentes.");
	next;
	mes("[Oran Pinheiro]\n Se você gostar daqui, será cobrada uma taxa de 1.000 zeny por pessoa para entrar.\n Aqui você vai construir ótimas lembranças em sua lua de mel.\n Você deve ficar nesse belo quarto.");
	next;
	mes("[Oran Pinheiro]\n Não hesite em me deixar saber quando tiver escolhido esse Aposento Antigo.\n Uma vez que tenha feito a escolha eu leverei você nele.");
	next;
	if (select("Pagar","Cancelar") == 1) {
		if (Zeny > 999) {
			mes("[Oran Pinheiro]\n Muito obrigado por usar nossos serviços.\n Por favor...\n Sinta-se confortável.");
			close2;
			Zeny -= 1000;
			warp("jawaii_in", 129, 110);
			end;
		}
		mes("[Oran Pinheiro]\n Eu sinto muito, mas você não possui dinheiro.");
		close;
	}
	mes("[Oran Pinheiro]\n Por favor...\n Aproveite seu tempo.\n Você não deve ter pressa quando se trata de lazer.");
	close;
}

// ------------------------------------------------------------------
jawaii,107,189,5	script	Funcionária#jaw2	4_F_04,{
	mes("[Sharkie Rania]\n Eu vou levar você para o Quarto de Mel.\n E vai custar ^0000FF1.000^000000 zenys.");
	next;
	mes("[Sharkie Rania]\n Então, você vai querer ir?");
	next;
	if (select("Pagar", "Cancelar") == 1) {
		if (Zeny > 999) {
			mes("[Sharkie Rania]\n Ehh, certo.\n Vamos indo.");
			close2;
			Zeny -= 1000;
			warp ("jawaii_in", 86, 117);
			end;
		}
		mes("[Sharkie Rania]\n Você...\n Não tem dinheiro suficiente.");
		close;
	}
	mes("[Sharkie Rania]\n Sem problemas.");
	close;
}

// ------------------------------------------------------------------
jawaii,112,173,7	script	Funcionária#jaw3	4_F_04,{
	mes("[Larks Rania]\n Olá querido como você está?\n Você está procurando por um quarto para ficar?");
	next;
	mes("[Larks Rania]\n Esse é chamado de Quarto Villa.\n Eu recomendo esse quarto para pessoas que preferem ficarm eum um lugar com um ambiente confortável e muito caseiro.");
	next;
	mes("[Larks Rania]\n Assim como todas as outras salas a estadia aqui vai custar 1.000 zeny.\n Eu posso guiar você até o Quarto Villa nesse momento, se você quiser.\n Será que você gostaria de ficar?");
	next;
	if (select("Pagar", "Cancelar") == 1) {
		if (Zeny > 999) {
			mes("[Larks Rania]\n Muito obrigado.\n Aproveite sua estadia.");
			close2;
			Zeny -= 1000;
			warp("jawaii_in", 87, 75);
			end;
		}
		mes("[Larks Rania]\n Ah, que vergonha!\n Você parece não ter dinheiro suficiente...?");
		close;
	}
	mes("[Larks Rania]\n Sem problema.\n Se você quiser, vai poder ver o Quarto de Mel.");
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
jawaii_in,25,94,0	script	Atendente#jaw2	4_F_07,{
	mes("[Atendente Tryteh]\n Bem vind"+(Sex == SEX_MALE ? "o" : "a") + " a Taberna de Jawaii.");
	if (getpartnerid()) {
		mes(" Estou tão feliz com o casamento de vocês.\n Espero que vivam felizes para sempre.");
		next;
		mes("[Atendente Tryteh]\n Tome cuidado com clientes rudes.\n Eles podem estar bêbados e comportarem-se mal.\n Sabe como é...");
		close;
	} else {
		mes(" Espero que aproveite sua estadia aqui.\n Mas tente não beber muito.");
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,96,0	script	Atendente#jaw3	4_F_07,{
	mes("[Atendente Fey]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Taberna de Jawaii.");
	if (getpartnerid()) {
		next;
		mes("[Atendente Fey]\n Esperamos que aprecie sua estadia com a sua amada.\n Esse lugar não é aconchegante e com uma atmosfera romântica?");
		next;
		mes("[Atendente Fey]\n Seria absolutamente perfeito se não fossem esses estranhos da 'Armada dos Solteiros Invencíveis'.\n Eles apareceram aqui por algum motivo.\n Que vão para o inferno!");
		close;
	} else {
		mes(" Divirta-se!\n Mas por favor tente não atrapalhar os recém-casados daqui!");
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,98,0	script	Atendente#jaw4	4_F_07,{
	if (getpartnerid()) {
		mes("[Atendente Buffy]\n Oh!\n Olhe só...");
		if (Sex == SEX_MALE) {
			mes(" Você é o par ideal para sua esposa.");
		} else {
			mes(" Você é o par ideal para o seu marido.");
		}
		mes(" Awwww, gostaria de me casar em breve!");
		close;
	} else {
		mes("[Atendente Buffy]\n Hmm...?");
		if (Sex == SEX_MALE) {
			next;
			mes("[Atendente Buffy]\n Sou muito competente para cozinhar e limpar.\n Tenho um ^FF0000belo corpo^000000.\n O que você acha...?");
		}
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,100,0	script	Atendente#jaw5	4_F_07,{
	mes("[Atendente Itere]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Taberna de Jawaii.");
	if (getpartnerid()) {
		next;
		mes("[Atendente Itere]\n Oh!\n Você parece tão feliz por estar aqui com a sua amada!\n Que beleza!");
		close;
	} else {
		mes(" Espero que aproveite a sua est...\n Espere um pouco...!");
		next;
		mes("[Atendente Itere]\n Você...\n É melhor que você não seja membro da Armada dos Solteiros Invencíveis!");
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,94,4	script	Atendente#jaw6	4_F_07,{
	mes("[Atendente Tonia]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Taberna de Jawaii.");
	if (getpartnerid()) {
		next;
		mes("[Atendente Tonia]\n Parabéns à vocês dois!");
		next;
		mes("[Atendente Tonia]\n ^666666*Suspiro...*^000000\n ^333333Espero que esses caras da Armada dos Solteiros não fiquem bêbados e façam besteiras de novo...");
		close;
	} else {
		mes(" Espere. Você...!");
		next;
		mes("[Atendente Tonia]\n Ei...!\n Você não é bem vindo aqui!\n P-pare de beber!\n Agora mesmo!");
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,96,4	script	Atendente#jaw7	4_F_07,{
	mes("[Atendente Kay]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Taberna de Jawaii.");
	if (getpartnerid()) {
		next;
		mes("[Atendente Kay]\n Ah Deus...!\n Ultimamente estou tendo que lidar com bêbados demais aqui!\n É difícil tomar conta de tudo...");
		close;
	} else {
		mes(" Entendo que você queira relaxar, mas tome cuidado e não beba demais.");
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,98,4	script	Atendente#jaw8	4_F_07,{
	mes("[Atendente Amy]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Taberna de Jawaii.");
	if (getpartnerid()) {
		mes(" Oh! Vocês são perfeitos juntos!\n Parecem, hum, uma arma e uma bala!\n Não...?");
		next;
		mes("[Atendente Amy]\n Que tal...\n Leite e biscoitos?\n Gim e água tônica?\n Jackie Tucker e Chris Chan...?\n Hummmm....");
		close;
	} else {
		next;
		mes("[Atendente Amy]\n Hmm, não acho que esse seja o lugar certo para você.\n Mas posso deixá-lo beber e se divertir, desde que não exagere.");
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,100,4	script	Atendente#jaw9	4_F_07,{
	mes("[Atendente Yasmine]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Taberna de Jawaii.");
	if (getpartnerid()) {
		mes(" Assim como a lua e as estrelas, vocês são perfeitos juntos.\n Estou muito feliz por vocês!");
		close;
	} else {
		next;
		mes("[Atendente Yasmine]\n Acho que aqui não é o lugar certo para você.\n Mas espero que encontre a sua alma gêmea algum dia. Divirta-se!");
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,43,115,0	script	Cliente#jaw	4W_M_01,{
	mes("[Buchi]\n Você parece feliz...\n Espero que consiga se sentir assim pra sempre...\n ... \n ^666666*Hiccup...!*^000000");
	close;
}

// ------------------------------------------------------------------
jawaii_in,41,106,3	script	Cliente#jaw2	4W_M_02,{
	mes("[Cage]\n Somos livres...!\n Somos livres do inferno do casamento...!\n Somos solteiros sinceros e competentes...!");
	close;
}
