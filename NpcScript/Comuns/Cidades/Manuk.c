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
| - Nota: Npcs comuns na cidade Manuk                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
/*
manuk,304,195,5	script	Soldado#man	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
	mes("[Fornecedor de Alimentos]\n O sustento da família Manuk consiste principalmente no refinamento de Cinzas Hollows.\n Que foram enterrados há muito tempo no fundo da terra.");
	} else {
	mes("[Fornecedor de Alimentos]\n Gdiios duuie Dssoas pogggd fdrul fdddoweet");
	}
	close;
}
*/

// ------------------------------------------------------------------
/*
manuk,274,239,5	script	Soldado#man2	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Soldado Ferido de Manuk]\n Não posso absorver a Essência de Bradium por causa do meu ferimento fatal.\n Aquelas fadas perversas me atacaram e me deixaram assim.");
		next;
		mes("[Soldado Ferido de Manuk]\n Eu gostaria de poder matar todas as fadas...");
	} else {
		mes("[Soldado Ferido de Manuk]\n Bhiio aaas dgwer fdds rrrrrpppp Ee");
		next;
		mes("[Soldado Ferido de Manuk]\n Foi dsddff gggeeeerr pqowe");
	}
	close;
}
*/

// ------------------------------------------------------------------
/*
manuk,107,233,5	script	Soldado#man3	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Soldado Ansioso]\n Depressa, estou em apuros. Perdi todas as moedas Manuk.\n Eu acho que as perdi na neve. Nossa, eu as vi antes de dormir!");
	} else {
		mes("[Soldado Ansioso]\n Qosi dhhui rffd poaner ouh.");
	}
	close;
}
*/

// ------------------------------------------------------------------
manuk,100,100,3	script	Piom#man	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom]\n Você é... pequeno. Mas você não parecer uma Fada.\n Já que você não é uma maldita, então você não é nosso inimigo!\n Neste mundo, há apenas amigos ou inimigos!");
	} else {
		mes("[Piom]\n As our wi nueo woud bus Gw pii rooop pishe\n Fw iusbn podim bn usow Psbh io whe pasn jd");
	}
	close;
}

// ------------------------------------------------------------------
manuk,169,260,3	script	Piom#man2	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom]\n Nós, Saphas estamos sempre juntos!\n Onde quer que estejamos, estamos sempre ligados uns aos outros.\n Eu não sei de onde você é, mas você deve aprender os nossos espíritos.");
	} else {
		mes("[Piom]\n Ng go oois yus dd You ii iaao nfb ud Wqq ifn isp did\n Uy ydf sd fs wee Mgg gf fs d ff");
	}
	close;
}

// ------------------------------------------------------------------
manuk,286,147,3	script	Piom#man3	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom]\n Eu nunca vou esquecer o rancor contra os traidores.\n Lembro-me de como os nossos antepassados morreram.\n Eu juro que irei vingá-los.");
		next;
		mes("[Piom]\n Primeiro, eu vou chutar esses bastardos.\n Essas coisas que voam me incomodam muito.");
	} else {
		mes("[Piom]\n Vio hs pf I aps Vs ou oas de ee Bzi sh da opd Mc oju asop dj a ps");
		next;
		mes("[Piom]\n Be juas da sd Eoj ssr owq w e Wps dj i ao sj daasd asd");
	}
	close;
}

// ------------------------------------------------------------------
manuk,183,185,5	script	Piom#man4	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom]\n Nossas vidas existem pelos Saphas.\n Por outro lado, a vida dos Saphas existe para mim.\n Hum hahaha!");
		next;
		mes("[Piom]\n Nós, Saphas estamos sempre juntos!\n Onde quer que estejamos!\n Reverencie os Saphas!");
	} else {
		mes("[Piom]\n Esd fas hdi as sp ad osd Ns id pie sj idf Rto osd ps ad Mi sho oo pesd");
		next;
		mes("[Piom]\n N sd sou as d Ma asd psh ds ii Qso uf lj dhis id");
	}
	close;
}

// ------------------------------------------------------------------
manuk,245,124,3	script	Piom#man5	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Piom]\n Humano, você acha que a nossa batalha é estúpida, não é?\n E um desperdício de tempo?\n Mas é realmente através desta guerra que podemos definir se vamos viver ou não.");
	} else {
		mes("[Piom]\n Nsa dhi pao sdi a jp das Uaa as iijds kn sdg f\n Bzi hd sia pasd Es do ja pda sj d Bs oju lujdi ni sdgf g");
		next;
		mes("[Piom]\n Us id jd nai dh");
	}
	close;
}

// ------------------------------------------------------------------
manuk,188,216,3	script	Benknee#man	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Benknee]\n O que te traz aqui?\n Você é um humano?\n Se você é um humano, você não deveria estar aqui.");
		next;
		mes("[Benknee]\n Jotunheim é um lugar abençoado e sagrado.\n Nós, Saphas andamos com nossos próprios pés.\n E ascendemos contra a opressão!");
	} else {
		mes("[Benknee]\n Bdf sdio hs ioq Wfn is ao ps od jd No pip dd dow hso le");
		next;
		mes("[Benknee]\n Wsd oup nc xkh d Rww o jsd sp Yd aihd oa sd s dd");
	}
	close;
}

// ------------------------------------------------------------------
manuk,225,129,5	script	Benknee#man2	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Benknee]\n Huh? Quem?? Quem é você??\n Oh, você não é uma fada.\n Pensei que fosse uma fada.\n De qualquer forma, quem é você? Você pode falar?");
	} else {
		mes("[Benknee]\n Bao j pj a sd Gi oh as d Ya sd Yrt sd ad Bq we ojj jd");
	}
	close;
}

// ------------------------------------------------------------------
manuk,218,163,3	script	Galtun#man	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galtun]\n Recentemente, coisas pequenas estão voando por aqui.\n Eu não tenho certeza se elas são moscas ou não.\n Mas é muito chato.");
		next;
		mes("[Galtun]\n Eles só podem usar sua pequena magia de longa distância.\n Mas eu só consigo chuta-los.\n Eles são tão problemáticos. Mas é melhor eu não perder meu tempo com eles.");
	} else {
		mes("[Galtun]\n Ya sda sdou sh dbi Av bu dgs ldo gp gf Jg gfs dsd fw eerr");
		next;
		mes("[Galtun]\n Mb ih ids oj fd Pg sdf dd sd fff Bq wer jfsd fsd ut yy Nx cxd fsd fs df");
	}
	close;
}

// ------------------------------------------------------------------
manuk,266,199,5	script	Galtun#man2	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galtun]\n Eu posso relaxar agora que temos aqueles montes de Bradium.\n Mas também estou preocupado que pode gastá-los em um curto espaço de tempo.");
		close;
	} else {
		mes("[Galtun]\n Bu iu bus sfi a sd Zsd dwo uf sh osad\n Qdf aih fas io d hoas Nas d iy as di");
	}
	close;
}

// ------------------------------------------------------------------
manuk,256,143,3	script	Galtun#man3	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Galtun]\n Vou me dedicar a proteger a minha família e os Saphas.\n Isso é tudo que eu quero...");
	} else {
		mes("[Galtun]\n Mr ishh qw e ee Baa eou sh ua sd Up idhs ish dk I jsd");
	}
	close;
}

// ------------------------------------------------------------------
/*
manuk,103,354,5	script	Manuk Galtun#man	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Manuk Galtun]\n Aqui é Manuk tribo Sapha que é descendente de Hwergelmir.");
	} else {
		mes("[Manuk Galtun]\n Zd sng pps fsr");
	}
	close;
}
*/

// ------------------------------------------------------------------
/*
manuk,122,354,3	script	Manuk Galtun#man2	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Manuk Galtun]\n Aqui é Manuk tribo Sapha que é descendente de Hwergelmir.");
		close;
	} else {
		mes("[Manuk Galtun]\n To osn dia fg gh gh");
	}
	close;
}
*/

// ------------------------------------------------------------------
/*
manuk,194,189,3	script	Manuk Galtun#man3	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Manuk Galtun]\n Bem vind" + (Sex == SEX_MALE ? "o" : "a") + " a Manuk.\n Como posso lhe ajudar?");
		close;
	}
	end;
}
*/

// ------------------------------------------------------------------
manuk,99,334,5	script	Manuk Piom#man	4_MAN_PIOM3,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Manuk Piom]\n Galtuns são bravos guerreiros Sapha.\n Eu sou da classe Piom que é designada para o trabalho geral.");
		next;
		mes("[Manuk Piom]\n Em virtude da bravura dos Galtun podemos nos divertir aqui em Laphine.\n Nós respeitamos os seus esforços.");
		close;
	} else {
		mes("[Manuk Piom]\n H dn i sid p sd Nd isjd sapd j s id Bsi o ps dkm jgf Eo oo ptr n sid");
	}
	close;
}

// ------------------------------------------------------------------
manuk,103,311,3	script	Manuk Piom#man2	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Manuk Piom]\n Minha perna...\n É a hora.");
	}else {
		mes("[Manuk Piom]\n Fn is d id Yon sdi dh so dps");
	}
	close;
}

// ------------------------------------------------------------------
manuk,293,203,3	script	Manuk Piom#man3	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Manuk Piom]\n Ei, Tenha cuidado!\n Este mineral é o Bradium a vida da nossa tribo.\n Se você não tiver cuidado com a apedra você estará em apuros!");
	} else {
		mes("[Manuk Piom]\n Bmm ish di sd Fii sd ani s a d s k ds Ti h is so so pd");
	}
	close;
}

// ------------------------------------------------------------------
manuk,253,173,3	script	Manuk Benknee#man	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Manuk Benknee]\n Você pode ver a estátua?\n É Hwergelmir, ele é como uma lenda para nós de Sapha.\n Ele era um verdadeiro homem majestoso e valente.");
	} else {
		mes("[Manuk Benknee]\n Ys oadj oa s d Bni ii osd jo as das Qa oj df isd oo o");
	}
	close;
}

// ------------------------------------------------------------------
/*
manuk,251,180,5	script	Jovem Morador#man	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Jovem Morador]\n É chegado o tempo da nossa data!");
	}
	else {
		mes("[Jovem Morador]\n Ywo di pi butfs oui Afbsu");
	}
	close;
}
*/
