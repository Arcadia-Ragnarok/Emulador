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
|         (MO_KITRANSLATION) Concess�o Espiritual                   |
\*-----------------------------------------------------------------*/

monk_test,316,69,5	script	Monge#monk_sk	4_M_CHNMONK,{
	if (BaseJob == Job_Monk) {
		if (!monk_sk) {
			mes("[Monge]\n"
				"Poder sem justi�a n�o resulta em nada.\n"
				"Justi�a sem poder n�o se mant�m.\n"
				"O poder n�o se compara a justi�a.\n"
				"Mas a verdadeira justi�a pode ser um caminho para o poder.");
			next;
			mes("[Monge]\n"
				"Lembre-se sempre desses ensinamentos.\n"
				"Justi�a e poder, compaix�o e for�a, conhecimento e a��es.\n"
				"Todos esses componentes andam de m�os dadas e precisam estar sempre harmoniosamente balaceados.");
			next;
			mes("[Monge]\n"
				"Isso acontece com algumas habilidades.\n"
				"Eu desenvolvi uma habilidade que � manifesta��o de poder:\n"
				"Punhos Intensos!\n"
				"No entanto, ela � in�til sem um complemento para balance�-la.");
			next;
			mes("[Monge]\n"
				"O complemento para minha habilidade � uma outra habilidade chamada Concess�o Espiritual.\n"
				"Que s� pode ser ensinada por um Monge.\n"
				"No entanto, ele se recusa a ensin�-la aos outros, achando que eles n�o s�o merecedores.");
			next;
			mes("[Monge]\n"
				"Embora eu tenha tentado convenc�-lo que seria bom popularizar a habilidade, devo respeitar a opini�o dele.\n"
				"Mesmo assim, voc� pode tentar convenc�-lo a lhe ensinar a habilidade se estiver com vontade de aprender nova t�cnicas.");
			monk_sk = 1;
			next;
			mes("[Monge]\n"
				"Para encontr�-lo, basta procurar um monge que sempre fala sobre o qu�o vazio s�o as lutas.\n"
				"Este ser� ele.");
			close;
		} else if (monk_sk == 1) {
			mes("[Monge]\n"
				"L� tem um monge pacifista vivendo em isolamento ele pode te ensinar a habilidade Concess�o Espiritual.\n"
				"Contudo, ele � teimoso e j� se recusou a ensinar muitas pessoas que queriam aprender com ele.");
			next;
			mes("[Monge]\n"
				"Seria bom se voc� conseguisse convenc�-lo a lhe lhe ensinar.\n"
				"Sendo que � imposs�vel aprender esta habilidade sozinha.\n"
				"� realmente uma pena...");
			close;
		} else if (monk_sk == 3) {
			mes("[Monge]\n"
				"Voc� veio para aprender Punhos Intensos?\n"
				"Se for isso mesmo.\n"
				"Existem dois obst�culos que voc� dever� superar para conseguir.");
			next;
			mes("[Monge]\n"
				"Primeiramente, voc� deve aprender a habilidade Concess�o Espiritual antes.\n"
				"Ser� muito dif�cil convecer aquele monge a te ensinar, se n�o for imposs�vel.");
			next;
			mes("[Monge]\n"
				"Segundo, voc� precisar� passar em meu pequeno teste de for�a.\n"
				"Para que eu possar saber se seu corpo suporta o uso de Punhos Itensos.");
			next;
			mes("[Monge]\n"
				"Hum.\n"
				"Eu sei que aquelas Mandr�goras t�em incomodado os viajantes.\n"
				"Ent�o se voc� me provar que consegue ca��-las, voc� provar�.\n"
				"Que � capaz de aprender\n"
				"Punhos Intensos.");
			next;
			mes("[Monge]\n"
				"Se voc� conseguir convencer aquele monge e lhe ensinar\n"
				"Concess�o Espiritual, pedirei a voc� para me trazer\n"
				"^FF0000 20 Caules^000000\n"
				"e ^FF0000 3 Brotos^000000\n"
				"ca�ando Mandr�goras.");
			next;
			mes("[Monge]\n"
				"Mas claro, n�o ser� poss�vel concluir meu teste se voc� n�o aprender antes a Concess�o Espiritual.\n"
				"Desejo-lhe boa sorte...");
			monk_sk = 4;
			close;
		} else if (monk_sk == 4) {
			mes("[Monge]\n"
				"O qu�...?\n"
				"Voc� aprendeu a habilidade Concess�o Espiritual?\n"
				"Acredito que voc� queira aprender agora Punhos Intensos.\n"
				"Estou certo?");
			next;
			if (countitem(Stem) > 19 && countitem(Shoot) > 2) {
				mes("[Monge]\n"
					"Hum.\n"
					"Bem, voc� � forte o suficiente para derrotar muitas Mandr�goras.\n"
					"Tudo bem ent�o, voc� parece estar preparado.\n"
					"Volte daqui a pouco enquanto termino os preparativos.");
				delitem(Stem, 20);
				delitem(Shoot, 3);
				monk_sk = 5;
				close;
			} else {
				mes("[Monge]\n"
					"Como eu j� mencionei, voc� deve derrotar Mandr�goras.\n"
					"Para mostrar que voc� � qualificado em termos de for�a e compaix�o.\n"
					"Logo ap�s poder� aprender Punhos Itensos.");
				next;
				mes("[Monge]\n"
					"Lute para proteger aqueles inocentes que estiverem sendo aterrorizados pelas terr�veis Mandr�goras.\n"
					"Se voc� me trouxer\n"
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
				"Vamos come�ar.\n"
				"Para utilizar Punhos Itensos voc� deve transformar sua for�a interior em for�a exterior.\n"
				"Ap�s isso, voc� deve focar a energia em suas m�os.\n"
				"Voc� poder� at� explodir se cometer algum erro.");
			next;
			mes("[Monge]\n"
				"O uso dessa habilidade pode ser um pouco doloroso, consome 20 SP e 10 HP.\n"
				"Ela ir� empurrar os inimigos para tr�s com uma certa chance de atordo�-los.\n"
				"Mas somente o monstro-alvo sofrer� dano");
			next;
			mes("[Monge]\n"
				"Se voc� usar esta habilidade em outras pessoas, ir� causar uma boa quantidade de dano.\n"
				"Mas n�o ir� empurrar outras pessoas al�m do alvo.\n"
				"Isso faz algum sentido?");
			next;
			mes("[Monge]\n"
				"Enfim, continue praticando esses princ�pios e voc� ser� um mestre dos Punhos Intensos.\n"
				"Voc� dever� ser capaz disso j� que conseguiu aprender a Concess�o Espiritual.");
			monk_sk = 6;
			skill("MO_BALKYOUNG", 1, 0);
			next;
			mes("[Monge]\n"
				"Bem, completamos todo o ensinamento.\n"
				"Acredito que voc� ir� usar suas novas habilidades para lutar pela justi�a e combater o mal.\n"
				"Adeus por enquanto, bom amigo.");
			close;
		} else {
			mes("[Monge]\n"
				"Como voc� convenceu aquele monge e te ensinar a Concess�o Espiritual?\n"
				"Seria legal popularizar nossas habilidades especiais.\n"
				"Mas o mundo pode n�o estar pronto ainda.");
			close;
		}
	} else {
		mes("[Monge]\n"
			"Poder sem justi�a n�o resulta em nada.\n"
			"Justi�a sem poder n�o se mant�m.\n"
			"O poder n�o se compara a justi�a.\n"
			"Mas a verdadeira justi�a poder ser um caminho para o poder.");
		close;
	}
}

// ------------------------------------------------------------------
prt_monk,270,198,3	script	Monge Aprendiz#monk_sk	4_M_MONK,{
	if (BaseJob == Job_Monk) {
		if (monk_sk == 1) {
			mes("[Monge]\n"
				"Lutar � algo sem sentido.\n"
				"Devemos evitar os conflitos e perceber que somos todos um s�.\n"
				"Treine sua mente e a verdade ser� revelada.");
			next;
			mes("[Monge]\n"
				"Hum? Para qual prop�sito voc� veio at� aqui?\n"
				"Ah, ent�o voc� deseja aprender a habilidade que eu desenvolvi.\n"
				"Meu amigo estava certo: Muitas e muitas pessoas queriam aprender isso.");
			next;
			mes("[Monge]\n"
				"N�o me entenda mal.\n"
				"� verdade que o poder e a justi�a, sabedoria e for�a devem ser balenceados.\n"
				"Contudo, eu tenho sido visitado por muitas pessoas com fome de poder e sede de sangue.");
			next;
			mes("[Monge]\n"
				"Com toda confian�a, eu lhe darei uma chance.\n"
				"Prove para mim que voc� ir� usar as habilidades que lhe ensinarei em prol da paz e da justi�a.\n"
				"Prove que voc� est� livre do ego�smo.");
			monk_sk = 2;
			close;
		} else if (monk_sk == 2) {
			if (!Weight) {
				mes("[Monge]\n"
					"Ah. Muito bem.\n"
					"Estou vendo que voc� aprendeu uma coisa muito importante....\n"
					"Desapego de si mesmo.\n"
					"Eu acredito que voc� n�o ir� abusar das t�cnicas que lhe ensinei.");
				next;
				mes("[Monge]\n"
					"Meu teste pode parecer um pouco rigoroso.\n"
					"Mas � imposs�vel aprender a Concess�o Espiritual sem a disciplina adequada.\n"
					"Como todas as coisas, desenvoltura e prepara��o s�o importates para tudo o que fazemos.");
				next;
				mes("[Monge]\n"
					"Agora relaxe por um momento.\n"
					"Eu vou usar minha t�cnica de acumpressura para preparar seu sitema nervoso.\n"
					"Para aprender os movimentos necess�rios da Concess�o Espiritual.");
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
					"Voc� agora � capaz\n"
					"de usar a Concess�o Espiritual.\n"
					"Ah, sim.\n"
					"Eu nunca dei um nome a essa habilidade.\n"
					"Mas � assim que ela � chamada pelos outros monges que j� a viram.");
				next;
				mes("[Monge]\n"
					"Lembre-se esta habilidade possui um grande tempo de conjura��o e p�s-conjura��o.\n"
					"Use-a com bastante cuidado.\n"
					"Ela tamb�m permite que voc� passe Esferas Espirituais.\n"
					"Para os companheiros do seu grupo consumindo 40 de SP.");
				next;
				mes("[Monge]\n"
					"Voc� entender� melhor o funcionamento da habilidade praticando-a.\n"
					"Tenha sempre o pensamento de que lutar � necess�rio as vezes.\n"
					"Por�m, os meios n�o justificam os fins.");
				monk_sk = 3;
				skill("MO_KITRANSLATION", 1, 0);
				next;
				mes("[Monge]\n"
					"Nossas habilidades n�o devem ser usadas para derramar sangue.\n"
					"Se voc� pode evitar um conflito, voc� ver� que uma luta n�o vale a pena.\n"
					"Fique em paz, meu amigo.");
				close;
			} else {
				mes("[Monge]\n"
					"Voc� aprendeu a desapega-se de si mesmo?\n"
					"Quando voc� abandonar a gan�ncia e os desejos mundanos, voc� estar� pronto para meus ensinamentos.");
				close;
			}
		} else if (monk_sk == 6 && !getskilllv("MO_KITRANSLATION")) {
			mes("[Monge]\n"
				"Voc� esqueceu os princ�pios b�sicos de como usar a Concess�o Espiritual?\n"
				"Como isso aconteceu...?");
			next;
			mes("[Monge]\n"
				"Ah, agora entendo.\n"
				"Voc� transcendeu e expandiu seus limites.\n"
				"E agora se tornou um Mestre.\n"
				"Me desculpe por n�o ter percebido antes.");
			next;
			mes("[Monge]\n"
				"Tudo bem.\n"
				"Ser� um honra para mim ajud�-lo a reaprender a habilidade Concess�o Espiritual.\n"
				"Como efeito colateral, voc� provavelmente ir� reaprender tamb�m Punhos Itensos.");
			next;
			mes("[Monge]\n"
				"Agora acalme-se e relaxe com minha t�cnica especial de acumpressura.\n"
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
				"Est� pronto.\n"
				"Por favor continue usando essas t�cnicas para promover a paz e harmonia nesse mundo.\n"
				"At� mais, meu bom amigo.");
			close;
		} else {
			mes("[Monge]\n"
				"Encontrar tempo para realizar seus principais objetivos.\n"
				"Suas prioridades nunca � desperd�cio de tempo.\n"
				"Nunca se atrapalhe fazendo o poss�vel para alcan�ar o que deseja.");
			close;
		}
	} else {
		mes("[Monge]\n"
			"Lutar � algo sem sentido.\n"
			"Devemos evitar os conflitos e perceber que somos todos um s�.\n"
			"Treine sua mente e a verdade ser� revelada.");
		close;
	}
}