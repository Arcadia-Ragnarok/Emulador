/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
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
| * Elmo Angelical                                                  |
| * Chapéu de Deviruchi                                             |
\*-----------------------------------------------------------------*/

payon_in01,56,12,7	script	Jovem Artesão#pay	4_M_ORIENT02,{
	mes "[Jovem]";
	mes "...O que é isso?";
	next;
	switch (select("Você pode me fazer um item especial?","Ei")) {
		case 1:
		mes "[Jovem]";
		mes "Huh? Então você já sabe no que sou especializado?";
		mes "Não vejo necessidade de negar.";
		mes "Me diga o que você quer.";
		next;
		switch (select("Elmo Angelical","Chapéu de Deviruchi","Eu volto depois")) {
			case 1:
			mes "[Jovem]";
			mes "1 Elmo [1].";
			mes "1 Asa de Anjo.";
			mes "5 Presas de Hatii.";
			mes "Isso é tudo que eu preciso.";
			next;
			mes "[Jovem]";
			mes "Aguarde!";
			mes "Só para você saber, eu não me importo se os itens no seu inventário foram melhorados ou contém cartas.";
			next;
			mes "[Jovem]";
			mes "Eu quero dizer, qualquer item melhorado ou com carta será perdido quando eu fizer este item.";
			mes "Portanto, tenha cuidado quando você entregar o material para mim.";
			next;
			mes "[Jovem]";
			mes "Você reuniu os itens?";
			mes "Em seguida, entregue-os então.";
			next;
			switch (select("Entregar os itens","Não entregar os itens.")) {
				case 1:
				if (!checkweight(Helm_Of_Angel,1)) {
					mes "^3355FFEspere um segundo!";
					mes "Agora, você está carregando muitos itens com você.";
					mes "Por favor, volte depois de colocar algumas de suas coisas no Armazém da Kafra.^000000";
					close;
				} else if ((countitem(Helm_) > 0) && (countitem(Angelic_Chain) > 0) && (countitem(Fang_Of_Garm) > 4)) {
					mes "[Jovem]";
					mes ".....Hm.";
					mes "Muito bem, aqui está o seu Elmo Angelical.";
					mes "Leve-o.";
					delitem(Helm_,1);
					delitem(Angelic_Chain,1);
					delitem(Fang_Of_Garm,5);
					close2;
					getitem(Helm_Of_Angel,1);
					end;
				} else {
					mes "[Jovem]";
					mes "...O número de itens não está certo.";
					mes "É melhor checar.";
					close;
				}
				case 2:
				mes "[Jovem]";
				mes "Faça como quiser...";
				close;
			}
			case 2:
			mes "[Jovem]";
			mes "600 Pequenos Chifres Malignos.";
			mes "40 Garras de Grifo.";
			mes "Isso é tudo que eu preciso.";
			next;
			mes "[Jovem]";
			mes "Aguarde!";
			mes "Só para você saber, eu não me importo se os itens no seu inventário foram melhorados ou contém cartas.";
			next;
			mes "[Jovem]";
			mes "Eu quero dizer, qualquer item melhorado ou com carta será perdido quando eu fizer este item.";
			mes "Portanto, tenha cuidado quando você entregar o material para mim.";
			next;
			mes "[Jovem]";
			mes "Você reuniu os itens?";
			mes "Em seguida, entregue-os então.";
			next;
			switch (select("Entregar os itens.:Não entregar os itens.")) {
				case 1:
				if (!checkweight(Deviruchi_Cap,1)) {
					mes "^3355FFEspere um segundo!";
					mes "Agora, você está carregando muitos itens com você.";
					mes "Por favor, volte depois de colocar algumas de suas coisas no Armazém da Kafra.^000000";
					close;
				} else if ((countitem(Petite_DiablOfs_Horn) > 599) && (countitem(Talon_Of_Griffin) > 39)) {
					mes "[Jovem]";
					mes ".....Hm. Aqui está o seu Chapéu de Deviruchi.";
					mes "Por favor, pegue-o.";
					delitem(Petite_DiablOfs_Horn,600);
					delitem(Talon_Of_Griffin,40);
					close2;
					getitem(Deviruchi_Cap,1);
					end;
				} else {
					mes "[Jovem]";
					mes "...O número de itens não está certo.";
					mes "É melhor checar.";
					close;
				}
				case 2:
				mes "[Jovem]";
				mes "Faça como quiser...";
				close;
			}
			case 3:
			mes "[Jovem]";
			mes "Hm. Tudo bem.";
			mes "Então nos vemos depois.";
			close;
		}
		case 2:
		mes "[Jovem]";
		mes "Hm.";
		mes "Se cuide.";
		close;
	}
}
