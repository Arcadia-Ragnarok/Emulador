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
| - Info: Quest de Mudança de Classe para Espiritualista.           |
\*-----------------------------------------------------------------*/

morocc_in,174,30,6	script	Garoto#slinkerq	4_M_KID2,{
	if (Class == Job_Soul_Linker) {
		mes "[Maia]";
		mes "Boa sorte em sua jornada.";
		mes "Quando você dominar mais habilidades de Espiritualista.";
		mes "Será capaz de usar mais poderes dos Espíritos sobre os seus companheiros...";
		close;
	} else if (Class != Job_Taekwon) {
		mes "[Garoto]";
		mes "Hm...";
		mes "Eu não tenho nada a oferecer para você.";
		mes "Mas se você conhecer algum praticante de Taekwon experiente.";
		mes "Mande-os até mim, pelo que sei eles poderão se beneficiar com meus conhecimentos.";
		close;
	} else if (JobLevel < 40) {
		mes "[Garoto]";
		mes "Então você está estudando Taekwon.";
		mes "Isso é bom, na verdade muito bom.";
		mes "Basta aprimorar sua habilidades e manter um bom treinamento.";
		close;
	} else {
		if (!slinkerq) {
			mes "[Garoto]";
			mes "...";
			mes "Ei você.";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Você está me chamando?";
			next;
			mes "[Garoto]";
			mes "Sim, eu chamei você.";
			mes "Agora não me faça falar muito alto, e venha até aqui.";
			next;
			if (select("Que rude para um garoto!","Ignorá-lo") == 1) {
				mes "[Garoto]";
				mes "Você está com sorte, tenho algo interessante para você!";
				mes "Você pode me ver como uma criança.";
				mes "Mas eu tenho mais de 300 anos de idade!";
				emotion(e_pif);
				next;
				mes "[Garoto]";
				mes "Agora ouça...";
				mes "Eu sei que você é um discípulo de Taekwon.";
				mes "É uma arte respeitável, mas eu gostaria de lhe fazer uma proposta.";
				emotion(e_heh);
				next;
				mes "[Garoto]";
				mes "Eu estive olhando para você, e posso dizer que você tem um grande poder espiritual.";
				mes "E esse seu potêncial não deve ser desperdiçado.";
				mes "Então porque não fazer de você um \"Espiritualista\"?";
				next;
				if (select("Ha! garoto bobo","Espiritualista?") == 1) {
					mes "[Garoto]";
					mes "Você... você não acredita em mim?";
					mes "Eu estou falando sério.";
					mes "Você pode pelo menos por um minuto esquecer o fato de que eu pareço uma criança?";
					close;
				}
				mes "[Garoto]";
				mes "Espiritualistas são capazes de comunicar-se com Espíritos de antigos guerreiros mortos.";
				mes "Que ainda desejam lutar no mundo dos vivos.";
				mes "Agora, esses Espíritos guerreiros não podem lutar livremente em nosso mundo.";
				next;
				mes "[Garoto]";
				mes "No entanto, uma vez que que eles são invocados, esses Espíritos são atraídos para você.";
				mes "Com o treinamento correto.";
				mes "Você pode temporariamente atribuir o poder desses Espíritos aos seus aliados.";
				next;
				mes "[Garoto]";
				mes "Agora, você pode atribuir também o poder desses Espíritos a si mesmo.";
				mes "Dependendo, de suas habilidades de Espiritualista...";
				mes "Você poderá apenas atribuir o poder dos Espíritos para algumas classes.";
				next;
				mes "[Garoto]";
				mes "Você vai ter de entrar em um mundo totalmente diferente para se tornar um Espiritualista.";
				mes "Eu sei que isso vai ser possível para você.";
				mes "E então o que me diz?";
				next;
				if (select("Não, não agora...","Tudo bem") == 1) {
					mes "[Garoto]";
					mes "Ah, mas se você decidir tornar-se um Espiritualista.";
					mes "Volte até aqui e fale comigo a qualquer momento.";
					close;
				}
				slinkerq = 1;
				setquest(6005);
				mes "[Garoto]";
				mes "Então você está decidido a tornar-se Espiritualista?";
				mes "Muito bom!";
				mes "Tudo bem, primeiro você precisa me trazer alguns itens.";
				mes "Não se preocupe, eu vou explicar por que você precisa deles, mais tarde.";
				next;
				mes "[Garoto]";
				mes "Agora traga-me:";
				mes "^0000FF1 Diamante de 3 Quilates^000000,";
				mes "^0000FF1 Coração Imortal^000000 e";
				mes "^0000FF1 Rosa Eterna^000000.";
				mes "E não me faça esperar por muito tempo, ok?";
				close;
			}
			mes "[Garoto]";
			mes "Huh...?";
			mes "Espere, para onde você vai?";
			mes "Eu...";
			mes "Eu estou falando com você!";
			close;
		} else if (slinkerq == 1) {
			mes "[Garoto]";
			mes "Você voltou, e trouxe o que pedi.";
			mes "^0000FF1 Diamante de 3 Quilates^000000,";
			mes "^0000FF1 Coração Imortal^000000 e";
			mes "^0000FF1 Rosa Eterna^000000.";
			next;
			if (select("Sim, eu trouxe","Não, ainda não...") == 1) {
				if (countitem(Crystal_Jewel__) > 0 && countitem(Immortal_Heart) > 0 && countitem(Witherless_Rose) > 0) {
					delitem(Crystal_Jewel__,1);
					delitem(Immortal_Heart,1);
					delitem(Witherless_Rose,1);
					slinkerq = 2;
					changequest(6005,6006);
					mes "[Garoto]";
					mes "Ótimo, eu vejo que você me trouxe tudo.";
					mes "Mas antes de começar, deixe que eu me apresente.";
					mes "Meu nome é Maia, e eu estou vivo por mais de 300 anos.";
					next;
					mes "[Maia]";
					mes "Bem mas pulando os detalhes, é o meu dever encontrar e recrutar mais Espiritualistas.";
					mes "Essa é a razão pela qual eu não deixei, você sabe, passar direto.";
					next;
					mes "[Maia]";
					mes "De toda forma, eu preciso terminar os preparativos com os materiais que você me trouxe.";
					mes "Então preciso que você saia e volte depois, ok?";
					mes "E então, nos falaremos novamente.";
					close;
				}
				mes "[Garoto]";
				mes "Hm...?";
				mes "Ei, você esqueceu de alguma coisa.";
				mes "Agora vá e me traga tudo que eu havia te pedido, ok?";
				emotion(e_pif);
				next;
				mes "[Garoto]";
				mes "Eu sei que você sabe o que precisa trazer, mas eu vou repetir novamente:";
				mes "^0000FF1 Diamanete de 3 Quilates^000000,";
				mes "^0000FF1 Coração Imortal^000000 e";
				mes "^0000FF1 Rosa Eterna^000000.";
				close;
			}
			mes "[Garoto]";
			mes "Hm. Mas isso é bom.";
			mes "Embora eu tenha todo tempo do mundo, eu não gosto de esperar muito.";
			close;
		} else if (slinkerq == 2) {
			if (SkillPoint) {
				mes "[Maia]";
				mes "Você ainda possui alguns pontos não distribuidos.";
				mes "Use todos eles para aprender as habilidades de Taekwon, e depois volte quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
				close;
			} else if (.SoulLinkerTest == 1) {
				mes "[Maia]";
				mes "Certo agora, preciso terminar a cerimônia que vai te transformar em Espiritualista.";
				mes "Então você poderia esperar até que eu termine?";
				mes "Quando eu estiver pront"+(Sex == SEX_MALE ? "o":"a")+", irei lhe atender.";
				close;
			}
			donpcevent("Timer#slinkerq::OnEnable");
			.SoulLinkerTest = 1;
			mes "[Maia]";
			mes "Ótimo, eu terminei os preparativos.";
			mes "Agora está pronta a cerimônia de mudança para você tornar-se um Espiritualista.";
			mes "Agora feche seus olhos...";
			close2;
			warp("job_soul",30,30);
			end;
		} else if (slinkerq > 2) {
			mes "[Maia]";
			mes "Você está pront"+(Sex == SEX_MALE ? "o":"a")+" para entrar nas profudenzas da sua mente de novo?";
			next;
			if (select("Não","Sim") == 1) {
				mes "[Maia]";
				mes "Então, volte a falar comigo quando você estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Até lá, eu estarei esperando bem aqui.";
				close;
			}
			if (.SoulLinkerTest == 1) {
				mes "[Maia]";
				mes "Certo agora, preciso terminar a cerimônia que vai te transformar em Espiritualista.";
				mes "Então você poderia esperar até que eu termine?";
				mes "Quando eu estiver pront"+(Sex == SEX_MALE ? "o":"a")+", irei lhe atender.";
				close;
			}
			donpcevent("Timer#slinkerq::OnEnable");
			.SoulLinkerTest = 1;
			mes "[Maia]";
			mes "Tudo bem, feche seus olhos e relaxe.";
			mes "Você será levad"+(Sex == SEX_MALE ? "o":"a")+" para as profundezas de sua mente.";
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
			mes "Hm? Como você veio parar aqui?";
			mes "Você não está qualificad"+(Sex == SEX_MALE ? "o":"a")+" para esta cerimônia.";
			mes "Vou levá-l"+(Sex == SEX_MALE ? "o":"a")+" de volta para Morroc...";
			close2;
			warp("morocc",157,47);
			end;
		}
		if (slinkerq == 2) {
			mes "[Maia]";
			mes "Você reconhece esse lugar?";
			mes "Certo, agora estamos dentro de sua mente.";
			mes "Os Espíritos dos guerreiros que morreram estão aqui, esperando que você invoque seus poderes.";
			next;
			mes "[Maia]";
			mes "Certo, agora há apenas alguns deles aqui.";
			mes "Mas se você continuar treinando, será capaz de invocar mais Espíritos como um Espiritualista.";
			next;
			slinkerq = 3;
			changequest(6006,6007);
			mes "[Maia]";
			mes "Nós só podemos ficar aqui na sua mente por 3 minutos.";
			mes "Eu sugiro que você fale com os Espíritos enquanto tem a oportunidade.";
			close;
		} else if (slinkerq == 3) {
			mes "[Maia]";
			mes "Ouça o que os Espíritos estão tentando te dizer.";
			mes "Há uma razão pela qual eles não podem seguir em frente para o próximo mundo.";
			close;
		} else if (slinkerq == 4) {
			mes "[Maia]";
			mes "Eu acredito que você já está pront"+(Sex == SEX_MALE ? "o":"a")+" para tornar-se Espiritualista.";
			mes "No entanto, você pode continuar a falar com os Espíritos se for isso que você deseja.";
			next;
			if (select("Conversarei com eles","Tornar-se Espiritualista") == 1) {
				mes "[Maia]";
				mes "Tudo bem.";
				mes "Mas tente ser rápido, uma vez que há um limite de tempo para permanecer em sua mente.";
				mes "Embora, nós possamos voltar à sua mente se você falar comigo mais tarde...";
				close;
			}
			mes "[Maia]";
			mes "Então vamos começar a cerimônia.";
			mes "Esses itens que trouxe serão usados para você ganhar a capacidade de conjurar.";
			mes "Poderes dos Espíritos antigos em seus companheiros no campo de batalha.";
			next;
			mes "[Maia]";
			mes "Esta rosa eterna vai morrer ao invés de você...";
			specialeffect(EF_MAPPILLAR2, AREA, getnpcid(0, "Maia#slinkerq"));
			next;
			mes "[Maia]";
			mes "Esta rosa eterna vai morrer ao invés de você...";
			mes "Este coração imortal irá bombear o sangue ao invés do seu. ";
			next;
			mes "[Maia]";
			mes "Esta rosa eterna vai morrer ao invés de você...";
			mes "Este coração imortal irá bombear o sangue ao invés do seu.";
			mes "Este diamante irá se tornar pó, ao invés do seu corpo mortal.";
			next;
			mes "[Maia]";
			mes "Os mortos que desejarem continuarão a lutar...";
			mes "Lutarão com você!";
			mes "Use seus poderes de Espiritualista com sabedoria e para fins justos.";
			next;
			if (SkillPoint) {
				mes "^0000ffVocê ainda tem pontos de habilidade sobrando.";
				mes "Por favor, use todos os pontos de habilidades restantes e tente novamente!^000000";
				close;
			}
			jobchange(Job_Soul_Linker);
			completequest(6008);
			callfunc("ClearJobQuest2nd",4049);
			mes "[Maia]";
			mes "Desejo a você boa sorte em sua nova vida.";
			mes "Permaneça sempre ao lado de seus aliados.";
			mes "E os espirítos irão te proteger e te ajudar a lutar em suas batalhas.";
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
		mes "Chegou a hora de você seguir seu rumo no mundo!";
		mes "Mais Espiritualistas definitivamente serão necessários nas batalhas contra o mal...";
	} else {
		mes "[Maia]";
		mes "Isto é estranho....";
		mes "Você não deveria estar aqui.";
		mes "Deixe-me te levar de volta para Morroc...";
	}
	close2;
	warp("morocc",157,47);
	end;
}
job_soul,35,30,6	duplicate(Maia#slinkerq)	Maia#2slinkerq	4_M_KID2

// ------------------------------------------------------------------
job_soul,30,35,6	script	Espírito Monge#slinkerq	4_M_GRANDMONK,{
	if (slinkerq == 2) {
		mes "[Espírito Monge]";
		mes "Quem eu sou...?";
		mes "Eu acho...";
		mes "Eu acho melhor você falar com o Maia primeiro...";
		mes "Dizer quem eu sou requer uma explicação complicada...";
		close;
	} else if (slinkerq > 2) {
		mes "[Espírito Monge]";
		mes "Durante minha vida, eu e meus colegas fazemos o melhor.";
		mes "Mesmo assim...";
		mes "Eu ainda não acho que fiz o melhor uso de minhas habilidades.";
		next;
		mes "[Espírito Monge]";
		mes "Na morte, eu tive muitos arrependimentos.";
		mes "Nunca tive a chance de ensinar minhas habilidades para os novos Monges.";
		mes "Emprestar meu poder para os outros é a única chance que tenho de tornar isso possível.";
		next;
		slinkerq = 4;
		if (!questprogress(6008)) { changequest(6007,6008); }
		mes "[Espírito Monge]";
		mes "Eu imploro...";
		mes "Eu preciso de sua ajuda para mostrar a todos meu verdadeiro potencial para os Monges de hoje.";
		close;
	}
	mes "[Espírito Monge]";
	mes "...";
	close;
}

// ------------------------------------------------------------------
job_soul,30,25,7	script	Espírito Sábio#slinkerq	4_M_SAGE_A,{
	if (slinkerq == 2) {
		mes "[Espírito Sábio]";
		mes "Fale com Maia.";
		mes "Tenho medo que eu possa confundir você se você não ouvir primeiro as explicações de Maia...";
		close;
	} else if (slinkerq > 2) {
		mes "[Espírito Sábio]";
		mes "Minha busca pelo conhecimento concedeu-me um poder incrível.";
		mes "Na vida, eu poderia destruir qualquer coisa que quisese.";
		mes "Poucos Sábios conseguiriam chegar ao meu nível...";
		next;
		mes "[Espírito Sábio]";
		mes "Eu morri, mas eu não sou capaz de passar para o outro mundo.";
		mes "Eu ainda quero usar minhas habilidades.";
		mes "Eu quero usar meu conhecimento para construir o que eu quiser, e destruir o que for preciso.";
		next;
		mes "[Espírito Sábio]";
		mes "Para mim é suficiente saber que eu posso dar meu poder a um Sábio que seja digno de recebê-lo.";
		mes "Mas para isso, preciso de sua ajuda.";
		mes "Eu imploro deixe-me ser seu espirito aliado.";
		slinkerq = 4;
		if (!questprogress(6008)) { changequest(6007,6008); }
		next;
		mes "[Espírito Sábio]";
		mes "Eu acredito que você é o único que pode trazer descanso à minha alma perturbada...";
		close;
	}
	mes "[Espírito Sábio]";
	mes "...";
	close;
}

// ------------------------------------------------------------------
job_soul,25,30,5	script	Espírito Alquimista#slinkerq	4_F_ALCHE,{
	if (slinkerq == 2) {
		mes "[Espírito Alquimista]";
		mes "Oh! Eu realmente quero falar com você.";
		mes "Mas o que eu tenho a dizer não fará muito sentido a menos que você fale com Maia primeiro.";
		mes "Mas sim, eu realmente preciso de sua ajuda.";
		close;
	} else if (slinkerq > 2) {
		mes "[Espírito Alquimista]";
		mes "Sem exageros, eu era o mais rápido Alquimista da minha época.";
		mes "Na verdade, eu ainda posso ser o Alquimista mais rápido.";
		mes "Mas por isso eu era arrogante, e acabei me matando em um acidente.";
		next;
		mes "[Espírito Alquimista]";
		mes "Mas a morte não apagou minhas habilidades.";
		mes "Na verdade, eu ainda melhorei minhas habilidades desde que morri.";
		mes "Mas eu não posso ir para o outro mundo, não antes de re-passar minhas tecnicas...";
		slinkerq = 4;
		if (!questprogress(6008)) { changequest(6007,6008); }
		next;
		mes "[Espírito Alquimista]";
		mes "Eu sou impotente como um espirito.";
		mes "Mas se tiver sua ajuda, eu posso ser uma influência para os Alquimistas de hoje.";
		mes "E judá-los a melhorar as suas habilidades.";
		mes "Eu lhe peço, por favor me dê esta chance...";
		close;
	}
	mes "[Espírito Alquimista]";
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

