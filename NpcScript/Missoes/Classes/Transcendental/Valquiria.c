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
| - Info: Quest de Mudança de Classe para Transcedental.            |
\*-----------------------------------------------------------------*/

yuno_in02,88,164,5	script	Metheus Sylphe#valkyrieq	2_M_SAGE_B,{
	if (BaseLevel > 98 && JobLevel > 49 && Class >= Job_Knight && Class <= Job_Crusader2) {
		if (!valkyrieq) {
			mes "[Metheus Sylphe]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à Biblioteca da Academia Mágica de Schweicherbil.";
			mes "Eu presumo que você tenha chegado aqui para ler o \"Livro de Ymir\".";
			next;
			mes "[Metheus Sylphe]";
			mes "Infelizmente o exemplar do livro foi danificado ao longo do tempo.";
			mes "Atualmente, apenas permitimos ao público ver uma cópia do livro.";
			next;
			mes "[Metheus Sylphe]";
			mes "Além disso, a fim de preservar o \"Livro de Ymir\" original.";
			mes "Optamos por aceitar doações de pessoas que querem ler a cópia que nós fornecemos.";
			next;
			mes "[Metheus Sylphe]";
			mes "A sugestão de uma doação é de 1,285,000 zeny.";
			next;
			if (select("Doar","Cancelar") == 1) {
				if (Zeny >= 1285000) {
					Zeny -= 1285000;
					valkyrieq = 1;
					mes "[Metheus Sylphe]";
					mes "Obrigado, sua doação será utilizada para uma boa causa.";
					mes "Agora você pode ler o livro.";
					close;
				} else {
					mes "[Metheus Sylphe]";
					mes "Infelizmente, você não possui os zenys suficiente no momento.";
					mes "Verifique seus fundos e retorne.";
					close;
				}
			}
			mes "[Metheus Sylphe]";
			mes "Aproveite o seu tempo,";
			mes "e as suas viagens.";
			close;
		}
		mes "[Metheus Sylphe]";
		mes "Mais uma vez, muito obrigado pela sua generosa doação.";
		mes "Sinta-se livre para ler a cópia de carbono do \"Livro de Ymir\" em seu lazer.";
		close;
	}
	mes "[Metheus Sylphe]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" à Biblioteca da Academia Mágica de Schweicherbil...";
	mes "Aqui, temos inúmeros livros.";
	mes "Por favor, se tiver algum tempo olhe ao redor.";
	close;
}

yuno_in02,93,207,1	script	Livro de Ymir#valkyrieq	HIDDEN_NPC,{
	if (Upper == 1) {
		mes "[O Livro de Ymir]";
		mes "...A entrada para o Salão da Honra está aberto a qualquer pessoa.";
		mes "Que tenha avançado para sua próxima vida.";
		mes "Ele está ali para ajudar heróis a decidirem o que querem fazer.";
		mes "E pode levá-los para qualquer lugar do mundo.";
		next;
		mes "[O Livro de Ymir]";
		mes "No Salão da Honra, está tudo preparado para heróis.";
		mes "Trata-se de rumores que qualquer desejo de que não possa ser cumprido na nossa realidade.";
		mes "Pode ser realizado no Salão da Honra.";
		next;
		if (select("Parar a leitura","Continuar a leitura") == 1) {
			mes "[O Livro de Ymir]";
			mes ".....";
			close;
		} else {
			mes "[O Livro de Ymir]";
			mes "Existe um caminho que leva ao esquecido Salão da Honra, o lugar mais próximo dos céus.";
			close2;
			warp ("valkyrie",48,8);
			end;
		}
	} else if (BaseLevel > 98 && JobLevel > 49 && Class >= Job_Knight && Class <= Job_Crusader2) {
		if (valkyrieq != 0) {
			mes "[O Livro de Ymir]";
			mes "Antigos heróis vieram sempre em angústia sabendo que eventualmente eles foram mortais.";
			mes "E passariam a partir deste domínio...";
			next;
			mes "[O Livro de Ymir]";
			mes "Não houveram documentos, músicas...";
			mes "Ou folclores remanescentes que continham qualquer informação sobre a vida após da morte.";
			mes "No entanto, eu recentemente descobri um velho conto sobre a Valquíria...";
			next;
			mes "[O Livro de Ymir]";
			mes "Valquíria...";
			mes "A lendária anja guardiã.";
			mes "Anja do Ragnarok.";
			next;
			mes "[O Livro de Ymir]";
			mes "Aventureiros de grande força e bravura serão liderados pela Valquíra em Valhalla.";
			mes "Então, serão dadas novas vidas.";
			next;
			mes "[O Livro de Ymir]";
			mes "Renascem, aqueles que vão viver novamente como ainda maiores heróis, que iluminarão o mundo.";
			mes "Organismos que foram esgotados serão preenchidos com energia...";
			next;
			mes "[O Livro de Ymir]";
			mes "E as suas almas, será dada a habilidade com o coração de Ymir.";
			mes "No entanto, o coração de Ymir foi totalmente destruído.";
			mes "E disperso por todo o mundo após a batalha de Rune-Midgard.";
			next;
			mes "[O Livro de Ymir]";
			mes "Eu tenho encontrado uma pequena quantidade de pedaços do coração de Ymir.";
			mes "Durante um longo período de tempo.";
			mes "Mas não posso confirmar se a história da Valquíria ou de Valhalla.";
			mes "São verdadeiras através de apenas testes científicos.";
			next;
			mes "[O Livro de Ymir]";
			mes "Portanto, estou deixando este registro na esperança de que alguém no futuro possa confirmar que Valquíria e Valhalla existiram realmente.";
			next;
			valkyrieq = 2;
			if(!questprogress(1000)) {
				setquest (1000);
			}
			mes "[O Livro de Ymir]";
			mes "Deixe os heróis viverem a nova vida para que possam proteger o mundo do perigo...";
			close;
		}
		mes "[O Livro de Ymir]";
		mes "...";
		close;
	}
	mes "[O Livro de Ymir]";
	mes "...";
	close;
}

yuno_in05,49,43,1	script	Coração de Ymir#valkyrieq	HIDDEN_NPC,{
	if (BaseLevel > 98 && JobLevel > 49 && Class >= Job_Knight && Class <= Job_Crusader2) {
		if (valkyrieq == 2) {
			warp ("valkyrie",48,8);
		}
	}
	end;
}

valkyrie,48,86,4	script	Valkyrie#valkyrieq	4_F_VALKYRIE,{
	if (Upper == 1) {
		mes "[Valquíria]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao Valhalla, o Salão da Honra.";
		next;
		mes "[Valquíria]";
		mes "Sinta-se à vontade enquanto estiver por aqui.";
		mes "Honra aos guerreiros!";
		close;
	} else if (BaseLevel > 98 && JobLevel > 49 && Class >= Job_Knight && Class <= Job_Crusader2) {
		mes "[Valquíria]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao Valhalla, o Salão da Honra.";
		next;
		mes "[Valquíria]";
		mes "Você está prestes a presenciar uma mudança para uma nova vida!";
		mes "Honra aos guerreiros!";
		next;
		if (Weight > 0 || Zeny > 0 || checkcart() || checkfalcon() || checkmount()) {
			mes "[Valquíria]";
			mes "Há algumas coisas que você deve fazer antes de começarmos.";
			mes "Primeiro você deve esvaziar seu corpo e sua mente.";
			mes "A Honra só virá quando você abandonar todos os seus desejos egoístas...";
			next;
			mes "[Valquíria]";
			mes "Você não pode levar nada com você para a próxima vida.";
			mes "Seus itens, zenys, animais de estimação e carrinhos, todos têm devem ser deixados para trás.";
			close2;
			warp ("yuno_in02",93,205);
			end;
		} else if (SkillPoint) {
			mes "[Valquíria]";
			mes "Sinto que você possui alguns pontos remanescentes, negócios penhorados ou inacabados em sua vida atual.";
			mes "Cuide de encerrá-los na sua vida atual.";
			close;
		} else {
			mes "[Valquíria]";
			mes "Vejo que você já se livrou de todas coisas materiais deste mundo, "+strcharinfo(PC_NAME)+".";
			next;
			mes "[Valquíria]";
			mes "Esta foi uma sábia atitude para alguém como você.";
			mes "A Honra vem quando abandonamos todos os desejos pessoais para o bem da humanidade.";
			next;
			mes "[Valquíria]";
			mes "Agora, permita-me remover todas as suas memórias presentes...";
			mes "No entanto, você será capaz de lembrar dos momentos mais honrosos desta sua vida atual.";
			next;
			mes "[Valquíria]";
			mes "Primeiro, vou pedir à deusa Urd para remover todas as suas memórias presentes.";
			next;
			mes "[Valquíria]";
			mes "Segundo, vou pedir à deusa Verdandi para manter as lembranças mais honráveis de toda sua vida.";
			next;
			mes "[Valquíria]";
			mes "Terceiro, vou pedir à deusa Skuld para guiá-lo até sua próxima vida.";
			next;
			mes "[Valquíria]";
			mes "Um...";
			next;
			mes "[Valquíria]";
			mes "Um...";
			mes "Dois......";
			next;
			mes "[Valquíria]";
			mes "Um...";
			mes "Dois......";
			mes "e três.";
			ADVJOB = Class+Job_Novice_High;
			if (ADVJOB == Job_Lord_Knight2) { ADVJOB = Job_Lord_Knight; }
			if (ADVJOB == Job_Paladin2) { ADVJOB = Job_Paladin; }
			jobchange (Job_Novice_High);
			resetlvl(1);
			skill (NV_FIRSTAID,1,0);
			skill (NV_TRICKDEAD,1,0);
			completequest (1000);
			next;
			mes "[Valquíria]";
			mes "Parabéns!";
			mes "Você agora renasceu e está em uma novíssima vida.";
			mes "Por favor, tome estes pequenos presentes para se preparar para sua nova aventura.";
			getitem (Knife_,1);
			getitem (Cotton_Shirt_,1);
			next;
			mes "[Valquíria]";
			mes "Desejo que a libertação da deusa Urd revele-se e te conceda uma bênção.";
			mes "Espero que Verdandi tenha guardado suas memórias e sempre honre você.";
			next;
			mes "[Valquíria]";
			mes "E rezo para que a nova vida que a deusa Skuld lhe concedeu.";
			mes "Seja ainda mais honrosa do que foi a sua passada.";
			close2;
			switch (ADVJOB) {
				case 4008:
				case 4015:
				warp ("izlude",94,103); break;
				case 4009:
				case 4016:
				warp ("prontera",273,354); break;
				case 4010:
				case 4017:
				warp ("geffen",120,60); break;
				case 4011:
				case 4019:
				warp ("alberta",116,57); break;
				case 4012:
				case 4020:
				case 4021:
				warp ("payon",69,100); break;
				case 4013:
				case 4018:
				warp ("morocc",154,50); break;
				default:
				warp ("yuno_in02",93,205); break;
			}
			end;
		}
	} else {
		mes "[Valquíria]";
		mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" ao Valhalla, o Salão da Honra.";
		next;
		mes "[Valquíria]";
		mes "Infelizmente, você ainda não foi convidado para estar aqui.";
		mes "Peço-lhe que deixe imediatamente este local.";
		close2;
		warp ("yuno_in02",93,205);
		end;
	}
}

