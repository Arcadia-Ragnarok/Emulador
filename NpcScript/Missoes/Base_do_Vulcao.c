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
| - Info: Quest da Base do Vulcão de Thor                           |
| * Necessário conclusão da quest do templo de rachel.              |
| * Necessário conclusão da quest do Camelo passo 25 para iniciar.  |
| * Início em ra_temin,277,159 (Sumo Sacerdote Zhed)                |
\*-----------------------------------------------------------------*/

ra_temin,40,124,3	script	Adepta#vol	4_F_TRAINEE,{
	mes "[Lamir]";
	mes "^333333*Suspiro*^000000";
	mes "Sumo Sacerdote Vildt deixou muita comida após terminar de comer.";
	mes "Ele não aprendeu a acabar com toda a sua comida?";
	next;
	mes "[Lamir]";
	mes "Você sabe, a minha mãe sempre me ameaçava dizendo que ela podia me forçar a me casar com Karlum.";
	mes "Se eu não terminasse toda a minha comida quando eu era criança.";
	mes "Eu aprendi a não deixar nenhuma sobra desta maneira.";
	next;
	select("Quem é Karlum?");
	mes "[Lamir]";
	mes "Karlum? Oh, ele vem me seguindo desde que nós éramos crianças, declarando o seu amor e coisas do tipo.";
	mes "Mesmo depois de crescido, ele continua teimoso sobre este assunto.";
	next;
	mes "[Lamir]";
	mes "Ugh! Até hoje, ele me deixa muito nervosa!";
	mes "Quero dizer, é ótimo que ele seja um segurança do escritório do Sumo Sacerdote Vildt, mas vamos lá!";
	mes "Por que ele não pode se preocupar com outra garota?";
	if (aru_vol == 1) {
		aru_vol = 2;
	}
	close;
}

// ------------------------------------------------------------------
ra_temin,87,133,1	script	Soldado de Rachel#vol1	4_M_RASWORD,{
	if (aru_vol == 2) {
		mes "[Soldado Karlum]";
		mes "O Sumo Sacerdote Vildt não está aqui agora.";
		mes "Por favor volte aqui depois se quiser vê-lo.";
		next;
		select("Pensar em uma Distração");
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Este cara não vai me deixar passar.";
		mes "Vamos ver...";
		mes "Há um jeito de eu conseguir passar por ele?";
		mes "O que, ou ^FF0000Quem^000000, poderia o distrair?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espera um segundo...";
		mes "É claro!";
		mes "Eu devo falar com ele sobre...";
		next;
		input(.@input$);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Espera um segundo...";
		mes "É claro!";
		mes "Eu devo falar com ele sobre ^FF0000"+.@input$+"^000000 !!";
		next;
		if (.@input$ != "Lamir") {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "O que...?";
			mes "De onde é que eu tiro estas idéias?";
			mes "Isto não faz sentido algum...";
			close;
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Está Certo!";
		mes "Eu falei com Lamir algum tempo atrás.";
		mes "Se ela está certa, então este cara deve ser Karlum.";
		mes "O cara que está totalmente apaixonado por ela.";
		mes "Hmm...";
		mes "Eu já sei o que eu vou dizer...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "^333333*Ahem*^000000 Com licença, mas por acaso você é Karlum?";
		mes "Eu tenho uma mensagem para você.";
		next;
		mes "[Soldado Karlum]";
		mes "Uma mensagem para mim?";
		mes "É por isto que você está andando por aqui?";
		mes "Bem, qual é a mensagem.";
		mes "Eu não posso ficar muito tempo fora do meu trabalho...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você conhece ^3131FFLamir^000000, certo?";
		next;
		emotion(e_omg);
		mes "[Soldado Karlum]";
		mes "Lamir? Oh... Meu.";
		mes "Oh não!";
		mes "Algo de ruim aconteceu a ela?";
		mes "Rápido, fale logo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Não, não é nada disto.";
		mes "Ela só me disse que tinha";
		mes "algo importante para";
		mes "lhe dizer, e que você deve ir";
		mes "vê-la quando tiver tempo livre.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu tentei perguntar a ela mais coisas, mas ela apenas mudava de assunto e ignorava.";
		mes "Há algo acontecendo entre vocês dois?";
		next;
		mes "[Soldado Karlum]";
		mes "...Eu não acredito nisto.";
		mes "Finalmente.";
		mes "Depois de todos estes anos.";
		mes "Ela sente por mim o mesmo que eu sinto por ela!";
		mes "Minha serenata da meia noite a poucos dias atrás deve ter tocado o coração dela.";
		next;
		mes "[Soldado Karlum]";
		mes "Que se dane esse trabalho estúpido!";
		mes "Eu fiz minha escolha, e eu escolho o amor verdadeiro!";
		mes "Não posso mais deixar Lamir esperando!";
		aru_vol = 3;
		donpcevent("vol_time::OnEnable");
		close2;
		end;
	} else if ((aru_vol > 2) && (aru_vol < 5)) {
		mes "[Soldado Karlum]";
		mes "Ei! Lamir me disse que ela não queria me ver de modo algum!";
		mes "Qual é o seu jogo, huh?";
		mes "Você acha que eu sou fácil de ser enganado?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O que?";
		mes "Foi isto que aconteceu?";
		mes "Eu poderia jurar qu--Aaah.";
		mes "Eu entendi agora.";
		mes "Ela deve estar dando uma de difícil.";
		mes "Isto significa que ela está gostando muuuuuuito de você.";
		next;
		mes "[Soldado Karlum]";
		mes "Ah! Isto faz bastante sentido!";
		mes "Então é por isto que ela me trata deste jeito! Hahaha!";
		mes "Eu já devia ter percebido isto antes!";
		mes "Pois bem, devo ir até ela e jogar difícil também!";
		close;
	} else {
		mes "[Soldado Karlum]";
		mes "O Sumo Sacerdote Vildt não está aqui agora.";
		mes "Por favor volte aqui depois se quiser vê-lo.";
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
	mapannounce("ra_temin","Soldado Karlum: Lamir! Aqui é o Karlum! Seu amor está aqui!",bc_map,"0xFFCE00");
	end;

	OnTimer15000:
	mapannounce("ra_temin","Lamir: Karlum? O que você está fazendo aqui?",bc_map,"0xFFCE00");
	end;

	OnTimer20000:
	mapannounce("ra_temin","Soldado Karlum: Lamir, você pode parar de fingir agora. Eu percebi que sua frieza é para mascarar o seu Amor.",bc_map,"0xFFCE00");
	end;

	OnTimer30000:
	mapannounce("ra_temin","Lamir: Do que você está falando? Lamento, Karlum, mas eu não sinto nada de especial por você.",bc_map,"0xFFCE00");
	end;

	OnTimer35000:
	mapannounce("ra_temin","Soldado Karlum: Eu sei, é embaraçoso confessar seus verdadeiros sentimentos.",bc_map,"0xFFCE00");
	end;

	OnTimer40000:
	mapannounce("ra_temin","Soldado Karlum: No entanto, não posso negar que sua timidez está quebrando meu coração em pedaços..",bc_map,"0xFFCE00");
	end;

	OnTimer45000:
	mapannounce("ra_temin","Lamir: Karlum, quando você vai perceber que eu não sinto, e nunca sentirei amor por você?",bc_map,"0xFFCE00");
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
		mes "^3355FFVocê encontrou um vaso gigante cheio de flores bonitas que parecem ter sido colhidas recentemente de um jardim.^000000";
		next;
		if (select("Destruir Vaso","Não Destruir Vaso") == 1) {
			mes "^3355FFVocê pega o vaso de flores com as mãos, e em seguida o joga no chão.^000000";
			next;
			mes "^3355FF*Crash!*^000000";
			next;
			mes "[Soldado Krodger]";
			mes "Quem está ai?!";
			disablenpc("Soldado de Rachel#vol2");
			enablenpc("Soldado de Rachel#vol2_1");
			donpcevent("vol_time2::OnEnable");
			aru_vol = 4;
			disablenpc(strnpcinfo(NPC_NAME));
			close;
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Um monte de carinho foi posto ao arranjar estas flores...";
		mes "Eu não poderia suportar se eu perturbasse sua beleza.";
		next;
		mes "^3355FFE você fica apenas ali, olhando com um pouco de piedade.";
		mes "Mas não sente isso tudo como uma coisa patética.^000000";
		close;
	} else {
		mes "^3355FFVocê encontrou um vaso gigante cheio de flores bonitas que parecem ter sido colhidas recentemente de um jardim.^000000";
		close;
	}
}

// ------------------------------------------------------------------
ra_temin,82,133,7	script	Soldado de Rachel#vol2	4_M_RASWORD,5,2,{
	mes "[Soldado Krodger]";
	mes "O Sumo Sacerdote Vildt não está aqui agora.";
	mes "Por favor volte aqui depois se quiser vê-lo.";
	close;

	OnTouch:
	warp("ra_temin",85,137);
	close;
}

// ------------------------------------------------------------------
ra_temin,113,140,1	script	Soldado de Rachel#vol2_1	4_M_RASWORD,{
	mes "[Soldado Krodger]";
	mes "O que há de errado com este vaso?";
	mes "Eles sempre me mandam até aqui para limpar esta bagunça!";
	mes "Quero dizer, isso acontece tantas vezes.";
	mes "Eu não acho que isto seja acidental.";
	mes "O que você pensa destes vândalos?";
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
		mes "^3355FFVocê encontra uma pilha de relatórios designados ao sumo sacerdote dentro desta gaveta.^000000";
		next;
		if (select("Ver Relatórios","Cancelar") == 1) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Bem, talvez não seja a coisa mais certa a se fazer.";
			mes "Mas eu tenho a sensação de que eu deveria, pelo menos, dar uma olhada neste relatórios.";
			next;
			mes "^3355FFVocê começou a folhear os documentos, dando uma olhada em algo que lhe seja interessante.^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Ooh...";
			mes "Isto deve ser o";
			mes "eu estava procurando.";
			next;
			mes "^3355FFVocê pega o relatório etiquetado com ^000000\"Instituto de Pesquisas Geológicas de Veins\"^3355FF na capa.";
			mes "E depois você fecha a gaveta.^000000";
			changequest(2114,2115);
			aru_vol = 5;
			getitem(File01,1);
			close;
		}
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "É melhor deixar pra lá.";
		mes "Eu não tenho permissão para dentro destes arquivos.";
		close;
	} else if (aru_vol == 5) {
		if (!countitem(File01) && !checkweight(File01,1)) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Oh! Aqui está uma outra do relatório que eu precisava!";
			mes "Que sorte.";
			getitem(File01,1);
			close;
		} else {
			mes "^3355FFVocê encontra uma pilha";
			mes "de relatórios designados";
			mes "ao sumo sacerdote";
			mes "dentro desta gaveta.^000000";
			close;
		}
	} else {
		mes "^3355FFVocê encontra uma pilha";
		mes "de relatórios designados";
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
		mes "O chão está totalmente coberto por poeira.";
		mes "E muitas folhas de papel descartadas.^000000";
		next;
		mes "^3355FFUma folha de papel em particular chama sua atenção.";
		mes "Você a pega e começa a ler.^000000";
		next;
		mes "[Papel]";
		mes "^333333O inquérito regular Geológico foi agendado para daqui a uma semana.";
		mes "Envie seu relatório para nós o mais rápido possível.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Apesar do nome do remetente não estar nesta carta, eu posso adivinhar quem escreveu esta.";
		mes "Falando nisto...";
		mes "Aonde está o Geólogo?";
		aru_vol = 7;
		close;
	} else {
		mes "^3355FFEsta casa parece ter sido abandonada por um bom tempo.";
		mes "O chão está totalmente coberto por poeira.";
		mes "E muitas folhas de papel descartadas.^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
ve_in,233,116,3	script	Homem Bêbado#vol	4_M_HUOLDARMY,{
	if (aru_vol < 7) {
		mes "[Homem Bêbado]";
		mes "Então... ^333333*Urp*^000000";
		mes "Então eu disse...";
		next;
		mes "[Homem Bêbado]";
		mes "^3131FFEi, companheiro!";
		mes "Um homem usa suas costas para lugar, não seus punhos!";
		mes "Você quer um pedaço de mim?";
		mes "Pode vir!^000000";
		next;
		mes "[Homem Bêbado]";
		mes "Então ele ficou todo assustado, e correu de medo!";
		mes "Hahahaha!";
		mes "Eu acho que pareço bem forte, não pareço?";
		next;
		emotion(e_lv,0,"Mulher Bêbada#1");
		emotion(e_lv,0,"Mulher Bêbada#2");
		mes "[Mulheres]";
		mes "Ah, meu Deus!";
		mes "Você é tão legal.!";
		next;
		mes "[Homem Bêbado]";
		mes "Bem...";
		mes "Qualquer um poderia ter feito isso...";
		mes "Eu apenas estava sendo um cavalheiro.";
		mes "Hahahah, isso mesmo!";
		close;
	} else if (aru_vol == 7) {
		mes "[Homem Bêbado]";
		mes "Então...";
		mes "^333333*Urp*^000000";
		mes "Então eu disse...";
		next;
		mes "[Homem Bêbado]";
		mes "^3131FFEi, companheiro!";
		mes "Um homem usa suas costas para lugar, não seus punhos!";
		mes "Você quer um pedaço de mim?";
		mes "Pode vir!^000000";
		next;
		mes "[Homem Bêbado]";
		mes "Então ele ficou todo assustado, e correu de medo!";
		mes "Hahahaha!";
		mes "Eu acho que pareço bem forte, não pareço?";
		next;
		emotion(e_lv,0,"Mulher Bêbada#1");
		emotion(e_lv,0,"Mulher Bêbada#2");
		mes "[Mulheres]";
		mes "Ah, meu Deus!";
		mes "Você é tão legal.!";
		next;
		mes "[Homem Bêbado]";
		mes "Bem... Qualquer um poderia ter feito isso...";
		mes "Eu apenas estava sendo um cavalheiro.";
		mes "Hahahah, isso mesmo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença, mas você é o Diretor Executivo do Instituto de Pesquisas Geológicas de Veins?";
		next;
		mes "[Homem Bêbado]";
		mes "Sim, sou eu mesmo! Diretor executivo executivo, diretor adjunto, diretor, pesquisador, CEO, não...";
		mes "Não, espere, o último nome não soa direito.";
		mes "Eu sou tudo isso.";
		next;
		mes "[Homem Bêbado]";
		mes "Eu sou o diretor executivo...";
		mes "Eu sou u único que trabalha no instituto, com seriedade.";
		mes "Porque, o que você quer?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Uhh... Existem alguns avisos oficiais para você no seu escritório.";
		mes "Eu acho que você precisa fazer alguns relatórios que já deviam estar feitos?";
		mes "Eles parecem ser bem importantes.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Talvez...";
		mes "Talvez seja ^FF0000urgente^000000.";
		next;
		mes "[Homem Bêbado]";
		mes "O qu--? Ei, que dia é hoje?!";
		mes "Certo, certo, hora de começar a trabalhar.";
		mes "Justo quando eu estava gostando tanto!";
		mes "Argh, eu não queria ficar sóbrio nunca!";
		next;
		mes "[Homem Bêbado]";
		mes "Mas... Trabalhar é a única forma de suportar toda esta bebedeira...";
		mes "Isso é a vida, isso é a vida.";
		next;
		mes "[Mulheres]";
		mes "Aonde você está indo?";
		mes "Você não pode ficar um pouco mais e falar conosco?";
		mes "Por Favooooooor?";
		next;
		mes "[Homem Bêbado]";
		mes "Lamento, moças, mas o dever me chama.";
		mes "Hahahahahahha.";
		next;
		emotion(e_lv,0,"Mulher Bêbada#1");
		emotion(e_lv,0,"Mulher Bêbada#2");
		mes "[Mulheres]";
		mes "Por favor não vá.";
		next;
		mes "[Homem Bêbado]";
		mes "Ahem!";
		mes "Vamos ver.";
		mes "O que seria melhor...?";
		mes "..............................";
		mes "..............................";
		mes "..............................";
		next;
		mes "[Homem Bêbado]";
		mes "..............................";
		mes "..............................";
		mes "........................Certo!";
		next;
		mes "[Homem Bêbado]";
		mes "Ei, você.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim?";
		next;
		emotion(e_no1);
		mes "[Homem Bêbado]";
		mes "Eu decidi promover você a chefe de pesquisa do Instituto de Pesquisas Geológicas de Veins.";
		mes "Parabéns!";
		mes "Bem vindo a equipe, colega!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Huh...?";
		mes "Eu não entendo do que você está falando!";
		next;
		mes "[Homem Bêbado]";
		mes "Heh! Você devia estar agradecido por eu ter lhe aceitado como meu aluno!";
		mes "Todos os meus alunos tem orgulho de estudarem comigo, Geo, o maior geólogo do mundo!";
		mes "Bem, talvez...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, eu nunca.";
		next;
		mes "[Geólogo Geo]";
		mes "Ah-ah! Agora que você é meu aluno, eu espero que você trabalhe duro se você quer aprender algo.";
		mes "A Primeira coisa é ir ao meu escritório e resolver alguns assuntos de negócios...";
		next;
		mes "[Geólogo Geo]";
		mes "Aqui, leve este ^FF0000guia de";
		mes "referência^000000 com você ao meu escritório.";
		mes "Procurando pela minha mesa, você vai encontrar um ^FF0000pirômetro^000000 e um ^FF0000formulário de relatório^000000.";
		mes "Você deverá levar estas coisas ao Vulcão de Thor.";
		next;
		mes "[Geólogo Geo]";
		mes "Quando você chegar ao Vulcão de Thor,";
		mes "use o pirômetro para checar a";
		mes "temperatura do vulcão, e";
		mes "preencha o formulário de relatório.";
		next;
		mes "[Geólogo Geo]";
		mes "Leve o formulário de relatório";
		mes "preenchido ao campo de geologia";
		mes "que fica no fundo do vulcão,";
		mes "para que possam carimbar sua";
		mes "confirmação sobre ele. Isto não";
		mes "é tão difícil, é?";
		next;
		mes "[Geólogo Geo]";
		mes "Ahh, eu já decidi, eu irei";
		mes "fazer destas moças adoráveis";
		mes "minhas estudantes.";
		mes "Então eu ficarei aqui e";
		mes "dar uma palestra a elas.";
		next;
		emotion(e_lv,0,"Mulher Bêbada#1");
		emotion(e_lv,0,"Mulher Bêbada#2");
		mes "[Mulheres]";
		mes "Oh.! Você realmente irá";
		mes "nos ensinar geologia?";
		next;
		mes "[Geólogo Geo]";
		mes "Oh, certo! quando lhe";
		mes "perguntarem sobre a temperatura";
		mes "do vulcão quando for apresentar";
		mes "o relátorio no campo";
		mes "geológico diga qualquer coisa.";
		mes "Mas tenha certeza de que soe mal!";
		next;
		mes "[Geólogo Geo]";
		mes "Palavras como ''explosão'',";
		mes "''desastre'', e ''danos";
		mes "colaterais'' são perfeitas.";
		mes "É só fazer sua parte, que eu";
		mes "cuido do resto. Certo...";
		mes "Volte logo, meu aluno!";
		next;
		mes "^3355FFBem, isso não era o que";
		mes "você esperava, mas você tem";
		mes "a sensação de que tudo isso";
		mes "irá ficar a seu favor..";
		mes "Você conhece essa sensação, certo?^000000";
		changequest(2116,2117);
		aru_vol = 8;
		getitem(Note_Of_Geologist,1);
		close;
	} else if ((aru_vol > 7) && (aru_vol < 24)) {
		mes "[Geólogo Geo]";
		mes "Ei, é melhor você se apressar.";
		mes "Quero dizer, você é o único que viu o aviso no meu escritório não é?";
		mes "Você sabe o quão importante é este trabalho para nós!";
		next;
		mes "[Geólogo Geo]";
		mes "Pegue o pirômetro, e vá para o Vulcão de Thor para preencher o formulário de relatório e apresentá-lo a base geológica!";
		close;
	} else if (aru_vol == 24) {
		mes "[Geólogo Geo]";
		mes "Bem, estas são boas pernas, mas este não não é o melhor par que eu já v-";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu estou de volta.";
		next;
		mes "[Geologist Geo]";
		mes "*Ahem*";
		mes "E isto é como a erosão...";
		mes "Funciona.";
		mes "Amanhã, eu irei ensinar a vocês moças tudo sobre as rochas.";
		mes "Todas elas.";
		next;
		mes "[Geólogo Geo]";
		mes "Bem vindo de volta!.";
		mes "Então, como foi a apresentação do relatório de temperatura vulcânica?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Pois bem, eu fiz o que você me mediu.";
		mes "Ei, tem certeza de que queria que eu exagerasse na temperatura?";
		mes "O que se passa na base?";
		next;
		mes "[Geólogo Geo]";
		mes "Oh, não se preocupe com a temperatura.";
		mes "Foi suposto que ela iria aumentar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O que você fez...?";
		mes "Na verdade, eu pensei que talvez o pirômetro poderia estar quebrado.";
		next;
		mes "[Geólogo Geo]";
		mes "Heh! Você está certo.";
		mes "Eu quebrei ele de propósito.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O que?!";
		next;
		mes "[Geólogo Geo]";
		mes "Você sabe, é difícil para estudiosos como eu viver uma vida decente.";
		mes "Então, eu fui sortudo o bastante para conseguir este emprego de medição de temperatura da base geológico.";
		next;
		mes "[Geólogo Geo]";
		mes "Estes caras vem tentando atirar em mim toda vez que eu dou uma previsão e que o vulcão ficará inativa.";
		mes "Mas... eles não podem atirar em mim se esta previsão diz que o vulcão irá ficar ativo a qualquer hora!";
		next;
		mes "[Geólogo Geo]";
		mes "Então, quando todos eles";
		mes "entram em pânico, eu calmamente e";
		mes "suavemente ofereço uma solução";
		mes "que parece que irá funcionar.";
		mes "Evidentemente, não há nenhum problema em começar com...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Então...";
		mes "Você é um pilantra.";
		next;
		mes "[Geólogo Geo]";
		mes "Awww, não olha para mim deste modo.";
		mes "Eu sou um verdadeiro cientista.";
		mes "Vamos...";
		mes "Oh, vamos lá...";
		next;
		mes "[Geólogo Geo]";
		mes "Olha, por que você não volta ao meu instituto e checa minha estante?";
		mes "Eu deixo uma pequena caixa lá onde eu deixo todo tipo de coisas boas.";
		next;
		mes "[Geólogo Geo]";
		mes "Você pode ter a primeira coisa que sair para fora dessa caixa.";
		mes "Pergunto-me se a deusa vai lhe abençoar com boa fortuna.";
		mes "Você pode conseguir algo de bom.";
		next;
		mes "[Geólogo Geo]";
		mes "Considere isto como seu pagamento por um trabalho";
		mes "bem feito.";
		mes "Bom trabalho!";
		mes "Eu não esperava nada menos vindo do meu aluno estrela!";
		changequest(60211,60212);
		aru_vol = 25;
		delitem(File01,1);
		delitem(Broken_Thermometer,1);
		delitem(Note_Of_Geologist,1);
		close;
	} else {
		mes "[Homem Bêbado]";
		mes "Então... ^333333*Urp*^000000";
		mes "Então eu disse...";
		next;
		mes "[Homem Bêbado]";
		mes "^3131FFEi, companheiro!";
		mes "Um homem usa suas costas para lugar, não seus punhos!";
		mes "Você quer um pedaço de mim?";
		mes "Pode vir!^000000";
		next;
		mes "[Homem Bêbado]";
		mes "Então ele ficou todo assustado, e correu de medo!";
		mes "Hahahaha!";
		mes "Eu acho que pareço bem forte, não pareço?";
		next;
		emotion(e_lv,0,"Mulher Bêbada#1");
		emotion(e_lv,0,"Mulher Bêbada#2");
		mes "[Mulheres]";
		mes "Ah, meu Deus!";
		mes "Você é tão legal.!";
		next;
		mes "[Homem Bêbado]";
		mes "Bem...";
		mes "Qualquer um poderia ter feito isso...";
		mes "Eu apenas estava sendo um cavalheiro.";
		mes "Hahahah, isso mesmo!";
		close;
	}
}
ve_in,232,117,5	script	Mulher Bêbada#1	4_F_DESERT,{
	mes "[Mulher Bêbada]";
	mes "Este cara é bem chato, mas...";
	mes "Eu consigo beber de graça se eu ficar conversando com ele.";
	close;
}
ve_in,234,115,3	script	Mulher Bêbada#2	4_F_DESERT,{
	mes "[Mulher Bêbada]";
	mes "Esta taverna pode parecer luxuosa e maravilhosa.";
	mes "Mas as bebidas aqui fedem!";
	mes "Posso misturar bebidas melhor em casa, sem suar nem um pouco.";
	close;
}

// ------------------------------------------------------------------
ve_in,277,229,3	script	Armário#vol	HIDDEN_NPC,{
	if (!checkweight(Broken_Thermometer,1)) {
		mes "^3355FFEspere um segundo!";
		mes "Agora, você está carregando muitas coisas com você.";
		mes "Por favor volte depois de usar o Serviço Kafra para armazenar alguns de seus itens.^000000";
		close;
	} else if (aru_vol == 8) {
		if (!countitem(Broken_Thermometer)) {
			mes "^3355FFVocê encontrou o pirômetro dentro do armário.^000000";
			getitem(Broken_Thermometer,1);
			close;
		} else {
			mes "^3355FFEstá cheio de lixo neste armário!^000000";
			close;
		}
	} else {
		mes "^3355FFEstá cheio de lixo neste armário!^000000";
		close;
	}
}

// ------------------------------------------------------------------
thor_v01,37,234,3	script	Superfície Quente#1	HIDDEN_NPC,{
	if (aru_vol == 8) {
		if (countitem(Broken_Thermometer) && countitem(File01)) {
			mes "^3355FFVocê usa o pirômetro para checar a temperatura desta superfície aqui no chão do vulcão.^000000";
			next;
			mes "^3131FFBeep-- Beep-- Bee-^000000";
			next;
			mes "3131FFTemperatura Atual: 2300°C^000000";
			next;
			mes "^3355FFVocê registra a temperatura em seu relatório.^000000";
			changequest(2117,2118);
			aru_vol = 9;
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu deveria tirar mais medições de temperatura antes de eu apresentar este relatório.";
			mes "Só para ter certeza absoluta.";
			close;
		} else {
			mes "^3355FFVocê precisa do pirômetro e do relatório para medir e registrar a temperatura da superfície deste terreno.^000000";
			close;
		}
	} else {
		mes "^3355FFEsta parte do chão emite um intenso calor que vai até o seu rosto.^000000";
		close;
	}
}

// ------------------------------------------------------------------
thor_v02,165,37,3	script	Superfície Quente#2	HIDDEN_NPC,{
	if (aru_vol == 9) {
		if (countitem(Broken_Thermometer) && countitem(File01)) {
			mes "^3355FFVocê usa o pirômetro para checar a temperatura desta superfície aqui no chão do vulcão.^000000";
			next;
			mes "^3131FFBeep-- Beep-- Bee-^000000";
			next;
			mes "^3131FFTemperatura Atual: 2270°C^000000";
			next;
			mes "^3355FFVocê registra a temperatura em seu relatório.^000000";
			changequest(2118,2119);
			aru_vol = 10;
			close;
		} else {
			mes "^3355FFVocê precisa do pirômetro e do relatório para medir e registrar a temperatura da superfície deste terreno.^000000";
			close;
		}
	} else {
		mes "^3355FFEsta parte do chão emite um intenso calor que vai até o seu rosto.^000000";
		close;
	}
}

// ------------------------------------------------------------------
thor_v02,170,100,3	script	Superfície Quente#3	HIDDEN_NPC,{
	if (aru_vol == 10) {
		if (countitem(Broken_Thermometer) && countitem(File01)) {
			mes "^3355FFVocê usa o pirômetro para checar a temperatura desta superfície aqui no chão do vulcão.^000000";
			next;
			mes "^3131FFBeep-- Beep-- Bee-^000000";
			next;
			mes "^3131FFTemperatura Atual: 2500°C^000000";
			next;
			mes "^3355FFVocê registra a temperatura em seu relatório.^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu tirei medidas o bastante.";
			mes "Agora eu devo apresentar este relatório à base geológico.";
			changequest(2119,2120);
			aru_vol = 11;
			close;
		} else {
			mes "^3355FFVocê precisa do pirômetro e do relatório para medir e registrar a temperatura da superfície deste terreno.^000000";
			close;
		}
	} else if (aru_vol == 11) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu tirei medidas o bastante.";
		mes "Agora eu devo apresentar este relatório à base geológico.";
		close;
	} else {
		mes "^3355FFEsta parte do chão emite um intenso calor que vai até o seu rosto.^000000";
		close;
	}
}

// ------------------------------------------------------------------
que_thor,145,66,3	script	Guarda#vol::VeinsGuard	4_DST_SOLDIER,{
	if (aru_vol == 11) {
		mes "[Guarda]";
		mes "Somente pessoas autorizadas podem entrar nesta área.";
		mes "Identifique-se!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu sou um estudante trabalhando em uma pesquisa sobre as ordens do Diretor Geo para o Instituto de Pesquisas Geológicas de Veins.";
		mes "Você poderia por favor carimbar a aprovação deste relatório de temperaturas para mim?";
		next;
		mes "[Guarda]";
		mes "Ah, entendo.";
		mes "Bem, eu não sou um dos que carimbam relatórios.";
		mes "Entre e peça a Sahedi para ajudar você.";
		mes "Ele está na aeronave a sul da estação de trem.";
		changequest(2120,2121);
		aru_vol = 12;
		close2;
		warp("thor_camp",248,190);
		end;
	} else if ((aru_vol > 11) && (aru_vol < 24)) {
		mes "[Guarda]";
		mes "Oh, você é aquele aluno do instituto.";
		mes "Não acho estejamos esperando quaisquer relatórios por enquanto.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, nós percebemos que os instrumentos que nós usamos estavam com defeito.";
		mes "Então temos de revisar nosso relatório.";
		next;
		mes "[Guarda]";
		mes "Suas ferramentas quebraram na primeira vez?";
		mes "Ok, ok, eu posso entender isto.";
		mes "Tudo bem, você pode passar.";
		close2;
		warp("thor_camp",248,190);
		end;
	}
	mes "[Guarda]";
	mes "Quem é você?!";
	close;
}
que_thor,136,66,3	duplicate(VeinsGuard)	Guarda#vol2	4_DST_SOLDIER
que_thor,127,60,5	duplicate(VeinsGuard)	Guarda#vol3	4_DST_SOLDIER

// ------------------------------------------------------------------
thor_camp,250,104,3	script	Sahedi#vol	4_M_RASWORD,{
	if (aru_vol == 12) {
		mes "[Sahedi]";
		mes "Sinto muito, mas não acho que eu conheça você.";
		mes "Somente pessoas autorizadas são permitidas nesta área.";
		mes "Então se você não tem nenhum motivo para estar aqui...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu sou um estudante trabalhando em uma pesquisa sobre as ordens do Diretor Geo para o Instituto de Pesquisas Geológicas de Veins.";
		mes "Você poderia por favor carimbar a aprovação deste relatório de temperaturas para mim?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Um, Geo está doente agora, então por isto ele me pediu para preencher este formulário de de relatório e apresentá-lo a vocês, para ele.";
		next;
		mes "[Sahedi]";
		mes "Ah, então por isto que o relatório está atrasado desta vez, lamento em escutar isto.";
		mes "E eu pensando que ele estava gastando seu tempo com mulheres e álcool...";
		next;
		mes "[Sahedi]";
		mes "Vejamos...";
		next;
		emotion(e_omg);
		mes "[Sahedi]";
		mes "Por que a temperatura está tão alta?!";
		mes "Nós já tivemos poucos relatórios como este no passado, mas...";
		mes "Isto é...";
		mes "O quão ruim é isto?";
		next;
		emotion(e_swt2,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh... Oh, não!";
		mes "Yikes! Eu acho que se isto ficar muito mais alto do que o normal...";
		mes "Isto poderia ser ruim?";
		next;
		mes "[Sahedi]";
		mes "O que eu devo fazer?";
		mes "Eu devo ativar o alarme?";
		mes "Eu não...";
		mes "Eu não quero morrer!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você quer por favor se acalmar primeiro.";
		mes "Eu vou dar uma olhada pela base.";
		mes "Então por favor não diga nada que possa fazer com que alguém entre em pânico agora.";
		next;
		mes "[Sahedi]";
		mes "Ok...";
		mes "Por favor vá logo, e veja se esta base estará a salvo de algum desastre.";
		changequest(2121,2122);
		aru_vol = 13;
		delitem(File01,1);
		close;
	}
	else if ((aru_vol > 12) && (aru_vol < 23)) {
		mes "[Sahedi]";
		mes "Então, nós estamos em algum perigo?";
		mes "Parece que este vulcão pode entrar em erupção a qualquer momento?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, eu não acabei de investigar tudo ainda.";
		mes "Você poderia por favor esperar um pouco mais?";
		next;
		mes "[Sahedi]";
		mes "Claro, claro.";
		mes "Só tenha certeza de que você checou de verdade tudo pelo vulcão para mim, ok?";
		close;
	} else if (aru_vol == 23) {
		mes "[Sahedi]";
		mes "Então, nós estamos em algum perigo?";
		mes "Parece que este vulcão pode entrar em erupção a qualquer momento?";
		next;
		while (true) {
			if (select("Sim","Não") == 1) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Eu acho que eu não posso esconder isto de você...";
				mes "A recente atividade deste vulcão recentemente tem sido...";
				mes "Preocupante.";
				next;
				break;
			} else {
				mes "^3355FFEspere...";
				mes "Você devia tirar vantagem desta situação.";
				mes "Esta pode ser sua chance de intervir no conflito entre os dois países!^000000";
				next;
				mes "^3355FFVocê não irá poderá parar a guerra.";
				mes "Mas talvez você possa distraí-los com a ameaça de um desastre natural...^000000";
				next;
			}
		}
		emotion(e_omg);
		mes "[Sahedi]";
		mes "Huh? Você está falando sério?";
		mes "O Vulcão de Thor irá entrar em erupção?!";
		mes "Nós-nós temos de dar o fora daqui!";
		mes "Poderia ser um desastre, como o que aconteceu no passado!";
		next;
		emotion(e_flash,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, concordo.";
		mes "Tem uma boa chance de acontecer uma...";
		mes "explosão que poderá causar um monte de danos colaterais.";
		next;
		mes "[Sahedi]";
		mes "Quais são as nossas chances?";
		mes "Quanto tempo nós temos para evacuar?";
		next;
		emotion(e_flash,1);
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem... Uh...";
		mes "De acordo com as minhas...";
		mes "Análises...";
		mes "Há uma chance de 75% de acontecer uma erupção nos próximos 30 dias.";
		next;
		mes "[Sahedi]";
		mes "O que?!";
		mes "Nós devemos relatar isto ao sumo sacerdote imediatamente!";
		mes "Aitra!";
		next;
		enablenpc("Aitra#vol");
		mes "[Aitra]";
		mes "Sim, senhor!";
		next;
		mes "[Sahedi]";
		mes "Esta é uma emergência.";
		mes "Leve esta mensagem para o sumo sacerdote o mais rápido possível.";
		mes "E não se esqueça de embrulhar todas as suas coisas antes de sair.";
		next;
		mes "[Aitra]";
		mes "Huh?";
		mes "...Sim, senhor.";
		next;
		disablenpc("Aitra#vol");
		mes "[Sahedi]";
		mes "Oh, isto é um pesadelo...";
		mes "Por favor você poderia levar este relatório para o seu diretor, Geo?";
		mes "Espero que ele tenha algum conselho sobre o que nós devemos fazer sobre este desastre...";
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
		mes "Você...!";
		mes "O que você está fazendo parado aí?!";
		mes "Você não foi posto para transportar carga?";
		mes "Atenção para as ordens!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você está falando comigo?";
		mes "Não, eu sou do Instituto de Pes--";
		next;
		mes "[Coronel Vito]";
		mes "Olhe para você. Você ainda não colocou seu uniforme.";
		mes "Ainda é um novato, eh?";
		mes "Parece que eu vou ter de treinar você pessoalmente como um de nossos cavaleiros sagrados!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas eu não--";
		next;
		mes "[Coronel Vito]";
		mes "Você deveria estar honrado em ter a rara oportunidade de ser treinado por mim, o grande Coronel Vito.";
		mes "Eu irei lhe transformar em um verdadeiro guerreiro que luta por Freya!";
		mes "Agora me siga!";
		changequest(2122,2123);
		aru_vol = 14;
		close2;
		warp("thor_camp",156,68);
		end;
	} else if (aru_vol == 14) {
		mes "[Coronel Vito]";
		mes "O que você está fazendo parado aí?!";
		mes "Não vá para longe!";
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
		mes "Você...!";
		mes "O que você está fazendo parado aí?!";
		mes "Você não foi posto para transportar carga?";
		mes "Atenção para as ordens!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você está falando comigo?";
		mes "Não, eu sou do Instituto de Pes--";
		next;
		mes "[Coronel Vito]";
		mes "Olhe para você.";
		mes "Você ainda não colocou seu uniforme.";
		mes "Ainda é um novato, eh?";
		mes "Parece que eu vou ter de treinar você pessoalmente como um de nossos cavaleiros sagrados!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas eu não--";
		next;
		mes "[Coronel Vito]";
		mes "Você deveria estar honrado em ter a rara oportunidade de ser treinado por mim, o grande Coronel Vito.";
		mes "Eu irei lhe transformar em um verdadeiro guerreiro que luta por Freya!";
		mes "Agora me siga!";
		changequest(2122,2123);
		aru_vol = 14;
		close2;
		warp("thor_camp",156,68);
		end;
	} else if (aru_vol == 14) {
		mes "[Coronel Vito]";
		mes "O que você está fazendo";
		mes "parado aí?!";
		mes "Não vá para longe! Vamos!";
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
		mes "Eu sou o Coronel Vito, e eu estou no encarregado da base de Arunafeltz aqui no Vulcão de Thor.";
		mes "Qual o seu nome, soldado?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes strcharinfo(PC_NAME)+", senhor.";
		next;
		mes "[Coronel Vito]";
		mes "Hmpf! Este é um nome que o enfraquece!";
		mes "Eu posso dizer que sua mente e corpo são muito fracas!";
		mes "Isto não vai dar certo.";
		mes "Como é que vai ser digno de servir a bela e graciosa Freya?";
		next;
		mes "[Coronel Vito]";
		mes "Você precisa treinar mais.";
		mes "Descanse um pouco, e prepare-se.";
		mes "Nós iremos começar assim que você estiver pronto.";
		aru_vol = 15;
		close;
	} else if (aru_vol == 15) {
		mes "[Coronel Vito]";
		mes "Primeiro, nós precisamos cuidar desta sua mente fraca.";
		mes "Este primeiro exercício de treinamento terá como base a fala.";
		next;
		while (true) {
			mes "[Coronel Vito]";
			mes "Questão Nº 1!";
			mes "Por quem nós lutamos?";
			mes "Por quem nós vivemos?";
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
		mes "Freya não é apenas uma deusa do amor, mas ela é também uma deusa da guerra.";
		mes "Estamos em uma sagrada missão de recuperar as partes do Coração de Ymir em seu nome.";
		next;
		mes "[Coronel Vito]";
		mes "Freya ficou bastante ferida na guerra entre os deuses, humanos, e demônios.";
		mes "Odin, o líder dos deuses, tentou ajudá-la, mas mesmo o seu poder não era suficiente.";
		next;
		mes "[Coronel Vito]";
		mes "Odin a avisou para que ela pegasse o Coração de Ymir.";
		mes "Para que ela pudesse recuperar totalmente seus poderes.";
		mes "É por isso que estamos nos preparando para a guerra: é preciso obter o Coração de Ymir para Freya!";
		next;
		mes "[Coronel Vito]";
		mes "VOCÊ ENTENDEU?!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "Agora, há um país chamado o Reino de Rune-Midgard que é cheio de tolos.";
		mes "Seus antepassados nos consideraram como hereges e nos expulsou para esta terra deserta..";
		next;
		mes "[Coronel Vito]";
		mes "Não podemos perdoar como eles nos negaram a nossa liberdade de culto a Freya.";
		mes "Nosso povo terá vingança sobre eles.";
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
			mes "^FF0000Não terei misericórdia^000000";
			next;
			input(.@input$);
			.@answer$ = "Não terei misericórdia";
			if (.@input$ == .@answer$) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Não terei misericórdia.";
				mes "Com nada que ficar na minha mão.^000000";
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
				mes "Dedicarei toda a minha vida para recuperação total da Deusa Freya.^000000";
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
		mes "Agora você sabe o tipo de atitude que você deve ter como um Guerreiro Sagrado a serviço de Freya.";
		mes "Isso é tudo do primeiro exercício, mas ainda tem um exercício a mais.";
		changequest(2123,2124);
		aru_vol = 16;
		close;
	} else if (aru_vol == 16) {
		mes "[Coronel Vito]";
		mes "Antes de nós começarmos o 2º exercício de treinamento.";
		mes "Eu tenho um dever a lhe atribuir.";
		mes "Encontre a enorme zona de canalização a norte do edifício e localize quaisquer máquinas quebradas.";
		aru_vol = 17;
		close;
	} else if (aru_vol == 17) {
		mes "[Coronel Vito]";
		mes "Inspecione as máquinas na zona de canalização a norte deste edifício.";
		mes "Não fique parado aí: mexa-se!";
		close;
	} else if (aru_vol == 18) {
		mes "[Coronel Vito]";
		mes "Bom trabalho. Lembre-se de que a sua primeira prioridade é verificar o painel de controle.";
		mes "Ele precisa ser regularmente inspecionado.";
		mes "Uma vez que ele controla os recursos energéticos da base.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "Agora é hora de executar o segundo exercício de treinamento que irá fortalecer seu corpo.";
		mes "Vê o boneco na sua frente?";
		mes "Pratique socando ele 10 vezes. Vai!";
		changequest(2125,2126);
		aru_vol = 19;
		next;
		if (select("Sim, senhor!","O que você quer dizer com socar") == 1) {
			mes "[Colonel Vito]";
			mes "Foque sua energia em seu grito quando atacar!";
			mes "Socar!";
			mes "10 Vezes! Faça isso!";
			close;
		}
		mes "[Coronel Vito]";
		mes "Socar...? É um soco de mão.";
		mes "Você atacar o inimigo com o fim de sua mão como uma lâmina.";
		mes "Como você se juntou ao exército sem saber isto?";
		next;
		mes "[Coronel Vito]";
		mes "Foque sua energia em seu grito quando atacar!";
		mes "Socar! 10 Vezes! Faça isso!";
		close;
	} else if (aru_vol == 20) {
		mes "[Coronel Vito]";
		mes "Quanto mais você treina, mais forte você fica.";
		mes "Quando você cresce com força, então se torna um soldado das tropas Sagradas de Freya.";
		mes "Treine todos os dias, então você sempre ficará forte!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "Isso é tudo para a seu treinamento.";
		mes "Se você tiver alguma dúvida sobre a vida na base.";
		mes "Vá perguntar a Sahedi fora deste edifício.";
		mes "Você está despensado.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "^333333Bem...";
		mes "Eu acho que eu devo voltar para Sahedi.";
		mes "Felizmente, ele vai pensar de mim como um pesquisador geológico, em vez de como um soldado.^000000";
		changequest(2126,2127);
		aru_vol = 21;
		close;
	} else {
		mes "[Coronel Vito]";
		mes "Temos de estar sempre atentos em nosso treinamento.";
		mes "Você nunca saberá quando Freya vai nos chamar para o combate!";
		close;
	}
}

// ------------------------------------------------------------------
thor_camp,109,167,3	script	Painel de Controle#vol	HIDDEN_NPC,{
	if (aru_vol == 17) {
		mes "^3355FFEste Painel de controle controla os recursos de energia para a Base do Vulcão de Thor.";
		mes "Ajudando ele a executar operações mesmo abaixo do solo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Todos estes canos com rocha derretida passando por eles...";
		mes "Acho que o calor é aquilo que é fonte de energia para a base.";
		mes "Isso é realmente uma idéia inteligente.";
		next;
		mes "^3355FFO painel de controle emite ruídos mecânicos e parece estar funcionando muito bem.";
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
		mes "^3355FFÉ um boneco para treinamento parece que é um inimigo a ser derrotado.";
		mes "Sua frente é marcado com o emblema do Reino de Rune-Midgard.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eles realmente odeiam o Reino de Rune-Midgard...";
		mes "^333333Tecnicamente, eu não deveria esta fazendo isto.";
		mes "Será que isto não é considerado como traição?^000000";
		next;
		mes "[Coronel Vito]";
		mes "Eu não consigo escutá-lo, soldado!";
		mes "Faça sua vos ser escutada claramente!";
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
		mes "Três!!";
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
		mes "Quantas vezes eu ordenei para que você socasse o boneco?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "10 vezes, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "E quantas vezes você socou o boneco?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "11 vezes, senhor!";
		next;
		mes "[Coronel Vito]";
		mes "Inaceitável!";
		mes "Escute suas ordens desta vez, e faça isso de novo e faça como eu lhe pedi!";
		close;
	} else {
		mes "[Coronel Vito]";
		mes "Inaceitável!";
		mes "Escute suas ordens desta vez, e faça isso de novo e faça como eu lhe pedi!";
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
		mes "^3355FFHá uma corrente de magma descendo por seu caminho sob o arame farpado.^000000";
		next;
		mes "^3355FFVocê pode ouvir o fraco som das marteladas.";
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
		mes "^3355FFHá pessoas carregando muitas caixas pesadas de madeira marcadas com o selo da República de Schwaltzvalt.";
		mes "Eles devem conter suprimentos militares para a base.^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu devo ir até Sahedi agora.";
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
			mes "^3355FFVocê encontra uma série de relatórios cuidadosamente colocados entre alguns livros nesta estante.^000000";
			getitem(File01,1);
			close;
		} else {
			mes "^3355FFHá um monte de livros dispersos e cadernos preenchidos nesta estante.^000000";
			close;
		}
	} else if ((aru_vol > 8) && (aru_vol < 25)) {
		mes "^3355FFHá um monte de livros dispersos e cadernos preenchidos nesta estante.^000000";
		close;
	} else if (aru_vol == 25) {
		mes "^3355FFHá um monte de livros dispersos e cadernos preenchidos nesta estante.^000000";
		next;
		mes "^3355FFDepois de uma olhada.";
		mes "Você vê a caixa rocha meio empoeirada de que Geo estava falando.";
		mes "Você fecha seus olhos, e põe a mão dentro da caixa roxa de coisas boas do Geo.^000000";
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
		mes "^3355FFBem, você fez tudo o que pode aqui.";
		mes "Agora seria uma boa hora para voltar ao Sumo Sacerdote Zhed.^000000";
		close;
	} else {
		mes "^3355FFHá um monte de livros dispersos e cadernos preenchidos nesta estante.^000000";
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
			mes "^3355FFVocê subiu a escada ao longo da parede e saiu.^000000";
			close2;
			warp("ra_temin",74,136);
			end;
		}
		mes "^3355FFVocê decidiu não subir a escada agora.^000000";
		close;
	}
	end;
}

// ------------------------------------------------------------------
thor_camp,246,191,3	script	Guarda#goto	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "O que foi agora?";
	mes "Você não pode ver que estou ocupado?";
	next;
	if (select("Deixe-me sair","Sinto muito") == 1) {
		mes "[Soldado]";
		mes "Vá rápido, e saia!";
		close2;
		warp("que_thor",145,60);
		end;
	}
	mes "[Soldado]";
	mes "Se você sente muito,";
	mes "pare de me atrapalhar!";
	close;
}

// ------------------------------------------------------------------
thor_camp,62,98,0	script	#volbq	FAKE_NPC,5,5,{
	OnTouch:
	mes "^3355FFHá um homem velho usando roupas de sumo sacerdote na sua frente.^000000";
	next;
	mes "^3355FFÉ melhor você não fazer nada de evidente na frente dele.^000000";
	close;
}
