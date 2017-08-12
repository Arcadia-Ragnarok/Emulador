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
| - Nota: Npcs comuns na cidade Manuk                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------

manuk,304,195,5	script	Soldado#man	4_MAN_PIOM,{
	mes "[Fornecedor de Alimentos]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "O sustento da família Manuk consiste principalmente no refinamento de Cinzas Hollows.";
		mes "Que foram enterrados há muito tempo no fundo da terra.";
	} else {
		mes "Gdiios duuie Dssoas pogggd fdrul fdddoweet";
	}
	close;
}

// ------------------------------------------------------------------
manuk,274,239,5	script	Soldado#man2	4_MAN_PIOM2,{
	mes "[Soldado Ferido de Manuk]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Não posso absorver a Essência de Bradium por causa do meu ferimento fatal.";
		mes "Aquelas fadas perversas me atacaram e me deixaram assim.";
		next;
		mes "[Soldado Ferido de Manuk]";
		mes "Eu gostaria de poder matar todas as fadas...";
	} else {
		mes "Bhiio aaas dgwer fdds rrrrrpppp Ee";
		next;
		mes "[Soldado Ferido de Manuk]";
		mes "Foi dsddff gggeeeerr pqowe";
	}
	close;
}

// ------------------------------------------------------------------
manuk,107,233,5	script	Soldado#man3	4_MAN_PIOM,{
	mes "[Soldado Ansioso]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Depressa, estou em apuros. Perdi todas as moedas Manuk.";
		mes "Eu acho que as perdi na neve. Nossa, eu as vi antes de dormir!";
	} else {
		mes "Qosi dhhui rffd poaner ouh.";
	}
	close;
}

// ------------------------------------------------------------------
manuk,100,100,3	script	Piom#man	4_MAN_PIOM,{
	mes "[Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Você é... pequeno. Mas você não parecer uma Fada.";
		mes "Já que você não é uma maldita, então você não é nosso inimigo!";
		mes "Neste mundo, há apenas amigos ou inimigos!";
	} else {
		mes "As our wi nueo woud bus Gw pii rooop pishe";
		mes "Fw iusbn podim bn usow Psbh io whe pasn jd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,169,260,3	script	Piom#man2	4_MAN_PIOM2,{
	mes "[Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Nós, Saphas estamos sempre juntos!";
		mes "Onde quer que estejamos, estamos sempre ligados uns aos outros.";
		mes "Eu não sei de onde você é, mas você deve aprender os nossos espíritos.";
	} else {
		mes "Ng go oois yus dd You ii iaao nfb ud Wqq ifn isp did";
		mes "Uy ydf sd fs wee Mgg gf fs d ff";
	}
	close;
}

// ------------------------------------------------------------------
manuk,286,147,3	script	Piom#man3	4_MAN_PIOM,{
	mes "[Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu nunca vou esquecer o rancor contra os traidores.";
		mes "Lembro-me de como os nossos antepassados ??morreram.";
		mes "Eu juro que irei vingá-los.";
		next;
		mes "[Piom]";
		mes "Primeiro, eu vou chutar esses bastardos.";
		mes "Essas coisas que voam me incomodam muito.";
	} else {
		mes "Vio hs pf I aps Vs ou oas de ee Bzi sh da opd Mc oju asop dj a ps";
		next;
		mes "[Piom]";
		mes "Be juas da sd Eoj ssr owq w e Wps dj i ao sj daasd asd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,183,185,5	script	Piom#man4	4_MAN_PIOM,{
	mes "[Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Nossas vidas existem pelos Saphas.";
		mes "Por outro lado,";
		mes "A vida dos Saphas existe para mim.";
		mes "Hum hahaha!";
		next;
		mes "[Piom]";
		mes "Nós, Saphas estamos sempre juntos!";
		mes "Onde quer que estejamos!";
		mes "Reverencie os Saphas!";
	} else {
		mes "Esd fas hdi as sp ad osd Ns id pie sj idf Rto osd ps ad Mi sho oo pesd";
		next;
		mes "[Piom]";
		mes "N sd sou as d Ma asd psh ds ii Qso uf lj dhis id";
	}
	close;
}

// ------------------------------------------------------------------
manuk,245,124,3	script	Piom#man5	4_MAN_PIOM2,{
	mes "[Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Humano, você acha que a nossa batalha é estúpida, não é?";
		mes "E um desperdício de tempo?";
		mes "Mas é realmente através desta guerra que podemos definir se vamos viver ou não.";
	} else {
		mes "Nsa dhi pao sdi a jp das Uaa as iijds kn sdg f";
		mes "Bzi hd sia pasd Es do ja pda sj d Bs oju lujdi ni sdgf g ";
		next;
		mes "[Piom]";
		mes "Us id jd nai dh";
	}
	close;
}

// ------------------------------------------------------------------
manuk,188,216,3	script	Benknee#man	4_MAN_BENKUNI,{
	mes "[Benknee]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "O que te traz aqui?";
		mes "Você é um humano?";
		mes "Se você é um humano, você não deveria estar aqui.";
		next;
		mes "[Benknee]";
		mes "Jotunheim é um lugar abençoado e sagrado.";
		mes "Nós, Saphas andamos com nossos próprios pés.";
		mes "E ascendemos contra a opressão!";
	} else {
		mes "Bdf sdio hs ioq Wfn is ao ps od jd No pip dd dow hso le";
		next;
		mes "[Benknee]";
		mes "Wsd oup nc xkh d Rww o jsd sp Yd aihd oa sd s dd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,225,129,5	script	Benknee#man2	4_MAN_BENKUNI,{
	mes "[Benknee]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Huh? Quem?? Quem é você??";
		mes "Oh, você não é uma fada.";
		mes "Pensei que fosse uma fada.";
		mes "De qualquer forma, quem é você? Você pode falar?";
	} else {
		mes "Bao j pj a sd Gi oh as d Ya sd Yrt sd ad Bq we ojj jd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,218,163,3	script	Galtun#man	4_MAN_GALTUN,{
	mes "[Galtun]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Recentemente, coisas pequenas estão voando por aqui.";
		mes "Eu não tenho certeza se elas são moscas ou não.";
		mes "Mas é muito chato.";
		next;
		mes "[Galtun]";
		mes "Eles só podem usar sua pequena magia de longa distância.";
		mes "Mas eu só consigo chuta-los.";
		mes "Eles são tão problemáticos. Mas é melhor eu não perder meu tempo com eles.";
	} else {
		mes "[Galtun]";
		mes "Ya sda sdou sh dbi Av bu dgs ldo gp gf Jg gfs dsd fw eerr ";
		next;
		mes "[Galtun]";
		mes "Mb ih ids oj fd Pg sdf dd sd fff Bq wer jfsd fsd ut yy Nx cxd fsd fs df ";
	}
	close;
}

// ------------------------------------------------------------------
manuk,266,199,5	script	Galtun#man2	4_MAN_GALTUN,{
	mes "[Galtun]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Eu posso relaxar agora que temos aqueles montes de Bradium.";
		mes "Mas também estou preocupado que pode gastá-los em um curto espaço de tempo.";
		close;
	} else {
		mes "Bu iu bus sfi a sd";
		mes "Zsd dwo uf sh osad ";
		mes "Qdf aih fas io d hoas";
		mes "Nas d iy as di";
	}
	close;
}

// ------------------------------------------------------------------
manuk,256,143,3	script	Galtun#man3	4_MAN_GALTUN,{
	mes "[Galtun]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Vou me dedicar a proteger a minha família e os Saphas.";
		mes "Isso é tudo que eu quero...";
	} else {
		mes "Mr ishh qw e ee Baa eou sh ua sd Up idhs ish dk I jsd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,103,354,5	script	Manuk Galtun#man	4_MAN_GALTUN,{
	mes "[Manuk Galtun]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Aqui é Manuk tribo Sapha que é descendente de Hwergelmir.";
	} else {
		mes "Zd sng pps fsr";
	}
	close;
}

// ------------------------------------------------------------------
manuk,122,354,3	script	Manuk Galtun#man2	4_MAN_GALTUN,{
	mes "[Manuk Galtun]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Aqui é Manuk tribo Sapha que é descendente de Hwergelmir.";
		close;
	} else {
		mes "To osn dia fg gh gh";
	}
	close;
}

// ------------------------------------------------------------------
manuk,194,189,3	script	Manuk Galtun#man3	4_MAN_GALTUN,{
	mes "[Manuk Galtun]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Bem vindo a Manuk.";
		mes "Como posso lhe ajudar?";
		close;
	}
	end;
}

// ------------------------------------------------------------------
manuk,99,334,5	script	Manuk Piom#man	4_MAN_PIOM3,{
	mes "[Manuk Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Galtuns são bravos guerreiros Sapha.";
		mes "Eu sou da classe Piom que é designada para o trabalho geral.";
		next;
		mes "[Manuk Piom]";
		mes "Em virtude da bravura dos Galtun podemos nos divertir aqui em Laphine.";
		mes "Nós respeitamos os seus esforços.";
		close;
	} else {
		mes "H dn i sid p sd Nd isjd sapd j s id Bsi o ps dkm jgf Eo oo ptr n sid";
	}
	close;
}

// ------------------------------------------------------------------
manuk,103,311,3	script	Manuk Piom#man2	4_MAN_PIOM2,{
	mes "[Manuk Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Minha perna...";
		mes "É a hora.";
	}else {
		mes "Fn is d id Yon sdi dh so dps";
	}
	close;
}

// ------------------------------------------------------------------
manuk,293,203,3	script	Manuk Piom#man3	4_MAN_PIOM,{
	mes "[Manuk Piom]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ei, Tenha cuidado!";
		mes "Este mineral é o Bradium a vida da nossa tribo.";
		mes "Se você não tiver cuidado com a apedra você estará em apuros!";
	} else {
		mes "[Manuk Piom]";
		mes "Bmm ish di sd Fii sd ani s a d s k ds Ti h is so so pd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,253,173,3	script	Manuk Benknee#man	4_MAN_BENKUNI,{
	mes "[Manuk Benknee]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Você pode ver a estátua?";
		mes "É Hwergelmir, ele é como uma lenda para nós de Sapha.";
		mes "Ele era um verdadeiro homem majestoso e valente.";
	} else {
		mes "Ys oadj oa s d Bni ii osd jo as das Qa oj df isd oo o";
	}
	close;
}

// ------------------------------------------------------------------
manuk,251,180,5	script	Jovem Morador#man	4_MAN_PIOM,{
	mes "[Jovem Morador]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "É chegado o tempo da nossa data!";
	}
	else {
		mes "Ywo di pi butfs oui Afbsu ";
	}
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
man_in01,346,135,0	script	 Operário#man	4_MAN_PIOM,{
	mes "[Operário]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "É perigoso se a válvula não estiver devidamente verificada.";
		mes "Na verdade, houve um incidente.";
		mes "Me dá arrepios só de pensar nisso.";
	} else {
		mes "Gs df o aj ud pa N sd asw ewt jj Ud aso pda s ";
	}
	close;
}

// ------------------------------------------------------------------
man_in01,393,134,3	script	Operário#man2	4_MAN_PIOM,{
	mes "[Operário]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "O que!! Qu.. Ah... Eu... Eu não dormi!!";
		mes "Vamos voltar para o trabalho... é isso mesmo trabalho...";
	} else {
		mes "Ns ad jai osd";
		mes "Rt odj as jo dp as";
	}
	close;
}

// ------------------------------------------------------------------
man_in01,377,143,5	script	Operário#man3	4_MAN_PIOM,{
	mes "[Operário]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Hum... Ele está trabalhando muito bem...";
		mes "Esses problemas não são nada...";
	} else {
		mes "Mou ii ros oa d d ";
	}
	close;
}

// ------------------------------------------------------------------
man_in01,333,128,5	script	Operário#man4	4_MAN_PIOM,{
	mes "[Operário]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Minha visão está ficando mais fraca durante esses últimos dias.";
	} else {
		mes "Yw I eus ia d ap s";
	}
	close;
}

// ------------------------------------------------------------------
man_in01,336,128,5	script	Operário#man5	4_MAN_PIOM,{
	mes "[Operário]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Isso não é fabuloso?";
	} else {
		mes "R tt osj dj d";
	}
	close;
}

// ------------------------------------------------------------------
man_in01,283,288,3	script	Operário#man6	4_MAN_PIOM,{
	mes "[Operário]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "É muita sorte ter tantos Bradiuns de qualidade hoje.";
		next;
		mes "[Operário]";
		mes "Isso é tudo o que resta para nós.";
	} else {
		mes "Qw eI hs pado as d p ";
		next;
		mes "[Operário]";
		mes "Too fn ish d fd";
	}
	close;
}


// ------------------------------------------------------------------
man_in01,68,187,0	script	Operário#man7	4_MAN_PIOM,{
	mes "[Operário]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Hum, parece delicioso.";
		mes "Deve ser a hora de virar o jogo.";
		next;
		mes "[Operário]";
		mes "O bife de Mamute Rochoso deve ser comido ligeiramente cru!";
	} else {
		mes "As woue dpi sha we";
		mes "Two psie bu le";
		next;
		mes "[Operário]";
		mes "Tr sdou powee wwee ";
	}
	close;
}

// ------------------------------------------------------------------
man_in01,74,181,3	script	Operário#man8	4_MAN_PIOM,{
	mes "[Operário]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Chefe, quantas placas devo colocar para baixo?";
	} else {
		mes "We pishd bugs ouwwe iro ";
	}
	close;
}

// ------------------------------------------------------------------
man_in01,360,137,5	script	Mecânico#man	4_MAN_PIOM,{
	mes "[Mecânico]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Raças alienígenas não são autorizadas a entrar.";
		mes "É muito perigoso, por favor não se aproxime.";
	} else {
		mes "Fs iua sdjosow ww Adds wwpq iusnd ";
	}
	close;
}

// ------------------------------------------------------------------
man_in01,227,280,5	script	Ciêntista#man	4_MAN_BENKUNI,{
	mes "[Ciêntista]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Existe apenas uma maneira de podermos sobreviver..?";
	}
	else {
		mes "Dso piey pioit ioep ";
	}
	close;
}
