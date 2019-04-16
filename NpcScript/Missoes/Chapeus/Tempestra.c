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
| - Info: Mini-Quest para                                           |
| * Chapéu de Mestre Arcano                                         |
| * Cartola                                                         |
| * Coroa do Deus-Sol                                               |
\*-----------------------------------------------------------------*/

alberta,136,79,1	script	Tempestra#alb	1_F_LIBRARYGIRL,{
	mes "[Tempestra]";
	mes "Ah, uma brisa fresca.";
	mes "É bom visitar a praia.";
	mes "Acho que foi a escolha certa vir aqui para fazer uma pausa da minha empresa.";
	next;
	mes "[Tempestra]";
	mes "Impressionante, o sol está muito forte hoje.";
	mes "Fico feliz por ter trazido o meu chapéu.";
	mes "Eu estou começando a ganhar queimaduras devido a minha pele estar exposta a este sol todos os dias.";
	next;
	mes "[Tempestra]";
	mes "Eu estooou com sede! Bem, uma Poção Amarela refrigerada seria perfeito";
	next;
	switch (select("Deixe-me dá-lo uma Poção Amarela","O que, você espera que eu lhe dê uma?!")) {
		case 1:
		if (countitem(Yellow_Potion) > 0) {
			mes "[Tempestra]";
			mes "Ah, muito obrigada.";
			mes "Estou tão feliz por ter conhecido uma pessoa simpática como você.";
			next;
			mes "^3355FF*Glup, glup*^000000";
			delitem(Yellow_Potion,1);
			next;
			mes "[Tempestra]";
			mes "Obaaaaaa!!!";
			mes "Está tão gelada!!";
			mes "Obrigada";
			next;
			switch (select("Está muito quente, não é?","Você deve usar o seu chapéu...")) {
				case 1:
				mes "[Tempestra]";
				mes "Sim está realmente quente....";
				next;
				mes "[Tempestra]";
				mes "Eu tenho";
				mes "^0000FFChapéu de Verão^000000,";
				mes "^0000FFChapéu de Mestre Arcano^000000 e...";
				mes "^0000FFCartola^000000 e muito outros no meu quarto.";
				next;
				mes "[Tempestra]";
				mes "Eu trouxe estes chapéus para que eu possa vendê-los e usar o dinheiro para gastar em minhas férias aqui, mas agora parece que eu tenho que utilizar um deles";
				next;
				switch (select("Chapéu de Verão!!?","Chapéu de Mestre Arcano?!?","Cartola??!??")) {
					case 1:
					mes "[Tempestra]";
					mes "Hã? Você não sabia?";
					mes "Eu sou uma comerciante de chapéis.";
					mes "Eu não te disse isso antes?";
					next;
					mes "[Tempestra]";
					mes "Humm, acho que não.";
					mes "Peço desculpas.";
					mes "Ah! Se você quiser, eu posso fazer um Chapéu de Verão para você!";
					next;
					mes "[Tempestra]";
					mes "Eu preciso de...";
					mes "^0000FF250 Tecido^000000";
					mes "^0000FF1 Chapéu Eslotado^000000";
					mes "^0000FF1 Barrete Eslotado^000000";
					mes "^0000FF600 Penas Macias^000000";
					next;
					if ((countitem(Transparent_Cloth) > 249) && (countitem(Hat_) > 0) && (countitem(Cap_) > 0) && (countitem(Soft_Feather) > 599)) {
						mes "[Tempestra]";
						mes "O quê?!? ";
						mes "Você já tem todos os itens?";
						mes "Se houver itens forjados ou itens equipados com cartas de monstro, guarde-os em seu armazém.";
						next;
						mes "[Tempestra]";
						mes "Eu só faço isso pela Poção Amarela.";
						mes "Por isso não vou cobrar nenhum zeny para a criação do chapéu.";
						next;
						switch (select("Sim, obrigado","Não obrigado")) {
							case 1:
							next;
							mes "[Tempestra]";
							mes "Certo. Apenas me dê um segundo...";
							next;
							mes "^3355FF*Baque! Início!*";
							mes "*Tic-Tac!*^000000";
							next;
							mes "^3355FF*Beeeeeeeh*^000000";
							next;
							mes "[Tempestra]";
							mes "Aqui está, hehe";
							mes "Que tal isso?";
							mes "Gostou?";
							delitem(Transparent_Cloth,250);
							delitem(Hat_,1);
							delitem(Cap_,1);
							delitem(Soft_Feather,600);
							getitem(Picnic_Hat,1);
							next;
							mes "[Tempestra]";
							mes "Mais uma vez, obrigada pelo seu favor. Eu te vejo mais tarde";
							close;
							case 2:
							next;
							mes "[Tempestra]";
							mes "Ah tudo bem";
							next;
							mes "[Tempestra]";
							mes "Se por acaso você me visitar mais tarde, eu ficarei mais que feliz em fazer um chapéu para você";
							next;
							mes "[Tempestra]";
							mes "Bem, então, te vejo mais tarde";
							close;
						}
					} else {
						mes "[Tempestra]";
						mes "Vou te contar um segredo, já que você me deu a Poção Amarela";
						next;
						mes "[Tempestra]";
						mes "Estou ansiosa para ver você de novo";
						close;
					}
					case 2:
					mes "[Tempestra]";
					mes "Hã? Você não sabia?";
					mes "Eu sou uma comerciante de chapéis.";
					mes "Eu não te disse isso antes";
					next;
					mes "[Tempestra]";
					mes "Humm, acho que não.";
					mes "Peço desculpas.";
					mes "Ah! Se você quiser, eu posso fazer um Chapéu de Mestre Arcano para você!";
					next;
					mes "[Tempestra]";
					mes "^0000FF1 Chapéu de Bathory^000000";
					mes "^0000FF400 Escama de Dragão^000000";
					mes "^0000FF50 Pó de Bolor^000000";
					mes "^0000FF1 Carta Salgueiro Ancião^000000";
					next;
					if ((countitem(Star_Sparkling) > 0) && (countitem(Dragon_Scale) > 399) && (countitem(Elder_Wilow_Card) > 0) && (countitem(Mould_Powder) > 49)) {
						mes "[Tempestra]";
						mes "O quê??!? ";
						mes "Você já tem todos os itens? Se houver itens forjados ou itens equipados com cartas de monstro, guarde-os em seu armazém.";
						next;
						mes "[Tempestra]";
						mes "Eu só faço isso pela Poção Amarela, por isso não vou cobrar nenhum zeny para a criação do chapéu.";
						next;
						switch (select("Sim, obrigado","Não obrigado")) {
							case 1:
							next;
							mes "[Tempestra]";
							mes "Certo. Apenas espere um momento...";
							next;
							mes "^3355FF*Baque! Início!*";
							mes "*Tic-Tac!*^000000";
							next;
							mes "^3355FF*Beeeeeeeh*^000000";
							next;
							mes "[Tempestra]";
							mes "Aqui está, hehe";
							mes "Que tal, gostou?";
							delitem(Star_Sparkling,1);
							delitem(Dragon_Scale,400);
							delitem(Elder_Wilow_Card,1);
							delitem(Mould_Powder,50);
							getitem(Wizardry_Hat,1);
							next;
							mes "[Tempestra]";
							mes "Mais uma vez, obrigado pelo seu favor. Eu te vejo mais tarde";
							close;
							case 2:
							next;
							mes "[Tempestra]";
							mes "Ah tudo bem";
							next;
							mes "[Tempestra]";
							mes "Se por acaso você me visitar mais tarde.";
							mes "Eu ficarei mais que feliz em fazer um chapéu para você";
							next;
							mes "[Tempestra]";
							mes "Bem, então, te vejo mais tarde";
							close;
						}
					} else {
						mes "[Tempestra]";
						mes "Vou te contar um segredo, já que você me deu a Poção Amarela";
						next;
						mes "[Tempestra]";
						mes "Estou ansiosa para ver você de novo";
						close;
					}
					case 3:
					mes "[Tempestra]";
					mes "Hã? Você não sabia?";
					mes "Eu sou uma comerciante de chapéis.";
					mes "Eu não te disse isso antes?";
					next;
					mes "[Tempestra]";
					mes "Humm, acho que não.";
					mes "Peço desculpas.";
					mes "Ah! Se você quiser, eu posso fazer um Chapéu de Verão para você!";
					next;
					mes "[Tempestra]";
					mes "Eu preciso que me traga,";
					mes "^0000FF1 Chapéu de Bathory^000000";
					mes "^0000FF450 Lábios Fossilizados^000000";
					mes "^0000FF1200 Casca Rija^000000";
					next;
					if ((countitem(Star_Sparkling) > 0) && (countitem(Lip_Of_Ancient_Fish) > 449) && (countitem(Solid_Shell) > 1199)) {
						mes "[Tempestra]";
						mes "O quê?!?";
						mes "Você já tem todos os itens??";
						mes "Se houver itens forjados ou itens equipados com cartas de monstro, guarde-os em seu armazém.";
						next;
						mes "[Tempestra]";
						mes "Eu só faço isso pela Poção Amarela.";
						mes "Por isso não vou cobrar nenhum zeny para a criação do chapéu.";
						next;
						switch (select("Sim, obrigado","Não obrigado")) {
							case 1:
							next;
							mes "[Tempestra]";
							mes "Certo.";
							mes "Apenas espere um momento...";
							next;
							mes "^3355FF*Baque! Início!*";
							mes "*Tic-Tac!*^000000";
							next;
							mes "^3355FF*Beeeeeeeh*^000000";
							next;
							mes "[Tempestra]";
							mes "Aqui está, hehe";
							mes "Que tal?";
							mes "você gostou?";
							delitem(Star_Sparkling,1);
							delitem(Lip_Of_Ancient_Fish,450);
							delitem(Solid_Shell,1200);
							getitem(Magician_Hat,1);
							next;
							mes "[Tempestra]";
							mes "Mais uma vez, obrigado pelo seu favor.";
							mes "Eu te vejo mais tarde";
							close;
							case 2:
							next;
							mes "[Tempestra]";
							mes "Ah tudo bem";
							next;
							mes "[Tempestra]";
							mes "Se por acaso você me visitar mais tarde.";
							mes "Eu ficarei mais que feliz em fazer um chapéu para você";
							next;
							mes "[Tempestra]";
							mes "Bem, então, te vejo mais tarde";
							close;
						}
					} else {
						mes "[Tempestra]";
						mes "Vou te contar um segredo, já que você me deu a Poção Amarela";
						next;
						mes "[Tempestra]";
						mes "Estou ansiosa para ver você de novo";
						close;
					}
				}
				case 2:
				mes "[Tempestra]";
				mes "Hã? Você não sabia?";
				mes "Eu sou uma comerciante de chapéis.";
				mes "Eu não te disse isso antes...";
				next;
				mes "[Tempestra]";
				mes "Humm, acho que não.";
				mes "Peço desculpas.";
				mes "Ah! Se você quiser, eu posso fazer um Chapéu de Verão para você.";
				next;
				if ((countitem(Symbol_Of_Sun) > 0) && (countitem(Gold) > 9) && (countitem(Steel) > 39) && (countitem(Coal) > 49) && (countitem(Oridecon) > 1)) {
					mes "[Tempestra]";
					mes "Humm...";
					mes "Eu acho que posso fazer um item especial a partir dos itens que você já possui.";
					next;
					mes "[Tempestra]";
					mes "Se houver itens forjados ou itens equipados com cartas de monstro, guarde-os em seu Armazém Kafra.";
					next;
					mes "[Tempestra]";
					mes "Hehe...";
					mes "Eu vou fazer uma Coroa do Deus Sol para você";
					next;
					mes "[Tempestra]";
					mes "Veja! Aqui está!!";
					mes "Haha, eu a fiz mais rápido que a velocidade da luz!";
					delitem(Symbol_Of_Sun,1);
					delitem(Gold,10);
					delitem(Steel,40);
					delitem(Coal,50);
					delitem(Oridecon,2);
					getitem(Helm_Of_Sun,1);
					next;
					mes "[Tempestra]";
					mes "Enfim, eu só quero dar algo realmente bom para você...";
					close;
				} else {
					mes "[Tempestra]";
					mes "Humm...";
					mes "^0000FF1 Símbolo do Deus do Sol^000000";
					mes "^0000FF10 Ouro^000000";
					mes "^0000FF40 Aço^000000";
					mes "^0000FF50 Carvão^000000";
					mes "^0000FF2 Oridecon^000000";
					next;
					mes "[Tempestra]";
					mes "Se você possuir esses itens, eu posso fazer para você minha coroa 'Fantástica do Deus Sol!'";
					next;
					mes "[Tempestra]";
					mes "Eu só quero fazer algo realmente especial para você.";
					mes "Por isso não vou cobrar nenhum zeny para a criação.";
					close;
				}
			}
		} else {
			mes "[Tempestra]";
			mes "Hum, Eu aprecio isso, mas eu acho que você acabou de me dar Poções Amarelas !?";
			close;
		}
		case 2:
		mes "[Tempestra]";
		mes "....Que rude!";
		close;
	}
}
