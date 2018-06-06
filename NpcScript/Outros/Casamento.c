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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Realiza casamento entre personagens                       |
\*-----------------------------------------------------------------*/

prt_church,97,100,4	script	Casamenteira#w	1_F_LIBRARYGIRL,{
	cutin("wedding_marry01",2);
	if (Upper == 2) {
		mes "[Casamenteira]";
		mes "Ol�!";
		mes "Meu nome � Maria e eu estou aqui para munir voc� com informa��es relacionadas ao casamento.";
		mes "Agora, voc� tem alguma pergunta?";
		next;
		if (select("Eu quero me casar","Eu n�o preciso de sua ajuda!") == 1) {
			mes "[Casamenteira]";
			mes "Oh, sinto muito, mas crian�as n�o podem se casar.";
			mes "Por que voc� n�o desfruta os prazeres simples da inf�ncia?";
			cutin("",255);
			close2;
			end;
		}
		mes "[Casamenteira]";
		mes "Oh, claro n�o, voc� � uma crian�a pequena n�o pode se casar h� muitas leis contra.";
		cutin("",255);
		close2;
		end;
	}
	mes "[Casamenteira]";
	mes "Casamento � a bela uni�o de duas almas que tem escolhido estar juntas para sempre.";
	mes "Para dividir suas alegrias e vida. ";
	mes "H� um algu�m especial assim em sua vida?";
	next;
	switch (select("Sobre o Casamento","Sobre o Procedimento","Solicitar se casar","Nada")) {
		case 1:
		mes "[Casamenteira]";
		mes "O S�bio e benevolente Rei Tristam III administrava as cerim�nias de casamento.";
		mes "Mas ele � n�o tem muito tempo h�bil para fazer por causa dos seus deveres reais e hor�rio com seus passos apressados freneticamente.";
		next;
		mes "[Casamenteira]";
		mes "O Bispo Vomars, o bispo do amor, � agora o oficializador das cerim�nias de casamento.";
		next;
		mes "[Casamenteira]";
		mes "Quando voc� se casa com algu�m, � para o resto de sua vida, ent�o pense cuidadosamente antes de fazer ou aceitar uma proposta de casamento.";
		break;
		case 2:
		mes "[Casamenteira]";
		mes "A primeira parte do procedimento do casamento � canditatar-se por completo.";
		mes "Quando a noiva e o noivo terminarem de se candidatar, eles t�m que formar um grupo de dois.";
		next;
		mes "[Casamenteira]";
		mes "Depois de formar um grupo dos dois, o casal deve ent�o falar com o Bispo Vomars.";
		next;
		mes "[Casamenteira]";
		mes "O noivo tem que falar primeiro e deve dizer o nome exato de sua noiva ao Bispo.";
		next;
		mes "[Casamenteira]";
		mes "Depois, a noiva falar� com o Bispo e lhe dir� o nome do noivo dela.";
		mes "Se estes nomes s�o ditos corretamente ao Bispo, eles poder�o permutar os an�is.";
		next;
		mes "[Casamenteira]";
		mes "Quando os an�is de casamento s�o permutados, o casal est� atado no matrim�nio.";
		next;
		mes "[Casamenteira]";
		mes "� claro, antes deste ponto, h� muitas chances para mudar de ideia, ent�o...";
		next;
		mes "[Casamenteira]";
		mes "Se h� muitos casais que querem se casar de uma vez.";
		mes "Por favor forme uma fila e falem com o Bispo Vomars na ordem de que s� um casal possa se casar de cada vez.";
		next;
		mes "[Casamenteira]";
		mes "Finalmente, fale o nome exato de s"+(Sex == SEX_MALE ? "ua":"eu")+" companheir"+(Sex == SEX_MALE ? "a":"o")+" ao Bispo Vomars, sem desperdi�ar muito tempo.";
		next;
		mes "[Casamenteira]";
		mes "Se voc� levar muito tempo, a cerim�nia automaticamente ser� cancelada e voc� ter� de come�ar de novo.";
		next;
		mes "[Casamenteira]";
		mes "As noivas precisam se lembrar que eles s� t�m 3 minutos para terminar de falar com Bispo Vomars depois que o noivo dela terminar de falar com ele.";
		next;
		if (select("Obrigado, isso ajuda muito!","Dizer o nome do companheiro?") == 1) {
			mes "[Casamenteira]";
			mes "Bem, eu estou aqui para ajudar os casamentos a proceder t�o suavemente quanto poss�vel.";
			next;
			mes "[Casamenteira]";
			mes "Se houver algo que voc� n�o entendeu, sinta � vontade para perguntar de novo.";
			cutin("",255);
			close2;
			end;
		}
		mes "[Casamenteira]";
		mes "O modo mais f�cil para escrever o nome de seu companheiro para o bispo � enviar uma mensagem privada a seu companheiro.";
		mes "Ent�o clique na se��o de nome a esquerda que � partida do lembrete de conversa.";
		next;
		mes "[Casamenteira]";
		mes "Aperte o 'Ctrl' e 'C' do teclado para copiar o nome.";
		next;
		mes "[Casamenteira]";
		mes "Ent�o, voc� pode colar o nome dentro do prompt apertando o 'Ctrl' e 'V' do teclado.";
		mes "Parece f�cil, certo?";
		next;
		mes "[Casamenteira]";
		mes "Certo, agora deixe-me.";
		mes "Praticar dando o nome de seu companheiro usando o m�todo que eu h� pouco descrevi.";
		next;
		input(.@partner$);
		mes "[Casamenteira]";
		mes "Certo, depois que voc� decidir se casar, volte a mim e submeta sua candidatura.";
		mes "Verei voc� depois aventureiro.";
		break;
		case 3:
		cutin("wedding_marry02",2);
		if (Sex == SEX_MALE) {
			mes "[Casamenteira]";
			mes "Ent�o voc� gostaria de se casar?";
			mes "Como um noivo, voc� precisa preparar ^3377FF1Smoking^000000 e pagar ^3377FF1,300,000^000000 Zeny.";
			mes "Noivas t�m que prover os pr�prios 3377FF1Vestidos de Noiva^000000 e pagar uma taxa de ^3377FF1,200,000^000000 Zeny.";
			mes "Noivos devem trazer um Smoking e pagar 1,300,000 Zeny para se casar.";
		} else {
			mes "[Casamenteira]";
			mes "Ent�o voc� gostaria de se casar?";
			mes "Noivas t�m que obter os pr�prios Vestidos de Noiva e pagar uma taxa de 1,200,000 Zeny.";
		}
		next;
		mes "[Casamenteira]";
		mes "Noivas e Noivos ambos precisam ter ^3377FF1 Anel de Diamante^000000 para ser trocado com seu companheiro.";
		next;
		mes "[Casamenteira]";
		mes "Voc� precisa de todos esses itens prontos quando voc� submete sua solicita��o da cerim�nia do casamento.";
		next;
		mes "[Casamenteira]";
		mes "A noiva esperada e o noivo devem ambos ter que completar o processo de solicita��o antes que o casamento possa acontecer.";
		next;
		mes "[Casamenteira]";
		mes "Agora, voc� gostaria de candidatar-se ao matrim�nio?";
		next;
		if (select("Sim","N�o") == 1) {
			if (getpartnerid()) {
				cutin("wedding_marry02",2);
				mes "[Casamenteira]";
				mes "Eu sinto muito, mas voc� n�o pode soilicitar por outro casamento!";
				next;
				mes "[Casamenteira]";
				mes "Eu n�o posso permitir que traia sua esposa igual a isso, e por outro lado, poligamia n�o � legal aqui em Rune-Midgard.";
				break;
			} else if (wedding_sign == 1) {
				mes "[Casamenteira]";
				mes "Voc� j� n�o completou a solicita��o?";
				next;
				mes "[Casamenteira]";
				mes "Humm, tenha certeza que s"+(Sex == SEX_MALE ? "ua":"eu")+" companheir"+(Sex == SEX_MALE ? "o":"a")+" tamb�m terminou o processo de solicita��o, e ent�o fale com Bispo Vomars.";
				break;
			} else if (BaseLevel < 45) {
				mes "[Casamenteira]";
				mes "Humm, voc� precisa ser forte o bastante para proteger a pessoa que voc� ama antes de poder considerar o matrim�nio.";
				cutin("",255);
				close2;
				end;
			} else if (countitem(Diamond_Ring) < 1) {
				mes "[Casamenteira]";
				mes "Hmm?";
				mes "Voc� esqueceu de trazer os An�is de Diamante para trocar com seu companheiro durante a cerim�nia de casamento.";
				cutin("",255);
				close2;
				end;
			} else if (Sex == SEX_MALE) {
				if (Zeny < 1300000) {
					mes "[Casamenteira]";
					mes "Sinto muito, mas voc� n�o tem os 1,300,000 Zeny que todos os noivos precisam pagar para a cerim�nia de casamento.";
					cutin("",255);
					close2;
					end;
				} else if (countitem(Smoking) < 1) {
					mes "[Casamenteira]";
					mes "Onde est� seu Smoking?";
					mes "Voc� absolutamente tem que us�-lo durante a cerim�nia de casamento!";
					cutin("",255);
					close2;
					end;
				}
			} else if (Sex == SEX_FEMALE) {
				if (Zeny < 1200000) {
					mes "[Casamenteira]";
					mes "Sinto muito, mas todas as noivas precisam pagar a taxa de 1,200,000 Zeny para continuar com a cerim�nia de casamento.";
					mes "Talvez voc� poderia pedir para seu companheiro te ajudar com o dinheiro?";
					cutin("",255);
					close2;
					end;
				} else if (countitem(Wedding_Dress) < 1) {
					mes "[Casamenteira]";
					mes "Oh querida, voc� esqueceu seu Vestido de Noiva?";
					mes "Corra e encontre-o, ent�o traga-o para mim voc� precisa absolutamente dele para o casamento! ";
					cutin("",255);
					close2;
					end;
				}
			}
			mes "[Casamenteira]";
			mes "Bem, Parace que voc�s tem tudo pronto.";
			next;
			mes "[Casamenteira]";
			mes "Embora eu n�o esteja certa de quem sua companheira seja.";
			mes "Deixe-me ser a primeira a dar meus parab�ns para voc�s em seu casamento a seguir!";
			next;
			mes "[Casamenteira]";
			mes "Agora, vamos come�ar a solicita��o.";
			next;
			mes "[Casamenteira]";
			mes "Por favor escreva abaixo o seu nome correto aqui.";
			next;
			while (true) {
				input(.@name$);
				if (.@name$ != strcharinfo(PC_NAME)) {
					mes "[Casamenteira]";
					mes "Hum, voc� tem que escrever abaixo o seu nome exatamente como est� exibido.";
					mes "Talvez voc� precise copiar e col�-lo?";
					next;
				} else {
					break;
				}
			}
			mes "[Casamenteira]";
			mes "�timo, parece que n�s terminamos sua solicita��o.";
			mes "Lembre-se que voc� precisar� falar com o Bispo Vomars o nome correto da sua companheira quando voc� falar com ele mais tarde, certo?";
			next;
			mes "[Casamenteira]";
			mes "Quando sua companheira termina com o processo de solicita��o.";
			mes "Ambos precisaram falar com o Bispo para come�ar a cerim�nia de casamento.";
			emotion(e_lv);
			next;
			mes "[Casamenteira]";
			if (Sex == SEX_MALE) {
				mes "Desde que voc� seja o noivo, voc� precisa falar com o Bispo primeiro.";
				mes "Quando voc� tiver terminado, ser� a vez da sua noiva falar com o Bispo Vomars.";
				Zeny -= 1300000;
				delitem(Smoking,1);
			} else {
				mes "Desde que voc� seja a noiva, voc� precisa esperar que o noivo fale com o Bispo Vomars primeiro.";
				mes "Quando ele tiver terminado, ser� sua vez de falar o Bispo Vomars.";
				Zeny -= 1200000;
				delitem(Wedding_Dress,1);
			}
			delitem(2613,1);
			wedding_sign = 1;
			cutin("",255);
			close2;
			end;
		}
		mes "[Casamenteira]";
		mes "N�o...?";
		mes "Bem, quando voc� estiver pronto para o matrim�nio.";
		mes "Sinta-se livre para voltar a mim de forma que voc� possa aceitar, certo?";
		break;
		case 4:
		cutin("wedding_marry02",2);
		donpcevent("Ex�rcito de Solteiros#Pr::OnEnable");
		donpcevent("Ex�rcito de Solteiros#Gf::OnEnable");
		donpcevent("Ex�rcito de Solteiros#Mc::OnEnable");
		donpcevent("Ex�rcito de Solteiros#Pa::OnEnable");
		donpcevent("Ex�rcito de Solteiros#Am::OnEnable");
		donpcevent("Ex�rcito de Solteiros#Gn::OnEnable");
		emotion(e_omg);
		mes "[Ex�rcito de Solteiros]";
		mes "^CC9933Voc� tem que aprimorar itens por si pr�prio para fazer um grande equipamento!^000000 ";
		donpcevent("Ex�rcito de Solteiros#Pr::OnEmote");
		next;
		mes "[Ex�rcito de Solteiros]";
		mes "^330099� uma perca de tempo formar grupos em cavernas!";
		mes "Eu posso fazer isso por si pr�prio!^000000 ";
		donpcevent("Ex�rcito de Solteiros#Gf::OnEmote");
		next;
		mes "[Ex�rcito de Solteiros]";
		mes "^666666Eu trenei tudo, por mim mesmo desde que nasci, e de todo modo para mudar meu trabalho!^000000 ";
		donpcevent("Ex�rcito de Solteiros#Mc::OnEmote");
		next;
		mes "[Ex�rcito de Solteiros]";
		mes "^666600Eu Escolhi passar o Natal sozinho, jogando solitariamente e fazendo encruzilhadas de palavras!^000000 ";
		donpcevent("Ex�rcito de Solteiros#Pa::OnEmote");
		next;
		mes "[Ex�rcito de Solteiros]";
		mes "^CC9966Mulheres podem quebrar meu esp�rito, mas elas nunca levar�o... minha....";
		mes "LIBERDADE!^000000 ";
		donpcevent("Ex�rcito de Solteiros#Am::OnEmote");
		next;
		mes "[Ex�rcito de Solteiros]";
		mes "^669900...N�s somos livres!!!";
		mes "N�s somos o Invenc�vel Ex�rcito de Solteiros!^000000 ";
		donpcevent("Ex�rcito de Solteiros#Gn::OnEmote");
		close2;
		cutin("wedding_marry01",255);
		emotion(e_swt);
		donpcevent("Ex�rcito de Solteiros#Pr::OnInit");
		donpcevent("Ex�rcito de Solteiros#Gf::OnInit");
		donpcevent("Ex�rcito de Solteiros#Mc::OnInit");
		donpcevent("Ex�rcito de Solteiros#Pa::OnInit");
		donpcevent("Ex�rcito de Solteiros#Am::OnInit");
		donpcevent("Ex�rcito de Solteiros#Gn::OnInit");
		end;
	}
	close2;
	cutin("wedding_marry01",255);
	end;
}
// -------------------------------------------------------------------
// - [ Solteiros ] -
// -------------------------------------------------------------------
prt_church,97,102,0	script	Ex�rcito de Solteiros#Pr	8W_SOLDIER,{
	mes "[Ex�rcito de Solteiros]";
	mes "^CC9933Voc� tem que aprimorar itens por si pr�prio para fazer um grande equipamento!^000000 ";
	close;

	OnInit:
	disablenpc("Ex�rcito de Solteiros#Pr");
	end;

	OnEnable:
	enablenpc("Ex�rcito de Solteiros#Pr");
	emotion(e_go);
	end;

	OnEmote:
	emotion(e_rock);
	end;
}

prt_church,98,102,0	script	Ex�rcito de Solteiros#Gf	4_M_GEF_SOLDIER,{
	mes "[Ex�rcito de Solteiros]";
	mes "^330099� uma perca de tempo formar grupos em cavernas!";
	mes "Eu posso fazer isso por si pr�prio!^000000 ";
	close;

	OnInit:
	disablenpc("Ex�rcito de Solteiros#Gf");
	end;

	OnEnable:
	enablenpc("Ex�rcito de Solteiros#Gf");
	emotion(e_go);
	end;

	OnEmote:
	emotion(e_rock);
	end;
}

prt_church,99,102,0	script	Ex�rcito de Solteiros#Mc	4_M_MOC_SOLDIER,{
	mes "[Ex�rcito de Solteiros]";
	mes "^666666Eu trenei tudo por mim mesmo desde que nasci, e de todo modo para mudar meu trabalho!^000000 ";
	close;

	OnInit:
	disablenpc("Ex�rcito de Solteiros#Mc");
	end;

	OnEnable:
	enablenpc("Ex�rcito de Solteiros#Mc");
	emotion(e_go);
	end;

	OnEmote:
	emotion(e_rock);
	end;
}

prt_church,100,102,0	script	Ex�rcito de Solteiros#Pa	4_M_PAY_SOLDIER,{
	mes "[Ex�rcito de Solteiros]";
	mes "^666600Eu Escolhi passar o Natal sozinho, jogando solitariamente e fazendo encruzilhadas de palavras!^000000 ";
	close;

	OnInit:
	disablenpc("Ex�rcito de Solteiros#Pa");
	end;

	OnEnable:
	enablenpc("Ex�rcito de Solteiros#Pa");
	emotion(e_go);
	end;

	OnEmote:
	emotion(e_rock);
	end;
}

prt_church,101,102,0	script	Ex�rcito de Solteiros#Am	8_M_JPNSOLDIER,{
	mes "[Ex�rcito de Solteiros]";
	mes "^CC9966Mulheres podem quebrar meu esp�rito, mas elas nunca levar�o... minha...";
	mes "LIBERDADE!^000000 ";
	close;

	OnInit:
	disablenpc("Ex�rcito de Solteiros#Am");
	end;

	OnEnable:
	enablenpc("Ex�rcito de Solteiros#Am");
	emotion(e_go);
	end;

	OnEmote:
	emotion(e_rock);
	end;
}

prt_church,102,102,0	script	Ex�rcito de Solteiros#Gn	8_M_TWSOLDIER,{
	mes "[Ex�rcito de Solteiros]";
	mes "^669900...N�s somos livres!!!";
	mes "N�s somos o Invenc�vel Ex�rcito de Solteiros!^000000 ";
	close;

	OnInit:
	disablenpc("Ex�rcito de Solteiros#Gn");
	end;

	OnEnable:
	enablenpc("Ex�rcito de Solteiros#Gn");
	emotion(e_go);
	end;

	OnEmote:
	emotion(e_rock);
	end;
}

// ---------------------------------------------------------------------------------
// - [ Bispo ] -
// ---------------------------------------------------------------------------------
prt_church,100,128,4	script	Bispo#w	1_M_PASTOR,{
	cutin("wedding_bomars01",2);
	if (Upper == 2) {
		mes "[Vomars]";
		mes "Sauda��es, crian�a voc� est� perdido?";
		mes "Hum.";
		mes "Voc� sabe onde sua mam�e e seu papai est�o?";
		close2;
		cutin("wedding_bomars01",255);
		end;
	}
	if (!getpartnerid()) {
		if (!$wedding) {
			if (wedding_sign == 1) {
				getpartymember(getcharid(CHAR_ID_PARTY));
				.@partymembercount = $@partymembercount;
				if (.@partymembercount == 2) {
					if (Sex == SEX_MALE) {
						$wedding = 1;
						initnpctimer;
						mes "[Vomars]";
						mes "Jovens Apaixonados, por favor lembrem-se desde momento pelo resto de suas vidas.";
						next;
						mes "[Vomars]";
						mes "Que o futuro de voc�s seja aben�oado com paz e alegria.";
						next;
						mes "[Vomars]";
						mes "Que o amor de voc�s possa crescer mais a cada dia que passa.";
						next;
						mapannounce(strnpcinfo(NPC_MAP),"� o pedido de matrim�nio do noivo, Senhor "+strcharinfo(PC_NAME)+"...",bc_map);
						mes "[Vomars]";
						mes "At� o fim do mundo, voc� deve ficar ao lado daquela que voc� realmente ama, para apoi�-la e proteg�-la.";
						next;
						mes "[Vomars]";
						mes "Agora, deixe eu saber o nome da sua noiva?";
						next;
						input($wed_bride$);
						mes "[Vomars]";
						mes "Senhor "+strcharinfo(PC_NAME)+"...";
						mes "Voc� jura pela sua vida que para sempre voc� vai am�-la e tomar� conta da sua noiva, Senhorita "+$wed_bride$+"?";
						next;
						select("Eu aceito.");
						$wed_groom$ = strcharinfo(PC_NAME);
						mes "[Vomars]";
						mes "Agora, � a vez da sua noiva fazer seu voto de casamento.";
						mes "Que ela venha aqui na frente...";
						close2;
						mapannounce(strnpcinfo(NPC_MAP),"O noivo, Senhor "+strcharinfo(PC_NAME)+", fez seus votos para a Senhorita "+$wed_bride$+"...",bc_map);
						cutin("",255);
						end;
					}
					mes "[Vomars]";
					mes "Sinto muito, mas o noivo precisa falar comigo primeiro nessa ordem para come�ar o casamento.";
					mes "� um antigo protocolo formado.";
					mes "Mas eu admito que ele mant�m que as coisas corram suavemente.";
					cutin("",255);
					close2;
					end;
				}
				mes "[Vomars]";
				mes "Antes que voc� possa estar casado, primeiro voc� precisar fazer um grupo de dois com sua companheira.";
				cutin("",255);
				close2;
				end;
			}
			mes "[Vomars]";
			mes "Voc�s precisam acertar o matrim�nio com a casamenteira antes que voc�s consigam casar.";
			next;
			mes "[Vomars]";
			mes "A Casamenteira dir� o que voc�s precisam fazer para preparar o matrim�nio.";
			cutin("",255);
			close2;
			end;
		} else if ($wedding == 1) {
			if (wedding_sign == 1) {
				getpartymember(getcharid(CHAR_ID_PARTY));
				.@partymembercount = $@partymembercount;
				if (.@partymembercount == 2) {
					if (Sex == SEX_FEMALE) {
						if (strcharinfo(PC_NAME) == $wed_bride$) {
							mes "[Vomars]";
							mes "Jovens Apaixonados, por favor lembrem se desde momento pelo resto das suas vidas.";
							next;
							mes "[Vomars]";
							mes "Que o futuro de voc�s seja aben�oado com paz e alegria.";
							next;
							mes "[Vomars]";
							mes "Que o amor de voc�s possa crescer mais a cada dia que passa.";
							next;
							mapannounce(strnpcinfo(NPC_MAP),"Vamos ouvir o que a noiva, Senhorita "+$wed_bride$+", tem a dizer...",bc_map);
							mes "[Vomars]";
							mes "Senhorita "+$wed_bride$+"...";
							mes "Voc� jura ficar verdadeiramente com "+$wed_groom$+", estar ao seu lado, n�o importa o quanto perigoso possa ser?";
							next;
							if (select("^FF0000N�o.^000000","Eu aceito.") == 1) {
								cutin("wedding_bomars03",2);
								mapannounce(strnpcinfo(NPC_MAP),"Pr�ximo casal, por favor prossiga...",bc_map);
								mes "[Vomars]";
								mes "Ent�o "+$wed_groom$+" n�o � o que queria casar?";
								mes "Hum.";
								mes "Eu sinto profudamente por este mal entendido...";
								$wedding = 0;
								close2;
								stopnpctimer;
								cutin("",255);
								end;
							}
							mes "[Vomars]";
							mes "Voc� jura verdadeiramente fidelidade e paci�ncia?";
							mes "Voc� casar� com "+$wed_groom$+"?";
							next;
							if (select("Sim, Eu caso.","^FF0000N�o.^000000") == 1) {
								if (isloggedin(getcharid(CHAR_ID_ACCOUNT,$wed_groom$))) {
									if (marriage($wed_groom$)) {
										wedding;
										sc_start(SC_WEDDING,3600000,1);
										getitem(Bride_Ring,1);
										attachrid(getcharid(CHAR_ID_ACCOUNT,$wed_groom$));
										sc_start(SC_WEDDING,3600000,1);
										getitem(Bridegroom_Ring,1);
										detachrid;
										attachrid(getcharid(CHAR_ID_ACCOUNT,$wed_bride$));
										cutin("wedding_bomars02",2);
										mapannounce(strnpcinfo(NPC_MAP),"Agora Eu os declaro, "+$wed_groom$+" e "+$wed_bride$+", Marido e Mulher.",bc_map);
										mes "[Vomars]";
										mes "Pelo poderes a mim concebidos como Bispo Real do Reino de Rune-Midgard, agora eu os declaro marido e mulher.";
										next;
										mes "[Vomars]";
										mes "Que o futuro de voc�s seja aben�oado com muitas alegrias.";
										next;
										mes "[Vomars]";
										mes "E por �ltimo...";
										mes "Sempre sejam";
										mes "felizes, querida";
										mes $wed_bride$+"...";
										$wed_groom$ = "";
										$wed_bride$ = "";
										$wedding = 0;
										close2;
										stopnpctimer;
										cutin("",255);
										detachrid;
										end;
									}
								}
								cutin("wedding_bomars03",2);
								mes "[Vomars]";
								mes "Parece que seu noivo saiu antes da cerim�nia termina.";
								next;
								mes "[Vomars]";
								mes "Por favor tente novamente assim que ele retornar.";
								cutin("",255);
								close2;
								end;
							} else {
								cutin("wedding_bomars03",2);
								mapannounce(strnpcinfo(NPC_MAP),"Escutem! "+$wed_bride$+" Rejeitou o pedido de casamento de "+$wed_groom$+"!",bc_map);
								mes "[Vomars]";
								mes "Hum. Parece que voc� mudou de ideia.";
								next;
								mes "[Vomars]";
								mes "Embora eu sinto muito pelo o noivo, voc� deve fazer o que o seu cora��o falar que � correto.";
							}
							$wed_groom$ = "";
							$wed_bride$ = "";
							$wedding = 0;
							close2;
							stopnpctimer;
							cutin("",255);
							end;
						}
						callsub(S_Busy);
					}
					callsub(S_Busy);
				}
				callsub(S_Busy);
			}
			if (strcharinfo(PC_NAME) == $wed_bride$) {
				mes "[Vomars]";
				mes "Hum? Parece que a Casamenteira ainda n�o recebeu sua solita��o de matrim�nio.";
				next;
				mes "[Vomars]";
				mes "Por favor fale com ela assim n�s poderemos come�ar a cerim�nia de casamento.";
				cutin("",255);
				close2;
				end;
			}
			callsub(S_Busy);
		}
		callsub(S_Busy);
	}
	mes "[Vomars]";
	mes "Eu desejo a voc�s felicidades eternas.";
	next;
	mes "[Vomars]";
	mes "N�o importa como escuro o presente possa ser, sempre fique ao lado de sua amada e olhe para o futuro com esperan�a.";

	S_Busy:
	if ($wed_groom$ != "" && $wed_bride$ != "") {
		mes "[Vomars]";
		mes "O casamento da Senhorita "+$wed_bride$+" e do Senhor "+$wed_groom$+" est� em andamento.";
		mes "Por favor controle sua voz.";
		cutin("",255);
		close2;
		end;
	}
	mes "[Vomars]";
	mes "^FFFFFFEstou conduzindo um casamento para outro casal agora, ent�o por favor espere pacientimente por sua vez.";
	mes "Obrigado pela compreens�o...^000000 ";
	cutin("",255);
	close2;
	end;

	OnInit:
	$wedding = 0;
	end;

	OnStop:
	stopnpctimer;
	end;

	OnReset:
	$wed_groom$ = "";
	$wed_bride$ = "";
	$wedding = 0;
	end;

	OnTimer180000:
	mapannounce(strnpcinfo(NPC_MAP),"Voc� respondeu tarde demais... Pr�ximo casal, por favor prossiga.",bc_map);
	$wed_groom$ = "";
	$wed_bride$ = "";
	$wedding = 0;
	stopnpctimer;
	end;
}
