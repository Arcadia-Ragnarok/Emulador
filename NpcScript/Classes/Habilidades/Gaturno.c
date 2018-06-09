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
|   Arreme�ar Pedras (TF_THROWSTONE)                                |
\*-----------------------------------------------------------------*/

moc_prydb1,154,128,4	script	Alcouskou#thiefskill	2_M_THIEFMASTER,{
	if (BaseClass == Job_Thief) {
		mes("[Alcouskou]\n"
			"Nesta vida se encontra muitas coisas.\n"
			"�s vezes voc� pode se perguntar por que dar valor as coisas materiais.\n"
			"Voc� pode considerar esse conhecimento in�til, mas n�o � deixe-me explicar.");
		next;
		switch (select("Chutar Areia", "Recuar", "Procurar Pedras", "Arremessar Pedra", "Voltarei mais tarde")) {
			case 1: // Chutar Areia
			if (getskilllv("TF_SPRINKLESAND")) {
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Eu j� te ensinei a habilidade \"Chutar Areia\".\n"
					"Espero que esta habilidade ajude no futuro.");
				close;
			} else if (!thiefskill) {
				if ((countitem(Fine_Grit) > 4) && ((JobLevel > 24) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
					mes("[Alcouskou]\n"
						"Felizmente, voc� trouxe areia com voc�.\n"
						"� muito importante que um Gatuno tenha uma pequena quantidade de areia para certas ocasi�es.\n"
						"A maioria das pessoas n�o percebe o valor de tal subst�ncia.");
					next;
					mes("[Alcouskou]\n"
						"No caso de voc� encontrar um poderoso monstro em um calabou�o, tendo areia.\n"
						"Voc� poderia us�-la para cegar o monstro e poder fugir.\n"
						"Voc� deve carregar sempre uma sacola com areia.");
					next;
					mes("[Alcouskou]\n"
						"Voc� n�o espera que eu fa�a isso para voc� n�o �?\n"
						"Voc� deve ser muito pregui�oso!\n"
						"Muito bem, encontre o RuRumuni.\n"
						"Ele far� para voc� uma sacola de couro resistente.");
					next;
					mes("[Alcouskou]\n"
						"Vou estar me preparando para o seu retorno.\n"
						"Encontre o RuRumuni na parte oeste de Payon.\n"
						"Eu ouvi dizer que ele est� morando por l�.");
					delitem(Fine_Grit, 5);
					thiefskill = 1;
					close;
				} else {
					mes("[Alcouskou]\n"
						"A parte mais importante para ser um bom Gatuno � o esconderijo.\n"
						"Um Gatuno nunca deve ser visto ou escutado, a menos que ele queira.\n"
						"Alguns consideram isso uma forma covarde de lutar, mas eu penso diferente.");
					next;
					mes("[Alcouskou]\n"
						"A forma como eu vejo, � que n�s vivemos em um mundo onde os mais aptos e espertos vencem.\n"
						"Eles podem falar mal de mim por usar essa habilidade especial...\n"
						"O que � essa habilidade?\n"
						"Esta � a habilidade de Chutar Areia.");
					next;
					mes("[Alcouskou]\n"
						"Se voc� puder jogar ou chutar areia aos olhos de seu oponente,\n"
						"N�o s� ir� diminuir a sua defesa mas tamb�m a capacidade para atac�-lo.\n"
						"� t�o eficaz, que voc� pode faze-los chocar um contra o outro.");
					next;
					mes("[Alcouskou]\n"
						"Bem, temos que sobreviver tamb�m.\n"
						"Somos n�s ou eles...\n"
						"Eu acho que � importante e vital preparar um pouco de areia.\n"
						"O que voc� acha?\n"
						"Se voc� gostar traga-me cinco Torr�es de areia fina.");
					next;
					mes("[Alcouskou]\n"
						"Tenho certeza que voc� est� ansioso para aprender esta habilidade.\n"
						"Mas voc� deve primeiro conseguir os cinco Torr�es de Areia Fina\n"
						"At� que voc� tenha ajuntado,\n"
						"Eu n�o poderei ensinar-lhe esta habilidade.\n"
						"N�o fique desapontado, tenha pressa e v� atr�s.");
					next;
					mes("[Alcouskou]\n"
						"Ah, quase esqueci!\n"
						"Se voc� quer aprender esta habilidade especial.\n"
						"Tenha certeza de que voc� est� suficientemente preparado para us�-la adequadamente.\n"
						"Isto significa que voc� deve estar no n�vel 25 de Classe.");
					close;
				}
			} else if (thiefskill == 1) {
				mes("[Alcouskou]\n"
					"V� para Oeste de payon e encontre RuRumuni.\n"
					"Ele vai fazer uma bolsa dur�vel para sua areia.");
				next;
				mes("[Alcouskou]\n"
					"Vou levar estes cinco Torr�es de Areia Fina e prepar�-los para voc� enquanto espero.");
				close;
			} else if (thiefskill == 2 && countitem(Leather_Bag_Of_Infinity)) {
				mes("[Alcouskou]\n"
					"Ok! �timo!\n"
					"Uma bolsa bem feita!\n"
					"Pequena e f�cil de transportar, com espa�o suficiente para areia. \n"
					"Esse � um perfeito ^3355FFAlforje de Couro do Infinito^000000,\n"
					"para voc� usar com esta habilidade.");
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
					"Voc� � um Gatuno por natureza!!!\n"
					"Excelente!\n"
					"Eu acho que n�o tem nada mais que eu possa lhe ensinar.\n"
					"Espero que esta habilidade ajude-o no futuro.");
				delitem(Leather_Bag_Of_Infinity, 1);
				skill("TF_SPRINKLESAND", 1, 0);
				thiefskill = 0;
				close;
			} else {
				mes("[Alcouskou]\n"
					"Ei onde voc� colocou o ^3355FFAlforje de Couro do Infinito^000000?");
				close;
			}
			case 2: // Recuar
			if (getskilllv("TF_BACKSLIDING")) {
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Eu j� te ensinei a habilidade \"Recuar\".\n"
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
						"�timo! A este n�vel, tenho certeza que voc� pode aprimorar suas pr�prias habilidades.");
					delitem(Grasshoppers_Leg, 20);
					skill("TF_BACKSLIDING",1, 0);
					close;
				} else {
					mes("[Alcouskou]\n"
						"Normalmente, gosto de pensar sobre o ataque e dano.\n"
						"Mas � importante lembrar que fugir � t�o importante como a atacar!\n"
						"N�s Gatunos nos orgulhamos de nossa");
					next;
					mes("[Alcouskou]\n"
						"velocidade e efic�z esquiva.\n"
						"Mas estou certo que �s vezes voc� notou que ao lutar.\n"
						"Apesar do fato de que esquivamos com maior facilidade do que os outros.\n"
						"Se formos atingidos uma vez, teremos um s�rio problema.");
					next;
					mes("[Alcouskou]\n"
						"� verdade que, �s vezes, pode se ver os outros em desvantagem por nos esquivarmos facilmente de seus ataques.\n"
						"Voc� deve se lembrar que se formos atacados por muitos.\n"
						"N�s podemos n�o ter espa�o para esquivar.");
					next;
					mes("[Alcouskou]\n"
						"Voc� deve tomar uma decis�o r�pida e fugir.\n"
						"A maioria iria fugir imediatamente, mas n�o � preciso.\n"
						"Mesmo se n�o vemos uma abertura,\n"
						"nossa habilidade nos permitir escapar de uma situa��o grave.");
					next;
					mes("[Alcouskou]\n"
						"Esta habilidade usa nossas energias permitindo que escapemos despercebido.\n"
						"Em um curto espa�o de tempo podemos usar esta habilidade,\n"
						"para nos distanciar de nossos oponentes.\n"
						"Esta habilidade requer infinitas horas de pratica para domin�-la.");
					next;
					mes("[Alcouskou]\n"
						"Se voc� deseja aprender, voc� vai precisar preparar alguns itens.\n"
						"^3355FF20 Perna de Gafanhoto^000000 para come�ar seu treinamento.");
					next;
					mes("[Alcouskou]\n"
						"Ah, a prop�sito...\n"
						"Voc� precisa ter alguma base de conhecimento para dominar corretamente esta habilidade.\n"
						"Isso significa que voc� precisa pelo menos ter o n�vel de Classe ^3355FF35^000000.\n"
						"Se n�o, eu n�o poderei te ensinar.");
					close;
				}
			}
			case 3: // Procurar Pedras
			if (getskilllv("TF_PICKSTONE")) {
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Eu j� te ensinei a habilidade \"Procurar Pedras\".\n"
					"Espero que esta habilidade ajude no futuro.");
				close;
			} else {
				if ((countitem(Zargon) && countitem(Bears_Foot) && countitem(Spawn) > 4) && ((JobLevel > 19) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
					mes("[Alcouskou]\n"
						"Uau, voc� j� est� pronto?\n"
						"�timo, eu percebo a sua determina��o.\n"
						"Seu zelo � sincero.\n"
						"Ok, Vamos come�ar a sua forma��o?\n"
						"Arreme�ar Pedra....\n"
						"Encontre uma pedra lisa com um bom peso.");
					next;
					mes("[Alcouskou]\n"
						"Escolher a pedra certa � muito importante para ser bem sucedido.\n"
						"Bem, eu poderia dizer-lhe um milh�o de vezes, mas � melhor ver por si.\n"
						"Ok, por que n�o tenta essa habilidade aqui fora onde eu possa v�-lo.");
					next;
					mes("^3355FF-Shweeput!-^000000");
					next;
					mes("^3355FF-Cheeeguk!-^000000");
					next;
					mes("^3355FF-Shyaaaakkk!-^000000");
					next;
					mes("[Alcouskou]\n"
						"Muito Bom.\n"
						"Voc� parece dominar a habilidade facilmente.\n"
						"Voc� pode melhora-la come�ando a praticar em seu pr�prio dia-a-dia.\n"
						"Espero que ela ajude voc� no futuro.\n"
						"....Espero ver voc� em breve");
					delitem(Zargon, 1);
					delitem(Bears_Foot, 1);
					delitem(Spawn, 5);
					skill("TF_PICKSTONE", 1, 0);
					close;
				} else {
					mes("[Alcouskou]\n"
						"Os habilidosos e experientes membros da nossa guilda s�o geralmente muito �teis!\n"
						"Eles podem pegar uma pequena pedra pela estrada.\n"
						"E us�-la para jogar em um oponente com precis�o e rapidez de uma certa dist�ncia.");
					next;
					mes("[Alcouskou]\n"
						"Eles perceberam que � um desperd�cio n�o ensinar esta habilidade aos outros.\n"
						"Ent�o eles fundaram um grupo para treinar os outros...\n"
						"Foi assim que ^3355FFProcurar Pedras^000000 e ^3355FFArremessar Pedra^000000 vieram a se tonar habilidades.");
					next;
					mes("[Alcouskou]\n"
						"� �til ser capaz de encontrar uma pedra em qualquer lugar e ter a capacidade de atir�-la em um inimigo distante.\n"
						"Uma habilidade muito valiosa, de fato.\n"
						"Sem lhe custar zenys, voc� pode ter essa habilidade � sua disposi��o.");
					next;
					mes("[Alcouskou]\n"
						"Eu realmente acho isso uma grande habilidade.\n"
						"O que voc� acha?\n"
						".....Hah Hah Hah.....");
					next;
					mes("[Alcouskou]\n"
						"^3355FFProcurar Pedras!^000000 pode ser usado em praticamente qualquer local.\n"
						"Pegando pedras lizas e com peso adequado do ch�o.");
					next;
					mes("[Alcouskou]\n"
						"A pequena quantidade de treinamento necess�rio exige que voc� se dedique...\n"
						"Vamos primeiro come�ar a praticar como pegar uma ^3355FFPata de Urso^000000,\n"
						"para familiarizar com esta a��o.");
					next;
					mes("[Alcouskou]\n"
						"E em vez de uma pedra, tente pegar um ^3355FFZarg�nio^000000!\n"
						"Isso seria muito pouco?\n"
						"Vamos adicionar^3355FF5 Ovas de Sapo^000000!!\n"
						"Mostre-me sua habilidade!\n"
						"Re�na esses itens, da forma que achar mais vantajosa.");
					close;
				}
			}
			case 4: // Arremessar Pedra
			if (getskilllv("TF_THROWSTONE")) {
				mes("[Alcouskou]\n"
					"Hoo Hoo Hoo...\n"
					"Eu j� te ensinei a habilidade \"Arremessar Pedra\".\n"
					"Espero que esta habilidade ajude no futuro.");
				close;
			} else {
				if ((countitem(Garlet) > 1) && (countitem(Scell) > 1) && ((JobLevel > 14) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
					mes("[Alcouskou]\n"
						"Opa! Voc� j� reuniu os itens!\n"
						"Muito bem, voc� quer come�ar?\n"
						"Prepare os itens que voc� recolheu.");
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
						"Voc� sabe que tem poder e habilidade suficientes.");
					next;
					mes("[Alcouskou]\n"
						"Ok, isso � tudo.\n"
						"A forma com que vai usar essa habilidade no futuro � com voc�.\n"
						"Desejo-lhe sorte!");
					delitem(Garlet, 2);
					delitem(Scell, 2);
					skill("TF_THROWSTONE", 1, 0);
					close;
				} else {
					mes("[Alcouskou]\n"
						"Os habilidosos e experientes membros da nossa guilda s�o geralmente muito �teis!\n"
						"Eles podem pegar uma pequena pedra pela estrada e us�-la para jogar em um oponente.\n"
						"Com precis�o e rapidez de uma certa dist�ncia.");
					next;
					mes("[Alcouskou]\n"
						"Eles perceberam que � um desperd�cio n�o ensinar esta habilidade aos outros.\n"
						"Ent�o eles fundaram um grupo para treinar os outros...\n"
						"Foi assim que ^3355FFProcurar Pedras^000000 e ^3355FFArremessar Pedra^000000 vieram a se tonar habilidades.");
					next;
					mes("[Alcouskou]\n"
						"� �til ser capaz de encontrar uma pedra em qualquer lugar e ter a capacidade de atir�-la em um inimigo distante.\n"
						"Uma habilidade muito valiosa, de fato.\n"
						"Sem lhe custar zenys, voc� pode ter essa habilidade � sua disposi��o.");
					next;
					mes("[Alcouskou]\n"
						"Eu realmente acho isso uma grande habilidade.\n"
						"O que voc� acha?\n"
						".....Hah Hah Hah.....");
					next;
					mes("[Alcouskou]\n"
						"^3355FFArremessar Pedra!!^000000\n"
						"Esta habilidade pode ser usada a qualquer hora e n�o requer qualquer dinheiro extra.\n"
						"Se voc� souber escolher as pedras adequadas...\n"
						"Se voc� n�o sabe como escolher.");
					next;
					mes("[Alcouskou]\n"
						"pedras, voc� sempre pode compr�-las.\n"
						"E se voc� for capaz escolher pedras, pode ser muito rent�vel para voc�.\n"
						"O que voc� acha?\n"
						"Voc� gosta da id�ia?");
					next;
					mes("[Alcouskou]\n"
						"Se voc� deseja dominar essa habilidade, voc� tem que treinar um pouco.\n"
						"O treinamento tamb�m exige algum itens que n�o v�o ser f�ceis de encontrar...\n"
						"Mas � claro, eu tenho certeza que n�o � imposs�vel.");
					next;
					mes("[Alcouskou]\n"
						"Voc� vai precisar de duas ^3355FFGarleta^000000 e dois ^3355FFScell^000000 para come�ar.\n"
						"Certifique-se de que eles s�o semelhantes a pedras e capazes de serem lan�adas.\n"
						"Quando voc� reunir esses itens, eu vou ficar feliz em lhe ensinar.");
					close;
				}
			}
			case 5: // Voltarei mais tarde
			mes("[Alcouskou]\n"
				"Parece que voc� n�o � muito experiente...\n"
				"Podemos precisar de mais algum tempo para aceita-lo.");
			close;
		}
	} else {
		mes("[Alcouskou]\n"
			"A maioria dos Gatunos e Assassinos tem as habilidades b�sicas para se dar bem em suas miss�es.\n"
			"No entanto, as habilidades que eu posso ensinar n�o podem ser aprendidos em qualquer outro lugar.");
		next;
		mes("[Alcouskou]\n"
			"Se voc� decidir tornar-se um Gatuno ou Assassino.\n"
			"Ou conhecer algu�m que �, venha a mim ou traga-os at� mim.\n"
			"Estas novas t�cnicas devem ser ensinadas a todos os que querem aprender.");
		close;
	}
}

// ------------------------------------------------------------------
payon,91,77,3	script	Bolseiro#thiefskill	4W_M_03,{
	mes("[RuRumuni]\n"
		"Eu sou um comerciante humilde aqui em Payon.\n"
		"Eu compro couro e peles de animais trazidos por ca�adores e fa�o Bolsas de Couro para vender.\n"
		"Eu cresci trabalhando com couros e sou muito bom nisso.");
	if (BaseClass == Job_Thief && thiefskill) {
		next;
		if ((countitem(Cactus_Needle) > 0) && (countitem(Earthworm_Peeling) > 0) && (countitem(Spiderweb) > 0)) {
			mes("[RuRumuni]\n"
				"Ahhh... Voc� veio querendo uma Bolsa de Couro.\n"
				"Muito bom, muito bom.\n"
				"Vou faz�-la imediatamente se voc� esperar um pouco.\n"
				"TuTak TuTak Shyuku Shyuku Shyuku\n"
				".......");
			next;
			mes("[RuRumuni]\n"
				"Ok, est� feito.\n"
				"Aproveite esta Bolsa de Couro.\n"
				"Leve-a para a guilda dos Gatunos.\n"
				"Se voc� lev�-la at� Alcouskou, ele vai ensinar-lhe a habilidade que voc� deseja aprender.");
			delitem(Cactus_Needle, 1);
			delitem(Earthworm_Peeling, 1);
			delitem(Spiderweb, 1);
			thiefskill = 2;
			getitem(Leather_Bag_Of_Infinity, 1);
		} else {
			mes("[RuRumuni]\n"
				"Encontre Alcouskou na guilda dos Gatunos para fazer um pedido de uma Bolsa de Couro do Infinito.\n"
				"Voc� deve saber que\n"
				"leva muito tempo e habilidade para confexionar.\n"
				"A fim de fazer tal item, voc� deve fornecer-me os materiais.");
			next;
			mes("[RuRumuni]\n"
				"Os materiais s�o\n"
				"^3355FF' Pele de Minhoca '^000000\n"
				"^3355FF' Teia de Aranha '^000000\n"
				"^3355FF' Espinho de Cacto '^000000\n"
				"Eu preciso de um de cada.");
		}
	}
	close;
}
