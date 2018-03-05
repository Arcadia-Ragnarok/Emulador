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
| - Nota: Npcs comuns na cidade Hugel                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
hugel,189,143,5	script	Jovem#hug	4_M_HUMAN_01,{
	mes("[Jovem]\n Ent�o aquela bolsa de ar gigante pode fazer as pessoas flutuarem no ar?\n Ser� que se eu encher minha barriga com vento tamb�m funciona assim?");
	close;
}

// ------------------------------------------------------------------
hugel,126,151,3	script	Emily#hug	4_F_01,{
	mes("[Emily]\n Eu me sinto t�o feliz por viver nesta calma e pequena cidade.\n � t�o bonita e todos s�o t�o legais.");
	next;
	mes("[Emily]\n Por algum motivo, minha irm� mais velha quer se mudar de Hugel assim que puder.\n Ela diz que est� ficando louca por causa das pessoas que vivem aqui.\n N�o acha que isso � estranho?");
	close;
}

// ------------------------------------------------------------------
hugel,71,197,3	script	Lisa#hug	4_F_01,{
	mes("[Lisa]\n Hugel � uma pequena vila residencial.\n Todo mundo se conhece, todos sabem o que os outros est�o fazendo.\n � t�o sufocante!");
	next;
	mes("[Lisa]\n N�o h� privacidade em cidades pequenas.\n Algum dia eu vou embora e vou viver na cidade grande.");
	close;
}

// ------------------------------------------------------------------
hugel,169,112,5	script	Velha Nikki#hug	4_F_HUGRANMA,{
	mes("[Velha Nikki]\n Voc� n�o deve ser daqui.\n Ah, voc� � um aventureir" + (Sex == SEX_MALE ? "o" : "a") + ", certo?\n E voc� sabe como eu sei?");
	next;
	mes("[Velha Nikki]\n � porque todo mundo que vive aqui come�a a ter a mesma apar�ncia ap�s algum tempo.\n E voc� certamente n�o parece t�o velho quanto n�s.\n Bem, tenha um bom dia, aventureiro.");
	close;
}

// ------------------------------------------------------------------
hugel,175,115,5	script	Marius#hug	4_M_HUGRANFA,{
	mes("[Marius]\n Sim, eu sou um velho, mas eu posso vencer um paspalho como voc� em qualquer dia da semana!\n Voc� sabe, Hugel tem uma expectativa de vida muito maior do que as outras cidades.\n Quer saber por qu�?");
	next;
	mes("[Marius]\n � porque os velhos desta cidade se recusam a deitar e morrer!\n Agora, vamos!\n Deixe-me mostrar como eu sou forte!\n Vamos lutar ou algo assim, garot" + (Sex == SEX_MALE ? "o" : "a") + ".");
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
hu_in01,18,94,0	script	Assistente Tempor�rio#hug	1_M_03,{
	mes("[Luda]\n Bem-vind"+(Sex == SEX_MALE ? "o" : "a") + " ao Escrit�rio da Expedi��o ao Templo.\n Eu sou Luda, um assistente tempor�rio.\n Meu trabalho � manter o escrit�rio arrumado e limpo, mas veja s� este lugar!");
	next;
	mes("[Luda]\n Ainda assim, eu acho que posso cuidar dessa tarefa.\n Esta sala � o escrit�rio da equipe da Rep�lica de Schwaltzvalt, e a outra � da equipe de Rune-Midgard.");
	next;
	mes("[Luda]\n Eu tenho que limpar as duas salas, ent�o estou sempre muito ocupado.\n Por que voc� n�o se alista como volunt�rio para a expedi��o?");
	next;
	mes("[Luda]\n Eu sei que eles n�o podem pagar a voc�.\n Mas � uma grande chance de explorar.");
	close;
}

// ------------------------------------------------------------------
hu_in01,26,77,4	script	Assistente Tempor�rio#hug2	1_M_04,{
	mes("^3355FFEste assistente est� completamente desgostoso com essa tarefa de organizar livros e arquivos.^000000");
	close;
}
