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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Dicastes                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
dicastes01,202,86,3	script	Sentinela#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Sentinela]\n El Dicastes, � a capital de Sapha.\n A terra � bem acidentada ent�o muitos forasteiros n�o podem entrar.");
		next;
		mes("[Sentinela]\n ...");
		next;
		mes("[Sentinela]\n Ei, voc� � de fora tamb�m!");
	} else {
		mes("[Sentinela]\n ������ �� ��С� �� ����\n ���� �� ����� �� �С��� �� ����");
		next;
		mes("[Sentinela]\n ��");
		next;
		mes("[Sentinela]\n ����� �� �󢳡�");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,234,158,0	script	Galten Treinando#dic	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Treinando]\n Estarei pronto para qualquer coisa se continuar treinando diariamente.");
	} else {
		mes("[Galten Treinando]\n ������ �� ������ �� �� ��");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,244,166,0	script	Galten Treinando#dic2	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Treinando]\n Penso se Ahat sabe o qu�o duramente estou treinando.");
	} else {
		mes("[Galten Treinando]\n ������ �� ������ �� ������ �� ������ ��");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,272,166,0	script	Galten Treinando#dic3	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Treinando]\n Sou um guerreiro de Sapha.\n Nunca tenho pregui�a com meu treino.");
	} else {
		mes("[Galten Treinando]\n ������ �� ������ �� ������ ��");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,248,129,0	script	Galten Treinando#dic4	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Treinando]\n Eu soube que isto n�o � equipamento de treinamento.\n Mas um massageador para um estagi�rio como eu.");
	} else {
		mes("[Galten Treinando]\n ������ �� ������ ������ �� ������ ��");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,246,210,3	script	Venknick Livre#dic	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Venknick Livre]\n Ao menos temos muito Bradium.\n Veja, voc� pode ver Bradium em todos os lugares?");
		next;
		mes("[Venknick Livre]\n Isso que est� rolando � uma gema, mas porque tem interesse nisso?");
	} else {
		mes("[Venknick Livre]\n ��� �� ������ �� ��� ���� ������ �� ����� ������ �� ����� ��");
		next;
		mes("[Venknick Livre]\n ��");
		next;
		mes("[Venknick Livre]\n ������ �� ��� �� ��� ������ �� ����� �� ����� ����");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,235,245,4	script	Piom Exitado#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		emotion (e_ho);
		mes("[Piom Exitado]\n Voc� j� viu Ahat?\n Sua popularidade aqui em El Discastes � fenomenal!");
		close;
	} else {
		emotion (e_ho);
		mes("[Piom Exitado]\n ������ �� ������ ��\n ����� �� ����� �� ����� �� �� ��");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,284,262,3	script	Knit Gentil#dic	4_MAN_NITT,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Knit Gentil]\n Diferente dos Raphine, n�s Saphas somos uma comunidade muito fechada.\n N�s come�amos a viver juntos em instala��es comuns depois de nascermos.\n � por isso que todos os Saphas s�o fam�lia.\n N�s nunca temos nenhuma briga entre classes.");
	} else {
		mes("[Knit Gentil]\n ������ �� ������ �� ����� �� ����� �� �� ����� �� ���� �� ����� ������ �� ������ �� ���� ������ �� ����� �� ����� ����");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,164,180,4	script	Limpy Piom#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Limpy Piom]\n Eles dizem que h� uma guerra acontecendo entre Splendide e Manuk.\n Espero que tudo esteja bem.\n Espero que n�o chegue at� esta capital.");
		emotion(e_dots);
	} else {
		mes("[Limpy Piom]\n ������ �� ���� ������ �� �� ������ �� ������ ���� �� ������ ����� �� ���� �� ����");
		emotion(e_dots);
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,191,202,4	script	Galten Reclamando#dic	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Reclamando]\n Aquele Vanknick maluco sempre fala sobre a lenda daquela est�tua.");
		next;
		mes("[Galten Reclamando]\n Voc� j� conversou com ele?");
		next;
		if(select("N�o", "Sim") == 1) {
			mes("[Galten Reclamando]\n Ent�o voc� n�o sabe sobre a lenda por tr�s da est�tua?\n Ent�o, eu n�o sei o que falar com voc�.");
			close; 
		}
		emotion(e_gg, 0, "Venknick Maluco#dic");
		mes("[Galten Reclamando]\n Voc� tamb�m caiu na daquele louco.");
		next;
		mes("[" + strcharinfo(PC_NAME) + "]\n Sim");
		emotion(e_sob);
		next;
		mes("[Galten Reclamando]\n Esque�a r�pido disso, pelo seu pr�prio bem.");
		close;
	} else {
		mes("[Galten Reclamando]\n ����� �� ������ �� ������ �� ������ �� ��");
		next;
		mes("[Galten Reclamando]\n �𢱡� �� ������ ������ �� ��");
		close;
	}
}

// ------------------------------------------------------------------
dicastes01,202,197,4	script	Venknick Maluco#dic	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Venknick Maluco]\n Por 5000 Zeny.\n Eu vou lhe contar sobre a lenda por tr�s da est�tua.");
		next;
		if(select("Dar 5000 Zeny", "N�o dar 5000 Zeny") == 2) {
			mes("[Venknick Maluco]\n N�o volte com arrependimentos.");
			close; 
		}
		if (Zeny < 5000) {
			mes("[Venknick Maluco]\n Eu n�o tenho lendas para compartilhar com os pobres.");
			close; 
		} else {
			Zeny -= 5000;
			mes("[Venknick Maluco]\n Obrigado.");
			emotion(e_gg, 0, "Galten Reclamando#dic");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n Qual � a triste lenda?");
			next;
			emotion(e_dots);
			mes("[" + strcharinfo(PC_NAME) + "]\n Eu perguntei do que se trata esta lenda!");
			next;
			mes("[Venknick Maluco]\n Eu n�o acredito em lendas.");
			next;
			emotion(e_dots);
			mes("[" + strcharinfo(PC_NAME) + "]\n Me enganou?");
			sc_start(SC_BLIND, 20000, 0);
			next;
			mes("^777777Voc� sente indigna��o por toda essa farsa^000000.");
			close; 
		}
	} else {
		mes("[Venknick Maluco]\n ������ �� ������ ���� �� ����� �� �����");
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
dic_in01,349,282,4	script	Galten Aguardando#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Aguardando]\n Aqui � a Esta��o de Batalha.\n Estamos todos tensos para come�ar a batalha.");
	} else {
		mes("[Galten Aguardando]\n ����� �� �� ����� �� ����� �� ������ �� ����� ��");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,261,1	script	Galten Aguardando#dic2	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Aguardando]\n Que t�dio.");
	} else {
		mes("[Galten Aguardando]\n ������");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,381,261,1	script	Galten Aguardando#dic3	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Aguardando]\n Zzzzz...");
	} else {
		mes("[Galten Aguardando]\n ����");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,282,4	script	Galten Aguardando#dic4	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Aguardando]\n El Dicastes is the most peaceful place in this world as long as I am here.");
	} else {
		mes("[Galten Aguardando]\n �� �� ������ �� ������ �� ����� �� ��");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,354,219,4	script	Galten Descansando#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Descansando]\n Descansar � sempre t�o bom.");
	} else {
		mes("[Galten Descansando]\n ����� �� ��� �� ��");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,365,197,1	script	Galten Descansando#dic2	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Descansando]\n Os Galten tamb�m podem descansar enquanto ficam em p� assim.");
		next;
		mes("[Galten Descansando]\n Disse que n�o pare�oe star descansando? Mas eu j� estou acostumado com isso.");
	} else {
		mes("[Galten Descansando]\n ��� �� ����� �� �����");
		next;
		mes("[Galten Descansando]\n ��� �� ������ �� �С��� �� �С��� �� ��");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,87,102,5	script	Piom descansando#dic	4_MAN_PIOM,{
	end;
}

// ------------------------------------------------------------------
dic_in01,29,119,4	script	Piom descansando#dic2	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom Descansando]\n Porque � t�o barulhento enquanto estou descansando?");
	} else {
		mes("[Piom Descansando]\n ������ �� ����� �� ����");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,91,113,5	script	Mineiro Desconfiado#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Mineiro Desconfiado]\n J� ouviu os rumores sobre Ahat?");
		next;
		if(select("N�o!", "Voc� primeiro") == 1) {
			mes("[Mineiro Desconfiado]\n N�o se preocupe.");
			close; 
		}
		mes("[Mineiro Desconfiado]\n Oh, voc� parece saber?\n Preciso coletar informa��es.\n Voc� primeiro.\n Voc� ouviu os rumores, certo?");
		next;
		if(select("Algo duvidoso?", "Se voc� n�o vai falar, eu tamb�m n�o!") == 1) {
			mes("[Mineiro Desconfiado]\n Eu sou somente um Piom muito curioso.");
			close; 
		}
		mes("[Mineiro Desconfiado]\n N�o irei dizer nada tamb�m!");
		close; 
	} else {
		mes("[Mineiro Desconfiado]\n ¡�¢³¡� ¡� ¡�¡þ¡ö\n ¡� ¢³¢²¡÷ ¡�¡�");
		next;
		mes("[Mineiro Desconfiado]\n �С��� �� �С���");
		close;
	}
}

// ------------------------------------------------------------------
dic_in01,149,104,5	script	Mineiro Cansado#dic	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Mineiro Cansado]\n Se precisar de alguma informa��o, ter� mais sorte com o Gato Mercador que vagabundando por aqui.\n Mas, claro, ter� que pagar o pre�o.");
		emotion(e_what);
	} else {
		mes("[Mineiro Cansado]\n ������ �� ��� �� ����� ����� �� ������ �� ��� ������ ��\n ��С� �� ��");
		emotion(e_what);
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,341,113,3	script	Mineiro Cansado#dic2	4_MAN_PIOM5,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Mineiro Cansado]\n Eu acho que fico melhor mantos do que em couro.\n Acho que vou trocar por tric�.\n Mas minerar me parece mais convencional.");
		next;
		mes("[Mineiro Cansado]\n ...");
		next;
		emotion(e_swt);
		mes("[Mineiro Cansado]\n Serei rejeitado de novo, n�?");
	} else {
		mes("[Mineiro Cansado]\n ����� �� ��Т� ����� �� �򢱡� �� �� ���� �� ����� �� ��\n ������ �� ����� �� ����");
		next;
		mes("[Mineiro Cansado]\n ��");
		next;
		emotion (e_swt);
		mes("[Mineiro Cansado]\n ������ �� ����");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,372,116,3	script	Piom Emocionado#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Pion Emocionado]\n Ahat � o �nico orgulho de Sapha.\n N�s temos muito Bradium por conta dele!");
		next;
		mes("[Piom Emocionado]\n ...");
		next;
		mes("[Piom Emocionado]\n Voc� n�o sente sua ben��o?");
	} else {
		mes("[Piom Emocionado]\n ����� �� �� ����� �� ����\n ����� �� ���� �� ����� �� ������ �� ��");
		next;
		mes("[Pion Emocionado]\n ��");
		next;
		mes("[Pion Emocionado]\n �Т��� �� ���\n ����� �� ����");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,42,250,5	script	Guia Dior#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Guia]\n Sou Dior, seu am�vel guia em El Dicastes.\n Como posso ajudar?");
		next;
		mes("[Guia]\n Voc� deve apresentar suas acusa��es civis aqui.\n Servi�os civis e as zonas de El Dicastes s�o geridos na Sala de Situa��o no andar de cima.");
		next;
		mes("[Guia]\n O Escrit�rio Administrativo est� localizado no piso superior e lida com assuntos muito importantes.\n O Quarto de Arquivo est� no n�vel mais baixo, onde voc� pode obter uma grande quantidade de informa��es.");
		next;
		mes("[Guia]\n Ali�s, voc� deve usar o elevador ali atr�s para acessar os outros andares.");
		next;
		mes("[Guia]\n Oh, voc� n�o perguntou?\n Mas j� que sou Dior, o am�vel Guia. He he.");
	} else {
		mes("[Guia]\n ������ �� ����� �� ������ �� ������ �� ����� �� ����?");
		next;
		mes("[Guia]\n �С��� �� ������ �� ������\n ����� �� ���� �� ���� �� ����� �� ����� �� ��");
		next;
		mes("[Guia]\n ������ �� ����� �� ������ �� ������ �� ���� ���� �� ����");
		next;
		mes("[Guia]\n ����� �� ����� �� ����� �� �� ��");
		next;
		mes("[Guia]\n ����� �� ������ �� ���С� �� ���� �� ������ �� ��� �� ����� �� ����");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,335,34,5	script	Pion Falante#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Pion Falante]\n Na minha f�brica n�s n�o s� refinamos Bradium.\n Como tamb�m produzimos v�rias ferramentas para o uso di�rio.\n N�s manufaturamos suprimentos de guerra aqui tamb�m.");
	} else {
		mes("[Pion Falante]\n ������ �� ������ �� ��� ������ �� ����� �� �� ����� �� ������ ����� �� ������ �� ����� �� ��");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,387,30,1	script	Mineiro de Manuk#dic	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom de Manuk]\n Voc�!\n Nos encontramos em Manuk, n�o �?\n Eu vim pegar uma arma que eu pedi.");
	} else {
		mes("[Piom de Manuk]\n ����� �� ��� �� �� ������ �� ����� �� ����� ����");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,98,110,5	script	Piom Preocupado#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom Preocupado]\n Eu n�o vi meus amigos nas �ltimas horas.\n J� � hora deles pegarem.");
	} else {
		mes("[Piom Preocupado]\n ������ �� ����� �� ����� ����� �� ���� �� �� ������ �� ��");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,98,96,3	script	Galten Perdido#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Perdido]\n Eu tenho vivido como um Piom por muito tempo.\n Agora � um mau h�bito, e eu me deparo aqui o tempo todo.");
	} else {
		mes("[Galten Perdido]\n ����� �� ���� ������ �� ��� �� ����");
	}
	close;
}
