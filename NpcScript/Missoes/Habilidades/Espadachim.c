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
| - Author: kobra_k88                                               |
| - Version: Spell Master                                           |
| - Info: Quest das habilidades para espadachim                     |
|         Recuperar HP em Movimento (SM_MOVINGRECOVERY)             |
|         Ataque Fatal (SM_FATALBLOW)                               |
|         Instinto de Sobrevivência (SM_AUTOBERSERK)                |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ SM_MOVINGRECOVERY ] -
// ------------------------------------------------------------------
izlude_in,118,175,4	script	Cavaleiro Thomas	4W_M_02,{
	if ((BaseClass == Job_Swordman) && (sm_movingrecovery_x < 1)) {
		mes "[Thomas]";
		mes "Ah não! Você deve está ferido!";
		mes "Você está bem?";
		mes "Você deve ter lutado muito para ter ferimentos tão graves.";
		mes "Ser um espadachim deve vir com muita responsabilidade e sacrifício.";
		next;
		mes "[Thomas]";
		mes "Para espadachins e cavaleiros, há uma habilidade maravilhosa.";
		mes "Eu apresento para você - HP Recovery While Moving!";
		mes "Mesmo se movimentando essa habilidade esplêndida lhe permite recuperar seu HP!";
		next;
		mes "[Thomas]";
		mes "Atualmente, está em desenvolvimento, portanto, não pode recuperar tanto, mas isso ajudará um pouco.";
		mes "O que você acha?";
		mes "Você gostaria de aprender-la?";
		next;
		switch (select("Claro que sim!", "Não, obrigado")) {
			case 1:
			mes "[Thomas]";
			mes "Muito bem.";
			mes "Direi a você o que precisa para aprender essa habilidade.";
			mes "Primeiro, o seu nível de classe deve ser superior a ^00880035^000000.";
			mes "Também deve me trazer ^008800200 Garrafas Vazias^000000.";
			mes "Por quê isso é prova de que lutou ferozmente.";
			mes "Por último, mas não menos importante...";
			mes "Me traga ^0088001 Asas de Traça^000000.";
			next;
			select("Eh? Você também precisa disso?");
			mes "[Thomas]";
			mes "Na verdade, na verdade não preciso.";
			mes "É só que minha sobrinha obteve uma caça ao inseto como uma tarefa de férias de verão.";
			mes "Claro! Seria muito mais fácil para conseguir eu mesmo.";
			mes "Mas, devo trabalhar aqui o tempo todo, então eu não tenho tempo para sair.";
			next;
			mes "[Thomas]";
			mes "Você não acha que é cansativo ficar aqui todos os dias, não podendo sair?";
			sm_movingrecovery_x = 1;
			close;
			case 2:
			mes "[Thomas]";
			mes "...";
			close;
		}
	} else if ((BaseClass == Job_Swordman) && (sm_movingrecovery_x > 1)) {
		mes "[Thomas]";
		mes "Ah é você?";
		mes "Há quanto tempo!";
		mes "Você parece mais saudável do que antes.";
		mes "Hahahaha!";
		mes "Cuidar! Ver você de novo!";
		close;
	} else if ((BaseClass == Job_Swordman) && (sm_movingrecovery_x == 1)) {
		mes "[Thomas]";
		mes "Você voltou...";
		mes "Pronto para aprender \"Recuperar HP em Movimento\"?";
		next;
		switch (select("Sim", "Ainda não")) {
			case 1:
			if ((JobLevel > 34 || (BaseJob == Job_Knight || BaseJob == Job_Crusader)) && (countitem(Empty_Bottle) > 199) && (countitem(Wing_Of_Moth) > 0)) {
				mes "[Thomas]";
				mes "Vamos ver.....";
				next;
				mes "[Thomas]";
				mes "Está bem!";
				mes "Agora vou ensinar você...";
				mes "...Recuperar HP em Movimento";
				next;
				delitem(Empty_Bottle, 200);
				delitem(Wing_Of_Moth, 1);
				skill("SM_MOVINGRECOVERY", 1, 0);
				sm_movingrecovery_x = 2;
				mes "[Thomas]";
				mes "Ai está!";
				mes "Tente você mesmo.";
				mes "Mas não exagere.";
				next;
				mes "[Thomas]";
				mes "Ah, sim, não precisarei de sua armadura para que você possa mantê-la.";
				mes "Boa sorte agora!";
				close;
			} else if (JobLevel < 35 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
				mes "[Thomas]";
				mes "Espere um segundo, seu nível de classe está abaixo de ^00880035^000000!";
				mes "Volte quando estiver mais preparado.";
				close;
			} else if ((countitem(Empty_Bottle) < 200) || (countitem(Wing_Of_Moth) < 1)) {
				mes "[Thomas]";
				mes "Você não tem todos os itens que eu pedi.";
				next;
				mes "[Thomas]";
				mes "Lembre-se de que eu preciso, ^008800200 Garrafas Vazias^000000 e 1 ^008800Asas de Traça^000000.";
				mes "Volte quando você tiver tudo.";
				close;
			}
			mes "[Thomas]";
			mes "Você não tem todos os itens que eu pedi.";
			next;
			mes "[Thomas]";
			mes "Lembre-se de que eu preciso, ^008800200 Garrafas Vazias^000000 e 1 ^008800Asas de Traça^000000.";
			mes "Volte quando você tiver tudo.";
			close;
			case 2:
			mes "[Thomas]";
			mes "É assim mesmo?";
			mes "Então venha quando estiver preparado.";
			close;
		}
	}
	mes "[Thomas]";
	mes "Meu nome é Thomas.";
	mes "Cavaleiro de Prontera da 3rd Cavalaria.";
	mes "Tenho um certo dever nos dias de hoje.";
	mes "Mas, não preciso lhe dizer.";
	close;
}

// ------------------------------------------------------------------
// - [ SM_FATALBLOW ] -
// ------------------------------------------------------------------
prt_in,75,88,5	script	Leon Von Frich	4_M_03,{
	if ((BaseClass == Job_Swordman) && (JobLevel >= 25 || (BaseJob == Job_Knight || BaseJob == Job_Crusader))) {
		if (getskilllv("SM_FATALBLOW")) {
			mes "[Leon]";
			mes "Eh?";
			mes "Como você está agora que já sabe o Ataque Fatal?";
			close;
		} else if ((countitem(Fire_Arrow) > 9) && (countitem(Silver_Arrow) > 9) && (countitem(Banana_Juice) > 0) && (countitem(Tentacle) > 29) && (countitem(Royal_Jelly) > 4)) {
			mes "[Leon]";
			mes "Ooh! Você está mais do que pronto para aprender o Ataque Fatal!";
			mes "Então, que tal? Você gostaria de aprender?";
			next;
			switch (select("Sim!", "Eu não quero","O que é isso?")) {
				case 1:
				mes "[Leon]";
				mes "Ok, vamos começar!";
				next;
				delitem(Fire_Arrow, 10);
				delitem(Silver_Arrow, 10);
				delitem(Banana_Juice, 1);
				delitem(Tentacle, 30);
				delitem(Royal_Jelly, 5);
				skill("SM_FATALBLOW", 1, 0);
				mes "[Leon]";
				mes "Success!";
				mes "Vá usar sua nova habilidade para todo seu potencial.";
				mes "Hahahahahahahaha!";
				close;
				case 2:
				mes "[Leon]";
				mes "Eu não gosto de você!!!";
				close;
				case 3:
				mes "[Leon]";
				mes "Eu desenvolvi essa habilidade recentemente.";
				mes "Quando você usa Golpe Fuminante, dependendo do seu nível, você pode atordoar seu oponente. .";
				mes "Você aprendeu o Golpe Fuminante, não é?";
				next;
				mes "[Leon]";
				mes "O que você acha.";
				mes "Atordoar é uma técnica muito útil.";
				mes "Você não acha essa habilidade atrativa?";
				close;
			}
		}
		mes "[Leon]";
		mes "Ooh! Um espadachim jovem e forte!";
		next;
		mes "[Leon]";
		mes "Uau, vendo seu braço, você deve aproveitar o uso de Golpe Fuminante?";
		next;
		select("Eh, eu ... Apenas ...");
		mes "[Leon]";
		mes "Não precisa ser assustado.";
		mes "Se você usa uma espada, é claro que você deveria ter um bom braço!";
		mes "Nesses tempos de jovens inúteis e preguiçosos, fico feliz por conhecer alguém forte como você.";
		next;
		mes "[Leon]";
		mes "Gostaria de dar um presente a um incrível espadachim como você?";
		next;
		switch (select("Que presente?", "Está bem")) {
			case 1:
			mes "[Leon]";
			mes "Haha nada de especial, mas uma habilidade para atacar o ponto vital!";
			next;
			case 2:
			mes "[Leon]";
			mes "...Haha nada de especial, apenas uma habilidade que visa o ponto vital!";
			next;
		}
		mes "[Leon]";
		mes "Eu desenvolvi essa habilidade recentemente.";
		mes "Quando você usa Golpe Fuminante, dependendo do seu nível, você pode atordoar seu oponente. .";
		mes "Você aprendeu o Golpe Fuminante, não é?";
		next;
		mes "[Leon]";
		mes "Quando eu era um espadachim como você, eu gostava de usar o Golpe Fuminante.";
		mes "Uma vez, pensei que talvez o ataque fosse mais poderoso se eu usar atordoamento ao mesmo tempo.";
		next;
		mes "[Leon]";
		mes "Eu me afastei do campo de batalha para fazer pesquisas e finalmente.";
		mes "Desenvolvi essa maravilhosa nova habilidade!";
		mes "Você gostaria de aprender essa habilidade?";
		next;
		if (select("Claro!", "Não mesmo")) {
			mes "[Leon]";
			mes "Está bem. Vou contar-lhe os requisitos.";
			mes "Primeiro você precisa ter o nível 5 Bash.";
			mes "Você também tem que me trazer";
			mes "10 Flecha de Fogo";
			mes "10 Flecha de Prata";
			mes "1 Suco de Banana";
			mes "30 Tentáculo";
			mes "5 Geléia Real";
			mes "Eles são ... algo como ingredientes.";
			next;
			mes "[Leon]";
			mes "Venha até mim novamente uma vez que você tenha todos os materiais.";
			mes "Devemos conversar então.";
			close;
		}
		mes "[Leon]";
		mes "Hahahahahahahahahaha!";
		mes "... ";
		mes " ... ";
		mes " ...";
		mes "Estou com uma perda de palavras !?";
		close;
	}
	mes "[Leon]";
	mes "Ah não! Não tenho nada para te oferecer!";
	mes "Não posso dizer coisas divertidas e divertidas para ninguém além de espadachins!";
	mes "Vejo você em um mundo melhor!";
	close;
}

// ------------------------------------------------------------------
// - [ SM_AUTOBERSERK ] -
// ------------------------------------------------------------------
prt_in,94,57,3	script	Juan	4_M_03,4,4,{
	if (BaseClass == Job_Swordman) {
		if (getskilllv("SM_AUTOBERSERK")) {
			mes "[Juan]";
			mes "Espero que agora mais forte do que antes.";
			mes "Com certeza essa sua nova habilidade será muito útil no campo de batalha.";
			close;
		} else if (JobLevel < 10 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
			mes "[?]";
			mes "O que você é?";
			mes "Eh, ainda é um iniciante.";
			mes "Estou ocupado, então vá treinar um pouco mais antes de voltar.";
			close;
		} else if (JobLevel < 30 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
			mes "[Juan]";
			mes "Oh, prazer em conhecê-lo.";
			mes "Você pode estar a caminho.";
			close;
		} else if ((countitem(Powder_Of_Butterfly) > 34) && (countitem(Horrendous_Mouth) > 9) && (countitem(Decayed_Nail) > 9) && (countitem(Honey) > 9)) {
			mes "[Juan]";
			mes "Ooh. Jovem espadachim!";
			mes "Você está pronto para aprender a habilidade mais nova, \"Instinto de Sobrevivência\"?!";
			next;
			if (select("Gostaria de aprender agora", "O que é isso?") == 1) {
				mes "[Juan]";
				mes "Então está bem...";
				next;
				delitem(Powder_Of_Butterfly, 35);
				delitem(Horrendous_Mouth, 10);
				delitem(Decayed_Nail, 10);
				delitem(Honey, 10);
				skill("SM_AUTOBERSERK", 1, 0);
				mes "[Juan]";
				mes "Você acabou de se tornar um espadachim que pode usar Instinto de Sobrevivência.";
				mes "Você pode ir e alcançar grandes coisas!";
				next;
				mes "[Juan]";
				mes "Good luck!";
				next;
				mes "[Juan]";
				mes "Eu esqueci de dizer uma coisa.";
				mes "Há algumas coisas que você deve ter em mente.";
				next;
				mes "[Juan]";
				mes "Uma vez que você recupera seu HP, essa habilidade diminuirá.";
				mes "Além disso, não há existe um limite de tempo.";
				mes "Mas ainda pode desaparecer quando sofrer efeeito de outra habilidade que pode anular Provocar.";
				next;
				mes "[Juan]";
				mes "Você deve se lembrar dessas características.";
				mes "Porque pode encontrar alguns problemas no campo de batalha.";
				mes "Quando a habilidade desaparecer de repente.";
				close;
			} else {
				mes "[Juan]";
				mes "Instinto de Sobrevivência?";
				mes "É uma habilidade crucial no campo de batalha.";
				mes "Quando seu HP está muito baixo, seu efeito lhe consederá status de provocar.";
				next;
				mes "[Juan]";
				mes "É perfeito para aqueles que lutam no campo de batalha!";
				mes "Com sua capacidade, você pode aprender essa habilidade agora.";
				mes "Então, eu vou lhe contar os materiais necessários.";
				next;
				mes "[Juan]";
				mes "35 Pó de Borboleta";
				mes "10 Mandíbula Horrenda";
				mes "10 Unha Apodrecida";
				mes "10 Mel.";
				next;
				mes "[Juan]";
				mes "Quando tiver tudo isso pronto retorne a mim.";
				mes "Estarei ansioso para vê-lo novamente.";
				close;
			}
		} else {
			mes "[Juan]";
			mes "Oh não, você tem mais ferimentos desde a última vez que eu vi você.";
			mes "Você entrou em batalha assim?";
			mes "Parece que você está se esforçando.";
			next;
			mes "[Juan]";
			mes "Mesmo que você possa ter muita força, não pode fazer muito quando atingir seus limites.";
			mes "Então não superestima seus poderes.";
			mes "Claro que você sempre pode usar a habilidade que desenvolvemos para superar esses limites.";
			next;
			if (select("Do que você está falando?", "Você não fala coisa com coisa!") == 1) {
				mes "[Juan]";
				mes "Estou falando da habilidade chamada Instinto de Sobrevivência.";
				mes "É considerada a flor de um campo de batalha.";
				mes "Quando seu HP está muito baixo, seu efeito lhe consederá status de provocar.";
				next;
				mes "[Juan]";
				mes "É perfeito para aqueles que lutam no campo de batalha!";
				mes "Com sua capacidade, você pode aprender essa habilidade agora.";
				mes "Então, eu vou lhe contar os materiais necessários.";
				next;
				mes "[Juan]";
				mes "35 Pó de Borboleta";
				mes "10 Mandíbula Horrenda";
				mes "10 Unha Apodrecida";
				mes "10 Mel.";
				next;
				mes "[Juan]";
				mes "Quando tiver tudo isso pronto retorne a mim.";
				mes "Estarei ansioso para vê-lo novamente.";
				close;
			} else {
				mes "[Juan]";
				mes "Bleh, você foi enganado toda a sua vida.";
				mes "Eu não sei. Não fale comigo.";
				close;
			}
		}
	} else {
		mes "[Juan]";
		mes "Você está gostando da sua viagem?";
		mes "Espero que você tenha bons dias à sua frente.";
		mes "Ah, sou apenas um cavaleiro.";
		mes "Não se preocupe comigo...";
		close;
	}
}
