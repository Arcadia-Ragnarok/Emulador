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
| - Versão corrigida e otimizada: Spell Master                      |
| - Nota: Fabricação de Tinturas                                    |
| - Update:                                                         |
| * 17/08/2017 - Adicionado Suporte a quest de Mudança de Classe    |
|                para Mercador.                                     |
\*-----------------------------------------------------------------*/

morocc_in,146,99,3	script	Dullihan#dyestuff	1_M_MERCHANT,{
	if (merchantq > 2) {
		if (merchantq >= 4) {
			mes "[Java Dullihan]";
			mes "Muito obrigado.";
			mes "Agora leve esse recibo para a Guilda dos Mercadores.";
			mes "Ele prova que você fez a entrega.";
			close;
		} else if (merchantq_3 == 3318702 || merchantq_3 == 3543625) {
			if (countitem(Merchant_Box_1) || countitem(Merchant_Box_2)) {
				mes "[Java Dullihan]";
				mes "Você deve ter sido enviad"+(Sex == SEX_MALE ? "o":"a")+" pela Guilda dos Mercadores.";
				mes "Para me entregar algo.";
				next;
				if (select("Sim, está aqui sua encomenda", "Não sei do que está falando") == 2) {
					mes "[Java Dullihan]";
					mes "Estranho achei que era você.";
					close;
				}
				mes "[Java Dullihan]";
				mes "Muito obrigado.";
				mes "Agora leve esse recibo para a Guilda dos Mercadores.";
				mes "Ele prova que você fez a entrega.";
				if (countitem(Merchant_Box_1)) {
					merchantq = 4;
					merchantq_3 = 5;
					getitem(Merchant_Voucher_5, 1);
					delitem(Merchant_Box_1, 1);
				} else if (countitem(Merchant_Box_2)) {
					merchantq = 4;
					merchantq_3 = 6;
					getitem(Merchant_Voucher_6, 2);
					delitem(Merchant_Box_2, 1);
				}
				close;
			} else {
				mes "[Java Dullihan]";
				mes "Acho que você não tem a encomenda que pedi a Guilda dos Mercadores.";
				close;
			}
		} else {
			mes "[Java Dullihan]";
			mes "Acho que você não tem a encomenda que pedi a Guilda dos Mercadores.";
			close;
		}
	} else {
		mes "[Java Dullihan]";
		mes "Uau...";
		mes "Que lindo dia...";
		mes "Dias como estes são perfeitos para fazer Tinturas!";
		next;
		switch(select("Conversar", "Fazer Tinturas", "Cancelar")) {
			case 1:
			mes "[Java Dullihan]";
			mes "Eu não tenho muito a dizer.";
			mes "Mas se você quiser saber sobre meu passado.";
			mes "Estou certo que tenho algumas histórias para contar.";
			mes "Gostaria de ouvir alguma?";
			next;
			if (select("Por favor me conte", "Quem sabe depois") == 1) {
				mes "[Java Dullihan]";
				mes "Meu pai tem feito tinturas desde que eu era criança...";
				mes "Eu posso ainda lembrar dele fazendo tinturas o dia inteiro.";
				next;
				mes "[Java Dullihan]";
				mes "Mesmo depois que minha se foi, meu pai manteve-se fazendo tinturas sem descanso.";
				mes "Isto me fez ter raiva dele.";
				mes "Como poderia continuar a fazer tinturas em um momento como aquele?";
				next;
				mes "[Java Dullihan]";
				mes "Eu apenas não compreendia o que meu pai pensava.";
				mes "E me desapontei muito com ele.";
				mes "As ações do meu pai fizeram-me desprezar a fabricação tintura.";
				mes "Assim eu fugi para longe de minha casa.";
				mes "E sobrevivi fazendo vários trabalhos diferentes.";
				next;
				mes "[Java Dullihan]";
				mes "Entretanto, como você pode ver, eu acabei me transformando em um fabricante de tinturas como meu pai.";
				mes "E faz 15 anos desde que eu comecei a fazer este tipo de coisa...";
				next;
				mes "[Java Dullihan]";
				mes "Agora que tenho feito isto por tanto tempo...";
				mes "Eu posso finalmente compreender porque meu pai amava tanto seu trabalho.";
				next;
				mes "[Java Dullihan]";
				mes "E porque ele sacrificou tudo que teve por este trabalho...";
				next;
				mes "[Java Dullihan]";
				mes "Talvez por causa de como as cores tornam-se cada vez mais e mais lindas...";
				mes "Talvez quisesse encontrar sua própria cor perfeita...";
				next;
				mes "[Java Dullihan]";
				mes "Agora eu tenho queda para as cores...";
				mes "Porque...";
				mes "Eu estou trabalhando com a mesma paixão que ele tinha quando vivia.";
				mes "Eu posso sentir as cores dentro de minha alma.";
				mes "Eu sei que é duro compreender, mas você verá que há um significado.";
				next;
				mes "[Java Dullihan]";
				mes "Pai, eu faço estas tinturas para você....";
				close;
			}
			mes "[Java Dullihan]";
			mes "Hahahaha...";
			mes "Eu não tenho culpa de não poder adivinhar, o que quer aqui, com um velho fabricante de um tinturas....";
			mes "Hahahaha...";
			close;
			case 2:
			mes "[Java Dullihan]";
			mes "Tudo Bem!";
			mes "Eu farei a cor exatamente como você quer.";
			mes "O custo da tintura dependerá de sua qualidade.";
			next;
			mes "[Java Dullihan]";
			mes "Não seja intimidado pelos preços, elas são todas minhas obras-primas.";
			next;
			mes "[Java Dullihan]";
			mes "Então que cor você quer?";
			next;
			switch(select("Tintura Vermelha", "Tintura Amarela", "Tintura Azul", "Tintura Verde", "Tintura Laranja", "Tintura Violeta", "Tintura Branca", "Tintura Preta", "Cancelar")) {
				case 1: callsub(S_MakeDye, 1, 1); break;
				case 2: callsub(S_MakeDye, 2, 1); break;
				case 3: callsub(S_MakeDye, 3, 2); break;
				case 4: callsub(S_MakeDye, 4, 3); break;
				case 5: callsub(S_MakeDye, 5, 4); break;
				case 6: callsub(S_MakeDye, 6, 4); break;
				case 7: callsub(S_MakeDye, 7, 4); break;
				case 8: callsub(S_MakeDye, 8, 4); break;
				case 9:
				mes "[Java Dullihan]";
				mes "Aaaahhhh!!";
				mes "Mudou de idéia!?";
				mes "Então tudo bem...";
				close;
			}
			case 3:
			mes "[Java Dullihan]";
			mes "Eu tenho ótimas habilidades para fazer tinturas.";
			mes "Quando precisar de tinturas, por favor, venha até mim.";
			mes "Eu vou criá-las para você por um preço bastante razoável.";
			close;
		}
	}

	S_MakeDye:
	switch(getarg(0)) {
		case 1:
		mes "[Java Dullihan]";
		mes "Hmm...";
		mes "Para fazer uma Tintura Vermelha, eu preciso de ^0000ff30 Ervas Vermelhas, 1 Antígeno e 1 Garrafa Vazia^000000.";
		mes "O custo de minha mão-de-obra será de 3000 Zeny.";
		setarray(.@item[0],  507, 973, 713);
		setarray(.@count[0], 30,  1,   1);
		.@cost = 3000;
		.@dyestuff = 975;
		break;
		case 2:
		mes "[Java Dullihan]";
		mes "Hmm...";
		mes "Para fazer uma Tintura Amarela, eu preciso de ^0000ff30 Ervas Amarelas, 1 Antígeno, e 1 Garrafa Vazia^000000.";
		mes "O custo de minha mão de obra será de 3000 Zeny.";
		setarray(.@item[0],  508, 973, 713);
		setarray(.@count[0], 30,  1,   1);
		.@cost = 3000;
		.@dyestuff = 976;
		break;
		case 3:
		mes "[Java Dullihan]";
		mes "Hmm...";
		mes "Para fazer uma Tintura Azul, eu preciso de ^0000ff20 Ervas Azuis, 1 Antígeno, e 1 Garrafa Vazia^000000.";
		mes "Trabalhar com ervas azuis é mais difícil, então o custo de minha mão-de-obra será de 3500 Zeny.";
		setarray(.@item[0],  510, 973, 713);
		setarray(.@count[0], 20,  1,   1);
		.@cost = 3500;
		.@dyestuff = 978;
		break;
		case 4:
		mes "[Java Dullihan]";
		mes "Hm...";
		mes "Para fazer uma Tintura Verde, eu preciso de ^0000ff5 Ervas Azuis, 20 Ervas Verdes, 20 Ervas Amarelas, 1 Antígeno, 1 Mistura, e 1 Garrafa Vazia^000000.";
		mes "O custo de minha mão-de-obra será de 5000 Zeny.";
		setarray(.@item[0],  510, 511, 508, 974, 973, 713);
		setarray(.@count[0], 5,   20,  20,  1,   1,   1);
		.@cost = 5000;
		.@dyestuff = 979;
		break;
		case 5:
		mes "[Java Dullihan]";
		mes "Hmm...";
		mes "Para fazer uma Tintura Laranja, eu preciso de ^0000ff20 Ervas Vermelha, 20 Ervas Amarelas, 1 Antígeno, 1 Mistura, e 1 Garrafa Vazia^000000.";
		mes "O custo de minha mão-de-obra será de 5000 Zeny.";
		setarray(.@item[0],  507, 508, 974, 973, 713);
		setarray(.@count[0], 20,  20,  1,   1,   1);
		.@cost = 5000;
		.@dyestuff = 980;
		break;
		case 6:
		mes "[Java Dullihan]";
		mes "Hmm...";
		mes "Para fazer uma Tintura Violeta , eu preciso de ^0000ff10 Ervas Azuis, 30 Ervas Vermelhas, 1 Antígeno, 1 Mistura, e 1 Garrafa Vazia^000000.";
		mes "O custo de minha mão-de-obra será de 5000 Zeny.";
		setarray(.@item[0],  510, 507, 974, 973, 713);
		setarray(.@count[0], 10,  30,  1,   1,   1);
		.@cost = 5000;
		.@dyestuff = 981;
		break;
		case 7:
		mes "[Java Dullihan]";
		mes "Hmm...";
		mes "Para fazer uma Tintura Branca , eu preciso de ^0000ff30 Ervas Brancas, 1 Antígeno, e 1 Garrafa Vazia^000000.";
		mes "O custo de minha mão-de-obra será de 3000 Zeny.";
		setarray(.@item[0],  509, 973, 713);
		setarray(.@count[0], 30,  1,   1);
		.@cost = 3000;
		.@dyestuff = 982;
		break;
		case 8:
		mes "[Java Dullihan]";
		mes "Hmm...";
		mes "Para fazer uma Tintura Preta , eu preciso de ^0000ff30 Ervas Vermelhas, Amarelas, e Verdes, 5 Ervas Azuis, 1 Antígeno, 1 Mistura, e 1 Garrafa Vazia^000000.";
		mes "Esta é a que tintura consome mais tempo e a mais difícil de se fazer.";
		mes "Terei que cobrar uma taxa-de-mão de obra de 7000 Zeny.";
		setarray(.@item[0],  507, 508, 511, 510, 974, 973, 713);
		setarray(.@count[0], 30,  30,  30,  5,   1,   1,   1);
		.@cost = 7000;
		.@dyestuff = 983;
		break;
	}
	next;
	mes "[Java Dullihan]";
	switch(getarg(1)) {
		case 1: mes " Ah! Eu acho que você tem tudo pronto. Gostaria de iniciar o processo?"; break;
		case 2: mes " Ok! Eu acho que você tem tudo pronto. Gostaria de iniciar o processo?"; break;
		case 3: mes " Ok! Eu acho que você tem tudo pronto. Podemos começar o processo?"; break;
		case 4: mes " Ok! Eu acho que você tem tudo pronto. Gostaria de iniciar o processo?"; break;
	}
	next;
	if (select("Fazer Tinturas", "Cancelar") == 1) {
		.@size = getarraysize(.@item);
		for (.@i = 0; .@i < .@size; ++.@i) {
			if (countitem(.@item[.@i]) < .@count[.@i]) { break; }
		}
		if (.@i < .@size || Zeny < .@cost) {
			mes "[Java Dullihan]";
			mes "Hmm...";
			mes "Eu não posso fazer o que você quer sem os materiais necessários...";
			mes "Porque você não traz tudo certo da próxima vez?";
			close;
		}
		for (.@i = 0; .@i < .@size; ++.@i) {
			delitem(.@item[.@i], .@count[.@i]);
		}
		Zeny -= .@cost;
		getitem(.@dyestuff, 1);
		mes "[Java Dullihan]";
		mes "Hmm...";
		mes "Me saí melhor do que esperava.";
		mes "Uma cor muito rica.";
		mes "Claro que eu vou continuar tentando para melhorar sempre!";
		next;
		mes "[Java Dullihan]";
		mes "Ok, então.";
		mes "Fale comigo quando precisa de mais Tinturas!";
		close;
	}
	mes "[Java Dullihan]";
	mes "Aaaahhhh!!";
	mes "Mudou de idéia!?";
	mes "Então tudo bem...";
	return;
}
