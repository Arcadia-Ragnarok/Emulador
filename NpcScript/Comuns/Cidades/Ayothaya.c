/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na cidade Ayothaya                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
ayothaya,189,120,3	script	Jovem Thang#ayo	4_M_THAIONGBAK,{
	mes "[Thang]";
	mes "Temos um terr�vel pr�dio antigo.";
	mes "Ningu�m se atreve a chegar perto dele.";
	next;
	mes "[Thang]";
	mes "No passado, alguns curiosos entraram no edif�cio apesar das hist�rias terr�veis sobre ele.";
	mes "E nunca voltaram.";
	mes "Fico imaginando o que acontece l� dentro...";
	next;
	mes "[Thang]";
	mes "Mas, se voc� quiser provar a sua coragem para os outros.";
	mes "Seria uma �tima id�ia desafiar um grande perigo... eu acho.";
	close;
}

// ------------------------------------------------------------------
ayothaya,171,152,5	script	Garota#ayo	4_F_THAIAYO,{
	mes "[Lalitha]";
	mes "Quando for a leste da vila, chegar� �s ru�nas que outrora eram um templo.";
	mes "Agora s�o um ninho de monstros terr�veis.";
	next;
	mes "[Lalitha]";
	mes "Se voc� pretende se aventurar nas ru�nas, � melhor se preparar muito bem.";
	next;
	mes "[Lalitha]";
	mes "Ah, queria saber onde est� o meu pr�ncipe amaldi�oado.";
	close;
}

// ------------------------------------------------------------------
ayothaya,143,102,5	script	Velho Alde�o#ayo	4_M_THAIOLD,{
	mes "[Velho Alde�o]";
	mes "Hum hum...";
	mes "H�?";
	mes "Voc� deve ser de fora.";
	mes "Hum hum... voc� perguntou para onde estou indo?";
	mes "Estou indo pescar logo adiante.";
	next;
	mes "[Velho Alde�o]";
	mes "Hum...";
	mes "Quer ouvir uma not�cia interessante?";
	mes "Est�o dizendo que algu�m encontrou um anel dentro de um peixe que apanharam no pesqueiro!";
	mes "Eu tamb�m j� ouvi falar que v�rias pessoas encontraram itens valiosos em peixes.";
	next;
	mes "[Velho Alde�o]";
	mes "Isso significa que, se tiver sorte, poder� se tornar um milion�rio pescando aqui...";
	mes "......hu hu hu...";
	next;
	mes "[Velho Alde�o]";
	mes "Ah...!? Entrei para o mercado da pesca!";
	mes "Nossa...";
	mes "Peguei um caminho totalmente errado...";
	mes "O pesqueiro � do outro lado.";
	mes "Huhuhu, j� que entrei para o mercado da pesca n�o seria uma m� id�ia dar uma olhada ao redor.";
	mes "Huhuhuhu.";
	next;
	mes "[Velho Alde�o]";
	mes "Ah, os produtos aqu�ticos desse mercado s�o todos frescos e saborosos.";
	mes "Voc� tem de experimentar pelo menos uma vez, sen�o pode se arrepender.";
	mes "Huhu huhuhu...";
	close;
}

// ------------------------------------------------------------------
ayothaya,197,189,5	script	Jovem Kwan#ayo	4_M_THAIAYO,{
	mes "[Kwan]";
	mes "� melhor ser cuidadoso quando viajar fora da vila.";
	mes "Quando estiver fora, h� as ru�nas de um templo na floresta.";
	mes "Devo avis�-lo de que � um lugar muito perigoso para uma simples visita.";
	next;
	mes "[Kwan]";
	mes "Ouvi dizer que, se voc� tiver uma esp�cie de amuleto, poder� entrar no templo sem problemas...";
	next;
	mes "[Kwan]";
	mes "Mas sugiro que n�o v� l�.";
	mes "Espero que aproveite a sua viagem e n�o fique perambulando pelas �reas perigosas.";
	close;
}

// ------------------------------------------------------------------
ayothaya,214,142,5	script	Jovem#ayo2	4_M_THAIONGBAK,{
	mes "[Detzi]";
	mes "N�s, homens jovens de Ayothaya, praticamos as tradicionais artes marciais para nos tornarmos mais fortes.";
	next;
	mes "[Detzi]";
	mes "Por que voc� n�o aprende artes marciais?";
	mes "Garanto que ser� de grande ajuda em sua viagem.";
	close;
}

// ------------------------------------------------------------------
ayothaya,241,264,5	script	Jovem#ayo3	4_M_THAIONGBAK,{
	mes "[Eik]";
	mes "Ei... voc� parece forte.";
	mes "Quer lutar comigo?";
	next;
	if (select("Claro!","N�o") == 1) {
		mes "[Eik]";
		mes "Ei, ei, ei, estava brincando.";
		mes "N�o sou t�o rude a ponto de come�ar uma briga com estranhos sem nenhum motivo.";
		emotion(e_wah);
		close;
	}
	mes "[Eik]";
	mes "O poder verdadeiro nasce de milhares de lutas.";
	mes "N�o tenha medo de lutar.";
	emotion(e_pif);
	close;
}
