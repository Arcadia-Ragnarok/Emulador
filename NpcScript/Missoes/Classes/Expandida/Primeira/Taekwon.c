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
| - Info: Quest de Mudan�a de Classe para Taekwon.                  |
\*-----------------------------------------------------------------*/

payon,157,141,5	script	F�nix#taekwonq	4_M_MONK,{
	if(Class == Job_Taekwon) {
		mes "[F�nix]";
		mes "Como vai seu treinamento?";
		mes "Enquanto suas t�cnicas se tornam mais refinadas e espetaculares.";
		mes "Nunca se esque�a que voc� pode sempre contar com o b�sico.";
		close;
	} else if(Class > Job_Novice) || (Class == Job_Novice && taekwonq == 0) {
		mes "[F�nix]";
		mes "Esta terra.";
		mes "Nosso �nico e belo mundo tem sido manchado pelo mal.";
		mes "Existem muitos homens corrompidos pelas trevas, demasiados monstros amea�ando os inocentes...";
		next;
		mes "[F�nix]";
		mes "O Caos que reina neste mundo � demais para humanos normais.";
		mes "Que n�o conseguem se defender de tais adversidades.";
		mes "Ainda assim, algu�m deve aspirar a lutar contra essas adversidades.";
		next;
		mes "[F�nix]";
		mes "E ent�o, me dediquei a ficar mais forte.";
		mes "Eu tenho treinado para atingir a ilumina��o.";
		mes "Desenvolvendo uma arte para aprimorar a mente e o corpo e que desejaria compartilhar com o mundo.";
		next;
		mes "[F�nix]";
		mes "Posso n�o ser capaz de mudar o mundo sozinho.";
		mes "Mas nunca pararei de me treinar espiritualmente e fisicamente.";
		mes "Eu sei que a resposta vir� com o tempo...";
		next;
		if (Class != Job_Novice) {
			mes "[F�nix]";
			mes "Se voc� conhece algu�m que ainda n�o escolheu seu caminho na vida, por favor, mande-o a mim.";
			mes "Se houver interesse, eu posso ensinar minha arte...";
			close;
		}
		mes "[F�nix]";
		mes "Se voc� ainda n�o decidiu o caminho que deseja tomar na vida.";
		mes "Eu gostaria que considerasse se tornar um praticante da minha arte.";
		mes "N�o ser� f�cil, mas o levar� a um grande poder.";
		next;
		if(select("Ok, eu me juntarei a voc�","N�o, obrigado.") == 1) {
			if(getskilllv("NV_BASIC") < 9) {
				mes "[F�nix]";
				mes "Que pena!";
				mes "Voc� n�o est� preparado para come�ar a treinar sob minha orienta��o no seu atual N�vel de Classe.";
				mes "Por favor, retorne quando atingir o N�vel de Classe 9 ou maior.";
				close;
			}
			mes "[F�nix]";
			mes "Muito bem...";
			mes "Eu te aceito como meu aluno.";
			mes "Para come�ar o treinamento, seu f�sico deve ser primeiro condicionado a fim de realizar as habilidades que voc� aprender�.";
			next;
			if(BaseLevel > 19) {
				mes "[F�nix]";
				mes "Hm. Vejo que voc� tem uma forma��o f�sica suficiente como Aprendiz.";
				mes "Muito bem. Ent�o vamos nos preparar para seu treinamento espiritual.";
				mes "Respire fundo, fale comigo quando estiver pronto.";
				taekwonq = 2;
				setquest (6001);
				close;
			}
			mes "[F�nix]";
			mes "A mente n�o est� necessariamente vinculada aos limites do corpo.";
			mes "Mas voc� nunca alcan�ar� seu verdadeiro potencial sem integrar mente e corpo.";
			mes "V�, ganhe ^FF0000 mais alguns N�veis de Base^000000, e ent�o retorne.";
			next;
			taekwonq_2 = BaseLevel;
			taekwonq = 1;
			setquest (6000);
			mes "[F�nix]";
			mes "Eu entendo que essa n�o � uma tarefa f�cil para Aprendizes.";
			mes "Mas voc� deve se preparar para as dificuldades desta classe.";
			mes "Eu espero que voc� esteja mais forte na pr�xima vez que nos encontrarmos.";
			close;
		}
		mes "[F�nix]";
		mes "Entendo.";
		mes "A vida de algu�m pode ter muitos caminhos.";
		mes "Mas voc� tem que escolher somente um para viajar por vez.";
		mes "Espero que voc� trabalhe rumo � ilumina��o no seu pr�prio caminho, aventureiro.";
		close;
	}
	switch(taekwonq) {
		case 1:
		if(BaseLevel > taekwonq_2) {
			taekwonq = 2;
			changequest (6000,6001);
			mes "[F�nix]";
			mes "Bom. Sinto que voc� est� mais em sintonia com sua for�a interior.";
			mes "Este � o resultado natural de subir de n�vel.";
			mes "Estamos prontos para prosseguir com a pr�xima por��o do treinamento.";
			close;
		}
		mes "[F�nix]";
		mes "Voc� tem que ganhar ^FF00001 mais um N�vel de Base^000000 para provar que voc� pode suportar o sofrimento que esta classe carrega.";
		mes "Nunca negligencie seu treinamento.";
		close;
		case 2:
		mes "[F�nix]";
		mes "Para seu treinamento espiritual, eu farei uma s�rie de perguntas para testar seu esp�rito.";
		mes "Relaxe...";
		mes "Responda da forma mais honesta poss�vel.";
		mes "Sua vontades e convic��es ser�o testadas.";
		next;
		mes "[F�nix]";
		mes "Como um praticante da minha arte, a habilidade para fazer a melhor decis�o de forma r�pida ser� necess�ria em batalha.";
		mes "Agora vamos come�ar o question�rio.";
		next;
		mes "[F�nix]";
		mes "Quando voc� encontra uma grande dificuldade, como voc� geralmente reage?";
		next;
		switch(select("Eu a encaro de cabe�a erguida","Eu a evito de alguma maneira","Analizo o problema.")) {
			case 1:
			mes "[F�nix]";
			mes "Sim, essa � a resposta que eu queria.";
			mes "Mesmo se voc� n�o puder lidar com um problema de in�cio.";
			mes "Podemos beneficiar-nos de tal forte determina��o.";
			mes "N�o deixe nenhum obst�culo te parar.";
			next;
			mes "[F�nix]";
			mes "Mesmo que voc� falhe, pode aprender com a experi�ncia de quando voc� deu o seu m�ximo.";
			mes "Tentativas t�midas raramente d�o bons resultados.";
			next;
			mes "[F�nix]";
			mes "Visto que voc� j� entendeu a import�ncia da vontade de algu�m.";
			mes "Vamos prosseguir para a pr�xima quest�o.";
			next;
			break;
			case 2:
			mes "[F�nix]";
			mes "Como voc� espera amadurecer se voc� corre dos desafios?";
			mes "O medo pode ser uma rea��o saud�vel que pode salvar sua vida, mas a verdadeira covardia � desprez�vel.";
			next;
			mes "[F�nix]";
			mes "Me desaponta ouvir o que voc� disse.";
			mes "Nunca me diga uma coisa dessas denovo.";
			mes "Contemple o significado de coragem e covardia, e depois fale comigo mais uma vez.";
			close;
			case 3:
			mes "[F�nix]";
			mes "Recompor?";
			mes "� bom fazer isso depois de ter sido derrotado.";
			mes "Mas � melhor encarar os problemas uma vez que os encontra.";
			mes "Voc� nem sempre ter� o luxo de se recompor.";
			next;
			mes "[F�nix]";
			mes "Problemas podem ser previstos e analizados, mas eu penso que uma retirada imediata � imprudente.";
			mes "Reflita sobre seus medos, assim como o que voc� define como um fracasso.";
			mes "Em seguida, volte a mim.";
			close;
		}
		mes "[F�nix]";
		mes "Em suas viagens, voc� encontrar� muitas pessoas com diferentes origens e pontos de vista.";
		mes "Inevitavelmente, voc� encontrar� algu�m cujo modo de vida que voc� n�o consegue entender.";
		next;
		mes "[F�nix]";
		mes "Da mesma maneira, est� pessoa n�o entender� seu modo de vida.";
		mes "Quando seus pois pontos de vida colidem, causando um conflito intenso, como voc� reagiria?";
		next;
		switch( select("Insisto que estou certo","Ignoro os pontos de vista","Aceito as diferen�as")) {
			case 1:
			mes "[F�nix]";
			mes "� importante ter sua pr�pria opini�o.";
			mes "Contudo, voc� tem que reconhecer que pode estar errado.";
			mes "Um ponto de vista oposto pode ter seus m�ritos.";
			next;
			mes "[F�nix]";
			mes "N�o h� uma resposta certa e a luz da verdade pode ter v�rias tonalidades.";
			mes "Assim � o caminho da natureza.";
			mes "For�ar ideias sobre os outros � uma pr�tica opressiva.";
			next;
			mes "[F�nix]";
			mes "N�o limite-se a um �nico ponto de vista, e n�o reprima seu crescimento aderindo a uma �nica verdade.";
			mes "Reflita sobre isso, e depois fale comigo denovo.";
			close;
			case 2:
			mes "[F�nix]";
			mes "� importante se dar bem com os outros.";
			mes "Mas voc� n�o vai trazer nenhum valor para esse mundo sem suas pr�prias contribui��es.";
			mes "Pensamentos e opini�es �nicas.";
			next;
			mes "[F�nix]";
			mes "Um conflito de ideais, quando conduzida com respeito por si mesmo e por outros.";
			mes "� uma grande oportunidade para ampliar sua compreens�o do mundo, como ele � para os outros";
			next;
			mes "[F�nix]";
			mes "Reflita sobre essa ideia de estabelecer harmonia com si, e com os outros.";
			mes "Em seguida, volte a mim.";
			close;
			case 3:
			mes "[F�nix]";
			mes "Bom.";
			mes "Voc� deve ver as diferen�as como elas verdadeiramente s�o.";
			mes "Tamb�m deve aceitar as cr�ticas ao seu pr�prio ponto de vista com eleg�ncia e sincera considera��o.";
			next;
			mes "[F�nix]";
			mes "� imposs�vel saber tudo neste mundo e entender todo ponto de vista.";
			mes "Mas isso n�o significa que os pontos de vista que voc� n�o entende n�o t�m valor";
			next;
			mes "[F�nix]";
			mes "Aquele que voc� discorda pode ter a resposta que voc� n�o sabe.";
			mes "No seu tempo de fraqueza, esta pessoa pode ser sua maior ajuda.";
			mes "Lembre-se disso.";
			next;
		}
		mes "[F�nix]";
		mes "Estou satisfeito com as respostas que me deu.";
		mes "Por favor, reflita sobre o que discutimos por algum tempo.";
		mes "Quando estiver com a mente calma, venha falar comigo.";
		taekwonq = 3;
		changequest (6001,6002);
		close;
		case 3:
		mes "[F�nix]";
		mes "Voc� est� se sentindo em paz?";
		mes "Eu perguntarei a voc� uma quest�o muito importante.";
		mes "Me responda com honestidade.";
		next;
		mes "[F�nix]";
		mes "^FF0000Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para se dedicar a arte especial que eu te ensinarei.";
		mes "E defender a dignidade de sua filosofia?";
		next;
		if( select("Claro que sim","N�o") == 1) {
			mes "[F�nix]";
			mes "Muito bem.";
			mes "Voc� n�o � mais somente um aluno.";
			mes "Agora voc� est� dotado dos poderes e responsabilidades de um disc�pulo do ^FF0000Taekwon Do^000000.";
			next;
			mes "[F�nix]";
			mes "Taekwon significa socos e chutes.";
			mes "Do significa arte ou caminho.";
			mes "Esta arte marcial � focada no uso das m�os e dos p�s.";
			next;
			mes "[F�nix]";
			mes "Por favor, use esta disciplina para aprimorar seu corpo e mente e aprender as habilidades.";
			mes "Wue s�o as mais adequadas para voc�.";
			mes "Nunca evite seu treinamento, e nem traga vergonha para o Taekwon Do.";
			next;
			completequest (6002);
			getitem (Guard,1);
			jobchange (Job_Taekwon);
			callfunc ("ClearJobQuest");
			mes "[F�nix]";
			mes "Voc� ainda � jovem, ent�o suponho que queira uma classe.";
			mes "Hmm. Neste caso, voc� � agora um"+(Sex == SEX_MALE ? " ^FF0000Garoto Taekwon^000000" : "a ^FF0000Garota Taekwon^000000.")+".";
			mes "�, isso soa bem.";
			next;
			mes "[F�nix]";
			mes "Por favor, leve este uniforme de treinamento e este conjunto de protetores.";
			mes "Fa�a bom uso desses presentes.";
			mes "A medida que voc� viaja e treina, conte aos outros sobre a nossa arte e aprenda o que voc� puder com eles em troca.";
			next;
			mes "[F�nix]";
			mes "Agora � hora de voc� embarcar em sua pr�pria jornada para encontrar novos desafios para aumentar sua for�a.";
			mes "Se comporte com o orgulho de um praticante do Taekwon Do.";
			next;
			mes "[F�nix]";
			mes "Muito bem.";
			mes "Desejo-lhe sorte.";
			mes "Esperto te ver novamente algum dia, "+strcharinfo(PC_NAME)+".";
			close;
		}
		mes "[F�nix]";
		mes "Hm, talvez voc� n�o esteja completamente pront"+(Sex == SEX_MALE ?"o":"a")+" para avan�ar do seu status de aluno para um verdadeiro disc�pulo.";
		mes "Quando se sentir preparado, venha falar comigo.";
		close;
	}
}
