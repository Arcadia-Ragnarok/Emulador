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
| - Versão: Spell Master                                            |
| - Info: Quest de Mudança de Classe para Arcebispo.                |
| - Principais alterações da versão:                                |
| * Correção a absurda quantidade de erros.                         |
| * Tradução para português brasileiro.                             |
| * Layout de encapsulamento.                                       | 
| * Fixado ser trans-classe nível 99/50 ou mais.                    |
| * Variavel de quest alterada seguindo os padrões do arcadia.      |
| - Nota:                                                           |
| * Requer barqueiro de acesso ao santuário de Odin, encontrado em  |
|   scripts de quests em Hungel.                                    |
\*-----------------------------------------------------------------*/

prt_church,103,88,3	script	Ministro#arch	1_M_PASTOR,{
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if (archquest == 0) {
			mes("[Ministro Rezando]\n"
				"Em frente ao Deus Todo-Poderoso Odin, não haverá alguém mais inteligente que ele.\n"
				"E não haverá alguém mais misericordioso.");
			next;
			mes("[Ministro Rezando]\n"
				"Todos os ministros de Odin devem ser diligentes.\n"
				"Eles nunca deveriam ter preguiça de servir Odin.");
			next;
			mes("[Ministro Rezando]\n"
				"Irmão, como tem sido sua vida?\n"
				"Você já viveu isso ao máximo?\n"
				"Você serviu sua vida à luz de Odin?");
			next;
			mes("[Ministro Rezando]\n"
				"Somos ministros e nosso comportamento é visto como atos dos deuses.\n"
				"Devemos estar sempre conscientes disso.");
			next;
			mes("[Ministro Rezando]\n"
				"Nós devemos sempre dizer a verdade.\n"
				"Nós não devemos ser vítimas de mentiras e enganos.");
			next;
			mes("[Ministro Rezando]\n"
				+ (Sex == SEX_MALE ? "irmão":"irmã")+".\n"
				"Apesar de servirmos a Odin, somos pessoas normais.\n"
				"Podemos ser degradados apesar de nós mesmos e devemos perceber isso.");
			next;
			mes("[Ministro Rezando]\n"
				"Nós sempre tentamos manter nossa intenção original em mente e espalhar as leis de Odin.");
			next;
			select("Como eu me tornei assim?");
			mes("[Ministro Rezando]\n"
				"Esta é uma boa pergunta.\n"
				"Nós temos muitos métodos..., mas eu recomendo isso.");
			next;
			mes("[Ministro Rezando]\n"
				"Você já ouviu falar de uma ^3131FFSanta Peregrinação^000000?\n"
				"Uma Peregrinação Sagrada significa ir a um lugar sagrado para rezar ao Deus Odin por proteção e graça.");
			next;
			mes("[Ministro Rezando]\n"
				"Quando você orar a Odin no lugar sagrado, sentirá que é nascido de novo.");
			next;
			mes("[Ministro Rezando]\n"
				"O que você acha?\n"
				"Você gostaria de fazer uma peregrinação sagrada?");
			next;
			if (select("Sim eu quero","Do que está falando?") == 1) {
				mes("[Ministro Rezando]\n"
					"Essa é a atitude correta.\n"
					"Uma pessoa que vive em sua vida mundana seria melhor ter uma nova mente e corpo.\n"
					"E evoluir para o caminho de um verdadeiro ministro de Odin.");
				next;
				mes("[Ministro Rezando]\n"
					"Há uma pequena aldeia chamada Umbala longe daqui.\n"
					"Essa aldeia é onde a tribo vive em harmonia com a natureza.");
				next;
				mes("[Ministro Rezando]\n"
					"Vá até lá e encontre o Sacerdote Dayan.\n"
					"Diga-lhe exatamente...\n"
					"^3131FFEstou aqui para Santa Peregrinação^000000");
				next;
				mes("[Ministro Rezando]\n"
					"Ele é muito velho, então ele é difícil de ouvir.\n"
					"Você tem que falar alto e claramente.\n"
					"Espero que isso abra caminho para você viver à luz de Odin.");
				archquest = 1;
				setquest(2187);
				close;
			}
		} else {
			mes("[Ministro Rezando]\n"
				"Como está indo?\n"
				"Você conheceu Priest Dayan em Umbala?");
			close;
		}
	} else if (Class == Job_Arch_Bishop_T) {
		mes("[Ministro Rezando]\n"
			"Ah! Um arcebispo\n"
			"Você alcançou o estado de luz.\n"
			"Espero que você dê felicidade e honra às pessoas durante suas aventuras.");
		close;
	} else {
		mes("[Ministro Rezando]\n"
			"Em frente ao Deus Todo-Poderoso Odin, não haverá alguém mais inteligente que ele.\n"
			"E não haverá alguém mais misericordioso.");
		next;
		mes("[Ministro Rezando]\n"
			"Todos os ministros de Odin devem ser diligentes.\n"
			"Eles nunca deveriam ter preguiça de servir Odin.");
		next;
		mes("[Ministro Rezando]\n"
			"Hoje em dia, ouvi dizer que os ministros estão se tornando negligentes em seu dever para com Odin.\n"
			"E se adornam com os esplendores do mundo.");
		next;
		mes("[Ministro Rezando]\n"
			"Se você vê algum desses ministros, você pode pedir para eles irem à igreja em prontera?");
		next;
		mes("[Ministro Rezando]\n"
			"Eles dão uma aura especial para que você possa reconhecê-los facilmente.\n"
			"Eu vou torná-los ministros dignos de servir Odin.");
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
				"Isto é... certo?\n"
				"Hmm... so...\n"
				"Um...ma? Umau...ma?");
			emotion(e_swt);
			next;
			mes("[Garoto Utan]\n"
				"...............");
			next;
			mes("[Sacerdote]\n"
				"Huuuuuu......\n"
				"Oh céus . Me sinto pesado.\n"
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
				"Olá. Você é...\n"
				"Sacerdote Dayan?");
			next;
			mes("[Sacerdote]\n"
				"Huh?\n"
				"- Ele vira a cabeça para você.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Você não é padre Dayan?");
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
				"Prazer em conhecê-lo, "+(Sex == SEX_MALE ? "irmão":"irmã")+".");
			next;
			mes("- O velho sacerdote lhe dá um sorriso de orelha a orelha.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Eu esqueci de usar meu aparelho auditivo.\n"
				"De qualquer forma, por que você veio aqui?");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Hmm, eu queria te contar...");
			next;
			input(.@inputstr$);
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				+ .@inputstr$);
			next;
			if (.@inputstr$ != "Estou aqui para Santa Peregrinação") {
				mes("- O padre Dayan parece não entender você.\n"
					"- Ele apenas olha para você e sorri.");
				next;
				mes("[Sacerdote]\n"
					"Eh? Diga o quê?");
				close;
			}
			mes("[Priest Dayan]\n"
				"..............?");
			next;
			mes("Ele coloca suas orelhas em sua direção.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"^FF0000Estou aqui para a santa peregrinação!\n"
				"Estou aqui para a santa peregrinação!\n"
				"Estou aqui para a santa peregrinação!\n"
				"Estou aqui para a santa peregrinação!^000000");
			next;
			mes("[Sacerdote Dayan]\n"
				"Eh... você é?\n"
				"Uma peregrinação à Terra Santa...\n"
				"Faz muito tempo desde que eu vi um sacerdote tão devoto.\n"
				"Bem vind"+(Sex == SEX_MALE ? "o irmão":"a irmã")+".");
			next;
			mes("- O velho sacerdote lhe dá um sorriso gracioso.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Veja esta aldeia com a enorme floresta que a rodeia.\n"
				"Você pode ver uma árvore gigante?");
			next;
			mes("[Sacerdote Dayan]\n"
				"Essa árvore grande é chamada ^3131FFYggdrasil^000000.\n"
				"Essa árvore surgiu a partir do corpo de Ymir depois que Odin criou o mundo como você o conhece.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Uma fonte jorra do fim das raízes de Yggdrasil que se espalham para todos os mundos.");
			next;
			mes("[Sacerdote Dayan]\n"
				"As raízes seguem para Niflheim, onde você pode encontrar a fonte de Hvergelmir.\n"
				"Em Rune-Midgard, há a primavera de Mimir.\n"
				"E em Asgard, o mundo dos Deuses, há a primavera da Palavra.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Os poços de primavera de Mimir com inteligência.\n"
				"O mito diz que se Odin permitir que você tenha o olho dele, ganhará todo o conhecimento dentro daquela primavera.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Através da Santa Peregrinação, podemos nos tornar puros limpando nossos corpos e almas.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Vá até a Yggdrasil.\n"
				"Você pode ser atacad"+(Sex == SEX_MALE ? "o":"a")+" por criaturas lá.\n"
				"Mas tenha em mente que suas intenções são apenas proteger o Yggdrasil.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Siga seus passos com propósito.\n"
				"Se Odin não te abandonar, você pode alcançar o começo do mundo no caule do Yggdrasil.\n"
				"Quando você chegar lá, encontre um lugar tranquilo.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Ore por uma vida de fé e expie seus pecados com uma mente piedosa.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Admire a onisciência e onipotência de Odin e ore por uma sabedoria.\n"
				"Para escolher o caminho certo.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Vamos ver, vá para o lugar da criatura mais famosa de Odin.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Depois de fazer sua peregrinação, vamos tomar uma bebida juntos e conversar sobre sua experiência.");
			archquest = 2;
			changequest(2187,2188);
			close;
		} else if (archquest == 2) {
			mes("[Sacerdote Dayan]\n"
				"Este lugar é o lugar mais sagrado do mundo, Yggdrasil.\n"
				"Esta cerimônia sagrada vai iluminar sua alma.");
			next;
			if (select("Como devo orar?","Até mais") == 1) {
				mes("[Sacerdote Dayan]\n"
					"Através da oração, podemos seguir quatro caminhos.\n"
					"Lembre-se do que eu digo para você agora.");
				next;
				mes("[Sacerdote Dayan]\n"
					"A primeira maneira é a maneira de ^3131FFmeditação^000000.\n"
					"Temos que estar prontos para saudar Odin com uma consciência limpa.");
				next;
				mes("[Sacerdote Dayan]\n"
					"A meditação começa com uma ^3131FFbênção^000000 que acalma sua mente.");
				next;
				mes("[Sacerdote Dayan]\n"
					"O segundo é o modo da ^3131FFagonia^000000.\n"
					"Refletimos sobre nós mesmos com a confissão sobre nossa retribuição pelos feitos de uma vida anterior.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Não tenha medo da dor.\n"
					"Isso é uma necessidade e será o primeiro passo para entrar na maneira de liquidar as feridas do passado.");
				next;
				mes("[Sacerdote Dayan]\n"
					"O terceiro caminho é o da ^3131FFalegria^000000.\n"
					"Ao se livrar da dor, sua mente sofrerá menos.\n"
					"E você experimentará a alegria da vida ao ajudar e consolar os outros.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Eles o abençoarão porque você é uma existência de alegria que supera uma aflição.\n"
					"Nós chamamos isso de ^3131FFAspersio^000000.\n"
					"Você deve beber um ^3131FFÁgua Benta^000000 com apreciação de Aspersio.");
				next;
				mes("[Sacerdote Dayan]\n"
					"O último caminho é o da ^3131FFluz^000000.\n"
					"Você está livre de todo pecado porque foi abençoado por toda a criação.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Você renasceu como luz, canta uma Gloria ^000000 de alegria e alma que te ama.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Depois de terminar todas essas orações, levante-se com uma mente piedosa.\n"
					"Se sua oração é verdadeira, Odin lhe emprestará sua sabedoria.");
				next;
				mes("[Sacerdote Dayan]\n"
					"Você está pront"+(Sex == SEX_MALE ? "o":"a")+"?\n"
					"Ok, é hora de sair e se desculpar.\n"
					"Se a sua oração terminar, vamos conversar.");
				close;
			}
			mes("[Sacerdote Dayan]\n"
				"Espero que minha oração possa enfraquecer sua agonia...");
			close;
		} else if (archquest == 3) {
			mes("[Sacerdote Dayan]\n"
				"Você voltou.\n"
				"Eu posso sentir que você tem uma energia nova.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Eu me sinto despreocupado.\n"
				"Como se eu tivesse acabado de renascer...");
			next;
			mes("[Sacerdote Dayan]\n"
				"Sua fé lhe dá confiança e coragem.\n"
				"Um sorriso de uma mente pacífica livrará facilmente as pessoas de sua cautela.\n"
				"Por favor, inspire as pessoas com amor e energia.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Obrigado pelas suas amáveis palavras.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Agora, há um lugar para onde você deveria ir.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Aquele lugar é Hugel em Schwaltzvalt.\n"
				"Há uma freira rezando lá chamada Vinue, ela é uma verdadeira ministra que ora pelas pessoas que sofrem no mundo.\n"
				"Mas a última vez que a vi, ela parecia triste.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Você pode convencê-la a fazer uma peregrinação a Yggdrasil?\n"
				"Eu acho que ela está exausta devido a orar muito.\n"
				"Espero que o ar de Yggdrasil seja útil para ela.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Não se preocupe.\n"
				"Eu vou conhecê-la.");
			next;
			mes("[Sacerdote Dayan]\n"
				"Muito obrigado.\n"
				"Sinta-se a vontade para voltar aqui quando quiser rezar.");
			archquest = 4;
			changequest(2188,2189);
			close;
		} else {
			mes("[Dayan]\n"
				"Você achou Vinue em Hugel?\n"
				"Como ela está?");
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
				"É a primavera de Hvergelmir.\n"
				"Este lugar é um lugar muito vívido e pacífico.\n"
				"É apropriado orar.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"].\n"
				"Hora de fazer genuflexões....\n"
				"Hora de começar....\n"
				"Hmm, o que aquele padre disse para mim?.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Hmm ... Qual é o primeiro caminho?.");
			next;
			switch (select("O caminho do silêncio","O caminho da confissão","O caminho da meditação")) {
				case 1:
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"O caminho do silêncio...?.\n"
					"Acho que não..");
				close;
				case 2:
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"O caminho da confissão ...?.\n"
					"Acho que não..");
				close;
				case 3:
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"O caminho da meditação...\n"
					"Sim, é o caminho da meditação.");
				next;
			}
			mes("^3131FF[Sacerdote Dayan]^000000\n"
				"O primeiro caminho é o caminho da meditação.\n"
				"No caminho da meditação, temos que estar prontos para saudar Odin com uma consciência limpa.^000000");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"A meditação começa com uma bênção que acalma sua mente.^000000");
			next;
			mes("- Você fecha os olhos devagar e respira fundo. -");
			next;
			specialeffect(EF_BLESSING,AREA,playerattached());
			next;
			mes("Sua mente é atualizada com o efeito de bênção.\n"
				"Você continua a meditar tentando livrar sua mente de quaisquer sentimentos ruins.");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"O segundo é o caminho da agonia.\n"
				"Através do caminho da agonia, refletimos sobre nós mesmos com a confissão sobre nossa retribuição pelos feitos de uma vida anterior.^000000");
			next;
			mes("^3131FF [Sacerdote Dayan]\n"
				"Não tenha medo da dor.\n"
				"Isso é uma necessidade e será o primeiro passo para entrar na maneira de liquidar as feridas do passado.^000000");
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
			mes("- Você ruminou sobre sua confissão e está perdido em pensamentos novamente -");
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
				"O terceiro caminho é o caminho da alegria.\n"
				"Ao se livrar da dor, sua mente sofrerá menos e você experimentará a alegria da vida ao ajudar e consolar os outros.^000000");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"E também eles o abençoarão porque você é uma existência de alegria que supera uma aflição.\n"
				"Nós chamamos isso de Aspersio.\n"
				"Você deve beber uma Água Sagrada com apreciação de Aspersio.^000000");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"Você está bebendo a Água Sagrada.^000000");
			next;
			if (!countitem(Holy_Water)) {
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"Ah não! Eu esqueci de trazer água benta!");
				close;
			}
			mes("- Você se curva respeitosamente segurando uma Água Benta e coloca o copo nos lábios -");
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
				"O último caminho é um modo de luz.\n"
				"Você está livre de todo pecado porque foi abençoado por toda a criação.^000000");
			next;
			mes("^3131FF[Sacerdote Dayan]\n"
				"Você renasceu como luz, canta uma Gloria de alegria e alma que te ama.^000000");
			next;
			mes("- Você respira fundo e começa a cantar uma Gloria.\n"
				"Um acorde cai na primavera de Hvergelmir e um som de cascata lhe dá uma sensação refrescante. -");
			specialeffect(EF_GLORIA,AREA,playerattached());
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Descendentes de Heimdal se reúnem sob a árvore de Ash Yggdrasil.\n"
				"O pássaro Curdan, que fica em um galho, me traz a sabedoria do mundo inteiro.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O lobo Curdan me protege de todas as ameaças do mundo.");
			specialeffect(EF_GLORIA,AREA,playerattached());
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O anfitrião do ballascalf, levante-se do seu lugar.\n"
				"O mundo inteiro grita de alegria.\n"
				"O pai da luz, o poeta da sabedoria, canta para mim.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O anfitrião de um vidro brilhante, me dá uma previsão sagrada.");
			specialeffect(EF_GLORIA,AREA,playerattached());
			next;
			mes("- Depois de terminar a música, você se sente leve e forte com muita devoção. -");
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
				"A música acabou.\n"
				"É hora de voltar para o Sacerdote Dayan.");
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
			mes("- Há uma freira fechando os olhos enquanto ela murmura algo que soa como uma oração. -");
			next;
			if (select("Fale com ela","Ficar em silêncio") == 2) {
				mes("- Você não a perturba.");
				close;
			}
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Olá, irmã?");
			next;
			mes("[Vinue]\n"
				"Ah, bem vind"+(Sex == SEX_MALE ? "o":"a")+".\n"
				"Não é hora de ter um serviço ainda...\n"
				"Você está aqui para orar?");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Eu vim aqui para dizer olá do Sacerdote Dayan de Prontera.");
			next;
			mes("[Vinue]\n"
				"Ah, padre Dayan.\n"
				"Ele é está bem?\n"
				"Ele é tão agradável mesmo sendo velho.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Ele me disse que estava preocupado porque quando ele te viu da última vez, você parecia triste.\n"
				"Ele pede para você ir em uma peregrinação sagrada.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Umbala tem o poder vital da natureza!");
			next;
			mes("[Vinue]\n"
				"Ah...\n"
				"Ele é muito gentil.");
			next;
			mes("[Vinue]\n"
				"Mas não se preocupe.\n"
				"Estou um pouco cansada por causa de um pesadelo.");
			next;
			mes("[Vinue]\n"
				"O mal está sempre procurando por nossas almas.\n"
				"Se você é indiferente a orar, nunca perde uma oportunidade.");
			next;
			if (select("Que tipo de sonho?","Sua alma deve estar bem") == 2) {
				mes("[Vinue]\n"
					"Oh, mas é aí que você está errado.\n"
					"Minha alma pode estar em maior risco.\n"
					"Obrigado por entregar a mensagem.\n"
					"Eu vou voltar para minhas orações.");
				close;
			}
			mes("[Vinue]\n"
				"Isso é...\n"
				"Na verdade, comecei a ter um pesadelo a partir da data em que fui nomeado.");
			next;
			mes("[Vinue]\n"
				"No começo, era um sonho que Valquíria estava triste e na escuridão.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Valquíria?");
			next;
			mes("[Vinue]\n"
				"Sim...\n"
				"Ela estava chorando em um quarto escuro como breu.\n"
				"Pendurado como um pássaro que tinha suas asas cortadas.");
			next;
			mes("[Vinue]\n"
				"Mas, com o passar do tempo, o sonho se tornou mais assustador.\n"
				"Agora Valkyrie é presa com correntes e, finalmente, ela é despedaçada.");
			next;
			mes("[Vinue]\n"
				"Que destino cruel!\n"
				"De repente eu não consigo respirar corretamente e depois acordo.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Ter que ver a morte de Valquíria, deve ser um sonho atormentador.");
			next;
			mes("[Vinue]\n"
				"É apenas um pesadelo?\n"
				"Ou você acha que é um presságio?");
			next;
			mes("[Vinue]\n"
				"Eu tenho vontade de rezar no santuário de Odin para fazer o sonho desaparecer.\n"
				"Mas esse santuário se tornou um antro do mal há muito tempo.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O Santuário?\n"
				"Ninguém tentou subjugar o mal?");
			next;
			mes("[Vinue]\n"
				"Infelizmente, eu sou uma freira que não tem nenhuma habilidade de exorcismo...\n"
				"Os moradores de Hugel ficaram horrorizados com a visão porque não estão familiarizados com a aventura.");
			next;
			mes("[Vinue]\n"
				"Hoje em dia, há muitas pessoas por causa do desenvolvimento do santuário de Odin.\n"
				"Mas a situação delas não é tão boa.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"O sonho está relacionado com o mal no santuário de Odin?");
			next;
			mes("[Vinue]\n"
				"Hum... bem.\n"
				"Eu não tenho como descobrir, então apenas rezo.");
			next;
			if (select("Eu vou investigar para você","Eu vou rezar com você") == 2) {
				mes("[Vinue]\n"
					"Obrigada.\n"
					"Eu vou rezar para que a escuridão fique longe.");
				close;
			}
			mes("[Vinue]\n"
				"Vai!?\n"
				"Mas vai ser assustador lá dentro!\n"
				"Existem muitos demônios por lá!");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Mas não posso fingir ignorar uma irmã que está com problemas?\n"
				"Eu sou um ministro que lida com muito ascetismo!\n"
				"Confie em mim.");
			next;
			mes("[Vinue]\n"
				"Ah... estou tão preocupada....\n"
				"Eu nunca esquecerei seu coração bondoso.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Como eu chego ao santuário de Odin?");
			next;
			mes("[Vinue]\n"
				"Há uma balsa no lado direito da igreja.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Ok, espere por boas notícias!");
			next;
			mes("[Vinue]\n"
				"Vou rezar pelo seu retorno seguro.\n"
				"Espero que Odin também lhe dê a proteção dele.");
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
				"Deve ser uma boa notícia?\n"
				"Graças aos deuses.");
			close;
		}
	} else {
		mes("[Freira]\n"
			"Eu me sinto revigorado.\n"
			"Deve ser uma boa notícia?\n"
			"Graças aos deuses.");
		close;
	}
}

// ------------------------------------------------------------------
odin_tem02,282,263,0	script	#find_val	HIDDEN_WARP_NPC,3,3,{
	OnTouch:
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if ((archquest > 4) && (archquest < 8)) {
			hideoffnpc("Ilusão da Valquíria#arch");
		}
	}
	end;
}

// ------------------------------------------------------------------
odin_tem02,281,275,3	script	Ilusão da Valquíria#arch	4_F_VALKYRIE2,{
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if ((archquest > 4) && (archquest < 8)) {
			mes("Você pode ver Valquíria que tem um rosto desesperado.");
			next;
			switch (select("Olhar mais perto","Voltar")) {
				case 1:
				mes("Você perde sua consciência enquanto chega mais perto da Ilusão de Valquíria.");
				close2;
				specialeffect(EF_CLOAKING,AREA,playerattached());
				warp("job3_arch01",29,29);
				hideonnpc("Ilusão da Valquíria#arch");
				end;
				case 2:
				mes("Por medo, você se afasta da ilusão de Valquíria.");
				close2;
				hideonnpc("Ilusão da Valquíria#arch");
				end;
			}
		}
	}
	end;

	OnInit:
	hideonnpc("Ilusão da Valquíria#arch");
	end;
}

// ------------------------------------------------------------------
job3_arch01,29,34,3	script	Valquíria#arch	4_F_VALKYRIE2,{
	if ((Class == Job_High_Priest) && (BaseLevel == 99) && (JobLevel >= 50)) {
		if (archquest < 5) {
			warp("odin_tem02",282,263);
			end;
		} else if (archquest == 5) {
			if (getmercinfo(1)) {
				mes("[Valquíria]\n"
					"Se você quiser conversar comigo, você tem que cancelar todos os contratos com qualquer mercenário que você tenha.");
				close;
			} else {
				mes("[Valquíria]\n"
					"Nos céus o som do chifre se espalha, mas um pássaro que não pode voar rasteja e finalmente é esmagado em pedaços no chão.\n"
					"Ah, estou ressentida!\n"
					"tão arrependida!");
				next;
				mes("- A Valquíria segura seu rosto, então ela encontra você e olha com uma expressão ameaçadora. -");
				next;
				mes("[Valquíria]\n"
					"Você é um descendente de Heimdal vivendo como um mortal, por que você está aqui?\n"
					"Está aqui para ridicularizar meu destino sombrio?");
				next;
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"De jeito nenhum!\n"
					"Mas é verdade que estou aqui por você.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"...Como assim?\n"
					"É claro que estou em Midgard, mas estamos sob o jugo do destino que não pode coexistir neste mundo.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Eu vejo, o seu objetivo é entrar no Valhalla?\n"
					"Se você fizer isso, é o lugar errado para você.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Eu já fui expulsa de Asgard.\n"
					"Meu dever é proteger esta pequena ilha de humanos que tentam tirá-la dos Deuses e até eu não tenho energia para isso.");
				next;
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"Não é esse tipo de problema.\n"
					"Mas alguém que percebe sua situação dolorosa me enviou aqui.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Haha! Você vai me ajudar?!");
				next;
				mes("[Valquíria Anguhilde]\n"
					"...................");
				next;
				mes("- Valquíria dá uma carranca feroz. -");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Na verdade, não posso fazer nada com o meu corpo agora.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Humano, responda-me.\n"
					"Você está aqui para sinceramente me ajudar?");
				next;
				if (select("Sim","Não") == 2) {
					mes("[Valquíria Anguhilde]\n"
						"Eu sabia que não podia confiar em um humano!");
					close2;
					warp("odin_tem02",282,263);
					end;
				}
				mes("[Valquíria Anguhilde]\n"
					"Está bem...\n"
					"Eu não tenho energia para me segurar, então não tenho escolha a não ser confiar em você.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Eu era uma valquíria normal que conduzia soldados a Valhalla de acordo com a ordem de Odin.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Mas eu feri Freki, um dos lobos de Odin, e fui expulsa de Asgard sem energia alguma como uma Valquíria com ordens de proteger esta ilha.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Eu estava desonrado, esta ilha é importante como um templo para Odin e os vários deuses.\n"
					"Eu tentei fazer o meu melhor para proteger este lugar sagrado.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Mas um dia o demônio começou a ganhar influência nesta ilha.\n"
					"Não sei porque vieram para cá e de onde vieram.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Eles cercaram o templo e eu exaurei minha energia tentando lutar contra todos eles.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"O santuário foi contaminado pelos demônios.\n"
					"Quanto tempo tenho que estar sob este destino desonroso!");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Mortal, qual é o seu nome?");
				next;
				mes("["+strcharinfo(CHAR_NAME)+"]\n"
					"Meu nome é "+strcharinfo(CHAR_NAME)+".");
				next;
				mes("[Valquíria Anguhilde]\n"
					+ strcharinfo(CHAR_NAME)+".\n"
					"Você me disse que você quer me ajudar, certo?\n"
					"Mesmo que isso me desonre, estou pedindo sua ajuda.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Este lugar pode parecer que foi feito para os meus humanos.\n"
					"Na verdade, é um monumento muito importante e também parte da história de Deus.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Eu perdi toda a minha energia e meu corpo está selado.\n"
					"Então não há como eu proteger o santuário.\n"
					"Você tem que enviar uma mensagem para Valhalla para pedir ajuda de uma valquíria rapidamente.");
				next;
				select("Como eu posso fazer isso?");
				mes("[Valquíria Anguhilde]\n"
					"No topo do santuário, você pode entrar em contato com eles com um canhão de ouro.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Vou lhe dar um rolo de papel escrito em um idioma antigo.\n"
					"Nesse pergaminho, há a minha imitação.\n"
					"Se você for para fora, poderá invocar uma Valquíria com esse pergaminho.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Depois que você invocar minha representação, você terá que encontrar um ^3131FFpadaços de um chifre quebrado^000000.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Você tem que ir até o topo do santuário, coletando todos os pedaços da personificação.\n"
					"E então eu vou cuidar do assunto.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Uma imitação ajudará quando você se mover ou atacar0.\n"
					"Mas você tem que ter cuidado se uma imposição de confiança cair.");
				next;
				mes("[Valquíria Anguhilde]\n"
					"Quando você terminar de se preparar para continuar, fale comigo novamente.\n"
					"Vai ser uma longa jornada...");
				archquest = 6;
				close;
			}
		} else if (archquest == 6) {
			if ($@archbs == 0) {
				$@archbs = 1;
				mes("[Valquíria Anguhilde]\n"
					+strcharinfo(CHAR_NAME)+" Você terminou de se preparar para o seu caminho de ascetismo?");
				next;
				if (getmapusers("job3_arch02") > 0) {
					mes("[Valquíria Anguhilde]\n"
						"Hmm, alguém está lutando contra o demônio no santuário agora.\n"
						"Você só espera um minuto até que essa pessoa termine.");
					$@archbs = 0;
					close;
				}
				mes("[Valquíria Anguhilde]\n"
					"Está bem.\n"
					"Agora vou mandar você para lá.\n"
					"^FF0000Quando chegar, você tem que invocar minha representação com o pergaminho^000000.\n"
					"Não esqueça");
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
				hideonnpc("Valquíria#arch");
				end;
			} else {
				mes("[Valquíria Anguhilde]\n"
					"Estou conversando com outra pessoa agora, então me dê um segundo.");
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
				mes("[Valquíria Anguhilde]\n"
					"Você está bem humano?\n"
					"Não foi tão fácil quanto eu esperava.\n"
					"Você vai desafiar novamente?");
				next;
				if (getmapusers("job3_arch02") > 0) {
					$@archbs = 0;
					mes("[Valquíria Anguhilde]\n"
						"Hmm, alguém está lutando contra o demônio no santuário agora.\n"
						"Você só espera um minuto enquanto eu estou achando quem é.");
					close;
				}
				$@archbs = 0;
				mes("[Valquíria Anguhilde]\n"
					"Agora vou mandar você para lá.\n"
					"^FF0000Quando você chegar lá, você tem que invocar minha representação com o pergaminho^000000.\n"
					"Uma imitação ajudará quando você se mover ou atacar.\n"
					"Mas você tem que ter cuidado se uma imitação cair.");
				close2;
				nude;
				if (countitem(Will_Of_Exhausted_Angel)) {
					delitem(Will_Of_Exhausted_Angel,countitem(Will_Of_Exhausted_Angel));
				}
				donpcevent("start#arch::OnEnable");
				archquest = 7;
				warp("job3_arch02",119,49);
				hideonnpc("Valquíria#arch");
				end;
			} else {
				mes("[Valquíria Anguhilde]\n"
					"Estou conversando com outra pessoa agora, então me dê um segundo.");
				close;
			}
		}
	} else {
		warp("odin_tem02",282,263);
		end;
	}

	OnBc:
	$@archbs = 0;
	mapannounce("job3_arch01","Valquíria: Eu acho que alguém caiu no santuário.",bc_map,"0xFFCE00");
	hideoffnpc("Valquíria#arch");
	end;
}

// ------------------------------------------------------------------
job3_arch02,119,49,0	script	#arch_1_start	HIDDEN_WARP_NPC,6,6,{
	OnTouch:
	if (!countitem(ValkyrieA_Scroll)) {
		getitem(ValkyrieA_Scroll,1);
	}
	mapannounce("job3_arch02","Sussurro de representação: me sinto pesado! Me liberte!",bc_map,"0xFFCE00");
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
			mapannounce("job3_arch02","Sussurrando uma imitação: Eu posso sentir o espírito do mal! Seja cuidadoso!",bc_map,"0xFFCE00");
		} else if ((.@randht == 8) || (.@randht == 9)) {
			mapannounce("job3_arch02","Sussurro de representação: Eles estão vindo!",bc_map,"0xFFCE00");
		}
		end;
	}
	mapannounce("job3_arch02","Sussurro de representação: Você não pode fazer nada sozinho! Vamos voltar!",bc_map,"0xFFCE00");
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
		mapannounce("job3_arch02","Pesadelo de Valquíria: Uma ilusão incompetente de Valquíria veio aqui com a ajuda de seres humanos. Você quer ter esse pesadelo?",bc_map,"0xFF0000");
		donpcevent("mob#arch_1::OnKill");
		end;
	}
	mapannounce("job3_arch02","Sussurro de representação: Você não pode fazer nada sozinho! Vamos voltar!",bc_map,"0xFFCE00");
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
	areamonster("job3_arch02",111,325,115,329,"Pesadelo da Valquíria",VALKYRIE_N,1,"#arch_val01::OnMyMobDead");
	end;
	OnMyMobDead:
	if (mobcount("job3_arch02","#arch_val01::OnMyMobDead") < 1) {
		donpcevent("#arch_redcell::OnGreen");
		mapannounce("job3_arch02","Pesadelo da Valquíria: Sua vitória é apenas uma imagem falsa! hahahaha!",bc_map,"0xFF0000");
		hideoffnpc("Valquíria#arch_01");
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
	areamonster("job3_arch02",242,44,246,48,"Pesadelo da Valquíria",VALKYRIE_N,1,"#arch_val02::OnMyMobDead");
	end;
	OnMyMobDead:
	if (mobcount("job3_arch02","#arch_val02::OnMyMobDead") < 1) {
		mapannounce("job3_arch02","Pesadelo da Valquíria: Você é tão infantil. Eu convido você para uma festa do demônio. Vou me certificar de que você se divirta!",bc_map,"0xFF0000");
		hideoffnpc("Valquíria#arch_02");
		disablenpc("#arch_2_boss");
		viewpoint(1,279,234,1,0xFFFF99);
	}
	end;
	OnKill:
	killmonster("job3_arch02","#arch_val02::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
job3_arch02,113,327,5	script	Valquíria#arch_01	4_F_VALKYRIE2,{
	if (getmercinfo(1)) {
		mes("[Valquíria]\n"
			"Se você quiser conversar comigo, você tem que cancelar todos os contratos com qualquer mercenário que você tenha.");
		close;
	}
	mes("[Valquíria Anguhilde]\n"
		"O demônio sempre faz um esforço para agitar a mente das pessoas.\n"
		"Você não precisa se preocupar com seus sussurros.");
	next;
	mes("[Valquíria Anguhilde]\n"
		"De qualquer forma eu posso sentir minha energia voltando.\n"
		"Me mostre as coisas que você achou.");
	next;
	mes("- Você mostra um pedaço de ouro para Valkyrie. -");
	next;
	mes("[Valquíria Anguhilde]\n"
		"É um pedaço de chifre!\n"
		"Se você coletar peças, você pode pedir ajuda a outras Valquírias.");
	next;
	mes("[Valquíria Anguhilde]\n"
		"Por causa de uma batalha próxima, só consegui um pouco de energia.\n"
		"Eu vou dar um novo ^3131FFnovo pergaminho antigo^000000.\n"
		"Vai ser útil encontrar o resto das peças.");
	next;
	mes("[Valquíria Anguhilde]\n"
		"Então aguardo uma boa notícia.");
	close2;
	getitem(ValkyrieB_Scroll,1);
	viewpoint(1,244,46,1,0xFFFF99);
	hideonnpc("Valquíria#arch_01");
	donpcevent("#arch_2_start::OnEnable");
	end;
}

// ------------------------------------------------------------------
job3_arch02,244,46,5	script	Valquíria#arch_02	4_F_VALKYRIE2,{
	mes("[Valquíria Anguhilde]\n"
		"Você achou o resto das peças?");
	next;
	if (countitem(Broken_Horn_Pipe) < 2) {
		mes("[Valquíria Anguhilde]\n"
			"Murmurar?\n"
			"Eu posso ver isso ao seu lado.");
		getitem(Broken_Horn_Pipe,2);
		next;
	}
	mes("[Valquíria Anguhilde]\n"
		"Está bem.\n"
		"Eu vou completar o trombeta de chifre!");
	next;
	mes("[Valquíria Anguhilde]\n"
		"Mas a batalha ainda não terminou.\n"
		"Você se lembra de um santuário arruinado ^3131FFno centro da ilha^000000?\n"
		"Só será concluído quando você usar um trombeta de chifre.");
	next;
	mes("[Valquíria Anguhilde]\n"
		"Eu posso sentir que o ar ao meu redor está ficando impuro.\n"
		"E sinta a frieza da escuridão negra.\n"
		"Desta vez será perigoso.");
	next;
	mes("[Valquíria Anguhilde]\n"
		"Eu te dou um colar de presente.\n"
		"Mas eu não tenho certeza se será útil ou não....\n"
		"Por favor se apresse!");
	close2;
	getitem(Will_Of_Exhausted_Angel,1);
	hideonnpc("Valquíria#arch_02");
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
	hideoffnpc("Valquíria Anguhilde#end");
	if (checkweight(Knife,1) == 0 || (MaxWeight - Weight) < 2000) {
		mes("- Você está carregando muitos itens. -\n"
			"- Livre-se de alguns deles -");
		close;
	} else if (hascashmount()) {
		mes("Você está em um animal de estimação\n"
			"Por favor, desequipar seu animal de estimação e tente novamente!");
		close;
	} else if (getmercinfo(1)) {
		mes("[Valquíria Anguhilde]\n"
			"Se você quiser conversar comigo, você tem que cancelar todos os contratos com qualquer mercenário que você tenha.");
		close;
	} else if (countitem(Broken_Horn_Pipe) < 2) {
		mes("[Valquíria Anguhilde]\n"
			"Você colecionou todas as peças da minha trombeta de chifre?");
		next;
		mes("[Valquíria Anguhilde]\n"
			"Eu sei que você se inclinou para trás para me ajudar.\n"
			"Mas eu não posso fazer nada sem 2 pedaços de Chifre.");
		next;
		mes("[Valquíria Anguhilde]\n"
			"Pode ser perigoso, então vamos voltar.");
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
			mes("Você não pode progredir sem usar todos os seus pontos de habilidade.\n"
				"Por favor, use todos os seus pontos de habilidade antes de progredir");
			close;
		} else {
			mes("[Valquíria Anguhilde]\n"
				"Finalmente terminamos todos os preparativos.");
			next;
			mes("Valquíria segura o chifre e sopra para o céu.");
			next;
			mes("Booo - - - -");
			next;
			mes("Booo - - -");
			next;
			hideoffnpc("Valquíria dos céus");
			mes("[Valquíria Anguhilde]\n"
				"Assistência de Odin!\n"
				"Soldados de Valhalla!\n"
				"O lugar sagrado do deus Odin está contaminado pelas trevas!");
			next;
			mes("[Valquíria dos céus]\n"
				"Não se preocupe, Anguhilde.\n"
				"Seu desejo alcançou Valhalla.\n"
				"Os demônios foram removidos por outras Valquírias como você queria.");
			next;
			mes("[Valquíria Anguhilde]\n"
				"Valquírias!\n"
				"Então é seguro agora?");
			next;
			mes("[Valquíria dos céus]\n"
				"Sim Anguhilde.\n"
				"Mesmo que você tenha sido expulso por causa de um incidente anterior.\n"
				"Odin disse que está reconsiderando seu banimento.");
			next;
			mes("[Valquíria Anguhilde]\n"
				"Ah! Eu posso voltar para Asgard!");
			next;
			mes("[Valquíria dos céus]\n"
				"Não faça uma generalização precipitada.\n"
				"Mas eu acho que boas notícias serão enviadas para você.");
			next;
			mes("[Valquíria Anguhilde]\n"
				"onra a Odin!\n"
				"Eu me sinto cheio de graça.\n"
				"Tão brilhante e quente....");
			next;
			mes("- Shoooo -");
			specialeffect(EF_CLOAKING,AREA,getnpcid("Valquíria Anguhilde#end"));
			hideonnpc("Valquíria Anguhilde#end");
			emotion(e_omg,1);
			next;
			mes("[Valquíria dos céus]\n"
				"Defina sua mente à vontade.\n"
				"Ela foi para um lugar onde deveria estar.");
			next;
			mes("[Valquíria dos céus]\n"
				"Eu acho que você não entende.");
			next;
			mes("[Valquíria dos céus]\n"
				"Anguhilde é uma valquíria que está morta há muito tempo.\n"
				"Você não viu um santuário coberto pelo mal?\n"
				"Infelizmente, Anguhilde não conseguiu lidar com a tarefa e caiu.");
			next;
			mes("[Valquíria dos céus]\n"
				"Aqui está uma ilusão de Anguhilde que não quer ser reconhecido.\n"
				"Ela não pode ir para o inferno, mesmo quando ela está morta, e luta de seu pesadelo constante.");
			next;
			mes("[Valquíria dos céus]\n"
				"Mas ela está aliviada por seu favor.\n"
				"Mesmo que seja diferente com a realidade, mas agora ela pode descansar em paz.");
			next;
			mes("[Valquíria dos céus]\n"
				"Humanos, as Valquírias estão em dívida com você.\n"
				"Obrigado.\n"
				"Não posso convidar você como quero, mas o poder dado por Odin pode ajudá-lo.");
			next;
			mes("[Valquíria dos céus]\n"
				"Agora, volte para o seu mundo.\n"
				"O som e os chilros de um pássaro serão espalhados por você.");
			next;
			mes("[Valquíria dos céus]\n"
				"Não esqueça o espírito de um ministro altruísta como hoje para sempre.\n"
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
job3_arch02,281,232,1	script	Valquíria Anguhilde#end	4_F_VALKYRIE2,{
	end;
	OnInit:
	hideonnpc("Valquíria Anguhilde#end");
	end;
}

// ------------------------------------------------------------------
job3_arch02,273,235,5	script	Valquíria dos céus	4_F_VALKYRIE,{
	mes("[Valquíria dos céus]\n"
		"Agora, volte para o seu mundo.\n"
		"O som e os chilros de um pássaro serão espalhados por você.");
	next;
	mes("[Valquíria dos céus]\n"
		"Não esqueça o espírito de um ministro altruísta como hoje para sempre.\n"
		"Espero que nos encontremos em Valhalla algum dia.");
	close2;
	mapwarp("job3_arch02","job3_arch01",29,29);
	end;

	OnInit:
	hideonnpc("Valquíria dos céus");
	end;
}

// ------------------------------------------------------------------
job3_arch02,132,323,0	script	#arch_2_01	HIDDEN_WARP_NPC,5,5,{
	end;
	OnTouch:
	if (countitem(ValkyrieB_Scroll)) {
		mapannounce("job3_arch02","Sussurrando Valquírias: Eu vejo um novo Pergaminho de Línguas Antigas!",bc_map);
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
			mapannounce("job3_arch02","Sussurro de representação: Eu posso sentir o espírito do mal. Você pode ouvir? O som de se reunir em multidões.",bc_map,"0xFFCE00");
		} else if ((.@randht == 8) || (.@randht == 9)) {
			mapannounce("job3_arch02","Sussurro de representação: prontidão de combate!",bc_map,"0xFFCE00");
		} else {
			mapannounce("job3_arch02","Sussurro de representação: não posso deixar você. Morrer!",bc_map,"0xFFCE00");
		}
		end;
	}
	mapannounce("job3_arch02","Sussurro de representação: Você não pode fazer nada sozinho! Vamos voltar!",bc_map,"0xFFCE00");
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
		mapannounce("job3_arch02","Um grito de demônio: você é tão infantil. Eu te convido uma festa do demônio. Eu vou fazer você se divertir!",bc_map,"0xFF0000");
		end;
	}
	mapannounce("job3_arch02","Sussurro de representação: Você não pode fazer nada sozinho! Vamos voltar!",bc_map,"0xFFCE00");
	mapwarp("job3_arch02","job3_arch01",29,29);
	end;
}

// ------------------------------------------------------------------
job3_arch02,284,159,0	script	#arch_3_01	HIDDEN_WARP_NPC,20,20,{
	OnTouch:
	if (Class != Job_Priest) {
		mapannounce("job3_arch02","Frus: Você quer ver a Deus? Ok, vou mandar você para a terra dos mortos sozinha!",bc_map,"0xFF0000");
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
		mapannounce("job3_arch02","Skogul: Você é meu convidado!",bc_map,"0xFF0000");
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
	mapannounce("job3_arch02","Frus: Eu gosto do seu rosto ... Posso roubá-lo?",bc_map,"0xFF0000");
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
	monster("job3_arch02",100,102,"Invasor do Santuário",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",90,131,"Invasor do Santuário",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",138,205,"Invasor do Santuário",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",161,215,"Invasor do Santuário",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",201,236,"Invasor do Santuário",G_ZOMBIE,2,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",91,170,"Invasor do Santuário",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",104,183,"Invasor do Santuário",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",165,215,"Invasor do Santuário",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",218,250,"Invasor do Santuário",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
	monster("job3_arch02",254,293,"Invasor do Santuário",G_NIGHTMARE,1,"mob#arch_1::OnMyMobDead");
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
	monster("job3_arch02",156,321,"Invasor do Santuário",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",170,305,"Invasor do Santuário",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",256,293,"Invasor do Santuário",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",286,284,"Invasor do Santuário",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",292,185,"Invasor do Santuário",G_ZOMBIE_PRISONER,2,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",190,146,"Invasor do Santuário",G_ZOMBIE_PRISONER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",183,293,"Invasor do Santuário",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",200,287,"Invasor do Santuário",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",278,236,"Invasor do Santuário",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",281,170,"Invasor do Santuário",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",227,166,"Invasor do Santuário",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
	monster("job3_arch02",204,177,"Invasor do Santuário",G_RAYDRIC_ARCHER,1,"mob#arch_2::OnMyMobDead");
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
	hideonnpc("Valquíria#arch_01");
	hideonnpc("Valquíria#arch_02");
	hideonnpc("Valquíria Anguhilde#end");
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
		donpcevent("Valquíria#arch::OnBc");
		stopnpctimer;
	}
	end;
	OnTimer600000:
	mapannounce("job3_arch02","Pesadelo da Valquíria: Eu não aguento mais!",bc_map,"0xFF0000");
	end;
	OnTimer605000:
	mapannounce("job3_arch02","Sussurrando de Valquíria: De jeito nenhum! Eu não posso deixar vocês fazerem isso. Volte!",bc_map,"0xFFCE00");
	mapwarp("job3_arch02","job3_arch01",29,29);
	donpcevent("Valquíria#arch::OnBc");
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
