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
| - Info: Quest da invoca��o de Ktullanux.                          |
\*-----------------------------------------------------------------*/

rachel,157,183,3	script	Devota Urstia	4_F_MASK1,{
	cutin("ra_usti1",2);
	if (!ice_necklace_q) {
		mes "[Urstialla]";
		mes "Oh, voc� � um aventureiro";
		mes "de outras terras?";
		mes "Reze para Freya!";
		mes "Seu amor e sua gra�a atinge todos no mundo tocando at� os cora��es dos forasteiros, levando-os l�!";
		next;
		if (select("Freya? Quero saber mais","Isso � conversa de maluco!") == 1) {
			if (!checkweight(Magic_Necklace_,1)) {
				mes "^3355FFEsere um segundo!";
				mes "Agora voc� est� carregando muito peso.";
				mes "Retorne depois de guardar alguns itens no armaz�m.^000000";
				close2;
				cutin("",255);
				end;
			}
			emotion(e_ok);
			mes "[Urstialla]";
			mes "O dia chegar� quando Freya ir� recussitar e levar todos os seus fi�is ao Valhalla.";
			mes "No momento ela est� num sono profundo, mas mesmo assim, ela v� tudo sobre n�s.";
			next;
			mes "[Urstialla]";
			mes "Olhe, Freya usou de toda sua for�a lutando contra os mais terr�veis dem�nios na Guerra de Mil Anos.";
			mes "Agora, ela descansa e recupera suas energias num lugar puro e sagrado.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Espere...";
			mes "Como voc� sabe que tudo isso aconteceu?";
			next;
			mes "[Urstialla]";
			mes "Essas s�o verdades que todos os adoradores de Freya conhecem.";
			mes "Freya envia suas mensagens para n�s atrav�s de seu vassalo mortal.";
			mes "Nossa bela papisa que brilha com a brilhante luz branca.";
			next;
			mes "[Urstialla]";
			mes "Infelizmente, at� os mais fi�s presenciaram lapsos no julgamento.";
			mes "Me envergonha admitir que meu filho Egapeo �...";
			mes "� culpado de pecar.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Pecar? O que ele fez, se n�o se importa que eu pergunte?";
			next;
			mes "[Urstialla]";
			mes "Eu n�o sei, mas Egapeo tem estado doente ultimamente.";
			mes "Eu estou convencido de que ele fez alguma coisa para enraivecer Freya.";
			mes "Mesmo que ele possa merecer, eu estou fazendo meu melhor para ajud�-lo.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "...Espere. O qu�?!";
			next;
			mes "[Urstialla]";
			mes "Eu sei que se eu jogar pesado o suficiente e agradar Freya.";
			mes "Ela ir� perdoar meu filho e ir� cur�-lo de sua doen�a.";
			mes "Mas as vezes rezar n�o � o suficiente...";
			mes "Eu preciso fazer um tributo.";
			next;
			mes "[Urstialla]";
			mes "Eu consegui adquirir um colar de incompar�vel beleza dos an�es.";
			mes "Por�m, as gemas emba�aram com o tempo e precisam brilhar antes que eu possa oferec�-las a Freya.";
			next;
			mes "[Urstialla]";
			mes "No entanto, n�o � qualquer um que pode fazer brilhar esse colar especial forjado pelos An�es.";
			mes "Eu preciso de algu�m que conhe�a magia arcana para me ajudar.";
			mes "Eu acho que existe somente um mago que possa polir isso...";
			next;
			mes "[Urstialla]";
			mes "Maheo, o renomado mago com acesso aos mais poderosos feiti�os no mundo deve ser capaz de limpar essas gemas do colar!";
			mes "Por�m n�o tem jeito de eu encontr�-lo.";
			next;
			mes "[Urstialla]";
			mes "Voc� v�, Maheo partiu em uma jornada para subjulgar os monstros de gelo na caverna de gelo no norte, e ele ainda n�o retornou.";
			mes "Aquele lugar � muito perigoso para pessoas como eu.";
			next;
			mes "[Urstialla]";
			mes "Eu sei que voc�s aventureiros regularmente viajam atrav�s destes tipos de �reas";
			mes "Ent�o voc� poderia por favor procurar por Maheo e pedir para ele limpar esse colar em meu nome?";
			mes "Por favor, pelo meu filho...";
			next;
			if (select("Mas isso n�o � problema meu!","Tudo bem, eu farei isso.") == 1) {
				mes "[Urstialla]";
				mes "Eu... Eu entendo.";
				mes "Eu achei que Freya tivesse me guiado at� voc�";
				mes "Mas talvez minhas preces n�o tenham sido atendidas ainda.";
				mes "Talvez eu precise rezar com mais fervor?";
				close2;
				cutin("",255);
				end;
			}
			mes "[Urstialla]";
			mes "Muito obrigado!";
			mes "Por favor, tome conta desse colar e pe�a para Maheo restaurar o seu brilho.";
			mes "Ent�o ele ser� um �timo tributo para nossa amada Deusa Freya";
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
		mes "Est� me dizendo que voc� n�o acredita?";
		mes "Arrependa-se, e deixe seu cora��o se abrir para Freya!";
		close2;
		cutin("",255);
		end;
	} else if ((ice_necklace_q >= 1) && (ice_necklace_q < 5)) {
		mes "[Urstialla]";
		mes "Por favor, encontre Maheo o Mago e pe�a para ele restaurar a beleza do colar que eu te dei.";
		mes "Ele deve estar enfrentando monstros na caverna de gelo, no norte.";
		close2;
		cutin("",255);
		end;
	} else if (ice_necklace_q == 5) {
		if (countitem(Magic_Necklace_)) {
			mes "[Urstialla]";
			mes "Oh! Meu colar!";
			mes "Obrigado!";
			mes "� t�o lindo!";
			mes "Ele dar� um tributo maravilhoso para Freya!";
			mes "Estou certo disso meu filho ficar� bem!";
			next;
			mes "[Urstialla]";
			mes "Aqui, eu sei que n�o � muito.";
			mes "Mas por favor aceite isso como prova da minha gratid�o pelo que voc� fez por mim.";
			delitem(Magic_Necklace_,1);
			getexp(700000,0);
			ice_necklace_q = 6;
			completequest(2113);
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Oh, vamos apenas dizer que isso foi uma valiosa experi�ncia para mim.";
			next;
			mes "[Urstialla]";
			mes ".........";
			mes "............";
			mes "Que Freya sempre proteja, guie e perdoe voc� por essa horr�vel brincadeira.";
		} else {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Oh, n�o! O colar desapareceu!";
		}
		close2;
		cutin("",255);
		end;
	} else {
		mes "[Urstialla]";
		mes "Que Freya sempre proteja e guie voc� com sua sempre presente gra�a e sabedoria...";
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
		mes "A-al�?";
		mes "Ei! Ei, voc�!";
		mes "Me ajude a quebrar esse gelo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Como voc� ficou preso a�?";
		next;
		mes "[Homem Preso no Gelo]";
		mes "Eu explicarei tudo mas tarde!";
		mes "Apenas... Apenas tire esse gelo de cima de mim!";
		next;
		if (getskilllv("MG_FIREBOLT")) {
			specialeffect(EF_FIREBALL);
			mes "^^3355FFVoc� castou Lan�as de Fogo no gelo..^000000";
		} else {
			specialeffect(EF_HIT2);
			mes "^3355FFVoc� atingiu o gelo com todo seu poder.^000000";
		}
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "......";
		mes "........";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu n�o...";
		mes "Eu n�o consigo nem ao menos arranh�-lo!";
		mes "Voc� tem alguma id�ia?";
		next;
		emotion(e_sob);
		mes "[Homem Preso no Gelo]";
		mes "Isso � t�o humilhante...";
		mes "Eu, o maior mago do nosso tempo, Maheo, preso neste pilar de gelo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espere...";
		mes "Voc� � Maheo?";
		next;
		cutin("ra_magic1",2);
		emotion(e_gg);
		mes "[Maheo]";
		mes "� verdade.";
		mes "Voc� est� falando com Maheo, o grande mago, e mestre das magias arcanas.";
		mes "Eu conhe�o magia que at� mesmo os Arquimagos nunca conseguir�o aprender em suas vidas inteiras!";
		next;
		cutin("ra_magic4",2);
		mes "[Maheo]";
		mes "Apesar da minha grandeza, eu sou um homem humilde. Viu?";
		mes "� por isso que eu sempre visto esse uniforme de Mago...";
		mes "Para lembrar a mim mesmo do valor da humildade.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o como voc� ficou preso nesse gelo todo?";
		next;
		cutin("ra_magic3",2);
		mes "[Maheo]";
		mes "Na verdade, isso aconteceu porqu� eu fui muito humilde.";
		mes "Voc� v�, eu subestimei a mim mesmo, e a devastante for�a da minha pr�pria magia.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "...Ahn?";
		next;
		mes "[Maheo]";
		mes "Sim, isso n�o teria acontecido se eu n�o tivesse sido t�o humilde...";
		mes "Humilde e bondoso.";
		mes "Tudo come�ou quando eu pensei nessa caverna e em como as pessoas �s vezes vem aqui para pegar gelo.";
		next;
		mes "[Maheo]";
		mes "Eu ent�o decidi que exterminaria esses monstros demon�acos pelo bem das pessoas!";
		mes "Os cidad�os sentiriam-se protegidos, e eu seria reconhecido como um her�i!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Okay... Eu suponho que isso soa normal o suficiente.";
		mes "Continue.";
		next;
		mes "[Maheo]";
		mes "Eu valentemente batalhei contra os Yeti.";
		mes "Eles n�o eram p�reo para minha magia!";
		mes "E ent�o, eu decidi apenas destruir todos eles castando somente uma magia.";
		next;
		mes "[Maheo]";
		mes "Voc� conhece a Chuva de Meteoros?";
		mes "Eu conhe�o outra magia que nem essa...";
		mes "Mas s� que duzentas vezes mais poderosa! Sim...";
		mes "Ela tem o poder de milh�es s�is explodindo!";
		mes "Mas ent�o...";
		next;
		emotion(e_sob);
		mes "[Maheo]";
		mes "Ela foi poderosa demais!";
		mes "Houveram tremores, e destro�os voadores de gelo.";
		mes "E toda aquela chama fez com que minhas roupas pegarem fogo!";
		next;
		emotion(e_flash,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc�...";
		mes "voc� tocou fogo nas suas roupas";
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
		mes "Que motivo nobre traz voc� at� esse lugar, aventureir"+(Sex == SEX_MALE ? "o":"a")+"?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu ouvi dizer que voc� � capaz de polir as gemas nesse colar com a sua magia, ent�o eu vim aqui te procurar.";
		next;
		mes "[Maheo]";
		mes "De fato, eu sou capaz de fazer brilar essas gemas de modo que elas brilhem t�o brilhantes quanto milh�es de s�is explodindo!";
		next;
		mes "[Maheo]";
		mes "Quer dizer, assim que eu conseguir sair desse gelo. Hmm...";
		mes "Mas eu duvido que magia normal ser� capaz de derreter tudo isso.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o como n�s faremos para tir�-lo da�?";
		next;
		mes "[Maheo]";
		mes "N�o tema.";
		mes "Tenho certeza que meu mestre saber� um jeito de me libertar dessa pris�o de gelo.";
		mes "Ele pode ser encontrado pr�ximo � Fonte de Freya.";
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
				mes "Oh, voc� voltou!";
				mes "Ent�o meu mestre teve";
				mes "alguma id�ia de quebrar esta gelada pris�o de gelo?";
				next;
			} else {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Oh, n�o! Eu deixei o colar na cidade! Eu tratei de volta!";
				next; 
				mes "[Maheo]";
				mes "Hey, hey! Voc� n�o pode me soltar primeiro?";
				emotion(e_sob);
				close;
			}
		} else {
			mes "[Maheo]";
			mes "Meu mestre n�o deve ter o mesmo talento que eu.";
			mes "Mas ele � muito s�bio em tipos de m�gicas.";
			mes "Por favor... Pe�a sua ajuda.";
			mes "Ele deve estar lendo perto do Templo de Freya.";
			close;
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, ele fez esse machado m�gico com o qual espera-se ser capaz de quebrar esse gelo m�gico.";
		next;
		mes "[Maheo]";
		mes "� claro!";
		mes "Como eu n�o pensei nisso?";
		mes "�timo, agora me tire daqui por favor!";
		next;
		mes "^3355FFVoc� segurou o Machado de Vento bem firme, e atingiu o gelo com toda sua for�a.^000000";
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
		mes "Agora, todos os monstros nessa caverna v�o provar a ira do mago mais poderoso do mundo!";
		mes "Eu terei a minha vingan�a, e darei � essas bestas o dobro da dor que elas me deram!";
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
		mes "Oh! Ele foi feito pelos an�es, n�o foi?";
		mes "Parece que eles fizeram outra obra-prima.";
		mes "Uma pena que ele esteja t�o manchado, no entanto.";
		next;
		mes "[Maheo]";
		mes "Vamos ver, agora...";
		next;
		specialeffect(EF_FROSTWEAPON);
		mes "^3355FF*Ting*^000000";
		next;
		mes "[Maheo]";
		mes "Bem, eu suponho que � aqui que nossos caminhos se separam.";
		mes "Aqui, aceite isso como um presente...";
		mes "E por favor n�o mencione o fato de eu ter prendido a mim mesmo no gelo para ningu�m, okay?";
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
		mes "Meu mestre pode n�o ter todo meu talento.";
		mes "Mas ele � muito estudado nas variadas formas de magia.";
		mes "Por favor...";
		mes "Pe�a ajuda para ele.";
		mes "Ele deve estar lendo pr�ximo � Fonte de Freya.";
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
		mes "Hm? Voc� est� precisando de alguma coisa?";
		mes "Se n�o for t�o importante, eu gostaria de voltar a ler meu livro.";
		close;
	} else if (ice_necklace_q == 2) {
		mes "[Hamion]";
		mes "Hm? Voc� est� precisando de alguma coisa?";
		mes "Se n�o for t�o importante, eu gostaria de voltar a ler o meu livro.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Hm, voc� por acaso conheceria um mago chamado Maheo?";
		mes "Eu achava que tinha que procurar o seu mestre por essa �rea.";
		next;
		mes "[Hamion]";
		mes "Bem, voc� o encontrou porque esse seria eu.";
		mes "O que aconteceu com Maheo?";
		next;
		mes "[Hamion]";
		mes "Ele se congelou?!";
		mes "Hahahaha!";
		mes "Que g�nio!";
		mes "Oh, certo, eu suponho que ele ainda tem muito o que aprender sobre, se n�o sobre magia.";
		next;
		mes "[Hamion]";
		mes "Vamos ver, vamos ver...";
		mes "Esse livro tem que ter a resposta. Mmm... Ah!";
		mes "P�gina 42! Eu preciso construir um artefato de modo a quebrar aquele gelo m�stico. Mmm.";
		next;
		mes "[Hamion]";
		mes "Voc� me";
		mes "ajudaria? Eu preciso encontrar";
		mes "^4D4DFF5 Vento Bruto^000000,";
		mes "^4D4DFF1 Machado^000000, e";
		mes "^4D4DFF1 Pergaminhos em Branco^000000";
		next;
		mes "[Hamion]";
		mes "Voc� pode encontrar os Pergaminhos em Branco na Academia dos S�bios em Juno.";
		mes "Ah, e o Machado � uma arma, n�o uma dessas ferramentas de ferreiro.";
		mes "Eu o ajudaria se pudesse, mas...";
		mes "Eu sou apenas esperto, n�o forte.";
		ice_necklace_q = 3;
		changequest(2110,2111);
		close;
	} else if (ice_necklace_q == 3) {
		if ((countitem(Rough_Wind) < 5) || (countitem(Hammer) < 1) || (countitem(Scroll) < 1)) {
			mes "[Hamion]";
			mes "Eu preciso criar um artefato m�gico para quebrar o gelo que est� aprisionando Maheo.";
			mes "Voc�, por favor, me ajudaria?";
			mes "N�o tem como eu encontrar esses itens sozinho!";
			next;
			mes "[Hamion]";
			mes "Eu preciso encontrar";
			mes "^4D4DFF5 Vento Bruto^000000,";
			mes "^4D4DFF1 Machado^000000, e";
			mes "^4D4DFF1 Pergaminhos em Branco^000000";
			next;
			mes "[Hamion]";
			mes "Voc� pode encontrar os Pergaminhos em Branco na Academia dos S�bios em Juno.";
			mes "Ah, e o Machado � uma arma, n�o uma dessas ferramentas de ferreiro";
			mes "Eu o ajudaria se pudesse, mas...";
			mes "Eu sou apenas esperto, n�o forte.";
			close;
		}
		if (!checkweight(Hammer_Of_Wind,1)) {
			mes "^3355FFEspere um segundo!";
			mes "Agora, voce est� carregando muitas coisas com voc�.";
			mes "Por favor volte depois e use os Servi�os da Kafra para guardar alguns dos seus itens.^000000";
			close;
		}
		mes "[Hamion]";
		mes "�timo, voc� t�m tudo que eu preciso!";
		mes "Mas primeiro, voc� t�m certeza de que s� tem 1 Machado em seu invent�rio?";
		mes "Se voc� tiver mais de um, eu posso acabar pegando o Machado errado.";
		next;
		if (select("Deixa eu checar","N�o se preocupe, eu chequei") == 1) {
			mes "[Hamion]";
			mes "Est� certo, � sempre melhor prevenir do que remediar!";
			mes "Se Maheo tivesse sido um pouco mais cuidadose.";
			mes "Assim como voc� �, talvez isso n�o tivesse acontecido.";
			close;
		}
		mes "[Hamion]";
		mes "Okay, vou considerar sua palavra.";
		mes "Agora, vamos come�ar o processo para forjar o artefato.";
		mes "Hmmm... Deixe-me revisar aqui na p�gina 45.";
		next;
		mes "[Hamion]";
		mes "Aqui vamos n�s...!";
		next;
		specialeffect(EF_CONE,AREA,playerattached());
		mes "^3355FF*Pzzzz*^000000";
		next;
		mes "[Hamion]";
		mes "...Eeeee est� pronto.";
		mes "Aqui, pegue esse Machado de Vento e use-o para libertar Maheo.";
		mes "Esse martelo s� funcionar� uma vez, ent�o tenha certeza de quebrar o gelo corretamente!";
		delitem(Hammer,1);
		delitem(Rough_Wind,5);
		delitem(Scroll,1);
		ice_necklace_q = 4;
		changequest(2111,2112);
		getitem(Hammer_Of_Wind,1);
		close;
	} else {
		mes "[Hamion]";
		mes "T�m sempre p�ssaros cantando e borboletas voando por todo esse lugar";
		mes "� t�o relaxante, e um �timo lugar para ler.";
		close;
	}
}

// ------------------------------------------------------------------
rachel,113,96,5	script	Mohadian	4_M_MIDDLE,10,10,{
	if (ice_necklace_q == 6) {
		mes "[Mohadian]";
		mes "Eu trabalho no bar por aqui, e eu ouvi coisas boas sobre voc�.";
		mes "Alguns dos clientes ouviran dizer que voc� ajudou Urstialla indo dentro daquela perigosa Caverna de Gelo.";
		next;
		mes "[Mohadian]";
		mes "Agora, voc� � realmente capaz de derrotar normalmente os monstros de neve l� dentro?";
		mes "Se voc� for, eu tenho meio que uma proposta de neg�cios para voc�.";
		next;
		emotion(e_ic);
		mes "[Mohadian]";
		mes "O clima por aqui � naturalmente quente e �mido, ent�o n�s precisamos de gelo para fazer drinks gelados e refrescantes no bar.";
		mes "E a Caverna de Gelo � o melhor lugar para se pegar gelo, certo?";
		next;
		mes "[Mohadian]";
		mes "Se voc� me trouxer Peda�os de Gelo da Caverna de Gelo, eu os comprarei de voc� por 375 zeny cada.";
		mes "Pense nisso como um tipo de trabalho freelance.";
		mes "Quero dizer, se voc� puder me trazer gelo, eu comprarei!";
		next;
		mes "[Mohadian]";
		mes "Voc� pode fazer um bom dinheiro, meus clientes podem aproveitar drinks gelados e refrescantes.";
		mes "E meu neg�cio ir� definitivamente lucrar.";
		mes "N�s matar�amos tr�s p�ssaros com apenas uma pedra! O que me diz?";
		next;
		if (select("N�o, obrigado","� claro") == 1) {
			mes "[Mohadian]";
			mes "Aww, que triste.";
			mes "Eu estava certo de que isso seria um grande neg�cio para n�s dois.";
			mes "Bem, se voc� estiver pensando em mudar de id�ia n�s dois poderemos ser parceiros";
			close;
		}
		mes "[Mohadian]";
		mes "�timo! Agora, o gelo que eu preciso v�m do Cora��o Glacial.";
		mes "Voc� pode obt�-los ca�ando os monstros de neve na Caverna de Gelo.";
		mes "Lembre-se, eu irei pagar � voc� 375 zeny cada um!";
		ice_necklace_q = 7;
		close;
	} else if (ice_necklace_q == 7) {
		if (countitem(Ice_Heart) < 1) {
			mes "[Mohadian]";
			mes "Traga-me alguns Cora��es Glaciais da Caverna de Gelo.";
			mes "Eu certamente compensarei voc� com algum zeny.";
			mes "Esse � realmente um �timo neg�cio para n�s dois quando voc� reflete sobre ele.";
			close;
		}
		mes "[Mohadian]";
		mes "Perfeito, voc� me trouxe alguns Cora��es Glaciais!";
		mes "Eu nunca me acostumo com a beleza e a pureza desses cristais de gelo.";
		next;
		mes "[Mohadian]";
		mes "Sim, eu acho que ainda posso ser capaz de us�-los, deixe-me ver quantos voc� me trouxe.";
		next;
		.@hearts = countitem(Ice_Heart);
		.@totalprice = 375 * .@hearts;
		mes "[Mohadian]";
		mes .@hearts+" Cora��es Glaciais por 375 zeny cada...";
		mes "Parece que eu lhe devo "+.@totalprice+"zeny.";
		next;
		mes "[Mohadian]";
		mes "Aqui est�!";
		mes "� sempre um prazer fazer neg�cios com voc�";
		delitem(Ice_Heart,.@hearts);
		Zeny += .@totalprice;
		close;
	} else {
		mes "[Mohadian]";
		mes "O clima por aqui � naturalmente quente e �mido, ent�o n�s precisamos de gelo para fazer drinks gelados e refrescantes no bar.";
		close;
	}
}

// ------------------------------------------------------------------
ice_dun03,1,1,3	script	BlazingFire#ice	FAKE_NPC,{
	mes "^3355FFAs chamas nessa barreira de fogo crepitam com poder m�gico.";
	mes "N�o t�m jeito de apagar esse fogo pelos modos convencionais.^000000";
	if (ice_necklace_q > 4) {
		if ($@ktullanux_summon < 4) {
			if (countitem(Ice_Particle)) {
				next;
				select("Usar P� Glacial");
				mes "^3355FFVoc� salpica o P� Glacial nas chamas.";
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
				mes "^3355FFVoc� atira a Escama de Gelo dentro da chama.";
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
	mapannounce("ice_dun03","Seu aventureiro tolo, que n�o se preocupa com a d�diva da vida.",bc_map,0xFF6633);
	end;

	OnTimer16000:
	mapannounce("ice_dun03","Por causa de sua curiosidade perigosa,",bc_map,0xFF6633);
	end;

	OnTimer19000:
	mapannounce("ice_dun03","Voc� ir� provar uma dor insuport�vel, um frio que pode congelar at� mesmo a respira��o da M�e Natureza!",bc_map,0xFF6633);
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
	mapannounce("ice_dun02","V�o embora, seus animais! Eu vou queim�-los at� a morte assim que eu me libertar!",bc_map,0xFFCE00);
	end;

	OnTimer7200000:
	mapannounce("ice_dun02","Ol�? Algu�m est� me ouvindo? Eu... Eu estou meio preso!",bc_map,0xFFCE00);
	end;

	OnTimer10800000:
	stopnpctimer;
	mapannounce("ice_dun02","Por favor! Eu n�o consigo me mover! Al�? Eu acho que preciso de ajuda!",bc_map,0xFFCE00);
	initnpctimer;
	end;
}
