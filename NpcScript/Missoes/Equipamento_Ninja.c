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
| - Copyright: ??????????                                           |
| - Info: Mini-Quests de equipamentos usadas por Ninjas             |
| * Prote��o de Bra�o                                               |
| * Prote��o de Bra�o Avan�ada                                      |
| * Prote��o de Bra�o Avan�ada[1]                                   |
| * Khukri, Jitte, Asura, Murasame, Hakujin                         |
| * Shuriken Alado Huuma, Shuriken Roda-Gigante Huuma               |
|   Shuriken Roda-Gigante Huuma[4], Shuriken de Fogo Huuma          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Prote��o de Bra�o ] -
// ------------------------------------------------------------------
que_ng,28,50,3	script	Boshuu	4_M_SEAMAN,{
	if (BaseClass != Job_Ninja) {
		mes "[Boshuu]";
		mes "Eu sou o melhor artes�o de artefatos ninjas dentre aqueles que as pessoas dizem ser os 'Tr�s'.";
		mes "As pessoas me chamam de Murata Boshuu.";
		next;
		mes "[Boshuu]";
		mes "Eu sei como criar qualquer armadura ou escudo do mundo oriental e meus escudos s�o considerados os melhores de toda a regi�o.";
		next;
		mes "[Boshuu]";
		mes "Mas como voc� � um estrangeiro...";
		mes "� como se eu n�o tivesse mais neg�cios com voc�.";
		close;
	} else if (BaseLevel < 20) {
		mes "[Boshuu]";
		mes "Eu fa�o os melhores escudos para ninjas de todas as idades,";
		mes "Mas mesmo eu tenho requerimentos m�nimos.";
		next;
		mes "[Boshuu]";
		mes "Parece-me que o que voc� precisa n�o � de um bom escudo, mas sim de alguns l�veis.";
		mes "Volte quando voc� tiver um pouco mais maduro.";
		close;
	} else if (!countitem(Guard_)) {
		mes "[Boshuu]";
		mes "Eu sou o melhor artes�o de artefatos ninjas dentre aqueles que as pessoas dizem ser os 'Tr�s',";
		mes "As pessoas me chamam de Murata Boshuu.";
		next;
		mes "[Boshuu]";
		mes "As pessoas dizem ser Tr�s artes�es, mas acho que os outros dois n�o passam de uma farsa.";
		mes "N�o h� nenhum artes�o melhor que eu para ninjas neste mundo.";
		next;
		mes "[Boshuu]";
		mes "Eu sei como fazer todas armaduras e escudos do mundo oriental.";
		next;
		mes "[Boshuu]";
		mes "Devido a superioridade defensiva da armadura que eu criei, certa vez, quando dois guerreiros duelaram usando-as, nenhum p�de sair vitorioso.";
		next;
		mes "[Boshuu]";
		mes "Por esta raz�o eu n�o fa�o mais nenhuma armadura.";
		mes "Eu estou apenas coletando armaduras atualmente, assim vejo se minhas habilidades n�o enferrujaram.";
		next;
		mes "[Boshuu]";
		mes "Mas eu tenho me sentido t�o entediado ultimamente...";
		next;
		mes "[Boshuu]";
		mes "Agora que sou apenas um coletor de armaduras, eu sinto que a minha chama de criatividade interna est� se apagando.";
		next;
		mes "[Boshuu]";
		mes "Pelo que tenho ouvido, h� um escudo por a� do qual ainda n�o fiquei sabendo.";
		mes "Ele se chama... Humm?";
		mes "Como ele se chama mesmo?";
		next;
		mes "[Boshuu]";
		mes "^ff0000Vembrassa[1]^000000?";
		mes "Bem, o nome � mais ou menos isto.";
		mes "Eu gostaria de sentir o peso dela pessoalmente.";
		next;
		mes "[Boshuu]";
		mes "Mas obviamente, ela � inferior � armadura que eu fiz.";
		next;
		mes "[Boshuu]";
		mes "Fa�a-me um favor e eu farei algo realmente especial a voc�.";
		next;
		mes "[Boshuu]";
		mes "Eu n�o estou certo de que farei, mas sinto que se ver aquele escudo ficarei inspirado.";
		mes "O Que acha?";
		mes "Voc� poderia me trazer uma ^ff0000Vembrassa[1]^000000?";
		next;
		if (select("Eu n�o me sinto inspirado","Muito Bem!.") == 1) {
			mes "[Boshuu]";
			mes "Ahh... Que pena...";
			mes "Voc� est� jogando fora uma oportunidade de ter em suas m�os algo feito por um artes�o genial como eu...";
			close;
		} else{
			mes "[Boshuu]";
			mes "Oh, �timo.";
			mes "Vamos l� ent�o.";
			mes "Encontre o escudo ^ff0000Vembrassa[1]^000000 e traga-o para min.";
			ninbo = 1;
			close;
		}
	} else if (ninbo == 1) {
		mes "[Boshuu]";
		mes "Oh... Ent�o voc� o trouxe at� min.";
		mes "Mostre-o a min.";
		mes "Hmmmmm...";
		next;
		mes "[Boshuu]";
		mes "Oh! Ent�o � realmente possivel criar slots em equipamentos defensivos!";
		next;
		mes "[Boshuu]";
		mes "Ahh, agora estou morrendo de vontade de copiar este escudo e fazer outros equipamentos com slots.";
		next;
		mes "[Boshuu]";
		mes "Se voc� tiver uma Prote��o de Bra�o sem slots e uma Vembrassa[1], eu farei sua Prote��o de Bra�o sem slots em uma Prote��o de Bra�o[1] pelo pre�o de 10.000 Zenys.";
		next;
		mes "[Boshuu]";
		mes "O Que acha?";
		mes "Quer Tentar?";
		next;
		if (select("N�o, valeu","Ok, parece uma boa id�ia.") == 1) {
			mes "[Boshuu]";
			mes "Hmm, Ok.";
			mes "Muito obrigado por trazer este objeto t�o interessante para min.";
			mes "Obrigado por tudo.";
			ninbo = 0;
			close;
		} else{
			mes "[Boshuu]";
			mes "Oh ok.";
			mes "Eu estou ancioso para come�ar.";
			mes "Se voc� me trouxer uma Prote��o de Bra�o 1 Vembrasssa[1], e 10,000 Zenys,";
			next;
			mes "[Boshuu]";
			mes "Ent�o farei sua Prote��o de Bra�o sem slots em uma Prote��o de Bra�o[1].";
			mes "Volte quando tiver todos os materiais requisitados.";
			ninbo = 2;
			close;
		}
	} else if (ninbo == 2) {
		if (!countitem(Guard_) || countitem(Arm_Guard) || Zeny < 10000) {
			mes "[Boshuu]";
			mes "Hmm... Parece que os materiais ainda n�o s�o suficientes.";
			mes "Para criar uma Prote��o de Bra�o[1], preciso de 1 Vembrassa [1]";
			mes "1 Prote��o de Bra�o, e 10,000 Zeny.";
			mes "Volte quando tiver certeza de que tem todos os materiais.";
			close;
		} else {
			mes "[Boshuu]";
			mes "Ah, eu vejo que est� devolta com todos os materiais.";
			mes "Mas antes de come�ar, quero te perguntar mais uma vez.";
			mes "Voc� quer me dar os materiais que voc� trouxe para que eu fa�a uma Prote��o de Bra�o[1]?";
			next;
			if (select("N�o","Sim") == 1) {
				mes "[Boshuu]";
				mes "Ok";
				mes "Bem, se voc� mudar de id�ia, volte e fale comigo.";
				close;
			} else {
				mes "[Boshuu]";
				mes "Certo!";
				mes "Isto vai demorar so um segundo";
				mes "Bang Clang Bang Clang";
				next;
				if (!countitem(Guard_) || !countitem(Arm_Guard) || Zeny < 10000) {
					mes "^FF0000HACK DETECTADO^000000";
					close;
				} else {
					mes "[Boshuu]";
					mes "Aqui est�!";
					mes "Finalmente completo!";
					mes "Eu le apresento a Prote��o de Bra�o[1].";
					mes "Me procure sempre que precisar de mais.";
					delitem(Guard_,1);
					delitem(Arm_Guard,1);
					Zeny -= 10000;
					ninbo = 0;
					getitem(Arm_Guard_,1);
					close;
				}
			}
		}
	} else {
		mes "[Boshuu]";
		mes "Eu sou o melhor artes�o de artefatos ninjas dentre aqueles que as pessoas dizem ser os 'Tr�s'.";
		mes "As pessoas me chamam de Murata Boshuu.";
		next;
		mes "[Boshuu]";
		mes "Eu sei como criar qualquer armadura ou escudo do mundo oriental e meus escudos s�o considerados os melhores de toda a regi�o.";
		next;
		mes "[Boshuu]";
		mes "Mas como voc� � um estrangeiro...";
		mes "� como se eu n�o tivesse mais neg�cios com voc�.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Prote��o de Bra�o Avan�ada ] -
// ------------------------------------------------------------------
que_ng,28,45,3	script	Basshu	4_M_04,{
	if (BaseClass != Job_Ninja) {
		mes "[Basshu]";
		mes "Eu sou um dos tr�s irm�os artes�os de artefatos ninja do oriente chamado Murata Basshu";
		next;
		mes "[Basshu]";
		mes "As pessoas normalmente nos chamam de 'Os Tr�s', mas os outros dois artes�os s�o meus irm�os.";
		next;
		mes "[Basshu]";
		mes "Mas sinto como se n�o fosse meu cliente usual, ent�o n�o posso lhe fazer nenhum escudo.";
		mes "Desculpe...";
		close;
	} else if (BaseLevel < 50) {
		mes "[Basshu]";
		mes "Eu sou um dos tr�s irm�os artes�os de artefatos ninja do oriente chamado Murata Basshu";
		next;
		mes "[Basshu]";
		mes "Infelizmente, muitos de meus escudos tem requerimentos m�nimos, temo que n�o os possua.";
		next;
		mes "[Basshu]";
		mes "Volte quando for mais forte.";
		close;
	} else if (!countitem(Mirror_Shield)) {
		mes "[Basshu]";
		mes "Eu sou um dos tr�s irm�os artes�os de artefatos ninja do oriente chamado Murata Basshu";
		next;
		mes "[Basshu]";
		mes "As pessoas normalmente nos chamam de 'Os Tr�s', mas os outros dois artes�os s�o meus irm�os.";
		mes "Eu aprendi a fazer meu trabalho espiando o de meus irm�os, portanto minha habilidade n�o � t�o pior que a deles, e muitas pessoas me elogiam bem.";
		next;
		mes "[Basshu]";
		mes "Atualmente, desisti de fazer escudos e estou fazendo cole��o de escudos antigos.";
		mes "Estou querendo saber se escudos podem ser encantados com m�gica.";
		next;
		mes "[Basshu]";
		mes "Por algum acaso do destuno voc� sabe um escudo chamado Escudo Espelhado do mundo ocidental?";
		mes "Eu adoraria sentir em minhas m�os o peso deste escudo, mas ainda n�o consegui botar minhas m�os em um.";
		next;
		mes "[Basshu]";
		mes "Seria de grande ajuda se eu pudesse ver um destes escudos de perto.";
		mes "Voc� poderia me ajudar?";
		next;
		if (select("Acho que outro dia","Claro!") == 1) {
			mes "[Basshu]";
			mes "Ah! Eu acho que deva ser um pedido imposs�vel.";
			mes "Me desculpe.";
			mes "Se voc� algum dia encontrar um Escudo Espelhado e quiser se livrar dele, por favor, venha me ver.";
			close;
		} else {
			mes "[Basshu]";
			mes "Oh! Muito Obrigado.";
			mes "Se voc� puder realmente encontrar-me um Escudo Espelhado, eu possivelmente terei boas id�ias.";
			ninbot = 1;
			close;
		}
	} else if (ninbot == 1) {
		mes "[Basshu]";
		mes "Oh, voc� o trouxe a min?";
		mes "Deixe-me ver...";
		mes "Hmm ...";
		next;
		mes "[Basshu]";
		mes "Oh! � isto! Isto prova que n�o � impossivel fazer um escudo resistente a ataques m�gicos.";
		mes "WaaAAaaahh...";
		next;
		mes "[Basshu]";
		mes "Isto certamente me deixa excitado.";
		mes "Caso voc� tenha uma Prote��o de Bra�o comum, traga-o a min junto de um...";
		next;
		mes "[Basshu]";
		mes "Escudo espelhado, e 20,000 Zeny, ent�o farei sua Prote��o de Bra�o um Prote��o de Bra�o Avan�ada.";
		next;
		mes "[Basshu]";
		mes "O Que acha? Gostaria de fazer esta troca?";
		next;
		if (select("N�o, n�o gostaria","Sim, � claro!") == 1) {
			mes "[Basshu]";
			mes "Hmm, tudo bem...";
			mes "Estou muito agradecido que tenha me mostrado esse escudo t�o interessante do ocidente.";
			next;
			mes "[Basshu]";
			mes "Obrigado por tudo.";
			ninbot = 0;
			close;
		} else{
			mes "[Basshu]";
			mes "�timo!";
			mes "Estava realmente querendo fazer isto.";
			next;
			mes "[Basshu]";
			mes "Traga-me uma Prote��o de Bra�o,";
			mes "um Escudo Espelhado, e";
			mes "20,000 Zeny,";
			mes "e farei uma Prote��o de Bra�o Avan�ada para voc�.";
			next;
			mes "[Basshu]";
			mes "Volte a me procurar quando tiver tudo preparado.";
			ninbot = 2;
			close;
		}
	} else if (ninbot == 2) {
		if (!countitem(Mirror_Shield) || !countitem(Arm_Guard) || Zeny < 20000) {
			mes "[Basshu]";
			mes "Hmm.. Parece que n�o me trouxe todos os materiais que requisitei.";
			mes "Para uma Prote��o de Bra�o Avan�ada, eu preciso de...";
			mes "Um Escudo Espelhado, uma Prote��o de Bra�o e 20,000 Zeny.";
			mes "Volte quando tiver todos estes materiais.";
			close;
		} else {
			mes "[Basshu]";
			mes "Finalmente voc� trouxe";
			mes "todos os ingredientes necess�rios.";
			mes "Antes de come�ar,";
			mes "Vou te perguntar mais uma vez.";
			next;
			mes "[Basshu]";
			mes "Em troca da adi��o de defesa m�gica a sua Prote��o de Bra�o, a defesa f�sica do escudo pode ser criticamente afetada.";
			next;
			mes "[Basshu]";
			mes "Voc� vai me dar todos os materiais que conseguiu e em troca, receber uma Prote��o de Bra�o Avan�ada?";
			next;
			if (select("N�o","Sim") == 1) {
				mes "[Basshu]";
				mes "Bem...";
				mes "Caso mude de id�ia";
				mes "Volte a me ver denovo.";
				close;
			} else {
				mes "[Basshu]";
				mes "Hmm. �timo ent�o!";
				mes "Devemos come�ar?";
				mes "Bang Clang Bang Clang";
				mes "Sweep Sweep Saw Saw";
				next;
				if (countitem(!Mirror_Shield) || !countitem(Arm_Guard) || Zeny < 20000) {
					mes "^FF0000HACK DETECTADO^000000";
					close;
				}
				mes "[Basshu]";
				mes "Aqui est�!";
				mes "Tome aqui sua Prote��o de Bra�o Avan�ada.";
				mes "Sempre que quiser que eu crie mais itens, volte e pe�a a min.";
				delitem(Mirror_Shield,1);
				delitem(Arm_Guard,1);
				Zeny -= 20000;
				ninbot = 0;
				getitem(Improved_Arm_Guard,1);
				close;
			}
		}
	} else {
		mes "[Basshu]";
		mes "Eu sou um dos tr�s irm�os artes�os de artefatos ninja do oriente chamado Murata Basshu";
		next;
		mes "[Basshu]";
		mes "As pessoas normalmente nos chamam de 'Os Tr�s', mas os outros dois artes�os s�o meus irm�os.";
		next;
		mes "[Basshu]";
		mes "Mas sinto como se n�o fosse meu cliente usual, ent�o n�o posso lhe fazer nenhum escudo.";
		mes "Desculpe...";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Prote��o de Bra�o Avan�ada[1] ] -
// ------------------------------------------------------------------
que_ng,27,18,3	script	Toshu	4_M_SEAMAN,{
	if (BaseClass != Job_Ninja) {
		mes "[Toshu]";
		mes "Ol�, como voc� vai?";
		mes "Jovem colega,";
		mes "Eu sou um dos 'Tr�s Irm�os' do oriente que produzem instrumentos defensivos ninja.";
		mes "O nome � Murata Toshu.";
		next;
		mes "[Toshu]";
		mes "Eu aprendi como fazer slots em instrumentos defensivos como fazem no ocidente.";
		mes "Estou pensando em fazer dinheiro com esta habilidade.";
		next;
		mes "[Toshu]";
		mes "Mas voc� n�o parece o tipo de cliente com quem tenho neg�cios...";
		close;
	} else {
		mes "[Toshu]";
		mes "Como vai voc�, meu jovem colega";
		mes "Eu sou o irm�o do meio dos 'Tr�s irm�os' que produzem artefatos defensivos ninja.";
		mes "As pessoas me chamam Murata Toshu.";
		next;
		mes "[Toshu]";
		mes "Eu aprendi como criar slots em itens no ocidente, desde ent�o estou pensando em fazer dinheiro com esta habilidade.";
		next;
		mes "[Toshu]";
		mes "Se quiser, eu posso criar uma Prote��o de Bra�o Avan�ada[1] caso me traga";
		mes "uma Prote��o de Bra�o Avan�ada, um Broquel[1]";
		mes "e 40,000 Zeny.";
		next;
		mes "[Toshu]";
		mes "Mas eu sinto em dizer que h� uma chance de que eu possa quebrar seus materiais e falhar ao criar sua Prote��o de Bra�o Avan�ada[1], portanto voc� deve pensar sobre isto.";
		mes "O Que acha?";
		mes "Temos um acordo?";
		next;
		if (select("N�o quero fazer isto","Sim! Vamos tentar!") == 1) {
			mes "[Toshu]";
			mes "Ok.";
			mes "Claro, os escudos s�o importantes para voc�.";
			mes "Caso mude sua id�ia, volte a falar comigo.";
			close;
		} else {
			if (!countitem(Buckler_) || !countitem(Improved_Arm_Guard) || Zeny < 40000) {
				mes "[Toshu]";
				mes "Parece-me que esqueceu de algum material.";
				mes "Os materiais necess�rios s�o um Broquel[1] uma Prote��o de Bra�o Avan�ada, e 40,000 Zeny.";
				mes "Voc� tem de trazer o n�mero correto de materiais e Zeny.";
				mes "N�o se esque�a disso.";
				close;
			} else {
				mes "[Toshu]";
				mes "Hmm. Materiais e Zenys Corretos!";
				mes "Hora de fazer minha parte.";
				mes "S� lhe aviso.";
				next;
				mes "[Toshu]";
				mes "Eu posso falhar em fazer seu equipamento, ent�o voc� talvez queira pensar sobre o caso.";
				next;
				mes "[Toshu]";
				mes "Voc� quer que eu tente produzir seu equipamento, mesmo com uma chance de que a produ�a� falhe?";
				next;
				if (select("Acho melhor desistir","Claro! Vamos tentar!") == 1) {
					mes "[Toshu]";
					mes "Ok.";
					mes "Bem, volte quando achar que deva tentar.";
					mes "Erherherherher";
					close;
				} else {
					mes "[Toshu]";
					mes "OK! Eu tenho suas ordens!";
					mes "Apenas espere 3 sgundos!!";
					mes "Clink Clank!Clink Clank!!";
					mes "Sweep Sweep Saw Saw";
					next;
					if (!countitem(Buckler_) || !countitem(Improved_Arm_Guard) || Zeny < 40000) {
						mes "^FF0000HACK DETECTADO^000000";
						close;
					}
					delitem(Buckler_,1);
					delitem(Improved_Arm_Guard,1);
					Zeny -= 40000;
					switch (rand(5)) {
						case 1:
						getitem(Str_Dish03,1);
						mes "[Toshu]";
						mes "Aaah!!!";
						mes "Ah.. Isto...";
						mes "s�o m�s not�cias.";
						mes "Falhei ao criar o slot, como eu temia.";
						mes "Realmente me descupe por isto.";
						mes "Engula isto e bola pra frente!";
						close;
						case 2:
						getitem(Str_Dish03,1);
						mes "[Toshu]";
						mes "Aaah!!!";
						mes "Ah.. Isto...";
						mes "s�o m�s not�cias.";
						mes "Falhei ao criar o slot, como eu temia.";
						mes "Realmente me descupe por isto.";
						mes "Engula isto e bola pra frente!";
						close;
						default:
						getitem(Improved_Arm_Guard_,1);
						mes "[Toshu]";
						mes "Hmm... Parece que tudo correu bem!";
						mes "Aqui esta seu equipamento com slot Prote��o de Bra�o Avan�ada.";
						mes "Eu estava com medo de que falhasse, mas veja, esta � a raz�o por que sou chamado de artes�o, certo?";
						mes "Se voc� precisar de ajuda novamente, volte a me ver.";
						close;
					}
				}
			}
		}
	}
}

// ------------------------------------------------------------------
// - [ Khukri / Jitte / Asura / Murasame / Hakujin ] -
// ------------------------------------------------------------------
que_ng,72,34,3	script	Craftsman Kaibara	4_M_EINOLD,{
	if (BaseClass != Job_Ninja) {
		mes "[Kaibara]";
		mes "Eu sou o artes�o chamado Kaibara";
		mes "Eu crio armas para ninjas.";
		mes "Por�m, me parece que voc� n�o � um ninja.";
		next;
		mes "[Kaibara]";
		mes "Mesmo se eu criasse uma espada para voc�, seria dificil que voc� apreciasse ela. � uma pena...";
		close;
	} else {
		mes "[Kaibara]";
		mes "Eu sou o ultimo artes�o que sabe fazer uma espada de escamas de um Drag�o Negro.";
		mes "As pessoas me chamam de Kaibara.";
		mes "Voc� parece ser um ninja.";
		mes "Se estiver interessado, de uma olhada em meus produtos enquanto decide o que quer.";
		next;
		switch (select("Gokurin","Jitte","Ashura[3]","Murasame","Hakujin","Cancelar")) {
			case 1:
			mes "[Kaibara]";
			mes "Hmm. parece que voc�s escolheu a Gokurin.";
			mes "Gokurin � feita de v�rios materiais, um deles � escama de drag�o.";
			next;
			mes "[Kaibara]";
			mes "O material necess�rio para esta espada � 400 Escamas de Drag�o,";
			mes "5 Oridecons,30 Pele de Drag�o.";
			mes "e 200,000 Zeny.";
			mes "Quer que eu crie este item para voc�?";
			next;
			if (select("N�o, � muito caro","Sim! Eu quero uma!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo.";
				mes "Estes materiais s�o realmente dificeis de se obter...";
				mes "Caso voc� consiga todos estes materiais um dia, sinta-se � vontade para voltar.";
				close;
			} else{
				if (countitem(Dragon_Scale) < 400 || countitem(Oridecon) < 5 || countitem(Dragons_Skin) < 30 || Zeny < 200000) {
					mes "[Kaibara]";
					mes "Parece-me que n�o trouxe tudo que pedi para que eu fizesse uma Khukri.";
					next;
					mes "[Kaibara]";
					mes "Para fazer a Gokurin.";
					mes "Eu preciso de ^ff0000400 Escamas de drag�o^000000, ^ff00005 Oridecons^000000, ^ff000030 Pele de Drag�o^000000 e ^ff0000200000 Zeny^000000.";
					mes "Esteja certo de que tem todos os itens quando voltar a falar comigo.";
					close;
				} else {
					delitem(Dragon_Scale,400);
					delitem(Oridecon,5);
					delitem(Dragons_Skin,30);
					Zeny -= 200000;
					getitem(Khukri,1);
					mes "[Kaibara]";
					mes "Hmm, muito bem.";
					mes "Voc� trouxe todos os materiais e taxas.";
					mes "Aqui est� sua completa Gokurin.";
					close;
				}
			}
			case 2:
			mes "[Kaibara]";
			mes "Hmm voc� pegou a ^ff0000Jitte^000000.";
			mes "H� uma lenda sobre esta espada que, a cada inimigo que voc� derrota com ela, mais forte ela fica.";
			next;
			mes "[Kaibara]";
			mes "Os materiais requiridos s�o 30 A�os, uma Bainha Velha e 20,000 Zeny.";
			mes "Quer que eu fa�a este item para voc�?";
			next;
			if (select("N�o, obrigado","Sim! Eu Quero um!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo.";
				mes "Estes materiais s�o dif�ceis de se conseguir...";
				mes "Se um dia conseguir coletar todos os materiais, volte e fale comigo.";
				close;
			} else {
				if (countitem(Steel) < 30 || countitem(Old_Hilt) < 1 || Zeny < 20000) {
					mes "[Kaibara]";
					mes "Parece que precisa de mais materiais para que eu possa fazer uma Jitte.";
					next;
					mes "[Kaibara]";
					mes "Para que eu fa�a uma Jitte, eu preciso de";
					mes "^ff000030 A�os^000000, ^f00001 Bainha Velha^000000, e ^ff000020,000 Zeny^000000.";
					mes "Lembre-se dos materiais necess�rios, e volte depois que estiver certo de que tem todos.";
					close;
				} else {
					delitem(Steel,30);
					delitem(Old_Hilt,1);
					Zeny -= 20000;
					getitem(Jitte,1);
					mes "[Kaibara]";
					mes "Hmm, muito bem.";
					mes "Eu chequei os materiais e as taxas.";
					mes "Aqui esta sua completa Jitte.";
					close;
				}
			}
			case 3:
			mes "[Kaibara]";
			mes "Hmm. Voc� escolheu a ^ff0000Ashura[3]^000000.";
			mes "Para que eu lhe fa�a uma Ashura[3], eu preciso de 25 A�os,5 Pergaminho Antigo e 32,000 Zeny.";
			mes "Quer que eu crie o item para voc�?";
			next;
			if (select("N�o, obrigado..","Sim! Eu quero uma!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo.";
				mes "Estes materiais s�o dificeis de se conseguir...";
				mes "Se um dia conseguir coletar todos os materiais, volte e fale comigo..";
				close;
			} else {
				if (countitem(Steel) < 25 || countitem(Old_Magic_Circle) < 5 || Zeny < 32000) {
					mes "[Kaibara]";
					mes "Parece que n�o tem todos os materiais para que eu fa�a uma Ashura[3] para voc�.";
					next;
					mes "[Kaibara]";
					mes "Eu preciso de ^ff000025 A�os^000000, ^ff00005 Pergaminho Antigo^000000, e ^ff0000 32,000 Zeny^000000 para fazer uma Ashura[3].";
					mes "Lembre-se destes materiais, e volte quando tiver todos eles.";
					close;
				} else {
					delitem(Steel,25);
					delitem(Old_Magic_Circle,5);
					Zeny -= 32000;
					getitem(Asura_,1);
					mes "[Kaibara]";
					mes "Hmm, muito bem.";
					mes "Eu chequei todos os materiais e taxas.";
					mes "Aqui esta sua completa Ashura[3].";
					close;
				}
			}
			case 4:
			mes "[Kaibara]";
			mes "Hmm. voc� escolheu a ^ff0000Murasame^000000.";
			mes "Para criar a Murasame, eu preciso de 30 A�os,10 Aquamarinas e 48,000 Zeny.";
			mes "Quer que eu crie este item para voc�?";
			next;
			if (select("N�o, obrigado","Sim! Eu quero uma!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo. Estes materiais s�o dificeis de se conseguir...";
				mes "Se um dia conseguir coletar todos os materiais, volte e fale comigo..";
				close;
			} else{
				if (countitem(Steel) < 30 || countitem(Skyblue_Jewel) < 10 || Zeny < 48000) {
					mes "[Kaibara]";
					mes "Parece que n�o trouxe todos os materiais para que eu crie a Murasame.";
					next;
					mes "[Kaibara]";
					mes "Eu preciso de ^ff000030 A�os^000000, ";
					mes "^ff000010 Aquamarinas^000000, e ^ff000048,000 Zeny^000000 para criar uma Murasame.";
					mes "Lembre-se destes materiais, e volte quando tiver todos eles.";
					close;
				} else {
					delitem(Steel,30);
					delitem(Skyblue_Jewel,10);
					Zeny -= 48000;
					getitem(Murasame,1);
					mes "[Kaibara]";
					mes "Hmm, muito bem.";
					mes "Eu chequei todos os materiais e taxas.";
					mes "Aqui est� sua completa Murasame.";
					close;
				}
			}
			case 5:
			mes "[Kaibara]";
			mes "Hmm. Voc� escolheu a ^ff0000Hakujin^000000.";
			mes "Para que eu crie uma Hakujin, eu necessito de...";
			mes "500 Ossos,5 P�rolas 10 Level 3 Pergaminhos da Cura e 120,000 Zeny.";
			mes "Voc� quer que eu crie este item para voc�?";
			next;
			if (select("N�o, obrigado","Sim! Eu quero um!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo. Estes materiais s�o dificeis de se conseguir...";
				mes "Se um dia conseguir coletar todos os materiais, volte e fale comigo..";
				close;
			} else {
				if (countitem(Skel_Bone) < 500 || countitem(Holy_Scroll_1_3) < 10 || countitem(Scarlet_Jewel) < 5 || Zeny < 120000) {
					mes "[Kaibara]";
					mes "Me parece que lhe faltam alguns materiais para que eu possa fazer uma Hakujin.";
					next;
					mes "[Kaibara]";
					mes "Para fazer uma Hakujin, eu preciso de...";
					mes "500 Ossos,5 P�rolas 10 Level 3 Pergaminhos da Cura e 120,000 Zeny.";
					mes "Lembre-se destes materiais, e volte quando tiver todos eles.";
					close;
				} else {
					delitem(Skel_Bone,500);
					delitem(Holy_Scroll_1_3,10);
					delitem(Scarlet_Jewel,5);
					Zeny -= 120000;
					getitem(Hakujin,1);
					mes "[Kaibara]";
					mes "Hmm, muito bem.";
					mes "Eu chequei todo o material e o zeni que voc� trouxe.";
					mes "Aqui esta sua completa Hakujin.";
					close;
				}
			}
			case 6:
			mes "[Kaibara]";
			mes "Hmm, Muito bem.";
			mes "Volte a me ver denovo.";
			close;
		}
	}
}

// ------------------------------------------------------------------
// - [ Shuriken Alado Huuma / Shuriken Roda-Gigante Huuma 
//     Shuriken Roda-Gigante Huuma[4] Shuriken de Fogo Huuma ] -
// ------------------------------------------------------------------
que_ng,22,62,3	script	Tetsu	4_M_SEAMAN,{
	if (BaseClass != Job_Ninja) {
		mes "[Tetsu]";
		mes "Eu sou o artes�o dos Ninja Fuuma chamado Tetsu.";
		next;
		mes "[Tetsu]";
		mes "Minha vida estava indo pro buraco por causa do meu v�cio em apostas, ent�o resolvi criar armas durante parte do tempo.";
		next;
		mes "[Tetsu]";
		mes "Por�m, parece que voc� n�o � ninja.";
		mes "N�o h� como eu explicar nada ent�o.";
		next;
		mes "[Tetsu]";
		mes "Talvez eu tenha um pouco de dinheiro para gastar, ent�o poderiamos jogar Mah-jong juntos.";
		close;
	} else {
		mes "Eu sou o artes�o dos Ninja Fuuma chamado Tetsu.";
		next;
		mes "[Tetsu]";
		mes "As coisas ficaram horriveis para min devido ao h�bito de apostas...";
		mes "Ent�o, aqui estou eu denovo fazendo armas...";
		next;
		mes "[Tetsu]";
		mes "Eu n�o olhei olh�-lo, mas se for algum item relacionado a Fuuma.";
		mes "N�o h� ningu�m que chegue perto de minhas habilidades.";
		mes "Bem, olhe � sua volta, olhe.";
		next;
		switch (select("Shuriken Alado Huuma","Shuriken Roda-Gigante Huuma","Shuriken Roda-Gigante Huuma[4]","Shuriken de Fogo Huuma","Cancelar")) {
			case 1:
			mes "[Tetsu]";
			mes "Hmm. Voc� escolheu o ^ff0000Shuriken Alado Huuma^000000.";
			mes "Para que eu fa�a, eu preciso de";
			mes "50 a�os,";
			mes "20 Penas de Harpias,";
			mes "5 Oridecons, e 90,000 Zeny.";
			mes "Voc� quer que eu crie este item para voc�?";
			next;
			if (select("Bem � um pouco caro","Sim! fa�a-o pra mim!") == 1) {
				mes "[Tetsu]";
				mes "Hmm. O custo para criar estes equipamentos � um pouco caro n�o?";
				mes "Certo.";
				mes "Se conseguir todos os materiais um dia, volte e fale comigo.";
				close;
			} else {
				if (countitem(Steel) < 50 || countitem(Harpys_Feather) < 20 || countitem(Oridecon) < 5 || Zeny < 90000) {
					mes "[Tetsu]";
					mes "Parece-me que n�o trouxe todos os materiais para que eu possa fazer um Shuriken Alado Huuma.";
					next;
					mes "[Tetsu]";
					mes "Para que eu crie uma Fuuma shuriken Beneki, eu preciso de...";
					mes "^ff000050 A�os^000000,";
					mes "^ff000020 Penas de Harpia^000000,";
					mes "^ff00005 Oridecons^000000,";
					mes "e ^ff000090,000 Zeny^000000.";
					mes "Lembre-se destes materiais, e volte quando tiver todos eles.";
					close;
				} else {
					delitem(Steel,50);
					delitem(Harpys_Feather,20);
					delitem(Oridecon,5);
					Zeny -= 90000;
					getitem(Huuma_Bird_Wing,1);
					mes "[Tetsu]";
					mes "Hmm, muito bem.";
					mes "Voc� trouxe os materiais corretos e zeny suficiente.";
					mes "Aqui est� seu Fuuma Shuriken Beneki.";
					close;
				}
			}
			case 2:
			mes "[Tetsu]";
			mes "Hmm. Vejo que escolheu o ^ff0000Shuriken Roda-Gigante Huuma^000000.";
			mes "Para que eu possa criar, eu preciso de...";
			mes "30 A�os,";
			mes "100 Fitilhos 2 Oridecons,";
			mes "e 40,000 Zeny.";
			mes "Voc� quer que eu crie este item para voc�?";
			next;
			if (select("Bem, � bem caro...","Sim! Fa�a um para mim!") == 1) {
				mes "[Tetsu]";
				mes "Hmm. O custo para criar estes equipamentos � um pouco caro n�o?";
				mes "Certo.";
				mes "Se conseguir todos os materiais um dia, volte e fale comigo.";
				close;
			} else {
				if (countitem(Steel) < 30 || countitem(Sword_Accessory) < 100 || countitem(Oridecon) < 2 || Zeny < 40000) {
					mes "[Tetsu]";
					mes "Parece-me que n�o trouxe todos os materiais para que eu possa fazer um Shuriken Roda-Gigante Huuma.";
					next;
					mes "[Tetsu]";
					mes "Eu preciso de...";
					mes "^ff000030 A�os^000000,";
					mes "^ff0000100 Fitilhos^000000,";
					mes "^ff00002 Oridecons^000000";
					mes "e ^ff000040,000 Zeny^000000.";
					mes "Lembre-se destes materiais, e volte quando tiver todos eles.";
					close;
				} else {
					delitem(Steel,30);
					delitem(Sword_Accessory,100);
					delitem(Oridecon,2);
					Zeny -= 40000;
					getitem(Huuma_Giant_Wheel,1);
					mes "[Tetsu]";
					mes "Hmm, muito bem.";
					mes "Voc� trouxe todos os materiais e a quantidade certa de zenys.";
					mes "Aqui est� seu completo Fuuma Shuriken Roda-Gigante Huuma.";
					close;
				}
			}
			case 3:
			mes "[Tetsu]";
			mes "Hmm. Eu vejo que voc� escolheu o ^ff0000Shuriken Roda-Gigante Huuma[4]^000000.";
			mes "Para criar, eu preciso de...";
			mes "20 Diamantes Rachados,";
			mes "1 Shuriken Roda-Gigante Huuma 3 Oridecons,";
			mes "e 40,000 Zeny.";
			mes "Quer que eu crie este item para voc�?";
			next;
			mes "[Tetsu]";
			mes "E caso voc� ainda n�o saiba...";
			mes "No processo de fazer slotts na arma, sua arma perte todos os refinamentos e cartas, se ouver algum.";
			mes "Pense nisso com cuidado, e decida se realmente quer fazer isto ou n�o.";
			next;
			if (select("N�o, obrigado.:Sim! Eu quero um!") == 2) {
				mes "[Tetsu]";
				mes "Hmm. O custo para criar estes equipamentos � um pouco caro n�o?";
				mes "Certo.";
				mes "Se conseguir todos os materiais um dia, volte e fale comigo.";
				close;
			} else if (countitem(Crystal_Jewel___) < 20 || countitem(Huuma_Giant_Wheel) < 1 || countitem(Oridecon) < 3 || Zeny < 40000) {
				mes "[Tetsu]";
				mes "Parece-me que n�o trouxe todos os materiais para que eu possa fazer um Shuriken Roda-Gigante Huuma[4].";
				next;
				mes "[Tetsu]";
				mes "Para fazer um Shuriken Roda-Gigante Huuma[4], eu preciso de...";
				mes "^ff000020 Diamantes Rachados^000000,";
				mes "^ff00003 Oridecons^000000,";
				mes "1 Shuriken Roda-Gigante Huuma";
				mes "e ^ff000040,000 Zeny^000000.";
				mes "Lembre-se destes materiais, e volte quando tiver todos eles.";
				close;
			} else {
				delitem(Crystal_Jewel___,20);
				delitem(Oridecon,3);
				Zeny -= 40000;
				delitem(Huuma_Giant_Wheel,1);
				getitem(Huuma_Giant_Wheel_,1);
				mes "[Tetsu]";
				mes "Hmm, muito bem.";
				mes "Voc� trouxe todos os materiais e a quantidade certa de zenys.";
				mes "Aqui est� seu completo Shuriken Roda-Gigante Huuma[4].";
				close;
			}
			case 4:
			mes "[Tetsu]";
			mes "Hmm. Vejo que escolheu o ^ff0000Shuriken de Fogo Huuma^000000.";
			mes "Para que eu crie, eu preciso de...";
			mes "50 A�os,";
			mes "100 Lenha em Brasa,";
			mes "100 Cora��es Flamejantes,";
			mes "50 Pedra de Fogo e 78,000 Zeny.";
			mes "Quer que eu fa�a este item para voc�?";
			next;
			if (select("� um pouco caro","Sim! fa�a-o para mim!") == 1) {
				mes "[Tetsu]";
				mes "Hmm. O custo para criar estes equipamentos � um pouco caro n�o?";
				mes "Certo.";
				mes "Se conseguir todos os materiais um dia, volte e fale comigo.";
				close;
			} else {
				if (countitem(Steel) < 50 || countitem(Live_Coal) < 100 || countitem(Burning_Heart) < 100 || countitem(Flame_Stone) < 50 || Zeny < 78000) {
					mes "[Tetsu]";
					mes "Parece-me que n�o trouxe todos os materiais para que eu possa fazer uma Shuriken de Fogo Huuma.";
					next;
					mes "[Tetsu]";
					mes "Eu preciso de...";
					mes "^ff000050 A�os^000000,";
					mes "^ff0000100 Lenha em Brasa^000000,";
					mes "^ff0000100 Cora��es Flamejantes^000000,";
					mes "^ff000050 Pedra do Fogo^000000,";
					mes "e ^ff000078,000 Zeny^000000";
					mes "Lembre-se destes materiais, e volte quando tiver todos eles.";
					close;
				} else {
					delitem(Steel,50);
					delitem(Live_Coal,100);
					delitem(Burning_Heart,100);
					delitem(Flame_Stone,50);
					Zeny -= 78000;
					getitem(Huuma_Blaze,1);
					mes "[Tetsu]";
					mes "Hmm, muito bem.";
					mes "Voc� trouxe todos os materiais e a quantidade certa de zenys.";
					mes "Aqui est� seu completo Shuriken de Fogo Huuma.";
					close;
				}
			}
			case 5:
			mes "[Tetsu]";
			mes "Que pena.";
			mes "Eu gostaria de te mostrar as armas em que pus minha alma na cria��o delas.";
			mes "Se voc� mudar de id�ia, nunca � tarde para voltar e pedir.";
			close;
		}
	}
}
