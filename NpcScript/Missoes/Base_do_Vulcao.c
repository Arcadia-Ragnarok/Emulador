/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: L0ne_W0lf                                               |
| - Version: Spell Master                                           |
| - Info: Quest da Base do Vulc�o de Thor                           |
| * Necess�rio conclus�o da quest do templo de rachel.              |
| * Necess�rio conclus�o da quest do Camelo passo 25 para iniciar.  |
| * In�cio em ra_temin,277,159 (Sumo Sacerdote Zhed)                |
\*-----------------------------------------------------------------*/

ra_temin,40,124,3	script	Adepta#vol	4_F_TRAINEE,{
	mes "[Lamir]";
	mes "^333333*Suspiro*^000000";
	mes "Sumo Sacerdote Vildt deixou muita comida ap�s terminar de comer.";
	mes "Ele n�o aprendeu a acabar com toda a sua comida?";
	next;
	mes "[Lamir]";
	mes "Voc� sabe, a minha m�e sempre me amea�ava dizendo que ela podia me for�ar a me casar com Karlum.";
	mes "Se eu n�o terminasse toda a minha comida quando eu era crian�a.";
	mes "Eu aprendi a n�o deixar nenhuma sobra desta maneira.";
	next;
	select("Quem � Karlum?");
	mes "[Lamir]";
	mes "Karlum? Oh, ele vem me seguindo desde que n�s �ramos crian�as, declarando o seu amor e coisas do tipo.";
	mes "Mesmo depois de crescido, ele continua teimoso sobre este assunto.";
	next;
	mes "[Lamir]";
	mes "Ugh! At� hoje, ele me deixa muito nervosa!";
	mes "Quero dizer, � �timo que ele seja um seguran�a do escrit�rio do Sumo Sacerdote Vildt, mas vamos l�!";
	mes "Por que ele n�o pode se preocupar com outra garota?";
	if (aru_vol == 1) {
		aru_vol = 2;
	}
	close;
}

// ------------------------------------------------------------------
ra_temin,87,133,1	script	Soldado de Rachel#vol1	4_M_RASWORD,{
	if (aru_vol == 2) {
		mes "[Soldado Karlum]";
		mes "O Sumo Sacerdote Vildt n�o est� aqui agora.";
		mes "Por favor volte aqui depois se quiser v�-lo.";
		next;
		select("Pensar em uma Distra��o");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Este cara n�o vai me deixar passar.";
		mes "Vamos ver...";
		mes "H� um jeito de eu conseguir passar por ele?";
		mes "O que, ou ^FF0000Quem^000000, poderia o distrair?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espera um segundo...";
		mes "� claro!";
		mes "Eu devo falar com ele sobre...";
		next;
		input(.@input$);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espera um segundo...";
		mes "� claro!";
		mes "Eu devo falar com ele sobre ^FF0000"+.@input$+"^000000 !!";
		next;
		if (.@input$ != "Lamir") {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "O que...?";
			mes "De onde � que eu tiro estas id�ias?";
			mes "Isto n�o faz sentido algum...";
			close;
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Est� Certo!";
		mes "Eu falei com Lamir algum tempo atr�s.";
		mes "Se ela est� certa, ent�o este cara deve ser Karlum.";
		mes "O cara que est� totalmente apaixonado por ela.";
		mes "Hmm...";
		mes "Eu j� sei o que eu vou dizer...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "^333333*Ahem*^000000 Com licen�a, mas por acaso voc� � Karlum?";
		mes "Eu tenho uma mensagem para voc�.";
		next;
		mes "[Soldado Karlum]";
		mes "Uma mensagem para mim?";
		mes "� por isto que voc� est� andando por aqui?";
		mes "Bem, qual � a mensagem.";
		mes "Eu n�o posso ficar muito tempo fora do meu trabalho...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� conhece ^3131FFLamir^000000, certo?";
		next;
		emotion(e_omg);
		mes "[Soldado Karlum]";
		mes "Lamir? Oh... Meu.";
		mes "Oh n�o!";
		mes "Algo de ruim aconteceu a ela?";
		mes "R�pido, fale logo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "N�o, n�o � nada disto.";
		mes "Ela s� me disse que tinha";
		mes "algo importante para";
		mes "lhe dizer, e que voc� deve ir";
		mes "v�-la quando tiver tempo livre.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu tentei perguntar a ela mais coisas, mas ela apenas mudava de assunto e ignorava.";
		mes "H� algo acontecendo entre voc�s dois?";
		next;
		mes "[Soldado Karlum]";
		mes "...Eu n�o acredito nisto.";
		mes "Finalmente.";
		mes "Depois de todos estes anos.";
		mes "Ela sente por mim o mesmo que eu sinto por ela!";
		mes "Minha serenata da meia noite a poucos dias atr�s deve ter tocado o cora��o dela.";
		next;
		mes "[Soldado Karlum]";
		mes "Que se dane esse trabalho est�pido!";
		mes "Eu fiz minha escolha, e eu escolho o amor verdadeiro!";
		mes "N�o posso mais deixar Lamir esperando!";
		aru_vol = 3;
		donpcevent("vol_time::OnEnable");
		close2;
		end;
	} else if ((aru_vol > 2) && (aru_vol < 5)) {
		mes "[Soldado Karlum]";
		mes "Ei! Lamir me disse que ela n�o queria me ver de modo algum!";
		mes "Qual � o seu jogo, huh?";
		mes "Voc� acha que eu sou f�cil de ser enganado?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O que?";
		mes "Foi isto que aconteceu?";
		mes "Eu poderia jurar qu--Aaah.";
		mes "Eu entendi agora.";
		mes "Ela deve estar dando uma de dif�cil.";
		mes "Isto significa que ela est� gostando muuuuuuito de voc�.";
		next;
		mes "[Soldado Karlum]";
		mes "Ah! Isto faz bastante sentido!";
		mes "Ent�o � por isto que ela me trata deste jeito! Hahaha!";
		mes "Eu j� devia ter percebido isto antes!";
		mes "Pois bem, devo ir at� ela e jogar dif�cil tamb�m!";
		close;
	} else {
		mes "[Soldado Karlum]";
		mes "O Sumo Sacerdote Vildt n�o est� aqui agora.";
		mes "Por favor volte aqui depois se quiser v�-lo.";
		close;
	}
}

// ------------------------------------------------------------------
ra_temin,5,5,3	script	vol_time	CLEAR_NPC,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer10000:
	mapannounce("ra_temin","Soldado Karlum: Lamir! Aqui � o Karlum! Seu amor est� aqui!",bc_map,"0xFFCE00");
	end;

	OnTimer15000:
	mapannounce("ra_temin","Lamir: Karlum? O que voc� est� fazendo aqui?",bc_map,"0xFFCE00");
	end;

	OnTimer20000:
	mapannounce("ra_temin","Soldado Karlum: Lamir, voc� pode parar de fingir agora. Eu percebi que sua frieza � para mascarar o seu Amor.",bc_map,"0xFFCE00");
	end;

	OnTimer30000:
	mapannounce("ra_temin","Lamir: Do que voc� est� falando? Lamento, Karlum, mas eu n�o sinto nada de especial por voc�.",bc_map,"0xFFCE00");
	end;

	OnTimer35000:
	mapannounce("ra_temin","Soldado Karlum: Eu sei, � embara�oso confessar seus verdadeiros sentimentos.",bc_map,"0xFFCE00");
	end;

	OnTimer40000:
	mapannounce("ra_temin","Soldado Karlum: No entanto, n�o posso negar que sua timidez est� quebrando meu cora��o em peda�os..",bc_map,"0xFFCE00");
	end;

	OnTimer45000:
	mapannounce("ra_temin","Lamir: Karlum, quando voc� vai perceber que eu n�o sinto, e nunca sentirei amor por voc�?",bc_map,"0xFFCE00");
	end;

	OnTimer50000:
	mapannounce("ra_temin","Soldado Karlum: .............",bc_map,"0xFFCE00");
	end;

	OnTimer55000:
	mapannounce("ra_temin","Soldado Karlum: O qu--? Mas eu pensei...? Huh, me desculpe. Eu vou indo...",bc_map,"0xFFCE00");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
ra_temin,115,140,1	script	Vaso de Flores#vol	HIDDEN_NPC,{
	if ((aru_vol > 2) && (aru_vol < 5)) {
		mes "^3355FFVoc� encontrou um vaso gigante cheio de flores bonitas que parecem ter sido colhidas recentemente de um jardim.^000000";
		next;
		if (select("Destruir Vaso","N�o Destruir Vaso") == 1) {
			mes "^3355FFVoc� pega o vaso de flores com as m�os, e em seguida o joga no ch�o.^000000";
			next;
			mes "^3355FF*Crash!*^000000";
			next;
			mes "[Soldado Krodger]";
			mes "Quem est� ai?!";
			disablenpc("Soldado de Rachel#vol2");
			enablenpc("Soldado de Rachel#vol2_1");
			donpcevent("vol_time2::OnEnable");
			aru_vol = 4;
			disablenpc(strnpcinfo(NPC_NAME));
			close;
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Um monte de carinho foi posto ao arranjar estas flores...";
		mes "Eu n�o poderia suportar se eu perturbasse sua beleza.";
		next;
		mes "^3355FFE voc� fica apenas ali, olhando com um pouco de piedade.";
		mes "Mas n�o sente isso tudo como uma coisa pat�tica.^000000";
		close;
	} else {
		mes "^3355FFVoc� encontrou um vaso gigante cheio de flores bonitas que parecem ter sido colhidas recentemente de um jardim.^000000";
		close;
	}
}

// ------------------------------------------------------------------
ra_temin,82,133,7	script	Soldado de Rachel#vol2	4_M_RASWORD,5,2,{
	mes "[Soldado Krodger]";
	mes "O Sumo Sacerdote Vildt n�o est� aqui agora.";
	mes "Por favor volte aqui depois se quiser v�-lo.";
	close;

	OnTouch:
	warp("ra_temin",85,137);
	close;
}

// ------------------------------------------------------------------
ra_temin,113,140,1	script	Soldado de Rachel#vol2_1	4_M_RASWORD,{
	mes "[Soldado Krodger]";
	mes "O que h� de errado com este vaso?";
	mes "Eles sempre me mandam at� aqui para limpar esta bagun�a!";
	mes "Quero dizer, isso acontece tantas vezes.";
	mes "Eu n�o acho que isto seja acidental.";
	mes "O que voc� pensa destes v�ndalos?";
	close;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
ra_temin,5,5,1	script	vol_time2	CLEAR_NPC,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer30000:
	mapannounce("ra_temin","Soldado Krodger: Phew., agora eu estou indo limpar este show.",bc_map,"0xFFCE00");
	stopnpctimer;
	disablenpc("Soldado de Rachel#vol2_1");
	enablenpc("Soldado de Rachel#vol2");
	enablenpc("Vaso de Flores#vol");
	end;
}

// ------------------------------------------------------------------
ra_temin,85,118,3	script	Gaveta#vol3	HIDDEN_NPC,{
	if (aru_vol == 4) {
		mes "^3355FFVoc� encontra uma pilha de relat�rios designados ao sumo sacerdote dentro desta gaveta.^000000";
		next;
		if (select("Ver Relat�rios","Cancelar") == 1) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Bem, talvez n�o seja a coisa mais certa a se fazer.";
			mes "Mas eu tenho a sensa��o de que eu deveria, pelo menos, dar uma olhada neste relat�rios.";
			next;
			mes "^3355FFVoc� come�ou a folhear os documentos, dando uma olhada em algo que lhe seja interessante.^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Ooh...";
			mes "Isto deve ser o";
			mes "eu estava procurando.";
			next;
			mes "^3355FFVoc� pega o relat�rio etiquetado com ^000000\"Instituto de Pesquisas Geol�gicas de Veins\"^3355FF na capa.";
			mes "E depois voc� fecha a gaveta.^000000";
			changequest(2114,2115);
			aru_vol = 5;
			getitem(File01,1);
			close;
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "� melhor deixar pra l�.";
		mes "Eu n�o tenho permiss�o para dentro destes arquivos.";
		close;
	} else if (aru_vol == 5) {
		if (!countitem(File01) && !checkweight(File01,1)) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Oh! Aqui est� uma outra do relat�rio que eu precisava!";
			mes "Que sorte.";
			getitem(File01,1);
			close;
		} else {
			mes "^3355FFVoc� encontra uma pilha";
			mes "de relat�rios designados";
			mes "ao sumo sacerdote";
			mes "dentro desta gaveta.^000000";
			close;
		}
	} else {
		mes "^3355FFVoc� encontra uma pilha";
		mes "de relat�rios designados";
		mes "ao sumo sacerdote";
		mes "dentro desta gaveta.^000000";
		close;
	}
}

// ------------------------------------------------------------------
ve_in,280,223,0	script	#volroom	FAKE_NPC,2,2,{
	OnTouch:
	if (aru_vol == 6) {
		mes "^3355FFEsta casa parece ter sido abandonada por um bom tempo.";
		mes "O ch�o est� totalmente coberto por poeira.";
		mes "E muitas folhas de papel descartadas.^000000";
		next;
		mes "^3355FFUma folha de papel em particular chama sua aten��o.";
		mes "Voc� a pega e come�a a ler.^000000";
		next;
		mes "[Papel]";
		mes "^333333O inqu�rito regular Geol�gico foi agendado para daqui a uma semana.";
		mes "Envie seu relat�rio para n�s o mais r�pido poss�vel.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Apesar do nome do remetente n�o estar nesta carta, eu posso adivinhar quem escreveu esta.";
		mes "Falando nisto...";
		mes "Aonde est� o Ge�logo?";
		aru_vol = 7;
		close;
	} else {
		mes "^3355FFEsta casa parece ter sido abandonada por um bom tempo.";
		mes "O ch�o est� totalmente coberto por poeira.";
		mes "E muitas folhas de papel descartadas.^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
ve_in,233,116,3	script	Homem B�bado#vol	4_M_HUOLDARMY,{
	if (aru_vol < 7) {
		mes "[Homem B�bado]";
		mes "Ent�o... ^333333*Urp*^000000";
		mes "Ent�o eu disse...";
		next;
		mes "[Homem B�bado]";
		mes "^3131FFEi, companheiro!";
		mes "Um homem usa suas costas para lugar, n�o seus punhos!";
		mes "Voc� quer um peda�o de mim?";
		mes "Pode vir!^000000";
		next;
		mes "[Homem B�bado]";
		mes "Ent�o ele ficou todo assustado, e correu de medo!";
		mes "Hahahaha!";
		mes "Eu acho que pare�o bem forte, n�o pare�o?";
		next;
		emotion(e_lv,0,"Mulher B�bada#1");
		emotion(e_lv,0,"Mulher B�bada#2");
		mes "[Mulheres]";
		mes "Ah, meu Deus!";
		mes "Voc� � t�o legal.!";
		next;
		mes "[Homem B�bado]";
		mes "Bem...";
		mes "Qualquer um poderia ter feito isso...";
		mes "Eu apenas estava sendo um cavalheiro.";
		mes "Hahahah, isso mesmo!";
		close;
	} else if (aru_vol == 7) {
		mes "[Homem B�bado]";
		mes "Ent�o...";
		mes "^333333*Urp*^000000";
		mes "Ent�o eu disse...";
		next;
		mes "[Homem B�bado]";
		mes "^3131FFEi, companheiro!";
		mes "Um homem usa suas costas para lugar, n�o seus punhos!";
		mes "Voc� quer um peda�o de mim?";
		mes "Pode vir!^000000";
		next;
		mes "[Homem B�bado]";
		mes "Ent�o ele ficou todo assustado, e correu de medo!";
		mes "Hahahaha!";
		mes "Eu acho que pare�o bem forte, n�o pare�o?";
		next;
		emotion(e_lv,0,"Mulher B�bada#1");
		emotion(e_lv,0,"Mulher B�bada#2");
		mes "[Mulheres]";
		mes "Ah, meu Deus!";
		mes "Voc� � t�o legal.!";
		next;
		mes "[Homem B�bado]";
		mes "Bem... Qualquer um poderia ter feito isso...";
		mes "Eu apenas estava sendo um cavalheiro.";
		mes "Hahahah, isso mesmo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a, mas voc� � o Diretor Executivo do Instituto de Pesquisas Geol�gicas de Veins?";
		next;
		mes "[Homem B�bado]";
		mes "Sim, sou eu mesmo! Diretor executivo executivo, diretor adjunto, diretor, pesquisador, CEO, n�o...";
		mes "N�o, espere, o �ltimo nome n�o soa direito.";
		mes "Eu sou tudo isso.";
		next;
		mes "[Homem B�bado]";
		mes "Eu sou o diretor executivo...";
		mes "Eu sou u �nico que trabalha no instituto, com seriedade.";
		mes "Porque, o que voc� quer?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Uhh... Existem alguns avisos oficiais para voc� no seu escrit�rio.";
		mes "Eu acho que voc� precisa fazer alguns relat�rios que j� deviam estar feitos?";
		mes "Eles parecem ser bem importantes.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Talvez...";
		mes "Talvez seja ^FF0000urgente^000000.";
		next;
		mes "[Homem B�bado]";
		mes "O qu--? Ei, que dia � hoje?!";
		mes "Certo, certo, hora de come�ar a trabalhar.";
		mes "Justo quando eu estava gostando tanto!";
		mes "Argh, eu n�o queria ficar s�brio nunca!";
		next;
		mes "[Homem B�bado]";
		mes "Mas... Trabalhar � a �nica forma de suportar toda esta bebedeira...";
		mes "Isso � a vida, isso � a vida.";
		next;
		mes "[Mulheres]";
		mes "Aonde voc� est� indo?";
		mes "Voc� n�o pode ficar um pouco mais e falar conosco?";
		mes "Por Favooooooor?";
		next;
		mes "[Homem B�bado]";
		mes "Lamento, mo�as, mas o dever me chama.";
		mes "Hahahahahahha.";
		next;
		emotion(e_lv,0,"Mulher B�bada#1");
		emotion(e_lv,0,"Mulher B�bada#2");
		mes "[Mulheres]";
		mes "Por favor n�o v�.";
		next;
		mes "[Homem B�bado]";
		mes "Ahem!";
		mes "Vamos ver.";
		mes "O que seria melhor...?";
		mes "..............................";
		mes "..............................";
		mes "..............................";
		next;
		mes "[Homem B�bado]";
		mes "..............................";
		mes "..............................";
		mes "........................Certo!";
		next;
		mes "[Homem B�bado]";
		mes "Ei, voc�.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim?";
		next;
		emotion(e_no1);
		mes "[Homem B�bado]";
		mes "Eu decidi promover voc� a chefe de pesquisa do Instituto de Pesquisas Geol�gicas de Veins.";
		mes "Parab�ns!";
		mes "Bem vindo a equipe, colega!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Huh...?";
		mes "Eu n�o entendo do que voc� est� falando!";
		next;
		mes "[Homem B�bado]";
		mes "Heh! Voc� devia estar agradecido por eu ter lhe aceitado como meu aluno!";
		mes "Todos os meus alunos tem orgulho de estudarem comigo, Geo, o maior ge�logo do mundo!";
		mes "Bem, talvez...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, eu nunca.";
		next;
		mes "[Ge�logo Geo]";
		mes "Ah-ah! Agora que voc� � meu aluno, eu espero que voc� trabalhe duro se voc� quer aprender algo.";
		mes "A Primeira coisa � ir ao meu escrit�rio e resolver alguns assuntos de neg�cios...";
		next;
		mes "[Ge�logo Geo]";
		mes "Aqui, leve este ^FF0000guia de";
		mes "refer�ncia^000000 com voc� ao meu escrit�rio.";
		mes "Procurando pela minha mesa, voc� vai encontrar um ^FF0000pir�metro^000000 e um ^FF0000formul�rio de relat�rio^000000.";
		mes "Voc� dever� levar estas coisas ao Vulc�o de Thor.";
		next;
		mes "[Ge�logo Geo]";
		mes "Quando voc� chegar ao Vulc�o de Thor,";
		mes "use o pir�metro para checar a";
		mes "temperatura do vulc�o, e";
		mes "preencha o formul�rio de relat�rio.";
		next;
		mes "[Ge�logo Geo]";
		mes "Leve o formul�rio de relat�rio";
		mes "preenchido ao campo de geologia";
		mes "que fica no fundo do vulc�o,";
		mes "para que possam carimbar sua";
		mes "confirma��o sobre ele. Isto n�o";
		mes "� t�o dif�cil, �?";
		next;
		mes "[Ge�logo Geo]";
		mes "Ahh, eu j� decidi, eu irei";
		mes "fazer destas mo�as ador�veis";
		mes "minhas estudantes.";
		mes "Ent�o eu ficarei aqui e";
		mes "dar uma palestra a elas.";
		next;
		emotion(e_lv,0,"Mulher B�bada#1");
		emotion(e_lv,0,"Mulher B�bada#2");
		mes "[Mulheres]";
		mes "Oh.! Voc� realmente ir�";
		mes "nos ensinar geologia?";
		next;
		mes "[Ge�logo Geo]";
		mes "Oh, certo! quando lhe";
		mes "perguntarem sobre a temperatura";
		mes "do vulc�o quando for apresentar";
		mes "o rel�torio no campo";
		mes "geol�gico diga qualquer coisa.";
		mes "Mas tenha certeza de que soe mal!";
		next;
		mes "[Ge�logo Geo]";
		mes "Palavras como ''explos�o'',";
		mes "''desastre'', e ''danos";
		mes "colaterais'' s�o perfeitas.";
		mes "� s� fazer sua parte, que eu";
		mes "cuido do resto. Certo...";
		mes "Volte logo, meu aluno!";
		next;
		mes "^3355FFBem, isso n�o era o que";
		mes "voc� esperava, mas voc� tem";
		mes "a sensa��o de que tudo isso";
		mes "ir� ficar a seu favor..";
		mes "Voc� conhece essa sensa��o, certo?^000000";
		changequest(2116,2117);
		aru_vol = 8;
		getitem(Note_Of_Geologist,1);
		close;
	} else if ((aru_vol > 7) && (aru_vol < 24)) {
		mes "[Ge�logo Geo]";
		mes "Ei, � melhor voc� se apressar.";
		mes "Quero dizer, voc� � o �nico que viu o aviso no meu escrit�rio n�o �?";
		mes "Voc� sabe o qu�o importante � este trabalho para n�s!";
		next;
		mes "[Ge�logo Geo]";
		mes "Pegue o pir�metro, e v� para o Vulc�o de Thor para preencher o formul�rio de relat�rio e apresent�-lo a base geol�gica!";
		close;
	} else if (aru_vol == 24) {
		mes "[Ge�logo Geo]";
		mes "Bem, estas s�o boas pernas, mas este n�o n�o � o melhor par que eu j� v-";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu estou de volta.";
		next;
		mes "[Geologist Geo]";
		mes "*Ahem*";
		mes "E isto � como a eros�o...";
		mes "Funciona.";
		mes "Amanh�, eu irei ensinar a voc�s mo�as tudo sobre as rochas.";
		mes "Todas elas.";
		next;
		mes "[Ge�logo Geo]";
		mes "Bem vindo de volta!.";
		mes "Ent�o, como foi a apresenta��o do relat�rio de temperatura vulc�nica?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Pois bem, eu fiz o que voc� me mediu.";
		mes "Ei, tem certeza de que queria que eu exagerasse na temperatura?";
		mes "O que se passa na base?";
		next;
		mes "[Ge�logo Geo]";
		mes "Oh, n�o se preocupe com a temperatura.";
		mes "Foi suposto que ela iria aumentar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O que voc� fez...?";
		mes "Na verdade, eu pensei que talvez o pir�metro poderia estar quebrado.";
		next;
		mes "[Ge�logo Geo]";
		mes "Heh! Voc� est� certo.";
		mes "Eu quebrei ele de prop�sito.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O que?!";
		next;
		mes "[Ge�logo Geo]";
		mes "Voc� sabe, � dif�cil para estudiosos como eu viver uma vida decente.";
		mes "Ent�o, eu fui sortudo o bastante para conseguir este emprego de medi��o de temperatura da base geol�gico.";
		next;
		mes "[Ge�logo Geo]";
		mes "Estes caras vem tentando atirar em mim toda vez que eu dou uma previs�o e que o vulc�o ficar� inativa.";
		mes "Mas... eles n�o podem atirar em mim se esta previs�o diz que o vulc�o ir� ficar ativo a qualquer hora!";
		next;
		mes "[Ge�logo Geo]";
		mes "Ent�o, quando todos eles";
		mes "entram em p�nico, eu calmamente e";
		mes "suavemente ofere�o uma solu��o";
		mes "que parece que ir� funcionar.";
		mes "Evidentemente, n�o h� nenhum problema em come�ar com...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ent�o...";
		mes "Voc� � um pilantra.";
		next;
		mes "[Ge�logo Geo]";
		mes "Awww, n�o olha para mim deste modo.";
		mes "Eu sou um verdadeiro cientista.";
		mes "Vamos...";
		mes "Oh, vamos l�...";
		next;
		mes "[Ge�logo Geo]";
		mes "Olha, por que voc� n�o volta ao meu instituto e checa minha estante?";
		mes "Eu deixo uma pequena caixa l� onde eu deixo todo tipo de coisas boas.";
		next;
		mes "[Ge�logo Geo]";
		mes "Voc� pode ter a primeira coisa que sair para fora dessa caixa.";
		mes "Pergunto-me se a deusa vai lhe aben�oar com boa fortuna.";
		mes "Voc� pode conseguir algo de bom.";
		next;
		mes "[Ge�logo Geo]";
		mes "Considere isto como seu pagamento por um trabalho";
		mes "bem feito.";
		mes "Bom trabalho!";
		mes "Eu n�o esperava nada menos vindo do meu aluno estrela!";
		changequest(60211,60212);
		aru_vol = 25;
		delitem(File01,1);
		delitem(Broken_Thermometer,1);
		delitem(Note_Of_Geologist,1);
		close;
	} else {
		mes "[Homem B�bado]";
		mes "Ent�o... ^333333*Urp*^000000";
		mes "Ent�o eu disse...";
		next;
		mes "[Homem B�bado]";
		mes "^3131FFEi, companheiro!";
		mes "Um homem usa suas costas para lugar, n�o seus punhos!";
		mes "Voc� quer um peda�o de mim?";
		mes "Pode vir!^000000";
		next;
		mes "[Homem B�bado]";
		mes "Ent�o ele ficou todo assustado, e correu de medo!";
		mes "Hahahaha!";
		mes "Eu acho que pare�o bem forte, n�o pare�o?";
		next;
		emotion(e_lv,0,"Mulher B�bada#1");
		emotion(e_lv,0,"Mulher B�bada#2");
		mes "[Mulheres]";
		mes "Ah, meu Deus!";
		mes "Voc� � t�o legal.!";
		next;
		mes "[Homem B�bado]";
		mes "Bem...";
		mes "Qualquer um poderia ter feito isso...";
		mes "Eu apenas estava sendo um cavalheiro.";
		mes "Hahahah, isso mesmo!";
		close;
	}
}
ve_in,232,117,5	script	Mulher B�bada#1	4_F_DESERT,{
	mes "[Mulher B�bada]";
	mes "Este cara � bem chato, mas...";
	mes "Eu consigo beber de gra�a se eu ficar conversando com ele.";
	close;
}
ve_in,234,115,3	script	Mulher B�bada#2	4_F_DESERT,{
	mes "[Mulher B�bada]";
	mes "Esta taverna pode parecer luxuosa e maravilhosa.";
	mes "Mas as bebidas aqui fedem!";
	mes "Posso misturar bebidas melhor em casa, sem suar nem um pouco.";
	close;
}

// ------------------------------------------------------------------
ve_in,277,229,3	script	Arm�rio#vol	HIDDEN_NPC,{
	if (!checkweight(Broken_Thermometer,1)) {
		mes "^3355FFEspere um segundo!";
		mes "Agora, voc� est� carregando muitas coisas com voc�.";
		mes "Por favor volte depois de usar o Servi�o Kafra para armazenar alguns de seus itens.^000000";
		close;
	} else if (aru_vol == 8) {
		if (!countitem(Broken_Thermometer)) {
			mes "^3355FFVoc� encontrou o pir�metro dentro do arm�rio.^000000";
			getitem(Broken_Thermometer,1);
			close;
		} else {
			mes "^3355FFEst� cheio de lixo neste arm�rio!^000000";
			close;
		}
	} else {
		mes "^3355FFEst� cheio de lixo neste arm�rio!^000000";
		close;
	}
}

// ------------------------------------------------------------------
thor_v01,37,234,3	script	Superf�cie Quente#1	HIDDEN_NPC,{
	if (aru_vol == 8) {
		if (countitem(Broken_Thermometer) && countitem(File01)) {
			mes "^3355FFVoc� usa o pir�metro para checar a temperatura desta superf�cie aqui no ch�o do vulc�o.^000000";
			next;
			mes "^3131FFBeep-- Beep-- Bee-^000000";
			next;
			mes "3131FFTemperatura Atual: 2300�C^000000";
			next;
			mes "^3355FFVoc� registra a temperatura em seu relat�rio.^000000";
			changequest(2117,2118);
			aru_vol = 9;
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu deveria tirar mais medi��es de temperatura antes de eu apresentar este relat�rio.";
			mes "S� para ter certeza absoluta.";
			close;
		} else {
			mes "^3355FFVoc� precisa do pir�metro e do relat�rio para medir e registrar a temperatura da superf�cie deste terreno.^000000";
			close;
		}
	} else {
		mes "^3355FFEsta parte do ch�o emite um intenso calor que vai at� o seu rosto.^000000";
		close;
	}
}

// ------------------------------------------------------------------
thor_v02,165,37,3	script	Superf�cie Quente#2	HIDDEN_NPC,{
	if (aru_vol == 9) {
		if (countitem(Broken_Thermometer) && countitem(File01)) {
			mes "^3355FFVoc� usa o pir�metro para checar a temperatura desta superf�cie aqui no ch�o do vulc�o.^000000";
			next;
			mes "^3131FFBeep-- Beep-- Bee-^000000";
			next;
			mes "^3131FFTemperatura Atual: 2270�C^000000";
			next;
			mes "^3355FFVoc� registra a temperatura em seu relat�rio.^000000";
			changequest(2118,2119);
			aru_vol = 10;
			close;
		} else {
			mes "^3355FFVoc� precisa do pir�metro e do relat�rio para medir e registrar a temperatura da superf�cie deste terreno.^000000";
			close;
		}
	} else {
		mes "^3355FFEsta parte do ch�o emite um intenso calor que vai at� o seu rosto.^000000";
		close;
	}
}

// ------------------------------------------------------------------
thor_v02,170,100,3	script	Superf�cie Quente#3	HIDDEN_NPC,{
	if (aru_vol == 10) {
		if (countitem(Broken_Thermometer) && countitem(File01)) {
			mes "^3355FFVoc� usa o pir�metro para checar a temperatura desta superf�cie aqui no ch�o do vulc�o.^000000";
			next;
			mes "^3131FFBeep-- Beep-- Bee-^000000";
			next;
			mes "^3131FFTemperatura Atual: 2500�C^000000";
			next;
			mes "^3355FFVoc� registra a temperatura em seu relat�rio.^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu tirei medidas o bastante.";
			mes "Agora eu devo apresentar este relat�rio � base geol�gico.";
			changequest(2119,2120);
			aru_vol = 11;
			close;
		} else {
			mes "^3355FFVoc� precisa do pir�metro e do relat�rio para medir e registrar a temperatura da superf�cie deste terreno.^000000";
			close;
		}
	} else if (aru_vol == 11) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu tirei medidas o bastante.";
		mes "Agora eu devo apresentar este relat�rio � base geol�gico.";
		close;
	} else {
		mes "^3355FFEsta parte do ch�o emite um intenso calor que vai at� o seu rosto.^000000";
		close;
	}
}

// ------------------------------------------------------------------
que_thor,145,66,3	script	Guarda#vol::VeinsGuard	4_DST_SOLDIER,{
	if (aru_vol == 11) {
		mes "[Guarda]";
		mes "Somente pessoas autorizadas podem entrar nesta �rea.";
		mes "Identifique-se!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu sou um estudante trabalhando em uma pesquisa sobre as ordens do Diretor Geo para o Instituto de Pesquisas Geol�gicas de Veins.";
		mes "Voc� poderia por favor carimbar a aprova��o deste relat�rio de temperaturas para mim?";
		next;
		mes "[Guarda]";
		mes "Ah, entendo.";
		mes "Bem, eu n�o sou um dos que carimbam relat�rios.";
		mes "Entre e pe�a a Sahedi para ajudar voc�.";
		mes "Ele est� na aeronave a sul da esta��o de trem.";
		changequest(2120,2121);
		aru_vol = 12;
		close2;
		warp("thor_camp",248,190);
		end;
	} else if ((aru_vol > 11) && (aru_vol < 24)) {
		mes "[Guarda]";
		mes "Oh, voc� � aquele aluno do instituto.";
		mes "N�o acho estejamos esperando quaisquer relat�rios por enquanto.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, n�s percebemos que os instrumentos que n�s usamos estavam com defeito.";
		mes "Ent�o temos de revisar nosso relat�rio.";
		next;
		mes "[Guarda]";
		mes "Suas ferramentas quebraram na primeira vez?";
		mes "Ok, ok, eu posso entender isto.";
		mes "Tudo bem, voc� pode passar.";
		close2;
		warp("thor_camp",248,190);
		end;
	}
	mes "[Guarda]";
	mes "Quem � voc�?!";
	close;
}
que_thor,136,66,3	duplicate(VeinsGuard)	Guarda#vol2	4_DST_SOLDIER
que_thor,127,60,5	duplicate(VeinsGuard)	Guarda#vol3	4_DST_SOLDIER

// ------------------------------------------------------------------
thor_camp,250,104,3	script	Sahedi#vol	4_M_RASWORD,{
	if (aru_vol == 12) {
		mes "[Sahedi]";
		mes "Sinto muito, mas n�o acho que eu conhe�a voc�.";
		mes "Somente pessoas autorizadas s�o permitidas nesta �rea.";
		mes "Ent�o se voc� n�o tem nenhum motivo para estar aqui...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu sou um estudante trabalhando em uma pesquisa sobre as ordens do Diretor Geo para o Instituto de Pesquisas Geol�gicas de Veins.";
		mes "Voc� poderia por favor carimbar a aprova��o deste relat�rio de temperaturas para mim?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Um, Geo est� doente agora, ent�o por isto ele me pediu para preencher este formul�rio de de relat�rio e apresent�-lo a voc�s, para ele.";
		next;
		mes "[Sahedi]";
		mes "Ah, ent�o por isto que o relat�rio est� atrasado desta vez, lamento em escutar isto.";
		mes "E eu pensando que ele estava gastando seu tempo com mulheres e �lcool...";
		next;
		mes "[Sahedi]";
		mes "Vejamos...";
		next;
		emotion(e_omg);
		mes "[Sahedi]";
		mes "Por que a temperatura est� t�o alta?!";
		mes "N�s j� tivemos poucos relat�rios como este no passado, mas...";
		mes "Isto �...";
		mes "O qu�o ruim � isto?";
		next;
		emotion(e_swt2,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh... Oh, n�o!";
		mes "Yikes! Eu acho que se isto ficar muito mais alto do que o normal...";
		mes "Isto poderia ser ruim?";
		next;
		mes "[Sahedi]";
		mes "O que eu devo fazer?";
		mes "Eu devo ativar o alarme?";
		mes "Eu n�o...";
		mes "Eu n�o quero morrer!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� quer por favor se acalmar primeiro.";
		mes "Eu vou dar uma olhada pela base.";
		mes "Ent�o por favor n�o diga nada que possa fazer com que algu�m entre em p�nico agora.";
		next;
		mes "[Sahedi]";
		mes "Ok...";
		mes "Por favor v� logo, e veja se esta base estar� a salvo de algum desastre.";
		changequest(2121,2122);
		aru_vol = 13;
		delitem(File01,1);
		close;
	}
	else if ((aru_vol > 12) && (aru_vol < 23)) {
		mes "[Sahedi]";
		mes "Ent�o, n�s estamos em algum perigo?";
		mes "Parece que este vulc�o pode entrar em erup��o a qualquer momento?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, eu n�o acabei de investigar tudo ainda.";
		mes "Voc� poderia por favor esperar um pouco mais?";
		next;
		mes "[Sahedi]";
		mes "Claro, claro.";
		mes "S� tenha certeza de que voc� checou de verdade tudo pelo vulc�o para mim, ok?";
		close;
	} else if (aru_vol == 23) {
		mes "[Sahedi]";
		mes "Ent�o, n�s estamos em algum perigo?";
		mes "Parece que este vulc�o pode entrar em erup��o a qualquer momento?";
		next;
		while (true) {
			if (select("Sim","N�o") == 1) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Eu acho que eu n�o posso esconder isto de voc�...";
				mes "A recente atividade deste vulc�o recentemente tem sido...";
				mes "Preocupante.";
				next;
				break;
			} else {
				mes "^3355FFEspere...";
				mes "Voc� devia tirar vantagem desta situa��o.";
				mes "Esta pode ser sua chance de intervir no conflito entre os dois pa�ses!^000000";
				next;
				mes "^3355FFVoc� n�o ir� poder� parar a guerra.";
				mes "Mas talvez voc� possa distra�-los com a amea�a de um desastre natural...^000000";
				next;
			}
		}
		emotion(e_omg);
		mes "[Sahedi]";
		mes "Huh? Voc� est� falando s�rio?";
		mes "O Vulc�o de Thor ir� entrar em erup��o?!";
		mes "N�s-n�s temos de dar o fora daqui!";
		mes "Poderia ser um desastre, como o que aconteceu no passado!";
		next;
		emotion(e_flash,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, concordo.";
		mes "Tem uma boa chance de acontecer uma...";
		mes "explos�o que poder� causar um monte de danos colaterais.";
		next;
		mes "[Sahedi]";
		mes "Quais s�o as nossas chances?";
		mes "Quanto tempo n�s temos para evacuar?";
		next;
		emotion(e_flash,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem... Uh...";
		mes "De acordo com as minhas...";
		mes "An�lises...";
		mes "H� uma chance de 75% de acontecer uma erup��o nos pr�ximos 30 dias.";
		next;
		mes "[Sahedi]";
		mes "O que?!";
		mes "N�s devemos relatar isto ao sumo sacerdote imediatamente!";
		mes "Aitra!";
		next;
		enablenpc("Aitra#vol");
		mes "[Aitra]";
		mes "Sim, senhor!";
		next;
		mes "[Sahedi]";
		mes "Esta � uma emerg�ncia.";
		mes "Leve esta mensagem para o sumo sacerdote o mais r�pido poss�vel.";
		mes "E n�o se esque�a de embrulhar todas as suas coisas antes de sair.";
		next;
		mes "[Aitra]";
		mes "Huh?";
		mes "...Sim, senhor.";
		next;
		disablenpc("Aitra#vol");
		mes "[Sahedi]";
		mes "Oh, isto � um pesadelo...";
		mes "Por favor voc� poderia levar este relat�rio para o seu diretor, Geo?";
		mes "Espero que ele tenha algum conselho sobre o que n�s devemos fazer sobre este desastre...";
		changequest(2128,60211);
		aru_vol = 24;
		getitem(File01,1);
		close;
	} else {
		mes "[Sahedi]";
		mes "Argh, I'm so busy!";
		close;
	}
}

// ------------------------------------------------------------------
thor_camp,187,228,5	script	Coronel Vito#1	4_M_DST_MASTER,{
	if (aru_vol == 13) {
		mes "[????]";
		mes "Voc�...!";
		mes "O que voc� est� fazendo parado a�?!";
		mes "Voc� n�o foi posto para transportar carga?";
		mes "Aten��o para as ordens!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� est� falando comigo?";
		mes "N�o, eu sou do Instituto de Pes--";
		next;
		mes "[Coronel Vito]";
		mes "Olhe para voc�. Voc� ainda n�o colocou seu uniforme.";
		mes "Ainda � um novato, eh?";
		mes "Parece que eu vou ter de treinar voc� pessoalmente como um de nossos cavaleiros sagrados!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas eu n�o--";
		next;
		mes "[Coronel Vito]";
		mes "Voc� deveria estar honrado em ter a rara oportunidade de ser treinado por mim, o grande Coronel Vito.";
		mes "Eu irei lhe transformar em um verdadeiro guerreiro que luta por Freya!";
		mes "Agora me siga!";
		changequest(2122,2123);
		aru_vol = 14;
		close2;
		warp("thor_camp",156,68);
		end;
	} else if (aru_vol == 14) {
		mes "[Coronel Vito]";
		mes "O que voc� est� fazendo parado a�?!";
		mes "N�o v� para longe!";
		mes "Vamos!";
		close2;
		warp("thor_camp",156,68);
		end;
	}
	end;
}

// ------------------------------------------------------------------
// ------------------------------------------------------------------
thor_camp,155,175,7	script	Coronel Vito#2	4_M_DST_MASTER,{
	if (aru_vol == 13) {
		mes "[????]";
		mes "Voc�...!";
		mes "O que voc� est� fazendo parado a�?!";
		mes "Voc� n�o foi posto para transportar carga?";
		mes "Aten��o para as ordens!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� est� falando comigo?";
		mes "N�o, eu sou do Instituto de Pes--";
		next;
		mes "[Coronel Vito]";
		mes "Olhe para voc�.";
		mes "Voc� ainda n�o colocou seu uniforme.";
		mes "Ainda � um novato, eh?";
		mes "Parece que eu vou ter de treinar voc� pessoalmente como um de nossos cavaleiros sagrados!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas eu n�o--";
		next;
		mes "[Coronel Vito]";
		mes "Voc� deveria estar honrado em ter a rara oportunidade de ser treinado por mim, o grande Coronel Vito.";
		mes "Eu irei lhe transformar em um verdadeiro guerreiro que luta por Freya!";
		mes "Agora me siga!";
		changequest(2122,2123);
		aru_vol = 14;
		close2;
		warp("thor_camp",156,68);
		end;
	} else if (aru_vol == 14) {
		mes "[Coronel Vito]";
		mes "O que voc� est� fazendo";
		mes "parado a�?!";
		mes "N�o v� para longe! Vamos!";
		close2;
		warp("thor_camp",156,68);
		end;
	}
	end;
}

// ------------------------------------------------------------------
thor_camp,159,74,3	script	Coronel Vito#3	4_M_DST_MASTER,{
	if (aru_vol == 14) {
		mes "[Coronel Vito]";
		mes "Eu sou o Coronel Vito, e eu estou no encarregado da base de Arunafeltz aqui no Vulc�o de Thor.";
		mes "Qual o seu nome, soldado?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes strcharinfo(PC_NAME)+", senhor.";
		next;
		mes "[Coronel Vito]";
		mes "Hmpf! Este � um nome que o enfraquece!";
		mes "Eu posso dizer que sua mente e corpo s�o muito fracas!";
		mes "Isto n�o vai dar certo.";
		mes "Como � que vai ser digno de servir a bela e graciosa Freya?";
		next;
		mes "[Coronel Vito]";
		mes "Voc� precisa treinar mais.";
		mes "Descanse um pouco, e prepare-se.";
		mes "N�s iremos come�ar assim que voc� estiver pronto.";
		aru_vol = 15;
		close;
	} else if (aru_vol == 15) {
		mes "[Coronel Vito]";
		mes "Primeiro, n�s precisamos cuidar desta sua mente fraca.";
		mes "Este primeiro exerc�cio de treinamento ter� como base a fala.";
		next;
		while (true) {
			mes "[Coronel Vito]";
			mes "Quest�o N� 1!";
			mes "Por quem n�s lutamos?";
			mes "Por quem n�s vivemos?";
			next;
			if (select("Odin","Freya","Thor") == 2) {
				break;
			}
			mes "[Coronel Vito]";
			mes "Seu idiota!";
			percentheal(-10,0);
			specialeffect(EF_HIT2,AREA,playerattached());
			next;
		}
		mes "[Coronel Vito]";
		mes "Correto!";
		mes "Freya n�o � apenas uma deusa do amor, mas ela � tamb�m uma deusa da guerra.";
		mes "Estamos em uma sagrada miss�o de recuperar as partes do Cora��o de Ymir em seu nome.";
		next;
		mes "[Coronel Vito]";
		mes "Freya ficou bastante ferida na guerra entre os deuses, humanos, e dem�nios.";
		mes "Odin, o l�der dos deuses, tentou ajud�-la, mas mesmo o seu poder n�o era suficiente.";
		next;
		mes "[Coronel Vito]";
		mes "Odin a avisou para que ela pegasse o Cora��o de Ymir.";
		mes "Para que ela pudesse recuperar totalmente seus poderes.";
		mes "� por isso que estamos nos preparando para a guerra: � preciso obter o Cora��o de Ymir para Freya!";
		next;
		mes "[Coronel Vito]";
		mes "VOC� ENTENDEU?!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "Agora, h� um pa�s chamado o Reino de Rune-Midgard que � cheio de tolos.";
		mes "Seus antepassados nos consideraram como hereges e nos expulsou para esta terra deserta..";
		next;
		mes "[Coronel Vito]";
		mes "N�o podemos perdoar como eles nos negaram a nossa liberdade de culto a Freya.";
		mes "Nosso povo ter� vingan�a sobre eles.";
		mes "Marque minhas palavras, soldado.";
		mes "Agora, repita comigo.";
		next;
		mes "[Coronel Vito]";
		mes "Eu, "+strcharinfo(PC_NAME)+",";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu, "+strcharinfo(PC_NAME)+",";
		next;
		while (true) {
			mes "[Coronel Vito]";
			mes "^FF0000como servidor devotado da Deusa Freya";
			next;
			input(.@input$);
			.@answer$ = "como servidor devotado da Deusa Freya";
			if (.@input$ == .@answer$) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "como um servidor devotado da Deusa Freya, a padroeira da grande Arunafeltz,^000000";
				next;
				break;
			} else {
				mes "[Coronel Vito]";
				mes "Errado! Tente novamente!";
				next;
			}
		}
		while (true) {
			mes "[Coronel Vito]";
			mes "^FF0000juro, por minha honra, derrotar nosso inimigo mortal";
			next;
			input(.@input$);
			.@answer$ = "juro, por minha honra, derrotar nosso inimigo mortal";
			if (.@input$ == .@answer$) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "juro, por minha honra, derrotar nosso inimigo mortal, o Reino de Rune-Midgard.";
				next;
				break;
			} else {
				mes "[Coronel Vito]";
				mes "Errado! Tente novamente!";
				next;
			}
		}
		while (true) {
			mes "[Coronel Vito]";
			mes "^FF0000N�o terei miseric�rdia^000000";
			next;
			input(.@input$);
			.@answer$ = "N�o terei miseric�rdia";
			if (.@input$ == .@answer$) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "N�o terei miseric�rdia.";
				mes "Com nada que ficar na minha m�o.^000000";
				next;
				break;
			} else {
				mes "[Coronel Vito]";
				mes "Errado! Tente novamente!";
				next;
			}
		}
		while (true) {
			mes "[Coronel Vito]";
			mes "^FF0000Dedicarei toda a minha vida^000000";
			next;
			input(.@input$);
			.@answer$ = "Dedicarei toda a minha vida";
			if (.@input$ == .@answer$) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Dedicarei toda a minha vida para recupera��o total da Deusa Freya.^000000";
				next;
				break;
			} else {
				mes "[Coronel Vito]";
				mes "Errado! Tente novamente!";
				next;
			}
		}
		while (true) {
			mes "[Coronel Vito]";
			mes "^FF0000Abaixo o Reino de Rune-Midgard!^000000";
			next;
			input(.@input$);
			.@answer$ = "Abaixo o Reino de Rune-Midgard!";
			if (.@input$ == .@answer$) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Abaixo o Reino de Rune-Midgard!^000000";
				next;
				break;
			} else {
				mes "[Coronel Vito]";
				mes "Errado! Tente novamente!";
				next;
			}
		}
		mes "[Coronel Vito]";
		mes "Bom.";
		mes "Agora voc� sabe o tipo de atitude que voc� deve ter como um Guerreiro Sagrado a servi�o de Freya.";
		mes "Isso � tudo do primeiro exerc�cio, mas ainda tem um exerc�cio a mais.";
		changequest(2123,2124);
		aru_vol = 16;
		close;
	} else if (aru_vol == 16) {
		mes "[Coronel Vito]";
		mes "Antes de n�s come�armos o 2� exerc�cio de treinamento.";
		mes "Eu tenho um dever a lhe atribuir.";
		mes "Encontre a enorme zona de canaliza��o a norte do edif�cio e localize quaisquer m�quinas quebradas.";
		aru_vol = 17;
		close;
	} else if (aru_vol == 17) {
		mes "[Coronel Vito]";
		mes "Inspecione as m�quinas na zona de canaliza��o a norte deste edif�cio.";
		mes "N�o fique parado a�: mexa-se!";
		close;
	} else if (aru_vol == 18) {
		mes "[Coronel Vito]";
		mes "Bom trabalho. Lembre-se de que a sua primeira prioridade � verificar o painel de controle.";
		mes "Ele precisa ser regularmente inspecionado.";
		mes "Uma vez que ele controla os recursos energ�ticos da base.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "Agora � hora de executar o segundo exerc�cio de treinamento que ir� fortalecer seu corpo.";
		mes "V� o boneco na sua frente?";
		mes "Pratique socando ele 10 vezes. Vai!";
		changequest(2125,2126);
		aru_vol = 19;
		next;
		if (select("Sim, senhor!","O que voc� quer dizer com socar") == 1) {
			mes "[Colonel Vito]";
			mes "Foque sua energia em seu grito quando atacar!";
			mes "Socar!";
			mes "10 Vezes! Fa�a isso!";
			close;
		}
		mes "[Coronel Vito]";
		mes "Socar...? � um soco de m�o.";
		mes "Voc� atacar o inimigo com o fim de sua m�o como uma l�mina.";
		mes "Como voc� se juntou ao ex�rcito sem saber isto?";
		next;
		mes "[Coronel Vito]";
		mes "Foque sua energia em seu grito quando atacar!";
		mes "Socar! 10 Vezes! Fa�a isso!";
		close;
	} else if (aru_vol == 20) {
		mes "[Coronel Vito]";
		mes "Quanto mais voc� treina, mais forte voc� fica.";
		mes "Quando voc� cresce com for�a, ent�o se torna um soldado das tropas Sagradas de Freya.";
		mes "Treine todos os dias, ent�o voc� sempre ficar� forte!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "Isso � tudo para a seu treinamento.";
		mes "Se voc� tiver alguma d�vida sobre a vida na base.";
		mes "V� perguntar a Sahedi fora deste edif�cio.";
		mes "Voc� est� despensado.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "^333333Bem...";
		mes "Eu acho que eu devo voltar para Sahedi.";
		mes "Felizmente, ele vai pensar de mim como um pesquisador geol�gico, em vez de como um soldado.^000000";
		changequest(2126,2127);
		aru_vol = 21;
		close;
	} else {
		mes "[Coronel Vito]";
		mes "Temos de estar sempre atentos em nosso treinamento.";
		mes "Voc� nunca saber� quando Freya vai nos chamar para o combate!";
		close;
	}
}

// ------------------------------------------------------------------
thor_camp,109,167,3	script	Painel de Controle#vol	HIDDEN_NPC,{
	if (aru_vol == 17) {
		mes "^3355FFEste Painel de controle controla os recursos de energia para a Base do Vulc�o de Thor.";
		mes "Ajudando ele a executar opera��es mesmo abaixo do solo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Todos estes canos com rocha derretida passando por eles...";
		mes "Acho que o calor � aquilo que � fonte de energia para a base.";
		mes "Isso � realmente uma id�ia inteligente.";
		next;
		mes "^3355FFO painel de controle emite ru�dos mec�nicos e parece estar funcionando muito bem.";
		mes "Tudo parece estar em bom estado.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sem problemas aqui.";
		mes "Eu acho que posso voltar para o Coronel.";
		changequest(2124,2125);
		aru_vol = 18;
		close;
	}
	end;
}

// ------------------------------------------------------------------
thor_camp,150,65,3	script	Boneco#1::VeinsDummy	HIDDEN_NPC,{
	if (aru_vol == 19) {
		mes "^3355FF� um boneco para treinamento parece que � um inimigo a ser derrotado.";
		mes "Sua frente � marcado com o emblema do Reino de Rune-Midgard.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eles realmente odeiam o Reino de Rune-Midgard...";
		mes "^333333Tecnicamente, eu n�o deveria esta fazendo isto.";
		mes "Ser� que isto n�o � considerado como trai��o?^000000";
		next;
		mes "[Coronel Vito]";
		mes "Eu n�o consigo escut�-lo, soldado!";
		mes "Fa�a sua vos ser escutada claramente!";
		mes "Agora... Execute o Ataque!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, senhor!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Um!!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Dois!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Tr�s!!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quatro!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Cinco!!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Seis!!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sete!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oito!!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Nove!";
		next;
		specialeffect EF_HIT2;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Dez!";
		aru_vol = 20;
		close;
	} else if (aru_vol == 20) {
		mes "^3355FF*THUD*^000000";
		specialeffect(EF_HIT2);
		emotion(e_omg,1);
		next;
		mes "[Coronel Vito]";
		mes "Soldado...";
		mes "Quantas vezes eu ordenei para que voc� socasse o boneco?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "10 vezes, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "E quantas vezes voc� socou o boneco?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "11 vezes, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "Inaceit�vel!";
		mes "Escute suas ordens desta vez, e fa�a isso de novo e fa�a como eu lhe pedi!";
		close;
	} else {
		mes "[Coronel Vito]";
		mes "Inaceit�vel!";
		mes "Escute suas ordens desta vez, e fa�a isso de novo e fa�a como eu lhe pedi!";
		close;
	}
}
thor_camp,156,65,3	duplicate(VeinsDummy)	Boneco#2	HIDDEN_NPC
thor_camp,162,65,3	duplicate(VeinsDummy)	Boneco#3	HIDDEN_NPC
thor_camp,150,57,3	duplicate(VeinsDummy)	Boneco#4	HIDDEN_NPC
thor_camp,156,57,3	duplicate(VeinsDummy)	Boneco#5	HIDDEN_NPC
thor_camp,162,57,3	duplicate(VeinsDummy)	Boneco#6	HIDDEN_NPC

// ------------------------------------------------------------------
thor_camp,172,132,0	script	#sita_vol	FAKE_NPC,3,3,{
	OnTouch:
	if (aru_vol == 21) {
		mes "^3355FFH� uma corrente de magma descendo por seu caminho sob o arame farpado.^000000";
		next;
		mes "^3355FFVoc� pode ouvir o fraco som das marteladas.";
		mes "Como se ferro estivesse sendo manufaturado no subsolo bem fundo.^000000";
		aru_vol = 22;
		close;
	}
	end;
}

// ------------------------------------------------------------------
thor_camp,148,310,0	script	#buki_vol	FAKE_NPC,5,5,{
	OnTouch:
	if (aru_vol == 22) {
		mes "^3355FFH� pessoas carregando muitas caixas pesadas de madeira marcadas com o selo da Rep�blica de Schwaltzvalt.";
		mes "Eles devem conter suprimentos militares para a base.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu devo ir at� Sahedi agora.";
		changequest(2127,2128);
		aru_vol = 23;
		close;
	}
	end;
}

// ------------------------------------------------------------------
thor_camp,248,104,5	script	Aitra#vol	4_DST_SOLDIER,{
	end;
	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}

// ------------------------------------------------------------------
ve_in,281,214,3	script	Estante#vol	HIDDEN_NPC,{
	if (aru_vol == 8) {
		if (!countitem(File01) && !checkweight(File01,1)) {
			mes "^3355FFVoc� encontra uma s�rie de relat�rios cuidadosamente colocados entre alguns livros nesta estante.^000000";
			getitem(File01,1);
			close;
		} else {
			mes "^3355FFH� um monte de livros dispersos e cadernos preenchidos nesta estante.^000000";
			close;
		}
	} else if ((aru_vol > 8) && (aru_vol < 25)) {
		mes "^3355FFH� um monte de livros dispersos e cadernos preenchidos nesta estante.^000000";
		close;
	} else if (aru_vol == 25) {
		mes "^3355FFH� um monte de livros dispersos e cadernos preenchidos nesta estante.^000000";
		next;
		mes "^3355FFDepois de uma olhada.";
		mes "Voc� v� a caixa rocha meio empoeirada de que Geo estava falando.";
		mes "Voc� fecha seus olhos, e p�e a m�o dentro da caixa roxa de coisas boas do Geo.^000000";
		next;
		changequest(60212,60213);
		aru_vol = 26;
		.@box_box = rand(1,20);
		if (.@box_box < 7) {
			getitem(Random_Quiver,1);
		} else if ((.@box_box > 6) && (.@box_box < 9)) {
			getitem(Sway_Apron,1);
		} else if ((.@box_box > 8) && (.@box_box < 20)) {
			getitem(Giggling_Box,5);
		} else {
			getitem(Bloody_Dead_Branch,1);
		}
		getexp(800000,0);
		mes "^3355FFBem, voc� fez tudo o que pode aqui.";
		mes "Agora seria uma boa hora para voltar ao Sumo Sacerdote Zhed.^000000";
		close;
	} else {
		mes "^3355FFH� um monte de livros dispersos e cadernos preenchidos nesta estante.^000000";
		close;
	}
}

// ------------------------------------------------------------------
ra_temin,73,126,1	script	Escadarias#vol1	HIDDEN_NPC,{
	if (aru_vol == 5) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espera, eu posso usar esta escada para dar o fora daqui!";
		mes "Eu iria pelo caminho normal mas seria pego se eu passasse pelos guardas...";
		next;
		if (select("Subir pela Escada","Cancelar") == 1) {
			mes "^3355FFVoc� subiu a escada ao longo da parede e saiu.^000000";
			close2;
			warp("ra_temin",74,136);
			end;
		}
		mes "^3355FFVoc� decidiu n�o subir a escada agora.^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
thor_camp,246,191,3	script	Guarda#goto	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "O que foi agora?";
	mes "Voc� n�o pode ver que estou ocupado?";
	next;
	if (select("Deixe-me sair","Sinto muito") == 1) {
		mes "[Soldado]";
		mes "V� r�pido, e saia!";
		close2;
		warp("que_thor",145,60);
		end;
	}
	mes "[Soldado]";
	mes "Se voc� sente muito,";
	mes "pare de me atrapalhar!";
	close;
}

// ------------------------------------------------------------------
thor_camp,62,98,0	script	#volbq	FAKE_NPC,5,5,{
	OnTouch:
	mes "^3355FFH� um homem velho usando roupas de sumo sacerdote na sua frente.^000000";
	next;
	mes "^3355FF� melhor voc� n�o fazer nada de evidente na frente dele.^000000";
	close;
}
