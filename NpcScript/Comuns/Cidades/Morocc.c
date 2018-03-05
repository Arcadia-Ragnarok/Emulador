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
| - Nota: Npcs comuns na cidade Morroc                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
morocc,202,244,0	script	Voluntário#moc	4_F_CRU,{
	mes("[Voluntário de Morroc]\n Depois que o terrível acidente varreu Morroc inteira.\n O Reino de Rune-Midgard tem reunido voluntários para ajudar nas restaurações.");
	next;
	mes("[Voluntário de Morroc]\n Por mais importante que pareça, todos estão sendo cautelosos.\n Mas há sempre alguns que realmente não compreendem a situação, não acha?");
	close;
}

// ------------------------------------------------------------------
morocc,88,133,3	script	Voluntário#moc2	4_M_ALCHE_A,{
	mes("[Voluntário de Morroc]\n Estamos inundados de trabalho...");
	next;
	mes("[Voluntário de Morroc]\n Este trabalho é como o infinito.\n Não importa quanto esforço façamos!!!\n Povo de Rune-Midgard!! Nos dêem uma mãozinha!");
	close;
}

// ------------------------------------------------------------------
morocc,202,110,0	script	Voluntário#moc3	4_M_JOB_ASSASSIN,{
	mes("[Voluntário de Morroc]\n Ainda estamos incapazes de estimar os danos gerais.");
	next;
	mes("[Voluntário de Morroc]\n A União dos Aventureiros e o Reino de Prontera estão colocando seus esforços.\n Na restauração bem como nas restrições da causa original do desastre.");
	next;
	mes("[Voluntário de Morroc]\n Se não desvendarmos a causa orginal.\n Os danos ultrapassarão os limites de Morroc.\n A única coisa que falta é piorar.");
	close;
}

// ------------------------------------------------------------------
morocc,268,287,3	script	Voluntário#moc4	4_F_JOB_HUNTER,{
	mes("[Voluntário de Morroc]\n Por pior que pareça, nem sequer podemos pedir mais apoio.\n Certamente esta deve ser a pior coisa que aconteceu na história de Rune-Midgard.");
	next;
	mes("[Voluntário de Morroc]\n Eu queria saber como ruim foi o dano, mas eu mão posso estimá-lo.\n É como jogar pás de areia contra a maré..");
	close;
}

// ------------------------------------------------------------------
morocc,37,287,0	script	Voluntário#moc5	1_F_PRIEST,{
	mes("[Voluntário de Morroc]\n Está tudo destruído na cidade, mas o problema real são os cidadões.");
	next;
	mes("[Voluntário de Morroc]\n É muito triste ver as vítimas do desastre.\n As pessoas que testemunharam o ocorrido estão muito chocadas.\n E simplesmente não estão mais normais...");
	next;
	mes("[Voluntário de Morroc]\n As pessoas estão extremamente assustadas.\n Mas até que elas tem sorte...\n Muitos dos que presenciaram o desastre ficaram mentalmente perturbados.");
	close;
}

// ------------------------------------------------------------------
morocc,223,102,0	script	Voluntário#moc6::MocVolunteer	2_M_BARD_ORIENT,{
	mes("[Voluntário de Morroc]\n Argh...\n Esse local é meio fantasmagórico...\n Até mesmo essas brisas secas do deserto parece ter uma natureza sombria...");
	next;
	mes("[Voluntário de Morroc]\n Ooh!! Eu...\n Eu estou sentindo alguma coisa!\n Esse clima sombrio daqui está me dando inspiração musical!");
	next;
	mes("[Voluntário de Morroc]\n Certo, acho que você deveria ouvi-la.\n O nome da canção é...\n 'A Rapsódia da Ressurreição do Imperador Morroc'!!!");
	next;
	mes("[Voluntário de Morroc]\n Quando finalmente acordar.\n Será a mesma escuridão falhou ao renascer no mesmo lugar.\n Precisa se esforçar mais e nunca desistir.\n Mas mesmo depois de centenas e milhares de tentativas.\n O grande Imperador Morroc não poderá renascer.");
	next;
	mes("[Voluntário de Morroc]\n Meus estúpidos hímens são inúteis, contra esses aventureiros.\n Agora eu devo renascer, rompendo o tempo e o espaço...");
	next;
	mes("[Voz Ecoante]\n Calado! Você não vê o que está acontecendo?!");
	next;
	mes("[Voluntário de Morroc]\n Ei, você está pegando pesado demais.\n Seu punho aparenta ser bem frágil, mas certamente pode machucar alguém.");
	next;
	mes("[Voz Ecoante]\n Bem... não tenho tempo a perder.\n Eu acho que já ouvi algo parecido antes...");
	next;
	mes("[Voluntário de Morroc]\n Não, não diga isso!\n Com certeza não!");
	close;
}
morocc,226,102,4	duplicate(MocVolunteer)	Voluntário#moc7	4_F_JOB_BLACKSMITH

// ------------------------------------------------------------------
morocc,54,251,0	script	Bêbado#mocr	4_M_ORIENT02,{
	mes("[Bêbado]\n Espere um segundo...!\n Você é talvez um aventureiro?\n Como vai a sua viagem?\n Heh heh...");
	next;
	mes("[Bêbado]\n Deixe-me te contar uma história.\n Você sabe que eu acabei de sair daquela taberna, alí, né?");
	next;
	mes("[Bêbado]\n Eu ouvi que Satan Morroc chegou.\n Simplesmente saiu da fissura do tempo e do espaço blá...\n hic............");
	next;
	mes("[Bêbado]\n Ah... Eu quero ver este Satan com meus próprios olhos!\n Mas eu realmente não deveria.\n Nem em sonho eu veria este Satan em pessoa.");
	next;
	mes("[Bêbado]\n Mas eu acho que não teria nada a perder se você, uma pessoa de coragem.\n Que veio através do deserto tentar seduzir para encontrá-lo, não acha?\n Teehee........\n Não se esqueça de me pagar uma bebida quando você encontrá-lo!\n Hic!");
	next;
	mes("[Bêbado]\n Enfim, você sabe onde estamos?\n Eu só estava dando uma bebidinha na taverna, mas repentinamente, todos os cidadões haviam desaparecido quando saí...\n Ou, uns quinhentos anos se passaram???!");
	close;
}
