/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master (14/09/2017)                            |
| - Info: Quest do Antigeno e Mistura (Molgenstein)                 |
| - Nota: Necessária para quest de mudança de classe para Alquimista|
\*-----------------------------------------------------------------*/

alberta_in,133,55,3	script	Louitz#molgenstain	4_M_02,{
	if (!molgenstain) {
		mes "[Mercador Louitz]";
		mes "Olá.";
		mes "Como vai?";
		next;
		if (countitem(Detrimindexta) || countitem(Karvodailnirol)) {
			switch(select("Conversar","Falar sobre as soluções","Cancelar")) {
				case 1:
				mes "[Mercador Louitz]";
				mes "Eu estive em Geffen há algum tempo tentando encontrar ferramentas mágicas.";
				mes "Então escutei uma conversa sobre um cientista louco.";
				mes "Eu fiquei bem interessado nesse assunto e procurei por este cara.";
				next;
				mes "[Mercador Louitz]";
				mes "Aquele cara era maluco.";
				mes "Ele nem soube que eu estive lá, o tempo todo e só ficava murmurando.";
				mes "Enquanto continuava misturando aquelas coisas em seus experimentos.";
				next;
				mes "[Mercador Louitz]";
				mes "E ele continuou murmurando...";
				mes "Palavras como \"Karvodailnirol\" e \"Detrimindexta\".";
				mes "A primeira vez que eu ouvi isso, pensei que era apenas uma conversa doida, sabe?";
				next;
				mes "[Mercador Louitz]";
				mes "Mas este tal de Karvodailnirol e Detrimindexta realmente existem.";
				mes "Eu acho que eles são líquidos especiais que não funcionam como qualquer outro líquido que estamos acostumados.";
				close;
				case 2:
				mes "[Mercador Louitz]";
				mes "Ei, estas são aquelas soluções que os cientistas vem comentando.";
				mes "Você foi capaz de conseguir uma delas?";
				mes "Agora, eu não tenho a mínima ideia do que fazer com elas...";
				next;
				mes "[Mercador Louitz]";
				mes "Ah, sobre o cientista louco você deveria saber.";
				mes "Eu não lembro exatamente";
				mes "onde ele mora.";
				mes "Mas eu sei que é em Geffen e que seu nome é ^0000FFMolgenstein^000000.";
				next;
				mes "[Mercador Louitz]";
				mes "Hmm...";
				mes "É melhor você dar uma volta em Geffen primeiro, pergunte à alguém antes.";
				mes "Tenho certeza que alguém sabe onde encontrar o Molgenstein.";
				molgenstain = 1;
				close;
				case 3:
				mes "[Mercador Louitz]";
				mes "Vejo você por aí.";
				mes "Cuide-se...";
				close;
			}
		} else {
			mes "[Mercador Louitz]";
			mes "Eu estive em Geffen há algum tempo tentando encontrar ferramentas mágicas.";
			mes "Então escutei uma conversa sobre um cientista louco.";
			mes "Eu fiquei bem interessado nesse assunto e procurei por este cara.";
			next;
			mes "[Mercador Louitz]";
			mes "Aquele cara era maluco.";
			mes "Ele nem soube que eu estive lá, o tempo todo e só ficava murmurando.";
			mes "Enquanto continuava misturando aquelas coisas em seus experimentos.";
			next;
			mes "[Mercador Louitz]";
			mes "E ele continuou murmurando...";
			mes "Palavras como \"Karvodailnirol\" e \"Detrimindexta\".";
			mes "A primeira vez que eu ouvi isso, pensei que era apenas uma conversa doida, sabe?";
			next;
			mes "[Mercador Louitz]";
			mes "Mas este tal de Karvodailnirol e Detrimindexta realmente existem.";
			mes "Eu acho que eles são líquidos especiais que não funcionam como qualquer outro líquido que estamos acostumados.";
			close;
		}
	} else {
		mes "[Mercador Louitz]";
		mes "Oh, é você de novo.";
		next;
		if (select("Falar sobre Molgenstein","Cancelar") == 1) {
			mes "[Mercador Louitz]";
			mes "Você sabe onde ele mora e não foi lá ver?";
			mes "Ele pode ser louco, mas acho que a maioria dos gênios são.";
			mes "Eu acho que seria uma boa ideia se você fosse lá vê-lo.";
			next;
			mes "[Mercador Louitz]";
			mes "Eu acho...";
			mes "É só uma questão de tempo até que um cara esperto como ele.";
			mes "Crie alguma coisa realmente milaculosa, não acha?";
		}
		close;
	}
}

// ------------------------------------------------------------------
geffen,181,114,3	script	Aure Dupon#molgenstain	4_KID01,{
	if (molgenstain == 1) {
		mes "[Aure Dupon]";
		mes "O tempo flui gentilmente e subtamente, mas nenhuma força neste mundo pode pará-lo.";
		mes "A humanidade não é sequer um grão no grande esquema.";
		next;
		switch(select("Conversar","Falar sobre Molgenstein","Cancelar")) {
			case 1:
			mes "[Aure Dupon]";
			mes "Ter metas e foco é bom.";
			mes "Mas ser obsessivo sobre somente uma coisa pode ser muito destrutivo.";
			mes "Relaxe, libere sua mente, e deixe ser levado pelas marés do destino.";
			close;
			case 2:
			mes "[Aure Dupon]";
			mes "Molgenstein...?";
			mes "Este cara é obcecado em conquistar as forças que controlam nosso mundo.";
			mes "Mas você parece estar curioso sobre ele por alguma razão.";
			mes "Hmmm...";
			next;
			mes "[Aure Dupon]";
			mes "Seria melhor se você fosse ver o Molgenstein e julgasse seu caráter por si mesmo.";
			mes "Você deve achá-lo no segundo andar da Casa de Forja de Geffen.";
			molgenstain = 2;
			close;
			case 3:
		}
	} else {
		mes "[Aure Dupon]";
		mes "O tempo flui gentilmente e subtamente, mas nenhuma força neste mundo pode pará-lo.";
		mes "A humanidade não é sequer um grão no grande esquema.";
		next;
		mes "[Aure Dupon]";
		mes "Vá então, e as marés do destino devem levá-lo para onde deve ir.";
		close;
	}
}

// ------------------------------------------------------------------
geffen_in,141,140,3	script	Molgenstein#molgenstain	2_M_MOLGENSTEIN,{
	if (molgenstain == 2) {
		mes "[Molgenstein]";
		mes "Heeheeheehee....";
		mes "Hehehehe.... heeheeheeheehee....";
		next;
		mes "[Molgenstein]";
		mes "Ah...?!";
		mes "Me desculpe se eu te assustei.";
		mes "É porque... eu não vejo uma pessoa viva a muiiiito tempo.";
		mes "Então, é, o que eu posso fazer para você?";
		next;
		if (select("Perguntar sobre sua pesquisa","Cancelar") == 1) {
			mes "[Molgenstein]";
			mes "Heeheeheeheee...";
			mes "Você deve ter ouvido os rumores sobre minhas pesquisas.";
			mes "Sim! Mas mesmo que você já saiba, vou lhe contar sem esconder nada.";
			mes "Acho, não há nada para se esconder.";
			next;
			mes "[Molgenstein]";
			mes "Na verdade, pode-se dizer que minha pesquisa está completa!";
			mes "Nada é impossível para o meu gênio!";
			mes "Bwahaha, é só uma questão de tempo!";
			next;
			mes "[Molgenstein]";
			mes "Você ainda está aqui?";
			mes "Certo, você queria saber sobre minha pesquisa.";
			mes "É na verdade muito simples.";
			mes "Eu estava só tentando inventar um super líquido que poderia derreter qualquer coisa!";
			next;
			mes "[Molgenstein]";
			mes "Não é interessante?";
			mes "Não importa o quão forte você é, você não pode quebrar uma pedra ou aço.";
			mes "Mas com meu novo líquido, você pode derreter coisas, fazendo-as ficar macias como pudim!";
			next;
			mes "[Molgenstein]";
			mes "Eu ainda não posso derreter tudo.";
			mes "Mas eu descobri que você pode misturar coisas que nunca pensou com minha invenção!";
			next;
			mes "[Molgenstein]";
			mes "Você pode fazer muitas coisas que nunca imaginou serem possíveis!";
			mes "Eu posso fazer muitas novas coisas que você nunca tinha imaginado usando este método....";
			mes "Mesmo você querendo!!";
			next;
			mes "[Molgenstein]";
			mes "As endorfinas estão correndo pela minha face ao menos duas vezes mais rápido que o normal!";
			mes "Ah! Estou tão excitado!";
			mes "Eu... Eu não posso esconder isto!";
			molgenstain = 3;
			close;
		}
		close;
	} else if (molgenstain == 3) {
		mes "[Molgenstein]";
		mes ".....";
		mes "Hehehehe....";
		mes "Heeheeheeheehee....";
		next;
		switch(select("Pedir para fazer uma solução","Cancelar")) {
			case 1:
			mes "[Molgenstein]";
			mes "Então...";
			mes "Você quer que eu faça algo totalmente novo, hein? Hehhehheh!";
			mes "Eu amo seu senso de aventura científica!";
			next;
			switch(select("Reagente","Mistura")) {
				case 1:
				mes "[Molgenstein]";
				mes "Ooh...!";
				mes "Você quer fazer um Reagente?";
				mes "Hohohohoho";
				mes "Deixe-me ver o que vamos precisar...";
				next;
				mes "[Molgenstein]";
				mes "Oh, eu lembro, sim, Álcool, e um, é, Detrimindexta e uma Garrafa Vazia para colocá-la dentro.";
				mes "Só estes três itens e 3.000 zeny.";
				next;
				mes "[Molgenstein]";
				mes "Bwahahahah!";
				mes "Oh, eu mal posso esperar para fazer isto!";
				mes "Você está pronto para começar?";
				next;
				if (select("Fazer o Reagente","Cancelar") == 1) {
					if (!countitem(Alchol) || !countitem(Detrimindexta) || !countitem(Empty_Bottle) || Zeny < 3000) {
						mes "[Molgenstein]";
						mes "Heuheuheuheuh.... não é o suficiente... não é o suficiente..";
						mes "Haah...Haah... Vá..... pegue o resto dos materiais!";
						mes "Vamos adiar a diversão até lá...";
						mes "Heuheuheuheuheuh.";
						close;
					} else {
						Zeny -= 3000;
						delitem (Alchol,1);
						delitem (Detrimindexta,1);
						delitem (Empty_Bottle,1);
						getitem (Counteragent,1);
						mes "[Molgenstein]";
						mes "Hee hee hee...";
						mes "Haaaaah......";
						mes "Está pronta!";
						close;
					}
				} else {
					mes "[Molgenstein]";
					mes "Hee hee hee...!";
					mes "Heh... heuheuheuheh....";
					close;
				}
				case 2:
				mes "[Molgenstein]";
				mes "Ooh...!";
				mes "Você quer fazer uma Mistura?";
				mes "Hohohohoho";
				mes "Deixe-me ver o que vamos precisar...";
				next;
				mes "[Molgenstein]";
				mes "Oh, eu lembro, sim, Álcool, e um, é, Karvodailnirol e uma Garrafa Vazia para colocá-la dentro.";
				mes "Só estes três itens e 3.000 zeny.";
				next;
				mes "[Molgenstein]";
				mes "Bwahahahah!";
				mes "Oh, eu mal posso esperar para fazer isto!";
				mes "Você está pronto para começar?";
				next;
				if (select("Fazer a Mistura","Cancelar") == 1) {
					if (!countitem(Alchol) || !countitem(Karvodailnirol) || !countitem(Empty_Bottle) || Zeny < 3000) {
						mes "[Molgenstein]";
						mes "Heuheuheuheuh.... não é o suficiente... não é o suficiente..";
						mes "Haah...Haah... Vá..... pegue o resto dos materiais!";
						mes "Vamos adiar a diversão até lá...";
						mes "Heuheuheuheuheuh.";
						close;
					} else {
						Zeny -= 4000;
						delitem (Alchol,1);
						delitem (Karvodailnirol,1);
						delitem (Empty_Bottle,1);
						getitem (Mixture,1);
						mes "[Molgenstein]";
						mes "Hee hee hee...";
						mes "Haaaaah......";
						mes "Está pronta!";
						close;
					}
				} else {
					mes "[Molgenstein]";
					mes "Hee hee hee...!";
					mes "Heh... heuheuheuheh....";
					close;
				}
			}
			case 2:
			mes "[Molgenstein]";
			mes "Heehee....heheheheh....";
			close;
		}
	} else {
		mes "[Molgenstein]";
		mes "Heeheeheehee...";
		mes "Você não está aqui para ser uma cobaia, está? Provavelmente não. Não desde meu pequeno 'acidente'. Heeheeheeee!";
		close;
	}
}

