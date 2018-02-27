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
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Dicastes                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
dicastes01,202,86,3	script	Sentinela#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Sentinela]\n El Dicastes, é a capital de Sapha.\n A terra é bem acidentada então muitos forasteiros não podem entrar.");
		next;
		mes("[Sentinela]\n ...");
		next;
		mes("[Sentinela]\n Ei, você é de fora também!");
	} else {
		mes("[Sentinela]\n ¡ô¢±¢± ¡û ¡ó¡Ð¡ñ ¢£ ¢¤¡ú\n ¡ø¡ó¢² ¢¤ ¡õ¡ó¡Ð ¢³ ¡Ð¡õ¢£ ¡û ¡ú¡ï");
		next;
		mes("[Sentinela]\n ¡ù");
		next;
		mes("[Sentinela]\n ¡ñ¡ö¡ï ¡ú ¡ó¢³¡ô");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,234,158,0	script	Galten Treinando#dic	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Treinando]\n Estarei pronto para qualquer coisa se continuar treinando diariamente.");
	} else {
		mes("[Galten Treinando]\n ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø ¡ô ¡ø");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,244,166,0	script	Galten Treinando#dic2	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Treinando]\n Penso se Ahat sabe o quão duramente estou treinando.");
	} else {
		mes("[Galten Treinando]\n ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,272,166,0	script	Galten Treinando#dic3	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Treinando]\n Sou um guerreiro de Sapha.\n Nunca tenho preguiça com meu treino.");
	} else {
		mes("[Galten Treinando]\n ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,248,129,0	script	Galten Treinando#dic4	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Treinando]\n Eu soube que isto não é equipamento de treinamento.\n Mas um massageador para um estagiário como eu.");
	} else {
		mes("[Galten Treinando]\n ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,246,210,3	script	Venknick Livre#dic	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Venknick Livre]\n Ao menos temos muito Bradium.\n Veja, você pode ver Bradium em todos os lugares?");
		next;
		mes("[Venknick Livre]\n Isso que está rolando é uma gema, mas porque tem interesse nisso?");
	} else {
		mes("[Venknick Livre]\n ¡ô¡ï¢£ ¢¤ ¡÷¡õ¢± ¡ü ¡ñ¡õ ¡ü¢³ ¡ö¡ù¢¤ ¢² ¡ù¡ó¡ô ¡ü¢£¢³ ¡ø ¡û¡ð¡ü ¡õ");
		next;
		mes("[Venknick Livre]\n ¡ù");
		next;
		mes("[Venknick Livre]\n ¡þ¢¤¢£ ¢± ¡ó¡ò¢³ ¡ü ¡ñ¡ð ¢±¡û¢£ ¡ö ¡ü¡ò¡÷ ¡û ¡õ¡ò¡÷ ¢²¢²");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,235,245,4	script	Piom Exitado#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		emotion (e_ho);
		mes("[Piom Exitado]\n Você já viu Ahat?\n Sua popularidade aqui em El Discastes é fenomenal!");
		close;
	} else {
		emotion (e_ho);
		mes("[Piom Exitado]\n ¡ú¡þ¡ó ¢³ ¡ü¢²¡ñ ¢±\n ¢³¡ó¡ñ ¡õ ¡ð¡ô¡þ ¡÷ ¡ú¡ò¡õ ¡ø ¢² ¡ø");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,284,262,3	script	Knit Gentil#dic	4_MAN_NITT,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Knit Gentil]\n Diferente dos Raphine, nós Saphas somos uma comunidade muito fechada.\n Nós começamos a viver juntos em instalações comuns depois de nascermos.\n É por isso que todos os Saphas são família.\n Nós nunca temos nenhuma briga entre classes.");
	} else {
		mes("[Knit Gentil]\n ¡ô¢±¡ó ¡õ ¡ú¡÷¡Ð ¡õ ¡ü¡ï¡Ð ¡õ ¡ô¡ó¡ü ¡ó ¢³ ¡ñ¡ô¡ü ¡þ ¢¤¡ñ¢¤ ¡ô ¡û¡ï¡ù ¡ú¡ö¡ô ¡ó ¢£¡ú¡þ ¡ø ¡ø¡ò ¢²¢³¡û ¢¤ ¡ú¡ñ¡ù ¡û ¢³¡ò¡ø ¡õ¡õ");
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,164,180,4	script	Limpy Piom#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Limpy Piom]\n Eles dizem que há uma guerra acontecendo entre Splendide e Manuk.\n Espero que tudo esteja bem.\n Espero que não chegue até esta capital.");
		emotion(e_dots);
	} else {
		mes("[Limpy Piom]\n ¢²¡ô¡þ ¡ù ¡õ¡Ð ¢³¡ô¡û ¡ú ¡ø ¢³¡þ¢¤ ¡ó ¡õ¡÷¡Ð ¡ñ¡ò¡ü ¡ü ¡ù¡þ¢± ¢¤¡ò¡þ ¢¤ ¢£¡ñ ¢¤ ¢£¡ñ");
		emotion(e_dots);
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,191,202,4	script	Galten Reclamando#dic	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Reclamando]\n Aquele Vanknick maluco sempre fala sobre a lenda daquela estátua.");
		next;
		mes("[Galten Reclamando]\n Você já conversou com ele?");
		next;
		if(select("Não", "Sim") == 1) {
			mes("[Galten Reclamando]\n Então você não sabe sobre a lenda por trás da estátua?\n Então, eu não sei o que falar com você.");
			close; 
		}
		emotion(e_gg, 0, "Venknick Maluco#dic");
		mes("[Galten Reclamando]\n Você também caiu na daquele louco.");
		next;
		mes("[" + strcharinfo(PC_NAME) + "]\n Sim");
		emotion(e_sob);
		next;
		mes("[Galten Reclamando]\n Esqueça rápido disso, pelo seu próprio bem.");
		close;
	} else {
		mes("[Galten Reclamando]\n ¡õ¡ò¡û ¡ò ¢£¡û¡÷ ¡÷ ¡û¡ù¡û ¡÷ ¡ü¡þ¡û ¢³ ¡ó");
		next;
		mes("[Galten Reclamando]\n ¡ð¢±¡ü ¡û ¡õ¡÷¢¤ ¢¤¡þ¡ø ¢² ¡÷");
		close;
	}
}

// ------------------------------------------------------------------
dicastes01,202,197,4	script	Venknick Maluco#dic	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Venknick Maluco]\n Por 5000 Zeny.\n Eu vou lhe contar sobre a lenda por trás da estátua.");
		next;
		if(select("Dar 5000 Zeny", "Não dar 5000 Zeny") == 2) {
			mes("[Venknick Maluco]\n Não volte com arrependimentos.");
			close; 
		}
		if (Zeny < 5000) {
			mes("[Venknick Maluco]\n Eu não tenho lendas para compartilhar com os pobres.");
			close; 
		} else {
			Zeny -= 5000;
			mes("[Venknick Maluco]\n Obrigado.");
			emotion(e_gg, 0, "Galten Reclamando#dic");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n Qual é a triste lenda?");
			next;
			emotion(e_dots);
			mes("[" + strcharinfo(PC_NAME) + "]\n Eu perguntei do que se trata esta lenda!");
			next;
			mes("[Venknick Maluco]\n Eu não acredito em lendas.");
			next;
			emotion(e_dots);
			mes("[" + strcharinfo(PC_NAME) + "]\n Me enganou?");
			sc_start(SC_BLIND, 20000, 0);
			next;
			mes("^777777Você sente indignação por toda essa farsa^000000.");
			close; 
		}
	} else {
		mes("[Venknick Maluco]\n ¢²¡û¡ó ¡ó ¡ù¢¤¡ø ¢¤¡ð¢² ¢± ¡ñ¡ö¢² ¡ø ¡ï¡ö¡ü");
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
dic_in01,349,282,4	script	Galten Aguardando#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Aguardando]\n Aqui é a Estação de Batalha.\n Estamos todos tensos para começar a batalha.");
	} else {
		mes("[Galten Aguardando]\n ¡ñ¡õ¡ü ¢£ ¡ó ¢¤¡ó¡õ ¢£ ¢£¡ò¡ô ¡ö ¡ú¢¤¡ú ¢¤ ¡ò¡ö¡õ ¢¤");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,261,1	script	Galten Aguardando#dic2	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Aguardando]\n Que tédio.");
	} else {
		mes("[Galten Aguardando]\n ¡ù¢¤¢±");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,381,261,1	script	Galten Aguardando#dic3	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Aguardando]\n Zzzzz...");
	} else {
		mes("[Galten Aguardando]\n ¡ú¡ô");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,282,4	script	Galten Aguardando#dic4	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Aguardando]\n El Dicastes is the most peaceful place in this world as long as I am here.");
	} else {
		mes("[Galten Aguardando]\n ¡ï¡ï¢³ ¡þ ¡ö¢³¢£ ¢± ¢³¡û¡õ ¡ø ¡þ¡ï¡ï ¡ø ¡û");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,354,219,4	script	Galten Descansando#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Descansando]\n Descansar é sempre tão bom.");
	} else {
		mes("[Galten Descansando]\n ¡ï¡õ¡ù ¡ö ¡ò¡ð¢² ¢³ ¡ö");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,365,197,1	script	Galten Descansando#dic2	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Descansando]\n Os Galten também podem descansar enquanto ficam em pé assim.");
		next;
		mes("[Galten Descansando]\n Disse que não pareçoe star descansando? Mas eu já estou acostumado com isso.");
	} else {
		mes("[Galten Descansando]\n ¡ô¡ï¢¤ ¡ö ¡ù¡ð¡ñ ¡ü ¡ó¡û¡û");
		next;
		mes("[Galten Descansando]\n ¡ï¢£¡ó ¡ù ¢³¡ô¡ð ¢£ ¡Ð¡û¡ô ¡ô ¡Ð¡ú¡ù ¡ô ¡ó");
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
		mes("[Piom Descansando]\n Porque é tão barulhento enquanto estou descansando?");
	} else {
		mes("[Piom Descansando]\n ¡ü¢²¡ð ¡Ð ¡ò¡ø¢² ¡ô ¢²¡õ");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,91,113,5	script	Mineiro Desconfiado#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Mineiro Desconfiado]\n Já ouviu os rumores sobre Ahat?");
		next;
		if(select("Não!", "Você primeiro") == 1) {
			mes("[Mineiro Desconfiado]\n Não se preocupe.");
			close; 
		}
		mes("[Mineiro Desconfiado]\n Oh, você parece saber?\n Preciso coletar informações.\n Você primeiro.\n Você ouviu os rumores, certo?");
		next;
		if(select("Algo duvidoso?", "Se você não vai falar, eu também não!") == 1) {
			mes("[Mineiro Desconfiado]\n Eu sou somente um Piom muito curioso.");
			close; 
		}
		mes("[Mineiro Desconfiado]\n Não irei dizer nada também!");
		close; 
	} else {
		mes("[Mineiro Desconfiado]\n Â¡óÂ¢Â³Â¡ó Â¡ó Â¡óÂ¡Ã¾Â¡Ã¶\n Â¡õ Â¢Â³Â¢Â²Â¡Ã· Â¡óÂ¡ó");
		next;
		mes("[Mineiro Desconfiado]\n ¡Ð¡û¡ô ¡ô ¡Ð¡ú¡ù");
		close;
	}
}

// ------------------------------------------------------------------
dic_in01,149,104,5	script	Mineiro Cansado#dic	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Mineiro Cansado]\n Se precisar de alguma informação, terá mais sorte com o Gato Mercador que vagabundando por aqui.\n Mas, claro, terá que pagar o preço.");
		emotion(e_what);
	} else {
		mes("[Mineiro Cansado]\n ¡ö¡õ¡ó ¢¤ ¡ò¡ò¢³ ¡ô ¡ô¡ó¡ñ ¢£¡ñ¡þ ¡ü ¢²¡û¡ó ¡ò ¡ð¡þ ¡ö¡ú¡ñ ¢³\n ¡ð¡Ð¡ú ¡ø ¢²");
		emotion(e_what);
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,341,113,3	script	Mineiro Cansado#dic2	4_MAN_PIOM5,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Mineiro Cansado]\n Eu acho que fico melhor mantos do que em couro.\n Acho que vou trocar por tricô.\n Mas minerar me parece mais convencional.");
		next;
		mes("[Mineiro Cansado]\n ...");
		next;
		emotion(e_swt);
		mes("[Mineiro Cansado]\n Serei rejeitado de novo, né?");
	} else {
		mes("[Mineiro Cansado]\n ¡÷¡ò¡û ¡ó ¡ó¡Ð¢± ¡ó¡õ¡ù ¡þ ¡ò¢±¡ñ ¡õ ¢£ ¡ü¡ð¢¤ ¡ù ¡ò¡ô¡õ ¡ò ¡ñ\n ¢³¡ú¢³ ¡Ð ¡ñ¡õ¡ù ¡÷ ¡÷¢±");
		next;
		mes("[Mineiro Cansado]\n ¡þ");
		next;
		emotion (e_swt);
		mes("[Mineiro Cansado]\n ¡ø¡ú¡ø ¢± ¡ö¡ò");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,372,116,3	script	Piom Emocionado#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Pion Emocionado]\n Ahat é o único orgulho de Sapha.\n Nós temos muito Bradium por conta dele!");
		next;
		mes("[Piom Emocionado]\n ...");
		next;
		mes("[Piom Emocionado]\n Você não sente sua benção?");
	} else {
		mes("[Piom Emocionado]\n ¡ò¡õ¢³ ¡õ ¡ô ¢£¡ó¡ø ¢² ¡ô¡÷\n ¡ò¡ô¢³ ¡ù ¢±¡ó¢± ¡õ ¡ó¡ü¡Ð ¡ø ¢²¡ü¡Ð ¡õ ¡ï");
		next;
		mes("[Pion Emocionado]\n ¢£");
		next;
		mes("[Pion Emocionado]\n ¡Ð¢¤¡ù ¢£ ¡ó¡ó\n ¡ù¡ó¡÷ ¡û ¡þ¡ô");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,42,250,5	script	Guia Dior#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Guia]\n Sou Dior, seu amável guia em El Dicastes.\n Como posso ajudar?");
		next;
		mes("[Guia]\n Você deve apresentar suas acusações civis aqui.\n Serviços civis e as zonas de El Dicastes são geridos na Sala de Situação no andar de cima.");
		next;
		mes("[Guia]\n O Escritório Administrativo está localizado no piso superior e lida com assuntos muito importantes.\n O Quarto de Arquivo está no nível mais baixo, onde você pode obter uma grande quantidade de informações.");
		next;
		mes("[Guia]\n Aliás, você deve usar o elevador ali atrás para acessar os outros andares.");
		next;
		mes("[Guia]\n Oh, você não perguntou?\n Mas já que sou Dior, o amável Guia. He he.");
	} else {
		mes("[Guia]\n ¡õ¢£¡ó ¡Ð ¡õ¡ñ¡ò ¢¤ ¡ø¡ø¢£ ¢± ¢²¢³¡÷ ¢± ¡ö¡ò¡ð ¡ó ¡ô¡ô?");
		next;
		mes("[Guia]\n ¡Ð¡ù¡ó ¡ù ¡ü¢²¡Ð ¢± ¡÷¡ö¡þ\n ¡ñ¡þ¢² ¡ø ¡ó¡ï¡ï ¡ù ¡ð¡ñ¡Ð ¡ù ¢³¡ò¡þ ¡ù ¡ø¡ð¡õ ¡õ ¢¤");
		next;
		mes("[Guia]\n ¡û¡ù¡ô ¡ø ¡ð¡þ¡÷ ¢³ ¡þ¡ù¡ñ ¡ú ¡ü¢¤¡ò ¡ú ¡ô¢£ ¡÷¡ò¢¤ ¡ø ¡û¢³");
		next;
		mes("[Guia]\n ¡ô¡ð¡ñ ¢¤ ¡ó¡÷¢³ ¡þ ¡ó¡õ¡÷ ¡ö ¡ó ¡ö");
		next;
		mes("[Guia]\n ¡ò¡ô¡ø ¡÷ ¡õ¡ø¡ð ¡ó ¢¤¡Ð¡ô ¡ø ¡ñ¡ñ¡ñ ¡ø ¡ú¡ö¡ø ¡ü ¡ï¢³¡ð ¢¤ ¡ð¡ö¢£ ¢± ¡ô¡ø");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,335,34,5	script	Pion Falante#dic	4_MAN_PIOM4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Pion Falante]\n Na minha fábrica nós não só refinamos Bradium.\n Como também produzimos várias ferramentas para o uso diário.\n Nós manufaturamos suprimentos de guerra aqui também.");
	} else {
		mes("[Pion Falante]\n ¡ü¡ù¢± ¢³ ¡÷¡ø¡ï ¡þ ¡ó¡ó ¡þ¡ú¡ò ¢± ¡û¡ò¡ò ¡ù ¡÷ ¢³¡ò¡ò ¡ù ¢±¢£¡ò ¡ñ¡õ¡ò ¡ó ¡÷¡ü¡ù ¡ö ¡ñ¡ø¡ü ¡ú ¡ô");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,387,30,1	script	Mineiro de Manuk#dic	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom de Manuk]\n Você!\n Nos encontramos em Manuk, não é?\n Eu vim pegar uma arma que eu pedi.");
	} else {
		mes("[Piom de Manuk]\n ¡ü¡ó¡þ ¡ó ¡ï¡ð¢¤ ¡ü ¡ð¢± ¡ù¡ô¡ï ¡ú ¡ñ¡ù¢³ ¡ó ¡ò¡ö¡ó ¡ô¡ô");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,98,110,5	script	Piom Preocupado#dic	4_MAN_PIOM6,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom Preocupado]\n Eu não vi meus amigos nas últimas horas.\n Já é hora deles pegarem.");
	} else {
		mes("[Piom Preocupado]\n ¡û¢±¡÷ ¢² ¡ï¡þ¡ò ¡ü ¡ï¡û¢² ¡ï¡÷¢¤ ¡Ð ¡ï¡ï¡Ð ¢¤ ¢£ ¡÷¡þ¡ð ¡ó ¡ñ");
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,98,96,3	script	Galten Perdido#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galten Perdido]\n Eu tenho vivido como um Piom por muito tempo.\n Agora é um mau hábito, e eu me deparo aqui o tempo todo.");
	} else {
		mes("[Galten Perdido]\n ¡ó¡ô¡ï ¡û ¢³¡ú ¡ü¡ø¡ñ ¢£ ¡ö¡ï¢² ¡û ¡ö¡ó");
	}
	close;
}
