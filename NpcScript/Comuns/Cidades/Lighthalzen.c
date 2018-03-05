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
| - Nota: Npcs comuns na cidade Lighthalzen                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
lighthalzen,182,102,3	script	Lucius#lhz	4_M_LGTGRAND,{
	if (Zeny < 90000) {
		mes("[Lucius]\n Olá jovem.\n Gostaria de fazer uma doação para ajudar os famintos?");
		next;
		if (select("Claro", "Não, obrigado.") == 1) {
			mes("[Lucius]\n Você pode doar de 1 a 30 000 zenys.\n Que serão usados para auxiliar os pobres e alimentar crianças famintas.\n Se você quer cancelar, digite '0'.");
			next;
			input(.@input);
			if (.@input > 30000) {
				mes("[Lucius]\n Por favor, insira um valor de 1 a 30000 para fazer uma doação aos necessitados, jovem.");
				close;
			} else if (.@input == 0) {
				mes("[Lucius]\n Que decepcionante.\n Mas você deve ter suas razões.\n Bem, quando você puder fazer uma doação aos necessitados, volte aqui.");
				close;
			}
			mes("[Lucius]\n Muito obrigado por sua doação de " + .@input + " zenys.\n Garanto que seu dinheiro será usado apenas para o benefício de quem necessita dele.");
			next;
			if (Zeny < .@input) {
				mes("[Lucius]\n Ainda assim, estou um pouco desapontado.\n Um aventureiro como você deveria doar o máximo possível...");
				close;
			}
			Zeny -= .@input;
			$donatedzeny += .@input;
			mes("[Lucius]\n Até agora, eu recebi um total de " + $donatedzeny + " zennys em doações.\n Estou muito feliz de ver que ainda existem pessoas boas e generosas no mundo.");
			if ($donatedzeny > 260000) {
				next;
				mes("[Lucius]\n Isso deve ser o bastante para mandar para a Organização de Ajuda aos Pobres.\n Por favor, aceite esse pequeno presente como um símbolo da minha gratidão.\n Que Deus o abençoe, aventureiro.");
				$donatedzeny = 0;
				.@weight1 = getiteminfo(.@Old_Blue_Box, ITEM_WEIGHT);
				.@weight2 = getiteminfo(.@Speed_Up_Potion, ITEM_WEIGHT);
				.@weightmax = .@weight1 + .@weight2;
				if ((MaxWeight - Weight) < .@weightmax) {
					next;
					mes("[Lucius]\n Oh...\n Infelismente você está carregando muito peso.\n Lhe daria algo mas, você não vai conseguir carregar.\n Sinto muito, quem sabe uma próxima vez...");
					close;
				} else {
					getitem(Old_Blue_Box, 1);
					getitem(Speed_Up_Potion, 1);
				}
			}
			close;
		}
		mes("[Lucius]\n Entendo.\n Mas lembre-se que quando você doa com o coração, será recompensado dez vezes.\n Apesar de, admito, nem sempre os benefícios serem imediatos.");
		close;
	}
	mes("[Lucius]\n Olá, jovem.\n Você parece ser bastante rico.\n É bom ter dinheiro, mas tome cuidado para não ficar obcecado com isso.");
	next;
	mes("[Lucius]\n Quando tiver a chance, mostre sua generosidade com aqueles que podem não ter sorte como você.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,198,285,5	script	Jiwon#lhz	4_F_LGTGIRL,{
	mes("[Jiwon]\n Acho que temos muita sorte por poder viver em uma cidade tão bonita e pacífica como essa.");
	next;
	mes("[Jiwon]\n É tão bom viver em um clima tão agradável.\n Com jardins tão lindos e poder conhecer todas essas pessoas boas.\n Lighthalzen é como Asgard em Midgard, é um paraíso na terra.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,220,244,3	script	Samnang#lhz	4_F_LGTGRAND,{
	mes("[Samnang]\n ^333333*Suspiro...*^000000\n Fica cada vez mais díficil me locomover enquanto envelheço.\n Mas acho que isso é compreensível, não?");
	next;
	mes("[Samnang]\n Mas alguns dias atrás, uns caras de terno preto gritaram comigo para eu sair da frente deles.\n Mas claro que não pude me mover muito rápido.\n Então sabe o que eles fizeram?");
	next;
	mes("[Samnang]\n Me deram um soco.\n Bem na barriga!\n Não é que eu esteja grávida, mas isso não importa.\n Homens nunca podem bater em mulheres, especialmente idosas!");
	close;
}

// ------------------------------------------------------------------
lighthalzen,261,112,3	script	Ruth#lhz	4_F_LGTGIRL,{
	mes("[Ruth]\n Amor, não é bom estarmos juntos aqui?\n É o lugar perfeito para o nosso encontro.");
	next;
	mes("[Ruth]\n Estou tão feliz por estar com você.\n Sinto que estou derretendo de felicidade!\n Ah, eu te amo tanto, Oyoung.");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Epa...\n Esse casal está indo para a Nuvem 9, não está?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,259,108,7	script	Oyoung#lhz	4_M_LGTMAN,{
	mes("[Oyoung]\n Garota, parece que você foi picada pela mosquinha do amor.\n Mas há um remédio para esse mal! Ahhh sim, eu garanto que há!");
	next;
	mes("[Oyoung]\n Você precisa de uma dose diária da Vitamina do Oyoung!\n E pelo que vejo seus lábios têm deficiência dessa vitamina!\n Vou tomar conta disso!");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Minha nossa!\n Não sei o que é mais assustador...\n Ele ter usado aquela cantada ou o fato de ela ter funcionado...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,233,121,3	script	Kariya#lhz	1_F_MARIA,{
	mes("[Kariya]\n Acho que \"Lighthalzen\" significa algo como \"Pico de Luz\".\n Apesar de ter ouvido que essa cidade foi nomeada para homenagear alguém.\n Mas quem pode saber?");
	next;
	mes("[Kariya]\n Ainda assim, é um bom nome para a cidade mais luxuosa e abastada de toda a República de Schwaltzvalt.\n O que você acha daqui?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,233,82,5	script	Sung#lhz	4_M_KID2,{
	mes("[Sung]\n Quando eu crescer, quero me tornar uma pessoa tão grande que até irão fazer uma estátua de mim.\n Assim como outras estátuas que foram feitas.");
	next;
	mes("[Sung]\n Ei você.\n Aquela estátua.\n Esse cara deve ter sido importante!\n Só de pensar que isso me faz sentir tão bem!");
	next;
	mes("[Sung]\n É isso aí.\n Eu vou ser reconhecido assim também algum dia.\n Nossa, e é melhor que eu cresça em tamanho e fique bonito.\n Para quando fizerem minha estátua ela parecer ainda mais incrível.\n Sim.\n Sim, boa idéia, Sung...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,89,73,3	script	Sameer#lhz	4_M_EINMAN2,{
	mes("[Sameer]\n Existem muitos casais apaixonados nessa cidade.\n Abraços e beijos e amassos.\n É...\n É um horror.");
	next;
	mes("[Sameer]\n Não acredito na indecência que vejo todo dia tão perto da minha casa.\n Eles não percebem que não podem ser tão entusiasmados em lugares públicos?!");
	next;
	mes("[Sameer]\n Felizmente para o mundo, sou um poço de moralidade.\n Na verdade, nem preciso de mulheres.\n Tudo que preciso são meus navios de brinquedo e dominó.");
	next;
	mes("[Sameer]\n Sou um indivíduo totalmente bem ajustado.\n É por isso que as autoridades deviam me ouvir quando digo para prenderem casais por atentado ao pudor!\n Andar de mãos dadas!\n Eles não têm vergonha?!");
	close;
}

// ------------------------------------------------------------------
lighthalzen,45,59,7	script	Janice#lhz	4_F_LGTGRAND,{
	mes("[Janice]\n Ah não, acho que me perdi de novo.\n As ruas daqui são muito confusas.\n Moro aqui faz tempo, e ainda assim não consigo me achar...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,66,94,3	script	Elmer Keays#lhz	4_M_LGTGRAND,{
	mes("[Elmer Keays]\n Andar ao seu lado assim me lembra dos velhos tempos.\n Quando todos morriam de inveja por eu ter uma mulher tão linda ao meu lado. Heh heh.");
	next;
	mes("[Elmer Keays]\n Você ainda é a mais bela visão para os meus velhos olhos, querida.\n Eu tenho muita sorte por estar com você.");
	emotion(e_kis, 0, "Margie Keays#lhz");
	emotion(e_kis2);
	close;
}

// ------------------------------------------------------------------
lighthalzen,65,94,5	script	Margie Keays#lhz	4_F_LGTGRAND,{
	mes("[Margie Keays]\n Ah querido, o tempo está tão bom e agradável hoje.\n Estou muito feliz que nós resolvemos dar um passeio juntos.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,78,120,3	script	Maivi#lhz	4_F_LGTGIRL,{
	mes("[Maivi]\n ...");
	next;
	mes("[Maivi]\n ......");
	next;
	mes("[Maivi]\n Ah...\n Acabei de tirar um cochilo ótimo.\n Esse clima agradável me deixa relaxar muito.\n O ar aqui é muito limpo, diferente do de Einbroch.");
	next;
	mes("[Maivi]\n Esse ambiente limpo e divino existe graças à Corporação Rekenber.\n É incrível o que eles fazem com a tecnologia atualmente!\n Ahhhh, é tão tranquilo.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,230,182,4	script	Klaubis#lhz	4_M_LGTGRAND,{
	mes("[Klaubis]\n Com licença, mas você é um turista?\n Seja bem-vind"+ (Sex == SEX_MALE ? "o" : "a") +" a Lighthalzen!\n Essa cidade tem tudo que precisamos, mas as vezes pode ser muito quieta, parada demais.");
	next;
	switch(select("Faz tempo que você mora aqui?", "Concordo.", "Sabe sobre o serial killer?")) {
		case 1:
		mes("[Klaubis]\n Sim, minha família mora nessa cidade faz tempo, começando com o meu bisavô.\n Vejamos, minha família mora aqui há mais ou menos duzentos anos.");
		next;
		mes("[Klaubis]\n Você ficaria surpreso ao saber quantas pessoas permanecem na sua terra natal.\n É difícil sair, mesmo sabendo que pode voltar.\n Não seria sua^FFFFFFterra natal se você não pudesse, não é ^000000 ?");
		close;
		case 2:
		mes("[Klaubis]\n Sim, de vez em quando a cidade fica meio desinteressante.\n Mas ainda assim, existem muitas coisas bonitas aqui, então olhe em volta.");
		close;
		case 3:
		mes("[Klaubis]\n Você quer dizer o Assassino do Machado?\n Achei que fosse apenas uma velha história de fantasmas.\n Hum. Bem, acho que a moça da Loja de Armas sabe mais sobre isso...");
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,232,156,3	script	Sigmund#lhz	4_M_LGTMAN,{
	mes("[Sigmund Ting]\n Sabe o que percebi?\n Os guardas na porta da favela muitas vezes ficam distraídos.\n Já me aproveitei de um desses momentos de pouca atenção e literalmente pulei o muro!");
	next;
	mes("[Sigmund Ting]\n Mas quando cheguei do outro lado, me decepcionei.\n Não tem nada de mais.\n E isso me faz perguntar...\n Por que colocar guardas lá?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,190,134,5	script	Joyce#lhz	4_F_LGTGIRL,{
	mes("[Joyce]\n Posso sentir você olhando dentro do meu coração e fazendo-o bater cada vez mais rápido.\n Com uma paixão arrebatadora.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,191,134,3	script	Dan Song#zen2	4_M_LGTMAN,{
	mes("[Dan Song]\n Esses seus olhos...\n Tão puros e profundos, como piscinas de luz cintilante.\n Tão bonitos...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,115,159,3	script	Collins#lhz	4_M_LGTGRAND,{
	mes("[Collins]\n Realmente espero que o meu filho vá trabalhar na Corporação Rekenber.\n Eles certamente oferecem os melhores empregos de Lighthalzen.");
	next;
	mes("[Collins]\n Embora eles sejam uma empresa grande e próspera.\n É quase impossível ser contratado por eles.\n Como as pessoas conseguem entrar lá?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,77,157,5	script	Villagomez#lhz	4_M_LGTGRAND,{
	mes("[Villagomez]\n Só dei uma saidinha para cortar o cabelo e me perdi.\n Ahh meu Deus, espero não deixar minha família preocupada.\n ^333333*Suspiro...*^000000");
	close;
}

// ------------------------------------------------------------------
lighthalzen,125,68,5	script	Kemp#lhz	4W_M_01,{
	mes("[Kemp]\n Você já viu as pessoas que trabalham na grande empresa aqui perto?\n Acho que os empregados de lá estão meio esquisitos por algum motivo.");
	next;
	mes("[Kemp]\n Eu não cheguei a ir até lá, mas alguma coisa estranha está acontecendo com todos que trabalham lá.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,138,50,7	script	Mauro#lhz	4_M_EINOLD,{
	mes("[Mauro]\n Os jovens dessa cidade não tem respeito pelos mais velhos.\n Eu trabalhei duro por anos para ajudar a construir essa cidade, e é isso que recebo?");
	next;
	mes("[Mauro]\n Bah! Se não fosse por nós, Lighthalzen não seria próspera como é hoje!\n Essas crianças não percebem todo o luxo que têm é devido ao nosso trabalho...");
	close;
	close;
}

// ------------------------------------------------------------------
lighthalzen,132,103,5	script	Sefith#lhz	4_M_JOB_KNIGHT2,{
	mes("[Sefith]\n Bonito. Inteligente.\n Educado. Forte.\n Olhar arrebatador.\n Níveis de paixão e carisma perfeitamente balanceados.\n Tudo o que as garotas querem.");
	next;
	mes("[Sefith]\n Mas chega de falar de mim.\n Vamos falar sobre a pena que sinto de todos os outros homens de Lighthalzen.\n Nenhum deles tem a mínima chance comigo por perto.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,239,64,5	script	Jade#lhz	4_F_LGTGIRL,{
	mes("[Jade]\n Ouvi dizer que tem um reinado estranho que é basicamente regido por magia e espadas.\n Onde aventureiros se juntam para o bem maior.");
	next;
	mes("[Jade]\n Ah, você é de Rune-Midgard?\n O que você acha da nossa cidade, com nossa avançada tecnologia? Hum...");
	next;
	mes("[Jade]\n Algum dia eu gostaria de ir visitar a sua terra natal.\n Parece tão fantástica e romântica...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,205,208,4	script	Homem Ganancioso#lhz	4_M_YURI,{
	mes("[Homem Ganancioso]\n Comprar uma propriedade aqui custa muito dinheiro.\n Mas essa terra é perfeita para a construção do meu palácio!\n Ainda não tenho dinheiro, mas o grande dia chegará.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,202,94,5	script	Wallace#lhz	4_M_EINOLD,{
	mes("[Wallace]\n ......\n Aquela menina, que trabalha para a corporação Kafra, que acho que chama Mafra.\n Ela é muito charmosa.");
	next;
	mes("[Wallace]\n Agora, se eu fosse trinta anos mais jovem...\n Espere!\n Sou um homem rico e poderoso.\n Eu poderia chamá-la para sair.\n Hum? Por que está me olhando assim?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,147,105,3	script	Laqumet#lhz	4_M_LGTMAN,{
	mes("[Laqumet]\n Claro que a masculinidade é muito atraente para as mulheres.\n Mas acho que elas também apreciam alguém que seja simpático e converse com elas.\n Não acha?");
	next;
	mes("[Laqumet]\n Posso não ser como Sefith, mas acho que tenho um sorriso bonitinho, boa personalidade.\n Espero que a minha honestidade e a minha lealdade me ajudem a encontrar alguém especial!");
	close;
}

// ------------------------------------------------------------------
lighthalzen,123,212,4	script	Merpi#lhz	8_F_GIRL,{
	mes("[Merpi]\n O tempo não está ótimo hoje?\n Esse sol vai secar as roupas rápido e deixá-las com um cheiro fresco.");
	next;
	mes("[Merpi]\n Oh, você é um aventureiro de Rune-Midgards?\n O que acha da nossa cidade?\n Se tiver alguma pergunta, venha falar comigo.");
	next;
	switch(select("Não tenho nada para perguntar...", "Alguma novidade ou rumor?", "Eu também gosto de lavar roupas.")) {
		case 1:
		mes("[Merpi]\n Sério?\n Bem, se você já viajou por todo o mundo.\n Talvez tenha encontrado um lugar como Lighthalzen.\n Onde você se sinta confortável.");
		close;
		case 2:
		mes("[Merpi]\n Bem, as coisas estão muito tranquilas nos últimos tempos.\n O único rumor é sobre um assassino estranho que tem um martelo...");
		close;
		case 3:
		mes("[Merpi]\n Ah, que maravilha!\n Eu adoro lavar roupas, embora não saiba muito bem porque. Ah, bem.");
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
		mes("[Pilia]\n Berru, acho que o papai não vai voltar para casa hoje.\n Vamos, você tem que ir dormir.");
		next;
		mes("[Berru]\n Não, não vou dormir até o papai voltar!\n Ele disse que iria trazer doces hoje a noite!\n Vá dormir você, Pilia!");
		emotion(e_ag);
		next;
		mes("[Pilia]\n ^333333*Suspiro...*^000000\n Cadê nosso pai?\n Ele disse que arrumou um emprego bom, mas não apareceu nunca mais...");
		emotion(e_dots, 0, "Pilia#lhz");
		close;
		case 2:
		mes("[Pilia]\n Por que ele está demorando tanto?\n Espero que o papai volte logo.\n Vamos Berru, pare de chorar.");
		emotion(e_dots, 0, "Pilia#lhz");
		next;
		mes("[Berru]\n ^333333*Choro...*^000000\n Mas estou com fome e com saudade do papai!");
		next;
		mes("[Pilia]\n O tio Togii que mora ao lado também não voltou...");
		close;
		case 3:
		mes("[Pilia]\n Humm?\n Ah, sinto muito, mas meu irmãozinho não para de corar.\n Desculpe se está muito alto.");
		emotion(e_what, 0, "Pilia#lhz");
		next;
		mes("[Pilia]\n Nosso pai vai trabalhar em algum lugar longe.\n Ele finalmente arrumou emprego, mas as vezes fica dias sem aparecer.\n Estamos muito preocupados com ele.");
		next;
		mes("[Pilia]\n Meu irmão Berru sente muita falta dele.\n Não sei o que fazer para que ele pare de chorar. O que faço?");
		emotion(e_swt2, 0, "Pilia#lhz");
		close;
	}
}
lighthalzen,297,239,3	duplicate(Berru#lhz)	Pilia#lhz	4_F_CHNWOMAN

// ------------------------------------------------------------------
lighthalzen,312,233,3	script	Beggar#lhz	4_M_TWOLDMAN,,{
	mes("[Beggar]\n Por favor...\n Minhas crianças estão famintas...\n Pode me dar algum dinheiro?");
	next;
	if (select("Dar dinheiro para ele", "Ignorar") == 1) {
		if (Zeny < 50) {
			mes("[Beggar]\n Agradeço sua bondade, mas parece que você também precisa de alguns zenys.\n Gostaria de se juntar a mim?");
			emotion(e_heh);
			close;
		}
		mes("[" + strcharinfo(PC_NAME) + "]\n Aqui, pegue.");
		Zeny -= 50;
		next;
		mes("[Beggar]\n Muito obrigado.\n Não posso oferecer nada em troca.\n Mas posso te contar uma história e transmitir um pouco da sabedoria que adquiri com o passar dos anos.");
		emotion(e_thx);
		next;
		switch(rand(1, 3)) {
			case 1:
			mes("[Beggar]\n Todos já estiveram em uma situação em que você sente que precisa fazer uma escolha.\n Entre fazer a coisa certa ou fazer o que você quer, não é?");
			next;
			mes("[Beggar]\n Você se sente acuado.\n Bem, vou te contar, quando existe um problema, as soluções disponíveis nem sempre são óbvias.\n Então se acalme e pense.");
			next;
			mes("[Beggar]\n O que você pode ver e entender talvez não seja a realidade.\n Como estrelas, que estão no céu de dia, mas invisíveis.\n Devemos ter esperança, mesmo se não tivermos motivo aparente.");
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
			mes("[Beggar]\n Hmm...?\n Você parece surpreso.");
			emotion(e_what);
			close;
			case 2:
			mes("[Beggar]\n Eu acredito e não acredito em destino.\n Deixe-me explicar assim.\n Eu vivo cada dia, cada um completando seu ciclo com milagres de um lado e tragédias do outro.");
			next;
			mes("[Beggar]\n Então cada dia pode ter experiências boas, más ou ambas.\n Acredito que cada pessoa pode ter um papel ativo em seu próprio destino, dia após dia.");
			next;
			mes("[Beggar]\n Podem ter algumas coisas que você não controla.\n Mas até o pior pessimista pode concordar que esse mundo não tem apenas tragédias.");
			next;
			mes("[Beggar]\n Levante-se quando cair e viva com paixão.\n A capacidade de ocorrerem milagres sempre estará lá e saiba que você pode ser um milagre para alguém.\n Isso não é lindo?");
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
			mes("[Beggar]\n Não acredita?\n Você verá por si mesmo, jovem.\n Existem muitas coisas boas em você.");
			emotion(e_what);
			close;
			case 3:
			mes("[Beggar]\n Raiva.\n As pessoas lidam com ela de formas diferentes.\n Alguns abafam.\n Outros liberam.\n Alguns têm medo.\n Para simplificar, digamos que existem dois tipos de raiva.");
			next;
			mes("[Beggar]\n O primeiro é o tipo que não é muito produtivo.\n Como uma frustração que você pode mandar embora.\n Alguém foi grosso com você ou seu amigo esqueceu seu aniversário?\n Sem estresse.");
			next;
			mes("[Beggar]\n Não se deixe dominar por esse tipo de raiva, ou vai parecer um fracassado.\n Pense no quando completo, e se continuar chateado, reaja apropriadamente.\n Seja honesto sem machucar ninguém.");
			next;
			mes("[Beggar]\n O segundo tipo de raiva é justificado.\n Sacanearam você e você quer retribuir.\n Apenas se lembre de não direcioná-la erroneamente, e responda de maneira apropriada.");
			next;
			mes("[Beggar]\n Entrar numa briga por raiva justificada, digamos para proteger alguém, fará de você um herói.\n Brigar por raiva passageira ou frustração fará de você um idiota.\n Saiba a diferença.");
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
	mes("[Reuben]\n O-ops...!\n Você me ouviu falando sozinho?\n Preciso ser mais silencioso!");
	emotion(e_an);
	close;
}

// ------------------------------------------------------------------
lighthalzen,306,324,3	script	Shengwen#lhz	4_M_LGTPOOR,{
	mes("[Shengwen]\n Estou ficando paranóico?\n Eu realmente acho que algumas pessoas que eu conheço estão desaparecendo sem nenhum motivo!");
	next;
	mes("[Shengwen]\n Digo, os meus amigos mais próximos estão bem.\n Mas estou parando de ver alguns conhecidos e rostos familiares.\n Talvez eu esteja pensando demais nisso...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,330,276,3	script	Angela#lhz	1_F_PRIEST,{
	mes("[Angela]\n Saudações, aventureiro.\n Sou Angela, uma assistente social da Organização de Ajuda aos Pobres.");
	next;
	mes("[Angela]\n Percebi que os habitantes daqui têm uma saúde muito ruim, e não apenas por causa da sua condição.");
	next;
	mes("[Angela]\n Mandei um relatório para os meus superiores.\n Mas por alguma razão eles ainda não me enviaram uma resposta.\n Estou começando a me preocupar com isso...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,337,296,3	script	Funcionário#lhz	4_M_LGTGUARD2,{
	mes("[Funcionário Rekenber]\n Saudações.\n Como parte de nossos esforços para auxiliar os pobres.\n A Corporação Rekenber está oferecendo postos de trabalho para os moradores das áreas carentes.");
	next;
	mes("[Funcionário Rekenber]\n Eles podem escolher entre trabalhar em casa ou fazer um treinamento que permitirá melhores opções profissionais.\n Essa é uma ótima chance de fazer diferença...\n E também algum dinheiro.");
	emotion(e_no1);
	close;
}

// ------------------------------------------------------------------
lighthalzen,326,249,5	script	Grinnel#lhz	4_M_LGTPOOR,{
	mes("[Grinnel]\n Vê aqueles homens de terno preto?\n Cara, me deram um susto!\n Vieram até mim para fazer várias perguntas estranhas!");
	next;
	mes("[Grinnel]\n Queriam saber se eu conhecia alguém da Corporação Rekenber.\n Se já tinha ido em uma parte da cidade, esse tipo de coisa.\n Me assustaram muito.");
	next;
	mes("[Grinnel]\n Viver nas favelas é uma droga.\n A vida é dura e as pessoas acham que podem te tratar como quiserem.\n Eu odeio Lighthalzen...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,159,222,1	script	Funcionário Rekenber#lhz	4_M_MANAGER,{
	mes("[Benatuth]\n O mecânico está acabando a manutenção do avião particular do nosso gerente.\n Você pode imaginar ter um desses só para você poder voar para onde quiser?");
	next;
	mes("[Benatuth]\n É, o gerente da Corporação Rekenber...\n É um homem muito poderoso.\n É até assustador tudo o que ele pode fazer com o dinheiro dele, sabe?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,162,304,7	script	Guarda Rekenber#lhz	4_M_LGTGUARD,{
	mes("[Guarda Drew]\n Cara, olha isso.\n Fotos oficiais das meninas da Corporação Kafra. Olha...\n E elas estão até usando cintos!");
	emotion(e_ho);
	next;
	mes("[Guarda Tan]\n Então todas elas estão usando cintos nessas fotos?\n Isso quer dizer que tem também a foto da menina que usa óculos?\n Essa é a melhor notícia do dia!");
	emotion(e_omg, 0, "Guarda Rekenber#lhz2");
	next;
	mes("[Guarda Drew]\n Ok cara, você sabe que essas fotos são edição limitada especial de colecionador.\n Então cada uma custa 300 000 zenys.\n Eu tenho um lote extra, mas não sei se você quer comprar todas...");
	next;
	mes("[Guarda Tan]\n Vou ficar com todas.\n Espere, todas menos essa da garotinha.\n Só a idéia de ter a foto dela por perto já me deixa...\n É melhor não ter.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,163,306,3	script	Guarda Rekenber#lhz2	4_M_LGTGUARD2,{
	mes("[Guarda Tan]\n Uau. Isso aqui...\n Isso aqui é arte. A luz, o ângulo, o... o...\n Nossa.");
	emotion(e_swt2);
	next;
	mes("[Guarda Drew]\n Cara, essas fotos são oficiais e licenciadas...\n Valem cada zeny que pagamos.\n Diga adeus ao calendário das garotas de biquíni e olá para a Kafra Leilah!");
	next;
	mes("[Guarda Tan]\n Leilah?\n Você quer dizer a que usa óculos?\n Cara, ela é a minha preferida também!");
	close;
}

// ------------------------------------------------------------------
lighthalzen,70,227,4	script	Delna#lhz	8_F,{
	mes("[Delna]\n As vezes os prazeres mais simples podem te dar a maior felicidade.\n Para mim, a melhor coisa é sair e ficar no sol.");
	next;
	mes("[Delna]\n Sim, tomar sol em um lugar calmo e relaxante pode ser muito revigorante.\n E se você tomar cuidado para não sofrer queimaduras, tomar sol pode ser uma coisa muito positiva.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,107,107,3	script	Kosit#lhz	4_M_LGTMAN,{
	mes("[Kosit]\n Essa cidade pode ter mais guardas e regras do que as outras.\n Mas ainda não sei se é seguro morar aqui.");
	next;
	mes("[Kosit]\n Digo, a razão de termos tantas regras é a presença de gangsters que as vezes entram na cidade.\n Normalmente é até tranquilo e tudo.\n Mas essas regras...");
	next;
	mes("[Kosit]\n É bom estar seguro, mas não sei se é uma boa idéia sacrificar nossa liberdade e nosso jeito de viver, sabe?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,176,65,5	script	Kimmy#lhz	4_F_LGTGIRL,{
	mes("[Kimmy]\n Diferente dos outros lugares, Lighthalzen tem muitas lojas de roupas e acessórios.\n Isso é como o céu para alguém como eu.!");
	next;
	mes("[Kimmy]\n Não sei se vocês aventureiros se interessam por moda.\n Mas você pode renovar seu guarda roupa em lojas ótimas e modernas aqui em Lighthalzen.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,364,282,3	script	Bodger#lhz	4_M_LGTPOOR,{
	mes("[Bodger]\n Outro dia faminto...\n Não tenho dinheiro, e mesmo se tivesse não tem nenhum lugar que venda comida que eu comeria.\n Nossa, estou quase morrendo...");
	next;
	mes("[Bodger]\n Ouvi dizer que as pessoas da cidade comem refeições deliciosas oito vezes por dia!\n Espero que seja só um exagero.\n Porque eu ficaria louco se não fosse...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,192,63,4	script	Sergei#lhz	4_F_03,{
	mes("[Sergei]\n Sabe, tem uma história interessante sobre aquele martelo que está pendurado ali.\n Você gostaria de escutá-la?");
	next;
	if (select("Claro", "Não, obrigado.") == 1) {
		mes("[Sergei]\n O dono anterior da Loja de Armas era um assassino em série.\n Toda noite, ele pegava aquele martelo e assassinava cruelmente moças bonitas como eu.");
		next;
		mes("[Sergei]\n Quando ele finalmente foi pego, decapitaram-no com seu próprio martelo.\n Desde então, dizem que seu fantasma ainda afia e mexe nesse martelo a noite.");
		next;
		mes("[Sergei]\n Só pensar nisso me dá arrepios!\n E eu ainda tenho que trabalhar aqui!\n É assustador!");
		close;
	}
	mes("[Sergei]\n Ah, que decepcionante.\n É a história perfeita para essa temporada.\n Bem, pensando nisso, é uma história meio arrepiante...");
	close;
}

// ------------------------------------------------------------------
lighthalzen,258,223,3	script	Srinivas#lhz	4_M_LGTGRAND,{
	mes("[Srinivas]\n Esses prédios decadentes na favela são uma visão que ofende todo o resto da cidade!\n Gostaria que fossem demolidos.\n Não me interesso pelos pobres e necessitados.");
	close;
}

// ------------------------------------------------------------------
lighthalzen,77,203,3	script	Victor Perfecto#lhz	4_M_LGTMAN,{
	mes("[Victor Perfecto]\n Já ouvi falar que a Corporação Rekenber realmente criou o ambiente de Lighthalzen por meios artificiais.");
	next;
	mes("[Victor Perfecto]\n Parece que precisaria de muito investimento.\n Mas criar um ambiente artificialmente não é impossível para a Corporação Rekenber.\n Com todos seus recursos disponíveis.");
	next;
	mes("[Victor Perfecto]\n ^333333*Suspiro...*^000000\n Ainda assim, é deprimente pensar que a beleza da natureza pode ser feita e igualada a zenys, você não acha?");
	close;
}

// ------------------------------------------------------------------
lighthalzen,40,107,4	script	Vergil#lhz	4_M_LGTMAN,{
	mes("[Vergil]\n O tempo está tão bom hoje, como sempre.\n Queria sair do trabalho e ir fazer exercícios físicos.");
	next;
	switch(select("Onde você quer ir?", "Mas você não devia ir trabalhar?", "Ouviu falar sobre o serial killer?")) {
		case 1:
		mes("[Vergil]\n Bem, esses caras de terno preto, sem mencionar os rufiões que de vez em quando conseguem entra na cidade.\n Fazem com que seja meio inseguro sair daqui sozinho.");
		next;
		mes("[Vergil]\n Mas eu e um amigo meu estamos planejando ir para Al De Baran um dia desses.\n Nossa, da última vez que nós fomos, gastamos muitos zenys.");
		next;
		mes("[Vergil]\n Ele até ganhou um prêmio, um tipo de poção, e deu para eu experimentar.\n Eu bebi, e ela fez com que eu me movesse muito devagar.\n Que tipo de prêmio é esse?!");
		next;
		mes("[Vergil]\n Acho que meu amigo foi enganado.\n Ou isso, ou eu fui um idiota por beber a poção.\n Como elestiveram uma idéia tão ruim para um prêmio!");
		close;
		case 2:
		mes("[Vergil]\n O qu...?!\n Eu não disse que ia faltar no trabalho, só disse que queria!\n Mas só para você saber, talvez, apenas talvez, eu não vá hoje!");
		next;
		mes("[Vergil]\n Mas acho que acabarei não fazendo isso...\n Droga...\n Certamente o fim de semana não chega rápido o suficiente!");
		close;
		case 3:
		mes("[Vergil]\n O que, você quer dizer aquele assassino do martelo de anos atrás?\n Bem, eu ouvi um rumor de que não foi bem assim.\n Deixa eu ver, como era mesmo?");
		next;
		mes("[Vergil]\n Ouvi dizer que um chapeleiro, o que faz Chapéu de Fumacento.\n Acidentalmente fez um chapéu de pessoas, invés de um feito com monstros.\n Não me pergunte como.");
		next;
		mes("[Vergil]\n É, acho que foram parentes do capitão do avião...\n Eles foram transformados em chapéu por acidente. Parece que era algo como um Reindeer.\n Nossa, mas isso é estranho demais.");
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
lhz_in01,134,45,3	script	Cenku Dekdam#lhz	4_M_LGTMAN,{
	mes("[Cenku Dekdam]\n Cara, se você fosse pegar essa cidade inteira e colocá-la a venda.\n Quanto você acha que seria o preço de Lighthalzen, hein?");
	next;
	mes("[Cenku Dekdam]\n Digo, essa cidade é feita de dinheiro.\n É isso que torna essa cidade um lugar tão bom e agradável para morar.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,134,38,3	script	Bankri Kun#lhz	4_M_NFMAN,{
	mes("[Bankri Kun]\n Preciso trabalhar...\n Preciso me concentrar...\n Resistir ao sono...\n Por que eu continuo vindo aqui?\n É horrível...");
	next;
	mes("[Bankri Kun]\n Olá, jovem.\n Quer um conselho para suas aventuras? Ok.\n Hum. Sempre. Escove.\n Seus dentes.\n Escove-os todo dia.\n Ah, e não esqueça de ter uma boa escova de dentes.");
	next;
	mes("[Bankri Kun]\n Agora preciso voltar ao trabalho.\n Te vejo mais tarde, criança.\n Desculpe se o meu conselho foi péssimo...\n Não consegui pensar em mais nada para dizer.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,139,40,7	script	Enoz#lhz	1_M_INNKEEPER,{
	mes("[Enoz]\n Então o livro que eu encomendei do Reino de Rune-Midgards acabou de chegar.\n É muito bom, é do cara que escreveu 'A Aventura do Sapo de Roda' anos atrás.\n Lembra-se?");
	next;
	mes("[Enoz]\n Enfim, esse novo livro, 'Onde Crescem Plantas Vermelhas' está concorrendo ao Prêmio Yggdrasil.\n E... eu não sei por que estou contando isso para você... Realmente não sei...");
	close;
}

// ------------------------------------------------------------------
lhz_in01,124,28,3	script	Ellette#lhz	1_F_01,{
	mes("[Ellette]\n ...");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Com licença.");
	next;
	mes("[Ellette]\n .........");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Olá?");
	next;
	mes("[Ellette]\n ...Ah! Galera!\n Acabei de completar mais um! Eba!");
	next;
	mes("[Outros funcionários]\n O qu-quê?!\n Não, de novo não!");
	next;
	mes("[Leekal]\n Você é humana?!\n Deve ter algum segredo para manter toda essa produtividade.\n É estranho...");
	next;
	mes("[Ellette]\n Ah, que bobagem.\n Posso ser boa nisso, mas eu nunca ganharia do Cenku.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,125,40,3	script	Dowbow Ryuei#lhz	4_M_THAIONGBAK,{
	mes("[Dowbow Ryuei]\n Só de, bem, curiosidade, qual palavra você prefere?\n Sonho ou Realidade?\n Escolha uma.");
	next;
	if (select("Sonho", "Realidade") == 1) {
		mes("[Dowbow Ryuei]\n É mesmo? Eu também!\n É, nós temos a mesma visão de mundo.\n Se você não se importar, eu gostaria de apertar sua mão.");
		emotion(e_no1);
		close;
	}
	mes("[Dowbow Ryuei]\n Realidade então?\n Concordo que ser realista tem suas vantagens, mas eu sou um sonhador.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,125,46,3	script	Leekal#lhz	4_M_DIEMAN,{
	mes("[Leekal]\n Então... Estou falido.\n Por que gastei tanto dinheiro com vinho, mulheres e música?\n Eu me arrependo, de todo o prazer que tive esse mês.\n É, foi prazer demais.");
	next;
	mes("[Ninjose]\n É isso que acontece quando você é irresponsável com seu dinheiro.\n Você deveria ler \"Qualquer Um Pode Ser Rico\", um livro muito bom.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,53,7	script	Ninjose#lhz	4_M_THAIAYO,{
	mes("[Ninjose]\n Depois de muito tempo, finalmente comprei minha casa.\n Você também deveria guardar dinheiro para o futuro.\n E leia \"Qualquer Um Pode Ser Rico\", é ótimo!");
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,39,7	script	Kejulle Rekenber#lhz	4_M_CHNMAN,{
	mes("[Kejulle Rekenber]\n Hum? É, meu sobrenome é Rekenber, assim como o do nosso gerente, mas é só uma coincidência.\n Sou um funcionário normal.\n Sem tratamento especial...");
	close;
}

// ------------------------------------------------------------------
lhz_in01,110,40,3	script	Jorjerro#lhz	4_M_ORIENT02,{
	mes("[" + strcharinfo(PC_NAME) + "]\n ^3355FFEsse homem está imóvel, e para todos os propósitos, parece adormecido.^000000");
	close;
}

// ------------------------------------------------------------------
lhz_in01,116,45,7	script	Joshua#lhz	4_M_BIBI,{
	mes("[Joshua]\n O que estou fazendo aqui?\n Estou esperando meu sonho, que mulheres caiam no meu colo, o que mais parece?");
	next;
	mes("[Joshua]\n Altas, loiras, bonitas, de pele macia.\n Isso aí.\n Venham a Joshua, garotas.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,180,28,4	script	Guarda#lhz	4_M_LGTGUARD,{
	mes("[Guarda]\n Essa é uma área restrita.\n Por favor saia se não tiver autorização especial.\n Agradecemos por sua cooperação.");
	close;
}
lhz_in01,173,28,4	duplicate(Guarda#lhz)	Guarda#lhz2	4_M_LGTGUARD

// ------------------------------------------------------------------
lhz_in01,14,28,3	script	Atendente#lhz	4_M_MANAGER,{
	mes("[Atendente]\n Esse muro de Banquetes é utilizado para realizar eventos como festas para parceiros.\n Clientes e outros associados.\n Além de conferências de imprensa.\n Claro, não há nada aqui agora.");
	next;
	mes("[Atendente]\n As vezes paz e quietude são boas para mudar os ares, mas agora eu estou meio entediado.\n Acho que preferia estar ocupado do que aqui roendo as unhas, na verdade.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,43,52,3	script	Luccet#lhz	4_F_KID2,{
	mes("[Luccet]\n Shhhh! Ei, meu irmão tem \"aquilo\", então preciso de um lugar para me esconder!\n Espere, você pode ficar parado?\n Posso me esconder atrás de você?\n Ah, droga!");
	close;
}

// ------------------------------------------------------------------
lhz_in01,21,50,7	script	Annette#lhz	4_F_02,{
	mes("[Annette]\n Ouvi dizer que o Hall de Banquetes Rekenber também é usado para casamentos.\n Deve ser tão maravilhoso.");
	next;
	mes("[Annette]\n Mesmo se for bem mais caro, eu gostaria de me casar aqui.\n O casamento só ocorre uma vez na vida, de preferência, então eu gostaria que o meu fosse uma experiência memorável.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,108,53,3	script	#horri	HIDDEN_NPC,{
	mes("^3355FFIsso é apenas uma pilha de arquivos, um amontoado de livros e um retrato de família.^000000");
	close;
}

// ------------------------------------------------------------------
lhz_in01,108,47,3	script	#never	HIDDEN_NPC,{
	mes("^3355FFEssa mesa está muito limpa e organizada em comparação com as outras mesas que você já viu.\n Você pára por um momento para olhar maravilhado para a limpeza da mesa.^000000");
	close;
}

// ------------------------------------------------------------------
lhz_in01,166,55,3	script	#crazy4u	HIDDEN_NPC,{
	mes("^3355FFEssa mesa tem uma prateleira lotada de vários tipos de livros.\n Por curiosidade, você decide pegar um.^000000");
	next;
	mes("^3355FFEntretanto, o livro que você pegou contém grande quantidade de magia negra, o que faz você largá-lo.^000000");
	specialeffect(EF_CURSEATTACK);
	close;
}

// ------------------------------------------------------------------
lhz_in01,148,45,3	script	Noama#lhz	4W_M_01,{
	mes("[Noama]\n Hee hee.!\n Quer ouvir uma coisa engraçada?\n Soube que tem um bar em Prontera onde um cara manda solteiros para Jawa...");
	next;
	mes("[Mazwon]\n Noama...!\n Essas máquinas estão falhando de novo!\n Venha cá agora!");
	next;
	mes("[Noama]\n O quê?!\n Pare de me amolar, eu não fiz nada!");
	close;
}

// ------------------------------------------------------------------
lhz_in01,157,47,1	script	Mareth#lhz	4_M_NFLOSTMAN,{
	mes("[Mareth]\n Yoo hoo hoo.\n Ah, como eu amo amo amo chocolate!");
	emotion(e_lv);
	next;
	mes("[Mareth]\n Comê-lo...\n Ou derretê-lo...\n Espalhá-lo em mim.\n Cara. Novo objetivo na vida.");
	close;
}

// ------------------------------------------------------------------
lhz_in01,144,53,3	script	Jorje#lhz	4W_M_02,{
	switch(rand(1,3)) {
		case 1:
		mes("[Jorje]\n Aaarre, eu não tenho tempo para conversar!\n Estou no meio de uma tarefa importante!\n Espere aí!");
		close;
		case 2:
		mes("[Jorje]\n N-não chegue mais perto!\n Qualquer um que chegar perto pode me machucar!\n Saia daqui!");
		close;
		case 3:
		mes("[Jorje]\n Ah cara...\n Eu tenho trabalhado tão duro e nem fiz uma pausa ainda.\n Acho que vou me recompensar e comprar algo como...");
		next;
		mes("[Jorje]\n Não! Não, não vou comprar nada!\n Tenho que pensar na minha futura esposa!\n Preciso...\n Juntar... Mais... Dinheiro!");
		close;
	}
	end;
}

// ------------------------------------------------------------------
lhz_in01,139,48,7	script	Leimi#lhz	1_F_MERCHANT_01,{
	mes("[Leimi]\n .........");
	next;
	mes("[Leimi]\n Oh...!\n Meu Deus!\n Posso ajudá-lo?");
	emotion(e_omg);
	if (BaseJob == Job_Assassin) {
		next;
		mes("[Leimi]\n Um Assassino...?\n Ah, você por acaso conhece algum menino Assassino que esteja solteiro?\n Ai-meu-Deus, eles são tão maravilhosos.");
	}
	close;
}

// ------------------------------------------------------------------
lhz_in01,138,47,0	script	#mimir_camera	FAKE_NPC,2,2,{
	OnTouch:
	mes("^3355FF*Click*^000000");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n O quê...?\n Esse som. Alguém...\n Alguém tirou uma foto minha?");
	close2;
	end;
}

// ------------------------------------------------------------------
lhz_in01,221,131,7	script	Cientista#lhz	4_LGTSCIENCE,{
	mes("[Cientista]\n O que aconteceu?\n Todas as máquinas estão em ruínas e o relatório de pesquisa sumiu?!\n A história de Regenschirm foi roubada!");
	close;
}

// ------------------------------------------------------------------
lhz_in02,242,172,1	script	Funcionário do Hotel#lhz	4_M_LGTGUARD,{
	mes("[Funcionário do Hotel]\n Se você sofrer algum inconveniente, não hesite e fale conosco assim que possível.");
	next;
	mes("[Funcionário do Hotel]\n Por favor use as escadas no norte do prédio para descer e ir para a mesa central.\n Obrigado e aprecie sua estadia aqui.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,210,189,3	script	Christopher Michael#lhz	4_M_DIEMAN,{
	mes("[Christopher Michael]\n OoooOoh.\n Tããão confortável.\n Não quero acordar.\n Não quero levantar.\n Nunca mais.\n OoOoooh...");
	close;
}

// ------------------------------------------------------------------
lhz_in02,251,212,3	script	Funcionário do Hotel#lhz2	4_M_LGTGUARD,{
	mes("[Funcionário do Hotel]\n Essa é a Suíte de Casal.\n Você também pode alugá-la sozinho, mas nosso hotel prioriza casais que se candidatam a esse quarto.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,209,277,5	script	Ben Allen#lhz	4_M_02,{
	mes("[Ben Allen]\n Aaahhh Oooooh.\n Está tão confortável.\n O ar é tão fresco e o sofá é tão macio...\n Por que minha casa não é assim?");
	next;
	mes("[Ben Allen]\n Já estive em outros hotéis, mas vou te contar, esse daqui é o melhor de todos.\n Depois de uma noite de sono aqui, eu me sinto um novo homem!");
	close;
}

// ------------------------------------------------------------------
lhz_in02,238,275,5	script	Funcionário do Hotel#lhz3	4_M_LGTMAN,{
	mes("[Funcionário do Hotel]\n Hospitalidade com um sorriso e comprometimento total com seu conforto.\n Esse é nosso lema, no hotel Dragão Real.\n Vá até a mesa central se quiser se hospedar aqui.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,271,281,2	script	Cidadão#lhz	1_M_01,{
	mes("[Hachi]\n Ah sim!\n Eu amo-amo-amo bares.\n Não venho pelos drinques, venho pelas lindas garotas daqui.");
	next;
	mes("[Hachi]\n Estranho.\n É a primeira vez que eu tomo o rum daqui, mas parece que ele é sensualidade líquida!\n Voltemos para a festa com todas as garotas.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,277,285,4	script	Garçom#lhz	1_M_PUBMASTER,{
	mes("[Duff]\n Ei, você é de Rune-Midgards, não?\n Por favor, sinta-se em casa enquanto está em Lighthalzen e tenha uma boa estadia aqui.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,281,280,6	script	Cliente#lhz	4_F_CHNDRESS2,{
	mes("[Rona]\n Eu odeio quando os caras simplesmente pulam os Passos Um e Dois.\n Antes que você fique perdido, o Passo Três é 'Peça o número do meu telefone.'");
	next;
	mes("[Rona]\n Eu realmente gostaria que um cara legal viesse ter uma conversa de verdade comigo.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,287,282,4	script	Cliente#lhz2	4_M_YURI,{
	mes("[Greenfield]\n Não acredito...\n Essa maré de azar não vai acabar nunca, vai?\n Perdi todas as minhas maçãs nos dados hoje.\n De novo. Ah meu...");
	next;
	mes("[Greenfield]\n Ok. Ok.\n Se eu continuar jogando, alguma hora eu vou ganhar.\n Digo, é assim que as coisas funcionam!\n Mesmo se estão contra mim...");
	close;
}

// ------------------------------------------------------------------
lhz_in02,287,273,3	script	Cliente#lhz3	1_M_04,{
	mes("[Terry]\n Não costumo beber muito, mas a atmosfera desse lugar é muito boa.\n É relaxante, assim como a música que colocam para tocar...");
	next;
	mes("[Terry]\n É, esse hotel é muito bom. Recomendo-o a todos os meus amigos turistas, na verdade.\n Agora por que você não senta aqui comigo?");
	close;
}

// ------------------------------------------------------------------
lhz_in02,265,273,6	script	Equipe do Laboratório#lhz	4_LGTSCIENCE,{
	mes("[Assam]\n Esse lugar é muito bom e também muito tranquilo.\n Eu gosto de vir aqui após o trabalho, tomar uma bebida e simplesmente conversar com o barman.");
	next;
	mes("[Assam]\n A bebida aqui é incrível e pode ser considerada uma das melhores do mundo.\n Eu não sei, mas por alguma razão o gosto dela me lembra trabalho em equipe.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,28,39,3	script	Helen#lhz	4_F_KID2,{
	mes("[Helen]\n Sabe, quando eu crescer, talvez eu trabalhe em um banco.\n Parece um emprego muito legal, você não acha?");
	close;
}

// ------------------------------------------------------------------
lhz_in02,31,33,3	script	Gracie#lhz	4_F_LGTGRAND,{
	mes("[Gracie]\n Ah, está tão confortável aqui.\n Mas por que estamos dentro do banco quando os serviços bancários nem estão funcionando?\n Estamos esperando, mas esperando confortavelmente.");
	next;
	mes("[Gracie]\n Na verdade, é tão confortável aqui, que acho que me recusarei a sair.\n Apesar de estar disposta a mudar de idéia se você achar outro lugar que seja ainda mais confortável.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,21,38,7	script	Funcionário do Banco#lhz	4_M_04,{
	mes("[Funcionário do Banco]\n Devido a alguns erros críticos do sistema, os serviços bancários estão temporariamente suspensos.\n Pedimos desculpas pela inconveniência e agradecemos a compreensão.");
	close;
}
lhz_in02,21,25,7	duplicate(Funcionário do Banco#lhz)	Funcionário do Banco#lhz2	4_M_04
lhz_in02,34,22,1	duplicate(Funcionário do Banco#lhz)	Funcionário do Banco#lhz3	4_M_SAGE_C

// ------------------------------------------------------------------
lhz_in02,145,177,0	script	Togii#lhz	4_M_DIEMAN,{
	mes("[Togii]\n Aah sim...\n Já me sinto diferente.\n O uísque de Morroc é o melhor!\n ^333333*Soluço*^000000\n Nossa, essa coisa funciona muito rápido!\n Heh heh.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,157,201,6	script	Hinkley#lhz	4_M_LGTPOOR,{
	mes("[Hinkley]\n Meh heh heh...\n ^333333*Soluço*^000000\n Acredite ou não, eu estou...\n Andando... no Ar...\n Nunca achei que pudesse s-ser tão livree-ee-ee.");
	next;
	mes("^3355FFEsse cara está totalmente fora de si!^000000");
	close;
}

// ------------------------------------------------------------------
lhz_in02,289,277,3	script	Lutador Marcial#lhz	4_M_MONK,{
	mes("[Lutador de Artes Marciais]\n Droga...\n Vim ao lugar errado para procurar um desafio.\n Ninguém aqui é competitivo o bastante, nem bom o suficiente!");
	next;
	mes("[Lutador de Artes Marciais]\n A cidade inteira acha que pode comprar poder e segurança com dinheiro.\n Eles não sabem o valor de uma luta boa e amigável.\n Quem sabe eu encontre um rival por aqui...");
	close;
}

// ------------------------------------------------------------------
lhz_in02,267,25,4	script	Diana#lhz	4_F_ROGUE,{
	mes("[Diana]\n Nossa, aquela arma é fantástica!\n Mas com certeza também é cara. Hum...");
	next;
	mes("[Assistente da Loja]\n Madame, você está falando desse Stiletto?\n Você tem um ótimo olho para armas de qualidade.\n Posso perguntar da onde você é?");
	next;
	mes("[Diana]\n Ah, eu nasci e fui criada em Morroc.");
	next;
	mes("[Assistente da Loja]\n Ah sim, eu ouvi muitas coisas boas sobre essa cidade.\n Você certamente provou que as pessoas de Morroc têm um bom gosto.\n Agora, esse Stiletto custa 39 800 zenys...");
	next;
	emotion(e_omg);
	mes("[Diana]\n Hein...?!\n Isso é ridículo!\n Deixa pra lá, me mostre aquele Gladius que está no canto.");
	next;
	mes("[Assistente da Loja]\n O Gladius?\n Ah, ele custa 39.800 zenys, madame.");
	next;
	mes("[Diana]\n Ah, esse é um preço muito bom.\n Vou levar!");
	next;
	mes("[Assistente da Loja]\n É, essa réplica realmente parece com um Gladius de verdade não é?\n Apesar de não ser uma arma de verdade, é bem capaz de abrir qualquer envelope!");
	next;
	mes("[Diana]\n .........\n Pegue de volta.\n Essa loja é péssima.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,36,274,4	script	Escritório de eventos#lhz	4_F_ZONDAGIRL,{
	mes("[Saera]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " ao escritório temporário do Grupo de Eventos Incríveis.\n Posso ajudá-l" + (Sex == SEX_MALE ? "o" : "a") + "?");
	next;
	if (select("Escritório temporário?", "Não, obrigado.") == 1) {
		mes("[Saera]\n Nosso prédio original está em construção, portanto estamos baseando nossas operações aqui até ele ficar pronto.");
		close;
	}
	mes("[Saera]\n Obrigado.\n Tenha um dia muito agradável.");
	close;
}

// ------------------------------------------------------------------
lhz_in02,40,280,6	script	Planejador de Evento#lhz	4_M_ZONDAOYAJI,{
	mes("[Jellarin]\n Não gosto disso.\n Mas não gosto da outra ideia também.\n Que evento novo eu devia fazer?");
	next;
	mes("[Jellarin]\n Preciso de algo grande, algo que realmente abalaria o mundo, algo épico, mas o que?\n Ei, você tem alguma ideia?");
	close;
}

// ------------------------------------------------------------------
lhz_in03,26,167,5	script	Shayna#lhz	4_F_EINWOMAN,{
	mes("[Shayna]\n ^333333*Suspiro...*^000000\n Ah, minha pobre e querida menina...");
	close;
}

// ------------------------------------------------------------------
lhz_in03,193,25,2	script	Garçom#lhz2	1_M_PUBMASTER,{
	mes("[Tony]\n Ei eu sei que esse lugar é ruim, praticamente um gueto, mas nos orgulhamos de ter o melhor rum de toda Rune-Midgard.");
	next;
	mes("[Tony]\n Apenas um gole dessa linda bebida e você vai ao topo do mundo!\n Mas é melhor ainda para ajudar a relaxar e a esquecer os problemas.");
	next;
	mes("[Tony]\n Não sou muito um poeta, mas sei de uma coisa.\n Nosso rum tem o doce sabor da solidão.\n Você realmente devia experimentar quando puder.");
	close;
}

// ------------------------------------------------------------------
lhz_in03,192,93,3	script	Cidadã#lhz	4_F_LGTGIRL,{
	mes("[Lanko]\n Ah, estou sozinha aqui, trabalhando como garçonete para ajudar o meu pai.\n Esse trabalho é cansativo, mas é bom ver as pessoas relaxadas e se divertindo.");
	next;
	mes("[Lanko]\n Quando tiver um tempo de folga, vou explorar Lighthalzen e ver tudo que há para ver.\n Mas até agora não parece que temos poucos bêbados para eu poder sair...");
	close;
}

// ------------------------------------------------------------------
lhz_in03,189,87,5	script	Homem Bêbado#lhz	4_M_LGTMAN,{
	mes("[Enku]\n *Suspiro*\n Acabei de levar um fora.\n É, achei que íamos nos casar, mas parece que eu estava errado!\n Sheryline, eu amava você!");
	next;
	mes("[Enku]\n Eu normalmente não bebo, especialmente bebidas como gim e rum.\n Mas hoje essas coisas têm o sabor da minha tristeza, e são todo o conforto que eu preciso, entendeu?!");
	close;
}

// ------------------------------------------------------------------
lhz_in03,180,83,6	script	Cidadão#lhz2	4_M_04,{
	mes("[Mitchell]\n Sabe, somos todos diferentes, mas acho que nós humanos somos parecidos o suficiente para podermos nos comunicar de algum jeito.");
	next;
	mes("[Mitchell]\n Claro, uma pessoa rica tem problemas diferentes dos de uma pessoa pobre, mas o que quero dizer é, os dois têm problemas!\n Dor, prazer, tristeza e felicidade nos unem.");
	next;
	mes("[Mitchell]\n Então não seja chato para escolher seus amigos.\n Nós todos precisamos de alguém, não é?");
	close;
}

// ------------------------------------------------------------------
lhz_in03,184,38,3	script	Loudmouth#lhz	1_M_JOBTESTER,{
	mes("[Loudmouth]\n Sabe quem eu sou?!\n Olhe para a minha perna.\n Eu estive na guerra de Comodo!\n Perdi a minha perna para garantir a sua liberdade!");
	next;
	mes("[Loudmouth]\n E-ei! Por que está me olhando assim?!\n Você não acredita?!");
	close;
}

// ------------------------------------------------------------------
lhz_in03,130,41,5	script	Jay#lhz	4_M_KID1,{
	mes("[Jay]\n Minha mãe e meu pai sempre chegam tarde.\n Então eu janto sozinho.\n Totalmente.\n Todo dia.");
	next;
	mes("[Jay]\n A comida não fica tão boa quando você não tem companhia.\n Talvez eu seja um solitário.");
	close;
}

// ------------------------------------------------------------------
lhz_in03,124,117,1	script	Faxineira Brenda#lhz	1_F_MERCHANT_02,{
	mes("[Brenda]\n É melhor eu tomar muito cuidado com esse vaso.\n Vale dez milhões de zenys e se eu fosse-- Não. Não!\n Nem vou pensar nisso!");
	close;
}

// ------------------------------------------------------------------
lhz_in03,25,105,5	script	Gopal#lhz	4_M_LGTMAN,{
	mes("[Gopal]\n O vovô pode ficar feliz sentado e aproveitando a vida, mas eu não!\n Sou jovem demais para me deitar e ver os dias passarem!");
	next;
	mes("[Gopal]\n Quero fazer algo de mim mesmo.\n Talvez algum dia eu monte uma companhia como a Corporação Rekenber!");
	close;
}
