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
| - Info: Npcs comuns em Esplendor                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------


splendide,159,164,3	script	Fada#spl	4_M_FAIRYSOLDIER2,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "É uma vergonha que eu tenha que lutar contra esses monstros.";
		mes "Sou delicada demais para lidar com eles.";
	} else {
		mes "[Fada]";
		mes "RiniHirDieb Ie nahImanMe Di Mush mahnarAsh So HirAnMod O Ras";
		mes "neaLoDath Ha KoRivehWha So Thusnea";
	}
	close;
}

// ------------------------------------------------------------------
splendide,229,54,3	script	Fada#spl2	4_F_FAIRYKID4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Huh? Você é humano.";
		mes "Você é melhor do que aqueles Saphas, mas isso não quer dizer que você seja bonito.";
		next;
		mes "[Fada]";
		mes "Como você chegou aqui?";
		mes "Aqui é um lugar sofisticado.";
		mes "Acho que você não pode ficar aqui conosco.";
	} else {
		mes "[Fada]";
		mes "ImanAnuUor Yee NeUorVer Ir RivehAshOsa";
		mes "AdorserHir er OsaAlahAno Mu RivehDath";
		next;
		mes "[Fada]";
		mes "LarsFuloSar Yu VilGotheor Yu nes";
		mes "Anuneseor Ie remuSeDieb er WosLoNud Ko NuffDuIman Ir";
	}
	close;
}

// ------------------------------------------------------------------
splendide,89,235,5	script	Fada#spl3	4_M_FAIRYKID5,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Lalalalal Lala Lalala";
		mes "Vamos cantar!";
		mes "Minha voz é fantástica!";
		next;
		mes "[Fada]";
		mes "Nem pense em se aproximar de mim!";
	} else {
		mes "[Fada]";
		mes "WehVeldHir Or ThusNorAnu";
		mes "ReImanWos Yu marFuloNor Yee SharneaVrum Ir Ruff";
		next;
		mes "[Fada]";
		mes "BurKoWeh Ie nesThusLu Ee";
	}
	close;
}

// ------------------------------------------------------------------
splendide,245,243,3	script	Fada#spl4	4_F_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Essa terra era desperdiçada.";
		mes "Era muito fria e nada podia viver aqui, mas desde que chegamos, está melhor a cada dia.";
		next;
		mes "[Fada]";
		mes "Agora todos os problemas se foram.";
		mes "Tirando aqueles Saphas feios e gordos.";
		mes "Como nos livraremos deles?";
	} else {
		mes "[Fada]";
		mes "DiebVohlWeh Ko RasVeldFar Ie AshVohl neaAmanIman Ie DorDuMe No Hireo tassermaur Yee DorAdorNud Ee NohThorVe O FusImanAman";
		next;
		mes "[Fada]";
		mes "OsaVeldWeh U GothIyazVer Or LarsAnDor Yee TurVeldVil";
		mes "LarsDanaFus An DiebImanmar er Dim tasLoRini Ir WehAndu";
	}
	close;
}

// ------------------------------------------------------------------
splendide,230,142,3	script	Fada#spl5	4_F_FAIRYKID4,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Ah-Ha, eu estou parada assim.";
	} else {
		mes "[Fada]";
		mes "AgolWhaNe O LoRini";
	}
	close;
}

// ------------------------------------------------------------------
splendide,274,203,3	script	Fada#spl6	4_M_FAIRYKID3,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Ei, você! Humano!";
		mes "Como você nos encontrou?";
		mes "Como é o seu mundo?";
		mes "É legal lá?";
	} else {
		mes "[Fada]";
		mes "AnnarNor So marFarAno Di NudThusNei Ir Ir";
		mes "narVaTi Mu SharDimmaur Or Ano";
		mes "WhaModKo Or eoNeiNor Di ImanDunah O O";
	}
	close;
}

// ------------------------------------------------------------------
splendide,275,141,3	script	Fada#spl7	4_M_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Não fale comigo.";
		mes "O que você quer?";
		mes "Vai me culpar por algo, não é?";
		next;
		mes "[Fada]";
		mes "Não quero ouvir a opinião de ninguém...";
		mes "Afinal, eu já sou perfeita!";
		close;
	} else {
		mes "[Fada]";
		mes "narnahNoh Di WehRiniLars Yee ModAnu";
		mes "LuAlahNe Or FarAnduOsa No AgolKo";
		next;
		mes "[Fada]";
		mes "LarsVilDim No WhaVilFus Ha Ash";
		mes "ReLarsShar Mu AnduLoLon Ie Nufftas";
	}
	close;
}

// ------------------------------------------------------------------
splendide,224,230,3	script	Fada#spl8	4_F_FAIRYKID5,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Ouça atentamente e aprenda!";
		mes "Vamos cantar e dançar!";
		mes "Você pode participar!";
		mes "Mova o quadril!";
		mes "Dançe!";
	} else {
		mes "[Fada]";
		mes "NuffMushLars Ra WehVilnah Ra DielWeh RivehnarWos Ra YurSharRe TalVaThor O VerWhatas";
		mes "FuloDimIyaz Mu WhaNoreo U AlahNeLo Ra UorOsa";
		mes "SeAnduMush Ur";
	}
	close;
}

// ------------------------------------------------------------------
splendide,223,36,3	script	Fada#spl9	4_F_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Não quero tocar neles.";
		mes "Mas eles estão acabando com os meus Yggdrasil Berries.";
		mes "Não aguento mais!";
		next;
		mes "[Fada]";
		mes "Não luto muito bem...";
		mes "Mas por nossa glória, eu vou lutar!";
		mes "Eles deviam estar honrados por lutar conosco!";
	} else {
		mes "[Fada]";
		mes "AshAmanNei Ir LonVeldremu O AnduSarHir No NudAnumaur Ha Veld Semarmah U VeTingDieb Yu mahsertas Ra marAmanAdor Ir";
		next;
		mes "[Fada]";
		mes "TingAgolLu So MushAndumah U neseor WhaDuFulo er ImanThusNe Di Tur DathUornah Ir MemaurDeh Yu Fulo CyaMeDor Ko VeLarsAgol";
	}
	close;
}

// ------------------------------------------------------------------
splendide,305,129,3	script	Fada#spl10	4_F_FAIRYKID,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Hu... que sono.";
		mes "Estou entediada. Não tenho nada para fazer.";
		mes "Até meus amigos estão lutando com esses gigantes, mas não sou boa o suficiente para ajudá-los.";
		next;
		mes "[Fada]";
		mes "Melhor eu checar a minha maquiagem na sala de vestir.";
		mes "Ou será que eu devia dormir para acordar ainda mais bela?";
	} else {
		mes "[Fada]";
		mes "AnduNothUor O eomaurShar Mu AnduVeld AdorFulotas Ko NorAlahAsh Ie Ala KoOsaLon Ha AnuNeiNoh Di Ting tasKoDiel O IyazGoth";
		next;
		mes "[Fada]";
		mes "OdesmahHir Or mahneaLars So HirNudAman O AdorWosDu";
		mes "DimYurVa So DanaRuYur";
	}
	close;
}

// ------------------------------------------------------------------
splendide,142,315,3	script	Fada#spl11	4_F_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Não é fácil voar pelo céu.";
		mes "Mas é melhor do que andar.";
		next;
		mes "[Fada]";
		mes "Você é humano? Coitadinho...";
		mes "Você não pode ter essas lindas asas?";
		mes "Deve ter uma vida patética.";
		mes "É óbvio que nós, que podemos voar, somos os únicos abençoados.";
	} else {
		mes "[Fada]";
		mes "WharemuLars Ur SharUdenWha Yu Agol";
		mes "LontasSar Ra DathVeAlah Ee Noh";
		mes "LarsLonnah Ko TalnesIman Ie Diel";
		next;
		mes "[Fada]";
		mes "tasSarNuff Or WehFarDieb Ir FarRu FusYurnah So MeAshnar O Noth YurBurDu Yu VeldVaMush So Thor AgolDiebUor No TurnahAla O";
	}
	close;
}

// ------------------------------------------------------------------
splendide,181,107,5	script	Fada#spl15	4_F_FAIRYSOLDIER,{
	if (isequipped(Ring_Of_Wise_King)) {
		mes "[Fada]";
		mes "Limpeza, organização e arrumação!";
		mes "Essas são as palavras que nos descrevem!";
		mes "Os outros são sujos e bagunçados!";
	} else {
		mes "[Fada]";
		mes "FusYurnah So M WehFarDieb Ir FarRu FusYurnah AgolDiebUor No Tur";
	}
	close;
}
