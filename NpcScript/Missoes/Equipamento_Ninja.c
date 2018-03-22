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
| * Proteção de Braço                                               |
| * Proteção de Braço Avançada                                      |
| * Proteção de Braço Avançada[1]                                   |
| * Khukri, Jitte, Asura, Murasame, Hakujin                         |
| * Shuriken Alado Huuma, Shuriken Roda-Gigante Huuma               |
|   Shuriken Roda-Gigante Huuma[4], Shuriken de Fogo Huuma          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Proteção de Braço ] -
// ------------------------------------------------------------------
que_ng,28,50,3	script	Boshuu	4_M_SEAMAN,{
	if (BaseClass != Job_Ninja) {
		mes "[Boshuu]";
		mes "Eu sou o melhor artesão de artefatos ninjas dentre aqueles que as pessoas dizem ser os 'Três'.";
		mes "As pessoas me chamam de Murata Boshuu.";
		next;
		mes "[Boshuu]";
		mes "Eu sei como criar qualquer armadura ou escudo do mundo oriental e meus escudos são considerados os melhores de toda a região.";
		next;
		mes "[Boshuu]";
		mes "Mas como você é um estrangeiro...";
		mes "É como se eu não tivesse mais negócios com você.";
		close;
	} else if (BaseLevel < 20) {
		mes "[Boshuu]";
		mes "Eu faço os melhores escudos para ninjas de todas as idades,";
		mes "Mas mesmo eu tenho requerimentos mínimos.";
		next;
		mes "[Boshuu]";
		mes "Parece-me que o que você precisa não é de um bom escudo, mas sim de alguns léveis.";
		mes "Volte quando você tiver um pouco mais maduro.";
		close;
	} else if (!countitem(Guard_)) {
		mes "[Boshuu]";
		mes "Eu sou o melhor artesão de artefatos ninjas dentre aqueles que as pessoas dizem ser os 'Três',";
		mes "As pessoas me chamam de Murata Boshuu.";
		next;
		mes "[Boshuu]";
		mes "As pessoas dizem ser Três artesões, mas acho que os outros dois não passam de uma farsa.";
		mes "Não há nenhum artesão melhor que eu para ninjas neste mundo.";
		next;
		mes "[Boshuu]";
		mes "Eu sei como fazer todas armaduras e escudos do mundo oriental.";
		next;
		mes "[Boshuu]";
		mes "Devido a superioridade defensiva da armadura que eu criei, certa vez, quando dois guerreiros duelaram usando-as, nenhum pôde sair vitorioso.";
		next;
		mes "[Boshuu]";
		mes "Por esta razão eu não faço mais nenhuma armadura.";
		mes "Eu estou apenas coletando armaduras atualmente, assim vejo se minhas habilidades não enferrujaram.";
		next;
		mes "[Boshuu]";
		mes "Mas eu tenho me sentido tão entediado ultimamente...";
		next;
		mes "[Boshuu]";
		mes "Agora que sou apenas um coletor de armaduras, eu sinto que a minha chama de criatividade interna está se apagando.";
		next;
		mes "[Boshuu]";
		mes "Pelo que tenho ouvido, há um escudo por aí do qual ainda não fiquei sabendo.";
		mes "Ele se chama... Humm?";
		mes "Como ele se chama mesmo?";
		next;
		mes "[Boshuu]";
		mes "^ff0000Vembrassa[1]^000000?";
		mes "Bem, o nome é mais ou menos isto.";
		mes "Eu gostaria de sentir o peso dela pessoalmente.";
		next;
		mes "[Boshuu]";
		mes "Mas obviamente, ela é inferior à armadura que eu fiz.";
		next;
		mes "[Boshuu]";
		mes "Faça-me um favor e eu farei algo realmente especial a você.";
		next;
		mes "[Boshuu]";
		mes "Eu não estou certo de que farei, mas sinto que se ver aquele escudo ficarei inspirado.";
		mes "O Que acha?";
		mes "Você poderia me trazer uma ^ff0000Vembrassa[1]^000000?";
		next;
		if (select("Eu não me sinto inspirado","Muito Bem!.") == 1) {
			mes "[Boshuu]";
			mes "Ahh... Que pena...";
			mes "Você está jogando fora uma oportunidade de ter em suas mãos algo feito por um artesão genial como eu...";
			close;
		} else{
			mes "[Boshuu]";
			mes "Oh, ótimo.";
			mes "Vamos lá então.";
			mes "Encontre o escudo ^ff0000Vembrassa[1]^000000 e traga-o para min.";
			ninbo = 1;
			close;
		}
	} else if (ninbo == 1) {
		mes "[Boshuu]";
		mes "Oh... Então você o trouxe até min.";
		mes "Mostre-o a min.";
		mes "Hmmmmm...";
		next;
		mes "[Boshuu]";
		mes "Oh! Então é realmente possivel criar slots em equipamentos defensivos!";
		next;
		mes "[Boshuu]";
		mes "Ahh, agora estou morrendo de vontade de copiar este escudo e fazer outros equipamentos com slots.";
		next;
		mes "[Boshuu]";
		mes "Se você tiver uma Proteção de Braço sem slots e uma Vembrassa[1], eu farei sua Proteção de Braço sem slots em uma Proteção de Braço[1] pelo preço de 10.000 Zenys.";
		next;
		mes "[Boshuu]";
		mes "O Que acha?";
		mes "Quer Tentar?";
		next;
		if (select("Não, valeu","Ok, parece uma boa idéia.") == 1) {
			mes "[Boshuu]";
			mes "Hmm, Ok.";
			mes "Muito obrigado por trazer este objeto tão interessante para min.";
			mes "Obrigado por tudo.";
			ninbo = 0;
			close;
		} else{
			mes "[Boshuu]";
			mes "Oh ok.";
			mes "Eu estou ancioso para começar.";
			mes "Se você me trouxer uma Proteção de Braço 1 Vembrasssa[1], e 10,000 Zenys,";
			next;
			mes "[Boshuu]";
			mes "Então farei sua Proteção de Braço sem slots em uma Proteção de Braço[1].";
			mes "Volte quando tiver todos os materiais requisitados.";
			ninbo = 2;
			close;
		}
	} else if (ninbo == 2) {
		if (!countitem(Guard_) || countitem(Arm_Guard) || Zeny < 10000) {
			mes "[Boshuu]";
			mes "Hmm... Parece que os materiais ainda não são suficientes.";
			mes "Para criar uma Proteção de Braço[1], preciso de 1 Vembrassa [1]";
			mes "1 Proteção de Braço, e 10,000 Zeny.";
			mes "Volte quando tiver certeza de que tem todos os materiais.";
			close;
		} else {
			mes "[Boshuu]";
			mes "Ah, eu vejo que está devolta com todos os materiais.";
			mes "Mas antes de começar, quero te perguntar mais uma vez.";
			mes "Você quer me dar os materiais que você trouxe para que eu faça uma Proteção de Braço[1]?";
			next;
			if (select("Não","Sim") == 1) {
				mes "[Boshuu]";
				mes "Ok";
				mes "Bem, se você mudar de idéia, volte e fale comigo.";
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
					mes "Aqui está!";
					mes "Finalmente completo!";
					mes "Eu le apresento a Proteção de Braço[1].";
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
		mes "Eu sou o melhor artesão de artefatos ninjas dentre aqueles que as pessoas dizem ser os 'Três'.";
		mes "As pessoas me chamam de Murata Boshuu.";
		next;
		mes "[Boshuu]";
		mes "Eu sei como criar qualquer armadura ou escudo do mundo oriental e meus escudos são considerados os melhores de toda a região.";
		next;
		mes "[Boshuu]";
		mes "Mas como você é um estrangeiro...";
		mes "É como se eu não tivesse mais negócios com você.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Proteção de Braço Avançada ] -
// ------------------------------------------------------------------
que_ng,28,45,3	script	Basshu	4_M_04,{
	if (BaseClass != Job_Ninja) {
		mes "[Basshu]";
		mes "Eu sou um dos três irmãos artesãos de artefatos ninja do oriente chamado Murata Basshu";
		next;
		mes "[Basshu]";
		mes "As pessoas normalmente nos chamam de 'Os Três', mas os outros dois artesãos são meus irmãos.";
		next;
		mes "[Basshu]";
		mes "Mas sinto como se não fosse meu cliente usual, então não posso lhe fazer nenhum escudo.";
		mes "Desculpe...";
		close;
	} else if (BaseLevel < 50) {
		mes "[Basshu]";
		mes "Eu sou um dos três irmãos artesãos de artefatos ninja do oriente chamado Murata Basshu";
		next;
		mes "[Basshu]";
		mes "Infelizmente, muitos de meus escudos tem requerimentos mínimos, temo que não os possua.";
		next;
		mes "[Basshu]";
		mes "Volte quando for mais forte.";
		close;
	} else if (!countitem(Mirror_Shield)) {
		mes "[Basshu]";
		mes "Eu sou um dos três irmãos artesãos de artefatos ninja do oriente chamado Murata Basshu";
		next;
		mes "[Basshu]";
		mes "As pessoas normalmente nos chamam de 'Os Três', mas os outros dois artesãos são meus irmãos.";
		mes "Eu aprendi a fazer meu trabalho espiando o de meus irmãos, portanto minha habilidade não é tão pior que a deles, e muitas pessoas me elogiam bem.";
		next;
		mes "[Basshu]";
		mes "Atualmente, desisti de fazer escudos e estou fazendo coleção de escudos antigos.";
		mes "Estou querendo saber se escudos podem ser encantados com mágica.";
		next;
		mes "[Basshu]";
		mes "Por algum acaso do destuno você sabe um escudo chamado Escudo Espelhado do mundo ocidental?";
		mes "Eu adoraria sentir em minhas mãos o peso deste escudo, mas ainda não consegui botar minhas mãos em um.";
		next;
		mes "[Basshu]";
		mes "Seria de grande ajuda se eu pudesse ver um destes escudos de perto.";
		mes "Você poderia me ajudar?";
		next;
		if (select("Acho que outro dia","Claro!") == 1) {
			mes "[Basshu]";
			mes "Ah! Eu acho que deva ser um pedido impossível.";
			mes "Me desculpe.";
			mes "Se você algum dia encontrar um Escudo Espelhado e quiser se livrar dele, por favor, venha me ver.";
			close;
		} else {
			mes "[Basshu]";
			mes "Oh! Muito Obrigado.";
			mes "Se você puder realmente encontrar-me um Escudo Espelhado, eu possivelmente terei boas idéias.";
			ninbot = 1;
			close;
		}
	} else if (ninbot == 1) {
		mes "[Basshu]";
		mes "Oh, você o trouxe a min?";
		mes "Deixe-me ver...";
		mes "Hmm ...";
		next;
		mes "[Basshu]";
		mes "Oh! É isto! Isto prova que não é impossivel fazer um escudo resistente a ataques mágicos.";
		mes "WaaAAaaahh...";
		next;
		mes "[Basshu]";
		mes "Isto certamente me deixa excitado.";
		mes "Caso você tenha uma Proteção de Braço comum, traga-o a min junto de um...";
		next;
		mes "[Basshu]";
		mes "Escudo espelhado, e 20,000 Zeny, então farei sua Proteção de Braço um Proteção de Braço Avançada.";
		next;
		mes "[Basshu]";
		mes "O Que acha? Gostaria de fazer esta troca?";
		next;
		if (select("Não, não gostaria","Sim, é claro!") == 1) {
			mes "[Basshu]";
			mes "Hmm, tudo bem...";
			mes "Estou muito agradecido que tenha me mostrado esse escudo tão interessante do ocidente.";
			next;
			mes "[Basshu]";
			mes "Obrigado por tudo.";
			ninbot = 0;
			close;
		} else{
			mes "[Basshu]";
			mes "Ótimo!";
			mes "Estava realmente querendo fazer isto.";
			next;
			mes "[Basshu]";
			mes "Traga-me uma Proteção de Braço,";
			mes "um Escudo Espelhado, e";
			mes "20,000 Zeny,";
			mes "e farei uma Proteção de Braço Avançada para você.";
			next;
			mes "[Basshu]";
			mes "Volte a me procurar quando tiver tudo preparado.";
			ninbot = 2;
			close;
		}
	} else if (ninbot == 2) {
		if (!countitem(Mirror_Shield) || !countitem(Arm_Guard) || Zeny < 20000) {
			mes "[Basshu]";
			mes "Hmm.. Parece que não me trouxe todos os materiais que requisitei.";
			mes "Para uma Proteção de Braço Avançada, eu preciso de...";
			mes "Um Escudo Espelhado, uma Proteção de Braço e 20,000 Zeny.";
			mes "Volte quando tiver todos estes materiais.";
			close;
		} else {
			mes "[Basshu]";
			mes "Finalmente você trouxe";
			mes "todos os ingredientes necessários.";
			mes "Antes de começar,";
			mes "Vou te perguntar mais uma vez.";
			next;
			mes "[Basshu]";
			mes "Em troca da adição de defesa mágica a sua Proteção de Braço, a defesa física do escudo pode ser criticamente afetada.";
			next;
			mes "[Basshu]";
			mes "Você vai me dar todos os materiais que conseguiu e em troca, receber uma Proteção de Braço Avançada?";
			next;
			if (select("Não","Sim") == 1) {
				mes "[Basshu]";
				mes "Bem...";
				mes "Caso mude de idéia";
				mes "Volte a me ver denovo.";
				close;
			} else {
				mes "[Basshu]";
				mes "Hmm. Ótimo então!";
				mes "Devemos começar?";
				mes "Bang Clang Bang Clang";
				mes "Sweep Sweep Saw Saw";
				next;
				if (countitem(!Mirror_Shield) || !countitem(Arm_Guard) || Zeny < 20000) {
					mes "^FF0000HACK DETECTADO^000000";
					close;
				}
				mes "[Basshu]";
				mes "Aqui está!";
				mes "Tome aqui sua Proteção de Braço Avançada.";
				mes "Sempre que quiser que eu crie mais itens, volte e peça a min.";
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
		mes "Eu sou um dos três irmãos artesãos de artefatos ninja do oriente chamado Murata Basshu";
		next;
		mes "[Basshu]";
		mes "As pessoas normalmente nos chamam de 'Os Três', mas os outros dois artesãos são meus irmãos.";
		next;
		mes "[Basshu]";
		mes "Mas sinto como se não fosse meu cliente usual, então não posso lhe fazer nenhum escudo.";
		mes "Desculpe...";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Proteção de Braço Avançada[1] ] -
// ------------------------------------------------------------------
que_ng,27,18,3	script	Toshu	4_M_SEAMAN,{
	if (BaseClass != Job_Ninja) {
		mes "[Toshu]";
		mes "Olá, como você vai?";
		mes "Jovem colega,";
		mes "Eu sou um dos 'Três Irmãos' do oriente que produzem instrumentos defensivos ninja.";
		mes "O nome é Murata Toshu.";
		next;
		mes "[Toshu]";
		mes "Eu aprendi como fazer slots em instrumentos defensivos como fazem no ocidente.";
		mes "Estou pensando em fazer dinheiro com esta habilidade.";
		next;
		mes "[Toshu]";
		mes "Mas você não parece o tipo de cliente com quem tenho negócios...";
		close;
	} else {
		mes "[Toshu]";
		mes "Como vai você, meu jovem colega";
		mes "Eu sou o irmão do meio dos 'Três irmãos' que produzem artefatos defensivos ninja.";
		mes "As pessoas me chamam Murata Toshu.";
		next;
		mes "[Toshu]";
		mes "Eu aprendi como criar slots em itens no ocidente, desde então estou pensando em fazer dinheiro com esta habilidade.";
		next;
		mes "[Toshu]";
		mes "Se quiser, eu posso criar uma Proteção de Braço Avançada[1] caso me traga";
		mes "uma Proteção de Braço Avançada, um Broquel[1]";
		mes "e 40,000 Zeny.";
		next;
		mes "[Toshu]";
		mes "Mas eu sinto em dizer que há uma chance de que eu possa quebrar seus materiais e falhar ao criar sua Proteção de Braço Avançada[1], portanto você deve pensar sobre isto.";
		mes "O Que acha?";
		mes "Temos um acordo?";
		next;
		if (select("Não quero fazer isto","Sim! Vamos tentar!") == 1) {
			mes "[Toshu]";
			mes "Ok.";
			mes "Claro, os escudos são importantes para você.";
			mes "Caso mude sua idéia, volte a falar comigo.";
			close;
		} else {
			if (!countitem(Buckler_) || !countitem(Improved_Arm_Guard) || Zeny < 40000) {
				mes "[Toshu]";
				mes "Parece-me que esqueceu de algum material.";
				mes "Os materiais necessários são um Broquel[1] uma Proteção de Braço Avançada, e 40,000 Zeny.";
				mes "Você tem de trazer o número correto de materiais e Zeny.";
				mes "Não se esqueça disso.";
				close;
			} else {
				mes "[Toshu]";
				mes "Hmm. Materiais e Zenys Corretos!";
				mes "Hora de fazer minha parte.";
				mes "Só lhe aviso.";
				next;
				mes "[Toshu]";
				mes "Eu posso falhar em fazer seu equipamento, então você talvez queira pensar sobre o caso.";
				next;
				mes "[Toshu]";
				mes "Você quer que eu tente produzir seu equipamento, mesmo com uma chance de que a produçaõ falhe?";
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
						mes "são más notícias.";
						mes "Falhei ao criar o slot, como eu temia.";
						mes "Realmente me descupe por isto.";
						mes "Engula isto e bola pra frente!";
						close;
						case 2:
						getitem(Str_Dish03,1);
						mes "[Toshu]";
						mes "Aaah!!!";
						mes "Ah.. Isto...";
						mes "são más notícias.";
						mes "Falhei ao criar o slot, como eu temia.";
						mes "Realmente me descupe por isto.";
						mes "Engula isto e bola pra frente!";
						close;
						default:
						getitem(Improved_Arm_Guard_,1);
						mes "[Toshu]";
						mes "Hmm... Parece que tudo correu bem!";
						mes "Aqui esta seu equipamento com slot Proteção de Braço Avançada.";
						mes "Eu estava com medo de que falhasse, mas veja, esta é a razão por que sou chamado de artesão, certo?";
						mes "Se você precisar de ajuda novamente, volte a me ver.";
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
		mes "Eu sou o artesão chamado Kaibara";
		mes "Eu crio armas para ninjas.";
		mes "Porém, me parece que você não é um ninja.";
		next;
		mes "[Kaibara]";
		mes "Mesmo se eu criasse uma espada para você, seria dificil que você apreciasse ela. É uma pena...";
		close;
	} else {
		mes "[Kaibara]";
		mes "Eu sou o ultimo artesão que sabe fazer uma espada de escamas de um Dragão Negro.";
		mes "As pessoas me chamam de Kaibara.";
		mes "Você parece ser um ninja.";
		mes "Se estiver interessado, de uma olhada em meus produtos enquanto decide o que quer.";
		next;
		switch (select("Gokurin","Jitte","Ashura[3]","Murasame","Hakujin","Cancelar")) {
			case 1:
			mes "[Kaibara]";
			mes "Hmm. parece que vocês escolheu a Gokurin.";
			mes "Gokurin é feita de vários materiais, um deles é escama de dragão.";
			next;
			mes "[Kaibara]";
			mes "O material necessário para esta espada é 400 Escamas de Dragão,";
			mes "5 Oridecons,30 Pele de Dragão.";
			mes "e 200,000 Zeny.";
			mes "Quer que eu crie este item para você?";
			next;
			if (select("Não, é muito caro","Sim! Eu quero uma!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo.";
				mes "Estes materiais são realmente dificeis de se obter...";
				mes "Caso você consiga todos estes materiais um dia, sinta-se à vontade para voltar.";
				close;
			} else{
				if (countitem(Dragon_Scale) < 400 || countitem(Oridecon) < 5 || countitem(Dragons_Skin) < 30 || Zeny < 200000) {
					mes "[Kaibara]";
					mes "Parece-me que não trouxe tudo que pedi para que eu fizesse uma Khukri.";
					next;
					mes "[Kaibara]";
					mes "Para fazer a Gokurin.";
					mes "Eu preciso de ^ff0000400 Escamas de dragão^000000, ^ff00005 Oridecons^000000, ^ff000030 Pele de Dragão^000000 e ^ff0000200000 Zeny^000000.";
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
					mes "Você trouxe todos os materiais e taxas.";
					mes "Aqui está sua completa Gokurin.";
					close;
				}
			}
			case 2:
			mes "[Kaibara]";
			mes "Hmm você pegou a ^ff0000Jitte^000000.";
			mes "Há uma lenda sobre esta espada que, a cada inimigo que você derrota com ela, mais forte ela fica.";
			next;
			mes "[Kaibara]";
			mes "Os materiais requiridos são 30 Aços, uma Bainha Velha e 20,000 Zeny.";
			mes "Quer que eu faça este item para você?";
			next;
			if (select("Não, obrigado","Sim! Eu Quero um!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo.";
				mes "Estes materiais são difíceis de se conseguir...";
				mes "Se um dia conseguir coletar todos os materiais, volte e fale comigo.";
				close;
			} else {
				if (countitem(Steel) < 30 || countitem(Old_Hilt) < 1 || Zeny < 20000) {
					mes "[Kaibara]";
					mes "Parece que precisa de mais materiais para que eu possa fazer uma Jitte.";
					next;
					mes "[Kaibara]";
					mes "Para que eu faça uma Jitte, eu preciso de";
					mes "^ff000030 Aços^000000, ^f00001 Bainha Velha^000000, e ^ff000020,000 Zeny^000000.";
					mes "Lembre-se dos materiais necessários, e volte depois que estiver certo de que tem todos.";
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
			mes "Hmm. Você escolheu a ^ff0000Ashura[3]^000000.";
			mes "Para que eu lhe faça uma Ashura[3], eu preciso de 25 Aços,5 Pergaminho Antigo e 32,000 Zeny.";
			mes "Quer que eu crie o item para você?";
			next;
			if (select("Não, obrigado..","Sim! Eu quero uma!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo.";
				mes "Estes materiais são dificeis de se conseguir...";
				mes "Se um dia conseguir coletar todos os materiais, volte e fale comigo..";
				close;
			} else {
				if (countitem(Steel) < 25 || countitem(Old_Magic_Circle) < 5 || Zeny < 32000) {
					mes "[Kaibara]";
					mes "Parece que não tem todos os materiais para que eu faça uma Ashura[3] para você.";
					next;
					mes "[Kaibara]";
					mes "Eu preciso de ^ff000025 Aços^000000, ^ff00005 Pergaminho Antigo^000000, e ^ff0000 32,000 Zeny^000000 para fazer uma Ashura[3].";
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
			mes "Hmm. você escolheu a ^ff0000Murasame^000000.";
			mes "Para criar a Murasame, eu preciso de 30 Aços,10 Aquamarinas e 48,000 Zeny.";
			mes "Quer que eu crie este item para você?";
			next;
			if (select("Não, obrigado","Sim! Eu quero uma!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo. Estes materiais são dificeis de se conseguir...";
				mes "Se um dia conseguir coletar todos os materiais, volte e fale comigo..";
				close;
			} else{
				if (countitem(Steel) < 30 || countitem(Skyblue_Jewel) < 10 || Zeny < 48000) {
					mes "[Kaibara]";
					mes "Parece que não trouxe todos os materiais para que eu crie a Murasame.";
					next;
					mes "[Kaibara]";
					mes "Eu preciso de ^ff000030 Aços^000000, ";
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
					mes "Aqui está sua completa Murasame.";
					close;
				}
			}
			case 5:
			mes "[Kaibara]";
			mes "Hmm. Você escolheu a ^ff0000Hakujin^000000.";
			mes "Para que eu crie uma Hakujin, eu necessito de...";
			mes "500 Ossos,5 Pérolas 10 Level 3 Pergaminhos da Cura e 120,000 Zeny.";
			mes "Você quer que eu crie este item para você?";
			next;
			if (select("Não, obrigado","Sim! Eu quero um!") == 1) {
				mes "[Kaibara]";
				mes "Hrm. Eu entendo. Estes materiais são dificeis de se conseguir...";
				mes "Se um dia conseguir coletar todos os materiais, volte e fale comigo..";
				close;
			} else {
				if (countitem(Skel_Bone) < 500 || countitem(Holy_Scroll_1_3) < 10 || countitem(Scarlet_Jewel) < 5 || Zeny < 120000) {
					mes "[Kaibara]";
					mes "Me parece que lhe faltam alguns materiais para que eu possa fazer uma Hakujin.";
					next;
					mes "[Kaibara]";
					mes "Para fazer uma Hakujin, eu preciso de...";
					mes "500 Ossos,5 Pérolas 10 Level 3 Pergaminhos da Cura e 120,000 Zeny.";
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
					mes "Eu chequei todo o material e o zeni que você trouxe.";
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
		mes "Eu sou o artesão dos Ninja Fuuma chamado Tetsu.";
		next;
		mes "[Tetsu]";
		mes "Minha vida estava indo pro buraco por causa do meu vício em apostas, então resolvi criar armas durante parte do tempo.";
		next;
		mes "[Tetsu]";
		mes "Porém, parece que você não é ninja.";
		mes "Não há como eu explicar nada então.";
		next;
		mes "[Tetsu]";
		mes "Talvez eu tenha um pouco de dinheiro para gastar, então poderiamos jogar Mah-jong juntos.";
		close;
	} else {
		mes "Eu sou o artesão dos Ninja Fuuma chamado Tetsu.";
		next;
		mes "[Tetsu]";
		mes "As coisas ficaram horriveis para min devido ao hábito de apostas...";
		mes "Então, aqui estou eu denovo fazendo armas...";
		next;
		mes "[Tetsu]";
		mes "Eu não olhei olhá-lo, mas se for algum item relacionado a Fuuma.";
		mes "Não há ninguém que chegue perto de minhas habilidades.";
		mes "Bem, olhe à sua volta, olhe.";
		next;
		switch (select("Shuriken Alado Huuma","Shuriken Roda-Gigante Huuma","Shuriken Roda-Gigante Huuma[4]","Shuriken de Fogo Huuma","Cancelar")) {
			case 1:
			mes "[Tetsu]";
			mes "Hmm. Você escolheu o ^ff0000Shuriken Alado Huuma^000000.";
			mes "Para que eu faça, eu preciso de";
			mes "50 aços,";
			mes "20 Penas de Harpias,";
			mes "5 Oridecons, e 90,000 Zeny.";
			mes "Você quer que eu crie este item para você?";
			next;
			if (select("Bem é um pouco caro","Sim! faça-o pra mim!") == 1) {
				mes "[Tetsu]";
				mes "Hmm. O custo para criar estes equipamentos é um pouco caro não?";
				mes "Certo.";
				mes "Se conseguir todos os materiais um dia, volte e fale comigo.";
				close;
			} else {
				if (countitem(Steel) < 50 || countitem(Harpys_Feather) < 20 || countitem(Oridecon) < 5 || Zeny < 90000) {
					mes "[Tetsu]";
					mes "Parece-me que não trouxe todos os materiais para que eu possa fazer um Shuriken Alado Huuma.";
					next;
					mes "[Tetsu]";
					mes "Para que eu crie uma Fuuma shuriken Beneki, eu preciso de...";
					mes "^ff000050 Aços^000000,";
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
					mes "Você trouxe os materiais corretos e zeny suficiente.";
					mes "Aqui está seu Fuuma Shuriken Beneki.";
					close;
				}
			}
			case 2:
			mes "[Tetsu]";
			mes "Hmm. Vejo que escolheu o ^ff0000Shuriken Roda-Gigante Huuma^000000.";
			mes "Para que eu possa criar, eu preciso de...";
			mes "30 Aços,";
			mes "100 Fitilhos 2 Oridecons,";
			mes "e 40,000 Zeny.";
			mes "Você quer que eu crie este item para você?";
			next;
			if (select("Bem, é bem caro...","Sim! Faça um para mim!") == 1) {
				mes "[Tetsu]";
				mes "Hmm. O custo para criar estes equipamentos é um pouco caro não?";
				mes "Certo.";
				mes "Se conseguir todos os materiais um dia, volte e fale comigo.";
				close;
			} else {
				if (countitem(Steel) < 30 || countitem(Sword_Accessory) < 100 || countitem(Oridecon) < 2 || Zeny < 40000) {
					mes "[Tetsu]";
					mes "Parece-me que não trouxe todos os materiais para que eu possa fazer um Shuriken Roda-Gigante Huuma.";
					next;
					mes "[Tetsu]";
					mes "Eu preciso de...";
					mes "^ff000030 Aços^000000,";
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
					mes "Você trouxe todos os materiais e a quantidade certa de zenys.";
					mes "Aqui está seu completo Fuuma Shuriken Roda-Gigante Huuma.";
					close;
				}
			}
			case 3:
			mes "[Tetsu]";
			mes "Hmm. Eu vejo que você escolheu o ^ff0000Shuriken Roda-Gigante Huuma[4]^000000.";
			mes "Para criar, eu preciso de...";
			mes "20 Diamantes Rachados,";
			mes "1 Shuriken Roda-Gigante Huuma 3 Oridecons,";
			mes "e 40,000 Zeny.";
			mes "Quer que eu crie este item para você?";
			next;
			mes "[Tetsu]";
			mes "E caso você ainda não saiba...";
			mes "No processo de fazer slotts na arma, sua arma perte todos os refinamentos e cartas, se ouver algum.";
			mes "Pense nisso com cuidado, e decida se realmente quer fazer isto ou não.";
			next;
			if (select("Não, obrigado.:Sim! Eu quero um!") == 2) {
				mes "[Tetsu]";
				mes "Hmm. O custo para criar estes equipamentos é um pouco caro não?";
				mes "Certo.";
				mes "Se conseguir todos os materiais um dia, volte e fale comigo.";
				close;
			} else if (countitem(Crystal_Jewel___) < 20 || countitem(Huuma_Giant_Wheel) < 1 || countitem(Oridecon) < 3 || Zeny < 40000) {
				mes "[Tetsu]";
				mes "Parece-me que não trouxe todos os materiais para que eu possa fazer um Shuriken Roda-Gigante Huuma[4].";
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
				mes "Você trouxe todos os materiais e a quantidade certa de zenys.";
				mes "Aqui está seu completo Shuriken Roda-Gigante Huuma[4].";
				close;
			}
			case 4:
			mes "[Tetsu]";
			mes "Hmm. Vejo que escolheu o ^ff0000Shuriken de Fogo Huuma^000000.";
			mes "Para que eu crie, eu preciso de...";
			mes "50 Aços,";
			mes "100 Lenha em Brasa,";
			mes "100 Corações Flamejantes,";
			mes "50 Pedra de Fogo e 78,000 Zeny.";
			mes "Quer que eu faça este item para você?";
			next;
			if (select("É um pouco caro","Sim! faça-o para mim!") == 1) {
				mes "[Tetsu]";
				mes "Hmm. O custo para criar estes equipamentos é um pouco caro não?";
				mes "Certo.";
				mes "Se conseguir todos os materiais um dia, volte e fale comigo.";
				close;
			} else {
				if (countitem(Steel) < 50 || countitem(Live_Coal) < 100 || countitem(Burning_Heart) < 100 || countitem(Flame_Stone) < 50 || Zeny < 78000) {
					mes "[Tetsu]";
					mes "Parece-me que não trouxe todos os materiais para que eu possa fazer uma Shuriken de Fogo Huuma.";
					next;
					mes "[Tetsu]";
					mes "Eu preciso de...";
					mes "^ff000050 Aços^000000,";
					mes "^ff0000100 Lenha em Brasa^000000,";
					mes "^ff0000100 Corações Flamejantes^000000,";
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
					mes "Você trouxe todos os materiais e a quantidade certa de zenys.";
					mes "Aqui está seu completo Shuriken de Fogo Huuma.";
					close;
				}
			}
			case 5:
			mes "[Tetsu]";
			mes "Que pena.";
			mes "Eu gostaria de te mostrar as armas em que pus minha alma na criação delas.";
			mes "Se você mudar de idéia, nunca é tarde para voltar e pedir.";
			close;
		}
	}
}
