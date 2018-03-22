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
| - Info: Npcs comuns na cidade Amatsu                              |
\*-----------------------------------------------------------------*/

amatsu,230,160,3	script	Sadako#ama	4_F_JPN2,{
	mes "[Sadako]";
	mes "Eu sempre venho aqui buscar �gua neste po�o, mas nunca fa�o isso quando o clima est� chuvoso.";
	next;
	mes "[Sadako]";
	mes "� que...";
	mes "Nesses dias � poss�vel escutar algu�m escalando as paredes do po�o.";
	mes "Melhor nem lembrar...";
	close;
}

// ------------------------------------------------------------------
amatsu,179,107,4	script	John#ama	4_M_04,{
	mes "[John]";
	mes "Vo... Voc� n�o � daqui, certo?";
	mes "Percebi.";
	mes "Voc� � como eu.";
	next;
	mes "[John]";
	mes "J� faz uns cinco anos desde que eu vim para c� arriscar a sorte nos neg�cios.";
	next;
	mes "[John]";
	mes "Eu pensei, 'Grande Oportunidade!'";
	mes "Quando se iniciou o com�rcio entre o Reino de Rune-Midgard e o Imp�rio de Amatsu.";
	next;
	mes "[John]";
	mes "Eu queria fazer algo diferente do que os outros faziam.";
	next;
	mes "[John]";
	mes "Ent�o decidi vir para Amatsu para aprender os segredos da culin�ria local.";
	mes "Voltar para minha cidade e ficar rico preparando pratos ex�ticos.";
	next;
	mes "[John]";
	mes "Mas quem disse que eu consegui?!";
	mes "Eu me apaixonei tanto pelo lugar que j� estou aqui h� bons cinco anos.";
	next;
	mes "[John]";
	mes "Eu gosto de conversar com os habitantes sempre neste local.";
	mes "Mas a� ele apareceu...";
	next;
	mes "[John]";
	mes "Sabe ali?";
	mes "Do outro lado da rua?";
	mes "Desde que o Mestre do Sushi abriu sua loja, estou arruinado!";
	next;
	mes "[John]";
	mes "Eu vim em busca de um sonho em Amatsu, mas parece que agora ele acabou.";
	close;
}

// ------------------------------------------------------------------
amatsu,205,163,3	script	Mimi#ama	4_F_JPNCHIBI,{
	mes "[Mimi]";
	mes "Mimimi...";
	mes "Voc� viu a Miss Amatsu no porto?";
	mes "Ela n�o � liiiiinda?";
	next;
	mes "[Mimi]";
	mes "Eu quero participar do Concurso Miss Amatsu quando crescer!";
	next;
	mes "[Mimi]";
	mes "Eu sei que sou a mais mais mais bonita da cidade, s� que as outras sempre se maquiam!";
	mes "Nhaa!";
	close;
}

// ------------------------------------------------------------------
amatsu,185,115,3	script	B�bado#ama	4_M_JPNOJI2,{
	mes "[B�bado]";
	mes "*hic*...";
	mes "Minha mulher � uma fera...";
	mes "*hic*...";
	mes "Eu n�o quero...";
	mes "*hic*...";
	mes "Voltar pra casa...";
	mes "*hic*";
	next;
	if (select("P�ra de encher a cara!","Opa! Pede um copo pra mim!") == 1) {
		mes "[B�bado]";
		mes "Qu�?!";
		mes "Voc� j� viu o tamanho da m�o da minha esposa?";
		mes "*hic*...";
		mes "Voc� n�o tem no��o do perigo!";
		mes "Quando ela era mais, nova, matou um tigre com as m�os!!";
		next;
		mes "[B�bado]";
		mes "Co...Co...";
		mes "S� lembro que o nome da cidade come�a assim!";
		mes "Ela me deu uma surra porque eu perdi uns trocados jogando l�...";
		mes "*hic*";
		next;
		mes "[B�bado]";
		mes "A vida... � uma...";
		mes "Eu deveria...";
		mes "Ter apostado";
		mes "No ...";
		mes "*hic*";
		mes ".... Nove....z......Z.....z...zZz....ZzZ....RONC..";
		close;
	}
	mes "[B�bado]";
	mes "Mwahaha... Muito bom...";
	mes "*hic*...";
	mes "Mas, escuta...";
	mes "*hic*";
	mes "Esse copo � s� meu...";
	mes "Mwhahaha...";
	next;
	mes "[B�bado]";
	mes "Mas se voc� pagar a pr�xima garrafa...";
	mes "*hic*";
	mes "Podemos negociar..";
	mes "hehehe.";
	close;
}

// ------------------------------------------------------------------
amatsu,217,179,1	script	Vov� Hatsue#ama	4_F_JPNOBA2,{
	mes "[Hatsue]";
	mes "Eu estou preocupada com meu marido.";
	mes "Ele perdeu nossas economias numa cidade hoje.";
	next;
	mes "[Hatsue]";
	mes "Eu fiquei furiosa!";
	mes "Se eu o conhe�o bem, deve ter ido encher a cara.";
	close;
}

// ------------------------------------------------------------------
amatsu,287,266,3	script	Jyaburo#ama	4_M_JPNOJI,{
	mes "[Jyaburo]";
	mes "Este lugar me lembra a minha amada esposa.";
	next; 
	mes "[Jyaburo]";
	mes "Foi ali, embaixo daquela grande �rvore, que eu confessei o meu amor.";
	mes "Eu realmente n�o fazia id�ia que ela sentia o mesmo por mim.";
	next;
	mes "[Jyaburo]";
	mes "Depois daquele dia, tivemos muitas conversas aqui.";
	mes "O melhor lugar para n�s dois.";
	mes "Sereno e tranq�ilo.";
	mes "Bons tempos aqueles.";
	next;
	mes "[Jyaburo]";
	mes "Quando fecho meus olhos, consigo visualizar alguns momentos como se fossem ontem...";
	mes "Huhu..";
	next;
	mes "[Jyaburo]";
	mes "Minha amada esposa se foi.";
	mes "Desde ent�o fa�o minha jornada solit�rio at� aqui.";
	mes "Sinto como se ela estivesse aqui, me esperando.";
	next;
	mes "[Jyaburo]";
	mes "Enquanto voc� escutava a minha hist�ria, voc� tinha algu�m em mente?";
	mes "Se tinha, n�o se contenha para mostrar o que sente.";
	next;
	mes "[Jyaburo]";
	mes "A vida deveria ter um fundo musical para dan�armos para sempre ao lado da pessoa amada.";
	mes "Deixe o sofrimento de lado e busque a felicidade todos os dias.";
	close;
}

// ------------------------------------------------------------------
amatsu,269,221,1	script	Hutari#ama	4_F_JPN,{
	mes "[Hutari Shioko]";
	mes "Prazer em conhece-lo.";
	mes "Meu nome e Hutari Shioko.";
	mes "Meu hobby e ouvir musica.";
	mes "Eu gosto muito de musica classica.";
	next;
	mes "[Hutari Shioko]";
	mes "Existe uma historia sobre a colina que fica em nossa cidade.";
	mes "Voce quer conhece-la?";
	next;
	mes "[Hutari Shioko]";
	mes "Se voce pedir alguem em casamento sob aquela �rvore.";
	mes "Voc� e sua amada serao felizes para sempre.";
	next;
	mes "[Hutari Shioko]";
	mes "Mas perceba que nao basta fazer o pedido a qualquer momento.";
	mes "Deve ser feito em uma noite de sabado.";
	next;
	mes "[Hutari Shioko]";
	mes "E tambem, depois do pedido no sabado a noite.";
	mes "Voc� deve receber a resposta dela ate a noite de domingo.";
	next;
	emotion(e_lv2);
	mes "[Hutari Shioko]";
	mes "Se voce gosta de alguem...";
	mes "Por que nao fazer o pedido de casamento sob aquela �rvore?";
	mes "Isso trara muita felicidade a voces.";
	close;
}

// ------------------------------------------------------------------
amatsu,243,202,3	script	Professora de Teatro#ama	4_F_JPNOBA2,{
	mes "[Garakame sensei]";
	mes "Esse e um lindo lugar com suas eternas flores, as Sakuras.";
	mes "Essa cidade e, tambem, o local de origem da famosa peca, 'A Driade Branca'...";
	next;
	if (Sex == SEX_MALE) {
		mes "[Garakame sensei]";
		mes "Se voce conhecer alguma garota que tenha talento como atriz, por favor mande ela aqui.";
		mes "Ha muito tempo procuro uma garota que possa interpretar 'A Driade Branca'.";
		next;
		mes "[Garakame sensei]";
		mes "'A Driade Branca' e uma ninfa da cerejeira...";
		mes "E muito dificil encontrar uma garota que consiga interpretar 'A Driade Branca'...";
		close;
	}
	emotion(e_gasp);
	mes "[Garakame sensei]";
	mes "Voce esta interessada em teatro?";
	mes "Eu preciso de alguem que seja mais que isso.";
	next;
	mes "[Garakame sensei]";
	mes "Quando voce sobe em um palco, voce deve se tornar o personagem.";
	mes "Voc� deve vestir a mascara e tocar a audiencia.";
	next;
	mes "[Garakame sensei]";
	mes "Eu poderia dizer que a sua vida e um grande teatro, estou certo?";
	mes "Aproveite a vida como ela e e me procure novamente algum dia.";
	close;
}

// ------------------------------------------------------------------
amatsu,283,203,1	script	Bonubonu#ama2	HIDDEN_NPC,{
	emotion(e_swt2);
	mes "[Bonubonu]";
	mes "Aquela �rvore na colina e uma �rvore muito antiga.";
	mes "E uma grande cerejeira de flores eternas.";
	next;
	emotion(e_swt2);
	mes "[Bonubonu]";
	mes "Alem disso, ela tem grandes poderes.";
	mes "Sempre que estou triste ou angustiado, eu costumo me sentar sob aquela �rvore.";
	mes "E toda a tristeza e angustia se v�o...";
	next;
	emotion(e_swt2);
	mes "[Bonubonu]";
	mes "Aquela e uma �rvore milagrosa que faz as pessoas esquecerem toda a tristeza.";
	next;
	emotion(e_swt2);
	mes "[Bonubonu]";
	mes "Quando estiver triste ou angustiado, experimente sentar sob aquela �rvore.";
	mes "Os poderes dela sao milagrosos...";
	close;
}

// ------------------------------------------------------------------
amatsu,274,178,7	script	Veterinario#ama	4_M_JOB_WIZARD,{
	mes "[Sakura Seiichi]";
	mes "Ah... N�o, eu n�o sou um louco.";
	mes "N�o tenha medo.";
	mes "Eu sou um simples veterin�rio.";
	mes "Meu trabalho e tratar e curar animais doentes.";
	next;
	mes "[Sakura Seiichi]";
	mes "Por sinal...";
	mes "Voc� conhece a hist�ria da cerejeira da colina...";
	mes "Aposto que ainda nao ouviu falar nela.";
	next;
	mes "[Sakura Seiichi]";
	mes "Aquela �rvore tem um segredo para manter sua forca e vitalidade.";
	mes "O segredo �...";
	mes "Existem pessoas enterradas sob as ra�zes daquela �rvore...";
	next;
	if (select("Mas isso n�o e triste? Pobres pessoas...","Nah, isso e loucura...") == 1) {
		mes "[Sakura Seiichi]";
		mes "Hehehe... Poderia ser...";
		mes "Por sinal, voc� gostaria de fazer uma aposta...?";
		next;
		emotion(e_dots);
		mes "[Sakura Seiichi]";
		mes "Se eu..........";
		mes "............";
		mes ".........";
		next;
		mes "^3355FFSua voz foi ficando cada vez mais baixa enquanto o vento soprava.";
		mes "At� que nao se ouvia mais nem um suspiro.";
		mes "Por mais que se tente, n�o possivel nem lembrar sobre o que ele falava...^000000";
		close;
	}
	mes "[Sakura Seiichi]";
	mes "N�o posso fazer muito se e isso que achas...";
	mes "Tenha cuidado.";
	mes "Um dia, podera acontecer com voc�...";
	next;
	emotion(e_dots);
	mes "[Sakura Seiichi]";
	mes "Haha... Hahaha...............";
	next;
	mes "^3355FFSua voz foi ficando cada vez mais baixa enquanto o vento soprava.";
	mes "At� que n�o se ouvia mais nem um suspiro.";
	mes "Por mais que se tente, n�o poss�vel nem lembrar sobre o que ele falava...^000000";
	close;
}

// ------------------------------------------------------------------
amatsu,262,197,1	script	�rvore Lend�ria#ama	HIDDEN_NPC,{
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "^3355FFHavia uma cerejeira na colina.";
	mes "Ela n�o se parece com as outras arvores.";
	mes "Essa �rvore parece ter muitas hist�rias para contar.^000000";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "^3355FFHaver�o pessoas morando aqui?";
	mes "Eu dou uma olhada ao redor e vejo alguem l� embaixo.";
	mes "Vou perguntar sobre esta arvore.^000000";
	close;
}

// ------------------------------------------------------------------
amatsu,112,164,4	script	Guarda do Port�o#ama	8_M_JPNSOLDIER,{
	mes "[Guarda do Port�o]";
	mes "Este � o grande pal�cio Toukoujyo.";
	next;
	mes "[Guarda do Port�o]";
	mes "Seu traje parece estranho.";
	mes "Voc� � de outro continente?";
	mes "O Senhor concedeu a entrada para turistas, ent�o voc� pode entrar.";
	close;
}

// ------------------------------------------------------------------
amatsu,119,164,4	script	Guarda do Port�o#ama2	8_M_JPNSOLDIER,{
	mes "[Guarda do Port�o]";
	mes "Voc� � de Rune-Midgard?";
	mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" a Amatsu.";
	mes "Visite o nosso senhor Chun-Su-Gak enquanto estiver l� dentro.";
	next;
	mes "[Guarda do Port�o]";
	mes "Ele � muito gentil.";
	mes "Ele investiu em diversas �reas de Amatsu, e o com�rcio intercontinental foi id�ia dele.";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ama_in01,169,173,1	script	Xam�#ama	4_F_JPNMU,{
	mes "[Tokako]";
	mes "Er, eu n�o sou realmente um Guia Espiritual...";
	mes "Meu amigo, Takehue-kun trouxe-me aqui e me convidou para experimentar essas roupas.";
	next;
	mes "[Tokako]";
	mes "Ele me pede para fazer um monte de coisas estranhas, mas ele � engra�ado.";
	mes "�s vezes, eu n�o sei o que ele est� pensando. Ainda assim, ele � um bom amigo.";
	next;
	mes "[Tokako]";
	mes "Se voc� tiver d�vidas sobre algo, fale com Takehue-kun.";
	mes "Ele sabe coisas que as pessoas n�o sabem sobre misticismo e ocultismo.";
	close;
}

// ------------------------------------------------------------------
ama_in02,207,40,6	script	Guarda do Port�o#ama3	8_M_JPNSOLDIER,{
	mes "[Guarda do Port�o]";
	mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+".";
	mes "O senhor do pal�cio permitiu a entrada especial de visitantes vindos de outros continentes.";
	next;
	mes "[Guarda do Port�o]";
	mes "Olhe ao redor e aproveite.";
	close;
}

// ------------------------------------------------------------------
ama_in02,207,49,6	script	Guarda do Port�o#ama4	8_M_JPNSOLDIER,{
	mes "[Guarda do Port�o]";
	mes "O senhor � realmente uma �tima pessoa.";
	mes "Quem iria saber que a nossa cidade j� foi um pequeno vilarejo?";
	next;
	mes "[Guarda do Port�o]";
	mes "Agrade�o-lhe por me contratar.";
	mes "Ultimamente, ele parece estar com problemas e est� muito triste.";
	close;
}

// ------------------------------------------------------------------
ama_in02,187,57,2	script	Soldado#ama	8_M_JPNSOLDIER,{
	mes "[Ichiro]";
	mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+".";
	mes "Nossos senhor preparou uma sala de visitantes para viajantes como voc�.";
	next;
	mes "[Ichiro]";
	mes "Se voc� estiver tendo problemas, conte me.";
	mes "Eu agradeceria se voc� falar com o nosso senhor do pal�cio.";
	mes "Isso tudo � fornecido por ele.";
	close;
}

// ------------------------------------------------------------------
ama_in02,37,157,4	script	Soldado#ama2	8_M_JPNSOLDIER,{
	mes "[Saburo]";
	mes "Este � o campo de treinamento onde melhoramos nossas habilidades de batalha.";
	mes "Por favor, olhe ao redor...";
	next;
	mes "[Saburo]";
	mes "A prop�sito, recentemente eu senti que os Soldados mudaram. Como posso dizer isso...";
	mes "Seus rostos est�o tristes e alguns deles j� n�o est�o mais por aqui.";
	mes "Eles foram para Rune-Midgard??";
	next;
	mes "[Saburo]";
	mes "Nesse trabalho, me deparo com muitos estrangeiros.";
	mes "Mas l� embaixo, h� um convidado de uma terra distante que parece suspeito...";
	mes "Eu disse a meus guardas para v�-los...";
	next;
	mes "[Saburo]";
	mes "Claro, meu senhor sabe exatamente tudo o que est� acontecendo.";
	mes "Haha, n�o leve a s�rio o que eu disse";
	mes "Tchau...";
	close;
}

// ------------------------------------------------------------------
ama_in02,32,51,6	script	Soldado#ama3	8_M_JPNSOLDIER,{
	mes "[Shiro]";
	mes "*Tosse, Tosse* O qu�...";
	mes "N�o fale comigo...";
	mes "*Tosse, tosse*... Ah, meu pesco�o maldito.";
	next;
	mes "[Shiro]";
	mes "� uma medicina de charlat�es!";
	mes "Eu nunca deveria ter confiado nas pessoas de Rune-Midgard!";
	mes "*Tosse, Tosse*...";
	next;
	mes "[Shiro]";
	mes "Eu n�o sei por que, mas...";
	mes "Estou ficando cada vez pior...";
	mes "Que tipo de frio � esse?";
	mes "*Tosse*... *Tosse*...";
	close;
}

// ------------------------------------------------------------------
ama_in02,40,167,3	script	Soldado#ama4	8_M_JPNSOLDIER,{
	mes "[Goro]";
	mes "*Psst*... Por favor, fique quieto.";
	mes "Vou lhe contar uma hist�ria, certo?";
	mes " ";
	next;
	mes "[Goro]";
	mes "Existe um rumor em Amatsu.";
	mes "Que o senhor desse Pal�cio n�o � real... *Psst*, quieto!";
	mes "N�o tenha p�nico e me ou�a.";
	next;
	mes "[Goro]";
	mes "N�o � uma pessoa real por tr�s do gentil senhor, e ele est� tramando algo.";
	mes "Ele est� controlando toda a nossa cidade em algum lugar escondido.";
	mes "...Nosso senhor � apenas uma marionete!";
	next;
	mes "[Goro]";
	mes "� verdade! Confie em mim";
	mes "Eu o vi. O senhor que estava rindo da cidade na TenguGak!!";
	mes "Just don't tell anyone that I've told you this, okay?";
	close;
}

// ------------------------------------------------------------------
ama_in02,32,167,5	script	Soldado#ama5	8_M_JPNSOLDIER,{
	mes "[Rokuro]";
	mes "Ele sempre fala bobagem.";
	mes "Ele diz que o nosso senhor n�o � real, mas � mentira.";
	mes "N�o � mesmo engra�ado.";
	next;
	mes "[Rokuro]";
	mes "No entanto, � verdade que recentemente, coisas estranhas est�o acontecendo.";
	mes "N�o havia lugares proibidos antes...";
	next;
	mes "[Rokuro]";
	mes "Eu ou�o sons estranhos as vezes.";
	mes "A m�e do Senhor foi visitada por m�dicos v�rias vezes.";
	mes "Eu acho que sua sa�de n�o melhorou ap�s essas visitas...";
	close;
}

// ------------------------------------------------------------------
ama_in02,42,34,2	script	Soldado#ama6	8_M_JPNSOLDIER,{
	mes "[Shichiro]";
	mes "Divirta-se.";
	mes "Meu senhor preparou algumas salas para visitas.";
	next;
	mes "[Shichiro]";
	mes "Se voc� tiver qualquer problema, por favor me chame. Al�m disso, tente n�o encomodar os outros convidados.";
	mes " ";
	next;
	mes "[Shichiro]";
	mes "Tenha um bom dia.";
	close;
}

// ------------------------------------------------------------------
ama_in02,203,156,4	script	Soldado#ama7	8_M_JPNSOLDIER,{
	mes "[Hachiro]";
	mes "Meu senhor est� l� dentro.";
	mes "Se quiser cumpriment�-lo, fique a vontade para entrar.";
	next;
	mes "[Hachiro]";
	mes "N�o seja rude na frente dele.";
	mes "Por alguma raz�o ele n�o est� se sentindo bem.";
	mes "Normalmente, ele cumprimenta as pessoas de outros continentes de bom grado, mas...";
	mes "O que poderia ter acontecido com ele...?";
	close;
}

// ------------------------------------------------------------------
ama_in02,195,156,4	script	Soldado#ama8	8_M_JPNSOLDIER,{
	mes "[Kyuro]";
	mes "Isso n�o � bom.";
	mes "Meu senhor � gentil, mas recentemente ele n�o est� bem...";
	next;
	mes "[Kyuro]";
	mes "Eu j� escutei rumores, mas confio nele.";
	mes "Ele fez Amatsu se tornar uma grande cidade.";
	mes "� por isso que eu estou seguindo-o como um Soldado.";
	close;
}
