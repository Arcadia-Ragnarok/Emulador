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
| - Vers�o: Spell Master.                                           |
| - Nota: Quest de Mudan�a de Classe para Ninja.                    |
\*-----------------------------------------------------------------*/

que_ng,30,65,3	script	Cougar#ninjaq	4_M_JOB_ASSASSIN,{
	if (Class == Job_Novice) {
		if (JobLevel < 10 || getskilllv("NV_BASIC") < 9) {
			mes "[Cougar]";
			mes "Hm? Voc� veio para aprender como se tornar um Ninja?";
			mes "Voc� n�o � suficientemente experiente ainda.";
			mes "Ent�o volte depois que lutar com monstros lhe for mais familiar.";
			close;
		}
		if (ninjaq == 0) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Com licen�a.";
			mes "O-ol�?";
			next;
			mes "[Cougar]";
			mes "...............................";
			mes "Como fez isso?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Fiz o qu�?";
			mes "Eu n�o fiz nada, eu acho que n�o...";
			next;
			mes "[Cougar]";
			mes "C-como voc� � capaz de me vez?";
			mes "Era suposto que eu estivesse invis�vel a olho nu!";
			mes "Ah, agora entendi.";
			mes "Wildcat Joe deve ter te mandado para me matar!";
			mes "N�o cairei em seus truques! Morra!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "E-espere!";
			mes "Eu nem mesmo sei quem sei quem Wildcat Joe �!";
			mes "Acalme-se, n�o h� motivo para ficar violento!";
			next;
			mes "[Cougar]";
			mes "Qu�...?";
			mes "Como se esquivou de todos os meus ataques?";
			mes "Voc� tem algum talento, eu admito.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "...............................";
			mes "Eu vim aqui esperando mudar minha classe para Ninja.";
			next;
			mes "[Cougar]";
			mes "...Oh. Isso � tudo?";
			mes "Hmm, voc� tem grande potencial, mas n�o posso te ajudar agora.";
			mes "Tenho inimigos demais, e n�o posso baixar a guarda nem por um segundo.";
			next;
			mes "[Cougar]";
			mes "Aquele Wildcat Joe � completamente implac�vel...!";
			mes "Ele poderia atacar a qualquer hora!";
			mes "Ele faria qualquer coisa para alcan�ar a vit�ra sobre seus inimigos!";
			next;
			mes "[Cougar]";
			mes "Espere, espere, acabei de pensar em algo.";
			mes "Talvez voc� possa me ajudar.";
			mes "Fa�a o que pe�o, e irei ensin�-l"+(Sex == SEX_MALE ? "o" : "a")+" algumas de minhas habilidades.";
			mes "Se voc� realmente quiser se tornar Ninja.";
			next;
			if(select("Com certeza!","N�o, obrigado") == 2) {
				mes "[Cougar]";
				mes "Hm? Bem, tudo bem.";
				mes "Entretanto, n�o entendo porque n�o podemos nos ajudar neste pequeno dilema...";
				close;
			}
			mes "[Cougar]";
			mes "�timo!";
			mes "Agora, eu queria perguntar ask Wildcat Joe se ele concordaria com uma tr�gua tempor�ria.";
			mes "Estou ciente que ambos estamos sem armas, ent�o dever�amos nos equipar melhor antes.";
			next;
			mes "[Cougar]";
			mes "Por favor, pegue esta carta e entregue-a a Wildcat Joe, em Einbroch.";
			mes "Ele � um mestre dos disfarces, ent�o mantenha um olhar atento a ele.";
			mes "Ah, e procure-o em um local alto.";
			next;
			mes "[Cougar]";
			mes "Sim, Wildcat Joe sempre teve uma queda por se esconder em lugares altos.";
			mes "De qualquer maneira, depois de entregar-lhe a carta, volte e me diga sua resposta.";
			ninjaq = 1;
			setquest (6015);
			close;
		} else if (ninjaq == 1) {
			mes "[Cougar]";
			mes "Mesmo que esta tarefa n�o seja t�o urgente.";
			mes "Por favor, corra para Einbroch e entregue minha carta para Wildcat Joe.";
			close;
		} else if (ninjaq == 2) {
			mes "[Cougar]";
			mes "Voc� entregou aquela carta para Wildcat Joe?";
			mes "Eu ainda preciso saber a resposta dele para minha proposta de tr�gua.";
			mes "De qualquer maneira, veja se consegue for��-lo a isso.";
			close;
		} else if (ninjaq == 3) {
			mes "[Cougar]";
			mes "Ah, voc� voltou.";
			mes "Ent�o, Wildcat Joe mandou voc� de volta com a resposta dele?";
			mes "�timo, �timo, por favor, leia-a para mim.";
			next;
			mes "[Cougar]";
			mes "Qu�...?! Como ele poderia rejeitar minha proposta de tr�gua?!";
			mes "Isto s� pode significar que ele fez outra Kunai.";
			mes "Poxa! Tenho que alcan��-lo ou estarei arruinado!";
			next;
			mes "[Cougar]";
			mes "Ou�a, voc� tem que me ajudar de novo!";
			mes "Preciso que voc� me traga alguns materiais para que eu possa criar minha pr�pria Kunai para lutar com Wildcat Joe.";
			mes "Ent�o, cumprirei nosso trato e mudarei sua classe para Ninja.";
			next;
			mes "[Cougar]";
			mes "Tudo o que precisa me trazer �";
			mes "^3355FF5 Cyfars^000000 e";
			mes "^3355FF1 Fracon^000000.";
			mes "Por favor, consiga-os o mais r�pido que puder!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Huh? Que engra�ado, Wildcat Joe me pediu para conseguir os mesmos materiais.";
			next;
			mes "[Cougar]";
			mes "Maldi��o!";
			mes "Ent�o isso significa...";
			mes "Que voc� ajudou Joe em criar sua Kunai! N�o!";
			mes "Eu deveria ter pensado nisso antes!";
			mes "Bem, � tarde demais agora. Apenas apresse-se!";
			ninjaq = 4;
			changequest (6017,6018);
			close;
		} else if (ninjaq == 4) {
			if (countitem(Cyfar) < 5 || countitem(Phracon) < 1) {
				mes "[Cougar]";
				mes "Se apresse e traga";
				mes "^3355FF5 Cyfars^000000 e";
				mes "^3355FF1 Fracon^000000";
				mes "para mim, ent�o poderei criar minha pr�pria Kunai para usar contra Wildcat Joe!";
				close;
			}
			if (SkillPoint) {
				mes "[Cougar]";
				mes "Whoa, whoa...";
				mes "Voc� ainda tem alguns Pontos de Habilidade restantes.";
				mes "� melhor gastar todos eles antes de mudar de classe, certo?";
				close;
			}
			mes "[Cougar]";
			mes "Ah, voc� est� de volta com tudo que preciso.";
			mes "Voltou antes do que eu esperava, eh?";
			mes "�timo, como prometido, te transformarei em um Ninja.";
			next;
			mes "[Cougar]";
			mes "Permita que eu me apresente formalmente.";
			mes "Eu sou o Mestre Ninja Cougar do Grupo Ninja Touga, e estou encarregado do grupo de busca para encontrar Sir Kazma.";
			next;
			mes "[Cougar]";
			mes "Sir Kazma � o chefe do meu vilarejo, mas ele fugiu.";
			mes "Isto resultou em um conflito interno entre o Grupo Ninja.";
			mes "As coisas est�o bem inst�veis agora...";
			next;
			mes "[Cougar]";
			mes "Inicialmente, n�o queria te aceitar como um Ninja, por causa dessa situa��o complicada.";
			mes "Contudo, voc� provou que � realmente digno de se juntar ao grupo dos Ninjas.";
			next;
			mes "[Cougar]";
			mes "De acordo com a carta dele, at� mesmo Joe reconhece seu valor.";
			mes "Basta lembrar que, como um Ninja, sua miss�o � sua maior prioridade.";
			mes "Mas n�o deixe os objetivos da miss�o tornem-se mais importantes que sua consci�ncia.";
			next;
			mes "[Cougar]";
			mes "''Sigilo acima de tudo.''";
			mes "Para manter nossos segredos nas sombras, voc� pode somente comprar ou vender armas Ninja em comerciantes autorizados.";
			mes "Por favor, lembre-se disso.";
			next;
			mes "[Cougar]";
			mes "A partir de hoje, voc� � um membro do espl�ndido Grupo Ninja Touga.";
			mes "Seja t�o �gil como o vento, e t�o silencioso como a o cair das sombras.";
			jobchange (Job_Ninja);
			callfunc ("ClearJobVar");
			delitem (Cyfar,5);
			delitem (Phracon,1);
			getitem (Asura,1);
			completequest (6018);
			close;
		} else {
			mes "[Cougar]";
			mes "Como tem passado?";
			mes "Treine duro, se voc� quiser ser capaz de desaparecer sem deixar rastros.";
			mes "Se puder fazer isso, ter� o respeito de qualquer Ninja.";
			close;
		}
	} else {
		if (BaseClass == Job_Ninja) {
			mes "[Cougar]";
			mes "Como tem passado?";
			mes "Treine duro, se voc� quiser ser capaz de desaparecer sem deixar rastros.";
			mes "Se puder fazer isso, ter� o respeito de qualquer Ninja.";
			close;
		} else {
			mes "[Cougar]";
			mes "Qu�...? Como voc� foi capaz de me encontrar nas sombras?!";
			mes "Voc� deve ser mais que um aventureiro comum, eh?";
			close;
		}
	}
}

einbroch,184,194,3	script	Homem Suspeito#ninjaq	4_M_SITDOWN,{
	if (ninjaq == 1) {
		mes "[Homem Suspeito]";
		mes "Eu viajei para muitos pa�ses, mas nunca estive em um pr�dio t�o alto como a Torre de Einbroch.";
		mes "Todos os pr�dios na minha cidade natal s�o min�sculos em compara��o...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, voc� � de Amatsu?";
		mes "Estou procurando algu�m de l� que � chamado Wildcat Joe.";
		next;
		mes "[Homem Suspeito]";
		mes "N�o... N�o, na verdade sou de Izlude, e estou aqui em Einbroch somente por alguns min�rios.";
		mes "Diga-me, por que est� procurando por Wildcat Joe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, preciso entregar esta carta para ele e obter sua resposta para que eu possa me tornar um Ninja.";
		next;
		mes "[Homem Suspeito]";
		mes "S�rio? Pensando bem, eu acho que j� o encontrei uma ou duas vezes nesta cidade.";
		mes "No entanto, ele prefere ser chamado de \"Red Leopard Joe\", ao inv�s de \"Wildcat Joe\".";
		next;
		mes "[Homem Suspeito]";
		mes "Eu realmente quero te ajudar a encontr�-lo.";
		mes "Mas primeiro eu preciso encontrar alguns min�rios que estou procurando.";
		mes "Se n�o se importar, poderia me ajudar?";
		mes "Depois posso te ajudar a encontrar Joe.";
		next;
		if (select("Eu o encontrarei","Claro, eu te ajudarei.") == 1) {
			mes "[Homem Suspeito]";
			mes "Tem certeza...?";
			mes "Red Leopard Joe � realmente um mestre dos disfarces.";
			mes "Voc� precisar� de toda ajudar que puder para encontr�-lo...";
			close;
		}
		mes "[Homem Suspeito]";
		mes "�timo, estou feliz por ouvir isso.";
		mes "Por favor, ajude-me a encontrar ^3355FF5 Cyfars^000000 e ^3355FF1 Fracon^000000.";
		ninjaq = 2;
		changequest (6015,6016);
		close;
	} else if (ninjaq == 2) {
		if (countitem(Cyfar) < 5 || countitem(Phracon) < 1) {
			mes "[Homem Suspeito]";
			mes "Por favor, traga ^3355FF5 Cyfars^000000 e ^3355FF1 Fracon^000000 para mim o mais r�pido que puder.";
			mes "Ent�o, eu posso te ajudar a encontrar Red Leopard Joe.";
			close;
		}
		mes "[Homem Suspeito]";
		mes "Bom, muito bom.";
		mes "Voc� trouxe os minerais...";
		mes "Agora, � minha vez de te ajudar.";
		mes "Aqui, deixe-me ver essa carta.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "?????!!";
		next;
		mes "[Homem Suspeito]";
		mes "Por qu�?";
		mes "Voc� n�o trouxe essa carta de Cougar para mim?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� �..";
		mes "Voc� � Wildcat Joe?";
		next;
		mes "[Homem Suspeito]";
		mes "...Sim, mas prefiro ser chamado Red Leopard Joe.";
		mes "Cougar o mandou a mim, certo?";
		mes "Ele � o �nico que me chama assim.";
		mes "Ent�o voc� quer ser um ninja, eh? Hmm, est� bem.";
		next;
		mes "[Red Leopard Joe]";
		mes "Se voc� quiser ser um Ninja, deve sempre ser cuidados"+(Sex == SEX_MALE ? "o" : "a")+" com o que v� e em o quem confia.";
		mes "N�o se esque�a de que, se os seus segredos forem descobertos, ent�o voc� est� acabado como Ninja.";
		next;
		mes "[Red Leopard Joe]";
		mes "Lembre-se de se mover rapidamente, e de sempre desaparecer sem deixar rastros.";
		mes "Permanecer oculto nas sombras � realmente nosso poder supremo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Entendo... ...........";
		next;
		mes "[Red Leopard Joe]";
		mes "Por agora, deixe-me ler esta carta.";
		mes "Vamos ver... Hm.";
		mes "Pensei que Cougar queria me desafiar de novo, mas na verdade ele quer uma tr�gua tempor�ria? Hah!";
		next;
		mes "[Red Leopard Joe]";
		mes "Obrigado por sua ajuda, agora que tenho min�rios, preciso construir uma Kunai!";
		mes "Hahaha! N�o concordarei com uma tr�gua quando eu tenho a vantagem!";
		next;
		mes "[Red Leopard Joe]";
		mes "De qualquer maneira, deixe-me escrever minha resposta para ele.";
		mes "Tamb�m vou escrever uma recomenda��o para voc�...";
		mes "Acho que voc� vai se tornar um excelente Ninja, mesmo que eu tenha acabado de te enganar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "......";
		mes ".........";
		mes "............";
		next;
		mes "[Red Leopard Joe]";
		mes "Aqui est�.";
		mes "Por favor, leve esta carta para Cougar.";
		mes "Demoraria um pouco para voltar para Amatsu, ent�o deixe-me mand�-lo diretamente para l�...";
		delitem (Phracon,1);
		delitem (Cyfar,5);
		ninjaq = 3;
		changequest (6016,6017);
		close2;
		warp ("amatsu",113,127);
		end;
	} else if (ninjaq == 3) {
		mes "[Red Leopard Joe]";
		mes "Eh? N�o sei o que aconteceu, mas parece que voc� ainda n�o entregou minha resposta para Cougar.";
		mes "Devo enviar-lhe diretamente para Amatsu agora?";
		next;
		if (select("N�o, obrigado","Sim, por favor") == 1) {
			mes "[Red Leopard Joe]";
			mes "Certo.";
			mes "Bem, eu estava s� tentando poupar algum tempo seu.";
			close;
		}
		mes "[Red Leopard Joe]";
		mes "Okay, ent�o.";
		mes "Adeus por enquanto.";
		close2;
		warp ("amatsu",113,127);
		end;
	} else if (ninjaq == 4) {
		mes "[Red Leopard Joe]";
		mes "Cougar te pediu para obter alguns materiais tamb�m?";
		mes "Oh, bem, suponho que n�o posso culp�-lo.";
		mes "Ali�s, devo ser capaz de venc�-lo em uma luta justa~";
		close;
	} else if (BaseClass == Job_Ninja) {
		mes "[Red Leopard Joe]";
		mes "Oh, voc� � um Ninja.";
		mes "Espero que continue a treinar e maximizar todas as habilidades de Ninja que puder.";
		mes "Sempre se lembre de misturar-se com as sombras.";
		close;
	} else {
		mes "[Turista]";
		mes "Eu viajei para muitos pa�ses, mas nunca estive em um pr�dio t�o alto como a Torre de Einbroch.";
		mes "Todos os pr�dios na minha cidade natal s�o min�sculos em compara��o...";
		close;
	}
}
