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
| - Info: Aprendizagem da habilidade Piscadela (DC_WINKCHARM) para  |
| Odalisca.                                                         |
\*-----------------------------------------------------------------*/

comodo,204,172,5	script	Canell#dancer_sk	4_F_07,{
	if (BaseJob == Job_Dancer) {
		if (getskilllv("DC_WINKCHARM")) {
			mes("[Canell]\n"
				"Hm...?\n"
				"H� algo que voc� gostaria de me perguntar?\n"
				"Ah, voc� deve estar hipnotizada pela minha beleza, n�o �?");
			emotion(e_pif);
			next;
			mes("[Canell]\n"
				"Ah, ser t�o bonita deve ser um pecado!\n"
				"Eu deveria ir para a Igreja de Prontera, como minha irm�, para orar por perd�o.");
			close;
		} else if (JobLevel > 39) {
			if (!dancer_sk) {
				mes("[Canell]\n"
					"Todas sabemos que devemos ser bonitas para cativar quem quer que nos veja dan�ar.\n"
					"Mas, apostar tudo apenas em nossa apar�ncia exterior,\n"
					"� um desperd�cio medonho de nosso grande potencial como artistas.");
				next;
				mes("[Canell]\n"
					"Sim, eu posso dizer que voc� n�o entende muito bem que a auto-estima\n"
					"� um elemento essencial para a verdadeira beleza.\n"
					"Agora me diga, voc� est� confiante em sua dan�a...?");
				next;
				if (select("Claro, coroa velha!", "E-Eu n�o tenho certeza ...") == 1) {
					mes("[Canell]\n"
						"Ha-ha eu acredito que voc� confundiu confian�a com arrog�ncia!\n"
						"Aquele que � ing�nuo n�o � capaz de dizer\n"
						"que h� uma distin��o de vital import�ncia entre os dois.\n"
						"Agora...\n"
						"Prepare-se para a puni��o!");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"Aii...!\n"
						"O ch-chicote!\n"
						"E-E-Ele d����i!");
					specialeffect(EF_HIT2, AREA, playerattached());
					percentheal(-5, 0);
					close;
				} else {
					mes("[Canell]\n"
						"Estar consciente de seus pr�prios defeitos e falhas � uma etapa crucial para alcan�ar a perfei��o.\n"
						"No entanto, a sua total neglig�ncia de seu dom de dan�ar � motivo para a puni��o!");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"Mas o que...? Ahh!\n"
						"P-pare de Ch-chicoteaaar!!!\n"
						"E... Ele fuuura!!");
					specialeffect(EF_HIT2, AREA, playerattached());
					percentheal(-10, 0);
					next;
					mes("[Canell]\n"
						"Ha-ha!\n"
						"Felizmente, eu vou te ensinar o que voc� deve saber para erguer-se diante suas limita��es atuais.\n"
						"Quando eu terminar com voc�, anjos e dem�nios resistir�o aos seus encantos.");
					next;
					if (select("De jeito nenhum!", "Tudo bem, posso aprender") == 1) {
						mes("[Canell]\n"
							"Ent�o...\n"
							"Voc� ainda n�o tem o dom�nio da refinada arte de exalar charme e humildade!\n"
							"Haver�o consequ�ncias para esta brusca afronta � nossa classe!\n"
							"Prepare-se!");
						next;
						mes("[" + strcharinfo(CHAR_NAME) + "]\n"
							"N�oooo--!\n"
							"N�o o chicote de novo! Arrgh, � terr�vel!!\n"
							"D�i muuuito!");
						specialeffect(EF_HIT2, AREA, playerattached());
						percentheal(-10, 0);
						close;
					} else {
						mes("[Canell]\n"
							"Ha-ha  � bom que voc� reconhece que ainda tem muito mais para aprender.\n"
							"Bem, n�o vamos ficar perdendo tempo.\n"
							"Sua primeira li��o ser� ^FF0000Treinamento de imagem e visualiza��o pr�pria.^000000\n"
							"Agora, para isso...");
						next;
						mes("[Canell]\n"
							"...Voc� deve me trazer ^FF00001 Espelho de Cristal^000000!\n"
							"Esta ferramenta � important�ssima para realizar a li��o.\n"
							"Ent�o v� busc�-la e traga para mim o mais r�pido poss�vel!");
						dancer_sk = 1;
						close;
					}
				}
			} else if (dancer_sk == 1) {
				if (countitem(Crystal_Mirror)) {
					mes("[Canell]\n"
						"Finalmente, voc� chegou com o espelho.\n"
						"Agora, olhe profundamente e analize seu reflexo.\n"
						"Observe cada defeito e falha."
						"Cada tra�o encantador do seu rosto.");
					next;
					mes("[Canell]\n"
						"Nenhum rosto � perfeito."
						"Mas saiba que seu rosto � �nico.\n"
						"E que � isso que lhe d� uma beleza que n�o pode ser encontrada em uma outra pessoa.\n"
						"Agora, repita este mantra depois de mim...");
					next;
					mes("[Canell]\n"
						"''Eu sou bonita...\n"
						"Eu sou irresist�vel...''");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"Eu sou bonita...\n"
						"Eu sou irresist�vel...");
					next;
					mes("[Canell]\n"
						"Mais alto!\n"
						"Mais sentimento!\n"
						"''Eu sou bonita!\n"
						"Eu sou irresist�vel!\n"
						"Eu sou a mais atraente mulher em todo o mundo!''");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"Eu sou bonita!\n"
						"Eu sou irresist�vel!\n"
						"Eu sou o mais atraente mulher em todo o mundo!!!!");
					specialeffect(EF_FLASHER, AREA, playerattached());
					next;
					mes("^3355FFSua auto-estima disparou para os c�us como um foguete.\n"
						"Felizmente, voc� conseguiu evitar de se tornar uma prima donna.^000000");
					delitem(Crystal_Mirror, 1);
					dancer_sk = 2;
					close;
				} else {
					mes("[Canell]\n"
						"Eu disse para s� voltar aqui com o\n"
						"^FF00001 Espelho de Cristal^000000 em m�os!\n"
						"Agora v� e traga-o antes de eu decidir puni-la severamente!");
					specialeffect(EF_CLAYMORE);
					close;
				}
			} else if (dancer_sk == 2) {
				mes("[Canell]\n"
					"Sim, o primeiro e o mais importante passo para se tornar bonita � perceber e aceitar o seu resplendor.\n"
					"Confian�a em primeiro lugar, s� ent�o a beleza.\n"
					"Nunca o contr�rio.");
				next;
				mes("[Canell]\n"
					"Agora que voc� j� demonstrou a forma correta de exalar beleza.\n"
					"� hora de voc� aprender uma t�cnica avan�ada de digamos...\n"
					"Sedu��o.\n"
					"Eu conhe�o uma especialista para te recomendar.");
				next;
				mes("[Canell]\n"
					"V� e encontre minha irm� na Catedral de Prontera.\n"
					"Se voc� mencionar meu nome, ela ficar� feliz em lhe ensinar.\n"
					"Faria isso eu mesma.\n"
					"Mas preciso aproveitar meu novo Espelho de Cristal");
				next;
				mes("^3355FFParece que ela ficar� com seu espelho...^000000");
				emotion(e_ag, 1);
				dancer_sk = 3;
				close;
			} else if (dancer_sk < 7) {
				mes("[Canell]\n"
					"Ah, quanto glamur, este rostinho � t�o lindo e fofo.\n"
					"Minha beleza � incompar�vel...\n"
					"Ah! � voc�.\n"
					"Ent�o a minha irm� da Catedral de Prontera j� ensinou-lhe alguma coisa?");
				emotion(e_go);
				close;
			} else if (dancer_sk == 7) {
				mes("[Canell]\n"
					"Ah, ent�o voc� j� conseguiu encontrar Aelle?\n"
					"Voc� conseguiu aprender algo com ela?");
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"Na verdade, eu s� aprendi sobre piscadelas, mas n�o ao ponto de faz�-las.\n"
					"Ela... Ela ficou b�bada e n�o conseguiu me ensinar mais.");
				next;
				mes("[Canell]\n"
					"Ah, eu deveria ter imaginado que isso ia acontecer.\n"
					"Ah, bem, acho que n�o h� nenhuma outra forma de aprender sobre piscadelas.\n"
					"Mas voc� deve saber que deixar a minha irm� b�bada...\n"
					"� pun�vel!");
				next;
				mes("[Canell]\n"
					"Paft!");
				specialeffect(EF_HIT2, AREA, playerattached());
				percentheal(-5, 0);
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"?!\n"
					"O-o que fo-foi isso?");
				next;
				mes("[Canell]\n"
					"Agora, uma verdadeira dan�arina deve ser capaz de desvendar o segredo da piscadela por si pr�pria.\n"
					"Mas como eu sou uma mulher t�o am�vel, eu vou tentar explicar isso para voc�.");
				next;
				mes("^3355FFMulher am�vel...?\n"
					"Mas ela acabou de bater em voc�!\n"
					"Levemente, claro.\n"
					"Mas ainda assim, um tapa � um tapa.^000000");
				dancer_sk = 8;
				close;
			} else if (dancer_sk == 8) {
				mes("[Canell]\n"
					"Tudo bem, o segredo para a piscadela perfeita � permitir que sua p�lpebra mova-se de forma sedutora e num ritmo natural.\n"
					"Feche os olhos por um segundo, em seguida, abra-o lentamente quando eu contar at� tr�s.");
				next;
				mes("[Canell]\n"
					"um, dois, tr�s olhe para mim, tente fazer igual.\n"
					"Assim!\n"
					"Um, dois, tr�s\n"
					"Agora deixe-me v�-la a tentar.");
				emotion(e_no1);
				next;
				if (select("Um-dois-tr�s", "Um, dois-tr�s", "Um, dois, tr�s") != 3) {
					mes("[Canell]\n"
						"N�o, n�o!\n"
						"Est� errado, completamente errado!\n"
						"Voc� n�o consegue fazer isso direito?!");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"A-aii!\n"
						"P-por favor,...!\n"
						"O chicote denovo n�aao!");
					specialeffect(EF_HIT2, AREA, playerattached());
					percentheal(-5, 0);
					close;
				} else {
					mes("["+strcharinfo(CHAR_NAME)+"]\n"
						"Um, dois, tr�s");
					emotion(e_no1, 1);
					specialeffect(EF_FLASHER, AREA, playerattached());
					next;
					mes("[Canell]\n"
						"�timo, � exatamente assim que se faz.\n"
						"Agora, n�o se esque�a,\n"
						"que ritmo e naturalidade s�o absolutamente essenciais para essa t�cnica de sedu��o.");
					emotion(e_kis);
					next;
					mes("[Canell]\n"
						"Agora que voc� j� domina a arte de piscadelas.\n"
						"Voc� deve saber que voc� n�o pode seduzir aqueles que s�o muito mais fortes que voc�.\n"
						"Ent�o suas piscadelas n�o funcionar�o em todo mundo.");
					next;
					mes("[Canell]\n"
						"Claro, minhas piscadelas n�o tem essa restri��o.\n"
						"Ha-ha\n"
						"Enfim, � hora de partir.\n"
						"Espero que voc� cres�a e se torne uma dan�arina mais fascinante e encantadora no futuro.");
					emotion(e_heh);
					next;
					mes("^3355FFVoc� finalmente aprendeu a habilidade Piscadela.^000000");
					dancer_sk = 9;
					specialeffect(EF_ABSORBSPIRITS, AREA, playerattached());
					skill("DC_WINKCHARM", 1, 0);
					close;
				}
			} else if (dancer_sk == 9) {
				if (!getskilllv("DC_WINKCHARM")) {
					mes("[Canell]\n"
						"Hm? Ah, eu lembro de voc�!\n"
						"J� � uma cigana agora, esse seu olhar � inconfund�vel.\n"
						"Agora, eu tenho certeza voc� esqueceu alguns truques quando transcendeu, estou certa?\n"
						"D� uma olhada nesta piscadela...");
					next;
					mes("[Canell]\n"
						"Lembra-se agora?\n"
						"Tudo consiste no r�tmo e no movimento natural e sedutor da p�lpebra.\n"
						"Eu espero que voc� use sua piscadela para que sua beleza interior brilhe intensamente");
					next;
					mes("^3355FFVoc� aprendeu a habilidade Piscadela.^000000");
					specialeffect(EF_ABSORBSPIRITS, AREA, playerattached());
					skill("DC_WINKCHARM", 1, 0);
					dancer_sk = 0;
					close;
				} else {
					mes("[Canell]\n"
						"Hm...?\n"
						"H� algo que voc� gostaria de me perguntar?\n"
						"Ah, voc� deve estar hipnotizada pela minha beleza, n�o �?");
					emotion(e_pif);
					next;
					mes("[Canell]\n"
						"Ah, ser t�o bonita deve ser um pecado!\n"
						"Eu deveria ir para a Igreja de Prontera, como minha irm�, para orar por perd�o");
					close;
				}
			}
		} else {
			mes("[Canell]\n"
				"Oh, voc� � uma menina ador�vel!\n"
				"Ah, sinto muito.\n"
				"Mas s� quando voc� tornar-se uma senhora, ah, n�o sei...\n"
				"Como quando atingir o n�vel 40, � que eu vou poder te ensinar algo");
			close;
		}
	} else {
		if (Sex == SEX_FEMALE) {
			mes("[Canell]\n"
				"Ah, que bonitinha esta jovem menina!\n"
				"E essa barriguinha pequenina e gordinha t�o fofinha.\n"
				"D� vontade de apertar");
			close;
		} else {
			mes("[Canell]\n"
				"Ei, bonit�o...\n"
				"^333333*Piscadela*^000000");
			emotion(e_kis);
			specialeffect(EF_VALLENTINE2, AREA, playerattached());
			next;
			mes("^3355FFEstranhamente, a piscadela fez o seu cora��o pulsar.^000000");
			close;
		}
	}
}

// ------------------------------------------------------------------
prontera,183,333,1	script	Aelle#dancer_sk	1_F_PRIEST,{
	if (BaseJob == Job_Dancer) {
		if (dancer_sk < 3) {
			mes("[Aelle]\n"
				"Psssiu, ei!\n"
				"Eu tenho algumas passagens.\n"
				"Talvez ilegais, para a Vila dos Orcs, Glast Heim e para Mina de Carv�o.\n"
				"Tem interesse?");
			next;
			mes("[??????]\n"
				"Irm� Aelle...\n"
				"Voc� ainda est� tentando vender passagens ilegais denovo?");
			next;
			mes("[Aelle]\n"
				"Ah n�o, � o pastor!\n"
				"Shhh, se algu�m lhe perguntar, eu n�o estava fazendo nada!");
			emotion(e_omg);
			next;
			mes("[Aelle]\n"
				"Obrigada querida...\n"
				"Eu sei que voc� pode manter meu neg�cio em segredo.\n"
				"^333333*Piscadela*^000000");
			emotion(e_no1);
			close;
		} else if (dancer_sk == 3) {
			mes("[Aelle]\n"
				"Psssiu, ei!\n"
				"Eu tenho algumas passagens.\n"
				"Talvez ilegais, para a Vila dos Orcs, Glast Heim e para Mina de Carv�o.\n"
				"T� interessada?");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Na verdade...\n"
				"Eu estou aqui procurando por algu�m.\n"
				"Voc� n�o seria a irm� de Canelle?");
			next;
			mes("[Aelle]\n"
				"Ah, ent�o minha irm� tapada mandou voc� vir, n�?\n"
				"Eu j� deveria saber, a julgar por suas roupas.\n"
				"Ent�o voc� quer se tornar uma dan�arina mais sedutora, n�o �?");
			next;
			mes("[Aelle]\n"
				"Ahhh...\n"
				"Que decep��o.\n"
				"Ent�o...\n"
				"Voc� n�o veio aqui para comprar essas passagens?\n"
				"Tem certeza que voc� n�o quer?");
			dancer_sk = 4;
			close;
		} else if (dancer_sk == 4) {
			mes("[Aelle]\n"
				"Ok, ok...\n"
				"Ent�o voc� veio aqui para que eu te ensine algumas excitantes t�cnicas de sedu��o, certo?\n"
				"Bem, esta palestra que darei ser� longa e complicada.");
			next;
			mes("[Aelle]\n"
				"Falar e explicar todos os detalhes complexos por tanto tempo vai acabar ressecando minha garganta.\n"
				"Ent�o, primeiro, voc� tem que me trazer uma bebida refrescante antes que possamos come�ar...");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Ah... certo.\n"
				"Tudo bem, eu acho que posso lhe dar uma po��o ou duas.\n"
				"Ou talvez trazer uma garrafa de suco...");
			next;
			mes("[Aelle]\n"
				"Ei, ei, nada disso!\n"
				"Que porcaria!\n"
				"Eu quero uma bebida de verdade.\n"
				"Voc� sabe... Algo mais...\n"
				"^FF0000Alco�lico^000000.");
			next;
			mes("[Aelle]\n"
				"Ah, e eu vou precisar de alguns lanchinhos para me dar energia suficiente para te ensinar!\n"
				"Sim, algumas frutas saborosas em um belo prato de porcelana e alguns biscoitos tamb�m!");
			next;
			mes("[Aelle]\n"
				"Ent�oooo, eu quero comer\n"
				"^FF00001 Ma��^000000, ^FF00003 Bananas^000000 e\n"
				"^FF00005 Biscoitos de Gengibre^000000.\n"
				"Ah, certifique-se trazer o ^FF0000Prato de Porcelana^000000\n"
				"para servi-los, e n�o esque�a o\n"
				"^FF0000�lcool^000000, ok?");
			next;
			mes("[Aelle]\n"
				"Uma �ltima coisa...!\n"
				"N�o deixe que ningu�m daqui da igreja saiba o que estamos fazendo.\n"
				"Eu n�o quero encrenca pro meu lado!");
			dancer_sk = 5;
			close;
		} else if (dancer_sk == 5) {
			if (countitem(Alchol) && countitem(Apple) && countitem(White_Platter) && countitem(Banana) > 2 && countitem(Well_Baked_Cookie) > 4) {
				mes("[Aelle]\n"
					"�timo, voc� trouxe a comida!\n"
					"� bom mesmo, por que eu estou morrendo de fome!\n"
					"Eu vou devorar tudo!");
				next;
				mes("^3355FFAelle  devorou a comida como uma fera faminta.\n"
					"Que n�o comia h� muito tempo.^000000");
				next;
				mes("[Aelle]\n"
					"Isso foi muuuito bom!\n"
					"Eu n�o tinha comido tanto em toda minha vida!\n"
					"Afinal, n�o se tem muitas chances se entupir de comida na igreja...\n"
					"Ah, � verdade, a li��o!");
				next;
				mes("[Aelle]\n"
					"Agora,o mais f�cil, mais sutil e mais atraente gesto de todos os tempos � a\n"
					"^FF0000Piscadela^000000.\n"
					"Ela me salvou em tempos de crise, domina-la ir� aprimorar seus encantos.");
				next;
				mes("[Aelle]\n"
					"Para o olho destreinado, a piscadela s� parece um movimento simples, certo?\n"
					"Voc� fecha um olho, e ent�o voc� abre novamete.\n"
					"Mas se voc� fizer corretamente...\n"
					"Se voc�...");
				next;
				mes("[Aelle]\n"
					"Ah,faz tanto tempo que eu n�o bebo tanto!\n"
					"Ugh, estou me s-sentindo meio t-tonta, b-basta fechar e a-abrir...\n"
					"^333333*Arrroto*^000000\n"
					"P-piscadela!\n"
					"� t�o t�o t�o t�o f�����cil");
				next;
				mes("[Aelle]\n"
					"Fa�a depois de mim!\n"
					"Eu fa�o assim e...\n"
					"Piscadela! S-s� isso, ok?\n"
					"Voc� entendeu?\n"
					"^333333*Piiiiiiscadela*^000000");
				emotion(e_no1);
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"A-ahhhh...\n"
					"Isso foi...\n"
					"T�o lindo!\n"
					"E tudo com apenas uma simples piscadela!");
				next;
				mes("[Aelle]\n"
					"S-sim... o...\n"
					"O c-chegredo...\n"
					"*Solu�o*\n"
					"� na...\n"
					"Haahahahaahah!\n"
					"Est� tudo girando!");
				emotion(e_heh);
				next;
				mes("^3355FFEm sua loucura causada pelo �lcool.\n"
					"Aelle te d� uma bofetada e come�a a rir como uma man�aca.^000000");
				percentheal(-10, 0);
				specialeffect(EF_HIT2, AREA, playerattached());
				emotion(e_dots, 1);
				delitem(Alchol, 1);
				delitem(Apple, 1);
				delitem(Banana, 3);
				delitem(Well_Baked_Cookie, 5);
				delitem(White_Platter, 1);
				dancer_sk = 6;
				close;
			} else {
				mes("[Aelle]\n"
					"Como voc� pode querer que eu te ensine alguma coisa se eu desmaiar no meio da a li��o?\n"
					"� isso mesmo, vou precisar de alguns nutritivos e deliciosos petiscos para comer");
				next;
				mes("[Aelle]\n"
					"Ent�oooo, eu quero comer\n"
					"^FF00001 Ma��^000000, ^FF00003 Bananas^000000 e\n"
					"^FF00005 Biscoitos de Gengibre^000000.\n"
					"Ah, certifique-se trazer o\n"
					"^FF0000Prato de Porcelana^000000\n"
					"para servi-los, e n�o esque�a o\n"
					"^FF0000�lcool^000000, ok?");
				close;
			}
		} else if (dancer_sk == 6) {
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Voc� ainda n�o me contou o segredo para fazer uma piscadela simples ser t�o charmosa e provocante.\n"
				"Eu realmente preciso saber...");
			next;
			mes("[Aelle]\n"
				"ZzzZzz... O que?\n"
				"Sim, eu sei, eu sou ...\n"
				"Eu sou um g���nio, sim ...\n"
				"...ZzzzZzzzZzZzzzZZZzz...");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"A-Acorda!\n"
				"Eu passei por muita coisa s� pra aprender esta t�cnica!");
			next;
			mes("[Aelle]\n"
				"CALADAA!\n"
				"Eu estou com CHOOOOOONO!\n"
				"V-v� embora.\n"
				"Fale com Canell, minha irm� ...\n"
				"...ZzzzzZzZZZzzzZZ....");
			dancer_sk = 7;
			close;
		} else {
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Aelle, eu realmente preciso de voc� para me ensinar tudo o que\n"
				"Eu preciso saber sobre piscadelas e...");
			next;
			mes("[Aelle]\n"
				"^333333*Solu�o*^000000 Zzz..\n"
				"O que?\n"
				"Eu preciso te ensinar a ir embora?\n"
				"V� falar com a minha irm�, estou muito cansada agora.\n"
				"V�, me deixe sozinha garota!");
			close;
		}
	} else {
		mes("[Aelle]\n"
			"Psssiu, ei!\n"
			"Eu tenho algumas passagens.\n"
			"Talvez ilegais, para a Vila dos Orcs, Glast Heim e para Mina de Carv�o.\n"
			"Tem interesse?");
		next;
		mes("[??????]\n"
			"Irm� Aelle...\n"
			"Voc� ainda est� tentando vender passagens ilegais denovo?");
		next;
		mes("[Aelle]\n"
			"Ah n�o, � o pastor!\n"
			"Shhh, se algu�m lhe perguntar, eu n�o estava fazendo nada!");
		emotion(e_omg);
		next;
		mes("[Aelle]\n"
			"Obrigada querida...\n"
			"Eu sei que voc� pode manter meu neg�cio em segredo.\n"
			"^333333*Piscadela*^000000");
		emotion(e_no1);
		close;
	}
}
