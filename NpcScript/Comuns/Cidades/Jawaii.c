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
| - Nota: Npcs comuns na cidade Jawaii                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
jawaii,188,218,7	script	Senhorita da Taberna#jaw	1_F_PUBGIRL,{
	mes "[Senhorita]";
	mes "Oh, querida pessoa!";
	mes "Voc� n�o est� indo para taberna, certo?";
	next;
	if (select("N�o, eu n�o estou.","Oh sim.") == 1) {
		mes "[Senhorita]";
		mes "Ufa!";
		mes "Gra�as a deus!";
		mes "� exatamente isso...";
		mes "A taberna provavelmente n�o � o melhor lugar para voc� se divertir.";
		next;
	}
	mes "[Senhorita]";
	mes "Mesmo que eu trabalhe l�, ainda n�o consigo acreditar que existe esse tipo de lugar.";
	mes "Pensei que o alcool fosse proibido no Reino de Rune-Midgard.";
	next;
	mes "[Senhorita]";
	mes "Eu n�o fa�o id�ia do que os solteiros ser�o capazes de encontrar nesse lugar.";
	mes "Mas ouvi dizer que muitas pessoas diferentes vem aqui por raz�es diferentes.";
	next;
	mes "[Senhorita]";
	mes "Eu mesma vi pessoas que n�o s�o casadas vindo aqui somente para ficar b�badas.";
	mes "Ah, e por algum motivo essas pessoas desaparecem da Taberna!";
	next;
	mes "[Senhorita]";
	mes "Ent�o eu me pergunto, o que est� acontecendo?";
	mes "Eu sou uma gar�onete que trabalha l�, mas eu te digo para n�o ir l�...";
	close;
}

// ------------------------------------------------------------------
jawaii,220,235,3	script	Moradora de Jawaii#jaw	4_F_07,{
	mes "[Jawa Jawa]";
	mes "Voc� sabe qual � o lugar mais bonito de Jawaii?";
	next;
	mes "[Jawa Jawa]";
	mes "� a 'Ilha de Cora��o' onde a localiza��o � ao norte da Ilha.";
	mes "A �gua ao redor do cora��o da ilha n�o � profunda, ent�o voc� pode atravessar.";
	next;
	mes "[Jawa Jawa]";
	mes "Esse � o melhor lugar para compartilhar o momento mais �ntimo com a pessoa que ama.";
	mes "� um lugar isolado cercado por uma linda �rea.";
	next;
	mes "[Jawa Jawa]";
	mes "� claro, provavelmente n�o � uma boa id�ia ir l� se voc� estiver s�.";
	mes "Voc� ficaria com cara de um perdedor pat�tico!";
	close;
}

// ------------------------------------------------------------------
jawaii,240,146,5	script	Moradora de Jawaii#jaw2	4_F_07,{
	mes "[Waii Waii]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Jawaii!";
	next;
	mes "[Waii Waii]";
	mes "Aqui, voc� pode aproveitar sua lua de mel sem se preocupar com interrup��es.";
	mes "Voc� n�o precisa se preocupar com as rotinas de um ex�rcito.";
	next;
	mes "[Waii Waii]";
	mes "Bem, ao redor existem alguns monstros, mas voc� ficar� bem se n�o atac�-ls.";
	mes "Pense neles como habitantes originais da ilha, sendo uma vis�o a ser aprecidada.";
	close;
}

// ------------------------------------------------------------------
jawaii,168,247,5	script	Moradora de Jawaii#jaw3	4_F_07,{
	mes "[Waja Waja]";
	mes "Ah, voc� deve ser um turista.";
	mes "Se voc� est� perdido, dirija-se ao Oeste, onde est�o as acomoda��es dos rec�m casados.";
	mes "Que est�o localizadas na parte ocidental de Jawaii.";
	mes "As acomoda��es s�o incr�veis.";
	next;
	mes "[Waja Waja]";
	mes "Existem quatro diferentes salas tem�ticas, assim voc� pode escolher uma de seu gosto.";
	mes "Tamb�m existe um guia se precisar pedir informa��es.";
	next;
	mes "[Waja Waja]";
	mes "Quando voc� quiser sair, por favor, dirija-se ao navio do noroeste para ir em Alberta.";
	mes "Se voc� deseja retornar a Izlude, existe um navio aguardando ao Sudeste.";
	close;
}

// ------------------------------------------------------------------
jawaii,165,121,1	script	Moradora de Jawaii#jaw5	4_F_07,{
	mes "[Iwa Iwa]";
	mes "Jawaii...";
	mes "Jawaii....";
	mes "� onde voc� pode encontrar a felicidade!";
	next;
	mes "[Iwa Iwa]";
	mes "Ahh, n�o � linda?";
	mes "Voc� n�o precisa fazer mais nada al�m de relaxar e respirar nessa atmosfera pac�fica.";
	mes "Essa � uma das melhores coisas em Jawaii.";
	next;
	mes "[Iwa Iwa]";
	mes "Ahh!";
	mes "As vezes a gente espera algum concerto nesse palco.";
	mes "Se voc� � um bom cantor porque n�o sobe ao palco e canta para n�s?";
	next;
	mes "[Iwa Iwa]";
	mes "Jawaii...";
	mes "Jawaii....";
	mes "� onde voc� pode encontrar a felicidade...";
	close;
}

// ------------------------------------------------------------------
jawaii,141,200,3	script	Funcion�rio#jaw	4_M_NFMAN,{
	mes "[Alowa]";
	mes "Essa � n-no-nossa sa-sala de doces.";
	mes "N�s, estamos li-limpando esta sa-sala para voc� � cla-claro.";
	next;
	mes "[Alowa]";
	mes "Para fi-ficar aqui � 1000 zeny po-por pessoa.";
	mes "Po-por favor, me pague a taxa e eu vou deixar voc� entrar... eu juro!";
	next;
	mes "[Alowa]";
	mes "E-eu tamb�m vou le-levar sua bagagem, ma-mas me pague primeiro.";
	mes "Ou meu pa-patr�o vai ficar insatisfeito comigo...";
	next;
	if (select("Pagar.","Cancelar.") == 1) {
		mes "[Alowa]";
		if (Zeny > 999) {
			mes "Mu-muito o-obrigado!";
			mes "De-deixe-me abrir os aposentos para voc�.";
			mes "Obriga-gado.";
			mes "Te-tenha um �timo dia.";
			close2;
			Zeny -= 1000;
			warp ("jawaii_in",116,64);
			end;
		}
		mes "Ah n�o! Ah n�o n�o n�o n�o.";
		mes "Se-seu dinheiro n�o � suficiente?";
		close;
	}
	mes "[Alowa]";
	mes "Ma-mas, eu prometo, es-se quarto � o mais bonito e li-limpo!";
	mes "Po-porfavor!";
	mes "Volte quando quiser!";
	emotion e_sob;
	close;
}

// ------------------------------------------------------------------
jawaii,108,199,5	script	Funcion�ria#jaw	1_F_MERCHANT_02,{
	mes "[Oran Pinheiro]";
	mes "Bem vindo ao aposento antigo.";
	next;
	mes "[Oran Pinheiro]";
	mes "Esse aposento proporcionar� aos amantes uma atmosfera de eleg�ncia com pel�cia.";
	mes "Todo conforto ser� providenciado para o jovem casal nesse aposento.";
	next;
	mes "[Oran Pinheiro]";
	mes "Todos os quartos basicamente tem a mesma estrutura.";
	mes "Mas cada um tem um interior �nico para antender a gostos diferentes.";
	next;
	mes "[Oran Pinheiro]";
	mes "Se voc� gostar daqui, ser� cobrada uma taxa de 1.000 zeny por pessoa para entrar.";
	mes "Aqui voc� vai construir �timas lembran�as em sua lua de mel.";
	mes "Voc� deve ficar nesse belo quarto.";
	next;
	mes "[Oran Pinheiro]";
	mes "N�o hesite em me deixar saber quando tiver escolhido esse Aposento Antigo.";
	mes "Uma vez que tenha feito a escolha eu leverei voc� nele.";
	next;
	if (select("Pagar.","Cancelar.") == 1) {
		mes "[Oran Pinheiro]";
		if (Zeny > 999) {
			mes "Muito obrigado por usar nossos servi�os.";
			mes "Por favor...";
			mes "Sinta-se confort�vel.";
			close2;
			Zeny -= 1000;
			warp ("jawaii_in",129,110);
			end;
		}
		mes "Eu sinto muito, mas voc� n�o possui dinheiro.";
		close;
	}
	mes "[Oran Pinheiro]";
	mes "Por favor...";
	mes "Aproveite seu tempo.";
	mes "Voc� n�o deve ter pressa quando se trata de lazer.";
	close;
}

// ------------------------------------------------------------------
jawaii,107,189,5	script	Funcion�ria#jaw2	4_F_04,{
	mes "[Sharkie Rania]";
	mes "Eu vou levar voc� para o Quarto de Mel.";
	mes "E vai custar ^0000FF1.000^000000 zenys.";
	next;
	mes "[Sharkie Rania]";
	mes "Ent�o, voc� vai querer ir?";
	next;
	if (select("Pagar.","Cancelar.") == 1) {
		mes "[Sharkie Rania]";
		if (Zeny > 999) {
			mes "Ehh, certo.";
			mes "Vamos indo.";
			close2;
			Zeny -= 1000;
			warp ("jawaii_in",86,117);
			end;
		}
		mes "Voc�...";
		mes "N�o tem dinheiro suficiente.";
		close;
	}
	mes "[Sharkie Rania]";
	mes "Sem problemas.";
	close;
}

// ------------------------------------------------------------------
jawaii,112,173,7	script	Funcion�ria#jaw3	4_F_04,{
	mes "[Larks Rania]";
	mes "Ol� querido como voc� est�? Voc� est� procurando por um quarto para ficar?";
	next;
	mes "[Larks Rania]";
	mes "Esse � chamado de Quarto Villa.";
	mes "Eu recomendo esse quarto para pessoas que preferem ficarm eum um lugar com um ambiente confort�vel e muito caseiro.";
	next;
	mes "[Larks Rania]";
	mes "Assim como todas as outras salas a estadia aqui vai custar 1.000 zeny.";
	mes "Eu posso guiar voc� at� o Quarto Villa nesse momento, se voc� quiser.";
	mes "Ser� que voc� gostaria de ficar?";
	next;
	if (select("Pagar.","Cancelar.") == 1) {
		mes "[Larks Rania]";
		if (Zeny > 999) {
			mes "Muito obrigado.";
			mes "Aproveite sua estadia.";
			close2;
			Zeny -= 1000;
			warp ("jawaii_in",87,75);
			end;
		}
		mes "Ah, que vergonha!";
		mes "Voc� parece n�o ter dinheiro suficiente...?";
		close;
	}
	mes "[Larks Rania]";
	mes "Sem problema.";
	mes "Se voc� quiser, vai poder ver o Quarto de Mel.";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
jawaii_in,25,94,0	script	Funcionaria#jaw5	4_F_07,{
	mes "[Funcion�ria Tryteh]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		mes "Estou t�o feliz com o casamento de voc�s.";
		mes "Espero que vivam felizes para sempre~";
		next;
		mes "[Funcion�ria Tryteh]";
		mes "Tome cuidado com clientes rudes.";
		mes "Eles podem estar b�bados e comportarem-se mal.";
		mes "Sabe como �...";
		close;
	}
	else {
		mes "Espero que aproveite sua estadia aqui.";
		mes "Mas tente n�o beber muito.";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,96,0	script	Funcionaria#jaw6	4_F_07,{
	mes "[Funcion�ria Fey]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		next;
		mes "[Funcion�ria Fey]";
		mes "Esperamos que aprecie sua estadia com a sua amada.";
		mes "Esse lugar n�o � aconchegante e com uma atmosfera rom�ntica?";
		next;
		mes "[Funcion�ria Fey]";
		mes "Seria absolutamente perfeito se n�o fossem esses estranhos da 'Armada dos Solteiros Invenc�veis'.";
		mes "Eles apareceram aqui por algum motivo.";
		mes "Que v�o para o inferno!";
		close;
	}
	else {
		mes "Divirta-se!";
		mes "Mas por favor tente n�o atrapalhar os rec�m-casados daqui!";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,98,0	script	Funcionaria#jaw7	4_F_07,{
	mes "[Funcion�ria Buffy]";
	if (getpartnerid()) {
		next;
		mes "[Funcion�ria Buffy]";
		mes "Oh!";
		mes "Olhe s�...";
		if (Sex == SEX_MALE) {
			mes "Voc� � o par ideal para sua esposa.";
		}
		else {
			mes "Voc� � o par ideal para o seu marido.";
		}
		mes "Awwww, gostaria de me casar em breve!";
		close;
	}
	else {
		mes "Hmm...?";
		if (Sex == SEX_MALE) {
			next;
			mes "[Funcion�ria Buffy]";
			mes "Sou muito competente para cozinhar e limpar.";
			mes "Tenho um ^FF0000belo corpo^000000.";
			mes "O que voc� acha...?";
		}
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,100,0	script	Funcionaria#jaw8	4_F_07,{
	mes "[Funcion�ria Itere]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		next;
		mes "[Funcion�ria Itere]";
		mes "Oh!";
		mes "Voc� parece t�o feliz por estar aqui com a sua amada!";
		mes "Que beleza!";
		close;
	}
	else {
		mes "Espero que aproveite a sua est--";
		mes "Espere um pouco...!";
		next;
		mes "[Funcion�ria Itere]";
		mes "Voc�...";
		mes "� melhor que voc� n�o seja membro da Armada dos Solteiros Invenc�veis!";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,94,4	script	Funcionaria#jaw9	4_F_07,{
	mes "[Funcion�ria Tonia]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		next;
		mes "[Funcion�ria Tonia]";
		mes "Parab�ns � voc�s dois!";
		next;
		mes "[Funcion�ria Tonia]";
		mes "^666666*Suspiro...*^000000";
		mes "^333333Espero que esses caras da Armada dos Solteiros n�o fiquem b�bados e fa�am besteiras de novo...";
		close;
	}
	else {
		mes "Espere. Voc�...!";
		next;
		mes "[Funcion�ria Tonia]";
		mes "Ei--!";
		mes "Voc� n�o � bem vindo aqui!";
		mes "P-pare de beber!";
		mes "Agora mesmo!";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,96,4	script	Funcionaria#jaw10	4_F_07,{
	mes "[Funcion�ria Kay]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		next;
		mes "[Funcion�ria Kay]";
		mes "Ah Deus...!";
		mes "Ultimamente estou tendo que lidar com b�bados demais aqui!";
		mes "� dif�cil tomar conta de tudo...";
		close;
	}
	else {
		mes "Entendo que voc� queira relaxar, mas tome cuidado e n�o beba demais.";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,98,4	script	Funcionaria#jaw11	4_F_07,{
	mes "[Funcion�ria Amy]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		mes "Oh! Voc�s s�o perfeitos juntos!";
		mes "Parecem, hum, uma arma e uma bala!";
		mes "N�o...?";
		next;
		mes "[Funcion�ria Amy]";
		mes "Que tal...";
		mes "Leite e biscoitos?";
		mes "Gim e �gua t�nica?";
		mes "Jackie Tucker e Chris Chan...?";
		mes "Hummmm....";
		close;
	}
	else {
		next;
		mes "[Funcion�ria Amy]";
		mes "Hmm, n�o acho que esse seja o lugar certo para voc�.";
		mes "Mas posso deix�-lo beber e se divertir, desde que n�o exagere.";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,100,4	script	Funcionaria#jaw12	4_F_07,{
	mes "[Funcion�ria Yasmine]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		mes "Assim como a lua e as estrelas, voc�s s�o perfeitos juntos.";
		mes "Estou muito feliz por voc�s!";
		close;
	}
	else {
		next;
		mes "[Funcion�ria Yasmine]";
		mes "Acho que aqui n�o � o lugar certo para voc�.";
		mes "Mas espero que encontre a sua alma g�mea algum dia. Divirta-se!";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,43,115,0	script	Cliente#jaw	4W_M_01,{
	mes "[Buchi]";
	mes "Voc� parece feliz...";
	mes "Espero que consiga se sentir assim pra sempre...";
	mes " ";
	mes "^666666*Hiccup...!*^000000";
	close;
}

// ------------------------------------------------------------------
jawaii_in,41,106,3	script	Cliente#jaw2	4W_M_02,{
	mes "[Cage]";
	mes "Somos livres...!";
	mes "Somos livres do inferno do casamento...!";
	mes "Somos solteiros sinceros e competentes...!";
	close;
}
