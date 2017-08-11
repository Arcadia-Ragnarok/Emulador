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
| - Nota: Npcs comuns na cidade Dicastes                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
dicastes01,194,159,5	script	Galten Entusiasmado#dic	4_MAN_GALTUN1,{
	mes "[Galten Entusiasmado]";
	if (isequipped(Ring_Of_Wise_King)) {
		emotion (e_lv);
		mes "N�o consigo tirar a linda imagem de Ahat da miha cabe�a.";
		mes "Enquanto tivermos ele, ser� apenas uma quest�o de tempo para que Sapha governe esta terra.";
	} else {
		mes "������ �� ���� ������ �� ��";
		mes "������ �� ����� �� �С��� �� ����� ������ �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,202,86,3	script	Sentinela#dic	4_MAN_GALTUN1,{
	mes "[Sentinela]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "El Dicastes, � a capital de Sapha.";
		mes "A terra � bem acidentada ent�o muitos forasteiros n�o podem entrar. Ha ha";
		next;
		mes "[Sentinela]";
		mes "...";
		next;
		mes "[Sentinela]";
		mes "Ei, voc� � de fora tamb�m!";
	} else {
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
dicastes01,194,95,5	script	Sentinela#dic2	4_MAN_GALTUN,{
	mes "[Sentinela]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu permito a sua entrada.";
		mes "Mas se causar problemas, n�o vai saber o que lhe atingiu.";
		mes "Cuidado!";
	} else {
		mes "������ �� ��";
		mes "����� �� ������ �� �� ������ ��";
		mes "������ �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,234,158,0	script	Galten Treinando#dic	4_MAN_GALTUN,{
	mes "[Galten Treinando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Estarei pronto para qualquer coisa se continuar treinando diariamente.";
	} else {
		mes "������ �� ������ ��";
		mes "�� ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,244,166,0	script	Galten Treinando#dic2	4_MAN_GALTUN,{
	mes "[Galten Treinando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Penso se Ahat sabe o qu�o duramente estou treinando.";
	} else {
		mes "������ ��";
		mes "������ �� ������ �� ������ ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,272,166,0	script	Galten Treinando#dic3	4_MAN_GALTUN,{
	mes "[Galten Treinando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Sou um guerreiro de Sapha.";
		mes "Nunca tenho pregui�a com meu treino.";
	} else {
		mes "������ �� ������ ��";
		mes "������ ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,248,129,0	script	Galten Treinando#dic4	4_MAN_GALTUN,{
	mes "[Galten Treinando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Treinando]";
		mes "Eu soube que isto n�o � equipamento de treinamento.";
		mes "Mas um massageador para um estagi�rio como eu.";
	} else {
		mes "������ �� ������";
		mes "������ �� ������ ��";
	}
	close;
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
		mes "[���С� �� ��]";
		mes "����� �� ��";
		mes "����� �� ����� �� ������ �� ����� �� ";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,261,1	script	Galten Aguardando#dic2	4_MAN_GALTUN1,{
	mes "[Galten Aguardando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Que t�dio.";
	} else {
		mes "������";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,381,261,1	script	Galten Aguardando#dic4	4_MAN_GALTUN1,{
	mes "[Galten Aguardando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Zzzzz...";
	} else {
		mes "����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,282,4	script	Galten Aguardando#dic5	4_MAN_GALTUN1,{
	mes "[Galten Aguardando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "El Dicastes is the most peaceful place in this world as long as I am here.";
	} else {
		mes "�� �� ������ �� ������ �� ����� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,354,219,4	script	Galten Descansando#dic	4_MAN_GALTUN1,{
	mes "[Galten Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Descansar � sempre t�o bom.";
	} else {
		mes "����� �� ��� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,365,197,1	script	Galten Descansando#dic2	4_MAN_GALTUN1,{
	mes "[Galten Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Os Galten tamb�m podem descansar enquanto ficam em p� assim.";
		next;
		mes "[Galten Descansando]";
		mes "Disse que n�o pare�oe star descansando? Mas eu j� estou acostumado com isso.";
	} else {
		mes "[������ �� ��]";
		mes "��� �� ����� �� �����";
		next;
		mes "[Galten Descansando]";
		mes "��� �� ������ �� �С��� �� �С��� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,87,102,5	script	Piom descansando#dic3	4_MAN_PIOM,{
	end;
}

// ------------------------------------------------------------------
dic_in01,29,119,4	script	Piom descansando#dic4	4_MAN_PIOM6,{
	mes "[Piom Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Porque � t�o barulhento enquanto estou descansando?";
	} else {
		mes "������ �� ����� �� ����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,91,113,5	script	Piom Suspeito#dic	4_MAN_PIOM6,{
	mes "[Piom Suspeito]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "J� ouviu os rumores sobre Ahat?";
		next;
		if(select("N�o!","Voc� primeiro.") == 1) {
			mes "[Piom Suspeito]";
			mes "N�o se preocupe.";
			close; 
		}
		mes "[Piom Suspeito]";
		mes "Oh, voc� parece saber?";
		mes "Preciso coletar informa��es.";
		mes "Voc� primeiro.";
		mes "Voc� ouviu os rumores, certo?";
		next;
		if(select("Algo duvidoso?:Se voc� n�o vai falar, eu tamb�m n�o!") == 1) {
			mes "[Piom Suspeito]";
			mes "Eu sou somente um";
			mes "Piom muito curioso.";
			close; 
		}
		mes "[Piom Suspeito]";
		mes "N�o irei dizer nada tamb�m!";
		close; 
	} else {
		mes "¡�¢³¡� ¡� ¡�¡þ¡ö";
		mes "¡� ¢³¢²¡÷ ¡�¡�";
		next;
		mes "[Piom Suspeito]";
		mes "�С��� �� �С���";
		close;
	}
}

// ------------------------------------------------------------------
dic_in01,149,104,5	script	Piom Cansado#dic	4_MAN_PIOM2,{
	mes "[Piom Cansado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Se precisar de alguma informa��o, ter� mais sorte com o Gato Mercador que vagabundando por aqui.";
		mes "Mas, claro, ter� que pagar o pre�o.";
		emotion (e_what);
	} else {
		mes "������ �� ��� �� ����� ����� �� ������ �� ��� ������ ��";
		mes "��С� �� ��";
		emotion (e_what);
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,341,113,3	script	Piom Cansado#dic2	4_MAN_PIOM5,{
	mes "[Piom Cansado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu acho que fico melhor mantos do que em couro.";
		mes "Acho que vou trocar por tric�.";
		mes "Mas minerar me parece mais convencional.";
		next;
		mes "[Piom Cansado]";
		mes "...";
		next;
		emotion (e_swt);
		mes "[Piom Cansado]";
		mes "Serei rejeitado de novo, n�?";
	} else {
		mes "����� �� ��Т�";
		mes "����� �� �򢱡� �� ��";
		mes "���� �� ����� �� ��";
		mes "������ �� ����� �� ����";
		next;
		mes "[Piom Cansado]";
		mes "��";
		next;
		emotion (e_swt);
		mes "[Piom Cansado]";
		mes "������ �� ����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,372,116,3	script	Piom Emocionado#dic	4_MAN_PIOM4,{
	mes "[Pion Emocionado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ahat � o �nico orgulho de Sapha.";
		mes "N�s temos muito Bradium por conta dele!";
		next;
		mes "[Piom Emocionado]";
		mes "...";
		next;
		mes "[Piom Emocionado]";
		mes "Voc� n�o sente sua ben��o?";
	} else {
		mes "����� �� ��";
		mes "����� �� ����";
		mes "����� �� ���� ��";
		mes "����� �� ������ �� ��";
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
dic_in01,42,250,5	script	Guia#dic	4_MAN_PIOM6,{
	mes "[Guia]";
	if (isequipped(Ring_Of_Wise_King)) {
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
		mes "������ �� ����� �� ������ �� ������ ��";
		mes "����� �� ����?";
		next;
		mes "[Guia]";
		mes "�С��� �� ������ �� ������";
		mes "����� �� ���� �� ���� �� ����� �� ����� �� ��";
		next;
		mes "[Guia]";
		mes "������ �� ����� �� ������ �� ������ �� ����";
		mes "���� �� ����";
		next;
		mes "[Guia]";
		mes "����� �� ����� �� ����� �� �� ��";
		next;
		mes "[Guia]";
		mes "����� �� ������ �� ���С� �� ���� �� ������ ��";
		mes "��� �� ����� �� ����";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,335,34,5	script	Pion Falante#dic	4_MAN_PIOM4,{
	mes "[Pion Falante]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Na minha f�brica n�s n�o s� refinamos Bradium.";
		mes "Como tamb�m produzimos v�rias ferramentas para o uso di�rio.";
		mes "N�s manufaturamos suprimentos de guerra aqui tamb�m.";
	} else {
		mes "������ �� ������ �� ���";
		mes "������ �� ����� �� �� ����� �� ������";
		mes "����� �� ������ �� ����� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,387,30,1	script	Piom de Manuk#dic	4_MAN_PIOM,{
	mes "[Piom de Manuk]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Voc�! Nos encontramos em Manuk, n�o �?";
		mes "Eu vim pegar uma arma que eu pedi.";
	} else {
		mes "����� �� ��� �� ��";
		mes "������ �� ����� �� ����� ����";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,282,210,4	script	Knit Livre#dic	4_MAN_NITT,{
	mes "[Knit Livre]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Enquanto tivermos um imenso suprimento de Bradium os Saphas podem viver para sempre.";
		mes "Nossa inf�ncia dura 10 anos, o que � muito pouco.";
	} else {
		mes "����� �� ������ �� ����� �� ����� �� ����� �� ���� �� ������";
		mes "�󢳡� �� ������ �� ���� �򢲡� �� ����";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,246,210,3	script	Venknick Livre#dic	4_MAN_BENKUNI,{
	mes "[Venknick Livre]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ao menos temos muito Bradium.";
		mes "Veja, voc� pode ver Bradium em todos os lugares.";
		next;
		mes "[Venknick Livre]";
		mes "?";
		next;
		mes "[Venknick Livre]";
		mes "Isso que est� rolando � uma gema, mas porque tem interesse nisso?";
	} else {
		mes "��� �� ������ �� ���";
		mes "����";
		mes "������ �� �����";
		mes "������ �� ����� ��";
		next;
		mes "[Venknick Livre]";
		mes "��";
		next;
		mes "[Venknick Livre]";
		mes "������ �� ��� �� ���";
		mes "������ �� ����� �� ����� ����";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,235,245,4	script	Piom Exitado#dic	4_MAN_PIOM4,{
	mes "[Piom Exitado]";
	if (isequipped(Ring_Of_Wise_King)) {
		emotion (e_ho);
		mes "Voc� j� viu Ahat?";
		mes "Sua popularidade aqui em El Discastes � fenomenal!";
		close;
	} else {
		emotion (e_ho);
		mes "������ �� ������ ��";
		mes "����� �� ����� �� ����� �� �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,284,262,3	script	Knit Gentil#dic	4_MAN_NITT,{
	mes "[Knit Gentil]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Diferente dos Raphine, n�s Saphas somos uma comunidade muito fechada.";
		mes "N�s come�amos a viver juntos em instala��es comuns depois de nascermos.";
		mes "� por isso que todos os Saphas s�o fam�lia.";
		mes "N�s nunca temos nenhuma briga entre classes.";
	} else {
		mes "������ �� ������ �� ����� �� ����� �� �� ����� �� ���� �� �����";
		mes "������ �� ������ �� ����";
		mes "������ �� ����� �� ����� ����";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,164,180,4	script	Limpy Piom#dic	4_MAN_PIOM6,{
	mes "[Limpy Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eles dizem que h� uma guerra acontecendo entre Splendide e Manuk.";
		mes "Espero que tudo esteja bem.";
		mes "Espero que n�o chegue at� esta capital.";
		emotion (e_dots);
	} else {
		mes "������ �� ���� ������ �� �� ������ �� ������";
		mes "���� �� ������";
		mes "����� �� ���� �� ����";
		emotion (e_dots);
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,191,202,4	script	Galten Reclamando#dic	4_MAN_GALTUN,{
	mes "[Galten Reclamando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Aquele Vanknick maluco sempre fala sobre a lenda daquela est�tua.";
		next;
		mes "[Galten Reclamando]";
		mes "Voc� j� conversou com ele?";
		next;
		if(select("N�o","Sim") == 1) {
			mes "[Galten Reclamando]";
			mes "Ent�o voc� n�o sabe sobre a lenda por tr�s da est�tua?";
			mes "Ent�o, eu n�o sei o que falar com voc�.";
			close; 
		}
		emotion (e_gg,0,"Venknick Maluco#fihsing1");
		mes "[Galten Reclamando]";
		mes "Voc� tamb�m caiu na daquele louco.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim";
		emotion (e_sob);
		next;
		mes "[Galten Reclamando]";
		mes "Esque�a r�pido disso, pelo seu pr�prio bem.";
		close;
	} else {
		mes "����� �� ������ �� ";
		mes "������ �� ������ �� ��";
		next;
		mes "[Galten Reclamando]";
		mes "�𢱡� �� ������";
		mes "������ �� ��";
		close;
	}
}

// ------------------------------------------------------------------
dicastes01,202,197,4	script	Venknick Maluco#dic	4_MAN_BENKUNI,{
	mes "[Venknick Maluco]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Por 5000 Zeny";
		mes "Eu vou lhe contar sobre a lenda por tr�s da est�tua.";
		next;
		if(select("Dar 5000 Zeny.","N�o dar 5000 Zeny.") == 2) {
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
			emotion (e_gg,0,"Galten Reclamando#fihs");
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Qual � a triste lenda?";
			next;
			emotion (e_dots);
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu perguntei do que se trata esta lenda!";
			next;
			mes "[Venknick Maluco]";
			mes "Eu n�o acredito em lendas.";
			next;
			emotion (e_dots);
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Me enganou?";
			sc_start (SC_BLIND,20000,0);
			next;
			mes "Voc� sente indigna��o por toda essa farsa.";
			close; 
		}
	} else {
		mes "������ �� ������";
		mes "���� �� ����� �� �����";
		close;
	}
}

// ------------------------------------------------------------------
dic_in01,98,110,5	script	Piom Preocupado#dic	4_MAN_PIOM6,{
	mes "[Piom Preocupado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu n�o vi meus amigos nas �ltimas horas.";
		mes "J� � hora deles pegarem";
	} else {
		mes "������ �� ����� �� �����";
		mes "����� �� ���� �� ��";
		mes "������ �� ��";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,98,96,3	script	Galten Perdido#dic	4_MAN_GALTUN1,{
	mes "[Galten Perdido]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu tenho vivido como um Piom por muito tempo.";
		mes "Agora � um mau h�bito, e eu me deparo aqui o tempo todo.";
	} else {
		mes "����� �� ����";
		mes "������ �� ";
		mes "��� �� ����";
	}
	close;
}
