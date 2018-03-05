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
| - Nota: Npcs comuns na cidade Kunlun                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
gonryun,200,82,3	script	SungSon Gam#gon	4_M_TWBOY,{
	mes("[SungSon Gam]\n Festas s�o sempre divertidas.\n � por isso que eu amo essa cidade.\n Essa cidade me faz sentir como se eu vivesse em uma grande festa.");
	close;
}

// ------------------------------------------------------------------
gonryun,268,88,3	script	JoonPo Lyang#gon	4_M_TWMIDMAN,{
	mes("[JoonPo Lyang]\n Somos uma na��o independente e orgulhosa.\n Sempre lutamos bravamente contra os invasores que tentaram tomar essa terra aben�oada.\n E vencemos todas as batalhas por nossa terra at� hoje.");
	next;
	mes("[JoonPo Lyang]\n N�s acreditamos na can��o da Vit�ria Triunfal!\n Ela representa o esp�rito de nossa na��o!");
	close;
}

// ------------------------------------------------------------------
gonryun,118,111,5	script	WonSuk Chen#gon	4_M_ORIENT02,{
	mes("[WonSuk Chen]\n O governador dessa cidade � um homem de grande cora��o.\n Mas j� ouvi falar de alguns que n�o confiam em seu car�ter.\n Estranho...");
	next;
	mes("[Wonsuk Chen]\n Bom, eu gosto de nossa cidade.\n Os esfor�os de nosso governador fazem daqui um bom lugar.\n Eu realmente espero que alguns ingratos n�o atrapalhem seu bom trabalho.");
	close;
}

// ------------------------------------------------------------------
gonryun,181,161,3	script	MoonJin Chung#gon	4_F_TWMIDWOMAN,{
	mes("[MoonJin Chung]\n Os homens daqui s�o chamados de KunLuns, e s�o homens bravos e en�rgicos.\n Mas h� uma dificuldade muita grande para se casarem atualmente...");
	next;
	mes("[MoonJin Chung]\n Isso porque existem hoje muito mais homens que mulheres.\n Nem certeza se meu filho conseguir� se casar eu tenho. Hmm...");
	close;
}

// ------------------------------------------------------------------
gonryun,113,135,6	script	Guardi�o#gon	8_M_TWSOLDIER,{
	mes("[Guardi�o]\n Bem vind"+ (Sex == SEX_MALE ? "o" : "a") +"! Sou um humilde servidor de SaYumMoon, o governador dessa cidade.");
	next;
	mes("[Guardi�o]\n Acredito que n�o v� acontecer mas, se voc� agir de maneira suspeita, serei obrigado a te prender.");
	next;
	mes("[Guardi�o]\n Mas n�o se preocupe.\n N�o acredito que isso v� acontecer.\n Aproveite sua estada!");
	close;
}

// ------------------------------------------------------------------
gonryun,113,127,6	script	Guardi�o#gon2	8_M_TWSOLDIER,{
	mes("[Guardi�o]\n Bem vind"+(Sex == SEX_MALE ? "o":"a")+"!\n Sou um humilde servidor de SaYumMoon, o governador dessa cidade.");
	next;
	mes("[Guardi�o]\n Acredito que n�o v� acontecer.\n Mas se voc� agir de maneira suspeita, serei obrigado a te prender.");
	next;
	mes("[Guardi�o]\n Mas n�o se preocupe.\n N�o acredito que isso v� acontecer.\n Aproveite sua estada!");
	close;
}

// ------------------------------------------------------------------
gonryun,166,196,3	script	Soldado#gon	8_M_TWSOLDIER,{
	mes("[WaGuo]\n Voc� sabia que esse local foi um santu�rio?\n H� muito tempo atr�s, depois que foi abandonado pelos monges que buscavam o reino dos c�us.\n Ele se tornou a morada de v�rios monstros.");
	next;
	mes("[WaGuo]\n A cidade est� se preparando para o festival.\n Mas esses preparativos est�o tomando muito tempo...\n Isso nunca aconteceu antes.");
	close;
}

// ------------------------------------------------------------------
gonryun,169,71,3	script	LeeHee Min#gon	4_F_TWGIRL,{
	mes("[LeeHee Min]\n Bem vind"+(Sex == SEX_MALE ? "o" : "a") + "!\n Voc� gostou da paisagem no seu caminho para c�?\n O que achou daquelas pequenas constru��es no caminho?");
	next;
	mes("[LeeHee Min]\n S�o miniaturas das cidades do reino de Rune-Midgard.\n Voc� pode olhar para todas as cidades de uma s� vez.\n Foi um trabalho muito dif�cil.\n Mas n�o � uma obra de arte?");
	next;
	mes("[LeeHee Min]\n Se voc� souber apreciar, voc� ver� muitas paisagens bonitas pela cidade.");
	close;
}

// ------------------------------------------------------------------
gonryun,153,64,7	script	Anunciante de Kunlun#gon	4_M_TWMIDMAN,{
	mes("[Jangchungryong]\n Quando desejar terminar sua visita a Kunlun.\n Eu irei leva-lo para o porto.");
	next;
	if (select("Retornar ao porto", "Cancelar") == 1) {
		mes("[Jangchungryong]\n Eu espero que voc� tenha se divertido conosco.\n Vamos indo ent�o?");
		close2;
		warp("gon_fild01", 258, 82);
		end;
	}
	mes("[Jangchungryong]\n Demore o tempo que quiser aqui.\n Existem muitos lugares misteriosos em Kunlun pra voc� visitar.");
	close;
}
