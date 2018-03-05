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
| - Nota: Npcs comuns na cidade Lighthalzen                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
lighthalzen,182,102,3	script	Lucius#lhz	4_M_LGTGRAND,{
	if (Zeny < 90000) {
		mes("[Lucius]\n Ol� jovem.\n Gostaria de fazer uma doa��o para ajudar os famintos?");
		next;
		if (select("Claro", "N�o, obrigado.") == 1) {
			mes("[Lucius]\n Voc� pode doar de 1 a 30 000 zenys.\n Que ser�o usados para auxiliar os pobres e alimentar crian�as famintas.\n Se voc� quer cancelar, digite '0'.");
			next;
			input(.@input);
			if (.@input > 30000) {
				mes("[Lucius]\n Por favor, insira um valor de 1 a 30000 para fazer uma doa��o aos necessitados, jovem.");
				close;
			} else if (.@input == 0) {
				mes("[Lucius]\n Que decepcionante.\n Mas voc� deve ter suas raz�es.\n Bem, quando voc� puder fazer uma doa��o aos necessitados, volte aqui.");
				close;
			}
			mes("[Lucius]\n Muito obrigado por sua doa��o de " + .@input + " zenys.\n Garanto que seu dinheiro ser� usado apenas para o benef�cio de quem necessita dele.");
			next;
			if (Zeny < .@input) {
				mes("[Lucius]\n Ainda assim, estou um pouco desapontado.\n Um aventureiro como voc� deveria doar o m�ximo poss�vel...");
				close;
			}
			Zeny -= .@input;
			$donatedzeny += .@input;
			mes("[Lucius]\n At� agora, eu recebi um total de " + $donatedzeny + " zennys em doa��es.\n Estou muito feliz de ver que ainda existem pessoas boas e generosas no mundo.");
			if ($donatedzeny > 260000) {
				next;
				mes("[Lucius]\n Isso deve ser o bastante para mandar para a Organiza��o de Ajuda aos Pobres.\n Por favor, aceite esse pequeno presente como um s�mbolo da minha gratid�o.\n Que Deus o aben�oe, aventureiro.");
				$donatedzeny = 0;
				.@weight1 = getiteminfo(.@Old_Blue_Box, ITEM_WEIGHT);
				.@weight2 = getiteminfo(.@Speed_Up_Potion, ITEM_WEIGHT);
				.@weightmax = .@weight1 + .@weight2;
				if ((MaxWeight - Weight) < .@weightmax) {
					next;
					mes("[Lucius]\n Oh...\n Infelismente voc� est� carregando muito peso.\n Lhe daria algo mas, voc� n�o vai conseguir carregar.\n Sinto muito, quem sabe uma pr�xima vez...");
					close;
				} else {
					getitem(Old_Blue_Box, 1);
					getitem(Speed_Up_Potion, 1);
				}
			}
			close;
		}
		mes("[Lucius]\n Entendo.\n Mas lembre-se que quando voc� doa com o cora��o, ser� recompensado dez vezes.\n Apesar de, admito, nem sempre os benef�cios serem imediatos.");
		close;
	}
	mes("[Lucius]\n Ol�, jovem.\n Voc� parece ser bastante rico.\n � bom ter dinheiro, mas tome cuidado para n�o ficar obcecado com isso.");
	next;
	mes("[Lucius]\n Quando tiver a chance, mostre sua generosidade com aqueles que podem n�o ter sorte como voc�.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,198,285,5	script	Jiwon#lhz	4_F_LGTGIRL,{
	mes("[Jiwon]\n Acho que temos muita sorte por poder viver em uma cidade t�o bonita e pac�fica como essa.");
	next;
	mes("[Jiwon]\n � t�o bom viver em um clima t�o agrad�vel.\n Com jardins t�o lindos e poder conhecer todas essas pessoas boas.\n Lighthalzen � como Asgard em Midgard, � um para�so na terra.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,220,244,3	script	Samnang#lhz	4_F_LGTGRAND,{
	mes("[Samnang]\n ^333333*Suspiro...*^000000\n Fica cada vez mais d�ficil me locomover enquanto envelhe�o.\n Mas acho que isso � compreens�vel, n�o?");
	next;
	mes("[Samnang]\n Mas alguns dias atr�s, uns caras de terno preto gritaram comigo para eu sair da frente deles.\n Mas claro que n�o pude me mover muito r�pido.\n Ent�o sabe o que eles fizeram?");
	next;
	mes("[Samnang]\n Me deram um soco.\n Bem na barriga!\n N�o � que eu esteja gr�vida, mas isso n�o importa.\n Homens nunca podem bater em mulheres, especialmente idosas!");
	close;
}

// ------------------------------------------------------------------
lighthalzen,261,112,3	script	Ruth#lhz	4_F_LGTGIRL,{
	mes("[Ruth]\n Amor, n�o � bom estarmos juntos aqui?\n � o lugar perfeito para o nosso encontro.");
	next;
	mes("[Ruth]\n Estou t�o feliz por estar com voc�.\n Sinto que estou derretendo de felicidade!\n Ah, eu te amo tanto, Oyoung.");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Epa...\n Esse casal est� indo para a Nuvem 9, n�o est�?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,259,108,7	script	Oyoung#lhz	4_M_LGTMAN,{
	mes("[Oyoung]\n Garota, parece que voc� foi picada pela mosquinha do amor.\n Mas h� um rem�dio para esse mal! Ahhh sim, eu garanto que h�!");
	next;
	mes("[Oyoung]\n Voc� precisa de uma dose di�ria da Vitamina do Oyoung!\n E pelo que vejo seus l�bios t�m defici�ncia dessa vitamina!\n Vou tomar conta disso!");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Minha nossa!\n N�o sei o que � mais assustador...\n Ele ter usado aquela cantada ou o fato de ela ter funcionado...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,233,121,3	script	Kariya#lhz	1_F_MARIA,{
	mes("[Kariya]\n Acho que \"Lighthalzen\" significa algo como \"Pico de Luz\".\n Apesar de ter ouvido que essa cidade foi nomeada para homenagear algu�m.\n Mas quem pode saber?");
	next;
	mes("[Kariya]\n Ainda assim, � um bom nome para a cidade mais luxuosa e abastada de toda a Rep�blica de Schwaltzvalt.\n O que voc� acha daqui?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,233,82,5	script	Sung#lhz	4_M_KID2,{
	mes("[Sung]\n Quando eu crescer, quero me tornar uma pessoa t�o grande que at� ir�o fazer uma est�tua de mim.\n Assim como outras est�tuas que foram feitas.");
	next;
	mes("[Sung]\n Ei voc�.\n Aquela est�tua.\n Esse cara deve ter sido importante!\n S� de pensar que isso me faz sentir t�o bem!");
	next;
	mes("[Sung]\n � isso a�.\n Eu vou ser reconhecido assim tamb�m algum dia.\n Nossa, e � melhor que eu cres�a em tamanho e fique bonito.\n Para quando fizerem minha est�tua ela parecer ainda mais incr�vel.\n Sim.\n Sim, boa id�ia, Sung...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,89,73,3	script	Sameer#lhz	4_M_EINMAN2,{
	mes("[Sameer]\n Existem muitos casais apaixonados nessa cidade.\n Abra�os e beijos e amassos.\n �...\n � um horror.");
	next;
	mes("[Sameer]\n N�o acredito na indec�ncia que vejo todo dia t�o perto da minha casa.\n Eles n�o percebem que n�o podem ser t�o entusiasmados em lugares p�blicos?!");
	next;
	mes("[Sameer]\n Felizmente para o mundo, sou um po�o de moralidade.\n Na verdade, nem preciso de mulheres.\n Tudo que preciso s�o meus navios de brinquedo e domin�.");
	next;
	mes("[Sameer]\n Sou um indiv�duo totalmente bem ajustado.\n � por isso que as autoridades deviam me ouvir quando digo para prenderem casais por atentado ao pudor!\n Andar de m�os dadas!\n Eles n�o t�m vergonha?!");
	close;
}

// ------------------------------------------------------------------
lighthalzen,45,59,7	script	Janice#lhz	4_F_LGTGRAND,{
	mes("[Janice]\n Ah n�o, acho que me perdi de novo.\n As ruas daqui s�o muito confusas.\n Moro aqui faz tempo, e ainda assim n�o consigo me achar...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,66,94,3	script	Elmer Keays#lhz	4_M_LGTGRAND,{
	mes("[Elmer Keays]\n Andar ao seu lado assim me lembra dos velhos tempos.\n Quando todos morriam de inveja por eu ter uma mulher t�o linda ao meu lado. Heh heh.");
	next;
	mes("[Elmer Keays]\n Voc� ainda � a mais bela vis�o para os meus velhos olhos, querida.\n Eu tenho muita sorte por estar com voc�.");
	emotion(e_kis, 0, "Margie Keays#lhz");
	emotion(e_kis2);
	close;
}

// ------------------------------------------------------------------
lighthalzen,65,94,5	script	Margie Keays#lhz	4_F_LGTGRAND,{
	mes("[Margie Keays]\n Ah querido, o tempo est� t�o bom e agrad�vel hoje.\n Estou muito feliz que n�s resolvemos dar um passeio juntos.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,78,120,3	script	Maivi#lhz	4_F_LGTGIRL,{
	mes("[Maivi]\n ...");
	next;
	mes("[Maivi]\n ......");
	next;
	mes("[Maivi]\n Ah...\n Acabei de tirar um cochilo �timo.\n Esse clima agrad�vel me deixa relaxar muito.\n O ar aqui � muito limpo, diferente do de Einbroch.");
	next;
	mes("[Maivi]\n Esse ambiente limpo e divino existe gra�as � Corpora��o Rekenber.\n � incr�vel o que eles fazem com a tecnologia atualmente!\n Ahhhh, � t�o tranquilo.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,230,182,4	script	Klaubis#lhz	4_M_LGTGRAND,{
	mes("[Klaubis]\n Com licen�a, mas voc� � um turista?\n Seja bem-vind"+ (Sex == SEX_MALE ? "o" : "a") +" a Lighthalzen!\n Essa cidade tem tudo que precisamos, mas as vezes pode ser muito quieta, parada demais.");
	next;
	switch(select("Faz tempo que voc� mora aqui?", "Concordo.", "Sabe sobre o serial killer?")) {
		case 1:
		mes("[Klaubis]\n Sim, minha fam�lia mora nessa cidade faz tempo, come�ando com o meu bisav�.\n Vejamos, minha fam�lia mora aqui h� mais ou menos duzentos anos.");
		next;
		mes("[Klaubis]\n Voc� ficaria surpreso ao saber quantas pessoas permanecem na sua terra natal.\n � dif�cil sair, mesmo sabendo que pode voltar.\n N�o seria sua^FFFFFFterra natal se voc� n�o pudesse, n�o � ^000000 ?");
		close;
		case 2:
		mes("[Klaubis]\n Sim, de vez em quando a cidade fica meio desinteressante.\n Mas ainda assim, existem muitas coisas bonitas aqui, ent�o olhe em volta.");
		close;
		case 3:
		mes("[Klaubis]\n Voc� quer dizer o Assassino do Machado?\n Achei que fosse apenas uma velha hist�ria de fantasmas.\n Hum. Bem, acho que a mo�a da Loja de Armas sabe mais sobre isso...");
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,232,156,3	script	Sigmund#lhz	4_M_LGTMAN,{
	mes("[Sigmund Ting]\n Sabe o que percebi?\n Os guardas na porta da favela muitas vezes ficam distra�dos.\n J� me aproveitei de um desses momentos de pouca aten��o e literalmente pulei o muro!");
	next;
	mes("[Sigmund Ting]\n Mas quando cheguei do outro lado, me decepcionei.\n N�o tem nada de mais.\n E isso me faz perguntar...\n Por que colocar guardas l�?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,190,134,5	script	Joyce#lhz	4_F_LGTGIRL,{
	mes("[Joyce]\n Posso sentir voc� olhando dentro do meu cora��o e fazendo-o bater cada vez mais r�pido.\n Com uma paix�o arrebatadora.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,191,134,3	script	Dan Song#zen2	4_M_LGTMAN,{
	mes("[Dan Song]\n Esses seus olhos...\n T�o puros e profundos, como piscinas de luz cintilante.\n T�o bonitos...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,115,159,3	script	Collins#lhz	4_M_LGTGRAND,{
	mes("[Collins]\n Realmente espero que o meu filho v� trabalhar na Corpora��o Rekenber.\n Eles certamente oferecem os melhores empregos de Lighthalzen.");
	next;
	mes("[Collins]\n Embora eles sejam uma empresa grande e pr�spera.\n � quase imposs�vel ser contratado por eles.\n Como as pessoas conseguem entrar l�?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,77,157,5	script	Villagomez#lhz	4_M_LGTGRAND,{
	mes("[Villagomez]\n S� dei uma saidinha para cortar o cabelo e me perdi.\n Ahh meu Deus, espero n�o deixar minha fam�lia preocupada.\n ^333333*Suspiro...*^000000");
	close;
}

// ------------------------------------------------------------------
lighthalzen,125,68,5	script	Kemp#lhz	4W_M_01,{
	mes("[Kemp]\n Voc� j� viu as pessoas que trabalham na grande empresa aqui perto?\n Acho que os empregados de l� est�o meio esquisitos por algum motivo.");
	next;
	mes("[Kemp]\n Eu n�o cheguei a ir at� l�, mas alguma coisa estranha est� acontecendo com todos que trabalham l�.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,138,50,7	script	Mauro#lhz	4_M_EINOLD,{
	mes("[Mauro]\n Os jovens dessa cidade n�o tem respeito pelos mais velhos.\n Eu trabalhei duro por anos para ajudar a construir essa cidade, e � isso que recebo?");
	next;
	mes("[Mauro]\n Bah! Se n�o fosse por n�s, Lighthalzen n�o seria pr�spera como � hoje!\n Essas crian�as n�o percebem todo o luxo que t�m � devido ao nosso trabalho...");
	close;
	close;
}

// ------------------------------------------------------------------
lighthalzen,132,103,5	script	Sefith#lhz	4_M_JOB_KNIGHT2,{
	mes("[Sefith]\n Bonito. Inteligente.\n Educado. Forte.\n Olhar arrebatador.\n N�veis de paix�o e carisma perfeitamente balanceados.\n Tudo o que as garotas querem.");
	next;
	mes("[Sefith]\n Mas chega de falar de mim.\n Vamos falar sobre a pena que sinto de todos os outros homens de Lighthalzen.\n Nenhum deles tem a m�nima chance comigo por perto.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,239,64,5	script	Jade#lhz	4_F_LGTGIRL,{
	mes("[Jade]\n Ouvi dizer que tem um reinado estranho que � basicamente regido por magia e espadas.\n Onde aventureiros se juntam para o bem maior.");
	next;
	mes("[Jade]\n Ah, voc� � de Rune-Midgard?\n O que voc� acha da nossa cidade, com nossa avan�ada tecnologia? Hum...");
	next;
	mes("[Jade]\n Algum dia eu gostaria de ir visitar a sua terra natal.\n Parece t�o fant�stica e rom�ntica...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,205,208,4	script	Homem Ganancioso#lhz	4_M_YURI,{
	mes("[Homem Ganancioso]\n Comprar uma propriedade aqui custa muito dinheiro.\n Mas essa terra � perfeita para a constru��o do meu pal�cio!\n Ainda n�o tenho dinheiro, mas o grande dia chegar�.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,202,94,5	script	Wallace#lhz	4_M_EINOLD,{
	mes("[Wallace]\n ......\n Aquela menina, que trabalha para a corpora��o Kafra, que acho que chama Mafra.\n Ela � muito charmosa.");
	next;
	mes("[Wallace]\n Agora, se eu fosse trinta anos mais jovem...\n Espere!\n Sou um homem rico e poderoso.\n Eu poderia cham�-la para sair.\n Hum? Por que est� me olhando assim?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,147,105,3	script	Laqumet#lhz	4_M_LGTMAN,{
	mes("[Laqumet]\n Claro que a masculinidade � muito atraente para as mulheres.\n Mas acho que elas tamb�m apreciam algu�m que seja simp�tico e converse com elas.\n N�o acha?");
	next;
	mes("[Laqumet]\n Posso n�o ser como Sefith, mas acho que tenho um sorriso bonitinho, boa personalidade.\n Espero que a minha honestidade e a minha lealdade me ajudem a encontrar algu�m especial!");
	close;
}

// ------------------------------------------------------------------
lighthalzen,123,212,4	script	Merpi#lhz	8_F_GIRL,{
	mes("[Merpi]\n O tempo n�o est� �timo hoje?\n Esse sol vai secar as roupas r�pido e deix�-las com um cheiro fresco.");
	next;
	mes("[Merpi]\n Oh, voc� � um aventureiro de Rune-Midgards?\n O que acha da nossa cidade?\n Se tiver alguma pergunta, venha falar comigo.");
	next;
	switch(select("N�o tenho nada para perguntar...", "Alguma novidade ou rumor?", "Eu tamb�m gosto de lavar roupas.")) {
		case 1:
		mes("[Merpi]\n S�rio?\n Bem, se voc� j� viajou por todo o mundo.\n Talvez tenha encontrado um lugar como Lighthalzen.\n Onde voc� se sinta confort�vel.");
		close;
		case 2:
		mes("[Merpi]\n Bem, as coisas est�o muito tranquilas nos �ltimos tempos.\n O �nico rumor � sobre um assassino estranho que tem um martelo...");
		close;
		case 3:
		mes("[Merpi]\n Ah, que maravilha!\n Eu adoro lavar roupas, embora n�o saiba muito bem porque. Ah, bem.");
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,296,239,3	script	Berru#lhz	4_M_KID1,{
	switch(rand(1,3)) {
		case 1:
		mes("[Berru]\n Papai...! Aaaaaah.!\n Eu quero meu papai!");
		emotion(e_sob);
		next;
		mes("[Pilia]\n Berru, acho que o papai n�o vai voltar para casa hoje.\n Vamos, voc� tem que ir dormir.");
		next;
		mes("[Berru]\n N�o, n�o vou dormir at� o papai voltar!\n Ele disse que iria trazer doces hoje a noite!\n V� dormir voc�, Pilia!");
		emotion(e_ag);
		next;
		mes("[Pilia]\n ^333333*Suspiro...*^000000\n Cad� nosso pai?\n Ele disse que arrumou um emprego bom, mas n�o apareceu nunca mais...");
		emotion(e_dots, 0, "Pilia#lhz");
		close;
		case 2:
		mes("[Pilia]\n Por que ele est� demorando tanto?\n Espero que o papai volte logo.\n Vamos Berru, pare de chorar.");
		emotion(e_dots, 0, "Pilia#lhz");
		next;
		mes("[Berru]\n ^333333*Choro...*^000000\n Mas estou com fome e com saudade do papai!");
		next;
		mes("[Pilia]\n O tio Togii que mora ao lado tamb�m n�o voltou...");
		close;
		case 3:
		mes("[Pilia]\n Humm?\n Ah, sinto muito, mas meu irm�ozinho n�o para de corar.\n Desculpe se est� muito alto.");
		emotion(e_what, 0, "Pilia#lhz");
		next;
		mes("[Pilia]\n Nosso pai vai trabalhar em algum lugar longe.\n Ele finalmente arrumou emprego, mas as vezes fica dias sem aparecer.\n Estamos muito preocupados com ele.");
		next;
		mes("[Pilia]\n Meu irm�o Berru sente muita falta dele.\n N�o sei o que fazer para que ele pare de chorar. O que fa�o?");
		emotion(e_swt2, 0, "Pilia#lhz");
		close;
	}
}
lighthalzen,297,239,3	duplicate(Berru#lhz)	Pilia#lhz	4_F_CHNWOMAN

// ------------------------------------------------------------------
lighthalzen,312,233,3	script	Beggar#lhz	4_M_TWOLDMAN,,{
	mes("[Beggar]\n Por favor...\n Minhas crian�as est�o famintas...\n Pode me dar algum dinheiro?");
	next;
	if (select("Dar dinheiro para ele", "Ignorar") == 1) {
		if (Zeny < 50) {
			mes("[Beggar]\n Agrade�o sua bondade, mas parece que voc� tamb�m precisa de alguns zenys.\n Gostaria de se juntar a mim?");
			emotion(e_heh);
			close;
		}
		mes("[" + strcharinfo(PC_NAME) + "]\n Aqui, pegue.");
		Zeny -= 50;
		next;
		mes("[Beggar]\n Muito obrigado.\n N�o posso oferecer nada em troca.\n Mas posso te contar uma hist�ria e transmitir um pouco da sabedoria que adquiri com o passar dos anos.");
		emotion(e_thx);
		next;
		switch(rand(1, 3)) {
			case 1:
			mes("[Beggar]\n Todos j� estiveram em uma situa��o em que voc� sente que precisa fazer uma escolha.\n Entre fazer a coisa certa ou fazer o que voc� quer, n�o �?");
			next;
			mes("[Beggar]\n Voc� se sente acuado.\n Bem, vou te contar, quando existe um problema, as solu��es dispon�veis nem sempre s�o �bvias.\n Ent�o se acalme e pense.");
			next;
			mes("[Beggar]\n O que voc� pode ver e entender talvez n�o seja a realidade.\n Como estrelas, que est�o no c�u de dia, mas invis�veis.\n Devemos ter esperan�a, mesmo se n�o tivermos motivo aparente.");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n ............");
			emotion(e_dots, 1);
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n ............\n ............");
			emotion(e_dots, 1);
			next;
			mes("["+strcharinfo(PC_NAME)+"]\n ............\n ............\n ............");
			emotion(e_dots, 1);
			next;
			mes("[Beggar]\n Hmm...?\n Voc� parece surpreso.");
			emotion(e_what);
			close;
			case 2:
			mes("[Beggar]\n Eu acredito e n�o acredito em destino.\n Deixe-me explicar assim.\n Eu vivo cada dia, cada um completando seu ciclo com milagres de um lado e trag�dias do outro.");
			next;
			mes("[Beggar]\n Ent�o cada dia pode ter experi�ncias boas, m�s ou ambas.\n Acredito que cada pessoa pode ter um papel ativo em seu pr�prio destino, dia ap�s dia.");
			next;
			mes("[Beggar]\n Podem ter algumas coisas que voc� n�o controla.\n Mas at� o pior pessimista pode concordar que esse mundo n�o tem apenas trag�dias.");
			next;
			mes("[Beggar]\n Levante-se quando cair e viva com paix�o.\n A capacidade de ocorrerem milagres sempre estar� l� e saiba que voc� pode ser um milagre para algu�m.\n Isso n�o � lindo?");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n ............");
			emotion(e_dots, 1);
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n ............\n ............");
			emotion(e_dots, 1);
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n ............\n ............\n ............");
			emotion(e_dots, 1);
			next;
			mes("[Beggar]\n N�o acredita?\n Voc� ver� por si mesmo, jovem.\n Existem muitas coisas boas em voc�.");
			emotion(e_what);
			close;
			case 3:
			mes("[Beggar]\n Raiva.\n As pessoas lidam com ela de formas diferentes.\n Alguns abafam.\n Outros liberam.\n Alguns t�m medo.\n Para simplificar, digamos que existem dois tipos de raiva.");
			next;
			mes("[Beggar]\n O primeiro � o tipo que n�o � muito produtivo.\n Como uma frustra��o que voc� pode mandar embora.\n Algu�m foi grosso com voc� ou seu amigo esqueceu seu anivers�rio?\n Sem estresse.");
			next;
			mes("[Beggar]\n N�o se deixe dominar por esse tipo de raiva, ou vai parecer um fracassado.\n Pense no quando completo, e se continuar chateado, reaja apropriadamente.\n Seja honesto sem machucar ningu�m.");
			next;
			mes("[Beggar]\n O segundo tipo de raiva � justificado.\n Sacanearam voc� e voc� quer retribuir.\n Apenas se lembre de n�o direcion�-la erroneamente, e responda de maneira apropriada.");
			next;
			mes("[Beggar]\n Entrar numa briga por raiva justificada, digamos para proteger algu�m, far� de voc� um her�i.\n Brigar por raiva passageira ou frustra��o far� de voc� um idiota.\n Saiba a diferen�a.");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n ............");
			emotion(e_dots, 1);
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n ............\n ............");
			emotion(e_dots, 1);
			next;
			mes("["+strcharinfo(PC_NAME)+"]\n ............\n ............\n ............");
			emotion(e_dots, 1);
			next;
			mes("[Beggar]\n Qual o problema?\n Pode ser muita coisa para absorver, sabe.");
			emotion(e_what);
			close;
		}
	}
	mes("[" + strcharinfo(PC_NAME) + "]\n ............");
	close;
}

// ------------------------------------------------------------------
lighthalzen,311,194,3	script	Reuben#lhz	4_M_LGTPOOR,{
	mes("[Reuben]\n Algum dia...\n Algum dia eu virarei um condutor de trem e darei o fora daqui!\n Eu odeio esse lugar!");
	emotion(e_ag);
	next;
	mes("[Reuben]\n O-ops...!\n Voc� me ouviu falando sozinho?\n Preciso ser mais silencioso!");
	emotion(e_an);
	close;
}

// ------------------------------------------------------------------
lighthalzen,306,324,3	script	Shengwen#lhz	4_M_LGTPOOR,{
	mes("[Shengwen]\n Estou ficando paran�ico?\n Eu realmente acho que algumas pessoas que eu conhe�o est�o desaparecendo sem nenhum motivo!");
	next;
	mes("[Shengwen]\n Digo, os meus amigos mais pr�ximos est�o bem.\n Mas estou parando de ver alguns conhecidos e rostos familiares.\n Talvez eu esteja pensando demais nisso...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,330,276,3	script	Angela#lhz	1_F_PRIEST,{
	mes("[Angela]\n Sauda��es, aventureiro.\n Sou Angela, uma assistente social da Organiza��o de Ajuda aos Pobres.");
	next;
	mes("[Angela]\n Percebi que os habitantes daqui t�m uma sa�de muito ruim, e n�o apenas por causa da sua condi��o.");
	next;
	mes("[Angela]\n Mandei um relat�rio para os meus superiores.\n Mas por alguma raz�o eles ainda n�o me enviaram uma resposta.\n Estou come�ando a me preocupar com isso...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,337,296,3	script	Funcion�rio#lhz	4_M_LGTGUARD2,{
	mes("[Funcion�rio Rekenber]\n Sauda��es.\n Como parte de nossos esfor�os para auxiliar os pobres.\n A Corpora��o Rekenber est� oferecendo postos de trabalho para os moradores das �reas carentes.");
	next;
	mes("[Funcion�rio Rekenber]\n Eles podem escolher entre trabalhar em casa ou fazer um treinamento que permitir� melhores op��es profissionais.\n Essa � uma �tima chance de fazer diferen�a...\n E tamb�m algum dinheiro.");
	emotion(e_no1);
	close;
}

// ------------------------------------------------------------------
lighthalzen,326,249,5	script	Grinnel#lhz	4_M_LGTPOOR,{
	mes("[Grinnel]\n V� aqueles homens de terno preto?\n Cara, me deram um susto!\n Vieram at� mim para fazer v�rias perguntas estranhas!");
	next;
	mes("[Grinnel]\n Queriam saber se eu conhecia algu�m da Corpora��o Rekenber.\n Se j� tinha ido em uma parte da cidade, esse tipo de coisa.\n Me assustaram muito.");
	next;
	mes("[Grinnel]\n Viver nas favelas � uma droga.\n A vida � dura e as pessoas acham que podem te tratar como quiserem.\n Eu odeio Lighthalzen...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,159,222,1	script	Funcion�rio Rekenber#lhz	4_M_MANAGER,{
	mes("[Benatuth]\n O mec�nico est� acabando a manuten��o do avi�o particular do nosso gerente.\n Voc� pode imaginar ter um desses s� para voc� poder voar para onde quiser?");
	next;
	mes("[Benatuth]\n �, o gerente da Corpora��o Rekenber...\n � um homem muito poderoso.\n � at� assustador tudo o que ele pode fazer com o dinheiro dele, sabe?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,162,304,7	script	Guarda Rekenber#lhz	4_M_LGTGUARD,{
	mes("[Guarda Drew]\n Cara, olha isso.\n Fotos oficiais das meninas da Corpora��o Kafra. Olha...\n E elas est�o at� usando cintos!");
	emotion(e_ho);
	next;
	mes("[Guarda Tan]\n Ent�o todas elas est�o usando cintos nessas fotos?\n Isso quer dizer que tem tamb�m a foto da menina que usa �culos?\n Essa � a melhor not�cia do dia!");
	emotion(e_omg, 0, "Guarda Rekenber#lhz2");
	next;
	mes("[Guarda Drew]\n Ok cara, voc� sabe que essas fotos s�o edi��o limitada especial de colecionador.\n Ent�o cada uma custa 300 000 zenys.\n Eu tenho um lote extra, mas n�o sei se voc� quer comprar todas...");
	next;
	mes("[Guarda Tan]\n Vou ficar com todas.\n Espere, todas menos essa da garotinha.\n S� a id�ia de ter a foto dela por perto j� me deixa...\n � melhor n�o ter.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,163,306,3	script	Guarda Rekenber#lhz2	4_M_LGTGUARD2,{
	mes("[Guarda Tan]\n Uau. Isso aqui...\n Isso aqui � arte. A luz, o �ngulo, o... o...\n Nossa.");
	emotion(e_swt2);
	next;
	mes("[Guarda Drew]\n Cara, essas fotos s�o oficiais e licenciadas...\n Valem cada zeny que pagamos.\n Diga adeus ao calend�rio das garotas de biqu�ni e ol� para a Kafra Leilah!");
	next;
	mes("[Guarda Tan]\n Leilah?\n Voc� quer dizer a que usa �culos?\n Cara, ela � a minha preferida tamb�m!");
	close;
}

// ------------------------------------------------------------------
lighthalzen,70,227,4	script	Delna#lhz	8_F,{
	mes("[Delna]\n As vezes os prazeres mais simples podem te dar a maior felicidade.\n Para mim, a melhor coisa � sair e ficar no sol.");
	next;
	mes("[Delna]\n Sim, tomar sol em um lugar calmo e relaxante pode ser muito revigorante.\n E se voc� tomar cuidado para n�o sofrer queimaduras, tomar sol pode ser uma coisa muito positiva.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,107,107,3	script	Kosit#lhz	4_M_LGTMAN,{
	mes("[Kosit]\n Essa cidade pode ter mais guardas e regras do que as outras.\n Mas ainda n�o sei se � seguro morar aqui.");
	next;
	mes("[Kosit]\n Digo, a raz�o de termos tantas regras � a presen�a de gangsters que as vezes entram na cidade.\n Normalmente � at� tranquilo e tudo.\n Mas essas regras...");
	next;
	mes("[Kosit]\n � bom estar seguro, mas n�o sei se � uma boa id�ia sacrificar nossa liberdade e nosso jeito de viver, sabe?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,176,65,5	script	Kimmy#lhz	4_F_LGTGIRL,{
	mes("[Kimmy]\n Diferente dos outros lugares, Lighthalzen tem muitas lojas de roupas e acess�rios.\n Isso � como o c�u para algu�m como eu.!");
	next;
	mes("[Kimmy]\n N�o sei se voc�s aventureiros se interessam por moda.\n Mas voc� pode renovar seu guarda roupa em lojas �timas e modernas aqui em Lighthalzen.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,364,282,3	script	Bodger#lhz	4_M_LGTPOOR,{
	mes("[Bodger]\n Outro dia faminto...\n N�o tenho dinheiro, e mesmo se tivesse n�o tem nenhum lugar que venda comida que eu comeria.\n Nossa, estou quase morrendo...");
	next;
	mes("[Bodger]\n Ouvi dizer que as pessoas da cidade comem refei��es deliciosas oito vezes por dia!\n Espero que seja s� um exagero.\n Porque eu ficaria louco se n�o fosse...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,192,63,4	script	Sergei#lhz	4_F_03,{
	mes("[Sergei]\n Sabe, tem uma hist�ria interessante sobre aquele martelo que est� pendurado ali.\n Voc� gostaria de escut�-la?");
	next;
	if (select("Claro", "N�o, obrigado.") == 1) {
		mes("[Sergei]\n O dono anterior da Loja de Armas era um assassino em s�rie.\n Toda noite, ele pegava aquele martelo e assassinava cruelmente mo�as bonitas como eu.");
		next;
		mes("[Sergei]\n Quando ele finalmente foi pego, decapitaram-no com seu pr�prio martelo.\n Desde ent�o, dizem que seu fantasma ainda afia e mexe nesse martelo a noite.");
		next;
		mes("[Sergei]\n S� pensar nisso me d� arrepios!\n E eu ainda tenho que trabalhar aqui!\n � assustador!");
		close;
	}
	mes("[Sergei]\n Ah, que decepcionante.\n � a hist�ria perfeita para essa temporada.\n Bem, pensando nisso, � uma hist�ria meio arrepiante...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,258,223,3	script	Srinivas#lhz	4_M_LGTGRAND,{
	mes("[Srinivas]\n Esses pr�dios decadentes na favela s�o uma vis�o que ofende todo o resto da cidade!\n Gostaria que fossem demolidos.\n N�o me interesso pelos pobres e necessitados.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,77,203,3	script	Victor Perfecto#lhz	4_M_LGTMAN,{
	mes("[Victor Perfecto]\n J� ouvi falar que a Corpora��o Rekenber realmente criou o ambiente de Lighthalzen por meios artificiais.");
	next;
	mes("[Victor Perfecto]\n Parece que precisaria de muito investimento.\n Mas criar um ambiente artificialmente n�o � imposs�vel para a Corpora��o Rekenber.\n Com todos seus recursos dispon�veis.");
	next;
	mes("[Victor Perfecto]\n ^333333*Suspiro...*^000000\n Ainda assim, � deprimente pensar que a beleza da natureza pode ser feita e igualada a zenys, voc� n�o acha?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,40,107,4	script	Vergil#lhz	4_M_LGTMAN,{
	mes("[Vergil]\n O tempo est� t�o bom hoje, como sempre.\n Queria sair do trabalho e ir fazer exerc�cios f�sicos.");
	next;
	switch(select("Onde voc� quer ir?", "Mas voc� n�o devia ir trabalhar?", "Ouviu falar sobre o serial killer?")) {
		case 1:
		mes("[Vergil]\n Bem, esses caras de terno preto, sem mencionar os rufi�es que de vez em quando conseguem entra na cidade.\n Fazem com que seja meio inseguro sair daqui sozinho.");
		next;
		mes("[Vergil]\n Mas eu e um amigo meu estamos planejando ir para Al De Baran um dia desses.\n Nossa, da �ltima vez que n�s fomos, gastamos muitos zenys.");
		next;
		mes("[Vergil]\n Ele at� ganhou um pr�mio, um tipo de po��o, e deu para eu experimentar.\n Eu bebi, e ela fez com que eu me movesse muito devagar.\n Que tipo de pr�mio � esse?!");
		next;
		mes("[Vergil]\n Acho que meu amigo foi enganado.\n Ou isso, ou eu fui um idiota por beber a po��o.\n Como elestiveram uma id�ia t�o ruim para um pr�mio!");
		close;
		case 2:
		mes("[Vergil]\n O qu...?!\n Eu n�o disse que ia faltar no trabalho, s� disse que queria!\n Mas s� para voc� saber, talvez, apenas talvez, eu n�o v� hoje!");
		next;
		mes("[Vergil]\n Mas acho que acabarei n�o fazendo isso...\n Droga...\n Certamente o fim de semana n�o chega r�pido o suficiente!");
		close;
		case 3:
		mes("[Vergil]\n O que, voc� quer dizer aquele assassino do martelo de anos atr�s?\n Bem, eu ouvi um rumor de que n�o foi bem assim.\n Deixa eu ver, como era mesmo?");
		next;
		mes("[Vergil]\n Ouvi dizer que um chapeleiro, o que faz Chap�u de Fumacento.\n Acidentalmente fez um chap�u de pessoas, inv�s de um feito com monstros.\n N�o me pergunte como.");
		next;
		mes("[Vergil]\n �, acho que foram parentes do capit�o do avi�o...\n Eles foram transformados em chap�u por acidente. Parece que era algo como um Reindeer.\n Nossa, mas isso � estranho demais.");
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
lhz_in01,134,45,3	script	Cenku Dekdam#lhz	4_M_LGTMAN,{
	mes("[Cenku Dekdam]\n Cara, se voc� fosse pegar essa cidade inteira e coloc�-la a venda.\n Quanto voc� acha que seria o pre�o de Lighthalzen, hein?");
	next;
	mes("[Cenku Dekdam]\n Digo, essa cidade � feita de dinheiro.\n � isso que torna essa cidade um lugar t�o bom e agrad�vel para morar.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,134,38,3	script	Bankri Kun#lhz	4_M_NFMAN,{
	mes("[Bankri Kun]\n Preciso trabalhar...\n Preciso me concentrar...\n Resistir ao sono...\n Por que eu continuo vindo aqui?\n � horr�vel...");
	next;
	mes("[Bankri Kun]\n Ol�, jovem.\n Quer um conselho para suas aventuras? Ok.\n Hum. Sempre. Escove.\n Seus dentes.\n Escove-os todo dia.\n Ah, e n�o esque�a de ter uma boa escova de dentes.");
	next;
	mes("[Bankri Kun]\n Agora preciso voltar ao trabalho.\n Te vejo mais tarde, crian�a.\n Desculpe se o meu conselho foi p�ssimo...\n N�o consegui pensar em mais nada para dizer.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,139,40,7	script	Enoz#lhz	1_M_INNKEEPER,{
	mes("[Enoz]\n Ent�o o livro que eu encomendei do Reino de Rune-Midgards acabou de chegar.\n � muito bom, � do cara que escreveu 'A Aventura do Sapo de Roda' anos atr�s.\n Lembra-se?");
	next;
	mes("[Enoz]\n Enfim, esse novo livro, 'Onde Crescem Plantas Vermelhas' est� concorrendo ao Pr�mio Yggdrasil.\n E... eu n�o sei por que estou contando isso para voc�... Realmente n�o sei...");
	close;
}

// ------------------------------------------------------------------
lhz_in01,124,28,3	script	Ellette#lhz	1_F_01,{
	mes("[Ellette]\n ...");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Com licen�a.");
	next;
	mes("[Ellette]\n .........");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Ol�?");
	next;
	mes("[Ellette]\n ...Ah! Galera!\n Acabei de completar mais um! Eba!");
	next;
	mes("[Outros funcion�rios]\n O qu-qu�?!\n N�o, de novo n�o!");
	next;
	mes("[Leekal]\n Voc� � humana?!\n Deve ter algum segredo para manter toda essa produtividade.\n � estranho...");
	next;
	mes("[Ellette]\n Ah, que bobagem.\n Posso ser boa nisso, mas eu nunca ganharia do Cenku.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,125,40,3	script	Dowbow Ryuei#lhz	4_M_THAIONGBAK,{
	mes("[Dowbow Ryuei]\n S� de, bem, curiosidade, qual palavra voc� prefere?\n Sonho ou Realidade?\n Escolha uma.");
	next;
	if (select("Sonho", "Realidade") == 1) {
		mes("[Dowbow Ryuei]\n � mesmo? Eu tamb�m!\n �, n�s temos a mesma vis�o de mundo.\n Se voc� n�o se importar, eu gostaria de apertar sua m�o.");
		emotion(e_no1);
		close;
	}
	mes("[Dowbow Ryuei]\n Realidade ent�o?\n Concordo que ser realista tem suas vantagens, mas eu sou um sonhador.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,125,46,3	script	Leekal#lhz	4_M_DIEMAN,{
	mes("[Leekal]\n Ent�o... Estou falido.\n Por que gastei tanto dinheiro com vinho, mulheres e m�sica?\n Eu me arrependo, de todo o prazer que tive esse m�s.\n �, foi prazer demais.");
	next;
	mes("[Ninjose]\n � isso que acontece quando voc� � irrespons�vel com seu dinheiro.\n Voc� deveria ler \"Qualquer Um Pode Ser Rico\", um livro muito bom.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,53,7	script	Ninjose#lhz	4_M_THAIAYO,{
	mes("[Ninjose]\n Depois de muito tempo, finalmente comprei minha casa.\n Voc� tamb�m deveria guardar dinheiro para o futuro.\n E leia \"Qualquer Um Pode Ser Rico\", � �timo!");
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,39,7	script	Kejulle Rekenber#lhz	4_M_CHNMAN,{
	mes("[Kejulle Rekenber]\n Hum? �, meu sobrenome � Rekenber, assim como o do nosso gerente, mas � s� uma coincid�ncia.\n Sou um funcion�rio normal.\n Sem tratamento especial...");
	close;
}

// ------------------------------------------------------------------
lhz_in01,110,40,3	script	Jorjerro#lhz	4_M_ORIENT02,{
	mes("[" + strcharinfo(PC_NAME) + "]\n ^3355FFEsse homem est� im�vel, e para todos os prop�sitos, parece adormecido.^000000");
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,45,7	script	Joshua#lhz	4_M_BIBI,{
	mes("[Joshua]\n O que estou fazendo aqui?\n Estou esperando meu sonho, que mulheres caiam no meu colo, o que mais parece?");
	next;
	mes("[Joshua]\n Altas, loiras, bonitas, de pele macia.\n Isso a�.\n Venham a Joshua, garotas.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,180,28,4	script	Guarda#lhz	4_M_LGTGUARD,{
	mes("[Guarda]\n Essa � uma �rea restrita.\n Por favor saia se n�o tiver autoriza��o especial.\n Agradecemos por sua coopera��o.");
	close;
}
lhz_in01,173,28,4	duplicate(Guarda#lhz)	Guarda#lhz2	4_M_LGTGUARD

// ------------------------------------------------------------------
lhz_in01,14,28,3	script	Atendente#lhz	4_M_MANAGER,{
	mes("[Atendente]\n Esse muro de Banquetes � utilizado para realizar eventos como festas para parceiros.\n Clientes e outros associados.\n Al�m de confer�ncias de imprensa.\n Claro, n�o h� nada aqui agora.");
	next;
	mes("[Atendente]\n As vezes paz e quietude s�o boas para mudar os ares, mas agora eu estou meio entediado.\n Acho que preferia estar ocupado do que aqui roendo as unhas, na verdade.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,43,52,3	script	Luccet#lhz	4_F_KID2,{
	mes("[Luccet]\n Shhhh! Ei, meu irm�o tem \"aquilo\", ent�o preciso de um lugar para me esconder!\n Espere, voc� pode ficar parado?\n Posso me esconder atr�s de voc�?\n Ah, droga!");
	close;
}

// ------------------------------------------------------------------
lhz_in01,21,50,7	script	Annette#lhz	4_F_02,{
	mes("[Annette]\n Ouvi dizer que o Hall de Banquetes Rekenber tamb�m � usado para casamentos.\n Deve ser t�o maravilhoso.");
	next;
	mes("[Annette]\n Mesmo se for bem mais caro, eu gostaria de me casar aqui.\n O casamento s� ocorre uma vez na vida, de prefer�ncia, ent�o eu gostaria que o meu fosse uma experi�ncia memor�vel.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,108,53,3	script	#horri	HIDDEN_NPC,{
	mes("^3355FFIsso � apenas uma pilha de arquivos, um amontoado de livros e um retrato de fam�lia.^000000");
	close;
}

// ------------------------------------------------------------------
lhz_in01,108,47,3	script	#never	HIDDEN_NPC,{
	mes("^3355FFEssa mesa est� muito limpa e organizada em compara��o com as outras mesas que voc� j� viu.\n Voc� p�ra por um momento para olhar maravilhado para a limpeza da mesa.^000000");
	close;
}

// ------------------------------------------------------------------
lhz_in01,166,55,3	script	#crazy4u	HIDDEN_NPC,{
	mes("^3355FFEssa mesa tem uma prateleira lotada de v�rios tipos de livros.\n Por curiosidade, voc� decide pegar um.^000000");
	next;
	mes("^3355FFEntretanto, o livro que voc� pegou cont�m grande quantidade de magia negra, o que faz voc� larg�-lo.^000000");
	specialeffect(EF_CURSEATTACK);
	close;
}

// ------------------------------------------------------------------
lhz_in01,148,45,3	script	Noama#lhz	4W_M_01,{
	mes("[Noama]\n Hee hee.!\n Quer ouvir uma coisa engra�ada?\n Soube que tem um bar em Prontera onde um cara manda solteiros para Jawa...");
	next;
	mes("[Mazwon]\n Noama...!\n Essas m�quinas est�o falhando de novo!\n Venha c� agora!");
	next;
	mes("[Noama]\n O qu�?!\n Pare de me amolar, eu n�o fiz nada!");
	close;
}

// ------------------------------------------------------------------
lhz_in01,157,47,1	script	Mareth#lhz	4_M_NFLOSTMAN,{
	mes("[Mareth]\n Yoo hoo hoo.\n Ah, como eu amo amo amo chocolate!");
	emotion(e_lv);
	next;
	mes("[Mareth]\n Com�-lo...\n Ou derret�-lo...\n Espalh�-lo em mim.\n Cara. Novo objetivo na vida.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,144,53,3	script	Jorje#lhz	4W_M_02,{
	switch(rand(1,3)) {
		case 1:
		mes("[Jorje]\n Aaarre, eu n�o tenho tempo para conversar!\n Estou no meio de uma tarefa importante!\n Espere a�!");
		close;
		case 2:
		mes("[Jorje]\n N-n�o chegue mais perto!\n Qualquer um que chegar perto pode me machucar!\n Saia daqui!");
		close;
		case 3:
		mes("[Jorje]\n Ah cara...\n Eu tenho trabalhado t�o duro e nem fiz uma pausa ainda.\n Acho que vou me recompensar e comprar algo como...");
		next;
		mes("[Jorje]\n N�o! N�o, n�o vou comprar nada!\n Tenho que pensar na minha futura esposa!\n Preciso...\n Juntar... Mais... Dinheiro!");
		close;
	}
	end;
}

// ------------------------------------------------------------------
lhz_in01,139,48,7	script	Leimi#lhz	1_F_MERCHANT_01,{
	mes("[Leimi]\n .........");
	next;
	mes("[Leimi]\n Oh...!\n Meu Deus!\n Posso ajud�-lo?");
	emotion(e_omg);
	if (BaseJob == Job_Assassin) {
		next;
		mes("[Leimi]\n Um Assassino...?\n Ah, voc� por acaso conhece algum menino Assassino que esteja solteiro?\n Ai-meu-Deus, eles s�o t�o maravilhosos.");
	}
	close;
}

// ------------------------------------------------------------------
lhz_in01,138,47,0	script	#mimir_camera	FAKE_NPC,2,2,{
	OnTouch:
	mes("^3355FF*Click*^000000");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n O qu�...?\n Esse som. Algu�m...\n Algu�m tirou uma foto minha?");
	close2;
	end;
}

// ------------------------------------------------------------------
lhz_in01,221,131,7	script	Cientista#lhz	4_LGTSCIENCE,{
	mes("[Cientista]\n O que aconteceu?\n Todas as m�quinas est�o em ru�nas e o relat�rio de pesquisa sumiu?!\n A hist�ria de Regenschirm foi roubada!");
	close;
}

// ------------------------------------------------------------------
lhz_in02,242,172,1	script	Funcion�rio do Hotel#lhz	4_M_LGTGUARD,{
	mes("[Funcion�rio do Hotel]\n Se voc� sofrer algum inconveniente, n�o hesite e fale conosco assim que poss�vel.");
	next;
	mes("[Funcion�rio do Hotel]\n Por favor use as escadas no norte do pr�dio para descer e ir para a mesa central.\n Obrigado e aprecie sua estadia aqui.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,210,189,3	script	Christopher Michael#lhz	4_M_DIEMAN,{
	mes("[Christopher Michael]\n OoooOoh.\n T���o confort�vel.\n N�o quero acordar.\n N�o quero levantar.\n Nunca mais.\n OoOoooh...");
	close;
}

// ------------------------------------------------------------------
lhz_in02,251,212,3	script	Funcion�rio do Hotel#lhz2	4_M_LGTGUARD,{
	mes("[Funcion�rio do Hotel]\n Essa � a Su�te de Casal.\n Voc� tamb�m pode alug�-la sozinho, mas nosso hotel prioriza casais que se candidatam a esse quarto.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,209,277,5	script	Ben Allen#lhz	4_M_02,{
	mes("[Ben Allen]\n Aaahhh Oooooh.\n Est� t�o confort�vel.\n O ar � t�o fresco e o sof� � t�o macio...\n Por que minha casa n�o � assim?");
	next;
	mes("[Ben Allen]\n J� estive em outros hot�is, mas vou te contar, esse daqui � o melhor de todos.\n Depois de uma noite de sono aqui, eu me sinto um novo homem!");
	close;
}

// ------------------------------------------------------------------
lhz_in02,238,275,5	script	Funcion�rio do Hotel#lhz3	4_M_LGTMAN,{
	mes("[Funcion�rio do Hotel]\n Hospitalidade com um sorriso e comprometimento total com seu conforto.\n Esse � nosso lema, no hotel Drag�o Real.\n V� at� a mesa central se quiser se hospedar aqui.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,271,281,2	script	Cidad�o#lhz	1_M_01,{
	mes("[Hachi]\n Ah sim!\n Eu amo-amo-amo bares.\n N�o venho pelos drinques, venho pelas lindas garotas daqui.");
	next;
	mes("[Hachi]\n Estranho.\n � a primeira vez que eu tomo o rum daqui, mas parece que ele � sensualidade l�quida!\n Voltemos para a festa com todas as garotas.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,277,285,4	script	Gar�om#lhz	1_M_PUBMASTER,{
	mes("[Duff]\n Ei, voc� � de Rune-Midgards, n�o?\n Por favor, sinta-se em casa enquanto est� em Lighthalzen e tenha uma boa estadia aqui.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,281,280,6	script	Cliente#lhz	4_F_CHNDRESS2,{
	mes("[Rona]\n Eu odeio quando os caras simplesmente pulam os Passos Um e Dois.\n Antes que voc� fique perdido, o Passo Tr�s � 'Pe�a o n�mero do meu telefone.'");
	next;
	mes("[Rona]\n Eu realmente gostaria que um cara legal viesse ter uma conversa de verdade comigo.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,287,282,4	script	Cliente#lhz2	4_M_YURI,{
	mes("[Greenfield]\n N�o acredito...\n Essa mar� de azar n�o vai acabar nunca, vai?\n Perdi todas as minhas ma��s nos dados hoje.\n De novo. Ah meu...");
	next;
	mes("[Greenfield]\n Ok. Ok.\n Se eu continuar jogando, alguma hora eu vou ganhar.\n Digo, � assim que as coisas funcionam!\n Mesmo se est�o contra mim...");
	close;
}

// ------------------------------------------------------------------
lhz_in02,287,273,3	script	Cliente#lhz3	1_M_04,{
	mes("[Terry]\n N�o costumo beber muito, mas a atmosfera desse lugar � muito boa.\n � relaxante, assim como a m�sica que colocam para tocar...");
	next;
	mes("[Terry]\n �, esse hotel � muito bom. Recomendo-o a todos os meus amigos turistas, na verdade.\n Agora por que voc� n�o senta aqui comigo?");
	close;
}

// ------------------------------------------------------------------
lhz_in02,265,273,6	script	Equipe do Laborat�rio#lhz	4_LGTSCIENCE,{
	mes("[Assam]\n Esse lugar � muito bom e tamb�m muito tranquilo.\n Eu gosto de vir aqui ap�s o trabalho, tomar uma bebida e simplesmente conversar com o barman.");
	next;
	mes("[Assam]\n A bebida aqui � incr�vel e pode ser considerada uma das melhores do mundo.\n Eu n�o sei, mas por alguma raz�o o gosto dela me lembra trabalho em equipe.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,28,39,3	script	Helen#lhz	4_F_KID2,{
	mes("[Helen]\n Sabe, quando eu crescer, talvez eu trabalhe em um banco.\n Parece um emprego muito legal, voc� n�o acha?");
	close;
}

// ------------------------------------------------------------------
lhz_in02,31,33,3	script	Gracie#lhz	4_F_LGTGRAND,{
	mes("[Gracie]\n Ah, est� t�o confort�vel aqui.\n Mas por que estamos dentro do banco quando os servi�os banc�rios nem est�o funcionando?\n Estamos esperando, mas esperando confortavelmente.");
	next;
	mes("[Gracie]\n Na verdade, � t�o confort�vel aqui, que acho que me recusarei a sair.\n Apesar de estar disposta a mudar de id�ia se voc� achar outro lugar que seja ainda mais confort�vel.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,21,38,7	script	Funcion�rio do Banco#lhz	4_M_04,{
	mes("[Funcion�rio do Banco]\n Devido a alguns erros cr�ticos do sistema, os servi�os banc�rios est�o temporariamente suspensos.\n Pedimos desculpas pela inconveni�ncia e agradecemos a compreens�o.");
	close;
}
lhz_in02,21,25,7	duplicate(Funcion�rio do Banco#lhz)	Funcion�rio do Banco#lhz2	4_M_04
lhz_in02,34,22,1	duplicate(Funcion�rio do Banco#lhz)	Funcion�rio do Banco#lhz3	4_M_SAGE_C

// ------------------------------------------------------------------
lhz_in02,145,177,0	script	Togii#lhz	4_M_DIEMAN,{
	mes("[Togii]\n Aah sim...\n J� me sinto diferente.\n O u�sque de Morroc � o melhor!\n ^333333*Solu�o*^000000\n Nossa, essa coisa funciona muito r�pido!\n Heh heh.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,157,201,6	script	Hinkley#lhz	4_M_LGTPOOR,{
	mes("[Hinkley]\n Meh heh heh...\n ^333333*Solu�o*^000000\n Acredite ou n�o, eu estou...\n Andando... no Ar...\n Nunca achei que pudesse s-ser t�o livree-ee-ee.");
	next;
	mes("^3355FFEsse cara est� totalmente fora de si!^000000");
	close;
}

// ------------------------------------------------------------------
lhz_in02,289,277,3	script	Lutador Marcial#lhz	4_M_MONK,{
	mes("[Lutador de Artes Marciais]\n Droga...\n Vim ao lugar errado para procurar um desafio.\n Ningu�m aqui � competitivo o bastante, nem bom o suficiente!");
	next;
	mes("[Lutador de Artes Marciais]\n A cidade inteira acha que pode comprar poder e seguran�a com dinheiro.\n Eles n�o sabem o valor de uma luta boa e amig�vel.\n Quem sabe eu encontre um rival por aqui...");
	close;
}

// ------------------------------------------------------------------
lhz_in02,267,25,4	script	Diana#lhz	4_F_ROGUE,{
	mes("[Diana]\n Nossa, aquela arma � fant�stica!\n Mas com certeza tamb�m � cara. Hum...");
	next;
	mes("[Assistente da Loja]\n Madame, voc� est� falando desse Stiletto?\n Voc� tem um �timo olho para armas de qualidade.\n Posso perguntar da onde voc� �?");
	next;
	mes("[Diana]\n Ah, eu nasci e fui criada em Morroc.");
	next;
	mes("[Assistente da Loja]\n Ah sim, eu ouvi muitas coisas boas sobre essa cidade.\n Voc� certamente provou que as pessoas de Morroc t�m um bom gosto.\n Agora, esse Stiletto custa 39 800 zenys...");
	next;
	emotion(e_omg);
	mes("[Diana]\n Hein...?!\n Isso � rid�culo!\n Deixa pra l�, me mostre aquele Gladius que est� no canto.");
	next;
	mes("[Assistente da Loja]\n O Gladius?\n Ah, ele custa 39.800 zenys, madame.");
	next;
	mes("[Diana]\n Ah, esse � um pre�o muito bom.\n Vou levar!");
	next;
	mes("[Assistente da Loja]\n �, essa r�plica realmente parece com um Gladius de verdade n�o �?\n Apesar de n�o ser uma arma de verdade, � bem capaz de abrir qualquer envelope!");
	next;
	mes("[Diana]\n .........\n Pegue de volta.\n Essa loja � p�ssima.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,36,274,4	script	Escrit�rio de eventos#lhz	4_F_ZONDAGIRL,{
	mes("[Saera]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " ao escrit�rio tempor�rio do Grupo de Eventos Incr�veis.\n Posso ajud�-l" + (Sex == SEX_MALE ? "o" : "a") + "?");
	next;
	if (select("Escrit�rio tempor�rio?", "N�o, obrigado.") == 1) {
		mes("[Saera]\n Nosso pr�dio original est� em constru��o, portanto estamos baseando nossas opera��es aqui at� ele ficar pronto.");
		close;
	}
	mes("[Saera]\n Obrigado.\n Tenha um dia muito agrad�vel.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,40,280,6	script	Planejador de Evento#lhz	4_M_ZONDAOYAJI,{
	mes("[Jellarin]\n N�o gosto disso.\n Mas n�o gosto da outra ideia tamb�m.\n Que evento novo eu devia fazer?");
	next;
	mes("[Jellarin]\n Preciso de algo grande, algo que realmente abalaria o mundo, algo �pico, mas o que?\n Ei, voc� tem alguma ideia?");
	close;
}

// ------------------------------------------------------------------
lhz_in03,26,167,5	script	Shayna#lhz	4_F_EINWOMAN,{
	mes("[Shayna]\n ^333333*Suspiro...*^000000\n Ah, minha pobre e querida menina...");
	close;
}

// ------------------------------------------------------------------
lhz_in03,193,25,2	script	Gar�om#lhz2	1_M_PUBMASTER,{
	mes("[Tony]\n Ei eu sei que esse lugar � ruim, praticamente um gueto, mas nos orgulhamos de ter o melhor rum de toda Rune-Midgard.");
	next;
	mes("[Tony]\n Apenas um gole dessa linda bebida e voc� vai ao topo do mundo!\n Mas � melhor ainda para ajudar a relaxar e a esquecer os problemas.");
	next;
	mes("[Tony]\n N�o sou muito um poeta, mas sei de uma coisa.\n Nosso rum tem o doce sabor da solid�o.\n Voc� realmente devia experimentar quando puder.");
	close;
}

// ------------------------------------------------------------------
lhz_in03,192,93,3	script	Cidad�#lhz	4_F_LGTGIRL,{
	mes("[Lanko]\n Ah, estou sozinha aqui, trabalhando como gar�onete para ajudar o meu pai.\n Esse trabalho � cansativo, mas � bom ver as pessoas relaxadas e se divertindo.");
	next;
	mes("[Lanko]\n Quando tiver um tempo de folga, vou explorar Lighthalzen e ver tudo que h� para ver.\n Mas at� agora n�o parece que temos poucos b�bados para eu poder sair...");
	close;
}

// ------------------------------------------------------------------
lhz_in03,189,87,5	script	Homem B�bado#lhz	4_M_LGTMAN,{
	mes("[Enku]\n *Suspiro*\n Acabei de levar um fora.\n �, achei que �amos nos casar, mas parece que eu estava errado!\n Sheryline, eu amava voc�!");
	next;
	mes("[Enku]\n Eu normalmente n�o bebo, especialmente bebidas como gim e rum.\n Mas hoje essas coisas t�m o sabor da minha tristeza, e s�o todo o conforto que eu preciso, entendeu?!");
	close;
}

// ------------------------------------------------------------------
lhz_in03,180,83,6	script	Cidad�o#lhz2	4_M_04,{
	mes("[Mitchell]\n Sabe, somos todos diferentes, mas acho que n�s humanos somos parecidos o suficiente para podermos nos comunicar de algum jeito.");
	next;
	mes("[Mitchell]\n Claro, uma pessoa rica tem problemas diferentes dos de uma pessoa pobre, mas o que quero dizer �, os dois t�m problemas!\n Dor, prazer, tristeza e felicidade nos unem.");
	next;
	mes("[Mitchell]\n Ent�o n�o seja chato para escolher seus amigos.\n N�s todos precisamos de algu�m, n�o �?");
	close;
}

// ------------------------------------------------------------------
lhz_in03,184,38,3	script	Loudmouth#lhz	1_M_JOBTESTER,{
	mes("[Loudmouth]\n Sabe quem eu sou?!\n Olhe para a minha perna.\n Eu estive na guerra de Comodo!\n Perdi a minha perna para garantir a sua liberdade!");
	next;
	mes("[Loudmouth]\n E-ei! Por que est� me olhando assim?!\n Voc� n�o acredita?!");
	close;
}

// ------------------------------------------------------------------
lhz_in03,130,41,5	script	Jay#lhz	4_M_KID1,{
	mes("[Jay]\n Minha m�e e meu pai sempre chegam tarde.\n Ent�o eu janto sozinho.\n Totalmente.\n Todo dia.");
	next;
	mes("[Jay]\n A comida n�o fica t�o boa quando voc� n�o tem companhia.\n Talvez eu seja um solit�rio.");
	close;
}

// ------------------------------------------------------------------
lhz_in03,124,117,1	script	Faxineira Brenda#lhz	1_F_MERCHANT_02,{
	mes("[Brenda]\n � melhor eu tomar muito cuidado com esse vaso.\n Vale dez milh�es de zenys e se eu fosse-- N�o. N�o!\n Nem vou pensar nisso!");
	close;
}

// ------------------------------------------------------------------
lhz_in03,25,105,5	script	Gopal#lhz	4_M_LGTMAN,{
	mes("[Gopal]\n O vov� pode ficar feliz sentado e aproveitando a vida, mas eu n�o!\n Sou jovem demais para me deitar e ver os dias passarem!");
	next;
	mes("[Gopal]\n Quero fazer algo de mim mesmo.\n Talvez algum dia eu monte uma companhia como a Corpora��o Rekenber!");
	close;
}
