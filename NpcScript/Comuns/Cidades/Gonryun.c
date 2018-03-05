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
| - Nota: Npcs comuns na cidade Kunlun                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
gonryun,200,82,3	script	SungSon Gam#gon	4_M_TWBOY,{
	mes("[SungSon Gam]\n Festas são sempre divertidas.\n É por isso que eu amo essa cidade.\n Essa cidade me faz sentir como se eu vivesse em uma grande festa.");
	close;
}

// ------------------------------------------------------------------
gonryun,268,88,3	script	JoonPo Lyang#gon	4_M_TWMIDMAN,{
	mes("[JoonPo Lyang]\n Somos uma nação independente e orgulhosa.\n Sempre lutamos bravamente contra os invasores que tentaram tomar essa terra abençoada.\n E vencemos todas as batalhas por nossa terra até hoje.");
	next;
	mes("[JoonPo Lyang]\n Nós acreditamos na canção da Vitória Triunfal!\n Ela representa o espírito de nossa nação!");
	close;
}

// ------------------------------------------------------------------
gonryun,118,111,5	script	WonSuk Chen#gon	4_M_ORIENT02,{
	mes("[WonSuk Chen]\n O governador dessa cidade é um homem de grande coração.\n Mas já ouvi falar de alguns que não confiam em seu caráter.\n Estranho...");
	next;
	mes("[Wonsuk Chen]\n Bom, eu gosto de nossa cidade.\n Os esforços de nosso governador fazem daqui um bom lugar.\n Eu realmente espero que alguns ingratos não atrapalhem seu bom trabalho.");
	close;
}

// ------------------------------------------------------------------
gonryun,181,161,3	script	MoonJin Chung#gon	4_F_TWMIDWOMAN,{
	mes("[MoonJin Chung]\n Os homens daqui são chamados de KunLuns, e são homens bravos e enérgicos.\n Mas há uma dificuldade muita grande para se casarem atualmente...");
	next;
	mes("[MoonJin Chung]\n Isso porque existem hoje muito mais homens que mulheres.\n Nem certeza se meu filho conseguirá se casar eu tenho. Hmm...");
	close;
}

// ------------------------------------------------------------------
gonryun,113,135,6	script	Guardião#gon	8_M_TWSOLDIER,{
	mes("[Guardião]\n Bem vind"+ (Sex == SEX_MALE ? "o" : "a") +"! Sou um humilde servidor de SaYumMoon, o governador dessa cidade.");
	next;
	mes("[Guardião]\n Acredito que não vá acontecer mas, se você agir de maneira suspeita, serei obrigado a te prender.");
	next;
	mes("[Guardião]\n Mas não se preocupe.\n Não acredito que isso vá acontecer.\n Aproveite sua estada!");
	close;
}

// ------------------------------------------------------------------
gonryun,113,127,6	script	Guardião#gon2	8_M_TWSOLDIER,{
	mes("[Guardião]\n Bem vind"+(Sex == SEX_MALE ? "o":"a")+"!\n Sou um humilde servidor de SaYumMoon, o governador dessa cidade.");
	next;
	mes("[Guardião]\n Acredito que não vá acontecer.\n Mas se você agir de maneira suspeita, serei obrigado a te prender.");
	next;
	mes("[Guardião]\n Mas não se preocupe.\n Não acredito que isso vá acontecer.\n Aproveite sua estada!");
	close;
}

// ------------------------------------------------------------------
gonryun,166,196,3	script	Soldado#gon	8_M_TWSOLDIER,{
	mes("[WaGuo]\n Você sabia que esse local foi um santuário?\n Há muito tempo atrás, depois que foi abandonado pelos monges que buscavam o reino dos céus.\n Ele se tornou a morada de vários monstros.");
	next;
	mes("[WaGuo]\n A cidade está se preparando para o festival.\n Mas esses preparativos estão tomando muito tempo...\n Isso nunca aconteceu antes.");
	close;
}

// ------------------------------------------------------------------
gonryun,169,71,3	script	LeeHee Min#gon	4_F_TWGIRL,{
	mes("[LeeHee Min]\n Bem vind"+(Sex == SEX_MALE ? "o" : "a") + "!\n Você gostou da paisagem no seu caminho para cá?\n O que achou daquelas pequenas construções no caminho?");
	next;
	mes("[LeeHee Min]\n São miniaturas das cidades do reino de Rune-Midgard.\n Você pode olhar para todas as cidades de uma só vez.\n Foi um trabalho muito difícil.\n Mas não é uma obra de arte?");
	next;
	mes("[LeeHee Min]\n Se você souber apreciar, você verá muitas paisagens bonitas pela cidade.");
	close;
}

// ------------------------------------------------------------------
gonryun,153,64,7	script	Anunciante de Kunlun#gon	4_M_TWMIDMAN,{
	mes("[Jangchungryong]\n Quando desejar terminar sua visita a Kunlun.\n Eu irei leva-lo para o porto.");
	next;
	if (select("Retornar ao porto", "Cancelar") == 1) {
		mes("[Jangchungryong]\n Eu espero que você tenha se divertido conosco.\n Vamos indo então?");
		close2;
		warp("gon_fild01", 258, 82);
		end;
	}
	mes("[Jangchungryong]\n Demore o tempo que quiser aqui.\n Existem muitos lugares misteriosos em Kunlun pra você visitar.");
	close;
}
