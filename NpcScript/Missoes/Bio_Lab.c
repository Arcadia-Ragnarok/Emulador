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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest do acesso ao Laboratório de Somatologia             |
\*-----------------------------------------------------------------*/

lighthalzen,341,224,3	script	Espinha#lhzcube	4_M_LGTGUARD,{
	if (!lhz_sincube) {
		mes "[Espinha]";
		mes "Quê...?";
		mes "Tem alguma coisa na minha cara?";
		mes "Pare de me encarar e me deixe trabalhar.";
		lhz_sincube = 1;
		close;
	} else if (lhz_sincube == 1) {
		mes "[Espinha]";
		mes "Ei. Ei, você.";
		mes "Você ainda está me encarando. Pare com isso.";
		mes "Estou ocupado aqui e você está me aborrecendo.";
		lhz_sincube = 2;
		close;
	} else if (lhz_sincube == 2) {
		mes "[Espinha]";
		mes "É sério, você está começando a me dar nos nervos!";
		mes "Mas o que é que você quer de mim?!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Na verdade, nada.";
		mes "Eu só gosto de ficar vendo você trabalhar.";
		mes "Aliás, o que é que você faz exatamente, heim?";
		next;
		mes "[Espinha]";
		mes "Ei! Se eu pudesse ficar mostrando o que eu estou fazendo.";
		mes "Eu não ficaria tão tenso com você olhando o que eu faço, não acha?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Nããoooo...";
		mes "Eu acho que você fica sempre tenso mesmo.";
		next;
		mes "[Espinha]";
		mes "Caramba!";
		mes "Então você vai ficar ai sentado e me olhando o dia todo?!";
		mes "Tudo bem então";
		mes "Eu vou ignorar você!";
		next;
		mes "[Espinha]";
		mes "...";
		mes "......";
		mes "Isso realmente me irrita!";
		mes "Por que você não dá o fora?!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, eu também estava pensando porque é que você trabalha em um lugar que é tão, hum... depressivo.";
		next;
		mes "[Espinha]";
		mes "Tá bom, certo!";
		mes "Mas assim que eu contar o que eu faço aqui, você  cai fora!";
		mes "Certo?";
		mes "E mais, vai ter que ficar com o bico calado.";
		mes "Entende, o que eu faço é meio ilegal.";
		next;
		mes "[Espinha]";
		mes "Eu mostro as rotas para as pessoas entrarem em Lighthalzen.";
		mes "Ou mesmo ir a qualquer lugar da cidade, sem autorização.";
		mes "Caramba, eu posso até mesmo colocar você naquele Laboratório...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "E-espere!";
		mes "Laboratório?!";
		mes "Sério?";
		mes "Você consegue me colocar lá dentro?";
		next;
		mes "[Espinha]";
		mes "Pelos céus...";
		mes "Você não vai me deixar em paz, né?";
		mes "Olha, você parece legal, mesmo sendo meio teimoso, garoto.";
		mes "Mas eu não confio nem trabalho para estranhos, ponto.";
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas não há nada que eu possa fazer para você me ajudar a entrar no Laboratório?";
		next;
		mes "[Espinha]";
		mes "Não, sem chance.";
		mes "Não importa o quanto você implore.";
		mes "Eu não vou me arriscar a confiar em alguém que quer conhecer uma rota secreta.";
		mes "Agora, cai fora daqui!";
		lhz_sincube = 3
		close;
	} else if (lhz_sincube == 3) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Por favor...";
		mes "Por favor, diga para mim";
		mes "como eu posso entrar";
		mes "no Laboratório. Eu...";
		mes "Eu estou implorando!";
		next;
		mes "[Espinha]";
		mes "Não! Não adianta, pode parar de implorar, tá?";
		mes "Só vai ficar mais embaraçoso para você!";
		mes "Ah, que tristeza...";
		lhz_sincube = 4;
		close;
	} else if (lhz_sincube == 4) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Porque você não me ajudaaaaaa?";
		mes "Por favoooooooor!";
		mes "Você é o único que conheceeeee!";
		next;
		mes "[Espinha]";
		mes "Hei, você é maluco ou o quê?";
		mes "Escute, NÃO significa NÃO!.";
		mes "É isso e ponto final.";
		mes "Quantas vezes eu preciso dizer isso?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Mas deve haver algo que eu possa fazer para você me ajudar!";
		mes "É-é assim q-que as c-coisas f-funcionam.";
		mes "Você não p-pode...";
		mes "Não p-pode sim-p-plesmente...";
		next;
		mes "[Espinha]";
		mes "Tá bom, você venceu.";
		mes "Mas eu não vou arriscar a minha vida ajudando você a entrar naquele Laboratório de graça.";
		mes "Certo?";
		next;
		mes "[Espinha]";
		mes "Tudo o que você precisa fazer é voltar aqui com:";
		mes "^FF0000100.000.000.000.000.000 zenys^000000.";
		mes "Então eu dou toda a ajuda que precisar.";
		mes "Muito bem?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Está brincando, né?";
		mes "Não tem como eu jamais arranjar tantos zenys!";
		mes "Eu...";
		mes "Eu teria que, no mínimo, dominar o mundo ou... ou...";
		next;
		mes "[Espinha]";
		mes "Bem pensado.";
		mes "Bem, talvez eu tenha pedido um preço muito salgado.";
		mes "Ainda quer minha ajuda?";
		mes "Então me traga...";
		next;
		mes "[Espinha]";
		mes "^FF000020 Jellopys^000000.";
		next;
		mes "[Espinha]";
		mes "Nossa.";
		mes "Eu estou fazendo isso de graça...";
		next;
		if (select("Certo","Não! Isso é impossível!") == 1) {
			mes "[Espinha]";
			mes "Certo, então me traga os 20 Jellopys.";
			mes "Mas tem que ser exatamente 20 Jellopys, certo?";
			mes "Até mais, amigão...";
			lhz_sincube = 5;
			setquest(12014);
			close;
		} else {
			mes "[Espinha]";
			mes "O que você q.....";
			mes "Olha, agora é você que está de brincadeira.";
			mes "Ou você me trás 20 Jellopys ou 100000..... de zenys";
			mes "seja lá o que eu disse!";
			close;
		}
	} else if (lhz_sincube == 5) {
		mes "[Espinha]";
		mes "Então...";
		mes "Trouxe tudo?";
		next;
		switch (select("Estou trabalhando nisso","Prontinho!","Hmm... Tudo o quê?")) {
			case 1:
			mes "[Espinha]";
			mes "Trabalhando nisso?";
			mes "Certo, eu sei que não pedi muito para você.";
			mes "Mas é melhor me levar a sério e se dedicar nisso!";
			mes "São 20  Jellopys!";
			close;
			case 2:
			if (countitem(Jellopy) > 19) {
				mes "[Espinha]";
				mes "Ah. Bom trabalho.";
				mes "Muito bem, estou vendo que posso confiar em você.";
				mes "Trato é trato, então eu vou contar como entrar naquele Laboratório.";
				next;
				mes "[Espinha]";
				mes "Agora, se você está se perguntando porque eu não tenho muito receio em ajudar você.";
				mes "É porque eu trabalhei naquele Laboratório e...";
				mes "Bem, eles me despediram injustamente.";
				next;
				mes "[Espinha]";
				mes "De qualquer forma, tudo o que eu puder fazer para causar problemas para eles, vale a pena fazer.";
				mes "Só um minuto que eu vou pegar umas coisas e então eu conto para você o que você realmente precisa saber.";
				delitem(Jellopy,20);
				lhz_sincube = 6;
				close;
			} else {
				mes "[Espinha]";
				mes "Uh...";
				mes "Eu disse 20 Jellopys, não disse?";
				mes "Então vai lá e arranje mais um tanto!";
				close;
			}
			case 3:
			mes "[Espinha]";
			mes "Mas quê...?";
			mes "Como é que pode esquecer isso?";
			mes "Ah, nem precisa responder.";
			mes "Eu disse para você me trazer 20 Jellopys.";
			close;
		}
	} else if (lhz_sincube == 6) {
		mes "Certo. Não tem um caminho fácil de entrar no Laboratório.";
		mes "Entretanto, terá que atravessar um labirinto secreto que deve levar você até lá.";
		mes "Isso, se você ainda quiser e estiver preparad"+(Sex == SEX_MALE ? "o":"a")+" para ir...";
		next;
		if (select("Espere, ainda não!","Estou pronto, vamos lá!") == 2) {
			mes "[Espinha]";
			mes "Ótimo!";
			mes "Certo, então,";
			mes "vamos lá!";
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
			mes "É...?";
			mes "Muito bem, sem problema.";
			mes "Te envio para lá, quando quiser.";
			close;
		}
	} else if (lhz_sincube =< 10) {
		mes "[Espinha]";
		mes "Hm, você ainda não deve ter terminado seja lá o que precisava fazer no Laboratório.";
		mes "Quer que eu mande você para lá de novo?";
		next;
		if (select("Não","Sim") == 1) {
			mes "[Espinha]";
			mes "Nossa, deve ter sido duro para você lá.";
			mes "Certo, quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" para ir lá, é só falar comigo, tá?";
			close;
		}
		mes "[Espinha]";
		mes "Você tem muita coragem, heim? É!";
		mes "Gosto do seu estilo...";
		mes "Se prepare, que lá vamos nós...!";
		close2;
		switch (rand(1,3)) {
			case 1: warp("lhz_cube",67,193); break;
			case 2: warp("lhz_cube",66,136); break;
			case 3: warp("lhz_cube",66,74); break;
		}
		end;
	} else if (lhz_sincube == 11) {
		mes "[Espinha]";
		mes "Hei, você voltou!";
		mes "Bom, eu estava começando a ficar um pouco preocupado com o que tinha acontecido com você.";
		mes "Então, conseguiu o que queria lá?";
		lhz_sincube = 12;
		completequest(12014);
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim...";
		mes "De qualquer forma, espero que sim.";
		next;
		mes "[Espinha]";
		mes "Que bom!";
		mes "Seja lá o que for, espero que cause uma grande confusão!";
		mes "Eu era um cientista respeitado em Regenschirm até eles me demitirem!";
		mes "Trabalhar para aqueles babacas ingratos!";
		next;
		mes "[Espinha]";
		mes "Mas também, estou muito melhor na minha linha atual de trabalho.";
		mes "E não preciso nunca mais me preocupar com fórmulas e algoritmos.";
	} else {
		mes "[Espinha]";
		mes "Ah, é você!";
		mes "Escute isso.";
		mes "Se quiser entrar no Regenschirm de novo.";
		mes "Tem que entrar naquele Cano de Esgoto que está a nordeste de mim.";
		mes "É meio nojento, mas é o jeito...";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,237,198,0	script	Monte de Arquivos#cube	HIDDEN_NPC,{
	if (lhz_sincube < 7) {
		mes "^3355FFHá um monte de arquivos espalhados pelo chão.^000000";
		close;
	} else if (lhz_sincube < 10) {
		if (!lhz_secret01) {
			mes "^3355FFHá um monte de arquivos espalhados pelo chão.";
			mes "Eles parecem conter todo tipo de informação.";
			mes "Mas estão todos misturados.^000000";
			next;
			if (select("Examinar os arquivos","Cancelar") == 1) {
				mes "^3355FFQuando você está inspecionando os arquivos, uma Chave Vermelha cai tilintando no chão.";
				mes "Você decide pegar essa ^000000Chave Vermelha^3355FF.^000000";
				lhz_secret01 = 1;
			}
			close;
		} else {
			mes "^3355FFEste é o lugar onde você encontrou a ^000000Chave Vermelha^3355FF quando estava examinado os arquivos espalhados pelo chão.^000000";
			close;
		}
	} else {
		mes "^3355FFEste é o lugar onde você encontrou a ^000000Chave Vermelha^3355FF quando estava examinado os arquivos espalhados pelo chão.^000000";
		close;
	}
}

lhz_cube,242,201,0	script	Gaveteiro#cube	HIDDEN_NPC,{
	if (!lhz_secret01) {
		mes "^3355FFEste gaveteiro parece interessante.";
		mes "Mas está trancado e você não pode abri-lo.^000000";
		close;
	} else if (lhz_secret01 == 1) {
		mes "^3355FFEste gaveteiro parece interessante.";
		mes "Mas está trancado e você não pode abri-lo.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Chave Vermelha") {
			mes "^3355FFVocê insere a Chave Vermelha na fechadura e abre o gaveteiro.";
			mes "Dentro você descobre um ^000000Canivete^3355FF e decide pegá-lo.";
			mes "Afinal, ele pode ser bem útil.^000000";
			lhz_secret01 = 2;
		} else {
			mes "^3355FFInfelizmente, você não consegue abrir ou quebrar o cadeado no gaveteiro fazendo isso.";
			mes "Você precisa tentar outra coisa.^000000";
		}
		close;
	} else {
		mes "^3355FFEste é o gaveteiro onde você encontrou o ^000000Canivete^3355FF.";
		mes "Agora ele está vazio e não tem nada de interessante.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,234,202,0	script	Quadro#cube	HIDDEN_NPC,{
	if (lhz_secret01 == 2) {
		mes "^3355FFEste quadro pendurado na parede prende sua atenção por alguma razão inexplicável.^000000";
		next;
		if (select("Olhar atrás do quadro","Cancelar") == 1) {
			mes "^3355FFVocê puxa e empurra com toda a sua força.";
			mes "Mas o quadro é muito difícil de se mover só com força bruta.^000000";
			next;
			input(.@input$);
			if (.@input$ == "Canivete") {
				mes "^3355FFVocê pega o canivete, enfia por trás do quadro e o vira para poder arrancar o quadro da parede.^000000";
				next;
				mes "^3355FFAtrás do quadro, você descobre que foram escritos os seguintes números:^000000";
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
				mes "^3355FFInfelizmente, parece que isso não é o suficiente para mover o quadro.^000000";
				close;
			}
		}
		close;
	} else if (lhz_secret01 < 6) {
		mes "^3355FFOs seguintes números foram escritos atrás do quadro.";
		mes "Se eles foram escondidos, esses números devem ter alguma importância.^000000";
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
		mes "^3355FFEste quadro pendurado na parede prende sua atenção por alguma razão inexplicável.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,248,179,0	script	Baú#cube	HIDDEN_NPC,{
	if (lhz_sincube == 7) {
		mes "^3355FFVocê encontra um baú, mas o mais importante é que tem um machado comum sobre ele.^000000";
		next;
		if (select("Pegar o Machado","Cancelar") == 1) {
			mes "^3355FFVocê pega um ^000000Machado^3355FF comum.^000000";
			lhz_sincube = 8;
		}
		close;
	} else {
		mes "^3355FFÉ só um baú";
		mes "comum. Antes tinha";
		mes "um ^000000Machado^3355FF comum sobre";
		mes "ele, mas você o pegou.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,237,183,0	script	Barril#cube	HIDDEN_NPC,{
	if (lhz_sincube < 8) {
		mes "^3355FFVocê encontrou um barril miseravelmente construído.^000000";
		close;
	} else if (lhz_sincube == 8) {
		mes "^3355FFVocê encontrou um barril miseravelmente construído.";
		mes "Você percebe que há algo dentro dele.";
		mes "Mas precisa de alguma coisa para abrir o barril.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Machado") {
			mes "^3355FFCom o machado nas mãos, você o ergue acima da cabeça e e dá uma tremenda machadada no topo do barril.";
			mes "Dentro você descobre uma caixa com uma placa de metal no topo.^000000";
			next;
			mes "^3355FFOs números de um a nove estão gravados.";
			mes "Como um tipo de teclado na superfície da placa de metal que fica sobre a caixa que você encontrou...^000000";
			lhz_sincube = 9;
		} else {
			mes "^3355FFFazendo isso você provavelmente não vai abrir esse barril.^000000";
		}
		close;
	} else if (lhz_sincube == 9) {
		if (lhz_secret01 < 3) {
			mes "^3355FFEssa é a caixa com a placa de metal que parece ser um teclado mal feito.^000000";
			close;
		} else if (lhz_secret01 >= 3 && lhz_secret01 <= 5) {
			switch (lhz_secret01) {
				case 3: setarray .@numbers[0],4,3,2,9,1,6,8,2,7; break;
				case 4: setarray .@numbers[0],3,6,4,1,2,8,7,1,5; break;
				case 5: setarray .@numbers[0],4,9,3,7,6,2,8,6,6; break;
			}
			mes "^3355FFVocê decide tentar alguns números no teclado gravado na placa de metal no topo da caixa que você encontrou no barril.^000000";
			next;
			for($@i = 0; .@i < 9; ++.@i) {
				input(.@input);
				if (.@input == .@numbers[.@i]) {
					.@number_line += 1;
				}
			}
			if (.@number_line == 9) {
				mes "^3355FFA placa de metal desliza se abrindo e você encontra uma Chave dentro da caixa.";
				mes "Você guarda essa ^000000Chave Amarela^3355FF com você.^000000";
				lhz_secret01 = 6;
			} else {
				mes "^3355FFNada aconteceu.^000000";
			}
			close;
		} else {
			mes "^3355FFEssa é a caixa com o teclado na qual você encontrou a ^000000Chave Amarela^3355FF.";
			mes "Agora a caixa está vazia.^000000";
			close;
		}
	}
}

// ------------------------------------------------------------------
lhz_cube,224,192,0	script	Gerador de Força#cube	HIDDEN_NPC,{
	if (lhz_secret01 < 6) {
		mes "^3355FFIsso é uma máquina imensa e barulhenta com um painel frontal que tem uma marca estranha.";
		mes "Ela tem um buraco de chave logo ao lado desse painel.^000000";
		close;
	}
	else if (lhz_secret01 == 6) {
		mes "^3355FFIsso é uma máquina imensa e barulhenta com um painel frontal que tem uma marca estranha.";
		mes "Ela tem um buraco de chave logo ao lado desse painel.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Chave Amarela") {
			mes "^3355FFVocê coloca a Chave Amarela no buraco girando-a, o que faz com que a máquina dê umas tossidas e pare.^000000";
			next;
			mes "^3355FFVocê percebe que a ^000000Luz de Status^3355FF ao lado da cama se apagou.^000000";
			lhz_secret01 = 7;
		} else {
			mes "^3355FFNada aconteceu.";
			mes "Provavelmente você precise encontrar a chave certa para colocar no buraco.^000000";
		}
		close;
	}
	mes "^3355FFÉ uma máquina imensa.^000000";
	close;
}

// ------------------------------------------------------------------
lhz_cube,244,201,0	script	Lâmpada#cube	HIDDEN_NPC,{
	if (lhz_secret01 < 7) {
		mes "^3355FFA Luz está acesa.";
		mes "E parece que há algo dentro do lâmpada.";
		mes "Mas você não consegue chegar perto porque ela gera um calor incrível.^000000";
		close;
	}
	else if (lhz_secret01 == 7) {
		mes "A Luz está desligada agora e lâmpada já esfriou.";
		next;
		if (select("Deixe a lâmpada aí","Quebrar a lâmpada") == 1) {
			mes "^3355FFVocê quebra a lâmpada da Luz e descobre uma outra chave.";
			mes "Você guarda a ^000000Chave Preta^3355FF.^000000";
			lhz_secret01 = 8;
		}
		close;
	} else {
		mes "^3355FFVocê acha os restos de uma lâmpada quebrada.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,224,197,0	script	Tubo de Ensaio#cube	HIDDEN_NPC,{
	if (lhz_secret01 < 8) {
		mes "^3355FFVocê encontrou um estranho tubo que parece conter alguma coisa.";
		mes "Debaixo do tubo tem uma placa fina com um buraco para chave e uma abertura para colocar um cartão.^000000";
		close;
	}
	else if (lhz_secret01 == 8) {
		mes "^3355FFVocê encontrou um estranho tubo que parece conter alguma coisa.";
		mes "Debaixo do tubo tem uma placa fina com um buraco para chave e uma abertura para colocar um cartão.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Chave Preta") {
			mes "^3355FFVocê inseriu a Chave Preta no buraco e o tubo de ensaio se abriu revelando um objeto ^000000Oval^3355FF que você resolve levar.^000000";
			lhz_secret01 = 9;
		} else {
			mes "^3355FFNada acontece...^000000";
		}
		close;
	}
	else if (lhz_secret01 == 9) {
		mes "^3355FFAqui é o lugar onde você obteve o objeto ^000000Oval^3355FF.";
		mes "Quando você examina o lugar onde está o tubo.";
		mes "Percebe uma fissura artificial no chão que provavelmente pode ser aberta...^000000";
		close;
	}
	else if (lhz_sincube == 10) {
		mes "^3355FFHá uma abertura para cartão fino e retangular na frente do tubo.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Passe do Laboratório") {
			if (countitem(Lab_Passport)) {
				mes "^3355FFVocê coloca o cartão de Passe do Laboratório na abertura e a fissura artificial no chão se abre.";
				mes "Revelando uma escada subterrânea.^000000";
				next;
				if (select("Descer as escadas","Cancelar") == 1) {
					mes "^3355FFVocê desce os longos lances da sinuosa escada...^000000";
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
		mes "^3355FFVocê encontrou uma mesa completamente desorganizada.^000000";
		next;
		switch (select("Examinar sobre a mesa","Examinar sob a mesa","Examinar a gaveta da mesa")) {
			case 1:
			mes "^3355FFVários documentos, livros e equipamentos de laboratório estão amontoados sobre a mesa.";
			mes "Mas, agora, nenhum deles parece ser útil.^000000";
			close;
			case 2:
			if (!lhz_secret02) {
				mes "^3355FFSob essa mesa, de todos os lugares possíveis, você encontra uma ^000000Vareta Curta^3355FF e decide guardá-la.";
				mes "Nunca se sabe quando uma dessas será necessária.^000000";
				lhz_secret02 = 1;
			} else {
				mes "^3355FFFoi aqui que você encontrou uma das duas Varetas Curtas para fazer sua ^000000Vareta Longa^3355FF.";
				mes "Não há mais nada aqui embaixo, portanto não adianta você ficar se delongando.^000000";
			}
			close;
			case 3:
			mes "^3355FFA gaveta da mesa está trancada.";
			mes "Provavelmente por uma boa razão.";
			mes "Afinal, você acabou de tentar invadir esse lugar íntimo e particular.^000000";
			close;
		}
	} else {
		mes "^3355FFEssa mesa está atulhada com todo tipo de objetos, mas esse é o destino de todas as mesas de escritório.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,247,198,0	script	Cama#cube	HIDDEN_NPC,{
	if (!lhz_secret02) {
		mes "^3355FFVocê encontrou uma cama";
		mes "com os lençóis";
		mes "desarrumados.^000000";
		next;
	} else if (lhz_secret02 == 1) {
		mes "^3355FFVocê encontrou uma cama com os lençóis desarrumados.^000000";
		next;
		if (select("Examinar sobre a cama","Examinar sob a cama") == 1) {
			mes "^3355FFNão tem ninguém sobre a cama e se você subir, vai conseguir ficar sozinho nela.";
			mes "Para algumas pessoas, isso é uma verdade imutável.^000000";
		} else {
			mes "^3355FFSob a cama, você encontra uma ^000000Vareta Curta^3355FF que decide guardar.";
			mes "Nunca se sabe quando certos tipos de objetos aparentemente inúteis salvarão sua vida.^000000";
			lhz_secret02 = 2;
		}
		close;
	} else if (lhz_secret02 == 2) {
		mes "^3355FFVocê encontra uma cama desarrumada onde parece ter tido uma festa.^000000";
		next;
		if (select("Examinar sobre a cama","Examinar sob a cama") == 1) {
			mes "^3355FFNão tem ninguém sobre a cama e se você subir, vai conseguir ficar sozinho nela.";
			mes "Para algumas pessoas, isso é uma verdade imutável.^000000";
		} else {
			mes "^3355FFNum canto distante e empoeirado debaixo da cama, você consegue ver um objeto.";
			mes "Se você conseguisse alcançá-lo...^000000";
			next;
			input(.@input$);
			if (.@input$ == "Vareta Longa") {
				mes "^3355FFCom a Vareta Longa na mão, você consegue alcançar o objeto e arrastá-lo sob a cama até você.";
				mes "Agora você possui o ^000000Cubo^3355FF que estava sob a cama.^000000";
				lhz_secret02 = 3;
			} else {
				mes "^3355FFInfelizmente,";
				mes "o que você usou para";
				mes "alcançar o objeto";
				mes "não funcionou.^000000";
			}
		}
		close;
	} else {
		mes "^3355FFAqui é o lugar onde você descobriu um tipo estranho de ^000000Cubo^3355FF.^000000 ";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,229,184,0	script	Taça#cube	HIDDEN_NPC,{
	if (lhz_sincube < 10) {
		if (!lhz_secret03) {
			mes "^3355FFVocê descobre uma garrafa e uma taça vazias.";
			mes "Parece que você perdeu uma festa.^000000";
			next;
			if (select("Examine a taça","Deixe as duas aí") == 1) {
				mes "^3355FFDentro da taça, você encontra uma ^000000Chave Enferrujada^3355FF que você decide guardar.";
				mes "Porém, de alguma forma você precisa tirar a ferrugem dela.";
				mes "Talvez mergulhando a chave em alguma substância corrosiva?^000000";
				lhz_secret03 = 1;
			}
			close;
		} else {
			mes "^3355FFNessa taça você descobriu";
			mes "aquela ^000000Chave Enferrujada^3355FF.^000000";
			close;
		}
	} 
	close;
}

// ------------------------------------------------------------------
lhz_cube,231,202,0	script	Produtos Químicos#cube	HIDDEN_NPC,{
	if (!lhz_secret03) {
		mes "^3355FFNa prateleira há uma garrafa contendo uma substância levemente corrosiva.^000000";
		close;
	} else if (lhz_secret03 == 1) {
		mes "^3355FFNa prateleira há uma garrafa contendo uma substância levemente corrosiva.^000000";
		next;
		input(.@input$);
		if (.@input$ == "Chave Enferrujada") {
			mes "^3355FFDerramando o produto a ferrugem da Chave começa a se dissolver, deixando-a pronta para ser usada.";
			mes "Agora que ela está limpa.";
			mes "Você percebe que a Chave Enferrujada era uma brilhante ^000000Chave Verde^3355FF.^000000";
			lhz_secret03 = 2;
		} else {
			mes "^3355FFO produto é mesmo bem pouco corrosivo e não aconteceu nada.^000000";
		}
		close;
	} else {
		mes "^3355FFEsses são os produtos químicos que você usou para limpar a Chave Enferrujada e restaurar a cor original, transformando-a na ^000000Chave Verde^3355FF.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,249,191,0	script	Gabinete#cube	HIDDEN_NPC,{
	if (lhz_secret03 < 2) {
		mes "^3355FFVocê encontrou um gabinete que contém muitas gavetas.";
		mes "Será que há algo de útil dentro delas?";
		close;
	}
	else if (lhz_secret03 == 2) {
		mes "^3355FFVocê encontrou um gabinete que contém muitas gavetas.";
		mes "Será que há algo de útil dentro delas?";
		next;
		input(.@input$);
		if (.@input$ == "Chave Verde") {
			mes "^3355FFVocê pega a Chave Verde e descobre que ela se encaixa na fechadura de uma das gavetas.";
			mes "Você abre a gaveta e pega um estranho ^000000Polígono^3355FF.^000000";
			lhz_secret03 = 3;
		} else {
			mes "^3355FFMesmo usando isso você não consegue abrir o gabinete.^000000";
		}
		close;
	} else {
		mes "^3355FFEsse é o gabinete onde você usou a Chave Verde para abrir uma das Gavetas e pegar um ^000000Polígono^3355FF.";
		mes "Você está bem contente com o seu Polígono e não precisa abrir as outras gavetas.^000000";
		close;
	}
}

// ------------------------------------------------------------------
lhz_cube,248,193,0	script	Caixa#cube1	HIDDEN_NPC,{
	if (lhz_sincube != 10) {
		if (lhz_secret01 < 10 && lhz_secret02 < 4 && lhz_secret03 < 3) {
			mes "^3355FFVocê encontra uma caixa com três buracos de diferentes formatos.^000000";
			next;
			switch (select("Um buraco oval","Um buraco cúbico","Um buraco em polígono")) {
				case 1:
				if (lhz_secret01 == 9) {
					next;
					input(.@input$);
					if (.@input$ == "Oval") {
						mes "^3355FFVocê insere o objeto Oval no buraco de formato oval e ele se encaixa perfeitamente.^000000";
						lhz_secret01 = 10;
						close;
					} else {
						mes "^3355FFNada aconteceu.^000000";
						close;
					}
				} else if (lhz_secret01 == 10) {
					mes "^3355FFO buraco de formato oval já contém um objeto Oval que o preenche.";
					mes "Além disso, você não tem mais nada que tenha um formato Oval.^000000";
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
						mes "^3355FFVocê insere o Cubo no buraco com o formato cúbico e ele se encaixa no lugar.";
						mes "Finalmente foi justificado todo seu treinamento no Jardim de Infância.^000000";
						lhz_secret02 = 4;
						close;
					} else {
						mes "^3355FFNada aconteceu.^000000";
						close;
					}
				} else if (lhz_secret02 == 4) {
					mes "^3355FFVocê já colocou um Cubo no buraco.";
					mes "Você poderia tirá-lo e colocá-lo de volta.";
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
					if (.@input$ == "Polígono") {
						mes "^3355FFFelizmente, aquele indescritível Polígono que você possui tem exatamente a mesma forma que este indescritível buraco em Polígono.";
						mes "O Polígono se encaixa perfeitamente, como se fosse destino dele ficar aqui.^000000";
						lhz_secret03 = 4;
						close;
					} else {
						mes "^3355FFNada aconteceu.^000000";
						close;
					}
				} else if (lhz_secret03 == 4) {
					mes "^3355FFO Polígono já foi colocado no buraco.";
					mes "Acredite, isso é o melhor que um Polígono pode fazer por você.^000000";
					close;
				} else {
					mes "^3355FFNada aconteceu.^000000";
					close;
				}
			}
		} else if (lhz_secret01 == 10 && lhz_secret02 == 4 && lhz_secret03 == 3) {
			mes "^3355FFVocê encontra uma caixa com três buracos de diferentes formatos que agora estão preenchidos pelos objetos que você colocou.^000000";
			next;
			if (select("Abra a caixa","Deixe a caixa aí") == 1) {
				mes "^3355FFVocê abre a caixa e encontra um pequeno cartão onde está escrito ^000000Passe do Laboratório^3355FF.";
				lhz_sincube = 10;
				getitem(Lab_Passport,1);
			}
			close;
		}
	} else {
		mes "^3355FFVocê encontra uma caixa aberta que continha o ^000000Passe do Laboratório^3355FF.";
		mes "Essa caixa não tem mais nenhuma utilidade para você.";
		mes "Mas os seus mistérios foram um grande desafio.^000000";
		close;
	}
}
