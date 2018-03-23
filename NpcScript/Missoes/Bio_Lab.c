/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest do acesso ao Laborat�rio de Somatologia             |
\*-----------------------------------------------------------------*/

lighthalzen,341,224,3	script	Espinha#lhzcube	4_M_LGTGUARD,{
	if (!lhz_sincube) {
		mes "[Espinha]";
		mes "Qu�...?";
		mes "Tem alguma coisa na minha cara?";
		mes "Pare de me encarar e me deixe trabalhar.";
		lhz_sincube = 1;
		close;
	} else if (lhz_sincube == 1) {
		mes "[Espinha]";
		mes "Ei. Ei, voc�.";
		mes "Voc� ainda est� me encarando. Pare com isso.";
		mes "Estou ocupado aqui e voc� est� me aborrecendo.";
		lhz_sincube = 2;
		close;
	} else if (lhz_sincube == 2) {
		mes "[Espinha]";
		mes "� s�rio, voc� est� come�ando a me dar nos nervos!";
		mes "Mas o que � que voc� quer de mim?!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Na verdade, nada.";
		mes "Eu s� gosto de ficar vendo voc� trabalhar.";
		mes "Ali�s, o que � que voc� faz exatamente, heim?";
		next;
		mes "[Espinha]";
		mes "Ei! Se eu pudesse ficar mostrando o que eu estou fazendo.";
		mes "Eu n�o ficaria t�o tenso com voc� olhando o que eu fa�o, n�o acha?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "N��oooo...";
		mes "Eu acho que voc� fica sempre tenso mesmo.";
		next;
		mes "[Espinha]";
		mes "Caramba!";
		mes "Ent�o voc� vai ficar ai sentado e me olhando o dia todo?!";
		mes "Tudo bem ent�o";
		mes "Eu vou ignorar voc�!";
		next;
		mes "[Espinha]";
		mes "...";
		mes "......";
		mes "Isso realmente me irrita!";
		mes "Por que voc� n�o d� o fora?!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, eu tamb�m estava pensando porque � que voc� trabalha em um lugar que � t�o, hum... depressivo.";
		next;
		mes "[Espinha]";
		mes "T� bom, certo!";
		mes "Mas assim que eu contar o que eu fa�o aqui, voc�  cai fora!";
		mes "Certo?";
		mes "E mais, vai ter que ficar com o bico calado.";
		mes "Entende, o que eu fa�o � meio ilegal.";
		next;
		mes "[Espinha]";
		mes "Eu mostro as rotas para as pessoas entrarem em Lighthalzen.";
		mes "Ou mesmo ir a qualquer lugar da cidade, sem autoriza��o.";
		mes "Caramba, eu posso at� mesmo colocar voc� naquele Laborat�rio...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "E-espere!";
		mes "Laborat�rio?!";
		mes "S�rio?";
		mes "Voc� consegue me colocar l� dentro?";
		next;
		mes "[Espinha]";
		mes "Pelos c�us...";
		mes "Voc� n�o vai me deixar em paz, n�?";
		mes "Olha, voc� parece legal, mesmo sendo meio teimoso, garoto.";
		mes "Mas eu n�o confio nem trabalho para estranhos, ponto.";
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas n�o h� nada que eu possa fazer para voc� me ajudar a entrar no Laborat�rio?";
		next;
		mes "[Espinha]";
		mes "N�o, sem chance.";
		mes "N�o importa o quanto voc� implore.";
		mes "Eu n�o vou me arriscar a confiar em algu�m que quer conhecer uma rota secreta.";
		mes "Agora, cai fora daqui!";
		lhz_sincube = 3
		close;
	} else if (lhz_sincube == 3) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Por favor...";
		mes "Por favor, diga para mim";
		mes "como eu posso entrar";
		mes "no Laborat�rio. Eu...";
		mes "Eu estou implorando!";
		next;
		mes "[Espinha]";
		mes "N�o! N�o adianta, pode parar de implorar, t�?";
		mes "S� vai ficar mais embara�oso para voc�!";
		mes "Ah, que tristeza...";
		lhz_sincube = 4;
		close;
	} else if (lhz_sincube == 4) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Porque voc� n�o me ajudaaaaaa?";
		mes "Por favoooooooor!";
		mes "Voc� � o �nico que conheceeeee!";
		next;
		mes "[Espinha]";
		mes "Hei, voc� � maluco ou o qu�?";
		mes "Escute, N�O significa N�O!.";
		mes "� isso e ponto final.";
		mes "Quantas vezes eu preciso dizer isso?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas deve haver algo que eu possa fazer para voc� me ajudar!";
		mes "�-� assim q-que as c-coisas f-funcionam.";
		mes "Voc� n�o p-pode...";
		mes "N�o p-pode sim-p-plesmente...";
		next;
		mes "[Espinha]";
		mes "T� bom, voc� venceu.";
		mes "Mas eu n�o vou arriscar a minha vida ajudando voc� a entrar naquele Laborat�rio de gra�a.";
		mes "Certo?";
		next;
		mes "[Espinha]";
		mes "Tudo o que voc� precisa fazer � voltar aqui com:";
		mes "^FF0000100.000.000.000.000.000 zenys^000000.";
		mes "Ent�o eu dou toda a ajuda que precisar.";
		mes "Muito bem?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Est� brincando, n�?";
		mes "N�o tem como eu jamais arranjar tantos zenys!";
		mes "Eu...";
		mes "Eu teria que, no m�nimo, dominar o mundo ou... ou...";
		next;
		mes "[Espinha]";
		mes "Bem pensado.";
		mes "Bem, talvez eu tenha pedido um pre�o muito salgado.";
		mes "Ainda quer minha ajuda?";
		mes "Ent�o me traga...";
		next;
		mes "[Espinha]";
		mes "^FF000020 Jellopys^000000.";
		next;
		mes "[Espinha]";
		mes "Nossa.";
		mes "Eu estou fazendo isso de gra�a...";
		next;
		if (select("Certo","N�o! Isso � imposs�vel!") == 1) {
			mes "[Espinha]";
			mes "Certo, ent�o me traga os 20 Jellopys.";
			mes "Mas tem que ser exatamente 20 Jellopys, certo?";
			mes "At� mais, amig�o...";
			lhz_sincube = 5;
			setquest(12014);
			close;
		} else {
			mes "[Espinha]";
			mes "O que voc� q.....";
			mes "Olha, agora � voc� que est� de brincadeira.";
			mes "Ou voc� me tr�s 20 Jellopys ou 100000..... de zenys";
			mes "seja l� o que eu disse!";
			close;
		}
	} else if (lhz_sincube == 5) {
		mes "[Espinha]";
		mes "Ent�o...";
		mes "Trouxe tudo?";
		next;
		switch (select("Estou trabalhando nisso","Prontinho!","Hmm... Tudo o qu�?")) {
			case 1:
			mes "[Espinha]";
			mes "Trabalhando nisso?";
			mes "Certo, eu sei que n�o pedi muito para voc�.";
			mes "Mas � melhor me levar a s�rio e se dedicar nisso!";
			mes "S�o 20  Jellopys!";
			close;
			case 2:
			if (countitem(Jellopy) > 19) {
				mes "[Espinha]";
				mes "Ah. Bom trabalho.";
				mes "Muito bem, estou vendo que posso confiar em voc�.";
				mes "Trato � trato, ent�o eu vou contar como entrar naquele Laborat�rio.";
				next;
				mes "[Espinha]";
				mes "Agora, se voc� est� se perguntando porque eu n�o tenho muito receio em ajudar voc�.";
				mes "� porque eu trabalhei naquele Laborat�rio e...";
				mes "Bem, eles me despediram injustamente.";
				next;
				mes "[Espinha]";
				mes "De qualquer forma, tudo o que eu puder fazer para causar problemas para eles, vale a pena fazer.";
				mes "S� um minuto que eu vou pegar umas coisas e ent�o eu conto para voc� o que voc� realmente precisa saber.";
				delitem(Jellopy,20);
				lhz_sincube = 6;
				close;
			} else {
				mes "[Espinha]";
				mes "Uh...";
				mes "Eu disse 20 Jellopys, n�o disse?";
				mes "Ent�o vai l� e arranje mais um tanto!";
				close;
			}
			case 3:
			mes "[Espinha]";
			mes "Mas qu�...?";
			mes "Como � que pode esquecer isso?";
			mes "Ah, nem precisa responder.";
			mes "Eu disse para voc� me trazer 20 Jellopys.";
			close;
		}
	} else if (lhz_sincube == 6) {
		mes "Certo. N�o tem um caminho f�cil de entrar no Laborat�rio.";
		mes "Entretanto, ter� que atravessar um labirinto secreto que deve levar voc� at� l�.";
		mes "Isso, se voc� ainda quiser e estiver preparad"+(Sex == SEX_MALE ? "o":"a")+" para ir...";
		next;
		if (select("Espere, ainda n�o!","Estou pronto, vamos l�!") == 2) {
			mes "[Espinha]";
			mes "�timo!";
			mes "Certo, ent�o,";
			mes "vamos l�!";
			close2;
			lhz_sincube = 7;
			switch (rand(1,3)) {
				case 1: warp("lhz_cube",67,193); break;
				case 2: warp("lhz_cube",66,136); break;
				case 3: warp("lhz_cube",66,74); break;
			}
			end;
		} else {
			mes "[Espinha]";
			mes "�...?";
			mes "Muito bem, sem problema.";
			mes "Te envio para l�, quando quiser.";
			close;
		}
	} else if (lhz_sincube =< 10) {
		mes "[Espinha]";
		mes "Hm, voc� ainda n�o deve ter terminado seja l� o que precisava fazer no Laborat�rio.";
		mes "Quer que eu mande voc� para l� de novo?";
		next;
		if (select("N�o","Sim") == 1) {
			mes "[Espinha]";
			mes "Nossa, deve ter sido duro para voc� l�.";
			mes "Certo, quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para ir l�, � s� falar comigo, t�?";
			close;
		}
		mes "[Espinha]";
		mes "Voc� tem muita coragem, heim? �!";
		mes "Gosto do seu estilo...";
		mes "Se prepare, que l� vamos n�s...!";
		close2;
		switch (rand(1,3)) {
			case 1: warp("lhz_cube",67,193); break;
			case 2: warp("lhz_cube",66,136); break;
			case 3: warp("lhz_cube",66,74); break;
		}
		end;
	} else if (lhz_sincube == 11) {
		mes "[Espinha]";
		mes "Hei, voc� voltou!";
		mes "Bom, eu estava come�ando a ficar um pouco preocupado com o que tinha acontecido com voc�.";
		mes "Ent�o, conseguiu o que queria l�?";
		lhz_sincube = 12;
		completequest(12014);
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim...";
		mes "De qualquer forma, espero que sim.";
		next;
		mes "[Espinha]";
		mes "Que bom!";
		mes "Seja l� o que for, espero que cause uma grande confus�o!";
		mes "Eu era um cientista respeitado em Regenschirm at� eles me demitirem!";
		mes "Trabalhar para aqueles babacas ingratos!";
		next;
		mes "[Espinha]";
		mes "Mas tamb�m, estou muito melhor na minha linha atual de trabalho.";
		mes "E n�o preciso nunca mais me preocupar com f�rmulas e algoritmos.";
	} else {
		mes "[Espinha]";
		mes "Ah, � voc�!";
		mes "Escute isso.";
		mes "Se quiser entrar no Regenschirm de novo.";
		mes "Tem que entrar naquele Cano de Esgoto que est� a nordeste de mim.";
		mes "� meio nojento, mas � o jeito...";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,237,198,0	script	Monte de Arquivos#cube	HIDDEN_NPC,{
	if (lhz_sincube < 7) {
		mes "^3355FFH� um monte de arquivos espalhados pelo ch�o.^000000";
		close;
	} else if (lhz_sincube < 10) {
		if (!lhz_secret01) {
			mes "^3355FFH� um monte de arquivos espalhados pelo ch�o.";
			mes "Eles parecem conter todo tipo de informa��o.";
			mes "Mas est�o todos misturados.^000000";
			next;
			if (select("Examinar os arquivos","Cancelar") == 1) {
				mes "^3355FFQuando voc� est� inspecionando os arquivos, uma Chave Vermelha cai tilintando no ch�o.";
				mes "Voc� decide pegar essa ^000000Chave Vermelha^3355FF.^000000";
				lhz_secret01 = 1;
			}
			close;
		} else {
			mes "^3355FFEste � o lugar onde voc� encontrou a ^000000Chave Vermelha^3355FF quando estava examinado os arquivos espalhados pelo ch�o.^000000";
			close;
		}
	} else {
		mes "^3355FFEste � o lugar onde voc� encontrou a ^000000Chave Vermelha^3355FF quando estava examinado os arquivos espalhados pelo ch�o.^000000";
		close;
	}
}

lhz_cube,242,201,0	script	Gaveteiro#cube	HIDDEN_NPC,{
	if (!lhz_secret01) {
		mes "^3355FFEste gaveteiro parece interessante.";
		mes "Mas est� trancado e voc� n�o pode abri-lo.^000000";
		close;
	} else if (lhz_secret01 == 1) {
		mes "^3355FFEste gaveteiro parece interessante.";
		mes "Mas est� trancado e voc� n�o pode abri-lo.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Chave Vermelha") {
			mes "^3355FFVoc� insere a Chave Vermelha na fechadura e abre o gaveteiro.";
			mes "Dentro voc� descobre um ^000000Canivete^3355FF e decide peg�-lo.";
			mes "Afinal, ele pode ser bem �til.^000000";
			lhz_secret01 = 2;
		} else {
			mes "^3355FFInfelizmente, voc� n�o consegue abrir ou quebrar o cadeado no gaveteiro fazendo isso.";
			mes "Voc� precisa tentar outra coisa.^000000";
		}
		close;
	} else {
		mes "^3355FFEste � o gaveteiro onde voc� encontrou o ^000000Canivete^3355FF.";
		mes "Agora ele est� vazio e n�o tem nada de interessante.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,234,202,0	script	Quadro#cube	HIDDEN_NPC,{
	if (lhz_secret01 == 2) {
		mes "^3355FFEste quadro pendurado na parede prende sua aten��o por alguma raz�o inexplic�vel.^000000";
		next;
		if (select("Olhar atr�s do quadro","Cancelar") == 1) {
			mes "^3355FFVoc� puxa e empurra com toda a sua for�a.";
			mes "Mas o quadro � muito dif�cil de se mover s� com for�a bruta.^000000";
			next;
			input(.@input$);
			if (.@input$ == "Canivete") {
				mes "^3355FFVoc� pega o canivete, enfia por tr�s do quadro e o vira para poder arrancar o quadro da parede.^000000";
				next;
				mes "^3355FFAtr�s do quadro, voc� descobre que foram escritos os seguintes n�meros:^000000";
				mes "";
				.@rand = rand(1,3);
				if (.@rand == 1) {
					mes "4 3 2 9 1 6 8 2 7";
					lhz_secret01 = 3;
				} else if (.@rand == 2) {
					mes "3 6 4 1 2 8 7 1 5";
					lhz_secret01 = 4;
				} else {
					mes "4 9 3 7 6 2 8 6 6";
					lhz_secret01 = 5;
				}
				close;
			} else {
				mes "^3355FFInfelizmente, parece que isso n�o � o suficiente para mover o quadro.^000000";
				close;
			}
		}
		close;
	} else if (lhz_secret01 < 6) {
		mes "^3355FFOs seguintes n�meros foram escritos atr�s do quadro.";
		mes "Se eles foram escondidos, esses n�meros devem ter alguma import�ncia.^000000";
		mes "";
		if (lhz_secret01 == 3) {
			mes "4 3 2 9 1 6 8 2 7";
		} else if (lhz_secret01 == 4) {
			mes "3 6 4 1 2 8 7 1 5";
		} else if (lhz_secret01 == 5) {
			mes "4 9 3 7 6 2 8 6 6";
		}
		close;
	} else {
		mes "^3355FFEste quadro pendurado na parede prende sua aten��o por alguma raz�o inexplic�vel.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,248,179,0	script	Ba�#cube	HIDDEN_NPC,{
	if (lhz_sincube == 7) {
		mes "^3355FFVoc� encontra um ba�, mas o mais importante � que tem um machado comum sobre ele.^000000";
		next;
		if (select("Pegar o Machado","Cancelar") == 1) {
			mes "^3355FFVoc� pega um ^000000Machado^3355FF comum.^000000";
			lhz_sincube = 8;
		}
		close;
	} else {
		mes "^3355FF� s� um ba�";
		mes "comum. Antes tinha";
		mes "um ^000000Machado^3355FF comum sobre";
		mes "ele, mas voc� o pegou.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,237,183,0	script	Barril#cube	HIDDEN_NPC,{
	if (lhz_sincube < 8) {
		mes "^3355FFVoc� encontrou um barril miseravelmente constru�do.^000000";
		close;
	} else if (lhz_sincube == 8) {
		mes "^3355FFVoc� encontrou um barril miseravelmente constru�do.";
		mes "Voc� percebe que h� algo dentro dele.";
		mes "Mas precisa de alguma coisa para abrir o barril.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Machado") {
			mes "^3355FFCom o machado nas m�os, voc� o ergue acima da cabe�a e e d� uma tremenda machadada no topo do barril.";
			mes "Dentro voc� descobre uma caixa com uma placa de metal no topo.^000000";
			next;
			mes "^3355FFOs n�meros de um a nove est�o gravados.";
			mes "Como um tipo de teclado na superf�cie da placa de metal que fica sobre a caixa que voc� encontrou...^000000";
			lhz_sincube = 9;
		} else {
			mes "^3355FFFazendo isso voc� provavelmente n�o vai abrir esse barril.^000000";
		}
		close;
	} else if (lhz_sincube == 9) {
		if (lhz_secret01 < 3) {
			mes "^3355FFEssa � a caixa com a placa de metal que parece ser um teclado mal feito.^000000";
			close;
		} else if (lhz_secret01 >= 3 && lhz_secret01 <= 5) {
			switch (lhz_secret01) {
				case 3: setarray .@numbers[0],4,3,2,9,1,6,8,2,7; break;
				case 4: setarray .@numbers[0],3,6,4,1,2,8,7,1,5; break;
				case 5: setarray .@numbers[0],4,9,3,7,6,2,8,6,6; break;
			}
			mes "^3355FFVoc� decide tentar alguns n�meros no teclado gravado na placa de metal no topo da caixa que voc� encontrou no barril.^000000";
			next;
			for($@i = 0; .@i < 9; ++.@i) {
				input(.@input);
				if (.@input == .@numbers[.@i]) {
					.@number_line += 1;
				}
			}
			if (.@number_line == 9) {
				mes "^3355FFA placa de metal desliza se abrindo e voc� encontra uma Chave dentro da caixa.";
				mes "Voc� guarda essa ^000000Chave Amarela^3355FF com voc�.^000000";
				lhz_secret01 = 6;
			} else {
				mes "^3355FFNada aconteceu.^000000";
			}
			close;
		} else {
			mes "^3355FFEssa � a caixa com o teclado na qual voc� encontrou a ^000000Chave Amarela^3355FF.";
			mes "Agora a caixa est� vazia.^000000";
			close;
		}
	}
}

// ------------------------------------------------------------------
lhz_cube,224,192,0	script	Gerador de For�a#cube	HIDDEN_NPC,{
	if (lhz_secret01 < 6) {
		mes "^3355FFIsso � uma m�quina imensa e barulhenta com um painel frontal que tem uma marca estranha.";
		mes "Ela tem um buraco de chave logo ao lado desse painel.^000000";
		close;
	}
	else if (lhz_secret01 == 6) {
		mes "^3355FFIsso � uma m�quina imensa e barulhenta com um painel frontal que tem uma marca estranha.";
		mes "Ela tem um buraco de chave logo ao lado desse painel.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Chave Amarela") {
			mes "^3355FFVoc� coloca a Chave Amarela no buraco girando-a, o que faz com que a m�quina d� umas tossidas e pare.^000000";
			next;
			mes "^3355FFVoc� percebe que a ^000000Luz de Status^3355FF ao lado da cama se apagou.^000000";
			lhz_secret01 = 7;
		} else {
			mes "^3355FFNada aconteceu.";
			mes "Provavelmente voc� precise encontrar a chave certa para colocar no buraco.^000000";
		}
		close;
	}
	mes "^3355FF� uma m�quina imensa.^000000";
	close;
}

// ------------------------------------------------------------------
lhz_cube,244,201,0	script	L�mpada#cube	HIDDEN_NPC,{
	if (lhz_secret01 < 7) {
		mes "^3355FFA Luz est� acesa.";
		mes "E parece que h� algo dentro do l�mpada.";
		mes "Mas voc� n�o consegue chegar perto porque ela gera um calor incr�vel.^000000";
		close;
	}
	else if (lhz_secret01 == 7) {
		mes "A Luz est� desligada agora e l�mpada j� esfriou.";
		next;
		if (select("Deixe a l�mpada a�","Quebrar a l�mpada") == 1) {
			mes "^3355FFVoc� quebra a l�mpada da Luz e descobre uma outra chave.";
			mes "Voc� guarda a ^000000Chave Preta^3355FF.^000000";
			lhz_secret01 = 8;
		}
		close;
	} else {
		mes "^3355FFVoc� acha os restos de uma l�mpada quebrada.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,224,197,0	script	Tubo de Ensaio#cube	HIDDEN_NPC,{
	if (lhz_secret01 < 8) {
		mes "^3355FFVoc� encontrou um estranho tubo que parece conter alguma coisa.";
		mes "Debaixo do tubo tem uma placa fina com um buraco para chave e uma abertura para colocar um cart�o.^000000";
		close;
	}
	else if (lhz_secret01 == 8) {
		mes "^3355FFVoc� encontrou um estranho tubo que parece conter alguma coisa.";
		mes "Debaixo do tubo tem uma placa fina com um buraco para chave e uma abertura para colocar um cart�o.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Chave Preta") {
			mes "^3355FFVoc� inseriu a Chave Preta no buraco e o tubo de ensaio se abriu revelando um objeto ^000000Oval^3355FF que voc� resolve levar.^000000";
			lhz_secret01 = 9;
		} else {
			mes "^3355FFNada acontece...^000000";
		}
		close;
	}
	else if (lhz_secret01 == 9) {
		mes "^3355FFAqui � o lugar onde voc� obteve o objeto ^000000Oval^3355FF.";
		mes "Quando voc� examina o lugar onde est� o tubo.";
		mes "Percebe uma fissura artificial no ch�o que provavelmente pode ser aberta...^000000";
		close;
	}
	else if (lhz_sincube == 10) {
		mes "^3355FFH� uma abertura para cart�o fino e retangular na frente do tubo.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Passe do Laborat�rio") {
			if (countitem(Lab_Passport)) {
				mes "^3355FFVoc� coloca o cart�o de Passe do Laborat�rio na abertura e a fissura artificial no ch�o se abre.";
				mes "Revelando uma escada subterr�nea.^000000";
				next;
				if (select("Descer as escadas","Cancelar") == 1) {
					mes "^3355FFVoc� desce os longos lances da sinuosa escada...^000000";
					close2;
					lhz_sincube = 11;
					lhz_secret01 = 0;
					lhz_secret02 = 0;
					lhz_secret03 = 0;
					warp("lhz_cube",177,13);
					end;
				}
				close;
			}
		}
		mes "^3355FFNada aconteceu.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,234,200,0	script	Mesa#cube	HIDDEN_NPC,{
	if (lhz_secret02 <= 1) {
		mes "^3355FFVoc� encontrou uma mesa completamente desorganizada.^000000";
		next;
		switch (select("Examinar sobre a mesa","Examinar sob a mesa","Examinar a gaveta da mesa")) {
			case 1:
			mes "^3355FFV�rios documentos, livros e equipamentos de laborat�rio est�o amontoados sobre a mesa.";
			mes "Mas, agora, nenhum deles parece ser �til.^000000";
			close;
			case 2:
			if (!lhz_secret02) {
				mes "^3355FFSob essa mesa, de todos os lugares poss�veis, voc� encontra uma ^000000Vareta Curta^3355FF e decide guard�-la.";
				mes "Nunca se sabe quando uma dessas ser� necess�ria.^000000";
				lhz_secret02 = 1;
			} else {
				mes "^3355FFFoi aqui que voc� encontrou uma das duas Varetas Curtas para fazer sua ^000000Vareta Longa^3355FF.";
				mes "N�o h� mais nada aqui embaixo, portanto n�o adianta voc� ficar se delongando.^000000";
			}
			close;
			case 3:
			mes "^3355FFA gaveta da mesa est� trancada.";
			mes "Provavelmente por uma boa raz�o.";
			mes "Afinal, voc� acabou de tentar invadir esse lugar �ntimo e particular.^000000";
			close;
		}
	} else {
		mes "^3355FFEssa mesa est� atulhada com todo tipo de objetos, mas esse � o destino de todas as mesas de escrit�rio.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,247,198,0	script	Cama#cube	HIDDEN_NPC,{
	if (!lhz_secret02) {
		mes "^3355FFVoc� encontrou uma cama";
		mes "com os len��is";
		mes "desarrumados.^000000";
		next;
	} else if (lhz_secret02 == 1) {
		mes "^3355FFVoc� encontrou uma cama com os len��is desarrumados.^000000";
		next;
		if (select("Examinar sobre a cama","Examinar sob a cama") == 1) {
			mes "^3355FFN�o tem ningu�m sobre a cama e se voc� subir, vai conseguir ficar sozinho nela.";
			mes "Para algumas pessoas, isso � uma verdade imut�vel.^000000";
		} else {
			mes "^3355FFSob a cama, voc� encontra uma ^000000Vareta Curta^3355FF que decide guardar.";
			mes "Nunca se sabe quando certos tipos de objetos aparentemente in�teis salvar�o sua vida.^000000";
			lhz_secret02 = 2;
		}
		close;
	} else if (lhz_secret02 == 2) {
		mes "^3355FFVoc� encontra uma cama desarrumada onde parece ter tido uma festa.^000000";
		next;
		if (select("Examinar sobre a cama","Examinar sob a cama") == 1) {
			mes "^3355FFN�o tem ningu�m sobre a cama e se voc� subir, vai conseguir ficar sozinho nela.";
			mes "Para algumas pessoas, isso � uma verdade imut�vel.^000000";
		} else {
			mes "^3355FFNum canto distante e empoeirado debaixo da cama, voc� consegue ver um objeto.";
			mes "Se voc� conseguisse alcan��-lo...^000000";
			next;
			input(.@input$);
			if (.@input$ == "Vareta Longa") {
				mes "^3355FFCom a Vareta Longa na m�o, voc� consegue alcan�ar o objeto e arrast�-lo sob a cama at� voc�.";
				mes "Agora voc� possui o ^000000Cubo^3355FF que estava sob a cama.^000000";
				lhz_secret02 = 3;
			} else {
				mes "^3355FFInfelizmente,";
				mes "o que voc� usou para";
				mes "alcan�ar o objeto";
				mes "n�o funcionou.^000000";
			}
		}
		close;
	} else {
		mes "^3355FFAqui � o lugar onde voc� descobriu um tipo estranho de ^000000Cubo^3355FF.^000000 ";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,229,184,0	script	Ta�a#cube	HIDDEN_NPC,{
	if (lhz_sincube < 10) {
		if (!lhz_secret03) {
			mes "^3355FFVoc� descobre uma garrafa e uma ta�a vazias.";
			mes "Parece que voc� perdeu uma festa.^000000";
			next;
			if (select("Examine a ta�a","Deixe as duas a�") == 1) {
				mes "^3355FFDentro da ta�a, voc� encontra uma ^000000Chave Enferrujada^3355FF que voc� decide guardar.";
				mes "Por�m, de alguma forma voc� precisa tirar a ferrugem dela.";
				mes "Talvez mergulhando a chave em alguma subst�ncia corrosiva?^000000";
				lhz_secret03 = 1;
			}
			close;
		} else {
			mes "^3355FFNessa ta�a voc� descobriu";
			mes "aquela ^000000Chave Enferrujada^3355FF.^000000";
			close;
		}
	} 
	close;
}

// ------------------------------------------------------------------
lhz_cube,231,202,0	script	Produtos Qu�micos#cube	HIDDEN_NPC,{
	if (!lhz_secret03) {
		mes "^3355FFNa prateleira h� uma garrafa contendo uma subst�ncia levemente corrosiva.^000000";
		close;
	} else if (lhz_secret03 == 1) {
		mes "^3355FFNa prateleira h� uma garrafa contendo uma subst�ncia levemente corrosiva.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Chave Enferrujada") {
			mes "^3355FFDerramando o produto a ferrugem da Chave come�a a se dissolver, deixando-a pronta para ser usada.";
			mes "Agora que ela est� limpa.";
			mes "Voc� percebe que a Chave Enferrujada era uma brilhante ^000000Chave Verde^3355FF.^000000";
			lhz_secret03 = 2;
		} else {
			mes "^3355FFO produto � mesmo bem pouco corrosivo e n�o aconteceu nada.^000000";
		}
		close;
	} else {
		mes "^3355FFEsses s�o os produtos qu�micos que voc� usou para limpar a Chave Enferrujada e restaurar a cor original, transformando-a na ^000000Chave Verde^3355FF.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,249,191,0	script	Gabinete#cube	HIDDEN_NPC,{
	if (lhz_secret03 < 2) {
		mes "^3355FFVoc� encontrou um gabinete que cont�m muitas gavetas.";
		mes "Ser� que h� algo de �til dentro delas?";
		close;
	}
	else if (lhz_secret03 == 2) {
		mes "^3355FFVoc� encontrou um gabinete que cont�m muitas gavetas.";
		mes "Ser� que h� algo de �til dentro delas?";
		next;
		input(.@input$);
		if (.@input$ == "Chave Verde") {
			mes "^3355FFVoc� pega a Chave Verde e descobre que ela se encaixa na fechadura de uma das gavetas.";
			mes "Voc� abre a gaveta e pega um estranho ^000000Pol�gono^3355FF.^000000";
			lhz_secret03 = 3;
		} else {
			mes "^3355FFMesmo usando isso voc� n�o consegue abrir o gabinete.^000000";
		}
		close;
	} else {
		mes "^3355FFEsse � o gabinete onde voc� usou a Chave Verde para abrir uma das Gavetas e pegar um ^000000Pol�gono^3355FF.";
		mes "Voc� est� bem contente com o seu Pol�gono e n�o precisa abrir as outras gavetas.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,248,193,0	script	Caixa#cube1	HIDDEN_NPC,{
	if (lhz_sincube != 10) {
		if (lhz_secret01 < 10 && lhz_secret02 < 4 && lhz_secret03 < 3) {
			mes "^3355FFVoc� encontra uma caixa com tr�s buracos de diferentes formatos.^000000";
			next;
			switch (select("Um buraco oval","Um buraco c�bico","Um buraco em pol�gono")) {
				case 1:
				if (lhz_secret01 == 9) {
					next;
					input(.@input$);
					if (.@input$ == "Oval") {
						mes "^3355FFVoc� insere o objeto Oval no buraco de formato oval e ele se encaixa perfeitamente.^000000";
						lhz_secret01 = 10;
						close;
					} else {
						mes "^3355FFNada aconteceu.^000000";
						close;
					}
				} else if (lhz_secret01 == 10) {
					mes "^3355FFO buraco de formato oval j� cont�m um objeto Oval que o preenche.";
					mes "Al�m disso, voc� n�o tem mais nada que tenha um formato Oval.^000000";
					close;
				} else {
					mes "^3355FFNada aconteceu.^000000";
					close;
				}
				case 2:
				if (lhz_secret02 == 3) {
					next;
					input(.@input$);
					if (.@input$ == "Cubo") {
						mes "^3355FFVoc� insere o Cubo no buraco com o formato c�bico e ele se encaixa no lugar.";
						mes "Finalmente foi justificado todo seu treinamento no Jardim de Inf�ncia.^000000";
						lhz_secret02 = 4;
						close;
					} else {
						mes "^3355FFNada aconteceu.^000000";
						close;
					}
				} else if (lhz_secret02 == 4) {
					mes "^3355FFVoc� j� colocou um Cubo no buraco.";
					mes "Voc� poderia tir�-lo e coloc�-lo de volta.";
					mes "Mas isso seria uma total perda de tempo.^000000";
					close;
				} else {
					mes "^3355FFNada aconteceu.^000000";
					close;
				}
				case 3:
				if (lhz_secret03 == 3) {
					next;
					input(.@input$);
					if (.@input$ == "Pol�gono") {
						mes "^3355FFFelizmente, aquele indescrit�vel Pol�gono que voc� possui tem exatamente a mesma forma que este indescrit�vel buraco em Pol�gono.";
						mes "O Pol�gono se encaixa perfeitamente, como se fosse destino dele ficar aqui.^000000";
						lhz_secret03 = 4;
						close;
					} else {
						mes "^3355FFNada aconteceu.^000000";
						close;
					}
				} else if (lhz_secret03 == 4) {
					mes "^3355FFO Pol�gono j� foi colocado no buraco.";
					mes "Acredite, isso � o melhor que um Pol�gono pode fazer por voc�.^000000";
					close;
				} else {
					mes "^3355FFNada aconteceu.^000000";
					close;
				}
			}
		} else if (lhz_secret01 == 10 && lhz_secret02 == 4 && lhz_secret03 == 3) {
			mes "^3355FFVoc� encontra uma caixa com tr�s buracos de diferentes formatos que agora est�o preenchidos pelos objetos que voc� colocou.^000000";
			next;
			if (select("Abra a caixa","Deixe a caixa a�") == 1) {
				mes "^3355FFVoc� abre a caixa e encontra um pequeno cart�o onde est� escrito ^000000Passe do Laborat�rio^3355FF.";
				lhz_sincube = 10;
				getitem(Lab_Passport,1);
			}
			close;
		}
	} else {
		mes "^3355FFVoc� encontra uma caixa aberta que continha o ^000000Passe do Laborat�rio^3355FF.";
		mes "Essa caixa n�o tem mais nenhuma utilidade para voc�.";
		mes "Mas os seus mist�rios foram um grande desafio.^000000";
		close;
	}
}
