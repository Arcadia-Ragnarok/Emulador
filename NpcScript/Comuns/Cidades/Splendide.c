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
		mes "� uma vergonha que eu tenha que lutar contra esses monstros.";
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
		mes "Huh? Voc� � humano.";
		mes "Voc� � melhor do que aqueles Saphas, mas isso n�o quer dizer que voc� seja bonito.";
		next;
		mes "[Fada]";
		mes "Como voc� chegou aqui?";
		mes "Aqui � um lugar sofisticado.";
		mes "Acho que voc� n�o pode ficar aqui conosco.";
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
		mes "Minha voz � fant�stica!";
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
		mes "Essa terra era desperdi�ada.";
		mes "Era muito fria e nada podia viver aqui, mas desde que chegamos, est� melhor a cada dia.";
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
		mes "Ei, voc�! Humano!";
		mes "Como voc� nos encontrou?";
		mes "Como � o seu mundo?";
		mes "� legal l�?";
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
		mes "N�o fale comigo.";
		mes "O que voc� quer?";
		mes "Vai me culpar por algo, n�o �?";
		next;
		mes "[Fada]";
		mes "N�o quero ouvir a opini�o de ningu�m...";
		mes "Afinal, eu j� sou perfeita!";
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
		mes "Ou�a atentamente e aprenda!";
		mes "Vamos cantar e dan�ar!";
		mes "Voc� pode participar!";
		mes "Mova o quadril!";
		mes "Dan�e!";
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
		mes "N�o quero tocar neles.";
		mes "Mas eles est�o acabando com os meus Yggdrasil Berries.";
		mes "N�o aguento mais!";
		next;
		mes "[Fada]";
		mes "N�o luto muito bem...";
		mes "Mas por nossa gl�ria, eu vou lutar!";
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
		mes "Estou entediada. N�o tenho nada para fazer.";
		mes "At� meus amigos est�o lutando com esses gigantes, mas n�o sou boa o suficiente para ajud�-los.";
		next;
		mes "[Fada]";
		mes "Melhor eu checar a minha maquiagem na sala de vestir.";
		mes "Ou ser� que eu devia dormir para acordar ainda mais bela?";
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
		mes "N�o � f�cil voar pelo c�u.";
		mes "Mas � melhor do que andar.";
		next;
		mes "[Fada]";
		mes "Voc� � humano? Coitadinho...";
		mes "Voc� n�o pode ter essas lindas asas?";
		mes "Deve ter uma vida pat�tica.";
		mes "� �bvio que n�s, que podemos voar, somos os �nicos aben�oados.";
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
		mes "Limpeza, organiza��o e arruma��o!";
		mes "Essas s�o as palavras que nos descrevem!";
		mes "Os outros s�o sujos e bagun�ados!";
	} else {
		mes "[Fada]";
		mes "FusYurnah So M WehFarDieb Ir FarRu FusYurnah AgolDiebUor No Tur";
	}
	close;
}
