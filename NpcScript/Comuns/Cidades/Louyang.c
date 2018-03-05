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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Louyang                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
louyang,297,167,2	script	Mulher Musculosa#lou	4_F_CHNDRESS1,{
	if (Sex == SEX_FEMALE) {
		mes("[Zhi Ching Li]\n Todos os membros do Pal�cio, incluindo eu e nossa mestre, somos todas mulheres.");
		next;
		mes("[Zhi Ching Li]\n Recentemente n�s tivemos um treinamento pesado de novos membros.\n Ent�o eu estou aqui para checar se h� alguma mulher querendo se alistar.");
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
	mes("[Akiira]\n Eu estou praticando o \"Punho do Drag�o\".\n Eu s� preciso usar o poder dos meus punhos.\n Tamb�m preciso me condicionar espiritualmente.");
	next;
	mes("[Akiira]\n Toda arte marcial requere treinamento espiritual desde que a mente controla o corpo.\n Se voc� se treinar espiritualmente, voc� pode facilmente usar qualquer parte do corpo!");
	next;
	mes("[Akiira]\n Se voc� estiver pensando em estudar artes marciais.\n Voc� deveria primeiramente ter conhecimento antes de come�ar o treino f�sico.");
	next;
	mes("[Akiira]\n Aprenda sobre as artes marciais e medite sobre a vida.\n Primeiro, voc� deve achar a paz do esp�rito antes de desejar a melhora da mente de do corpo.");
	close;
}

// ------------------------------------------------------------------
louyang,276,136,4	script	Mestre do Punho#lou	4_M_CHN8GUEK,{
	mes("[Zhiang Xiau Ji]\n Finalmente...\n Eu dominei o \"Punho do Drag�o\"!");
	next;
	mes("[Zhiang Xiau Ji]\n Apesar de ter outros passos b�sicos eu tive que aprender sobre a hist�ria desta arte, e meditar.\n Focando no meu desenvolvimento espiritual por tr�s anos.");
	next;
	mes("[Zhiang Xiau Ji]\n Depois disso, meu mestre finalmente come�ou a me ensinar a parte f�sica dos outros passos do Punho do Drag�o.\n Eu tenho me dedicado a esta arte por treze anos.");
	next;
	mes("[Zhiang Xiau Ji]\n Tenho muito orgulho de ter dominado esta arte dez anos antes do que eu esperava.\n Agora eu preciso estudar esta t�cnica para melhor�-la corrigindo seus pontos fracos e aumentando seus pontos fortes.");
	next;
	mes("[Zhiang Xiau Ji]\n Eu acho que isso vai levar mais uns dez anos.\n Mas eu n�o estou desanimado com isso nem um pouco.");
	next;
	mes("[Zhiang Xiau Ji]\n Quando voc� est� aprendendo uma arte marcial voc� n�o pode se apressar e aprender tudo em um curto espa�o de tempo.\n � impossivel!\n E ainda por cima essa n�o � a ess�ncia da coisa.");
	close;
}

// ------------------------------------------------------------------
louyang,276,133,0	script	Disc�pulo#lou	4_M_CHN8GUEK,{
	mes("[Disc�pulo]\n Yeeeyap!\n Taaaaaah!!\n Hooo.");
	close;
}

louyang,276,131,0	script	Disc�pulo#lou2	4_M_CHN8GUEK,{
	mes("[Disc�pulo]\n Tah Tah Tah!\n Taaaaaah!!\n Schwooooooo");
	close;
}

louyang,276,129,0	script	Disc�pulo#lou3	4_M_CHN8GUEK,{
	mes("[Disc�pulo]\n Si!\n Ayah!!");
	close;
}

louyang,274,133,0	script	Disc�pulo#lou4	4_M_CHN8GUEK,{
	mes("[Disc�pulo]\n Dergh!\n Dergh!\n Schwa--!");
	close;
}

louyang,274,131,0	script	Disc�pulo#lou5	4_M_CHN8GUEK,{
	mes("[Disc�pulo]\n Yah Yah Yah!\n Taaaaaah!!\n Wataaaaaaaah!");
	close;
}

louyang,274,129,0	script	Disc�pulo#lou6	4_M_CHN8GUEK,{
	mes("[Disc�pulo]\n Yeeeyap!\n Taaaaaah!!\n Hooo");
	close;
}

louyang,278,133,0	duplicate(Disc�pulo#lou)	Disc�pulo#7lou	4_M_CHN8GUEK
louyang,278,131,0	duplicate(Disc�pulo#lou2)	Disc�pulo#8lou	4_M_CHN8GUEK
louyang,278,129,0	duplicate(Disc�pulo#lou3)	Disc�pulo#9lou	4_M_CHN8GUEK
louyang,272,133,0	duplicate(Disc�pulo#lou4)	Disc�pulo#10lou	4_M_CHN8GUEK
louyang,272,131,0	duplicate(Disc�pulo#lou5)	Disc�pulo#11lou	4_M_CHN8GUEK
louyang,272,129,0	duplicate(Disc�pulo#lou6)	Disc�pulo#12lou	4_M_CHN8GUEK

// ------------------------------------------------------------------
// - [ Casas(Torre) ] -
// ------------------------------------------------------------------
lou_in01,25,23,5	script	Garota Amig�vel#lo	4_F_CHNDRESS3,{
	mes("[Hong Miao]\n Este � um elevador que leva a Torre de Observa��o.\n N�s providenciamos um transporte seguro e r�pido por um pre�o barato.\n Voc� gostaria de usar este servi�o?");
	next;
	switch(select("Informa��es", "Sim", "Cancelar")) {
		case 1:
		mes("[Hong Miao]\n Depois de muitas sugest�es e propostas sendo mandadas para o escrit�rio de Turismo de Louyang.\n A Torre de Observa��o foi constru�da para os turistas apreciarem a vista.");
		next;
		mes("[Hong Miao]\n Voc� pode subir na torre usando o elevador.\n N�s estamos disponibilizando este servi�o r�pido e seguro por 500 zeny por pessoa.");
		close;
		case 2:
		if (Zeny < 500) {
			mes("[Hong Miao]\n Desculpe-me, mas voc� n�o tem a quantidade de zeny necess�ria.\n Espero que voc� volte para apreciar a Torre de Observa��o. Tenha um bom dia.");
			close;
		}
		mes("[Hong Miao]\n N�s tentamos oferecer o melhor servi�o.\n Volte sempre.");
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
louyang,84,254,0	script	Sa�da#lou	HIDDEN_NPC,{
	mes("^3355FFH� alguns aparatos para descer.\n Voc� gostaria de us�-los?^000000");
	next;
	if (select("Sim", "N�o") == 1) {
		close2;
		warp("lou_in01", 10, 18);
		end;
	}
	close;
}
