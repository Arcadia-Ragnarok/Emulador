/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest do Desaparecimento de Bruspetti                     |
| * Requer quest da Amizade                                         |
\*-----------------------------------------------------------------*/

ra_in01,235,194,5	script	Katinshuell#vice	4_M_RACHMAN1,{
	if (!rach_vice) {
		mes "[Katinshuell]";
		mes "Você é um aventureiro, então eu não acho que você entenderia o quão difícil é viver uma quieta, e tranquila vida.";
		mes "Quando você ja viveu certas coisas, é difícil.";
		next;
		mes "[Katinshuell]";
		mes "Eu não preciso de mais excitação na minha vida.";
		mes "Eu só quero viver quieto, longe de outras pessoas, e ser deixado totalmente sozinho para algum semblante de paz.";
		if (friendship > 10) {
			rach_vice = 1;
		}
		close;
	} else if (rach_vice == 1) {
		mes "[Katinshuell]";
		mes "Você é um aventureiro, então eu nao acho que você entenderia o quão difícil é viver uma quieta, e tranquila vida.";
		mes "Quando você ja viveu certas coisas, é difícil.";
		next;
		mes "[Katinshuell]";
		mes "Quando você está ocupado, você está distraido.";
		mes "Mas mesmo se eu estou sozinho, esses pensamentos nunca param de me atormentar...";
		close;
	} else if (rach_vice == 2) {
		mes "[Katinshuell]";
		mes "Você é um aventureiro, então eu nao acho que você entenderia o quão difícil é viver uma quieta, e tranquila vida.";
		mes "Quando você ja viveu certas coisas, é difícil.";
		next;
		mes "[Katinshuell]";
		mes "Quando você está ocupado, você está distraido.";
		mes "Mas mesmo se eu estou sozinho, esses pensamentos nunca param de me atormentar...";
		close;
	} else if (rach_vice == 3) {
		mes "[Katinshuell]";
		mes "Eh? Oh, é um de vocês garotos, aqueles aventureiros fazedores do bem.";
		mes "Vocês não devem ter mais nada pra fazer...";
		mes "Por outro lado, por que falar comigo?";
		next;
		mes "[Katinshuell]";
		mes "Geez... Eu sei que vocês andam por aí resolvendo problemas.";
		mes "Mas essa é uma coisa que vocês não podem fazer, eu e minha namorada somos história agora.";
		mes "Está acabado entre nós.";
		rach_vice = 4;
		changequest(8107,8108);
		close;
	} else if (rach_vice == 4) {
		mes "[Katinshuell]";
		mes "Ah... ";
		mes "Eu acabei de dizer que terminei com minha namorada.";
		mes "Você sabe, eu gostaria de ficar sozinho. Vá embora...";
		close;
	} else if (rach_vice == 10) {
		mes "[Katinshuell]";
		mes "Argh! Eu estou tão deprimido.";
		mes "Eu só quero ficar sozinho por um bom tempo.";
		mes "O que diabos você que saber, afinal?";
		next;
		input(.@input$);
		if (.@input$ == "Lighthalzen") {
			mes "[Katinshuell]";
			mes "Lighthalzen...?";
			mes "uma cidade na República de Schwaltzvalt.";
			mes "E, que é uma cidade difícil de se morar.";
			mes "É tudo que sei...";
			next;
		} else if (.@input$ == "Bruspetti") {
			mes "[Katinshuell]";
			mes "...Já tem um tempo desde que eu ouvi aquele nome Bruspetti...";
			mes "Ela é bonita popular pela cidade...";
			mes "Todo mundo gostava dela.";
			mes "Isso é tudo que queria saber?";
			next;
		} else if (.@input$ == "Nascente de Freya") {
			mes "[Katinshuell]";
			mes "Nascente de Freya...";
			mes "É apenas um parque onde pessoas velhas e casais meio que passam o tempo.";
			mes "Embora eu não goste de ir lá você não deveria também.";
			next;
		} else {
			mes "[Katinshuell]";
			mes "..."+.@input$+"?";
			mes "O que? Eu não te entendo...";
			close;
		}
		rach_vice = 11;
		changequest(8114,8115);
		mes "[Katinshuell]";
		mes "Você está feliz, agora?";
		mes "Pare de tentar se intrometer na minha vida pessoal, e apenas curta um pouco passear por essa pequena cidade.";
		mes "É isso que você veio fazer, certo?";
		close;
	} else if (rach_vice == 11) {
		mes "[Katinshuell]";
		mes "Você está feliz, agora?";
		mes "Pare de tentar se intrometer na minha vida pessoal, e apenas curta um pouco passear por essa pequena cidade.";
		mes "É isso que você veio fazer, certo?";
		close;
	} else if ((rach_vice == 15) && (countitem(Diary_Of_Blue))) {
		mes "[Katinshuell]";
		mes "Oh, é você de novo.";
		mes "O que você quer agora?";
		mes "Eu ja te falei que eu não estou de bom humor para falar com ninguém hoje.";
		mes "Eu ainda estou arcando com o meu término com minha namorada.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Katinshuell... eu tenho o presentimento que você está escondendo algo.";
		mes "De alguma forma, Bruspetti era sua namorada?";
		next;
		mes "[Katinshuell]";
		mes "Huh?! Er, O-o-o que?";
		mes "O que o faz pensar isso?";
		mes "Não é do seu interesse!";
		mes "Além disso, você não acha que uma garota como aquela é muito boa para alguém como eu?!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu relmente não tenho nenhuma razão para suspeitar nada de você";
		mes "Mas o meu sentimento e o jeito que você reagiu não estão garantindo muito.";
		mes "Bem, eu acho que eu posso pesquisar através desse livro...";
		next;
		mes "[Katinshuell]";
		mes "Hey! Hey Isso é...";
		mes "é o diário de Bruspetti!";
		mes "E-eu tenho procurado por-- um...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hey! Como você sabia";
		mes "sobre ele?!";
		mes "Conte-me a verdade!";
		mes "Na verdade, você sabe o que?";
		mes "Por que não buscamos pela verdade juntos?";
		mes "O que acha?";
		next;
		mes "^3355FFDe uma forma relaxada você atira o diário no pé de Katinshuell, e ele abre em uma das páginas do meio.^000000";
		next;
		mes "[Katinshuell]";
		mes "......!";
		delitem(Diary_Of_Blue,1);
		rach_vice = 16;
		changequest(8119,8120);
		close;
	} else if (rach_vice == 16) {
		mes "[Katinshuell]";
		mes "Ha ha ha...";
		mes "Isso é algum tipo de interrogação?";
		mes "E-eu não fiz nada errado!";
		mes "Vá em frente, me pergunte qualquer coisa!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Tudo bem então, por que você não explica isso?";
		next;
		switch (select("Casa do Sr. Shendar","Lighthalzen","Nascente de Freya","Bruspetti")) {
			case 1:
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Sr. Shendar, o pai de Bruspetti, diz que alguém entrou em sua casa por alguma razão.";
			mes "Agora, por que você faria isso?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Você reconheceu o diário de Bruspetti vem rápido...";
			mes "E você realmente mencionou que estava procurando por isso.";
			next;
			mes "[Katinshuell]";
			mes "Hmpf! P-pare de falar coisas doidas!";
			mes "Eu não sei sobre o que você está falando!";
			close;
			case 2:
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Você sabe, eu descobri que Bruspetti estava planejando ir para Lighthalzen.";
			mes "Parece que ela queria saber algo realmente importante por lá...";
			next;
			mes "[Katinshuell]";
			mes "Não...!";
			mes "Ela não poderia...!";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Tudo bem.";
			mes "Não há necessidade de fingir que você não a conhece.";
			mes "Você era seu namorado, não era?";
			mes "O que ela estaria tentando encontrar em Lighthalzen?";
			next;
			mes "[Katinshuell]";
			mes "Não! não não não!";
			mes "Cale-se! Cale-se!";
			mes "Por favor!";
			mes "Somente me deixe sozinho!";
			mes "Vá embora agora mesmo!";
			next;
			switch (select("Casa do Sr. Shendar","Nascente de Freya","Separação Recente")) {
				case 1:
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Então enquanto ela estava fora em Lighthalzen, você entrou na cada do Sr. Shendar e--";
				next;
				mes "[Katinshuell]";
				mes "S-sim! Sim, está certo!";
				mes "É porque eu estava tão preocupado com ela!";
				mes "Eu não tinha idéia de que ela percorreu todo o caminho para Lighthalzen!";
				mes "Ha ha! Ha ha!";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "...............................";
				mes "^333333Nossa! Eu acho que saiu pela culatra, então eu vou ter que tentar novamente.^000000";
				close;
				case 2:
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Então, enquanto ela estava fora em Lighthalzen, você foi para Nascente de Freya, sozinho, não foi?!";
				next;
				mes "[Katinshuell]";
				mes "......";
				mes ".........";
				mes "Um? ...Sim.";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "...............................";
				mes "^333333Nossa! Eu acho que saiu pela culatra, então terei que tentar isso novamente.^000000";
				close;
				case 3:
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Espere um segundo!";
				mes "O seu término e a repentina necessidade de Bruspetti investigar algo em Lighthalzen...";
				mes "Estão relacionadas de alguma forma, não estão?";
				next;
				mes "[Katinshuell]";
				mes "......";
				mes ".........";
				mes "Não, não é verdade!";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				next;
				switch (select("Casa do Sr. Shendar","Nascente de Freya")) {
					case 1:
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Então enquanto ela estava fora em Lighthalzen, você entrou na casa do Sr. Shendar e--";
					next;
					mes "[Katinshuell]";
					mes "S-sim! Sim, está certo!";
					mes "É porque eu estava muito preocupado com ela!";
					mes "Eu não tinha idéia que ela tinha viajado para Lighthalzen!";
					mes "Ha ha! Ha ha!";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "...............................";
					mes "^333333Nossa! Eu acho que saiu pela culatra, então terei que tentar isso novamente.^000000";
					close;
					case 2:
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Hmm... Por que você está sempre passando um tempo sozinho na Nascente de Freya?";
					mes "E por que Bruspetti ainda não voltou pra casa?";
					next;
					mes "[Katinshuell]";
					mes "...você irá parar de falar coisas sem sentido?";
					mes "Qual é a sua evidencia para me condenar pelo crime?";
					mes "Não quero mais ouvir falar de você.";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Mesmo depois de você ter matado Bruspetti,";
					mes "você fica preocupado com outra possibilidade.";
					mes "Então você está conspirando para se livrar dessa possibilidade,também.";
					next;
					rach_vice = 17;
					mes "[Katinshuell]";
					mes "Não! Pare! Pare!";
					mes "Você está dizendo que eu a matei?!";
					mes "Eu não a matei!";
					mes "Pare com essa loucura antes que eu fique realmente bravo!";
					close;
				}
			}
			case 3:
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Nascente de Freya.";
			mes "Por que você está sempre passando um tempo por ali sozinho, é?";
			next;
			mes "[Katinshuell]";
			mes "...............................";
			mes "É porque eu realmente sinto falta da minha ex-namorada.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Oh. Certo.";
			mes "É uma ótima razão.";
			close;
			case 4:
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Se Bruspetti não é mais sua namorada, então...";
			mes "Quem é?!";
			mes "Responda!";
			next;
			mes "[Katinshuell]";
			mes "...............................";
			mes "Certo, certo. Você venceu.";
			mes "Ela era minha ex-namorada.";
			mes "Eu apenas não gosto de falar sobre Bruspetti, É isso.";
			mes "Agora você pode me deixar sozinho?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "^333333Nossa! Ele não devia ceder assim!";
			mes "Eu preciso perguntar novamente pra ele até que meu sentimento esteja satisfeito!^000000";
			close;
		}
	} else if (rach_vice == 17) {
		mes "[Katinshuell]";
		mes "Droga! Eu não quero mais pensar sobre ela!";
		mes "Vá embora de mim, e leve o diário de Bruspetti com você!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que?! De jeito nenhum, não depois que aquela pequena explorão sobre matar ou não matar Bruspetti!";
		mes "Bem, se você não vai falar, então eu vou revirar esse diário em busca de respostas.";
		rach_vice = 18;
		close;
	} else if (rach_vice == 18) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Oh, essa entrada parece interessante, é tudo sobre você, Katinshuell.";
		next;
		mes "- Data: OOXX -";
		mes "Eu estou tão apaixonada por ele, mas ele sempre muda o assunto toda vez que eu pergunto coisas pessoais sobre seu passado.";
		mes "Poderia ser que ele esteja escondendo algo de mim?";
		next;
		mes "- Data: OOXX -";
		mes "É uma outra mulher?";
		mes "Não posso evitar de sentir ciúmes!";
		mes "Eu preciso saber.";
		mes "Por isso eu decidi ir a Lighthalzen e ver o que posso descobrir.";
		next;
		mes "- Data: OOXO -";
		mes "Querido diário,";
		mes "Hoje eu descobri a horrível verdade...";
		mes "Eu preciso faze-lo confessar isso à mim.";
		mes "Eu espero que a gente ainda possa ficar junto depois de tudo isso...";
		next;
		mes "- Data: OOXO -";
		mes "Mas eu não sei se eu posso viver com isso!";
		mes "O homem que eu amo...";
		mes "É difícil pensar que ele usou uma faca p-para...";
		mes "Eu só quero vomitar.";
		next;
		mes "- Data: OOXO -";
		mes "Eu estou planejando encontrá-lo amanha na Nascente de Freya.";
		mes "Não posso evitar de olhá-lo diferentemente agora, mas ainda...";
		mes "Ele é o homem que eu amo verdadeiramente.";
		next;
		mes "- Data: OOXO -";
		mes "Eu espero que eu tenha boas notícias da proxíma vez que eu escrever nesse diário...";
		mes "Bem, aqui há esperança.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, aquela foi a última página...";
		mes "O que aconteceu quando Bruspetti confrontrou você na Nascente de Freya?";
		rach_vice = 19;
		next;
		mes "[Katinshuell]";
		mes ".........";
		mes "I... I...";
		mes ".........";
		close;
	} else if (rach_vice == 19) {
		mes "[Katinshuell]";
		mes "Eu...";
		mes "Eu não mereço isso!";
		mes "Porque você continua me rondando com essas perguntas?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Algo... algo aconteceu quando Bruspetti confrontou você na Nascente de Freya?";
		mes "O que ela exatamente aprendeu sobre você em Lighthalzen?";
		next;
		mes "[Katinshuell]";
		mes "Eu... Eu não tenho que te dizer nada!";
		rach_vice = 20;
		changequest(8120,8121);
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^333333Ele ainda está me evitando...";
		mes "Como eu posso faze-lo revelar a verdade?^000000";
		close;
	} else if ((rach_vice == 20) && (countitem(Knife))) {
		mes "[Katinshuell]";
		mes "Eu...";
		mes "Eu não mereço isso!";
		mes "Porque você continua me rondando com essas perguntas?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Algo... algo aconteceu quando Bruspetti confrontou você na Nascente de Freya?";
		mes "O que ela exatamente aprendeu sobre você em Lighthalzen?";
		next;
		mes "[Katinshuell]";
		mes "Eu... Eu não tenho que te dizer nada!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Como você pode dizer isso?";
		mes "Eu só li no diário da Bruspetti que ela descobriu algo horrível sobre você";
		mes "E isso envolve uma faca... exatamente como isso.";
		next;
		mes "[Katinshuell]";
		mes ".........!";
		mes ".............";
		mes "NNããoooo!";
		mes "Me desculpa, é só minha culpa!";
		mes "Eu estava desesperado!";
		mes "Você não entende como eu costumava viver, você n-não--!";
		rach_vice = 21;
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Huh...?";
		mes "Sr. Katinshuell?";
		close;
	} else if ((rach_vice == 21) && (countitem(Knife))) {
		mes "[Katinshuell]";
		mes "Por favor...";
		mes "Por favor apenas deixe-me sozinho.";
		mes "Eu perdi a mulher que eu amo por causa de algo estúpido que fiz no passado.";
		mes "Se você quiser me prender, vá em frente...";
		delitem Knife,1;
		rach_vice = 22;
		changequest(8121,8122);
		close;
	} else if (rach_vice == 21) {
		mes "[Katinshuell]";
		mes "Suponho que seja meu destino carregar esta culpa.";
		mes "Está realmente destruida minha possibilidade de ser verdadeiramente feliz.";
		mes "Bruspetti...";
		close;
	} else if (rach_vice > 21) {
		mes "[Katinshuell]";
		mes "Se pelo menos eu tivesse me entregado.....";
		mes "Se eu fizesse tentado pagar por meu crime, talvez eu e Bruspetti tivéssemos uma chance...";
		close;
	} else {
		mes "[Katinshuell]";
		mes "Você acredita em karma?";
		mes "Eu acredito... Não importa o que você";
		mes "faça, mesmo que você não seja";
		mes "pego, de alguma forma sempre";
		mes "recai sobre você.";
		next;
		mes "[Katinshuell]";
		mes "Você já se sentiu";
		mes "culpado sobre algo,";
		mes "mas escondeu isso da verdade?";
		mes "Deixe me dizer que deve ser uma";
		mes "experiência dolorosa. É";
		mes "melhor você confessar enquanto pode.";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,250,19,3	script	Sr. Shendar#vice	4_M_MIDDLE,{
	if (rach_vice == 1) {
		mes "[Sr. Shendar]";
		mes "Simplesmente achei que minha preciosa filha estava saindo com alguém.";
		mes "Ela foi para alguma outra cidade com o menino, e eu não não ouvi uma palavra dela desde que aconteceu";
		next;
		mes "[Sr. Shendar]";
		mes "Ouça o que eu digo: nunca tenha uma filha!";
		mes "Você se preucupa demais sobre eles , e eles abandonam seus pais uma vez quando crescem!";
		mes "Aposto que ela está se divertindo...";
		next;
		mes "[Sr. Shendar]";
		mes "Provavelmente em uma amável viagem com quem quer que seja aquele garoto.";
		mes "Ela havia saido durante um tempo longo e horrível, mas agora ela é também adulta eu...";
		mes "Eu axo que ela deve estar muito bem";
		rach_vice = 2;
		setquest(8106);
		close;
	} else if (rach_vice == 2) {
		mes "[Sr. Shendar]";
		mes "Ouça o que eu digo: Nunca tenha uma filha!";
		mes "Você se preucupa demais sobre eles, e eles abandonam seus pais uma vez quando crescem!";
		mes "Aposto que ela está se divertindo...";
		next;
		mes "[Sr. Shendar]";
		mes "Me cofundi...!";
		mes "Quem quer que seja aquele sujeito é melhor que não tente nenhuma gracinha!";
		mes "Como o pai dela, eu tenho o direito legal de torcer o pequeno pescoço dela!";
		mes "Pelo menos deveria...";
		close;
	} else if ((rach_vice == 4) || (rach_vice == 5)) {
		mes "[Sr. Shendar]";
		mes "Eu sinto falta da minha filha.";
		mes "Sim, a casa cheira diferente sem ela por perto.";
		mes "É um pouco estranho estar falando sobre isso, mas Bruspetti sempre cheirou bem, exatamente como sua mãe.";
		next;
		mes "[Sr. Shendar]";
		mes "Mesmo que elas não usassem perfume.";
		mes "Elas tinha esse agradável e distinto aroma sobre elas.";
		mes "Eu acho que pode ser hormonal?";
		rach_vice = 5;
		changequest(8108,8109);
		close;
	} else if (rach_vice == 8) {
		mes "[Sr. Shendar]";
		mes "O que? Minha filha foi para Lighthalzen?";
		mes "Ela não conhece ninguém la.";
		mes "Hmm, talvez aquele seja o lugar onde ela esteja planejando ir para conhecer mais sobre o que a estava incomodando.";
		next;
		mes "[Sr. Shendar]";
		mes "Sim, ela era muito genérica:";
		mes "''Pai, eu preciso ir para um lugar.''";
		mes "e ''Há algo que eu preciso ter certeza.''";
		mes "Deixando de fora todos os detalhes não deixa um idolatrado pai facilmente!";
		next;
		mes "[Sr. Shendar]";
		mes "Bem, Obrigado por me deixar saber onde ela possa estar.";
		mes "agora, quisera eu saber o que ela estava planejando fazer.";
		mes "Talvez ela escreveu algo sobre isso no seu diário?";
		mes "Sim, talvez...";
		next;
		mes "[Sr. Shendar]";
		mes "Não, eu não posso fazer isso!";
		mes "Como um amado pai, não posso me permitir invadir a preciosa privacidade da minha filha.";
		mes "Mesmo que ela tenha deixado descuidadosamente seu diário no topo da gaveta.";
		next;
		mes "[Sr. Shendar]";
		mes "Oh, mas como um pai se preocupa.";
		mes "Estará minha doce, querida Bruspetti bem?";
		rach_vice = 9;
		changequest(8112,8113);
		close;
	} else if (rach_vice == 9) {
		mes "[Sr. Shendar]";
		mes "Maldição!";
		mes "Eu nunca deveria ter mencionado o diário da minha filha para um aventureiro como você!";
		mes "Pessoas como você são naturalmente curiosas...!";
		close;
	} else if (rach_vice == 13) {
		mes "[Sr. Shendar]";
		mes "Hey! Hey! Você é o pervertido que está entrando em minha casa para caçar minha filha?!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O qu--?";
		mes "Não, Eu sou apenas um--";
		next;
		percentheal(-50,0);
		mes "^3355FF*BAM!*^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ow! Para que";
		mes "você fez aquilo?";
		next;
		mes "[Sr. Shendar]";
		mes "Ainda vivo, é? Hmpf!";
		mes "Eu vou acabar com você! Eu vou...";
		mes "Er, huh?!";
		mes "Calma, eu acho que eu te conheço.";
		mes "Você é aquele aventureiro que esteve aqui antes, certo?";
		next;
		mes "[Sr. Shendar]";
		mes "Oh... Eu acho que eu cometi um erro.";
		mes "Eu pensei que você fosse aquela pessoa que está rondando a minha casa.";
		mes "Eu não sei quem ele é, mas tenho certeza que não é você...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espere, espere...";
		mes "Então alguem tem rondado por aqui?";
		mes "É estranho.";
		mes "Espere, aquele cara, aquele que pode ser o namorado de Bruspetti...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Certo, seu nome era Katinshuell.";
		mes "Aquele cara tem agido de forma realmente engraçada.";
		mes "Talvez seja ele que está rondando por aqui?";
		mes "É melhor eu ir e perguntar a ele sobre isso...";
		next;
		mes "[Sr. Shendar]";
		mes "Espere, onde você está indo?";
		mes "Eu... me desculpe por ter te acertado?";
		next;
		mes "[Sr. Shendar]";
		mes "Maldições!";
		mes "Se aquele cara é o namorado da minha filha";
		mes "Ele está invadindo minha casa, então ele pode ser realmente perigoso.";
		mes "É muito ruim que eu não possa perguntar a Bruspetti algo sobre ele...";
		next;
		mes "[Sr. Shendar]";
		mes "Hm... Tudo certo, aventureiro.";
		mes "Se você puder encontrar, isso permitirá que você leve e leia o diário da minha filha.";
		mes "Nós precisamos conhecer mais sobre esse cara Katinshuell.";
		mes "Se ele é perigoso...";
		next;
		mes "[Sr. Shendar]";
		mes "Me desculpe...";
		mes "Eu estou pedindo alguma ajuda...";
		mes "Mas não há nada mais que eu possa fazer como seu pai.";
		mes "Além disso, aventureiros como você podem oferecer aquela melhor proteção...";
		rach_vice = 14;
		changequest(8117,8118);
		close;
	} else if (rach_vice == 14) {
		mes "[Sr. Shendar]";
		mes "Então você tem uma alguma idéia de quem está entrando em minha casa?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, eu suspeito desse cara chamado Katinshuell.";
		mes "Porque ele pode ter sido os namorado de Bruspetti e ele tem agido de forma engraçada.";
		mes "Ainda, não tenho nenhuma real evidência sobre isso.";
		next;
		mes "[Sr. Shendar]";
		mes "O namorado de Bruspetti?!";
		mes "Hmpf!";
		mes "Eu não gosto daquele garoto.";
		mes "Eu não o encontrei ainda, mas é meu solene dever como pai odiar e desacreditar nele!";
		close;
	} else if (rach_vice > 21) {
		mes "[Sr. Shendar]";
		mes "Quando minha preciosa filha Bruspetti estará de volta pra casa?";
		mes "Eu tenho certeza que ela pode tomar conta de si mesma.";
		mes "Mas um pai não pode evitar de se preocupar com a morte.";
		next;
		mes "[Sr. Shendar]";
		mes "Ah, se você por acaso ver minha filha nas viagens.";
		mes "Por favor diga a ela que seu pai está esperando que ela volte pra casa.";
		mes "Obrigado, aventureiro.";
		close;
	} else {
		mes "[Sr. Shendar]";
		mes "Eu simplesmente acho que minha preciosa filha esteve saindo com alguém.";
		mes "Ela saiu para alguma outra cidade para ver esse garoto, e eu não não ouvi uma só palavra desde aquilo";
		next;
		mes "[Sr. Shendar]";
		mes "Ouça oque eu digo: Nunca tenha uma filha!";
		mes "Você se preucupa demais sobre elas, e elas abandonam seus pais uma vez quando crescem!";
		mes "Aposto que ela está se divertindo...";
		close;
	}
}

// ------------------------------------------------------------------
rachel,73,244,3	script	Lachellen#vice	4_F_SHABBY,{
	if ((rach_vice == 2) || (rach_vice == 3)) {
		mes "[Lachellen]";
		mes "Ooh, estou com inveja de Bruspetti!";
		mes "Ela esteve passando muito tempo com seu novo namorado recentemente...";
		mes "Mas ela ainda recusa me contar qual o nome dele.";
		next;
		mes "[Lachellen]";
		mes "Ela me disse que ela que esta preucupada com ele, mas também admitiu que não sabe muito a respeito dele";
		mes "Deixe-me ver...";
		mes "Ele cresceu em Lighthalzen?";
		mes "Isso é tudo que ela sabe.";
		if (rach_vice == 2) {
			rach_vice = 3;
			changequest(8106,8107);
		}
		close;
	} else if (rach_vice == 6) {
		mes "[Lachellen]";
		mes "Oh, o pai de Bruspetti estava falando sobre como ela cheirava bem!";
		mes "Ela é tão quanto famosa por aqui, então ele não é tão arrepiante ou nada.";
		next;
		mes "[Lachellen]";
		mes "Eu vejo, então você pensa que você poderia achar seu cheiro em outra cidade,";
		mes "É, eu ouvi que ela saiu viajando para ver se ela poderia aprender algo, e ela não retornou ainda.";
		next;
		mes "[Lachellen]";
		mes "Ou você sabe o que?";
		mes "Se ela está em Lighthalzen ela deve ter ido lá.";
		mes "Para aprender mais sobre seu namorado Bruspetti mencionou algo sobre isso quando eu a vi pela última vez .";
		next;
		mes "[Lachellen]";
		mes "Eu não sei nada mais.";
		mes "Hmm, talvez se você for ao lugar onde ela e seu namorado sempre iam em seus encontros.";
		mes "Você provavelmente seria capaz de achar algo.";
		rach_vice = 7;
		changequest(8110,8111);
		close;
	} else if (rach_vice == 7) {
		mes "[Lachellen]";
		mes "Vamos ver...";
		mes "Bruspetti e seu garoto iriam se encontra em...";
		mes "Eu sei onde é, mas eu não posso te dar uma boa direção para ira lá.";
		mes "Er, desculpa!";
		next;
		mes "[Lachellen]";
		mes "Felizmente essa cidade não é tão grande.";
		mes "Então eu estou certa eu vou achar algo se você simplesmente continuar procurando.";
		mes "Oh, e se você acha-la, diga a ela que eu mandei um 'oi',okay?";
		close;
	} else if (rach_vice == 11) {
		mes "[Lachellen]";
		mes "Oh, olá denovom há algum jeito que eu possa ajudar você agora?";
		mes "Eu sei que você está procurando por Bruspetti então irei ajuda-lo a ter qualquer pergunta de mim ";
		next;
		input(.@input$);
		if (.@input$ == "Lighthalzen") {
			mes "[Lachellen]";
			mes "Lighthalzen?";
			mes "Oh, isso é certo!";
			mes "Bruspetti me perguntou sobre Lighthalzen uma vez.";
			mes "Sim, ela parecia realmente interessada em aprender mais sobre aquele lugar recentemente";
			next;
		} else if (.@input$ == "Nascente de Freya") {
			mes "[Lachellen]";
			mes "Nascente de Freya?";
			mes "Oh, eu gosto daquele lugar!";
			mes "Falando sobre isso, eu sei alguém chamado Katinshuell que apareceu aqui a muito tempo.";
			mes "Normalmente homens não vão sozinhos ...";
			next;
			mes "[Lachellen]";
			mes "espere ,esse é o lugar que te contei sobre, onde Bruspetti e seu namorado se encontravam.";
			mes "Você pensa que ela e Katinshuell...?";
			mes "Ooh, talvez eu imaginei isso!";
			next;
			mes "[Lachellen]";
			mes "Mas sim , aquele lugar é sempre cheio de casais.";
			mes "Então você parece como um verdadeiro perdedor se você for lá sozinho.";
			mes "Por isso que eu quero um namorado agora...";
			rach_vice = 12;
			changequest(8115,8116);
			next;
		} else {
			mes "[Lachellen]";
			mes "Oh, me desculpe...";
			mes "Eu não sei nada sobre"+.@input$+".";
			close;
		}
		mes "[Lachellen]";
		mes "Hmm, eu não sei se você descobriu algo importante falamdp comigo.";
		mes "Mas espero ter ajudado, mesmo que seja só um pouco.";
		close;
	} else if (rach_vice == 12) {
		mes "[Lachellen]";
		mes "Hmm, eu não sei se você descobriu algo importante falamdp comigo.";
		mes "Mas espero ter ajudado, mesmo que seja só um pouco.";
		close;
	} else if (rach_vice > 21) {
		mes "[Lachellen]";
		mes "Se por acaso você veja Bruspetti, diga que para vir falar comigo.";
		mes "Eu preciso saber oque eu achava como seu namorado é!";
		mes "Não posso esperar para vela";
		close;
	} else {
		mes "[Lachellen]";
		mes "Minha amiga Bruspetti";
		mes "é realmente uma menina legal";
		mes "Todos amam ela, e ";
		mes "ela é tão bonita.Todos";
		mes "os garotos tinham inveja sobre";
		mes "seu novo namorado!";
		next;
		mes "[Lachellen]";
		mes "Ainda ,ela é realmente";
		mes "timida,e não me contara";
		mes "quem ele é .Tem muita coisa";
		mes "que não sabemos sobre ele,mas";
		mes "Estou certo que eles estão felizes juntos.";
		close;
	}
}

// ------------------------------------------------------------------
lhz_in02,213,207,0	script	#vicetrace	HIDDEN_NPC,4,4,{
	OnTouch:
	if (rach_vice == 5) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Isse...";
		mes "Isse cheiro...";
		mes "É um cheiro tão bom!";
		mes "Como pétalas de rosa levadas por uma brisa leve...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espere, pode isso ser o aroma que o pai de Bruspetti falou antes?";
		rach_vice = 6;
		changequest(8109,8110);
		close;
	}
	end;
}

// ------------------------------------------------------------------
rachel,265,47,0	script	#vicetrace2	HIDDEN_NPC,2,2,{
	if (rach_vice == 7) {
		mes "[???]";
		mes "Ei, tenha cuidado";
		mes "Você não deve se aproximar tanto da água.";
		mes "E se você escorregar e cair?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Huh?";
		next;
		mes "[Grandma]";
		mes "Oh, me desculpe se te preucupei, mas o o chão que você esta parado sobre é muito escorregadio, sabe...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ah, estou vendo.";
		rach_vice = 8;
		changequest(8111,8112);
		close;
	} else if (rach_vice == 8) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Aquela velha senhora me disse para ter cuidado para não escorregar e cair na água nesse local, então é melhor andar com cuidado.";
		close;
	} else if (rach_vice == 22) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Este deve ser onde Bruspetti se afogou...";
		next;
		mes "[Vovó]";
		mes "Oh! Desculpe-me, jovem aventureiro, mas não deve ficar ai!";
		mes "É muito escorregadio.";
		mes "E se você cair na nascente?";
		mes "É perigoso!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Oh... Er, obrigado.";
		mes "Sim, eu não queria me ver afogando";
		next;
		rach_vice = 23;
		mes "[Vovó]";
		mes "Afogando...? Eu só não queria que você molhasse sua roupa.";
		mes "A aguá não é assim tão profunda...";
		mes "Mesmo se não souber nadar, você pode sair dai, você sabe";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "...O que?";
		close;
	} else if (rach_vice == 23) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Olhando essa nascente me faz pensar em Bruspetti.";
		mes "O que aconteceu com ela?";
		mes "Eu consigo sentir que ela se cavou em desespero";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "A água não é tão gelada, ou profunda e Katinshuell mencionou que seu corpo foi puxado pela perna...";
		mes "Mas ela continuou olhando para ele.";
		mes "Isso está assombrando...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu suponho ela estava rasgada...";
		mes "Ela amava-o, mas não podia suportar viver com o segredo dele.";
		mes "No final, isso tudo foi muito tragico.";
		mes "Katinshuell não era uma pessoa má...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ele foi forçado a cometer crimes hediondos, e continuou cometendo erros, correndo de sua culpa.";
		mes "Ninguém é responsável por isso?";
		mes "Quem o culparia?";
		next;
		rach_vice = 24;
		completequest(8122);
		if (BaseLevel > 90) { getexp(130000,0); }
		else if (BaseLevel > 75) { getexp(85000,0); }
		else { getexp(45000,0); }
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "De alguma forma, gostaria que Katinshuell tivesse a força de encarar sua culpa e também para perdoar a si mesmo.";
		close;
	}
	end;
}

// ------------------------------------------------------------------
ra_in01,255,25,0	script	Diário#vice	HIDDEN_NPC,{
	if ((rach_vice == 9) || (rach_vice == 10)) {
		mes "^3355FFTEste deve ser o diário de Bruspetti!";
		mes "Mas... ler o seu conteúdo faria com que você se sentisse muito mal.";
		mes "Então é melhor não tocá-lo.^000000";
		if (rach_vice == 9) {
			rach_vice = 10;
			changequest(8113,8114);
			close;
		}
	} else if (rach_vice == 14) {
		rach_vice = 15;
		changequest(8118,8119);
		getitem(Diary_Of_Blue,1);
		mes "^3355FFEste deve ser o diário de Bruspetti!";
		mes "Você agora tem permissão para levá-lo consigo e tentar descobrir se ela e Katinshuell têm alguma conexão...^000000";
		close;
	} else if (rach_vice >= 15) {
		mes "^3355ffEste é o local onde você encontrou o diário de Bruspetti.";
		mes "Talvez você devesse pegar para você na próxima vez converse com Katinshuell.^000000";
		close;
	} else {
		mes "^3355FFTEste deve ser o diário de uma Garota!";
		mes "Mas... ler o seu conteúdo faria com que você se sentisse muito mal.";
		mes "Então é melhor não tocá-lo.^000000";
		close;
	}
}

// ------------------------------------------------------------------
rachel,266,35,3	script	Vovó#vice	4_F_RACHOLD,{
	if (rach_vice == 12) {
		mes "[Vovó]";
		mes "Oh,voltou denovo, eh?";
		mes "Eu acho que você deve realmente gostar de vir a este lugar também.";
		mes "Hm,isso lembra me ...";
		next;
		mes "[Vovó]";
		mes "Veja a primavera está chegando?";
		mes "O mesmo jovem homem frequentemente vem nesse lugar.";
		mes "E olha fixamente a água, somente pingando com tristezas.";
		mes "Alguém tão jovem não deveria estar se sentindo assim.";
		next;
		mes "[Vovó]";
		mes "Você deve vir aqui para relaxar e curtir a beleza a sua volta, não em pensar em seus pesares.";
		mes "Eu penso que aquele garoto não concorda comigo nisso.";
		next;
		mes "[Vovó]";
		mes "Você deve ser capaz de seguir em frente seja o que estiver te chateando, e simplesmente apreciar a vida como ela é agora";
		rach_vice = 13;
		changequest(8116,8117);
		close;
	} else if (rach_vice == 13) {
		mes "[Vovó]";
		mes "Quando você tiver minha idade, você aprecia a vida mais e pode deixar seus arrependimento mais facilmente.";
		mes "Eu deperdicei minha juventude em muitas preucupações quando poderia ter relaxado.";
		close;
	} else if (rach_vice > 21) {
		mes "[Vovó]";
		mes "Quando você tiver minha idade.";
		mes "Você irá guardar com carinho todas suas memorias, mesmo que a experiência tenha sido dolorosa quando aconteceu";
		next;
		mes "[Vovó]";
		mes "Suas memorias são partes do que você é e do que o faz.";
		mes "Eu posso apreciar vivendo a vida que tenho, mesmo se ela não for particularmente especial.";
		close;
	} else {
		mes "[Vovó]";
		mes "Eu adoro esse lugar,";
		mes "é um lindo cenário";
		mes "com uma serena atmosfera.";
		mes "É uma paz dos deuses.";
		next;
		mes "[Vovó]";
		mes "Isso deixa meu coração aproveitar ver";
		mes "jovens casais podendo vir";
		mes "aqui e relaxando juntos.";
		mes "Não é o amor uma coisa grande?";
		close;
	}
}
