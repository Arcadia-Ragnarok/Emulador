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
manuk,100,100,3	script	Piom#man	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Piom]";
		mes "Você é... pequeno. Mas você não parecer uma Fada.";
		mes "Já que você não é uma maldita, então você não é nosso inimigo!";
		mes "Neste mundo, há apenas amigos ou inimigos!";
	} else {
		mes "[Piom]";
		mes "As our wi nueo woud bus Gw pii rooop pishe";
		mes "Fw iusbn podim bn usow Psbh io whe pasn jd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,169,260,3	script	Piom#man2	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Piom]";
		mes "Nós, Saphas estamos sempre juntos!";
		mes "Onde quer que estejamos, estamos sempre ligados uns aos outros.";
		mes "Eu não sei de onde você é, mas você deve aprender os nossos espíritos.";
	} else {
		mes "[Piom]";
		mes "Ng go oois yus dd You ii iaao nfb ud Wqq ifn isp did";
		mes "Uy ydf sd fs wee Mgg gf fs d ff";
	}
	close;
}

// ------------------------------------------------------------------
manuk,286,147,3	script	Piom#man3	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Piom]";
		mes "Eu nunca vou esquecer o rancor contra os traidores.";
		mes "Lembro-me de como os nossos antepassados morreram.";
		mes "Eu juro que irei vingá-los.";
		next;
		mes "[Piom]";
		mes "Primeiro, eu vou chutar esses bastardos.";
		mes "Essas coisas que voam me incomodam muito.";
	} else {
		mes "[Piom]";
		mes "Vio hs pf I aps Vs ou oas de ee Bzi sh da opd Mc oju asop dj a ps";
		next;
		mes "[Piom]";
		mes "Be juas da sd Eoj ssr owq w e Wps dj i ao sj daasd asd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,183,185,5	script	Piom#man4	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Piom]";
		mes "Nossas vidas existem pelos Saphas.";
		mes "Por outro lado, a vida dos Saphas existe para mim.";
		mes "Hum hahaha!";
		next;
		mes "[Piom]";
		mes "Nós, Saphas estamos sempre juntos!";
		mes "Onde quer que estejamos!";
		mes "Reverencie os Saphas!";
	} else {
		mes "[Piom]";
		mes "Esd fas hdi as sp ad osd Ns id pie sj idf Rto osd ps ad Mi sho oo pesd";
		next;
		mes "[Piom]";
		mes "N sd sou as d Ma asd psh ds ii Qso uf lj dhis id";
	}
	close;
}

// ------------------------------------------------------------------
manuk,245,124,3	script	Piom#man5	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Piom]";
		mes "Humano, você acha que a nossa batalha é estúpida, não é?";
		mes "E um desperdício de tempo?";
		mes "Mas é realmente através desta guerra que podemos definir se vamos viver ou não.";
	} else {
		mes "[Piom]";
		mes "Nsa dhi pao sdi a jp das Uaa as iijds kn sdg f";
		mes "Bzi hd sia pasd Es do ja pda sj d Bs oju lujdi ni sdgf g";
		next;
		mes "[Piom]";
		mes "Us id jd nai dh";
	}
	close;
}

// ------------------------------------------------------------------
manuk,188,216,3	script	Benknee#man	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Benknee]";
		mes "O que te traz aqui?";
		mes "Você é um humano?";
		mes "Se você é um humano, você não deveria estar aqui.";
		next;
		mes "[Benknee]";
		mes "Jotunheim é um lugar abençoado e sagrado.";
		mes "Nós, Saphas andamos com nossos próprios pés.";
		mes "E ascendemos contra a opressão!";
	} else {
		mes "[Benknee]";
		mes "Bdf sdio hs ioq Wfn is ao ps od jd No pip dd dow hso le";
		next;
		mes "[Benknee]";
		mes "Wsd oup nc xkh d Rww o jsd sp Yd aihd oa sd s dd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,225,129,5	script	Benknee#man2	4_MAN_BENKUNI,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Benknee]";
		mes "Huh? Quem?? Quem é você??";
		mes "Oh, você não é uma fada.";
		mes "Pensei que fosse uma fada.";
		mes "De qualquer forma, quem é você? Você pode falar?";
	} else {
		mes "[Benknee]";
		mes "Bao j pj a sd Gi oh as d Ya sd Yrt sd ad Bq we ojj jd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,218,163,3	script	Galtun#man	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galtun]";
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
		mes "Ya sda sdou sh dbi Av bu dgs ldo gp gf Jg gfs dsd fw eerr";
		next;
		mes "[Galtun]";
		mes "Mb ih ids oj fd Pg sdf dd sd fff Bq wer jfsd fsd ut yy Nx cxd fsd fs df";
	}
	close;
}

// ------------------------------------------------------------------
manuk,266,199,5	script	Galtun#man2	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galtun]";
		mes "Eu posso relaxar agora que temos aqueles montes de Bradium.";
		mes "Mas também estou preocupado que pode gastá-los em um curto espaço de tempo.";
		close;
	} else {
		mes "[Galtun]";
		mes "Bu iu bus sfi a sd Zsd dwo uf sh osad";
		mes "Qdf aih fas io d hoas Nas d iy as di";
	}
	close;
}

// ------------------------------------------------------------------
manuk,256,143,3	script	Galtun#man3	4_MAN_GALTUN,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Galtun]";
		mes "Vou me dedicar a proteger a minha família e os Saphas.";
		mes "Isso é tudo que eu quero...";
	} else {
		mes "[Galtun]";
		mes "Mr ishh qw e ee Baa eou sh ua sd Up idhs ish dk I jsd";
	}
	close;
}

// ------------------------------------------------------------------
manuk,99,334,5	script	Manuk Piom#man	4_MAN_PIOM3,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Manuk Piom]";
		mes "Galtuns são bravos guerreiros Sapha.";
		mes "Eu sou da classe Piom que é designada para o trabalho geral.";
		next;
		mes "[Manuk Piom]";
		mes "Em virtude da bravura dos Galtun podemos nos divertir aqui em Laphine.";
		mes "Nós respeitamos os seus esforços.";
		close;
	} else {
		mes "[Manuk Piom]";
		mes "H dn i sid p sd Nd isjd sapd j s id Bsi o ps dkm jgf Eo oo ptr n sid";
	}
	close;
}

// ------------------------------------------------------------------
manuk,103,311,3	script	Manuk Piom#man2	4_MAN_PIOM2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Manuk Piom]";
		mes "Minha perna...";
		mes "É a hora.";
	}else {
		mes "[Manuk Piom]";
		mes "Fn is d id Yon sdi dh so dps";
	}
	close;
}

// ------------------------------------------------------------------
manuk,293,203,3	script	Manuk Piom#man3	4_MAN_PIOM,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Manuk Piom]";
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
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Manuk Benknee]";
		mes "Você pode ver a estátua?";
		mes "É Hwergelmir, ele é como uma lenda para nós de Sapha.";
		mes "Ele era um verdadeiro homem majestoso e valente.";
	} else {
		mes "[Manuk Benknee]";
		mes "Ys oadj oa s d Bni ii osd jo as das Qa oj df isd oo o";
	}
	close;
}

