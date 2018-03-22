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
	mes "Eu sempre venho aqui buscar água neste poço, mas nunca faço isso quando o clima está chuvoso.";
	next;
	mes "[Sadako]";
	mes "É que...";
	mes "Nesses dias é possível escutar alguém escalando as paredes do poço.";
	mes "Melhor nem lembrar...";
	close;
}

// ------------------------------------------------------------------
amatsu,179,107,4	script	John#ama	4_M_04,{
	mes "[John]";
	mes "Vo... Você não é daqui, certo?";
	mes "Percebi.";
	mes "Você é como eu.";
	next;
	mes "[John]";
	mes "Já faz uns cinco anos desde que eu vim para cá arriscar a sorte nos negócios.";
	next;
	mes "[John]";
	mes "Eu pensei, 'Grande Oportunidade!'";
	mes "Quando se iniciou o comércio entre o Reino de Rune-Midgard e o Império de Amatsu.";
	next;
	mes "[John]";
	mes "Eu queria fazer algo diferente do que os outros faziam.";
	next;
	mes "[John]";
	mes "Então decidi vir para Amatsu para aprender os segredos da culinária local.";
	mes "Voltar para minha cidade e ficar rico preparando pratos exóticos.";
	next;
	mes "[John]";
	mes "Mas quem disse que eu consegui?!";
	mes "Eu me apaixonei tanto pelo lugar que já estou aqui há bons cinco anos.";
	next;
	mes "[John]";
	mes "Eu gosto de conversar com os habitantes sempre neste local.";
	mes "Mas aí ele apareceu...";
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
	mes "Você viu a Miss Amatsu no porto?";
	mes "Ela não é liiiiinda?";
	next;
	mes "[Mimi]";
	mes "Eu quero participar do Concurso Miss Amatsu quando crescer!";
	next;
	mes "[Mimi]";
	mes "Eu sei que sou a mais mais mais bonita da cidade, só que as outras sempre se maquiam!";
	mes "Nhaa!";
	close;
}

// ------------------------------------------------------------------
amatsu,185,115,3	script	Bêbado#ama	4_M_JPNOJI2,{
	mes "[Bêbado]";
	mes "*hic*...";
	mes "Minha mulher é uma fera...";
	mes "*hic*...";
	mes "Eu não quero...";
	mes "*hic*...";
	mes "Voltar pra casa...";
	mes "*hic*";
	next;
	if (select("Pára de encher a cara!","Opa! Pede um copo pra mim!") == 1) {
		mes "[Bêbado]";
		mes "Quê?!";
		mes "Você já viu o tamanho da mão da minha esposa?";
		mes "*hic*...";
		mes "Você não tem noção do perigo!";
		mes "Quando ela era mais, nova, matou um tigre com as mãos!!";
		next;
		mes "[Bêbado]";
		mes "Co...Co...";
		mes "Só lembro que o nome da cidade começa assim!";
		mes "Ela me deu uma surra porque eu perdi uns trocados jogando lá...";
		mes "*hic*";
		next;
		mes "[Bêbado]";
		mes "A vida... É uma...";
		mes "Eu deveria...";
		mes "Ter apostado";
		mes "No ...";
		mes "*hic*";
		mes ".... Nove....z......Z.....z...zZz....ZzZ....RONC..";
		close;
	}
	mes "[Bêbado]";
	mes "Mwahaha... Muito bom...";
	mes "*hic*...";
	mes "Mas, escuta...";
	mes "*hic*";
	mes "Esse copo é só meu...";
	mes "Mwhahaha...";
	next;
	mes "[Bêbado]";
	mes "Mas se você pagar a próxima garrafa...";
	mes "*hic*";
	mes "Podemos negociar..";
	mes "hehehe.";
	close;
}

// ------------------------------------------------------------------
amatsu,217,179,1	script	Vovó Hatsue#ama	4_F_JPNOBA2,{
	mes "[Hatsue]";
	mes "Eu estou preocupada com meu marido.";
	mes "Ele perdeu nossas economias numa cidade hoje.";
	next;
	mes "[Hatsue]";
	mes "Eu fiquei furiosa!";
	mes "Se eu o conheço bem, deve ter ido encher a cara.";
	close;
}

// ------------------------------------------------------------------
amatsu,287,266,3	script	Jyaburo#ama	4_M_JPNOJI,{
	mes "[Jyaburo]";
	mes "Este lugar me lembra a minha amada esposa.";
	next; 
	mes "[Jyaburo]";
	mes "Foi ali, embaixo daquela grande árvore, que eu confessei o meu amor.";
	mes "Eu realmente não fazia idéia que ela sentia o mesmo por mim.";
	next;
	mes "[Jyaburo]";
	mes "Depois daquele dia, tivemos muitas conversas aqui.";
	mes "O melhor lugar para nós dois.";
	mes "Sereno e tranqüilo.";
	mes "Bons tempos aqueles.";
	next;
	mes "[Jyaburo]";
	mes "Quando fecho meus olhos, consigo visualizar alguns momentos como se fossem ontem...";
	mes "Huhu..";
	next;
	mes "[Jyaburo]";
	mes "Minha amada esposa se foi.";
	mes "Desde então faço minha jornada solitário até aqui.";
	mes "Sinto como se ela estivesse aqui, me esperando.";
	next;
	mes "[Jyaburo]";
	mes "Enquanto você escutava a minha história, você tinha alguém em mente?";
	mes "Se tinha, não se contenha para mostrar o que sente.";
	next;
	mes "[Jyaburo]";
	mes "A vida deveria ter um fundo musical para dançarmos para sempre ao lado da pessoa amada.";
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
	mes "Se voce pedir alguem em casamento sob aquela árvore.";
	mes "Você e sua amada serao felizes para sempre.";
	next;
	mes "[Hutari Shioko]";
	mes "Mas perceba que nao basta fazer o pedido a qualquer momento.";
	mes "Deve ser feito em uma noite de sabado.";
	next;
	mes "[Hutari Shioko]";
	mes "E tambem, depois do pedido no sabado a noite.";
	mes "Você deve receber a resposta dela ate a noite de domingo.";
	next;
	emotion(e_lv2);
	mes "[Hutari Shioko]";
	mes "Se voce gosta de alguem...";
	mes "Por que nao fazer o pedido de casamento sob aquela árvore?";
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
	mes "Você deve vestir a mascara e tocar a audiencia.";
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
	mes "Aquela árvore na colina e uma árvore muito antiga.";
	mes "E uma grande cerejeira de flores eternas.";
	next;
	emotion(e_swt2);
	mes "[Bonubonu]";
	mes "Alem disso, ela tem grandes poderes.";
	mes "Sempre que estou triste ou angustiado, eu costumo me sentar sob aquela árvore.";
	mes "E toda a tristeza e angustia se vão...";
	next;
	emotion(e_swt2);
	mes "[Bonubonu]";
	mes "Aquela e uma árvore milagrosa que faz as pessoas esquecerem toda a tristeza.";
	next;
	emotion(e_swt2);
	mes "[Bonubonu]";
	mes "Quando estiver triste ou angustiado, experimente sentar sob aquela árvore.";
	mes "Os poderes dela sao milagrosos...";
	close;
}

// ------------------------------------------------------------------
amatsu,274,178,7	script	Veterinario#ama	4_M_JOB_WIZARD,{
	mes "[Sakura Seiichi]";
	mes "Ah... Não, eu não sou um louco.";
	mes "Não tenha medo.";
	mes "Eu sou um simples veterinário.";
	mes "Meu trabalho e tratar e curar animais doentes.";
	next;
	mes "[Sakura Seiichi]";
	mes "Por sinal...";
	mes "Você conhece a história da cerejeira da colina...";
	mes "Aposto que ainda nao ouviu falar nela.";
	next;
	mes "[Sakura Seiichi]";
	mes "Aquela árvore tem um segredo para manter sua forca e vitalidade.";
	mes "O segredo é...";
	mes "Existem pessoas enterradas sob as raízes daquela árvore...";
	next;
	if (select("Mas isso não e triste? Pobres pessoas...","Nah, isso e loucura...") == 1) {
		mes "[Sakura Seiichi]";
		mes "Hehehe... Poderia ser...";
		mes "Por sinal, você gostaria de fazer uma aposta...?";
		next;
		emotion(e_dots);
		mes "[Sakura Seiichi]";
		mes "Se eu..........";
		mes "............";
		mes ".........";
		next;
		mes "^3355FFSua voz foi ficando cada vez mais baixa enquanto o vento soprava.";
		mes "Até que nao se ouvia mais nem um suspiro.";
		mes "Por mais que se tente, não possivel nem lembrar sobre o que ele falava...^000000";
		close;
	}
	mes "[Sakura Seiichi]";
	mes "Não posso fazer muito se e isso que achas...";
	mes "Tenha cuidado.";
	mes "Um dia, podera acontecer com você...";
	next;
	emotion(e_dots);
	mes "[Sakura Seiichi]";
	mes "Haha... Hahaha...............";
	next;
	mes "^3355FFSua voz foi ficando cada vez mais baixa enquanto o vento soprava.";
	mes "Até que não se ouvia mais nem um suspiro.";
	mes "Por mais que se tente, não possível nem lembrar sobre o que ele falava...^000000";
	close;
}

// ------------------------------------------------------------------
amatsu,262,197,1	script	Árvore Lendária#ama	HIDDEN_NPC,{
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "^3355FFHavia uma cerejeira na colina.";
	mes "Ela não se parece com as outras arvores.";
	mes "Essa árvore parece ter muitas histórias para contar.^000000";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "^3355FFHaverão pessoas morando aqui?";
	mes "Eu dou uma olhada ao redor e vejo alguem lá embaixo.";
	mes "Vou perguntar sobre esta arvore.^000000";
	close;
}

// ------------------------------------------------------------------
amatsu,112,164,4	script	Guarda do Portão#ama	8_M_JPNSOLDIER,{
	mes "[Guarda do Portão]";
	mes "Este é o grande palácio Toukoujyo.";
	next;
	mes "[Guarda do Portão]";
	mes "Seu traje parece estranho.";
	mes "Você é de outro continente?";
	mes "O Senhor concedeu a entrada para turistas, então você pode entrar.";
	close;
}

// ------------------------------------------------------------------
amatsu,119,164,4	script	Guarda do Portão#ama2	8_M_JPNSOLDIER,{
	mes "[Guarda do Portão]";
	mes "Você é de Rune-Midgard?";
	mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" a Amatsu.";
	mes "Visite o nosso senhor Chun-Su-Gak enquanto estiver lá dentro.";
	next;
	mes "[Guarda do Portão]";
	mes "Ele é muito gentil.";
	mes "Ele investiu em diversas áreas de Amatsu, e o comércio intercontinental foi idéia dele.";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ama_in01,169,173,1	script	Xamã#ama	4_F_JPNMU,{
	mes "[Tokako]";
	mes "Er, eu não sou realmente um Guia Espiritual...";
	mes "Meu amigo, Takehue-kun trouxe-me aqui e me convidou para experimentar essas roupas.";
	next;
	mes "[Tokako]";
	mes "Ele me pede para fazer um monte de coisas estranhas, mas ele é engraçado.";
	mes "Às vezes, eu não sei o que ele está pensando. Ainda assim, ele é um bom amigo.";
	next;
	mes "[Tokako]";
	mes "Se você tiver dúvidas sobre algo, fale com Takehue-kun.";
	mes "Ele sabe coisas que as pessoas não sabem sobre misticismo e ocultismo.";
	close;
}

// ------------------------------------------------------------------
ama_in02,207,40,6	script	Guarda do Portão#ama3	8_M_JPNSOLDIER,{
	mes "[Guarda do Portão]";
	mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+".";
	mes "O senhor do palácio permitiu a entrada especial de visitantes vindos de outros continentes.";
	next;
	mes "[Guarda do Portão]";
	mes "Olhe ao redor e aproveite.";
	close;
}

// ------------------------------------------------------------------
ama_in02,207,49,6	script	Guarda do Portão#ama4	8_M_JPNSOLDIER,{
	mes "[Guarda do Portão]";
	mes "O senhor é realmente uma ótima pessoa.";
	mes "Quem iria saber que a nossa cidade já foi um pequeno vilarejo?";
	next;
	mes "[Guarda do Portão]";
	mes "Agradeço-lhe por me contratar.";
	mes "Ultimamente, ele parece estar com problemas e está muito triste.";
	close;
}

// ------------------------------------------------------------------
ama_in02,187,57,2	script	Soldado#ama	8_M_JPNSOLDIER,{
	mes "[Ichiro]";
	mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+".";
	mes "Nossos senhor preparou uma sala de visitantes para viajantes como você.";
	next;
	mes "[Ichiro]";
	mes "Se você estiver tendo problemas, conte me.";
	mes "Eu agradeceria se você falar com o nosso senhor do palácio.";
	mes "Isso tudo é fornecido por ele.";
	close;
}

// ------------------------------------------------------------------
ama_in02,37,157,4	script	Soldado#ama2	8_M_JPNSOLDIER,{
	mes "[Saburo]";
	mes "Este é o campo de treinamento onde melhoramos nossas habilidades de batalha.";
	mes "Por favor, olhe ao redor...";
	next;
	mes "[Saburo]";
	mes "A propósito, recentemente eu senti que os Soldados mudaram. Como posso dizer isso...";
	mes "Seus rostos estão tristes e alguns deles já não estão mais por aqui.";
	mes "Eles foram para Rune-Midgard??";
	next;
	mes "[Saburo]";
	mes "Nesse trabalho, me deparo com muitos estrangeiros.";
	mes "Mas lá embaixo, há um convidado de uma terra distante que parece suspeito...";
	mes "Eu disse a meus guardas para vê-los...";
	next;
	mes "[Saburo]";
	mes "Claro, meu senhor sabe exatamente tudo o que está acontecendo.";
	mes "Haha, não leve a sério o que eu disse";
	mes "Tchau...";
	close;
}

// ------------------------------------------------------------------
ama_in02,32,51,6	script	Soldado#ama3	8_M_JPNSOLDIER,{
	mes "[Shiro]";
	mes "*Tosse, Tosse* O quê...";
	mes "Não fale comigo...";
	mes "*Tosse, tosse*... Ah, meu pescoço maldito.";
	next;
	mes "[Shiro]";
	mes "É uma medicina de charlatões!";
	mes "Eu nunca deveria ter confiado nas pessoas de Rune-Midgard!";
	mes "*Tosse, Tosse*...";
	next;
	mes "[Shiro]";
	mes "Eu não sei por que, mas...";
	mes "Estou ficando cada vez pior...";
	mes "Que tipo de frio é esse?";
	mes "*Tosse*... *Tosse*...";
	close;
}

// ------------------------------------------------------------------
ama_in02,40,167,3	script	Soldado#ama4	8_M_JPNSOLDIER,{
	mes "[Goro]";
	mes "*Psst*... Por favor, fique quieto.";
	mes "Vou lhe contar uma história, certo?";
	mes " ";
	next;
	mes "[Goro]";
	mes "Existe um rumor em Amatsu.";
	mes "Que o senhor desse Palácio não é real... *Psst*, quieto!";
	mes "Não tenha pânico e me ouça.";
	next;
	mes "[Goro]";
	mes "Não é uma pessoa real por trás do gentil senhor, e ele está tramando algo.";
	mes "Ele está controlando toda a nossa cidade em algum lugar escondido.";
	mes "...Nosso senhor é apenas uma marionete!";
	next;
	mes "[Goro]";
	mes "É verdade! Confie em mim";
	mes "Eu o vi. O senhor que estava rindo da cidade na TenguGak!!";
	mes "Just don't tell anyone that I've told you this, okay?";
	close;
}

// ------------------------------------------------------------------
ama_in02,32,167,5	script	Soldado#ama5	8_M_JPNSOLDIER,{
	mes "[Rokuro]";
	mes "Ele sempre fala bobagem.";
	mes "Ele diz que o nosso senhor não é real, mas é mentira.";
	mes "Não é mesmo engraçado.";
	next;
	mes "[Rokuro]";
	mes "No entanto, é verdade que recentemente, coisas estranhas estão acontecendo.";
	mes "Não havia lugares proibidos antes...";
	next;
	mes "[Rokuro]";
	mes "Eu ouço sons estranhos as vezes.";
	mes "A mãe do Senhor foi visitada por médicos várias vezes.";
	mes "Eu acho que sua saúde não melhorou após essas visitas...";
	close;
}

// ------------------------------------------------------------------
ama_in02,42,34,2	script	Soldado#ama6	8_M_JPNSOLDIER,{
	mes "[Shichiro]";
	mes "Divirta-se.";
	mes "Meu senhor preparou algumas salas para visitas.";
	next;
	mes "[Shichiro]";
	mes "Se você tiver qualquer problema, por favor me chame. Além disso, tente não encomodar os outros convidados.";
	mes " ";
	next;
	mes "[Shichiro]";
	mes "Tenha um bom dia.";
	close;
}

// ------------------------------------------------------------------
ama_in02,203,156,4	script	Soldado#ama7	8_M_JPNSOLDIER,{
	mes "[Hachiro]";
	mes "Meu senhor está lá dentro.";
	mes "Se quiser cumprimentá-lo, fique a vontade para entrar.";
	next;
	mes "[Hachiro]";
	mes "Não seja rude na frente dele.";
	mes "Por alguma razão ele não está se sentindo bem.";
	mes "Normalmente, ele cumprimenta as pessoas de outros continentes de bom grado, mas...";
	mes "O que poderia ter acontecido com ele...?";
	close;
}

// ------------------------------------------------------------------
ama_in02,195,156,4	script	Soldado#ama8	8_M_JPNSOLDIER,{
	mes "[Kyuro]";
	mes "Isso não é bom.";
	mes "Meu senhor é gentil, mas recentemente ele não está bem...";
	next;
	mes "[Kyuro]";
	mes "Eu já escutei rumores, mas confio nele.";
	mes "Ele fez Amatsu se tornar uma grande cidade.";
	mes "É por isso que eu estou seguindo-o como um Soldado.";
	close;
}
