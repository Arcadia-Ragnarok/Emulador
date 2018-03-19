/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Source Script                      |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest da habilidades para faturno                         |
|   Chutar Areia (TF_SPRINKLESAND)                                  |
|   Recuar (TF_BACKSLIDING)                                         |
|   Procurar Pedras (TF_PICKSTONE)                                  |
|   Arreme�ar Pedras (TF_THROWSTONE)                                |
\*-----------------------------------------------------------------*/

moc_prydb1,154,128,4	script	Alcouskou	2_M_THIEFMASTER,{
	if (BaseClass == Job_Thief) {
		mes "[Alcouskou]";
		mes "Nesta vida se encontra muitas coisas.";
		mes "�s vezes voc� pode se perguntar por que dar valor as coisas materiais.";
		mes "Voc� pode considerar esse conhecimento in�til, mas n�o � deixe-me explicar.";
		next;
		switch (select("Chutar Areia:Recuar", "Procurar Pedras", "Arremessar Pedra", "Voltarei mais tarde")) {
			case 1:
			switch (skill_thief_1) {
				case 0:
				if ((countitem(Fine_Grit) > 4) && ((JobLevel > 24) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
					mes "[Alcouskou]";
					mes "Felizmente, voc� trouxe areia com voc�.";
					mes "� muito importante que um Gatuno tenha uma pequena quantidade de areia para certas ocasi�es.";
					mes "A maioria das pessoas n�o percebe o valor de tal subst�ncia.";
					next;
					mes "[Alcouskou]";
					mes "No caso de voc� encontrar um poderoso monstro em um calabou�o, tendo areia.";
					mes "Voc� poderia us�-la para cegar o monstro e poder fugir.";
					mes "Voc� deve carregar sempre uma sacola com areia.";
					next;
					mes "[Alcouskou]";
					mes "Voc� n�o espera que eu fa�a isso para voc� n�o �?";
					mes "Voc� deve ser muito pregui�oso!";
					mes "Muito bem, encontre o RuRumuni.";
					mes "Ele far� para voc� uma sacola de couro resistente.";
					next;
					mes "[Alcouskou]";
					mes "Vou estar me preparando para o seu retorno.";
					mes "Encontre o RuRumuni na parte oeste de Payon.";
					mes "Eu ouvi dizer que ele est� morando por l�.";
					delitem(Fine_Grit, 5);
					skill_thief_1 = 1;
					close;
				}
				mes "[Alcouskou]";
				mes "A parte mais importante para ser um bom Gatuno � o esconderijo.";
				mes "Um Gatuno nunca deve ser visto ou escutado, a menos que ele queira.";
				mes "Alguns consideram isso uma forma covarde de lutar, mas eu penso diferente.";
				next;
				mes "[Alcouskou]";
				mes "A forma como eu vejo, � que n�s vivemos em um mundo onde os mais aptos e espertos vencem.";
				mes "Eles podem falar mal de mim por usar essa habilidade especial...";
				mes "O que � essa habilidade?";
				mes "Esta � a habilidade de Chutar Areia.";
				next;
				mes "[Alcouskou]";
				mes "Se voc� puder jogar ou chutar areia aos olhos de seu oponente,";
				mes "N�o s� ir� diminuir a sua defesa mas tamb�m a capacidade para atac�-lo.";
				mes "� t�o eficaz, que voc� pode faze-los chocar um contra o outro.";
				next;
				mes "[Alcouskou]";
				mes "Bem, temos que sobreviver tamb�m.";
				mes "Somos n�s ou eles...";
				mes "Eu acho que � importante e vital preparar um pouco de areia.";
				mes "O que voc� acha?";
				mes "Se voc� gostar traga-me cinco Torr�es de areia fina.";
				next;
				mes "[Alcouskou]";
				mes "Tenho certeza que voc� est� ansioso para aprender esta habilidade.";
				mes "Mas voc� deve primeiro conseguir os cinco Torr�es de Areia Fina";
				mes "At� que voc� tenha ajuntado,";
				mes "Eu n�o poderei ensinar-lhe esta habilidade.";
				mes "N�o fique desapontado, tenha pressa e v� atr�s.";
				next;
				mes "[Alcouskou]";
				mes "Ah, quase esqueci!";
				mes "Se voc� quer aprender esta habilidade especial.";
				mes "Tenha certeza de que voc� est� suficientemente preparado para us�-la adequadamente.";
				mes "Isto significa que voc� deve estar no n�vel 25 de Classe.";
				close;
				case 1:
				mes "[Alcouskou]";
				mes "V� para Oeste de payon e encontre RuRumuni.";
				mes "Ele vai fazer uma bolsa dur�vel para sua areia.";
				next;
				mes "[Alcouskou]";
				mes "Vou levar estes cinco Torr�es de Areia Fina e prepar�-los para voc� enquanto espero.";
				close;
				case 2:
				mes "[Alcouskou]";
				mes "Ok! �timo!";
				mes "Uma bolsa bem feita!";
				mes "Pequena e f�cil de transportar, com espa�o suficiente para areia. ";
				mes "Esse � um perfeito ^3355FFAlforje de Couro do Infinito^000000 para voc� usar com esta habilidade.";
				next;
				mes "[Alcouskou]";
				mes "Bem, vamos testar sua habilidade, experimente!!";
				next;
				mes "[Alcouskou]";
				mes "Ahhh, cuidado com meus olhos!!";
				mes "^5533FF*Jogando areia*^000000";
				next;
				mes "^5533FF*Jogando areia*^000000";
				next;
				mes "[Alcouskou]";
				mes "Hoo Hoo Hoo...";
				mes "Voc� � um Gatuno por natureza!!!";
				mes "Excelente!";
				mes "Eu acho que n�o tem nada mais que eu possa lhe ensinar.";
				mes "Espero que esta habilidade ajude-o no futuro.";
				delitem(Leather_Bag_Of_Infinity, 1);
				skill("TF_SPRINKLESAND", 1, 0);
				close;
			}
			case 2:
			if ((countitem(Grasshoppers_Leg) > 19) && ((JobLevel > 34) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
				mes "[Alcouskou]";
				mes "Ok! Vamos praticar!";
				next;
				mes "[Alcouskou]";
				mes "Suuu Suuu uk..";
				next;
				mes "[Alcouskou]";
				mes "Suuuuk...";
				next;
				mes "[Alcouskou]";
				mes "Suk.. Suuuk...";
				next;
				mes "[Alcouskou]";
				mes "�timo! A este n�vel, tenho certeza que voc� pode aprimorar suas pr�prias habilidades.";
				delitem(Grasshoppers_Leg, 20);
				skill("TF_BACKSLIDING", 1, 0);
				close;
			}
			mes "[Alcouskou]";
			mes "Normalmente, gosto de pensar sobre o ataque e dano.";
			mes "Mas � importante lembrar que fugir � t�o importante como a atacar!";
			mes "N�s Gatunos nos orgulhamos de nossa";
			next;
			mes "[Alcouskou]";
			mes "velocidade e efic�z esquiva.";
			mes "Mas estou certo que �s vezes voc� notou que ao lutar.";
			mes "Apesar do fato de que esquivamos com maior facilidade do que os outros.";
			mes "Se formos atingidos uma vez, teremos um s�rio problema.";
			next;
			mes "[Alcouskou]";
			mes "� verdade que, �s vezes, pode se ver os outros em desvantagem por nos esquivarmos facilmente de seus ataques.";
			mes "Voc� deve se lembrar que se formos atacados por muitos.";
			mes "N�s podemos n�o ter espa�o para esquivar.";
			next;
			mes "[Alcouskou]";
			mes "Voc� deve tomar uma decis�o r�pida e fugir.";
			mes "A maioria iria fugir imediatamente, mas n�o � preciso.";
			mes "Mesmo se n�o vemos uma abertura, nossa habilidade nos permitir escapar de uma situa��o grave.";
			next;
			mes "[Alcouskou]";
			mes "Esta habilidade usa nossas energias permitindo que escapemos despercebido.";
			mes "Em um curto espa�o de tempo podemos usar esta habilidade para nos distanciar de nossos oponentes.";
			mes "Esta habilidade requer infinitas horas de pratica para domin�-la.";
			next;
			mes "[Alcouskou]";
			mes "Se voc� deseja aprender, voc� vai precisar preparar alguns itens.";
			mes "^3355FF20 Perna de Gafanhoto^000000 para come�ar seu treinamento.";
			next;
			mes "[Alcouskou]";
			mes "Ah, a prop�sito...";
			mes "Voc� precisa ter alguma base de conhecimento para dominar corretamente esta habilidade.";
			mes "Isso significa que voc� precisa pelo menos ter o n�vel de Classe ^3355FF35^000000 .";
			mes "Se n�o, eu n�o poderei te ensinar.";
			close;
			case 3:
			if ((countitem(Zargon) > 0) && (countitem(Bears_Foot) > 0) && (countitem(Spawn) > 4) && ((JobLevel > 19) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
				mes "[Alcouskou]";
				mes "Uau, voc� j� est� pronto?";
				mes "�timo, eu percebo a sua determina��o.";
				mes "Seu zelo � sincero.";
				mes "Ok, Vamos come�ar a sua forma��o?";
				mes "Arreme�ar Pedra....";
				mes "Encontre uma pedra lisa com um bom peso.";
				next;
				mes "[Alcouskou]";
				mes "Escolher a pedra certa � muito importante para ser bem sucedido.";
				mes "Bem, eu poderia dizer-lhe um milh�o de vezes, mas � melhor ver por si.";
				mes "Ok, por que n�o tenta essa habilidade aqui fora onde eu possa v�-lo.";
				next;
				mes "^3355FF-Shweeput!-^000000";
				next;
				mes "^3355FF-Cheeeguk!-^000000";
				next;
				mes "^3355FF-Shyaaaakkk!-^000000";
				next;
				mes "[Alcouskou]";
				mes "Muito Bom.";
				mes "Voc� parece dominar a habilidade facilmente.";
				mes "Voc� pode melhora-la come�ando a praticar em seu pr�prio dia-a-dia.";
				mes "Espero que ela ajude voc� no futuro.";
				mes "....Espero ver voc� em breve";
				delitem(Zargon, 1);
				delitem(Bears_Foot, 1);
				delitem(Spawn, 5);
				skill("TF_PICKSTONE", 1, 0);
				close;
			}
			mes "[Alcouskou]";
			mes "Os habilidosos e experientes membros da nossa guilda s�o geralmente muito �teis!";
			mes "Eles podem pegar uma pequena pedra pela estrada.";
			mes "E us�-la para jogar em um oponente com precis�o e rapidez de uma certa dist�ncia.";
			next;
			mes "[Alcouskou]";
			mes "Eles perceberam que � um desperd�cio n�o ensinar esta habilidade aos outros.";
			mes "Ent�o eles fundaram um grupo para treinar os outros...";
			mes "Foi assim que ^3355FFProcurar Pedras^000000 e ^3355FFArremessar Pedra^000000 vieram a se tonar habilidades.";
			next;
			mes "[Alcouskou]";
			mes "� �til ser capaz de encontrar uma pedra em qualquer lugar e ter a capacidade de atir�-la em um inimigo distante.";
			mes "Uma habilidade muito valiosa, de fato.";
			mes "Sem lhe custar zenys, voc� pode ter essa habilidade � sua disposi��o.";
			next;
			mes "[Alcouskou]";
			mes "Eu realmente acho isso uma grande habilidade.";
			mes "O que voc� acha?";
			mes ".....Hah Hah Hah.....";
			next;
			mes "[Alcouskou]";
			mes "^3355FFProcurar Pedras!^000000 pode ser usado em praticamente qualquer local.";
			mes "Pegando pedras lizas e com peso adequado do ch�o.";
			next;
			mes "[Alcouskou]";
			mes "A pequena quantidade de treinamento necess�rio exige que voc� se dedique...";
			mes "Vamos primeiro come�ar a praticar como pegar uma ^3355FFPata de Urso^000000 para familiarizar com esta a��o.";
			next;
			mes "[Alcouskou]";
			mes "E em vez de uma pedra, tente pegar um ^3355FFZarg�nio^000000!";
			mes "Isso seria muito pouco?";
			mes "Vamos adicionar^3355FF5 Ovas de Sapo^000000!!";
			mes "Mostre-me sua habilidade!";
			mes "Re�na esses itens, da forma que achar mais vantajosa.";
			close;
			case 4:
			if ((countitem(Garlet) > 1) && (countitem(Scell) > 1) && ((JobLevel > 14) || (BaseJob == Job_Assassin || BaseJob == Job_Rogue))) {
				mes "[Alcouskou]";
				mes "Opa! Voc� j� reuniu os itens!";
				mes "Muito bem, voc� quer come�ar?";
				mes "Prepare os itens que voc� recolheu.";
				next;
				mes "^3355FF-Shyuuk!-^000000";
				next;
				mes "^3355FF-Shyuuuk Tuk..-^000000";
				next;
				mes "^3355FF-Shyupattt!! Tauk!!-^000000";
				next;
				mes "[Alcouskou]";
				mes "Na mosca...!!";
				mes "Isso foi excelente!";
				mes "Voc� sabe que tem poder e habilidade suficientes.";
				next;
				mes "[Alcouskou]";
				mes "Ok, isso � tudo.";
				mes "A forma com que vai usar essa habilidade no futuro � com voc�.";
				mes "Desejo-lhe sorte!";
				delitem(Garlet, 2);
				delitem(Scell, 2);
				skill("TF_THROWSTONE", 1, 0);
				close;
			}
			mes "[Alcouskou]";
			mes "Os habilidosos e experientes membros da nossa guilda s�o geralmente muito �teis!";
			mes "Eles podem pegar uma pequena pedra pela estrada e us�-la para jogar em um oponente.";
			mes "Com precis�o e rapidez de uma certa dist�ncia.";
			next;
			mes "[Alcouskou]";
			mes "Eles perceberam que � um desperd�cio n�o ensinar esta habilidade aos outros.";
			mes "Ent�o eles fundaram um grupo para treinar os outros...";
			mes "Foi assim que ^3355FFProcurar Pedras^000000 e ^3355FFArremessar Pedra^000000 vieram a se tonar habilidades.";
			next;
			mes "[Alcouskou]";
			mes "� �til ser capaz de encontrar uma pedra em qualquer lugar e ter a capacidade de atir�-la em um inimigo distante.";
			mes "Uma habilidade muito valiosa, de fato.";
			mes "Sem lhe custar zenys, voc� pode ter essa habilidade � sua disposi��o.";
			next;
			mes "[Alcouskou]";
			mes "Eu realmente acho isso uma grande habilidade.";
			mes "O que voc� acha?";
			mes ".....Hah Hah Hah.....";
			next;
			mes "[Alcouskou]";
			mes "^3355FFArremessar Pedra!!^000000";
			mes "Esta habilidade pode ser usada a qualquer hora e n�o requer qualquer dinheiro extra.";
			mes "Se voc� souber escolher as pedras adequadas...";
			mes "Se voc� n�o sabe como escolher";
			next;
			mes "[Alcouskou]";
			mes "pedras, voc� sempre pode compr�-las.";
			mes "E se voc� for capaz escolher pedras, pode ser muito rent�vel para voc�.";
			mes "O que voc� acha?";
			mes "Voc� gosta da id�ia?";
			next;
			mes "[Alcouskou]";
			mes "Se voc� deseja dominar essa habilidade, voc� tem que treinar um pouco.";
			mes "O treinamento tamb�m exige algum itens que n�o v�o ser f�ceis de encontrar...";
			mes "Mas � claro, eu tenho certeza que n�o �";
			mes "imposs�vel.";
			next;
			mes "[Alcouskou]";
			mes "Voc� vai precisar de duas ^3355FFGarleta^000000 e dois ^3355FFScell^000000 para come�ar.";
			mes "Certifique-se de que eles s�o semelhantes a pedras e capazes de serem lan�adas.";
			mes "Quando voc� reunir esses itens, eu vou ficar feliz em lhe ensinar.";
			close;
			case 5:
			mes "[Alcouskou]";
			mes "Parece que voc� n�o � muito experiente...";
			mes "Podemos precisar de mais algum tempo para aceita-lo.";
			close;
		}
	}
	mes "[Alcouskou]";
	mes "A maioria dos Gatunos e Assassinos tem as habilidades b�sicas para se dar bem em suas miss�es.";
	mes "No entanto, as habilidades que eu posso ensinar n�o podem ser aprendidos em qualquer outro lugar.";
	next;
	mes "[Alcouskou]";
	mes "Se voc� decidir tornar-se um Gatuno ou Assassino.";
	mes "Ou conhecer algu�m que �, venha a mim ou traga-os at� mim.";
	mes "Estas novas t�cnicas devem ser ensinadas a todos os que querem aprender.";
	close;
}

payon,91,77,3	script	Bag Seller	4W_M_03,{
	mes "[RuRumuni]";
	mes "Eu sou um comerciante humilde aqui em Payon.";
	mes "Eu compro couro e peles de animais trazidos por ca�adores e fa�o Bolsas de Couro para vender.";
	mes "Eu cresci trabalhando com couros e sou muito bom nisso.";
	next;
	switch (skill_thief_1) {
		case 0:
		mes "[RuRumuni]";
		mes "H� uma guilda de Gatunos na �rea de Moroc.";
		mes "Eu sei que h� uma pessoa que me envia Gatunos com necessidade dos itens que eu fa�o.";
		mes "Como o ^3355FFAlforje de Couro do Infinito^000000.";
		mes "Eles visitam minha loja frequentemente.";
		close;
		case 1:
		if ((countitem(Cactus_Needle) > 0) && (countitem(Earthworm_Peeling) > 0) && (countitem(Spiderweb) > 0)) {
			mes "[RuRumuni]";
			mes "Ahhh... Voc� veio querendo uma Bolsa de Couro.";
			mes "Muito bom, muito bom.";
			mes "Vou faz�-la imediatamente se voc� esperar um pouco.";
			mes "TuTak TuTak Shyuku Shyuku Shyuku";
			mes ".......";
			next;
			mes "[RuRumuni]";
			mes "Ok, est� feito.";
			mes "Aproveite esta Bolsa de Couro.";
			mes "Leve-a para a guilda dos Gatunos.";
			mes "Se voc� lev�-la at� Alcouskou, ele vai ensinar-lhe a habilidade que voc� deseja aprender.";
			delitem(Cactus_Needle, 1);
			delitem(Earthworm_Peeling, 1);
			delitem(Spiderweb, 1);
			skill_thief_1 = 2;
			getitem(Leather_Bag_Of_Infinity, 1);
			close;
		}
		mes "[RuRumuni]";
		mes "Encontre Alcouskou na guilda dos Gatunos para fazer um pedido de uma Bolsa de Couro do Infinito.";
		mes "Voc� deve saber que";
		mes "leva muito tempo e habilidade para confexionar.";
		mes "A fim de fazer tal item, voc� deve fornecer-me os materiais.";
		next;
		mes "Os materiais s�o";
		mes "^3355FF' Pele de Minhoca '^000000";
		mes "^3355FF' Teia de Aranha '^000000";
		mes "^3355FF' Espinho de Cacto '^000000";
		mes "Eu preciso de um de cada.";
		close;
		case 2:
		mes "[RuRumuni]";
		mes "Aqui est� a sua Bolsa de Couro do Infinito.";
		mes "Leve isso para Alcouskou e prove-o que agora voc� est� pronto para aprender tal habilidade.";
		close;
	}
}
