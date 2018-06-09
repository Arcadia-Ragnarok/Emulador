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
| - Author: kobra_k88                                               |
| - Version: Spell Master                                           |
| - Info: Aprendizagem das habilidades para espadachim              |
|         Recuperar HP em Movimento (SM_MOVINGRECOVERY)             |
|         Ataque Fatal (SM_FATALBLOW)                               |
|         Instinto de Sobrevivência (SM_AUTOBERSERK)                |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ SM_MOVINGRECOVERY ] -
// ------------------------------------------------------------------
izlude_in,118,175,4	script	Cavaleiro Thomas	4W_M_02,{
	if (getskilllv("SM_MOVINGRECOVERY")) {
		mes("[Thomas]\n"
			"Ah é você?\n"
			"Você parece mais saudável do que antes.\n"
			"Hahahaha!\n"
			"Cuidar! Ver você de novo!");
		close;
	} else {
		if (BaseClass == Job_Swordman) {
			if (!movingrecovery) {
				mes("[Thomas]\n"
					"Ah não! Você deve está ferido!\n"
					"Você está bem?\n"
					"Você deve ter lutado muito para ter ferimentos tão graves.\n"
					"Ser um espadachim deve vir com muita responsabilidade e sacrifício.");
				next;
				mes("[Thomas]\n"
					"Para espadachins e cavaleiros, há uma habilidade maravilhosa.\n"
					"Eu apresento para você - HP Recovery While Moving!\n"
					"Mesmo se movimentando essa habilidade esplêndida lhe permite recuperar seu HP!");
				next;
				mes("[Thomas]\n"
					"Atualmente, está em desenvolvimento, portanto, não pode recuperar tanto, mas isso ajudará um pouco.\n"
					"O que você acha?\n"
					"Você gostaria de aprender-la?");
				next;
				if (select("Claro que sim!", "Não, obrigado") == 1) {
					mes("[Thomas]\n"
						"Muito bem.\n"
						"Direi a você o que precisa para aprender essa habilidade.\n"
						"Primeiro, o seu nível de classe deve ser superior a ^00880035^000000.\n"
						"Também deve me trazer ^008800200 Garrafas Vazias^000000.\n"
						"Por quê isso é prova de que lutou ferozmente.\n"
						"Por último, mas não menos importante...\n"
						"Me traga ^0088001 Asas de Traça^000000.");
					next;
					select("Eh? Você também precisa disso?");
					mes("[Thomas]\n"
						"Na verdade, na verdade não preciso.\n"
						"É só que minha sobrinha obteve uma caça ao inseto como uma tarefa de férias de verão.\n"
						"Claro! Seria muito mais fácil para conseguir eu mesmo.\n"
						"Mas, devo trabalhar aqui o tempo todo, então eu não tenho tempo para sair.");
					next;
					mes("[Thomas]\n"
						"Você não acha que é cansativo ficar aqui todos os dias, não podendo sair?");
					movingrecovery = 1;
					close;
				} else {
					mes("[Thomas]\n"
						"...");
					close;
				}
			} else if (movingrecovery == 1) {
				mes("[Thomas]\n"
					"Você voltou...\n"
					"Pronto para aprender \"Recuperar HP em Movimento\"?");
				next;
				if (select("Sim", "Ainda não") == 1) {
					if ((JobLevel > 34 || (BaseJob == Job_Knight || BaseJob == Job_Crusader)) && (countitem(Empty_Bottle) > 199) && (countitem(Wing_Of_Moth) > 0)) {
						mes("[Thomas]\n"
							"Vamos ver.....");
						next;
						mes("[Thomas]\n"
							"Está bem!\n"
							"Agora vou ensinar você...\n"
							"...Recuperar HP em Movimento");
						next;
						delitem(Empty_Bottle, 200);
						delitem(Wing_Of_Moth, 1);
						skill("SM_MOVINGRECOVERY", 1, 0);
						movingrecovery = 0;
						mes("[Thomas]\n"
							"Ai está!\n"
							"Tente você mesmo.\n"
							"Mas não exagere.");
						next;
						mes("[Thomas]\n"
							"Ah, sim, não precisarei de sua armadura para que você possa mantê-la.\n"
							"Boa sorte agora!");
						close;
					} else if (JobLevel < 35 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
						mes("[Thomas]\n"
							"Espere um segundo, seu nível de classe está abaixo de ^00880035^000000!\n"
							"Volte quando estiver mais preparado.");
						close;
					} else if ((countitem(Empty_Bottle) < 200) || (countitem(Wing_Of_Moth) < 1)) {
						mes("[Thomas]\n"
							"Você não tem todos os itens que eu pedi.");
						next;
						mes("[Thomas]\n"
							"Lembre-se de que eu preciso, ^008800200 Garrafas Vazias^000000 e 1 ^008800Asas de Traça^000000.\n"
							"Volte quando você tiver tudo.");
						close;
					} else {
						mes("[Thomas]\n"
							"Você não tem todos os itens que eu pedi.");
						next;
						mes("[Thomas]\n"
							"Lembre-se de que eu preciso, ^008800200 Garrafas Vazias^000000 e 1 ^008800Asas de Traça^000000.\n"
							"Volte quando você tiver tudo.");
						close;
					}
				} else {
					mes("[Thomas]\n"
						"É assim mesmo?\n"
						"Então venha quando estiver preparado.");
					close;
				}
			}
		} else {
			mes("[Thomas]\n"
				"Meu nome é Thomas.\n"
				"Cavaleiro de Prontera da 3rd Cavalaria.\n"
				"Tenho um certo dever nos dias de hoje.\n"
				"Mas, não preciso lhe dizer.");
			close;
		}
	}
}

// ------------------------------------------------------------------
// - [ SM_FATALBLOW ] -
// ------------------------------------------------------------------
prt_in,75,88,5	script	Leon Von Frich	4_M_03,{
	if ((BaseClass == Job_Swordman) && (JobLevel >= 25 || (BaseJob == Job_Knight || BaseJob == Job_Crusader))) {
		if (getskilllv("SM_FATALBLOW")) {
			mes("[Leon]\n"
				"Eh?\n"
				"Como você está agora que já sabe o Ataque Fatal?");
			close;
		} else if ((countitem(Fire_Arrow) > 9) && (countitem(Silver_Arrow) > 9) && (countitem(Banana_Juice) > 0) && (countitem(Tentacle) > 29) && (countitem(Royal_Jelly) > 4)) {
			mes("[Leon]\n"
				"Ooh! Você está mais do que pronto para aprender o Ataque Fatal!\n"
				"Então, que tal? Você gostaria de aprender?");
			next;
			switch (select("Sim!","Eu não quero","O que é isso?")) {
				case 1:
				mes("[Leon]\n"
					"Ok, vamos começar!");
				next;
				delitem(Fire_Arrow, 10);
				delitem(Silver_Arrow, 10);
				delitem(Banana_Juice, 1);
				delitem(Tentacle, 30);
				delitem(Royal_Jelly, 5);
				skill("SM_FATALBLOW", 1, 0);
				mes("[Leon]\n"
					"Success!\n"
					"Vá usar sua nova habilidade para todo seu potencial.\n"
					"Hahahahahahahaha!");
				close;
				case 2:
				mes("[Leon]\n"
					"Eu não gosto de você!!!");
				close;
				case 3:
				mes("[Leon]\n"
					"Eu desenvolvi essa habilidade recentemente.\n"
					"Quando você usa Golpe Fuminante, dependendo do seu nível,\n"
					"você pode atordoar seu oponente.\n"
					"Você aprendeu o Golpe Fuminante, não é?");
				next;
				mes("[Leon]\n"
					"O que você acha.\n"
					"Atordoar é uma técnica muito útil.\n"
					"Você não acha essa habilidade atrativa?");
				close;
			}
		}
		mes("[Leon]\n"
			"Ooh! Um espadachim jovem e forte!");
		next;
		mes("[Leon]\n"
			"Uau, vendo seu braço, você deve aproveitar o uso de Golpe Fuminante?");
		next;
		select("Eh, eu ... Apenas ...");
		mes("[Leon]\n"
			"Não precisa ser assustado.\n"
			"Se você usa uma espada, é claro que você deveria ter um bom braço!\n"
			"Nesses tempos de jovens inúteis e preguiçosos, fico feliz por conhecer alguém forte como você.");
		next;
		mes("[Leon]\n"
			"Gostaria de dar um presente a um incrível espadachim como você?");
		next;
		switch (select("Que presente?","Está bem")) {
			case 1:
			mes("[Leon]\n"
				"Haha nada de especial, mas uma habilidade para atacar o ponto vital!");
			next;
			case 2:
			mes("[Leon]\n"
				"...Haha nada de especial, apenas uma habilidade que visa o ponto vital!");
			next;
		}
		mes("[Leon]\n"
			"Eu desenvolvi essa habilidade recentemente.\n"
			"Quando você usa Golpe Fuminante, dependendo do seu nível, você pode atordoar seu oponente.\n"
			"Você aprendeu o Golpe Fuminante, não é?");
		next;
		mes("[Leon]\n"
			"Quando eu era um espadachim como você, eu gostava de usar o Golpe Fuminante.\n"
			"Uma vez, pensei que talvez o ataque fosse mais poderoso se eu usar atordoamento ao mesmo tempo");
		next;
		mes("[Leon]\n"
			"Eu me afastei do campo de batalha para fazer pesquisas e finalmente.\n"
			"Desenvolvi essa maravilhosa nova habilidade!\n"
			"Você gostaria de aprender essa habilidade?");
		next;
		if (select("Claro!","Não mesmo")) {
			mes("[Leon]\n"
				"Está bem. Vou contar-lhe os requisitos.\n"
				"Primeiro você precisa ter o nível 5 Bash.\n"
				"Você também tem que me trazer\n"
				"10 Flecha de Fogo\n"
				"10 Flecha de Prata\n"
				"1 Suco de Banana\n"
				"30 Tentáculo\n"
				"5 Geléia Real\n"
				"Eles são ... algo como ingredientes.");
			next;
			mes("[Leon]\n"
				"Venha até mim novamente uma vez que você tenha todos os materiais.\n"
				"Devemos conversar então.");
			close;
		}
		mes("[Leon]\n"
			"Hahahahahahahahahaha!\n"
			"... \n"
			" ... \n"
			" ...\n"
			"Estou com uma perda de palavras !?");
		close;
	}
	mes("[Leon]\n"
		"Ah não! Não tenho nada para te oferecer!\n"
		"Não posso dizer coisas divertidas e divertidas para ninguém além de espadachins!\n"
		"Vejo você em um mundo melhor!");
	close;
}

// ------------------------------------------------------------------
// - [ SM_AUTOBERSERK ] -
// ------------------------------------------------------------------
prt_in,94,57,3	script	Juan	4_M_03,4,4,{
	if (BaseClass == Job_Swordman) {
		if (getskilllv("SM_AUTOBERSERK")) {
			mes("[Juan]\n"
				"Espero que agora mais forte do que antes.\n"
				"Com certeza essa sua nova habilidade será muito útil no campo de batalha.");
			close;
		} else if (JobLevel < 10 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
			mes("[?]\n"
				"O que você é?\n"
				"Eh, ainda é um iniciante.\n"
				"Estou ocupado, então vá treinar um pouco mais antes de voltar.");
			close;
		} else if (JobLevel < 30 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
			mes("[Juan]\n"
				"Oh, prazer em conhecê-lo.\n"
				"Você pode estar a caminho.");
			close;
		} else if ((countitem(Powder_Of_Butterfly) > 34) && (countitem(Horrendous_Mouth) > 9) && (countitem(Decayed_Nail) > 9) && (countitem(Honey) > 9)) {
			mes("[Juan]\n"
				"Ooh. Jovem espadachim!\n"
				"Você está pronto para aprender a habilidade mais nova, \"Instinto de Sobrevivência\"?!");
			next;
			if (select("Gostaria de aprender agora","O que é isso?") == 1) {
				mes("[Juan]\n"
					"Então está bem...");
				next;
				delitem(Powder_Of_Butterfly, 35);
				delitem(Horrendous_Mouth, 10);
				delitem(Decayed_Nail, 10);
				delitem(Honey, 10);
				skill("SM_AUTOBERSERK", 1, 0);
				mes("[Juan]\n"
					"Você acabou de se tornar um espadachim que pode usar Instinto de Sobrevivência.\n"
					"Você pode ir e alcançar grandes coisas!");
				next;
				mes("[Juan]\n"
					"Boa Sorte!");
				next;
				mes("[Juan]\n"
					"Eu esqueci de dizer uma coisa.\n"
					"Há algumas coisas que você deve ter em mente.");
				next;
				mes("[Juan]\n"
					"Uma vez que você recupera seu HP, essa habilidade diminuirá.\n"
					"Além disso, não há existe um limite de tempo.\n"
					"Mas ainda pode desaparecer quando sofrer efeeito de outra habilidade que pode anular Provocar.");
				next;
				mes("[Juan]\n"
					"Você deve se lembrar dessas características.\n"
					"Porque pode encontrar alguns problemas no campo de batalha.\n"
					"Quando a habilidade desaparecer de repente.");
				close;
			} else {
				mes("[Juan]\n"
					"Instinto de Sobrevivência?\n"
					"É uma habilidade crucial no campo de batalha.\n"
					"Quando seu HP está muito baixo, seu efeito lhe consederá status de provocar.");
				next;
				mes("[Juan]\n"
					"É perfeito para aqueles que lutam no campo de batalha!\n"
					"Com sua capacidade, você pode aprender essa habilidade agora.\n"
					"Então, eu vou lhe contar os materiais necessários.");
				next;
				mes("[Juan]\n"
					"35 Pó de Borboleta\n"
					"10 Mandíbula Horrenda\n"
					"10 Unha Apodrecida\n"
					"10 Mel.");
				next;
				mes("[Juan]\n"
					"Quando tiver tudo isso pronto retorne a mim.\n"
					"Estarei ansioso para vê-lo novamente.");
				close;
			}
		} else {
			mes("[Juan]\n"
				"Oh não, você tem mais ferimentos desde a última vez que eu vi você.\n"
				"Você entrou em batalha assim?\n"
				"Parece que você está se esforçando.");
			next;
			mes("[Juan]\n"
				"Mesmo que você possa ter muita força, não pode fazer muito quando atingir seus limites.\n"
				"Então não superestima seus poderes.\n"
				"Claro que você sempre pode usar a habilidade que desenvolvemos para superar esses limites.");
			next;
			if (select("Do que você está falando?", "Você não fala coisa com coisa!") == 1) {
				mes("[Juan]\n"
					"Estou falando da habilidade chamada Instinto de Sobrevivência.\n"
					"É considerada a flor de um campo de batalha.\n"
					"Quando seu HP está muito baixo, seu efeito lhe consederá status de provocar.");
				next;
				mes("[Juan]\n"
					"É perfeito para aqueles que lutam no campo de batalha!\n"
					"Com sua capacidade, você pode aprender essa habilidade agora.\n"
					"Então, eu vou lhe contar os materiais necessários.");
				next;
				mes("[Juan]\n"
					"35 Pó de Borboleta\n"
					"10 Mandíbula Horrenda\n"
					"10 Unha Apodrecida\n"
					"10 Mel.");
				next;
				mes("[Juan]\n"
					"Quando tiver tudo isso pronto retorne a mim.\n"
					"Estarei ansioso para vê-lo novamente.");
				close;
			} else {
				mes("[Juan]\n"
					"Bleh, você foi enganado toda a sua vida.\n"
					"Eu não sei. Não fale comigo.");
				close;
			}
		}
	} else {
		mes("[Juan]\n"
			"Você está gostando da sua viagem?\n"
			"Espero que você tenha bons dias à sua frente.\n"
			"Ah, sou apenas um cavaleiro.\n"
			"Não se preocupe comigo...");
		close;
	}
}
