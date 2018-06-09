/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: ?                                                    |
| - Version/Translate PT-BR: Spell Master                           |
| - Info: Aprendizagem da habilidade Submissão (CR_SHRINK) para     |
| Templário.                                                        |
\*-----------------------------------------------------------------*/

geffen,110,117,3	script	Ford#crus_sk	4_M_CRU_OLD,{
	if (BaseJob == Job_Crusader) {
		if (getskilllv("CR_SHRINK")) {
			mes("[Ford]\n"
				"Ouvi dizer que você foi capaz de salvar Sloutii.\n"
				"Por isso, sou eternamente grato.\n"
				"Poderíamos usar mais pessoas como você para servir no Guardiões Templários de Prontera...");
			next;
			mes("[Ford]\n"
				"Sei que vocês aventureiros preferem não se comprometer com esses tipos de organizações.\n"
				"Mas sua ajuda será sempre bem-vinda.\n"
				"Espero te ver novamente em algum dia.");
			next;
			mes("[Ford]\n"
				"Obrigado mais uma vez, e espero que você viaje com segurança.\n"
				"Por enquanto, esse é nosso adeus, " + strcharinfo(CHAR_NAME) + ".");
			close;
		} else if (!crus_sk) {
			mes("[Ford]\n"
				"Droga! Por que está demorando tanto?\n"
				"Ah, finalmente você chegou,\n"
				"me mostre rápido o ^FF0000relatório^000000 que você trouxe!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Hmmm...?\n"
				"Oh, você deve ter me confundido com alguém, e outra coisa\n"
				"Eu realmente não sei do que é que você está falando.");
			next;
			mes("[Ford]\n"
				"O quê? Você não é um dos guardas posicionados no Sul de Geffen?\n"
				"Oh, isso é horrível.\n"
				"Peço desculpas,\n"
				"Acabei revelando sua posição, já que você");
			if (Upper == 1)
				mes("estava vestido como um Paladino ...");
			else
				mes("estava vestido como um Templário ...");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Sinto muito ...\n"
				"O que está acontecendo?\n"
				"Algum problema?\n"
				"Eu sou um aventureiro e meu nome é " + strcharinfo(CHAR_NAME) + ".");
			next;
			mes("[Ford]\n"
				"Bem, eu sou Leslie Ford, comandante dos Guardiões Templários de Prontera.\n"
				"Nós somos encarregados do dever de proteger aventureiros e cidadãos dos monstros.");
			next;
			mes("[Ford]\n"
				"Tem havido um surto recente de violência sem motivo dos Goblins,\n"
				"e eles estão trazendo um pouco de problemas para nós.\n"
				"Nossas patrulhas supostamente me informam sobre as suas atividades.");
			next;
			mes("[Ford]\n"
				"No entanto, o relatório de hoje ainda não chegou,\n"
				"então eu estou começando a temer que algo tenha acontecido com a patrulha.\n"
				"Infelizmente, os meus deveres não permitem que eu deixe o meu posto.");
			next;
			mes("[Ford]\n"
				"Estou ficando desesperado, e eu não tenho escolha, devo pedir ajuda externa.\n"
				"Eu quero perguntar se você poderia por favor me dar a sua ajuda.");
			next;
			if (select("Certo", "Sinto muito, estou ocupado...")) {
				mes("[Ford]\n"
					"Ótimo, muito obrigado!\n"
					"Agora, por favor, vá e os procure,\n"
					"^0000FFSloutii^000000 que deve estar posicionado ao sul de Geffen,\n"
					"e entregue o seu relatório para mim.\n"
					"Sua ajuda me trouxe um grande alívio...");
				crus_sk = 1;
				close;
			} else {
				mes("[Ford]\n"
					"Hm. Eu entendo.\n"
					"Eu não sei quais obrigações você tem agora.\n"
					"Mas se sua tarefa atual não é urgente, por favor, reconsidere ...");
				close;
			}
		} else if (crus_sk == 1) {
			mes("[Ford]\n"
				"Por favor, procure por ^0000FFSloutii^000000 na parte sul de Geffen."
				"E ele deve lhe dar o relatório sobre a patrulha dos Goblins para você entregar a mim.");
			close;
		} else if (crus_sk == 2) {
			mes("[Ford]\n"
				"Espere, você encontrou-se com Sloutii, mas não recebeu o seu relatório.\n"
				"Por favor, volte até ele e traga para mim, é importante que eu o leia!");
			close;
		} else if (crus_sk == 3) {
			mes("[Ford]\n"
				"Ah, você voltou!\n"
				"Então, como foi com Sloutii?\n"
				"Está tudo bem?");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Aqui, eu trouxe o relatório assim que pude!\n"
				"É melhor você o ler ele, rápido!\n"
				"As coisas pareciam estar muito ruim quando eu saí ...");
			next;
			mes("[Ford]\n"
				"Céus, há sangue sobre todo o papel! Vamos ver...\n"
				"Ah, não!\n"
				"Esta é uma situação de emergência!\n"
				"Eu preciso fazer essa denuncia para ^FFFFFFSenhor Arga^000000\n"
				"e pedir que ele mande reforços imediatamente!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Espere, nós precisamos fazer algo a respeito de Sloutii.\n"
				"Ele foi ferido pelos Goblins, e eu acho que ele está com sérios problemas.");
			next;
			mes("[Ford]\n"
				"Os Goblins...?\n"
				"Ah, não, você vai precisar do antídoto especial.\n"
				"Que você pode obter com o Padre Arthur.\n"
				"Para tratar o veneno das lâminas que esses Goblins usam.");
			next;
			mes("[Ford]\n"
				"Enquanto eu peço reforços.\n"
				"Por favor, siga para a ^0000FFIgreja de Prontera^000000."
				"E peça ao Padre ^0000FFArthur^000000 que faça um antídoto para o veneno dos Goblins.\n"
				"Se você não se apressar, poderá ser tarde demais para Sloutii --!");
			crus_sk = 4;
			close;
		} else if (crus_sk == 4) {
			mes("[Ford]\n"
				"Por favor, vá depressa e obtenha o antídoto."
				"Para o veneno de Goblin com o ^0000FFPadre Arthur^000000.\n"
				"Que está ná ^0000FFIgreja Prontera^000000.\n"
				"Agora a vida de Sloutii depende de você.");
			close;
		} else if (crus_sk == 7) {
			if (!getskilllv("CR_SHRINK")) {
				mes("[Ford]\n"
					"Ei, quanto tempo.\n"
					"Você deve ter esquecido de como executar a habilidade Submissão."
					"Então eu vou ensinar bem rápido para você ...!");
				crus_sk = 0;
				skill("CR_SHRINK", 1, 0);
				close;
			} else {
				mes("[Ford]\n"
					"Ouvi dizer que você foi capaz de salvar Sloutii.\n"
					"Por isso, sou eternamente grato.\n"
					"Poderíamos usar mais pessoas como você para servir no Guardiões Templários de Prontera...");
				next;
				mes("[Ford]\n"
					"Sei que vocês aventureiros preferem não se comprometer com esses tipos de organizações.\n"
					"Mas sua ajuda será sempre bem-vinda.\n"
					"Espero te ver novamente em algum dia.");
				next;
				mes("[Ford]\n"
					"Obrigado mais uma vez, e espero que você viaje com segurança.\n"
					"Por enquanto, esse é nosso adeus, " + strcharinfo(CHAR_NAME) + ".");
				close;
			}
		} else {
			mes("[Ford]\n"
				"Você já conheceu o Padre Arthur?\n"
				"Bom, por favor se apresse e obtenha o antídoto dele.\n"
				"Sem ele, Sloutii morrerá lentamente e dolorosamente!");
			close;
		}
	} else {
		mes("[Ford]\n"
			"Ah, saudações.\n"
			"Eu sinto muito não poder ajudá-lo, aventureiro.\n"
			"Pois eu tenho algo bastante urgente para cuidar.\n"
			"Agora, se você me der licença ...");
		close;
	}
}

// ------------------------------------------------------------------
gef_fild13,297,242,3	script	Soldado#crus_sk	4_M_CRU,{
	if (BaseJob == Job_Crusader) {
		if (crus_sk == 1) {
			mes("[Soldado]\n"
				"Arrrrrghhh!\n"
				"M-minhas pernas!\n"
				"Que diabos que eles fizeram com as minhas pernas?!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"O-o que aconteceu?\n"
				"Você foi atacado?");
			next;
			mes("[Soldado]\n"
				"S-sim, eu estava no caminho de Geffen.\n"
				"Para relatar ao senhor Ford sobre minha patrulha regular.\n"
				"Quando fui atacado por estes Goblins!\n"
				"Eu tenho que avisar aos meus superiores!\n"
				"Eles estão indo atacar Geffen!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Na verdade, eu falei com Senhor Ford!\n"
				"Você deve ser Sloutii, certo?\n"
				"Ele me enviou para ver o que aconteceu com você!");
			next;
			mes("[Sloutii]\n"
				"Ótimo, na hora c-certa!\n"
				"Escute, você tem que enviar este relatório.\n"
				"Ele contém detalhes da minha patrulha e um pedido de apoio urgente.\n"
				"U-ugh!\n"
				"Nós não temos tempo!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Espere...!\n"
				"Mas o que aconteceu com você?\n"
				"Você está ferido...");
			next;
			mes("[Sloutii]\n"
				"Eu vou ser amaldiçoado se a ajuda atrasar e será por minha conta!\n"
				"Só se apresse e consiga que o relatório chegue ao senhor Ford!\n"
				"Agora vá!\n"
				"Agora, pegarei o relatório para voc...\n"
				"- OW! N-não...");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"^333333(Ele está se contorcendo de tanta dor."
				"Que ele não pode nem pôde me dar seu relatório.\n"
				"É melhor eu lhe trazer uma poção vermelha para aliviar o seu sofrimento...)^000000");
			crus_sk = 2;
			close;
		} else if (crus_sk == 2) {
			if (!countitem(Red_Potion)) {
				mes("[Sloutii]\n"
					"Apresse-se e t-tome este relatório!\n"
					"D-deixem-me apenas entregá-lo a você e --\n"
					"Arrrrgh!\n"
					"N-Não posso me mover!\n"
					"E d-d... dói muito!");
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"^333333(É melhor eu trazer uma Poção Vermelha.\n"
					"Caso contrário não tenho nenhuma esperança de conseguir o relatório sem machucá-lo!)^000000");
				close;
			} else {
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"Aqui, por favor, tome\n"
					"essa Poção Vermelha.\n"
					"Só ela poderá te ajudar...");
				next;
				mes("[Sloutii]\n"
					"Arrrgh! Basta derramar e-ela na ferida! ...\n"
					"Isso queima muito!\n"
					"Aqueles Goblins devem ter me cortado com algo revestido por veneno!");
				next;
				mes("[Sloutii]\n"
					"Ah... Ahh...\n"
					"O sangramento não tem parado, mas pelo menos está melhor.\n"
					"Aqui, pegue e leve este relatório agora ao senhor Ford.\n"
					"Apresse-se e vá!");
				next;
				mes("^3355FFVocê recebeu do Sloutii o relatório de patrulhamento.\n"
					"Algumas páginas estão manchadas com o sangue de sua ferida.^000000");
				delitem(Red_Potion, 1);
				crus_sk = 3;
				close;
			}
		} else if (crus_sk == 3) {
			mes("[Sloutii]\n"
				"Estamos ficando sem tempo!\n"
				"Apresse-se e leve o meu relatório para Senhor Ford assim que você puder!");
			close;
		} else if (crus_sk == 4) {
			mes("[Sloutii]\n"
				"Eeearrrgh--!\n"
				"Minhas p-pernas!\n"
				"Está começando a doer-r tudo!");
			next;
			mes("^3355FFSloutii caiu inconsciente.\n"
				"E parece que as feridas em suas pernas estão fazendo com que ele sofra muito mais.^000000");
			close;
		} else if (crus_sk == 5 || crus_sk == 8) {
			mes("........\n"
				".........");
			next;
			mes("^3355FFSloutii continua inconsciente.\n"
				"Ele irá morrer se seus ferimentos não forem tratados imediatamente.\n"
				"Você vai ter que ajudá-lo o mais rápido possível.^000000");
		} else if (crus_sk == 6) {
			switch (rand(5)) {
				case 1:
				case 3:
				mes("^3355FFVocê cuidadosamente derrama oantídoto do veneno dos Goblins na boca do Sloutii.\n"
					"Sua garganta se esforça para engolir o antídoto.\n"
					"E ele consegue ingeri-lo.^000000");
				next;
				mes("^3355FFMilagrosamente, as feridas causadas pelo ataque dos Goblins começam a cicatrizar.^000000");
				next;
				mes("[Sloutii]\n"
					"Oh, o-o que aconteceu?\n"
					"Estou ... Estou realmente vivo?\n"
					"Ei, é você!\n"
					"Você deve ter salvo minha vida!\n"
					"Pensei que eu ia morrer com certeza!");
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"Oh, que bom que cheguei a tempo.\n"
					"O senhor Ford me fez visitar o Padre Arthur para fazer um antídoto para salvar você.\n"
					"Ah, e eu já entreguei o seu relatório ao senhor Ford.");
				next;
				mes("[Sloutii]\n"
					"Ótimo! Agora, deixe-me pagar-lhe ensinando a você uma habilidade especial."
					"Desenvolvido pelos Guardiões Templários de Prontera.\n"
					"Esta habilidade me ajudou a sobreviver dos ataques daqueles Goblins.\n"
					"Você está pronto para aprender?");
				next;
				mes("[Sloutii]\n"
					"Esta habilidade é chamada ''^0000FFSubmissão^000000''.\n"
					"Que vai jogar os inimigos para trás.\n"
					"Quando tiver sucesso e o proteger de seus ataques.");
				next;
				mes("[Sloutii]\n"
					"Agora ouça com atenção ...\n"
					"Para executá-lo, você tem que se concentrar e repelir os inimigos.\n"
					"Usando a mentalidade e postura certa e...");
				next;
				mes("[Sloutii]\n"
					"Exelente!\n"
					"Você aprendeu a habilidade!\n"
					"Agora, eu espero que você use essa capacidade para combater o mal e proteger os fracos.\n"
					"Ah, e se eu aprender novas habilidades.\n"
					"Eu vou com certeza ensiná-lo imediatamente.");
				crus_sk = 7;
				skill("CR_SHRINK", 1, 0);
				close;
				default:
				mes("^3355FFVocê cuidadosamente derrama o antídoto contra o veneno dos Goblin na boca do Sloutii.\n"
					"Sua garganta se esforça para engolir o antídoto, e ele consegue ingeri-lo.^000000");
				next;
				mes("^3355FFInfelizmente, nada aconteceu."
					"O antídoto provavelmente perdeu seu efeito enquanto você estava viajando do Padre Arthur até Sloutii.\n"
					"Você tem de voltar ao Padre\n"
					"Arthur e fazer outro.^000000");
				crus_sk = 8;
				close;
			}
		} else {
			mes("[Sloutii]\n"
				"Sempre que você tiver algum tempo livre."
				"Passe por aqui e talvez podemos praticar o nosso esgrima.");
			close;
		}
	} else {
		mes("[Sloutii]\n"
			"Tenha cuidado em torno desta área.\n"
			"Goblins são conhecidos por atacar todos os seres humanos que encontram.\n"
			"E ultimamente, eles estão ficando cada vez mais violentos, portanto, fique atento.");
		close;
	}
}

// ------------------------------------------------------------------
prt_church,87,127,3	script	Pastor#crus_sk	4_M_SAGE_C,{
	if (BaseJob == Job_Crusader) {
		if (crus_sk == 4) {
			mes("[Padre Arthur]\n"
				"Saudações.\n"
				"O que você deseja, aventureiro?");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Alguém foi ferido\n"
				"pelos Goblins, e foi-me dito pelo senhor Ford que você é o o único que pode fazer o\n"
				"Antídoto para o veneno de Goblin.");
			next;
			mes("[Padre Arthur]\n"
				"Os santos nos avisaram que, os Goblins são de fato crueis e impiedosos!\n"
				"Infelizmente, eu sou novo em criar antídotos,\n"
				"contra os venenos de Goblin e deve-se fazer do zero.");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Diga-me o que você precisa para fazê-lo.\n"
				"Vou trazer-lhe todos os materiais imediatamente!!");
			next;
			mes("[Padre Arthur]\n"
				"Ah, sim. traga-me\n"
				"^0000FF20 Mucos Pegajosos^000000,\n"
				"^0000FF3 Garrafas vazias^000000,\n"
				"^0000FF5 Jellopys^000000...");
			next;
			mes("[Padre Arthur]\n"
				"...^0000FF1 Carvão^000000,\n"
				"^0000FF1 Uva^000000,\n"
				"^0000FF3 Cyfar^000000 e\n"
				"^0000FF1 Maçã Verde^000000.\n"
				"Agora se apresse, ele não vai durar muito se ele estiver envenenado!");
			crus_sk = 5;
			close;
		} else if (crus_sk == 5) {
			if (countitem(Grape) > 0 && countitem(Unripe_Apple) > 0 && countitem(Coal) > 0 && countitem(Cyfar) > 2 && countitem(Empty_Bottle) > 2 && countitem(Jellopy) > 4 && countitem(Sticky_Mucus) > 19) {
				mes("[Padre Arthur]\n"
					"Ah, você voltou.\n"
					"Agora deixe-me verificar se você trouxe o necessário para criar o antídoto.");
				next;
				mes("[Padre Arthur]\n"
					"Bom, muito bom.\n"
					"Parece que tudo está pronto.\n"
					"Agora, antes de começar...\n"
					"Devo dizer que o antídoto tem um limite de tempo de eficácia.");
				next;
				mes("[Padre Arthur]\n"
					"No entanto, não há como ter uma precisão até quando o antídoto se tornará ineficiente até você experimentá-lo.\n"
					"Portanto, você pode ter que voltar para fazer um novo.");
				next;
				mes("[Padre Arthur]\n"
					"Estes materiais devem ser suficiente para múltiplas dosagens.\n"
					"Assim você não terá que se preocupar com a coleta dos materiais novamente.\n"
					"Agora, dê-me um momento para destilar isso ...");
				delitem(Sticky_Mucus, 20);
				delitem(Unripe_Apple, 1);
				delitem(Jellopy, 5);
				delitem(Grape, 1);
				delitem(Coal, 1);
				delitem(Cyfar, 3);
				delitem(Empty_Bottle, 3);
				crus_sk = 6;
				close;
			} else {
				mes("[Padre Arthur]\n"
					"Sinto muito, mas esses materiais são insuficientespara que eu destile o antídoto.\n"
					"Hmm, quais são os materiais necessários?");
				next;
				mes("[Padre Arthur]\n"
					"Ah, sim. traga-me\n"
					"^0000FF20 Mucos Pegajosos^000000,\n"
					"^0000FF3 Garrafas vazias^000000,\n"
					"^0000FF5 Jellopys^000000...");
				next;
				mes("[Padre Arthur]\n"
					"...^0000FF1 Carvão^000000,\n"
					"^0000FF1 Uva^000000,\n"
					"^0000FF3 Cyfar^000000 e\n"
					"^0000FF1 Maçã Verde^000000.\n"
					"Agora se apresse, ele não vai durar muito se ele estiver envenenado.");
				close;
			}
		} else if (crus_sk == 6) {
			mes("[Padre Arthur]\n"
				"Eu não posso garantir que este antídoto irá funcionar.\n"
				"Se ele perder a sua eficácia antes de você chegar."
				"Você vai ter que voltar e começar uma nova dose.");
			next;
			mes("[Padre Arthur]\n"
				"Você tem que se apressar para curar a ferida o mais rápido possível.\n"
				"Agora, quanto mais rapidamente eu entregar isso a você.\n"
				"Terá que correr o mais rápido que pode.\n"
				"A vida de um homem está em jogo!");
			close;
		} else if (crus_sk == 8) {
			mes("[Padre Arthur]\n"
				"O antídoto falhou?!\n"
				"Nós não temos escolha, é melhor tentar novamente.\n"
				"Aqui vamos nós, vou rapidamente destilar uma nova dosagem para você.\n"
				"Espere, espere ...\n"
				"Ah! Pronto! Eu terminei!");
			next;
			mes("[Padre Arthur]\n"
				"Agora pegue este antídoto fresco e leve-o mais rápido possível para o ferido! Vá!");
			crus_sk = 6;
		} else {
			mes("[Padre Arthur]\n"
				"Ah, então o antídoto que usou no homem fez ele se recuperar completamente?\n"
				"Bom, muito bom.\n"
				"Meu coração fica feliz em ouvir que ele está muito melhor.");
		}
	} else {
		mes("[Padre Arthur]\n"
			"Ah, Olá \n"
			"Bem-vindo a Igreja de Prontera.\n"
			"Por favor, relaxe aqui e aprecie o silêncio."
			"Convide a sua calma espiritual do seu coração.");
		close;
	}
}
