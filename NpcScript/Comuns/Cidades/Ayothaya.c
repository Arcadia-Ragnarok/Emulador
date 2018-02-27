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
| - Nota: Npcs comuns na cidade Ayothaya                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
ayothaya,189,120,3	script	Jovem Thang#ayo	4_M_THAIONGBAK,{
	mes("[Thang]\n Temos um terrível prédio antigo.\n Ninguém se atreve a chegar perto dele.");
	next;
	mes("[Thang]\n No passado, alguns curiosos entraram no edifício apesar das histórias terríveis sobre ele.\n E nunca voltaram.\n Fico imaginando o que acontece lá dentro...");
	next;
	mes("[Thang]\n Mas, se você quiser provar a sua coragem para os outros.\n Seria uma ótima idéia desafiar um grande perigo... eu acho.");
	close;
}

// ------------------------------------------------------------------
ayothaya,171,152,5	script	Garota#ayo	4_F_THAIAYO,{
	mes("[Lalitha]\n Quando for a leste da vila, chegará às ruínas que outrora eram um templo.\n Agora são um ninho de monstros terríveis.");
	next;
	mes("[Lalitha]\n Se você pretende se aventurar nas ruínas, é melhor se preparar muito bem.");
	next;
	mes("[Lalitha]\n Ah, queria saber onde está o meu príncipe amaldiçoado.");
	close;
}

// ------------------------------------------------------------------
ayothaya,143,102,5	script	Velho Aldeão#ayo	4_M_THAIOLD,{
	mes("[Velho Aldeão]\n Hum hum...\n Hã?\n Você deve ser de fora.\n Hum hum... você perguntou para onde estou indo?\n Estou indo pescar logo adiante.");
	next;
	mes("[Velho Aldeão]\n Hum...\n Quer ouvir uma notícia interessante?\n Estão dizendo que alguém encontrou um anel dentro de um peixe que apanharam no pesqueiro!\n Eu também já ouvi falar que várias pessoas encontraram itens valiosos em peixes.");
	next;
	mes("[Velho Aldeão]\n Isso significa que, se tiver sorte, poderá se tornar um milionário pescando aqui...\n ......hu hu hu...");
	next;
	mes("[Velho Aldeão]\n Ah...!? Entrei para o mercado da pesca!\n Nossa...\n Peguei um caminho totalmente errado...\n O pesqueiro é do outro lado.\n Huhuhu, já que entrei para o mercado da pesca não seria uma má idéia dar uma olhada ao redor.\n Huhuhuhu.");
	next;
	mes("[Velho Aldeão]\n Ah, os produtos aquáticos desse mercado são todos frescos e saborosos.\n Você tem de experimentar pelo menos uma vez, senão pode se arrepender.\n Huhu huhuhu...");
	close;
}

// ------------------------------------------------------------------
ayothaya,197,189,5	script	Jovem Kwan#ayo	4_M_THAIAYO,{
	mes("[Kwan]\n É melhor ser cuidadoso quando viajar fora da vila.\n Quando estiver fora, há as ruínas de um templo na floresta.\n Devo avisá-lo de que é um lugar muito perigoso para uma simples visita.");
	next;
	mes("[Kwan]\n Ouvi dizer que, se você tiver uma espécie de amuleto, poderá entrar no templo sem problemas...");
	next;
	mes("[Kwan]\n Mas sugiro que não vá lá.\n Espero que aproveite a sua viagem e não fique perambulando pelas áreas perigosas.");
	close;
}

// ------------------------------------------------------------------
ayothaya,214,142,5	script	Jovem#ayo2	4_M_THAIONGBAK,{
	mes("[Detzi]\n Nós, homens jovens de Ayothaya, praticamos as tradicionais artes marciais para nos tornarmos mais fortes.");
	next;
	mes("[Detzi]\n Por que você não aprende artes marciais?\n Garanto que será de grande ajuda em sua viagem.");
	close;
}

// ------------------------------------------------------------------
ayothaya,241,264,5	script	Jovem#ayo3	4_M_THAIONGBAK,{
	mes("[Eik]\n Ei... você parece forte.\n Quer lutar comigo?");
	next;
	if (select("Claro!", "Não") == 1) {
		mes("[Eik]\n Ei, ei, ei, estava brincando.\n Não sou tão rude a ponto de começar uma briga com estranhos sem nenhum motivo.");
		emotion(e_wah);
		close;
	}
	mes("[Eik]\n O poder verdadeiro nasce de milhares de lutas.\n Não tenha medo de lutar.");
	emotion(e_pif);
	close;
}
