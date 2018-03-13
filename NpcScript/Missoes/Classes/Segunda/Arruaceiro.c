/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudança de Classe para Arruaceiro.               |
\*-----------------------------------------------------------------*/

in_rogue,363,122,4	script	Arruaceira#rogueq	4_F_ROGUE,{
	if (BaseJob == Job_Thief) {
		if (JobLevel < 40) {
			mes "[Arruaceira]";
			mes "Nós só aceitamos Gatunos de nível de classe 40.";
			mes "Não vou me arriscar a te ensinar nada.";
			mes "Sabendo que você ainda não está pront"+(Sex == SEX_MALE ? "o":"a")+".";
			close;
		} else if (rogueq < 2) {
			if (rogueq != 1) {
				mes "[Arruaceira]";
				mes "Então o que uma criança igual a você está fazendo aqui?";
				if (Sex == SEX_MALE) {
					mes "Oh, eu vou pegar agora...";
					mes "O que o pivete quer ser um ^800000Arruaceiro^000000.";
				} else {
					mes "Oh, já sei...";
					mes "O garotinha quer ser um ^800000Arruaceira^000000.";
				}
				next;
				mes "[Arruaceira]";
				mes "Hmm, é bom conhecer você, eu acho.";
				mes "Eu sou Markie, e eu trabalho para Guilda dos Arruaceiros.";
				mes "Mas qual é seu nome?";
				next;
				mes "[Markie]";
				mes "..."+strcharinfo(PC_NAME) + "?";
				mes "Heh heh! Bom nome.";
				next;
				mes "[Markie]";
				mes "Então porque você quer se juntar aos arruaceiros?";
				mes "Eu acho que você me deu seu nome verdadeiro, você deve ser um Arruaceiro honesto.";
				mes "Não há muitos por aí, heh heh.";
				next;
				mes "[Markie]";
				mes "Regra número 1 para Arruaceiros...";
				mes "Nunca dê a sua verdadeira identidade para a maioria das pessoas.";
				mes "É uma pequena medida de segurança que gostamos de usar.";
				next;
				mes "[Markie]";
				mes "Certo.";
				mes "Estou aceitando oficialmente a sua candidatura, agora você tem que realizar um teste.";
				mes "Não se preocupe, o primeiro é realmente simples.";
			}
			mes "[Markie]";
			mes "Agora mantenha a calma e passe neste teste, ok?";
			next;
			mes "[Markie]";
			mes "Tudo bem...";
			mes "Vamos começar!";
			next;
			switch(rand(3)) {
				case 1:
				mes "[Markie]";
				mes "1. Qual habilidade é necessária para se aprender, ^880000Túnel de Fuga^000000?";
				next;
				if (select("Esconderijo","Furto","Perícia em Esquiva","Golpe Fuminante") == 1) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "2. Quanto habilidade ^880000Extorquir^000000 obtém quanto desconto a mais.";
				mes "Do que a habilidade ^880000Desconto^000000 dos Mercadores?";
				next;
				if (select("3%","2%","1%","0%") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "3. O que a habilidade ^880000Afanar^000000 faz?";
				next;
				if (select("Rouba Item de um jogador","Rouba Item de um monstro","Rouba Zeny de um monstro","Rouba Zeny de um jogador") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "4. Quantas pessoas são necessárias pra que a habilidade ^880000Malandragem^000000 funcione?";
				next;
				if (select("2 Arruaceiros","1 Gatuno + 2 Arruaceiros","4 Gatunos","2 Arruaceiros + 1 Mercenário") == 4) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "5. Que habilidade você pode aprender após ^880000Remover Capacete^000000 Nível 5?";
				next;
				if (select("Envenenar","Recuar","Explosão Tóxica","Remover Escudo") == 4) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "6. Que habilidade faz com que você possa andar sem que ninguém te veja?";
				next;
				if (select("Esconderijo","Recuar","Túnel de Fuga","Chutar Areia") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "7. Que carta aumenta sua chance de acerto num ataque?";
				next;
				if (select("Carta André","Carta Familiar","Carta Múmia","Carta Poring.") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "8. Se você usar uma arma equipada com a carta Vadon.";
				mes "Qual desses monstros será mais fácil de matar?";
				next;
				if (select("Vadon","Deviruchi","Salgueiro Ancião","Baphomet") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "9. Quanto SP a habilidade ^880000Ataque Duplo^000000 gasta, se você estiver equipando uma adaga?";
				next;
				if (select("15 de SP","0, é habilidade passiva","10 SP","54 de SP") == 2) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "10. Que adaga com propriedades especiais é mais útil no Túnel Subterrâneo de Byalan?";
				next;
				if (select("De Vento","De Gelo","De Terra","De Fogo") == 1) {
					.@rgqz += 10;
				}
				break;
				case 2:
				mes "[Markie]";
				mes "1. Que monstro pode deixar cair um Gladius com vagas para cartas?";
				next;
				if (select("Besouro Ladrão","Peco Peco","Lobo do Deserto","Kobold") == 4) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "2. Que monstro pode deixar cair uma Main Gauche com vagas para cartas?";
				next;
				if (select("Zangão","Lobo do Deserto","Marionete","Lunático") == 1) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "3. Qual classe é capaz de criar poções?";
				next;
				if (select("Mercador","Alquimista","Ferreiro","Noviço") == 2) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "4. Qual destes itens não é equipável por um Arruaceiro?";
				next;
				if (select("Gakkung","Besta","Gladius","Katar") == 4) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "5. O \"Hode\" é um monstro de qual propriedade?";
				next;
				if (select("Água","Fogo","Vento","Terra") == 4) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "6. Qual destes monstros não pode ser um bichinho de estimação?";
				next;
				if (select("Poporing","Creamy","Guerreiro Orc","Esporo Venenoso") == 2) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "7. Qual destes monstros é mais resistente à propriedade fogo?";
				next;
				if (select("Goblin (Adaga)","Goblin (Mangual)","Goblin (Machado)","Goblin (Maça)") == 4) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "8. Escolha a cidade que não tem nenhum Feudo.";
				next;
				if (select("Prontera","Al De Baran","Alberta","Payon") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "9. Escolha uma planta que dá Ervas Azuis.";
				next;
				switch(select("Planta Verde","Planta Amarela","Planta Azul","Planta Branca")) {
					default: break;
					case 3: .@rgqz += 10; break;
					case 4: .@rgqz += 10; break;
				}
				mes "[Markie]";
				mes "10. Qual destes monstros não é Amaldiçoado?";
				next;
				if (select("Zumbi","Megalodon","Familiar","Khalitzburg") == 3) {
					.@rgqz += 10;
				}
				break;
				default:
				mes "[Markie]";
				mes "1. Quanta esquiva a mais é obtida maximizando a habilidade ^880000Perícia em Esquiva^000000?";
				next;
				if (select("30","40","160","20") == 1) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "2. Qual destes monstros é capaz de detectar um Gatuno usando a habilidade Esconderijo?";
				next;
				if (select("Talo de Verme","Argos","Múmuia","Esqueleto Operário") == 2) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "3. Onde fica a Guilda para a mudança de classe para Arruaceiro?";
				next;
				if (select("Comodo","Praia Kokomo","Ilha Pharos","Morroc") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "4. Onde fica a Guilda para a mudança de classe para Gatuno?";
				next;
				if (select("Comodo","Lutie","Alberta","Morroc") == 4) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "5. Qual destas cartas não tem relação com Destreza?";
				next;
				if (select("Carta Rocker","Carta Múmia","Carta Zerom","Carta Drops") == 2) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "6. Diga porque você gosta de Arruaceiros?";
				next;
				select("Para ser Fera","As roupas, o estilo","Excelente força de ataque");
				.@rgqz += 10;
				mes "[Markie]";
				mes "7. Com qual nível mínimo de classe um Gatuno pode se tornar um Arruaceiro?";
				next;
				if (select("30","35","40","50") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "8. Escolha a cidade que não tem nenhum Feudo.";
				next;
				if (select("Prontera","Al De Baran","Alberta","Payon") == 3) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "9. Se um aprendiz quiser se tornar um Gatuno, que cogumelo terá que colher?";
				next;
				switch(select("Cogumelo Borrachento","Cogumelo Vermelho","Cogumelo Venenoso","Cogumelo Laranja")) {
					default: break;
					case 1:
					case 3:
					.@rgqz += 10;
					break;
				}
				mes "[Markie]";
				mes "10. Que carta é inútil para Arruaceiros?";
				next;
				if (select("Sussurro","Salgueiro Ancião","Zerom","Matyr") == 2) {
					.@rgqz += 10;
				}
				mes "[Markie]";
				mes "*Whew.*";
				mes "Finalmente.";
				mes "Nós acabamos.";
				next;
				if (.@rgqz > 80) {
					rogueq = 2;
					setquest (2017);
					mes "Bom. Você passou.";
					mes "Nós não teremos que";
					mes "fazer isso denovo.";
					next;
					mes "[Markie]";
					mes "Mais não se afobe, você têm mais uns testes. O próximo vai ser do Smith.";
					next;
					mes "[Markie]";
					mes "Então...";
					mes "Vai procurar o Smith e termine este teste, beleza?";
					mes "Cuidado, o Smith é um cara muito chato!.";
					close;
				} else {
					rogueq = 1;
					mes "[Markie]";
					mes "Você se ferrou!";
					next;
					mes "[Markie]";
					mes "Você devia ter aprendido mais quando teve a chance.";
					mes "Obrigado por gastar meu tempo atoa.";
					close;
				}
			}
		} else if (rogueq == 2) {
			mes "[Markie]";
			mes "Vá falar com o Smith.";
			mes "Seu teste poderá ser bastante difícil.";
			mes "Ele é um dos caras que garante que as pessoas paguem as suas dívidas a nós.";
			mes "Fica espert"+(Sex == SEX_MALE ? "o":"a")+", ele poderá ser um pouco exigente.";
			next;
			mes "[Markie]";
			mes "Beleza...";
			mes "Este cara pode ser um pé no saco, mais precisamos de gente como ele em nossa guilda. Entretanto, tome cuidado. Boa sorte para você, velho.";
			close;
		} else if (rogueq > 2 && rogueq < 16) {
			mes "[Markie]";
			mes "Ei cara...";
			mes "Faça o seu melhor.";
			next;
			mes "[Markie]";
			mes "Heh heh...";
			mes "Carne fresca.";
			mes "Isto vai ser uma presa fácil para--espere!";
			mes "Er, eu não estava falando de você!";
			mes "Estava pensando em outra carne fresca.";
			close;
		} else if (rogueq == 16 || rogueq == 17) {
			if (SkillPoint) {
				mes "[Markie]";
				mes "Você ainda possui pontos de habilidades sobrando?";
				mes "Utilize todos os que ainda tiver e venha falar comigo novamente.";
				close;
			} else if (rogueq == 16) {
				mes "[Markie]";
				mes "Oh ei, é você!";
				mes "Você fez um bom trabalho.";
				mes "Agora, deixa eu trocar sua";
				mes "sua classe para arruaceir"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Você merece!";
				next;
				mes "[Markie]";
				mes "Parabéns.!";
			} else {
				mes "[Markie]";
				mes "Oh! É você!";
				mes "Você foi realmente capaz de lidar com aquele cara?";
				mes "Passou muitos apertos para coletar todos os itens, eh?";
				next;
				mes "[Markie]";
				mes "Ei Ei.";
				mes "Parabéns!";
			}
			.@jlevel = JobLevel;
			jobchange (Job_Rogue);
			completequest (2026);
			callfunc ("ClearJobQuest2nd",17);
			next;
			mes "[Markie]";
			mes "Agora...";
			mes "É hora de eu te contar uma coisa.";
			next;
			mes "[Markie]";
			mes "Aproveite sua liberdade como arruaceir"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Basta lembrar que você tem que ser livre e responsável, ao mesmo tempo.";
			mes "Então, trate os outros do jeito que você quer ser tratado, beleza?";
			mes "Agente se esbarra por aí.";
			close2;
			if (.@jlevel == 50) { getitem (Gladius_,1); }
			else { getitem (Gladius,1); }
			end;
		}
	} else if (BaseJob == Job_Rogue) {
		mes "[Markie]";
		mes "Eh, certo agora não temos nenhuma tarefa da guilda para você, portanto apenas suga seu caminho.";
		close;
	} else {
		mes "[Arruaceira da Guilda]";
		mes "Ei você...";
		mes "Tire seu traseiro gordo da minha frente!";
		mes "Ou eu vou redefinir a sua cara feia!";
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,376,23,1	script	Smithrato#rogueq	1_M_LIBRARYMASTER,{
	if (rogueq < 2) {
		mes "[Smithrato]";
		mes "Três mil, duzentos e setenta e dois.";
		mes "Três mil, duzentos e setenta e três.";
		mes "Três mil, duzentos e setenta e quatro...";
		next;
		mes "[Smithrato]";
		mes "Uhh...";
		mes "Que dor de cabeça...";
		mes "Isto é muito zeny para contar.";
		next;
		mes "[Smithrato]";
		mes "Uh...?";
		mes "O que você está fazendo aqui?";
		next;
		mes "[Smithrato]";
		mes "...Maldição!";
		mes "Eu perdi a conta!";
		close;
	} else if (rogueq == 2) {
		mes "[Smithrato]";
		mes "Seja bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Guilda dos Arruaceiros.";
		mes "A partir de agora, eu irei verificar a sua qualificação.";
		next;
		mes "[Smithrato]";
		mes "Antes de nós começarmos, quero que você saiba de algo...";
		next;
		mes "[Smithrato]";
		mes "Todos os novos Arruaceiros são obrigados a pagar uma taxa.";
		mes "Então eu espero que você cuide disso primeiro.";
		next;
		mes "[Smithrato]";
		mes "O que você tem que entender é que a Guilda dos Arruaceiros faz um monte de negócios.";
		mes "^666666Algumas vezes ilegais^000000, que necessita de apoio financeiro.";
		next;
		.@item_need = rand(1,15);
		if (.@item_need > 0 && .@item_need < 6) {
			setarray (.@item[0],510,932,957,958);
			setarray (.@count[0], 6, 10, 10, 10);
			.@rgvar = 3;
		}
		else if (.@item_need > 5 && .@item_need < 11) {
			setarray (.@item[0], 511,910,926,964);
			setarray (.@count[0], 10, 10, 10, 10);
			.@rgvar = 4;
		}
		else if (.@item_need > 10 && .@item_need < 15) {
			setarray (.@item[0],508,948,935,940);
			setarray (.@count[0],10, 10, 10, 10);
			.@rgvar = 5;
		} else {
			setarray (.@item[0],915,713,1002,953,507,919,715,913,909,705,716,917,908,945);
			setarray (.@count[0], 4,  4,   4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4);
			.@rgvar = 6;
		}
		mes "[Smithrato]";
		mes "Primeiro, a taxa de inscrição:";
		mes "^FF000010,000 zeny^000000.";
		next;
		mes "[Smithrato]";
		mes "Nós tambem precisamos que você traga...";
		next;
		mes "[Smithrato]";
		for (.@i = 0; .@i < getarraysize(.@item); .@i++) {
			mes "^FF0000"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.";
		}
		switch(.@rgvar) {
			case 3: rogueq = 3; changequest (2017,2018); break;
			case 4: rogueq = 4; changequest (2017,2019); break;
			case 5: rogueq = 5; changequest (2017,2020); break;
			case 6: rogueq = 6; changequest (2017,2021); break;
		}
		next;
		mes "[Smithrato]";
		mes "Nem pense em voltar sem trazer tudo senão eu irei te matar aqui mesmo.";
		close;
	} else if (rogueq > 2 && rogueq < 7) {
		switch(rogueq) {
			case 3:
			setarray (.@item[0],510,932,957,958);
			setarray (.@count[0], 6, 10, 10, 10);
			break;
			case 4:
			setarray (.@item[0], 511,910,926,964);
			setarray (.@count[0], 10, 10, 10, 10);
			break;
			case 5:
			setarray (.@item[0],508,948,935,940);
			setarray (.@count[0],10, 10, 10, 10);
			break;
			case 6:
			setarray (.@item[0],915,713,1002,953,507,919,715,913,909,705,716,917,908,945);
			setarray (.@count[0], 4,  4,   4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4);
			break;
		}
		.@arraysize = getarraysize(.@item);
		for (.@i = 0; .@i < .@arraysize; .@i++) {
			if(countitem (.@item[.@i]) < .@count[.@i]) {
				break;
			}
		}
		if(.@i == .@arraysize && Zeny >= 10000) {
			mes "[Smithrato]";
			mes "Wow, você trouxe cara coisa que eu lhe pedi para trazer.";
			mes "Bom trabalho...";
			mes "Eu lhe saúdo.";
			next;
			mes "^CCCCCC- Dedo Médio -^000000'";
			mes "*Grins*";
			for (.@i = 0; .@i < .@arraysize; .@i++) {
				delitem (.@item[.@i],.@count[.@i]);
			}
			next;
			mes "[Smithrato]";
			mes ".........";
			next;
			mes "[Smithrato]";
			mes "Muito bem...";
			mes "Agora que estou mais calmo, irei lhe informar o seu próximo destino.";
			next;
			switch(rand(4)) {
				case 1:
				mes "[Smithrato]";
				mes "Vá e procure por Hermanthorn Junior.";
				mes "Que está vivendo perto do ^0000FFPonto de inspeção da Ilha Pharos^000000";
				next;
				mes "[Smithrato]";
				mes "Ah... antes que me esqueça.";
				mes "Ponha em mente em ^0000FFnão mencionar nada sobre itens de forja^000000.";
				mes "Isso é muito importante.";
				rogueq = 8;
				if (questprogress(2018)) { changequest (2018,2025); }
				else if (questprogress(2019)) { changequest (2019,2025); }
				else if (questprogress(2020)) { changequest (2020,2025); }
				close;
				case 2:
				mes "[Smithrato]";
				mes "Vá visitar Aragham Junior que vive ao Sul da Fortaleza de Saint Darmain.";
				mes "Essa area é localizada a um campo a leste daqui.";
				next;
				mes "[Smithrato]";
				mes "Ele é um cara legal, você sabe.";
				mes "Ele trabalha duro e é muito bom em coletar contas.";
				next;
				mes "[Smithrato]";
				mes "Ah, você terá que lembrar da senha se você quiser conhecê-lo.";
				mes "Ele não deixa ninguem entrar em sua casa sem a senha.";
				next;
				mes "[Smithrato]";
				mes "A senha é ^0000FFAragham não roubou o material de forja^000000.";
				rogueq = 9;
				if (questprogress(2018)) { changequest (2018,2022); }
				else if (questprogress(2019)) { changequest (2019,2022); }
				else if (questprogress(2020)) { changequest (2020,2022); }
				close;
				case 3:
				mes "[Smithrato]";
				mes "Eu quero que você conheça o Antonio Junior, filho de Antonio, o primeiro.";
				mes "Pela mesma razão, pessoas querem matá-lo por causa de algo que o pai dele fez no passado.";
				next;
				mes "[Smithrato]";
				mes "Ah, você terá que lembrar da senha para conhece-lo.";
				mes "A senha é ^0000FFAntonio não gosta de quebrar o material de forja^000000.";
				rogueq = 10;
				if (questprogress(2018)) { changequest (2018,2023); }
				else if (questprogress(2019)) { changequest (2019,2023); }
				else if (questprogress(2020)) { changequest (2020,2023); }
				close;
				default:
				mes "[Smithrato]";
				mes "Você deve ir procurar Hollgrehenn Junior, um genio da manipulação.";
				next;
				mes "[Smithrato]";
				mes "Ah, você terá que lembrar da senha para conhece-lo.";
				mes "A senha é ^0000FFMeu pai não roubou o material de forja^000000.";
				rogueq = 11;
				if (questprogress(2018)) { changequest (2018,2024); }
				else if (questprogress(2019)) { changequest (2019,2024); }
				else  if (questprogress(2029)) { changequest (2020,2024); }
				close;
			}
		} else {
			mes "[Smithrato]";
			mes "Mas que P$@&*!?";
			mes "Você não trouxe todos os itens necessários?!";
			next;
			mes "[Smithrato]";
			mes "Agora preste atenção...!";
			mes "Traga ^FF000010,000 zeny^000000, e os seguintes itens...";
			next;
			mes "[Smithrato]";
			for (.@i = 0; .@i < .@arraysize; .@i++) {
				mes "^FF0000"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.";
			}
			next;
			mes "[Smithrato]";
			mes "Você entendeu desta vez?!!!";
			close;
		}
	} else if (rogueq == 8) {
		mes "[Smithrato]";
		mes "O quê...?";
		mes "Você esqueceu para onde deve ir?";
		next;
		mes "[Smithrato]";
		mes "Vá e procure por Hermanthorn Junior.";
		mes "Que está vivendo perto do ^0000FFPonto de inspeção da Ilha Pharos^000000.";
		mes "Fica na fronteira entre Morroc e Comodo.";
		next;
		mes "[Smithrato]";
		mes "Ah... antes que me esqueça, ponha em mente em ^0000FFnão mencionar nada sobre itens de forja^000000.";
		mes "Isso é muito importante.";
		close;
	} else if (rogueq == 9) {
		mes "[Smithrato]";
		mes "O quê...?";
		mes "Você esqueceu para onde deve ir?";
		next;
		mes "[Smithrato]";
		mes "Siga um campo a Leste e entre no edifício que fica ao Sul da Fortaleza de Saint Darmain.";
		mes "Para conhecer Aragham Junior.";
		next;
		mes "[Smithrato]";
		mes "A senha é ^0000FFAragham não roubou o material de forja^000000.";
		close;
	} else if (rogueq == 10) {
		mes "[Smithrato]";
		mes "O quê...?";
		mes "Você já se esqueceu para onde deve ir?";
		next;
		mes "[Smithrato]";
		mes "Vá para o edifício que está na praia de Kokomo.";
		mes "Que está a caminho para Comodo por aqui, para conhecer Antonio Junior.";
		next;
		mes "[Smithrato]";
		mes "A senha é ^0000FF'Antonio não gosta de quebrar o material de forja'^000000.";
		close;
	} else if (rogueq == 11) {
		mes "[Smithrato]";
		mes "O que...?";
		mes "Você se esqueceu para onde deve ir?";
		next;
		mes "[Smithrato]";
		mes "Vá para o campo ao Sul da Fortaleza, que está a caminho de Morroc por aqui.";
		mes "Para conhecer Hollgrehenn Junior.";
		next;
		mes "[Smithrato]";
		mes "A senha é ^0000FFMeu pai não roubou o material de forja^000000.";
		close;
	} else {
		mes "[Smithrato]";
		mes "Hmmm...?";
		mes "Você não tem algum lugar para ir agora?";
		close;
	}
}

// ------------------------------------------------------------------
cmd_fild09,106,195,0	script	Warp#1rogueq	WARPNPC,1,1,{
	OnTouch:
	mes "[???]";
	mes "Quem está aí?!";
	mes "Quem ousa";
	mes "entrar em meu território?";
	next;
	switch(select("Meu pai","Aragham","Aragon","Legolas")) {
		case 1:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Meu pai";
		break;
		case 2:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Aragham";
		.@rogue_t += 10;
		break;
		case 3:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Aragon";
		break;
		case 4:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Legolas";
		break;
	}
	switch(select("não faz","não gosta","não","sempre")) {
		case 1: mes "não faz"; break;
		case 2: mes "não gosta"; break;
		case 3:
		mes "não";
		.@rogue_t += 10;
		break;
		case 4: mes "sempre"; break;
	}
	switch(select("recebe","roubou","se escondeu","examinou","de quebrar")) {
		case 1: mes "recebe"; break;
		case 2:
		mes "roubou";
		.@rogue_t += 10;
		break;
		case 3: mes "se escondeu"; break;
		case 4: mes "examinou"; break;
		case 5: mes "de quebrar"; break;
	}
	switch(select("o material de forja","itens roubados","material refinado","equipamentos")) {
		case 1:
		mes "o material de forja.";
		.@rogue_t += 10;
		break;
		case 2: mes "itens roubados."; break;
		case 3: mes "material refinado."; break;
		case 4: mes "equipamentos."; break;
	}
	next;
	if (.@rogue_t > 30) {
		mes "^3355FF*Creeeeak*";
		mes "A porta abre lentamente.^000000";
		close2;
		warp ("in_rogue",246,25);
		end;
	} else {
		mes "[???]";
		mes "O que...?";
		mes "Saia daqui!";
		close;
	}
}

// ------------------------------------------------------------------
cmd_fild09,335,143,0	script	Warp#2rogueq	WARPNPC,1,1,{
	OnTouch:
	mes "[???]";
	mes "Quem está aí?!";
	mes "Quem ousa";
	mes "entrar em meu território?";
	next;
	switch(select("Meu pai","Aragham","Aragon","Legolas")) {
		case 1:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Meu pai";
		.@rogue_t += 10;
		break;
		case 2:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Aragham";
		break;
		case 3:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Aragon";
		break;
		case 4:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Legolas";
		break;
	}
	switch(select("não:nem:nunca:jamais")) {
		case 1: mes "não faz"; break;
		case 2: mes "não gosta"; break;
		case 3:
		mes "não";
		.@rogue_t += 10;
		break;
		case 4: mes "sempre"; break;
	}
	switch(select("recebe","de quebrar","se escondeu","examinou","rubou")) {
		case 1: mes "recebe"; break;
		case 2: mes "de quebrar"; break;
		case 3: mes "se escondeu"; break;
		case 4: mes "examinou"; break;
		case 5:
		mes "roubou";
		.@rogue_t += 10;
		break;
	}
	switch(select("o material de forja.:itens roubados.:material refinado:equipamentos.")) {
		case 1:
		mes "o material de forja.";
		.@rogue_t += 10;
		break;
		case 2: mes "itens roubados."; break;
		case 3: mes "material refinado."; break;
		case 4: mes "equipamentos."; break;
	}
	next;
	if (.@rogue_t > 30) {
		mes "^3355FF*Creeeeak*";
		mes "A porta abre lentamente.^000000";
		close2;
		warp ("in_rogue",169,34);
		end;
	} else {
		mes "[???]";
		mes "O que...?";
		mes "Saia daqui!";
		close;
	}
}

// ------------------------------------------------------------------
cmd_fild04,304,180,0	script	Warp#3rogueq	WARPNPC,1,1,{
	OnTouch:
	mes "[???]";
	mes "Quem está aí?!";
	mes "Quem ousa";
	mes "entrar em meu território?";
	next;
	switch(select("Anntonio","Aragham","Antonio","Hollgrehenn")) {
		case 1:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Anntonio";
		break;
		case 2:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Aragham";
		break;
		case 3:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Antonio";
		.@rogue_t += 10;
		break;
		case 4:
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Hollgrehenn";
		break;
	}
	switch(select("gosta","não gosta","prefere","não prefere")) {
		case 1: mes "gosta"; break;
		case 2:
		mes "não gosta";
		.@rogue_t += 10;
		break;
		case 3: mes "prefere"; break;
		case 4: mes "não prefere"; break;
	}
	switch(select("de danificar","de quebrar","de consertar","de forjar")) {
		case 1: mes "de danificar"; break;
		case 2:
		mes "de quebrar";
		.@rogue_t += 10;
		break;
		case 3: mes "de consertar"; break;
		case 4: mes "de forjar"; break;
	}
	switch(select("o item de forja","os itens refinados","o material de forja","os itens aprimorados","os itens reforçados","os itens forjados.")) {
		case 1: mes "o item de forja."; break;
		case 2: mes "os itens refinados."; break;
		case 3:
		mes "o material de forja.";
		.@rogue_t += 10;
		break;
		case 4: mes "os itens aprimorados."; break;
		case 5: mes "os itens reforçados."; break;
		case 6: mes "os itens forjados."; break;
	}
	next;
	if (.@rogue_t > 30) {
		mes "^3355FF*Creeeeak*";
		mes "A porta abre lentamente.^000000";
		close2;
		warp ("in_rogue",164,106);
		end;
	} else {
		mes "[???]";
		mes ".....Vai embora!";
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,272,135,1	script	Hermanthorn Jr#rg	4_M_03,{
	if (rogueq == 8) {
		mes "[Hermanthorn Jr.]";
		mes "Eu vejo...";
		mes "Você deve vindo da Guilda dos Arruaceiros.";
		mes "Voce deve ser um dos que Sr.Smith não ficou muito feliz com...";
		next;
		mes "[Hermanthorn Jr.]";
		mes "Ele jogou uma ajuste e você trouxe todos os itens que ele pediu, não é mesmo?";
		mes "Bem, eu posso ver que você continua muito ingênuo.";
		next;
		mes "[Hermanthorn Jr.]";
		mes "Eu suponho que ele lhe fez de idiota para buscar alguns itens.";
		mes "E depois ele passou você para mim.";
		mes "Triste, realmente.";
		next;
		mes "[Hermanthorn Jr.]";
		mes "Bem, depois de você ser torturado por ele, tentarei especialmente ser generoso com você.";
		mes "Meu teste para você vai ser simples, muito simples.";
		next;
		mes "[Hermanthorn Jr.]";
		mes "Tudo o que você tme que fazer e passar por um túnel subterrâneo.";
		mes "Andar todo o caminho de volta para a Guilda dos Arruaceiros.";
		next;
		mes "[Hermanthorn Jr.]";
		mes "Há uma coisa que eu deveria lhe dizer, no entanto.";
		mes "Você deverá ser muito cuidadoso lá dentro, certo?";
		next;
		mes "[Hermanthorn Jr.]";
		mes "Um bando de idiotas tem quebrado alguns galhos secos e castando Abracadabra por todo o lugar...";
		next;
		mes "[Hermanthorn Jr.]";
		mes "Bem...";
		mes "Apenas tente voltar para a Guilda dos Arruaceiros são e salvo.";
		mes "É tudo o que precisa fazer!";
		rogueq = 12;
		changequest (2025,2026);
		close;
	} else if (rogueq == 12) {
		mes "[Hermanthorn Jr.]";
		mes "Oh certo.";
		mes "Isso é realmente importante.";
		mes "Você precisa de uma senha para entrar no túnel.";
		mes "Para destrancar a porta, a combinação de quatro números são ^0000FF3019^000000.";
		close;
	} else {
		mes "[HermanthornJr.]";
		mes "Huh...?";
		mes "O que diabos";
		mes "você está fazendo aqui.";
		mes "Desapareça, por que você não?";
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,270,130,0	script	he_to_rogue#rogueq	WARPNPC,1,1,{
	OnTouch:
	mes "^3355FFA porta está trancada.";
	mes "Você deve inserir a combinação de quatro números para abri-lá.^000000";
	next;
	input (.@input);
	if (.@input < 1 || .@input > 10000) {
		mes "^3355FFPor favor digite a combinação de quatro números.^000000";
		close;
	} else if (.@input == 3019) {
		if (rogueq == 12) {
			mes "^3355FFA porta está aberta.^000000";
			close2;
			warp (strnpcinfo(NPC_MAP),10,21);
			rogueq = 12;
			end;
		}
		else {
			mes "[Hermanthorn Jr.]";
			mes "Bem...";
			mes "Eu não lhe contei que eu mudei a senha?";
			mes "*Wink Wink*";
			close;
		}
	} else {
		mes "^3355FFA porta ainda está trancada.^000000";
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,200,389,0	script	gen_ro#1rogueq	FAKE_NPC,3,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),200,389,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),201,389,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("gen_ro#2rogueq::OnDisable");
		donpcevent ("gen_ro#3rogueq::OnDisable");
		donpcevent ("gen_ro#4rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,100,389,0	script	gen_ro#2rogueq	FAKE_NPC,3,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),100,389,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("gen_ro#1rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,150,389,0	script	gen_ro#3rogueq	FAKE_NPC,3,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),145,389,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),143,389,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("gen_ro#2rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,250,389,0	script	gen_ro#4rogueq	FAKE_NPC,3,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),200,389,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("gen_ro#3rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,9,389,0	script	oneway_to_gu#rogueq	WARPNPC,1,1,{
	OnTouch:
	donpcevent ("gen_ro#4rogueq::OnDisable");
	rogueq = 17;
	warp (strnpcinfo(NPC_MAP),367,10);
	end;
}

// ------------------------------------------------------------------
in_rogue,244,39,1	script	Aragham Junior#rogueq	4W_M_03,{
	if (rogueq == 9) {
		mes "[Aragham Jr.]";
		mes "Oh, você deve ter vindo da Guilda dos Arruaceiros...";
		next;
		mes "[Aragham Jr.]";
		mes "Meu nome é Aragham Junior, o arruaceiro do Deserto.";
		mes "Você está pront"+(Sex == SEX_MALE ? "o":"a")+" para aprender como se tornar um Arruaceiro?";
		next;
		mes "[Aragham Jr.]";
		mes "Veja, como um Arruaceiro, nosso lema é:";
		mes "^0000FFEvite o forte! Seja malicioso com o fraco!^000000.";
		mes "Essa regra é especialmente verdadeira para os monstros.";
		next;
		mes "[Aragham Jr.]";
		mes "Evite o forte!";
		mes "Seja malicioso com o fraco!";
		mes "É uma regra simples...";
		next;
		mes "[Aragham Jr.]";
		mes "Agora, lembre-se disso quando você passar pelo ^0000FFtúnel subterrâneo^000000.";
		mes "Tente andar todo o caminho para a Guilda dos Arruaceiros.";
		next;
		mes "[Aragham Jr.]";
		mes "Haverá alguns monstros, mas não se preocupe.";
		mes "Eu sei que você é forte.";
		mes "Tudo bem, você está pronto para ir ou o que?";
		next;
		if (select("Sim, vamos lá.:Nah.") == 1) {
			mes "[Aragham Jr.]";
			mes "Tudo bem...";
			mes "Boa sorte, então.";
			close2;
			warp (strnpcinfo(NPC_MAP),15,105);
			rogueq = 13;
			changequest (2022,2026);
			end;
		} else {
			mes "[Aragham Jr.]";
			mes "Tudo bem, tudo bem.";
			mes "Não tenha pressa, então volte aqui quando você estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
			close;
		}
	} else if (rogueq == 13) {
		mes "[Aragham Jr.]";
		mes "Oh, você voltou.";
		mes "Acho que você está bem desta vez.";
		mes "Outro lema dos Arruaceiros é:";
		mes "^0000FFFalha ensina o sucesso^000000.";
		mes "Bem, então novamente...";
		next;
		if (select("Tentar novamente","Cancelar") == 1) {
			mes "[Aragham Jr.]";
			mes "Boa sorte.";
			close2;
			warp (strnpcinfo(NPC_MAP),15,105);
			end;
		} else {
			mes "[Aragham Jr.]";
			mes "Tudo bem, tudo bem.";
			mes "Não tenha presa";
			mes "e volte aqui";
			mes "quando você estiver pronto.";
			close;
		}
	} else if (BaseJob != Job_Rogue) {
		mes "[Aragham Jr.]";
		mes "Huh...?";
		mes "Quem é você?!";
		mes "Você não é da Guilda dos Arruaceiros!!";
		next;
		mes "[Aragham Jr.]";
		mes "Se você veio para me matar, não é mesmo?";
		mes "N-não!";
		mes "Não posso morrer ainda!";
		close;
	} else {
		mes "[Aragham Jr.]";
		mes "Hey...";
		mes "O que traz você de volta aqui?";
		mes "Porque você não descansa um pouco antes de você ir?";
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,160,34,1	script	Hollgrehenn junior#rogueq	4_M_03,{
	if (rogueq == 11) {
		mes "[Hollgrehenn Jr.]";
		mes "Hmm...";
		mes "Você veio da Guilda dos Arruaceiros, certo?";
		next;
		mes "[Hollgrehenn Jr.]";
		mes "Eu sou Hollgrehenn Junior.";
		mes "Eu cuido de muitos dos nossos negócios.";
		mes "Então, está pronto para o meu teste?";
		next;
		mes "[Hollgrehenn Jr.]";
		mes "Nós, arruaceiros, compartilhamos este lema:";
		mes "^0000FFEvite os fortes!";
		mes "Seja mau com os fracos!^000000";
		mes "Esta regra se aplica a qualquer ameaça, especialmente monstros.";
		next;
		mes "[Hollgrehenn Jr.]";
		mes "É fácil de lembrar.";
		mes "Apenas não esqueça de por isso em prática, entendeu?";
		next;
		mes "[Hollgrehenn Jr.]";
		mes "Para o meu teste, você irá ao ^0000FFTúnel Subterrâneo^000000.";
		mes "Siga o caminho de volta ao Clã dos Arruaceiros.";
		next;
		mes "[Hollgrehenn Jr.]";
		mes "Haverá alguns monstros lá, mas será parte do seu treinamento.";
		mes "Agora, está pront"+(Sex == SEX_MALE ? "o":"a")+" para ir ou não?";
		next;
		if (select("Sim, estou","Não.") == 1) {
			mes "[Hollgrehenn Jr.]";
			mes "Boa sorte.";
			close2;
			warp (strnpcinfo(NPC_MAP),15,105);
			rogueq = 15;
			changequest (2024,2026);
			end;
		} else {
			mes "[Hollgrehenn Jr.]";
			mes "Aproveite seu tempo.";
			mes "Volte aqui quando estiver pronto.";
			close;
		}
	}
	else if (rogueq == 15) {
		mes "[Hollgrehenn Jr.]";
		mes "Hmm.";
		mes "Você falhou.";
		mes "Quer tentar novamente?";
		next;
		if (select("Sim quero","Tentarei depois") == 1) {
			mes "[Hollgrehenn Jr.]";
			mes "Boa sorte.";
			close2;
			warp (strnpcinfo(NPC_MAP),15,105);
			end;
		} else {
			mes "[Hollgrehenn Jr.]";
			mes "Aproveite seu tempo.";
			mes "Volte aqui quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
			close;
		}
	} else if (BaseJob != Job_Rogue) {
		mes "[Hollgrehenn Jr.]";
		mes "Hmm...?";
		mes "Você não é da Guilda dos Arruaceiros...";
		next;
		mes "[Hollgrehenn Jr.]";
		mes "Você deveria sair daqui agora se souber o que é bom para você...";
		next;
		mes "[Hollgrehenn Jr.]";
		mes "Agora...";
		mes "Aproveite antes que eu mude de idéia e decida matar você.";
		close;
	} else {
		mes "[Hollgrehenn Jr.]";
		mes "Ei...";
		mes "Veio pessear?";
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,177,109,1	script	Antonio junior#rg	4_M_ORIENT01,{
	if (rogueq == 10) {
		mes "[Antonio Jr.]";
		mes "Você é da Guilda dos Arruaceiros?";
		mes "Se quiser aprender sobre como ser um Arruaceiro.";
		mes "Então cale-se e fique quiet"+(Sex == SEX_MALE ? "o":"a")+".";
		next;
		mes "[Antonio Jr.]";
		mes "^0000FFEvite os fortes!";
		mes "Seja mau com os fracos!^000000";
		mes "Esse é nosso lema para combater monstros.";
		next;
		mes "[Antonio Jr.]";
		mes "Não demonstre piedade quando lugar com monstros mais fracos.";
		mes "Tente manter distância dos monstros fortes.";
		next;
		mes "[Antonio Jr.]";
		mes "Agora, quero que você caminhe até a guilda dos Arruaceiros através de um ^0000FFTúnel Subterrâneo^000000.";
		next;
		mes "[Antonio Jr.]";
		mes "Há monstros lá, mas se você evitar os fortes e for mau com os fracos, você se dará bem.";
		next;
		if (select("Vamos lá!","E-espere!") == 1) {
			mes "[Antonio Jr.]";
			mes "Espero que você não falhe neste teste.";
			mes "Você só poderá se tornar um Arruaceiro se passar...";
			close2;
			warp (strnpcinfo(NPC_MAP),15,105);
			rogueq = 14;
			changequest (2023,2026);
			end;
		} else {
			mes "[Antonio Jr.]";
			mes "Não tenho tempo para idiotices com você.";
			mes "Apresse-se, então comece o teste.";
			close;
		}
	} else if (rogueq == 14) {
		mes "[Antonio Jr.]";
		mes "Você falhou...?";
		mes "Isso é a vida.";
		mes "Vai tentar novamente ou o que?";
		next;
		if (select("Novamente","Cancelar.") == 1) {
			mes "[Antonio Jr.]";
			mes "Lembre-se, estou lhe fazendo um favor aqui...";
			mes "Agora, não volte até que você seja um Arruaceiro.";
			close2;
			warp (strnpcinfo(NPC_MAP),15,105);
			end;
		}
		mes "[Antonio Jr.]";
		mes "Não tenho tempo para idiotices com você.";
		mes "Apresse-se, então comece o teste.";
		close;
	} else if (BaseJob != Job_Rogue) {
		mes "Huh...?";
		mes "Quem é você?!";
		mes "Você não é da Guilda dos Arruaceiros!!";
		next;
		mes "[Antonio Jr.]";
		mes "Você veio para me matar?!";
		mes "Não deixarei!!";
		mes "Vamos, dê-me seu melhor tiro!";
		mes "Você não poderá lutar se eu arrancar seus olhos!";
		close;
	} else {
		mes "[Antonio Jr.]";
		mes "Ei, como está indo?";
		mes "Acalme-se e relaxe antes de sair.";
		close;
	}
}

// ------------------------------------------------------------------
in_rogue,370,320,0	script	quest_out#rogueq	WARPNPC,1,1,{
	OnTouch:
	rogueq = 16;
	warp (strnpcinfo(NPC_MAP),378,113);
	end;
}

// ------------------------------------------------------------------
in_rogue,15,184,0	script	mob_rogue#1rogueq	FAKE_NPC,8,1,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),14,187,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),15,188,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),16,189,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),17,187,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),18,188,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),19,189,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,15,273,0	script	mob_rogue#2rogueq	FAKE_NPC,8,1,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),15,276,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),13,276,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),11,276,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,15,333,0	script	mob_rogue#3rogueq	FAKE_NPC,8,1,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),15,336,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),15,336,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),15,336,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),15,336,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("mob_rogue#4rogueq::OnDisable");
		donpcevent ("mob_rogue#7rogueq::OnDisable");
		donpcevent ("mob_rogue#8rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,39,341,0	script	mob_rogue#4rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),39,341,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),40,341,"Carniçal",1036,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),41,341,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),42,341,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,102,334,0	script	mob_rogue#5rogueq	FAKE_NPC,1,4,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),92,334,"Khalitzburg",1132,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("mob_rogue#1rogueq::OnDisable");
		donpcevent ("mob_rogue#2rogueq::OnDisable");
		donpcevent ("mob_rogue#3rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,58,309,0	script	mob_rogue#6rogueq	FAKE_NPC,4,1,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),57,301,"Khalitzburg",1132,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("mob_rogue#1rogueq::OnDisable");
		donpcevent ("mob_rogue#2rogueq::OnDisable");
		donpcevent ("mob_rogue#3rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,101,264,0	script	mob_rogue#7rogueq	FAKE_NPC,5,5,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),101,264,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),102,264,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,140,312,0	script	mob_rogue#8rogueq	FAKE_NPC,5,5,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),140,312,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,139,246,0	script	mob_rogue#9rogueq	FAKE_NPC,4,4,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),139,246,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),149,246,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),140,246,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),141,246,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),150,246,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),151,246,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,197,249,0	script	mob_rogue#10rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),176,212,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),176,213,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),177,211,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),177,212,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),177,213,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),177,214,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),178,211,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),178,212,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),178,213,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),179,211,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),179,212,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),179,213,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),179,214,"Zumbi",1015,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),176,211,"Carniçal",1036,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),177,214,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),178,214,"Esqueleto Arqueiro",1016,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("mob_rogue#4rogueq::OnDisable");
		donpcevent ("mob_rogue#5rogueq::OnDisable");
		donpcevent ("mob_rogue#6rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,96,205,0	script	mob_rogue#11rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		donpcevent ("mob_rogue#7rogueq::OnDisable");
		donpcevent ("mob_rogue#8rogueq::OnDisable");
		donpcevent ("mob_rogue#9rogueq::OnDisable");
		donpcevent ("mob_rogue#10rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
}

// ------------------------------------------------------------------
in_rogue,86,187,0	script	mob_rogue#12rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),90,187,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),90,183,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),90,190,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,223,187,0	script	mob_rogue#13rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),236,186,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),238,186,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),234,186,"Cavaleiro do Abismo",1219,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		donpcevent ("mob_rogue#12rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,233,207,0	script	mob_rogue#14rogueq	FAKE_NPC,8,3,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		donpcevent ("mob_rogue#13rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;
}

// ------------------------------------------------------------------
in_rogue,244,319,0	script	mob_rogue#15rogueq	FAKE_NPC,1,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		monster (strnpcinfo(NPC_MAP),240,319,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),259,319,"Esqueleto Arqueiro",1016,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),259,320,"Carniçal",1036,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),240,319,"Múmia",1041,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),259,319,"Esqueleto Arqueiro",1016,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster (strnpcinfo(NPC_MAP),259,320,"Carniçal",1036,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	}
	else { warp ("mag_dun02",181,176); }
	end;

	OnDisable:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnMyMobDead:
	end;
}

// ------------------------------------------------------------------
in_rogue,334,319,0	script	mob_rogue#16rogueq	FAKE_NPC,8,8,{
	OnTouch:
	if (BaseJob == Job_Thief) {
		donpcevent ("mob_rogue#15rogueq::OnDisable");
	}
	else { warp ("mag_dun02",181,176); }
	end;
}

