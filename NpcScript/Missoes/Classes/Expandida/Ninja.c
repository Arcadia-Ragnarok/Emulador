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
| - Versão: Spell Master.                                           |
| - Nota: Quest de Mudança de Classe para Ninja.                    |
\*-----------------------------------------------------------------*/

que_ng,30,65,3	script	Cougar#ninjaq	4_M_JOB_ASSASSIN,{
	if (Class == Job_Novice) {
		if (JobLevel < 10 || getskilllv("NV_BASIC") < 9) {
			mes "[Cougar]";
			mes "Hm? Você veio para aprender como se tornar um Ninja?";
			mes "Você não é suficientemente experiente ainda.";
			mes "Então volte depois que lutar com monstros lhe for mais familiar.";
			close;
		}
		if (ninjaq == 0) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Com licença.";
			mes "O-olá?";
			next;
			mes "[Cougar]";
			mes "...............................";
			mes "Como fez isso?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Fiz o quê?";
			mes "Eu não fiz nada, eu acho que não...";
			next;
			mes "[Cougar]";
			mes "C-como você é capaz de me vez?";
			mes "Era suposto que eu estivesse invisível a olho nu!";
			mes "Ah, agora entendi.";
			mes "Wildcat Joe deve ter te mandado para me matar!";
			mes "Não cairei em seus truques! Morra!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "E-espere!";
			mes "Eu nem mesmo sei quem sei quem Wildcat Joe é!";
			mes "Acalme-se, não há motivo para ficar violento!";
			next;
			mes "[Cougar]";
			mes "Quê...?";
			mes "Como se esquivou de todos os meus ataques?";
			mes "Você tem algum talento, eu admito.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "...............................";
			mes "Eu vim aqui esperando mudar minha classe para Ninja.";
			next;
			mes "[Cougar]";
			mes "...Oh. Isso é tudo?";
			mes "Hmm, você tem grande potencial, mas não posso te ajudar agora.";
			mes "Tenho inimigos demais, e não posso baixar a guarda nem por um segundo.";
			next;
			mes "[Cougar]";
			mes "Aquele Wildcat Joe é completamente implacável...!";
			mes "Ele poderia atacar a qualquer hora!";
			mes "Ele faria qualquer coisa para alcançar a vitóra sobre seus inimigos!";
			next;
			mes "[Cougar]";
			mes "Espere, espere, acabei de pensar em algo.";
			mes "Talvez você possa me ajudar.";
			mes "Faça o que peço, e irei ensiná-l"+(Sex == SEX_MALE ? "o" : "a")+" algumas de minhas habilidades.";
			mes "Se você realmente quiser se tornar Ninja.";
			next;
			if(select("Com certeza!","Não, obrigado") == 2) {
				mes "[Cougar]";
				mes "Hm? Bem, tudo bem.";
				mes "Entretanto, não entendo porque não podemos nos ajudar neste pequeno dilema...";
				close;
			}
			mes "[Cougar]";
			mes "Ótimo!";
			mes "Agora, eu queria perguntar ask Wildcat Joe se ele concordaria com uma trégua temporária.";
			mes "Estou ciente que ambos estamos sem armas, então deveríamos nos equipar melhor antes.";
			next;
			mes "[Cougar]";
			mes "Por favor, pegue esta carta e entregue-a a Wildcat Joe, em Einbroch.";
			mes "Ele é um mestre dos disfarces, então mantenha um olhar atento a ele.";
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
			mes "Mesmo que esta tarefa não seja tão urgente.";
			mes "Por favor, corra para Einbroch e entregue minha carta para Wildcat Joe.";
			close;
		} else if (ninjaq == 2) {
			mes "[Cougar]";
			mes "Você entregou aquela carta para Wildcat Joe?";
			mes "Eu ainda preciso saber a resposta dele para minha proposta de trégua.";
			mes "De qualquer maneira, veja se consegue forçá-lo a isso.";
			close;
		} else if (ninjaq == 3) {
			mes "[Cougar]";
			mes "Ah, você voltou.";
			mes "Então, Wildcat Joe mandou você de volta com a resposta dele?";
			mes "Ótimo, ótimo, por favor, leia-a para mim.";
			next;
			mes "[Cougar]";
			mes "Quê...?! Como ele poderia rejeitar minha proposta de trégua?!";
			mes "Isto só pode significar que ele fez outra Kunai.";
			mes "Poxa! Tenho que alcançá-lo ou estarei arruinado!";
			next;
			mes "[Cougar]";
			mes "Ouça, você tem que me ajudar de novo!";
			mes "Preciso que você me traga alguns materiais para que eu possa criar minha própria Kunai para lutar com Wildcat Joe.";
			mes "Então, cumprirei nosso trato e mudarei sua classe para Ninja.";
			next;
			mes "[Cougar]";
			mes "Tudo o que precisa me trazer é";
			mes "^3355FF5 Cyfars^000000 e";
			mes "^3355FF1 Fracon^000000.";
			mes "Por favor, consiga-os o mais rápido que puder!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Huh? Que engraçado, Wildcat Joe me pediu para conseguir os mesmos materiais.";
			next;
			mes "[Cougar]";
			mes "Maldição!";
			mes "Então isso significa...";
			mes "Que você ajudou Joe em criar sua Kunai! Não!";
			mes "Eu deveria ter pensado nisso antes!";
			mes "Bem, é tarde demais agora. Apenas apresse-se!";
			ninjaq = 4;
			changequest (6017,6018);
			close;
		} else if (ninjaq == 4) {
			if (countitem(Cyfar) < 5 || countitem(Phracon) < 1) {
				mes "[Cougar]";
				mes "Se apresse e traga";
				mes "^3355FF5 Cyfars^000000 e";
				mes "^3355FF1 Fracon^000000";
				mes "para mim, então poderei criar minha própria Kunai para usar contra Wildcat Joe!";
				close;
			}
			if (SkillPoint) {
				mes "[Cougar]";
				mes "Whoa, whoa...";
				mes "Você ainda tem alguns Pontos de Habilidade restantes.";
				mes "É melhor gastar todos eles antes de mudar de classe, certo?";
				close;
			}
			mes "[Cougar]";
			mes "Ah, você está de volta com tudo que preciso.";
			mes "Voltou antes do que eu esperava, eh?";
			mes "Ótimo, como prometido, te transformarei em um Ninja.";
			next;
			mes "[Cougar]";
			mes "Permita que eu me apresente formalmente.";
			mes "Eu sou o Mestre Ninja Cougar do Grupo Ninja Touga, e estou encarregado do grupo de busca para encontrar Sir Kazma.";
			next;
			mes "[Cougar]";
			mes "Sir Kazma é o chefe do meu vilarejo, mas ele fugiu.";
			mes "Isto resultou em um conflito interno entre o Grupo Ninja.";
			mes "As coisas estão bem instáveis agora...";
			next;
			mes "[Cougar]";
			mes "Inicialmente, não queria te aceitar como um Ninja, por causa dessa situação complicada.";
			mes "Contudo, você provou que é realmente digno de se juntar ao grupo dos Ninjas.";
			next;
			mes "[Cougar]";
			mes "De acordo com a carta dele, até mesmo Joe reconhece seu valor.";
			mes "Basta lembrar que, como um Ninja, sua missão é sua maior prioridade.";
			mes "Mas não deixe os objetivos da missão tornem-se mais importantes que sua consciência.";
			next;
			mes "[Cougar]";
			mes "''Sigilo acima de tudo.''";
			mes "Para manter nossos segredos nas sombras, você pode somente comprar ou vender armas Ninja em comerciantes autorizados.";
			mes "Por favor, lembre-se disso.";
			next;
			mes "[Cougar]";
			mes "A partir de hoje, você é um membro do esplêndido Grupo Ninja Touga.";
			mes "Seja tão ágil como o vento, e tão silencioso como a o cair das sombras.";
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
			mes "Treine duro, se você quiser ser capaz de desaparecer sem deixar rastros.";
			mes "Se puder fazer isso, terá o respeito de qualquer Ninja.";
			close;
		}
	} else {
		if (BaseClass == Job_Ninja) {
			mes "[Cougar]";
			mes "Como tem passado?";
			mes "Treine duro, se você quiser ser capaz de desaparecer sem deixar rastros.";
			mes "Se puder fazer isso, terá o respeito de qualquer Ninja.";
			close;
		} else {
			mes "[Cougar]";
			mes "Quê...? Como você foi capaz de me encontrar nas sombras?!";
			mes "Você deve ser mais que um aventureiro comum, eh?";
			close;
		}
	}
}

einbroch,184,194,3	script	Homem Suspeito#ninjaq	4_M_SITDOWN,{
	if (ninjaq == 1) {
		mes "[Homem Suspeito]";
		mes "Eu viajei para muitos países, mas nunca estive em um prédio tão alto como a Torre de Einbroch.";
		mes "Todos os prédios na minha cidade natal são minúsculos em comparação...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, você é de Amatsu?";
		mes "Estou procurando alguém de lá que é chamado Wildcat Joe.";
		next;
		mes "[Homem Suspeito]";
		mes "Não... Não, na verdade sou de Izlude, e estou aqui em Einbroch somente por alguns minérios.";
		mes "Diga-me, por que está procurando por Wildcat Joe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, preciso entregar esta carta para ele e obter sua resposta para que eu possa me tornar um Ninja.";
		next;
		mes "[Homem Suspeito]";
		mes "Sério? Pensando bem, eu acho que já o encontrei uma ou duas vezes nesta cidade.";
		mes "No entanto, ele prefere ser chamado de \"Red Leopard Joe\", ao invés de \"Wildcat Joe\".";
		next;
		mes "[Homem Suspeito]";
		mes "Eu realmente quero te ajudar a encontrá-lo.";
		mes "Mas primeiro eu preciso encontrar alguns minérios que estou procurando.";
		mes "Se não se importar, poderia me ajudar?";
		mes "Depois posso te ajudar a encontrar Joe.";
		next;
		if (select("Eu o encontrarei","Claro, eu te ajudarei.") == 1) {
			mes "[Homem Suspeito]";
			mes "Tem certeza...?";
			mes "Red Leopard Joe é realmente um mestre dos disfarces.";
			mes "Você precisará de toda ajudar que puder para encontrá-lo...";
			close;
		}
		mes "[Homem Suspeito]";
		mes "Ótimo, estou feliz por ouvir isso.";
		mes "Por favor, ajude-me a encontrar ^3355FF5 Cyfars^000000 e ^3355FF1 Fracon^000000.";
		ninjaq = 2;
		changequest (6015,6016);
		close;
	} else if (ninjaq == 2) {
		if (countitem(Cyfar) < 5 || countitem(Phracon) < 1) {
			mes "[Homem Suspeito]";
			mes "Por favor, traga ^3355FF5 Cyfars^000000 e ^3355FF1 Fracon^000000 para mim o mais rápido que puder.";
			mes "Então, eu posso te ajudar a encontrar Red Leopard Joe.";
			close;
		}
		mes "[Homem Suspeito]";
		mes "Bom, muito bom.";
		mes "Você trouxe os minerais...";
		mes "Agora, é minha vez de te ajudar.";
		mes "Aqui, deixe-me ver essa carta.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "?????!!";
		next;
		mes "[Homem Suspeito]";
		mes "Por quê?";
		mes "Você não trouxe essa carta de Cougar para mim?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você é..";
		mes "Você é Wildcat Joe?";
		next;
		mes "[Homem Suspeito]";
		mes "...Sim, mas prefiro ser chamado Red Leopard Joe.";
		mes "Cougar o mandou a mim, certo?";
		mes "Ele é o único que me chama assim.";
		mes "Então você quer ser um ninja, eh? Hmm, está bem.";
		next;
		mes "[Red Leopard Joe]";
		mes "Se você quiser ser um Ninja, deve sempre ser cuidados"+(Sex == SEX_MALE ? "o" : "a")+" com o que vê e em o quem confia.";
		mes "Não se esqueça de que, se os seus segredos forem descobertos, então você está acabado como Ninja.";
		next;
		mes "[Red Leopard Joe]";
		mes "Lembre-se de se mover rapidamente, e de sempre desaparecer sem deixar rastros.";
		mes "Permanecer oculto nas sombras é realmente nosso poder supremo.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Entendo... ...........";
		next;
		mes "[Red Leopard Joe]";
		mes "Por agora, deixe-me ler esta carta.";
		mes "Vamos ver... Hm.";
		mes "Pensei que Cougar queria me desafiar de novo, mas na verdade ele quer uma trégua temporária? Hah!";
		next;
		mes "[Red Leopard Joe]";
		mes "Obrigado por sua ajuda, agora que tenho minérios, preciso construir uma Kunai!";
		mes "Hahaha! Não concordarei com uma trégua quando eu tenho a vantagem!";
		next;
		mes "[Red Leopard Joe]";
		mes "De qualquer maneira, deixe-me escrever minha resposta para ele.";
		mes "Também vou escrever uma recomendação para você...";
		mes "Acho que você vai se tornar um excelente Ninja, mesmo que eu tenha acabado de te enganar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "......";
		mes ".........";
		mes "............";
		next;
		mes "[Red Leopard Joe]";
		mes "Aqui está.";
		mes "Por favor, leve esta carta para Cougar.";
		mes "Demoraria um pouco para voltar para Amatsu, então deixe-me mandá-lo diretamente para lá...";
		delitem (Phracon,1);
		delitem (Cyfar,5);
		ninjaq = 3;
		changequest (6016,6017);
		close2;
		warp ("amatsu",113,127);
		end;
	} else if (ninjaq == 3) {
		mes "[Red Leopard Joe]";
		mes "Eh? Não sei o que aconteceu, mas parece que você ainda não entregou minha resposta para Cougar.";
		mes "Devo enviar-lhe diretamente para Amatsu agora?";
		next;
		if (select("Não, obrigado","Sim, por favor") == 1) {
			mes "[Red Leopard Joe]";
			mes "Certo.";
			mes "Bem, eu estava só tentando poupar algum tempo seu.";
			close;
		}
		mes "[Red Leopard Joe]";
		mes "Okay, então.";
		mes "Adeus por enquanto.";
		close2;
		warp ("amatsu",113,127);
		end;
	} else if (ninjaq == 4) {
		mes "[Red Leopard Joe]";
		mes "Cougar te pediu para obter alguns materiais também?";
		mes "Oh, bem, suponho que não posso culpá-lo.";
		mes "Aliás, devo ser capaz de vencê-lo em uma luta justa~";
		close;
	} else if (BaseClass == Job_Ninja) {
		mes "[Red Leopard Joe]";
		mes "Oh, você é um Ninja.";
		mes "Espero que continue a treinar e maximizar todas as habilidades de Ninja que puder.";
		mes "Sempre se lembre de misturar-se com as sombras.";
		close;
	} else {
		mes "[Turista]";
		mes "Eu viajei para muitos países, mas nunca estive em um prédio tão alto como a Torre de Einbroch.";
		mes "Todos os prédios na minha cidade natal são minúsculos em comparação...";
		close;
	}
}
