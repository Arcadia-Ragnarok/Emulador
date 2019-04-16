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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudança de Classe para Ninja.                    |
\*-----------------------------------------------------------------*/

que_ng,30,65,3	script	Cougar#ninjaq	4_M_JOB_ASSASSIN,{
	if (Class == Job_Novice) {
		if (JobLevel < 10 || getskilllv("NV_BASIC") < 9) {
			mes("[Cougar]\n"
				"Hm? Você veio para aprender como se tornar um Ninja?\n"
				"Você não é suficientemente experiente ainda.\n"
				"Então volte depois que lutar com monstros lhe for mais familiar.");
			close;
		}
		if (ninjaq == 0) {
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Com licença.\n"
				"O-olá?");
			next;
			mes("[Cougar]\n"
				"...............................\n"
				"Como fez isso?");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Fiz o quê?\n"
				"Eu não fiz nada, eu acho que não...");
			next;
			mes("[Cougar]\n"
				"C-como você é capaz de me vez?\n"
				"Era suposto que eu estivesse invisível a olho nu!\n"
				"Ah, agora entendi.\n"
				"Wildcat Joe deve ter te mandado para me matar!\n"
				"Não cairei em seus truques! Morra!");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"E-espere!\n"
				"Eu nem mesmo sei quem sei quem Wildcat Joe é!\n"
				"Acalme-se, não há motivo para ficar violento!");
			next;
			mes("[Cougar]\n"
				"Quê...?\n"
				"Como se esquivou de todos os meus ataques?\n"
				"Você tem algum talento, eu admito.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"...............................\n"
				"Eu vim aqui esperando mudar minha classe para Ninja.");
			next;
			mes("[Cougar]\n"
				"...Oh. Isso é tudo?\n"
				"Hmm, você tem grande potencial, mas não posso te ajudar agora.\n"
				"Tenho inimigos demais, e não posso baixar a guarda nem por um segundo.");
			next;
			mes("[Cougar]\n"
				"Aquele Wildcat Joe é completamente implacável...!\n"
				"Ele poderia atacar a qualquer hora!\n"
				"Ele faria qualquer coisa para alcançar a vitóra sobre seus inimigos!");
			next;
			mes("[Cougar]\n"
				"Espere, espere, acabei de pensar em algo.\n"
				"Talvez você possa me ajudar.\n"
				"Faça o que peço, e irei ensiná-l"+(Sex == SEX_MALE ? "o" : "a")+" algumas de minhas habilidades.\n"
				"Se você realmente quiser se tornar Ninja.");
			next;
			if (select("Com certeza!","Não, obrigado") == 2) {
				mes("[Cougar]\n"
					"Hm? Bem, tudo bem.\n"
					"Entretanto, não entendo porque não podemos nos ajudar neste pequeno dilema...");
				close;
			}
			mes("[Cougar]\n"
				"Ótimo!\n"
				"Agora, eu queria perguntar ask Wildcat Joe se ele concordaria com uma trégua temporária.\n"
				"Estou ciente que ambos estamos sem armas, então deveríamos nos equipar melhor antes.");
			next;
			mes("[Cougar]\n"
				"Por favor, pegue esta carta e entregue-a a Wildcat Joe, em Einbroch.\n"
				"Ele é um mestre dos disfarces, então mantenha um olhar atento a ele.\n"
				"Ah, e procure-o em um local alto.");
			next;
			mes("[Cougar]\n"
				"Sim, Wildcat Joe sempre teve uma queda por se esconder em lugares altos.\n"
				"De qualquer maneira, depois de entregar-lhe a carta, volte e me diga sua resposta.");
			ninjaq = 1;
			setquest(6015);
			close;
		} else if (ninjaq == 1) {
			mes("[Cougar]\n"
				"Mesmo que esta tarefa não seja tão urgente.\n"
				"Por favor, corra para Einbroch e entregue minha carta para Wildcat Joe.");
			close;
		} else if (ninjaq == 2) {
			mes("[Cougar]\n"
				"Você entregou aquela carta para Wildcat Joe?\n"
				"Eu ainda preciso saber a resposta dele para minha proposta de trégua.\n"
				"De qualquer maneira, veja se consegue forçá-lo a isso.");
			close;
		} else if (ninjaq == 3) {
			mes("[Cougar]\n"
				"Ah, você voltou.\n"
				"Então, Wildcat Joe mandou você de volta com a resposta dele?\n"
				"Ótimo, ótimo, por favor, leia-a para mim.");
			next;
			mes("[Cougar]\n"
				"Quê...?! Como ele poderia rejeitar minha proposta de trégua?!\n"
				"Isto só pode significar que ele fez outra Kunai.\n"
				"Poxa! Tenho que alcançá-lo ou estarei arruinado!");
			next;
			mes("[Cougar]\n"
				"Ouça, você tem que me ajudar de novo!\n"
				"Preciso que você me traga alguns materiais para que eu possa criar minha própria Kunai para lutar com Wildcat Joe.\n"
				"Então, cumprirei nosso trato e mudarei sua classe para Ninja.");
			next;
			mes("[Cougar]\n"
				"Tudo o que precisa me trazer é\n"
				"^3355FF5 Cyfars^000000 e\n"
				"^3355FF1 Fracon^000000.\n"
				"Por favor, consiga-os o mais rápido que puder!");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Huh? Que engraçado, Wildcat Joe me pediu para conseguir os mesmos materiais.");
			next;
			mes("[Cougar]\n"
				"Maldição!\n"
				"Então isso significa...\n"
				"Que você ajudou Joe em criar sua Kunai! Não!\n"
				"Eu deveria ter pensado nisso antes!\n"
				"Bem, é tarde demais agora. Apenas apresse-se!");
			ninjaq = 4;
			changequest(6017,6018);
			close;
		} else if (ninjaq == 4) {
			if (countitem(Cyfar) < 5 || countitem(Phracon) < 1) {
				mes("[Cougar]\n"
					"Se apresse e traga\n"
					"^3355FF5 Cyfars^000000 e\n"
					"^3355FF1 Fracon^000000\n"
					"para mim, então poderei criar minha própria Kunai para usar contra Wildcat Joe!");
				close;
			}
			if (SkillPoint) {
				mes("[Cougar]\n"
					"Whoa, whoa...\n"
					"Você ainda tem alguns Pontos de Habilidade restantes.\n"
					"É melhor gastar todos eles antes de mudar de classe, certo?");
				close;
			}
			mes("[Cougar]\n"
				"Ah, você está de volta com tudo que preciso.\n"
				"Voltou antes do que eu esperava, eh?\n"
				"Ótimo, como prometido, te transformarei em um Ninja.");
			next;
			mes("[Cougar]\n"
				"Permita que eu me apresente formalmente.\n"
				"Eu sou o Mestre Ninja Cougar do Grupo Ninja Touga, e estou encarregado do grupo de busca para encontrar Sir Kazma.");
			next;
			mes("[Cougar]\n"
				"Sir Kazma é o chefe do meu vilarejo, mas ele fugiu.\n"
				"Isto resultou em um conflito interno entre o Grupo Ninja.\n"
				"As coisas estão bem instáveis agora...");
			next;
			mes("[Cougar]\n"
				"Inicialmente, não queria te aceitar como um Ninja, por causa dessa situação complicada.\n"
				"Contudo, você provou que é realmente digno de se juntar ao grupo dos Ninjas.");
			next;
			mes("[Cougar]\n"
				"De acordo com a carta dele, até mesmo Joe reconhece seu valor.\n"
				"Basta lembrar que, como um Ninja, sua missão é sua maior prioridade.\n"
				"Mas não deixe os objetivos da missão tornem-se mais importantes que sua consciência.");
			next;
			mes("[Cougar]\n"
				"''Sigilo acima de tudo.''\n"
				"Para manter nossos segredos nas sombras, você pode somente comprar ou vender armas Ninja em comerciantes autorizados.\n"
				"Por favor, lembre-se disso.");
			next;
			mes("[Cougar]\n"
				"A partir de hoje, você é um membro do esplêndido Grupo Ninja Touga.\n"
				"Seja tão ágil como o vento, e tão silencioso como a o cair das sombras.");
			delitem(Cyfar,5);
			delitem(Phracon,1);
			getitem(Asura,1);
			completequest(6018);
			jobchange(Job_Ninja);
			callfunc("ClearJobQuest");
			close;
		} else {
			mes("[Cougar]\n"
				"Como tem passado?\n"
				"Treine duro, se você quiser ser capaz de desaparecer sem deixar rastros.\n"
				"Se puder fazer isso, terá o respeito de qualquer Ninja.");
			close;
		}
	} else {
		if (BaseClass == Job_Ninja) {
			mes("[Cougar]\n"
				"Como tem passado?\n"
				"Treine duro, se você quiser ser capaz de desaparecer sem deixar rastros.\n"
				"Se puder fazer isso, terá o respeito de qualquer Ninja.");
			close;
		} else {
			mes("[Cougar]\n"
				"Quê...? Como você foi capaz de me encontrar nas sombras?!\n"
				"Você deve ser mais que um aventureiro comum, eh?");
			close;
		}
	}
}

einbroch,184,194,3	script	Homem Suspeito#ninjaq	4_M_SITDOWN,{
	if (ninjaq == 1) {
		mes("[Homem Suspeito]\n"
			"Eu viajei para muitos países, mas nunca estive em um prédio tão alto como a Torre de Einbroch.\n"
			"Todos os prédios na minha cidade natal são minúsculos em comparação...");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Oh, você é de Amatsu?\n"
			"Estou procurando alguém de lá que é chamado Wildcat Joe.");
		next;
		mes("[Homem Suspeito]\n"
			"Não... Não, na verdade sou de Izlude, e estou aqui em Einbroch somente por alguns minérios.\n"
			"Diga-me, por que está procurando por Wildcat Joe?");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Bem, preciso entregar esta carta para ele e obter sua resposta para que eu possa me tornar um Ninja.");
		next;
		mes("[Homem Suspeito]\n"
			"Sério? Pensando bem, eu acho que já o encontrei uma ou duas vezes nesta cidade.\n"
			"No entanto, ele prefere ser chamado de \"Red Leopard Joe\", ao invés de \"Wildcat Joe\".");
		next;
		mes("[Homem Suspeito]\n"
			"Eu realmente quero te ajudar a encontrá-lo.\n"
			"Mas primeiro eu preciso encontrar alguns minérios que estou procurando.\n"
			"Se não se importar, poderia me ajudar?\n"
			"Depois posso te ajudar a encontrar Joe.");
		next;
		if (select("Eu o encontrarei","Claro, eu te ajudarei.") == 1) {
			mes("[Homem Suspeito]\n"
				"Tem certeza...?\n"
				"Red Leopard Joe é realmente um mestre dos disfarces.\n"
				"Você precisará de toda ajudar que puder para encontrá-lo...");
			close;
		}
		mes("[Homem Suspeito]\n"
			"Ótimo, estou feliz por ouvir isso.\n"
			"Por favor, ajude-me a encontrar ^3355FF5 Cyfars^000000 e ^3355FF1 Fracon^000000.");
		ninjaq = 2;
		changequest(6015,6016);
		close;
	} else if (ninjaq == 2) {
		if (countitem(Cyfar) < 5 || countitem(Phracon) < 1) {
			mes("[Homem Suspeito]\n"
				"Por favor, traga ^3355FF5 Cyfars^000000 e ^3355FF1 Fracon^000000 para mim o mais rápido que puder.\n"
				"Então, eu posso te ajudar a encontrar Red Leopard Joe.");
			close;
		}
		mes("[Homem Suspeito]\n"
			"Bom, muito bom.\n"
			"Você trouxe os minerais...\n"
			"Agora, é minha vez de te ajudar.\n"
			"Aqui, deixe-me ver essa carta.");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"?????!!");
		next;
		mes("[Homem Suspeito]\n"
			"Por quê?\n"
			"Você não trouxe essa carta de Cougar para mim?");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Você é..\n"
			"Você é Wildcat Joe?");
		next;
		mes("[Homem Suspeito]\n"
			"...Sim, mas prefiro ser chamado Red Leopard Joe.\n"
			"Cougar o mandou a mim, certo?\n"
			"Ele é o único que me chama assim.\n"
			"Então você quer ser um ninja, eh? Hmm, está bem.");
		next;
		mes("[Red Leopard Joe]\n"
			"Se você quiser ser um Ninja, deve sempre ser cuidados"+(Sex == SEX_MALE ? "o" : "a")+" com o que vê e em o quem confia.\n"
			"Não se esqueça de que, se os seus segredos forem descobertos, então você está acabado como Ninja.");
		next;
		mes("[Red Leopard Joe]\n"
			"Lembre-se de se mover rapidamente, e de sempre desaparecer sem deixar rastros.\n"
			"Permanecer oculto nas sombras é realmente nosso poder supremo.");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Entendo... ...........");
		next;
		mes("[Red Leopard Joe]\n"
			"Por agora, deixe-me ler esta carta.\n"
			"Vamos ver... Hm.\n"
			"Pensei que Cougar queria me desafiar de novo, mas na verdade ele quer uma trégua temporária? Hah!");
		next;
		mes("[Red Leopard Joe]\n"
			"Obrigado por sua ajuda, agora que tenho minérios, preciso construir uma Kunai!\n"
			"Hahaha! Não concordarei com uma trégua quando eu tenho a vantagem!");
		next;
		mes("[Red Leopard Joe]\n"
			"De qualquer maneira, deixe-me escrever minha resposta para ele.\n"
			"Também vou escrever uma recomendação para você...\n"
			"Acho que você vai se tornar um excelente Ninja, mesmo que eu tenha acabado de te enganar.");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"......\n"
			".........\n"
			"............");
		next;
		mes("[Red Leopard Joe]\n"
			"Aqui está.\n"
			"Por favor, leve esta carta para Cougar.\n"
			"Demoraria um pouco para voltar para Amatsu, então deixe-me mandá-lo diretamente para lá...");
		delitem(Phracon,1);
		delitem(Cyfar,5);
		ninjaq = 3;
		changequest(6016,6017);
		close2;
		warp("amatsu",113,127);
		end;
	} else if (ninjaq == 3) {
		mes("[Red Leopard Joe]\n"
			"Eh? Não sei o que aconteceu, mas parece que você ainda não entregou minha resposta para Cougar.\n"
			"Devo enviar-lhe diretamente para Amatsu agora?");
		next;
		if (select("Não, obrigado", "Sim, por favor") == 1) {
			mes("[Red Leopard Joe]\n"
				"Certo.\n"
				"Bem, eu estava só tentando poupar algum tempo seu.");
			close;
		}
		mes("[Red Leopard Joe]\n"
			"Okay, então.\n"
			"Adeus por enquanto.");
		close2;
		warp("amatsu",113,127);
		end;
	} else if (ninjaq == 4) {
		mes("[Red Leopard Joe]\n"
			"Cougar te pediu para obter alguns materiais também?\n"
			"Oh, bem, suponho que não posso culpá-lo.\n"
			"Aliás, devo ser capaz de vencê-lo em uma luta justa");
		close;
	} else if (BaseClass == Job_Ninja) {
		mes("[Red Leopard Joe]\n"
			"Oh, você é um Ninja.\n"
			"Espero que continue a treinar e maximizar todas as habilidades de Ninja que puder.\n"
			"Sempre se lembre de misturar-se com as sombras.");
		close;
	} else {
		mes("[Turista]\n"
			"Eu viajei para muitos países, mas nunca estive em um prédio tão alto como a Torre de Einbroch.\n"
			"Todos os prédios na minha cidade natal são minúsculos em comparação...");
		close;
	}
}
