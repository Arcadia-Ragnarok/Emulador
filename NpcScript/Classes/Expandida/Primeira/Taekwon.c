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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudança de Classe para Taekwon.                  |
\*-----------------------------------------------------------------*/

payon,157,141,5	script	Fênix#taekwonq	4_M_MONK,{
	if (Class == Job_Taekwon) {
		mes("[Fênix]\n"
			"Como vai seu treinamento?\n"
			"Enquanto suas técnicas se tornam mais refinadas e espetaculares.\n"
			"Nunca se esqueça que você pode sempre contar com o básico.");
		close;
	} else if (Class > Job_Novice) || (Class == Job_Novice && taekwonq == 0) {
		mes("[Fênix]\n"
			"Esta terra.\n"
			"Nosso único e belo mundo tem sido manchado pelo mal.\n"
			"Existem muitos homens corrompidos pelas trevas, demasiados monstros ameaçando os inocentes...");
		next;
		mes("[Fênix]\n"
			"O Caos que reina neste mundo é demais para humanos normais.\n"
			"Que não conseguem se defender de tais adversidades.\n"
			"Ainda assim, alguém deve aspirar a lutar contra essas adversidades.");
		next;
		mes("[Fênix]\n"
			"E então, me dediquei a ficar mais forte.\n"
			"Eu tenho treinado para atingir a iluminação.\n"
			"Desenvolvendo uma arte para aprimorar a mente e o corpo e que desejaria compartilhar com o mundo.");
		next;
		mes("[Fênix]\n"
			"Posso não ser capaz de mudar o mundo sozinho.\n"
			"Mas nunca pararei de me treinar espiritualmente e fisicamente.\n"
			"Eu sei que a resposta virá com o tempo...");
		next;
		if (Class != Job_Novice) {
			mes("[Fênix]\n"
				"Se você conhece alguém que ainda não escolheu seu caminho na vida, por favor, mande-o a mim.\n"
				"Se houver interesse, eu posso ensinar minha arte...");
			close;
		}
		mes("[Fênix]\n"
			"Se você ainda não decidiu o caminho que deseja tomar na vida.\n"
			"Eu gostaria que considerasse se tornar um praticante da minha arte.\n"
			"Não será fácil, mas o levará a um grande poder.");
		next;
		if (select("Ok, eu me juntarei a você", "Não, obrigado.") == 1) {
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Fênix]\n"
					"Que pena!\n"
					"Você não está preparado para começar a treinar sob minha orientação no seu atual Nível de Classe.\n"
					"Por favor, retorne quando atingir o Nível de Classe 9 ou maior.");
				close;
			}
			mes("[Fênix]\n"
				"Muito bem...\n"
				"Eu te aceito como meu aluno.\n"
				"Para começar o treinamento, seu físico deve ser primeiro condicionado a fim de realizar as habilidades que você aprenderá.");
			next;
			if (BaseLevel > 19) {
				mes("[Fênix]\n"
					"Hm. Vejo que você tem uma formação física suficiente como Aprendiz.\n"
					"Muito bem. Então vamos nos preparar para seu treinamento espiritual.\n"
					"Respire fundo, fale comigo quando estiver pronto.");
				taekwonq = 2;
				setquest(6001);
				close;
			}
			mes("[Fênix]\n"
				"A mente não está necessariamente vinculada aos limites do corpo.\n"
				"Mas você nunca alcançará seu verdadeiro potencial sem integrar mente e corpo.\n"
				"Vá, ganhe ^FF0000 mais alguns Níveis de Base^000000, e então retorne.");
			next;
			taekwonq_2 = BaseLevel;
			taekwonq = 1;
			setquest(6000);
			mes("[Fênix]\n"
				"Eu entendo que essa não é uma tarefa fácil para Aprendizes.\n"
				"Mas você deve se preparar para as dificuldades desta classe.\n"
				"Eu espero que você esteja mais forte na próxima vez que nos encontrarmos.");
			close;
		}
		mes("[Fênix]\n"
			"Entendo.\n"
			"A vida de alguém pode ter muitos caminhos.\n"
			"Mas você tem que escolher somente um para viajar por vez.\n"
			"Espero que você trabalhe rumo à iluminação no seu próprio caminho, aventureiro.");
		close;
	}
	switch (taekwonq) {
		case 1:
		if (BaseLevel > taekwonq_2) {
			taekwonq = 2;
			changequest(6000,6001);
			mes("[Fênix]\n"
				"Bom. Sinto que você está mais em sintonia com sua força interior.\n"
				"Este é o resultado natural de subir de nível.\n"
				"Estamos prontos para prosseguir com a próxima porção do treinamento.");
			close;
		}
		mes("[Fênix]\n"
			"Você tem que ganhar ^FF00001 mais um Nível de Base^000000 para provar que você pode suportar o sofrimento que esta classe carrega.\n"
			"Nunca negligencie seu treinamento.");
		close;
		case 2:
		mes("[Fênix]\n"
			"Para seu treinamento espiritual, eu farei uma série de perguntas para testar seu espírito.\n"
			"Relaxe...\n"
			"Responda da forma mais honesta possível.\n"
			"Sua vontades e convicções serão testadas.");
		next;
		mes("[Fênix]\n"
			"Como um praticante da minha arte, a habilidade para fazer a melhor decisão de forma rápida será necessária em batalha.\n"
			"Agora vamos começar o questionário.");
		next;
		mes("[Fênix]\n"
			"Quando você encontra uma grande dificuldade, como você geralmente reage?");
		next;
		switch (select("Eu a encaro de cabeça erguida", "Eu a evito de alguma maneira", "Analizo o problema.")) {
			case 1:
			mes("[Fênix]\n"
				"Sim, essa é a resposta que eu queria.\n"
				"Mesmo se você não puder lidar com um problema de início.\n"
				"Podemos beneficiar-nos de tal forte determinação.\n"
				"Não deixe nenhum obstáculo te parar.");
			next;
			mes("[Fênix]\n"
				"Mesmo que você falhe, pode aprender com a experiência de quando você deu o seu máximo.\n"
				"Tentativas tímidas raramente dão bons resultados.");
			next;
			mes("[Fênix]\n"
				"Visto que você já entendeu a importância da vontade de alguém.\n"
				"Vamos prosseguir para a próxima questão.");
			next;
			break;
			case 2:
			mes("[Fênix]\n"
				"Como você espera amadurecer se você corre dos desafios?\n"
				"O medo pode ser uma reação saudável que pode salvar sua vida, mas a verdadeira covardia é desprezível.");
			next;
			mes("[Fênix]\n"
				"Me desaponta ouvir o que você disse.\n"
				"Nunca me diga uma coisa dessas denovo.\n"
				"Contemple o significado de coragem e covardia, e depois fale comigo mais uma vez.");
			close;
			case 3:
			mes("[Fênix]\n"
				"Recompor?\n"
				"É bom fazer isso depois de ter sido derrotado.\n"
				"Mas é melhor encarar os problemas uma vez que os encontra.\n"
				"Você nem sempre terá o luxo de se recompor.");
			next;
			mes("[Fênix]\n"
				"Problemas podem ser previstos e analizados, mas eu penso que uma retirada imediata é imprudente.\n"
				"Reflita sobre seus medos, assim como o que você define como um fracasso.\n"
				"Em seguida, volte a mim.");
			close;
		}
		mes("[Fênix]\n"
			"Em suas viagens, você encontrará muitas pessoas com diferentes origens e pontos de vista.\n"
			"Inevitavelmente, você encontrará alguém cujo modo de vida que você não consegue entender.");
		next;
		mes("[Fênix]\n"
			"Da mesma maneira, está pessoa não entenderá seu modo de vida.\n"
			"Quando seus pois pontos de vida colidem, causando um conflito intenso, como você reagiria?");
		next;
		switch ( select("Insisto que estou certo", "Ignoro os pontos de vista", "Aceito as diferenças")) {
			case 1:
			mes("[Fênix]\n"
				"É importante ter sua própria opinião.\n"
				"Contudo, você tem que reconhecer que pode estar errado.\n"
				"Um ponto de vista oposto pode ter seus méritos.");
			next;
			mes("[Fênix]\n"
				"Não há uma resposta certa e a luz da verdade pode ter várias tonalidades.\n"
				"Assim é o caminho da natureza.\n"
				"Forçar ideias sobre os outros é uma prática opressiva.");
			next;
			mes("[Fênix]\n"
				"Não limite-se a um único ponto de vista, e não reprima seu crescimento aderindo a uma única verdade.\n"
				"Reflita sobre isso, e depois fale comigo denovo.");
			close;
			case 2:
			mes("[Fênix]\n"
				"É importante se dar bem com os outros.\n"
				"Mas você não vai trazer nenhum valor para esse mundo sem suas próprias contribuições.\n"
				"Pensamentos e opiniões únicas.");
			next;
			mes("[Fênix]\n"
				"Um conflito de ideais, quando conduzida com respeito por si mesmo e por outros.\n"
				"É uma grande oportunidade para ampliar sua compreensão do mundo, como ele é para os outros");
			next;
			mes("[Fênix]\n"
				"Reflita sobre essa ideia de estabelecer harmonia com si, e com os outros.\n"
				"Em seguida, volte a mim.");
			close;
			case 3:
			mes("[Fênix]\n"
				"Bom.\n"
				"Você deve ver as diferenças como elas verdadeiramente são.\n"
				"Também deve aceitar as críticas ao seu próprio ponto de vista com elegância e sincera consideração.");
			next;
			mes("[Fênix]\n"
				"É impossível saber tudo neste mundo e entender todo ponto de vista.\n"
				"Mas isso não significa que os pontos de vista que você não entende não têm valor");
			next;
			mes("[Fênix]\n"
				"Aquele que você discorda pode ter a resposta que você não sabe.\n"
				"No seu tempo de fraqueza, esta pessoa pode ser sua maior ajuda.\n"
				"Lembre-se disso.");
			next;
		}
		mes("[Fênix]\n"
			"Estou satisfeito com as respostas que me deu.\n"
			"Por favor, reflita sobre o que discutimos por algum tempo.\n"
			"Quando estiver com a mente calma, venha falar comigo.");
		taekwonq = 3;
		changequest(6001,6002);
		close;
		case 3:
		mes("[Fênix]\n"
			"Você está se sentindo em paz?\n"
			"Eu perguntarei a você uma questão muito importante.\n"
			"Me responda com honestidade.");
		next;
		mes("[Fênix]\n"
			"^FF0000Você está pront"+(Sex == SEX_MALE ? "o":"a")+" para se dedicar a arte especial que eu te ensinarei.\n"
			"E defender a dignidade de sua filosofia?");
		next;
		if ( select("Claro que sim", "Não") == 1) {
			mes("[Fênix]\n"
				"Muito bem.\n"
				"Você não é mais somente um aluno.\n"
				"Agora você está dotado dos poderes e responsabilidades de um discípulo do ^FF0000Taekwon Do^000000.");
			next;
			mes("[Fênix]\n"
				"Taekwon significa socos e chutes.\n"
				"Do significa arte ou caminho.\n"
				"Esta arte marcial é focada no uso das mãos e dos pés.");
			next;
			mes("[Fênix]\n"
				"Por favor, use esta disciplina para aprimorar seu corpo e mente e aprender as habilidades.\n"
				"Wue são as mais adequadas para você.\n"
				"Nunca evite seu treinamento, e nem traga vergonha para o Taekwon Do.");
			next;
			completequest(6002);
			getitem(Guard,1);
			jobchange(Job_Taekwon);
			callfunc("ClearJobQuest");
			mes("[Fênix]\n"
				"Você ainda é jovem, então suponho que queira uma classe.\n"
				"Hmm. Neste caso, você é agora um"+(Sex == SEX_MALE ? " ^FF0000Garoto Taekwon^000000" : "a ^FF0000Garota Taekwon^000000.")+".\n"
				"É, isso soa bem.");
			next;
			mes("[Fênix]\n"
				"Por favor, leve este uniforme de treinamento e este conjunto de protetores.\n"
				"Faça bom uso desses presentes.\n"
				"A medida que você viaja e treina, conte aos outros sobre a nossa arte e aprenda o que você puder com eles em troca.");
			next;
			mes("[Fênix]\n"
				"Agora é hora de você embarcar em sua própria jornada para encontrar novos desafios para aumentar sua força.\n"
				"Se comporte com o orgulho de um praticante do Taekwon Do.");
			next;
			mes("[Fênix]\n"
				"Muito bem.\n"
				"Desejo-lhe sorte.\n"
				"Esperto te ver novamente algum dia, "+strcharinfo(CHAR_NAME)+".");
			close;
		}
		mes("[Fênix]\n"
			"Hm, talvez você não esteja completamente pront"+(Sex == SEX_MALE ?"o":"a")+" para avançar do seu status de aluno para um verdadeiro discípulo.\n"
			"Quando se sentir preparado, venha falar comigo.");
		close;
	}
}
