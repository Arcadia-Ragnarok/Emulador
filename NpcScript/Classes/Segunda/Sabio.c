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
| - Copyright: Spell Master (24/09/2017)                            |
| - Info: Quest de Mudan�a de Classe para S�bio.                    |
\*-----------------------------------------------------------------*/

yuno_in03,154,35,4	script	Academico#sageq	2_M_SAGE_B,{
	if (BaseJob == Job_Mage) {
		if (!sageq) {
			mes "[Metheus Sylphe]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Academia de Magia Schweicherbil.";
			if (JobLevel < 40) {
				mes "Se voc� desenvolver suas habilidades m�gicas melhor.";
				mes "Digamos at� o m�mimo Level de Classe 40.";
				mes "Voc� pode se inscrever na academia, e quem sabe se tornar "+(Sex == SEX_MALE ? "um S�bio":"uma S�bia")+".";
				close;
			} else {
				mes "Como posso ajud�-l"+(Sex == SEX_MALE ? "o":"a")+"?";
				next;
				switch (select("Sobre a mudan�a de classe?","Eu quero me matricular","Nada")) {
					case 1:
					mes "[Metheus Sylphe]";
					mes "Ent�o...";
					mes "Eu n�o sou respons�vel pela mudan�a de classe para S�bio.";
					next;
					mes "[Metheus Sylphe]";
					mes "Depois de entrar para academia e passar nos testes...";
					mes "Voc� receber� aprova��o oficial para realizar estudos como um S�bio.";
					next;
					mes "[Metheus Sylphe]";
					mes "Por esta raz�o, n�s n�o falamos desse processo como uma mudan�a de classe.";
					mes "Mas como gradua��o.";
					mes "Enfim, se voc� fizer o seu pedido para esta academia.";
					mes "Vou inform�-l"+(Sex == SEX_MALE ? "o":"a")+" sobre a taxa de inscri��o.";
					mes "E deix�-l"+(Sex == SEX_MALE ? "o":"a")+" fazer o teste.";
					next;
					mes "[Metheus Sylphe]";
					mes "Para sua informa��o, se voc� trouxer:";
					mes "^3355ff1 Grim�rio Antigo^000000";
					mes "E ^3355ff1 Colar da Sabedoria^000000.";
					mes "Voc� n�o ter� que pagar a taxa de inscri��o para se inscrever na escola.";
					next;
					mes "[Metheus Sylphe]";
					mes "Depois de se registrar, voc� ser� capaz de fazer o teste de entrada.";
					mes "Se voc� passar no teste, voc� vai escrever uma tese de um determinado assunto.";
					next;
					mes "[Metheus Sylphe]";
					mes "O reitor da Academia vai decidir se voc� est� ou n�o qualificad"+(Sex == SEX_MALE ? "o":"a")+".";
					mes "Se voc� � estudios"+(Sex == SEX_MALE ? "o":"a")+"...";
					mes "Ser� capaz de participar em atividades de estudo e de pesquisa como um S�bio.";
					close;
					case 2:
					mes "[Metheus Sylphe]";
					mes "Eu vejo, quer se juntar � academia.";
					next;
					mes "[Metheus Sylphe]";
					mes "As pessoas que j� cumpriram o requisito b�sico.";
					mes "Chegando ao N�vel de Classe 40, s� assim poder� fazer a inscri��o.";
					mes "A pequena taxa de inscri��o tamb�m ser� necess�ria.";
					next;
					mes "[Metheus Sylphe]";
					mes "A taxa de inscri��o � de 70.000 zeny.";
					mes "No entanto, se voc� trouxer:";
					mes "^3355ff1 Grim�rio Antigo^000000";
					mes "E ^3355ff1 Colar da Sabedoria^000000.";
					mes "poder� fazer a inscri��o gratuitamente.";
					next;
					mes "[Metheus Sylphe]";
					mes "Ent�o, voc� deseja se inscrever?";
					next;
					switch (select("Sim, desejo","A taxa � muito cara","Voltarei mais tarde.")) {
						case 1:
						mes "[Metheus Sylphe]";
						mes "Muito bem. Vamos completar o seu formul�rio de candidatura.";
						mes "Por favor, coloque sua assinatura aqui.";
						next;
						select(strcharinfo(CHAR_NAME));
						mes "[Metheus Sylphe]";
						mes "Seu nome �... "+strcharinfo(CHAR_NAME)+".";
						next;
						if (JobLevel == 50) {
							mes "[Metheus Sylphe]";
							mes "Voc� j� tem o N�vel de Classe certo!";
							mes "Voc� est� �timo!!";
							mes "Em recompensa pelo seu esfor�o, voc� estar� isento da taxa de inscri��o!";
							next;
							mes "[Metheus Sylphe]";
							mes "Sim, tudo est� pronto.";
							mes "Em seguida, voc� ter� um teste de entrada.";
							sageq = 4;
							if (questprogress(2043)) { changequest(2043,2041); }
							else if (questprogress(2044)) { changequest(2044,2041); }
							else if (questprogress(2045)) { changequest(2045,2041); }
							else { setquest(2041); }
							next;
							mes "[Metheus Sylphe]";
							mes "Por favor visite o Professor Claytos.";
							mes "Ele est� na sala � esquerda.";
							close;
						} else {
							mes "[Metheus Sylphe]";
							mes "Voc� vai pagar a taxa de inscri��o de 70.000 zeny?";
							mes "Ou voc� vai me trazer ^3355ffGrim�rio Antigo^000000 e ^3355ffColar da Sabedoria^000000?";
							next;
							if (select("Pagar 70,000 zenys","Vou pegar os itens") == 1) {
								if (Zeny >= 70000) {
									Zeny -= 70000;
									mes "[Metheus Sylphe]";
									mes "Muito obrigado, seu pedido foi aceito.";
									mes "Em seguida, voc� ter� um teste de entrada.";
									sageq = 4;
									if (questprogress(2043)) { changequest(2043,2041); }
									else if (questprogress(2044)) { changequest(2044,2041); }
									else if (questprogress(2045)) { changequest(2045,2041); }
									else { setquest(2041); }
									next;
									mes "[Metheus Sylphe]";
									mes "Por favor, visite o Professor Claytos.";
									mes "Ele est� na sala � esquerda.";
									close;
								} else {
									mes "[Metheus Sylphe]";
									mes "Parece que voc� n�o trouxe dinheiro suficiente para pagar.";
									mes "Por favor, certifique-se de ter pelo menos 70.000 zeny.";
									mes "Para se inscrever nas aulas.";
									close;
								}
							} else {
								if (countitem(Old_Magic_Book) && countitem(Penetration)) {
									mes "[Metheus Sylphe]";
									mes "Muito obrigado, seu pedido foi aceito.";
									mes "Em seguida, voc� ter� um teste de entrada.";
									sageq = 4;
									delitem(Old_Magic_Book,1);
									delitem(Penetration,1);
									if (questprogress(2043)) { changequest(2043,2041); }
									else if (questprogress(2044)) { changequest(2044,2041); }
									else if (questprogress(2045)) { changequest(2045,2041); }
									else { setquest(2041); }
									next;
									mes "[Metheus Sylphe]";
									mes "Por favor, visite o Professor Claytos.";
									mes "Ele est� na sala � esquerda.";
									close;
								} else {
									mes "[Metheus Sylphe]";
									mes "Umm...";
									mes "Parece que voc� n�o trouxe os itens.";
									mes "Eu suponho que voc� deixou-os em algum lugar para tr�s.";
									mes "Por favor, v� busc�-los, e depois volte.";
									close;
								}
							}
						}
						case 2:
						if (JobLevel == 50) {
							mes "[Metheus Sylphe]";
							mes "Oh!";
							mes "Voc� est� com o N�vel de Classe perfeito!";
							mes "Voc� � verdadeiramente exemplar!";
							mes "Como recompensa pelo seu grande esfor�o, voc� estar� isento da taxa de inscri��o!";
							next;
							mes "[Metheus Sylphe]";
							mes "Ok, vamos completar o formul�rio de candidatura.";
							mes "Por favor, coloque sua assinatura aqui.";
							next;
							select(strcharinfo(CHAR_NAME));
							mes "[Metheus Sylphe]";
							mes "Seu nome � ... "+strcharinfo(CHAR_NAME)+".";
							next;
							mes "[Metheus Sylphe]";
							mes "Sim, tudo est� pronto.";
							mes "Em seguida, voc� vai fazer o teste de entrada.";
							sageq = 4;
							if (questprogress(2043)) { changequest(2043,2041); }
							else if (questprogress(2044)) { changequest(2044,2041); }
							else if (questprogress(2045)) { changequest(2045,2041); }
							else { setquest(2041); }
							next;
							mes "[Metheus Sylphe]";
							mes "Por favor visite o professor Claytos.";
							mes "Ele est� na sala � esquerda.";
							close;
						} else if (Zeny >= 70000) {
							mes "[Metheus Sylphe]";
							mes "Bem, eu n�o posso te ajudar com essa quest�o.";
							mes "Se voc� n�o tiver o dinheiro, voc� n�o vai poder entrar na academia.";
							mes "Mesmo que voc� pense que � caro.";
							mes "� justific�vel um pre�o a pagar para se tornar um S�bio.";
							next;
							mes "[Metheus Sylphe]";
							mes "Alternativamente, voc� pode tentar encontrar:";
							mes "^3355ff1 Grim�rio Antigo^000000";
							mes "E ^3355ff1 Colar da Sabedoria^000000.";
							mes "Se voc� encontrar estes itens e trouxe-los para mim.";
							mes "Deixarei voc� fazer a inscri��o gratuitamente.";
							next;
							mes "[Metheus Sylphe]";
							mes "At� logo, e tenha um bom dia.";
							close;
						} else {
							mes "[Metheus Sylphe]";
							mes "Ah, voc� n�o tem dinheiro suficiente?";
							mes "Ent�o n�o poder� pagar a taxa de inscri��o que � 70.000 Zenys.";
							next;
							if (select("N�o outra maneira?","Certo, volto mais tarde.") == 1) {
								mes "[Metheus Sylphe]";
								mes "Hmmm...";
								mes "Ent�o vou lhe oferecer uma op��o especial!";
								mes "Voc� vai pagar 30.000 zenys.";
								mes "E trazer alguns itens como compensa��o para o desconto de taxa de matr�cula.";
								next;
								switch (rand(3)) {
									case 1:
									setarray(.@item[0], 916,914,1002);
									setarray(.@count[0], 50, 50,  25);
									sageq = 1;
									setquest(2043);
									break;
									case 2:
									setarray(.@item[0], 705,949,1024);
									setarray(.@count[0], 50, 50,  25);
									sageq = 2;
									setquest(2044);
									break;
									default:
									setarray(.@item[0], 916,914,705,949);
									setarray(.@count[0], 50, 50, 50, 50);
									sageq = 3;
									setquest(2045);
									break;
								}
								mes "[Metheus Sylphe]";
								mes "Por favor, traga-me os seguintes itens:";
								for (.@i = 0; .@i < getarraysize(.@item); .@i++) {
									mes "^3355ff"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.";
								}
								next;
								mes "[Metheus Sylphe]";
								mes "Se voc� trouxer esses itens, sua taxa de matr�cula ser� de 30.000 zeny.";
								mes "Ao inv�s de 70.000.";
								close;
							} else {
								mes "[Metheus Sylphe]";
								mes "Alternativamente, voc� pode me trazer:";
								mes "^3355ff1 Grim�rio Antigo^000000";
								mes "^3355ff1 Colar da Sabedoria^000000.";
								close;
							}
						}
						case 3:
						mes "[Metheus Sylphe]";
						mes "Ah sim, n�o tenha pressa!...";
						mes "Adeus, e tenha um bom dia.";
						close;
					}
					case 3:
					mes "[Metheus Sylphe]";
					mes "Tenha um bom dia ent�o.";
					close;
				}
			}
		} else if (sageq >= 1 && sageq <= 3) {
			if (countitem(Old_Magic_Book) && countitem(Penetration)) {
				delitem(Old_Magic_Book,1);
				delitem(Penetration,1);
				mes "[Metheus Sylphe]";
				mes "Hunn....";
				mes "Vejo que voc� trouxe o Grim�rio Antigo e o Colar da Sabedoria.";
				mes "Com isso dispensamos a incri��o formal.";
				next;
				mes "[Metheus Sylphe]";
				mes "Por favor visite o professor Claytos.";
				mes "Ele est� na sala � esquerda.";
				sageq = 4;
				if (questprogress(2043)) { changequest(2043,2041); }
				else if (questprogress(2044)) { changequest(2044,2041); }
				else if (questprogress(2045)) { changequest(2045,2041); }
				else { setquest(2041); }
				close;
			} else {
				switch (sageq) {
					case 1:
					setarray(.@item[0], 916,914,1002);
					setarray(.@count[0], 50, 50,  25);
					break;
					case 2:
					setarray(.@item[0], 705,949,1024);
					setarray(.@count[0], 50, 50,  25);
					break;
					case 3:
					setarray(.@item[0], 916,914,705,949);
					setarray(.@count[0], 50, 50, 50, 50);
					break;
				}
				if (.@i == .@arraysize && Zeny >= 10000) {
					mes "[Metheus Sylphe]";
					mes "Muito bem, isso � tudo.";
					mes "Agora sua incri��o est� formalizada.";
					for (.@i = 0; .@i < .@arraysize; .@i++) {
						delitem(.@item[.@i],.@count[.@i]);
					}
					sageq = 4;
					if (questprogress(2043)) { changequest(2043,2041); }
					else if (questprogress(2044)) { changequest(2044,2041); }
					else if (questprogress(2045)) { changequest(2045,2041); }
					next;
					mes "[Metheus Sylphe]";
					mes "Por favor visite o professor Claytos.";
					mes "Ele est� na sala � esquerda.";
					close;
				} else {
					mes "[Metheus Sylphe]";
					mes "Lamento dizer que voc� n�o podemos prosseguir.";
					next;
					mes "[Metheus Sylphe]";
					mes "Como eu disse antes, voc� deve trazer todos esses itens, bem como os 30.000 zeny juntos.";
					mes "Por favor, certifique-se de que voc� tenha os itens necess�rios e dinheiro.";
					next;
					mes "[Metheus Sylphe]";
					mes "Lembre-se que voc� deve trazer:";
					for (.@i = 0; .@i < getarraysize(.@item); .@i++) {
						mes "^3355ff"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.";
					}
					next;
					mes "[Metheus Sylphe]";
					mes "Mas se trouxer:";
					mes "^3355ff1 Grim�rio Antigo^000000";
					mes "^3355ff1 Colar da Sabedoria^000000.";
					mes "Dispensamos todo o resto.";
					close;
				}
			}
		} else if (sageq == 4) {
			mes "[Metheus Sylphe]";
			mes "Hein? O que voc� est� fazendo aqui? Voc� deve fazer o pr�ximo teste.";
			mes "Por favor, visite o Professor Claytos na sala � esquerda.";
			close;
		} else {
			mes "Me desculpe, esta � uma hora bastante inconveniente para conversar.";
			mes "Por favor, volte mais tarde. Pe�o desculpa.";
			close;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "[Metheus Sylphe]";
			mes "Oh, voc� novamente, h� muito te vejo.";
			mes "Ent�o, como � que vai com o estudo?";
			next;
			mes "[Metheus Sylphe]";
			mes "� razo�vel estudar livros e pergaminhos m�gicos todos os dias.";
			mes "Mas voc� tem que ir l� fora e lutar com monstros, tanto quanto poss�vel.";
			mes "A fim de ser um S�bio bem experiente.";
			next;
			mes "[Metheus Sylphe]";
			mes "Se voc� conhece algum dos candidatos S�bios, por favor, d�-lhes alguns conselhos...";
			mes "Al�m disso, por favor d� os meus cumprimentos aos seus colegas tamb�m.";
			close;
		} else {
			mes "Bem Vind"+(Sex == SEX_MALE ? "o":"a")+" � Academia M�gica de Schweicherbil.";
			next;
			mes "[Metheus Sylphe]";
			mes "Este lugar � especializado em forma��o de S�bios.";
			mes "Principalmente, o que n�s fazemos � o estudar sobre monstros e magias.";
			mes "S�o sempre bem-vindos novos estudantes.";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_in03,105,177,5	script	Prof. de Teste Escrito#sageq	4_M_SAGE_A,{
	if (BaseJob == Job_Mage) {
		if (!sageq) {
			mes "[Claytos Verdo]";
			mes "O qu�, voc� quer ser um S�bio?";
			mes "Eu posso dizer pelo seus olhos, famintos de sabedoria.";
			next;
			mes "[Claytos Verdo]";
			mes "Claro, se voc� quiser ser um S�bio, primeiro voc� deve entrar na academia.";
			mes "Se inscreva, e depois volte.";
			close;
		} else if (sageq == 1 || sageq == 2 || sageq == 3) {
			mes "[Claytos Verdo]";
			mes "Fa�a o seu melhor.";
			mes "Vai ser uma experi�ncia boa para voc�.";
			mes "Venha novamente quando terminar sua inscri��o.";
			close;
		} else if (sageq == 4 || sageq == 5) {
			if (sageq == 4) {
				mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Acad�mia de Magia Schweicherbil.";
				mes "Voc� j� foi aplicado pro teste, n�o �?";
				next;
				mes "[Claytos Verdo]";
				mes "Vamos ver, seu nome � "+strcharinfo(CHAR_NAME)+"...";
				mes "Ok, vamos come�ar!";
				next;
				mes "[Claytos Verdo]";
				mes "O teste que vou dar a voc� � pra testar seus conhecimentos.";
				mes "Sobre todas as mat�rias acad�micas no mundo.";
				mes "Vou dar-lhe 20 perguntas, cada pergunta vale 5 pontos.";
				mes "Voc� deve marcar pelo menos 80 pontos, para passar no teste.";
			} else if (sageq == 5) {
				mes "Bem vindo denovo.";
				mes "Ent�o,voc� estudou mais nesse tempo?";
				next;
				mes "[Claytos Verdo]";
				mes "Voc� vai fazer o teste escrito, nas mesmas condi��es que o teste que voc� tomou antes.";
				mes "Vou dar-lhe 20 perguntas.";
				mes "Cada resposta correta lhe dar� 5 pontos.";
				mes "Voc� deve marcar pelo menos 80 pontos, para passar no teste.";
				next;
			}
			mes "[Claytos Verdo]";
			mes "Ok, n�o h� necessidade de esperar.";
			mes "Vamos come�ar imediatamente";
			mes "Ah, e se voc� n�o responder imediatamente, o teste ser� anulado.";
			next;
			switch (rand(3)) {
				case 1:
				mes "1. Escolha um item que o Comerciante de Presentes em Prontera n�o vende.";
				next;
				if (select("Prato de Porcelana","Moldura Vermelha","Buqu�","Bolinha de Gude") == 3) {
					.@sgq += 5;
				}
				mes "2. Escolha uma cidade onde voc� n�o pode comprar um Stiletto.";
				next;
				if (select("Prontera","Morroc","Geffen","Lutie") == 1) {
					.@sgq += 5;
				}
				mes "3. Escolha a cidade mais pr�xima da Ilha da Tartaruga.";
				next;
				if (select("Al De Baran","Alberta","Comodo","Izlude") == 2) {
					.@sgq += 5;
				}
				mes "4. Escolha o monstro que � um tipo diferente dos outros.";
				next;
				if (select("Raggler","Peste","Frilldora","Estrela-do-Mar") == 4) {
					.@sgq += 5;
				}
				mes "5. Escolha o monstro que tem um atributo diferente dos outros.";
				next;
				if (select("Louva-a-Deus","Metaller","Rocker","Besouro-Chifre") == 2) {
					.@sgq += 5;
				}
				mes "6. Escolha o monstro que tem o tamanho diferente dos outros.";
				next;
				if (select("Raydric","Raydric Arqueiro","Andarilho","Moldura Maldita") == 1) {
					.@sgq += 5;
				}
				mes "7. Escolha o monstro que n�o dropa '�lcool'.";
				next;
				if (select("Horong","Pl�nkton","Esporo Venenoso","Sapo-Cururu") == 3) {
					.@sgq += 5;
				}
				mes "8. Escolha a pessoa que � n�o pertente para a miss�o de mudan�a de classe para Cavaleiro.";
				next;
				if (select("Sir Siracuse","Thomas Servantes","Sir Windsor","Lady Amy") == 2) {
					.@sgq += 5;
				}
				mes "9. Escolha algu�m que n�o � um habitante de Prontera.";
				next;
				if (select("Tono","Pina","YuPi","Hollgrehenn") == 2) {
					.@sgq += 5;
				}
				mes "10. Escolha o nome correto para a senhora Kafra que usa �culos.";
				next;
				if (select("Tatiana","Marianne","Bianca","Sofia") == 3) {
					.@sgq += 5;
				}
				mes "11. Quanto SP � gasto para usar Tempestade de Raios lvl 7?";
				next;
				if (select("49","59","69","74") == 2) {
					.@sgq += 5;
				}
				mes "12. Escolha a quantidade certa de redu��o de danos.";
				mes "E o consumo de SP das Habilidades Prote��o Arcana.";
				mes "Quando SP � 50% do total.";
				next;
				if (select("Dano -24% SP 1.5%","Dano -24% SP 2%","Dano -18% SP 1.5%","Dano -18% SP 2%") == 4) {
					.@sgq += 5;
				}
				mes "13. Escolha a propriedade que � irrelevante para as habilidades de \"Lan�as\" para a classe Mago.";
				next;
				if (select("�gua","Terra","Fogo","Vento") == 2) {
					.@sgq += 5;
				}
				mes "14. Escolha a chance e da for�a de ataque para Ataque Duplo (lvl 7), a habilidade do Gatuno.";
				next;
				if (select("35% / 120%","35% / 140%","40% / 120%","40% / 140%") == 2) {
					.@sgq += 5;
				}
				mes "15. Escolha a habilidade que � irrelevante para a aprendizagem Magnus Exorcismus.";
				next;
				if (select("Prote��o Divina","Curar","Revela��o","Aqua Benedicta") == 1) {
					.@sgq += 5;
				}
				mes "16. Escolha a defesa correta e b�nus da Orelha de Coelho.";
				next;
				if (select("DEF 1 / SOR +2","DEF 1 / SOR +5","DEF 2 / SOR +2","DEF 2 / SOR +5") == 3) {
					.@sgq += 5;
				}
				mes "17. Escolha a classe que n�o pode equipar Armadura Acolchoada.";
				next;
				if (select("Espadachim","Mercador","Gatuno","Arqueiro") == 4) {
					.@sgq += 5;
				}
				mes "18. Escolha o item que cura todo o HP e SP ao mesmo tempo.";
				next;
				if (select("Gel�ia Real","Semente de Yggdrasil","Fruto de Yggdrasil","Mastela") == 3) {
					.@sgq += 5;
				}
				mes "19. Quem governa o reino de Rune-Midgard agora?";
				next;
				if (select("Tristun o 3�","Tristram o 3�","Tristar o 3�","Trast o 3�") == 2) {
					.@sgq += 5;
				}
				mes "20. Escolha o deus dos Templ�rios.";
				next;
				if (select("Odin","Loki","Thor","Venadin") == 1) {
					.@sgq += 5;
				}
				break;
				case 2:
				mes "1. Escolha a j�ia que o Vendedor de J�ias de Morroc n�o vende.";
				next;
				if (select("Top�zio","Granada","Diamante","Safira") == 2) {
					.@sgq += 5;
				}
				mes "2. Escolha a cidade onde os usu�rios n�o podem comprar Ra��o de Bichinho de um NPC.";
				next;
				if (select("Prontera","Morroc","Al De Baran","Alberta") == 3) {
					.@sgq += 5;
				}
				mes "3. Escolha a cidade mais pr�xima do Labirinto da Floresta.";
				next;
				if (select("Prontera","Morroc","Geffen","Payon") == 1) {
					.@sgq += 5;
				}
				mes "4. Escolha o monstro que � um tipo diferente dos outros.";
				next;
				if (select("Muka","Drops","Pl�nkton","Penomena") == 4) {
					.@sgq += 5;
				}
				mes "5. Escolha o monstro que tem um atributo diferente dos outros.";
				next;
				if (select("Dokebi","�sis","Giearth","Deviruchi") == 3) {
					.@sgq += 5;
				}
				mes "6. Escolha um monstro que tem um tamanho diferente dos outros.";
				next;
				if (select("Besouro-Ladr�o Macho","Besouro-Chifre","Metaller","Argos") == 4) {
					.@sgq += 5;
				}
				mes "7. Escolha o monstro que n�o dropa \"Folha de Yggdrasil\".";
				next;
				if (select("Marduk","Bafom� Jr","Angeling","Andarilho") == 1) {
					.@sgq += 5;
				}
				mes "8. Escolha quem � irrelevante para a mudan�a da Classe Sacerdote.";
				next;
				if (select("Paul","Sir Windsor","Peter S. Alberto","Cecilia") == 2) {
					.@sgq += 5;
				}
				mes "9. Escolha quem n�o � um habitante de Morroc.";
				next;
				if (select("Syvia","Akira","Antonio","Dmitrii") == 3) {
					.@sgq += 5;
				}
				mes "10. Escolha a Kafra que tem um lindo cabelo azul.";
				next;
				if (select("Denise","Tatiana","Marianne","Bianca") == 1) {
					.@sgq += 5;
				}
				mes "11. Escolha a habilidade que � irrevelante pro aprendizado de Barreira de Fogo.";
				next;
				if (select("Lan�as de Fogo","Ataque Espiritual","Bolas de Fogo","Chama Reveladora") == 2) {
					.@sgq += 5;
				}
				mes "12. Quanto de SP pode ser restaurado ap�s aprender Recupera��o de SP?";
				mes "(sem ser afetado por INT)?";
				next;
				if (select("14","16","18","21") == 3) {
					.@sgq += 5;
				}
				mes "13. Quanto de b�nus de intelig�ncia � recebido ap�s chegar ao N�vel 33?";
				next;
				if (select("7","6","5","4") == 4) {
					.@sgq += 5;
				}
				mes "14. Escolha o consumo de SP correto e da dura��o da habilidade Concentra��o lvl 5.";
				next;
				if (select("45 SP / 80 Segundos","50 / 80 SP Segundos","45 SP / 90 Segundos","50 SP / 90 Segundos") == 1) {
					.@sgq += 5;
				}
				mes "15. Escolha a habilidade que � irrelevante para a aprendizagem Amplificar Poder.";
				next;
				if (select("Punho Firme","Resist�ncia ao Fogo","Martelo de Thor","Per�cia em Armamento") == 2) {
					.@sgq += 5;
				}
				mes "16. Qual � a taxa de defesa correta e b�nus de La�o Meigo?";
				next;
				if (select("DEF 0 / SP+20","DEF 0 / SP+30","DEF 1 / SP+20","DEF 1 / SP+30") == 3) {
					.@sgq += 5;
				}
				mes "17. Escolha a classe que n�o pode equipar Manto Sagrado.";
				next;
				if (select("Espadachim","Mercador","Gatuno","Novi�o") == 3) {
					.@sgq += 5;
				}
				mes "18. Escolha o estado anormal que n�o pode ser curada por Po��o Verde.";
				next;
				if (select("Sil�ncio","Caos","Cegueira","Maldi��o") == 4) {
					.@sgq += 5;
				}
				mes "19. Escolha o nome correto para o antigo reino que desapareceu em algum lugar em Geffen.";
				next;
				if (select("Geffayon","Geffenia","Gefenn","Jaffen") == 2) {
					.@sgq += 5;
				}
				mes "20. Escolha o nome correto para a �rvore que se tornou a raiz deste mundo.";
				next;
				if (select("Yggdrasil","Iggdrassil","Mastela","Galho Seco") == 1) {
					.@sgq += 5;
				}
				break;
				default:
				mes "1.Escolha o item que o Vendedor M�gico de Geffen n�o vende.";
				next;
				if (select("Manto","Bast�o","Tiara","Manto Prateado") == 1) {
					.@sgq += 5;
				}
				mes "2. Escolha a cidade onde os usu�rios n�o podem comprar uma l�mina.";
				next;
				if (select("Prontera","Izlude","Al De Baran","Payon") == 3) {
					.@sgq += 5;
				}
				mes "3. Escolha a cidade mais pr�xima para Glast Heim.";
				next;
				if (select("Prontera","Geffen","Morroc","Payon") == 2) {
					.@sgq += 5;
				}
				mes "4. Escolha o monstro que � um tipo diferente dos outros.";
				next;
				if (select("Estrela-do-Mar","Cavalo-Marinho","Martin","Marin") == 4) {
					.@sgq += 5;
				}
				mes "5. Escolha o monstro que tem um atributo diferente.";
				next;
				if (select("Lobo do Deserto","Fumacento","Picky","Choco") == 2) {
					.@sgq += 5;
				}
				mes "6. Escolha o monstro que tem o tamanho diferente dos outros.";
				next;
				if (select("Drake","Alma Penada","Druida Mal�gno","Khalitzburg") == 1) {
					.@sgq += 5;
				}
				mes "7. Escolha o monstro que n�o dropa \"Fracon\".";
				next;
				if (select("Pupa","Ovo de PecoPeco","Beb� Selvagem","Lobo do Deserto") == 2) {
					.@sgq += 5;
				}
				mes "8. Escolha quem � irrelevante para a mudan�a de classe de Ferreiro.";
				next;
				if (select("Altiregen","Geschupenschte","Barcadi","Baisulist") == 3) {
					.@sgq += 5;
				}
				mes "9. Escolha quem n�o � um habitante de Al De Baran.";
				next;
				if (select("RS125","GOD-POING","Stromme","Chemirre") == 2) {
					.@sgq += 5;
				}
				mes "10. Escolha a funcion�ria Kafra que � a mais nova entre as outras.";
				next;
				if (select("Denise","Tatiana","Marianne","Sofia") == 4) {
					.@sgq += 5;
				}
				mes "11. Escolha o consumo de SP correto e o n�mero de evas�es ao usar Escudo M�gico lvl 6.";
				next;
				if (select("SP 40, 6 vezes","SP 35, 6 vezes","SP 40, 7 vezes","SP 35, 7 vezes") == 3) {
					.@sgq += 5;
				}
				mes "12. Escolha a o ataque m�gico da habilidade Ataque Espiritual lvl 6.";
				next;
				if (select("MATQ * 1.2","MATQ * 1.3","MATQ * 1.4","MATQ * 1.5") == 2) {
					.@sgq += 5;
				}
				mes "13. Escolha a pedra que soluciona o problema dos magos.";
				mes "Que � usado para trocar de classe para Mago.";
				next;
				if (select("Gema Azul","Gema Vermelha","Gema Amarela","Diamanete de 1 Quilate") == 4) {
					.@sgq += 5;
				}
				mes "14. Escolha a for�a de ataque correto e consumo de SP para Golpe Fulminante lvl 6.";
				next;
				if (select("ATQ 250% / SP 8","ATQ 280% / SP 8","ATQ 280% / 1SP 5","ATQ 310% /ATQ 1% / SP 5") == 3) {
					.@sgq += 5;
				}
				mes "15. Escolha a habilidade que � irrelevante para a aprendizagem de Armadilha Explosiva";
				next;
				if (select("Remover Armadilha","Armadilha Atordoante","Instalar Armadilha","Armadilha Luminosa") == 1) {
					.@sgq += 5;
				}
				mes "16. Escolha a defesa correta do V�u de Noiva.";
				next;
				if (select("DEF 0 / MDEF 3","DEF 0 / MDEF 5","DEF 1 / MDEF 3","DEF 1 / MDEF 5") == 2) {
					.@sgq += 5;
				}
				mes "17. Escolha a classe que n�o pode equipar Casaco.";
				next;
				if (select("Espadachim","Mercador","Gatuno","Aprendiz") == 4) {
					.@sgq += 5;
				}
				mes "18. Escolha o item que n�o � um ingrediente para a Tintura Azul.";
				next;
				if (select("�lcool","Detrimindexta","Karvodailnirol","Erva Azul") == 3) {
					.@sgq += 5;
				}
				mes "19. Quando o mundo foi criado pelo deus Odin, qual material ele usou?";
				next;
				if (select("O cora��o de Ymir","A unha de Ymir","O dente de Ymir","O esp�lio de Ymir") == 1) {
					.@sgq += 5;
				}
				mes "20. Escolha o metal que d� mais lucros pros mercadores.";
				next;
				if (select("Ouro","Emperium","Ferro","Fracon") == 1) {
					.@sgq += 5;
				}
				break;
			}
			mes "[Claytos Verdo]";
			mes "Bem, n�s terminamos todas as 20 perguntas.";
			mes "Agora, vamos verificar quantos pontos voc� fez.";
			next;
			mes "[Claytos Verdo]";
			mes "Vamos ver ...";
			mes "Hmm... hmm...";
			next;
			mes "[Claytos Verdo]";
			mes "Voc� marcou "+.@sgq+" pontos.";
			next;
			if (.@sgq >= 80) {
				sageq = 6;
				changequest(2041,2046);
				mes "[Claytos Verdo]";
				mes "Excelente! Voc� deve ter estudado muito para este teste!";
				next;
				mes "[Claytos Verdo]";
				mes "Voc� passou no teste escrito.";
				mes "V� visitar o professor Hermes para o exame pr�tico.";
				close;
			} else {
				sageq = 5;
				mes "Bem...";
				mes "Eu lhe disse que deveria marcar pelo menos 80 pontos para passar.";
				next;
				mes "[Claytos Verdo]";
				mes "Mas eu vou lhe dar outra chance para fazer o teste escrito.";
				mes "Estude mais e volte mais tarde.";
				close;
			}
		} else if (sageq == 6) {
			mes "[Claytos Verdo]";
			mes "Voc� quer fazer o teste novamente?";
			mes "Voc� j� passou!";
			next;
			mes "[Claytos Verdo]";
			mes "V� visitar o professor Hermes para o exame pr�tico.";
			close;
		} else {
			mes "[Claytos Verdo]";
			mes "Estou muito ocupado para cuidar de provas escritas.";
			mes "Volte mais tarde, e eu vou poupar algum tempo para falar.";
			close;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "[Claytos Verdo]";
			mes "Por que voc� voltou aqui?";
			mes "Voc� quer entrar na escola novamente?";
			next;
			mes "[Claytos Verdo]";
			mes "Agora, eu entendo como se sente.";
			mes "Assim, ser forte e independente.";
			mes "Tentar explorar alguns lugares onde ningu�m se aventurou a ir.";
			next;
			mes "[Claytos Verdo]";
			mes "N�o se esque�a de gravar tudo o que voc� experimentar.";
			mes "Voc� deve compartilhar seu conhecimento com outras pessoas, se tornando um s�bio exemplar.";
			close;
		} else {
			mes "[Claytos Verdo]";
			mes "Voc� quis entrar na nossa academia de prest�gio?";
			mes "Mas desde que voc� escolheu para viver como uma classe diferente.";
			mes "N�o acho que voc� possa se tornar um S�bio.";
			next;
			mes "[Claytos Verdo]";
			mes "Assim, n�o � de ficar lamentando por que voc� optou por um trabalho diferente de S�bio.";
			mes "� melhor voc� sair e ca�ar, nivelando-se a sua atual classe.";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_in03,169,180,3	script	Prof. de Exame Pr�tico#sageq	4_M_SAGE_C,{
	if (BaseJob == Job_Mage) {
		if (sageq < 6) {
			mes "[Hermes Tris]";
			mes "Me desculpe mas estou muito ocupado agora.";
			mes "Todos esses novos alunos est�o me deixando muito exausto.";
			next;
			mes "[Hermes Tris]";
			mes "Volte mais tarde, talvez poderemos conversar mais.";
			close;
		} else if (sageq == 6) {
			mes "[Hermes Tris]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+", voc� acabou de passar no teste escrito, n�o �?";
			mes "Agora � hora do exame pr�tico.";
			next;
			mes "[Hermes Tris]";
			mes "N�o h� nada de dif�cil ou especial sobre este teste.";
			mes "Tudo que voc� tem a fazer � matar todos os monstros dentro do prazo.";
			next;
			mes "[Hermes Tris]";
			mes "� melhor ter esta experi�ncia para si mesmo.";
			mes "Ent�o...";
			mes "Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para fazer o teste?";
			sageq = 7;
			next;
			if (select("Sim, estou","N�o, me d� um tempo.") == 1) {
				mes "[Hermes Tris]";
				mes "Bom, vamos come�ar de imediato.";
				mes "Fa�a o seu melhor e volte com seguran�a!";
				close2;
				warp("job_sage",50,154);
				end;
			} else {
				mes "[Hermes Tris]";
				mes "Sim, voc� n�o precisa de pressa....";
				mes "Estude mais, treine mais, e ent�o volte depois.";
				close;
			}
		} else if (sageq == 7) {
			mes "[Hermes Tris]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" outra vez!";
			mes "Ent�o, voc� se preparou bem neste tempo?";
			mes "Oh bem, n�o � t�o dif�cil.";
			mes "D� tudo de voc�, ok?";
			next;
			mes "[Hermes Tris]";
			mes "Voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+"?";
			next;
			if (select("Sim, estou","N�o estou.") == 1) {
				mes "[Hermes Tris]";
				mes "Bom, vamos come�ar de imediato.";
				mes "Fa�a o seu melhor e volte com seguran�a!";
				close2;
				warp("job_sage",50,154);
				end;
			} else {
				mes "[Hermes Tris]";
				mes "Sim, voc� n�o precisa de pressa....";
				mes "Estude mais, treine mais, e ent�o volte depois.";
				close;
			}
		} else if (sageq == 8) {
			mes "[Hermes Tris]";
			mes "Muito bom.";
			mes "Voc� passou no exame pr�tico, bem...";
			mes "Vou aceitar a sua admiss�o.";
			next;
			mes "[Hermes Tris]";
			mes "Agora preciso decidir o assunto que voc� vai aprender e estudar...";
			mes "Vamos ver...";
			mes "Deixe-me verificar o seu grau de prova escrita e do tempo gasto no exame pr�tico.";
			next;
			mes "[Hermes Tris]";
			mes "Hmm, hmm... Vamos ver....";
			next;
			switch (rand(3)) {
				case 1:
				sageq = 9;
				changequest(2046,2047);
				mes "[Hermes Tris]";
				mes "Agora,voc� vai estudar Yggdrasil.";
				mes "Yggdrasil � a �rvore que foi rumores de ser a fonte de vida para este mundo.";
				next;
				mes "[Hermes Tris]";
				mes "Isso � um bom tema que nos ajuda a reconhecer as mudan�as no mundo.";
				mes "Bem como o sentido da sua melhoria.";
				mes "V� pedir a ajuda do professor Saphien.";
				mes "Ele est� na sala de aula.";
				next;
				mes "[Hermes Tris]";
				mes "Desejo-lhe sorte.";
				close;
				case 2:
				sageq = 11;
				changequest(2046,2048);
				mes "[Hermes Tris]";
				mes "Agora, voc� vai estudar monstros.";
				mes "O objetivo deste estudo � o de aprender...";
				mes "E entender mais sobre as criaturas existentes em todo o continente.";
				next;
				mes "[Hermes Tris]";
				mes "Este � um bom tema que ir� ajud�-lo a levar sua vida como um S�bio experiente.";
				mes "V� pedir a ajuda do professor Lucius.";
				mes "Ele est� no Museu dos Monstros.";
				next;
				mes "[Hermes Tris]";
				mes "Desejo-lhe sorte.";
				close;
				default:
				sageq = 13;
				changequest(2046,2049);
				mes "[Hermes Tris]";
				mes "Agora, voc� vai estudar habilidades m�gicas que t�m determinadas propriedades.";
				mes "O objetivo deste estudo � compreender melhor habilidades b�sicas de magia.";
				mes "As quais usamos na vida cotidiana.";
				next;
				mes "[Hermes Tris]";
				mes "Isso � um bom tema que ajuda voc� a compreender profundamente a verdade da magia.";
				mes "V� pedir ajuda ao professor Aebecee...";
				mes "Ele est� no Laborat�rio de Somatologia.";
				next;
				mes "[Hermes Tris]";
				mes "Desejo-lhe sorte.";
				close;
			} 
		} else if (sageq == 9) {
			mes "[Hermes Tris]";
			mes "Hein? Voc� n�o entendeu o que eu disse?";
			mes "Eu disse-lhe para estudar Yggdrasil.";
			next;
			mes "[Hermes Tris]";
			mes "V� pedir a ajuda do professor Saphien.";
			mes "Ele est� na sala de aula.";
			close;
		} else if (sageq == 11) {
			mes "[Hermes Tris]";
			mes "Hein? Voc� n�o entendeu o que eu disse?";
			mes "Eu disse-lhe para estudar monstros.";
			next;
			mes "[Hermes Tris]";
			mes "V� pedir a ajuda do professor Lucius.";
			mes "Ele est� no Museu dos Monstros.";
			close;
		} else if (sageq == 13) {
			mes "[Hermes Tris]";
			mes "Hein? Voc� n�o entendeu o que eu disse?";
			mes "Eu disse-lhe para estudar magias que possuem determinadas propriedades.";
			next;
			mes "[Hermes Tris]";
			mes "V� pedir ajuda ao professor Aebecee.";
			mes "Ele est� no Laborat�rio de Somatologia.";
			close;
		} else {
			mes "[Hermes Tris]";
			mes "Ah desculpe, eu estou muito ocupado no momento...";
			mes "Se voc� tiver qualquer d�vida, v� visitar o professor que lhe passou o teste.";
			close;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "[Hermes Tris]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Eu acho que voc� j� passou por muitos momentos dif�ceis...";
			mes "Eu posso dizer pela sua apar�ncia..";
			next;
			mes "[Hermes Tris]";
			mes "Eu sei como � dif�cil explorar todas as �reas perigosas.";
			mes "Mas vai ajudar voc� a ganhar mais conhecimento.";
			next;
			mes "[Hermes Tris]";
			mes "No entanto, � uma id�ia muito perigosa ir profundamente dentro de uma masmorra sozinho.";
			mes "� melhor voc� procurar por companheiros de confian�a.";
			close;
		} else {
			mes "[Hermes Tris]";
			mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" � Academia de Magia Schweicherbil.";
			next;
			mes "[Hermes Tris]";
			mes "N�s S�bios somos mais estudiosos do que Magos.";
			mes "Somos muito �teis e poderosos como membros de um grupo.";
			next;
			mes "[Hermes Tris]";
			mes "Tente encontrar um s�bio para explorar lugares perigosos.";
			mes "Nossa sabedoria ser� muito �til para seu grupo...";
			close;
		}
	}
}

// ------------------------------------------------------------------
job_sage,50,165,4	script	Ajudante de Teste#sageq	8_F_GIRL,{
	mes "[Ajudante de Teste]";
	mes "Bem vindo ao sal�o do exame pr�tico para S�bio.";
	mes "Se desejas fazer o teste agora, entre na sala de espera.";
	next;
	mes "[Ajudante de Teste]";
	mes "Caso haja algu�m fazendo o teste, por favor aguarde at� ele acabar.";
	mes "O progresso do teste � anunciado no mapa.";
	mes "Um an�ncio ser� feito quando a pr�xima pessoa estiver pronta para sair da sala de espera.";
	next;
	mes "[Ajudante de Teste]";
	mes "O teste leve entre 5 e 10 minutos por pessoa.";
	mes "Se quiser deixar a arena, por favor deslogue do jogo.";
	close;

	OnInit:
	waitingroom("Sala de Espera",20,strnpcinfo(NPC_NAME)+"::OnStartArena",1);
	enablewaitingroomevent;
	end;

	OnStartArena:
	warpwaitingpc(strnpcinfo(NPC_MAP),116,97);
	donpcevent("Sague_Test_Battle#sageq::OnSummon1");
	disablewaitingroomevent;
	end;

	OnEnable:
	enablewaitingroomevent;
	end;
}

// ------------------------------------------------------------------
job_sage,1,1,0	script	Sague_Test_Battle#sageq	HIDDEN_NPC,{
	OnInit:
	stopnpctimer;
	end;

	OnSummon1:
	.SgMobs = 16;
	monster(strnpcinfo(NPC_MAP),111,102,"Nota F",CHONCHON_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),120,102,"Nota F",CHONCHON_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),111,93,"Nota F",CHONCHON_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),120,93,"Nota F",CHONCHON_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),107,98,"Nota F",CHONCHON_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),124,98,"Nota F",CHONCHON_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),115,106,"Nota F",CHONCHON_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),115,90,"Nota F",CHONCHON_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),103,110,"Nota D",FABRE_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),128,110,"Nota D",FABRE_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),103,85,"Nota D",FABRE_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),128,85,"Nota D",FABRE_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),107,106,"Nota D",FABRE_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),124,106,"Nota D",FABRE_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),107,89,"Nota D",FABRE_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	monster(strnpcinfo(NPC_MAP),124,89,"Nota D",FABRE_,1,strnpcinfo(NPC_NAME)+"::OnMobDead1");
	initnpctimer;
	end;

	OnSummon2:
	.SgMobs = 24;
	monster(strnpcinfo(NPC_MAP),111,102,"Valor Num�rico",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,102,"F�sica",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,102,"Hist�ria",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Geografia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Astronomia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Meteorologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Arquitetura",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Controle",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Instrumentologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Estat�sticas;",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"M�todos Gr�ficos",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"L�ngua",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Sitologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Diet�tica",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Arquitetura Paisagista",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,93,"Antropologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,93,"Biologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,93,"�tica",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),107,98,"Economia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),107,98,"Pol�tica",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),107,98,"Fotografia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),124,98,"Dendrologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),124,98,"Higiene",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),124,98,"Sociologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	initnpctimer;
	end;

	OnSummon3:
	.MyMobs = 1;
	monster(strnpcinfo(NPC_MAP),116,97,"Est�gio Acad�mico",WHISPER,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
	monster(strnpcinfo(NPC_MAP),107,106,"Ausente 3 vezes",WHISPER_,1);
	monster(strnpcinfo(NPC_MAP),124,106,"Atrasado 5 vezes",WHISPER_,1);
	monster(strnpcinfo(NPC_MAP),107,89,"Trapaceou 2 vezes",WHISPER_,1);
	monster(strnpcinfo(NPC_MAP),124,89,"Trapaceou 4 vezes",WHISPER_,1);
	initnpctimer;
	end;

	OnMobDead1:
	--.SgMobs;
	if (.SgMobs < 1) {
		stopnpctimer;
		mapannounce(strnpcinfo(NPC_MAP),strcharinfo(CHAR_NAME)+", derrotou todos os monstros do primeiro est�gio.",bc_map);
		donpcevent(strnpcinfo(NPC_NAME)+"::OnSummon2");
	}
	end;

	OnMobDead2:
	--.SgMobs;
	if (.SgMobs < 1) {
		stopnpctimer;
		mapannounce(strnpcinfo(NPC_MAP),strcharinfo(CHAR_NAME)+", derrotou todos os monstros do segundo est�gio.",bc_map);
		donpcevent(strnpcinfo(NPC_NAME)+"::OnSummon3");
	}
	end;

	OnMobDead3:
	--.MyMobs;
	if (.MyMobs < 1) {
		stopnpctimer;
		killmonsterall("job_sage");
		mapannounce(strnpcinfo(NPC_MAP),"Parab�ns, "+strcharinfo(CHAR_NAME)+". Voc� passou no teste.",bc_map);
		sageq = 8;
		donpcevent("Sague_Test_Warp#sageq::OnEnable");
	}
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"O exame pr�tico come�ou.",bc_map);
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"1� teste - tempo limite 3 minutos.",bc_map);
	end;

	OnTimer3000:
	mapannounce(strnpcinfo(NPC_MAP),"Por favor, derrote todos os monstros no tempo limite.",bc_map);
	end;

	OnTimer33000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltam 2 minutos e 30 segundos.",bc_map);
	end;

	OnTimer63000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltam 2 minutos.",bc_map);
	end;

	OnTimer93000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltam 1 minuto e 30 segundos.",bc_map);
	end;

	OnTimer123000:
	mapannounce(strnpcinfo(NPC_MAP),"Falta 1 minuto.",bc_map);
	end;

	OnTimer153000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltam 30 segundos.",bc_map);
	end;

	OnTimer173000:
	mapannounce(strnpcinfo(NPC_MAP),"Faltam 10 segundos.",bc_map);
	end;

	OnTimer183000:
	mapannounce(strnpcinfo(NPC_MAP),"O tempo acabou.",bc_map);
	donpcevent("SgTest#1sageq::OnReset");
	end;

	OnTimer184000:
	areawarp(strnpcinfo(NPC_MAP),100,82, 131,113,"yuno",324,258);
	end;

	OnTimer185000:
	mapannounce(strnpcinfo(NPC_MAP),"Pr�ximo candidato, entre.",bc_map);
	end;

	OnTimer186000:
	donpcevent("Ajudante de Teste#sageq::OnEnable");
	stopnpctimer;
	end;

	OnReset:
	killmonsterall("job_sage");
	end;
}

// ------------------------------------------------------------------
job_sage,2,1,0	script	Sague_Test_Warp#sageq	HIDDEN_NPC,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"Por favor volte e termine o resto da quest de sua mudan�a de classe.",bc_map);
	end;

	OnTimer4000:
	mapannounce(strnpcinfo(NPC_MAP),"Esse � o fim do exame pr�tico. Pr�ximo candidato, por favor esteja pronto.",bc_map);
	end;

	OnTimer5000:
	areawarp(strnpcinfo(NPC_MAP),100,82, 131,113,"yuno_in03",163,180);
	end;

	OnTimer7000:
	mapannounce(strnpcinfo(NPC_MAP),"Pr�ximo candidato, entre por favor.",bc_map);
	end;

	OnTimer9000:
	donpcevent("Ajudante de Teste#sageq::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
yuno_in03,62,176,2	script	Prof. de Hist�ria#sageq	4_M_MANAGER,{
	if (BaseJob == Job_Mage) {
		if (sageq == 9) {
			if (!sageq2) {
				mes "[Professor de Hist�ria]";
				mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+","+strcharinfo(CHAR_NAME)+".";
				mes "Estou feliz em conhec�-l"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Meu nome � Saphien Layless, eu fui designado para ensinar sobre a Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Antes de iniciar a aula, vou precisar de algum item que seja relacionado � �rvore de Yggdrasil.";
				mes "� para melhor compreens�o da Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Sementes ou frutos da �rvore seria bom.";
				mes "Eu sei que � dif�cil de encontrar, mas tente.";
				sageq2 = 1;
				changequest(2047,2050);
				close;
			} else {
				if (countitem(Yggdrasilberry)) {
					mes "[Saphien Layless]";
					mes "Oh, voc� trouxe-os com voc�?";
					mes "Excelente!";
					mes "Voc� trouxe o Fruto de Yggdrasil!";
				} else if (countitem(Seed_Of_Yggdrasil)) {
					mes "[Saphien Layless]";
					mes "Hmm, voc� se preparou para a aula?";
					mes "Vamos ver ...";
					mes "Oh! Ent�o voc� me trouxe a Semente de Yggdrasil?";
				} else if (countitem(Leaf_Of_Yggdrasil) > 0) {
					mes "[Saphien Layless]";
					mes "Hmm, voc� se preparou para a aula?";
					mes "Vamos ver...";
					mes "A Folha de Yggdrasil...";
				} else {
					mes "[Saphien Layless]";
					mes "Eu disse-lhe para me trazer algum item relacionado a Yggdrasil.";
					close;
				}
				next;
				mes "[Saphien Layless]";
				mes "Ok, agora estou come�ando a aula.";
				mes "Ou�a com aten��o, eu n�o vou aceitar voc� cochilando no meio da aula.";
				next;
				mes "[Saphien Layless]";
				mes "A ra�z deste mundo, Yggdrasil, � uma �rvore gigantesca.";
				mes "Sai da ra�z de todo o continente de Rune-Midgard e suas folhas alcan�am o c�u.";
				next;
				mes "[Saphien Layless]";
				mes "Fora deste continente, h� no oceano onde uma cobra gigante chamada Yormungandr e vive enrolada.";
				mes "O mundo como n�s o conhecemos consiste em 3 lugares: Asgard, Midgard e Utgard.";
				next;
				mes "[Saphien Layless]";
				mes "Utgard � onde todos os tit�s vivem.";
				next;
				mes "[Saphien Layless]";
				mes "Midgard � onde todos os humanos vivem.";
				next;
				mes "[Saphien Layless]";
				mes "E Asgard � onde os deuses vivem...";
				mes "Uma �rvore de cinzas, tendo raiz no meio do continente de Rune-Midgard, que � Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Este continente nasceu do cora��o de Ymir, e Yggdrasil det�m os continentes juntos.";
				mes "Segurando-as com as suas 3 ra�zes.";
				mes "Estas ra�zes se alongam em 3 lugares diferentes.";
				next;
				mes "[Saphien Layless]";
				mes "A primeira ra�z atinge Asgard onde os deuses vivem e onde n�s...";
				mes "Meros seres humanos, ainda n�o exploramos ou experimentamos.";
				next;
				mes "[Saphien Layless]";
				mes "A segunda raiz atinge Jotunnheim onde todos os gigantes vivem.";
				mes "J� nos disseram que este nome, vem muitas vezes atrav�s de mitos e lendas.";
				next;
				mes "[Saphien Layless]";
				mes "O terceira chega em Niflheim.";
				mes "Esse lugar � rumores de ser coberta com uma neblina espessa e negra.";
				next;
				mes "[Saphien Layless]";
				mes "Itens, como Semente de Yggdrasil, Fruto de Yggdrasil e Folha de Yggdrasil.";
				mes "S�o partes da �rvore de Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Fruto de Yggdrasil tem um aroma fascinante.";
				mes "Que � espalhado para restaurar HP e SP cheio de uma vez.";
				next;
				mes "[Saphien Layless]";
				mes "As Sementes de Yggdrasil que tem o perfume de uma flor que floresce.";
				mes "E o sabor da castanha � de flores das pr�pias raizes que fazem este gosto t�o fascinante.";
				next;
				mes "[Saphien Layless]";
				mes "A Folha de Yggdrasil, que � preenchida com a for�a vital ressuscita os mortos.";
				mes "Trazendo-os de volta a este mundo.";
				next;
				mes "[Saphien Layless]";
				mes "Finalmente...";
				mes "Se por algum acaso voc� descobrir uma maneira de chegar em Asgard.";
				mes "No futuro, espero que voc� ache a �rvore de Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Mesmo que a hist�ria da �rvore Yggdrasil s� existe em mitos e lendas.";
				mes "N�s S�bios somos obrigados a descobrir a verdade da �rvore Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Isso � o fim da aula de hoje.";
				mes "Anote os artigos que voc� aprendeu hoje e tente lembrar-se tanto quanto poss�vel.";
				next;
				mes "[Saphien Layless]";
				mes "Na pr�xima aula, voc� vai escrever uma tese sobre Yggdrasil...";
				mes "Por favor, traga os seguintes itens para se preparar para a aula.";
				next;
				mes "[Saphien Layless]";
				mes "^3355ff1 Plumas de Ave^000000 que ser� usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que ser�o usados como papel,";
				mes "^3355ff1 Tronco^000000 que ser� usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que ser� utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que ser�o utilizados para a realiza��o da tinta de polvo.";
				next;
				sageq2 = 0;
				sageq = 10;
				changequest(2050,2051);
				mes "[Saphien Layless]";
				mes "Vou ajud�-lo a escrever a sua tese, quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" com todos esses itens.";
				mes "Estou ansioso para a pr�xima aula com voc�.";
				close;
			}
		} else if (sageq == 10) {
			if (!countitem(Feather_Of_Birds) && !countitem(Animals_Skin) && !countitem(Wooden_Block) && !countitem(Chinese_Ink) && !countitem(Empty_Bottle)) {
				mes "[Saphien Layless]";
				mes "N�o tenho a certeza de que voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+" para escrever uma tese.";
				mes "Eu j� informei a voc� do que voc� precisa.";
				next;
				mes "[Saphien Layless]";
				mes "^3355ff1 Plumas de Ave^000000 que ser� usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que ser�o usados como papel,";
				mes "^3355ff1 Tronco^000000 que ser� usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que ser� utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que ser�o utilizados para a realiza��o da tinta de polvo.";
				next;
				mes "[Saphien Layless]";
				mes "Eu vou ajud�-l"+(Sex == SEX_MALE ? "o":"a")+" a escrever a sua tese.";
				mes "Mas, por favor, traga todos os itens com voc�.";
				close;
			} else {
				delitem(Feather_Of_Birds,1);
				delitem(Animals_Skin,1);
				delitem(Wooden_Block,1);
				delitem(Chinese_Ink,1);
				delitem(Empty_Bottle,1);
				mes "[Saphien Layless]";
				mes "Agora, voc� pode escrever sua tese.";
				mes "Eu vou ajudar com a sua escrita.";
				next;
				mes "..........";
				next;
				mes "....................";
				next;
				mes ".................................";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes "Existe um oceano ao redor do continente.";
				mes "O oceano � envolto por";
				switch (select("Um galho gigante","Uma cobra gigante","Uma tartaruga gigante","Um drag�o gigante")) {
					case 1:
					.@sgpoint += 1;
					mes "Um galho gigante.";
					break;
					case 2:
					mes "Uma cobra gigante Yormungandr.";
					break;
					case 3:
					.@sgpoint += 1;
					mes "Uma tartaruga gigante.";
					break;
					case 4:
					.@sgpoint += 1;
					mes "Um drag�o gigante.";
					break;
				}
				mes "O continente � composto por tr�s locais, tais como,";
				switch (select("Mt. Mjolnir","Uranos","Utgard","Lutie")) {
					case 1:
					.@sgpoint += 1;
					mes "Mt. Mjolnir,";
					break;
					case 2:
					.@sgpoint += 1;
					mes "Uranos,";
					break;
					case 3:
					mes "Utgard, onde os tit�s vivem,";
					break;
					case 4:
					.@sgpoint += 1;
					mes "Lutie,";
					break;
				}
				switch (select("Midgard onde vivem humanos","Rune-Midgarts onde vivem humanos","Tritonia, onde vivem sereias","Morroc, a cidade deserta")) {
					case 1:
					mes "Midgard, onde vivem humanos,";
					break;
					case 2:
					.@sgpoint += 1;
					mes "Rune-Midgarts onde vivem humanos,";
					break;
					case 3:
					.@sgpoint += 1;
					mes "Tritonia, onde vivem sereias,";
					break;
					case 4:
					.@sgpoint += 1;
					mes "Morroc, a cidade deserta,";
					break;
				}
				switch (select("Abguard, onde vivem deuses","Asgard, onde vivem deuses","Schwarzwald, onde cidad�os vivem","Prontera, a capital")) {
					case 1:
					.@sgpoint += 1;
					mes "Abguard, onde vivem os deuses.";
					break;
					case 2:
					mes "Asgard, onde vivem os deuses.";
					break;
					case 3:
					.@sgpoint += 1;
					mes "Schwarzwald, onde os cidad�os vivem.";
					break;
					case 4:
					.@sgpoint += 1;
					mes "Prontera, a capital de Rune-Midgard.";
					break;
				}
				next;
				if (.@sgpoint) {
					mes "[Saphien Layless]";
					mes "Eu n�o acho que voc� pode enviar seus trabalhos para o reitor.";
					mes "V� estudar mais e tentar novamente!";
					close;
				}
				next;
				if (.@sgpoint) {
					mes "[Saphien Layless]";
					mes "Eu n�o acho que voc� pode enviar seus trabalhos para o reitor.";
					mes "V� estudar mais e tentar novamente!";
					close;
				} else {
					mes "..........";
					next;
					mes "....................";
					next;
					mes ".................................";
					next;
					mes "[Saphien Layless]";
					mes "Oh, voc� j� terminou?";
					mes "Bem feito.";
					sageq = 15;
					changequest(2051,2052);
					getitem(Book,1);
					next;
					mes "[Saphien Layless]";
					mes "Eu suponho que voc� esteja pront"+(Sex == SEX_MALE ? "o":"a")+" para apresentar seu trabalho para o reitor.";
					mes "Se voc� vai passar o teste ou n�o � sua decis�o.";
					next;
					mes "Agora leve essa tese que acabou de escrever para nosso reitor.";
					mes "Ele continuar� com os testes.";
					close;
				}
			}
		} else if (sageq == 15) {
			mes "[Saphien Layless]";
			mes "Voc� pode ter apenas uma chance de escrever sua tese antes de se tornar um S�bio.";
			mes "Ent�o por favor, siga em frente.";
			close;
		} else {
			mes "[Saphien Layless]";
			mes "N�o tenho certeza se voc� tem neg�cios comigo, mas por favor, volte mais tarde.";
			mes "Tenho algumas quest�es para pensar..";
			close;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "[Saphien Layless]";
			mes "O que voc� quer?";
			mes "Voc� n�o � um dos meus estudantes?";
			mes "Oh, n�o importa de qualquer maneira.";
			mes "Voc� n�o seria um s�bio, sem graduar-se nesta academia...";
			next;
			mes "[Saphien Layless]";
			mes "Em qualquer caso, � necess�rio estudar o passado.";
			mes "Para melhor compreender o presente e prever o futuro...";
			mes "Esta frase cont�m toda a verdade do mundo.";
			next;
			mes "[Saphien Layless]";
			mes "Eu acho que voc� est� trilhando o caminho certo...";
			mes "Um destes dias voc� vai olhar para tr�s para este momento e perceber que mudou sua vida.";
			close;
		} else {
			mes "[Saphien Layless]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+", eu sou respons�vel por estudos hist�ricos aqui na academia.";
			next;
			mes "[Saphien Layless]";
			mes "O mundo como n�s sabemos que � uma sequ�ncia de acontecimentos.";
			mes "Que � descrito nos registros das idades.";
			mes "S�o acontecimentos hist�ricos que moldaram o mundo como ele � hoje.";
			mes "Portanto, conhecer o passado significa que voc� vai entender melhor o presente e o futuro";
			next;
			mes "[Saphien Layless]";
			mes "Refletir sobre seu passado.";
			mes "Voc� vai ver o seu caminho no futuro...";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_in03,32,102,1	script	Prof. de Biologia#sageq	4_M_SAGE_C,{
	if (BaseJob == Job_Mage) {
		if (!sageq2) {
			mes "[Professor]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" � minha classe.";
			mes "Voc� ganhou bons resultados no exame pr�tico?";
			mes "Meu nome � Lucius Celsus, o perito da Biologia.";
			next;
			mes "[Lucius Celsus]";
			mes "Huh ...";
			mes "Qu�o rude de voc�!";
			mes "Voc� est� previsto para se apresentar para mim t�o logo eu vos sa�do!";
			mes "Qual � o seu nome, jovem?";
			next;
			select(strcharinfo(CHAR_NAME));
			mes "[Lucius Celsus]";
			mes "Ent�o, voc� est� ciente do assunto que voc� est� estudando?";
			mes "Como voc� sabe, o seu tema de estudo � de monstros.";
			mes "Quantas vezes voc� lutou com monstros?";
			next;
			if (select("Nunca contei","Algumas vezes, eu acho..."));
			mes "[Lucius Celsus]";
			mes "Sim, � isso que eu adivinhei sobre voc�.";
			mes "Voc� � apenas "+(Sex == SEX_MALE ? "um garoto":"uma garota")+" inteligente.";
			mes "No entanto, tenho certeza que voc� vai encontrar a maioria dos monstros referidos na minha palestra.";
			next;
			mes "[Lucius Celsus]";
			mes "Primeiramente, traga para mim os seguintes itens:";
			switch (rand(3)) {
				case 1:
				setarray(.@items[0],962,1052,1023);
				sageq2 = 1;
				changequest(2048,2053);
				break;
				case 2:
				setarray(.@items[0],960,966,950);
				sageq2 = 2;
				changequest(2048,2054);
				break;
				case 3:
				setarray(.@items[0],1050,960,963);
				sageq2 = 3;
				changequest(2048,2055);
				break;
			}
			mes "5 ^3355ff"+getitemname(.@items[0])+"^000000.";
			mes "5 ^3355ff"+getitemname(.@items[1])+"^000000.";
			mes "5 ^3355ff"+getitemname(.@items[2])+"^000000.";
			next;
			mes "[Lucius Celsus]";
			mes "Quando tiver todos os itens, volte ent�o podemos come�ar a sua aula.";
			close;
		} else if (sageq2 >= 1 && sageq2 <=3) {
			switch (sageq2) {
				case 1: setarray(.@items[0],962, 1052,1023); break;
				case 2: setarray(.@items[0],960, 966, 950);  break;
				case 3: setarray(.@items[0],1050,960, 963);  break;
			}
			if (countitem(.@items[0]) < 5 && countitem(.@items[1]) < 5 && countitem(.@items[2]) < 5) {
				mes "[Lucius Celsus]";
				mes "O qu�, voc� j� esqueceu?";
				mes "Ou�a com aten��o desta vez.";
				next;
				mes "[Lucius Celsus]";
				mes "Traga para mim os seguintes itens:";
				mes "5 ^3355ff"+getitemname(.@items[0])+"^000000.";
				mes "5 ^3355ff"+getitemname(.@items[1])+"^000000.";
				mes "5 ^3355ff"+getitemname(.@items[2])+"^000000.";
				close;
			} else {
				mes "[Lucius Celsus]";
				mes "Voc� mostrou um grande esfor�o para reunir todas esses itens.";
				mes "Bem, eu n�o tenho certeza se voc� reuniu por si pr�prio ou comprou nas lojas...";
				next;
				mes "[Lucius Celsus]";
				mes "Come�aremos ent�o seu teste.";
				next;
				mes "Os monstros que dropam esses itens t�m algo em comum.";
				mes "Voc� pode me dizer o que essa semelhan�a �?";
				next;
				switch (select("Propriedade de �gua","S�o peixes","S�o agressivos","S�o monstros.")) {
					case 1:
					mes "[Lucius Celsus]";
					mes "Sim, eles possuem a propriedade de �gua e ao mesmo tempo, eles s�o peixes.";
					mes "A maioria dos monstros aquaticos s�o fortes.";
					mes "Por isso eles s�o atribu�dos com a propriedade de �gua.";
					break;
					case 2:
					mes "[Lucius Celsus]";
					mes "Sim, eles possuem a propriedade de �gua e ao mesmo tempo, eles s�o peixes.";
					mes "A maioria dos monstros aquaticos s�o fortes.";
					mes "Por isso eles s�o atribu�dos com a propriedade de �gua.";
					break;
					case 3:
					mes "[Lucius Celsus]";
					mes "...Eu n�o sabia que Fens eram agressivos, � verdade.";
					mes "Ou ser� que Marina e equipe Pl�nkton v�o perturbar at� come�ar uma luta com voc�?";
					next;
					mes "[Lucius Celsus]";
					mes "Todos os monstros que voc� obteve estes itens n�o s�o-agressivos...";
					mes "Eles s�o todos peixes e possuem propriedade de �gua.";
					break;
					case 4:
					mes "[Lucius Celsus]";
					mes "Que...?!";
					mes "Voc� est� aqui para estudar sobre monstros espec�ficos!";
					mes "*Suspiro*";
					mes "Eles s�o todos os peixes e possui propriedade de �gua.";
					break;
				}
				next;
				mes "[Lucius Celsus]";
				mes "Nem todos os monstros da classe de peixes possuem a propriedade de �gua.";
				mes "Mas a maioria deles tem.";
				mes "Ent�o, que tipo de m�gica seria melhor atacar em monstros com classe de peixes?";
				next;
				switch (select("Rel�mpago","Lan�as de Fogo","Tempestade de Raios","Rajada Congelante")) {
					case 1:
					mes "[Lucius Celsus]";
					mes "Hmm, Rel�mpago, que possui a propriedade vento.";
					mes "Funciona melhor em monstros de propriedade da �gua.";
					mes "Embora voc� possa querer ser cuidadoso com os monstros que reconhecem a magia.";
					break;
					case 2:
					mes "[Lucius Celsus]";
					mes "O qu�?!";
					mes "Lan�as de Fogo!";
					mes "O fogo n�o pode bater a �gua!";
					mes "A maioria dos peixes s�o atribu�dos com a propriedade de �gua.";
					mes "Portanto, eles s�o fracos a propriedade vento.";
					break;
					case 3:
					mes "[Lucius Celsus]";
					mes "Sim, magia Tempestade de Raios � bom...";
					mes "� um feiti�o propriedade da vento.";
					mes "No entanto, voc� ter� problemas se voc� usar a magia em um local mal escolhido.";
					break;
					case 4:
					mes "[Lucius Celsus]";
					mes "N�o consigo entender...";
					mes "Esta quest�o pede-lhe para escolher uma propiedade forte contra a de �gua!";
					mes "Logicamente, qualquer magia que possui a propriedade de �gua.";
					mes "N�o pode ser eficiente contra os monstros atributo �gua!";
					break;
				}
				next;
				mes "[Lucius Celsus]";
				mes "Agora para seu aprendizado, estudaremos monstros do tipo inseto.";
				next;
				switch (rand(4)) {
					case 1:
					setarray(.@items[0],1025,935,928);
					sageq2 = 4;
					if (questprogress(2053)) { changequest(2053,2056); }
					else if (questprogress(2054)) { changequest(2054,2056); }
					else if (questprogress(2055)) { changequest(2055,2056); }
					break;
					case 2:
					setarray(.@items[0],947,946,1057);
					sageq2 = 5;
					if (questprogress(2053)) { changequest(2053,2057); }
					else if (questprogress(2054)) { changequest(2054,2057); }
					else if (questprogress(2055)) { changequest(2055,2057); }
					break;
					case 3:
					setarray(.@items[0],1031,955,1013);
					sageq2 = 6;
					if (questprogress(2053)) { changequest(2053,2058); }
					else if (questprogress(2054)) { changequest(2054,2058); }
					else if (questprogress(2055)) { changequest(2055,2058); }
					break;
					default:
					setarray(.@items[0],1025,1031,943);
					sageq2 = 7;
					if (questprogress(2053)) { changequest(2053,2059); }
					else if (questprogress(2054)) { changequest(2054,2059); }
					else if (questprogress(2055)) { changequest(2055,2059); }
					break;
				}
				mes "[Lucius Celsus]";
				mes "Me traga 5 exemlares de:";
				mes "5 ^3355ff"+.@items[0]+"^000000.";
				mes "5 ^3355ff"+.@items[1]+"^000000.";
				mes "5 ^3355ff"+.@items[2]+"^000000.";
				next;
				mes "[Lucius Celsus]";
				mes "Quando tiver os itens, retorne.";
				mes "Ent�o continuaremos a aula sobre monstros insetos.";
				close;
			}
		} else if (sageq2 >= 4  && sageq2 <= 7) {
			switch (sageq2) {
				case 4: setarray(.@items[0],1025,935,928); break;
				case 5: setarray(.@items[0],947,946,1057); break;
				case 6: setarray(.@items[0],1031,955,1013); break;
				case 7: setarray(.@items[0],1025,1031,943); break;
			}
			if (countitem(.@items[0]) < 5 && countitem(.@items[1]) < 5 && countitem(.@items[2]) < 5) {
				mes "[Lucius Celsus]";
				mes "O qu�, voc� j� se esqueceu que eu te disse?";
				mes "Da pr�xima vez preste mais aten��o!!!";
				next;
				mes "[Lucius Celsus]";
				mes "5 ^3355ff"+getitemname(.@items[0])+"^000000,";
				mes "5 ^3355ff"+getitemname(.@items[1])+"^000000,";
				mes "5 ^3355ff"+getitemname(.@items[2])+"^000000,";
				close;
			} else {
				mes "[Lucius Celsus]";
				mes "Ent�o, voc� viu insetos durante a coleta esses itens?";
				mes "Ah bem, eu acredito que voc� fez um bom trabalho com a tarefa.";
				next;
				mes "[Lucius Celsus]";
				mes "Insetos n�o compartilham a mesma propriedade na maioria das vezes.";
				mes "Voc� deve pensar duas vezes antes de lan�ar um feiti�o em um inseto.";
				next;
				mes "[Lucius Celsus]";
				mes "� not�vel que os insetos podem detectar objetos escondidos.";
				mes "Portanto, toda a habilidade esconderijo.";
				mes "Tais como a habilidade Esconderijo ou Furtividade n�o funciona em insetos.";
				next;
				mes "[Lucius Celsus]";
				mes "Alguns insetos formam um grupo e vivem juntos.";
				mes "Eles s�o controlados pelo chefe do grupo...";
				next;
				mes "[Lucius Celsus]";
				mes "Por exemplo, a rainha Maya...";
				mes "Abelha-Ranha, a rainha dos Zang�es.";
				mes "Ou Besouro-Ladr�o Dourado, o rei dos Besouros-Ladr�o ...";
				next;
				mes "[Lucius Celsus]";
				mes "Voc� n�o pode vencer esses monstros chefes sozinho.";
				mes "� melhor voc� formar um grupo se voc� quer lutar com eles.";
				next;
				mes "[Lucius Celsus]";
				mes "Isso � o fim da minha aula...";
				mes "� hora de voc� escrever uma tese.";
				mes "Traga-me os seguintes itens para a escrita da tese.";
				next;
				mes "[Lucius Celsus]";
				mes "^3355ff1 Plumas de Ave^000000 que ser� usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que ser�o usados como papel,";
				mes "^3355ff1 Tronco^000000 que ser� usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que ser� utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que ser�o utilizados para a realiza��o da tinta de polvo.";
				next;
				sageq2 = 0;
				sageq = 12;
				if (questprogress(2056)) { changequest(2056,2051); }
				else if (questprogress(2057)) { changequest(2057,2051); }
				else if (questprogress(2058)) { changequest(2058,2051); }
				else if (questprogress(2059)) { changequest(2059,2051); }
				next;
				mes "[Lucius Celsus]";
				mes "Vou ajud�-lo a escrever a tese quando voc� trazer todos esses itens.";
				mes "Voc� est� quase l�.";
				close;
			}
		} else if (sageq == 12) {
			if (!countitem(Feather_Of_Birds) && !countitem(Animals_Skin) && !countitem(Wooden_Block) && !countitem(Chinese_Ink) && !countitem(Empty_Bottle)) {
				mes "[Lucius Celsus]";
				mes "O qu�, voc� tem certeza que voc� est� pront"+(Sex == SEX_MALE ? "o":"a")+"?";
				mes "Bem... Ou�a com aten��o desta vez.";
				next;
				mes "[Lucius Celsus]";
				mes "Traga os itens:";
				mes "^3355ff1 Plumas de Ave^000000 que ser� usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que ser�o usados como papel,";
				mes "^3355ff1 Tronco^000000 que ser� usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que ser� utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que ser�o utilizados para a realiza��o da tinta de polvo.";
				next;
				mes "[Lucius Celsus]";
				mes "Voc� tem feito muito bem, eu acho que voc� pode fazer isso sem nenhum problema.";
				mes "V� busc�-los.";
				mes "Divirta-se.";
				close;
			} else {
				delitem(Feather_Of_Birds,1);
				delitem(Animals_Skin,1);
				delitem(Wooden_Block,1);
				delitem(Chinese_Ink,1);
				delitem(Empty_Bottle,1);
				mes "Ainda bem que trouxe todos os itens.";
				mes "Bem, eu n�o espero que voc� escreva uma tese absurdamente boa apesar de tudo...";
				next;
				mes "[Lucius Celsus]";
				mes "Bem, se voc� quer mesmo escrever sozinh"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Posso deixar, mas...";
				mes "Vou dar-lhe um trabalho de g�nio incr�vel.";
				mes "Basta fazer uma c�pia do mesmo em seu nome.";
				next;
				mes "[Lucius Celsus]";
				mes "Voc� tem um problema com isso?";
				mes "Resistente, que � o meu estilo.";
				mes "Basta fazer o que eu digo.";
				next;
				mes "..........";
				next;
				mes "....................";
				next;
				mes ".................................";
				next;
				mes "Monstros variam de acordo com a apar�ncia f�sica.";
				mes "E possuem v�rias propriedades elementares.";
				mes "Voc� deve estar ciente das propriedades de cada monstro.";
				mes "E estar ciente de que certas magias funcionam de forma diferente em diferentes monstros.";
				mes "Voc� deve ter um cuidado especial dos bens sagrados e monstros de propriedade de sombra.";
				mes "Esses monstros s�o mais perigosos.";
				next;
				mes "..........";
				next;
				mes "....................";
				next;
				mes ".................................";
				next;
				sageq = 15;
				changequest(2051,2052);
				mes "[Lucius Celsus]";
				mes "Voc� trouxe tudo?";
				mes "Ok, ent�o acabou.";
				mes "Voc� n�o ser� capaz de escrever uma outra tese de novo, lide com isso com cuidado.";
				getitem(Book,1);
				next;
				mes "[Lucius Celsus]";
				mes "Mostre esta obra-prima para o reitor.";
				mes "Ent�o, ele lhe dar� sua p�s-gradua��o da academia. At� mais.";
				close;
			}
		} else if (sageq == 15) {
			mes "[Lucius Celsus]";
			mes "O que voc� est� fazendo aqui, vai mostrar a sua tese para o reitor!";
			mes "N�o gaste mais tempo aqui.";
			close;
		} else {
			mes "[Professor]";
			mes "Ahhh.!";
			mes "Meu c�rebro vai explodir em breve!";
			mes "Por que devo ter para preparar todas essas coisas?!";
			mes "Quem � voc�?!";
			mes "N�o me perturbe, estou ocupado!";
			next;
			mes "[Professor]";
			mes "Se voc� quiser apenas ver os monstros aqui, tudo bem...";
			mes "S� n�o me pergunte nada.";
			close;
		}
	} else {
		mes "[Lucius Celsus]";
		mes "Hmm? O que o traz para mim?";
		mes "Voc� est� interessado em ver monstros?";
		next;
		mes "[Lucius Celsus]";
		mes "Tome cuidado e n�o fa�a barulho.";
		mes "E mantenha suas m�os longe, alguns desses caras s�o perigosos para tocar.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in03,244,31,3	script	Prof. de F�sica#sa	2_M_PHARMACIST,{
	if (BaseJob == Job_Mage) {
		if (sageq == 13) {
			if (!sageq2) {
				mes "[Professor]";
				mes "Oi? Prazer em te conhecer, tee hee.";
				mes "Veio me ver? Oh, voc� � um estudante!";
				next;
				mes "[Professor]";
				mes "Sou um Professor encarregado de voc�, Aebecee George.";
				mes "Ent�o... est� feliz em falar comigo?";
				mes "Voc� n�o � feliz?";
				next;
				mes "[Aebecee George]";
				mes "Entretando, antes de inicar a aula, preciso que me fa�a... um favor.";
				mes "N�o se assuste, � apenas um favor.";
				next;
				mes "[Aebecee George]";
				mes "Por favor traga-me ^3355ff30 Pedras^000000, isso � tudo.";
				mes "N�o � muito dif�cil, n�?";
				next;
				sageq2 = 1;
				changequest(2049,2060);
				mes "[Aebecee George]";
				mes "Por que n�o pede a um amigo Gatuno?";
				mes "Iniciaremos o teste assim que me entregar as pedras.";
				close;
			} else if (sageq2 == 1) {
				if (countitem(Stone) < 30) {
					mes "[Aebecee George]";
					mes "Eu pedi que me trouxesses ^3355ff30 Pedras^000000.";
					mes "H� muitas por ai, assim voc� n�o ser� dif�cil peg�-las.";
					close;
				} else {
					mes "Voc� me trouxe todas elas.";
					mes "Obrigado.";
					mes "Oh, pode esperar um pouquinho?";
					mes "Preciso fazer uma coisa antes de come�armos.";
					next;
					mes "[Aebecee George]";
					mes "Abracadabra!!";
					next;
					mes "[Aebecee George]";
					mes "Abracadabra!!";
					next;
					mes "[Aebecee George]";
					mes "Abra...ca...da...bra!!";
					next;
					delitem(Stone,30);
					getitem(Crystal_Blue,1);
					getitem(Yellow_Live,1);
					getitem(Wind_Of_Verdure,1);
					mes "[Aebecee George]";
					mes "Darei a voc� esses min�rios elementais...";
					mes "Mas... eles n�o s�o de gra�a.";
					mes "Calma!";
					mes "N�o pegue t�o depressa.";
					mes "Escute...";
					sageq2 = 2;
					changequest(2060,2061);
					next;
					mes "[Aebecee George]";
					mes "Por favor, fa�a flechas usando esses itens e traga para mim, bonitas por favor.";
					mes "50 ^3355ffFlechas de Cristal^000000.";
					mes "50 ^3355ffFlechas de Pedra^000000.";
					mes "50 ^3355ffFlechas de Vento^000000.";
					next;
					mes "[Aebecee George]";
					mes "Fale com algum amigo Arqueiro, se voc� tiver.";
					close;
				}
			} else if (sageq2 == 2) {
				if (countitem(Crystal_Arrow) < 50 && countitem(Stone_Arrow) < 50 && countitem(Arrow_Of_Wind) < 50) {
					mes "[Aebecee George]";
					mes "O que est�s fazendo aqui?";
					next;
					mes "[Aebecee George]";
					mes "Consiga esses itens e traga-os para mim:";
					mes "50 ^3355ffFlechas de Cristal^000000,";
					mes "50 ^3355ffFlechas de Pedra^000000,";
					mes "50 ^3355ffFlechas de Vento^000000.";
					mes "Pe�a a algum arqueiro para fazer com os min�rios que lhe dei.";
					close;
				} else {
					mes "Voc� me trouxe todos.";
					mes "Obrigado.";
					mes "Bem, agora, vamos aos neg�cios.";
					next;
					mes "[Aebecee George]";
					mes "Direi uma coisa, e voc� anotar� tudo.";
					mes "N�o esque�a de grifar as coisas importantes.";
					next;
					mes "[Aebecee George]";
					mes "Magia de �gua � muuuuito poderosa contra magia de fogo.";
					mes "Apenas lembre desses corpulentos, bombeiros sexys, digamos, apagando o fogo com a �gua.";
					next;
					mes "[Aebecee George]";
					mes "Magia de vento domina totalmente a magia de �gua! Ah, sim.";
					mes "Pense em uma luz quente, e com isso quero dizer raio, atingindo um lago.";
					next;
					mes "[Aebecee George]";
					mes "Em termos de for�a, magia de terra vai ao topo contra magia de vento! Ho..";
					mes "Basta pensar em como o vento bate apaixonadamente contra o penhasco.";
					next;
					mes "[Aebecee George]";
					mes "Magia de fogo � forte contra magia de terra!";
					mes "Basta pensar em lenha, surgiu a partir da terra, em uma aconchegante lareira.";
					next;
					mes "[Aebecee George]";
					mes "O tempo passa t�o r�pido!";
					next;
					delitem(Crystal_Arrow,50);
					delitem(Stone_Arrow,50);
					delitem(Arrow_Of_Wind,50);
					mes "[Aebecee George]";
					mes "Quando vier para a pr�xima aula, traga ^3355ff1 �gua Benta^000000.";
					mes "Eu espero que voc� tenha pelo menos um amigo Sarcedote ele pode lhe dar uma.";
					mes "Se n�o tiver, n�o machuca fazer um amigo novo.";
					sageq2 = 3;
					changequest(2061,2062);
					close;
				}
			} else if (sageq2 == 3) {
				if (!countitem(Holy_Water)) {
					mes "O que est�s fazendo aqui?";
					mes "Esqueceu do que lhe disse?";
					mes "Quer que eu lembre para voc�?";
					next;
					mes "[Aebecee George]";
					mes "Traga ^3355ff1 �gua Benta^000000,";
					close;
				} else {
					mes "[Aebecee George]";
					mes "Voc� me trouxe �gua Benta.";
					mes "Certo, vamos come�ar a aula.";
					next;
					mes "[Aebecee George]";
					mes "Como na �ltima vez, irei falar e voc� anotar� tudinho.";
					mes "Mesmo que n�o entenda, apenas tente e v� com a correnteza, certo?";
					next;
					mes "[Aebecee George]";
					mes "Magia de �gua � fraca contra magia de vento!";
					mes "Sim, est� certo.";
					mes "Basta lembrar por que voc� n�o fica com um ventilador perto de voc�.";
					mes "Quando est�s tomando um banho quente.";
					next;
					mes "[Aebecee George]";
					mes "Magia de vento � fraca contra magia de terra!";
					mes "Pense como o vento n�o consegue, vamos dizer, penetrar uma m�scara de lama facial.";
					next;
					mes "[Aebecee George]";
					mes "Magia de terra � fraca contra magia de fogo!";
					mes "Basta pensar em lenha, surgiu a partir da terra, em uma aconchegante lareira.";
					next;
					mes "[Aebecee George]";
					mes "Magia de fogo � fraca contra magia de �gua! Sim.";
					mes "Quando as coisas ficam quentes, � melhor borrifar as coisas em �gua fria.";
					mes "N�o concorda.?";
					next;
					mes "[Aebecee George]";
					mes "Oh, � fim da aula.";
					mes "Ent�o?";
					mes "Acha que aprendeu muito?";
					mes "Pode me agradecer!";
					next;
					delitem(Holy_Water,1);
					mes "[Aebecee George]";
					mes "Bem, � isso.";
					mes "Podes escrever sua tese com o que eu ensinei!";
					mes "Sim!";
					mes "Sou o melhor professor do mundo!";
					mes "Oh, Estou em chamas!";
					sageq2 = 0;
					sageq = 14;
					changequest(2062,2051);
					next;
					mes "[Aebecee George]";
					mes "Okay, por favor recolha esses itens para que possas escrever a tese.";
					mes "^3355ff1 Plumas de Ave^000000 que ser� usado como uma caneta,";
					mes "^3355ff1 Couro de Animal^000000 que ser�o usados como papel,";
					mes "^3355ff1 Tronco^000000 que ser� usado para ligar um livro,";
					mes "^3355ff1 Tinta de Polvo^000000 que ser� utilizado como tinta,";
					mes "^3355ff1 Garrafa Vazia^000000 que ser�o utilizados para a realiza��o da tinta de polvo.";
					close;
				}
			}
		} else if (sageq == 14) {
			if (!countitem(Feather_Of_Birds) && !countitem(Animals_Skin) && !countitem(Wooden_Block) && !countitem(Chinese_Ink) && !countitem(Empty_Bottle)) {
				mes "[Aebecee George]";
				mes "O que ainda fazes aqui";
				mes "Esqueceu do que lhe disse?";
				mes "Quer que eu lembre para voc�?";
				mes "Sem problemas.";
				next;
				mes "[Aebecee George]";
				mes "Traga esses itens:";
				mes "^3355ff1 Plumas de Ave^000000 que ser� usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que ser�o usados como papel,";
				mes "^3355ff1 Tronco^000000 que ser� usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que ser� utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que ser�o utilizados para a realiza��o da tinta de polvo.";
				next;
				mes "[Aebecee George]";
				mes "Vai vai preparar todos esses itens, n�o vai?";
				mes "Volte depreeesa!";
				close;
			} else {
				delitem(Feather_Of_Birds,1);
				delitem(Animals_Skin,1);
				delitem(Wooden_Block,1);
				delitem(Chinese_Ink,1);
				delitem(Empty_Bottle,1);
				mes "Okay. � agora ou nunca.";
				mes "Ensinei tudo que eu sei.";
				mes "Apenas fa�a sua tese com o que voc� parendeu comigo.";
				next;
				mes "..........";
				next;
				mes "....................";
				next;
				mes ".................................";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes ".....Magias s�o dividas em 4 elementos que s�o:";
				switch (select("�gua, Terra, Fogo e Ar","Terra, �gua, Fogo e Ar","�gua, Vento, Terra e Fogo.")) {
					case 1:
					mes "�gua, Terra, Fogo e Ar.";
					break;
					case 2:
					mes "Terra, �gua, Fogo e Ar.";
					break;
					case 3:
					mes "�gua, Vento, Terra e Fogo.";
					break;
				}
				mes "Cada propriedade tem uma propriedade oposta,";
				switch (select("Vento � forte contra �gua","�gua � forte contra fogo","Fogo � forte contra terra.")) {
					case 1:
					mes "Magia de vento � forte com magia de �gua.";
					break;
					case 2:
					mes "Magia de �gua � forte contra magia de fogo.";
					break;
					case 3:
					mes "Magia de fogo � forte contra magia de terra.";
					break;
				}
				next;
				mes "..........";
				next;
				mes "....................";
				next;
				mes ".................................";
				next;
				sageq = 15;
				changequest(2051,2052);
				mes "[Aebecee George]";
				mes "Tee hee, ent�o... terminou com suas teses?";
				mes "O que acha do seu trabalho?";
				mes "Acho que foi bem.";
				mes "N�o esque�a, essa � a primeira e �ltima vez que voc� escrever� uma tese, certo?";
				getitem(Book,1);
				next;
				mes "[Aebecee George]";
				mes "Certo, agora voc� pode mostrar ao reitor sua tese que acabou de escrever.";
				close;
			}
		} else if (sageq == 15) {
			mes "[Aebecee George]";
			mes "O que voc� est� fazendo aqui?";
			mes "N�o quer se encontrar com o reitor e lhe mostrar sua tese?";
			close;
		} else {
			mes "[Professor]";
			mes "Veio que aqui para perambular? Huh...?";
			mes "Bem, se n�o est�s aqui para neg�cios, deve est�r por...";
			next;
			mes "[Professor]";
			mes "...por PRAZER.";
			close;
		}
	} else {
		mes "[Professor]";
		mes "Veio que aqui para perambular? Huh...?";
		mes "Bem, se n�o est�s aqui para neg�cios, deve est�r por...";
		next;
		mes "[Professor]";
		mes "...por PRAZER.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in02,38,61,5	script	Decano da Academia#sageq	2_M_SAGE_OLD,{
	cutin("job_sage_kayron",2);
	mes "[Kayron Grik]";
	if (BaseJob == Job_Mage) {
		if (!sageq) {
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" jovem.";
			mes "Eu posso ver que voc� est� intrigado com as maravilhas da magia.";
			mes "Ent�o, que tipo de neg�cio leva-o para mim?";
			next;
			switch (select("Gostaria de ser S�bio","Saber sobre os testes","Nada")) {
				case 1:
				mes "[Kayron Grik]";
				mes "Hm? Deseja se tornar "+(Sex == SEX_MALE ? "um S�bio":"uma S�bia")+"?";
				mes "Pois bem, eu gostaria de sugerir algumas coisas que s�o necess�rias de um s�bio.";
				next;
				mes "[Kayron Grik]";
				mes "S�bios s�o aqueles que promovem o desenvolvimento do continente.";
				mes "Atrav�s do intermin�vel estudo e grava��o de todo o conhecimento relacionado a este mundo.";
				mes "Tornando-se um s�bio � mais do que apenas uma mudan�a do traje:";
				mes "� um trabalho importante.";
				mes "Onde voc� deve estar sempre consciente do seu dever e responsabilidade para o povo.";
				next;
				mes "[Kayron Grik]";
				mes "Voc� pode querer introduzir um pedido de inscri��o para a Academia M�gica Schweicherbil.";
				mes "Eu acredito que eles podem explicar em detalhe o que voc� precisa para se tornar um S�bio.";
				close2; cutin("",255); end;
				case 2:
				mes "[Kayron Grik]";
				mes "Os testes...";
				mes "hmm....";
				mes "Apesar de que � o que dizemos.";
				mes "� muito inadequado para pensar em se tornar um s�bio como uma mera mudan�a de classe.";
				next;
				mes "[Kayron Grik]";
				mes "Para ser um S�bio, voc� deve se inscrever para a Academia M�gica Schweicherbil.";
				mes "Voc� vai ent�o fazer o exame para entrar.";
				next;
				mes "[Kayron Grik]";
				mes "Ap�s o exame, voc� ser� designado para estudar um tema espec�fico...";
				mes "E... Finalmente, vai apresentar sua disserta��o para a universidade.";
				next;
				mes "[Kayron Grik]";
				mes "Eu sou o �nico que avaliar� sua disserta��o.";
				mes "Quando voc� passar em todos os cursos, voc� vai se tornar "+(Sex == SEX_MALE ? "um S�bio":"uma S�bia")+".";
				next;
				mes "[Kayron Grik]";
				mes "Por favor, visite a Academia M�gica Schweicherbil.";
				mes "Um jovem chamado S�bio Metheus Sylphe vai aceitar o seu pedido.";
				close2; cutin("",255); end;
				case 3:
				mes "[Kayron Grik]";
				mes "Veja como voc� tem tempo livre de sobra.";
				mes "Encorajo-vos a examinar quantos livros voc� poder.";
				mes "Voc� pode encontrar e pesquisar todos os assuntos mundanos dentro de suas p�ginas.";
				next;
				mes "[Kayron Grik]";
				mes "Ah sim, voc� n�o pode se tornar a pessoa mais inteligente.";
				mes "Apenas por ler todos os livros em torno de voc�...";
				mes "No entanto, para um s�bio, como eu.";
				mes "O conhecimento encontrado nos livros � mais importante.";
				close2; cutin("",255); end;
			}
		} else if (sageq == 15) {
			if (SkillPoint) {
				mes "Voc� ainda possui Pontos de Habilidade.";
				mes "Antes de decidir se tornar um S�bio, use seus pontos de habilidade.";
				close2; cutin("",255); end;
			} else {
				if (!countitem(Book)) {
					mes "Hmm? O que aconteceu?";
					mes "Onde voc� deixou a sua disserta��o?";
					mes "Por favor, traga-a para mim, para que voc� possa lhe formar na Academia.";
					next;
					mes "[Kayron Grik]";
					mes "Espere... Boc� n�o perdeu o livro de sua tese, n�o �?";
					mes "Bem... Sinto muito.";
					mes "Mas � lament�vel que voc� n�o ser� capaz ter outra chance de escrever mais um livro.";
					close;
				} else {
					mes "Ho... Ent�o?";
					mes "Voc� finalmente concluiu sua disserta��o?";
					mes "Deixe-me ver.";
					next;
					mes "[Kayron Grik]";
					mes "Hmm...";
					next;
					mes "[Kayron Grik]";
					mes "Huh...";
					next;
					mes "[Kayron Grik]";
					mes "Interessante...";
					next;
					mes "[Kayron Grik]";
					mes "Embora seja praticamente escrito, � bem feito para um iniciante.";
					mes "Ah, sim... voc� parece ser proficiente em estudar.";
					next;
					jobchange(Job_Sage);
					completequest(2052);
					callfunc("ClearJobQuest2nd",16);
					mes "[Kayron Grik]";
					mes "Parab�ns!";
					mes "Voc� se tornou "+(Sex == SEX_MALE ? "um S�bio":"uma S�bia")+".";
					mes "Lembre-se sempre de manter uma atitude estudiosa e anal�tica.";
					next;
					mes "[Kayron Grik]";
					mes "Al�m disso, mantenha esta disserta��o e trate-a com cuidado.";
					mes "Pois � um livro s� de ter sido escrito.";
					mes "Voc� pode ter necessidade de us�-lo algum dia.";
					mes "E voc� poder� visualizar ele para responder sua d�vida.";
					next;
					mes "[Kayron Grik]";
					mes "Pois ent�o...";
					mes "Que Deus possa encher o seu caminho de conhecimento.";
					mes "Estude com dilig�ncia!";
					close2; cutin("",255); end;
				}
			}
		} else {
			mes "Tornar-se s�bio n�o � t�o simples como voc� pensa.";
			mes "Voc� n�o pode tornar-se s�bio, porque suas habilidades m�gicas s�o insuficientes...";
			next;
			mes "[Kayron Grik]";
			mes "Estude diligentemente, e volte quando terminar a sua disserta��o.";
			mes "At� l�... Adeus!";
			close2; cutin("",255); end;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "Nosso conhecimento � a mola mestra da atividade.";
			mes "Que ajuda o reino a ser desenvolvido mais rapidamente.";
			mes "Por favor, mantenha isto em mente:";
			mes "� preciso estudar e gravar tudo o que voc� descobriu.";
			mes "Para que todos no reino possam se beneficiar.";
			close2; cutin("",255); end;
		} else {
			mes "Embora tenhamos vindo a estudar este mundo por um longo tempo.";
			mes "Sei que estudar, por si s� ir� atender todas as necessidades do povo.";
			mes "Outras classes s�o t�o importantes para o bem-estar de Rune-Midgard...";
			next;
			mes "[Kayron Grik]";
			mes "No entanto, se acontecer de voc� encontrar um s�bio no caminho, espero que voc� ajude-o.";
			mes "E se voc� fizer isso, ele deve recontribuir em esp�cie ...";
			close2; cutin("",255); end;
		}
	}
}
