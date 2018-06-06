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
| - Info: Quest de Mudan�a de Classe para Espiritualista.           |
\*-----------------------------------------------------------------*/

morocc_in,174,30,6	script	Garoto#slinkerq	4_M_KID2,{
	if (Class == Job_Soul_Linker) {
		mes "[Maia]";
		mes "Boa sorte em sua jornada.";
		mes "Quando voc� dominar mais habilidades de Espiritualista.";
		mes "Ser� capaz de usar mais poderes dos Esp�ritos sobre os seus companheiros...";
		close;
	} else if (Class != Job_Taekwon) {
		mes "[Garoto]";
		mes "Hm...";
		mes "Eu n�o tenho nada a oferecer para voc�.";
		mes "Mas se voc� conhecer algum praticante de Taekwon experiente.";
		mes "Mande-os at� mim, pelo que sei eles poder�o se beneficiar com meus conhecimentos.";
		close;
	} else if (JobLevel < 40) {
		mes "[Garoto]";
		mes "Ent�o voc� est� estudando Taekwon.";
		mes "Isso � bom, na verdade muito bom.";
		mes "Basta aprimorar sua habilidades e manter um bom treinamento.";
		close;
	} else {
		if (!slinkerq) {
			mes "[Garoto]";
			mes "...";
			mes "Ei voc�.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Voc� est� me chamando?";
			next;
			mes "[Garoto]";
			mes "Sim, eu chamei voc�.";
			mes "Agora n�o me fa�a falar muito alto, e venha at� aqui.";
			next;
			if (select("Que rude para um garoto!","Ignor�-lo") == 1) {
				mes "[Garoto]";
				mes "Voc� est� com sorte, tenho algo interessante para voc�!";
				mes "Voc� pode me ver como uma crian�a.";
				mes "Mas eu tenho mais de 300 anos de idade!";
				emotion(e_pif);
				next;
				mes "[Garoto]";
				mes "Agora ou�a...";
				mes "Eu sei que voc� � um disc�pulo de Taekwon.";
				mes "� uma arte respeit�vel, mas eu gostaria de lhe fazer uma proposta.";
				emotion(e_heh);
				next;
				mes "[Garoto]";
				mes "Eu estive olhando para voc�, e posso dizer que voc� tem um grande poder espiritual.";
				mes "E esse seu pot�ncial n�o deve ser desperdi�ado.";
				mes "Ent�o porque n�o fazer de voc� um \"Espiritualista\"?";
				next;
				if (select("Ha! garoto bobo","Espiritualista?") == 1) {
					mes "[Garoto]";
					mes "Voc�... voc� n�o acredita em mim?";
					mes "Eu estou falando s�rio.";
					mes "Voc� pode pelo menos por um minuto esquecer o fato de que eu pare�o uma crian�a?";
					close;
				}
				mes "[Garoto]";
				mes "Espiritualistas s�o capazes de comunicar-se com Esp�ritos de antigos guerreiros mortos.";
				mes "Que ainda desejam lutar no mundo dos vivos.";
				mes "Agora, esses Esp�ritos guerreiros n�o podem lutar livremente em nosso mundo.";
				next;
				mes "[Garoto]";
				mes "No entanto, uma vez que que eles s�o invocados, esses Esp�ritos s�o atra�dos para voc�.";
				mes "Com o treinamento correto.";
				mes "Voc� pode temporariamente atribuir o poder desses Esp�ritos aos seus aliados.";
				next;
				mes "[Garoto]";
				mes "Agora, voc� pode atribuir tamb�m o poder desses Esp�ritos a si mesmo.";
				mes "Dependendo, de suas habilidades de Espiritualista...";
				mes "Voc� poder� apenas atribuir o poder dos Esp�ritos para algumas classes.";
				next;
				mes "[Garoto]";
				mes "Voc� vai ter de entrar em um mundo totalmente diferente para se tornar um Espiritualista.";
				mes "Eu sei que isso vai ser poss�vel para voc�.";
				mes "E ent�o o que me diz?";
				next;
				if (select("N�o, n�o agora...","Tudo bem") == 1) {
					mes "[Garoto]";
					mes "Ah, mas se voc� decidir tornar-se um Espiritualista.";
					mes "Volte at� aqui e fale comigo a qualquer momento.";
					close;
				}
				slinkerq = 1;
				setquest(6005);
				mes "[Garoto]";
				mes "Ent�o voc� est� decidido a tornar-se Espiritualista?";
				mes "Muito bom!";
				mes "Tudo bem, primeiro voc� precisa me trazer alguns itens.";
				mes "N�o se preocupe, eu vou explicar por que voc� precisa deles, mais tarde.";
				next;
				mes "[Garoto]";
				mes "Agora traga-me:";
				mes "^0000FF1 Diamante de 3 Quilates^000000,";
				mes "^0000FF1 Cora��o Imortal^000000 e";
				mes "^0000FF1 Rosa Eterna^000000.";
				mes "E n�o me fa�a esperar por muito tempo, ok?";
				close;
			}
			mes "[Garoto]";
			mes "Huh...?";
			mes "Espere, para onde voc� vai?";
			mes "Eu...";
			mes "Eu estou falando com voc�!";
			close;
		} else if (slinkerq == 1) {
			mes "[Garoto]";
			mes "Voc� voltou, e trouxe o que pedi.";
			mes "^0000FF1 Diamante de 3 Quilates^000000,";
			mes "^0000FF1 Cora��o Imortal^000000 e";
			mes "^0000FF1 Rosa Eterna^000000.";
			next;
			if (select("Sim, eu trouxe","N�o, ainda n�o...") == 1) {
				if (countitem(Crystal_Jewel__) > 0 && countitem(Immortal_Heart) > 0 && countitem(Witherless_Rose) > 0) {
					delitem(Crystal_Jewel__,1);
					delitem(Immortal_Heart,1);
					delitem(Witherless_Rose,1);
					slinkerq = 2;
					changequest(6005,6006);
					mes "[Garoto]";
					mes "�timo, eu vejo que voc� me trouxe tudo.";
					mes "Mas antes de come�ar, deixe que eu me apresente.";
					mes "Meu nome � Maia, e eu estou vivo por mais de 300 anos.";
					next;
					mes "[Maia]";
					mes "Bem mas pulando os detalhes, � o meu dever encontrar e recrutar mais Espiritualistas.";
					mes "Essa � a raz�o pela qual eu n�o deixei, voc� sabe, passar direto.";
					next;
					mes "[Maia]";
					mes "De toda forma, eu preciso terminar os preparativos com os materiais que voc� me trouxe.";
					mes "Ent�o preciso que voc� saia e volte depois, ok?";
					mes "E ent�o, nos falaremos novamente.";
					close;
				}
				mes "[Garoto]";
				mes "Hm...?";
				mes "Ei, voc� esqueceu de alguma coisa.";
				mes "Agora v� e me traga tudo que eu havia te pedido, ok?";
				emotion(e_pif);
				next;
				mes "[Garoto]";
				mes "Eu sei que voc� sabe o que precisa trazer, mas eu vou repetir novamente:";
				mes "^0000FF1 Diamanete de 3 Quilates^000000,";
				mes "^0000FF1 Cora��o Imortal^000000 e";
				mes "^0000FF1 Rosa Eterna^000000.";
				close;
			}
			mes "[Garoto]";
			mes "Hm. Mas isso � bom.";
			mes "Embora eu tenha todo tempo do mundo, eu n�o gosto de esperar muito.";
			close;
		} else if (slinkerq == 2) {
			if (SkillPoint) {
				mes "[Maia]";
				mes "Voc� ainda possui alguns pontos n�o distribuidos.";
				mes "Use todos eles para aprender as habilidades de Taekwon, e depois volte quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
				close;
			} else if (.SoulLinkerTest == 1) {
				mes "[Maia]";
				mes "Certo agora, preciso terminar a cerim�nia que vai te transformar em Espiritualista.";
				mes "Ent�o voc� poderia esperar at� que eu termine?";
				mes "Quando eu estiver pront"+(Sex == SEX_MALE ? "o":"a")+", irei lhe atender.";
				close;
			}
			donpcevent("Timer#slinkerq::OnEnable");
			.SoulLinkerTest = 1;
			mes "[Maia]";
			mes "�timo, eu terminei os preparativos.";
			mes "Agora est� pronta a cerim�nia de mudan�a para voc� tornar-se um Espiritualista.";
			mes "Agora feche seus olhos...";
			close2;
			warp("job_soul",30,30);
			end;
		} else if (slinkerq > 2) {
			mes "[Maia]";
			mes "Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para entrar nas profudenzas da sua mente de novo?";
			next;
			if (select("N�o","Sim") == 1) {
				mes "[Maia]";
				mes "Ent�o, volte a falar comigo quando voc� estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "At� l�, eu estarei esperando bem aqui.";
				close;
			}
			if (.SoulLinkerTest == 1) {
				mes "[Maia]";
				mes "Certo agora, preciso terminar a cerim�nia que vai te transformar em Espiritualista.";
				mes "Ent�o voc� poderia esperar at� que eu termine?";
				mes "Quando eu estiver pront"+(Sex == SEX_MALE ? "o":"a")+", irei lhe atender.";
				close;
			}
			donpcevent("Timer#slinkerq::OnEnable");
			.SoulLinkerTest = 1;
			mes "[Maia]";
			mes "Tudo bem, feche seus olhos e relaxe.";
			mes "Voc� ser� levad"+(Sex == SEX_MALE ? "o":"a")+" para as profundezas de sua mente.";
			close2;
			warp("job_soul",30,30);
			end;
		}
	}

	OnInit:
	.SoulLinkerTest = 0;
	end;
}

// ------------------------------------------------------------------
job_soul,30,31,0	script	Maia#slinkerq	FAKE_NPC,3,3,{
	OnTouch:
	if (Class == Job_Taekwon) {
		if (JobLevel < 40) {
			setvariable (getvariableofnpc(.SoulLinkerTest,"Garoto#slinkerq"),0);
			mes "[Maia]";
			mes "Hm? Como voc� veio parar aqui?";
			mes "Voc� n�o est� qualificad"+(Sex == SEX_MALE ? "o":"a")+" para esta cerim�nia.";
			mes "Vou lev�-l"+(Sex == SEX_MALE ? "o":"a")+" de volta para Morroc...";
			close2;
			warp("morocc",157,47);
			end;
		}
		if (slinkerq == 2) {
			mes "[Maia]";
			mes "Voc� reconhece esse lugar?";
			mes "Certo, agora estamos dentro de sua mente.";
			mes "Os Esp�ritos dos guerreiros que morreram est�o aqui, esperando que voc� invoque seus poderes.";
			next;
			mes "[Maia]";
			mes "Certo, agora h� apenas alguns deles aqui.";
			mes "Mas se voc� continuar treinando, ser� capaz de invocar mais Esp�ritos como um Espiritualista.";
			next;
			slinkerq = 3;
			changequest(6006,6007);
			mes "[Maia]";
			mes "N�s s� podemos ficar aqui na sua mente por 3 minutos.";
			mes "Eu sugiro que voc� fale com os Esp�ritos enquanto tem a oportunidade.";
			close;
		} else if (slinkerq == 3) {
			mes "[Maia]";
			mes "Ou�a o que os Esp�ritos est�o tentando te dizer.";
			mes "H� uma raz�o pela qual eles n�o podem seguir em frente para o pr�ximo mundo.";
			close;
		} else if (slinkerq == 4) {
			mes "[Maia]";
			mes "Eu acredito que voc� j� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para tornar-se Espiritualista.";
			mes "No entanto, voc� pode continuar a falar com os Esp�ritos se for isso que voc� deseja.";
			next;
			if (select("Conversarei com eles","Tornar-se Espiritualista") == 1) {
				mes "[Maia]";
				mes "Tudo bem.";
				mes "Mas tente ser r�pido, uma vez que h� um limite de tempo para permanecer em sua mente.";
				mes "Embora, n�s possamos voltar � sua mente se voc� falar comigo mais tarde...";
				close;
			}
			mes "[Maia]";
			mes "Ent�o vamos come�ar a cerim�nia.";
			mes "Esses itens que trouxe ser�o usados para voc� ganhar a capacidade de conjurar.";
			mes "Poderes dos Esp�ritos antigos em seus companheiros no campo de batalha.";
			next;
			mes "[Maia]";
			mes "Esta rosa eterna vai morrer ao inv�s de voc�...";
			specialeffect(EF_MAPPILLAR2, AREA, getnpcid(0, "Maia#slinkerq"));
			next;
			mes "[Maia]";
			mes "Esta rosa eterna vai morrer ao inv�s de voc�...";
			mes "Este cora��o imortal ir� bombear o sangue ao inv�s do seu. ";
			next;
			mes "[Maia]";
			mes "Esta rosa eterna vai morrer ao inv�s de voc�...";
			mes "Este cora��o imortal ir� bombear o sangue ao inv�s do seu.";
			mes "Este diamante ir� se tornar p�, ao inv�s do seu corpo mortal.";
			next;
			mes "[Maia]";
			mes "Os mortos que desejarem continuar�o a lutar...";
			mes "Lutar�o com voc�!";
			mes "Use seus poderes de Espiritualista com sabedoria e para fins justos.";
			next;
			if (SkillPoint) {
				mes "^0000ffVoc� ainda tem pontos de habilidade sobrando.";
				mes "Por favor, use todos os pontos de habilidades restantes e tente novamente!^000000";
				close;
			}
			jobchange(Job_Soul_Linker);
			completequest(6008);
			callfunc("ClearJobQuest2nd",4049);
			mes "[Maia]";
			mes "Desejo a voc� boa sorte em sua nova vida.";
			mes "Permane�a sempre ao lado de seus aliados.";
			mes "E os espir�tos ir�o te proteger e te ajudar a lutar em suas batalhas.";
			mes "Adeus por agora, amig"+(Sex == SEX_MALE ? "o":"a")+".";
			close2;
			setvariable (getvariableofnpc(.SoulLinkerTest,"Garoto#slinkerq"),0);
			donpcevent("Timer#slinkerq::OnDisable");
			warp("morocc",157,47);
			end;
		}
		setvariable (getvariableofnpc(.SoulLinkerTest,"Garoto#slinkerq"),0);
		mes "[Maia]";
		mes "Hmm...?";
		mes "Parece que o seu tempo de ficar aqui acabou.";
		mes "Vamos voltar para Morroc...";
		close2;
		warp("morocc",157,47);
		end;
	}
	setvariable (getvariableofnpc(.SoulLinkerTest,"Garoto#slinkerq"),0);
	if (Class == Job_Soul_Linker) {
		mes "[Maia]";
		mes "Chegou a hora de voc� seguir seu rumo no mundo!";
		mes "Mais Espiritualistas definitivamente ser�o necess�rios nas batalhas contra o mal...";
	} else {
		mes "[Maia]";
		mes "Isto � estranho....";
		mes "Voc� n�o deveria estar aqui.";
		mes "Deixe-me te levar de volta para Morroc...";
	}
	close2;
	warp("morocc",157,47);
	end;
}
job_soul,35,30,6	duplicate(Maia#slinkerq)	Maia#2slinkerq	4_M_KID2

// ------------------------------------------------------------------
job_soul,30,35,6	script	Esp�rito Monge#slinkerq	4_M_GRANDMONK,{
	if (slinkerq == 2) {
		mes "[Esp�rito Monge]";
		mes "Quem eu sou...?";
		mes "Eu acho...";
		mes "Eu acho melhor voc� falar com o Maia primeiro...";
		mes "Dizer quem eu sou requer uma explica��o complicada...";
		close;
	} else if (slinkerq > 2) {
		mes "[Esp�rito Monge]";
		mes "Durante minha vida, eu e meus colegas fazemos o melhor.";
		mes "Mesmo assim...";
		mes "Eu ainda n�o acho que fiz o melhor uso de minhas habilidades.";
		next;
		mes "[Esp�rito Monge]";
		mes "Na morte, eu tive muitos arrependimentos.";
		mes "Nunca tive a chance de ensinar minhas habilidades para os novos Monges.";
		mes "Emprestar meu poder para os outros � a �nica chance que tenho de tornar isso poss�vel.";
		next;
		slinkerq = 4;
		if (!questprogress(6008)) { changequest(6007,6008); }
		mes "[Esp�rito Monge]";
		mes "Eu imploro...";
		mes "Eu preciso de sua ajuda para mostrar a todos meu verdadeiro potencial para os Monges de hoje.";
		close;
	}
	mes "[Esp�rito Monge]";
	mes "...";
	close;
}

// ------------------------------------------------------------------
job_soul,30,25,7	script	Esp�rito S�bio#slinkerq	4_M_SAGE_A,{
	if (slinkerq == 2) {
		mes "[Esp�rito S�bio]";
		mes "Fale com Maia.";
		mes "Tenho medo que eu possa confundir voc� se voc� n�o ouvir primeiro as explica��es de Maia...";
		close;
	} else if (slinkerq > 2) {
		mes "[Esp�rito S�bio]";
		mes "Minha busca pelo conhecimento concedeu-me um poder incr�vel.";
		mes "Na vida, eu poderia destruir qualquer coisa que quisese.";
		mes "Poucos S�bios conseguiriam chegar ao meu n�vel...";
		next;
		mes "[Esp�rito S�bio]";
		mes "Eu morri, mas eu n�o sou capaz de passar para o outro mundo.";
		mes "Eu ainda quero usar minhas habilidades.";
		mes "Eu quero usar meu conhecimento para construir o que eu quiser, e destruir o que for preciso.";
		next;
		mes "[Esp�rito S�bio]";
		mes "Para mim � suficiente saber que eu posso dar meu poder a um S�bio que seja digno de receb�-lo.";
		mes "Mas para isso, preciso de sua ajuda.";
		mes "Eu imploro deixe-me ser seu espirito aliado.";
		slinkerq = 4;
		if (!questprogress(6008)) { changequest(6007,6008); }
		next;
		mes "[Esp�rito S�bio]";
		mes "Eu acredito que voc� � o �nico que pode trazer descanso � minha alma perturbada...";
		close;
	}
	mes "[Esp�rito S�bio]";
	mes "...";
	close;
}

// ------------------------------------------------------------------
job_soul,25,30,5	script	Esp�rito Alquimista#slinkerq	4_F_ALCHE,{
	if (slinkerq == 2) {
		mes "[Esp�rito Alquimista]";
		mes "Oh! Eu realmente quero falar com voc�.";
		mes "Mas o que eu tenho a dizer n�o far� muito sentido a menos que voc� fale com Maia primeiro.";
		mes "Mas sim, eu realmente preciso de sua ajuda.";
		close;
	} else if (slinkerq > 2) {
		mes "[Esp�rito Alquimista]";
		mes "Sem exageros, eu era o mais r�pido Alquimista da minha �poca.";
		mes "Na verdade, eu ainda posso ser o Alquimista mais r�pido.";
		mes "Mas por isso eu era arrogante, e acabei me matando em um acidente.";
		next;
		mes "[Esp�rito Alquimista]";
		mes "Mas a morte n�o apagou minhas habilidades.";
		mes "Na verdade, eu ainda melhorei minhas habilidades desde que morri.";
		mes "Mas eu n�o posso ir para o outro mundo, n�o antes de re-passar minhas tecnicas...";
		slinkerq = 4;
		if (!questprogress(6008)) { changequest(6007,6008); }
		next;
		mes "[Esp�rito Alquimista]";
		mes "Eu sou impotente como um espirito.";
		mes "Mas se tiver sua ajuda, eu posso ser uma influ�ncia para os Alquimistas de hoje.";
		mes "E jud�-los a melhorar as suas habilidades.";
		mes "Eu lhe pe�o, por favor me d� esta chance...";
		close;
	}
	mes "[Esp�rito Alquimista]";
	mes "...";
	close;
}

// ------------------------------------------------------------------
job_soul,1,5,0	script	Timer#slinkerq	HIDDEN_NPC,{
	end;

	OnEnable:
	initnpctimer;
	end;

	OnDisable:
	stopnpctimer;
	setvariable (getvariableofnpc(.SoulLinkerTest,"Garoto#slinkerq"),0);
	end;

	OnTimer60000:
	OnTimer120000:
	if (getmapusers("job_soul") == 0) {
		stopnpctimer;
		setvariable (getvariableofnpc(.SoulLinkerTest,"Garoto#slinkerq"),0);
	}
	end;

	OnTimer182000:
	mapwarp(strnpcinfo(NPC_MAP),"morocc",157,47);
	end;

	OnTimer183000:
	setvariable (getvariableofnpc(.SoulLinkerTest,"Garoto#slinkerq"),0);
	stopnpctimer;
}

