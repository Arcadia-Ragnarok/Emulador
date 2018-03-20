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
| - Nota: Necess�ria para quest de mudan�a de classe para Alquimista|
\*-----------------------------------------------------------------*/

alberta_in,133,55,3	script	Louitz#molgenstain	4_M_02,{
	if (!molgenstain) {
		mes "[Mercador Louitz]";
		mes "Ol�.";
		mes "Como vai?";
		next;
		if (countitem(Detrimindexta) || countitem(Karvodailnirol)) {
			switch(select("Conversar","Falar sobre as solu��es","Cancelar")) {
				case 1:
				mes "[Mercador Louitz]";
				mes "Eu estive em Geffen h� algum tempo tentando encontrar ferramentas m�gicas.";
				mes "Ent�o escutei uma conversa sobre um cientista louco.";
				mes "Eu fiquei bem interessado nesse assunto e procurei por este cara.";
				next;
				mes "[Mercador Louitz]";
				mes "Aquele cara era maluco.";
				mes "Ele nem soube que eu estive l�, o tempo todo e s� ficava murmurando.";
				mes "Enquanto continuava misturando aquelas coisas em seus experimentos.";
				next;
				mes "[Mercador Louitz]";
				mes "E ele continuou murmurando...";
				mes "Palavras como \"Karvodailnirol\" e \"Detrimindexta\".";
				mes "A primeira vez que eu ouvi isso, pensei que era apenas uma conversa doida, sabe?";
				next;
				mes "[Mercador Louitz]";
				mes "Mas este tal de Karvodailnirol e Detrimindexta realmente existem.";
				mes "Eu acho que eles s�o l�quidos especiais que n�o funcionam como qualquer outro l�quido que estamos acostumados.";
				close;
				case 2:
				mes "[Mercador Louitz]";
				mes "Ei, estas s�o aquelas solu��es que os cientistas vem comentando.";
				mes "Voc� foi capaz de conseguir uma delas?";
				mes "Agora, eu n�o tenho a m�nima ideia do que fazer com elas...";
				next;
				mes "[Mercador Louitz]";
				mes "Ah, sobre o cientista louco voc� deveria saber.";
				mes "Eu n�o lembro exatamente";
				mes "onde ele mora.";
				mes "Mas eu sei que � em Geffen e que seu nome � ^0000FFMolgenstein^000000.";
				next;
				mes "[Mercador Louitz]";
				mes "Hmm...";
				mes "� melhor voc� dar uma volta em Geffen primeiro, pergunte � algu�m antes.";
				mes "Tenho certeza que algu�m sabe onde encontrar o Molgenstein.";
				molgenstain = 1;
				close;
				case 3:
				mes "[Mercador Louitz]";
				mes "Vejo voc� por a�.";
				mes "Cuide-se...";
				close;
			}
		} else {
			mes "[Mercador Louitz]";
			mes "Eu estive em Geffen h� algum tempo tentando encontrar ferramentas m�gicas.";
			mes "Ent�o escutei uma conversa sobre um cientista louco.";
			mes "Eu fiquei bem interessado nesse assunto e procurei por este cara.";
			next;
			mes "[Mercador Louitz]";
			mes "Aquele cara era maluco.";
			mes "Ele nem soube que eu estive l�, o tempo todo e s� ficava murmurando.";
			mes "Enquanto continuava misturando aquelas coisas em seus experimentos.";
			next;
			mes "[Mercador Louitz]";
			mes "E ele continuou murmurando...";
			mes "Palavras como \"Karvodailnirol\" e \"Detrimindexta\".";
			mes "A primeira vez que eu ouvi isso, pensei que era apenas uma conversa doida, sabe?";
			next;
			mes "[Mercador Louitz]";
			mes "Mas este tal de Karvodailnirol e Detrimindexta realmente existem.";
			mes "Eu acho que eles s�o l�quidos especiais que n�o funcionam como qualquer outro l�quido que estamos acostumados.";
			close;
		}
	} else {
		mes "[Mercador Louitz]";
		mes "Oh, � voc� de novo.";
		next;
		if (select("Falar sobre Molgenstein","Cancelar") == 1) {
			mes "[Mercador Louitz]";
			mes "Voc� sabe onde ele mora e n�o foi l� ver?";
			mes "Ele pode ser louco, mas acho que a maioria dos g�nios s�o.";
			mes "Eu acho que seria uma boa ideia se voc� fosse l� v�-lo.";
			next;
			mes "[Mercador Louitz]";
			mes "Eu acho...";
			mes "� s� uma quest�o de tempo at� que um cara esperto como ele.";
			mes "Crie alguma coisa realmente milaculosa, n�o acha?";
		}
		close;
	}
}

// ------------------------------------------------------------------
geffen,181,114,3	script	Aure Dupon#molgenstain	4_KID01,{
	if (molgenstain == 1) {
		mes "[Aure Dupon]";
		mes "O tempo flui gentilmente e subtamente, mas nenhuma for�a neste mundo pode par�-lo.";
		mes "A humanidade n�o � sequer um gr�o no grande esquema.";
		next;
		switch(select("Conversar","Falar sobre Molgenstein","Cancelar")) {
			case 1:
			mes "[Aure Dupon]";
			mes "Ter metas e foco � bom.";
			mes "Mas ser obsessivo sobre somente uma coisa pode ser muito destrutivo.";
			mes "Relaxe, libere sua mente, e deixe ser levado pelas mar�s do destino.";
			close;
			case 2:
			mes "[Aure Dupon]";
			mes "Molgenstein...?";
			mes "Este cara � obcecado em conquistar as for�as que controlam nosso mundo.";
			mes "Mas voc� parece estar curioso sobre ele por alguma raz�o.";
			mes "Hmmm...";
			next;
			mes "[Aure Dupon]";
			mes "Seria melhor se voc� fosse ver o Molgenstein e julgasse seu car�ter por si mesmo.";
			mes "Voc� deve ach�-lo no segundo andar da Casa de Forja de Geffen.";
			molgenstain = 2;
			close;
			case 3:
		}
	} else {
		mes "[Aure Dupon]";
		mes "O tempo flui gentilmente e subtamente, mas nenhuma for�a neste mundo pode par�-lo.";
		mes "A humanidade n�o � sequer um gr�o no grande esquema.";
		next;
		mes "[Aure Dupon]";
		mes "V� ent�o, e as mar�s do destino devem lev�-lo para onde deve ir.";
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
		mes "� porque... eu n�o vejo uma pessoa viva a muiiiito tempo.";
		mes "Ent�o, �, o que eu posso fazer para voc�?";
		next;
		if (select("Perguntar sobre sua pesquisa","Cancelar") == 1) {
			mes "[Molgenstein]";
			mes "Heeheeheeheee...";
			mes "Voc� deve ter ouvido os rumores sobre minhas pesquisas.";
			mes "Sim! Mas mesmo que voc� j� saiba, vou lhe contar sem esconder nada.";
			mes "Acho, n�o h� nada para se esconder.";
			next;
			mes "[Molgenstein]";
			mes "Na verdade, pode-se dizer que minha pesquisa est� completa!";
			mes "Nada � imposs�vel para o meu g�nio!";
			mes "Bwahaha, � s� uma quest�o de tempo!";
			next;
			mes "[Molgenstein]";
			mes "Voc� ainda est� aqui?";
			mes "Certo, voc� queria saber sobre minha pesquisa.";
			mes "� na verdade muito simples.";
			mes "Eu estava s� tentando inventar um super l�quido que poderia derreter qualquer coisa!";
			next;
			mes "[Molgenstein]";
			mes "N�o � interessante?";
			mes "N�o importa o qu�o forte voc� �, voc� n�o pode quebrar uma pedra ou a�o.";
			mes "Mas com meu novo l�quido, voc� pode derreter coisas, fazendo-as ficar macias como pudim!";
			next;
			mes "[Molgenstein]";
			mes "Eu ainda n�o posso derreter tudo.";
			mes "Mas eu descobri que voc� pode misturar coisas que nunca pensou com minha inven��o!";
			next;
			mes "[Molgenstein]";
			mes "Voc� pode fazer muitas coisas que nunca imaginou serem poss�veis!";
			mes "Eu posso fazer muitas novas coisas que voc� nunca tinha imaginado usando este m�todo....";
			mes "Mesmo voc� querendo!!";
			next;
			mes "[Molgenstein]";
			mes "As endorfinas est�o correndo pela minha face ao menos duas vezes mais r�pido que o normal!";
			mes "Ah! Estou t�o excitado!";
			mes "Eu... Eu n�o posso esconder isto!";
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
		switch(select("Pedir para fazer uma solu��o","Cancelar")) {
			case 1:
			mes "[Molgenstein]";
			mes "Ent�o...";
			mes "Voc� quer que eu fa�a algo totalmente novo, hein? Hehhehheh!";
			mes "Eu amo seu senso de aventura cient�fica!";
			next;
			switch(select("Reagente","Mistura")) {
				case 1:
				mes "[Molgenstein]";
				mes "Ooh...!";
				mes "Voc� quer fazer um Reagente?";
				mes "Hohohohoho";
				mes "Deixe-me ver o que vamos precisar...";
				next;
				mes "[Molgenstein]";
				mes "Oh, eu lembro, sim, �lcool, e um, �, Detrimindexta e uma Garrafa Vazia para coloc�-la dentro.";
				mes "S� estes tr�s itens e 3.000 zeny.";
				next;
				mes "[Molgenstein]";
				mes "Bwahahahah!";
				mes "Oh, eu mal posso esperar para fazer isto!";
				mes "Voc� est� pronto para come�ar?";
				next;
				if (select("Fazer o Reagente","Cancelar") == 1) {
					if (!countitem(Alchol) || !countitem(Detrimindexta) || !countitem(Empty_Bottle) || Zeny < 3000) {
						mes "[Molgenstein]";
						mes "Heuheuheuheuh.... n�o � o suficiente... n�o � o suficiente..";
						mes "Haah...Haah... V�..... pegue o resto dos materiais!";
						mes "Vamos adiar a divers�o at� l�...";
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
						mes "Est� pronta!";
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
				mes "Voc� quer fazer uma Mistura?";
				mes "Hohohohoho";
				mes "Deixe-me ver o que vamos precisar...";
				next;
				mes "[Molgenstein]";
				mes "Oh, eu lembro, sim, �lcool, e um, �, Karvodailnirol e uma Garrafa Vazia para coloc�-la dentro.";
				mes "S� estes tr�s itens e 3.000 zeny.";
				next;
				mes "[Molgenstein]";
				mes "Bwahahahah!";
				mes "Oh, eu mal posso esperar para fazer isto!";
				mes "Voc� est� pronto para come�ar?";
				next;
				if (select("Fazer a Mistura","Cancelar") == 1) {
					if (!countitem(Alchol) || !countitem(Karvodailnirol) || !countitem(Empty_Bottle) || Zeny < 3000) {
						mes "[Molgenstein]";
						mes "Heuheuheuheuh.... n�o � o suficiente... n�o � o suficiente..";
						mes "Haah...Haah... V�..... pegue o resto dos materiais!";
						mes "Vamos adiar a divers�o at� l�...";
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
						mes "Est� pronta!";
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
		mes "Voc� n�o est� aqui para ser uma cobaia, est�? Provavelmente n�o. N�o desde meu pequeno 'acidente'. Heeheeheeee!";
		close;
	}
}

