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
| - Info: Quest da Amizade                                          |
| * Pr� requisito para quest do Desaparecimento de Bruspetti        |
\*-----------------------------------------------------------------*/

lighthalzen,337,232,3	script	Maku#friendship	4_M_LGTPOOR,{
	if (BaseLevel < 50) {
		mes "[Maku]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � cidade alta de Lighthalzen.";
		mes "Entretanto, acho que esta �rea n�o tem muito a oferecer se est� buscando agita��o.";
		next;
		mes "[Maku]";
		mes "Sem querer ser rude, longe disso, mas essa cidade deve ser bastante segura para voc� explor�-la.";
		mes "Quero dizer, voc� parece ser um aventureiro meio novato...";
		close;
	} else if (!friendship) {
		cutin("lhz_macu01",2);
		mes "[Maku]";
		mes "Hei, voc� � um desses aventureiros, n�?";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao gueto.";
		mes "Aqui n�o acontece muita coisa, mas, hei, fique a vontade para explorar o que quiser.";
		next;
		mes "[Maku]";
		mes "Eu n�o sei se voc� sabe, mas as pessoas que vivem aqui n�o t�m permiss�o para explorar toda a cidade.";
		mes "� meio tabu falar disso, mas...";
		mes "E eu com isso, n�?";
		next;
		mes "[Maku]";
		mes "�, basicamente as pessoas ricas t�m muito medo de as pessoas pobres irem l� visit�-las.";
		mes "Por isso a seguran�a na cidade � t�o forte!";
		mes "Esses caras da ^0000FFalta sociedade^000000 s�o um lixo...";
		next;
		mes "[Maku]";
		mes "Eu n�o pensava assim.";
		mes "Na verdade, at� tinha um amigo bastante rico at� que eu descobri que ele n�o era o que eu pensava.";
		mes "Aquele idiota!";
		mes "Quem ele pensa que �?!";
		next;
		mes "[Maku]";
		mes "Ah, desculpe.";
		mes "O que � que voc� tem a ver com minha vida pessoal, n�o �?";
		mes "Claro, todo mundo acaba falando do pr�prio umbigo...";
		friendship = 1;
		setquest(12000);
		next;
		mes "[Maku]";
		mes "Bem, quando ficar entediado do gueto, deveria dar uma olhada na parte rica da cidade.";
		mes "Posso ser ranzinza, mas admito que � mais agrad�vel do que aqui.";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 1) {
		cutin("lhz_macu01",2);
		mes "[Maku]";
		mes "Ah, desculpe.";
		mes "O que � que voc� tem a ver com minha vida pessoal, n�o �?";
		mes "Claro, todo mundo acaba falando do pr�prio umbigo...";
		next;
		mes "[Maku]";
		mes "Bem, quando ficar entediado do gueto, deveria dar uma olhada na parte rica da cidade.";
		mes "Posso ser ranzinza, mas admito que � mais agrad�vel do que aqui.";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 2) {
		mes "[Maku]";
		mes "Hei, o que voc� faz de novo aqui?";
		mes "Eu pensei que eu tinha dito para ir ver a cidade alta de Lighthalzen.";
		mes "Aqui � meio decadente...";
		next;
		select("Na verdade eu encontrei Digotz e...");
		cutin("lhz_macu05",2);
		mes "[Maku]";
		mes "Voc� o qu�...?!";
		mes "Voc� viu meu velho amigo, Digotz?!";
		mes "Er, quero dizer, Senhor Alexander Digotz, que costumava ser meu amigo, mas obviamente n�o � mais.";
		next;
		cutin("lhz_macu05",255);
		cutin("lhz_macu02",2);
		mes "[Maku]";
		mes "Claro, a gente era bem chegado, mas isso foi h� muito tempo.";
		mes "Faz tempo que cada um foi para um lado e ele provavelmente me odeia por ser um p� rapado...";
		friendship = 3;
		changequest(12001,12002);
		next;
		mes "[Maku]";
		mes "Claro, a gente era bem chegado, mas isso foi h� muito tempo.";
		mes "Faz tempo que cada um foi para um lado e ele provavelmente me odeia por ser um p� rapado...";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 3) {
		cutin("lhz_macu03",2);
		mes "[Maku]";
		mes "Cara, eu preciso esfriar a cabe�a!";
		mes "� verdade que eu e o Digotz �ramos amigos antes e pode parecer que a gente ainda �.";
		mes "Mas n�o somos n�o, apesar que a gente era como unha e carne!";
		next;
		mes "[Maku]";
		mes "N�o me leve a mal, eu n�o sinto falta dele ou qualquer coisa do g�nero e n�o me ^0000FFarrependo^000000 do que aconteceu.";
		mes "Mas se ele pedir desculpas, provavelmente eu aceitarei, sabe.";
		next;
		mes "[Maku]";
		mes "T�, pensando bem claro que sim.";
		mes "Quero dizer, ei n�o sou";
		mes "de guardar rancor.";
		mes "� tudo culpa dele!";
		mes "Nem fala!";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 4) {
		cutin("lhz_macu05",2);
		mes "[Maku]";
		mes "O que diabos voc� ainda est� fazendo por aqui?";
		mes "Voc� deve ter algo melhor para fazer do que conversar com um rufi�o como eu ou com aquele idiota esnobe do Digotz.";
		next;
		select("Falando nele...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Falando nele...";
		mes "Eu conversei de novo com Digotz.";
		mes "Ele me disse para dar um recado para voc�, mas eu n�o sei se...";
		next;
		mes "[Maku]";
		mes "Falando nele...";
		mes "Eu conversei de novo com Digotz.";
		mes "Ele me disse para dar um recado para voc�, mas eu n�o sei se...";
		next;
		input(.@input$);
		if (.@input$ == "Seu bastardo incorrig�vel!") {
			mes "[Maku]";
			mes "''Seu bastardo incorrig�vel?!''";
			mes "Bem, pelo menos ele teve coragem para disser isso.";
			mes "Mesmo sendo por meio de outra pessoa.";
			mes "O que mais ele tem a dizer?!";
			next;
			input(.@input$);
			if (.@input$ == "Voc� continua sendo um babaca teimoso!") {
				mes "[Maku]";
				mes "''Babaca teimoso?!''";
				mes "� preciso ser um para reconhecer outro bastardo!";
				mes "Porque eu tenho que...";
				mes "Grrr!";
				mes "O que mais ele disse?!";
				next;
				input(.@input$);
				if (.@input$ == "Voc� ainda me deve pelo menos 3 almo�os!") {
					mes "[Maku]";
					mes "Tr�s almo�os?!";
					mes "Eu paguei o almo�o desse cara umas quinze vezes!";
					mes "Estou te falando, esse cara n�o sabe o que � amizade!";
					mes "O que mais aquele est�pido disse?!";
					next;
					input(.@input$);
					if (.@input$ == "Sem falar em uma desculpa!") {
						cutin("lhz_macu05",255);
						mes "[Maku]";
						mes "Eu me desculpar?!";
						mes "Ele que deveria estar de joelhos implorando pela droga do meu perd�o!";
						mes "Mas que...";
						mes "Que ego�sta est�pido imprest�vel...";
						mes "O q-que mais ele disse pra voc�?!";
						next;
						input(.@input$);
						if (.@input$ == "Mas quem liga para o que voc� pensa?!") {
							mes "[Maku]";
							mes "''Quem liga para o que eu penso?!''";
							mes "GRRRAAAH!! Quem liga para o que eu penso!!";
							mes "^333333*Ofegante*^000000";
							mes "Eu vou fazer picadinho daquele idiota detest�vel!";
							mes "N�o tem como eu ficar mais bravo do que estou agora!";
							next;
							input(.@input$);
							if (.@input$ == "Eu estou bem melhor sem voc�!") {
								friendship = 5;
								cutin("lhz_macu06",2);
								mes "[Maku]";
								mes "� isso, est� decidido.";
								mes "Da pr�xima vez que eu encontrar Digotz, eu vou esfregar a cara dele no ch�o.";
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
		mes "O qu�...?";
		mes "Eu n�o acho que Digotz diria uma coisa dessa.";
		mes "Tem certeza que escutou direito?";
		mes "J� faz um tempo, mas eu conhe�o o Digotz, cara.";
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
		mes "Parece que Maku est� tendo um ataque de raiva.^000000";
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
		mes "Quem � que ele pensa que � para me dizer esse tipo de coisa!?";
		mes "Digotz, voc� n�o vai se livrar disso!";
		mes "Vou acabar com voc�!";
		next;
		mes "^3355FFMaku fica vermelho e explode numa raiva pura e violenta.";
		mes "Depois de um tempo voc� consegue acalm�-lo.";
		mes "Mas quase acaba ^0000FFse matando^3355FF tentando aplacar a f�ria dele.^000000 ";
		percentheal(-50,0);
		next;
		mes "[Maku]";
		mes "^333333*Ofegante* *ufa!*^000000";
		mes "N-n�o se preocupe, agora eu me controlo.";
		mes "Obrigado por n�o me deixar perder a cabe�a.";
		mes "� nessas horas que eu realmente sinto falta de ^FF0000Benkaistein^000000.";
		next;
		mes "[Maku]";
		mes "Benkaistein sempre tentava fazer eu desistir das brigas.";
		mes "Eu sinto falta mesmo daquele cara.";
		mes "Mas, ele n�o est� mais por aqui...";
		next;
		friendship = 6;
		mes "[Maku]";
		mes "Droga de guardas!";
		mes "Se eles n�o estivessem por aqui, eu poderia ir l� e dar uma li��o em Digotz!";
		mes "Eu juro que se n�o fosse por eles...!";
		close2;
		cutin("",255);
		end;
	} else if (friendship > 5 && friendship < 13) {
		cutin("lhz_macu06",2);
		mes "[Maku]";
		mes "Arrrrgh! Sempre que eu escuto sobre Digotz, eu acabo irritado!";
		mes "� aquele cara que me deu o fora s� porque eu n�o sou rico como ele?!";
		next;
		mes "[Maku]";
		mes "N�o posso...";
		mes "N�o posso nem mesmo dar uma surra direito nele por causa desses guardas desgra�ados!";
		mes "Arrrrrrrgh!";
		mes "Cara, onde est� Benkaistein quando eu preciso dele?";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 13 && countitem(Friends_Diary) > 0) {
		cutin("lhz_macu06",2);
		mes "[Maku]";
		mes "Hei, o que � isso?";
		mes "Voc� quer que eu leia esse di�rio?";
		mes "Hm, certo, mas eu n�o acho direito ler o di�rio de algu�m.";
		mes "� meio assustador, sabe?";
		next;
		mes "[Maku]";
		mes "Hei, isso aqui � do Benkaistein.";
		mes "Eu n�o vejo esse cara h� muito tempo.";
		mes "Ah, ent�o ele deu isso pra voc� me dar pra ler?";
		mes "Certo, eu devo a ele um favor ou dois, ent�o...";
		next;
		cutin("",255);
		mes "[Di�rio de Benkaistein]";
		mes "^856363Hoje, eu, Digotz e Maku jogamos esse jogo maluco de voar.";
		mes "Basicamente, n�s fizemos umas asas usando madeira e papel, saltamos desses morros e tentamos voar.";
		mes "Idiota, eu sei.^000000";
		next;
		mes "[Di�rio de Benkaistein]";
		mes "^856363Hoje foi minha vez de pular e bater os bra�os com essas asas falsas e mal feitas.";
		mes "Quando se p�ra pra pensar, n�o � um jogo divertido.";
		mes "Cara, espero nunca mais fazer isso.^000000 ";
		next;
		cutin("lhz_macu03",2);
		mes "[Maku]";
		mes "O que � que ele est� falando!?";
		mes "Esse jogo � super legal!";
		mes "Pois �, eu costumava usar as asas e Digotz sempre queria usar tamb�m.";
		next;
		cutin("",255);
		mes "[Di�rio de Benkaistein]";
		mes "^856363Maku, Digotz e eu sa�mos da cidade.";
		mes "� claro, n�o quer�amos falar pra ningu�m ou �amos ter problemas.";
		mes "Foi um dia bem emocionante.";
		mes "Mas, ent�o, demos de cara com um monstro!^000000";
		next;
		mes "[Di�rio de Benkaistein]";
		mes "^856363Eu queria fugir, mas Maku e Digotz queriam derrot�-lo pra virarem her�is.";
		mes "Claro, nos machucamos bem feio e o monstro fugiu.";
		mes "Cara, mam�e n�o ficou nada feliz...^000000 ";
		next;
		cutin("lhz_macu03",2);
		mes "[Maku]";
		mes "Isso mesmo!";
		mes "Naquele tempo, n�s tr�s n�o t�nhamos medo de nada!";
		mes "� claro, Digotz era o que mais apanhava.";
		mes "Mas eu preciso dizer que ele tamb�m era o mais destemido.";
		next;
		cutin("",255);
		mes "[Di�rio de Benkaistein]";
		mes "^856363Digotz j� est� de cama faz tr�s dias.";
		mes "� s� um resfriado normal e Maku n�o p�ra de falar que a culpa � de Digotz por ter ficado doente.^0000FF";
		mes "^856363Mas ele est� sempre me pedindo para ir visit�-lo e ver se ele est� bem.^000000";
		next;
		cutin("lhz_macu04",2);
		mes "[Maku]";
		mes "O-O qu�?! N�o, n�o estava nem um pouco preocupado!!";
		mes "Isso deve ser quando Digotz pegou uma Clim�nia.";
		mes "Sabe, aquela, uh, horr�vel doen�a.";
		mes "N�o, ningu�m deveria pegar isso!";
		next;
		cutin("",255);
		mes "[Di�rio de Benkaistein]";
		mes "^856363Mam�e e papai ficam falando para n�o sair mais com Maku.";
		mes "� muito idiota eles falarem isso, e eu n�o ligo se ele � pobre.";
		mes "Ele � um dos caras mais legais que eu conhe�o.^000000";
		next;
		cutin("lhz_macu01",2);
		mes "[Di�rio de Benkaistein]";
		mes "^856363A fam�lia de Digotz � bem rica e eles tamb�m n�o querem que ele fique saindo com Maku.";
		mes "Mas Digotz nem liga.";
		mes "Eu sei que ele gosta bastante de Maku.^000000";
		next;
		mes "[Maku]";
		mes "...";
		mes "......";
		next;
		cutin("",255);
		mes "[Di�rio de Benkaistein]";
		mes "^856363Hoje, n�s tr�s fizemos um juramento de irmandade, igual ao que a gente leu numa HQ.";
		mes "Juramos ser sempre amigos n�o importa o que aconte�a.";
		mes "Para toda a vida.^000000";
		next;
		cutin("lhz_macu06",2);
		mes "[Maku]";
		mes "Bem, isso � verdade";
		mes "que eu lembre, mas as pessoas";
		mes "mudam! Al�m disso, n�s";
		mes "tiramos a id�ia de uma HQ!";
		mes "Bem, se ele se desculpar primeiro, acho que � melhor eu perdo�-lo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bom...";
		mes "Porque Digotz disse que ele est� vindo para c� em alguns dias.";
		next;
		cutin("lhz_macu07",2);
		mes "[Maku]";
		mes "O qu�?!";
		mes "Ele est� vindo mesmo pra c�?";
		mes "Para qu�?";
		mes "� tarde ^0000FFdemais^000000 para corrigir as coisas!";
		mes "Mas ele ficar� com cara de tacho se eu n�o for v�-lo.";
		mes "T� bom, certo!";
		mes "Vou dar uma li��o nesse cara quando ele estiver aqui!";
		next;
		mes "[Maku]";
		mes "E, hmm, me d� esse di�rio!";
		mes "Eu vou ler mais para tirar um sarro da cara de Digotz.";
		mes "Bwahahaha!";
		mes "Mas, hmm, bem, obrigado.";
		mes "N�o que eu esteja grato ou... sei l�.";
		cutin("",255);
		next;
		delitem(Friends_Diary,1);
		friendship = 14;
		if (BaseLevel > 90) { getexp(70000,0); }
		else if (BaseLevel > 75) { getexp(40000,0); }
		else { getexp(20000,0); }
		cutin("lhz_macu04",2);
		mes "[Maku]";
		mes "Ent�o, bem, acho que eu vejo voc� mais tarde.";
		mes "Agora eu preciso mesmo ler isso.";
		mes "^333333(Mas n�o � para ver Digotz!)^000000";
		close2;
		cutin("",255);
		end;
	} else if (friendship == 14) {
		cutin("lhz_macu05",2);
		mes "[Maku]";
		mes "Porque Digotz est� t�o atrasado?";
		mes "Ele n�o � de fazer isso.";
		mes "Deve ter algo errado.";
		close2;
		cutin("",255);
		end;
	} else if (friendship > 14) {
		cutin("lhz_macu07",2);
		mes "[Maku]";
		mes "Porque ele est� t�o atrasado?";
		mes "Assim que ele aparecer eu juro que vou...!";
		next;
		mes "[Maku]";
		mes "�, ele deve ter alguma raz�o para estar t�o atrasado.";
		mes "Mas se ele n�o tiver, eu estou guardando um pacote inteiro de doce para abrir s� quanto ele chegar.";
		mes "Hehehe!";
		close2;
		cutin("",255);
		end;
	} else {
		mes "[Maku]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � cidade alta de Lighthalzen.";
		mes "Entretanto, acho que esta �rea n�o tem muito a oferecer se est� buscando agita��o.";
		close;
	}
}

// ------------------------------------------------------------------
lhz_in02,201,210,5	script	Digotz#friendship	4_M_LGTMAN,{
	if (friendship == 1) {
		mes "[Digotz]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � parte alta de Lighthalzen.";
		mes "Entretanto, acho que essa �rea n�o tem muito a oferecer se voc� est� buscando agita��o.";
		next;
		mes "[Digotz]";
		mes "Meu nome � Digotz, sou mais um dos cidad�os da cidade alta de Lighthalzen.";
		mes "Espero que goste de sua estadia na minha cidade.";
		next;
		select("Voc� conhece algu�m chamado Maku?");
		mes "[Digotz]";
		mes "Maku? Maku.";
		mes "Sim, ele � um amigo de inf�ncia.";
		mes "Ou era, de qualquer forma agora � apenas um idiota.";
		mes "Seja como for, n�o podemos nos encontrar, mesmo se quisermos, por muitas raz�es.";
		next;
		mes "[Digotz]";
		mes "Hei, mas porqu� eu ainda estou falando disso?";
		mes "Eu nem ligo se n�s dois n�o somos mais amigos como �ramos.";
		mes "Quer saber?";
		mes "Esque�a tudo o que eu disse.";
		friendship = 2;
		changequest(12000,12001);
		close;
	} else if (friendship == 2) {
		mes "[Digotz]";
		mes "O que voc� est� fazendo andando ainda por aqui?";
		mes "N�o h� nada de interessante na cidade alta para voc� ver, aventureiro.";
		next;
		mes "[Digotz]";
		mes "Diacho...!";
		mes "Basta escutar sobre Maku que sem raz�o nenhuma eu j� fico irritado!";
		close;
	} else if (friendship == 3) {
		mes "[Digotz]";
		mes "Eu sei que a opul�ncia da cidade alta parece bastante atrativa, mas, acredite, esse lugar � sem gra�a.";
		mes "Agora, voc� j� visitou o bairro pobre?";
		next;
		select("Sim, j�...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, j�...";
		mes "E l� conheci um tal de Maku.";
		next;
		mes "[Digotz]";
		mes "Maku?! Ah, ele deve ter dito algo sobre mim.";
		mes "Mas eu n�o ligo para o que ele diz, a menos que seja uma desculpa por ser um completo idiota.";
		mes "Desde quando a gente era crian�a...";
		next;
		mes "[Digotz]";
		mes "Deixa pra l�, a gente era chegado, mas esse cara nunca foi meu amigo de verdade!";
		mes "Como daquela vez que ele trapaceou para me vencer no bra�o de ferro!";
		mes "� s� ver que ele nunca me agradeceu por comprar almo�o pra gente!";
		next;
		mes "[Digotz]";
		mes "T�, � verdade que ele me ajudou um pouco quando eu fui encontrar pela primeira vez a minha namorada";
		mes "Mas eu nunca vou perdo�-lo por me mandar para o pior encontro �s cegas que algu�m j� teve!";
		next;
		mes "[Digotz]";
		mes "Maku n�o sabe nada de amizade!";
		mes "Mesmo se eu ^0000FFquisesse^000000 v�-lo.";
		mes "Tem essas pessoas que n�o querem que um rico se encontre com pobres.";
		next;
		mes "[Digotz]";
		mes "Se Maku est� bem, para mim � tudo o que eu preciso saber!";
		mes "N�o preciso ir at� l� s� para ver como ele est�!";
		mes "Eu s� lamento uma coisa...";
		next;
		mes "[Digotz]";
		mes "Eu s� queria ter tido uma �ltima chance de ver Maku...";
		mes "Assim, eu mesmo poderia dar uns cascudos nele!";
		mes "Ah, isso seria legal!";
		mes "Bastardo arrogante!";
		mes "Por�m, eu n�o posso fazer isso...";
		next;
		mes "[Digotz]";
		mes "Os guardas aqui nunca permitem que ricos e pobres se encontrem, temendo que os pobres perturbem a paz e a ordem da cidade.";
		mes "� uma lei idiota feita por pessoas idiotas.";
		next;
		mes "[Digotz]";
		mes "Ainda assim, � bastante assustador que algu�m possa ser punido por violar um tabu t�o est�pido, na verdade.";
		mes "De qualquer forma, se voc� encontrar Maku novamente, mande essa mensagem minha.";
		next;
		mes "[Digotz]";
		mes "^FF0000Seu bastardo incorrig�vel!";
		mes "Voc� continua sendo um babaca teimoso!";
		mes "Voc� ainda me deve pelo menos 3 almo�os!";
		mes "Sem falar em uma desculpa!";
		mes "Mas quem liga para o que voc� pensa?!";
		mes "Eu estou bem melhor sem voc�!^000000";
		friendship = 4;
		close;
	} else if ((friendship == 4 || friendship == 5)) {
		mes "[Digotz]";
		mes "Ainda conhecendo a cidade alta de Lighthalzen?";
		mes "N�o que eu ligue, mas se voc� por acaso encontrar Maku.";
		mes "Mande uma pequena mensagem para ele, palavra por palavra.";
		next;
		mes "[Digotz]";
		mes "^FF0000Seu bastardo incorrig�vel!";
		mes "Voc� continua sendo um babaca teimoso!";
		mes "Voc� ainda me deve pelo menos 3 almo�os!";
		mes "Sem falar em uma desculpa!";
		mes "Mas quem liga para o que voc� pensa^000000?!";
		close;
	} else if (friendship == 6) {
		mes "[Digotz]";
		mes "Oh, ol�, j� faz um tempo.";
		mes "O que � que voc� est� fazendo aqui de volta?";
		mes "E, hmm, voc� entregou aquela mensagem para Maku?";
		mes "Pensando nisso agora, eu fui meio...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu entreguei a mensagem palavra por palavra.";
		mes "E Maku ficou t�o bravo, xingou muito e amea�ou dar uma surra bem dada em voc�.";
		next;
		mes "[Digotz]";
		mes "Aquele imprest�vel, nojento e fedorento patife!";
		mes "Se n�o fosse por esses guardas, eu iria no gueto e dava eu mesmo uma surra nele!";
		mes "Que cara est�pido!";
		next;
		mes "[Digotz]";
		mes "� nessas horas que sinto mais falta de ^FF0000Benkaistein^000000.";
		mes "Ele sempre tinha uma boa resposta para esse tipo de situa��o.";
		mes "Sim, eu acho que ele est� estudando em uma cidade bem longe.";
		next;
		mes "[Digotz]";
		mes "Pelo jeito ele est� nesse lugar, sei l� como chama, j� que deve ter uma tonelada de livros para ler.";
		mes "Mas, sim, Benkaistein sempre foi o mediador...";
		next;
		mes "[Digotz]";
		mes "Mesmo naquela �poca, quando eu, ele e Maku sa�amos juntos, sempre era Benkaistein quem punha um fim nas nossas discuss�es.";
		mes "Mas, mesmo assim, agora nem ele pode fazer algo...";
		friendship = 7;
		changequest(12002,12003);
		next;
		mes "[Digotz]";
		mes "Eu n�o sei porqu�, mas eu estou t�o bravo!";
		mes "Porque eu fico estressado com isso?";
		close;
	} else if (friendship == 7) {
		mes "[Digotz]";
		mes "Mesmo se Benkaistein voltar de sei l� onde ele foi estudar.";
		mes "Eu n�o acho que ele possa fazer o Maku pedir desculpas para mim.";
		mes "Aquele cara � simplesmente muito teimoso pra isso!";
		close;
	} else if ((friendship == 12 && countitem(Friends_Diary) > 0)) {
		mes "[Digotz]";
		mes "Mesmo se Benkaistein voltar, eu n�o acho que eu posso perdoar Maku.";
		mes "Na verdade, sabe de uma coisa?";
		mes "Eu acho que ficaria maluco!";
		next;
		if (select("Mostre o Di�rio de Benkaistein","N�o mostre o Di�rio de Benkaistein") == 1) {
			mes "[Digotz]";
			mes "Porque eu estou t�o irritado?";
			mes "^3355FF*Suspiro*^3355FF";
			mes "Voc� tem algo para me mostrar?";
			mes "H�? O Benkaistein quer que eu leia o seu di�rio?";
			mes "Claro, por que n�o?";
			mes "Nesses anos todos eu devo muito a ele...";
			next;
			mes "[Di�rio de Benkaistein]";
			mes "^856363Hoje, eu, Digotz e Maku jogamos esse jogo maluco de voar.";
			mes "Basicamente, n�s fizemos umas asas usando madeira e papel, saltamos desses morros e tentamos voar.";
			mes "Idiota, eu sei.^000000";
			next;
			mes "[Di�rio de Benkaistein]";
			mes "^856363Hoje foi minha vez de pular e bater os bra�os com essas asas falsas e mal feitas.";
			mes "Quando se p�ra pra pensar, n�o � um jogo divertido.";
			mes "Cara, espero nunca mais fazer isso.^000000 ";
			next;
			mes "[Digotz]";
			mes "Ah sim, eu me lembro disso!";
			mes "Na maioria das vezes era Maku quem usava as asas, mas eu ainda tenho o recorde de ficar mais tempo no ar!";
			mes "�, eu era um Garoto P�gaso bem pass�vel... ";
			next;
			mes "[Di�rio de Benkaistein]";
			mes "^856363Maku, Digotz e eu sa�mos da cidade.";
			mes "� claro, n�o quer�amos falar pra ningu�m ou �amos ter problemas.";
			mes "Foi um dia bem emocionante.";
			mes "Mas, ent�o, demos de cara com um monstro!^000000 ";
			next;
			mes "[Di�rio de Benkaistein]";
			mes "^856363Eu queria fugir, mas Maku e Digotz queriam derrot�-lo pr� virarem her�is.";
			mes "Claro, nos machucamos bem feio e o monstro fugiu.";
			mes "Cara, mam�e n�o ficou nada feliz...^000000 ";
			next;
			mes "[Digotz]";
			mes "Hmm. Eu n�o me lembro bem disso.";
			mes "Mas eu sei que Benkaistein, eu e Maku n�o t�nhamos medo de nada naquela �poca.";
			mes "A gente devia estar ^0000FFmaluco^000000 para lutar com um monstro.";
			next;
			mes "[Di�rio de Benkaistein]";
			mes "^856363Digotz j� est� de cama faz tr�s dias.";
			mes "� s� um resfriado normal e Maku n�o p�ra de falar que a culpa � de Digotz por ter ficado doente.^0000FF";
			mes "^856363Mas ele est� sempre me pedindo para ir visit�-lo e ver se ele est� bem.^000000";
			next;
			mes "[Digotz]";
			mes "Eu acho que eu lembro que fiquei bem doente.";
			mes "Maku estava preocupado?";
			mes "Eu... Eu devo ter aprontado muito porque foi bem dif�cil sair da cama daquela vez.";
			mes "Sabe?";
			mes "Eu n�o era de ficar de cama.";
			next;
			mes "[Di�rio de Benkaistein]";
			mes "^856363Mam�e e papai ficam falando para n�o sair mais com Maku.";
			mes "� muito idiota eles falarem isso, e eu n�o ligo se ele � pobre.";
			mes "Ele � um dos caras mais legais que eu conhe�o.^000000";
			next;
			mes "[Di�rio de Benkaistein]";
			mes "^856363A fam�lia de Digotz � bem rica e eles tamb�m n�o querem que ele fique saindo com Maku.";
			mes "Mas Digotz nem liga.";
			mes "Eu sei que ele gosta bastante de Maku.^000000";
			next;
			mes "[Digotz]";
			mes "Bem, a gente era bem jovem e bastante chegado naquela �poca, ent�o...";
			mes "^333333*Ah�!*^000000";
			mes "Quando foi que Benkaistein escreveu isso?!";
			next;
			mes "[Di�rio de Benkaistein]";
			mes "^856363Hoje, n�s tr�s fizemos um juramento de irmandade, igual ao que a gente leu numa HQ.";
			mes "Juramos ser sempre amigos n�o importa o que aconte�a.";
			mes "Para toda a vida.^000000";
			next;
			mes "[Digotz]";
			mes "Eu... Eu fui for�ado a fazer esse juramento!";
			mes "E as pessoas mudam, n�o �?";
			mes "Quero dizer, a gente n�o passava de garoto, n�o � como um juramento de verdade que tem significado como agora, n�?";
			next;
			mes "[Digotz]";
			mes "J� chega.";
			mes "Vou ver Maku.";
			mes "Eu n�o sinto falta dele, mas vou l� para cancelar esse juramento.";
			mes "E talvez eu d� uma surra nele s� pra variar.";
			friendship = 13;
			close;
		} else {
			mes "[Digotz]";
			mes "N�o entendo";
			mes "porque eu estou t�o irritado!";
			mes "Eu estou come�ando a agir";
			mes "como o Maku... quer dizer,";
			mes "n�o me entenda mal, n�o ";
			mes "� que eu ligue pra esse cara.";
			close;
		}
	} else if (friendship == 13) {
		mes "[Digotz]";
		mes "Calma a�, eu preciso me aprontar!";
		mes "O Maku vai tirar sarro de mim se eu parecer muito rico e mimado.";
		mes "Onde foi que eu coloquei aquelas roupas mais surradas?";
		close;
	} else if (friendship == 14) {
		if (!checkweight(Knife,1)) {
			mes "[Digotz]";
			mes "Voc� n�o acha que est� carregando muitos itens?";
			mes "Porque n�o deixa alguns no armaz�m depois venha me ver...";
			close;
		} else {
			mes "^3355FFDigotz est� seriamente ferido pela faca que ainda est� enterrada na sua barriga.^000000 ";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Digotz...?";
			mes "Oh n�o, deixe-me ajud�-lo!";
			next;
			mes "[Digotz]";
			mes "Ei...! � voc�?";
			mes "Aquele Maku.";
			mes "Ele sempre me deu azar...";
			mes "� muito tarde para mim e eu n�o tenho muito tempo...";
			next;
			mes "[Digotz]";
			mes "Esses guardas que eu falei para voc�...";
			mes "Aqueles que n�o querem que os ricos e os pobre se misturem?";
			mes "Eu... acho que eles descobriram que eu ia encontrar o meu velho amigo.";
			mes "Eu s� queria v�-lo...";
			next;
			mes "[Digotz]";
			mes "Esse cara... vestido de preto...";
			mes "Ele... Ele me esfaqueou!";
			mes "Eu... C�us.";
			mes "Faz tanto tempo que eu n�o falo com ele.";
			mes "N�s �amos nos ver e nos ^0000FFdivertir^000000, como nos velhos tempos.";
			next;
			mes "[Digotz]";
			mes "Eu senti falta de meus amigos, mas agora...";
			mes "Agora posso escut�-los me chamando.";
			mes "Agora poderemos ficar todos juntos como t�nhamos prometido.";
			mes "Sim...";
			mes "Eu estava errado.";
			mes "A vida � muito curta para ficar bravo com um ami...";
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
			mes "Voc� remove a Faca do seu corpo sem vida como cortesia a um homem que ousou amar seus amigos.^000000 ";
			next;
			friendship = 15;
			changequest(12005,12006);
			getitem(Knife,1);
			close;
		}
	} else if (friendship > 14) {
		mes "^3355FFDigotz faleceu, mas seu olhar est� em paz e ele parece ter morrido contente.^000000 ";
		close;
	} else {
		mes "[Digotz]";
		mes "Oh, um aventureiro!";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � parte alta de Lighthalzen.";
		mes "Entretanto, acho que essa �rea n�o tem muito a oferecer se est� buscando agita��o.";
		next;
		mes "[Digotz]";
		mes "Fique � vontade para olhar por a� se quiser.";
		mes "Na verdade, eu estou contente de ver algu�m diferente dos esnobes e ricos que vivem aqui.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in04,107,14,5	script	Estudante#friendship	4_M_SAGE_A,{
	if (friendship == 7 || friendship == 8) {
		mes "[Joey Choryee]";
		mes "Essa � uma �rea de estudos, ent�o n�o fale, n�o ande, nem mesmo respire alto.";
		mes "Claro que tem uns, como Benkaistein, que se desligam do mundo quando est�o estudando a s�rio...";
		next;
		friendship = 8;
		mes "[Joey Choryee]";
		mes "Benkaistein...?";
		mes "Ele fica na parte norte dessa sala.";
		mes "� um cara bem legal, mas um tanto sacal.";
		mes "Sabe aqueles chatos que organizam e etiquetam tudo?";
		mes "� ele.";
		close;
	} else if (friendship == 8) {
		mes "[Joey Choryee]";
		mes "Benkaistein...?";
		mes "Ele fica na parte norte dessa sala.";
		mes "� um cara bem legal, mas um tanto sacal.";
		mes "Sabe aqueles chatos que organizam e etiquetam tudo?";
		mes "� ele.";
		close;
	} else {
		mes "[Joey Choryee]";
		mes "Dano de propriedade. Hmm.";
		mes "Tem a ver com raios e fogo e �gua e coisas desse tipo?";
		mes "Aqui eu pensei que significava, n�o sei, pr�dio sendo derrubado ou algo do g�nero.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in04,96,106,5	script	Estudante Dedicado#friendship	4_M_SAGE_A,{
	if (friendship == 8) {
		mes "[Estudante Dedicado]";
		mes "Agora, deixe-me ver.";
		mes "Vento M�gico, Magia Negra, Porings, ah, aqui est�.";
		mes "Propriedades de ra�a de monstro.";
		mes "Espero que aqui tenha todas as informa��es que eu preciso...";
		next;
		mes "^3355FFDepois de um olhar r�pido nas coisas do estudante, voc� percebe que o nome 'Benkaistein' est� escrito nelas.";
		mes "Esse � o amigo que Maku e Digotz falaram.^000000 ";
		next;
		select("Com licen�a...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a...";
		mes "Benkaistein?";
		next;
		mes "[Estudante Dedicado]";
		mes "... O mundo dos humanos e o mundo dos dem�nios, sim, sim...";
		mes "N�o, o que eu estou procurando � uma refer�ncia aos c�us ou a Asfgard.";
		mes "Hmm, isso deve ajudar...";
		next;
		select("Ei...");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei...";
		mes "Voc� ai.";
		mes "Benkaistein!";
		next;
		mes "[Estudante Dedicado]";
		mes "...Ah, essa � uma observa��o muito interessante.";
		mes "Se eu puder incorpor�-la na minha tese sem me dar muito trabalho, minhas conclus�o ficaria muito mais s�lida...";
		next;
		select("EI VOC�...!");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "BENKAISTEIN...!";
		next;
		mes "[Estudante Dedicado]";
		mes "Oh, c�us!";
		mes "S-ser� que pode falar mais baixo?";
		mes "E-estou tentando estudar!";
		mes "Hm, espere ai.";
		mes "Voc� estava me chamando todo esse tempo?";
		friendship = 9;
		close;
	} else if (friendship == 9) {
		mes "[Estudante Dedicado]";
		mes "Oh, voc� me assustou!";
		mes "Mas isso sempre acontece.";
		mes "� dif�cil chamar a minha aten��o quando eu me concentro em um livro.";
		mes "Ent�o, como posso ajud�-lo, aventureiro?";
		next;
		select("Conte a ele sobre Maku e Digotz");
		mes "[Benkaistein]";
		mes "Ah, como est�o meus amigos?";
		mes "Oh, o qu�?";
		mes "Eles est�o brigando s� porque um � rico e o outro � pobre?";
		mes "Mas que criancice!";
		next;
		mes "[Benkaistein]";
		mes "Mas tamb�m, eles sempre foram assim.";
		mes "*Suspiro*";
		mes "Eu realmente queria voltar para casa e fazer esses dois se entenderem, mas eu tamb�m preciso terminar essa tese.";
		mes "Vamos ver...";
		mes "O que � que eu posso fazer daqui?";
		next;
		friendship = 10;
		changequest(12003,12004);
		mes "[Benkaistein]";
		mes "Ah, j� sei o que posso fazer!";
		mes "Espere um pouco, onde foi que eu coloquei?";
		mes "Ah, como foi que eu pude perder algo t�o importante?";
		mes "Poderia esperar um minutinho enquanto eu procuro uma coisa?";
		close;
	} else if ((friendship == 10 || friendship == 11)) {
		mes "[Benkaistein]";
		mes "Ah, que droga, isso est� sendo muito mais demorado do que eu esperava.";
		mes "Onde foi que eu coloquei aquele neg�cio?";
		mes "Hmmmm...";
		next;
		mes "^3355FFTalvez fosse melhor tentar ajudar Benkainstein a procurar seja l� o que for que ele est� tentando achar.^000000 ";
		close;
	} else if ((friendship == 11 && countitem(Friends_Diary) > 0)) {
		mes "[Benkaistein]";
		mes "Ah que droga, isso est� sendo muito mais demorado do que eu esperava.";
		mes "Onde foi que eu coloquei aquele neg�cio?";
		mes "Hmmmm...";
		next;
		mes "[Benkaistein]";
		mes "Ah, � esse?";
		mes "Voc� encontrou o meu di�rio?";
		mes "Vamos, deixe-me ver. Sim, sim...";
		mes "� esse mesmo!";
		mes "Obrigado por ach�-lo para mim!";
		next;
		mes "[Benkaistein]";
		mes "Voc� poderia me fazer um favor?";
		mes "Seria melhor se eu mesmo fosse falar com eles, mas estou muito ocupado trabalhando nessa tese...";
		next;
		mes "[Benkaistein]";
		mes "Voc� poderia dar esse di�rio para Digotz e Maku?";
		mes "Eu o escrevi quando n�s �ramos bem jovens, ent�o isso deve fazer com que eles lembrem dos bons tempos que tivemos juntos.";
		next;
		friendship = 12;
		changequest(12004,12005);
		close;
	} else if (friendship == 15) {
		if (!checkweight(Pass,1)) {
			mes "[Benkaistein]";
			mes "Parece que voc� est� levando muito peso com voc�.";
			mes "Guarde alguns de seus itens, depois venha falar comigo.";
			close;
		} else {
			mes "[Benkaistein]";
			mes "Voc� conseguiu levar o meu di�rio para Digotz e Maku?";
			mes "Tenho certeza que o di�rio fez com que eles lembrassem dos bom tempos que tivemos juntos.";
			mes "Eu sei que eles podem ser bastante teimosos...";
			next;
			mes "[Benkaistein]";
			mes "De qualquer forma, eu agrade�o muito toda a sua ajuda.";
			mes "Estou ansioso para ver os dois juntos de novo quando eu voltar para casa.";
			next;
			mes "[Benkaistein]";
			mes "At� l�, eu preciso pesquisar, terminar a minha tese e completar meus objetivos acad�micos.";
			mes "Ah, e como agradecimento, tome esse ^0000FFpasse^000000 que permite entrar e sair das ^0000FF�reas rica e pobre^000000.";
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
			mes "aventureiro. Quando n�s tr�s";
			mes "voltarmos a nos encontrar,";
			mes "eu garanto que voc� ficar� sabendo!";
			close;
		}
	} else {
		mes "[Estudante Dedicado]";
		mes "Agora, deixe-me ver.";
		mes "Vento M�gico, Magia Negra, Porings, ah, aqui est�.";
		mes "Propriedades de ra�a de monstro.";
		mes "Espero que aqui tenha todas as informa��es que eu preciso...";
		next;
		mes "^3355FFEsse estudante parece estar concentrado em uma intensa pesquisa de alguma mat�ria acad�mica.";
		mes "Por enquanto, � melhor deix�-lo sozinho para ele poder estudar.^000000";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in04,168,117,3	script	Livro#friendship	HIDDEN_NPC,{
	if (friendship == 11) {
		mes "^3355FFN�o h� nada aqui que voc� realmente precise.^000000 ";
		close;
	} else if (friendship == 10) {
		friendship = 11;
		getitem(Friends_Diary,1);
		mes "^3355FFO t�tulo deste livro � ";
		mes "''Di�rio de Benkaistein";
		mes "'Volume 6'.";
		mes "Provavelmente � isso que Benkaistein estava tentando encontrar, ent�o deve ser melhor mostrar a ele.^000000 ";
		close;
	} else {
		mes "^3355FFAgora, n�o h� nada que seja interessante por aqui.^000000";
		close;
	}
}
