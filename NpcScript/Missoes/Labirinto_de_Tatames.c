/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de acesso ao Labirinto de Tatames                   |
\*-----------------------------------------------------------------*/

amatsu,164,174,4	script	Guarda do Port�o#ea_ama	8_M_JPNSOLDIER,{
	mes "[Guarda do Port�o]";
	if (!event_amatsu) {
		mes "Voc� n�o pode entrar aqui.";
		mes "A m�e de nosso senhor est� descansando aqui.";
		mes "Ela precisa descansar.";
		next;
		event_amatsu = 1;
		setquest(8131);
		mes "[Guarda do Port�o]";
		mes "Ela esteve doente por meses.";
		mes "E � por isso que ela est� hospedada aqui.";
		mes "Sua doen�a � bastante perigosa...";
	} else if (event_amatsu == 1) {
		mes "Ela deve recuperar logo sua sa�de...";
		mes "Mas mesmo assim, meu senhor est� preocupado.";
	} else if (event_amatsu == 5) {
		mes "Augh! Fiquei surpreso com o som alto.";
		mes "O que aconteceu? Em?";
	} else if (event_amatsu == 6) {
		mes "A m�e do senhor ainda n�o recuperou completamente sua sa�de.";
		mes "Ainda assm, ela est� bem melhor do que antes.";
	} else {
		mes "Se est� permitido a visitar meu senhor, ent�o voc� pode entrar...";
		mes "Mas voc� n�o ser� capaz de cur�-la. Muitos outros tentaram e falharam.";
	}
	close;
}

// ------------------------------------------------------------------
amatsu,171,174,4	script	Guarda do Port�o#ea_ama2	8_M_JPNSOLDIER,{
	mes "[Guarda do Port�o]";
	if (!event_amatsu) {
		mes "Voc� n�o pode entrar aqui.";
		mes "A m�e de nosso senhor est� descansando aqui.";
		next;
		event_amatsu = 1;
		mes "[Guarda do Port�o]";
		mes "Ela esteve doente por meses.";
		mes "E � por isso que ela est� hospedada aqui.";
		mes "...";
	} else if (event_amatsu == 1) {
		mes "Por favor, fique quieto.";
		mes "A m�e do senhor est� aqui.";
		mes "Ela precisa descansar.";
		next;
		mes "[Guarda do Port�o]";
		mes "Por que isso est� acontecendo com meu gentil senhor...";
		mes "Como pode ser?";
		mes "*Choro*...";
	} else if (event_amatsu == 5) {
		mes "H�? Algo estava voando no c�u...";
		mes "Voc� n�o viu? Ugh.";
		mes "Esse som me surpreendeu.";
	} else if (event_amatsu == 6) {
		mes "Agora o nosso senhor est� aliviado.";
		mes "Est�vamos t�o preocupados.";
		mes "Tudo est� bem agora... *choro*.";
	} else {
		mes "Ah... Pessoas de outro continente s�o todos m�dicos!";
		mes "Quantos m�dicos j� vieram a visitar!?";
		mes "N�o consigo mais nem contar!";
	}
	close;
}

// ------------------------------------------------------------------
ama_in02,200,176,4	script	Senhor do Palacio#ea_ama	8_M_JPNMASTER,{
	if (!event_amatsu) {
		mes "[Ishida Yoshinaga]";
		mes "O qu� estrangeiro...? *Puxa*";
		mes "Me desculpe, mas n�o estou com vontade de conhecer novas pessoas!";
		next;
		mes "[Ishida Yoshinaga]";
		mes "Saia daqui! Eu n�o estou interessado em saber quem voc� �.";
		mes "Eu n�o estou me sentindo bem!";
		close;
	} else if (event_amatsu == 1) {
		mes "[Ishida Yoshinaga]";
		mes "o qu�!";
		mes "O que traz voc� aqui?";
		mes "Se n�o for algo urgente, me diga o que �...!";
		next;
		switch (select("Eu ouvi falar sobre sua m�e...","Seu �ltimo nome � bonito","Quem � voc�?")) {
			case 1:
			mes "[Ishida Yoshinaga]";
			mes "Ah...Ent�o voc� sabe sobre sua doen�a?";
			mes "Ouvi dizer que, em outros lugares a medicina � bem mais avan�ada.";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Como voc� sabe, eu sou o senhor Toukoujyo, Ishida Yoshinaga.";
			mes "Prazer em conhec�-lo.";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Vamos chegar ao ponto.";
			mes "Minha m�e n�o est� bem recentemente.";
			mes "Eu sei que voc� est� aqui por causa disso.";
			mes "Voc� pode curar sua doen�a?";
			next;
			mes "[Ishida Yoshinaga]";
			mes "At� agora, muitos m�dicos famosos j� a visitaram, mas todos eles n�o conseguiram curar sua doen�a...";
			mes "Eles me decepcionaram.";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Voc�, que v�m de Rune-Midgard, pode ser capaz de curar a doen�a da minha m�e.";
			mes "Irei recompens�-l"+(Sex == SEX_MALE ? "o":"a")+" se voc� fizer isso...";
			next;
			event_amatsu = 2;
			changequest(8131,8132);
			mes "[Ishida Yoshinaga]";
			mes "Pe�o-lhe...por favor.";
			mes "Minha m�e est� morando em uma casa do lado de fora do Pal�cio.";
			mes "Ela vir� at� mim, quando concluir seu tratamento.";
			close;
			case 2:
			mes "[Ishida Yoshinaga]";
			mes "�timo!? E ent�o?!";
			mes "Leio meu nome at� ficar cansado disso!";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Brincando, mesmo nessa situa��o cr�tica... *Puxa*...";
			mes "Por favor, aproveite a cidade de Amatsu.";
			mes "...Aconte�a o que acontecer!";
			close;
			case 3:
			mes "[Ishida Yoshinaga]";
			mes "...eu? Voc� n�o sabe? H�?";
			mes "Eu sou o senhor deste pal�cio.";
			mes "Se voc� n�o sabe, fale com os Soldados l� fora!";
			close;
		}
	} else if (event_amatsu == 5) {
		if (countitem(Fox_Tail)) {
			mes "[Ishida Yoshinaga]";
			mes "Recebi uma grande not�cia!";
			mes "Minha m�e parece estar melhor.";
			mes "Qual era sua doen�a?";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Uma raposa?";
			mes "� isso mesmo? Nossa...";
			mes "N�o era uma doen�a...!!";
			mes "Por que eu n�o percebi?!";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Maldita raposa.";
			mes "Fugiu para se vingar de mim dessa forma...";
			mes "Bem, ent�o.";
			mes "N�o h� mais chance de vingan�a agora...";
			mes "Hahaha!";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Hum, Hum. Hum...";
			next;
			mes "[Ishida Yoshinaga]";
			mes "De qualquer forma, obrigado por me ajudar.";
			mes "Minha m�e ir� ficar bem agora...";
			mes "Eu irei te recompensar...";
			mes "Mas o que seria bom para voc�...?";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Certo, eu irei te dar um Passe Imperial.";
			mes "Voc� pode andar para qualquer lugar de Amatsu com esse passe.";
			next;
			event_amatsu = 6;
			completequest(8135);
			delitem(Fox_Tail,1);
			getitem(Lords_Passable_Ticket,1);
			mes "[Ishida Yoshinaga]";
			mes "Esta n�o � uma grande recompensa, mas algum dia ir� servir para voc�.";
			mes "Fale com meu Soldado, 'Jyuro' para mais detalhes.";
			close;
		}
		mes "[Ishida Yoshinaga]";
		mes "Hum, ouvi dizer que minha m�e est� melhor... mas como eu posso saber se foi voc� que a curou ou n�o?";
		next;
		mes "[Ishida Yoshinaga]";
		mes "Existe alguma evid�ncia para provar que voc� quem a curou?";
		next;
		mes "[Ishida Yoshinaga]";
		mes "Mostre-me uma evid�ncia.";
		mes "Eu atendo todos os estrangeiros.";
		mes "Mas nem todos eles s�o confi�veis.";
		mes "Bem... Divirta-se.";
		close;
	} else if (event_amatsu == 6) {
		mes "[Ishida Yoshinaga]";
		mes "*Risada* Tenha um bom dia em Amatsu...";
		mes "Os estrangeiros s�o sempre bem-vindos.";
		close;
	}
	mes "[Ishida Yoshinaga]";
	mes "Como est� a situa��o da minha m�e?";
	mes "Se voc� encontrar o nome da doen�a, por favor me diga.";
	mes "Estive preocupado com ela a noite toda.";
	next;
	mes "[Ishida Yoshinaga]";
	mes "Eu sei que voc� carrega o conhecimento de Rune-Midgard, eu tenho f� nas suas habilidades.";
	close;
}

// ------------------------------------------------------------------
amatsu,189,166,5	script	Kouji#ea_ama	4_M_JPNCHIBI,{
	mes "[Kouji]";
	mes "Ralralrah Ralralrah Ralralrahralralrah";
	mes "Ralralrah Ralralrah Ralralrahralralrah";
	next;
	mes "[Kouji]";
	if (event_amatsu == 1) {
		mes "Quando voc� estiver doente, bolos de arroz n�o ter far�o melhorar.";
		mes "A fam�lia � a melhor das ajudas.";
		mes "Quando a medicina n�o funcionar, � ai que voc� ver�.";
		mes "O amor de m�e � o maior de todos";
	} else if (event_amatsu == 2) {
		event_amatsu = 3;
		mes "Sacerdote, Sacerdote.";
		mes "A raposa est� me seguindo!";
		mes "� engra�ado e um pouco absurdo.";
		mes "Mas irei precisar de macarr�o com feij�o frito coalhado!";
	} else if (event_amatsu == 3) {
		mes "Sacerdote, Sacerdote.";
		mes "A raposa est� me seguindo!";
		mes "Se ela n�o sair quando eu gritar e gritar!";
		mes "O Santu�rio de Sacerdotes do Norte ir� me ajudar";
		changequest(8132,8133);
	} else if (event_amatsu == 4) {
		mes "Sacerdote, Sacerdote";
		mes "A raposa est� me seguindo!";
		mes "Se os gritos por si s� n�o causam medo na Raposa, preciso da ajuda do Tigre e do Urso!";
		next;
		mes "[Kouji]";
		mes "Eu posso precisar da ajuda do Tigre e do Urso???";
		mes "Talvez tamb�m um pouco de �gua Benta dos Novi�os!";
	} else if (event_amatsu == 5) {
		mes "Navio assustador.";
		mes "Vazio em pessoas, cheio de tesouros.";
		mes "Mas eu n�o me lembro!";
		mes "o resto da...can��o???";
	} else {
		mes "Telhado azul sob o c�u azul.";
		mes "Parede azul no lago azul.";
		mes "Desejos azuis nas mentes azuis.";
		mes "Azul Azul tudo � Azul.";
	}
	next;
	mes "[Kouji]";
	mes "Ralralrah Ralralrah Ralralrahralralrah";
	mes "Ralralrah Ralralrah Ralralrahralralrah";
	close;
}

// ------------------------------------------------------------------
ama_in01,180,173,3	script	Kitsune Mask#ea_ama	4_M_JPN2,{
	if (event_amatsu == 3) {
		mes "[Takehue]";
		mes "�, voc� � "+(Sex == SEX_MALE ? "um forasteiro":"forasteira")+".";
		mes "Tenho certeza que voc� me visitou por que voc� tem problemas com a raposa.";
		mes "Eu posso ver isso em seu rosto.";
		next;
		mes "[Takehue]";
		mes "Originalmente, o sacerdote chefe deve ajud�-lo.";
		mes "Mas este santu�rio est� abandonado faz muito tempo.";
		next;
		mes "[Takehue]";
		mes "� dif�cil expulsar a raposa de um corpo humano.";
		mes "Se voc� t�m licor e macarr�o com queijo de soja frito, seria f�cil, mas eles s�o dif�ceis de encontrar.";
		next;
		mes "[Takehue]";
		mes "Eu sei um pouco sobre raposas, ent�o deixe-me lhe dizer algo...";
		mes "Raposas gostam de provocar as pessoas, mas � raro que elas anseiem por vingan�a.";
		next;
		mes "[Takehue]";
		mes "Se uma raposa � vingativa, isso significa que o ser humano causou danos a ela.";
		mes "A raposa ir� se vingar contra voc�, sua fam�lia e todos os seus amigos!";
		next;
		mes "[Takehue]";
		mes "De qualquer forma, um esp�rito mais forte pode expulsar a raposa de um ser humano.";
		mes "Vamos, grite e me mostre seu esp�rito!";
		next;
		select("Taaaaah!!");
		event_amatsu = 4;
		mes "[Takehue]";
		mes "Bom. Mostre sua energia espiritual por muito tempo.";
		mes "Cedo ou tarde, voc� ser� bem sucedid"+(Sex == SEX_MALE ? "o":"a")+".";
		changequest(8133,8134);
		close;
	} else if (event_amatsu == 4) {
		mes "[Takehue]";
		mes "N�o se esque�a.";
		mes "Voc� tamb�m precisa da encarna��o dos animais mais poderosos contra a raposa.";
		mes "Sem isso, a sua concentra��o n�o servir�.";
		close;
	} else {
		mes "[Takehue]";
		mes "H�? Um forasteiro.";
		mes "Este santu�rio foi utilizado por sacerdotes durante muito tempo.";
		mes "Meu amigo, Tokako e eu viemos aqui para brincar.";
		next;
		mes "[Takehue]";
		mes "Se voc� est� sendo perseguido por monstros, por favor relaxe.";
		mes "Monstros n�o podem vir aqui, ent�o descanse um pouco.";
		close;
	}
}

// ------------------------------------------------------------------
ama_in01,22,111,0	script	Av�#ea_ama	4_F_JPNOBA,{
	if (event_amatsu == 4) {
		mes "[....]";
		mes "^FF6060Yelp, Yelp, um ser humano insensato denovo!";
		mes "O que voc� vai fazer para se livrar de mim!?^000000";
		next;
		mes "[....]";
		mes "^FF6060Parece que voc� aprendeu algo de algum lugar, mas isso n�o vai te prejudicar!! Yelp!^000000";
		next;
		select("Taaaah!!");
		if ((BaseJob == Job_Priest || BaseJob != Job_Acolyte && BaseJob != Job_Monk) || (countitem(Holy_Water) < 1 || countitem(Bears_Foot) < 1 || countitem(Tigers_Skin) < 1)) {
			if (rand(1,4) == 1) { .@fox_kill = 0; }
			else { .@fox_kill = 1; }
		} else {
			if (rand(1,2) == 1) { .@fox_kill = 0; }
			else { .@fox_kill = 1; }
		}
		if (.@fox_kill == 1) {
			mes "[....]";
			mes "^FF6060Yelp! Yelp! Yelp! Humano!";
			mes "Para me expulsar deste corpo assim!";
			mes "Maldito seja!!!^000000";
			next;
			mes "[....]";
			mes "^FF6060Irei amaldi�oar a fam�lia Ishida que me fez isso, para sempre!";
			mes "� melhor tomar cuidado, humano!^000000";
			next;
			monster(strnpcinfo(NPC_MAP),22,111,"Nove-Caudas",NINE_TAIL,1);
			killmonsterall(strnpcinfo(NPC_MAP));
			event_amatsu = 5;
			changequest(8134,8135);
			getitem(Fox_Tail,1);
			mes "[....]";
			mes "^FF6060Yoshinaga n�o lhe causar� infelicidade...^000000";
			mes "^FF0000Yaaaaaaaaaaaaap!!^000000";
			close;
		}
		mes "[....]";
		mes "^FF6060Yelp! Haha! Yelp! Hahaha!";
		mes "Voc� est� tentando me expulsar deste corpo!?";
		mes "Shoo!! Yelp!^000000";
		close2;
		warp("amatsu",167,197);
		end;
	} else if (event_amatsu == 5) {
		mes "[Ishida Saoko]";
		mes "...Huh? Por que voc� est� aqui...?";
		mes "*Urrmmm* Minha cabe�a d�i...";
		mes "Mas eu estou come�ando a me lembrar de tudo...";
		next;
		mes "[Ishida Saoko]";
		mes "Obrigado, viajante de terras distantes.";
		mes "Devo-lhe uma grande d�vida... Muito obrigado...";
		next;
		mes "[Ishida Saoko]";
		mes "Vou dizer ao meu filho que voc� exorcisou a raposa...";
		mes "Obrigado...";
		next;
		mes "[Ishida Saoko]";
		mes "Eu deveria descansar um pouco.";
		mes "Minha cabe�a d�i, um jovem.....";
		mes "V� para meu filho...";
		close;
	} else if (event_amatsu == 6) {
		mes "[Ishida Saoko]";
		mes "Ah, voc�...?";
		mes "Voc� � o �nic"+(Sex == SEX_MALE ? "o":"a")+" que conseguiu exorcisar a raposa...";
		mes "Por favor, repouse em algum lugar...";
		next;
		mes "[Ishida Saoko]";
		mes "Quando eu penso que a raz�o de ter sido possu�da pela raposa � culpa do meu filho.";
		mes "Eu o tornei um filho mal... Nossa";
		mes "Ele era um bom menino, quando ele era jovem.";
		mes "Eu n�o era rigoroso com ele...";
		next;
		mes "[Ishida Saoko]";
		mes "H� muito tempo atr�s, esta cidade n�o era t�o grande como � hoje.";
		mes "N�o houve nenhum grande pal�cio como Toukoujyo.";
		mes "Ent�o, um dia, meu filho trouxe grandes riquezas para o vilarejo.";
		mes "Ele nunca me disse como ele fez para conseguir essa fortuna...";
		next;
		mes "[Ishida Saoko]";
		mes "Ele construiu o pal�cio e ajudou os forasteiros a fazerem a maior cidade.";
		mes "Ele era perfeito at�...";
		mes "Que come�ou a fazer coisas estranhas.";
		next;
		mes "[Ishida Saoko]";
		mes "Coisas... o que irritou Deus.";
		mes "Ele aprendeu a magia proibida, experi�ncias realizadas no seu pal�cio.";
		mes "Monstros enjaulados, fez todos os tipos de coisas horr�veis...";
		next;
		mes "[Ishida Saoko]";
		mes "Essa � a raz�o pela qual h� monstros em Toukoujyo...";
		mes "Finalmente, a Ira de Deus foi desencadeada.";
		mes "Mesmo o Sacerdote no santu�rio n�o podia deixar de...";
		next;
		mes "[Ishida Saoko]";
		mes "Por fim, a raiva veio na minha dire��o...";
		mes "Parece que Deus tentou avisar o meu filho com a raposa.";
		mes "No entanto, o meu filho n�o ir� parar.";
		next;
		mes "[Ishida Saoko]";
		mes "Se ele estiver bem, por favor pare o meu filho.";
		mes "Eu n�o tenho muito tempo.";
		mes "Eu n�o sei o que fazer...";
		mes "Por favor, salve esta pacata vila.";
		mes "Pe�o-lhe por favor...";
		mes "O que ele est� realmente pensando...?";
		close;
	} else {
		mes "[....]";
		mes "^FF6060Yelp, Yelp, outro ser humano insensato!";
		mes "Yelp, Yelp, Quem! Humano!?";
		mes "O que voc� est� fazendo!";
		mes "Shoo... Yelp! Yelp!^000000";
		next;
		mes "[....]";
		mes "^FF6060Eu estarei aqui at� que a fam�lia Ishida morra!";
		mes "N�o me pertube! Yelp!^000000";
		close2;
		warp("amatsu",167,197);
		end;
	}
}

// ------------------------------------------------------------------
ama_in02,170,62,4	script	Soldado#ea_ama	8_M_JPNSOLDIER,{
	mes "[Jiro]";
	mes "Sou Jiro, o administrador deste Pal�cio.";
	mes "O que posso fazer por voc�?";
	next;
	switch(select("Emita um Passe Imperial","Eu quero viver em Amatsu:Nada")) {
		case 1:
		if (event_amatsu == 6) {
			if (countitem(Lords_Passable_Ticket) > 0) {
				mes "[Jiro]";
				mes "Voc� j� tem uma...";
				mes "Voc� n�o precisa ter duas delas.";
				close;
			}
			mes "[Jiro]";
			mes "Voc� perdeu seu Passe Imperial?";
			mes "� necess�rio uma taxa de 10,000 zeny para gera um novo Passe Imperial.";
			next;
			if (select("Gerar","Nos falamos mais tarde") == 1) {
				Zeny -= 10000;
				getitem(Lords_Passable_Ticket,1);
				mes "[Jiro]";
				mes "Aqui est�, n�o o perca.";
				close;
			}
			mes "[Jiro]";
			mes "Certo, ent�o...";
			mes "Fale comigo caso precise de ajuda.";
			close;
		}
		mes "[Guarda do Port�o]";
		mes "O senhor anunciou que ele garante permiss�o de acesso livre aos visitantes de Rune-Midgard.";
		mes "Voc� n�o precisa me pedir um Passe Imperial.";
		close;
		case 2:
		mes "[Jiro]";
		mes "Isso � imposs�vel. Voc� est� livre para visitar qualquer lugar de Amatsu.";
		mes "Mas meu senhor n�o quer se preocupar com imigra��es.";
		mes "Em vez disso, voc� pode ficar aqui o tempo que quiser.";
		close;
		case 3:
		mes "[Jiro]";
		mes "Bem...";
		mes "Fale comigo novamente caso precise de ajuda.";
		close;
	}
}

// ------------------------------------------------------------------
ama_in02,115,177,7	script	Soldado#ea_ama2	8_M_JPNSOLDIER,{
	mes "[Jyuro]";
	mes "O que voc� est� fazendo aqui?";
	mes "N�o h� nada de interessante aqui.";
	next;
	if (select("Isso � verdade","Abrir o port�o") == 1) {
		mes "[Jyuro]";
		mes "H� muitas coisas melhores para se desfrutar na cidade. Divirta-se...";
		close;
	}
	if (event_amatsu == 6) {
		if (countitem(Lords_Passable_Ticket) > 0) {
			mes "[Jyuro]";
			mes "Voc� tem o passe...";
			mes "Voc� quer me enviar agora, ou precisa de mais alguma instru��o?";
			next;
			if (select("Eu irei","Instru��o, por favor") == 1) {
				mes "[Jyuro]";
				mes "Irei abrir o port�o.";
				mes "Cuide-se...";
			} else {
				mes "[Jyuro]";
				mes "A �rea ao redor desse port�o � protegida por alguma magia.";
				mes "Voc� pode ser morto ou se perder.";
				mes " ";
				next;
				mes "[Jyuro]";
				mes "Eu n�o posso dizer muito.";
				mes "N�o vi todo o lugar, apenas dei uma olhada r�pida ";
				mes " ";
				mes " ";
				next;
				mes "[Jyuro]";
				mes "Primeiro.....";
				mes "'N�o confie no que voc� est� vendo.'";
				mes "Eu n�o sei o que isso significa, mas acho que voc� n�o deve acreditar em tudo que passa diante dos seus olhos.";
				next;
				mes "[Jyuro]";
				mes "Segundo.....";
				mes "'Existem certas regras na magia'.";
				mes "Tudo tem uma raz�o para existir. A magia n�o � uma exce��o. Provavelmente, voc� pode encontrar a resposta...";
				next;
				mes "[Jyuro]";
				mes "Bem, irei abrir esse port�o.";
				mes "Cuide-se...";
			}
			close2;
			warp("ama_dun01",229,10);
			end;
		}
		mes "[Jyuro]";
		mes "Sinto muito.";
		mes "Voc� precisa de um Passe para entrar.";
		mes "Por favor, volte.";
		close;
	}
	mes "[Jyuro]";
	mes "O port�o est� falando?";
	mes "Um port�o? No �ltimo andar do edif�cio??? Certamente, voc� deve se confundir.";
	emotion e_swt;
	next;
	if (countitem(Lords_Passable_Ticket) > 0) {
		if (select("Mostrar-lhe o bilhete","Cancelar") == 1) {
			mes "[Jyuro]";
			mes "O qu�? Esse passe �...?";
			mes "Esse passe foi concediro pelo nosso senhor mas eu acho que foi emitido para a pessoa errada.";
			next;
			delitem(Lords_Passable_Ticket,1);
			mes "[Jyuro]";
			mes "Vou manter este bilhete porque foi emitido sem permiss�o.";
			mes "Isso � um aviso.";
			mes "Tenha cuidado.";
			close;
		}
		mes "[Jyuro]";
		mes "H� mais coisas para desfrutar na cidade. Divirta-se...";
		close;
	}
	mes "[Jyuro]";
	mes "H� mais coisas para desfrutar na cidade. Divirta-se...";
	close;
}

// ------------------------------------------------------------------
ama_dun01,229,7,0	script	Soldado#ea_ama3	8_M_JPNSOLDIER,{
	mes "[Jyuro]";
	mes "Voc� quer voltar?";
	next;
	if (select("Sim, eu quero","Irei ficar aqui") == 1) {
		mes "[Jyuro]";
		mes "Cuide-se.";
		close2;
		warp("ama_in02",119,181);
		end;
	}
	mes "[Jyuro]";
	mes "Tenha cuidado...";
	close;
}
