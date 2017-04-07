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
| - Cria��o: Spell Master 11/03/2017                                |
| - Nota: Venda de artigos para realiza��o de alquimia              |
\*-----------------------------------------------------------------*/

alde_alche,24,188,3	script	Comerciante da Guilda	2_M_ALCHE,{
	if (BaseJob == Job_Alchemist) {
		mes "[Gever Al Sharp]";
		mes "Bem vindo guila dos alquimistas";
		mes "Em que posso ajudar?";
		next;
		switch (select("Comprar Materiais","Comprar Manuais","Cancelar")) {
			case 1:
			mes "[Gever Al Sharp]";
			mes "Qual material gostaria de comprar?";
			next;
			switch(select(getitemname(Medicine_Bowl)+" 250 Zenys",getitemname(Life_Force_Pot)+" 5.000 Zenys",getitemname(Yggdrasilberry_Dew)+" 20.000 Zenys",getitemname(Seed_Of_Life)+" 60.000 Zenys","Cancelar")) {
				case 1: .@item = 7134; .@price = 250; break;
				case 2: .@item = 7143; .@price = 5000; break;
				case 3: .@item = 7141; .@price = 20000; break;
				case 4: .@item = 7140; .@price = 60000; break;
				case 6:
				mes "[Gever Al Sharp]";
				mes "Tudo bem volte quando quiser fazer neg�cios.";
				close;
			}
			break;
			case 2:
			if ((MaxWeight - Weight) < 10) {
				mes "[Gever Al Sharp]";
				mes "Parece que voc� est� levando muito peso e n�o vai poder carregar um manual.";
				mes "Diminua o peso de itens que carrega antes de processeguir com a negocia��o.";
				close;
			}
			else if (Zeny < 100000) {
				mes "[Gever Al Sharp]";
				mes "Vejo que voc� n�o possui zenys o suficiente para comprar um manual de cria��o.";
				mes "Cada manual custa 100.000 Zenys.";
				close;
			}
			else {
				mes "[Gever Al Sharp]";
				mes "O pre�o pelos Manuais de Cria��o s�o 100.000 zenys cada.";
				mes "Qual gostaria de comprar?";
				next;
				switch (select("Manual de Cria��o de Po��es","Manual de Cria��o de �lcool","Manual de Cria��o de Fogo Grego","Manual de Cria��o de Frasco de �cido","Manual de Cria��o de Plantas","Manual de Cria��o de Esferas-Marinhas","Manual de Cria��o de Revestimentos","Manual de Cria��o de Po��es Compacta","Cancelar Negocia��o.")) {
					case 1:
					mes "[Gever Al Sharp]";
					mes "Est� aqui seu Manual de Cria��o de Po��es Comuns.";
					Zeny -= 100000;
					getitem (Normal_Potion_Book,1);
					close;
					case 2:
					mes "[Gever Al Sharp]";
					mes "Est� aqui seu Manual de Cria��o de �lcool.";
					Zeny -= 100000;
					getitem (Alcol_Create_Book,1);
					close;
					case 3:
					mes "[Gever Al Sharp]";
					mes "Est� aqui seu Manual de Cria��o de Fogo Grego.";
					Zeny -= 100000;
					getitem (FireBottle_Create_Book,1);
					close;
					case 4:
					mes "[Gever Al Sharp]";
					mes "Est� aqui seu Manual de Cria��o de �cidos.";
					Zeny -= 100000;
					getitem (Acid_Create_Book,1);
					close;
					case 5:
					mes "[Gever Al Sharp]";
					mes "Est� aqui seu Manual de Cria��o de Plantas.";
					Zeny -= 100000;
					getitem (Plant_Create_Book,1);
					close;
					case 6:
					mes "[Gever Al Sharp]";
					mes "Est� aqui seu Manual de Cria��o de Esferas-Marinhas.";
					Zeny -= 100000;
					getitem (Mine_Create_Book,1);
					close;
					case 7:
					mes "[Gever Al Sharp]";
					mes "Est� aqui seu Manual de Cria��o de Revestimentos.";
					Zeny -= 100000;
					getitem (Coating_Create_Book,1);
					close;
					case 8:
					mes "[Gever Al Sharp]";
					mes "Est� aqui seu Manual de Cria��o de Po��es Compactas.";
					Zeny -= 100000;
					getitem (Slim_Potion_Create_Book,1);
					close;
					case 9:
					mes "[Gever Al Sharp]";
					mes "Pois bem...";
					mes "Volte caso voc� tenha nescessidade de comprar um manual de produ��o.";
					close;
				}
			}
			case 3:
			mes "[Gever Al Sharp]";
			mes "Tudo bem volte quando quiser fazer neg�cios.";
			close;
		}
		mes "[Gever Al Sharp]";
		mes "Digite a quantidade de "+getitemname(.@item)+" que deseja.";
		mes "Se quiser cancelar digite '0'";
		mes "E s� posso vender at� 1000 itens por vez.";
		next;
		input (.@input);
		if (.@input == 0) {
			mes "[Gever Al Sharp]";
			mes "Voc� cancelou a negocia��o";
			close;
		}
		else if (.@input > 1000) {
			mes "[Gever Al Sharp]";
			mes "Voc� digitou uma quantidade muito alta, eu s� posso vender por vez at� 1.000 unidades.";
			close;
		}
		else {
			.@total_weight = .@input * 10;
			mes "[Gever Al Sharp]";
			mes "Ent�o voc� quer comprar "+.@input+" "+getitemname(.@item)+"?";
			if ((MaxWeight - Weight) < .@total_weight) {
				mes "Mas infelismente pareceque voc� carrega muito peso, e n�o vai poder levar tudo.";
				mes "Se diminua o peso em itens que carrega, depois venha negociar comigo.";
				close;
			}
			next;
			.@total_price = .@input * .@price;
			if (select("Comprar","Cancelar") == 1) {
				if (Zeny < .@total_price) {
					mes "[Gever Al Sharp]";
					mes "Voc� n�o possui zeny o suficiente.";
					mes "Cheque o quanto de Zeny voc� tem primeiro.";
					close;
				}
				else {
					mes "[Gever Al Sharp]";
					mes "Foi um prazer fazer neg�cios com voc�.";
					mes "Volte sempre.";
					Zeny -= .@total_price;
					getitem (.@item,.@input);
					close;
				}
			}
			mes "[Gever Al Sharp]";
			mes "Tudo bem volte quando quiser fazer neg�cios.";
			close;
		}
	}
	else if (BaseJob == Job_Merchant) {
		mes "[Gever Al Sharp]";
		mes "Hunn...?";
		mes "Um mercador!";
		mes "J� pensou em aprofundar suas habilidades de com�rcio na pesquisa com alquim�a?";
		mes "Este � o lugar, fale com os outros integrantes da guila, eles podem lhe ajudar";
		close;
	}
	else {
		mes "[Gever Al Sharp]";
		mes "Bem vindo guila dos alquimistas.";
		mes "Este � o lugar onde fazemos pesquisas com alquimia.";
		close;
	}
}