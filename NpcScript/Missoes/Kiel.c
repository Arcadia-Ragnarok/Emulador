/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de acesso a fábrica de robôs (Quest de Kiel)        |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
yuno_in01,35,179,4	script	Dono do Bar#kh	1_ETC_01,5,5,{
	if (!checkweight(Tavern_Wine,1)) {
		mes "[Vandt]";
		mes "Só um segundo!";
		mes "Você está carregando muitos itens no momento.";
		mes "É melhor você colocar suas coisas no armazen da Kafra ou você não será capaz de pegar nada novo...";
		close;
	}
	if (!KielHyreQuest) {
		mes "[Vandt]";
		mes "Olá, bem vind"+(Sex == SEX_MALE ? "o":"a")+" ao meu bar.";
		mes "Então, o que gostaria de tomar?";
		next;
		switch (select("Cerveja, por favor","Um coquetel, por favor","Soju, por favor","Nada")) {
			case 1:
			mes "[Vandt]";
			mes "Certo, deixe-me pegar um copo de cerveja para você";
			mes "Aqui está, esta é a cerveja espacial Schwaltz.";
			next;
			mes "^3355FF*Gulp gulp gulp*^000000";
			percentheal(5,-5);
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Ahhh, isso é realmente bom!";
			mes "Realmente acerta lá embaixo!!";
			close;
			case 2:
			mes "[Vandt]";
			mes "Me desculpe, mas tenho de entregar todos os ingredientes do nosso coquetel à outros fregueses.";
			mes "Talvez eu tenha o suficiente para fazer-lhe algo na próxima vez?";
			close;
			case 3:
			mes "[Vandt]";
			mes "S-soju? Desculpe, mas não servimos isso aqui.";
			mes "É um muita coisa de machão num drink para mim...";
			close;
			case 4:
			mes "[Vandt]";
			mes "Certamente, leve o tempo que quiser, relaxa, e peça algo quando estiver pronto.";
			close;
		}
	} else if (KielHyreQuest == 1) {
		mes "[Vandt]";
		mes "Olá, bem vind"+(Sex == SEX_MALE ? "o":"a")+" ao meu bar.";
		mes "Então, o que gostaria de tomar?";
		next;
		switch (select("Cerveja, por favor","Um coquetel, por favor","Soju, por favor","Você parece preocupado?","Cancelar")) {
			case 1:
			mes "[Vandt]";
			mes "Certo, deixe-me pegar um copo de cerveja para você";
			mes "Aqui está, esta é a cerveja espacial Schwaltz.";
			next;
			mes "^3355FF*Gulp gulp gulp*^000000";
			percentheal(5, -5);
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Ahhh, isso é realmente bom!";
			mes "Realmente acerta lá embaixo!!";
			close;
			case 2:
			mes "[Vandt]";
			mes "Me desculpe, mas tenho de entregar todos os ingredientes do nosso coquetel à outros fregueses.";
			mes "Talvez eu tenha o suficiente para fazer-lhe algo na próxima vez?";
			close;
			case 3:
			mes "[Vandt]";
			mes "S-soju? Desculpe, mas não servimos isso aqui.";
			mes "É um muita coisa de machão num drink para mim...";
			close;
			case 4:
			mes "[Vandt]";
			mes "Oh, você por acaso ouviu?";
			mes "Desculpe, é que um dos meus empregados sofreu um acidente e se machucou muito.";
			mes "Então não tenho ninguém que possa entregar essa mercadoria.";
			next;
			mes "[Vandt]";
			mes "Eu tenho um pedido urgente que preciso enviar para a Academia de Kiel Hyre.";
			mes "Mas não consigo encontrar alguém disponível para esse tipo de trabalho temporário.";
			next;
			switch (select("Sinto por saber disso","Quer que eu te ajude?")) {
				case 1:
				mes "[Vandt]";
				mes "Bem, com certeza irei pensar em alguma coisa.";
				mes "Você conhece alguém que esteja interessado em algum trabalho meio período?";
				close;
				case 2:
				mes "[Vandt]";
				mes "Mesmo? Que ótimo!";
				mes "Mas antes, acho que é justo lhe dizer que esse serviço pode não ser tão simples quanto você pensa.";
				mes "Espero que você complete a entrega não importa o que aconteça.";
				next;
				switch (select("Claro, eu farei","Espere, deixe-me pensar...")) {
					case 1:
					mes "[Vandt]";
					mes "Estou contente de ouvir isso.";
					mes "Bem, então, por favor leve essa garrafa de Vinho Para Culinária para Senhora.";
					mes "^ff0000Lecollane^000000 na academia de Kiel Hyre.";
					mes "Lhe pagarei assim que você termine o serviço, okay?";
					getitem(Tavern_Wine,1);
					KielHyreQuest = 2;
					close;
					case 2:
					mes "[Vandt]";
					mes "Certamente.";
					mes "Eu preciso fazer isso logo, então se você não pode fazer.";
					mes "Mas conhece alguém capaz, responsável que possa então por favor avise-o sobre minha situação.";
					close;
				}
			}
			case 5:
			mes "[Vandt]";
			mes "Certamente, leve o tempo que quiser, relaxa, e peça algo quando estiver pronto.";
			close;
		}
	} else if ((KielHyreQuest >= 2) && (KielHyreQuest < 6)) {
		mes "[Vandt]";
		mes "Por favor entreque aquela garrafa de vilho que lhe dei para Senhora.";
		mes "^ff0000Lecollane^000000, que deve estar dentro da Academia de Kiel Hyre.";
		mes "Rápido e leve a ela antes que ela possa reclamar sobre a entrega.";
		close;
	} else if (KielHyreQuest == 6) {
		if (!countitem(Tavern_Wine)) {
			mes "[Vandt]";
			mes "Oh, você voltou.";
			mes "Obrigado por fazer aquela entrega.";
			mes "Só me dá um um instante ,então eu posso pagar seu zeny, okay?";
			next;
			select("Eu preciso de mais vinho...");
			mes "[Vandt]";
			mes "Oh, você precisa entregar";
			mes "outra garrafa? Certo,";
			mes "deixe-me olhar por aqui, e";
			mes "lhe darei o vinho";
			mes "e seu pagamento.";
			next;
			mes "^3355FFRummage Rummage^000000";
			mes "^3355FFRummage Rummage^000000";
			next;
			mes "[Vandt]";
			mes "Aqui está!";
			mes "Muitíssimo obrigado";
			mes "por me ajudar";
			getitem(Tavern_Wine,1);
			Zeny += 1000;
			close;
		} else {
			mes "[Vandt]";
			mes "Ei, muitíssimo obrigado por ter me ajudado de última hora.";
			mes "Eu sabia que tinha pedido bem em cima da hora, mas você acabou enviar um salvador de vida!";
			mes "Eu realmente apreciei isso!";
			close;
		}
	} else {
		mes "[Vandt]";
		mes "Você é um bom trabalhador, você sabe disso?";
		mes "Confiável, responsável, disposto a ajudar os outros e proativo também!";
		mes "Acho que você vai longe na vida, garoto, eu realmente.";
		close;
	}

	OnTouch:
	if (!KielHyreQuest) {
		mes "[Vandt]";
		mes "Arrrggghhh...";
		mes "Isso não pode ser bom...";
		mes "Isso não é nada bom!";
		mes "O que eu posso fazer?";
		KielHyreQuest = 1;
		close;
	}
}

// ------------------------------------------------------------------
yuno,217,114,6	script	Garotinha#kh	4W_KID,{
	if (KielHyreQuest < 6) {
		mes "[Cezu]"; 
		mes "Torrada Crocante, Fresca!";
		mes "Se você quiser alguma, venha e compre algumas torradaaaaasss";
		close;
	} else if (KielHyreQuest == 6) {
		if (!KHToastGirlEnd) {
			mes "[Cezu]"; 
			mes "Torrada Crocante, Fresca!";
			mes "Se você quiser alguma, venha e compre algumas torradaaaaasss!";
			mes "Hi hi Você quer comprar algumas torradas deliciosas?";
			next;
			switch (select("Estou aqui por Elly","Não, obrigado")) {
				case 1:
				mes "[Cezu]"; 
				mes "Oh, Entendo.";
				mes "Elly deve ter desperdiçado outro lote de ingredientes novamente.";
				mes "bem, ela é uma freguesa regular, então eu realmente quero ajudar.";
				mes "Mas não posso fazer nada mesmo.";
				next;
				mes "[Cezu]"; 
				mes "Veja, eu simplesmente fiquei sem ingredientes também!";
				mes "Mas eu não posso mesmo sair para buscar mais.";
				mes "E se pessoas precisarem comprar torradas?";
				mes "Ei, você pode me ajudar?";
				next;
				mes "[Cezu]"; 
				mes "você poderia pegar por favor alguma farinha e ovos para mim no ^3355FFMoinho de Lighthalzen^000000.";
				mes "Quando você voltar eu posso dividir os ingredientes e você pode entregar algum para Elly.";
				next;
				mes "[Cezu]"; 
				mes "Eu sei que estou basicamente fazendo você fazer tudo por sua conta, mas por favor tente entender que minhas mãos estão atadas.";
				mes "N-Não me pergunte porque, elas simplesmente estão!";
				KHToastGirlEnd = 1;
				close;
				case 2:
				mes "[Cezu]";
				mes "Okay okay";
				mes "Por favor volte novamente!";
				close;
			}
		} else if (KHToastGirlEnd == 1) {
			mes "[Cezu]";
			mes "Você poderia ir por favor ao Moinho de Lighthalzen e dizer-lhes que Cezu precisa de muita farinha e muitos ovos!";
			mes "Então, traga tudo para mim o mais rápido que puder.";
			close;
		} else if (KHToastGirlEnd == 2) {
			mes "[Cezu]";
			mes "Hey, você voltou com os ingredientes!";
			mes "Muitíssimo obrigada eu realmente precisava deles!";
			mes "Agora por favor leve essa farinha e esses ovos para Elly, e envie lembranças. Até mais";
			delitem(Delivery_Box,1);
			getitem(Delivery_Box,1);
			KHToastGirlEnd = 3;
			close;
		}
	}
	else if (KielHyreQuest > 6) {
		KHToastGirlEnd = 0;
	}
	mes "[Cezu]";
	mes "Quente , fresca e crocaaaaannnnteeee torrada!";
	mes "Venham peguem alguma!";
	close;
}

// ------------------------------------------------------------------
lighthalzen,366,299,4	script	Dono do Moinho#kh	1_ETC_01,{
	if (!checkweight(Delivery_Box,1)) {
		mes "[Mills]";
		mes "Hey, você está carregando muitas coisas com você agora.";
		mes "Ponha sua tralha no Armazen da Kafra se estiver esperando que eu lhe dê alguma coisa.";
		mes "É por isso que você veio aqui ao moinho, não foi?";
		close;
	} else if (!KHToastGirlEnd) {
		mes "[Mills]";
		mes "Ei, que você que?";
		mes "Estou muito ocupado agora então, se importa de voltar mais tarde?";
		mes "Então conversaremos.";
		close;
	} else if (KHToastGirlEnd == 1) {
		mes "[Mills]";
		mes "Ei, que cê qué?";
		mes "Você simplesmente me pegou em boa hora.";
		mes "Mas se você precisa de algo, é melhor cuspir rápido, antes que as coisas fiquem agitadas de novo.";
		next;
		switch (select("Estou aqui por Cezu","......")) {
			case 1:
			mes "[Mills]";
			mes "Oh, Cezu da barraca de torradas?";
			mes "Tenho tudo que aquela garota precisa bem aqui.";
			mes "Tem ovos dentro, então tenha muito cuidado com isso.";
			mes "Está pronto prá você...";
			next;
			mes "[Mills]";
			mes "A garota é uma dos meus clientes regulares então você não tem de me pagar ou fazer nenhuma missão extra prá mim.";
			mes "Eu sei como outras pessoas tratam vocês aventureiros.";
			mes "Bem até mais.";
			getitem(Delivery_Box,1);
			KHToastGirlEnd = 2;
			close;
			case 2:
			mes "[Mills]";
			mes "......";
			mes "Hm, se você precisa de algo, simplesmente faça, eu acho.";
			mes "Cutz, Cutz onde você está?";
			mes "É melhor você não estar enrolando!";
			close;
		}
	} else {
		mes "[Mills]";
		mes "Aquele Cutz é um pirralho tão preguiçoso.";
		mes "O cara pensa que pode perambular por aí quando ele está em cima da hora...!";
		mes "Ah bem, ele sabe que eu posso achar um assistente melhor.";
		mes "Ele vai aprender...";
		close;
	}
}

// ------------------------------------------------------------------
yuno_fild08,158,194,6	script	Segurança#kh1::KHAGuard	4_M_EIN_SOLDIER,{
	if ((KielHyreQuest < 2) || (KielHyreQuest > 31)) {
		mes "[Segurança]";
		mes "Desculpe, mas você não está associado à essa instituição.";
		mes "Portanto você não está autorizado a entrar na ^FF0000Academia Kiel Hyre^000000.";
		mes "Por favor vá embora se você não tiver horário marcado com a Staff.";
		close;
	} else if (KielHyreQuest == 2) {
		mes "[Segurança]";
		mes "Desculpe, mas você não está associado à essa instituição.";
		mes "Portanto você não está autorizado a entrar na ^FF0000Academia Kiel Hyre^000000.";
		mes "Por favor vá embora se você não tiver horário marcado com a Staff.";
		next;
		switch (select("Estou aqui para uma entrega","......")) {
			case 1:
			mes "[Segurança]";
			mes "Você está aqui para entregar algo?";
			mes "Simplesmente me dê o ^FF0000nome^000000 do recipiente seguido pelo ^FF0000item^000000 a ser entregue, e eu irei verificar antes de lhe deixar entrar.";
			next;
			input(.@KHDelivery$);
			if (.@KHDelivery$ != "Lecollane") {
				mes "[Segurança]";
				mes "Você veio entregar algum vinho para... para quem?";
				mes "Qual era o nome?";
				mes "Eu...Eu não acho que tenhamos alguém na academia chamado "+@KHDelivery$+"";
				close;
			}
			input(.@KHDelivery$);
			if (.@KHDelivery$ != "Vinho de Culinária") {
				mes "[Segurança]";
				mes "Então você está aqui para fazer uma entrega à Sra. Lecollane?";
				mes "O que você trouxe para ela?";
				mes "Algum ^3355FF"+@KHDelivery$+"^000000?";
				next;
				mes "[Segurança]";
				mes "Deixe-me bipá-la antes, e checar para ter certeza de que ela está esperando você.";
				mes "Deixe-me ver agora...";
				next;
				mes "......";
				mes ".........";
				mes "............";
				next;
				mes "[Segurança]";
				mes "Huh. Sra. Lecollane está esperando uma entrega.";
				mes "Mas não o item que você disse que trouxe para ela.";
				mes "Você deveria checar para ver se não houve alguma confusão...";
				close;
			}
			mes "[Segurança]";
			mes "Muito bem....";
			mes "Então você está aqui para entregar uma garrafa de vinho para a Sra. Lecollane?";
			mes "Deixe-me bipá-la e confirmar isso rapidamente.";
			next;
			mes "......";
			mes ".........";
			mes "............";
			next;
			mes "[Segurança]";
			mes "Tudo parece certo.";
			mes "Sra. Lecollane está esperando você.";
			mes "Acho que você pode entrar.";
			close2;
			warp("kh_school",71,155);
			end;
			case 2:
			mes "[Segurança]";
			mes "Se você não tiver um agendamento, então não fique vadiando em frente da academia!";
			close;
		}
	} else if (KielHyreQuest < 32) {
		mes "[Segurança]";
		mes "Oh, você tinha outros negócios dentro da academia?";
		mes "Eu lembro de você de antes, então não deve haver nenhum problema em deixar você voltar lá dentro...";
		close2;
		warp("kh_school",71,155);
		end;
	}
}
yuno_fild08,158,183,7	duplicate(KHAGuard)	Segurança#kh2	4_M_EIN_SOLDIER

// ------------------------------------------------------------------
kh_school,176,60,4	script	Senhorita#kh	4W_F_01,{
	if (KielHyreQuest < 2) {
		mes "[Srs. Lecollane]";
		mes "Algum problema?";
		mes "Pessoas de fora não são permitidas a vir aqui, por favor saia.";
		close;
	} else if (KielHyreQuest == 2) {
		if (!checkweight(Tavern_Wine,1)) {
			mes "[Srs. Lecollane]";
			mes "Hey, você está carregando muitas coisas com você agora.";
			mes "Ponha sua tralha no Armazen da Kafra se estiver esperando que eu lhe dê alguma coisa.";
			mes "É por isso que você veio aqui ao moinho, não foi?";
			close;
		}
		mes "[Sra. Lecollane]";
		mes "Oh, Olá. Ah!";
		mes "você veio para trazer meu vinho?";
		mes "O segurança chamou e mencionou que você estava vindo.";
		next;
		switch (select("Sim, é isso mesmo!","Er, d-desculpe!")) {
			case 1:
			mes "[Sra. Lecollane]";
			mes "Bem, você veio um pouquinho mais tarde do que eu imaginava, mas acho que não adianta nada.";
			mes "Acho que a espera simplesmente alegrou minha antecipação por essa garrafa de vi...";
			next;
			mes "^3355FF*Cling! Crrrack!*^000000";
			next;
			mes "[Sra. Lecollane]";
			mes "Elly?";
			mes "Elly você quebrou algo novamente?!";
			mes "Você tem de ter mais cuidado!";
			mes "Se você não terminar de cozinhar aqueles biscoitos até o fim do dia, suas notas semestrais irão sofrer!";
			next;
			mes "[Elly]";
			mes "M-Mas eu só...";
			next;
			mes "[Mrs. Lecollane]";
			mes "^FF0000Elly^000000!!";
			next;
			mes "[Elly]";
			mes "......";
			mes "Sim, Sra. Lecollane.";
			next;
			mes "[Sra. Lecollane]";
			mes "*Ahem* Com licença.";
			mes "Você poderia deixar o vinho ali?";
			mes "Você pode ir agora, e por favor não fique vagando desnecessáriamente pela academia.";
			delitem(Tavern_Wine,1);
			KielHyreQuest = 4;
			close;
			case 2:
			mes "[Sra. Lecollane]";
			mes "Hm...?";
			mes "Acho que devo estar enganada.";
			mes "Me desculpe, Achei que você fosse outra pessoa.";
			close;
		}
	} else {
		mes "[Mrs Lecollane]";
		mes "*Suspiro*";
		mes "Bem, nosso negócios está completo, então você poderia por favor deixar o campus assim que puder?";
		mes "Não acredito que nosso futuro está nas mãos dessas garotas...";
		close;
	}
}

// ------------------------------------------------------------------
kh_school,179,39,0	script	Estudante Bonita#kh	4_F_KHELLY,{
	if (!checkweight(Spawn,200)) {
		mes "[Elly]";
		mes "^3355FF- Espere!!";
		mes "Você está carregando muitos itens e etá incapaz de aceitar mais nenhum.";
		mes "Por favor abra algum espaço no seu inventario antes de retornar^000000.";
		close;
	} else if (KielHyreQuest < 4) {
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "W-wah! Oh...!";
		mes "*Phew*";
		mes "Essa foi por pouco, eu quase os derrubei novamente!";
		mes "Por quê eu tenho tanta dificuldade em manusear ingredientes?";
	} else if (KielHyreQuest == 4) {
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "Oh não, o que eu devo fazer?";
		mes "*Suspiro*";
		mes "O-o quê eu vou fazer?";
		mes "*sniff*";
		next;
		switch (select("O que aconteceu?","......")) {
			case 1:
			mes "[Elly]";
			mes "Eu...Eu tenho de terminar de assar essa leva de biscoitos até o fim do dia.";
			mes "Mas então eu derrubei todos os ingredientes no chão.";
			mes "Eu não sei como eu posso assar aqueles biscoitos agora...";
			next;
			switch (select("O que posso fazer para ajudar-lhe?","Oh, Sinto muito")) {
				case 1:
				cutin("kh_elly02",2);
				mes "[Elly]";
				mes "O que foi...?";
				mes "Você realmente me ajudará?";
				mes "Isso é maravilhoso!";
				mes "Obrigada!";
				mes "Muitíssimo obrigada!";
				next;
				break;
				case 2:
				mes "[Elly]";
				mes "O que, você não vai para essa escola, você vai?";
				mes "V-Você é um daqueles aventureiros, certo?";
				next;
				select("Sim, está correto");
				mes "Escuta, eu acredito que você provavelmente tem seus próprios planos.";
				mes "Mas não acha que você pode me ajudar com esse enorme problema que eu tenho?";
				next;
				switch (select("Aceito","Recuso")) {
					case 1:
					cutin("kh_elly02",2);
					mes "Que maravilhoso!";
					mes "Obrigada!";
					mes "Obrigada mesmo!";
					mes "Era para eu terminar de assar esse lote de biscoitos logo, mas eu derrubei todos os ingredientes...";
					next;
					break;
					case 2:
					mes "["+strcharinfo(CHAR_NAME)+"]";
					mes "Vou cair fora daqui.";
					next;
					cutin("kh_elly04",2);
					mes "E-Espere...!";
					mes "Volte, você n-não...!";
					mes "Eu realmente preciso de uma ajuda!";
					emotion(e_sob);
					close2;
					cutin("",255);
					end;
				}
			}
			cutin("kh_elly01",2);
			mes "[Elly]";
			mes "Bem, acho que a única maneira de eu assar esses biscoitos é conseguir alguns ingredientes novos.";
			mes "Desculpe eu ser um peso, mas se você não se oferecesse para me ajudar, então eu não teria a quem pedir!";
			next;
			cutin("kh_elly04",2);
			mes "[Elly]";
			mes "Você não entende o quão importante é de eu assar esses biscoitos...";
			mes "Se eu não terminar essa tarefa, então a Sra. Crank vai me reprovar por todo o semestre!";
			next;
			cutin("kh_elly01",2);
			mes "[Elly]";
			mes "Okay, eu preciso me acalmar.";
			mes "Acho que posso fazer isso com sua ajuda.";
			mes "Você poderia me fazer esse enorme favor e me trazer todos esses ingredientes?";
			next;
			mes "[Elly]";
			mes "^3355FF1 Vinho de Culinária";
			mes "7 Leites";
			mes "5 Cacaos";
			mes "2 Queijos";
			mes "1 Ovo^000000, e";
			mes "^3355FF1 Saco de Farinha^000000.";
			next;
			mes "[Elly]";
			mes "Vejamos...";
			mes "Você pode conseguir o vinho no bar em Juno, Cacaos caçando Yoyos, e pode pegar a farinha e ovos da garota que tem uma barraca de torradas em Juno.";
			next;
			mes "[Elly]";
			mes "Boa sorte em pegar tudo, e espero que você volte logo com esses ingredientes de biscoitos o mais rápido que puder.";
			KielHyreQuest = 6;
			break;
			case 2:
			mes "[Elly]";
			mes "*Suspiro*...";
			break;
		}
	} else if (KielHyreQuest == 6) {
		if ((countitem(Milk) < 7) || (countitem(Cheese) < 2) || (countitem(Cacao) < 5) || (countitem(Tavern_Wine) < 1) || (countitem(Delivery_Box) < 1)) {
			mes "[Elly]";
			mes "Deixe-me ver, você gostaria que eu lhe lembrasse quais ingredientes eu preciso?";
			mes "Por favor traga essas coisas o mais rápido que puder para eu assar rapidamente esses biscoitos";
			next;
			mes "[Elly]";
			mes "^3355FF1 Vinho de Culinária";
			mes "7 Leites";
			mes "5 Cacaos";
			mes "2 Queijos";
			mes "1 Ovo^000000, e";
			mes "^3355FF1 Saco de Farinha^000000.";
			next;
			mes "[Elly]";
			mes "Vejamos...";
			mes "Você pode pegar o vinho no bar em Juno, Cacaos caçando Yoyos, e vocÊ pode pegar farinha e ovos da garota que tem uma barraca de torradas em Juno.";
			close2;
			cutin("",255);
			end;
		} else {
			cutin("kh_elly02",2);
			mes "[Elly]";
			mes "Finalmente eu tenho tudo que eu preciso!";
			mes "Isso é ótimo!";
			mes "Oh, você poderia por favor aguardar um instante enquanto eu asso esses biscoitos?";
			mes "Não deve demorar muito, então aguenta mais um pouco.";
			delitem(Milk,7);
			delitem(Cheese,2);
			delitem(Cacao,5);
			delitem(Tavern_Wine,1);
			delitem(Delivery_Box,1);
			KielHyreQuest = 8;
			KHPubMasterEnd = 0;
			KHToastGirlEnd = 0;
			emotion(e_ho);
			close2;
			cutin("",255);
			end;
		}
	} else if (KielHyreQuest == 8) {
		mes "[Elly]";
		mes "Tadanh! Consegui!";
		mes "Estão finalmente prontos!";
		mes "''Biscoitos Especiais da Elly''";
		mes "Eu gostaria que você pegasse alguns como agradecimento por ter me ajudado";
		next;
		mes "[Elly]";
		mes "Desculpe, mas eu estava tão preocupada em assar esses biscoitos que eu nem perguntei pelo seu nome.";
		mes "Eu sou ^FF0000Elly^000000.";
		mes "Qual o seu nome?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "É ^3355FF"+strcharinfo(CHAR_NAME)+"^000000.";
		next;
		cutin("kh_elly02",2);
		mes "[Elly]";
		mes strcharinfo(CHAR_NAME)+"?";
		mes "...que nome! É maravilhoso!";
		getitem(Well_Baked_Cookie,5);
		KielHyreQuest = 10;
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 10) {
		cutin("kh_elly01",2);
		mes "[Elly]";
		mes "Desculpe, mas eu tenho outro favor para lhe pedir se você não se importar em me ajudar novamente.";
		mes "Não se preocupe, você não precisa se apressar tanto como fez da outra vez.";
		next;
		switch (select("O que você precisa?","Desculpe, mas estou muito ocupado...")) {
			case 1:
			mes "[Elly]";
			mes "Sabe como você me ajudou a assar esses biscoitos?";
			mes "É a primeira vez que fui capaz de fazer sem queimá-los!";
			mes "Sei que meu avô ficaria orgulhoso de mim!";
			next;
			mes "[Elly]";
			mes "Eu realmente quero que meu avô experimente esses biscoitos que eu assei.";
			mes "Mas os biscoitos já estarão estragados na hora que eu puder sair do campus.";
			mes "Você entregaria esses biscoitos pro meu avô prá mim?";
			next;
			switch (select("Claro","Agora não")) {
				case 1:
				cutin("kh_elly02",2);
				mes "[Elly]";
				mes "Oh,"+strcharinfo(CHAR_NAME)+"!";
				mes "Muitíssimo obrigada, eu sabia que você entenderia!";
				mes "Voce poderia por favor levar esses biscoitos para ele na ^FF0000Cabana de Kiel Hyre^000000?";
				next;
				mes "[Elly]";
				mes "Ah, sim!";
				mes "Eles são realmente cuidadosos sobre visitantes e mantendo estranhos fora da propriedade.";
				mes "Mas se você mencionar meu nome, eles lhe deixarão entrar.";
				mes "Certo então, até mais";
				KielHyreQuest = 12;
				close2;
				cutin("",255);
				end;
				case 2:
				cutin("kh_elly03",2);
				mes "[Elly]";
				mes "Oh, um...";
				mes "okay, Desculpe se lhe aborreci...";
				close2;
				cutin("",255);
				end;
			}
			break;
			case 2:
			cutin("kh_elly03",2);
			mes "[Elly]";
			mes "Oh, um...";
			mes "Desculpe se lhe aborreci...";
			close2;
			cutin("",255);
			end;
		}
	} else if (KielHyreQuest == 12) {
		mes "[Elly]";
		mes "Oh, você não sabe onde encontrar a cabana de Kiel Hyre?";
		mes "É bem ao norte dessa academia.";
		mes "Por favor entregue meus biscoitos para meu avô, e diga a ele que tenho muitas saudades.";
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 14) {
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "Hm? avô não está em casa?";
		mes "Que estranho, ele não mencionou nada sobre nenhuma viagem de negócios.";
		mes "Achei que estaria em casa o dia todo...";
		next;
		cutin("kh_elly04",2);
		mes "[Elly]";
		mes "você voltaria na cabana dele mais uma vez?";
		mes "Aqui, você pode usar essa chave da cabana.";
		mes "Assim, você pode simplesmente entrar e falar com ele.";
		getitem(Villa_Spare_Key,1);
		KielHyreQuest = 16;
		close2;
		cutin("",255);
		end;
	} else if ((KielHyreQuest > 14) && (KielHyreQuest < 20)) {
		cutin("kh_elly01",2);
		mes "[Elly]";
		mes "Isso é tão estranho...";
		mes "Achei que meu avô disse que ficaria em casa o dia todo...";
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 20) {
		mes "[Elly]";
		mes "Hmmm...?";
		mes "O que é isso, uma carta para mim?";
		next;
		mes "^3355FFElly abriu o envelope e começou a ler a carta^000000";
		next;
		mes "Querida Elly";
		mes " ";
		mes "Tenho algo a conversar com meu filho Kiehl, então estou partindo para encontrá-lo.";
		mes "Se não ouvir falar de mim em 7 dias após eu lhe ter escrito é possível que eu esteja em perigo.";
		mes "Não confie em ninguém na Academia, Elly.";
		mes "Deixei algo para você no Escritório.";
		next;
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "O quê?";
		mes "Oh não, fazem dez dias desde que ele escreveu essa carta!";
		mes "Ah, então isso quer dizer que ele está em perigo?!";
		mes "Oh não, o que devo fazer?";
		delitem(Kyll_Hire_Letter,1);
		KielHyreQuest = 22;
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 22) {
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "......";
		mes ".........";
		mes "............";
		next;
		switch (select("Sobre seu Avô","Me fale sobre Kiehl","O que há com essa academia?")) {
			case 1:
			mes "[Elly]";
			mes "Oh! Meu avó é fundador de Kiel Hyre, e o Diretor Executivo da fundação Kiel Hyre.";
			mes "Ele parece fechado e de coração frio, mas na verdade é muito bom!";
			next;
			mes "[Elly]";
			mes "Nós não temos relação de sangue, mas ele tem cuidado de mim desde que eu perdi meus pais.";
			mes "Vovô, onde você está?";
			mes "Estou ficando preocupada!";
			close2;
			cutin("",255);
			end;
			case 2:
			mes "[Elly]";
			mes "Kiehl?";
			mes "É o filho";
			mes "do meu avô...";
			mes "Eu não o conheço muito bem, e somente o vi uma vez num evento da academia.";
			next;
			mes "[Elly]";
			mes "Mmm, ele é um rapaz bonitão, com pele clara, cabelos brancos, e seu frio, feroz olhar.";
			mes "Muitas de minhas colegas de classe veneram Kiehl porque ele é também um gênio dos negócios";
			next;
			mes "[Elly]";
			mes "É estranho pensar...";
			mes "Não tenho nem idéia porque meu avô e Kiehl não saem juntos.";
			mes "Ambos são realmente bons no que eles fazem.";
			close2;
			cutin("",255);
			end;
			case 3:
			mes "[Elly]";
			mes "Bem, eu sei que a segurança aqui é bem rígida, mas porque tudo aqui é tão luxuoso e caro.";
			next;
			mes "[Elly]";
			mes "Também temos um currículo bem especial onde você aprende mais sobre o que você quer.";
			mes "Pessoalmente, eu quero me tornar uma mulher de grande carreira, como ^3355FFSenhorita Allysia^000000.";
			next;
			mes "[Elly]";
			mes "Esse lugar certamente não é como outras escolas.";
			mes "Você já sabe disso, tudo é feito para se encaixar às necessidades dos estudantes.";
			next;
			mes "[Elly]";
			mes "Recentemente, achava?";
			mes "Algo realmente estranho tem acontecido.";
			mes "Todas minhas colegas de classe têm medo de sair sozinhas por aí.";
			next;
			cutin("kh_elly02",2);
			mes "[Elly]";
			mes "Mas eu ficarei bem!";
			mes "Você estará lá para me resgatar do perigo certo,"+strcharinfo(CHAR_NAME)+"?";
			next;
			switch (select("Quem é Senhorita Allysia?","Incidentes estranhos?")) {
				case 1:
				mes "[Elly]";
				mes "Oh, Senhorita Allysia é a secretária do vovô.";
				mes "Ela é tão linda e meu avô realmente confia tudo à ela!";
				close2;
				cutin("",255);
				end;
				case 2:
				cutin("kh_elly04",2);
				mes "[Elly]";
				mes "Bem,"+strcharinfo(CHAR_NAME)+"...";
				mes "Eu não deveria dizer à ninguém fora da escola, mas posso confiar em você!";
				mes "Estamos assombrados por um fantasma!";
				next;
				mes "[Elly]";
				mes "Sei que parece doido, mas esse fantasma vaga pelo campus, e amaldiçoa suas vítimas, deixando-as tão fracas e sem vida.";
				mes "Aconteceu com minha colega de quarto, biquine.";
				mes "É como se ela fosse uma estátua.";
				next;
				mes "[Elly]";
				mes "Eu escapei para a enfermaria para vê-la e ela...";
				mes "Ela não podia fazer nada!";
				mes "O que aconteceria se o fantasma decidisse me amaldiçoar?!";
				next;
				cutin("kh_elly02",2);
				mes "[Elly]";
				mes "Sabe o quê...?";
				mes "Se eu for amaldiçoada por aquele fantasma, simplesmente grite ''^FF0000ACORDE, ELLY!^000000''";
				mes "Que vai me acordar com certeza!";
				KielHyreQuest = 24;
				close2;
				cutin("",255);
				end;
			}
		}
	} else if (KielHyreQuest >= 24 && KielHyreQuest <= 26) {
		cutin("kh_elly04",2);
		mes "[Elly]";
		mes "Arg, Estou numa má situação!";
		mes "Tenho de terminar meu";
		mes "dever de casa antes do combinado!";
		mes "Sim, tenho de ir ver";
		mes "a Sra. Lecollane agora.";
		next;
		mes "[Elly]";
		mes "Diga,"+strcharinfo(CHAR_NAME)+",";
		mes "se estiver tudo be, você poderia";
		mes "descobrir o que meu";
		mes "avô deixou para mim no";
		mes "^FF0000depósito da cabana^000000?";
		mes "Você é o único que posso confiar!";
		next;
		mes "[Elly]";
		mes "De qualquer forma, te vejo mais tarde";
		mes "ao anoitecer. Por favor venha";
		mes "ao meu ^FF0000dormitório^000000. Um, os";
		mes "dormitórios são na igreja bem";
		mes "atrás da academia, okay?";
		next;
		mes "[Elly]";
		mes "Meu quarto é nos fundos,";
		mes "e é no ^FF0000Segundo Andar^000000";
		mes "^FF0000no lado esquerdo^000000. Por favor use";
		mes "uma escada para subir, okay?";
		mes "Deixarei minha janela aberta";
		mes "para você, então venha, okay?";
		next;
		mes "[Elly]";
		mes "Rápido, rápido, a";
		mes "professora está vindo!";
		KielHyreQuest = 26;
		close2;
		cutin("",255);
		end;
	} else {
		mes "[Elly]";
		mes "Rápido, rápido, a professora está vindo!";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
yuno_fild08,69,185,0	script	Janela#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 30) {
		mes "^3355FFEsse deve ser o quarto de Elly.";
		mes "Parece que não há ninguém lá dentro então provavelmente ela ainda não voltou.";
		mes "Por enquanto você poderia tentar encontrar o que o avô dela deixou para ela no escritóro da cabana deles^000000.";
		close;
	}
	else if ((KielHyreQuest >= 30) && (KielHyreQuest <= 45)) {
		mes "^3355FFEssa janela um pouco aberta deve levar ao quarto de Elly.";
		mes "Ainda que ela tenha lhe pedido para encontrar uma escada e entrar pela janela dela, você provavelmente não vai achar nenhuma.";
		mes "Você pode ser capaz de subir por aquele cano de água^000000.";
		next;
		switch (select("Subir pelo cano de água","Encontrar outra maneira")) {
			case 1:
			if (rand(1,3) == 2) {
				mes "^3355FFVocê subiu pelo cano de água e se esgueirou no quarto de Elly com sucesso^000000.";
				close2;
				warp("kh_school",185,185);
				end;
			} else {
				mes "^3355FFVocê tentou subir no cano de água, mas acabou falhando e batendo sua cabeça^000000.";
				percentheal(-10,0);
				close;
			}
			case 2:
			mes "^3355FFDeve haver alguma outra maneira de entrar no quarto de Elly.";
			mes "Além de subindo por esse cano de água.^000000.";
			close;
		}
	} else {
		mes "^3355FFVocê não consegue subir até a janela aberta^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_school,178,180,4	script	Elly#kh	4_F_KHELLY,{
	if (!checkweight(Spawn,200)) {
		mes "^3355FF- Espere!!";
		mes "Você está carregando muitos itens e etá incapaz de aceitar mais nenhum.";
		mes "Por favor abra algum espaço no seu inventario antes de retornar^000000.";
		close;
	} else if (KielHyreQuest < 30) {
		mes "[Elly]";
		mes "Oh!";
		mes "Quem é você, como chegou aqui?";
		mes "Por favor saia";
		close2;
		percentheal(-99,0);
		warp("yuno_fild08",100,100);
		end;
	} else if (KielHyreQuest < 32) {
		mes "[Elly]";
		mes "......";
		mes ".........";
		mes "............";
		close;
	} else if (KielHyreQuest == 32) {
		mes "[Elly]";
		mes "......";
		mes ".........";
		mes "............";
		next;
		mes "^3355FFElly parece ter sido amaldiçoada e está completamente imóvel e sem vida.";
		mes "Você tem de tentar algo, mas o quê^000000?";
		next;
		switch (select("Acordá-la sacodindo-a","Acordá-la gritando","Ignorar")) {
			case 1:
			mes "^3355FFVocê pega Elly pelos ombros.";
			mes "E tenta fazer com que ela responda com uma sacodida violenta de todo o corpo dela^000000.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Elly? Elly? não!";
			mes "Volte para nós!";
			next;
			mes "^3355FFElly não está respondendo..^000000.";
			close;
			case 2:
			input(.@KHInput$);
			if (.@KHInput$ == "Acorde Elly!") {
				mes "[Elly]";
				mes ".............";
				next;
				mes "^3355FFAssim que você disse aquelas palavras, uma ^000000Pequena Chave Dourada e um ^000000Broche^3355FF caíram das mãos de Elly.";
				mes "Parece que ela acordou mas somente por um instante^000000.";
				getitem(Golden_Key,1);
				getitem(Kiel_Button,1);
				KielHyreQuest = 34;
				close;
			} else {
				mes "[Elly]";
				mes "......";
				mes ".........";
				mes "............";
				next;
				mes "^3355FFElly não está respondendo..^000000.";
				close;
			}
			case 3:
			mes "^3355FFTudo bem.";
			mes "Mas cedo ou tarde, você deve tentar quebrar a maldição jogada em Elly^000000.";
			close;
		}
	} else if (KielHyreQuest == 34) {
		if (!countitem(Iron_Box)) {
			mes "^3355FFTalvez a chave dourada destranque algo no escritório.";
			mes "Vamos dar uma olhada^000000.";
			close;
		} else {
			mes "^3355FFParece que a chave dourada de Elly cabe na fechadura em uma Caixa Cinza que você achou dentro.";
			mes "Da cabana em Kiel Hyre^000000.";
			next;
			mes "^3355FFVocê conseguiu abrir a Caixa cinza, com a Chave Dourada e encontrou um Cartão de Acesso Azul.";
			mes "Junto com um bilhete dobrado dentro da Caixa Cinza.";
			mes "Você rapidamente lê o conteúdo do bilhete^000000.";
			next;
			mes "Querida Elly,";
			mes "Kiehl finalmente quebrou o tabu e tentou transformar você em algo horrível.";
			mes " ";
			mes "Quando você ler isso, minha vida provavelmente está em perigo.";
			mes "Até onde viverei, dependerá de você.";
			mes " ";
			mes "Você já vai descobrir se você encontrar Puppet, mas quero lhe dizer eu mesmo.";
			mes "Você não é humana.";
			mes "Você descobrirá os detalhes se você entrar na fábrica usando a entrada perto da sepultura próxima da igreja.";
			mes "Então quero que você encontre Allysia dentro da sala secreta da fábrica.";
			mes "Eu registrei seu nome no sistema de segurança dela, então não se preocupe.";
			mes "Felizmente, Allysia virá então me salvar...";
			mes " ";
			mes "Desculpe por isso,";
			mes "Vovô";
			getitem(Blue_Key_Card,1);
			delitem(Iron_Box,1);
			KielHyreQuest = 36;
			close;
		}
	} else if (KielHyreQuest >= 36) {
		mes "^3355FFAqui é onde você descobriu o bilhete trancado dentro da Caixa Cinza.";
		mes "A seguinte mensagem estava escrita no bilhete pelo avô de Elly, Kiel Hyre^000000.";
		next;
		mes "Querida Elly,";
		mes "Kiehl finalmente quebrou o tabu e tentou transformar você em algo horrível.";
		mes " ";
		mes "Quando você ler isso, minha vida provavelmente está em perigo.";
		mes "Até onde viverei, dependerá de você.";
		mes " ";
		mes "Você já vai descobrir se você encontrar Puppet, mas quero lhe dizer eu mesmo.";
		mes "Você não é humana.";
		mes "Você descobrirá os detalhes se você entrar na fábrica usando a entrada perto da sepultura próxima da igreja.";
		mes "Então quero que você encontre Allysia dentro da sala secreta da fábrica.";
		mes "Eu registrei seu nome no sistema de segurança dela, então não se preocupe.";
		mes "Felizmente, Allysia virá então me salvar...";
		mes " ";
		mes "Desculpe por isso,";
		mes "Vovô";
		close;
	}
}

// ------------------------------------------------------------------
kh_school,175,176,0	script	Cesta de Biscoitos#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 30) {
		mes "^3355FFEsta cesta está cheia de biscoitos^000000.";
		close;
	} else if (KielHyreQuest == 30) {
		mes "^3355FFEssa deve ser a Cesta de Biscoitos de Elly.";
		mes "Parece que há um bilhete dobrado dentro no meio dos biscoitos^000000.";
		next;
		switch (select("Ler o Bilhete","Ignorar")) {
			case 1:
			mes strcharinfo(CHAR_NAME)+", socorro!";
			mes "Tem esse cara vestido de preto que está andando por aí, e jogando essa magia estranha!";
			mes "É ele que tem feito as pessoas frias e sem vida como bonecos!";
			mes "Estou assustada!";
			mes " ";
			mes "Espero que você pegue esse bilhete...";
			mes "Ele correu atrás de mim,mas me tranquei no meu quarto.";
			mes "Vou deixar minha janela aberta assim você ainda pode me encontrar.";
			mes "Espero que ele não jogue a maldição dele em mim!";
			KielHyreQuest = 32;
			close;
			case 2:
			mes "^3355FFAquele bilhete provavelmente não foi escrito para você de qualquer forma^000000.";
			close;
		}
	} else if (KielHyreQuest < 108) {
		mes "^3355FFEsses biscoitos não estão estragados ainda, mas eles não estão mais quentes.";
		mes "Se eles não estão na temperatura do quarto, então estão um pouco frios^000000.";
		close;
	} else if (KielHyreQuest == 108) {
		mes "^3355FFQuando você olha para o cesto de bolachas, o vento da janela o empurra, revelando uma carta que foi colocada embaixo.";
		mes "Provavelmente foi escrito por Elly para você ler^000000.";
		next;
		mes "^333333Querido "+strcharinfo(CHAR_NAME)+",";
		mes " ";
		mes "Meus professores geralmente me gritam desde que cometi tantos erros.";
		mes "Mas hoje a Sra. Lecollane me deu elogios pelos meus deliciosos biscoitos!";
		mes "É tudo obrigado a você, meu amigo.";
		mes "Estou muito feliz por nos conhecermos:";
		mes "Você me ensinou que existem pessoas boas no mundo.";
		mes "E eu sei que o vovô gostará de você, no entanto, não sei onde ele poderia estar...";
		mes " ";
		mes "Algum dia, espero tornar-me tão agradável como você é.";
		mes "Vamos nos manter em contato e sermos realmente bons amigos, ok?";
		mes " ";
		mes "Seu, Elly^000000";
		next;
		mes "^3355FFParece que você ainda pode sentir o calor e a bondade de Elly em sua cesta de bolachas.";
		mes "Você escolheu um biscoito e coloque em sua boca.";
		mes "Era deliciosamente agridoce.";
		KielHyreQuest = 109;
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "É hora de voltar.";
		mes "Não posso ficar aqui por muito mais tempo.";
		close2;
		warp("yuno_fild08",69,183);
		end;
	} else {
		mes "^3355FFTodos os cookies desta cesta estão obsoletos!";
		mes "Bem, não deveria ser uma surpresa.";
		mes "Faz muito tempo que eles foram cozidos^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_school,188,185,0	script	Janela#kh2	HIDDEN_NPC,{
	warp("yuno_fild08",69,183);
	end;
}

// ------------------------------------------------------------------
yuno_fild08,71,170,0	script	Sepultura#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 36) {
		mes "^3355FFÉ só uma sepultura.";
		mes "Pode ser importante para você mais tarde.";
		mes "Mas agora não é lá aquel ajuda para você^000000.";
		close;
	} else if (KielHyreQuest == 36) {
		if (!countitem(Yellow_Key_Card)) {
			mes "^3355FFHá uma porta secreta próxima à essa sepultura.";
			mes "Parece que há algum tipo de slot e um teclado numérico instalado na porta^000000.";
			close;
		} else {
			mes "^3355FFHá uma porta secreta próxima à essa sepultura.";
			mes "Parece que há algum tipo de slot e um teclado numérico instalado na porta^000000.";
			next;
			mes "^3355FFO que você deveria inserir no slot?^000000";
			next;
			input(.@KHInput$);
			if (.@KHInput$ == "Cartão de Acesso Amarelo") {
				mes "^3355FFUm barulho de confirmação eletrônica aciona-se assim que você insere o Cartão de Acesso Amarelo.";
				mes "Seguido por uma voz anônima que pergunta:^000000";
				next;
				mes "[Sistema de Segurança]";
				mes "Por favor entre a senha.";
				next;
				input(.@KHInput$);
				next;
				if (.@KHInput$ == "4772961") {
					mes "[Sistema de Segurança]";
					mes "Senha confirmada.";
					mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+", Kiel Hyre.";
					next;
					mes "^3355FFVocê ouve outro beep agradável e um caminho secreto se abre^000000.";
					KielHyreQuest = 38;
					close;
				} else {
					mes "[Sistema de Segurança]";
					mes "Senha incorreta.";
					mes "Por favor tente novamente.";
					close;
				}
			} else {
				mes "^3355FFO que quer que você estiver tentando inserir no slot não está funcionando^000000.";
				close;
			}
		}
	} else if ((KielHyreQuest >= 38) && (KielHyreQuest < 106)) {
		mes "^3355FFA porta para a fábrica está escancarada^000000.";
		next;
		switch (select("Entrar","Cancelar")) {
			case 1:
			warp("kh_dun01",3,230);
			end;
			case 2:
			mes "......";
			mes ".........";
			mes "............";
			close;
		}
	} else if (KielHyreQuest >= 106) {
		if (!countitem(Fancy_Key_Card)) {
			mes "^3355FFA entrada secreta agora está selada^000000.";
			close;
		} else {
			mes "^3355FFConforme você se aproxima da sepultura, ela começa a emitir flashes de luz^000000.";
			next;
			switch (select("Usar o ^0000FFCartão de Acesso Exuberante^000000","Ignorar")) {
				case 1:
				mes "^3355FFVocê usa o Cartão de Acesso Exuberante para abrir a passagem^000000.";
				next;
				switch (select("Entrar","cancelar")) {
					case 1:
					warp("kh_dun01",3,230);
					end;
					case 2:
					mes "......";
					mes ".........";
					mes "............";
					close;
				}
				case 2:
				mes "......";
				mes ".........";
				mes "............";
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
yuno_fild02,93,210,4	script	Guarda da Cabana#kh	4_M_03,{
	if ((KielHyreQuest < 12) || (KielHyreQuest > 12)) {
		mes "[Guarda da Cabana]";
		mes "Isso é uma propriedade particular, então por favor não entre nessa área a não ser que seja autorizado.";
		close;
	} else if (KielHyreQuest == 12) {
		mes "[Guarda da Cabana]";
		mes "Isso é uma propriedade particular, então por favor não entre nessa área a não ser que seja autorizado.";
		next;
		switch (select("Tenho horário marcado com Kiel Hyre","Certo")) {
			case 1:
			mes "[Guarda da Cabana]";
			mes "Você tem um horário marcado com o Senhor Kiel Hyre?";
			mes "Um, tem certeza?";
			next;
			switch (select("Sim","Não")) {
				case 1:
				mes "[Guarda da Cabana]";
				mes "Deve haver algum tipo de engano.";
				mes "Senhor Hyre não sairia se ele supostamente tivesse de ter um horário marcado...";
				KielHyreQuest = 14;
				close;
				case 2:
				mes "[Guarda da Cabana]";
				mes "Bem, a não ser que você tenha um horário marcado, não acho que você poderá encontrar-se com Senhor Hyre.";
				close;
			}
			case 2:
			mes "[Guarda da Cabana]";
			mes "Até Mais.";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_fild02,75,218,0	script	Porta#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 16) {
		mes "^3355FFEssa porta está trancada^000000.";
		mes "E alguém por dentro não abrir para você então você precisará da chave certa para destrancá-la^000000.";
		close;
	}
	if (KielHyreQuest == 16) {
		mes "^3355FFEssa porta está trancada^000000.";
		mes "Se alguém por dentro não abrir para você então você precisará da chave certa para destrancá-la^000000.";
		next;
		switch (select("Destrancar","Cancelar")) {
			case 1:
			mes "^3355FFVocê destrancou a porta com a chave que Elly lhe deu.";
			mes "Assim que você a abre, um bilhete dobrado cai do topo da porta.";
			mes "As seguintes palavras estão escritas nessa nota rudimentar^000000.";
			next;
			mes "6 Frente,";
			mes "3 Esquerda,";
			mes "3 Frente,";
			mes "4 Esquerda";
			close2;
			KielHyreQuest = 18;
			warp("kh_vila",188,18);
			end;
			case 2:
			mes "......";
			mes ".........";
			mes "............";
			close;
		}
	} else {
		mes "^3355FFA porta está aberta^000000.";
		next;
		switch (select("Entrar","Cancelar")) {
			case 1:
			warp("kh_vila",188,18);
			end;
			case 2:
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_fild02,109,218,0	script	Porta#kh2	HIDDEN_NPC,{
	if (KielHyreQuest != 16) {
		mes "^3355FFEssa porta está trancada.";
		mes "Se alguém por dentro não abrir para você então você precisará da chave certa para destrancá-la^000000.";
		close;
	} else if (KielHyreQuest == 16) {
		mes "^3355FFEssa porta está trancada^000000.";
		mes "Se alguém por dentro não abrir para você então você precisará da chave certa para destrancá-la^000000.";
		next;
		switch (select("Abrir","Cancelar")) {
			case 1:
			mes "^3355FFVocê não tem a chave que pode destrancar esta porta^000000.";
			close;
			case 2:
			mes "......";
			mes ".........";
			mes "............";
			close;
		}
	}
}

// ------------------------------------------------------------------
kh_vila,191,14,0	script	Parede#kh	HIDDEN_WARP_NPC,1,1,{
	if (KielHyreQuest < 28) {
		mes "^3355FFÉ só uma parede.";
		mes "Não está particularmente atrapalhando seu caminho^000000.";
		close;
	} else if (KielHyreQuest >= 28) {
		mes "^3355FFA parede está agora aberta, revelando um caminho secreto^000000.";
		next;
		switch (select("Entrar","Cancelar")) {
			case 1:
			warp("kh_vila",17,177);
			end;
			case 2:
			close;
		}
	}
}

// ------------------------------------------------------------------
kh_vila,184,20,0	script	Livro#kh1::BookKHQ1	HIDDEN_NPC,{
	if (KielHyreQuest != 26) {
		mes "^3355FFEssa estante está estufada com tantos ivros largos e de capa dura^000000.";
		close;
	} else if (KielHyreQuest == 26) {
		if (rand(1,10) == 8) {
			mes "^3355FFSem pensar, você apanha um livro da estante.";
			mes "Assim que você o puxa, a parede desliza abrindo-se revelando um caminho secreto^000000.";
			KielHyreQuest = 28;
			specialeffect(EF_READYPORTAL2,AREA,getnpcid("Parede#kh"));
			close;
		}
	}
}
kh_vila,181,20,0	duplicate(BookKHQ1)	Livro#kh2	HIDDEN_NPC
kh_vila,178,20,0	duplicate(BookKHQ1)	Livro#kh3	HIDDEN_NPC
kh_vila,175,19,0	duplicate(BookKHQ1)	Livro#kh4	HIDDEN_NPC

// ------------------------------------------------------------------
kh_vila,179,11,0	script	Carta#kh	FAKE_NPC,1,1,{
	OnTouch:
	if (KielHyreQuest == 18) {
		if (!checkweight(Kyll_Hire_Letter,1)) {
			mes "^3355FF- Espere!!";
			mes "Você está carregando muitos itens e está incapaz de aceitar mais algum.";
			mes "Por favor libere algum espaço no seu inventário antes de retornar^000000.";
			close;
		} else {
			mes "^3355FFvocê encontrou uma carta no chão.";
			mes "Naturalmente você a pegou, apesar do fato de que ela não está endereçada à você^000000.";
			getitem(Kyll_Hire_Letter,1);
			KielHyreQuest = 20;
			close;
		}
	} else {
		mes "^3355FFVocê entrou no quarto^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,16,175,0	script	Caixa#kh	HIDDEN_NPC,{
	mes "^FFFFFF##^000000*Saboroso-Nutricional-Delicioso*";
	mes "*Máquina de venda de ração para Bichinhos*";
	mes "A melhor comida para o seu Bichinho de estimação que é superior à ração para bichinho que você pode comprar no mercado!";
	mes " ";
	mes "Preço: 1,100 zeny (barato!)";
	next;
	switch (select("Comprar!","Cancelar")) {
		case 1:
		if (Zeny < 1100) {
			mes "^3355FF1,100 zeny parecer ser meio caro para ração de bichinho.";
			mes "Mas se é melhor que a coisa normal, pode valer a tentativa.";
			mes "Você não tem zeny suficiente^000000.";
			close;
		} else {
			mes "^3355FFOh não...!";
			mes "Não tem nada de especial nisso por fim!";
			mes "É só uma Fração normal!^000000";
			Zeny -= 1100;
			getitem(Pet_Food,1);
			close;
		}
		case 2:
		mes "^3355FFEssa máquina de vender parece realmente duvidosa e suspeita por alguma razão^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,30,184,0	script	Caixa de Maçã#kh	HIDDEN_NPC,{
	mes "^3355FFVocê encontra uma caixa com algumas maçãs^000000";
	mes "^3355FFripe, delicious apples^000000.";
	next;
	switch (select("Pegar a Caixa","Cancelar")) {
		case 1:
		mes "^3355FFNão...!";
		mes "Espere!";
		mes "Algo está errado!";
		mes "O que quer que faça, não pegue essa caixa!^000000";
		next;
		mes "^3355FFE assim, sua voz interior.";
		mes "Sua sombra Jungiana lhe previne, de pegar aquela caixa^000000.";
		close;
		case 2:
		mes "^3355FFAlgo está errado com essa caixa de maçãs^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,44,126,0	script	Mapa#khp	HIDDEN_NPC,{
	if ((KHCottagePoem1 < 2) && (KielHyreQuest < 30)) {
		mes "^3355FFUm magnífico mapa mundial, detalhando o reino de Rune Midgard, República Schwaltzvalt.";
		mes "Assim como um outro pais ao oeste, cujo nome não é familiar para você, está colado na parede^000000.";
		next;
		mes "^3355FFAssim que você examina o mapa mundial mais de perto, você descobre que algo foi escondido debaixo dele^000000.";
		switch (select("Ignorar","Examinar")) {
			case 1:
			mes "^3355FFO que quer que possa estar^000000";
			mes "^3355FFescondido debaixo desse^000000";
			mes "^3355FFmapa provavelmente não é^000000";
			mes "^3355FFimportante o suficiente para^000000";
			mes "^3355FFvocê investigar^000000.";
			close;
			case 2:
			mes "^3355FFInfelizmente, você não pode ver o que está sob o mapa já que está colado na parede.";
			mes "Você precisará encontrar alguma forma de soltar a cola sem danificar o mapa^000000.";
			KHCottagePoem1 = 1;
			close;
		}
	} else if ((KHCottagePoem1 == 2) && (KielHyreQuest < 30)) {
		mes "^3355FFVocê leva o pote de um líquido fumegante próximo do mapa do mundo^000000.";
		mes "Assim que a cola na parede amolece, o mapa lentamente começa a se soltar^000000.";
		next;
		mes "^3355FFO mapa solto revelou um pedaço de papel dobrado oculto sob ele.";
		mes "Você pega o papel, e alisa o mapa para colá-lo na parede novamente.";
		mes "Uma mensagen está escrita no pedaço de papel^000000.";
		next;
		mes "^808080Ela morrerá em um lugar tão frio quanto os polos.";
		mes "Quando o poço está seco e o chão está rachado, o caminho para o coração dela.";
		mes "Um coração tão transparente quanto cristal, se abrirá^000000.";
		next;
		mes "^808080Terei de lutar com quatro serpentes com quatro espadas para encontrá-la.";
		mes "A primeira espada é o amor.";
		mes "A segunda espada é o desespero.";
		mes "A terceira espada é a fúria.";
		mes "A quarta espada é a esperança.";
		mes "De encontrá-la, de salvá-la^000000.";
		next;
		mes "^3355FF..............";
		mes "O significado profundo desse poema, é que mesmo a existência, lhe engana^000000.";
		KHCottagePoem1 = 3;
		close;
	} else if ((KHCottagePoem1 > 2) || (KielHyreQuest >= 30)) {
		mes "^3355FFAqui é onde você encontrou o papel no qual o poema estava escrito.";
		mes "Talvez seja uma boa idéia refrescar sua memória e ler aquele poema novamente^000000.";
		next;
		switch (select("Ler","Cancelar")) {
			case 1:
			mes "^808080Ela morrerá em um lugar tão frio quanto os pólos.";
			mes "Quando o poço está seco e o chão está rachado, o caminho para o coração dela.";
			mes "Um coração tão transparente quanto cristal, se abrirá^000000.";
			next;
			mes "^808080Terei de lutar com quatro serpentes com quatro espadas para encontrá-la.";
			mes "A primeira espada é o amor.";
			mes "A segunda espada é o desespero.";
			mes "A terceira espada é a fúria.";
			mes "A quarta espada é a esperança.";
			mes "De encontrá-la, de salvá-la^000000.";
			next;
			mes "^3355FF................";
			mes "O significado profundo desse poema, é que mesmo a existência, lhe engana^000000.";
			close;
			case 2:
			mes "^3355FFNão há necessidade para você reler esse poema.";
			mes "Você é um grande gênio^000000!";
			close;
		}
	}
}

// ------------------------------------------------------------------
kh_vila,33,184,0	script	Pote#kh	HIDDEN_NPC,{
	if (!KHCottagePoem1) {
		mes "^3355FFVocê encontrou um pote cheio de liquido fervente esfumaçante^000000.";
		close;
	} else if (KHCottagePoem1 == 1) {
		mes "^3355FFVocê encontrou um pote cheio de liquido fervente esfumaçante.";
		mes "Vapor...";
		mes "Que você poderia usar para soltar a cola no mapa...";
		mes "Você é um gênio!^000000";
		next;
		switch (select("Tentar","Aquilo? Aquilo não funciona!")) {
			case 1:
			mes "^3355FFVocê pegou o pote fervente, mas queimou levemente suas mãos acidentalmente^000000.";
			KHCottagePoem1 = 2;
			close;
			case 2:
			mes "^3355FFNão, não...";
			mes "Melhor tentarmos outra coisa^000000.";
			close;
		}
	} else {
		mes "^3355FFAqui é onde você pegou o pote cheio de líquido fervente^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,14,55,0	script	Cabaça#khp	HIDDEN_NPC,{
	if ((!countitem(Old_Copper_Key) < 1) && (countitem(Green_Key_Card) < 1) && (countitem(Iron_Box) < 1) && (KielHyreQuest < 38)) {
		if (!checkweight(Old_Copper_Key,1)) {
			mes "^3355FFAquilo é uma bela cabaça.";
			mes "Você pode até achar algo nela...";
			mes "Mas antes é melhor se livrar de todo seu peso extra.";
			mes "E por peso, quero dizer itens^000000.";
			close;
		}
		mes "^3355FFParece ser uma cabaça muito cara.";
		mes "Em palavras menos enfeitadas, uma abóbora.'";
		mes "O que você vai fazer^000000?";
		next;
		switch (select("Quebrar a cabaça","Olhar dentro da cabaça","Ignorar")) {
			case 1:
			mes "^3355FFVocê não pode quebrar abra aquela cabaça...";
			mes "Você é um herói, não um vândalo.";
			mes "Agora se esse ato de vandalismo puder ser considerado um ato de heroismo, então tudo bem^000000.";
			close;
			case 2:
			mes "^3355FFVocê gentilmente coloca sua mão dentro cabaça, e gentilmente tateia com seus dedos.";
			mes "Até que você recuperar uma Velha Chave de Bronze^000000.";
			getitem(Old_Copper_Key,1);
			close;
			case 3:
			mes "^3355FFProvavelmente não há nada dentro mesmo^000000.";
			close;
		}
	} else {
		mes "^3355FFEssa é aparentemente caríssima cabaça de onde você obteve a Velha Chave de Bronze.";
		mes "É inútil para você agora^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,39,41,0	script	Piscina#kh	HIDDEN_NPC,{
	if ((KHCottagePoem1 < 3) && (KielHyreQuest < 30)) {
		mes "^3355FFVocê encontrou uma piscina pomposa cheia com água fresca^000000.";
		close;
	} else if ((KHCottagePoem1 == 3) && (KielHyreQuest < 30)) {
		mes "^3355FFVocê encontrou uma piscina pomposa cheia com água fresca junto com uma evidente estátua de leão com duas alavancas^000000.";
		next;
		switch (select("Puxar as alavancas","Cancelar")) {
			case 1:
			mes "^3355FFQual alavanca você gostaria de puxar primeiro^000000?";
			next;
			switch (select("Alavanca da Direita","Alavanca da Esquerda")) {
				case 1:
				mes "^3355FFVocê puxou a alavanca da direita, fazendo com que a água jorrasse da boca do leão^000000.";
				close;
				case 2:
				mes "^3355FFAssim que você puxa alavanca da esquerda, a água da piscina é drenada.";
				mes "Com a piscina vazia, você pode ver uma escada de musgo verde cobrindo o fundo da piscina^000000.";
				next;
				switch (select("Ignorar","Investigar")) {
					case 1:
					mes "^3355FFVocê decide que é um pouco mais que um buraco sem água alguma para enchê-la^000000.";
					close;
					case 2:
					mes "^3355FFAssim que você olha através do musgo molhado no fundo da piscina, você esbarra em um pequeno botão peculiar^000000.";
					next;
					switch (select("Pressionar o Botão","Não Pressionar o Botão")) {
						case 1:
						mes "^3355FFVocê pressionou o botão o que parece acionar um som estranho vindo das escadas no corredor^000000.";
						KHCottagePoem1 = 4;
						close;
						case 2:
						mes "^3355FFÉ melhor você não apertar esse botão.";
						mes "Seus inimigos deve estar cudadosamente escondidos para lhe encontrar.";
						mes "Deve ser algum tipo de armadilha maléfica^000000.";
						close;
					}
				}
			}
			case 2:
			mes "^3355FFVocê decidiu não puxar as alavancas^000000.";
			close;
		}
	} else if ((KHCottagePoem1 > 3) || (KielHyreQuest >= 30)) {
		mes "^3355FFAqui é onde você pressionou o pequeno botão causando um estranho barulho que veio das escadas próximas do corredor^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,181,178,4	script	Cão Bravo#kh	4_DOG01,7,3,{
	OnTouch:
	mes "*Grrr*";
	next;
	mes "^3355FFUm cachorro aparentemente extremamente bravo está olhando para você.";
	mes "Será que você consegue passar por essa criatura sem se machucar^000000?";
	next;
	switch (select("Seguir em Frente","Fugir")) {
		case 1:
		if (countitem(Pet_Food)) {
			mes "^3355FFEspere!";
			mes "Talvez você possa usar comida para acalmar a besta selvagem!";
			mes "Por quê você não o alimenta com um pouco da sua ração de bichinho e vê o que acontece^000000?";
			next;
			switch (select("Dar ração de bichinho","Não vai funcionar!")) {
				case 1:
				mes "^3355FFVocê cuidadosamente arremessa a ração de bichinho para o cachorro.";
				mes "Sua cauda balança violentamente enquanto ele devora a comida.";
				mes "Melhor passar por esse cachoro agora enquanto você tem chance^000000!";
				delitem(Pet_Food,1);
				close2;
				warp("kh_vila",173,182);
				end;
				case 2:
				break;
			}
		}
		mes "^3355FFVocê se aproxima lentamente do cachorro, mas ele não para de rosnar prá você.";
		mes "Você tenta passar correndo pelo cachorro, mas ele bloqueia todos seus movimentos.";
		mes "O que fazer^000000?";
		next;
		mes "[Cão Bravo]";
		mes "BOW WOW!";
		mes "BOW WOW!";
		mes "BOW WOW WOW!";
		next;
		mes "^3355FFO cachorro lhe persegue escada abaixo, quão ingênuo você é^000000!";
		close2;
		warp("kh_vila",126,70);
		end;
		case 2:
		mes "^3355FFVamos sair daqui^000000!";
		close2;
		warp("kh_vila",126,70);
		end;
	}
}

// ------------------------------------------------------------------
kh_vila,115,186,0	script	Gaveta#kh	HIDDEN_NPC,{
	if (!checkweight(Yellow_Key_Card,1)) {
		mes "^3355FFHá algo dentro dessa gaveta, mas você não pode pegar já que está carregando muitos ítens com você.";
		mes "Talvez você deva visitar o seu confiável armazem da Kafra antes^000000.";
		close;
	} else if ((countitem(Yellow_Key_Card) < 1) && (KielHyreQuest <= 36)) {
		mes "^3355FFVocê encontrou uma velha gaveta que estava fechada.";
		mes "Se você a abrir, então você pode encontrar alguma coisa dentro.";
		mes "Ou pode estar vazia.";
		mes "Quem sabe^000000?";
		next;
		switch (select("Abrir a gaveta","Ignorar")) {
			case 1:
			mes "^3355FFVocê obteve o Cartão de Acesso Amarelo de dentro da gaveta.";
			mes "Abrir aquela gaveta tornou-se útil^000000.";
			getitem(Yellow_Key_Card,1);
			close;
			case 2:
			mes "^3355FFEsquece de abrir aquela gaveta.";
			mes "Digo, poxa, que sentido teria^000000?";
			close;
		}
	} else {
		mes "^3355FFAqui é onde você encontrou o Cartão De Acesso Amarelo.";
		mes "Esta gaveta está vazia agora^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,107,126,0	script	Caixa#kh2	HIDDEN_NPC,{
	if ((countitem(Old_Copper_Key) < 1) && (countitem(Green_Key_Card) < 1) && (countitem(Iron_Box) < 1) && (KielHyreQuest < 38)) {
		mes "^3355FFUma caixa sólida está jogada no chão onde se encontra uma pequena caixa trancada que foi colocada dentro^000000.";
		close;
	} else if ((countitem(Old_Copper_Key) >= 1) && (countitem(Green_Key_Card) < 1) && (countitem(Iron_Box) < 1) && (KielHyreQuest < 38)) {
		mes "^3355FFUma caixa sólida está jogada no chão onde se encontra uma pequena caixa trancada que foi colocada dentro.";
		mes "Talvez você possa usar sua Velha Chave de Bronze para destrancá-la^000000.";
		next;
		switch (select("Usar a Velha Chave de Bronze","Não, nunca vai funcionar.")) {
			case 1:
			mes "^3355FFSeu palpite valeu a pena!";
			mes "A velha chave de bronze realmente destrancou aquela caixa!";
			mes "Você abre a caixa interior e obtem o Cartão de Acesso Verde que estava trancado dentro^000000.";
			getitem(Green_Key_Card,1);
			delitem(Old_Copper_Key,1);
			close;
			case 2:
			mes "^3355FFO quê? Usando uma chave não destrancar uma fechadura?";
			mes "Isso é totalmente loucura^000000.";
			close;
		}
	} else {
		mes "^3355FFEssa é a caixa de onde você obteve o Cartão de Acesso Verde^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,181,138,0	script	Estante#kh	HIDDEN_NPC,{
	if ((countitem(Iron_Box) < 1) && (countitem(Old_Copper_Key) >= 1) || (countitem(Green_Key_Card) >= 1)) {
		mes "^3355FFUm dos livros nessa estante estufada está intitulado com o bilhete, para Elly.";
		mes "Deve ter sido deixado prá trás pelo avô dela^000000.";
		next;
		switch (select("Examinar o Livro","Ignorar")) {
			case 1:
			mes "^3355FFVocê espia pelas páginas do livro e não encontra nada particularmente interessante.";
			mes "No entanto, você percebe uma superfície de aço atrás da estante quando você devolve o livro^000000.";
			next;
			switch (select("Examinar a superfície de Aço","Ignorar")) {
				case 1:
				mes "^3355FFVocê remove mais dos livros da estante.";
				mes "Revelando que a superfície de aço é parte de um cofre escondido atrás da estante.";
				mes "Há duas fechaduras no cofre de aço^000000.";
				next;
				switch (select("Tentar todas suas chaves","Cancelar")) {
					case 1:
					mes "^3355FFQual chave você irá inserir na primeira fechadura^000000?";
					next;
					if (countitem(Old_Copper_Key) >= 1) {
						select("Velha Chave de Bronze","Chave da Cabana");
						mes "^3355FFQual chave você irá inserir na segunda fechadura^000000?";
						next;
						select("Velha Chave de Bronze","Chave da Cabana");
					} else if (countitem(Green_Key_Card)) {
						switch (select("Cartão de Acesso Verde","Chave da Cabana")) {
							case 1:
							.@KHFirstKeyhole = 1;
							break;
							case 2:
							.@KHFirstKeyhole = 2;
							break;
						}
						mes "^3355FFQual chave você irá inserir na segunda fechadura^000000?";;
						next;
						switch (select("Cartão de Acesso Verde","Chave da Cabana")) {
							case 1:
							.@KHSecondKeyhole = 1;
							break;
							case 2:
							.@KHSecondKeyhole = 2;
							break;
						}
						if (.@KHFirstKeyhole == 2) && (.@KHSecondKeyhole == 1) {
							mes "^3355FFO cofre abre com um estalido e você vê uma Caixa Cinza dentro^000000.";
							mes "^3355FFVocê leva a Caixa Cinza com você, esperando que se torne útil mais tarde^000000.";
							delitem(Villa_Spare_Key,1);
							delitem(Green_Key_Card,1);
							getitem(Iron_Box,1);
							close;
						}
					}
					mes "^3355FFO cofre não abre^000000.";
					close;
					case 2:
					mes "^3355FFProvavelmente é uma idéia melhor investigar a cabana por chaves que possam abrir esse cofre^000000.";
					close;
				}
				case 2:
				mes "^3355FFVocê colocou os livros de volta na estante^000000.";
				close;
			}
			case 2:
			mes "^3355FFvocê pode provavelmente encontrar melhores pistas em algum outro lugar por aqui^000000.";
			close;
		}
	} else {
		mes "^3355FFvocê encontrou uma estante que está estufada com livros^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,118,144,0	script	Mesa#kh	HIDDEN_NPC,{
	if (!KHCottagePoem2) {
		mes "^3355FFHá pilhas de papel e livros amontoados sobre a mesa cobrindo assuntos como poder artificial.";
		mes "Pesquisa do sábio Varmundt, robotização da fábrica, e pergaminhos mágicos^000000.";
		next;
		mes "^3355FFEnquanto explorando no meio dos livros e papéis, você encontra um pedaço de papel com o selo oficial da Fundação Kiel Hyre.";
		mes "Você decide que pode ser útil algum dia^000000.";
		next;
		mes "^3355FFVocê obteve um pedaço em branco de papel com o selo da Fundação de Kiel Hyre^000000.";
		KHCottagePoem2 = 1;
		close;
	} else {
		mes "^3355FFHá várias pilhas de papel e livros, cobrindo vários assuntos científicos e mágica, empilhados sobre essa mesa^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,123,170,0	script	Baú de Poções#kh	HIDDEN_NPC,{
	if ((KHCottagePoem2 < 1) && (KielHyreQuest < 30)) {
		mes "^3355FFEssa cabine médica está cheia de garrafas de várias cores.";
		mes "Que tipo de poções pode ser encontrado aqui^000000?";
		close;
	} else if ((KHCottagePoem2 == 1) && (KielHyreQuest < 30)) {
		mes "^3355FFEssa cabine médica está cheia de garrafas de várias cores.";
		mes "Que tipo de poções pode ser encontrado aqui^000000?";
		next;
		mes "^3355FFEspere, você tem um pedaço de papel em branco com o selo da fundação de Kiel Hyre!";
		mes "É estranho que o selo foi colocado num pedaço de papel em branco.";
		mes "Talvez algo foi escrito nele com tinta especial^000000?";
		next;
		mes "^3355FFÉ um palpite doido, mas talvez, só talvez...";
		mes "Você possa usar algo de dentro dessa cabine médica que possa revelar alguma tinta invisível escrita nesse documento^000000!";
		next;
		switch (select("O quê? Isso é loucura!","Claro! Vamos tentar!")) {
			case 1:
			mes "^3355FFDesculpe.";
			mes "Pensei que fosse uma boa idéia^000000.";
			close;
			case 2:
			switch (select("Tentar Líquido Vermelho","Tentar Líquido Azul","Tentar Líquido Amarelo","Tentar Líquido Verde","Cancelar")) {
				case 1:
				.@KHPotionColor$ = "Vermelho";
				break;
				case 2:
				mes "^3355FFFunciona!";
				mes "O líquido azul está revelando um pequeno texto escrito no papel.";
				mes "Parece algum tipo de poema longo^000000.";
				next;
				mes "[Poema]";
				mes "A primeira serpente é feita de aço, mas eu usei minha fúria para destruí-la.";
				mes "A segunda serpente é feita de mágica, mas meu amor perfurou seu coração.";
				next;
				mes "[Poema]";
				mes "A terceira serpente é carne e sangue, mas minha esperança a derrotou no final.";
				mes "Ainda assim, a quarta e derradeira serpente é sem forma, e ninguém sabe sua aparência.";
				next;
				mes "[Poema]";
				mes "Eu joguei meu desespero para o ar, mas ninguém sabe se isso matou a serpente.";
				mes "Eu meramente um ^3355FFpequeno demônio perdido^000000 com quatro espadas e quatro serpentes.";
				mes "Em busca daquela garota nas trevas.";
				next;
				mes "^3355FFEsse é um poema muito estranho.";
				mes "O quê poderia possivelmente significar^000000?";
				KHCottagePoem2 = 2;
				close;
				case 3:
				.@KHPotionColor$ = "Amarelo";
				break;
				case 4:
				.@KHPotionColor$ = "Verde";
				break;
				case 5:
				mes "^3355FFEsquece, essa idéia parece muito doida prá funcionar.";
				mes "Você acredita nessa asneira^000000?";
				close;
			}
			mes "^3355FFVocê tentou borrifar o líquido "+@KHPotionColor$+" do cabinete médico no papel em branco com o selo da Fundação Kiel Hyre.";
			mes "Mesmo assim, nada aconteceu^000000.";
			close;
		}
	} else {
		mes "^3355FFAqui é onde você derramou algum líquido azul para ler um poema escrito com tinta invisível num pedaço de papel em branco com o selo da Fundação Kiel Hyre.";
		mes "Você gostaria de lê-lo^000000?";
		next;
		switch (select("Sem Tempo!","Ler")) {
			case 1:
			mes "^3355FFSeu tempo está acabando!";
			mes "Por enquanto seria melhor você procurar cada canto da cabana^000000.";
			close;
			case 2:
			mes "[Poema]";
			mes "A primeira serpente é feita de aço, mas eu usei minha fúria para destruí-la.";
			mes "A segunda serpente é feita de mágica, mas meu amor perfurou seu coração.";
			next;
			mes "[Poema]";
			mes "A terceira serpente é carne e sangue, mas minha esperança a derrotou no final.";
			mes "Ainda assim, a quarta e derradeira serpente é sem forma, e ninguém sabe sua aparência.";
			next;
			mes "[Poema]";
			mes "Eu joguei meu desespero para o ar, mas ninguém sabe se isso matou a serpente.";
			mes "Eu meramente um ^3355FFpequeno demônio perdido^000000 com quatro espadas e quatro serpentes, em busca daquela garota nas trevas.";
			close;
		}
	}
}

// ------------------------------------------------------------------
kh_vila,136,68,0	script	Punho da Espada#kh	HIDDEN_NPC,{
	if ((KHCottagePoem1 < 3) || (KHCottagePoem2 < 2) && (KielHyreQuest < 30)) {
		mes "^3355FFHá quatro bem elaboradas espadas posicionads próximas à quatro assustadoras esculturas de serpentes^000000.";
		close;
	} else if ((KHCottagePoem1 <= 4) || (KHCottagePoem2 <= 2) && (KielHyreQuest < 30)) {
		mes "^3355FFHá quatro bem elaboradas espadas posicionadas próximas à quatro assustadoras esculturas de serpentes.";
		mes "Espere, talvez estejam relacionadas ao poema que você leu antes^000000!";
		next;
		switch (select("Nada haver!","Claro!")) {
			case 1:
			mes "^3355FFImpossível.";
			mes "Deve ser algum tipo de coincidência^000000.";
			close;
			case 2:
			mes "^3355FFClaro! E veja!";
			mes "Há um buraco no topo da cabeça de cada escultura de serpente.";
			mes "Esses buracos parecem bastante grandes para inserir cada uma das espadas ornamentais próximas^000000.";
			next;
			switch (select("Ignorar","Inserir Espadas Ornamentais")) {
				case 1:
				mes "^3355FFImpossível.";
				mes "Deve ser algum tipo de coincidência^000000.";
				close;
				case 2:
				if (KHCottagePoem1 != 4) {
					mes "^3355FFNão pode...";
					mes "Puxar a espada!";
					mes "Deve estar presa no lugar de alguma forma ou selada por alguma força estranha^000000!";
					close;
				} else {
					mes "^3355FFVocê provavelmente deveria tentar inserir cada espada na serpente correta^000000.";
					mes "Primeiro por favor selecione a serpente que você irá inserir a primeira espada^000000.";
					next;
					switch (select("Primeira Serpente","Segunda Serpente","Terceira Serpente","Quarta Serpente")) {
						default:
						break;
						case 2:
						++.@KHSwords;
						break;
					}
					next;
					mes "^3355FFAgora, por favor escolha a serpente que você irá inserir a segunda espada^000000.";
					next;
					switch (select("Primeira Serpente","Segunda Serpente","Terceira Serpente","Quarta Serpente")) {
						default:
						break;
						case 4:
						++.@KHSwords;
						break;
					}
					next;
					mes "^3355FFAgora, por favor selecione a serpente que você irá inserir a terceira espada^000000.";
					next;
					switch (select("Primeira Serpente","Segunda Serpente","Terceira Serpente","Quarta Serpente")) {
						case 1:
						++.@KHSwords;
						break;
						default:
						break;
					}
					next;
					mes "^3355FFFinalmente, por favor selecione a serpente na qual você irá inserir a quarta espada^000000.";
					next;
					switch (select("Primeira Serpente","Segunda Serpente","Terceira Serpente","Quarta Serpente")) {
						default:
						break;
						case 3:
						++.@KHSwords;
						break;
					}
					if (.@KHSwords == 4) {
						mes "^3355FFSeus ouvidos são repentinamente preenchidos com um baixo zumbido e sua mente e corpo parecem que estão sendo levados^000000.";
						KHCottagePoem1 = 5;
						KHCottagePoem2 = 3;
						close2;
						warp("kh_vila",178,72);
						end;
					} else {
						mes "^3355FFNada aconteceu.";
						mes "Você provavelmente não inseriu as espadas nas serpentes corretas.";
						mes "Por enquanto, você deveria retornar as espadas, e então tentar novamente mais tarde^000000.";
						close;
					}
				}
			}
		}
	} else if ((KHCottagePoem1 == 5) && (KHCottagePoem2 == 3) || (KielHyreQuest >= 30)) {
		mes "^3355FFAqui tem um caminho oculto que leva à um laboratório secreto^000000.";
		next;
		switch (select("Entrar","Cancelar")) {
			case 1:
			warp("kh_vila",178,72);
			end;
			case 2:
			close;
		}
	}
}

// ------------------------------------------------------------------
kh_vila,185,68,0	script	Tubo de Testes#kh	HIDDEN_NPC,{
	if (KielHyreQuest > 28) {
		mes "^3355FFÉ estranho olhar, o homem velho seco preso dentro deste tubo de teste^000000.";
		close;
	} else if (KielHyreQuest == 28) {
		mes "^3355FFUma estranha, sábia senhora está presa nesse tubo de testes.";
		mes "Há um pequeno botão vermelho bem embaixo no tubo de testes^000000.";
		next;
		switch (select("Pressionar o Botão","Investigar Mais")) {
			case 1:
			mes "[???]";
			mes "O-Olá...?";
			mes "V-Você pode me ouvir?";
			mes "Eu não lhe reconheço...";
			mes "Mas... Talvez eu tenha esquecido?";
			mes "Espere, espere.";
			mes "Se você é meu amigo, então você sabe do que me chamar, certo?";
			mes "Você sabe o que eu sou?";
			next;
			input(.@KHInput$);
			if (.@KHInput$ == "Um pequeno demônio perdido") {
				mes "[???]";
				mes "Heh... Heh heh...";
				mes "Ele sabe... Hey, você tem de lembrar desses números.";
				mes "N-não esqueça, eles serão importantes...";
				mes "^FF00004^000000, ^FF00007^000000, ^FF00002^000000, ^FF00009^000000, ^FF00006^000000, ^FF00001^000000. Isso é tudo...";
				next;
				mes "^3355FF4772961^000000";
				mes "O que poderiam esses números possivelmente significar?";
				KHCottagePoem1 = 0;
				KHCottagePoem2 = 0;
				KielHyreQuest = 30;
				close;
			} else {
				mes "[???]";
				mes "Não... Não...";
				mes "Isso não está certo.";
				mes "Não acho que nós éramos amigos.";
				mes "Não...";
				close;
			}
			case 2:
			mes "^3355FFVamos investigar essa área um pouquinho mais antes^000000.";
			close;
		}
	} else if (KielHyreQuest >= 30) {
		if ((countitem(Iron_Box) > 0) && (countitem(Yellow_Key_Card) > 0)){
			mes "^3355FFO que poderia o número 4772961 significar?";
			mes "Por enquanto, você encontrou tudo que precisa desse lugar, então você deve voltar para Elly^000000.";
			close;
		} else {
			mes "^3355FFO que poderia ser o número 4772961?";
			mes "Por enquanto, é melhor procurar nesta casa de campo para quaisquer pistas que você possa encontrar^000000.";
			close;
		}
	} else {
		mes "^3355FFÉ estranho olhar, o homem velho seco preso dentro deste tubo de teste^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,179,68,0	script	Tubo de Testes#kh2	HIDDEN_NPC,{
	mes "^3355FFEsse tubo de testes tem um jovem rapaz vestido um uniforme da Academia Kiel Hyre.";
	mes "De alguma forma, você tem a sensação que já o viu antes em algum lugar^000000.";
	close;
}

// ------------------------------------------------------------------
kh_dun01,235,48,0	script	Porta Pesada#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 38) {
		mes "^3355FFHá uma larga e pesada porta à sua frente^000000";
		next;
		switch (select("Abrir a Porta","Cancelar")) {
			case 1:
			input(.@KHInput$);
			mes "^3355FFVocê tenta empurrar a porta para abrir com toda sua força, mas falha em fazê-la se mexer^000000.";
			close;
			case 2:
			mes "^3355FFVocê decidiu deixar essa porta quieta, até que descubra como conseguirá abrí-la^000000.";
			close;
		}
	} else if ((KielHyreQuest >= 38) && (KielHyreQuest < 46)) {
		mes "^3355FFHá uma larga e pesada porta à sua frente^000000.";
		next;
		switch (select("Abrir a Porta","Cancelar")) {
			case 1:
			input(.@KHInput$);
			if (.@KHInput$ == "Cartão de Acesso Azul") {
				mes "^3355FFVocê abri com sucesso a porta^000000.";
				close2;
				warp("kh_school",119,144);
				end;
			} else {
				mes "^3355FFVocê tenta empurrar a porta para abrir com toda sua força, mas falha em fazê-la se mexer^000000.";
				close;
			}
			case 2:
			mes "^3355FFVocê decidiu deixar essa porta quieta, até que descubra como conseguirá abrí-la^000000.";
			close;
		}
	} else {
		mes "^3355FFHá uma larga e pesada porta à sua frente^000000";
		close;
	}
}

// ------------------------------------------------------------------
kh_dun01,76,233,0	script	Porta Pesada#kh2	HIDDEN_NPC,{
	if ((KielHyreQuest >= 38) && (KielHyreQuest < 46)) {
		mes "^3355FFTHá uma larga e pesada porta à sua frente^000000";
		next;
		switch (select("Abrir a Porta","Cancelar")) {
			case 1:
			mes "^3355FFVocê tenta empurrar a porta para abrir com toda sua força, mas falha em fazê-la se mexer^000000.";
			close;
			case 2:
			mes "^3355FFVocê decidiu deixar essa porta quieta, até que descubra como conseguirá abrí-la^000000.";
			close;
		}
	} else {
		mes "^3355FFTHá uma larga e pesada porta à sua frente^000000";
		close;
	}
}
kh_dun01,106,233,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh3	HIDDEN_NPC
kh_dun01,6,164,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh4	HIDDEN_NPC
kh_dun01,6,133,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh5	HIDDEN_NPC
kh_dun01,6,60,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh6	HIDDEN_NPC
kh_dun01,6,30,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh7	HIDDEN_NPC
kh_dun01,6,18,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh8	HIDDEN_NPC
kh_dun01,235,70,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh9	HIDDEN_NPC
kh_dun01,235,92,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh10	HIDDEN_NPC
kh_dun01,235,114,0	duplicate(Porta Pesada#kh2)	Porta Pesada#kh11	HIDDEN_NPC

// ------------------------------------------------------------------
kh_school,119,149,4	script	Bela Dama#kh	4_F_KHELLISIA,{
	if (KielHyreQuest < 40) {
		cutin("kh_ellisia",2);
		mes "[Allysia]";
		mes "Hm? Não acho que eu lhe conheça.";
		mes "Kiel Hyre só tem amigos de Elly autorizados, e confiáveis que podem estar ajudando ela.";
		mes "Para ser aceito nessa área.";
		next;
		mes "[Allysia]";
		mes "Eu não encontro ^FF0000Elly^000000";
		mes "Ela foi atacada também?";
		mes "Você é ^FF0000Amigo de Elly^000000?";
		next;
		mes "[Allysia]";
		mes "Eu não acho Elly em lugar algum por aqui.";
		mes "Só posso lhe deixar entrar se você puder se identificar como amigo de Elly.";
		mes "Há alguma coisa que você possa me apresentar como prova?";
		next;
		switch (select("Cartão de Acesso Amarelo","Cartão de Acesso Azul","Chave Dourada","Broche Luxuoso","...?")) {
			default:
			break;
			case 3:
			mes "Ah, essa não é a chave que Kiel Hyre deu a Elly?";
			mes "Sim, estou convencida que você a tem ajudado.";
			mes "Estive esperando por você, então deixe-me levá-lo ao meu quarto.";
			close2;
			cutin("",255);
			warp("kh_school",120,180);
			end;
			case 4:
			mes "[Allysia]";
			mes "A-Aquele é o inferno de Kiel!";
			mes "Ele lhe enviou aqui para me pegar?!";
			mes "Eu não estou me arriscando!";
			close2;
			cutin("",255);
			monster(strnpcinfo(NPC_MAP),117,144,"Constant",G_CONSTANT,1);
			monster(strnpcinfo(NPC_MAP),117,144,"Constant",G_CONSTANT,1);
			monster(strnpcinfo(NPC_MAP),117,144,"Constant",G_CONSTANT,1);
			monster(strnpcinfo(NPC_MAP),117,144,"Constant",G_CONSTANT,1);
			end;
			case 5:
			mes "[Allysia]";
			mes "......";
			mes "........";
			mes "...........";
			close2;
			cutin("",255);
			end;
		}
		mes "[Allysia]";
		mes "Hm? Isso não prova que Elly realmente confia em você...";
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest >= 40) {
		mes "[Allysia]";
		mes "Por favor me siga.";
		close2;
		cutin("",255);
		warp("kh_school",120,180);
		end;
	}
}
kh_school,121,149,4	duplicate(Bela Dama#kh)	Bela Dama#kh2	4_F_KHELLISIA

// ------------------------------------------------------------------
kh_school,117,149,4	script	Bela Dama#kh3	4_F_KHELLISIA,{ end; }
kh_school,118,149,4	duplicate(Bela Dama#kh3)	Bela Dama#kh4	4_F_KHELLISIA
kh_school,120,149,4	duplicate(Bela Dama#kh3)	Bela Dama#kh5	4_F_KHELLISIA

// ------------------------------------------------------------------
kh_school,122,186,4	script	Bela Dama#kh6	4_F_KHELLISIA,{
	cutin("kh_ellisia",2);
	if (KielHyreQuest < 38) {
		mes "[??????]";
		mes "Este local é particular.";
		mes "Saia imediatamente!";
		close2;
		cutin("",255);
		warp("yuno_fild08",73,172);
		end;
	} else if (KielHyreQuest <= 38) {
		if (!checkweight(Red_Key_Card,1)) {
			mes "^3355FF- Espere!!";
			mes "Você está carregando muitos itens e não será capaz de aceitar mais.";
			mes "Por favor arrume algum espaço no seu inventário antes de retornar^000000.";
			close;
		} else {
			mes "[Allysia]";
			mes "Amig"+(Sex == SEX_MALE ? "o":"a")+" do protótipo Elly, lhe dou as boas vindas.";
			mes "Como você deve ter percebido, preciso de sua ajuda.";
			mes "Kiel Hyre está ajudando em algum lugar dentro dessa fábrica.";
			next;
			mes "[Allysia]";
			mes "É imperativo que você procure por Kiel Hyre e o resgate o mais rápido que você possa!";
			next;
			switch (select("O que é essa fábrica?","O que aconteceu a^FF0000Kiel Hyre^000000?")) {
				case 1:
				mes "[Allysia]";
				mes "Essa fábrica é parte dos negócios secretos da Fundação Kiel Hyre, onde robôs humanóides são fabricados.";
				mes "Eu mesma, e todos os estudantes da academia somos na verdade robôs, não humanos.";
				next;
				mes "[Allysia]";
				mes "O objetivo final da Fundação Kiel Hyre é desenvolver robôs superiores que ajudarão a sociedade humana.";
				mes "Como robôs, nós podemos fazer tarefas que são muito perigosas ou difíceis para humanos.";
				break;
				case 2:
				mes "[Allysia]";
				mes "^3355FFKiehl^000000 estava para fazer modificações anormais aos robôs humanóides.";
				mes "Isso foi reportado à Kiel Hyre, que foi parar Kiehl.";
				mes "No entanto, Hyre não retornou.";
				next;
				mes "[Allysia]";
				mes "Temendo que Kiehl pudesse me quebrar, Kiel Hyre trouxe uma cópia de mim no lugar.";
				mes "Ainda posso detectar os batimentos cardíacos de Kiel Hyre, então ele deve estar bem.";
				mes "Mas seu próprio filho pode machucá-lo breve.";
				next;
				mes "[Allysia]";
				mes "Pegue esse esse cartão que vai lhe permitir entrar em áreas secretas dentro dessa fábrica.";
				mes "Se você encontrar Kiel Hyre, por favor me avise imediatamente.";
				getitem(Red_Key_Card,1);
				KielHyreQuest = 40;
				break;
			}
		}
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 40) {
		mes "[Allysia]";
		mes "Ainda posso detectar os batimentos cardíacos de Kiel Hyre.";
		mes "Mas seu filho Kiehl pode fazer algo desesperado contra ele logo.";
		mes "Por favor, localize Kiel Hyre antes que isso aconteça!";
		close2;
		cutin("",255);
		warp("kh_dun01",22,216);
		end;
	} else if (KielHyreQuest == 42) {
		mes "[Allysia]";
		mes "Você já";
		mes "localizou Kiel Hyre?";
		next;
		mes "^3355FFVocê conta a Allysia onde Kiel Hyre estava trancado e lhe entrega o fragmento de metal que Kiel Hyre lhe deu.";
		mes "Ela pega o fragmento e coloca no pulso dela^000000.";
		next;
		mes "[Allysia]";
		mes "...Código secreto de Kiel Hyre confirmado.";
		mes "Área B_2_3.";
		mes "Sinais vitais estão normais.";
		mes "Envelope recebido.";
		mes "Enviando desenhos de Bonecos Modificados...";
		next;
		mes "[Allysia]";
		mes "Certo, Recebi as ordens de Kiel Hyre, e devo cumpri-las...";
		delitem(Steel_Piece,1);
		KielHyreQuest = 44;
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 44) {
		mes "[Allysia]";
		mes "Certo, Tenho uma missão à cumprir para Kiel Hyre, e não tenho muito tempo.";
		mes "Deixe-me lhe dar algumas instruções específicas rapidamente.";
		next;
		mes "[Allysia]";
		mes "Primeiramente, preciso pegar seus cartões por razões de segurança.";
		mes "Segundamente, me encontre na mansão de Kiel Hyre em Lighthalzen.";
		mes "Mostre a Chave Dourada para ser admitido nas áreas.";
		delitem(Yellow_Key_Card,1);
		delitem(Blue_Key_Card,1);
		delitem(Red_Key_Card,1);
		KielHyreQuest = 46;
		next;
		mes "[Allysia]";
		mes "Eu entendo que isso é repentino, e não estou lhe dando uma explicação direta.";
		mes "Mas algo horrível vai acontecer se eu não me apressar o mais rápido possível.";
		close2;
		warp("yuno_fild08",73,172);
		cutin("",255);
		end;
	} else {
		mes "[Allysia]";
		mes "Eu entendo que isso é repentino, e não estou lhe dando uma explicação direta.";
		mes "Mas algo horrível vai acontecer se eu não me apressar o mais rápido possível.";
		close2;
		warp("yuno_fild08",73,172);
		end;
	}
}

// ------------------------------------------------------------------
kh_dun01,166,223,0	script	Dispositivo de Acesso#kh	HIDDEN_NPC,{
	if ((KielHyreQuest <= 38) || (KielHyreQuest >= 44)) {
		mes "^3355FFVocê encontrou um dispositivo mecânico.";
		mes "Parece que pode ser operado inserindo o cartão correto no slot^000000.";
		close;
	} else if ((KielHyreQuest == 40) && (countitem(Red_Key_Card) >= 1)) {
		mes "^3355FFVocê encontrou um dispositivo mecânico.";
		mes "Parece que pode ser operado, inserindo o cartão correto no slot^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cartão de Acesso Vermelho") {
			mes "^3355FFA porta abre assim que você insere o Cartão de Acesso Vermelho.^000000.";
			close2;
			warp("kh_dun01",170,227);
			end;
		} else {
			mes "^3355FFNada aconteceu^000000.";
			close;
		}
	}
}
kh_dun01,162,206,0	duplicate(Dispositivo de Acesso#kh)	Dispositivo de Acesso#kh2	HIDDEN_NPC

// ------------------------------------------------------------------
kh_dun01,224,233,0	script	Pota da Fábica#kh	FAKE_NPC,5,5,{
	OnTouch:
	if (KielHyreQuest == 40) {
		if (!checkweight(Steel_Piece,1)) {
			mes "^3355FF- Wait!!";
			mes "Você está carregando muitos ítens e não será capaz de aceitar mais.";
			mes "Por favor abra algum espaço no seu inventario antes de retornar^000000.";
			close;
		}
		mes "^3355FFVocê pode ouvir fracamente uma voz do outro lado dessa porta^000000.";
		next;
		mes "[????]";
		mes "...Kiehl...";
		mes "...Como se atreve...!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Senhor Kiel Hyre?";
		mes "É você aí dentro?";
		next;
		mes "[Kiel Hyre]";
		mes "Q-Quem está aí?";
		mes "Identifique-se!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sou... Sou...";
		next;
		mes "^3355FFVocê explica sua história para a voz atrás da porta, e lhe diz o que aconteceu à Elly e Allysia^000000.";
		next;
		mes "[Kiel Hyre]";
		mes "...Sim... Sou eu.";
		mes "Sou Kiel Hyre, aprisionado aqui.";
		mes "Ele foi tão longe como modificar Elly, eh?";
		mes "..................";
		next;
		mes "[Kiel Hyre]";
		mes "Rápido, leve esse módulo para Allysia!";
		mes "Ela saberá o que fazer com ele.";
		mes "Se você está realmente nos ajudando, então ela terá algumas instruções para você também.";
		next;
		mes "^3355FFKiel Hyre passa um estranho fragmento de metal pela fresta entre a porta e o chão^000000.";
		getitem(Steel_Piece,1);
		KielHyreQuest = 42;
		close;
	} else {
		mes "[Kiel Hyre]";
		mes "......";
		close;
	}
}

// ------------------------------------------------------------------
kh_dun01,44,203,0	script	Dispositivo de Acesso#kh3	HIDDEN_NPC,{
	if (!countitem(Fancy_Key_Card)) {
		mes "^3355FFVocê encontrou um dispositivo mecânico.";
		mes "Parece que pode ser operado inserindo-se o cartão correto no slot^000000.";
		close;
	} else {
		mes "^3355FFVocê encontrou um dispositivo mecânico.";
		mes "Parece que pode ser operado inserindo-se o cartão correto no slot^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cartão de Acesso Exuberante") {
			mes "^3355FFAssim que você insere o Cartão de Acesso Exuberante no slot de cartão.";
			mes "A porta se escancara revelando um longo lance de escadas para baixo^000000.";
			next;
			switch (select("Descer as Escadas","Cancelar")) {
				case 1:
				warp("kh_dun02",41,198);
				end;
				case 2:
				mes "^3355FFParece que essa porta se fechou automaticamente depois de um tempo limite pré programado que passou^000000.";
				close;
			}
		} else {
			mes "^3355FFvocê tenta empurrar a porta com toda a sua força, mas falha em fazê-la se mover^000000.";
			close;
		}
	}
}
kh_dun01,36,195,0	duplicate(Dispositivo de Acesso#kh3)	Dispositivo de Acesso#kh4	HIDDEN_NPC

// ------------------------------------------------------------------
kh_mansion,78,55,5	script	Mordomo#kh	4_M_MANAGER,{
	if (KielHyreQuest < 46) {
		mes "[Mordomo]";
		mes "Isso é uma residência privada, por favor saia.";
		close2;
		warp("lighthalzen",188,201);
		end;
	} else if ((KielHyreQuest >= 46) && (KielHyreQuest < 50)) {
		mes "[Mordomo]";
		mes "Saudações.";
		mes "Você foi convidado pelo mestre dessa mansão?";
		next;
		switch (select("Mostrar a Chave Dourada","????")) {
			case 1:
			mes "[Mordomo]";
			mes "Ah, Mestre "+strcharinfo(CHAR_NAME)+".";
			mes "Estava aguardando a sua chegada.";
			mes "Por favor, por aqui.";
			close2;
			warp("kh_mansion",21,14);
			end;
			case 2:
			mes "[Mordomo]";
			mes "Se você não foi convidado pelo mestre dessa mansão, então eu temo que tenha de insistir em sua partida imediata!";
			close2;
			warp("lighthalzen",188,201);
			end;
		}
	} else if ((KielHyreQuest >= 50) && (KielHyreQuest < 64) || (KielHyreQuest >= 70)) {
		mes "[Mordomo]";
		mes "Ah, Mestre "+strcharinfo(CHAR_NAME)+".";
		mes "É um prazer em receber sua compania novamente.";
		mes "Você gostaria de ver meu mestre?";
		next;
		switch (select("Sim","Não")) {
			case 1:
			mes "[Mordomo]";
			mes "Muito bem.";
			mes "Por aqui";
			close2;
			warp("kh_mansion",21,14);
			end;
			case 2:
			mes "[Mordomo]";
			mes "Muito bem.";
			mes "Por favor, sinta-se em casa.";
			close;
		}
	} else if ((KielHyreQuest == 52) || (KielHyreQuest == 54) || (KielHyreQuest >= 64) && (KielHyreQuest <= 70)) {
		mes "[Mordomo]";
		mes "Ah, Mestre "+strcharinfo(CHAR_NAME)+".";
		mes "É um prazer em receber sua compania novamente.";
		mes "Você gostaria de ver meu mestre, ou...?";
		next;
		switch (select("^FF0000Kiel Hyre^000000","^3355FFMitchell^000000")) {
			case 1:
			mes "[Mordomo]";
			mes "Muito bem.";
			mes "Por aqui";
			close2;
			warp("kh_mansion",21,14);
			end;
			case 2:
			mes "[Mordomo]";
			mes "Oh...? Você deve estar aqui para trazer boas novas.";
			mes "Com licença...";
			next;
			mes "^3355FFO Mordomo furtivamente olhou em volta pra checar se alguém o estava observando^000000.";
			next;
			mes "[Mordomo]";
			mes "Acredito que seja seguro o bastante em deixar você vê-lo agora...";
			mes "Por favor, rápido por aqui.";
			close2;
			warp("kh_mansion",20,87);
			end;
		}
	}
}

// ------------------------------------------------------------------
kh_mansion,22,28,4	script	Kiel Hyre#kh	4_M_KHKYEL,{
	if (!checkweight(Spawn,200)) {
		mes "^3355FFSó um segundo...";
		mes "Você está carregando muitos itens com você agora, então você vai precisar liberar mais espaço no seu inventario antes^000000.";
		close;
	} else if (KielHyreQuest < 46) {
		cutin("kh_kyel01",2);
		mes "[Kiel Hyre]";
		mes ".........";
		mes ".........";
		mes "............";
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 46) {
		cutin("kh_kyel01",2);
		mes "[Kiel Hyre]";
		mes "Ah, você deve ser "+strcharinfo(CHAR_NAME)+".";
		mes "Gostaria de lhe agradecer por salvar minha vida.";
		mes "Você deve ter muitas perguntas a me fazer, então eu farei o melhor para lhe dar respostas.";
		next;
		while (true) {
			switch (select("Robôs?","^3355FFKiehl^000000?","Broche de ^FF0000Elly^000000?")) {
				case 1:
				mes "[Kiel Hyre]";
				mes "Andei pesquisando robótica por trinta e dois anos agora.";
				mes "Tenho orgulho de dizer que tive sucesso onde o grande Sábio Varmundt não teve.";
				next;
				mes "[Kiel Hyre]";
				mes "Era meu sonho em desenvolver robôs humanóides de humanos.";
				mes "Aqueles Guardiões poderiam ser robôs também, mas eles não operam usando vontade própria.";
				next;
				mes "[Kiel Hyre]";
				mes "Se você quiser saber mais especificamente sobre robótica, por quê você não fala com ^3355FFAllysia^000000?";
				mes "Ela pode explicar tudo muito mais suscintamente que eu.";
				mes "Eu tendo a errar...";
				++.@KHQRead;
				next;
				break;
				case 2:
				mes "[Kiel Hyre]";
				mes "^3355FFKiehl^000000 é meu único filho, mas o amor da minha vida morreu assim que deu à luz a ele.";
				mes "Eu admito que ele é um gênio em design mecânico e desenvolvimento.";
				next;
				mes "[Kiel Hyre]";
				mes "Ele é altamente responsável pela criação da terceira geração de robôs como Elly.";
				mes "Infelizmente, ele está tentando modificar suas criações para algum propósito sinistro.";
				next;
				mes "[Kiel Hyre]";
				mes "Eu tentei pará-lo, mas acabei ficando trancado dentro da fábrica.";
				mes "Não sei porque ele quer fazer isso.";
				mes "Ainda não tenho absolutamente nenhuma pista...";
				++.@KHQRead;
				next;
				break;
				case 3:
				mes "[Kiel Hyre]";
				mes "Aquele broche que Elly estava segurando tem o ^3355FFemblema de Kiehl^000000 entalhado nele.";
				mes "Ah e aquele homem de preto ameaçando os estudantes?";
				mes "Aquele era provavelmente ^3355FFKaiser^000000, o guarda-costas de Kiehl.";
				next;
				mes "[Kiel Hyre]";
				mes "Kaiser...";
				mes "Eu não sei nada sobre ele.";
				mes "Nunca nem olhei seu rosto!";
				mes "Kiehl simplesmente o contratou sem que eu soubesse...";
				++.@KHQRead;
				next;
				break;
			}
			if (.@KHQRead == 3) {
				mes "[Kiel Hyre]";
				mes "Se você não tiver mais perguntas para mim, então você por favor me deixe descansar?";
				mes "Ainda não estou me sentido bem do tempo que fiquei trancado na fábrica.";
				delitem(Golden_Key,1);
				delitem(Kiel_Button,1);
				KielHyreQuest = 48;
				break;
			}
		}
	} else if (KielHyreQuest == 48) {
		mes "[Kiel Hyre]";
		mes "Ah, Quase esqueci.";
		mes "Por favor, peque isso como uma pequena recompensa por ter salvo minha vida.";
		getitem(Set_Of_Taiming_Item,1);
		getexp(700000,0);
		KielHyreQuest = 50;
	} else if ((KielHyreQuest >= 50) && (KielHyreQuest < 64)) {
		mes "[Kiel Hyre]";
		mes "Se você não tiver mais perguntas para mim, então você por favor me deixe descansar?";
		mes "Ainda não estou me sentido bem do tempo que fique trancado na fábrica.";
	} else if (KielHyreQuest == 64) {
		cutin("kh_kyel01",2);
		mes "[Kiel Hyre]";
		mes "Hm? Há algo ";
		mes "que você";
		mes "gostaria de";
		mes "me perguntar?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu não tenho evidências concretas suficientes ainda, mas eu devo ter algumas perguntas em breve.";
	} else if (KielHyreQuest == 68) {
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "Ah,"+strcharinfo(CHAR_NAME)+".";
		mes "É você.";
		mes "Então como posso lhe ajudar hoje?";
		next;
		select("Sobre ^3355FFAllysia^000000...");
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sabe, eu estava olhando nessa casa deserta em Yuno.";
		mes "Descobri um velho porta retratos de uma mulher que se parece muito com Allysia.";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "Oh...";
		mes "Isso é tudo?";
		mes "Pensei que você tinha uma pergunta sobre robótica.";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "De qualquer forma, é uma estranha coincidência.";
		mes "Bem, suporto que não é tão estranho encontrar pessoas parecidas com outras...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu não acho que seja só uma coincidência.";
		mes "A mulher naquele pequeno retrato de trinta anos também era chamada Allysia";
		mes "Ela ela trabalhava na rua Orsimier em Yuno.";
		mes "Isso lhe diz algo?";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "......";
		mes ".........";
		mes "............";
		next;
		cutin("kh_kyel01",2);
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Então pensei que essa Allysia deve ter sido a mulher que você amou";
		mes "Que você baseou a aparência dos seus robôs nela.";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "............";
		next;
		cutin("kh_kyel01",2);
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Acho que foi isso que aconteceu.";
		mes "Quando você era um jovem, pobre você se apaixonou por Allysia.";
		mes "Entretanto, ela estava apaixonada por Rosimier, que era rico e poderoso.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Entretanto, Rosimier estava noivo de uma outra mulher";
		mes "Ele acabou por casar-se com sua noiva, assim partindo o coração de Allysia.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sentindo-se traída, seu coração partido, Allysia pulou em um rio.";
		mes "Então você decidiu se vingar de Rosimier, então acabou por se juntar com a Corporação Rekenber!";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "Hahahahahahaha!";
		mes "Oh, Que imaginação";
		mes "Isso é muito ridículo...";
		mes "Ainda assim, eu admito";
		mes "Talvez eu tenha feito o modelo Allysia depois de ver aquela mulher há muito tempo.";
		next;
		mes "[Kiel Hyre]";
		mes "Eu quase esqueci dela!";
		mes "Acho que nós eramos amigos...";
		mes "Ainda assim, de onde você teve a idéia de que eu pudesse estar apaixonado por ela?";
		next;
		select("Revelar o retrato de Kiel da Cabana");
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "O-O quê...";
		mes "Como...";
		mes "Onde você...?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Kiel Hyre, eu encontrei esse retrato seu quando jovem na casa do homem que comprou o anel de Allysia.";
		mes "Eu até falei com o pescador que descobriu o corpo de Allysia.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Você pagou uma quantia absurda de dinheiro para comprar o anel de Allysia.";
		mes "Como você pode me dizer que você não a amava?";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "*Droga...*";
		mes "Você me pegou, você me pegou.";
		mes "Eu não queria que você descobrisse a verdade.";
		mes "Você está certo.";
		mes "Eu amei Allysia, e desenvolvi meu robô para se parecer com ela.";
		next;
		mes "[Kiel Hyre]";
		mes "Eu nunca poderia a esquecer.";
		mes "Nunca.";
		mes "Mas nunca faria nada para ferir o Rosimier!";
		mes "Sou um cientista!";
		mes "Eu o odiei quando eu era jovem, mas as coisas são diferentes agora!";
		next;
		mes "[Kiel Hyre]";
		mes "Eu não derramei lágrimas quando o Rosimier caiu, mas eu não fui o responsável.";
		mes "Além do mais eu não tinha os recursos ou a capacidade de causar...";
		next;
		cutin("kh_kyel02",2);
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Infelizmente acho que as evidências mostram o contrário.";
		next;
		select("Mostrar o retrato de Rosimier");
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Dê uma boa olhada nesse retrato que encontrei na antiga casa de Rosimier.";
		mes "Percebe algo... Incriminador?";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "Com excessão daquele James Rosimier, você quer dizer?";
		mes "Não! Não vejo nada errado com essa imagem ao todo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Dê uma boa olhada no relógio de bolso no retrato.";
		mes "Aquele é o relógio de bolso que você usa hoje, não é?";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "...!!!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Você pode não ter causado a queda de Rosimier por si só.";
		mes "Mas com a ajuda da Corporação Rekenber eu diria que era inteiramente possível!";
		next;
		cutin("kh_Kyel03",2); 
		mes "[Kiel Hyre]";
		mes "Eu não me arrependo do que fiz, eles mataram minha Allysia!";
		mes "Se James não a tivese traído, se ele não a tivesse feito cometer suicídio...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Aí é que você está errado!";
		mes "Allysia foi assassinada, ela não cometeu suicídio.";
		mes "Dê uma boa olhada nesse bilhete aqui!";
		next;
		mes "[Kiel Hyre]";
		mes "O quê?!";
		next;
		select("Mostrar o bilhete de James");
		mes "[Kiel Hyre]";
		mes "O que isso prova?";
		mes "Isso não mostra que James não traiu Allysia.";
		mes "Como isso muda tudo?";
		mes "Ela está morta, nada que eu faça trará ela de volta prá mim!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu nunca disse que James não a traiu.";
		mes "Olhe na data no bilhete.";
		mes "James fez planos de fugir com ela em 20 de Agosto.";
		mes "Entretanto, o corpo dela foi encontrado no mesmo dia.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Portanto, Allysia deve ter morrido em 19 de Agosto.";
		mes "Se ela estava planejando em fugir com seu amor no dia seguinte.";
		mes "Então ela não tinha razão para se matar!";
		next;
		mes "[Kiel Hyre]";
		mes "Não, isso não está certo!";
		mes "Ela provavelmente não podia confiar em mim.";
		mes "Ela deve ter percebido que ela não era nada além de um brinquedo para ele!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ah sim?";
		mes "Digo que ela pulou no rio por que você encontrou-se com ela naquele dia.";
		mes "Agora, dê uma boa olhada nisso!";
		next;
		select("Mostrar o bilhete de K.H.");
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Esse bilhete foi escrito por um home com suas iniciais, K.H. essas iniciais estavam também escritas no retrato dela.";
		mes "Você deve ter escrito esse bilhete.";
		mes "Há muitas coincidências!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "De acordo com esse bilhete, você disse a Allysia que você queria vê-la novamente no lugar onde se encontraram antes.";
		mes "Acho que você a viu novamente em 19 de Agosto, o dia que ela morreu!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Estou presumindo que o lugar que vocês se encontraram primeiro foi próximo ao rio.";
		mes "Chega de suas mentiras, me conte o que realmente aconteceu!";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "............";
		mes ".........";
		mes "......";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "Hah... Ha ha ha...";
		mes "Sim... Está certo...";
		mes "Aquela noite horrível.";
		mes "Eu lembro muito bem...";
		mes ".....................";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "Aquela noite, quando ela veio ao rio, para me encontrar como eu havia pedido.";
		mes "Eu implorei a ela para fugir comigo, ao invés de esperar por aquele James.";
		next;
		mes "[Kiel Hyre]";
		mes "Ela insistiu que James nunca a trairia, e ele prometeu a levar com ele no dia seguinte.";
		mes "Você pode imaginar como aquilo me fez sentir?";
		mes "Eu não era nada prá ela.";
		next;
		mes "[Kiel Hyre]";
		mes "Meus sentimentos não importavam para ela.";
		mes "Ela ficou irritada com aquele anel...";
		mes "Eu perdi o controle e tentei tirar aquela coisa maldita dela e jogar dentro do rio...";
		next;
		mes "[Kiel Hyre]";
		mes "Mas sabe de uma coisa?";
		mes "Ela se debateu, ela realmente lutou comigo!";
		mes "Era apenas uma pequena briga, mas então antes que eu percebesse o chão debaixo de nós cedeu e... as chuvas...";
		next;
		select(".........");
		mes "[Kiel Hyre]";
		mes "Não estou certo o que foi.";
		mes "A chuva enfraqueceu o chão, algo estava errado... e ela simplesmente...";
		mes "Simplesmente...";
		mes "O rio a engoliu...";
		mes "Me senti vazio.";
		mes "Ela se foi. ";
		delitem(Family_Portrait,1);
		delitem(Elysia_Portrait,1);
		delitem(Kyll_Hire_Letter2,1);
		delitem(Piece_Memo_Of_James,1);
		delitem(Man_Portrait,1);
		KielHyreQuest = 70;
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest <= 70) {
		cutin("kh_kyel01",2);
		mes "[Kiel Hyre]";
		mes "Você já sabe que ela foi encontrada morta no dia seguinte.";
		mes "Mas o que realmente partiu meu coração foi que ela segurou aquele anel tão firmemente em sua mão, mesmo na morte...";
		next;
		cutin("kh_kyel03",2);
		mes "[Kiel Hyre]";
		mes "A família dele tinha tudo enquanto eu não tinha nada.";
		mes "Ele teve a audácia de tirar";
		mes "Allysia de mim?!";
		mes "Como isso poderia estar certo?";
		next;
		mes "[Kiel Hyre]";
		mes "Ainda que ela tenha falecido eu ainda queria provar para Allysia que tipo de pessoa horrível James era realmente.";
		mes "E então foi quando me juntei à Corporação Rekenber.";
		next;
		mes "[Kiel Hyre]";
		mes "Desenvolvi a primeiríssima Geração de Robôs, a qual eu chamei Allysia, e vendi os esquemas para Rekenber.";
		mes "Eu lhes dei robôs, e eles me deram dinheiro, poder, subordinados obedientes.";
		next;
		mes "[Kiel Hyre]";
		mes "Claro eu sabia que usariam meus robôs para espionar e matar!";
		mes "Mas sabe de uma coisa?";
		mes "Eu não me importava desde que eles me dessem os meios para minha vingança.";
		mes "Era a parceria perfeita, realmente.";
		next;
		mes "[Kiel Hyre]";
		mes "Você me pegou bem onde você queria.";
		mes "Para quem você está trabalhando e exatamente o que você quer?";
		mes "Meus esquemários?";
		mes "Minha morte?";
		mes "Tudo...?";
		next;
		cutin("kh_kyel01",2);
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Na verdade, eu só quero perguntar sobre a natureza da sua relação profissional com a Corporação Rekenber e sobre Kiehl.";
		next;
		mes "[Kiel Hyre]";
		mes "Depois de ouvir minha história doida, acho que você já suspeita da verdade sobre ele...";
		mes "Ele também é um robô, especificamente o primeiro da segunda geração de modelos.";
		next;
		mes "[Kiel Hyre]";
		mes "Sua mente foi desenvolvida usando.";
		mes "Uma forma experimental e instável, de Pergaminhos de Mágica Condensada.";
		mes "Ele foi o único robô da Segunda Geração que foi permitido existir.";
		next;
		mes "[Kiel Hyre]";
		mes "Eu fiquei muito apegado a Kiehl.";
		mes "Não é de se surpreender, vendo que robótica se tornou minha vida.";
		mes "Eu até o criei como meu próprio filho, e ensinei-lhe tudo sobre robótica";
		next;
		mes "[Kiel Hyre]";
		mes "Kiehl agora é um gênio, e até desenvolveu a Terceira Geração de Robôs.";
		mes "Infelizmente eu falhei em educá-lo propriamente com moral e ética humana.";
		next;
		select("......");
		mes "[Kiel Hyre]";
		mes "Ele está transformando a Terceira Geração de robôs em máquinas de matar.";
		mes "Por isso eu tentei colocá-los todos na academia, então eles poderiam aprender o comportamento humano.";
		next;
		mes "[Kiel Hyre]";
		mes "Mesmo que a academia tenha atrasado os planos de Kiehl.";
		mes "Ele foi bem sucedido em converter todos os robôs em incontroláveis máquinas de destruição em massa.";
		next;
		mes "[Kiel Hyre]";
		mes "Sim, ele estava trabalhando juntamente com Rekenber.";
		mes "Seu verdadeiro objetivo é criar máquinas mortíferas para uso de Rekenber.";
		next;
		mes "[Kiel Hyre]";
		mes "Você sabe todos os segredos do meu passado agora.";
		mes "Não estou aborrecido com você ou nada, mas eu tenho algo que gostaria de lhe pedir.";
		next;
		mes "[Kiel Hyre]";
		mes "Por favor, pare Kiehl!";
		mes "Eu não quero que essa loucura destrua mais robôs!";
		mes "Vejo cada um e todos eles como se fossem meus filhos!";
		next;
		mes "[Kiel Hyre]";
		mes "Sei que devo tomar total responsabilidade por tudo que aconteceu.";
		mes "Eu prometo que vou pagar por meus atos, assim que tudo estiver resolvido.";
		next;
		select("Aceitar","Okay","Aham");
		mes "[Kiel Hyre]";
		mes "Muitíssimo obrigado!";
		mes "Você pode encontrar Kiehl no nível subterrâneo dessa mansão.";
		next;
		mes "[Kiel Hyre]";
		mes "Ele fica em um quarto velho onde ele foi criado.";
		mes "Mas ele reconstruiu como um tipo de caverna para manter todos fora.";
		mes "Incluindo eu.";
		mes "Sim, ele não confia em ninguém mais...";
		next;
		mes "[Kiel Hyre]";
		mes "Quando você o encontrar, quero que você tire o anel de Allysia do coração dele.";
		mes "Se você o remover, vai impedir dele se tornar selvagem.";
		next;
		select("Anel de Allysia?");
		mes "[Kiel Hyre]";
		mes "Sim... Seu anel é o começo de tudo.";
		mes "Eu coloquei aquilo no coração dele para que eu nunca esquecesse o que o Rosimier fez para mim.";
		next;
		mes "[Kiel Hyre]";
		mes "Acho que o crescimento de Kiehl é tão mais poderoso que o que armas normais podem não funcionar nele mais.";
		mes "Use esse dispositivo que fará com que seu suprimento de energia flutue.";
		getitem(Toy_Motor,1);
		next;
		cutin("kh_kyel03",2);
		mes "[Kiel Hyre]";
		mes "Se você conseguir ligar isso no corpo de Kiehl, então ele não poderá usar o corpo dele com poder total.";
		mes "Enquanto ele estiver enfraquecido, abra o seu peito e tire o anel do seu coração.";
		next;
		mes "[Kiel Hyre]";
		mes "Me avise assim que você estiver pronto, então eu o guiarei ao quarto de Kiehl.";
		KielHyreQuest = 74;
	} else if ((KielHyreQuest >= 74) && (KielHyreQuest <= 104)) {
		mes "[Kiel Hyre]";
		mes "Você está pronto para confrontar Kiehl agora?";
		next;
		switch (select("Sim","Não")) {
			case 1:
			mes "[Kiel Hyre]";
			mes "Há... uma passagem secreta que está aberta agora.";
			mes "Apenas vá para a minha direita mas tenha cuidado.";
			mes "Kiehl é extremamente perigoso.";
			close2;
			enablenpc("KiehlRoomWarp#kh");
			donpcevent("KiehlRoomWarp#kh::OnEnable");
			cutin("",255);
			end;
			break;
			case 2:
			mes "[Kiel Hyre]";
			mes "Por favor leve o tempo que precisar.";
			mes "Eu imagino que não será fácil.";
			break;
		}
	} else if ((KielHyreQuest >= 74) && (KielHyreQuest <= 106)) {
		cutin("kh_kyel01",2);
		mes "[Kiel Hyre]";
		mes "Você retornou...!";
		mes "Então você conseguiu recuperar o Anel de Allysia do coração de Kiehl?";
		next;
		if (!countitem(Elysia_Ring)) {
			mes "[Kiel Hyre]";
			mes "Quer dizer... Você não o tem?";
			mes "Por favor, recupere o Anel de Allysia do coração de Kiehl!";
			next;
			enablenpc("KiehlRoomWarp#kh");
			donpcevent("KiehlRoomWarp#kh::OnEnable");
			close2;
			cutin("",255);
			end;
		}
		mes "[Kiel Hyre]";
		mes "O-O quê aconteceu...?";
		mes "Kiehl desenvolveu um novo corpo para ele?";
		mes "I-Isso o faz a Quarta Geração de robôs.";
		mes "Eu não tinha idéia que ele era tão esperto.";
		next;
		mes "[Kiel Hyre]";
		mes "Espere, agora pensando melhor eu vi corpos de robôs que pareciam com Kiehl quando eu estava trancado na fábrica.";
		mes "Então ele estava usando aquelas cópias para desenvolver atualizações pessoais.";
		next;
		mes "[Kiel Hyre]";
		mes "Aqui, por favor pegue esse cartão que deixará você entrar e investigar os níveis mais profundos da fábrica.";
		mes "Eu investigarei o quarto de Kiehl.";
		getitem(Fancy_Key_Card,1);
		KielHyreQuest = 108;
		next;
		mes "[Kiel Hyre]";
		mes "Kiehl é minha responsabilidade...";
		mes "Não importa qual o custo eu tenho de pará-lo!";
		mes "Oh, e aqui, por favor pegue isso com toda minha gratidão por sua ajuda,"+(Sex == SEX_FEMALE ? "Sr":"Sra")+". "+strcharinfo(CHAR_NAME)+".";
		getitem(Old_Card_Album,1);
		delitem(Elysia_Ring,1);
		getexp(1000000,0);
	} else if (KielHyreQuest >= 108) {
		mes "[Kiel Hyre]";
		mes "......";
		mes ".........";
		mes "............";
	}
	close2;
	cutin("",255);
	end;
}

// ------------------------------------------------------------------
kh_mansion,18,30,4	script	Allysia#kh	4_F_KHELLISIA,{
	if (KielHyreQuest < 46) {
		mes "[Allysia]";
		mes "Quem é você?";
		mes "Como chegou aqui?";
		mes "Vá embora";
		close;
	}
	cutin("kh_ellisia",2);
	if (KielHyreQuest < 70) {
		mes "[Allysia]";
		mes "você deve estar surpreso";
		mes "por tudo que tem";
		mes "acontecido. Talvez tudo";
		mes "fosse mais fácil de entender";
		mes "se eu explicasse sobre robôs?";
		next;
		switch (select("Sim","Não")) {
			case 1:
			mes "[Allysia]";
			mes "Os robôs que você tem";
			mes "encontrado são bonecos mecânicos";
			mes "automatizados que podem";
			mes "pensar e operar independentemente.";
			mes "Muitos sábios tentaram desenvolver";
			mes "seus próprios robôs, mas falharam.";
			next;
			mes "[Allysia]";
			mes "Meu mestre, Kiel Hyre, esteve";
			mes "estudando robótica desde que";
			mes "tinha vinte anos e";
			mes "desenvolveu três diferentes";
			mes "gerações de robôs, a primeira,";
			mes "segunda e terceira gerações.";
			next;
			switch (select("Primeira Geração","Segunda Geração","Terceira Geração")) {
				case 1:
				mes "[Allysia]";
				mes "Eu sou um bom exemplo da";
				mes "Primeira Geração de Robôs de";
				mes "Kiel. Fui construída usando";
				mes "um esqueleto mecânico pesado,";
				mes "um coração robótico e pele";
				mes "quimicamente sintetizada.";
				next;
				mes "[Allysia]";
				mes "Minha unidade de processamento central,";
				mes "equivalente à seu cérebro, é";
				mes "essencialmente um Pergaminho de Memória";
				mes "baseado no esboço de Pergaminhos";
				mes "Mágicos que vocês";
				mes "aventureiros usam em batalha.";
				next;
				mes "[Allysia]";
				mes "Sou o mais velho tipo de";
				mes "robô humanóide, então eu peso";
				mes "muito, e minha mente pode somente";
				mes "processar uma quantidade limitada de";
				mes "dados. Então, eu não posso expressar";
				mes "emoções similarmente à um humano.";
				next;
				break;
				case 2:
				mes "[Allysia]";
				mes "A Primeira Geração de robôs";
				mes "foram desenvolvidas na maioria de";
				mes "partes mecânicas, mas a";
				mes "Segunda Geração de Robôs";
				mes "incorporaram a ciência e tecnologia";
				mes "dos Homunculus.";
				next;
				mes "[Allysia]";
				mes "A Segunda Geração de robôs";
				mes "parecem ter mais fida, já que";
				mes "têm pele artificial e carne";
				mes "criadas, ainda assim são";
				mes "construídos de um pesado";
				mes "esqueleto mecânico.";
				next;
				mes "[Allysia]";
				mes "A tecnologia elemental de";
				mes "pergaminhos dos Sábios também usada";
				mes "para desenvolver o Pergaminho de";
				mes "memória condensada, uma unidade de";
				mes "processamento central superior à";
				mes "usada na Primeira Geração de robôs.";
				next;
				mes "[Allysia]";
				mes "Então os Pergaminhos de Memória";
				mes "Condensados eram 100,000 vezes";
				mes "mais poderosos que os Pergaminhos";
				mes "de Memória comuns, eles eram";
				mes "problemáticos e tendiam";
				mes "à muitos erros e problemas";
				next;
				mes "[Allysia]";
				mes "A Segunda Geração de Robôs";
				mes "eram capazes de expressar";
				mes "emoções humanas, mas sua";
				mes "produção foi interrompida após seis";
				mes "anos pois foram considerados";
				mes "defeituosos.";
				next;
				break;
				case 3:
				mes "[Allysia]";
				mes "A Terceira Geração de robôs";
				mes "foram desenvolvidas na sua maioria";
				mes "pelo filho de Kiel Hyre, Kiehl,";
				mes "e não usam esqueletos";
				mes "mecânicos: Todo o corpo";
				mes "é basicamente um homunculus.";
				next;
				mes "[Allysia]";
				mes "Com seus corpos orgânicos";
				mes "e corações artificiais avançados";
				mes "feitos da imitação de Pedados do Coração";
				mes "de Ymir , eles podem experimentar";
				mes "fenômenos psicológicos";
				mes "como simples humanos.";
				next;
				mes "[Allysia]";
				mes "Kiehl conseguiu desenvolver";
				mes "uma forma mais estável do";
				mes "Pergaminho de Memória Condensada";
				mes "que não sofre dos";
				mes "erros críticos, e pode ser";
				mes "produzido em massa a baixo custo.";
				next;
				mes "[Allysia]";
				mes "Elly é atualmente um protótipo";
				mes "da Terceira Geração. Uma vez";
				mes "que melhoramos os protótipos,";
				mes "começamos a produção em massa.";
				mes "De fato, a academia é nosso";
				mes "campo de testes de protótipos.";
				next;
				mes "[Allysia]";
				mes "O fto de que um protótipo de";
				mes "robôs podem interagir assim como";
				mes "humanos reais, é prova de nosso";
				mes "sucesso em robótica.";
				next;
				break;
			}
			case 2:
			mes "[Allysia]";
			mes "Por favor me avise se";
			mes "quiser aprender mais sobre";
			mes "os robôs de Kiel Hyre.";
			break;
		}
	} else {
		mes "[Allysia]";
		mes "......";
		mes ".........";
		mes "............";
	}
	close2;
	cutin("",255);
	end;
}

// ------------------------------------------------------------------
lighthalzen,188,200,0	script	Abduction_trigger	FAKE_NPC,3,1,{
	OnTouch:
	if (KielHyreQuest == 50) {
		mes "^3355FFConforme você sai da mansão, algo bate sobre sua cabeça e você instantaneamente perde a consciência^000000.";
		close2;
		percentheal(-99,0);
		warp("kh_mansion",30,75);
	}
	end;
}

// ------------------------------------------------------------------
kh_mansion,25,79,4	script	Mulher Misteriosa#kh	4_F_JOB_HUNTER,3,3,{
	OnTouch:
	if (KielHyreQuest == 50) {
		mes "^3355FFVocê acordou com sua cabeça latejando de dor, e uma mulher misteriosa parada em sua frente^000000.";
		next;
		mes "[??????]";
		mes "Hm? Oh, você acordou antes do que eu pensava.";
		mes "Você deve se sentir confus"+(Sex == SEX_MALE ? "o":"a")+", mas ouça atentamente.";
		mes "Se não então não posso garantir sua segurança, certo?";
		next;
		mes "[??????]";
		mes "Tudo o que você precisa saber é que sou um agente secreto da República de Schwaltzvalt.";
		mes "Estamos investigando a atividade anormal entre Kiel Hyre e a Corporação Rekenber.";
		next;
		mes "[??????]";
		mes "Vimos você entrar na mansão e conversar com Kiel Hyre, então basicamente você está aqui para interrogatório.";
		mes "Agora me diga a verdade.";
		mes "Como você conheceu Kiel Hyre?";
		next;
		switch (select("Eu vou contar tudo!","Não sei de nada!")) {
			case 2:
			mes "[??????]";
			mes "Não...sabe...de nada?";
			mes "Tem certeza disso?";
			mes "Somente poucos selecionados podem falar com Kiel Hyre pessoalmente.";
			mes "Você deve ter alguma conexão com ele.";
			mes "Estou certo, não estou?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "......";
			mes ".........";
			mes "............";
			next;
			mes "[??????]";
			mes "você está tentando o proteger?";
			mes "Acho que você não deve estar entendendo o tipo de pessoa que você realmente está tratando aqui.";
			mes "Vou lhe dizer o que descobri sobre ele...";
			next;
			mes "[??????]";
			mes "Kiel Hyre.";
			mes "Diretor executivo da fundação Kiel Hyre, fabricante de vários equipamentos.";
			mes "Sua companhia começou como uma pequena loja em Einbroch cuja tecnologia lentamente ficou famosa.";
			next;
			mes "[??????]";
			mes "A Corporação Rekenber ofereceu uma fusão com a Fundação Kiel Hyre.";
			mes "Ainda não estamos certos por que eles queriam Kiel Hyre em particular par consertar e desenvolver seus Guardiões...";
			next;
			mes "[??????]";
			mes "Também não temos certeza por que eles queriam repentinamente se focar mais no desenvolvimento de Guardiões.";
			mes "Então repentinamente o filho de Kiel Hyre aparece do nada.";
			next;
			mes "[??????]";
			mes "É muito suspeito.";
			mes "Não há registros de seu nascimento ou nada.";
			mes "Ainda assim, talvez Kiel Hyre realmente deve ter tido ele com sua secretária, Allysia.";
			mes "Bem, ninguém tem certeza.";
			next;
			mes "[??????]";
			mes "De qualquer forma, o filho e herdeiro de Kiel Hyre.";
			mes "Kiehl, ajudou seu pai a estabelecer essa academia especial como sua forma de repagar a sociedade.";
			next;
			mes "[??????]";
			mes "Quase todas as corporações e organizações tentaram colocar seus espiões dentro dessa academia, mas todos eles foram rejeitados.";
			mes "É estranho, pelo menos um deles deveria ter conseguido.";
			next;
			mes "[??????]";
			mes "E recentemente, Kiehl Hyre teve um encontro secreto com executivos de Rekenber para anunciar seu novo projeto.";
			mes "Ele pretende criar avançados robôs humanóides que substituirão os guardiões!";
			next;
			mes "[??????]";
			mes "Nossos espiões reportaram que Kiel Hyre não foi encontrado para aquela reunião, assim como sua secretária de confiança, Allysia.";
			mes "Ele...";
			mes "Ele simplesmente desapareceu!";
			next;
			mes "[??????]";
			mes "Então, Kiel Hyre aparece em sua mansão depois de todo esse tempo como se nada tivesse acontecido!";
			mes "Ao mesmo tempo, Kiehl desaparece, com a desculpa de conduzir pesquisas.";
			next;
			mes "[??????]";
			mes "Rekenber está patrocinando ambos Kiehl e Kiel.";
			mes "Mas há algum conflito acontecendo entre pai e filho, eu simplesmente sei!";
			mes "Agora me diga, o que está havendo?";
			next;
			mes "[??????]";
			mes "Não tenho certeza o quão bem você conhece esse país.";
			mes "Mas o fato que Rekenber está envolvida deve lhe dizer que essas não são boas pessoas.";
			mes "Conte-me o que você sabe sobre eles!";
			next;
			switch (select("Certo","......")) {
				case 2:
				mes "[??????]";
				mes "Se você não cooperar, então não posso garantir sua segurança, aventureiro";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Huh? O quê...?";
				mes "O que isso quer dizer?";
				mes "você está me ameaçando?";
				next;
				select("Apenas faça o que ela diz.");
				case 1:
				mes "[??????]";
				mes "Ótimo.";
				mes "Sou a agente Mitchell Layla.";
				mes "Daqui para frente, você está trabalhando para a República Schwaltzvalt!";
				KielHyreQuest = 52;
				close;
			}
		}
	} else if (KielHyreQuest == 52) {
		mes "[Mitchell]";
		mes "Tenho algumas informações novas para você.";
		mes "Há uma velha senhora em Yuno que conheceu uma mulher chamada Allysia 30 anos atrás.";
		next;
		mes "[Mitchell]";
		mes "A história é que essa Allysia de 30 anos atrás cometeu suicídio e é idêntica à secretária de Kiel Hyre, que também se chama Allysia.";
		next;
		mes "[Mitchell]";
		mes "Isso é muita coincidência.";
		mes "Quero que você vá a Yuno e investigue.";
		mes "Quando terminar, fale com o gerente de Kiel Hyre, e ele vai lhe trazer até mim.";
		next;
		mes "[Mitchell]";
		mes "Sim, eu sei.";
		mes "Aquele cara na verdade trabalha para mim.";
		mes "De qualquer forma, quando estiver pronto para ir para Yuno, me avise, e você poderá embarcar no avião federal.";
		KielHyreQuest = 54;
		close;
	} else if (KielHyreQuest == 54) {
		mes "[Mitchell]";
		mes "Está pronto?";
		mes "Vou deixá-lo embarcar no avião federal, para que você chegue a Yuno, e termine sua missão rapidamente.";
		next;
		switch (select("Sim","Não")) {
			case 1:
			mes "[Mitchell]";
			mes "Boa sorte.";
			mes "Uma vez completada sua missão, assegure-se de reportar-se ao gerente de Kiel Hyre para que ele lhe traga a mim.";
			close2;
			warp("yuno",54,209);
			end;
			case 2:
			mes "[Mitchell]";
			mes "A vontade...";
			mes "Mas tenha em mente que não sou uma mulher paciente!";
			close;
		}
	} else if (KielHyreQuest == 64) {
		mes "[Mitchell]";
		mes "Ah, você está de volta.";
		mes "O que você tem para reportar da sua investigação?";
		next;
		mes "[Mitchell]";
		mes ".....................";
		mes "Ah, entendo. Bom trabalho.";
		mes "Por que você não fala com Kiel Hyre e o confronta com o que você descobriu sobre seu passado?";
		mes "Sim, tosta ele.";
		next;
		mes "[Mitchell]";
		mes "Use esse microfone oculto, assim poderemos lhe ajudar se estiver em perigo.";
		mes "Quero que você descubra quem Kiel é realmente, e qual sua relação com Rekenber.";
		KielHyreQuest = 68;
		next;
		warp("kh_mansion",83,50);
		end;
	} else {
		mes "[Mitchell]";
		mes "Esta area é restrita, melhor você sair agora.";
		close2;
		warp("kh_mansion",83,50);
		end;
	}
}

// ------------------------------------------------------------------
kh_mansion,29,27,0	script	KiehlRoomWarp#kh	WARPNPC,2,2,{
	OnTouch:
	warp("kh_kiehl01",10,31);
	end;

	OnEnable:
	initnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	end;

	OnTimer30000:
	stopnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
yuno,257,140,4	script	Vovó Estranha#kh	4_F_EINOLD,{
	if (KielHyreQuest < 54) {
		mes "[Vovó]";
		mes "Aonde você vai meu querido?";
		mes "Onde está você, meu queridinho?";
		close;
	} else if (KielHyreQuest == 54) {
		mes "[Vovó]";
		mes "Canção de ninar...";
		mes "Diz boa noite...";
		mes "Acalma nenenzinho...";
		mes "Vá dormiiiirrrr";
		next;
		switch (select("O que está fazendo?","Um, eu não vejo um bebê...")) {
			case 1:
			mes "[Vovó]";
			mes "Oh? meu bebê não para de chorar e não parece dormir.";
			mes "Ela precisa descansar para que eu possa trabalhar.";
			mes "A casa está tão bagunçada e o chefe tão descontente...";
			KielHyreQuest = 56;
			next;
			select("Um, eu não vejo um bebê...");
			mes "[Vovó]";
			mes "Allysia...?!";
			mes "Allysia, onde você foi?";
			mes "Era para você voltar para casa há muito tempo atrás!";
			close;
			case 2:
			mes "[Vovó]";
			mes "Allysia...?!";
			mes "Allysia, onde você foi?";
			mes "Era para você voltar para casa há muito tempo atrás!";
			close;
		}
	} else if ((KielHyreQuest >= 56) && (KielHyreQuest < 60)) {
		mes "[Grandma]";
		mes "Allysia...?!";
		mes "Allysia, onde você foi?";
		mes "Era para você voltar para casa há muito tempo atrás!";
		if (!countitem(Elysia_Portrait)) {
			close;
		}
		next;
		select("Allysia? ela não está...");
		cutin("kh_ellisia_port",1);
		mes "^3355FFvocê mostra o retrato de Allysia para a velha senhora^000000.";
		next;
		cutin("",255);
		mes "[Vovó]";
		mes "Oh, você conhece Allysia?";
		mes "Ela está desaparecida!";
		mes "Ela saiu de casa ontem e ainda não voltou!";
		mes "V-Você pode me dizer onde ela está?!";
		close;
	} else {
		mes "[Vovó]";
		mes "Não se preocupe, Allysia...";
		mes "Mamãe sempre estará aqui para você.";
		mes "Não precisa ficar triste...";
		close;
	}
}

// ------------------------------------------------------------------
yuno,250,132,0	script	Velha Senhora#kh	4_F_05,{
	if (KielHyreQuest < 56) {
		mes "[Velha Senhora]";
		mes "Oooh, minhas pernas e costas estão tão doídas.";
		mes "Esse velhos ossos doem todos...";
		close;
	} else if (KielHyreQuest == 56) {
		if (!checkweight(Rosimier_Key,1)) {
			mes "^3355FF- Espere!!";
			mes "você está carregando muitos ítens e não será capaz de aceitar mais.";
			mes "Por favor disponibilize algum espaço no seu inventario antes de retornar^000000.";
			close;
		}
		mes "[Velha Senhora]";
		mes "Deuses, eu odeio esse tempo!";
		mes "Me lembra como fiquei velha!";
		mes "Resfria meus ossos, isso sim!";
		next;
		switch (select("......","Você conhece aquela Vovó?")) {
			case 1:
			mes "[Velha Senhora]";
			mes "Maldição!";
			mes "Se pelo menos eu não tivesse tido todas aquelas aventuras na minha juventude!";
			mes "Aí talvez eu não sofresse tanto na minha idade avançada!";
			close;
			case 2:
			mes "[Velha Senhora]";
			mes "Oh... Sim.";
			mes "Ela era a mãe da minha melhor amiga, ^3355FFAllysia^000000.";
			mes "Desde que ela cometeu suicídio, as coisas não têm sido as mesmas.";
			mes "Sua mãe perdeu a sanidade...";
			next;
			select("Era ^3355FFAllysia^000000...?");
			mes "[Velha Senhora]";
			mes "Oh, Allysia era uma moça tão bonita.";
			mes "Tantos homens quiseram ela, especialmente aquele James Rosimier.";
			mes "Lembro de ter ouvido que eles iriam se casar...";
			next;
			mes "[Velha Senhora]";
			mes "Eu estava tão feliz por ela!";
			mes "Mas então, repentinamente, ela se matou.";
			mes "Bem, isso é o que todos dizem.";
			mes "Mesmo hoje, não tenho tanta certeza do que aconteceu.";
			next;
			select("Espere, quem é James Rosimier?");
			mes "[Velha Senhora]";
			mes "Oh, James pertencia a uma das famílias mais antigas e ricas em Yuno.";
			mes "Tudo estava indo bem para eles, mas algum tempo depois que Allysia morreu, a família foi a falência.";
			next;
			mes "[Velha Senhora]";
			mes "A cidade gerencia a velha residência deles agora.";
			mes "Por alguma razão, eles decidiram me confiar a chave mestra da Mansão Rosimier.";
			next;
			select("Pode me emprestar essa Chave Mestra?");
			mes "[Velha Senhora]";
			mes "Bem, não é para eu realmente";
			mes "entregar ela para simplesmente";
			mes "qualquer um, mas posso dizer que";
			mes "você está trabalhando com Allysia";
			mes "com os melhores interesses no coração.";
			next;
			mes "[Velha Senhora]";
			mes "Entretanto, você tem de assegurar-se de trazê-la de volta para mim.";
			mes "Antes que o pessoal da prefeitura me pergunte por ela.";
			mes "Muito bem então, espero que você ache o que está procurando.";
			getitem(Rosimier_Key,1);
			KielHyreQuest = 58;
			close;
		}
	} else if ((KielHyreQuest == 58) && (countitem(Family_Portrait)) || (!countitem(Elysia_Portrait)) || (!countitem(Kyll_Hire_Letter2)) || (!countitem(Piece_Memo_Of_James))) {
		mes "[Velha Senhora]";
		mes "Por favor depressa. Encontre o que quer que esteja procurando na Mansão Rosimier.";
		mes "Posso arrumar problemas se o pessoal da prefeitura vier e me perguntar pela chave...";
		close;
	} else if ((KielHyreQuest == 58) && (countitem(Family_Portrait)) && (countitem(Elysia_Portrait)) && (countitem(Kyll_Hire_Letter2)) && (countitem(Piece_Memo_Of_James))) {
		mes "[Velha Senhora]";
		mes "Oh você acabou sua busca na mansão?";
		mes "Deprimente não é?";
		mes "Os credores basicamente pilharam tudo há muito tempo atrás.";
		next;
		select("Por que ^3355FFAllysia^000000...?");
		mes "[Velha Senhora]";
		mes "Bem, eu sabia que aquele James e Allysia estavam apaixonados, e ele prometeu casar com ela.";
		mes "Agora, supostamente sua família já o tinha noivado com outra mulher.";
		next;
		mes "[Velha Senhora]";
		mes "O tempo passou, e ele foi forçado a cassar com sua noiva.";
		mes "Allysia era devastadoramente linda.";
		mes "Acho que talvez por isso ela... você sabe...";
		next;
		mes "[Velha Senhora]";
		mes "Escute, se você quiser saber mais sobre o que aconteceu.";
		mes "Então acho que você deveria falar com o ^3355FFpescador que vive^000000 ^3355FFao sul da Academia Kiel Hyre^000000.";
		next;
		mes "[Velha Senhora]";
		mes "Ele é quem encontrou o corpo de Allysia no rio, em tão ele pode ter uma melhor idéia do que aconteceu.";
		delitem(Rosimier_Key,1);
		KielHyreQuest = 60;
		close;
	} else {
		mes "[Velha Senhora]";
		mes "Sim, A chuva está vindo.";
		mes "Posso sentir nos meus ossos.";
		close;
	}
}

// ------------------------------------------------------------------
yuno,273,141,0	script	#RosimmirEnter	WARPNPC,2,2,{
	OnTouch:
	if (!countitem(Rosimier_Key)) {
		mes "Essa mansão parece ter sido destruída pelo tempo.";
		mes "No entanto, a porta parece que ainda seria operacional se você tivesse a chave certa.";
		close;
	} else {
		warp("kh_rossi",20,92);
	}
	end;
}

// ------------------------------------------------------------------
kh_rossi,23,23,0	script	Mesa#khr2	HIDDEN_NPC,{
	if (KielHyreQuest < 58) {
		mes "^3355FFNão há nada de importante para você aqui^000000.";
		close;
	} else if (KielHyreQuest < 60) {
		if (!checkweight(Family_Portrait,1)) {
			mes "^3355FF- Espere!!";
			mes "Você está carregando muitos ítens e não será capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espaço no seu inventario antes de retornar^000000.";
			close;
		} else if (!countitem(Family_Portrait)) {
			cutin("kh_family_port",1);
			mes "^3355FFvocê examina a mesa, e encontra um porta retratos dentro da gaveta aberta^000000.";
			getitem(Family_Portrait,1);
		} else {
			mes "^3355FFA gaveta aberta dessa mesa está vazia agora^000000.";
		}
	} else{
		mes "^3355FFEsta foi a mesa na qual você obteve o retrato da família Rosimier Suas gavetas estão vazias agora^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_rossi,92,40,0	script	Estante#kh2	HIDDEN_NPC,{
	if (KielHyreQuest < 58) {
		mes "^3355FFNão há nada de importante para você aqui^000000.";
		close;
	} else if (KielHyreQuest < 60) {
		if (!checkweight(Elysia_Portrait,1)) {
			mes "^3355FF- Espere!!";
			mes "Você está carregando muitos ítens e não será capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espaço no seu inventario antes de retornar^000000.";
			close;
		} else if (!countitem(Elysia_Portrait)) {
			mes "^3355FFHá caixas trancadas nessas prateleiras.";
			mes "Talvez se você usar essa chave mestra da mansão, você pode conseguir abrí-las^000000.";
			next;
			switch (select("Usar Chave","Cancelar")) {
				case 1:
				mes "^3355FFQual caixa você quer tentar abrir^000000?";
				next;
				switch (select("Primeira caixa","Segunda Caixa")) {
					case 1:
					mes "^3355FFvocê usa a chave Mestra para destrancar a caixa.";
					mes "E obtem um retrato de uma mulher que se parece com a assistente de Kiel Hyre, Allysia^000000.";
					next;
					cutin("kh_ellisia_port",2);
					mes "^3355FFA mensagem, ''Para meu amor, Allysia. De James.'' está escrita nas costas^000000.";
					getitem(Elysia_Portrait,1);
					close2;
					cutin("",255);
					end;
					case 2:
					mes "^3355FFEssa caixa está vazia^000000.";
					close;
				}
				case 2:
				mes "^3355FFEssa caixa está vazia^000000.";
				close;
			}
		} else {
			mes "^3355FFVocê encontrou um retrato de uma mulher em uma das caixas nessa prateleira^000000.";
			close;
		}
	} else {
			mes "^3355FFVocê encontrou um retrato de uma mulher em uma das caixas nessa prateleira^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_rossi,144,286,0	script	Mesa#khr3	HIDDEN_NPC,{
	if (KielHyreQuest < 58) {
		mes "^3355FFÉ apenas uma mesa^000000.";
		close;
	} else if (KielHyreQuest < 60) {
		mes "^3355FFA mesa tem^000000 três gavetas^000000";
		next;
		switch (select("Primeira Gaveta","Segunda Gaveta","Terceira Gaveta","Cancelar")) {
			case 1:
			mes "^3355FFA primeira gaveta está trancada^000000.";
			close;
			case 2:
			if (!checkweight(Kyll_Hire_Letter2,1)) {
				mes "^3355FF- Espere!!";
				mes "Você está carregando muitos itens e não será capaz de aceitar mais.";
				mes "Por favor disponibiliza algum espaço no seu inventario antes de retornar^000000.";
				close;
			} else if (!countitem(Kyll_Hire_Letter2)) {
				mes "^3355FFHá uma carta dentro dessa segunda gaveta.";
				mes "Foi enviada por uma pessoa com as iniciais, K.H., e endereçada à Allysia^000000.";
				getitem(Kyll_Hire_Letter2,1);
				close;
			} else {
				mes "^3355FFEssa gaveta está vazia^000000.";
				close;
			}
			case 3:
			mes "^3355FFHá um pequeno bilhete dentro dessa terceira gaveta^000000.";
			mes "^3355FFFoi escrito por James, e menciona que ele quer se casar com Allysia, e ela recebeu um anel de noivado^000000.";
			close;
			case 4:
			mes "......";
			mes ".........";
			mes "............";
			close;
		}
	} else{
		mes "^3355FFEsta é a mesa onde você encontrou uma carta escrita por K.H, e uma nota rabiscada por James Rosimier.";
		mes "Ambos são dirigidos à mesma mulher, Allysia^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_rossi,148,288,0	script	Estante#kh3	HIDDEN_NPC,{
	if (KielHyreQuest < 58) {
		mes "^3355FFVocê encontra uma estante empoeirada cheia de livros^000000.";
		close;
	} else if (KielHyreQuest < 60) {
		if (!checkweight(Piece_Memo_Of_James,1)) {
			mes "^3355FF- Espere!!";
			mes "Você está carregando muitos itens e não será capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espaço no seu inventario antes de retornar^000000.";
			close;
		} else if (!countitem(Piece_Memo_Of_James)) {
			mes "^3355FFVocYe encontra uma estante empoeirada cheia de vários livros.";
			mes "Você encontra um bilhete dobrado entre os livros enquanto os examina^000000.";
			getitem(Piece_Memo_Of_James,1);
			close;
		} else {
			mes "^3355FFvocê encontrou uma estante empoeirada cheia de vários livros^000000.";
			close;
		}
	} else{
		mes "^3355FFvocê encontrou uma estante empoeirada cheia de vários livros^000000.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_fild12,232,222,0	script	Velho Pescador#kh	4_M_SEAMAN,{
	if (KielHyreQuest < 60) {
		mes "[Pescador]";
		mes "Esses dias, é tão mais difícil caçar e pescar.";
		mes "Desde que eles construíram essa fábrica, os peixes começaram a mudar, e parecem diferentes também...";
		close;
	} else if (KielHyreQuest == 60) {
		mes "[Pescador]";
		mes "Eh? Você quer algo?";
		mes "Heh, jovens!";
		mes "Eu sei o quanto vocês adoram esmolas, mas você não vai ter nenhuma.";
		mes "Agora me traga algum peixe cru, e eu serei mais amigável";
		if (countitem(Fish_Slice) >= 10) {
			next;
			mes "[Pescador]";
			mes "Oh, todos esses peixes para mim?";
			mes "Heh, que generosidade a sua.";
			mes "Se você vai ser tão generoso, então eu suponho que eu deva lhe pagar o favor.";
			mes "Pergunte-me qualquer coisa.";
			next;
			select("30 anos atrás, uma mulher se matou...");
			mes "[Pescador]";
			mes "Oh? Ohh. Oh sim.";
			mes "Eu me lembro disso.";
			mes "Foi em 20 de Agosto, no aniversário da minha esposa.";
			mes "Aquele dia, ao invés de pegar peixes, eu peguei uma mulher morta.";
			next;
			mes "[Pescador]";
			mes "Claro, eu reportei à polícia de Yuno.";
			mes "Eles me disseram que ela se matou já que tinha sido traída por seu amante, que por acaso era também seu empregador.";
			mes "Coisa realmente trágica.";
			next;
			mes "[Pescador]";
			mes "Ainda assim, quanto estávamos retirando o seu corpo do rio, sua mão deixou cair um anel.";
			mes "Eu peguei, esperando vendê-lo mais tarde por algum zeny.";
			mes "Eu sei, eu sei...";
			next;
			mes "[Pescador]";
			mes "Tive muita sorte que a policia não me viu pegá-lo mais tarde naquele dia, um cara veio e me ofereceu uma bolada por ele.";
			mes "Acho que foi meu dia de sorte!";
			next;
			mes "[Pescador]";
			mes "Descobri mais tarde que ele era algum tipo de engenheiro mecânico ou algo assim.";
			mes "Ele vendeu tudo para comprar aquele anel, então acho que o queria desesperadamente.";
			mes "Então ele simplesmente desapareceu.";
			next;
			select("Você se lembra do nome dele?");
			mes "[Pescador]";
			mes "O nome dele...?";
			mes "Era algo parecido com...";
			mes "Heil? Hyre?";
			mes "De qualquer forma, foi há muito tempo atrás.";
			mes "Oh, sua velha casa ainda está por aí.";
			next;
			mes "[Pescador]";
			mes "Se você for bem curioso, você pode até dar uma checada também.";
			mes "Vejamos, ele viveu em uma cabana próximo ao acampamento noroeste da guarda florestal.";
			delitem(Fish_Slice,10);
			KielHyreQuest = 62;
			close;
		} else {
			close;
		}
	} else if (KielHyreQuest >= 62) {
		mes "[Pescador]";
		mes "Você não se lembra o que eu lhe disse?";
		mes "Aquele cara vivia numa cabana próximo ao acampamento noroeste da guarda florestal.";
		mes "Por que você não dá uma checada lá?";
		close;
	}
}

// ------------------------------------------------------------------
yuno_fild09,158,217,0	script	Placa de Madeira#kh	HIDDEN_NPC,{
	if ((KielHyreQuest < 62) || (KielHyreQuest >= 64)) {
		mes "^3355FFÉ uma inútil placa de madeira nos arbustos^000000.";
		close;
	} else if (KielHyreQuest == 62) {
		if (!checkweight(Man_Portrait,1)) {
			mes "^3355FF- Espere!!";
			mes "Você está carregando muitos itens e não será capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espaço no seu inventario antes de retornar^000000.";
			close;
		} else {
			mes "^000oFFVocê encontrou uma grande placa de madeira encravada com as iniciais, 'K.H.'^000000";
			next;
			cutin("kh_kyel_port",2);
			mes "^3355FFVocê encontrou o retrato de um jovem, que se parece com uma versão mais nova de Kiel Hyre.";
			mes "Em um porta retratos quebrado debaixo da placa de madeira^000000.";
			getitem(Man_Portrait,1);
			KielHyreQuest = 64;
			next;
			cutin("",255);
			mes "^3355FFVocê tem informação suficiente agora, então você deveria se reportar à Mitchell^000000.";
			close;
		}
	}
}

// ------------------------------------------------------------------
kh_kiehl01,17,39,0	script	Receiver#kh	HIDDEN_NPC,{
	if (!mobcount(strnpcinfo(NPC_MAP), strnpcinfo(NPC_NAME)+"::OnMyMobDead")) {
		mes "^333333*BBBZZZ*^000000";
		if (KielHyreQuest == 74) {
			next;
			mes "[????]";
			mes "^333333*Bzzzz...*";
			mes "Eu nunca te vi antes.";
			mes "Foi papai que mandou você para me matar?";
			mes "Veremos sobre isso!";
			mes "Vá em frente, tente me encontrar, aventureiro^000000..";
			KielHyreQuest = 76;
		}
		close2;
		monster(strnpcinfo(NPC_MAP),16,32,"Alicel",G_ALICEL,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),18,31,"Aliot",G_ALIOT,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		end;
	} else {
		end;
	}

	OnMyMobDead:
	if (!mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead")) {
		makeitem(Black_Key_Card,1,"this",19,36);
	}
	end;
}

// ------------------------------------------------------------------
kh_kiehl01,13,40,0	script	Vaso de Flores#kh1	HIDDEN_NPC,{
	if (KielHyreQuest < 74) {
		mes "^3355FFVocê encontrou um vaso de flores^000000.";
		close;
	} else if (KielHyreQuest >= 74) {
		mes "^3355FFVocê encontrou um vaso de flores^000000.";
		next;
		switch (select("Pegar o Vaso","Quebrar o Vaso","Virar o vaso de ponta cabeça")) {
			case 1:
			mes "^3355FFO vaso está vazio^000000.";
			close;
			case 2:
			mes "^3355FFVocê não pode destruir esse vaso, mesmo batendo com toda a sua força.";
			mes "Deve ter sido especialmente fabricado pela Corporação Rekenber^000000.";
			close;
			case 3:
			mes "^3355FFAs seguintes palavras estão escritas no fundo do vaso^000000.";
			next;
			mes "[Mensagem do Vaso]";
			mes "''O coelho frequentemente observa a porta.";
			mes "A noite come a laranja azeda.''";
			close;
		}
	} else{
		mes "^3355FFAs seguintes palavras estão escritas na parte inferior do vaso^000000.";
		next;
		mes "[Vase Message]";
		mes "''O coelho freqüentemente observa a porta.";
		mes "A noite come a laranja em conserva.''";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,19,25,0	script	Caixa#kh3	HIDDEN_NPC,{
	if (KielHyreQuest < 74) {
		mes "^3355FFVocê encontrou um baú com um botão para cada letra do alfabeto sobre ela^000000.";
		next;
		input(.@KHInput$);
		mes "^3355FFNada aconteceu^000000.";
		close;
	} else if (KielHyreQuest >= 74) {
		if (!checkweight(Toy_Key,1)) {
			mes "^3355FF- Espere!!";
			mes "Você está carregando muitos itens e não será capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espaço no seu inventario antes de retornar^000000.";
			close;
		}
		if (!countitem(Toy_Key)) {
			mes "^3355FFVocê encontrou um baú";
			mes "com um botão para cada letra";
			mes "do alfabeto sobre ela^000000.";
			next;
			input(.@KHInput$);
			if (.@KHInput$ == "Abra a Porta") {
				mes "^3355FFAssim que você entra a senha, a porta próxima emite um barulho agradável e o baú se abre para revelar uma pequena chave^000000.";
				getitem(Toy_Key,1);
				close;
			} else {
				mes "^3355FFNada aconteceu^000000.";
				close;
			}
		} else {
			mes "^3355FFAqui é onde você";
			mes "encontrou a chave de brinquedo^000000";
			close;
		}
	} else{
		mes "^3355FFA caixa está aberta, e não há nada dentro^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,44,33,0	script	Porta Grande#kh	HIDDEN_NPC,{
	if (.KHDoor1Opened == 0) {
		mes "^3355FFA porta está trancada, mas há um slot estreito perto da maçaneta^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cartão de Acesso Preto") {
			if (countitem(Black_Key_Card) >= 1) {
				mes "^3355FFVocê insere o Cartão de Acesso Preto no slot, e bem sucedidamente destranca e abre a porta^000000.";
				delitem(Black_Key_Card,1);
				enablenpc("Big_Door_1_Warp");
				donpcevent("Big_Door_1_Warp::OnEnable");
				.KHDoor1Opened = 1;
				close;
			}
		}
		mes "^3355FFvocê tenta empurrar a porta com toda a sua força, mas falha em fazê-la se mover^000000.";
		close;
	} else {
		mes "^3355FFA porta está aberta^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,43,33,0	script	Big_Door_1_Warp	WARPNPC,1,1,{
	OnEnable:
	initnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTimer30000:
	stopnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	setvariable(getvariableofnpc(.KHDoor1Opened,"Porta Grande#kh"),0);
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTouch:
	warp("kh_kiehl01",55,33);
	end;
}

// ------------------------------------------------------------------
kh_kiehl01,174,40,0	script	Porta Grande#kh2	HIDDEN_NPC,{
	if (.KHDoor2Opened == 0) {
		mes "^3355FFA porta está trancada, mas há uma pequena fechadura próxima à maçaneta^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Chave de Brinquedo") {
			if (countitem(Toy_Key) >= 1) {
				mes "^3355FFVocê insere a chave na fechadura, e a porta se destranca assim que você gira a chave^000000.";
				delitem(Toy_Key,1);
				enablenpc("Big_Door_2_Warp");
				donpcevent("Big_Door_2_Warp::OnEnable");
				.KHDoor2Opened = 1;
				close;
			}
		}
		mes "^3355FFVocê tenta empurrar a porta com toda a sua força mas falha em fazê-la se mover^000000.";
		close;
	} else {
		mes "^3355FFA porta está aberta^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,174,39,0	script	Big_Door_2_Warp	WARPNPC,1,1,{
	OnEnable:
	initnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTimer30000:
	stopnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	setvariable(getvariableofnpc(.KHDoor2Opened,"Porta Grande#kh2"),0);
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTouch:
	warp("kh_kiehl01",173,52);
	end;
}

// ------------------------------------------------------------------
kh_kiehl01,77,108,0	script	Porta Grande#kh3	HIDDEN_NPC,{
	if (.KHDoor3Opened == 0) {
		mes "^3355FFA porta está trancada, mas há um slot estreito próximo à maçaneta^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cartão de Acesso Preto") {
			if (countitem(Black_Key_Card) >= 1) {
				mes "^3355FFvocê insere o Cartão de Acesso Preto no slot, e bem sucedidamente destranca e abre a porta^000000.";
				delitem(Black_Key_Card,1);
				enablenpc("Big_Door_3_Warp");
				donpcevent("Big_Door_3_Warp::OnEnable");
				.KHDoor3Opened = 1;
				close;
			}
		}
		mes "^3355FFVocê tenta empurar a porta com toda a sua força, mas falha em fazê-la se mover^000000.";
		close;
	} else {
		mes "^3355FFA porta está aberta^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,78,108,0	script	Big_Door_3_Warp	WARPNPC,1,1,{
	OnEnable:
	initnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTimer30000:
	stopnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	setvariable(getvariableofnpc(.KHDoor3Opened,"Porta Grande#kh3"),0);
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTouch:
	warp("kh_kiehl01",68,108);
	end;
}

// ------------------------------------------------------------------
kh_kiehl01,42,177,0	script	Porta Grande#kh4	HIDDEN_NPC,{
	if (.KHDoor4Opened == 0) {
		mes "^3355FFA porta está trancada, mas há um slot estreito próximo à maçaneta^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cartão de Acesso Preto") {
			if (countitem(Black_Key_Card) >= 2) {
				mes "^3355FFVocê inseriu o Cartão de Acesso Preto no slot, e bem sucedidamente destrancou e abriu a porta^000000.";
				delitem(Black_Key_Card,2);
				enablenpc("Big_Door_4_Warp");
				donpcevent("Big_Door_4_Warp::OnEnable");
				.KHDoor4Opened = 1;
				close;
			}
		}
		mes "^3355FFVocê tenta empurar a porta com toda a sua força, mas falha em fazê-la se mover^000000.";
		close;
	} else {
		mes "^3355FFA porta está aberta^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,41,177,0	script	Big_Door_4_Warp	WARPNPC,1,1,{
	OnEnable:
	initnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTimer30000:
	stopnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	setvariable(getvariableofnpc(.KHDoor4Opened,"Porta Grande#kh4"),0);
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTouch:
	warp("kh_kiehl01",49,177);
	end;
}

// ------------------------------------------------------------------
kh_kiehl01,15,179,0	script	Robots#kh	HIDDEN_NPC,{
	if (!mobcount(strnpcinfo(NPC_MAP), strnpcinfo(NPC_NAME)+"::OnMyMobDead")) {
		mes "^3355FFAssim que você toca o tubo de testes, um monte de robôs repentinamente aparecem^000000..";
		close2;
		monster(strnpcinfo(NPC_MAP),18,181,"Aliot",G_ALIOT,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),18,180,"Alicel",G_ALICEL,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),18,179,"Aliot",G_ALIOT,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		monster(strnpcinfo(NPC_MAP),18,178,"Alicel",G_ALICEL,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
		end;
	} else {
		end;
	}

	OnMyMobDead:
	if (!mobcount(strnpcinfo(NPC_MAP), strnpcinfo(NPC_NAME)+"::OnMyMobDead")) {
		makeitem(Black_Key_Card,1,"this",18,180);
	}
	end;
}

// ------------------------------------------------------------------
kh_kiehl01,166,187,0	script	Porta Grande#kh5	HIDDEN_NPC,{
	if (($@KHQuestBusy == 0) && (KielHyreQuest >= 74) && (KielHyreQuest <= 106)) {
		if (KielHyreQuest < 86) {
			mes "^3355FFEssa porta larga está só encostada.";
			mes "Se você ouvir atentamente, poderá ouvir a porta ranger bem baixinho^000000.";
			next;
			select("Empurrar a Porta","Chutar a Porta","Balançar a Porta","Puxar a Porta","Levantar a Porta");
			mes "^3355FFUm grupo de monstros aparecem repentinamente assim que você aplicou pressão na porta.";
			mes "Isso deve ser algum tipo de dispositivo de segurança^000000.";
			close2;
			++@KHDoorPushAttempt;
			monster(strnpcinfo(NPC_MAP),163,183,"Alicel",G_ALICEL,1);
			monster(strnpcinfo(NPC_MAP),163,179,"Aliot",G_ALIOT,1);
			monster(strnpcinfo(NPC_MAP),169,183,"Alicel",G_ALICEL,1);
			monster(strnpcinfo(NPC_MAP),169,179,"Aliot",G_ALIOT,1);
			if (@KHDoorPushAttempt >= 3) {
				KielHyreQuest = 86;
			}
			end;
		} else if ((KielHyreQuest > 84) && (KielHyreQuest < 94)) {
			mes "^3355FFVocê aplica alguma pressão sobre a porta, e descobre que você pode movê-la lentamente.";
			mes "Mas não pode abrí-la totalmente^000000.";
			next;
			mes "^3355FFSe você segurasse algo na fresta entre a porta e o batente.";
			mes "E conseguisse alavancar, então você pode ser capaz de abrí-la^000000.";
			next;
			switch (select("Aço","Ferro Enferrujado","Pedaço de Ferro Sólido","Pedaço de Ferro","Parafuso","Cancelar")) {
				case 1:
				.@KHPryingItem$ = "Aço";
				break;
				case 2:
				.@KHPryingItem$ = "Ferro Enferrujado";
				break;
				case 3:
				if (countitem(Sturdy_Iron_Piece) >= 1) {
					if (KielHyreQuest < 92) {
						mes "^3355FFvocê insere uma ponta de um pedaço de ferro sólido na fresta da porta num resistente esforço de fazer com que a porta abra.";
						mes "A fresta aumenta um pouco mais, no entanto você quebra um de seus Pedaços de Ferro Sólido^000000.";
						delitem(Sturdy_Iron_Piece,1);
						KielHyreQuest += 2;
						close;
					} else if (KielHyreQuest == 92) {
						mes "^3355FFCom um empurrão forte, você coloca um Pedaço de Ferro Sólido no batente da porta, fazendo com que a porta se abra.";
						mes "Incapaz de resistir à extrema força, esse Pedaço de Ferro Sólido fica em farelos^000000.";
						delitem(Sturdy_Iron_Piece,1);
						KielHyreQuest = 94;
						close;
					}
				} else {
					mes "^3355FFSe ao menos você tivesse um Pedaço de Ferro Sólido você poderia usar para tentar abrir essa porta^000000.";
					close;
				}
				case 4:
				.@KHPryingItem$ = "Pedaço de Ferro";
				break;
				case 5:
				.@KHPryingItem$ = "Parafuso";
				break;
				case 6:
				mes "^3355FFVamos procurar por algo pesado que possamos usar para abrir essa porta^000000.";
				close;
			}
			mes "^3355FFEsse "+@KHPryingItem$+" é muito fraco para o que você está usando e se quebra^000000.";
			close;
		} else if ((KielHyreQuest >= 94) && (KielHyreQuest <= 104)) {
			if (.KHDoor5Opened == 0) {
				mes "^3355FFA porta larga está totalmente aberta, e você pode entrar agora^000000.";
				next;
				switch (select("Sim","Não")) {
					case 1:
					close2;
					enablenpc("Big_Door_5_Warp");
					donpcevent("Big_Door_5_Warp::OnEnable");
					.KHDoor5Opened = 1;
					end;
					case 2:
					mes "^3355FFQuem sabe o que tem do outro lado dessa porta.";
					mes "Vamos pensar sobre isso antes de ir entrando.^000000.";
					close;
				}
			} else {
				mes "^3355FFA porta está aberta^000000.";
				close;
			}
		} else {
			mes "^3355FFEsta porta larga está encostada.";
			mes "Se você ouvir atentamente, você pode ouvir a porta ranger bem baixinho^000000.";
			close;
		}
	} else {
		mes "^3355FFEsta porta larga está encostada.";
		mes "Se você ouvir atentamente, você pode ouvir a porta ranger bem baixinho^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,166,186,0	script	Big_Door_5_Warp	WARPNPC,1,1,{
	end;

	OnEnable:
	initnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	end;

	OnTimer30000:
	stopnpctimer;
	specialeffect(EF_SUMMONSLAVE);
	setvariable(getvariableofnpc(.KHDoor5Opened,"Porta Grande#kh5"),0);
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;

	OnTouch:
	if (KielHyreQuest >= 46) { warp("kh_kiehl02",50,7); }
	else { warp("kh_kiehl01",166,183); }
	end;
}

// ------------------------------------------------------------------
kh_kiehl02,49,10,0	script	Kiehl_Room_Trap	FAKE_NPC,5,3,{
	end;

	OnTouch:
	if (.KHTrapSprung < 1) {
		.KHTrapSprung = 1;
		$@KHQuestBusy = 1;
		initnpctimer;
		monster(strnpcinfo(NPC_MAP),47,13,"Aliot",G_ALIOT,1);
		monster(strnpcinfo(NPC_MAP),45,13,"Alicel",G_ALICEL,1);
		monster(strnpcinfo(NPC_MAP),49,13,"Constant",G_CONSTANT,1);
		monster(strnpcinfo(NPC_MAP),51,13,"Aliot",G_ALIOT,1);
		monster(strnpcinfo(NPC_MAP),53,13,"Alicel",G_ALICEL,1);
		monster(strnpcinfo(NPC_MAP),49,13,"Constant",G_CONSTANT,1);
	}
	end;

	OnTimer300000:
	OnTimer600000:
	OnTimer900000:
	if (!getmapusers(strnpcinfo(NPC_MAP))) {
		donpcevent("KiehlRoom::OnReset");
		stopnpctimer;
	}
	end;

	OnTimer1200000:
	donpcevent("KiehlRoom::OnReset");
	stopnpctimer;
	end;

	OnGlobalTimerOff:
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
kh_kiehl02,50,52,4	script	Kiehl#kh	4_M_KHKIEL,{
	if (!checkweight(Spawn,200)) {
		mes "^3355FF- Espere!!";
		mes "Você está carregando muitos ítens e não será capaz de aceitar mais.";
		mes "Por favor libere algum espaço no seu inventario antes de retornar^000000.";
		close;
	}
	cutin("kh_kiel01",2);
	if ((KielHyreQuest < 94) || (KielHyreQuest >= 106)) {
		mes "[Kiehl]";
		mes "......";
		mes ".........";
		mes "............";
		close2;
		cutin("",255);
		end;
	} else if ((KielHyreQuest == 94) && (getvariableofnpc(.KHKilled,"KiehlRoom") < 5)) {
		mes "[Kiehl]";
		mes "Estou surpreso que tenha chegado tão longe, aventureiro lhe ofereço as boas vindas ao meu humilde quarto.";
		mes "Acredito que tenha vindo pelo Pergaminho de Memória Condensada...";
		next;
		mes "[Kiehl]";
		mes "Você pode entender porque não posso deixá-lo o ter.";
		mes "Então se você realmente quer o Pergaminho de Memória Condensada, mostre-me do que é capaz!";
		close2;
		cutin("",255);
		setvariable(getvariableofnpc(.KHKilled,"KiehlRoom"),0);
		monster(strnpcinfo(NPC_MAP),50,52,"Aliot",G_ALIOT,1,"KiehlRoom::OnKiehlMobDead");
		monster(strnpcinfo(NPC_MAP),50,52,"Alicel",G_ALICEL,1,"KiehlRoom::OnKiehlMobDead");
		monster(strnpcinfo(NPC_MAP),50,52,"Constant",G_CONSTANT,1,"KiehlRoom::OnKiehlMobDead");
		monster(strnpcinfo(NPC_MAP),50,52,"Aliot",G_ALIOT,1,"KiehlRoom::OnKiehlMobDead");
		monster(strnpcinfo(NPC_MAP),50,52,"Alicel",G_ALICEL,1,"KiehlRoom::OnKiehlMobDead");
		monster(strnpcinfo(NPC_MAP),50,52,"Constant",G_CONSTANT,1,"KiehlRoom::OnKiehlMobDead");
		monster(strnpcinfo(NPC_MAP),50,52,"Aliot",G_ALIOT,1,"KiehlRoom::OnKiehlMobDead");
		hideonnpc(strnpcinfo(NPC_NAME));
		end;
	} else if ((KielHyreQuest == 94) && (getvariableofnpc(.KHKilled,"KiehlRoom") >= 5)) {
		cutin("kh_kiel03",2);
		mes "[Kiehl]";
		mes "Hmpf! Você é muito bom.";
		mes "Papai deve ter gasto muito dinheiro para lhe contratar.";
		mes "Então ele lhe enviou para me matar?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Kiel Hyre me enviou para lhe pedir para parar de tornar toda a Terceira Geração de Robôs em máquinas mortíferas!";
		mes "Como pode fazer algo assim a outros robôs como você?";
		next;
		cutin("kh_kiel01",2);
		mes "[Kiehl]";
		mes "Por que não?";
		mes "Foi dito que o homem foi criado à imagem de Deus.";
		mes "Bem, robôs foram feitos à imagem do homem.";
		mes "Vocês humanos matam uns aos outros tanto quanto podem, até onde eu sei.";
		next;
		mes "[Kiehl]";
		mes "Pode não ser ético para eu prover armas para humanos que precisam delas...";
		mes "Mas o que elas são?";
		mes "Armas.";
		mes "É mais humano para robôs lutarem que humanos.";
		next;
		mes "[Kiehl]";
		mes "Robôs não sentem naturalmente dor ou emoções.";
		mes "Não até que são especialmente programados.";
		mes "Desculpe mas não planejo parar o que estou fazendo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Humanidade pode não ser perfeita, mas pense com quem você está trabalhando!";
		mes "Rekenber é o resumo do mal humano!";
		mes "Como você pode ajudá-los assim?";
		next;
		cutin("kh_kiel02",2);
		mes "[Kiehl]";
		mes "Tive um grande relacionamento com Rekenber.";
		mes "Estou totalmente ciente de suas capacidades.";
		mes "Você lembra do primeiro quarto que passou à caminho daqui, o que tinha todos os brinquedos?";
		next;
		mes "[Kiehl]";
		mes "Aposto que não sabia que lá estava 5 robôs da Segunda Geração.";
		mes "Eu e meus quatro outros irmãos e irmãs.";
		mes "Papai construiu aquele quarto para que todos os cinco pudessem viver juntos.";
		next;
		cutin("kh_kiel03",2);
		mes "[Kiehl]";
		mes "Eu sou o único que sobreviveu.";
		mes "Eu retornei para papai e até consegui um nome.";
		mes "Mas sim, eu sei o quão ruim Rekenber realmente é.";
		next;
		mes "[Kiehl]";
		mes "Eu não... Eu não quero falar sobre isso mais";
		mes "Você me deixou... Apenas saia.";
		mes "Acho que vou deixá-lo viver.";
		next;
		cutin("",255);
		mes "[Mitchell]";
		mes "Parado!";
		mes "Kiehl Hyre, você está preso por criar e negociar armas ilegais!";
		KielHyreQuest = 100;
		hideoffnpc("Mitchell#KiehlRoom");
		hideoffnpc("Agente#KHAgent1");
		hideoffnpc("Agente#KHAgent2");
		hideoffnpc("Agente#KHAgent3");
		hideoffnpc("Agente#KHAgent4");
		next;
	} else if ((KielHyreQuest == 100) && (getvariableofnpc(.KHKilledBoss,"KiehlRoom") < 1)) {
		setvariable(getvariableofnpc(.KHKilledBoss,"KiehlRoom"),0);
		cutin("kh_kiel01",2);
		mes "[Kiehl]";
		mes "Ah, agentes da República Schwaltzvalt.";
		mes "Eu nunca tive tantos convidados antes.";
		mes "Bem, acho que isso significa que teremos de lutar afinal você e eu.";
		mes "Pena...";
		next;
		mes "[Kiehl]";
		mes "Primeiro, para ser justo, deixe-me cuidar dessas chateações.";
		mes "Eles são apenas descerebrados fazendo seu trabalho mais ou menos como robôs.";
		mes "Mas não se preocupe, eles não serão feridos.";
		next;
		mes "[Mitchell]";
		mes "Nããooooo!";
		specialeffect(PF_FOGWALL,AREA,getnpcid("Mitchell#KiehlRoom"));
		specialeffect(PF_FOGWALL,AREA,getnpcid("Agente#KHAgent1"));
		specialeffect(PF_FOGWALL,AREA,getnpcid("Agente#KHAgent2"));
		specialeffect(PF_FOGWALL,AREA,getnpcid("Agente#KHAgent3"));
		specialeffect(PF_FOGWALL,AREA,getnpcid("Agente#KHAgent4"));
		next;
		cutin("kh_kiel03",2);
		mes "[Kiehl]";
		mes "E agora, você e eu podemos ter um duelo adequado, humano estou interessado em ver o quanto você é realmente forte";
		close2;
		cutin("",255);
		monster(strnpcinfo(NPC_MAP),50,52,"Kiehl",KIEL,1,"KiehlRoom::OnKiehlDead");
		hideonnpc(strnpcinfo(NPC_NAME));
		end;
	} else if ((KielHyreQuest == 100) && (getvariableofnpc(.KHKilledBoss,"KiehlRoom") == 1)) {
		cutin("kh_kiel02",2);
		mes "[Kiehl]";
		mes "M-Maldição...!";
		mes "Bem jogado, aventureiro";
		mes "Bem jogado.";
		mes "Eu deveria saber que papai enviaria o melhor de todos atrás de mim.";
		mes "Ainda assim, você falhou em realmente me derrotar.";
		next;
		mes "[Kiehl]";
		mes "Ainda tenho alguns";
		mes "trunfos sobrando";
		mes "Acho...";
		mes "Eu lhe levarei para o inferno comigo...";
		mes "Bem se robôs puderem ir para lá";
		next;
		mapannounce(strnpcinfo(NPC_MAP),"*Jeeeezzzgggg Geezzz Grrrr Clank*",bc_map,"0xFF0000");
		mes "[Mitchell]";
		mes "Não...!";
		mes "Estamos trancados no quarto!";
		mes "Estamos presos aqui!";
		next;
		mes "[Kiehl]";
		mes "Vamos queimar tudo abaixo";
		next;
		mes "[Mitchell]";
		mes "Rápido,"+strcharinfo(CHAR_NAME)+", use o dispositivo de força de Kiel Hyre, aquele que era para bagunçar com a fonte de força de Kiehl!";
		mes "Rápido, use-o agora!";
		next;
		mapannounce(strnpcinfo(NPC_MAP),"*Gzzzz Gzzzz*",bc_map,"0xFF0000");
		mes "[Kiehl]";
		mes "O-O quê? Não p-posso me mover!";
		mes "Esse dia está simplesmente cheio de surpresas. Oh, bem.";
		mes "Acho que é hora de eu usar meu outro trunfo.";
		next;
		mes "[Mitchell]";
		mes "O quê...?";
		mes "Quantos trunfos";
		mes "você tem?";
		next;
		mes "[????]";
		mes "Estou tão desapontado...";
		mes "Não posso acreditar que ninguém de vocês pensou nisso...";
		next;
		mes "[Mitchell]";
		mes "Quem é você...?";
		mes "Apareça!";
		next;
		mes "[????]";
		mes "Por favor.";
		mes "Não me insulte.";
		mes "Você conhece essa voz.";
		mes "Esteve falando com você o tempo todo";
		next;
		mes "[Mitchell]";
		mes "Impossível!";
		mes "Como pode ter dois de você...?!";
		next;
		hideoffnpc("Kiehl#kh2");
		next;
		cutin("kh_kiel01",0);
		mes "[Kiehl]";
		mes "Hahahahaha!";
		mes "Eu sou um robô!";
		mes "Posso fazer corpos extras trocar de cérebros com eles";
		mes "É extremamente conveniente, se quer saber.";
		next;
		cutin("kh_kiel03",2);
		mes "[Kiehl]";
		mes "De qualquer forma, não quero aparecer mas acho que posso revelar para você meu trunfo final.";
		mes "Primeiro de tudo, eu sei tudo sobre você. Sra. Mitchell Layla";
		next;
		mes "[Mitchell]";
		mes "O quê? Como você sabe meu nome?";
		next;
		mes "[Kiehl]";
		mes "Bem, eu tenho alguns espiões meus...";
		mes "Eu o deixarei explicar.";
		next;
		mes "[Homem Mascarado]";
		mes "Mitchell...";
		mes "Sinto muito que você tenha se envolvido nisso tudo.";
		next;
		mes "[Mitchell]";
		mes "Wolkeus? Wolkeus Kaiser?!";
		mes "Você é o espião?";
		mes "Mas você arriscou sua vida para salvar nosso presidente!";
		mes "Não! Oh, Deus!";
		mes "Como isso pode estar acontecendo?!";
		mes "Tudo é simplesmente...";
		mes "Isso tudo é loucura!";
		mes "Tudo!";
		next;
		mes "[Wolkeus]";
		mes "Isso é apenas o resultado de planos elaborados que fizemos anos atrás.";
		mes "Eu não esperava que você ficasse tão surpresa, Mitchell.";
		mes "É assim que o jogo é jogado.";
		mes "Você sabe disso.";
		next;
		mes "[Mitchell]";
		mes "Senhor Presidente...";
		mes "Eu falhei... Me desculpe...";
		next;
		mes "[Kiehl]";
		mes "Bem, Kaiser, ela se deu muito mal, mas ao menos você está sendo um cavalheiro sobre isso.";
		mes "Bem eu gostaria que todos nós ficássemos bem informados, mas...";
		next;
		cutin("kh_kiel01",2);
		mes "[Kiehl]";
		mes "Melhor fazermos nossas despedidas aqui.";
		mes "Esse";
		mes "lugar vai sumir em cinco minutos.";
		mes "Ah, e Sra. Layla, você vem conosco.";
		mes "Temos perguntas";
		next;
		mes "[Kiehl]";
		mes "Estou curioso em quais são os planos do Presidente.";
		mes "Senhor Kaiser, poderia escoltar a Sra.";
		mes "Layla, por favor.";
		next;
		mes "[Wolkeus Kaiser]";
		mes "Desculpe, Mitchell.";
		mes "Tenho de fazê-lo...";
		next;
		mes "[Mitchell]";
		mes "Não, afaste-se! Deixe-me ir!";
		mes "Me solta, Wolkeus!";
		hideonnpc("Mitchell#KiehlRoom");
		hideonnpc("Agente#KHAgent1");
		hideonnpc("Agente#KHAgent2");
		hideonnpc("Agente#KHAgent3");
		hideonnpc("Agente#KHAgent4");
		next;
		cutin("kh_kiel02",2);
		mes "[Kiehl]";
		mes "Ótimo, acabamos com aquele negócio feio.";
		mes "Agora, onde eu estava. Ah sim.";
		mes "Sim. Desculpe.";
		mes "Não temos mais tempo para brincar.";
		next;
		mes "[Kiehl]";
		mes "Aqui, aventureiro.";
		mes "Estou ciente que meu pai lhe enviou aqui para pegar isso.";
		mes "Considere meu presente final para ele.";
		mes "Estou surpreso que ele deixou esse anel dentro de mim.";
		next;
		cutin("kh_kiel04",2);
		mes "[Kiehl]";
		mes "Eu imagino que deve ser precioso para ele.";
		mes "Mas fico imaginado porque ele o colocou dentro de mim?";
		mes "Bem, de qualquer forma, tenho uma mensagem que gostaria que você entregasse a ele por mim.";
		next;
		cutin("kh_kiel01",2);
		mes "[Kiehl]";
		mes "Primeiro... Acho que devemos nos livrar dessa coisa velha.";
		mes "Foi um bom corpo, e me serviu bem por 23 anos.";
		mes "Sentirei falta dele.";
		mes "Descanse bem, velho Kiehl.";
		next;
		specialeffect(EF_DEVIL);
		next;
		mes "[Kiehl]";
		mes "Agora, esse era o corpo que meu pai fez.";
		mes "Por favor diga a ele que isso quer dizer que não somos mais parentes um do outro.";
		next;
		mes "[Kiehl]";
		mes "O corpo que estou usando agora?";
		mes "Eu mesmo fiz com a mais avançada tecnologia.";
		mes "Considere-o a Quarta Geração de corpos de robôs se quiser.";
		mes "Papai vai entender o que quero dizer.";
		next;
		mes "[Kiehl]";
		mes "De qualquer forma, por favor diga a ele isso, e livre-se desse anel velho que estava no meu corpo antigo de robô, e entregue para ele.";
		mes "Por enquanto vamos sair daqui: só temos apenas 3 minutos para evacuar.";
		next;
		mes "[Kiehl]";
		mes "Você é um oponente valoroso, e um humano que eu respeito.";
		mes "Eu não sei se vamos nos encontrar novamente, mas quem sabe?";
		mes "De qualquer forma, abrirei a saída para você.";
		mes "Até mais ver";
		delitem(Toy_Motor,1);
		KielHyreQuest = 104;
		hideonnpc("Kiehl#kh2");
		enablenpc("Kiehl_Room_Exit");
		donpcevent("Kiehl_Room_Exit::OnEnable");
		initnpctimer;
		cutin("",255);
		close;
	} else if (KielHyreQuest == 104) {
		cutin("kh_kiel02",2);
		mes "^3355FFvocê recuperou o anel do coração do velho corpo robótico de Kiehl^000000.";
		getitem(Elysia_Ring,1);
		KielHyreQuest = 106;
		close2;
		cutin("",255);
		end;
	} else{
		cutin("kh_kiel02",2);
		mes "^3355FFO antigo corpo robótico de Kiehl fica sozinho, sem vida e silencioso^000000.";
		close2;
		cutin("",255);
		end;
	}


	OnTimer180000:
	stopnpctimer;
	mapannounce("kh_kiehl02","Beeeeeeeeeeeeep",bc_npc,0xFF0000);
	donpcevent("KiehlRoom::OnReset");
	end;

	OnTimer179000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 1 segundo para a detonação",bc_npc,0xFF0000);
	end;

	OnTimer178000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 2 segundos para a detonação",bc_npc,0xFF0000);
	end;

	OnTimer177000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 3 segundos para a detonação",bc_npc,0xFF0000);
	end;

	OnTimer176000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 4 segundos para a detonação",bc_npc,0xFF0000);
	end;

	OnTimer175000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 5 segundos para a detonação",bc_npc,0xFF0000);
	end;

	OnTimer170000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 10 segundos para a detonação",bc_npc,0xFF0000);
	end;

	OnTimer160000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 20 segundos para a detonação",bc_npc,0xFF0000);
	end;

	OnTimer150000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 30 segundos para a detonação",bc_npc,0xFF0000);
	end;

	OnTimer120000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 1 minuto para a detonação.",bc_npc,0xFF0000);
	end;

	OnTimer60000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 2 minutos para a detonação.",bc_npc,0xFF0000);
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 3 minutos para a detonação.",bc_npc,0xFF0000);
	end;
}

// ------------------------------------------------------------------
kh_kiehl02,1,1,0	script	KiehlRoom	FAKE_NPC,{
	end;

	OnKiehlMobDead:
	++.KHKilled;
	if (.KHKilled == 5) {
		hideoffnpc("Kiehl#kh");
	}
	end;

	OnKiehlDead:
	.KHKilledBoss = 1;
	hideoffnpc("Kiehl#kh");
	end;

	OnReset:
	donpcevent("Kiehl_Room_Trap::OnGlobalTimerOff");
	if (getmapusers("kh_kiehl02")) {
		mapwarp(strnpcinfo(NPC_MAP),"lighthalzen",192,200);
	}
	killmonsterall("kh_kiehl02");
	disablenpc("Kiehl_Room_Exit");
	hideonnpc("Mitchell#KiehlRoom");
	hideonnpc("Agente#KHAgent1");
	hideonnpc("Agente#KHAgent2");
	hideonnpc("Agente#KHAgent3");
	hideonnpc("Agente#KHAgent4");
	hideonnpc("Kiehl#kh2");
	hideoffnpc("Kiehl#kh");
	.KHKilledBoss = 0;
	.KHKilled = 0;
	setvariable(getvariableofnpc(.KHTrapSprung,"Kiehl_Room_Trap"),0);
	$@KHQuestBusy = 0;
	end;
}

// ------------------------------------------------------------------
kh_kiehl02,49,55,6	script	Mitchell#KiehlRoom	4_F_JOB_HUNTER,{
	end;
	OnInit:
	hideonnpc strnpcinfo(NPC_NAME);
	end;
}
kh_kiehl02,53,52,4	duplicate(Mitchell#KiehlRoom)	Agente#KHAgent1	4_M_MASKMAN
kh_kiehl02,51,49,1	duplicate(Mitchell#KiehlRoom)	Agente#KHAgent2	4_M_MASKMAN
kh_kiehl02,47,50,0	duplicate(Mitchell#KiehlRoom)	Agente#KHAgent3	4_M_MASKMAN
kh_kiehl02,46,53,6	duplicate(Mitchell#KiehlRoom)	Agente#KHAgent4	4_M_MASKMAN

// ------------------------------------------------------------------
kh_kiehl02,48,53,6	script	Kiehl#kh2	4_M_KHKIEL,{
	end;

	OnInit:
	hideonnpc(strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
kh_kiehl02,50,59,0	script	Kiehl_Room_Exit	WARPNPC,1,1,{
	OnTouch:
	if (!getmapusers(strnpcinfo(NPC_MAP))) {
		donpcevent("KiehlRoom::OnReset");
	}
	warp("lighthalzen",193,202);
	end;

	OnEnable:
	specialeffect(EF_SUMMONSLAVE);
	end;

	OnInit:
	hideonnpc(strnpcinfo(NPC_NAME));
	end;
}
