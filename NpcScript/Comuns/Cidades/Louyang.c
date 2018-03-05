/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Louyang                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
louyang,297,167,2	script	Mulher Musculosa#lou	4_F_CHNDRESS1,{
	if (Sex == SEX_FEMALE) {
		mes("[Zhi Ching Li]\n Todos os membros do Palácio, incluindo eu e nossa mestre, somos todas mulheres.");
		next;
		mes("[Zhi Ching Li]\n Recentemente nós tivemos um treinamento pesado de novos membros.\n Então eu estou aqui para checar se há alguma mulher querendo se alistar.");
		emotion(e_dots);
		close;
	} else {
		mes("[Zhi Ching Li]\n ...");
		next;
		mes("[Zhi Ching Li]\n ...\n ......");
		next;
		mes("[Zhi Ching Li]\n Por favor me deixe em paz.\n Estou ocupada.");
		close;
	}
}

// ------------------------------------------------------------------
louyang,274,136,4	script	Garoto Forte#lou	4_M_CHN8GUEK,{
	mes("[Akiira]\n Eu estou praticando o \"Punho do Dragão\".\n Eu só preciso usar o poder dos meus punhos.\n Também preciso me condicionar espiritualmente.");
	next;
	mes("[Akiira]\n Toda arte marcial requere treinamento espiritual desde que a mente controla o corpo.\n Se você se treinar espiritualmente, você pode facilmente usar qualquer parte do corpo!");
	next;
	mes("[Akiira]\n Se você estiver pensando em estudar artes marciais.\n Você deveria primeiramente ter conhecimento antes de começar o treino físico.");
	next;
	mes("[Akiira]\n Aprenda sobre as artes marciais e medite sobre a vida.\n Primeiro, você deve achar a paz do espírito antes de desejar a melhora da mente de do corpo.");
	close;
}

// ------------------------------------------------------------------
louyang,276,136,4	script	Mestre do Punho#lou	4_M_CHN8GUEK,{
	mes("[Zhiang Xiau Ji]\n Finalmente...\n Eu dominei o \"Punho do Dragão\"!");
	next;
	mes("[Zhiang Xiau Ji]\n Apesar de ter outros passos básicos eu tive que aprender sobre a história desta arte, e meditar.\n Focando no meu desenvolvimento espiritual por três anos.");
	next;
	mes("[Zhiang Xiau Ji]\n Depois disso, meu mestre finalmente começou a me ensinar a parte física dos outros passos do Punho do Dragão.\n Eu tenho me dedicado a esta arte por treze anos.");
	next;
	mes("[Zhiang Xiau Ji]\n Tenho muito orgulho de ter dominado esta arte dez anos antes do que eu esperava.\n Agora eu preciso estudar esta técnica para melhorá-la corrigindo seus pontos fracos e aumentando seus pontos fortes.");
	next;
	mes("[Zhiang Xiau Ji]\n Eu acho que isso vai levar mais uns dez anos.\n Mas eu não estou desanimado com isso nem um pouco.");
	next;
	mes("[Zhiang Xiau Ji]\n Quando você está aprendendo uma arte marcial você não pode se apressar e aprender tudo em um curto espaço de tempo.\n É impossivel!\n E ainda por cima essa não é a essência da coisa.");
	close;
}

// ------------------------------------------------------------------
louyang,276,133,0	script	Discípulo#lou	4_M_CHN8GUEK,{
	mes("[Discípulo]\n Yeeeyap!\n Taaaaaah!!\n Hooo.");
	close;
}

louyang,276,131,0	script	Discípulo#lou2	4_M_CHN8GUEK,{
	mes("[Discípulo]\n Tah Tah Tah!\n Taaaaaah!!\n Schwooooooo");
	close;
}

louyang,276,129,0	script	Discípulo#lou3	4_M_CHN8GUEK,{
	mes("[Discípulo]\n Si!\n Ayah!!");
	close;
}

louyang,274,133,0	script	Discípulo#lou4	4_M_CHN8GUEK,{
	mes("[Discípulo]\n Dergh!\n Dergh!\n Schwa--!");
	close;
}

louyang,274,131,0	script	Discípulo#lou5	4_M_CHN8GUEK,{
	mes("[Discípulo]\n Yah Yah Yah!\n Taaaaaah!!\n Wataaaaaaaah!");
	close;
}

louyang,274,129,0	script	Discípulo#lou6	4_M_CHN8GUEK,{
	mes("[Discípulo]\n Yeeeyap!\n Taaaaaah!!\n Hooo");
	close;
}

louyang,278,133,0	duplicate(Discípulo#lou)	Discípulo#7lou	4_M_CHN8GUEK
louyang,278,131,0	duplicate(Discípulo#lou2)	Discípulo#8lou	4_M_CHN8GUEK
louyang,278,129,0	duplicate(Discípulo#lou3)	Discípulo#9lou	4_M_CHN8GUEK
louyang,272,133,0	duplicate(Discípulo#lou4)	Discípulo#10lou	4_M_CHN8GUEK
louyang,272,131,0	duplicate(Discípulo#lou5)	Discípulo#11lou	4_M_CHN8GUEK
louyang,272,129,0	duplicate(Discípulo#lou6)	Discípulo#12lou	4_M_CHN8GUEK

// ------------------------------------------------------------------
// - [ Casas(Torre) ] -
// ------------------------------------------------------------------
lou_in01,25,23,5	script	Garota Amigável#lo	4_F_CHNDRESS3,{
	mes("[Hong Miao]\n Este é um elevador que leva a Torre de Observação.\n Nós providenciamos um transporte seguro e rápido por um preço barato.\n Você gostaria de usar este serviço?");
	next;
	switch(select("Informações", "Sim", "Cancelar")) {
		case 1:
		mes("[Hong Miao]\n Depois de muitas sugestões e propostas sendo mandadas para o escritório de Turismo de Louyang.\n A Torre de Observação foi construída para os turistas apreciarem a vista.");
		next;
		mes("[Hong Miao]\n Você pode subir na torre usando o elevador.\n Nós estamos disponibilizando este serviço rápido e seguro por 500 zeny por pessoa.");
		close;
		case 2:
		if (Zeny < 500) {
			mes("[Hong Miao]\n Desculpe-me, mas você não tem a quantidade de zeny necessária.\n Espero que você volte para apreciar a Torre de Observação. Tenha um bom dia.");
			close;
		}
		mes("[Hong Miao]\n Nós tentamos oferecer o melhor serviço.\n Volte sempre.");
		next;
		Zeny -= 500;
		warp("lou_in01", 17, 19);
		end;
		case 3:
		mes("[Hong Miao]\n Volte mais tarde.\n Tenha um bom dia.");
		close;
	}
}

// ------------------------------------------------------------------
louyang,84,254,0	script	Saída#lou	HIDDEN_NPC,{
	mes("^3355FFHá alguns aparatos para descer.\n Você gostaria de usá-los?^000000");
	next;
	if (select("Sim", "Não") == 1) {
		close2;
		warp("lou_in01", 10, 18);
		end;
	}
	close;
}
