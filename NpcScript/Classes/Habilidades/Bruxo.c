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
| - Copyright: ?                                                    |
| - Version/Translate PT-BR: Spell Master                           |
| - Info: Aprendizagem da habilidade Explosão Protetora             |
| (WZ_SIGHTBLASTER) para Bruxo.                                     |
\*-----------------------------------------------------------------*/

gef_tower,115,36,4	script	Gato#q_wiz	4_CAT,{
	if (BaseJob == Job_Wizard) {
		if (getskilllv("WZ_SIGHTBLASTER")) {
			mes("[Gato]\n"
				"Hah! Sim...\n"
				"Tirar uma soneca soa como a melhor idéia que eu ja escutei hoje.\n"
				"Hm. ^333333*Yaaawwn*^000000\n"
				"Aqui vamos, hora de dormir...\n"
				"ZzzzzzzZZZzzz... ZzZzzzz...");
			close;
		} else {
			if (!wiz_sk) {
				mes("[Gato]\n"
					"*Yaaawn*\n"
					"Tão cansado...\n"
					"Hm? Você quer falar comigo?\n"
					"Não me incomode se você não tem nada a dizer!");
				next;
				if (select("Um gato?", "Estou com sono, também...") == 1) {
					mes("[Gato]\n"
						"Sim. Sim, Eu sou um gato no momento, de qualquer maneira.\n"
						"Raios que Catherine!\n"
						"Ela me transformou nessa forma,\n"
						"quando eu peguei emprestado algumas gemas sem o consentimento.\n"
						"Eu ia contar a ela!");
					next;
					mes("[Gato]\n"
						"Uma vez que eu virar humano de novo e ganhar meus poderes.\n"
						"Eu vou enlouquecer Catherine, você, todo mundo.\n"
						"Vocês serão todos transformado em gatos!");
					close;
				}
				mes("[Gato]\n"
					"Hah! Sim...\n"
					"Tirar uma soneca soa como a melhor ideia que eu já ouvi--oh.\n"
					"Espere.\n"
					"Você é " + (Sex == SEX_MALE ? "um bruxo" : "uma bruxa") + ", certo?\n"
					"Eu estava muito sonolento, nem mesmo percebi.\n"
					"Ah, isso é bom");
				next;
				mes("[Gato]\n"
					"Agora, devo ensinar bruxos essa nova habilidade em nome da Guilda dos Bruxos.\n"
					"Apesar de realmente não querer, eu não tenho escolha.\n"
					"Então o que você me diz?");
				next;
				if (select("Não, Estou muito sonolento...", "Claro") == 1) {
					mes("[Gato]\n"
						"^333333*Yaaaawn*^000000\n"
						"Certo.\n"
						"Se você quiser aprender mais tarde,\n"
						"então volte aqui e me lembre sobre a habilidade.\n"
						"Bom então, de volta a minha soneca...\n"
						"Zzz... Zzz...");
					close;
				}
				mes("[Gato]\n"
					"Sério? Certo, certo.\n"
					"Apenas para você saber.\n"
					"Eu apenas ensino essa habilidade,\n"
					"para que Catherine me transforme de volta na minha forma humana.\n"
					"É muito humilhante ser um Gato!");
				next;
				mes("[Gato]\n"
					"Espera aí, pensando bem sobre isso,\n"
					"aquela Cadela maria tem estado perto de Catherine por muito tempo.\n"
					"Mas ela nunca retornou a sua forma humana.\n"
					"N-não!\n"
					"Eu não posso perder a esperança agora!");
				next;
				mes("[Gato]\n"
					"Oh, vamos apenas esquecer disso.\n"
					"Agora, você está ciente de que nós Bruxos temos ótimas magias de longo alcance.\n"
					"Mas nós somos fracos em batalhas de curto alcance, certo?");
				next;
				mes("[Gato]\n"
					"Essa nova habilidade que eu vou ensinar a você foi projetada para compensar a fraqueza da Classe dos Bruxos em combate de curto alcance.\n"
					"Primeiro, você conjura a magia...");
				next;
				mes("[Gato]\n"
					"Então, pela duração da habilidade,\n"
					"você ficará protegido por um escudo que vai empurrar seus inimigos para trás,\n"
					"vai ferir inimigos que se aproximarem de mais.\n"
					"Isso não soa útil na hora de batalhar?");
				next;
				select("Eu posso empurrar meus inimigos para trás?");
				mes("[Gato]\n"
					"Claro que você pode, bem, uma vez que você aprender a habilidade.\n"
					"Hmm, mas você precisa ter um boa compreensão em teoria de empurrões,\n"
					"antes de aprender a habilidade.\n"
					"Hmm, você pode precisar de uma explicação melhor...");
				next;
				mes("[Gato]\n"
					"Sabe o quê?\n"
					"Cavaleiros são experts em habilidades que empurram o inimigo para trás,\n"
					"então vá e encontre um que explique a teoria do empurrão para você lá em Prontera");
				next;
				mes("[Gato]\n"
					"Vá em direção as 11 horas de Prontera no seu Mini-Mapa,\n"
					"para achar o a Cavalaria de Prontera.\n"
					"Alguem lá deve estar disposto a ensinar você mais sobre Habilidades que empurram...");
				wiz_sk = 1;
				close;
			} else if (wiz_sk == 1) {
				mes("[Gato]\n"
					"O que você ainda está fazendo aqui?\n"
					"Eu não te falei para ir a Cavalaria de Prontera,\n"
					"pedir para alguem te ensinar sobre a teoria de empurrão?");
				close;
			} else if (wiz_sk == 2) {
				mes("[Gato]\n"
					"Hm? Muito bom, você aprendeu as noções básicas para empurrar inimigos.\n"
					"Agora você está quase pronto para aprender a habilidade que devo ensinar a você.");
				next;
				mes("[Gato]\n"
					"Eu não sou um Filantropista."
					"Então espero algumas mensalidades por todo meu esforço e minha instrução!\n"
					"Mmm, o que seria bom para ser o meu pagamento?\n"
					"Ah, Eu estou com poucas pedras encantadas no momento.");
				next;
				mes("[Gato]\n"
					"Vá e me traga\n"
					"^FF000010 Cristais Azuis^000000,\n"
					"^FF000010 Vidas Verdejantes^000000,\n"
					"^FF000010 Sangues Escarlates^000000 e\n"
					"^FF000010 Frescores do Vento^000000.");
				next;
				mes("[Gato]\n"
					"Não é muita coisa, então não reclame e volte assim que você puder.\n"
					"Enquanto você estiver fora daqui, eu vou tirar outra soneca.");
				wiz_sk = 3;
				close;
			} else if (wiz_sk == 3) {
				if (countitem(Crystal_Blue) < 10 || countitem(Yellow_Live) < 10 || countitem(Boody_Red) < 10 || countitem(Wind_Of_Verdure) < 10) {
					mes("[Gato]\n"
						"^333333*Yaaaaaawn*^000000 Hm?\n"
						"C-como você ousa vir aqui sem tudo\n"
						"Que eu pedi a você?!\n"
						"Você esqueceu o quê trazer, não foi?\n"
						"Grrrr...");
					next;
					mes("[Gato]\n"
						"Eu disse para trazer\n"
						"^ff000010 Crystais Azuis^000000,\n"
						"^ff000010 Vidas Verdejantes^000000,\n"
						"^ff000010 Sangues Escarlates^000000 and\n"
						"^ff000010 Frescores do Vento^000000!");
					next;
					mes("[Gato]\n"
						"Não esqueça dessa vez!\n"
						"E nem mesmo pense em me acordar até você encontrar tudo que eu te pedi!");
					close;
				} else {
					mes("[Gato]\n"
						"*Yaaaawn* O quê?\n"
						"Ah, é você.\n"
						"Então você me trouxe as pedras que eu pedi?\n"
						"Mmm. Bom, deixe me ver se você trouxe todos...\n"
						"Um, dois, três...");
					next;
					mes("[Gato]\n"
						".................\n"
						"Que se dane. Eu não vou contar tudo isso.\n"
						"Apenas me dê e eu vou ensinar a habilidade para que eu possa voltar a dormir.");
					next;
					mes("[Gato]\n"
						"Essa habilidade é chamada, ''^FF0000Explosão Protetora^000000.''\n"
						"Bem legal, não?\n"
						"É uma habilidade de atributo fogo,\n"
						"que requer que você conjure Chama reveladora antes de poder ativa-la.\n"
						"Agora tente.");
					next;
					specialeffect(EF_SUI_EXPLOSION, AREA, playerattached());
					mes("^3355FF*BAM! BOOM!*^000000");
					next;
					mes("[Gato]\n"
						"......\n"
						"Huh. Não tão certo,\n"
						"mas não fpo ruim para uma primeira\n"
						"tentativa. Lembre-se de desejar que\n"
						"o empurrão aconteca. Ergh,\n"
						"vamos tentar isso mais uma vez, ok?");
					next;
					mes("[Gato]\n"
						"Você tem que ter vontade.\n"
						"Empurre!\n"
						"Empurre com sua mente!\n"
						"Bem, empurre as chamas criadas com Chama Reveledora com a sua mente.\n"
						"Não é difícil!");
					next;
					mes("[Gato]\n"
						"Finalmente...!\n"
						"Você realmente aprendeu!\n"
						"Isso deu muito trabalho, mas pelo menos nós acabamos aqui.");
					specialeffect(EF_ABSORBSPIRITS, AREA, playerattached());
					delitem(Crystal_Blue, 10);
					delitem(Yellow_Live, 10);
					delitem(Boody_Red, 10);
					delitem(Wind_Of_Verdure, 10);
					skill("WZ_SIGHTBLASTER", 1, 0);
					wiz_sk = 4;
					next;
					mes("[Gato]\n"
						"Eu estou tão cansado de toda essa aula.\n"
						"Eu acho que eu vou tirar uma tão merecida soneca agora.\n"
						"Vá embora, e se você conhecer qualquer Bruxo, mande eles virem aqui, eu acho.");
					close;
				}
			} else if (wiz_sk == 4) {
				mes("[Gato]\n"
					"O quê...?! Você esqueceu a incrível habilidade que eu te ensinei?\n"
					"Transcender não é desculpa para esquecer!\n"
					"Certo, então você quer que eu te ensine, é?\n"
					"Certo, aqui vai sua aula!");
				next;
				mes("^3355FF*BAM! BOOM! CRASH!*^000000");
				specialeffect(EF_SUI_EXPLOSION, AREA, playerattached());
				next;
				mes("[Gato]\n"
					"Não ouse ficar pretensioso, apenas porque você renasceu!\n"
					"É melhor lembrar como fazer aquela habilidade antes que eu dê outro whupping em você!");
				next;
				mes("^3355FFVocê miraculosamente relembra a Explosão Protetora.\n"
					"AQntes que ele pudesse te espancar viciosamente de novo.");
				specialeffect(EF_SUI_EXPLOSION, AREA, playerattached());
				skill("WZ_SIGHTBLASTER", 1, 0);
				wiz_sk = 0;
				next;
				mes("[Gato]\n"
					"Lembra agora?\n"
					"Ótimo.\n"
					"Agora eu vou voltar para minha soneca.\n"
					"Mesmo se você pensar em me incomodar, vou fazer você se arrepender.\n"
					"Lembre-se das minhas palavras!");
				close;
			}
		}
	} else {
		mes("[Gato]\n"
			"*Yaaawn*\n"
			"Muito sonolento...\n"
			"Hm? Você quer falar comigo?\n"
			"Não me incomode se você não tem nada para dizer!");
		next;
		if (select("Um gato?", "Fiquei com sono, também...") == 1) {
			mes("[Gato]\n"
				"Sim.\n"
				"Sim, Eu sou um gato no momento, de qualquer maneira.\n"
				"Raios que Catherine!\n"
				"Ela me transformou nessa forma,\n"
				"quando eu peguei emprestado algumas gemas sem o consentimento.\n"
				"Eu ia contar a ela!");
			next;
			mes("[Gato]\n"
				"Uma vez que eu virar Humano de novo e ganhar meus poderes.\n"
				"Eu vou enlouquecer Catherine, você, todo mundo.\n"
				"Vocês serão todos transformado em gatos!");
			close;
		}
		mes("[Gato]\n"
			"Hah! Sim...\n"
			"Tirar uma soneca soa como a melhor idéia que eu ja escutei hoje.\n"
			"Hm. ^333333*Yaaawwn*^000000\n"
			"Aqui vamos, hora de dormir...\n"
			"ZzzzzzzZZZzzz... ZzZzzzz...");
		close;
	}
}

// ------------------------------------------------------------------
prt_in,82,98,3	script	Simon Mayace#q_wiz	1_ETC_01,{
	if (wiz_sk == 1) {
		mes("[Simon]\n"
			"Ah, você deve ser um praticante muito habilidoso de magia.\n"
			"Mmm, você deve ser um daqueles Bruxos.\n"
			"Eu realmente não posso dizer a diferença.\n"
			"Ah, como eu posso te ajudar?");
		next;
		if (select("Estou bem, obrigado", "Eu quero aprender sobre Empurrões") == 1) {
			mes("[Simon]\n"
				"Estou surpreso que você escolheu praticar magia.\n"
				"A julgar pelo seu estilo,\n"
				"eu diria que você seria bem adequado para Empunhar uma espada.\n"
				"Haha, mas essa é a opinião de um simples Cavaleiro.");
			close;
		}
		mes("[Simon]\n"
			"Espere, por que você está me pedindo para te ensinar uma técnica de empurrão?\n"
			"Você pode se defender usando magias como Barreira de Fogo ou Lanças de Fogo,\n"
			"muito mais efetivamente, certo?");
		next;
		select("Mas numa distância próxima...");
		mes("[Simon]\n"
			"Ah, eu vejo.\n"
			"Sim, Bruxos não são muito efetivos em batalhas muito próximas.\n"
			"Ok, Eu posso ver por que você quer aprender algumas técnicas de Empurrões.\n"
			"Certo, eu posso te ensinar o básico.");
		next;
		mes("[Simon]\n"
			"Agora, todo aventureiro sabe os fundamentos do ataque.\n"
			"Você bate, e então sua próxima ação,\n"
			"que é ou outro ataque, um desvio ou uma defesa.\n"
			"Coisa simples, certo?");
		next;
		mes("[Simon]\n"
			"Para empurrar um inimigo de volta, você deve atacar usando um golpe com força contínua.\n"
			"Isso é tudo que precisa ser feito.\n"
			"Agora, se você ataca a cabeça, a distância do empurrão vai ser curta.");
		next;
		mes("[Simon]\n"
			"Se você atacar as pernas, seu inimigo vai cair em sua direção.\n"
			"O melhor alvo para o ataque é o tronco já que permite mais controle do empurrão.");
		next;
		mes("[Simon]\n"
			"Bem, Eu expliquei a técnica o melhor que eu pude.\n"
			"Se concentre e pratique a teoria por conta própria,\n"
			"e você deverá ser capaz de fazer isso.\n"
			"Boa^FFFFFF ^000000sorte em suas viagens, aventureiro");
		wiz_sk = 2;
		close;
	} else {
		mes("[Simon]\n"
			"Não cometa erros, espada é uma arte.\n"
			"As técnicas podem parecer brutas a primeiro olhar."
			"Mas existe uma estratégia sutil que\n"
			"Cavaleiros entendem.");
		close;
	}
}
