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
| - Nota: Npcs comuns na cidade Einbech                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
einbech,172,113,4	script	Nemuk#ein	4_M_EINMAN,{
	mes("[Nemuk]\n Voc� parece ser um forasteiro, ent�o deixe-me perguntar algo.\n O que voc� acha de Einbech?");
	next;
	switch(select("� legal", "Parece dificil de viver aqui.")) {
		case 1:
		mes("[Nemuk]\n Huh...?\n Eu n�o estou certo do que voc� tenha visto.\n Mas eu estou surpreso de ouvir voc� dizer algo assim.");
		next;
		mes("[Nemuk]\n Faz dez anos desde que eu come�ei a pensar em me mudar.\n Por�m, Eu ainda estou pensando sobre isso.\n Agora, se eu fosse rico...\n Partiria num instante, mas isso � dificil enquanto eu junto dinheiro para me mudar.");
		next;
		mes("[Nemuk]\n ^333333*Sigh...*^000000\n Talvez se eu tivesse sido um aventureiro quando eu era mais jovem.\n Eu n�o teria esses problemas hoje...");
		close;
		case 2:
		mes("[Nemuk]\n Eu penso assim.\n Bem, Me desculpe se eu coloquei voc� em uma situa��o dificil.");
		next;
		mes("[Nemuk]\n Todo mundo aqui tem passado por tempos duros vivendo dia ap�s dia para contar o que eu possa me lembrar.\n Parece que as coisas nunca ficam melhoram n�o importa o que n�s fazemos.");
		next;
		mes("[Nemuk]\n Eu realmente quero partir, mas � apenas um desejo tolo.\n Meu corpo esta preso aqui enquanto me cora��o deseja uma vida muito melhor.\n ^333333*Sigh*^000000\n Esta desesperado?\n O que eu posso fazer?");
		close;
	}
}

// ------------------------------------------------------------------
einbech,197,139,4	script	Jovem#air2	4_M_EINMAN,{
	mes("[Heinz]\n Uau...\n Um aventureiro de Rune-Midgard, certo?\n O que o traz aqui?");
	next;
	mes("[Heinz]\n Einbech n�o oferece muito em termos de vista.\n Mas voc� veio ver a mina?\n Agora mesmo, h� muitos monstros e n�s n�o podemos cavar nenhum min�rio porque � muito perigoso.");
	next;
	mes("[Heinz]\n Agora, se alguns aventureiros fossem bastante generosos para ca�ar essas criaturas.\n Mas n�s poderiamos minerar novamente e eles receberiam alguns zeny.\n � como matar dois p�ssaros com uma pedrada s�. Hahaha!");
	next;
	mes("[Heinz]\n Oh espere... Me desculpe.\n Eu n�o sei o que tem de errado comigo.\n Pedindo para completos estranhos fazerem favores para mim.\n � completamente rude!\n Eu quero dizer, quem faria isso?");
	next;
	mes("[Heinz]\n Mas...\n Estou al�m de me preocupar com meu orgulho.\n Por causa de tudo que � bom e santo.\n Estou te implorando, por favor mate estas criaturas nojentas e m�s.\n Por favor!!");
	close;
}

// ------------------------------------------------------------------
einbech,128,238,5	script	Mogan#ein	4_M_EINMINER,{
	mes("[Mogan]\n Recentemente, houve alguns desmoronamentos onde muitos mineradores ficaram feridos.\n Isto foi discutido no Conselho da Cidade e na minha opini�o...\n Acho que os minerados cavaram muito fundo e causaram isso.");
	next;
	mes("[Mogan]\n Sim, eles despertaram Ungoliant, o mestre das cavernas que existia desde os tempos antigos.\n Eu n�o sei quantos mais seram feitos de vitima pelo Ungolian no futuro.\n N�o h� relatos...");
	next;
	mes("[Mogan]\n Aventureiro, tome cuidado se voc� se aventurar dentro das minas.\n Para que os seus passos n�o atrapalhem o sono de Ungoliant.");
	close;
}

// ------------------------------------------------------------------
einbech,129,234,5	script	Hander#ein	4_M_EINMINER,{
	mes("[Hander]\n Aqueles bastardos de Einbroch!\n Vivendo dos recursos que n�s escavamos enquanto n�s continuamos trabalhando para aqueles babacas!\n Maldi��o!");
	next;
	mes("[Hander]\n Todo dia, n�s arriscamos nossa droga de vida exatamente assim n�s podemos nos sustentar!\n Porque os mais velhos n�o fazem alguma coisa sobre isto, como aumentar o pre�o dos nossos min�rios?");
	next;
	mes("[Hander]\n O hor�rio de trabalho � irracional.\n A esposa de Cavitar foi atacada por uma criatura da mina.\n O hospital � muito longe e n�s n�o temos qualquer comida para comer!\n Por qu�...?!");
	close;
}

// ------------------------------------------------------------------
einbech,105,218,5	script	Gushenmu#ein	4_M_EINMINER,{
	mes("[Gushenmu]\n Eu moro aqui a um longo tempo e, acredite ou n�o.\n As coisas n�o eram no passado como elas s�o agora.");
	next;
	mes("[Gushenmu]\n Por muitas diferentes raz�es, o trabalho � mais perigoso e n�s estamos tendo reais baixas de trabalho.\n E as f�bricas em Einbroch fazem muita polui��o.\n N�s n�o conseguimos nem mesmo ver a luz do sol aqui.");
	next;
	mes("[Gushenmu]\n A triste realidade da vida de minerador � exatamente essa.\n N�s acordamos...\n Vamos para o trabalho, e no final do dia alguns de n�s est�o machucados enquanto alguns outros nunca retornaram ao trabalho no dia seguinte.");
	next;
	mes("[Gushenmu]\n E a medida que Einbech e Einbroch cresceram.\n Eu ou�o mais e mais rumores que monstros n�o familiares est�o formando uma enxame fora da cidade.\n Este � realmente o pior tempo de Einbech...");
	close;
}

// ------------------------------------------------------------------
einbech,157,215,3	script	Gerente da Esta��o#eim	4_M_EIN_SOLDIER,{
	mes("[Gerente da Esta��o]\n Esta Esta��o de Tem � estritamente para trens indo de Einbech para Einbroch.\n Por favor fale com a Equipe, indo ao noroeste se voc� quiser subir a bordo.");
	close;
}

// ------------------------------------------------------------------
einbech,151,168,3	script	Tollaf#ein	4_M_EINMAN,{
	mes("[Tollaf]\n Ah...!\n Isto esta me matando!\n Eu n�o tenho dinheiro para me mudar, mas eu n�o quero mais viver neste cidade!");
	next;
	mes("[Tollaf]\n As pessoas vivem em tantos outros lugares melhor que n�s, especialmente aqueles esnobes de Einbroch!\n Einbech deve ser a pior cidade da Rep�blica de Schwartzwald.\n N�o, deve ser a pior cidade do mundo!");
	close;
}

// ------------------------------------------------------------------
einbech,93,139,5	script	Raust#ein	4_M_EINOLD,{
	mes("[Raust]\n Eu n�o consegui!\n Einbroch esta crescendo e nossa cidade est� se tornando cada vez mais suja.\n Mas que inferno?!");
	next;
	mes("[Raust]\n N�o somente as pessoas parecem mais �speras.\n N�s parecemos mais cansados e mais velhos tamb�m!\n Est� sujo, est� amontoado, tudo nessa cidade est� uma bagun�a!\n O que, voc� quer uma lista?!");
	next;
	mes("[Raust]\n A comida, literalmente, est� um lixo!\n Os servi�os aqui s�o uma viola��o aos direitos humanos.\n N�s temos poucas mulheres aqui e as poucas que temos fedem muito!\n N�o est� convencido ainda?!");
	next;
	mes("[Raust]\n Porque tudo est� bom ainda em Einbroch?!\n Eu odeio isso!\n ^333333*Grumble*^000000");
	close;
}

// ------------------------------------------------------------------
einbech,149,154,3	script	Mjunia#ein	4_F_EINWOMAN,{
	mes("[Mjunia]\n � dificil ser uma mulher aqui nesta cidade, nascida aqui.\n � como se o destino decidiu ser especialmente cruel comigo.");
	next;
	mes("[Mjunia]\n Minha pele e minhas m�os est�o �speras de tanto trabalho que eu tenho que fazer.\n Mas o pior de tudo...\n Eu... Eu...\n Eu desenvolvi tantos m�sculos quanto a maioria dos rapazes!\n Waaaaaah!");
	next;
	mes("[Mjunia]\n Eu desejo poder encontrar um belo rapaz de Einbroch e casar ent�o poder sair desta cidade.\n Mas parece que isso n�o vai acontecer...");
	next;
	mes("[Mjunia]\n E eu nunca me casaria com qualquer um de Einbech!\n Eu preferiria morrer de frio e sozinha do que morrer de frio e casada com algum brig�o de Einbech.");
	next;
	mes("[Mjunia]\n Olhe para estes m�sculos.\n O que voc� acha?\n Eu sou bonita?\n ^333333*Sniff*^000000\n Eu deixei de tentar ser feminina anos atr�s.\n Eu tenho que trabalhar muito...");
	close;
}

// ------------------------------------------------------------------
einbech,130,253,1	script	Ekuri#ein	4_M_EINMINER,{
	mes("[Ekuri]\n O que eu estou fazendo aqui?\n Pro inferno, Eu estou morrendo de medo de entrar na mina!\n Mas eu posso ganhar dinheiro aqui na entrada juntando essas sucatas!\n Esperto, huh?");
	next;
	mes("[Ekuri]\n �s vezes, eu tenho sorte e consigo um min�rio inteiro!\n Claro, Eu sou um covarde, mas pelo menos eu estou vivo.\n Bem, por enquanto.");
	next;
	mes("[Ekuri]\n Agora voc� sabe o qu� eu estou fazendo aqui.\n Ent�o porque voc� n�o me deixa voltar para meu trabalho?\n Min�rios, venham para mim!");
	close;
}

// ------------------------------------------------------------------
einbech,46,107,6	script	Shena#ein	4_F_EINOLD,{
	mes("[Shena]\n Como pode voc�s jovens n�o aprender tudo isso?");
	next;
	mes("[Shena]\n Bem, estou certa que as pr�ximas gera��es far�o algo � isso.\n Mas estou surpreso que pessoas experientes n�o conhecem muito.");
	next;
	switch(select("Do que est� falando?", "Ignorar")) {
		case 1:
		mes("[Shena]\n Oh? bem, bem...\n Voc� n�o � a mais ador�vel garotinha?\n Ol�, Querida.");
		next;
		if (Sex == SEX_MALE) {
			select("Desculpe-me, mas eu sou homem.");
			mes("[Shena]\n Por meus olhos estarem ficando ruims pela minha idade.\n Fica dif�cil para ver as diferen�as...");
			next;
		}
		mes("[Shena]\n Eu estava apenas sobre monstros perto de Einbroch.\n Aparentemente, voc�s novatos n�o conhecem muito como deveriam.");
		next;
		mes("[Shena]\n Se aventura � seu seu neg�cio, voc� deve saber contra o que est� lutando.\n Voc� tem alguma d�vida sobre monstros das redondezas daqui, minha pequena?");
		next;
		if (Sex == SEX_MALE) {
			select("Eu n�o sou mulher!");
			mes("[Shena]\n Ent�o querido, qual monstro voc� est� interessado em ouvir sobre?");
			next;
		}
		while(true) {
			switch(select("Metalling", "Mineral", "Mineiros", "Fornalha Velha", "Terminar Conversa")) {
				case 1:
				mes("[Shena]\n Bom, os Metalings foram criados durante nos tempos em que os deuses mandavam sobre este mundo.");
				next;
				mes("[Shena]\n Eu n�o estou certo se sabe sobre isso ou n�o.\n Mas de acordo com o mito, Porings e Drops foram criados a partir da saliva de Odin.\n Eu acho que voc� n�o iria querer saber sobre o Poporing...");
				next;
				mes("[Shena]\n Metalings, na outra m�o, foram criados de sangue de m�quinas que n�s acreditamos ser chamadas de 'Gigantes.'");
				next;
				mes("[Shena]\n Os Metalings s�o como essas gelatinas que vivem pulando eles pegam tudo que encontram no ch�o.");
				next;
				mes("[Shena]\n Se voc� matar um Metaling, voc� pode dropar um Jellopy Tamanho Fam�lia, Min�rio ou at� mesmo A�o.\n Isso pode ser bom em se saber, n�o?");
				next;
				mes("[Shena]\n H� mais alguma coisa que deseja saber?");
				next;
				break;
				case 2:
				mes("[Shena]\n Voc� sabia que as estalactites e cristais das cavernas levam centenas e centenas de anos para se formarem?");
				next;
				mes("[Shena]\n Agora, se alguma coisa anda nascendo em centenas de anos s� pode fazer sentido se tiver atualmente vivo.\n Agora monstros do min�rio s�o estalactites vivas.");
				next;
				mes("[Shena]\n H� rumores de que est�o nascendo na caverna negra em algum ponto la dentro onde h� influencias malignas muito forte sobre elas.");
				next;
				mes("[Shena]\n Minerais podem se defender, mas eles podem dropar Fragmentos de Cristais, Top�zio e Emveretarcon se voc� derrotar um.\n H� sempre uma chance de eles derrubarem j�ias raras, mas n�o tenho certeza.");
				next;
				mes("[Shena]\n Mais alguma coisa?");
				next;
				break;
				case 3:
				mes("[Shena]\n Mineiros s�o fantasmas de mineiros mortos que usam velhos e enferrujados carrinhos.\n Por alguma raz�o, eles n�o podem deixar esse mundo, ent�o eles continuam vagando pelas minas.");
				next;
				mes("[Shena]\n Se voc� derrotar algum deles, poder� conseguir uma Picareta Velha, Lampi�o, A�o, Ferro, Carv�o e Lanterna de Bolso.");
				next;
				mes("[Shena]\n Voc� quer perguntar mais algumas coisa sobre os monstros?");
				next;
				break;
				case 4:
				mes("[Shena]\n � somente uma maligna, Fornalha Velha comedora de homens.");
				next;
				switch(select("...Isso seria?", "H-horripilante!")) {
					case 1:
					mes("[Shena]\n Agora, voc� sabe a import�ncia de reciclar e preservar nossos recursos naturais, certo?\n Agora, voc� me fara se sentir bem se recilcar esses peda�os de ferro dessas Fornalhas Velhas.");
					next;
					mes("[Shena]\n Fornalhas Velhas geralmente deixam Panelha Velha, Madeira Queimada, Ferro e Min�rio.\n Mas eventualmente podem pe�as interessantes como Ferro Enferrujado ou mesmo Galho Seco.");
					next;
					break;
					case 2:
					mes("[Shena]\n Cria��o divina, essa criatura � cruel e sem piedade, contudo um simbolo do mal puro do qual voc� jamais viu.");
					next;
					mes("[Shena]\n Ao contr�rio dos novos dispositivos, as Fornalhas Velhas foram feitas por Mestres-Ferreiros que, eu acho, criaram as almas delas tamb�m.\n Eles usaram-nas para produzir um benevolente calor.");
					next;
					mes("[Shena]\n Por anos serviram seus mestres com lealdade.\n Mas as tecnologias avan�adas e elas ficaram obsoletas, elas foram descartadas como lixo velho.\n Isso as transforamaram em seres ^FF0000mal�gnos^000000.");
					next;
					mes("[Shena]\n Fornalhas Velhas geralmente deixam Panelha Velha, Madeira Queimada, Ferro e Min�rio.\n Mas eventualmente podem pe�as interessantes como Ferro Enferrujado ou mesmo Galho Seco.");
					next;
					break;
				}
				mes(" Ent�o, ainda tem mais algo que quer que eu compartilhe com voc�?");
				next;
				break;
				case 5:
				mes("[Shena]\n Certo ent�o, tenha um bom dia.");
				close;
			}
		}
		case 2:
		mes("[Shena]\n Voc� n�o viveu o suficiente para ser experiente como eu e n�o aprendeu nem um pouco sobre nosso vasto mundo.");
		close;
	}
}

// ------------------------------------------------------------------
einbech,148,242,5	script	Jung#ein	4_M_EINMAN,{
	mes("[Jung]\n Eu sou uma das poucas pessoas que viveram em ambas Einbech e Einbroch por um longo tempo.\n Ent�o eu acho que eu sou um dos melhores guias desta �rea.");
	next;
	mes("[Jung]\n Diga, se voc� est� pensando em entrar na caverna.\n Eu posso contar a voc� tudo que eu sei sobre os monstros daquele lugar de forma que voc� ficara melhor preparado.");
	next;
	switch(select("Claro, porque n�o?", "N�o, mesmo")) {
		case 1:
		mes("[Jung]\n Deixe-me ver.\n Ah, os monstros que s�o �nicos da Mina s�o Nuvem T�xicas, Nuvem Venenosa, Porcellio e Obsidiana.\n Qual destes voc� deseja saber mais?");
		next;
		switch(select("Nuvem T�xica e Nuvem Venenosa", "Porcellio", "Obsidiana")) {
			case 1:
			mes("[Jung]\n Voc� sabe, ninguem parece saber de onde as Nuvem T�xicas e Nuvem Venenosa vieram se formar.\n Isto �, como eles apareceram fora de parte alguma quando Einbroch come�ou se industrializar.");
			next;
			mes("[Jung]\n Agora que eu penso sobre isto, n�o acretido que eles s�o monstros criados naturalmente.\n Eles tem este olha fixo de desespero e sofrimento e tendem a agir como eles precisassem matar seus inimigos.");
			next;
			mes("[Jung]\n Mas, voc� deveria ter mais cuidado!\n Nuvem T�xica e a Nuvem Venenosa s�o monstros furtivos que podem planar sil�nciosamente pelo ar e o atacar antes de voc� reparar...");
			next;
			mes("[Jung]\n Voc� deve saber que Nuvem T�xica tem propriedade de Fantasma e Nuvem Venenosa � venenoso.\n Ambos s�o m�dios de tamanho, monstros sem forma.");
			next;
			mes("[Jung]\n Ambos deixam Ma��, Poeira Poluente, G�s T�xico, Poeira Venenosa, Bact�rias, P� de Bolor e Analg�sico.");
			next;
			mes("[Jung]\n Isto � tudo por enquanto.\n Sinta-se livre para me perguntar se voc� tiver qualquer duvida sobre os monstros da Mina, tome cuidado.");
			close;
			case 2:
			mes("[Jung]\n Porcellio � um inseto que vive nas cavernas e bebe �gua gotejada das estalactites.\n � diferente do Ungoliant porque eles gostam de diferentes tipos de minerais e min�rios.");
			next;
			mes("[Jung]\n Porcellio deixa Jubileu, Perna de Inseto, C�lula �nica, L�quido Fluorescente e algumas outras coisas que eu n�o consigo me lembrar.");
			next;
			mes("[Jung]\n Finalmente, Porcellio � um monstro da propriedade Terra.\n Isto � tudo que eu sei sobre ele.\n Mas se voc� deseja saber mais sobre alguns monstros da Mina, sinta-se livre para perguntar.");
			close;
			case 3:
			mes("[Jung]\n Voc� sabe sobre a cren�a de minerais subterr�neos que cont�m altas quantidades de energia realmente t�m alma?\n Obsidiana � uma dessas rochas vivas.");
			next;
			mes("[Jung]\n Supostamente, apenas um peda�o de um Obsidiana em um Processador Jung tem bastante energia para iluminar um c�u anoitecido.\n Infelizmente, � impossivel de capturar um vivo e os ca�ar n�o � t�o f�cil.");
			next;
			mes("[Jung]\n Obsidiana � um pequeno monstro sem forma que deixa Fragmento de Cristal Negro, Carv�o, Elunium, Ferro e A�o.");
			next;
			mes("[Jung]\n Isto � tudo sobre Obsidiana.\n Se voc� tiver qualquer d�vida sobre outros monstros que vivem na Mina, sinta-se livre para me perguntar.");
			close;
		}
		case 2:
		mes("[Jung]\n Eu entendo se voc� estiver com tanta pressa.\n Apesar, se voc� for novo por aqui.\n Voc� deveria aprender tanto quanto voc� puder antes de entrar em qualquer calabou�o.");
		next;
		mes("[Jung]\n Certo ent�o, tome cuidado em suas aventuras, tudo bem?");
		close;
	}
}

// ------------------------------------------------------------------
einbech,148,246,5	script	Franz#ein	4_M_REPAIR,{
	mes("[Franz]\n T�o entediante, morrer de fome para conversar.\n A-algu�m...");
	next;
	mes("[Franz]\n Hei, um viajante!\n Voc� esta planejando explorar a Mina ou os campos aos arredores daqui?\n Vamos conversar um pouco e talvez voc� aprender� algo.");
	next;
	switch(select("Certo, tudo bem", "N�o, obrigado")) {
		case 1:
		mes("[Franz]\n Ooh, voc� que ouvir sobre a criatura da Mina ou o que aconteceu na cidade recentemente?\n O que voc� gostaria de saber mais?");
		next;
		switch(select("Criatura da Mina", "Incidente da Cidade")) {
			case 1:
			mes("[Franz]\n A criatura que eu estou falando � Ungoliant, que tamb�m � chamado por aqui de Mestre das Cavernas.\n Dizem que ele vive na cavernas profundas onde ele guarda min�rios raros e minerais com estranhos poderes.");
			next;
			mes("[Franz]\n No come�o eu achava que ele era apenas um velho conto de fadas.\n Mas ele realmente come�ou a aparecer novamente cerca de dez anos atr�s quando os desmoronamentos dos t�neis come�aram a acontecer.");
			next;
			mes("[Franz]\n Com as apari��es de Ungoliant aumentando, mais e mais descoronamentos dos t�neis aconteceram.\n Eu acho que os mineradores indevidamente entraram no territ�rio dele.");
			next;
			mes("[Franz]\n De acordo com a lenda, antigos gigantes entraram na mina para roubar carv�o dos humanos.\n Mas eles fizeram muito barulho enquanto estavam escavando e despertaram Ungoliant.");
			next;
			mes("[Franz]\n Quandos os mineradores foram trabalhar na manh� seguinte, eles acharam os corpos desses gigantes todos ensang�entados.\n Depois disso, as pessoas ficaram com medo do que Ungoliant pode fazer com qualquer um que entrar na mina.");
			next;
			mes("[Franz]\n Agora, um aventureiro que conseguiu matar um Ungoliant me contou que ele deixa Mand�bula de Formiga, Casco Arco-�ris, L�quido Fluorescente e Zirc�nio.");
			close;
			case 2:
			mes("[Franz]\n Em Einbroch, havia uma moda de ter ursinho de pel�cia.\n No entanto, uma s�rie de misteriosos acidentes e assassinatos onde fam�lias inteiras foram mortas aconteceram.");
			next;
			mes("[Franz]\n Acontece que todas as fam�lias que foram assassinadas tinham comprado um desses ursinhos de pel�cia.\n Havia certos rumores que esses ursinhos de pel�cia ganhavam vida.");
			next;
			mes("[Franz]\n Depois de uma investiga��o, as autoridades descobriram que todos os comerciantes que vendiam esses ursos tinham os comprados de um mesmo atacadista, um estranho que ningu�m conhecia.");
			next;
			mes("[Franz]\n Considerando que esses ursinhos de pel�cia, claramente n�o foram feitos para serem, brinquedos inofensivos, soldados foram enviados para assegurar que todos os ursinhos de pel�cias fossem jogados para fora da cidade.");
			next;
			mes("[Franz]\n Mas assim que os ursinhos de pel�cia foram expulsos da cidade, eles ganharam vida e come�aram a se revoltar!\n Esta � uma prova clara que esses ursinhos s�o controlados pelas for�as do mal.");
			next;
			mes("[Franz]\n Agora esses ursinhos agressivos est�o espalhados por todo lugar e o governo os classficou como monstros.\n Mate com dano extremo!");
			next;
			mes("[Franz]\n De acordo com os aventureiros que enfrentaram esses ursos, eles s�o monstros pequenos, de propriedade neutra que deixam Mel, Prego Enferrujado, Biscoito de Gengibre e Martelo de Oridecon.");
			next;
			mes("[Franz]\n Isto � tudo que eu sei sobre eles.\n Tome cuidado com esses ursinhos se voc� sair para explorar, certo?\n Eles podem ser fofinhos, mas eles s�o conhecidos por serem extremamente crueis!");
			close;
		}
		case 2:
		mes("[Franz]\n Oh, certo.\n Voc� esta ocupado e tem coisas para fazer, eu entendo.\n Voc� provavelmente tem algum lugar para ir agora mesmo.\n Certo. V�.");
		next;
		mes("[Franz]\n Eu...\n Eu tenho um material no qual eu deveria estar trabalhando.\n Sim. Ando muito ocupado.");
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ein_in01,279,92,3	script	Senhorita#ein	4_M_EINMAN2,{
	mes("[Senhorita]\n A maioria dos homens de Einbech s�o brutos, primitivos e machistas!\n Eles me enojam!");
	next;
	mes("[Senhorita]\n Eu quero dizer que, n�o h� nada de bom neles!\n Eles s�o selvagens, violentos, cabe�as ocas e ignorantes.\n Eles resolvem todos os seus problemas na for�a e eles s�o assim... mente fechada!");
	next;
	mes("[Senhorita]\n Como eles n�o podem saber que as mulheres querem homens suaves, sens�veis, com quem possam compartilhar seus sentimentos e beber um ch� de chamille sobre uma toalha tricotada?");
	close;
}

// ------------------------------------------------------------------
ein_in01,277,95,7	script	Ryan#ein	4_M_EINMAN,{
	mes("[Ryan]\n Oooh...");
	next;
	mes("[Ryan]\n Oooh...\n Mam�e.");
	next;
	mes("[Ryan]\n Oooh...\n Mam�e.\n Voc� � assim...");
	next;
	mes("[Ryan]\n Oooh...\n Mam�e.\n Voc� � assim...\n ^FF0000Quente^000000!");
	next;
	mes("[Ryan]\n Por qu� voc� n�o tirar essas roupas pesadas, inc�modas?\n Eu vou comprar tudo que voc� desejar, estou aqui! Venha.");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n N-no...!\n I-I-I-I...\n ^666666Este � o sujeito mais sombrio que eu j� vi!^000000");
	next;
	mes("[Ryan]\n Hm? N�o...?\n Absolutamente n�o?\n Voc� tem certeza?\n Tudo bem, tudo bem.\n Me desculpe, eu pe�o desculpas.\n Eu esta fora de mim.");
	next;
	mes("[Ryan]\n ...\n Ou eu estava?\n Bwahahahaha!");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Es-este sujeito deve estar b�bado, com a mente drogada.");
	close;
}

// ------------------------------------------------------------------
ein_in01,281,85,3	script	B�bado#ein	4_M_DIEMAN,{
	mes("[B�bado]\n ...^333333*Hiccup*^000000...\n ^333333*Hiccup*^000000...\n ^333333*Yawn*^000000.....\n .................\n ..^333333*Hiccup*^000000.....\n ^333333*Hiccup*^000000..");
	close;
}
