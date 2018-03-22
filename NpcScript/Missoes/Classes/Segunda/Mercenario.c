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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Quest de Mudança de Classe para Mercenário.               |
\*-----------------------------------------------------------------*/

in_moc_16,19,33,1	script	Membro da Guilda#assassinq	1_M_JOBTESTER,{
	if (SkillPoint) {
		mes "[Homem Furioso]";
		mes "Você não pode mudar o sua classe se você tiver quaisquer pontos de habilidade sobrando.";
		mes "É melhor você usá-las em primeiro...";
		close;
	} else if (assassinq == 4) {
		mes "[Homem Furioso]";
		mes "Oh, pare de fazer essa cara.";
		mes "Você pode realmente estar em tanta dor?";
		next;
		mes "[Homem Furioso]";
		mes "*Risada*";
		mes "Você está sofrendo?";
		mes "Eu posso ver, vou restaurar HP e SP...";
		percentheal(100,100);
		next;
		mes "[Homem Furioso]";
		mes "É tão difícil se manter vivo?";
		mes "Por que você não se esforçar mais da próxima vez?";
		mes "Você não pode forçar-se demasiadamente para se tornar um mercenário...?";
		next;
		if (select("Vou me tornar um Mercenário!","Tenho que descansar um pouco.") == 1) {
			mes "[Homem Furioso]";
			mes "Tudo bem então...";
			close2;
			assassinq = 0;
			warp(strnpcinfo(NPC_MAP),19,76);
			end;
		}
		mes "Fazer uma pausa?";
		mes "Quando você sentir como se estivesse pronto para se tornar um Mercenário, volte.";
		next;
		mes "[Homem Furioso]";
		mes "Vai ter que andar se você quiser voltar para a cidade.";
		mes "Não se esqueça de salvar o seu ponto de retorno.";
		close2;
		assassinq = 0;
		assassinq2 = 0;
		assassinq3 = 0;
		savepoint(strnpcinfo(NPC_MAP),18,14);
		warp(strnpcinfo(NPC_MAP),18,14);
		end;
	} else if (BaseJob == Job_Thief && countitem(Frozen_Heart) == 0 && assassinq > 7) {
		mes "[Mercenário Huey]";
		mes "Ei, o que aconteceu ...";
		mes "Como é que você não trouxe o ^006699Colar Oblivion^000000.";
		mes "Você deveria está com você, então onde está???";
		next;
		mes "[Mercenário Huey]";
		mes "Você ficar ter cuidado melhor do ^006699Colar Oblivion^000000.";
		mes "Melhor conseguir outro antes que o dono descubra que você o perdeu!";
		next;
		mes "[Mercenário Huey]";
		mes "Quando você finalmente tiver econtrado ele, traga-o para mim.";
		mes "^666666*Sigh ...*^000000!";
		close;
	} else if (BaseJob == Job_Thief && countitem(Frozen_Heart) > 0 && assassinq > 7) {
		mes "[Mercenário Huey]";
		mes "Bem, bem, bem, você entendeu.";
		mes "Mas desde que foi claramente riscado da lista, não posso aceitá-lo.";
		mes "Você nunca vai se tornar um mercenário!";
		next;
		mes "[Mercenário Huey]";
		mes "Hahahah.";
		mes "Eu só estou brincando, não me leve tão a sério.";
		mes "Mas eu preciso verificar se está com o colar primeiro..";
		next;
		mes "[Mercenário Huey]";
		mes "...";
		next;
		mes "[Mercenário Huey]";
		mes "...";
		mes "......";
		next;
		delitem(Frozen_Heart,1);
		//changequest(8007,8008);
		jobchange(Job_Assassin);
		completequest(8007);
		callfunc("ClearJobQuest2nd",12);
		mes "[Mercenário Huey]";
		mes "Tudo bem!";
		mes "Você foi aprovad"+(Sex == SEX_MALE ? "o" : "a")+"!";
		next;
		//completequest(8008);
		mes "[Mercenário Huey]";
		mes "Agora faça o seu melhor para ser "+(Sex == SEX_MALE ? "um grande Mercenário" : "uma grande Mercenária")+".";
		mes "Viage com fé e matar com dignidade.";
		mes "Venha a qualquer hora nos uma visita mais uma vez, parabéns!...";
		close;
	} else if (countitem(Frozen_Heart) > 0 && BaseJob == Job_Thief && assassinq < 7) {
		mes "[Homem Furioso]";
		mes "Eh?";
		mes "O que você quer?";
		next;
		mes "[Homem Furioso]";
		mes "Vejo que você está carregando uma ^006699Colar Oblivion^000000...";
		mes "Você quer se tornar um mercenário, não é?";
		mes "Deixe-me ver isso...";
		next;
		mes "[Homem Furioso]";
		mes "...";
		next;
		mes "[Homem Furioso]";
		mes "...";
		mes "......";
		next;
		mes "[Homem Furioso]";
		mes "Espere um segundo...";
		mes "Isso é uma falsificação!";
		next;
		mes "[Homem Furioso]";
		mes "Como você se atreve a pensar em me enganar?!";
		close2;
		warp("moc_fild16",206,229);
		end;
	} else {
		mes "[Homem Furioso]";
		mes "O que o traz aqui?";
		mes "Eu não acho que eu gosto do jeito que você está me olhando...";
		next;
		if (BaseJob == Job_Assassin) {
			mes "[Mercenário Huey]";
			mes "Ei, eu lembro de você!";
			mes "Como era seu nome?";
			mes "Eu me lembro, porque soava engraçado para mim...";
			next;
			mes "[Mercenário Huey]";
			mes strcharinfo(PC_NAME)+", certo?";
			mes "Era sim, como tem passado?";
			next;
			mes "[Mercenário Huey]";
			mes "Infelizmente, eu não tem qualquer missão para você neste momento.";
			mes "Basta manter o foco em sua formação...";
			close;
		} else if (BaseJob == Job_Thief && JobLevel > 39) {
			if (SkillPoint) {
				mes "[Homem Furioso]";
				mes "Você não pode mudar o sua classe se você tiver quaisquer pontos de habilidade sobrando.";
				mes "É melhor você usá-las em primeiro...";
				close;
			} else {
				mes "[Homem Furioso]";
				mes "Hmm ...?";
				mes "Um Gaturno...?";
				next;
				mes "[Homem Furioso]";
				mes (Sex == SEX_MALE ? "um Gaturno" : "uma Gaturna")+" bem experiente.";
				mes "Precisamos de pessoas como você.";
				next;
				mes "[Homem Furioso]";
				mes "Então, que tal dar o próximo passo e se tornar um mercenário?";
				next;
				switch (select("Sim. Eu escolhi esse caminho","Quais são os requisitos?","Talvez mais tarde")) {
					case 1:
					mes "[Homem Furioso]";
					mes "Faz um bom tempo que não tenho recebido candidatos como você.";
					mes "Estarei enviando você para o escritório.";
					close2;
					assassinq = 0;
					if (questprogress(8000)) {
						changequest(8000,8001);
					} else {
						setquest(8001);
					}
					warp(strnpcinfo(NPC_MAP),19,76);
					end;
					case 2:
					mes "[Homem Furioso]";
					mes "Requisitos?";
					mes "Bem, primeiro você precisa ser um Gaturno.";
					mes "Em segundo lugar, você precisa ter pelo menos Level de Classe 40.";
					next;
					mes "[Homem Furioso]";
					mes "E em terceiro lugar, você precisa passar por um teste para se tornar um mercenário.";
					mes "Se você tem certeza de sua habilidade como um gaturno, não precisa se preocupar.";
					close;
					case 3:
					mes "[Homem Furioso]";
					mes "Tudo bem então.";
					mes "Mas volte quando você acha que está pronto. ";
					close;
				}
			}
		} else {
			mes "[Homem Furioso]";
			mes "Huh.";
			mes "Você não está qualificado para se tornar um mercenário ainda.";
			mes "Existem requisitos que você precisa atender em primeiro lugar.";
			next;
			mes "[Homem Furioso]";
			mes "Você precisa ter pelo menos nível 40 de Classe.";
			mes "Mas se você estiver acima de nível de Classe 40, será ainda melhor.";
			close;
		}
	}
}

in_moc_16,25,90,1	script	Membro da Guilda#ASN2	4_M_JOB_ASSASSIN,2,2,{
	mes "[Mercenário Khai]";
	mes "Umm?!";
	emotion(e_gasp);
	next;
	mes "[Mercenário Khai]";
	mes "Chegue mais perto eu prefiro conversar com as pessoas cara a cara.";
	mes "Isso realmente me irrita, ter que levantar a minha voz, para que possam me ouvir...";
	close;
	OnTouch:
	if (assassinq2 == 4) {
		mes "[Mercenário Khai]";
		mes "Ehhh?";
		mes "Você não acabou de passar aqui a um minuto atrás?";
		next;
		mes "[Mercenário Khai]";
		mes "Eh ...";
		mes "Não é você que se escreveu no teste?";
		mes "Bwahahahahaha!";
		next;
		mes "[Mercenário Khai]";
		mes "Bem...";
		mes "Faz um bom tempo desde que não vejo um grande fracasso como você.";
		next;
		mes "[Mercenário Khai]";
		mes "HAH!";
		mes "Hahahahah .!";
		mes "Oh, você está me matando ....";
		next;
		mes "[Mercenário Khai]";
		mes "Desculpe por rir, mas isso é hilário Hahaha.";
		mes "Então você quer que eu lhe dar algumas dicas!?";
		next;
		switch (select("Por favor me ajude","Não ria de mim!","Eu não preciso da sua ajuda!")) {
			case 1:
			mes "[Mercenário Khai]";
			mes "Haaahahahaha !!!";
			mes "Bem, bem, não somos honestos.";
			mes "Você ainda nem mesmo é um mercenário, mas você está me matando!";
			next;
			mes "[O Anônimo]";
			mes "Ho ho ho ...";
			next;
			mes "[Mercenário Khai]";
			mes "Você ouviu isso Anônimo?!";
			mes "Hahahah! ";
			next;
			mes "[O Anônimo]";
			mes "Sim.";
			mes "Este é bastante hilariante em uma espécie patética de forma.";
			next;
			mes "[Mercenário Khai]";
			mes "hahahahahahah!";
			mes "Soooooo, você queria";
			mes "Algumas dicas, certo?";
			next;
			mes "[Mercenário Khai]";
			mes "...";
			next;
			mes "[Mercenário Khai]";
			mes "...";
			mes "......";
			next;
			mes "[Mercenário Khai]";
			mes "...";
			mes "......";
			mes ".........";
			next;
			mes "[Mercenário Khai]";
			mes "Nah.";
			mes "Eu mudei de idéia!";
			mes "Eu não vou dar-lhe as dicas depois de tudo Hee hee hee...";
			close;
			case 2:
			mes "[Mercenário Khai]";
			if (Sex == SEX_MALE) {
				mes "Você deve ter muita auto-confiança para ser um ladrão hoje em dia.";
				next;
				mes "[Mercenário Khai]";
				mes "Sim, sim, eu entendo.";
				mes "Todo mundo mexe-se ao longo do tempo.";
				mes "Desculpe por rir de seus erros...";
			} else {
				mes "Hmm....";
				mes "Eu gosto da sua atitude que você deve manter o seu orgulho como uma ladra.";
				mes "Desculpe por rir de seus erros.";
				mes "Eu acho que você vai fazer melhor da próxima vez.";
			}
			next;
			mes "[Mercenário Khai]";
			mes "Eu não estou autorizado a dar-lhe dicas, eu posso lhe dizer mais sobre ser um mercenário...";
			next;
			mes "[Mercenário Khai]";
			mes "Acima de tudo, nós valorizamos a nossa dignidade.";
			mes "Nós somos mercenários, depois de tudo e as pessoas vão precisar de nós...";
			next;
			mes "[Mercenário Khai]";
			mes "Se as pessoas estão perto de você, de alguma forma.";
			mes "Podem não entender o que eu estou dizendo que nós nascemos para ser solitários devido a nossa natureza.";
			next;
			mes "[Mercenário Khai]";
			mes "Imagine se sua pessoa amada ou um amigo viu o sangue em suas mãos.";
			mes "Há uma chance de que eles não quererem ficar com você.";
			next;
			mes "[Mercenário Khai]";
			mes "Às vezes é solitário, mas não é tão ruim assim.";
			mes "Pelo menos eu posso fazer o que eu quero fazer, você sabe, e fazer as coisas do meu jeito.";
			next;
			mes "[Mercenário Khai]";
			mes "Bem, isso é tudo o que posso dizer por enquanto.";
			mes "Será que ser um mercenário parece deprimente para você?";
			close;
			case 3:
			mes "[Mercenário Khai]";
			mes "Hm...";
			next;
			mes "[Mercenário Khai]";
			mes "Certo, isso é o espírito.";
			mes "Nunca deixe ninguém te deixar para baixo.";
			mes "Nós somos mercenários...";
			next;
			mes "[Mercenário Khai]";
			mes "Peço desculpas por rindo de você antes.";
			mes "Quero que você lembre-se de manter esse sentimento de orgulho e dignidade como um mercenário.";
			next;
			mes "[Mercenário Khai]";
			mes "Juntamente com a manutenção de seu orgulho,";
			mes "Eu quero que você respeite o sangue que podem manchar o Katar ou punhal.";
			next;
			if (select("Estou Confiante...","Eu estou confuso") == 1) {
				mes "[Mercenário Khai]";
				mes "Sim, eu posso confiar em você agora.";
				mes "Deixe-me dar-lhe algumas dicas importantes..";
				next;
				switch (rand(1,3)) {
					case 1:
					mes "[Mercenário Khai]";
					mes "Primeiro de tudo, Tocaia é uma habilidade especificamente para o Katar.";
					mes "Portanto, ele não requer quaisquer competências relacionadas com adagas...";
					next;
					mes "[Mercenário Khai]";
					mes "Ataque duplo...";
					mes "Você não tentou aprender?";
					mes "Essa habilidade permite que você atacar um inimigo duas vezes ao mesmo tempo.";
					next;
					mes "[Mercenário Khai]";
					mes "Sangue Escarlate é uma pedra elemental, Gema Azul não tem tudo a ver com a classe mercenário.";
					next;
					mes "[Mercenário Khai]";
					mes "Você já viu Magos caçar Salgueiro Ancião usando a habilidade do elemento água?";
					mes "Água coloca fogo sob controle, e vento coloca água sob controle..";
					next;
					mes "[Mercenário Khai]";
					mes "Enquanto você ficar perto das sombras, por paredes e coisas assim.";
					mes "Furtividade vai te esconder perfeitamente.";
					mes "A menos que algum bastardo usa uma certa habilidade de detecção!";
					next;
					break;
					case 2:
					mes "[Mercenário Khai]";
					mes "Zumbis possui a propriedade do vivo.";
					next;
					mes "[Mercenário Khai]";
					mes "Que tipo de arma que você usou até agora, Damasco, Gladius, Stiletto ou Main Gauche.";
					mes "O que é que você está carregando agora?";
					next;
					mes "[Mercenário Khai]";
					mes "É possível obter um Katar de Slot do Lobo do Deserto.";
					mes "Bem, basta manter isso em mente que você vai precisar dessa informação um dia..";
					next;
					mes "[Mercenário Khai]";
					mes "Você pode ganhar uma Jur com Slot de em um lugar escuro e úmido sob o solo.";
					mes "Bem, eu não tenho idéia porque esse cara tem essa arma...";
					mes "Talvez precise para cavar um buraco...";
					next;
					mes "[Mercenário Khai]";
					mes "E...";
					mes "Eu sempre quis um sapo como animal de estimação mas é impossível.!";
					next;
					mes "[Mercenário Khai]";
					mes "Até onde eu sei, um Goblin carregando um martelo possui a propriedade da terra.";
					mes "Tenha em mente que fogo supera a propriedade da terra..";
					next;
					mes "[Mercenário Khai]";
					mes "Você sabe armas elementares?";
					mes "Os nomes dos ferreiros estão gravados sobre eles normalmente...";
					next;
					break;
					case 3:
					mes "[Mercenário Khai]";
					mes "Vender uma Carta Salgueiro Ancião a um Mago, o mais rapidamente possível.";
					mes "Eles são loucos por essa carta por algum motivo.";
					mes "Ela não serve mesmo para aumentar a INT de um personagem.....?";
					next;
					mes "[Mercenário Khai]";
					mes "Para nós, Esquiva e ataque é mais importante do que a defesa.";
					mes "Nunca pense sobre colocar um elmo, é pesado, desconfortável e até mesmo bloquear sua visão...";
					next;
					mes "[Mercenário Khai]";
					mes "Perícia em esquiva, permite que você tenha +3% de chance de esquivar por cada level da habilidade.";
					next;
					mes "[Mercenário Khai]";
					mes "Como eu lhe disse várias vezes: armas de classe Katar (Jamadhar / Jur / Katar etc) são de duas mãos!";
					next;
					mes "[Mercenário Khai]";
					mes "A cidade do deserto...";
					mes "Sinto falta da minha terra natal.";
					mes "Morroc eu não estive lá por um longo tempo.";
					mes "Sinto que se tornei um gaturno há poucos dias, o tempo voa tão rápido......";
					next;
					mes "[Mercenário Khai]";
					mes "Heh.";
					mes "Lembro-me de quando fui me tornar um gaturno.";
					mes "Fiquei extremamente nervoso quando invadi a fazenda para obter cogumelos....";
					next;
					mes "[Mercenário Khai]";
					mes "Insetos detectam esconderijos / furtividades.";
					mes "Suas antenas nunca deixam de encontrar alvos..";
					next;
					mes "[Mercenário Khai]";
					mes "Ouvi dizer que a carta de Bafomé Jr. acrescenta +3 pontos a agilidade e um ponto de ataque crítico...";
					next;
					mes "[Mercenário Khai]";
					mes "Sim, nós mercenários somos especialistas em adilidade por natureza.";
					mes "Podemos ganhar um bônus de 10 pontos de agilidade, mesmo antes de dominar os mais autos níveis de Classe.";
					next;
				}
				mes "[Mercenário Khai]";
				mes "^666666*Ufa*^000000";
				mes "Isso é tudo o que posso dizer-lhe, no entanto, que é um monte de dicas não duvido que eu disse-lhe quase tudo..";
				next;
				mes "[Mercenário Khai]";
				mes "Bem, então, ir pedir para fazer o teste novamente com \"O Anônimo\".";
				close2;
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			}
			mes "[Mercenário Khai]";
			mes "^666666*Sigh...*^ 000000";
			mes "Como você pode não entender o conceito de dignidade.";
			next;
			mes "[Mercenário Khai]";
			mes "Oh, eu entendo.";
			mes "Não era orgulho que você estava mostrando, você estava apenas sendo idiota.!";
			next;
			mes "[Mercenário Khai]";
			mes "Grrrrr ...";
			close2;
			//warp("c_tower4",64,76);
			end;
		}
	} else {
		mes "[Mercenário Khai]";
		mes "Oh, você deve ser um candidato a mercenário.";
		mes "Está aqui para se tornar um mercenário, não é?";
		next;
		if (select("Sim eu estou","...Não, não sou eu.") == 1) {
			mes "[Mercenário Khai]";
			mes "Ok, bom Vamos preencher o formulário de inscrição.";
			mes "Por favor, assine o seu nome e inclua o seu nível de classe.";
			next;
			mes "[Mercenário Khai]";
			mes "Vamos ver.";
			mes "Seu nome é "+strcharinfo(PC_NAME)+"...";
			mes "Level de Classe "+JobLevel+"...";
			next;
			if (JobLevel > 48) {
				mes "[Mercenário Khai]";
				mes "Espere, o nível de classe é "+JobLevel+"?!";
				mes "Posso ver que tem treinado muito duro.";
				mes "Meus chefes vão gostar de você!";
				next;
				mes "[Mercenário Khai]";
				mes "Vá em frente e der-me um segundo e eu vou transportá-lo para a sala teste.";
				next;
				mes "[Mercenário Khai]";
				mes "Certo, então, melhor sorte para você!";
				close2;
				assassinq3 = 1;
				assassinq = 1;
				changequest(8001,8002);
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			} else if (JobLevel < 49) {
				mes "[Mercenário Khai]";
				mes "Bem, você passou os requisitos.";
				mes "Não é mau de todo.";
				next;
				mes "[Mercenário Khai]";
				mes "Vá em frente e dar me a forma quando você está feito preenchê-lo.";
				mes "Tudo bem, obrigado.";
				next;
				mes "[Mercenário Khai]";
				mes "Eu vou transportá-lo";
				mes "para a sala de teste.";
				mes "Boa sorte!";
				close2;
				assassinq3 = 2;
				assassinq = 1;
				changequest(8001,8002);
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			} else {
				mes "[Mercenário Khai]";
				mes "Quem é você?";
				mes "...Guardas!";
				close2;
				warp("moc_fild16",206,229);
				end;
			}
		} else {
			mes "[Mercenário Khai]";
			mes "Huh?...";
			mes "O que, você está tentando me enganar ou algo?";
			mes "Você não quer ser um mercenário?";
			next;
			if (select("Não","Sim, eu quero ser um mercenário.") == 1) {
				mes "[Mercenário Khai]";
				mes "Eh, saia daqui.";
				mes "Pare de desperdiçar meu tempo...";
				close2;
				assassinq = 0;
				assassinq3 = 0;
				assassinq2 = 0;
				erasequest(8001);
				warp("moc_fild16",206,229);
				end;
			}
			mes "[Mercenário Khai]";
			mes "...";
			mes "Ok, então.";
			next;
			mes "[Mercenário Khai]";
			mes "Preencha o formulário com seu nome e do nível de classe.";
			next;
			mes "[Mercenário Khai]";
			mes strcharinfo(PC_NAME)+"?";
			mes "Esse é o seu nome?";
			mes "Parece engraçado.";
			mes "Vamos ver...";
			mes "Level de Classe "+JobLevel+"...";
			next;
			if (JobLevel > 48) {
				mes "[Mercenário Khai]";
				mes "Level de Classe "+JobLevel+"?!";
				mes "Você deve ter treinado muito duro.";
				mes "Os patrões vão gostar que com certeza ....";
				next;
				mes "[Mercenário Khai]";
				mes "Está feito o preenchimento do formulário.";
				mes "Tudo bem, dê para mim para que eu possa enviá-lo para a Sala de Teste, Boa sorte.";
				next;
				assassinq3 = 1;
				assassinq = 1;
				changequest(8001,8002);
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			} else if (JobLevel < 49) {
				mes "[Mercenário Khai]";
				mes "Você cumpriu nossos requisitos.";
				mes "Agora você que está feito preenchimento do formulário...?";
				next;
				mes "[Mercenário Khai]";
				mes "Então me dê o formulário para que eu possa enviá-lo para a sala de teste.";
				mes "Boa sorte ...";
				next;
				assassinq3 = 2;
				assassinq = 1;
				changequest(8001,8002);
				warp(strnpcinfo(NPC_MAP),19,144);
				end;
			} else {
				mes "[Mercenário Khai]";
				mes "Como entrou aqui?";
				mes "Saia!";
				close2;
				warp("moc_fild16",206,229);
				end;
			}
		}
	}
}

in_moc_16,19,154,0	script	nameless_one	FAKE_NPC,8,2,{
	OnTouch:
	if (assassinq2 < 5) {
		if (assassinq2 < 3) {
			mes "[O Anônimo]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+", Visitante.";
			mes "Mwahaha, é inútil tentar me encontrar ou ver-me...";
			next;
			mes "[O Anônimo]";
			mes "Estou perfeitamente escondido!";
			mes "Para se tornar indetectável só pode ser feito pelos maiores mercenários!";
			next;
			mes "[O Anônimo]";
			mes "Você não está com medo porque não pode me ver?";
			mes "Eu poderia matá-l"+(Sex == SEX_MALE ? "o" : "a")+" a qualquer momento e seria tão fácil ...?";
			next;
			if (select("Acho que me borrei","Conversa mole. Eu te desafio!") == 1) {
				mes "[O Anônimo]";
				mes "Agora eu vejo que você não é nada mas um covarde.";
				next;
				mes "[O Anônimo]";
				mes "Bwahahahahahah!";
				mes "Isso está me fazendo rir!";
				close;
			}
			mes "[O Anônimo]";
			mes "Então ...";
			mes "Você desejar um desafio de mim?!";
			next;
			mes "[O Anônimo]";
			mes "Um rio de sangue segue cada passo meu.";
			mes "Eu não tenho nome, para seu tormento, minhas lâminas é tudo o que precisa saber.";
			next;
			mes "[O Anônimo]";
			mes "Eu estou aqui para testar seu conhecimento.";
			next;
			mes "[O Anônimo]";
			mes "Para o seu desafio, você deve responder às minhas perguntas corretamente.";
			mes "Perguntas muito difíceis que apenas um mercenário pode responder.";
			next;
			mes "[O Anônimo]";
			mes "Embora não sou sem coração.";
			mes "Antes de prosseguir, há algo que você gostaria de saber?";
			next;
			assassinq2 = 0;
			while (assassinq2 < 3) {
				switch (select("Habilidades","Atributos","Eu sei tudo.")) {
					case 1:
					mes "[O Anônimo]";
					mes "Habilidades...?";
					mes "Embora habilidades podem ter aplicações circunstanciais.";
					mes "Vou informar sobre os conceitos básicos.";
					next;
					mes "[O Anônimo]";
					mes "Em primeiro lugar, ^ 3355FFPerícia com Katar^000000.";
					mes "Esta habilidade aumenta o dano de armas de tipo Katar.";
					mes "Quanto maior o nível de habilidade, mais o dano será maior..";
					next;
					mes "[O Anônimo]";
					mes "^3355FFPerícia com mão Esquerda^000000 e ^3355FFPerícia com mão Direita^000000.";
					mes "Mercenários podem equipar armas diferentes em cada mão, quando usando armas do tipo Adaga..";
					next;
					mes "[O Anônimo]";
					mes "Mas é obviamente mais difícil de manusear 2 armas de vez, ao invés de usar apenas uma.";
					mes "As habilidades Perícia com mão Esquerda e Direita, vão almentar o dano ao usar duas adagas..";
					next;
					mes "[O Anônimo]";
					mes "No entanto, se você não quiser usar duas adagas.";
					mes "Você não vai precisar esta habilidade.";
					mes "você vai ver como Perícia com mão esquerda funciona assim que você atingir o nível Perícia com mão esquerda 2..";
					next;
					mes "[O Anônimo]";
					mes "^3355FFLâminas Destruidoras^000000 permite que você atacar um inimigo 8 vezes de uma só.";
					mes "Esta habilidade só funciona com armas Katar por causa da velocidade de ataque que ela requer.";
					next;
					mes "[O Anônimo]";
					mes "Claro, o dano é afetado por pontos de STR e da arma.";
					mes "Você vai entender como esta habilidade funciona quando você atingir o nível 4 em Perícia com Katar..";
					next;
					mes "[O Anônimo]";
					mes "^3355FFTocaia^000000 permite-lhe atacar inimigos enquanto se escondendo debaixo do chão.";
					mes "Como você dominá-la, você vai ser capaz de atacar os inimigos à distância..";
					next;
					mes "[O Anônimo]";
					mes "Uma vez que é um ataque à distância, pode ser muito útil quando você está cercado por inimigos.";
					next;
					mes "[O Anônimo]";
					mes "Porque você é obrigado a esconder-se perfeitamente para usar esta habilidade.";
					mes "Você deve primeiro aprender Furtividade em Nível 2 antes que você pode aprender a Tocaia.";
					next;
					mes "[O Anônimo]";
					mes "Para saber ^3355FFFurtividade^000000, você deve aprender em Nível 2 Esconderijo.";
					mes "Então, você será capaz de se mover ao esconder se você estiver perto de uma parede..";
					next;
					mes "[O Anônimo]";
					mes "A ^3355FFEnvenenar Arma^000000 é uma habilidade que permite você para encantar veneno a que você está usando.";
					mes "Isto vai dar temporariamente a propriedade do veneno em  sua arma...";
					next;
					mes "[O Anônimo]";
					mes "Isso também fará com que seus ataques ganhe chance de envenenar o inimigo ao acaso.";
					mes "Você também pode usar essa habilidade para encantar as armas de seus membros do grupo....";
					next;
					mes "[O Anônimo]";
					mes "^3355FFRefletir Veneno^000000.";
					mes "Protege o usuário de ataques com a propriedade do veneno, e pode ser usado em outras pessoas.";
					mes "No entanto, você deve aprender em Nível 3 Envenenar Arma...";
					next;
					mes "[O Anônimo]";
					mes "^3355FFNévoa Tóxica^000000 consome uma gema vermelha para contaminar uma área com veneno.";
					mes "A duração da contaminação aumenta com o nível desta habilidade..";
					next;
					mes "[O Anônimo]";
					mes "Você pode aprender a habilidade Névoa Venemosa depois que você aprende em Nível 5 Envenenar Arma.";
					next;
					mes "[O Anônimo]";
					mes "^3355FFExplosão Tóxica^000000 é uma habilidade que, depois de usado em um alvo.";
					mes "Fará com que ele explodir quando seu HP é menor do que uma certa quantidade após três segundos.";
					next;
					mes "[O Anônimo]";
					mes "Quando explode alvo, os inimigos nas próximidades também estão atingidos.";
					mes "Esta é uma habilidade essencial para mercenário.";
					mes "Requer Nível 5 Refletir Veneno e Nível 5 Névoa Tóxica..";
					next;
					mes "[O Anônimo]";
					mes "Isso é tudo que tenho a dizer-lhe sobre habilidades de um mercenário.";
					assassinq2 = 1;
					next;
					break;
					case 2:
					mes "[O Anônimo]";
					mes "Hmm, Atributos...";
					mes "Para Mercenários, Agilidade, ou AGI, é o atributo mais importante.";
					next;
					mes "[O Anônimo]";
					mes "STR é provavelmente o segundo atributo mais importante.";
					mes "Mas isso é apenas a minha recomendação..";
					next;
					mes "[O Anônimo]";
					mes "Eu não posso dar-lhe o melhor conselho do que em relação aos atributos.";
					mes "Você deve pesquisar e ver qual atributo melhor e decidir que tipo de mercenário você quer ser..";
					assassinq2 = 2;
					next;
					break;
					case 3:
					if (assassinq2 == 0) {
						mes "[O Anônimo]";
						mes "Sabe tudo não é ?!";
						mes "Sou eu quem decide isso!";
						next;
					}
					assassinq2 = 3;
					break;
				}
			}
			mes "[O Anônimo]";
			mes "Hmpf...";
			mes "Agora é tempo para testar seu conhecimento.";
			mes "Você não pode errar mais de uma pergunta.";
			next;
			mes "[O Anônimo]";
			mes "Em outras palavras, se você quiser passar este teste.";
			mes "Deve me dar 9 respostas corretas das 10 perguntas que eu fazer.";
			mes "Se errar não lhe direi qual errou....";
			next;
			mes "[O Anônimo]";
			mes "Você está pronto?";
			mes "Prepare-se!";
		} else if (assassinq2 < 5) {
			mes "[O Anônimo]";
			mes "Está com problemas em passar um teste simples?";
			mes "Você deve ter mais conhecimento.";
			next;
			if (select("Ajuda-me, como eu passo?","Eu desafio você novamente!") == 1) {
				mes "[O Anônimo]";
				mes "Bem, isso é uma maldita boa pergunta, mas você está banido da Guilda dos Mercenários, por isso não é problema meu ....";
				close2;
				warp("moc_fild16",206,151);
				end;
			}
			mes "[O Anônimo]";
			mes "Agora, vamos testá-lo mais uma vez.";
			mes "Tenha em mente, você deve responder 9 perguntas de 10 correctamente.";
			mes "Se você perder mais do que uma pergunta, você nunca pode se tornar um mercenário.";
			next;
			mes "[O Anônimo]";
			mes "Ok, você está pronto?";
			mes "Boa sorte.";
		}
		next;
		switch (rand(1,3)) {
			case 1:
			mes "[O Anônimo]";
			mes "1. O que aqui não é um pré-requisito da habilidade Tocaia?";
			next;
			if (select("Furtividade Lv 2","Lâminas Destruídoras Lv 5","Esconder Lv 2","Perícia com Mão Esquerda Lv 2") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "2. Envenenar Arma faz sua arma que elemento?";
			next;
			if (select("Veneno","Terra","Fogo","Vento") == 1) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "3. Qual é a função de level 4 de Perícia com Mão Esquerda?";
			next;
			if (select("Ataque +80%","Ataque +70%","Ataque +90%","Ataque +108%!!") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "4. Qual item você precisa usar quando você usa \"Névoa Tóxica\"?";
			next;
			if (select("Gema Verde","Gema Azul","Gema Amarela","Gema Vermelha") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "5. Quando você aumenta Envenenar Arma para o level 5, qual nova habilidade irá aparecer?";
			next;
			if (select("Envenenar","Lâminas Destruídoras","Explosão Tóxica","Nuvem Tóxica") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "6. Que habilidade abaixo permite que você possa caminhar por ai despercebido?";
			next;
			if (select("Esconderijo","Recuar","Furtividade","Chutar Areia") == 3) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "7. Qual é o requerimento para Névoa Tóxica?";
			next;
			if (select("Alvo envenenado","Precisa usar uma Gema Vermelha","Você precisa ter uma quantia certa de HP.") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "8. Qual carta dos monstros abaixo adiciona para Inteligência?";
			next;
			if (select("Chonchon de Aço","Deviruchi","Salgueiro Ancião","Bafomé") == 3) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "9. Quanto SP você gasta quando você bate dobrado usando uma adaga?";
			next;
			if (select("15","É uma habilidade passiva","54") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "10. Qual é o melhor tipo de espada para se usar em Bybalan?";
			next;
			if (select("Espada de Vento","Espada de Gelo","Espada de Terra","Espada de Fogo") == 1) {
				.@assassin_t += 10;
			}
			break;
			case 2:
			mes "[O Anônimo]";
			mes "1. Qual monstro dropa Katar com slot?";
			next;
			if (select("Besouro-Ladrão Macho","PecoPeco","Lobo do Deserto","Cobold") == 3) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "2. Qual carta abaixo pode ser introduzida em uma Jur?";
			next;
			if (select("Caramelo","Ghostring","Baphomet Jr","DoppelGanger") == 1) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "3. Qual classe pode forjar armas elementais?";
			next;
			if (select("Mercador","Ferreiro","Gatuno","Sacerdote") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "4. Que arma abaixo não é uma arma da classe Katar?";
			next;
			if (select("Jamadhar","Jur","Katar","Gladius") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "5. Em Bybalan uma grande quantidade de monstros são de que elemento?";
			next;
			if (select("Água","Fogo","Vento","Terra") == 1) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "6. Qual monstro abaixo não pode ser domado e se tornar um lindo bichinho de estimação?";
			next;
			if (select("Poporing","Sapo de Roda","Lunático","Esporo Venenoso") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "7. Escolha o monstro que é fraco contra Fogo.";
			next;
			if (select("Cobold Espada","Cobold Maça","Cobold Martelo","Cobold Machado") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "8. Escolha um Katar não elemental.";
			next;
			if (select("Katar da Chama Impetuosa","Katar da Espinheira Empoeirada","Osso Afiado de Carniçal","Infiltrador") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "9. Escolha o monstro que não pertence a um grupo elemental.";
			next;
			if (select("Poring","Ghostring","Creamy","Drops") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "10. Escolha um monstro não morto-vivo.";
			next;
			if (select("Drake","Megalodon","Esporo","Khalitzburg") == 3) {
				.@assassin_t += 10;
			}
			break;
			case 3:
			mes "[O Anônimo]";
			mes "1. Qual é a taxa de esquiva aumentada quando você tem a habilidade \"Aumentar Esquiva\" no level 1?";
			next;
			if (select("30","40","160","20") == 1) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "2. Qual monstro pode detectar alguém que está invisível/escondido?";
			next;
			if (select("Rabo de Verme","Andre","Mumia","Esqueleto") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "3. Mercenários podem usar armas duplas.";
			mes "Qual set das armas abaixo um Mercenário pode usar?";
			next;
			if (select("Jur e Maça","Damascus e Claymore","Damascus e Stiletto","Machado e Stiletto") == 3) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "4. Em qual cidade você vira Gatuno?";
			next;
			if (select("Prontera","Lutie","Alberta","Morocc") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "5. Qual carta tem nada para fazer com Agilidade?";
			next;
			if (select("Carta Baphomet Jr","Carta Sussurro","Carta Besouro-Ladrão Macho","Carta Chonchon") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "6. O que faz os Mercenários tão especiais?";
			next;
			if (select("Habilidade de canto","Habilidade de ação","Habilidade de dança","Habilidade de esquiva") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "7. Quando um Mercenário alcança Nível de Classe 50, qual é o bonus adicionado que ele/ela recebe em Agilidade?";
			next;
			if (select("7","8","9","10") == 4) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "8. Qual equipamento não pode ser usado por um Mercenário?";
			next;
			if (select("Adaga","Elmo","Sapatos","Broche") == 2) {
				.@assassin_t += 10;
			}
			mes "[O Anônimo]";
			mes "9. Quando um Aprendiz quer se tornar um Gatuno, quais cogumelos ele/ela precisa roubar?";
			next;
			switch (select("Venenosos e Borrachentos","Vermelhos e Laranja","Do Céu e Inferno","Negros e Brancos")) {
				case 1:
				case 3:
				.@assassin_t += 10;
				break;
				default:
				break;
			}
			mes "[O Anônimo]";
			mes "10. Qual carta abaixo é inútil para um Mercenário?";
			next;
			if (select("Carta Ghostring","Carta Salgueiro Ancião","Carta Esqueleto Soldado","Carta Cobold") == 2) {
				.@assassin_t += 10;
			}
			break;
		}
		if (assassinq2 == 3) {
			next;
			mes "[O Anônimo]";
			mes "De alguma forma, você demonstrou grande esforço.";
			next;
			mes "[O Anônimo]";
			mes "Vamos ver...";
			mes "Você marcou "+.@assassin_t+" pontos...";
			if (.@assassin_t > 80) {
				assassinq2 = 5;
				changequest(8002,8003);
				mes "Bom.";
				mes "Você passou.";
				next;
				mes "[O Anônimo]";
				mes "No entanto, um outro teste espera por você.";
				mes "Quando ir para a próxima área, receberá novas instruções ....";
				close;
			} else {
				assassinq2 = 4;
				mes "Isso significa que você não passou!";
				next;
				mes "[O Anônimo]";
				mes "Como você pode espera ser um mercenário com esta pontuação dessas?";
				mes "Mantenha em aprender mais e volte quando estiver pronto.";
				close2;
				warp(strnpcinfo(NPC_MAP),19,76);
				end;
			}
		} else if (assassinq2 == 4) {
			next;
			mes "[O Anônimo]";
			mes "De alguma forma, você demonstrou grande esforço.";
			next;
			mes "[O Anônimo]";
			mes "Vamos ver...";
			mes "Você marcou "+.@assassin_t+" pontos...";
			if (.@assassin_t > 80) {
				assassinq2 = 5;
				changequest(8002,8003);
				next;
				mes "[O Anônimo]";
				mes "Você não falhou desta vez.";
				mes "Mas você ainda não está pront"+(Sex == SEX_MALE ? "o" : "a")+".";
				mes "Terá outro teste, você será informado sobre o seu próximo teste...";
				close;
			} else {
				assassinq2 = 4;
				mes "Você não!";
				next;
				mes "[O Anônimo]";
				mes "Você é muito inadequado.";
				mes "Como você pode pensar em se tornar um mercenário?";
				next;
				mes "[O Anônimo]";
				mes "Estou surpreso que você foi capaz de se tornar um gatruno.";
				mes "Vá embora e volte apenas quando você saber do que está fazendo.";
				close2;
				warp(strnpcinfo(NPC_MAP),19,76);
				end;
			}
		}
	} else {
		mes "[O Anônimo]";
		mes "Eu ficarei de olho em você...";
		close;
	}
}

in_moc_16,21,165,2	script	Sala de Espera#assassinq	4_F_JOB_ASSASSIN,{
	end;

	OnInit:
	disablenpc("Sala de Espera#assassinq");
	waitingroom("Sala de Espera",10,"Sala de Espera#assassinq::OnStartArena",1);
	enablewaitingroomevent;
	end;

	OnStartArena:
	warpwaitingpc(strnpcinfo(NPC_MAP),66,151);
	attachrid($@warpwaitingpc[0]);
	if (assassinq2 < 5) {
		warpchar(strnpcinfo(NPC_MAP),20,145,getcharid(CHAR_ID_CHAR));
		end;
	}
	donpcevent("Beholder#assassinq::OnEnable");
	donpcevent("Guarda da Porta#assassinq::OnDisable");
	setvariable(getvariableofnpc(.DisableTraps,"Beholder#assassinq"),0);
	disablewaitingroomevent;
	end;

	OnStart:
	enablewaitingroomevent;
	end;
}

in_moc_16,21,165,2	script	Guia do Teste#assassinq	4_F_JOB_ASSASSIN,4,4,{
	if (assassinq == 1 && assassinq2 == 5) {
		mes "[Barcardi]";
		mes strcharinfo(PC_NAME)+"...";
		mes "Você passou no teste?";
		next;
		mes "[Barcardi]";
		mes "Para ser honesta, eu quero conceder-lhe a mudança de classe sem qualquer outra condição.";
		mes "Muitas pessoas patéticas nem sequer têm o conhecimento básico para ser mercenário....";
		next;
		mes "[Barcardi]";
		mes "Devemos manter a nossa dignidade como Mercenários e ser verdadeiramente grandes.";
		mes "Infelizmente, existem muitos idiotas que não têm nenhum orgulho!";
		next;
		mes "[Barcardi]";
		mes "Todos os mercenários devem respeitar os inimigos que matam, o sangue que derrama.";
		mes "E acima de tudo, manter o seu sentido de dignidade!";
		next;
		mes "[Barcardi]";
		mes "Tudo bem.";
		mes "Este próximo teste irá testar a sua capacidade de encontrar rapidamente o seu alvos.";
		next;
		mes "[Barcardi]";
		mes "Se para ser um mercenário, precisamos determinar se você pode distinguir o amigo do inimigo em um instante.";
		next;
		mes "[Barcardi]";
		mes "O principal objetivo deste teste é encontrar e matar todos monstros chamados ^008800Alvo^000000.";
		next;
		mes "[Barcardi]";
		mes "Você deve matar pelo menos 6 monstros ^008800Alvo^000000.";
		mes "Eles estão misturados entre monstros de aparência similar, então você precisa ter cuidado ...";
		next;
		mes "[Barcardi]";
		mes "E também há várias armadilhas espalhadas pelo local fique atent"+(Sex == SEX_MALE ? "o" : "a")+" para não cair em nenhuma.";
		mes "Se for pego por uma armadilha também falhará e terá que recomeçar.";
		next;
		mes "[Barcardi]";
		mes "Se você falhar, você terá que reiniciar este teste.";
		mes "Entre na sala de espera para ser levad"+(Sex == SEX_MALE ? "o" : "a")+" para o Sala de testes.";
		next;
		mes "[Barcardi]";
		mes "Apenas uma pessoa está autorizada a fazer o teste de cada vez.";
		mes "Por isso, se alguém estiver fazendo o teste, você vai ter que esperar até que a pessoa acabe.";
		close;
	} else {
		mes "[Barcardi]";
		mes "Ei, não ser muito difícil, confie em si mesmo!";
		next;
		mes "[Barcardi]";
		mes "Hmm, se você estiver disposto a desistir.";
		mes "Posso lhe mandar devolta, mas se for fazer o teste para mercenário novamente terá que recomeça-lo do zero.";
		mes "Então o que você quer fazer..?";
		next;
		if (select("Continuar","Desistir agora.") == 1) {
			mes "[Bacardi]";
			mes "Boa escolha!";
			mes "Lembre-se, você deve encontrar e matar 6 monstros ^008800Alvo^ 000000!";
			mes "Boa sorte!";
			close;
		}
		mes "[Bacardi]";
		mes "Tudo bem ...";
		close2;
		assassinq = 0;
		assassinq3 = 0;
		assassinq2 = 0;
		changequest(8003,8000);
		warp(strnpcinfo(NPC_MAP),19,13);
		end;
	}

	OnTouch:
	if (assassinq2 < 5) {
		mes "[Bacardi]";
		mes "Você não pode ir ao próximo teste sem passar no teste escrito em primeiro lugar.";
		mes "É melhor falar com o Anônimo....";
		close2;
		warp(strnpcinfo(NPC_MAP),19,76);
	}
	end;
}

in_moc_16,1,1,0	script	Beholder#assassinq	FAKE_NPC,{
	end;

	OnEnable:
	.MyMobs = 6;
	// Monstros do objetivo
	monster(strnpcinfo(NPC_MAP),77,173,"Alvo",PORING,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),62,161,"Alvo",PORING,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),85,169,"Alvo",LUNATIC,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),88,152,"Alvo",PORING,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),90,143,"Alvo",DROPS,1,"Beholder#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),74,167,"Alvo",POPORING,1,"Beholder#assassinq::OnMyMobDead");

	// Monstros misturados
	monster(strnpcinfo(NPC_MAP),62,161,"Criatura Alvo",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,156,"Criatura Alvo",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),71,173,"Alvo da Missão",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),76,172,"Exemplo",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),67,167,"Eu tenho o seu aqui",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,171,"Ataque Me",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Teste de Batalha",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,158,"Doppelganger",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,159,"Você está pronto",LUNATIC,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,169,"Criatura Alvo",POPORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),86,170,"Alvo pra Mudar Classe",POPORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,170,"Monstro de Batalha",POPORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Prova do Teste",POPORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),79,174,"Criatura Alvo",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),68,173,"Alvo da Quest",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),60,158,"Guerreiro Teste",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),75,172,"Eu Não",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),85,170,"Alvo pra Mudar Classe",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Mungamorp",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Orvalho do Batalha",DROPS,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),74,171,"Alvo Guerreiro",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),65,158,"Teste de Batalha",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),64,169,"Alvo da Missão",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),77,172,"Por favor não me Ataque",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),86,171,"Alvo pra Mudar Classe",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),89,156,"Bouncer",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),83,169,"Druida Malígno",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,157,"Qualquer um",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),64,159,"Qualquer um",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,159,"Missão do Arqueiro",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),63,159,"Missão do Espadachim",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),83,148,"Missão do Gaturno",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),82,148,"Missão do Noviço",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	monster(strnpcinfo(NPC_MAP),84,148,"Missão do Mercador",PORING,1,"Beholder#assassinq::OnMyMobDead2");
	initnpctimer;
	end;

	OnReset:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	stopnpctimer;
	donpcevent("Sala de Espera#assassinq::OnStart");
	end;

	OnResetMob:
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	killmonster(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnMyMobDead2");
	stopnpctimer;
	end;

	OnMyMobDead:
	--.MyMobs;
	if (.MyMobs < 1) {
		mapannounce(strnpcinfo(NPC_MAP),"Você passou nesse teste. Parabéns!",bc_map);
		assassinq = 3;
		changequest(8003,8004);
		donpcevent("timestopper#assassinq::OnEnable");
		donpcevent("Guarda da Porta#assassinq::OnEnable");
		donpcevent(strnpcinfo(NPC_NAME)+"::OnResetMob");
		.DisableTraps = 1;
		stopnpctimer;
	} else {
		mapannounce(strnpcinfo(NPC_MAP),"Ok, está indo bem! Aguente aí, você está quase lá! Restam "+.MyMobs+" Alvo",bc_map);
	}
	end;

	OnMyMobDead2:
	mapannounce(strnpcinfo(NPC_MAP),"! Você cometeu um erro! Eu estou lhe trazendo de volta!",bc_map);
	assassinq = 2;
	warp(strnpcinfo(NPC_MAP),19,161);
	donpcevent(strnpcinfo(NPC_NAME)+"::OnReset");
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"Ok, vamos ao teste começar!",bc_map);
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"Como você foi dito antes, encontrar e só matar monstros chamados \"Alvo\"!",bc_map);
	end;

	OnTimer3000:
	mapannounce(strnpcinfo(NPC_MAP),"O objectivo deste teste é analisar a sua capacidade de distinguir rapidamente os inimigos de outras pessoas!",bc_map);
	end;

	OnTimer4000:
	mapannounce(strnpcinfo(NPC_MAP),"Você terá 3 minutos para o teste! Vamos informá-lo de cada minuto passado.",bc_map);
	end;

	OnTimer5000:
	mapannounce(strnpcinfo(NPC_MAP),"Ok, agora você tem exatamente 3 minutos. Mova-se! Mova-se!",bc_map);
	end;

	OnTimer65000:
	mapannounce(strnpcinfo(NPC_MAP),"2 minutos faltando. Como eu já disse, pegue monstros com o nome \"Alvo\"!",bc_map);
	end;

	OnTimer125000:
	mapannounce(strnpcinfo(NPC_MAP),"1 minuto faltando.",bc_map);
	end;

	OnTimer180000:
	mapannounce(strnpcinfo(NPC_MAP),"5 segundos faltando...",bc_map);
	end;

	OnTimer181000:
	mapannounce(strnpcinfo(NPC_MAP),"4 segundos faltando...",bc_map);
	end;

	OnTimer182000:
	mapannounce(strnpcinfo(NPC_MAP),"3 segundos faltando...",bc_map);
	end;

	OnTimer183000:
	mapannounce(strnpcinfo(NPC_MAP),"2 segundos faltando...",bc_map);
	end;

	OnTimer184000:
	mapannounce(strnpcinfo(NPC_MAP),"1 segundo faltando.",bc_map);
	end;

	OnTimer185000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo acabou!",bc_map);
	mapannounce(strnpcinfo(NPC_MAP),"Você só queria desperdiçar seu tempo. Terá que tentar novamente!",bc_map);
	//assassinq = 2;
	end;

	OnTimer186000:
	areawarp(strnpcinfo(NPC_MAP),60,136, 93,177,strnpcinfo(NPC_MAP),19,161);
	end;

	OnTimer187000:
	donpcevent(strnpcinfo(NPC_NAME)+"::OnReset");
	end;
}

in_moc_16,68,158,0	script	SinTrap#assassinq	FAKE_NPC,0,0,{
	OnTouch:
	if (getvariableofnpc(.DisableTraps,"Beholder#assassinq") < 1) {
		mapannounce strnpcinfo(NPC_MAP),"Você será enviado de volta.",bc_map;
		assassinq = 2;
		warp(strnpcinfo(NPC_MAP),19,161);
		donpcevent("Beholder#assassinq::OnResetMob");
		donpcevent("Sala de Espera#assassinq::OnStart");
	}
	end;
}

in_moc_16,69,158,0	duplicate(SinTrap#assassinq)	01_assassinq_2	FAKE_NPC,0,0
in_moc_16,68,159,0	duplicate(SinTrap#assassinq)	01_assassinq_3	FAKE_NPC,0,0
in_moc_16,69,159,0	duplicate(SinTrap#assassinq)	01_assassinq_4	FAKE_NPC,0,0
in_moc_16,64,162,0	duplicate(SinTrap#assassinq)	02_assassinq_1	FAKE_NPC,0,0
in_moc_16,65,162,0	duplicate(SinTrap#assassinq)	02_assassinq_2	FAKE_NPC,0,0
in_moc_16,64,163,0	duplicate(SinTrap#assassinq)	02_assassinq_3	FAKE_NPC,0,0
in_moc_16,65,163,0	duplicate(SinTrap#assassinq)	02_assassinq_4	FAKE_NPC,0,0
in_moc_16,62,168,0	duplicate(SinTrap#assassinq)	03_assassinq_1	FAKE_NPC,0,0
in_moc_16,63,168,0	duplicate(SinTrap#assassinq)	03_assassinq_2	FAKE_NPC,0,0
in_moc_16,62,169,0	duplicate(SinTrap#assassinq)	03_assassinq_3	FAKE_NPC,0,0
in_moc_16,63,169,0	duplicate(SinTrap#assassinq)	03_assassinq_4	FAKE_NPC,0,0
in_moc_16,66,170,0	duplicate(SinTrap#assassinq)	04_assassinq_1	FAKE_NPC,0,0
in_moc_16,67,170,0	duplicate(SinTrap#assassinq)	04_assassinq_2	FAKE_NPC,0,0
in_moc_16,66,171,0	duplicate(SinTrap#assassinq)	04_assassinq_3	FAKE_NPC,0,0
in_moc_16,67,171,0	duplicate(SinTrap#assassinq)	04_assassinq_4	FAKE_NPC,0,0
in_moc_16,64,174,0	duplicate(SinTrap#assassinq)	05_assassinq_1	FAKE_NPC,0,0
in_moc_16,64,175,0	duplicate(SinTrap#assassinq)	05_assassinq_2	FAKE_NPC,0,0
in_moc_16,65,174,0	duplicate(SinTrap#assassinq)	05_assassinq_3	FAKE_NPC,0,0
in_moc_16,65,175,0	duplicate(SinTrap#assassinq)	05_assassinq_4	FAKE_NPC,0,0
in_moc_16,72,174,0	duplicate(SinTrap#assassinq)	06_assassinq_1	FAKE_NPC,0,0
in_moc_16,72,175,0	duplicate(SinTrap#assassinq)	06_assassinq_2	FAKE_NPC,0,0
in_moc_16,73,174,0	duplicate(SinTrap#assassinq)	06_assassinq_3	FAKE_NPC,0,0
in_moc_16,73,175,0	duplicate(SinTrap#assassinq)	06_assassinq_4	FAKE_NPC,0,0
in_moc_16,72,166,0	duplicate(SinTrap#assassinq)	07_assassinq_1	FAKE_NPC,0,0
in_moc_16,72,167,0	duplicate(SinTrap#assassinq)	07_assassinq_2	FAKE_NPC,0,0
in_moc_16,73,166,0	duplicate(SinTrap#assassinq)	07_assassinq_3	FAKE_NPC,0,0
in_moc_16,73,167,0	duplicate(SinTrap#assassinq)	07_assassinq_4	FAKE_NPC,0,0
in_moc_16,72,168,0	duplicate(SinTrap#assassinq)	08_assassinq_1	FAKE_NPC,0,0
in_moc_16,72,169,0	duplicate(SinTrap#assassinq)	08_assassinq_2	FAKE_NPC,0,0
in_moc_16,73,168,0	duplicate(SinTrap#assassinq)	08_assassinq_3	FAKE_NPC,0,0
in_moc_16,73,169,0	duplicate(SinTrap#assassinq)	08_assassinq_4	FAKE_NPC,0,0
in_moc_16,78,168,0	duplicate(SinTrap#assassinq)	09_assassinq_1	FAKE_NPC,0,0
in_moc_16,78,169,0	duplicate(SinTrap#assassinq)	09_assassinq_2	FAKE_NPC,0,0
in_moc_16,79,168,0	duplicate(SinTrap#assassinq)	09_assassinq_3	FAKE_NPC,0,0
in_moc_16,79,169,0	duplicate(SinTrap#assassinq)	09_assassinq_4	FAKE_NPC,0,0
in_moc_16,80,172,0	duplicate(SinTrap#assassinq)	10_assassinq_1	FAKE_NPC,0,0
in_moc_16,81,172,0	duplicate(SinTrap#assassinq)	10_assassinq_2	FAKE_NPC,0,0
in_moc_16,82,172,0	duplicate(SinTrap#assassinq)	10_assassinq_3	FAKE_NPC,0,0
in_moc_16,83,172,0	duplicate(SinTrap#assassinq)	10_assassinq_4	FAKE_NPC,0,0
in_moc_16,80,173,0	duplicate(SinTrap#assassinq)	10_assassinq_5	FAKE_NPC,0,0
in_moc_16,81,173,0	duplicate(SinTrap#assassinq)	10_assassinq_6	FAKE_NPC,0,0
in_moc_16,82,173,0	duplicate(SinTrap#assassinq)	10_assassinq_7	FAKE_NPC,0,0
in_moc_16,83,173,0	duplicate(SinTrap#assassinq)	10_assassinq_8	FAKE_NPC,0,0
in_moc_16,88,174,0	duplicate(SinTrap#assassinq)	11_assassinq_1	FAKE_NPC,0,0
in_moc_16,88,175,0	duplicate(SinTrap#assassinq)	11_assassinq_2	FAKE_NPC,0,0
in_moc_16,89,174,0	duplicate(SinTrap#assassinq)	11_assassinq_3	FAKE_NPC,0,0
in_moc_16,89,175,0	duplicate(SinTrap#assassinq)	11_assassinq_4	FAKE_NPC,0,0
in_moc_16,86,166,0	duplicate(SinTrap#assassinq)	12_assassinq_1	FAKE_NPC,0,0
in_moc_16,86,167,0	duplicate(SinTrap#assassinq)	12_assassinq_2	FAKE_NPC,0,0
in_moc_16,87,166,0	duplicate(SinTrap#assassinq)	12_assassinq_3	FAKE_NPC,0,0
in_moc_16,87,167,0	duplicate(SinTrap#assassinq)	12_assassinq_4	FAKE_NPC,0,0
in_moc_16,90,164,0	duplicate(SinTrap#assassinq)	13_assassinq_1	FAKE_NPC,0,0
in_moc_16,90,165,0	duplicate(SinTrap#assassinq)	13_assassinq_2	FAKE_NPC,0,0
in_moc_16,91,164,0	duplicate(SinTrap#assassinq)	13_assassinq_3	FAKE_NPC,0,0
in_moc_16,91,165,0	duplicate(SinTrap#assassinq)	13_assassinq_4	FAKE_NPC,0,0
in_moc_16,84,160,0	duplicate(SinTrap#assassinq)	14_assassinq_1	FAKE_NPC,0,0
in_moc_16,85,160,0	duplicate(SinTrap#assassinq)	14_assassinq_2	FAKE_NPC,0,0
in_moc_16,86,160,0	duplicate(SinTrap#assassinq)	14_assassinq_3	FAKE_NPC,0,0
in_moc_16,87,160,0	duplicate(SinTrap#assassinq)	14_assassinq_4	FAKE_NPC,0,0
in_moc_16,88,160,0	duplicate(SinTrap#assassinq)	14_assassinq_5	FAKE_NPC,0,0
in_moc_16,89,160,0	duplicate(SinTrap#assassinq)	14_assassinq_6	FAKE_NPC,0,0
in_moc_16,84,161,0	duplicate(SinTrap#assassinq)	14_assassinq_7	FAKE_NPC,0,0
in_moc_16,85,161,0	duplicate(SinTrap#assassinq)	14_assassinq_8	FAKE_NPC,0,0
in_moc_16,86,161,0	duplicate(SinTrap#assassinq)	14_assassinq_9	FAKE_NPC,0,0
in_moc_16,87,161,0	duplicate(SinTrap#assassinq)	14_assassinq_10	FAKE_NPC,0,0
in_moc_16,88,161,0	duplicate(SinTrap#assassinq)	14_assassinq_11	FAKE_NPC,0,0
in_moc_16,89,161,0	duplicate(SinTrap#assassinq)	14_assassinq_12	FAKE_NPC,0,0
in_moc_16,86,154,0	duplicate(SinTrap#assassinq)	15_assassinq_1	FAKE_NPC,0,0
in_moc_16,86,155,0	duplicate(SinTrap#assassinq)	15_assassinq_2	FAKE_NPC,0,0
in_moc_16,87,154,0	duplicate(SinTrap#assassinq)	15_assassinq_3	FAKE_NPC,0,0
in_moc_16,87,155,0	duplicate(SinTrap#assassinq)	15_assassinq_4	FAKE_NPC,0,0
in_moc_16,84,150,0	duplicate(SinTrap#assassinq)	16_assassinq_1	FAKE_NPC,0,0
in_moc_16,84,151,0	duplicate(SinTrap#assassinq)	16_assassinq_2	FAKE_NPC,0,0
in_moc_16,85,150,0	duplicate(SinTrap#assassinq)	16_assassinq_3	FAKE_NPC,0,0
in_moc_16,85,151,0	duplicate(SinTrap#assassinq)	16_assassinq_4	FAKE_NPC,0,0
in_moc_16,90,150,0	duplicate(SinTrap#assassinq)	17_assassinq_1	FAKE_NPC,0,0
in_moc_16,90,151,0	duplicate(SinTrap#assassinq)	17_assassinq_2	FAKE_NPC,0,0
in_moc_16,91,150,0	duplicate(SinTrap#assassinq)	17_assassinq_3	FAKE_NPC,0,0
in_moc_16,91,151,0	duplicate(SinTrap#assassinq)	17_assassinq_4	FAKE_NPC,0,0
in_moc_16,86,146,0	duplicate(SinTrap#assassinq)	18_assassinq_1	FAKE_NPC,0,0
in_moc_16,86,147,0	duplicate(SinTrap#assassinq)	18_assassinq_2	FAKE_NPC,0,0
in_moc_16,87,146,0	duplicate(SinTrap#assassinq)	18_assassinq_3	FAKE_NPC,0,0
in_moc_16,87,147,0	duplicate(SinTrap#assassinq)	18_assassinq_4	FAKE_NPC,0,0

in_moc_16,87,137,0	script	Guarda da Porta#assassinq	WARPNPC,2,1,{
	OnInit:
	disablenpc("Guarda da Porta#assassinq");
	end;

	OnTouch:
	donpcevent("Thomas#assassinq::OnDisable");
	if (assassinq == 3) {
		assassinq = 3;
	} else {
		assassinq = 4;
	}
	warp(strnpcinfo(NPC_MAP),87,102);
	savepoint(strnpcinfo(NPC_MAP),16,13);
	end;

	OnEnable:
	mapannounce(strnpcinfo(NPC_MAP),"A porta nas coordenadas 87 137, abriu, siga para a próxima area.",bc_map);
	enablenpc(strnpcinfo(NPC_NAME));
	end;

	OnDisable:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}

in_moc_16,3,3,0	script	timestopper#assassinq	FAKE_NPC,{
	OnEnable:
	initnpctimer;
	end;

	OnTimer187000:
	donpcevent("Thomas#assassinq::OnDisable");
	stopnpctimer;
	end;

	OnDisable:
	stopnpctimer;
	end;

	OnMyMobDead:
	mapannounce(strnpcinfo(NPC_MAP),"Ei, o que foi isso?! Eu lhe disse para não monstar nenhum monstro!",bc_map);
	mapannounce(strnpcinfo(NPC_MAP),"Eu estou trazendo você de volta...",bc_map);
	assassinq = 3;
	warp(strnpcinfo(NPC_MAP),87,102);
	killmonsterall(strnpcinfo(NPC_MAP));
	end;
}

in_moc_16,89,98,1	script	Thomas#assassinq	2_M_THIEFMASTER,5,1,{
	end;

	OnTouch:
	if (assassinq == 4) {
		mes "[Thomas]";
		mes "Parece que você está em um muita de dor.";
		mes "^666666*Sigh000000";
		mes "Dê-me um segundo, deixe-me tentar restaurar seu HP e SP...";
		percentheal(100,100);
		next;
		mes "[Thomas]";
		mes "Parece que você está tendo um momento difícil.";
		mes "Você quer desisitir?";
		mes "Ou se esforçar o suficiente, para superar esse teste.";
		next;
		switch (select("Vou tentar novamente","Desito... Eu parei!")) {
			case 1:
			mes "[Thomas]";
			mes "Hmm. Tudo bem";
			mes "Boa sorte lá fora.";
			close;
			case 2:
			mes "[Thomas]";
			mes "Huh ...";
			mes "Sair do teste.";
			mes "Bem, acho que você não quer nos fazer perder mais tempo?";
			next;
			mes "[Thomas]";
			mes "Não se esqueça de salvar o seu ponto de desova na cidade.";
			close2;
			mapannounce strnpcinfo(NPC_MAP),"Ficou com medo e parou o teste... Quem é o próximo?!",bc_map;
			assassinq = 0;
			assassinq2 = 0;
			assassinq3 = 0;
			changequest(8004,8000);
			savepoint(strnpcinfo(NPC_MAP),18,14);
			warp(strnpcinfo(NPC_MAP),18,14);
			donpcevent("Sala de Espera#assassinq::OnStart");
			end;
		}
	}
	mes "[Thomas]";
	mes "...Ei, eu estou Thomas.";
	mes "Estou encarregado de testar o uso da perícia esconderijo.";
	next;
	mes "[Thomas]";
	mes "Ouça, neste teste, você não pode matar qualquer monstro.";
	mes "Seu objetivo é alcançar \"Barcardi\" no lado oposto da sala..";
	next;
	mes "[Thomas]";
	mes "Então, basicamente, é passar para o outro lado da sala onde se encontram \"Barcardi\".";
	mes "Sem matar um único monstro entendeu?";
	next;
	mes "[Thomas]";
	mes "Chega de conversa, vamos ver no que você capaz...";
	close2;
	assassinq = 4;

	monster(strnpcinfo(NPC_MAP),81,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),82,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),83,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),84,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),85,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),86,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),88,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),89,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),90,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),77,77,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),78,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),79,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),80,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),81,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),91,55,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),92,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),93,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),94,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),95,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),96,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),97,56,"Múmia",MUMMY,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),76,62,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),79,62,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),79,65,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),76,65,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),96,62,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),96,65,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),99,62,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	monster(strnpcinfo(NPC_MAP),99,65,"Hydra",HYDRA,1,"timestopper#assassinq::OnMyMobDead");
	end;

	OnDisable:
	donpcevent("Sala de Espera#assassinq::OnStart");
	killmonsterall(strnpcinfo(NPC_MAP));
	end;
}

in_moc_16,87,48,2	script	Barcardi#assassinq	4_F_JOB_ASSASSIN,2,2,{
	OnTouch:
	donpcevent("timestopper#assassinq::OnDisable");
	donpcevent("Thomas#assassinq::OnDisable");
	mes "[Barcardi]";
	mes "Oh Parabéns!";
	mes "Você pode agora avançar para a sala do nosso Lider!";
	mes "Boa sorte!";
	close2;
	assassinq = 5;
	changequest(8004,8005);
	warp(strnpcinfo(NPC_MAP),181,183);
	end;
}

in_moc_16,182,169,0	script	#maze_assassinq	WARPNPC,1,1,{
	OnTouch:
	if (assassinq == 5 || assassinq == 6) {
		warp(strnpcinfo(NPC_MAP),181,183);
		++assassinq;
		changequest(8005,8006);
	} else {
		savepoint(strnpcinfo(NPC_MAP),181,183);
		//donpcevent("Lider dos Mercenários#assassinq::OnCast");
		warp(strnpcinfo(NPC_MAP),167,113);
		end;
	}
}

/*
in_moc_16,167,110,0	script	Lider dos Mercenários#assassinq	FAKE_NPC,3,1,{
	OnTouch:
	savepoint(strnpcinfo(NPC_MAP),167,110);
	mes "[Lider dos Mercenários]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+".";
	mes "Este minha sala, o lugar mais profundo do clã mercenário.";
	next;
	mes "[Lider dos Mercenários]";
	mes "Vou dar-lhe um teste simples.";
	mes "Por favor, encontre o seu caminho através desse labirinto invisível e chegue até mim.";
	mes "É esse labirinto que protege a nossa aliança de intrusos...";
	next;
	mes "[Lider dos Mercenários]";
	mes "Estou ansioso para conhecê-lo no final do labirinto.";
	close;

	OnCast:
	mapannounce strnpcinfo(NPC_MAP),"Próximo voluntário, por favor entre.",bc_map;
	end;
}
*/

in_moc_16,149,80,4	script	Lider dos Mercenários#assassinq_2	1_M_MOC_LORD,1,1,{
	end;
	OnTouch:
	//savepoint("morocc",100,100);
	if (assassinq == 7 && BaseJob == Job_Thief) {
		assassinq = 8;
		mes "[Lider dos Mercenários]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+".";
		mes "Eu peço desculpas por fazer você ir através do labirinto.";
		next;
		mes "[Lider dos Mercenários]";
		mes "Eu vi o seu currículo apenas agora você é bem "+(Sex == SEX_MALE ? "conhecido como um gaturno" : "conhecida como uma gaturna")+" de coragem.";
		mes "Raramente recebemos potenciais mercenários de sua estatura...";
		next;
		mes "[Lider dos Mercenários]";
		mes "Posso fazer-lhe algumas perguntas, se você não se importa.";
		mes "Não precisa de nervozismo, já passou em nossos testes.";
		next;
		mes "[Lider dos Mercenários]";
		mes "Primeiro, o que você quis se tornar mercenário?";
		next;
		switch (select("Ter mais poder","Por orgulho","Prática sem fim.")) {
			case 1:
			mes "[Lider dos Mercenários]";
			mes "Mais poder...";
			mes "Sim, você pode pensar mercenários tanto mais fortes do que os gaturnos.";
			next;
			mes "[Lider dos Mercenários]";
			mes "No entanto, para que razão você desejar mais poder?";
			mes "Para mostrar vingança pessoal?";
			mes "Para que finalidade você vai usar esse poder?";
			next;
			switch (select("Por vingança","Por dinheiro","Eu quero viajar.")) {
				case 1:
				assassinq = 8;
				mes "[Lider dos Mercenários]";
				mes "Vingança...";
				mes "Sim, eu entendo.";
				mes "Todos nós guardamos rancor contra alguém, eventualmente.";
				next;
				mes "[Lider dos Mercenários]";
				mes "No entanto, tenha em mente que não devemos ser abalados emocionalmente.";
				mes "Efetue os seus deveres sem dúvida, que é o nosso caminho...";
				next;
				mes "[Lider dos Mercenários]";
				mes "Sendo um mercenário deve abandonar o ego.";
				next;
				break;
				case 2:
				assassinq = 9;
				mes "[Lider dos Mercenários]";
				mes "Razões financeiras...";
				mes "Eu não vou negar que todos nós precisamos de dinheiro para viver.";
				mes "Mas ser mercenário significa viver com um propósito mais elevado..";
				next;
				mes "[Lider dos Mercenários]";
				mes "Sendo um mercenário deve abandonar tais desejos mundanos...";
				next;
				break;
				case 3:
				assassinq = 10;
				mes "[Lider dos Mercenários]";
				mes "Boa ideia Viajando ao redor do mundo vão permitir que você ampliar suas experiências.";
				next;
				mes "[Lider dos Mercenários]";
				mes "A maioria de nós tendem a evitar reunir em grupos.";
				next;
				mes "[Lider dos Mercenários]";
				mes "De certa forma, sendo um mercenário é viver a vida na solidão...";
				next;
				break;
			}
			break;
			case 2:
			mes "[Lider dos Mercenários]";
			mes "Orgulho de um mercenário ...";
			next;
			mes "[Lider dos Mercenários]";
			mes "O orgulho é certamente importante, mas o orgulho não vale nada se você não tem nenhuma habilidade.";
			next;
			mes "[Lider dos Mercenários]";
			mes "A maioria dos mercenários que conheci antes de mim são os irmãos que compartilharam muitos momentos difíceis juntos.";
			next;
			mes "[Lider dos Mercenários]";
			mes "Eu posso entender por que seu orgulho e dignidade seria tão importante para eles agora.";
			mes "Por que razão você deseja se tornar mercenário?";
			next;
			switch (select("Eu gosto da solidão","Fazer riquesas","Por aparência.")) {
				case 1:
				assassinq = 11;
				mes "[Lider dos Mercenários]";
				mes "Você chegou no ponto...";
				mes "Estamos só e sempre estaremos sozinhos....";
				next;
				mes "[Lider dos Mercenários]";
				mes "De certa forma, ser um mercenário igual nada, eu diria.";
				next;
				mes "[Lider dos Mercenários]";
				mes "Mas, como eu disse antes.";
				mes "Eu recomendo ter pelo menos um companheiro para lhe ajudar de vez em quando...";
				next;
				break;
				case 2:
				assassinq = 12;
				mes "[Lider dos Mercenários]";
				mes "Bem, eu não posso negar isso, precisamos de dinheiro para ganhar a vida.";
				mes "Mas você não acha que devemos buscar algo ainda mais importante do que o dinheiro?";
				next;
				break;
				case 3:
				assassinq = 13;
				mes "[Lider dos Mercenários]";
				mes "Estilo e aparência é apenas superficial.";
				mes "É triste que muitas pessoas pensam dessa maneira....";
				next;
				mes "[Lider dos Mercenários]";
				mes "Esses mercenários vergonhosas que perderam seu verdadeiro foco são tratados na nossa própria maneira...";
				next;
				mes "[Lider dos Mercenários]";
				mes "Não se esqueça ...";
				mes "Nós não estamos em um desfile de moda, e nunca estaremos...";
				next;
				break;
			}
			break;
			case 3:
			mes "[Lider dos Mercenários]";
			mes "Prática sem fim...";
			mes "Eu acho que você tem que fazer Existe uma razão que você quer ser um mercenário.?";
			next;
			mes "[Lider dos Mercenários]";
			mes "Ao contrário da classe Gaturno, a classe Mercenário não permite a auto-indulgência.";
			mes "Diga-me a motivo você treinar sem parar.";
			next;
			switch (select("Ampliar meus Habilidades","É um objetivo meu","Ser forte")) {
				case 1:
				assassinq = 14;
				mes "[Lider dos Mercenários]";
				mes "Habilidades de aprendizagem vem naturalmente com o trabalho duro.";
				mes "Mas não acho que de habilidades como o melhor valor de seu treinamento...";
				next;
				mes "[Lider dos Mercenários]";
				mes "Você não ficará satisfeito em se tornar um mercenário, se você acha que isso...";
				next;
				break;
				case 2:
				assassinq = 15;
				mes "[Lider dos Mercenários]";
				mes "É um objetivo seu?";
				mes "Bem, acho que você tem que ter objetivos...";
				next;
				mes "[Lider dos Mercenários]";
				mes "Há muito tempo atrás, eu conheci alguém em missão que teria que mantar-lo.";
				mes "Antes de se tornar um Cavaleiro de nível 54.";
				next;
				mes "[Lider dos Mercenários]";
				mes "É a má eu tive que matá-lo antes quando era de nível 52 ...";
				mes "^666666*Sigh*^000000";
				mes "Oh bem.";
				next;
				mes "Estou um pouco preocupado com você.";
				mes "Eu espero que você perceba que quando você se tornar um mercenário, não há como voltar atrás...";
				next;
				break;
				case 3:
				assassinq = 16;
				mes "[Lider dos Mercenários]";
				mes "Boa ideia ...";
				mes "Essa é uma boa maneira de melhorar a si mesmo eu vi muitas pessoas que sabem como ser forte fisicamente.";
				mes "Mas não em seu estado mental.";
				next;
				mes "[Lider dos Mercenários]";
				mes "Eu espero que você não é um hipócrita disciplina espiritual é a melhor maneira para você para sobreviver...";
				next;
				break;
			}
			break;
		}
		mes "[Lider dos Mercenários]";
		mes "Infelizmente, existem alguns sem juízo que estão ansiosos para ser mercenário, mesmo não sabendo nada...";
		next;
		mes "[Lider dos Mercenários]";
		mes "Eles causam problemas e nos trazem desgraça.";
		mes "Suas atividades muitas vezes resultam em situações horríveis..";
		next;
		mes "[Lider dos Mercenários]";
		mes "Tenha cuidado para não se tornar um deles quando você se tornar um mercenário.";
		mes "A responsabilidade recai exclusivamente sobre seus ombros...";
		next;
		mes "[Lider dos Mercenários]";
		mes "Então, se você pode se tornar um mercenário agora, qual é a primeira coisa que você faria?";
		next;
		switch (select("Eu iria deireto caçar","Existe alguém me esperando","Aprender mais sobre os Mercenários.")) {
			case 1:
			mes "[Lider dos Mercenários]";
			mes "Caçar...";
			mes "Isso é tudo...?";
			next;
			switch (select("Gostaria de subir de nível rápido","Explorar minhas habilidades","Ir a novos lugares.")) {
				case 1:
				.@assassin_sangdam += 10;
				mes "[Lider dos Mercenários]";
				mes "Não faça dessa forma, é imprudente ...";
				mes "Ser um mercenário nunca faz de você uma pessoa diferente e não confiar na sorte..";
				next;
				break;
				case 2:
				.@assassin_sangdam += 5;
				mes "[Lider dos Mercenários]";
				mes "É bom conhecer a si mesmo eu posso entender que você vai ser animar com a grande mudança em sua capacidade.";
				next;
				mes "[Lider dos Mercenários]";
				mes "Entretanto, eu espero que você não vai esquecer a mentalidade mercenário.";
				next;
				break;
				case 3:
				mes "[Lider dos Mercenários]";
				mes "Muito bem ...";
				mes "Explorando lugares que você nunca viu antes.";
				mes "Mas sei que ser um mercenário nunca faz de você uma pessoa diferente.";
				next;
				mes "[Lider dos Mercenários]";
				mes "Não se esforce demais.";
				mes "Tome seu tempo e viajar com sabedoria.";
				next;
				break;
			}
			break;
			case 2:
			mes "[Lider dos Mercenários]";
			mes "Quem está esperando?";
			next;
			switch (select("Meus amigos","Meu Clã","Uma pessoa amada.")) {
				case 1:
				.@assassin_sangdam += 5;
				mes "[Lider dos Mercenários]";
				mes "Eu vejo ...";
				mes "Aprecio as pessoas que se preocupam com você, mesmo quando você esteja sozinho.";
				next;
				break;
				case 2:
				.@assassin_sangdam += 5;
				mes "[Lider dos Mercenários]";
				mes "Grande...";
				mes "Camaradas por quem você morreria para...";
				next;
				mes "[Lider dos Mercenários]";
				mes "Como um mercenário, encontrar um trabalho que você pode fazer por eles sem que eles soubessem..";
				next;
				break;
				case 3:
				mes "[Lider dos Mercenários]";
				mes "Haha, as necessidades do corpo são, por vezes, difícil de ignorar.";
				mes "É melhor aceitar que isso é parte da natureza humana..";
				next;
				mes "[Lider dos Mercenários]";
				mes "Mas você nunca deve revelar-lhe o lado mercenário de sua vida.";
				mes "Não importa o que é preciso..";
				next;
				mes "[Lider dos Mercenários]";
				mes "Ame o seu amado para sempre, mesmo que você não pode expressar abertamente.";
				mes "Às vezes, a vida não permite que você para encontrar o amor verdadeiro mais do que uma vez..";
				next;
				break;
			}
			break;
			case 3:
			mes "[Lider dos Mercenários]";
			mes "Admirável sua atitude.";
			mes "Existe algo que gostaria de me perguntar?";
			next;
			switch (select("Lugares para subir de Level?","Objetivos do Mercenário?","Onde Ganhar dinheiro?")) {
				case 1:
				.@assassin_sangdam += 5;
				mes "[Lider dos Mercenários]";
				mes "Tudo depende de sua mente.";
				mes "Qualquer lugar pode ser o melhor para o nível máximo de acordo com seu estado de espírito..";
				next;
				mes "[Lider dos Mercenários]";
				mes "Você deve saber sobreviver em qualquer situação.";
				next;
				break;
				case 2:
				mes "[Lider dos Mercenários]";
				mes "Há muitos mercenários lá fora.";
				mes "Olhe para eles como seus treinadores, e pedir suas opiniões.";
				next;
				mes "[Lider dos Mercenários]";
				mes "Eu espero que você se torne um excelente mercenário e quando você alcança um certo nível.";
				mes "Você deve guiar novatos como seus conhecimentos..";
				next;
				break;
				case 3:
				.@assassin_sangdam += 10;
				mes "[Lider dos Mercenários]";
				mes "Oh meu senhor ...";
				mes "Você está planejando se tornar um mercenário, a fim de ganhar dinheiro?";
				next;
				mes "[Lider dos Mercenários]";
				mes "As pessoas dessa natureza não são bem-vindas.";
				mes "Se tal é o seu objetivo, você pode querer reconsiderar o sua classe....";
				next;
				break;
			}
			break;
		}
		mes "[Lider dos Mercenários]";
		mes "Foi bom conhecê-lo.";
		mes "Você me fez lembrar dos bons e velhos tempos.";
		next;
		if (!.@assassinqNpc) {
			.@assassinqNpc = 1;
			mes "[Lider dos Mercenários]";
			mes "Por favor, dê-me um segundo...";
			next;
			mapannounce(strnpcinfo(NPC_MAP),"Aqueles envolvidos com o teste, por favor, venham até aqui.",bc_map);
			next;
			mes "[Lider dos Mercenários]";
			mes "Eles vão chegar aqui em breve.";
			next;
			enablenpc("[Huey]");
			enablenpc("[Khai]");
			enablenpc("[O Anônimo]");
			enablenpc("[Barcardi]");
			enablenpc("[Beholder]");
			enablenpc("[Thomas]");
			enablenpc("[Gayle Maroubitz]");
		}
		mes "[O Anônimo]";
		mes "Estou aqui.";
		next;
		mes "[Lider dos Mercenários]";
		mes "Gostaria de ouvir a sua opinião sobre "+strcharinfo(PC_NAME)+" sobre o teste de mudança de classe.";
		next;
		mes "[O Anônimo]";
		mes "Ah sim ...";
		mes "Eu acho "+strcharinfo(PC_NAME)+" que tem potencial.";
		next;
		mes "[Lider dos Mercenários]";
		mes "Bem ...";
		mes "O Anônimo apoia-o.";
		mes "E você, Huey?";
		next;
		if (assassinq3 == 1) {
			mes "[Huey]";
			mes "Uma raridade.";
			mes "Você pode dizer com o trabalho que teve.";
			next;
			mes "[Huey]";
			mes "Eu concordo com o senhor Anônimo.";
		} else {
			mes "[Huey]";
			mes "Apesar "+strcharinfo(PC_NAME)+" parece muito suave e gentil, como uma espécie de gatinho.";
			mes strcharinfo(PC_NAME)+" tem o requisitos.";
			next;
			mes "[Huey]";
			mes "Se está tudo bem com você, eu gostaria de voltar para o meu trabalho.";
			next;
			mes "[Lider dos Mercenários]";
			mes "Sim ...";
			mes "Isso é tudo, Huey.";
		}
		next;
		mes "[Lider dos Mercenários]";
		mes "Então ...";
		mes "Beholder, o qual é a sua opinião?";
		next;
		if (.@assassinqNpc) {
			.@assassinqNpc = 0;
			disablenpc("[Huey]");
			disablenpc("[Khai]");
			disablenpc("[O Anônimo]");
			disablenpc("[Barcardi]");
			disablenpc("[Beholder]");
			disablenpc("[Thomas]");
			disablenpc("[Gayle Maroubitz]");
			close2;
		}
		mes "[Beholder]";
		mes "Bem, eu não gosto da pontuação é claro...";
		mes "Mas, de alguma forma, passou em todos os testes.";
		mes "Para mim tudo bem.";
		next;
		mes "[Lider dos Mercenários]";
		mes "Hmm ...";
		mes "Parece que estamos todos de acordo com as qualificações de "+strcharinfo(PC_NAME)+"...";
		next;
		switch (assassinq) {
			case 8:
			mes "[Lider dos Mercenários]";
			mes "Mesmo que você está impulsionado por vingança pessoal.";
			mes "Espero que ele vai embora como você treinar...";
			next;
			break;
			case 9:
			mes "[Lider dos Mercenários]";
			mes "Mesmo que a sua principal preocupação, por enquanto está sendo um rico.";
			mes "Tenho certeza que você vai buscar algo ainda maior...";
			next;
			break;
			case 10:
			mes "[Lider dos Mercenários]";
			mes "Ansioso para viajar por todo o mundo.";
			mes "Espero que sua verdadeira identidade é encontrado em suas viagens...";
			next;
			break;
			case 11:
			mes "[Lider dos Mercenários]";
			mes "Você parece saber muito sobre mercenários";
			mes "Eu não acho que a frustração de ser só vai ser difícil para você....";
			next;
			break;
			case 12:
			mes "[Lider dos Mercenários]";
			mes "Você tem uma idiotice sobre o dinheiro.";
			mes "Mas eu acredito que você deve ser capaz de superá-lo.";
			next;
			mes "[Lider dos Mercenários]";
			mes "Embora eu não confio em você, por agora, vou lhe dar uma chance ...";
			next;
			break;
			case 13:
			mes "[Lider dos Mercenários]";
			mes "Mesmo que você está encantado em ser um mercenário superficialmente.";
			mes "Acredito que você vai perceber o valor real do mercenário, mais cedo ou mais tarde.";
			next;
			break;
			case 14:
			mes "[Lider dos Mercenários]";
			mes "Uma das raras pessoas que procura melhores habilidades.";
			mes "Espero que você vai perceber a importância da disciplina espiritual, mais cedo ou mais tarde.";
			next;
			break;
			case 15:
			mes "[Lider dos Mercenários]";
			mes "Antes que perceba, você vai encontrar um novo objectivo para o qual você pode se dedicar a si mesmo...";
			next;
			break;
			case 16:
			mes "[Lider dos Mercenários]";
			mes "Eu sei que algumas pessoas se preocupam apenas com seu treinamento físico.";
			mes "Mas, acredito que você se destacar entre eles ...";
			next;
		}
		if (assassinq3 == 1 && BaseJob == Job_Thief && assassinq > 6 && assassinq < 17) {
			assassinq = 17;
			assassinq3 = 2;
			mes "[Lider dos Mercenários]";
			mes "Bem, eu falei demais.";
			mes "Por favor, escolha uma arma como um presente.";
			next;
			mes "[Lider dos Mercenários]";
			mes "Você pode escolher um Jur, Katar, Main Gauche, ou um Gladius.";
			mes "Como um mestre, eu amo todos eles..";
			next;
			switch (select("Jur","Katar","Main Gauche","Gladius")) {
				case 1:
				mes "[Lider dos Mercenários]";
				mes "Um Jur...";
				mes "Boa escolha.";
				getitem(Jur_,1);
				break;
				case 2:
				mes "[Lider dos Mercenários]";
				mes "Um Katar...";
				mes "Aqui está.";
				mes "Embora ele é usado, mas sei que irá atende-lo bem.";
				getitem(Katar_,1);
				break;
				case 3:
				mes "[Lider dos Mercenários]";
				mes "Vejo Você quer usar as duas mãos.";
				mes "Aqui, tome a sua Main Gauche...";
				getitem(Main_Gauche_,1);
				break;
				case 4:
				mes "[Lider dos Mercenários]";
				mes "O Gladius ...";
				mes "Ele é utilizado para governar o mercado de arma mercenário.";
				mes "Por favor, cuide bem dele...";
				getitem(Gladius_,1);
			}
			next;
		} else {
			assassinq = 17;
			mes "[Lider dos Mercenários]";
			mes "Bem, eu falei demais.";
			mes "Por favor, tome isso primeiro.";
			next;
			switch (rand(1,5)) {
				case 1:
				getitem(Main_Gauche,1);
				break;
				case 2:
				getitem(Jur,1);
				break;
				case 3:
				getitem(Stiletto,1);
				break;
				case 4:
				getitem(Knife,1);
				break;
				case 5:
				getitem(Katar,1);
			}
		}
		mes "[Lider dos Mercenários]";
		mes "Bem, eu estou dando-lhe um sinal.";
		mes "Por favor, retorne ao mercenário na entrada da guilda, o de aparência feroz \"Huey\".";
		next;
		mes "[Lider dos Mercenários]";
		mes "Ao receber este sinal, Huey vai promovê-lo a um mercenário.";
		next;
		mes "[Lider dos Mercenários]";
		mes "Você, "+strcharinfo(PC_NAME)+", optou por viver como um mercenário.";
		mes "Que possa aprender com nossos caminhos, e ser um exemplo honra para os outros";
		savepoint("morocc",100,100);
		getitem(Frozen_Heart,1);
		changequest(8006,8007);
		next;
		mes "[Lider dos Mercenários]";
		mes "Ok, todos vocês podem voltar para suas posições, que eu vou enviar "+strcharinfo(PC_NAME)+" para a entrada....";
		if (.@assassinqNpc) {
			.@assassinqNpc = 0;
			disablenpc("[Huey]");
			disablenpc("[Khai]");
			disablenpc("[O Anônimo]");
			disablenpc("[Barcardi]");
			disablenpc("[Beholder]");
			disablenpc("[Thomas]");
			disablenpc("[Gayle Maroubitz]");
			close2;
		}
		mes "[Lider dos Mercenários]";
		mes strcharinfo(PC_NAME)+" leve esse ^006699Colar Oblivion^000000 para o Huey na entrada da guilda.";
		mes "Ele cuidará do resto.";
		next;
		warp(strnpcinfo(NPC_MAP),17,19);
		end;
	} else if (assassinq == 17) {
		mes "[Lider dos Mercenários]";
		mes "Umm ...";
		mes "Como é que você ainda está aqui...?";
		next;
		mes "[Lider dos Mercenários]";
		mes "Você já terminou o seus testes, leve o ^006699Colar Oblivion^000000 para o Huey, assim você poderá mudar sua classe.";
		close2;
		warp(strnpcinfo(NPC_MAP),17,19);
		end;
	} else if (assassinq > 7 && assassinq < 17) {
		assassinq = 7;
		mes "[Lider dos Mercenários]";
		mes "Porque você pressionou \"Cancelar\" durante o processo.";
		mes "Quer mudar o sua classe ou o quê?";
		next;
		mes "[Lider dos Mercenários]";
		mes "^666666*Sigh...*^000000";
		mes "Ok, vamos começar de novo.";
		mes "Se você não me ouvir este tempo, não vai sair desta sala vivo.";
		mes "Entendeu...?";
		close;
	} else {
		mes "[Lider dos Mercenários]";
		mes "Umm ...";
		mes "Como é que você ainda está aqui...?";
		next;
		mes "[Lider dos Mercenários]";
		mes "Você já terminou o seus testes, leve o ^006699Colar Oblivion^000000 para o Huey, assim você poderá mudar sua classe.";
		close2;
		warp(strnpcinfo(NPC_MAP),17,19);
		end;
	}
}

in_moc_16,186,81,1	script	Assistente do Mestre#assassinq	1_M_JOBTESTER,1,1,{
	mes "[Assistente Markovitz]";
	mes "Desculpe, mas eu não estou no comando de mudanças de classe.";
	mes "Vá falar com nosso lider.";
	close;
}


-	script	#moc_assin_dup	FAKE_NPC,{
	end;
	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}
in_moc_16,156,87,1	duplicate(#moc_assin_dup)	[Huey]	1_M_JOBTESTER
in_moc_16,156,85,1	duplicate(#moc_assin_dup)	[Khai]	4_M_JOB_ASSASSIN
in_moc_16,156,83,1	duplicate(#moc_assin_dup)	[O Anônimo]	1_M_MOC_LORD
in_moc_16,156,81,2	duplicate(#moc_assin_dup)	[Barcardi]	4_F_JOB_ASSASSIN
in_moc_16,156,79,1	duplicate(#moc_assin_dup)	[Beholder]	2_M_THIEFMASTER
in_moc_16,156,77,1	duplicate(#moc_assin_dup)	[Thomas]	2_M_THIEFMASTER
in_moc_16,156,75,1	duplicate(#moc_assin_dup)	[Gayle Maroubitz]	1_M_JOBTESTER
