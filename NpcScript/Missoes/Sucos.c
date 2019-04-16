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
| - Copyright: Spell Master (15/03/2018)                            |
| - Info: Mini-Quest da fabrica��o de sucos                         |
\*-----------------------------------------------------------------*/

prt_in,49,172,3	script	Marianne#juice	1_M_INNKEEPER,{
	if (!juice) {
		mes "[Dona Marianne]";
		mes "Morrison!!";
		mes "Por favor coma mais frutas!!";
		mes "Por favor!";
		next;
		mes "[Dona Marianne]";
		mes "Suspiro!!";
		mes "Tal pai, tal filho...";
		next;
		if (select("Conversar","Cancelar") == 1) {
			mes "[Dona Marianne]";
			mes "*Suspiro*... Esse � Morrison...";
			mes "Meu primeiro e �nico filho.";
			next;
			mes "[Dona Marianne]";
			mes "Mas a alguns dias ele n�o quer mais comer frutas. Seu rosto est� t�o sem gra�a, porque ele se recusa a comer uma coisa saud�vel. Ele s� quer comer carne. Eu preciso encontrar uma maneira de aliment�-lo com frutas ou legumes....";
			close;
		} else {
			mes "[Dona Marianne]";
			mes "Morrison!! Voc� estar� em apuros se continuar assim!";
			close;
		}
	} else {
		mes "[Dona Marianne]";
		mes "Ufa...!";
		mes "Ainda assim, ele n�o vai comer nada que n�o seja carne.";
		mes "Mas talvez ele coma uma fruta se ela for cortada de uma maneira f�cil de se comer.";
		mes "Talvez se for misturada ao suco...";
		next;
		mes "[Dona Marianne]";
		mes "Ah! Pense a respeito, eu ouvi falar que estavam fazendo sucos de fruta em algum lugar.";
		mes "N�o recordo onde foi...?";
		close;
	}
}

// ------------------------------------------------------------------
prt_in,47,173,3	script	Morrison#juice	4W_M_01,{
	if (!juice) {
		mes "[Pequeno Morrison]";
		mes "Por favor....N�oooo!!!";
		mes "N�o, n�o me fa�a com�-las!";
		mes "Eu n�o posso suportar o sabor das frutas!";
		next;
		if (countitem(Meat) > 0) {
			switch (select("Conversar","Mostrar a Carne","Cancelar")) {
				case 1:
				mes "[Pequeno Morrison]";
				mes "Uma ou duas vezes � o suficiente!";
				mes "Eu me recuso a comer mais frutas!";
				mes "Voc� tem que descasc�-las e n�o h� muito suco para cobrir o gosto nojento delas...";
				next;
				mes "[Pequeno Morrison]";
				mes "E todos eles s�o escorregadios e azedos...";
				mes "Mesmo se eu comer isso, eu ainda sentirei fome.";
				mes "Aaaah!";
				mes "Me traga Carne!";
				close;
				case 2:
				mes "[Pequeno Morrison]";
				mes "Ooh! C-caarne";
				mes "Ah... fo...fooome...";
				mes "O cheiro de carne...";
				mes "Desculpe-me...";
				mes "Pode me dar uma?";
				next;
				if (select("Dar carne","N�o dar carne") == 1) {
					delitem(Meat,1);
					juice = 1;
					mes "[Pequeno Morrison]";
					mes "Uau!!! Carne!!";
					mes "Muito delicioso!";
					mes "Obrigado,";
					mes "Eu acho que posso viver agora.";
					mes "*Mastigando mastigando*";
					close;
				} else {
					mes "[Pequeno Morrison]";
					mes "Aah...!";
					mes "�timo, agora entendi.";
					mes "Adultos s�o todos iguais!";
					close;
				}
				case 3:
				mes "[Pequeno Morrison]";
				mes "Aaaaah!!!";
				mes "N�o importa, eu n�o vou comer frutas e legumes!";
				close;
			}
		}
	} else if (juice < 9 && countitem(Meat)) {
		mes "[Pequeno Morrison]";
		mes "Ooh! C-caarne";
		mes "Ah... fo...fooome...";
		mes "O cheiro de carne...";
		mes "Desculpe-me...";
		mes "Pode me dar uma?";
		next;
		if (select("Dar carne","N�o dar carne") == 1) {
			delitem(Meat,1);
			juice ++;
			mes "[Pequeno Morrison]";
			mes "Uau!!! Carne!!";
			mes "Muito delicioso!";
			mes "Obrigado,";
			mes "Eu acho que posso viver agora.";
			mes "*Mastigando mastigando*";
			close;
		} else {
			mes "[Pequeno Morrison]";
			mes "Aah...!";
			mes "�timo, agora entendi.";
			mes "Adultos s�o todos iguais!";
			close;
		}
	} else if (juice == 10) {
		mes "[Pequeno Morrison]";
		mes "Ah... estou cheio";
		mes "Eu acho que posso viver agora.";
		mes "Voc� n�o precisa me dar mais carne.";
		mes "Eu sinto que irei explodir se comer mais.";
		next;
		mes "[Pequeno Morrison]";
		mes "Ah... e... hum.";
		mes "Pegue isso.";
		next;
		mes "[Pequeno Morrison]";
		mes "� uma coisinha que eu estava guardando para comer mais tarde.";
		mes "Mas j� que voc� me deu Carne, eu acho que posso te dar os doces.";
		getitem(Candy,3);
		getitem(Candy_Striper,1);
		juice = 11;
		close;
	} else {
		mes "[Pequeno Morrison]";
		mes "Aaah!! Eu n�o quero comer mais frutas!";
		next;
		if (select("Conversar","Cancelar") == 1) {
			mes "[Pequeno Morrison]";
			mes "Eu me recuso a comer mais frutas!";
			mes "Voc� tem que descasc�-las e n�o h� muito suco para cobrir o gosto nojento delas...";
			next;
			mes "[Pequeno Morrison]";
			mes "E todos elas s�o escorregadias e azedas...";
			mes "Mesmo se eu com�-las, eu ainda vou sentir fome.";
			close;
		} else {
			mes "[Pequeno Morrison]";
			mes "Aaaaah!!! N�o importa, eu n�o vou comer frutas e legumes!";
			close;
		}
	}
}

// ------------------------------------------------------------------
payon_in03,188,146,5	script	Marx Hansen#juice	4_M_04,{
	if (!checkweight(Grape_Juice,1)) {
		mes "[Mercador Marx Hansen]";
		mes "Espere um momento!";
		mes "Atualmente voc� est� carregando muitos itens com voc�.";
		mes "Por favor volte aqui novamente ap�s voc� guardar alguns de seus itens no Armaz�m Kafra.";
		close;
	}
	if (juice == 11) {
		mes "[Mercador Marx Hansen]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Voc� veio para fazer algum suco de frutas n�o foi?";
		next;
		switch (select("Fazer Suco","Cria��o de sucos?","Cancelar")) {
			case 1:
			mes "[Mercador Marx Hansen]";
			mes "Que tipo de suco de frutas voc� gostaria de fazer?";
			next;
			switch (select("Suco de Ma��","Suco de Banana","Suco de Cenoura","Suco de Uva","Cancelar")) {
				case 1: .@fruit = 512; .@juice = 531; break;
				case 2: .@fruit = 513; .@juice = 532; break;
				case 3: .@fruit = 515; .@juice = 534; break;
				case 4: .@fruit = 514; .@juice = 533; break;
				case 5:
				mes "[Mercador Marx Hansen]";
				mes "Ent�o bem...";
				mes "Vejamos a pr�xima etapa.";
				close;
			}
			if (countitem(.@fruit) || countitem(Empty_Bottle) || Zeny < 3) {
				mes "[Mercador Marx Hansen]";
				mes "Ah n�o...";
				mes "Voc� n�o tem todos os materiais necess�rios.";
				mes "Para criar "+getitemname(.@juice)+", eu preciso de";
				mes "1 "+getitemname(.@fruit)+" e";
				mes "1 Garrafa Vazia.";
				mes "Tamb�m � necess�rio uma taxa de";
				mes "3 zenys como pagamento.";
				next;
				mes "[Mercador Marx Hansen]";
				mes "Quando voc� tiver tudo pronto, fale comigo e eu irei fazer um delicioso suco para voc�.";
				close;
			}
			mes "[Mercador Marx Hansen]";
			mes "Qual a quantidade que voc� deseja?";
			next;
			switch (select("Quantos eu puder","Escolherer uma quantidade","Cancelar")) {
				case 1:
				.@make = countitem(.@fruit);
				if (countitem(Empty_Bottle) < .@make) {
					.@make = countitem(Empty_Bottle);
				}
				if (Zeny/3 < .@make) {
					.@make = Zeny / 3;
				}
				break;
				case 2:
				mes "[Mercador Marx Hansen]";
				mes "Escolha um n�mero menor que 100.";
				mes "Se voc� deseja cancelar, digite '0'.";
				mes "Voc� pode fazer at� "+countitem(.@fruit)+" garrafas de suco.";
				next;
				while (true) {
					input(.@input);
					if (.@input == 0) {
						mes "[Mercador Marx Hansen]";
						mes "Bem ent�o...";
						mes "Volte quando quiser.";
						close;
					} else if (.@input > 100) {
						mes "[Mercador Marx Hansen]";
						mes "Mais do que 100 garrafas � imposs�vel. Escolha uma quantidade diferente.";
						next;
					} else {
						break;
					}
				}
				.@make = .@input;
				break;
				case 3:
				mes "[Mercador Marx Hansen]";
				mes "Bem ent�o...";
				mes "Volte quando quiser.";
				close;
			}
			.@total_zeny = 3 * .@make;
			if (countitem(.@fruit) < .@make || countitem(Empty_Bottle) < .@make || Zeny < .@total_zeny) {
				mes "[Mercador Marx Hansen]";
				mes "Ah n�o...";
				mes "Voc� n�o possui todos os materiais necess�rios.";
				mes "Eu n�o posso te ajudar numa situa��o como essa.";
				mes "Voc� deve coletar o que � necess�rio.";
				close;
			}
			delitem(.@fruit,.@make);
			delitem(Empty_Bottle,.@make);
			Zeny -= .@total_zeny;
			getitem(.@juice,.@make);
			mes "[Mercador Marx Hansen]";
			mes "Aqui est�!";
			mes "O suco fresco e delicioso que prometi.";
			mes "Deve estar muito refrescante e saboroso.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Bem ent�o...";
			mes "Volte quando quiser.";
			close;
			case 2:
			mes "[Mercador Marx Hansen]";
			mes "Antes de os seres humanos serem capazes de desenvolver todas essas sociedades.";
			mes "Eles coletavam frutas das �rvores para sobreviverem.";
			mes "Frutos s�o a ben��o da natureza que nos permitiu existir no mundo.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Desde que a vida se tornou t�o pr�spera, a gera��o mais jovem parece que n�o valoriza mais as frutas.";
			mes "Ent�o, comecei a pensar em maneiras de tornar a fruta mais f�cil de se comer.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Eu percebi que a forma ideal seria fazer sucos de frutas.";
			mes "Eles s�o mais convenientes para se comer e tem um sabor muito melhor.";
			next;
			mes "# Sucos de Fruta Informa��es #";
			mes "^CC4E5C- Suco de Ma�� -^000000";
			mes "Ma�� x 1, Garrafa Vazia x 1,3 zenys.";
			mes "";
			mes "^E3CF57- Suco de Banana -^000000";
			mes "Banana x 1, Garrafa Vazia x 1,3 zenys.";
			mes "";
			mes "^ED9121- Suco de Cenoura -^000000";
			mes "Cenoura x 1, Garrafa Vazia x 1,3 zenys.";
			mes "";
			mes "^CC00FF- Suco de Uva -^000000";
			mes "Uva x 1, Garrafa Vazia x 1,3 zenys.";
			close;
			case 3:
			mes "[Mercador Marx Hansen]";
			mes "Ei!";
			mes "Se voc� encontrar algu�m, avise a elas sobre os sucos!";
			close;
		}
	} else {
		mes "[Mercador Marx Hansen]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Como posso ajud�-l"+(Sex == SEX_MALE ? "o":"a")+"?";
		next;
		if (select("Conversar","Cancelar") == 1) {
			mes "[Mercador Marx Hansen]";
			mes "Antes de os seres humanos serem capazes de desenvolver todas essas sociedades.";
			mes "Eles coletavam frutas das �rvores para sobreviverem.";
			mes "Frutos s�o a ben��o da natureza que nos permitiu existir no mundo.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Desde que a vida se tornou t�o pr�spera, a gera��o mais jovem parece que n�o valoriza mais as frutas.";
			mes "Ent�o, comecei a pensar em maneiras de tornar a fruta mais f�cil de se comer.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Eu percebi que a forma ideal seria fazer sucos de frutas.";
			mes "Eles s�o mais convenientes para se comer e tem um sabor muito melhor.";
			close;
		} else {
			mes "[Mercador Marx Hansen]";
			mes "Ei!";
			mes "Se voc� encontrar";
			mes "algu�m, avise a elas sobre os sucos!";
			close;
		}
	}
}
