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
| - Nota: Npcs comuns na cidade Veins                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
veins,162,34,5	script	Cidadão#vei	4_M_DESERT,{
	mes("[Cidadão]\n Eu adoro cactos.\n São as plantas mais lindas do deserto.\n Às vezes, são os únicos sinais de vida nessa terra árida.");
	next;
	mes("[Cidadão]\n Se você sentir uma palpitação em seu coração quando olhar para um cacto.\n Você deve apreciar a verdadeira beleza do deserto.");
	next;
	mes("[Cidadão]\n Bem, eu não sei se posso encontrar alguém que ache o deserto maravilhoso e encantador quanto eu.\n Realmente é uma pena.");
	close;
}

// ------------------------------------------------------------------
veins,137,179,5	script	Cidadão#vei2	4_M_DESERT,{
	mes("[Cidadão]\n Ahh, por que a nossa loja de armas é tão chata?\n Não há anda aqui além do velho lixo.\n É triste dizer, mas não há nada de especial.");
	next;
	mes("[Cidadão]\n Não seria ótimo se houvesse uma loja que vendesse os itens divinos?\n Claro que isso é pedir demais.");
	close;
}

// ------------------------------------------------------------------
veins,310,195,1	script	Cidadão#vei3	4_M_DST_MASTER,{
	mes("[Cidadão]\n Cactos são maravilhosos, eles são as plantas mais bonitas do Deserto.\n Sim, devemos cuidar delas.");
	next;
	mes("[Cidadão]\n Cactos regulares são muito incomuns, mas eu ouvi que no deserto tem um tipo de cacto que faz barulhos irritantes e passeia por aí.\n Como isso pode ser verdade?");
	close;
}

// ------------------------------------------------------------------
veins,333,318,3	script	Cidadão#vei4	4_F_DESERT,{
	mes("[Cidadão]\n O que um aventureiro está fazendo numa cidade tão isolada e monótona?\n Você não deveria estar procurando por aventuras?\n Acredite em mim, este lugar é chato.");
	close;
}

// ------------------------------------------------------------------
veins,171,256,3	script	Cidadão#vei5	4_M_DESERT,{
	mes("[Cidadão]\n Não me interpretem mal, eu daria minha vida à Freya.\n Mas este chamado templo, parece tão estranho e suspeito.\n Como pode ser um lugar para cultuar?");
	close;
}

// ------------------------------------------------------------------
veins,111,50,3	script	Cidadão#vei6	4_M_DESERT,{
	mes("[Cidadão]\n As pessoas valorizam água por aqui, mas eu tenho algo mais precioso para mim.\n Sim, até mais precioso que água...\n Você advinhou...\n Amor verdadeiro.");
	next;
	mes("[Cidadão]\n Na verdade, começamos a namorar aqui, por isso que este lugar realmente significa muito para mim.\n É o meu lugar favorito para passar o tempo com a minha namorada.");
	close;
}

// ------------------------------------------------------------------
veins,263,153,5	script	Cidadão#vei7	4_M_DESERT,{
	mes("[Cidadão]\n As roupas que fazemos aqui são leves, arejadas, e com tecido de qualidade.\n Evidentemente, precisamos de usar coisas assim desde que o tempo está insuportavelmente quente.");
	next;
	mes("[Cidadão]\n O tecido? Bem, eu vou te dar uma dica.\n É feita de algo relacionado com camelos.\n Heh! Vou deixar que você descubra por conta própria.");
	close;
}

// ------------------------------------------------------------------
veins,296,184,3	script	Cidadão#vei8	4_F_DESERT,{
	mes("[Cidadão]\n Vou te contar um segredo.\n Mas prometa que não vai contar para ninguem, ok?");
	next;
	mes("[Cidadão]\n Quando chegar a hora, o Templo de Cheshrumnir se abrirá e um robô gingante de Freya sairá!\n Irá destruir todos os países exceto Arunafeltz");
	next;
	mes("[Cidadão]\n Esse robô pode soprar furacões de sua boca, e atirar raios de seus chifres.\n Pode atirar seus punhos longe, e o seu toráx é um lança-chamas.");
	next;
	mes("[Cidadão]\n ...........");
	next;
	mes("[Cidadão]\n Então você não acredita em mim.\n O que você disse? Zinger?\n Incrível Z?\n Que droga é essa?");
	close;
}

// ------------------------------------------------------------------
veins,138,71,5	script	Criança#vei	4_F_DST_CHILD,{
	mes("[Criança]\n EI! Saia daqui!\n Você não vê que estou brincando de esconde-esconde?!\n Saia antes que eles me achem!");
	close;
}

// ------------------------------------------------------------------
veins,206,275,3	script	Criança#vei2	4_F_DST_CHILD,{
	mes("[Criança]\n Eu queria olhar por dentro do templo, mas ele parece assustador por fora!\n Eu me pergunto por que parece assim?");
	close;
}

// ------------------------------------------------------------------
veins,291,205,3	script	Criança#vei3	4_M_DST_CHILD,{
	mes("[Criança]\n Argh! Sou um deus da guerra protegendo Freya e Arunafeltz!\n Ahhhhh! Morte para todos os seus inimigos!");
	next;
	mes("[Criança]\n Queimem, hereges, queeimeeem!\n Destruam vossas casas, vossas famílias, e construam um novo e perfeito mundo para Freya!");
	next;
	mes("[Criança]\n Hee hee! Isso não soa maravilhoso?!\n Quando eu crescer, quero ser esse tipo de herói!");
	close;
}

// ------------------------------------------------------------------
veins,270,164,5	script	Velho#vei	4_M_DST_GRAND,{
	mes("[Velho]\n Bendita seja Freya que me abençoou com vida longa, mas me pergunto se vivi bem a vida.");
	next;
	mes("[Velho]\n Não tenho qualquer dúvida ou lamento, mas talvez haja algumas coisas que perdi.\n Eu acho que estou velho, mas também não ajuda pensar nesse tipo de coisas...");
	close;
}

// ------------------------------------------------------------------
veins,191,134,3	script	Velho#vei2	4_M_DST_GRAND,{
	mes("[Velho]\n Por que você não da uma olhada nas minhas mercadorias?\n Eu tenho muitas coisas que devem te interessar.");
	next;
	mes("[Velho]\n Bendita seja Freya, que nos protege, e nos abençoa com água e comida.\n Você não acha isso maravilhoso, jovem aventureir" + (Sex == SEX_MALE ? "o" : "a") +"?");
	close;
}

// ------------------------------------------------------------------
veins,161,63,3	script	Velho#vei3	4_M_DST_GRAND,{
	mes("[Velho]\n Ah. Você deve estar de passagem.\n Hmm, Veins é uma cidade pequena, talvez pague uma visita ao Templo Cheshrumnir?");
	next;
	mes("[Velho]\n Eu espero que você aprecie a sua estadia.\n Agora se me der licença...\n Eu gostaria de continuar com as minhas orações para Freya.");
	next;
	mes("[Velho]\n Oh, graciosa Freya, seu servo humildemente se ajoelha perante ti...\n Me cure dessa enfermidade!\n O corpo está fraco, mas o espírito é de boa vontade...!\n Deve ser...\n O Templo de Cheshrumnir.");
	close;
}

// ------------------------------------------------------------------
veins,232,169,5	script	Senhora#vei	4_F_DST_GRAND,{
	mes("[Senhora]\n ...........\n Quando eu olho a cidade daqui, percebo muitas coisas.\n Acho que você não entenderia, não importa o quanto eu explique.");
	next;
	mes("[Senhora]\n Eu acho que isso é uma das coisas que você aprende com a idade.\n Sim, não há nada que substitua a experiência quando se trata de algumas coisas, você verá.");
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ve_in,101,314,1	script	Habitante#vei	4_M_DESERT,{
	mes("[Habitante]\n ^333333*ofegante*^000000\n Eu devo estar muito para o agrado de da deusa Freya.");
	next;
	mes("[Habitante]\n Eu acredito que eu posso servi-la se expandir minha sabedoria.");
	close;
}

// ------------------------------------------------------------------
ve_in,361,243,5	script	Habitante#vei2	4_M_DIEMAN,{
	mes("[Habitante]\n ...............\n ...............\n ...............");
	next;
	mes("[Habitante]\n ...............\n ...............\n ...............");
	next;
	mes("[Habitante]\n Te enganei!\n Achou que eu estava morto não foi?");
	close;
}

// ------------------------------------------------------------------
ve_in,180,232,5	script	Habitante#vei3	4_M_DST_MASTER,{
	mes("[Habitante]\n É bom quando uma cidade é pacífica e tranquila.\n Mas é horrivel quando um bar é tão quieto assim.");
	next;
	mes("[Habitante]\n Bem, tem pontos bons e maus em tudo.\n Talvez as coisas melhorem se mais aventureiros como você nos visitarem");
	close;
}


// ------------------------------------------------------------------
ve_in,190,215,3	script	Habitante#vei4	4_M_DST_MASTER,{
	mes("[Habitante]\n Bem, nossa cidade não tem outra alternativa sem ser se defender em tempos perigosos.\n Os jovens aqui são fortes para nos proteger.");
	next;
	mes("[Habitante]\n Eles não são bonitos, mas tem um bom coração.\n É uma pena que as mulheres aqui estão mais preocupados com aparências.");
	next;
	mes("[Habitante]\n Não julgue um livro pela capa, mas sim pelo conteúdo.");
	close;
}

// ------------------------------------------------------------------
ve_in,222,125,5	script	Habitante#vei5	4_M_DESERT,{
	mes("[Habitante]\n Eu quero perguntar á mulher que está na minha frente.\n Acha que ela vai...?");
	next;
	mes("[Habitante]\n Eu falei isso muito alto?\n E-eu Não queria que ela ouvisse!");
	close;
}

// ------------------------------------------------------------------
ve_in,232,135,5	script	Habitante#vei6	4_M_DST_MASTER,{
	mes("[Habitante]\n Se você gosta de uma boa bebida, então você tem que ir para o Bar de Veins.");
	next;
	mes("[Habitante]\n Se você não gosta de beber então esse é o lugar perfeito para aprender!\n ...a gostar... de beber...");
	close;
}

// ------------------------------------------------------------------
ve_in,232,124,5	script	Habitante#vei7	4_M_DESERT,{
	mes("[Habitante]\n Um lobo solitário no deserto.\n Este sou eu.\n Bem, é por isso que estou bebendo aqui sozinho.");
	next;
	mes("[Habitante]\n Doce Freya, esses drinques são muito bons..\n Eu poderia beber o dia inteiro.");
	close;
}

// ------------------------------------------------------------------
ve_in,119,386,3	script	Prisioneiro#vei	4_M_DST_MASTER,{
	mes("[Prisoneiro]\n Inacreditável!\n Que tipo de país é este?!\n Como vocês podem me prender só por que eu não acredito em Freya?!");
	next;
	mes("[Prisoneiro]\n Isso não é civilizado!\n Se vocês não respeitam minha crenças, vocês são um bando de selvagens, sabia disso?\n Alguém, algém me ajude!");
	close;
}

// ------------------------------------------------------------------
ve_in,111,379,0	script	Guarda#vei	4_M_DST_MASTER,{
	mes("[Guarda]\n Esse lugar assegura que os criminosos perigosos não estão ameaçando o públi..\n Espere.\n Por que você está nesse lugar?!\n Esse lugar não é seguro para você!\n Saia!");
	close;
}

// ------------------------------------------------------------------
ve_in,126,378,3	script	Guarda#vei2	4_M_DST_MASTER,{
	mes("[Guarda]\n Sou grato por nossa cidade ser pacífica.\n Se fosse qualquer outro lugar, essa pequena cela estaria cheia de criminosos.");
	next;
	mes("[Guarda]\n Agradeço Freya por eu ter sido enviado a um lugar pacífico e quieto.");
	close;
}
