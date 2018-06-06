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
| - Info: Instância do Santuário Selado.                            |
\*-----------------------------------------------------------------*/

monk_test,309,146,3	script	Frei Patrick#edq	4_M_OLDFRIAR,{
	cutin("ins_cata_pri_n",2);
	mes "[Frei Patrick]";
	mes "A paz do mundo jamais pode durar para sempre...";
	mes "As mãos do Mal estão chegando ao mundo novamente...";
	next;
	mes "[Frei Patrick]";
	mes "O que te leva a este lugar?";
	next;
	if (countitem(Bapho_Doll) > 0) {
		.@doll = 1;
		.@selection = select("Que lugar é este?","Eu quero entrar","Bafomé Amaldiçoado?","Cancelar");
	} else {
		.@selection = select("Que lugar é este?","Eu quero entrar","Cancelar");
	}
	switch (.@selection) {
		case 1:
		mes "[Frei Patrick]";
		mes "Huh... Você não sabe?";
		mes "Este é o Monastério de St. Capitolina onde os irmãos treinam e oram para virarem monjes.";
		next;
		mes "[Frei Patrick]";
		mes "E esse lugar é...";
		mes "Como eu posso falar...";
		mes "Sim. É o túmulo de um Demônio.";
		next;
		mes "[Frei Patrick]";
		mes "É o lugar onde o grande Demônio que demoliu esse mundo uma vez se encontra dormindo.";
		next;
		switch (select("Me conte mais","Terminar conversa")) {
			case 1:
			cutin("ins_cata_pri_n",2);
			mes "[Frei Patrick]";
			mes "Bafomé... é o nome do Demônio...";
			mes "Eu acho que você já tenha escutado o nome dele.";
			next;
			mes "[Frei Patrick]";
			mes "Vários homens bravos e irmãos treinaram nesse monastério...";
			next;
			mes "[Frei Patrick]";
			mes "Abaixo desse túmulo na sua frente...";
			mes "Bafomé se encontra selado.";
			next;
			mes "[Frei Patrick]";
			mes "Porém... Como foi dito.";
			mes "O Imperador Morroc está manipulando suas magias poderosas para afetar toda vida.";
			next;
			mes "[Frei Patrick]";
			mes "Bafomé também...";
			mes "Tem despertado e está se preparando para sua ressurreição.";
			mes "Dentro desse mundo, com o enfraquecimento do selo devido ao poder do Imperador Morroc...";
			next;
			mes "[Frei Patrick]";
			mes "Agora...";
			mes "Estou procurando por pessoas bravas o suficiente para selar Bafomé em seu santuário...";
			mes "Como nós fizemos muitos anos atrás...";
			next;
			mes "[Frei Patrick]";
			mes "Todos que lutam pelo bem, devem saber.";
			mes "Que o mal ameaça a conquistar esse mundo...";
			next;
			mes "[Frei Patrick]";
			mes "Treine mais e use suas habilidades para proteger o mundo da eminente presença do mal...";
			break;
			case 2:
			cutin("ins_cata_pri_n",2);
			mes "[Frei Patrick]";
			mes "Todos que lutam pelo bem, devem saber, que o mal ameaça conquistar esse mundo...";
			next;
			mes "[Frei Patrick]";
			mes "Treine mais e use suas habilidades para proteger o mundo da eminente presença do mal...";
			break;
		}
		break;
		case 2:
		if (BaseLevel >= 75) {
			.@party_id = getcharid(CHAR_ID_PARTY);
			mes "[Frei Patrick]";
			mes "Está certo que você irá ao santuário e selar Bafomé novamente?";
			next;
			.@ins_bapho_check = questprogress(3040,PLAYTIME);
			if (!.@ins_bapho_check) {
				if (getpartyleader(.@party_id,2) == getcharid(CHAR_ID_CHAR) && instance_check_party(.@party_id,4,75)) {
					mes "[Frei Patrick]";
					mes "O nome do grupo é "+getpartyname(.@party_id)+"...";
					mes "O nome do líder é "+strcharinfo(PC_NAME)+"...";
					.@instance = instance_create("Santuário Selado",.@party_id);
					if (.@instance < 0) {
						mes "Hum... Mais parece que temos um problema aqui...";
						mes "Irei checar rapidamente.";
						mes "Por-favor aguarde.";
					} else {
						for (.@i = 1; .@i <= 2; .@i++) {
							if (instance_attachmap(.@i+"@cata", .@instance) == "") {
								instance_destroy(.@instance);
								close;
							}
						}
						instance_set_timeout(7200,300,.@instance);
						instance_init(.@instance);
						mes "Ok... Irei ajustar o selo do santuário para você e seu grupo possam entrar..";
						next;
						mes "[Frei Patrick]";
						mes "Você verá um sinal quando o selo for destruído.";
						mes "Aguarde até o sinal aparecer...";
						next;
						mes "[Frei Patrick]";
						mes "Quando você ver o sinal, coloque suas mãos sobre o túmulo...";
						mes "E então você pode empurrá-lo.";
						next;
						mes "[Frei Patrick]";
						mes "Uma coisa que você deve lembrar é...";
						mes "Todos aqueles que entrarem no santuário serão amaldiçoados por Bafomé e não poderam entrar ou sair enquando estiverem amaldioçoados.";
						next;
						mes "[Frei Patrick]";
						mes "E mais uma coisa...";
						mes "Nessa área amaldiçoada, certas habilidades.";
						mes "Que são protegidas por uma força exterior.";
						mes "São proibidas pelo efeito do selo.";
						next;
						mes "[Frei Patrick]";
						mes "Por exemplo, habilidades como ^0000FFEscudo Mágico e Assumptio^000000...";
						mes "Então é melhor você estar preparado entes de entrar no santuário.";
					}
				} else {
					mes "[Frei Patrick]";
					mes "Humm...";
					mes "Eu reconheço usa coragem, porém...";
					mes "Não posso permitir qualquer um entrar nesse lugar.";
					mes "Eu só permito o líder do grupo a entrar primeiro.";
					next;
					mes "[Frei Patrick]";
					mes "Só então o resto do grupo pode entrar.";
					mes "Isto é uma regra deste monastério, por favor a entenda.";
				}
			} else if (.@ins_bapho_check == 1) {
				mes "[Frei Patrick]";
				mes "Parece que você entrou no santuário recentemente...";
				mes "Você não pode entrar novamente pois a Maldição de Bafomé ainda continua.";
				mes "A maldição de Bafomé só desaparece quando um certo período de tempo se passa.";
			} else if (.@ins_bapho_check == 2) {
				mes "[Frei Patrick]";
				mes "Umm... Parece que a Maldição de Bafomé se enfraqueceu.";
				mes "Eu posso retira-la agora.";
				next;
				mes "[Frei Patrick]";
				mes "Haaaaaaap...";
				mes "Hocus Pocus Wingardium Abracadabra!!!!!";
				next;
				if (questprogress(3040)) {erasequest(3040);}
				if (questprogress(3041)) {erasequest(3041);}
				mes "[Frei Patrick]";
				mes "Huu... Acabou.";
				mes "Agora que retirei a Maldição de Bafomé, você pode entrar novamente.";
			}
		} else {
			mes "[Frei Patrick]";
			mes "Hum... Você precisa treinar mais para entrar nesse lugar perigoso...";
			mes "Você tem que estar no mínimo no nível 75 para poder entrar aqui.";
			next;
			mes "[Frei Patrick]";
			mes "Treine mais e volte novamente.";
		}
		break;
		case 3:
		if (.@doll == 1) {
			mes "[Frei Patrick]";
			mes "O que é... esse boneco que está segurando?...";
			mes "Deixe me ver.";
			next;
			mes "[Frei Patrick]";
			mes "... ... ...";
			next;
			mes "[Frei Patrick]";
			mes "Correto...";
			mes "Posso sentir os sentimentos de Bafomé...";
			mes "O que eu farei com esse boneco?";
			next;
			mes "[Frei Patrick]";
			mes "É muito perigoso que alguém perca esse objeto...";
			mes "Conheço alguem que pode te ajudar...";
			mes "Deseja falar com ele?";
			next;
			mes "[Frei Patrick]";
			mes "Fale com ^0000FFRust Blackhand^000000 que está proximo a uma contrução do monastério...";
			mes "Ele pode fazer com que este boneco seja útil para você.";
			setquest(3042);
			break;
		}
		case 4:
		mes "[Frei Patrick]";
		mes "Todos que lutam pelo bem, devem saber, que o mal ameaça a conquistar esse mundo...";
		next;
		mes "[Frei Patrick]";
		mes "Treine mais e use suas habilidades para proteger o mundo da eminente presença do mal...";
		break;
	}
	close2;
	cutin("",255);
	end;
}

// ------------------------------------------------------------------
monk_test,306,151,3	script	Túmulo de Bafomé#edq	HIDDEN_NPC,{
	if (countitem(Token_Of_Apostle)) {delitem(Token_Of_Apostle,countitem(Token_Of_Apostle));}
	mes "Esse túmulo tem uma imagem de um grande demônio com enormes chifres.";
	mes "Ela desperta um sentimento ameaçador.";
	next;
	if (select("Tocar","Voltar") == 2) {close;}
	.@ins_bapho_check = questprogress(3040,PLAYTIME);
	if (!.@ins_bapho_check) {
		if (has_instance("1@cata") == "") {
			mes "É frio ao tocar.";
			mes "Mais nada acontece.";
			close;
		} else {
			mapannounce("monk_test","["+strcharinfo(PC_NAME)+"] membro do grupo ["+getpartyname(.@party_id)+"] entrou no Santuário Selado.",bc_map,"0x00ff99");
			setquest(3040);
			warp("1@cata",100,224);
			end;
		}
	} else if (.@ins_bapho_check == 1) {
		mes "[Frei Patrick]";
		mes "Parece que você entrou no santuário recentemente...";
		mes "Você não pode entrar novamente pois a Maldição de Bafomé ainda continua.";
		mes "A Maldição de Bafomé desparece após de um certo tempo após sua entrada.";
		close;
	} else if (.@ins_bapho_check == 2) {
		mes "[Frei Patrick]";
		mes "Humm... Parece que a maldição de Bafomé está enfraquecendo.";
		mes "Irei retirá-la completamente.";
		next;
		mes "[Frei Patrick]";
		mes "Haaaaaaap...";
		mes "Wingardium Leviosa Expecto Patronum !!!!!";
		specialeffect(EF_HOLYHIT, AREA, playerattached());
		if (questprogress(3040)) {erasequest(3040);}
		if (questprogress(3041)) {erasequest(3041);}
		next;
		mes "[Frei Patrick]";
		mes "Huu... Acabou.";
		mes "Agora que retirei todas as maldições sobre você.";
		mes "Pode entrar novamente.";
		close;
	}
}

// ------------------------------------------------------------------
prt_monk,261,91,3	script	Rust Blackhand#edq	4_M_DWARF,{
	.@new_maje = questprogress(3043);
	mes "[Rust Blackhand]";
	mes "Quem é você? O que deseja?";
	next;
	mes "[Rust Blackhand]";
	mes "Você não é um monje, o que quer de mim?";
	next;
	if (.@new_maje == 1) {
		mes "[Rust Blackhand]";
		mes "Você trouxe todos os materiais?";
		next;
		if (countitem(Bapho_Doll) && countitem(Magestic_Goat) && (countitem(Dark_Crystal) > 29) && (countitem(Dark_Debris) > 49) && (Zeny >= 990000)) {
			mes "[Rust Blackhand]";
			mes "kkk... Irei preparar os chifres.";
			mes "Tem como esperar um pouco?";
			next;
			mes "[Rust Blackhand]";
			mes "Humm...";
			mes "Faz tempo que vejo esses chifres...";
			mes "Deixe-me começar...";
			next;
			mes "...";
			next;
			mes "... ...";
			next;
			mes "... ... ...";
			next;
			delitem(Bapho_Doll,1);
			delitem(Magestic_Goat,1);
			delitem(Dark_Crystal,30);
			delitem(Dark_Debris,50);
			Zeny -= 990000;
			completequest(3043);
			getitem(L_Magestic_Goat,1);
			mes "[Rust Blackhand]";
			mes "Está pronto.";
			mes "Você já deve estar excitado.";
			mes "Eu entendo...";
			next;
			mes "[Rust Blackhand]";
			mes "Não aceito reclamações sobre meu serviço.";
			mes "Então vá...";
			close;
		} else {
			mes "[Rust Blackhand]";
			mes "Huu... Você não entendeu o que eu disse.";
			mes "Você não pode fazer nada com esses ingredientes.";
			next;
			mes "[Rust Blackhand]";
			mes "Irei falar sobre os materiais novamente.";
			mes "São eles:";
			next;
			mes "[Rust Blackhand]";
			mes "^0000FFBoneco de Bafomé Amaldiçoado,";
			mes "Chifres Magestosos,";
			mes "30 Cristais da Escuridão,";
			mes "50 Fragmentos da Escuridão^000000,";
			mes "e o mais importante, o custo da produção é de";
			mes "^0000FF 990000^000000 Zeny.";
			close;
		}
	} else if (!.@new_maje && countitem(Bapho_Doll) > 0) {
		switch (select("Boneco Amaldiçoado?","Terminar Conversa")) {
			case 1:
			mes "[Rust Blackhand]";
			mes "Como?... Hmmm...";
			mes "Você conseguiu o boneco?...";
			next;
			mes "[Rust Blackhand]";
			mes "Vamos ver... Foi o Patrick que te trouxe até aqui?";
			next;
			mes "[Rust Blackhand]";
			mes "Certo... Vou fazer que esse boneco seja algo de ultilidade.";
			mes "O que poderei fazer?";
			next;
			mes "[Rust Blackhand]";
			mes "Posso fazer fortes e largos chifres com toda a força de Bafomé contida nele.";
			next;
			mes "[Rust Blackhand]";
			mes "Seu nome é ^4d4dffChifres Magestosos Gigantes^000000.";
			mes "Os chifres Majestosos normais são nada comparados à esses.";
			next;
			mes "[Rust Blackhand]";
			mes "O Boneco de Bafomé Amaldiçoado é a peça mais importante...";
			mes "Poderei fazer isso se você quiser. Deseja que eu o faça?";
			next;
			switch (select("Quero sim","Não preciso disso!")) {
				case 1:
				mes "[Rust Blackhand]";
				mes "kkk... Sim, homens sabem o que fazem quando a oportunidade chega.";
				mes "Irei lhe falar os ingredientes.";
				mes "Não esqueça, e traga eles todos.";
				next;
				mes "[Rust Blackhand]";
				mes "^0000FFBoneco de Bafomé Amaldiçoado,";
				mes "Chifres Magestosos,";
				mes "30 Cristais da Escuridão,";
				mes "50 Fragmentos da Escuridão^000000,";
				mes "e o mais importante, o custo da produção é de";
				mes "^0000FF 990000^000000 Zeny.";
				next;
				mes "[Rust Blackhand]";
				mes "Você pode conseguir os chifres Majestosos dos Bafomés enfraquecidos no labirinto da floresta. E os cristais você consegue com as Sombras de Morroc.";
				next;
				mes "[Rust Blackhand]";
				mes "Estou certo que você poderá conseguir os ingredientes.";
				mes "Até porque você conseguiu selar o verdadeiro Bafomé.";
				mes "Não é? kkk...";
				next;
				mes "[Rust Blackhand]";
				mes "Você nunca saberá como é bom isso até conseguir um.";
				mes "Se você souber, vá e pegue os ingredientes.";
				if (questprogress(3042)) {erasequest(3042);}
				setquest(3043);
				close;
				case 2:
				mes "[Rust Blackhand]";
				mes "Huh... Não mesmo?";
				mes "Faça o que quiser...";
				mes "Você quer realmente perder essa oportunidade?";
				next;
				mes "[Rust Blackhand]";
				mes "Eu não ligo se esse boneco ameaça sua vida todo o tempo!";
				close;
			}
			case 2:
			mes "[Rust Blackhand]";
			mes "huh...?";
			close;
		}
	} else if (!.@new_maje && !countitem(Bapho_Doll)) {
		mes "[Rust Blackhand]";
		mes "Se não tiver nada a fazer, vá embora!";
		mes "Como você pode ver, eu só faço equipamentos para os irmãos do monastério.";
		close;
	} else if (.@new_maje == 2 && countitem(Bapho_Doll)) {
		switch (select("Boneco Amaldiçoado?","Terminar conversa")) {
			case 1:
			mes "[Rust Blackhand]";
			mes "Que?... Você denovo?";
			mes "O que faz nesse instante?";
			next;
			mes "[Rust Blackhand]";
			mes "Como assim?";
			mes "Você oncseguiu outro boneco do perverso demônio?";
			mes "Umm... Você é bem melhor do que eu pensava...";
			next;
			mes "[Rust Blackhand]";
			mes "Está certo...";
			mes "Irei lhe ajudar denovo.";
			next;
			mes "[Rust Blackhand]";
			mes "Se você quiser tranformar o seu boneco em num";
			mes "^4d4dffChifres Magestosos Gigantes^000000 novamente, eu poderei fazer outro.";
			next;
			mes "[Rust Blackhand]";
			mes "Irei lhe falar os ingredientes novamente.";
			mes "Então, você deseja fazer?";
			next;
			switch (select("Quero sim","Não preciso disso!")) {
				case 1:
				mes "[Rust Blackhand]";
				mes "kkk... Sim, homens sabem o que fazem quando a oportunidade chega.";
				mes "Irei lhe falar os ingredientes.";
				mes "Não esqueça, e traga eles todos.";
				next;
				mes "[Rust Blackhand]";
				mes "^0000FFBoneco de Bafomé Amaldiçoado,";
				mes "1 Chifres Magestosos,";
				mes "30 Cristais da Escuridão,";
				mes "50 Fragmentos da Escuridão^000000,";
				mes "e o mais importante, o custo da produção é de";
				mes "^0000FF 990000^000000 Zeny.";
				next;
				mes "[Rust Blackhand]";
				mes "Você pode conseguir os chifres Majestosos dos Bafomés enfraquecidos no labirinto da floresta. E os cristais você consegue com as Sombras de Morroc.";
				next;
				mes "[Rust Blackhand]";
				mes "Estou certo que você poderá conseguir os ingredientes até porque você conseguiu selar o verdadeiro Bafomé. Não é? kkk...";
				next;
				mes "[Rust Blackhand]";
				mes "Você nunca saberá como é bom isso até conseguir um.";
				mes "Se você souber, vá e pegue os ingredientes.";
				if (questprogress(3042)) {erasequest(3042);}
				if (!questprogress(3043)) {setquest(3043);}
				close;
				case 2:
				mes "[Rust Blackhand]";
				mes "Huh... Não mesmo?";
				mes "Faça o que quiser...";
				mes "Você quer realmente perder essa oportunidade?";
				next;
				mes "[Rust Blackhand]";
				mes "Eu não ligo se esse boneco ameaça sua vida todo o tempo!";
				close;
			}
			case 2:
			mes "[Rust Blackhand]";
			mes "Huh...?";
			close;
		}
	} else if (.@new_maje == 2 && !countitem(Bapho_Doll)) {
		mes "[Rust Blackhand]";
		mes "O está fazendo aqui?";
		mes "Se não quer os ^4d4dffChifres Magestosos Giganetes^000000, saia daqui";
		close;
	}
}

// ------------------------------------------------------------------
// - [Interior do Santuário]
// ------------------------------------------------------------------
1@cata,1,2,0	script	ins_baphomet_lotto	FAKE_NPC,{
	OnInstanceInit:
	.@ins = rand(1,13);
	for (.@i = 1; .@i <= 13; ++.@i) {
		disablenpc(instance_npcname("Túmulo#ss1F_"+.@i+((.@i == .@ins)?"T":"F")));
	}
	disablenpc(instance_npcname("ins_baphomet_lotto"));
	end;
}

// ------------------------------------------------------------------
1@cata,3,2,0	script	ins_baphomet_lotto2	FAKE_NPC,{
	OnEnable:
	for (.@i = 1; .@i <= 12; ++.@i)
		enablenpc(instance_npcname("Bobbing Tocha#"+.@i));
	end;
}

// ------------------------------------------------------------------
1@cata,4,2,0	script	ins_baphomet_lotto3	FAKE_NPC,{
	OnEnable:
	.@label$ = instance_npcname("ins_baphomet_lotto3")+"::OnMyMobDead";
	.@map$ = instance_mapname("1@cata");
	monster(.@map$,0,0,"Apóstolo de Bafomé",FLAME_SKULL,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",WRAITH_DEAD,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",FLAME_SKULL,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",WRAITH_DEAD,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",FLAME_SKULL,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",WRAITH_DEAD,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",FLAME_SKULL,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",KHALITZBURG,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",EVIL_DRUID,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",KHALITZBURG,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",EVIL_DRUID,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",KHALITZBURG,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",WRAITH_DEAD,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",EVIL_DRUID,1,.@label$);
	monster(.@map$,0,0,"Apóstolo de Bafomé",FLAME_SKULL,1,.@label$);
	end;

	OnDisable:
	killmonster(instance_mapname("1@cata"),instance_npcname("ins_baphomet_lotto3")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("1@cata");
	if (mobcount(.@map$,instance_npcname("ins_baphomet_lotto3")+"::OnMyMobDead") < 1) {
		mapannounce(.@map$, "Todos os Apóstolos de Bafomé estão mortos!",bc_map,"0x00ff99");
	}
	getitem(Token_Of_Apostle,1);
	end;
}

// ------------------------------------------------------------------
1@cata,141,221,0	script	Túmulo#ss	CLEAR_NPC,3,3,{
	.@party_id = getcharid(CHAR_ID_PARTY);
	if (`ins_baphomet == 0) {
		mes "O Túmulo está trêmulo...";
		next;
		mes "Ao tocá-lo, posso ouvir uma voz";
		next;
		specialeffect(EF_CONE, AREA, playerattached());
		mes "[Túmulo do Herói]";
		mes "Estava esperando que algum aventureiro forte como você voltasse...";
		next;
		while (true) {
			switch (select("Quem é você?","Esperando por mim?","Cancelar")) {
				case 1:
				mes "[Túmulo do Herói]";
				mes "Eu sou um dos aventureiros que tentaram parar o Bafomé.";
				mes "Agora, estou morto e só minha alma que me resta...";
				next;
				mes "[Túmulo do Herói]";
				mes "Como sabe...";
				mes "Não temos tempo suficiente.";
				mes "Não podem parar o Bafomé sozinhos.";
				mes "Seu poder continua forte durante décadas.";
				next;
				mes "[Túmulo do Herói]";
				mes "No passado, meu grupo e eu selamos o Bafomé no segundo andar e bloqueamos a entrada.";
				next;
				mes "[Túmulo do Herói]";
				mes "Mudei a essência da minha alma, para que eu possa permanecer neste mundo.";
				mes "Isso foi quando eu me tornei guardião deste túmulo.";
				next;
				break;
				case 2:
				mes "[Túmulo do Herói]";
				mes "O poder de Bafomé pode quebrar o selo que fizemos.";
				mes "Se eu não reativá-los...";
				mes "Ele irá finalmente renascer.";
				next;
				mes "[Túmulo do Herói]";
				mes "Para poder entrar, você deve substancializar minha alma.";
				mes "Vou abrir a porta e reativar os selos enfraquecidos.";
				mes "Depois que estiver substancializado.";
				next;
				mes "[Túmulo do Herói]";
				mes "Para isso você deve achar o meu corpo que deve estar dentro de algum desses Túmulos.";
				next;
				mes "[Túmulo do Herói]";
				mes "Se o ^0000FFlíder do grupo^000000 trouxer meu pingente.";
				mes "Minha alma será substancializada.";
				`ins_baphomet = 1;
				close;
				case 3:
				mes "Posso ouvir uma voz fraca.";
				close;
			}
		}
	} else if (`ins_baphomet == 1) {
		mes "[Túmulo do Herói]";
		mes "O poder de Bafomé pode quebrar o selo que fizemos.";
		mes "Se eu não reativá-los...";
		mes "Ele irá finalmente renascer.";
		next;
		mes "[Túmulo do Herói]";
		mes "Para poder entrar, você deve substancializar minha alma.";
		mes "Vou abrir a porta e reativar os selos enfraquecidos depois que estiver substancializado.";
		next;
		mes "[Túmulo do Herói]";
		mes "Para isso você deve achar o meu corpo que deve estar dentro de algum desses túmulos.";
		close;
	} else if ((`ins_baphomet == 2) && (getpartyleader(.@party_id,2) == getcharid(CHAR_ID_CHAR))) {
		mes "[Túmulo do Herói]";
		mes "Encontraram meu pingente?";
		next;
		if (countitem(Soul_Pendant) > 0) {
			specialeffect(EF_MAPPILLAR);
			mes "[Túmulo do Herói]";
			mes "Sim... É esse... Meu Pingente...";
			next;
			delitem(Soul_Pendant,1);
			enablenpc(instance_npcname("Alma do Herói#1F"));
			disablenpc(instance_npcname("Túmulo#ss"));
			mes "[Túmulo do Herói]";
			mes "Agora posso substancializar minha alma.";
			mes "Esperarei no altar de fogo no centro do mapa.";
			mes "Me encontre lá.";
			next;
			mapannounce(instance_mapname("1@cata"), "Alma do Herói : Esperarei no altar de fogo no centro do mapa.",bc_map,"0xFFFF00");
			mes "Posso ouvir uma voz fraca.";
			close;
		} else {
			mes "[Túmulo do Herói]";
			mes "Ainda está aqui?";
			mes "Traga meu Pingente o mais rápido possível.";
			next;
			mes "[Túmulo do Herói]";
			mes "Você pode encontrar meu corpo com meu pingente nesse mapa.";
			close;
		}
	} else {
		mes "[Túmulo do Herói]";
		mes "Eu quero falar com o ^0000FFlíder do grupo^000000. Outros, aguardem aqui.";
		close;
	}
	end;

	OnTouch:
	if (`ins_baphomet == 0) {
		mes "'Krrrr... Krrrr...'";
		next;
		mes "Eu posso sentir um sentimento estranho no túmulo.";
		mes "É como que alguém estivesse pedindo algo em silêncio...";
		close;
	}
	end;

	OnInstanceInit:
	`ins_baphomet = 0;
	end;
}

// ------------------------------------------------------------------
1@cata,176,119,4	script	Alma do Herói#1F	4_M_CHAMPSOUL,{
	.@party_id = getcharid(CHAR_ID_PARTY);
	cutin("ins_cata_champ_n",2);
	if (`ins_baphomet == 2) {
		mes "[Alma do Herói]";
		mes "Com sua ajuda, a minha alma pode ser substancializada.";
		mes "Eu quero falar, mais não temos tempo suficiente...";
		next;
		mes "[Alma do Herói]";
		mes "Posso ficar assim por uma hora.";
		mes "Para chegar ao altar principal do subterrâneo.";
		mes "Você deve me ajudar a realizar a cerimônia de abertura de cada selo.";
		next;
		mes "[Alma do Herói]";
		mes "Irei falar o que você deve fazer.";
		mes "Primeiro, pegue as ^0000FFEssências de Fogo^000000 das tochas dos túmulos...";
		next;
		mes "[Alma do Herói]";
		mes "Segundo, todos os membros que entrarem no subterrâneo devem levar um símbolo que é chamado Símbolo do Apóstolo.";
		next;
		while (true) {
			cutin("ins_cata_champ_n",2);
			switch (select("Essências de Fogo?","Símbolo do Apóstolo?","O que fazer?","Estou pronto!")) {
				case 1:
				++.@ins_baphomet_1f_1;
				mes "[Alma do Herói]";
				mes "Você pode ver as Tochas por aqui.";
				mes "Elas contém a essência de Thor, o deus do Trovão.";
				mes "Elas são herdadas de nossos antecessores para parar a escuridão de Bafomé...";
				next;
				mes "[Alma do Herói]";
				mes "Para abrir a ponte que leva ao subsolo é preciso ser purificado pelas ^0000FFEssências de Fogo^000000.";
				next;
				mes "[Alma do Herói]";
				mes "Uma coisa que você deve lembrar é que...";
				mes "Estas ^0000FFEssências de Fogo^000000 só podem ser recolhidas pelo herdeiro da Fé.";
				next;
				mes "[Alma do Herói]";
				mes "Somente o líder do grupo que pode recolher as ^0000FFEssências de Fogo^000000.";
				next;
				break;
				case 2:
				++.@ins_baphomet_1f_2;
				mes "[Alma do Herói]";
				mes "Naquele tempo, era impossível se livrar do demônio Bafomé por nós mesmos.";
				mes "Depois de numerosos heróis terem sacrificados suas vidas, nós conseguimos selar o Demônio nessa abadia.";
				next;
				mes "[Alma do Herói]";
				mes "No entanto, Bafomé nunca desistiu.";
				mes "Ele continua reforçado o seu poder trazendo nova a este santuário.";
				next;
				mes "[Alma do Herói]";
				mes "Alguns desses monstros têm poderes mágicos.";
				mes "Bafomé os chama de Apóstolos.";
				next;
				mes "[Alma do Herói]";
				mes "Nesse tempo, é impossivel combater o Bafomé sozinhos.";
				next;
				mes "[Alma do Herói]";
				mes "Entretando, Bafomé nunca cairá.";
				mes "Seu poder continua aumentando.";
				mes "Esse poder trouxe nova vida ao seu túmulo.";
				next;
				mes "[Alma do Herói]";
				mes "Alguns desses monstros possuem um grande poder.";
				mes "Bafomé os chamam de \"Apóstolos\".";
				next;
				mes "[Alma do Herói]";
				mes "Os Apóstolos se clonam para encher este túmulo de poder.";
				mes "Eles são os monstros de dentro dessas catacumbas.";
				next;
				mes "[Alma do Herói]";
				mes "Matem os Apóstolos.";
				mes "Somente os verdadeiros que derrubam o ^0000FFSímbolo do Apóstolo^000000...";
				next;
				break;
				case 3:
				++.@ins_baphomet_1f_3;
				if (getpartyleader(.@party_id,2) == getcharid(CHAR_ID_CHAR)) {
					mes "[Alma do Herói]";
					mes "Você parece ser o líder do grupo.";
					mes "Você precisa ter ^0000FF10 Essências de Fogo^000000 das tochas.";
					next;
					mes "[Alma do Herói]";
					mes "Agora irei cravar o símbolo que mostra que você é o herdeiro da fé.";
					mes "Saiba que, somente você pode carregas as Essências do Fogo.";
					next;
					specialeffect(EF_HOLYHIT, AREA, playerattached());
					mes "[Alma do Herói]";
					mes "Você deve carregar o ^0000FFSímbolo do Apóstolo^000000 também.";
					mes "Então prepare-se.";
					next;
					mes "[Alma do Herói]";
					mes "Me avise quando todos estiverem prontos que irei abrir a ponte selada.";
					next;
				} else {
					mes "[Alma do Herói]";
					mes "Esteja certo que o Líder do Grupo já escutou minhas explicações.";
					next;
					mes "[Alma do Herói]";
					mes "Matem os Apóstolos de Bafomé e peguem seu ^0000FFSímbolo do Apóstolo^000000.";
					next;
					mes "[Alma do Herói]";
					mes "É melhor matarem todos os Apóstolos pois é difícil saber qual é o certo.";
					next;
					mes "[Alma do Herói]";
					mes "Está pronto?";
					mes "Esteja certo que você escutou todas as minhas explicações antes de ir.";
					next;
				}
				break;
				case 4:
				if ((.@ins_baphomet_1f_1 > 0) && (.@ins_baphomet_1f_2 > 0) && (.@ins_baphomet_1f_3 > 0)) {
					cutin("ins_cata_champ_n",2);
					mes "[Alma do Herói]";
					mes "Está pronto?";
					mes "Irei abrir a ponte agora mesmo.";
					next;
					.@exitloop = 1;
				} else {
					cutin("ins_cata_champ_a",2);
					mes "[Alma do Herói]";
					mes "Parece ser difícil mas espero que sua bravura.";
					mes "E suas habilidades sejam o suficiente para isso.";
					next;
					mes "[Alma do Herói]";
					mes "Lembre-se, eu preciso que você traga para mim";
					mes "^FFAA0010 Essências de Fogo^000000";
					mes "encontradas nas tochas desse lugar e o";
					mes "^0000FFSímbolo do Apóstolo^000000";
					mes "dos Apóstolos de Bafomé.";
					next;
				}
				break;
			}
			if (.@exitloop) break;
		}
		if (getpartyleader(.@party_id,2) == getcharid(CHAR_ID_CHAR)) {
			mes "[Alma do Herói]";
			mes "Lembrando novamente, só posso ficar aqui por uma hora.";
			mes "Então devem finalizar o trabalho dentro desse tempo.";
			`ins_baphomet = 3;
			donpcevent(instance_npcname("ins_baphomet_1f_timer")+"::OnEnable");
			donpcevent(instance_npcname("ins_baphomet_lotto2")+"::OnEnable");
			donpcevent(instance_npcname("ins_baphomet_lotto3")+"::OnEnable");
		} else {
			mes "[Alma do Herói]";
			mes "Lembrando novamente, só posso ficar aqui por uma hora.";
			mes "Então devem finalizar o trabalho dentro desse tempo.";
		}
		close2;
		cutin("",255);
		end;
	} else if ((`ins_baphomet == 3) && (getpartyleader(.@party_id,2) == getcharid(CHAR_ID_CHAR))) {
		cutin("ins_cata_champ_n",2);
		mes "[Alma do Herói]";
		mes "Você pegou as 10 ^0000FFEssências de Fogo^000000";
		mes "E o ^0000FFSímbolo do Apóstolo^000000?";
		next;
		if ((countitem(Essence_Of_Fire) > 9) && (countitem(Token_Of_Apostle) > 0)) {
			delitem(Essence_Of_Fire,countitem(Essence_Of_Fire));
			`ins_baphomet = 4;
			mes "[Alma do Herói]";
			mes "Ok. Você fez seu trabalho.";
			mes "Agora cheque com seus companheiros se eles já terminaram.";
		} else {
			mes "[Alma do Herói]";
			mes "Não estão prontos ainda?";
			mes "Eu preciso que você traga para mim";
			mes "^FFAA0010 Essências de Fogo^000000";
			mes "encontradas nas tochas desse lugar e o";
			mes "^0000FFSímbolo do Apóstolo^000000";
			mes "dos Apóstolos de Bafomé.";
		}
		close2;
		cutin("",255);
		end;
	} else if (`ins_baphomet == 3) {
		cutin("ins_cata_champ_n",2);
		mes "[Alma do Herói]";
		mes "Você tem o ^0000FFSímbolo do Apóstolo^000000?";
		next;
		if (countitem(Token_Of_Apostle) > 0) {
			`ins_baphomet = 4;
			mes "[Alma do Herói]";
			mes "Ok. Você fez seu trabalho.";
			mes "Agora cheque com seus companheiros se eles já terminaram.";
		} else {
			mes "[Alma do Herói]";
			mes "Ainda não?";
			mes "Eu preciso do ^0000FFSímbolo do Apóstolo^000000 dos Apóstolos de Bafomé.";
		}
		close2;
		cutin("",255);
		end;
	} else if ((`ins_baphomet == 4) && (getpartyleader(.@party_id,2) == getcharid(CHAR_ID_CHAR))) {
		cutin "ins_cata_champ_n",2;
		mes "[Alma do Herói]";
		mes "Está pronto?";
		mes "Abri a ponte neste momento.";
		mes "Para passar pela ponte, você deve levar o ^0000FFSímbolo do Apóstolo^000000.";
		next;
		`ins_baphomet = 5;
		specialeffect(EF_TELEPORTATION);
		enablenpc(instance_npcname("ins_bapho_to_2f"));
		mes "[Alma do Herói]";
		mes "Agora já pode ir ao altar principal.";
		mes "Ele se encontra no sudeste do mapa.";
		next;
		mes "[Alma do Herói]";
		mes "A verdadeira batalha começa...";
		mes "Irei os serguir e encontrar alguma forma de ajudar.";
		next;
		mes "[Alma do Herói]";
		mes "Vão à frente, guerreiros.";
		cutin("",255);
		mapannounce(instance_mapname("1@cata"), "Alma do Herói : Agora já podem ir ao Altar Principal. Ele está localizado no Sudeste do mapa", bc_map, "0xFFFF00");
		close;
	} else if (`ins_baphomet == 4) {
		cutin("ins_cata_champ_n",2);
		mes "[Alma do Herói]";
		mes "Está pronto?";
		mes "Abri a ponte nesse momento.";
		mes "Para passar pela ponte, você deve levar o ^0000FFSímbolo do Apóstolo^000000.";
		next;
		mes "[Alma do Herói]";
		mes "Irei abrir a ponte quando o Líder do grupo estiver pronto.";
		cutin("",255);
		close;
	} else if (`ins_baphomet == 5) {
		cutin("ins_cata_champ_n",2);
		mes "[Alma do Herói]";
		mes "O que está fazendo?";
		mes "A entrada para o Altar está aberta, vá e lute!";
		mes "A entrada se encontra no sudeste do mapa.";
		cutin("",255);
		close;
	} else {
		cutin("ins_cata_champ_n",2);
		mes "[Alma do Herói]";
		mes "Não tenho nada a falar com você...";
		cutin("",255);
		close;
	}

	OnInstanceInit:
	disablenpc(instance_npcname("Alma do Herói#1F"));
	end;
}

// ------------------------------------------------------------------
// - Túmulos
-	script	Gravestone#ss1	FAKE_NPC,{
	if (`ins_baphomet == 1) {
		getitem(Soul_Pendant,1);
		`ins_baphomet = 2;
		mes "Um pequeno objeto está brilhando abaixo do antigo túmulo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu acho que é o pingente...";
		close;
	} else {
		mes "Posso sentir a tristeza vinda desse túmulo.";
		close;
	}
}
1@cata,86,214,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_1T	CLEAR_NPC
1@cata,200,209,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_2T	CLEAR_NPC
1@cata,230,195,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_3T	CLEAR_NPC
1@cata,118,182,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_4T	CLEAR_NPC
1@cata,193,182,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_5T	CLEAR_NPC
1@cata,253,156,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_6T	CLEAR_NPC
1@cata,88,154,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_7T	CLEAR_NPC
1@cata,127,116,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_8T	CLEAR_NPC
1@cata,90,98,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_9T	CLEAR_NPC
1@cata,188,84,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_10T	CLEAR_NPC
1@cata,244,42,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_11T	CLEAR_NPC
1@cata,127,32,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_12T	CLEAR_NPC
1@cata,267,30,0	duplicate(Gravestone#ss1)	Túmulo#ss1F_13T	CLEAR_NPC

-	script	Gravestone#ss2	FAKE_NPC,{
	mes "Posso sentir a tristeza vinda desse túmulo.";
	close;
}
1@cata,86,214,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_1F	CLEAR_NPC
1@cata,200,209,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_2F	CLEAR_NPC
1@cata,230,195,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_3F	CLEAR_NPC
1@cata,118,182,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_4F	CLEAR_NPC
1@cata,193,182,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_5F	CLEAR_NPC
1@cata,253,156,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_6F	CLEAR_NPC
1@cata,88,154,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_7F	CLEAR_NPC
1@cata,127,116,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_8F	CLEAR_NPC
1@cata,90,98,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_9F	CLEAR_NPC
1@cata,188,84,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_10F	CLEAR_NPC
1@cata,244,42,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_11F	CLEAR_NPC
1@cata,127,32,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_12F	CLEAR_NPC
1@cata,267,30,0	duplicate(Gravestone#ss2)	Túmulo#ss1F_13F	CLEAR_NPC

// ------------------------------------------------------------------
// - Tochas
-	script	BobbingTorch#SS	FAKE_NPC,{
	.@party_id = getcharid(CHAR_ID_PARTY);
	if (getpartyleader(.@party_id,2) == getcharid(CHAR_ID_CHAR)) {
		if ((`ins_baphomet == 3) && (countitem(Essence_Of_Fire) < 11)) {
			mes "Uma antiga tocha parece que pode queimar tudo que está a minha volta.";
			next;
			mes "Sua grande aparência e o calor de suas chamas me faz voltar...";
			mes "Porém tive coragem e estiquei o braço para segurá-la.";
			next;
			specialeffect(EF_HOLYHIT, AREA, playerattached());
			getitem(Essence_Of_Fire,1);
			mes "O símbolo do herdeiro brilha. Nisso um pequeno cristal cai da tocha.";
			disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
			close;
		} else if ((`ins_baphomet == 3) && (countitem(Essence_Of_Fire) > 10)) {
			mes "Você já tem 10 Essências de Fogo. Você não precisa mais pegar nenhuma.";
			close;
		} else {
			mes "Você não precisa mais pegar as Essências de Fogo.";
			close;
		}
	} else {
		mes "Uma antiga tocha parece que pode queimar tudo que está a minha volta.";
		next;
		mes "[Voz Misteriosa]";
		mes "Você não é o Herdeiro da Fé. Não coloque essas Essências nessas mãos imundas.";
		specialeffect(EF_FIRESPLASHHIT, AREA, playerattached());
		percentheal(-50,0);
		close;
	}

	OnInstanceInit:
	disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
	end;
}
1@cata,267,210,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#1	CLEAR_NPC
1@cata,85,182,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#2	CLEAR_NPC
1@cata,267,154,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#3	CLEAR_NPC
1@cata,157,139,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#4	CLEAR_NPC
1@cata,193,138,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#5	CLEAR_NPC
1@cata,193,102,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#6	CLEAR_NPC
1@cata,157,102,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#7	CLEAR_NPC
1@cata,113,112,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#8	CLEAR_NPC
1@cata,253,56,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#9	CLEAR_NPC
1@cata,239,56,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#10	CLEAR_NPC
1@cata,71,42,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#11	CLEAR_NPC
1@cata,155,14,0	duplicate(BobbingTorch#SS)	Bobbing Tocha#12	CLEAR_NPC

// ------------------------------------------------------------------
// - Portal para o Segundo Andar
1@cata,281,12,0	script	ins_bapho_to_2f	WARPNPC,1,1,{
	OnTouch:
	if (countitem(Token_Of_Apostle) > 0) {
		delitem(Token_Of_Apostle,countitem(Token_Of_Apostle));
		`ins_baphomet = 5;
		warp(instance_mapname("2@cata"),80,144);
		end;
	} else {
		mes "[Alma do Herói]";
		mes "Cadê seu Símbolo do Apóstolo?";
		mes "Eu disse que precisava dele para passar pela ponte.";
		close;
	}

	OnInstanceInit:
	disablenpc(instance_npcname("ins_bapho_to_2f"));
	end;
}

// ------------------------------------------------------------------
1@cata,1,1,0	script	ins_baphomet_1f_timer	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("ins_baphomet_1f_timer"));
	end;

	OnEnable:
	enablenpc(instance_npcname("ins_baphomet_1f_timer"));
	initnpctimer;
	end;

	OnDisable:
	disablenpc(instance_npcname("ins_baphomet_1f_timer"));
	stopnpctimer;
	end;

	OnTimer1800000:
	mapannounce(instance_mapname("1@cata"), "Alma do Herói : Não temos tempo suficiente. Apressem-se!",bc_map,"0xFFFF00");
	end;

	OnTimer2400000:
	mapannounce(instance_mapname("1@cata"), "Alma do Herói : Meu corpo está desaparecendo... Apressem-se!",bc_map,"0xFFFF00");
	end;

	OnTimer3000000:
	mapannounce(instance_mapname("1@cata"), "Alma do Herói : Tudo acabou... Não tem como prosseguirmos...",bc_map,"0xFFFF00");
	end;

	OnTimer3050000:
	mapannounce(instance_mapname("1@cata"), "Alma do Herói : We failed... However... We still have a chance. I hope you will train yourselves until the time comes.",bc_map,"0xFFFF00");
	end;

	OnTimer3100000:
	mapannounce(instance_mapname("1@cata"), "Falhamos... Entretanto... Ainda temos chances. Espero que treinem mais até a hora chegar.",bc_map,"0xFFFF00");
	end;

	OnTimer3500000:
	instance_warpall ("monk_test",310,150);
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
// - [Segundo Andar]
// ------------------------------------------------------------------
2@cata,80,144,0	script	ins_2f_enter	FAKE_NPC,3,3,{
	OnTouch:
	donpcevent(instance_npcname("ins_2f_enter_broad")+"::OnEnable");
	disablenpc(instance_npcname("ins_2f_enter"));
	end;
}

2@cata,1,1,0	script	ins_2f_enter_broad	FAKE_NPC,{
	OnInstanceInit:
	OnDisable:
	disablenpc(instance_npcname("ins_2f_enter_broad"));
	end;

	OnEnable:
	enablenpc(instance_npcname("ins_2f_enter_broad"));
	initnpctimer;
	end;

	OnTimer10000:
	mapannounce(instance_mapname("2@cata"), "Bafomé : Humanos... interferindo novamente...",bc_map,"0xdb7093");
	end;

	OnTimer13000:
	mapannounce(instance_mapname("2@cata"), "Apóstolo de Bafomé : Humanos! Humanos invadiram nosso santuário!",bc_map,"0xFFFF00");
	end;

	OnTimer16000:
	mapannounce(instance_mapname("2@cata"), "Apóstolo de Bafomé : Matem-nos! Não deixem parar a ressurreição de nosso mestre!",bc_map,"0xFFFF00");
	end;

	OnTimer18000:
	mapannounce(instance_mapname("2@cata"), "Apóstolo de Bafomé : Apressem-se em liberar os selos dos altares! O retorno de nosso mestre está sobre nós.",bc_map,"0xFFFF00");
	stopnpctimer;
	disablenpc(instance_npcname("ins_2f_enter_broad"));
	end;
}

// ------------------------------------------------------------------
2@cata,50,67,0	script	slave_left	FAKE_NPC,5,5,{
	OnTouch:
	.@map$ = instance_mapname("2@cata");
	mapannounce(.@map$, "Apóstolo de Bafomé : Matem os Humanos! Não os deixem enterromper a volta de nosso Mestre!",bc_map,"0xFFFF00");
	monster(.@map$,55,67,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,51,67,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,58,67,"Apóstolo de Bafomé",MINI_DEMON,1);
	monster(.@map$,53,67,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,54,67,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,55,67,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,56,67,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,58,66,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,56,66,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,60,66,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,59,66,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,54,66,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,55,66,"Apóstolo de Bafomé",MINI_DEMON,1);
	monster(.@map$,56,66,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,50,65,"Apóstolo de Bafomé",BANSHEE,1);
	monster(.@map$,61,65,"Apóstolo de Bafomé",MINI_DEMON,1);
	disablenpc(instance_npcname("slave_left"));
	end;
}

// ------------------------------------------------------------------
2@cata,109,67,0	script	slave_right	FAKE_NPC,5,5,{
	OnTouch:
	.@map$ = instance_mapname("2@cata");
	mapannounce(.@map$, "Apóstolo de Bafomé : Matem os Humanos! Não os deixem enterromper a volta de nosso Mestre!",bc_map,"0xFFFF00");
	monster(.@map$,105,67,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,104,67,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,107,67,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,106,67,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,102,67,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,103,67,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,103,67,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,109,66,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,108,66,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,101,66,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,106,66,"Apóstolo de Bafomé",MINI_DEMON,1);
	monster(.@map$,102,66,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,104,66,"Apóstolo de Bafomé",MINI_DEMON,1);
	monster(.@map$,103,66,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,109,65,"Apóstolo de Bafomé",BANSHEE,1);
	monster(.@map$,108,65,"Apóstolo de Bafomé",MINI_DEMON,1);
	disablenpc instance_npcname("slave_right");
	end;
}

// ------------------------------------------------------------------
2@cata,79,39,0	script	slave_down	FAKE_NPC,5,5,{
	OnTouch:
	.@map$ = instance_mapname("2@cata");
	mapannounce(.@map$, "Apóstolo de Bafomé : Apóstolo de Bafomé : Matem os Humanos! Não os deixem enterromper a volta de nosso Mestre!",bc_map,"0xFFFF00");
	monster(.@map$,78,41,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,79,42,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,78,46,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,81,41,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,81,42,"Apóstolo de Bafomé",FLAME_SKULL,1);
	monster(.@map$,79,43,"Apóstolo de Bafomé",WRAITH_DEAD,1);
	monster(.@map$,77,40,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,79,41,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,79,42,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,79,43,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,79,48,"Apóstolo de Bafomé",EVIL_DRUID,1);
	monster(.@map$,78,49,"Apóstolo de Bafomé",KHALITZBURG,1);
	monster(.@map$,78,41,"Apóstolo de Bafomé",MINI_DEMON,1);
	monster(.@map$,74,42,"Apóstolo de Bafomé",MINI_DEMON,1);
	monster(.@map$,72,48,"Apóstolo de Bafomé",BANSHEE,1);
	monster(.@map$,72,38,"Apóstolo de Bafomé",MINI_DEMON,1);
	disablenpc(instance_npcname("slave_down"));
	end;
}

// ------------------------------------------------------------------
-	script	MagicalSeal#SS	FAKE_NPC,{
	.@seal_check = questprogress(3041,PLAYTIME);
	if (.@seal_check == 1) {
		specialeffect(EF_SILENCEATTACK, AREA, playerattached());
		percentheal(-50,0);
		sc_start(Eff_Stone,30000,0);
		mes "Você utlizou suas forças no selo anterior.";
		mes "Parece que você ainda não recuperou toda sua força.";
		close;
	}
	if (.@seal_check == 2) {erasequest(3041);}
	specialeffect(EF_LEXDIVINA);
	disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
	.@map$ = instance_mapname("2@cata");
	if (strnpcinfo(NPC_NAME_HIDDEN) == "0") {areamobuseskill(.@map$,79,81,10,1929,"NPC_INVINCIBLEOFF",1,0,0,e_hlp,0);}
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "2") {areamobuseskill(.@map$,123,109,10,1929,"NPC_INVINCIBLEOFF",1,0,0,e_hlp,0);}
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "4") {areamobuseskill(.@map$,123,22,10,1929,"NPC_INVINCIBLEOFF",1,0,0,e_hlp,0);}
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "8") {areamobuseskill(.@map$,35,21,10,1929,"NPC_INVINCIBLEOFF",1,0,0,e_hlp,0);}
	else if (strnpcinfo(NPC_NAME_HIDDEN) == "10") {areamobuseskill(.@map$,35,109,10,1929,"NPC_INVINCIBLEOFF",1,0,0,e_hlp,0);}
	percentheal(-50,0);
	sc_start(Eff_Stone,20000,0);
	setquest(3041);
	mapannounce(.@map$, "O selo é ativado colocando o poder mágico sobre o altar.", bc_map, "0x87ceeb");
	mes "Eu posso sentir o poder voltando ao altar colocando seu poder mágico.";
	next;
	mes "Você não pode colocar o selo novamente durante 3 minutos pois perdeu seu SP com isso.";
	close;

	OnInstanceInit:
	disablenpc instance_npcname(strnpcinfo(NPC_NAME));
	end;
}
2@cata,79,81,0	duplicate(MagicalSeal#SS)	Selo Mágico#0	CLEAR_NPC
2@cata,123,109,0	duplicate(MagicalSeal#SS)	Selo Mágico#2	CLEAR_NPC
2@cata,123,22,0	duplicate(MagicalSeal#SS)	Selo Mágico#4	CLEAR_NPC
2@cata,35,21,0	duplicate(MagicalSeal#SS)	Selo Mágico#8	CLEAR_NPC
2@cata,35,109,0	duplicate(MagicalSeal#SS)	Selo Mágico#10	CLEAR_NPC

// ------------------------------------------------------------------
2@cata,79,65,0	script	Altar Principal#ss	CLEAR_NPC,{
	.@party_id = getcharid(CHAR_ID_PARTY);
	if ((`ins_baphomet == 5) && (getpartyleader(.@party_id,2) == getcharid(CHAR_ID_CHAR))) {
		mes "Um poder malígno, terrível demais para descrever, passa pelo altar irradiando uma cor violeta.";
		next;
		mes "Pergaminhos Mágicos piscam rapidamente, na tentativa de suprimir esse poder terrível.";
		next;
		mes "O Altar Principal treme furiosamente.";
		next;
		specialeffect(EF_METEORSTORM);
		specialeffect(EF_METEORSTORM);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Olhem! Algo... Algo está vindo.";
		`ins_baphomet = 6;
		donpcevent(instance_npcname("ins_2f_hero_broad")+"::OnEnable");
		disablenpc(instance_npcname("Altar Principal#ss"));
		close;
	} else {
		mes "Um poder malígno, terrível demais para descrever, passa pelo altar irradiando uma cor violeta.";
		next;
		mes "Pergaminhos Mágicos piscam rapidamente, na tentativa de suprimir esse poder terrível.";
		close;
	}
	end;
}

// ------------------------------------------------------------------
2@cata,80,63,4	script	Alma do Herói#2F	4_M_CHAMPSOUL,{
	cutin("ins_cata_champ_s",2);
	if (questprogress(3041)) {erasequest(3041);}
	mes "[Alma do Herói]";
	mes "Bom trablaho, meus descendentes...";
	mes "Vocês realizaram meu desejo que muitos não cumprem faz tempo.";
	next;
	mes "[Alma do Herói]";
	mes "Realmente aprecio isso.";
	mes "Suas almas finalmente podem descansar em paz...";
	next;
	mes "[Alma do Herói]";
	mes "A luta pela paz neste mundo nunca vai acabar.";
	mes "Mas ... o meu papel aqui finalmente chega ao fim, porque há bravos heróis como você.";
	next;
	switch (select("Leve-me ao monastério","Terminar conversa")) {
		case 1:
		mes "[Alma do Herói]";
		mes "Ok. Tirarei seu grupo daqui com segurança.";
		next;
		mes "[Alma do Herói]";
		mes "Quando sair, diga um oi ao Patrick.";
		cutin("",255);
		`ins_baphomet = 0;
		warp("monk_test",310,150);
		close;
		case 2:
		mes "[Alma do Herói]";
		mes "Ainda tem algo para fazer aqui?";
		mes "Quando estiver pronto para sair, fale comigo...";
		cutin("",255);
		close;
	}

	OnInstanceInit:
	disablenpc instance_npcname("Alma do Herói#2F");
	end;
}

// ------------------------------------------------------------------
2@cata,1,2,0	script	ins_2f_hero_broad	FAKE_NPC,{
	OnEnable:
	enablenpc(instance_npcname("ins_2f_hero_broad"));
	initnpctimer;
	end;

	OnDisable:
	disablenpc(instance_npcname("ins_2f_hero_broad"));
	end;

	OnTimer3000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Meu deus! O selo do Altar Principal está enfraquecendo!",bc_map,"0xFFFF00");
	end;

	OnTimer6000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Companheiros... Escutem com atenção o que irei dizer.",bc_map,"0xFFFF00");
	end;

	OnTimer9000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Os altares, que controlam o poder altar principal, estão localizados nos cantos Nordeste, Sudeste, Sudoeste e Noroeste deste quarto.",bc_map,"0xFFFF00");
	end;

	OnTimer12000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Encontre estes altares e ative os seus selos antes que Bafomé reviva.",bc_map,"0xFFFF00");
	end;

	OnTimer15000:
	mapannounce(instance_mapname("2@cata"), "Bafomé : Tarde demais, fracos... Agora, vocês irão sentir o desespero da morte!",bc_map,"0xdb7093");
	end;

	OnTimer17000:
	mapannounce(instance_mapname("2@cata"), "Bafomé : Ninguém pode me prejudicar aqui. Você será o meu primeiro sacrifício.",bc_map,"0xdb7093");
	donpcevent(instance_npcname("control_baphomet")+"::OnEnable");
	donpcevent(instance_npcname("ins_2f_hero_broad2")+"::OnEnable");
	stopnpctimer;
	disablenpc(instance_npcname("ins_2f_hero_broad"));
	end;
}

// ------------------------------------------------------------------
2@cata,3,3,0	script	control_baphomet	FAKE_NPC,{
	OnInstanceInit:
	OnDisable:
	disablenpc(instance_npcname("control_baphomet"));
	end;

	OnEnable:
	enablenpc(instance_npcname("control_baphomet"));
	donpcevent(instance_npcname("2f_callmon_pattern_c")+"::OnEnable");
	monster(instance_mapname("2@cata"),79,64,"Bafomé",BAPHOMET_I,1,instance_npcname("control_baphomet")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("2@cata");
	if (mobcount(.@map$,instance_npcname("control_baphomet")+"::OnMyMobDead") < 1) {
		`ins_baphomet = 7;
		erasequest(3041);
		mapannounce(.@map$, "Bafomé : Não! Nãoooo!Levarei isso como insulto, seus insetos!... Não!!...",bc_map,"0xdb7093");
		enablenpc(instance_npcname("Alma do Herói#2F"));
		disablenpc(instance_npcname("slave_down"));
		disablenpc(instance_npcname("slave_left"));
		disablenpc(instance_npcname("slave_right"));
		donpcevent(instance_npcname("ins_2f_hero_broad")+"::OnDisable");
		donpcevent(instance_npcname("ins_2f_hero_broad2")+"::OnDisable");
		donpcevent(instance_npcname("ins_2f_hero_pattern_c")+"::OnDisable");
		donpcevent(instance_npcname("2f_callmon_pattern_c")+"::OnDisable");
		donpcevent(instance_npcname("2f_callmon_pattern")+"::OnDisable");
		donpcevent(instance_npcname("ins_2f_hero_pattern")+"::OnDisable");
		donpcevent(instance_npcname("ins_2f_enter_broad")+"::OnDisable");
		donpcevent(instance_npcname("control_baphomet")+"::OnDisable");
		disablenpc(instance_npcname("control_baphomet"));
	}
	end;
}

// ------------------------------------------------------------------
2@cata,2,2,0	script	ins_2f_hero_broad2	FAKE_NPC,{
	OnInstanceInit:
	OnDisable:
	disablenpc( instance_npcname( "ins_2f_hero_broad2"));
	end;

	OnEnable:
	enablenpc( instance_npcname( "ins_2f_hero_broad2"));
	initnpctimer;
	end;

	OnTimer8000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Não se preocupem, o Bafomé ainda pode ser derrotado.", bc_map, "0xFFFF00");
	end;

	OnTimer11000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Vá para os alteres e ativem os selos.", bc_map, "0xFFFF00");
	end;

	OnTimer13000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Quando os selos se recuperarem, Bafomé ficará vulnerável.", bc_map, "0xFFFF00");
	end;

	OnTimer16000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Você deve atrair Bafomé aos altares não selados. Caso contrário, seu esforço será inútil.", bc_map, "0xFFFF00");
	end;

	OnTimer19000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Temos apenas 1 hora de parar Bafomé. Se o tempo passar, o poder dos selos será inútil.", bc_map, "0xFFFF00");
	end;

	OnTimer22000:
	mapannounce(instance_mapname("2@cata"), "Bafomé : É inútil. Faça mais selos. Eu vou esmagá-los. Nenhum de vocês vai sobreviver.", bc_map, "0xdb7093");
	end;

	OnTimer26000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : O poder mágico do selo central está se esgotando. Vá para o selo central e coloque o poder mágico.", bc_map, "0xFFFF00");
	enablenpc(instance_npcname("Selo Mágico#0"));
	disablenpc(instance_npcname("Selo Mágico#2"));
	disablenpc(instance_npcname("Selo Mágico#4"));
	disablenpc(instance_npcname("Selo Mágico#8"));
	disablenpc(instance_npcname("Selo Mágico#10"));
	donpcevent(instance_npcname("ins_2f_hero_pattern_c")+"::OnEnable");
	stopnpctimer;
	disablenpc(instance_npcname("ins_2f_hero_broad2"));
	end;
}

// ------------------------------------------------------------------
2@cata,4,1,0	script	2f_callmon_pattern_c	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("2f_callmon_pattern_c"));
	end;

	OnEnable:
	enablenpc(instance_npcname("2f_callmon_pattern_c"));
	initnpctimer;
	donpcevent(instance_npcname("2f_callmon_pattern_c")+"::OnGo");
	end;

	OnDisable:
	stopnpctimer;
	disablenpc(instance_npcname("2f_callmon_pattern_c"));
	end;

	OnGo:
	donpcevent(instance_npcname("2f_callmon_pattern")+"::OnEnable");
	end;

	OnTimer3600000:
	donpcevent(instance_npcname("2f_callmon_pattern_c")+"::OnDisable");
	end;
}

// ------------------------------------------------------------------
2@cata,4,2,0	script	2f_callmon_pattern	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("2f_callmon_pattern"));
	end;

	OnEnable:
	enablenpc(instance_npcname("2f_callmon_pattern"));
	stopnpctimer;
	initnpctimer;
	end;

	OnDisable:
	disablenpc(instance_npcname("2f_callmon_pattern"));
	stopnpctimer;
	end;

	OnTimer300000:
	enablenpc(instance_npcname("slave_down"));
	enablenpc(instance_npcname("slave_left"));
	enablenpc(instance_npcname("slave_right"));
	donpcevent(instance_npcname("2f_callmon_pattern_c")+"::OnGo");
	end;
}

// ------------------------------------------------------------------
2@cata,3,1,0	script	ins_2f_hero_pattern_c	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("ins_2f_hero_pattern_c"));
	end;

	OnEnable:
	enablenpc(instance_npcname("ins_2f_hero_pattern_c"));
	initnpctimer;
	donpcevent(instance_npcname("ins_2f_hero_pattern_c")+"::OnGo");
	end;

	OnGo:
	donpcevent instance_npcname("ins_2f_hero_pattern")+"::OnEnable";
	end;

	OnDisable:
	stopnpctimer;
	disablenpc(instance_npcname("Selo Mágico#0"));
	disablenpc(instance_npcname("Selo Mágico#2"));
	disablenpc(instance_npcname("Selo Mágico#4"));
	disablenpc(instance_npcname("Selo Mágico#8"));
	disablenpc(instance_npcname("Selo Mágico#10"));
	donpcevent(instance_npcname("ins_2f_hero_pattern")+"::OnDisable");
	disablenpc(instance_npcname("ins_2f_hero_pattern_c"));
	end;

	OnTimer3600000:
	mapannounce(instance_mapname("2@cata"), "Bafomé : krrrr... Agora você não pode me parar por causa de um selo. Basta esperar pela sua morte!", bc_map, "0xdb7093");
	end;

	OnTimer3605000:
	mapannounce(instance_mapname("2@cata"), "Alma do Herói : Você não pode mais parar o Bafomé com os selos. Tudo agora depende de Deus...", bc_map, "0xFFFF00");
	donpcevent(instance_npcname("ins_2f_hero_pattern_c")+"::OnDisable");
	end;
}

// ------------------------------------------------------------------
2@cata,3,2,0	script	ins_2f_hero_pattern	FAKE_NPC,{
	OnInstanceInit:
	disablenpc(instance_npcname("ins_2f_hero_pattern"));
	end;

	OnEnable:
	enablenpc(instance_npcname("ins_2f_hero_pattern"));
	initnpctimer;
	end;

	OnDisable:
	disablenpc(instance_npcname("ins_2f_hero_pattern"));
	stopnpctimer;
	end;

	OnTimer70000:
	switch (rand(1,5)) {
		case 1:
		mapannounce(instance_mapname("2@cata"), "Alma do Herói : Meu Deus! O poder controlado pelo altar principal está enfraquecendo!", bc_map, "0xFFFF00");
		enablenpc(instance_npcname("Selo Mágico#0"));
		disablenpc(instance_npcname("Selo Mágico#2"));
		disablenpc(instance_npcname("Selo Mágico#4"));
		disablenpc(instance_npcname("Selo Mágico#8"));
		disablenpc(instance_npcname("Selo Mágico#10"));
		break;
		case 2:
		mapannounce(instance_mapname("2@cata"), "Alma do Herói : O poder do altar das 2 horas está enfraquecendo. Vá para o altar e reative-o.", bc_map, "0xFFFF00");
		disablenpc(instance_npcname("Selo Mágico#0"));
		enablenpc(instance_npcname("Selo Mágico#2"));
		disablenpc(instance_npcname("Selo Mágico#4"));
		disablenpc(instance_npcname("Selo Mágico#8"));
		disablenpc(instance_npcname("Selo Mágico#10"));
		break;
		case 3:
		mapannounce(instance_mapname("2@cata"), "Alma do Herói : O poder do altar das 4 horas está enfraquecendo. Vá para o altar e reative-o.", bc_map, "0xFFFF00");
		disablenpc(instance_npcname("Selo Mágico#0"));
		disablenpc(instance_npcname("Selo Mágico#2"));
		enablenpc(instance_npcname("Selo Mágico#4"));
		disablenpc(instance_npcname("Selo Mágico#8"));
		disablenpc(instance_npcname("Selo Mágico#10"));
		break;
		case 4:
		mapannounce(instance_mapname("2@cata"), "Alma do Herói : O poder do altar das 8 horas está enfraquecendo. Vá para o altar e reative-o.", bc_map, "0xFFFF00");
		disablenpc(instance_npcname("Selo Mágico#0"));
		disablenpc(instance_npcname("Selo Mágico#2"));
		disablenpc(instance_npcname("Selo Mágico#4"));
		enablenpc(instance_npcname("Selo Mágico#8"));
		disablenpc(instance_npcname("Selo Mágico#10"));
		break;
		case 5:
		mapannounce(instance_mapname("2@cata"), "Alma do Herói : O poder do altar das 10 horas está enfraquecendo. Vá para o altar e reative-o.", bc_map, "0xFFFF00");
		disablenpc(instance_npcname("Selo Mágico#0"));
		disablenpc(instance_npcname("Selo Mágico#2"));
		disablenpc(instance_npcname("Selo Mágico#4"));
		disablenpc(instance_npcname("Selo Mágico#8"));
		enablenpc(instance_npcname("Selo Mágico#10"));
	}
	stopnpctimer;
	donpcevent(instance_npcname("ins_2f_hero_pattern_c")+"::OnGo");
	end;
}

// ------------------------------------------------------------------
1@cata,1,1,0	script	ins_1f_spawn_mobs	FAKE_NPC,{
	OnInstanceInit:
	.@map$ = instance_mapname("1@cata");
	monster(.@map$,0,0,"Zumbi Mestre",ZOMBIE_MASTER,10);
	monster(.@map$,0,0,"Aparição",WRAITH_DEAD,10);
	monster(.@map$,0,0,"Crânio Flamejante",FLAME_SKULL,10);
	monster(.@map$,0,0,"Esqueleto General",SKELETON_GENERAL,10);
	monster(.@map$,0,0,"Zumbi Mestre",ZOMBIE_MASTER,10);
	monster(.@map$,0,0,"Esqueleto General",SKELETON_GENERAL,10);
	monster(.@map$,0,0,"Crânio Flamejante",FLAME_SKULL,10);
	monster(.@map$,0,0,"Aparição",WRAITH_DEAD,10);
	monster(.@map$,0,0,"Aparição",WRAITH_DEAD,10);
	monster(.@map$,0,0,"Khalitzburg",KHALITZBURG,10);
	monster(.@map$,0,0,"Khalitzburg",KHALITZBURG,10);
	monster(.@map$,0,0,"Crânio Flamejante",FLAME_SKULL,10);
	monster(.@map$,0,0,"Crânio Flamejante",FLAME_SKULL,10);
	monster(.@map$,0,0,"Mímico Antigo",ANCIENT_MIMIC,10);
	monster(.@map$,0,0,"Zumbi Mestre",ZOMBIE_MASTER,10);
	monster(.@map$,0,0,"Mímico Antigo",ANCIENT_MIMIC,10);
	monster(.@map$,0,0,"Zumbi Mestre",ZOMBIE_MASTER,10);
	monster(.@map$,0,0,"Aparição",WRAITH_DEAD,10);
	monster(.@map$,0,0,"Esqueleto General",SKELETON_GENERAL,10);
	monster(.@map$,0,0,"Esqueleto General",SKELETON_GENERAL,10);
	monster(.@map$,0,0,"Xamã do Vento",WIND_GHOST,10);
	monster(.@map$,0,0,"Xamã do Vento",WIND_GHOST,10);
	monster(.@map$,0,0,"Xamã do Vento",WIND_GHOST,10);
	monster(.@map$,0,0,"Lude",LUDE,10);
	monster(.@map$,0,0,"Lude",LUDE,10);
	monster(.@map$,0,0,"Druida Malígno",EVIL_DRUID,10);
	monster(.@map$,0,0,"Druida Malígno",EVIL_DRUID,10);
	monster(.@map$,0,0,"Druida Malígno",EVIL_DRUID,10);
	monster(.@map$,0,0,"Banshee",BANSHEE,10);
	monster(.@map$,0,0,"Ilusão das Treva",DARK_ILLUSION,1);
	disablenpc(instance_npcname("ins_1f_spawn_mobs"));
	end;
}
