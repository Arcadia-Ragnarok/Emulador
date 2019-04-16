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
| - Info: Quest de Mudan�a de Classe para Taekwon.                  |
\*-----------------------------------------------------------------*/

payon,157,141,5	script	F�nix#taekwonq	4_M_MONK,{
	if (Class == Job_Taekwon) {
		mes("[F�nix]\n"
			"Como vai seu treinamento?\n"
			"Enquanto suas t�cnicas se tornam mais refinadas e espetaculares.\n"
			"Nunca se esque�a que voc� pode sempre contar com o b�sico.");
		close;
	} else if (Class > Job_Novice) || (Class == Job_Novice && taekwonq == 0) {
		mes("[F�nix]\n"
			"Esta terra.\n"
			"Nosso �nico e belo mundo tem sido manchado pelo mal.\n"
			"Existem muitos homens corrompidos pelas trevas, demasiados monstros amea�ando os inocentes...");
		next;
		mes("[F�nix]\n"
			"O Caos que reina neste mundo � demais para humanos normais.\n"
			"Que n�o conseguem se defender de tais adversidades.\n"
			"Ainda assim, algu�m deve aspirar a lutar contra essas adversidades.");
		next;
		mes("[F�nix]\n"
			"E ent�o, me dediquei a ficar mais forte.\n"
			"Eu tenho treinado para atingir a ilumina��o.\n"
			"Desenvolvendo uma arte para aprimorar a mente e o corpo e que desejaria compartilhar com o mundo.");
		next;
		mes("[F�nix]\n"
			"Posso n�o ser capaz de mudar o mundo sozinho.\n"
			"Mas nunca pararei de me treinar espiritualmente e fisicamente.\n"
			"Eu sei que a resposta vir� com o tempo...");
		next;
		if (Class != Job_Novice) {
			mes("[F�nix]\n"
				"Se voc� conhece algu�m que ainda n�o escolheu seu caminho na vida, por favor, mande-o a mim.\n"
				"Se houver interesse, eu posso ensinar minha arte...");
			close;
		}
		mes("[F�nix]\n"
			"Se voc� ainda n�o decidiu o caminho que deseja tomar na vida.\n"
			"Eu gostaria que considerasse se tornar um praticante da minha arte.\n"
			"N�o ser� f�cil, mas o levar� a um grande poder.");
		next;
		if (select("Ok, eu me juntarei a voc�", "N�o, obrigado.") == 1) {
			if (getskilllv("NV_BASIC") < 9) {
				mes("[F�nix]\n"
					"Que pena!\n"
					"Voc� n�o est� preparado para come�ar a treinar sob minha orienta��o no seu atual N�vel de Classe.\n"
					"Por favor, retorne quando atingir o N�vel de Classe 9 ou maior.");
				close;
			}
			mes("[F�nix]\n"
				"Muito bem...\n"
				"Eu te aceito como meu aluno.\n"
				"Para come�ar o treinamento, seu f�sico deve ser primeiro condicionado a fim de realizar as habilidades que voc� aprender�.");
			next;
			if (BaseLevel > 19) {
				mes("[F�nix]\n"
					"Hm. Vejo que voc� tem uma forma��o f�sica suficiente como Aprendiz.\n"
					"Muito bem. Ent�o vamos nos preparar para seu treinamento espiritual.\n"
					"Respire fundo, fale comigo quando estiver pronto.");
				taekwonq = 2;
				setquest(6001);
				close;
			}
			mes("[F�nix]\n"
				"A mente n�o est� necessariamente vinculada aos limites do corpo.\n"
				"Mas voc� nunca alcan�ar� seu verdadeiro potencial sem integrar mente e corpo.\n"
				"V�, ganhe ^FF0000 mais alguns N�veis de Base^000000, e ent�o retorne.");
			next;
			taekwonq_2 = BaseLevel;
			taekwonq = 1;
			setquest(6000);
			mes("[F�nix]\n"
				"Eu entendo que essa n�o � uma tarefa f�cil para Aprendizes.\n"
				"Mas voc� deve se preparar para as dificuldades desta classe.\n"
				"Eu espero que voc� esteja mais forte na pr�xima vez que nos encontrarmos.");
			close;
		}
		mes("[F�nix]\n"
			"Entendo.\n"
			"A vida de algu�m pode ter muitos caminhos.\n"
			"Mas voc� tem que escolher somente um para viajar por vez.\n"
			"Espero que voc� trabalhe rumo � ilumina��o no seu pr�prio caminho, aventureiro.");
		close;
	}
	switch (taekwonq) {
		case 1:
		if (BaseLevel > taekwonq_2) {
			taekwonq = 2;
			changequest(6000,6001);
			mes("[F�nix]\n"
				"Bom. Sinto que voc� est� mais em sintonia com sua for�a interior.\n"
				"Este � o resultado natural de subir de n�vel.\n"
				"Estamos prontos para prosseguir com a pr�xima por��o do treinamento.");
			close;
		}
		mes("[F�nix]\n"
			"Voc� tem que ganhar ^FF00001 mais um N�vel de Base^000000 para provar que voc� pode suportar o sofrimento que esta classe carrega.\n"
			"Nunca negligencie seu treinamento.");
		close;
		case 2:
		mes("[F�nix]\n"
			"Para seu treinamento espiritual, eu farei uma s�rie de perguntas para testar seu esp�rito.\n"
			"Relaxe...\n"
			"Responda da forma mais honesta poss�vel.\n"
			"Sua vontades e convic��es ser�o testadas.");
		next;
		mes("[F�nix]\n"
			"Como um praticante da minha arte, a habilidade para fazer a melhor decis�o de forma r�pida ser� necess�ria em batalha.\n"
			"Agora vamos come�ar o question�rio.");
		next;
		mes("[F�nix]\n"
			"Quando voc� encontra uma grande dificuldade, como voc� geralmente reage?");
		next;
		switch (select("Eu a encaro de cabe�a erguida", "Eu a evito de alguma maneira", "Analizo o problema.")) {
			case 1:
			mes("[F�nix]\n"
				"Sim, essa � a resposta que eu queria.\n"
				"Mesmo se voc� n�o puder lidar com um problema de in�cio.\n"
				"Podemos beneficiar-nos de tal forte determina��o.\n"
				"N�o deixe nenhum obst�culo te parar.");
			next;
			mes("[F�nix]\n"
				"Mesmo que voc� falhe, pode aprender com a experi�ncia de quando voc� deu o seu m�ximo.\n"
				"Tentativas t�midas raramente d�o bons resultados.");
			next;
			mes("[F�nix]\n"
				"Visto que voc� j� entendeu a import�ncia da vontade de algu�m.\n"
				"Vamos prosseguir para a pr�xima quest�o.");
			next;
			break;
			case 2:
			mes("[F�nix]\n"
				"Como voc� espera amadurecer se voc� corre dos desafios?\n"
				"O medo pode ser uma rea��o saud�vel que pode salvar sua vida, mas a verdadeira covardia � desprez�vel.");
			next;
			mes("[F�nix]\n"
				"Me desaponta ouvir o que voc� disse.\n"
				"Nunca me diga uma coisa dessas denovo.\n"
				"Contemple o significado de coragem e covardia, e depois fale comigo mais uma vez.");
			close;
			case 3:
			mes("[F�nix]\n"
				"Recompor?\n"
				"� bom fazer isso depois de ter sido derrotado.\n"
				"Mas � melhor encarar os problemas uma vez que os encontra.\n"
				"Voc� nem sempre ter� o luxo de se recompor.");
			next;
			mes("[F�nix]\n"
				"Problemas podem ser previstos e analizados, mas eu penso que uma retirada imediata � imprudente.\n"
				"Reflita sobre seus medos, assim como o que voc� define como um fracasso.\n"
				"Em seguida, volte a mim.");
			close;
		}
		mes("[F�nix]\n"
			"Em suas viagens, voc� encontrar� muitas pessoas com diferentes origens e pontos de vista.\n"
			"Inevitavelmente, voc� encontrar� algu�m cujo modo de vida que voc� n�o consegue entender.");
		next;
		mes("[F�nix]\n"
			"Da mesma maneira, est� pessoa n�o entender� seu modo de vida.\n"
			"Quando seus pois pontos de vida colidem, causando um conflito intenso, como voc� reagiria?");
		next;
		switch ( select("Insisto que estou certo", "Ignoro os pontos de vista", "Aceito as diferen�as")) {
			case 1:
			mes("[F�nix]\n"
				"� importante ter sua pr�pria opini�o.\n"
				"Contudo, voc� tem que reconhecer que pode estar errado.\n"
				"Um ponto de vista oposto pode ter seus m�ritos.");
			next;
			mes("[F�nix]\n"
				"N�o h� uma resposta certa e a luz da verdade pode ter v�rias tonalidades.\n"
				"Assim � o caminho da natureza.\n"
				"For�ar ideias sobre os outros � uma pr�tica opressiva.");
			next;
			mes("[F�nix]\n"
				"N�o limite-se a um �nico ponto de vista, e n�o reprima seu crescimento aderindo a uma �nica verdade.\n"
				"Reflita sobre isso, e depois fale comigo denovo.");
			close;
			case 2:
			mes("[F�nix]\n"
				"� importante se dar bem com os outros.\n"
				"Mas voc� n�o vai trazer nenhum valor para esse mundo sem suas pr�prias contribui��es.\n"
				"Pensamentos e opini�es �nicas.");
			next;
			mes("[F�nix]\n"
				"Um conflito de ideais, quando conduzida com respeito por si mesmo e por outros.\n"
				"� uma grande oportunidade para ampliar sua compreens�o do mundo, como ele � para os outros");
			next;
			mes("[F�nix]\n"
				"Reflita sobre essa ideia de estabelecer harmonia com si, e com os outros.\n"
				"Em seguida, volte a mim.");
			close;
			case 3:
			mes("[F�nix]\n"
				"Bom.\n"
				"Voc� deve ver as diferen�as como elas verdadeiramente s�o.\n"
				"Tamb�m deve aceitar as cr�ticas ao seu pr�prio ponto de vista com eleg�ncia e sincera considera��o.");
			next;
			mes("[F�nix]\n"
				"� imposs�vel saber tudo neste mundo e entender todo ponto de vista.\n"
				"Mas isso n�o significa que os pontos de vista que voc� n�o entende n�o t�m valor");
			next;
			mes("[F�nix]\n"
				"Aquele que voc� discorda pode ter a resposta que voc� n�o sabe.\n"
				"No seu tempo de fraqueza, esta pessoa pode ser sua maior ajuda.\n"
				"Lembre-se disso.");
			next;
		}
		mes("[F�nix]\n"
			"Estou satisfeito com as respostas que me deu.\n"
			"Por favor, reflita sobre o que discutimos por algum tempo.\n"
			"Quando estiver com a mente calma, venha falar comigo.");
		taekwonq = 3;
		changequest(6001,6002);
		close;
		case 3:
		mes("[F�nix]\n"
			"Voc� est� se sentindo em paz?\n"
			"Eu perguntarei a voc� uma quest�o muito importante.\n"
			"Me responda com honestidade.");
		next;
		mes("[F�nix]\n"
			"^FF0000Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para se dedicar a arte especial que eu te ensinarei.\n"
			"E defender a dignidade de sua filosofia?");
		next;
		if ( select("Claro que sim", "N�o") == 1) {
			mes("[F�nix]\n"
				"Muito bem.\n"
				"Voc� n�o � mais somente um aluno.\n"
				"Agora voc� est� dotado dos poderes e responsabilidades de um disc�pulo do ^FF0000Taekwon Do^000000.");
			next;
			mes("[F�nix]\n"
				"Taekwon significa socos e chutes.\n"
				"Do significa arte ou caminho.\n"
				"Esta arte marcial � focada no uso das m�os e dos p�s.");
			next;
			mes("[F�nix]\n"
				"Por favor, use esta disciplina para aprimorar seu corpo e mente e aprender as habilidades.\n"
				"Wue s�o as mais adequadas para voc�.\n"
				"Nunca evite seu treinamento, e nem traga vergonha para o Taekwon Do.");
			next;
			completequest(6002);
			getitem(Guard,1);
			jobchange(Job_Taekwon);
			callfunc("ClearJobQuest");
			mes("[F�nix]\n"
				"Voc� ainda � jovem, ent�o suponho que queira uma classe.\n"
				"Hmm. Neste caso, voc� � agora um"+(Sex == SEX_MALE ? " ^FF0000Garoto Taekwon^000000" : "a ^FF0000Garota Taekwon^000000.")+".\n"
				"�, isso soa bem.");
			next;
			mes("[F�nix]\n"
				"Por favor, leve este uniforme de treinamento e este conjunto de protetores.\n"
				"Fa�a bom uso desses presentes.\n"
				"A medida que voc� viaja e treina, conte aos outros sobre a nossa arte e aprenda o que voc� puder com eles em troca.");
			next;
			mes("[F�nix]\n"
				"Agora � hora de voc� embarcar em sua pr�pria jornada para encontrar novos desafios para aumentar sua for�a.\n"
				"Se comporte com o orgulho de um praticante do Taekwon Do.");
			next;
			mes("[F�nix]\n"
				"Muito bem.\n"
				"Desejo-lhe sorte.\n"
				"Esperto te ver novamente algum dia, "+strcharinfo(CHAR_NAME)+".");
			close;
		}
		mes("[F�nix]\n"
			"Hm, talvez voc� n�o esteja completamente pront"+(Sex == SEX_MALE ?"o":"a")+" para avan�ar do seu status de aluno para um verdadeiro disc�pulo.\n"
			"Quando se sentir preparado, venha falar comigo.");
		close;
	}
}
