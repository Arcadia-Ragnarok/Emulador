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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Morroc                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
morocc,150,120,5	script	Soldado de Morroc#moc	4_M_MOC_SOLDIER,3,3,{
	end;
	OnTouch:
	mes "[Soldado de Morroc]";
	mes "Ei, voc�! Pare ai.";
	next;
	mes "[Soldado de Morroc]";
	mes "Essa � uma �rea restrita.";
	mes "Voc� n�o pode se aproximar!";
	close;
}

// ------------------------------------------------------------------
morocc,202,244,0	script	Volunt�rio#moc	4_F_CRU,{
	mes "[Volunt�rio de Morroc]";
	mes "Depois que o terr�vel acidente varreu Morroc inteira.";
	mes "O Reino de Rune-Midgard tem reunido volunt�rios para ajudar nas restaura��es.";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Por mais importante que pare�a, todos est�o sendo cautelosos.";
	mes "Mas h� sempre alguns que realmente n�o compreendem a situa��o, n�o acha?";
	close;
}

// ------------------------------------------------------------------
morocc,88,133,3	script	Volunt�rio#moc2	4_M_ALCHE_A,{
	mes "[Volunt�rio de Morroc]";
	mes "Estamos inundados de trabalho...";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Este trabalho � como o infinito.";
	mes "N�o importa quanto esfor�o fa�amos!!!";
	mes "Povo de Rune-Midgard!! Nos d�em uma m�ozinha!";
	close;
}

// ------------------------------------------------------------------
morocc,202,110,0	script	Volunt�rio#moc3	4_M_JOB_ASSASSIN,{
	mes "[Volunt�rio de Morroc]";
	mes "Ainda estamos incapazes de estimar os danos gerais.";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "A Uni�o dos Aventureiros e o Reino de Prontera est�o colocando seus esfor�os.";
	mes "Na restaura��o bem como nas restri��es da causa original do desastre.";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Se n�o desvendarmos a causa orginal.";
	mes "Os danos ultrapassar�o os limites de Morroc.";
	mes "A �nica coisa que falta � piorar.";
	close;
}

// ------------------------------------------------------------------
morocc,268,287,3	script	Volunt�rio#moc4	4_F_JOB_HUNTER,{
	mes "[Volunt�rio de Morroc]";
	mes "Por pior que pare�a, nem sequer podemos pedir mais apoio.";
	mes "Certamente esta deve ser a pior coisa que aconteceu na hist�ria de Rune-Midgard.";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Eu queria saber como ruim foi o dano, mas eu m�o posso estim�-lo.";
	mes "� como jogar p�s de areia contra a mar�..";
	close;
}

// ------------------------------------------------------------------
morocc,37,287,0	script	Volunt�rio#moc5	1_F_PRIEST,{
	mes "[Volunt�rio de Morroc]";
	mes "Est� tudo destru�do na cidade, mas o problema real s�o os cidad�es.";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "� muito triste ver as v�timas do desastre.";
	mes "As pessoas que testemunharam o ocorrido est�o muito chocadas.";
	mes "E simplesmente n�o est�o mais normais...";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "As pessoas est�o extremamente assustadas.";
	mes "Mas at� que elas tem sorte...";
	mes "Muitos dos que presenciaram o desastre ficaram mentalmente perturbados.";
	close;
}

// ------------------------------------------------------------------
morocc,223,102,0	script	Volunt�rio#moc6::MocVolunteer	2_M_BARD_ORIENT,{
	mes "[Volunt�rio de Morroc]";
	mes "Argh...";
	mes "Esse local � meio fantasmag�rico...";
	mes "At� mesmo essas brisas secas do deserto parece ter uma natureza sombria...";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Ooh!! Eu...";
	mes "Eu estou sentindo alguma coisa!";
	mes "Esse clima sombrio daqui est� me dando inspira��o musical!";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Certo, acho que voc� deveria ouvi-la.";
	mes "O nome da can��o �...";
	mes "'A Raps�dia da Ressurrei��o do Imperador Morroc'!!!";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Quando finalmente acordar.";
	mes "Ser� a mesma escurid�o falhou ao renascer no mesmo lugar,";
	mes "Precisa se esfor�ar mais e nunca desistir.";
	mes "Mas mesmo depois de centenas e milhares de tentativas.";
	mes "O grande Imperador Morroc n�o poder� renascer.";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Meus est�pidos h�mens s�o in�teis, contra esses aventureiros.";
	mes "Agora eu devo renascer, rompendo o tempo e o espa�o...";
	next;
	mes "[Voz Ecoante]";
	mes "Calado! Voc� n�o v� o que est� acontecendo?!";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "Ei, voc� est� pegando pesado demais.";
	mes "Seu punho aparenta ser bem fr�gil, mas certamente pode machucar algu�m.";
	next;
	mes "[Voz Ecoante]";
	mes "Bem... n�o tenho tempo a perder.";
	mes "Eu acho que j� ouvi algo parecido antes...";
	next;
	mes "[Volunt�rio de Morroc]";
	mes "N�o, n�o diga isso!";
	mes "Com certeza n�o!";
	close;
}
morocc,226,102,4	duplicate(MocVolunteer)	Volunt�rio#moc7	4_F_JOB_BLACKSMITH