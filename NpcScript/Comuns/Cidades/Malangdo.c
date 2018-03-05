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
| - Nota: Npcs comuns na cidade Malangdo                            |
\*-----------------------------------------------------------------*/

malangdo,151,120,3	script	Menestrel Andarilho#mal	4_M_MINSTREL,{
	mes("[Menestrel]\n Que gato preguiçoso me faz querer cochilar o dia todo.");
	next;
	mes("[Menestrel]\n Assim a vida tão simples.");
	close;
}

// ------------------------------------------------------------------
malangdo,149,120,5	script	Cigana Andarilha#mal	4_F_WANDERER,5,1,{
	mes("[Cigana]\n Os gatos que vivem em aqui são tão enérgicos.\n É estranho, eles me fazem querer dançar todo o dia?\n La di dah di dah!");
	close;
	OnTouch:
	switch(rand(5)) {
		case 0:
		soundeffect("ring_of_nibelungen.wav", 0);
		break;
		case 1:
		soundeffect("dont_forget_me_not.wav", 0);
		break;
		case 2:
		soundeffect("humming.wav", 0);
		break;
		case 3:
		soundeffect("assassin_of_sunset.wav", 0);
		break;
		case 4:
		emotion(e_ho);
		emotion(e_ho, 0, "Menestrel Andarilho#mal");
		break;
	}
	end;
}

// ------------------------------------------------------------------
malangdo,216,168,3	script	Treinador de Gato#mal	4_F_ALCHE_A,{
	emotion(e_gg);
	mes("[Treinador de Gato]\n Meu cartão, ^FF0000Silvervine Fruit^000000.\n Pode fazer todos os gatos em Malangdo meus escravos!");
	next;
	mes("[Treinador de Gato]\n É um artigo raro!\n Estes gatos de cudly não resistiriam a isto.");
	next;
	select("Onde eu posso conseguir isso...\n ^ FF0000Silvervine Fruit^000000?");
	mes("[Treinador de Gato]\n Por que eu lhe falaria quando eu posso ter-lo somente para mim?\n Não lhe conto nem por todo Zeny do mundo!");
	next;
	emotion(e_gg);
	mes("[Treinador de Gato]\n Todos os gatos de Malangdo serão meus!\n Muahahahaha!");
	close;
}
malangdo,164,203,3	duplicate(Treinador de Gato#mal)	Treinador de Gato#mal2	4_M_YURI
