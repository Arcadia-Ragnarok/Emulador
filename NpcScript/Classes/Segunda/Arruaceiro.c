/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudan�a de Classe para Arruaceiro.               |
\*-----------------------------------------------------------------*/

in_rogue,363,122,4	script	Arruaceira#rogueq	4_F_ROGUE,{
	if (BaseJob == Job_Thief) {
		if (JobLevel < 40) {
			mes("[Arruaceira]\n"
				"N�s s� aceitamos Gatunos de n�vel de classe 40.\n"
				"N�o vou me arriscar a te ensinar nada.\n"
				"Sabendo que voc� ainda n�o est� pront"+(Sex == SEX_MALE ? "o":"a")+".");
			close;
		} else if (rogueq < 2) {
			if (rogueq != 1) {
				mes("[Arruaceira]\n"
					"Ent�o o que uma crian�a igual a voc� est� fazendo aqui?");
				if (Sex == SEX_MALE) {
					mes("Oh, eu vou pegar agora...\n"
						"O que o pivete quer ser um ^800000Arruaceiro^000000.");
				} else {
					mes("Oh, j� sei...\n"
						"O garotinha quer ser um ^800000Arruaceira^000000.");
				}
				next;
				mes("[Arruaceira]\n"
					"Hmm, � bom conhecer voc�, eu acho.\n"
					"Eu sou Markie, e eu trabalho para Guilda dos Arruaceiros.\n"
					"Mas qual � seu nome?");
				next;
				mes("[Markie]\n"
					"..."+strcharinfo(CHAR_NAME)+"?\n"
					"Heh heh! Bom nome.");
				next;
				mes("[Markie]\n"
					"Ent�o porque voc� quer se juntar aos arruaceiros?\n"
					"Eu acho que voc� me deu seu nome verdadeiro, voc� deve ser um Arruaceiro honesto.\n"
					"N�o h� muitos por a�, heh heh.");
				next;
				mes("[Markie]\n"
					"Regra n�mero 1 para Arruaceiros...\n"
					"Nunca d� a sua verdadeira identidade para a maioria das pessoas.\n"
					"� uma pequena medida de seguran�a que gostamos de usar.");
				next;
				mes("[Markie]\n"
					"Certo.\n"
					"Estou aceitando oficialmente a sua candidatura, agora voc� tem que realizar um teste.\n"
					"N�o se preocupe, o primeiro � realmente simples.");
			}
			mes("[Markie]\n"
				"Agora mantenha a calma e passe neste teste, ok?");
			next;
			mes("[Markie]\n"
				"Tudo bem...\n"
				"Vamos come�ar!");
			next;
			switch (rand(3)) {
				case 1:
				mes("[Markie]\n"
					"1. Qual habilidade � necess�ria para se aprender, ^880000T�nel de Fuga^000000?");
				next;
				if (select("Esconderijo","Furto","Per�cia em Esquiva","Golpe Fuminante") == 1) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"2. Quanto habilidade ^880000Extorquir^000000 obt�m quanto desconto a mais.\n"
					"Do que a habilidade ^880000Desconto^000000 dos Mercadores?");
				next;
				if (select("3%","2%","1%","0%") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"3. O que a habilidade ^880000Afanar^000000 faz?");
				next;
				if (select("Rouba Item de um jogador","Rouba Item de um monstro","Rouba Zeny de um monstro","Rouba Zeny de um jogador") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"4. Quantas pessoas s�o necess�rias pra que a habilidade ^880000Malandragem^000000 funcione?");
				next;
				if (select("2 Arruaceiros","1 Gatuno + 2 Arruaceiros","4 Gatunos","2 Arruaceiros + 1 Mercen�rio") == 4) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"5. Que habilidade voc� pode aprender ap�s ^880000Remover Capacete^000000 N�vel 5?");
				next;
				if (select("Envenenar","Recuar","Explos�o T�xica","Remover Escudo") == 4) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"6. Que habilidade faz com que voc� possa andar sem que ningu�m te veja?");
				next;
				if (select("Esconderijo","Recuar","T�nel de Fuga","Chutar Areia") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"7. Que carta aumenta sua chance de acerto num ataque?");
				next;
				if (select("Carta Andr�","Carta Familiar","Carta M�mia","Carta Poring.") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"8. Se voc� usar uma arma equipada com a carta Vadon.\n"
					"Qual desses monstros ser� mais f�cil de matar?");
				next;
				if (select("Vadon","Deviruchi","Salgueiro Anci�o","Baphomet") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"9. Quanto SP a habilidade ^880000Ataque Duplo^000000 gasta, se voc� estiver equipando uma adaga?");
				next;
				if (select("15 de SP","0, � habilidade passiva","10 SP","54 de SP") == 2) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"10. Que adaga com propriedades especiais � mais �til no T�nel Subterr�neo de Byalan?");
				next;
				if (select("De Vento","De Gelo","De Terra","De Fogo") == 1) {
					.@rgqz += 10;
				}
				break;
				case 2:
				mes("[Markie]\n"
					"1. Que monstro pode deixar cair um Gladius com vagas para cartas?");
				next;
				if (select("Besouro Ladr�o","Peco Peco","Lobo do Deserto","Kobold") == 4) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"2. Que monstro pode deixar cair uma Main Gauche com vagas para cartas?");
				next;
				if (select("Zang�o","Lobo do Deserto","Marionete","Lun�tico") == 1) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"3. Qual classe � capaz de criar po��es?");
				next;
				if (select("Mercador","Alquimista","Ferreiro","Novi�o") == 2) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"4. Qual destes itens n�o � equip�vel por um Arruaceiro?");
				next;
				if (select("Gakkung","Besta","Gladius","Katar") == 4) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"5. O \"Hode\" � um monstro de qual propriedade?");
				next;
				if (select("�gua","Fogo","Vento","Terra") == 4) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"6. Qual destes monstros n�o pode ser um bichinho de estima��o?");
				next;
				if (select("Poporing","Creamy","Guerreiro Orc","Esporo Venenoso") == 2) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"7. Qual destes monstros � mais resistente � propriedade fogo?");
				next;
				if (select("Goblin (Adaga)","Goblin (Mangual)","Goblin (Machado)","Goblin (Ma�a)") == 4) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"8. Escolha a cidade que n�o tem nenhum Feudo.");
				next;
				if (select("Prontera","Al De Baran","Alberta","Payon") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"9. Escolha uma planta que d� Ervas Azuis.");
				next;
				switch (select("Planta Verde","Planta Amarela","Planta Azul","Planta Branca")) {
					default: break;
					case 3: .@rgqz += 10; break;
					case 4: .@rgqz += 10; break;
				}
				mes("[Markie]\n"
					"10. Qual destes monstros n�o � Amaldi�oado?");
				next;
				if (select("Zumbi","Megalodon","Familiar","Khalitzburg") == 3) {
					.@rgqz += 10;
				}
				break;
				default:
				mes("[Markie]\n"
					"1. Quanta esquiva a mais � obtida maximizando a habilidade ^880000Per�cia em Esquiva^000000?");
				next;
				if (select("30","40","160","20") == 1) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"2. Qual destes monstros � capaz de detectar um Gatuno usando a habilidade Esconderijo?");
				next;
				if (select("Talo de Verme","Argos","M�muia","Esqueleto Oper�rio") == 2) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"3. Onde fica a Guilda para a mudan�a de classe para Arruaceiro?");
				next;
				if (select("Comodo","Praia Kokomo","Ilha Pharos","Morroc") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"4. Onde fica a Guilda para a mudan�a de classe para Gatuno?");
				next;
				if (select("Comodo","Lutie","Alberta","Morroc") == 4) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"5. Qual destas cartas n�o tem rela��o com Destreza?");
				next;
				if (select("Carta Rocker","Carta M�mia","Carta Zerom","Carta Drops") == 2) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"6. Diga porque voc� gosta de Arruaceiros?");
				next;
				select("Para ser Fera","As roupas, o estilo","Excelente for�a de ataque");
				.@rgqz += 10;
				mes("[Markie]\n"
					"7. Com qual n�vel m�nimo de classe um Gatuno pode se tornar um Arruaceiro?");
				next;
				if (select("30","35","40","50") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"8. Escolha a cidade que n�o tem nenhum Feudo.");
				next;
				if (select("Prontera","Al De Baran","Alberta","Payon") == 3) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"9. Se um aprendiz quiser se tornar um Gatuno, que cogumelo ter� que colher?");
				next;
				switch (select("Cogumelo Borrachento","Cogumelo Vermelho","Cogumelo Venenoso","Cogumelo Laranja")) {
					default: break;
					case 1:
					case 3:
					.@rgqz += 10;
					break;
				}
				mes("[Markie]\n"
					"10. Que carta � in�til para Arruaceiros?");
				next;
				if (select("Sussurro","Salgueiro Anci�o","Zerom","Matyr") == 2) {
					.@rgqz += 10;
				}
				mes("[Markie]\n"
					"*Whew.*\n"
					"Finalmente.\n"
					"N�s acabamos.");
				next;
				if (.@rgqz > 80) {
					rogueq = 2;
					setquest(2017);
					mes("Bom. Voc� passou.\n"
						"N�s n�o teremos que\n"
						"fazer isso denovo.");
					next;
					mes("[Markie]\n"
						"Mais n�o se afobe, voc� t�m mais uns testes. O pr�ximo vai ser do Smith.");
					next;
					mes("[Markie]\n"
						"Ent�o...\n"
						"Vai procurar o Smith e termine este teste, beleza?\n"
						"Cuidado, o Smith � um cara muito chato!.");
					close;
				} else {
					rogueq = 1;
					mes("[Markie]\n"
						"Voc� se ferrou!");
					next;
					mes("[Markie]\n"
						"Voc� devia ter aprendido mais quando teve a chance.\n"
						"Obrigado por gastar meu tempo atoa.");
					close;
				}
			}
		} else if (rogueq == 2) {
			mes("[Markie]\n"
				"V� falar com o Smith.\n"
				"Seu teste poder� ser bastante dif�cil.\n"
				"Ele � um dos caras que garante que as pessoas paguem as suas d�vidas a n�s.\n"
				"Fica espert"+(Sex == SEX_MALE ? "o":"a")+", ele poder� ser um pouco exigente.");
			next;
			mes("[Markie]\n"
				"Beleza...\n"
				"Este cara pode ser um p� no saco, mais precisamos de gente como ele em nossa guilda.\n"
				"Entretanto, tome cuidado. Boa sorte para voc�, velho.");
			close;
		} else if (rogueq > 2 && rogueq < 16) {
			mes("[Markie]\n"
				"Ei cara...\n"
				"Fa�a o seu melhor.");
			next;
			mes("[Markie]\n"
				"Heh heh...\n"
				"Carne fresca.\n"
				"Isto vai ser uma presa f�cil para--espere!\n"
				"Er, eu n�o estava falando de voc�!\n"
				"Estava pensando em outra carne fresca.");
			close;
		} else if (rogueq == 16 || rogueq == 17) {
			if (SkillPoint) {
				mes("[Markie]\n"
					"Voc� ainda possui pontos de habilidades sobrando?\n"
					"Utilize todos os que ainda tiver e venha falar comigo novamente.");
				close;
			} else if (rogueq == 16) {
				mes("[Markie]\n"
					"Oh ei, � voc�!\n"
					"Voc� fez um bom trabalho.\n"
					"Agora, deixa eu trocar sua\n"
					"sua classe para arruaceir"+(Sex == SEX_MALE ? "o":"a")+".\n"
					"Voc� merece!");
				next;
				mes("[Markie]\n"
					"Parab�ns.!");
			} else {
				mes("[Markie]\n"
					"Oh! � voc�!\n"
					"Voc� foi realmente capaz de lidar com aquele cara?\n"
					"Passou muitos apertos para coletar todos os itens, eh?");
				next;
				mes("[Markie]\n"
					"Ei Ei.\n"
					"Parab�ns!");
			}
			.@jlevel = JobLevel;
			jobchange(Job_Rogue);
			completequest(2026);
			callfunc("ClearJobQuest2nd",17);
			next;
			mes("[Markie]\n"
				"Agora...\n"
				"� hora de eu te contar uma coisa.");
			next;
			mes("[Markie]\n"
				"Aproveite sua liberdade como arruaceir"+(Sex == SEX_MALE ? "o":"a")+".\n"
				"Basta lembrar que voc� tem que ser livre e respons�vel, ao mesmo tempo.\n"
				"Ent�o, trate os outros do jeito que voc� quer ser tratado, beleza?\n"
				"Agente se esbarra por a�.");
			close2;
			if (.@jlevel == 50) { getitem(Gladius_,1); }
			else { getitem(Gladius,1); }
			end;
		}
	} else if (BaseJob == Job_Rogue) {
		mes("[Markie]\n"
			"Eh, certo agora n�o temos nenhuma tarefa da guilda para voc�, portanto apenas suga seu caminho.");
		close;
	} else {
		mes("[Arruaceira da Guilda]\n"
			"Ei voc�...\n"
			"Tire seu traseiro gordo da minha frente!\n"
			"Ou eu vou redefinir a sua cara feia!");
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,376,23,1	script	Smithrato#rogueq	1_M_LIBRARYMASTER,{
	if (rogueq < 2) {
		mes("[Smithrato]\n"
			"Tr�s mil, duzentos e setenta e dois.\n"
			"Tr�s mil, duzentos e setenta e tr�s.\n"
			"Tr�s mil, duzentos e setenta e quatro...");
		next;
		mes("[Smithrato]\n"
			"Uhh...\n"
			"Que dor de cabe�a...\n"
			"Isto � muito zeny para contar.");
		next;
		mes("[Smithrato]\n"
			"Uh...?\n"
			"O que voc� est� fazendo aqui?");
		next;
		mes("[Smithrato]\n"
			"...Maldi��o!\n"
			"Eu perdi a conta!");
		close;
	} else if (rogueq == 2) {
		mes("[Smithrato]\n"
			"Seja bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Guilda dos Arruaceiros.\n"
			"A partir de agora, eu irei verificar a sua qualifica��o.");
		next;
		mes("[Smithrato]\n"
			"Antes de n�s come�armos, quero que voc� saiba de algo...");
		next;
		mes("[Smithrato]\n"
			"Todos os novos Arruaceiros s�o obrigados a pagar uma taxa.\n"
			"Ent�o eu espero que voc� cuide disso primeiro.");
		next;
		mes("[Smithrato]\n"
			"O que voc� tem que entender � que a Guilda dos Arruaceiros faz um monte de neg�cios.\n"
			"^666666Algumas vezes ilegais^000000, que necessita de apoio financeiro.");
		next;
		.@item_need = rand(1,15);
		if (.@item_need > 0 && .@item_need < 6) {
			setarray(.@item[0],510,932,957,958);
			setarray(.@count[0], 6, 10, 10, 10);
			.@rgvar = 3;
		} else if (.@item_need > 5 && .@item_need < 11) {
			setarray(.@item[0], 511,910,926,964);
			setarray(.@count[0], 10, 10, 10, 10);
			.@rgvar = 4;
		} else if (.@item_need > 10 && .@item_need < 15) {
			setarray(.@item[0],508,948,935,940);
			setarray(.@count[0],10, 10, 10, 10);
			.@rgvar = 5;
		} else {
			setarray(.@item[0],915,713,1002,953,507,919,715,913,909,705,716,917,908,945);
			setarray(.@count[0], 4,  4,   4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4);
			.@rgvar = 6;
		}
		mes("[Smithrato]\n"
			"Primeiro, a taxa de inscri��o:\n"
			"^FF000010,000 zeny^000000.");
		next;
		mes("[Smithrato]\n"
			"N�s tambem precisamos que voc� traga...");
		next;
		mes("[Smithrato]");
		for (.@i = 0; .@i < getarraysize(.@item); .@i++) {
			mes("^FF0000"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.");
		}
		switch (.@rgvar) {
			case 3: rogueq = 3; changequest(2017,2018); break;
			case 4: rogueq = 4; changequest(2017,2019); break;
			case 5: rogueq = 5; changequest(2017,2020); break;
			case 6: rogueq = 6; changequest(2017,2021); break;
		}
		next;
		mes("[Smithrato]\n"
			"Nem pense em voltar sem trazer tudo sen�o eu irei te matar aqui mesmo.");
		close;
	} else if (rogueq > 2 && rogueq < 7) {
		switch (rogueq) {
			case 3:
			setarray(.@item[0],510,932,957,958);
			setarray(.@count[0], 6, 10, 10, 10);
			break;
			case 4:
			setarray(.@item[0], 511,910,926,964);
			setarray(.@count[0], 10, 10, 10, 10);
			break;
			case 5:
			setarray(.@item[0],508,948,935,940);
			setarray(.@count[0],10, 10, 10, 10);
			break;
			case 6:
			setarray(.@item[0],915,713,1002,953,507,919,715,913,909,705,716,917,908,945);
			setarray(.@count[0], 4,  4,   4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4);
			break;
		}
		.@arraysize = getarraysize(.@item);
		for (.@i = 0; .@i < .@arraysize; .@i++) {
			if (countitem (.@item[.@i]) < .@count[.@i]) {
				break;
			}
		}
		if (.@i == .@arraysize && Zeny >= 10000) {
			mes("[Smithrato]\n"
				"Wow, voc� trouxe cara coisa que eu lhe pedi para trazer.\n"
				"Bom trabalho...\n"
				"Eu lhe sa�do.");
			next;
			mes("^CCCCCC- Dedo M�dio -^000000'\n"
				"*Grins*");
			for (.@i = 0; .@i < .@arraysize; .@i++) {
				delitem(.@item[.@i],.@count[.@i]);
			}
			next;
			mes("[Smithrato]\n"
				".........");
			next;
			mes("[Smithrato]\n"
				"Muito bem...\n"
				"Agora que estou mais calmo, irei lhe informar o seu pr�ximo destino.");
			next;
			switch (rand(4)) {
				case 1:
				mes("[Smithrato]\n"
					"V� e procure por Hermanthorn Junior.\n"
					"Que est� vivendo perto do ^0000FFPonto de inspe��o da Ilha Pharos^000000");
				next;
				mes("[Smithrato]\n"
					"Ah... antes que me esque�a.\n"
					"Ponha em mente em ^0000FFn�o mencionar nada sobre itens de forja^000000.\n"
					"Isso � muito importante.");
				rogueq = 8;
				if (questprogress(2018)) { changequest(2018,2025); }
				else if (questprogress(2019)) { changequest(2019,2025); }
				else if (questprogress(2020)) { changequest(2020,2025); }
				close;
				case 2:
				mes("[Smithrato]\n"
					"V� visitar Aragham Junior que vive ao Sul da Fortaleza de Saint Darmain.\n"
					"Essa area � localizada a um campo a leste daqui.");
				next;
				mes("[Smithrato]\n"
					"Ele � um cara legal, voc� sabe.\n"
					"Ele trabalha duro e � muito bom em coletar contas.");
				next;
				mes("[Smithrato]\n"
					"Ah, voc� ter� que lembrar da senha se voc� quiser conhec�-lo.\n"
					"Ele n�o deixa ninguem entrar em sua casa sem a senha.");
				next;
				mes("[Smithrato]\n"
					"A senha � ^0000FFAragham n�o roubou o material de forja^000000.");
				rogueq = 9;
				if (questprogress(2018)) { changequest(2018,2022); }
				else if (questprogress(2019)) { changequest(2019,2022); }
				else if (questprogress(2020)) { changequest(2020,2022); }
				close;
				case 3:
				mes("[Smithrato]\n"
					"Eu quero que voc� conhe�a o Antonio Junior, filho de Antonio, o primeiro.\n"
					"Pela mesma raz�o, pessoas querem mat�-lo por causa de algo que o pai dele fez no passado.");
				next;
				mes("[Smithrato]\n"
					"Ah, voc� ter� que lembrar da senha para conhece-lo.\n"
					"A senha � ^0000FFAntonio n�o gosta de quebrar o material de forja^000000.");
				rogueq = 10;
				if (questprogress(2018)) { changequest(2018,2023); }
				else if (questprogress(2019)) { changequest(2019,2023); }
				else if (questprogress(2020)) { changequest(2020,2023); }
				close;
				default:
				mes("[Smithrato]\n"
					"Voc� deve ir procurar Hollgrehenn Junior, um genio da manipula��o.");
				next;
				mes("[Smithrato]\n"
					"Ah, voc� ter� que lembrar da senha para conhece-lo.\n"
					"A senha � ^0000FFMeu pai n�o roubou o material de forja^000000.");
				rogueq = 11;
				if (questprogress(2018)) { changequest(2018,2024); }
				else if (questprogress(2019)) { changequest(2019,2024); }
				else  if (questprogress(2029)) { changequest(2020,2024); }
				close;
			}
		} else {
			mes("[Smithrato]\n"
				"Mas que P$@&*!?\n"
				"Voc� n�o trouxe todos os itens necess�rios?!");
			next;
			mes("[Smithrato]\n"
				"Agora preste aten��o...!\n"
				"Traga ^FF000010,000 zeny^000000, e os seguintes itens...");
			next;
			mes("[Smithrato]");
			for (.@i = 0; .@i < .@arraysize; .@i++) {
				mes("^FF0000"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.");
			}
			next;
			mes("[Smithrato]\n"
				"Voc� entendeu desta vez?!!!");
			close;
		}
	} else if (rogueq == 8) {
		mes("[Smithrato]\n"
			"O qu�...?\n"
			"Voc� esqueceu para onde deve ir?");
		next;
		mes("[Smithrato]\n"
			"V� e procure por Hermanthorn Junior.\n"
			"Que est� vivendo perto do ^0000FFPonto de inspe��o da Ilha Pharos^000000.\n"
			"Fica na fronteira entre Morroc e Comodo.");
		next;
		mes("[Smithrato]\n"
			"Ah... antes que me esque�a, ponha em mente em ^0000FFn�o mencionar nada sobre itens de forja^000000.\n"
			"Isso � muito importante.");
		close;
	} else if (rogueq == 9) {
		mes("[Smithrato]\n"
			"O qu�...?\n"
			"Voc� esqueceu para onde deve ir?");
		next;
		mes("[Smithrato]\n"
			"Siga um campo a Leste e entre no edif�cio que fica ao Sul da Fortaleza de Saint Darmain.\n"
			"Para conhecer Aragham Junior.");
		next;
		mes("[Smithrato]\n"
			"A senha � ^0000FFAragham n�o roubou o material de forja^000000.");
		close;
	} else if (rogueq == 10) {
		mes("[Smithrato]\n"
			"O qu�...?\n"
			"Voc� j� se esqueceu para onde deve ir?");
		next;
		mes("[Smithrato]\n"
			"V� para o edif�cio que est� na praia de Kokomo.\n"
			"Que est� a caminho para Comodo por aqui, para conhecer Antonio Junior.");
		next;
		mes("[Smithrato]\n"
			"A senha � ^0000FF'Antonio n�o gosta de quebrar o material de forja'^000000.");
		close;
	} else if (rogueq == 11) {
		mes("[Smithrato]\n"
			"O que...?\n"
			"Voc� se esqueceu para onde deve ir?");
		next;
		mes("[Smithrato]\n"
			"V� para o campo ao Sul da Fortaleza, que est� a caminho de Morroc por aqui.\n"
			"Para conhecer Hollgrehenn Junior.");
		next;
		mes("[Smithrato]\n"
			"A senha � ^0000FFMeu pai n�o roubou o material de forja^000000.");
		close;
	} else {
		mes("[Smithrato]\n"
			"Hmmm...?\n"
			"Voc� n�o tem algum lugar para ir agora?");
		close;
	}
}

// ------------------------------------------------------------------
cmd_fild09,106,195,0	script	Warp#1rogueq	WARPNPC,1,1,{
	OnTouch:
	mes("[???]\n"
		"Quem est� a�?!\n"
		"Quem ousa\n"
		"entrar em meu territ�rio?");
	next;
	switch (select("Meu pai","Aragham","Aragon","Legolas")) {
		case 1:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Meu pai");
		break;
		case 2:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Aragham");
		.@rogue_t += 10;
		break;
		case 3:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Aragon");
		break;
		case 4:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Legolas");
		break;
	}
	switch (select("n�o faz","n�o gosta","n�o","sempre")) {
		case 1: mes("n�o faz"); break;
		case 2: mes("n�o gosta"); break;
		case 3:
		mes("n�o");
		.@rogue_t += 10;
		break;
		case 4: mes("sempre"); break;
	}
	switch (select("recebe","roubou","se escondeu","examinou","de quebrar")) {
		case 1: mes("recebe"); break;
		case 2:
		mes("roubou");
		.@rogue_t += 10;
		break;
		case 3: mes("se escondeu"); break;
		case 4: mes("examinou"); break;
		case 5: mes("de quebrar"); break;
	}
	switch (select("o material de forja","itens roubados","material refinado","equipamentos")) {
		case 1:
		mes("o material de forja.");
		.@rogue_t += 10;
		break;
		case 2: mes("itens roubados."); break;
		case 3: mes("material refinado."); break;
		case 4: mes("equipamentos."); break;
	}
	next;
	if (.@rogue_t > 30) {
		mes("^3355FF*Creeeeak*\n"
			"A porta abre lentamente.^000000");
		close2;
		warp("in_rogue",246,25);
		end;
	} else {
		mes("[???]\n"
			"O que...?\n"
			"Saia daqui!");
		close;
	}
}

// ------------------------------------------------------------------
cmd_fild09,335,143,0	script	Warp#2rogueq	WARPNPC,1,1,{
	OnTouch:
	mes("[???]\n"
		"Quem est� a�?!\n"
		"Quem ousa\n"
		"entrar em meu territ�rio?");
	next;
	switch (select("Meu pai","Aragham","Aragon","Legolas")) {
		case 1:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Meu pai");
		.@rogue_t += 10;
		break;
		case 2:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Aragham");
		break;
		case 3:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Aragon");
		break;
		case 4:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Legolas");
		break;
	}
	switch (select("n�o","nem","nunca","jamais")) {
		case 1: mes("n�o faz"); break;
		case 2: mes("n�o gosta"); break;
		case 3:
		mes("n�o");
		.@rogue_t += 10;
		break;
		case 4: mes("sempre"); break;
	}
	switch (select("recebe","de quebrar","se escondeu","examinou","rubou")) {
		case 1: mes("recebe"); break;
		case 2: mes("de quebrar"); break;
		case 3: mes("se escondeu"); break;
		case 4: mes("examinou"); break;
		case 5:
		mes("roubou");
		.@rogue_t += 10;
		break;
	}
	switch (select("o material de forja","itens roubados","material refinado","equipamentos.")) {
		case 1:
		mes("o material de forja");
		.@rogue_t += 10;
		break;
		case 2: mes("itens roubados."); break;
		case 3: mes("material refinado."); break;
		case 4: mes("equipamentos."); break;
	}
	next;
	if (.@rogue_t > 30) {
		mes("^3355FF*Creeeeak*\n"
			"A porta abre lentamente.^000000");
		close2;
		warp("in_rogue",169,34);
		end;
	} else {
		mes("[???]\n"
			"O que...?\n"
			"Saia daqui!");
		close;
	}
}

// ------------------------------------------------------------------
cmd_fild04,304,180,0	script	Warp#3rogueq	WARPNPC,1,1,{
	OnTouch:
	mes("[???]\n"
		"Quem est� a�?!\n"
		"Quem ousa entrar em meu territ�rio?");
	next;
	switch (select("Anntonio","Aragham","Antonio","Hollgrehenn")) {
		case 1:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Anntonio");
		break;
		case 2:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Aragham");
		break;
		case 3:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Antonio");
		.@rogue_t += 10;
		break;
		case 4:
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Hollgrehenn");
		break;
	}
	switch (select("gosta","n�o gosta","prefere","n�o prefere")) {
		case 1: mes("gosta"); break;
		case 2:
		mes("n�o gosta");
		.@rogue_t += 10;
		break;
		case 3: mes("prefere"); break;
		case 4: mes("n�o prefere"); break;
	}
	switch (select("de danificar","de quebrar","de consertar","de forjar")) {
		case 1: mes("de danificar"); break;
		case 2:
		mes("de quebrar");
		.@rogue_t += 10;
		break;
		case 3: mes("de consertar"); break;
		case 4: mes("de forjar"); break;
	}
	switch (select("o item de forja","os itens refinados","o material de forja","os itens aprimorados","os itens refor�ados","os itens forjados.")) {
		case 1: mes("o item de forja."); break;
		case 2: mes("os itens refinados."); break;
		case 3:
		mes("o material de forja.");
		.@rogue_t += 10;
		break;
		case 4: mes("os itens aprimorados."); break;
		case 5: mes("os itens refor�ados."); break;
		case 6: mes("os itens forjados."); break;
	}
	next;
	if (.@rogue_t > 30) {
		mes("^3355FF*Creeeeak*\n"
			"A porta abre lentamente.^000000");
		close2;
		warp("in_rogue",164,106);
		end;
	} else {
		mes("[???]\n"
			".....Vai embora!");
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,272,135,1	script	Hermanthorn Jr#rg	4_M_03,{
	if (rogueq == 8) {
		mes("[Hermanthorn Jr.]\n"
			"Eu vejo...\n"
			"Voc� deve vindo da Guilda dos Arruaceiros.\n"
			"Voce deve ser um dos que Sr.Smith n�o ficou muito feliz com...");
		next;
		mes("[Hermanthorn Jr.]\n"
			"Ele jogou uma ajuste e voc� trouxe todos os itens que ele pediu, n�o � mesmo?\n"
			"Bem, eu posso ver que voc� continua muito ing�nuo.");
		next;
		mes("[Hermanthorn Jr.]\n"
			"Eu suponho que ele lhe fez de idiota para buscar alguns itens.\n"
			"E depois ele passou voc� para mim.\n"
			"Triste, realmente.");
		next;
		mes("[Hermanthorn Jr.]\n"
			"Bem, depois de voc� ser torturado por ele, tentarei especialmente ser generoso com voc�.\n"
			"Meu teste para voc� vai ser simples, muito simples.");
		next;
		mes("[Hermanthorn Jr.]\n"
			"Tudo o que voc� tme que fazer e passar por um t�nel subterr�neo.\n"
			"Andar todo o caminho de volta para a Guilda dos Arruaceiros.");
		next;
		mes("[Hermanthorn Jr.]\n"
			"H� uma coisa que eu deveria lhe dizer, no entanto.\n"
			"Voc� dever� ser muito cuidadoso l� dentro, certo?");
		next;
		mes("[Hermanthorn Jr.]\n"
			"Um bando de idiotas tem quebrado alguns galhos secos e castando Abracadabra por todo o lugar...");
		next;
		mes("[Hermanthorn Jr.]\n"
			"Bem...\n"
			"Apenas tente voltar para a Guilda dos Arruaceiros s�o e salvo.\n"
			"� tudo o que precisa fazer!");
		rogueq = 12;
		changequest(2025,2026);
		close;
	} else if (rogueq == 12) {
		mes("[Hermanthorn Jr.]\n"
			"Oh certo.\n"
			"Isso � realmente importante.\n"
			"Voc� precisa de uma senha para entrar no t�nel.\n"
			"Para destrancar a porta, a combina��o de quatro n�meros s�o ^0000FF3019^000000.");
		close;
	} else {
		mes("[HermanthornJr.]\n"
			"Huh...?\n"
			"O que diabos\n"
			"voc� est� fazendo aqui.\n"
			"Desapare�a, por que voc� n�o?");
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,270,130,0	script	he_to_rogue#rogueq	WARPNPC,1,1,{
	OnTouch:
	mes("^3355FFA porta est� trancada.\n"
		"Voc� deve inserir a combina��o de quatro n�meros para abri-l�.^000000");
	next;
	input(.@input);
	if (.@input < 1 || .@input > 10000) {
		mes("^3355FFPor favor digite a combina��o de quatro n�meros.^000000");
		close;
	} else if (.@input == 3019) {
		if (rogueq == 12) {
			mes("^3355FFA porta est� aberta.^000000");
			close2;
			warp(strnpcinfo(NPC_MAP),10,21);
			rogueq = 12;
			end;
		} else {
			mes("[Hermanthorn Jr.]\n"
				"Bem...\n"
				"Eu n�o lhe contei que eu mudei a senha?\n"
				"*Wink Wink*");
			close;
		}
	} else {
		mes("^3355FFA porta ainda est� trancada.^000000");
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,200,389,0	script	gen_ro#1rogueq	FAKE_NPC,3,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),200,389,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),201,389,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("gen_ro#2rogueq::OnDisable");
		donpcevent("gen_ro#3rogueq::OnDisable");
		donpcevent("gen_ro#4rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,100,389,0	script	gen_ro#2rogueq	FAKE_NPC,3,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),100,389,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("gen_ro#1rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,150,389,0	script	gen_ro#3rogueq	FAKE_NPC,3,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),145,389,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),143,389,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("gen_ro#2rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,250,389,0	script	gen_ro#4rogueq	FAKE_NPC,3,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),200,389,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("gen_ro#3rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,9,389,0	script	oneway_to_gu#rogueq	WARPNPC,1,1,{
	OnTouch:
	donpcevent("gen_ro#4rogueq::OnDisable");
	rogueq = 17;
	warp(strnpcinfo(NPC_MAP),367,10);
	end;
}

// ------------------------------------------------------------------
in_rogue,244,39,1	script	Aragham Junior#rogueq	4W_M_03,{
	if (rogueq == 9) {
		mes("[Aragham Jr.]\n"
			"Oh, voc� deve ter vindo da Guilda dos Arruaceiros...");
		next;
		mes("[Aragham Jr.]\n"
			"Meu nome � Aragham Junior, o arruaceiro do Deserto.\n"
			"Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para aprender como se tornar um Arruaceiro?");
		next;
		mes("[Aragham Jr.]\n"
			"Veja, como um Arruaceiro, nosso lema �:\n"
			"^0000FFEvite o forte! Seja malicioso com o fraco!^000000.\n"
			"Essa regra � especialmente verdadeira para os monstros.");
		next;
		mes("[Aragham Jr.]\n"
			"Evite o forte!\n"
			"Seja malicioso com o fraco!\n"
			"� uma regra simples...");
		next;
		mes("[Aragham Jr.]\n"
			"Agora, lembre-se disso quando voc� passar pelo ^0000FFt�nel subterr�neo^000000.\n"
			"Tente andar todo o caminho para a Guilda dos Arruaceiros.");
		next;
		mes("[Aragham Jr.]\n"
			"Haver� alguns monstros, mas n�o se preocupe.\n"
			"Eu sei que voc� � forte.\n"
			"Tudo bem, voc� est� pronto para ir ou o que?");
		next;
		if (select("Sim, vamos l�","Nah.") == 1) {
			mes("[Aragham Jr.]\n"
				"Tudo bem...\n"
				"Boa sorte, ent�o.");
			close2;
			warp(strnpcinfo(NPC_MAP),15,105);
			rogueq = 13;
			changequest(2022,2026);
			end;
		} else {
			mes("[Aragham Jr.]\n"
				"Tudo bem, tudo bem.\n"
				"N�o tenha pressa, ent�o volte aqui quando voc� estiver pront"+(Sex == SEX_MALE ? "o":"a")+".");
			close;
		}
	} else if (rogueq == 13) {
		mes("[Aragham Jr.]\n"
			"Oh, voc� voltou.\n"
			"Acho que voc� est� bem desta vez.\n"
			"Outro lema dos Arruaceiros �:\n"
			"^0000FFFalha ensina o sucesso^000000.\n"
			"Bem, ent�o novamente...");
		next;
		if (select("Tentar novamente","Cancelar") == 1) {
			mes("[Aragham Jr.]\n"
				"Boa sorte.");
			close2;
			warp(strnpcinfo(NPC_MAP),15,105);
			end;
		} else {
			mes("[Aragham Jr.]\n"
				"Tudo bem, tudo bem.\n"
				"N�o tenha presa\n"
				"e volte aqui\n"
				"quando voc� estiver pronto.");
			close;
		}
	} else if (BaseJob != Job_Rogue) {
		mes("[Aragham Jr.]\n"
			"Huh...?\n"
			"Quem � voc�?!\n"
			"Voc� n�o � da Guilda dos Arruaceiros!!");
		next;
		mes("[Aragham Jr.]\n"
			"Se voc� veio para me matar, n�o � mesmo?\n"
			"N-n�o!\n"
			"N�o posso morrer ainda!");
		close;
	} else {
		mes("[Aragham Jr.]\n"
			"Hey...\n"
			"O que traz voc� de volta aqui?\n"
			"Porque voc� n�o descansa um pouco antes de voc� ir?");
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,160,34,1	script	Hollgrehenn junior#rogueq	4_M_03,{
	if (rogueq == 11) {
		mes("[Hollgrehenn Jr.]\n"
			"Hmm...\n"
			"Voc� veio da Guilda dos Arruaceiros, certo?");
		next;
		mes("[Hollgrehenn Jr.]\n"
			"Eu sou Hollgrehenn Junior.\n"
			"Eu cuido de muitos dos nossos neg�cios.\n"
			"Ent�o, est� pronto para o meu teste?");
		next;
		mes("[Hollgrehenn Jr.]\n"
			"N�s, arruaceiros, compartilhamos este lema:\n"
			"^0000FFEvite os fortes!\n"
			"Seja mau com os fracos!^000000\n"
			"Esta regra se aplica a qualquer amea�a, especialmente monstros.");
		next;
		mes("[Hollgrehenn Jr.]\n"
			"� f�cil de lembrar.\n"
			"Apenas n�o esque�a de por isso em pr�tica, entendeu?");
		next;
		mes("[Hollgrehenn Jr.]\n"
			"Para o meu teste, voc� ir� ao ^0000FFT�nel Subterr�neo^000000.\n"
			"Siga o caminho de volta ao Cl� dos Arruaceiros.");
		next;
		mes("[Hollgrehenn Jr.]\n"
			"Haver� alguns monstros l�, mas ser� parte do seu treinamento.\n"
			"Agora, est� pront"+(Sex == SEX_MALE ? "o":"a")+" para ir ou n�o?");
		next;
		if (select("Sim, estou","N�o.") == 1) {
			mes("[Hollgrehenn Jr.]\n"
				"Boa sorte.");
			close2;
			warp(strnpcinfo(NPC_MAP),15,105);
			rogueq = 15;
			changequest(2024,2026);
			end;
		} else {
			mes("[Hollgrehenn Jr.]\n"
				"Aproveite seu tempo.\n"
				"Volte aqui quando estiver pronto.");
			close;
		}
	}
	else if (rogueq == 15) {
		mes("[Hollgrehenn Jr.]\n"
			"Hmm.\n"
			"Voc� falhou.\n"
			"Quer tentar novamente?");
		next;
		if (select("Sim quero","Tentarei depois") == 1) {
			mes("[Hollgrehenn Jr.]\n"
				"Boa sorte.");
			close2;
			warp(strnpcinfo(NPC_MAP),15,105);
			end;
		} else {
			mes("[Hollgrehenn Jr.]\n"
				"Aproveite seu tempo.\n"
				"Volte aqui quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+".");
			close;
		}
	} else if (BaseJob != Job_Rogue) {
		mes("[Hollgrehenn Jr.]\n"
			"Hmm...?\n"
			"Voc� n�o � da Guilda dos Arruaceiros...");
		next;
		mes("[Hollgrehenn Jr.]\n"
			"Voc� deveria sair daqui agora se souber o que � bom para voc�...");
		next;
		mes("[Hollgrehenn Jr.]\n"
			"Agora...\n"
			"Aproveite antes que eu mude de id�ia e decida matar voc�.");
		close;
	} else {
		mes("[Hollgrehenn Jr.]\n"
			"Ei...\n"
			"Veio pessear?");
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,177,109,1	script	Antonio junior#rg	4_M_ORIENT01,{
	if (rogueq == 10) {
		mes("[Antonio Jr.]\n"
			"Voc� � da Guilda dos Arruaceiros?\n"
			"Se quiser aprender sobre como ser um Arruaceiro.\n"
			"Ent�o cale-se e fique quiet"+(Sex == SEX_MALE ? "o":"a")+".");
		next;
		mes("[Antonio Jr.]\n"
			"^0000FFEvite os fortes!\n"
			"Seja mau com os fracos!^000000\n"
			"Esse � nosso lema para combater monstros.");
		next;
		mes("[Antonio Jr.]\n"
			"N�o demonstre piedade quando lugar com monstros mais fracos.\n"
			"Tente manter dist�ncia dos monstros fortes.");
		next;
		mes("[Antonio Jr.]\n"
			"Agora, quero que voc� caminhe at� a guilda dos Arruaceiros atrav�s de um ^0000FFT�nel Subterr�neo^000000.");
		next;
		mes("[Antonio Jr.]\n"
			"H� monstros l�, mas se voc� evitar os fortes e for mau com os fracos, voc� se dar� bem.");
		next;
		if (select("Vamos l�!","E-espere!") == 1) {
			mes("[Antonio Jr.]\n"
				"Espero que voc� n�o falhe neste teste.\n"
				"Voc� s� poder� se tornar um Arruaceiro se passar...");
			close2;
			warp(strnpcinfo(NPC_MAP),15,105);
			rogueq = 14;
			changequest(2023,2026);
			end;
		} else {
			mes("[Antonio Jr.]\n"
				"N�o tenho tempo para idiotices com voc�.\n"
				"Apresse-se, ent�o comece o teste.");
			close;
		}
	} else if (rogueq == 14) {
		mes("[Antonio Jr.]\n"
			"Voc� falhou...?\n"
			"Isso � a vida.\n"
			"Vai tentar novamente ou o que?");
		next;
		if (select("Novamente","Cancelar.") == 1) {
			mes("[Antonio Jr.]\n"
				"Lembre-se, estou lhe fazendo um favor aqui...\n"
				"Agora, n�o volte at� que voc� seja um Arruaceiro.");
			close2;
			warp(strnpcinfo(NPC_MAP),15,105);
			end;
		}
		mes("[Antonio Jr.]\n"
			"N�o tenho tempo para idiotices com voc�.\n"
			"Apresse-se, ent�o comece o teste.");
		close;
	} else if (BaseJob != Job_Rogue) {
		mes("Huh...?\n"
			"Quem � voc�?!\n"
			"Voc� n�o � da Guilda dos Arruaceiros!!");
		next;
		mes("[Antonio Jr.]\n"
			"Voc� veio para me matar?!\n"
			"N�o deixarei!!\n"
			"Vamos, d�-me seu melhor tiro!\n"
			"Voc� n�o poder� lutar se eu arrancar seus olhos!");
		close;
	} else {
		mes("[Antonio Jr.]\n"
			"Ei, como est� indo?\n"
			"Acalme-se e relaxe antes de sair.");
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,370,320,0	script	quest_out#rogueq	WARPNPC,1,1,{
	OnTouch:
	rogueq = 16;
	warp(strnpcinfo(NPC_MAP),378,113);
	end;
}

// ------------------------------------------------------------------
in_rogue,15,184,0	script	mob_rogue#1rogueq	FAKE_NPC,8,1,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),14,187,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),15,188,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),16,189,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),17,187,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),18,188,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),19,189,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,15,273,0	script	mob_rogue#2rogueq	FAKE_NPC,8,1,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),15,276,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),13,276,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),11,276,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,15,333,0	script	mob_rogue#3rogueq	FAKE_NPC,8,1,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),15,336,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),15,336,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),15,336,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),15,336,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("mob_rogue#4rogueq::OnDisable");
		donpcevent("mob_rogue#7rogueq::OnDisable");
		donpcevent("mob_rogue#8rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,39,341,0	script	mob_rogue#4rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),39,341,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),40,341,"Carni�al",GHOUL,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),41,341,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),42,341,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,102,334,0	script	mob_rogue#5rogueq	FAKE_NPC,1,4,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),92,334,"Khalitzburg",KHALITZBURG,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("mob_rogue#1rogueq::OnDisable");
		donpcevent("mob_rogue#2rogueq::OnDisable");
		donpcevent("mob_rogue#3rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,58,309,0	script	mob_rogue#6rogueq	FAKE_NPC,4,1,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),57,301,"Khalitzburg",KHALITZBURG,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("mob_rogue#1rogueq::OnDisable");
		donpcevent("mob_rogue#2rogueq::OnDisable");
		donpcevent("mob_rogue#3rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,101,264,0	script	mob_rogue#7rogueq	FAKE_NPC,5,5,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),101,264,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),102,264,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,140,312,0	script	mob_rogue#8rogueq	FAKE_NPC,5,5,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),140,312,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,139,246,0	script	mob_rogue#9rogueq	FAKE_NPC,4,4,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),139,246,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),149,246,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),140,246,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),141,246,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),150,246,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),151,246,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,197,249,0	script	mob_rogue#10rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),176,212,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),176,213,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),177,211,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),177,212,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),177,213,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),177,214,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),178,211,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),178,212,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),178,213,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),179,211,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),179,212,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),179,213,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),179,214,"Zumbi",ZOMBIE,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),176,211,"Carni�al",GHOUL,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),177,214,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),178,214,"Esqueleto Arqueiro",ARCHER_SKELETON,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("mob_rogue#4rogueq::OnDisable");
		donpcevent("mob_rogue#5rogueq::OnDisable");
		donpcevent("mob_rogue#6rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,96,205,0	script	mob_rogue#11rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		donpcevent("mob_rogue#7rogueq::OnDisable");
		donpcevent("mob_rogue#8rogueq::OnDisable");
		donpcevent("mob_rogue#9rogueq::OnDisable");
		donpcevent("mob_rogue#10rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
}

// ------------------------------------------------------------------
in_rogue,86,187,0	script	mob_rogue#12rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),90,187,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),90,183,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),90,190,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,223,187,0	script	mob_rogue#13rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),236,186,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),238,186,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),234,186,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent("mob_rogue#12rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,233,207,0	script	mob_rogue#14rogueq	FAKE_NPC,8,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		donpcevent("mob_rogue#13rogueq::OnDisable");
	} else { warp("mag_dun02",181,176); }
	end;
}

// ------------------------------------------------------------------
in_rogue,244,319,0	script	mob_rogue#15rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster(strnpcinfo(NPC_MAP),240,319,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),259,319,"Esqueleto Arqueiro",ARCHER_SKELETON,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),259,320,"Carni�al",GHOUL,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),240,319,"M�mia",MUMMY,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),259,319,"Esqueleto Arqueiro",ARCHER_SKELETON,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),259,320,"Carni�al",GHOUL,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	} else { warp("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,334,319,0	script	mob_rogue#16rogueq	FAKE_NPC,8,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		donpcevent("mob_rogue#15rogueq::OnDisable");
	}
	else { warp("mag_dun02",181,176); }
	end;
}
