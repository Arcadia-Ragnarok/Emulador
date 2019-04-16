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
| - Copyright: Spell Master (07/04/2017)                            |
| - Info: Loteria que troca pontos de reserva por itens             |
\*-----------------------------------------------------------------*/

aldeba_in,84,166,4	script	Denise#alde	4_F_KAFRA1,{
	cutin("kafra_01",2);
	mes "[Kafra Denise]";
	mes "Estamos oferecendo uma promo��o especial para nossos clientes.";
	mes "Voc� pode ganhar pr�mios usando seus ^ff5533Pontos de Reserva Especial^000000.";
	next;
	if (RESRVPTS < 5000) {
		mes "[Kafra Denise]";
		mes "� necess�rio possuir pelo menos 5.000 pontos de reserva aculados para participar.";
		mes "Voc� ganha pontos de reserva toda vez que usa os servi�os da corpora��o kafra.";
		if (RESRVPTS) {
			next;
			mes "N�o deixe de participar dessa promo��o.";
			mes "Caso n�o saiba, seu saldo �: "+RESRVPTS+" pontos.";
		}
		close2; cutin("",255); end;
	}
	mes "[Kafra Denise]";
	mes "Voc� gostaria de usar seus pontos?";
	next;
	if (select("Sim por favor.","Talvez depois.") == 1) {
		mes "[Kafra Denise]";
		mes "Voc� tem essa quantidade de pontos: ^5544FF"+RESRVPTS+"^000000.";
		mes "Fa�a uma escolha de acordo com seus pontos.";
		next;
		mes "[Kafra Denise]";
		mes "Quanto maior a aposta maior ser�o as chances!";
		mes "E melhor ser�o os itens que poder� ganhar.";
		next;
		switch (select("5.000 Pontos","7.000 Pontos","1.0000 Pontos","Cancelar")) {
			case 1: .@points = 5000;  .@select = 1; break;
			case 2: .@points = 7000;  .@select = 2; break;
			case 3: .@points = 10000; .@select = 3; break;
			case 4:
			mes "[Kafra Denise]";
			mes "Tudo bem.";
			mes "Ganhe mais Pontos de Reserva Especial usando os Servi�os da Corpora��o Kafra encontrado por toda Rune-Midgard.";
			close2; cutin("",255); end;
		}
		if (RESRVPTS < .@points) {
			mes "[Kafra Denise]";
			mes "Unn...?";
			mes "Temos um problema, seus pontos de reserva n�o s�o o suficientes para essa aposta.";
			mes "Voc� pode almentar seus pontos de reserva utilizado-se dos Servi�os da Corpora��o Kafra.";
			close2; cutin("",255); end;
		} else if (!checkweight(Yggdrasilberry,100)) {
			mes "[Kafra Denise]";
			mes "Unn...?";
			mes "Temos um problema, parece que voc� carrega muito peso no momento.";
			mes "Ent�o poderia ganhar itens e n�o poder carregar-los.";
			next;
			mes "[Kafra Denise]";
			mes "Porque n�o procura uma das funcion�rias da Corpora��o Kafra, e deixa um pouco de seus itens no armaz�m?";
			next;
			mes "[Kafra Denise]";
			mes "Pense pelo lado positivo.";
			mes "Assim voc� acumular� muito mais pontos de reserva!";
			mes "Nessa mesma sala h� uma funcion�ria encarregada para lhe atender.";
			close2; cutin("",255); end;
		} else {
			mes "[Kafra Denise]";
			mes "Ent�o uma aposta de "+.@points+" pontos.";
			mes "Vou girar uma roteta e veremos qual pr�mio voc� ganhar�.";
			mes "Quantas vezes quer que eu gire a roleta?";
			next;
			switch (select("1 Vez","3 Veses","5 Vezes","Mudei de ideia")) {
				case 1: .@turn = 1; break;
				case 2: .@turn = 3; break;
				case 3: .@turn = 5; break;
				case 4:
				mes "[Kafra Denise]";
				mes "Tudo bem.";
				mes "Ganhe mais Pontos de Reserva Especial usando os Servi�os da Corpora��o Kafra encontrado por toda Rune-Midgard.";
				close2; cutin("",255); end;
			}
			mes "Girando a Roleta";
			mes "Boa Sorte!!!";
			RESRVPTS -= .@points;
			next;
			while (true) {
				if (.@turn) {
					mes "[Kafra Denise]";
					mes "Girando a Roleta....";
					mes "Numero de Giros "+.@turn+".";
					next;
					.@rand = rand(10);
					.@turn --;
					continue;
				}
				break;
			}
			if (.@rand <= 7) {
				.@rand += .@select;
			}
			mes "[Kafra Denise]";
			mes "J� temos o resultado!";
			mes "Vamos ver qual pr�mio voc� ganhou!";
			next;
			switch (.@rand) {
				case 10:
				case 9:
				mes "[Kafra Denise]";
				mes "NOSSA!! Que inc�vel voc� ganhou o primeiro pr�mio!";
				mes "Meus Parab�ns!!!!";
				if (.@select == 1) { getitem(Wooden_Mail,1); }
				if (.@select == 2) { getitem(Wooden_Mail,1); getitem(Mantle,1); }
				if (.@select == 3) { getitem(Wooden_Mail,1); getitem(Mantle,1); getitem(Berserk_Potion,10); getitem(Yggdrasilberry,3); getitem(Seed_Of_Yggdrasil,10); }
				close2; cutin("",255); end;
				case 8:
				case 7:
				mes "[Kafra Denise]";
				mes "NOSSA!! Que inc�vel voc� ganhou o segundo pr�mio!";
				mes "Meus Parab�ns!!!!";
				if (.@select == 1) { getitem(Shoes,1); }
				if (.@select == 2) { getitem(Shoes,1); getitem(Cap,1); }
				if (.@select == 3) { getitem(Shoes,1); getitem(Cap,1); getitem(Sunglasses,1); getitem(Royal_Jelly,3); getitem(Seed_Of_Yggdrasil,1); getitem(Yggdrasilberry,3); getitem(Royal_Jelly,10); }
				close2; cutin("",255); end;
				case 6:
				case 5:
				mes "[Kafra Denise]";
				mes "Que maravilha! Voc� ganhou o terceiro pr�mio!";
				mes "Meus Parab�ns!!!!";
				if (.@select == 1) { getitem(Wing_Of_Butterfly,4); }
				if (.@select == 2) { getitem(Wing_Of_Butterfly,4); getitem(Blue_Potion,3); getitem(White_Potion,15); }
				if (.@select == 3) { getitem(Wing_Of_Butterfly,4); getitem(Blue_Potion,3); getitem(White_Potion,30); getitem(Glasses,1); }
				close2; cutin("",255); end;
				case 4:
				case 3:
				mes "[Kafra Denise]";
				mes "Que maravilha! Voc� ganhou o quarto pr�mio!";
				mes "Meus Parab�ns!!!!";
				if (.@select == 1) { getitem(Sweet_Potato,100); getitem(Red_Potion,150); }
				if (.@select == 2) { getitem(Sweet_Potato,100); getitem(Red_Potion,150); getitem(Orange_Potion,150); }
				if (.@select == 3) { getitem(Sweet_Potato,100); getitem(Red_Potion,150); getitem(Orange_Potion,150); getitem(Blue_Potion,15); }
				close2; cutin("",255); end;
				default:
				mes "[Kafra Denise]";
				mes "Muito bem! Voc� ganhou o quinto pr�mio!";
				mes "Meus Parab�ns!!!!";
				if (.@select == 1) { getitem(Sweet_Potato,50); };
				if (.@select == 2) { getitem(Red_Potion,100); };
				if (.@select == 3) { getitem(Sweet_Potato,150); getitem(Red_Potion,300); };
				close2; cutin("",255); end;
			}
		}
	}
	mes "[Kafra Denise]";
	mes "Tudo bem.aaa";
	mes "Ganhe mais Pontos de Reserva Especial usando os Servi�os da Corpora��o Kafra encontrado por toda Rune-Midgard.";
	close2; cutin("",255); end;
}
