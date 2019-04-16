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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudan�a de Classe para Ninja.                    |
\*-----------------------------------------------------------------*/

que_ng,30,65,3	script	Cougar#ninjaq	4_M_JOB_ASSASSIN,{
	if (Class == Job_Novice) {
		if (JobLevel < 10 || getskilllv("NV_BASIC") < 9) {
			mes("[Cougar]\n"
				"Hm? Voc� veio para aprender como se tornar um Ninja?\n"
				"Voc� n�o � suficientemente experiente ainda.\n"
				"Ent�o volte depois que lutar com monstros lhe for mais familiar.");
			close;
		}
		if (ninjaq == 0) {
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Com licen�a.\n"
				"O-ol�?");
			next;
			mes("[Cougar]\n"
				"...............................\n"
				"Como fez isso?");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Fiz o qu�?\n"
				"Eu n�o fiz nada, eu acho que n�o...");
			next;
			mes("[Cougar]\n"
				"C-como voc� � capaz de me vez?\n"
				"Era suposto que eu estivesse invis�vel a olho nu!\n"
				"Ah, agora entendi.\n"
				"Wildcat Joe deve ter te mandado para me matar!\n"
				"N�o cairei em seus truques! Morra!");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"E-espere!\n"
				"Eu nem mesmo sei quem sei quem Wildcat Joe �!\n"
				"Acalme-se, n�o h� motivo para ficar violento!");
			next;
			mes("[Cougar]\n"
				"Qu�...?\n"
				"Como se esquivou de todos os meus ataques?\n"
				"Voc� tem algum talento, eu admito.");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"...............................\n"
				"Eu vim aqui esperando mudar minha classe para Ninja.");
			next;
			mes("[Cougar]\n"
				"...Oh. Isso � tudo?\n"
				"Hmm, voc� tem grande potencial, mas n�o posso te ajudar agora.\n"
				"Tenho inimigos demais, e n�o posso baixar a guarda nem por um segundo.");
			next;
			mes("[Cougar]\n"
				"Aquele Wildcat Joe � completamente implac�vel...!\n"
				"Ele poderia atacar a qualquer hora!\n"
				"Ele faria qualquer coisa para alcan�ar a vit�ra sobre seus inimigos!");
			next;
			mes("[Cougar]\n"
				"Espere, espere, acabei de pensar em algo.\n"
				"Talvez voc� possa me ajudar.\n"
				"Fa�a o que pe�o, e irei ensin�-l"+(Sex == SEX_MALE ? "o" : "a")+" algumas de minhas habilidades.\n"
				"Se voc� realmente quiser se tornar Ninja.");
			next;
			if (select("Com certeza!","N�o, obrigado") == 2) {
				mes("[Cougar]\n"
					"Hm? Bem, tudo bem.\n"
					"Entretanto, n�o entendo porque n�o podemos nos ajudar neste pequeno dilema...");
				close;
			}
			mes("[Cougar]\n"
				"�timo!\n"
				"Agora, eu queria perguntar ask Wildcat Joe se ele concordaria com uma tr�gua tempor�ria.\n"
				"Estou ciente que ambos estamos sem armas, ent�o dever�amos nos equipar melhor antes.");
			next;
			mes("[Cougar]\n"
				"Por favor, pegue esta carta e entregue-a a Wildcat Joe, em Einbroch.\n"
				"Ele � um mestre dos disfarces, ent�o mantenha um olhar atento a ele.\n"
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
				"Mesmo que esta tarefa n�o seja t�o urgente.\n"
				"Por favor, corra para Einbroch e entregue minha carta para Wildcat Joe.");
			close;
		} else if (ninjaq == 2) {
			mes("[Cougar]\n"
				"Voc� entregou aquela carta para Wildcat Joe?\n"
				"Eu ainda preciso saber a resposta dele para minha proposta de tr�gua.\n"
				"De qualquer maneira, veja se consegue for��-lo a isso.");
			close;
		} else if (ninjaq == 3) {
			mes("[Cougar]\n"
				"Ah, voc� voltou.\n"
				"Ent�o, Wildcat Joe mandou voc� de volta com a resposta dele?\n"
				"�timo, �timo, por favor, leia-a para mim.");
			next;
			mes("[Cougar]\n"
				"Qu�...?! Como ele poderia rejeitar minha proposta de tr�gua?!\n"
				"Isto s� pode significar que ele fez outra Kunai.\n"
				"Poxa! Tenho que alcan��-lo ou estarei arruinado!");
			next;
			mes("[Cougar]\n"
				"Ou�a, voc� tem que me ajudar de novo!\n"
				"Preciso que voc� me traga alguns materiais para que eu possa criar minha pr�pria Kunai para lutar com Wildcat Joe.\n"
				"Ent�o, cumprirei nosso trato e mudarei sua classe para Ninja.");
			next;
			mes("[Cougar]\n"
				"Tudo o que precisa me trazer �\n"
				"^3355FF5 Cyfars^000000 e\n"
				"^3355FF1 Fracon^000000.\n"
				"Por favor, consiga-os o mais r�pido que puder!");
			next;
			mes("["+strcharinfo(CHAR_NAME)+"]\n"
				"Huh? Que engra�ado, Wildcat Joe me pediu para conseguir os mesmos materiais.");
			next;
			mes("[Cougar]\n"
				"Maldi��o!\n"
				"Ent�o isso significa...\n"
				"Que voc� ajudou Joe em criar sua Kunai! N�o!\n"
				"Eu deveria ter pensado nisso antes!\n"
				"Bem, � tarde demais agora. Apenas apresse-se!");
			ninjaq = 4;
			changequest(6017,6018);
			close;
		} else if (ninjaq == 4) {
			if (countitem(Cyfar) < 5 || countitem(Phracon) < 1) {
				mes("[Cougar]\n"
					"Se apresse e traga\n"
					"^3355FF5 Cyfars^000000 e\n"
					"^3355FF1 Fracon^000000\n"
					"para mim, ent�o poderei criar minha pr�pria Kunai para usar contra Wildcat Joe!");
				close;
			}
			if (SkillPoint) {
				mes("[Cougar]\n"
					"Whoa, whoa...\n"
					"Voc� ainda tem alguns Pontos de Habilidade restantes.\n"
					"� melhor gastar todos eles antes de mudar de classe, certo?");
				close;
			}
			mes("[Cougar]\n"
				"Ah, voc� est� de volta com tudo que preciso.\n"
				"Voltou antes do que eu esperava, eh?\n"
				"�timo, como prometido, te transformarei em um Ninja.");
			next;
			mes("[Cougar]\n"
				"Permita que eu me apresente formalmente.\n"
				"Eu sou o Mestre Ninja Cougar do Grupo Ninja Touga, e estou encarregado do grupo de busca para encontrar Sir Kazma.");
			next;
			mes("[Cougar]\n"
				"Sir Kazma � o chefe do meu vilarejo, mas ele fugiu.\n"
				"Isto resultou em um conflito interno entre o Grupo Ninja.\n"
				"As coisas est�o bem inst�veis agora...");
			next;
			mes("[Cougar]\n"
				"Inicialmente, n�o queria te aceitar como um Ninja, por causa dessa situa��o complicada.\n"
				"Contudo, voc� provou que � realmente digno de se juntar ao grupo dos Ninjas.");
			next;
			mes("[Cougar]\n"
				"De acordo com a carta dele, at� mesmo Joe reconhece seu valor.\n"
				"Basta lembrar que, como um Ninja, sua miss�o � sua maior prioridade.\n"
				"Mas n�o deixe os objetivos da miss�o tornem-se mais importantes que sua consci�ncia.");
			next;
			mes("[Cougar]\n"
				"''Sigilo acima de tudo.''\n"
				"Para manter nossos segredos nas sombras, voc� pode somente comprar ou vender armas Ninja em comerciantes autorizados.\n"
				"Por favor, lembre-se disso.");
			next;
			mes("[Cougar]\n"
				"A partir de hoje, voc� � um membro do espl�ndido Grupo Ninja Touga.\n"
				"Seja t�o �gil como o vento, e t�o silencioso como a o cair das sombras.");
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
				"Treine duro, se voc� quiser ser capaz de desaparecer sem deixar rastros.\n"
				"Se puder fazer isso, ter� o respeito de qualquer Ninja.");
			close;
		}
	} else {
		if (BaseClass == Job_Ninja) {
			mes("[Cougar]\n"
				"Como tem passado?\n"
				"Treine duro, se voc� quiser ser capaz de desaparecer sem deixar rastros.\n"
				"Se puder fazer isso, ter� o respeito de qualquer Ninja.");
			close;
		} else {
			mes("[Cougar]\n"
				"Qu�...? Como voc� foi capaz de me encontrar nas sombras?!\n"
				"Voc� deve ser mais que um aventureiro comum, eh?");
			close;
		}
	}
}

einbroch,184,194,3	script	Homem Suspeito#ninjaq	4_M_SITDOWN,{
	if (ninjaq == 1) {
		mes("[Homem Suspeito]\n"
			"Eu viajei para muitos pa�ses, mas nunca estive em um pr�dio t�o alto como a Torre de Einbroch.\n"
			"Todos os pr�dios na minha cidade natal s�o min�sculos em compara��o...");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Oh, voc� � de Amatsu?\n"
			"Estou procurando algu�m de l� que � chamado Wildcat Joe.");
		next;
		mes("[Homem Suspeito]\n"
			"N�o... N�o, na verdade sou de Izlude, e estou aqui em Einbroch somente por alguns min�rios.\n"
			"Diga-me, por que est� procurando por Wildcat Joe?");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Bem, preciso entregar esta carta para ele e obter sua resposta para que eu possa me tornar um Ninja.");
		next;
		mes("[Homem Suspeito]\n"
			"S�rio? Pensando bem, eu acho que j� o encontrei uma ou duas vezes nesta cidade.\n"
			"No entanto, ele prefere ser chamado de \"Red Leopard Joe\", ao inv�s de \"Wildcat Joe\".");
		next;
		mes("[Homem Suspeito]\n"
			"Eu realmente quero te ajudar a encontr�-lo.\n"
			"Mas primeiro eu preciso encontrar alguns min�rios que estou procurando.\n"
			"Se n�o se importar, poderia me ajudar?\n"
			"Depois posso te ajudar a encontrar Joe.");
		next;
		if (select("Eu o encontrarei","Claro, eu te ajudarei.") == 1) {
			mes("[Homem Suspeito]\n"
				"Tem certeza...?\n"
				"Red Leopard Joe � realmente um mestre dos disfarces.\n"
				"Voc� precisar� de toda ajudar que puder para encontr�-lo...");
			close;
		}
		mes("[Homem Suspeito]\n"
			"�timo, estou feliz por ouvir isso.\n"
			"Por favor, ajude-me a encontrar ^3355FF5 Cyfars^000000 e ^3355FF1 Fracon^000000.");
		ninjaq = 2;
		changequest(6015,6016);
		close;
	} else if (ninjaq == 2) {
		if (countitem(Cyfar) < 5 || countitem(Phracon) < 1) {
			mes("[Homem Suspeito]\n"
				"Por favor, traga ^3355FF5 Cyfars^000000 e ^3355FF1 Fracon^000000 para mim o mais r�pido que puder.\n"
				"Ent�o, eu posso te ajudar a encontrar Red Leopard Joe.");
			close;
		}
		mes("[Homem Suspeito]\n"
			"Bom, muito bom.\n"
			"Voc� trouxe os minerais...\n"
			"Agora, � minha vez de te ajudar.\n"
			"Aqui, deixe-me ver essa carta.");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"?????!!");
		next;
		mes("[Homem Suspeito]\n"
			"Por qu�?\n"
			"Voc� n�o trouxe essa carta de Cougar para mim?");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Voc� �..\n"
			"Voc� � Wildcat Joe?");
		next;
		mes("[Homem Suspeito]\n"
			"...Sim, mas prefiro ser chamado Red Leopard Joe.\n"
			"Cougar o mandou a mim, certo?\n"
			"Ele � o �nico que me chama assim.\n"
			"Ent�o voc� quer ser um ninja, eh? Hmm, est� bem.");
		next;
		mes("[Red Leopard Joe]\n"
			"Se voc� quiser ser um Ninja, deve sempre ser cuidados"+(Sex == SEX_MALE ? "o" : "a")+" com o que v� e em o quem confia.\n"
			"N�o se esque�a de que, se os seus segredos forem descobertos, ent�o voc� est� acabado como Ninja.");
		next;
		mes("[Red Leopard Joe]\n"
			"Lembre-se de se mover rapidamente, e de sempre desaparecer sem deixar rastros.\n"
			"Permanecer oculto nas sombras � realmente nosso poder supremo.");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"Entendo... ...........");
		next;
		mes("[Red Leopard Joe]\n"
			"Por agora, deixe-me ler esta carta.\n"
			"Vamos ver... Hm.\n"
			"Pensei que Cougar queria me desafiar de novo, mas na verdade ele quer uma tr�gua tempor�ria? Hah!");
		next;
		mes("[Red Leopard Joe]\n"
			"Obrigado por sua ajuda, agora que tenho min�rios, preciso construir uma Kunai!\n"
			"Hahaha! N�o concordarei com uma tr�gua quando eu tenho a vantagem!");
		next;
		mes("[Red Leopard Joe]\n"
			"De qualquer maneira, deixe-me escrever minha resposta para ele.\n"
			"Tamb�m vou escrever uma recomenda��o para voc�...\n"
			"Acho que voc� vai se tornar um excelente Ninja, mesmo que eu tenha acabado de te enganar.");
		next;
		mes("["+strcharinfo(CHAR_NAME)+"]\n"
			"......\n"
			".........\n"
			"............");
		next;
		mes("[Red Leopard Joe]\n"
			"Aqui est�.\n"
			"Por favor, leve esta carta para Cougar.\n"
			"Demoraria um pouco para voltar para Amatsu, ent�o deixe-me mand�-lo diretamente para l�...");
		delitem(Phracon,1);
		delitem(Cyfar,5);
		ninjaq = 3;
		changequest(6016,6017);
		close2;
		warp("amatsu",113,127);
		end;
	} else if (ninjaq == 3) {
		mes("[Red Leopard Joe]\n"
			"Eh? N�o sei o que aconteceu, mas parece que voc� ainda n�o entregou minha resposta para Cougar.\n"
			"Devo enviar-lhe diretamente para Amatsu agora?");
		next;
		if (select("N�o, obrigado", "Sim, por favor") == 1) {
			mes("[Red Leopard Joe]\n"
				"Certo.\n"
				"Bem, eu estava s� tentando poupar algum tempo seu.");
			close;
		}
		mes("[Red Leopard Joe]\n"
			"Okay, ent�o.\n"
			"Adeus por enquanto.");
		close2;
		warp("amatsu",113,127);
		end;
	} else if (ninjaq == 4) {
		mes("[Red Leopard Joe]\n"
			"Cougar te pediu para obter alguns materiais tamb�m?\n"
			"Oh, bem, suponho que n�o posso culp�-lo.\n"
			"Ali�s, devo ser capaz de venc�-lo em uma luta justa");
		close;
	} else if (BaseClass == Job_Ninja) {
		mes("[Red Leopard Joe]\n"
			"Oh, voc� � um Ninja.\n"
			"Espero que continue a treinar e maximizar todas as habilidades de Ninja que puder.\n"
			"Sempre se lembre de misturar-se com as sombras.");
		close;
	} else {
		mes("[Turista]\n"
			"Eu viajei para muitos pa�ses, mas nunca estive em um pr�dio t�o alto como a Torre de Einbroch.\n"
			"Todos os pr�dios na minha cidade natal s�o min�sculos em compara��o...");
		close;
	}
}
