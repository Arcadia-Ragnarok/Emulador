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
| - Info: Quest da invocação de Ktullanux.                          |
\*-----------------------------------------------------------------*/

rachel,157,183,3	script	Devota Urstia	4_F_MASK1,{
	cutin("ra_usti1",2);
	if (!ice_necklace_q) {
		mes "[Urstialla]";
		mes "Oh, você é um aventureiro";
		mes "de outras terras?";
		mes "Reze para Freya!";
		mes "Seu amor e sua graça atinge todos no mundo tocando até os corações dos forasteiros, levando-os lá!";
		next;
		if (select("Freya? Quero saber mais","Isso é conversa de maluco!") == 1) {
			if (!checkweight(Magic_Necklace_,1)) {
				mes "^3355FFEsere um segundo!";
				mes "Agora você está carregando muito peso.";
				mes "Retorne depois de guardar alguns itens no armazém.^000000";
				close2;
				cutin("",255);
				end;
			}
			emotion(e_ok);
			mes "[Urstialla]";
			mes "O dia chegará quando Freya irá recussitar e levar todos os seus fiéis ao Valhalla.";
			mes "No momento ela está num sono profundo, mas mesmo assim, ela vê tudo sobre nós.";
			next;
			mes "[Urstialla]";
			mes "Olhe, Freya usou de toda sua força lutando contra os mais terríveis demônios na Guerra de Mil Anos.";
			mes "Agora, ela descansa e recupera suas energias num lugar puro e sagrado.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Espere...";
			mes "Como você sabe que tudo isso aconteceu?";
			next;
			mes "[Urstialla]";
			mes "Essas são verdades que todos os adoradores de Freya conhecem.";
			mes "Freya envia suas mensagens para nós através de seu vassalo mortal.";
			mes "Nossa bela papisa que brilha com a brilhante luz branca.";
			next;
			mes "[Urstialla]";
			mes "Infelizmente, até os mais fiés presenciaram lapsos no julgamento.";
			mes "Me envergonha admitir que meu filho Egapeo é...";
			mes "É culpado de pecar.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Pecar? O que ele fez, se não se importa que eu pergunte?";
			next;
			mes "[Urstialla]";
			mes "Eu não sei, mas Egapeo tem estado doente ultimamente.";
			mes "Eu estou convencido de que ele fez alguma coisa para enraivecer Freya.";
			mes "Mesmo que ele possa merecer, eu estou fazendo meu melhor para ajudá-lo.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "...Espere. O quê?!";
			next;
			mes "[Urstialla]";
			mes "Eu sei que se eu jogar pesado o suficiente e agradar Freya.";
			mes "Ela irá perdoar meu filho e irá curá-lo de sua doença.";
			mes "Mas as vezes rezar não é o suficiente...";
			mes "Eu preciso fazer um tributo.";
			next;
			mes "[Urstialla]";
			mes "Eu consegui adquirir um colar de incomparável beleza dos anões.";
			mes "Porém, as gemas embaçaram com o tempo e precisam brilhar antes que eu possa oferecê-las a Freya.";
			next;
			mes "[Urstialla]";
			mes "No entanto, não é qualquer um que pode fazer brilhar esse colar especial forjado pelos Anões.";
			mes "Eu preciso de alguém que conheça magia arcana para me ajudar.";
			mes "Eu acho que existe somente um mago que possa polir isso...";
			next;
			mes "[Urstialla]";
			mes "Maheo, o renomado mago com acesso aos mais poderosos feitiços no mundo deve ser capaz de limpar essas gemas do colar!";
			mes "Porém não tem jeito de eu encontrá-lo.";
			next;
			mes "[Urstialla]";
			mes "Você vê, Maheo partiu em uma jornada para subjulgar os monstros de gelo na caverna de gelo no norte, e ele ainda não retornou.";
			mes "Aquele lugar é muito perigoso para pessoas como eu.";
			next;
			mes "[Urstialla]";
			mes "Eu sei que vocês aventureiros regularmente viajam através destes tipos de áreas";
			mes "Então você poderia por favor procurar por Maheo e pedir para ele limpar esse colar em meu nome?";
			mes "Por favor, pelo meu filho...";
			next;
			if (select("Mas isso não é problema meu!","Tudo bem, eu farei isso.") == 1) {
				mes "[Urstialla]";
				mes "Eu... Eu entendo.";
				mes "Eu achei que Freya tivesse me guiado até você";
				mes "Mas talvez minhas preces não tenham sido atendidas ainda.";
				mes "Talvez eu precise rezar com mais fervor?";
				close2;
				cutin("",255);
				end;
			}
			mes "[Urstialla]";
			mes "Muito obrigado!";
			mes "Por favor, tome conta desse colar e peça para Maheo restaurar o seu brilho.";
			mes "Então ele será um ótimo tributo para nossa amada Deusa Freya";
			setquest(2109);
			getitem(Magic_Necklace,1);
			ice_necklace_q = 1;
			close2;
			cutin("",255);
			end;
		}
		cutin("ra_usti2",2);
		mes "[Urstialla]";
		mes "...............................";
		mes "Está me dizendo que você não acredita?";
		mes "Arrependa-se, e deixe seu coração se abrir para Freya!";
		close2;
		cutin("",255);
		end;
	} else if ((ice_necklace_q >= 1) && (ice_necklace_q < 5)) {
		mes "[Urstialla]";
		mes "Por favor, encontre Maheo o Mago e peça para ele restaurar a beleza do colar que eu te dei.";
		mes "Ele deve estar enfrentando monstros na caverna de gelo, no norte.";
		close2;
		cutin("",255);
		end;
	} else if (ice_necklace_q == 5) {
		if (countitem(Magic_Necklace_)) {
			mes "[Urstialla]";
			mes "Oh! Meu colar!";
			mes "Obrigado!";
			mes "É tão lindo!";
			mes "Ele dará um tributo maravilhoso para Freya!";
			mes "Estou certo disso meu filho ficará bem!";
			next;
			mes "[Urstialla]";
			mes "Aqui, eu sei que não é muito.";
			mes "Mas por favor aceite isso como prova da minha gratidão pelo que você fez por mim.";
			delitem(Magic_Necklace_,1);
			getexp(700000,0);
			ice_necklace_q = 6;
			completequest(2113);
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Oh, vamos apenas dizer que isso foi uma valiosa experiência para mim.";
			next;
			mes "[Urstialla]";
			mes ".........";
			mes "............";
			mes "Que Freya sempre proteja, guie e perdoe você por essa horrível brincadeira.";
		} else {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Oh, não! O colar desapareceu!";
		}
		close2;
		cutin("",255);
		end;
	} else {
		mes "[Urstialla]";
		mes "Que Freya sempre proteja e guie você com sua sempre presente graça e sabedoria...";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
ice_dun02,120,105,3	script	Homem Preso no Gelo#cave	4_M_FROZEN1,5,5,{
	if (ice_necklace_q == 1) {
		cutin("ra_magic3",2);
		emotion(e_omg);
		mes "[Homem Preso no Gelo]";
		mes "A-alô?";
		mes "Ei! Ei, você!";
		mes "Me ajude a quebrar esse gelo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Como você ficou preso aí?";
		next;
		mes "[Homem Preso no Gelo]";
		mes "Eu explicarei tudo mas tarde!";
		mes "Apenas... Apenas tire esse gelo de cima de mim!";
		next;
		if (getskilllv("MG_FIREBOLT")) {
			specialeffect(EF_FIREBALL);
			mes "^^3355FFVocê castou Lanças de Fogo no gelo..^000000";
		} else {
			specialeffect(EF_HIT2);
			mes "^3355FFVocê atingiu o gelo com todo seu poder.^000000";
		}
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "......";
		mes "........";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu não...";
		mes "Eu não consigo nem ao menos arranhá-lo!";
		mes "Você tem alguma idéia?";
		next;
		emotion(e_sob);
		mes "[Homem Preso no Gelo]";
		mes "Isso é tão humilhante...";
		mes "Eu, o maior mago do nosso tempo, Maheo, preso neste pilar de gelo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espere...";
		mes "Você é Maheo?";
		next;
		cutin("ra_magic1",2);
		emotion(e_gg);
		mes "[Maheo]";
		mes "É verdade.";
		mes "Você está falando com Maheo, o grande mago, e mestre das magias arcanas.";
		mes "Eu conheço magia que até mesmo os Arquimagos nunca conseguirão aprender em suas vidas inteiras!";
		next;
		cutin("ra_magic4",2);
		mes "[Maheo]";
		mes "Apesar da minha grandeza, eu sou um homem humilde. Viu?";
		mes "É por isso que eu sempre visto esse uniforme de Mago...";
		mes "Para lembrar a mim mesmo do valor da humildade.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Então como você ficou preso nesse gelo todo?";
		next;
		cutin("ra_magic3",2);
		mes "[Maheo]";
		mes "Na verdade, isso aconteceu porquê eu fui muito humilde.";
		mes "Você vê, eu subestimei a mim mesmo, e a devastante força da minha própria magia.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "...Ahn?";
		next;
		mes "[Maheo]";
		mes "Sim, isso não teria acontecido se eu não tivesse sido tão humilde...";
		mes "Humilde e bondoso.";
		mes "Tudo começou quando eu pensei nessa caverna e em como as pessoas às vezes vem aqui para pegar gelo.";
		next;
		mes "[Maheo]";
		mes "Eu então decidi que exterminaria esses monstros demoníacos pelo bem das pessoas!";
		mes "Os cidadãos sentiriam-se protegidos, e eu seria reconhecido como um herói!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Okay... Eu suponho que isso soa normal o suficiente.";
		mes "Continue.";
		next;
		mes "[Maheo]";
		mes "Eu valentemente batalhei contra os Yeti.";
		mes "Eles não eram páreo para minha magia!";
		mes "E então, eu decidi apenas destruir todos eles castando somente uma magia.";
		next;
		mes "[Maheo]";
		mes "Você conhece a Chuva de Meteoros?";
		mes "Eu conheço outra magia que nem essa...";
		mes "Mas só que duzentas vezes mais poderosa! Sim...";
		mes "Ela tem o poder de milhões sóis explodindo!";
		mes "Mas então...";
		next;
		emotion(e_sob);
		mes "[Maheo]";
		mes "Ela foi poderosa demais!";
		mes "Houveram tremores, e destroços voadores de gelo.";
		mes "E toda aquela chama fez com que minhas roupas pegarem fogo!";
		next;
		emotion(e_flash,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você...";
		mes "você tocou fogo nas suas roupas";
		next;
		cutin("ra_magic2",2);
		mes "[Maheo]";
		mes "Sim, mas nada preocupante.";
		mes "Eu rapidamente extingui aquelas chamas com minha poderosa magia Rajada Congelante!";
		next;
		cutin("ra_magic3",2);
		mes "[Maheo]";
		mes "Pensando bem...";
		mes "Isso pode ter sido um erro...";
		next;
		cutin("ra_magic3",2);
		mes "[Maheo]";
		mes "Mas chega de falar sobre mim.";
		mes "Que motivo nobre traz você até esse lugar, aventureir"+(Sex == SEX_MALE ? "o":"a")+"?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu ouvi dizer que você é capaz de polir as gemas nesse colar com a sua magia, então eu vim aqui te procurar.";
		next;
		mes "[Maheo]";
		mes "De fato, eu sou capaz de fazer brilar essas gemas de modo que elas brilhem tão brilhantes quanto milhões de sóis explodindo!";
		next;
		mes "[Maheo]";
		mes "Quer dizer, assim que eu conseguir sair desse gelo. Hmm...";
		mes "Mas eu duvido que magia normal será capaz de derreter tudo isso.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Então como nós faremos para tirá-lo daí?";
		next;
		mes "[Maheo]";
		mes "Não tema.";
		mes "Tenho certeza que meu mestre saberá um jeito de me libertar dessa prisão de gelo.";
		mes "Ele pode ser encontrado próximo à Fonte de Freya.";
		mes "Procure por ele em meu nome!";
		ice_necklace_q = 2;
		changequest(2109,2110);
		close2;
		cutin("",255);
		end;
	} else if (ice_necklace_q == 4) {
		if (countitem(Hammer_Of_Wind)) {
			if (countitem(Magic_Necklace)) {
				mes "[Maheo]";
				mes "Oh, você voltou!";
				mes "Então meu mestre teve";
				mes "alguma idéia de quebrar esta gelada prisão de gelo?";
				next;
			} else {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Oh, não! Eu deixei o colar na cidade! Eu tratei de volta!";
				next; 
				mes "[Maheo]";
				mes "Hey, hey! Você não pode me soltar primeiro?";
				emotion(e_sob);
				close;
			}
		} else {
			mes "[Maheo]";
			mes "Meu mestre não deve ter o mesmo talento que eu.";
			mes "Mas ele é muito sábio em tipos de mágicas.";
			mes "Por favor... Peça sua ajuda.";
			mes "Ele deve estar lendo perto do Templo de Freya.";
			close;
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, ele fez esse machado mágico com o qual espera-se ser capaz de quebrar esse gelo mágico.";
		next;
		mes "[Maheo]";
		mes "É claro!";
		mes "Como eu não pensei nisso?";
		mes "Ótimo, agora me tire daqui por favor!";
		next;
		mes "^3355FFVocê segurou o Machado de Vento bem firme, e atingiu o gelo com toda sua força.^000000";
		next;
		specialeffect(EF_TEIHIT3);
		specialeffect(EF_FREEZE);
		specialeffect(EF_ICECRASH);
		mes "^3355FF*Pzzzzz*";
		mes "*CRASH!*^000000";
		next;
		setnpcdisplay("Homem Preso no Gelo#cave",4_M_ARUNA_NFM1);
		emotion(e_gasp);
		mes "[Maheo]";
		mes "Finalmente...!";
		mes "Depois de todo esse tempo!";
		mes "Eu estou livre!";
		next;
		specialeffect(EF_BEGINSPELL4);
		mes "[Maheo]";
		mes "Agora, todos os monstros nessa caverna vão provar a ira do mago mais poderoso do mundo!";
		mes "Eu terei a minha vingança, e darei à essas bestas o dobro da dor que elas me deram!";
		next;
		monster("ice_dun02",108,109,"Yeti",SNOWIER,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster("ice_dun02",114,112,"Yeti",SNOWIER,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster("ice_dun02",126,105,"Yeti",SNOWIER,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster("ice_dun02",121,99,"Yeti",SNOWIER,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		specialeffect(EF_LORD);
		killmonster("ice_dun02","Homem Preso no Gelo#cave::OnMyMobDead");
		mes "[Maheo]";
		mes "Muhahahahahahahaha!";
		next;
		mes "[Maheo]";
		mes "Er, mas primeiro, eu preciso usar minha magia para limpar esse seu colar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Aqui...";
		next;
		mes "[Maheo]";
		mes "Oh! Ele foi feito pelos anões, não foi?";
		mes "Parece que eles fizeram outra obra-prima.";
		mes "Uma pena que ele esteja tão manchado, no entanto.";
		next;
		mes "[Maheo]";
		mes "Vamos ver, agora...";
		next;
		specialeffect(EF_FROSTWEAPON);
		mes "^3355FF*Ting*^000000";
		next;
		mes "[Maheo]";
		mes "Bem, eu suponho que é aqui que nossos caminhos se separam.";
		mes "Aqui, aceite isso como um presente...";
		mes "E por favor não mencione o fato de eu ter prendido a mim mesmo no gelo para ninguém, okay?";
		ice_necklace_q = 5;
		changequest(2112,2113);
		delitem(Hammer_Of_Wind,1);
		delitem(Magic_Necklace,1);
		getitem(Magic_Necklace_,1);
		getitem(Ice_Particle,4);
		close2;
		cutin("",255);
		setnpcdisplay("Homem Preso no Gelo#cave",4_M_FROZEN1);
		end;
	} else if ((ice_necklace_q == 2) || (ice_necklace_q == 3)) {
		mes "[Maheo]";
		mes "Meu mestre pode não ter todo meu talento.";
		mes "Mas ele é muito estudado nas variadas formas de magia.";
		mes "Por favor...";
		mes "Peça ajuda para ele.";
		mes "Ele deve estar lendo próximo à Fonte de Freya.";
		close;
	} else {
		mes "........";
		close;
	}

	OnTouch:
	end;

	OnTouchNPC:
	emotion(e_an);
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
rachel,265,98,3	script	Hamion#aru	4_M_RACHMAN2,{
	if (ice_necklace_q < 2) {
		mes "[Hamion]";
		mes "Hm? Você está precisando de alguma coisa?";
		mes "Se não for tão importante, eu gostaria de voltar a ler meu livro.";
		close;
	} else if (ice_necklace_q == 2) {
		mes "[Hamion]";
		mes "Hm? Você está precisando de alguma coisa?";
		mes "Se não for tão importante, eu gostaria de voltar a ler o meu livro.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Hm, você por acaso conheceria um mago chamado Maheo?";
		mes "Eu achava que tinha que procurar o seu mestre por essa área.";
		next;
		mes "[Hamion]";
		mes "Bem, você o encontrou porque esse seria eu.";
		mes "O que aconteceu com Maheo?";
		next;
		mes "[Hamion]";
		mes "Ele se congelou?!";
		mes "Hahahaha!";
		mes "Que gênio!";
		mes "Oh, certo, eu suponho que ele ainda tem muito o que aprender sobre, se não sobre magia.";
		next;
		mes "[Hamion]";
		mes "Vamos ver, vamos ver...";
		mes "Esse livro tem que ter a resposta. Mmm... Ah!";
		mes "Página 42! Eu preciso construir um artefato de modo a quebrar aquele gelo místico. Mmm.";
		next;
		mes "[Hamion]";
		mes "Você me";
		mes "ajudaria? Eu preciso encontrar";
		mes "^4D4DFF5 Vento Bruto^000000,";
		mes "^4D4DFF1 Machado^000000, e";
		mes "^4D4DFF1 Pergaminhos em Branco^000000";
		next;
		mes "[Hamion]";
		mes "Você pode encontrar os Pergaminhos em Branco na Academia dos Sábios em Juno.";
		mes "Ah, e o Machado é uma arma, não uma dessas ferramentas de ferreiro.";
		mes "Eu o ajudaria se pudesse, mas...";
		mes "Eu sou apenas esperto, não forte.";
		ice_necklace_q = 3;
		changequest(2110,2111);
		close;
	} else if (ice_necklace_q == 3) {
		if ((countitem(Rough_Wind) < 5) || (countitem(Hammer) < 1) || (countitem(Scroll) < 1)) {
			mes "[Hamion]";
			mes "Eu preciso criar um artefato mágico para quebrar o gelo que está aprisionando Maheo.";
			mes "Você, por favor, me ajudaria?";
			mes "Não tem como eu encontrar esses itens sozinho!";
			next;
			mes "[Hamion]";
			mes "Eu preciso encontrar";
			mes "^4D4DFF5 Vento Bruto^000000,";
			mes "^4D4DFF1 Machado^000000, e";
			mes "^4D4DFF1 Pergaminhos em Branco^000000";
			next;
			mes "[Hamion]";
			mes "Você pode encontrar os Pergaminhos em Branco na Academia dos Sábios em Juno.";
			mes "Ah, e o Machado é uma arma, não uma dessas ferramentas de ferreiro";
			mes "Eu o ajudaria se pudesse, mas...";
			mes "Eu sou apenas esperto, não forte.";
			close;
		}
		if (!checkweight(Hammer_Of_Wind,1)) {
			mes "^3355FFEspere um segundo!";
			mes "Agora, voce está carregando muitas coisas com você.";
			mes "Por favor volte depois e use os Serviços da Kafra para guardar alguns dos seus itens.^000000";
			close;
		}
		mes "[Hamion]";
		mes "Ótimo, você têm tudo que eu preciso!";
		mes "Mas primeiro, você têm certeza de que só tem 1 Machado em seu inventário?";
		mes "Se você tiver mais de um, eu posso acabar pegando o Machado errado.";
		next;
		if (select("Deixa eu checar","Não se preocupe, eu chequei") == 1) {
			mes "[Hamion]";
			mes "Está certo, é sempre melhor prevenir do que remediar!";
			mes "Se Maheo tivesse sido um pouco mais cuidadose.";
			mes "Assim como você é, talvez isso não tivesse acontecido.";
			close;
		}
		mes "[Hamion]";
		mes "Okay, vou considerar sua palavra.";
		mes "Agora, vamos começar o processo para forjar o artefato.";
		mes "Hmmm... Deixe-me revisar aqui na página 45.";
		next;
		mes "[Hamion]";
		mes "Aqui vamos nós...!";
		next;
		specialeffect(EF_CONE,AREA,playerattached());
		mes "^3355FF*Pzzzz*^000000";
		next;
		mes "[Hamion]";
		mes "...Eeeee está pronto.";
		mes "Aqui, pegue esse Machado de Vento e use-o para libertar Maheo.";
		mes "Esse martelo só funcionará uma vez, então tenha certeza de quebrar o gelo corretamente!";
		delitem(Hammer,1);
		delitem(Rough_Wind,5);
		delitem(Scroll,1);
		ice_necklace_q = 4;
		changequest(2111,2112);
		getitem(Hammer_Of_Wind,1);
		close;
	} else {
		mes "[Hamion]";
		mes "Têm sempre pássaros cantando e borboletas voando por todo esse lugar";
		mes "É tão relaxante, e um ótimo lugar para ler.";
		close;
	}
}

// ------------------------------------------------------------------
rachel,113,96,5	script	Mohadian	4_M_MIDDLE,10,10,{
	if (ice_necklace_q == 6) {
		mes "[Mohadian]";
		mes "Eu trabalho no bar por aqui, e eu ouvi coisas boas sobre você.";
		mes "Alguns dos clientes ouviran dizer que você ajudou Urstialla indo dentro daquela perigosa Caverna de Gelo.";
		next;
		mes "[Mohadian]";
		mes "Agora, você é realmente capaz de derrotar normalmente os monstros de neve lá dentro?";
		mes "Se você for, eu tenho meio que uma proposta de negócios para você.";
		next;
		emotion(e_ic);
		mes "[Mohadian]";
		mes "O clima por aqui é naturalmente quente e úmido, então nós precisamos de gelo para fazer drinks gelados e refrescantes no bar.";
		mes "E a Caverna de Gelo é o melhor lugar para se pegar gelo, certo?";
		next;
		mes "[Mohadian]";
		mes "Se você me trouxer Pedaços de Gelo da Caverna de Gelo, eu os comprarei de você por 375 zeny cada.";
		mes "Pense nisso como um tipo de trabalho freelance.";
		mes "Quero dizer, se você puder me trazer gelo, eu comprarei!";
		next;
		mes "[Mohadian]";
		mes "Você pode fazer um bom dinheiro, meus clientes podem aproveitar drinks gelados e refrescantes.";
		mes "E meu negócio irá definitivamente lucrar.";
		mes "Nós mataríamos três pássaros com apenas uma pedra! O que me diz?";
		next;
		if (select("Não, obrigado","É claro") == 1) {
			mes "[Mohadian]";
			mes "Aww, que triste.";
			mes "Eu estava certo de que isso seria um grande negócio para nós dois.";
			mes "Bem, se você estiver pensando em mudar de idéia nós dois poderemos ser parceiros";
			close;
		}
		mes "[Mohadian]";
		mes "Ótimo! Agora, o gelo que eu preciso vêm do Coração Glacial.";
		mes "Você pode obtê-los caçando os monstros de neve na Caverna de Gelo.";
		mes "Lembre-se, eu irei pagar à você 375 zeny cada um!";
		ice_necklace_q = 7;
		close;
	} else if (ice_necklace_q == 7) {
		if (countitem(Ice_Heart) < 1) {
			mes "[Mohadian]";
			mes "Traga-me alguns Corações Glaciais da Caverna de Gelo.";
			mes "Eu certamente compensarei você com algum zeny.";
			mes "Esse é realmente um ótimo negócio para nós dois quando você reflete sobre ele.";
			close;
		}
		mes "[Mohadian]";
		mes "Perfeito, você me trouxe alguns Corações Glaciais!";
		mes "Eu nunca me acostumo com a beleza e a pureza desses cristais de gelo.";
		next;
		mes "[Mohadian]";
		mes "Sim, eu acho que ainda posso ser capaz de usá-los, deixe-me ver quantos você me trouxe.";
		next;
		.@hearts = countitem(Ice_Heart);
		.@totalprice = 375 * .@hearts;
		mes "[Mohadian]";
		mes .@hearts+" Corações Glaciais por 375 zeny cada...";
		mes "Parece que eu lhe devo "+.@totalprice+"zeny.";
		next;
		mes "[Mohadian]";
		mes "Aqui está!";
		mes "É sempre um prazer fazer negócios com você";
		delitem(Ice_Heart,.@hearts);
		Zeny += .@totalprice;
		close;
	} else {
		mes "[Mohadian]";
		mes "O clima por aqui é naturalmente quente e úmido, então nós precisamos de gelo para fazer drinks gelados e refrescantes no bar.";
		close;
	}
}

// ------------------------------------------------------------------
ice_dun03,1,1,3	script	BlazingFire#ice	FAKE_NPC,{
	mes "^3355FFAs chamas nessa barreira de fogo crepitam com poder mágico.";
	mes "Não têm jeito de apagar esse fogo pelos modos convencionais.^000000";
	if (ice_necklace_q > 4) {
		if ($@ktullanux_summon < 4) {
			if (countitem(Ice_Particle)) {
				next;
				select("Usar Pó Glacial");
				mes "^3355FFVocê salpica o Pó Glacial nas chamas.";
				mes "Elas tremem antes de se extinguirem.^000000";
				delitem(Ice_Particle,1);
				hideonnpc(strnpcinfo(NPC_NAME));
				++$@ktullanux_summon;
				if ($@ktullanux_summon == 4) {
					donpcevent("ice_boss#broad::OnStart");
				}
			} else if (countitem(Ice_Scale)) {
				next;
				select("Usar Escama de Gelo");
				mes "^3355FFVocê atira a Escama de Gelo dentro da chama.";
				mes "Ela crepita antes de se extinguir.^000000";
				delitem(Ice_Scale,1);
				hideonnpc(strnpcinfo(NPC_NAME));
				++$@ktullanux_summon;
				if ($@ktullanux_summon == 4) {
					donpcevent("ice_boss#broad::OnStart");
				}
				close;
			}
		}
	}
	close;
}
ice_dun03,126,126,3	duplicate(BlazingFire#ice)	Barreira de Fogo#ice1	4_NFWISP
ice_dun03,172,126,0	duplicate(BlazingFire#ice)	Barreira de Fogo#ice2	4_NFWISP
ice_dun03,172,172,0	duplicate(BlazingFire#ice)	Barreira de Fogo#ice3	4_NFWISP
ice_dun03,127,172,0	duplicate(BlazingFire#ice)	Barreira de Fogo#ice4	4_NFWISP

// ------------------------------------------------------------------
ice_dun03,1,173,5	script	ice_boss#broad	FAKE_NPC,{
	OnStop:
	stopnpctimer;
	end;

	OnStart:
	initnpctimer;
	end;

	OnTimer2000:
	mapannounce("ice_dun03","Quem se atreve a extinguir as chamas de Thor!?",bc_map,0xFF6633);
	end;

	OnTimer8000:
	mapannounce("ice_dun03","Eu, Ktullanux devo manter tudo longe das ferozes chamas de Thor,",bc_map,0xFF6633);
	end;

	OnTimer10000:
	mapannounce("ice_dun03","porque sou o mestre desta caverna de gelo!",bc_map,0xFF6633);
	end;

	OnTimer13000:
	mapannounce("ice_dun03","Seu aventureiro tolo, que não se preocupa com a dádiva da vida.",bc_map,0xFF6633);
	end;

	OnTimer16000:
	mapannounce("ice_dun03","Por causa de sua curiosidade perigosa,",bc_map,0xFF6633);
	end;

	OnTimer19000:
	mapannounce("ice_dun03","Você irá provar uma dor insuportável, um frio que pode congelar até mesmo a respiração da Mãe Natureza!",bc_map,0xFF6633);
	end;

	OnTimer21000:
	stopnpctimer;
	donpcevent("ice_boss#on::OnStart");
	end;
}

// ------------------------------------------------------------------
ice_dun03,1,174,3	script	ice_boss#on	FAKE_NPC,{
	OnStart:
	monster("ice_dun03",150,135,"Ktullanux",KTULLANUX,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnStartTimer:
	initnpctimer;
	end;

	OnStopTimer:
	stopnpctimer;
	end;

	OnMyMobDead:
	mapannounce("ice_dun03","Odin! Odin eu lhe imploro! Por favor proteja este porto do fogo feroz de Thor!",bc_map,0xFF6633);
	donpcevent("ice_boss#on::OnStartTimer");
	donpcevent("#ice_sec::OnStart");
	end;

	OnTimer7200000:
	stopnpctimer;
	$@ktullanux_summon = 0;
	hideoffnpc("Barreira de Fogo#ice1");
	hideoffnpc("Barreira de Fogo#ice2");
	hideoffnpc("Barreira de Fogo#ice3");
	hideoffnpc("Barreira de Fogo#ice4");
	end;
}

// ------------------------------------------------------------------
ice_dun03,1,175,3	script	#ice_sec	FAKE_NPC,{
	OnStart:
	initnpctimer;
	enablenpc("#ice_4f_1");
	enablenpc("#ice_4f_2");
	enablenpc("#ice_4f_3");
	enablenpc("#ice_4f_4");
	specialeffect(EF_MAPPILLAR2,AREA,getnpcid(0,"#ice_4f_1"));
	specialeffect(EF_MAPPILLAR2,AREA,getnpcid(0,"#ice_4f_2"));
	specialeffect(EF_MAPPILLAR2,AREA,getnpcid(0,"#ice_4f_3"));
	specialeffect(EF_MAPPILLAR2,AREA,getnpcid(0,"#ice_4f_4"));
	end;

	OnTimer60000:
	stopnpctimer;
	disablenpc("#ice_4f_1");
	disablenpc("#ice_4f_2");
	disablenpc("#ice_4f_3");
	disablenpc("#ice_4f_4");
	end;
}
ice_dun03,150,137,0	script	#ice_4f_1	WARPNPC,2,2,{
	OnTouch:
	warp("ice_dun04",33,144);
	end;

	OnInit:
	disablenpc("#ice_4f_1");
	end;
}
ice_dun03,138,148,0	script	#ice_4f_2	WARPNPC,2,2,{
	OnTouch:
	warp("ice_dun04",33,144);
	end;

	OnInit:
	disablenpc("#ice_4f_2");
	end;
}
ice_dun03,161,148,0	script	#ice_4f_3	WARPNPC,2,2,{
	OnTouch:
	warp("ice_dun04",33,144);
	end;

	OnInit:
	disablenpc("#ice_4f_3");
	end;
}
ice_dun03,151,162,0	script	#ice_4f_4	WARPNPC,2,2,{
	OnTouch:
	warp("ice_dun04",33,144);
	end;

	OnInit:
	disablenpc("#ice_4f_4");
	end;
}

// ------------------------------------------------------------------
ice_dun02,120,3,0	script	#cave_vos	FAKE_NPC,{
	OnInit:
	initnpctimer;
	end;

	OnTimer3600000:
	mapannounce("ice_dun02","Vão embora, seus animais! Eu vou queimá-los até a morte assim que eu me libertar!",bc_map,0xFFCE00);
	end;

	OnTimer7200000:
	mapannounce("ice_dun02","Olá? Alguém está me ouvindo? Eu... Eu estou meio preso!",bc_map,0xFFCE00);
	end;

	OnTimer10800000:
	stopnpctimer;
	mapannounce("ice_dun02","Por favor! Eu não consigo me mover! Alô? Eu acho que preciso de ajuda!",bc_map,0xFFCE00);
	initnpctimer;
	end;
}
