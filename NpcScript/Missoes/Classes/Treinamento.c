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
| - Desenvolvido por: Spell Master 08/04/2017                       |
| - Nota: Campo de Treinamento para Aprendizes.                     |
| - Observa��o:                                                     |
|   * Script desenvolvido com base no script oficial do             |
|     bRO (Brasil Ragnarok Online)                                  |
|   * Prov�m de adapta��es para o servidor.                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Primeira Parte ]
// ------------------------------------------------------------------
new_1-1,53,114,4	script	Sprakki#new	4_F_01,{
	if (!new_quest) {
		mes "[Sprakki]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao mundo de Ragnar�k Online.";
		mes "Meu nome � Sprakki e eu estou encarregada de dar a voc� o guia b�sico do jogo.";
		next;
		mes "[Sprakki]";
		mes "Clique no bot�o [Pr�ximo] ou pressione [Enter] para continuar com a conversa.";
		next;
		mes "[Sprakki]";
		mes "Eu vou dar a voc� a informa��o sobre os controles b�sicos.";
		mes "Todos os ^4a4affmovimentos b�sicos e a escolha de um item e ataque^000000.";
		mes "S�o realizados ao ^4a4affclicar com o bot�o esquerdo do mouse^000000.";
		next;
		cutin ("tutorial01",3);
		mes "-! Informa��o !-";
		mes "Clique no ch�o para mover o personagem.";
		mes "Para atacar monstros e conversar com NPCs, basta clicar neles.";
		next;
		cutin ("",255);
		mes "[Sprakki]";
		mes "Antes de mais nada, vamos tentar andar um pouco.";
		mes "V� aquela ponte de madeira � direita?";
		next;
		mes "[Sprakki]";
		mes "Atravesse aquela ponte, ao final voc� ver� um portal no ch�o.";
		mes "Entre nele e chegar� h� um castelo usado como Centro de Treinamento.";
		next;
		mes "[Sprakki]";
		mes "Esperarei por voc� dentro daquele Castelo.";
		mes "Chegue l� por sua conta pr�pria.";
		new_quest = 1;
		setquest (7117);
		next;
		cutin ("tutorial02",3);
		mes "-! Informa��o !-";
		mes "Voc� tem uma miss�o dada por Sprakki";
		mes "Voc� pode ver o conte�do dela na Janela de Informa��o de Miss�es.";
		next;
		mes "[Sprakki]";
		mes "Eu vou esperar dentro do Centro de treinamento, do outro lado da ponte.";
		next;
		mes "-! Informa��o !-";
		mes "Voc� pode abrir a Janela de Informa��o de Miss�es pressionando as teclas ^4a4afdALT + U^000000.";
		next;
		cutin ("",255);
		mes "[Sprakki]";
		mes "Voc� j� viu a Janela de Informa��o de Miss�es?";
		mes "Eu vou esperar voc� no campo de treinamento, do outro lado da ponte.";
		close;
	} else if (new_quest == 1) {
		mes "[Sprakki]";
		mes "Eu vou esperar voc� no campo de treinamento, do outro lado da ponte.";
		close;
	} else {
		warp ("new_1-2",100,9);
		savepoint ("new_1-2",100,9);
		new_quest = 1;
		end;
	}
}

// ------------------------------------------------------------------
new_1-1,66,114,4	script	Informa��o#new	HIDDEN_NPC,{
	mes "^ff0000=================================";
	mes "Campo de Treinamento de Aprendizes.";
	mes "=================================^000000";
	next;
	if (select("Etapas do Treinamento","Cancelar") == 1) {
		mes "=================================";
		mes "1� Parte";
		mes "[Inscri��o e Comandos B�sicos]";
		mes "=================================";
		next;
		mes "Fale com Sprakki";
		mes "Ap�s dirija-se ao centro de treinamento.";
		mes "Fale novamente com Sprakki no castelo para fazer sua inscri��o.";
		next;
		mes "=================================";
		mes "2� Parte:";
		mes "[Equipamentos, Itens, Habilidades]";
		mes "=================================";
		next;
		mes "Fale com o Instrutor Brade, e equipe os itens que ele lhe der.";
		mes "N�o se preocupe ser� instru�d"+(Sex == SEX_MALE ? "o":"a")+" como fazer.";
		next;
		mes "Fale com com a Instrutora Jinha";
		mes "Ela lhe dar� instru��es como utilizar-se de habilidades.";
		next;
		mes "Ap�s ent�o siga para pr�xima sala ao oeste da que estar�.";
		next;
		mes "=================================";
		mes "3� Parte:";
		mes "[Conhecendo Npcs]";
		mes "=================================";
		next;
		mes "Nesta parte voc� ter� que simplesmente conversar com os npcs da sala.";
		mes "Conhecendo-os ent�o voc� poder� seguir para pr�xima parte.";
		next;
		mes "=================================";
		mes "4� Parte:";
		mes "[Treinamento de Combate]";
		mes "=================================";
		mes "�ltima parte do treinamento.";
		mes "O objetivo � simples!";
		next;
		mes "Voc� dever� lutar contra monstros no mapa.";
		mes "N�o se preocupe, eles n�o s�o fortes, e haver� intrutores no local para lhe auxiliar.";
		next;
		mes "Assim que atingir o Level 10 de sua classe, e suas habilidades b�sicas, estiverem maximizadas no N�vel 10";
		mes "Poder� solicitar ao instrutor Brade que "+(Sex == SEX_MALE ? "o":"a")+" leve para o Reino de Rune-Midgard.";
		next;
		mes "Tamb�m poder� solicitar no local que os representantes das associa��es.";
		mes "Que "+(Sex == SEX_MALE ? "o":"a")+" levem at� suas guildas para enfim fazer o teste de mudan�a de classe.";
		next;
		mes "Tenha um bom treinamento, lhe desejamos boa sorte em sua jornada.";
		close;
	}
	close;
}

// ------------------------------------------------------------------
new_1-1,144,116,2	script	Guarda#new	8W_SOLDIER,{
	if (!new_quest) {
		mes "[Guarda do Treinamento]";
		mes "Se tentar atravessar o portal e n�o conseguir.";
		mes "� porque voc� ainda n�o falou com ^0000ffSprakki^000000.";
		mes "Volte pela ponte a inicie seu treinamento com ela.";
		close;
	}
	mes "[Guarda do Treinamento]";
	mes "� meu dever desejar-lhe as boas vindas ao Campo de Treinamento de Aprendizes!";
	mes "Atravesse o portal para poder come�ar seu treinamento b�sico.";
	close;
}
new_1-1,144,107,2	duplicate(Guarda#new)	Guarda#new2	8W_SOLDIER

// ------------------------------------------------------------------
new_1-1,148,112,0	script	newWarp1#new	WARPNPC,2,2,{
	if (!new_quest) { end; }
	else {
		warp ("new_1-2",100,9);
		savepoint ("new_1-2",100,9);
		end;
	}
}

// ------------------------------------------------------------------
// - [ Segunda parte ] -
// ------------------------------------------------------------------
new_1-2,100,29,4	script	Sprakki#new2	4_F_01,{
	if (new_quest == 1) {
		mes "[Sprakki]";
		mes "�timo!";
		mes "Conseguiu chegar at� aqui, e isso � um bom.";
		next;
		mes "[Sprakki]";
		mes "Mas seu treinamento ainda n�o come�ou.";
		mes "Primeiro vamos a sua inscri��o oficial.";
		next;
		mes "[Sprakki]";
		mes "Por favor me diga seu nome.";
		mes "Voc� deve digitar corretamente, letras mai�sculas e m�nusculas se tiver.";
	} else if (new_quest == 2) {
		mes "[Sprakki]";
		mes "Tente digitar seu nome novamente.";
	} else if (new_quest > 2) {
		savepoint (strnpcinfo(NPC_MAP),100,100);
		warp (strnpcinfo(NPC_MAP),100,100);
		new_quest = 3;
		end;
	}
	input (.@charname$);
	next;
	if (.@charname$ != strcharinfo(PC_NAME)) {
		mes "[Sprakki]";
		mes "Acho que voc� digitou seu nome errado n�o foi?";
		if (new_quest !=2) { new_quest = 2; }
		close;
	} else {
		mes "[Sprakki]";
		mes "Deixe-me preencher esses pap�is para sua inscri��o.";
		next;
		mes "[Sprakki]";
		mes ".....";
		next;
		mes "[Sprakki]";
		mes "Certo! Tudo pronto.";
		mes "Seja bem vind"+(Sex == SEX_MALE ? "o":"a")+" ao Treinamento de Aprendizes ^4a4aff"+.@charname$+"^000000.";
		next;
		mes "Te levarei a pr�xima sala, chegando l� fale com o instrutor ^bb0000Brade^000000.";
		mes "Ele continuar� seu treinamento.";
		mes "Boa sorte!";
		close2;
		new_quest = 3;
		getexp (100,5);
		changequest (7117,7118);
		savepoint (strnpcinfo(NPC_MAP),100,100);
		warp (strnpcinfo(NPC_MAP),100,100);
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,100,113,4	script	Brade#new	4_M_JOB_KNIGHT1,{
	if (new_quest == 3) {
		if (questprogress(7118)) {
			completequest (7118);
			getexp (300,10);
		}
		mes "[Instrutor Brade]";
		mes "Muito bom!";
		mes "O fato de voc� ter chegado a mim, quer dizer que tem ido bem em seu treinamento.";
		next;
		mes "[Instrutor Brade]";
		mes "Notou a experi�ncia que ganhou ao complear a miss�o?";
		mes "Esses pontos podem ser obtidos de diversas formas.";
		mes "Mas a principal maneira de obter pontos de experi�ncia.";
		mes "� derrotando monstros.";
		next;
		mes "[Instrutor Brade]";
		mes "Existem dois tipos de Level.";
		mes "Base: Que mede seu poder em geral.";
		mes "Classe: Que mede o poder de sua classe.";
		next;
		mes "[Instrutor Brade]";
		mes "Pressionando as teclas ^4a4afdALT + V^000000.";
		mes "Voc� ver� duas barras de experi�ncia, cada uma representa os pontos de cada level.";
		next;
		mes "[Instrutor Brade]";
		mes "Toda vez que uma barra dessa chegar ao 100%, voc� subir� de level correspondente a barra maximizada.";
		mes "Ent�o receber� pontos para poder ampliar seus poderes.";
		next;
		mes "[Instrutor Brade]";
		mes "Mas seu poder em geral n�o � s� medido pelo Level!";
		mes "Itens e equipamentos podem ampliar seus poderes consideravelmente!";
		next;
		cutin ("tutorial03",3);
		mes "[Instrutor Brade]";
		mes "Pressionando as teclas ^4a4afdALT + E^000000.";
		mes "Voc� ver� os itens que est� carregando em seu ivent�rio.";
		next;
		mes "[Instrutor Brade]";
		mes "Pressionando as teclas ^4a4afdALT + Q^000000.";
		mes "Voc� ver� os itens que esteja equipados.";
		next;
		mes "[Instrutor Brade]";
		mes "Para equipar um item, ou usar-lo clique duas vezes com o bot�o esquerdo do mouse.";
		mes "Sobre o item em seu invent�rio.";
		mes "Ou para equipar abra a janela de equipamentos.";
		mes "Segure o item com o bot�o esquerdo do mouse, arraste-o e solte na janela de equipamentos.";
		next;
		cutin ("",255);
		mes "[Instrutor Brade]";
		mes "Agora, pegue esses itens!";
		mes "Quero que voc� os use, depois fale comigo novamente.";
		getitem (Novice_Plate,1);
		getitem (Novice_Hood,1);
		getitem (Novice_Boots,1);
		getitem (Novice_Egg_Cap,1);
		getitem (Novice_Knife,1);
		getitem (Novice_Guard,1);
		getitem (Novice_Potion,300);
		setquest (7119);
		new_quest = 4;
		close;
	} else if (new_quest == 4) {
		if (!isequipped(Novice_Plate) || !isequipped(Novice_Hood) || !isequipped(Novice_Boots) || !isequipped(Novice_Egg_Cap) || !isequipped(Novice_Guard)) {
			mes "[Instrutor Brade]";
			mes "Equipe os 6 dos equipamentos que eu te dei.";
			mes "Coloque os sapatos, vista as roupas, e se arme com arma.";
			close;
		} else {
			mes "[Instrutor Brade]";
			mes "Bom.... Muito bom!";
			mes "Vejo que voc� � uma pessoa experta!";
			next;
			mes "[Instrutor Brade]";
			mes "Existe mais algumas coisas que preciso lhe instruir.";
			mes "Voc� pode clicar com o bot�o direito do mouse sobre um item.";
			mes "Para obter informa��es detalhadas sobre ele.";
			next;
			cutin ("tutorial04",3);
			mes "[Instrutor Brade]";
			mes "Essa mesma a��o pode ser usada para interagir com outras pessoas.";
			next;
			mes "[Instrutor Brade]";
			mes "Muitas dessas intera��es vai depender de seu level de classe e habilidades.";
			next;
			mes "[Instrutor Brade]";
			mes "Voc� poder� regitrar amigos, se juntar a grupos e Cl�s dentre outros.";
			next;
			cutin ("",255);
			mes "[Instrutor Brade]";
			mes "Como isso depende de habilidades.";
			mes "Quero que voc� procure pela ^4d4dffInstrutora Jinha^000000.";
			next;
			mes "[Instrutor Brade]";
			mes "Para aprender como utilizar Habilidades.";
			mes "Depois venha falar comigo novamente.";
			if (questprogress(7118)) {
				changequest (7119,7120);
				getexp (600,20);
			}
			new_quest = 5;
			close;
		}
	} else if (new_quest == 5) {
		mes "[Instrutor Brade]";
		mes "Eu disse para voc� ir aprender a usar habilidades com a ^4d4dffInstrutora Jinha^000000.";
		mes "Sei que vai conseguir encontra-la.";
		close;
	} else if (new_quest == 6) {
		mes "[Instrutor Brade]";
		mes "Exelente voc� aprendeu sobre as habilidades.";
		mes "Muitas outras habilidades podem ser aprendidas.";
		next;
		mes "[Instrutor Brade]";
		mes "Cada classe possui suas habilidades.";
		mes "E como as habilidades tem seu requisito pr�prio, deve-se ter muita cautela ao escolher qual melhorar.";
		next;
		mes "[Instrutor Brade]";
		mes "Bem, n�o h� mais nada para voc� aprender aqui.";
		mes "Siga para o oeste dessa sala voc� vai ver� um portal.";
		mes "Atravessando-o fale com as pessoas da sala elas v�o lhe ajudar.";
		next;
		mes "[Instrutor Brade]";
		mes "� muito simples elas simplesmente v�o lhe informar sobre os principais servi�os.";
		mes "Que poder� encontrar quando estiver fora desse local.";
		next;
		mes "[Instrutor Brade]";
		mes "Depois ent�o nos veremos novamente em seu treinamento de combate.";
		mes "At� l� pegue esse itens, pode lhe ser �til no futuro.";
		getitem (N_Adventurers_Suit,1);
		getitem (N_Fly_Wing,50);
		getitem (N_Butterfly_Wing,20);
		new_quest = 7;
		if (questprogress(7120)) {
			changequest (7120,7121);
			getexp (1000,20);
		}
		close;
	} else if (new_quest == 7) {
		mes "[Instrutor Brade]";
		mes "Atravesse o portal ao oeste dessa sala.";
		mes "Fale com as pessoas de l� para continuar seu treinamento.";
		close;
	} else {
		warp (strnpcinfo(NPC_MAP),41,172);
		savepoint (strnpcinfo(NPC_MAP),41,172);
		new_quest = 7;
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,116,115,4	script	Jinha#new	1_M_ORIENT01,{
	if (new_quest < 5) {
		mes "[Instrutora Jinha]";
		mes "Me parece que est� perdid"+(Sex == SEX_MALE ? "o":"a")+", n�o �.";
		mes "Porque n�o procura pelo";
		mes "^4d4dffInstrutor Brade^000000.";
		mes "Talvez ele possa lhe ajudar.";
		close;
	} else if (new_quest == 5) {
		mes "[Instrutora Jinha]";
		mes "Me parece que est� perdid"+(Sex == SEX_MALE ? "o":"a")+", n�o �.";
		mes "Porque n�o procura pelo";
		mes "^4d4dffInstrutor Brade^000000.";
		mes "Talvez ele possa lhe ajudar.";
		next;
		select ("N�o! Ele me mandou te procurar");
		mes "[Instrutora Jinha]";
		mes "Ent�o me desculpe.";
		mes "Mas o que ele pediu?";
		next;
		select ("Ele disse para aprender sobre habilidades");
		mes "[Instrutora Jinha]";
		mes "Ah sim!";
		mes "Habilidades � algo simples.";
		next;
		mes "[Instrutora Jinha]";
		mes "Voc� j� deve ter aprendido sobre experi�ncia n�o �?";
		mes "Ent�o toda vez que voc� ganha um level de sua classe.";
		mes "Tamb�m ganhar� 1 ponto de habilidade.";
		next;
		mes "[Instrutora Jinha]";
		mes "Esses pontos podem ser usados para ampliar suas habilidades.";
		next;
		mes "[Instrutora Jinha]";
		mes "Pressionando as teclas ^4a4afdALT + S^000000.";
		mes "Voc� ver� suas habilidades e a arvore de requisitos.";
		mes "Cada habilidade tem seu pr� requisito para poder utilizar.";
		next;
		mes "[Instrutora Jinha]";
		mes "Exitem diversos tipos de habilidades.";
		next;
		mes "[Instrutora Jinha]";
		mes "Passivas: Seu efeito � constante a todo momento, n�o � preciso usar-las.";
		next;
		mes "[Instrutora Jinha]";
		mes "Suporte: Podem ser usada em si pr�prio.";
		mes "Muitas dessas habilidades podem ser usadas em outras pessoas.";
		mes "E at� em monstros, basta que segure a tecla ^4a4afdShift^000000.";
		next;
		mes "[Instrutora Jinha]";
		mes "Ofensivas: Essas habilidades unicamente podem ser usadas contra inimigos em combate.";
		next;
		mes "[Instrutora Jinha]";
		mes "Area: Esses tipos de habilidades acert�o o ch�o.";
		mes "E tudo que tiver ao alcance da �rea de impacto ser� atingido.";
		mes "Dentro desse tipo de habilidades est�o as passivas, suporte e ofensivas.";
		next;
		mes "[Instrutora Jinha]";
		mes "Para utilizar uma habilidade primiro abra a janela de habilidades.";
		mes "E d� dois cliques sobre a habilidade que deseja usar.";
		next;
		cutin ("tutorial05",3);
		mes "[Instrutora Jinha]";
		mes "Uma forma mais f�cil de usar, n�o s� habilidades como tamb�m itens.";
		mes "� se favorecer das teclas de atalho que s�o da tecla ^4a4afdF1^000000 a tecla ^4a4afdF9^000000.";
		next;
		mes "[Instrutora Jinha]";
		mes "Precionando a tecla ^4a4afdF12^000000 voc� pode abir os compatimentos de atalhos.";
		mes "Esses mesmos compartimentos podem ser configurados por voc� no";
		mes "[^4a4afdMenu de Configura��es^000000].";
		next;
		mes "[Instrutora Jinha]";
		mes "Basta que segure a Habilidade ou Item com o bot�o esquerdo do mouse.";
		mes "E coloque em um dos compartimentos para habilitar a tecla de atalho.";
		next;
		cutin ("",255);
		if (!getskilllv("NV_FIRSTAID")) {
			mes "[Instrutora Jinha]";
			mes "Para come�ar vou te ensinar uma habilidade.";
			mes "Ela se chama ^ff0000Primeros Socorros^000000.";
			mes "Para que aprenda como utilizar habilidades.";
			next;
			mes "[Instrutora Jinha]";
			mes "Feche seus olhos agora.";
			mes ".....";
			next;
			mes "[Instrutora Jinha]";
			mes "......";
			specialeffect2 (EF_BEGINSPELL6);
			next;
			specialeffect2 (EF_SPELLBREAKER);
			skill ("NV_FIRSTAID",1,0);
			new_quest = 6;
			mes "[Instrutora Jinha]";
			mes "Olhe na sua janela de habilidades, para visualizar-la.";
			next;
			mes "[Instrutora Jinha]";
			mes "� uma habilidade de suporte muito simples.";
			mes "Que lhe permitirar cura-se em um momento dif�cil.";
			next;
			mes "[Instrutora Jinha]";
			mes "Bom isso � tudo que tenho a lhe ensinar.";
			close;
		}
		// Coloquei isso aqui mas � imposs�vel conseguir a habilidade sem ser pelo npc
		// Execto pelo comando @allskill
		else { new_quest = 6; close; }
		close;
	} else if (new_quest == 6) {
		mes "[Instrutora Jinha]";
		mes "Tudo que eu sabia j� lhe ensinei.";
		mes "Acho que o ^4d4dffInstrutor Brade^000000 poder� lhe ajudar.";
		close;
	} else {
		warp (strnpcinfo(NPC_MAP),41,172);
		savepoint (strnpcinfo(NPC_MAP),41,172);
		new_quest = 7;
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,73,106,0	script	newWarp2#new	WARPNPC,2,2,{
	if (new_quest != 7) { end; }
	else {
		warp (strnpcinfo(NPC_MAP),41,172);
		savepoint (strnpcinfo(NPC_MAP),41,172);
		end;
	}
}

// ------------------------------------------------------------------
// - [ Terceira Parte ] -
// ------------------------------------------------------------------
// new_1-2,28,185,5	script	Chocolati#new	4W_KID,{} // Seria o oficial mas n�o adicionei

// ------------------------------------------------------------------
new_1-2,38,182,4	script	Corpora��o Kafra#new	4_F_KAFRA1,{
	if ((new_quest > 6) && (new_quest < 11)) {
		cutin ("kafra_01",2);
		mes "[Funcion�ria Kafra]";
		mes "Fui designada pelo Escrit�rio Central Kafra a cuidar de Aprendizes como voc�.";
		mes "A Corpora��o Kafra � a maior empresa de todas.";
		next;
		mes "[Funcion�ria Kafra]";
		mes "Com uma antiga e distinta hist�ria no continente de Rune-Midgard.";
		mes "� importante que os aventureiros estejam pr�ximos de n�s.";
		next;
		mes "[Funcion�ria Kafra]";
		mes "Eu vou informar voc� sobre os Servi�os Kafra que usar� com uma frequ�ncia maior:";
		next;
		mes "[Funcion�ria Kafra]";
		mes "- Salvar Ponto de Retorno";
		mes "- Usar Armaz�m";
		mes "- Servi�o de Teletransporte.";
		next;
		mes "[Funcion�ria Kafra]";
		mes "Quando voc� falar com uma Funcion�ria Kafra e pedir pelo servi�o de Salvar Ponto de Retorno";
		next;
		mes "[Funcion�ria Kafra]";
		mes "O local aonde voc� retornar� depois de ser derrotado em uma batalha ser� alterado.";
		next;
		mes "[Funcion�ria Kafra]";
		mes "Seu Ponto de Retorno ser� sempre o �ltimo lugar em que voc� salvou.";
		mes "Usar uma Asa de Borboleta levar� voc� de volta para o lugar em que voc� salvou.";
		next;
		mes "[Funcion�ria Kafra]";
		mes "Este servi�o � gratuito, ent�o sinta-se livre para usar o Servi�o de Salvamento sempre que desejar.";
		next;
		if (new_quest == 8) {
			mes "[Funcion�ria Kafra]";
			mes "^ff0000Al�m da Corpora��o Kafra, outra empresa presta alguns desses de servi�os^000000.";
			next;
			mes "[Funcion�ria Kafra]";
			mes "^ff0000A Corpora��o de Eventos Incr�veis.";
			mes "Nesta sala h� uma representante.";
			mes "V� falar com ela para conhec�-la^000000.";
			next;
		} else if (new_quest == 9) {
			mes "[Funcion�ria Kafra]";
			mes "^ff0000Em praticalmente todas as cidades exitem guias.";
			mes "Que podem lhe orientar onde ficam os principais locais^000000.";
			next;
			mes "[Funcion�ria Kafra]";
			mes "^ff0000Nesta sala h� um representante.";
			mes "Porque n�o vai conversar com ele para conhecer-lo?^000000";
			next;
		} else if (new_quest == 10) {
			mes "[Funcion�ria Kafra]";
			mes "N�o h� mais nada para fazer aqui.";
			mes "Atravesse o portal e v� falar com o ^4a4afdInstrutor Brade^000000.";
			mes "Para come�ar a �ltima etapa do seu treinamento.";
			close2; cutin ("",255); end;
		} else if (new_quest == 7 ) {
			getitem Cargo_Free_Ticket,40;
			getitem Warp_Free_Ticket,60;
			new_quest = 8;
		}
		while (true) {
			switch (select("Salvamento","Uso do Armaz�m","Uso do teletransporte","Cancelar")) {
				case 1:
				mes "[Funcion�ria Kafra]";
				mes "Quando voc� morre em uma batalha, pode ressuscitar no lugar que voc� salvou com esse servi�o.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Se voc� salvar em uma cidade.";
				mes "Poder� ressuscitar na �ltima cidade em que salvou.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Usando a Asa de Borboleta, voc� pode se teletransportar diretamente para o ponto salvo.";
				mes "Ent�o, sinta-se � vontade para usar esse servi�o.";
				next; break;
				case 2:
				mes "[Funcion�ria Kafra]";
				mes "Voc� pode armazenar e retirar seus itens do armaz�m quando quiser.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "N�o tem sentido carregar todos os seus itens com voc�.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "J� que voc� n�o precisa de todos ao mesmo tempo.";
				mes "Por favor, use o nosso Armaz�m e mantenha os seus itens seguros e a salvo.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Nosso conveniente Servi�o de Armazenagem � fornecido aos nosso clientes.";
				mes "Por uma pequena taxa de 40 Zenys.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Por�m, voc� precisa ter pelo menos o ^4A4AFFN�vel 6 de Habilidades B�sicas^000000 para usar o Armaz�m.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Existem 7 se��es de itens diferentes no Armaz�m em quais os itens s�o organizados em:";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Consum�veis, Kafra (Itens de Cash), Armaduras, Armas, Muni��o, Cartas, e Miscel�nia.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Este Armaz�m � compartilhado por cada personagem em sua conta.";
				mes "Ent�o n�o se esque�a disso quando estiver usando nossos servi�os de armaz�m.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Qualquer um de seus personagens ter� acesso aos itens no armaz�m.";
				next; break;
				case 3:
				mes "[Funcion�ria Kafra]";
				mes "N�s tamb�m diponibilizamos um Servi�o de Teletransporte";
				mes "Para fazer suas viagens facilmente quando uma dist�ncia for longa.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Com nossa avan�ada habilidade de teletransporte, sua viagem ser� mais segura e confort�vel.";
				next;
				mes "[Funcion�ria Kafra]";
				mes "Ah e lembre-se que os lugares para onde voc� pode teletransportar variam de cidade para cidade.";
				next; break;
				case 4:
				mes "[Funcion�ria Kafra]";
				mes "Conte sempre com a Corpora��o Kafra quando precisar.";
				close2; cutin ("",255); end;
			}
		}
	} else if (new_quest > 10) {
		new_quest = 11;
		warp ("new_1-3",102,27);
		savepoint ("new_1-3",102,27);
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,17,182,5	script	Eventos Incr�veis#new	4_M_ZONDAMAN,{
	if (new_quest == 7) {
		mes "[Eventos Incr�veis]";
		mes "Voc� j� conversou com a funcion�ria kafra?";
		close;
	} else if (new_quest == 8) {
		cutin ("zonda_01",2);
		mes "[Eventos Incr�veis]";
		mes "Basicamente nossa empresa presta suporte a Corpora��o Kafra.";
		mes "Em locais mais longincos.";
		next;
		mes "[Eventos Incr�veis]";
		mes "Os �nicos servi�os que n�s n�o prestamos s�o:";
		mes "Aluguel de Carrinhos e Teletransporte.";
		next;
		mes "[Eventos Incr�veis]";
		mes "Sobre os demais servi�os, acredito que n�o preciso mais lhe dizer.";
		mes "Porque a funcion�ria kafra j� lhe explicou tudo.";
		close2;
		cutin ("",255);
		new_quest = 9;
		end;
	} else if (new_quest == 9) {
		mes "[Eventos Incr�veis]";
		mes "^ff0000Em praticalmente todas as cidades exitem guias.";
		mes "Que podem lhe orientar onde ficam os principais locais^000000.";
		next;
		mes "[Eventos Incr�veis]";
		mes "^ff0000Nesta sala h� um representante.";
		mes "Porque n�o vai conversar com ele para conhecer-lo?^000000";
		close;
	} else if (new_quest == 10) {
		mes "[Eventos Incr�veis]";
		mes "N�o h� mais nada para fazer aqui.";
		mes "Atravesse o portal e v� falar com o ^4a4afdInstrutor Brade^000000.";
		mes "Para come�ar a �ltima etapa do seu treinamento.";
		close;
	} else {
		new_quest = 11;
		warp ("new_1-3",102,27);
		savepoint ("new_1-3",102,27);
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,28,185,4	script	Guia#new	8W_SOLDIER,{
	if (new_quest == 7) {
		mes "[Guia]";
		mes "Voc� j� conversou com a funcion�ria kafra?";
		close;
	} else if (new_quest == 8) {
		mes "[Guia]";
		mes "Na minha esquerda, tem uma funcion�ria da Corpora��o Eventos Incr�veis.";
		mes "Voc� j� conversou com ela?";
		close;
	} else if (new_quest == 9) {
		cutin ("prt_soldier",2);
		mes "[Guia]";
		mes "Os Guias est�o em cada cidade para guiar voc� para lugares �teis.";
		mes "Pergunte-nos onde voc� quer ir e n�s vamos marcar o local em seu mini-mapa com uma ^4a4aff+^000000.";
		next;
		mes "[Guia]";
		mes "N�o hesite em fazer perguntas, sempre que quiser saber a localiza��o de algo.";
		close2;
		new_quest = 10;
		completequest (7121);
		cutin ("",255);
		end;
	} else if (new_quest == 10) {
		mes "[Guia]";
		mes "N�o h� mais nada para fazer aqui.";
		mes "Atravesse o portal e v� falar com o ^4a4afdInstrutor Brade^000000.";
		mes "Para come�ar a �ltima etapa do seu treinamento.";
		close;
	} else {
		warp ("prontera",273,354);
		savepoint ("prontera",273,354);
		new_quest = 0;
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,23,190,0	script	newWarp3#new	WARPNPC,2,2,{
	if (new_quest != 10) { end; }
	else {
		new_quest = 11;
		warp ("new_1-3",102,27);
		savepoint ("new_1-3",102,27);
		end;
	}
}

// ------------------------------------------------------------------
// - [ Quarta Parte ] -
// ------------------------------------------------------------------
new_1-3,96,30,1	script	Brade#new2	4_M_JOB_KNIGHT1,{
	if (new_quest == 11) {
		mes "[Instrutor Brade]";
		mes "Olha quem est� aqui?!";
		next;
		mes "[Instrutor Brade]";
		mes "Preparado mapa come�ar a �ltima parte do seu treinamento?";
		mes "Para come�ar vou lhe dar uma tarefa simples e f�cil";
		next;
		mes "[Instrutor Brade]";
		mes "Quero que voc� encontre um monstro ^ff0000Poring^000000 e o derrote!";
		next;
		mes "[Instrutor Brade]";
		mes "Sei que vai conseguir, boa sorte!";
		new_quest = 12;
		getitem (Novice_Potion,100);
		setquest (7122);
		close;
	} else if ((new_quest >= 12) && (new_quest < 17)) {
		if (questprogress(7122,HUNTING) == 2) {
			completequest (7122);
			getexp (3000,0);
			getitem (N_Cutter,1);
			getitem (Novice_Potion,500);
			npcskill ("AL_HEAL",11,99,99);
			new_quest = 17;
			mes "[Instrutor Brade]";
			mes "Muito bom!";
			mes "N�o disse que seria uma tarefa muito f�cil!";
			next;
			if (getskilllv("NV_BASIC") < 9) {
				mes "[Instrutor Brade]";
				mes "A partir de agora seu �nico objetivo aqui.";
				mes "� conseguir deixar suas ^4a4affHabilidades B�sicas^000000 no N�vel 9";
				next;
				mes "[Instrutor Brade]";
				mes "Quando conseguir venha falar comigo novamente.";
				mes "Que lhe enviarei a uma cidade de sua escolha no Reino de Rune-Midgard.";
				next;
				mes "[Instrutor Brade]";
				mes "Assim poder� come�ar sua jornada de aventuras.";
				next;
				mes "[Instrutor Brade]";
				mes "Se desejar mais algumas miss�es.";
				mes "Ou saber mais sobre cada classe.";
				mes "Fale com os representantes das Guildas atr�s de mim.";
				next;
				mes "[Instrutor Brade]";
				mes "Caso queira, eles tamb�m podem lhe levar direto para o local.";
				mes "Onde poder� fazer o teste de mudan�a de classe.";
				next;
				mes "[Instrutor Brade]";
				mes "Contudo podemos dizer que voc� completou seu treinamento.";
				close;
			} else {
				mes "[Instrutor Brade]";
				mes "Quando quiser deixar o campo de treinamento.";
				mes "Fale comigo novamente.";
				mes "Que lhe enviarei a uma cidade de sua escolha no Reino de Rune-Midgard.";
				next;
				mes "[Instrutor Brade]";
				mes "Assim poder� come�ar sua jornada de aventuras.";
				next;
				mes "[Instrutor Brade]";
				mes "Se desejar mais algumas miss�es.";
				mes "Ou saber mais sobre cada classe.";
				mes "Fale com os representantes das Guildas atr�s de mim.";
				next;
				mes "[Instrutor Brade]";
				mes "Caso queira, eles tamb�m podem lhe levar direto para o local.";
				mes "Onde poder� fazer o teste de mudan�a de classe.";
				next;
				mes "[Instrutor Brade]";
				mes "Contudo podemos dizer que voc� completou seu treinamento.";
				close;
			}
		} else {
			mes "[Instrutor Brade]";
			mes "Ainda n�o derrou o Poring?";
			mes "Vamos l�! Sei que voc� consegue!";
			// Um bloqueio para ficar impedindo que o usu�rio usufrua da cura para upar (Max. Uso 3X)!
			if (new_quest <= 15) {
				new_quest ++;
				npcskill ("AL_HEAL",11,99,99);
			}
			close;
		}
	} else {
		if (getskilllv("NV_BASIC") < 9) {
			mes "[Instrutor Brade]";
			mes "A partir de agora seu �nico objetivo aqui.";
			mes "� conseguir deixar suas ^4a4affHabilidades B�sicas^000000 no N�vel 9";
			next;
			mes "[Instrutor Brade]";
			mes "Quando conseguir venha falar comigo novamente.";
			mes "Que lhe enviarei a uma cidade de sua escolha no Reino de Rune-Midgard.";
			next;
			mes "[Instrutor Brade]";
			mes "Assim poder� come�ar sua jornada de aventuras.";
			next;
			mes "[Instrutor Brade]";
			mes "Se desejar mais algumas miss�es.";
			mes "Ou saber mais sobre cada classe.";
			mes "Fale com os representantes das Guildas atr�s de mim.";
			next;
			mes "[Instrutor Brade]";
			mes "Caso queira eles tamb�m podem lhe levar direto para o local.";
			mes "Onde poder� fazer o teste de mudan�a de classe.";
			next;
			mes "[Instrutor Brade]";
			mes "Contudo podemos dizer que voc� completou seu treinamento.";
			close;
		} else {
			mes "[Instrutor Brade]";
			mes "� parece que voc� n�o tem mais nada para fazer aqui.";
			mes "Mas poder� ficar o tempo que quiser.";
			next;
			mes "[Instrutor Brade]";
			mes "Posso lhe enviar agora para uma cidade no Reino de Rune-Midgard.";
			mes "Depois que sair n�o vai poder voltar mais aqui.";
			next;
			mes "[Instrutor Brade]";
			mes "Se preferir fale com os representantes das guildas!";
			mes "Eles podem lhe levar diretamente para os locais.";
			next;
			mes "[Instrutor Brade]";
			mes "Onde poder� realizar o Teste de Mudan�a de Classe.";
			next;
			if (select("Quero ir para as cidades","Vou falar com eles ent�o.") == 1) {
				next;
				mes "[Instrutor Brade]";
				mes "A decis�o � sua, a partir de agora um mundo infinito de possibilidades "+(Sex == SEX_MALE ? "o":"a")+" espera!";
				mes "Me diga para onde quer ir?";
				next;
				switch (select("Prontera","Morroc","Payon","Alberta","Geffen","Ficar mais tempo aqui")) {
					case 1:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Prontera a capital de Rune-Midgard.";
					close2;
					savepoint ("prontera",117,72);
					warp ("prontera",150,50);
					end;
					case 2:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Morroc a cidade no deserto.";
					close2;
					savepoint ("morocc",150,99);
					warp ("morocc",155,110);
					end;
					case 3:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Payon a cidade nas Montanhas.";
					savepoint ("payon",70,100);
					warp ("payon",166,67);
					close2;
					end;
					case 4:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Alberta a cidade portu�ria.";
					savepoint ("alberta",30,232);
					warp ("alberta",114,58);
					close2;
					end;
					case 5:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Geffen a cidade da magia.";
					savepoint ("geffen",119,37);
					warp ("geffen",122,65);
					close2;
					end;
					case 6:
					mes "[Instrutor Brade]";
					mes "Fique o tempo que achar necess�rio.";
					close;
				}
			}
			mes "[Instrutor Brade]";
			mes "Boa escolha.";
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,100,19,1	script	Espadachim#new	4_F_JOB_KNIGHT,{
	if (new_quest < 17) {
		mes "[Espadachim]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	} else {
		mes "[Espadachim]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Espadachins","Pode me dar alguma Miss�o?","Quero ser Espadachim","Nada")) {
			case 1:
			mes "[Espadachim]";
			mes "Como o pr�prio nome diz.";
			mes "Os Espadachins s�o expecializados no uso da espada.";
			mes "Mas podem equipar quase todo tipo de arma, execto arcos e cajados.";
			next;
			mes "[Espadachim]";
			mes "A principal vantagem do espadachim � seu HP muito maior que das outras classes.";
			mes "E seu poder de ataque f�sico tamb�m muito superior as outras classes.";
			next;
			mes "[Espadachim]";
			mes "Suas desvantagens s�o em enfrentar inimigos que acertam de longa dist�ncia.";
			mes "E muito vuner�vel a ataques m�gicos.";
			next;
			mes "[Espadachim]";
			mes "Em um grupo o espadachim assume a postura de \"Tanque\".";
			mes "Um tanque � aquele que suporta ataques dos oponetes para proteger os outros mais fracos.";
			next;
			mes "[Espadachim]";
			mes "O espadachim quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffCavaleiro^000000 ou ^0000ffTempl�rio^000000";
			next;
			while (true) {
				mes "[Espadachim]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre os Cavaleiros","Sobre os Templ�rios","Experimentar Habilidades do Espadachim","Cancelar")) {
					case 1:
					mes "[Espadachim]";
					mes "Muitos podem pensar que o cavaleiro � um espadachim com maior poder.";
					mes "Mas n�o � bem assim.";
					mes "Cavaleiros s�o mestres no uso de Espadas, principalmente espadas de duas m�os.";
					mes "N�o s� espadas como lan�as tamb�m.";
					mes "O que os fazem bons combatentes at� mesmo contra enimigos que atacam a longa dist�ncia.";
					next;
					mes "[Espadachim]";
					mes "Possui um poder de ataque descomunal.";
					mes "Mas em infelismente s�o extremamente vulner�veis a ataques m�gicos.";
					next; break;
					case 2:
					mes "[Espadachim]";
					mes "Templ�rios assim como s�o conhecidos s�o os guerreiros de Deus.";
					mes "Possuem uma F� inabal�vel, o que lhe permitem ter um HP de longe o maior diante as outras classes.";
					next;
					mes "[Espadachim]";
					mes "Grandes mestres no uso da Espada junto a um Escudo.";
					mes "E at� mesmo o escudo ele utiliza como arma para lutar.";
					mes "O que tamb�m n�o os tornam menos eficientes no uso de lan�as, principalmente se ela for de duas m�os.";
					next;
					mes "[Espadachim]";
					mes "Muito resistente contra qualquer tipo de ataque faz o templ�rio, ser uma verdadeira fortaleza!";
					mes "Infelismente toda essa defesa, faz seu ataque n�o ser um dos melhores.";
					next; break;
					case 3:
					mes "[Espadachim]";
					if (!countitem(Swordman_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade t�pica dos espadachins.";
						getitem (Swordman_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade t�pica dos espadachins.";
					close;
					case 4:
					mes "[Espadachim]";
					mes "Estarei aqui caso precise saber algo sobre os Espadachins.";
					close;
				}
			}
			case 2:
			mes "[Espadachim]";
			if (!questprogress(7123)) {
				mes "Voc� quer uma miss�o?!";
				mes "Ent�o veremos... Encontre 2 Picky's e os derrote";
				next;
				mes "[Espadachim]";
				mes "Estarei esperando seu regre�o.";
				setquest (7123);
				close;
			} else if (questprogress(7123) == 2) {
				mes "Eu n�o tenho mais miss�es para voc�.";
				close;
			} else {
				if (questprogress(7123,HUNTING) == 2) {
					mes "Muito bem!";
					mes "Sabia que voc� seria "+(Sex == SEX_MALE ? "um �timo":"uma �tima")+" espadachim!";
					next;
					mes "[Espadachim]";
					mes "Est� aqui sua recompensa.";
					completequest (7123);
					getitem (Novice_Potion,200);
					getexp (5000,100);
					close;
				} else {
					mes "Ainda estou esperando voc� derrotar os 2 Picky's que lhe falei.";
					close;
				}
			}
			case 3:
			mes "[Espadachim]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Espadachins.";
				mes "Voc� deve ter suas Habilidades B�sicas no N�vel 9";
				next;
				mes "[Espadachim]";
				mes "S� a� ent�o venha falar comigo, caso ainda queira ser tornar espadachim.";
				close;
			} else {
				mes "Ent�o teremos "+(Sex == SEX_MALE ? "um candidato":"uma candidata")+" a ser tornar espadachim.";
				mes "Nada mau, mas � realmente isso que deseja?";
				mes "Se sair n�o vai mais poder voltar a esse lugar.";
				next;
				mes "[Espadachim]";
				mes "Deseja ir agora a Guilda dos Espadachins na Cidade Izlude?";
				next;
				if (select("Sim quero ser espadachim","N�o vou ficar mais um pouco") == 1) {
					mes "[Espadachim]";
					mes "Certo espero que fa�a um bom teste para se tornar espadachim.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("izlude",94,103);
					warp ("izlude_in",74,167);
					end;
				}
				mes "[Espadachim]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar espadachim.";
				mes "Fale comigo novamente.";
				close;
			}
			case 4:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,102,19,1	script	Mago#new	2_F_MAGICMASTER,{
	if (new_quest < 17) {
		mes "[Mago]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	} else {
		mes "[Mago]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Magos","Pode me dar alguma Miss�o?","Quero ser Mago","Nada")) {
			case 1:
			mes "[Mago]";
			mes "Um mago como j� deve perceber, � aquele que se utiliza de magia.";
			mes "Tanto para ataque quanto para defesa.";
			next;
			mes "[Mago]";
			mes "A principal vantagem do Mago � seu SP muito maior que a das outras classes.";
			mes "E seu poder de ataque m�gico � muito superior as outras classes.";
			next;
			mes "[Mago]";
			mes "Suas desvantagens s�o em enfrentar inimigos que acertam a curta dist�ncia.";
			mes "E muito fr�geis a ataques f�sicos diretos.";
			next;
			mes "[Mago]";
			mes "Em um grupo o Mago � aquele que vai cudar dos oponetes mais fortes.";
			mes "Pois com um �nico ataque m�gico o mago pode eliminar enimigos muito mais poderosos do que ele mesmo.";
			next;
			mes "[Mago]";
			mes "O Mago quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffBruxo^000000 ou ^0000ffS�bio^000000";
			next;
			while (true) {
				mes "[Mago]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre os Bruxos","Sobre os S�bios","Experimentar Habilidades do Mago","Cancelar")) {
					case 1:
					mes "[Mago]";
					mes "O Bruxo � aquele mago que ultrapassou os limites da magia.";
					mes "Eles podem conjurar ataques m�gicos muito poderosos.";
					mes "Seu poder de ataque m�gico � inigual�vel.";
					next;
					mes "[Mago]";
					mes "Bruxos prov�m de habilidades de area imprecionantes que podem eliminar dezenas de inimigos de uma s� vez.";
					mes "Por outro lado s�o muito fracos a qualquer tipo de ataque.";
					mes "Pois suas magias por serem t�o poderosas precisam de alto poder de concentra��o para lan�ar.";
					mes "E nesse momento o bruxo estar� completamente vuner�vel, podendo ser tamb�m derrotado com um �nico ataque.";
					next; break;
					case 2:
					mes "[Mago]";
					mes "Os s�bios s�o aqueles que buscam o conhecimento e entendimento maior sobre como usar a magia.";
					mes "Por esse motivo, s�o muito eficientes contra qualquer tipo de enimigo.";
					next;
					mes "[Mago]";
					mes "S�bios n�o possuem grande poder de ataque m�gico.";
					mes "E seus poucos ataques m�gicos, vem dos que eles aprenderam quando ainda eram magos.";
					next;
					mes "[Mago]";
					mes "As suas principais habilidades s�o voltadas para a defesa.";
					mes "Sendo muito dif�cil atingir um s�bio com ataques f�sicos ou m�gicos.";
					next; break;
					case 3:
					mes "[Mago]";
					if (!countitem(Mage_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade t�pica dos magos.";
						getitem (Mage_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade t�pica dos magos.";
					close;
					case 4:
					mes "[Mago]";
					mes "Estarei aqui caso precise saber algo sobre os Magos.";
					close;
				}
			}
			case 2:
			mes "[Mago]";
			if (!questprogress(7124)) {
				mes "Voc� quer uma miss�o?!";
				mes "Ent�o veremos... Encontre 5 Lun�ticos e os derrote";
				next;
				mes "[Mago]";
				mes "Estarei esperando seu regre�o.";
				setquest (7124);
				close;
			} else if (questprogress(7124) == 2) {
				mes "Eu n�o tenho mais miss�es para voc�.";
				close;
			} else {
				if (questprogress(7124,HUNTING) == 2) {
					mes "Muito bem!";
					mes "Sabia que voc� seria "+(Sex == SEX_MALE ? "um �timo Mago":"uma �tima Maga")+"!";
					next;
					mes "[Mago]";
					mes "Est� aqui sua recompensa.";
					completequest (7124);
					getitem (N_Butterfly_Wing,60);
					getexp (5000,100);
					close;
				} else {
					mes "Ainda estou esperando voc� derrotar os 2 Picky's que lhe falei.";
					close;
				}
			}
			case 3:
			mes "[Mago]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Magos.";
				mes "Voc� deve ter suas Habilidades B�sicas no N�vel 9";
				next;
				mes "[Mago]";
				mes "S� a� ent�o venha falar comigo, caso ainda queira ser tornar Mago.";
				close;
			} else {
				mes "Ent�o teremos "+(Sex == SEX_MALE ? "um candidato":"uma candidata")+" a ser tornar Mago.";
				mes "Nada mau, mas � realmente isso que deseja?";
				mes "Se sair n�o vai mais poder voltar a esse lugar.";
				next;
				mes "[Mago]";
				mes "Deseja ir agora a Guilda dos Magos na Cidade Geffen?";
				next;
				if (select("Sim quero ser Mago","N�o vou ficar mais um pouco") == 1) {
					mes "[Mago]";
					mes "Certo espero que fa�a um bom teste para se tornar Mago.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("geffen",119,38);
					warp ("geffen_in",163,98);
					end;
				}
				mes "[Mago]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Mago.";
				mes "Fale comigo novamente.";
				close;
			}
			case 4:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,104,19,1	script	Mercador#new	4W_M_01,{
	if (new_quest < 17) {
		mes "[Mercador]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	} else {
		mes "[Mercador]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Mercadores","Pode me dar alguma Miss�o?","Quero ser Mercador","Nada")) {
			case 1:
			mes "[Mercador]";
			mes "Mercadores s�o simplesmente comerciantes.";
			mes "N�o s�o habilidosos em combate.";
			mes "N�o possuem nada que os favore�am em derrotar enimigos.";
			next;
			mes "[Mercador]";
			mes "Mas possuem a facilidade em aculumar riquesas.";
			mes "Podem comprar itens por um valor muito inferior ao pre�o real.";
			mes "E tamb�m vender itens pelo pre�o muito maior do que o normal.";
			next;
			mes "[Mercador]";
			mes "O mercador � o �nico que � certificado para abrir uma loja e vender.";
			mes "Isso mesmo, mercadores podem abrir uma loja e vender seus itens a outras pessoas.";
			next;
			mes "[Mercador]";
			mes "O Mercador quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffAlquimista^000000 ou ^0000ffFerreiro^000000";
			next;
			while (true) {
				mes "[Mercador]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre os Alquimistas","Sobre os Ferreiros","Experimentar Habilidades do Mercador","Cancelar")) {
					case 1:
					mes "[Mercador]";
					mes "Alquimistas como o nome j� diz, s�o expecializados em alquimia.";
					mes "Podem produzir diversos tipos de po��es.";
					mes "Algumas usadas para cura outras como literalmente uma bomba, arremessando-as contra inimigos.";
					next;
					mes "[Mercador]";
					mes "Eles n�o possuem nenhum tipo de poder de combate!";
					mes "Para isso podem gerar um ser vivo h�brido, conhecido como \"Homunculo\" para lutar em seu lugar.";
					next; break;
					case 2:
					mes "[Mercador]";
					mes "Os Ferreiros, s�o mestres em combate.";
					mes "Devido a sua grande habilidade no manuseio de diversos tipos de armas.";
					mes "S�o capazes de produzir uma infinidade de armas diferentes.";
					next;
					mes "[Mercador]";
					mes "Seu ataque � descomunal, pois junta uma alta velocidade de ataque com muito poder de ataque.";
					mes "Por�m apesar de luterem muito bem corpo a corpo n�o s�o resistentes.";
					next; break;
					case 3:
					mes "[Mercador]";
					if (!countitem(Merchant_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade t�pica dos Mercadores.";
						getitem (Merchant_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade t�pica dos Mercadores.";
					close;
					case 4:
					mes "[Mercador]";
					mes "Estarei aqui caso precise saber algo sobre os Mercadores.";
					close;
				}
			}
			case 2:
			mes "[Mercador]";
			if (!questprogress(7126)) {
				mes "Voc� quer uma miss�o?!";
				mes "Ent�o veremos... Colete itens dos monstros e os venda-os";
				mes "Quando conseguir acumular 300 Zenys, volte aqui.";
				next;
				mes "[Mercador]";
				mes "Estarei esperando seu regre�o.";
				setquest (7126);
				close;
			} else if (questprogress(7126) == 2) {
				mes "Eu n�o tenho mais miss�es para voc�.";
				close;
			} else {
				if (Zeny >= 300) {
					mes "Muito bem!";
					mes "Sabia que voc� seria "+(Sex == SEX_MALE ? "um �timo Mercador":"uma �tima Mercadora")+"!";
					next;
					mes "[Mercador]";
					mes "Est� aqui sua recompensa.";
					completequest (7126);
					getitem (Novice_Potion,500);
					getexp (5000,100);
					close;
				} else {
					mes "Ainda estou esperando voc� acumular os 300 Zenys.";
					close;
				}
			}
			case 3:
			mes "[Mercador]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Mercadors.";
				mes "Voc� deve ter suas Habilidades B�sicas no N�vel 9";
				next;
				mes "[Mercador]";
				mes "S� a� ent�o venha falar comigo, caso ainda queira ser tornar Mercador.";
				close;
			} else {
				mes "Ent�o teremos "+(Sex == SEX_MALE ? "um candidato":"uma candidata")+" a ser tornar Mercador.";
				mes "Nada mau, mas � realmente isso que deseja?";
				mes "Se sair n�o vai mais poder voltar a esse lugar.";
				next;
				mes "[Mercador]";
				mes "Deseja ir agora a Guilda dos Mercadores na Cidade Alberta?";
				next;
				if (select("Sim quero ser Mercador","N�o vou ficar mais um pouco") == 1) {
					mes "[Mercador]";
					mes "Certo espero que fa�a um bom teste para se tornar Mercador.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("alberta",29,231);
					warp ("alberta_in",62,44);
					end;
				}
				mes "[Mercador]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Mercador.";
				mes "Fale comigo novamente.";
				close;
			}
			case 4:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,106,19,1	script	Gaturno#new	2_M_THIEFMASTER,{
	if (new_quest < 17) {
		mes "[Gaturno]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	} else {
		mes "[Gaturno]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Gaturnos","Pode me dar alguma Miss�o?","Quero ser Gaturno","Nada")) {
			case 1:
			mes "[Gaturno]";
			mes "Gaturnos n�o s�o meros ladr�es.";
			mes "Apesar que somos �timos nisso, podemos roubar zenys e itens de monstros com facilidade.";
			next;
			mes "[Gaturno]";
			mes "A principal vantagem do Gaturno � sua velocidade de ataque e esquiva muito elevada.";
			mes "Cujo as outras classes nem chegam perto.";
			mes "Tornando o gaturno muito habilidoso no combate corpo a corpo.";
			next;
			mes "[Gaturno]";
			mes "O gaturno pode-se desviar facilidade de todos tipos de ataque se escondendo dentro do ch�o.";
			mes "Mas em compensa��o suas defesas s�o p�ssimas.";
			mes "Um �nico ataque seja l� qual for j� pode ser o bastante para nos derrubar.";
			next;
			mes "[Gaturno]";
			mes "N�o somos muito eficientes para um grupo, pois nossos ataques mesmo velozes s�o muito fracos.";
			mes "O que n�o nos impede como disse de ser muito perigosos no combate corpo a corpo.";
			mes "Tamb�m n�o possu�mos um HP auto nem desesa, mas com nossa esquiva dif�cilmente somos atingidos.";
			next;
			mes "[Gaturno]";
			mes "O Gaturno quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffArruaceiro^000000 ou ^0000ffMercen�rio^000000";
			next;
			while (true) {
				mes "[Gaturno]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre os Arruaceiros","Sobre os Mercen�rios","Experimentar Habilidades do Gaturno","Cancelar")) {
					case 1:
					mes "[Gaturno]";
					mes "Os Arruaceiros suprem as falhas em HP e defesa que tinha quando eram gaturnos.";
					mes "Possuem �tima defesa e um HP at� consider�vel.";
					next;
					mes "[Gaturno]";
					mes "Incrivelmente habilidosos com armas do tipo adaga.";
					mes "Pode lutar tranquilamente corpo a corpo com enimigos muito mais poderosos que eles mesmos.";
					next; break;
					case 2:
					mes "[Gaturno]";
					mes "Mercen�rios s�o combatentes sil�nciosos.";
					mes "Eles vagam por a� invis�veis e eliminam eminigos sem mesmo que eles percebam o que os atingiram.";
					next;
					mes "[Gaturno]";
					mes "S�o os �nicos com maestria para utilizar a arma do Tipo Katar.";
					mes "Por isso tamb�m podem usar duas adagas ou espadas simult�neamente.";
					next; break;
					case 3:
					mes "[Gaturno]";
					if (!countitem(Thief_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade t�pica dos Gaturnos.";
						getitem (Thief_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade t�pica dos Gaturnos.";
					close;
					case 4:
					mes "[Gaturno]";
					mes "Estarei aqui caso precise saber algo sobre os Gaturnos.";
					close;
				}
			}
			case 2:
			mes "[Gaturno]";
			if (!questprogress(7127)) {
				mes "Voc� quer uma miss�o?!";
				mes "Ent�o veremos... Encontre 5 Salgueiros e os derrote";
				next;
				mes "[Gaturno]";
				mes "Estarei esperando seu regre�o.";
				setquest (7127);
				close;
			} else if (questprogress(7127) == 2) {
				mes "[Gaturno]";
				mes "Eu n�o tenho mais miss�es para voc�.";
				close;
			} else {
				if (questprogress(7127,HUNTING) == 2) {
					mes "Muito bem!";
					mes "Sabia que voc� seria "+(Sex == SEX_MALE ? "um �timo Gaturno":"uma �tima Gaturna")+"!";
					next;
					mes "[Gaturno]";
					mes "Est� aqui sua recompensa.";
					completequest (7127);
					getitem (N_Fly_Wing,100);
					getexp (5000,100);
					close;
				} else {
					mes "Ainda estou esperando voc� derrotar os 2 Picky's que lhe falei.";
					close;
				}
			}
			case 3:
			mes "[Gaturno]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Gaturnos.";
				mes "Voc� deve ter suas Habilidades B�sicas no N�vel 9";
				next;
				mes "[Gaturno]";
				mes "S� a� ent�o venha falar comigo, caso ainda queira ser tornar Gaturno.";
				close;
			} else {
				mes "Ent�o teremos "+(Sex == SEX_MALE ? "um candidato":"uma candidata")+" a ser tornar Gaturno.";
				mes "Nada mau, mas � realmente isso que deseja?";
				mes "Se sair n�o vai mais poder voltar a esse lugar.";
				next;
				mes "[Gaturno]";
				mes "Deseja ir agora a Guilda dos Gaturnos na Pir�mide pr�xima a Cidade Morroc?";
				next;
				if (select("Sim quero ser Gaturno","N�o vou ficar mais um pouco") == 1) {
					mes "[Gaturno]";
					mes "Certo espero que fa�a um bom teste para se tornar Gaturno.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("morocc",150,100);
					warp ("moc_prydb1",99,185);
					end;
				}
				mes "[Gaturno]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Gaturno.";
				mes "Fale comigo novamente.";
				close;
			}
			case 4:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,108,19,1	script	Arqueiro#new	4_F_JOB_HUNTER,{
	if (new_quest < 17) {
		mes "[Arqueiro]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	} else {
		mes "[Arqueiro]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Arqueiros","Quero ser Arqueiro","Nada")) {
			case 1:
			if (Sex == SEX_MALE) { .@jobsex$ = "Bardo"; } else { .@jobsex$ = "Odalisca"; }
			mes "[Arqueiro]";
			mes "Arqueiros s�o expecializados em combate a dist�ncia.";
			mes "Muito eficientes nisso podem eliminar seus oponentes antes mesmos que eles consigam chegar perto.";
			next;
			mes "[Arqueiro]";
			mes "Um arqueiro deve sempre est� atento e evitar que os enimigos se aproximem.";
			mes "Pois ele n�o possui resist�ncia alguma.";
			mes "Assim sendo em um combate direto corpo a corpo ele ser� facilmente derrotado.";
			next;
			mes "[Arqueiro]";
			mes "O Arqueiro quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffCa�ador^000000 ou ^0000ff"+.@jobsex$+"^000000";
			next;
			while (true) {
				mes "[Arqueiro]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre Ca�ador","Sobre "+.@jobsex$,"Experimentar Habilidades do Arqueiro","Cancelar")) {
					case 1:
					mes "[Arqueiro]";
					mes "Ca�adores como o pr�prio nome diz s�o mestre na ca�a, devido alto grau de habilidade com Arco e Flecha.";
					mes "Ninigual�vel quando o assunto for derrotar enimigos.";
					mes "Geralmente quando o ca�ador ataca sua v�tima ele o elimina em poucos segundos, com ataques avassaladores a longa dist�ncia.";
					next;
					mes "[Arqueiro]";
					mes "Podem domesticar um falc�o para lhe ajudar em batalha.";
					mes "Mesmo com toda sua vantagem da longa dist�ncia, continua a ser altamente vuner�vel a qualquer tipo de ataque!";
					next; break;
					case 2:
					mes "[Arqueiro]";
					if (Sex == SEX_MALE) {
						mes "Bardos n�o bons em combate.";
						mes "No que eles s�o bons s�o em tocar can��es...";
						next;
						mes "[Arqueiro]";
						mes "Mas n�o se engane, que s�o simples m�sicas.";
						mes "Essas mesmas can��es podem almentar os poderes dele mesmo e de aliados.";
						mes "Ao mesmo tempo de pode reduzir drasticamente as for�as dos enimigos.";
						next;
						mes "[Arqueiro]";
						mes "Principalmente se a can��o for tocada em \"Dueto com as Odaliscas\"!";
					} else {
						mes "Odaliscas n�o boas em combate.";
						mes "No que eles s�o bons s�o em dan�ar";
						next;
						mes "[Arqueiro]";
						mes "Mas n�o se engane, que s�o simples dan�as.";
						mes "Essas mesmas dan�as podem almentar os poderes dela mesma e de aliados.";
						mes "Ao mesmo tempo de pode resuzir drasticamente as for�as dos enimigos.";
						next;
						mes "[Arqueiro]";
						mes "Principalmente se for dan�a estiver em \"Dueto com os Bardos\"!";
					}
					next; break;
					case 3:
					mes "[Arqueiro]";
					if (!countitem(Archer_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade t�pica dos Arqueiros.";
						getitem (Archer_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade t�pica dos Arqueiros.";
					close;
					case 4:
					mes "[Arqueiro]";
					mes "Estarei aqui caso precise saber algo sobre os Arqueiros.";
					close;
				}
			}
			case 2:
			mes "[Arqueiro]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Arqueiros.";
				mes "Voc� deve ter suas Habilidades B�sicas no N�vel 9";
				next;
				mes "[Arqueiro]";
				mes "S� a� ent�o venha falar comigo, caso ainda queira ser tornar Arqueiro.";
				close;
			} else {
				mes "Ent�o teremos "+(Sex == SEX_MALE ? "um candidato":"uma candidata")+" a ser tornar Arqueiro.";
				mes "Nada mau, mas � realmente isso que deseja?";
				mes "Se sair n�o vai mais poder voltar a esse lugar.";
				next;
				mes "[Arqueiro]";
				mes "Deseja ir agora a para a Guilda dos Arqueiros pr�xima a cidade Payon?";
				next;
				if (select("Sim quero ser Arqueiro","N�o vou ficar mais um pouco") == 1) {
					mes "[Arqueiro]";
					mes "Certo espero que fa�a um bom teste para se tornar Arqueiro.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("payon",256,242);
					warp ("payon_in02",64,65);
					end;
				}
				mes "[Arqueiro]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Arqueiro.";
				mes "Fale comigo novamente.";
				close;
			}
			case 3:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,110,19,1	script	Novi�o#new	4_F_SISTER,{
	if (new_quest < 17) {
		mes "[Novi�o]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	} else {
		mes "[Novi�o]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Novi�os","Quero ser Novi�o","Nada")) {
			case 1:
			mes "[Novi�o]";
			mes "Novi�os s�o eficiencia em combate.";
			mes "Pelo contr�rio eles possuem habilidades para auxiliar outras pessoas nessa tarefa.";
			next;
			mes "[Novi�o]";
			mes "Um Novi�o sempre � bem vindo em um grupo.";
			mes "Pois eles podem curar e ampliar o ataque f�sico, m�gico ou defesa de seus aliados.";
			next;
			mes "[Novi�o]";
			mes "O Novi�o quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffSacerdote^000000 ou ^0000ffMonge^000000";
			next;
			while (true) {
				mes "[Novi�o]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre o Sacerdote","Sobre o Monge","Experimentar Habilidades do Novi�o","Cancelar")) {
					case 1:
					mes "[Novi�o]";
					mes "O sacerdote � aquele novi�o que ampliou suas hablidades de suporte.";
					mes "� muito resistente, dificilmente ser� derrotado por um enimigo.";
					next;
					mes "[Novi�o]";
					mes "Mas continuam obsoletos no ataque, execto se o enimigo for do tipo sombrio.";
					mes "Pois ele possui muitas habilidades para enfrentar-los.";
					next; break;
					case 2:
					mes "[Novi�o]";
					mes "Monges, deixaram de lado o recato, e desenvolveram habilidade de combate corpo a corpo.";
					mes "S�o �timos lutadores e possuem habilidades que podem vencer oponentes facilmente.";
					mes "At� os mais poderosos e resistentes enimigos, ele pode derrotar-los com um �nico golpe!";
					next;
					mes "[Novi�o]";
					mes "Tamb�m possuem boa resit�ncia f�sica.";
					mes "Mas mesmo assim suas defesas nem seu HP s�o o suficientes para um combate longo.";
					mes "Principalmente se for contra v�rios enimigos.";
					next; break;
					case 3:
					mes "[Novi�o]";
					if (!countitem(Acolyte_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade t�pica dos Novi�os.";
						getitem (Acolyte_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade t�pica dos Novi�os.";
					close;
					case 4:
					mes "[Novi�o]";
					mes "Estarei aqui caso precise saber algo sobre os Novi�os.";
					close;
				}
			}
			case 2:
			mes "[Novi�o]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Novi�os.";
				mes "Voc� deve ter suas Habilidades B�sicas no N�vel 9";
				next;
				mes "[Novi�o]";
				mes "S� a� ent�o venha falar comigo, caso ainda queira ser tornar Novi�o.";
				close;
			} else {
				mes "Ent�o teremos "+(Sex == SEX_MALE ? "um candidato":"uma candidata")+" a ser tornar Novi�o.";
				mes "Nada mau, mas � realmente isso que deseja?";
				mes "Se sair n�o vai mais poder voltar a esse lugar.";
				next;
				mes "[Novi�o]";
				mes "Deseja ir agora a Catedral de Prontera?";
				next;
				if (select("Sim quero ser Novi�o","N�o vou ficar mais um pouco") == 1) {
					mes "[Novi�o]";
					mes "Certo espero que fa�a um bom teste para se tornar Novi�o.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("prontera",117,72);
					warp ("prt_church",172,19);
					end;
				}
				mes "[Novi�o]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Novi�o.";
				mes "Fale comigo novamente.";
				close;
			}
			case 3:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,112,19,1	script	Bruce#new	1_M_LIBRARYMASTER,{
	if (new_quest < 17) {
		mes "[Bruce]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	} else {
		mes "[Bruce]";
		mes "Al�m das Classes dos representantes daqui existem outras.";
		mes "As quais s�o adicionais.";
		mes "Tamb�m conhecidas como:";
		mes "^4a4afdClasses Expandidas^000000.";
		next;
		while (true) {
			mes "[Bruce]";
			mes "Quer saber mais alguma coisa?";
			next;
			switch (select("Taekwon","Super-Aprendiz","Ninja","Justiceiro","Cancelar")) {
				case 1:
				mes "[Bruce]";
				mes "� uma classe que normalmente usa muitas habilidades com chutes";
				mes "Que se espalhou de um pa�s da �sia para toda a �sia.";
				mes "Pertence a uma classe especial e depois voc� pode mudar e se tornar ^0000ffMestre Taekwon^000000.";
				mes "E ampliar ainda mais os poderes da classe Taekwon normal.";
				next;
				mes "[Bruce]";
				mes "Ou tamb�m pode se tornar um ^0000ffEspiritualista^000000.";
				mes "Uma classe que pode receber v�rias almas e oferecer ajuda aos outros.";
				next; break;
				case 2:
				mes "[Bruce]";
				mes "O Super-Aprendiz � aquele que decidil ser um eterno aprendiz.";
				mes "Pode aprender praticalmente quase todas habilidades das classes aqui representadas.";
				next;
				mes "[Bruce]";
				mes "Por�m ele n�o poder� nunca mais deixar de ser um aprendiz.";
				mes "E mesmo que atinja um Level de classe que nehuma outra alcan�a.";
				mes "Seus poderes s�o bem limitados.";
				next; break;
				case 3:
				mes "[Bruce]";
				mes "Ninja � uma classe bem vers�til tanto no uso de armas quanto no uso de magia.";
				next;
				mes "[Bruce]";
				mes "Dominam muito bem o combate a dist�ncia com arreme�os e magias.";
				mes "No corpo a corpo possuem habilidades que al�m de desviar de ataques enganam os oponentes.";
				next; break;
				case 4:
				mes "[Bruce]";
				mes "Justiceiro � �nica classe que tem habilidade o suficiente para usar armas de fogo.";
				mes "�timos em combates a dist�ncia, pois usam revolver, espingarda e lan�a granadas.";
				next;
				mes "[Bruce]";
				mes "S�o mestres em enfrentar m�tiplos enimigos de uma s� vez!";
				next; break;
				case 5:
				mes "[Bruce]";
				mes "Estarei aqui caso precise saber algo sobre as Classes Expandidas.";
				close;
			}
		}

	}
}

// ------------------------------------------------------------------
// - [ Apagar todos dados do treinamento ] -
// ------------------------------------------------------------------
function	script	F_NewDel	{
	new_quest = 0;
	if (questprogress(7123)) { erasequest(7123); }
	if (questprogress(7124)) { erasequest(7124); }
	if (questprogress(7126)) { erasequest(7126); }
	if (questprogress(7127)) { erasequest(7127); }
	if (countitem(Swordman_Manual)) { delitem(Swordman_Manual,1); }
	if (countitem(Mage_Manual)) { delitem(Mage_Manual,1); }
	if (countitem(Merchant_Manual)) { delitem(Merchant_Manual,1); }
	if (countitem(Thief_Manual)) { delitem(Thief_Manual,1); }
	if (countitem(Archer_Manual)) { delitem(Archer_Manual,1); }
	if (countitem(Acolyte_Manual)) { delitem(Acolyte_Manual,1); }
	return;
}

// ------------------------------------------------------------------
// - [ Proteger o mapa de treinamento ] -
// - Caso algum personagem entrar e n�o for aprendiz ele � expulso
// ------------------------------------------------------------------
new_1-1,1,1,0	script	TrainingProtect	HIDDEN_NPC,{
	OnPCLoadMapEvent:
	if (BaseJob != Job_Novice) {
		warp ("prontera",273,354);
		savepoint ("prontera",273,354);
	}
	end;
}

new_1-2,1,1,0	duplicate(TrainingProtect)	TrainingProtectB	HIDDEN_NPC
new_1-3,1,1,0	duplicate(TrainingProtect)	TrainingProtectC	HIDDEN_NPC

new_1-1	mapflag	loadevent
new_1-2	mapflag	loadevent
new_1-3	mapflag	loadevent
