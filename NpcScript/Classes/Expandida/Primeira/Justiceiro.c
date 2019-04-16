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
| - Info: Quest de Mudan�a de Classe para Justiceiro.               |
\*-----------------------------------------------------------------*/

que_ng,152,167,3	script	Mestre Miller#gunslingerq	4_M_HUOLDARMY,{
	if (Class == Job_Novice) {
		if (JobLevel < 10 || getskilllv("NV_BASIC") < 9) {
			mes("[Mestre Miller]\n"
				"Interessado em se tornar "+(Sex == SEX_MALE ? "um Justiceiro" : "uma Justiceira")+", eh?\n"
				"Voc� tem potencial, mas n�o tem experi�ncia suficiente.\n"
				"Treine mais um pouco, e depois volte, entendeu?");
			close;
		} else if (gunslingerq == 0) {
			mes("[Mestre Miller]\n"
				"Eu sou Miller, um treinador de Justiceiros e guardi�o em tempo integral de Lady Selena.\n"
				"Pois bem, do que voc� precisa?\n"
				"Se n�o for importante, ent�o n�o tenho tempo a perder com voc�.");
			next;
			if (select("Nada", "Eu quero me tornar Justiceiro") == 1) {
				mes("[Mestre Miller]\n"
					"N�o disperdice meu tempo.\n"
					"Se voc� quiser se tornar um Justiceiro, volte e fale comigo");
				close;
			}
			mes("[Mestre Miller]\n"
				"Hm. Voc� � muito jovem, mas seus olhos dizem que voc� � bastante ambicios"+(Sex == SEX_MALE ? "o" : "a")+".\n"
				"Voc� ter� que passar em nossa entrevista e curso educacional para se tornar Justiceiro.\n"
				"Voc� quer se candidatar ao cargo?");
			next;
			if (select("Me de algum tempo para pensar","Com certeza!") == 1) {
				mes("[Mestre Miller]\n"
					"Compreens�vel.\n"
					"Se voc� decidir que quer se tornar um Justiceiro, ent�o me conte imediatamente.\n"
					"Eu te ajudarei a come�ar.");
				close;
			}
			mes("[Mestre Miller]\n"
				"�timo, �timo.\n"
				"Muito bem, ent�o vamos come�ar.\n"
				"Leve esta carta para o Sr. S�bio Chifre de Touro, em Payon.\n"
				"Ele � um xam� que ir� julgar se voc� � ou n�o qualificado para se tornar um Justiceiro.");
			gunslingerq = 1;
			setquest(6020);
			close;
		} else if (gunslingerq == 1) {
			mes("[Mestre Miller]\n"
				"Leve essa carta de apresenta��o que escrevi para o Sr. S�bio Chifre de Touro, em Payon.\n"
				"Ele te testar� para ver se voc� pode se tornar um Justiceiro.");
			close;
		} else if (gunslingerq == 2) {
			mes("[Mestre Miller]\n"
				"Hmm... o S�bio Chifre de Touro te pediu para coletar os itens que precisa para fazer o amuleto?\n"
				"Hm. Eu acho que isso faz parte do teste.");
			close;
		} else if (gunslingerq == 3) {
			mes("[Mestre Miller]\n"
				"O S�bio Chifre de Touro te pediu um pouco de leite?\n"
				"Ele deve gostar de voc�, j� que est� pedindo favores.\n"
				"Boa sorte, amigo.");
			close;
		} else if (gunslingerq == 4) {
			mes("[Mestre Miller]\n"
				"Eu espero ouvir boas not�cias de voc� em breve.\n"
				"Voc� sabe, eu n�o tenho d�vida que voc� ir� se tornar um Justiceiro.");
			close;
		} else if (gunslingerq == 5) {
			if (SkillPoint) {
				mes("[Mestre Miller]\n"
					"Hey, voc� tem Pontos de Habilidades sobrando.\n"
					"Use-os antes de vir falar comigo de novo.");
				close;
			}
			mes("[Mestre Miller]\n"
				"Oh, voc� me trouxe um amuleto do S�bio Chifre de Touro?\n"
				"J� tem um tempo que ele n�o d� um pra ningu�m...\n"
				"Estou muito orgulhoso de voc�!");
			next;
			mes("[Mestre Miller]\n"
				"Se o S�bio Chifre de Touro aprova, ent�o eu n�o tenho motivos para rejeitar voc�.\n"
				"Tudo bem ent�o, vou promov�-lo a Justiceiro.\n"
				"Mas primeiro, deixe-me explicar sobre nossa classe mais detalhadamente.");
			next;
			mes("[Mestre Miller]\n"
				"Como um Justiceiro, voc� deve manter sua arma com voc� o tempo todo.\n"
				"A Guilda dos Justiceiros mant�m o controle de todas as Armas e Proj�teis, ent�o voc� s� pode obt�-las dos membros da nossa guilda.");
			next;
			mes("[Mestre Miller]\n"
				"N�o se preocupe, os membros da Guilda dos Justiceiros podem ser encontrados em quase todos os lugares.\n"
				"Enfim, tem que ser desta maneira, por ordem da nossa l�der da guilda, Lady Selena.");
			next;
			mes("[Mestre Miller]\n"
				"Voc� pode ter a chance de conhec�-la um dia desses.\n"
				"Agora temos que controlar a venda de armas e proj�teis para mant�-los longe de pessoas m�s ou irrespons�veis.");
			switch (rand(2)) {
				case 0: getitem(Six_Shooter,1); close;
				case 1: getitem(Branch,1); close;
			}
			completequest(6024);
			jobchange(Job_Gunslinger);
			callfunc("ClearJobQuest");
			next;
			mes("[Mestre Miller]\n"
				"De qualquer forma, para mim � sempre um prazer conversar com outro Justiceiro, ent�o mantenha contato.\n"
				"Que o poder da Terra te proteja em todas as suas aventuras.");
			close;
		}
	} else {
		if (Class == Job_Gunslinger) {
			mes("[Mestre Miller]\n"
				"Espero que voc� mantenha sua arma bem cuidada.\n"
				"Cuide dela, e ela cuidar� de voc�.\n"
				"Lembre-se disso.");
			close;
		} else {
			mes("[Mestre Miller]\n"
				"Se voc� n�o tem nenhum assunto a tratar comigo, ent�o por favor, siga seu caminho.");
			close;
		}
	}
}

payon,184,65,3	script	S�bio Chifre de Touro#gunslingerq	4_M_LGTGRAND,{
	if (gunslingerq == 1) {
		mes("[S�bio Chifre de Touro]\n"
			"Ol�, que assuntos te trazem � minha presen�a?");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"O Sr. Miller me mandou entregar esta carta a voc�.\n"
			"Na verdade, estou interessado em me tornar Justiceiro...");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Miller, voc� disse?\n"
			"Hm, o Raposa Negra n�o costuma escrever apresenta��es para qualquer um que ele n�o acredite que ser� um bom Justiceiro\n"
			"Sim, eu acho que sei por que ele o mandou a mim.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Posso ver em seus olhos que tem um bom cora��o e um forte senso de responsabilidade.\n"
			"Tudo o que precisa � da b�n��o da Terra para te proteger como Justiceiro.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Eu posso fazer um amuleto que demonstrar� seu desejo em se tornar um guerreiro da Terra.\n"
			"Para que o apresente ao Mestre dos Justiceiros, vou precisar destes itens...");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"^3355FF1 Tronco^000000,\n"
			"^3355FF3 Felpas^000000,\n"
			"^3355FF3 Zarg�nios^000000,\n"
			"^3355FF10 Cascas^000000,\n"
			"^3355FF3 Ervas Verdes^000000,\n"
			"e ^3355FF3 Cascos Arco-�ris^000000.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Depois que eu terminar o amuleto, voc� deve lev�-lo ao Raposa Negra.\n"
			"E ele ir� o ajudar a alcan�ar seu objetivo de se tornar Justiceiro.");
		gunslingerq = 2;
		changequest(6020,6021);
		close;
	} else if (gunslingerq == 2) {
		if (countitem(Zargon) < 3 || countitem(Fluff) < 3 || countitem(Wooden_Block) < 1 || countitem(Shell) < 10 || countitem(Green_Herb) < 3 || countitem(Colorful_Shell) < 3) {
			mes("[S�bio Chifre de Touro]\n"
				"Eu posso fazer um amuleto que demonstrar� seu desejo em se tornar um guerreiro da Terra.\n"
				"Ppara que o apresente ao Mestre dos Justiceiros, vou precisar destes itens...");
			next;
			mes("[S�bio Chifre de Touro]\n"
				"^3355FF1 Tronco^000000,\n"
				"^3355FF3 Felpas^000000,\n"
				"^3355FF3 Zarg�nios^000000,\n"
				"^3355FF10 Cascas^000000,\n"
				"^3355FF3 Ervas Verdes^000000,\n"
				"e ^3355FF3 Cascos Arco-�ris^000000.");
			next;
			mes("[S�bio Chifre de Touro]\n"
				"Depois que eu terminar o amuleto, voc� deve lev�-lo ao Raposa Negra.\n"
				"E ele ir� o ajudar a alcan�ar seu objetivo de se tornar um Justiceiro.");
			close;
		}
		delitem(Zargon,3);
		delitem(Fluff,3);
		delitem(Wooden_Block,1);
		delitem(Shell,10);
		delitem(Green_Herb,3);
		delitem(Colorful_Shell,3);
		gunslingerq = 3;
		changequest(6021,6022);
		mes("[S�bio Chifre de Touro]\n"
			"Ah, voc� voltou com tudo que eu preciso.\n"
			"Por favor, me d� algum tempo para fazer o amuleto.\n"
			"Se voc� voltar daqui a pouco, eu devo ter terminado.");
		close;
	} else if (gunslingerq == 3) {
		mes("[S�bio Chifre de Touro]\n"
			"Oh, voc� chegou na hora.\n"
			"J� faz um tempo que n�o fa�o um desses amuletos, ent�o devo estar um pouco enferrujado.\n"
			"Ainda assim, isso realmente me leva de volta para os dias de minha juventude.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Eu estive servindo nesta posi��o de escolher pessoas dignas do amuleto do Justiceiro por algumas d�cadas.\n"
			"Mas antes disso, eu era um jovem aventureiro, como voc�.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Parece que foi ontem que eu ganhei meu pr�prio amuleto do Justiceiro, um guerreiro da Terra.\n"
			"Foi quando eu conheci o pai de Selena.\n"
			"Como o tempo pode passar t�o r�pido?");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Ah...\n"
			"Eu realmente aprecio toda a ajuda de Selena e do Raposa Negra em ajuda em recrutar jovens Justiceiros.\n"
			"Eu estou bastante velho agora, e n�o consigo fazer tudo sozinho.\n"
			"^777777*Suspiro...*^000000\n"
			"Assim � a vida.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Antes de voc� ir, posso pedir um pequeno favor?\n"
			"Estou com sede, e eu gostaria de um copo de leite gelado.\n"
			"Voc� poderia me trazer algum?");
		gunslingerq = 4;
		changequest(6022,6023);
		close;
	} else if (gunslingerq == 4) {
		if (countitem(Milk) < 1) {
			mes("[S�bio Chifre de Touro]\n"
				"Eu sou um velho homem que, em breve, se reunir� com a M�e Terra.\n"
				"Voc� faria um favor a este velho Justiceiro de me trazer um copo de ^3131FFleite^000000 gelado, por favor?");
			close;
		}
		delitem(Milk,1);
		gunslingerq = 5;
		changequest(6023,6024);
		mes("[S�bio Chifre de Touro]\n"
			"Oh, obrigado por sua generosidade!\n"
			"Eu vejo que voc� me trouxe um pouco de leite.\n"
			"Ahhhh, del�cia...");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Eu admiro a paci�ncia, gentileza, e bondade que voc� provou trazendo isto para mim.\n"
			"Sim, essas s�o caracter�sticas que todos n�s queremos ter.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Agora, por favor, leve esse amuleto para Miller, o Raposa Negra, com toda minha aprova��o.\n"
			"Eu espero que voc� use sua arma para apoiar a justi�a como um nobre guerreiro da Terra.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Eeh...Yeah...Hooom....\n"
			"Eeh...Yeah...Hooom....\n"
			"Maaaaarrraaa Neeey!!!");
		close;
	} else if (gunslingerq == 5) {
		mes("[S�bio Chifre de Touro]\n"
			"Por favor, leve esse amuleto para Miller, o Raposa Negra, com toda a minha aprova��o.\n"
			"Eu espero que voc� use sua arma para apoiar a justi�a como um nobre guerreiro da Terra.");
		next;
		mes("[S�bio Chifre de Touro]\n"
			"Eeh...Yeah...Hooom....\n"
			"Eeh...Yeah...Hooom....\n"
			"Maaaaarrraaa Neeey!!!");
		close;
	} else if (gunslingerq == 6) {
		mes("[S�bio Chifre de Touro]\n"
			"Faz muito tempo que n�o te vejo.\n"
			"Espero que tenha se tornado uma fera inteligente, que usa seus poderes como Justiceiro para protecer o que � bom e justo.");
		close;
	} else {
		mes("[S�bio Chifre de Touro]\n"
			"Zzzzzz...\n"
			"^333333*Uff*^000000");
		close;
	}
}
