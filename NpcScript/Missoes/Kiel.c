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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de acesso a f�brica de rob�s (Quest de Kiel)        |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
yuno_in01,35,179,4	script	Dono do Bar#kh	1_ETC_01,5,5,{
	if (!checkweight(Tavern_Wine,1)) {
		mes "[Vandt]";
		mes "S� um segundo!";
		mes "Voc� est� carregando muitos itens no momento.";
		mes "� melhor voc� colocar suas coisas no armazen da Kafra ou voc� n�o ser� capaz de pegar nada novo...";
		close;
	}
	if (!KielHyreQuest) {
		mes "[Vandt]";
		mes "Ol�, bem vind"+(Sex == SEX_MALE ? "o":"a")+" ao meu bar.";
		mes "Ent�o, o que gostaria de tomar?";
		next;
		switch (select("Cerveja, por favor","Um coquetel, por favor","Soju, por favor","Nada")) {
			case 1:
			mes "[Vandt]";
			mes "Certo, deixe-me pegar um copo de cerveja para voc�";
			mes "Aqui est�, esta � a cerveja espacial Schwaltz.";
			next;
			mes "^3355FF*Gulp gulp gulp*^000000";
			percentheal(5,-5);
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Ahhh, isso � realmente bom!";
			mes "Realmente acerta l� embaixo!!";
			close;
			case 2:
			mes "[Vandt]";
			mes "Me desculpe, mas tenho de entregar todos os ingredientes do nosso coquetel � outros fregueses.";
			mes "Talvez eu tenha o suficiente para fazer-lhe algo na pr�xima vez?";
			close;
			case 3:
			mes "[Vandt]";
			mes "S-soju? Desculpe, mas n�o servimos isso aqui.";
			mes "� um muita coisa de mach�o num drink para mim...";
			close;
			case 4:
			mes "[Vandt]";
			mes "Certamente, leve o tempo que quiser, relaxa, e pe�a algo quando estiver pronto.";
			close;
		}
	} else if (KielHyreQuest == 1) {
		mes "[Vandt]";
		mes "Ol�, bem vind"+(Sex == SEX_MALE ? "o":"a")+" ao meu bar.";
		mes "Ent�o, o que gostaria de tomar?";
		next;
		switch (select("Cerveja, por favor","Um coquetel, por favor","Soju, por favor","Voc� parece preocupado?","Cancelar")) {
			case 1:
			mes "[Vandt]";
			mes "Certo, deixe-me pegar um copo de cerveja para voc�";
			mes "Aqui est�, esta � a cerveja espacial Schwaltz.";
			next;
			mes "^3355FF*Gulp gulp gulp*^000000";
			percentheal(5, -5);
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Ahhh, isso � realmente bom!";
			mes "Realmente acerta l� embaixo!!";
			close;
			case 2:
			mes "[Vandt]";
			mes "Me desculpe, mas tenho de entregar todos os ingredientes do nosso coquetel � outros fregueses.";
			mes "Talvez eu tenha o suficiente para fazer-lhe algo na pr�xima vez?";
			close;
			case 3:
			mes "[Vandt]";
			mes "S-soju? Desculpe, mas n�o servimos isso aqui.";
			mes "� um muita coisa de mach�o num drink para mim...";
			close;
			case 4:
			mes "[Vandt]";
			mes "Oh, voc� por acaso ouviu?";
			mes "Desculpe, � que um dos meus empregados sofreu um acidente e se machucou muito.";
			mes "Ent�o n�o tenho ningu�m que possa entregar essa mercadoria.";
			next;
			mes "[Vandt]";
			mes "Eu tenho um pedido urgente que preciso enviar para a Academia de Kiel Hyre.";
			mes "Mas n�o consigo encontrar algu�m dispon�vel para esse tipo de trabalho tempor�rio.";
			next;
			switch (select("Sinto por saber disso","Quer que eu te ajude?")) {
				case 1:
				mes "[Vandt]";
				mes "Bem, com certeza irei pensar em alguma coisa.";
				mes "Voc� conhece algu�m que esteja interessado em algum trabalho meio per�odo?";
				close;
				case 2:
				mes "[Vandt]";
				mes "Mesmo? Que �timo!";
				mes "Mas antes, acho que � justo lhe dizer que esse servi�o pode n�o ser t�o simples quanto voc� pensa.";
				mes "Espero que voc� complete a entrega n�o importa o que aconte�a.";
				next;
				switch (select("Claro, eu farei","Espere, deixe-me pensar...")) {
					case 1:
					mes "[Vandt]";
					mes "Estou contente de ouvir isso.";
					mes "Bem, ent�o, por favor leve essa garrafa de Vinho Para Culin�ria para Senhora.";
					mes "^ff0000Lecollane^000000 na academia de Kiel Hyre.";
					mes "Lhe pagarei assim que voc� termine o servi�o, okay?";
					getitem(Tavern_Wine,1);
					KielHyreQuest = 2;
					close;
					case 2:
					mes "[Vandt]";
					mes "Certamente.";
					mes "Eu preciso fazer isso logo, ent�o se voc� n�o pode fazer.";
					mes "Mas conhece algu�m capaz, respons�vel que possa ent�o por favor avise-o sobre minha situa��o.";
					close;
				}
			}
			case 5:
			mes "[Vandt]";
			mes "Certamente, leve o tempo que quiser, relaxa, e pe�a algo quando estiver pronto.";
			close;
		}
	} else if ((KielHyreQuest >= 2) && (KielHyreQuest < 6)) {
		mes "[Vandt]";
		mes "Por favor entreque aquela garrafa de vilho que lhe dei para Senhora.";
		mes "^ff0000Lecollane^000000, que deve estar dentro da Academia de Kiel Hyre.";
		mes "R�pido e leve a ela antes que ela possa reclamar sobre a entrega.";
		close;
	} else if (KielHyreQuest == 6) {
		if (!countitem(Tavern_Wine)) {
			mes "[Vandt]";
			mes "Oh, voc� voltou.";
			mes "Obrigado por fazer aquela entrega.";
			mes "S� me d� um um instante ,ent�o eu posso pagar seu zeny, okay?";
			next;
			select("Eu preciso de mais vinho...");
			mes "[Vandt]";
			mes "Oh, voc� precisa entregar";
			mes "outra garrafa? Certo,";
			mes "deixe-me olhar por aqui, e";
			mes "lhe darei o vinho";
			mes "e seu pagamento.";
			next;
			mes "^3355FFRummage Rummage^000000";
			mes "^3355FFRummage Rummage^000000";
			next;
			mes "[Vandt]";
			mes "Aqui est�!";
			mes "Muit�ssimo obrigado";
			mes "por me ajudar";
			getitem(Tavern_Wine,1);
			Zeny += 1000;
			close;
		} else {
			mes "[Vandt]";
			mes "Ei, muit�ssimo obrigado por ter me ajudado de �ltima hora.";
			mes "Eu sabia que tinha pedido bem em cima da hora, mas voc� acabou enviar um salvador de vida!";
			mes "Eu realmente apreciei isso!";
			close;
		}
	} else {
		mes "[Vandt]";
		mes "Voc� � um bom trabalhador, voc� sabe disso?";
		mes "Confi�vel, respons�vel, disposto a ajudar os outros e proativo tamb�m!";
		mes "Acho que voc� vai longe na vida, garoto, eu realmente.";
		close;
	}

	OnTouch:
	if (!KielHyreQuest) {
		mes "[Vandt]";
		mes "Arrrggghhh...";
		mes "Isso n�o pode ser bom...";
		mes "Isso n�o � nada bom!";
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
		mes "Se voc� quiser alguma, venha e compre algumas torradaaaaasss";
		close;
	} else if (KielHyreQuest == 6) {
		if (!KHToastGirlEnd) {
			mes "[Cezu]"; 
			mes "Torrada Crocante, Fresca!";
			mes "Se voc� quiser alguma, venha e compre algumas torradaaaaasss!";
			mes "Hi hi Voc� quer comprar algumas torradas deliciosas?";
			next;
			switch (select("Estou aqui por Elly","N�o, obrigado")) {
				case 1:
				mes "[Cezu]"; 
				mes "Oh, Entendo.";
				mes "Elly deve ter desperdi�ado outro lote de ingredientes novamente.";
				mes "bem, ela � uma freguesa regular, ent�o eu realmente quero ajudar.";
				mes "Mas n�o posso fazer nada mesmo.";
				next;
				mes "[Cezu]"; 
				mes "Veja, eu simplesmente fiquei sem ingredientes tamb�m!";
				mes "Mas eu n�o posso mesmo sair para buscar mais.";
				mes "E se pessoas precisarem comprar torradas?";
				mes "Ei, voc� pode me ajudar?";
				next;
				mes "[Cezu]"; 
				mes "voc� poderia pegar por favor alguma farinha e ovos para mim no ^3355FFMoinho de Lighthalzen^000000.";
				mes "Quando voc� voltar eu posso dividir os ingredientes e voc� pode entregar algum para Elly.";
				next;
				mes "[Cezu]"; 
				mes "Eu sei que estou basicamente fazendo voc� fazer tudo por sua conta, mas por favor tente entender que minhas m�os est�o atadas.";
				mes "N-N�o me pergunte porque, elas simplesmente est�o!";
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
			mes "Voc� poderia ir por favor ao Moinho de Lighthalzen e dizer-lhes que Cezu precisa de muita farinha e muitos ovos!";
			mes "Ent�o, traga tudo para mim o mais r�pido que puder.";
			close;
		} else if (KHToastGirlEnd == 2) {
			mes "[Cezu]";
			mes "Hey, voc� voltou com os ingredientes!";
			mes "Muit�ssimo obrigada eu realmente precisava deles!";
			mes "Agora por favor leve essa farinha e esses ovos para Elly, e envie lembran�as. At� mais";
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
		mes "Hey, voc� est� carregando muitas coisas com voc� agora.";
		mes "Ponha sua tralha no Armazen da Kafra se estiver esperando que eu lhe d� alguma coisa.";
		mes "� por isso que voc� veio aqui ao moinho, n�o foi?";
		close;
	} else if (!KHToastGirlEnd) {
		mes "[Mills]";
		mes "Ei, que voc� que?";
		mes "Estou muito ocupado agora ent�o, se importa de voltar mais tarde?";
		mes "Ent�o conversaremos.";
		close;
	} else if (KHToastGirlEnd == 1) {
		mes "[Mills]";
		mes "Ei, que c� qu�?";
		mes "Voc� simplesmente me pegou em boa hora.";
		mes "Mas se voc� precisa de algo, � melhor cuspir r�pido, antes que as coisas fiquem agitadas de novo.";
		next;
		switch (select("Estou aqui por Cezu","......")) {
			case 1:
			mes "[Mills]";
			mes "Oh, Cezu da barraca de torradas?";
			mes "Tenho tudo que aquela garota precisa bem aqui.";
			mes "Tem ovos dentro, ent�o tenha muito cuidado com isso.";
			mes "Est� pronto pr� voc�...";
			next;
			mes "[Mills]";
			mes "A garota � uma dos meus clientes regulares ent�o voc� n�o tem de me pagar ou fazer nenhuma miss�o extra pr� mim.";
			mes "Eu sei como outras pessoas tratam voc�s aventureiros.";
			mes "Bem at� mais.";
			getitem(Delivery_Box,1);
			KHToastGirlEnd = 2;
			close;
			case 2:
			mes "[Mills]";
			mes "......";
			mes "Hm, se voc� precisa de algo, simplesmente fa�a, eu acho.";
			mes "Cutz, Cutz onde voc� est�?";
			mes "� melhor voc� n�o estar enrolando!";
			close;
		}
	} else {
		mes "[Mills]";
		mes "Aquele Cutz � um pirralho t�o pregui�oso.";
		mes "O cara pensa que pode perambular por a� quando ele est� em cima da hora...!";
		mes "Ah bem, ele sabe que eu posso achar um assistente melhor.";
		mes "Ele vai aprender...";
		close;
	}
}

// ------------------------------------------------------------------
yuno_fild08,158,194,6	script	Seguran�a#kh1::KHAGuard	4_M_EIN_SOLDIER,{
	if ((KielHyreQuest < 2) || (KielHyreQuest > 31)) {
		mes "[Seguran�a]";
		mes "Desculpe, mas voc� n�o est� associado � essa institui��o.";
		mes "Portanto voc� n�o est� autorizado a entrar na ^FF0000Academia Kiel Hyre^000000.";
		mes "Por favor v� embora se voc� n�o tiver hor�rio marcado com a Staff.";
		close;
	} else if (KielHyreQuest == 2) {
		mes "[Seguran�a]";
		mes "Desculpe, mas voc� n�o est� associado � essa institui��o.";
		mes "Portanto voc� n�o est� autorizado a entrar na ^FF0000Academia Kiel Hyre^000000.";
		mes "Por favor v� embora se voc� n�o tiver hor�rio marcado com a Staff.";
		next;
		switch (select("Estou aqui para uma entrega","......")) {
			case 1:
			mes "[Seguran�a]";
			mes "Voc� est� aqui para entregar algo?";
			mes "Simplesmente me d� o ^FF0000nome^000000 do recipiente seguido pelo ^FF0000item^000000 a ser entregue, e eu irei verificar antes de lhe deixar entrar.";
			next;
			input(.@KHDelivery$);
			if (.@KHDelivery$ != "Lecollane") {
				mes "[Seguran�a]";
				mes "Voc� veio entregar algum vinho para... para quem?";
				mes "Qual era o nome?";
				mes "Eu...Eu n�o acho que tenhamos algu�m na academia chamado "+@KHDelivery$+"";
				close;
			}
			input(.@KHDelivery$);
			if (.@KHDelivery$ != "Vinho de Culin�ria") {
				mes "[Seguran�a]";
				mes "Ent�o voc� est� aqui para fazer uma entrega � Sra. Lecollane?";
				mes "O que voc� trouxe para ela?";
				mes "Algum ^3355FF"+@KHDelivery$+"^000000?";
				next;
				mes "[Seguran�a]";
				mes "Deixe-me bip�-la antes, e checar para ter certeza de que ela est� esperando voc�.";
				mes "Deixe-me ver agora...";
				next;
				mes "......";
				mes ".........";
				mes "............";
				next;
				mes "[Seguran�a]";
				mes "Huh. Sra. Lecollane est� esperando uma entrega.";
				mes "Mas n�o o item que voc� disse que trouxe para ela.";
				mes "Voc� deveria checar para ver se n�o houve alguma confus�o...";
				close;
			}
			mes "[Seguran�a]";
			mes "Muito bem....";
			mes "Ent�o voc� est� aqui para entregar uma garrafa de vinho para a Sra. Lecollane?";
			mes "Deixe-me bip�-la e confirmar isso rapidamente.";
			next;
			mes "......";
			mes ".........";
			mes "............";
			next;
			mes "[Seguran�a]";
			mes "Tudo parece certo.";
			mes "Sra. Lecollane est� esperando voc�.";
			mes "Acho que voc� pode entrar.";
			close2;
			warp("kh_school",71,155);
			end;
			case 2:
			mes "[Seguran�a]";
			mes "Se voc� n�o tiver um agendamento, ent�o n�o fique vadiando em frente da academia!";
			close;
		}
	} else if (KielHyreQuest < 32) {
		mes "[Seguran�a]";
		mes "Oh, voc� tinha outros neg�cios dentro da academia?";
		mes "Eu lembro de voc� de antes, ent�o n�o deve haver nenhum problema em deixar voc� voltar l� dentro...";
		close2;
		warp("kh_school",71,155);
		end;
	}
}
yuno_fild08,158,183,7	duplicate(KHAGuard)	Seguran�a#kh2	4_M_EIN_SOLDIER

// ------------------------------------------------------------------
kh_school,176,60,4	script	Senhorita#kh	4W_F_01,{
	if (KielHyreQuest < 2) {
		mes "[Srs. Lecollane]";
		mes "Algum problema?";
		mes "Pessoas de fora n�o s�o permitidas a vir aqui, por favor saia.";
		close;
	} else if (KielHyreQuest == 2) {
		if (!checkweight(Tavern_Wine,1)) {
			mes "[Srs. Lecollane]";
			mes "Hey, voc� est� carregando muitas coisas com voc� agora.";
			mes "Ponha sua tralha no Armazen da Kafra se estiver esperando que eu lhe d� alguma coisa.";
			mes "� por isso que voc� veio aqui ao moinho, n�o foi?";
			close;
		}
		mes "[Sra. Lecollane]";
		mes "Oh, Ol�. Ah!";
		mes "voc� veio para trazer meu vinho?";
		mes "O seguran�a chamou e mencionou que voc� estava vindo.";
		next;
		switch (select("Sim, � isso mesmo!","Er, d-desculpe!")) {
			case 1:
			mes "[Sra. Lecollane]";
			mes "Bem, voc� veio um pouquinho mais tarde do que eu imaginava, mas acho que n�o adianta nada.";
			mes "Acho que a espera simplesmente alegrou minha antecipa��o por essa garrafa de vi...";
			next;
			mes "^3355FF*Cling! Crrrack!*^000000";
			next;
			mes "[Sra. Lecollane]";
			mes "Elly?";
			mes "Elly voc� quebrou algo novamente?!";
			mes "Voc� tem de ter mais cuidado!";
			mes "Se voc� n�o terminar de cozinhar aqueles biscoitos at� o fim do dia, suas notas semestrais ir�o sofrer!";
			next;
			mes "[Elly]";
			mes "M-Mas eu s�...";
			next;
			mes "[Mrs. Lecollane]";
			mes "^FF0000Elly^000000!!";
			next;
			mes "[Elly]";
			mes "......";
			mes "Sim, Sra. Lecollane.";
			next;
			mes "[Sra. Lecollane]";
			mes "*Ahem* Com licen�a.";
			mes "Voc� poderia deixar o vinho ali?";
			mes "Voc� pode ir agora, e por favor n�o fique vagando desnecess�riamente pela academia.";
			delitem(Tavern_Wine,1);
			KielHyreQuest = 4;
			close;
			case 2:
			mes "[Sra. Lecollane]";
			mes "Hm...?";
			mes "Acho que devo estar enganada.";
			mes "Me desculpe, Achei que voc� fosse outra pessoa.";
			close;
		}
	} else {
		mes "[Mrs Lecollane]";
		mes "*Suspiro*";
		mes "Bem, nosso neg�cios est� completo, ent�o voc� poderia por favor deixar o campus assim que puder?";
		mes "N�o acredito que nosso futuro est� nas m�os dessas garotas...";
		close;
	}
}

// ------------------------------------------------------------------
kh_school,179,39,0	script	Estudante Bonita#kh	4_F_KHELLY,{
	if (!checkweight(Spawn,200)) {
		mes "[Elly]";
		mes "^3355FF- Espere!!";
		mes "Voc� est� carregando muitos itens e et� incapaz de aceitar mais nenhum.";
		mes "Por favor abra algum espa�o no seu inventario antes de retornar^000000.";
		close;
	} else if (KielHyreQuest < 4) {
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "W-wah! Oh...!";
		mes "*Phew*";
		mes "Essa foi por pouco, eu quase os derrubei novamente!";
		mes "Por qu� eu tenho tanta dificuldade em manusear ingredientes?";
	} else if (KielHyreQuest == 4) {
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "Oh n�o, o que eu devo fazer?";
		mes "*Suspiro*";
		mes "O-o qu� eu vou fazer?";
		mes "*sniff*";
		next;
		switch (select("O que aconteceu?","......")) {
			case 1:
			mes "[Elly]";
			mes "Eu...Eu tenho de terminar de assar essa leva de biscoitos at� o fim do dia.";
			mes "Mas ent�o eu derrubei todos os ingredientes no ch�o.";
			mes "Eu n�o sei como eu posso assar aqueles biscoitos agora...";
			next;
			switch (select("O que posso fazer para ajudar-lhe?","Oh, Sinto muito")) {
				case 1:
				cutin("kh_elly02",2);
				mes "[Elly]";
				mes "O que foi...?";
				mes "Voc� realmente me ajudar�?";
				mes "Isso � maravilhoso!";
				mes "Obrigada!";
				mes "Muit�ssimo obrigada!";
				next;
				break;
				case 2:
				mes "[Elly]";
				mes "O que, voc� n�o vai para essa escola, voc� vai?";
				mes "V-Voc� � um daqueles aventureiros, certo?";
				next;
				select("Sim, est� correto");
				mes "Escuta, eu acredito que voc� provavelmente tem seus pr�prios planos.";
				mes "Mas n�o acha que voc� pode me ajudar com esse enorme problema que eu tenho?";
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
					mes "Volte, voc� n-n�o...!";
					mes "Eu realmente preciso de uma ajuda!";
					emotion(e_sob);
					close2;
					cutin("",255);
					end;
				}
			}
			cutin("kh_elly01",2);
			mes "[Elly]";
			mes "Bem, acho que a �nica maneira de eu assar esses biscoitos � conseguir alguns ingredientes novos.";
			mes "Desculpe eu ser um peso, mas se voc� n�o se oferecesse para me ajudar, ent�o eu n�o teria a quem pedir!";
			next;
			cutin("kh_elly04",2);
			mes "[Elly]";
			mes "Voc� n�o entende o qu�o importante � de eu assar esses biscoitos...";
			mes "Se eu n�o terminar essa tarefa, ent�o a Sra. Crank vai me reprovar por todo o semestre!";
			next;
			cutin("kh_elly01",2);
			mes "[Elly]";
			mes "Okay, eu preciso me acalmar.";
			mes "Acho que posso fazer isso com sua ajuda.";
			mes "Voc� poderia me fazer esse enorme favor e me trazer todos esses ingredientes?";
			next;
			mes "[Elly]";
			mes "^3355FF1 Vinho de Culin�ria";
			mes "7 Leites";
			mes "5 Cacaos";
			mes "2 Queijos";
			mes "1 Ovo^000000, e";
			mes "^3355FF1 Saco de Farinha^000000.";
			next;
			mes "[Elly]";
			mes "Vejamos...";
			mes "Voc� pode conseguir o vinho no bar em Juno, Cacaos ca�ando Yoyos, e pode pegar a farinha e ovos da garota que tem uma barraca de torradas em Juno.";
			next;
			mes "[Elly]";
			mes "Boa sorte em pegar tudo, e espero que voc� volte logo com esses ingredientes de biscoitos o mais r�pido que puder.";
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
			mes "Deixe-me ver, voc� gostaria que eu lhe lembrasse quais ingredientes eu preciso?";
			mes "Por favor traga essas coisas o mais r�pido que puder para eu assar rapidamente esses biscoitos";
			next;
			mes "[Elly]";
			mes "^3355FF1 Vinho de Culin�ria";
			mes "7 Leites";
			mes "5 Cacaos";
			mes "2 Queijos";
			mes "1 Ovo^000000, e";
			mes "^3355FF1 Saco de Farinha^000000.";
			next;
			mes "[Elly]";
			mes "Vejamos...";
			mes "Voc� pode pegar o vinho no bar em Juno, Cacaos ca�ando Yoyos, e voc� pode pegar farinha e ovos da garota que tem uma barraca de torradas em Juno.";
			close2;
			cutin("",255);
			end;
		} else {
			cutin("kh_elly02",2);
			mes "[Elly]";
			mes "Finalmente eu tenho tudo que eu preciso!";
			mes "Isso � �timo!";
			mes "Oh, voc� poderia por favor aguardar um instante enquanto eu asso esses biscoitos?";
			mes "N�o deve demorar muito, ent�o aguenta mais um pouco.";
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
		mes "Est�o finalmente prontos!";
		mes "''Biscoitos Especiais da Elly''";
		mes "Eu gostaria que voc� pegasse alguns como agradecimento por ter me ajudado";
		next;
		mes "[Elly]";
		mes "Desculpe, mas eu estava t�o preocupada em assar esses biscoitos que eu nem perguntei pelo seu nome.";
		mes "Eu sou ^FF0000Elly^000000.";
		mes "Qual o seu nome?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "� ^3355FF"+strcharinfo(CHAR_NAME)+"^000000.";
		next;
		cutin("kh_elly02",2);
		mes "[Elly]";
		mes strcharinfo(CHAR_NAME)+"?";
		mes "...que nome! � maravilhoso!";
		getitem(Well_Baked_Cookie,5);
		KielHyreQuest = 10;
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 10) {
		cutin("kh_elly01",2);
		mes "[Elly]";
		mes "Desculpe, mas eu tenho outro favor para lhe pedir se voc� n�o se importar em me ajudar novamente.";
		mes "N�o se preocupe, voc� n�o precisa se apressar tanto como fez da outra vez.";
		next;
		switch (select("O que voc� precisa?","Desculpe, mas estou muito ocupado...")) {
			case 1:
			mes "[Elly]";
			mes "Sabe como voc� me ajudou a assar esses biscoitos?";
			mes "� a primeira vez que fui capaz de fazer sem queim�-los!";
			mes "Sei que meu av� ficaria orgulhoso de mim!";
			next;
			mes "[Elly]";
			mes "Eu realmente quero que meu av� experimente esses biscoitos que eu assei.";
			mes "Mas os biscoitos j� estar�o estragados na hora que eu puder sair do campus.";
			mes "Voc� entregaria esses biscoitos pro meu av� pr� mim?";
			next;
			switch (select("Claro","Agora n�o")) {
				case 1:
				cutin("kh_elly02",2);
				mes "[Elly]";
				mes "Oh,"+strcharinfo(CHAR_NAME)+"!";
				mes "Muit�ssimo obrigada, eu sabia que voc� entenderia!";
				mes "Voce poderia por favor levar esses biscoitos para ele na ^FF0000Cabana de Kiel Hyre^000000?";
				next;
				mes "[Elly]";
				mes "Ah, sim!";
				mes "Eles s�o realmente cuidadosos sobre visitantes e mantendo estranhos fora da propriedade.";
				mes "Mas se voc� mencionar meu nome, eles lhe deixar�o entrar.";
				mes "Certo ent�o, at� mais";
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
		mes "Oh, voc� n�o sabe onde encontrar a cabana de Kiel Hyre?";
		mes "� bem ao norte dessa academia.";
		mes "Por favor entregue meus biscoitos para meu av�, e diga a ele que tenho muitas saudades.";
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 14) {
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "Hm? av� n�o est� em casa?";
		mes "Que estranho, ele n�o mencionou nada sobre nenhuma viagem de neg�cios.";
		mes "Achei que estaria em casa o dia todo...";
		next;
		cutin("kh_elly04",2);
		mes "[Elly]";
		mes "voc� voltaria na cabana dele mais uma vez?";
		mes "Aqui, voc� pode usar essa chave da cabana.";
		mes "Assim, voc� pode simplesmente entrar e falar com ele.";
		getitem(Villa_Spare_Key,1);
		KielHyreQuest = 16;
		close2;
		cutin("",255);
		end;
	} else if ((KielHyreQuest > 14) && (KielHyreQuest < 20)) {
		cutin("kh_elly01",2);
		mes "[Elly]";
		mes "Isso � t�o estranho...";
		mes "Achei que meu av� disse que ficaria em casa o dia todo...";
		close2;
		cutin("",255);
		end;
	} else if (KielHyreQuest == 20) {
		mes "[Elly]";
		mes "Hmmm...?";
		mes "O que � isso, uma carta para mim?";
		next;
		mes "^3355FFElly abriu o envelope e come�ou a ler a carta^000000";
		next;
		mes "Querida Elly";
		mes " ";
		mes "Tenho algo a conversar com meu filho Kiehl, ent�o estou partindo para encontr�-lo.";
		mes "Se n�o ouvir falar de mim em 7 dias ap�s eu lhe ter escrito � poss�vel que eu esteja em perigo.";
		mes "N�o confie em ningu�m na Academia, Elly.";
		mes "Deixei algo para voc� no Escrit�rio.";
		next;
		cutin("kh_elly03",2);
		mes "[Elly]";
		mes "O qu�?";
		mes "Oh n�o, fazem dez dias desde que ele escreveu essa carta!";
		mes "Ah, ent�o isso quer dizer que ele est� em perigo?!";
		mes "Oh n�o, o que devo fazer?";
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
		switch (select("Sobre seu Av�","Me fale sobre Kiehl","O que h� com essa academia?")) {
			case 1:
			mes "[Elly]";
			mes "Oh! Meu av� � fundador de Kiel Hyre, e o Diretor Executivo da funda��o Kiel Hyre.";
			mes "Ele parece fechado e de cora��o frio, mas na verdade � muito bom!";
			next;
			mes "[Elly]";
			mes "N�s n�o temos rela��o de sangue, mas ele tem cuidado de mim desde que eu perdi meus pais.";
			mes "Vov�, onde voc� est�?";
			mes "Estou ficando preocupada!";
			close2;
			cutin("",255);
			end;
			case 2:
			mes "[Elly]";
			mes "Kiehl?";
			mes "� o filho";
			mes "do meu av�...";
			mes "Eu n�o o conhe�o muito bem, e somente o vi uma vez num evento da academia.";
			next;
			mes "[Elly]";
			mes "Mmm, ele � um rapaz bonit�o, com pele clara, cabelos brancos, e seu frio, feroz olhar.";
			mes "Muitas de minhas colegas de classe veneram Kiehl porque ele � tamb�m um g�nio dos neg�cios";
			next;
			mes "[Elly]";
			mes "� estranho pensar...";
			mes "N�o tenho nem id�ia porque meu av� e Kiehl n�o saem juntos.";
			mes "Ambos s�o realmente bons no que eles fazem.";
			close2;
			cutin("",255);
			end;
			case 3:
			mes "[Elly]";
			mes "Bem, eu sei que a seguran�a aqui � bem r�gida, mas porque tudo aqui � t�o luxuoso e caro.";
			next;
			mes "[Elly]";
			mes "Tamb�m temos um curr�culo bem especial onde voc� aprende mais sobre o que voc� quer.";
			mes "Pessoalmente, eu quero me tornar uma mulher de grande carreira, como ^3355FFSenhorita Allysia^000000.";
			next;
			mes "[Elly]";
			mes "Esse lugar certamente n�o � como outras escolas.";
			mes "Voc� j� sabe disso, tudo � feito para se encaixar �s necessidades dos estudantes.";
			next;
			mes "[Elly]";
			mes "Recentemente, achava?";
			mes "Algo realmente estranho tem acontecido.";
			mes "Todas minhas colegas de classe t�m medo de sair sozinhas por a�.";
			next;
			cutin("kh_elly02",2);
			mes "[Elly]";
			mes "Mas eu ficarei bem!";
			mes "Voc� estar� l� para me resgatar do perigo certo,"+strcharinfo(CHAR_NAME)+"?";
			next;
			switch (select("Quem � Senhorita Allysia?","Incidentes estranhos?")) {
				case 1:
				mes "[Elly]";
				mes "Oh, Senhorita Allysia � a secret�ria do vov�.";
				mes "Ela � t�o linda e meu av� realmente confia tudo � ela!";
				close2;
				cutin("",255);
				end;
				case 2:
				cutin("kh_elly04",2);
				mes "[Elly]";
				mes "Bem,"+strcharinfo(CHAR_NAME)+"...";
				mes "Eu n�o deveria dizer � ningu�m fora da escola, mas posso confiar em voc�!";
				mes "Estamos assombrados por um fantasma!";
				next;
				mes "[Elly]";
				mes "Sei que parece doido, mas esse fantasma vaga pelo campus, e amaldi�oa suas v�timas, deixando-as t�o fracas e sem vida.";
				mes "Aconteceu com minha colega de quarto, biquine.";
				mes "� como se ela fosse uma est�tua.";
				next;
				mes "[Elly]";
				mes "Eu escapei para a enfermaria para v�-la e ela...";
				mes "Ela n�o podia fazer nada!";
				mes "O que aconteceria se o fantasma decidisse me amaldi�oar?!";
				next;
				cutin("kh_elly02",2);
				mes "[Elly]";
				mes "Sabe o qu�...?";
				mes "Se eu for amaldi�oada por aquele fantasma, simplesmente grite ''^FF0000ACORDE, ELLY!^000000''";
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
		mes "Arg, Estou numa m� situa��o!";
		mes "Tenho de terminar meu";
		mes "dever de casa antes do combinado!";
		mes "Sim, tenho de ir ver";
		mes "a Sra. Lecollane agora.";
		next;
		mes "[Elly]";
		mes "Diga,"+strcharinfo(CHAR_NAME)+",";
		mes "se estiver tudo be, voc� poderia";
		mes "descobrir o que meu";
		mes "av� deixou para mim no";
		mes "^FF0000dep�sito da cabana^000000?";
		mes "Voc� � o �nico que posso confiar!";
		next;
		mes "[Elly]";
		mes "De qualquer forma, te vejo mais tarde";
		mes "ao anoitecer. Por favor venha";
		mes "ao meu ^FF0000dormit�rio^000000. Um, os";
		mes "dormit�rios s�o na igreja bem";
		mes "atr�s da academia, okay?";
		next;
		mes "[Elly]";
		mes "Meu quarto � nos fundos,";
		mes "e � no ^FF0000Segundo Andar^000000";
		mes "^FF0000no lado esquerdo^000000. Por favor use";
		mes "uma escada para subir, okay?";
		mes "Deixarei minha janela aberta";
		mes "para voc�, ent�o venha, okay?";
		next;
		mes "[Elly]";
		mes "R�pido, r�pido, a";
		mes "professora est� vindo!";
		KielHyreQuest = 26;
		close2;
		cutin("",255);
		end;
	} else {
		mes "[Elly]";
		mes "R�pido, r�pido, a professora est� vindo!";
		close2;
		cutin("",255);
		end;
	}
}

// ------------------------------------------------------------------
yuno_fild08,69,185,0	script	Janela#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 30) {
		mes "^3355FFEsse deve ser o quarto de Elly.";
		mes "Parece que n�o h� ningu�m l� dentro ent�o provavelmente ela ainda n�o voltou.";
		mes "Por enquanto voc� poderia tentar encontrar o que o av� dela deixou para ela no escrit�ro da cabana deles^000000.";
		close;
	}
	else if ((KielHyreQuest >= 30) && (KielHyreQuest <= 45)) {
		mes "^3355FFEssa janela um pouco aberta deve levar ao quarto de Elly.";
		mes "Ainda que ela tenha lhe pedido para encontrar uma escada e entrar pela janela dela, voc� provavelmente n�o vai achar nenhuma.";
		mes "Voc� pode ser capaz de subir por aquele cano de �gua^000000.";
		next;
		switch (select("Subir pelo cano de �gua","Encontrar outra maneira")) {
			case 1:
			if (rand(1,3) == 2) {
				mes "^3355FFVoc� subiu pelo cano de �gua e se esgueirou no quarto de Elly com sucesso^000000.";
				close2;
				warp("kh_school",185,185);
				end;
			} else {
				mes "^3355FFVoc� tentou subir no cano de �gua, mas acabou falhando e batendo sua cabe�a^000000.";
				percentheal(-10,0);
				close;
			}
			case 2:
			mes "^3355FFDeve haver alguma outra maneira de entrar no quarto de Elly.";
			mes "Al�m de subindo por esse cano de �gua.^000000.";
			close;
		}
	} else {
		mes "^3355FFVoc� n�o consegue subir at� a janela aberta^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_school,178,180,4	script	Elly#kh	4_F_KHELLY,{
	if (!checkweight(Spawn,200)) {
		mes "^3355FF- Espere!!";
		mes "Voc� est� carregando muitos itens e et� incapaz de aceitar mais nenhum.";
		mes "Por favor abra algum espa�o no seu inventario antes de retornar^000000.";
		close;
	} else if (KielHyreQuest < 30) {
		mes "[Elly]";
		mes "Oh!";
		mes "Quem � voc�, como chegou aqui?";
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
		mes "^3355FFElly parece ter sido amaldi�oada e est� completamente im�vel e sem vida.";
		mes "Voc� tem de tentar algo, mas o qu�^000000?";
		next;
		switch (select("Acord�-la sacodindo-a","Acord�-la gritando","Ignorar")) {
			case 1:
			mes "^3355FFVoc� pega Elly pelos ombros.";
			mes "E tenta fazer com que ela responda com uma sacodida violenta de todo o corpo dela^000000.";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Elly? Elly? n�o!";
			mes "Volte para n�s!";
			next;
			mes "^3355FFElly n�o est� respondendo..^000000.";
			close;
			case 2:
			input(.@KHInput$);
			if (.@KHInput$ == "Acorde Elly!") {
				mes "[Elly]";
				mes ".............";
				next;
				mes "^3355FFAssim que voc� disse aquelas palavras, uma ^000000Pequena Chave Dourada e um ^000000Broche^3355FF ca�ram das m�os de Elly.";
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
				mes "^3355FFElly n�o est� respondendo..^000000.";
				close;
			}
			case 3:
			mes "^3355FFTudo bem.";
			mes "Mas cedo ou tarde, voc� deve tentar quebrar a maldi��o jogada em Elly^000000.";
			close;
		}
	} else if (KielHyreQuest == 34) {
		if (!countitem(Iron_Box)) {
			mes "^3355FFTalvez a chave dourada destranque algo no escrit�rio.";
			mes "Vamos dar uma olhada^000000.";
			close;
		} else {
			mes "^3355FFParece que a chave dourada de Elly cabe na fechadura em uma Caixa Cinza que voc� achou dentro.";
			mes "Da cabana em Kiel Hyre^000000.";
			next;
			mes "^3355FFVoc� conseguiu abrir a Caixa cinza, com a Chave Dourada e encontrou um Cart�o de Acesso Azul.";
			mes "Junto com um bilhete dobrado dentro da Caixa Cinza.";
			mes "Voc� rapidamente l� o conte�do do bilhete^000000.";
			next;
			mes "Querida Elly,";
			mes "Kiehl finalmente quebrou o tabu e tentou transformar voc� em algo horr�vel.";
			mes " ";
			mes "Quando voc� ler isso, minha vida provavelmente est� em perigo.";
			mes "At� onde viverei, depender� de voc�.";
			mes " ";
			mes "Voc� j� vai descobrir se voc� encontrar Puppet, mas quero lhe dizer eu mesmo.";
			mes "Voc� n�o � humana.";
			mes "Voc� descobrir� os detalhes se voc� entrar na f�brica usando a entrada perto da sepultura pr�xima da igreja.";
			mes "Ent�o quero que voc� encontre Allysia dentro da sala secreta da f�brica.";
			mes "Eu registrei seu nome no sistema de seguran�a dela, ent�o n�o se preocupe.";
			mes "Felizmente, Allysia vir� ent�o me salvar...";
			mes " ";
			mes "Desculpe por isso,";
			mes "Vov�";
			getitem(Blue_Key_Card,1);
			delitem(Iron_Box,1);
			KielHyreQuest = 36;
			close;
		}
	} else if (KielHyreQuest >= 36) {
		mes "^3355FFAqui � onde voc� descobriu o bilhete trancado dentro da Caixa Cinza.";
		mes "A seguinte mensagem estava escrita no bilhete pelo av� de Elly, Kiel Hyre^000000.";
		next;
		mes "Querida Elly,";
		mes "Kiehl finalmente quebrou o tabu e tentou transformar voc� em algo horr�vel.";
		mes " ";
		mes "Quando voc� ler isso, minha vida provavelmente est� em perigo.";
		mes "At� onde viverei, depender� de voc�.";
		mes " ";
		mes "Voc� j� vai descobrir se voc� encontrar Puppet, mas quero lhe dizer eu mesmo.";
		mes "Voc� n�o � humana.";
		mes "Voc� descobrir� os detalhes se voc� entrar na f�brica usando a entrada perto da sepultura pr�xima da igreja.";
		mes "Ent�o quero que voc� encontre Allysia dentro da sala secreta da f�brica.";
		mes "Eu registrei seu nome no sistema de seguran�a dela, ent�o n�o se preocupe.";
		mes "Felizmente, Allysia vir� ent�o me salvar...";
		mes " ";
		mes "Desculpe por isso,";
		mes "Vov�";
		close;
	}
}

// ------------------------------------------------------------------
kh_school,175,176,0	script	Cesta de Biscoitos#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 30) {
		mes "^3355FFEsta cesta est� cheia de biscoitos^000000.";
		close;
	} else if (KielHyreQuest == 30) {
		mes "^3355FFEssa deve ser a Cesta de Biscoitos de Elly.";
		mes "Parece que h� um bilhete dobrado dentro no meio dos biscoitos^000000.";
		next;
		switch (select("Ler o Bilhete","Ignorar")) {
			case 1:
			mes strcharinfo(CHAR_NAME)+", socorro!";
			mes "Tem esse cara vestido de preto que est� andando por a�, e jogando essa magia estranha!";
			mes "� ele que tem feito as pessoas frias e sem vida como bonecos!";
			mes "Estou assustada!";
			mes " ";
			mes "Espero que voc� pegue esse bilhete...";
			mes "Ele correu atr�s de mim,mas me tranquei no meu quarto.";
			mes "Vou deixar minha janela aberta assim voc� ainda pode me encontrar.";
			mes "Espero que ele n�o jogue a maldi��o dele em mim!";
			KielHyreQuest = 32;
			close;
			case 2:
			mes "^3355FFAquele bilhete provavelmente n�o foi escrito para voc� de qualquer forma^000000.";
			close;
		}
	} else if (KielHyreQuest < 108) {
		mes "^3355FFEsses biscoitos n�o est�o estragados ainda, mas eles n�o est�o mais quentes.";
		mes "Se eles n�o est�o na temperatura do quarto, ent�o est�o um pouco frios^000000.";
		close;
	} else if (KielHyreQuest == 108) {
		mes "^3355FFQuando voc� olha para o cesto de bolachas, o vento da janela o empurra, revelando uma carta que foi colocada embaixo.";
		mes "Provavelmente foi escrito por Elly para voc� ler^000000.";
		next;
		mes "^333333Querido "+strcharinfo(CHAR_NAME)+",";
		mes " ";
		mes "Meus professores geralmente me gritam desde que cometi tantos erros.";
		mes "Mas hoje a Sra. Lecollane me deu elogios pelos meus deliciosos biscoitos!";
		mes "� tudo obrigado a voc�, meu amigo.";
		mes "Estou muito feliz por nos conhecermos:";
		mes "Voc� me ensinou que existem pessoas boas no mundo.";
		mes "E eu sei que o vov� gostar� de voc�, no entanto, n�o sei onde ele poderia estar...";
		mes " ";
		mes "Algum dia, espero tornar-me t�o agrad�vel como voc� �.";
		mes "Vamos nos manter em contato e sermos realmente bons amigos, ok?";
		mes " ";
		mes "Seu, Elly^000000";
		next;
		mes "^3355FFParece que voc� ainda pode sentir o calor e a bondade de Elly em sua cesta de bolachas.";
		mes "Voc� escolheu um biscoito e coloque em sua boca.";
		mes "Era deliciosamente agridoce.";
		KielHyreQuest = 109;
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "� hora de voltar.";
		mes "N�o posso ficar aqui por muito mais tempo.";
		close2;
		warp("yuno_fild08",69,183);
		end;
	} else {
		mes "^3355FFTodos os cookies desta cesta est�o obsoletos!";
		mes "Bem, n�o deveria ser uma surpresa.";
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
		mes "^3355FF� s� uma sepultura.";
		mes "Pode ser importante para voc� mais tarde.";
		mes "Mas agora n�o � l� aquel ajuda para voc�^000000.";
		close;
	} else if (KielHyreQuest == 36) {
		if (!countitem(Yellow_Key_Card)) {
			mes "^3355FFH� uma porta secreta pr�xima � essa sepultura.";
			mes "Parece que h� algum tipo de slot e um teclado num�rico instalado na porta^000000.";
			close;
		} else {
			mes "^3355FFH� uma porta secreta pr�xima � essa sepultura.";
			mes "Parece que h� algum tipo de slot e um teclado num�rico instalado na porta^000000.";
			next;
			mes "^3355FFO que voc� deveria inserir no slot?^000000";
			next;
			input(.@KHInput$);
			if (.@KHInput$ == "Cart�o de Acesso Amarelo") {
				mes "^3355FFUm barulho de confirma��o eletr�nica aciona-se assim que voc� insere o Cart�o de Acesso Amarelo.";
				mes "Seguido por uma voz an�nima que pergunta:^000000";
				next;
				mes "[Sistema de Seguran�a]";
				mes "Por favor entre a senha.";
				next;
				input(.@KHInput$);
				next;
				if (.@KHInput$ == "4772961") {
					mes "[Sistema de Seguran�a]";
					mes "Senha confirmada.";
					mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+", Kiel Hyre.";
					next;
					mes "^3355FFVoc� ouve outro beep agrad�vel e um caminho secreto se abre^000000.";
					KielHyreQuest = 38;
					close;
				} else {
					mes "[Sistema de Seguran�a]";
					mes "Senha incorreta.";
					mes "Por favor tente novamente.";
					close;
				}
			} else {
				mes "^3355FFO que quer que voc� estiver tentando inserir no slot n�o est� funcionando^000000.";
				close;
			}
		}
	} else if ((KielHyreQuest >= 38) && (KielHyreQuest < 106)) {
		mes "^3355FFA porta para a f�brica est� escancarada^000000.";
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
			mes "^3355FFA entrada secreta agora est� selada^000000.";
			close;
		} else {
			mes "^3355FFConforme voc� se aproxima da sepultura, ela come�a a emitir flashes de luz^000000.";
			next;
			switch (select("Usar o ^0000FFCart�o de Acesso Exuberante^000000","Ignorar")) {
				case 1:
				mes "^3355FFVoc� usa o Cart�o de Acesso Exuberante para abrir a passagem^000000.";
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
		mes "Isso � uma propriedade particular, ent�o por favor n�o entre nessa �rea a n�o ser que seja autorizado.";
		close;
	} else if (KielHyreQuest == 12) {
		mes "[Guarda da Cabana]";
		mes "Isso � uma propriedade particular, ent�o por favor n�o entre nessa �rea a n�o ser que seja autorizado.";
		next;
		switch (select("Tenho hor�rio marcado com Kiel Hyre","Certo")) {
			case 1:
			mes "[Guarda da Cabana]";
			mes "Voc� tem um hor�rio marcado com o Senhor Kiel Hyre?";
			mes "Um, tem certeza?";
			next;
			switch (select("Sim","N�o")) {
				case 1:
				mes "[Guarda da Cabana]";
				mes "Deve haver algum tipo de engano.";
				mes "Senhor Hyre n�o sairia se ele supostamente tivesse de ter um hor�rio marcado...";
				KielHyreQuest = 14;
				close;
				case 2:
				mes "[Guarda da Cabana]";
				mes "Bem, a n�o ser que voc� tenha um hor�rio marcado, n�o acho que voc� poder� encontrar-se com Senhor Hyre.";
				close;
			}
			case 2:
			mes "[Guarda da Cabana]";
			mes "At� Mais.";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_fild02,75,218,0	script	Porta#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 16) {
		mes "^3355FFEssa porta est� trancada^000000.";
		mes "E algu�m por dentro n�o abrir para voc� ent�o voc� precisar� da chave certa para destranc�-la^000000.";
		close;
	}
	if (KielHyreQuest == 16) {
		mes "^3355FFEssa porta est� trancada^000000.";
		mes "Se algu�m por dentro n�o abrir para voc� ent�o voc� precisar� da chave certa para destranc�-la^000000.";
		next;
		switch (select("Destrancar","Cancelar")) {
			case 1:
			mes "^3355FFVoc� destrancou a porta com a chave que Elly lhe deu.";
			mes "Assim que voc� a abre, um bilhete dobrado cai do topo da porta.";
			mes "As seguintes palavras est�o escritas nessa nota rudimentar^000000.";
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
		mes "^3355FFA porta est� aberta^000000.";
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
		mes "^3355FFEssa porta est� trancada.";
		mes "Se algu�m por dentro n�o abrir para voc� ent�o voc� precisar� da chave certa para destranc�-la^000000.";
		close;
	} else if (KielHyreQuest == 16) {
		mes "^3355FFEssa porta est� trancada^000000.";
		mes "Se algu�m por dentro n�o abrir para voc� ent�o voc� precisar� da chave certa para destranc�-la^000000.";
		next;
		switch (select("Abrir","Cancelar")) {
			case 1:
			mes "^3355FFVoc� n�o tem a chave que pode destrancar esta porta^000000.";
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
		mes "^3355FF� s� uma parede.";
		mes "N�o est� particularmente atrapalhando seu caminho^000000.";
		close;
	} else if (KielHyreQuest >= 28) {
		mes "^3355FFA parede est� agora aberta, revelando um caminho secreto^000000.";
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
		mes "^3355FFEssa estante est� estufada com tantos ivros largos e de capa dura^000000.";
		close;
	} else if (KielHyreQuest == 26) {
		if (rand(1,10) == 8) {
			mes "^3355FFSem pensar, voc� apanha um livro da estante.";
			mes "Assim que voc� o puxa, a parede desliza abrindo-se revelando um caminho secreto^000000.";
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
			mes "Voc� est� carregando muitos itens e est� incapaz de aceitar mais algum.";
			mes "Por favor libere algum espa�o no seu invent�rio antes de retornar^000000.";
			close;
		} else {
			mes "^3355FFvoc� encontrou uma carta no ch�o.";
			mes "Naturalmente voc� a pegou, apesar do fato de que ela n�o est� endere�ada � voc�^000000.";
			getitem(Kyll_Hire_Letter,1);
			KielHyreQuest = 20;
			close;
		}
	} else {
		mes "^3355FFVoc� entrou no quarto^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,16,175,0	script	Caixa#kh	HIDDEN_NPC,{
	mes "^FFFFFF##^000000*Saboroso-Nutricional-Delicioso*";
	mes "*M�quina de venda de ra��o para Bichinhos*";
	mes "A melhor comida para o seu Bichinho de estima��o que � superior � ra��o para bichinho que voc� pode comprar no mercado!";
	mes " ";
	mes "Pre�o: 1,100 zeny (barato!)";
	next;
	switch (select("Comprar!","Cancelar")) {
		case 1:
		if (Zeny < 1100) {
			mes "^3355FF1,100 zeny parecer ser meio caro para ra��o de bichinho.";
			mes "Mas se � melhor que a coisa normal, pode valer a tentativa.";
			mes "Voc� n�o tem zeny suficiente^000000.";
			close;
		} else {
			mes "^3355FFOh n�o...!";
			mes "N�o tem nada de especial nisso por fim!";
			mes "� s� uma Fra��o normal!^000000";
			Zeny -= 1100;
			getitem(Pet_Food,1);
			close;
		}
		case 2:
		mes "^3355FFEssa m�quina de vender parece realmente duvidosa e suspeita por alguma raz�o^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,30,184,0	script	Caixa de Ma��#kh	HIDDEN_NPC,{
	mes "^3355FFVoc� encontra uma caixa com algumas ma��s^000000";
	mes "^3355FFripe, delicious apples^000000.";
	next;
	switch (select("Pegar a Caixa","Cancelar")) {
		case 1:
		mes "^3355FFN�o...!";
		mes "Espere!";
		mes "Algo est� errado!";
		mes "O que quer que fa�a, n�o pegue essa caixa!^000000";
		next;
		mes "^3355FFE assim, sua voz interior.";
		mes "Sua sombra Jungiana lhe previne, de pegar aquela caixa^000000.";
		close;
		case 2:
		mes "^3355FFAlgo est� errado com essa caixa de ma��s^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,44,126,0	script	Mapa#khp	HIDDEN_NPC,{
	if ((KHCottagePoem1 < 2) && (KielHyreQuest < 30)) {
		mes "^3355FFUm magn�fico mapa mundial, detalhando o reino de Rune Midgard, Rep�blica Schwaltzvalt.";
		mes "Assim como um outro pais ao oeste, cujo nome n�o � familiar para voc�, est� colado na parede^000000.";
		next;
		mes "^3355FFAssim que voc� examina o mapa mundial mais de perto, voc� descobre que algo foi escondido debaixo dele^000000.";
		switch (select("Ignorar","Examinar")) {
			case 1:
			mes "^3355FFO que quer que possa estar^000000";
			mes "^3355FFescondido debaixo desse^000000";
			mes "^3355FFmapa provavelmente n�o �^000000";
			mes "^3355FFimportante o suficiente para^000000";
			mes "^3355FFvoc� investigar^000000.";
			close;
			case 2:
			mes "^3355FFInfelizmente, voc� n�o pode ver o que est� sob o mapa j� que est� colado na parede.";
			mes "Voc� precisar� encontrar alguma forma de soltar a cola sem danificar o mapa^000000.";
			KHCottagePoem1 = 1;
			close;
		}
	} else if ((KHCottagePoem1 == 2) && (KielHyreQuest < 30)) {
		mes "^3355FFVoc� leva o pote de um l�quido fumegante pr�ximo do mapa do mundo^000000.";
		mes "Assim que a cola na parede amolece, o mapa lentamente come�a a se soltar^000000.";
		next;
		mes "^3355FFO mapa solto revelou um peda�o de papel dobrado oculto sob ele.";
		mes "Voc� pega o papel, e alisa o mapa para col�-lo na parede novamente.";
		mes "Uma mensagen est� escrita no peda�o de papel^000000.";
		next;
		mes "^808080Ela morrer� em um lugar t�o frio quanto os polos.";
		mes "Quando o po�o est� seco e o ch�o est� rachado, o caminho para o cora��o dela.";
		mes "Um cora��o t�o transparente quanto cristal, se abrir�^000000.";
		next;
		mes "^808080Terei de lutar com quatro serpentes com quatro espadas para encontr�-la.";
		mes "A primeira espada � o amor.";
		mes "A segunda espada � o desespero.";
		mes "A terceira espada � a f�ria.";
		mes "A quarta espada � a esperan�a.";
		mes "De encontr�-la, de salv�-la^000000.";
		next;
		mes "^3355FF..............";
		mes "O significado profundo desse poema, � que mesmo a exist�ncia, lhe engana^000000.";
		KHCottagePoem1 = 3;
		close;
	} else if ((KHCottagePoem1 > 2) || (KielHyreQuest >= 30)) {
		mes "^3355FFAqui � onde voc� encontrou o papel no qual o poema estava escrito.";
		mes "Talvez seja uma boa id�ia refrescar sua mem�ria e ler aquele poema novamente^000000.";
		next;
		switch (select("Ler","Cancelar")) {
			case 1:
			mes "^808080Ela morrer� em um lugar t�o frio quanto os p�los.";
			mes "Quando o po�o est� seco e o ch�o est� rachado, o caminho para o cora��o dela.";
			mes "Um cora��o t�o transparente quanto cristal, se abrir�^000000.";
			next;
			mes "^808080Terei de lutar com quatro serpentes com quatro espadas para encontr�-la.";
			mes "A primeira espada � o amor.";
			mes "A segunda espada � o desespero.";
			mes "A terceira espada � a f�ria.";
			mes "A quarta espada � a esperan�a.";
			mes "De encontr�-la, de salv�-la^000000.";
			next;
			mes "^3355FF................";
			mes "O significado profundo desse poema, � que mesmo a exist�ncia, lhe engana^000000.";
			close;
			case 2:
			mes "^3355FFN�o h� necessidade para voc� reler esse poema.";
			mes "Voc� � um grande g�nio^000000!";
			close;
		}
	}
}

// ------------------------------------------------------------------
kh_vila,33,184,0	script	Pote#kh	HIDDEN_NPC,{
	if (!KHCottagePoem1) {
		mes "^3355FFVoc� encontrou um pote cheio de liquido fervente esfuma�ante^000000.";
		close;
	} else if (KHCottagePoem1 == 1) {
		mes "^3355FFVoc� encontrou um pote cheio de liquido fervente esfuma�ante.";
		mes "Vapor...";
		mes "Que voc� poderia usar para soltar a cola no mapa...";
		mes "Voc� � um g�nio!^000000";
		next;
		switch (select("Tentar","Aquilo? Aquilo n�o funciona!")) {
			case 1:
			mes "^3355FFVoc� pegou o pote fervente, mas queimou levemente suas m�os acidentalmente^000000.";
			KHCottagePoem1 = 2;
			close;
			case 2:
			mes "^3355FFN�o, n�o...";
			mes "Melhor tentarmos outra coisa^000000.";
			close;
		}
	} else {
		mes "^3355FFAqui � onde voc� pegou o pote cheio de l�quido fervente^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,14,55,0	script	Caba�a#khp	HIDDEN_NPC,{
	if ((!countitem(Old_Copper_Key) < 1) && (countitem(Green_Key_Card) < 1) && (countitem(Iron_Box) < 1) && (KielHyreQuest < 38)) {
		if (!checkweight(Old_Copper_Key,1)) {
			mes "^3355FFAquilo � uma bela caba�a.";
			mes "Voc� pode at� achar algo nela...";
			mes "Mas antes � melhor se livrar de todo seu peso extra.";
			mes "E por peso, quero dizer itens^000000.";
			close;
		}
		mes "^3355FFParece ser uma caba�a muito cara.";
		mes "Em palavras menos enfeitadas, uma ab�bora.'";
		mes "O que voc� vai fazer^000000?";
		next;
		switch (select("Quebrar a caba�a","Olhar dentro da caba�a","Ignorar")) {
			case 1:
			mes "^3355FFVoc� n�o pode quebrar abra aquela caba�a...";
			mes "Voc� � um her�i, n�o um v�ndalo.";
			mes "Agora se esse ato de vandalismo puder ser considerado um ato de heroismo, ent�o tudo bem^000000.";
			close;
			case 2:
			mes "^3355FFVoc� gentilmente coloca sua m�o dentro caba�a, e gentilmente tateia com seus dedos.";
			mes "At� que voc� recuperar uma Velha Chave de Bronze^000000.";
			getitem(Old_Copper_Key,1);
			close;
			case 3:
			mes "^3355FFProvavelmente n�o h� nada dentro mesmo^000000.";
			close;
		}
	} else {
		mes "^3355FFEssa � aparentemente car�ssima caba�a de onde voc� obteve a Velha Chave de Bronze.";
		mes "� in�til para voc� agora^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,39,41,0	script	Piscina#kh	HIDDEN_NPC,{
	if ((KHCottagePoem1 < 3) && (KielHyreQuest < 30)) {
		mes "^3355FFVoc� encontrou uma piscina pomposa cheia com �gua fresca^000000.";
		close;
	} else if ((KHCottagePoem1 == 3) && (KielHyreQuest < 30)) {
		mes "^3355FFVoc� encontrou uma piscina pomposa cheia com �gua fresca junto com uma evidente est�tua de le�o com duas alavancas^000000.";
		next;
		switch (select("Puxar as alavancas","Cancelar")) {
			case 1:
			mes "^3355FFQual alavanca voc� gostaria de puxar primeiro^000000?";
			next;
			switch (select("Alavanca da Direita","Alavanca da Esquerda")) {
				case 1:
				mes "^3355FFVoc� puxou a alavanca da direita, fazendo com que a �gua jorrasse da boca do le�o^000000.";
				close;
				case 2:
				mes "^3355FFAssim que voc� puxa alavanca da esquerda, a �gua da piscina � drenada.";
				mes "Com a piscina vazia, voc� pode ver uma escada de musgo verde cobrindo o fundo da piscina^000000.";
				next;
				switch (select("Ignorar","Investigar")) {
					case 1:
					mes "^3355FFVoc� decide que � um pouco mais que um buraco sem �gua alguma para ench�-la^000000.";
					close;
					case 2:
					mes "^3355FFAssim que voc� olha atrav�s do musgo molhado no fundo da piscina, voc� esbarra em um pequeno bot�o peculiar^000000.";
					next;
					switch (select("Pressionar o Bot�o","N�o Pressionar o Bot�o")) {
						case 1:
						mes "^3355FFVoc� pressionou o bot�o o que parece acionar um som estranho vindo das escadas no corredor^000000.";
						KHCottagePoem1 = 4;
						close;
						case 2:
						mes "^3355FF� melhor voc� n�o apertar esse bot�o.";
						mes "Seus inimigos deve estar cudadosamente escondidos para lhe encontrar.";
						mes "Deve ser algum tipo de armadilha mal�fica^000000.";
						close;
					}
				}
			}
			case 2:
			mes "^3355FFVoc� decidiu n�o puxar as alavancas^000000.";
			close;
		}
	} else if ((KHCottagePoem1 > 3) || (KielHyreQuest >= 30)) {
		mes "^3355FFAqui � onde voc� pressionou o pequeno bot�o causando um estranho barulho que veio das escadas pr�ximas do corredor^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,181,178,4	script	C�o Bravo#kh	4_DOG01,7,3,{
	OnTouch:
	mes "*Grrr*";
	next;
	mes "^3355FFUm cachorro aparentemente extremamente bravo est� olhando para voc�.";
	mes "Ser� que voc� consegue passar por essa criatura sem se machucar^000000?";
	next;
	switch (select("Seguir em Frente","Fugir")) {
		case 1:
		if (countitem(Pet_Food)) {
			mes "^3355FFEspere!";
			mes "Talvez voc� possa usar comida para acalmar a besta selvagem!";
			mes "Por qu� voc� n�o o alimenta com um pouco da sua ra��o de bichinho e v� o que acontece^000000?";
			next;
			switch (select("Dar ra��o de bichinho","N�o vai funcionar!")) {
				case 1:
				mes "^3355FFVoc� cuidadosamente arremessa a ra��o de bichinho para o cachorro.";
				mes "Sua cauda balan�a violentamente enquanto ele devora a comida.";
				mes "Melhor passar por esse cachoro agora enquanto voc� tem chance^000000!";
				delitem(Pet_Food,1);
				close2;
				warp("kh_vila",173,182);
				end;
				case 2:
				break;
			}
		}
		mes "^3355FFVoc� se aproxima lentamente do cachorro, mas ele n�o para de rosnar pr� voc�.";
		mes "Voc� tenta passar correndo pelo cachorro, mas ele bloqueia todos seus movimentos.";
		mes "O que fazer^000000?";
		next;
		mes "[C�o Bravo]";
		mes "BOW WOW!";
		mes "BOW WOW!";
		mes "BOW WOW WOW!";
		next;
		mes "^3355FFO cachorro lhe persegue escada abaixo, qu�o ing�nuo voc� �^000000!";
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
		mes "^3355FFH� algo dentro dessa gaveta, mas voc� n�o pode pegar j� que est� carregando muitos �tens com voc�.";
		mes "Talvez voc� deva visitar o seu confi�vel armazem da Kafra antes^000000.";
		close;
	} else if ((countitem(Yellow_Key_Card) < 1) && (KielHyreQuest <= 36)) {
		mes "^3355FFVoc� encontrou uma velha gaveta que estava fechada.";
		mes "Se voc� a abrir, ent�o voc� pode encontrar alguma coisa dentro.";
		mes "Ou pode estar vazia.";
		mes "Quem sabe^000000?";
		next;
		switch (select("Abrir a gaveta","Ignorar")) {
			case 1:
			mes "^3355FFVoc� obteve o Cart�o de Acesso Amarelo de dentro da gaveta.";
			mes "Abrir aquela gaveta tornou-se �til^000000.";
			getitem(Yellow_Key_Card,1);
			close;
			case 2:
			mes "^3355FFEsquece de abrir aquela gaveta.";
			mes "Digo, poxa, que sentido teria^000000?";
			close;
		}
	} else {
		mes "^3355FFAqui � onde voc� encontrou o Cart�o De Acesso Amarelo.";
		mes "Esta gaveta est� vazia agora^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,107,126,0	script	Caixa#kh2	HIDDEN_NPC,{
	if ((countitem(Old_Copper_Key) < 1) && (countitem(Green_Key_Card) < 1) && (countitem(Iron_Box) < 1) && (KielHyreQuest < 38)) {
		mes "^3355FFUma caixa s�lida est� jogada no ch�o onde se encontra uma pequena caixa trancada que foi colocada dentro^000000.";
		close;
	} else if ((countitem(Old_Copper_Key) >= 1) && (countitem(Green_Key_Card) < 1) && (countitem(Iron_Box) < 1) && (KielHyreQuest < 38)) {
		mes "^3355FFUma caixa s�lida est� jogada no ch�o onde se encontra uma pequena caixa trancada que foi colocada dentro.";
		mes "Talvez voc� possa usar sua Velha Chave de Bronze para destranc�-la^000000.";
		next;
		switch (select("Usar a Velha Chave de Bronze","N�o, nunca vai funcionar.")) {
			case 1:
			mes "^3355FFSeu palpite valeu a pena!";
			mes "A velha chave de bronze realmente destrancou aquela caixa!";
			mes "Voc� abre a caixa interior e obtem o Cart�o de Acesso Verde que estava trancado dentro^000000.";
			getitem(Green_Key_Card,1);
			delitem(Old_Copper_Key,1);
			close;
			case 2:
			mes "^3355FFO qu�? Usando uma chave n�o destrancar uma fechadura?";
			mes "Isso � totalmente loucura^000000.";
			close;
		}
	} else {
		mes "^3355FFEssa � a caixa de onde voc� obteve o Cart�o de Acesso Verde^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,181,138,0	script	Estante#kh	HIDDEN_NPC,{
	if ((countitem(Iron_Box) < 1) && (countitem(Old_Copper_Key) >= 1) || (countitem(Green_Key_Card) >= 1)) {
		mes "^3355FFUm dos livros nessa estante estufada est� intitulado com o bilhete, para Elly.";
		mes "Deve ter sido deixado pr� tr�s pelo av� dela^000000.";
		next;
		switch (select("Examinar o Livro","Ignorar")) {
			case 1:
			mes "^3355FFVoc� espia pelas p�ginas do livro e n�o encontra nada particularmente interessante.";
			mes "No entanto, voc� percebe uma superf�cie de a�o atr�s da estante quando voc� devolve o livro^000000.";
			next;
			switch (select("Examinar a superf�cie de A�o","Ignorar")) {
				case 1:
				mes "^3355FFVoc� remove mais dos livros da estante.";
				mes "Revelando que a superf�cie de a�o � parte de um cofre escondido atr�s da estante.";
				mes "H� duas fechaduras no cofre de a�o^000000.";
				next;
				switch (select("Tentar todas suas chaves","Cancelar")) {
					case 1:
					mes "^3355FFQual chave voc� ir� inserir na primeira fechadura^000000?";
					next;
					if (countitem(Old_Copper_Key) >= 1) {
						select("Velha Chave de Bronze","Chave da Cabana");
						mes "^3355FFQual chave voc� ir� inserir na segunda fechadura^000000?";
						next;
						select("Velha Chave de Bronze","Chave da Cabana");
					} else if (countitem(Green_Key_Card)) {
						switch (select("Cart�o de Acesso Verde","Chave da Cabana")) {
							case 1:
							.@KHFirstKeyhole = 1;
							break;
							case 2:
							.@KHFirstKeyhole = 2;
							break;
						}
						mes "^3355FFQual chave voc� ir� inserir na segunda fechadura^000000?";;
						next;
						switch (select("Cart�o de Acesso Verde","Chave da Cabana")) {
							case 1:
							.@KHSecondKeyhole = 1;
							break;
							case 2:
							.@KHSecondKeyhole = 2;
							break;
						}
						if (.@KHFirstKeyhole == 2) && (.@KHSecondKeyhole == 1) {
							mes "^3355FFO cofre abre com um estalido e voc� v� uma Caixa Cinza dentro^000000.";
							mes "^3355FFVoc� leva a Caixa Cinza com voc�, esperando que se torne �til mais tarde^000000.";
							delitem(Villa_Spare_Key,1);
							delitem(Green_Key_Card,1);
							getitem(Iron_Box,1);
							close;
						}
					}
					mes "^3355FFO cofre n�o abre^000000.";
					close;
					case 2:
					mes "^3355FFProvavelmente � uma id�ia melhor investigar a cabana por chaves que possam abrir esse cofre^000000.";
					close;
				}
				case 2:
				mes "^3355FFVoc� colocou os livros de volta na estante^000000.";
				close;
			}
			case 2:
			mes "^3355FFvoc� pode provavelmente encontrar melhores pistas em algum outro lugar por aqui^000000.";
			close;
		}
	} else {
		mes "^3355FFvoc� encontrou uma estante que est� estufada com livros^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,118,144,0	script	Mesa#kh	HIDDEN_NPC,{
	if (!KHCottagePoem2) {
		mes "^3355FFH� pilhas de papel e livros amontoados sobre a mesa cobrindo assuntos como poder artificial.";
		mes "Pesquisa do s�bio Varmundt, robotiza��o da f�brica, e pergaminhos m�gicos^000000.";
		next;
		mes "^3355FFEnquanto explorando no meio dos livros e pap�is, voc� encontra um peda�o de papel com o selo oficial da Funda��o Kiel Hyre.";
		mes "Voc� decide que pode ser �til algum dia^000000.";
		next;
		mes "^3355FFVoc� obteve um peda�o em branco de papel com o selo da Funda��o de Kiel Hyre^000000.";
		KHCottagePoem2 = 1;
		close;
	} else {
		mes "^3355FFH� v�rias pilhas de papel e livros, cobrindo v�rios assuntos cient�ficos e m�gica, empilhados sobre essa mesa^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,123,170,0	script	Ba� de Po��es#kh	HIDDEN_NPC,{
	if ((KHCottagePoem2 < 1) && (KielHyreQuest < 30)) {
		mes "^3355FFEssa cabine m�dica est� cheia de garrafas de v�rias cores.";
		mes "Que tipo de po��es pode ser encontrado aqui^000000?";
		close;
	} else if ((KHCottagePoem2 == 1) && (KielHyreQuest < 30)) {
		mes "^3355FFEssa cabine m�dica est� cheia de garrafas de v�rias cores.";
		mes "Que tipo de po��es pode ser encontrado aqui^000000?";
		next;
		mes "^3355FFEspere, voc� tem um peda�o de papel em branco com o selo da funda��o de Kiel Hyre!";
		mes "� estranho que o selo foi colocado num peda�o de papel em branco.";
		mes "Talvez algo foi escrito nele com tinta especial^000000?";
		next;
		mes "^3355FF� um palpite doido, mas talvez, s� talvez...";
		mes "Voc� possa usar algo de dentro dessa cabine m�dica que possa revelar alguma tinta invis�vel escrita nesse documento^000000!";
		next;
		switch (select("O qu�? Isso � loucura!","Claro! Vamos tentar!")) {
			case 1:
			mes "^3355FFDesculpe.";
			mes "Pensei que fosse uma boa id�ia^000000.";
			close;
			case 2:
			switch (select("Tentar L�quido Vermelho","Tentar L�quido Azul","Tentar L�quido Amarelo","Tentar L�quido Verde","Cancelar")) {
				case 1:
				.@KHPotionColor$ = "Vermelho";
				break;
				case 2:
				mes "^3355FFFunciona!";
				mes "O l�quido azul est� revelando um pequeno texto escrito no papel.";
				mes "Parece algum tipo de poema longo^000000.";
				next;
				mes "[Poema]";
				mes "A primeira serpente � feita de a�o, mas eu usei minha f�ria para destru�-la.";
				mes "A segunda serpente � feita de m�gica, mas meu amor perfurou seu cora��o.";
				next;
				mes "[Poema]";
				mes "A terceira serpente � carne e sangue, mas minha esperan�a a derrotou no final.";
				mes "Ainda assim, a quarta e derradeira serpente � sem forma, e ningu�m sabe sua apar�ncia.";
				next;
				mes "[Poema]";
				mes "Eu joguei meu desespero para o ar, mas ningu�m sabe se isso matou a serpente.";
				mes "Eu meramente um ^3355FFpequeno dem�nio perdido^000000 com quatro espadas e quatro serpentes.";
				mes "Em busca daquela garota nas trevas.";
				next;
				mes "^3355FFEsse � um poema muito estranho.";
				mes "O qu� poderia possivelmente significar^000000?";
				KHCottagePoem2 = 2;
				close;
				case 3:
				.@KHPotionColor$ = "Amarelo";
				break;
				case 4:
				.@KHPotionColor$ = "Verde";
				break;
				case 5:
				mes "^3355FFEsquece, essa id�ia parece muito doida pr� funcionar.";
				mes "Voc� acredita nessa asneira^000000?";
				close;
			}
			mes "^3355FFVoc� tentou borrifar o l�quido "+@KHPotionColor$+" do cabinete m�dico no papel em branco com o selo da Funda��o Kiel Hyre.";
			mes "Mesmo assim, nada aconteceu^000000.";
			close;
		}
	} else {
		mes "^3355FFAqui � onde voc� derramou algum l�quido azul para ler um poema escrito com tinta invis�vel num peda�o de papel em branco com o selo da Funda��o Kiel Hyre.";
		mes "Voc� gostaria de l�-lo^000000?";
		next;
		switch (select("Sem Tempo!","Ler")) {
			case 1:
			mes "^3355FFSeu tempo est� acabando!";
			mes "Por enquanto seria melhor voc� procurar cada canto da cabana^000000.";
			close;
			case 2:
			mes "[Poema]";
			mes "A primeira serpente � feita de a�o, mas eu usei minha f�ria para destru�-la.";
			mes "A segunda serpente � feita de m�gica, mas meu amor perfurou seu cora��o.";
			next;
			mes "[Poema]";
			mes "A terceira serpente � carne e sangue, mas minha esperan�a a derrotou no final.";
			mes "Ainda assim, a quarta e derradeira serpente � sem forma, e ningu�m sabe sua apar�ncia.";
			next;
			mes "[Poema]";
			mes "Eu joguei meu desespero para o ar, mas ningu�m sabe se isso matou a serpente.";
			mes "Eu meramente um ^3355FFpequeno dem�nio perdido^000000 com quatro espadas e quatro serpentes, em busca daquela garota nas trevas.";
			close;
		}
	}
}

// ------------------------------------------------------------------
kh_vila,136,68,0	script	Punho da Espada#kh	HIDDEN_NPC,{
	if ((KHCottagePoem1 < 3) || (KHCottagePoem2 < 2) && (KielHyreQuest < 30)) {
		mes "^3355FFH� quatro bem elaboradas espadas posicionads pr�ximas � quatro assustadoras esculturas de serpentes^000000.";
		close;
	} else if ((KHCottagePoem1 <= 4) || (KHCottagePoem2 <= 2) && (KielHyreQuest < 30)) {
		mes "^3355FFH� quatro bem elaboradas espadas posicionadas pr�ximas � quatro assustadoras esculturas de serpentes.";
		mes "Espere, talvez estejam relacionadas ao poema que voc� leu antes^000000!";
		next;
		switch (select("Nada haver!","Claro!")) {
			case 1:
			mes "^3355FFImposs�vel.";
			mes "Deve ser algum tipo de coincid�ncia^000000.";
			close;
			case 2:
			mes "^3355FFClaro! E veja!";
			mes "H� um buraco no topo da cabe�a de cada escultura de serpente.";
			mes "Esses buracos parecem bastante grandes para inserir cada uma das espadas ornamentais pr�ximas^000000.";
			next;
			switch (select("Ignorar","Inserir Espadas Ornamentais")) {
				case 1:
				mes "^3355FFImposs�vel.";
				mes "Deve ser algum tipo de coincid�ncia^000000.";
				close;
				case 2:
				if (KHCottagePoem1 != 4) {
					mes "^3355FFN�o pode...";
					mes "Puxar a espada!";
					mes "Deve estar presa no lugar de alguma forma ou selada por alguma for�a estranha^000000!";
					close;
				} else {
					mes "^3355FFVoc� provavelmente deveria tentar inserir cada espada na serpente correta^000000.";
					mes "Primeiro por favor selecione a serpente que voc� ir� inserir a primeira espada^000000.";
					next;
					switch (select("Primeira Serpente","Segunda Serpente","Terceira Serpente","Quarta Serpente")) {
						default:
						break;
						case 2:
						++.@KHSwords;
						break;
					}
					next;
					mes "^3355FFAgora, por favor escolha a serpente que voc� ir� inserir a segunda espada^000000.";
					next;
					switch (select("Primeira Serpente","Segunda Serpente","Terceira Serpente","Quarta Serpente")) {
						default:
						break;
						case 4:
						++.@KHSwords;
						break;
					}
					next;
					mes "^3355FFAgora, por favor selecione a serpente que voc� ir� inserir a terceira espada^000000.";
					next;
					switch (select("Primeira Serpente","Segunda Serpente","Terceira Serpente","Quarta Serpente")) {
						case 1:
						++.@KHSwords;
						break;
						default:
						break;
					}
					next;
					mes "^3355FFFinalmente, por favor selecione a serpente na qual voc� ir� inserir a quarta espada^000000.";
					next;
					switch (select("Primeira Serpente","Segunda Serpente","Terceira Serpente","Quarta Serpente")) {
						default:
						break;
						case 3:
						++.@KHSwords;
						break;
					}
					if (.@KHSwords == 4) {
						mes "^3355FFSeus ouvidos s�o repentinamente preenchidos com um baixo zumbido e sua mente e corpo parecem que est�o sendo levados^000000.";
						KHCottagePoem1 = 5;
						KHCottagePoem2 = 3;
						close2;
						warp("kh_vila",178,72);
						end;
					} else {
						mes "^3355FFNada aconteceu.";
						mes "Voc� provavelmente n�o inseriu as espadas nas serpentes corretas.";
						mes "Por enquanto, voc� deveria retornar as espadas, e ent�o tentar novamente mais tarde^000000.";
						close;
					}
				}
			}
		}
	} else if ((KHCottagePoem1 == 5) && (KHCottagePoem2 == 3) || (KielHyreQuest >= 30)) {
		mes "^3355FFAqui tem um caminho oculto que leva � um laborat�rio secreto^000000.";
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
		mes "^3355FF� estranho olhar, o homem velho seco preso dentro deste tubo de teste^000000.";
		close;
	} else if (KielHyreQuest == 28) {
		mes "^3355FFUma estranha, s�bia senhora est� presa nesse tubo de testes.";
		mes "H� um pequeno bot�o vermelho bem embaixo no tubo de testes^000000.";
		next;
		switch (select("Pressionar o Bot�o","Investigar Mais")) {
			case 1:
			mes "[???]";
			mes "O-Ol�...?";
			mes "V-Voc� pode me ouvir?";
			mes "Eu n�o lhe reconhe�o...";
			mes "Mas... Talvez eu tenha esquecido?";
			mes "Espere, espere.";
			mes "Se voc� � meu amigo, ent�o voc� sabe do que me chamar, certo?";
			mes "Voc� sabe o que eu sou?";
			next;
			input(.@KHInput$);
			if (.@KHInput$ == "Um pequeno dem�nio perdido") {
				mes "[???]";
				mes "Heh... Heh heh...";
				mes "Ele sabe... Hey, voc� tem de lembrar desses n�meros.";
				mes "N-n�o esque�a, eles ser�o importantes...";
				mes "^FF00004^000000, ^FF00007^000000, ^FF00002^000000, ^FF00009^000000, ^FF00006^000000, ^FF00001^000000. Isso � tudo...";
				next;
				mes "^3355FF4772961^000000";
				mes "O que poderiam esses n�meros possivelmente significar?";
				KHCottagePoem1 = 0;
				KHCottagePoem2 = 0;
				KielHyreQuest = 30;
				close;
			} else {
				mes "[???]";
				mes "N�o... N�o...";
				mes "Isso n�o est� certo.";
				mes "N�o acho que n�s �ramos amigos.";
				mes "N�o...";
				close;
			}
			case 2:
			mes "^3355FFVamos investigar essa �rea um pouquinho mais antes^000000.";
			close;
		}
	} else if (KielHyreQuest >= 30) {
		if ((countitem(Iron_Box) > 0) && (countitem(Yellow_Key_Card) > 0)){
			mes "^3355FFO que poderia o n�mero 4772961 significar?";
			mes "Por enquanto, voc� encontrou tudo que precisa desse lugar, ent�o voc� deve voltar para Elly^000000.";
			close;
		} else {
			mes "^3355FFO que poderia ser o n�mero 4772961?";
			mes "Por enquanto, � melhor procurar nesta casa de campo para quaisquer pistas que voc� possa encontrar^000000.";
			close;
		}
	} else {
		mes "^3355FF� estranho olhar, o homem velho seco preso dentro deste tubo de teste^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_vila,179,68,0	script	Tubo de Testes#kh2	HIDDEN_NPC,{
	mes "^3355FFEsse tubo de testes tem um jovem rapaz vestido um uniforme da Academia Kiel Hyre.";
	mes "De alguma forma, voc� tem a sensa��o que j� o viu antes em algum lugar^000000.";
	close;
}

// ------------------------------------------------------------------
kh_dun01,235,48,0	script	Porta Pesada#kh	HIDDEN_NPC,{
	if (KielHyreQuest < 38) {
		mes "^3355FFH� uma larga e pesada porta � sua frente^000000";
		next;
		switch (select("Abrir a Porta","Cancelar")) {
			case 1:
			input(.@KHInput$);
			mes "^3355FFVoc� tenta empurrar a porta para abrir com toda sua for�a, mas falha em faz�-la se mexer^000000.";
			close;
			case 2:
			mes "^3355FFVoc� decidiu deixar essa porta quieta, at� que descubra como conseguir� abr�-la^000000.";
			close;
		}
	} else if ((KielHyreQuest >= 38) && (KielHyreQuest < 46)) {
		mes "^3355FFH� uma larga e pesada porta � sua frente^000000.";
		next;
		switch (select("Abrir a Porta","Cancelar")) {
			case 1:
			input(.@KHInput$);
			if (.@KHInput$ == "Cart�o de Acesso Azul") {
				mes "^3355FFVoc� abri com sucesso a porta^000000.";
				close2;
				warp("kh_school",119,144);
				end;
			} else {
				mes "^3355FFVoc� tenta empurrar a porta para abrir com toda sua for�a, mas falha em faz�-la se mexer^000000.";
				close;
			}
			case 2:
			mes "^3355FFVoc� decidiu deixar essa porta quieta, at� que descubra como conseguir� abr�-la^000000.";
			close;
		}
	} else {
		mes "^3355FFH� uma larga e pesada porta � sua frente^000000";
		close;
	}
}

// ------------------------------------------------------------------
kh_dun01,76,233,0	script	Porta Pesada#kh2	HIDDEN_NPC,{
	if ((KielHyreQuest >= 38) && (KielHyreQuest < 46)) {
		mes "^3355FFTH� uma larga e pesada porta � sua frente^000000";
		next;
		switch (select("Abrir a Porta","Cancelar")) {
			case 1:
			mes "^3355FFVoc� tenta empurrar a porta para abrir com toda sua for�a, mas falha em faz�-la se mexer^000000.";
			close;
			case 2:
			mes "^3355FFVoc� decidiu deixar essa porta quieta, at� que descubra como conseguir� abr�-la^000000.";
			close;
		}
	} else {
		mes "^3355FFTH� uma larga e pesada porta � sua frente^000000";
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
		mes "Hm? N�o acho que eu lhe conhe�a.";
		mes "Kiel Hyre s� tem amigos de Elly autorizados, e confi�veis que podem estar ajudando ela.";
		mes "Para ser aceito nessa �rea.";
		next;
		mes "[Allysia]";
		mes "Eu n�o encontro ^FF0000Elly^000000";
		mes "Ela foi atacada tamb�m?";
		mes "Voc� � ^FF0000Amigo de Elly^000000?";
		next;
		mes "[Allysia]";
		mes "Eu n�o acho Elly em lugar algum por aqui.";
		mes "S� posso lhe deixar entrar se voc� puder se identificar como amigo de Elly.";
		mes "H� alguma coisa que voc� possa me apresentar como prova?";
		next;
		switch (select("Cart�o de Acesso Amarelo","Cart�o de Acesso Azul","Chave Dourada","Broche Luxuoso","...?")) {
			default:
			break;
			case 3:
			mes "Ah, essa n�o � a chave que Kiel Hyre deu a Elly?";
			mes "Sim, estou convencida que voc� a tem ajudado.";
			mes "Estive esperando por voc�, ent�o deixe-me lev�-lo ao meu quarto.";
			close2;
			cutin("",255);
			warp("kh_school",120,180);
			end;
			case 4:
			mes "[Allysia]";
			mes "A-Aquele � o inferno de Kiel!";
			mes "Ele lhe enviou aqui para me pegar?!";
			mes "Eu n�o estou me arriscando!";
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
		mes "Hm? Isso n�o prova que Elly realmente confia em voc�...";
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
		mes "Este local � particular.";
		mes "Saia imediatamente!";
		close2;
		cutin("",255);
		warp("yuno_fild08",73,172);
		end;
	} else if (KielHyreQuest <= 38) {
		if (!checkweight(Red_Key_Card,1)) {
			mes "^3355FF- Espere!!";
			mes "Voc� est� carregando muitos itens e n�o ser� capaz de aceitar mais.";
			mes "Por favor arrume algum espa�o no seu invent�rio antes de retornar^000000.";
			close;
		} else {
			mes "[Allysia]";
			mes "Amig"+(Sex == SEX_MALE ? "o":"a")+" do prot�tipo Elly, lhe dou as boas vindas.";
			mes "Como voc� deve ter percebido, preciso de sua ajuda.";
			mes "Kiel Hyre est� ajudando em algum lugar dentro dessa f�brica.";
			next;
			mes "[Allysia]";
			mes "� imperativo que voc� procure por Kiel Hyre e o resgate o mais r�pido que voc� possa!";
			next;
			switch (select("O que � essa f�brica?","O que aconteceu a^FF0000Kiel Hyre^000000?")) {
				case 1:
				mes "[Allysia]";
				mes "Essa f�brica � parte dos neg�cios secretos da Funda��o Kiel Hyre, onde rob�s human�ides s�o fabricados.";
				mes "Eu mesma, e todos os estudantes da academia somos na verdade rob�s, n�o humanos.";
				next;
				mes "[Allysia]";
				mes "O objetivo final da Funda��o Kiel Hyre � desenvolver rob�s superiores que ajudar�o a sociedade humana.";
				mes "Como rob�s, n�s podemos fazer tarefas que s�o muito perigosas ou dif�ceis para humanos.";
				break;
				case 2:
				mes "[Allysia]";
				mes "^3355FFKiehl^000000 estava para fazer modifica��es anormais aos rob�s human�ides.";
				mes "Isso foi reportado � Kiel Hyre, que foi parar Kiehl.";
				mes "No entanto, Hyre n�o retornou.";
				next;
				mes "[Allysia]";
				mes "Temendo que Kiehl pudesse me quebrar, Kiel Hyre trouxe uma c�pia de mim no lugar.";
				mes "Ainda posso detectar os batimentos card�acos de Kiel Hyre, ent�o ele deve estar bem.";
				mes "Mas seu pr�prio filho pode machuc�-lo breve.";
				next;
				mes "[Allysia]";
				mes "Pegue esse esse cart�o que vai lhe permitir entrar em �reas secretas dentro dessa f�brica.";
				mes "Se voc� encontrar Kiel Hyre, por favor me avise imediatamente.";
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
		mes "Ainda posso detectar os batimentos card�acos de Kiel Hyre.";
		mes "Mas seu filho Kiehl pode fazer algo desesperado contra ele logo.";
		mes "Por favor, localize Kiel Hyre antes que isso aconte�a!";
		close2;
		cutin("",255);
		warp("kh_dun01",22,216);
		end;
	} else if (KielHyreQuest == 42) {
		mes "[Allysia]";
		mes "Voc� j�";
		mes "localizou Kiel Hyre?";
		next;
		mes "^3355FFVoc� conta a Allysia onde Kiel Hyre estava trancado e lhe entrega o fragmento de metal que Kiel Hyre lhe deu.";
		mes "Ela pega o fragmento e coloca no pulso dela^000000.";
		next;
		mes "[Allysia]";
		mes "...C�digo secreto de Kiel Hyre confirmado.";
		mes "�rea B_2_3.";
		mes "Sinais vitais est�o normais.";
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
		mes "Certo, Tenho uma miss�o � cumprir para Kiel Hyre, e n�o tenho muito tempo.";
		mes "Deixe-me lhe dar algumas instru��es espec�ficas rapidamente.";
		next;
		mes "[Allysia]";
		mes "Primeiramente, preciso pegar seus cart�es por raz�es de seguran�a.";
		mes "Segundamente, me encontre na mans�o de Kiel Hyre em Lighthalzen.";
		mes "Mostre a Chave Dourada para ser admitido nas �reas.";
		delitem(Yellow_Key_Card,1);
		delitem(Blue_Key_Card,1);
		delitem(Red_Key_Card,1);
		KielHyreQuest = 46;
		next;
		mes "[Allysia]";
		mes "Eu entendo que isso � repentino, e n�o estou lhe dando uma explica��o direta.";
		mes "Mas algo horr�vel vai acontecer se eu n�o me apressar o mais r�pido poss�vel.";
		close2;
		warp("yuno_fild08",73,172);
		cutin("",255);
		end;
	} else {
		mes "[Allysia]";
		mes "Eu entendo que isso � repentino, e n�o estou lhe dando uma explica��o direta.";
		mes "Mas algo horr�vel vai acontecer se eu n�o me apressar o mais r�pido poss�vel.";
		close2;
		warp("yuno_fild08",73,172);
		end;
	}
}

// ------------------------------------------------------------------
kh_dun01,166,223,0	script	Dispositivo de Acesso#kh	HIDDEN_NPC,{
	if ((KielHyreQuest <= 38) || (KielHyreQuest >= 44)) {
		mes "^3355FFVoc� encontrou um dispositivo mec�nico.";
		mes "Parece que pode ser operado inserindo o cart�o correto no slot^000000.";
		close;
	} else if ((KielHyreQuest == 40) && (countitem(Red_Key_Card) >= 1)) {
		mes "^3355FFVoc� encontrou um dispositivo mec�nico.";
		mes "Parece que pode ser operado, inserindo o cart�o correto no slot^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cart�o de Acesso Vermelho") {
			mes "^3355FFA porta abre assim que voc� insere o Cart�o de Acesso Vermelho.^000000.";
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
kh_dun01,224,233,0	script	Pota da F�bica#kh	FAKE_NPC,5,5,{
	OnTouch:
	if (KielHyreQuest == 40) {
		if (!checkweight(Steel_Piece,1)) {
			mes "^3355FF- Wait!!";
			mes "Voc� est� carregando muitos �tens e n�o ser� capaz de aceitar mais.";
			mes "Por favor abra algum espa�o no seu inventario antes de retornar^000000.";
			close;
		}
		mes "^3355FFVoc� pode ouvir fracamente uma voz do outro lado dessa porta^000000.";
		next;
		mes "[????]";
		mes "...Kiehl...";
		mes "...Como se atreve...!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Senhor Kiel Hyre?";
		mes "� voc� a� dentro?";
		next;
		mes "[Kiel Hyre]";
		mes "Q-Quem est� a�?";
		mes "Identifique-se!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sou... Sou...";
		next;
		mes "^3355FFVoc� explica sua hist�ria para a voz atr�s da porta, e lhe diz o que aconteceu � Elly e Allysia^000000.";
		next;
		mes "[Kiel Hyre]";
		mes "...Sim... Sou eu.";
		mes "Sou Kiel Hyre, aprisionado aqui.";
		mes "Ele foi t�o longe como modificar Elly, eh?";
		mes "..................";
		next;
		mes "[Kiel Hyre]";
		mes "R�pido, leve esse m�dulo para Allysia!";
		mes "Ela saber� o que fazer com ele.";
		mes "Se voc� est� realmente nos ajudando, ent�o ela ter� algumas instru��es para voc� tamb�m.";
		next;
		mes "^3355FFKiel Hyre passa um estranho fragmento de metal pela fresta entre a porta e o ch�o^000000.";
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
		mes "^3355FFVoc� encontrou um dispositivo mec�nico.";
		mes "Parece que pode ser operado inserindo-se o cart�o correto no slot^000000.";
		close;
	} else {
		mes "^3355FFVoc� encontrou um dispositivo mec�nico.";
		mes "Parece que pode ser operado inserindo-se o cart�o correto no slot^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cart�o de Acesso Exuberante") {
			mes "^3355FFAssim que voc� insere o Cart�o de Acesso Exuberante no slot de cart�o.";
			mes "A porta se escancara revelando um longo lance de escadas para baixo^000000.";
			next;
			switch (select("Descer as Escadas","Cancelar")) {
				case 1:
				warp("kh_dun02",41,198);
				end;
				case 2:
				mes "^3355FFParece que essa porta se fechou automaticamente depois de um tempo limite pr� programado que passou^000000.";
				close;
			}
		} else {
			mes "^3355FFvoc� tenta empurrar a porta com toda a sua for�a, mas falha em faz�-la se mover^000000.";
			close;
		}
	}
}
kh_dun01,36,195,0	duplicate(Dispositivo de Acesso#kh3)	Dispositivo de Acesso#kh4	HIDDEN_NPC

// ------------------------------------------------------------------
kh_mansion,78,55,5	script	Mordomo#kh	4_M_MANAGER,{
	if (KielHyreQuest < 46) {
		mes "[Mordomo]";
		mes "Isso � uma resid�ncia privada, por favor saia.";
		close2;
		warp("lighthalzen",188,201);
		end;
	} else if ((KielHyreQuest >= 46) && (KielHyreQuest < 50)) {
		mes "[Mordomo]";
		mes "Sauda��es.";
		mes "Voc� foi convidado pelo mestre dessa mans�o?";
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
			mes "Se voc� n�o foi convidado pelo mestre dessa mans�o, ent�o eu temo que tenha de insistir em sua partida imediata!";
			close2;
			warp("lighthalzen",188,201);
			end;
		}
	} else if ((KielHyreQuest >= 50) && (KielHyreQuest < 64) || (KielHyreQuest >= 70)) {
		mes "[Mordomo]";
		mes "Ah, Mestre "+strcharinfo(CHAR_NAME)+".";
		mes "� um prazer em receber sua compania novamente.";
		mes "Voc� gostaria de ver meu mestre?";
		next;
		switch (select("Sim","N�o")) {
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
		mes "� um prazer em receber sua compania novamente.";
		mes "Voc� gostaria de ver meu mestre, ou...?";
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
			mes "Oh...? Voc� deve estar aqui para trazer boas novas.";
			mes "Com licen�a...";
			next;
			mes "^3355FFO Mordomo furtivamente olhou em volta pra checar se algu�m o estava observando^000000.";
			next;
			mes "[Mordomo]";
			mes "Acredito que seja seguro o bastante em deixar voc� v�-lo agora...";
			mes "Por favor, r�pido por aqui.";
			close2;
			warp("kh_mansion",20,87);
			end;
		}
	}
}

// ------------------------------------------------------------------
kh_mansion,22,28,4	script	Kiel Hyre#kh	4_M_KHKYEL,{
	if (!checkweight(Spawn,200)) {
		mes "^3355FFS� um segundo...";
		mes "Voc� est� carregando muitos itens com voc� agora, ent�o voc� vai precisar liberar mais espa�o no seu inventario antes^000000.";
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
		mes "Ah, voc� deve ser "+strcharinfo(CHAR_NAME)+".";
		mes "Gostaria de lhe agradecer por salvar minha vida.";
		mes "Voc� deve ter muitas perguntas a me fazer, ent�o eu farei o melhor para lhe dar respostas.";
		next;
		while (true) {
			switch (select("Rob�s?","^3355FFKiehl^000000?","Broche de ^FF0000Elly^000000?")) {
				case 1:
				mes "[Kiel Hyre]";
				mes "Andei pesquisando rob�tica por trinta e dois anos agora.";
				mes "Tenho orgulho de dizer que tive sucesso onde o grande S�bio Varmundt n�o teve.";
				next;
				mes "[Kiel Hyre]";
				mes "Era meu sonho em desenvolver rob�s human�ides de humanos.";
				mes "Aqueles Guardi�es poderiam ser rob�s tamb�m, mas eles n�o operam usando vontade pr�pria.";
				next;
				mes "[Kiel Hyre]";
				mes "Se voc� quiser saber mais especificamente sobre rob�tica, por qu� voc� n�o fala com ^3355FFAllysia^000000?";
				mes "Ela pode explicar tudo muito mais suscintamente que eu.";
				mes "Eu tendo a errar...";
				++.@KHQRead;
				next;
				break;
				case 2:
				mes "[Kiel Hyre]";
				mes "^3355FFKiehl^000000 � meu �nico filho, mas o amor da minha vida morreu assim que deu � luz a ele.";
				mes "Eu admito que ele � um g�nio em design mec�nico e desenvolvimento.";
				next;
				mes "[Kiel Hyre]";
				mes "Ele � altamente respons�vel pela cria��o da terceira gera��o de rob�s como Elly.";
				mes "Infelizmente, ele est� tentando modificar suas cria��es para algum prop�sito sinistro.";
				next;
				mes "[Kiel Hyre]";
				mes "Eu tentei par�-lo, mas acabei ficando trancado dentro da f�brica.";
				mes "N�o sei porque ele quer fazer isso.";
				mes "Ainda n�o tenho absolutamente nenhuma pista...";
				++.@KHQRead;
				next;
				break;
				case 3:
				mes "[Kiel Hyre]";
				mes "Aquele broche que Elly estava segurando tem o ^3355FFemblema de Kiehl^000000 entalhado nele.";
				mes "Ah e aquele homem de preto amea�ando os estudantes?";
				mes "Aquele era provavelmente ^3355FFKaiser^000000, o guarda-costas de Kiehl.";
				next;
				mes "[Kiel Hyre]";
				mes "Kaiser...";
				mes "Eu n�o sei nada sobre ele.";
				mes "Nunca nem olhei seu rosto!";
				mes "Kiehl simplesmente o contratou sem que eu soubesse...";
				++.@KHQRead;
				next;
				break;
			}
			if (.@KHQRead == 3) {
				mes "[Kiel Hyre]";
				mes "Se voc� n�o tiver mais perguntas para mim, ent�o voc� por favor me deixe descansar?";
				mes "Ainda n�o estou me sentido bem do tempo que fiquei trancado na f�brica.";
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
		mes "Se voc� n�o tiver mais perguntas para mim, ent�o voc� por favor me deixe descansar?";
		mes "Ainda n�o estou me sentido bem do tempo que fique trancado na f�brica.";
	} else if (KielHyreQuest == 64) {
		cutin("kh_kyel01",2);
		mes "[Kiel Hyre]";
		mes "Hm? H� algo ";
		mes "que voc�";
		mes "gostaria de";
		mes "me perguntar?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu n�o tenho evid�ncias concretas suficientes ainda, mas eu devo ter algumas perguntas em breve.";
	} else if (KielHyreQuest == 68) {
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "Ah,"+strcharinfo(CHAR_NAME)+".";
		mes "� voc�.";
		mes "Ent�o como posso lhe ajudar hoje?";
		next;
		select("Sobre ^3355FFAllysia^000000...");
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sabe, eu estava olhando nessa casa deserta em Yuno.";
		mes "Descobri um velho porta retratos de uma mulher que se parece muito com Allysia.";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "Oh...";
		mes "Isso � tudo?";
		mes "Pensei que voc� tinha uma pergunta sobre rob�tica.";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "De qualquer forma, � uma estranha coincid�ncia.";
		mes "Bem, suporto que n�o � t�o estranho encontrar pessoas parecidas com outras...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu n�o acho que seja s� uma coincid�ncia.";
		mes "A mulher naquele pequeno retrato de trinta anos tamb�m era chamada Allysia";
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
		mes "Ent�o pensei que essa Allysia deve ter sido a mulher que voc� amou";
		mes "Que voc� baseou a apar�ncia dos seus rob�s nela.";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "............";
		next;
		cutin("kh_kyel01",2);
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Acho que foi isso que aconteceu.";
		mes "Quando voc� era um jovem, pobre voc� se apaixonou por Allysia.";
		mes "Entretanto, ela estava apaixonada por Rosimier, que era rico e poderoso.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Entretanto, Rosimier estava noivo de uma outra mulher";
		mes "Ele acabou por casar-se com sua noiva, assim partindo o cora��o de Allysia.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sentindo-se tra�da, seu cora��o partido, Allysia pulou em um rio.";
		mes "Ent�o voc� decidiu se vingar de Rosimier, ent�o acabou por se juntar com a Corpora��o Rekenber!";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "Hahahahahahaha!";
		mes "Oh, Que imagina��o";
		mes "Isso � muito rid�culo...";
		mes "Ainda assim, eu admito";
		mes "Talvez eu tenha feito o modelo Allysia depois de ver aquela mulher h� muito tempo.";
		next;
		mes "[Kiel Hyre]";
		mes "Eu quase esqueci dela!";
		mes "Acho que n�s eramos amigos...";
		mes "Ainda assim, de onde voc� teve a id�ia de que eu pudesse estar apaixonado por ela?";
		next;
		select("Revelar o retrato de Kiel da Cabana");
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "O-O qu�...";
		mes "Como...";
		mes "Onde voc�...?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Kiel Hyre, eu encontrei esse retrato seu quando jovem na casa do homem que comprou o anel de Allysia.";
		mes "Eu at� falei com o pescador que descobriu o corpo de Allysia.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Voc� pagou uma quantia absurda de dinheiro para comprar o anel de Allysia.";
		mes "Como voc� pode me dizer que voc� n�o a amava?";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "*Droga...*";
		mes "Voc� me pegou, voc� me pegou.";
		mes "Eu n�o queria que voc� descobrisse a verdade.";
		mes "Voc� est� certo.";
		mes "Eu amei Allysia, e desenvolvi meu rob� para se parecer com ela.";
		next;
		mes "[Kiel Hyre]";
		mes "Eu nunca poderia a esquecer.";
		mes "Nunca.";
		mes "Mas nunca faria nada para ferir o Rosimier!";
		mes "Sou um cientista!";
		mes "Eu o odiei quando eu era jovem, mas as coisas s�o diferentes agora!";
		next;
		mes "[Kiel Hyre]";
		mes "Eu n�o derramei l�grimas quando o Rosimier caiu, mas eu n�o fui o respons�vel.";
		mes "Al�m do mais eu n�o tinha os recursos ou a capacidade de causar...";
		next;
		cutin("kh_kyel02",2);
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Infelizmente acho que as evid�ncias mostram o contr�rio.";
		next;
		select("Mostrar o retrato de Rosimier");
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "D� uma boa olhada nesse retrato que encontrei na antiga casa de Rosimier.";
		mes "Percebe algo... Incriminador?";
		next;
		cutin("kh_Kyel03",2);
		mes "[Kiel Hyre]";
		mes "Com excess�o daquele James Rosimier, voc� quer dizer?";
		mes "N�o! N�o vejo nada errado com essa imagem ao todo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "D� uma boa olhada no rel�gio de bolso no retrato.";
		mes "Aquele � o rel�gio de bolso que voc� usa hoje, n�o �?";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "...!!!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Voc� pode n�o ter causado a queda de Rosimier por si s�.";
		mes "Mas com a ajuda da Corpora��o Rekenber eu diria que era inteiramente poss�vel!";
		next;
		cutin("kh_Kyel03",2); 
		mes "[Kiel Hyre]";
		mes "Eu n�o me arrependo do que fiz, eles mataram minha Allysia!";
		mes "Se James n�o a tivese tra�do, se ele n�o a tivesse feito cometer suic�dio...";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "A� � que voc� est� errado!";
		mes "Allysia foi assassinada, ela n�o cometeu suic�dio.";
		mes "D� uma boa olhada nesse bilhete aqui!";
		next;
		mes "[Kiel Hyre]";
		mes "O qu�?!";
		next;
		select("Mostrar o bilhete de James");
		mes "[Kiel Hyre]";
		mes "O que isso prova?";
		mes "Isso n�o mostra que James n�o traiu Allysia.";
		mes "Como isso muda tudo?";
		mes "Ela est� morta, nada que eu fa�a trar� ela de volta pr� mim!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Eu nunca disse que James n�o a traiu.";
		mes "Olhe na data no bilhete.";
		mes "James fez planos de fugir com ela em 20 de Agosto.";
		mes "Entretanto, o corpo dela foi encontrado no mesmo dia.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Portanto, Allysia deve ter morrido em 19 de Agosto.";
		mes "Se ela estava planejando em fugir com seu amor no dia seguinte.";
		mes "Ent�o ela n�o tinha raz�o para se matar!";
		next;
		mes "[Kiel Hyre]";
		mes "N�o, isso n�o est� certo!";
		mes "Ela provavelmente n�o podia confiar em mim.";
		mes "Ela deve ter percebido que ela n�o era nada al�m de um brinquedo para ele!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Ah sim?";
		mes "Digo que ela pulou no rio por que voc� encontrou-se com ela naquele dia.";
		mes "Agora, d� uma boa olhada nisso!";
		next;
		select("Mostrar o bilhete de K.H.");
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Esse bilhete foi escrito por um home com suas iniciais, K.H. essas iniciais estavam tamb�m escritas no retrato dela.";
		mes "Voc� deve ter escrito esse bilhete.";
		mes "H� muitas coincid�ncias!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "De acordo com esse bilhete, voc� disse a Allysia que voc� queria v�-la novamente no lugar onde se encontraram antes.";
		mes "Acho que voc� a viu novamente em 19 de Agosto, o dia que ela morreu!";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Estou presumindo que o lugar que voc�s se encontraram primeiro foi pr�ximo ao rio.";
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
		mes "Sim... Est� certo...";
		mes "Aquela noite horr�vel.";
		mes "Eu lembro muito bem...";
		mes ".....................";
		next;
		cutin("kh_kyel02",2);
		mes "[Kiel Hyre]";
		mes "Aquela noite, quando ela veio ao rio, para me encontrar como eu havia pedido.";
		mes "Eu implorei a ela para fugir comigo, ao inv�s de esperar por aquele James.";
		next;
		mes "[Kiel Hyre]";
		mes "Ela insistiu que James nunca a trairia, e ele prometeu a levar com ele no dia seguinte.";
		mes "Voc� pode imaginar como aquilo me fez sentir?";
		mes "Eu n�o era nada pr� ela.";
		next;
		mes "[Kiel Hyre]";
		mes "Meus sentimentos n�o importavam para ela.";
		mes "Ela ficou irritada com aquele anel...";
		mes "Eu perdi o controle e tentei tirar aquela coisa maldita dela e jogar dentro do rio...";
		next;
		mes "[Kiel Hyre]";
		mes "Mas sabe de uma coisa?";
		mes "Ela se debateu, ela realmente lutou comigo!";
		mes "Era apenas uma pequena briga, mas ent�o antes que eu percebesse o ch�o debaixo de n�s cedeu e... as chuvas...";
		next;
		select(".........");
		mes "[Kiel Hyre]";
		mes "N�o estou certo o que foi.";
		mes "A chuva enfraqueceu o ch�o, algo estava errado... e ela simplesmente...";
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
		mes "Voc� j� sabe que ela foi encontrada morta no dia seguinte.";
		mes "Mas o que realmente partiu meu cora��o foi que ela segurou aquele anel t�o firmemente em sua m�o, mesmo na morte...";
		next;
		cutin("kh_kyel03",2);
		mes "[Kiel Hyre]";
		mes "A fam�lia dele tinha tudo enquanto eu n�o tinha nada.";
		mes "Ele teve a aud�cia de tirar";
		mes "Allysia de mim?!";
		mes "Como isso poderia estar certo?";
		next;
		mes "[Kiel Hyre]";
		mes "Ainda que ela tenha falecido eu ainda queria provar para Allysia que tipo de pessoa horr�vel James era realmente.";
		mes "E ent�o foi quando me juntei � Corpora��o Rekenber.";
		next;
		mes "[Kiel Hyre]";
		mes "Desenvolvi a primeir�ssima Gera��o de Rob�s, a qual eu chamei Allysia, e vendi os esquemas para Rekenber.";
		mes "Eu lhes dei rob�s, e eles me deram dinheiro, poder, subordinados obedientes.";
		next;
		mes "[Kiel Hyre]";
		mes "Claro eu sabia que usariam meus rob�s para espionar e matar!";
		mes "Mas sabe de uma coisa?";
		mes "Eu n�o me importava desde que eles me dessem os meios para minha vingan�a.";
		mes "Era a parceria perfeita, realmente.";
		next;
		mes "[Kiel Hyre]";
		mes "Voc� me pegou bem onde voc� queria.";
		mes "Para quem voc� est� trabalhando e exatamente o que voc� quer?";
		mes "Meus esquem�rios?";
		mes "Minha morte?";
		mes "Tudo...?";
		next;
		cutin("kh_kyel01",2);
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Na verdade, eu s� quero perguntar sobre a natureza da sua rela��o profissional com a Corpora��o Rekenber e sobre Kiehl.";
		next;
		mes "[Kiel Hyre]";
		mes "Depois de ouvir minha hist�ria doida, acho que voc� j� suspeita da verdade sobre ele...";
		mes "Ele tamb�m � um rob�, especificamente o primeiro da segunda gera��o de modelos.";
		next;
		mes "[Kiel Hyre]";
		mes "Sua mente foi desenvolvida usando.";
		mes "Uma forma experimental e inst�vel, de Pergaminhos de M�gica Condensada.";
		mes "Ele foi o �nico rob� da Segunda Gera��o que foi permitido existir.";
		next;
		mes "[Kiel Hyre]";
		mes "Eu fiquei muito apegado a Kiehl.";
		mes "N�o � de se surpreender, vendo que rob�tica se tornou minha vida.";
		mes "Eu at� o criei como meu pr�prio filho, e ensinei-lhe tudo sobre rob�tica";
		next;
		mes "[Kiel Hyre]";
		mes "Kiehl agora � um g�nio, e at� desenvolveu a Terceira Gera��o de Rob�s.";
		mes "Infelizmente eu falhei em educ�-lo propriamente com moral e �tica humana.";
		next;
		select("......");
		mes "[Kiel Hyre]";
		mes "Ele est� transformando a Terceira Gera��o de rob�s em m�quinas de matar.";
		mes "Por isso eu tentei coloc�-los todos na academia, ent�o eles poderiam aprender o comportamento humano.";
		next;
		mes "[Kiel Hyre]";
		mes "Mesmo que a academia tenha atrasado os planos de Kiehl.";
		mes "Ele foi bem sucedido em converter todos os rob�s em incontrol�veis m�quinas de destrui��o em massa.";
		next;
		mes "[Kiel Hyre]";
		mes "Sim, ele estava trabalhando juntamente com Rekenber.";
		mes "Seu verdadeiro objetivo � criar m�quinas mort�feras para uso de Rekenber.";
		next;
		mes "[Kiel Hyre]";
		mes "Voc� sabe todos os segredos do meu passado agora.";
		mes "N�o estou aborrecido com voc� ou nada, mas eu tenho algo que gostaria de lhe pedir.";
		next;
		mes "[Kiel Hyre]";
		mes "Por favor, pare Kiehl!";
		mes "Eu n�o quero que essa loucura destrua mais rob�s!";
		mes "Vejo cada um e todos eles como se fossem meus filhos!";
		next;
		mes "[Kiel Hyre]";
		mes "Sei que devo tomar total responsabilidade por tudo que aconteceu.";
		mes "Eu prometo que vou pagar por meus atos, assim que tudo estiver resolvido.";
		next;
		select("Aceitar","Okay","Aham");
		mes "[Kiel Hyre]";
		mes "Muit�ssimo obrigado!";
		mes "Voc� pode encontrar Kiehl no n�vel subterr�neo dessa mans�o.";
		next;
		mes "[Kiel Hyre]";
		mes "Ele fica em um quarto velho onde ele foi criado.";
		mes "Mas ele reconstruiu como um tipo de caverna para manter todos fora.";
		mes "Incluindo eu.";
		mes "Sim, ele n�o confia em ningu�m mais...";
		next;
		mes "[Kiel Hyre]";
		mes "Quando voc� o encontrar, quero que voc� tire o anel de Allysia do cora��o dele.";
		mes "Se voc� o remover, vai impedir dele se tornar selvagem.";
		next;
		select("Anel de Allysia?");
		mes "[Kiel Hyre]";
		mes "Sim... Seu anel � o come�o de tudo.";
		mes "Eu coloquei aquilo no cora��o dele para que eu nunca esquecesse o que o Rosimier fez para mim.";
		next;
		mes "[Kiel Hyre]";
		mes "Acho que o crescimento de Kiehl � t�o mais poderoso que o que armas normais podem n�o funcionar nele mais.";
		mes "Use esse dispositivo que far� com que seu suprimento de energia flutue.";
		getitem(Toy_Motor,1);
		next;
		cutin("kh_kyel03",2);
		mes "[Kiel Hyre]";
		mes "Se voc� conseguir ligar isso no corpo de Kiehl, ent�o ele n�o poder� usar o corpo dele com poder total.";
		mes "Enquanto ele estiver enfraquecido, abra o seu peito e tire o anel do seu cora��o.";
		next;
		mes "[Kiel Hyre]";
		mes "Me avise assim que voc� estiver pronto, ent�o eu o guiarei ao quarto de Kiehl.";
		KielHyreQuest = 74;
	} else if ((KielHyreQuest >= 74) && (KielHyreQuest <= 104)) {
		mes "[Kiel Hyre]";
		mes "Voc� est� pronto para confrontar Kiehl agora?";
		next;
		switch (select("Sim","N�o")) {
			case 1:
			mes "[Kiel Hyre]";
			mes "H�... uma passagem secreta que est� aberta agora.";
			mes "Apenas v� para a minha direita mas tenha cuidado.";
			mes "Kiehl � extremamente perigoso.";
			close2;
			enablenpc("KiehlRoomWarp#kh");
			donpcevent("KiehlRoomWarp#kh::OnEnable");
			cutin("",255);
			end;
			break;
			case 2:
			mes "[Kiel Hyre]";
			mes "Por favor leve o tempo que precisar.";
			mes "Eu imagino que n�o ser� f�cil.";
			break;
		}
	} else if ((KielHyreQuest >= 74) && (KielHyreQuest <= 106)) {
		cutin("kh_kyel01",2);
		mes "[Kiel Hyre]";
		mes "Voc� retornou...!";
		mes "Ent�o voc� conseguiu recuperar o Anel de Allysia do cora��o de Kiehl?";
		next;
		if (!countitem(Elysia_Ring)) {
			mes "[Kiel Hyre]";
			mes "Quer dizer... Voc� n�o o tem?";
			mes "Por favor, recupere o Anel de Allysia do cora��o de Kiehl!";
			next;
			enablenpc("KiehlRoomWarp#kh");
			donpcevent("KiehlRoomWarp#kh::OnEnable");
			close2;
			cutin("",255);
			end;
		}
		mes "[Kiel Hyre]";
		mes "O-O qu� aconteceu...?";
		mes "Kiehl desenvolveu um novo corpo para ele?";
		mes "I-Isso o faz a Quarta Gera��o de rob�s.";
		mes "Eu n�o tinha id�ia que ele era t�o esperto.";
		next;
		mes "[Kiel Hyre]";
		mes "Espere, agora pensando melhor eu vi corpos de rob�s que pareciam com Kiehl quando eu estava trancado na f�brica.";
		mes "Ent�o ele estava usando aquelas c�pias para desenvolver atualiza��es pessoais.";
		next;
		mes "[Kiel Hyre]";
		mes "Aqui, por favor pegue esse cart�o que deixar� voc� entrar e investigar os n�veis mais profundos da f�brica.";
		mes "Eu investigarei o quarto de Kiehl.";
		getitem(Fancy_Key_Card,1);
		KielHyreQuest = 108;
		next;
		mes "[Kiel Hyre]";
		mes "Kiehl � minha responsabilidade...";
		mes "N�o importa qual o custo eu tenho de par�-lo!";
		mes "Oh, e aqui, por favor pegue isso com toda minha gratid�o por sua ajuda,"+(Sex == SEX_FEMALE ? "Sr":"Sra")+". "+strcharinfo(CHAR_NAME)+".";
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
		mes "Quem � voc�?";
		mes "Como chegou aqui?";
		mes "V� embora";
		close;
	}
	cutin("kh_ellisia",2);
	if (KielHyreQuest < 70) {
		mes "[Allysia]";
		mes "voc� deve estar surpreso";
		mes "por tudo que tem";
		mes "acontecido. Talvez tudo";
		mes "fosse mais f�cil de entender";
		mes "se eu explicasse sobre rob�s?";
		next;
		switch (select("Sim","N�o")) {
			case 1:
			mes "[Allysia]";
			mes "Os rob�s que voc� tem";
			mes "encontrado s�o bonecos mec�nicos";
			mes "automatizados que podem";
			mes "pensar e operar independentemente.";
			mes "Muitos s�bios tentaram desenvolver";
			mes "seus pr�prios rob�s, mas falharam.";
			next;
			mes "[Allysia]";
			mes "Meu mestre, Kiel Hyre, esteve";
			mes "estudando rob�tica desde que";
			mes "tinha vinte anos e";
			mes "desenvolveu tr�s diferentes";
			mes "gera��es de rob�s, a primeira,";
			mes "segunda e terceira gera��es.";
			next;
			switch (select("Primeira Gera��o","Segunda Gera��o","Terceira Gera��o")) {
				case 1:
				mes "[Allysia]";
				mes "Eu sou um bom exemplo da";
				mes "Primeira Gera��o de Rob�s de";
				mes "Kiel. Fui constru�da usando";
				mes "um esqueleto mec�nico pesado,";
				mes "um cora��o rob�tico e pele";
				mes "quimicamente sintetizada.";
				next;
				mes "[Allysia]";
				mes "Minha unidade de processamento central,";
				mes "equivalente � seu c�rebro, �";
				mes "essencialmente um Pergaminho de Mem�ria";
				mes "baseado no esbo�o de Pergaminhos";
				mes "M�gicos que voc�s";
				mes "aventureiros usam em batalha.";
				next;
				mes "[Allysia]";
				mes "Sou o mais velho tipo de";
				mes "rob� human�ide, ent�o eu peso";
				mes "muito, e minha mente pode somente";
				mes "processar uma quantidade limitada de";
				mes "dados. Ent�o, eu n�o posso expressar";
				mes "emo��es similarmente � um humano.";
				next;
				break;
				case 2:
				mes "[Allysia]";
				mes "A Primeira Gera��o de rob�s";
				mes "foram desenvolvidas na maioria de";
				mes "partes mec�nicas, mas a";
				mes "Segunda Gera��o de Rob�s";
				mes "incorporaram a ci�ncia e tecnologia";
				mes "dos Homunculus.";
				next;
				mes "[Allysia]";
				mes "A Segunda Gera��o de rob�s";
				mes "parecem ter mais fida, j� que";
				mes "t�m pele artificial e carne";
				mes "criadas, ainda assim s�o";
				mes "constru�dos de um pesado";
				mes "esqueleto mec�nico.";
				next;
				mes "[Allysia]";
				mes "A tecnologia elemental de";
				mes "pergaminhos dos S�bios tamb�m usada";
				mes "para desenvolver o Pergaminho de";
				mes "mem�ria condensada, uma unidade de";
				mes "processamento central superior �";
				mes "usada na Primeira Gera��o de rob�s.";
				next;
				mes "[Allysia]";
				mes "Ent�o os Pergaminhos de Mem�ria";
				mes "Condensados eram 100,000 vezes";
				mes "mais poderosos que os Pergaminhos";
				mes "de Mem�ria comuns, eles eram";
				mes "problem�ticos e tendiam";
				mes "� muitos erros e problemas";
				next;
				mes "[Allysia]";
				mes "A Segunda Gera��o de Rob�s";
				mes "eram capazes de expressar";
				mes "emo��es humanas, mas sua";
				mes "produ��o foi interrompida ap�s seis";
				mes "anos pois foram considerados";
				mes "defeituosos.";
				next;
				break;
				case 3:
				mes "[Allysia]";
				mes "A Terceira Gera��o de rob�s";
				mes "foram desenvolvidas na sua maioria";
				mes "pelo filho de Kiel Hyre, Kiehl,";
				mes "e n�o usam esqueletos";
				mes "mec�nicos: Todo o corpo";
				mes "� basicamente um homunculus.";
				next;
				mes "[Allysia]";
				mes "Com seus corpos org�nicos";
				mes "e cora��es artificiais avan�ados";
				mes "feitos da imita��o de Pedados do Cora��o";
				mes "de Ymir , eles podem experimentar";
				mes "fen�menos psicol�gicos";
				mes "como simples humanos.";
				next;
				mes "[Allysia]";
				mes "Kiehl conseguiu desenvolver";
				mes "uma forma mais est�vel do";
				mes "Pergaminho de Mem�ria Condensada";
				mes "que n�o sofre dos";
				mes "erros cr�ticos, e pode ser";
				mes "produzido em massa a baixo custo.";
				next;
				mes "[Allysia]";
				mes "Elly � atualmente um prot�tipo";
				mes "da Terceira Gera��o. Uma vez";
				mes "que melhoramos os prot�tipos,";
				mes "come�amos a produ��o em massa.";
				mes "De fato, a academia � nosso";
				mes "campo de testes de prot�tipos.";
				next;
				mes "[Allysia]";
				mes "O fto de que um prot�tipo de";
				mes "rob�s podem interagir assim como";
				mes "humanos reais, � prova de nosso";
				mes "sucesso em rob�tica.";
				next;
				break;
			}
			case 2:
			mes "[Allysia]";
			mes "Por favor me avise se";
			mes "quiser aprender mais sobre";
			mes "os rob�s de Kiel Hyre.";
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
		mes "^3355FFConforme voc� sai da mans�o, algo bate sobre sua cabe�a e voc� instantaneamente perde a consci�ncia^000000.";
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
		mes "^3355FFVoc� acordou com sua cabe�a latejando de dor, e uma mulher misteriosa parada em sua frente^000000.";
		next;
		mes "[??????]";
		mes "Hm? Oh, voc� acordou antes do que eu pensava.";
		mes "Voc� deve se sentir confus"+(Sex == SEX_MALE ? "o":"a")+", mas ou�a atentamente.";
		mes "Se n�o ent�o n�o posso garantir sua seguran�a, certo?";
		next;
		mes "[??????]";
		mes "Tudo o que voc� precisa saber � que sou um agente secreto da Rep�blica de Schwaltzvalt.";
		mes "Estamos investigando a atividade anormal entre Kiel Hyre e a Corpora��o Rekenber.";
		next;
		mes "[??????]";
		mes "Vimos voc� entrar na mans�o e conversar com Kiel Hyre, ent�o basicamente voc� est� aqui para interrogat�rio.";
		mes "Agora me diga a verdade.";
		mes "Como voc� conheceu Kiel Hyre?";
		next;
		switch (select("Eu vou contar tudo!","N�o sei de nada!")) {
			case 2:
			mes "[??????]";
			mes "N�o...sabe...de nada?";
			mes "Tem certeza disso?";
			mes "Somente poucos selecionados podem falar com Kiel Hyre pessoalmente.";
			mes "Voc� deve ter alguma conex�o com ele.";
			mes "Estou certo, n�o estou?";
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "......";
			mes ".........";
			mes "............";
			next;
			mes "[??????]";
			mes "voc� est� tentando o proteger?";
			mes "Acho que voc� n�o deve estar entendendo o tipo de pessoa que voc� realmente est� tratando aqui.";
			mes "Vou lhe dizer o que descobri sobre ele...";
			next;
			mes "[??????]";
			mes "Kiel Hyre.";
			mes "Diretor executivo da funda��o Kiel Hyre, fabricante de v�rios equipamentos.";
			mes "Sua companhia come�ou como uma pequena loja em Einbroch cuja tecnologia lentamente ficou famosa.";
			next;
			mes "[??????]";
			mes "A Corpora��o Rekenber ofereceu uma fus�o com a Funda��o Kiel Hyre.";
			mes "Ainda n�o estamos certos por que eles queriam Kiel Hyre em particular par consertar e desenvolver seus Guardi�es...";
			next;
			mes "[??????]";
			mes "Tamb�m n�o temos certeza por que eles queriam repentinamente se focar mais no desenvolvimento de Guardi�es.";
			mes "Ent�o repentinamente o filho de Kiel Hyre aparece do nada.";
			next;
			mes "[??????]";
			mes "� muito suspeito.";
			mes "N�o h� registros de seu nascimento ou nada.";
			mes "Ainda assim, talvez Kiel Hyre realmente deve ter tido ele com sua secret�ria, Allysia.";
			mes "Bem, ningu�m tem certeza.";
			next;
			mes "[??????]";
			mes "De qualquer forma, o filho e herdeiro de Kiel Hyre.";
			mes "Kiehl, ajudou seu pai a estabelecer essa academia especial como sua forma de repagar a sociedade.";
			next;
			mes "[??????]";
			mes "Quase todas as corpora��es e organiza��es tentaram colocar seus espi�es dentro dessa academia, mas todos eles foram rejeitados.";
			mes "� estranho, pelo menos um deles deveria ter conseguido.";
			next;
			mes "[??????]";
			mes "E recentemente, Kiehl Hyre teve um encontro secreto com executivos de Rekenber para anunciar seu novo projeto.";
			mes "Ele pretende criar avan�ados rob�s human�ides que substituir�o os guardi�es!";
			next;
			mes "[??????]";
			mes "Nossos espi�es reportaram que Kiel Hyre n�o foi encontrado para aquela reuni�o, assim como sua secret�ria de confian�a, Allysia.";
			mes "Ele...";
			mes "Ele simplesmente desapareceu!";
			next;
			mes "[??????]";
			mes "Ent�o, Kiel Hyre aparece em sua mans�o depois de todo esse tempo como se nada tivesse acontecido!";
			mes "Ao mesmo tempo, Kiehl desaparece, com a desculpa de conduzir pesquisas.";
			next;
			mes "[??????]";
			mes "Rekenber est� patrocinando ambos Kiehl e Kiel.";
			mes "Mas h� algum conflito acontecendo entre pai e filho, eu simplesmente sei!";
			mes "Agora me diga, o que est� havendo?";
			next;
			mes "[??????]";
			mes "N�o tenho certeza o qu�o bem voc� conhece esse pa�s.";
			mes "Mas o fato que Rekenber est� envolvida deve lhe dizer que essas n�o s�o boas pessoas.";
			mes "Conte-me o que voc� sabe sobre eles!";
			next;
			switch (select("Certo","......")) {
				case 2:
				mes "[??????]";
				mes "Se voc� n�o cooperar, ent�o n�o posso garantir sua seguran�a, aventureiro";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Huh? O qu�...?";
				mes "O que isso quer dizer?";
				mes "voc� est� me amea�ando?";
				next;
				select("Apenas fa�a o que ela diz.");
				case 1:
				mes "[??????]";
				mes "�timo.";
				mes "Sou a agente Mitchell Layla.";
				mes "Daqui para frente, voc� est� trabalhando para a Rep�blica Schwaltzvalt!";
				KielHyreQuest = 52;
				close;
			}
		}
	} else if (KielHyreQuest == 52) {
		mes "[Mitchell]";
		mes "Tenho algumas informa��es novas para voc�.";
		mes "H� uma velha senhora em Yuno que conheceu uma mulher chamada Allysia 30 anos atr�s.";
		next;
		mes "[Mitchell]";
		mes "A hist�ria � que essa Allysia de 30 anos atr�s cometeu suic�dio e � id�ntica � secret�ria de Kiel Hyre, que tamb�m se chama Allysia.";
		next;
		mes "[Mitchell]";
		mes "Isso � muita coincid�ncia.";
		mes "Quero que voc� v� a Yuno e investigue.";
		mes "Quando terminar, fale com o gerente de Kiel Hyre, e ele vai lhe trazer at� mim.";
		next;
		mes "[Mitchell]";
		mes "Sim, eu sei.";
		mes "Aquele cara na verdade trabalha para mim.";
		mes "De qualquer forma, quando estiver pronto para ir para Yuno, me avise, e voc� poder� embarcar no avi�o federal.";
		KielHyreQuest = 54;
		close;
	} else if (KielHyreQuest == 54) {
		mes "[Mitchell]";
		mes "Est� pronto?";
		mes "Vou deix�-lo embarcar no avi�o federal, para que voc� chegue a Yuno, e termine sua miss�o rapidamente.";
		next;
		switch (select("Sim","N�o")) {
			case 1:
			mes "[Mitchell]";
			mes "Boa sorte.";
			mes "Uma vez completada sua miss�o, assegure-se de reportar-se ao gerente de Kiel Hyre para que ele lhe traga a mim.";
			close2;
			warp("yuno",54,209);
			end;
			case 2:
			mes "[Mitchell]";
			mes "A vontade...";
			mes "Mas tenha em mente que n�o sou uma mulher paciente!";
			close;
		}
	} else if (KielHyreQuest == 64) {
		mes "[Mitchell]";
		mes "Ah, voc� est� de volta.";
		mes "O que voc� tem para reportar da sua investiga��o?";
		next;
		mes "[Mitchell]";
		mes ".....................";
		mes "Ah, entendo. Bom trabalho.";
		mes "Por que voc� n�o fala com Kiel Hyre e o confronta com o que voc� descobriu sobre seu passado?";
		mes "Sim, tosta ele.";
		next;
		mes "[Mitchell]";
		mes "Use esse microfone oculto, assim poderemos lhe ajudar se estiver em perigo.";
		mes "Quero que voc� descubra quem Kiel � realmente, e qual sua rela��o com Rekenber.";
		KielHyreQuest = 68;
		next;
		warp("kh_mansion",83,50);
		end;
	} else {
		mes "[Mitchell]";
		mes "Esta area � restrita, melhor voc� sair agora.";
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
yuno,257,140,4	script	Vov� Estranha#kh	4_F_EINOLD,{
	if (KielHyreQuest < 54) {
		mes "[Vov�]";
		mes "Aonde voc� vai meu querido?";
		mes "Onde est� voc�, meu queridinho?";
		close;
	} else if (KielHyreQuest == 54) {
		mes "[Vov�]";
		mes "Can��o de ninar...";
		mes "Diz boa noite...";
		mes "Acalma nenenzinho...";
		mes "V� dormiiiirrrr";
		next;
		switch (select("O que est� fazendo?","Um, eu n�o vejo um beb�...")) {
			case 1:
			mes "[Vov�]";
			mes "Oh? meu beb� n�o para de chorar e n�o parece dormir.";
			mes "Ela precisa descansar para que eu possa trabalhar.";
			mes "A casa est� t�o bagun�ada e o chefe t�o descontente...";
			KielHyreQuest = 56;
			next;
			select("Um, eu n�o vejo um beb�...");
			mes "[Vov�]";
			mes "Allysia...?!";
			mes "Allysia, onde voc� foi?";
			mes "Era para voc� voltar para casa h� muito tempo atr�s!";
			close;
			case 2:
			mes "[Vov�]";
			mes "Allysia...?!";
			mes "Allysia, onde voc� foi?";
			mes "Era para voc� voltar para casa h� muito tempo atr�s!";
			close;
		}
	} else if ((KielHyreQuest >= 56) && (KielHyreQuest < 60)) {
		mes "[Grandma]";
		mes "Allysia...?!";
		mes "Allysia, onde voc� foi?";
		mes "Era para voc� voltar para casa h� muito tempo atr�s!";
		if (!countitem(Elysia_Portrait)) {
			close;
		}
		next;
		select("Allysia? ela n�o est�...");
		cutin("kh_ellisia_port",1);
		mes "^3355FFvoc� mostra o retrato de Allysia para a velha senhora^000000.";
		next;
		cutin("",255);
		mes "[Vov�]";
		mes "Oh, voc� conhece Allysia?";
		mes "Ela est� desaparecida!";
		mes "Ela saiu de casa ontem e ainda n�o voltou!";
		mes "V-Voc� pode me dizer onde ela est�?!";
		close;
	} else {
		mes "[Vov�]";
		mes "N�o se preocupe, Allysia...";
		mes "Mam�e sempre estar� aqui para voc�.";
		mes "N�o precisa ficar triste...";
		close;
	}
}

// ------------------------------------------------------------------
yuno,250,132,0	script	Velha Senhora#kh	4_F_05,{
	if (KielHyreQuest < 56) {
		mes "[Velha Senhora]";
		mes "Oooh, minhas pernas e costas est�o t�o do�das.";
		mes "Esse velhos ossos doem todos...";
		close;
	} else if (KielHyreQuest == 56) {
		if (!checkweight(Rosimier_Key,1)) {
			mes "^3355FF- Espere!!";
			mes "voc� est� carregando muitos �tens e n�o ser� capaz de aceitar mais.";
			mes "Por favor disponibilize algum espa�o no seu inventario antes de retornar^000000.";
			close;
		}
		mes "[Velha Senhora]";
		mes "Deuses, eu odeio esse tempo!";
		mes "Me lembra como fiquei velha!";
		mes "Resfria meus ossos, isso sim!";
		next;
		switch (select("......","Voc� conhece aquela Vov�?")) {
			case 1:
			mes "[Velha Senhora]";
			mes "Maldi��o!";
			mes "Se pelo menos eu n�o tivesse tido todas aquelas aventuras na minha juventude!";
			mes "A� talvez eu n�o sofresse tanto na minha idade avan�ada!";
			close;
			case 2:
			mes "[Velha Senhora]";
			mes "Oh... Sim.";
			mes "Ela era a m�e da minha melhor amiga, ^3355FFAllysia^000000.";
			mes "Desde que ela cometeu suic�dio, as coisas n�o t�m sido as mesmas.";
			mes "Sua m�e perdeu a sanidade...";
			next;
			select("Era ^3355FFAllysia^000000...?");
			mes "[Velha Senhora]";
			mes "Oh, Allysia era uma mo�a t�o bonita.";
			mes "Tantos homens quiseram ela, especialmente aquele James Rosimier.";
			mes "Lembro de ter ouvido que eles iriam se casar...";
			next;
			mes "[Velha Senhora]";
			mes "Eu estava t�o feliz por ela!";
			mes "Mas ent�o, repentinamente, ela se matou.";
			mes "Bem, isso � o que todos dizem.";
			mes "Mesmo hoje, n�o tenho tanta certeza do que aconteceu.";
			next;
			select("Espere, quem � James Rosimier?");
			mes "[Velha Senhora]";
			mes "Oh, James pertencia a uma das fam�lias mais antigas e ricas em Yuno.";
			mes "Tudo estava indo bem para eles, mas algum tempo depois que Allysia morreu, a fam�lia foi a fal�ncia.";
			next;
			mes "[Velha Senhora]";
			mes "A cidade gerencia a velha resid�ncia deles agora.";
			mes "Por alguma raz�o, eles decidiram me confiar a chave mestra da Mans�o Rosimier.";
			next;
			select("Pode me emprestar essa Chave Mestra?");
			mes "[Velha Senhora]";
			mes "Bem, n�o � para eu realmente";
			mes "entregar ela para simplesmente";
			mes "qualquer um, mas posso dizer que";
			mes "voc� est� trabalhando com Allysia";
			mes "com os melhores interesses no cora��o.";
			next;
			mes "[Velha Senhora]";
			mes "Entretanto, voc� tem de assegurar-se de traz�-la de volta para mim.";
			mes "Antes que o pessoal da prefeitura me pergunte por ela.";
			mes "Muito bem ent�o, espero que voc� ache o que est� procurando.";
			getitem(Rosimier_Key,1);
			KielHyreQuest = 58;
			close;
		}
	} else if ((KielHyreQuest == 58) && (countitem(Family_Portrait)) || (!countitem(Elysia_Portrait)) || (!countitem(Kyll_Hire_Letter2)) || (!countitem(Piece_Memo_Of_James))) {
		mes "[Velha Senhora]";
		mes "Por favor depressa. Encontre o que quer que esteja procurando na Mans�o Rosimier.";
		mes "Posso arrumar problemas se o pessoal da prefeitura vier e me perguntar pela chave...";
		close;
	} else if ((KielHyreQuest == 58) && (countitem(Family_Portrait)) && (countitem(Elysia_Portrait)) && (countitem(Kyll_Hire_Letter2)) && (countitem(Piece_Memo_Of_James))) {
		mes "[Velha Senhora]";
		mes "Oh voc� acabou sua busca na mans�o?";
		mes "Deprimente n�o �?";
		mes "Os credores basicamente pilharam tudo h� muito tempo atr�s.";
		next;
		select("Por que ^3355FFAllysia^000000...?");
		mes "[Velha Senhora]";
		mes "Bem, eu sabia que aquele James e Allysia estavam apaixonados, e ele prometeu casar com ela.";
		mes "Agora, supostamente sua fam�lia j� o tinha noivado com outra mulher.";
		next;
		mes "[Velha Senhora]";
		mes "O tempo passou, e ele foi for�ado a cassar com sua noiva.";
		mes "Allysia era devastadoramente linda.";
		mes "Acho que talvez por isso ela... voc� sabe...";
		next;
		mes "[Velha Senhora]";
		mes "Escute, se voc� quiser saber mais sobre o que aconteceu.";
		mes "Ent�o acho que voc� deveria falar com o ^3355FFpescador que vive^000000 ^3355FFao sul da Academia Kiel Hyre^000000.";
		next;
		mes "[Velha Senhora]";
		mes "Ele � quem encontrou o corpo de Allysia no rio, em t�o ele pode ter uma melhor id�ia do que aconteceu.";
		delitem(Rosimier_Key,1);
		KielHyreQuest = 60;
		close;
	} else {
		mes "[Velha Senhora]";
		mes "Sim, A chuva est� vindo.";
		mes "Posso sentir nos meus ossos.";
		close;
	}
}

// ------------------------------------------------------------------
yuno,273,141,0	script	#RosimmirEnter	WARPNPC,2,2,{
	OnTouch:
	if (!countitem(Rosimier_Key)) {
		mes "Essa mans�o parece ter sido destru�da pelo tempo.";
		mes "No entanto, a porta parece que ainda seria operacional se voc� tivesse a chave certa.";
		close;
	} else {
		warp("kh_rossi",20,92);
	}
	end;
}

// ------------------------------------------------------------------
kh_rossi,23,23,0	script	Mesa#khr2	HIDDEN_NPC,{
	if (KielHyreQuest < 58) {
		mes "^3355FFN�o h� nada de importante para voc� aqui^000000.";
		close;
	} else if (KielHyreQuest < 60) {
		if (!checkweight(Family_Portrait,1)) {
			mes "^3355FF- Espere!!";
			mes "Voc� est� carregando muitos �tens e n�o ser� capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espa�o no seu inventario antes de retornar^000000.";
			close;
		} else if (!countitem(Family_Portrait)) {
			cutin("kh_family_port",1);
			mes "^3355FFvoc� examina a mesa, e encontra um porta retratos dentro da gaveta aberta^000000.";
			getitem(Family_Portrait,1);
		} else {
			mes "^3355FFA gaveta aberta dessa mesa est� vazia agora^000000.";
		}
	} else{
		mes "^3355FFEsta foi a mesa na qual voc� obteve o retrato da fam�lia Rosimier Suas gavetas est�o vazias agora^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_rossi,92,40,0	script	Estante#kh2	HIDDEN_NPC,{
	if (KielHyreQuest < 58) {
		mes "^3355FFN�o h� nada de importante para voc� aqui^000000.";
		close;
	} else if (KielHyreQuest < 60) {
		if (!checkweight(Elysia_Portrait,1)) {
			mes "^3355FF- Espere!!";
			mes "Voc� est� carregando muitos �tens e n�o ser� capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espa�o no seu inventario antes de retornar^000000.";
			close;
		} else if (!countitem(Elysia_Portrait)) {
			mes "^3355FFH� caixas trancadas nessas prateleiras.";
			mes "Talvez se voc� usar essa chave mestra da mans�o, voc� pode conseguir abr�-las^000000.";
			next;
			switch (select("Usar Chave","Cancelar")) {
				case 1:
				mes "^3355FFQual caixa voc� quer tentar abrir^000000?";
				next;
				switch (select("Primeira caixa","Segunda Caixa")) {
					case 1:
					mes "^3355FFvoc� usa a chave Mestra para destrancar a caixa.";
					mes "E obtem um retrato de uma mulher que se parece com a assistente de Kiel Hyre, Allysia^000000.";
					next;
					cutin("kh_ellisia_port",2);
					mes "^3355FFA mensagem, ''Para meu amor, Allysia. De James.'' est� escrita nas costas^000000.";
					getitem(Elysia_Portrait,1);
					close2;
					cutin("",255);
					end;
					case 2:
					mes "^3355FFEssa caixa est� vazia^000000.";
					close;
				}
				case 2:
				mes "^3355FFEssa caixa est� vazia^000000.";
				close;
			}
		} else {
			mes "^3355FFVoc� encontrou um retrato de uma mulher em uma das caixas nessa prateleira^000000.";
			close;
		}
	} else {
			mes "^3355FFVoc� encontrou um retrato de uma mulher em uma das caixas nessa prateleira^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_rossi,144,286,0	script	Mesa#khr3	HIDDEN_NPC,{
	if (KielHyreQuest < 58) {
		mes "^3355FF� apenas uma mesa^000000.";
		close;
	} else if (KielHyreQuest < 60) {
		mes "^3355FFA mesa tem^000000 tr�s gavetas^000000";
		next;
		switch (select("Primeira Gaveta","Segunda Gaveta","Terceira Gaveta","Cancelar")) {
			case 1:
			mes "^3355FFA primeira gaveta est� trancada^000000.";
			close;
			case 2:
			if (!checkweight(Kyll_Hire_Letter2,1)) {
				mes "^3355FF- Espere!!";
				mes "Voc� est� carregando muitos itens e n�o ser� capaz de aceitar mais.";
				mes "Por favor disponibiliza algum espa�o no seu inventario antes de retornar^000000.";
				close;
			} else if (!countitem(Kyll_Hire_Letter2)) {
				mes "^3355FFH� uma carta dentro dessa segunda gaveta.";
				mes "Foi enviada por uma pessoa com as iniciais, K.H., e endere�ada � Allysia^000000.";
				getitem(Kyll_Hire_Letter2,1);
				close;
			} else {
				mes "^3355FFEssa gaveta est� vazia^000000.";
				close;
			}
			case 3:
			mes "^3355FFH� um pequeno bilhete dentro dessa terceira gaveta^000000.";
			mes "^3355FFFoi escrito por James, e menciona que ele quer se casar com Allysia, e ela recebeu um anel de noivado^000000.";
			close;
			case 4:
			mes "......";
			mes ".........";
			mes "............";
			close;
		}
	} else{
		mes "^3355FFEsta � a mesa onde voc� encontrou uma carta escrita por K.H, e uma nota rabiscada por James Rosimier.";
		mes "Ambos s�o dirigidos � mesma mulher, Allysia^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_rossi,148,288,0	script	Estante#kh3	HIDDEN_NPC,{
	if (KielHyreQuest < 58) {
		mes "^3355FFVoc� encontra uma estante empoeirada cheia de livros^000000.";
		close;
	} else if (KielHyreQuest < 60) {
		if (!checkweight(Piece_Memo_Of_James,1)) {
			mes "^3355FF- Espere!!";
			mes "Voc� est� carregando muitos itens e n�o ser� capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espa�o no seu inventario antes de retornar^000000.";
			close;
		} else if (!countitem(Piece_Memo_Of_James)) {
			mes "^3355FFVocYe encontra uma estante empoeirada cheia de v�rios livros.";
			mes "Voc� encontra um bilhete dobrado entre os livros enquanto os examina^000000.";
			getitem(Piece_Memo_Of_James,1);
			close;
		} else {
			mes "^3355FFvoc� encontrou uma estante empoeirada cheia de v�rios livros^000000.";
			close;
		}
	} else{
		mes "^3355FFvoc� encontrou uma estante empoeirada cheia de v�rios livros^000000.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_fild12,232,222,0	script	Velho Pescador#kh	4_M_SEAMAN,{
	if (KielHyreQuest < 60) {
		mes "[Pescador]";
		mes "Esses dias, � t�o mais dif�cil ca�ar e pescar.";
		mes "Desde que eles constru�ram essa f�brica, os peixes come�aram a mudar, e parecem diferentes tamb�m...";
		close;
	} else if (KielHyreQuest == 60) {
		mes "[Pescador]";
		mes "Eh? Voc� quer algo?";
		mes "Heh, jovens!";
		mes "Eu sei o quanto voc�s adoram esmolas, mas voc� n�o vai ter nenhuma.";
		mes "Agora me traga algum peixe cru, e eu serei mais amig�vel";
		if (countitem(Fish_Slice) >= 10) {
			next;
			mes "[Pescador]";
			mes "Oh, todos esses peixes para mim?";
			mes "Heh, que generosidade a sua.";
			mes "Se voc� vai ser t�o generoso, ent�o eu suponho que eu deva lhe pagar o favor.";
			mes "Pergunte-me qualquer coisa.";
			next;
			select("30 anos atr�s, uma mulher se matou...");
			mes "[Pescador]";
			mes "Oh? Ohh. Oh sim.";
			mes "Eu me lembro disso.";
			mes "Foi em 20 de Agosto, no anivers�rio da minha esposa.";
			mes "Aquele dia, ao inv�s de pegar peixes, eu peguei uma mulher morta.";
			next;
			mes "[Pescador]";
			mes "Claro, eu reportei � pol�cia de Yuno.";
			mes "Eles me disseram que ela se matou j� que tinha sido tra�da por seu amante, que por acaso era tamb�m seu empregador.";
			mes "Coisa realmente tr�gica.";
			next;
			mes "[Pescador]";
			mes "Ainda assim, quanto est�vamos retirando o seu corpo do rio, sua m�o deixou cair um anel.";
			mes "Eu peguei, esperando vend�-lo mais tarde por algum zeny.";
			mes "Eu sei, eu sei...";
			next;
			mes "[Pescador]";
			mes "Tive muita sorte que a policia n�o me viu peg�-lo mais tarde naquele dia, um cara veio e me ofereceu uma bolada por ele.";
			mes "Acho que foi meu dia de sorte!";
			next;
			mes "[Pescador]";
			mes "Descobri mais tarde que ele era algum tipo de engenheiro mec�nico ou algo assim.";
			mes "Ele vendeu tudo para comprar aquele anel, ent�o acho que o queria desesperadamente.";
			mes "Ent�o ele simplesmente desapareceu.";
			next;
			select("Voc� se lembra do nome dele?");
			mes "[Pescador]";
			mes "O nome dele...?";
			mes "Era algo parecido com...";
			mes "Heil? Hyre?";
			mes "De qualquer forma, foi h� muito tempo atr�s.";
			mes "Oh, sua velha casa ainda est� por a�.";
			next;
			mes "[Pescador]";
			mes "Se voc� for bem curioso, voc� pode at� dar uma checada tamb�m.";
			mes "Vejamos, ele viveu em uma cabana pr�ximo ao acampamento noroeste da guarda florestal.";
			delitem(Fish_Slice,10);
			KielHyreQuest = 62;
			close;
		} else {
			close;
		}
	} else if (KielHyreQuest >= 62) {
		mes "[Pescador]";
		mes "Voc� n�o se lembra o que eu lhe disse?";
		mes "Aquele cara vivia numa cabana pr�ximo ao acampamento noroeste da guarda florestal.";
		mes "Por que voc� n�o d� uma checada l�?";
		close;
	}
}

// ------------------------------------------------------------------
yuno_fild09,158,217,0	script	Placa de Madeira#kh	HIDDEN_NPC,{
	if ((KielHyreQuest < 62) || (KielHyreQuest >= 64)) {
		mes "^3355FF� uma in�til placa de madeira nos arbustos^000000.";
		close;
	} else if (KielHyreQuest == 62) {
		if (!checkweight(Man_Portrait,1)) {
			mes "^3355FF- Espere!!";
			mes "Voc� est� carregando muitos itens e n�o ser� capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espa�o no seu inventario antes de retornar^000000.";
			close;
		} else {
			mes "^000oFFVoc� encontrou uma grande placa de madeira encravada com as iniciais, 'K.H.'^000000";
			next;
			cutin("kh_kyel_port",2);
			mes "^3355FFVoc� encontrou o retrato de um jovem, que se parece com uma vers�o mais nova de Kiel Hyre.";
			mes "Em um porta retratos quebrado debaixo da placa de madeira^000000.";
			getitem(Man_Portrait,1);
			KielHyreQuest = 64;
			next;
			cutin("",255);
			mes "^3355FFVoc� tem informa��o suficiente agora, ent�o voc� deveria se reportar � Mitchell^000000.";
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
			mes "Foi papai que mandou voc� para me matar?";
			mes "Veremos sobre isso!";
			mes "V� em frente, tente me encontrar, aventureiro^000000..";
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
		mes "^3355FFVoc� encontrou um vaso de flores^000000.";
		close;
	} else if (KielHyreQuest >= 74) {
		mes "^3355FFVoc� encontrou um vaso de flores^000000.";
		next;
		switch (select("Pegar o Vaso","Quebrar o Vaso","Virar o vaso de ponta cabe�a")) {
			case 1:
			mes "^3355FFO vaso est� vazio^000000.";
			close;
			case 2:
			mes "^3355FFVoc� n�o pode destruir esse vaso, mesmo batendo com toda a sua for�a.";
			mes "Deve ter sido especialmente fabricado pela Corpora��o Rekenber^000000.";
			close;
			case 3:
			mes "^3355FFAs seguintes palavras est�o escritas no fundo do vaso^000000.";
			next;
			mes "[Mensagem do Vaso]";
			mes "''O coelho frequentemente observa a porta.";
			mes "A noite come a laranja azeda.''";
			close;
		}
	} else{
		mes "^3355FFAs seguintes palavras est�o escritas na parte inferior do vaso^000000.";
		next;
		mes "[Vase Message]";
		mes "''O coelho freq�entemente observa a porta.";
		mes "A noite come a laranja em conserva.''";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,19,25,0	script	Caixa#kh3	HIDDEN_NPC,{
	if (KielHyreQuest < 74) {
		mes "^3355FFVoc� encontrou um ba� com um bot�o para cada letra do alfabeto sobre ela^000000.";
		next;
		input(.@KHInput$);
		mes "^3355FFNada aconteceu^000000.";
		close;
	} else if (KielHyreQuest >= 74) {
		if (!checkweight(Toy_Key,1)) {
			mes "^3355FF- Espere!!";
			mes "Voc� est� carregando muitos itens e n�o ser� capaz de aceitar mais.";
			mes "Por favor disponibiliza algum espa�o no seu inventario antes de retornar^000000.";
			close;
		}
		if (!countitem(Toy_Key)) {
			mes "^3355FFVoc� encontrou um ba�";
			mes "com um bot�o para cada letra";
			mes "do alfabeto sobre ela^000000.";
			next;
			input(.@KHInput$);
			if (.@KHInput$ == "Abra a Porta") {
				mes "^3355FFAssim que voc� entra a senha, a porta pr�xima emite um barulho agrad�vel e o ba� se abre para revelar uma pequena chave^000000.";
				getitem(Toy_Key,1);
				close;
			} else {
				mes "^3355FFNada aconteceu^000000.";
				close;
			}
		} else {
			mes "^3355FFAqui � onde voc�";
			mes "encontrou a chave de brinquedo^000000";
			close;
		}
	} else{
		mes "^3355FFA caixa est� aberta, e n�o h� nada dentro^000000.";
		close;
	}
}

// ------------------------------------------------------------------
kh_kiehl01,44,33,0	script	Porta Grande#kh	HIDDEN_NPC,{
	if (.KHDoor1Opened == 0) {
		mes "^3355FFA porta est� trancada, mas h� um slot estreito perto da ma�aneta^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cart�o de Acesso Preto") {
			if (countitem(Black_Key_Card) >= 1) {
				mes "^3355FFVoc� insere o Cart�o de Acesso Preto no slot, e bem sucedidamente destranca e abre a porta^000000.";
				delitem(Black_Key_Card,1);
				enablenpc("Big_Door_1_Warp");
				donpcevent("Big_Door_1_Warp::OnEnable");
				.KHDoor1Opened = 1;
				close;
			}
		}
		mes "^3355FFvoc� tenta empurrar a porta com toda a sua for�a, mas falha em faz�-la se mover^000000.";
		close;
	} else {
		mes "^3355FFA porta est� aberta^000000.";
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
		mes "^3355FFA porta est� trancada, mas h� uma pequena fechadura pr�xima � ma�aneta^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Chave de Brinquedo") {
			if (countitem(Toy_Key) >= 1) {
				mes "^3355FFVoc� insere a chave na fechadura, e a porta se destranca assim que voc� gira a chave^000000.";
				delitem(Toy_Key,1);
				enablenpc("Big_Door_2_Warp");
				donpcevent("Big_Door_2_Warp::OnEnable");
				.KHDoor2Opened = 1;
				close;
			}
		}
		mes "^3355FFVoc� tenta empurrar a porta com toda a sua for�a mas falha em faz�-la se mover^000000.";
		close;
	} else {
		mes "^3355FFA porta est� aberta^000000.";
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
		mes "^3355FFA porta est� trancada, mas h� um slot estreito pr�ximo � ma�aneta^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cart�o de Acesso Preto") {
			if (countitem(Black_Key_Card) >= 1) {
				mes "^3355FFvoc� insere o Cart�o de Acesso Preto no slot, e bem sucedidamente destranca e abre a porta^000000.";
				delitem(Black_Key_Card,1);
				enablenpc("Big_Door_3_Warp");
				donpcevent("Big_Door_3_Warp::OnEnable");
				.KHDoor3Opened = 1;
				close;
			}
		}
		mes "^3355FFVoc� tenta empurar a porta com toda a sua for�a, mas falha em faz�-la se mover^000000.";
		close;
	} else {
		mes "^3355FFA porta est� aberta^000000.";
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
		mes "^3355FFA porta est� trancada, mas h� um slot estreito pr�ximo � ma�aneta^000000.";
		next;
		input(.@KHInput$);
		if (.@KHInput$ == "Cart�o de Acesso Preto") {
			if (countitem(Black_Key_Card) >= 2) {
				mes "^3355FFVoc� inseriu o Cart�o de Acesso Preto no slot, e bem sucedidamente destrancou e abriu a porta^000000.";
				delitem(Black_Key_Card,2);
				enablenpc("Big_Door_4_Warp");
				donpcevent("Big_Door_4_Warp::OnEnable");
				.KHDoor4Opened = 1;
				close;
			}
		}
		mes "^3355FFVoc� tenta empurar a porta com toda a sua for�a, mas falha em faz�-la se mover^000000.";
		close;
	} else {
		mes "^3355FFA porta est� aberta^000000.";
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
		mes "^3355FFAssim que voc� toca o tubo de testes, um monte de rob�s repentinamente aparecem^000000..";
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
			mes "^3355FFEssa porta larga est� s� encostada.";
			mes "Se voc� ouvir atentamente, poder� ouvir a porta ranger bem baixinho^000000.";
			next;
			select("Empurrar a Porta","Chutar a Porta","Balan�ar a Porta","Puxar a Porta","Levantar a Porta");
			mes "^3355FFUm grupo de monstros aparecem repentinamente assim que voc� aplicou press�o na porta.";
			mes "Isso deve ser algum tipo de dispositivo de seguran�a^000000.";
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
			mes "^3355FFVoc� aplica alguma press�o sobre a porta, e descobre que voc� pode mov�-la lentamente.";
			mes "Mas n�o pode abr�-la totalmente^000000.";
			next;
			mes "^3355FFSe voc� segurasse algo na fresta entre a porta e o batente.";
			mes "E conseguisse alavancar, ent�o voc� pode ser capaz de abr�-la^000000.";
			next;
			switch (select("A�o","Ferro Enferrujado","Peda�o de Ferro S�lido","Peda�o de Ferro","Parafuso","Cancelar")) {
				case 1:
				.@KHPryingItem$ = "A�o";
				break;
				case 2:
				.@KHPryingItem$ = "Ferro Enferrujado";
				break;
				case 3:
				if (countitem(Sturdy_Iron_Piece) >= 1) {
					if (KielHyreQuest < 92) {
						mes "^3355FFvoc� insere uma ponta de um peda�o de ferro s�lido na fresta da porta num resistente esfor�o de fazer com que a porta abra.";
						mes "A fresta aumenta um pouco mais, no entanto voc� quebra um de seus Peda�os de Ferro S�lido^000000.";
						delitem(Sturdy_Iron_Piece,1);
						KielHyreQuest += 2;
						close;
					} else if (KielHyreQuest == 92) {
						mes "^3355FFCom um empurr�o forte, voc� coloca um Peda�o de Ferro S�lido no batente da porta, fazendo com que a porta se abra.";
						mes "Incapaz de resistir � extrema for�a, esse Peda�o de Ferro S�lido fica em farelos^000000.";
						delitem(Sturdy_Iron_Piece,1);
						KielHyreQuest = 94;
						close;
					}
				} else {
					mes "^3355FFSe ao menos voc� tivesse um Peda�o de Ferro S�lido voc� poderia usar para tentar abrir essa porta^000000.";
					close;
				}
				case 4:
				.@KHPryingItem$ = "Peda�o de Ferro";
				break;
				case 5:
				.@KHPryingItem$ = "Parafuso";
				break;
				case 6:
				mes "^3355FFVamos procurar por algo pesado que possamos usar para abrir essa porta^000000.";
				close;
			}
			mes "^3355FFEsse "+@KHPryingItem$+" � muito fraco para o que voc� est� usando e se quebra^000000.";
			close;
		} else if ((KielHyreQuest >= 94) && (KielHyreQuest <= 104)) {
			if (.KHDoor5Opened == 0) {
				mes "^3355FFA porta larga est� totalmente aberta, e voc� pode entrar agora^000000.";
				next;
				switch (select("Sim","N�o")) {
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
				mes "^3355FFA porta est� aberta^000000.";
				close;
			}
		} else {
			mes "^3355FFEsta porta larga est� encostada.";
			mes "Se voc� ouvir atentamente, voc� pode ouvir a porta ranger bem baixinho^000000.";
			close;
		}
	} else {
		mes "^3355FFEsta porta larga est� encostada.";
		mes "Se voc� ouvir atentamente, voc� pode ouvir a porta ranger bem baixinho^000000.";
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
		mes "Voc� est� carregando muitos �tens e n�o ser� capaz de aceitar mais.";
		mes "Por favor libere algum espa�o no seu inventario antes de retornar^000000.";
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
		mes "Estou surpreso que tenha chegado t�o longe, aventureiro lhe ofere�o as boas vindas ao meu humilde quarto.";
		mes "Acredito que tenha vindo pelo Pergaminho de Mem�ria Condensada...";
		next;
		mes "[Kiehl]";
		mes "Voc� pode entender porque n�o posso deix�-lo o ter.";
		mes "Ent�o se voc� realmente quer o Pergaminho de Mem�ria Condensada, mostre-me do que � capaz!";
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
		mes "Hmpf! Voc� � muito bom.";
		mes "Papai deve ter gasto muito dinheiro para lhe contratar.";
		mes "Ent�o ele lhe enviou para me matar?";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Kiel Hyre me enviou para lhe pedir para parar de tornar toda a Terceira Gera��o de Rob�s em m�quinas mort�feras!";
		mes "Como pode fazer algo assim a outros rob�s como voc�?";
		next;
		cutin("kh_kiel01",2);
		mes "[Kiehl]";
		mes "Por que n�o?";
		mes "Foi dito que o homem foi criado � imagem de Deus.";
		mes "Bem, rob�s foram feitos � imagem do homem.";
		mes "Voc�s humanos matam uns aos outros tanto quanto podem, at� onde eu sei.";
		next;
		mes "[Kiehl]";
		mes "Pode n�o ser �tico para eu prover armas para humanos que precisam delas...";
		mes "Mas o que elas s�o?";
		mes "Armas.";
		mes "� mais humano para rob�s lutarem que humanos.";
		next;
		mes "[Kiehl]";
		mes "Rob�s n�o sentem naturalmente dor ou emo��es.";
		mes "N�o at� que s�o especialmente programados.";
		mes "Desculpe mas n�o planejo parar o que estou fazendo.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Humanidade pode n�o ser perfeita, mas pense com quem voc� est� trabalhando!";
		mes "Rekenber � o resumo do mal humano!";
		mes "Como voc� pode ajud�-los assim?";
		next;
		cutin("kh_kiel02",2);
		mes "[Kiehl]";
		mes "Tive um grande relacionamento com Rekenber.";
		mes "Estou totalmente ciente de suas capacidades.";
		mes "Voc� lembra do primeiro quarto que passou � caminho daqui, o que tinha todos os brinquedos?";
		next;
		mes "[Kiehl]";
		mes "Aposto que n�o sabia que l� estava 5 rob�s da Segunda Gera��o.";
		mes "Eu e meus quatro outros irm�os e irm�s.";
		mes "Papai construiu aquele quarto para que todos os cinco pudessem viver juntos.";
		next;
		cutin("kh_kiel03",2);
		mes "[Kiehl]";
		mes "Eu sou o �nico que sobreviveu.";
		mes "Eu retornei para papai e at� consegui um nome.";
		mes "Mas sim, eu sei o qu�o ruim Rekenber realmente �.";
		next;
		mes "[Kiehl]";
		mes "Eu n�o... Eu n�o quero falar sobre isso mais";
		mes "Voc� me deixou... Apenas saia.";
		mes "Acho que vou deix�-lo viver.";
		next;
		cutin("",255);
		mes "[Mitchell]";
		mes "Parado!";
		mes "Kiehl Hyre, voc� est� preso por criar e negociar armas ilegais!";
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
		mes "Ah, agentes da Rep�blica Schwaltzvalt.";
		mes "Eu nunca tive tantos convidados antes.";
		mes "Bem, acho que isso significa que teremos de lutar afinal voc� e eu.";
		mes "Pena...";
		next;
		mes "[Kiehl]";
		mes "Primeiro, para ser justo, deixe-me cuidar dessas chatea��es.";
		mes "Eles s�o apenas descerebrados fazendo seu trabalho mais ou menos como rob�s.";
		mes "Mas n�o se preocupe, eles n�o ser�o feridos.";
		next;
		mes "[Mitchell]";
		mes "N��ooooo!";
		specialeffect(PF_FOGWALL,AREA,getnpcid("Mitchell#KiehlRoom"));
		specialeffect(PF_FOGWALL,AREA,getnpcid("Agente#KHAgent1"));
		specialeffect(PF_FOGWALL,AREA,getnpcid("Agente#KHAgent2"));
		specialeffect(PF_FOGWALL,AREA,getnpcid("Agente#KHAgent3"));
		specialeffect(PF_FOGWALL,AREA,getnpcid("Agente#KHAgent4"));
		next;
		cutin("kh_kiel03",2);
		mes "[Kiehl]";
		mes "E agora, voc� e eu podemos ter um duelo adequado, humano estou interessado em ver o quanto voc� � realmente forte";
		close2;
		cutin("",255);
		monster(strnpcinfo(NPC_MAP),50,52,"Kiehl",KIEL,1,"KiehlRoom::OnKiehlDead");
		hideonnpc(strnpcinfo(NPC_NAME));
		end;
	} else if ((KielHyreQuest == 100) && (getvariableofnpc(.KHKilledBoss,"KiehlRoom") == 1)) {
		cutin("kh_kiel02",2);
		mes "[Kiehl]";
		mes "M-Maldi��o...!";
		mes "Bem jogado, aventureiro";
		mes "Bem jogado.";
		mes "Eu deveria saber que papai enviaria o melhor de todos atr�s de mim.";
		mes "Ainda assim, voc� falhou em realmente me derrotar.";
		next;
		mes "[Kiehl]";
		mes "Ainda tenho alguns";
		mes "trunfos sobrando";
		mes "Acho...";
		mes "Eu lhe levarei para o inferno comigo...";
		mes "Bem se rob�s puderem ir para l�";
		next;
		mapannounce(strnpcinfo(NPC_MAP),"*Jeeeezzzgggg Geezzz Grrrr Clank*",bc_map,"0xFF0000");
		mes "[Mitchell]";
		mes "N�o...!";
		mes "Estamos trancados no quarto!";
		mes "Estamos presos aqui!";
		next;
		mes "[Kiehl]";
		mes "Vamos queimar tudo abaixo";
		next;
		mes "[Mitchell]";
		mes "R�pido,"+strcharinfo(CHAR_NAME)+", use o dispositivo de for�a de Kiel Hyre, aquele que era para bagun�ar com a fonte de for�a de Kiehl!";
		mes "R�pido, use-o agora!";
		next;
		mapannounce(strnpcinfo(NPC_MAP),"*Gzzzz Gzzzz*",bc_map,"0xFF0000");
		mes "[Kiehl]";
		mes "O-O qu�? N�o p-posso me mover!";
		mes "Esse dia est� simplesmente cheio de surpresas. Oh, bem.";
		mes "Acho que � hora de eu usar meu outro trunfo.";
		next;
		mes "[Mitchell]";
		mes "O qu�...?";
		mes "Quantos trunfos";
		mes "voc� tem?";
		next;
		mes "[????]";
		mes "Estou t�o desapontado...";
		mes "N�o posso acreditar que ningu�m de voc�s pensou nisso...";
		next;
		mes "[Mitchell]";
		mes "Quem � voc�...?";
		mes "Apare�a!";
		next;
		mes "[????]";
		mes "Por favor.";
		mes "N�o me insulte.";
		mes "Voc� conhece essa voz.";
		mes "Esteve falando com voc� o tempo todo";
		next;
		mes "[Mitchell]";
		mes "Imposs�vel!";
		mes "Como pode ter dois de voc�...?!";
		next;
		hideoffnpc("Kiehl#kh2");
		next;
		cutin("kh_kiel01",0);
		mes "[Kiehl]";
		mes "Hahahahaha!";
		mes "Eu sou um rob�!";
		mes "Posso fazer corpos extras trocar de c�rebros com eles";
		mes "� extremamente conveniente, se quer saber.";
		next;
		cutin("kh_kiel03",2);
		mes "[Kiehl]";
		mes "De qualquer forma, n�o quero aparecer mas acho que posso revelar para voc� meu trunfo final.";
		mes "Primeiro de tudo, eu sei tudo sobre voc�. Sra. Mitchell Layla";
		next;
		mes "[Mitchell]";
		mes "O qu�? Como voc� sabe meu nome?";
		next;
		mes "[Kiehl]";
		mes "Bem, eu tenho alguns espi�es meus...";
		mes "Eu o deixarei explicar.";
		next;
		mes "[Homem Mascarado]";
		mes "Mitchell...";
		mes "Sinto muito que voc� tenha se envolvido nisso tudo.";
		next;
		mes "[Mitchell]";
		mes "Wolkeus? Wolkeus Kaiser?!";
		mes "Voc� � o espi�o?";
		mes "Mas voc� arriscou sua vida para salvar nosso presidente!";
		mes "N�o! Oh, Deus!";
		mes "Como isso pode estar acontecendo?!";
		mes "Tudo � simplesmente...";
		mes "Isso tudo � loucura!";
		mes "Tudo!";
		next;
		mes "[Wolkeus]";
		mes "Isso � apenas o resultado de planos elaborados que fizemos anos atr�s.";
		mes "Eu n�o esperava que voc� ficasse t�o surpresa, Mitchell.";
		mes "� assim que o jogo � jogado.";
		mes "Voc� sabe disso.";
		next;
		mes "[Mitchell]";
		mes "Senhor Presidente...";
		mes "Eu falhei... Me desculpe...";
		next;
		mes "[Kiehl]";
		mes "Bem, Kaiser, ela se deu muito mal, mas ao menos voc� est� sendo um cavalheiro sobre isso.";
		mes "Bem eu gostaria que todos n�s fic�ssemos bem informados, mas...";
		next;
		cutin("kh_kiel01",2);
		mes "[Kiehl]";
		mes "Melhor fazermos nossas despedidas aqui.";
		mes "Esse";
		mes "lugar vai sumir em cinco minutos.";
		mes "Ah, e Sra. Layla, voc� vem conosco.";
		mes "Temos perguntas";
		next;
		mes "[Kiehl]";
		mes "Estou curioso em quais s�o os planos do Presidente.";
		mes "Senhor Kaiser, poderia escoltar a Sra.";
		mes "Layla, por favor.";
		next;
		mes "[Wolkeus Kaiser]";
		mes "Desculpe, Mitchell.";
		mes "Tenho de faz�-lo...";
		next;
		mes "[Mitchell]";
		mes "N�o, afaste-se! Deixe-me ir!";
		mes "Me solta, Wolkeus!";
		hideonnpc("Mitchell#KiehlRoom");
		hideonnpc("Agente#KHAgent1");
		hideonnpc("Agente#KHAgent2");
		hideonnpc("Agente#KHAgent3");
		hideonnpc("Agente#KHAgent4");
		next;
		cutin("kh_kiel02",2);
		mes "[Kiehl]";
		mes "�timo, acabamos com aquele neg�cio feio.";
		mes "Agora, onde eu estava. Ah sim.";
		mes "Sim. Desculpe.";
		mes "N�o temos mais tempo para brincar.";
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
		mes "Bem, de qualquer forma, tenho uma mensagem que gostaria que voc� entregasse a ele por mim.";
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
		mes "Por favor diga a ele que isso quer dizer que n�o somos mais parentes um do outro.";
		next;
		mes "[Kiehl]";
		mes "O corpo que estou usando agora?";
		mes "Eu mesmo fiz com a mais avan�ada tecnologia.";
		mes "Considere-o a Quarta Gera��o de corpos de rob�s se quiser.";
		mes "Papai vai entender o que quero dizer.";
		next;
		mes "[Kiehl]";
		mes "De qualquer forma, por favor diga a ele isso, e livre-se desse anel velho que estava no meu corpo antigo de rob�, e entregue para ele.";
		mes "Por enquanto vamos sair daqui: s� temos apenas 3 minutos para evacuar.";
		next;
		mes "[Kiehl]";
		mes "Voc� � um oponente valoroso, e um humano que eu respeito.";
		mes "Eu n�o sei se vamos nos encontrar novamente, mas quem sabe?";
		mes "De qualquer forma, abrirei a sa�da para voc�.";
		mes "At� mais ver";
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
		mes "^3355FFvoc� recuperou o anel do cora��o do velho corpo rob�tico de Kiehl^000000.";
		getitem(Elysia_Ring,1);
		KielHyreQuest = 106;
		close2;
		cutin("",255);
		end;
	} else{
		cutin("kh_kiel02",2);
		mes "^3355FFO antigo corpo rob�tico de Kiehl fica sozinho, sem vida e silencioso^000000.";
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
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 1 segundo para a detona��o",bc_npc,0xFF0000);
	end;

	OnTimer178000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 2 segundos para a detona��o",bc_npc,0xFF0000);
	end;

	OnTimer177000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 3 segundos para a detona��o",bc_npc,0xFF0000);
	end;

	OnTimer176000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 4 segundos para a detona��o",bc_npc,0xFF0000);
	end;

	OnTimer175000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 5 segundos para a detona��o",bc_npc,0xFF0000);
	end;

	OnTimer170000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 10 segundos para a detona��o",bc_npc,0xFF0000);
	end;

	OnTimer160000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 20 segundos para a detona��o",bc_npc,0xFF0000);
	end;

	OnTimer150000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 30 segundos para a detona��o",bc_npc,0xFF0000);
	end;

	OnTimer120000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 1 minuto para a detona��o.",bc_npc,0xFF0000);
	end;

	OnTimer60000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 2 minutos para a detona��o.",bc_npc,0xFF0000);
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltando 3 minutos para a detona��o.",bc_npc,0xFF0000);
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
