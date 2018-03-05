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
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Einbech                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
einbech,172,113,4	script	Nemuk#ein	4_M_EINMAN,{
	mes("[Nemuk]\n Você parece ser um forasteiro, então deixe-me perguntar algo.\n O que você acha de Einbech?");
	next;
	switch(select("É legal", "Parece dificil de viver aqui.")) {
		case 1:
		mes("[Nemuk]\n Huh...?\n Eu não estou certo do que você tenha visto.\n Mas eu estou surpreso de ouvir você dizer algo assim.");
		next;
		mes("[Nemuk]\n Faz dez anos desde que eu começei a pensar em me mudar.\n Porém, Eu ainda estou pensando sobre isso.\n Agora, se eu fosse rico...\n Partiria num instante, mas isso é dificil enquanto eu junto dinheiro para me mudar.");
		next;
		mes("[Nemuk]\n ^333333*Sigh...*^000000\n Talvez se eu tivesse sido um aventureiro quando eu era mais jovem.\n Eu não teria esses problemas hoje...");
		close;
		case 2:
		mes("[Nemuk]\n Eu penso assim.\n Bem, Me desculpe se eu coloquei você em uma situação dificil.");
		next;
		mes("[Nemuk]\n Todo mundo aqui tem passado por tempos duros vivendo dia após dia para contar o que eu possa me lembrar.\n Parece que as coisas nunca ficam melhoram não importa o que nós fazemos.");
		next;
		mes("[Nemuk]\n Eu realmente quero partir, mas é apenas um desejo tolo.\n Meu corpo esta preso aqui enquanto me coração deseja uma vida muito melhor.\n ^333333*Sigh*^000000\n Esta desesperado?\n O que eu posso fazer?");
		close;
	}
}

// ------------------------------------------------------------------
einbech,197,139,4	script	Jovem#air2	4_M_EINMAN,{
	mes("[Heinz]\n Uau...\n Um aventureiro de Rune-Midgard, certo?\n O que o traz aqui?");
	next;
	mes("[Heinz]\n Einbech não oferece muito em termos de vista.\n Mas você veio ver a mina?\n Agora mesmo, há muitos monstros e nós não podemos cavar nenhum minério porque é muito perigoso.");
	next;
	mes("[Heinz]\n Agora, se alguns aventureiros fossem bastante generosos para caçar essas criaturas.\n Mas nós poderiamos minerar novamente e eles receberiam alguns zeny.\n É como matar dois pássaros com uma pedrada só. Hahaha!");
	next;
	mes("[Heinz]\n Oh espere... Me desculpe.\n Eu não sei o que tem de errado comigo.\n Pedindo para completos estranhos fazerem favores para mim.\n É completamente rude!\n Eu quero dizer, quem faria isso?");
	next;
	mes("[Heinz]\n Mas...\n Estou além de me preocupar com meu orgulho.\n Por causa de tudo que é bom e santo.\n Estou te implorando, por favor mate estas criaturas nojentas e más.\n Por favor!!");
	close;
}

// ------------------------------------------------------------------
einbech,128,238,5	script	Mogan#ein	4_M_EINMINER,{
	mes("[Mogan]\n Recentemente, houve alguns desmoronamentos onde muitos mineradores ficaram feridos.\n Isto foi discutido no Conselho da Cidade e na minha opinião...\n Acho que os minerados cavaram muito fundo e causaram isso.");
	next;
	mes("[Mogan]\n Sim, eles despertaram Ungoliant, o mestre das cavernas que existia desde os tempos antigos.\n Eu não sei quantos mais seram feitos de vitima pelo Ungolian no futuro.\n Não há relatos...");
	next;
	mes("[Mogan]\n Aventureiro, tome cuidado se você se aventurar dentro das minas.\n Para que os seus passos não atrapalhem o sono de Ungoliant.");
	close;
}

// ------------------------------------------------------------------
einbech,129,234,5	script	Hander#ein	4_M_EINMINER,{
	mes("[Hander]\n Aqueles bastardos de Einbroch!\n Vivendo dos recursos que nós escavamos enquanto nós continuamos trabalhando para aqueles babacas!\n Maldição!");
	next;
	mes("[Hander]\n Todo dia, nós arriscamos nossa droga de vida exatamente assim nós podemos nos sustentar!\n Porque os mais velhos não fazem alguma coisa sobre isto, como aumentar o preço dos nossos minérios?");
	next;
	mes("[Hander]\n O horário de trabalho é irracional.\n A esposa de Cavitar foi atacada por uma criatura da mina.\n O hospital é muito longe e nós não temos qualquer comida para comer!\n Por quê...?!");
	close;
}

// ------------------------------------------------------------------
einbech,105,218,5	script	Gushenmu#ein	4_M_EINMINER,{
	mes("[Gushenmu]\n Eu moro aqui a um longo tempo e, acredite ou não.\n As coisas não eram no passado como elas são agora.");
	next;
	mes("[Gushenmu]\n Por muitas diferentes razões, o trabalho é mais perigoso e nós estamos tendo reais baixas de trabalho.\n E as fábricas em Einbroch fazem muita poluição.\n Nós não conseguimos nem mesmo ver a luz do sol aqui.");
	next;
	mes("[Gushenmu]\n A triste realidade da vida de minerador é exatamente essa.\n Nós acordamos...\n Vamos para o trabalho, e no final do dia alguns de nós estão machucados enquanto alguns outros nunca retornaram ao trabalho no dia seguinte.");
	next;
	mes("[Gushenmu]\n E a medida que Einbech e Einbroch cresceram.\n Eu ouço mais e mais rumores que monstros não familiares estão formando uma enxame fora da cidade.\n Este é realmente o pior tempo de Einbech...");
	close;
}

// ------------------------------------------------------------------
einbech,157,215,3	script	Gerente da Estação#eim	4_M_EIN_SOLDIER,{
	mes("[Gerente da Estação]\n Esta Estação de Tem é estritamente para trens indo de Einbech para Einbroch.\n Por favor fale com a Equipe, indo ao noroeste se você quiser subir a bordo.");
	close;
}

// ------------------------------------------------------------------
einbech,151,168,3	script	Tollaf#ein	4_M_EINMAN,{
	mes("[Tollaf]\n Ah...!\n Isto esta me matando!\n Eu não tenho dinheiro para me mudar, mas eu não quero mais viver neste cidade!");
	next;
	mes("[Tollaf]\n As pessoas vivem em tantos outros lugares melhor que nós, especialmente aqueles esnobes de Einbroch!\n Einbech deve ser a pior cidade da República de Schwartzwald.\n Não, deve ser a pior cidade do mundo!");
	close;
}

// ------------------------------------------------------------------
einbech,93,139,5	script	Raust#ein	4_M_EINOLD,{
	mes("[Raust]\n Eu não consegui!\n Einbroch esta crescendo e nossa cidade está se tornando cada vez mais suja.\n Mas que inferno?!");
	next;
	mes("[Raust]\n Não somente as pessoas parecem mais ásperas.\n Nós parecemos mais cansados e mais velhos também!\n Está sujo, está amontoado, tudo nessa cidade está uma bagunça!\n O que, você quer uma lista?!");
	next;
	mes("[Raust]\n A comida, literalmente, está um lixo!\n Os serviços aqui são uma violação aos direitos humanos.\n Nós temos poucas mulheres aqui e as poucas que temos fedem muito!\n Não está convencido ainda?!");
	next;
	mes("[Raust]\n Porque tudo está bom ainda em Einbroch?!\n Eu odeio isso!\n ^333333*Grumble*^000000");
	close;
}

// ------------------------------------------------------------------
einbech,149,154,3	script	Mjunia#ein	4_F_EINWOMAN,{
	mes("[Mjunia]\n É dificil ser uma mulher aqui nesta cidade, nascida aqui.\n É como se o destino decidiu ser especialmente cruel comigo.");
	next;
	mes("[Mjunia]\n Minha pele e minhas mãos estão ásperas de tanto trabalho que eu tenho que fazer.\n Mas o pior de tudo...\n Eu... Eu...\n Eu desenvolvi tantos músculos quanto a maioria dos rapazes!\n Waaaaaah!");
	next;
	mes("[Mjunia]\n Eu desejo poder encontrar um belo rapaz de Einbroch e casar então poder sair desta cidade.\n Mas parece que isso não vai acontecer...");
	next;
	mes("[Mjunia]\n E eu nunca me casaria com qualquer um de Einbech!\n Eu preferiria morrer de frio e sozinha do que morrer de frio e casada com algum brigão de Einbech.");
	next;
	mes("[Mjunia]\n Olhe para estes músculos.\n O que você acha?\n Eu sou bonita?\n ^333333*Sniff*^000000\n Eu deixei de tentar ser feminina anos atrás.\n Eu tenho que trabalhar muito...");
	close;
}

// ------------------------------------------------------------------
einbech,130,253,1	script	Ekuri#ein	4_M_EINMINER,{
	mes("[Ekuri]\n O que eu estou fazendo aqui?\n Pro inferno, Eu estou morrendo de medo de entrar na mina!\n Mas eu posso ganhar dinheiro aqui na entrada juntando essas sucatas!\n Esperto, huh?");
	next;
	mes("[Ekuri]\n Às vezes, eu tenho sorte e consigo um minério inteiro!\n Claro, Eu sou um covarde, mas pelo menos eu estou vivo.\n Bem, por enquanto.");
	next;
	mes("[Ekuri]\n Agora você sabe o quê eu estou fazendo aqui.\n Então porque você não me deixa voltar para meu trabalho?\n Minérios, venham para mim!");
	close;
}

// ------------------------------------------------------------------
einbech,46,107,6	script	Shena#ein	4_F_EINOLD,{
	mes("[Shena]\n Como pode vocês jovens não aprender tudo isso?");
	next;
	mes("[Shena]\n Bem, estou certa que as próximas gerações farão algo à isso.\n Mas estou surpreso que pessoas experientes não conhecem muito.");
	next;
	switch(select("Do que está falando?", "Ignorar")) {
		case 1:
		mes("[Shena]\n Oh? bem, bem...\n Você não é a mais adorável garotinha?\n Olá, Querida.");
		next;
		if (Sex == SEX_MALE) {
			select("Desculpe-me, mas eu sou homem.");
			mes("[Shena]\n Por meus olhos estarem ficando ruims pela minha idade.\n Fica difícil para ver as diferenças...");
			next;
		}
		mes("[Shena]\n Eu estava apenas sobre monstros perto de Einbroch.\n Aparentemente, vocês novatos não conhecem muito como deveriam.");
		next;
		mes("[Shena]\n Se aventura é seu seu negócio, você deve saber contra o que está lutando.\n Você tem alguma dúvida sobre monstros das redondezas daqui, minha pequena?");
		next;
		if (Sex == SEX_MALE) {
			select("Eu não sou mulher!");
			mes("[Shena]\n Então querido, qual monstro você está interessado em ouvir sobre?");
			next;
		}
		while(true) {
			switch(select("Metalling", "Mineral", "Mineiros", "Fornalha Velha", "Terminar Conversa")) {
				case 1:
				mes("[Shena]\n Bom, os Metalings foram criados durante nos tempos em que os deuses mandavam sobre este mundo.");
				next;
				mes("[Shena]\n Eu não estou certo se sabe sobre isso ou não.\n Mas de acordo com o mito, Porings e Drops foram criados a partir da saliva de Odin.\n Eu acho que você não iria querer saber sobre o Poporing...");
				next;
				mes("[Shena]\n Metalings, na outra mão, foram criados de sangue de máquinas que nós acreditamos ser chamadas de 'Gigantes.'");
				next;
				mes("[Shena]\n Os Metalings são como essas gelatinas que vivem pulando eles pegam tudo que encontram no chão.");
				next;
				mes("[Shena]\n Se você matar um Metaling, você pode dropar um Jellopy Tamanho Família, Minério ou até mesmo Aço.\n Isso pode ser bom em se saber, não?");
				next;
				mes("[Shena]\n Há mais alguma coisa que deseja saber?");
				next;
				break;
				case 2:
				mes("[Shena]\n Você sabia que as estalactites e cristais das cavernas levam centenas e centenas de anos para se formarem?");
				next;
				mes("[Shena]\n Agora, se alguma coisa anda nascendo em centenas de anos só pode fazer sentido se tiver atualmente vivo.\n Agora monstros do minério são estalactites vivas.");
				next;
				mes("[Shena]\n Há rumores de que estão nascendo na caverna negra em algum ponto la dentro onde há influencias malignas muito forte sobre elas.");
				next;
				mes("[Shena]\n Minerais podem se defender, mas eles podem dropar Fragmentos de Cristais, Topázio e Emveretarcon se você derrotar um.\n Há sempre uma chance de eles derrubarem jóias raras, mas não tenho certeza.");
				next;
				mes("[Shena]\n Mais alguma coisa?");
				next;
				break;
				case 3:
				mes("[Shena]\n Mineiros são fantasmas de mineiros mortos que usam velhos e enferrujados carrinhos.\n Por alguma razão, eles não podem deixar esse mundo, então eles continuam vagando pelas minas.");
				next;
				mes("[Shena]\n Se você derrotar algum deles, poderá conseguir uma Picareta Velha, Lampião, Aço, Ferro, Carvão e Lanterna de Bolso.");
				next;
				mes("[Shena]\n Você quer perguntar mais algumas coisa sobre os monstros?");
				next;
				break;
				case 4:
				mes("[Shena]\n É somente uma maligna, Fornalha Velha comedora de homens.");
				next;
				switch(select("...Isso seria?", "H-horripilante!")) {
					case 1:
					mes("[Shena]\n Agora, você sabe a importância de reciclar e preservar nossos recursos naturais, certo?\n Agora, você me fara se sentir bem se recilcar esses pedaços de ferro dessas Fornalhas Velhas.");
					next;
					mes("[Shena]\n Fornalhas Velhas geralmente deixam Panelha Velha, Madeira Queimada, Ferro e Minério.\n Mas eventualmente podem peças interessantes como Ferro Enferrujado ou mesmo Galho Seco.");
					next;
					break;
					case 2:
					mes("[Shena]\n Criação divina, essa criatura é cruel e sem piedade, contudo um simbolo do mal puro do qual você jamais viu.");
					next;
					mes("[Shena]\n Ao contrário dos novos dispositivos, as Fornalhas Velhas foram feitas por Mestres-Ferreiros que, eu acho, criaram as almas delas também.\n Eles usaram-nas para produzir um benevolente calor.");
					next;
					mes("[Shena]\n Por anos serviram seus mestres com lealdade.\n Mas as tecnologias avançadas e elas ficaram obsoletas, elas foram descartadas como lixo velho.\n Isso as transforamaram em seres ^FF0000malígnos^000000.");
					next;
					mes("[Shena]\n Fornalhas Velhas geralmente deixam Panelha Velha, Madeira Queimada, Ferro e Minério.\n Mas eventualmente podem peças interessantes como Ferro Enferrujado ou mesmo Galho Seco.");
					next;
					break;
				}
				mes(" Então, ainda tem mais algo que quer que eu compartilhe com você?");
				next;
				break;
				case 5:
				mes("[Shena]\n Certo então, tenha um bom dia.");
				close;
			}
		}
		case 2:
		mes("[Shena]\n Você não viveu o suficiente para ser experiente como eu e não aprendeu nem um pouco sobre nosso vasto mundo.");
		close;
	}
}

// ------------------------------------------------------------------
einbech,148,242,5	script	Jung#ein	4_M_EINMAN,{
	mes("[Jung]\n Eu sou uma das poucas pessoas que viveram em ambas Einbech e Einbroch por um longo tempo.\n Então eu acho que eu sou um dos melhores guias desta área.");
	next;
	mes("[Jung]\n Diga, se você está pensando em entrar na caverna.\n Eu posso contar a você tudo que eu sei sobre os monstros daquele lugar de forma que você ficara melhor preparado.");
	next;
	switch(select("Claro, porque não?", "Não, mesmo")) {
		case 1:
		mes("[Jung]\n Deixe-me ver.\n Ah, os monstros que são únicos da Mina são Nuvem Tóxicas, Nuvem Venenosa, Porcellio e Obsidiana.\n Qual destes você deseja saber mais?");
		next;
		switch(select("Nuvem Tóxica e Nuvem Venenosa", "Porcellio", "Obsidiana")) {
			case 1:
			mes("[Jung]\n Você sabe, ninguem parece saber de onde as Nuvem Tóxicas e Nuvem Venenosa vieram se formar.\n Isto é, como eles apareceram fora de parte alguma quando Einbroch começou se industrializar.");
			next;
			mes("[Jung]\n Agora que eu penso sobre isto, não acretido que eles são monstros criados naturalmente.\n Eles tem este olha fixo de desespero e sofrimento e tendem a agir como eles precisassem matar seus inimigos.");
			next;
			mes("[Jung]\n Mas, você deveria ter mais cuidado!\n Nuvem Tóxica e a Nuvem Venenosa são monstros furtivos que podem planar silênciosamente pelo ar e o atacar antes de você reparar...");
			next;
			mes("[Jung]\n Você deve saber que Nuvem Tóxica tem propriedade de Fantasma e Nuvem Venenosa é venenoso.\n Ambos são médios de tamanho, monstros sem forma.");
			next;
			mes("[Jung]\n Ambos deixam Maçã, Poeira Poluente, Gás Tóxico, Poeira Venenosa, Bactérias, Pó de Bolor e Analgésico.");
			next;
			mes("[Jung]\n Isto é tudo por enquanto.\n Sinta-se livre para me perguntar se você tiver qualquer duvida sobre os monstros da Mina, tome cuidado.");
			close;
			case 2:
			mes("[Jung]\n Porcellio é um inseto que vive nas cavernas e bebe água gotejada das estalactites.\n É diferente do Ungoliant porque eles gostam de diferentes tipos de minerais e minérios.");
			next;
			mes("[Jung]\n Porcellio deixa Jubileu, Perna de Inseto, Célula Única, Líquido Fluorescente e algumas outras coisas que eu não consigo me lembrar.");
			next;
			mes("[Jung]\n Finalmente, Porcellio é um monstro da propriedade Terra.\n Isto é tudo que eu sei sobre ele.\n Mas se você deseja saber mais sobre alguns monstros da Mina, sinta-se livre para perguntar.");
			close;
			case 3:
			mes("[Jung]\n Você sabe sobre a crença de minerais subterrâneos que contém altas quantidades de energia realmente têm alma?\n Obsidiana é uma dessas rochas vivas.");
			next;
			mes("[Jung]\n Supostamente, apenas um pedaço de um Obsidiana em um Processador Jung tem bastante energia para iluminar um céu anoitecido.\n Infelizmente, é impossivel de capturar um vivo e os caçar não é tão fácil.");
			next;
			mes("[Jung]\n Obsidiana é um pequeno monstro sem forma que deixa Fragmento de Cristal Negro, Carvão, Elunium, Ferro e Aço.");
			next;
			mes("[Jung]\n Isto é tudo sobre Obsidiana.\n Se você tiver qualquer dúvida sobre outros monstros que vivem na Mina, sinta-se livre para me perguntar.");
			close;
		}
		case 2:
		mes("[Jung]\n Eu entendo se você estiver com tanta pressa.\n Apesar, se você for novo por aqui.\n Você deveria aprender tanto quanto você puder antes de entrar em qualquer calabouço.");
		next;
		mes("[Jung]\n Certo então, tome cuidado em suas aventuras, tudo bem?");
		close;
	}
}

// ------------------------------------------------------------------
einbech,148,246,5	script	Franz#ein	4_M_REPAIR,{
	mes("[Franz]\n Tão entediante, morrer de fome para conversar.\n A-alguém...");
	next;
	mes("[Franz]\n Hei, um viajante!\n Você esta planejando explorar a Mina ou os campos aos arredores daqui?\n Vamos conversar um pouco e talvez você aprenderá algo.");
	next;
	switch(select("Certo, tudo bem", "Não, obrigado")) {
		case 1:
		mes("[Franz]\n Ooh, você que ouvir sobre a criatura da Mina ou o que aconteceu na cidade recentemente?\n O que você gostaria de saber mais?");
		next;
		switch(select("Criatura da Mina", "Incidente da Cidade")) {
			case 1:
			mes("[Franz]\n A criatura que eu estou falando é Ungoliant, que também é chamado por aqui de Mestre das Cavernas.\n Dizem que ele vive na cavernas profundas onde ele guarda minérios raros e minerais com estranhos poderes.");
			next;
			mes("[Franz]\n No começo eu achava que ele era apenas um velho conto de fadas.\n Mas ele realmente começou a aparecer novamente cerca de dez anos atrás quando os desmoronamentos dos túneis começaram a acontecer.");
			next;
			mes("[Franz]\n Com as aparições de Ungoliant aumentando, mais e mais descoronamentos dos túneis aconteceram.\n Eu acho que os mineradores indevidamente entraram no território dele.");
			next;
			mes("[Franz]\n De acordo com a lenda, antigos gigantes entraram na mina para roubar carvão dos humanos.\n Mas eles fizeram muito barulho enquanto estavam escavando e despertaram Ungoliant.");
			next;
			mes("[Franz]\n Quandos os mineradores foram trabalhar na manhã seguinte, eles acharam os corpos desses gigantes todos ensangüentados.\n Depois disso, as pessoas ficaram com medo do que Ungoliant pode fazer com qualquer um que entrar na mina.");
			next;
			mes("[Franz]\n Agora, um aventureiro que conseguiu matar um Ungoliant me contou que ele deixa Mandíbula de Formiga, Casco Arco-Íris, Líquido Fluorescente e Zircônio.");
			close;
			case 2:
			mes("[Franz]\n Em Einbroch, havia uma moda de ter ursinho de pelúcia.\n No entanto, uma série de misteriosos acidentes e assassinatos onde famílias inteiras foram mortas aconteceram.");
			next;
			mes("[Franz]\n Acontece que todas as famílias que foram assassinadas tinham comprado um desses ursinhos de pelúcia.\n Havia certos rumores que esses ursinhos de pelúcia ganhavam vida.");
			next;
			mes("[Franz]\n Depois de uma investigação, as autoridades descobriram que todos os comerciantes que vendiam esses ursos tinham os comprados de um mesmo atacadista, um estranho que ninguém conhecia.");
			next;
			mes("[Franz]\n Considerando que esses ursinhos de pelúcia, claramente não foram feitos para serem, brinquedos inofensivos, soldados foram enviados para assegurar que todos os ursinhos de pelúcias fossem jogados para fora da cidade.");
			next;
			mes("[Franz]\n Mas assim que os ursinhos de pelúcia foram expulsos da cidade, eles ganharam vida e começaram a se revoltar!\n Esta é uma prova clara que esses ursinhos são controlados pelas forças do mal.");
			next;
			mes("[Franz]\n Agora esses ursinhos agressivos estão espalhados por todo lugar e o governo os classficou como monstros.\n Mate com dano extremo!");
			next;
			mes("[Franz]\n De acordo com os aventureiros que enfrentaram esses ursos, eles são monstros pequenos, de propriedade neutra que deixam Mel, Prego Enferrujado, Biscoito de Gengibre e Martelo de Oridecon.");
			next;
			mes("[Franz]\n Isto é tudo que eu sei sobre eles.\n Tome cuidado com esses ursinhos se você sair para explorar, certo?\n Eles podem ser fofinhos, mas eles são conhecidos por serem extremamente crueis!");
			close;
		}
		case 2:
		mes("[Franz]\n Oh, certo.\n Você esta ocupado e tem coisas para fazer, eu entendo.\n Você provavelmente tem algum lugar para ir agora mesmo.\n Certo. Vá.");
		next;
		mes("[Franz]\n Eu...\n Eu tenho um material no qual eu deveria estar trabalhando.\n Sim. Ando muito ocupado.");
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ein_in01,279,92,3	script	Senhorita#ein	4_M_EINMAN2,{
	mes("[Senhorita]\n A maioria dos homens de Einbech são brutos, primitivos e machistas!\n Eles me enojam!");
	next;
	mes("[Senhorita]\n Eu quero dizer que, não há nada de bom neles!\n Eles são selvagens, violentos, cabeças ocas e ignorantes.\n Eles resolvem todos os seus problemas na força e eles são assim... mente fechada!");
	next;
	mes("[Senhorita]\n Como eles não podem saber que as mulheres querem homens suaves, sensíveis, com quem possam compartilhar seus sentimentos e beber um chá de chamille sobre uma toalha tricotada?");
	close;
}

// ------------------------------------------------------------------
ein_in01,277,95,7	script	Ryan#ein	4_M_EINMAN,{
	mes("[Ryan]\n Oooh...");
	next;
	mes("[Ryan]\n Oooh...\n Mamãe.");
	next;
	mes("[Ryan]\n Oooh...\n Mamãe.\n Você é assim...");
	next;
	mes("[Ryan]\n Oooh...\n Mamãe.\n Você é assim...\n ^FF0000Quente^000000!");
	next;
	mes("[Ryan]\n Por quê você não tirar essas roupas pesadas, incômodas?\n Eu vou comprar tudo que você desejar, estou aqui! Venha.");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n N-no...!\n I-I-I-I...\n ^666666Este é o sujeito mais sombrio que eu já vi!^000000");
	next;
	mes("[Ryan]\n Hm? Não...?\n Absolutamente não?\n Você tem certeza?\n Tudo bem, tudo bem.\n Me desculpe, eu peço desculpas.\n Eu esta fora de mim.");
	next;
	mes("[Ryan]\n ...\n Ou eu estava?\n Bwahahahaha!");
	next;
	mes("[" + strcharinfo(PC_NAME) + "]\n Es-este sujeito deve estar bêbado, com a mente drogada.");
	close;
}

// ------------------------------------------------------------------
ein_in01,281,85,3	script	Bêbado#ein	4_M_DIEMAN,{
	mes("[Bêbado]\n ...^333333*Hiccup*^000000...\n ^333333*Hiccup*^000000...\n ^333333*Yawn*^000000.....\n .................\n ..^333333*Hiccup*^000000.....\n ^333333*Hiccup*^000000..");
	close;
}
