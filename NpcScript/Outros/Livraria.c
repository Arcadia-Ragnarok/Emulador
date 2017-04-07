/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Script: Spell Master/ eAthena/ rAthena/ Hercules                |
| - Nota: Livraria de Prontera                                      |
\*-----------------------------------------------------------------*/

prt_in,168,56,4	script	Enciclop�dia#prt	HIDDEN_NPC,{
	mes "^FF0000[Enciclop�dia]^000000";
	mes "Esta � uma Enciclop�dia de Monstros contendo informa��es sobre monstros de propriedade de �gua, Vento e Fantasma.";
	next;
	.@loop1 = 1;
	while(.@loop1) {
		.@loop2 = 1;
		switch(select("Monstros de �gua","Monstros de Vento","Monstros Fantasma","Cancelar")) {
			case 1:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 1: Monstros de �gua Pequenos]^000000";
					mes "1. Pl�ncton";
					mes "Mesmo que eles pare�am insignificantemente pequenos, tenha cuidado para n�o pisar neles.";
					mes "O plancton � leve e pode flutuar na �gua.";
					next;
					mes "^FF0000[Vol. 1: Monstros de �gua Pequenos]^000000";
					mes "2. Kukre";
					mes "Kukre parece melhor do que Thief Bugs mas, basicamente, pilha itens exatamente o mesmo.";
					mes "Felizmente, eles n�o atacam jogadores de um grupo.";
					next;
					mes "^FF0000[Vol. 1: Monstros de �gua Pequenos]^000000";
					mes "3. Hydra";
					mes "Monstros Vegetais que vivem perto da �gua ou no mar profundo que atacam usando tent�culos.";
					mes "Como um grupo, eles s�o uma dor de cabe�a.";
					next;
					mes "^FF0000[Vol. 1: Monstros de �gua Pequenos]^000000";
					mes "4. Vadon";
					mes "Coberto em uma casca grossa e protetora, Vadons ataca com pin�as poderosas.";
					mes "Embora pare�am caranguejos, sua carne n�o pode ser comida.";
					next;
					mes "^FF0000[Vol. 1: Monstros de �gua Pequenos]^000000";
					mes "5. Marina";
					mes "Medusa transparentes que atacam esticando seus corpos flex�veis de uma forma semelhante a um chicote.";
					mes "Eles vivem em lugares frescos perto da �gua.";
					next;
					mes "^FF0000[Vol. 1: Monstros de �gua Pequenos]^000000";
					mes "6. Cornutus";
					mes "Monstro benignos que se escondem em conchas duras, em forma de turbante.";
					mes "Eles tentam viver o mais pacificamente poss�vel neste mundo louco e louco.";
					next;
					mes "^FF0000[Vol. 1: Monstros de �gua Pequenos]^000000";
					mes "7. Magn�lia";
					mes "Criaturas bonitas que aparecem como grandes frigideiras cozinhando um ovo.";
					mes "Eles espancam impiedosamente todos os que se op�em a eles.";
					next;
					mes "^FF0000[Vol. 1: Monstros de �gua Pequenos]^000000";
					mes "8. Esfera Marinha";
					mes "Estranhos monstros redondos que pulsam com energia destrutiva.";
					mes "Reunir seus Detonadores pode ser �til para Alquimistas.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "1. Poring";
					mes "Pequenos monstros rosados ??feitos de uma subst�ncia gelatinosa viva.";
					mes "Eles s�o bonitos, e se movem saltando.";
					mes "^0099FFItem Drops^000000: Jellopy, Sticky Mucus, Apple, Empty Bottle, Red Herb";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "2. Sapo de Roda";
					mes "Sapos anf�bios que t�m um croar irritante.";
					mes "Em alguns pa�ses, suas pernas s�o uma iguaria.";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "3. Esporo";
					mes "Monstros como cogumelos que utilizam a reprodu��o micelial.";
					mes "Geralmente vivem em florestas ou masmorras.";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "4. Goblin";
					mes "Pequena, m�scara vestindo monstros que atacam viciosamente os transeuntes.";
					mes "Parece haver diferentes tipos que usam armas diferentes.";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "5. Sapo de Thara";
					mes "sapos vermelhos que s�o muito mais fortes do que os sapos verdes de Roda.";
					mes "Eles tamb�m produzem um barulho irritante irritante.";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "6. Fen";
					mes "Um peixe azul com nariz pontiagudo e olhos tristes, incrivelmente tristes e desocupados.";
					next;
					mes "7. Martin";
					mes "Uma lula em miniatura com tent�culos em miniatura.";
					mes "Como se move atrav�s da �gua com essas pequenas coisas ainda � um mist�rio cient�fico.";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "8. Obeaune";
					mes "Uma sereia feminina que ataca com seus cabelos selvagens e fluidos.";
					mes "Se sua vers�o masculina � ou n�o Merman ainda est� em debate.";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "9. Sohee";
					mes "Um fantasma feminino que abriga um profundo ressentimento.";
					mes "Embora esteja chorando, ela pode se tornar feroz ao encontrar os vivos.";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "10. Cavalo Marinho";
					mes "Um orgulhoso cavalo de mar que parece um drag�o.";
					mes "Infelizmente, voc� n�o pode mont�-lo.";
					next;
					mes "^FF0000[Vol. 2: Monstro de �gua M�dios]^000000";
					mes "11. Deviace";
					mes "Monstro de peixe com uma boca grande presa a uma ventosa.";
					mes "Pequeno, forte, e meio que se parece com uma melancia.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 3: Monstros de �gua Grandes]^000000";
					mes "1. Ambernite";
					mes "Um monstro caracol em forma, � ofensa e defesa altamente forte.";
					mes "No entanto, � incrivelmente lento como todos os outros carac�is.";
					next;
					mes "^FF0000[Vol. 3: Monstros de �gua Grandes]^000000";
					mes "2. Peixe Espada";
					mes "Monster Fish com um nariz afiado e comprido que � como uma espada.";
					mes "Embora tenha olhos pegajosos, � um monstro perigoso.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 2:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstro m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "1. Chonchon";
					mes "Voar monstros que se movem com grande velocidade.";
					mes "Surpreendentemente, eles podem curar na presen�a de mat�ria fecal.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "2. Zang�o";
					mes "Normalmente benigno, eles atacar�o em grupos se um deles for pertubado.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "3. Arenoso";
					mes "Um monstro voador com belas asas.";
					mes "Ele escapar� teleportando se acha que est� em grave perigo.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "4. Frilldora";
					mes "Inseto pequeno min�sculo com um shell splended, joaninha-como.";
					mes "Pode sentir magia e atacar quando uma m�gica come�ar a lan�ar.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "5. Chonchon de A�o";
					mes "Semelhante a Chonchon, mas � amarelo e verde.";
					mes "Pega tudo do ch�o, por isso tome cuidado para n�o deixar cair itens.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "6. Poeira";
					mes "Este monstros voadores tem uma taxa de esquiva alta, ent�o se voc� tem baixa precis�o de ataque, voc� pode querer deix�-la sozinha.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "7. Mosca Ca�adora";
					mes "Inseto voado coberto pelo sangue de inocentes.";
					mes "� incrivelmente r�pido, bem como forte.";
					mes "Os novatos devem fugir desse monstro a todo custo.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 5: Monstro de Vento M�dio]^000000";
					mes "1. Condor";
					mes "Um p�ssaro parecido com um abutre de apar�ncia engra�ada e careca.";
					mes "Eles tendem a atacar em um grupo se um deles est� amea�ado.";
					next;
					mes "^FF0000[Vol. 5: Monstro de Vento M�dia]^000000";
					mes "2. Cobold ";
					mes "Um monstro parece um lobo beb�, mas � inteligente o suficiente para fazer e usar ferramentas.";
					mes "Embora Kobolds s�o fofos, eles s�o realmente bastante hostis.";
					next;
					mes "^FF0000[Vol. 5: Monstro de Vento M�dia]^000000";
					mes "3. Petite";
					mes "Um min�sculo e bonito drag�o voador.";
					mes "H� outro tipo de Petite que anda, mas � da propriedade da Terra.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 6: Grandes Monstro do Vento]^000000";
					mes "1. Coringa";
					mes "Um cart�o de jogo grande e encantado.";
					mes "Se voc� n�o tem boa precis�o de ataque, as apostas est�o contra voc� quando estiver lutando contra Coringa.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 3:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 7: Monstros Fantasma Pequenos]^000000";
					mes "1. Sussurro";
					mes "Um peda�o de tecido que emite vibra��es assustadoras.";
					mes "�s vezes, ele gosta de se tornar invis�vel ...";
					next;
					mes "^FF0000[Vol. 7: Monstros Fantasma Pequenos]^000000";
					mes "2. Marionette";
					mes "Um monstro renascido como uma boneca amaldi�oada que est� ligada a cordas presas a bast�es de madeira.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 8: Monstro Fantasma M�dio]^000000";
					mes "1. Eggyra";
					mes "Uma coisa estranha, ovo robotizado, que se espalha quando anda.";
					mes "Ningu�m sabe de onde v�m essas coisas.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 9: Monstros Fantasma Grande]^000000";
					mes "1. Pesadelo";
					mes "Um cavalo fantasmag�rico que irradia uma aura violeta de mal.";
					next;
					mes "^FF0000[Vol. 9: Monstros Fantasma Grande]^000000";
					mes "2. Medusa";
					mes "Monstro com cabelo composto de cobras.";
					mes "Est� espalhado boatos para transformar as pessoas em pedra se olharem em seus olhos.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 4:
			close2;
			.@loop1 = 0;
			end;
		}
	}
}

// ------------------------------------------------------------------
prt_in,159,56,4	script	Enciclop�dia#2pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclop�dia]^000000";
	mes "Esta � uma Enciclop�dia de Monstros contendo informa��es sobre monstros de Terra, Fogo e Neutro.";
	next;
	.@loop1 = 1;
	while(.@loop1) {
		.@loop2 = 1;
		switch(select("Monstros de Terra","Monstros de Fogo","Monstros Neutro","Cancelar")) {
			case 1:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "1. Fabre";
					mes "A larva fraca e pequena de Creamy.";
					mes "Embora alguns dizem que � bonito, outros descordam.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "2. Pupa";
					mes "Monstro que � a fase pupal de Fabre.";
					mes "N�o ataca, ent�o � f�cil para aprendizes matar.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "3. Bebe Selvagem";
					mes "Pequena, rosa beb� Savage.";
					mes "� desanimador saber que cresce at� ficar feio.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "4. Andre";
					mes "Uma esp�cie de formiga trabalhadora, Andr� � amarelo, muito diligente e recolhe tudo � vista para a rainha Ant.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "5. Coco";
					mes "Um pequeno esquilo com olhos escuros e penetrantes.";
					mes "Sempre est� segurando uma Acorn, e seria bonito se n�o tivesse sempre um olhar de desprezo total.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "6. Piere";
					mes "Pieres s�o formigas trabalhadoras verdes que s�o sutilmente diferentes de Andres.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "7. Fumacento";
					mes "Um pequeno guaxinim gordinho que n�o ama nada melhor do que correr.";
					mes "� rumores de usar uma folha m�gica para se tornar invis�vel!";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "8. Deniro";
					mes "Formigas trabalhadoras vermelhas que vivem para servir a Rainha.";
					mes "Se houver alguma coisa no ch�o, eles v�o busc�-la.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "9. Yoyo";
					mes "Um macaco travesso que pega qualquer coisa do ch�o.";
					mes "Eles s�o muito r�pidos e v�o se juntar a voc� se voc� atacar apenas um deles.";
					next;
					mes "10. Vitata";
					mes "Formigas gordas que curam o";
					mes "outras formigas em sua col�nia.";
					mes "matou seu vazamento de corpos ... mel?";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "11. Caramelo";
					mes "Um ador�vel porco-espinho com min�sculos espinhos.";
					mes "No entanto, ele fica incrivelmente irritado quando tocado.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "13. Giearth";
					mes "Um duende idoso que vagueia cavernas para coletar min�rios.";
					mes "Eles s�o incr�veis fumantes.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "1. Salgueiro";
					mes "Criatura renascida de uma �rvore velha.";
					mes "Suas caracter�sticas e os sons que ele faz s�o incrivelmente misteriosos.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "2. Rocker";
					mes "Um gafanhoto pregui�oso que adora tocar violino, assim como na f�bula de Esopo.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "3. Mandragora";
					mes "Embora permane�a no mesmo lugar, pode atacar o transeunte de uma dist�ncia usando os talos subterr�neos.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "4. Lobo";
					mes "Lobos selvagens, roving com manes azuis.";
					mes "Eles tendem a atacar como um bando quando mesmo um deles � amea�ado.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "5. Jib�ia";
					mes "Cobra verde que vive no florestas e desertos, s�o venenosas, e suas mordidas doem.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "6. Besouro Chifre";
					mes "Embora pare�a feroz, � realmente um inseto pac�fico.";
					mes "Vagueia em torno de campos com um som de tritura��o.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "7. Guerreiro Orc";
					mes "Um guerreiro da ra�a orgulhosa de Orcs.";
					mes "Em um momento, Orcs e seres humanos eram aliados, mas agora eles s�o inimigos amargos.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "8. Hode";
					mes "Uma enorme minhoca que normalmente se esconde debaixo da terra, geralmente pode ser encontrado no deserto.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "9. Louva-a-Deus";
					mes "Vagueia sobre campos, acenando um um f� min�sculo, umas artes marciais inteiras � baseado nos movimentos de este inseto.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "10. Selvagem";
					mes "Um javali que anda por a�, grunhido inquieto, seu �spero olhando presas tornam dif�cil acredito que era bonito como um beb�.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra M�dio]^000000";
					mes "11. Petite";
					mes "Bonito, andando Drag�o.";
					mes "H� outro tipo de Petite que voa, mas � da propriedade Vento.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 12: Grandes Monstros da Terra]^000000";
					mes "1. Rabo de Verme";
					mes "Um estranho monstro que usa chicoteando ataques com uma cauda que parece uma folha de grama.";
					next;
					mes "^FF0000[Vol. 12: Grandes Monstros da Terra]^000000";
					mes "2. Muka";
					mes "Cacto bonito comumente encontrado no deserto, tenta amea�ar transeunte com seus rosnados.";
					mes "Mas seu s�o muito engra�ados para serem assustadores.";
					next;
					mes "^FF0000[Vol. 12: Grandes Monstros da Terra]^000000";
					mes "3. P� Grande";
					mes "Embora seu nome pode ser enganoso, � realmente um grande bera.";
					mes "Anda como se possui a floresta, e ele faz.";
					next;
					mes "^FF0000[Vol. 12: Grandes Monstros da Terra]^000000";
					mes "4. Flora";
					mes "Uma planta que come o homem, suas partes s�o considerado �til para Alquimistas fazer monstros por conta pr�pria...";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 2:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 13: Small Fire Monsters]^000000";
					mes "^FF0000[Vol. 13: Monstros de Fogo Pequeno]^000000";
					mes "1. Picky";
					mes "Pintinho bonito que pode crescer e ser um Peco Peco, a menos que voc� o mata.";
					next;
					mes "^FF0000[Vol. 13: Monstros de Fogo Pequeno]^000000";
					mes "2. Filhote de Lobo do Deserto";
					mes "Um Lobo do Deserto do Beb� que se cansa de amea�ar aventureiros com o seu bonito pequenos gritos.";
					next;
					mes "^FF0000[Vol. 13: Monstros de Fogo Pequeno]^000000";
					mes "3. Horong";
					mes "Uma bola de fogo violenta e de apar�ncia estranha.";
					mes "� in�til usar habilidades escondidas perto desse esp�rito vingativo.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "1. Drops";
					mes "A vers�o do deserto do Poring que tem uma cor laranja p�lida.";
					mes "Parece um pouco mais forte do que Poring, no entanto.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "2. Salgueiro Anci�o";
					mes "A vers�o mais velha do Salgueiro";
					mes "� vermelho e pode at� usar alguma magia.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "3. Metaller";
					mes "A forma evolu�da de Rocker.";
					mes "� marrom escuro e vive no deserto.";
					mes "Este grilo vai pegar itens para cima do ch�o.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "4. Zerom";
					mes "Um escravo morto.";
					mes "Infelizmente, nem mesmo a morte trar� paz ao horas abusivas de trabalho Zerom sofre de seu Fara�.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "5. Escorpi�o";
					mes "Escorpi�es podem ser encontrados em �reas onde h� deserto.";
					mes "Tem um cor bonita, mas pode ser perigoso.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "6. Lobo do Deserto";
					mes "Lobos no deserto s�o muito mais forte do que aqueles que vivem nas florestas.";
					mes "Se voc� bater um, voc� vai tem que lidar com o bando inteiro.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "7. Frilldora";
					mes "Lagarto com um frilly, f�-como pesco�o.";
					mes "Embora pare�a rediculous, � realmente muito forte.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "8. Cobold";
					mes "Um monstro azul, lobo, que � incrivelmente fofo.";
					mes "No entanto, todos Kobolds juraram odiar humanos.";
					mes "Existem diferentes tipos de Kobolds que usam diferentes armas.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo m�dio]^000000";
					mes "9. Jakk";
					mes "Um assustador monstro de cabe�a de ab�bora que se veste em um traje formal.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 15: Grandes Monstros de Fogo]^000000";
					mes "1. Peco Peco";
					mes "Hoje em dia peco peco � popular como um para Cavaleiros e Cruzados.";
					mes "Eles vivem no deserto ou na floresta e tamb�m atacar em bandos se um deles est� amea�ado.";
					next;
					mes "^FF0000[Vol. 15: Grandes Monstros de Fogo]^000000";
					mes "2. Marduk";
					mes "Um bruxo de escurid�o que sabe usar bem a magia.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 3:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 16: Monstro Neutros Pequenos]^000000";
					mes "1. Lunatico";
					mes "Um monstro desgrenhado que parece tipo de como um coelho, embora alguns possam acho que � bonito, o autor acredita que � absolutamente horr�vel.";
					mes "Talvez seja por causa de seus alleriges.";
					next;
					mes "^FF0000[Vol. 16: Monstro Neutros Pequenos]^000000";
					mes "2. Ovo de Peco Peco";
					mes "� pequeno, e indefeso, tornando-o um alvo perfeito para Novices.";
					next;
					mes "^FF0000[Vol. 16: Monstro Neutros Pequenos]^000000";
					mes "3. Ovo de Andr�";
					mes "Um ovo indefeso, alguns deles realmente podem chocar e ser tornar uma formiga.";
					next;
					mes "^FF0000[Vol. 16: Monstro Neutros Pequenos]^000000";
					mes "4. Filhore de Besouro-Ladr�o";
					mes "Criaturas sujas e imundas que tendem para trabalhar em grupos.";
					mes "N�o os deixe poluir os Esgotos de Prontera, seria um desastre!";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 17: Monstro Neutro M�dio]^000000";
					mes "^0099FF...^000000";
					next;
					mes "^FF0000[Vol. 17: Monstro Neutro M�dio]^000000";
					mes "^ 0099FF...^000000";
					mes "^ 0099FF......^000000";
					next;
					mes "^FF0000[Vol. 17: Monstro Neutro M�dio]^000000";
					mes "^ 0099FFAlgumas p�ginas parecem ter sido rasgadas...^000000";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 18: Grandes Monstros Neutros]^000000";
					mes "1. Golem";
					mes "Um ser de pedra viva que tem foi encantado com magia negra.";
					mes "Move-se incrivelmente lento devido ao seu problema de peso.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 4:
			close2;
			.@loop1 = 0;
			end;
		}
	}
}

// ------------------------------------------------------------------
prt_in,161,50,4	script	Enciclop�dia#3pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclop�dia]^000000";
	mes "Esta � uma Enciclop�dia de Monstros contendo informa��es sobre Sombra, Veneno e Mortos-vivos.";
	next;
	.@loop1 = 1;
	while(.@loop1) {
		.@loop2 = 1;
		switch(select("Monstros Sombrios","Monstros de veneno","Monstros mortos-vivos","Cancelar")) {
			case 1:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "1. Ovo de Besouro-Ladr�o";
					mes "Um ovo imundo de um Besouro-Ladr�o.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "2. Familiar";
					mes "Um morcego cinzento que n�o � muito forte, mas realmente irritante porque ataca muito r�pido e persegue implacavelmente.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "3. Tarou";
					mes "Um pequeno, pequeno rato branco.";
					mes "Geralmente encontrado nos Esgotos de Prontera.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "4. Drainliar";
					mes "Um bast�o vermelho sangue que � muito mais forte do que Familiar.";
					mes "Tamb�m tende a perseguir qualquer humano que encontra.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "5. Dokebi";
					mes "Um dem�nio coreano tradicional com o poder gerar riqueza usando mamonita, n�o � grande coisa para eles.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "6. Deviruchi";
					mes "Um dem�nio em miniatura.";
					mes "� bonito, mas mesmo assim � um dem�nio da escurid�o.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 20: Monstro Escuro M�dio]^000000";
					mes "1. Besouro-Ladr�o F�mea";
					mes "Grandes insetos marrons que s�o horr�vel para os olhos e repugnante ao toque Notorious para rapidamente pegar o que cai para o ch�o.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro M�dio]^000000";
					mes "2. Besouro-Ladr�o Macho";
					mes "Um grande inseto verde, o Besouro-Ladr�o Macho � consideravelmente poderoso.";
					mes "Eles tamb�m s�o muito agressivos para os seres humanos.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro M�dio]^000000";
					mes "3. Matyr";
					mes "Um c�o saturado de mal, sempre dormindo, mas nasce para depois de cheirar um aventureiro.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro M�dio]^000000";
					mes "4. Zenorc";
					mes "Um Orc desonroso cujo corpo foi amaldi�oado.";
					mes "Tem mania de saquear itens que ca�am no ch�o.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro M�dio]^000000";
					mes "5. Requiem";
					mes "Um antigo escravo que carrega um caix�o pesado em suas costas cansado de seu trabalho.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro M�dio]^000000";
					mes "6. Bathory";
					mes "Uma bruxa usando coelho que atacar�o qualquer coisa mais bonita que ela.";
					mes "Em outras palavras ela ataca todos.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 21: Grandes monstros escuros]^000000";
					mes "1. Isis";
					mes "Um monstro que � meia serpente e meia mulher.";
					next;
					mes "^FF0000[Vol. 21: Grandes monstros escuros]^000000";
					mes "2. Raydric";
					mes "Uma alma presa dentro de uma armadura atrav�s de maldi��o.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 2:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 22: Monstro Pequeno Venenoso]^000000";
					mes "^0099FF...^000000";
					next;
					mes "^FF0000[Vol. 22: Monstro Pequeno Venenoso]^000000";
					mes "^0099FF...^000000";
					mes "^0099FF......^000000";
					next;
					mes "^0099FFP�ginas foram arrancadas do livro, voc� ter� que aprender por conta pr�pria^000000.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 23: Monstro M�dio Venenoso]^000000";
					mes "1. Poporing";
					mes "Um poring que emana uma luz verde de propiedade veneneno.";
					mes "� muito mais forte de Poring, mas ainda se move por significa saltar.";
					next;
					mes "^FF0000[Vol. 23: Monstro M�dio Venenoso]^000000";
					mes "2. Esporo venenoso";
					mes "Um cogumelo coberto preto, ataca aventureiros com medo de serem comidos.";
					next;
					mes "^FF0000[Vol. 23: Monstro M�dio Venenoso]^000000";
					mes "3. Cobold";
					mes "Um pequeno monstro lobo que � inteligente o suficiente para usar armas.";
					mes "Olhando r�pido parece inofensivo, no entanto ele � muito malvado para um garotinho.";
					next;
					mes "^FF0000[Vol. 23: Monstro M�dio Venenoso]^000000";
					mes "4. Anaconda";
					mes "Uma cobra de cor escura.";
					mes "Tenha cuidado e mate-as antes que possam te envenenar.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 24: Monstro Grande Venenoso]^000000";
					mes "1. Argos";
					mes "Uma aranha monstruosa que vai atacar aventureiros � vista.";
					next;
					mes "^FF0000[Vol. 24: Monstro Grande Venenoso]^000000";
					mes "2. Argriope";
					mes "Um monstro de tipo mil�pede, segmentado que vai atacar o transeunte com veneno.";
					next;
					mes "^FF0000[Vol. 24: Monstro Grande Venenoso]^000000";
					mes "^FF0000[Vol. 24: Grandes Monstro Venenos]^000000";
					mes "3. N�voa";
					mes "Um estranho monstro feito de n�voa que est� ligado a um fantasma.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 3:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros m�dios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Pequeno]^000000";
					mes "^0099FF...^000000";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Pequeno]^000000";
					mes "^0099FF...^000000";
					mes "^0099FF......^000000";
					next;
					mes "^0099FFP�ginas foram arrancadas do livro, voc� ter� que aprender por conta pr�pria^000000.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "1. Zumbi";
					mes "Um humano que foi transformado em morto por magina negra.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "2. Megalodon";
					mes "Um esqueleto de peixe animado que vagueia pelos mares, embora pare�a assustador, � realmente benigno.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "3. Orc Zumbi";
					mes "Orcs que voltaram pois o esp�rito de luta honor�vel do Guerreiro Orc nunca morre!";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "4. Esqueleto Pirata";
					mes "Um pirata que salta em meias roxas.";
					mes "Flagelo dos sete mares.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "5. Orc Esqueleto";
					mes "O esqueleto de um Orc que foi trazido de volta � vida.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "6. Esqueleto";
					mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
					mes "Ele deve ter sido um �timo espadachim quando ele estava vivo.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "7. Munak";
					mes "Um zumbi bonito que parece ser ligado a Bongun de alguma forma.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "8. Esqueleto Oper�rio";
					mes "Um esqueleto reanimado de um mineiro que morreu sem receber seu indeniza��o.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "9. Arqueiro Esqueleto";
					mes "Apesar de n�o ter olhos deteriorados, eles possuem boa pontaria.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "10. M�mia";
					mes "Um cad�ver ambulante coberto de bandagens.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "11. Verit";
					mes "Um c�o mumificado que vai pegar qualquer coisa caiu no ch�o.";
					mes "Embora seja um zumbi, parece feliz por estar vivo novamente.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo M�dio]^000000";
					mes "12. Carni�al";
					mes "Semelhante a um Zumbi, mas os Carni�ais s�o verde e muito mais fortes.";
					mes "Vomitam em tudo que passa ao seu redor.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Grande]^000000";
					mes "1. Druida Maligno";
					mes "Um druida extravagantemente malvado.";
					mes "Sempre usando um livro de magia flutuante que crepita com energia para causar mis�ria para aventureiros";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 4:
			close2;
			.@loop = 0;
			end;
		}
	}
}

// ------------------------------------------------------------------
prt_in,172,96,4	script	Enciclop�dia#4pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclop�dia]^000000";
	mes "Esta � uma enciclop�dia que descreve que vivem em Cavernas.";
	next;
	.@loop1 = 1;
	switch(select("Formigueiro Infernal","Torre de Geffen","Esfinge","Cancelar")) {
		case 1:
		while(.@loop1) {
			switch(select("1� Andar","2� Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "1. Ovo de Andr�";
				mes "Apenas um ovo de formiga.";
				mes "N�o pode machucar voc�.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "2. Andre";
				mes "Uma formiga trabalhadora diligente que vive por causa da col�nia.";
				mes "Embora passiva se atacar alguma voc� ter� que lutar contra todos eles.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "3. Piere";
				mes "Uma formiga de trabalhador verde que trabalha apenas, t�o diligentemente como Andr�.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "4. Deniro";
				mes "A formiga de trabalhador vermelho, e � mais r�pido que Pieres e Deniros.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "5. Vitata";
				mes "Formigas trabalhadoras que s�o gordas com querida...";
				mes "T�o gorda, eles n�o v�o escolher qualquer coisa.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "6. Giearth";
				mes "Um duende idoso que vagueia cavernas para colher min�rios.";
				mes "Quando morre, ele planeja deixar o mundo seu bigode bonito.";
				next;
				break;
				case 2:
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "1. Ovo de Andre";
				mes "Ovos de formiga incapazes de atacar, ou at� sentir dor.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "2. Andre";
				mes "Uma formiga de trabalhador amarela que pode ser o mais lento de sua ra�a, al�m da Vitata.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "3. Piere";
				mes "Um trabalhador verde e obviamente vindos da Fran�a.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "4. Deniro";
				mes "O mais veloz das formigas oper�rias que vem em uma cor vermelha chamativa.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "5. Vitata";
				mes "Formigas trabalhadoras encarregadas de armazenar mel dentro de suas barrigas.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "6. Giearth";
				mes "Um duende idoso que vagueia cavernas para colher min�rios.";
				mes "Quase um an�o, mas n�o muito.";
				next;
				mes "^FF0000[Ant Hell 2F Monsters]^000000";
				mes "7. Maya";
				mes "A Rainha das formigas, raramente aparece.";
				mes "Muito perigosa ao ver intrusos em seu dom�nimo, cuidado ela � muito forte!";
				next;
				break;
				case 3:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 2:
		while(.@loop1) {
			switch(select("1� Andar","2� Andar","3� Andar","4� Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Torre de Geffen]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte, mas realmente irritante porque ataca muito r�pido e implacavelmente persegue quem avista.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "2. Poporing";
				mes "Um poring de cor verde, mas muito mais forte que um poring comum.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "3. Poeira";
				mes "Este monstro voador dif�cil de atingir com ataques normais.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "4. Esporo venenoso";
				mes "Um cogumelo coberto preto, ataca aventureiros com medo de serem comidos.";
				next;
				break;
				case 2:
				mes "^FF0000[Torre de Geffen]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte, mas realmente irritante porque ataca muito r�pido e implacavelmente persegue quem avista.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "2. Poeira";
				mes "Este monstro voador dif�cil de atingir com ataques normais.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "3. Esporo venenoso";
				mes "Um cogumelo coberto preto, ataca aventureiros com medo de serem comidos.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "4. Argos";
				mes "Uma aranha monstruosa que vai atacar aventureiros � vista, � muito grande para os aventureiros esmagarem com seus p�s.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "5. Sussurro";
				mes "Um peda�o de tecido que emite vibra��es assustadoras, gosta de se tornar invis�vel...";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "6. Jakk";
				mes "Um assustador monstro de cabe�a de ab�bora que gosta de se vestir em trajes formais.";
				next;
				break;
				case 3:
				mes "^FF0000[Torre de Geffen]^000000";
				mes "1. Argos";
				mes "Uma aranha monstruosa que vai atacar aventureiros � vista, � muito grande para os aventureiros esmagarem com seus p�s.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "2. Sussurro";
				mes "Um peda�o de tecido que emana vibra��es assustadoras.";
				mes "E gosta de se tornar invis�vel ...";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "3. Jakk";
				mes "Um assustador monstro de cabe�a de ab�bora que gosta de se vestir em trajes formais.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "4. N�voa";
				mes "Um estranho monstro feito de n�voa que que se parece com um fantasma.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "5. Marionette";
				mes "Um monstro renascido como uma boneca amaldi�oada.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "6. Bathory";
				mes "Uma bruxa que atacar� qualquer coisa mais bonita do que ela.";
				mes "Em outras palavras, ela ataca todos.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "7. Pesadelo";
				mes "Um cavalo fantasma que irradia um aura violeta do mal.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "8. Dr�cula";
				mes "Um pr�ncepe das trevas, ele � muito poderoso e anda camuflado.";
				mes "Normalmente quando voc� o ver j� � tarde demais.";
				next;
				break;
				case 4:
				mes "^FF0000[Torre de Geffen]^000000";
				mes "1. N�voa";
				mes "Um estranho monstro feito de n�voa que se parece com um fantasma.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "2. Deviruchi";
				mes "Um dem�nio minado que repetidamente apunhala os humanos com sua forquilha.";
				mes "� bonito, mas mesmo assim � um dem�nio da escurid�o.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "3. Raydric";
				mes "Uma alma presa dentro da armadura por uma maldi��o.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "4. Coringa";
				mes "Um cart�o de jogo grande, encantado por magia negra.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "5. Doppelganger";
				mes "Um c�pia fantasmag�rica de um Espadachim.";
				mes "Talvez ele tenha sido no passado o mais poroso em toda a Rune-Midgard.";
				next;
				break;
				case 5:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 3:
		while(.@loop1) {
			switch(select("1� Andar","2� Andar","3� Andar","4� Andar","5� Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte, mas realmente irritante porque ataca muito r�pido e implacavelmente persegue quem avista.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "2. Zerom";
				mes "Um escravo n�o morto.";
				mes "Infelizmente, nem mesmo a morte trar� paz as horas abusivas de trabalho que sofreu pelo fara�.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Matyr";
				mes "Um c�o saturado de mal.";
				mes "Sempre dormindo, mas acorda depois de cheirar um aventureiro.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "4. Requiem";
				mes "Um antigo escravo que carrega um caix�o pesado em suas costas.";
				next;
				break;
				case 2:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte, mas realmente irritante porque ataca muito r�pido e implacavelmente persegue quem avista.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "2. Matyr";
				mes "Um c�o saturado de mal.";
				mes "Sempre dormindo, mas acorda depois de cheirar um aventureiro.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Requiem";
				mes "Um antigo escravo que carrega um caix�o pesado em suas costas.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "4. Sussurro";
				mes "Um peda�o de tecido que emana vibra��es assustadoras.";
				mes "E gosta de se tornar invis�vel ...";
				next;
				break;
				case 3:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Matyr";
				mes "Um c�o saturado de mal.";
				mes "Sempre dormindo, mas acorda depois de cheirar um aventureiro.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "2. Sussurro";
				mes "Um peda�o de tecido que emana vibra��es assustadoras.";
				mes "E gosta de se tornar invis�vel ...";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Marduk";
				mes "Um bruxo da escurid�o, que sabe usar bem a magia.";
				next;
				break;
				case 4:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Sussurro";
				mes "Um peda�o de tecido que emana vibra��es assustadoras.";
				mes "E gosta de se tornar invis�vel ...";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Marduk";
				mes "Um bruxo da escurid�o, que sabe usar bem a magia.";
				next;
				break;
				case 5:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Sussurro";
				mes "Um peda�o de tecido que emana vibra��es assustadoras.";
				mes "E gosta de se tornar invis�vel ...";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Marduk";
				mes "Um bruxo da escurid�o, que sabe usar bem a magia.";
				next;
				break;
				case 6:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 4:
		close;
	}
}

// ------------------------------------------------------------------
prt_in,164,96,4	script	Enciclop�dia#5pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclop�dia]^000000";
	mes "Esta � uma enciclop�dia que descreve Monstros que vivem em Cavernas.";
	next;
	.@loop1 = 1;
	switch(select("Calabou�o dos Orcs","Ilha de Byalan","Esgotos de Prontera")){
		case 1:
		while(.@loop1) {
			switch(select("1� Andar","2� Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Calabou�o dos Orcs]^000000";
				mes "1. Chonchon";
				mes "Um monstro voador que se movem com grande velocidade, eles comem tudo que ver pelo ch�o.";
				next;
				mes "^FF0000[Calabou�o dos Orcs]^000000";
				mes "2. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "E realmente irritante porque ataca muito r�pido e implacavelmente e persegue todo mundo.";
				next;
				mes "^FF0000[Calabou�o dos Orcs]^000000";
				mes "3. Orc Zumbi";
				mes "Orcs que voltaram dos mortos, pois o esp�rito de luta honor�vel do Guerreiro Orc nunca morre!";
				next;
				mes "^FF0000[Calabou�o dos Orcs]^000000";
				mes "4. Orc Esqueleto";
				mes "O esqueleto de um Orc que foi trazido de volta � vida.";
				mes "Herb";
				next;
				break;
				case 2:
				mes "^FF0000[Calabou�o dos Orcs]^000000";
				mes "1. Chonchon";
				mes "Um monstro voador que se movem com grande velocidade, eles comem tudo que ver pelo ch�o.";
				next;
				mes "^FF0000[Calabou�o dos Orcs]^000000";
				mes "2. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "E realmente irritante porque ataca muito r�pido e implacavelmente e persegue todo mundo.";
				next;
				mes "^FF0000[Calabou�o dos Orcs]^000000";
				mes "4. Orc Esqueleto";
				mes "O esqueleto de um Orc que foi trazido de volta � vida.";
				next;
				mes "^FF0000[Calabou�o dos Orcs]^000000";
				mes "4. Zenorc";
				mes "Um Orc desonroso cujo corpo foi amaldi�oado.";
				mes "Tem a mania de saquear itens que ca�am no ch�o.";
				next;
				break;
				case 3:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 2:
		while(.@loop1) {
			switch(select("1� Andar","2� Andar","3� Andar","4� Andar","5� Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Pl�ncton";
				mes "Mesmo que pare�am insignificantemente pequeno, tenha cuidado n�o pisar neles.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Kukre";
				mes "Kukre parece um Besouro-Ladr�o porque come tudo pelo ch�o.";
				mes "Felizmente, eles n�o atacam em um grupo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Hydra";
				mes "Monstros Vegetais que vivem perto �gua ou no mar profundo.";
				mes "Ataque usando tent�culos.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Vadon";
				mes "Coberto por uma espessa, carapa�a";
				mes "Vadons atacam com suas poderosas guarras.";
				mes "Embora pare�am caranguejos, sua carne n�o pode ser comido.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Marina";
				mes "Medusa transparentes que atacam esticando seus corpos flex�veis em um chicote-like fashion.";
				mes "Elas vivem em lugares frescos perto da �gua.";
				next;
				break;
				case 2:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Pl�ncton";
				mes "Mesmo que pare�am insignificantemente pequeno, tenha cuidado n�o pisar neles.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Kukre";
				mes "Kukre parece um Besouro-Ladr�o porque come tudo pelo ch�o.";
				mes "Felizmente, eles n�o atacam em um grupo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Hydra";
				mes "Monstros Vegetais que vivem perto �gua ou no mar profundo.";
				mes "Ataque usando tent�culos.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Vadon";
				mes "Coberto por uma espessa, carapa�a";
				mes "Vadons atacam com suas poderosas guarras.";
				mes "Embora pare�am caranguejos, sua carne n�o pode ser comido.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Marina";
				mes "Medusa transparentes que atacam esticando seus corpos flex�veis em um chicote-like fashion.";
				mes "Elas vivem em lugares frescos perto da �gua.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "6. Sapo de Thara";
				mes "Sapos de cor vermelha, certamente mais fortes do que os Sapos de Roda.";
				mes "Dizem que existe um mist�rio no som irritante que ele produz.";
				next;
				break;
				case 3:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Hydra";
				mes "Monstros Vegetais que vivem perto �gua ou no mar profundo.";
				mes "Ataque usando tent�culos.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Sapo de Thara";
				mes "Sapos de cor vermelha, certamente mais fortes do que os Sapos de Roda.";
				mes "Dizem que existe um mist�rio no som irritante que ele produz.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Cornutus";
				mes "Monstro benignos que escondem dentro de uma concha dura.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Martin";
				mes "Uma lula em miniatura com pequenos tent�culos.";
				mes "Como ele se move atrav�s de �gua com essas pequenas coisas � ainda um mist�rio cient�fico.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Obeaune";
				mes "Uma Sereia feminina que ataca com seu cabelo selvagem.";
				mes "Dizem que sua forma masculina � o Ermit�o, mas ningu�m sabe ao certo.";
				next;
				break;
				case 4:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Hydra";
				mes "Monstros Vegetais que vivem perto �gua ou no mar profundo.";
				mes "Ataque usando tent�culos.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Martin";
				mes "Uma lula em miniatura com pequenos tent�culos.";
				mes "Como ele se move atrav�s de �gua com essas pequenas coisas � ainda um mist�rio cient�fico.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Obeaune";
				mes "Uma Sereia feminina que ataca com seu cabelo selvagem.";
				mes "Dizem que sua forma masculina � o Ermit�o, mas ningu�m sabe ao certo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Esfera Marinha";
				mes "Monstro estranhos, redondos que com energia destrutiva.";
				mes "Quando se sente em perigo ela explode.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Fen";
				mes "Um peixe azul com um nariz pontiagudo com uma apar�ncia muito triste.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "6. Peixe Espada";
				mes "Um monstro peixe com um nariz afiado, longo como uma espada.";
				mes "Tem olhos pegajosos, � perigoso.";
				next;
				break;
				case 5:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Esfera Marinha";
				mes "Monstro estranhos, redondos que com energia destrutiva.";
				mes "Quando se sente em perigo ela explode.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Peixe Espada";
				mes "Um monstro peixe com um nariz afiado, longo como uma espada.";
				mes "Tem olhos pegajosos, � perigoso.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Martin";
				mes "Uma lula em miniatura com pequenos tent�culos.";
				mes "Como ele se move atrav�s de �gua com essas pequenas coisas � ainda um mist�rio cient�fico.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Obeaune";
				mes "Uma Sereia feminina que ataca com seu cabelo selvagem.";
				mes "Dizem que sua forma masculina � o Ermit�o, mas ningu�m sabe ao certo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Cavalo Marinho";
				mes "Um cavalo de mar que mais parece um drag�o.";
				mes "Infelizmente, voc� n�o pode mont�-lo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "6. Strouf";
				mes "Um monstro de peixe senhor que olha como o Deus dos Mares.";
				mes "Carrega um tridente para lutar contra pessoas da superf�cie.";
				next;
				break;
				case 6:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 3:
		while(.@loop1) {
			switch(select("1� Andar","2� Andar","3� Andar","4� Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "1. Ovo do Besouro-Ladr�o";
				mes "Um ovo de besouro.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "2. Besouro-Ladr�o";
				mes "A vers�o ainda n�o desenvolvida dos outro besouros ladr�es";
				mes "Mesmo como beb�s, eles s�o muitos nojentos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "3. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "4. Esporo";
				mes "Monstros como cogumelos que utilizam a reprodu��o micelial.";
				mes "Geralmente vivem em florestas ou masmorras.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "5. Tarou";
				mes "Um pequeno rato branco.";
				next;
				break;
				case 2:
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "1. Ovo do Besouro-Ladr�o";
				mes "Um ovo de besouro.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "2. Besouro-Ladr�o";
				mes "A vers�o ainda n�o desenvolvida dos outro besouros ladr�es";
				mes "Mesmo como beb�s, eles s�o muitos nojentos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "3. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "4. Esporo";
				mes "Monstros como cogumelos que utilizam a reprodu��o micelial.";
				mes "Geralmente vivem em florestas ou masmorras.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "5. Tarou";
				mes "Um pequeno rato branco.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "6. Pl�ncton";
				mes "Mesmo que pare�am insignificantemente pequeno, tenha cuidado para n�o pisar neles.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "7. Hydra";
				mes "Monstros Vegetais que vivem perto �gua ou no mar profundo.";
				mes "Ataque usando tent�culos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "8. Besouro-Ladr�o F�mea";
				mes "Grandes insetos marrons que s�o horr�vel para os olhos.";
				mes "S�o muitos veloses o devoram tudo pelo ch�o.";
				next;
				break;
				case 3:
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "1. Ovo do Besouro-Ladr�o";
				mes "Um ovo de besouro.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "2. Besouro-Ladr�o";
				mes "A vers�o ainda n�o desenvolvida dos outro besouros ladr�es";
				mes "Mesmo como beb�s, eles s�o muitos nojentos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "3. Besouro-Ladr�o F�mea";
				mes "Grandes insetos marrons que s�o horr�vel para os olhos.";
				mes "S�o muitos veloses o devoram tudo pelo ch�o.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "4. Tarou";
				mes "Um pequeno rato branco.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "5. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "6. Poporing";
				mes "Um poring que emana uma luz verde, e muito mais forte que umporing comum.";
				next;
				break;
				case 4:
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "1. Ovo do Besouro-Ladr�o";
				mes "Um ovo de besouro.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "2. Besouro-Ladr�o";
				mes "A vers�o ainda n�o desenvolvida dos outro besouros ladr�es";
				mes "Mesmo como beb�s, eles s�o muitos nojentos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "3. Besouro-Ladr�o F�mea";
				mes "Grandes insetos marrons que s�o horr�vel para os olhos.";
				mes "S�o muitos veloses o devoram tudo pelo ch�o.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "4. Besouro-Ladr�o Macho";
				mes "Um grande inseto azul, � consideravelmente poderoso.";
				mes "Eles tamb�m s�o muito agressivos para os seres humanos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "5. Besouro-Ladr�o Dourado";
				mes "Um besouro que brilha com uma luz dourada e iten�a.";
				mes "Muito bonito, mas muito poderoso, tenha cuidado se o avistar.";
				next;
				break;
				case 5:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 4:
		close;
	}
}

// ------------------------------------------------------------------
prt_in,172,102,4	script	MEnciclop�dia#6pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclop�dia]^000000";
	mes "Esta enciclop�dia descreve monstros vivendo em calabou�os e outros mapas especiais.";
	next;
	.@loop1 = 1;
	switch(select("Mina de Carv�o","Caverna de Payon","Pir�mide","Cancelar")) {
		case 1:
		while(.@loop1) {
			switch(select("1� andar","2� andar","3� andar","Cancelar")) {
				case 1:
				mes "^FF0000[Mina de Carv�o]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Dead Pit 1F Monsters]^000000";
				mes "2. Tarou";
				mes "Um pequeno rato branco.";
				next;
				mes "^FF0000[Dead Pit 1F Monsters]^000000";
				mes "3. Drainliar";
				mes "Um bast�o vermelho sangue que � muito mais forte do que Familiar.";
				mes "Tamb�m tende a perseguir qualquer humano que encontra.";
				next;
				break;
				case 2:
				next;
				mes "^FF0000[Mina de Carv�o]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Mina de Carv�o]^000000";
				mes "2. Esqueleto Oper�rio";
				mes "Um esqueleto reanimado de um mineiro que morreu, mas voltou para reclamar da sua ap�lice de seguro.";
				next;
				mes "^FF0000[Dead Pit 2F Monsters]^000000";
				mes "3. N�voa";
				mes "Um estranho monstro feito de n�voa que mais parece um fantasma.";
				next;
				break;
				case 3:
				mes "^FF0000[Mina de Carv�o]^000000";
				mes "1. Esqueleto Oper�rio";
				mes "Um esqueleto reanimado de um mineiro que morreu, mas voltou para reclamar da sua ap�lice de seguro.";
				next;
				mes "^FF0000[Dead Pit 2F Monsters]^000000";
				mes "2. N�voa";
				mes "Um estranho monstro feito de n�voa que mais parece um fantasma.";
				next;
				mes "^FF0000[Mina de Carv�o]^000000";
				mes "3. Druida Maligno";
				mes "Um druida extravagantemente malvado.";
				mes "Sempre usando um livro de magia flutuante";
				mes "Que crepita com energia para causar mis�ria para os aventureiros.";
				next;
				break;
				case 4:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 2:
		while(.@loop1) {
			switch(select("1� andar","2� andar","3� andar","4� andar","5� andar","Cancelar")) {
				case 1:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Esporo";
				mes "Monstro como um cogumelo.";
				mes "Geralmente encontrado em florestas ou masmorras.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Zumbi";
				mes "Nascido de um cad�ver reanimado com magia negra.";
				next;
				break;
				case 2:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Eggyra";
				mes "Um estranho, rob�tico ovo olhando coisa que vagueia quando anda.";
				mes "Ningu�m sabe do que essas coisas s�o feitas.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Magn�lia";
				mes "Criaturas bonitas que aparecem como grandes frigideiras.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "4. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um �timo espadachim.";
				next;
				break;
				case 3:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um �timo espadachim.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Munak";
				mes "Um zumbi bonito que parece ser ligado a Bongun de alguma forma.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "4. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				break;
				case 4:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um �timo espadachim.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Sohee";
				mes "Um fantasma feminino que guarda um profundo rancor.";
				mes "Embora ela geralmente chorar, ela pode se tornar feroz se encontrar com os vivos.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "4. Horong";
				mes "Uma bola de fogo violenta e de apar�ncia estranha.";
				mes "� in�til usar habilidades escondidas perto desse esp�rito vingativo.";
				next;
				break;
				case 5:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um �timo espadachim.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Sohee";
				mes "Um fantasma feminino que guarda um profundo rancor.";
				mes "Embora ela geralmente chorar, ela pode se tornar feroz se encontrar com os vivos.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "4. Horong";
				mes "Uma bola de fogo violenta e de apar�ncia estranha.";
				mes "� in�til usar habilidades escondidas perto desse esp�rito vingativo.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "5. Flor do Luar";
				mes "Uma garota selvagem e muito poderosa.";
				mes "Ela carrega um bast�o com um sino.";
				mes "Dizem que esse sino pode trazer mortos devolta a vida.";
				next;
				break;
				case 6:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 3:
		while(.@loop1) {
			switch(select("1� andar","2� andar","3� andar","4� andar","5� andar","6� andar","Cancelar")) {
				case 1:
				mes "^FF0000[Pyramid 1F Monsters]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que n�o � muito forte.";
				mes "Mas realmente irritante porque ataca muito r�pido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Pyramid 1F Monsters]^000000";
				mes "2. Esporo";
				mes "Monstro como um cogumelo.";
				mes "Geralmente encontrado em florestas ou masmorras.";
				next;
				mes "^FF0000[Pyramid 1F Monsters]^000000";
				mes "3. Poporing";
				mes "A light green Poring with the";
				mes "Poison property. It's much stronger";
				mes "than Poring, but still moves by";
				mes "means of bouncing.";
				mes "^0099FFItem Drops^000000: Sticky Mucus, Garlet,";
				mes "Green Herb";
				next;
				break;
				case 2:
				mes "^FF0000[Pir�mide]^000000";
				mes "1. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "� muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "2. Drainliar";
				mes "Um bast�o vermelho sangue que � muito mais forte do que Familiar.";
				mes "Tamb�m tende a perseguir qualquer humano que encontra.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "3. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um �timo espadachim.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "4. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				break;
				case 3:
				mes "^FF0000[Pir�mide]^000000";
				mes "1. Drainliar";
				mes "Um bast�o vermelho sangue que � muito mais forte do que Familiar.";
				mes "Tamb�m tende a perseguir qualquer humano que encontra.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "2. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um �timo espadachim.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "3. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "4. M�mia";
				mes "Um monstro coberto de bandages velhas.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "5. Verit";
				mes "Um c�o mumificado que vai pegar qualquer coisa que caia no ch�o.";
				mes "Embora seja um zumbi, parece feliz por estar vivo novamente.";
				next;
				break;
				case 4:
				mes "^FF0000[Pir�mide]^000000";
				mes "1. M�mia";
				mes "Um monstro coberto de bandages velhas.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "2. Verit";
				mes "Um c�o mumificado que vai pegar qualquer coisa que caia no ch�o.";
				mes "Embora seja um zumbi, parece feliz por estar vivo novamente.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "3. Carni�al";
				mes "Semelhante a um Zumbi, mas os Carni�ais s�o verde e muito mais fortes.";
				mes "Vomitam em tudo que passa ao seu redor.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "4. Isis";
				mes "Um monstro que � meia serpente e meia mulher.";
				next;
				break;
				case 5:
				mes "^FF0000[Pir�mide]^000000";
				mes "1. M�mia";
				mes "Um monstro coberto de bandages velhas.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "2. Carni�al";
				mes "Semelhante a um Zumbi, mas os Carni�ais s�o verde e muito mais fortes.";
				mes "Vomitam em tudo que passa ao seu redor.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "4. Isis";
				mes "Um monstro que � meia serpente e meia mulher.";
				next;
				break;
				case 6:
				mes "^FF0000[Pir�mide]^000000";
				mes "1. M�mia";
				mes "Um monstro coberto de bandages velhas.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "2. Verit";
				mes "Um c�o mumificado que vai pegar qualquer coisa que caia no ch�o.";
				mes "Embora seja um zumbi, parece feliz por estar vivo novamente.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "3. Carni�al";
				mes "Semelhante a um Zumbi, mas os Carni�ais s�o verde e muito mais fortes.";
				mes "Vomitam em tudo que passa ao seu redor.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "4. Isis";
				mes "Um monstro que � meia serpente e meia mulher.";
				next;
				mes "^FF0000[Pir�mide]^000000";
				mes "5. Osiris";
				mes "O Rei incontest�vel das m�mias.";
				mes "Ele usa uma coroa e apodrece que s�o decididamente reais de cor roxa.";
				next;
				break;
				case 7:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 4:
		close;
	}
}

// ------------------------------------------------------------------
prt_in,164,102,4	script	Enciclop�dia#7pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclop�dia]^000000";
	mes "Esta � uma enciclop�dia que descreve Monstros que vivem em cavernas.";
	next;
	.@loop1 = 1;
	switch(select("Navio Fantasma","Labirinto da Floresta")) {
		case 1:
		while(.@loop1) {
			switch(select("1� N�vel","2� N�vel","Cancelar")) {
				case 1:
				mes "^FF0000[Navio Fantasma]^000000";
				mes "1. Pl�ncton";
				mes "Mesmo que pare�am insignificantemente pequeno, tenha cuidado para n�o pisar neles.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "2. Kukre";
				mes "Kukre parece um Besouro-Ladr�o por comer tudo pelo ch�o.";
				mes "Mas felizmente, eles n�o atacam em um grupo.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "3. Hydra";
				mes "Monstros Vegetais que vivem perto �gua ou no mar profundo.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "4. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "� muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "5. Esporo venenoso";
				mes "Um cogumelo coberto preto, ataca aventureiros com medo de serem comidos.";
				next;
				mes "^FF0000[Sunken Ship 1F Monstros]^000000";
				mes "6. Esqueleto Pirata";
				mes "Um pirata que fica pulando de um lado a outro usando suas meias roxas.";
				next;
				break;
				case 2:
				mes "^FF0000[Navio Fantasma]^000000";
				mes "1. Kukre";
				mes "Kukre parece um Besouro-Ladr�o por comer tudo pelo ch�o.";
				mes "Mas felizmente, eles n�o atacam em um grupo.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "2. Hydra";
				mes "Monstros Vegetais que vivem perto �gua ou no mar profundo.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "3. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "� muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "4. Sapo de Thara";
				mes "Sapos de cor vermelha, certamente mais fortes do que os Sapos de Roda.";
				mes "Dizem que existe um mist�rio no som irritante que ele produz.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "5. Sussurro";
				mes "Um peda�o de tecido que emite vibra��es assustadoras.";
				mes "�s vezes, ele gosta de se tornar invis�vel ...";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "6. Megalodon";
				mes "Esqueleto de peixe bem assustador sem os olhos.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "7. Esqueleto Pirata";
				mes "Um pirata que fica pulando de um lado a outro usando suas meias roxas.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "8. Marionette";
				mes "Um monstro renascido como uma boneca amaldi�oada que est� ligada a cordas presas a bast�es de madeira.";
				next;
				mes "^FF0000[Sunken Ship 2F Monstros]^000000";
				mes "9. Drake";
				mes "Um pirata espectral e fantasmag�rico, capit�o que passa seu tempo livre atacando os humanos.";
				next;
				break;
				case 3:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 2:
		while(.@loop1) {
			switch(select("1� N�vel","2� N�vel","Cancelar")) {
				case 1:
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "1. Poring";
				mes "Pequenos monstros rosa que s�o feitos de uma subst�ncia gelatinosa viva.";
				mes "Eles s�o bonitos, e vivem saltando por todo lado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "2. Lunatico";
				mes "Monstro gordo e desgrenhado em forma um Coelho.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "3. Fabre";
				mes "A larva fraca e pequena de Creamy.";
				mes "Embora alguns dizem que � bonito, muitos discordam disso.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "4. Creamy";
				mes "Um monstro voador belo.";
				mes "Escapa sempre teletrasportando quando se sente amea�ado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "5. Pupa";
				mes "Monstro que � a fase pupal de Fabre.";
				mes "N�o ataca, ent�o � f�cil para Aprendizes matar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "6. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "� muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "7. Rocker";
				mes "Um gafanhoto pregui�oso que adora tocar violino, assim como na f�bula de Esopo.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "8. P� Grande";
				mes "Embora seu nome pode ser enganoso, � realmente um grande bera.";
				mes "Anda como se possui a floresta, e ele faz.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "9. Fumacento";
				mes "Um pequeno guaxinim gordinho que n�o ama nada melhor do que correr.";
				mes "� rumores de usar uma folha m�gica para se tornar invis�vel!";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "10. Jib�ia";
				mes "Cobra verde que vive no florestas e desertos, s�o venenosas, e suas mordidas doem.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "11. Lobo";
				mes "Lobos selvagens, roving com manes azuis.";
				mes "Eles tendem a atacar como um bando quando mesmo um deles � amea�ado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "12. Agriope";
				mes "Um monstro de tipo mil�pede, segmentado que vai atacar o transeunte com veneno.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "13. Agros";
				mes "Uma aranha monstruosa que vai atacar aventureiros � vista, � muito grande para os aventureiros esmagarem com seus p�s.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "14. Chonchon";
				mes "Um monstro voador que se movem com grande velocidade, eles comem tudo que ver pelo ch�o.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "15. Besouro Chifre";
				mes "Embora pare�a feroz, � realmente um inseto pac�fico.";
				mes "Vagueia em torno de campos com um som de tritura��o.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "16. Mosca Ca�adora";
				mes "Insetos alados cobertos de sangue de inocentes.";
				mes "� incrivelmente r�pido, bem como tamb�m forte.";
				mes "Voc� deve fugir deste monstro em tudo custo.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "17. Louva-a-Deus";
				mes "Vagueia sobre campos, acenando um um f� min�sculo, umas artes marciais inteiras � baseado nos movimentos de este inseto.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "18. Sorrateiro";
				mes "Uma cobra de cor escura que odeia humanos.";
				mes "Tenha cuidado e mate-os antes que eles possam te envenenar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "19. Yoyo";
				mes "Um macaco travesso que pega qualquer coisa do ch�o.";
				mes "Eles s�o muito r�pidos e v�o se juntar a voc� se voc� atacar apenas um deles.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "20. Caramelo";
				mes "Um ador�vel porco-espinho com min�sculos espinhos.";
				mes "No entanto, ele fica incrivelmente irritado quando tocado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "21. Chonchon de A�o";
				mes "Semelhante a Chonchon, mas � amarelo e verde.";
				mes "Pega tudo do ch�o, por isso tome cuidado para n�o deixar cair itens.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "22. Coco";
				mes "Um pequeno esquilo com olhos escuros e penetrantes.";
				mes "Sempre est� segurando uma Acorn, e seria bonito se n�o tivesse sempre um olhar de desprezo total.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "23. Poeira";
				mes "Este monstro voador dif�cil de atingir com ataques normais.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "24. Selvagem";
				mes "Um javali que anda por a�, grunhido inquieto, seu �spero olhando presas tornam dif�cil acredito que era bonito como um beb�.";
				next;
				break;
				case 2:
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "1. Poring";
				mes "Pequenos monstros rosa que s�o feitos de uma subst�ncia gelatinosa viva.";
				mes "Eles s�o bonitos, e vivem saltando por todo lado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "2. Lunatico";
				mes "Monstro gordo e desgrenhado em forma um Coelho.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "3. Fabre";
				mes "A larva fraca e pequena de Creamy.";
				mes "Embora alguns dizem que � bonito, muitos discordam disso.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "4. Creamy";
				mes "Um monstro voador belo.";
				mes "Escapa sempre teletrasportando quando se sente amea�ado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "5. Pupa";
				mes "Monstro que � a fase pupal de Fabre.";
				mes "N�o ataca, ent�o � f�cil para Aprendizes matar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "6. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "� muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "7. Rocker";
				mes "Um gafanhoto pregui�oso que adora tocar violino, assim como na f�bula de Esopo.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "8. P� Grande";
				mes "Embora seu nome pode ser enganoso, � realmente um grande bera.";
				mes "Anda como se possui a floresta, e ele faz.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "9. Fumacento";
				mes "Um pequeno guaxinim gordinho que n�o ama nada melhor do que correr.";
				mes "� rumores de usar uma folha m�gica para se tornar invis�vel!";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "10. Jib�ia";
				mes "Cobra verde que vive no florestas e desertos, s�o venenosas, e suas mordidas doem.";
				next;
				mes "^FF0000[Prontera Maze 3F Monsters]^000000";
				mes "11. Lobo";
				mes "Lobos selvagens, roving com manes azuis.";
				mes "Eles tendem a atacar como um bando quando mesmo um deles � amea�ado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "12. Agriope";
				mes "Um monstro de tipo mil�pede, segmentado que vai atacar o transeunte com veneno.";
				next;
				mes "^FF0000[Prontera Maze 3F Monsters]^000000";
				mes "13. Agros";
				mes "A monstrous spider that will attack";
				mes "adventurers on sight. It's too big";
				mes "for adventurers to squish with";
				mes "their feet.";
				mes "^0099FFItem Drops^000000: Cobweb, Scell, Bug Leg,";
				mes "Green Herb, Yellow Herb";
				next;
				mes "^FF0000[Prontera Maze 3F Monsters]^000000";
				mes "14. Besouro Chifre";
				mes "Embora pare�a feroz, � realmente um inseto pac�fico.";
				mes "Vagueia em torno de campos com um som de tritura��o.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "15. Mosca Ca�adora";
				mes "Insetos alados cobertos de sangue de inocentes.";
				mes "� incrivelmente r�pido, bem como tamb�m forte.";
				mes "Voc� deve fugir deste monstro em tudo custo.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "16. Louva-a-Deus";
				mes "Vagueia sobre campos, acenando um um f� min�sculo, umas artes marciais inteiras � baseado nos movimentos de este inseto.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "18. Sorrateiro";
				mes "Uma cobra de cor escura que odeia humanos.";
				mes "Tenha cuidado e mate-os antes que eles possam te envenenar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "19. Yoyo";
				mes "Um macaco travesso que pega qualquer coisa do ch�o.";
				mes "Eles s�o muito r�pidos e v�o se juntar a voc� se voc� atacar apenas um deles.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "20. Caramelo";
				mes "Um ador�vel porco-espinho com min�sculos espinhos.";
				mes "No entanto, ele fica incrivelmente irritado quando tocado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "21. Chonchon de A�o";
				mes "Semelhante a Chonchon, mas � amarelo e verde.";
				mes "Pega tudo do ch�o, por isso tome cuidado para n�o deixar cair itens.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "22. Coco";
				mes "Um pequeno esquilo com olhos escuros e penetrantes.";
				mes "Sempre est� segurando uma Acorn, e seria bonito se n�o tivesse sempre um olhar de desprezo total.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "23. Poeira";
				mes "Este monstro voador dif�cil de atingir com ataques normais.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "24. Selvagem";
				mes "Um javali que anda por a�, grunhido inquieto, seu �spero olhando presas tornam dif�cil acredito que era bonito como um beb�.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "26. Bebe Selvagem";
				mes "Pequena, rosa beb� Savage.";
				mes "� desanimador saber que cresce at� ficar feio.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "27. Mastering";
				mes "Um Poring gigante raramente visto no";
				mes "Pode ser o Mestre";
				mes "de Porings, mas... Ainda � um Poring.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "28. Eclipse";
				mes "Senhor e Mestre de todos os Lunaticos.";
				mes "Seus ataques podem ser fracos, mas ele tem uma defesa consider�vel.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "29. Baphomet";
				mes "Uma besta com chifres parecida com uma cabra que empunha uma foice intimidante com incr�vel poder.";
				mes "Sem d�vida � um dos monstros mais temidos de toda Rune-Midgard.";
				next;
				break;
				case 3:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 3:
		close;
	}
}