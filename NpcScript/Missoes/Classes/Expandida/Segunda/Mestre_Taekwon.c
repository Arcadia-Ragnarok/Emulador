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
| - Info: Quest de Mudan�a de Classe para Mestre-Taekwon.           |
\*-----------------------------------------------------------------*/

payon,215,102,3	script	Moohyun#sgladiatorq	4_M_ROGUE,{
	if (Class == Job_Taekwon) {
		if (!sgladiatorq) {
			mes "[Moohyun]";
			mes "Ei "+(Sex == SEX_MALE ? "Garoto":"Garota")+" Taekwon!";
			mes "Venha aqui por um minuto.";
			mes "Eu tenho uma proposta para voc� se voc� ouvir!";
			next;
			if (select("Claro","N�o, obrigado!") == 1) {
				mes "[Moohyun]";
				mes "Tudo bem, crian�a qual � o seu nome?";
				next;
				mes strcharinfo(PC_NAME)+".";
				next;
				mes "[Moohyun]";
				mes "Voc� � t�o diret"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Um pouco de calor, ou um pouco amizade n�o mataria voc�, ou mataria?";
				mes "De qualquer forma, voc� j� pensou no que vai ser?";
				next;
				mes "[Moohyun]";
				mes "Se o seu cora��o ainda n�o est� definido sobre isso.";
				mes "Por que voc� n�o se torna um ^4d4dffguerreiro do Sol, da Lua, e das Estrelas^000000?";
				mes "Pense nisso.";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Guerreiro do que...?";
				mes "Nunca ouvi falar disso.";
				mes "Mas eu sei que posso alterar minha classe para Espiritualista ou Mestre-Taekwon.";
				next;
				mes "[Moohyun]";
				mes "Sim. Sim, est� certo.";
				mes "Mestres Taekwon s�o guerreiros do Sol, da Lua e das Estrelas que recebe o poder do cosmos!";
				mes "De qualquer forma, interessaria em mudar para Classe Mestre-Taekwon?";
				next;
				if (select("Sim, Claro!","N�o, nem tanto") == 1) {
					if (JobLevel > 39) {
						mes "[Moohyun]";
						mes "�timo, �timo.";
						mes "Eu sabia que voc� iria ver as coisas do meu jeito.";
						mes "Tudo bem voc� parece estar pront"+(Sex == SEX_MALE ? "o":"a")+" o suficiente.";
						mes "Tudo o que voc� precisa agora � de algu�m.";
						mes "Que possa trein�-l"+(Sex == SEX_MALE ? "o":"a")+" para Mestre Taekwon.";
						next;
						mes "[Moohyun]";
						mes "Ent�o vou apresent�-l"+(Sex == SEX_MALE ? "o":"a")+" para algu�m que possa realizar ess objetivo.";
						next;
						if (select("Sim, como fa�o?","N�o, deixe-me pensar mais...") == 1) {
							mes "[Moohyun]";
							mes "Excelente!";
							mes "Agora, como voc� j� pode ter adivinhado.";
							mes "N�o estou respons�vel por essa tarefa oficialmente.";
							next;
							mes "[Moohyun]";
							mes "Ent�o a quem voc� deve ir agora...?";
							mes "Ah, voc� deve visitar ^4d4dffMoogang^000000.";
							mes "Ele � um dos poucos Mestre-Taekwon Mestres interessados em receber novos alunos.";
							mes "Ent�o ele com certeza ir� cuidar do seu treinamento.";
							next;
							mes "[Moohyun]";
							mes "Tudo bem, voc� pode encontrar Moogang em Comodo.";
							mes "Supostamente no lugar mais pr�ximo do c�u.";
							mes "Enquanto isso, vou escrever um carta de recomenda��o que estou te enviando para ele.";
							sgladiatorq = 1;
							setquest (7007);
							close;
						}
						mes "[Moohyun]";
						mes "Est� bem.";
						mes "Mudar sua classe � uma decis�o importante.";
						mes "Que deve ser pensada com muito cuidado.";
						mes "Mas asseguro que voc� nunca se arrepender� de se tornar um maravilhoso guerreiro do cosmos!";
						close;
					}
					mes "[Moohyun]";
					mes "�timo, �timo";
					mes "Mas primeiro, voc� tem que ser pelo menos N�vel de Classe 40.";
					mes "Antes que voc� possa come�ar o treinamento para Mestre-Taekwon.";
					next;
					mes "[Moohyun]";
					mes "Eu sei que voc� pode atingir esse N�vel rapidamente.";
					mes "Prometa-me voc� voltar� para que eu possa lhe ajudar a se tornar um grande Mestre Taekwon";
					close;
				}
				mes "[Moohyun]";
				mes "Realmente?";
				mes "Bem, eu ainda acho que voc� � mais adequado para ser um Mestre Taekwon do que outra Classe.";
				mes "Mas a decis�o � sua.";
				next;
				mes "[Moohyun]";
				mes "Bem, se voc� mudar de ideia.";
				mes "ent�o, apenas volte para e me avise.";
				mes "Eu sei que voc� seria um grande Mestre-Taekwon.";
				close;
			}
			mes "[Moohyun]";
			mes "Ah, n�o seja assim.";
			mes "N�o lhe custa nada em ouvir o que tenho a dizer.";
			mes "Apenas ou�a....";
			close;
		} else if (sgladiatorq == 1) {
			mes "[Moohyun]";
			mes "J� enviei a carta de recomenda��o para voc�.";
			mes "Ent�o v� em frente e encontre Moogang em Comodo.";
			mes "Ele come�ar� a treinar voc� para tornar-se um Mestre Taekwon";
			close;
		} else if (sgladiatorq == 7) {
			mes "[Moohyun]";
			mes "Ent�o, como foi no teste?";
			mes "Algum tipo de problema?";
			next;
			if (select("N�o, estou bem.", "Sobre o enigma de Beeryu...") == 1) {
				mes "[Moohyun]";
				mes "Ser independente";
				mes "e resolver problemas por conta pr�pria sempre � a melhor sa�da.";
				mes "Mas voc� pode pedir ajuda quando realmente precisar.";
				mes "N�o � uma vergonha em ser incapaz de realizar algo sozinho...";
				close;
			}
			mes "[Moohyun]";
			mes "Ah, isso.";
			mes "Beeryu deu-lhe um enigma para resolver.";
			mes "Bem, primeiro de tudo, n�o te daria algo como aquilo se realmente n�o fosse importante.";
			mes "Mas vejo que n�o � um objeto material.";
			next;
			mes "[Moohyun]";
			mes "Voc� deve demonstrar algo para ele.";
			mes "Agora diga.";
			mes "Quando voc� enfrenta dificuldades na vida, obst�culos para seus objetivos como voc� reage?";
			mes "O que seu cora��o realmente sente?";
			next;
			mes "[Moohyun]";
			mes "Eu sei que Beeryu perguntou para provar sua paci�ncia para ele.";
			mes "Mas este � o mais importante fator atr�s da paci�ncia.";
			mes "O que voc� se diz quando sua vida parece desesperada?";
			next;
			if (select("Eu n�o vou desistir!","Eu... Eu n�o sei?") == 1) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Eu n�o vou desistir!";
				mes "Vou fazer meus sonhos se tornar realidade.";
				mes "N�o importa quanto tempo demora!";
				next;
				mes "[Moohyun]";
				mes "Sim, � isso!";
				mes "Quando sua resolu��o � apoiado por uma vontade maior.";
				mes "Voc� ter� paci�ncia para enfrentar todas as coisas.";
				next;
				mes "[Moohyun]";
				mes "�timo, eu acho que voc� � pront"+(Sex == SEX_MALE ? "o":"a")+" agora.";
				mes "Por favor, v� falar com Moogang e pe�a para voltar a sala da lua.";
				mes "Em breve talvez possamos cumprimentar um ao outro como Mestes Taekwon!";
				sgladiatorq = 8;
				close;
			}
			mes "[Moohyun]";
			mes "Voc�...";
			mes "Voc� n�o sabe?";
			mes "Se voc� enfrentasse obst�culos de cabe�a.";
			mes "E confrontar diretamente seus medos.";
			mes "Seus inimigos e todos os desafios da vida, ent�o a resposta deve vir naturalmente.";
			next;
			mes "[Moohyun]";
			mes "Hmm...";
			mes "Por que voc� n�o contempla o valor da coragem um pouco?";
			mes "Sim, pode ser �til por enquanto.";
			close;
		} else if (sgladiatorq == 8) {
			mes "[Moohyun]";
			mes "�timo, eu acho que voc� � pront"+(Sex == SEX_MALE ? "o":"a")+" agora.";
			mes "Por favor, v� falar com Moogang e pe�a para voltar a sala da lua.";
			mes "Em breve talvez possamos cumprimentar um ao outro como Mestes Taekwon!";
			close;
		}
		mes "[Moohyun]";
		mes "Ent�o, como voc� passado?";
		mes "Eu tenho f� que voc� que se tornar� um grande Mestre-Taekwon.";
		mes "Esperarei not�cias.";
		close;
	} else if (BaseJob == Job_Star_Gladiator) {
		mes "[Moohyun]";
		mes "Ei, como voc� tem passado?";
		mes "Comtemplando a natureza e tudo que nela existe?";
		mes "Heh heh, o cosmos n�o � uma coisa maravilhosa?";
		close;
	}
	mes "[Moohyun]";
	mes "O quer?";
	if (Sex == SEX_MALE) {
		mes "Voc� quer se juntar a minha escola de artes marciais?";
		mes "� muito tarde para voc�, sinto muito amigo.";
	} else {
		mes "Oh, eu n�o percebi que...";
		mes "Voc� era um dama t�o bela!";
	}
	next;
	mes "[Moohyun]";
	mes "De qualquer forma, se voc� acha que sou apenas um punk.";
	mes "Mas, na verdade, sou um guerreiro do Sol, da Lua e das Estrelas";
	next;
	mes "[Moohyun]";
	mes "Pode ser um pouco atrasado para voc�.";
	mes "Mas se voc� sabe de algu�m um que queira se tornar um Mestre de Taekwon.";
	mes "Fale com ele sobre mim.";
	close;
}

// ------------------------------------------------------------------
comodo,172,230,3	script	Meste Andarilho#sgladiatorq	4_M_JOB_ASSASSIN,{
	if (Class == Job_Taekwon) {
		if (sgladiatorq == 1) {
			mes "[Moogang]";
			mes "Voc� deve ser "+strcharinfo(PC_NAME)+"...";
			mes "Eu tenho esperado voc�.";
			mes "Moohyun me falou sobre seu desejo para se tornar Mestre Taekwon";
			mes "Confiarei em seu julgamento...";
			next;
			mes "[Moogang]";
			mes "Sim, Moohyun � especialista em distinguir os pontos fortes dos outros.";
			mes "Voc� deve fazer bem.";
			mes "Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para o primeiro teste.";
			mes "Para usar seus punhos e pernas a servi�o do grande cosmos?";
			next;
			if (select("Sim, come�emos o teste!","N�o, preciso mais nisso!") == 1) {
				mes "[Moogang]";
				mes "O Taekwon Do define o b�sico.";
				mes "Mente, corpo, alma.";
				mes "Estes n�o s�o partes separadas, mas um todo funcionando.";
				next;
				mes "[Moogang]";
				mes "Feche os olhos.";
				mes "Procure sentir o vento";
				mes "Abra seus bra�os e abrace o c�u.";
				mes "Voc� consegue sentir?";
				mes "Sentr o fluxo do cosmos?";
				next;
				mes "[Moogang]";
				mes "As leis da natureza n�o podem ser quebradas.";
				mes "Mas � medida que a sua natureza cresce.";
				mes "Voc� poder� entender a luz solar, segurar a luz da lua e moldar a luz das estrelas.";
				mes "Este teste para ajudar-l"+(Sex == SEX_MALE ? "o":"a")+" a se sintonizar...";
				next;
				mes "[Moogang]";
				mes "V� e colecione o poder da natureza dispersa ao redor do mundo.";
				mes "Traga-me peda�os do vento agitado, terra s�lida, congelante de gelo e do fogo ardente.";
				next;
				mes "[Moogang]";
				mes "Traga-me...";
				mes "^4d4dff1 Vento Bruto^000000.";
				mes "^4d4dff1 Natureza Grandiosa^000000.";
				mes "^4d4dff1 Gelo M�stico^000000.";
				mes "^4d4dff1 Cora��o Flamejante^000000.";
				sgladiatorq = 2;
				changequest (7007,7008);
				close;
			}
			mes "[Moogang]";
			mes "Eu respeito sua decis�o embora n�o vejo raz�o para voc� hesitar.";
			mes "Mas como as fases da lua.";
			mes "Tudas altera��es devem ocorrer de acordo com ao grande esquema das coisas.";
			close;
		}
		else if (sgladiatorq == 2) {
			if (countitem(Rough_Wind) && countitem(Great_Nature) && countitem(Mistic_Frozen) && countitem(Flame_Heart)) {
				mes "[Moogang]";
				mes "Ah, voc� completou a tarefa que eu confiei para voc�.";
				mes "Muito bom.";
				mes "Agora, enquanto juntava estes fragmentos do vento, da terra, do gelo e da chama.";
				mes "Voc� sentiu o liga��o entre eles?";
				next;
				mes "[Moogang]";
				mes "Os ventos s�o gentis e brisas reconfortantes ou furac�es destrutivos.";
				mes "Terra � o terreno s�lido em que toda vida vive, mas tamb�m pode afundar e agitar edif�cios.";
				next;
				mes "[Moogang]";
				mes "A �gua d� vida e fornece refrigera��o refrescante, mas pode tamb�m pode afogar e congelam a vida.";
				mes "O fogo pode trazer um calor reconfortante, mas tamb�m pode reduzir a vida em cinzas.";
				mes "Tal assim � a natureza.";
				next;
				mes "[Moogang]";
				mes "Este � o poder da natureza.";
				mes "Qualquer for�a pode ser usada para fazer o bem ou mal.";
				mes "Dependendo de como voc� exerce isso.";
				mes "Ent�o pode entender agora?";
				mes "� assim que o universo est� entrela�ado.";
				next;
				mes "[Moogang]";
				mes "No entanto, o mais primordial.";
				mes "Os elementos mais puros do nosso universo s�o equiparados ao cosmos:";
				mes "O sol, a lua e as estrelas.";
				mes "Contemple sobre esta verdade por um tempo...";
				next;
				mes "[Moogang]";
				mes "Com a realiza��o de a natureza do universo vem o respeito por todas as coisas.";
				mes "Agora, quando voc� estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para o pr�ximo.";
				mes "Guiarei ent�o seu caminho.";
				delitem (Rough_Wind,1);
				delitem (Great_Nature,1);
				delitem (Mistic_Frozen,1);
				delitem (Flame_Heart,1);
				sgladiatorq = 3;
				changequest (7008,7009);
				close;
			}
			mes "[Moogang]";
			mes "Para o seu primeiro teste.";
			mes "Me traga fragmentos dos elementos naturais";
			mes "Quero que voc� entenda sua harmonia inata um com o outro";
			next;
			mes "[Moogang]";
			mes "Traga-me...";
			mes "^4d4dff1 Vento Bruto^000000.";
			mes "^4d4dff1 Natureza Grandiosa^000000.";
			mes "^4d4dff1 Gelo M�stico^000000.";
			mes "^4d4dff1 Cora��o Flamejante^000000.";
			close;
		} else if (sgladiatorq == 3) {
			mes "[Moogang]";
			mes "Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para o pr�ximo teste?";
			mes "Eu devo gui�-lo para o altar.";
			next;
			if (select("N�o, preciso de mais tempo!","Sim, estou") == 1) {
				mes "[Moogang]";
				mes "Bem, ent�o, por favor fale comigo quando voc� quiser prosseguir.";
				close;
			}
			mes "[Moogang]";
			mes "No altar, fale para Daru, que servir� como seu guia.";
			mes "Depois de concluir o teste, venha falar comigo novamente.";
			close2;
			warp ("job_star",34,12);
			end;
		} else if (sgladiatorq > 3 && sgladiatorq < 7) {
			mes "[Moogang]";
			mes "Qu�o estranho...";
			mes "Voc� n�o pode ter completado o teste ainda.";
			mes "Ah, algo deve ter acontecido.";
			mes "Vou enviar voc� de volta ao altar para que Daru possa test�-l"+(Sex == SEX_MALE ? "o":"a")+".";
			close2;
			warp ("job_star",34,12);
			end;
		} else if (sgladiatorq == 7) {
			mes "[Moogang]";
			mes "Hmm...";
			mes "Voc� parece est� te incomodando";
			mes "Ah, voc� deve estar pensando sobre o enigma de Beeryu, sim?";
			mes "Voc� � a �nica pessoa que pode encontrar a resposta...";
			next;
			mes "[Moogang]";
			mes "Talvez seja melhor para voc� ir falar com ^4d4dffMoohyun^000000 em Payon.";
			mes "Para que possa entender o de Beeryu em rela��o ao valor da paci�ncia.";
			next;
			mes "[Moogang]";
			mes "Depois de descobrir o significado da paci�ncia que Beeryu quer que voc� encontre.";
			mes "Volte para mim para que eu possa enviar voc� de volta para a Sala da lua.";
			close;
		} else if (sgladiatorq == 8) {
			mes "[Moogang]";
			mes "Ah, eu vejo que Moohyun ajudou voc� a alcan�ar um novo n�vel de compreens�o.";
			mes "Muito bem, muito bem.";
			mes "Deixe-me envi�-l"+(Sex == SEX_MALE ? "o":"a")+" para a sala da lua.";
			mes "Onde Beeryu est� esperando...";
			close2;
			warp ("job_star",100,13);
			end;
		} else if (sgladiatorq == 9 || sgladiatorq == 11) {
			mes "[Moogang]";
			mes "Gostaria de retornar a Sala das estrelas para completar seu treinamento?";
			next;
			if (select("Sim, por favor","Talvez mais tarde") == 1) {
				mes "[Moogang]";
				mes "N�o perca o cora��o...";
				mes "Espero que voc� possa alcan�ar seu objetivo tornando-se Mestre-Taekwon.";
				close2;
				warp ("job_star",166,29);
				end;
			}
			mes "[Moogang]";
			mes "Bem, quando sua mente, corpo e esp�rito estiverem preparados.";
			mes "Por favor, venha e fale comigo novamente.";
			close;
		} else if (sgladiatorq == 10) {
			mes "[Moogang]";
			mes "Ah, voc� veio aqui para falar com Cheehee.";
			mes "Voc� gostaria que eu enviasse voc� para Sala da Estrela agora?";
			next;
			if (select("Sim, por favor","Talvez mais tarde.") == 1) {
				mes "[Moogang]";
				mes "N�o perca o cora��o...";
				mes "Espero que voc� possa alcan�ar seu objetivo tornando-se Mestre-Taekwon.";
				close2;
				warp ("job_star",166,29);
				end;
			}
			mes "[Moogang]";
			mes "Bem, quando sua mente, corpo e esp�rito estiverem preparados.";
			mes "Por favor, venha e fale comigo novamente.";
			close;
		} else if (sgladiatorq == 12) {
			if (SkillPoint) {
				mes "[Moogang]";
				mes "Hm? Voc� ainda tem Pontos de Habilidade ainda n�o usados.";
				mes "Use-os, e melhore suas habilidades atuais.";
				mes "Quando terminar, volte aqui para o treinamento.";
				close;
			}
			mes "[Moogang]";
			mes "Ah, voc� retornou mais s�bio e mais sintonizado com a natureza do que antes.";
			mes "Sim, eu posso ver em seus olhos.";
			mes "Ent�o, diga-me, o que voc� aprendeu?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu posso sentir o v�nculo entre o Sol, a Lua e as Estrelas.";
			mes "Todos d�o luz, mas concedem diferentes coisas.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "O sol d� gl�ria calor e � a fonte da vida.";
			mes "A luz do luar � gentil e d� conforto.";
			mes "O brilho das estrelas d� esperan�a at� as noites mais sombrias";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu tamb�m conhe�o o Sol escaldante, destrutivo calor.";
			mes "A solid�o de a lua e a tristeza das Estrelas.";
			mes "Agora entendo o espectro do cosmos!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "A raiva combinada com cosmos pode convocar uma completa escurid�o";
			mes "O amor combinado com cosmos dar� uma infinidade de b�n��o e luz...";
			next;
			mes "[Moogang]";
			mes "N�o posso pedir qualquer coisa a mais.";
			mes "Voc� j� � "+(Sex == SEX_MALE ? "um Guerreiro":"uma Guerreira")+" do Sol, da Lua e das estrelas.";
			jobchange (Job_Star_Gladiator);
			completequest (7011);
			callfunc ("ClearJobQuest2nd",4047);
			next;
			mes "[Moogang]";
			mes "A partir de agora, fa�a suas decis�es com muito cuidado.";
			mes "O que voc� decide e determinar� o curso de toda a sua vida.";
			mes "Al�m disso, nunca esque�a disso...";
			next;
			mes "[Moogang]";
			mes "^4d4dffO Sol brilha em dias pares.";
			mes "A Lua brilha em dias estranhos.";
			mes "As Estrelas brilham a cada cinco dias.^000000";
			next;
			mes "[Moogang]";
			mes "Isso � tudo o que posso compartilhar com voc�.";
			mes "Nunca se esque�a de que n�s somos.";
			mes "Como Mestre-Taekwon n�o pode existir separadamente do Sol, a Lua e das Estrelas...";
			close;
		}
		mes "[Moogang]";
		mes "Oh, ol�.";
		mes "Voc� � um estudante de Taekwon Do?";
		mes "� legal conhecer voc�.";
		next;
		mes "[Moogang]";
		mes "Um...";
		mes "Voc� j� considerado tornar-se...";
		mes "Um... N�o.";
		mes "Aguarde. Hmmm...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Huh...?";
		next;
		mes "[Moogang]";
		mes "Oh, eu sempre tenho um pouco de problema ao falar com outras pessoas.";
		mes "Agora, por que n�o voc� fala com o meu bem amigo, Moohyun?";
		next;
		mes "[Moogang]";
		mes "� s�...";
		mes "Estou t�o animado!";
		mes "H� todas as chances que voc� pode possivelmente seja o guerreiro que estou procurando";
		close;
	} else if (BaseJob == Job_Star_Gladiator) {
		mes "[Moogang]";
		mes "Mantenha meu conselho em mente e sempre tenha cuidado quando voc� toma decis�es.";
		mes "Para n�o se arrepender mais tarde em sua vida...";
		next;
		mes "[Moogang]";
		mes "A propos�to gostaria de ir a alguma sala?";
		next;
		switch(select("N�o","Para a Sala do Sol!","Para a Sala da Lua!","Para a Sala das estrelas!")) {
			case 1:
			mes "[Moogang]";
			mes "Tudo bem.";
			mes "Eu sempre estarei aqui.";
			mes "Ent�o sempre que voc� quiser ir a qualquer um esses lugares.";
			mes "Apenas venha e fale comigo.";
			mes "Adeus.";
			close;
			case 2:
			mes "[Moogang]";
			mes "Ah, voc� deve perder o calor glorioso do sol, eh?";
			mes "Deixe-me ter enviar para l� imediatamente...";
			close2;
			warp ("job_star",34,12);
			end;
			case 3:
			mes "[Moogang]";
			mes "Hm? Voc� precisa da luz calmante da Lua?";
			mes "Ent�o, espero que voc� encontre a paz em sua influ�ncia calmante...";
			close2;
			warp ("job_star",100,13);
			end;
			case 4:
			mes "[Moogang]";
			mes "Ah, in�meras raz�es para o motivo pelo qual voc� gostaria de ver o brilho das estrelas.";
			mes "Bem, deixe-me enviar voc� para a Sala das Estrelas imediatamente.";
			close2;
			warp ("job_star",166,29);
			end;
		}
	}
	mes "[Mestre Andarilho]";
	mes "Voc� gosta de caminhar?";
	mes "O ar fresco, a liberta��o encontrada em vaguear e a beleza natural s�o todos benef�cios bem-vindos.";
	next;
	mes "[Mestre Andarilho]";
	mes "Claro, n�o posso apreciar o luar e a luz das estrelas sobre as caminhadas noturnas.";
	mes "Bem, ent�o, o Sol, a Lua e as Estrelas o protejam em todas as suas jornadas.";
	close;
}

// ------------------------------------------------------------------
job_star,29,33,0	script	Daru#sgladiatorq	1_M_ORIENT01,{
	if (Class == Job_Taekwon) {
		if (sgladiatorq == 3) {
			mes "[Daru]";
			mes "Ah, sauda��es.";
			mes "Eu sou Daru, e eu vou ser o seu guia nessa local.";
			mes "Para este teste, voc� deve abrir os olhos e responder minhas perguntas.";
			mes "Vamos come�ar.";
			next;
			mes "[Daru]";
			mes "Diga-me.";
			mes "O que � isso que voc� v�?";
			next;
			switch(select("O Sol","A Lua","As Estrelas","N�o fa�o id�ia")) {
				case 1:
				mes "[Daru]";
				mes "Sim! � o sol!";
				mes "Suponho que voc� possa pensar na humanidade como filhos do sol.";
				mes "Bom, muito bom...";
				.@sun_point += 10;
				break;
				case 2:
				mes "[Daru]";
				mes "O... A lua?";
				mes "Mm. Mas esta � a sala do sol.";
				break;
				case 3:
				mes "[Daru]";
				mes "Estrelas?";
				mes "Bem, suponho que voc� possa pensar no Sol como uma das milhares de estrelas no universo...";
				.@sun_point += 5;
				break;
				case 4:
				mes "[Daru]";
				mes "N�o... id�ia?";
				mes "Voc� deve abrir sua mente, bem como seus olhos.";
				mes "Pelo menos deveria tentar adivinhar uma resposta...";
			}
			next;
			mes "[Daru]";
			mes "Agora, n�o h� nada que possa viver sem o sol.";
			mes "Voc� sabe do que mais precisamos do sol?";
			next;
			switch(select("Calor","Conforto","Luz","Nada")) {
				case 1:
				mes "[Daru]";
				mes "Sem o calor do sol, nosso mundo n�o s� � frio, mas seria completamente sem vida.";
				.@sun_point += 10;
				break;
				case 2:
				mes "[Daru]";
				mes "O calor do sol traz conforto.";
				mes "E sem conforto, a vida realmente vale a pena viver?";
				mes "Boa resposta.";
				.@sun_point += 10;
				break;
				case 3:
				mes "[Daru]";
				mes "Sem a gloriosa luz do sol, n�o ver�amos nada.";
				mes "N�o saber�amos nada.";
				mes "N�o ser�amos nada.";
				.@sun_point += 10;
				break;
				case 4:
				mes "[Daru]";
				mes "A resposta deve vir de seu cora��o, ao inv�s de sua mente.";
				mes "Todos precisam de algo do sol.";
				mes "Vejamos agora...";
				break;
			}
			next;
			mes "[Daru]";
			mes "^4d4dffO Sol brilha em dias pares.";
			mes "A Lua brilha em dias estranhos.";
			mes "As Estrelas brilham a cada quinto dia sem falhas^000000";
			next;
			mes "[Daru]";
			mes "^4d4dffUm deserto � um lugar solar, suas areias s�o beijadas pelo Sol.";
			mes "Um p�ntano � um lugar lunar, seus lobos conduzidos pela Lua.";
			mes "Uma caverna profunda � um lugar estelar, seus cavaleiros encantados por Estrelas^000000.";
			next;
			mes "[Daru]";
			mes "Agora, qual das seguintes combina��es est� correta?";
			mes "Pense com cuidado...";
			next;
			if (select("P�ntano, Cavaleiro","Deserto, Areia","Deseto, Cavaleiro","Caverna, Lobos") == 2) {
				.@sun_point += 10;
			}
			mes "[Daru]";
			mes "Bem, isso ser� tudo.";
			mes "Eu n�o posso saber tudo o que h� para saber sobre voc� atrav�s de apenas 3 perguntas...";
			mes "Mas isso deve se adequar aos nossos prop�sitos por enquanto.";
			next;
			if (.@sun_point == 30) {
				mes "[Daru]";
				mes "Eu admito que estou impressionado com a sua compreens�o do Sol.";
				mes "� a fonte de toda a vida, a origem do calor e conforto.";
				mes "Agora, deixe-me lev�-l"+(Sex == SEX_MALE ? "o":"a")+" para a sala da lua.";
				sgladiatorq = 4;
				close2;
				warp (strnpcinfo(NPC_MAP),100,13);
				end;
			} else if (.@sun_point == 25) {
				mes "[Daru]";
				mes "Embora sua compreens�o do Sol n�o seja perfeita.";
				mes "Voc� parece entender a id�ia de que � a fonte do calor e da vida em nosso mundo.";
				next;
				mes "[Daru]";
				mes "Essa id�ia � um dos conceitos b�sicos que lhe ajudar�.";
				mes "A ter mais sincronia com o poder do cosmos.";
				mes "Agora, venha at� a sala da lua ...";
				sgladiatorq = 4;
				close2;
				warp (strnpcinfo(NPC_MAP),100,13);
				end;
			}
			mes "[Daru]";
			mes "Hmm..";
			mes "Se voc� n�o entende o papel do sol no universo e no mundo humano.";
			mes "Voc� estar� sempre fora de contato com a natureza e com o cosmos.";
			next;
			mes "[Daru]";
			mes "Eu aconselho voc� a meditar cuidadosamente sobre as verdades fundamentais da natureza.";
			mes "Antes de me falar mais uma vez.";
			mes "Contemple o poder infinito do sol...";
			sgladiatorq = 5;
			close;
		} else if (sgladiatorq == 4) {
			mes "[Daru]";
			mes "N�o � mais necess�rio que permane�amos aqui.";
			mes "Vamos para a Sala da Lua juntos.";
			close2;
			warp (strnpcinfo(NPC_MAP),100,13);
			end;
		} else if (sgladiatorq == 5) {
			switch (rand(10)) {
				case 3:
				mes "[Daru]";
				mes "Acredito que voc� gastou tempo suficiente refletindo sobre a gl�ria do Sol.";
				mes "E da sua import�ncia para os humanos e para o mundo.";
				mes "Agora, vamos para a Sala da Lua.";
				sgladiatorq = 4;
				close2;
				warp (strnpcinfo(NPC_MAP),100,13);
				end;
				default:
				mes "[Daru]";
				mes "Relaxe cada m�sculo em seu corpo.";
				mes "Feche seus olhos.";
				mes "Sinta o calor do Sol contra suas p�lpebras enquanto medita sobre seu papel no mundo.";
				mes "E seu lugar no cosmos.";
				close;
			}
		} else if (sgladiatorq == 6) {
			mes "[Daru]";
			mes "Hm?";
			mes "N�o h� mais nada para se fazer na Sala do Sol.";
			mes "Vamos para a Sala das Estrelas agora...";
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		} else if (sgladiatorq == 7) {
			mes "[Daru]";
			mes "Ah, Beeryu deve ter lhe dado o enigma para resolver.";
			mes "Bem, voc� precisar� voltar para a cidade para descobrir a resposta.";
			mes "Ent�o deixe-me enviar voc� agora.";
			close2;
			warp ("payon",164,58);
			end;
		} else if (sgladiatorq == 8) {
			mes "[Daru]";
			mes "Hm? Beeryu est� esperando voc� na sala da lua.";
			mes "Deixe-me enviar-lhe para l� agora...";
			close2;
			warp (strnpcinfo(NPC_MAP),100,13);
			end;
		} else if (sgladiatorq > 8 && sgladiatorq < 12) {
			mes "[Daru]";
			mes "N�o posso culp�-l"+(Sex == SEX_MALE ? "o":"a")+", se voc� gosta tanto da Sala do Sol.";
			mes "Mas agora � a hora de voc� ir para Sala das Estrelas.";
			mes "Vou enviar voc� para l�...";
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		}
		mes "[Daru]";
		mes "N�o posso culp�-l"+(Sex == SEX_MALE ? "o":"a")+", se voc� gosta tanto da Sala do Sol.";
		mes "Mas voc� tem uma tarefa muito importante para completar agora.";
		mes "Deixe-me enviar voc� para a cidade.";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Daru]";
	mes "Enquanto voc� est� aqui, pe�o que voc� n�o interfira com ningu�m.";
	mes "Que possa estar fazendo o teste de mudan�a de classe.";
	mes "Ent�o, voc� gostaria de voltar para a cidade?";
	next;
	if (select("Ir para Payon","Cancelar") == 1) {
		mes "[Daru]";
		mes "Deixe-me ter guiar de volta para Payon, ent�o.";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Daru]";
	mes "Por favor, fique o tempo necess�rio e aproveite o esplendor do Sol enquanto estiver aqui.";
	close;
}

// ------------------------------------------------------------------
job_star,95,33,0	script	Beeryu#sgladiatorq	1_M_MOC_LORD,{
	if (Class == Job_Taekwon) {
		if (sgladiatorq == 4) {
			mes "[Beeryu]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � Sala da Lua.";
			mes "Sou Beeryu, seu guia neste santu�rio.";
			mes "Devo fazer uma s�rie de perguntas, ent�o pense com aten��o antes de me dar sua resposta sincera.";
			next;
			mes "[Beeryu]";
			mes "Que Lua precisamos mais?";
			mes "Pense nos diferentes tons da lua, e como isso muda em certas noites.";
			next;
			switch(select("Lua Vermelha","Lua Azul","Lua Dourada","...?")) {
				case 1:
				mes "[Beeryu]";
				mes "A Lua Vermelha ...?";
				mes "� uma vis�o tem�vel, geralmente comparada a encharcar o c�u com a cor do sangue.";
				mes "A Lua Vermelha agita sentimentos escuros que n�o devemos abra�ar completamente ...";
				break;
				case 2:
				mes "[Beeryu]";
				mes "A Lua Azul ...?";
				mes "Ah, sim.";
				mes "� uma lua calma e gentil, cuja suave luz ajuda voc� a pensar com clareza.";
				mes "� uma lua de descanso pac�fico ...";
				.@moon_point += 10;
				break;
				case 3:
				mes "[Beeryu] A Lua dourada...?";
				mes "Ah, essa � uma lua de riqueza.";
				mes "Agora, aspirar a alcan�ar a prosperidade � natural e cumprir suas aspira��es � o pin�culo da vida.";
				.@moon_point += 10;
				break;
				case 4:
				mes "[Beeryu]";
				mes "Hmm ...?";
				mes "Voc� n�o tem uma opini�o sobre a Lua?";
				mes "Voc� deve estar confiante e me dizer qual sombra da lua que voc� gosta ...";
			}
			next;
			mes "[Beeryu]";
			mes "Agora, se as sombras da Lua lhe emprestaram seu poder.";
			mes "Para que fim voc� usaria o poder do cosmos lunar?";
			next;
			switch(select("Justi�a","Pr�tica","Preserva��o","Vingan�a")) {
				case 1:
				mes "[Beeryu]";
				mes "Sim.";
				mes "A justi�a � sempre um fim que vale a pena lutar.";
				mes "Basta lembrar que tanto o poder como a compaix�o.";
				mes "S�o obrigados a prometer a mais verdadeira forma de justi�a.";
				.@moon_point += 10;
				break;
				case 2:
				mes "[Beeryu]";
				mes "Treinamento?";
				mes "Essa � uma resposta aceit�vel.";
				mes "No entanto, voc� nunca deve esquecer suas raz�es para alcan�ar seu pr�prio dom�nio.";
				mes "Sen�o voc� perde seu caminho.";
				.@moon_point += 10;
				break;
				case 3:
				mes "[Beeryu]";
				mes "A preserva��o da natureza � responsabilidade de todos os seres vivos.";
				mes "No entanto, esperava uma resposta diferente em termos do como arte marcial...";
				break;
				case 4:
				mes "[Beeryu]";
				mes "�s vezes, a vingan�a pode parecer o melhor curso de a��o.";
				mes "Especialmente se for levado caba interesse da justi�a.";
				mes "No entanto, a vingan�a por si s� � geralmente inquebr�vel.";
				next;
				mes "[Beeryu]";
				mes "Pergunte a si mesmo:";
				mes "O que voc� far� depois que voc� conseguir sua vingan�a?";
				mes "Quando voc� deixa sua f�ria arder com voc�, voc� inflige o m�ximo de dano a si mesmo...";
				break;
			}
			next;
			mes "[Beeryu]";
			mes "Agora, ou�a atentamente.";
			mes "Estou certo de que Daru j� falou isso para voc�...";
			next;
			mes "[Beeryu]";
			mes "^4d4dff O Sol brilha em dias pares.";
			mes "A Lua brilha em dias estranhos.";
			mes "As Estrelas brilham todos os quinto dias sem falhas^000000.";
			next;
			mes "[Beeryu]";
			mes "^4d4dff Um deserto � um lugar solar, suas areias beijadas pelo Sol.";
			mes "Um p�ntano � um lugar lunar, seus lobos conduzidos pela Lua.";
			mes "Uma caverna profunda � um lugar estelar, seus cavaleiros encantados por Estrelas^000000.";
			next;
			mes "[Beeryu]";
			mes "De acordo com estas letras, quais s�o as que mais fortemente evoca a luz da lua?";
			next;
			if (select("P�ntano, Cavaleiros","Deserto, Areia","Caverna, Cavaleiro","P�ntano, Lobos") == 4) {
				.@moon_point += 10;
			}
			mes "[Beeryu]";
			mes "Bem, eu fiz as perguntas que eu queria fazer a voc�.";
			mes "Entanda o seguinte:";
			if (.@moon_point > 20) {
				mes "O v�nculo entre o luar com as sombras da lua.";
				mes "Ent�o, voc� se tornar� um mestre.";
				next;
				mes "[Beeryu]";
				mes "O suave luar ilumina a noite mais escura.";
				mes "As sombras da lua equilibram o brilho glorioso do Sol.";
				mes "Sabedoria para o poder, frieza para raiva.";
				mes "Contemple sobre isso...";
				next;
				mes "[Beeryu]";
				mes "Tenho f� que voc� logo se tornar� um grande Mestre de Taekwon.";
				mes "Agora, chegou a hora de entrar na Sala das Estrelas.";
				mes "Venha, me siga...";
				sgladiatorq = 6;
				close2;
				warp (strnpcinfo(NPC_MAP),166,29);
				end;
			}
			mes "Para ser t�o paciente e gentil quanto o suave brilho da lua";
			next;
			mes "[Beeryu]";
			mes "Por favor, pense sobre isso de forma s�ria.";
			mes "Um verdadeiro Mestre de Taekwon pode exibir calma mental em todas as situa��es.";
			mes "N�o importa quais sejam as apostas.";
			next;
			mes "[Beeryu]";
			mes "Agora, eu quero que voc� aproveite a chance de praticar a mentalidade lunar.";
			mes "Acalme seus pensamentos e conserte sua mente ativa...";
			next;
			mes "[Beeryu]";
			mes "Por enquanto, vou mandar voc� para Payon.";
			mes "Sair e aprender o significado verdadeiro da paci�ncia^000000.";
			mes "Ent�o, quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Fale com Moogang para que ele possa ter enviar para mim.";
			sgladiatorq = 7;
			close2;
			warp ("payon",164,58);
			end;
		} else if (sgladiatorq == 5) {
			mes "[Beeryu]";
			mes "Voc� deve primeiro testar a Sala do Sol antes de ser testado aqui na Sala da Lua.";
			mes "Deixe-me enviar voc� para onde deve ir...";
			close2;
			warp (strnpcinfo(NPC_MAP),34,12);
			end;
		} else if (sgladiatorq == 6) {
			mes "[Beeryu]";
			mes "Como voc� ainda est� aqui?";
			mes "A luz da lua cheia traz conforto.";
			mes "Mas voc� deve seguir em frente se quiser se tornar um Mestre de Taekwon.";
			mes "Venha, enviarei voc� para a Sala das Estrelas.";
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		} else if (sgladiatorq == 7) {
			mes "[Beeryu]";
			mes "Eu quero que voc� me traga a prova de que voc� entende a natureza da paci�ncia associada � lua.";
			mes "Voc� n�o pode se tornar um Mestre Taekwon sem essa atitude...";
			next;
			mes "[Beeryu]";
			mes "A prova que eu quero que me mostre seja concreta e indiscut�vel.";
			mes "Pense no que poderia ser.";
			mes "Agora, eu enviarei de volta � cidade...";
			close2;
			warp ("payon",164,58);
			end;
		} else if (sgladiatorq == 8) {
			mes "[Beeryu]";
			mes "Ah, voc� finalmente retornou.";
			mes "Posso ver na maneira como voc� se carrega que sua determina��o foi fortalecida.";
			mes "Espero que voc� conhe�a paci�ncia...";
			next;
			mes "[Beeryu]";
			mes "A paci�ncia e a resolu��o s�o necess�rias para viver a vida sem arrependimentos.";
			mes "Voc� deve acreditar em si mesmo.";
			mes "Ao mesmo tempo que � considerado e compreensivo dos outros em harmonia c�smica.";
			next;
			mes "[Beeryu]";
			mes "Aprenda a controlar o seu poder atrav�s do treinamento espiritual.";
			mes "Saiba como se orgulhar sem arrog�ncia.";
			mes "Ent�o eu vou mandar voc� para Cheehee agora.";
			sgladiatorq = 6;
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		} else if (sgladiatorq > 8 && sgladiatorq < 12) {
			mes "[Beeryu]";
			mes "Voc� deveria estar recebendo a tutela de Cheehee na Sala das Estrelas agora.";
			mes "Venha, deixe-me te guiar at� l�.";
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		}
		mes "[Beeryu]";
		mes "Por que voc� ainda est� aqui?";
		mes "Voc� tem algo muito mais importante para fazer.";
		mes "Ent�o deixe-me enviar de volta � cidade...";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Beeryu]";
	mes "Tente n�o incomodar aqueles que querem completar o seu teste de mudan�a de classe enquanto voc� est� aqui.";
	mes "Ah, e me avise quando voc� quer voltar para Payon.";
	next;
	if (select("Voltar para Payon","Cancelar") == 1) {
		mes "[Beeryu]";
		mes "Passar bem!";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Beeryu]";
	mes "...............";
	close;
}

// ------------------------------------------------------------------
job_star,161,33,0	script	Cheehee#sgladiatorq	1_F_ORIENT_03,{
	if (Class == Job_Taekwon) {
		if (sgladiatorq == 6) {
			mes "[Cheehee]";
			mes "Voc� n�o acha que as estrelas s�o t�o bonitas?";
			mes "Eles s�o como l�grimas de uma linda garota em um fundo de c�u preto e preto...";
			sgladiatorq = 9;
			close;
		} else if (sgladiatorq == 9) {
			if (rand(1,5) == 3) {
				mes "[Cheehee]";
				mes "O teste que tenho para voc� � simples.";
				mes "Apenas me traga os itens desta terra que v�m das estrelas.";
				mes "Traga-me um peda�o de estrela e a areia de uma estrela...";
				sgladiatorq = 10;
				changequest (7009,7010);
				close;
			}
			mes "[Cheehee]";
			mes "...............";
			next;
			mes "^777777Chequehee est� parado, olhando o c�u como se estivesse contando cada estrela brilhante nos c�us^000000.";
			close;
		} else if (sgladiatorq == 10) {
			if (countitem(Star_Crumb) > 0 && countitem(Sparkling_Dust) > 0) {
				mes "[Cheehee]";
				mes "Oh! Voc� trouxe exatamente o que eu pedi para voc� trazer?";
				mes "Voc� sabia que o esp�rito das estrelas.";
				mes "� usado para melhorar as armaduras e armas que todos os aventureiros usam na batalha?";
				next;
				mes "[Cheehee]";
				mes "As estrelas est�o ligadas �s id�ias de desejos, sonhos, esperan�as, magia e romance.";
				mes "Ocasionalmente, as estrelas podem ser tristes, mas � uma tristeza muito doce...";
				delitem (Star_Crumb,1);
				delitem (Sparkling_Dust,1);
				sgladiatorq = 11;
				close;
			}
			mes "[Cheehee]";
			mes "As pe�as das estrelas...";
			mes "A areia das estrelas.";
			mes "Se voc� n�o as trouxe com voc�, ent�o voc� n�o as encontrar� aqui.";
			mes "Voc� ter� que sair para encontr�-las l� antes de traz�-los para mim. ";
			close2;
			warp ("payon",164,58);
			end;
		} else if (sgladiatorq == 11) {
			mes "[Cheehee]";
			mes "Voc� j� pensou na id�ia de sentir tristeza nas estrelas?";
			mes "Talvez essas palavras ajude a entender melhor, embora eu saiba que voc� j� deve ter ouvido...";
			next;
			mes "[Cheehee]";
			mes "^4d4dffO Sol brilha em dias pares.";
			mes "A Lua brilha em dias �mpares.";
			mes "As Estrelas brilham a cada quinto dia sem falhas.^000000";
			next;
			mes "[Cheehee]";
			mes "^4d4dffUm deserto � um lugar solar, suas areias s�o beijadas pelo Sol.";
			mes "Um p�ntano � um lugar lunar, seus lobos s�o conduzidos pela Lua.";
			mes "Uma caverna profunda � um lugar estelar, seus cavaleiros s�o encantados por Estrelas^000000.";
			next;
			mes "[Cheehee]";
			mes "Agora...";
			mes "Qual dos seguintes conbina��es tem mais haver com a luz das estrelas?";
			next;
			if (select("Caverna, Areia","Deserto, Areia","Caverna, Cavaleiro","Deserto, Cavaleiro") == 3) {
				mes "[Cheehee]";
				mes "Voc� est� certo.";
				mes "A combina��o do 25� dia, um m�ltiplo do n�mero 5 e os Cavaleiros em uma caverna brilha mais brilhante com a luz das estrelas.";
				next;
				mes "[Cheehee]";
				mes "Se voc� pode entender essas palavras.";
				mes "Voc� deve entender a ess�ncia de ser Mestre-Taekwon.";
				mes "Lembre-se que a luz vem em tons diferentes...";
				next;
				mes "[Cheehee]";
				mes "A gl�ria do sol, o suave luar e os cintilantes melanc�licos das estrelas.";
				mes "S�o �nicos um do outro.";
				mes "Por favor, aproveite a luz das estrelas nesta sala enquanto voc� quiser.";
				next;
				mes "[Cheehee]";
				mes "Quando quiser, fale novamente com Moogang.";
				mes "Avisarei a ele saber que voc� completou nossos testes.";
				sgladiatorq = 12;
				changequest (7010,7011);
				close;
			}
			mes "[Cheehee]";
			mes "Hmm...";
			mes "Voc� deve aprender mais sobre a natureza das estrelas.";
			mes "Voc� deve entender o cosmos se voc� se tornar um Mestre Taekwon.";
			next;
			mes "[Cheehee]";
			mes "Se voc� pode entender essas palavras.";
			mes "Voc� deve entender a ess�ncia de ser Mestre-Taekwon.";
			mes "Lembre-se que a luz vem em tons diferentes...";
			next;
			mes "[Cheehee]";
			mes "A gl�ria do sol, o suave luar e os cintilantes melanc�licos das estrelas.";
			mes "S�o �nicos um do outro.";
			mes "Por favor, aproveite a luz das estrelas nesta sala enquanto voc� quiser.";
			next;
			mes "[Cheehee]";
			mes "Quando quiser, fale novamente com Moogang.";
			mes "Avisarei a ele saber que voc� completou nossos testes.";
			sgladiatorq = 12;
			if (questprogress(7010)) { changequest (7010,7011); }
			close;
		} else if (sgladiatorq == 12) {
			mes "[Cheehee]";
			mes "Voc� deseja sair da Sala das Estrelas?";
			next;
			if (select("Sim","N�o") == 1) {
				mes "[Cheehee]";
				mes "Ent�o, vou guiar voc� para Payon, a cidade mais pr�xima.";
				close2;
				warp ("payon",164,58);
				end;
			}
			mes "[Cheehee]";
			mes "Por favor, aproveite seu tempo e aproveite a luz das estrelas neste sala...";
			close;
		}
		mes "[Cheehee]";
		mes "As estrelas certamente s�o lindas, n�o s�o?";
		mes "Voc� gostaria para retornar a Payon agora?";
		next;
		if (select("Sim","N�o") == 1) {
			mes "[Cheehee]";
			mes "ent�o. Guiarei voc� at� Payon.";
			close2;
			warp ("payon",164,58);
			end;
		}
		mes "[Cheehee]";
		mes "Por favor, aproveite seu tempo e aproveite a luz das estrelas neste sala...";
		close;
	}
	mes "[Cheehee]";
	mes "As estrelas certamente s�o lindas, n�o s�o?";
	mes "Voc� gostaria para retornar a Payon agora?";
	next;
	if (select("Sim","N�o") == 1) {
		mes "[Cheehee]";
		mes "ent�o. Guiarei voc� at� Payon.";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Cheehee]";
	mes "Por favor, aproveite seu tempo e aproveite a luz das estrelas neste sala...";
	close;
}

