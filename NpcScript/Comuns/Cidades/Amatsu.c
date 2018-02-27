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
| - Nota: Npcs comuns na cidade Amatsu                              |
\*-----------------------------------------------------------------*/

amatsu,230,160,3	script	Sadako#ama	4_F_JPN2,{
	mes("[Sadako]\n Eu sempre venho aqui buscar �gua neste po�o, mas nunca fa�o isso quando o clima est� chuvoso.");
	next;
	mes("[Sadako]\n � que...\n Nesses dias � poss�vel escutar algu�m escalando as paredes do po�o.\n Melhor nem lembrar...");
	close;
}

// ------------------------------------------------------------------
amatsu,179,107,4	script	John#ama	4_M_04,{
	mes("[John]\n Vo... Voc� n�o � daqui, certo?\n Percebi.\n Voc� � como eu.");
	next;
	mes("[John]\n J� faz uns cinco anos desde que eu vim para c� arriscar a sorte nos neg�cios.");
	next;
	mes("[John]\n Eu pensei, 'Grande Oportunidade!'\n Quando se iniciou o com�rcio entre o Reino de Rune-Midgard e o Imp�rio de Amatsu.");
	next;
	mes("[John]\n Eu queria fazer algo diferente do que os outros faziam.");
	next;
	mes("[John]\n Ent�o decidi vir para Amatsu para aprender os segredos da culin�ria local.\n Voltar para minha cidade e ficar rico preparando pratos ex�ticos.");
	next;
	mes("[John]\n Mas quem disse que eu consegui?!\n Eu me apaixonei tanto pelo lugar que j� estou aqui h� bons cinco anos.");
	next;
	mes("[John]\n Eu gosto de conversar com os habitantes sempre neste local.\n Mas a� ele apareceu...");
	next;
	mes("[John]\n Sabe ali?\n Do outro lado da rua?\n Desde que o Mestre do Sushi abriu sua loja, estou arruinado!");
	next;
	mes("[John]\n Eu vim em busca de um sonho em Amatsu, mas parece que agora ele acabou.");
	close;
}

// ------------------------------------------------------------------
amatsu,205,163,3	script	Mimi#ama	4_F_JPNCHIBI,{
	mes("[Mimi]\n Mimimi...\n Voc� viu a Miss Amatsu no porto?\n Ela n�o � liiiiinda?");
	next;
	mes("[Mimi]\n Eu quero participar do Concurso Miss Amatsu quando crescer!");
	next;
	mes("[Mimi]\n Eu sei que sou a mais mais mais bonita da cidade, s� que as outras sempre se maquiam!\n Nhaa!");
	close;
}

// ------------------------------------------------------------------
amatsu,185,115,3	script	B�bado#ama	4_M_JPNOJI2,{
	mes("[B�bado]\n *hic*...\n Minha mulher � uma fera...\n *hic*...\n Eu n�o quero...\n *hic*...\n Voltar pra casa...\n *hic*");
	next;
	if (select("P�ra de encher a cara!", "Opa! Pede um copo pra mim!") == 1) {
		mes("[B�bado]\n Qu�?!\n Voc� j� viu o tamanho da m�o da minha esposa?\n *hic*...\n Voc� n�o tem no��o do perigo!\n Quando ela era mais, nova, matou um tigre com as m�os!!");
		next;
		mes("[B�bado]\n Co...Co...\n S� lembro que o nome da cidade come�a assim!\n Ela me deu uma surra porque eu perdi uns trocados jogando l�...\n *hic*");
		next;
		mes("[B�bado]\n A vida... � uma...\n Eu deveria...\n Ter apostado\n No ...\n *hic*\n .... Nove....z......Z.....z...zZz....ZzZ....RONC..");
		close;
	}
	mes("[B�bado]\n Mwahaha... Muito bom...\n *hic*...\n Mas, escuta...\n *hic*\n Esse copo � s� meu...\n Mwhahaha...");
	next;
	mes("[B�bado]\n Mas se voc� pagar a pr�xima garrafa...\n *hic*\n Podemos negociar..\n hehehe.");
	close;
}

// ------------------------------------------------------------------
amatsu,217,179,1	script	Vov� Hatsue#ama	4_F_JPNOBA2,{
	mes("[Hatsue]\n Eu estou preocupada com meu marido.\n Ele perdeu nossas economias numa cidade hoje.");
	next;
	mes("[Hatsue]\n Eu fiquei furiosa!\n Se eu o conhe�o bem, deve ter ido encher a cara.");
	close;
}

// ------------------------------------------------------------------
amatsu,287,266,3	script	Jyaburo#ama	4_M_JPNOJI,{
	mes("[Jyaburo]\n Este lugar me lembra a minha amada esposa.");
	next; 
	mes("[Jyaburo]\n Foi ali, embaixo daquela grande �rvore, que eu confessei o meu amor.\n Eu realmente n�o fazia id�ia que ela sentia o mesmo por mim.");
	next;
	mes("[Jyaburo]\n Depois daquele dia, tivemos muitas conversas aqui.\n O melhor lugar para n�s dois.\n Sereno e tranq�ilo.\n Bons tempos aqueles.");
	next;
	mes("[Jyaburo]\n Quando fecho meus olhos, consigo visualizar alguns momentos como se fossem ontem...\n Huhu..");
	next;
	mes("[Jyaburo]\n Minha amada esposa se foi.\n Desde ent�o fa�o minha jornada solit�rio at� aqui.\n Sinto como se ela estivesse aqui, me esperando.");
	next;
	mes("[Jyaburo]\n Enquanto voc� escutava a minha hist�ria, voc� tinha algu�m em mente?\n Se tinha, n�o se contenha para mostrar o que sente.");
	next;
	mes("[Jyaburo]\n A vida deveria ter um fundo musical para dan�armos para sempre ao lado da pessoa amada.\n Deixe o sofrimento de lado e busque a felicidade todos os dias.");
	close;
}

// ------------------------------------------------------------------
amatsu,269,221,1	script	Hutari#ama	4_F_JPN,{
	mes("[Hutari Shioko]\n Prazer em conhece-lo.\n Meu nome e Hutari Shioko.\n Meu hobby e ouvir musica.\n Eu gosto muito de musica classica.");
	next;
	mes("[Hutari Shioko]\n Existe uma historia sobre a colina que fica em nossa cidade.\n Voce quer conhece-la?");
	next;
	mes("[Hutari Shioko]\n Se voce pedir alguem em casamento sob aquela �rvore.\n Voc� e sua amada serao felizes para sempre.");
	next;
	mes("[Hutari Shioko]\n Mas perceba que nao basta fazer o pedido a qualquer momento.\n Deve ser feito em uma noite de sabado.");
	next;
	mes("[Hutari Shioko]\n E tambem, depois do pedido no sabado a noite.\n Voc� deve receber a resposta dela ate a noite de domingo.");
	next;
	emotion(e_lv2);
	mes("[Hutari Shioko]\n Se voce gosta de alguem...\n Por que nao fazer o pedido de casamento sob aquela �rvore?\n Isso trara muita felicidade a voces.");
	close;
}

// ------------------------------------------------------------------
amatsu,243,202,3	script	Professora de Teatro#ama	4_F_JPNOBA2,{
	mes("[Garakame sensei]\n Esse e um lindo lugar com suas eternas flores, as Sakuras.\n Essa cidade e, tambem, o local de origem da famosa peca, 'A Driade Branca'...");
	next;
	if (Sex == SEX_MALE) {
		mes("[Garakame sensei]\n Se voce conhecer alguma garota que tenha talento como atriz, por favor mande ela aqui.\n Ha muito tempo procuro uma garota que possa interpretar 'A Driade Branca'.");
		next;
		mes("[Garakame sensei]\n 'A Driade Branca' e uma ninfa da cerejeira...\n E muito dificil encontrar uma garota que consiga interpretar 'A Driade Branca'...");
		close;
	}
	emotion(e_gasp);
	mes("[Garakame sensei]\n Voce esta interessada em teatro?\n Eu preciso de alguem que seja mais que isso.");
	next;
	mes("[Garakame sensei]\n Quando voce sobe em um palco, voce deve se tornar o personagem.\n Voc� deve vestir a mascara e tocar a audiencia.");
	next;
	mes("[Garakame sensei]\n Eu poderia dizer que a sua vida e um grande teatro, estou certo?\n Aproveite a vida como ela e e me procure novamente algum dia.");
	close;
}

// ------------------------------------------------------------------
amatsu,283,203,1	script	Bonubonu#ama2	HIDDEN_NPC,{
	emotion(e_swt2);
	mes("[Bonubonu]\n Aquela �rvore na colina e uma �rvore muito antiga.\n E uma grande cerejeira de flores eternas.");
	next;
	emotion(e_swt2);
	mes("[Bonubonu]\n Alem disso, ela tem grandes poderes.\n Sempre que estou triste ou angustiado, eu costumo me sentar sob aquela �rvore.\n E toda a tristeza e angustia se v�o...");
	next;
	emotion (e_swt2);
	mes("[Bonubonu]\n Aquela e uma �rvore milagrosa que faz as pessoas esquecerem toda a tristeza.");
	next;
	emotion(e_swt2);
	mes("[Bonubonu]\n Quando estiver triste ou angustiado, experimente sentar sob aquela �rvore.\n Os poderes dela sao milagrosos...");
	close;
}

// ------------------------------------------------------------------
amatsu,274,178,7	script	Veterinario#ama	4_M_JOB_WIZARD,{
	mes "[Sakura Seiichi]";
	mes "Ah... N�o, eu n�o sou um louco.\n N�o tenha medo.\n Eu sou um simples veterin�rio.\n Meu trabalho e tratar e curar animais doentes.");
	next;
	mes("[Sakura Seiichi]\n Por sinal...\n Voc� conhece a hist�ria da cerejeira da colina...\n Aposto que ainda nao ouviu falar nela.");
	next;
	mes("[Sakura Seiichi]\n Aquela �rvore tem um segredo para manter sua forca e vitalidade.\n O segredo �...\n Existem pessoas enterradas sob as ra�zes daquela �rvore...");
	next;
	if (select("Mas isso n�o e triste? Pobres pessoas...", "Nah, isso e loucura...") == 1) {
		mes("[Sakura Seiichi]\n Hehehe... Poderia ser...\n Por sinal, voc� gostaria de fazer uma aposta...?");
		next;
		emotion(e_dots);
		mes "[Sakura Seiichi]";
		mes "Se eu..........";
		mes "............";
		mes ".........";
		next;
		mes("^3355FFSua voz foi ficando cada vez mais baixa enquanto o vento soprava.\n At� que nao se ouvia mais nem um suspiro.\n Por mais que se tente, n�o possivel nem lembrar sobre o que ele falava...^000000");
		close;
	}
	mes("[Sakura Seiichi]\n N�o posso fazer muito se e isso que achas...\n Tenha cuidado.\n Um dia, podera acontecer com voc�...");
	next;
	emotion(e_dots);
	mes("[Sakura Seiichi]\n Haha... Hahaha...............");
	next;
	mes("^3355FFSua voz foi ficando cada vez mais baixa enquanto o vento soprava.\n At� que n�o se ouvia mais nem um suspiro.\n Por mais que se tente, n�o poss�vel nem lembrar sobre o que ele falava...^000000");
	close;
}

// ------------------------------------------------------------------
amatsu,262,197,1	script	�rvore Lend�ria#ama	HIDDEN_NPC,{
	mes("[" + strcharinfo(PC_NAME) + "]\n ^3355FFHavia uma cerejeira na colina.\n Ela n�o se parece com as outras arvores.\n Essa �rvore parece ter muitas hist�rias para contar.^000000");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n ^3355FFHaver�o pessoas morando aqui?\n Eu dou uma olhada ao redor e vejo alguem l� embaixo.\n Vou perguntar sobre esta arvore.^000000");
	close;
}
