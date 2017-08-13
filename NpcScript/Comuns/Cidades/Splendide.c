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
| - Nota: Npcs comuns em Esplendor                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------

splendide,218,193,3	script	Fada#spl	4_F_FAIRYKID6,{
	mes "[Fada Exausta]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Espere, não se aproxime.";
		mes "Não suporto o seu cheiro, ele me deixa tonto.";
	} else {
		mes "OdesKoUor Ko NuffSharUden Ko CyaVenah An NudNuffser An KoRivehAdor Mu LarseorAnu O DorNe";
	}
	close;
}

// ------------------------------------------------------------------
splendide,180,223,3	script	Fada#spl2	4_F_FAIRYKID5,{
	mes "[Kalua]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Você não se veste bem, mas acho que é melhor do que aqueles caras no campo de neve.";
	} else {
		mes "AlahCyamah U MeKoser Ir TimaurRiveh Di LarsRasTi Di AgolKones Or AlahUdenAndu Ee FusRe";
	}
	close;
}

// ------------------------------------------------------------------
splendide,125,227,3	script	Fada#spl3	4_M_FAIRYKID3,{
	mes "[Flowa]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Sem ofensa, mas eu não estava te olhando porque simpatizei com você.";
		mes "Eu só estava me perguntando como alguém consegue andar sendo tão gordo.";
	} else {
		mes "AnuFuloUor Ko CyaWosnes Ha WosAnuAsh O WosDuAno O ";
		mes "FuloAndueo Ie WosGothLars Ee Tinarmaur Or AlahnahVa Or narAnuFulo So KoCya";
	}
	close;
}

// ------------------------------------------------------------------
splendide,159,164,3	script	Fada#spl4	4_M_FAIRYSOLDIER2,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "É uma vergonha que eu tenha que lutar contra esses monstros.";
		mes "Sou delicada demais para lidar com eles.";
	} else {
		mes "[Fada]";
		mes "RiniHirDieb Ie nahImanMe Di Mush";
		mes "mahnarAsh So HirAnMod O Ras";
		mes "neaLoDath Ha KoRivehWha So Thusnea";
	}
	close;
}

// ------------------------------------------------------------------
splendide,229,54,3	script	Fada#spl5	4_F_FAIRYKID4,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Huh? Você é humano.";
		mes "Você é melhor do que aqueles Saphas, mas isso não quer dizer que você seja bonito.";
		next;
		mes "[Fada]";
		mes "Como você chegou aqui?";
		mes "Aqui é um lugar sofisticado.";
		mes "Acho que você não pode ficar aqui conosco.";
	} else {
		mes "ImanAnuUor Yee NeUorVer Ir RivehAshOsa";
		mes "AdorserHir er OsaAlahAno Mu RivehDath";
		next;
		mes "[Fada]";
		mes "LarsFuloSar Yu VilGotheor Yu nes";
		mes "Anuneseor Ie remuSeDieb er ";
		mes "WosLoNud Ko NuffDuIman Ir ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,89,235,5	script	Fada#spl6	4_M_FAIRYKID5,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Lalalalal~Lala~Lalala~";
		mes "Vamos cantar~!";
		mes "Minha voz é fantástica!";
		next;
		mes "[Fada]";
		mes "Nem pense em se aproximar de mim!";
	} else {
		mes "WehVeldHir Or ThusNorAnu";
		mes "ReImanWos Yu marFuloNor Yee SharneaVrum Ir Ruff";
		next;
		mes "[Fada]";
		mes "BurKoWeh Ie nesThusLu Ee ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,245,243,3	script	Fada#spl7	4_F_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Essa terra era desperdiçada.";
		mes "Era muito fria e nada podia viver aqui, mas desde que chegamos, está melhor a cada dia.";
		next;
		mes "[Fada]";
		mes "Agora todos os problemas se foram.";
		mes "Tirando aqueles Saphas feios e gordos.";
		mes "Como nos livraremos deles?";
	} else {
		mes "DiebVohlWeh Ko RasVeldFar Ie AshVohl neaAmanIman Ie DorDuMe No Hireo tassermaur Yee DorAdorNud Ee ";
		mes "NohThorVe O FusImanAman";
		next;
		mes "[Fada]";
		mes "OsaVeldWeh U GothIyazVer Or LarsAnDor Yee TurVeldVil";
		mes "LarsDanaFus An DiebImanmar er Dim tasLoRini Ir WehAndu";
	}
	close;
}

// ------------------------------------------------------------------
splendide,230,142,3	script	Fada#spl8	4_F_FAIRYKID4,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ah-Ha, eu estou parada assim.";
	} else {
		mes "AgolWhaNe O LoRini";
	}
	close;
}

// ------------------------------------------------------------------
splendide,274,203,3	script	Fada#spl9	4_M_FAIRYKID3,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ei, você! Humano!";
		mes "Como você nos encontrou?";
		mes "Como é o seu mundo?";
		mes "É legal lá?";
	} else {
		mes "AnnarNor So marFarAno Di NudThusNei Ir Ir ";
		mes "narVaTi Mu SharDimmaur Or Ano";
		mes "WhaModKo Or eoNeiNor Di ImanDunah O O ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,275,141,3	script	Fada#spl10	4_M_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Não fale comigo.";
		mes "O que você quer?";
		mes "Vai me culpar por algo, não é?";
		next;
		mes "[Fada]";
		mes "Não quero ouvir a opinião de ninguém...";
		mes "Afinal, eu já sou perfeita!";
		close;
	} else {
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
splendide,224,230,3	script	Fada#spl11	4_F_FAIRYKID5,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ouça atentamente e aprenda!";
		mes "Vamos cantar e dançar!";
		mes "Você pode participar!";
		mes "Mova o quadril!";
		mes "Dançe!";
	} else {
		mes "NuffMushLars Ra WehVilnah Ra DielWeh";
		mes "RivehnarWos Ra YurSharRe";
		mes "TalVaThor O VerWhatas";
		mes "FuloDimIyaz Mu WhaNoreo U ";
		mes "AlahNeLo Ra UorOsa";
		mes "SeAnduMush Ur ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,223,36,3	script	Fada#spl12	4_F_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Não quero tocar neles.";
		mes "Mas eles estão acabando com os meus Yggdrasil Berries.";
		mes "Não aguento mais!";
		next;
		mes "[Fada]";
		mes "Não luto muito bem...";
		mes "Mas por nossa glória, eu vou lutar!";
		mes "Eles deviam estar honrados por lutar conosco!";
	} else {
		mes "AshAmanNei Ir LonVeldremu O ";
		mes "AnduSarHir No NudAnumaur Ha Veld";
		mes "Semarmah U VeTingDieb Yu ";
		mes "mahsertas Ra marAmanAdor Ir ";
		next;
		mes "[Fada]";
		mes "TingAgolLu So MushAndumah U neseor";
		mes "WhaDuFulo er ImanThusNe Di Tur";
		mes "DathUornah Ir MemaurDeh Yu Fulo";
		mes "CyaMeDor Ko VeLarsAgol";
	}
	close;
}

// ------------------------------------------------------------------
splendide,305,129,3	script	Fada#spl13	4_F_FAIRYKID,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Hu... que sono.";
		mes "Estou entediada. Não tenho nada para fazer.";
		mes "Até meus amigos estão lutando com esses gigantes, mas não sou boa o suficiente para ajudá-los.";
		next;
		mes "[Fada]";
		mes "Melhor eu checar a minha maquiagem na sala de vestir.";
		mes "Ou será que eu devia dormir para acordar ainda mais bela?";
	} else {
		mes "AnduNothUor O eomaurShar Mu AnduVeld";
		mes "AdorFulotas Ko NorAlahAsh Ie Ala";
		mes "KoOsaLon Ha AnuNeiNoh Di Ting";
		mes "tasKoDiel O IyazGoth";
		next;
		mes "[Fada]";
		mes "OdesmahHir Or mahneaLars So ";
		mes "HirNudAman O AdorWosDu";
		mes "DimYurVa So DanaRuYur";
	}
	close;
}

// ------------------------------------------------------------------
splendide,142,315,3	script	Fada#spl14	4_F_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Não é fácil voar pelo céu.";
		mes "Mas é melhor do que andar.";
		next;
		mes "[Fada]";
		mes "Você é humano? Coitadinho...";
		mes "Você não pode ter essas lindas asas?";
		mes "Deve ter uma vida patética.";
		mes "É óbvio que nós, que podemos voar, somos os únicos abençoados.";
	} else {
		mes "WharemuLars Ur SharUdenWha Yu Agol";
		mes "LontasSar Ra DathVeAlah Ee Noh";
		mes "LarsLonnah Ko TalnesIman Ie Diel";
		next;
		mes "[Fada]";
		mes "tasSarNuff Or WehFarDieb Ir FarRu";
		mes "FusYurnah So MeAshnar O Noth";
		mes "YurBurDu Yu VeldVaMush So Thor";
		mes "AgolDiebUor No TurnahAla O ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,181,107,5	script	Fada#spl15	4_F_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Limpeza, organização e arrumação!";
		mes "Essas são as palavras que nos descrevem!";
		mes "Os outros são sujos e bagunçados!";
	} else {
		mes "FusYurnah So M ";
		mes "WehFarDieb Ir FarRu ";
		mes "FusYurnah ";
		mes "AgolDiebUor No Tur";
	}
	close;
}

// ------------------------------------------------------------------
splendide,163,264,3	script	Fada#spl16	4_F_FAIRYKID3,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "O que você está olhando!";
		next;
		mes "[Fada]";
		mes "Nossa! Você sabe o que é belo quando quando vê algo~?!";
	} else {
		mes "UorVeLars No Ador";
		next;
		mes "[nes]";
		mes "SeGothShar An AshDur";
	}
	close;
}

// ------------------------------------------------------------------
splendide,121,259,3	script	Fada#spl17	4_F_FAIRYKID,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Você já foi para o lado leste?";
		mes "Lá tem muito gelo~";
		mes "Como o frio...";
	} else {
		mes "VaFuloDor An ";
		mes "WosNuffremu Ha TurAshTi";
		mes "VilTiRini O ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,188,76,5	script	Soldado de Splendide#spl	4_M_FAIRYSOLDIER2,{
	mes "[Soldado de Splendide]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Essa é Splendide, a base dos Laphine.";
	} else {
		mes "SeAshLu Di YurDiebTing Ee VeModTur No NuffLarsVa No ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,201,76,3	script	Soldado de Splendide#spl2	4_M_FAIRYSOLDIER2,{
	mes "[Soldado de Splendide]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Essa é Splendide, a base dos Laphine.";
	} else {
		mes "SeAshLu Di YurDiebTing Ee VeModTur No NuffLarsVa No ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,207,97,5	script	Laphine Meio-Enfileirado#spl	4_M_FAIRYKID2,{
	mes "[Laphine Meio-Enfileirado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Haap-!";
		mes "Viu? Como se fosse um poste de luz, não?";
		specialeffect (EF_LEVEL99_4);
	} else {
		mes "sehrVa";
		mes "IyazAnman Di TurHirCya";
		specialeffect (EF_LEVEL99_4);
	}
	close;
}

// ------------------------------------------------------------------
splendide,210,95,3	script	Laphine Meio-Enfileirado#spl2	4_M_FAIRYKID,{
	mes "[Laphine Meio-Enfileirado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Uau! Ótimo!!";
		emotion (e_no1);
	} else {
		mes "MushIyazTur Ee YurDana";
		emotion (e_no1);
	}
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------

spl_in01,190,314,5	script	Oficial de Cegurança#spl	4_M_FAIRYSOLDIER2,{
	mes "[Oficial de Segurança]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Essa é a prisão subterrânea de Splendide.";
		mes "Os culpados e prisioneiros ficam detidos aqui.";
		next;
		mes "[Oficial de Segurança]";
		mes "Se você fizer algo suspeito também poderá ser detido, então tome cuidado!";
	} else {
		mes "GothremuAman Ha DimDielNuff";
		mes "GothAnAsh er NohVaAgol Yee CyaOsaDor U Aman U ";
		mes "TurOdesVrum Ir TalDathOsa Ie WosAgolVrum Ha neaNudHir Ha SeAnVil Di narAlahLars Yu";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,281,329,3	script	Guarda de Esplendor#spl	4_M_FAIRYSOLDIER,{
	mes "[Guarda de Esplendor]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Se você fizer muito barulho, os prisioneiros trarão problemas. Então permaneça em silêncio.";
	} else {
		mes "AnduVeldRe Ko VeldReFulo So LomaurDu So	So ";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,287,306,3	script	#prision_spl	HIDDEN_NPC,{
	mes "[Prisioneiro de Manuk]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Meu, meu corpo...!";
		mes "Injeção! Por favor!! Me ajude!";
	} else {
		mes "Gi ha sd I das ";
		mes "Yda sod ja si dsa";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,265,315,0	script	#prision_spl2	HIDDEN_NPC,5,5,{
	OnTouch:
	mes "[Voz vinda de outro lado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Senhor, por favor!";
		mes "Como posso me comunicar com Manuk?!";
		mes "Sou inocente.";
		mes "Por favor!";
	} else {
		mes "RuffUdeneo Mu VilAsh";
		mes "YurReDur Ha DielTalNe Ko Lars";
		mes "HirVerWeh Yu AnuNud";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,172,225,3	script	Poeta Andarilho#spl	1_M_BARD,{
	cutin ("god_nelluad02",2);
	mes "[Poeta Nell]";
	mes "Oi, você ouviu a bela música que está tocando ao longe?";
	next;
	select("Quem é você?");
	cutin ("god_nelluad01",2);
	mes "[Poeta Nell]";
	mes "Quem, eu...?";
	mes "Sou apenas um poeta admirando o ambiente...";
	next;
	mes "[Poeta Nell]";
	mes "Eu vim aqui outro dia e pedi para fazer anotações sobre esse novo mundo.";
	mes "Então permitiram que eu seguisse os aventureiros até aqui.";
	next;
	mes "[Poeta Nell]";
	mes "Conheci os Laphines.";
	mes "Foi estranho no começo...";
	mes "Já que eu não falava a língua deles.";
	mes "Mas assim que comecei a tocar...";
	mes "Eles adoraram.";
	next;
	mes "[Poeta Nell]";
	mes "Elas são fadas que sabem aproveitar a vida.";
	mes "Como são felizes...";
	mes "São curiosas...";
	mes "Estou honrado em conhecê-las...";
	next;
	mes "[Poeta Nell]";
	mes "Então, você quer me ouvir tocar?";
	next;
	switch(select("Claro.","Não, obrigado.")) {
		case 1:
		mes "[Poeta Nell]";
		mes "Que música você quer??";
		next;
		switch(select("Poema de Bragi","Ritmo Caótico","Crepúsculo Sangrento","Anel dos Nibelungos")) {
			case 1:
			cutin ("god_nelluad02",2);
			mes "[Poeta Nell]";
			mes "Poema de Bragi!";
			mes "Você tem um bom gosto musical.";
			soundeffect ("bragis_poem.wav",0);
			break;
			case 2:
			cutin ("god_nelluad02",2);
			mes "[Poeta Nell]";
			mes "Ritmo Caótico...";
			mes "É uma ótima música, mas eu não recomendaria que você escute-a durante o jantar...";
			soundeffect ("chaos_of_eternity.wav",0);
			break;
			case 3:
			cutin ("god_nelluad02",2);
			mes "[Poeta Nell]";
			mes "Crepúsculo Sangrento!";
			mes "Você gosta de Assassinos?";
			mes "Essa música fala sobre um Assassin Cross que morava no deserto.";
			soundeffect ("assassin_of_sunset.wav",0);
			break;
			case 4:
			cutin ("god_nelluad02",2);
			mes "[Poeta Nell]";
			mes "Anel dos Nibelungos...";
			mes "Essa música conta uma história interessante~";
			next;
			soundeffect ("ring_of_nibelungen.wav",0);
			mes "^4d4dff Havia um rio chamado Rhein que brilhava como se fosse de ouro.";
			mes "Está escondido desde muito antes dessa história ser contada...^000000";
			next;
			mes "^4d4dff Valhalla nasceu da deusa Freya.";
			mes "O invejoso Rocky destruiu a deusa da beleza.^000000";
			mes "^4d4dff Das profundezas surgiu um anel feito de fogo.";
			mes "Um anel tão poderoso que continha os poderes do deus~^000000";
			next;
			mes "^4d4dff O tesouro de Alberich agora guarda aquele poder.";
			mes "O poder do anel que continha o desejo do deus.^000000";
			next;
			mes "^4d4dff O tesouro foi usado para comprar a alma do mundo.";
			mes "Uma alma comprada com o peso do ouro.^000000";
			next;
			mes "^4d4dff Rocky ficou com medo de perder o controle e transformou Alberich em sapo.";
			next;
			mes "^4d4dff Alberich, em seu último suspiro, jurou que seu anel amaldiçoará até a morte quem o usar.";
			next;
			mes "^4d4dff O usuário para sempre será amaldiçoado com o ciúme de Rocky.";
			break;
		}
		break;
		case 2:
		cutin ("god_nelluad03",2);
		mes "[Poeta Nell]";
		mes "Por que não?";
		mes "Por que você ficaria me olhando desse jeito se não quer me ouvir tocar?";
		next;
		select("Você parece com alguém que eu conheço.");
		cutin ("god_nelluad04",2);
		mes "[Poeta Nell]";
		mes "Eh?";
		mes "Sem chance!";
		mes "Você deve estar confundindo...!";
		next;
		mes "[Poeta Nell]";
		mes "Eu tenho um rosto comum...";
		mes "E duvido que já tenhamos nos encontrado antes.";
		next;
		cutin ("god_nelluad01",255);
		mes "- Nell parece envergonhado, e começa a tocar uma música complicada -";
		break;
	}
	close2;
	cutin ("god_nelluad01",255);
	end;
}

// ------------------------------------------------------------------
spl_in01,182,213,1	script	Laphine Descansando#spl	4_F_FAIRYKID3,{
	mes "[Laphine Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Aquele poeta é muito misterioso.";
		mes "Desde que você chegou...";
		mes "Ele começou a tocar música.";
		next;
		mes "[Laphine Descansando]";
		mes "Essa música é da sua terra natal?";
		mes "Eu achei muito boa.";
	} else {
		mes "IyazLarsSe Or An.";
		mes "marLoOsa Yee NeiBur";
		mes "Rinisehrnea Mu...? ";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,181,218,5	script	Laphine Descansando#spl2	4_M_FAIRYKID5,{
	mes "- Ele está balançando a cabeça no ritmo da música -";
	next;
	mes "[Laphine Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Você sabe tocar música assim?";
		mes "Esse ritmo é fantástico.";
	} else {
		mes "GothTingNoth Di~ nar..";
		mes "DiebIyazNud Yu FarAn";
		mes "nesFarDor U";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,161,213,7	script	Laphine Comendo#spl	4_M_FAIRYSOLDIER,{
	mes "[Laphine Comendo]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ei você!";
		mes "Por que você está me encarando enquanto eu janto?";
	} else {
		mes "[Laphine Comendo]";
		mes "NothFarLu Ra...? ";
		mes "RuffYur..!";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,162,202,5	script	Laphine Anotando#spl	4_F_FAIRYKID,{
	mes "[Laphine Anotando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Estamos muito impressionados com o poeta.";
		mes "Nós, Laphines, adoramos música.";
		mes "Eu nunca pensei que ouviria uma música tão exótica.";
		next;
		mes "[Laphine Anotando]";
		mes "Eu gostaria de estudar música algum dia.";
		mes "Planejo escrever sobre o estudo dos instrumentos e da música.";
		next;
		mes "[Laphine Anotando]";
		mes "Algum dia você deveria ouvir a música do meu povo.";
	} else {
		mes "TiTalLars Ur tasThorNoth O AnImanWha.";
		mes "FusLuRuff..... Mu TingLuAla Yee AnmanAndu";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,167,207,7	script	Laphine Silencioso#spl	4_M_FAIRYKID4,{
	mes "^777777Ele está quase dormindo mas mesmo assim está segurando um copo cheio de bebida.";
	mes "Deve estar muito cansado^000000.";
	close;
}

// ------------------------------------------------------------------
spl_in01,189,207,3	script	Funcionário Laphine#spl	4_F_FAIRYKID4,{
	mes "[Funcionário Laphine]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Hm, e aí?";
		mes "Desculpe, mas não vendemos comida para estranhos.";
		next;
		mes "[Funcionário Laphine]";
		mes "Vocês precisam ter cuidado com a comida daqui.";
		mes "Ela é escassa.";
		next;
		mes "[Funcionário Laphine]";
		mes "Você terá que encontrar comida em outro lugar.";
	} else {
		mes "VeldAnoWeh Or ";
		mes "TurWos";
		mes "......ah...";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,154,207,5	script	Funcionário Laphine#spl2	4_F_FAIRYKID5,{
	mes "[Funcionário Laphine]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Esse campo tem um propósito militar. Mas também precisamos de bares.";
		next;
		mes "[Funcionário Laphine]";
		mes "Como um soldado poderia aliviar-se do estresse se não bebendo...?";
		next;
		mes "[Funcionário Laphine]";
		mes "Estamos aqui para apoiar os soldados, providenciando bebidas e entretenimento.";
	} else {
		mes "NorVerNuff Ee Re!";
		mes "remuDurOdes Mu AshFus~!";
		mes "OdesTalWeh Ur??? ";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,122,314,5	script	Soldado de Alta Patente#spl	4_M_FAIRYSOLDIER2,{
	mes "[Soldado de Alta Patente]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Chegaram novos suprimentos?";
		next;
		mes "[Soldado Laphine]";
		mes "Essa espada acabou de chegar...";
		mes "É inspirada nas estrelas, e nós a testamos cortando as folhas que flutuavam na água.";
		next;
		mes "[General Laphine]";
		mes "Hmm, não usamos espadas com frequencia. Mas é linda, podemos usar como decoração.";
	} else {
		mes "NorVerNuff Ee Re....";
		next;
		mes "[Soldado Laphine]";
		mes "FusVerAlah Di ";
		mes "ModNorNor U DimVohlWeh O DimAmannea An WosAnoNoh An AnduMeOdes So TalAdor.";
		next;
		mes "[Soldado de Alta Patente]";
		mes "DurNohHir Ha UorVaThus Di AshNuffLon U mahNuffThus U RuAmanAgol Ir NohHir...?";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,180,201,3	script	Soldado Laphine#spl	4_M_FAIRYSOLDIER2,{
	mes "[Soldado Laphine]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Você é um forasteiro, não?";
		mes "Eu estou observando-o para impedir que algo ruim aconteça.";
		next;
		mes "[Soldado Laphine]";
		mes "Você está definitivamente envolvido.";
		mes "Alguém deixou você entrar aqui...";
		mes "Mas eles não sabiam o que ia acontecer nesse campo de batalha.";
		next;
		mes "[Soldado Laphine]";
		mes "Mas que instrumento é aquele?";
		mes "Nós temos um parecido...";
		mes "Mas o som é diferente.";
	} else {
		mes "FusVohlAnu Ur Lon.";
		mes "LoUdenFar Ha Dormaur?";
		mes "...marAmanYur Mu.";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,122,311,1	script	Soldado Laphine#spl2	4_M_FAIRYSOLDIER,{
	mes "[Soldado Laphine]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Você é um forasteiro?";
		mes "Você veio aqui para ver o depósito militar dos Laphine?";
		next;
		mes "[General Laphine]";
		mes "Esqueça. Isso é inútil para eles...";
		mes "Como essa espada delicada poderia ser usada por aqueles brutos..?";
	} else {
		mes "NorVerNuff Ee Re....";
		next;
		mes "[Soldado Laphine]";
		mes "FusVerAlah Di ";
		mes "ModNorNor U DimVohlWeh O DimAmannea An WosAnoNoh An AnduMeOdes So TalAdor.";
		next;
		mes "[Soldado Laphine]";
		mes "DurNohHir Ha UorVaThus Di AshNuffLon U mahNuffThus U RuAmanAgol Ir NohHir...?";
	}
	close;
}
