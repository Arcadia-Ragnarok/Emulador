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
| - Info: Quest da Amizade                                          |
| * Pré requisito para quest do Desaparecimento de Bruspetti        |
\*-----------------------------------------------------------------*/

lighthalzen,337,232,3	script	Maku#friendship	4_M_LGTPOOR,{
	if (BaseLevel < 50) {
		mes "[Maku]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à cidade alta de Lighthalzen.";
		mes "Entretanto, acho que esta área não tem muito a oferecer se está buscando agitação.";
		next;
		mes "[Maku]";
		mes "Sem querer ser rude, longe disso, mas essa cidade deve ser bastante segura para você explorá-la.";
		mes "Quero dizer, você parece ser um aventureiro meio novato...";
		close;
	} else if (!friendship) {
		cutin("lhz_macu01",2);
		mes "[Maku]";
		mes "Hei, você é um desses aventureiros, né?";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao gueto.";
		mes "Aqui não acontece muita coisa, mas, hei, fique a vontade para explorar o que quiser.";
		next;
		mes "[Maku]";
		mes "Eu não sei se você sabe, mas as pessoas que vivem aqui não têm permissão para explorar toda a cidade.";
		mes "É meio tabu falar disso, mas...";
		mes "E eu com isso, né?";
		next;
		mes "[Maku]";
		mes "É, basicamente as pessoas ricas têm muito medo de as pessoas pobres irem lá visitá-las.";
		mes "Por isso a segurança na cidade é tão forte!";
		mes "Esses caras da ^0000FFalta sociedade^000000 são um lixo...";
		next;
		mes "[Maku]";
		mes "Eu não pensava assim.";
		mes "Na verdade, até tinha um amigo bastante rico até que eu descobri que ele não era o que eu pensava.";
		mes "Aquele idiota!";
		mes "Quem ele pensa que é?!";
		next;
		mes "[Maku]";
		mes "Ah, desculpe.";
		mes "O que é que você tem a ver com minha vida pessoal, não é?";
		mes "Claro, todo mundo acaba falando do próprio umbigo...";
		friendship = 1;
		setquest(12000);
		next;
		mes "[Maku]";
		mes "Bem, quando ficar entediado do gueto, deveria dar uma olhada na parte rica da cidade.";
		mes "Posso ser ranzinza, mas admito que é mais agradável do que aqui.";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 1) {
		cutin("lhz_macu01",2);
		mes "[Maku]";
		mes "Ah, desculpe.";
		mes "O que é que você tem a ver com minha vida pessoal, não é?";
		mes "Claro, todo mundo acaba falando do próprio umbigo...";
		next;
		mes "[Maku]";
		mes "Bem, quando ficar entediado do gueto, deveria dar uma olhada na parte rica da cidade.";
		mes "Posso ser ranzinza, mas admito que é mais agradável do que aqui.";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 2) {
		mes "[Maku]";
		mes "Hei, o que você faz de novo aqui?";
		mes "Eu pensei que eu tinha dito para ir ver a cidade alta de Lighthalzen.";
		mes "Aqui é meio decadente...";
		next;
		select("Na verdade eu encontrei Digotz e...");
		cutin("lhz_macu05",2);
		mes "[Maku]";
		mes "Você o quê...?!";
		mes "Você viu meu velho amigo, Digotz?!";
		mes "Er, quero dizer, Senhor Alexander Digotz, que costumava ser meu amigo, mas obviamente não é mais.";
		next;
		cutin("lhz_macu05",255);
		cutin("lhz_macu02",2);
		mes "[Maku]";
		mes "Claro, a gente era bem chegado, mas isso foi há muito tempo.";
		mes "Faz tempo que cada um foi para um lado e ele provavelmente me odeia por ser um pé rapado...";
		friendship = 3;
		changequest(12001,12002);
		next;
		mes "[Maku]";
		mes "Claro, a gente era bem chegado, mas isso foi há muito tempo.";
		mes "Faz tempo que cada um foi para um lado e ele provavelmente me odeia por ser um pé rapado...";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 3) {
		cutin("lhz_macu03",2);
		mes "[Maku]";
		mes "Cara, eu preciso esfriar a cabeça!";
		mes "É verdade que eu e o Digotz éramos amigos antes e pode parecer que a gente ainda é.";
		mes "Mas não somos não, apesar que a gente era como unha e carne!";
		next;
		mes "[Maku]";
		mes "Não me leve a mal, eu não sinto falta dele ou qualquer coisa do gênero e não me ^0000FFarrependo^000000 do que aconteceu.";
		mes "Mas se ele pedir desculpas, provavelmente eu aceitarei, sabe.";
		next;
		mes "[Maku]";
		mes "Tá, pensando bem claro que sim.";
		mes "Quero dizer, ei não sou";
		mes "de guardar rancor.";
		mes "É tudo culpa dele!";
		mes "Nem fala!";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 4) {
		cutin("lhz_macu05",2);
		mes "[Maku]";
		mes "O que diabos você ainda está fazendo por aqui?";
		mes "Você deve ter algo melhor para fazer do que conversar com um rufião como eu ou com aquele idiota esnobe do Digotz.";
		next;
		select("Falando nele...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Falando nele...";
		mes "Eu conversei de novo com Digotz.";
		mes "Ele me disse para dar um recado para você, mas eu não sei se...";
		next;
		mes "[Maku]";
		mes "Falando nele...";
		mes "Eu conversei de novo com Digotz.";
		mes "Ele me disse para dar um recado para você, mas eu não sei se...";
		next;
		input(.@input$);
		if (.@input$ == "Seu bastardo incorrigível!") {
			mes "[Maku]";
			mes "''Seu bastardo incorrigível?!''";
			mes "Bem, pelo menos ele teve coragem para disser isso.";
			mes "Mesmo sendo por meio de outra pessoa.";
			mes "O que mais ele tem a dizer?!";
			next;
			input(.@input$);
			if (.@input$ == "Você continua sendo um babaca teimoso!") {
				mes "[Maku]";
				mes "''Babaca teimoso?!''";
				mes "É preciso ser um para reconhecer outro bastardo!";
				mes "Porque eu tenho que...";
				mes "Grrr!";
				mes "O que mais ele disse?!";
				next;
				input(.@input$);
				if (.@input$ == "Você ainda me deve pelo menos 3 almoços!") {
					mes "[Maku]";
					mes "Três almoços?!";
					mes "Eu paguei o almoço desse cara umas quinze vezes!";
					mes "Estou te falando, esse cara não sabe o que é amizade!";
					mes "O que mais aquele estúpido disse?!";
					next;
					input(.@input$);
					if (.@input$ == "Sem falar em uma desculpa!") {
						cutin("lhz_macu05",255);
						mes "[Maku]";
						mes "Eu me desculpar?!";
						mes "Ele que deveria estar de joelhos implorando pela droga do meu perdão!";
						mes "Mas que...";
						mes "Que egoísta estúpido imprestável...";
						mes "O q-que mais ele disse pra você?!";
						next;
						input(.@input$);
						if (.@input$ == "Mas quem liga para o que você pensa?!") {
							mes "[Maku]";
							mes "''Quem liga para o que eu penso?!''";
							mes "GRRRAAAH!! Quem liga para o que eu penso!!";
							mes "^333333*Ofegante*^000000";
							mes "Eu vou fazer picadinho daquele idiota detestável!";
							mes "Não tem como eu ficar mais bravo do que estou agora!";
							next;
							input(.@input$);
							if (.@input$ == "Eu estou bem melhor sem você!") {
								friendship = 5;
								cutin("lhz_macu06",2);
								mes "[Maku]";
								mes "É isso, está decidido.";
								mes "Da próxima vez que eu encontrar Digotz, eu vou esfregar a cara dele no chão.";
								close2;
								cutin("",255);
								end;
							}
						}
					}
				}
			}
		}
		mes "[Maku]";
		mes "O quê...?";
		mes "Eu não acho que Digotz diria uma coisa dessa.";
		mes "Tem certeza que escutou direito?";
		mes "Já faz um tempo, mas eu conheço o Digotz, cara.";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 5) {
		mes "[Maku]";
		mes "RrrrRrrrr....";
		mes "RrrrrRRRrrRR....";
		mes "GGGGGRRRRR...";
		next;
		mes "^3355FFHmm bem...";
		mes "Parece que Maku está tendo um ataque de raiva.^000000";
		next;
		mes "...";
		mes "......";
		mes ".........";
		next;
		cutin("lhz_macu06",2);
		mes "[Maku]";
		mes "Gggrrrr...";
		next;
		mes "[Maku]";
		mes "GRAAAAAAAAH!";
		mes "Quem é que ele pensa que é para me dizer esse tipo de coisa!?";
		mes "Digotz, você não vai se livrar disso!";
		mes "Vou acabar com você!";
		next;
		mes "^3355FFMaku fica vermelho e explode numa raiva pura e violenta.";
		mes "Depois de um tempo você consegue acalmá-lo.";
		mes "Mas quase acaba ^0000FFse matando^3355FF tentando aplacar a fúria dele.^000000 ";
		percentheal(-50,0);
		next;
		mes "[Maku]";
		mes "^333333*Ofegante* *ufa!*^000000";
		mes "N-não se preocupe, agora eu me controlo.";
		mes "Obrigado por não me deixar perder a cabeça.";
		mes "É nessas horas que eu realmente sinto falta de ^FF0000Benkaistein^000000.";
		next;
		mes "[Maku]";
		mes "Benkaistein sempre tentava fazer eu desistir das brigas.";
		mes "Eu sinto falta mesmo daquele cara.";
		mes "Mas, ele não está mais por aqui...";
		next;
		friendship = 6;
		mes "[Maku]";
		mes "Droga de guardas!";
		mes "Se eles não estivessem por aqui, eu poderia ir lá e dar uma lição em Digotz!";
		mes "Eu juro que se não fosse por eles...!";
		close2;
		cutin("",255);
		end;
	} else if (friendship > 5 && friendship < 13) {
		cutin("lhz_macu06",2);
		mes "[Maku]";
		mes "Arrrrgh! Sempre que eu escuto sobre Digotz, eu acabo irritado!";
		mes "É aquele cara que me deu o fora só porque eu não sou rico como ele?!";
		next;
		mes "[Maku]";
		mes "Não posso...";
		mes "Não posso nem mesmo dar uma surra direito nele por causa desses guardas desgraçados!";
		mes "Arrrrrrrgh!";
		mes "Cara, onde está Benkaistein quando eu preciso dele?";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 13 && countitem(Friends_Diary) > 0) {
		cutin("lhz_macu06",2);
		mes "[Maku]";
		mes "Hei, o que é isso?";
		mes "Você quer que eu leia esse diário?";
		mes "Hm, certo, mas eu não acho direito ler o diário de alguém.";
		mes "É meio assustador, sabe?";
		next;
		mes "[Maku]";
		mes "Hei, isso aqui é do Benkaistein.";
		mes "Eu não vejo esse cara há muito tempo.";
		mes "Ah, então ele deu isso pra você me dar pra ler?";
		mes "Certo, eu devo a ele um favor ou dois, então...";
		next;
		cutin("",255);
		mes "[Diário de Benkaistein]";
		mes "^856363Hoje, eu, Digotz e Maku jogamos esse jogo maluco de voar.";
		mes "Basicamente, nós fizemos umas asas usando madeira e papel, saltamos desses morros e tentamos voar.";
		mes "Idiota, eu sei.^000000";
		next;
		mes "[Diário de Benkaistein]";
		mes "^856363Hoje foi minha vez de pular e bater os braços com essas asas falsas e mal feitas.";
		mes "Quando se pára pra pensar, não é um jogo divertido.";
		mes "Cara, espero nunca mais fazer isso.^000000 ";
		next;
		cutin("lhz_macu03",2);
		mes "[Maku]";
		mes "O que é que ele está falando!?";
		mes "Esse jogo é super legal!";
		mes "Pois é, eu costumava usar as asas e Digotz sempre queria usar também.";
		next;
		cutin("",255);
		mes "[Diário de Benkaistein]";
		mes "^856363Maku, Digotz e eu saímos da cidade.";
		mes "É claro, não queríamos falar pra ninguém ou íamos ter problemas.";
		mes "Foi um dia bem emocionante.";
		mes "Mas, então, demos de cara com um monstro!^000000";
		next;
		mes "[Diário de Benkaistein]";
		mes "^856363Eu queria fugir, mas Maku e Digotz queriam derrotá-lo pra virarem heróis.";
		mes "Claro, nos machucamos bem feio e o monstro fugiu.";
		mes "Cara, mamãe não ficou nada feliz...^000000 ";
		next;
		cutin("lhz_macu03",2);
		mes "[Maku]";
		mes "Isso mesmo!";
		mes "Naquele tempo, nós três não tínhamos medo de nada!";
		mes "É claro, Digotz era o que mais apanhava.";
		mes "Mas eu preciso dizer que ele também era o mais destemido.";
		next;
		cutin("",255);
		mes "[Diário de Benkaistein]";
		mes "^856363Digotz já está de cama faz três dias.";
		mes "É só um resfriado normal e Maku não pára de falar que a culpa é de Digotz por ter ficado doente.^0000FF";
		mes "^856363Mas ele está sempre me pedindo para ir visitá-lo e ver se ele está bem.^000000";
		next;
		cutin("lhz_macu04",2);
		mes "[Maku]";
		mes "O-O quê?! Não, não estava nem um pouco preocupado!!";
		mes "Isso deve ser quando Digotz pegou uma Climônia.";
		mes "Sabe, aquela, uh, horrível doença.";
		mes "Não, ninguém deveria pegar isso!";
		next;
		cutin("",255);
		mes "[Diário de Benkaistein]";
		mes "^856363Mamãe e papai ficam falando para não sair mais com Maku.";
		mes "É muito idiota eles falarem isso, e eu não ligo se ele é pobre.";
		mes "Ele é um dos caras mais legais que eu conheço.^000000";
		next;
		cutin("lhz_macu01",2);
		mes "[Diário de Benkaistein]";
		mes "^856363A família de Digotz é bem rica e eles também não querem que ele fique saindo com Maku.";
		mes "Mas Digotz nem liga.";
		mes "Eu sei que ele gosta bastante de Maku.^000000";
		next;
		mes "[Maku]";
		mes "...";
		mes "......";
		next;
		cutin("",255);
		mes "[Diário de Benkaistein]";
		mes "^856363Hoje, nós três fizemos um juramento de irmandade, igual ao que a gente leu numa HQ.";
		mes "Juramos ser sempre amigos não importa o que aconteça.";
		mes "Para toda a vida.^000000";
		next;
		cutin("lhz_macu06",2);
		mes "[Maku]";
		mes "Bem, isso é verdade";
		mes "que eu lembre, mas as pessoas";
		mes "mudam! Além disso, nós";
		mes "tiramos a idéia de uma HQ!";
		mes "Bem, se ele se desculpar primeiro, acho que é melhor eu perdoá-lo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bom...";
		mes "Porque Digotz disse que ele está vindo para cá em alguns dias.";
		next;
		cutin("lhz_macu07",2);
		mes "[Maku]";
		mes "O quê?!";
		mes "Ele está vindo mesmo pra cá?";
		mes "Para quê?";
		mes "É tarde ^0000FFdemais^000000 para corrigir as coisas!";
		mes "Mas ele ficará com cara de tacho se eu não for vê-lo.";
		mes "Tá bom, certo!";
		mes "Vou dar uma lição nesse cara quando ele estiver aqui!";
		next;
		mes "[Maku]";
		mes "E, hmm, me dê esse diário!";
		mes "Eu vou ler mais para tirar um sarro da cara de Digotz.";
		mes "Bwahahaha!";
		mes "Mas, hmm, bem, obrigado.";
		mes "Não que eu esteja grato ou... sei lá.";
		cutin("",255);
		next;
		delitem(Friends_Diary,1);
		friendship = 14;
		if (BaseLevel > 90) { getexp(70000,0); }
		else if (BaseLevel > 75) { getexp(40000,0); }
		else { getexp(20000,0); }
		cutin("lhz_macu04",2);
		mes "[Maku]";
		mes "Então, bem, acho que eu vejo você mais tarde.";
		mes "Agora eu preciso mesmo ler isso.";
		mes "^333333(Mas não é para ver Digotz!)^000000";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 14) {
		cutin("lhz_macu05",2);
		mes "[Maku]";
		mes "Porque Digotz está tão atrasado?";
		mes "Ele não é de fazer isso.";
		mes "Deve ter algo errado.";
		close2;
		cutin("",255);
		end;
	} else if (friendship > 14) {
		cutin("lhz_macu07",2);
		mes "[Maku]";
		mes "Porque ele está tão atrasado?";
		mes "Assim que ele aparecer eu juro que vou...!";
		next;
		mes "[Maku]";
		mes "É, ele deve ter alguma razão para estar tão atrasado.";
		mes "Mas se ele não tiver, eu estou guardando um pacote inteiro de doce para abrir só quanto ele chegar.";
		mes "Hehehe!";
		close2;
		cutin("",255);
		end;
	} else {
		mes "[Maku]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à cidade alta de Lighthalzen.";
		mes "Entretanto, acho que esta área não tem muito a oferecer se está buscando agitação.";
		close;
	}
}

// ------------------------------------------------------------------
lhz_in02,201,210,5	script	Digotz#friendship	4_M_LGTMAN,{
	if (friendship == 1) {
		mes "[Digotz]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à parte alta de Lighthalzen.";
		mes "Entretanto, acho que essa área não tem muito a oferecer se você está buscando agitação.";
		next;
		mes "[Digotz]";
		mes "Meu nome é Digotz, sou mais um dos cidadãos da cidade alta de Lighthalzen.";
		mes "Espero que goste de sua estadia na minha cidade.";
		next;
		select("Você conhece alguém chamado Maku?");
		mes "[Digotz]";
		mes "Maku? Maku.";
		mes "Sim, ele é um amigo de infância.";
		mes "Ou era, de qualquer forma agora é apenas um idiota.";
		mes "Seja como for, não podemos nos encontrar, mesmo se quisermos, por muitas razões.";
		next;
		mes "[Digotz]";
		mes "Hei, mas porquê eu ainda estou falando disso?";
		mes "Eu nem ligo se nós dois não somos mais amigos como éramos.";
		mes "Quer saber?";
		mes "Esqueça tudo o que eu disse.";
		friendship = 2;
		changequest(12000,12001);
		close;
	} else if (friendship == 2) {
		mes "[Digotz]";
		mes "O que você está fazendo andando ainda por aqui?";
		mes "Não há nada de interessante na cidade alta para você ver, aventureiro.";
		next;
		mes "[Digotz]";
		mes "Diacho...!";
		mes "Basta escutar sobre Maku que sem razão nenhuma eu já fico irritado!";
		close;
	} else if (friendship == 3) {
		mes "[Digotz]";
		mes "Eu sei que a opulência da cidade alta parece bastante atrativa, mas, acredite, esse lugar é sem graça.";
		mes "Agora, você já visitou o bairro pobre?";
		next;
		select("Sim, já...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, já...";
		mes "E lá conheci um tal de Maku.";
		next;
		mes "[Digotz]";
		mes "Maku?! Ah, ele deve ter dito algo sobre mim.";
		mes "Mas eu não ligo para o que ele diz, a menos que seja uma desculpa por ser um completo idiota.";
		mes "Desde quando a gente era criança...";
		next;
		mes "[Digotz]";
		mes "Deixa pra lá, a gente era chegado, mas esse cara nunca foi meu amigo de verdade!";
		mes "Como daquela vez que ele trapaceou para me vencer no braço de ferro!";
		mes "É só ver que ele nunca me agradeceu por comprar almoço pra gente!";
		next;
		mes "[Digotz]";
		mes "Tá, é verdade que ele me ajudou um pouco quando eu fui encontrar pela primeira vez a minha namorada";
		mes "Mas eu nunca vou perdoá-lo por me mandar para o pior encontro às cegas que alguém já teve!";
		next;
		mes "[Digotz]";
		mes "Maku não sabe nada de amizade!";
		mes "Mesmo se eu ^0000FFquisesse^000000 vê-lo.";
		mes "Tem essas pessoas que não querem que um rico se encontre com pobres.";
		next;
		mes "[Digotz]";
		mes "Se Maku está bem, para mim é tudo o que eu preciso saber!";
		mes "Não preciso ir até lá só para ver como ele está!";
		mes "Eu só lamento uma coisa...";
		next;
		mes "[Digotz]";
		mes "Eu só queria ter tido uma última chance de ver Maku...";
		mes "Assim, eu mesmo poderia dar uns cascudos nele!";
		mes "Ah, isso seria legal!";
		mes "Bastardo arrogante!";
		mes "Porém, eu não posso fazer isso...";
		next;
		mes "[Digotz]";
		mes "Os guardas aqui nunca permitem que ricos e pobres se encontrem, temendo que os pobres perturbem a paz e a ordem da cidade.";
		mes "É uma lei idiota feita por pessoas idiotas.";
		next;
		mes "[Digotz]";
		mes "Ainda assim, é bastante assustador que alguém possa ser punido por violar um tabu tão estúpido, na verdade.";
		mes "De qualquer forma, se você encontrar Maku novamente, mande essa mensagem minha.";
		next;
		mes "[Digotz]";
		mes "^FF0000Seu bastardo incorrigível!";
		mes "Você continua sendo um babaca teimoso!";
		mes "Você ainda me deve pelo menos 3 almoços!";
		mes "Sem falar em uma desculpa!";
		mes "Mas quem liga para o que você pensa?!";
		mes "Eu estou bem melhor sem você!^000000";
		friendship = 4;
		close;
	} else if ((friendship == 4 || friendship == 5)) {
		mes "[Digotz]";
		mes "Ainda conhecendo a cidade alta de Lighthalzen?";
		mes "Não que eu ligue, mas se você por acaso encontrar Maku.";
		mes "Mande uma pequena mensagem para ele, palavra por palavra.";
		next;
		mes "[Digotz]";
		mes "^FF0000Seu bastardo incorrigível!";
		mes "Você continua sendo um babaca teimoso!";
		mes "Você ainda me deve pelo menos 3 almoços!";
		mes "Sem falar em uma desculpa!";
		mes "Mas quem liga para o que você pensa^000000?!";
		close;
	} else if (friendship == 6) {
		mes "[Digotz]";
		mes "Oh, olá, já faz um tempo.";
		mes "O que é que você está fazendo aqui de volta?";
		mes "E, hmm, você entregou aquela mensagem para Maku?";
		mes "Pensando nisso agora, eu fui meio...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu entreguei a mensagem palavra por palavra.";
		mes "E Maku ficou tão bravo, xingou muito e ameaçou dar uma surra bem dada em você.";
		next;
		mes "[Digotz]";
		mes "Aquele imprestável, nojento e fedorento patife!";
		mes "Se não fosse por esses guardas, eu iria no gueto e dava eu mesmo uma surra nele!";
		mes "Que cara estúpido!";
		next;
		mes "[Digotz]";
		mes "É nessas horas que sinto mais falta de ^FF0000Benkaistein^000000.";
		mes "Ele sempre tinha uma boa resposta para esse tipo de situação.";
		mes "Sim, eu acho que ele está estudando em uma cidade bem longe.";
		next;
		mes "[Digotz]";
		mes "Pelo jeito ele está nesse lugar, sei lá como chama, já que deve ter uma tonelada de livros para ler.";
		mes "Mas, sim, Benkaistein sempre foi o mediador...";
		next;
		mes "[Digotz]";
		mes "Mesmo naquela época, quando eu, ele e Maku saíamos juntos, sempre era Benkaistein quem punha um fim nas nossas discussões.";
		mes "Mas, mesmo assim, agora nem ele pode fazer algo...";
		friendship = 7;
		changequest(12002,12003);
		next;
		mes "[Digotz]";
		mes "Eu não sei porquê, mas eu estou tão bravo!";
		mes "Porque eu fico estressado com isso?";
		close;
	} else if (friendship == 7) {
		mes "[Digotz]";
		mes "Mesmo se Benkaistein voltar de sei lá onde ele foi estudar.";
		mes "Eu não acho que ele possa fazer o Maku pedir desculpas para mim.";
		mes "Aquele cara é simplesmente muito teimoso pra isso!";
		close;
	} else if ((friendship == 12 && countitem(Friends_Diary) > 0)) {
		mes "[Digotz]";
		mes "Mesmo se Benkaistein voltar, eu não acho que eu posso perdoar Maku.";
		mes "Na verdade, sabe de uma coisa?";
		mes "Eu acho que ficaria maluco!";
		next;
		if (select("Mostre o Diário de Benkaistein","Não mostre o Diário de Benkaistein") == 1) {
			mes "[Digotz]";
			mes "Porque eu estou tão irritado?";
			mes "^3355FF*Suspiro*^3355FF";
			mes "Você tem algo para me mostrar?";
			mes "Hã? O Benkaistein quer que eu leia o seu diário?";
			mes "Claro, por que não?";
			mes "Nesses anos todos eu devo muito a ele...";
			next;
			mes "[Diário de Benkaistein]";
			mes "^856363Hoje, eu, Digotz e Maku jogamos esse jogo maluco de voar.";
			mes "Basicamente, nós fizemos umas asas usando madeira e papel, saltamos desses morros e tentamos voar.";
			mes "Idiota, eu sei.^000000";
			next;
			mes "[Diário de Benkaistein]";
			mes "^856363Hoje foi minha vez de pular e bater os braços com essas asas falsas e mal feitas.";
			mes "Quando se pára pra pensar, não é um jogo divertido.";
			mes "Cara, espero nunca mais fazer isso.^000000 ";
			next;
			mes "[Digotz]";
			mes "Ah sim, eu me lembro disso!";
			mes "Na maioria das vezes era Maku quem usava as asas, mas eu ainda tenho o recorde de ficar mais tempo no ar!";
			mes "É, eu era um Garoto Pégaso bem passável... ";
			next;
			mes "[Diário de Benkaistein]";
			mes "^856363Maku, Digotz e eu saímos da cidade.";
			mes "É claro, não queríamos falar pra ninguém ou íamos ter problemas.";
			mes "Foi um dia bem emocionante.";
			mes "Mas, então, demos de cara com um monstro!^000000 ";
			next;
			mes "[Diário de Benkaistein]";
			mes "^856363Eu queria fugir, mas Maku e Digotz queriam derrotá-lo prá virarem heróis.";
			mes "Claro, nos machucamos bem feio e o monstro fugiu.";
			mes "Cara, mamãe não ficou nada feliz...^000000 ";
			next;
			mes "[Digotz]";
			mes "Hmm. Eu não me lembro bem disso.";
			mes "Mas eu sei que Benkaistein, eu e Maku não tínhamos medo de nada naquela época.";
			mes "A gente devia estar ^0000FFmaluco^000000 para lutar com um monstro.";
			next;
			mes "[Diário de Benkaistein]";
			mes "^856363Digotz já está de cama faz três dias.";
			mes "É só um resfriado normal e Maku não pára de falar que a culpa é de Digotz por ter ficado doente.^0000FF";
			mes "^856363Mas ele está sempre me pedindo para ir visitá-lo e ver se ele está bem.^000000";
			next;
			mes "[Digotz]";
			mes "Eu acho que eu lembro que fiquei bem doente.";
			mes "Maku estava preocupado?";
			mes "Eu... Eu devo ter aprontado muito porque foi bem difícil sair da cama daquela vez.";
			mes "Sabe?";
			mes "Eu não era de ficar de cama.";
			next;
			mes "[Diário de Benkaistein]";
			mes "^856363Mamãe e papai ficam falando para não sair mais com Maku.";
			mes "É muito idiota eles falarem isso, e eu não ligo se ele é pobre.";
			mes "Ele é um dos caras mais legais que eu conheço.^000000";
			next;
			mes "[Diário de Benkaistein]";
			mes "^856363A família de Digotz é bem rica e eles também não querem que ele fique saindo com Maku.";
			mes "Mas Digotz nem liga.";
			mes "Eu sei que ele gosta bastante de Maku.^000000";
			next;
			mes "[Digotz]";
			mes "Bem, a gente era bem jovem e bastante chegado naquela época, então...";
			mes "^333333*Ahã!*^000000";
			mes "Quando foi que Benkaistein escreveu isso?!";
			next;
			mes "[Diário de Benkaistein]";
			mes "^856363Hoje, nós três fizemos um juramento de irmandade, igual ao que a gente leu numa HQ.";
			mes "Juramos ser sempre amigos não importa o que aconteça.";
			mes "Para toda a vida.^000000";
			next;
			mes "[Digotz]";
			mes "Eu... Eu fui forçado a fazer esse juramento!";
			mes "E as pessoas mudam, não é?";
			mes "Quero dizer, a gente não passava de garoto, não é como um juramento de verdade que tem significado como agora, né?";
			next;
			mes "[Digotz]";
			mes "Já chega.";
			mes "Vou ver Maku.";
			mes "Eu não sinto falta dele, mas vou lá para cancelar esse juramento.";
			mes "E talvez eu dê uma surra nele só pra variar.";
			friendship = 13;
			close;
		} else {
			mes "[Digotz]";
			mes "Não entendo";
			mes "porque eu estou tão irritado!";
			mes "Eu estou começando a agir";
			mes "como o Maku... quer dizer,";
			mes "não me entenda mal, não ";
			mes "é que eu ligue pra esse cara.";
			close;
		}
	} else if (friendship == 13) {
		mes "[Digotz]";
		mes "Calma aí, eu preciso me aprontar!";
		mes "O Maku vai tirar sarro de mim se eu parecer muito rico e mimado.";
		mes "Onde foi que eu coloquei aquelas roupas mais surradas?";
		close;
	} else if (friendship == 14) {
		if (!checkweight(Knife,1)) {
			mes "[Digotz]";
			mes "Você não acha que está carregando muitos itens?";
			mes "Porque não deixa alguns no armazém depois venha me ver...";
			close;
		} else {
			mes "^3355FFDigotz está seriamente ferido pela faca que ainda está enterrada na sua barriga.^000000 ";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Digotz...?";
			mes "Oh não, deixe-me ajudá-lo!";
			next;
			mes "[Digotz]";
			mes "Ei...! É você?";
			mes "Aquele Maku.";
			mes "Ele sempre me deu azar...";
			mes "É muito tarde para mim e eu não tenho muito tempo...";
			next;
			mes "[Digotz]";
			mes "Esses guardas que eu falei para você...";
			mes "Aqueles que não querem que os ricos e os pobre se misturem?";
			mes "Eu... acho que eles descobriram que eu ia encontrar o meu velho amigo.";
			mes "Eu só queria vê-lo...";
			next;
			mes "[Digotz]";
			mes "Esse cara... vestido de preto...";
			mes "Ele... Ele me esfaqueou!";
			mes "Eu... Céus.";
			mes "Faz tanto tempo que eu não falo com ele.";
			mes "Nós íamos nos ver e nos ^0000FFdivertir^000000, como nos velhos tempos.";
			next;
			mes "[Digotz]";
			mes "Eu senti falta de meus amigos, mas agora...";
			mes "Agora posso escutá-los me chamando.";
			mes "Agora poderemos ficar todos juntos como tínhamos prometido.";
			mes "Sim...";
			mes "Eu estava errado.";
			mes "A vida é muito curta para ficar bravo com um ami...";
			next;
			mes "[Digotz]";
			mes "..............";
			next;
			mes "[Digotz]";
			mes "..............";
			mes ".......................";
			next;
			mes "[Digotz]";
			mes "..............";
			mes ".......................";
			mes "...............................";
			next;
			mes "^3355FFDigotz parou de respirar.";
			mes "Você remove a Faca do seu corpo sem vida como cortesia a um homem que ousou amar seus amigos.^000000 ";
			next;
			friendship = 15;
			changequest(12005,12006);
			getitem(Knife,1);
			close;
		}
	} else if (friendship > 14) {
		mes "^3355FFDigotz faleceu, mas seu olhar está em paz e ele parece ter morrido contente.^000000 ";
		close;
	} else {
		mes "[Digotz]";
		mes "Oh, um aventureiro!";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à parte alta de Lighthalzen.";
		mes "Entretanto, acho que essa área não tem muito a oferecer se está buscando agitação.";
		next;
		mes "[Digotz]";
		mes "Fique à vontade para olhar por aí se quiser.";
		mes "Na verdade, eu estou contente de ver alguém diferente dos esnobes e ricos que vivem aqui.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in04,107,14,5	script	Estudante#friendship	4_M_SAGE_A,{
	if (friendship == 7 || friendship == 8) {
		mes "[Joey Choryee]";
		mes "Essa é uma área de estudos, então não fale, não ande, nem mesmo respire alto.";
		mes "Claro que tem uns, como Benkaistein, que se desligam do mundo quando estão estudando a sério...";
		next;
		friendship = 8;
		mes "[Joey Choryee]";
		mes "Benkaistein...?";
		mes "Ele fica na parte norte dessa sala.";
		mes "É um cara bem legal, mas um tanto sacal.";
		mes "Sabe aqueles chatos que organizam e etiquetam tudo?";
		mes "É ele.";
		close;
	} else if (friendship == 8) {
		mes "[Joey Choryee]";
		mes "Benkaistein...?";
		mes "Ele fica na parte norte dessa sala.";
		mes "É um cara bem legal, mas um tanto sacal.";
		mes "Sabe aqueles chatos que organizam e etiquetam tudo?";
		mes "É ele.";
		close;
	} else {
		mes "[Joey Choryee]";
		mes "Dano de propriedade. Hmm.";
		mes "Tem a ver com raios e fogo e água e coisas desse tipo?";
		mes "Aqui eu pensei que significava, não sei, prédio sendo derrubado ou algo do gênero.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in04,96,106,5	script	Estudante Dedicado#friendship	4_M_SAGE_A,{
	if (friendship == 8) {
		mes "[Estudante Dedicado]";
		mes "Agora, deixe-me ver.";
		mes "Vento Mágico, Magia Negra, Porings, ah, aqui está.";
		mes "Propriedades de raça de monstro.";
		mes "Espero que aqui tenha todas as informações que eu preciso...";
		next;
		mes "^3355FFDepois de um olhar rápido nas coisas do estudante, você percebe que o nome 'Benkaistein' está escrito nelas.";
		mes "Esse é o amigo que Maku e Digotz falaram.^000000 ";
		next;
		select("Com licença...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença...";
		mes "Benkaistein?";
		next;
		mes "[Estudante Dedicado]";
		mes "... O mundo dos humanos e o mundo dos demônios, sim, sim...";
		mes "Não, o que eu estou procurando é uma referência aos céus ou a Asfgard.";
		mes "Hmm, isso deve ajudar...";
		next;
		select("Ei...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei...";
		mes "Você ai.";
		mes "Benkaistein!";
		next;
		mes "[Estudante Dedicado]";
		mes "...Ah, essa é uma observação muito interessante.";
		mes "Se eu puder incorporá-la na minha tese sem me dar muito trabalho, minhas conclusão ficaria muito mais sólida...";
		next;
		select("EI VOCÊ...!");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "BENKAISTEIN...!";
		next;
		mes "[Estudante Dedicado]";
		mes "Oh, céus!";
		mes "S-será que pode falar mais baixo?";
		mes "E-estou tentando estudar!";
		mes "Hm, espere ai.";
		mes "Você estava me chamando todo esse tempo?";
		friendship = 9;
		close;
	} else if (friendship == 9) {
		mes "[Estudante Dedicado]";
		mes "Oh, você me assustou!";
		mes "Mas isso sempre acontece.";
		mes "É difícil chamar a minha atenção quando eu me concentro em um livro.";
		mes "Então, como posso ajudá-lo, aventureiro?";
		next;
		select("Conte a ele sobre Maku e Digotz");
		mes "[Benkaistein]";
		mes "Ah, como estão meus amigos?";
		mes "Oh, o quê?";
		mes "Eles estão brigando só porque um é rico e o outro é pobre?";
		mes "Mas que criancice!";
		next;
		mes "[Benkaistein]";
		mes "Mas também, eles sempre foram assim.";
		mes "*Suspiro*";
		mes "Eu realmente queria voltar para casa e fazer esses dois se entenderem, mas eu também preciso terminar essa tese.";
		mes "Vamos ver...";
		mes "O que é que eu posso fazer daqui?";
		next;
		friendship = 10;
		changequest(12003,12004);
		mes "[Benkaistein]";
		mes "Ah, já sei o que posso fazer!";
		mes "Espere um pouco, onde foi que eu coloquei?";
		mes "Ah, como foi que eu pude perder algo tão importante?";
		mes "Poderia esperar um minutinho enquanto eu procuro uma coisa?";
		close;
	} else if ((friendship == 10 || friendship == 11)) {
		mes "[Benkaistein]";
		mes "Ah, que droga, isso está sendo muito mais demorado do que eu esperava.";
		mes "Onde foi que eu coloquei aquele negócio?";
		mes "Hmmmm...";
		next;
		mes "^3355FFTalvez fosse melhor tentar ajudar Benkainstein a procurar seja lá o que for que ele está tentando achar.^000000 ";
		close;
	} else if ((friendship == 11 && countitem(Friends_Diary) > 0)) {
		mes "[Benkaistein]";
		mes "Ah que droga, isso está sendo muito mais demorado do que eu esperava.";
		mes "Onde foi que eu coloquei aquele negócio?";
		mes "Hmmmm...";
		next;
		mes "[Benkaistein]";
		mes "Ah, é esse?";
		mes "Você encontrou o meu diário?";
		mes "Vamos, deixe-me ver. Sim, sim...";
		mes "É esse mesmo!";
		mes "Obrigado por achá-lo para mim!";
		next;
		mes "[Benkaistein]";
		mes "Você poderia me fazer um favor?";
		mes "Seria melhor se eu mesmo fosse falar com eles, mas estou muito ocupado trabalhando nessa tese...";
		next;
		mes "[Benkaistein]";
		mes "Você poderia dar esse diário para Digotz e Maku?";
		mes "Eu o escrevi quando nós éramos bem jovens, então isso deve fazer com que eles lembrem dos bons tempos que tivemos juntos.";
		next;
		friendship = 12;
		changequest(12004,12005);
		close;
	} else if (friendship == 15) {
		if (!checkweight(Pass,1)) {
			mes "[Benkaistein]";
			mes "Parece que você está levando muito peso com você.";
			mes "Guarde alguns de seus itens, depois venha falar comigo.";
			close;
		} else {
			mes "[Benkaistein]";
			mes "Você conseguiu levar o meu diário para Digotz e Maku?";
			mes "Tenho certeza que o diário fez com que eles lembrassem dos bom tempos que tivemos juntos.";
			mes "Eu sei que eles podem ser bastante teimosos...";
			next;
			mes "[Benkaistein]";
			mes "De qualquer forma, eu agradeço muito toda a sua ajuda.";
			mes "Estou ansioso para ver os dois juntos de novo quando eu voltar para casa.";
			next;
			mes "[Benkaistein]";
			mes "Até lá, eu preciso pesquisar, terminar a minha tese e completar meus objetivos acadêmicos.";
			mes "Ah, e como agradecimento, tome esse ^0000FFpasse^000000 que permite entrar e sair das ^0000FFáreas rica e pobre^000000.";
			next;
			friendship = 16;
			completequest(12006);
			if (BaseLevel > 90) { getexp(70000,0); }
			else if (BaseLevel > 75) { getexp(40000,0); }
			else { getexp(20000,0); }
			getitem(Pass,1);
			mes "[Benkaistein]";
			mes "De todo modo, desejo";
			mes "sorte nas suas viagens,";
			mes "aventureiro. Quando nós três";
			mes "voltarmos a nos encontrar,";
			mes "eu garanto que você ficará sabendo!";
			close;
		}
	} else {
		mes "[Estudante Dedicado]";
		mes "Agora, deixe-me ver.";
		mes "Vento Mágico, Magia Negra, Porings, ah, aqui está.";
		mes "Propriedades de raça de monstro.";
		mes "Espero que aqui tenha todas as informações que eu preciso...";
		next;
		mes "^3355FFEsse estudante parece estar concentrado em uma intensa pesquisa de alguma matéria acadêmica.";
		mes "Por enquanto, é melhor deixá-lo sozinho para ele poder estudar.^000000";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in04,168,117,3	script	Livro#friendship	HIDDEN_NPC,{
	if (friendship == 11) {
		mes "^3355FFNão há nada aqui que você realmente precise.^000000 ";
		close;
	} else if (friendship == 10) {
		friendship = 11;
		getitem(Friends_Diary,1);
		mes "^3355FFO título deste livro é ";
		mes "''Diário de Benkaistein";
		mes "'Volume 6'.";
		mes "Provavelmente é isso que Benkaistein estava tentando encontrar, então deve ser melhor mostrar a ele.^000000 ";
		close;
	} else {
		mes "^3355FFAgora, não há nada que seja interessante por aqui.^000000";
		close;
	}
}
