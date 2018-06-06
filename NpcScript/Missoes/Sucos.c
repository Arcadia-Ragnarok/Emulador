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
| - Info: Mini-Quest da fabricação de sucos                         |
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
			mes "*Suspiro*... Esse é Morrison...";
			mes "Meu primeiro e único filho.";
			next;
			mes "[Dona Marianne]";
			mes "Mas a alguns dias ele não quer mais comer frutas. Seu rosto está tão sem graça, porque ele se recusa a comer uma coisa saudável. Ele só quer comer carne. Eu preciso encontrar uma maneira de alimentá-lo com frutas ou legumes....";
			close;
		} else {
			mes "[Dona Marianne]";
			mes "Morrison!! Você estará em apuros se continuar assim!";
			close;
		}
	} else {
		mes "[Dona Marianne]";
		mes "Ufa...!";
		mes "Ainda assim, ele não vai comer nada que não seja carne.";
		mes "Mas talvez ele coma uma fruta se ela for cortada de uma maneira fácil de se comer.";
		mes "Talvez se for misturada ao suco...";
		next;
		mes "[Dona Marianne]";
		mes "Ah! Pense a respeito, eu ouvi falar que estavam fazendo sucos de fruta em algum lugar.";
		mes "Não recordo onde foi...?";
		close;
	}
}

// ------------------------------------------------------------------
prt_in,47,173,3	script	Morrison#juice	4W_M_01,{
	if (!juice) {
		mes "[Pequeno Morrison]";
		mes "Por favor....Nãoooo!!!";
		mes "Não, não me faça comê-las!";
		mes "Eu não posso suportar o sabor das frutas!";
		next;
		if (countitem(Meat) > 0) {
			switch (select("Conversar","Mostrar a Carne","Cancelar")) {
				case 1:
				mes "[Pequeno Morrison]";
				mes "Uma ou duas vezes é o suficiente!";
				mes "Eu me recuso a comer mais frutas!";
				mes "Você tem que descascá-las e não há muito suco para cobrir o gosto nojento delas...";
				next;
				mes "[Pequeno Morrison]";
				mes "E todos eles são escorregadios e azedos...";
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
				if (select("Dar carne","Não dar carne") == 1) {
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
					mes "Ótimo, agora entendi.";
					mes "Adultos são todos iguais!";
					close;
				}
				case 3:
				mes "[Pequeno Morrison]";
				mes "Aaaaah!!!";
				mes "Não importa, eu não vou comer frutas e legumes!";
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
		if (select("Dar carne","Não dar carne") == 1) {
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
			mes "Ótimo, agora entendi.";
			mes "Adultos são todos iguais!";
			close;
		}
	} else if (juice == 10) {
		mes "[Pequeno Morrison]";
		mes "Ah... estou cheio";
		mes "Eu acho que posso viver agora.";
		mes "Você não precisa me dar mais carne.";
		mes "Eu sinto que irei explodir se comer mais.";
		next;
		mes "[Pequeno Morrison]";
		mes "Ah... e... hum.";
		mes "Pegue isso.";
		next;
		mes "[Pequeno Morrison]";
		mes "É uma coisinha que eu estava guardando para comer mais tarde.";
		mes "Mas já que você me deu Carne, eu acho que posso te dar os doces.";
		getitem(Candy,3);
		getitem(Candy_Striper,1);
		juice = 11;
		close;
	} else {
		mes "[Pequeno Morrison]";
		mes "Aaah!! Eu não quero comer mais frutas!";
		next;
		if (select("Conversar","Cancelar") == 1) {
			mes "[Pequeno Morrison]";
			mes "Eu me recuso a comer mais frutas!";
			mes "Você tem que descascá-las e não há muito suco para cobrir o gosto nojento delas...";
			next;
			mes "[Pequeno Morrison]";
			mes "E todos elas são escorregadias e azedas...";
			mes "Mesmo se eu comê-las, eu ainda vou sentir fome.";
			close;
		} else {
			mes "[Pequeno Morrison]";
			mes "Aaaaah!!! Não importa, eu não vou comer frutas e legumes!";
			close;
		}
	}
}

// ------------------------------------------------------------------
payon_in03,188,146,5	script	Marx Hansen#juice	4_M_04,{
	if (!checkweight(Grape_Juice,1)) {
		mes "[Mercador Marx Hansen]";
		mes "Espere um momento!";
		mes "Atualmente você está carregando muitos itens com você.";
		mes "Por favor volte aqui novamente após você guardar alguns de seus itens no Armazém Kafra.";
		close;
	}
	if (juice == 11) {
		mes "[Mercador Marx Hansen]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Você veio para fazer algum suco de frutas não foi?";
		next;
		switch (select("Fazer Suco","Criação de sucos?","Cancelar")) {
			case 1:
			mes "[Mercador Marx Hansen]";
			mes "Que tipo de suco de frutas você gostaria de fazer?";
			next;
			switch (select("Suco de Maçã","Suco de Banana","Suco de Cenoura","Suco de Uva","Cancelar")) {
				case 1: .@fruit = 512; .@juice = 531; break;
				case 2: .@fruit = 513; .@juice = 532; break;
				case 3: .@fruit = 515; .@juice = 534; break;
				case 4: .@fruit = 514; .@juice = 533; break;
				case 5:
				mes "[Mercador Marx Hansen]";
				mes "Então bem...";
				mes "Vejamos a próxima etapa.";
				close;
			}
			if (countitem(.@fruit) || countitem(Empty_Bottle) || Zeny < 3) {
				mes "[Mercador Marx Hansen]";
				mes "Ah não...";
				mes "Você não tem todos os materiais necessários.";
				mes "Para criar "+getitemname(.@juice)+", eu preciso de";
				mes "1 "+getitemname(.@fruit)+" e";
				mes "1 Garrafa Vazia.";
				mes "Também é necessário uma taxa de";
				mes "3 zenys como pagamento.";
				next;
				mes "[Mercador Marx Hansen]";
				mes "Quando você tiver tudo pronto, fale comigo e eu irei fazer um delicioso suco para você.";
				close;
			}
			mes "[Mercador Marx Hansen]";
			mes "Qual a quantidade que você deseja?";
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
				mes "Escolha um número menor que 100.";
				mes "Se você deseja cancelar, digite '0'.";
				mes "Você pode fazer até "+countitem(.@fruit)+" garrafas de suco.";
				next;
				while (true) {
					input(.@input);
					if (.@input == 0) {
						mes "[Mercador Marx Hansen]";
						mes "Bem então...";
						mes "Volte quando quiser.";
						close;
					} else if (.@input > 100) {
						mes "[Mercador Marx Hansen]";
						mes "Mais do que 100 garrafas é impossível. Escolha uma quantidade diferente.";
						next;
					} else {
						break;
					}
				}
				.@make = .@input;
				break;
				case 3:
				mes "[Mercador Marx Hansen]";
				mes "Bem então...";
				mes "Volte quando quiser.";
				close;
			}
			.@total_zeny = 3 * .@make;
			if (countitem(.@fruit) < .@make || countitem(Empty_Bottle) < .@make || Zeny < .@total_zeny) {
				mes "[Mercador Marx Hansen]";
				mes "Ah não...";
				mes "Você não possui todos os materiais necessários.";
				mes "Eu não posso te ajudar numa situação como essa.";
				mes "Você deve coletar o que é necessário.";
				close;
			}
			delitem(.@fruit,.@make);
			delitem(Empty_Bottle,.@make);
			Zeny -= .@total_zeny;
			getitem(.@juice,.@make);
			mes "[Mercador Marx Hansen]";
			mes "Aqui está!";
			mes "O suco fresco e delicioso que prometi.";
			mes "Deve estar muito refrescante e saboroso.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Bem então...";
			mes "Volte quando quiser.";
			close;
			case 2:
			mes "[Mercador Marx Hansen]";
			mes "Antes de os seres humanos serem capazes de desenvolver todas essas sociedades.";
			mes "Eles coletavam frutas das árvores para sobreviverem.";
			mes "Frutos são a benção da natureza que nos permitiu existir no mundo.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Desde que a vida se tornou tão próspera, a geração mais jovem parece que não valoriza mais as frutas.";
			mes "Então, comecei a pensar em maneiras de tornar a fruta mais fácil de se comer.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Eu percebi que a forma ideal seria fazer sucos de frutas.";
			mes "Eles são mais convenientes para se comer e tem um sabor muito melhor.";
			next;
			mes "# Sucos de Fruta Informações #";
			mes "^CC4E5C- Suco de Maçã -^000000";
			mes "Maçã x 1, Garrafa Vazia x 1,3 zenys.";
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
			mes "Se você encontrar alguém, avise a elas sobre os sucos!";
			close;
		}
	} else {
		mes "[Mercador Marx Hansen]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+".";
		mes "Como posso ajudá-l"+(Sex == SEX_MALE ? "o":"a")+"?";
		next;
		if (select("Conversar","Cancelar") == 1) {
			mes "[Mercador Marx Hansen]";
			mes "Antes de os seres humanos serem capazes de desenvolver todas essas sociedades.";
			mes "Eles coletavam frutas das árvores para sobreviverem.";
			mes "Frutos são a benção da natureza que nos permitiu existir no mundo.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Desde que a vida se tornou tão próspera, a geração mais jovem parece que não valoriza mais as frutas.";
			mes "Então, comecei a pensar em maneiras de tornar a fruta mais fácil de se comer.";
			next;
			mes "[Mercador Marx Hansen]";
			mes "Eu percebi que a forma ideal seria fazer sucos de frutas.";
			mes "Eles são mais convenientes para se comer e tem um sabor muito melhor.";
			close;
		} else {
			mes "[Mercador Marx Hansen]";
			mes "Ei!";
			mes "Se você encontrar";
			mes "alguém, avise a elas sobre os sucos!";
			close;
		}
	}
}
