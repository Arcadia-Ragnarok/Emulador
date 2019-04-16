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
|         Instinto de Sobreviv�ncia (SM_AUTOBERSERK)                |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ SM_MOVINGRECOVERY ] -
// ------------------------------------------------------------------
izlude_in,118,175,4	script	Cavaleiro Thomas	4W_M_02,{
	if (getskilllv("SM_MOVINGRECOVERY")) {
		mes("[Thomas]\n"
			"Ah � voc�?\n"
			"Voc� parece mais saud�vel do que antes.\n"
			"Hahahaha!\n"
			"Cuidar! Ver voc� de novo!");
		close;
	} else {
		if (BaseClass == Job_Swordman) {
			if (!movingrecovery) {
				mes("[Thomas]\n"
					"Ah n�o! Voc� deve est� ferido!\n"
					"Voc� est� bem?\n"
					"Voc� deve ter lutado muito para ter ferimentos t�o graves.\n"
					"Ser um espadachim deve vir com muita responsabilidade e sacrif�cio.");
				next;
				mes("[Thomas]\n"
					"Para espadachins e cavaleiros, h� uma habilidade maravilhosa.\n"
					"Eu apresento para voc� - HP Recovery While Moving!\n"
					"Mesmo se movimentando essa habilidade espl�ndida lhe permite recuperar seu HP!");
				next;
				mes("[Thomas]\n"
					"Atualmente, est� em desenvolvimento, portanto, n�o pode recuperar tanto, mas isso ajudar� um pouco.\n"
					"O que voc� acha?\n"
					"Voc� gostaria de aprender-la?");
				next;
				if (select("Claro que sim!", "N�o, obrigado") == 1) {
					mes("[Thomas]\n"
						"Muito bem.\n"
						"Direi a voc� o que precisa para aprender essa habilidade.\n"
						"Primeiro, o seu n�vel de classe deve ser superior a ^00880035^000000.\n"
						"Tamb�m deve me trazer ^008800200 Garrafas Vazias^000000.\n"
						"Por qu� isso � prova de que lutou ferozmente.\n"
						"Por �ltimo, mas n�o menos importante...\n"
						"Me traga ^0088001 Asas de Tra�a^000000.");
					next;
					select("Eh? Voc� tamb�m precisa disso?");
					mes("[Thomas]\n"
						"Na verdade, na verdade n�o preciso.\n"
						"� s� que minha sobrinha obteve uma ca�a ao inseto como uma tarefa de f�rias de ver�o.\n"
						"Claro! Seria muito mais f�cil para conseguir eu mesmo.\n"
						"Mas, devo trabalhar aqui o tempo todo, ent�o eu n�o tenho tempo para sair.");
					next;
					mes("[Thomas]\n"
						"Voc� n�o acha que � cansativo ficar aqui todos os dias, n�o podendo sair?");
					movingrecovery = 1;
					close;
				} else {
					mes("[Thomas]\n"
						"...");
					close;
				}
			} else if (movingrecovery == 1) {
				mes("[Thomas]\n"
					"Voc� voltou...\n"
					"Pronto para aprender \"Recuperar HP em Movimento\"?");
				next;
				if (select("Sim", "Ainda n�o") == 1) {
					if ((JobLevel > 34 || (BaseJob == Job_Knight || BaseJob == Job_Crusader)) && (countitem(Empty_Bottle) > 199) && (countitem(Wing_Of_Moth) > 0)) {
						mes("[Thomas]\n"
							"Vamos ver.....");
						next;
						mes("[Thomas]\n"
							"Est� bem!\n"
							"Agora vou ensinar voc�...\n"
							"...Recuperar HP em Movimento");
						next;
						delitem(Empty_Bottle, 200);
						delitem(Wing_Of_Moth, 1);
						skill("SM_MOVINGRECOVERY", 1, 0);
						movingrecovery = 0;
						mes("[Thomas]\n"
							"Ai est�!\n"
							"Tente voc� mesmo.\n"
							"Mas n�o exagere.");
						next;
						mes("[Thomas]\n"
							"Ah, sim, n�o precisarei de sua armadura para que voc� possa mant�-la.\n"
							"Boa sorte agora!");
						close;
					} else if (JobLevel < 35 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
						mes("[Thomas]\n"
							"Espere um segundo, seu n�vel de classe est� abaixo de ^00880035^000000!\n"
							"Volte quando estiver mais preparado.");
						close;
					} else if ((countitem(Empty_Bottle) < 200) || (countitem(Wing_Of_Moth) < 1)) {
						mes("[Thomas]\n"
							"Voc� n�o tem todos os itens que eu pedi.");
						next;
						mes("[Thomas]\n"
							"Lembre-se de que eu preciso, ^008800200 Garrafas Vazias^000000 e 1 ^008800Asas de Tra�a^000000.\n"
							"Volte quando voc� tiver tudo.");
						close;
					} else {
						mes("[Thomas]\n"
							"Voc� n�o tem todos os itens que eu pedi.");
						next;
						mes("[Thomas]\n"
							"Lembre-se de que eu preciso, ^008800200 Garrafas Vazias^000000 e 1 ^008800Asas de Tra�a^000000.\n"
							"Volte quando voc� tiver tudo.");
						close;
					}
				} else {
					mes("[Thomas]\n"
						"� assim mesmo?\n"
						"Ent�o venha quando estiver preparado.");
					close;
				}
			}
		} else {
			mes("[Thomas]\n"
				"Meu nome � Thomas.\n"
				"Cavaleiro de Prontera da 3rd Cavalaria.\n"
				"Tenho um certo dever nos dias de hoje.\n"
				"Mas, n�o preciso lhe dizer.");
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
				"Como voc� est� agora que j� sabe o Ataque Fatal?");
			close;
		} else if ((countitem(Fire_Arrow) > 9) && (countitem(Silver_Arrow) > 9) && (countitem(Banana_Juice) > 0) && (countitem(Tentacle) > 29) && (countitem(Royal_Jelly) > 4)) {
			mes("[Leon]\n"
				"Ooh! Voc� est� mais do que pronto para aprender o Ataque Fatal!\n"
				"Ent�o, que tal? Voc� gostaria de aprender?");
			next;
			switch (select("Sim!","Eu n�o quero","O que � isso?")) {
				case 1:
				mes("[Leon]\n"
					"Ok, vamos come�ar!");
				next;
				delitem(Fire_Arrow, 10);
				delitem(Silver_Arrow, 10);
				delitem(Banana_Juice, 1);
				delitem(Tentacle, 30);
				delitem(Royal_Jelly, 5);
				skill("SM_FATALBLOW", 1, 0);
				mes("[Leon]\n"
					"Success!\n"
					"V� usar sua nova habilidade para todo seu potencial.\n"
					"Hahahahahahahaha!");
				close;
				case 2:
				mes("[Leon]\n"
					"Eu n�o gosto de voc�!!!");
				close;
				case 3:
				mes("[Leon]\n"
					"Eu desenvolvi essa habilidade recentemente.\n"
					"Quando voc� usa Golpe Fuminante, dependendo do seu n�vel,\n"
					"voc� pode atordoar seu oponente.\n"
					"Voc� aprendeu o Golpe Fuminante, n�o �?");
				next;
				mes("[Leon]\n"
					"O que voc� acha.\n"
					"Atordoar � uma t�cnica muito �til.\n"
					"Voc� n�o acha essa habilidade atrativa?");
				close;
			}
		}
		mes("[Leon]\n"
			"Ooh! Um espadachim jovem e forte!");
		next;
		mes("[Leon]\n"
			"Uau, vendo seu bra�o, voc� deve aproveitar o uso de Golpe Fuminante?");
		next;
		select("Eh, eu ... Apenas ...");
		mes("[Leon]\n"
			"N�o precisa ser assustado.\n"
			"Se voc� usa uma espada, � claro que voc� deveria ter um bom bra�o!\n"
			"Nesses tempos de jovens in�teis e pregui�osos, fico feliz por conhecer algu�m forte como voc�.");
		next;
		mes("[Leon]\n"
			"Gostaria de dar um presente a um incr�vel espadachim como voc�?");
		next;
		switch (select("Que presente?","Est� bem")) {
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
			"Quando voc� usa Golpe Fuminante, dependendo do seu n�vel, voc� pode atordoar seu oponente.\n"
			"Voc� aprendeu o Golpe Fuminante, n�o �?");
		next;
		mes("[Leon]\n"
			"Quando eu era um espadachim como voc�, eu gostava de usar o Golpe Fuminante.\n"
			"Uma vez, pensei que talvez o ataque fosse mais poderoso se eu usar atordoamento ao mesmo tempo");
		next;
		mes("[Leon]\n"
			"Eu me afastei do campo de batalha para fazer pesquisas e finalmente.\n"
			"Desenvolvi essa maravilhosa nova habilidade!\n"
			"Voc� gostaria de aprender essa habilidade?");
		next;
		if (select("Claro!","N�o mesmo")) {
			mes("[Leon]\n"
				"Est� bem. Vou contar-lhe os requisitos.\n"
				"Primeiro voc� precisa ter o n�vel 5 Bash.\n"
				"Voc� tamb�m tem que me trazer\n"
				"10 Flecha de Fogo\n"
				"10 Flecha de Prata\n"
				"1 Suco de Banana\n"
				"30 Tent�culo\n"
				"5 Gel�ia Real\n"
				"Eles s�o ... algo como ingredientes.");
			next;
			mes("[Leon]\n"
				"Venha at� mim novamente uma vez que voc� tenha todos os materiais.\n"
				"Devemos conversar ent�o.");
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
		"Ah n�o! N�o tenho nada para te oferecer!\n"
		"N�o posso dizer coisas divertidas e divertidas para ningu�m al�m de espadachins!\n"
		"Vejo voc� em um mundo melhor!");
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
				"Com certeza essa sua nova habilidade ser� muito �til no campo de batalha.");
			close;
		} else if (JobLevel < 10 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
			mes("[?]\n"
				"O que voc� �?\n"
				"Eh, ainda � um iniciante.\n"
				"Estou ocupado, ent�o v� treinar um pouco mais antes de voltar.");
			close;
		} else if (JobLevel < 30 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
			mes("[Juan]\n"
				"Oh, prazer em conhec�-lo.\n"
				"Voc� pode estar a caminho.");
			close;
		} else if ((countitem(Powder_Of_Butterfly) > 34) && (countitem(Horrendous_Mouth) > 9) && (countitem(Decayed_Nail) > 9) && (countitem(Honey) > 9)) {
			mes("[Juan]\n"
				"Ooh. Jovem espadachim!\n"
				"Voc� est� pronto para aprender a habilidade mais nova, \"Instinto de Sobreviv�ncia\"?!");
			next;
			if (select("Gostaria de aprender agora","O que � isso?") == 1) {
				mes("[Juan]\n"
					"Ent�o est� bem...");
				next;
				delitem(Powder_Of_Butterfly, 35);
				delitem(Horrendous_Mouth, 10);
				delitem(Decayed_Nail, 10);
				delitem(Honey, 10);
				skill("SM_AUTOBERSERK", 1, 0);
				mes("[Juan]\n"
					"Voc� acabou de se tornar um espadachim que pode usar Instinto de Sobreviv�ncia.\n"
					"Voc� pode ir e alcan�ar grandes coisas!");
				next;
				mes("[Juan]\n"
					"Boa Sorte!");
				next;
				mes("[Juan]\n"
					"Eu esqueci de dizer uma coisa.\n"
					"H� algumas coisas que voc� deve ter em mente.");
				next;
				mes("[Juan]\n"
					"Uma vez que voc� recupera seu HP, essa habilidade diminuir�.\n"
					"Al�m disso, n�o h� existe um limite de tempo.\n"
					"Mas ainda pode desaparecer quando sofrer efeeito de outra habilidade que pode anular Provocar.");
				next;
				mes("[Juan]\n"
					"Voc� deve se lembrar dessas caracter�sticas.\n"
					"Porque pode encontrar alguns problemas no campo de batalha.\n"
					"Quando a habilidade desaparecer de repente.");
				close;
			} else {
				mes("[Juan]\n"
					"Instinto de Sobreviv�ncia?\n"
					"� uma habilidade crucial no campo de batalha.\n"
					"Quando seu HP est� muito baixo, seu efeito lhe conseder� status de provocar.");
				next;
				mes("[Juan]\n"
					"� perfeito para aqueles que lutam no campo de batalha!\n"
					"Com sua capacidade, voc� pode aprender essa habilidade agora.\n"
					"Ent�o, eu vou lhe contar os materiais necess�rios.");
				next;
				mes("[Juan]\n"
					"35 P� de Borboleta\n"
					"10 Mand�bula Horrenda\n"
					"10 Unha Apodrecida\n"
					"10 Mel.");
				next;
				mes("[Juan]\n"
					"Quando tiver tudo isso pronto retorne a mim.\n"
					"Estarei ansioso para v�-lo novamente.");
				close;
			}
		} else {
			mes("[Juan]\n"
				"Oh n�o, voc� tem mais ferimentos desde a �ltima vez que eu vi voc�.\n"
				"Voc� entrou em batalha assim?\n"
				"Parece que voc� est� se esfor�ando.");
			next;
			mes("[Juan]\n"
				"Mesmo que voc� possa ter muita for�a, n�o pode fazer muito quando atingir seus limites.\n"
				"Ent�o n�o superestima seus poderes.\n"
				"Claro que voc� sempre pode usar a habilidade que desenvolvemos para superar esses limites.");
			next;
			if (select("Do que voc� est� falando?", "Voc� n�o fala coisa com coisa!") == 1) {
				mes("[Juan]\n"
					"Estou falando da habilidade chamada Instinto de Sobreviv�ncia.\n"
					"� considerada a flor de um campo de batalha.\n"
					"Quando seu HP est� muito baixo, seu efeito lhe conseder� status de provocar.");
				next;
				mes("[Juan]\n"
					"� perfeito para aqueles que lutam no campo de batalha!\n"
					"Com sua capacidade, voc� pode aprender essa habilidade agora.\n"
					"Ent�o, eu vou lhe contar os materiais necess�rios.");
				next;
				mes("[Juan]\n"
					"35 P� de Borboleta\n"
					"10 Mand�bula Horrenda\n"
					"10 Unha Apodrecida\n"
					"10 Mel.");
				next;
				mes("[Juan]\n"
					"Quando tiver tudo isso pronto retorne a mim.\n"
					"Estarei ansioso para v�-lo novamente.");
				close;
			} else {
				mes("[Juan]\n"
					"Bleh, voc� foi enganado toda a sua vida.\n"
					"Eu n�o sei. N�o fale comigo.");
				close;
			}
		}
	} else {
		mes("[Juan]\n"
			"Voc� est� gostando da sua viagem?\n"
			"Espero que voc� tenha bons dias � sua frente.\n"
			"Ah, sou apenas um cavaleiro.\n"
			"N�o se preocupe comigo...");
		close;
	}
}
