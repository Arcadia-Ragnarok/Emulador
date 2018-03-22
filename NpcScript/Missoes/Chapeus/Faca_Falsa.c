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
| - Info: Mini-Quest da Faca Falsa                                  |
\*-----------------------------------------------------------------*/

payon_in01,99,72,4	script	Vovó#pay	8_F_GRANDMOTHER,{
	if (countitem(Skirt_Of_Virgin) > 3) {
		mes "[Vovó]";
		mes "Eu gostaria de poder fazer algumas roupas para meus netos para a temporada de festivais...";
		next;
		mes "[Vovó]";
		mes "Oh! Você pode me dar a sua ^3355FFSaia Virginal^000000?";
		mes "Eu preciso de quatro delas.";
		mes "Por favor, eu estou te implorando.";
		next;
		switch (select("Certo","Nem pensar!")) {
			case 1:
			if (!checkweight(Pretend_Murdered,1)) {
				mes "^3355FFEspere um segundo!";
				mes "Agora, você está carregando muitos itens com você.";
				mes "Por favor, volte depois de colocar algumas de suas coisas no Armazém da Kafra.^000000";
				close;
			}
			delitem(Skirt_Of_Virgin,4);
			mes "[Vovó]";
			mes "Oh! Muito obrigado!";
			mes "Agora eu posso fazer algumas roupas para minha neta.";
			next;
			mes "[Vovó]";
			mes "Ah, Espere!";
			mes "Eu quase me esqueci.";
			mes "Eu era uma atriz bastante popular na minha juventude.";
			mes "Meus amigos atores me deram um presente de casamento quando eu deixei a turma.";
			mes "Eu guardei isso para me lembrar desses momentos preciosos.";
			next;
			mes "[Vovó]";
			mes "Se estiver de acordo...";
			mes "Eu gostaria de lhe dar isto.";
			next;
			getitem(Pretend_Murdered,1);
			mes "[Vovó]";
			mes "Adeus, aventureiro!";
			mes "Obrigado por fazer uma velha tão feliz...";
			close;
			case 2:
			mes "[Vovó]";
			mes "*Suspiro*";
			mes "Como poderia conseguir uma ^3355FFSaia Virginal^000000 sozinha?";
			mes "Eu estou tão fraca e frágil, até me balançar nessa cadeira de balanço me cansa.";
			mes "*Choro*";
			mes "Eu só quero fazer minha neta feliz...";
			close;
		}
	} else {
		mes "[Vovó]";
		mes "Eu pego cogumelos nas montanhas de Payon todos os dias.";
		mes "O tempo passa e antes de eu perceber, já chegou a temporada do festival.";
		mes "Eu gostaria de poder fazer roupas para toda a minha família este ano.";
		next;
		mes "[Vovó]";
		mes "...";
		mes "Mas para isso, eu preciso de ^3355FF4 Saias Virginais^000000...";
		next;
		mes "[Vovó]";
		mes "Jovem aventureiro, por favor, me ajude.";
		mes "Se você achar alguma ^3355FFSaia Virginal^000000, por favor, traga-as para mim.";
		mes "Eu ficaria muito grata...";
		close;
	}
}
