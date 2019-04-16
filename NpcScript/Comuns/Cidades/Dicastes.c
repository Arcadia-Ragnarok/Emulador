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
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na cidade Dicastes                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
dicastes01,202,86,3	script	Sentinela#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Sentinela]";
		mes "El Dicastes, � a capital de Sapha.";
		mes "A terra � bem acidentada ent�o muitos forasteiros n�o podem entrar.";
		next;
		mes "[Sentinela]";
		mes "...";
		next;
		mes "[Sentinela]";
		mes "Ei, voc� � de fora tamb�m!";
	} else {
		mes "[Sentinela]";
		mes "������ �� ��С� �� ����";
		mes "���� �� ����� �� �С��� �� ����";
		next;
		mes "[Sentinela]";
		mes "��";
		next;
		mes "[Sentinela]";
		mes "����� �� �󢳡�";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,234,158,0	script	Galten Treinando#dic	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Treinando]";
		mes "Estarei pronto para qualquer coisa se continuar treinando diariamente.";
	} else {
		mes "[Galten Treinando]";
		mes "������ �� ������ �� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,244,166,0	script	Galten Treinando#dic2	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Treinando]";
		mes "Penso se Ahat sabe o qu�o duramente estou treinando.";
	} else {
		mes "[Galten Treinando]";
		mes "������ �� ������ �� ������ �� ������ ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,272,166,0	script	Galten Treinando#dic3	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Treinando]";
		mes "Sou um guerreiro de Sapha.";
		mes "Nunca tenho pregui�a com meu treino.";
	} else {
		mes "[Galten Treinando]";
		mes "������ �� ������ �� ������ ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,248,129,0	script	Galten Treinando#dic4	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Treinando]";
		mes "Eu soube que isto n�o � equipamento de treinamento.";
		mes "Mas um massageador para um estagi�rio como eu.";
	} else {
		mes "[Galten Treinando]";
		mes "������ �� ������ ������ �� ������ ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,246,210,3	script	Venknick Livre#dic	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Venknick Livre]";
		mes "Ao menos temos muito Bradium.";
		mes "Veja, voc� pode ver Bradium em todos os lugares?";
		next;
		mes "[Venknick Livre]";
		mes "Isso que est� rolando � uma gema, mas porque tem interesse nisso?";
	} else {
		mes "[Venknick Livre]";
		mes "��� �� ������ �� ��� ���� ������ �� ����� ������ �� ����� ��";
		next;
		mes "[Venknick Livre]";
		mes "��";
		next;
		mes "[Venknick Livre]";
		mes "������ �� ��� �� ��� ������ �� ����� �� ����� ����";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,235,245,4	script	Piom Exitado#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		emotion(e_ho);
		mes "[Piom Exitado]";
		mes "Voc� j� viu Ahat?";
		mes "Sua popularidade aqui em El Discastes � fenomenal!";
		close;
	} else {
		emotion(e_ho);
		mes "[Piom Exitado]";
		mes "������ �� ������ ��";
		mes "����� �� ����� �� ����� �� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,284,262,3	script	Knit Gentil#dic	4_MAN_NITT,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Knit Gentil]";
		mes "Diferente dos Raphine, n�s Saphas somos uma comunidade muito fechada.";
		mes "N�s come�amos a viver juntos em instala��es comuns depois de nascermos.";
		mes "� por isso que todos os Saphas s�o fam�lia.";
		mes "N�s nunca temos nenhuma briga entre classes.";
	} else {
		mes "[Knit Gentil]";
		mes "������ �� ������ �� ����� �� ����� �� �� ����� �� ���� �� ����� ������ �� ������ �� ���� ������ �� ����� �� ����� ����";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,164,180,4	script	Limpy Piom#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Limpy Piom]";
		mes "Eles dizem que h� uma guerra acontecendo entre Splendide e Manuk.";
		mes "Espero que tudo esteja bem.";
		mes "Espero que n�o chegue at� esta capital.";
		emotion(e_dots);
	} else {
		mes "[Limpy Piom]";
		mes "������ �� ���� ������ �� �� ������ �� ������ ���� �� ������ ����� �� ���� �� ����";
		emotion(e_dots);
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,191,202,4	script	Galten Reclamando#dic	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Reclamando]";
		mes "Aquele Vanknick maluco sempre fala sobre a lenda daquela est�tua.";
		next;
		mes "[Galten Reclamando]";
		mes "Voc� j� conversou com ele?";
		next;
		if (select("N�o","Sim") == 1) {
			mes "[Galten Reclamando]";
			mes "Ent�o voc� n�o sabe sobre a lenda por tr�s da est�tua?";
			mes "Ent�o, eu n�o sei o que falar com voc�.";
			close; 
		}
		emotion(e_gg, 0, "Venknick Maluco#dic");
		mes "[Galten Reclamando]";
		mes "Voc� tamb�m caiu na daquele louco.";
		next;
		mes "["+strcharinfo(CHAR_NAME)+"]";
		mes "Sim";
		emotion(e_sob);
		next;
		mes "[Galten Reclamando]";
		mes "Esque�a r�pido disso, pelo seu pr�prio bem.";
		close;
	} else {
		mes "[Galten Reclamando]";
		mes "����� �� ������ �� ������ �� ������ �� ��";
		next;
		mes "[Galten Reclamando]";
		mes "�𢱡� �� ������ ������ �� ��";
		close;
	}
}

// ------------------------------------------------------------------
dicastes01,202,197,4	script	Venknick Maluco#dic	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Venknick Maluco]";
		mes "Por 5000 Zeny.";
		mes "Eu vou lhe contar sobre a lenda por tr�s da est�tua.";
		next;
		if (select("Dar 5000 Zeny","N�o dar 5000 Zeny") == 2) {
			mes "[Venknick Maluco]";
			mes "N�o volte com arrependimentos.";
			close; 
		}
		if (Zeny < 5000) {
			mes "[Venknick Maluco]";
			mes "Eu n�o tenho lendas para compartilhar com os pobres.";
			close; 
		} else {
			Zeny -= 5000;
			mes "[Venknick Maluco]";
			mes "Obrigado.";
			emotion(e_gg, 0, "Galten Reclamando#dic");
			next;
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Qual � a triste lenda?";
			next;
			emotion(e_dots);
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Eu perguntei do que se trata esta lenda!";
			next;
			mes "[Venknick Maluco]";
			mes "Eu n�o acredito em lendas.";
			next;
			emotion(e_dots);
			mes "["+strcharinfo(CHAR_NAME)+"]";
			mes "Me enganou?";
			sc_start(SC_BLIND, 20000, 0);
			next;
			mes "^777777Voc� sente indigna��o por toda essa farsa^000000.";
			close; 
		}
	} else {
		mes "[Venknick Maluco]";
		mes "������ �� ������ ���� �� ����� �� �����";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
dic_in01,349,282,4	script	Galten Aguardando#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Aguardando]";
		mes "Aqui � a Esta��o de Batalha.";
		mes "Estamos todos tensos para come�ar a batalha.";
	} else {
		mes "[Galten Aguardando]";
		mes "����� �� �� ����� �� ����� �� ������ �� ����� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,261,1	script	Galten Aguardando#dic2	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Aguardando]";
		mes "Que t�dio.";
	} else {
		mes "[Galten Aguardando]";
		mes "������";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,381,261,1	script	Galten Aguardando#dic3	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Aguardando]";
		mes "Zzzzz...";
	} else {
		mes "[Galten Aguardando]";
		mes "����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,282,4	script	Galten Aguardando#dic4	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Aguardando]";
		mes "El Dicastes is the most peaceful place in this world as long as I am here.";
	} else {
		mes "[Galten Aguardando]";
		mes "�� �� ������ �� ������ �� ����� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,354,219,4	script	Galten Descansando#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Descansando]";
		mes "Descansar � sempre t�o bom.";
	} else {
		mes "[Galten Descansando]";
		mes "����� �� ��� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,365,197,1	script	Galten Descansando#dic2	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Descansando]";
		mes "Os Galten tamb�m podem descansar enquanto ficam em p� assim.";
		next;
		mes "[Galten Descansando]";
		mes "Disse que n�o pare�oe star descansando? Mas eu j� estou acostumado com isso.";
	} else {
		mes "[Galten Descansando]";
		mes "��� �� ����� �� �����";
		next;
		mes "[Galten Descansando]";
		mes "��� �� ������ �� �С��� �� �С��� �� ��";
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
		mes "[Piom Descansando]";
		mes "Porque � t�o barulhento enquanto estou descansando?";
	} else {
		mes "[Piom Descansando]";
		mes "������ �� ����� �� ����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,91,113,5	script	Mineiro Desconfiado#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Mineiro Desconfiado]";
		mes "J� ouviu os rumores sobre Ahat?";
		next;
		if (select("N�o!","Voc� primeiro") == 1) {
			mes "[Mineiro Desconfiado]";
			mes "N�o se preocupe.";
			close; 
		}
		mes "[Mineiro Desconfiado]";
		mes "Oh, voc� parece saber?";
		mes "Preciso coletar informa��es.";
		mes "Voc� primeiro.";
		mes "Voc� ouviu os rumores, certo?";
		next;
		if (select("Algo duvidoso?","Se voc� n�o vai falar, eu tamb�m n�o!") == 1) {
			mes "[Mineiro Desconfiado]";
			mes "Eu sou somente um Piom muito curioso.";
			close; 
		}
		mes "[Mineiro Desconfiado]";
		mes "N�o irei dizer nada tamb�m!";
		close; 
	} else {
		mes "[Mineiro Desconfiado]";
		mes "¡�¢³¡� ¡� ¡�¡þ¡ö";
		mes "¡� ¢³¢²¡÷ ¡�¡�";
		next;
		mes "[Mineiro Desconfiado]";
		mes "�С��� �� �С���";
		close;
	}
}

// ------------------------------------------------------------------
dic_in01,149,104,5	script	Mineiro Cansado#dic	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Mineiro Cansado]";
		mes "Se precisar de alguma informa��o, ter� mais sorte com o Gato Mercador que vagabundando por aqui.";
		mes "Mas, claro, ter� que pagar o pre�o.";
		emotion(e_what);
	} else {
		mes "[Mineiro Cansado]";
		mes "������ �� ��� �� ����� ����� �� ������ �� ��� ������ ��";
		mes "��С� �� ��";
		emotion(e_what);
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,341,113,3	script	Mineiro Cansado#dic2	4_MAN_PIOM5,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Mineiro Cansado]";
		mes "Eu acho que fico melhor mantos do que em couro.";
		mes "Acho que vou trocar por tric�.";
		mes "Mas minerar me parece mais convencional.";
		next;
		mes "[Mineiro Cansado]";
		mes "...";
		next;
		emotion(e_swt);
		mes "[Mineiro Cansado]";
		mes "Serei rejeitado de novo, n�?";
	} else {
		mes "[Mineiro Cansado]";
		mes "����� �� ��Т� ����� �� �򢱡� �� �� ���� �� ����� �� ��";
		mes "������ �� ����� �� ����";
		next;
		mes "[Mineiro Cansado]";
		mes "��";
		next;
		emotion(e_swt);
		mes "[Mineiro Cansado]";
		mes "������ �� ����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,372,116,3	script	Piom Emocionado#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Pion Emocionado]";
		mes "Ahat � o �nico orgulho de Sapha.";
		mes "N�s temos muito Bradium por conta dele!";
		next;
		mes "[Piom Emocionado]";
		mes "...";
		next;
		mes "[Piom Emocionado]";
		mes "Voc� n�o sente sua ben��o?";
	} else {
		mes "[Piom Emocionado]";
		mes "����� �� �� ����� �� ����";
		mes "����� �� ���� �� ����� �� ������ �� ��";
		next;
		mes "[Pion Emocionado]";
		mes "��";
		next;
		mes "[Pion Emocionado]";
		mes "�Т��� �� ���";
		mes "����� �� ����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,42,250,5	script	Guia Dior#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Guia]";
		mes "Sou Dior, seu am�vel guia em El Dicastes.";
		mes "Como posso ajudar?";
		next;
		mes "[Guia]";
		mes "Voc� deve apresentar suas acusa��es civis aqui.";
		mes "Servi�os civis e as zonas de El Dicastes s�o geridos na Sala de Situa��o no andar de cima.";
		next;
		mes "[Guia]";
		mes "O Escrit�rio Administrativo est� localizado no piso superior e lida com assuntos muito importantes.";
		mes "O Quarto de Arquivo est� no n�vel mais baixo, onde voc� pode obter uma grande quantidade de informa��es.";
		next;
		mes "[Guia]";
		mes "Ali�s, voc� deve usar o elevador ali atr�s para acessar os outros andares.";
		next;
		mes "[Guia]";
		mes "Oh, voc� n�o perguntou?";
		mes "Mas j� que sou Dior, o am�vel Guia. He he.";
	} else {
		mes "[Guia]";
		mes "������ �� ����� �� ������ �� ������ �� ����� �� ����?";
		next;
		mes "[Guia]";
		mes "�С��� �� ������ �� ������";
		mes "����� �� ���� �� ���� �� ����� �� ����� �� ��";
		next;
		mes "[Guia]";
		mes "������ �� ����� �� ������ �� ������ �� ���� ���� �� ����";
		next;
		mes "[Guia]";
		mes "����� �� ����� �� ����� �� �� ��";
		next;
		mes "[Guia]";
		mes "����� �� ������ �� ���С� �� ���� �� ������ �� ��� �� ����� �� ����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,335,34,5	script	Pion Falante#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Pion Falante]";
		mes "Na minha f�brica n�s n�o s� refinamos Bradium.";
		mes "Como tamb�m produzimos v�rias ferramentas para o uso di�rio.";
		mes "N�s manufaturamos suprimentos de guerra aqui tamb�m.";
	} else {
		mes "[Pion Falante]";
		mes "������ �� ������ �� ��� ������ �� ����� �� �� ����� �� ������ ����� �� ������ �� ����� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,387,30,1	script	Mineiro de Manuk#dic	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Piom de Manuk]";
		mes "Voc�!";
		mes "Nos encontramos em Manuk, n�o �?";
		mes "Eu vim pegar uma arma que eu pedi.";
	} else {
		mes "[Piom de Manuk]";
		mes "����� �� ��� �� �� ������ �� ����� �� ����� ����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,98,110,5	script	Piom Preocupado#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Piom Preocupado]";
		mes "Eu n�o vi meus amigos nas �ltimas horas.";
		mes "J� � hora deles pegarem.";
	} else {
		mes "[Piom Preocupado]";
		mes "������ �� ����� �� ����� ����� �� ���� �� �� ������ �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,98,96,3	script	Galten Perdido#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Perdido]";
		mes "Eu tenho vivido como um Piom por muito tempo.";
		mes "Agora � um mau h�bito, e eu me deparo aqui o tempo todo.";
	} else {
		mes "[Galten Perdido]";
		mes "����� �� ���� ������ �� ��� �� ����";
	}
	close;
}
