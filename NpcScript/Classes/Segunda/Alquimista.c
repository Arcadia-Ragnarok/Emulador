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
| - Info: Quest de Mudan�a de Classe para Alquimista.               |
| - Nota:                                                           |
| * Necess�rio quest do Antigeno e Mistura.                         |
| * Necess�rio quest dos Irm�os Alquimista de Juno.                 |
\*-----------------------------------------------------------------*/

alde_alche,27,185,5	script	Alquim�sta#alchemistq	4_F_ALCHE,{
	mes("[Parmy Gianino]");
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Guilda Alquim�sta.\n"
				"A Guilda Alquimista\n"
				"Estou meio ocupado, como sempre.");
			next;
			mes("[Parmy Gianino]\n"
				"Todo mundo aqui est� ocupado com o sua pr�pria pesquisa.\n"
				"Mas recentemente, alguns avan�os foram feitos no campo da biotecnologia.");
			next;
			mes("[Parmy Gianino]\n"
				"Todos esperam que os estudos biotecnol�gicos produzam resultados positivos...\n"
				"Falando nisso, eu me pergunto como os alquimistas que trabalham na vida artificial est�o fazendo...");
			close;
		}
		mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Guilda Alquim�sta.\n"
			"Estamos recrutando pessoas talentosas, com id�ias novas.");
		next;
		mes("[Parmy Gianino]\n"
			"Se voc� conhece alguns mercadores.\n"
			"Por favor, fale a ele sobre nossa associa��o.\n"
			"Esses tipos de pessoas tendem a ter um talento para a Alquimia e experimenta��o");
		close;
	}
	if (!alchemistq) {
		mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Guilda Alquim�sta.\n"
			"Como posso ajud�-lo?");
		next;
		switch (select("Fale-me sobre Alquimistas", "Quero ser um Alquimista","Nada")) {
			case 1:
			mes("[Parmy Gianino]\n"
				"Os alquimistas estudam e criam novas subst�ncias e itens a partir de materiais existentes.\n"
				"Nosso conhecimento nos permite mudar as propriedades dos produtos qu�micos no n�vel at�mico.");
			next;
			mes("[Parmy Gianino]\n"
				"A maioria das pessoas pensa nosso objetivo final � criar ouro.\n"
				"Mas isso n�o � toda a verdade, queremos criar coisas como rem�dios e novos materiais.");
			next;
			mes("[Parmy Gianino]\n"
				"Alguns de n�s pesquisa a cria��o da vida.\n"
				"Embora muitos de n�s considerem que o territ�rio � trabalho de Deus.\n"
				"Isso � t�o complexo, a maioria dos alquimistas lidam com projetos, menos complicados.");
			next;
			mes("[Parmy Gianino]\n"
				"Se voc� est� interessado em se tornar um alquimista.\n"
				"Recomendo que voc� obtenha muita experi�ncia como mercador.\n"
				"Ser um mercador � uma grande oportunidade para aprender sobre materiais e como lidar com eles.");
			next;
			mes("[Parmy Gianino]\n"
				"Voc� se tornar ou n�o um Alquimista � a sua decis�o.\n"
				"O caminho para se tornar um Alquimista � muito desafiador.\n"
				"E voc� precisa se concentrar em experimenta��o e pesquisa, em vez de com�rcio.");
			close;
			case 2:
			mes("[Parmy Gianino]\n"
				"Verdade?\n"
				"Prazer em conhec�-l"+(Sex == SEX_MALE ? "o":"a")+".\n"
				"Meu nome � Parmy Gianino.");
			next;
			mes("[Parmy Gianino]\n"
				"Mas n�s n�o aceitamos todos.\n"
				"Voc� deve ter muita tenacidade e devo��o sincera na explora��o aos v�rios campos da ci�ncia.");
			next;
			mes("[Parmy Gianino]\n"
				"S�o v�rios requisitos para se juntar a Guilda dos Alquimistas.\n"
				"Mas vamos discutir isso depois de sua inscri��o.");
			next;
			mes("[Parmy Gianino]\n"
				"Bem, ent�o,\n"
				"Voc� gosta de assinar o fomul�rio de registro agora?");
			next;
			if (select("Gostaria de assinar agora", "Farei isso mais tarde") == 1) {
				if (JobLevel < 40) {
					mes("[Parmy Gianino]\n"
						"Hmmm ...\n"
						"Um momento.\n"
						"Lamento dizer isso, mas voc� n�o tem muita experi�ncia como mercador para se juntar a n�s.");
					next;
					mes("[Parmy Gianino]\n"
						"Voc� deve ser pelo menos ^551A8BN�vel 40 de classe^000000 para se tornar iniciar seus testes.\n"
						"Volte mais tarde quando voc� alcan�ar esse n�vel.\n"
						"Est� bem?");
					close;
				}
				mes("[Parmy Gianino]\n"
					"Agora, voc� deve pagar a taxa de inscri��o que custa 50.000 Zeny.\n"
					"E trazer alguns itens antes que voc� possa come�ar seu treinamento formal.");
				next;
				mes("[Parmy Gianino]\n"
					"Mas se voc� trouxer um ^551A8Grim�rio Antigo^000000 e um ^551A8BMartelo de Ferreiro^000000.\n"
					"Ser� aceito como um substitutos dos itens.");
				next;
				mes("[Parmy Gianino]\n"
					"Agora...\n"
					"Por favor assine aqui.");
				next;
				select (strcharinfo(CHAR_NAME));
				mes("[Parmy Gianino]\n"
					"Bom, agora, se voc� tiver O Zeny para sua taxa de inscri��o.\n"
					"Vou dizer-lhe quais os itens que voc� precisar� trazer.\n"
					"Agora, preste aten��o.");
				next;
				if (Zeny < 50000) {
					mes("[Parmy Gianino]]\n"
						"Uh oh. Voc� n�o\n"
						"Parece ter Zeny suficiente.\n"
						"Volte quando voc� tem 50.000 Zeny, caso contr�rio, n�o podemos posseguir sua inscri��o.");
					close;
				}
				Zeny -= 50000;
				mes("[Parmy Gianino]\n"
					"Vamos ver... "+strcharinfo(CHAR_NAME)+"\n"
					"Precisa trazer ...");
				switch (rand(1,3)) {
					case 1:
					alchemistq = 1;
					setquest(2028);
					mes("^551A8B7 Po��o da F�ria Selvagem^000000.");
					break;
					case 2:
					alchemistq = 2;
					setquest(2029);
					mes("^551A8B100 Mini-Fornalha^000000.");
					break;
					case 3:
					alchemistq = 3;
					setquest(2030);
					mes("^551A8B7,500 Flecha de Fogo^000000.");
				}
				next;
				mes("[Parmy Gianino]\n"
					"Uma vez que voc� se reuniu esses itens, volte e seu teste de Alquimista vai come�ar.\n"
					"Vejo voc� em breve.");
				close;
			}
			mes("[Parmy Gianino]\n"
				"Comerciantes talentosos s�o sempre bem-vindos aqui.\n"
				"Por favor, volte logo.");
			close;
			case 3:
			mes("[Parmy Gianino]\n"
				"Umm ...\n"
				"Se voc� n�o precisar de qualquer coisa porque veio me atrapalhar?");
			close;
		}
	} else if (alchemistq >= 1 && alchemistq <= 3) {
		if (countitem(Old_Magic_Book) > 0 && countitem(Hammer_Of_Blacksmith) > 0) {
			mes("Bem, voc� trouxe um Grim�rio Antigo e um Martelo de Ferreiro!\n"
				"Usaremos esses itens da melhor forma.");
			next;
			delitem(Old_Magic_Book,1);
			delitem(Hammer_Of_Blacksmith,1);
			mes("[Parmy Gianino]\n"
				"Certo, agora voc� precisa aprender O b�sico para ser um Alquimista.\n"
				"Aprender os procedimentos para misturar produtos qu�micos e medicamentos.");
			alchemistq = 4;
			if (questprogress(2028)) { changequest(2028,2031); }
			else if (questprogress(2029)) { changequest(2029,2031); }
			else if (questprogress(2030)) { changequest(2030,2031); }
			next;
			mes("[Parmy Gianino]\n"
				"Mas antes de tudo isso, voc� precisa falar com Raspuchin.\n"
				"Eu n�o estou realmente certo do que voc� vai falar com ele...");
			next;
			mes("[Parmy Gianino]\n"
				"Mas voc� ainda � obrigado a falar com Raspuchin.\n"
				"Uma vez que ele � respons�vel por uma parte no processo de sele��o Alquimista.");
			close;
		}
		switch (alchemistq) {
			case 1: setarray(.@items[0],657,7); break;
			case 2: setarray(.@items[0],612,100); break;
			case 3: setarray(.@items[0],1752,7500); break;
		}
		if (countitem(.@items[0]) >= .@items[1]) {
			mes("Parece que est� tudo aqui.\n"
				"A Guilda usar� esses itens para bem.");
			next;
			delitem(.@items[0],.@items[1]);
			mes("[Parmy Gianino]\n" 
				"Certo, agora voc� precisa aprender O b�sico para ser um Alquimista.\n"
				"Aprender os procedimentos para misturar produtos qu�micos e medicamentos.");
			alchemistq = 4;
			if (questprogress(2028)) { changequest(2028,2031); }
			else if (questprogress(2029)) { changequest(2029,2031); }
			else if (questprogress(2030)) { changequest(2030,2031); }
			next;
			mes("[Parmy Gianino]\n"
				"Mas voc� ainda � obrigado a falar com Raspuchin.\n"
				"Uma vez que ele � respons�vel por uma parte no processo de sele��o Alquimista.");
			close;
		}
		mes("Voc� n�o est� pronto?\n"
			"Como eu disse antes voc� deve trazer.\n"
			"^551A8B"+.@items[1]+" "+getitemname(.@items[0])+"s^000000.");
		next;
		mes("[Parmy Gianino]\n"
			"Volte quando voc� tiver todos itens necess�rios.");
		close;
	} else if (alchemistq == 4) {
		mes("V� e fale com o Sr. Raspuchin.\n"
			"Ele est� envolvido no processo de sele��o de alquimistas.");
		next;
		mes("[Parmy Gianino]\n"
			"N�o � nada demais\n"
			"Eu acho que ele s� vai entrevist�-lo, e perguntar-lhe algumas coisas simples.");
		close;
	} else {
		mes("Ah, me desculpe, mas estou ocupado agora.");
		next;
		mes("[Parmy Gianino]\n"
			"Por que voc� n�o pergunta outras pessoas se n�o estiver tendo serteza a quem visitar.\n"
			"Boa sorte.");
		close;
	}
}

// ------------------------------------------------------------------
alde_alche,175,107,3	script	Alquimista Fastidioso#alchemistq	4_M_ALCHE_B,{
	mes("[Raspuchin Gregory]");
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes("Heeheehee\n"
				"Keheheh!\n"
				"Eh, o que voc� quer?!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Voc� n�o est� aqui para roubar meus resultados experimentais ou plagiar meu trabalho, n�o �?\n"
				"Como se atreve a considerar roubo intelectual!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Voc� n�o est�, est�?\n"
				"Bem, como um colega,\n"
				"Deixe-me apenas avis�-lo que tais truques n�o s�o tolerados aqui na Guilda dos Alquim�stas!");
			close;
		} else {
			mes("O que � isso?!\n"
				"Voc� est� curioso com o que estou fazendo?");
			next;
			mes("[Raspuchin Gregory]\n"
				"Heehee\n"
				"Keheheh!\n"
				"Ora, estou ocupado.\n"
				"Pesquisando � claro!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Uma vez que essa po��o estiver completa...\n"
				"Voc� pode us�-lo para tomar controle sobre uma na��o inteira!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Hee hee hee!\n"
				"Algo como isso � perigoso, deve ser mantido em segredo!\n"
				"Compreende?");
			close;
		}
	}
	if (!alchemistq) {
		mes("Heeheehee\n"
			"Keheheh!\n"
			"O que voc� faz quer, garot"+(Sex == SEX_MALE ? "o":"a")+"?");
		next;
		mes("[Raspuchin Gregory]\n"
			"Um mercador deve ir e vender com sua loja em outro lugar.\n"
			"Por que voc� est� vagando em um lugar como este?");
		close;
	} else if (alchemistq >= 1 && alchemistq <= 3) {
		mes("Heeheehee\n"
			"Keheheh!\n"
			"O que voc� quer, garot"+(Sex == SEX_MALE ? "o":"a")+"?");
		next;
		mes("[Raspuchin Gregory]\n"
			"O que...?\n"
			"Aprender Alquimia?!\n"
			"Nem sequer fale tais absurdos!");
		next;
		mes("[Raspuchin Gregory]\n"
			"Mesmo se voc� estudasse por mil anos ou at� mais, seria in�til para voc�!\n"
			"Esque�a isso e apenas se preocupe com sua loja!");
		close;
	} else if ((alchemistq == 4) || (alchemistq == 5)) {
		if (alchemistq == 4) {
			mes("Heeheehee\n"
				"Keheheh!\n"
				"O que voc� faz quer, garot"+(Sex == SEX_MALE ? "o":"a")+"?");
			next;
			mes("[Raspuchin Gregory]\n"
				"O que...?\n"
				"Junte-se � Guilda!?\n"
				"Eu n�o gosto disso...\n"
				"Simplesmente n�o gosto...!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Hoje em dia, qualquer um pensa que pode ser alquimista apenas por saber misturar algumas ervas.\n"
				"� por isso que a entrevista comigo � necess�ria.");
			next;
			mes("[Raspuchin Gregory]\n"
				"Heeheehee\n"
				"Keheheh!\n"
				"Eu pretendo eliminar todos os mudo incompetente, e persegui-los, n�o precisamos de idiotas!");
			next;
			if (JobLevel == 50) {
				mes("[Rasputin Grigori]\n"
					"Espere...\n"
					"Talvez eu tenha Julgado mal a voc�.\n"
					"Posso dizer que voc� � inteligente, vejo isso em seus seus olhos.");
				next;
				mes("[Raspuchin Gregory]\n"
					"Voc� n�o � apenas "+(Sex == SEX_MALE ? "um garoto est�pido":"uma garota est�pida")+".\n"
					"Eu posso dizer que j� passou por alguns tempos dif�ceis como mercador.\n"
					"Keh heh heh.");
				next;
				mes("[Raspuchin Gregory]\n"
					"Tudo bem, s� para n�o insultar a intelig�ncia uns dos outros, vou deixar voc� passar na entrevista.");
				next;
				mes("[Raspuchin Gregory]\n"
					"Ent�o, apresse-se, torne-se um Alquimista, fa�a alguma boa pesquisa!\n"
					"E voc� pode vir a ser de alguma ajuda para mim.");
				next;
				mes("[Raspuchin Gregory]\n"
					"Agora v� falar com Darwin!\n"
					"Ele vai te ensinar como fazer as experi�ncias.\n"
					"Basta dizer-lhe que eu te enviei.");
				alchemistq = 6;
				changequest(2031,2032);
				close;
			} else {
				mes("[Raspuchin Gregory]\n"
					"Surpres"+(Sex == SEX_MALE ? "o":"a")+", est�?\n"
					"Keheheh.\n"
					"Se voc� pensou que se tornar Alquimista era apenas uma quest�o de trocar de roupas.\n"
					"Ent�o voc� tinha se confundifo totalmente.");
				next;
				mes("[Raspuchin Gregory]\n"
					"Agora, tente resolver todos esses problemas.\n"
					"Vamos ver o qu�o inteligente voc� realmente �.");
			}
		} else if (alchemistq == 5) {
			mes("O que...?!\n"
				"Voc� quer tentar novamente?!\n"
				"Eu pensei que disse para sair!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Eu n�o gosto...\n"
				"N�o gosto disso!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Bem...\n"
				"Vou tentar esquecer o seu desempenho lament�vel da �ltima vez.\n"
				"E lhe dar outra chance.");
			next;
			mes("[Raspuchin Gregory]\n"
				"Ent�o, responda tudo corretamente.");
		}
		next;
		switch (rand(1,3)) {
			case 1:
			mes("[Raspuchin Gregory]\n"
				"12 + 23 + 34 + 45 = ?");
			next;
			input .@input;
			if (.@input != 114) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"1000 - 36 - 227 - 348 = ?");
			next;
			input .@input;
			if (.@input != 389) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"14 * 17 * 3 = ?");
			next;
			input .@input;
			if (.@input != 714) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"9765 / 3 / 5 / 7 = ?");
			next;
			input .@input;
			if (.@input != 93) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"(47 * 28) - (1376 / 4) = ?");
			next;
			input .@input;
			if (.@input != 972) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"(2646 / 7) + (13 * 28) = ?");
			next;
			input .@input;
			if (.@input != 742) {
				.@w_point += 1;
			}
			mes("[Rasputin Gregory]\n"
				"Se comprando estes itens com 24% de desconto.\n"
				"Qual o pre�o total de 15 Po��es Verdes, 6 Lupas e 4 Armadilhas?");
			next;
			input .@input;
			if (.@input != 909) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Qual o toral de peso de 3 Cimitarra, 2 Elmos e 1 Casaco de Pele?");
			next;
			input .@input;
			if (.@input != 450) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Qual o total de defesa de Solid�u, Capote, M�scara de Opera, �culos 3D, Sobrepelis, Botas e Aquecedor de Orelha?");
			next;
			input .@input;
			if (.@input != 20) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Se voc� comprar 5 Elmos com um desconto de 24% e vender-los com ganho de 20%.\n"
				"Quanto lucro ganharia?");
			next;
			input .@input;
			if (.@input != 8800) {
				.@w_point += 1;
			}
			break;
			case 2:
			mes("[Raspuchin Gregory]\n"
				"13 + 25 + 37 + 48 = ?");
			next;
			input .@input;
			if (.@input != 123) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"1000 - 58 - 214 - 416 = ?");
			next;
			input .@input;
			if (.@input != 312) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"12 * 24 * 3 = ?");
			next;
			input .@input;
			if (.@input != 864) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"10530 / 3 / 5 / 2 = ?");
			next;
			input .@input;
			if (.@input != 351) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"(35 * 19) - (1792 / 7) = ?");
			next;
			input .@input;
			if (.@input != 409) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"(2368 / 8) + (24 * 17) = ?");
			next;
			input .@input;
			if (.@input != 704) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"(2646 / 7) + (13 * 28) = ?");
			next;
			input .@input;
			if (.@input != 742) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Qual o total de pre�o de 15 Po��es Verdes, 6 Lupas, e 4 Armadilhas com 24% de desconto?");
			next;
			input .@input;
			if (.@input != 934) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Qual o peso de 3 Sabres de Impacto, 3 Capas e 2 Botas?");
			next;
			input .@input;
			if (.@input != 550) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Qual a defesa somada de Escudo, Casaco, M�scara de G�s, La�o Grande, La�o Meigo, Chap�u Chin�s e �culos");
			next;
			input .@input;
			if (.@input != 16) {
				.@w_point += 1;
			}
			mes("[Rasputin Gregory]\n"
				"Quantos zeny voc� tem de lucro se voc� comprar uma Malha com 24% de desconto e vender a mesma com 20% do pre�o normal?");
			next;
			input .@input;
			if (.@input != 8520) {
				.@w_point += 1;
			}
			break;
			case 3:
			mes("[Raspuchin Gregory]\n"
				"12 + 23 + 34 + 45 = ?");
			next;
			input .@input;
			if (.@input != 114) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"1000 - 58 - 214 - 416 = ?");
			next;
			input .@input;
			if (.@input != 312) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"14 * 17 * 3 = ?");
			next;
			input .@input;
			if (.@input != 714) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"10530 / 3 / 5 / 2 = ?");
			next;
			input .@input;
			if (.@input != 351) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"(47 * 28) - (1376 / 4) = ?");
			next;
			input .@input;
			if (.@input != 972) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"(2646 / 7) + (13 * 28) = ?");
			next;
			input .@input;
			if (.@input != 742) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Quanto custa\n"
				"6 Po��es Vermelhas,\n"
				"7 Po��es Verdes\n"
				"e 8 Asas de Mosca\n"
				"com 24% de desconto?");
			next;
			input .@input;
			if (.@input != 798) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Qual o total de peso de 3 Sabres, 3 Cap�s e 3 Botas?");
			next;
			input .@input;
			if (.@input != 480) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Qual o total de defesa de\n"
				"Escudo Espelhado,\n"
				"M�scara Feliz,\n"
				"Gib�o,\n"
				"Manto de Seda,\n"
				"Vestido de Noiva,\n"
				"Sobrepelis\n"
				"e Tapa Olho?");
			next;
			input .@input;
			if (.@input != 12) {
				.@w_point += 1;
			}
			mes("[Raspuchin Gregory]\n"
				"Se voc� comprar 4 Armaduras Acolchoada com 24% de desconto.\n"
				"E e vender cada uma com 20% a mais do pre�o que pagou.\n"
				"Quanto lucraria com a venda?");
			next;
			input .@input;
			if (.@input != 7680) .@w_point += 1;
		}
		if (.@w_point == 0) {
			mes("[Raspucin Gregory]\n"
				"Ooh... Excelente!\n"
				"Voc� respondeu tudo correto!\n"
				"Hehehe, eu n�o tenho escolha sen�o reconhec�-lo...");
			next;
		} else if (.@w_point == 1) {
			mes("[Rasputin Grigori]\n"
				"Voc� respondeu uma errada!\n"
				"Mas cou deixar voc� passar na entrevista!");
			next;
		} else if (.@w_point == 2 && alchemistq == 5) {
			mes("[Rasputin Grigori]\n"
				"Voc� tem um s�rio problema em matem�tica\n"
				"Mas eu vou deixar voc� passar na entrevista...");
			next;
		} else {
			alchemistq = 5;
			mes("[Raspuchin Gregory]\n"
				"Keheheh! Idiota!\n"
				"Apenas escutando suas respostas me sinto enjoado!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Como pode uma pessoa que nem sequer pode responder estas perguntas simples.\n"
				"Pode pretender se tornar um Almim�sta?!");
			next;
			mes("[Raspuchin Gregory]\n"
				"Mesmo se voc� cometer um pequeno erro, tudo dar� errado na alquimia!\n"
				"Agora saia daqui!\n"
				"Voc� me deixa doente!");
			close;
		}
		mes("[Raspuchin Gregory]\n"
			"Ent�o, apresse-se, torne-se um Alquimista.\n"
			"Fa�a alguma boa pesquisa, e voc� pode vir a ser de alguma ajuda para mim.");
		next;
		mes("[Raspuchin Gregory]\n"
			"Agora v� falar Darwin!\n"
			"Ele vai te ensinar como fazer as experi�ncias.\n"
			"Basta dizer-lhe que eu te enviei.");
		alchemistq = 6;
		changequest(2031,2032);
		close;
	} else if (alchemistq == 6) {
		mes("O que voc� est� fazendo?\n"
			"V� e encontrar Darwin agora.");
		next;
		mes("[Raspucin Gregory]\n"
			"Hehe, n�o...\n"
			"N�o pense que este � o fim!");
		close;
	}
	mes("Heheheheheheheheh\n"
		"N�o pense que este � o fim dele!");
	close;
}

// ------------------------------------------------------------------
alde_alche,13,15,7	script	Homem Estudioso#alchemistq	4_M_ALCHE_C,{
	if (checkweight(Knife,1) == 0) {
		mes("Espere um momento!\n"
			"Atualmente, voc� est� carregando muitos itens com voc�.\n"
			"Por favor, volte novamente depois de guardar alguns itens no armaz�m da kafra.");
		close;
	}
	mes("[Darwin]");
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes("Lembre-se...\n"
				"Em sua busca, fazer o seu sonhos se tornam realidade e n�o perder o que voc� mais aprecia.");
			next;
			mes("[Darwin]\n"
				"Ah...\n"
				"Harmona...\n"
				"Meu amor...");
			close;
		} else {
			mes("Quando voc� tem seus sonhos, voc� tem tudo.\n"
				"Sem eles, voc� tem nada mais a perder.");
			next;
			mes("[Darwin]\n"
				"Estes olhos amaldi�oados...\n"
				"Eles perderam de vista.\n"
				"Meus sonhos h� muito tempo.");
			next;
			mes("[Darwin]\n"
				"Para�so realmente existe...?\n"
				"N�o sem meu amor...\n"
				"N�o sem Harmona...");
			close;
		}
	}
	if (alchemistq == 6) {
		mes("...");
		next;
		mes("[Darwin]\n"
			"...\n"
			"......");
		next;
		mes("[Darwin]\n"
			"...\n"
			"......\n"
			"Quem � esse...?");
		next;
		monster("alde_alche",13,15,"Lobo",WOLF,1);
		killmonsterall("alde_alche");
		mes("[Darwin]\n"
			"Um lobo?\n"
			"Ou um ser humano?\n"
			"Voc� deve estar procurando alguma coisa, n�o �?");
		next;
		mes("[Darwin]\n"
			"Depois de tudo...\n"
			"Todo mundo tem desejos, tenha cuidado.\n"
			"N�o seja como o selvagem lobo atra�do pelas flores.");
		next;
		mes("[Darwin]\n"
			"Em seus esfor�os para ganhar algo mais, voc� pode acabar sacrificando algo precioso para voc�.");
		next;
		mes("[Darwin]\n"
			"Cultivando alegria e felicidade � como cultivar flores.\n"
			"Se algo est� faltando, � a flor desvanecer...");
		next;
		mes("[Darwin]\n"
			"O que te traz\n"
			"Para este tipo de lugar?");
		next;
		switch (select("Quero aprender experimentos", "Diga-me mais sobre flores", "Nada")) {
			case 1:
			mes("[Darwin]\n"
				"Voc� deseja aprender Alquimia?\n"
				"Tudo o que eu sei, para fazer o meu sonho ser realizado...");
			next;
			mes("[Darwin]\n"
				"Eu vou ensinar voc� o b�sico...\n"
				"Mas tudo o que voc� aprende depois deve ser dirigido atrav�s de suas pr�prias motiva��es.");
			next;
			mes("[Darwin]\n"
				"Vou te ensinar como fazer simples alquim�a, por favor trazer o seguinte materiais:");
			next;
			mes("[Darwin]\n"
				"^551A8B3 Vas�lha de Mistura^000000,\n"
				"^551A8B3 Garrafa Vazia^000000,\n"
				"^551A8B1 Erva Vermelha^000000,\n"
				"^551A8B1 Erva Amarela^000000 e\n"
				"^551A8B1 Erva Branca^000000.");
			alchemistq = 7;
			changequest(2032,2033);
			next;
			mes("[Darwin]\n"
				"Uma vez que voc� tenha tudo preparado, volte.");
			close;
			case 2:
			mes("[Darwin]\n"
				"Flores...?\n"
				"No mais escuro recessos da minha mente h� uma flor, que eu me lembro vagamente...");
			next;
			mes("[Darwin]\n"
				"Para aquela que eu amo, eu coloco tudos meus esfor�os em pesquisando uma coisa.");
			next;
			mes("[Darwin]\n"
				"Eu n�o vou te dizer os detalhes.\n"
				"Mas eu estava basicamente pesquisando o relacionamento entre lobos e flores.");
			next;
			mes("[Darwin]\n"
				"Mas sim...\n"
				"Era uma flor.\n"
				"Com seu brilho, foi dito para deixar voc� ver o para�so.\n"
				"A ^551A8BIFlor das Ilus�es^000000...");
			next;
			mes("[Darwin]\n"
				"Eu fiz mesmo um Hom�nculo.\n"
				"Mas ningu�m acreditou que eu poderia criar uma vida nova de uma flor...");
			next;
			mes("[Darwin]\n"
				"Ent�o...\n"
				"Bem, algumas outras coisas aconteceram, e agora n�o tenho mais nada.\n"
				"O tempo n�o tem mais nenhum significado para mim.");
			next;
			mes("[Darwin]\n"
				"Ahh...\n"
				"Harmona...\n"
				"Onde voc� foi?\n"
				"Eu espero que voc� esteja em um campo entre belas flores...");
			close;
			case 3:
			mes("[Darwin]\n"
				"Considere o que � mais precioso para voc�.\n"
				"N�o pode ser protegido se voc� n�o o reconhece.");
			close;
		}
	} else if (alchemistq == 7) {
		mes("...\n"
			"......");
		next;
		mes("[Darwin]\n"
			"...\n"
			"......\n"
			"O que � isso...?");
		next;
		mes("[Darwin]\n"
			"Ah...\n"
			"Voc� � quem deseja aprender Alquimia.\n"
			"Trouxe tudo que pedi?");
		next;
		if (countitem(Illusion_Flower)) {
			mes("[Darwin]\n"
				"Espere.\n"
				"Esta � a Flor das Ilus�es.\n"
				"Como voc� conseguiu isso?");
			next;
			mes("[Darwin]\n"
				"Onde voc� achou isso?!\n"
				"A flor que lentamente floresce sob o luar.\n"
				"N�o � lindo...!");
			next;
			mes("[Darwin]\n"
				"E..Essa flor...\n"
				"Por favor, deixe-me v�-la.\n"
				"A Flor das Ilus�es!\n"
				"Uwaaaaaaah!!");
			next;
			mes("[Darwin]\n"
				"Voc� seria gentil o suficiente para me deixar ficar com essa flor?\n"
				"Tenho certeza que esta � a Flor do Luar que eu tenho procurado!");
			next;
			if (select("Desculpe, eu n�o posso dar", "Eu trouxe para dar a voc�.") == 1) {
				mes("[Darwin]\n"
					"Eu entendo.\n"
					"Voc� n�o pode dar algo t�o precioso para qualquer um.\n"
					"Bem... Tudo bem.");
				next;
				mes("[Darwin]\n"
					"Isso s� trouxe de volta velhas lembran�as.\n"
					"Em qualquer caso, por favor traga o que � necess�rio para fazer a experi�ncia.");
				next;
				mes("[Darwin]\n"
					"Por favor, leve essa flor de volta, ela me traz de volta muitas lembran�as...");
				close;
			}
			mes("[Darwin]\n"
				"Voc� est� falando s�rio?!\n"
				"Obrigado!\n"
				"Uma flor t�o preciosa.\n"
				"Ah, Harmona, meu amor...");
			next;
			mes("[Darwin]\n"
				"Sim...\n"
				"Eu vou te retribuir por isso.\n"
				"Eu plantarei todo o meu conhecimento da Alquimia diretamente em sua mente...");
			next;
			mes("[Darwin]\n"
				"Mantenha seus olhos bem abertos e olhe diretamente nos meus!!\n"
				"N�o devie o olhar at� o fim!!");
			next;
			mes("Lorem ipsum dolor sit amet.");
			next;
			mes("Lorem ipsum dolor sit amet, consectetuer adipiscing elit.");
			next;
			mes("Lorem ipsum dolor sit amet, consectetuer adipiscing elit.\n"
				"Aenean fermentum ullamcorper.");
			next;
			mes("Lorem ipsum dolor sit amet, consectetuer adipiscing elit.\n"
				"Aenean fermentum ullamcorper.\n"
				"Vestibulum ante ipsum primis in.");
			next;
			mes("Lorem ipsum dolor sit amet, consectetuer adipiscing elit.\n"
				"Aenean fermentum ullamcorper.\n"
				"Vestibulum ante ipsum primis in faucibus orci luctus et ultrices");
			next;
			mes("Lorem ipsum dolor sit amet, consectetuer adipiscing elit.\n"
				"Aenean fermentum ullamcorper.\n"
				"Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae, Morbi");
			next;
			mes("Lorem ipsum dolor sit amet, consectetuer adipiscing elit.\n"
				"Aenean fermentum ullamcorper.\n"
				"Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae.\n"
				"Morbi massa, fermentum vitae...");
			next;
			delitem(Illusion_Flower,1);
			mes("[Darwin]\n"
				"^666666*Suspiro...*^000000\n"
				"Voc� � agora um Alquimista!!\n"
				"Jogue fora agora essas vestes de mercador e essa vida mercantil!!");
			alchemistq = 40;
			changequest(2033,2034);
			close;
		} else if (countitem(Medicine_Bowl) > 2 && countitem(Empty_Bottle) > 2 && countitem(Red_Herb) > 0 && countitem(Yellow_Herb) > 0 && countitem(White_Herb) > 0) {
			mes("[Darwin]\n"
				"Parece que voc� tem tudo pronto, como prometido.\n"
				"Vou ensinar-lhe como fazer uma alquimia simples.");
			next;
			mes("[Darwin]\n"
				"Primeiro, prepare a tigela de rem�dios.\n"
				"Ent�o, coloque as ervas dentro, assim, e esmague-as lentamente.");
			next;
			mes("[Darwin]\n"
				"Despeje pequenas quantidades de �gua limpa e mexa a mistura at� engrossar.\n"
				"Depois, adicione mais ervas.");
			next;
			mes("[Darwin]\n"
				"Se voc� acha que tem o suficiente, derrame a mistura em uma garrafa vazia.");
			delitem(Medicine_Bowl,3);
			delitem(Empty_Bottle,3);
			delitem(Red_Herb,1);
			delitem(Yellow_Herb,1);
			delitem(White_Herb,1);
			next;
			mes("[Darwin]\n"
				"Ai est�,\n"
				"Est� completo.\n"
				"Agora, fa�a algum rem�dio usando o procedimento simples eu expliquei para voc�.");
			.@w_point = 0;
			next;
			switch (select("Preparar a Vas�lisa", "Colocar a Vas�lisa na cabe�a", "Chutar a Vas�lisa")) {
				case 1:
				break;
				case 2:
				++.@w_point;
				mes("[Darwin]\n"
					"O que...?");
				next;
				break;
				case 3:
				++.@w_point;
				mes("[Darwin]\n"
					"N�o!");
				next;
				break;
			}
			switch (select("P�r areia na Vas�lia", "P�r ervas na Vas�lha", "P�r uma harpa Vas�lisa")) {
				case 1:
				++.@w_point;
				mes("[Darwin]\n"
					"...Eh!?\n"
					"Isso n�o � alquimia!");
				next;
				break;
				case 2:
				break;
				case 3:
				++.@w_point;
				mes("[Darwin]\n"
					"Uma harpa?\n"
					"E como voc� faria isso?");
				next;
				break;
			}
			switch (select("Esmagar as ervas", "Esmagar a Vas�lha", "Esmagar o p� de Darwin.")) {
				case 1:
				break;
				case 2:
				++.@w_point;
				mes("[Darwin]\n"
					"O que voc� est� fazendo!?");
				next;
				break;
				case 3:
				++.@w_point;
				mes("[Darwin]\n"
					"Agh...!\n"
					"O que voc� pensa que est� fazendo?!");
				next;
				break;
			}
			switch (select("Pulverizar a �gua", "Beber a �gua", "Despejar a �gua")) {
				case 1:
				++.@w_point;
				mes("[Darwin]\n"
					"O que voc� est� fazendo!?");
				next;
				break;
				case 2:
				++.@w_point;
				mes("[Darwin]\n"
					"Espere...\n"
					"Voc� est� fazendo uma pausa?");
				next;
				break;
				case 3:
				break;
			}
			switch (select("Continuar esmagando as ervas", "Comer as ervas", "Dan�ar e cantar")) {
				case 1:
				break;
				case 2:
				++.@w_point;
				mes("[Darwin]\n"
					"Comer as ervas?\n"
					"Eu acho que voc� precisa prestar mais aten��o no que faz...");
				next;
				break;
				case 3:
				++.@w_point;
				mes("[Darwin]\n"
					"Cantando e dan�ando?\n"
					"Alquimistas n�o fazem isso, voc� ficou louco?");
				next;
				break;
			}
			switch (select("Fritar tudo com macarr�o", "Despejar em uma Garrafa Vazia", "Segurar a Vas�lha e beber")) {
				case 1:
				++.@w_point;
				mes("[Darwin]\n"
					"Somos Alquimistas, n�o chefs de restaurantes.");
				next;
				break;
				case 2:
				break;
				case 3:
				++.@w_point;
				mes("[Darwin]\n"
					"Huh...\n"
					"Muito desleixado...");
				next;
				break;
			}
			if (.@w_point) {
				mes("[Darwin]\n"
					"...\n"
					"......");
				next;
				mes("[Darwin]\n"
					"Voc� estragou a mistura desde que voc� n�o seguiu o procedimento!\n"
					"Ter� que obter mais ingredientes para tentar novamente at� que voc� acertar.");
				close;
			}
			getitem(Red_Potion,1);
			getitem(Yellow_Potion,1);
			getitem(White_Potion,1);
			mes("[Darwin]\n"
				"Bom trabalho.\n"
				"Ele saiu muito bem considerando que � a sua primeira vez.\n"
				"V� em frente e guarde o conhecimento que voc� acabou de adquirir.");
			alchemistq = 8;
			changequest(2033,2035);
			next;
			mes("[Darwin]\n"
				"Agora, v� para a pr�xima sala e fale com Van Helmont para continuar sua forma��o.");
			next;
			mes("[Darwin]\n"
				"Nunca esque�a...\n"
				"Voc� deve sempre proteger o que � mais precioso para voc�.");
			close;
		} else {
			mes("[Darwin]\n"
				"Voc� esqueceu o que voc� precisa trazer?\n"
				"Deixe-me lembr�-lo mais uma vez.\n"
				"Voc� deve voltar com...");
			next;
			mes("[Darwin]\n"
				"^551A8B3 Vas�lha de Mistura^000000,\n"
				"^551A8B3 Garrafa Vazia^000000,\n"
				"^551A8B1 Erva Vermelha^000000,\n"
				"^551A8B1 Erva Amarela^000000 e\n"
				"^551A8B1 Erva Branca^000000.");
			next;
			mes("[Darwin]\n"
				"Volte quando tudi estiver pronto...");
			close;
		}
	} else if (alchemistq == 8) {
		mes("Eu disse para ir falar com Van Helmont.\n"
			"Gostaria de te ensinar mais, mas n�o posso.");
		next;
		mes("[Darwin]\n"
			"Aah...\n"
			"Harmona, meu amor.\n"
			"Eu n�o consigo nem ver a flor mais.\n"
			"Minha alma se seca tamb�m...");
		close;
	} else if (alchemistq == 40) {
		mes("J� te dei todo o meu conhecimento e n�o tenho mais nada para te ensinar.");
		next;
		mes("[Darwin]\n"
			"V� para o segundo andar e converse com o nosso l�der da guilda.\n"
			"Depois de fazer isso, sua vida como Alquimista come�ar�.");
		close;
	} else {
		mes("Quando voce tem seus sonhos, voc� tem tudo.\n"
			"Sem eles, voc� n�o tem mais nada a perder.");
		next;
		mes("[Darwin]\n"
			"Estes olhos amaldi�oados...\n"
			"Eles perderam de vista meus sonhos h� muito tempo.\n"
			"Ha ha ha ha ...");
		next;
		mes("[Darwin]\n"
			"O para�so realmente existe...?\n"
			"N�o sem meu amor...\n"
			"N�o sem Harmona...");
		close;
	}
}

// ------------------------------------------------------------------
alde_alche,79,19,5	script	Especialista#alchemistq	4_M_ALCHE_A,{
	mes("[Van Helmont]");
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes("O que voc� quer?\n"
				"Estou ocupado!!\n"
				"N�o me incomode e continue seu caminho.");
			next;
			mes("[Van Helmont]\n"
				"Agora, vamos...\n"
				"Voc� nunca vai ter qualquer pesquisa conclu�da se voc� apenas fica perambulando.\n"
				"Saia e aprenda tudo o que puder.");
			next;
			mes("[Van Helmont]\n"
				"Ler livros cient�ficos e realizar experimentos.\n"
				"Isso � o que alquim�a.\n"
				"Agora, deixe-me voltar ao trabalho!");
			close;
		} else {
			mes("S� um pouco...\n"
				"Um pouquinho mais...\n"
				"N�oo!\n"
				"S� um pouco mais e isso j� teria sido feito!");
			next;
			mes("[Van Helmont]\n"
				"Por qu�...?!\n"
				"Por que, outro fracasso?!\n"
				"Meus c�lculos estavam corretos!\n"
				"E-espera...!");
			next;
			mes("[Van Helmont]\n"
				"Talvez, se eu capacitasse o fluxo t�rmico usando o gradiente neutronic, ele apenas p�de trabalhar...!");
			close;
		}
	}
	if (alchemistq == 8) {
		mes("Arrrrgh ...!\n"
			"Por que essa f�rmula n�o est� funcionando?\n"
			"O que est� errado?\n"
			"Em teoria, est� tudo correto, mas deve haver um erro na f�rmula em algum lugar ...");
		next;
		mes("[Van Helmont]\n"
			"Eu derramo isto aqui, e ele deve parar.\n"
			"Espere, esta � a solu��o errada!\n"
			"Como eu poderia fazer um erro t�o idiota?!\n"
			"Quando eles ficaram trocados?!");
		next;
		mes("[Van Helmont]\n"
			"Est� bem, est� bem...\n"
			"Eu s� preciso corrigir essa parte.\n"
			"N�o h� necessidade de come�ar de novo.\n"
			"Preciso consert�-lo...\n"
			"Mas espere ... Espere...");
		next;
		mes("[Van Helmont]\n"
			".................");
		next;
		mes("[Van Helmont]\n"
			"Hum...\n"
			"Quem � Voc�?");
		next;
		if (select("Quero ser Alquim�sta", ".......") == 2) {
			mes("[Van Helmont]\n"
				"Hmm...?\n"
				"O que, voc� s� quer assistir?\n"
				"Tudo bem, mas fa�a sil�ncio e deixe-me terminar.");
			next;
			mes("[Van Helmont]\n"
				"Fique fora do meu caminho e n�o ande tocando coisas.\n"
				"Pode haver alguns materiais vol�teis, por isso seria perigoso ter quaisquer acidentes.");
			close;
		}
		mes("[Van Helmont]\n"
			"Voc�...?\n"
			"Um Alquimista?\n"
			"Que mercador engra�ado.");
		next;
		mes("[Van Helmont]\n"
			"Bem, isso � bom, mas tenho experi�ncias muito urgentes que exigem minha aten��o.\n"
			"Ent�o n�o fique no caminho.");
		next;
		if (select("Ensine-me algo", "...") == 1) {
			mes("[Van Helmont]\n"
				"Argh...!\n"
				"Eu n�o te disse para n�o me incomodar?\n"
				"O que � t�o dif�cil de entender sobre isso?");
			next;
			mes("[Van Helmont]\n"
				"Bem, eu vou te dar uma tarefa.\n"
				"Aprenda algo novo e volte.\n"
				"Vamos ver.\n"
				"O que seria bom...");
			next;
			mes("[Van Helmont]\n"
				"Certo j� sei..\n"
				"V� aprender como faz o Ant�geno e Mistura com Molgenstein.");
			next;
			mes("[Van Helmont]\n"
				"Voc� n�o precisa trazer nada.\n"
				"Basta ir v�-lo no trabalho e mand�-lo dizer-lhe como ele faz essas solu��es.");
			next;
			alchemistq = 9;
			changequest(2035,2036);
			mes("[Van Helmont]\n"
				"Bem, ent�o vejo voc� mais tarde.\n"
				"� melhor voc� ir logo que puder.");
			close;
		}
		mes("[Van Helmont]\n"
			"...");
		next;
		mes("[Van Helmont]\n"
			"...\n"
			"......");
		next;
		mes("[Van Helmont]\n"
			"...\n"
			"......");
		next;
		mes("[Van Helmont]\n"
			"Ent�o, se eu calibrar a taxa de combust�o deste composto.\n"
			"Deve negar qualquer tend�ncias coesas neste fluxo de part�culas...");
		next;
		mes("[Van Helmont]\n"
			"Mas o que eu vou fazer sobre toda essa cristaliza��o espont�nea?!\n"
			"Eu n�o posso muito bem remover esta matriz, preciso que o catalisador atinja o ponto triplo.");
		next;
		mes("[Van Helmont]\n"
			"Damn!\n"
			"O que eu vou fazer?!");
		close;
	} else if (alchemistq == 9) {
		mes("Tudo bem, se eu fizer uma incis�o aqui nos tent�culos.\n"
			"Adicionar uma solu��o de jellopy e muco pegajoso no...\n"
			"Onde minha vas�lha de mistura foi parar?");
		next;
		mes("[Van Helmont]\n"
			"Ser� que eu us�-los todos em um momento como este?!\n"
			"Gostaria de saber se Nicholas tem alguma esquerma.\n"
			"Espere.\n"
			"Espere um minuto...");
		next;
		mes("[Van Helmont]\n"
			"...");
		next;
		mes("[Van Helmont]\n"
			"...\n"
			"......\n"
			"Quem � voc�?");
		next;
		if (select("Quero me tornar Alquimista", ".......") == 2) {
			mes("[Van Helmont]\n"
				"Hmm...?\n"
				"Fique fora do meu caminho e n�o ande tocando as coisas.\n"
				"Pode haver alguns materiais vol�teis, por isso seria perigoso ter algum acidente.");
			close;
		}
		mes("[Van Helmont]\n"
			"Ah, � claro.\n"
			"O mercador de antes.\n"
			"Ent�o, o que voc� aprendeu com Molgenstein?\n"
			"Eu n�o apenas enviei voc� l� para se divertir, voc� sabe.");
		next;
		mes("[Van Helmont]\n"
			"Deixe-me fazer algumas perguntas para verificar o que voc� aprendeu.");
		next;
		if (molgenstain == 3) {
			mes("[Van Helmont]\n"
				"Qual item n�o � necess�rio para fazer um Ant�geno?");
			next;
			if (select("Karvodailnirol", "Detrimindexta", "Alcool") != 1) {
				.@w_point += 1;
			}
			mes("[Van Helmont]\n"
				"Qual item n�o � necess�rio para fazer uma M�stura?");
			next;
			if (select("Karvodailnirol", "Detrimindexta", "Alcool") != 2) {
				.@w_point += 1;
			}
			if (.@w_point) {
				mes("[Van Helmont]\n"
					"Voc� n�o estava ouvindo Molgenstein?\n"
					"Talvez voc� tenha que v�-lo fazer novamente.");
				next;
				mes("[Van Helmont]\n"
					"Se n�o saber os itens exatos que precisa em um experimento.\n"
					"Voc� pode acabar ferindo a si mesmo e a outras pessoas!");
				close;
			}
			mes("[Van Helmont]\n"
				"Bom, voc� aprendeu bem.\n"
				"Certo, agora voc� sabe algo sobre experimenta��o.\n"
				"Voc� terminou aqui, ent�o agora eu posso continuar com minhas experi�ncias.");
			next;
			mes("[Van Helmont]\n"
				"V� agora encontrar no quarto ao lado deste, e fale com Nicholas.\n"
				"Ele vai continuar seu treinamento.");
			next;
			alchemistq = 20;
			changequest(2036,2037);
			mes("[Van Helmont]\n"
				"O que voc� ainda est� fazendo aqui?\n"
				"V�!\n"
				"N�s dois temos coisas mais importantes para fazer!");
			close;
		} else {
			mes("[Van Helmont]\n"
				"Qual item n�o � necess�rio para fazer um Ant�geno?");
			next;
			select("Pluma", "Muco Pegajoso", "Sangue de Animal");
			mes("[Van Helmont]\n"
				"Qual item n�o � necess�rio para fazer uma M�stura?");
			next;
			select("Ra��o de Monstro", "L�bios Fossilizados", "Bandagem Estragada");
			mes("[Van Helmont]\n"
				"Seja honest"+(Sex == SEX_MALE ? "o":"a")+".\n"
				"Voc� n�o sabe, n�o �?!\n"
				"V� falar com Molgenstein e pedir-lo para ensinar?!");
			next;
			mes("[Van Helmont]\n"
				"Nem pense em voltar at� que voc� fale com ele!\n"
				"Agora pare de me incomodar e saia daqui!");
			close;
		}
	} else if (alchemistq == 20) {
		mes("O que...?\n"
			"Eu pensei que eu te disse para falar com Nicholas na sala ao lado?");
		next;
		mes("[Van Helmont]\n"
			"Eu preciso continuar minha pesquisa, e voc� precisa terminar de seu treinamento para Alquimista.\n"
			"Vamos, mexa-se!");
		close;
	} else {
		mes("S� um pouco...\n"
			"Um pouquinho mais...\n"
			"N�ooo!\n"
			"S� um pouco mais e isso j� teria sido feito!");
		next;
		mes("[Van Helmont]\n"
			"Por qu�...?!\n"
			"Por que, outro fracasso?!\n"
			"Meus c�lculos estavam corretos!\n"
			"Espere...");
		next;
		mes("[Van Helmont]\n"
			"Talvez, se eu capacitasse o fluxo t�rmico usando o gradiente neutronic...");
		close;
	}
}

// ------------------------------------------------------------------
alde_alche,145,19,1	script	Pesquisador#alchemistq	1_M_LIBRARYMASTER,{
	if (checkweight(Knife,1) == 0) {
		mes("[Nicholas Flamel]\n"
			"Espere um momento!\n"
			"Atualmente voc� carrega muitos itens com voc�.\n"
			"Volte depois de guardar alguns itens no armaz�m da Kafra.");
		close;
	}
	if (alchemistq > 19 && alchemistq < 22) {
		if (alchemistq == 20) {
			mes("[Nicholas Flamel]\n"
				"Ooh...\n"
				"Voc� � o Mercador que quer se tornar um Alquimista?");
			next;
			mes("[Nicholas Flamel]\n"
				"N�o � apenas qualquer um pode se tornar um Alquimista, voc� sabe.\n"
				"Voc� tem que ter motiva��o e metas claras e um forte senso de foco.");
			next;
			mes("[Nicholas Flamel]\n"
				"Os alquimistas devem memorizar muitas equa��es qu�micas.\n"
				"Leis cient�ficas e muitas outras informa��es.\n"
				"Na verdade, � muito dif�cil.");
			next;
			mes("[Nicholas Flamel]\n"
				"Se voc� n�o pode se concentrar, voc� ficar� confuso mais tarde.\n"
				"Quando voc� olhar para gr�ficos de Alquimia.\n"
				"Meu teste julgar� sua capacidade de fazer exatamente isso.");
			next;
		}
		mes("[Nicholas Flamel]\n"
			"Encontre as palavras embaralhadas no grupo de letras que lhe mostrarei.\n"
			"Eles podem ser feitos usando algumas ou todas as letras.");
		next;
		mes("[Nicholas Flamel]\n"
			"Voc� passa se voc� escolher a palavra que � ^551A8BCorreta^000000 nesse quebra-cabe�a.");
		next;
		switch (rand(1,3)) {
			case 1:
			mes("[Nicholas Flamel]\n"
				"t m y a n y e o b n e g p r i");
			next;
			if (select("Bronze", "Inseto", "Quebra", "Brigan") == 4) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"o n c u t a p i l e r s v m u");
			next;
			if (select("armaz�m", "comerciante", "simples", "loja") == 2) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"t v a r m e g p h e u b o y l");
			next;
			if (select("grupo", "cl�", "l�der", "doces") == 1) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"q z a h n a i n b r d p t n c");
			next;
			if (select("partisan", "partizan", "pato", "paros") == 2) {
				.@alch_t += 10;
			}
			break;
			case 2:
			mes("[Nicholas Flamel]\n"
				"m p d i c f a r o g n k w a s");
			next;
			if (select("packman", "sol", "ragnarok", "maravilhas") == 1) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"g b n o p r e f a r e t a s k");
			next;
			if (select("roxa", "fuma�a", "ragnarok", "raio") == 3) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"u b n i s j r t r e a g a d p");
			next;
			if (select("abertura", "kinship", "doa��o", "fonte") == 1) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"� o e h � r o m c a i n p t t");
			next;
			if (select("forja", "po��o", "encomenda", "comerciante") == 2) {
				.@alch_t += 10;
			}
			break;
			case 3:
			mes("[Nicholas Flamel]\n"
				"s m i e x b w u n e t a g l r");
			next;
			if (select("tigre", "lobo", "ab�bora", "rasgou") == 1) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"n i e g b o p d s o a u w r v");
			next;
			if (select("golpe", "provocar", "vigor", "abracadabra") == 3) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"l r m g r e x t a v i n e d e");
			next;
			if (select("alberta", "latifoliate", "crimson", "verde") == 4) {
				.@alch_t += 10;
			}
			mes("[Nicholas Flamel]\n"
				"� o e h � r o m c a i n p t t");
			next;
			if (select("forja", "po��o", "encomenda", "comerciante") == 2) {
				.@alch_t += 10;
			}
			break;
		}
		mes("[Nicholas Flamel]\n"
			"Ah, terminamos.\n"
			"Agora vamos ver...");
		if (.@alch_t > 30) {
			alchemistq = 22;
			mes("Excelente trabalho!");
			next;
			mes("[Nicholas Flamel]\n"
				"�timo, voc� encontrou todas essas palavras escondidas.\n"
				"Com esse tipo de concentra��o, voc� n�o deve ter nenhum problema para memorizar equa��es.");
			next;
			mes("[Nicholas Flamel]\n"
				"Volte daqu� a pouco, enquanto eu preparo a pr�xima tarefa para o seu treinamento.");
			next;
			mes("[Nicholas Flamel]\n"
				"Oh, e antes de voc� falar comigo novamente, certifique-se de que voc� tem ^551A8Bespa�o suficiente em seu invent�rio^000000.");
			close;
		} else {
			alchemistq = 21;
			mes("^666666*Suspiro!*^000000\n"
				"H-horrivel!");
			next;
			mes("[Nicholas Flamel]\n"
				"A julgar por esses resultados, voc� obviamente tem um problema com a concentra��o.");
			next;
			mes("[Nicholas Flamel]\n"
				"Se voc� n�o pode mesmo resolver estes enigmas f�ceis da palavra.\n"
				"Como pode voc� se manter a par de suas experi�ncias e pesquisa?");
			next;
			mes("[Nicholas Flamel]\n"
				"Por que voc� n�o relaxa e descansa um pouco antes de fazer o teste novamente?");
			close;
		}
	} else if (alchemistq == 22) {
		if (MaxWeight - Weight < 1370) {
			mes("[Nicholas Flamel]\n"
				"Uau...\n"
				"Voc� est� carregando muita coisa!\n"
				"Primeiro, coloque algumas de suas coisas no Armaz�m Kafra.");
			close;
		}
		mes("[Nicholas Flamel]\n"
			"Bem...\n"
			"Para sua pr�xima tarefa, voc� precisar� viajar para ^551A8BJuno^000000.");
		next;
		mes("[Nicholas Flamel]\n"
			"L�, voc� precisar� falar com ^551A8BBain^000000 e ^551A8BBajin^000000.\n"
			"Esses dois est�o fazendo pesquisa de Alquimia com os S�bios em Juno.\n"
			"Voc� aprender� algo ajudando-os com seu projeto.");
		next;
		mes("[Nicholas Flamel]\n"
			"Volte aqui para mim depois que voc� os ajuda.\n"
			"Eles v�o precisar de todos esses itens para continuar seus experimentos.");
		next;
		alchemistq = 23;
		changequest(2037,2038);
		mes("[Nicholas Flamel]\n"
			"1 Mistura,\n"
			"5 Madeira Queimada,\n"
			"5 Areia Fina,\n"
			"3 Min�rio de Oridecon e\n"
			"3 Min�rio de Elunium.");
		getitem(Mixture,1);
		getitem(Burn_Tree,5);
		getitem(Fine_Sand,5);
		getitem(Oridecon_Stone,3);
		getitem(Elunium_Stone,3);
		next;
		mes("[Nicholas Flamel]\n"
			"Bem.\n"
			"Tenha uma viagem segura e volte sem pre�a.");
		close;
	} else if (alchemistq == 23) {
		mes("[Nicholas Flamel]\n"
			"Eu n�o disse para ir a Juno e ajudar Bain e Bajin com sua pesquisa de Alquimia?");
		close;
	} else if (alchemistq == 24) {
		alchemistq = 40;
		changequest(2038,2039);
		mes("[Nicholas Flamel]\n"
			"Ah, voc� est� de volta!\n"
			"Acabei de receber uma mensagem de Bain e Bajin.\n"
			"Eles me disseram que estavam muito felizes com sua ajuda.");
		next;
		mes("[Nicholas Flamel]\n"
			"Se voc� fosse bom o suficiente para ajudar aqueles irm�os.\n"
			"Definitivamente se qualificaria para ser um Alquimista.");
		next;
		mes("[Nicholas Flamel]\n"
			"Bom trabalho!\n"
			"Tudo o que voc� tem que fazer agora � falar com o L�der da Guilda no 2� andar!\n"
			"Parab�ns, voc� vai se tornar um Alquimista em breve!");
		close;
	} else if (alchemistq == 40 && BaseJob == Job_Merchant) {
		mes("[Nicholas Flamel]\n"
			"Tudo o que voc� tem que fazer agora � falar com o L�der da Guilda no 2� andar!\n"
			"Parab�ns, voc� vai se tornar um Alquimista em breve!");
		close;
	} else {
		mes("[Nicholas Flamel]\n"
			"Lorem ipsum dolor sit amet, consectetuer adipiscing elit.\n"
			"Vivamus sem.\n"
			"Sed metus lacus, viverra id, rutrum eget rhoncus sit amet, lectus.");
		next;
		mes("[Nicholas Flamel]\n"
			"Suspendisse sit amet urna in nisl fringilla faucibus.\n"
			"Nulla scelerisque eros...\n"
			"^666666*Resmungo*^000000");
		close;
	}
}

// ------------------------------------------------------------------
alde_alche,101,184,4	script	L�der dos Alquimistas#alchemistq	2_M_DYEINGER,{
	cutin("job_alche_vincent",2);
	mes("[Vincent Carsciallo]");
	if (BaseJob != Job_Merchant) {
		if (BaseJob == Job_Alchemist) {
			mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+"!\n"
				"Ent�o, como est� indo sua pesquisa?");
			next;
			mes("[Vincent Carsciallo]\n"
				"�s vezes voc� obt�m resultados inesperados de uma experi�ncia.\n"
				"Embora estes possam ser retrocessos em sua pesquisa.\n"
				"Tais resultados tamb�m podem levar a novas descobertas.");
			next;
			mes("[Vincent Carsciallo]\n"
				"Se voc� descobrir algo novo, venha nos contar.\n"
				"N�o se esque�am de que estamos todos trabalhando juntos para desvendar os mist�rios da ci�ncia!");
		} else {
			mes("Hmm...?\n"
				"O que um aventureiro est� fazendo aqui na Guilda Alquimista?");
			next;
			mes("[Vincent Caracciolo]\n"
				"Receio que n�o possamos oferecer-lhe aqui se n�o for membro da nossa Guilda.");
		}
		close2;
		cutin("",255);
		end;
	}
	if (alchemistq == 0) {
		mes("Hmm...?\n"
			"Um Mercador?\n"
			"Voc� est� interessado em aprender Alquimia?");
		next;
		mes("[Vincent Carsciallo]\n"
			"Esta � a Guilda Alquimista.\n"
			"N�s pesquisamos e experimentamos com muitas subst�ncias diferentes para criar novos materiais sem usar magia.");
		next;
		mes("[Vincent Carsciallo]\n"
			"Algum dia, esperamos desvendar o segredo da vida, assim como os outros mist�rios da ci�ncia.");
		next;
		mes("[Vincent Carsciallo]\n"
			"Depois de estar viajando como um comerciante por um longo tempo, voc� deve ter desenvolvido alguma curiosidade cient�fica.\n"
			"Se voc� gostaria de aprender Alquimia, por que voc� n�o tenta se tornar um Alquimista?");
		close2;
		cutin("",255);
		end;
	} else if (alchemistq == 40) {
		if (JobLevel < 40) {
			alchemistq = 0;
			mes("Hmm...\n"
				"Voc� n�o parece estar qualificado ainda.\n"
				"Lembre-se, voc� deve alcan�ar pelo menos o n�vel 40 de Classe para se tornar um Alquimista.");
			close2;
			cutin("",255);
			end;
		}
		if (SkillPoint) {
			mes("Ah, voc� est� quase pronto para se tornar um alquimista.\n"
				"Mas voc� deve primeiro gastar seus pontos de habilidade n�o utilizados.");
			next;
			mes("[Vincent Carsciallo]\n"
				"Fale comigo novamente depois de ter gasto todos os seus pontos de habilidade extras.");
			close2;
			cutin("",255);
			end;
		}
		if (questprogress(2039)) { changequest(2039,2040); }
		if (questprogress(2034)) { changequest(2034,2040); }
		mes("Ah, bem isso � tudo.\n"
			"Posso ver que voc� aprendeu todos os conceitos b�sicos da Alquimia.");
		next;
		jobchange(Job_Alchemist);
		completequest(2040);
		callfunc("ClearJobQuest2nd",18);
		mes("[Vincent Carsciallo]\n"
			"Parab�ns, voc� � agora um membro da nossa ilustre Guilda.\n"
			"Eu espero que voc� aprenda muito...");
		next;
		if (.@jlevel == 50) {
			getitem(Slim_Potion_Create_Book,1);
			getitem(Alcol_Create_Book,1);
			getitem(FireBottle_Create_Book,1);
			getitem(Acid_Create_Book,1);
			getitem(Plant_Create_Book,1);
			getitem(Mine_Create_Book,1);
			getitem(Normal_Potion_Book,1);
			mes("[Vincent Carsciallo]\n"
				"Deixe-me dar-lhe algo especial.\n"
				"Voc� pode usar isso para come�ar sua vida de pesquisa.");
		} else {
			switch (rand(1,6)) {
				case 1:
				getitem(Alcol_Create_Book,1);
				break;
				case 2:
				getitem(FireBottle_Create_Book,1);
				break;
				case 3:
				getitem(Acid_Create_Book,1);
				break;
				case 4:
				getitem(Plant_Create_Book,1);
				break;
				case 5:
				getitem(Mine_Create_Book,1);
				break;
				case 6:
				getitem(Normal_Potion_Book,1);
			}
			mes("[Vincent Carsciallo]\n"
				"E...\n"
				"Aqui est� uma pequena coisa para ajud�-lo a come�ar sua pesquisa.");
		}
		next;
		mes("[Vincent Carsciallo]\n"
			"Vejo voc� mais tarde, ent�o...\n"
			"Lembre-se de viver com orgulho de ser Alquimista!");
		close2;
		cutin("",255);
		end;
	} else {
		mes("Ah...\n"
			"Eu acredito que voc� j� se inscreveu no treinamento para se tornar um Alquimista.");
		next;
		mes("[Vincent Carsciallo]\n"
			"Por favor, ou�a os outros Alquimistas e siga as instru��es cuidadosamente.\n"
			"Voc� aprender� muito com eles.");
		close2;
		cutin("",255);
		end;
	}
}

