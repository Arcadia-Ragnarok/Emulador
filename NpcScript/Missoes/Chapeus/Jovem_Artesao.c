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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest para                                           |
| * Elmo Angelical                                                  |
| * Chap�u de Deviruchi                                             |
\*-----------------------------------------------------------------*/

payon_in01,56,12,7	script	Jovem Artes�o#pay	4_M_ORIENT02,{
	mes "[Jovem]";
	mes "...O que � isso?";
	next;
	switch (select("Voc� pode me fazer um item especial?","Ei")) {
		case 1:
		mes "[Jovem]";
		mes "Huh? Ent�o voc� j� sabe no que sou especializado?";
		mes "N�o vejo necessidade de negar.";
		mes "Me diga o que voc� quer.";
		next;
		switch (select("Elmo Angelical","Chap�u de Deviruchi","Eu volto depois")) {
			case 1:
			mes "[Jovem]";
			mes "1 Elmo [1].";
			mes "1 Asa de Anjo.";
			mes "5 Presas de Hatii.";
			mes "Isso � tudo que eu preciso.";
			next;
			mes "[Jovem]";
			mes "Aguarde!";
			mes "S� para voc� saber, eu n�o me importo se os itens no seu invent�rio foram melhorados ou cont�m cartas.";
			next;
			mes "[Jovem]";
			mes "Eu quero dizer, qualquer item melhorado ou com carta ser� perdido quando eu fizer este item.";
			mes "Portanto, tenha cuidado quando voc� entregar o material para mim.";
			next;
			mes "[Jovem]";
			mes "Voc� reuniu os itens?";
			mes "Em seguida, entregue-os ent�o.";
			next;
			switch (select("Entregar os itens","N�o entregar os itens.")) {
				case 1:
				if (!checkweight(Helm_Of_Angel,1)) {
					mes "^3355FFEspere um segundo!";
					mes "Agora, voc� est� carregando muitos itens com voc�.";
					mes "Por favor, volte depois de colocar algumas de suas coisas no Armaz�m da Kafra.^000000";
					close;
				} else if ((countitem(Helm_) > 0) && (countitem(Angelic_Chain) > 0) && (countitem(Fang_Of_Garm) > 4)) {
					mes "[Jovem]";
					mes ".....Hm.";
					mes "Muito bem, aqui est� o seu Elmo Angelical.";
					mes "Leve-o.";
					delitem(Helm_,1);
					delitem(Angelic_Chain,1);
					delitem(Fang_Of_Garm,5);
					close2;
					getitem(Helm_Of_Angel,1);
					end;
				} else {
					mes "[Jovem]";
					mes "...O n�mero de itens n�o est� certo.";
					mes "� melhor checar.";
					close;
				}
				case 2:
				mes "[Jovem]";
				mes "Fa�a como quiser...";
				close;
			}
			case 2:
			mes "[Jovem]";
			mes "600 Pequenos Chifres Malignos.";
			mes "40 Garras de Grifo.";
			mes "Isso � tudo que eu preciso.";
			next;
			mes "[Jovem]";
			mes "Aguarde!";
			mes "S� para voc� saber, eu n�o me importo se os itens no seu invent�rio foram melhorados ou cont�m cartas.";
			next;
			mes "[Jovem]";
			mes "Eu quero dizer, qualquer item melhorado ou com carta ser� perdido quando eu fizer este item.";
			mes "Portanto, tenha cuidado quando voc� entregar o material para mim.";
			next;
			mes "[Jovem]";
			mes "Voc� reuniu os itens?";
			mes "Em seguida, entregue-os ent�o.";
			next;
			switch (select("Entregar os itens.:N�o entregar os itens.")) {
				case 1:
				if (!checkweight(Deviruchi_Cap,1)) {
					mes "^3355FFEspere um segundo!";
					mes "Agora, voc� est� carregando muitos itens com voc�.";
					mes "Por favor, volte depois de colocar algumas de suas coisas no Armaz�m da Kafra.^000000";
					close;
				} else if ((countitem(Petite_DiablOfs_Horn) > 599) && (countitem(Talon_Of_Griffin) > 39)) {
					mes "[Jovem]";
					mes ".....Hm. Aqui est� o seu Chap�u de Deviruchi.";
					mes "Por favor, pegue-o.";
					delitem(Petite_DiablOfs_Horn,600);
					delitem(Talon_Of_Griffin,40);
					close2;
					getitem(Deviruchi_Cap,1);
					end;
				} else {
					mes "[Jovem]";
					mes "...O n�mero de itens n�o est� certo.";
					mes "� melhor checar.";
					close;
				}
				case 2:
				mes "[Jovem]";
				mes "Fa�a como quiser...";
				close;
			}
			case 3:
			mes "[Jovem]";
			mes "Hm. Tudo bem.";
			mes "Ent�o nos vemos depois.";
			close;
		}
		case 2:
		mes "[Jovem]";
		mes "Hm.";
		mes "Se cuide.";
		close;
	}
}
