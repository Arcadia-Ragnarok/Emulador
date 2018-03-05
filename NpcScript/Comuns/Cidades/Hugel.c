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
| - Nota: Npcs comuns na cidade Hugel                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
hugel,189,143,5	script	Jovem#hug	4_M_HUMAN_01,{
	mes("[Jovem]\n Então aquela bolsa de ar gigante pode fazer as pessoas flutuarem no ar?\n Será que se eu encher minha barriga com vento também funciona assim?");
	close;
}

// ------------------------------------------------------------------
hugel,126,151,3	script	Emily#hug	4_F_01,{
	mes("[Emily]\n Eu me sinto tão feliz por viver nesta calma e pequena cidade.\n É tão bonita e todos são tão legais.");
	next;
	mes("[Emily]\n Por algum motivo, minha irmã mais velha quer se mudar de Hugel assim que puder.\n Ela diz que está ficando louca por causa das pessoas que vivem aqui.\n Não acha que isso é estranho?");
	close;
}

// ------------------------------------------------------------------
hugel,71,197,3	script	Lisa#hug	4_F_01,{
	mes("[Lisa]\n Hugel é uma pequena vila residencial.\n Todo mundo se conhece, todos sabem o que os outros estão fazendo.\n É tão sufocante!");
	next;
	mes("[Lisa]\n Não há privacidade em cidades pequenas.\n Algum dia eu vou embora e vou viver na cidade grande.");
	close;
}

// ------------------------------------------------------------------
hugel,169,112,5	script	Velha Nikki#hug	4_F_HUGRANMA,{
	mes("[Velha Nikki]\n Você não deve ser daqui.\n Ah, você é um aventureir" + (Sex == SEX_MALE ? "o" : "a") + ", certo?\n E você sabe como eu sei?");
	next;
	mes("[Velha Nikki]\n É porque todo mundo que vive aqui começa a ter a mesma aparência após algum tempo.\n E você certamente não parece tão velho quanto nós.\n Bem, tenha um bom dia, aventureiro.");
	close;
}

// ------------------------------------------------------------------
hugel,175,115,5	script	Marius#hug	4_M_HUGRANFA,{
	mes("[Marius]\n Sim, eu sou um velho, mas eu posso vencer um paspalho como você em qualquer dia da semana!\n Você sabe, Hugel tem uma expectativa de vida muito maior do que as outras cidades.\n Quer saber por quê?");
	next;
	mes("[Marius]\n É porque os velhos desta cidade se recusam a deitar e morrer!\n Agora, vamos!\n Deixe-me mostrar como eu sou forte!\n Vamos lutar ou algo assim, garot" + (Sex == SEX_MALE ? "o" : "a") + ".");
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
hu_in01,18,94,0	script	Assistente Temporário#hug	1_M_03,{
	mes("[Luda]\n Bem-vind"+(Sex == SEX_MALE ? "o" : "a") + " ao Escritório da Expedição ao Templo.\n Eu sou Luda, um assistente temporário.\n Meu trabalho é manter o escritório arrumado e limpo, mas veja só este lugar!");
	next;
	mes("[Luda]\n Ainda assim, eu acho que posso cuidar dessa tarefa.\n Esta sala é o escritório da equipe da Repúlica de Schwaltzvalt, e a outra é da equipe de Rune-Midgard.");
	next;
	mes("[Luda]\n Eu tenho que limpar as duas salas, então estou sempre muito ocupado.\n Por que você não se alista como voluntário para a expedição?");
	next;
	mes("[Luda]\n Eu sei que eles não podem pagar a você.\n Mas é uma grande chance de explorar.");
	close;
}

// ------------------------------------------------------------------
hu_in01,26,77,4	script	Assistente Temporário#hug2	1_M_04,{
	mes("^3355FFEste assistente está completamente desgostoso com essa tarefa de organizar livros e arquivos.^000000");
	close;
}
