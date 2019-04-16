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
| - Copyright: Spell Master (08/05/2018)                            |
| - Info: Aprendizado das habilidades para Gaturno                  |
|   Chutar Areia (TF_SPRINKLESAND)                                  |
|   Recuar (TF_BACKSLIDING)                                         |
|   Procurar Pedras (TF_PICKSTONE)                                  |
|   Arremeçar Pedras (TF_THROWSTONE)                                |
\*-----------------------------------------------------------------*/

moc_prydb1,154,128,4	script	Alcouskou#thiefskill	2_M_THIEFMASTER,{
	if (BaseClass == Job_Thief) {
		mes("[Alcouskou]\n"
			"Nesta vida se encontra muitas coisas.\n"
			"Às vezes você pode se perguntar por que dar valor as coisas materiais.\n"
			"Você pode considerar esse conhecimento inútil, mas não é deixe-me explicar.");
		next;
		switch (select("Chutar Areia", "Recuar", "Procurar Pedras", "Arremessar Pedra", "Voltarei mais tarde")) {
			case 1: // Chutar Areia
			if (getskilllv("TF_SPRINKLESAND")) {
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Eu já te ensinei a habilidade \"Chutar Areia\".\n"
					"Espero que esta habilidade ajude no futuro.");
				close;
			} else if (!thiefskill) {
				if ((countitem(Fine_Grit) > 4) && ((JobLevel > 24) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
					mes("[Alcouskou]\n"
						"Felizmente, você trouxe areia com você.\n"
						"É muito importante que um Gatuno tenha uma pequena quantidade de areia para certas ocasiões.\n"
						"A maioria das pessoas não percebe o valor de tal substância.");
					next;
					mes("[Alcouskou]\n"
						"No caso de você encontrar um poderoso monstro em um calabouço, tendo areia.\n"
						"Você poderia usá-la para cegar o monstro e poder fugir.\n"
						"Você deve carregar sempre uma sacola com areia.");
					next;
					mes("[Alcouskou]\n"
						"Você não espera que eu faça isso para você não é?\n"
						"Você deve ser muito preguiçoso!\n"
						"Muito bem, encontre o RuRumuni.\n"
						"Ele fará para você uma sacola de couro resistente.");
					next;
					mes("[Alcouskou]\n"
						"Vou estar me preparando para o seu retorno.\n"
						"Encontre o RuRumuni na parte oeste de Payon.\n"
						"Eu ouvi dizer que ele está morando por lá.");
					delitem(Fine_Grit, 5);
					thiefskill = 1;
					close;
				} else {
					mes("[Alcouskou]\n"
						"A parte mais importante para ser um bom Gatuno é o esconderijo.\n"
						"Um Gatuno nunca deve ser visto ou escutado, a menos que ele queira.\n"
						"Alguns consideram isso uma forma covarde de lutar, mas eu penso diferente.");
					next;
					mes("[Alcouskou]\n"
						"A forma como eu vejo, é que nós vivemos em um mundo onde os mais aptos e espertos vencem.\n"
						"Eles podem falar mal de mim por usar essa habilidade especial...\n"
						"O que é essa habilidade?\n"
						"Esta é a habilidade de Chutar Areia.");
					next;
					mes("[Alcouskou]\n"
						"Se você puder jogar ou chutar areia aos olhos de seu oponente,\n"
						"Não só irá diminuir a sua defesa mas também a capacidade para atacá-lo.\n"
						"É tão eficaz, que você pode faze-los chocar um contra o outro.");
					next;
					mes("[Alcouskou]\n"
						"Bem, temos que sobreviver também.\n"
						"Somos nós ou eles...\n"
						"Eu acho que é importante e vital preparar um pouco de areia.\n"
						"O que você acha?\n"
						"Se você gostar traga-me cinco Torrões de areia fina.");
					next;
					mes("[Alcouskou]\n"
						"Tenho certeza que você está ansioso para aprender esta habilidade.\n"
						"Mas você deve primeiro conseguir os cinco Torrões de Areia Fina\n"
						"Até que você tenha ajuntado,\n"
						"Eu não poderei ensinar-lhe esta habilidade.\n"
						"Não fique desapontado, tenha pressa e vá atrás.");
					next;
					mes("[Alcouskou]\n"
						"Ah, quase esqueci!\n"
						"Se você quer aprender esta habilidade especial.\n"
						"Tenha certeza de que você está suficientemente preparado para usá-la adequadamente.\n"
						"Isto significa que você deve estar no nível 25 de Classe.");
					close;
				}
			} else if (thiefskill == 1) {
				mes("[Alcouskou]\n"
					"Vá para Oeste de payon e encontre RuRumuni.\n"
					"Ele vai fazer uma bolsa durável para sua areia.");
				next;
				mes("[Alcouskou]\n"
					"Vou levar estes cinco Torrões de Areia Fina e prepará-los para você enquanto espero.");
				close;
			} else if (thiefskill == 2 && countitem(Leather_Bag_Of_Infinity)) {
				mes("[Alcouskou]\n"
					"Ok! òtimo!\n"
					"Uma bolsa bem feita!\n"
					"Pequena e fácil de transportar, com espaço suficiente para areia. \n"
					"Esse é um perfeito ^3355FFAlforje de Couro do Infinito^000000,\n"
					"para você usar com esta habilidade.");
				next;
				mes("[Alcouskou]\n"
					"Bem, vamos testar sua habilidade, experimente!!");
				next;
				mes("[Alcouskou]\n"
					"Ahhh, cuidado com meus olhos!!\n"
					"^5533FF*Jogando areia*^000000");
				next;
				mes("[Alcouskou]\n"
					"^5533FF*Jogando areia*^000000");
				next;
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Você é um Gatuno por natureza!!!\n"
					"Excelente!\n"
					"Eu acho que não tem nada mais que eu possa lhe ensinar.\n"
					"Espero que esta habilidade ajude-o no futuro.");
				delitem(Leather_Bag_Of_Infinity, 1);
				skill("TF_SPRINKLESAND", 1, 0);
				thiefskill = 0;
				close;
			} else {
				mes("[Alcouskou]\n"
					"Ei onde você colocou o ^3355FFAlforje de Couro do Infinito^000000?");
				close;
			}
			case 2: // Recuar
			if (getskilllv("TF_BACKSLIDING")) {
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Eu já te ensinei a habilidade \"Recuar\".\n"
					"Espero que esta habilidade ajude no futuro.");
				close;
			} else {
				if ((countitem(Grasshoppers_Leg) > 19) && ((JobLevel > 34) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
					mes("[Alcouskou]\n"
						"Ok! Vamos praticar!");
					next;
					mes("[Alcouskou]\n"
						"Suuu Suuu uk..");
					next;
					mes("[Alcouskou]\n"
						"Suuuuk...");
					next;
					mes("[Alcouskou]\n"
						"Suk.. Suuuk...");
					next;
					mes("[Alcouskou]\n"
						"Ótimo! A este nível, tenho certeza que você pode aprimorar suas próprias habilidades.");
					delitem(Grasshoppers_Leg, 20);
					skill("TF_BACKSLIDING",1, 0);
					close;
				} else {
					mes("[Alcouskou]\n"
						"Normalmente, gosto de pensar sobre o ataque e dano.\n"
						"Mas é importante lembrar que fugir é tão importante como a atacar!\n"
						"Nós Gatunos nos orgulhamos de nossa");
					next;
					mes("[Alcouskou]\n"
						"velocidade e eficáz esquiva.\n"
						"Mas estou certo que às vezes você notou que ao lutar.\n"
						"Apesar do fato de que esquivamos com maior facilidade do que os outros.\n"
						"Se formos atingidos uma vez, teremos um sério problema.");
					next;
					mes("[Alcouskou]\n"
						"É verdade que, às vezes, pode se ver os outros em desvantagem por nos esquivarmos facilmente de seus ataques.\n"
						"Você deve se lembrar que se formos atacados por muitos.\n"
						"Nós podemos não ter espaço para esquivar.");
					next;
					mes("[Alcouskou]\n"
						"Você deve tomar uma decisão rápida e fugir.\n"
						"A maioria iria fugir imediatamente, mas não é preciso.\n"
						"Mesmo se não vemos uma abertura,\n"
						"nossa habilidade nos permitir escapar de uma situação grave.");
					next;
					mes("[Alcouskou]\n"
						"Esta habilidade usa nossas energias permitindo que escapemos despercebido.\n"
						"Em um curto espaço de tempo podemos usar esta habilidade,\n"
						"para nos distanciar de nossos oponentes.\n"
						"Esta habilidade requer infinitas horas de pratica para dominá-la.");
					next;
					mes("[Alcouskou]\n"
						"Se você deseja aprender, você vai precisar preparar alguns itens.\n"
						"^3355FF20 Perna de Gafanhoto^000000 para começar seu treinamento.");
					next;
					mes("[Alcouskou]\n"
						"Ah, a propósito...\n"
						"Você precisa ter alguma base de conhecimento para dominar corretamente esta habilidade.\n"
						"Isso significa que você precisa pelo menos ter o nível de Classe ^3355FF35^000000.\n"
						"Se não, eu não poderei te ensinar.");
					close;
				}
			}
			case 3: // Procurar Pedras
			if (getskilllv("TF_PICKSTONE")) {
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Eu já te ensinei a habilidade \"Procurar Pedras\".\n"
					"Espero que esta habilidade ajude no futuro.");
				close;
			} else {
				if ((countitem(Zargon) && countitem(Bears_Foot) && countitem(Spawn) > 4) && ((JobLevel > 19) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
					mes("[Alcouskou]\n"
						"Uau, você já está pronto?\n"
						"Ótimo, eu percebo a sua determinação.\n"
						"Seu zelo é sincero.\n"
						"Ok, Vamos começar a sua formação?\n"
						"Arremeçar Pedra....\n"
						"Encontre uma pedra lisa com um bom peso.");
					next;
					mes("[Alcouskou]\n"
						"Escolher a pedra certa é muito importante para ser bem sucedido.\n"
						"Bem, eu poderia dizer-lhe um milhão de vezes, mas é melhor ver por si.\n"
						"Ok, por que não tenta essa habilidade aqui fora onde eu possa vê-lo.");
					next;
					mes("^3355FF-Shweeput!-^000000");
					next;
					mes("^3355FF-Cheeeguk!-^000000");
					next;
					mes("^3355FF-Shyaaaakkk!-^000000");
					next;
					mes("[Alcouskou]\n"
						"Muito Bom.\n"
						"Você parece dominar a habilidade facilmente.\n"
						"Você pode melhora-la começando a praticar em seu próprio dia-a-dia.\n"
						"Espero que ela ajude você no futuro.\n"
						"....Espero ver você em breve");
					delitem(Zargon, 1);
					delitem(Bears_Foot, 1);
					delitem(Spawn, 5);
					skill("TF_PICKSTONE", 1, 0);
					close;
				} else {
					mes("[Alcouskou]\n"
						"Os habilidosos e experientes membros da nossa guilda são geralmente muito úteis!\n"
						"Eles podem pegar uma pequena pedra pela estrada.\n"
						"E usá-la para jogar em um oponente com precisão e rapidez de uma certa distância.");
					next;
					mes("[Alcouskou]\n"
						"Eles perceberam que é um desperdício não ensinar esta habilidade aos outros.\n"
						"Então eles fundaram um grupo para treinar os outros...\n"
						"Foi assim que ^3355FFProcurar Pedras^000000 e ^3355FFArremessar Pedra^000000 vieram a se tonar habilidades.");
					next;
					mes("[Alcouskou]\n"
						"É útil ser capaz de encontrar uma pedra em qualquer lugar e ter a capacidade de atirá-la em um inimigo distante.\n"
						"Uma habilidade muito valiosa, de fato.\n"
						"Sem lhe custar zenys, você pode ter essa habilidade à sua disposição.");
					next;
					mes("[Alcouskou]\n"
						"Eu realmente acho isso uma grande habilidade.\n"
						"O que você acha?\n"
						".....Hah Hah Hah.....");
					next;
					mes("[Alcouskou]\n"
						"^3355FFProcurar Pedras!^000000 pode ser usado em praticamente qualquer local.\n"
						"Pegando pedras lizas e com peso adequado do chão.");
					next;
					mes("[Alcouskou]\n"
						"A pequena quantidade de treinamento necessário exige que você se dedique...\n"
						"Vamos primeiro começar a praticar como pegar uma ^3355FFPata de Urso^000000,\n"
						"para familiarizar com esta ação.");
					next;
					mes("[Alcouskou]\n"
						"E em vez de uma pedra, tente pegar um ^3355FFZargônio^000000!\n"
						"Isso seria muito pouco?\n"
						"Vamos adicionar^3355FF5 Ovas de Sapo^000000!!\n"
						"Mostre-me sua habilidade!\n"
						"Reúna esses itens, da forma que achar mais vantajosa.");
					close;
				}
			}
			case 4: // Arremessar Pedra
			if (getskilllv("TF_THROWSTONE")) {
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Eu já te ensinei a habilidade \"Arremessar Pedra\".\n"
					"Espero que esta habilidade ajude no futuro.");
				close;
			} else {
				if ((countitem(Garlet) > 1) && (countitem(Scell) > 1) && ((JobLevel > 14) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
					mes("[Alcouskou]\n"
						"Opa! Você já reuniu os itens!\n"
						"Muito bem, você quer começar?\n"
						"Prepare os itens que você recolheu.");
					next;
					mes("^3355FF-Shyuuk!-^000000");
					next;
					mes("^3355FF-Shyuuuk Tuk..-^000000");
					next;
					mes("^3355FF-Shyupattt!! Tauk!!-^000000");
					next;
					mes("[Alcouskou]\n"
						"Na mosca...!!\n"
						"Isso foi excelente!\n"
						"Você sabe que tem poder e habilidade suficientes.");
					next;
					mes("[Alcouskou]\n"
						"Ok, isso é tudo.\n"
						"A forma com que vai usar essa habilidade no futuro é com você.\n"
						"Desejo-lhe sorte!");
					delitem(Garlet, 2);
					delitem(Scell, 2);
					skill("TF_THROWSTONE", 1, 0);
					close;
				} else {
					mes("[Alcouskou]\n"
						"Os habilidosos e experientes membros da nossa guilda são geralmente muito úteis!\n"
						"Eles podem pegar uma pequena pedra pela estrada e usá-la para jogar em um oponente.\n"
						"Com precisão e rapidez de uma certa distância.");
					next;
					mes("[Alcouskou]\n"
						"Eles perceberam que é um desperdício não ensinar esta habilidade aos outros.\n"
						"Então eles fundaram um grupo para treinar os outros...\n"
						"Foi assim que ^3355FFProcurar Pedras^000000 e ^3355FFArremessar Pedra^000000 vieram a se tonar habilidades.");
					next;
					mes("[Alcouskou]\n"
						"É útil ser capaz de encontrar uma pedra em qualquer lugar e ter a capacidade de atirá-la em um inimigo distante.\n"
						"Uma habilidade muito valiosa, de fato.\n"
						"Sem lhe custar zenys, você pode ter essa habilidade à sua disposição.");
					next;
					mes("[Alcouskou]\n"
						"Eu realmente acho isso uma grande habilidade.\n"
						"O que você acha?\n"
						".....Hah Hah Hah.....");
					next;
					mes("[Alcouskou]\n"
						"^3355FFArremessar Pedra!!^000000\n"
						"Esta habilidade pode ser usada a qualquer hora e não requer qualquer dinheiro extra.\n"
						"Se você souber escolher as pedras adequadas...\n"
						"Se você não sabe como escolher.");
					next;
					mes("[Alcouskou]\n"
						"pedras, você sempre pode comprá-las.\n"
						"E se você for capaz escolher pedras, pode ser muito rentável para você.\n"
						"O que você acha?\n"
						"Você gosta da idéia?");
					next;
					mes("[Alcouskou]\n"
						"Se você deseja dominar essa habilidade, você tem que treinar um pouco.\n"
						"O treinamento também exige algum itens que não vão ser fáceis de encontrar...\n"
						"Mas é claro, eu tenho certeza que não é impossível.");
					next;
					mes("[Alcouskou]\n"
						"Você vai precisar de duas ^3355FFGarleta^000000 e dois ^3355FFScell^000000 para começar.\n"
						"Certifique-se de que eles são semelhantes a pedras e capazes de serem lançadas.\n"
						"Quando você reunir esses itens, eu vou ficar feliz em lhe ensinar.");
					close;
				}
			}
			case 5: // Voltarei mais tarde
			mes("[Alcouskou]\n"
				"Parece que você não é muito experiente...\n"
				"Podemos precisar de mais algum tempo para aceita-lo.");
			close;
		}
	} else {
		mes("[Alcouskou]\n"
			"A maioria dos Gatunos e Assassinos tem as habilidades básicas para se dar bem em suas missões.\n"
			"No entanto, as habilidades que eu posso ensinar não podem ser aprendidos em qualquer outro lugar.");
		next;
		mes("[Alcouskou]\n"
			"Se você decidir tornar-se um Gatuno ou Assassino.\n"
			"Ou conhecer alguém que é, venha a mim ou traga-os até mim.\n"
			"Estas novas técnicas devem ser ensinadas a todos os que querem aprender.");
		close;
	}
}

// ------------------------------------------------------------------
payon,91,77,3	script	Bolseiro#thiefskill	4W_M_03,{
	mes("[RuRumuni]\n"
		"Eu sou um comerciante humilde aqui em Payon.\n"
		"Eu compro couro e peles de animais trazidos por caçadores e faço Bolsas de Couro para vender.\n"
		"Eu cresci trabalhando com couros e sou muito bom nisso.");
	if (BaseClass == Job_Thief && thiefskill) {
		next;
		if ((countitem(Cactus_Needle) > 0) && (countitem(Earthworm_Peeling) > 0) && (countitem(Spiderweb) > 0)) {
			mes("[RuRumuni]\n"
				"Ahhh... Você veio querendo uma Bolsa de Couro.\n"
				"Muito bom, muito bom.\n"
				"Vou fazê-la imediatamente se você esperar um pouco.\n"
				"TuTak TuTak Shyuku Shyuku Shyuku\n"
				".......");
			next;
			mes("[RuRumuni]\n"
				"Ok, está feito.\n"
				"Aproveite esta Bolsa de Couro.\n"
				"Leve-a para a guilda dos Gatunos.\n"
				"Se você levá-la até Alcouskou, ele vai ensinar-lhe a habilidade que você deseja aprender.");
			delitem(Cactus_Needle, 1);
			delitem(Earthworm_Peeling, 1);
			delitem(Spiderweb, 1);
			thiefskill = 2;
			getitem(Leather_Bag_Of_Infinity, 1);
		} else {
			mes("[RuRumuni]\n"
				"Encontre Alcouskou na guilda dos Gatunos para fazer um pedido de uma Bolsa de Couro do Infinito.\n"
				"Você deve saber que\n"
				"leva muito tempo e habilidade para confexionar.\n"
				"A fim de fazer tal item, você deve fornecer-me os materiais.");
			next;
			mes("[RuRumuni]\n"
				"Os materiais são\n"
				"^3355FF' Pele de Minhoca '^000000\n"
				"^3355FF' Teia de Aranha '^000000\n"
				"^3355FF' Espinho de Cacto '^000000\n"
				"Eu preciso de um de cada.");
		}
	}
	close;
}
