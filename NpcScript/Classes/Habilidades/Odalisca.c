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
| - Info: Aprendizagem da habilidade Piscadela (DC_WINKCHARM) para  |
| Odalisca.                                                         |
\*-----------------------------------------------------------------*/

comodo,204,172,5	script	Canell#dancer_sk	4_F_07,{
	if (BaseJob == Job_Dancer) {
		if (getskilllv("DC_WINKCHARM")) {
			mes("[Canell]\n"
				"Hm...?\n"
				"Há algo que você gostaria de me perguntar?\n"
				"Ah, você deve estar hipnotizada pela minha beleza, não é?");
			emotion(e_pif);
			next;
			mes("[Canell]\n"
				"Ah, ser tão bonita deve ser um pecado!\n"
				"Eu deveria ir para a Igreja de Prontera, como minha irmã, para orar por perdão.");
			close;
		} else if (JobLevel > 39) {
			if (!dancer_sk) {
				mes("[Canell]\n"
					"Todas sabemos que devemos ser bonitas para cativar quem quer que nos veja dançar.\n"
					"Mas, apostar tudo apenas em nossa aparência exterior,\n"
					"é um desperdício medonho de nosso grande potencial como artistas.");
				next;
				mes("[Canell]\n"
					"Sim, eu posso dizer que você não entende muito bem que a auto-estima\n"
					"é um elemento essencial para a verdadeira beleza.\n"
					"Agora me diga, você está confiante em sua dança...?");
				next;
				if (select("Claro, coroa velha!", "E-Eu não tenho certeza ...") == 1) {
					mes("[Canell]\n"
						"Ha-ha eu acredito que você confundiu confiança com arrogância!\n"
						"Aquele que é ingênuo não é capaz de dizer\n"
						"que há uma distinção de vital importância entre os dois.\n"
						"Agora...\n"
						"Prepare-se para a punição!");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"Aii...!\n"
						"O ch-chicote!\n"
						"E-E-Ele dóóóói!");
					specialeffect(EF_HIT2, AREA, playerattached());
					percentheal(-5, 0);
					close;
				} else {
					mes("[Canell]\n"
						"Estar consciente de seus próprios defeitos e falhas é uma etapa crucial para alcançar a perfeição.\n"
						"No entanto, a sua total negligência de seu dom de dançar é motivo para a punição!");
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
						"Felizmente, eu vou te ensinar o que você deve saber para erguer-se diante suas limitações atuais.\n"
						"Quando eu terminar com você, anjos e demônios resistirão aos seus encantos.");
					next;
					if (select("De jeito nenhum!", "Tudo bem, posso aprender") == 1) {
						mes("[Canell]\n"
							"Então...\n"
							"Você ainda não tem o domínio da refinada arte de exalar charme e humildade!\n"
							"Haverão consequências para esta brusca afronta à nossa classe!\n"
							"Prepare-se!");
						next;
						mes("[" + strcharinfo(CHAR_NAME) + "]\n"
							"Nãoooo--!\n"
							"Não o chicote de novo! Arrgh, é terrível!!\n"
							"Dói muuuito!");
						specialeffect(EF_HIT2, AREA, playerattached());
						percentheal(-10, 0);
						close;
					} else {
						mes("[Canell]\n"
							"Ha-ha  É bom que você reconhece que ainda tem muito mais para aprender.\n"
							"Bem, não vamos ficar perdendo tempo.\n"
							"Sua primeira lição será ^FF0000Treinamento de imagem e visualização própria.^000000\n"
							"Agora, para isso...");
						next;
						mes("[Canell]\n"
							"...Você deve me trazer ^FF00001 Espelho de Cristal^000000!\n"
							"Esta ferramenta é importantíssima para realizar a lição.\n"
							"Então vá buscá-la e traga para mim o mais rápido possível!");
						dancer_sk = 1;
						close;
					}
				}
			} else if (dancer_sk == 1) {
				if (countitem(Crystal_Mirror)) {
					mes("[Canell]\n"
						"Finalmente, você chegou com o espelho.\n"
						"Agora, olhe profundamente e analize seu reflexo.\n"
						"Observe cada defeito e falha."
						"Cada traço encantador do seu rosto.");
					next;
					mes("[Canell]\n"
						"Nenhum rosto é perfeito."
						"Mas saiba que seu rosto é único.\n"
						"E que é isso que lhe dá uma beleza que não pode ser encontrada em uma outra pessoa.\n"
						"Agora, repita este mantra depois de mim...");
					next;
					mes("[Canell]\n"
						"''Eu sou bonita...\n"
						"Eu sou irresistível...''");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"Eu sou bonita...\n"
						"Eu sou irresistível...");
					next;
					mes("[Canell]\n"
						"Mais alto!\n"
						"Mais sentimento!\n"
						"''Eu sou bonita!\n"
						"Eu sou irresistível!\n"
						"Eu sou a mais atraente mulher em todo o mundo!''");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"Eu sou bonita!\n"
						"Eu sou irresistível!\n"
						"Eu sou o mais atraente mulher em todo o mundo!!!!");
					specialeffect(EF_FLASHER, AREA, playerattached());
					next;
					mes("^3355FFSua auto-estima disparou para os céus como um foguete.\n"
						"Felizmente, você conseguiu evitar de se tornar uma prima donna.^000000");
					delitem(Crystal_Mirror, 1);
					dancer_sk = 2;
					close;
				} else {
					mes("[Canell]\n"
						"Eu disse para só voltar aqui com o\n"
						"^FF00001 Espelho de Cristal^000000 em mãos!\n"
						"Agora vá e traga-o antes de eu decidir puni-la severamente!");
					specialeffect(EF_CLAYMORE);
					close;
				}
			} else if (dancer_sk == 2) {
				mes("[Canell]\n"
					"Sim, o primeiro e o mais importante passo para se tornar bonita é perceber e aceitar o seu resplendor.\n"
					"Confiança em primeiro lugar, só então a beleza.\n"
					"Nunca o contrário.");
				next;
				mes("[Canell]\n"
					"Agora que você já demonstrou a forma correta de exalar beleza.\n"
					"É hora de você aprender uma técnica avançada de digamos...\n"
					"Sedução.\n"
					"Eu conheço uma especialista para te recomendar.");
				next;
				mes("[Canell]\n"
					"Vá e encontre minha irmã na Catedral de Prontera.\n"
					"Se você mencionar meu nome, ela ficará feliz em lhe ensinar.\n"
					"Faria isso eu mesma.\n"
					"Mas preciso aproveitar meu novo Espelho de Cristal");
				next;
				mes("^3355FFParece que ela ficará com seu espelho...^000000");
				emotion(e_ag, 1);
				dancer_sk = 3;
				close;
			} else if (dancer_sk < 7) {
				mes("[Canell]\n"
					"Ah, quanto glamur, este rostinho é tão lindo e fofo.\n"
					"Minha beleza é incomparável...\n"
					"Ah! É você.\n"
					"Então a minha irmã da Catedral de Prontera já ensinou-lhe alguma coisa?");
				emotion(e_go);
				close;
			} else if (dancer_sk == 7) {
				mes("[Canell]\n"
					"Ah, então você já conseguiu encontrar Aelle?\n"
					"Você conseguiu aprender algo com ela?");
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"Na verdade, eu só aprendi sobre piscadelas, mas não ao ponto de fazê-las.\n"
					"Ela... Ela ficou bêbada e não conseguiu me ensinar mais.");
				next;
				mes("[Canell]\n"
					"Ah, eu deveria ter imaginado que isso ia acontecer.\n"
					"Ah, bem, acho que não há nenhuma outra forma de aprender sobre piscadelas.\n"
					"Mas você deve saber que deixar a minha irmã bêbada...\n"
					"É punível!");
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
					"Agora, uma verdadeira dançarina deve ser capaz de desvendar o segredo da piscadela por si própria.\n"
					"Mas como eu sou uma mulher tão amável, eu vou tentar explicar isso para você.");
				next;
				mes("^3355FFMulher amável...?\n"
					"Mas ela acabou de bater em você!\n"
					"Levemente, claro.\n"
					"Mas ainda assim, um tapa é um tapa.^000000");
				dancer_sk = 8;
				close;
			} else if (dancer_sk == 8) {
				mes("[Canell]\n"
					"Tudo bem, o segredo para a piscadela perfeita é permitir que sua pálpebra mova-se de forma sedutora e num ritmo natural.\n"
					"Feche os olhos por um segundo, em seguida, abra-o lentamente quando eu contar até três.");
				next;
				mes("[Canell]\n"
					"um, dois, três olhe para mim, tente fazer igual.\n"
					"Assim!\n"
					"Um, dois, três\n"
					"Agora deixe-me vê-la a tentar.");
				emotion(e_no1);
				next;
				if (select("Um-dois-três", "Um, dois-três", "Um, dois, três") != 3) {
					mes("[Canell]\n"
						"Não, não!\n"
						"Está errado, completamente errado!\n"
						"Você não consegue fazer isso direito?!");
					next;
					mes("[" + strcharinfo(CHAR_NAME) + "]\n"
						"A-aii!\n"
						"P-por favor,...!\n"
						"O chicote denovo nãaao!");
					specialeffect(EF_HIT2, AREA, playerattached());
					percentheal(-5, 0);
					close;
				} else {
					mes("["+strcharinfo(CHAR_NAME)+"]\n"
						"Um, dois, três");
					emotion(e_no1, 1);
					specialeffect(EF_FLASHER, AREA, playerattached());
					next;
					mes("[Canell]\n"
						"Ótimo, é exatamente assim que se faz.\n"
						"Agora, não se esqueça,\n"
						"que ritmo e naturalidade são absolutamente essenciais para essa técnica de sedução.");
					emotion(e_kis);
					next;
					mes("[Canell]\n"
						"Agora que você já domina a arte de piscadelas.\n"
						"Você deve saber que você não pode seduzir aqueles que são muito mais fortes que você.\n"
						"Então suas piscadelas não funcionarão em todo mundo.");
					next;
					mes("[Canell]\n"
						"Claro, minhas piscadelas não tem essa restrição.\n"
						"Ha-ha\n"
						"Enfim, é hora de partir.\n"
						"Espero que você cresça e se torne uma dançarina mais fascinante e encantadora no futuro.");
					emotion(e_heh);
					next;
					mes("^3355FFVocê finalmente aprendeu a habilidade Piscadela.^000000");
					dancer_sk = 9;
					specialeffect(EF_ABSORBSPIRITS, AREA, playerattached());
					skill("DC_WINKCHARM", 1, 0);
					close;
				}
			} else if (dancer_sk == 9) {
				if (!getskilllv("DC_WINKCHARM")) {
					mes("[Canell]\n"
						"Hm? Ah, eu lembro de você!\n"
						"Já é uma cigana agora, esse seu olhar é inconfundível.\n"
						"Agora, eu tenho certeza você esqueceu alguns truques quando transcendeu, estou certa?\n"
						"Dê uma olhada nesta piscadela...");
					next;
					mes("[Canell]\n"
						"Lembra-se agora?\n"
						"Tudo consiste no rítmo e no movimento natural e sedutor da pálpebra.\n"
						"Eu espero que você use sua piscadela para que sua beleza interior brilhe intensamente");
					next;
					mes("^3355FFVocê aprendeu a habilidade Piscadela.^000000");
					specialeffect(EF_ABSORBSPIRITS, AREA, playerattached());
					skill("DC_WINKCHARM", 1, 0);
					dancer_sk = 0;
					close;
				} else {
					mes("[Canell]\n"
						"Hm...?\n"
						"Há algo que você gostaria de me perguntar?\n"
						"Ah, você deve estar hipnotizada pela minha beleza, não é?");
					emotion(e_pif);
					next;
					mes("[Canell]\n"
						"Ah, ser tão bonita deve ser um pecado!\n"
						"Eu deveria ir para a Igreja de Prontera, como minha irmã, para orar por perdão");
					close;
				}
			}
		} else {
			mes("[Canell]\n"
				"Oh, você é uma menina adorável!\n"
				"Ah, sinto muito.\n"
				"Mas só quando você tornar-se uma senhora, ah, não sei...\n"
				"Como quando atingir o nível 40, é que eu vou poder te ensinar algo");
			close;
		}
	} else {
		if (Sex == SEX_FEMALE) {
			mes("[Canell]\n"
				"Ah, que bonitinha esta jovem menina!\n"
				"E essa barriguinha pequenina e gordinha tão fofinha.\n"
				"Dá vontade de apertar");
			close;
		} else {
			mes("[Canell]\n"
				"Ei, bonitão...\n"
				"^333333*Piscadela*^000000");
			emotion(e_kis);
			specialeffect(EF_VALLENTINE2, AREA, playerattached());
			next;
			mes("^3355FFEstranhamente, a piscadela fez o seu coração pulsar.^000000");
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
				"Talvez ilegais, para a Vila dos Orcs, Glast Heim e para Mina de Carvão.\n"
				"Tem interesse?");
			next;
			mes("[??????]\n"
				"Irmã Aelle...\n"
				"Você ainda está tentando vender passagens ilegais denovo?");
			next;
			mes("[Aelle]\n"
				"Ah não, é o pastor!\n"
				"Shhh, se alguém lhe perguntar, eu não estava fazendo nada!");
			emotion(e_omg);
			next;
			mes("[Aelle]\n"
				"Obrigada querida...\n"
				"Eu sei que você pode manter meu negócio em segredo.\n"
				"^333333*Piscadela*^000000");
			emotion(e_no1);
			close;
		} else if (dancer_sk == 3) {
			mes("[Aelle]\n"
				"Psssiu, ei!\n"
				"Eu tenho algumas passagens.\n"
				"Talvez ilegais, para a Vila dos Orcs, Glast Heim e para Mina de Carvão.\n"
				"Tá interessada?");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Na verdade...\n"
				"Eu estou aqui procurando por alguém.\n"
				"Você não seria a irmã de Canelle?");
			next;
			mes("[Aelle]\n"
				"Ah, então minha irmã tapada mandou você vir, né?\n"
				"Eu já deveria saber, a julgar por suas roupas.\n"
				"Então você quer se tornar uma dançarina mais sedutora, não é?");
			next;
			mes("[Aelle]\n"
				"Ahhh...\n"
				"Que decepção.\n"
				"Então...\n"
				"Você não veio aqui para comprar essas passagens?\n"
				"Tem certeza que você não quer?");
			dancer_sk = 4;
			close;
		} else if (dancer_sk == 4) {
			mes("[Aelle]\n"
				"Ok, ok...\n"
				"Então você veio aqui para que eu te ensine algumas excitantes técnicas de sedução, certo?\n"
				"Bem, esta palestra que darei será longa e complicada.");
			next;
			mes("[Aelle]\n"
				"Falar e explicar todos os detalhes complexos por tanto tempo vai acabar ressecando minha garganta.\n"
				"Então, primeiro, você tem que me trazer uma bebida refrescante antes que possamos começar...");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Ah... certo.\n"
				"Tudo bem, eu acho que posso lhe dar uma poção ou duas.\n"
				"Ou talvez trazer uma garrafa de suco...");
			next;
			mes("[Aelle]\n"
				"Ei, ei, nada disso!\n"
				"Que porcaria!\n"
				"Eu quero uma bebida de verdade.\n"
				"Você sabe... Algo mais...\n"
				"^FF0000Alcoólico^000000.");
			next;
			mes("[Aelle]\n"
				"Ah, e eu vou precisar de alguns lanchinhos para me dar energia suficiente para te ensinar!\n"
				"Sim, algumas frutas saborosas em um belo prato de porcelana e alguns biscoitos também!");
			next;
			mes("[Aelle]\n"
				"Entãoooo, eu quero comer\n"
				"^FF00001 Maçã^000000, ^FF00003 Bananas^000000 e\n"
				"^FF00005 Biscoitos de Gengibre^000000.\n"
				"Ah, certifique-se trazer o ^FF0000Prato de Porcelana^000000\n"
				"para servi-los, e não esqueça o\n"
				"^FF0000Álcool^000000, ok?");
			next;
			mes("[Aelle]\n"
				"Uma última coisa...!\n"
				"Não deixe que ninguém daqui da igreja saiba o que estamos fazendo.\n"
				"Eu não quero encrenca pro meu lado!");
			dancer_sk = 5;
			close;
		} else if (dancer_sk == 5) {
			if (countitem(Alchol) && countitem(Apple) && countitem(White_Platter) && countitem(Banana) > 2 && countitem(Well_Baked_Cookie) > 4) {
				mes("[Aelle]\n"
					"Ótimo, você trouxe a comida!\n"
					"É bom mesmo, por que eu estou morrendo de fome!\n"
					"Eu vou devorar tudo!");
				next;
				mes("^3355FFAelle  devorou a comida como uma fera faminta.\n"
					"Que não comia há muito tempo.^000000");
				next;
				mes("[Aelle]\n"
					"Isso foi muuuito bom!\n"
					"Eu não tinha comido tanto em toda minha vida!\n"
					"Afinal, não se tem muitas chances se entupir de comida na igreja...\n"
					"Ah, é verdade, a lição!");
				next;
				mes("[Aelle]\n"
					"Agora,o mais fácil, mais sutil e mais atraente gesto de todos os tempos é a\n"
					"^FF0000Piscadela^000000.\n"
					"Ela me salvou em tempos de crise, domina-la irá aprimorar seus encantos.");
				next;
				mes("[Aelle]\n"
					"Para o olho destreinado, a piscadela só parece um movimento simples, certo?\n"
					"Você fecha um olho, e então você abre novamete.\n"
					"Mas se você fizer corretamente...\n"
					"Se você...");
				next;
				mes("[Aelle]\n"
					"Ah,faz tanto tempo que eu não bebo tanto!\n"
					"Ugh, estou me s-sentindo meio t-tonta, b-basta fechar e a-abrir...\n"
					"^333333*Arrroto*^000000\n"
					"P-piscadela!\n"
					"É tão tão tão tão fááááácil");
				next;
				mes("[Aelle]\n"
					"Faça depois de mim!\n"
					"Eu faço assim e...\n"
					"Piscadela! S-só isso, ok?\n"
					"Você entendeu?\n"
					"^333333*Piiiiiiscadela*^000000");
				emotion(e_no1);
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"A-ahhhh...\n"
					"Isso foi...\n"
					"Tão lindo!\n"
					"E tudo com apenas uma simples piscadela!");
				next;
				mes("[Aelle]\n"
					"S-sim... o...\n"
					"O c-chegredo...\n"
					"*Soluço*\n"
					"É na...\n"
					"Haahahahaahah!\n"
					"Está tudo girando!");
				emotion(e_heh);
				next;
				mes("^3355FFEm sua loucura causada pelo álcool.\n"
					"Aelle te dá uma bofetada e começa a rir como uma maníaca.^000000");
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
					"Como você pode querer que eu te ensine alguma coisa se eu desmaiar no meio da a lição?\n"
					"É isso mesmo, vou precisar de alguns nutritivos e deliciosos petiscos para comer");
				next;
				mes("[Aelle]\n"
					"Entãoooo, eu quero comer\n"
					"^FF00001 Maçã^000000, ^FF00003 Bananas^000000 e\n"
					"^FF00005 Biscoitos de Gengibre^000000.\n"
					"Ah, certifique-se trazer o\n"
					"^FF0000Prato de Porcelana^000000\n"
					"para servi-los, e não esqueça o\n"
					"^FF0000Álcool^000000, ok?");
				close;
			}
		} else if (dancer_sk == 6) {
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Você ainda não me contou o segredo para fazer uma piscadela simples ser tão charmosa e provocante.\n"
				"Eu realmente preciso saber...");
			next;
			mes("[Aelle]\n"
				"ZzzZzz... O que?\n"
				"Sim, eu sei, eu sou ...\n"
				"Eu sou um gêêênio, sim ...\n"
				"...ZzzzZzzzZzZzzzZZZzz...");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"A-Acorda!\n"
				"Eu passei por muita coisa só pra aprender esta técnica!");
			next;
			mes("[Aelle]\n"
				"CALADAA!\n"
				"Eu estou com CHOOOOOONO!\n"
				"V-vá embora.\n"
				"Fale com Canell, minha irmã ...\n"
				"...ZzzzzZzZZZzzzZZ....");
			dancer_sk = 7;
			close;
		} else {
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Aelle, eu realmente preciso de você para me ensinar tudo o que\n"
				"Eu preciso saber sobre piscadelas e...");
			next;
			mes("[Aelle]\n"
				"^333333*Soluço*^000000 Zzz..\n"
				"O que?\n"
				"Eu preciso te ensinar a ir embora?\n"
				"Vá falar com a minha irmã, estou muito cansada agora.\n"
				"Vá, me deixe sozinha garota!");
			close;
		}
	} else {
		mes("[Aelle]\n"
			"Psssiu, ei!\n"
			"Eu tenho algumas passagens.\n"
			"Talvez ilegais, para a Vila dos Orcs, Glast Heim e para Mina de Carvão.\n"
			"Tem interesse?");
		next;
		mes("[??????]\n"
			"Irmã Aelle...\n"
			"Você ainda está tentando vender passagens ilegais denovo?");
		next;
		mes("[Aelle]\n"
			"Ah não, é o pastor!\n"
			"Shhh, se alguém lhe perguntar, eu não estava fazendo nada!");
		emotion(e_omg);
		next;
		mes("[Aelle]\n"
			"Obrigada querida...\n"
			"Eu sei que você pode manter meu negócio em segredo.\n"
			"^333333*Piscadela*^000000");
		emotion(e_no1);
		close;
	}
}
