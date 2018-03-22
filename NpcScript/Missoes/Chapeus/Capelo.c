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
| - Info: Mini-Quest do Capelo                                      |
\*-----------------------------------------------------------------*/

prt_in,38,108,4	script	Professora#phhat	1_M_INNKEEPER,{
	if ((countitem(Illusion_Flower) > 0) && (countitem(Hinalle) > 0) && (countitem(Aloe) > 0) && (countitem(Ment) > 0)) {
		mes "[Professora]";
		mes "Oh... Essas Flores em sua mão são....";
		next;
		switch (select("Flores de espetáculo","Dê Flores","Cancelar")) {
			case 1:
			mes "Ah... Como maravilhoso!!";
			mes "Estes são definitivamente os 4 tipos de Flores eu estava procurando..";
			mes "A Flor de ^3355FFIlusão, Hinalle, Babosa, e Menta^000000. você os daria a mim?...";
			next;
			mes "[Professora]";
			mes "Se você as me trouxer eu lhe darei um item especial.....";
			close;
			case 2:
			if ((countitem(Illusion_Flower) > 0) && (countitem(Hinalle) > 0) && (countitem(Aloe) > 0) && (countitem(Ment) > 0)) {
				delitem(Illusion_Flower,1);
				delitem(Hinalle,1);
				delitem(Aloe,1);
				delitem(Ment,1);
				getitem(Ph_D_Hat,1);
				mes "[Professora]";
				mes "Eu realmente realmente o aprecio o que você fez para mim.";
				mes "Sou muito grata";
				mes "Eu darei meu artigo precioso a você como prometido.";
				next;
				mes "[Professora]";
				mes "Este é o Chapéu que eu usei em minha Graduação de minha Universidade.";
				mes "Me faz lembrar de meus dias escolares felizes.";
				mes "Por favor leve isto...";
				close;
			} else {
				mes "[Professora]";
				mes "...Oh, me desculpe.";
				mes "Mas isso não é o para o qual eu estou olhando.";
				mes "Talvez você precise estudar um pouco?";
				close;
			}
		}
	} else {
		mes "[Professora]";
		mes "Você pensa que flores são belas?...";
		next;
		switch (select("Conversar","Sair")) {
			case 1:
			mes "[Professora]";
			mes "Quando eu era jovem, eu não tive nenhum amigo e estudei todo o tempo.";
			next;
			mes "[Professora]";
			mes "Às vezes eu lamento aquela decisão....";
			mes "Mas realmente não importa agora.";
			mes "Por trabalhar duro, eu sempre era a primeira a terminar as tarefas.";
			next;
			mes "[Professora]";
			mes "Eu estava porém muito só.....";
			mes "Derrepente as coisas ficaram difíceis e eu não tive ninguém para conversar sobre meus sentimentos.";
			next;
			mes "[Professora]";
			mes "Então um dia, eu achei minha melhor amiga.";
			next;
			mes "[Professora]";
			mes "Quando eu vi esta bonita flor desabrochar em um jardim abandonado....";
			mes "Eu percebi que nós eramos parecidas, eu achei minha melhor amiga.";
			next;
			mes "[Professora]";
			mes "Embora, a outros era há pouco uma flor comum....";
			mes "Para mim esta flor significou muito mais.";
			mes "Esta flor me deu a força para continuar meus estudos.";
			mes "Eu poderia alcançar minhas metas por causa dela.";
			next;
			mes "[Professora]";
			mes "Assim.. agora... eu estou tentando para reembolsar a ela.";
			mes "Eu comecei estudando Flores, e é minha meta para cobrir o mundo inteiro em Flores!";
			next;
			mes "[Professora]";
			mes "Realizar meu trabalho..";
			mes "Eu preciso de muito flores.";
			mes "Infelizmente por causa de meus estudos, eu raramente posso ir fora.";
			mes "É realmente duro achar tantas flores quanto preciso.";
			next;
			mes "[Professora]";
			mes "Eu preciso de 1 ^3355FFFlor das Ilusões^000000 ,1 ^3355FFHinalle^000000,1 ^3355FFAloe^000000 e 1 ^3355FFMenta^000000..";
			mes "Se você puder trazer estas flores a mim, eu estaria disposto lhe dar um artigo especial..";
			close;
			case 2:
			mes "[Professora]";
			mes "Um destes dias eu cobrirei este mundo inteiro com Flores.";
			close;
		}
	}
}
