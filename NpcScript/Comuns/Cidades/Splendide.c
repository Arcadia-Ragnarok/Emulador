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
| - Nota: Npcs comuns em Esplendor                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------


splendide,159,164,3	script	Fada#spl	4_M_FAIRYSOLDIER2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n É uma vergonha que eu tenha que lutar contra esses monstros.\n Sou delicada demais para lidar com eles.");
	} else {
		mes("[Fada]\n RiniHirDieb Ie nahImanMe Di Mush mahnarAsh So HirAnMod O Ras\n neaLoDath Ha KoRivehWha So Thusnea");
	}
	close;
}

// ------------------------------------------------------------------
splendide,229,54,3	script	Fada#spl2	4_F_FAIRYKID4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Huh? Você é humano.\n Você é melhor do que aqueles Saphas, mas isso não quer dizer que você seja bonito.");
		next;
		mes("[Fada]\n Como você chegou aqui?\n Aqui é um lugar sofisticado.\n Acho que você não pode ficar aqui conosco.");
	} else {
		mes("[Fada]\n ImanAnuUor Yee NeUorVer Ir RivehAshOsa\n AdorserHir er OsaAlahAno Mu RivehDath");
		next;
		mes("[Fada]\n LarsFuloSar Yu VilGotheor Yu nes\n Anuneseor Ie remuSeDieb er WosLoNud Ko NuffDuIman Ir");
	}
	close;
}

// ------------------------------------------------------------------
splendide,89,235,5	script	Fada#spl3	4_M_FAIRYKID5,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Lalalalal Lala Lalala\n Vamos cantar!\n Minha voz é fantástica!");
		next;
		mes("[Fada]\n Nem pense em se aproximar de mim!");
	} else {
		mes("[Fada]\n WehVeldHir Or ThusNorAnu\n ReImanWos Yu marFuloNor Yee SharneaVrum Ir Ruff");
		next;
		mes("[Fada]\n BurKoWeh Ie nesThusLu Ee");
	}
	close;
}

// ------------------------------------------------------------------
splendide,245,243,3	script	Fada#spl4	4_F_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Essa terra era desperdiçada.\n Era muito fria e nada podia viver aqui, mas desde que chegamos, está melhor a cada dia.");
		next;
		mes("[Fada]\n Agora todos os problemas se foram.\n Tirando aqueles Saphas feios e gordos.\n Como nos livraremos deles?");
	} else {
		mes("[Fada]\n DiebVohlWeh Ko RasVeldFar Ie AshVohl neaAmanIman Ie DorDuMe No Hireo tassermaur Yee DorAdorNud Ee NohThorVe O FusImanAman");
		next;
		mes("[Fada]\n OsaVeldWeh U GothIyazVer Or LarsAnDor Yee TurVeldVil\n LarsDanaFus An DiebImanmar er Dim tasLoRini Ir WehAndu");
	}
	close;
}

// ------------------------------------------------------------------
splendide,230,142,3	script	Fada#spl5	4_F_FAIRYKID4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Ah-Ha, eu estou parada assim.");
	} else {
		mes("[Fada]\n AgolWhaNe O LoRini");
	}
	close;
}

// ------------------------------------------------------------------
splendide,274,203,3	script	Fada#spl6	4_M_FAIRYKID3,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Ei, você! Humano!\n Como você nos encontrou?\n Como é o seu mundo?\n É legal lá?");
	} else {
		mes("[Fada]\n AnnarNor So marFarAno Di NudThusNei Ir Ir\n narVaTi Mu SharDimmaur Or Ano\n WhaModKo Or eoNeiNor Di ImanDunah O O");
	}
	close;
}

// ------------------------------------------------------------------
splendide,275,141,3	script	Fada#spl7	4_M_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Não fale comigo.\n O que você quer?\n Vai me culpar por algo, não é?");
		next;
		mes("[Fada]\n Não quero ouvir a opinião de ninguém...\n Afinal, eu já sou perfeita!");
		close;
	} else {
		mes("[Fada]\n narnahNoh Di WehRiniLars Yee ModAnu\n LuAlahNe Or FarAnduOsa No AgolKo");
		next;
		mes("[Fada]\n LarsVilDim No WhaVilFus Ha Ash\n ReLarsShar Mu AnduLoLon Ie Nufftas");
	}
	close;
}

// ------------------------------------------------------------------
splendide,224,230,3	script	Fada#spl8	4_F_FAIRYKID5,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Ouça atentamente e aprenda!\n Vamos cantar e dançar!\n Você pode participar!\n Mova o quadril!\n Dançe!");
	} else {
		mes("[Fada]\n NuffMushLars Ra WehVilnah Ra DielWeh RivehnarWos Ra YurSharRe TalVaThor O VerWhatas\n FuloDimIyaz Mu WhaNoreo U AlahNeLo Ra UorOsa\n SeAnduMush Ur");
	}
	close;
}

// ------------------------------------------------------------------
splendide,223,36,3	script	Fada#spl9	4_F_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Não quero tocar neles.\n Mas eles estão acabando com os meus Yggdrasil Berries.\n Não aguento mais!");
		next;
		mes("[Fada]\n Não luto muito bem...\n Mas por nossa glória, eu vou lutar!\n Eles deviam estar honrados por lutar conosco!");
	} else {
		mes("[Fada]\n AshAmanNei Ir LonVeldremu O AnduSarHir No NudAnumaur Ha Veld Semarmah U VeTingDieb Yu mahsertas Ra marAmanAdor Ir");
		next;
		mes("[Fada]\n TingAgolLu So MushAndumah U neseor WhaDuFulo er ImanThusNe Di Tur DathUornah Ir MemaurDeh Yu Fulo CyaMeDor Ko VeLarsAgol");
	}
	close;
}

// ------------------------------------------------------------------
splendide,305,129,3	script	Fada#spl10	4_F_FAIRYKID,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Hu... que sono.\n Estou entediada. Não tenho nada para fazer.\n Até meus amigos estão lutando com esses gigantes, mas não sou boa o suficiente para ajudá-los.");
		next;
		mes("[Fada]\n Melhor eu checar a minha maquiagem na sala de vestir.\n Ou será que eu devia dormir para acordar ainda mais bela?");
	} else {
		mes("[Fada]\n AnduNothUor O eomaurShar Mu AnduVeld AdorFulotas Ko NorAlahAsh Ie Ala KoOsaLon Ha AnuNeiNoh Di Ting tasKoDiel O IyazGoth");
		next;
		mes("[Fada]\n OdesmahHir Or mahneaLars So HirNudAman O AdorWosDu\n DimYurVa So DanaRuYur");
	}
	close;
}

// ------------------------------------------------------------------
splendide,142,315,3	script	Fada#spl11	4_F_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Não é fácil voar pelo céu.\n Mas é melhor do que andar.");
		next;
		mes("[Fada]\n Você é humano? Coitadinho...\n Você não pode ter essas lindas asas?\n Deve ter uma vida patética.\n É óbvio que nós, que podemos voar, somos os únicos abençoados.");
	} else {
		mes("[Fada]\n WharemuLars Ur SharUdenWha Yu Agol\n LontasSar Ra DathVeAlah Ee Noh\n LarsLonnah Ko TalnesIman Ie Diel");
		next;
		mes("[Fada]\n tasSarNuff Or WehFarDieb Ir FarRu FusYurnah So MeAshnar O Noth YurBurDu Yu VeldVaMush So Thor AgolDiebUor No TurnahAla O");
	}
	close;
}

// ------------------------------------------------------------------
splendide,181,107,5	script	Fada#spl15	4_F_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes("[Fada]\n Limpeza, organização e arrumação!\n Essas são as palavras que nos descrevem!\n Os outros são sujos e bagunçados!");
	} else {
		mes("[Fada]\n FusYurnah So M WehFarDieb Ir FarRu FusYurnah AgolDiebUor No Tur");
	}
	close;
}
