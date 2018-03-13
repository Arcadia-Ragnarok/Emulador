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
| - Info: Quest de Mudan�a de Classe para Transcedental.            |
\*-----------------------------------------------------------------*/

yuno_in02,88,164,5	script	Metheus Sylphe#valkyrieq	2_M_SAGE_B,{
	if (BaseLevel > 98 && JobLevel > 49 && Class >= Job_Knight && Class <= Job_Crusader2) {
		if (!valkyrieq) {
			mes "[Metheus Sylphe]";
			mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � Biblioteca da Academia M�gica de Schweicherbil.";
			mes "Eu presumo que voc� tenha chegado aqui para ler o \"Livro de Ymir\".";
			next;
			mes "[Metheus Sylphe]";
			mes "Infelizmente o exemplar do livro foi danificado ao longo do tempo.";
			mes "Atualmente, apenas permitimos ao p�blico ver uma c�pia do livro.";
			next;
			mes "[Metheus Sylphe]";
			mes "Al�m disso, a fim de preservar o \"Livro de Ymir\" original.";
			mes "Optamos por aceitar doa��es de pessoas que querem ler a c�pia que n�s fornecemos.";
			next;
			mes "[Metheus Sylphe]";
			mes "A sugest�o de uma doa��o � de 1,285,000 zeny.";
			next;
			if (select("Doar","Cancelar") == 1) {
				if (Zeny >= 1285000) {
					Zeny -= 1285000;
					valkyrieq = 1;
					mes "[Metheus Sylphe]";
					mes "Obrigado, sua doa��o ser� utilizada para uma boa causa.";
					mes "Agora voc� pode ler o livro.";
					close;
				} else {
					mes "[Metheus Sylphe]";
					mes "Infelizmente, voc� n�o possui os zenys suficiente no momento.";
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
		mes "Mais uma vez, muito obrigado pela sua generosa doa��o.";
		mes "Sinta-se livre para ler a c�pia de carbono do \"Livro de Ymir\" em seu lazer.";
		close;
	}
	mes "[Metheus Sylphe]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" � Biblioteca da Academia M�gica de Schweicherbil...";
	mes "Aqui, temos in�meros livros.";
	mes "Por favor, se tiver algum tempo olhe ao redor.";
	close;
}

yuno_in02,93,207,1	script	Livro de Ymir#valkyrieq	HIDDEN_NPC,{
	if (Upper == 1) {
		mes "[O Livro de Ymir]";
		mes "...A entrada para o Sal�o da Honra est� aberto a qualquer pessoa.";
		mes "Que tenha avan�ado para sua pr�xima vida.";
		mes "Ele est� ali para ajudar her�is a decidirem o que querem fazer.";
		mes "E pode lev�-los para qualquer lugar do mundo.";
		next;
		mes "[O Livro de Ymir]";
		mes "No Sal�o da Honra, est� tudo preparado para her�is.";
		mes "Trata-se de rumores que qualquer desejo de que n�o possa ser cumprido na nossa realidade.";
		mes "Pode ser realizado no Sal�o da Honra.";
		next;
		if (select("Parar a leitura","Continuar a leitura") == 1) {
			mes "[O Livro de Ymir]";
			mes ".....";
			close;
		} else {
			mes "[O Livro de Ymir]";
			mes "Existe um caminho que leva ao esquecido Sal�o da Honra, o lugar mais pr�ximo dos c�us.";
			close2;
			warp ("valkyrie",48,8);
			end;
		}
	} else if (BaseLevel > 98 && JobLevel > 49 && Class >= Job_Knight && Class <= Job_Crusader2) {
		if (valkyrieq != 0) {
			mes "[O Livro de Ymir]";
			mes "Antigos her�is vieram sempre em ang�stia sabendo que eventualmente eles foram mortais.";
			mes "E passariam a partir deste dom�nio...";
			next;
			mes "[O Livro de Ymir]";
			mes "N�o houveram documentos, m�sicas...";
			mes "Ou folclores remanescentes que continham qualquer informa��o sobre a vida ap�s da morte.";
			mes "No entanto, eu recentemente descobri um velho conto sobre a Valqu�ria...";
			next;
			mes "[O Livro de Ymir]";
			mes "Valqu�ria...";
			mes "A lend�ria anja guardi�.";
			mes "Anja do Ragnarok.";
			next;
			mes "[O Livro de Ymir]";
			mes "Aventureiros de grande for�a e bravura ser�o liderados pela Valqu�ra em Valhalla.";
			mes "Ent�o, ser�o dadas novas vidas.";
			next;
			mes "[O Livro de Ymir]";
			mes "Renascem, aqueles que v�o viver novamente como ainda maiores her�is, que iluminar�o o mundo.";
			mes "Organismos que foram esgotados ser�o preenchidos com energia...";
			next;
			mes "[O Livro de Ymir]";
			mes "E as suas almas, ser� dada a habilidade com o cora��o de Ymir.";
			mes "No entanto, o cora��o de Ymir foi totalmente destru�do.";
			mes "E disperso por todo o mundo ap�s a batalha de Rune-Midgard.";
			next;
			mes "[O Livro de Ymir]";
			mes "Eu tenho encontrado uma pequena quantidade de peda�os do cora��o de Ymir.";
			mes "Durante um longo per�odo de tempo.";
			mes "Mas n�o posso confirmar se a hist�ria da Valqu�ria ou de Valhalla.";
			mes "S�o verdadeiras atrav�s de apenas testes cient�ficos.";
			next;
			mes "[O Livro de Ymir]";
			mes "Portanto, estou deixando este registro na esperan�a de que algu�m no futuro possa confirmar que Valqu�ria e Valhalla existiram realmente.";
			next;
			valkyrieq = 2;
			if(!questprogress(1000)) {
				setquest (1000);
			}
			mes "[O Livro de Ymir]";
			mes "Deixe os her�is viverem a nova vida para que possam proteger o mundo do perigo...";
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

yuno_in05,49,43,1	script	Cora��o de Ymir#valkyrieq	HIDDEN_NPC,{
	if (BaseLevel > 98 && JobLevel > 49 && Class >= Job_Knight && Class <= Job_Crusader2) {
		if (valkyrieq == 2) {
			warp ("valkyrie",48,8);
		}
	}
	end;
}

valkyrie,48,86,4	script	Valkyrie#valkyrieq	4_F_VALKYRIE,{
	if (Upper == 1) {
		mes "[Valqu�ria]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao Valhalla, o Sal�o da Honra.";
		next;
		mes "[Valqu�ria]";
		mes "Sinta-se � vontade enquanto estiver por aqui.";
		mes "Honra aos guerreiros!";
		close;
	} else if (BaseLevel > 98 && JobLevel > 49 && Class >= Job_Knight && Class <= Job_Crusader2) {
		mes "[Valqu�ria]";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao Valhalla, o Sal�o da Honra.";
		next;
		mes "[Valqu�ria]";
		mes "Voc� est� prestes a presenciar uma mudan�a para uma nova vida!";
		mes "Honra aos guerreiros!";
		next;
		if (Weight > 0 || Zeny > 0 || checkcart() || checkfalcon() || checkmount()) {
			mes "[Valqu�ria]";
			mes "H� algumas coisas que voc� deve fazer antes de come�armos.";
			mes "Primeiro voc� deve esvaziar seu corpo e sua mente.";
			mes "A Honra s� vir� quando voc� abandonar todos os seus desejos ego�stas...";
			next;
			mes "[Valqu�ria]";
			mes "Voc� n�o pode levar nada com voc� para a pr�xima vida.";
			mes "Seus itens, zenys, animais de estima��o e carrinhos, todos t�m devem ser deixados para tr�s.";
			close2;
			warp ("yuno_in02",93,205);
			end;
		} else if (SkillPoint) {
			mes "[Valqu�ria]";
			mes "Sinto que voc� possui alguns pontos remanescentes, neg�cios penhorados ou inacabados em sua vida atual.";
			mes "Cuide de encerr�-los na sua vida atual.";
			close;
		} else {
			mes "[Valqu�ria]";
			mes "Vejo que voc� j� se livrou de todas coisas materiais deste mundo, "+strcharinfo(PC_NAME)+".";
			next;
			mes "[Valqu�ria]";
			mes "Esta foi uma s�bia atitude para algu�m como voc�.";
			mes "A Honra vem quando abandonamos todos os desejos pessoais para o bem da humanidade.";
			next;
			mes "[Valqu�ria]";
			mes "Agora, permita-me remover todas as suas mem�rias presentes...";
			mes "No entanto, voc� ser� capaz de lembrar dos momentos mais honrosos desta sua vida atual.";
			next;
			mes "[Valqu�ria]";
			mes "Primeiro, vou pedir � deusa Urd para remover todas as suas mem�rias presentes.";
			next;
			mes "[Valqu�ria]";
			mes "Segundo, vou pedir � deusa Verdandi para manter as lembran�as mais honr�veis de toda sua vida.";
			next;
			mes "[Valqu�ria]";
			mes "Terceiro, vou pedir � deusa Skuld para gui�-lo at� sua pr�xima vida.";
			next;
			mes "[Valqu�ria]";
			mes "Um...";
			next;
			mes "[Valqu�ria]";
			mes "Um...";
			mes "Dois......";
			next;
			mes "[Valqu�ria]";
			mes "Um...";
			mes "Dois......";
			mes "e tr�s.";
			ADVJOB = Class+Job_Novice_High;
			if (ADVJOB == Job_Lord_Knight2) { ADVJOB = Job_Lord_Knight; }
			if (ADVJOB == Job_Paladin2) { ADVJOB = Job_Paladin; }
			jobchange (Job_Novice_High);
			resetlvl(1);
			skill (NV_FIRSTAID,1,0);
			skill (NV_TRICKDEAD,1,0);
			completequest (1000);
			next;
			mes "[Valqu�ria]";
			mes "Parab�ns!";
			mes "Voc� agora renasceu e est� em uma nov�ssima vida.";
			mes "Por favor, tome estes pequenos presentes para se preparar para sua nova aventura.";
			getitem (Knife_,1);
			getitem (Cotton_Shirt_,1);
			next;
			mes "[Valqu�ria]";
			mes "Desejo que a liberta��o da deusa Urd revele-se e te conceda uma b�n��o.";
			mes "Espero que Verdandi tenha guardado suas mem�rias e sempre honre voc�.";
			next;
			mes "[Valqu�ria]";
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
		mes "[Valqu�ria]";
		mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" ao Valhalla, o Sal�o da Honra.";
		next;
		mes "[Valqu�ria]";
		mes "Infelizmente, voc� ainda n�o foi convidado para estar aqui.";
		mes "Pe�o-lhe que deixe imediatamente este local.";
		close2;
		warp ("yuno_in02",93,205);
		end;
	}
}

