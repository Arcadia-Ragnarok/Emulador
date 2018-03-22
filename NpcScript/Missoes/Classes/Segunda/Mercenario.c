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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudan�a de Classe para Mercen�rio.               |
\*-----------------------------------------------------------------*/

in_moc_16,19,33,1	script	Membro da Guilda#assassinq	1_M_JOBTESTER,{
	if (SkillPoint) {
		mes "[Homem Furioso]";
		mes "Voc� n�o pode mudar o sua classe se voc� tiver quaisquer pontos de habilidade sobrando.";
		mes "� melhor voc� us�-las em primeiro...";
		close;
	} else if (assassinq == 4) {
		mes "[Homem Furioso]";
		mes "Oh, pare de fazer essa cara.";
		mes "Voc� pode realmente estar em tanta dor?";
		next;
		mes "[Homem Furioso]";
		mes "*Risada*";
		mes "Voc� est� sofrendo?";
		mes "Eu posso ver, vou restaurar HP e SP...";
		percentheal(100,100);
		next;
		mes "[Homem Furioso]";
		mes "� t�o dif�cil se manter vivo?";
		mes "Por que voc� n�o se esfor�ar mais da pr�xima vez?";
		mes "Voc� n�o pode for�ar-se demasiadamente para se tornar um mercen�rio...?";
		next;
		if (select("Vou me tornar um Mercen�rio!","Tenho que descansar um pouco.") == 1) {
			mes "[Homem Furioso]";
			mes "Tudo bem ent�o...";
			close2;
			assassinq = 0;
			warp(strnpcinfo(NPC_MAP),19,76);
			end;
		}
		mes "Fazer uma pausa?";
		mes "Quando voc� sentir como se estivesse pronto para se tornar um Mercen�rio, volte.";
		next;
		mes "[Homem Furioso]";
		mes "Vai ter que andar se voc� quiser voltar para a cidade.";
		mes "N�o se esque�a de salvar o seu ponto de retorno.";
		close2;
		assassinq = 0;
		assassinq2 = 0;
		assassinq3 = 0;
		savepoint(strnpcinfo(NPC_MAP),18,14);
		warp(strnpcinfo(NPC_MAP),18,14);
		end;
	} else if (BaseJob == Job_Thief && countitem(Frozen_Heart) == 0 && assassinq > 7) {
		mes "[Mercen�rio Huey]";
		mes "Ei, o que aconteceu ...";
		mes "Como � que voc� n�o trouxe o ^006699Colar Oblivion^000000.";
		mes "Voc� deveria est� com voc�, ent�o onde est�???";
		next;
		mes "[Mercen�rio Huey]";
		mes "Voc� ficar ter cuidado melhor do ^006699Colar Oblivion^000000.";
		mes "Melhor conseguir outro antes que o dono descubra que voc� o perdeu!";
		next;
		mes "[Mercen�rio Huey]";
		mes "Quando voc� finalmente tiver econtrado ele, traga-o para mim.";
		mes "^666666*Sigh ...*^000000!";
		close;
	} else if (BaseJob == Job_Thief && countitem(Frozen_Heart) > 0 && assassinq > 7) {
		mes "[Mercen�rio Huey]";
		mes "Bem, bem, bem, voc� entendeu.";
		mes "Mas desde que foi claramente riscado da lista, n�o posso aceit�-lo.";
		mes "Voc� nunca vai se tornar um mercen�rio!";
		next;
		mes "[Mercen�rio Huey]";
		mes "Hahahah.";
		mes "Eu s� estou brincando, n�o me leve t�o a s�rio.";
		mes "Mas eu preciso verificar se est� com o colar primeiro..";
		next;
		mes "[Mercen�rio Huey]";
		mes "...";
		next;
		mes "[Mercen�rio Huey]";
		mes "...";
		mes "......";
		next;
		delitem(Frozen_Heart,1);
		//changequest(8007,8008);
		jobchange(Job_Assassin);
		completequest(8007);
		callfunc("ClearJobQuest2nd",12);
		mes "[Mercen�rio Huey]";
		mes "Tudo bem!";
		mes "Voc� foi aprovad"+(Sex == SEX_MALE ? "o" : "a")+"!";
		next;
		//completequest(8008);
		mes "[Mercen�rio Huey]";
		mes "Agora fa�a o seu melhor para ser "+(Sex == SEX_MALE ? "um grande Mercen�rio" : "uma grande Mercen�ria")+".";
		mes "Viage com f� e matar com dignidade.";
		mes "Venha a qualquer hora nos uma visita mais uma vez, parab�ns!...";
		close;
	} else if (countitem(Frozen_Heart) > 0 && BaseJob == Job_Thief && assassinq < 7) {
		mes "[Homem Furioso]";
		mes "Eh?";
		mes "O que voc� quer?";
		next;
		mes "[Homem Furioso]";
		mes "Vejo que voc� est� carregando uma ^006699Colar Oblivion^000000...";
		mes "Voc� quer se tornar um mercen�rio, n�o �?";
		mes "Deixe-me ver isso...";
		next;
		mes "[Homem Furioso]";
		mes "...";
		next;
		mes "[Homem Furioso]";
		mes "...";
		mes "......";
		next;
		mes "[Homem Furioso]";
		mes "Espere um segundo...";
		mes "Isso � uma falsifica��o!";
		next;
		mes "[Homem Furioso]";
		mes "Como voc� se atreve a pensar em me enganar?!";
		close2;
		warp("moc_fild16",206,229);
		end;
	} else {
		mes "[Homem Furioso]";
		mes "O que o traz aqui?";
		mes "Eu n�o acho que eu gosto do jeito que voc� est� me olhando...";
		next;
		if (BaseJob == Job_Assassin) {
			mes "[Mercen�rio Huey]";
			mes "Ei, eu lembro de voc�!";
			mes "Como era seu nome?";
			mes "Eu me lembro, porque soava engra�ado para mim...";
			next;
			mes "[Mercen�rio Huey]";
			mes strcharinfo(PC_NAME)+", certo?";
			mes "Era sim, como tem passado?";
			next;
			mes "[Mercen�rio Huey]";
			mes "Infelizmente, eu n�o tem qualquer miss�o para voc� neste momento.";
			mes "Basta manter o foco em sua forma��o...";
			close;
		} else if (BaseJob == Job_Thief && JobLevel > 39) {
			if (SkillPoint) {
				mes "[Homem Furioso]";
				mes "Voc� n�o pode mudar o sua classe se voc� tiver quaisquer pontos de habilidade sobrando.";
				mes "� melhor voc� us�-las em primeiro...";
				close;
			} else {
				mes "[Homem Furioso]";
				mes "Hmm ...?";
				mes "Um Gaturno...?";
				next;
				mes "[Homem Furioso]";
				mes (Sex == SEX_MALE ? "um Gaturno" : "uma Gaturna")+" bem experiente.";
				mes "Precisamos de pessoas como voc�.";
				next;
				mes "[Homem Furioso]";
				mes "Ent�o, que tal dar o pr�ximo passo e se tornar um mercen�rio?";
				next;
				switch (select("Sim. Eu escolhi esse caminho","Quais s�o os requisitos?","Talvez mais tarde")) {
					case 1:
					mes "[Homem Furioso]";
					mes "Faz um bom tempo que n�o tenho recebido candidatos como voc�.";
					mes "Estarei enviando voc� para o escrit�rio.";
					close2;
					assassinq = 0;
					if (questprogress(8000)) {
						changequest(8000,8001);
					} else {
						setquest(8001);
					}
					warp(strnpcinfo(NPC_MAP),19,76);
					end;
					case 2:
					mes "[Homem Furioso]";
					mes "Requisitos?";
					mes "Bem, primeiro voc� precisa ser um Gaturno.";
					mes "Em segundo lugar, voc� precisa ter pelo menos Level de Classe 40.";
					next;
					mes "[Homem Furioso]";
					mes "E em terceiro lugar, voc� precisa passar por um teste para se tornar um mercen�rio.";
					mes "Se voc� tem certeza de sua habilidade como um gaturno, n�o precisa se preocupar.";
					close;
					case 3:
					mes "[Homem Furioso]";
					mes "Tudo bem ent�o.";
					mes "Mas volte quando voc� acha que est� pronto. ";
					close;
				}
			}
		} else {
			mes "[Homem Furioso]";
			mes "Huh.";
			mes "Voc� n�o est� qualificado para se tornar um mercen�rio ainda.";
			mes "Existem requisitos que voc� precisa atender em primeiro lugar.";
			next;
			mes "[Homem Furioso]";
			mes "Voc� precisa ter pelo menos n�vel 40 de Classe.";
			mes "Mas se voc� estiver acima de n�vel de Classe 40, ser� ainda melhor.";
			close;
		}
	}
}

in_moc_16,25,90,1	script	Membro da Guilda#ASN2	4_M_JOB_ASSASSIN,2,2,{
	mes "[Mercen�rio Khai]";
	mes "Umm?!";
	emotion(e_gasp);
	next;
	mes "[Mercen�rio Khai]";
	mes "Chegue mais perto eu prefiro conversar com as pessoas cara a cara.";
	mes "Isso realmente me irrita, ter que levantar a minha voz, para que possam me ouvir...";
	close;
	OnTouch:
	if (assassinq2 == 4) {
		mes "[Mercen�rio Khai]";
		mes "Ehhh?";
		mes "Voc� n�o acabou de passar aqui a um minuto atr�s?";
		next;
		mes "[Mercen�rio Khai]";
		mes "Eh ...";
		mes "N�o � voc� que se escreveu no teste?";
		mes "Bwahahahahaha!";
		next;
		mes "[Mercen�rio Khai]";
		mes "Bem...";
		mes "Faz um bom tempo desde que n�o vejo um grande fracasso como voc�.";
		next;
		mes "[Mercen�rio Khai]";
		mes "HAH!";
		mes "Hahahahah .!";
		mes "Oh, voc� est� me matando ....";
		next;
		mes "[Mercen�rio Khai]";
		mes "Desculpe por rir, mas isso � hil�rio Hahaha.";
		mes "Ent�o voc� quer que eu lhe dar algumas dicas!?";
		next;
		switch (select("Por favor me ajude","N�o ria de mim!","Eu n�o preciso da sua ajuda!")) {
			case 1:
			mes "[Mercen�rio Khai]";
			mes "Haaahahahaha !!!";
			mes "Bem, bem, n�o somos honestos.";
			mes "Voc� ainda nem mesmo � um mercen�rio, mas voc� est� me matando!";
			next;
			mes "[O An�nimo]";
			mes "Ho ho ho ...";
			next;
			mes "[Mercen�rio Khai]";
			mes "Voc� ouviu isso An�nimo?!";
			mes "Hahahah! ";
			next;
			mes "[O An�nimo]";
			mes "Sim.";
			mes "Este � bastante hilariante em uma esp�cie pat�tica de forma.";
			next;
			mes "[Mercen�rio Khai]";
			mes "hahahahahahah!";
			mes "Soooooo, voc� queria";
			mes "Algumas dicas, certo?";
			next;
			mes "[Mercen�rio Khai]";
			mes "...";
			next;
			mes "[Mercen�rio Khai]";
			mes "...";
			mes "......";
			next;
			mes "[Mercen�rio Khai]";
			mes "...";
			mes "......";
			mes ".........";
			next;
			mes "[Mercen�rio Khai]";
			mes "Nah.";
			mes "Eu mudei de id�ia!";
			mes "Eu n�o vou dar-lhe as dicas depois de tudo Hee hee hee...";
			close;
			case 2:
			mes "[Mercen�rio Khai]";
			if (Sex == SEX_MALE) {
				mes "Voc� deve ter muita auto-confian�a para ser um ladr�o hoje em dia.";
				next;
				mes "[Mercen�rio Khai]";
				mes "Sim, sim, eu entendo.";
				mes "Todo mundo mexe-se ao longo do tempo.";
				mes "Desculpe por rir de seus erros...";
			} else {
				mes "Hmm....";
				mes "Eu gosto da sua atitude que voc� deve manter o seu orgulho como uma ladra.";
				mes "Desculpe por rir de seus erros.";
				mes "Eu acho que voc� vai fazer melhor da pr�xima vez.";
			}
			next;
			mes "[Mercen�rio Khai]";
			mes "Eu n�o estou autorizado a dar-lhe dicas, eu posso lhe dizer mais sobre ser um mercen�rio...";
			next;
			mes "[Mercen�rio Khai]";
			mes "Acima de tudo, n�s valorizamos a nossa dignidade.";
			mes "N�s somos mercen�rios, depois de tudo e as pessoas v�o precisar de n�s...";
			next;
			mes "[Mercen�rio Khai]";
			mes "Se as pessoas est�o perto de voc�, de alguma forma.";
			mes "Podem n�o entender o que eu estou dizendo que n�s nascemos para ser solit�rios devido a nossa natureza.";
			next;
			mes "[Mercen�rio Khai]";
			mes "Imagine se sua pessoa amada ou um amigo viu o sangue em suas m�os.";
			mes "H� uma chance de que eles n�o quererem ficar com voc�.";
			next;
			mes "[Mercen�rio Khai]";
			mes "�s vezes � solit�rio, mas n�o � t�o ruim assim.";
			mes "Pelo menos eu posso fazer o que eu quero fazer, voc� sabe, e fazer as coisas do meu jeito.";
			next;
			mes "[Mercen�rio Khai]";
			mes "Bem, isso � tudo o que posso dizer por enquanto.";
			mes "Ser� que ser um mercen�rio parece deprimente para voc�?";
			close;
			case 3:
			mes "[Mercen�rio Khai]";
			mes "Hm...";
			next;
			mes "[Mercen�rio Khai]";
			mes "Certo, isso � o esp�rito.";
			mes "Nunca deixe ningu�m te deixar para baixo.";
			mes "N�s somos mercen�rios...";
			next;
			mes "[Mercen�rio Khai]";
			mes "Pe�o desculpas por rindo de voc� antes.";
			mes "Quero que voc� lembre-se de manter esse sentimento de orgulho e dignidade como um mercen�rio.";
			next;
			mes "[Mercen�rio Khai]";
			mes "Juntamente com a manuten��o de seu orgulho,";
			mes "Eu quero que voc� respeite o sangue que podem manchar o Katar ou punhal.";
			next;
			if (select("Estou Confiante...","Eu estou confuso") == 1) {
				mes "[Mercen�rio Khai]";
				mes "Sim, eu posso confiar em voc� agora.";
				mes "Deixe-me dar-lhe algumas dicas importantes..";
				next;
				switch (rand(1,3)) {
					case 1:
					mes "[Mercen�rio Khai]";
					mes "Primeiro de tudo, Tocaia � uma habilidade especificamente para o Katar.";
					mes "Portanto, ele n�o requer quaisquer compet�ncias relacionadas com adagas...";
					next;
					mes "[Mercen�rio Khai]";
					mes "Ataque duplo...";
					mes "Voc� n�o tentou aprender?";
					mes "Essa habilidade permite que voc� atacar um inimigo duas vezes ao mesmo tempo.";
					next;
					mes "[Mercen�rio Khai]";
					mes "Sangue Escarlate � uma pedra elemental, Gema Azul n�o tem tudo a ver com a classe mercen�rio.";
					next;
					mes "[Mercen�rio Khai]";
					mes "Voc� j� viu Magos ca�ar Salgueiro Anci�o usando a habilidade do elemento �gua?";
					mes "�gua coloca fogo sob controle, e vento coloca �gua sob controle..";
					next;
					mes "[Mercen�rio Khai]";
					mes "Enquanto voc� ficar perto das sombras, por paredes e coisas assim.";
					mes "Furtividade vai te esconder perfeitamente.";
					mes "A menos que algum bastardo usa uma certa habilidade de detec��o!";
					next;
					break;
					case 2:
					mes "[Mercen�rio Khai]";
					mes "Zumbis possui a propriedade do vivo.";
					next;
					mes "[Mercen�rio Khai]";
					mes "Que tipo de arma que voc� usou at� agora, Damasco, Gladius, Stiletto ou Main Gauche.";
					mes "O que � que voc� est� carregando agora?";
					next;
					mes "[Mercen�rio Khai]";
					mes "� poss�vel obter um Katar de Slot do Lobo do Deserto.";
					mes "Bem, basta manter isso em mente que voc� vai precisar dessa informa��o um dia..";
					next;
					mes "[Mercen�rio Khai]";
					mes "Voc� pode ganhar uma Jur com Slot de em um lugar escuro e �mido sob o solo.";
					mes "Bem, eu n�o tenho id�ia porque esse cara tem essa arma...";
					mes "Talvez precise para cavar um buraco...";
					next;
					mes "[Mercen�rio Khai]";
					mes "E...";
					mes "Eu sempre quis um sapo como animal de estima��o mas � imposs�vel.!";
					next;
					mes "[Mercen�rio Khai]";
					mes "At� onde eu sei, um Goblin carregando um martelo possui a propriedade da terra.";
					mes "Tenha em mente que fogo supera a propriedade da terra..";
					next;
					mes "[Mercen�rio Khai]";
					mes "Voc� sabe armas elementares?";
					mes "Os nomes dos ferreiros est�o gravados sobre eles normalmente...";
					next;
					break;
					case 3:
					mes "[Mercen�rio Khai]";
					mes "Vender uma Carta Salgueiro Anci�o a um Mago, o mais rapidamente poss�vel.";
					mes "Eles s�o loucos por essa carta por algum motivo.";
					mes "Ela n�o serve mesmo para aumentar a INT de um personagem.....?";
					next;
					mes "[Mercen�rio Khai]";
					mes "Para n�s, Esquiva e ataque � mais importante do que a defesa.";
					mes "Nunca pense sobre colocar um elmo, � pesado, desconfort�vel e at� mesmo bloquear sua vis�o...";
					next;
					mes "[Mercen�rio Khai]";
					mes "Per�cia em esquiva, permite que voc� tenha +3% de chance de esquivar por cada level da habilidade.";
					next;
					mes "[Mercen�rio Khai]";
					mes "Como eu lhe disse v�rias vezes: armas de classe Katar (Jamadhar / Jur / Katar etc) s�o de duas m�os!";
					next;
					mes "[Mercen�rio Khai]";
					mes "A cidade do deserto...";
					mes "Sinto falta da minha terra natal.";
					mes "Morroc eu n�o estive l� por um longo tempo.";
					mes "Sinto que se tornei um gaturno h� poucos dias, o tempo voa t�o r�pido......";
					next;
					mes "[Mercen�rio Khai]";
					mes "Heh.";
					mes "Lembro-me de quando fui me tornar um gaturno.";
					mes "Fiquei extremamente nervoso quando invadi a fazenda para obter cogumelos....";
					next;
					mes "[Mercen�rio Khai]";
					mes "Insetos detectam esconderijos / furtividades.";
					mes "Suas antenas nunca deixam de encontrar alvos..";
					next;
					mes "[Mercen�rio Khai]";
					mes "Ouvi dizer que a carta de Bafom� Jr. acrescenta +3 pontos a agilidade e um ponto de ataque cr�tico...";
					next;
					mes "[Mercen�rio Khai]";
					mes "Sim, n�s mercen�rios somos especialistas em adilidade por natureza.";
					mes "Podemos ganhar um b�nus de 10 pontos de agilidade, mesmo antes de dominar os mais autos n�veis de Classe.";
					next;
				}
				mes "[Mercen�rio Khai]";
				mes "^666666*Ufa*^000000";
				mes "Isso � tudo o que posso dizer-lhe, no entanto, que � um monte de dicas n�o duvido que eu disse-lhe quase tudo..";
				next;
				mes "[Mercen�rio Khai]";
				mes "Bem, ent�o, ir pedir para fazer o teste novamente com \"O An�nimo\".";
				close2;
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			}
			mes "[Mercen�rio Khai]";
			mes "^666666*Sigh...*^ 000000";
			mes "Como voc� pode n�o entender o conceito de dignidade.";
			next;
			mes "[Mercen�rio Khai]";
			mes "Oh, eu entendo.";
			mes "N�o era orgulho que voc� estava mostrando, voc� estava apenas sendo idiota.!";
			next;
			mes "[Mercen�rio Khai]";
			mes "Grrrrr ...";
			close2;
			//warp("c_tower4",64,76);
			end;
		}
	} else {
		mes "[Mercen�rio Khai]";
		mes "Oh, voc� deve ser um candidato a mercen�rio.";
		mes "Est� aqui para se tornar um mercen�rio, n�o �?";
		next;
		if (select("Sim eu estou","...N�o, n�o sou eu.") == 1) {
			mes "[Mercen�rio Khai]";
			mes "Ok, bom Vamos preencher o formul�rio de inscri��o.";
			mes "Por favor, assine o seu nome e inclua o seu n�vel de classe.";
			next;
			mes "[Mercen�rio Khai]";
			mes "Vamos ver.";
			mes "Seu nome � "+strcharinfo(PC_NAME)+"...";
			mes "Level de Classe "+JobLevel+"...";
			next;
			if (JobLevel > 48) {
				mes "[Mercen�rio Khai]";
				mes "Espere, o n�vel de classe � "+JobLevel+"?!";
				mes "Posso ver que tem treinado muito duro.";
				mes "Meus chefes v�o gostar de voc�!";
				next;
				mes "[Mercen�rio Khai]";
				mes "V� em frente e der-me um segundo e eu vou transport�-lo para a sala teste.";
				next;
				mes "[Mercen�rio Khai]";
				mes "Certo, ent�o, melhor sorte para voc�!";
				close2;
				assassinq3 = 1;
				assassinq = 1;
				changequest(8001,8002);
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			} else if (JobLevel < 49) {
				mes "[Mercen�rio Khai]";
				mes "Bem, voc� passou os requisitos.";
				mes "N�o � mau de todo.";
				next;
				mes "[Mercen�rio Khai]";
				mes "V� em frente e dar me a forma quando voc� est� feito preench�-lo.";
				mes "Tudo bem, obrigado.";
				next;
				mes "[Mercen�rio Khai]";
				mes "Eu vou transport�-lo";
				mes "para a sala de teste.";
				mes "Boa sorte!";
				close2;
				assassinq3 = 2;
				assassinq = 1;
				changequest(8001,8002);
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			} else {
				mes "[Mercen�rio Khai]";
				mes "Quem � voc�?";
				mes "...Guardas!";
				close2;
				warp("moc_fild16",206,229);
				end;
			}
		} else {
			mes "[Mercen�rio Khai]";
			mes "Huh?...";
			mes "O que, voc� est� tentando me enganar ou algo?";
			mes "Voc� n�o quer ser um mercen�rio?";
			next;
			if (select("N�o","Sim, eu quero ser um mercen�rio.") == 1) {
				mes "[Mercen�rio Khai]";
				mes "Eh, saia daqui.";
				mes "Pare de desperdi�ar meu tempo...";
				close2;
				assassinq = 0;
				assassinq3 = 0;
				assassinq2 = 0;
				erasequest(8001);
				warp("moc_fild16",206,229);
				end;
			}
			mes "[Mercen�rio Khai]";
			mes "...";
			mes "Ok, ent�o.";
			next;
			mes "[Mercen�rio Khai]";
			mes "Preencha o formul�rio com seu nome e do n�vel de classe.";
			next;
			mes "[Mercen�rio Khai]";
			mes strcharinfo(PC_NAME)+"?";
			mes "Esse � o seu nome?";
			mes "Parece engra�ado.";
			mes "Vamos ver...";
			mes "Level de Classe "+JobLevel+"...";
			next;
			if (JobLevel > 48) {
				mes "[Mercen�rio Khai]";
				mes "Level de Classe "+JobLevel+"?!";
				mes "Voc� deve ter treinado muito duro.";
				mes "Os patr�es v�o gostar que com certeza ....";
				next;
				mes "[Mercen�rio Khai]";
				mes "Est� feito o preenchimento do formul�rio.";
				mes "Tudo bem, d� para mim para que eu possa envi�-lo para a Sala de Teste, Boa sorte.";
				next;
				assassinq3 = 1;
				assassinq = 1;
				changequest(8001,8002);
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			} else if (JobLevel < 49) {
				mes "[Mercen�rio Khai]";
				mes "Voc� cumpriu nossos requisitos.";
				mes "Agora voc� que est� feito preenchimento do formul�rio...?";
				next;
				mes "[Mercen�rio Khai]";
				mes "Ent�o me d� o formul�rio para que eu possa envi�-lo para a sala de teste.";
				mes "Boa sorte ...";
				next;
				assassinq3 = 2;
				assassinq = 1;
				changequest(8001,8002);
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			} else {
				mes "[Mercen�rio Khai]";
				mes "Como entrou aqui?";
				mes "Saia!";
				close2;
				warp("moc_fild16",206,229);
				end;
			}
		}
	}
}

in_moc_16,19,154,0	script	nameless_one	FAKE_NPC,8,2,{
	OnTouch:
	if (assassinq2 < 5) {
		if (assassinq2 < 3) {
			mes "[O An�nimo]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+", Visitante.";
			mes "Mwahaha, � in�til tentar me encontrar ou ver-me...";
			next;
			mes "[O An�nimo]";
			mes "Estou perfeitamente escondido!";
			mes "Para se tornar indetect�vel s� pode ser feito pelos maiores mercen�rios!";
			next;
			mes "[O An�nimo]";
			mes "Voc� n�o est� com medo porque n�o pode me ver?";
			mes "Eu poderia mat�-l"+(Sex == SEX_MALE ? "o" : "a")+" a qualquer momento e seria t�o f�cil ...?";
			next;
			if (select("Acho que me borrei","Conversa mole. Eu te desafio!") == 1) {
				mes "[O An�nimo]";
				mes "Agora eu vejo que voc� n�o � nada mas um covarde.";
				next;
				mes "[O An�nimo]";
				mes "Bwahahahahahah!";
				mes "Isso est� me fazendo rir!";
				close;
			}
			mes "[O An�nimo]";
			mes "Ent�o ...";
			mes "Voc� desejar um desafio de mim?!";
			next;
			mes "[O An�nimo]";
			mes "Um rio de sangue segue cada passo meu.";
			mes "Eu n�o tenho nome, para seu tormento, minhas l�minas � tudo o que precisa saber.";
			next;
			mes "[O An�nimo]";
			mes "Eu estou aqui para testar seu conhecimento.";
			next;
			mes "[O An�nimo]";
			mes "Para o seu desafio, voc� deve responder �s minhas perguntas corretamente.";
			mes "Perguntas muito dif�ceis que apenas um mercen�rio pode responder.";
			next;
			mes "[O An�nimo]";
			mes "Embora n�o sou sem cora��o.";
			mes "Antes de prosseguir, h� algo que voc� gostaria de saber?";
			next;
			assassinq2 = 0;
			while (assassinq2 < 3) {
				switch (select("Habilidades","Atributos","Eu sei tudo.")) {
					case 1:
					mes "[O An�nimo]";
					mes "Habilidades...?";
					mes "Embora habilidades podem ter aplica��es circunstanciais.";
					mes "Vou informar sobre os conceitos b�sicos.";
					next;
					mes "[O An�nimo]";
					mes "Em primeiro lugar, ^ 3355FFPer�cia com Katar^000000.";
					mes "Esta habilidade aumenta o dano de armas de tipo Katar.";
					mes "Quanto maior o n�vel de habilidade, mais o dano ser� maior..";
					next;
					mes "[O An�nimo]";
					mes "^3355FFPer�cia com m�o Esquerda^000000 e ^3355FFPer�cia com m�o Direita^000000.";
					mes "Mercen�rios podem equipar armas diferentes em cada m�o, quando usando armas do tipo Adaga..";
					next;
					mes "[O An�nimo]";
					mes "Mas � obviamente mais dif�cil de manusear 2 armas de vez, ao inv�s de usar apenas uma.";
					mes "As habilidades Per�cia com m�o Esquerda e Direita, v�o almentar o dano ao usar duas adagas..";
					next;
					mes "[O An�nimo]";
					mes "No entanto, se voc� n�o quiser usar duas adagas.";
					mes "Voc� n�o vai precisar esta habilidade.";
					mes "voc� vai ver como Per�cia com m�o esquerda funciona assim que voc� atingir o n�vel Per�cia com m�o esquerda 2..";
					next;
					mes "[O An�nimo]";
					mes "^3355FFL�minas Destruidoras^000000 permite que voc� atacar um inimigo 8 vezes de uma s�.";
					mes "Esta habilidade s� funciona com armas Katar por causa da velocidade de ataque que ela requer.";
					next;
					mes "[O An�nimo]";
					mes "Claro, o dano � afetado por pontos de STR e da arma.";
					mes "Voc� vai entender como esta habilidade funciona quando voc� atingir o n�vel 4 em Per�cia com Katar..";
					next;
					mes "[O An�nimo]";
					mes "^3355FFTocaia^000000 permite-lhe atacar inimigos enquanto se escondendo debaixo do ch�o.";
					mes "Como voc� domin�-la, voc� vai ser capaz de atacar os inimigos � dist�ncia..";
					next;
					mes "[O An�nimo]";
					mes "Uma vez que � um ataque � dist�ncia, pode ser muito �til quando voc� est� cercado por inimigos.";
					next;
					mes "[O An�nimo]";
					mes "Porque voc� � obrigado a esconder-se perfeitamente para usar esta habilidade.";
					mes "Voc� deve primeiro aprender Furtividade em N�vel 2 antes que voc� pode aprender a Tocaia.";
					next;
					mes "[O An�nimo]";
					mes "Para saber ^3355FFFurtividade^000000, voc� deve aprender em N�vel 2 Esconderijo.";
					mes "Ent�o, voc� ser� capaz de se mover ao esconder se voc� estiver perto de uma parede..";
					next;
					mes "[O An�nimo]";
					mes "A ^3355FFEnvenenar Arma^000000 � uma habilidade que permite voc� para encantar veneno a que voc� est� usando.";
					mes "Isto vai dar temporariamente a propriedade do veneno em  sua arma...";
					next;
					mes "[O An�nimo]";
					mes "Isso tamb�m far� com que seus ataques ganhe chance de envenenar o inimigo ao acaso.";
					mes "Voc� tamb�m pode usar essa habilidade para encantar as armas de seus membros do grupo....";
					next;
					mes "[O An�nimo]";
					mes "^3355FFRefletir Veneno^000000.";
					mes "Protege o usu�rio de ataques com a propriedade do veneno, e pode ser usado em outras pessoas.";
					mes "No entanto, voc� deve aprender em N�vel 3 Envenenar Arma...";
					next;
					mes "[O An�nimo]";
					mes "^3355FFN�voa T�xica^000000 consome uma gema vermelha para contaminar uma �rea com veneno.";
					mes "A dura��o da contamina��o aumenta com o n�vel desta habilidade..";
					next;
					mes "[O An�nimo]";
					mes "Voc� pode aprender a habilidade N�voa Venemosa depois que voc� aprende em N�vel 5 Envenenar Arma.";
					next;
					mes "[O An�nimo]";
					mes "^3355FFExplos�o T�xica^000000 � uma habilidade que, depois de usado em um alvo.";
					mes "Far� com que ele explodir quando seu HP � menor do que uma certa quantidade ap�s tr�s segundos.";
					next;
					mes "[O An�nimo]";
					mes "Quando explode alvo, os inimigos nas pr�ximidades tamb�m est�o atingidos.";
					mes "Esta � uma habilidade essencial para mercen�rio.";
					mes "Requer N�vel 5 Refletir Veneno e N�vel 5 N�voa T�xica..";
					next;
					mes "[O An�nimo]";
					mes "Isso � tudo que tenho a dizer-lhe sobre habilidades de um mercen�rio.";
					assassinq2 = 1;
					next;
					break;
					case 2:
					mes "[O An�nimo]";
					mes "Hmm, Atributos...";
					mes "Para Mercen�rios, Agilidade, ou AGI, � o atributo mais importante.";
					next;
					mes "[O An�nimo]";
					mes "STR � provavelmente o segundo atributo mais importante.";
					mes "Mas isso � apenas a minha recomenda��o..";
					next;
					mes "[O An�nimo]";
					mes "Eu n�o posso dar-lhe o melhor conselho do que em rela��o aos atributos.";
					mes "Voc� deve pesquisar e ver qual atributo melhor e decidir que tipo de mercen�rio voc� quer ser..";
					assassinq2 = 2;
					next;
					break;
					case 3:
					if (assassinq2 == 0) {
						mes "[O An�nimo]";
						mes "Sabe tudo n�o � ?!";
						mes "Sou eu quem decide isso!";
						next;
					}
					assassinq2 = 3;
					break;
				}
			}
			mes "[O An�nimo]";
			mes "Hmpf...";
			mes "Agora � tempo para testar seu conhecimento.";
			mes "Voc� n�o pode errar mais de uma pergunta.";
			next;
			mes "[O An�nimo]";
			mes "Em outras palavras, se voc� quiser passar este teste.";
			mes "Deve me dar 9 respostas corretas das 10 perguntas que eu fazer.";
			mes "Se errar n�o lhe direi qual errou....";
			next;
			mes "[O An�nimo]";
			mes "Voc� est� pronto?";
			mes "Prepare-se!";
		} else if (assassinq2 < 5) {
			mes "[O An�nimo]";
			mes "Est� com problemas em passar um teste simples?";
			mes "Voc� deve ter mais conhecimento.";
			next;
			if (select("Ajuda-me, como eu passo?","Eu desafio voc� novamente!") == 1) {
				mes "[O An�nimo]";
				mes "Bem, isso � uma maldita boa pergunta, mas voc� est� banido da Guilda dos Mercen�rios, por isso n�o � problema meu ....";
				close2;
				warp("moc_fild16",206,151);
				end;
			}
			mes "[O An�nimo]";
			mes "Agora, vamos test�-lo mais uma vez.";
			mes "Tenha em mente, voc� deve responder 9 perguntas de 10 correctamente.";
			mes "Se voc� perder mais do que uma pergunta, voc� nunca pode se tornar um mercen�rio.";
			next;
			mes "[O An�nimo]";
			mes "Ok, voc� est� pronto?";
			mes "Boa sorte.";
		}
		next;
		switch (rand(1,3)) {
			case 1:
			mes "[O An�nimo]";
			mes "1. O que aqui n�o � um pr�-requisito da habilidade Tocaia?";
			next;
			if (select("Furtividade Lv 2","L�minas Destru�doras Lv 5","Esconder Lv 2","Per�cia com M�o Esquerda Lv 2") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "2. Envenenar Arma faz sua arma que elemento?";
			next;
			if (select("Veneno","Terra","Fogo","Vento") == 1) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "3. Qual � a fun��o de level 4 de Per�cia com M�o Esquerda?";
			next;
			if (select("Ataque +80%","Ataque +70%","Ataque +90%","Ataque +108%!!") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "4. Qual item voc� precisa usar quando voc� usa \"N�voa T�xica\"?";
			next;
			if (select("Gema Verde","Gema Azul","Gema Amarela","Gema Vermelha") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "5. Quando voc� aumenta Envenenar Arma para o level 5, qual nova habilidade ir� aparecer?";
			next;
			if (select("Envenenar","L�minas Destru�doras","Explos�o T�xica","Nuvem T�xica") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "6. Que habilidade abaixo permite que voc� possa caminhar por ai despercebido?";
			next;
			if (select("Esconderijo","Recuar","Furtividade","Chutar Areia") == 3) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "7. Qual � o requerimento para N�voa T�xica?";
			next;
			if (select("Alvo envenenado","Precisa usar uma Gema Vermelha","Voc� precisa ter uma quantia certa de HP.") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "8. Qual carta dos monstros abaixo adiciona para Intelig�ncia?";
			next;
			if (select("Chonchon de A�o","Deviruchi","Salgueiro Anci�o","Bafom�") == 3) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "9. Quanto SP voc� gasta quando voc� bate dobrado usando uma adaga?";
			next;
			if (select("15","� uma habilidade passiva","54") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "10. Qual � o melhor tipo de espada para se usar em Bybalan?";
			next;
			if (select("Espada de Vento","Espada de Gelo","Espada de Terra","Espada de Fogo") == 1) {
				.@assassin_t += 10;
			}
			break;
			case 2:
			mes "[O An�nimo]";
			mes "1. Qual monstro dropa Katar com slot?";
			next;
			if (select("Besouro-Ladr�o Macho","PecoPeco","Lobo do Deserto","Cobold") == 3) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "2. Qual carta abaixo pode ser introduzida em uma Jur?";
			next;
			if (select("Caramelo","Ghostring","Baphomet Jr","DoppelGanger") == 1) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "3. Qual classe pode forjar armas elementais?";
			next;
			if (select("Mercador","Ferreiro","Gatuno","Sacerdote") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "4. Que arma abaixo n�o � uma arma da classe Katar?";
			next;
			if (select("Jamadhar","Jur","Katar","Gladius") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "5. Em Bybalan uma grande quantidade de monstros s�o de que elemento?";
			next;
			if (select("�gua","Fogo","Vento","Terra") == 1) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "6. Qual monstro abaixo n�o pode ser domado e se tornar um lindo bichinho de estima��o?";
			next;
			if (select("Poporing","Sapo de Roda","Lun�tico","Esporo Venenoso") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "7. Escolha o monstro que � fraco contra Fogo.";
			next;
			if (select("Cobold Espada","Cobold Ma�a","Cobold Martelo","Cobold Machado") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "8. Escolha um Katar n�o elemental.";
			next;
			if (select("Katar da Chama Impetuosa","Katar da Espinheira Empoeirada","Osso Afiado de Carni�al","Infiltrador") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "9. Escolha o monstro que n�o pertence a um grupo elemental.";
			next;
			if (select("Poring","Ghostring","Creamy","Drops") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "10. Escolha um monstro n�o morto-vivo.";
			next;
			if (select("Drake","Megalodon","Esporo","Khalitzburg") == 3) {
				.@assassin_t += 10;
			}
			break;
			case 3:
			mes "[O An�nimo]";
			mes "1. Qual � a taxa de esquiva aumentada quando voc� tem a habilidade \"Aumentar Esquiva\" no level 1?";
			next;
			if (select("30","40","160","20") == 1) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "2. Qual monstro pode detectar algu�m que est� invis�vel/escondido?";
			next;
			if (select("Rabo de Verme","Andre","Mumia","Esqueleto") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "3. Mercen�rios podem usar armas duplas.";
			mes "Qual set das armas abaixo um Mercen�rio pode usar?";
			next;
			if (select("Jur e Ma�a","Damascus e Claymore","Damascus e Stiletto","Machado e Stiletto") == 3) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "4. Em qual cidade voc� vira Gatuno?";
			next;
			if (select("Prontera","Lutie","Alberta","Morocc") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "5. Qual carta tem nada para fazer com Agilidade?";
			next;
			if (select("Carta Baphomet Jr","Carta Sussurro","Carta Besouro-Ladr�o Macho","Carta Chonchon") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "6. O que faz os Mercen�rios t�o especiais?";
			next;
			if (select("Habilidade de canto","Habilidade de a��o","Habilidade de dan�a","Habilidade de esquiva") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "7. Quando um Mercen�rio alcan�a N�vel de Classe 50, qual � o bonus adicionado que ele/ela recebe em Agilidade?";
			next;
			if (select("7","8","9","10") == 4) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "8. Qual equipamento n�o pode ser usado por um Mercen�rio?";
			next;
			if (select("Adaga","Elmo","Sapatos","Broche") == 2) {
				.@assassin_t += 10;
			}
			mes "[O An�nimo]";
			mes "9. Quando um Aprendiz quer se tornar um Gatuno, quais cogumelos ele/ela precisa roubar?";
			next;
			switch (select("Venenosos e Borrachentos","Vermelhos e Laranja","Do C�u e Inferno","Negros e Brancos")) {
				case 1:
				case 3:
				.@assassin_t += 10;
				break;
				default:
				break;
			}
			mes "[O An�nimo]";
			mes "10. Qual carta abaixo � in�til para um Mercen�rio?";
			next;
			if (select("Carta Ghostring","Carta Salgueiro Anci�o","Carta Esqueleto Soldado","Carta Cobold") == 2) {
				.@assassin_t += 10;
			}
			break;
		}
		if (assassinq2 == 3) {
			next;
			mes "[O An�nimo]";
			mes "De alguma forma, voc� demonstrou grande esfor�o.";
			next;
			mes "[O An�nimo]";
			mes "Vamos ver...";
			mes "Voc� marcou "+.@assassin_t+" pontos...";
			if (.@assassin_t > 80) {
				assassinq2 = 5;
				changequest(8002,8003);
				mes "Bom.";
				mes "Voc� passou.";
				next;
				mes "[O An�nimo]";
				mes "No entanto, um outro teste espera por voc�.";
				mes "Quando ir para a pr�xima �rea, receber� novas instru��es ....";
				close;
			} else {
				assassinq2 = 4;
				mes "Isso significa que voc� n�o passou!";
				next;
				mes "[O An�nimo]";
				mes "Como voc� pode espera ser um mercen�rio com esta pontua��o dessas?";
				mes "Mantenha em aprender mais e volte quando estiver pronto.";
				close2;
				warp(strnpcinfo(NPC_MAP),19,76);
				end;
			}
		} else if (assassinq2 == 4) {
			next;
			mes "[O An�nimo]";
			mes "De alguma forma, voc� demonstrou grande esfor�o.";
			next;
			mes "[O An�nimo]";
			mes "Vamos ver...";
			mes "Voc� marcou "+.@assassin_t+" pontos...";
			if (.@assassin_t > 80) {
				assassinq2 = 5;
				changequest(8002,8003);
				next;
				mes "[O An�nimo]";
				mes "Voc� n�o falhou desta vez.";
				mes "Mas voc� ainda n�o est� pront"+(Sex == SEX_MALE ? "o" : "a")+".";
				mes "Ter� outro teste, voc� ser� informado sobre o seu pr�ximo teste...";
				close;
			} else {
				assassinq2 = 4;
				mes "Voc� n�o!";
				next;
				mes "[O An�nimo]";
				mes "Voc� � muito inadequado.";
				mes "Como voc� pode pensar em se tornar um mercen�rio?";
				next;
				mes "[O An�nimo]";
				mes "Estou surpreso que voc� foi capaz de se tornar um gatruno.";
				mes "V� embora e volte apenas quando voc� saber do que est� fazendo.";
				close2;
				warp(strnpcinfo(NPC_MAP),19,76);
				end;
			}
		}
	} else {
		mes "[O An�nimo]";
		mes "Eu ficarei de olho em voc�...";
		close;
	}
}

in_moc_16,21,165,2	script	Sala de Espera#assassinq	4_F_JOB_ASSASSIN,{
	end;

	OnInit:
	disablenpc("Sala de Espera#assassinq");
	waitingroom("Sala de Espera",10,"Sala de Espera#assassinq::OnStartArena",1);
	enablewaitingroomevent;
	end;

	OnStartArena:
	warpwaitingpc(strnpcinfo(NPC_MAP),66,151);
	attachrid($@warpwaitingpc[0]);
	if (assassinq2 < 5) {
		warpchar(strnpcinfo(NPC_MAP),20,145,getcharid(CHAR_ID_CHAR));
		end;
	}
	donpcevent("Beholder#assassinq::OnEnable");
	donpcevent("Guarda da Porta#assassinq::OnDisable");
	setvariable(getvariableofnpc(.DisableTraps,"Beholder#assassinq"),0);
	disablewaitingroomevent;
	end;

	OnStart:
	enablewaitingroomevent;
	end;
}

in_moc_16,21,165,2	script	Guia do Teste#assassinq	4_F_JOB_ASSASSIN,4,4,{
	if (assassinq == 1 && assassinq2 == 5) {
		mes "[Barcardi]";
		mes strcharinfo(PC_NAME)+"...";
		mes "Voc� passou no teste?";
		next;
		mes "[Barcardi]";
		mes "Para ser honesta, eu quero conceder-lhe a mudan�a de classe sem qualquer outra condi��o.";
		mes "Muitas pessoas pat�ticas nem sequer t�m o conhecimento b�sico para ser mercen�rio....";
		next;
		mes "[Barcardi]";
		mes "Devemos manter a nossa dignidade como Mercen�rios e ser verdadeiramente grandes.";
		mes "Infelizmente, existem muitos idiotas que n�o t�m nenhum orgulho!";
		next;
		mes "[Barcardi]";
		mes "Todos os mercen�rios devem respeitar os inimigos que matam, o sangue que derrama.";
		mes "E acima de tudo, manter o seu sentido de dignidade!";
		next;
		mes "[Barcardi]";
		mes "Tudo bem.";
		mes "Este pr�ximo teste ir� testar a sua capacidade de encontrar rapidamente o seu alvos.";
		next;
		mes "[Barcardi]";
		mes "Se para ser um mercen�rio, precisamos determinar se voc� pode distinguir o amigo do inimigo em um instante.";
		next;
		mes "[Barcardi]";
		mes "O principal objetivo deste teste � encontrar e matar todos monstros chamados ^008800Alvo^000000.";
		next;
		mes "[Barcardi]";
		mes "Voc� deve matar pelo menos 6 monstros ^008800Alvo^000000.";
		mes "Eles est�o misturados entre monstros de apar�ncia similar, ent�o voc� precisa ter cuidado ...";
		next;
		mes "[Barcardi]";
		mes "E tamb�m h� v�rias armadilhas espalhadas pelo local fique atent"+(Sex == SEX_MALE ? "o" : "a")+" para n�o cair em nenhuma.";
		mes "Se for pego por uma armadilha tamb�m falhar� e ter� que recome�ar.";
		next;
		mes "[Barcardi]";
		mes "Se voc� falhar, voc� ter� que reiniciar este teste.";
		mes "Entre na sala de espera para ser levad"+(Sex == SEX_MALE ? "o" : "a")+" para o Sala de testes.";
		next;
		mes "[Barcardi]";
		mes "Apenas uma pessoa est� autorizada a fazer o teste de cada vez.";
		mes "Por isso, se algu�m estiver fazendo o teste, voc� vai ter que esperar at� que a pessoa acabe.";
		close;
	} else {
		mes "[Barcardi]";
		mes "Ei, n�o ser muito dif�cil, confie em si mesmo!";
		next;
		mes "[Barcardi]";
		mes "Hmm, se voc� estiver disposto a desistir.";
		mes "Posso lhe mandar devolta, mas se for fazer o teste para mercen�rio novamente ter� que recome�a-lo do zero.";
		mes "Ent�o o que voc� quer fazer..?";
		next;
		if (select("Continuar","Desistir agora.") == 1) {
			mes "[Bacardi]";
			mes "Boa escolha!";
			mes "Lembre-se, voc� deve encontrar e matar 6 monstros ^008800Alvo^ 000000!";
			mes "Boa sorte!";
			close;
		}
		mes "[Bacardi]";
		mes "Tudo bem ...";
		close2;
		assassinq = 0;
		assassinq3 = 0;
		assassinq2 = 0;
		changequest(8003,8000);
		warp(strnpcinfo(NPC_MAP),19,13);
		end;
	}

	OnTouch:
	if (assassinq2 < 5) {
		mes "[Bacardi]";
		mes "Voc� n�o pode ir ao pr�ximo teste sem passar no teste escrito em primeiro lugar.";
		mes "� melhor falar com o An�nimo....";
		close2;
		warp(strnpcinfo(NPC_MAP),19,76);
	}
	end;
}

in_moc_16,1,1,0	script	Beholder#assassinq	FAKE_NPC,{
	end;

	OnEnable:
	.MyMobs = 6;
	// Monstros do objetivo
	monster(strnpcinfo(NPC_MAP),77,173,"Alvo",PORING,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),62,161,"Alvo",PORING,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),85,169,"Alvo",LUNATIC,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),88,152,"Alvo",PORING,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),90,143,"Alvo",DROPS,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),74,167,"Alvo",POPORING,1,"Beholder#assassinq::OnMyMobDead");

	// Monstros misturados
	monster(strnpcinfo(NPC_MAP),62,161,"Criatura Alvo",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,156,"Criatura Alvo",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),71,173,"Alvo da Miss�o",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),76,172,"Exemplo",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),67,167,"Eu tenho o seu aqui",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,171,"Ataque Me",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Teste de Batalha",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,158,"Doppelganger",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,159,"Voc� est� pronto",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,169,"Criatura Alvo",POPORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),86,170,"Alvo pra Mudar Classe",POPORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,170,"Monstro de Batalha",POPORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Prova do Teste",POPORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),79,174,"Criatura Alvo",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),68,173,"Alvo da Quest",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),60,158,"Guerreiro Teste",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),75,172,"Eu N�o",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,170,"Alvo pra Mudar Classe",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Mungamorp",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Orvalho do Batalha",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),74,171,"Alvo Guerreiro",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),65,158,"Teste de Batalha",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),64,169,"Alvo da Miss�o",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),77,172,"Por favor n�o me Ataque",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),86,171,"Alvo pra Mudar Classe",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Bouncer",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),83,169,"Druida Mal�gno",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,157,"Qualquer um",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),64,159,"Qualquer um",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,159,"Miss�o do Arqueiro",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,159,"Miss�o do Espadachim",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),83,148,"Miss�o do Gaturno",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),82,148,"Miss�o do Novi�o",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),84,148,"Miss�o do Mercador",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	initnpctimer;
	end;

	OnReset:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	stopnpctimer;
	donpcevent("Sala de Espera#assassinq::OnStart");
	end;

	OnResetMob:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	stopnpctimer;
	end;

	OnMyMobDead:
	--.MyMobs;
	if (.MyMobs < 1) {
		mapannounce(strnpcinfo(NPC_MAP),"Voc� passou nesse teste. Parab�ns!",bc_map);
		assassinq = 3;
		changequest(8003,8004);
		donpcevent("timestopper#assassinq::OnEnable");
		donpcevent("Guarda da Porta#assassinq::OnEnable");
		donpcevent(strnpcinfo(NPC_NAME)+"::OnResetMob");
		.DisableTraps = 1;
		stopnpctimer;
	} else {
		mapannounce(strnpcinfo(NPC_MAP),"Ok, est� indo bem! Aguente a�, voc� est� quase l�! Restam "+.MyMobs+" Alvo",bc_map);
	}
	end;

	OnMyMobDead2:
	mapannounce(strnpcinfo(NPC_MAP),"! Voc� cometeu um erro! Eu estou lhe trazendo de volta!",bc_map);
	assassinq = 2;
	warp(strnpcinfo(NPC_MAP),19,161);
	donpcevent(strnpcinfo(NPC_NAME)+"::OnReset");
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"Ok, vamos ao teste come�ar!",bc_map);
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"Como voc� foi dito antes, encontrar e s� matar monstros chamados \"Alvo\"!",bc_map);
	end;

	OnTimer3000:
	mapannounce(strnpcinfo(NPC_MAP),"O objectivo deste teste � analisar a sua capacidade de distinguir rapidamente os inimigos de outras pessoas!",bc_map);
	end;

	OnTimer4000:
	mapannounce(strnpcinfo(NPC_MAP),"Voc� ter� 3 minutos para o teste! Vamos inform�-lo de cada minuto passado.",bc_map);
	end;

	OnTimer5000:
	mapannounce(strnpcinfo(NPC_MAP),"Ok, agora voc� tem exatamente 3 minutos. Mova-se! Mova-se!",bc_map);
	end;

	OnTimer65000:
	mapannounce(strnpcinfo(NPC_MAP),"2 minutos faltando. Como eu j� disse, pegue monstros com o nome \"Alvo\"!",bc_map);
	end;

	OnTimer125000:
	mapannounce(strnpcinfo(NPC_MAP),"1 minuto faltando.",bc_map);
	end;

	OnTimer180000:
	mapannounce(strnpcinfo(NPC_MAP),"5 segundos faltando...",bc_map);
	end;

	OnTimer181000:
	mapannounce(strnpcinfo(NPC_MAP),"4 segundos faltando...",bc_map);
	end;

	OnTimer182000:
	mapannounce(strnpcinfo(NPC_MAP),"3 segundos faltando...",bc_map);
	end;

	OnTimer183000:
	mapannounce(strnpcinfo(NPC_MAP),"2 segundos faltando...",bc_map);
	end;

	OnTimer184000:
	mapannounce(strnpcinfo(NPC_MAP),"1 segundo faltando.",bc_map);
	end;

	OnTimer185000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo acabou!",bc_map);
	mapannounce(strnpcinfo(NPC_MAP),"Voc� s� queria desperdi�ar seu tempo. Ter� que tentar novamente!",bc_map);
	//assassinq = 2;
	end;

	OnTimer186000:
	areawarp(strnpcinfo(NPC_MAP),60,136, 93,177,strnpcinfo(NPC_MAP),19,161);
	end;

	OnTimer187000:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnReset");
	end;
}

in_moc_16,68,158,0	script	SinTrap#assassinq	FAKE_NPC,0,0,{
	OnTouch:
	if (getvariableofnpc(.DisableTraps,"Beholder#assassinq") < 1) {
		mapannounce strnpcinfo(NPC_MAP),"Voc� ser� enviado de volta.",bc_map;
		assassinq = 2;
		warp(strnpcinfo(NPC_MAP),19,161);
		donpcevent("Beholder#assassinq::OnResetMob");
		donpcevent("Sala de Espera#assassinq::OnStart");
	}
	end;
}

in_moc_16,69,158,0	duplicate(SinTrap#assassinq)	01_assassinq_2	FAKE_NPC,0,0
in_moc_16,68,159,0	duplicate(SinTrap#assassinq)	01_assassinq_3	FAKE_NPC,0,0
in_moc_16,69,159,0	duplicate(SinTrap#assassinq)	01_assassinq_4	FAKE_NPC,0,0
in_moc_16,64,162,0	duplicate(SinTrap#assassinq)	02_assassinq_1	FAKE_NPC,0,0
in_moc_16,65,162,0	duplicate(SinTrap#assassinq)	02_assassinq_2	FAKE_NPC,0,0
in_moc_16,64,163,0	duplicate(SinTrap#assassinq)	02_assassinq_3	FAKE_NPC,0,0
in_moc_16,65,163,0	duplicate(SinTrap#assassinq)	02_assassinq_4	FAKE_NPC,0,0
in_moc_16,62,168,0	duplicate(SinTrap#assassinq)	03_assassinq_1	FAKE_NPC,0,0
in_moc_16,63,168,0	duplicate(SinTrap#assassinq)	03_assassinq_2	FAKE_NPC,0,0
in_moc_16,62,169,0	duplicate(SinTrap#assassinq)	03_assassinq_3	FAKE_NPC,0,0
in_moc_16,63,169,0	duplicate(SinTrap#assassinq)	03_assassinq_4	FAKE_NPC,0,0
in_moc_16,66,170,0	duplicate(SinTrap#assassinq)	04_assassinq_1	FAKE_NPC,0,0
in_moc_16,67,170,0	duplicate(SinTrap#assassinq)	04_assassinq_2	FAKE_NPC,0,0
in_moc_16,66,171,0	duplicate(SinTrap#assassinq)	04_assassinq_3	FAKE_NPC,0,0
in_moc_16,67,171,0	duplicate(SinTrap#assassinq)	04_assassinq_4	FAKE_NPC,0,0
in_moc_16,64,174,0	duplicate(SinTrap#assassinq)	05_assassinq_1	FAKE_NPC,0,0
in_moc_16,64,175,0	duplicate(SinTrap#assassinq)	05_assassinq_2	FAKE_NPC,0,0
in_moc_16,65,174,0	duplicate(SinTrap#assassinq)	05_assassinq_3	FAKE_NPC,0,0
in_moc_16,65,175,0	duplicate(SinTrap#assassinq)	05_assassinq_4	FAKE_NPC,0,0
in_moc_16,72,174,0	duplicate(SinTrap#assassinq)	06_assassinq_1	FAKE_NPC,0,0
in_moc_16,72,175,0	duplicate(SinTrap#assassinq)	06_assassinq_2	FAKE_NPC,0,0
in_moc_16,73,174,0	duplicate(SinTrap#assassinq)	06_assassinq_3	FAKE_NPC,0,0
in_moc_16,73,175,0	duplicate(SinTrap#assassinq)	06_assassinq_4	FAKE_NPC,0,0
in_moc_16,72,166,0	duplicate(SinTrap#assassinq)	07_assassinq_1	FAKE_NPC,0,0
in_moc_16,72,167,0	duplicate(SinTrap#assassinq)	07_assassinq_2	FAKE_NPC,0,0
in_moc_16,73,166,0	duplicate(SinTrap#assassinq)	07_assassinq_3	FAKE_NPC,0,0
in_moc_16,73,167,0	duplicate(SinTrap#assassinq)	07_assassinq_4	FAKE_NPC,0,0
in_moc_16,72,168,0	duplicate(SinTrap#assassinq)	08_assassinq_1	FAKE_NPC,0,0
in_moc_16,72,169,0	duplicate(SinTrap#assassinq)	08_assassinq_2	FAKE_NPC,0,0
in_moc_16,73,168,0	duplicate(SinTrap#assassinq)	08_assassinq_3	FAKE_NPC,0,0
in_moc_16,73,169,0	duplicate(SinTrap#assassinq)	08_assassinq_4	FAKE_NPC,0,0
in_moc_16,78,168,0	duplicate(SinTrap#assassinq)	09_assassinq_1	FAKE_NPC,0,0
in_moc_16,78,169,0	duplicate(SinTrap#assassinq)	09_assassinq_2	FAKE_NPC,0,0
in_moc_16,79,168,0	duplicate(SinTrap#assassinq)	09_assassinq_3	FAKE_NPC,0,0
in_moc_16,79,169,0	duplicate(SinTrap#assassinq)	09_assassinq_4	FAKE_NPC,0,0
in_moc_16,80,172,0	duplicate(SinTrap#assassinq)	10_assassinq_1	FAKE_NPC,0,0
in_moc_16,81,172,0	duplicate(SinTrap#assassinq)	10_assassinq_2	FAKE_NPC,0,0
in_moc_16,82,172,0	duplicate(SinTrap#assassinq)	10_assassinq_3	FAKE_NPC,0,0
in_moc_16,83,172,0	duplicate(SinTrap#assassinq)	10_assassinq_4	FAKE_NPC,0,0
in_moc_16,80,173,0	duplicate(SinTrap#assassinq)	10_assassinq_5	FAKE_NPC,0,0
in_moc_16,81,173,0	duplicate(SinTrap#assassinq)	10_assassinq_6	FAKE_NPC,0,0
in_moc_16,82,173,0	duplicate(SinTrap#assassinq)	10_assassinq_7	FAKE_NPC,0,0
in_moc_16,83,173,0	duplicate(SinTrap#assassinq)	10_assassinq_8	FAKE_NPC,0,0
in_moc_16,88,174,0	duplicate(SinTrap#assassinq)	11_assassinq_1	FAKE_NPC,0,0
in_moc_16,88,175,0	duplicate(SinTrap#assassinq)	11_assassinq_2	FAKE_NPC,0,0
in_moc_16,89,174,0	duplicate(SinTrap#assassinq)	11_assassinq_3	FAKE_NPC,0,0
in_moc_16,89,175,0	duplicate(SinTrap#assassinq)	11_assassinq_4	FAKE_NPC,0,0
in_moc_16,86,166,0	duplicate(SinTrap#assassinq)	12_assassinq_1	FAKE_NPC,0,0
in_moc_16,86,167,0	duplicate(SinTrap#assassinq)	12_assassinq_2	FAKE_NPC,0,0
in_moc_16,87,166,0	duplicate(SinTrap#assassinq)	12_assassinq_3	FAKE_NPC,0,0
in_moc_16,87,167,0	duplicate(SinTrap#assassinq)	12_assassinq_4	FAKE_NPC,0,0
in_moc_16,90,164,0	duplicate(SinTrap#assassinq)	13_assassinq_1	FAKE_NPC,0,0
in_moc_16,90,165,0	duplicate(SinTrap#assassinq)	13_assassinq_2	FAKE_NPC,0,0
in_moc_16,91,164,0	duplicate(SinTrap#assassinq)	13_assassinq_3	FAKE_NPC,0,0
in_moc_16,91,165,0	duplicate(SinTrap#assassinq)	13_assassinq_4	FAKE_NPC,0,0
in_moc_16,84,160,0	duplicate(SinTrap#assassinq)	14_assassinq_1	FAKE_NPC,0,0
in_moc_16,85,160,0	duplicate(SinTrap#assassinq)	14_assassinq_2	FAKE_NPC,0,0
in_moc_16,86,160,0	duplicate(SinTrap#assassinq)	14_assassinq_3	FAKE_NPC,0,0
in_moc_16,87,160,0	duplicate(SinTrap#assassinq)	14_assassinq_4	FAKE_NPC,0,0
in_moc_16,88,160,0	duplicate(SinTrap#assassinq)	14_assassinq_5	FAKE_NPC,0,0
in_moc_16,89,160,0	duplicate(SinTrap#assassinq)	14_assassinq_6	FAKE_NPC,0,0
in_moc_16,84,161,0	duplicate(SinTrap#assassinq)	14_assassinq_7	FAKE_NPC,0,0
in_moc_16,85,161,0	duplicate(SinTrap#assassinq)	14_assassinq_8	FAKE_NPC,0,0
in_moc_16,86,161,0	duplicate(SinTrap#assassinq)	14_assassinq_9	FAKE_NPC,0,0
in_moc_16,87,161,0	duplicate(SinTrap#assassinq)	14_assassinq_10	FAKE_NPC,0,0
in_moc_16,88,161,0	duplicate(SinTrap#assassinq)	14_assassinq_11	FAKE_NPC,0,0
in_moc_16,89,161,0	duplicate(SinTrap#assassinq)	14_assassinq_12	FAKE_NPC,0,0
in_moc_16,86,154,0	duplicate(SinTrap#assassinq)	15_assassinq_1	FAKE_NPC,0,0
in_moc_16,86,155,0	duplicate(SinTrap#assassinq)	15_assassinq_2	FAKE_NPC,0,0
in_moc_16,87,154,0	duplicate(SinTrap#assassinq)	15_assassinq_3	FAKE_NPC,0,0
in_moc_16,87,155,0	duplicate(SinTrap#assassinq)	15_assassinq_4	FAKE_NPC,0,0
in_moc_16,84,150,0	duplicate(SinTrap#assassinq)	16_assassinq_1	FAKE_NPC,0,0
in_moc_16,84,151,0	duplicate(SinTrap#assassinq)	16_assassinq_2	FAKE_NPC,0,0
in_moc_16,85,150,0	duplicate(SinTrap#assassinq)	16_assassinq_3	FAKE_NPC,0,0
in_moc_16,85,151,0	duplicate(SinTrap#assassinq)	16_assassinq_4	FAKE_NPC,0,0
in_moc_16,90,150,0	duplicate(SinTrap#assassinq)	17_assassinq_1	FAKE_NPC,0,0
in_moc_16,90,151,0	duplicate(SinTrap#assassinq)	17_assassinq_2	FAKE_NPC,0,0
in_moc_16,91,150,0	duplicate(SinTrap#assassinq)	17_assassinq_3	FAKE_NPC,0,0
in_moc_16,91,151,0	duplicate(SinTrap#assassinq)	17_assassinq_4	FAKE_NPC,0,0
in_moc_16,86,146,0	duplicate(SinTrap#assassinq)	18_assassinq_1	FAKE_NPC,0,0
in_moc_16,86,147,0	duplicate(SinTrap#assassinq)	18_assassinq_2	FAKE_NPC,0,0
in_moc_16,87,146,0	duplicate(SinTrap#assassinq)	18_assassinq_3	FAKE_NPC,0,0
in_moc_16,87,147,0	duplicate(SinTrap#assassinq)	18_assassinq_4	FAKE_NPC,0,0

in_moc_16,87,137,0	script	Guarda da Porta#assassinq	WARPNPC,2,1,{
	OnInit:
	disablenpc("Guarda da Porta#assassinq");
	end;

	OnTouch:
	donpcevent("Thomas#assassinq::OnDisable");
	if (assassinq == 3) {
		assassinq = 3;
	} else {
		assassinq = 4;
	}
	warp(strnpcinfo(NPC_MAP),87,102);
	savepoint(strnpcinfo(NPC_MAP),16,13);
	end;

	OnEnable:
	mapannounce(strnpcinfo(NPC_MAP),"A porta nas coordenadas 87 137, abriu, siga para a pr�xima area.",bc_map);
	enablenpc(strnpcinfo(NPC_NAME));
	end;

	OnDisable:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}

in_moc_16,3,3,0	script	timestopper#assassinq	FAKE_NPC,{
	OnEnable:
	initnpctimer;
	end;

	OnTimer187000:
	donpcevent("Thomas#assassinq::OnDisable");
	stopnpctimer;
	end;

	OnDisable:
	stopnpctimer;
	end;

	OnMyMobDead:
	mapannounce(strnpcinfo(NPC_MAP),"Ei, o que foi isso?! Eu lhe disse para n�o monstar nenhum monstro!",bc_map);
	mapannounce(strnpcinfo(NPC_MAP),"Eu estou trazendo voc� de volta...",bc_map);
	assassinq = 3;
	warp(strnpcinfo(NPC_MAP),87,102);
	killmonsterall(strnpcinfo(NPC_MAP));
	end;
}

in_moc_16,89,98,1	script	Thomas#assassinq	2_M_THIEFMASTER,5,1,{
	end;

	OnTouch:
	if (assassinq == 4) {
		mes "[Thomas]";
		mes "Parece que voc� est� em um muita de dor.";
		mes "^666666*Sigh000000";
		mes "D�-me um segundo, deixe-me tentar restaurar seu HP e SP...";
		percentheal(100,100);
		next;
		mes "[Thomas]";
		mes "Parece que voc� est� tendo um momento dif�cil.";
		mes "Voc� quer desisitir?";
		mes "Ou se esfor�ar o suficiente, para superar esse teste.";
		next;
		switch (select("Vou tentar novamente","Desito... Eu parei!")) {
			case 1:
			mes "[Thomas]";
			mes "Hmm. Tudo bem";
			mes "Boa sorte l� fora.";
			close;
			case 2:
			mes "[Thomas]";
			mes "Huh ...";
			mes "Sair do teste.";
			mes "Bem, acho que voc� n�o quer nos fazer perder mais tempo?";
			next;
			mes "[Thomas]";
			mes "N�o se esque�a de salvar o seu ponto de desova na cidade.";
			close2;
			mapannounce strnpcinfo(NPC_MAP),"Ficou com medo e parou o teste... Quem � o pr�ximo?!",bc_map;
			assassinq = 0;
			assassinq2 = 0;
			assassinq3 = 0;
			changequest(8004,8000);
			savepoint(strnpcinfo(NPC_MAP),18,14);
			warp(strnpcinfo(NPC_MAP),18,14);
			donpcevent("Sala de Espera#assassinq::OnStart");
			end;
		}
	}
	mes "[Thomas]";
	mes "...Ei, eu estou Thomas.";
	mes "Estou encarregado de testar o uso da per�cia esconderijo.";
	next;
	mes "[Thomas]";
	mes "Ou�a, neste teste, voc� n�o pode matar qualquer monstro.";
	mes "Seu objetivo � alcan�ar \"Barcardi\" no lado oposto da sala..";
	next;
	mes "[Thomas]";
	mes "Ent�o, basicamente, � passar para o outro lado da sala onde se encontram \"Barcardi\".";
	mes "Sem matar um �nico monstro entendeu?";
	next;
	mes "[Thomas]";
	mes "Chega de conversa, vamos ver no que voc� capaz...";
	close2;
	assassinq = 4;

	monster(strnpcinfo(NPC_MAP),81,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),82,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),83,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),84,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),85,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),86,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),88,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),89,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),90,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),77,77,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),78,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),79,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),80,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),81,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),91,55,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),92,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),93,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),94,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),95,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),96,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),97,56,"M�mia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),76,62,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),79,62,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),79,65,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),76,65,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),96,62,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),96,65,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),99,62,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),99,65,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	end;

	OnDisable:
	donpcevent("Sala de Espera#assassinq::OnStart");
	killmonsterall(strnpcinfo(NPC_MAP));
	end;
}

in_moc_16,87,48,2	script	Barcardi#assassinq	4_F_JOB_ASSASSIN,2,2,{
	OnTouch:
	donpcevent("timestopper#assassinq::OnDisable");
	donpcevent("Thomas#assassinq::OnDisable");
	mes "[Barcardi]";
	mes "Oh Parab�ns!";
	mes "Voc� pode agora avan�ar para a sala do nosso Lider!";
	mes "Boa sorte!";
	close2;
	assassinq = 5;
	changequest(8004,8005);
	warp(strnpcinfo(NPC_MAP),181,183);
	end;
}

in_moc_16,182,169,0	script	#maze_assassinq	WARPNPC,1,1,{
	OnTouch:
	if (assassinq == 5 || assassinq == 6) {
		warp(strnpcinfo(NPC_MAP),181,183);
		++assassinq;
		changequest(8005,8006);
	} else {
		savepoint(strnpcinfo(NPC_MAP),181,183);
		//donpcevent("Lider dos Mercen�rios#assassinq::OnCast");
		warp(strnpcinfo(NPC_MAP),167,113);
		end;
	}
}

/*
in_moc_16,167,110,0	script	Lider dos Mercen�rios#assassinq	FAKE_NPC,3,1,{
	OnTouch:
	savepoint(strnpcinfo(NPC_MAP),167,110);
	mes "[Lider dos Mercen�rios]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+".";
	mes "Este minha sala, o lugar mais profundo do cl� mercen�rio.";
	next;
	mes "[Lider dos Mercen�rios]";
	mes "Vou dar-lhe um teste simples.";
	mes "Por favor, encontre o seu caminho atrav�s desse labirinto invis�vel e chegue at� mim.";
	mes "� esse labirinto que protege a nossa alian�a de intrusos...";
	next;
	mes "[Lider dos Mercen�rios]";
	mes "Estou ansioso para conhec�-lo no final do labirinto.";
	close;

	OnCast:
	mapannounce strnpcinfo(NPC_MAP),"Pr�ximo volunt�rio, por favor entre.",bc_map;
	end;
}
*/

in_moc_16,149,80,4	script	Lider dos Mercen�rios#assassinq_2	1_M_MOC_LORD,1,1,{
	end;
	OnTouch:
	//savepoint("morocc",100,100);
	if (assassinq == 7 && BaseJob == Job_Thief) {
		assassinq = 8;
		mes "[Lider dos Mercen�rios]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+".";
		mes "Eu pe�o desculpas por fazer voc� ir atrav�s do labirinto.";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Eu vi o seu curr�culo apenas agora voc� � bem "+(Sex == SEX_MALE ? "conhecido como um gaturno" : "conhecida como uma gaturna")+" de coragem.";
		mes "Raramente recebemos potenciais mercen�rios de sua estatura...";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Posso fazer-lhe algumas perguntas, se voc� n�o se importa.";
		mes "N�o precisa de nervozismo, j� passou em nossos testes.";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Primeiro, o que voc� quis se tornar mercen�rio?";
		next;
		switch (select("Ter mais poder","Por orgulho","Pr�tica sem fim.")) {
			case 1:
			mes "[Lider dos Mercen�rios]";
			mes "Mais poder...";
			mes "Sim, voc� pode pensar mercen�rios tanto mais fortes do que os gaturnos.";
			next;
			mes "[Lider dos Mercen�rios]";
			mes "No entanto, para que raz�o voc� desejar mais poder?";
			mes "Para mostrar vingan�a pessoal?";
			mes "Para que finalidade voc� vai usar esse poder?";
			next;
			switch (select("Por vingan�a","Por dinheiro","Eu quero viajar.")) {
				case 1:
				assassinq = 8;
				mes "[Lider dos Mercen�rios]";
				mes "Vingan�a...";
				mes "Sim, eu entendo.";
				mes "Todos n�s guardamos rancor contra algu�m, eventualmente.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "No entanto, tenha em mente que n�o devemos ser abalados emocionalmente.";
				mes "Efetue os seus deveres sem d�vida, que � o nosso caminho...";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Sendo um mercen�rio deve abandonar o ego.";
				next;
				break;
				case 2:
				assassinq = 9;
				mes "[Lider dos Mercen�rios]";
				mes "Raz�es financeiras...";
				mes "Eu n�o vou negar que todos n�s precisamos de dinheiro para viver.";
				mes "Mas ser mercen�rio significa viver com um prop�sito mais elevado..";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Sendo um mercen�rio deve abandonar tais desejos mundanos...";
				next;
				break;
				case 3:
				assassinq = 10;
				mes "[Lider dos Mercen�rios]";
				mes "Boa ideia Viajando ao redor do mundo v�o permitir que voc� ampliar suas experi�ncias.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "A maioria de n�s tendem a evitar reunir em grupos.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "De certa forma, sendo um mercen�rio � viver a vida na solid�o...";
				next;
				break;
			}
			break;
			case 2:
			mes "[Lider dos Mercen�rios]";
			mes "Orgulho de um mercen�rio ...";
			next;
			mes "[Lider dos Mercen�rios]";
			mes "O orgulho � certamente importante, mas o orgulho n�o vale nada se voc� n�o tem nenhuma habilidade.";
			next;
			mes "[Lider dos Mercen�rios]";
			mes "A maioria dos mercen�rios que conheci antes de mim s�o os irm�os que compartilharam muitos momentos dif�ceis juntos.";
			next;
			mes "[Lider dos Mercen�rios]";
			mes "Eu posso entender por que seu orgulho e dignidade seria t�o importante para eles agora.";
			mes "Por que raz�o voc� deseja se tornar mercen�rio?";
			next;
			switch (select("Eu gosto da solid�o","Fazer riquesas","Por apar�ncia.")) {
				case 1:
				assassinq = 11;
				mes "[Lider dos Mercen�rios]";
				mes "Voc� chegou no ponto...";
				mes "Estamos s� e sempre estaremos sozinhos....";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "De certa forma, ser um mercen�rio igual nada, eu diria.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Mas, como eu disse antes.";
				mes "Eu recomendo ter pelo menos um companheiro para lhe ajudar de vez em quando...";
				next;
				break;
				case 2:
				assassinq = 12;
				mes "[Lider dos Mercen�rios]";
				mes "Bem, eu n�o posso negar isso, precisamos de dinheiro para ganhar a vida.";
				mes "Mas voc� n�o acha que devemos buscar algo ainda mais importante do que o dinheiro?";
				next;
				break;
				case 3:
				assassinq = 13;
				mes "[Lider dos Mercen�rios]";
				mes "Estilo e apar�ncia � apenas superficial.";
				mes "� triste que muitas pessoas pensam dessa maneira....";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Esses mercen�rios vergonhosas que perderam seu verdadeiro foco s�o tratados na nossa pr�pria maneira...";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "N�o se esque�a ...";
				mes "N�s n�o estamos em um desfile de moda, e nunca estaremos...";
				next;
				break;
			}
			break;
			case 3:
			mes "[Lider dos Mercen�rios]";
			mes "Pr�tica sem fim...";
			mes "Eu acho que voc� tem que fazer Existe uma raz�o que voc� quer ser um mercen�rio.?";
			next;
			mes "[Lider dos Mercen�rios]";
			mes "Ao contr�rio da classe Gaturno, a classe Mercen�rio n�o permite a auto-indulg�ncia.";
			mes "Diga-me a motivo voc� treinar sem parar.";
			next;
			switch (select("Ampliar meus Habilidades","� um objetivo meu","Ser forte")) {
				case 1:
				assassinq = 14;
				mes "[Lider dos Mercen�rios]";
				mes "Habilidades de aprendizagem vem naturalmente com o trabalho duro.";
				mes "Mas n�o acho que de habilidades como o melhor valor de seu treinamento...";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Voc� n�o ficar� satisfeito em se tornar um mercen�rio, se voc� acha que isso...";
				next;
				break;
				case 2:
				assassinq = 15;
				mes "[Lider dos Mercen�rios]";
				mes "� um objetivo seu?";
				mes "Bem, acho que voc� tem que ter objetivos...";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "H� muito tempo atr�s, eu conheci algu�m em miss�o que teria que mantar-lo.";
				mes "Antes de se tornar um Cavaleiro de n�vel 54.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "� a m� eu tive que mat�-lo antes quando era de n�vel 52 ...";
				mes "^666666*Sigh*^000000";
				mes "Oh bem.";
				next;
				mes "Estou um pouco preocupado com voc�.";
				mes "Eu espero que voc� perceba que quando voc� se tornar um mercen�rio, n�o h� como voltar atr�s...";
				next;
				break;
				case 3:
				assassinq = 16;
				mes "[Lider dos Mercen�rios]";
				mes "Boa ideia ...";
				mes "Essa � uma boa maneira de melhorar a si mesmo eu vi muitas pessoas que sabem como ser forte fisicamente.";
				mes "Mas n�o em seu estado mental.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Eu espero que voc� n�o � um hip�crita disciplina espiritual � a melhor maneira para voc� para sobreviver...";
				next;
				break;
			}
			break;
		}
		mes "[Lider dos Mercen�rios]";
		mes "Infelizmente, existem alguns sem ju�zo que est�o ansiosos para ser mercen�rio, mesmo n�o sabendo nada...";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Eles causam problemas e nos trazem desgra�a.";
		mes "Suas atividades muitas vezes resultam em situa��es horr�veis..";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Tenha cuidado para n�o se tornar um deles quando voc� se tornar um mercen�rio.";
		mes "A responsabilidade recai exclusivamente sobre seus ombros...";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Ent�o, se voc� pode se tornar um mercen�rio agora, qual � a primeira coisa que voc� faria?";
		next;
		switch (select("Eu iria deireto ca�ar","Existe algu�m me esperando","Aprender mais sobre os Mercen�rios.")) {
			case 1:
			mes "[Lider dos Mercen�rios]";
			mes "Ca�ar...";
			mes "Isso � tudo...?";
			next;
			switch (select("Gostaria de subir de n�vel r�pido","Explorar minhas habilidades","Ir a novos lugares.")) {
				case 1:
				.@assassin_sangdam += 10;
				mes "[Lider dos Mercen�rios]";
				mes "N�o fa�a dessa forma, � imprudente ...";
				mes "Ser um mercen�rio nunca faz de voc� uma pessoa diferente e n�o confiar na sorte..";
				next;
				break;
				case 2:
				.@assassin_sangdam += 5;
				mes "[Lider dos Mercen�rios]";
				mes "� bom conhecer a si mesmo eu posso entender que voc� vai ser animar com a grande mudan�a em sua capacidade.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Entretanto, eu espero que voc� n�o vai esquecer a mentalidade mercen�rio.";
				next;
				break;
				case 3:
				mes "[Lider dos Mercen�rios]";
				mes "Muito bem ...";
				mes "Explorando lugares que voc� nunca viu antes.";
				mes "Mas sei que ser um mercen�rio nunca faz de voc� uma pessoa diferente.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "N�o se esforce demais.";
				mes "Tome seu tempo e viajar com sabedoria.";
				next;
				break;
			}
			break;
			case 2:
			mes "[Lider dos Mercen�rios]";
			mes "Quem est� esperando?";
			next;
			switch (select("Meus amigos","Meu Cl�","Uma pessoa amada.")) {
				case 1:
				.@assassin_sangdam += 5;
				mes "[Lider dos Mercen�rios]";
				mes "Eu vejo ...";
				mes "Aprecio as pessoas que se preocupam com voc�, mesmo quando voc� esteja sozinho.";
				next;
				break;
				case 2:
				.@assassin_sangdam += 5;
				mes "[Lider dos Mercen�rios]";
				mes "Grande...";
				mes "Camaradas por quem voc� morreria para...";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Como um mercen�rio, encontrar um trabalho que voc� pode fazer por eles sem que eles soubessem..";
				next;
				break;
				case 3:
				mes "[Lider dos Mercen�rios]";
				mes "Haha, as necessidades do corpo s�o, por vezes, dif�cil de ignorar.";
				mes "� melhor aceitar que isso � parte da natureza humana..";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Mas voc� nunca deve revelar-lhe o lado mercen�rio de sua vida.";
				mes "N�o importa o que � preciso..";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Ame o seu amado para sempre, mesmo que voc� n�o pode expressar abertamente.";
				mes "�s vezes, a vida n�o permite que voc� para encontrar o amor verdadeiro mais do que uma vez..";
				next;
				break;
			}
			break;
			case 3:
			mes "[Lider dos Mercen�rios]";
			mes "Admir�vel sua atitude.";
			mes "Existe algo que gostaria de me perguntar?";
			next;
			switch (select("Lugares para subir de Level?","Objetivos do Mercen�rio?","Onde Ganhar dinheiro?")) {
				case 1:
				.@assassin_sangdam += 5;
				mes "[Lider dos Mercen�rios]";
				mes "Tudo depende de sua mente.";
				mes "Qualquer lugar pode ser o melhor para o n�vel m�ximo de acordo com seu estado de esp�rito..";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Voc� deve saber sobreviver em qualquer situa��o.";
				next;
				break;
				case 2:
				mes "[Lider dos Mercen�rios]";
				mes "H� muitos mercen�rios l� fora.";
				mes "Olhe para eles como seus treinadores, e pedir suas opini�es.";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "Eu espero que voc� se torne um excelente mercen�rio e quando voc� alcan�a um certo n�vel.";
				mes "Voc� deve guiar novatos como seus conhecimentos..";
				next;
				break;
				case 3:
				.@assassin_sangdam += 10;
				mes "[Lider dos Mercen�rios]";
				mes "Oh meu senhor ...";
				mes "Voc� est� planejando se tornar um mercen�rio, a fim de ganhar dinheiro?";
				next;
				mes "[Lider dos Mercen�rios]";
				mes "As pessoas dessa natureza n�o s�o bem-vindas.";
				mes "Se tal � o seu objetivo, voc� pode querer reconsiderar o sua classe....";
				next;
				break;
			}
			break;
		}
		mes "[Lider dos Mercen�rios]";
		mes "Foi bom conhec�-lo.";
		mes "Voc� me fez lembrar dos bons e velhos tempos.";
		next;
		if (!.@assassinqNpc) {
			.@assassinqNpc = 1;
			mes "[Lider dos Mercen�rios]";
			mes "Por favor, d�-me um segundo...";
			next;
			mapannounce(strnpcinfo(NPC_MAP),"Aqueles envolvidos com o teste, por favor, venham at� aqui.",bc_map);
			next;
			mes "[Lider dos Mercen�rios]";
			mes "Eles v�o chegar aqui em breve.";
			next;
			enablenpc("[Huey]");
			enablenpc("[Khai]");
			enablenpc("[O An�nimo]");
			enablenpc("[Barcardi]");
			enablenpc("[Beholder]");
			enablenpc("[Thomas]");
			enablenpc("[Gayle Maroubitz]");
		}
		mes "[O An�nimo]";
		mes "Estou aqui.";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Gostaria de ouvir a sua opini�o sobre "+strcharinfo(PC_NAME)+" sobre o teste de mudan�a de classe.";
		next;
		mes "[O An�nimo]";
		mes "Ah sim ...";
		mes "Eu acho "+strcharinfo(PC_NAME)+" que tem potencial.";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Bem ...";
		mes "O An�nimo apoia-o.";
		mes "E voc�, Huey?";
		next;
		if (assassinq3 == 1) {
			mes "[Huey]";
			mes "Uma raridade.";
			mes "Voc� pode dizer com o trabalho que teve.";
			next;
			mes "[Huey]";
			mes "Eu concordo com o senhor An�nimo.";
		} else {
			mes "[Huey]";
			mes "Apesar "+strcharinfo(PC_NAME)+" parece muito suave e gentil, como uma esp�cie de gatinho.";
			mes strcharinfo(PC_NAME)+" tem o requisitos.";
			next;
			mes "[Huey]";
			mes "Se est� tudo bem com voc�, eu gostaria de voltar para o meu trabalho.";
			next;
			mes "[Lider dos Mercen�rios]";
			mes "Sim ...";
			mes "Isso � tudo, Huey.";
		}
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Ent�o ...";
		mes "Beholder, o qual � a sua opini�o?";
		next;
		if (.@assassinqNpc) {
			.@assassinqNpc = 0;
			disablenpc("[Huey]");
			disablenpc("[Khai]");
			disablenpc("[O An�nimo]");
			disablenpc("[Barcardi]");
			disablenpc("[Beholder]");
			disablenpc("[Thomas]");
			disablenpc("[Gayle Maroubitz]");
			close2;
		}
		mes "[Beholder]";
		mes "Bem, eu n�o gosto da pontua��o � claro...";
		mes "Mas, de alguma forma, passou em todos os testes.";
		mes "Para mim tudo bem.";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Hmm ...";
		mes "Parece que estamos todos de acordo com as qualifica��es de "+strcharinfo(PC_NAME)+"...";
		next;
		switch (assassinq) {
			case 8:
			mes "[Lider dos Mercen�rios]";
			mes "Mesmo que voc� est� impulsionado por vingan�a pessoal.";
			mes "Espero que ele vai embora como voc� treinar...";
			next;
			break;
			case 9:
			mes "[Lider dos Mercen�rios]";
			mes "Mesmo que a sua principal preocupa��o, por enquanto est� sendo um rico.";
			mes "Tenho certeza que voc� vai buscar algo ainda maior...";
			next;
			break;
			case 10:
			mes "[Lider dos Mercen�rios]";
			mes "Ansioso para viajar por todo o mundo.";
			mes "Espero que sua verdadeira identidade � encontrado em suas viagens...";
			next;
			break;
			case 11:
			mes "[Lider dos Mercen�rios]";
			mes "Voc� parece saber muito sobre mercen�rios";
			mes "Eu n�o acho que a frustra��o de ser s� vai ser dif�cil para voc�....";
			next;
			break;
			case 12:
			mes "[Lider dos Mercen�rios]";
			mes "Voc� tem uma idiotice sobre o dinheiro.";
			mes "Mas eu acredito que voc� deve ser capaz de super�-lo.";
			next;
			mes "[Lider dos Mercen�rios]";
			mes "Embora eu n�o confio em voc�, por agora, vou lhe dar uma chance ...";
			next;
			break;
			case 13:
			mes "[Lider dos Mercen�rios]";
			mes "Mesmo que voc� est� encantado em ser um mercen�rio superficialmente.";
			mes "Acredito que voc� vai perceber o valor real do mercen�rio, mais cedo ou mais tarde.";
			next;
			break;
			case 14:
			mes "[Lider dos Mercen�rios]";
			mes "Uma das raras pessoas que procura melhores habilidades.";
			mes "Espero que voc� vai perceber a import�ncia da disciplina espiritual, mais cedo ou mais tarde.";
			next;
			break;
			case 15:
			mes "[Lider dos Mercen�rios]";
			mes "Antes que perceba, voc� vai encontrar um novo objectivo para o qual voc� pode se dedicar a si mesmo...";
			next;
			break;
			case 16:
			mes "[Lider dos Mercen�rios]";
			mes "Eu sei que algumas pessoas se preocupam apenas com seu treinamento f�sico.";
			mes "Mas, acredito que voc� se destacar entre eles ...";
			next;
		}
		if (assassinq3 == 1 && BaseJob == Job_Thief && assassinq > 6 && assassinq < 17) {
			assassinq = 17;
			assassinq3 = 2;
			mes "[Lider dos Mercen�rios]";
			mes "Bem, eu falei demais.";
			mes "Por favor, escolha uma arma como um presente.";
			next;
			mes "[Lider dos Mercen�rios]";
			mes "Voc� pode escolher um Jur, Katar, Main Gauche, ou um Gladius.";
			mes "Como um mestre, eu amo todos eles..";
			next;
			switch (select("Jur","Katar","Main Gauche","Gladius")) {
				case 1:
				mes "[Lider dos Mercen�rios]";
				mes "Um Jur...";
				mes "Boa escolha.";
				getitem(Jur_,1);
				break;
				case 2:
				mes "[Lider dos Mercen�rios]";
				mes "Um Katar...";
				mes "Aqui est�.";
				mes "Embora ele � usado, mas sei que ir� atende-lo bem.";
				getitem(Katar_,1);
				break;
				case 3:
				mes "[Lider dos Mercen�rios]";
				mes "Vejo Voc� quer usar as duas m�os.";
				mes "Aqui, tome a sua Main Gauche...";
				getitem(Main_Gauche_,1);
				break;
				case 4:
				mes "[Lider dos Mercen�rios]";
				mes "O Gladius ...";
				mes "Ele � utilizado para governar o mercado de arma mercen�rio.";
				mes "Por favor, cuide bem dele...";
				getitem(Gladius_,1);
			}
			next;
		} else {
			assassinq = 17;
			mes "[Lider dos Mercen�rios]";
			mes "Bem, eu falei demais.";
			mes "Por favor, tome isso primeiro.";
			next;
			switch (rand(1,5)) {
				case 1:
				getitem(Main_Gauche,1);
				break;
				case 2:
				getitem(Jur,1);
				break;
				case 3:
				getitem(Stiletto,1);
				break;
				case 4:
				getitem(Knife,1);
				break;
				case 5:
				getitem(Katar,1);
			}
		}
		mes "[Lider dos Mercen�rios]";
		mes "Bem, eu estou dando-lhe um sinal.";
		mes "Por favor, retorne ao mercen�rio na entrada da guilda, o de apar�ncia feroz \"Huey\".";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Ao receber este sinal, Huey vai promov�-lo a um mercen�rio.";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Voc�, "+strcharinfo(PC_NAME)+", optou por viver como um mercen�rio.";
		mes "Que possa aprender com nossos caminhos, e ser um exemplo honra para os outros";
		savepoint("morocc",100,100);
		getitem(Frozen_Heart,1);
		changequest(8006,8007);
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Ok, todos voc�s podem voltar para suas posi��es, que eu vou enviar "+strcharinfo(PC_NAME)+" para a entrada....";
		if (.@assassinqNpc) {
			.@assassinqNpc = 0;
			disablenpc("[Huey]");
			disablenpc("[Khai]");
			disablenpc("[O An�nimo]");
			disablenpc("[Barcardi]");
			disablenpc("[Beholder]");
			disablenpc("[Thomas]");
			disablenpc("[Gayle Maroubitz]");
			close2;
		}
		mes "[Lider dos Mercen�rios]";
		mes strcharinfo(PC_NAME)+" leve esse ^006699Colar Oblivion^000000 para o Huey na entrada da guilda.";
		mes "Ele cuidar� do resto.";
		next;
		warp(strnpcinfo(NPC_MAP),17,19);
		end;
	} else if (assassinq == 17) {
		mes "[Lider dos Mercen�rios]";
		mes "Umm ...";
		mes "Como � que voc� ainda est� aqui...?";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Voc� j� terminou o seus testes, leve o ^006699Colar Oblivion^000000 para o Huey, assim voc� poder� mudar sua classe.";
		close2;
		warp(strnpcinfo(NPC_MAP),17,19);
		end;
	} else if (assassinq > 7 && assassinq < 17) {
		assassinq = 7;
		mes "[Lider dos Mercen�rios]";
		mes "Porque voc� pressionou \"Cancelar\" durante o processo.";
		mes "Quer mudar o sua classe ou o qu�?";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "^666666*Sigh...*^000000";
		mes "Ok, vamos come�ar de novo.";
		mes "Se voc� n�o me ouvir este tempo, n�o vai sair desta sala vivo.";
		mes "Entendeu...?";
		close;
	} else {
		mes "[Lider dos Mercen�rios]";
		mes "Umm ...";
		mes "Como � que voc� ainda est� aqui...?";
		next;
		mes "[Lider dos Mercen�rios]";
		mes "Voc� j� terminou o seus testes, leve o ^006699Colar Oblivion^000000 para o Huey, assim voc� poder� mudar sua classe.";
		close2;
		warp(strnpcinfo(NPC_MAP),17,19);
		end;
	}
}

in_moc_16,186,81,1	script	Assistente do Mestre#assassinq	1_M_JOBTESTER,1,1,{
	mes "[Assistente Markovitz]";
	mes "Desculpe, mas eu n�o estou no comando de mudan�as de classe.";
	mes "V� falar com nosso lider.";
	close;
}


-	script	#moc_assin_dup	FAKE_NPC,{
	end;
	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}
in_moc_16,156,87,1	duplicate(#moc_assin_dup)	[Huey]	1_M_JOBTESTER
in_moc_16,156,85,1	duplicate(#moc_assin_dup)	[Khai]	4_M_JOB_ASSASSIN
in_moc_16,156,83,1	duplicate(#moc_assin_dup)	[O An�nimo]	1_M_MOC_LORD
in_moc_16,156,81,2	duplicate(#moc_assin_dup)	[Barcardi]	4_F_JOB_ASSASSIN
in_moc_16,156,79,1	duplicate(#moc_assin_dup)	[Beholder]	2_M_THIEFMASTER
in_moc_16,156,77,1	duplicate(#moc_assin_dup)	[Thomas]	2_M_THIEFMASTER
in_moc_16,156,75,1	duplicate(#moc_assin_dup)	[Gayle Maroubitz]	1_M_JOBTESTER
