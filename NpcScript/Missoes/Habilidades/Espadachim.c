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
|         Instinto de Sobreviv�ncia (SM_AUTOBERSERK)                |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ SM_MOVINGRECOVERY ] -
// ------------------------------------------------------------------
izlude_in,118,175,4	script	Cavaleiro Thomas	4W_M_02,{
	if ((BaseClass == Job_Swordman) && (sm_movingrecovery_x < 1)) {
		mes "[Thomas]";
		mes "Ah n�o! Voc� deve est� ferido!";
		mes "Voc� est� bem?";
		mes "Voc� deve ter lutado muito para ter ferimentos t�o graves.";
		mes "Ser um espadachim deve vir com muita responsabilidade e sacrif�cio.";
		next;
		mes "[Thomas]";
		mes "Para espadachins e cavaleiros, h� uma habilidade maravilhosa.";
		mes "Eu apresento para voc� - HP Recovery While Moving!";
		mes "Mesmo se movimentando essa habilidade espl�ndida lhe permite recuperar seu HP!";
		next;
		mes "[Thomas]";
		mes "Atualmente, est� em desenvolvimento, portanto, n�o pode recuperar tanto, mas isso ajudar� um pouco.";
		mes "O que voc� acha?";
		mes "Voc� gostaria de aprender-la?";
		next;
		switch (select("Claro que sim!", "N�o, obrigado")) {
			case 1:
			mes "[Thomas]";
			mes "Muito bem.";
			mes "Direi a voc� o que precisa para aprender essa habilidade.";
			mes "Primeiro, o seu n�vel de classe deve ser superior a ^00880035^000000.";
			mes "Tamb�m deve me trazer ^008800200 Garrafas Vazias^000000.";
			mes "Por qu� isso � prova de que lutou ferozmente.";
			mes "Por �ltimo, mas n�o menos importante...";
			mes "Me traga ^0088001 Asas de Tra�a^000000.";
			next;
			select("Eh? Voc� tamb�m precisa disso?");
			mes "[Thomas]";
			mes "Na verdade, na verdade n�o preciso.";
			mes "� s� que minha sobrinha obteve uma ca�a ao inseto como uma tarefa de f�rias de ver�o.";
			mes "Claro! Seria muito mais f�cil para conseguir eu mesmo.";
			mes "Mas, devo trabalhar aqui o tempo todo, ent�o eu n�o tenho tempo para sair.";
			next;
			mes "[Thomas]";
			mes "Voc� n�o acha que � cansativo ficar aqui todos os dias, n�o podendo sair?";
			sm_movingrecovery_x = 1;
			close;
			case 2:
			mes "[Thomas]";
			mes "...";
			close;
		}
	} else if ((BaseClass == Job_Swordman) && (sm_movingrecovery_x > 1)) {
		mes "[Thomas]";
		mes "Ah � voc�?";
		mes "H� quanto tempo!";
		mes "Voc� parece mais saud�vel do que antes.";
		mes "Hahahaha!";
		mes "Cuidar! Ver voc� de novo!";
		close;
	} else if ((BaseClass == Job_Swordman) && (sm_movingrecovery_x == 1)) {
		mes "[Thomas]";
		mes "Voc� voltou...";
		mes "Pronto para aprender \"Recuperar HP em Movimento\"?";
		next;
		switch (select("Sim", "Ainda n�o")) {
			case 1:
			if ((JobLevel > 34 || (BaseJob == Job_Knight || BaseJob == Job_Crusader)) && (countitem(Empty_Bottle) > 199) && (countitem(Wing_Of_Moth) > 0)) {
				mes "[Thomas]";
				mes "Vamos ver.....";
				next;
				mes "[Thomas]";
				mes "Est� bem!";
				mes "Agora vou ensinar voc�...";
				mes "...Recuperar HP em Movimento";
				next;
				delitem(Empty_Bottle, 200);
				delitem(Wing_Of_Moth, 1);
				skill("SM_MOVINGRECOVERY", 1, 0);
				sm_movingrecovery_x = 2;
				mes "[Thomas]";
				mes "Ai est�!";
				mes "Tente voc� mesmo.";
				mes "Mas n�o exagere.";
				next;
				mes "[Thomas]";
				mes "Ah, sim, n�o precisarei de sua armadura para que voc� possa mant�-la.";
				mes "Boa sorte agora!";
				close;
			} else if (JobLevel < 35 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
				mes "[Thomas]";
				mes "Espere um segundo, seu n�vel de classe est� abaixo de ^00880035^000000!";
				mes "Volte quando estiver mais preparado.";
				close;
			} else if ((countitem(Empty_Bottle) < 200) || (countitem(Wing_Of_Moth) < 1)) {
				mes "[Thomas]";
				mes "Voc� n�o tem todos os itens que eu pedi.";
				next;
				mes "[Thomas]";
				mes "Lembre-se de que eu preciso, ^008800200 Garrafas Vazias^000000 e 1 ^008800Asas de Tra�a^000000.";
				mes "Volte quando voc� tiver tudo.";
				close;
			}
			mes "[Thomas]";
			mes "Voc� n�o tem todos os itens que eu pedi.";
			next;
			mes "[Thomas]";
			mes "Lembre-se de que eu preciso, ^008800200 Garrafas Vazias^000000 e 1 ^008800Asas de Tra�a^000000.";
			mes "Volte quando voc� tiver tudo.";
			close;
			case 2:
			mes "[Thomas]";
			mes "� assim mesmo?";
			mes "Ent�o venha quando estiver preparado.";
			close;
		}
	}
	mes "[Thomas]";
	mes "Meu nome � Thomas.";
	mes "Cavaleiro de Prontera da 3rd Cavalaria.";
	mes "Tenho um certo dever nos dias de hoje.";
	mes "Mas, n�o preciso lhe dizer.";
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
			mes "Como voc� est� agora que j� sabe o Ataque Fatal?";
			close;
		} else if ((countitem(Fire_Arrow) > 9) && (countitem(Silver_Arrow) > 9) && (countitem(Banana_Juice) > 0) && (countitem(Tentacle) > 29) && (countitem(Royal_Jelly) > 4)) {
			mes "[Leon]";
			mes "Ooh! Voc� est� mais do que pronto para aprender o Ataque Fatal!";
			mes "Ent�o, que tal? Voc� gostaria de aprender?";
			next;
			switch (select("Sim!", "Eu n�o quero","O que � isso?")) {
				case 1:
				mes "[Leon]";
				mes "Ok, vamos come�ar!";
				next;
				delitem(Fire_Arrow, 10);
				delitem(Silver_Arrow, 10);
				delitem(Banana_Juice, 1);
				delitem(Tentacle, 30);
				delitem(Royal_Jelly, 5);
				skill("SM_FATALBLOW", 1, 0);
				mes "[Leon]";
				mes "Success!";
				mes "V� usar sua nova habilidade para todo seu potencial.";
				mes "Hahahahahahahaha!";
				close;
				case 2:
				mes "[Leon]";
				mes "Eu n�o gosto de voc�!!!";
				close;
				case 3:
				mes "[Leon]";
				mes "Eu desenvolvi essa habilidade recentemente.";
				mes "Quando voc� usa Golpe Fuminante, dependendo do seu n�vel, voc� pode atordoar seu oponente. .";
				mes "Voc� aprendeu o Golpe Fuminante, n�o �?";
				next;
				mes "[Leon]";
				mes "O que voc� acha.";
				mes "Atordoar � uma t�cnica muito �til.";
				mes "Voc� n�o acha essa habilidade atrativa?";
				close;
			}
		}
		mes "[Leon]";
		mes "Ooh! Um espadachim jovem e forte!";
		next;
		mes "[Leon]";
		mes "Uau, vendo seu bra�o, voc� deve aproveitar o uso de Golpe Fuminante?";
		next;
		select("Eh, eu ... Apenas ...");
		mes "[Leon]";
		mes "N�o precisa ser assustado.";
		mes "Se voc� usa uma espada, � claro que voc� deveria ter um bom bra�o!";
		mes "Nesses tempos de jovens in�teis e pregui�osos, fico feliz por conhecer algu�m forte como voc�.";
		next;
		mes "[Leon]";
		mes "Gostaria de dar um presente a um incr�vel espadachim como voc�?";
		next;
		switch (select("Que presente?", "Est� bem")) {
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
		mes "Quando voc� usa Golpe Fuminante, dependendo do seu n�vel, voc� pode atordoar seu oponente. .";
		mes "Voc� aprendeu o Golpe Fuminante, n�o �?";
		next;
		mes "[Leon]";
		mes "Quando eu era um espadachim como voc�, eu gostava de usar o Golpe Fuminante.";
		mes "Uma vez, pensei que talvez o ataque fosse mais poderoso se eu usar atordoamento ao mesmo tempo.";
		next;
		mes "[Leon]";
		mes "Eu me afastei do campo de batalha para fazer pesquisas e finalmente.";
		mes "Desenvolvi essa maravilhosa nova habilidade!";
		mes "Voc� gostaria de aprender essa habilidade?";
		next;
		if (select("Claro!", "N�o mesmo")) {
			mes "[Leon]";
			mes "Est� bem. Vou contar-lhe os requisitos.";
			mes "Primeiro voc� precisa ter o n�vel 5 Bash.";
			mes "Voc� tamb�m tem que me trazer";
			mes "10 Flecha de Fogo";
			mes "10 Flecha de Prata";
			mes "1 Suco de Banana";
			mes "30 Tent�culo";
			mes "5 Gel�ia Real";
			mes "Eles s�o ... algo como ingredientes.";
			next;
			mes "[Leon]";
			mes "Venha at� mim novamente uma vez que voc� tenha todos os materiais.";
			mes "Devemos conversar ent�o.";
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
	mes "Ah n�o! N�o tenho nada para te oferecer!";
	mes "N�o posso dizer coisas divertidas e divertidas para ningu�m al�m de espadachins!";
	mes "Vejo voc� em um mundo melhor!";
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
			mes "Com certeza essa sua nova habilidade ser� muito �til no campo de batalha.";
			close;
		} else if (JobLevel < 10 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
			mes "[?]";
			mes "O que voc� �?";
			mes "Eh, ainda � um iniciante.";
			mes "Estou ocupado, ent�o v� treinar um pouco mais antes de voltar.";
			close;
		} else if (JobLevel < 30 && (BaseJob != Job_Knight && BaseJob != Job_Crusader)) {
			mes "[Juan]";
			mes "Oh, prazer em conhec�-lo.";
			mes "Voc� pode estar a caminho.";
			close;
		} else if ((countitem(Powder_Of_Butterfly) > 34) && (countitem(Horrendous_Mouth) > 9) && (countitem(Decayed_Nail) > 9) && (countitem(Honey) > 9)) {
			mes "[Juan]";
			mes "Ooh. Jovem espadachim!";
			mes "Voc� est� pronto para aprender a habilidade mais nova, \"Instinto de Sobreviv�ncia\"?!";
			next;
			if (select("Gostaria de aprender agora", "O que � isso?") == 1) {
				mes "[Juan]";
				mes "Ent�o est� bem...";
				next;
				delitem(Powder_Of_Butterfly, 35);
				delitem(Horrendous_Mouth, 10);
				delitem(Decayed_Nail, 10);
				delitem(Honey, 10);
				skill("SM_AUTOBERSERK", 1, 0);
				mes "[Juan]";
				mes "Voc� acabou de se tornar um espadachim que pode usar Instinto de Sobreviv�ncia.";
				mes "Voc� pode ir e alcan�ar grandes coisas!";
				next;
				mes "[Juan]";
				mes "Good luck!";
				next;
				mes "[Juan]";
				mes "Eu esqueci de dizer uma coisa.";
				mes "H� algumas coisas que voc� deve ter em mente.";
				next;
				mes "[Juan]";
				mes "Uma vez que voc� recupera seu HP, essa habilidade diminuir�.";
				mes "Al�m disso, n�o h� existe um limite de tempo.";
				mes "Mas ainda pode desaparecer quando sofrer efeeito de outra habilidade que pode anular Provocar.";
				next;
				mes "[Juan]";
				mes "Voc� deve se lembrar dessas caracter�sticas.";
				mes "Porque pode encontrar alguns problemas no campo de batalha.";
				mes "Quando a habilidade desaparecer de repente.";
				close;
			} else {
				mes "[Juan]";
				mes "Instinto de Sobreviv�ncia?";
				mes "� uma habilidade crucial no campo de batalha.";
				mes "Quando seu HP est� muito baixo, seu efeito lhe conseder� status de provocar.";
				next;
				mes "[Juan]";
				mes "� perfeito para aqueles que lutam no campo de batalha!";
				mes "Com sua capacidade, voc� pode aprender essa habilidade agora.";
				mes "Ent�o, eu vou lhe contar os materiais necess�rios.";
				next;
				mes "[Juan]";
				mes "35 P� de Borboleta";
				mes "10 Mand�bula Horrenda";
				mes "10 Unha Apodrecida";
				mes "10 Mel.";
				next;
				mes "[Juan]";
				mes "Quando tiver tudo isso pronto retorne a mim.";
				mes "Estarei ansioso para v�-lo novamente.";
				close;
			}
		} else {
			mes "[Juan]";
			mes "Oh n�o, voc� tem mais ferimentos desde a �ltima vez que eu vi voc�.";
			mes "Voc� entrou em batalha assim?";
			mes "Parece que voc� est� se esfor�ando.";
			next;
			mes "[Juan]";
			mes "Mesmo que voc� possa ter muita for�a, n�o pode fazer muito quando atingir seus limites.";
			mes "Ent�o n�o superestima seus poderes.";
			mes "Claro que voc� sempre pode usar a habilidade que desenvolvemos para superar esses limites.";
			next;
			if (select("Do que voc� est� falando?", "Voc� n�o fala coisa com coisa!") == 1) {
				mes "[Juan]";
				mes "Estou falando da habilidade chamada Instinto de Sobreviv�ncia.";
				mes "� considerada a flor de um campo de batalha.";
				mes "Quando seu HP est� muito baixo, seu efeito lhe conseder� status de provocar.";
				next;
				mes "[Juan]";
				mes "� perfeito para aqueles que lutam no campo de batalha!";
				mes "Com sua capacidade, voc� pode aprender essa habilidade agora.";
				mes "Ent�o, eu vou lhe contar os materiais necess�rios.";
				next;
				mes "[Juan]";
				mes "35 P� de Borboleta";
				mes "10 Mand�bula Horrenda";
				mes "10 Unha Apodrecida";
				mes "10 Mel.";
				next;
				mes "[Juan]";
				mes "Quando tiver tudo isso pronto retorne a mim.";
				mes "Estarei ansioso para v�-lo novamente.";
				close;
			} else {
				mes "[Juan]";
				mes "Bleh, voc� foi enganado toda a sua vida.";
				mes "Eu n�o sei. N�o fale comigo.";
				close;
			}
		}
	} else {
		mes "[Juan]";
		mes "Voc� est� gostando da sua viagem?";
		mes "Espero que voc� tenha bons dias � sua frente.";
		mes "Ah, sou apenas um cavaleiro.";
		mes "N�o se preocupe comigo...";
		close;
	}
}
