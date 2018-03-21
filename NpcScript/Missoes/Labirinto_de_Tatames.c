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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de acesso ao Labirinto de Tatames                   |
\*-----------------------------------------------------------------*/

amatsu,164,174,4	script	Guarda do Portão#ea_ama	8_M_JPNSOLDIER,{
	mes "[Guarda do Portão]";
	if (!event_amatsu) {
		mes "Você não pode entrar aqui.";
		mes "A mãe de nosso senhor está descansando aqui.";
		mes "Ela precisa descansar.";
		next;
		event_amatsu = 1;
		setquest(8131);
		mes "[Guarda do Portão]";
		mes "Ela esteve doente por meses.";
		mes "E é por isso que ela está hospedada aqui.";
		mes "Sua doença é bastante perigosa...";
	} else if (event_amatsu == 1) {
		mes "Ela deve recuperar logo sua saúde...";
		mes "Mas mesmo assim, meu senhor está preocupado.";
	} else if (event_amatsu == 5) {
		mes "Augh! Fiquei surpreso com o som alto.";
		mes "O que aconteceu? Em?";
	} else if (event_amatsu == 6) {
		mes "A mãe do senhor ainda não recuperou completamente sua saúde.";
		mes "Ainda assm, ela está bem melhor do que antes.";
	} else {
		mes "Se está permitido a visitar meu senhor, então você pode entrar...";
		mes "Mas você não será capaz de curá-la. Muitos outros tentaram e falharam.";
	}
	close;
}

// ------------------------------------------------------------------
amatsu,171,174,4	script	Guarda do Portão#ea_ama2	8_M_JPNSOLDIER,{
	mes "[Guarda do Portão]";
	if (!event_amatsu) {
		mes "Você não pode entrar aqui.";
		mes "A mãe de nosso senhor está descansando aqui.";
		next;
		event_amatsu = 1;
		mes "[Guarda do Portão]";
		mes "Ela esteve doente por meses.";
		mes "E é por isso que ela está hospedada aqui.";
		mes "...";
	} else if (event_amatsu == 1) {
		mes "Por favor, fique quieto.";
		mes "A mãe do senhor está aqui.";
		mes "Ela precisa descansar.";
		next;
		mes "[Guarda do Portão]";
		mes "Por que isso está acontecendo com meu gentil senhor...";
		mes "Como pode ser?";
		mes "*Choro*...";
	} else if (event_amatsu == 5) {
		mes "Hã? Algo estava voando no céu...";
		mes "Você não viu? Ugh.";
		mes "Esse som me surpreendeu.";
	} else if (event_amatsu == 6) {
		mes "Agora o nosso senhor está aliviado.";
		mes "Estávamos tão preocupados.";
		mes "Tudo está bem agora... *choro*.";
	} else {
		mes "Ah... Pessoas de outro continente são todos médicos!";
		mes "Quantos médicos já vieram a visitar!?";
		mes "Não consigo mais nem contar!";
	}
	close;
}

// ------------------------------------------------------------------
ama_in02,200,176,4	script	Senhor do Palacio#ea_ama	8_M_JPNMASTER,{
	if (!event_amatsu) {
		mes "[Ishida Yoshinaga]";
		mes "O quê estrangeiro...? *Puxa*";
		mes "Me desculpe, mas não estou com vontade de conhecer novas pessoas!";
		next;
		mes "[Ishida Yoshinaga]";
		mes "Saia daqui! Eu não estou interessado em saber quem você é.";
		mes "Eu não estou me sentindo bem!";
		close;
	} else if (event_amatsu == 1) {
		mes "[Ishida Yoshinaga]";
		mes "o quê!";
		mes "O que traz você aqui?";
		mes "Se não for algo urgente, me diga o que é...!";
		next;
		switch (select("Eu ouvi falar sobre sua mãe...","Seu último nome é bonito","Quem é você?")) {
			case 1:
			mes "[Ishida Yoshinaga]";
			mes "Ah...Então você sabe sobre sua doença?";
			mes "Ouvi dizer que, em outros lugares a medicina é bem mais avançada.";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Como você sabe, eu sou o senhor Toukoujyo, Ishida Yoshinaga.";
			mes "Prazer em conhecê-lo.";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Vamos chegar ao ponto.";
			mes "Minha mãe não está bem recentemente.";
			mes "Eu sei que você está aqui por causa disso.";
			mes "Você pode curar sua doença?";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Até agora, muitos médicos famosos já a visitaram, mas todos eles não conseguiram curar sua doença...";
			mes "Eles me decepcionaram.";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Você, que vêm de Rune-Midgard, pode ser capaz de curar a doença da minha mãe.";
			mes "Irei recompensá-l"+(Sex == SEX_MALE ? "o":"a")+" se você fizer isso...";
			next;
			event_amatsu = 2;
			changequest(8131,8132);
			mes "[Ishida Yoshinaga]";
			mes "Peço-lhe...por favor.";
			mes "Minha mãe está morando em uma casa do lado de fora do Palácio.";
			mes "Ela virá até mim, quando concluir seu tratamento.";
			close;
			case 2:
			mes "[Ishida Yoshinaga]";
			mes "Ótimo!? E então?!";
			mes "Leio meu nome até ficar cansado disso!";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Brincando, mesmo nessa situação crítica... *Puxa*...";
			mes "Por favor, aproveite a cidade de Amatsu.";
			mes "...Aconteça o que acontecer!";
			close;
			case 3:
			mes "[Ishida Yoshinaga]";
			mes "...eu? Você não sabe? Hã?";
			mes "Eu sou o senhor deste palácio.";
			mes "Se você não sabe, fale com os Soldados lá fora!";
			close;
		}
	} else if (event_amatsu == 5) {
		if (countitem(Fox_Tail)) {
			mes "[Ishida Yoshinaga]";
			mes "Recebi uma grande notícia!";
			mes "Minha mãe parece estar melhor.";
			mes "Qual era sua doença?";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Uma raposa?";
			mes "É isso mesmo? Nossa...";
			mes "Não era uma doença...!!";
			mes "Por que eu não percebi?!";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Maldita raposa.";
			mes "Fugiu para se vingar de mim dessa forma...";
			mes "Bem, então.";
			mes "Não há mais chance de vingança agora...";
			mes "Hahaha!";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Hum, Hum. Hum...";
			next;
			mes "[Ishida Yoshinaga]";
			mes "De qualquer forma, obrigado por me ajudar.";
			mes "Minha mãe irá ficar bem agora...";
			mes "Eu irei te recompensar...";
			mes "Mas o que seria bom para você...?";
			next;
			mes "[Ishida Yoshinaga]";
			mes "Certo, eu irei te dar um Passe Imperial.";
			mes "Você pode andar para qualquer lugar de Amatsu com esse passe.";
			next;
			event_amatsu = 6;
			completequest(8135);
			delitem(Fox_Tail,1);
			getitem(Lords_Passable_Ticket,1);
			mes "[Ishida Yoshinaga]";
			mes "Esta não é uma grande recompensa, mas algum dia irá servir para você.";
			mes "Fale com meu Soldado, 'Jyuro' para mais detalhes.";
			close;
		}
		mes "[Ishida Yoshinaga]";
		mes "Hum, ouvi dizer que minha mãe está melhor... mas como eu posso saber se foi você que a curou ou não?";
		next;
		mes "[Ishida Yoshinaga]";
		mes "Existe alguma evidência para provar que você quem a curou?";
		next;
		mes "[Ishida Yoshinaga]";
		mes "Mostre-me uma evidência.";
		mes "Eu atendo todos os estrangeiros.";
		mes "Mas nem todos eles são confiáveis.";
		mes "Bem... Divirta-se.";
		close;
	} else if (event_amatsu == 6) {
		mes "[Ishida Yoshinaga]";
		mes "*Risada* Tenha um bom dia em Amatsu...";
		mes "Os estrangeiros são sempre bem-vindos.";
		close;
	}
	mes "[Ishida Yoshinaga]";
	mes "Como está a situação da minha mãe?";
	mes "Se você encontrar o nome da doença, por favor me diga.";
	mes "Estive preocupado com ela a noite toda.";
	next;
	mes "[Ishida Yoshinaga]";
	mes "Eu sei que você carrega o conhecimento de Rune-Midgard, eu tenho fé nas suas habilidades.";
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
		mes "Quando você estiver doente, bolos de arroz não ter farão melhorar.";
		mes "A família é a melhor das ajudas.";
		mes "Quando a medicina não funcionar, é ai que você verá.";
		mes "O amor de mãe é o maior de todos";
	} else if (event_amatsu == 2) {
		event_amatsu = 3;
		mes "Sacerdote, Sacerdote.";
		mes "A raposa está me seguindo!";
		mes "É engraçado e um pouco absurdo.";
		mes "Mas irei precisar de macarrão com feijão frito coalhado!";
	} else if (event_amatsu == 3) {
		mes "Sacerdote, Sacerdote.";
		mes "A raposa está me seguindo!";
		mes "Se ela não sair quando eu gritar e gritar!";
		mes "O Santuário de Sacerdotes do Norte irá me ajudar";
		changequest(8132,8133);
	} else if (event_amatsu == 4) {
		mes "Sacerdote, Sacerdote";
		mes "A raposa está me seguindo!";
		mes "Se os gritos por si só não causam medo na Raposa, preciso da ajuda do Tigre e do Urso!";
		next;
		mes "[Kouji]";
		mes "Eu posso precisar da ajuda do Tigre e do Urso???";
		mes "Talvez também um pouco de Água Benta dos Noviços!";
	} else if (event_amatsu == 5) {
		mes "Navio assustador.";
		mes "Vazio em pessoas, cheio de tesouros.";
		mes "Mas eu não me lembro!";
		mes "o resto da...canção???";
	} else {
		mes "Telhado azul sob o céu azul.";
		mes "Parede azul no lago azul.";
		mes "Desejos azuis nas mentes azuis.";
		mes "Azul Azul tudo é Azul.";
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
		mes "É, você é "+(Sex == SEX_MALE ? "um forasteiro":"forasteira")+".";
		mes "Tenho certeza que você me visitou por que você tem problemas com a raposa.";
		mes "Eu posso ver isso em seu rosto.";
		next;
		mes "[Takehue]";
		mes "Originalmente, o sacerdote chefe deve ajudá-lo.";
		mes "Mas este santuário está abandonado faz muito tempo.";
		next;
		mes "[Takehue]";
		mes "É difícil expulsar a raposa de um corpo humano.";
		mes "Se você têm licor e macarrão com queijo de soja frito, seria fácil, mas eles são difíceis de encontrar.";
		next;
		mes "[Takehue]";
		mes "Eu sei um pouco sobre raposas, então deixe-me lhe dizer algo...";
		mes "Raposas gostam de provocar as pessoas, mas é raro que elas anseiem por vingança.";
		next;
		mes "[Takehue]";
		mes "Se uma raposa é vingativa, isso significa que o ser humano causou danos a ela.";
		mes "A raposa irá se vingar contra você, sua família e todos os seus amigos!";
		next;
		mes "[Takehue]";
		mes "De qualquer forma, um espírito mais forte pode expulsar a raposa de um ser humano.";
		mes "Vamos, grite e me mostre seu espírito!";
		next;
		select("Taaaaah!!");
		event_amatsu = 4;
		mes "[Takehue]";
		mes "Bom. Mostre sua energia espiritual por muito tempo.";
		mes "Cedo ou tarde, você será bem sucedid"+(Sex == SEX_MALE ? "o":"a")+".";
		changequest(8133,8134);
		close;
	} else if (event_amatsu == 4) {
		mes "[Takehue]";
		mes "Não se esqueça.";
		mes "Você também precisa da encarnação dos animais mais poderosos contra a raposa.";
		mes "Sem isso, a sua concentração não servirá.";
		close;
	} else {
		mes "[Takehue]";
		mes "Hã? Um forasteiro.";
		mes "Este santuário foi utilizado por sacerdotes durante muito tempo.";
		mes "Meu amigo, Tokako e eu viemos aqui para brincar.";
		next;
		mes "[Takehue]";
		mes "Se você está sendo perseguido por monstros, por favor relaxe.";
		mes "Monstros não podem vir aqui, então descanse um pouco.";
		close;
	}
}

// ------------------------------------------------------------------
ama_in01,22,111,0	script	Avó#ea_ama	4_F_JPNOBA,{
	if (event_amatsu == 4) {
		mes "[....]";
		mes "^FF6060Yelp, Yelp, um ser humano insensato denovo!";
		mes "O que você vai fazer para se livrar de mim!?^000000";
		next;
		mes "[....]";
		mes "^FF6060Parece que você aprendeu algo de algum lugar, mas isso não vai te prejudicar!! Yelp!^000000";
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
			mes "^FF6060Irei amaldiçoar a família Ishida que me fez isso, para sempre!";
			mes "É melhor tomar cuidado, humano!^000000";
			next;
			monster(strnpcinfo(NPC_MAP),22,111,"Nove-Caudas",NINE_TAIL,1);
			killmonsterall(strnpcinfo(NPC_MAP));
			event_amatsu = 5;
			changequest(8134,8135);
			getitem(Fox_Tail,1);
			mes "[....]";
			mes "^FF6060Yoshinaga não lhe causará infelicidade...^000000";
			mes "^FF0000Yaaaaaaaaaaaaap!!^000000";
			close;
		}
		mes "[....]";
		mes "^FF6060Yelp! Haha! Yelp! Hahaha!";
		mes "Você está tentando me expulsar deste corpo!?";
		mes "Shoo!! Yelp!^000000";
		close2;
		warp("amatsu",167,197);
		end;
	} else if (event_amatsu == 5) {
		mes "[Ishida Saoko]";
		mes "...Huh? Por que você está aqui...?";
		mes "*Urrmmm* Minha cabeça dói...";
		mes "Mas eu estou começando a me lembrar de tudo...";
		next;
		mes "[Ishida Saoko]";
		mes "Obrigado, viajante de terras distantes.";
		mes "Devo-lhe uma grande dívida... Muito obrigado...";
		next;
		mes "[Ishida Saoko]";
		mes "Vou dizer ao meu filho que você exorcisou a raposa...";
		mes "Obrigado...";
		next;
		mes "[Ishida Saoko]";
		mes "Eu deveria descansar um pouco.";
		mes "Minha cabeça dói, um jovem.....";
		mes "Vá para meu filho...";
		close;
	} else if (event_amatsu == 6) {
		mes "[Ishida Saoko]";
		mes "Ah, você...?";
		mes "Você é o únic"+(Sex == SEX_MALE ? "o":"a")+" que conseguiu exorcisar a raposa...";
		mes "Por favor, repouse em algum lugar...";
		next;
		mes "[Ishida Saoko]";
		mes "Quando eu penso que a razão de ter sido possuída pela raposa é culpa do meu filho.";
		mes "Eu o tornei um filho mal... Nossa";
		mes "Ele era um bom menino, quando ele era jovem.";
		mes "Eu não era rigoroso com ele...";
		next;
		mes "[Ishida Saoko]";
		mes "Há muito tempo atrás, esta cidade não era tão grande como é hoje.";
		mes "Não houve nenhum grande palácio como Toukoujyo.";
		mes "Então, um dia, meu filho trouxe grandes riquezas para o vilarejo.";
		mes "Ele nunca me disse como ele fez para conseguir essa fortuna...";
		next;
		mes "[Ishida Saoko]";
		mes "Ele construiu o palácio e ajudou os forasteiros a fazerem a maior cidade.";
		mes "Ele era perfeito até...";
		mes "Que começou a fazer coisas estranhas.";
		next;
		mes "[Ishida Saoko]";
		mes "Coisas... o que irritou Deus.";
		mes "Ele aprendeu a magia proibida, experiências realizadas no seu palácio.";
		mes "Monstros enjaulados, fez todos os tipos de coisas horríveis...";
		next;
		mes "[Ishida Saoko]";
		mes "Essa é a razão pela qual há monstros em Toukoujyo...";
		mes "Finalmente, a Ira de Deus foi desencadeada.";
		mes "Mesmo o Sacerdote no santuário não podia deixar de...";
		next;
		mes "[Ishida Saoko]";
		mes "Por fim, a raiva veio na minha direção...";
		mes "Parece que Deus tentou avisar o meu filho com a raposa.";
		mes "No entanto, o meu filho não irá parar.";
		next;
		mes "[Ishida Saoko]";
		mes "Se ele estiver bem, por favor pare o meu filho.";
		mes "Eu não tenho muito tempo.";
		mes "Eu não sei o que fazer...";
		mes "Por favor, salve esta pacata vila.";
		mes "Peço-lhe por favor...";
		mes "O que ele está realmente pensando...?";
		close;
	} else {
		mes "[....]";
		mes "^FF6060Yelp, Yelp, outro ser humano insensato!";
		mes "Yelp, Yelp, Quem! Humano!?";
		mes "O que você está fazendo!";
		mes "Shoo... Yelp! Yelp!^000000";
		next;
		mes "[....]";
		mes "^FF6060Eu estarei aqui até que a família Ishida morra!";
		mes "Não me pertube! Yelp!^000000";
		close2;
		warp("amatsu",167,197);
		end;
	}
}

// ------------------------------------------------------------------
ama_in02,170,62,4	script	Soldado#ea_ama	8_M_JPNSOLDIER,{
	mes "[Jiro]";
	mes "Sou Jiro, o administrador deste Palácio.";
	mes "O que posso fazer por você?";
	next;
	switch(select("Emita um Passe Imperial","Eu quero viver em Amatsu:Nada")) {
		case 1:
		if (event_amatsu == 6) {
			if (countitem(Lords_Passable_Ticket) > 0) {
				mes "[Jiro]";
				mes "Você já tem uma...";
				mes "Você não precisa ter duas delas.";
				close;
			}
			mes "[Jiro]";
			mes "Você perdeu seu Passe Imperial?";
			mes "É necessário uma taxa de 10,000 zeny para gera um novo Passe Imperial.";
			next;
			if (select("Gerar","Nos falamos mais tarde") == 1) {
				Zeny -= 10000;
				getitem(Lords_Passable_Ticket,1);
				mes "[Jiro]";
				mes "Aqui está, não o perca.";
				close;
			}
			mes "[Jiro]";
			mes "Certo, então...";
			mes "Fale comigo caso precise de ajuda.";
			close;
		}
		mes "[Guarda do Portão]";
		mes "O senhor anunciou que ele garante permissão de acesso livre aos visitantes de Rune-Midgard.";
		mes "Você não precisa me pedir um Passe Imperial.";
		close;
		case 2:
		mes "[Jiro]";
		mes "Isso é impossível. Você está livre para visitar qualquer lugar de Amatsu.";
		mes "Mas meu senhor não quer se preocupar com imigrações.";
		mes "Em vez disso, você pode ficar aqui o tempo que quiser.";
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
	mes "O que você está fazendo aqui?";
	mes "Não há nada de interessante aqui.";
	next;
	if (select("Isso é verdade","Abrir o portão") == 1) {
		mes "[Jyuro]";
		mes "Há muitas coisas melhores para se desfrutar na cidade. Divirta-se...";
		close;
	}
	if (event_amatsu == 6) {
		if (countitem(Lords_Passable_Ticket) > 0) {
			mes "[Jyuro]";
			mes "Você tem o passe...";
			mes "Você quer me enviar agora, ou precisa de mais alguma instrução?";
			next;
			if (select("Eu irei","Instrução, por favor") == 1) {
				mes "[Jyuro]";
				mes "Irei abrir o portão.";
				mes "Cuide-se...";
			} else {
				mes "[Jyuro]";
				mes "A área ao redor desse portão é protegida por alguma magia.";
				mes "Você pode ser morto ou se perder.";
				mes " ";
				next;
				mes "[Jyuro]";
				mes "Eu não posso dizer muito.";
				mes "Não vi todo o lugar, apenas dei uma olhada rápida ";
				mes " ";
				mes " ";
				next;
				mes "[Jyuro]";
				mes "Primeiro.....";
				mes "'Não confie no que você está vendo.'";
				mes "Eu não sei o que isso significa, mas acho que você não deve acreditar em tudo que passa diante dos seus olhos.";
				next;
				mes "[Jyuro]";
				mes "Segundo.....";
				mes "'Existem certas regras na magia'.";
				mes "Tudo tem uma razão para existir. A magia não é uma exceção. Provavelmente, você pode encontrar a resposta...";
				next;
				mes "[Jyuro]";
				mes "Bem, irei abrir esse portão.";
				mes "Cuide-se...";
			}
			close2;
			warp("ama_dun01",229,10);
			end;
		}
		mes "[Jyuro]";
		mes "Sinto muito.";
		mes "Você precisa de um Passe para entrar.";
		mes "Por favor, volte.";
		close;
	}
	mes "[Jyuro]";
	mes "O portão está falando?";
	mes "Um portão? No último andar do edifício??? Certamente, você deve se confundir.";
	emotion e_swt;
	next;
	if (countitem(Lords_Passable_Ticket) > 0) {
		if (select("Mostrar-lhe o bilhete","Cancelar") == 1) {
			mes "[Jyuro]";
			mes "O quê? Esse passe é...?";
			mes "Esse passe foi concediro pelo nosso senhor mas eu acho que foi emitido para a pessoa errada.";
			next;
			delitem(Lords_Passable_Ticket,1);
			mes "[Jyuro]";
			mes "Vou manter este bilhete porque foi emitido sem permissão.";
			mes "Isso é um aviso.";
			mes "Tenha cuidado.";
			close;
		}
		mes "[Jyuro]";
		mes "Há mais coisas para desfrutar na cidade. Divirta-se...";
		close;
	}
	mes "[Jyuro]";
	mes "Há mais coisas para desfrutar na cidade. Divirta-se...";
	close;
}

// ------------------------------------------------------------------
ama_dun01,229,7,0	script	Soldado#ea_ama3	8_M_JPNSOLDIER,{
	mes "[Jyuro]";
	mes "Você quer voltar?";
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
