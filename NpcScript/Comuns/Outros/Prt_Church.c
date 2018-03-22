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
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na Catedral de Prontera                       |
\*-----------------------------------------------------------------*/

prt_church,103,76,0	script	Garnet#pront	1_F_02,{
	mes "[Garnet]";
	mes "Ol�! Sou a Garnet, pode me chamar de Garn...";
	mes "Mas ent�o.";
	mes "Voc� gostaria de fazer o bem para os outros?";
	mes "As habilidades dos Sacerdotes s�o feitas para isso!";
	mes "Se voc� se interessa por esta voca��o, de ajudar e dedicar sua vida ao bem estar alheio, voc� pode ser um de n�s!";
	next;
	mes "[Garnet]";
	mes "Com os poderes divinos, podemos restaurar o corpo mais cansado ou acordar a for�a total de um aventureiro!";
	mes "Fique � vontade, me pergunte o que quiser, viu?";
	mes "Meu conhecimento est� � sua disposi��o. Sobre qual habilidade voc� quer saber mais?";
	next;
	.@SkillChat = 1;
	while (.@SkillChat) {
		switch (select("Sobre 'Curar'","Sobre 'Medicar'","Sobre 'Aumentar Agilidade'","Sobre 'Angelus'","Sobre 'Ben��o'","Sobre 'Portal'","N�o me interesso muito por sacerdotes...")) {
			case 1:
			mes "[Garnet]";
			mes "'Curar' � uma habilidade que restaura o HP do alvo.";
			mes "� uma das habilidades mais valiosas de um sacerdote, e vital para proteger e ajudar ao pr�ximo.";
			mes "Os Sacerdotes t�m uma evolu��o desta habilidade de nome 'Santu�rio'.";
			mes "Que possibilita curar mais de uma pessoa ao mesmo tempo.";
			next;
			mes "[Garnet]";
			mes "Mas deixe eu te contar um segredo...";
			mes "Se usada em monstros Malditos, como os mortos-vivos...Ela causa dano!";
			mes "Isso porque estes monstros s�o especialmente fracos contra poderes Sagrados.";
			mes "S� n�o se esque�a de apertar a tecla 'shift' ao 'cur�-los'.";
			next;
			break;
			case 2:
			mes "[Garnet]";
			mes "'Medicar'� uma habilidade que pode retirar de um jogador algum estado especial.";
			mes "Como Tontura ou Maldi��o.";
			mes "Para aprend�-la � necess�rio obter primeiro 'Curar' n�vel 2.";
			next;
			break;
			case 3:
			mes "[Garnet]";
			mes "Esta habilidade aumenta o n�mero de pontos de Agilidade do jogador alvo.";
			mes "Beneficiando a velocidade dos ataques e a esquiva, al�m de fazer com que ele ande mais r�pido.";
			mes "Ela favorece especialmente os Gatunos e Arqueiros.";
			mes "Que costumam depender bastante da Agilidade nas batalhas.";
			mes "Para aprend�-la, � necess�rio primeiro ter 'Curar' em n�vel 3.";
			next;
			break;
			case 4:
			mes "[Garnet]";
			mes "Angelus � uma habilidade que aumenta a Defesa de um Grupo todo ao mesmo tempo.";
			mes "Fazendo com que todos resistam melhor � ataques inimigos.";
			mes "Mas, lembre-se que ela aumentar� a defesa proporcionalmente � Vitalidade de cada jogador";
			mes "Ent�o os efeitos ser�o diferentes pra cada um.";
			next;
			mes "[Garnet]";
			mes "Para obter esta habilidade, o n�vel de Prote��o Divina.";
			mes "Uma habilidade que aumenta a Defesa do Sacerdote contra monstros Malditos, deve ser pelo menos 3.";
			mes "Tendo aprendido Angelus, voc� poder� obter uma habilidade muito valiosa quando se tornar um Sacerdote...";
			mes "Esta habilidade chama-se Kyrie Eleison";
			mes "Que protege o jogador alvo de qualquer dano por um determinado n�mero de ataques.";
			next;
			break;
			case 5:
			mes "[Garnet]";
			mes "'Ben��o' aumenta temporariamente os pontos do jogador alvo em For�a, Destreza e Intelig�ncia.";
			mes "� uma das habilidades mais valiosas tanto para voc� quanto para seus companheiros!";
			next;
			mes "[Garnet]";
			mes "Assim como 'Angelus', para aprender 'Ben��o'";
			mes "� necess�rio ter algum n�vel em Prote��o Divina em n�vel 5.";
			mes "N�o se esque�a, 'Ben��o' pode ser muito �til para o pr�prio Sacerdote.";
			mes "J� que com mais Intelig�ncia, habilidades como 'Curar' ser�o mais poderosos...";
			next;
			break;
			case 6:
			mes "[Garnet]";
			mes "Para aprender a abrir um 'Portal', voc� precisa primeiro aprender 'Teleporte'.";
			mes "Para aprender 'Teleporte' � necess�rio obter antes 'Revela��o'";
			mes "Que permite detectar monstros escondidos e tem apenas um n�vel de habilidade.";
			mes "'Portal' � uma habilidade muito �til.";
			mes "Vou te explicar melhor como funciona.";
			next;
			mes "[Garnet]";
			mes "Abrir um 'Portal' faz com que voc� possa se transportar entre locais.";
			mes "muitos distantes num piscar de olhos.";
			mes "Voc� pode escolher at� 4 lugares (no n�vel 4 da habilidade) para onde abrir um portal.";
			mes "Um destes lugares ser� obrigatoriamente onde voc� salvou seu Ponto de In�cio.";
			next;
			mes "[Garnet]";
			mes "Como se faz para 'marcar' um lugar como destino de um portal?";
			mes "� s� digitar /memo no local que voc� desejar e ele ser� marcado.";
			mes "Lembre-se que n�o � poss�vel marcar um portal dentro de um calabou�o.";
			mes "E cuidado, pois esta habilidade gasta muito SP e dependendo da situa��o.";
			mes "Isso pode te deixar em maus len��is!";
			next;
			mes "[Garnet]";
			mes "Ah! E o mais importante!";
			mes "� necess�rio usar a energia de uma Gema Azul para abrir um portal.";
			mes "Se voc� n�o tiver uma Gema Azul para 'gastar', o portal simplesmente n�o abre!";
			next;
			break;
			case 7:
			mes "["+strcharinfo(0)+"]";
			mes "Independente do seu interesse, sempre estaremos aqui para ajuda-lo";
			close2;
			.@SkillChat = 0;
			break;
		}
	}
	end;
}

//-------------------------------------------------------------------
prt_church,103,71,0	script	Henson#pront	2_M_PHARMACIST,{
	mes "[Henson]";
	mes "� muito bom poder ajudar ao pr�ximo...";
	mes "No entanto, n�o � s� disso que vive um servo do Senhor.";
	mes "Nossa miss�o tamb�m � a de proteger o mundo dos amaldi�oados e dos dem�nios.";
	mes "Os Sacerdotes devem ser capazes de lutar contra as legi�es Malditas em nome do Senhor!";
	mes "Por isso, temos habilidades que nos favorecem contra os servos do Mal.";
	mes "Quer saber mais sobre alguma delas?";
	next;
	.@SkillChat = 1;
	while (.@SkillChat) {
		switch (select("Sobre 'Prote��o Divina'","Sobre 'Flagelo do Mal'","Sobre 'Diminuir Agilidade'","Sobre 'Signum Crusis'","Sobre 'Escudo Sagrado'","Sobre 'Revela��o'","Sobre 'Teleporte'","Na verdade, n�o.")) {
			case 1:
			mes "[Henson]";
			mes "Para aumentar sua resist�ncia aos ataques Malditos e de D�monios voc� precisa desta habilidade.";
			mes "Esta � uma habilidade passiva, e portanto sem limite de tempo ou gasto de SP.";
			next;
			mes "[Henson]";
			mes "Subindo o n�vel da habilidade at� 3, voc� pode aprender 'Flagelo do Mal'";
			mes "Que aumenta o ataque contra os monstros Malditos e D�monios.";
			mes "'Angelus' tamb�m pode ser usada para aumentar a defesa e 'Ben��o'";
			mes "Para aumentar sua For�a, Destreza e Intelig�ncia temporariamente.";
			mes "Como voc� pode ver, temos muitas armas contra o mal...Hehehe.";
			next;
			break;
			case 2:
			mes "[Henson]";
			mes "'Flagelo do Mal' aumenta o dano de ataques contra os monstros Malditos e D�monios.";
			mes "Ele requer 'Prote��o Divina' n�vel 3, e assim como esta, � uma habilidade passiva e sem gasto de SP.";
			next;
			mes "[Henson]";
			mes "Com n�vel 3 em 'Flagelo do Mal' voc� pode aprender 'Signum Crusis'";
			mes "Que diminui a defesa destes monstros.";
			next;
			break;
			case 3:
			mes "[Henson]";
			mes "Esta habilidade diminui a Agilidade dos inimigos.";
			mes "Com isso, diminui tamb�m a velocidade de ataque e esquiva deles.";
			mes "Para aprend�-la � necess�rio pelo menos um ponto de habilidade em 'Aumentar Agilidade'.";
			next;
			break;
			case 4:
			mes "[Henson]";
			mes "Esta habilidade diminui a Defesa de monstros de propriedade Maldita ou de Escurid�o...";
			mes "Ela funciona numa �rea de alcance bem grande, quase todo o espa�o da tela!";
			mes "Por�m, a chance de sucesso dela � pequena e costuma falhar bastante.  Lembre-se disso!";
			next;
			mes "[Henson]";
			mes "Para usar esta habilidade, � necess�rio ter 'Flagelo do Mal' em n�vel 3.";
			next;
			break;
			case 5:
			mes "[Henson]";
			mes "Tendo maximizado 'Portal', voc� poder� aprender esa habilidade.";
			mes "Ela permite que voc� crie um escudo protetor contra ataques de proj�teis como flechas, pedras ou balas.";
			next;
			break;
			case 6:
			mes "[Henson]";
			mes "Esta habilidade permite detectar monstros (e jogadores) escondidos.";
			mes "Quando revelados, eles sofrer�o um ataque de propriedade Sagrada.";
			mes "Este ataque varia em poder de acordo com a Intelig�ncia do Padre.";
			mes "� um pr�-requisito para aprender 'Teleporte' e 'Portal'.";
			next;
			break;
			case 7:
			mes "[Henson]";
			mes "'Teleporte' � aprendida ap�s obter-se 1 n�vel em 'Revela��o'.";
			mes "Em n�vel 1 ela permite que voc� se teleporte para um lugar qualquer dentro do mapa";
			mes "Em que voc� se encontra.";
			mes "Cuidado para n�o cair em algum lugar perigoso!";
			mes "No n�vel 2, 'Teleporte' permite mandar o personagem de volta ao Ponto de In�cio, onde ele salvou.";
			next;
			mes "[Henson]";
			mes "Depois de 'Teleporte', voc� pode aprender 'Portal'";
			mes "Que permite teleportar outros personagens tamb�m, para �reas � sua escolha.";
			next;
			break;
			case 8:
			mes "[Henson]";
			mes "Eu sempre estarei disposto a ajuda-lo.";
			close2;
			.@SkillChat = 0;
			break;
		}
	}
	end;
}
