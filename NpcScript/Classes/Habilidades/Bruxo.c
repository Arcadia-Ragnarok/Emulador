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
| - Info: Aprendizagem da habilidade Explos�o Protetora             |
| (WZ_SIGHTBLASTER) para Bruxo.                                     |
\*-----------------------------------------------------------------*/

gef_tower,115,36,4	script	Gato#q_wiz	4_CAT,{
	if (BaseJob == Job_Wizard) {
		if (getskilllv("WZ_SIGHTBLASTER")) {
			mes("[Gato]\n"
				"Hah! Sim...\n"
				"Tirar uma soneca soa como a melhor id�ia que eu ja escutei hoje.\n"
				"Hm. ^333333*Yaaawwn*^000000\n"
				"Aqui vamos, hora de dormir...\n"
				"ZzzzzzzZZZzzz... ZzZzzzz...");
			close;
		} else {
			if (!wiz_sk) {
				mes("[Gato]\n"
					"*Yaaawn*\n"
					"T�o cansado...\n"
					"Hm? Voc� quer falar comigo?\n"
					"N�o me incomode se voc� n�o tem nada a dizer!");
				next;
				if (select("Um gato?", "Estou com sono, tamb�m...") == 1) {
					mes("[Gato]\n"
						"Sim. Sim, Eu sou um gato no momento, de qualquer maneira.\n"
						"Raios que Catherine!\n"
						"Ela me transformou nessa forma,\n"
						"quando eu peguei emprestado algumas gemas sem o consentimento.\n"
						"Eu ia contar a ela!");
					next;
					mes("[Gato]\n"
						"Uma vez que eu virar humano de novo e ganhar meus poderes.\n"
						"Eu vou enlouquecer Catherine, voc�, todo mundo.\n"
						"Voc�s ser�o todos transformado em gatos!");
					close;
				}
				mes("[Gato]\n"
					"Hah! Sim...\n"
					"Tirar uma soneca soa como a melhor ideia que eu j� ouvi--oh.\n"
					"Espere.\n"
					"Voc� � " + (Sex == SEX_MALE ? "um bruxo" : "uma bruxa") + ", certo?\n"
					"Eu estava muito sonolento, nem mesmo percebi.\n"
					"Ah, isso � bom");
				next;
				mes("[Gato]\n"
					"Agora, devo ensinar bruxos essa nova habilidade em nome da Guilda dos Bruxos.\n"
					"Apesar de realmente n�o querer, eu n�o tenho escolha.\n"
					"Ent�o o que voc� me diz?");
				next;
				if (select("N�o, Estou muito sonolento...", "Claro") == 1) {
					mes("[Gato]\n"
						"^333333*Yaaaawn*^000000\n"
						"Certo.\n"
						"Se voc� quiser aprender mais tarde,\n"
						"ent�o volte aqui e me lembre sobre a habilidade.\n"
						"Bom ent�o, de volta a minha soneca...\n"
						"Zzz... Zzz...");
					close;
				}
				mes("[Gato]\n"
					"S�rio? Certo, certo.\n"
					"Apenas para voc� saber.\n"
					"Eu apenas ensino essa habilidade,\n"
					"para que Catherine me transforme de volta na minha forma humana.\n"
					"� muito humilhante ser um Gato!");
				next;
				mes("[Gato]\n"
					"Espera a�, pensando bem sobre isso,\n"
					"aquela Cadela maria tem estado perto de Catherine por muito tempo.\n"
					"Mas ela nunca retornou a sua forma humana.\n"
					"N-n�o!\n"
					"Eu n�o posso perder a esperan�a agora!");
				next;
				mes("[Gato]\n"
					"Oh, vamos apenas esquecer disso.\n"
					"Agora, voc� est� ciente de que n�s Bruxos temos �timas magias de longo alcance.\n"
					"Mas n�s somos fracos em batalhas de curto alcance, certo?");
				next;
				mes("[Gato]\n"
					"Essa nova habilidade que eu vou ensinar a voc� foi projetada para compensar a fraqueza da Classe dos Bruxos em combate de curto alcance.\n"
					"Primeiro, voc� conjura a magia...");
				next;
				mes("[Gato]\n"
					"Ent�o, pela dura��o da habilidade,\n"
					"voc� ficar� protegido por um escudo que vai empurrar seus inimigos para tr�s,\n"
					"vai ferir inimigos que se aproximarem de mais.\n"
					"Isso n�o soa �til na hora de batalhar?");
				next;
				select("Eu posso empurrar meus inimigos para tr�s?");
				mes("[Gato]\n"
					"Claro que voc� pode, bem, uma vez que voc� aprender a habilidade.\n"
					"Hmm, mas voc� precisa ter um boa compreens�o em teoria de empurr�es,\n"
					"antes de aprender a habilidade.\n"
					"Hmm, voc� pode precisar de uma explica��o melhor...");
				next;
				mes("[Gato]\n"
					"Sabe o qu�?\n"
					"Cavaleiros s�o experts em habilidades que empurram o inimigo para tr�s,\n"
					"ent�o v� e encontre um que explique a teoria do empurr�o para voc� l� em Prontera");
				next;
				mes("[Gato]\n"
					"V� em dire��o as 11 horas de Prontera no seu Mini-Mapa,\n"
					"para achar o a Cavalaria de Prontera.\n"
					"Alguem l� deve estar disposto a ensinar voc� mais sobre Habilidades que empurram...");
				wiz_sk = 1;
				close;
			} else if (wiz_sk == 1) {
				mes("[Gato]\n"
					"O que voc� ainda est� fazendo aqui?\n"
					"Eu n�o te falei para ir a Cavalaria de Prontera,\n"
					"pedir para alguem te ensinar sobre a teoria de empurr�o?");
				close;
			} else if (wiz_sk == 2) {
				mes("[Gato]\n"
					"Hm? Muito bom, voc� aprendeu as no��es b�sicas para empurrar inimigos.\n"
					"Agora voc� est� quase pronto para aprender a habilidade que devo ensinar a voc�.");
				next;
				mes("[Gato]\n"
					"Eu n�o sou um Filantropista."
					"Ent�o espero algumas mensalidades por todo meu esfor�o e minha instru��o!\n"
					"Mmm, o que seria bom para ser o meu pagamento?\n"
					"Ah, Eu estou com poucas pedras encantadas no momento.");
				next;
				mes("[Gato]\n"
					"V� e me traga\n"
					"^FF000010 Cristais Azuis^000000,\n"
					"^FF000010 Vidas Verdejantes^000000,\n"
					"^FF000010 Sangues Escarlates^000000 e\n"
					"^FF000010 Frescores do Vento^000000.");
				next;
				mes("[Gato]\n"
					"N�o � muita coisa, ent�o n�o reclame e volte assim que voc� puder.\n"
					"Enquanto voc� estiver fora daqui, eu vou tirar outra soneca.");
				wiz_sk = 3;
				close;
			} else if (wiz_sk == 3) {
				if (countitem(Crystal_Blue) < 10 || countitem(Yellow_Live) < 10 || countitem(Boody_Red) < 10 || countitem(Wind_Of_Verdure) < 10) {
					mes("[Gato]\n"
						"^333333*Yaaaaaawn*^000000 Hm?\n"
						"C-como voc� ousa vir aqui sem tudo\n"
						"Que eu pedi a voc�?!\n"
						"Voc� esqueceu o qu� trazer, n�o foi?\n"
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
						"N�o esque�a dessa vez!\n"
						"E nem mesmo pense em me acordar at� voc� encontrar tudo que eu te pedi!");
					close;
				} else {
					mes("[Gato]\n"
						"*Yaaaawn* O qu�?\n"
						"Ah, � voc�.\n"
						"Ent�o voc� me trouxe as pedras que eu pedi?\n"
						"Mmm. Bom, deixe me ver se voc� trouxe todos...\n"
						"Um, dois, tr�s...");
					next;
					mes("[Gato]\n"
						".................\n"
						"Que se dane. Eu n�o vou contar tudo isso.\n"
						"Apenas me d� e eu vou ensinar a habilidade para que eu possa voltar a dormir.");
					next;
					mes("[Gato]\n"
						"Essa habilidade � chamada, ''^FF0000Explos�o Protetora^000000.''\n"
						"Bem legal, n�o?\n"
						"� uma habilidade de atributo fogo,\n"
						"que requer que voc� conjure Chama reveladora antes de poder ativa-la.\n"
						"Agora tente.");
					next;
					specialeffect(EF_SUI_EXPLOSION, AREA, playerattached());
					mes("^3355FF*BAM! BOOM!*^000000");
					next;
					mes("[Gato]\n"
						"......\n"
						"Huh. N�o t�o certo,\n"
						"mas n�o fpo ruim para uma primeira\n"
						"tentativa. Lembre-se de desejar que\n"
						"o empurr�o aconteca. Ergh,\n"
						"vamos tentar isso mais uma vez, ok?");
					next;
					mes("[Gato]\n"
						"Voc� tem que ter vontade.\n"
						"Empurre!\n"
						"Empurre com sua mente!\n"
						"Bem, empurre as chamas criadas com Chama Reveledora com a sua mente.\n"
						"N�o � dif�cil!");
					next;
					mes("[Gato]\n"
						"Finalmente...!\n"
						"Voc� realmente aprendeu!\n"
						"Isso deu muito trabalho, mas pelo menos n�s acabamos aqui.");
					specialeffect(EF_ABSORBSPIRITS, AREA, playerattached());
					delitem(Crystal_Blue, 10);
					delitem(Yellow_Live, 10);
					delitem(Boody_Red, 10);
					delitem(Wind_Of_Verdure, 10);
					skill("WZ_SIGHTBLASTER", 1, 0);
					wiz_sk = 4;
					next;
					mes("[Gato]\n"
						"Eu estou t�o cansado de toda essa aula.\n"
						"Eu acho que eu vou tirar uma t�o merecida soneca agora.\n"
						"V� embora, e se voc� conhecer qualquer Bruxo, mande eles virem aqui, eu acho.");
					close;
				}
			} else if (wiz_sk == 4) {
				mes("[Gato]\n"
					"O qu�...?! Voc� esqueceu a incr�vel habilidade que eu te ensinei?\n"
					"Transcender n�o � desculpa para esquecer!\n"
					"Certo, ent�o voc� quer que eu te ensine, �?\n"
					"Certo, aqui vai sua aula!");
				next;
				mes("^3355FF*BAM! BOOM! CRASH!*^000000");
				specialeffect(EF_SUI_EXPLOSION, AREA, playerattached());
				next;
				mes("[Gato]\n"
					"N�o ouse ficar pretensioso, apenas porque voc� renasceu!\n"
					"� melhor lembrar como fazer aquela habilidade antes que eu d� outro whupping em voc�!");
				next;
				mes("^3355FFVoc� miraculosamente relembra a Explos�o Protetora.\n"
					"AQntes que ele pudesse te espancar viciosamente de novo.");
				specialeffect(EF_SUI_EXPLOSION, AREA, playerattached());
				skill("WZ_SIGHTBLASTER", 1, 0);
				wiz_sk = 0;
				next;
				mes("[Gato]\n"
					"Lembra agora?\n"
					"�timo.\n"
					"Agora eu vou voltar para minha soneca.\n"
					"Mesmo se voc� pensar em me incomodar, vou fazer voc� se arrepender.\n"
					"Lembre-se das minhas palavras!");
				close;
			}
		}
	} else {
		mes("[Gato]\n"
			"*Yaaawn*\n"
			"Muito sonolento...\n"
			"Hm? Voc� quer falar comigo?\n"
			"N�o me incomode se voc� n�o tem nada para dizer!");
		next;
		if (select("Um gato?", "Fiquei com sono, tamb�m...") == 1) {
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
				"Eu vou enlouquecer Catherine, voc�, todo mundo.\n"
				"Voc�s ser�o todos transformado em gatos!");
			close;
		}
		mes("[Gato]\n"
			"Hah! Sim...\n"
			"Tirar uma soneca soa como a melhor id�ia que eu ja escutei hoje.\n"
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
			"Ah, voc� deve ser um praticante muito habilidoso de magia.\n"
			"Mmm, voc� deve ser um daqueles Bruxos.\n"
			"Eu realmente n�o posso dizer a diferen�a.\n"
			"Ah, como eu posso te ajudar?");
		next;
		if (select("Estou bem, obrigado", "Eu quero aprender sobre Empurr�es") == 1) {
			mes("[Simon]\n"
				"Estou surpreso que voc� escolheu praticar magia.\n"
				"A julgar pelo seu estilo,\n"
				"eu diria que voc� seria bem adequado para Empunhar uma espada.\n"
				"Haha, mas essa � a opini�o de um simples Cavaleiro.");
			close;
		}
		mes("[Simon]\n"
			"Espere, por que voc� est� me pedindo para te ensinar uma t�cnica de empurr�o?\n"
			"Voc� pode se defender usando magias como Barreira de Fogo ou Lan�as de Fogo,\n"
			"muito mais efetivamente, certo?");
		next;
		select("Mas numa dist�ncia pr�xima...");
		mes("[Simon]\n"
			"Ah, eu vejo.\n"
			"Sim, Bruxos n�o s�o muito efetivos em batalhas muito pr�ximas.\n"
			"Ok, Eu posso ver por que voc� quer aprender algumas t�cnicas de Empurr�es.\n"
			"Certo, eu posso te ensinar o b�sico.");
		next;
		mes("[Simon]\n"
			"Agora, todo aventureiro sabe os fundamentos do ataque.\n"
			"Voc� bate, e ent�o sua pr�xima a��o,\n"
			"que � ou outro ataque, um desvio ou uma defesa.\n"
			"Coisa simples, certo?");
		next;
		mes("[Simon]\n"
			"Para empurrar um inimigo de volta, voc� deve atacar usando um golpe com for�a cont�nua.\n"
			"Isso � tudo que precisa ser feito.\n"
			"Agora, se voc� ataca a cabe�a, a dist�ncia do empurr�o vai ser curta.");
		next;
		mes("[Simon]\n"
			"Se voc� atacar as pernas, seu inimigo vai cair em sua dire��o.\n"
			"O melhor alvo para o ataque � o tronco j� que permite mais controle do empurr�o.");
		next;
		mes("[Simon]\n"
			"Bem, Eu expliquei a t�cnica o melhor que eu pude.\n"
			"Se concentre e pratique a teoria por conta pr�pria,\n"
			"e voc� dever� ser capaz de fazer isso.\n"
			"Boa^FFFFFF ^000000sorte em suas viagens, aventureiro");
		wiz_sk = 2;
		close;
	} else {
		mes("[Simon]\n"
			"N�o cometa erros, espada � uma arte.\n"
			"As t�cnicas podem parecer brutas a primeiro olhar."
			"Mas existe uma estrat�gia sutil que\n"
			"Cavaleiros entendem.");
		close;
	}
}
