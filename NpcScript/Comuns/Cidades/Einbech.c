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
| - Info: Npcs comuns na cidade Einbech                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
einbech,172,113,4	script	Nemuk#ein	4_M_EINMAN,{
	mes "[Nemuk]";
	mes "Voc� parece ser um forasteiro, ent�o deixe-me perguntar algo.";
	mes "O que voc� acha de Einbech?";
	next;
	switch(select("� legal", "Parece dificil de viver aqui.")) {
		case 1:
		mes "[Nemuk]";
		mes "Huh...?";
		mes "Eu n�o estou certo do que voc� tenha visto.";
		mes "Mas eu estou surpreso de ouvir voc� dizer algo assim.";
		next;
		mes "[Nemuk]";
		mes "Faz dez anos desde que eu come�ei a pensar em me mudar.";
		mes "Por�m, Eu ainda estou pensando sobre isso.";
		mes "Agora, se eu fosse rico...";
		mes "Partiria num instante, mas isso � dificil enquanto eu junto dinheiro para me mudar.";
		next;
		mes "[Nemuk]";
		mes "^333333*Sigh...*^000000";
		mes "Talvez se eu tivesse sido um aventureiro quando eu era mais jovem.";
		mes "Eu n�o teria esses problemas hoje...";
		close;
		case 2:
		mes "[Nemuk]";
		mes "Eu penso assim.";
		mes "Bem, Me desculpe se eu coloquei voc� em uma situa��o dificil.";
		next;
		mes "[Nemuk]";
		mes "Todo mundo aqui tem passado por tempos duros vivendo dia ap�s dia para contar o que eu possa me lembrar.";
		mes "Parece que as coisas nunca ficam melhoram n�o importa o que n�s fazemos.";
		next;
		mes "[Nemuk]";
		mes "Eu realmente quero partir, mas � apenas um desejo tolo.";
		mes "Meu corpo esta preso aqui enquanto me cora��o deseja uma vida muito melhor.";
		mes "^333333*Sigh*^000000";
		mes "Esta desesperado?";
		mes "O que eu posso fazer?";
		close;
	}
}

// ------------------------------------------------------------------
einbech,197,139,4	script	Jovem#air2	4_M_EINMAN,{
	mes "[Heinz]";
	mes "Uau...";
	mes "Um aventureiro de Rune-Midgard, certo?";
	mes "O que o traz aqui?";
	next;
	mes "[Heinz]";
	mes "Einbech n�o oferece muito em termos de vista.";
	mes "Mas voc� veio ver a mina?";
	mes "Agora mesmo, h� muitos monstros e n�s n�o podemos cavar nenhum min�rio porque � muito perigoso.";
	next;
	mes "[Heinz]";
	mes "Agora, se alguns aventureiros fossem bastante generosos para ca�ar essas criaturas.";
	mes "Mas n�s poderiamos minerar novamente e eles receberiam alguns zeny.";
	mes "� como matar dois p�ssaros com uma pedrada s�. Hahaha!";
	next;
	mes "[Heinz]";
	mes "Oh espere... Me desculpe.";
	mes "Eu n�o sei o que tem de errado comigo.";
	mes "Pedindo para completos estranhos fazerem favores para mim.";
	mes "� completamente rude!";
	mes "Eu quero dizer, quem faria isso?";
	next;
	mes "[Heinz]";
	mes "Mas...";
	mes "Estou al�m de me preocupar com meu orgulho.";
	mes "Por causa de tudo que � bom e santo.";
	mes "Estou te implorando, por favor mate estas criaturas nojentas e m�s.";
	mes "Por favor!!";
	close;
}

// ------------------------------------------------------------------
einbech,128,238,5	script	Mogan#ein	4_M_EINMINER,{
	mes "[Mogan]";
	mes "Recentemente, houve alguns desmoronamentos onde muitos mineradores ficaram feridos.";
	mes "Isto foi discutido no Conselho da Cidade e na minha opini�o...";
	mes "Acho que os minerados cavaram muito fundo e causaram isso.";
	next;
	mes "[Mogan]";
	mes "Sim, eles despertaram Ungoliant, o mestre das cavernas que existia desde os tempos antigos.";
	mes "Eu n�o sei quantos mais seram feitos de vitima pelo Ungolian no futuro.";
	mes "N�o h� relatos...";
	next;
	mes "[Mogan]";
	mes "Aventureiro, tome cuidado se voc� se aventurar dentro das minas.";
	mes "Para que os seus passos n�o atrapalhem o sono de Ungoliant.";
	close;
}

// ------------------------------------------------------------------
einbech,129,234,5	script	Hander#ein	4_M_EINMINER,{
	mes "[Hander]";
	mes "Aqueles bastardos de Einbroch!";
	mes "Vivendo dos recursos que n�s escavamos enquanto n�s continuamos trabalhando para aqueles babacas!";
	mes "Maldi��o!";
	next;
	mes "[Hander]";
	mes "Todo dia, n�s arriscamos nossa droga de vida exatamente assim n�s podemos nos sustentar!";
	mes "Porque os mais velhos n�o fazem alguma coisa sobre isto, como aumentar o pre�o dos nossos min�rios?";
	next;
	mes "[Hander]";
	mes "O hor�rio de trabalho � irracional.";
	mes "A esposa de Cavitar foi atacada por uma criatura da mina.";
	mes "O hospital � muito longe e n�s n�o temos qualquer comida para comer!";
	mes "Por qu�...?!";
	close;
}

// ------------------------------------------------------------------
einbech,105,218,5	script	Gushenmu#ein	4_M_EINMINER,{
	mes "[Gushenmu]";
	mes "Eu moro aqui a um longo tempo e, acredite ou n�o.";
	mes "As coisas n�o eram no passado como elas s�o agora.";
	next;
	mes "[Gushenmu]";
	mes "Por muitas diferentes raz�es, o trabalho � mais perigoso e n�s estamos tendo reais baixas de trabalho.";
	mes "E as f�bricas em Einbroch fazem muita polui��o.";
	mes "N�s n�o conseguimos nem mesmo ver a luz do sol aqui.";
	next;
	mes "[Gushenmu]";
	mes "A triste realidade da vida de minerador � exatamente essa.";
	mes "N�s acordamos...";
	mes "Vamos para o trabalho, e no final do dia alguns de n�s est�o machucados enquanto alguns outros nunca retornaram ao trabalho no dia seguinte.";
	next;
	mes "[Gushenmu]";
	mes "E a medida que Einbech e Einbroch cresceram.";
	mes "Eu ou�o mais e mais rumores que monstros n�o familiares est�o formando uma enxame fora da cidade.";
	mes "Este � realmente o pior tempo de Einbech...";
	close;
}

// ------------------------------------------------------------------
einbech,157,215,3	script	Gerente da Esta��o#eim	4_M_EIN_SOLDIER,{
	mes "[Gerente da Esta��o]";
	mes "Esta Esta��o de Tem � estritamente para trens indo de Einbech para Einbroch.";
	mes "Por favor fale com a Equipe, indo ao noroeste se voc� quiser subir a bordo.";
	close;
}

// ------------------------------------------------------------------
einbech,151,168,3	script	Tollaf#ein	4_M_EINMAN,{
	mes "[Tollaf]";
	mes "Ah...!";
	mes "Isto esta me matando!";
	mes "Eu n�o tenho dinheiro para me mudar, mas eu n�o quero mais viver neste cidade!";
	next;
	mes "[Tollaf]";
	mes "As pessoas vivem em tantos outros lugares melhor que n�s, especialmente aqueles esnobes de Einbroch!";
	mes "Einbech deve ser a pior cidade da Rep�blica de Schwartzwald.";
	mes "N�o, deve ser a pior cidade do mundo!";
	close;
}

// ------------------------------------------------------------------
einbech,93,139,5	script	Raust#ein	4_M_EINOLD,{
	mes "[Raust]";
	mes "Eu n�o consegui!";
	mes "Einbroch esta crescendo e nossa cidade est� se tornando cada vez mais suja.";
	mes "Mas que inferno?!";
	next;
	mes "[Raust]";
	mes "N�o somente as pessoas parecem mais �speras.";
	mes "N�s parecemos mais cansados e mais velhos tamb�m!";
	mes "Est� sujo, est� amontoado, tudo nessa cidade est� uma bagun�a!";
	mes "O que, voc� quer uma lista?!";
	next;
	mes "[Raust]";
	mes "A comida, literalmente, est� um lixo!";
	mes "Os servi�os aqui s�o uma viola��o aos direitos humanos.";
	mes "N�s temos poucas mulheres aqui e as poucas que temos fedem muito!";
	mes "N�o est� convencido ainda?!";
	next;
	mes "[Raust]";
	mes "Porque tudo est� bom ainda em Einbroch?!";
	mes "Eu odeio isso!";
	mes "^333333*Grumble*^000000";
	close;
}

// ------------------------------------------------------------------
einbech,149,154,3	script	Mjunia#ein	4_F_EINWOMAN,{
	mes "[Mjunia]";
	mes "� dificil ser uma mulher aqui nesta cidade, nascida aqui.";
	mes "� como se o destino decidiu ser especialmente cruel comigo.";
	next;
	mes "[Mjunia]";
	mes "Minha pele e minhas m�os est�o �speras de tanto trabalho que eu tenho que fazer.";
	mes "Mas o pior de tudo...";
	mes "Eu... Eu...";
	mes "Eu desenvolvi tantos m�sculos quanto a maioria dos rapazes!";
	mes "Waaaaaah!";
	next;
	mes "[Mjunia]";
	mes "Eu desejo poder encontrar um belo rapaz de Einbroch e casar ent�o poder sair desta cidade.";
	mes "Mas parece que isso n�o vai acontecer...";
	next;
	mes "[Mjunia]";
	mes "E eu nunca me casaria com qualquer um de Einbech!";
	mes "Eu preferiria morrer de frio e sozinha do que morrer de frio e casada com algum brig�o de Einbech.";
	next;
	mes "[Mjunia]";
	mes "Olhe para estes m�sculos.";
	mes "O que voc� acha?";
	mes "Eu sou bonita?";
	mes "^333333*Sniff*^000000";
	mes "Eu deixei de tentar ser feminina anos atr�s.";
	mes "Eu tenho que trabalhar muito...";
	close;
}

// ------------------------------------------------------------------
einbech,130,253,1	script	Ekuri#ein	4_M_EINMINER,{
	mes "[Ekuri]";
	mes "O que eu estou fazendo aqui?";
	mes "Pro inferno, Eu estou morrendo de medo de entrar na mina!";
	mes "Mas eu posso ganhar dinheiro aqui na entrada juntando essas sucatas!";
	mes "Esperto, huh?";
	next;
	mes "[Ekuri]";
	mes "�s vezes, eu tenho sorte e consigo um min�rio inteiro!";
	mes "Claro, Eu sou um covarde, mas pelo menos eu estou vivo.";
	mes "Bem, por enquanto.";
	next;
	mes "[Ekuri]";
	mes "Agora voc� sabe o qu� eu estou fazendo aqui.";
	mes "Ent�o porque voc� n�o me deixa voltar para meu trabalho?";
	mes "Min�rios, venham para mim!";
	close;
}

// ------------------------------------------------------------------
einbech,46,107,6	script	Shena#ein	4_F_EINOLD,{
	mes "[Shena]";
	mes "Como pode voc�s jovens n�o aprender tudo isso?";
	next;
	mes "[Shena]";
	mes "Bem, estou certa que as pr�ximas gera��es far�o algo � isso.";
	mes "Mas estou surpreso que pessoas experientes n�o conhecem muito.";
	next;
	switch(select("Do que est� falando?", "Ignorar")) {
		case 1:
		mes "[Shena]";
		mes "Oh? bem, bem...";
		mes "Voc� n�o � a mais ador�vel garotinha?";
		mes "Ol�, Querida.";
		next;
		if (Sex == SEX_MALE) {
			select("Desculpe-me, mas eu sou homem.");
			mes "[Shena]";
			mes "Por meus olhos estarem ficando ruims pela minha idade.";
			mes "Fica dif�cil para ver as diferen�as...";
			next;
		}
		mes "[Shena]";
		mes "Eu estava apenas sobre monstros perto de Einbroch.";
		mes "Aparentemente, voc�s novatos n�o conhecem muito como deveriam.";
		next;
		mes "[Shena]";
		mes "Se aventura � seu seu neg�cio, voc� deve saber contra o que est� lutando.";
		mes "Voc� tem alguma d�vida sobre monstros das redondezas daqui, minha pequena?";
		next;
		if (Sex == SEX_MALE) {
			select("Eu n�o sou mulher!");
			mes "[Shena]";
			mes "Ent�o querido, qual monstro voc� est� interessado em ouvir sobre?";
			next;
		}
		while(true) {
			switch(select("Metalling", "Mineral", "Mineiros", "Fornalha Velha", "Terminar Conversa")) {
				case 1:
				mes "[Shena]";
				mes "Bom, os Metalings foram criados durante nos tempos em que os deuses mandavam sobre este mundo.";
				next;
				mes "[Shena]";
				mes "Eu n�o estou certo se sabe sobre isso ou n�o.";
				mes "Mas de acordo com o mito, Porings e Drops foram criados a partir da saliva de Odin.";
				mes "Eu acho que voc� n�o iria querer saber sobre o Poporing...";
				next;
				mes "[Shena]";
				mes "Metalings, na outra m�o, foram criados de sangue de m�quinas que n�s acreditamos ser chamadas de 'Gigantes.'";
				next;
				mes "[Shena]";
				mes "Os Metalings s�o como essas gelatinas que vivem pulando eles pegam tudo que encontram no ch�o.";
				next;
				mes "[Shena]";
				mes "Se voc� matar um Metaling, voc� pode dropar um Jellopy Tamanho Fam�lia, Min�rio ou at� mesmo A�o.";
				mes "Isso pode ser bom em se saber, n�o?";
				next;
				mes "[Shena]";
				mes "H� mais alguma coisa que deseja saber?";
				next;
				break;
				case 2:
				mes "[Shena]";
				mes "Voc� sabia que as estalactites e cristais das cavernas levam centenas e centenas de anos para se formarem?";
				next;
				mes "[Shena]";
				mes "Agora, se alguma coisa anda nascendo em centenas de anos s� pode fazer sentido se tiver atualmente vivo.";
				mes "Agora monstros do min�rio s�o estalactites vivas.";
				next;
				mes "[Shena]";
				mes "H� rumores de que est�o nascendo na caverna negra em algum ponto la dentro onde h� influencias malignas muito forte sobre elas.";
				next;
				mes "[Shena]";
				mes "Minerais podem se defender, mas eles podem dropar Fragmentos de Cristais, Top�zio e Emveretarcon se voc� derrotar um.";
				mes "H� sempre uma chance de eles derrubarem j�ias raras, mas n�o tenho certeza.";
				next;
				mes "[Shena]";
				mes "Mais alguma coisa?";
				next;
				break;
				case 3:
				mes "[Shena]";
				mes "Mineiros s�o fantasmas de mineiros mortos que usam velhos e enferrujados carrinhos.";
				mes "Por alguma raz�o, eles n�o podem deixar esse mundo, ent�o eles continuam vagando pelas minas.";
				next;
				mes "[Shena]";
				mes "Se voc� derrotar algum deles, poder� conseguir uma Picareta Velha, Lampi�o, A�o, Ferro, Carv�o e Lanterna de Bolso.";
				next;
				mes "[Shena]";
				mes "Voc� quer perguntar mais algumas coisa sobre os monstros?";
				next;
				break;
				case 4:
				mes "[Shena]";
				mes "� somente uma maligna, Fornalha Velha comedora de homens.";
				next;
				switch(select("...Isso seria?", "H-horripilante!")) {
					case 1:
					mes "[Shena]";
					mes "Agora, voc� sabe a import�ncia de reciclar e preservar nossos recursos naturais, certo?";
					mes "Agora, voc� me fara se sentir bem se recilcar esses peda�os de ferro dessas Fornalhas Velhas.";
					next;
					mes "[Shena]";
					mes "Fornalhas Velhas geralmente deixam Panelha Velha, Madeira Queimada, Ferro e Min�rio.";
					mes "Mas eventualmente podem pe�as interessantes como Ferro Enferrujado ou mesmo Galho Seco.";
					next;
					break;
					case 2:
					mes "[Shena]";
					mes "Cria��o divina, essa criatura � cruel e sem piedade, contudo um simbolo do mal puro do qual voc� jamais viu.";
					next;
					mes "[Shena]";
					mes "Ao contr�rio dos novos dispositivos, as Fornalhas Velhas foram feitas por Mestres-Ferreiros que, eu acho, criaram as almas delas tamb�m.";
					mes "Eles usaram-nas para produzir um benevolente calor.";
					next;
					mes "[Shena]";
					mes "Por anos serviram seus mestres com lealdade.";
					mes "Mas as tecnologias avan�adas e elas ficaram obsoletas, elas foram descartadas como lixo velho.";
					mes "Isso as transforamaram em seres ^FF0000mal�gnos^000000.";
					next;
					mes "[Shena]";
					mes "Fornalhas Velhas geralmente deixam Panelha Velha, Madeira Queimada, Ferro e Min�rio.";
					mes "Mas eventualmente podem pe�as interessantes como Ferro Enferrujado ou mesmo Galho Seco.";
					next;
					break;
				}
				mes " Ent�o, ainda tem mais algo que quer que eu compartilhe com voc�?";
				next;
				break;
				case 5:
				mes "[Shena]";
				mes "Certo ent�o, tenha um bom dia.";
				close;
			}
		}
		case 2:
		mes "[Shena]";
		mes "Voc� n�o viveu o suficiente para ser experiente como eu e n�o aprendeu nem um pouco sobre nosso vasto mundo.";
		close;
	}
}

// ------------------------------------------------------------------
einbech,148,242,5	script	Jung#ein	4_M_EINMAN,{
	mes "[Jung]";
	mes "Eu sou uma das poucas pessoas que viveram em ambas Einbech e Einbroch por um longo tempo.";
	mes "Ent�o eu acho que eu sou um dos melhores guias desta �rea.";
	next;
	mes "[Jung]";
	mes "Diga, se voc� est� pensando em entrar na caverna.";
	mes "Eu posso contar a voc� tudo que eu sei sobre os monstros daquele lugar de forma que voc� ficara melhor preparado.";
	next;
	switch(select("Claro, porque n�o?", "N�o, mesmo")) {
		case 1:
		mes "[Jung]";
		mes "Deixe-me ver.";
		mes "Ah, os monstros que s�o �nicos da Mina s�o Nuvem T�xicas, Nuvem Venenosa, Porcellio e Obsidiana.";
		mes "Qual destes voc� deseja saber mais?";
		next;
		switch(select("Nuvem T�xica e Nuvem Venenosa", "Porcellio", "Obsidiana")) {
			case 1:
			mes "[Jung]";
			mes "Voc� sabe, ninguem parece saber de onde as Nuvem T�xicas e Nuvem Venenosa vieram se formar.";
			mes "Isto �, como eles apareceram fora de parte alguma quando Einbroch come�ou se industrializar.";
			next;
			mes "[Jung]";
			mes "Agora que eu penso sobre isto, n�o acretido que eles s�o monstros criados naturalmente.";
			mes "Eles tem este olha fixo de desespero e sofrimento e tendem a agir como eles precisassem matar seus inimigos.";
			next;
			mes "[Jung]";
			mes "Mas, voc� deveria ter mais cuidado!";
			mes "Nuvem T�xica e a Nuvem Venenosa s�o monstros furtivos que podem planar sil�nciosamente pelo ar e o atacar antes de voc� reparar...";
			next;
			mes "[Jung]";
			mes "Voc� deve saber que Nuvem T�xica tem propriedade de Fantasma e Nuvem Venenosa � venenoso.";
			mes "Ambos s�o m�dios de tamanho, monstros sem forma.";
			next;
			mes "[Jung]";
			mes "Ambos deixam Ma��, Poeira Poluente, G�s T�xico, Poeira Venenosa, Bact�rias, P� de Bolor e Analg�sico.";
			next;
			mes "[Jung]";
			mes "Isto � tudo por enquanto.";
			mes "Sinta-se livre para me perguntar se voc� tiver qualquer duvida sobre os monstros da Mina, tome cuidado.";
			close;
			case 2:
			mes "[Jung]";
			mes "Porcellio � um inseto que vive nas cavernas e bebe �gua gotejada das estalactites.";
			mes "� diferente do Ungoliant porque eles gostam de diferentes tipos de minerais e min�rios.";
			next;
			mes "[Jung]";
			mes "Porcellio deixa Jubileu, Perna de Inseto, C�lula �nica, L�quido Fluorescente e algumas outras coisas que eu n�o consigo me lembrar.";
			next;
			mes "[Jung]";
			mes "Finalmente, Porcellio � um monstro da propriedade Terra.";
			mes "Isto � tudo que eu sei sobre ele.";
			mes "Mas se voc� deseja saber mais sobre alguns monstros da Mina, sinta-se livre para perguntar.";
			close;
			case 3:
			mes "[Jung]";
			mes "Voc� sabe sobre a cren�a de minerais subterr�neos que cont�m altas quantidades de energia realmente t�m alma?";
			mes "Obsidiana � uma dessas rochas vivas.";
			next;
			mes "[Jung]";
			mes "Supostamente, apenas um peda�o de um Obsidiana em um Processador Jung tem bastante energia para iluminar um c�u anoitecido.";
			mes "Infelizmente, � impossivel de capturar um vivo e os ca�ar n�o � t�o f�cil.";
			next;
			mes "[Jung]";
			mes "Obsidiana � um pequeno monstro sem forma que deixa Fragmento de Cristal Negro, Carv�o, Elunium, Ferro e A�o.";
			next;
			mes "[Jung]";
			mes "Isto � tudo sobre Obsidiana.";
			mes "Se voc� tiver qualquer d�vida sobre outros monstros que vivem na Mina, sinta-se livre para me perguntar.";
			close;
		}
		case 2:
		mes "[Jung]";
		mes "Eu entendo se voc� estiver com tanta pressa.";
		mes "Apesar, se voc� for novo por aqui.";
		mes "Voc� deveria aprender tanto quanto voc� puder antes de entrar em qualquer calabou�o.";
		next;
		mes "[Jung]";
		mes "Certo ent�o, tome cuidado em suas aventuras, tudo bem?";
		close;
	}
}

// ------------------------------------------------------------------
einbech,148,246,5	script	Franz#ein	4_M_REPAIR,{
	mes "[Franz]";
	mes "T�o entediante, morrer de fome para conversar.";
	mes "A-algu�m...";
	next;
	mes "[Franz]";
	mes "Hei, um viajante!";
	mes "Voc� esta planejando explorar a Mina ou os campos aos arredores daqui?";
	mes "Vamos conversar um pouco e talvez voc� aprender� algo.";
	next;
	switch(select("Certo, tudo bem", "N�o, obrigado")) {
		case 1:
		mes "[Franz]";
		mes "Ooh, voc� que ouvir sobre a criatura da Mina ou o que aconteceu na cidade recentemente?";
		mes "O que voc� gostaria de saber mais?";
		next;
		switch(select("Criatura da Mina", "Incidente da Cidade")) {
			case 1:
			mes "[Franz]";
			mes "A criatura que eu estou falando � Ungoliant, que tamb�m � chamado por aqui de Mestre das Cavernas.";
			mes "Dizem que ele vive na cavernas profundas onde ele guarda min�rios raros e minerais com estranhos poderes.";
			next;
			mes "[Franz]";
			mes "No come�o eu achava que ele era apenas um velho conto de fadas.";
			mes "Mas ele realmente come�ou a aparecer novamente cerca de dez anos atr�s quando os desmoronamentos dos t�neis come�aram a acontecer.";
			next;
			mes "[Franz]";
			mes "Com as apari��es de Ungoliant aumentando, mais e mais descoronamentos dos t�neis aconteceram.";
			mes "Eu acho que os mineradores indevidamente entraram no territ�rio dele.";
			next;
			mes "[Franz]";
			mes "De acordo com a lenda, antigos gigantes entraram na mina para roubar carv�o dos humanos.";
			mes "Mas eles fizeram muito barulho enquanto estavam escavando e despertaram Ungoliant.";
			next;
			mes "[Franz]";
			mes "Quandos os mineradores foram trabalhar na manh� seguinte, eles acharam os corpos desses gigantes todos ensang�entados.";
			mes "Depois disso, as pessoas ficaram com medo do que Ungoliant pode fazer com qualquer um que entrar na mina.";
			next;
			mes "[Franz]";
			mes "Agora, um aventureiro que conseguiu matar um Ungoliant me contou que ele deixa Mand�bula de Formiga, Casco Arco-�ris, L�quido Fluorescente e Zirc�nio.";
			close;
			case 2:
			mes "[Franz]";
			mes "Em Einbroch, havia uma moda de ter ursinho de pel�cia.";
			mes "No entanto, uma s�rie de misteriosos acidentes e assassinatos onde fam�lias inteiras foram mortas aconteceram.";
			next;
			mes "[Franz]";
			mes "Acontece que todas as fam�lias que foram assassinadas tinham comprado um desses ursinhos de pel�cia.";
			mes "Havia certos rumores que esses ursinhos de pel�cia ganhavam vida.";
			next;
			mes "[Franz]";
			mes "Depois de uma investiga��o, as autoridades descobriram que todos os comerciantes que vendiam esses ursos tinham os comprados de um mesmo atacadista, um estranho que ningu�m conhecia.";
			next;
			mes "[Franz]";
			mes "Considerando que esses ursinhos de pel�cia, claramente n�o foram feitos para serem, brinquedos inofensivos, soldados foram enviados para assegurar que todos os ursinhos de pel�cias fossem jogados para fora da cidade.";
			next;
			mes "[Franz]";
			mes "Mas assim que os ursinhos de pel�cia foram expulsos da cidade, eles ganharam vida e come�aram a se revoltar!";
			mes "Esta � uma prova clara que esses ursinhos s�o controlados pelas for�as do mal.";
			next;
			mes "[Franz]";
			mes "Agora esses ursinhos agressivos est�o espalhados por todo lugar e o governo os classficou como monstros.";
			mes "Mate com dano extremo!";
			next;
			mes "[Franz]";
			mes "De acordo com os aventureiros que enfrentaram esses ursos, eles s�o monstros pequenos, de propriedade neutra que deixam Mel, Prego Enferrujado, Biscoito de Gengibre e Martelo de Oridecon.";
			next;
			mes "[Franz]";
			mes "Isto � tudo que eu sei sobre eles.";
			mes "Tome cuidado com esses ursinhos se voc� sair para explorar, certo?";
			mes "Eles podem ser fofinhos, mas eles s�o conhecidos por serem extremamente crueis!";
			close;
		}
		case 2:
		mes "[Franz]";
		mes "Oh, certo.";
		mes "Voc� esta ocupado e tem coisas para fazer, eu entendo.";
		mes "Voc� provavelmente tem algum lugar para ir agora mesmo.";
		mes "Certo. V�.";
		next;
		mes "[Franz]";
		mes "Eu...";
		mes "Eu tenho um material no qual eu deveria estar trabalhando.";
		mes "Sim. Ando muito ocupado.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ein_in01,279,92,3	script	Senhorita#ein	4_M_EINMAN2,{
	mes "[Senhorita]";
	mes "A maioria dos homens de Einbech s�o brutos, primitivos e machistas!";
	mes "Eles me enojam!";
	next;
	mes "[Senhorita]";
	mes "Eu quero dizer que, n�o h� nada de bom neles!";
	mes "Eles s�o selvagens, violentos, cabe�as ocas e ignorantes.";
	mes "Eles resolvem todos os seus problemas na for�a e eles s�o assim... mente fechada!";
	next;
	mes "[Senhorita]";
	mes "Como eles n�o podem saber que as mulheres querem homens suaves, sens�veis, com quem possam compartilhar seus sentimentos e beber um ch� de chamille sobre uma toalha tricotada?";
	close;
}

// ------------------------------------------------------------------
ein_in01,277,95,7	script	Ryan#ein	4_M_EINMAN,{
	mes "[Ryan]";
	mes "Oooh...";
	next;
	mes "[Ryan]";
	mes "Oooh...";
	mes "Mam�e.";
	next;
	mes "[Ryan]";
	mes "Oooh...";
	mes "Mam�e.";
	mes "Voc� � assim...";
	next;
	mes "[Ryan]";
	mes "Oooh...";
	mes "Mam�e.";
	mes "Voc� � assim...";
	mes "^FF0000Quente^000000!";
	next;
	mes "[Ryan]";
	mes "Por qu� voc� n�o tirar essas roupas pesadas, inc�modas?";
	mes "Eu vou comprar tudo que voc� desejar, estou aqui! Venha.";
	next;
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "N-no...!";
	mes "I-I-I-I...";
	mes "^666666Este � o sujeito mais sombrio que eu j� vi!^000000";
	next;
	mes "[Ryan]";
	mes "Hm? N�o...?";
	mes "Absolutamente n�o?";
	mes "Voc� tem certeza?";
	mes "Tudo bem, tudo bem.";
	mes "Me desculpe, eu pe�o desculpas.";
	mes "Eu esta fora de mim.";
	next;
	mes "[Ryan]";
	mes "...";
	mes "Ou eu estava?";
	mes "Bwahahahaha!";
	next;
	mes "[" + strcharinfo(PC_NAME) + "]";
	mes "Es-este sujeito deve estar b�bado, com a mente drogada.";
	close;
}

// ------------------------------------------------------------------
ein_in01,281,85,3	script	B�bado#ein	4_M_DIEMAN,{
	mes "[B�bado]";
	mes "...^333333*Hiccup*^000000...";
	mes "^333333*Hiccup*^000000...";
	mes "^333333*Yawn*^000000.....";
	mes ".................";
	mes "..^333333*Hiccup*^000000.....";
	mes "^333333*Hiccup*^000000..";
	close;
}
