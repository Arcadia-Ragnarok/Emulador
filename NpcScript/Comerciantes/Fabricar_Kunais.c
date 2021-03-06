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
| - Copyright: Spell Master (14/03/2017)                            |
| - Info: Negocia Shurikens e itens por Kunais                      |
\*-----------------------------------------------------------------*/

que_ng,72,29,3	script	Mercador de Kunais#KunaiTrade	4_M_01,{
	if (BaseClass != Job_Ninja) {
		mes("[Kashin]\n"
			"Como voc� encontrou esse lugar?!\n"
			"� melhor que saia o quanto antes, para o seu pr�prio bem.");
		close;
	} else {
		mes("[Kashin]\n"
			"Meu nome � Kashin e negocio de Kunais por itens.\n"
			"Veja se exite algo que lhe interece.");
		next;
		switch (select("Kunai Veneno Mortal", "Kunai Nevasca", "Kunai Sopro do Vento", "Kunai Terra Negra", "Kunai Onda de Calor", "Cancelar")) {
			case 1: .@Shuriken = 13250; .@shurAmmout = 20; .@itemRequire = 7524; .@itemAmmout = 1; .@KunaiItem = 13259; break;
			case 2: .@Shuriken = 13251; .@shurAmmout = 8;  .@itemRequire = 7522; .@itemAmmout = 2; .@KunaiItem = 13255; break;
			case 3: .@Shuriken = 13252; .@shurAmmout = 4;  .@itemRequire = 7523; .@itemAmmout = 2; .@KunaiItem = 13257; break;
			case 4: .@Shuriken = 13253; .@shurAmmout = 2;  .@itemRequire = 7524; .@itemAmmout = 1; .@KunaiItem = 13256; break;
			case 5: .@Shuriken = 13254; .@shurAmmout = 1;  .@itemRequire = 7521; .@itemAmmout = 2; .@KunaiItem = 13258; break;
			case 6:
			mes("[Kashin]\n"
				"Por favor, volte quando precisar de algumas Kunais.\n"
				"At� breve.");
			close;
		}
		mes("[Kashin]\n"
			"Voc� pode trocar " + .@shurAmmout + " " + getitemname(.@Shuriken) + "\n e"
			+ .@itemAmmout + " " + getitemname(.@itemRequire) + " por 10 " + getitemname(.@KunaiItem) + ".");
		next;
		mes("[Kashin]\n"
			"Eu posso s� lhe dar de cada vez um m�ximo de 500 Kunais.\n"
			"Se quiser cancelar a troca basta que digite 0.\n"
			"Quantas Kunais voc� gostaria?");
		next;
		input(.@kunaiAmmout);
		if (.@kunaiAmmout == 0) {
			mes("[Kashin]\n"
				"Voc� cancelou a negocia��o.\n"
				"Tudo bem volte quando quiser fazer neg�cio.");
			close;
		} else if (.@kunaiAmmout > 500) {
			mes("[Kashin]\n"
				"Parece que n�o me ouviu...\n"
				"Eu disse que s� posso negociar 500 Kunais por vez.");
			close;
		} else if (countitem(.@Shuriken) < .@kunaiAmmout * .@shurAmmout || countitem(.@itemRequire) < .@kunaiAmmout * .@itemAmmout) {
			mes("[Kashin]\n"
				"Parece que voc� n�o tem a quantidade de itens necess�rios para a troca.");
			close;
		} else if (!checkweight(.@KunaiItem, .@kunaiAmmout * 10)) {
			mes("[Kashin]\n"
				"Tudo certo, mas temos um problema...\n"
				"Voc� est� levando muito peso com voc� e n�o vai poder carregar as Kunais que eu lhe entregar.\n"
				"Livre-se de um pouco de peso no seu invent�rio e tente novamente.");
			close;
		} else {
			mes("[Kashin]\n"
				"�timo, tudo est� em ordem, assim prossigamos com a troca.\n"
				"S� um instante....");
			next;
			mes("[Kashin]\n"
				".....\n"
				"......");
			next;
			mes("[Kashin]\n"
				"Espero que fa�a bom proveito com suas novas Kuanis.");
			delitem(.@Shuriken, .@shurAmmout * .@kunaiAmmout);
			delitem(.@itemRequire, .@itemAmmout * .@kunaiAmmout);
			getitem(.@KunaiItem, 10 * .@kunaiAmmout);
			close;
		}
	}
}
