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
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Dicastes                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
dicastes01,194,159,5	script	Galten Entusiasmado#dic	4_MAN_GALTUN1,{
	mes "[Galten Entusiasmado]";
	if (isequipped(Ring_Of_Wise_King)) {
		emotion (e_lv);
		mes "Não consigo tirar a linda imagem de Ahat da miha cabeça.";
		mes "Enquanto tivermos ele, será apenas uma questão de tempo para que Sapha governe esta terra.";
	} else {
		mes "¡ø¢²¢£ ¡Ð ¡ò¡ð¡ð ¡÷¡ø¡ñ ¡ü ¡ü";
		mes "¡ù¢²¢³ ¢² ¡ó¡õ¡ô ¢£ ¡Ð¡û¡ü ¡ò ¡ð¡ö¢£ ¢¤¡õ¡þ ¡÷ ¡ñ";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,202,86,3	script	Sentinela#dic	4_MAN_GALTUN1,{
	mes "[Sentinela]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "El Dicastes, é a capital de Sapha.";
		mes "A terra é bem acidentada então muitos forasteiros não podem entrar. Ha ha";
		next;
		mes "[Sentinela]";
		mes "...";
		next;
		mes "[Sentinela]";
		mes "Ei, você é de fora também!";
	} else {
		mes "¡ô¢±¢± ¡û ¡ó¡Ð¡ñ ¢£ ¢¤¡ú";
		mes "¡ø¡ó¢² ¢¤ ¡õ¡ó¡Ð ¢³ ¡Ð¡õ¢£ ¡û ¡ú¡ï";
		next;
		mes "[Sentinela]";
		mes "¡ù";
		next;
		mes "[Sentinela]";
		mes "¡ñ¡ö¡ï ¡ú ¡ó¢³¡ô";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,194,95,5	script	Sentinela#dic2	4_MAN_GALTUN,{
	mes "[Sentinela]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu permito a sua entrada.";
		mes "Mas se causar problemas, não vai saber o que lhe atingiu.";
		mes "Cuidado!";
	} else {
		mes "¡ø¡ô¡ü ¡ø ¡ó";
		mes "¡ø¡ï¡û ¡ó ¡û¢¤¢² ¡÷ ¢£ ¢¤¡ô¡ø ¢³";
		mes "¡÷¡û¡ö ¡õ ¡ø";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,234,158,0	script	Galten Treinando#dic	4_MAN_GALTUN,{
	mes "[Galten Treinando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Estarei pronto para qualquer coisa se continuar treinando diariamente.";
	} else {
		mes "¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø";
		mes "¡ô ¡ø";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,244,166,0	script	Galten Treinando#dic2	4_MAN_GALTUN,{
	mes "[Galten Treinando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Penso se Ahat sabe o quão duramente estou treinando.";
	} else {
		mes "¡ø¡ô¡ü ¡ø";
		mes "¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,272,166,0	script	Galten Treinando#dic3	4_MAN_GALTUN,{
	mes "[Galten Treinando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Sou um guerreiro de Sapha.";
		mes "Nunca tenho preguiça com meu treino.";
	} else {
		mes "¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø";
		mes "¡ø¡ô¡ü ¡ø";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,248,129,0	script	Galten Treinando#dic4	4_MAN_GALTUN,{
	mes "[Galten Treinando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Treinando]";
		mes "Eu soube que isto não é equipamento de treinamento.";
		mes "Mas um massageador para um estagiário como eu.";
	} else {
		mes "¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü";
		mes "¡ø¡ô¡ü ¡ø ¡ø¡ô¡ü ¡ø";
	}
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
dic_in01,349,282,4	script	Galten Aguardando#dic	4_MAN_GALTUN1,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galten Aguardando]";
		mes "Aqui é a Estação de Batalha.";
		mes "Estamos todos tensos para começar a batalha.";
	} else {
		mes "[¢²¡Ð¡û ¡ù ¡Ð]";
		mes "¡ñ¡õ¡ü ¢£ ¡ó";
		mes "¢¤¡ó¡õ ¢£ ¢£¡ò¡ô ¡ö ¡ú¢¤¡ú ¢¤ ¡ò¡ö¡õ ¢¤ ";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,261,1	script	Galten Aguardando#dic2	4_MAN_GALTUN1,{
	mes "[Galten Aguardando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Que tédio.";
	} else {
		mes "¡ù¢¤¢±";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,381,261,1	script	Galten Aguardando#dic4	4_MAN_GALTUN1,{
	mes "[Galten Aguardando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Zzzzz...";
	} else {
		mes "¡ú¡ô";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,370,282,4	script	Galten Aguardando#dic5	4_MAN_GALTUN1,{
	mes "[Galten Aguardando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "El Dicastes is the most peaceful place in this world as long as I am here.";
	} else {
		mes "¡ï¡ï¢³ ¡þ ¡ö¢³¢£ ¢± ¢³¡û¡õ ¡ø ¡þ¡ï¡ï ¡ø ¡û";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,354,219,4	script	Galten Descansando#dic	4_MAN_GALTUN1,{
	mes "[Galten Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Descansar é sempre tão bom.";
	} else {
		mes "¡ï¡õ¡ù ¡ö ¡ò¡ð¢² ¢³ ¡ö";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,365,197,1	script	Galten Descansando#dic2	4_MAN_GALTUN1,{
	mes "[Galten Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Os Galten também podem descansar enquanto ficam em pé assim.";
		next;
		mes "[Galten Descansando]";
		mes "Disse que não pareçoe star descansando? Mas eu já estou acostumado com isso.";
	} else {
		mes "[¡õ¡ø¡ò ¡ü ¢¤]";
		mes "¡ô¡ï¢¤ ¡ö ¡ù¡ð¡ñ ¡ü ¡ó¡û¡û";
		next;
		mes "[Galten Descansando]";
		mes "¡ï¢£¡ó ¡ù ¢³¡ô¡ð ¢£ ¡Ð¡û¡ô ¡ô ¡Ð¡ú¡ù ¡ô ¡ó";
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
		mes "Porque é tão barulhento enquanto estou descansando?";
	} else {
		mes "¡ü¢²¡ð ¡Ð ¡ò¡ø¢² ¡ô ¢²¡õ";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,91,113,5	script	Piom Suspeito#dic	4_MAN_PIOM6,{
	mes "[Piom Suspeito]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Já ouviu os rumores sobre Ahat?";
		next;
		if(select("Não!","Você primeiro.") == 1) {
			mes "[Piom Suspeito]";
			mes "Não se preocupe.";
			close; 
		}
		mes "[Piom Suspeito]";
		mes "Oh, você parece saber?";
		mes "Preciso coletar informações.";
		mes "Você primeiro.";
		mes "Você ouviu os rumores, certo?";
		next;
		if(select("Algo duvidoso?:Se você não vai falar, eu também não!") == 1) {
			mes "[Piom Suspeito]";
			mes "Eu sou somente um";
			mes "Piom muito curioso.";
			close; 
		}
		mes "[Piom Suspeito]";
		mes "Não irei dizer nada também!";
		close; 
	} else {
		mes "Â¡óÂ¢Â³Â¡ó Â¡ó Â¡óÂ¡Ã¾Â¡Ã¶";
		mes "Â¡õ Â¢Â³Â¢Â²Â¡Ã· Â¡óÂ¡ó";
		next;
		mes "[Piom Suspeito]";
		mes "¡Ð¡û¡ô ¡ô ¡Ð¡ú¡ù";
		close;
	}
}

// ------------------------------------------------------------------
dic_in01,149,104,5	script	Piom Cansado#dic	4_MAN_PIOM2,{
	mes "[Piom Cansado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Se precisar de alguma informação, terá mais sorte com o Gato Mercador que vagabundando por aqui.";
		mes "Mas, claro, terá que pagar o preço.";
		emotion (e_what);
	} else {
		mes "¡ö¡õ¡ó ¢¤ ¡ò¡ò¢³ ¡ô ¡ô¡ó¡ñ ¢£¡ñ¡þ ¡ü ¢²¡û¡ó ¡ò ¡ð¡þ ¡ö¡ú¡ñ ¢³";
		mes "¡ð¡Ð¡ú ¡ø ¢²";
		emotion (e_what);
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,341,113,3	script	Piom Cansado#dic2	4_MAN_PIOM5,{
	mes "[Piom Cansado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu acho que fico melhor mantos do que em couro.";
		mes "Acho que vou trocar por tricô.";
		mes "Mas minerar me parece mais convencional.";
		next;
		mes "[Piom Cansado]";
		mes "...";
		next;
		emotion (e_swt);
		mes "[Piom Cansado]";
		mes "Serei rejeitado de novo, né?";
	} else {
		mes "¡÷¡ò¡û ¡ó ¡ó¡Ð¢±";
		mes "¡ó¡õ¡ù ¡þ ¡ò¢±¡ñ ¡õ ¢£";
		mes "¡ü¡ð¢¤ ¡ù ¡ò¡ô¡õ ¡ò ¡ñ";
		mes "¢³¡ú¢³ ¡Ð ¡ñ¡õ¡ù ¡÷ ¡÷¢±";
		next;
		mes "[Piom Cansado]";
		mes "¡þ";
		next;
		emotion (e_swt);
		mes "[Piom Cansado]";
		mes "¡ø¡ú¡ø ¢± ¡ö¡ò";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,372,116,3	script	Piom Emocionado#dic	4_MAN_PIOM4,{
	mes "[Pion Emocionado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ahat é o único orgulho de Sapha.";
		mes "Nós temos muito Bradium por conta dele!";
		next;
		mes "[Piom Emocionado]";
		mes "...";
		next;
		mes "[Piom Emocionado]";
		mes "Você não sente sua benção?";
	} else {
		mes "¡ò¡õ¢³ ¡õ ¡ô";
		mes "¢£¡ó¡ø ¢² ¡ô¡÷";
		mes "¡ò¡ô¢³ ¡ù ¢±¡ó¢± ¡õ";
		mes "¡ó¡ü¡Ð ¡ø ¢²¡ü¡Ð ¡õ ¡ï";
		next;
		mes "[Pion Emocionado]";
		mes "¢£";
		next;
		mes "[Pion Emocionado]";
		mes "¡Ð¢¤¡ù ¢£ ¡ó¡ó";
		mes "¡ù¡ó¡÷ ¡û ¡þ¡ô";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,42,250,5	script	Guia#dic	4_MAN_PIOM6,{
	mes "[Guia]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Sou Dior, seu amável guia em El Dicastes.";
		mes "Como posso ajudar?";
		next;
		mes "[Guia]";
		mes "Você deve apresentar suas acusações civis aqui.";
		mes "Serviços civis e as zonas de El Dicastes são geridos na Sala de Situação no andar de cima.";
		next;
		mes "[Guia]";
		mes "O Escritório Administrativo está localizado no piso superior e lida com assuntos muito importantes.";
		mes "O Quarto de Arquivo está no nível mais baixo, onde você pode obter uma grande quantidade de informações.";
		next;
		mes "[Guia]";
		mes "Aliás, você deve usar o elevador ali atrás para acessar os outros andares.";
		next;
		mes "[Guia]";
		mes "Oh, você não perguntou?";
		mes "Mas já que sou Dior, o amável Guia. He he.";
	} else {
		mes "¡õ¢£¡ó ¡Ð ¡õ¡ñ¡ò ¢¤ ¡ø¡ø¢£ ¢± ¢²¢³¡÷ ¢±";
		mes "¡ö¡ò¡ð ¡ó ¡ô¡ô?";
		next;
		mes "[Guia]";
		mes "¡Ð¡ù¡ó ¡ù ¡ü¢²¡Ð ¢± ¡÷¡ö¡þ";
		mes "¡ñ¡þ¢² ¡ø ¡ó¡ï¡ï ¡ù ¡ð¡ñ¡Ð ¡ù ¢³¡ò¡þ ¡ù ¡ø¡ð¡õ ¡õ ¢¤";
		next;
		mes "[Guia]";
		mes "¡û¡ù¡ô ¡ø ¡ð¡þ¡÷ ¢³ ¡þ¡ù¡ñ ¡ú ¡ü¢¤¡ò ¡ú ¡ô¢£";
		mes "¡÷¡ò¢¤ ¡ø ¡û¢³";
		next;
		mes "[Guia]";
		mes "¡ô¡ð¡ñ ¢¤ ¡ó¡÷¢³ ¡þ ¡ó¡õ¡÷ ¡ö ¡ó ¡ö";
		next;
		mes "[Guia]";
		mes "¡ò¡ô¡ø ¡÷ ¡õ¡ø¡ð ¡ó ¢¤¡Ð¡ô ¡ø ¡ñ¡ñ¡ñ ¡ø ¡ú¡ö¡ø ¡ü";
		mes "¡ï¢³¡ð ¢¤ ¡ð¡ö¢£ ¢± ¡ô¡ø";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,335,34,5	script	Pion Falante#dic	4_MAN_PIOM4,{
	mes "[Pion Falante]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Na minha fábrica nós não só refinamos Bradium.";
		mes "Como também produzimos várias ferramentas para o uso diário.";
		mes "Nós manufaturamos suprimentos de guerra aqui também.";
	} else {
		mes "¡ü¡ù¢± ¢³ ¡÷¡ø¡ï ¡þ ¡ó¡ó";
		mes "¡þ¡ú¡ò ¢± ¡û¡ò¡ò ¡ù ¡÷ ¢³¡ò¡ò ¡ù ¢±¢£¡ò";
		mes "¡ñ¡õ¡ò ¡ó ¡÷¡ü¡ù ¡ö ¡ñ¡ø¡ü ¡ú ¡ô";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,387,30,1	script	Piom de Manuk#dic	4_MAN_PIOM,{
	mes "[Piom de Manuk]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Você! Nos encontramos em Manuk, não é?";
		mes "Eu vim pegar uma arma que eu pedi.";
	} else {
		mes "¡ü¡ó¡þ ¡ó ¡ï¡ð¢¤ ¡ü ¡ð¢±";
		mes "¡ù¡ô¡ï ¡ú ¡ñ¡ù¢³ ¡ó ¡ò¡ö¡ó ¡ô¡ô";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,282,210,4	script	Knit Livre#dic	4_MAN_NITT,{
	mes "[Knit Livre]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Enquanto tivermos um imenso suprimento de Bradium os Saphas podem viver para sempre.";
		mes "Nossa infância dura 10 anos, o que é muito pouco.";
	} else {
		mes "¢³¡ð¡ï ¢£ ¡ù¡ô¡ò ¡ô ¡ó¡þ¡ñ ¢² ¡ñ¡û¢£ ¢² ¡ô¡ó¡ð ¡þ ¢£¡ð¢¤ ¡õ ¡û¢³¡ü";
		mes "¡ó¢³¡ò ¢± ¡ô¢£¢² ¡÷ ¡÷¡ñ ¡ò¢²¡ï ¢£ ¡ö¡ö";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,246,210,3	script	Venknick Livre#dic	4_MAN_BENKUNI,{
	mes "[Venknick Livre]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ao menos temos muito Bradium.";
		mes "Veja, você pode ver Bradium em todos os lugares.";
		next;
		mes "[Venknick Livre]";
		mes "?";
		next;
		mes "[Venknick Livre]";
		mes "Isso que está rolando é uma gema, mas porque tem interesse nisso?";
	} else {
		mes "¡ô¡ï¢£ ¢¤ ¡÷¡õ¢± ¡ü ¡ñ¡õ";
		mes "¡ü¢³";
		mes "¡ö¡ù¢¤ ¢² ¡ù¡ó¡ô";
		mes "¡ü¢£¢³ ¡ø ¡û¡ð¡ü ¡õ";
		next;
		mes "[Venknick Livre]";
		mes "¡ù";
		next;
		mes "[Venknick Livre]";
		mes "¡þ¢¤¢£ ¢± ¡ó¡ò¢³ ¡ü ¡ñ¡ð";
		mes "¢±¡û¢£ ¡ö ¡ü¡ò¡÷ ¡û ¡õ¡ò¡÷ ¢²¢²";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,235,245,4	script	Piom Exitado#dic	4_MAN_PIOM4,{
	mes "[Piom Exitado]";
	if (isequipped(Ring_Of_Wise_King)) {
		emotion (e_ho);
		mes "Você já viu Ahat?";
		mes "Sua popularidade aqui em El Discastes é fenomenal!";
		close;
	} else {
		emotion (e_ho);
		mes "¡ú¡þ¡ó ¢³ ¡ü¢²¡ñ ¢±";
		mes "¢³¡ó¡ñ ¡õ ¡ð¡ô¡þ ¡÷ ¡ú¡ò¡õ ¡ø ¢² ¡ø";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,284,262,3	script	Knit Gentil#dic	4_MAN_NITT,{
	mes "[Knit Gentil]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Diferente dos Raphine, nós Saphas somos uma comunidade muito fechada.";
		mes "Nós começamos a viver juntos em instalações comuns depois de nascermos.";
		mes "É por isso que todos os Saphas são família.";
		mes "Nós nunca temos nenhuma briga entre classes.";
	} else {
		mes "¡ô¢±¡ó ¡õ ¡ú¡÷¡Ð ¡õ ¡ü¡ï¡Ð ¡õ ¡ô¡ó¡ü ¡ó ¢³ ¡ñ¡ô¡ü ¡þ ¢¤¡ñ¢¤ ¡ô ¡û¡ï¡ù";
		mes "¡ú¡ö¡ô ¡ó ¢£¡ú¡þ ¡ø ¡ø¡ò";
		mes "¢²¢³¡û ¢¤ ¡ú¡ñ¡ù ¡û ¢³¡ò¡ø ¡õ¡õ";
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,164,180,4	script	Limpy Piom#dic	4_MAN_PIOM6,{
	mes "[Limpy Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eles dizem que há uma guerra acontecendo entre Splendide e Manuk.";
		mes "Espero que tudo esteja bem.";
		mes "Espero que não chegue até esta capital.";
		emotion (e_dots);
	} else {
		mes "¢²¡ô¡þ ¡ù ¡õ¡Ð ¢³¡ô¡û ¡ú ¡ø ¢³¡þ¢¤ ¡ó ¡õ¡÷¡Ð";
		mes "¡ñ¡ò¡ü ¡ü ¡ù¡þ¢±";
		mes "¢¤¡ò¡þ ¢¤ ¢£¡ñ ¢¤ ¢£¡ñ";
		emotion (e_dots);
	}
	close;
}

// ------------------------------------------------------------------
dicastes01,191,202,4	script	Galten Reclamando#dic	4_MAN_GALTUN,{
	mes "[Galten Reclamando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Aquele Vanknick maluco sempre fala sobre a lenda daquela estátua.";
		next;
		mes "[Galten Reclamando]";
		mes "Você já conversou com ele?";
		next;
		if(select("Não","Sim") == 1) {
			mes "[Galten Reclamando]";
			mes "Então você não sabe sobre a lenda por trás da estátua?";
			mes "Então, eu não sei o que falar com você.";
			close; 
		}
		emotion (e_gg,0,"Venknick Maluco#fihsing1");
		mes "[Galten Reclamando]";
		mes "Você também caiu na daquele louco.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim";
		emotion (e_sob);
		next;
		mes "[Galten Reclamando]";
		mes "Esqueça rápido disso, pelo seu próprio bem.";
		close;
	} else {
		mes "¡õ¡ò¡û ¡ò ¢£¡û¡÷ ¡÷ ";
		mes "¡û¡ù¡û ¡÷ ¡ü¡þ¡û ¢³ ¡ó";
		next;
		mes "[Galten Reclamando]";
		mes "¡ð¢±¡ü ¡û ¡õ¡÷¢¤";
		mes "¢¤¡þ¡ø ¢² ¡÷";
		close;
	}
}

// ------------------------------------------------------------------
dicastes01,202,197,4	script	Venknick Maluco#dic	4_MAN_BENKUNI,{
	mes "[Venknick Maluco]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Por 5000 Zeny";
		mes "Eu vou lhe contar sobre a lenda por trás da estátua.";
		next;
		if(select("Dar 5000 Zeny.","Não dar 5000 Zeny.") == 2) {
			mes "[Venknick Maluco]";
			mes "Não volte com arrependimentos.";
			close; 
		}
		if (Zeny < 5000) {
			mes "[Venknick Maluco]";
			mes "Eu não tenho lendas para compartilhar com os pobres.";
			close; 
		} else {
			Zeny -= 5000;
			mes "[Venknick Maluco]";
			mes "Obrigado.";
			emotion (e_gg,0,"Galten Reclamando#fihs");
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Qual é a triste lenda?";
			next;
			emotion (e_dots);
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu perguntei do que se trata esta lenda!";
			next;
			mes "[Venknick Maluco]";
			mes "Eu não acredito em lendas.";
			next;
			emotion (e_dots);
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Me enganou?";
			sc_start (SC_BLIND,20000,0);
			next;
			mes "Você sente indignação por toda essa farsa.";
			close; 
		}
	} else {
		mes "¢²¡û¡ó ¡ó ¡ù¢¤¡ø";
		mes "¢¤¡ð¢² ¢± ¡ñ¡ö¢² ¡ø ¡ï¡ö¡ü";
		close;
	}
}

// ------------------------------------------------------------------
dic_in01,98,110,5	script	Piom Preocupado#dic	4_MAN_PIOM6,{
	mes "[Piom Preocupado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu não vi meus amigos nas últimas horas.";
		mes "Já é hora deles pegarem";
	} else {
		mes "¡û¢±¡÷ ¢² ¡ï¡þ¡ò ¡ü ¡ï¡û¢²";
		mes "¡ï¡÷¢¤ ¡Ð ¡ï¡ï¡Ð ¢¤ ¢£";
		mes "¡÷¡þ¡ð ¡ó ¡ñ";
	}
	close;
}

// ------------------------------------------------------------------
dic_in01,98,96,3	script	Galten Perdido#dic	4_MAN_GALTUN1,{
	mes "[Galten Perdido]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu tenho vivido como um Piom por muito tempo.";
		mes "Agora é um mau hábito, e eu me deparo aqui o tempo todo.";
	} else {
		mes "¡ó¡ô¡ï ¡û ¢³¡ú";
		mes "¡ü¡ø¡ñ ¢£ ";
		mes "¡ö¡ï¢² ¡û ¡ö¡ó";
	}
	close;
}
