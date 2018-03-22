
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
| - Copyright: Spell Master (26/09/2017)                            |
| - Info: Quest de Mudança de Classe para Super Aprendiz.           |
| - Nota: Possui 1 funcionária Kafra para aluguel de Carrinho.      |
\*-----------------------------------------------------------------*/

aldeba_in,223,167,3	script	Tzerero#supernovq	4_M_SEAMAN,{
	if (BaseJob == Job_Novice) {
		if (!supernovq) {
			mes "[Tzerero]";
			mes "Hmm?";
			mes "Eu percebo em você um grande desejo de aprender...";
			mes "Sim! Olhando de perto, eu vejo que você tem a ânsia do Super Aprendiz!";
			next;
			mes "[Tzerero]";
			mes "Que tal?";
			mes "Junte-se ao Clube do Aprendiz e seja alguém humilde, que vive para aprender novidades.";
			mes "Viva uma vida humilde e não se prenda a uma só classe.";
			mes "Você deseja curtir a vida e divertir-se com a eterna busca de novidades!";
			next;
			mes "[Tzerero]";
			mes "Ao se juntar ao nosso clube você passará por uma pequena transformação.";
			mes "Deixará de ser um Aprendiz para ser um Super Aprendiz!";
			next;
			switch (select("Não, obrigado...","Quero ser Super Aprendiz","Conte-me mais")) {
				case 1:
				mes "[Tzerero]";
				mes "Ora, você ainda não percebeu a beleza da vida humilde de um aprendiz.";
				mes "Tudo bem, é o que você escolheu para sua vida.";
				next;
				mes "[Tzerero]";
				mes "Se mudar de idéia, me procure.";
				next;
				mes "[Tzerero]";
				mes "Ah... Talvez, quando o Clube crescer ou se tornar mais influente.";
				mes "As condições para juntar-se a nós sejam maiores, quem sabe?";
				close;
				case 2:
				if (getskilllv("NV_BASIC") < 9) {
					mes "[Tzerero]";
					mes "Ops... Que pena!";
					mes "Você ainda não está pront"+(Sex == SEX_MALE ? "o":"a")+" ainda.";
					mes "Volte depois que aprender suas habilidades básicas.";
					close;
				} else if (BaseLevel < 45) {
					mes "[Tzerero]";
					mes "Ops... Que pena!";
					mes "Você ainda não está pront"+(Sex == SEX_MALE ? "o":"a")+" ainda.";
					mes "Volte depois tiver alcaçado pelo menos Level 45 de Base.";
					close;
				}
				break;
				case 3:
				mes "[Tzerero]";
				mes "Hum-hum, deixe-me contar algo sobre o clube.";
				mes "O fundador do Clube do Aprendiz e presidente de honra do clube, Sr. Kimu-shon.";
				mes "Ele se sente triste pelas pessoas terem esquecido a beleza de uma vida de aprendizado...";
				next;
				mes "*^777777Tzerero passa aproximadamente 30 minutos contando a história do clube^000000*.";
				next;
				mes "[Tzerero]";
				mes "...e essa é a razão da existência do Clube do Aprendiz.";
				mes "Se o Clube do Aprendiz crescer mais...";
				mes "Com certeza esses conceitos vão virar perguntas de um teste de admissão.";
				next;
				mes "[Tzerero]";
				mes "Então o que me diz, deseja ser um eterno aprendiz?";
				next;
				if (select("Não mesmo!","Claro que quero!") == 1) {
					mes "[Tzerero]";
					mes "Ora, você ainda não percebeu a beleza da vida humilde de um aprendiz.";
					mes "Tudo bem, é o que você escolheu para sua vida.";
					close;
				}
				break;
			}
			mes "[Tzerero]";
			mes "Oh! Que ótimo!";
			mes "Você tem mesmo a alma do Aprendiz!";
			mes "Não se acham muitos como você hoje em dia!";
			mes "Parabéns!";
			mes "Fez uma excelente escolha!";
			next;
			mes "[Tzerero]";
			mes "Honestamente, nada é melhor que a liberdade.";
			mes "Não acha?";
			next;
			mes "[Tzerero]";
			mes "Apesar de sermos muito humildes, ainda é preciso um pouco mais que querer para se juntar a nós. ";
			mes "Há um pequeno teste de qualificação...";
			next;
			mes "[Tzerero]";
			mes "Para provar sua paixão pela simplicidade da vida.";
			mes "Gostaria que você fosse atrás de monstros fáceis e trouxesse alguns itens comuns.";
			mes "Hmm... Traga-me:";
			next;
			mes "[Tzerero]";
			mes "^ff000030 Mucos pegajosos^000000 e";
			mes "^ff000030 Resinas^000000";
			mes "Que tal, muito simples não é?";
			supernovq = 1;
			setquest(6010);
			close;
		} else if (supernovq == 1) {
			if (countitem(Sticky_Mucus) > 29 && countitem(Resin) > 29) {
				delitem(Sticky_Mucus,30);
				delitem(Resin,30);
				mes "[Tzerero]";
				mes "Eu pressinto que o que você quer é ser alguém humilde.";
				mes "Que vive para aprender o maior número de coisas possível.";
				mes "Esse será seu destino se você se juntar ao Clube do Aprendiz.";
				next;
				mes "[Tzerero]";
				mes "Ok, então agora eu farei o que foi combinado e transformarei você em um Super Aprendiz...";
				mes "Hã!? ";
				mes "O que é isso atrás de você!?";
				next;
				select("Hã?","O quê?");
				mes "*^777777Você se vira e olha mas não há nada -";
				mes "Que coisa estranha!^000000*";
				next;
				if (!Upper) { jobchange(Job_SuperNovice); }
				else if (Upper == 2) { jobchange(Job_Super_Baby); }
				completequest(6010);
				callfunc("ClearJobQuest");
				mes "[Tzerero]";
				mes "Hahahahaha!";
				mes "Você caiu nessa!";
				mes "Fazer pegadinhas desse tipo é uma das diversões favoritas do Clube do Aprendiz.";
				mes "O que achou da habilidade de Tzerero?";
				next;
				mes "[Tzerero]";
				mes "Hmm... Pegadinhas não são tão importantes.";
				mes "O que importa mesmo é ter se tornado um Super Aprendiz.";
				next;
				mes "[Tzerero]";
				mes "E aqui está um presente para você por ter se juntado ao nosso Clube.";
				mes "É uma das lendárias armaduras criadas pelo Sr. Kimu-Shon!";
				getitem(G_Strings,1);
				next;
				mes "[Tzerero]";
				mes "Viva uma vida de diversão e aprendizado, faça o nosso Clube brilhar.";
				mes "E viva uma vida feliz!";
				close;
			} else {
				mes "[Tzerero]";
				mes "Hmm, eu acho que você se esqueceu de trazer alguma coisa...";
				mes "Vou repetir.";
				mes "Não se esqueça!";
				next;
				mes "[Tzerero]";
				mes "Você precisa trazer ^FF0000 30 Mucos Pegajosos^000000 e ^FF0000 30 Resinas^000000";
				close;
			}
		}
	} else {
		if (BaseJob == Job_SuperNovice) {
			mes "[Tzerero]";
			mes "Você é um membro do Clube do Aprendiz.";
			mes "Você recebeu seu treinamento e chegou próximo à perfeição.";
			mes "Aprender é a sua profissão!";
			next;
			mes "[Tzerero]";
			mes "Espero que você continue a aprender, e promover a existência e o talento de um Aprendiz.";
			close;
		} else {
			mes "[Tzerero]";
			mes "Hmm, você não é um Aprendiz.";
			mes "Meu nome é Tzerero e eu sou o encarregado do Clube do Aprendiz.";
			next;
			mes "[Tzerero]";
			mes "Não há lugar em nosso clube, para alguém como você, que já tem uma classe definida...";
			mes "Agora que você já decidiu seu caminho na vida não há mais como voltar atrás.";
			mes "Por favor, compreenda nossa posicão.";
			next;
			mes "[Tzerero]";
			mes "Cada um tem que seguir seu próprio caminho.";
			mes "São as diferenças que tornam a vida bonita.";
			mes "Siga a vida que escolheu, e seja feliz!";
			close;
		}
	}
}

// ------------------------------------------------------------------
aldebaran,54,238,5	script	Funcionária Kafra#supernovq	4_F_KAFRA1,{
	cutin("kafra_01",2);
	mes "[Funcionária Kafra]";
	if (BaseJob == Job_SuperNovice) {
		mes "Devido a insistentes pedidos...";
		mes "Nós criamos um carrinho especialmente para os Super Aprendizes!";
		mes "Mas parece que a direção da Companhia das Kafras não gostou muito da idéia.";
		mes "Então temos que oferecer esse serviço secretamente...";
		next;
		mes "[Funcionária Kafra]";
		mes "Você vai querer alugar o carrinho?";
		mes "A taxa é 1900 zeny";
		next;
		if (select("Sim, por favor","Não, obrigado") == 1) {
			if (!getskilllv("MC_PUSHCART")) {
				mes "[Funcionária Kafra]";
				mes "Primeiramente você deve aprender a habilidade.";
				mes "^ff0000Usar Carrinho^000000.";
				mes "Para poder alugar um.";
				close2; cutin("",255); end;
			} else if (checkcart() == 1) {
				mes "[Funcionária Kafra]";
				mes "Mas você já possui um carrinho.";
				close;
			} else if (Zeny < 1900) {
				mes "[Funcionária Kafra]";
				mes "Você não tem dinheiro suficiente.";
				mes "O preço pelo aluguel do carrinho é de 1.900 zeny.";
				close2; cutin("",255); end;
			} else {
				setcart;
				mes "[Funcionária Kafra]";
				mes "Muito obrigada pela preferência.";
				mes "Mesmo não sendo oficial, foi um prazer serví-l"+(Sex == SEX_MALE ? "o":"a")+".";
				close2; cutin("",255); end;
			}
		} else {
			mes "[Funcionária Kafra]";
			mes "Volte se mudar de idéia!";
			close2; cutin("",255); end;
		}
	} else {
		mes "Me desculpe...";
		mes "Acho que não posso fazer nada por você.";
		mes "Por favor, procure outra funcionária Kafra ela poderá te ajudar.";
		close2; cutin("",255); end;
	}
}

