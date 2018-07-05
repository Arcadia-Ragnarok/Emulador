/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master (05/07/2018)                            |
| - Info: Aprendizagem das habilidades para monge                   |
|         (MO_BALKYOUNG) Punhos Intensos                            |
|         (MO_KITRANSLATION) Concessão Espiritual                   |
\*-----------------------------------------------------------------*/

monk_test,316,69,5	script	Monge#monk_sk	4_M_CHNMONK,{
	if (BaseJob == Job_Monk) {
		if (!monk_sk) {
			mes("[Monge]\n"
				"Poder sem justiça não resulta em nada.\n"
				"Justiça sem poder não se mantém.\n"
				"O poder não se compara a justiça.\n"
				"Mas a verdadeira justiça pode ser um caminho para o poder.");
			next;
			mes("[Monge]\n"
				"Lembre-se sempre desses ensinamentos.\n"
				"Justiça e poder, compaixão e força, conhecimento e ações.\n"
				"Todos esses componentes andam de mãos dadas e precisam estar sempre harmoniosamente balaceados.");
			next;
			mes("[Monge]\n"
				"Isso acontece com algumas habilidades.\n"
				"Eu desenvolvi uma habilidade que é manifestação de poder:\n"
				"Punhos Intensos!\n"
				"No entanto, ela é inútil sem um complemento para balanceá-la.");
			next;
			mes("[Monge]\n"
				"O complemento para minha habilidade é uma outra habilidade chamada Concessão Espiritual.\n"
				"Que só pode ser ensinada por um Monge.\n"
				"No entanto, ele se recusa a ensiná-la aos outros, achando que eles não são merecedores.");
			next;
			mes("[Monge]\n"
				"Embora eu tenha tentado convencê-lo que seria bom popularizar a habilidade, devo respeitar a opinião dele.\n"
				"Mesmo assim, você pode tentar convencê-lo a lhe ensinar a habilidade se estiver com vontade de aprender nova técnicas.");
			monk_sk = 1;
			next;
			mes("[Monge]\n"
				"Para encontrá-lo, basta procurar um monge que sempre fala sobre o quão vazio são as lutas.\n"
				"Este será ele.");
			close;
		} else if (monk_sk == 1) {
			mes("[Monge]\n"
				"Lá tem um monge pacifista vivendo em isolamento ele pode te ensinar a habilidade Concessão Espiritual.\n"
				"Contudo, ele é teimoso e já se recusou a ensinar muitas pessoas que queriam aprender com ele.");
			next;
			mes("[Monge]\n"
				"Seria bom se você conseguisse convencê-lo a lhe lhe ensinar.\n"
				"Sendo que é impossível aprender esta habilidade sozinha.\n"
				"É realmente uma pena...");
			close;
		} else if (monk_sk == 3) {
			mes("[Monge]\n"
				"Você veio para aprender Punhos Intensos?\n"
				"Se for isso mesmo.\n"
				"Existem dois obstáculos que você deverá superar para conseguir.");
			next;
			mes("[Monge]\n"
				"Primeiramente, você deve aprender a habilidade Concessão Espiritual antes.\n"
				"Será muito difícil convecer aquele monge a te ensinar, se não for impossível.");
			next;
			mes("[Monge]\n"
				"Segundo, você precisará passar em meu pequeno teste de força.\n"
				"Para que eu possar saber se seu corpo suporta o uso de Punhos Itensos.");
			next;
			mes("[Monge]\n"
				"Hum.\n"
				"Eu sei que aquelas Mandrágoras têem incomodado os viajantes.\n"
				"Então se você me provar que consegue caçá-las, você provará.\n"
				"Que é capaz de aprender\n"
				"Punhos Intensos.");
			next;
			mes("[Monge]\n"
				"Se você conseguir convencer aquele monge e lhe ensinar\n"
				"Concessão Espiritual, pedirei a você para me trazer\n"
				"^FF0000 20 Caules^000000\n"
				"e ^FF0000 3 Brotos^000000\n"
				"caçando Mandrágoras.");
			next;
			mes("[Monge]\n"
				"Mas claro, não será possível concluir meu teste se você não aprender antes a Concessão Espiritual.\n"
				"Desejo-lhe boa sorte...");
			monk_sk = 4;
			close;
		} else if (monk_sk == 4) {
			mes("[Monge]\n"
				"O quê...?\n"
				"Você aprendeu a habilidade Concessão Espiritual?\n"
				"Acredito que você queira aprender agora Punhos Intensos.\n"
				"Estou certo?");
			next;
			if (countitem(Stem) > 19 && countitem(Shoot) > 2) {
				mes("[Monge]\n"
					"Hum.\n"
					"Bem, você é forte o suficiente para derrotar muitas Mandrágoras.\n"
					"Tudo bem então, você parece estar preparado.\n"
					"Volte daqui a pouco enquanto termino os preparativos.");
				delitem(Stem, 20);
				delitem(Shoot, 3);
				monk_sk = 5;
				close;
			} else {
				mes("[Monge]\n"
					"Como eu já mencionei, você deve derrotar Mandrágoras.\n"
					"Para mostrar que você é qualificado em termos de força e compaixão.\n"
					"Logo após poderá aprender Punhos Itensos.");
				next;
				mes("[Monge]\n"
					"Lute para proteger aqueles inocentes que estiverem sendo aterrorizados pelas terríveis Mandrágoras.\n"
					"Se você me trouxer\n"
					"^FF0000 20 Caules^000000 e\n"
					"^FF0000 3 Brotos^000000,\n"
					"eu ficarei satisfeito com essa prova de habilidade.");
				next;
				mes("[Monge]\n"
					"Conseguiu entender agora?");
				close;
			}
		} else if (monk_sk == 5) {
			mes("[Monge]\n"
				"Vamos começar.\n"
				"Para utilizar Punhos Itensos você deve transformar sua força interior em força exterior.\n"
				"Após isso, você deve focar a energia em suas mãos.\n"
				"Você poderá até explodir se cometer algum erro.");
			next;
			mes("[Monge]\n"
				"O uso dessa habilidade pode ser um pouco doloroso, consome 20 SP e 10 HP.\n"
				"Ela irá empurrar os inimigos para trás com uma certa chance de atordoá-los.\n"
				"Mas somente o monstro-alvo sofrerá dano");
			next;
			mes("[Monge]\n"
				"Se você usar esta habilidade em outras pessoas, irá causar uma boa quantidade de dano.\n"
				"Mas não irá empurrar outras pessoas além do alvo.\n"
				"Isso faz algum sentido?");
			next;
			mes("[Monge]\n"
				"Enfim, continue praticando esses princípios e você será um mestre dos Punhos Intensos.\n"
				"Você deverá ser capaz disso já que conseguiu aprender a Concessão Espiritual.");
			monk_sk = 6;
			skill("MO_BALKYOUNG", 1, 0);
			next;
			mes("[Monge]\n"
				"Bem, completamos todo o ensinamento.\n"
				"Acredito que você irá usar suas novas habilidades para lutar pela justiça e combater o mal.\n"
				"Adeus por enquanto, bom amigo.");
			close;
		} else {
			mes("[Monge]\n"
				"Como você convenceu aquele monge e te ensinar a Concessão Espiritual?\n"
				"Seria legal popularizar nossas habilidades especiais.\n"
				"Mas o mundo pode não estar pronto ainda.");
			close;
		}
	} else {
		mes("[Monge]\n"
			"Poder sem justiça não resulta em nada.\n"
			"Justiça sem poder não se mantém.\n"
			"O poder não se compara a justiça.\n"
			"Mas a verdadeira justiça poder ser um caminho para o poder.");
		close;
	}
}

// ------------------------------------------------------------------
prt_monk,270,198,3	script	Monge Aprendiz#monk_sk	4_M_MONK,{
	if (BaseJob == Job_Monk) {
		if (monk_sk == 1) {
			mes("[Monge]\n"
				"Lutar é algo sem sentido.\n"
				"Devemos evitar os conflitos e perceber que somos todos um só.\n"
				"Treine sua mente e a verdade será revelada.");
			next;
			mes("[Monge]\n"
				"Hum? Para qual propósito você veio até aqui?\n"
				"Ah, então você deseja aprender a habilidade que eu desenvolvi.\n"
				"Meu amigo estava certo: Muitas e muitas pessoas queriam aprender isso.");
			next;
			mes("[Monge]\n"
				"Não me entenda mal.\n"
				"É verdade que o poder e a justiça, sabedoria e força devem ser balenceados.\n"
				"Contudo, eu tenho sido visitado por muitas pessoas com fome de poder e sede de sangue.");
			next;
			mes("[Monge]\n"
				"Com toda confiança, eu lhe darei uma chance.\n"
				"Prove para mim que você irá usar as habilidades que lhe ensinarei em prol da paz e da justiça.\n"
				"Prove que você está livre do egoísmo.");
			monk_sk = 2;
			close;
		} else if (monk_sk == 2) {
			if (!Weight) {
				mes("[Monge]\n"
					"Ah. Muito bem.\n"
					"Estou vendo que você aprendeu uma coisa muito importante....\n"
					"Desapego de si mesmo.\n"
					"Eu acredito que você não irá abusar das técnicas que lhe ensinei.");
				next;
				mes("[Monge]\n"
					"Meu teste pode parecer um pouco rigoroso.\n"
					"Mas é impossível aprender a Concessão Espiritual sem a disciplina adequada.\n"
					"Como todas as coisas, desenvoltura e preparação são importates para tudo o que fazemos.");
				next;
				mes("[Monge]\n"
					"Agora relaxe por um momento.\n"
					"Eu vou usar minha técnica de acumpressura para preparar seu sitema nervoso.\n"
					"Para aprender os movimentos necessários da Concessão Espiritual.");
				next;
				mes("^3355FF*Tap... tap*\n"
					"*Tap... Tap*\n"
					"*Tap tap tap*^000000");
				next;
				mes("^3355FF*Tap tap tap*\n"
					"*Tap tap tap*\n"
					"*Tap... Tap tap*^000000");
				next;
				mes("^3355FF*Tap-tap-tap-tap-tap-tap-tap-tap- tap-tap-tap-tap-tap-tap-tap-tap-\n"
					"tap-tap-tap-tap-tap-tap-tap-tap- tap-tap-tap-tap-tap-tap-tap-tap-\n"
					"tap-tap-tap-tap-tap-tap-tap-tap- tap-tap-tap-tap-tap-tap-tap-tap-\n"
					"tap-tap-tap-tap-tap-tap* *POKE*^000000");
				next;
				mes("[Monge]\n"
					"Pronto.\n"
					"Você agora é capaz\n"
					"de usar a Concessão Espiritual.\n"
					"Ah, sim.\n"
					"Eu nunca dei um nome a essa habilidade.\n"
					"Mas é assim que ela é chamada pelos outros monges que já a viram.");
				next;
				mes("[Monge]\n"
					"Lembre-se esta habilidade possui um grande tempo de conjuração e pós-conjuração.\n"
					"Use-a com bastante cuidado.\n"
					"Ela também permite que você passe Esferas Espirituais.\n"
					"Para os companheiros do seu grupo consumindo 40 de SP.");
				next;
				mes("[Monge]\n"
					"Você entenderá melhor o funcionamento da habilidade praticando-a.\n"
					"Tenha sempre o pensamento de que lutar é necessário as vezes.\n"
					"Porém, os meios não justificam os fins.");
				monk_sk = 3;
				skill("MO_KITRANSLATION", 1, 0);
				next;
				mes("[Monge]\n"
					"Nossas habilidades não devem ser usadas para derramar sangue.\n"
					"Se você pode evitar um conflito, você verá que uma luta não vale a pena.\n"
					"Fique em paz, meu amigo.");
				close;
			} else {
				mes("[Monge]\n"
					"Você aprendeu a desapega-se de si mesmo?\n"
					"Quando você abandonar a ganância e os desejos mundanos, você estará pronto para meus ensinamentos.");
				close;
			}
		} else if (monk_sk == 6 && !getskilllv("MO_KITRANSLATION")) {
			mes("[Monge]\n"
				"Você esqueceu os princípios básicos de como usar a Concessão Espiritual?\n"
				"Como isso aconteceu...?");
			next;
			mes("[Monge]\n"
				"Ah, agora entendo.\n"
				"Você transcendeu e expandiu seus limites.\n"
				"E agora se tornou um Mestre.\n"
				"Me desculpe por não ter percebido antes.");
			next;
			mes("[Monge]\n"
				"Tudo bem.\n"
				"Será um honra para mim ajudá-lo a reaprender a habilidade Concessão Espiritual.\n"
				"Como efeito colateral, você provavelmente irá reaprender também Punhos Itensos.");
			next;
			mes("[Monge]\n"
				"Agora acalme-se e relaxe com minha técnica especial de acumpressura.\n"
				"Vou treinar seu sistema nervoso para receber a habilidade...");
			next;
			mes("^3355FF*Tap-tap-tap-tap-tap-tap-tap-tap- tap-tap-tap-tap-tap-tap-tap-tap-\n"
				"tap-tap-tap-tap-tap-tap-tap-tap- tap-tap-tap-tap-tap-tap-tap-tap-\n"
				"tap-tap-tap-tap-tap-tap-tap-tap- tap-tap-tap-tap-tap-tap-tap-tap-\n"
				"tap-tap-tap-tap-tap-tap* *POKE*^000000");
			skill("MO_KITRANSLATION", 1, 0);
			skill("MO_BALKYOUNG", 1, 0);
			monk_sk = 0;
			next;
			mes("[Monge]\n"
				"Está pronto.\n"
				"Por favor continue usando essas técnicas para promover a paz e harmonia nesse mundo.\n"
				"Até mais, meu bom amigo.");
			close;
		} else {
			mes("[Monge]\n"
				"Encontrar tempo para realizar seus principais objetivos.\n"
				"Suas prioridades nunca é desperdício de tempo.\n"
				"Nunca se atrapalhe fazendo o possível para alcançar o que deseja.");
			close;
		}
	} else {
		mes("[Monge]\n"
			"Lutar é algo sem sentido.\n"
			"Devemos evitar os conflitos e perceber que somos todos um só.\n"
			"Treine sua mente e a verdade será revelada.");
		close;
	}
}