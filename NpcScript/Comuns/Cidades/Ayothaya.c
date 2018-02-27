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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Ayothaya                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
ayothaya,189,120,3	script	Jovem Thang#ayo	4_M_THAIONGBAK,{
	mes("[Thang]\n Temos um terr�vel pr�dio antigo.\n Ningu�m se atreve a chegar perto dele.");
	next;
	mes("[Thang]\n No passado, alguns curiosos entraram no edif�cio apesar das hist�rias terr�veis sobre ele.\n E nunca voltaram.\n Fico imaginando o que acontece l� dentro...");
	next;
	mes("[Thang]\n Mas, se voc� quiser provar a sua coragem para os outros.\n Seria uma �tima id�ia desafiar um grande perigo... eu acho.");
	close;
}

// ------------------------------------------------------------------
ayothaya,171,152,5	script	Garota#ayo	4_F_THAIAYO,{
	mes("[Lalitha]\n Quando for a leste da vila, chegar� �s ru�nas que outrora eram um templo.\n Agora s�o um ninho de monstros terr�veis.");
	next;
	mes("[Lalitha]\n Se voc� pretende se aventurar nas ru�nas, � melhor se preparar muito bem.");
	next;
	mes("[Lalitha]\n Ah, queria saber onde est� o meu pr�ncipe amaldi�oado.");
	close;
}

// ------------------------------------------------------------------
ayothaya,143,102,5	script	Velho Alde�o#ayo	4_M_THAIOLD,{
	mes("[Velho Alde�o]\n Hum hum...\n H�?\n Voc� deve ser de fora.\n Hum hum... voc� perguntou para onde estou indo?\n Estou indo pescar logo adiante.");
	next;
	mes("[Velho Alde�o]\n Hum...\n Quer ouvir uma not�cia interessante?\n Est�o dizendo que algu�m encontrou um anel dentro de um peixe que apanharam no pesqueiro!\n Eu tamb�m j� ouvi falar que v�rias pessoas encontraram itens valiosos em peixes.");
	next;
	mes("[Velho Alde�o]\n Isso significa que, se tiver sorte, poder� se tornar um milion�rio pescando aqui...\n ......hu hu hu...");
	next;
	mes("[Velho Alde�o]\n Ah...!? Entrei para o mercado da pesca!\n Nossa...\n Peguei um caminho totalmente errado...\n O pesqueiro � do outro lado.\n Huhuhu, j� que entrei para o mercado da pesca n�o seria uma m� id�ia dar uma olhada ao redor.\n Huhuhuhu.");
	next;
	mes("[Velho Alde�o]\n Ah, os produtos aqu�ticos desse mercado s�o todos frescos e saborosos.\n Voc� tem de experimentar pelo menos uma vez, sen�o pode se arrepender.\n Huhu huhuhu...");
	close;
}

// ------------------------------------------------------------------
ayothaya,197,189,5	script	Jovem Kwan#ayo	4_M_THAIAYO,{
	mes("[Kwan]\n � melhor ser cuidadoso quando viajar fora da vila.\n Quando estiver fora, h� as ru�nas de um templo na floresta.\n Devo avis�-lo de que � um lugar muito perigoso para uma simples visita.");
	next;
	mes("[Kwan]\n Ouvi dizer que, se voc� tiver uma esp�cie de amuleto, poder� entrar no templo sem problemas...");
	next;
	mes("[Kwan]\n Mas sugiro que n�o v� l�.\n Espero que aproveite a sua viagem e n�o fique perambulando pelas �reas perigosas.");
	close;
}

// ------------------------------------------------------------------
ayothaya,214,142,5	script	Jovem#ayo2	4_M_THAIONGBAK,{
	mes("[Detzi]\n N�s, homens jovens de Ayothaya, praticamos as tradicionais artes marciais para nos tornarmos mais fortes.");
	next;
	mes("[Detzi]\n Por que voc� n�o aprende artes marciais?\n Garanto que ser� de grande ajuda em sua viagem.");
	close;
}

// ------------------------------------------------------------------
ayothaya,241,264,5	script	Jovem#ayo3	4_M_THAIONGBAK,{
	mes("[Eik]\n Ei... voc� parece forte.\n Quer lutar comigo?");
	next;
	if (select("Claro!", "N�o") == 1) {
		mes("[Eik]\n Ei, ei, ei, estava brincando.\n N�o sou t�o rude a ponto de come�ar uma briga com estranhos sem nenhum motivo.");
		emotion(e_wah);
		close;
	}
	mes("[Eik]\n O poder verdadeiro nasce de milhares de lutas.\n N�o tenha medo de lutar.");
	emotion(e_pif);
	close;
}
