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
| - Info: Quest de Mudança de Classe para Sábio.                    |
\*-----------------------------------------------------------------*/

yuno_in03,154,35,4	script	Academico#sageq	2_M_SAGE_B,{
	if (BaseJob == Job_Mage) {
		if (!sageq) {
			mes "[Metheus Sylphe]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à Academia de Magia Schweicherbil.";
			if (JobLevel < 40) {
				mes "Se você desenvolver suas habilidades mágicas melhor.";
				mes "Digamos até o mímimo Level de Classe 40.";
				mes "Você pode se inscrever na academia, e quem sabe se tornar "+(Sex == SEX_MALE ? "um Sábio":"uma Sábia")+".";
				close;
			} else {
				mes "Como posso ajudá-l"+(Sex == SEX_MALE ? "o":"a")+"?";
				next;
				switch (select("Sobre a mudança de classe?","Eu quero me matricular","Nada")) {
					case 1:
					mes "[Metheus Sylphe]";
					mes "Então...";
					mes "Eu não sou responsável pela mudança de classe para Sábio.";
					next;
					mes "[Metheus Sylphe]";
					mes "Depois de entrar para academia e passar nos testes...";
					mes "Você receberá aprovação oficial para realizar estudos como um Sábio.";
					next;
					mes "[Metheus Sylphe]";
					mes "Por esta razão, nós não falamos desse processo como uma mudança de classe.";
					mes "Mas como graduação.";
					mes "Enfim, se você fizer o seu pedido para esta academia.";
					mes "Vou informá-l"+(Sex == SEX_MALE ? "o":"a")+" sobre a taxa de inscrição.";
					mes "E deixá-l"+(Sex == SEX_MALE ? "o":"a")+" fazer o teste.";
					next;
					mes "[Metheus Sylphe]";
					mes "Para sua informação, se você trouxer:";
					mes "^3355ff1 Grimório Antigo^000000";
					mes "E ^3355ff1 Colar da Sabedoria^000000.";
					mes "Você não terá que pagar a taxa de inscrição para se inscrever na escola.";
					next;
					mes "[Metheus Sylphe]";
					mes "Depois de se registrar, você será capaz de fazer o teste de entrada.";
					mes "Se você passar no teste, você vai escrever uma tese de um determinado assunto.";
					next;
					mes "[Metheus Sylphe]";
					mes "O reitor da Academia vai decidir se você está ou não qualificad"+(Sex == SEX_MALE ? "o":"a")+".";
					mes "Se você é estudios"+(Sex == SEX_MALE ? "o":"a")+"...";
					mes "Será capaz de participar em atividades de estudo e de pesquisa como um Sábio.";
					close;
					case 2:
					mes "[Metheus Sylphe]";
					mes "Eu vejo, quer se juntar à academia.";
					next;
					mes "[Metheus Sylphe]";
					mes "As pessoas que já cumpriram o requisito básico.";
					mes "Chegando ao Nível de Classe 40, só assim poderá fazer a inscrição.";
					mes "A pequena taxa de inscrição também será necessária.";
					next;
					mes "[Metheus Sylphe]";
					mes "A taxa de inscrição é de 70.000 zeny.";
					mes "No entanto, se você trouxer:";
					mes "^3355ff1 Grimório Antigo^000000";
					mes "E ^3355ff1 Colar da Sabedoria^000000.";
					mes "poderá fazer a inscrição gratuitamente.";
					next;
					mes "[Metheus Sylphe]";
					mes "Então, você deseja se inscrever?";
					next;
					switch (select("Sim, desejo","A taxa é muito cara","Voltarei mais tarde.")) {
						case 1:
						mes "[Metheus Sylphe]";
						mes "Muito bem. Vamos completar o seu formulário de candidatura.";
						mes "Por favor, coloque sua assinatura aqui.";
						next;
						select(strcharinfo(CHAR_NAME));
						mes "[Metheus Sylphe]";
						mes "Seu nome é... "+strcharinfo(CHAR_NAME)+".";
						next;
						if (JobLevel == 50) {
							mes "[Metheus Sylphe]";
							mes "Você já tem o Nível de Classe certo!";
							mes "Você está ótimo!!";
							mes "Em recompensa pelo seu esforço, você estará isento da taxa de inscrição!";
							next;
							mes "[Metheus Sylphe]";
							mes "Sim, tudo está pronto.";
							mes "Em seguida, você terá um teste de entrada.";
							sageq = 4;
							if (questprogress(2043)) { changequest(2043,2041); }
							else if (questprogress(2044)) { changequest(2044,2041); }
							else if (questprogress(2045)) { changequest(2045,2041); }
							else { setquest(2041); }
							next;
							mes "[Metheus Sylphe]";
							mes "Por favor visite o Professor Claytos.";
							mes "Ele está na sala à esquerda.";
							close;
						} else {
							mes "[Metheus Sylphe]";
							mes "Você vai pagar a taxa de inscrição de 70.000 zeny?";
							mes "Ou você vai me trazer ^3355ffGrimório Antigo^000000 e ^3355ffColar da Sabedoria^000000?";
							next;
							if (select("Pagar 70,000 zenys","Vou pegar os itens") == 1) {
								if (Zeny >= 70000) {
									Zeny -= 70000;
									mes "[Metheus Sylphe]";
									mes "Muito obrigado, seu pedido foi aceito.";
									mes "Em seguida, você terá um teste de entrada.";
									sageq = 4;
									if (questprogress(2043)) { changequest(2043,2041); }
									else if (questprogress(2044)) { changequest(2044,2041); }
									else if (questprogress(2045)) { changequest(2045,2041); }
									else { setquest(2041); }
									next;
									mes "[Metheus Sylphe]";
									mes "Por favor, visite o Professor Claytos.";
									mes "Ele está na sala à esquerda.";
									close;
								} else {
									mes "[Metheus Sylphe]";
									mes "Parece que você não trouxe dinheiro suficiente para pagar.";
									mes "Por favor, certifique-se de ter pelo menos 70.000 zeny.";
									mes "Para se inscrever nas aulas.";
									close;
								}
							} else {
								if (countitem(Old_Magic_Book) && countitem(Penetration)) {
									mes "[Metheus Sylphe]";
									mes "Muito obrigado, seu pedido foi aceito.";
									mes "Em seguida, você terá um teste de entrada.";
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
									mes "Ele está na sala à esquerda.";
									close;
								} else {
									mes "[Metheus Sylphe]";
									mes "Umm...";
									mes "Parece que você não trouxe os itens.";
									mes "Eu suponho que você deixou-os em algum lugar para trás.";
									mes "Por favor, vá buscá-los, e depois volte.";
									close;
								}
							}
						}
						case 2:
						if (JobLevel == 50) {
							mes "[Metheus Sylphe]";
							mes "Oh!";
							mes "Você está com o Nível de Classe perfeito!";
							mes "Você é verdadeiramente exemplar!";
							mes "Como recompensa pelo seu grande esforço, você estará isento da taxa de inscrição!";
							next;
							mes "[Metheus Sylphe]";
							mes "Ok, vamos completar o formulário de candidatura.";
							mes "Por favor, coloque sua assinatura aqui.";
							next;
							select(strcharinfo(CHAR_NAME));
							mes "[Metheus Sylphe]";
							mes "Seu nome é ... "+strcharinfo(CHAR_NAME)+".";
							next;
							mes "[Metheus Sylphe]";
							mes "Sim, tudo está pronto.";
							mes "Em seguida, você vai fazer o teste de entrada.";
							sageq = 4;
							if (questprogress(2043)) { changequest(2043,2041); }
							else if (questprogress(2044)) { changequest(2044,2041); }
							else if (questprogress(2045)) { changequest(2045,2041); }
							else { setquest(2041); }
							next;
							mes "[Metheus Sylphe]";
							mes "Por favor visite o professor Claytos.";
							mes "Ele está na sala à esquerda.";
							close;
						} else if (Zeny >= 70000) {
							mes "[Metheus Sylphe]";
							mes "Bem, eu não posso te ajudar com essa questão.";
							mes "Se você não tiver o dinheiro, você não vai poder entrar na academia.";
							mes "Mesmo que você pense que é caro.";
							mes "É justificável um preço a pagar para se tornar um Sábio.";
							next;
							mes "[Metheus Sylphe]";
							mes "Alternativamente, você pode tentar encontrar:";
							mes "^3355ff1 Grimório Antigo^000000";
							mes "E ^3355ff1 Colar da Sabedoria^000000.";
							mes "Se você encontrar estes itens e trouxe-los para mim.";
							mes "Deixarei você fazer a inscrição gratuitamente.";
							next;
							mes "[Metheus Sylphe]";
							mes "Até logo, e tenha um bom dia.";
							close;
						} else {
							mes "[Metheus Sylphe]";
							mes "Ah, você não tem dinheiro suficiente?";
							mes "Então não poderá pagar a taxa de inscrição que é 70.000 Zenys.";
							next;
							if (select("Não outra maneira?","Certo, volto mais tarde.") == 1) {
								mes "[Metheus Sylphe]";
								mes "Hmmm...";
								mes "Então vou lhe oferecer uma opção especial!";
								mes "Você vai pagar 30.000 zenys.";
								mes "E trazer alguns itens como compensação para o desconto de taxa de matrícula.";
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
								mes "Se você trouxer esses itens, sua taxa de matrícula será de 30.000 zeny.";
								mes "Ao invés de 70.000.";
								close;
							} else {
								mes "[Metheus Sylphe]";
								mes "Alternativamente, você pode me trazer:";
								mes "^3355ff1 Grimório Antigo^000000";
								mes "^3355ff1 Colar da Sabedoria^000000.";
								close;
							}
						}
						case 3:
						mes "[Metheus Sylphe]";
						mes "Ah sim, não tenha pressa!...";
						mes "Adeus, e tenha um bom dia.";
						close;
					}
					case 3:
					mes "[Metheus Sylphe]";
					mes "Tenha um bom dia então.";
					close;
				}
			}
		} else if (sageq >= 1 && sageq <= 3) {
			if (countitem(Old_Magic_Book) && countitem(Penetration)) {
				delitem(Old_Magic_Book,1);
				delitem(Penetration,1);
				mes "[Metheus Sylphe]";
				mes "Hunn....";
				mes "Vejo que você trouxe o Grimório Antigo e o Colar da Sabedoria.";
				mes "Com isso dispensamos a incrição formal.";
				next;
				mes "[Metheus Sylphe]";
				mes "Por favor visite o professor Claytos.";
				mes "Ele está na sala à esquerda.";
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
					mes "Muito bem, isso é tudo.";
					mes "Agora sua incrição está formalizada.";
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
					mes "Ele está na sala à esquerda.";
					close;
				} else {
					mes "[Metheus Sylphe]";
					mes "Lamento dizer que você não podemos prosseguir.";
					next;
					mes "[Metheus Sylphe]";
					mes "Como eu disse antes, você deve trazer todos esses itens, bem como os 30.000 zeny juntos.";
					mes "Por favor, certifique-se de que você tenha os itens necessários e dinheiro.";
					next;
					mes "[Metheus Sylphe]";
					mes "Lembre-se que você deve trazer:";
					for (.@i = 0; .@i < getarraysize(.@item); .@i++) {
						mes "^3355ff"+.@count[.@i]+" "+getitemname(.@item[.@i])+"^000000.";
					}
					next;
					mes "[Metheus Sylphe]";
					mes "Mas se trouxer:";
					mes "^3355ff1 Grimório Antigo^000000";
					mes "^3355ff1 Colar da Sabedoria^000000.";
					mes "Dispensamos todo o resto.";
					close;
				}
			}
		} else if (sageq == 4) {
			mes "[Metheus Sylphe]";
			mes "Hein? O que você está fazendo aqui? Você deve fazer o próximo teste.";
			mes "Por favor, visite o Professor Claytos na sala à esquerda.";
			close;
		} else {
			mes "Me desculpe, esta é uma hora bastante inconveniente para conversar.";
			mes "Por favor, volte mais tarde. Peço desculpa.";
			close;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "[Metheus Sylphe]";
			mes "Oh, você novamente, há muito te vejo.";
			mes "Então, como é que vai com o estudo?";
			next;
			mes "[Metheus Sylphe]";
			mes "É razoável estudar livros e pergaminhos mágicos todos os dias.";
			mes "Mas você tem que ir lá fora e lutar com monstros, tanto quanto possível.";
			mes "A fim de ser um Sábio bem experiente.";
			next;
			mes "[Metheus Sylphe]";
			mes "Se você conhece algum dos candidatos Sábios, por favor, dê-lhes alguns conselhos...";
			mes "Além disso, por favor dê os meus cumprimentos aos seus colegas também.";
			close;
		} else {
			mes "Bem Vind"+(Sex == SEX_MALE ? "o":"a")+" à Academia Mágica de Schweicherbil.";
			next;
			mes "[Metheus Sylphe]";
			mes "Este lugar é especializado em formação de Sábios.";
			mes "Principalmente, o que nós fazemos é o estudar sobre monstros e magias.";
			mes "São sempre bem-vindos novos estudantes.";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_in03,105,177,5	script	Prof. de Teste Escrito#sageq	4_M_SAGE_A,{
	if (BaseJob == Job_Mage) {
		if (!sageq) {
			mes "[Claytos Verdo]";
			mes "O quê, você quer ser um Sábio?";
			mes "Eu posso dizer pelo seus olhos, famintos de sabedoria.";
			next;
			mes "[Claytos Verdo]";
			mes "Claro, se você quiser ser um Sábio, primeiro você deve entrar na academia.";
			mes "Se inscreva, e depois volte.";
			close;
		} else if (sageq == 1 || sageq == 2 || sageq == 3) {
			mes "[Claytos Verdo]";
			mes "Faça o seu melhor.";
			mes "Vai ser uma experiência boa para você.";
			mes "Venha novamente quando terminar sua inscrição.";
			close;
		} else if (sageq == 4 || sageq == 5) {
			if (sageq == 4) {
				mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" a Acadêmia de Magia Schweicherbil.";
				mes "Você já foi aplicado pro teste, não é?";
				next;
				mes "[Claytos Verdo]";
				mes "Vamos ver, seu nome é "+strcharinfo(CHAR_NAME)+"...";
				mes "Ok, vamos começar!";
				next;
				mes "[Claytos Verdo]";
				mes "O teste que vou dar a você é pra testar seus conhecimentos.";
				mes "Sobre todas as matérias acadêmicas no mundo.";
				mes "Vou dar-lhe 20 perguntas, cada pergunta vale 5 pontos.";
				mes "Você deve marcar pelo menos 80 pontos, para passar no teste.";
			} else if (sageq == 5) {
				mes "Bem vindo denovo.";
				mes "Então,você estudou mais nesse tempo?";
				next;
				mes "[Claytos Verdo]";
				mes "Você vai fazer o teste escrito, nas mesmas condições que o teste que você tomou antes.";
				mes "Vou dar-lhe 20 perguntas.";
				mes "Cada resposta correta lhe dará 5 pontos.";
				mes "Você deve marcar pelo menos 80 pontos, para passar no teste.";
				next;
			}
			mes "[Claytos Verdo]";
			mes "Ok, não há necessidade de esperar.";
			mes "Vamos começar imediatamente";
			mes "Ah, e se você não responder imediatamente, o teste será anulado.";
			next;
			switch (rand(3)) {
				case 1:
				mes "1. Escolha um item que o Comerciante de Presentes em Prontera não vende.";
				next;
				if (select("Prato de Porcelana","Moldura Vermelha","Buquê","Bolinha de Gude") == 3) {
					.@sgq += 5;
				}
				mes "2. Escolha uma cidade onde você não pode comprar um Stiletto.";
				next;
				if (select("Prontera","Morroc","Geffen","Lutie") == 1) {
					.@sgq += 5;
				}
				mes "3. Escolha a cidade mais próxima da Ilha da Tartaruga.";
				next;
				if (select("Al De Baran","Alberta","Comodo","Izlude") == 2) {
					.@sgq += 5;
				}
				mes "4. Escolha o monstro que é um tipo diferente dos outros.";
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
				mes "7. Escolha o monstro que não dropa 'Álcool'.";
				next;
				if (select("Horong","Plânkton","Esporo Venenoso","Sapo-Cururu") == 3) {
					.@sgq += 5;
				}
				mes "8. Escolha a pessoa que é não pertente para a missão de mudança de classe para Cavaleiro.";
				next;
				if (select("Sir Siracuse","Thomas Servantes","Sir Windsor","Lady Amy") == 2) {
					.@sgq += 5;
				}
				mes "9. Escolha alguém que não é um habitante de Prontera.";
				next;
				if (select("Tono","Pina","YuPi","Hollgrehenn") == 2) {
					.@sgq += 5;
				}
				mes "10. Escolha o nome correto para a senhora Kafra que usa óculos.";
				next;
				if (select("Tatiana","Marianne","Bianca","Sofia") == 3) {
					.@sgq += 5;
				}
				mes "11. Quanto SP é gasto para usar Tempestade de Raios lvl 7?";
				next;
				if (select("49","59","69","74") == 2) {
					.@sgq += 5;
				}
				mes "12. Escolha a quantidade certa de redução de danos.";
				mes "E o consumo de SP das Habilidades Proteção Arcana.";
				mes "Quando SP é 50% do total.";
				next;
				if (select("Dano -24% SP 1.5%","Dano -24% SP 2%","Dano -18% SP 1.5%","Dano -18% SP 2%") == 4) {
					.@sgq += 5;
				}
				mes "13. Escolha a propriedade que é irrelevante para as habilidades de \"Lanças\" para a classe Mago.";
				next;
				if (select("Água","Terra","Fogo","Vento") == 2) {
					.@sgq += 5;
				}
				mes "14. Escolha a chance e da força de ataque para Ataque Duplo (lvl 7), a habilidade do Gatuno.";
				next;
				if (select("35% / 120%","35% / 140%","40% / 120%","40% / 140%") == 2) {
					.@sgq += 5;
				}
				mes "15. Escolha a habilidade que é irrelevante para a aprendizagem Magnus Exorcismus.";
				next;
				if (select("Proteção Divina","Curar","Revelação","Aqua Benedicta") == 1) {
					.@sgq += 5;
				}
				mes "16. Escolha a defesa correta e bônus da Orelha de Coelho.";
				next;
				if (select("DEF 1 / SOR +2","DEF 1 / SOR +5","DEF 2 / SOR +2","DEF 2 / SOR +5") == 3) {
					.@sgq += 5;
				}
				mes "17. Escolha a classe que não pode equipar Armadura Acolchoada.";
				next;
				if (select("Espadachim","Mercador","Gatuno","Arqueiro") == 4) {
					.@sgq += 5;
				}
				mes "18. Escolha o item que cura todo o HP e SP ao mesmo tempo.";
				next;
				if (select("Geléia Real","Semente de Yggdrasil","Fruto de Yggdrasil","Mastela") == 3) {
					.@sgq += 5;
				}
				mes "19. Quem governa o reino de Rune-Midgard agora?";
				next;
				if (select("Tristun o 3º","Tristram o 3º","Tristar o 3º","Trast o 3º") == 2) {
					.@sgq += 5;
				}
				mes "20. Escolha o deus dos Templários.";
				next;
				if (select("Odin","Loki","Thor","Venadin") == 1) {
					.@sgq += 5;
				}
				break;
				case 2:
				mes "1. Escolha a jóia que o Vendedor de Jóias de Morroc não vende.";
				next;
				if (select("Topázio","Granada","Diamante","Safira") == 2) {
					.@sgq += 5;
				}
				mes "2. Escolha a cidade onde os usuários não podem comprar Ração de Bichinho de um NPC.";
				next;
				if (select("Prontera","Morroc","Al De Baran","Alberta") == 3) {
					.@sgq += 5;
				}
				mes "3. Escolha a cidade mais próxima do Labirinto da Floresta.";
				next;
				if (select("Prontera","Morroc","Geffen","Payon") == 1) {
					.@sgq += 5;
				}
				mes "4. Escolha o monstro que é um tipo diferente dos outros.";
				next;
				if (select("Muka","Drops","Plânkton","Penomena") == 4) {
					.@sgq += 5;
				}
				mes "5. Escolha o monstro que tem um atributo diferente dos outros.";
				next;
				if (select("Dokebi","Ísis","Giearth","Deviruchi") == 3) {
					.@sgq += 5;
				}
				mes "6. Escolha um monstro que tem um tamanho diferente dos outros.";
				next;
				if (select("Besouro-Ladrão Macho","Besouro-Chifre","Metaller","Argos") == 4) {
					.@sgq += 5;
				}
				mes "7. Escolha o monstro que não dropa \"Folha de Yggdrasil\".";
				next;
				if (select("Marduk","Bafomé Jr","Angeling","Andarilho") == 1) {
					.@sgq += 5;
				}
				mes "8. Escolha quem é irrelevante para a mudança da Classe Sacerdote.";
				next;
				if (select("Paul","Sir Windsor","Peter S. Alberto","Cecilia") == 2) {
					.@sgq += 5;
				}
				mes "9. Escolha quem não é um habitante de Morroc.";
				next;
				if (select("Syvia","Akira","Antonio","Dmitrii") == 3) {
					.@sgq += 5;
				}
				mes "10. Escolha a Kafra que tem um lindo cabelo azul.";
				next;
				if (select("Denise","Tatiana","Marianne","Bianca") == 1) {
					.@sgq += 5;
				}
				mes "11. Escolha a habilidade que é irrevelante pro aprendizado de Barreira de Fogo.";
				next;
				if (select("Lanças de Fogo","Ataque Espiritual","Bolas de Fogo","Chama Reveladora") == 2) {
					.@sgq += 5;
				}
				mes "12. Quanto de SP pode ser restaurado após aprender Recuperação de SP?";
				mes "(sem ser afetado por INT)?";
				next;
				if (select("14","16","18","21") == 3) {
					.@sgq += 5;
				}
				mes "13. Quanto de bônus de inteligência é recebido após chegar ao Nível 33?";
				next;
				if (select("7","6","5","4") == 4) {
					.@sgq += 5;
				}
				mes "14. Escolha o consumo de SP correto e da duração da habilidade Concentração lvl 5.";
				next;
				if (select("45 SP / 80 Segundos","50 / 80 SP Segundos","45 SP / 90 Segundos","50 SP / 90 Segundos") == 1) {
					.@sgq += 5;
				}
				mes "15. Escolha a habilidade que é irrelevante para a aprendizagem Amplificar Poder.";
				next;
				if (select("Punho Firme","Resistência ao Fogo","Martelo de Thor","Perícia em Armamento") == 2) {
					.@sgq += 5;
				}
				mes "16. Qual é a taxa de defesa correta e bônus de Laço Meigo?";
				next;
				if (select("DEF 0 / SP+20","DEF 0 / SP+30","DEF 1 / SP+20","DEF 1 / SP+30") == 3) {
					.@sgq += 5;
				}
				mes "17. Escolha a classe que não pode equipar Manto Sagrado.";
				next;
				if (select("Espadachim","Mercador","Gatuno","Noviço") == 3) {
					.@sgq += 5;
				}
				mes "18. Escolha o estado anormal que não pode ser curada por Poção Verde.";
				next;
				if (select("Silêncio","Caos","Cegueira","Maldição") == 4) {
					.@sgq += 5;
				}
				mes "19. Escolha o nome correto para o antigo reino que desapareceu em algum lugar em Geffen.";
				next;
				if (select("Geffayon","Geffenia","Gefenn","Jaffen") == 2) {
					.@sgq += 5;
				}
				mes "20. Escolha o nome correto para a árvore que se tornou a raiz deste mundo.";
				next;
				if (select("Yggdrasil","Iggdrassil","Mastela","Galho Seco") == 1) {
					.@sgq += 5;
				}
				break;
				default:
				mes "1.Escolha o item que o Vendedor Mágico de Geffen não vende.";
				next;
				if (select("Manto","Bastão","Tiara","Manto Prateado") == 1) {
					.@sgq += 5;
				}
				mes "2. Escolha a cidade onde os usuários não podem comprar uma lâmina.";
				next;
				if (select("Prontera","Izlude","Al De Baran","Payon") == 3) {
					.@sgq += 5;
				}
				mes "3. Escolha a cidade mais próxima para Glast Heim.";
				next;
				if (select("Prontera","Geffen","Morroc","Payon") == 2) {
					.@sgq += 5;
				}
				mes "4. Escolha o monstro que é um tipo diferente dos outros.";
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
				if (select("Drake","Alma Penada","Druida Malígno","Khalitzburg") == 1) {
					.@sgq += 5;
				}
				mes "7. Escolha o monstro que não dropa \"Fracon\".";
				next;
				if (select("Pupa","Ovo de PecoPeco","Bebê Selvagem","Lobo do Deserto") == 2) {
					.@sgq += 5;
				}
				mes "8. Escolha quem é irrelevante para a mudança de classe de Ferreiro.";
				next;
				if (select("Altiregen","Geschupenschte","Barcadi","Baisulist") == 3) {
					.@sgq += 5;
				}
				mes "9. Escolha quem não é um habitante de Al De Baran.";
				next;
				if (select("RS125","GOD-POING","Stromme","Chemirre") == 2) {
					.@sgq += 5;
				}
				mes "10. Escolha a funcionária Kafra que é a mais nova entre as outras.";
				next;
				if (select("Denise","Tatiana","Marianne","Sofia") == 4) {
					.@sgq += 5;
				}
				mes "11. Escolha o consumo de SP correto e o número de evasões ao usar Escudo Mágico lvl 6.";
				next;
				if (select("SP 40, 6 vezes","SP 35, 6 vezes","SP 40, 7 vezes","SP 35, 7 vezes") == 3) {
					.@sgq += 5;
				}
				mes "12. Escolha a o ataque mágico da habilidade Ataque Espiritual lvl 6.";
				next;
				if (select("MATQ * 1.2","MATQ * 1.3","MATQ * 1.4","MATQ * 1.5") == 2) {
					.@sgq += 5;
				}
				mes "13. Escolha a pedra que soluciona o problema dos magos.";
				mes "Que é usado para trocar de classe para Mago.";
				next;
				if (select("Gema Azul","Gema Vermelha","Gema Amarela","Diamanete de 1 Quilate") == 4) {
					.@sgq += 5;
				}
				mes "14. Escolha a força de ataque correto e consumo de SP para Golpe Fulminante lvl 6.";
				next;
				if (select("ATQ 250% / SP 8","ATQ 280% / SP 8","ATQ 280% / 1SP 5","ATQ 310% /ATQ 1% / SP 5") == 3) {
					.@sgq += 5;
				}
				mes "15. Escolha a habilidade que é irrelevante para a aprendizagem de Armadilha Explosiva";
				next;
				if (select("Remover Armadilha","Armadilha Atordoante","Instalar Armadilha","Armadilha Luminosa") == 1) {
					.@sgq += 5;
				}
				mes "16. Escolha a defesa correta do Véu de Noiva.";
				next;
				if (select("DEF 0 / MDEF 3","DEF 0 / MDEF 5","DEF 1 / MDEF 3","DEF 1 / MDEF 5") == 2) {
					.@sgq += 5;
				}
				mes "17. Escolha a classe que não pode equipar Casaco.";
				next;
				if (select("Espadachim","Mercador","Gatuno","Aprendiz") == 4) {
					.@sgq += 5;
				}
				mes "18. Escolha o item que não é um ingrediente para a Tintura Azul.";
				next;
				if (select("Álcool","Detrimindexta","Karvodailnirol","Erva Azul") == 3) {
					.@sgq += 5;
				}
				mes "19. Quando o mundo foi criado pelo deus Odin, qual material ele usou?";
				next;
				if (select("O coração de Ymir","A unha de Ymir","O dente de Ymir","O espólio de Ymir") == 1) {
					.@sgq += 5;
				}
				mes "20. Escolha o metal que dá mais lucros pros mercadores.";
				next;
				if (select("Ouro","Emperium","Ferro","Fracon") == 1) {
					.@sgq += 5;
				}
				break;
			}
			mes "[Claytos Verdo]";
			mes "Bem, nós terminamos todas as 20 perguntas.";
			mes "Agora, vamos verificar quantos pontos você fez.";
			next;
			mes "[Claytos Verdo]";
			mes "Vamos ver ...";
			mes "Hmm... hmm...";
			next;
			mes "[Claytos Verdo]";
			mes "Você marcou "+.@sgq+" pontos.";
			next;
			if (.@sgq >= 80) {
				sageq = 6;
				changequest(2041,2046);
				mes "[Claytos Verdo]";
				mes "Excelente! Você deve ter estudado muito para este teste!";
				next;
				mes "[Claytos Verdo]";
				mes "Você passou no teste escrito.";
				mes "Vá visitar o professor Hermes para o exame prático.";
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
			mes "Você quer fazer o teste novamente?";
			mes "Você já passou!";
			next;
			mes "[Claytos Verdo]";
			mes "Vá visitar o professor Hermes para o exame prático.";
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
			mes "Por que você voltou aqui?";
			mes "Você quer entrar na escola novamente?";
			next;
			mes "[Claytos Verdo]";
			mes "Agora, eu entendo como se sente.";
			mes "Assim, ser forte e independente.";
			mes "Tentar explorar alguns lugares onde ninguém se aventurou a ir.";
			next;
			mes "[Claytos Verdo]";
			mes "Não se esqueça de gravar tudo o que você experimentar.";
			mes "Você deve compartilhar seu conhecimento com outras pessoas, se tornando um sábio exemplar.";
			close;
		} else {
			mes "[Claytos Verdo]";
			mes "Você quis entrar na nossa academia de prestígio?";
			mes "Mas desde que você escolheu para viver como uma classe diferente.";
			mes "Não acho que você possa se tornar um Sábio.";
			next;
			mes "[Claytos Verdo]";
			mes "Assim, não é de ficar lamentando por que você optou por um trabalho diferente de Sábio.";
			mes "É melhor você sair e caçar, nivelando-se a sua atual classe.";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_in03,169,180,3	script	Prof. de Exame Prático#sageq	4_M_SAGE_C,{
	if (BaseJob == Job_Mage) {
		if (sageq < 6) {
			mes "[Hermes Tris]";
			mes "Me desculpe mas estou muito ocupado agora.";
			mes "Todos esses novos alunos estão me deixando muito exausto.";
			next;
			mes "[Hermes Tris]";
			mes "Volte mais tarde, talvez poderemos conversar mais.";
			close;
		} else if (sageq == 6) {
			mes "[Hermes Tris]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+", você acabou de passar no teste escrito, não é?";
			mes "Agora é hora do exame prático.";
			next;
			mes "[Hermes Tris]";
			mes "Não há nada de difícil ou especial sobre este teste.";
			mes "Tudo que você tem a fazer é matar todos os monstros dentro do prazo.";
			next;
			mes "[Hermes Tris]";
			mes "É melhor ter esta experiência para si mesmo.";
			mes "Então...";
			mes "Você está pront"+(Sex == SEX_MALE ? "o":"a")+" para fazer o teste?";
			sageq = 7;
			next;
			if (select("Sim, estou","Não, me dê um tempo.") == 1) {
				mes "[Hermes Tris]";
				mes "Bom, vamos começar de imediato.";
				mes "Faça o seu melhor e volte com segurança!";
				close2;
				warp("job_sage",50,154);
				end;
			} else {
				mes "[Hermes Tris]";
				mes "Sim, você não precisa de pressa....";
				mes "Estude mais, treine mais, e então volte depois.";
				close;
			}
		} else if (sageq == 7) {
			mes "[Hermes Tris]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" outra vez!";
			mes "Então, você se preparou bem neste tempo?";
			mes "Oh bem, não é tão difícil.";
			mes "Dê tudo de você, ok?";
			next;
			mes "[Hermes Tris]";
			mes "Você está pront"+(Sex == SEX_MALE ? "o":"a")+"?";
			next;
			if (select("Sim, estou","Não estou.") == 1) {
				mes "[Hermes Tris]";
				mes "Bom, vamos começar de imediato.";
				mes "Faça o seu melhor e volte com segurança!";
				close2;
				warp("job_sage",50,154);
				end;
			} else {
				mes "[Hermes Tris]";
				mes "Sim, você não precisa de pressa....";
				mes "Estude mais, treine mais, e então volte depois.";
				close;
			}
		} else if (sageq == 8) {
			mes "[Hermes Tris]";
			mes "Muito bom.";
			mes "Você passou no exame prático, bem...";
			mes "Vou aceitar a sua admissão.";
			next;
			mes "[Hermes Tris]";
			mes "Agora preciso decidir o assunto que você vai aprender e estudar...";
			mes "Vamos ver...";
			mes "Deixe-me verificar o seu grau de prova escrita e do tempo gasto no exame prático.";
			next;
			mes "[Hermes Tris]";
			mes "Hmm, hmm... Vamos ver....";
			next;
			switch (rand(3)) {
				case 1:
				sageq = 9;
				changequest(2046,2047);
				mes "[Hermes Tris]";
				mes "Agora,você vai estudar Yggdrasil.";
				mes "Yggdrasil é a árvore que foi rumores de ser a fonte de vida para este mundo.";
				next;
				mes "[Hermes Tris]";
				mes "Isso é um bom tema que nos ajuda a reconhecer as mudanças no mundo.";
				mes "Bem como o sentido da sua melhoria.";
				mes "Vá pedir a ajuda do professor Saphien.";
				mes "Ele está na sala de aula.";
				next;
				mes "[Hermes Tris]";
				mes "Desejo-lhe sorte.";
				close;
				case 2:
				sageq = 11;
				changequest(2046,2048);
				mes "[Hermes Tris]";
				mes "Agora, você vai estudar monstros.";
				mes "O objetivo deste estudo é o de aprender...";
				mes "E entender mais sobre as criaturas existentes em todo o continente.";
				next;
				mes "[Hermes Tris]";
				mes "Este é um bom tema que irá ajudá-lo a levar sua vida como um Sábio experiente.";
				mes "Vá pedir a ajuda do professor Lucius.";
				mes "Ele está no Museu dos Monstros.";
				next;
				mes "[Hermes Tris]";
				mes "Desejo-lhe sorte.";
				close;
				default:
				sageq = 13;
				changequest(2046,2049);
				mes "[Hermes Tris]";
				mes "Agora, você vai estudar habilidades mágicas que têm determinadas propriedades.";
				mes "O objetivo deste estudo é compreender melhor habilidades básicas de magia.";
				mes "As quais usamos na vida cotidiana.";
				next;
				mes "[Hermes Tris]";
				mes "Isso é um bom tema que ajuda você a compreender profundamente a verdade da magia.";
				mes "Vá pedir ajuda ao professor Aebecee...";
				mes "Ele está no Laboratório de Somatologia.";
				next;
				mes "[Hermes Tris]";
				mes "Desejo-lhe sorte.";
				close;
			} 
		} else if (sageq == 9) {
			mes "[Hermes Tris]";
			mes "Hein? Você não entendeu o que eu disse?";
			mes "Eu disse-lhe para estudar Yggdrasil.";
			next;
			mes "[Hermes Tris]";
			mes "Vá pedir a ajuda do professor Saphien.";
			mes "Ele está na sala de aula.";
			close;
		} else if (sageq == 11) {
			mes "[Hermes Tris]";
			mes "Hein? Você não entendeu o que eu disse?";
			mes "Eu disse-lhe para estudar monstros.";
			next;
			mes "[Hermes Tris]";
			mes "Vá pedir a ajuda do professor Lucius.";
			mes "Ele está no Museu dos Monstros.";
			close;
		} else if (sageq == 13) {
			mes "[Hermes Tris]";
			mes "Hein? Você não entendeu o que eu disse?";
			mes "Eu disse-lhe para estudar magias que possuem determinadas propriedades.";
			next;
			mes "[Hermes Tris]";
			mes "Vá pedir ajuda ao professor Aebecee.";
			mes "Ele está no Laboratório de Somatologia.";
			close;
		} else {
			mes "[Hermes Tris]";
			mes "Ah desculpe, eu estou muito ocupado no momento...";
			mes "Se você tiver qualquer dúvida, vá visitar o professor que lhe passou o teste.";
			close;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "[Hermes Tris]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Eu acho que você já passou por muitos momentos difíceis...";
			mes "Eu posso dizer pela sua aparência..";
			next;
			mes "[Hermes Tris]";
			mes "Eu sei como é difícil explorar todas as áreas perigosas.";
			mes "Mas vai ajudar você a ganhar mais conhecimento.";
			next;
			mes "[Hermes Tris]";
			mes "No entanto, é uma idéia muito perigosa ir profundamente dentro de uma masmorra sozinho.";
			mes "É melhor você procurar por companheiros de confiança.";
			close;
		} else {
			mes "[Hermes Tris]";
			mes "Bem-Vind"+(Sex == SEX_MALE ? "o":"a")+" à Academia de Magia Schweicherbil.";
			next;
			mes "[Hermes Tris]";
			mes "Nós Sábios somos mais estudiosos do que Magos.";
			mes "Somos muito úteis e poderosos como membros de um grupo.";
			next;
			mes "[Hermes Tris]";
			mes "Tente encontrar um sábio para explorar lugares perigosos.";
			mes "Nossa sabedoria será muito útil para seu grupo...";
			close;
		}
	}
}

// ------------------------------------------------------------------
job_sage,50,165,4	script	Ajudante de Teste#sageq	8_F_GIRL,{
	mes "[Ajudante de Teste]";
	mes "Bem vindo ao salão do exame prático para Sábio.";
	mes "Se desejas fazer o teste agora, entre na sala de espera.";
	next;
	mes "[Ajudante de Teste]";
	mes "Caso haja alguém fazendo o teste, por favor aguarde até ele acabar.";
	mes "O progresso do teste é anunciado no mapa.";
	mes "Um anúncio será feito quando a próxima pessoa estiver pronta para sair da sala de espera.";
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
	monster(strnpcinfo(NPC_MAP),111,102,"Valor Numérico",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,102,"Física",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,102,"História",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Geografia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Astronomia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Meteorologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Arquitetura",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Controle",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Instrumentologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Estatísticas;",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Métodos Gráficos",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,102,"Língua",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Sitologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Dietética",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),111,93,"Arquitetura Paisagista",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,93,"Antropologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,93,"Biologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),120,93,"Ética",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),107,98,"Economia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),107,98,"Política",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),107,98,"Fotografia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),124,98,"Dendrologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),124,98,"Higiene",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	monster(strnpcinfo(NPC_MAP),124,98,"Sociologia",LUNATIC,1,strnpcinfo(NPC_NAME)+"::OnMobDead2");
	initnpctimer;
	end;

	OnSummon3:
	.MyMobs = 1;
	monster(strnpcinfo(NPC_MAP),116,97,"Estágio Acadêmico",WHISPER,1,strnpcinfo(NPC_NAME)+"::OnMobDead");
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
		mapannounce(strnpcinfo(NPC_MAP),strcharinfo(CHAR_NAME)+", derrotou todos os monstros do primeiro estágio.",bc_map);
		donpcevent(strnpcinfo(NPC_NAME)+"::OnSummon2");
	}
	end;

	OnMobDead2:
	--.SgMobs;
	if (.SgMobs < 1) {
		stopnpctimer;
		mapannounce(strnpcinfo(NPC_MAP),strcharinfo(CHAR_NAME)+", derrotou todos os monstros do segundo estágio.",bc_map);
		donpcevent(strnpcinfo(NPC_NAME)+"::OnSummon3");
	}
	end;

	OnMobDead3:
	--.MyMobs;
	if (.MyMobs < 1) {
		stopnpctimer;
		killmonsterall("job_sage");
		mapannounce(strnpcinfo(NPC_MAP),"Parabéns, "+strcharinfo(CHAR_NAME)+". Você passou no teste.",bc_map);
		sageq = 8;
		donpcevent("Sague_Test_Warp#sageq::OnEnable");
	}
	end;

	OnTimer1000:
	mapannounce(strnpcinfo(NPC_MAP),"O exame prático começou.",bc_map);
	end;

	OnTimer2000:
	mapannounce(strnpcinfo(NPC_MAP),"1º teste - tempo limite 3 minutos.",bc_map);
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
	mapannounce(strnpcinfo(NPC_MAP),"Próximo candidato, entre.",bc_map);
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
	mapannounce(strnpcinfo(NPC_MAP),"Por favor volte e termine o resto da quest de sua mudança de classe.",bc_map);
	end;

	OnTimer4000:
	mapannounce(strnpcinfo(NPC_MAP),"Esse é o fim do exame prático. Próximo candidato, por favor esteja pronto.",bc_map);
	end;

	OnTimer5000:
	areawarp(strnpcinfo(NPC_MAP),100,82, 131,113,"yuno_in03",163,180);
	end;

	OnTimer7000:
	mapannounce(strnpcinfo(NPC_MAP),"Próximo candidato, entre por favor.",bc_map);
	end;

	OnTimer9000:
	donpcevent("Ajudante de Teste#sageq::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
yuno_in03,62,176,2	script	Prof. de História#sageq	4_M_MANAGER,{
	if (BaseJob == Job_Mage) {
		if (sageq == 9) {
			if (!sageq2) {
				mes "[Professor de História]";
				mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+","+strcharinfo(CHAR_NAME)+".";
				mes "Estou feliz em conhecê-l"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Meu nome é Saphien Layless, eu fui designado para ensinar sobre a Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Antes de iniciar a aula, vou precisar de algum item que seja relacionado à Árvore de Yggdrasil.";
				mes "É para melhor compreensão da Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Sementes ou frutos da árvore seria bom.";
				mes "Eu sei que é difícil de encontrar, mas tente.";
				sageq2 = 1;
				changequest(2047,2050);
				close;
			} else {
				if (countitem(Yggdrasilberry)) {
					mes "[Saphien Layless]";
					mes "Oh, você trouxe-os com você?";
					mes "Excelente!";
					mes "Você trouxe o Fruto de Yggdrasil!";
				} else if (countitem(Seed_Of_Yggdrasil)) {
					mes "[Saphien Layless]";
					mes "Hmm, você se preparou para a aula?";
					mes "Vamos ver ...";
					mes "Oh! Então você me trouxe a Semente de Yggdrasil?";
				} else if (countitem(Leaf_Of_Yggdrasil) > 0) {
					mes "[Saphien Layless]";
					mes "Hmm, você se preparou para a aula?";
					mes "Vamos ver...";
					mes "A Folha de Yggdrasil...";
				} else {
					mes "[Saphien Layless]";
					mes "Eu disse-lhe para me trazer algum item relacionado a Yggdrasil.";
					close;
				}
				next;
				mes "[Saphien Layless]";
				mes "Ok, agora estou começando a aula.";
				mes "Ouça com atenção, eu não vou aceitar você cochilando no meio da aula.";
				next;
				mes "[Saphien Layless]";
				mes "A raíz deste mundo, Yggdrasil, é uma árvore gigantesca.";
				mes "Sai da raíz de todo o continente de Rune-Midgard e suas folhas alcançam o céu.";
				next;
				mes "[Saphien Layless]";
				mes "Fora deste continente, há no oceano onde uma cobra gigante chamada Yormungandr e vive enrolada.";
				mes "O mundo como nós o conhecemos consiste em 3 lugares: Asgard, Midgard e Utgard.";
				next;
				mes "[Saphien Layless]";
				mes "Utgard é onde todos os titãs vivem.";
				next;
				mes "[Saphien Layless]";
				mes "Midgard é onde todos os humanos vivem.";
				next;
				mes "[Saphien Layless]";
				mes "E Asgard é onde os deuses vivem...";
				mes "Uma árvore de cinzas, tendo raiz no meio do continente de Rune-Midgard, que é Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Este continente nasceu do coração de Ymir, e Yggdrasil detém os continentes juntos.";
				mes "Segurando-as com as suas 3 raízes.";
				mes "Estas raízes se alongam em 3 lugares diferentes.";
				next;
				mes "[Saphien Layless]";
				mes "A primeira raíz atinge Asgard onde os deuses vivem e onde nós...";
				mes "Meros seres humanos, ainda não exploramos ou experimentamos.";
				next;
				mes "[Saphien Layless]";
				mes "A segunda raiz atinge Jotunnheim onde todos os gigantes vivem.";
				mes "Já nos disseram que este nome, vem muitas vezes através de mitos e lendas.";
				next;
				mes "[Saphien Layless]";
				mes "O terceira chega em Niflheim.";
				mes "Esse lugar é rumores de ser coberta com uma neblina espessa e negra.";
				next;
				mes "[Saphien Layless]";
				mes "Itens, como Semente de Yggdrasil, Fruto de Yggdrasil e Folha de Yggdrasil.";
				mes "São partes da Árvore de Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Fruto de Yggdrasil tem um aroma fascinante.";
				mes "Que é espalhado para restaurar HP e SP cheio de uma vez.";
				next;
				mes "[Saphien Layless]";
				mes "As Sementes de Yggdrasil que tem o perfume de uma flor que floresce.";
				mes "E o sabor da castanha é de flores das própias raizes que fazem este gosto tão fascinante.";
				next;
				mes "[Saphien Layless]";
				mes "A Folha de Yggdrasil, que é preenchida com a força vital ressuscita os mortos.";
				mes "Trazendo-os de volta a este mundo.";
				next;
				mes "[Saphien Layless]";
				mes "Finalmente...";
				mes "Se por algum acaso você descobrir uma maneira de chegar em Asgard.";
				mes "No futuro, espero que você ache a Árvore de Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Mesmo que a história da Árvore Yggdrasil só existe em mitos e lendas.";
				mes "Nós Sábios somos obrigados a descobrir a verdade da Árvore Yggdrasil.";
				next;
				mes "[Saphien Layless]";
				mes "Isso é o fim da aula de hoje.";
				mes "Anote os artigos que você aprendeu hoje e tente lembrar-se tanto quanto possível.";
				next;
				mes "[Saphien Layless]";
				mes "Na próxima aula, você vai escrever uma tese sobre Yggdrasil...";
				mes "Por favor, traga os seguintes itens para se preparar para a aula.";
				next;
				mes "[Saphien Layless]";
				mes "^3355ff1 Plumas de Ave^000000 que será usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que serão usados como papel,";
				mes "^3355ff1 Tronco^000000 que será usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que será utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que serão utilizados para a realização da tinta de polvo.";
				next;
				sageq2 = 0;
				sageq = 10;
				changequest(2050,2051);
				mes "[Saphien Layless]";
				mes "Vou ajudá-lo a escrever a sua tese, quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+" com todos esses itens.";
				mes "Estou ansioso para a próxima aula com você.";
				close;
			}
		} else if (sageq == 10) {
			if (!countitem(Feather_Of_Birds) && !countitem(Animals_Skin) && !countitem(Wooden_Block) && !countitem(Chinese_Ink) && !countitem(Empty_Bottle)) {
				mes "[Saphien Layless]";
				mes "Não tenho a certeza de que você está pront"+(Sex == SEX_MALE ? "o":"a")+" para escrever uma tese.";
				mes "Eu já informei a você do que você precisa.";
				next;
				mes "[Saphien Layless]";
				mes "^3355ff1 Plumas de Ave^000000 que será usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que serão usados como papel,";
				mes "^3355ff1 Tronco^000000 que será usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que será utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que serão utilizados para a realização da tinta de polvo.";
				next;
				mes "[Saphien Layless]";
				mes "Eu vou ajudá-l"+(Sex == SEX_MALE ? "o":"a")+" a escrever a sua tese.";
				mes "Mas, por favor, traga todos os itens com você.";
				close;
			} else {
				delitem(Feather_Of_Birds,1);
				delitem(Animals_Skin,1);
				delitem(Wooden_Block,1);
				delitem(Chinese_Ink,1);
				delitem(Empty_Bottle,1);
				mes "[Saphien Layless]";
				mes "Agora, você pode escrever sua tese.";
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
				mes "O oceano é envolto por";
				switch (select("Um galho gigante","Uma cobra gigante","Uma tartaruga gigante","Um dragão gigante")) {
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
					mes "Um dragão gigante.";
					break;
				}
				mes "O continente é composto por três locais, tais como,";
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
					mes "Utgard, onde os titãs vivem,";
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
				switch (select("Abguard, onde vivem deuses","Asgard, onde vivem deuses","Schwarzwald, onde cidadãos vivem","Prontera, a capital")) {
					case 1:
					.@sgpoint += 1;
					mes "Abguard, onde vivem os deuses.";
					break;
					case 2:
					mes "Asgard, onde vivem os deuses.";
					break;
					case 3:
					.@sgpoint += 1;
					mes "Schwarzwald, onde os cidadãos vivem.";
					break;
					case 4:
					.@sgpoint += 1;
					mes "Prontera, a capital de Rune-Midgard.";
					break;
				}
				next;
				if (.@sgpoint) {
					mes "[Saphien Layless]";
					mes "Eu não acho que você pode enviar seus trabalhos para o reitor.";
					mes "Vá estudar mais e tentar novamente!";
					close;
				}
				next;
				if (.@sgpoint) {
					mes "[Saphien Layless]";
					mes "Eu não acho que você pode enviar seus trabalhos para o reitor.";
					mes "Vá estudar mais e tentar novamente!";
					close;
				} else {
					mes "..........";
					next;
					mes "....................";
					next;
					mes ".................................";
					next;
					mes "[Saphien Layless]";
					mes "Oh, você já terminou?";
					mes "Bem feito.";
					sageq = 15;
					changequest(2051,2052);
					getitem(Book,1);
					next;
					mes "[Saphien Layless]";
					mes "Eu suponho que você esteja pront"+(Sex == SEX_MALE ? "o":"a")+" para apresentar seu trabalho para o reitor.";
					mes "Se você vai passar o teste ou não é sua decisão.";
					next;
					mes "Agora leve essa tese que acabou de escrever para nosso reitor.";
					mes "Ele continuará com os testes.";
					close;
				}
			}
		} else if (sageq == 15) {
			mes "[Saphien Layless]";
			mes "Você pode ter apenas uma chance de escrever sua tese antes de se tornar um Sábio.";
			mes "Então por favor, siga em frente.";
			close;
		} else {
			mes "[Saphien Layless]";
			mes "Não tenho certeza se você tem negócios comigo, mas por favor, volte mais tarde.";
			mes "Tenho algumas questões para pensar..";
			close;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "[Saphien Layless]";
			mes "O que você quer?";
			mes "Você não é um dos meus estudantes?";
			mes "Oh, não importa de qualquer maneira.";
			mes "Você não seria um sábio, sem graduar-se nesta academia...";
			next;
			mes "[Saphien Layless]";
			mes "Em qualquer caso, é necessário estudar o passado.";
			mes "Para melhor compreender o presente e prever o futuro...";
			mes "Esta frase contém toda a verdade do mundo.";
			next;
			mes "[Saphien Layless]";
			mes "Eu acho que você está trilhando o caminho certo...";
			mes "Um destes dias você vai olhar para trás para este momento e perceber que mudou sua vida.";
			close;
		} else {
			mes "[Saphien Layless]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+", eu sou responsável por estudos históricos aqui na academia.";
			next;
			mes "[Saphien Layless]";
			mes "O mundo como nós sabemos que é uma sequência de acontecimentos.";
			mes "Que é descrito nos registros das idades.";
			mes "São acontecimentos históricos que moldaram o mundo como ele é hoje.";
			mes "Portanto, conhecer o passado significa que você vai entender melhor o presente e o futuro";
			next;
			mes "[Saphien Layless]";
			mes "Refletir sobre seu passado.";
			mes "Você vai ver o seu caminho no futuro...";
			close;
		}
	}
}

// ------------------------------------------------------------------
yuno_in03,32,102,1	script	Prof. de Biologia#sageq	4_M_SAGE_C,{
	if (BaseJob == Job_Mage) {
		if (!sageq2) {
			mes "[Professor]";
			mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" à minha classe.";
			mes "Você ganhou bons resultados no exame prático?";
			mes "Meu nome é Lucius Celsus, o perito da Biologia.";
			next;
			mes "[Lucius Celsus]";
			mes "Huh ...";
			mes "Quão rude de você!";
			mes "Você está previsto para se apresentar para mim tão logo eu vos saúdo!";
			mes "Qual é o seu nome, jovem?";
			next;
			select(strcharinfo(CHAR_NAME));
			mes "[Lucius Celsus]";
			mes "Então, você está ciente do assunto que você está estudando?";
			mes "Como você sabe, o seu tema de estudo é de monstros.";
			mes "Quantas vezes você lutou com monstros?";
			next;
			if (select("Nunca contei","Algumas vezes, eu acho..."));
			mes "[Lucius Celsus]";
			mes "Sim, é isso que eu adivinhei sobre você.";
			mes "Você é apenas "+(Sex == SEX_MALE ? "um garoto":"uma garota")+" inteligente.";
			mes "No entanto, tenho certeza que você vai encontrar a maioria dos monstros referidos na minha palestra.";
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
			mes "Quando tiver todos os itens, volte então podemos começar a sua aula.";
			close;
		} else if (sageq2 >= 1 && sageq2 <=3) {
			switch (sageq2) {
				case 1: setarray(.@items[0],962, 1052,1023); break;
				case 2: setarray(.@items[0],960, 966, 950);  break;
				case 3: setarray(.@items[0],1050,960, 963);  break;
			}
			if (countitem(.@items[0]) < 5 && countitem(.@items[1]) < 5 && countitem(.@items[2]) < 5) {
				mes "[Lucius Celsus]";
				mes "O quê, você já esqueceu?";
				mes "Ouça com atenção desta vez.";
				next;
				mes "[Lucius Celsus]";
				mes "Traga para mim os seguintes itens:";
				mes "5 ^3355ff"+getitemname(.@items[0])+"^000000.";
				mes "5 ^3355ff"+getitemname(.@items[1])+"^000000.";
				mes "5 ^3355ff"+getitemname(.@items[2])+"^000000.";
				close;
			} else {
				mes "[Lucius Celsus]";
				mes "Você mostrou um grande esforço para reunir todas esses itens.";
				mes "Bem, eu não tenho certeza se você reuniu por si próprio ou comprou nas lojas...";
				next;
				mes "[Lucius Celsus]";
				mes "Começaremos então seu teste.";
				next;
				mes "Os monstros que dropam esses itens têm algo em comum.";
				mes "Você pode me dizer o que essa semelhança é?";
				next;
				switch (select("Propriedade de água","São peixes","São agressivos","São monstros.")) {
					case 1:
					mes "[Lucius Celsus]";
					mes "Sim, eles possuem a propriedade de água e ao mesmo tempo, eles são peixes.";
					mes "A maioria dos monstros aquaticos são fortes.";
					mes "Por isso eles são atribuídos com a propriedade de água.";
					break;
					case 2:
					mes "[Lucius Celsus]";
					mes "Sim, eles possuem a propriedade de água e ao mesmo tempo, eles são peixes.";
					mes "A maioria dos monstros aquaticos são fortes.";
					mes "Por isso eles são atribuídos com a propriedade de água.";
					break;
					case 3:
					mes "[Lucius Celsus]";
					mes "...Eu não sabia que Fens eram agressivos, é verdade.";
					mes "Ou será que Marina e equipe Plânkton vão perturbar até começar uma luta com você?";
					next;
					mes "[Lucius Celsus]";
					mes "Todos os monstros que você obteve estes itens não são-agressivos...";
					mes "Eles são todos peixes e possuem propriedade de água.";
					break;
					case 4:
					mes "[Lucius Celsus]";
					mes "Que...?!";
					mes "Você está aqui para estudar sobre monstros específicos!";
					mes "*Suspiro*";
					mes "Eles são todos os peixes e possui propriedade de água.";
					break;
				}
				next;
				mes "[Lucius Celsus]";
				mes "Nem todos os monstros da classe de peixes possuem a propriedade de água.";
				mes "Mas a maioria deles tem.";
				mes "Então, que tipo de mágica seria melhor atacar em monstros com classe de peixes?";
				next;
				switch (select("Relâmpago","Lanças de Fogo","Tempestade de Raios","Rajada Congelante")) {
					case 1:
					mes "[Lucius Celsus]";
					mes "Hmm, Relâmpago, que possui a propriedade vento.";
					mes "Funciona melhor em monstros de propriedade da água.";
					mes "Embora você possa querer ser cuidadoso com os monstros que reconhecem a magia.";
					break;
					case 2:
					mes "[Lucius Celsus]";
					mes "O quê?!";
					mes "Lanças de Fogo!";
					mes "O fogo não pode bater a água!";
					mes "A maioria dos peixes são atribuídos com a propriedade de água.";
					mes "Portanto, eles são fracos a propriedade vento.";
					break;
					case 3:
					mes "[Lucius Celsus]";
					mes "Sim, magia Tempestade de Raios é bom...";
					mes "É um feitiço propriedade da vento.";
					mes "No entanto, você terá problemas se você usar a magia em um local mal escolhido.";
					break;
					case 4:
					mes "[Lucius Celsus]";
					mes "Não consigo entender...";
					mes "Esta questão pede-lhe para escolher uma propiedade forte contra a de água!";
					mes "Logicamente, qualquer magia que possui a propriedade de água.";
					mes "Não pode ser eficiente contra os monstros atributo água!";
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
				mes "Então continuaremos a aula sobre monstros insetos.";
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
				mes "O quê, você já se esqueceu que eu te disse?";
				mes "Da próxima vez preste mais atenção!!!";
				next;
				mes "[Lucius Celsus]";
				mes "5 ^3355ff"+getitemname(.@items[0])+"^000000,";
				mes "5 ^3355ff"+getitemname(.@items[1])+"^000000,";
				mes "5 ^3355ff"+getitemname(.@items[2])+"^000000,";
				close;
			} else {
				mes "[Lucius Celsus]";
				mes "Então, você viu insetos durante a coleta esses itens?";
				mes "Ah bem, eu acredito que você fez um bom trabalho com a tarefa.";
				next;
				mes "[Lucius Celsus]";
				mes "Insetos não compartilham a mesma propriedade na maioria das vezes.";
				mes "Você deve pensar duas vezes antes de lançar um feitiço em um inseto.";
				next;
				mes "[Lucius Celsus]";
				mes "É notável que os insetos podem detectar objetos escondidos.";
				mes "Portanto, toda a habilidade esconderijo.";
				mes "Tais como a habilidade Esconderijo ou Furtividade não funciona em insetos.";
				next;
				mes "[Lucius Celsus]";
				mes "Alguns insetos formam um grupo e vivem juntos.";
				mes "Eles são controlados pelo chefe do grupo...";
				next;
				mes "[Lucius Celsus]";
				mes "Por exemplo, a rainha Maya...";
				mes "Abelha-Ranha, a rainha dos Zangões.";
				mes "Ou Besouro-Ladrão Dourado, o rei dos Besouros-Ladrão ...";
				next;
				mes "[Lucius Celsus]";
				mes "Você não pode vencer esses monstros chefes sozinho.";
				mes "É melhor você formar um grupo se você quer lutar com eles.";
				next;
				mes "[Lucius Celsus]";
				mes "Isso é o fim da minha aula...";
				mes "É hora de você escrever uma tese.";
				mes "Traga-me os seguintes itens para a escrita da tese.";
				next;
				mes "[Lucius Celsus]";
				mes "^3355ff1 Plumas de Ave^000000 que será usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que serão usados como papel,";
				mes "^3355ff1 Tronco^000000 que será usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que será utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que serão utilizados para a realização da tinta de polvo.";
				next;
				sageq2 = 0;
				sageq = 12;
				if (questprogress(2056)) { changequest(2056,2051); }
				else if (questprogress(2057)) { changequest(2057,2051); }
				else if (questprogress(2058)) { changequest(2058,2051); }
				else if (questprogress(2059)) { changequest(2059,2051); }
				next;
				mes "[Lucius Celsus]";
				mes "Vou ajudá-lo a escrever a tese quando você trazer todos esses itens.";
				mes "Você está quase lá.";
				close;
			}
		} else if (sageq == 12) {
			if (!countitem(Feather_Of_Birds) && !countitem(Animals_Skin) && !countitem(Wooden_Block) && !countitem(Chinese_Ink) && !countitem(Empty_Bottle)) {
				mes "[Lucius Celsus]";
				mes "O quê, você tem certeza que você está pront"+(Sex == SEX_MALE ? "o":"a")+"?";
				mes "Bem... Ouça com atenção desta vez.";
				next;
				mes "[Lucius Celsus]";
				mes "Traga os itens:";
				mes "^3355ff1 Plumas de Ave^000000 que será usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que serão usados como papel,";
				mes "^3355ff1 Tronco^000000 que será usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que será utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que serão utilizados para a realização da tinta de polvo.";
				next;
				mes "[Lucius Celsus]";
				mes "Você tem feito muito bem, eu acho que você pode fazer isso sem nenhum problema.";
				mes "Vá buscá-los.";
				mes "Divirta-se.";
				close;
			} else {
				delitem(Feather_Of_Birds,1);
				delitem(Animals_Skin,1);
				delitem(Wooden_Block,1);
				delitem(Chinese_Ink,1);
				delitem(Empty_Bottle,1);
				mes "Ainda bem que trouxe todos os itens.";
				mes "Bem, eu não espero que você escreva uma tese absurdamente boa apesar de tudo...";
				next;
				mes "[Lucius Celsus]";
				mes "Bem, se você quer mesmo escrever sozinh"+(Sex == SEX_MALE ? "o":"a")+".";
				mes "Posso deixar, mas...";
				mes "Vou dar-lhe um trabalho de gênio incrível.";
				mes "Basta fazer uma cópia do mesmo em seu nome.";
				next;
				mes "[Lucius Celsus]";
				mes "Você tem um problema com isso?";
				mes "Resistente, que é o meu estilo.";
				mes "Basta fazer o que eu digo.";
				next;
				mes "..........";
				next;
				mes "....................";
				next;
				mes ".................................";
				next;
				mes "Monstros variam de acordo com a aparência física.";
				mes "E possuem várias propriedades elementares.";
				mes "Você deve estar ciente das propriedades de cada monstro.";
				mes "E estar ciente de que certas magias funcionam de forma diferente em diferentes monstros.";
				mes "Você deve ter um cuidado especial dos bens sagrados e monstros de propriedade de sombra.";
				mes "Esses monstros são mais perigosos.";
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
				mes "Você trouxe tudo?";
				mes "Ok, então acabou.";
				mes "Você não será capaz de escrever uma outra tese de novo, lide com isso com cuidado.";
				getitem(Book,1);
				next;
				mes "[Lucius Celsus]";
				mes "Mostre esta obra-prima para o reitor.";
				mes "Então, ele lhe dará sua pós-graduação da academia. Até mais.";
				close;
			}
		} else if (sageq == 15) {
			mes "[Lucius Celsus]";
			mes "O que você está fazendo aqui, vai mostrar a sua tese para o reitor!";
			mes "Não gaste mais tempo aqui.";
			close;
		} else {
			mes "[Professor]";
			mes "Ahhh.!";
			mes "Meu cérebro vai explodir em breve!";
			mes "Por que devo ter para preparar todas essas coisas?!";
			mes "Quem é você?!";
			mes "Não me perturbe, estou ocupado!";
			next;
			mes "[Professor]";
			mes "Se você quiser apenas ver os monstros aqui, tudo bem...";
			mes "Só não me pergunte nada.";
			close;
		}
	} else {
		mes "[Lucius Celsus]";
		mes "Hmm? O que o traz para mim?";
		mes "Você está interessado em ver monstros?";
		next;
		mes "[Lucius Celsus]";
		mes "Tome cuidado e não faça barulho.";
		mes "E mantenha suas mãos longe, alguns desses caras são perigosos para tocar.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in03,244,31,3	script	Prof. de Física#sa	2_M_PHARMACIST,{
	if (BaseJob == Job_Mage) {
		if (sageq == 13) {
			if (!sageq2) {
				mes "[Professor]";
				mes "Oi? Prazer em te conhecer, tee hee.";
				mes "Veio me ver? Oh, você é um estudante!";
				next;
				mes "[Professor]";
				mes "Sou um Professor encarregado de você, Aebecee George.";
				mes "Então... está feliz em falar comigo?";
				mes "Você não é feliz?";
				next;
				mes "[Aebecee George]";
				mes "Entretando, antes de inicar a aula, preciso que me faça... um favor.";
				mes "Não se assuste, é apenas um favor.";
				next;
				mes "[Aebecee George]";
				mes "Por favor traga-me ^3355ff30 Pedras^000000, isso é tudo.";
				mes "Não é muito difícil, né?";
				next;
				sageq2 = 1;
				changequest(2049,2060);
				mes "[Aebecee George]";
				mes "Por que não pede a um amigo Gatuno?";
				mes "Iniciaremos o teste assim que me entregar as pedras.";
				close;
			} else if (sageq2 == 1) {
				if (countitem(Stone) < 30) {
					mes "[Aebecee George]";
					mes "Eu pedi que me trouxesses ^3355ff30 Pedras^000000.";
					mes "Há muitas por ai, assim você não será difícil pegá-las.";
					close;
				} else {
					mes "Você me trouxe todas elas.";
					mes "Obrigado.";
					mes "Oh, pode esperar um pouquinho?";
					mes "Preciso fazer uma coisa antes de começarmos.";
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
					mes "Darei a você esses minérios elementais...";
					mes "Mas... eles não são de graça.";
					mes "Calma!";
					mes "Não pegue tão depressa.";
					mes "Escute...";
					sageq2 = 2;
					changequest(2060,2061);
					next;
					mes "[Aebecee George]";
					mes "Por favor, faça flechas usando esses itens e traga para mim, bonitas por favor.";
					mes "50 ^3355ffFlechas de Cristal^000000.";
					mes "50 ^3355ffFlechas de Pedra^000000.";
					mes "50 ^3355ffFlechas de Vento^000000.";
					next;
					mes "[Aebecee George]";
					mes "Fale com algum amigo Arqueiro, se você tiver.";
					close;
				}
			} else if (sageq2 == 2) {
				if (countitem(Crystal_Arrow) < 50 && countitem(Stone_Arrow) < 50 && countitem(Arrow_Of_Wind) < 50) {
					mes "[Aebecee George]";
					mes "O que estás fazendo aqui?";
					next;
					mes "[Aebecee George]";
					mes "Consiga esses itens e traga-os para mim:";
					mes "50 ^3355ffFlechas de Cristal^000000,";
					mes "50 ^3355ffFlechas de Pedra^000000,";
					mes "50 ^3355ffFlechas de Vento^000000.";
					mes "Peça a algum arqueiro para fazer com os minérios que lhe dei.";
					close;
				} else {
					mes "Você me trouxe todos.";
					mes "Obrigado.";
					mes "Bem, agora, vamos aos negócios.";
					next;
					mes "[Aebecee George]";
					mes "Direi uma coisa, e você anotará tudo.";
					mes "Não esqueça de grifar as coisas importantes.";
					next;
					mes "[Aebecee George]";
					mes "Magia de água é muuuuito poderosa contra magia de fogo.";
					mes "Apenas lembre desses corpulentos, bombeiros sexys, digamos, apagando o fogo com a água.";
					next;
					mes "[Aebecee George]";
					mes "Magia de vento domina totalmente a magia de água! Ah, sim.";
					mes "Pense em uma luz quente, e com isso quero dizer raio, atingindo um lago.";
					next;
					mes "[Aebecee George]";
					mes "Em termos de força, magia de terra vai ao topo contra magia de vento! Ho..";
					mes "Basta pensar em como o vento bate apaixonadamente contra o penhasco.";
					next;
					mes "[Aebecee George]";
					mes "Magia de fogo é forte contra magia de terra!";
					mes "Basta pensar em lenha, surgiu a partir da terra, em uma aconchegante lareira.";
					next;
					mes "[Aebecee George]";
					mes "O tempo passa tão rápido!";
					next;
					delitem(Crystal_Arrow,50);
					delitem(Stone_Arrow,50);
					delitem(Arrow_Of_Wind,50);
					mes "[Aebecee George]";
					mes "Quando vier para a próxima aula, traga ^3355ff1 Água Benta^000000.";
					mes "Eu espero que você tenha pelo menos um amigo Sarcedote ele pode lhe dar uma.";
					mes "Se não tiver, não machuca fazer um amigo novo.";
					sageq2 = 3;
					changequest(2061,2062);
					close;
				}
			} else if (sageq2 == 3) {
				if (!countitem(Holy_Water)) {
					mes "O que estás fazendo aqui?";
					mes "Esqueceu do que lhe disse?";
					mes "Quer que eu lembre para você?";
					next;
					mes "[Aebecee George]";
					mes "Traga ^3355ff1 Água Benta^000000,";
					close;
				} else {
					mes "[Aebecee George]";
					mes "Você me trouxe Água Benta.";
					mes "Certo, vamos começar a aula.";
					next;
					mes "[Aebecee George]";
					mes "Como na última vez, irei falar e você anotará tudinho.";
					mes "Mesmo que não entenda, apenas tente e vá com a correnteza, certo?";
					next;
					mes "[Aebecee George]";
					mes "Magia de água é fraca contra magia de vento!";
					mes "Sim, está certo.";
					mes "Basta lembrar por que você não fica com um ventilador perto de você.";
					mes "Quando estás tomando um banho quente.";
					next;
					mes "[Aebecee George]";
					mes "Magia de vento é fraca contra magia de terra!";
					mes "Pense como o vento não consegue, vamos dizer, penetrar uma máscara de lama facial.";
					next;
					mes "[Aebecee George]";
					mes "Magia de terra é fraca contra magia de fogo!";
					mes "Basta pensar em lenha, surgiu a partir da terra, em uma aconchegante lareira.";
					next;
					mes "[Aebecee George]";
					mes "Magia de fogo é fraca contra magia de água! Sim.";
					mes "Quando as coisas ficam quentes, é melhor borrifar as coisas em água fria.";
					mes "Não concorda.?";
					next;
					mes "[Aebecee George]";
					mes "Oh, é fim da aula.";
					mes "Então?";
					mes "Acha que aprendeu muito?";
					mes "Pode me agradecer!";
					next;
					delitem(Holy_Water,1);
					mes "[Aebecee George]";
					mes "Bem, é isso.";
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
					mes "^3355ff1 Plumas de Ave^000000 que será usado como uma caneta,";
					mes "^3355ff1 Couro de Animal^000000 que serão usados como papel,";
					mes "^3355ff1 Tronco^000000 que será usado para ligar um livro,";
					mes "^3355ff1 Tinta de Polvo^000000 que será utilizado como tinta,";
					mes "^3355ff1 Garrafa Vazia^000000 que serão utilizados para a realização da tinta de polvo.";
					close;
				}
			}
		} else if (sageq == 14) {
			if (!countitem(Feather_Of_Birds) && !countitem(Animals_Skin) && !countitem(Wooden_Block) && !countitem(Chinese_Ink) && !countitem(Empty_Bottle)) {
				mes "[Aebecee George]";
				mes "O que ainda fazes aqui";
				mes "Esqueceu do que lhe disse?";
				mes "Quer que eu lembre para você?";
				mes "Sem problemas.";
				next;
				mes "[Aebecee George]";
				mes "Traga esses itens:";
				mes "^3355ff1 Plumas de Ave^000000 que será usado como uma caneta,";
				mes "^3355ff1 Couro de Animal^000000 que serão usados como papel,";
				mes "^3355ff1 Tronco^000000 que será usado para ligar um livro,";
				mes "^3355ff1 Tinta de Polvo^000000 que será utilizado como tinta,";
				mes "^3355ff1 Garrafa Vazia^000000 que serão utilizados para a realização da tinta de polvo.";
				next;
				mes "[Aebecee George]";
				mes "Vai vai preparar todos esses itens, não vai?";
				mes "Volte depreeesa!";
				close;
			} else {
				delitem(Feather_Of_Birds,1);
				delitem(Animals_Skin,1);
				delitem(Wooden_Block,1);
				delitem(Chinese_Ink,1);
				delitem(Empty_Bottle,1);
				mes "Okay. é agora ou nunca.";
				mes "Ensinei tudo que eu sei.";
				mes "Apenas faça sua tese com o que você parendeu comigo.";
				next;
				mes "..........";
				next;
				mes "....................";
				next;
				mes ".................................";
				next;
				mes "["+strcharinfo(CHAR_NAME)+"]";
				mes ".....Magias são dividas em 4 elementos que são:";
				switch (select("Água, Terra, Fogo e Ar","Terra, Água, Fogo e Ar","Água, Vento, Terra e Fogo.")) {
					case 1:
					mes "Água, Terra, Fogo e Ar.";
					break;
					case 2:
					mes "Terra, Água, Fogo e Ar.";
					break;
					case 3:
					mes "Água, Vento, Terra e Fogo.";
					break;
				}
				mes "Cada propriedade tem uma propriedade oposta,";
				switch (select("Vento é forte contra água","Água é forte contra fogo","Fogo é forte contra terra.")) {
					case 1:
					mes "Magia de vento é forte com magia de água.";
					break;
					case 2:
					mes "Magia de água é forte contra magia de fogo.";
					break;
					case 3:
					mes "Magia de fogo é forte contra magia de terra.";
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
				mes "Tee hee, então... terminou com suas teses?";
				mes "O que acha do seu trabalho?";
				mes "Acho que foi bem.";
				mes "Não esqueça, essa é a primeira e última vez que você escreverá uma tese, certo?";
				getitem(Book,1);
				next;
				mes "[Aebecee George]";
				mes "Certo, agora você pode mostrar ao reitor sua tese que acabou de escrever.";
				close;
			}
		} else if (sageq == 15) {
			mes "[Aebecee George]";
			mes "O que você está fazendo aqui?";
			mes "Não quer se encontrar com o reitor e lhe mostrar sua tese?";
			close;
		} else {
			mes "[Professor]";
			mes "Veio que aqui para perambular? Huh...?";
			mes "Bem, se não estás aqui para negócios, deve estár por...";
			next;
			mes "[Professor]";
			mes "...por PRAZER.";
			close;
		}
	} else {
		mes "[Professor]";
		mes "Veio que aqui para perambular? Huh...?";
		mes "Bem, se não estás aqui para negócios, deve estár por...";
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
			mes "Eu posso ver que você está intrigado com as maravilhas da magia.";
			mes "Então, que tipo de negócio leva-o para mim?";
			next;
			switch (select("Gostaria de ser Sábio","Saber sobre os testes","Nada")) {
				case 1:
				mes "[Kayron Grik]";
				mes "Hm? Deseja se tornar "+(Sex == SEX_MALE ? "um Sábio":"uma Sábia")+"?";
				mes "Pois bem, eu gostaria de sugerir algumas coisas que são necessárias de um sábio.";
				next;
				mes "[Kayron Grik]";
				mes "Sábios são aqueles que promovem o desenvolvimento do continente.";
				mes "Através do interminável estudo e gravação de todo o conhecimento relacionado a este mundo.";
				mes "Tornando-se um sábio é mais do que apenas uma mudança do traje:";
				mes "É um trabalho importante.";
				mes "Onde você deve estar sempre consciente do seu dever e responsabilidade para o povo.";
				next;
				mes "[Kayron Grik]";
				mes "Você pode querer introduzir um pedido de inscrição para a Academia Mágica Schweicherbil.";
				mes "Eu acredito que eles podem explicar em detalhe o que você precisa para se tornar um Sábio.";
				close2; cutin("",255); end;
				case 2:
				mes "[Kayron Grik]";
				mes "Os testes...";
				mes "hmm....";
				mes "Apesar de que é o que dizemos.";
				mes "É muito inadequado para pensar em se tornar um sábio como uma mera mudança de classe.";
				next;
				mes "[Kayron Grik]";
				mes "Para ser um Sábio, você deve se inscrever para a Academia Mágica Schweicherbil.";
				mes "Você vai então fazer o exame para entrar.";
				next;
				mes "[Kayron Grik]";
				mes "Após o exame, você será designado para estudar um tema específico...";
				mes "E... Finalmente, vai apresentar sua dissertação para a universidade.";
				next;
				mes "[Kayron Grik]";
				mes "Eu sou o único que avaliará sua dissertação.";
				mes "Quando você passar em todos os cursos, você vai se tornar "+(Sex == SEX_MALE ? "um Sábio":"uma Sábia")+".";
				next;
				mes "[Kayron Grik]";
				mes "Por favor, visite a Academia Mágica Schweicherbil.";
				mes "Um jovem chamado Sábio Metheus Sylphe vai aceitar o seu pedido.";
				close2; cutin("",255); end;
				case 3:
				mes "[Kayron Grik]";
				mes "Veja como você tem tempo livre de sobra.";
				mes "Encorajo-vos a examinar quantos livros você poder.";
				mes "Você pode encontrar e pesquisar todos os assuntos mundanos dentro de suas páginas.";
				next;
				mes "[Kayron Grik]";
				mes "Ah sim, você não pode se tornar a pessoa mais inteligente.";
				mes "Apenas por ler todos os livros em torno de você...";
				mes "No entanto, para um sábio, como eu.";
				mes "O conhecimento encontrado nos livros é mais importante.";
				close2; cutin("",255); end;
			}
		} else if (sageq == 15) {
			if (SkillPoint) {
				mes "Você ainda possui Pontos de Habilidade.";
				mes "Antes de decidir se tornar um Sábio, use seus pontos de habilidade.";
				close2; cutin("",255); end;
			} else {
				if (!countitem(Book)) {
					mes "Hmm? O que aconteceu?";
					mes "Onde você deixou a sua dissertação?";
					mes "Por favor, traga-a para mim, para que você possa lhe formar na Academia.";
					next;
					mes "[Kayron Grik]";
					mes "Espere... Bocê não perdeu o livro de sua tese, não é?";
					mes "Bem... Sinto muito.";
					mes "Mas é lamentável que você não será capaz ter outra chance de escrever mais um livro.";
					close;
				} else {
					mes "Ho... Então?";
					mes "Você finalmente concluiu sua dissertação?";
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
					mes "Embora seja praticamente escrito, é bem feito para um iniciante.";
					mes "Ah, sim... você parece ser proficiente em estudar.";
					next;
					jobchange(Job_Sage);
					completequest(2052);
					callfunc("ClearJobQuest2nd",16);
					mes "[Kayron Grik]";
					mes "Parabéns!";
					mes "Você se tornou "+(Sex == SEX_MALE ? "um Sábio":"uma Sábia")+".";
					mes "Lembre-se sempre de manter uma atitude estudiosa e analítica.";
					next;
					mes "[Kayron Grik]";
					mes "Além disso, mantenha esta dissertação e trate-a com cuidado.";
					mes "Pois é um livro só de ter sido escrito.";
					mes "Você pode ter necessidade de usá-lo algum dia.";
					mes "E você poderá visualizar ele para responder sua dúvida.";
					next;
					mes "[Kayron Grik]";
					mes "Pois então...";
					mes "Que Deus possa encher o seu caminho de conhecimento.";
					mes "Estude com diligência!";
					close2; cutin("",255); end;
				}
			}
		} else {
			mes "Tornar-se sábio não é tão simples como você pensa.";
			mes "Você não pode tornar-se sábio, porque suas habilidades mágicas são insuficientes...";
			next;
			mes "[Kayron Grik]";
			mes "Estude diligentemente, e volte quando terminar a sua dissertação.";
			mes "Até lá... Adeus!";
			close2; cutin("",255); end;
		}
	} else {
		if (BaseJob == Job_Sage) {
			mes "Nosso conhecimento é a mola mestra da atividade.";
			mes "Que ajuda o reino a ser desenvolvido mais rapidamente.";
			mes "Por favor, mantenha isto em mente:";
			mes "É preciso estudar e gravar tudo o que você descobriu.";
			mes "Para que todos no reino possam se beneficiar.";
			close2; cutin("",255); end;
		} else {
			mes "Embora tenhamos vindo a estudar este mundo por um longo tempo.";
			mes "Sei que estudar, por si só irá atender todas as necessidades do povo.";
			mes "Outras classes são tão importantes para o bem-estar de Rune-Midgard...";
			next;
			mes "[Kayron Grik]";
			mes "No entanto, se acontecer de você encontrar um sábio no caminho, espero que você ajude-o.";
			mes "E se você fizer isso, ele deve recontribuir em espécie ...";
			close2; cutin("",255); end;
		}
	}
}
