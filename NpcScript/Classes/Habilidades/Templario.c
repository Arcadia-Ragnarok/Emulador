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
| - Info: Aprendizagem da habilidade Submiss�o (CR_SHRINK) para     |
| Templ�rio.                                                        |
\*-----------------------------------------------------------------*/

geffen,110,117,3	script	Ford#crus_sk	4_M_CRU_OLD,{
	if (BaseJob == Job_Crusader) {
		if (getskilllv("CR_SHRINK")) {
			mes("[Ford]\n"
				"Ouvi dizer que voc� foi capaz de salvar Sloutii.\n"
				"Por isso, sou eternamente grato.\n"
				"Poder�amos usar mais pessoas como voc� para servir no Guardi�es Templ�rios de Prontera...");
			next;
			mes("[Ford]\n"
				"Sei que voc�s aventureiros preferem n�o se comprometer com esses tipos de organiza��es.\n"
				"Mas sua ajuda ser� sempre bem-vinda.\n"
				"Espero te ver novamente em algum dia.");
			next;
			mes("[Ford]\n"
				"Obrigado mais uma vez, e espero que voc� viaje com seguran�a.\n"
				"Por enquanto, esse � nosso adeus, " + strcharinfo(CHAR_NAME) + ".");
			close;
		} else if (!crus_sk) {
			mes("[Ford]\n"
				"Droga! Por que est� demorando tanto?\n"
				"Ah, finalmente voc� chegou,\n"
				"me mostre r�pido o ^FF0000relat�rio^000000 que voc� trouxe!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Hmmm...?\n"
				"Oh, voc� deve ter me confundido com algu�m, e outra coisa\n"
				"Eu realmente n�o sei do que � que voc� est� falando.");
			next;
			mes("[Ford]\n"
				"O qu�? Voc� n�o � um dos guardas posicionados no Sul de Geffen?\n"
				"Oh, isso � horr�vel.\n"
				"Pe�o desculpas,\n"
				"Acabei revelando sua posi��o, j� que voc�");
			if (Upper == 1)
				mes("estava vestido como um Paladino ...");
			else
				mes("estava vestido como um Templ�rio ...");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Sinto muito ...\n"
				"O que est� acontecendo?\n"
				"Algum problema?\n"
				"Eu sou um aventureiro e meu nome � " + strcharinfo(CHAR_NAME) + ".");
			next;
			mes("[Ford]\n"
				"Bem, eu sou Leslie Ford, comandante dos Guardi�es Templ�rios de Prontera.\n"
				"N�s somos encarregados do dever de proteger aventureiros e cidad�os dos monstros.");
			next;
			mes("[Ford]\n"
				"Tem havido um surto recente de viol�ncia sem motivo dos Goblins,\n"
				"e eles est�o trazendo um pouco de problemas para n�s.\n"
				"Nossas patrulhas supostamente me informam sobre as suas atividades.");
			next;
			mes("[Ford]\n"
				"No entanto, o relat�rio de hoje ainda n�o chegou,\n"
				"ent�o eu estou come�ando a temer que algo tenha acontecido com a patrulha.\n"
				"Infelizmente, os meus deveres n�o permitem que eu deixe o meu posto.");
			next;
			mes("[Ford]\n"
				"Estou ficando desesperado, e eu n�o tenho escolha, devo pedir ajuda externa.\n"
				"Eu quero perguntar se voc� poderia por favor me dar a sua ajuda.");
			next;
			if (select("Certo", "Sinto muito, estou ocupado...")) {
				mes("[Ford]\n"
					"�timo, muito obrigado!\n"
					"Agora, por favor, v� e os procure,\n"
					"^0000FFSloutii^000000 que deve estar posicionado ao sul de Geffen,\n"
					"e entregue o seu relat�rio para mim.\n"
					"Sua ajuda me trouxe um grande al�vio...");
				crus_sk = 1;
				close;
			} else {
				mes("[Ford]\n"
					"Hm. Eu entendo.\n"
					"Eu n�o sei quais obriga��es voc� tem agora.\n"
					"Mas se sua tarefa atual n�o � urgente, por favor, reconsidere ...");
				close;
			}
		} else if (crus_sk == 1) {
			mes("[Ford]\n"
				"Por favor, procure por ^0000FFSloutii^000000 na parte sul de Geffen."
				"E ele deve lhe dar o relat�rio sobre a patrulha dos Goblins para voc� entregar a mim.");
			close;
		} else if (crus_sk == 2) {
			mes("[Ford]\n"
				"Espere, voc� encontrou-se com Sloutii, mas n�o recebeu o seu relat�rio.\n"
				"Por favor, volte at� ele e traga para mim, � importante que eu o leia!");
			close;
		} else if (crus_sk == 3) {
			mes("[Ford]\n"
				"Ah, voc� voltou!\n"
				"Ent�o, como foi com Sloutii?\n"
				"Est� tudo bem?");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Aqui, eu trouxe o relat�rio assim que pude!\n"
				"� melhor voc� o ler ele, r�pido!\n"
				"As coisas pareciam estar muito ruim quando eu sa� ...");
			next;
			mes("[Ford]\n"
				"C�us, h� sangue sobre todo o papel! Vamos ver...\n"
				"Ah, n�o!\n"
				"Esta � uma situa��o de emerg�ncia!\n"
				"Eu preciso fazer essa denuncia para ^FFFFFFSenhor Arga^000000\n"
				"e pedir que ele mande refor�os imediatamente!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Espere, n�s precisamos fazer algo a respeito de Sloutii.\n"
				"Ele foi ferido pelos Goblins, e eu acho que ele est� com s�rios problemas.");
			next;
			mes("[Ford]\n"
				"Os Goblins...?\n"
				"Ah, n�o, voc� vai precisar do ant�doto especial.\n"
				"Que voc� pode obter com o Padre Arthur.\n"
				"Para tratar o veneno das l�minas que esses Goblins usam.");
			next;
			mes("[Ford]\n"
				"Enquanto eu pe�o refor�os.\n"
				"Por favor, siga para a ^0000FFIgreja de Prontera^000000."
				"E pe�a ao Padre ^0000FFArthur^000000 que fa�a um ant�doto para o veneno dos Goblins.\n"
				"Se voc� n�o se apressar, poder� ser tarde demais para Sloutii --!");
			crus_sk = 4;
			close;
		} else if (crus_sk == 4) {
			mes("[Ford]\n"
				"Por favor, v� depressa e obtenha o ant�doto."
				"Para o veneno de Goblin com o ^0000FFPadre Arthur^000000.\n"
				"Que est� n� ^0000FFIgreja Prontera^000000.\n"
				"Agora a vida de Sloutii depende de voc�.");
			close;
		} else if (crus_sk == 7) {
			if (!getskilllv("CR_SHRINK")) {
				mes("[Ford]\n"
					"Ei, quanto tempo.\n"
					"Voc� deve ter esquecido de como executar a habilidade Submiss�o."
					"Ent�o eu vou ensinar bem r�pido para voc� ...!");
				crus_sk = 0;
				skill("CR_SHRINK", 1, 0);
				close;
			} else {
				mes("[Ford]\n"
					"Ouvi dizer que voc� foi capaz de salvar Sloutii.\n"
					"Por isso, sou eternamente grato.\n"
					"Poder�amos usar mais pessoas como voc� para servir no Guardi�es Templ�rios de Prontera...");
				next;
				mes("[Ford]\n"
					"Sei que voc�s aventureiros preferem n�o se comprometer com esses tipos de organiza��es.\n"
					"Mas sua ajuda ser� sempre bem-vinda.\n"
					"Espero te ver novamente em algum dia.");
				next;
				mes("[Ford]\n"
					"Obrigado mais uma vez, e espero que voc� viaje com seguran�a.\n"
					"Por enquanto, esse � nosso adeus, " + strcharinfo(CHAR_NAME) + ".");
				close;
			}
		} else {
			mes("[Ford]\n"
				"Voc� j� conheceu o Padre Arthur?\n"
				"Bom, por favor se apresse e obtenha o ant�doto dele.\n"
				"Sem ele, Sloutii morrer� lentamente e dolorosamente!");
			close;
		}
	} else {
		mes("[Ford]\n"
			"Ah, sauda��es.\n"
			"Eu sinto muito n�o poder ajud�-lo, aventureiro.\n"
			"Pois eu tenho algo bastante urgente para cuidar.\n"
			"Agora, se voc� me der licen�a ...");
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
				"Voc� foi atacado?");
			next;
			mes("[Soldado]\n"
				"S-sim, eu estava no caminho de Geffen.\n"
				"Para relatar ao senhor Ford sobre minha patrulha regular.\n"
				"Quando fui atacado por estes Goblins!\n"
				"Eu tenho que avisar aos meus superiores!\n"
				"Eles est�o indo atacar Geffen!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Na verdade, eu falei com Senhor Ford!\n"
				"Voc� deve ser Sloutii, certo?\n"
				"Ele me enviou para ver o que aconteceu com voc�!");
			next;
			mes("[Sloutii]\n"
				"�timo, na hora c-certa!\n"
				"Escute, voc� tem que enviar este relat�rio.\n"
				"Ele cont�m detalhes da minha patrulha e um pedido de apoio urgente.\n"
				"U-ugh!\n"
				"N�s n�o temos tempo!");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Espere...!\n"
				"Mas o que aconteceu com voc�?\n"
				"Voc� est� ferido...");
			next;
			mes("[Sloutii]\n"
				"Eu vou ser amaldi�oado se a ajuda atrasar e ser� por minha conta!\n"
				"S� se apresse e consiga que o relat�rio chegue ao senhor Ford!\n"
				"Agora v�!\n"
				"Agora, pegarei o relat�rio para voc...\n"
				"- OW! N-n�o...");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"^333333(Ele est� se contorcendo de tanta dor."
				"Que ele n�o pode nem p�de me dar seu relat�rio.\n"
				"� melhor eu lhe trazer uma po��o vermelha para aliviar o seu sofrimento...)^000000");
			crus_sk = 2;
			close;
		} else if (crus_sk == 2) {
			if (!countitem(Red_Potion)) {
				mes("[Sloutii]\n"
					"Apresse-se e t-tome este relat�rio!\n"
					"D-deixem-me apenas entreg�-lo a voc� e --\n"
					"Arrrrgh!\n"
					"N-N�o posso me mover!\n"
					"E d-d... d�i muito!");
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"^333333(� melhor eu trazer uma Po��o Vermelha.\n"
					"Caso contr�rio n�o tenho nenhuma esperan�a de conseguir o relat�rio sem machuc�-lo!)^000000");
				close;
			} else {
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"Aqui, por favor, tome\n"
					"essa Po��o Vermelha.\n"
					"S� ela poder� te ajudar...");
				next;
				mes("[Sloutii]\n"
					"Arrrgh! Basta derramar e-ela na ferida! ...\n"
					"Isso queima muito!\n"
					"Aqueles Goblins devem ter me cortado com algo revestido por veneno!");
				next;
				mes("[Sloutii]\n"
					"Ah... Ahh...\n"
					"O sangramento n�o tem parado, mas pelo menos est� melhor.\n"
					"Aqui, pegue e leve este relat�rio agora ao senhor Ford.\n"
					"Apresse-se e v�!");
				next;
				mes("^3355FFVoc� recebeu do Sloutii o relat�rio de patrulhamento.\n"
					"Algumas p�ginas est�o manchadas com o sangue de sua ferida.^000000");
				delitem(Red_Potion, 1);
				crus_sk = 3;
				close;
			}
		} else if (crus_sk == 3) {
			mes("[Sloutii]\n"
				"Estamos ficando sem tempo!\n"
				"Apresse-se e leve o meu relat�rio para Senhor Ford assim que voc� puder!");
			close;
		} else if (crus_sk == 4) {
			mes("[Sloutii]\n"
				"Eeearrrgh--!\n"
				"Minhas p-pernas!\n"
				"Est� come�ando a doer-r tudo!");
			next;
			mes("^3355FFSloutii caiu inconsciente.\n"
				"E parece que as feridas em suas pernas est�o fazendo com que ele sofra muito mais.^000000");
			close;
		} else if (crus_sk == 5 || crus_sk == 8) {
			mes("........\n"
				".........");
			next;
			mes("^3355FFSloutii continua inconsciente.\n"
				"Ele ir� morrer se seus ferimentos n�o forem tratados imediatamente.\n"
				"Voc� vai ter que ajud�-lo o mais r�pido poss�vel.^000000");
		} else if (crus_sk == 6) {
			switch (rand(5)) {
				case 1:
				case 3:
				mes("^3355FFVoc� cuidadosamente derrama oant�doto do veneno dos Goblins na boca do Sloutii.\n"
					"Sua garganta se esfor�a para engolir o ant�doto.\n"
					"E ele consegue ingeri-lo.^000000");
				next;
				mes("^3355FFMilagrosamente, as feridas causadas pelo ataque dos Goblins come�am a cicatrizar.^000000");
				next;
				mes("[Sloutii]\n"
					"Oh, o-o que aconteceu?\n"
					"Estou ... Estou realmente vivo?\n"
					"Ei, � voc�!\n"
					"Voc� deve ter salvo minha vida!\n"
					"Pensei que eu ia morrer com certeza!");
				next;
				mes("[" + strcharinfo(CHAR_NAME) + "]\n"
					"Oh, que bom que cheguei a tempo.\n"
					"O senhor Ford me fez visitar o Padre Arthur para fazer um ant�doto para salvar voc�.\n"
					"Ah, e eu j� entreguei o seu relat�rio ao senhor Ford.");
				next;
				mes("[Sloutii]\n"
					"�timo! Agora, deixe-me pagar-lhe ensinando a voc� uma habilidade especial."
					"Desenvolvido pelos Guardi�es Templ�rios de Prontera.\n"
					"Esta habilidade me ajudou a sobreviver dos ataques daqueles Goblins.\n"
					"Voc� est� pronto para aprender?");
				next;
				mes("[Sloutii]\n"
					"Esta habilidade � chamada ''^0000FFSubmiss�o^000000''.\n"
					"Que vai jogar os inimigos para tr�s.\n"
					"Quando tiver sucesso e o proteger de seus ataques.");
				next;
				mes("[Sloutii]\n"
					"Agora ou�a com aten��o ...\n"
					"Para execut�-lo, voc� tem que se concentrar e repelir os inimigos.\n"
					"Usando a mentalidade e postura certa e...");
				next;
				mes("[Sloutii]\n"
					"Exelente!\n"
					"Voc� aprendeu a habilidade!\n"
					"Agora, eu espero que voc� use essa capacidade para combater o mal e proteger os fracos.\n"
					"Ah, e se eu aprender novas habilidades.\n"
					"Eu vou com certeza ensin�-lo imediatamente.");
				crus_sk = 7;
				skill("CR_SHRINK", 1, 0);
				close;
				default:
				mes("^3355FFVoc� cuidadosamente derrama o ant�doto contra o veneno dos Goblin na boca do Sloutii.\n"
					"Sua garganta se esfor�a para engolir o ant�doto, e ele consegue ingeri-lo.^000000");
				next;
				mes("^3355FFInfelizmente, nada aconteceu."
					"O ant�doto provavelmente perdeu seu efeito enquanto voc� estava viajando do Padre Arthur at� Sloutii.\n"
					"Voc� tem de voltar ao Padre\n"
					"Arthur e fazer outro.^000000");
				crus_sk = 8;
				close;
			}
		} else {
			mes("[Sloutii]\n"
				"Sempre que voc� tiver algum tempo livre."
				"Passe por aqui e talvez podemos praticar o nosso esgrima.");
			close;
		}
	} else {
		mes("[Sloutii]\n"
			"Tenha cuidado em torno desta �rea.\n"
			"Goblins s�o conhecidos por atacar todos os seres humanos que encontram.\n"
			"E ultimamente, eles est�o ficando cada vez mais violentos, portanto, fique atento.");
		close;
	}
}

// ------------------------------------------------------------------
prt_church,87,127,3	script	Pastor#crus_sk	4_M_SAGE_C,{
	if (BaseJob == Job_Crusader) {
		if (crus_sk == 4) {
			mes("[Padre Arthur]\n"
				"Sauda��es.\n"
				"O que voc� deseja, aventureiro?");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Algu�m foi ferido\n"
				"pelos Goblins, e foi-me dito pelo senhor Ford que voc� � o o �nico que pode fazer o\n"
				"Ant�doto para o veneno de Goblin.");
			next;
			mes("[Padre Arthur]\n"
				"Os santos nos avisaram que, os Goblins s�o de fato crueis e impiedosos!\n"
				"Infelizmente, eu sou novo em criar ant�dotos,\n"
				"contra os venenos de Goblin e deve-se fazer do zero.");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Diga-me o que voc� precisa para faz�-lo.\n"
				"Vou trazer-lhe todos os materiais imediatamente!!");
			next;
			mes("[Padre Arthur]\n"
				"Ah, sim. traga-me\n"
				"^0000FF20 Mucos Pegajosos^000000,\n"
				"^0000FF3 Garrafas vazias^000000,\n"
				"^0000FF5 Jellopys^000000...");
			next;
			mes("[Padre Arthur]\n"
				"...^0000FF1 Carv�o^000000,\n"
				"^0000FF1 Uva^000000,\n"
				"^0000FF3 Cyfar^000000 e\n"
				"^0000FF1 Ma�� Verde^000000.\n"
				"Agora se apresse, ele n�o vai durar muito se ele estiver envenenado!");
			crus_sk = 5;
			close;
		} else if (crus_sk == 5) {
			if (countitem(Grape) > 0 && countitem(Unripe_Apple) > 0 && countitem(Coal) > 0 && countitem(Cyfar) > 2 && countitem(Empty_Bottle) > 2 && countitem(Jellopy) > 4 && countitem(Sticky_Mucus) > 19) {
				mes("[Padre Arthur]\n"
					"Ah, voc� voltou.\n"
					"Agora deixe-me verificar se voc� trouxe o necess�rio para criar o ant�doto.");
				next;
				mes("[Padre Arthur]\n"
					"Bom, muito bom.\n"
					"Parece que tudo est� pronto.\n"
					"Agora, antes de come�ar...\n"
					"Devo dizer que o ant�doto tem um limite de tempo de efic�cia.");
				next;
				mes("[Padre Arthur]\n"
					"No entanto, n�o h� como ter uma precis�o at� quando o ant�doto se tornar� ineficiente at� voc� experiment�-lo.\n"
					"Portanto, voc� pode ter que voltar para fazer um novo.");
				next;
				mes("[Padre Arthur]\n"
					"Estes materiais devem ser suficiente para m�ltiplas dosagens.\n"
					"Assim voc� n�o ter� que se preocupar com a coleta dos materiais novamente.\n"
					"Agora, d�-me um momento para destilar isso ...");
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
					"Sinto muito, mas esses materiais s�o insuficientespara que eu destile o ant�doto.\n"
					"Hmm, quais s�o os materiais necess�rios?");
				next;
				mes("[Padre Arthur]\n"
					"Ah, sim. traga-me\n"
					"^0000FF20 Mucos Pegajosos^000000,\n"
					"^0000FF3 Garrafas vazias^000000,\n"
					"^0000FF5 Jellopys^000000...");
				next;
				mes("[Padre Arthur]\n"
					"...^0000FF1 Carv�o^000000,\n"
					"^0000FF1 Uva^000000,\n"
					"^0000FF3 Cyfar^000000 e\n"
					"^0000FF1 Ma�� Verde^000000.\n"
					"Agora se apresse, ele n�o vai durar muito se ele estiver envenenado.");
				close;
			}
		} else if (crus_sk == 6) {
			mes("[Padre Arthur]\n"
				"Eu n�o posso garantir que este ant�doto ir� funcionar.\n"
				"Se ele perder a sua efic�cia antes de voc� chegar."
				"Voc� vai ter que voltar e come�ar uma nova dose.");
			next;
			mes("[Padre Arthur]\n"
				"Voc� tem que se apressar para curar a ferida o mais r�pido poss�vel.\n"
				"Agora, quanto mais rapidamente eu entregar isso a voc�.\n"
				"Ter� que correr o mais r�pido que pode.\n"
				"A vida de um homem est� em jogo!");
			close;
		} else if (crus_sk == 8) {
			mes("[Padre Arthur]\n"
				"O ant�doto falhou?!\n"
				"N�s n�o temos escolha, � melhor tentar novamente.\n"
				"Aqui vamos n�s, vou rapidamente destilar uma nova dosagem para voc�.\n"
				"Espere, espere ...\n"
				"Ah! Pronto! Eu terminei!");
			next;
			mes("[Padre Arthur]\n"
				"Agora pegue este ant�doto fresco e leve-o mais r�pido poss�vel para o ferido! V�!");
			crus_sk = 6;
		} else {
			mes("[Padre Arthur]\n"
				"Ah, ent�o o ant�doto que usou no homem fez ele se recuperar completamente?\n"
				"Bom, muito bom.\n"
				"Meu cora��o fica feliz em ouvir que ele est� muito melhor.");
		}
	} else {
		mes("[Padre Arthur]\n"
			"Ah, Ol� \n"
			"Bem-vindo a Igreja de Prontera.\n"
			"Por favor, relaxe aqui e aprecie o sil�ncio."
			"Convide a sua calma espiritual do seu cora��o.");
		close;
	}
}
