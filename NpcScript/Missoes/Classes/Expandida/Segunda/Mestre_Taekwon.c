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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudança de Classe para Mestre-Taekwon.           |
\*-----------------------------------------------------------------*/

payon,215,102,3	script	Moohyun#sgladiatorq	4_M_ROGUE,{
	if (Class == Job_Taekwon) {
		if (!sgladiatorq) {
			mes "[Moohyun]";
			mes "Ei "+(Sex == SEX_MALE ? "Garoto":"Garota")+" Taekwon!";
			mes "Venha aqui por um minuto.";
			mes "Eu tenho uma proposta para você se você ouvir!";
			next;
			if (select("Claro","Não, obrigado!") == 1) {
				mes "[Moohyun]";
				mes "Tudo bem, criança qual é o seu nome?";
				next;
				mes strcharinfo(PC_NAME)+".";
				next;
				mes "[Moohyun]";
				mes "Você é tão diret"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Um pouco de calor, ou um pouco amizade não mataria você, ou mataria?";
				mes "De qualquer forma, você já pensou no que vai ser?";
				next;
				mes "[Moohyun]";
				mes "Se o seu coração ainda não está definido sobre isso.";
				mes "Por que você não se torna um ^4d4dffguerreiro do Sol, da Lua, e das Estrelas^000000?";
				mes "Pense nisso.";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Guerreiro do que...?";
				mes "Nunca ouvi falar disso.";
				mes "Mas eu sei que posso alterar minha classe para Espiritualista ou Mestre-Taekwon.";
				next;
				mes "[Moohyun]";
				mes "Sim. Sim, está certo.";
				mes "Mestres Taekwon são guerreiros do Sol, da Lua e das Estrelas que recebe o poder do cosmos!";
				mes "De qualquer forma, interessaria em mudar para Classe Mestre-Taekwon?";
				next;
				if (select("Sim, Claro!","Não, nem tanto") == 1) {
					if (JobLevel > 39) {
						mes "[Moohyun]";
						mes "Ótimo, ótimo.";
						mes "Eu sabia que você iria ver as coisas do meu jeito.";
						mes "Tudo bem você parece estar pront"+(Sex == SEX_MALE ? "o":"a")+" o suficiente.";
						mes "Tudo o que você precisa agora é de alguém.";
						mes "Que possa treiná-l"+(Sex == SEX_MALE ? "o":"a")+" para Mestre Taekwon.";
						next;
						mes "[Moohyun]";
						mes "Então vou apresentá-l"+(Sex == SEX_MALE ? "o":"a")+" para alguém que possa realizar ess objetivo.";
						next;
						if (select("Sim, como faço?","Não, deixe-me pensar mais...") == 1) {
							mes "[Moohyun]";
							mes "Excelente!";
							mes "Agora, como você já pode ter adivinhado.";
							mes "Não estou responsável por essa tarefa oficialmente.";
							next;
							mes "[Moohyun]";
							mes "Então a quem você deve ir agora...?";
							mes "Ah, você deve visitar ^4d4dffMoogang^000000.";
							mes "Ele é um dos poucos Mestre-Taekwon Mestres interessados em receber novos alunos.";
							mes "Então ele com certeza irá cuidar do seu treinamento.";
							next;
							mes "[Moohyun]";
							mes "Tudo bem, você pode encontrar Moogang em Comodo.";
							mes "Supostamente no lugar mais próximo do céu.";
							mes "Enquanto isso, vou escrever um carta de recomendação que estou te enviando para ele.";
							sgladiatorq = 1;
							setquest (7007);
							close;
						}
						mes "[Moohyun]";
						mes "Está bem.";
						mes "Mudar sua classe é uma decisão importante.";
						mes "Que deve ser pensada com muito cuidado.";
						mes "Mas asseguro que você nunca se arrependerá de se tornar um maravilhoso guerreiro do cosmos!";
						close;
					}
					mes "[Moohyun]";
					mes "Ótimo, ótimo";
					mes "Mas primeiro, você tem que ser pelo menos Nível de Classe 40.";
					mes "Antes que você possa começar o treinamento para Mestre-Taekwon.";
					next;
					mes "[Moohyun]";
					mes "Eu sei que você pode atingir esse Nível rapidamente.";
					mes "Prometa-me você voltará para que eu possa lhe ajudar a se tornar um grande Mestre Taekwon";
					close;
				}
				mes "[Moohyun]";
				mes "Realmente?";
				mes "Bem, eu ainda acho que você é mais adequado para ser um Mestre Taekwon do que outra Classe.";
				mes "Mas a decisão é sua.";
				next;
				mes "[Moohyun]";
				mes "Bem, se você mudar de ideia.";
				mes "então, apenas volte para e me avise.";
				mes "Eu sei que você seria um grande Mestre-Taekwon.";
				close;
			}
			mes "[Moohyun]";
			mes "Ah, não seja assim.";
			mes "Não lhe custa nada em ouvir o que tenho a dizer.";
			mes "Apenas ouça....";
			close;
		} else if (sgladiatorq == 1) {
			mes "[Moohyun]";
			mes "Já enviei a carta de recomendação para você.";
			mes "Então vá em frente e encontre Moogang em Comodo.";
			mes "Ele começará a treinar você para tornar-se um Mestre Taekwon";
			close;
		} else if (sgladiatorq == 7) {
			mes "[Moohyun]";
			mes "Então, como foi no teste?";
			mes "Algum tipo de problema?";
			next;
			if (select("Não, estou bem.", "Sobre o enigma de Beeryu...") == 1) {
				mes "[Moohyun]";
				mes "Ser independente";
				mes "e resolver problemas por conta própria sempre é a melhor saída.";
				mes "Mas você pode pedir ajuda quando realmente precisar.";
				mes "Não é uma vergonha em ser incapaz de realizar algo sozinho...";
				close;
			}
			mes "[Moohyun]";
			mes "Ah, isso.";
			mes "Beeryu deu-lhe um enigma para resolver.";
			mes "Bem, primeiro de tudo, não te daria algo como aquilo se realmente não fosse importante.";
			mes "Mas vejo que não é um objeto material.";
			next;
			mes "[Moohyun]";
			mes "Você deve demonstrar algo para ele.";
			mes "Agora diga.";
			mes "Quando você enfrenta dificuldades na vida, obstáculos para seus objetivos como você reage?";
			mes "O que seu coração realmente sente?";
			next;
			mes "[Moohyun]";
			mes "Eu sei que Beeryu perguntou para provar sua paciência para ele.";
			mes "Mas este é o mais importante fator atrás da paciência.";
			mes "O que você se diz quando sua vida parece desesperada?";
			next;
			if (select("Eu não vou desistir!","Eu... Eu não sei?") == 1) {
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Eu não vou desistir!";
				mes "Vou fazer meus sonhos se tornar realidade.";
				mes "Não importa quanto tempo demora!";
				next;
				mes "[Moohyun]";
				mes "Sim, é isso!";
				mes "Quando sua resolução é apoiado por uma vontade maior.";
				mes "Você terá paciência para enfrentar todas as coisas.";
				next;
				mes "[Moohyun]";
				mes "Ótimo, eu acho que você é pront"+(Sex == SEX_MALE ? "o":"a")+" agora.";
				mes "Por favor, vá falar com Moogang e peça para voltar a sala da lua.";
				mes "Em breve talvez possamos cumprimentar um ao outro como Mestes Taekwon!";
				sgladiatorq = 8;
				close;
			}
			mes "[Moohyun]";
			mes "Você...";
			mes "Você não sabe?";
			mes "Se você enfrentasse obstáculos de cabeça.";
			mes "E confrontar diretamente seus medos.";
			mes "Seus inimigos e todos os desafios da vida, então a resposta deve vir naturalmente.";
			next;
			mes "[Moohyun]";
			mes "Hmm...";
			mes "Por que você não contempla o valor da coragem um pouco?";
			mes "Sim, pode ser útil por enquanto.";
			close;
		} else if (sgladiatorq == 8) {
			mes "[Moohyun]";
			mes "Ótimo, eu acho que você é pront"+(Sex == SEX_MALE ? "o":"a")+" agora.";
			mes "Por favor, vá falar com Moogang e peça para voltar a sala da lua.";
			mes "Em breve talvez possamos cumprimentar um ao outro como Mestes Taekwon!";
			close;
		}
		mes "[Moohyun]";
		mes "Então, como você passado?";
		mes "Eu tenho fé que você que se tornará um grande Mestre-Taekwon.";
		mes "Esperarei notícias.";
		close;
	} else if (BaseJob == Job_Star_Gladiator) {
		mes "[Moohyun]";
		mes "Ei, como você tem passado?";
		mes "Comtemplando a natureza e tudo que nela existe?";
		mes "Heh heh, o cosmos não é uma coisa maravilhosa?";
		close;
	}
	mes "[Moohyun]";
	mes "O quer?";
	if (Sex == SEX_MALE) {
		mes "Você quer se juntar a minha escola de artes marciais?";
		mes "É muito tarde para você, sinto muito amigo.";
	} else {
		mes "Oh, eu não percebi que...";
		mes "Você era um dama tão bela!";
	}
	next;
	mes "[Moohyun]";
	mes "De qualquer forma, se você acha que sou apenas um punk.";
	mes "Mas, na verdade, sou um guerreiro do Sol, da Lua e das Estrelas";
	next;
	mes "[Moohyun]";
	mes "Pode ser um pouco atrasado para você.";
	mes "Mas se você sabe de alguém um que queira se tornar um Mestre de Taekwon.";
	mes "Fale com ele sobre mim.";
	close;
}

// ------------------------------------------------------------------
comodo,172,230,3	script	Meste Andarilho#sgladiatorq	4_M_JOB_ASSASSIN,{
	if (Class == Job_Taekwon) {
		if (sgladiatorq == 1) {
			mes "[Moogang]";
			mes "Você deve ser "+strcharinfo(PC_NAME)+"...";
			mes "Eu tenho esperado você.";
			mes "Moohyun me falou sobre seu desejo para se tornar Mestre Taekwon";
			mes "Confiarei em seu julgamento...";
			next;
			mes "[Moogang]";
			mes "Sim, Moohyun é especialista em distinguir os pontos fortes dos outros.";
			mes "Você deve fazer bem.";
			mes "Você está pront"+(Sex == SEX_MALE ? "o":"a")+" para o primeiro teste.";
			mes "Para usar seus punhos e pernas a serviço do grande cosmos?";
			next;
			if (select("Sim, começemos o teste!","Não, preciso mais nisso!") == 1) {
				mes "[Moogang]";
				mes "O Taekwon Do define o básico.";
				mes "Mente, corpo, alma.";
				mes "Estes não são partes separadas, mas um todo funcionando.";
				next;
				mes "[Moogang]";
				mes "Feche os olhos.";
				mes "Procure sentir o vento";
				mes "Abra seus braços e abrace o céu.";
				mes "Você consegue sentir?";
				mes "Sentr o fluxo do cosmos?";
				next;
				mes "[Moogang]";
				mes "As leis da natureza não podem ser quebradas.";
				mes "Mas à medida que a sua natureza cresce.";
				mes "Você poderá entender a luz solar, segurar a luz da lua e moldar a luz das estrelas.";
				mes "Este teste para ajudar-l"+(Sex == SEX_MALE ? "o":"a")+" a se sintonizar...";
				next;
				mes "[Moogang]";
				mes "Vá e colecione o poder da natureza dispersa ao redor do mundo.";
				mes "Traga-me pedaços do vento agitado, terra sólida, congelante de gelo e do fogo ardente.";
				next;
				mes "[Moogang]";
				mes "Traga-me...";
				mes "^4d4dff1 Vento Bruto^000000.";
				mes "^4d4dff1 Natureza Grandiosa^000000.";
				mes "^4d4dff1 Gelo Místico^000000.";
				mes "^4d4dff1 Coração Flamejante^000000.";
				sgladiatorq = 2;
				changequest (7007,7008);
				close;
			}
			mes "[Moogang]";
			mes "Eu respeito sua decisão embora não vejo razão para você hesitar.";
			mes "Mas como as fases da lua.";
			mes "Tudas alterações devem ocorrer de acordo com ao grande esquema das coisas.";
			close;
		}
		else if (sgladiatorq == 2) {
			if (countitem(Rough_Wind) && countitem(Great_Nature) && countitem(Mistic_Frozen) && countitem(Flame_Heart)) {
				mes "[Moogang]";
				mes "Ah, você completou a tarefa que eu confiei para você.";
				mes "Muito bom.";
				mes "Agora, enquanto juntava estes fragmentos do vento, da terra, do gelo e da chama.";
				mes "Você sentiu o ligação entre eles?";
				next;
				mes "[Moogang]";
				mes "Os ventos são gentis e brisas reconfortantes ou furacões destrutivos.";
				mes "Terra é o terreno sólido em que toda vida vive, mas também pode afundar e agitar edifícios.";
				next;
				mes "[Moogang]";
				mes "A água dá vida e fornece refrigeração refrescante, mas pode também pode afogar e congelam a vida.";
				mes "O fogo pode trazer um calor reconfortante, mas também pode reduzir a vida em cinzas.";
				mes "Tal assim é a natureza.";
				next;
				mes "[Moogang]";
				mes "Este é o poder da natureza.";
				mes "Qualquer força pode ser usada para fazer o bem ou mal.";
				mes "Dependendo de como você exerce isso.";
				mes "Então pode entender agora?";
				mes "É assim que o universo está entrelaçado.";
				next;
				mes "[Moogang]";
				mes "No entanto, o mais primordial.";
				mes "Os elementos mais puros do nosso universo são equiparados ao cosmos:";
				mes "O sol, a lua e as estrelas.";
				mes "Contemple sobre esta verdade por um tempo...";
				next;
				mes "[Moogang]";
				mes "Com a realização de a natureza do universo vem o respeito por todas as coisas.";
				mes "Agora, quando você estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para o próximo.";
				mes "Guiarei então seu caminho.";
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
			mes "Quero que você entenda sua harmonia inata um com o outro";
			next;
			mes "[Moogang]";
			mes "Traga-me...";
			mes "^4d4dff1 Vento Bruto^000000.";
			mes "^4d4dff1 Natureza Grandiosa^000000.";
			mes "^4d4dff1 Gelo Místico^000000.";
			mes "^4d4dff1 Coração Flamejante^000000.";
			close;
		} else if (sgladiatorq == 3) {
			mes "[Moogang]";
			mes "Você está pront"+(Sex == SEX_MALE ? "o":"a")+" para o próximo teste?";
			mes "Eu devo guiá-lo para o altar.";
			next;
			if (select("Não, preciso de mais tempo!","Sim, estou") == 1) {
				mes "[Moogang]";
				mes "Bem, então, por favor fale comigo quando você quiser prosseguir.";
				close;
			}
			mes "[Moogang]";
			mes "No altar, fale para Daru, que servirá como seu guia.";
			mes "Depois de concluir o teste, venha falar comigo novamente.";
			close2;
			warp ("job_star",34,12);
			end;
		} else if (sgladiatorq > 3 && sgladiatorq < 7) {
			mes "[Moogang]";
			mes "Quão estranho...";
			mes "Você não pode ter completado o teste ainda.";
			mes "Ah, algo deve ter acontecido.";
			mes "Vou enviar você de volta ao altar para que Daru possa testá-l"+(Sex == SEX_MALE ? "o":"a")+".";
			close2;
			warp ("job_star",34,12);
			end;
		} else if (sgladiatorq == 7) {
			mes "[Moogang]";
			mes "Hmm...";
			mes "Você parece está te incomodando";
			mes "Ah, você deve estar pensando sobre o enigma de Beeryu, sim?";
			mes "Você é a única pessoa que pode encontrar a resposta...";
			next;
			mes "[Moogang]";
			mes "Talvez seja melhor para você ir falar com ^4d4dffMoohyun^000000 em Payon.";
			mes "Para que possa entender o de Beeryu em relação ao valor da paciência.";
			next;
			mes "[Moogang]";
			mes "Depois de descobrir o significado da paciência que Beeryu quer que você encontre.";
			mes "Volte para mim para que eu possa enviar você de volta para a Sala da lua.";
			close;
		} else if (sgladiatorq == 8) {
			mes "[Moogang]";
			mes "Ah, eu vejo que Moohyun ajudou você a alcançar um novo nível de compreensão.";
			mes "Muito bem, muito bem.";
			mes "Deixe-me enviá-l"+(Sex == SEX_MALE ? "o":"a")+" para a sala da lua.";
			mes "Onde Beeryu está esperando...";
			close2;
			warp ("job_star",100,13);
			end;
		} else if (sgladiatorq == 9 || sgladiatorq == 11) {
			mes "[Moogang]";
			mes "Gostaria de retornar a Sala das estrelas para completar seu treinamento?";
			next;
			if (select("Sim, por favor","Talvez mais tarde") == 1) {
				mes "[Moogang]";
				mes "Não perca o coração...";
				mes "Espero que você possa alcançar seu objetivo tornando-se Mestre-Taekwon.";
				close2;
				warp ("job_star",166,29);
				end;
			}
			mes "[Moogang]";
			mes "Bem, quando sua mente, corpo e espírito estiverem preparados.";
			mes "Por favor, venha e fale comigo novamente.";
			close;
		} else if (sgladiatorq == 10) {
			mes "[Moogang]";
			mes "Ah, você veio aqui para falar com Cheehee.";
			mes "Você gostaria que eu enviasse você para Sala da Estrela agora?";
			next;
			if (select("Sim, por favor","Talvez mais tarde.") == 1) {
				mes "[Moogang]";
				mes "Não perca o coração...";
				mes "Espero que você possa alcançar seu objetivo tornando-se Mestre-Taekwon.";
				close2;
				warp ("job_star",166,29);
				end;
			}
			mes "[Moogang]";
			mes "Bem, quando sua mente, corpo e espírito estiverem preparados.";
			mes "Por favor, venha e fale comigo novamente.";
			close;
		} else if (sgladiatorq == 12) {
			if (SkillPoint) {
				mes "[Moogang]";
				mes "Hm? Você ainda tem Pontos de Habilidade ainda não usados.";
				mes "Use-os, e melhore suas habilidades atuais.";
				mes "Quando terminar, volte aqui para o treinamento.";
				close;
			}
			mes "[Moogang]";
			mes "Ah, você retornou mais sábio e mais sintonizado com a natureza do que antes.";
			mes "Sim, eu posso ver em seus olhos.";
			mes "Então, diga-me, o que você aprendeu?";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu posso sentir o vínculo entre o Sol, a Lua e as Estrelas.";
			mes "Todos dão luz, mas concedem diferentes coisas.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "O sol dá glória calor e é a fonte da vida.";
			mes "A luz do luar é gentil e dá conforto.";
			mes "O brilho das estrelas dá esperança até as noites mais sombrias";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu também conheço o Sol escaldante, destrutivo calor.";
			mes "A solidão de a lua e a tristeza das Estrelas.";
			mes "Agora entendo o espectro do cosmos!";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "A raiva combinada com cosmos pode convocar uma completa escuridão";
			mes "O amor combinado com cosmos dará uma infinidade de bênção e luz...";
			next;
			mes "[Moogang]";
			mes "Não posso pedir qualquer coisa a mais.";
			mes "Você já é "+(Sex == SEX_MALE ? "um Guerreiro":"uma Guerreira")+" do Sol, da Lua e das estrelas.";
			jobchange (Job_Star_Gladiator);
			completequest (7011);
			callfunc ("ClearJobQuest2nd",4047);
			next;
			mes "[Moogang]";
			mes "A partir de agora, faça suas decisões com muito cuidado.";
			mes "O que você decide e determinará o curso de toda a sua vida.";
			mes "Além disso, nunca esqueça disso...";
			next;
			mes "[Moogang]";
			mes "^4d4dffO Sol brilha em dias pares.";
			mes "A Lua brilha em dias estranhos.";
			mes "As Estrelas brilham a cada cinco dias.^000000";
			next;
			mes "[Moogang]";
			mes "Isso é tudo o que posso compartilhar com você.";
			mes "Nunca se esqueça de que nós somos.";
			mes "Como Mestre-Taekwon não pode existir separadamente do Sol, a Lua e das Estrelas...";
			close;
		}
		mes "[Moogang]";
		mes "Oh, olá.";
		mes "Você é um estudante de Taekwon Do?";
		mes "É legal conhecer você.";
		next;
		mes "[Moogang]";
		mes "Um...";
		mes "Você já considerado tornar-se...";
		mes "Um... Não.";
		mes "Aguarde. Hmmm...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Huh...?";
		next;
		mes "[Moogang]";
		mes "Oh, eu sempre tenho um pouco de problema ao falar com outras pessoas.";
		mes "Agora, por que não você fala com o meu bem amigo, Moohyun?";
		next;
		mes "[Moogang]";
		mes "É só...";
		mes "Estou tão animado!";
		mes "Há todas as chances que você pode possivelmente seja o guerreiro que estou procurando";
		close;
	} else if (BaseJob == Job_Star_Gladiator) {
		mes "[Moogang]";
		mes "Mantenha meu conselho em mente e sempre tenha cuidado quando você toma decisões.";
		mes "Para não se arrepender mais tarde em sua vida...";
		next;
		mes "[Moogang]";
		mes "A proposíto gostaria de ir a alguma sala?";
		next;
		switch(select("Não","Para a Sala do Sol!","Para a Sala da Lua!","Para a Sala das estrelas!")) {
			case 1:
			mes "[Moogang]";
			mes "Tudo bem.";
			mes "Eu sempre estarei aqui.";
			mes "Então sempre que você quiser ir a qualquer um esses lugares.";
			mes "Apenas venha e fale comigo.";
			mes "Adeus.";
			close;
			case 2:
			mes "[Moogang]";
			mes "Ah, você deve perder o calor glorioso do sol, eh?";
			mes "Deixe-me ter enviar para lá imediatamente...";
			close2;
			warp ("job_star",34,12);
			end;
			case 3:
			mes "[Moogang]";
			mes "Hm? Você precisa da luz calmante da Lua?";
			mes "Então, espero que você encontre a paz em sua influência calmante...";
			close2;
			warp ("job_star",100,13);
			end;
			case 4:
			mes "[Moogang]";
			mes "Ah, inúmeras razões para o motivo pelo qual você gostaria de ver o brilho das estrelas.";
			mes "Bem, deixe-me enviar você para a Sala das Estrelas imediatamente.";
			close2;
			warp ("job_star",166,29);
			end;
		}
	}
	mes "[Mestre Andarilho]";
	mes "Você gosta de caminhar?";
	mes "O ar fresco, a libertação encontrada em vaguear e a beleza natural são todos benefícios bem-vindos.";
	next;
	mes "[Mestre Andarilho]";
	mes "Claro, não posso apreciar o luar e a luz das estrelas sobre as caminhadas noturnas.";
	mes "Bem, então, o Sol, a Lua e as Estrelas o protejam em todas as suas jornadas.";
	close;
}

// ------------------------------------------------------------------
job_star,29,33,0	script	Daru#sgladiatorq	1_M_ORIENT01,{
	if (Class == Job_Taekwon) {
		if (sgladiatorq == 3) {
			mes "[Daru]";
			mes "Ah, saudações.";
			mes "Eu sou Daru, e eu vou ser o seu guia nessa local.";
			mes "Para este teste, você deve abrir os olhos e responder minhas perguntas.";
			mes "Vamos começar.";
			next;
			mes "[Daru]";
			mes "Diga-me.";
			mes "O que é isso que você vê?";
			next;
			switch(select("O Sol","A Lua","As Estrelas","Não faço idéia")) {
				case 1:
				mes "[Daru]";
				mes "Sim! É o sol!";
				mes "Suponho que você possa pensar na humanidade como filhos do sol.";
				mes "Bom, muito bom...";
				.@sun_point += 10;
				break;
				case 2:
				mes "[Daru]";
				mes "O... A lua?";
				mes "Mm. Mas esta é a sala do sol.";
				break;
				case 3:
				mes "[Daru]";
				mes "Estrelas?";
				mes "Bem, suponho que você possa pensar no Sol como uma das milhares de estrelas no universo...";
				.@sun_point += 5;
				break;
				case 4:
				mes "[Daru]";
				mes "Não... idéia?";
				mes "Você deve abrir sua mente, bem como seus olhos.";
				mes "Pelo menos deveria tentar adivinhar uma resposta...";
			}
			next;
			mes "[Daru]";
			mes "Agora, não há nada que possa viver sem o sol.";
			mes "Você sabe do que mais precisamos do sol?";
			next;
			switch(select("Calor","Conforto","Luz","Nada")) {
				case 1:
				mes "[Daru]";
				mes "Sem o calor do sol, nosso mundo não só é frio, mas seria completamente sem vida.";
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
				mes "Sem a gloriosa luz do sol, não veríamos nada.";
				mes "Não saberíamos nada.";
				mes "Não seríamos nada.";
				.@sun_point += 10;
				break;
				case 4:
				mes "[Daru]";
				mes "A resposta deve vir de seu coração, ao invés de sua mente.";
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
			mes "^4d4dffUm deserto é um lugar solar, suas areias são beijadas pelo Sol.";
			mes "Um pântano é um lugar lunar, seus lobos conduzidos pela Lua.";
			mes "Uma caverna profunda é um lugar estelar, seus cavaleiros encantados por Estrelas^000000.";
			next;
			mes "[Daru]";
			mes "Agora, qual das seguintes combinações está correta?";
			mes "Pense com cuidado...";
			next;
			if (select("Pântano, Cavaleiro","Deserto, Areia","Deseto, Cavaleiro","Caverna, Lobos") == 2) {
				.@sun_point += 10;
			}
			mes "[Daru]";
			mes "Bem, isso será tudo.";
			mes "Eu não posso saber tudo o que há para saber sobre você através de apenas 3 perguntas...";
			mes "Mas isso deve se adequar aos nossos propósitos por enquanto.";
			next;
			if (.@sun_point == 30) {
				mes "[Daru]";
				mes "Eu admito que estou impressionado com a sua compreensão do Sol.";
				mes "É a fonte de toda a vida, a origem do calor e conforto.";
				mes "Agora, deixe-me levá-l"+(Sex == SEX_MALE ? "o":"a")+" para a sala da lua.";
				sgladiatorq = 4;
				close2;
				warp (strnpcinfo(NPC_MAP),100,13);
				end;
			} else if (.@sun_point == 25) {
				mes "[Daru]";
				mes "Embora sua compreensão do Sol não seja perfeita.";
				mes "Você parece entender a idéia de que é a fonte do calor e da vida em nosso mundo.";
				next;
				mes "[Daru]";
				mes "Essa idéia é um dos conceitos básicos que lhe ajudará.";
				mes "A ter mais sincronia com o poder do cosmos.";
				mes "Agora, venha até a sala da lua ...";
				sgladiatorq = 4;
				close2;
				warp (strnpcinfo(NPC_MAP),100,13);
				end;
			}
			mes "[Daru]";
			mes "Hmm..";
			mes "Se você não entende o papel do sol no universo e no mundo humano.";
			mes "Você estará sempre fora de contato com a natureza e com o cosmos.";
			next;
			mes "[Daru]";
			mes "Eu aconselho você a meditar cuidadosamente sobre as verdades fundamentais da natureza.";
			mes "Antes de me falar mais uma vez.";
			mes "Contemple o poder infinito do sol...";
			sgladiatorq = 5;
			close;
		} else if (sgladiatorq == 4) {
			mes "[Daru]";
			mes "Não é mais necessário que permaneçamos aqui.";
			mes "Vamos para a Sala da Lua juntos.";
			close2;
			warp (strnpcinfo(NPC_MAP),100,13);
			end;
		} else if (sgladiatorq == 5) {
			switch (rand(10)) {
				case 3:
				mes "[Daru]";
				mes "Acredito que você gastou tempo suficiente refletindo sobre a glória do Sol.";
				mes "E da sua importância para os humanos e para o mundo.";
				mes "Agora, vamos para a Sala da Lua.";
				sgladiatorq = 4;
				close2;
				warp (strnpcinfo(NPC_MAP),100,13);
				end;
				default:
				mes "[Daru]";
				mes "Relaxe cada músculo em seu corpo.";
				mes "Feche seus olhos.";
				mes "Sinta o calor do Sol contra suas pálpebras enquanto medita sobre seu papel no mundo.";
				mes "E seu lugar no cosmos.";
				close;
			}
		} else if (sgladiatorq == 6) {
			mes "[Daru]";
			mes "Hm?";
			mes "Não há mais nada para se fazer na Sala do Sol.";
			mes "Vamos para a Sala das Estrelas agora...";
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		} else if (sgladiatorq == 7) {
			mes "[Daru]";
			mes "Ah, Beeryu deve ter lhe dado o enigma para resolver.";
			mes "Bem, você precisará voltar para a cidade para descobrir a resposta.";
			mes "Então deixe-me enviar você agora.";
			close2;
			warp ("payon",164,58);
			end;
		} else if (sgladiatorq == 8) {
			mes "[Daru]";
			mes "Hm? Beeryu está esperando você na sala da lua.";
			mes "Deixe-me enviar-lhe para lá agora...";
			close2;
			warp (strnpcinfo(NPC_MAP),100,13);
			end;
		} else if (sgladiatorq > 8 && sgladiatorq < 12) {
			mes "[Daru]";
			mes "Não posso culpá-l"+(Sex == SEX_MALE ? "o":"a")+", se você gosta tanto da Sala do Sol.";
			mes "Mas agora é a hora de você ir para Sala das Estrelas.";
			mes "Vou enviar você para lá...";
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		}
		mes "[Daru]";
		mes "Não posso culpá-l"+(Sex == SEX_MALE ? "o":"a")+", se você gosta tanto da Sala do Sol.";
		mes "Mas você tem uma tarefa muito importante para completar agora.";
		mes "Deixe-me enviar você para a cidade.";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Daru]";
	mes "Enquanto você está aqui, peço que você não interfira com ninguém.";
	mes "Que possa estar fazendo o teste de mudança de classe.";
	mes "Então, você gostaria de voltar para a cidade?";
	next;
	if (select("Ir para Payon","Cancelar") == 1) {
		mes "[Daru]";
		mes "Deixe-me ter guiar de volta para Payon, então.";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Daru]";
	mes "Por favor, fique o tempo necessário e aproveite o esplendor do Sol enquanto estiver aqui.";
	close;
}

// ------------------------------------------------------------------
job_star,95,33,0	script	Beeryu#sgladiatorq	1_M_MOC_LORD,{
	if (Class == Job_Taekwon) {
		if (sgladiatorq == 4) {
			mes "[Beeryu]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à Sala da Lua.";
			mes "Sou Beeryu, seu guia neste santuário.";
			mes "Devo fazer uma série de perguntas, então pense com atenção antes de me dar sua resposta sincera.";
			next;
			mes "[Beeryu]";
			mes "Que Lua precisamos mais?";
			mes "Pense nos diferentes tons da lua, e como isso muda em certas noites.";
			next;
			switch(select("Lua Vermelha","Lua Azul","Lua Dourada","...?")) {
				case 1:
				mes "[Beeryu]";
				mes "A Lua Vermelha ...?";
				mes "É uma visão temível, geralmente comparada a encharcar o céu com a cor do sangue.";
				mes "A Lua Vermelha agita sentimentos escuros que não devemos abraçar completamente ...";
				break;
				case 2:
				mes "[Beeryu]";
				mes "A Lua Azul ...?";
				mes "Ah, sim.";
				mes "É uma lua calma e gentil, cuja suave luz ajuda você a pensar com clareza.";
				mes "É uma lua de descanso pacífico ...";
				.@moon_point += 10;
				break;
				case 3:
				mes "[Beeryu] A Lua dourada...?";
				mes "Ah, essa é uma lua de riqueza.";
				mes "Agora, aspirar a alcançar a prosperidade é natural e cumprir suas aspirações é o pináculo da vida.";
				.@moon_point += 10;
				break;
				case 4:
				mes "[Beeryu]";
				mes "Hmm ...?";
				mes "Você não tem uma opinião sobre a Lua?";
				mes "Você deve estar confiante e me dizer qual sombra da lua que você gosta ...";
			}
			next;
			mes "[Beeryu]";
			mes "Agora, se as sombras da Lua lhe emprestaram seu poder.";
			mes "Para que fim você usaria o poder do cosmos lunar?";
			next;
			switch(select("Justiça","Prática","Preservação","Vingança")) {
				case 1:
				mes "[Beeryu]";
				mes "Sim.";
				mes "A justiça é sempre um fim que vale a pena lutar.";
				mes "Basta lembrar que tanto o poder como a compaixão.";
				mes "São obrigados a prometer a mais verdadeira forma de justiça.";
				.@moon_point += 10;
				break;
				case 2:
				mes "[Beeryu]";
				mes "Treinamento?";
				mes "Essa é uma resposta aceitável.";
				mes "No entanto, você nunca deve esquecer suas razões para alcançar seu próprio domínio.";
				mes "Senão você perde seu caminho.";
				.@moon_point += 10;
				break;
				case 3:
				mes "[Beeryu]";
				mes "A preservação da natureza é responsabilidade de todos os seres vivos.";
				mes "No entanto, esperava uma resposta diferente em termos do como arte marcial...";
				break;
				case 4:
				mes "[Beeryu]";
				mes "Às vezes, a vingança pode parecer o melhor curso de ação.";
				mes "Especialmente se for levado caba interesse da justiça.";
				mes "No entanto, a vingança por si só é geralmente inquebrável.";
				next;
				mes "[Beeryu]";
				mes "Pergunte a si mesmo:";
				mes "O que você fará depois que você conseguir sua vingança?";
				mes "Quando você deixa sua fúria arder com você, você inflige o máximo de dano a si mesmo...";
				break;
			}
			next;
			mes "[Beeryu]";
			mes "Agora, ouça atentamente.";
			mes "Estou certo de que Daru já falou isso para você...";
			next;
			mes "[Beeryu]";
			mes "^4d4dff O Sol brilha em dias pares.";
			mes "A Lua brilha em dias estranhos.";
			mes "As Estrelas brilham todos os quinto dias sem falhas^000000.";
			next;
			mes "[Beeryu]";
			mes "^4d4dff Um deserto é um lugar solar, suas areias beijadas pelo Sol.";
			mes "Um pântano é um lugar lunar, seus lobos conduzidos pela Lua.";
			mes "Uma caverna profunda é um lugar estelar, seus cavaleiros encantados por Estrelas^000000.";
			next;
			mes "[Beeryu]";
			mes "De acordo com estas letras, quais são as que mais fortemente evoca a luz da lua?";
			next;
			if (select("Pântano, Cavaleiros","Deserto, Areia","Caverna, Cavaleiro","Pântano, Lobos") == 4) {
				.@moon_point += 10;
			}
			mes "[Beeryu]";
			mes "Bem, eu fiz as perguntas que eu queria fazer a você.";
			mes "Entanda o seguinte:";
			if (.@moon_point > 20) {
				mes "O vínculo entre o luar com as sombras da lua.";
				mes "Então, você se tornará um mestre.";
				next;
				mes "[Beeryu]";
				mes "O suave luar ilumina a noite mais escura.";
				mes "As sombras da lua equilibram o brilho glorioso do Sol.";
				mes "Sabedoria para o poder, frieza para raiva.";
				mes "Contemple sobre isso...";
				next;
				mes "[Beeryu]";
				mes "Tenho fé que você logo se tornará um grande Mestre de Taekwon.";
				mes "Agora, chegou a hora de entrar na Sala das Estrelas.";
				mes "Venha, me siga...";
				sgladiatorq = 6;
				close2;
				warp (strnpcinfo(NPC_MAP),166,29);
				end;
			}
			mes "Para ser tão paciente e gentil quanto o suave brilho da lua";
			next;
			mes "[Beeryu]";
			mes "Por favor, pense sobre isso de forma séria.";
			mes "Um verdadeiro Mestre de Taekwon pode exibir calma mental em todas as situações.";
			mes "Não importa quais sejam as apostas.";
			next;
			mes "[Beeryu]";
			mes "Agora, eu quero que você aproveite a chance de praticar a mentalidade lunar.";
			mes "Acalme seus pensamentos e conserte sua mente ativa...";
			next;
			mes "[Beeryu]";
			mes "Por enquanto, vou mandar você para Payon.";
			mes "Sair e aprender o significado verdadeiro da paciência^000000.";
			mes "Então, quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Fale com Moogang para que ele possa ter enviar para mim.";
			sgladiatorq = 7;
			close2;
			warp ("payon",164,58);
			end;
		} else if (sgladiatorq == 5) {
			mes "[Beeryu]";
			mes "Você deve primeiro testar a Sala do Sol antes de ser testado aqui na Sala da Lua.";
			mes "Deixe-me enviar você para onde deve ir...";
			close2;
			warp (strnpcinfo(NPC_MAP),34,12);
			end;
		} else if (sgladiatorq == 6) {
			mes "[Beeryu]";
			mes "Como você ainda está aqui?";
			mes "A luz da lua cheia traz conforto.";
			mes "Mas você deve seguir em frente se quiser se tornar um Mestre de Taekwon.";
			mes "Venha, enviarei você para a Sala das Estrelas.";
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		} else if (sgladiatorq == 7) {
			mes "[Beeryu]";
			mes "Eu quero que você me traga a prova de que você entende a natureza da paciência associada à lua.";
			mes "Você não pode se tornar um Mestre Taekwon sem essa atitude...";
			next;
			mes "[Beeryu]";
			mes "A prova que eu quero que me mostre seja concreta e indiscutível.";
			mes "Pense no que poderia ser.";
			mes "Agora, eu enviarei de volta à cidade...";
			close2;
			warp ("payon",164,58);
			end;
		} else if (sgladiatorq == 8) {
			mes "[Beeryu]";
			mes "Ah, você finalmente retornou.";
			mes "Posso ver na maneira como você se carrega que sua determinação foi fortalecida.";
			mes "Espero que você conheça paciência...";
			next;
			mes "[Beeryu]";
			mes "A paciência e a resolução são necessárias para viver a vida sem arrependimentos.";
			mes "Você deve acreditar em si mesmo.";
			mes "Ao mesmo tempo que é considerado e compreensivo dos outros em harmonia cósmica.";
			next;
			mes "[Beeryu]";
			mes "Aprenda a controlar o seu poder através do treinamento espiritual.";
			mes "Saiba como se orgulhar sem arrogância.";
			mes "Então eu vou mandar você para Cheehee agora.";
			sgladiatorq = 6;
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		} else if (sgladiatorq > 8 && sgladiatorq < 12) {
			mes "[Beeryu]";
			mes "Você deveria estar recebendo a tutela de Cheehee na Sala das Estrelas agora.";
			mes "Venha, deixe-me te guiar até lá.";
			close2;
			warp (strnpcinfo(NPC_MAP),166,29);
			end;
		}
		mes "[Beeryu]";
		mes "Por que você ainda está aqui?";
		mes "Você tem algo muito mais importante para fazer.";
		mes "Então deixe-me enviar de volta à cidade...";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Beeryu]";
	mes "Tente não incomodar aqueles que querem completar o seu teste de mudança de classe enquanto você está aqui.";
	mes "Ah, e me avise quando você quer voltar para Payon.";
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
			mes "Você não acha que as estrelas são tão bonitas?";
			mes "Eles são como lágrimas de uma linda garota em um fundo de céu preto e preto...";
			sgladiatorq = 9;
			close;
		} else if (sgladiatorq == 9) {
			if (rand(1,5) == 3) {
				mes "[Cheehee]";
				mes "O teste que tenho para você é simples.";
				mes "Apenas me traga os itens desta terra que vêm das estrelas.";
				mes "Traga-me um pedaço de estrela e a areia de uma estrela...";
				sgladiatorq = 10;
				changequest (7009,7010);
				close;
			}
			mes "[Cheehee]";
			mes "...............";
			next;
			mes "^777777Chequehee está parado, olhando o céu como se estivesse contando cada estrela brilhante nos céus^000000.";
			close;
		} else if (sgladiatorq == 10) {
			if (countitem(Star_Crumb) > 0 && countitem(Sparkling_Dust) > 0) {
				mes "[Cheehee]";
				mes "Oh! Você trouxe exatamente o que eu pedi para você trazer?";
				mes "Você sabia que o espírito das estrelas.";
				mes "É usado para melhorar as armaduras e armas que todos os aventureiros usam na batalha?";
				next;
				mes "[Cheehee]";
				mes "As estrelas estão ligadas às idéias de desejos, sonhos, esperanças, magia e romance.";
				mes "Ocasionalmente, as estrelas podem ser tristes, mas é uma tristeza muito doce...";
				delitem (Star_Crumb,1);
				delitem (Sparkling_Dust,1);
				sgladiatorq = 11;
				close;
			}
			mes "[Cheehee]";
			mes "As peças das estrelas...";
			mes "A areia das estrelas.";
			mes "Se você não as trouxe com você, então você não as encontrará aqui.";
			mes "Você terá que sair para encontrá-las lá antes de trazê-los para mim. ";
			close2;
			warp ("payon",164,58);
			end;
		} else if (sgladiatorq == 11) {
			mes "[Cheehee]";
			mes "Você já pensou na idéia de sentir tristeza nas estrelas?";
			mes "Talvez essas palavras ajude a entender melhor, embora eu saiba que você já deve ter ouvido...";
			next;
			mes "[Cheehee]";
			mes "^4d4dffO Sol brilha em dias pares.";
			mes "A Lua brilha em dias ímpares.";
			mes "As Estrelas brilham a cada quinto dia sem falhas.^000000";
			next;
			mes "[Cheehee]";
			mes "^4d4dffUm deserto é um lugar solar, suas areias são beijadas pelo Sol.";
			mes "Um pântano é um lugar lunar, seus lobos são conduzidos pela Lua.";
			mes "Uma caverna profunda é um lugar estelar, seus cavaleiros são encantados por Estrelas^000000.";
			next;
			mes "[Cheehee]";
			mes "Agora...";
			mes "Qual dos seguintes conbinações tem mais haver com a luz das estrelas?";
			next;
			if (select("Caverna, Areia","Deserto, Areia","Caverna, Cavaleiro","Deserto, Cavaleiro") == 3) {
				mes "[Cheehee]";
				mes "Você está certo.";
				mes "A combinação do 25º dia, um múltiplo do número 5 e os Cavaleiros em uma caverna brilha mais brilhante com a luz das estrelas.";
				next;
				mes "[Cheehee]";
				mes "Se você pode entender essas palavras.";
				mes "Você deve entender a essência de ser Mestre-Taekwon.";
				mes "Lembre-se que a luz vem em tons diferentes...";
				next;
				mes "[Cheehee]";
				mes "A glória do sol, o suave luar e os cintilantes melancólicos das estrelas.";
				mes "São únicos um do outro.";
				mes "Por favor, aproveite a luz das estrelas nesta sala enquanto você quiser.";
				next;
				mes "[Cheehee]";
				mes "Quando quiser, fale novamente com Moogang.";
				mes "Avisarei a ele saber que você completou nossos testes.";
				sgladiatorq = 12;
				changequest (7010,7011);
				close;
			}
			mes "[Cheehee]";
			mes "Hmm...";
			mes "Você deve aprender mais sobre a natureza das estrelas.";
			mes "Você deve entender o cosmos se você se tornar um Mestre Taekwon.";
			next;
			mes "[Cheehee]";
			mes "Se você pode entender essas palavras.";
			mes "Você deve entender a essência de ser Mestre-Taekwon.";
			mes "Lembre-se que a luz vem em tons diferentes...";
			next;
			mes "[Cheehee]";
			mes "A glória do sol, o suave luar e os cintilantes melancólicos das estrelas.";
			mes "São únicos um do outro.";
			mes "Por favor, aproveite a luz das estrelas nesta sala enquanto você quiser.";
			next;
			mes "[Cheehee]";
			mes "Quando quiser, fale novamente com Moogang.";
			mes "Avisarei a ele saber que você completou nossos testes.";
			sgladiatorq = 12;
			if (questprogress(7010)) { changequest (7010,7011); }
			close;
		} else if (sgladiatorq == 12) {
			mes "[Cheehee]";
			mes "Você deseja sair da Sala das Estrelas?";
			next;
			if (select("Sim","Não") == 1) {
				mes "[Cheehee]";
				mes "Então, vou guiar você para Payon, a cidade mais próxima.";
				close2;
				warp ("payon",164,58);
				end;
			}
			mes "[Cheehee]";
			mes "Por favor, aproveite seu tempo e aproveite a luz das estrelas neste sala...";
			close;
		}
		mes "[Cheehee]";
		mes "As estrelas certamente são lindas, não são?";
		mes "Você gostaria para retornar a Payon agora?";
		next;
		if (select("Sim","Não") == 1) {
			mes "[Cheehee]";
			mes "então. Guiarei você até Payon.";
			close2;
			warp ("payon",164,58);
			end;
		}
		mes "[Cheehee]";
		mes "Por favor, aproveite seu tempo e aproveite a luz das estrelas neste sala...";
		close;
	}
	mes "[Cheehee]";
	mes "As estrelas certamente são lindas, não são?";
	mes "Você gostaria para retornar a Payon agora?";
	next;
	if (select("Sim","Não") == 1) {
		mes "[Cheehee]";
		mes "então. Guiarei você até Payon.";
		close2;
		warp ("payon",164,58);
		end;
	}
	mes "[Cheehee]";
	mes "Por favor, aproveite seu tempo e aproveite a luz das estrelas neste sala...";
	close;
}

