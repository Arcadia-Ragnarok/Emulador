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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest do Desaparecimento de Bruspetti                     |
| * Requer quest da Amizade                                         |
\*-----------------------------------------------------------------*/

ra_in01,235,194,5	script	Katinshuell#vice	4_M_RACHMAN1,{
	if (!rach_vice) {
		mes "[Katinshuell]";
		mes "Voc� � um aventureiro, ent�o eu n�o acho que voc� entenderia o qu�o dif�cil � viver uma quieta, e tranquila vida.";
		mes "Quando voc� ja viveu certas coisas, � dif�cil.";
		next;
		mes "[Katinshuell]";
		mes "Eu n�o preciso de mais excita��o na minha vida.";
		mes "Eu s� quero viver quieto, longe de outras pessoas, e ser deixado totalmente sozinho para algum semblante de paz.";
		if (friendship > 10) {
			rach_vice = 1;
		}
		close;
	} else if (rach_vice == 1) {
		mes "[Katinshuell]";
		mes "Voc� � um aventureiro, ent�o eu nao acho que voc� entenderia o qu�o dif�cil � viver uma quieta, e tranquila vida.";
		mes "Quando voc� ja viveu certas coisas, � dif�cil.";
		next;
		mes "[Katinshuell]";
		mes "Quando voc� est� ocupado, voc� est� distraido.";
		mes "Mas mesmo se eu estou sozinho, esses pensamentos nunca param de me atormentar...";
		close;
	} else if (rach_vice == 2) {
		mes "[Katinshuell]";
		mes "Voc� � um aventureiro, ent�o eu nao acho que voc� entenderia o qu�o dif�cil � viver uma quieta, e tranquila vida.";
		mes "Quando voc� ja viveu certas coisas, � dif�cil.";
		next;
		mes "[Katinshuell]";
		mes "Quando voc� est� ocupado, voc� est� distraido.";
		mes "Mas mesmo se eu estou sozinho, esses pensamentos nunca param de me atormentar...";
		close;
	} else if (rach_vice == 3) {
		mes "[Katinshuell]";
		mes "Eh? Oh, � um de voc�s garotos, aqueles aventureiros fazedores do bem.";
		mes "Voc�s n�o devem ter mais nada pra fazer...";
		mes "Por outro lado, por que falar comigo?";
		next;
		mes "[Katinshuell]";
		mes "Geez... Eu sei que voc�s andam por a� resolvendo problemas.";
		mes "Mas essa � uma coisa que voc�s n�o podem fazer, eu e minha namorada somos hist�ria agora.";
		mes "Est� acabado entre n�s.";
		rach_vice = 4;
		changequest(8107,8108);
		close;
	} else if (rach_vice == 4) {
		mes "[Katinshuell]";
		mes "Ah... ";
		mes "Eu acabei de dizer que terminei com minha namorada.";
		mes "Voc� sabe, eu gostaria de ficar sozinho. V� embora...";
		close;
	} else if (rach_vice == 10) {
		mes "[Katinshuell]";
		mes "Argh! Eu estou t�o deprimido.";
		mes "Eu s� quero ficar sozinho por um bom tempo.";
		mes "O que diabos voc� que saber, afinal?";
		next;
		input(.@input$);
		if (.@input$ == "Lighthalzen") {
			mes "[Katinshuell]";
			mes "Lighthalzen...?";
			mes "uma cidade na Rep�blica de Schwaltzvalt.";
			mes "E, que � uma cidade dif�cil de se morar.";
			mes "� tudo que sei...";
			next;
		} else if (.@input$ == "Bruspetti") {
			mes "[Katinshuell]";
			mes "...J� tem um tempo desde que eu ouvi aquele nome Bruspetti...";
			mes "Ela � bonita popular pela cidade...";
			mes "Todo mundo gostava dela.";
			mes "Isso � tudo que queria saber?";
			next;
		} else if (.@input$ == "Nascente de Freya") {
			mes "[Katinshuell]";
			mes "Nascente de Freya...";
			mes "� apenas um parque onde pessoas velhas e casais meio que passam o tempo.";
			mes "Embora eu n�o goste de ir l� voc� n�o deveria tamb�m.";
			next;
		} else {
			mes "[Katinshuell]";
			mes "..."+.@input$+"?";
			mes "O que? Eu n�o te entendo...";
			close;
		}
		rach_vice = 11;
		changequest(8114,8115);
		mes "[Katinshuell]";
		mes "Voc� est� feliz, agora?";
		mes "Pare de tentar se intrometer na minha vida pessoal, e apenas curta um pouco passear por essa pequena cidade.";
		mes "� isso que voc� veio fazer, certo?";
		close;
	} else if (rach_vice == 11) {
		mes "[Katinshuell]";
		mes "Voc� est� feliz, agora?";
		mes "Pare de tentar se intrometer na minha vida pessoal, e apenas curta um pouco passear por essa pequena cidade.";
		mes "� isso que voc� veio fazer, certo?";
		close;
	} else if ((rach_vice == 15) && (countitem(Diary_Of_Blue))) {
		mes "[Katinshuell]";
		mes "Oh, � voc� de novo.";
		mes "O que voc� quer agora?";
		mes "Eu ja te falei que eu n�o estou de bom humor para falar com ningu�m hoje.";
		mes "Eu ainda estou arcando com o meu t�rmino com minha namorada.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Katinshuell... eu tenho o presentimento que voc� est� escondendo algo.";
		mes "De alguma forma, Bruspetti era sua namorada?";
		next;
		mes "[Katinshuell]";
		mes "Huh?! Er, O-o-o que?";
		mes "O que o faz pensar isso?";
		mes "N�o � do seu interesse!";
		mes "Al�m disso, voc� n�o acha que uma garota como aquela � muito boa para algu�m como eu?!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu relmente n�o tenho nenhuma raz�o para suspeitar nada de voc�";
		mes "Mas o meu sentimento e o jeito que voc� reagiu n�o est�o garantindo muito.";
		mes "Bem, eu acho que eu posso pesquisar atrav�s desse livro...";
		next;
		mes "[Katinshuell]";
		mes "Hey! Hey Isso �...";
		mes "� o di�rio de Bruspetti!";
		mes "E-eu tenho procurado por-- um...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Hey! Como voc� sabia";
		mes "sobre ele?!";
		mes "Conte-me a verdade!";
		mes "Na verdade, voc� sabe o que?";
		mes "Por que n�o buscamos pela verdade juntos?";
		mes "O que acha?";
		next;
		mes "^3355FFDe uma forma relaxada voc� atira o di�rio no p� de Katinshuell, e ele abre em uma das p�ginas do meio.^000000";
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
		mes "Isso � algum tipo de interroga��o?";
		mes "E-eu n�o fiz nada errado!";
		mes "V� em frente, me pergunte qualquer coisa!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Tudo bem ent�o, por que voc� n�o explica isso?";
		next;
		switch (select("Casa do Sr. Shendar","Lighthalzen","Nascente de Freya","Bruspetti")) {
			case 1:
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Sr. Shendar, o pai de Bruspetti, diz que algu�m entrou em sua casa por alguma raz�o.";
			mes "Agora, por que voc� faria isso?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Voc� reconheceu o di�rio de Bruspetti vem r�pido...";
			mes "E voc� realmente mencionou que estava procurando por isso.";
			next;
			mes "[Katinshuell]";
			mes "Hmpf! P-pare de falar coisas doidas!";
			mes "Eu n�o sei sobre o que voc� est� falando!";
			close;
			case 2:
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Voc� sabe, eu descobri que Bruspetti estava planejando ir para Lighthalzen.";
			mes "Parece que ela queria saber algo realmente importante por l�...";
			next;
			mes "[Katinshuell]";
			mes "N�o...!";
			mes "Ela n�o poderia...!";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Tudo bem.";
			mes "N�o h� necessidade de fingir que voc� n�o a conhece.";
			mes "Voc� era seu namorado, n�o era?";
			mes "O que ela estaria tentando encontrar em Lighthalzen?";
			next;
			mes "[Katinshuell]";
			mes "N�o! n�o n�o n�o!";
			mes "Cale-se! Cale-se!";
			mes "Por favor!";
			mes "Somente me deixe sozinho!";
			mes "V� embora agora mesmo!";
			next;
			switch (select("Casa do Sr. Shendar","Nascente de Freya","Separa��o Recente")) {
				case 1:
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Ent�o enquanto ela estava fora em Lighthalzen, voc� entrou na cada do Sr. Shendar e--";
				next;
				mes "[Katinshuell]";
				mes "S-sim! Sim, est� certo!";
				mes "� porque eu estava t�o preocupado com ela!";
				mes "Eu n�o tinha id�ia de que ela percorreu todo o caminho para Lighthalzen!";
				mes "Ha ha! Ha ha!";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "...............................";
				mes "^333333Nossa! Eu acho que saiu pela culatra, ent�o eu vou ter que tentar novamente.^000000";
				close;
				case 2:
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Ent�o, enquanto ela estava fora em Lighthalzen, voc� foi para Nascente de Freya, sozinho, n�o foi?!";
				next;
				mes "[Katinshuell]";
				mes "......";
				mes ".........";
				mes "Um? ...Sim.";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "...............................";
				mes "^333333Nossa! Eu acho que saiu pela culatra, ent�o terei que tentar isso novamente.^000000";
				close;
				case 3:
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Espere um segundo!";
				mes "O seu t�rmino e a repentina necessidade de Bruspetti investigar algo em Lighthalzen...";
				mes "Est�o relacionadas de alguma forma, n�o est�o?";
				next;
				mes "[Katinshuell]";
				mes "......";
				mes ".........";
				mes "N�o, n�o � verdade!";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				next;
				switch (select("Casa do Sr. Shendar","Nascente de Freya")) {
					case 1:
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Ent�o enquanto ela estava fora em Lighthalzen, voc� entrou na casa do Sr. Shendar e--";
					next;
					mes "[Katinshuell]";
					mes "S-sim! Sim, est� certo!";
					mes "� porque eu estava muito preocupado com ela!";
					mes "Eu n�o tinha id�ia que ela tinha viajado para Lighthalzen!";
					mes "Ha ha! Ha ha!";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "...............................";
					mes "^333333Nossa! Eu acho que saiu pela culatra, ent�o terei que tentar isso novamente.^000000";
					close;
					case 2:
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Hmm... Por que voc� est� sempre passando um tempo sozinho na Nascente de Freya?";
					mes "E por que Bruspetti ainda n�o voltou pra casa?";
					next;
					mes "[Katinshuell]";
					mes "...voc� ir� parar de falar coisas sem sentido?";
					mes "Qual � a sua evidencia para me condenar pelo crime?";
					mes "N�o quero mais ouvir falar de voc�.";
					next;
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Mesmo depois de voc� ter matado Bruspetti,";
					mes "voc� fica preocupado com outra possibilidade.";
					mes "Ent�o voc� est� conspirando para se livrar dessa possibilidade,tamb�m.";
					next;
					rach_vice = 17;
					mes "[Katinshuell]";
					mes "N�o! Pare! Pare!";
					mes "Voc� est� dizendo que eu a matei?!";
					mes "Eu n�o a matei!";
					mes "Pare com essa loucura antes que eu fique realmente bravo!";
					close;
				}
			}
			case 3:
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Nascente de Freya.";
			mes "Por que voc� est� sempre passando um tempo por ali sozinho, �?";
			next;
			mes "[Katinshuell]";
			mes "...............................";
			mes "� porque eu realmente sinto falta da minha ex-namorada.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Oh. Certo.";
			mes "� uma �tima raz�o.";
			close;
			case 4:
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Se Bruspetti n�o � mais sua namorada, ent�o...";
			mes "Quem �?!";
			mes "Responda!";
			next;
			mes "[Katinshuell]";
			mes "...............................";
			mes "Certo, certo. Voc� venceu.";
			mes "Ela era minha ex-namorada.";
			mes "Eu apenas n�o gosto de falar sobre Bruspetti, � isso.";
			mes "Agora voc� pode me deixar sozinho?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "^333333Nossa! Ele n�o devia ceder assim!";
			mes "Eu preciso perguntar novamente pra ele at� que meu sentimento esteja satisfeito!^000000";
			close;
		}
	} else if (rach_vice == 17) {
		mes "[Katinshuell]";
		mes "Droga! Eu n�o quero mais pensar sobre ela!";
		mes "V� embora de mim, e leve o di�rio de Bruspetti com voc�!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O que?! De jeito nenhum, n�o depois que aquela pequena explor�o sobre matar ou n�o matar Bruspetti!";
		mes "Bem, se voc� n�o vai falar, ent�o eu vou revirar esse di�rio em busca de respostas.";
		rach_vice = 18;
		close;
	} else if (rach_vice == 18) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Vamos ver...";
		mes "Oh, essa entrada parece interessante, � tudo sobre voc�, Katinshuell.";
		next;
		mes "- Data: OOXX -";
		mes "Eu estou t�o apaixonada por ele, mas ele sempre muda o assunto toda vez que eu pergunto coisas pessoais sobre seu passado.";
		mes "Poderia ser que ele esteja escondendo algo de mim?";
		next;
		mes "- Data: OOXX -";
		mes "� uma outra mulher?";
		mes "N�o posso evitar de sentir ci�mes!";
		mes "Eu preciso saber.";
		mes "Por isso eu decidi ir a Lighthalzen e ver o que posso descobrir.";
		next;
		mes "- Data: OOXO -";
		mes "Querido di�rio,";
		mes "Hoje eu descobri a horr�vel verdade...";
		mes "Eu preciso faze-lo confessar isso � mim.";
		mes "Eu espero que a gente ainda possa ficar junto depois de tudo isso...";
		next;
		mes "- Data: OOXO -";
		mes "Mas eu n�o sei se eu posso viver com isso!";
		mes "O homem que eu amo...";
		mes "� dif�cil pensar que ele usou uma faca p-para...";
		mes "Eu s� quero vomitar.";
		next;
		mes "- Data: OOXO -";
		mes "Eu estou planejando encontr�-lo amanha na Nascente de Freya.";
		mes "N�o posso evitar de olh�-lo diferentemente agora, mas ainda...";
		mes "Ele � o homem que eu amo verdadeiramente.";
		next;
		mes "- Data: OOXO -";
		mes "Eu espero que eu tenha boas not�cias da prox�ma vez que eu escrever nesse di�rio...";
		mes "Bem, aqui h� esperan�a.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, aquela foi a �ltima p�gina...";
		mes "O que aconteceu quando Bruspetti confrontrou voc� na Nascente de Freya?";
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
		mes "Eu n�o mere�o isso!";
		mes "Porque voc� continua me rondando com essas perguntas?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Algo... algo aconteceu quando Bruspetti confrontou voc� na Nascente de Freya?";
		mes "O que ela exatamente aprendeu sobre voc� em Lighthalzen?";
		next;
		mes "[Katinshuell]";
		mes "Eu... Eu n�o tenho que te dizer nada!";
		rach_vice = 20;
		changequest(8120,8121);
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "^333333Ele ainda est� me evitando...";
		mes "Como eu posso faze-lo revelar a verdade?^000000";
		close;
	} else if ((rach_vice == 20) && (countitem(Knife))) {
		mes "[Katinshuell]";
		mes "Eu...";
		mes "Eu n�o mere�o isso!";
		mes "Porque voc� continua me rondando com essas perguntas?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Algo... algo aconteceu quando Bruspetti confrontou voc� na Nascente de Freya?";
		mes "O que ela exatamente aprendeu sobre voc� em Lighthalzen?";
		next;
		mes "[Katinshuell]";
		mes "Eu... Eu n�o tenho que te dizer nada!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Como voc� pode dizer isso?";
		mes "Eu s� li no di�rio da Bruspetti que ela descobriu algo horr�vel sobre voc�";
		mes "E isso envolve uma faca... exatamente como isso.";
		next;
		mes "[Katinshuell]";
		mes ".........!";
		mes ".............";
		mes "NN��oooo!";
		mes "Me desculpa, � s� minha culpa!";
		mes "Eu estava desesperado!";
		mes "Voc� n�o entende como eu costumava viver, voc� n-n�o--!";
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
		mes "Eu perdi a mulher que eu amo por causa de algo est�pido que fiz no passado.";
		mes "Se voc� quiser me prender, v� em frente...";
		delitem Knife,1;
		rach_vice = 22;
		changequest(8121,8122);
		close;
	} else if (rach_vice == 21) {
		mes "[Katinshuell]";
		mes "Suponho que seja meu destino carregar esta culpa.";
		mes "Est� realmente destruida minha possibilidade de ser verdadeiramente feliz.";
		mes "Bruspetti...";
		close;
	} else if (rach_vice > 21) {
		mes "[Katinshuell]";
		mes "Se pelo menos eu tivesse me entregado.....";
		mes "Se eu fizesse tentado pagar por meu crime, talvez eu e Bruspetti tiv�ssemos uma chance...";
		close;
	} else {
		mes "[Katinshuell]";
		mes "Voc� acredita em karma?";
		mes "Eu acredito... N�o importa o que voc�";
		mes "fa�a, mesmo que voc� n�o seja";
		mes "pego, de alguma forma sempre";
		mes "recai sobre voc�.";
		next;
		mes "[Katinshuell]";
		mes "Voc� j� se sentiu";
		mes "culpado sobre algo,";
		mes "mas escondeu isso da verdade?";
		mes "Deixe me dizer que deve ser uma";
		mes "experi�ncia dolorosa. �";
		mes "melhor voc� confessar enquanto pode.";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,250,19,3	script	Sr. Shendar#vice	4_M_MIDDLE,{
	if (rach_vice == 1) {
		mes "[Sr. Shendar]";
		mes "Simplesmente achei que minha preciosa filha estava saindo com algu�m.";
		mes "Ela foi para alguma outra cidade com o menino, e eu n�o n�o ouvi uma palavra dela desde que aconteceu";
		next;
		mes "[Sr. Shendar]";
		mes "Ou�a o que eu digo: nunca tenha uma filha!";
		mes "Voc� se preucupa demais sobre eles , e eles abandonam seus pais uma vez quando crescem!";
		mes "Aposto que ela est� se divertindo...";
		next;
		mes "[Sr. Shendar]";
		mes "Provavelmente em uma am�vel viagem com quem quer que seja aquele garoto.";
		mes "Ela havia saido durante um tempo longo e horr�vel, mas agora ela � tamb�m adulta eu...";
		mes "Eu axo que ela deve estar muito bem";
		rach_vice = 2;
		setquest(8106);
		close;
	} else if (rach_vice == 2) {
		mes "[Sr. Shendar]";
		mes "Ou�a o que eu digo: Nunca tenha uma filha!";
		mes "Voc� se preucupa demais sobre eles, e eles abandonam seus pais uma vez quando crescem!";
		mes "Aposto que ela est� se divertindo...";
		next;
		mes "[Sr. Shendar]";
		mes "Me cofundi...!";
		mes "Quem quer que seja aquele sujeito � melhor que n�o tente nenhuma gracinha!";
		mes "Como o pai dela, eu tenho o direito legal de torcer o pequeno pesco�o dela!";
		mes "Pelo menos deveria...";
		close;
	} else if ((rach_vice == 4) || (rach_vice == 5)) {
		mes "[Sr. Shendar]";
		mes "Eu sinto falta da minha filha.";
		mes "Sim, a casa cheira diferente sem ela por perto.";
		mes "� um pouco estranho estar falando sobre isso, mas Bruspetti sempre cheirou bem, exatamente como sua m�e.";
		next;
		mes "[Sr. Shendar]";
		mes "Mesmo que elas n�o usassem perfume.";
		mes "Elas tinha esse agrad�vel e distinto aroma sobre elas.";
		mes "Eu acho que pode ser hormonal?";
		rach_vice = 5;
		changequest(8108,8109);
		close;
	} else if (rach_vice == 8) {
		mes "[Sr. Shendar]";
		mes "O que? Minha filha foi para Lighthalzen?";
		mes "Ela n�o conhece ningu�m la.";
		mes "Hmm, talvez aquele seja o lugar onde ela esteja planejando ir para conhecer mais sobre o que a estava incomodando.";
		next;
		mes "[Sr. Shendar]";
		mes "Sim, ela era muito gen�rica:";
		mes "''Pai, eu preciso ir para um lugar.''";
		mes "e ''H� algo que eu preciso ter certeza.''";
		mes "Deixando de fora todos os detalhes n�o deixa um idolatrado pai facilmente!";
		next;
		mes "[Sr. Shendar]";
		mes "Bem, Obrigado por me deixar saber onde ela possa estar.";
		mes "agora, quisera eu saber o que ela estava planejando fazer.";
		mes "Talvez ela escreveu algo sobre isso no seu di�rio?";
		mes "Sim, talvez...";
		next;
		mes "[Sr. Shendar]";
		mes "N�o, eu n�o posso fazer isso!";
		mes "Como um amado pai, n�o posso me permitir invadir a preciosa privacidade da minha filha.";
		mes "Mesmo que ela tenha deixado descuidadosamente seu di�rio no topo da gaveta.";
		next;
		mes "[Sr. Shendar]";
		mes "Oh, mas como um pai se preocupa.";
		mes "Estar� minha doce, querida Bruspetti bem?";
		rach_vice = 9;
		changequest(8112,8113);
		close;
	} else if (rach_vice == 9) {
		mes "[Sr. Shendar]";
		mes "Maldi��o!";
		mes "Eu nunca deveria ter mencionado o di�rio da minha filha para um aventureiro como voc�!";
		mes "Pessoas como voc� s�o naturalmente curiosas...!";
		close;
	} else if (rach_vice == 13) {
		mes "[Sr. Shendar]";
		mes "Hey! Hey! Voc� � o pervertido que est� entrando em minha casa para ca�ar minha filha?!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "O qu--?";
		mes "N�o, Eu sou apenas um--";
		next;
		percentheal(-50,0);
		mes "^3355FF*BAM!*^000000";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ow! Para que";
		mes "voc� fez aquilo?";
		next;
		mes "[Sr. Shendar]";
		mes "Ainda vivo, �? Hmpf!";
		mes "Eu vou acabar com voc�! Eu vou...";
		mes "Er, huh?!";
		mes "Calma, eu acho que eu te conhe�o.";
		mes "Voc� � aquele aventureiro que esteve aqui antes, certo?";
		next;
		mes "[Sr. Shendar]";
		mes "Oh... Eu acho que eu cometi um erro.";
		mes "Eu pensei que voc� fosse aquela pessoa que est� rondando a minha casa.";
		mes "Eu n�o sei quem ele �, mas tenho certeza que n�o � voc�...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Espere, espere...";
		mes "Ent�o alguem tem rondado por aqui?";
		mes "� estranho.";
		mes "Espere, aquele cara, aquele que pode ser o namorado de Bruspetti...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Certo, seu nome era Katinshuell.";
		mes "Aquele cara tem agido de forma realmente engra�ada.";
		mes "Talvez seja ele que est� rondando por aqui?";
		mes "� melhor eu ir e perguntar a ele sobre isso...";
		next;
		mes "[Sr. Shendar]";
		mes "Espere, onde voc� est� indo?";
		mes "Eu... me desculpe por ter te acertado?";
		next;
		mes "[Sr. Shendar]";
		mes "Maldi��es!";
		mes "Se aquele cara � o namorado da minha filha";
		mes "Ele est� invadindo minha casa, ent�o ele pode ser realmente perigoso.";
		mes "� muito ruim que eu n�o possa perguntar a Bruspetti algo sobre ele...";
		next;
		mes "[Sr. Shendar]";
		mes "Hm... Tudo certo, aventureiro.";
		mes "Se voc� puder encontrar, isso permitir� que voc� leve e leia o di�rio da minha filha.";
		mes "N�s precisamos conhecer mais sobre esse cara Katinshuell.";
		mes "Se ele � perigoso...";
		next;
		mes "[Sr. Shendar]";
		mes "Me desculpe...";
		mes "Eu estou pedindo alguma ajuda...";
		mes "Mas n�o h� nada mais que eu possa fazer como seu pai.";
		mes "Al�m disso, aventureiros como voc� podem oferecer aquela melhor prote��o...";
		rach_vice = 14;
		changequest(8117,8118);
		close;
	} else if (rach_vice == 14) {
		mes "[Sr. Shendar]";
		mes "Ent�o voc� tem uma alguma id�ia de quem est� entrando em minha casa?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Bem, eu suspeito desse cara chamado Katinshuell.";
		mes "Porque ele pode ter sido os namorado de Bruspetti e ele tem agido de forma engra�ada.";
		mes "Ainda, n�o tenho nenhuma real evid�ncia sobre isso.";
		next;
		mes "[Sr. Shendar]";
		mes "O namorado de Bruspetti?!";
		mes "Hmpf!";
		mes "Eu n�o gosto daquele garoto.";
		mes "Eu n�o o encontrei ainda, mas � meu solene dever como pai odiar e desacreditar nele!";
		close;
	} else if (rach_vice > 21) {
		mes "[Sr. Shendar]";
		mes "Quando minha preciosa filha Bruspetti estar� de volta pra casa?";
		mes "Eu tenho certeza que ela pode tomar conta de si mesma.";
		mes "Mas um pai n�o pode evitar de se preocupar com a morte.";
		next;
		mes "[Sr. Shendar]";
		mes "Ah, se voc� por acaso ver minha filha nas viagens.";
		mes "Por favor diga a ela que seu pai est� esperando que ela volte pra casa.";
		mes "Obrigado, aventureiro.";
		close;
	} else {
		mes "[Sr. Shendar]";
		mes "Eu simplesmente acho que minha preciosa filha esteve saindo com algu�m.";
		mes "Ela saiu para alguma outra cidade para ver esse garoto, e eu n�o n�o ouvi uma s� palavra desde aquilo";
		next;
		mes "[Sr. Shendar]";
		mes "Ou�a oque eu digo: Nunca tenha uma filha!";
		mes "Voc� se preucupa demais sobre elas, e elas abandonam seus pais uma vez quando crescem!";
		mes "Aposto que ela est� se divertindo...";
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
		mes "Ela me disse que ela que esta preucupada com ele, mas tamb�m admitiu que n�o sabe muito a respeito dele";
		mes "Deixe-me ver...";
		mes "Ele cresceu em Lighthalzen?";
		mes "Isso � tudo que ela sabe.";
		if (rach_vice == 2) {
			rach_vice = 3;
			changequest(8106,8107);
		}
		close;
	} else if (rach_vice == 6) {
		mes "[Lachellen]";
		mes "Oh, o pai de Bruspetti estava falando sobre como ela cheirava bem!";
		mes "Ela � t�o quanto famosa por aqui, ent�o ele n�o � t�o arrepiante ou nada.";
		next;
		mes "[Lachellen]";
		mes "Eu vejo, ent�o voc� pensa que voc� poderia achar seu cheiro em outra cidade,";
		mes "�, eu ouvi que ela saiu viajando para ver se ela poderia aprender algo, e ela n�o retornou ainda.";
		next;
		mes "[Lachellen]";
		mes "Ou voc� sabe o que?";
		mes "Se ela est� em Lighthalzen ela deve ter ido l�.";
		mes "Para aprender mais sobre seu namorado Bruspetti mencionou algo sobre isso quando eu a vi pela �ltima vez .";
		next;
		mes "[Lachellen]";
		mes "Eu n�o sei nada mais.";
		mes "Hmm, talvez se voc� for ao lugar onde ela e seu namorado sempre iam em seus encontros.";
		mes "Voc� provavelmente seria capaz de achar algo.";
		rach_vice = 7;
		changequest(8110,8111);
		close;
	} else if (rach_vice == 7) {
		mes "[Lachellen]";
		mes "Vamos ver...";
		mes "Bruspetti e seu garoto iriam se encontra em...";
		mes "Eu sei onde �, mas eu n�o posso te dar uma boa dire��o para ira l�.";
		mes "Er, desculpa!";
		next;
		mes "[Lachellen]";
		mes "Felizmente essa cidade n�o � t�o grande.";
		mes "Ent�o eu estou certa eu vou achar algo se voc� simplesmente continuar procurando.";
		mes "Oh, e se voc� acha-la, diga a ela que eu mandei um 'oi',okay?";
		close;
	} else if (rach_vice == 11) {
		mes "[Lachellen]";
		mes "Oh, ol� denovom h� algum jeito que eu possa ajudar voc� agora?";
		mes "Eu sei que voc� est� procurando por Bruspetti ent�o irei ajuda-lo a ter qualquer pergunta de mim ";
		next;
		input(.@input$);
		if (.@input$ == "Lighthalzen") {
			mes "[Lachellen]";
			mes "Lighthalzen?";
			mes "Oh, isso � certo!";
			mes "Bruspetti me perguntou sobre Lighthalzen uma vez.";
			mes "Sim, ela parecia realmente interessada em aprender mais sobre aquele lugar recentemente";
			next;
		} else if (.@input$ == "Nascente de Freya") {
			mes "[Lachellen]";
			mes "Nascente de Freya?";
			mes "Oh, eu gosto daquele lugar!";
			mes "Falando sobre isso, eu sei algu�m chamado Katinshuell que apareceu aqui a muito tempo.";
			mes "Normalmente homens n�o v�o sozinhos ...";
			next;
			mes "[Lachellen]";
			mes "espere ,esse � o lugar que te contei sobre, onde Bruspetti e seu namorado se encontravam.";
			mes "Voc� pensa que ela e Katinshuell...?";
			mes "Ooh, talvez eu imaginei isso!";
			next;
			mes "[Lachellen]";
			mes "Mas sim , aquele lugar � sempre cheio de casais.";
			mes "Ent�o voc� parece como um verdadeiro perdedor se voc� for l� sozinho.";
			mes "Por isso que eu quero um namorado agora...";
			rach_vice = 12;
			changequest(8115,8116);
			next;
		} else {
			mes "[Lachellen]";
			mes "Oh, me desculpe...";
			mes "Eu n�o sei nada sobre"+.@input$+".";
			close;
		}
		mes "[Lachellen]";
		mes "Hmm, eu n�o sei se voc� descobriu algo importante falamdp comigo.";
		mes "Mas espero ter ajudado, mesmo que seja s� um pouco.";
		close;
	} else if (rach_vice == 12) {
		mes "[Lachellen]";
		mes "Hmm, eu n�o sei se voc� descobriu algo importante falamdp comigo.";
		mes "Mas espero ter ajudado, mesmo que seja s� um pouco.";
		close;
	} else if (rach_vice > 21) {
		mes "[Lachellen]";
		mes "Se por acaso voc� veja Bruspetti, diga que para vir falar comigo.";
		mes "Eu preciso saber oque eu achava como seu namorado �!";
		mes "N�o posso esperar para vela";
		close;
	} else {
		mes "[Lachellen]";
		mes "Minha amiga Bruspetti";
		mes "� realmente uma menina legal";
		mes "Todos amam ela, e ";
		mes "ela � t�o bonita.Todos";
		mes "os garotos tinham inveja sobre";
		mes "seu novo namorado!";
		next;
		mes "[Lachellen]";
		mes "Ainda ,ela � realmente";
		mes "timida,e n�o me contara";
		mes "quem ele � .Tem muita coisa";
		mes "que n�o sabemos sobre ele,mas";
		mes "Estou certo que eles est�o felizes juntos.";
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
		mes "� um cheiro t�o bom!";
		mes "Como p�talas de rosa levadas por uma brisa leve...";
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
		mes "Voc� n�o deve se aproximar tanto da �gua.";
		mes "E se voc� escorregar e cair?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Huh?";
		next;
		mes "[Grandma]";
		mes "Oh, me desculpe se te preucupei, mas o o ch�o que voc� esta parado sobre � muito escorregadio, sabe...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ah, estou vendo.";
		rach_vice = 8;
		changequest(8111,8112);
		close;
	} else if (rach_vice == 8) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Aquela velha senhora me disse para ter cuidado para n�o escorregar e cair na �gua nesse local, ent�o � melhor andar com cuidado.";
		close;
	} else if (rach_vice == 22) {
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Este deve ser onde Bruspetti se afogou...";
		next;
		mes "[Vov�]";
		mes "Oh! Desculpe-me, jovem aventureiro, mas n�o deve ficar ai!";
		mes "� muito escorregadio.";
		mes "E se voc� cair na nascente?";
		mes "� perigoso!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Oh... Er, obrigado.";
		mes "Sim, eu n�o queria me ver afogando";
		next;
		rach_vice = 23;
		mes "[Vov�]";
		mes "Afogando...? Eu s� n�o queria que voc� molhasse sua roupa.";
		mes "A agu� n�o � assim t�o profunda...";
		mes "Mesmo se n�o souber nadar, voc� pode sair dai, voc� sabe";
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
		mes "A �gua n�o � t�o gelada, ou profunda e Katinshuell mencionou que seu corpo foi puxado pela perna...";
		mes "Mas ela continuou olhando para ele.";
		mes "Isso est� assombrando...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu suponho ela estava rasgada...";
		mes "Ela amava-o, mas n�o podia suportar viver com o segredo dele.";
		mes "No final, isso tudo foi muito tragico.";
		mes "Katinshuell n�o era uma pessoa m�...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ele foi for�ado a cometer crimes hediondos, e continuou cometendo erros, correndo de sua culpa.";
		mes "Ningu�m � respons�vel por isso?";
		mes "Quem o culparia?";
		next;
		rach_vice = 24;
		completequest(8122);
		if (BaseLevel > 90) { getexp(130000,0); }
		else if (BaseLevel > 75) { getexp(85000,0); }
		else { getexp(45000,0); }
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "De alguma forma, gostaria que Katinshuell tivesse a for�a de encarar sua culpa e tamb�m para perdoar a si mesmo.";
		close;
	}
	end;
}

// ------------------------------------------------------------------
ra_in01,255,25,0	script	Di�rio#vice	HIDDEN_NPC,{
	if ((rach_vice == 9) || (rach_vice == 10)) {
		mes "^3355FFTEste deve ser o di�rio de Bruspetti!";
		mes "Mas... ler o seu conte�do faria com que voc� se sentisse muito mal.";
		mes "Ent�o � melhor n�o toc�-lo.^000000";
		if (rach_vice == 9) {
			rach_vice = 10;
			changequest(8113,8114);
			close;
		}
	} else if (rach_vice == 14) {
		rach_vice = 15;
		changequest(8118,8119);
		getitem(Diary_Of_Blue,1);
		mes "^3355FFEste deve ser o di�rio de Bruspetti!";
		mes "Voc� agora tem permiss�o para lev�-lo consigo e tentar descobrir se ela e Katinshuell t�m alguma conex�o...^000000";
		close;
	} else if (rach_vice >= 15) {
		mes "^3355ffEste � o local onde voc� encontrou o di�rio de Bruspetti.";
		mes "Talvez voc� devesse pegar para voc� na pr�xima vez converse com Katinshuell.^000000";
		close;
	} else {
		mes "^3355FFTEste deve ser o di�rio de uma Garota!";
		mes "Mas... ler o seu conte�do faria com que voc� se sentisse muito mal.";
		mes "Ent�o � melhor n�o toc�-lo.^000000";
		close;
	}
}

// ------------------------------------------------------------------
rachel,266,35,3	script	Vov�#vice	4_F_RACHOLD,{
	if (rach_vice == 12) {
		mes "[Vov�]";
		mes "Oh,voltou denovo, eh?";
		mes "Eu acho que voc� deve realmente gostar de vir a este lugar tamb�m.";
		mes "Hm,isso lembra me ...";
		next;
		mes "[Vov�]";
		mes "Veja a primavera est� chegando?";
		mes "O mesmo jovem homem frequentemente vem nesse lugar.";
		mes "E olha fixamente a �gua, somente pingando com tristezas.";
		mes "Algu�m t�o jovem n�o deveria estar se sentindo assim.";
		next;
		mes "[Vov�]";
		mes "Voc� deve vir aqui para relaxar e curtir a beleza a sua volta, n�o em pensar em seus pesares.";
		mes "Eu penso que aquele garoto n�o concorda comigo nisso.";
		next;
		mes "[Vov�]";
		mes "Voc� deve ser capaz de seguir em frente seja o que estiver te chateando, e simplesmente apreciar a vida como ela � agora";
		rach_vice = 13;
		changequest(8116,8117);
		close;
	} else if (rach_vice == 13) {
		mes "[Vov�]";
		mes "Quando voc� tiver minha idade, voc� aprecia a vida mais e pode deixar seus arrependimento mais facilmente.";
		mes "Eu deperdicei minha juventude em muitas preucupa��es quando poderia ter relaxado.";
		close;
	} else if (rach_vice > 21) {
		mes "[Vov�]";
		mes "Quando voc� tiver minha idade.";
		mes "Voc� ir� guardar com carinho todas suas memorias, mesmo que a experi�ncia tenha sido dolorosa quando aconteceu";
		next;
		mes "[Vov�]";
		mes "Suas memorias s�o partes do que voc� � e do que o faz.";
		mes "Eu posso apreciar vivendo a vida que tenho, mesmo se ela n�o for particularmente especial.";
		close;
	} else {
		mes "[Vov�]";
		mes "Eu adoro esse lugar,";
		mes "� um lindo cen�rio";
		mes "com uma serena atmosfera.";
		mes "� uma paz dos deuses.";
		next;
		mes "[Vov�]";
		mes "Isso deixa meu cora��o aproveitar ver";
		mes "jovens casais podendo vir";
		mes "aqui e relaxando juntos.";
		mes "N�o � o amor uma coisa grande?";
		close;
	}
}
