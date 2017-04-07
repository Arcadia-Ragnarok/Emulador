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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Niflheim                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
niflheim,52,147,3	script	Keedz#nif	4_M_NFDEADSWDMAN,{
	mes "[Keedz]";
	mes "N�o permitirei que qualquer pessoa que esteja viva venha para esse lugar!";
	close;
}

// ------------------------------------------------------------------
niflheim,195,211,6	script	Gigantia#nif	4_M_NFDEADSWDMAN,3,3,{
	if (isequipped(Deviruchi_Cap) || isequipped(Snowy_Horn) || isequipped(Magestic_Goat)) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O que foi?";
		next;
		mes "[Gigantia]";
		mes "Apenas...";
		mes "Venha at� aqui.";
		mes "Tenho algo que venha servir para voc�.";
		next;
		mes "[Gigantia]";
		mes "Seu chifre est� torto.";
		mes "Certifique-se sempre se seu chifre est� reto e elegante.";
		mes "O Senhor dos Mortos sempre est� te vigiando.";
		close;
	}
	else {
		mes "[Gigantia]";
		mes "O Senhor dos Mortos sabe e v� tudo.";
		mes "� in�til se esconder e fugir do suave abra�o da morte.";
		close;
	}
}

// ------------------------------------------------------------------
niflheim,350,258,1	script	Alma Amaldi�oada#nif	4_NFWISP,{
	mes "[Bruce Ashe]";
	mes "Eu sinto que voc� est� amaldi�oado";
	mes "por uma magia poderosa...";
	mes "Hmm... � claro que";
	mes "voc� s� precisa....";
	next;
	mes "[Bruce Ashe]";
	mes "Se voc� quer se livrar de sua maldi��o....";
	mes "Passando-a para mim!!";
	next;
	mes "[Bruce Ashe]";
	mes "S� porque eu sou um esp�rito amaldi�oado, voc� acha que pode aventurar-se a jogar sua maldi��o em mim?!";
	emotion (e_an);
	next;
	mes "[Bruce Ashe]";
	mes "Me recuso deixar";
	mes "que voc� continue aqui.....";
	mes "saia agora ou irei";
	mes "tir�-lo a for�a....";
	next;
	mes "[Bruce Ashe]";
	mes "....E...";
	mes "....Fa�a o que fizer...";
	mes "....N�O toque em meus livros...";
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
nif_in,16,27,1	script	Galinha#nif	4_NFCOCK,{
	percentheal (-5,0);
	mes "[Galinha]";
	mes "Eu vivia uma vida pac�fica como uma galinha normal.";
	mes "Mas veio o dia que eu fui tragicamente morta e comida por humanos.";
	mes "Bem... Agora � minha vez!";
	mes "*Nhac!*";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Ai...!";
	mes "A galinha me atacou!";
	next;
	mes "[Galinha]";
	mes "Eu posso falar e banquetear de humanos vivos!";
	mes "Virar zumbi � maravilhoro!";
	mes "*Nhac!*";
	close;
}

// ------------------------------------------------------------------
nif_in,16,30,4	script	Morcego#nif	4_NFBAT,{
	percentheal (-5,0);
	mes "[Morcego]";
	mes "Oooh, que conveniente, um humano!";
	mes "Sangue fresco � sempre saboroso...!";
	mes "Acho que vou tomar apenas um gole.";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Ai! Minha veia!";
	mes "Voc� chupou o meu sangue?!";
	next;
	mes "[Morcego]";
	mes "Mwahahaha";
	mes "Mortal tolo!";
	mes "Cuidado com meus poderes!";
	close;
}

// ------------------------------------------------------------------
nif_in,156,93,5	script	Crian�a#nif	4_F_NFLOSTGIRL,{
	mes "[Anna Alakina]";
	mes "Onde... Onde estou...?";
	mes "Me lembro de estar dormindo e quando acordei estava aqui...";
	mes "Mam�e, voc� viu a minha m�e?";
	mes "Quero ir para casa...";
	mes "*solu�o*";
	next;
	switch(select("Sobre a bruxa","Sobre a maldi��o","Cancelar.")) {
		case 1:
		mes "[Anna Alakina]";
		mes "Bruxa...?";
		mes "Nuca vi uma bruxa, mas j� li sobre elas nos livros.";
		mes "N�o tenho certeza se elas existem ou n�o, mas seria t�o assustador se fosse verdade ...";
		next;
		mes "[Anna Alakina]";
		mes "Por que est� t�o frio aqui...?";
		mes "Voc� n�o esta sentindo frio ou medo?";
		mes "Quero ir para casa... � quente l�.";
		mes "Voc� poderia me ajudar a voltar para casa...";
		mes "Por favor...? M-me ajude...";
		close;
		case 2:
		mes "[Anna Alakina]";
		mes "Uma maldi��o...?";
		mes "Minha av� disse que existe muitas maldi��es pelo mundo.";
		mes "Voc� pode chamar algumas de maldi��es passageiras.";
		mes "Mas h� outras que te seguir�o o resto da vida...";
		next;
		mes "[Anna Alakina]";
		mes "Vov� tamb�m disse que maldi��es pode ser de outra forma...";
		mes "Como algu�m que est� sempre bravo contigo, e n�o vai te perdoar.";
		mes "Voc� pode considerar isso como uma maldi��o tamb�m.";
		next;
		mes "[Anna Alakina]";
		mes "Minha av� disse que s� existe um encantamento forte o bastante.";
		mes "Para quebrar uma maldi��o sobre voc�...";
		next;
		mes "[Anna Alakina]";
		mes "Klaatu...";
		mes "Verata.....";
		mes "Ne...ni...umm...?";
		mes "Como � mesma a ultima parte?";
		mes "E-eu n�o consigo lembrar a ultima parte do encantamento!";
		next;
		mes "[Anna Alakina]";
		mes "Se voc� repetir o encanto na ordem, ir� te libertar de qualquer de raiva ou �dio que tenham por voc�.";
		mes "E se fizer perto de um esp�rito mal�gno, eles que ser�o amaldi�oados.";
		next;
		mes "[Anna Alakina]";
		mes "Por que est� me perguntando sobre essas coisas assustadoras...?";
		mes "Eu s� quero ir para casa...";
		close;
		case 3:
		mes "[Anna Alakina]";
		mes "Est� frio aqui...";
		mes "Eu estou congelando...";
		mes "Eu quero ir para casa e fugir deste lugar assustador...";
		next;
		mes "[Anna Alakina]";
		mes "Por favor... me ajude.";
		mes "Poderia me levar com voc�...?";
		close;
	}
}