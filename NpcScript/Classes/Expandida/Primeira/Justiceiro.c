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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudança de Classe para Justiceiro.               |
\*-----------------------------------------------------------------*/

que_ng,152,167,3	script	Mestre Miller#gunslingerq	4_M_HUOLDARMY,{
	if (Class == Job_Novice) {
		if (JobLevel < 10 || getskilllv("NV_BASIC") < 9) {
			mes("[Mestre Miller]\n"
				"Interessado em se tornar "+(Sex == SEX_MALE ? "um Justiceiro" : "uma Justiceira")+", eh?\n"
				"Você tem potencial, mas não tem experiência suficiente.\n"
				"Treine mais um pouco, e depois volte, entendeu?");
			close;
		} else if (gunslingerq == 0) {
			mes("[Mestre Miller]\n"
				"Eu sou Miller, um treinador de Justiceiros e guardião em tempo integral de Lady Selena.\n"
				"Pois bem, do que você precisa?\n"
				"Se não for importante, então não tenho tempo a perder com você.");
			next;
			if (select("Nada", "Eu quero me tornar Justiceiro") == 1) {
				mes("[Mestre Miller]\n"
					"Não disperdice meu tempo.\n"
					"Se você quiser se tornar um Justiceiro, volte e fale comigo");
				close;
			}
			mes("[Mestre Miller]\n"
				"Hm. Você é muito jovem, mas seus olhos dizem que você é bastante ambicios"+(Sex == SEX_MALE ? "o" : "a")+".\n"
				"Você terá que passar em nossa entrevista e curso educacional para se tornar Justiceiro.\n"
				"Você quer se candidatar ao cargo?");
			next;
			if (select("Me de algum tempo para pensar","Com certeza!") == 1) {
				mes("[Mestre Miller]\n"
					"Compreensível.\n"
					"Se você decidir que quer se tornar um Justiceiro, então me conte imediatamente.\n"
					"Eu te ajudarei a começar.");
				close;
			}
			mes("[Mestre Miller]\n"
				"Ótimo, ótimo.\n"
				"Muito bem, então vamos começar.\n"
				"Leve esta carta para o Sr. Sábio Chifre de Touro, em Payon.\n"
				"Ele é um xamã que irá julgar se você é ou não qualificado para se tornar um Justiceiro.");
			gunslingerq = 1;
			setquest(6020);
			close;
		} else if (gunslingerq == 1) {
			mes("[Mestre Miller]\n"
				"Leve essa carta de apresentação que escrevi para o Sr. Sábio Chifre de Touro, em Payon.\n"
				"Ele te testará para ver se você pode se tornar um Justiceiro.");
			close;
		} else if (gunslingerq == 2) {
			mes("[Mestre Miller]\n"
				"Hmm... o Sábio Chifre de Touro te pediu para coletar os itens que precisa para fazer o amuleto?\n"
				"Hm. Eu acho que isso faz parte do teste.");
			close;
		} else if (gunslingerq == 3) {
			mes("[Mestre Miller]\n"
				"O Sábio Chifre de Touro te pediu um pouco de leite?\n"
				"Ele deve gostar de você, já que está pedindo favores.\n"
				"Boa sorte, amigo.");
			close;
		} else if (gunslingerq == 4) {
			mes("[Mestre Miller]\n"
				"Eu espero ouvir boas notícias de você em breve.\n"
				"Você sabe, eu não tenho dúvida que você irá se tornar um Justiceiro.");
			close;
		} else if (gunslingerq == 5) {
			if (SkillPoint) {
				mes("[Mestre Miller]\n"
					"Hey, você tem Pontos de Habilidades sobrando.\n"
					"Use-os antes de vir falar comigo de novo.");
				close;
			}
			mes("[Mestre Miller]\n"
				"Oh, você me trouxe um amuleto do Sábio Chifre de Touro?\n"
				"Já tem um tempo que ele não dá um pra ninguém...\n"
				"Estou muito orgulhoso de você!");
			next;
			mes("[Mestre Miller]\n"
				"Se o Sábio Chifre de Touro aprova, então eu não tenho motivos para rejeitar você.\n"
				"Tudo bem então, vou promovê-lo a Justiceiro.\n"
				"Mas primeiro, deixe-me explicar sobre nossa classe mais detalhadamente.");
			next;
			mes("[Mestre Miller]\n"
				"Como um Justiceiro, você deve manter sua arma com você o tempo todo.\n"
				"A Guilda dos Justiceiros mantém o controle de todas as Armas e Projéteis, então você só pode obtê-las dos membros da nossa guilda.");
			next;
			mes("[Mestre Miller]\n"
				"Não se preocupe, os membros da Guilda dos Justiceiros podem ser encontrados em quase todos os lugares.\n"
				"Enfim, tem que ser desta maneira, por ordem da nossa líder da guilda, Lady Selena.");
			next;
			mes("[Mestre Miller]\n"
				"Você pode ter a chance de conhecê-la um dia desses.\n"
				"Agora temos que controlar a venda de armas e projéteis para mantê-los longe de pessoas más ou irresponsáveis.");
			switch (rand(2)) {
				case 0: getitem(Six_Shooter,1); close;
				case 1: getitem(Branch,1); close;
			}
			completequest(6024);
			jobchange(Job_Gunslinger);
			callfunc("ClearJobQuest");
			next;
			mes("[Mestre Miller]\n"
				"De qualquer forma, para mim é sempre um prazer conversar com outro Justiceiro, então mantenha contato.\n"
				"Que o poder da Terra te proteja em todas as suas aventuras.");
			close;
		}
	} else {
		if (Class == Job_Gunslinger) {
			mes("[Mestre Miller]\n"
				"Espero que você mantenha sua arma bem cuidada.\n"
				"Cuide dela, e ela cuidará de você.\n"
				"Lembre-se disso.");
			close;
		} else {
			mes("[Mestre Miller]\n"
				"Se você não tem nenhum assunto a tratar comigo, então por favor, siga seu caminho.");
			close;
		}
	}
}

payon,184,65,3	script	Sábio Chifre de Touro#gunslingerq	4_M_LGTGRAND,{
	if (gunslingerq == 1) {
		mes("[Sábio Chifre de Touro]\n"
			"Olá, que assuntos te trazem à minha presença?");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"O Sr. Miller me mandou entregar esta carta a você.\n"
			"Na verdade, estou interessado em me tornar Justiceiro...");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Miller, você disse?\n"
			"Hm, o Raposa Negra não costuma escrever apresentações para qualquer um que ele não acredite que será um bom Justiceiro\n"
			"Sim, eu acho que sei por que ele o mandou a mim.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Posso ver em seus olhos que tem um bom coração e um forte senso de responsabilidade.\n"
			"Tudo o que precisa é da bênção da Terra para te proteger como Justiceiro.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Eu posso fazer um amuleto que demonstrará seu desejo em se tornar um guerreiro da Terra.\n"
			"Para que o apresente ao Mestre dos Justiceiros, vou precisar destes itens...");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"^3355FF1 Tronco^000000,\n"
			"^3355FF3 Felpas^000000,\n"
			"^3355FF3 Zargônios^000000,\n"
			"^3355FF10 Cascas^000000,\n"
			"^3355FF3 Ervas Verdes^000000,\n"
			"e ^3355FF3 Cascos Arco-Íris^000000.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Depois que eu terminar o amuleto, você deve levá-lo ao Raposa Negra.\n"
			"E ele irá o ajudar a alcançar seu objetivo de se tornar Justiceiro.");
		gunslingerq = 2;
		changequest(6020,6021);
		close;
	} else if (gunslingerq == 2) {
		if (countitem(Zargon) < 3 || countitem(Fluff) < 3 || countitem(Wooden_Block) < 1 || countitem(Shell) < 10 || countitem(Green_Herb) < 3 || countitem(Colorful_Shell) < 3) {
			mes("[Sábio Chifre de Touro]\n"
				"Eu posso fazer um amuleto que demonstrará seu desejo em se tornar um guerreiro da Terra.\n"
				"Ppara que o apresente ao Mestre dos Justiceiros, vou precisar destes itens...");
			next;
			mes("[Sábio Chifre de Touro]\n"
				"^3355FF1 Tronco^000000,\n"
				"^3355FF3 Felpas^000000,\n"
				"^3355FF3 Zargônios^000000,\n"
				"^3355FF10 Cascas^000000,\n"
				"^3355FF3 Ervas Verdes^000000,\n"
				"e ^3355FF3 Cascos Arco-Íris^000000.");
			next;
			mes("[Sábio Chifre de Touro]\n"
				"Depois que eu terminar o amuleto, você deve levá-lo ao Raposa Negra.\n"
				"E ele irá o ajudar a alcançar seu objetivo de se tornar um Justiceiro.");
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
		mes("[Sábio Chifre de Touro]\n"
			"Ah, você voltou com tudo que eu preciso.\n"
			"Por favor, me dê algum tempo para fazer o amuleto.\n"
			"Se você voltar daqui a pouco, eu devo ter terminado.");
		close;
	} else if (gunslingerq == 3) {
		mes("[Sábio Chifre de Touro]\n"
			"Oh, você chegou na hora.\n"
			"Já faz um tempo que não faço um desses amuletos, então devo estar um pouco enferrujado.\n"
			"Ainda assim, isso realmente me leva de volta para os dias de minha juventude.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Eu estive servindo nesta posição de escolher pessoas dignas do amuleto do Justiceiro por algumas décadas.\n"
			"Mas antes disso, eu era um jovem aventureiro, como você.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Parece que foi ontem que eu ganhei meu próprio amuleto do Justiceiro, um guerreiro da Terra.\n"
			"Foi quando eu conheci o pai de Selena.\n"
			"Como o tempo pode passar tão rápido?");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Ah...\n"
			"Eu realmente aprecio toda a ajuda de Selena e do Raposa Negra em ajuda em recrutar jovens Justiceiros.\n"
			"Eu estou bastante velho agora, e não consigo fazer tudo sozinho.\n"
			"^777777*Suspiro...*^000000\n"
			"Assim é a vida.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Antes de você ir, posso pedir um pequeno favor?\n"
			"Estou com sede, e eu gostaria de um copo de leite gelado.\n"
			"Você poderia me trazer algum?");
		gunslingerq = 4;
		changequest(6022,6023);
		close;
	} else if (gunslingerq == 4) {
		if (countitem(Milk) < 1) {
			mes("[Sábio Chifre de Touro]\n"
				"Eu sou um velho homem que, em breve, se reunirá com a Mãe Terra.\n"
				"Você faria um favor a este velho Justiceiro de me trazer um copo de ^3131FFleite^000000 gelado, por favor?");
			close;
		}
		delitem(Milk,1);
		gunslingerq = 5;
		changequest(6023,6024);
		mes("[Sábio Chifre de Touro]\n"
			"Oh, obrigado por sua generosidade!\n"
			"Eu vejo que você me trouxe um pouco de leite.\n"
			"Ahhhh, delícia...");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Eu admiro a paciência, gentileza, e bondade que você provou trazendo isto para mim.\n"
			"Sim, essas são características que todos nós queremos ter.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Agora, por favor, leve esse amuleto para Miller, o Raposa Negra, com toda minha aprovação.\n"
			"Eu espero que você use sua arma para apoiar a justiça como um nobre guerreiro da Terra.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Eeh...Yeah...Hooom....\n"
			"Eeh...Yeah...Hooom....\n"
			"Maaaaarrraaa Neeey!!!");
		close;
	} else if (gunslingerq == 5) {
		mes("[Sábio Chifre de Touro]\n"
			"Por favor, leve esse amuleto para Miller, o Raposa Negra, com toda a minha aprovação.\n"
			"Eu espero que você use sua arma para apoiar a justiça como um nobre guerreiro da Terra.");
		next;
		mes("[Sábio Chifre de Touro]\n"
			"Eeh...Yeah...Hooom....\n"
			"Eeh...Yeah...Hooom....\n"
			"Maaaaarrraaa Neeey!!!");
		close;
	} else if (gunslingerq == 6) {
		mes("[Sábio Chifre de Touro]\n"
			"Faz muito tempo que não te vejo.\n"
			"Espero que tenha se tornado uma fera inteligente, que usa seus poderes como Justiceiro para protecer o que é bom e justo.");
		close;
	} else {
		mes("[Sábio Chifre de Touro]\n"
			"Zzzzzz...\n"
			"^333333*Uff*^000000");
		close;
	}
}
