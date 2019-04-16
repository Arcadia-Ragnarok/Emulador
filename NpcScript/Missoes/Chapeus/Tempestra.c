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
| - Info: Mini-Quest para                                           |
| * Chap�u de Mestre Arcano                                         |
| * Cartola                                                         |
| * Coroa do Deus-Sol                                               |
\*-----------------------------------------------------------------*/

alberta,136,79,1	script	Tempestra#alb	1_F_LIBRARYGIRL,{
	mes "[Tempestra]";
	mes "Ah, uma brisa fresca.";
	mes "� bom visitar a praia.";
	mes "Acho que foi a escolha certa vir aqui para fazer uma pausa da minha empresa.";
	next;
	mes "[Tempestra]";
	mes "Impressionante, o sol est� muito forte hoje.";
	mes "Fico feliz por ter trazido o meu chap�u.";
	mes "Eu estou come�ando a ganhar queimaduras devido a minha pele estar exposta a este sol todos os dias.";
	next;
	mes "[Tempestra]";
	mes "Eu estooou com sede! Bem, uma Po��o Amarela refrigerada seria perfeito";
	next;
	switch (select("Deixe-me d�-lo uma Po��o Amarela","O que, voc� espera que eu lhe d� uma?!")) {
		case 1:
		if (countitem(Yellow_Potion) > 0) {
			mes "[Tempestra]";
			mes "Ah, muito obrigada.";
			mes "Estou t�o feliz por ter conhecido uma pessoa simp�tica como voc�.";
			next;
			mes "^3355FF*Glup, glup*^000000";
			delitem(Yellow_Potion,1);
			next;
			mes "[Tempestra]";
			mes "Obaaaaaa!!!";
			mes "Est� t�o gelada!!";
			mes "Obrigada";
			next;
			switch (select("Est� muito quente, n�o �?","Voc� deve usar o seu chap�u...")) {
				case 1:
				mes "[Tempestra]";
				mes "Sim est� realmente quente....";
				next;
				mes "[Tempestra]";
				mes "Eu tenho";
				mes "^0000FFChap�u de Ver�o^000000,";
				mes "^0000FFChap�u de Mestre Arcano^000000 e...";
				mes "^0000FFCartola^000000 e muito outros no meu quarto.";
				next;
				mes "[Tempestra]";
				mes "Eu trouxe estes chap�us para que eu possa vend�-los e usar o dinheiro para gastar em minhas f�rias aqui, mas agora parece que eu tenho que utilizar um deles";
				next;
				switch (select("Chap�u de Ver�o!!?","Chap�u de Mestre Arcano?!?","Cartola??!??")) {
					case 1:
					mes "[Tempestra]";
					mes "H�? Voc� n�o sabia?";
					mes "Eu sou uma comerciante de chap�is.";
					mes "Eu n�o te disse isso antes?";
					next;
					mes "[Tempestra]";
					mes "Humm, acho que n�o.";
					mes "Pe�o desculpas.";
					mes "Ah! Se voc� quiser, eu posso fazer um Chap�u de Ver�o para voc�!";
					next;
					mes "[Tempestra]";
					mes "Eu preciso de...";
					mes "^0000FF250 Tecido^000000";
					mes "^0000FF1 Chap�u Eslotado^000000";
					mes "^0000FF1 Barrete Eslotado^000000";
					mes "^0000FF600 Penas Macias^000000";
					next;
					if ((countitem(Transparent_Cloth) > 249) && (countitem(Hat_) > 0) && (countitem(Cap_) > 0) && (countitem(Soft_Feather) > 599)) {
						mes "[Tempestra]";
						mes "O qu�?!? ";
						mes "Voc� j� tem todos os itens?";
						mes "Se houver itens forjados ou itens equipados com cartas de monstro, guarde-os em seu armaz�m.";
						next;
						mes "[Tempestra]";
						mes "Eu s� fa�o isso pela Po��o Amarela.";
						mes "Por isso n�o vou cobrar nenhum zeny para a cria��o do chap�u.";
						next;
						switch (select("Sim, obrigado","N�o obrigado")) {
							case 1:
							next;
							mes "[Tempestra]";
							mes "Certo. Apenas me d� um segundo...";
							next;
							mes "^3355FF*Baque! In�cio!*";
							mes "*Tic-Tac!*^000000";
							next;
							mes "^3355FF*Beeeeeeeh*^000000";
							next;
							mes "[Tempestra]";
							mes "Aqui est�, hehe";
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
							mes "Se por acaso voc� me visitar mais tarde, eu ficarei mais que feliz em fazer um chap�u para voc�";
							next;
							mes "[Tempestra]";
							mes "Bem, ent�o, te vejo mais tarde";
							close;
						}
					} else {
						mes "[Tempestra]";
						mes "Vou te contar um segredo, j� que voc� me deu a Po��o Amarela";
						next;
						mes "[Tempestra]";
						mes "Estou ansiosa para ver voc� de novo";
						close;
					}
					case 2:
					mes "[Tempestra]";
					mes "H�? Voc� n�o sabia?";
					mes "Eu sou uma comerciante de chap�is.";
					mes "Eu n�o te disse isso antes";
					next;
					mes "[Tempestra]";
					mes "Humm, acho que n�o.";
					mes "Pe�o desculpas.";
					mes "Ah! Se voc� quiser, eu posso fazer um Chap�u de Mestre Arcano para voc�!";
					next;
					mes "[Tempestra]";
					mes "^0000FF1 Chap�u de Bathory^000000";
					mes "^0000FF400 Escama de Drag�o^000000";
					mes "^0000FF50 P� de Bolor^000000";
					mes "^0000FF1 Carta Salgueiro Anci�o^000000";
					next;
					if ((countitem(Star_Sparkling) > 0) && (countitem(Dragon_Scale) > 399) && (countitem(Elder_Wilow_Card) > 0) && (countitem(Mould_Powder) > 49)) {
						mes "[Tempestra]";
						mes "O qu�??!? ";
						mes "Voc� j� tem todos os itens? Se houver itens forjados ou itens equipados com cartas de monstro, guarde-os em seu armaz�m.";
						next;
						mes "[Tempestra]";
						mes "Eu s� fa�o isso pela Po��o Amarela, por isso n�o vou cobrar nenhum zeny para a cria��o do chap�u.";
						next;
						switch (select("Sim, obrigado","N�o obrigado")) {
							case 1:
							next;
							mes "[Tempestra]";
							mes "Certo. Apenas espere um momento...";
							next;
							mes "^3355FF*Baque! In�cio!*";
							mes "*Tic-Tac!*^000000";
							next;
							mes "^3355FF*Beeeeeeeh*^000000";
							next;
							mes "[Tempestra]";
							mes "Aqui est�, hehe";
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
							mes "Se por acaso voc� me visitar mais tarde.";
							mes "Eu ficarei mais que feliz em fazer um chap�u para voc�";
							next;
							mes "[Tempestra]";
							mes "Bem, ent�o, te vejo mais tarde";
							close;
						}
					} else {
						mes "[Tempestra]";
						mes "Vou te contar um segredo, j� que voc� me deu a Po��o Amarela";
						next;
						mes "[Tempestra]";
						mes "Estou ansiosa para ver voc� de novo";
						close;
					}
					case 3:
					mes "[Tempestra]";
					mes "H�? Voc� n�o sabia?";
					mes "Eu sou uma comerciante de chap�is.";
					mes "Eu n�o te disse isso antes?";
					next;
					mes "[Tempestra]";
					mes "Humm, acho que n�o.";
					mes "Pe�o desculpas.";
					mes "Ah! Se voc� quiser, eu posso fazer um Chap�u de Ver�o para voc�!";
					next;
					mes "[Tempestra]";
					mes "Eu preciso que me traga,";
					mes "^0000FF1 Chap�u de Bathory^000000";
					mes "^0000FF450 L�bios Fossilizados^000000";
					mes "^0000FF1200 Casca Rija^000000";
					next;
					if ((countitem(Star_Sparkling) > 0) && (countitem(Lip_Of_Ancient_Fish) > 449) && (countitem(Solid_Shell) > 1199)) {
						mes "[Tempestra]";
						mes "O qu�?!?";
						mes "Voc� j� tem todos os itens??";
						mes "Se houver itens forjados ou itens equipados com cartas de monstro, guarde-os em seu armaz�m.";
						next;
						mes "[Tempestra]";
						mes "Eu s� fa�o isso pela Po��o Amarela.";
						mes "Por isso n�o vou cobrar nenhum zeny para a cria��o do chap�u.";
						next;
						switch (select("Sim, obrigado","N�o obrigado")) {
							case 1:
							next;
							mes "[Tempestra]";
							mes "Certo.";
							mes "Apenas espere um momento...";
							next;
							mes "^3355FF*Baque! In�cio!*";
							mes "*Tic-Tac!*^000000";
							next;
							mes "^3355FF*Beeeeeeeh*^000000";
							next;
							mes "[Tempestra]";
							mes "Aqui est�, hehe";
							mes "Que tal?";
							mes "voc� gostou?";
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
							mes "Se por acaso voc� me visitar mais tarde.";
							mes "Eu ficarei mais que feliz em fazer um chap�u para voc�";
							next;
							mes "[Tempestra]";
							mes "Bem, ent�o, te vejo mais tarde";
							close;
						}
					} else {
						mes "[Tempestra]";
						mes "Vou te contar um segredo, j� que voc� me deu a Po��o Amarela";
						next;
						mes "[Tempestra]";
						mes "Estou ansiosa para ver voc� de novo";
						close;
					}
				}
				case 2:
				mes "[Tempestra]";
				mes "H�? Voc� n�o sabia?";
				mes "Eu sou uma comerciante de chap�is.";
				mes "Eu n�o te disse isso antes...";
				next;
				mes "[Tempestra]";
				mes "Humm, acho que n�o.";
				mes "Pe�o desculpas.";
				mes "Ah! Se voc� quiser, eu posso fazer um Chap�u de Ver�o para voc�.";
				next;
				if ((countitem(Symbol_Of_Sun) > 0) && (countitem(Gold) > 9) && (countitem(Steel) > 39) && (countitem(Coal) > 49) && (countitem(Oridecon) > 1)) {
					mes "[Tempestra]";
					mes "Humm...";
					mes "Eu acho que posso fazer um item especial a partir dos itens que voc� j� possui.";
					next;
					mes "[Tempestra]";
					mes "Se houver itens forjados ou itens equipados com cartas de monstro, guarde-os em seu Armaz�m Kafra.";
					next;
					mes "[Tempestra]";
					mes "Hehe...";
					mes "Eu vou fazer uma Coroa do Deus Sol para voc�";
					next;
					mes "[Tempestra]";
					mes "Veja! Aqui est�!!";
					mes "Haha, eu a fiz mais r�pido que a velocidade da luz!";
					delitem(Symbol_Of_Sun,1);
					delitem(Gold,10);
					delitem(Steel,40);
					delitem(Coal,50);
					delitem(Oridecon,2);
					getitem(Helm_Of_Sun,1);
					next;
					mes "[Tempestra]";
					mes "Enfim, eu s� quero dar algo realmente bom para voc�...";
					close;
				} else {
					mes "[Tempestra]";
					mes "Humm...";
					mes "^0000FF1 S�mbolo do Deus do Sol^000000";
					mes "^0000FF10 Ouro^000000";
					mes "^0000FF40 A�o^000000";
					mes "^0000FF50 Carv�o^000000";
					mes "^0000FF2 Oridecon^000000";
					next;
					mes "[Tempestra]";
					mes "Se voc� possuir esses itens, eu posso fazer para voc� minha coroa 'Fant�stica do Deus Sol!'";
					next;
					mes "[Tempestra]";
					mes "Eu s� quero fazer algo realmente especial para voc�.";
					mes "Por isso n�o vou cobrar nenhum zeny para a cria��o.";
					close;
				}
			}
		} else {
			mes "[Tempestra]";
			mes "Hum, Eu aprecio isso, mas eu acho que voc� acabou de me dar Po��es Amarelas !?";
			close;
		}
		case 2:
		mes "[Tempestra]";
		mes "....Que rude!";
		close;
	}
}
