/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Autor: L0ne_W0lf                                                |
| - Vers�o: Spell Master                                            |
| - Info: Quest de Mudan�a de Classe para Arcebispo.                |
| - Principais altera��es da vers�o:                                |
| * Corre��o a absurda quantidade de erros.                         |
| * Tradu��o para portugu�s brasileiro.                             |
| * Layout de encapsulamento.                                       | 
| * Fixado ser trans-classe n�vel 99/50 ou mais.                    |
| * Variavel de quest alterada seguindo os padr�es do arcadia.      |
| - Nota:                                                           |
| * Requer barqueiro de acesso ao santu�rio de Odin, encontrado em  |
|   scripts de quests em Hungel.                                    |
\*-----------------------------------------------------------------*/

prt_church,103,88,3	script	Ministro#arch	1_M_PASTOR,{
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if (archquest == 0) {
			mes("[Ministro Rezando]\n"
				"Em frente ao Deus Todo-Poderoso Odin, n�o haver� algu�m mais inteligente que ele.\n"
				"E n�o haver� algu�m mais misericordioso.");
			next;
			mes("[Ministro Rezando]\n"
				"Todos os ministros de Odin devem ser diligentes.\n"
				"Eles nunca deveriam ter pregui�a de servir Odin.");
			next;
			mes("[Ministro Rezando]\n"
				"Irm�o, como tem sido sua vida?\n"
				"Voc� j� viveu isso ao m�ximo?\n"
				"Voc� serviu sua vida � luz de Odin?");
			next;
			mes("[Ministro Rezando]\n"
				"Somos ministros e nosso comportamento � visto como atos dos deuses.\n"
				"Devemos estar sempre conscientes disso.");
			next;
			mes("[Ministro Rezando]\n"
				"N�s devemos sempre dizer a verdade.\n"
				"N�s n�o devemos ser v�timas de mentiras e enganos.");
			next;
			mes("[Ministro Rezando]\n"
				+ (Sex == SEX_MALE ? "irm�o":"irm�")+".\n"
				"Apesar de servirmos a Odin, somos pessoas normais.\n"
				"Podemos ser degradados apesar de n�s mesmos e devemos perceber isso.");
			next;
			mes("[Ministro Rezando]\n"
				"N�s sempre tentamos manter nossa inten��o original em mente e espalhar as leis de Odin.");
			next;
			select("Como eu me tornei assim?");
			mes("[Ministro Rezando]\n"
				"Esta � uma boa pergunta.\n"
				"N�s temos muitos m�todos..., mas eu recomendo isso.");
			next;
			mes("[Ministro Rezando]\n"
				"Voc� j� ouviu falar de uma ^3131FFSanta Peregrina��o^000000?\n"
				"Uma Peregrina��o Sagrada significa ir a um lugar sagrado para rezar ao Deus Odin por prote��o e gra�a.");
			next;
			mes("[Ministro Rezando]\n"
				"Quando voc� orar a Odin no lugar sagrado, sentir� que � nascido de novo.");
			next;
			mes("[Ministro Rezando]\n"
				"O que voc� acha?\n"
				"Voc� gostaria de fazer uma peregrina��o sagrada?");
			next;
			if (select("Sim eu quero","Do que est� falando?") == 1) {
				mes("[Ministro Rezando]\n"
					"Essa � a atitude correta.\n"
					"Uma pessoa que vive em sua vida mundana seria melhor ter uma nova mente e corpo.\n"
					"E evoluir para o caminho de um verdadeiro ministro de Odin.");
				next;
				mes("[Ministro Rezando]\n"
					"H� uma pequena aldeia chamada Umbala longe daqui.\n"
					"Essa aldeia � onde a tribo vive em harmonia com a natureza.");
				next;
				mes("[Ministro Rezando]\n"
					"V� at� l� e encontre o Sacerdote Dayan.\n"
					"Diga-lhe exatamente...\n"
					"^3131FFEstou aqui para Santa Peregrina��o^000000");
				next;
				mes("[Ministro Rezando]\n"
					"Ele � muito velho, ent�o ele � dif�cil de ouvir.\n"
					"Voc� tem que falar alto e claramente.\n"
					"Espero que isso abra caminho para voc� viver � luz de Odin.");
				archquest = 1;
				setquest(2187);
				close;
			}
		} else {
			mes("[Ministro Rezando]\n"
				"Como est� indo?\n"
				"Voc� conheceu Priest Dayan em Umbala?");
			close;
		}
	} else if (Class == Job_Arch_Bishop_T) {
		mes("[Ministro Rezando]\n"
			"Ah! Um arcebispo\n"
			"Voc� alcan�ou o estado de luz.\n"
			"Espero que voc� d� felicidade e honra �s pessoas durante suas aventuras.");
		close;
	} else {
		mes("[Ministro Rezando]\n"
			"Em frente ao Deus Todo-Poderoso Odin, n�o haver� algu�m mais inteligente que ele.\n"
			"E n�o haver� algu�m mais misericordioso.");
		next;
		mes("[Ministro Rezando]\n"
			"Todos os ministros de Odin devem ser diligentes.\n"
			"Eles nunca deveriam ter pregui�a de servir Odin.");
		next;
		mes("[Ministro Rezando]\n"
			"Hoje em dia, ouvi dizer que os ministros est�o se tornando negligentes em seu dever para com Odin.\n"
			"E se adornam com os esplendores do mundo.");
		next;
		mes("[Ministro Rezando]\n"
			"Se voc� v� algum desses ministros, voc� pode pedir para eles irem � igreja em prontera?");
		next;
		mes("[Ministro Rezando]\n"
			"Eles d�o uma aura especial para que voc� possa reconhec�-los facilmente.\n"
			"Eu vou torn�-los ministros dignos de servir Odin.");
		close;
	}
}

// ------------------------------------------------------------------
umbala,137,227,5	script	Garoto Utan#arch	4_M_UMKID,{
	mes("[Garoto Utan]\n"
		"........");
	close;
}

// ------------------------------------------------------------------
umbala,139,227,3	script	Sacerdote#arch	1_M_PASTOR,{
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if (archquest == 1) {
			mes("[Sacerdote]\n"
				"Un...ba... Umba?");
			next;
			mes("[Garoto Utan]\n"
				"...............");
			next;
			mes("[Sacerdote]\n"
				"Isto �... certo?\n"
				"Hmm... so...\n"
				"Um...ma? Umau...ma?");
			emotion(e_swt);
			next;
			mes("[Garoto Utan]\n"
				"...............");
			next;
			mes("[Sacerdote]\n"
				"Huuuuuu......\n"
				"Oh c�us . Me sinto pesado.\n"
				"hohohoho.");
			next;
			mes("- resmungando");
			next;
			mes("[Sacerdote]\n"
				"hahahahaha.\n"
				"huhuhuhu.\n"
				"humhum.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Ol�. Voc� �...\n"
				"Sacerdote Dayan?");
			next;
			mes("[Sacerdote]\n"
				"Huh?\n"
				"- Ele vira a cabe�a para voc�.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Voc� n�o � padre Dayan?");
			next;
			mes("[Sacerdote]\n"
				"- resmungando...");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Sacerdote! Dayan!\n"
				"Certo!?");
			next;
			mes("[Sacerdote Dayan]\n"
				"Ah sim.\n"
				"Eu sou Dayan.\n"
				"Prazer em conhec�-lo, "+(Sex == SEX_MALE ? "irm�o":"irm�")+".");
			next;
			mes("- O velho sacerdote lhe d� um sorriso de orelha a orelha.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Eu esqueci de usar meu aparelho auditivo.\n"
				"De qualquer forma, por que voc� veio aqui?");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Hmm, eu queria te contar...");
			next;
			input(.@inputstr$);
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				+ .@inputstr$);
			next;
			if (.@inputstr$ != "Estou aqui para Santa Peregrina��o") {
				mes("- O padre Dayan parece n�o entender voc�.\n"
					"- Ele apenas olha para voc� e sorri.");
				next;
				mes("[Sacerdote]\n"
					"Eh? Diga o qu�?");
				close;
			}
			mes("[Priest Dayan]\n"
				"..............?");
			next;
			mes("Ele coloca suas orelhas em sua dire��o.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"^FF0000Estou aqui para a santa peregrina��o!\n"
				"Estou aqui para a santa peregrina��o!\n"
				"Estou aqui para a santa peregrina��o!\n"
				"Estou aqui para a santa peregrina��o!^000000");
			next;
			mes("[Sacerdote Dayan]\n"
				"Eh... voc� �?\n"
				"Uma peregrina��o � Terra Santa...\n"
				"Faz muito tempo desde que eu vi um sacerdote t�o devoto.\n"
				"Bem vind"+(Sex == SEX_MALE ? "o irm�o":"a irm�")+".");
			next;
			mes("- O velho sacerdote lhe d� um sorriso gracioso.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Veja esta aldeia com a enorme floresta que a rodeia.\n"
				"Voc� pode ver uma �rvore gigante?");
			next;
			mes("[Sacerdote Dayan]\n"
				"Essa �rvore grande � chamada ^3131FFYggdrasil^000000.\n"
				"Essa �rvore surgiu a partir do corpo de Ymir depois que Odin criou o mundo como voc� o conhece.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Uma fonte jorra do fim das ra�zes de Yggdrasil que se espalham para todos os mundos.");
			next;
			mes("[Sacerdote Dayan]\n"
				"As ra�zes seguem para Niflheim, onde voc� pode encontrar a fonte de Hvergelmir.\n"
				"Em Rune-Midgard, h� a primavera de Mimir.\n"
				"E em Asgard, o mundo dos Deuses, h� a primavera da Palavra.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Os po�os de primavera de Mimir com intelig�ncia.\n"
				"O mito diz que se Odin permitir que voc� tenha o olho dele, ganhar� todo o conhecimento dentro daquela primavera.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Atrav�s da Santa Peregrina��o, podemos nos tornar puros limpando nossos corpos e almas.");
			next;
			mes("[Sacerdote Dayan]\n"
				"V� at� a Yggdrasil.\n"
				"Voc� pode ser atacad"+(Sex == SEX_MALE ? "o":"a")+" por criaturas l�.\n"
				"Mas tenha em mente que suas inten��es s�o apenas proteger o Yggdrasil.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Siga seus passos com prop�sito.\n"
				"Se Odin n�o te abandonar, voc� pode alcan�ar o come�o do mundo no caule do Yggdrasil.\n"
				"Quando voc� chegar l�, encontre um lugar tranquilo.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Ore por uma vida de f� e expie seus pecados com uma mente piedosa.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Admire a onisci�ncia e onipot�ncia de Odin e ore por uma sabedoria.\n"
				"Para escolher o caminho certo.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Vamos ver, v� para o lugar da criatura mais famosa de Odin.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Depois de fazer sua peregrina��o, vamos tomar uma bebida juntos e conversar sobre sua experi�ncia.");
			archquest = 2;
			changequest(2187,2188);
			close;
		} else if (archquest == 2) {
			mes("[Sacerdote Dayan]\n"
				"Este lugar � o lugar mais sagrado do mundo, Yggdrasil.\n"
				"Esta cerim�nia sagrada vai iluminar sua alma.");
			next;
			if (select("Como devo orar?","At� mais") == 1) {
				mes("[Sacerdote Dayan]\n"
					"Atrav�s da ora��o, podemos seguir quatro caminhos.\n"
					"Lembre-se do que eu digo para voc� agora.");
				next;
				mes("[Sacerdote Dayan]\n"
					"A primeira maneira � a maneira de ^3131FFmedita��o^000000.\n"
					"Temos que estar prontos para saudar Odin com uma consci�ncia limpa.");
				next;
				mes("[Sacerdote Dayan]\n"
					"A medita��o come�a com uma ^3131FFb�n��o^000000 que acalma sua mente.");
				next;
				mes("[Sacerdote Dayan]\n"
					"O segundo � o modo da ^3131FFagonia^000000.\n"
					"Refletimos sobre n�s mesmos com a confiss�o sobre nossa retribui��o pelos feitos de uma vida anterior.");
				next;
				mes("[Sacerdote Dayan]\n"
					"N�o tenha medo da dor.\n"
					"Isso � uma necessidade e ser� o primeiro passo para entrar na maneira de liquidar as feridas do passado.");
				next;
				mes("[Sacerdote Dayan]\n"
					"O terceiro caminho � o da ^3131FFalegria^000000.\n"
					"Ao se livrar da dor, sua mente sofrer� menos.\n"
					"E voc� experimentar� a alegria da vida ao ajudar e consolar os outros.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Eles o aben�oar�o porque voc� � uma exist�ncia de alegria que supera uma afli��o.\n"
					"N�s chamamos isso de ^3131FFAspersio^000000.\n"
					"Voc� deve beber um ^3131FF�gua Benta^000000 com aprecia��o de Aspersio.");
				next;
				mes("[Sacerdote Dayan]\n"
					"O �ltimo caminho � o da ^3131FFluz^000000.\n"
					"Voc� est� livre de todo pecado porque foi aben�oado por toda a cria��o.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Voc� renasceu como luz, canta uma Gloria ^000000 de alegria e alma que te ama.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Depois de terminar todas essas ora��es, levante-se com uma mente piedosa.\n"
					"Se sua ora��o � verdadeira, Odin lhe emprestar� sua sabedoria.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+"?\n"
					"Ok, � hora de sair e se desculpar.\n"
					"Se a sua ora��o terminar, vamos conversar.");
				close;
			}
			mes("[Sacerdote Dayan]\n"
				"Espero que minha ora��o possa enfraquecer sua agonia...");
			close;
		} else if (archquest == 3) {
			mes("[Sacerdote Dayan]\n"
				"Voc� voltou.\n"
				"Eu posso sentir que voc� tem uma energia nova.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Eu me sinto despreocupado.\n"
				"Como se eu tivesse acabado de renascer...");
			next;
			mes("[Sacerdote Dayan]\n"
				"Sua f� lhe d� confian�a e coragem.\n"
				"Um sorriso de uma mente pac�fica livrar� facilmente as pessoas de sua cautela.\n"
				"Por favor, inspire as pessoas com amor e energia.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Obrigado pelas suas am�veis palavras.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Agora, h� um lugar para onde voc� deveria ir.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Aquele lugar � Hugel em Schwaltzvalt.\n"
				"H� uma freira rezando l� chamada Vinue, ela � uma verdadeira ministra que ora pelas pessoas que sofrem no mundo.\n"
				"Mas a �ltima vez que a vi, ela parecia triste.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Voc� pode convenc�-la a fazer uma peregrina��o a Yggdrasil?\n"
				"Eu acho que ela est� exausta devido a orar muito.\n"
				"Espero que o ar de Yggdrasil seja �til para ela.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"N�o se preocupe.\n"
				"Eu vou conhec�-la.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Muito obrigado.\n"
				"Sinta-se a vontade para voltar aqui quando quiser rezar.");
			archquest = 4;
			changequest(2188,2189);
			close;
		} else {
			mes("[Dayan]\n"
				"Voc� achou Vinue em Hugel?\n"
				"Como ela est�?");
			close;
		}
	} else {
		mes("[Sacerdote]\n"
			"Un...ba... Unba?");
		close;
	}
}

// ------------------------------------------------------------------
yggdrasil01,220,47,0	script	#arch_pilgrimage	HIDDEN_WARP_NPC,5,5,{
	OnTouch:
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if (archquest == 2) {
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"� a primavera de Hvergelmir.\n"
				"Este lugar � um lugar muito v�vido e pac�fico.\n"
				"� apropriado orar.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"].\n"
				"Hora de fazer genuflex�es....\n"
				"Hora de come�ar....\n"
				"Hmm, o que aquele padre disse para mim?.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Hmm ... Qual � o primeiro caminho?.");
			next;
			switch (select("O caminho do sil�ncio","O caminho da confiss�o","O caminho da medita��o")) {
				case 1:
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"O caminho do sil�ncio...?.\n"
					"Acho que n�o..");
				close;
				case 2:
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"O caminho da confiss�o ...?.\n"
					"Acho que n�o..");
				close;
				case 3:
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"O caminho da medita��o...\n"
					"Sim, � o caminho da medita��o.");
				next;
			}
			mes("^3131FF[Sacerdote Dayan]^000000\n"
				"O primeiro caminho � o caminho da medita��o.\n"
				"No caminho da medita��o, temos que estar prontos para saudar Odin com uma consci�ncia limpa.^000000");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"A medita��o come�a com uma b�n��o que acalma sua mente.^000000");
			next;
			mes("- Voc� fecha os olhos devagar e respira fundo. -");
			next;
			specialeffect(EF_BLESSING,AREA,playerattached());
			next;
			mes("Sua mente � atualizada com o efeito de b�n��o.\n"
				"Voc� continua a meditar tentando livrar sua mente de quaisquer sentimentos ruins.");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"O segundo � o caminho da agonia.\n"
				"Atrav�s do caminho da agonia, refletimos sobre n�s mesmos com a confiss�o sobre nossa retribui��o pelos feitos de uma vida anterior.^000000");
			next;
			mes("^3131FF [Sacerdote Dayan]\n"
				"N�o tenha medo da dor.\n"
				"Isso � uma necessidade e ser� o primeiro passo para entrar na maneira de liquidar as feridas do passado.^000000");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Dor... Que tipo de falhas eu tive?");
			input(.@inputstr$);
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Confesso minha culpa ao Deus Todo-Poderoso Odin.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"^3131FF"+.@inputstr$+".^000000");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Oh benevolente Odin, tenha piedade de mim e tenha pena de mim porque sou negligente no cumprimento de meus deveres como ministro.\n"
				"Por favor, mostre o caminho e salve um ministro tolo com sua sabedoria.");
			next;
			mes("- Voc� ruminou sobre sua confiss�o e est� perdido em pensamentos novamente -");
			next;
			mes(".............................");
			next;
			mes(".............................\n"
				".........................");
			next;
			mes(".............................\n"
				".........................\n"
				".....................");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"O terceiro caminho � o caminho da alegria.\n"
				"Ao se livrar da dor, sua mente sofrer� menos e voc� experimentar� a alegria da vida ao ajudar e consolar os outros.^000000");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"E tamb�m eles o aben�oar�o porque voc� � uma exist�ncia de alegria que supera uma afli��o.\n"
				"N�s chamamos isso de Aspersio.\n"
				"Voc� deve beber uma �gua Sagrada com aprecia��o de Aspersio.^000000");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"Voc� est� bebendo a �gua Sagrada.^000000");
			next;
			if (!countitem(Holy_Water)) {
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"Ah n�o! Eu esqueci de trazer �gua benta!");
				close;
			}
			mes("- Voc� se curva respeitosamente segurando uma �gua Benta e coloca o copo nos l�bios -");
			next;
			specialeffect(EF_ASPERSIO,AREA,playerattached());
			next;
			specialeffect(EF_RECOVERY,AREA,playerattached());
			mes(".............................");
			next;
			mes(".............................\n"
				".........................");
			next;
			mes(".............................\n"
				".........................\n"
				".....................");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"O �ltimo caminho � um modo de luz.\n"
				"Voc� est� livre de todo pecado porque foi aben�oado por toda a cria��o.^000000");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"Voc� renasceu como luz, canta uma Gloria de alegria e alma que te ama.^000000");
			next;
			mes("- Voc� respira fundo e come�a a cantar uma Gloria.\n"
				"Um acorde cai na primavera de Hvergelmir e um som de cascata lhe d� uma sensa��o refrescante. -");
			specialeffect(EF_GLORIA,AREA,playerattached());
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Descendentes de Heimdal se re�nem sob a �rvore de Ash Yggdrasil.\n"
				"O p�ssaro Curdan, que fica em um galho, me traz a sabedoria do mundo inteiro.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O lobo Curdan me protege de todas as amea�as do mundo.");
			specialeffect(EF_GLORIA,AREA,playerattached());
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O anfitri�o do ballascalf, levante-se do seu lugar.\n"
				"O mundo inteiro grita de alegria.\n"
				"O pai da luz, o poeta da sabedoria, canta para mim.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O anfitri�o de um vidro brilhante, me d� uma previs�o sagrada.");
			specialeffect(EF_GLORIA,AREA,playerattached());
			next;
			mes("- Depois de terminar a m�sica, voc� se sente leve e forte com muita devo��o. -");
			specialeffect(EF_BLESSING,AREA,playerattached());
			specialeffect(EF_RESURRECTION,AREA,playerattached());
			delitem(Holy_Water,1);
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Isso foi refrescante.\n"
				"Eu acho que deveria voltar para o Priest Dayan.");
			archquest = 3;
			close2;
			warp("umbala",138,219);
			end;
		} else {
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"A m�sica acabou.\n"
				"� hora de voltar para o Sacerdote Dayan.");
			close2;
			warp("umbala",138,219);
			end;
		}
	}
}
// ------------------------------------------------------------------
hu_in01,205,204,7	script	Freira Orando#benew	1_F_PRIEST,{
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if (archquest == 4) {
			mes("- H� uma freira fechando os olhos enquanto ela murmura algo que soa como uma ora��o. -");
			next;
			if (select("Fale com ela","Ficar em sil�ncio") == 2) {
				mes("- Voc� n�o a perturba.");
				close;
			}
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Ol�, irm�?");
			next;
			mes("[Vinue]\n"
				"Ah, bem vind"+(Sex == SEX_MALE ? "o":"a")+".\n"
				"N�o � hora de ter um servi�o ainda...\n"
				"Voc� est� aqui para orar?");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Eu vim aqui para dizer ol� do Sacerdote Dayan de Prontera.");
			next;
			mes("[Vinue]\n"
				"Ah, padre Dayan.\n"
				"Ele � est� bem?\n"
				"Ele � t�o agrad�vel mesmo sendo velho.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Ele me disse que estava preocupado porque quando ele te viu da �ltima vez, voc� parecia triste.\n"
				"Ele pede para voc� ir em uma peregrina��o sagrada.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Umbala tem o poder vital da natureza!");
			next;
			mes("[Vinue]\n"
				"Ah...\n"
				"Ele � muito gentil.");
			next;
			mes("[Vinue]\n"
				"Mas n�o se preocupe.\n"
				"Estou um pouco cansada por causa de um pesadelo.");
			next;
			mes("[Vinue]\n"
				"O mal est� sempre procurando por nossas almas.\n"
				"Se voc� � indiferente a orar, nunca perde uma oportunidade.");
			next;
			if (select("Que tipo de sonho?","Sua alma deve estar bem") == 2) {
				mes("[Vinue]\n"
					"Oh, mas � a� que voc� est� errado.\n"
					"Minha alma pode estar em maior risco.\n"
					"Obrigado por entregar a mensagem.\n"
					"Eu vou voltar para minhas ora��es.");
				close;
			}
			mes("[Vinue]\n"
				"Isso �...\n"
				"Na verdade, comecei a ter um pesadelo a partir da data em que fui nomeado.");
			next;
			mes("[Vinue]\n"
				"No come�o, era um sonho que Valqu�ria estava triste e na escurid�o.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Valqu�ria?");
			next;
			mes("[Vinue]\n"
				"Sim...\n"
				"Ela estava chorando em um quarto escuro como breu.\n"
				"Pendurado como um p�ssaro que tinha suas asas cortadas.");
			next;
			mes("[Vinue]\n"
				"Mas, com o passar do tempo, o sonho se tornou mais assustador.\n"
				"Agora Valkyrie � presa com correntes e, finalmente, ela � despeda�ada.");
			next;
			mes("[Vinue]\n"
				"Que destino cruel!\n"
				"De repente eu n�o consigo respirar corretamente e depois acordo.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Ter que ver a morte de Valqu�ria, deve ser um sonho atormentador.");
			next;
			mes("[Vinue]\n"
				"� apenas um pesadelo?\n"
				"Ou voc� acha que � um press�gio?");
			next;
			mes("[Vinue]\n"
				"Eu tenho vontade de rezar no santu�rio de Odin para fazer o sonho desaparecer.\n"
				"Mas esse santu�rio se tornou um antro do mal h� muito tempo.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O Santu�rio?\n"
				"Ningu�m tentou subjugar o mal?");
			next;
			mes("[Vinue]\n"
				"Infelizmente, eu sou uma freira que n�o tem nenhuma habilidade de exorcismo...\n"
				"Os moradores de Hugel ficaram horrorizados com a vis�o porque n�o est�o familiarizados com a aventura.");
			next;
			mes("[Vinue]\n"
				"Hoje em dia, h� muitas pessoas por causa do desenvolvimento do santu�rio de Odin.\n"
				"Mas a situa��o delas n�o � t�o boa.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O sonho est� relacionado com o mal no santu�rio de Odin?");
			next;
			mes("[Vinue]\n"
				"Hum... bem.\n"
				"Eu n�o tenho como descobrir, ent�o apenas rezo.");
			next;
			if (select("Eu vou investigar para voc�","Eu vou rezar com voc�") == 2) {
				mes("[Vinue]\n"
					"Obrigada.\n"
					"Eu vou rezar para que a escurid�o fique longe.");
				close;
			}
			mes("[Vinue]\n"
				"Vai!?\n"
				"Mas vai ser assustador l� dentro!\n"
				"Existem muitos dem�nios por l�!");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Mas n�o posso fingir ignorar uma irm� que est� com problemas?\n"
				"Eu sou um ministro que lida com muito ascetismo!\n"
				"Confie em mim.");
			next;
			mes("[Vinue]\n"
				"Ah... estou t�o preocupada....\n"
				"Eu nunca esquecerei seu cora��o bondoso.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Como eu chego ao santu�rio de Odin?");
			next;
			mes("[Vinue]\n"
				"H� uma balsa no lado direito da igreja.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Ok, espere por boas not�cias!");
			next;
			mes("[Vinue]\n"
				"Vou rezar pelo seu retorno seguro.\n"
				"Espero que Odin tamb�m lhe d� a prote��o dele.");
			archquest = 5;
			changequest(2189,2190);
			close;
		} else if ((archquest > 4) && (archquest < 8)) {
			mes("[Vinue]\n"
				"Vou rezar pelo seu retorno seguro.");
			close;
		} else {
			mes("[Vinue]\n"
				"Eu me sinto revigorado.\n"
				"Deve ser uma boa not�cia?\n"
				"Gra�as aos deuses.");
			close;
		}
	} else {
		mes("[Freira]\n"
			"Eu me sinto revigorado.\n"
			"Deve ser uma boa not�cia?\n"
			"Gra�as aos deuses.");
		close;
	}
}

// ------------------------------------------------------------------
odin_tem02,282,263,0	script	#find_val	HIDDEN_WARP_NPC,3,3,{
	OnTouch:
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if ((archquest > 4) && (archquest < 8)) {
			hideoffnpc("Ilus�o da Valqu�ria#arch");
		}
	}
	end;
}

// ------------------------------------------------------------------
odin_tem02,281,275,3	script	Ilus�o da Valqu�ria#arch	4_F_VALKYRIE2,{
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if ((archquest > 4) && (archquest < 8)) {
			mes("Voc� pode ver Valqu�ria que tem um rosto desesperado.");
			next;
			switch (select("Olhar mais perto","Voltar")) {
				case 1:
				mes("Voc� perde sua consci�ncia enquanto chega mais perto da Ilus�o de Valqu�ria.");
				close2;
				specialeffect(EF_CLOAKING,AREA,playerattached());
				warp("job3_arch01",29,29);
				hideonnpc("Ilus�o da Valqu�ria#arch");
				end;
				case 2:
				mes("Por medo, voc� se afasta da ilus�o de Valqu�ria.");
				close2;
				hideonnpc("Ilus�o da Valqu�ria#arch");
				end;
			}
		}
	}
	end;

	OnInit:
	hideonnpc("Ilus�o da Valqu�ria#arch");
	end;
}

// ------------------------------------------------------------------
job3_arch01,29,34,3	script	Valqu�ria#arch	4_F_VALKYRIE2,{
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if (archquest < 5) {
			warp("odin_tem02",282,263);
			end;
		} else if (archquest == 5) {
			if (getmercinfo(1)) {
				mes("[Valqu�ria]\n"
					"Se voc� quiser conversar comigo, voc� tem que cancelar todos os contratos com qualquer mercen�rio que voc� tenha.");
				close;
			} else {
				mes("[Valqu�ria]\n"
					"Nos c�us o som do chifre se espalha, mas um p�ssaro que n�o pode voar rasteja e finalmente � esmagado em peda�os no ch�o.\n"
					"Ah, estou ressentida!\n"
					"t�o arrependida!");
				next;
				mes("- A Valqu�ria segura seu rosto, ent�o ela encontra voc� e olha com uma express�o amea�adora. -");
				next;
				mes("[Valqu�ria]\n"
					"Voc� � um descendente de Heimdal vivendo como um mortal, por que voc� est� aqui?\n"
					"Est� aqui para ridicularizar meu destino sombrio?");
				next;
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"De jeito nenhum!\n"
					"Mas � verdade que estou aqui por voc�.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"...Como assim?\n"
					"� claro que estou em Midgard, mas estamos sob o jugo do destino que n�o pode coexistir neste mundo.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Eu vejo, o seu objetivo � entrar no Valhalla?\n"
					"Se voc� fizer isso, � o lugar errado para voc�.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Eu j� fui expulsa de Asgard.\n"
					"Meu dever � proteger esta pequena ilha de humanos que tentam tir�-la dos Deuses e at� eu n�o tenho energia para isso.");
				next;
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"N�o � esse tipo de problema.\n"
					"Mas algu�m que percebe sua situa��o dolorosa me enviou aqui.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Haha! Voc� vai me ajudar?!");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"...................");
				next;
				mes("- Valqu�ria d� uma carranca feroz. -");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Na verdade, n�o posso fazer nada com o meu corpo agora.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Humano, responda-me.\n"
					"Voc� est� aqui para sinceramente me ajudar?");
				next;
				if (select("Sim","N�o") == 2) {
					mes("[Valqu�ria Anguhilde]\n"
						"Eu sabia que n�o podia confiar em um humano!");
					close2;
					warp("odin_tem02",282,263);
					end;
				}
				mes("[Valqu�ria Anguhilde]\n"
					"Est� bem...\n"
					"Eu n�o tenho energia para me segurar, ent�o n�o tenho escolha a n�o ser confiar em voc�.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Eu era uma valqu�ria normal que conduzia soldados a Valhalla de acordo com a ordem de Odin.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Mas eu feri Freki, um dos lobos de Odin, e fui expulsa de Asgard sem energia alguma como uma Valqu�ria com ordens de proteger esta ilha.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Eu estava desonrado, esta ilha � importante como um templo para Odin e os v�rios deuses.\n"
					"Eu tentei fazer o meu melhor para proteger este lugar sagrado.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Mas um dia o dem�nio come�ou a ganhar influ�ncia nesta ilha.\n"
					"N�o sei porque vieram para c� e de onde vieram.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Eles cercaram o templo e eu exaurei minha energia tentando lutar contra todos eles.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"O santu�rio foi contaminado pelos dem�nios.\n"
					"Quanto tempo tenho que estar sob este destino desonroso!");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Mortal, qual � o seu nome?");
				next;
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"Meu nome � "+strcharinfo(CHAR_NAME)+".");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					+ strcharinfo(CHAR_NAME)+".\n"
					"Voc� me disse que voc� quer me ajudar, certo?\n"
					"Mesmo que isso me desonre, estou pedindo sua ajuda.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Este lugar pode parecer que foi feito para os meus humanos.\n"
					"Na verdade, � um monumento muito importante e tamb�m parte da hist�ria de Deus.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Eu perdi toda a minha energia e meu corpo est� selado.\n"
					"Ent�o n�o h� como eu proteger o santu�rio.\n"
					"Voc� tem que enviar uma mensagem para Valhalla para pedir ajuda de uma valqu�ria rapidamente.");
				next;
				select("Como eu posso fazer isso?");
				mes("[Valqu�ria Anguhilde]\n"
					"No topo do santu�rio, voc� pode entrar em contato com eles com um canh�o de ouro.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Vou lhe dar um rolo de papel escrito em um idioma antigo.\n"
					"Nesse pergaminho, h� a minha imita��o.\n"
					"Se voc� for para fora, poder� invocar uma Valqu�ria com esse pergaminho.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Depois que voc� invocar minha representa��o, voc� ter� que encontrar um ^3131FFpada�os de um chifre quebrado^000000.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Voc� tem que ir at� o topo do santu�rio, coletando todos os peda�os da personifica��o.\n"
					"E ent�o eu vou cuidar do assunto.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Uma imita��o ajudar� quando voc� se mover ou atacar0.\n"
					"Mas voc� tem que ter cuidado se uma imposi��o de confian�a cair.");
				next;
				mes("[Valqu�ria Anguhilde]\n"
					"Quando voc� terminar de se preparar para continuar, fale comigo novamente.\n"
					"Vai ser uma longa jornada...");
				archquest = 6;
				close;
			}
		} else if (archquest == 6) {
			if ($@archbs == 0) {
				$@archbs = 1;
				mes("[Valqu�ria Anguhilde]\n"
					+strcharinfo(CHAR_NAME)+" Voc� terminou de se preparar para o seu caminho de ascetismo?");
				next;
				if (getmapusers("job3_arch02") > 0) {
					mes("[Valqu�ria Anguhilde]\n"
						"Hmm, algu�m est� lutando contra o dem�nio no santu�rio agora.\n"
						"Voc� s� espera um minuto at� que essa pessoa termine.");
					$@archbs = 0;
					close;
				}
				mes("[Valqu�ria Anguhilde]\n"
					"Est� bem.\n"
					"Agora vou mandar voc� para l�.\n"
					"^FF0000Quando chegar, voc� tem que invocar minha representa��o com o pergaminho^000000.\n"
					"N�o esque�a");
				$@archbs = 0;
				close2;
				nude;
				if (countitem(Will_Of_Exhausted_Angel)) {
					delitem(Will_Of_Exhausted_Angel,countitem(Will_Of_Exhausted_Angel));
				}
				donpcevent("start#arch::OnEnable");
				archquest = 7;
				changequest(2190,2191);
				warp("job3_arch02",119,49);
				hideonnpc("Valqu�ria#arch");
				end;
			} else {
				mes("[Valqu�ria Anguhilde]\n"
					"Estou conversando com outra pessoa agora, ent�o me d� um segundo.");
				close;
			}
		} else if (archquest == 7) {
			if (countitem(ValkyrieA_Scroll)) {
				delitem(ValkyrieA_Scroll,countitem(ValkyrieA_Scroll));
			}
			if (countitem(ValkyrieB_Scroll)) {
				delitem(ValkyrieB_Scroll,countitem(ValkyrieB_Scroll));
			}
			if ($@archbs == 0) {
				$@archbs = 1;
				mes("[Valqu�ria Anguhilde]\n"
					"Voc� est� bem humano?\n"
					"N�o foi t�o f�cil quanto eu esperava.\n"
					"Voc� vai desafiar novamente?");
				next;
				if (getmapusers("job3_arch02") > 0) {
					$@archbs = 0;
					mes("[Valqu�ria Anguhilde]\n"
						"Hmm, algu�m est� lutando contra o dem�nio no santu�rio agora.\n"
						"Voc� s� espera um minuto enquanto eu estou achando quem �.");
					close;
				}
				$@archbs = 0;
				mes("[Valqu�ria Anguhilde]\n"
					"Agora vou mandar voc� para l�.\n"
					"^FF0000Quando voc� chegar l�, voc� tem que invocar minha representa��o com o pergaminho^000000.\n"
					"Uma imita��o ajudar� quando voc� se mover ou atacar.\n"
					"Mas voc� tem que ter cuidado se uma imita��o cair.");
				close2;
				nude;
				if (countitem(Will_Of_Exhausted_Angel)) {
					delitem(Will_Of_Exhausted_Angel,countitem(Will_Of_Exhausted_Angel));
				}
				donpcevent("start#arch::OnEnable");
				archquest = 7;
				warp("job3_arch02",119,49);
				hideonnpc("Valqu�ria#arch");
				end;
			} else {
				mes("[Valqu�ria Anguhilde]\n"
					"Estou conversando com outra pessoa agora, ent�o me d� um segundo.");
				close;
			}
		}
	} else {
		warp("odin_tem02",282,263);
		end;
	}

	OnBc:
	$@archbs = 0;
	mapannounce("job3_arch01","Valqu�ria: Eu acho que algu�m caiu no santu�rio.",bc_map,"0xFFCE00");
	hideoffnpc("Valqu�ria#arch");
	end;
}

// ------------------------------------------------------------------
job3_arch02,119,49,0	script	#arch_1_start	HIDDEN_WARP_NPC,6,6,{
	OnTouch:
	if (!countitem(ValkyrieA_Scroll)) {
		getitem(ValkyrieA_Scroll,1);
	}
	mapannounce("job3_arch02","Sussurro de representa��o: me sinto pesado! Me liberte!",bc_map,"0xFFCE00");
	disablenpc("#arch_1_start");
	end;
}

// ------------------------------------------------------------------
-	script	#arch_1_01_0::archbjcq	FAKE_NPC,{
	OnTouch:
	if (countitem(ValkyrieA_Scroll)) {
		delitem(ValkyrieA_Scroll,1);
	} else if (getmercinfo(1) == 2037) {
		if (strnpcinfo(NPC_NAME) == "#arch_1_10")
			viewpoint(1,113,327,1,0xFF9900);
		.@randht = rand(1,10);
		if (.@randht < 8) {
			mapannounce("job3_arch02","Sussurrando uma imita��o: Eu posso sentir o esp�rito do mal! Seja cuidadoso!",bc_map,"0xFFCE00");
		} else if ((.@randht == 8) || (.@randht == 9)) {
			mapannounce("job3_arch02","Sussurro de representa��o: Eles est�o vindo!",bc_map,"0xFFCE00");
		}
		end;
	}
	mapannounce("job3_arch02","Sussurro de representa��o: Voc� n�o pode fazer nada sozinho! Vamos voltar!",bc_map,"0xFFCE00");
	mapwarp("job3_arch02","job3_arch01",29,29);
	end;
}
job3_arch02,112,73,0	duplicate(archbjcq)	#arch_1_01	HIDDEN_WARP_NPC,5,5
job3_arch02,94,123,0	duplicate(archbjcq)	#arch_1_02	HIDDEN_WARP_NPC,5,5
job3_arch02,93,173,0	duplicate(archbjcq)	#arch_1_03	HIDDEN_WARP_NPC,5,5
job3_arch02,114,186,0	duplicate(archbjcq)	#arch_1_04	HIDDEN_WARP_NPC,5,5
job3_arch02,134,201,0	duplicate(archbjcq)	#arch_1_05	HIDDEN_WARP_NPC,5,5
job3_arch02,154,211,0	duplicate(archbjcq)	#arch_1_06	HIDDEN_WARP_NPC,5,5
job3_arch02,175,227,0	duplicate(archbjcq)	#arch_1_07	HIDDEN_WARP_NPC,5,5
job3_arch02,201,240,0	duplicate(archbjcq)	#arch_1_08	HIDDEN_WARP_NPC,5,5
job3_arch02,223,252,0	duplicate(archbjcq)	#arch_1_09	HIDDEN_WARP_NPC,5,5
job3_arch02,255,268,0	duplicate(archbjcq)	#arch_1_10	HIDDEN_WARP_NPC,5,5
job3_arch02,269,302,0	duplicate(archbjcq)	#arch_1_11	HIDDEN_WARP_NPC,5,5
job3_arch02,245,289,0	duplicate(archbjcq)	#arch_1_12	HIDDEN_WARP_NPC,5,5

// ------------------------------------------------------------------
job3_arch02,203,286,0	script	#arch_1_boss	HIDDEN_WARP_NPC,5,5,{
	OnTouch:
	if (countitem(ValkyrieA_Scroll)) {
		delitem(ValkyrieA_Scroll,1);
	} else if (getmercinfo(1) == 2037) {
		mapannounce("job3_arch02","Pesadelo de Valqu�ria: Uma ilus�o incompetente de Valqu�ria veio aqui com a ajuda de seres humanos. Voc� quer ter esse pesadelo?",bc_map,"0xFF0000");
		donpcevent("mob#arch_1::OnKill");
		end;
	}
	mapannounce("job3_arch02","Sussurro de representa��o: Voc� n�o pode fazer nada sozinho! Vamos voltar!",bc_map,"0xFFCE00");
	mapwarp("job3_arch02","job3_arch01",29,29);
	end;
}

// ------------------------------------------------------------------
-	script	#arch_redcell	FAKE_NPC,{
	OnInit:
	setcell("job3_arch02",276,290,280,294,cell_walkable,0);
	setcell("job3_arch02",276,290,280,294,cell_shootable,0);
	end;
	OnGreen:
	setcell("job3_arch02",276,290,280,294,cell_walkable,1);
	setcell("job3_arch02",276,290,280,294,cell_shootable,1);
	end;
	OnRed:
	setcell("job3_arch02",276,290,280,294,cell_walkable,0);
	setcell("job3_arch02",276,290,280,294,cell_shootable,0);
	end;
}

// ------------------------------------------------------------------
job3_arch02,390,389,1	script	#arch_val01	CLEAR_NPC,{
	end;
	OnEnable:
	areamonster("job3_arch02",111,325,115,329,"Pesadelo da Valqu�ria",VALKYRIE_N,1,"#arch_val01::OnMyMobDead");
	end;
	OnMyMobDead:
	if (mobcount("job3_arch02","#arch_val01::OnMyMobDead") < 1) {
		donpcevent("#arch_redcell::OnGreen");
		mapannounce("job3_arch02","Pesadelo da Valqu�ria: Sua vit�ria � apenas uma imagem falsa! hahahaha!",bc_map,"0xFF0000");
		hideoffnpc("Valqu�ria#arch_01");
		disablenpc("#arch_1_start");
		disablenpc("#arch_1_01");
		disablenpc("#arch_1_02");
		disablenpc("#arch_1_03");
		disablenpc("#arch_1_04");
		disablenpc("#arch_1_05");
		disablenpc("#arch_1_06");
		disablenpc("#arch_1_07");
		disablenpc("#arch_1_08");
		disablenpc("#arch_1_09");
		disablenpc("#arch_1_10");
		disablenpc("#arch_1_11");
		disablenpc("#arch_1_12");
		disablenpc("#arch_1_boss");
	}
	end;
	OnKill:
	killmonster("job3_arch02","#arch_val01::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
job3_arch02,390,387,1	script	#arch_val02	CLEAR_NPC,{
	end;
	OnEnable:
	areamonster("job3_arch02",242,44,246,48,"Pesadelo da Valqu�ria",VALKYRIE_N,1,"#arch_val02::OnMyMobDead");
	end;
	OnMyMobDead:
	if (mobcount("job3_arch02","#arch_val02::OnMyMobDead") < 1) {
		mapannounce("job3_arch02","Pesadelo da Valqu�ria: Voc� � t�o infantil. Eu convido voc� para uma festa do dem�nio. Vou me certificar de que voc� se divirta!",bc_map,"0xFF0000");
		hideoffnpc("Valqu�ria#arch_02");
		disablenpc("#arch_2_boss");
		viewpoint(1,279,234,1,0xFFFF99);
	}
	end;
	OnKill:
	killmonster("job3_arch02","#arch_val02::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
job3_arch02,113,327,5	script	Valqu�ria#arch_01	4_F_VALKYRIE2,{
	if (getmercinfo(1)) {
		mes("[Valqu�ria]\n"
			"Se voc� quiser conversar comigo, voc� tem que cancelar todos os contratos com qualquer mercen�rio que voc� tenha.");
		close;
	}
	mes("[Valqu�ria Anguhilde]\n"
		"O dem�nio sempre faz um esfor�o para agitar a mente das pessoas.\n"
		"Voc� n�o precisa se preocupar com seus sussurros.");
	next;
	mes("[Valqu�ria Anguhilde]\n"
		"De qualquer forma eu posso sentir minha energia voltando.\n"
		"Me mostre as coisas que voc� achou.");
	next;
	mes("- Voc� mostra um peda�o de ouro para Valkyrie. -");
	next;
	mes("[Valqu�ria Anguhilde]\n"
		"� um peda�o de chifre!\n"
		"Se voc� coletar pe�as, voc� pode pedir ajuda a outras Valqu�rias.");
	next;
	mes("[Valqu�ria Anguhilde]\n"
		"Por causa de uma batalha pr�xima, s� consegui um pouco de energia.\n"
		"Eu vou dar um novo ^3131FFnovo pergaminho antigo^000000.\n"
		"Vai ser �til encontrar o resto das pe�as.");
	next;
	mes("[Valqu�ria Anguhilde]\n"
		"Ent�o aguardo uma boa not�cia.");
	close2;
	getitem(ValkyrieB_Scroll,1);
	viewpoint(1,244,46,1,0xFFFF99);
	hideonnpc("Valqu�ria#arch_01");
	donpcevent("#arch_2_start::OnEnable");
	end;
}

// ------------------------------------------------------------------
job3_arch02,244,46,5	script	Valqu�ria#arch_02	4_F_VALKYRIE2,{
	mes("[Valqu�ria Anguhilde]\n"
		"Voc� achou o resto das pe�as?");
	next;
	if (countitem(Broken_Horn_Pipe) < 2) {
		mes("[Valqu�ria Anguhilde]\n"
			"Murmurar?\n"
			"Eu posso ver isso ao seu lado.");
		getitem(Broken_Horn_Pipe,2);
		next;
	}
	mes("[Valqu�ria Anguhilde]\n"
		"Est� bem.\n"
		"Eu vou completar o trombeta de chifre!");
	next;
	mes("[Valqu�ria Anguhilde]\n"
		"Mas a batalha ainda n�o terminou.\n"
		"Voc� se lembra de um santu�rio arruinado ^3131FFno centro da ilha^000000?\n"
		"S� ser� conclu�do quando voc� usar um trombeta de chifre.");
	next;
	mes("[Valqu�ria Anguhilde]\n"
		"Eu posso sentir que o ar ao meu redor est� ficando impuro.\n"
		"E sinta a frieza da escurid�o negra.\n"
		"Desta vez ser� perigoso.");
	next;
	mes("[Valqu�ria Anguhilde]\n"
		"Eu te dou um colar de presente.\n"
		"Mas eu n�o tenho certeza se ser� �til ou n�o....\n"
		"Por favor se apresse!");
	close2;
	getitem(Will_Of_Exhausted_Angel,1);
	hideonnpc("Valqu�ria#arch_02");
	donpcevent("#arch_3_start::OnEnable");
	end;
}

// ------------------------------------------------------------------
job3_arch02,279,234,0	script	#arch_end	HIDDEN_WARP_NPC,7,7,{
	end;
	OnTouch:
	donpcevent("#arch_3_01::OnKill");
	donpcevent("#arch_3_02::OnKill");
	donpcevent("#arch_3_03::OnKill");
	donpcevent("mob#arch_2::OnKill");
	hideoffnpc("Valqu�ria Anguhilde#end");
	if (checkweight(Knife,1) == 0 || (MaxWeight - Weight) < 2000) {
		mes("- Voc� est� carregando muitos itens. -\n"
			"- Livre-se de alguns deles -");
		close;
	} else if (hascashmount()) {
		mes("Voc� est� em um animal de estima��o\n"
			"Por favor, desequipar seu animal de estima��o e tente novamente!");
		close;
	} else if (getmercinfo(1)) {
		mes("[Valqu�ria Anguhilde]\n"
			"Se voc� quiser conversar comigo, voc� tem que cancelar todos os contratos com qualquer mercen�rio que voc� tenha.");
		close;
	} else if (countitem(Broken_Horn_Pipe) < 2) {
		mes("[Valqu�ria Anguhilde]\n"
			"Voc� colecionou todas as pe�as da minha trombeta de chifre?");
		next;
		mes("[Valqu�ria Anguhilde]\n"
			"Eu sei que voc� se inclinou para tr�s para me ajudar.\n"
			"Mas eu n�o posso fazer nada sem 2 peda�os de Chifre.");
		next;
		mes("[Valqu�ria Anguhilde]\n"
			"Pode ser perigoso, ent�o vamos voltar.");
		close2;
		nude;
		if (countitem(Will_Of_Exhausted_Angel)) {
			delitem(Will_Of_Exhausted_Angel,countitem(Will_Of_Exhausted_Angel));
		}
		delitem(Broken_Horn_Pipe,countitem(Broken_Horn_Pipe));
		mapwarp("job3_arch02","job3_arch01",29,29);
		end;
	} else {
		if (SkillPoint) {
			mes("Voc� n�o pode progredir sem usar todos os seus pontos de habilidade.\n"
				"Por favor, use todos os seus pontos de habilidade antes de progredir");
			close;
		} else {
			mes("[Valqu�ria Anguhilde]\n"
				"Finalmente terminamos todos os preparativos.");
			next;
			mes("Valqu�ria segura o chifre e sopra para o c�u.");
			next;
			mes("Booo - - - -");
			next;
			mes("Booo - - -");
			next;
			hideoffnpc("Valqu�ria dos c�us");
			mes("[Valqu�ria Anguhilde]\n"
				"Assist�ncia de Odin!\n"
				"Soldados de Valhalla!\n"
				"O lugar sagrado do deus Odin est� contaminado pelas trevas!");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"N�o se preocupe, Anguhilde.\n"
				"Seu desejo alcan�ou Valhalla.\n"
				"Os dem�nios foram removidos por outras Valqu�rias como voc� queria.");
			next;
			mes("[Valqu�ria Anguhilde]\n"
				"Valqu�rias!\n"
				"Ent�o � seguro agora?");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"Sim Anguhilde.\n"
				"Mesmo que voc� tenha sido expulso por causa de um incidente anterior.\n"
				"Odin disse que est� reconsiderando seu banimento.");
			next;
			mes("[Valqu�ria Anguhilde]\n"
				"Ah! Eu posso voltar para Asgard!");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"N�o fa�a uma generaliza��o precipitada.\n"
				"Mas eu acho que boas not�cias ser�o enviadas para voc�.");
			next;
			mes("[Valqu�ria Anguhilde]\n"
				"onra a Odin!\n"
				"Eu me sinto cheio de gra�a.\n"
				"T�o brilhante e quente....");
			next;
			mes("- Shoooo -");
			specialeffect(EF_CLOAKING,AREA,getnpcid("Valqu�ria Anguhilde#end"));
			hideonnpc("Valqu�ria Anguhilde#end");
			emotion(e_omg,1);
			next;
			mes("[Valqu�ria dos c�us]\n"
				"Defina sua mente � vontade.\n"
				"Ela foi para um lugar onde deveria estar.");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"Eu acho que voc� n�o entende.");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"Anguhilde � uma valqu�ria que est� morta h� muito tempo.\n"
				"Voc� n�o viu um santu�rio coberto pelo mal?\n"
				"Infelizmente, Anguhilde n�o conseguiu lidar com a tarefa e caiu.");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"Aqui est� uma ilus�o de Anguhilde que n�o quer ser reconhecido.\n"
				"Ela n�o pode ir para o inferno, mesmo quando ela est� morta, e luta de seu pesadelo constante.");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"Mas ela est� aliviada por seu favor.\n"
				"Mesmo que seja diferente com a realidade, mas agora ela pode descansar em paz.");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"Humanos, as Valqu�rias est�o em d�vida com voc�.\n"
				"Obrigado.\n"
				"N�o posso convidar voc� como quero, mas o poder dado por Odin pode ajud�-lo.");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"Agora, volte para o seu mundo.\n"
				"O som e os chilros de um p�ssaro ser�o espalhados por voc�.");
			next;
			mes("[Valqu�ria dos c�us]\n"
				"N�o esque�a o esp�rito de um ministro altru�sta como hoje para sempre.\n"
				"Espero que nos encontremos em Valhalla algum dia.");
			nude;
			if (countitem(Will_Of_Exhausted_Angel)) {
				delitem(Will_Of_Exhausted_Angel,countitem(Will_Of_Exhausted_Angel));
			}
			completequest(2191);
			callfunc("ClearJobQuest3nd",4063);
			delitem(Broken_Horn_Pipe,countitem(Broken_Horn_Pipe));
			getitem(Mitra,1);
			getitem(Green_Apple_Ring,1);
			jobchange(Job_Arch_Bishop_T);
			mapwarp("job3_arch02","job3_arch01",29,29);
			end;
		}
	}

	OnInit:
	disablenpc("#arch_end");
	end;
}

// ------------------------------------------------------------------
job3_arch02,281,232,1	script	Valqu�ria Anguhilde#end	4_F_VALKYRIE2,{
	end;
	OnInit:
	hideonnpc("Valqu�ria Anguhilde#end");
	end;
}

// ------------------------------------------------------------------
job3_arch02,273,235,5	script	Valqu�ria dos c�us	4_F_VALKYRIE,{
	mes("[Valqu�ria dos c�us]\n"
		"Agora, volte para o seu mundo.\n"
		"O som e os chilros de um p�ssaro ser�o espalhados por voc�.");
	next;
	mes("[Valqu�ria dos c�us]\n"
		"N�o esque�a o esp�rito de um ministro altru�sta como hoje para sempre.\n"
		"Espero que nos encontremos em Valhalla algum dia.");
	close2;
	mapwarp("job3_arch02","job3_arch01",29,29);
	end;

	OnInit:
	hideonnpc("Valqu�ria dos c�us");
	end;
}

// ------------------------------------------------------------------
job3_arch02,132,323,0	script	#arch_2_01	HIDDEN_WARP_NPC,5,5,{
	end;
	OnTouch:
	if (countitem(ValkyrieB_Scroll)) {
		mapannounce("job3_arch02","Sussurrando Valqu�rias: Eu vejo um novo Pergaminho de L�nguas Antigas!",bc_map);
	}
	end;
}

// ------------------------------------------------------------------
-	script	#arch_2_02_0::archbjcq2	FAKE_NPC,{
	OnTouch:
	if (countitem(ValkyrieB_Scroll)) {
		delitem(ValkyrieB_Scroll,1);
		// fall through
	} else if (getmercinfo(1) == 2038) {
		.@randht = rand(1,10);
		if (.@randht < 8) {
			mapannounce("job3_arch02","Sussurro de representa��o: Eu posso sentir o esp�rito do mal. Voc� pode ouvir? O som de se reunir em multid�es.",bc_map,"0xFFCE00");
		} else if ((.@randht == 8) || (.@randht == 9)) {
			mapannounce("job3_arch02","Sussurro de representa��o: prontid�o de combate!",bc_map,"0xFFCE00");
		} else {
			mapannounce("job3_arch02","Sussurro de representa��o: n�o posso deixar voc�. Morrer!",bc_map,"0xFFCE00");
		}
		end;
	}
	mapannounce("job3_arch02","Sussurro de representa��o: Voc� n�o pode fazer nada sozinho! Vamos voltar!",bc_map,"0xFFCE00");
	mapwarp("job3_arch02","job3_arch01",29,29);
	end;
}
job3_arch02,167,313,0	duplicate(archbjcq2)	#arch_2_02	HIDDEN_WARP_NPC,5,5
job3_arch02,127,304,0	duplicate(archbjcq2)	#arch_2_03	HIDDEN_WARP_NPC,5,5
job3_arch02,207,279,0	duplicate(archbjcq2)	#arch_2_04	HIDDEN_WARP_NPC,5,5
job3_arch02,239,281,0	duplicate(archbjcq2)	#arch_2_05	HIDDEN_WARP_NPC,5,5
job3_arch02,269,303,0	duplicate(archbjcq2)	#arch_2_06	HIDDEN_WARP_NPC,5,5
job3_arch02,288,283,0	duplicate(archbjcq2)	#arch_2_07	HIDDEN_WARP_NPC,5,5
job3_arch02,278,234,0	duplicate(archbjcq2)	#arch_2_08	HIDDEN_WARP_NPC,5,5
job3_arch02,234,179,0	duplicate(archbjcq2)	#arch_2_09	HIDDEN_WARP_NPC,5,5
job3_arch02,227,169,0	duplicate(archbjcq2)	#arch_2_10	HIDDEN_WARP_NPC,5,5
job3_arch02,190,146,0	duplicate(archbjcq2)	#arch_2_11	HIDDEN_WARP_NPC,5,5

// ------------------------------------------------------------------
job3_arch02,206,113,0	script	#arch_2_boss	HIDDEN_WARP_NPC,5,5,{
	OnTouch:
	if (countitem(ValkyrieB_Scroll)) {
		delitem(ValkyrieB_Scroll,1);
	} else if (getmercinfo(1) == 2038) {
		mapannounce("job3_arch02","Um grito de dem�nio: voc� � t�o infantil. Eu te convido uma festa do dem�nio. Eu vou fazer voc� se divertir!",bc_map,"0xFF0000");
		end;
	}
	mapannounce("job3_arch02","Sussurro de representa��o: Voc� n�o pode fazer nada sozinho! Vamos voltar!",bc_map,"0xFFCE00");
	mapwarp("job3_arch02","job3_arch01",29,29);
	end;
}

// ------------------------------------------------------------------
job3_arch02,284,159,0	script	#arch_3_01	HIDDEN_WARP_NPC,20,20,{
	OnTouch:
	if (Class != Job_Priest) {
		mapannounce("job3_arch02","Frus: Voc� quer ver a Deus? Ok, vou mandar voc� para a terra dos mortos sozinha!",bc_map,"0xFF0000");
		areamonster("job3_arch02",242,44,246,48,"Frus",G_FRUS,1,"#arch_3_01::OnMyMobDead");
	}
	disablenpc("#arch_3_01");
	end;

	OnMyMobDead:
	end;

	OnKill:
	killmonster("job3_arch02","#arch_3_01::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
job3_arch02,307,200,0	script	#arch_3_02	HIDDEN_WARP_NPC,5,5,{
	OnTouch:
	if (BaseJob == Job_Priest) {
		mapannounce("job3_arch02","Skogul: Voc� � meu convidado!",bc_map,"0xFF0000");
		monster("job3_arch02",307,200,"Skogul",G_SKOGUL,1,"#arch_3_02::OnMyMobDead");
	}
	disablenpc("#arch_3_02");
	end;

	OnMyMobDead:
	end;

	OnKill:
	killmonster("job3_arch02","#arch_3_02::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
job3_arch02,296,216,0	script	#arch_3_03	HIDDEN_WARP_NPC,5,5,{
	OnTouch:
	mapannounce("job3_arch02","Frus: Eu gosto do seu rosto ... Posso roub�-lo?",bc_map,"0xFF0000");
	monster("job3_arch02",296,216,"Frus",G_FRUS,1,"#arch_3_03::OnMyMobDead");
	disablenpc("#arch_3_03");
	end;

	OnMyMobDead:
	end;

	OnKill:
	killmonster("job3_arch02","#arch_3_03::OnMyMobDead");
	end;

	OnInit:
	disablenpc("#arch_3_03");
	end;
}

// ------------------------------------------------------------------
job3_arch02,389,390,1	script	mob#arch_1	CLEAR_NPC,{
	end;
	OnEnable:
	monster("job3_arch02",100,102,"Invasor do Santu�rio",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",90,131,"Invasor do Santu�rio",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",138,205,"Invasor do Santu�rio",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",161,215,"Invasor do Santu�rio",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",201,236,"Invasor do Santu�rio",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",91,170,"Invasor do Santu�rio",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",104,183,"Invasor do Santu�rio",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",165,215,"Invasor do Santu�rio",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",218,250,"Invasor do Santu�rio",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",254,293,"Invasor do Santu�rio",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	end;
	OnMyMobDead:
	end;
	OnKill:
	killmonster("job3_arch02","mob#arch_1::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
job3_arch02,389,389,1	script	mob#arch_2	CLEAR_NPC,{
	end;
	OnEnable:
	monster("job3_arch02",156,321,"Invasor do Santu�rio",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",170,305,"Invasor do Santu�rio",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",256,293,"Invasor do Santu�rio",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",286,284,"Invasor do Santu�rio",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",292,185,"Invasor do Santu�rio",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",190,146,"Invasor do Santu�rio",G_ZOMBIE_PRISONER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",183,293,"Invasor do Santu�rio",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",200,287,"Invasor do Santu�rio",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",278,236,"Invasor do Santu�rio",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",281,170,"Invasor do Santu�rio",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",227,166,"Invasor do Santu�rio",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",204,177,"Invasor do Santu�rio",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	end;
	OnMyMobDead:
	end;
	OnKill:
	killmonster("job3_arch02","mob#arch_2::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
job3_arch02,389,388,1	script	start#arch	CLEAR_NPC,{
	end;
	OnInit:
	mapwarp("job3_arch02","job3_arch01",29,29);
	end;
	OnEnable:
	mapwarp("job3_arch02","job3_arch01",29,29);
	enablenpc("#arch_1_start");
	enablenpc("#arch_1_01");
	enablenpc("#arch_1_02");
	enablenpc("#arch_1_03");
	enablenpc("#arch_1_04");
	enablenpc("#arch_1_05");
	enablenpc("#arch_1_06");
	enablenpc("#arch_1_07");
	enablenpc("#arch_1_08");
	enablenpc("#arch_1_09");
	enablenpc("#arch_1_10");
	enablenpc("#arch_1_11");
	enablenpc("#arch_1_12");
	enablenpc("#arch_1_boss");
	disablenpc("#arch_2_01");
	disablenpc("#arch_2_02");
	disablenpc("#arch_2_03");
	disablenpc("#arch_2_04");
	disablenpc("#arch_2_05");
	disablenpc("#arch_2_06");
	disablenpc("#arch_2_07");
	disablenpc("#arch_2_08");
	disablenpc("#arch_2_09");
	disablenpc("#arch_2_10");
	disablenpc("#arch_2_11");
	disablenpc("#arch_2_boss");
	disablenpc("#arch_3_01");
	disablenpc("#arch_3_02");
	disablenpc("#arch_3_03");
	donpcevent("#arch_3_01::OnKill");
	donpcevent("#arch_3_02::OnKill");
	donpcevent("#arch_3_03::OnKill");
	disablenpc("#arch_end");
	hideonnpc("Valqu�ria#arch_01");
	hideonnpc("Valqu�ria#arch_02");
	hideonnpc("Valqu�ria Anguhilde#end");
	donpcevent("#arch_redcell::OnRed");
	donpcevent("mob#arch_1::OnKill");
	donpcevent("mob#arch_2::OnKill");
	donpcevent("start#arch::OnTimeOff");
	donpcevent("start#arch::OnTimeOn");
	donpcevent("#arch_val01::OnKill");
	donpcevent("#arch_val02::OnKill");
	donpcevent("mob#arch_1::OnKill");
	donpcevent("mob#arch_2::OnKill");
	donpcevent("mob#arch_1::OnEnable");
	donpcevent("#arch_val01::OnEnable");
	end;
	OnTimeOn:
	initnpctimer;
	end;
	OnTimeOff:
	stopnpctimer;
	end;
	OnTimer60000:
	OnTimer120000:
	OnTimer180000:
	OnTimer240000:
	OnTimer300000:
	OnTimer360000:
	OnTimer420000:
	OnTimer480000:
	OnTimer540000:
	if (getmapusers("job3_arch02") == 0) {
		mapwarp("job3_arch02","job3_arch01",29,29);
		donpcevent("Valqu�ria#arch::OnBc");
		stopnpctimer;
	}
	end;
	OnTimer600000:
	mapannounce("job3_arch02","Pesadelo da Valqu�ria: Eu n�o aguento mais!",bc_map,"0xFF0000");
	end;
	OnTimer605000:
	mapannounce("job3_arch02","Sussurrando de Valqu�ria: De jeito nenhum! Eu n�o posso deixar voc�s fazerem isso. Volte!",bc_map,"0xFFCE00");
	mapwarp("job3_arch02","job3_arch01",29,29);
	donpcevent("Valqu�ria#arch::OnBc");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
job3_arch02,390,388,1	script	#arch_2_start	CLEAR_NPC,{
	end;
	OnInit:
	disablenpc("#arch_2_01");
	disablenpc("#arch_2_02");
	disablenpc("#arch_2_03");
	disablenpc("#arch_2_04");
	disablenpc("#arch_2_05");
	disablenpc("#arch_2_06");
	disablenpc("#arch_2_07");
	disablenpc("#arch_2_08");
	disablenpc("#arch_2_09");
	disablenpc("#arch_2_10");
	disablenpc("#arch_2_11");
	disablenpc("#arch_2_boss");
	end;
	OnEnable:
	enablenpc("#arch_2_01");
	enablenpc("#arch_2_02");
	enablenpc("#arch_2_03");
	enablenpc("#arch_2_04");
	enablenpc("#arch_2_05");
	enablenpc("#arch_2_06");
	enablenpc("#arch_2_07");
	enablenpc("#arch_2_08");
	enablenpc("#arch_2_09");
	enablenpc("#arch_2_10");
	enablenpc("#arch_2_11");
	enablenpc("#arch_2_boss");
	donpcevent("#arch_val02::OnEnable");
	donpcevent("mob#arch_2::OnEnable");
	end;
}

// ------------------------------------------------------------------
job3_arch02,390,386,1	script	#arch_3_start	CLEAR_NPC,{
	end;
	OnEnable:
	enablenpc("#arch_3_01");
	enablenpc("#arch_3_02");
	enablenpc("#arch_3_03");
	enablenpc("#arch_end");
	end;
}

// ------------------------------------------------------------------
job3_arch02,290,221,0	script	#arch_end_eff	HIDDEN_WARP_NPC,5,5,{
	OnTouch:
	specialeffect(EF_MAPPILLAR2,"#arch_end");
	end;
}

// ------------------------------------------------------------------
odin_tem02,30,181,0	script	#wherearch01	HIDDEN_WARP_NPC,10,10,{
	OnTouch:
	if (archquest == 5) {
		viewpoint(1,282,263,1,0xFFFF99);
	}
	end;
}

// ------------------------------------------------------------------
odin_tem02,30,335,0	script	#wherearch02	HIDDEN_WARP_NPC,10,10,{
	OnTouch:
	if (archquest == 5) {
		viewpoint(1,282,263,1,0xFFFF99);
	}
	end;
}
