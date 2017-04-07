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
| - Nota: Museu de Monstros em Juno                                 |
\*-----------------------------------------------------------------*/

yuno_in03,32,15,3	script	Guia do Museu#yuno	1_F_02,{
	mes "[Cenia]";
	mes "Bem-vindo ao Museu de Monstros.";
	next;
	switch(select("Museu de Monstros?","Dicas")) {
		case 1:
		mes "[Cenia]";
		mes "Neste museu, voc� pode ver cada criatura que habita Rune-Midgard, at� mesmo criaturas que voc� nunca viu.";
		next;
		mes "[Cenia]";
		mes "Os tubos de vidro foram desenvolvidos com uma tecnologia atual que � parte do Projteto de Schwartzwald.";
		mes "Tenha cuidado.";
		close;
		case 2:
		mes "[Cenia]";
		mes "Por favor verifique na op��o transparente da sua janela de Op��es ALT + O, se voc� quiser visualizar mais monstros.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in03,36,21,3	script	Deviace#yuno	DEVIACE,{ end; }
yuno_in03,33,21,1	script	#DEVIACE	HIDDEN_NPC,{
	mes " ";
	mes "Nome Cient�fico : Deviace";
	mes "Tamanho : M�dio";
	mes "Elemento : �gua";
	next;
	mes "Explica��o :";
	mes "Este monstro habita no profundo mar e tem um corpo redondo, com um acet�bulo do lado dorsal.";
	mes "Apesar de seus dentes afiados intimidarem, ele � muito pac�fico.";
	next;
	mes "Portanto, ele nunca inicia um ataque ou ataca algu�m a menos que ele seja atacado primeiro.";
	mes "No entando, se ele se irritar, poder� utilizar magias de grande n�vel.";
	mes "Ent�o � melhor ter cuidado com esse monstro.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,36,27,3	script	Foca#yuno	FUR_SEAL,{ end; }
yuno_in03,33,27,1	script	#FUR_SEAL	HIDDEN_NPC,{
	mes " ";
	mes "Nome Cient�fico : Foca";
	mes "Tamanho : M�dio";
	mes "Elemento : �gua";
	next;
	mes "Explica��o :";
	mes "Quando olhar atenciosamente para esse monstro, voc� perceber� que ele n�o � apenas uma foca.";
	mes "Existe um monstro n�o indentificado dentro da pele de foca.";
	next;
	mes "Existem rumores de que o monstro se disfar�a com a pele de foca para proteger sua delicada pele do clima.";
	mes "A pele de foca � um material muito resistente e necess�rio para pessoas que produzem casacos de inverno.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,36,33,3	script	Verme S�bio#yuno	SAGEWORM,{ end; }
yuno_in03,33,33,1	script	#SAGEWORM	HIDDEN_NPC,{
	mes " ";
	mes "Nome Cient�fico : Verme S�bio";
	mes "Tamanho : Pequeno";
	mes "Elemento : Neutro";
	next;
	mes "Explica��o :";
	mes "Um estranho monstro que possui a cabe�a de um antigo professor com uma cauda de verme.";
	mes "Embora seja fisicamente fraco, ele possui uma intelig�ncia que o ajuda e ajuda seus companheiros com habilidades m�gicas.";
	next;
	mes "Sua apar�ncia acad�mica indica que ele � visto geralmente pr�ximo a livros e prateleiras de livros.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,39,39,3	script	Penomena#yuno	PENOMENA,{ end; }
yuno_in03,38,39,1	script	#PENOMANA	HIDDEN_NPC,{
	mes " ";
	mes "Nome Cient�fico : Penomena";
	mes "Tamanho : M�dio";
	mes "Elemento : Veneno";
	next;
	mes "Explica��o :";
	mes "Esse monstro vive dentro das mais profundas cavernas onde exista bastante umidade para evitar que fique seco.";
	next;
	mes "Possui uma apar�ncia semelhante a da criatura Hidra.";
	mes "Por�m ela pode se mover para pr�ximo de seu inimigo usando pequenos ganchos existentes no seu acet�bulo.";
	next;
	mes "Os tent�culos longos e finos de seu corpo lan�am um veneno mortal, que � o suficiente para derrotar de uma vez seu inimigo.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,39,44,3	script	Galapago#yuno	GALAPAGO,{ end; }
yuno_in03,37,44,3	script	#GALAPAGO	HIDDEN_NPC,{
	mes " ";
	mes "Nome Cient�fico : Galapago";
	mes "Tamanho : Pequeno";
	mes "Elemento : Terra";
	next;
	mes "Explica��o :";
	mes "� um tipo de ave, mas infelizmente seu corpo � muito pesado para voar.";
	mes "� muito sens�vel � luz solar por isso carrega uma garrafa de �gua e usa �culos escuros o tempo inteiro.";
	next;
	mes "Embora ambicioso, est� sempre colaborando em ataques contra suas presas, assim como tamb�m seus predadores.";
	mes "Fora isso, Galapago geralmente � um monstro calmo.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,15,21,5	script	Raydric#yuno	RAYDRIC,{ end; }
yuno_in03,19,21,1	script	#RAYDRIC	HIDDEN_NPC,{
	mes " ";
	mes "Nome Cient�fico : Raydric";
	mes "Tamanho : Grande";
	mes "Elemento : Sombrio";
	next;
	mes "Explica��o :";
	mes "� uma 'armadura' controlada por um esp�rito guardi�o do castelo.";
	mes "O est� vinculado a esta armadura atrav�s de uma poderosa maldi��o.";
	next;
	mes "Desde que o Raydric passou a ser usado pelo guardi�o do castelo, ele possui r�pidos movimentos e um grande poder de ataque.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,15,27,5	script	Chepet#yuno	CHEPET,{ end; }
yuno_in03,19,27,1	script	#CHEPET	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Chepet";
	mes " Tamanho : M�dio";
	mes " Elemento : Fogo";
	next;
	mes "Explica��o :";
	mes "Uma criatura do mal por tr�s de uma linda marionete.";
	mes "Ela ataca com sua varinha que est� localizada na m�o da marionete.";
	mes "Um monstro muito raro que habita em poucos lugares.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,15,33,5	script	Violy#yuno	VIOLY,{ end; }
yuno_in03,19,33,1	script	#VIOLY	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Violy";
	mes " Tamanho : M�dio";
	mes " Elemento : Neutro";
	next;
	mes "Explica��o :";
	mes "Uma linda boneca com cabelos dourados.";
	mes "Como ela est� frequentemente tocando seu violino e com seu rosto encoberto.";
	mes "As pessoas n�o percebem de in�cio que ela � um monstro.";
	next;
	mes "Tenha cuidado ao se deparar com uma Violy.";
	mes "Caso contr�rio, ela ir� arrancar sua alma com seu canto encantador.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,10,39,5	script	Alice#yuno	ALICE,{ end; }
yuno_in03,12,39,1	script	#ALICE	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Alice";
	mes " Tamanho : M�dio";
	mes " Elemento : Neutro";
	next;
	mes "Explica��o :";
	mes "Alice � um rob� criado para ser uma empregada dom�stica.";
	mes "Ela � conhecida por permanecer trabalhar �rduamente e de ter continuado com suas tarefas mesmo com o castelo sendo abandonado.";
	next;
	mes "Sem grande poder aparente, o fato dela se mover e operar � um mist�rio cient�fico.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,10,45,5	script	Agressor#yuno	ASSULTER,{ end; }
yuno_in03,12,45,1	script	#ASSULTER	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Agressor";
	mes " Tamanho : M�dio";
	mes " Elemento : Vento";
	next;
	mes "Explica��o :";
	mes "Ao contr�rio de outras tartarugas da Ilha das Tartarugas.";
	mes "Esta tartaruga caminha sobre duas pernas e tamb�m as utiliza em ataques, empunhando uma grande shuriken a sua volta.";
	next;
	mes "Curiosamente, ele cria um clone para causar mais danos a seus perigosos inimigos.";
	mes "Ele causa um dano muito poderoso utilizando essa shuriken.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,38,50,3	script	Ovo de Peco Peco#yuno	PECOPECO_EGG,{ end; }

// ------------------------------------------------------------------
yuno_in03,34,54,3	script	Ovo de Besouro-Ladr�o#yuno	THIEF_BUG_EGG,{ end; }

// ------------------------------------------------------------------
yuno_in03,12,50,3	script	Ovo de Andre#yuno	ANT_EGG,{ end; }

// ------------------------------------------------------------------
yuno_in03,18,96,5	script	Andarilho#yuno	WANDER_MAN,{ end; }
yuno_in03,20,96,1	script	#WANDER_MAN	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Andarilho";
	mes " Tamanho : M�dio";
	mes " Elemento : Vento";
	next;
	mes "Explica��o :";
	mes "Guerreiro morto-vivo que voltou a vida atrav�s de uma maldi��o.";
	mes "Considerando sua habilidade t�cnica em esgrima, ele deve ter sido um honrado guerreiro enquanto vivia como humano.";
	next;
	mes "O Andarilho pode se mover surpreendentemente r�pido e pode matar in�migos com um �nico golpe de sua espada quebrada.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,100,5	script	Lagarta#yuno	CATERPILLAR,{ end; }
yuno_in03,18,100,1	script	#CATERPILLAR	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Lagarta";
	mes " Tamanho : Pequeno";
	mes " Elemento : Terra";
	next;
	mes "Explica��o :";
	mes "Embora os olhos desta criatura tenham atrofiado pelo fato dela viver sob a terra.";
	mes "Ele usa um tent�culo e um gancho em seu corpo para sentir os objetos em seu ambiente escuro.";
	next;
	mes "A larva � o antecessor da Creamy Amea�adora, a Creamy Avan�ada.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,104,5	script	Besouro-Ladr�o Macho#yuno	THIEF_BUG__,{ end; }
yuno_in03,18,104,1	script	#THIEF_BUG__	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Besouro-Ladr�o";
	mes " Tamanho : M�dio";
	mes " Elemento : Sombrio";
	next;
	mes "Explica��o :";
	mes "Embora tenha um corpo azul, � r�pido e voraz assim como os outros Besouros-Ladr�es.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,108,5	script	Trilobita#yuno	TRI_JOINT,{ end; }
yuno_in03,18,108,1	script	#TRI_JOINT	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Trilobita";
	mes " Tamanho : Pequeno";
	mes " Elemento : Terra";
	next;
	mes "Explica��o :";
	mes "Trilobita � um monstro pr�-hist�rico que � coberto por uma casca dura, e utiliza um apalpador em vez de olhos assim ele pode viver em lugares sombrios.";
	next;
	mes "Recentemente, foram descobertas muitas Trilobitas descobertas dentro de cavernas.";
	mes "S�bios gostam muito de estudar e aprender sobre a evolu��o de monstros em Rune-Midgard.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,111,5	script	Arclouse#yuno	ARCLOUSE,{ end; }
yuno_in03,18,111,1	script	#ARCLOUSE	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Arclouse";
	mes " Tamanho : M�dio";
	mes " Elemento : Terra";
	next;
	mes "Explica��o :";
	mes "� um monstro de casca dura que utiliza seu corpo para atacar seus oponentes.";
	mes "Arclouse tende a andar em grupos e elas s�o criaturas muito agressivas.";
	next;
	mes "Eles possuem uma velocidade de locomo��o incrivelmente r�pida.";
	mes "Ao contr�rio de outras criaturas parecidas, e muitas vezes sua velocidade � comparada a dos PecoPecos.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,117,5	script	Lavadeira#yuno	DRAGON_TAIL,{ end; }
yuno_in03,18,116,1	script	#DRAGON_TAIL	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Lavadeira";
	mes " Tamanho : M�dio";
	mes " Elemento : Vento";
	next;
	mes "Explica��o :";
	mes "Um inseto considerado como Lib�lula, ou Lavadeira.";
	mes "Ela usa sua poderosa cauda para sugar o sangue de seus inimigos, ou para pux�-los e adormec�-los com um veneno son�fero.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,46,96,3	script	Duque Coruja#yuno	OWL_DUKE,{ end; }
yuno_in03,44,96,1	script	#OWL_DUKE	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Duque Coruja";
	mes " Tamanho : Grande";
	mes " Elemento : Neutro";
	next;
	mes "Explica��o:";
	mes "Uma coruja que veste um traje elegante.";
	mes "Seu olhar � t�o intimidante como a sombra, sua apar�ncia � suave.";
	mes "O Duque Coruja n�o � exatamente uma coruja, mas sim um dem�nio com garras muito afiadas em seus grandes p�s.";
	next;
	mes "� h�bil em utilizar v�rias magias de luz.";
	mes "Quando v�-lo atacando um inimigo, voc� conhecer� o aristocr�ta Duque Coruja.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,100,3	script	Esfera Marinha#yuno	MARINE_SPHERE,{ end; }
yuno_in03,46,101,1	script	#MARINE_SPHERE	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Esfera Marinha";
	mes " Tamanho : Pequeno";
	mes " Elemento : �gua";
	next;
	mes "Explica��o :";
	mes "Uma estranha criatura que habita em mares profundos.";
	mes "Ela pode explodir e causar uma grande explos�o quando tocada, ganhando o nome de 'A Bomba do Mar.'";
	next;
	mes "Se uma Esfera Marinha for atingida por uma outra explos�o, uma explos�o em cadeia ser� ocasionada, e pode levar a uma perigosa rea��o em cadeia.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,104,3	script	Mandr�gora#yuno	MANDRAGORA,{ end; }
yuno_in03,46,105,1	script	#MANDRAGORA	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Mandr�gora";
	mes " Tamanho : M�dio";
	mes " Elemento : Terra";
	next;
	mes "Explica��o :";
	mes "Um inset�voro que engole qualquer coisa que vive.";
	mes "Quando encontra sua presa, ela sempre ataca primeiro com seus longos tent�culos para paraliz�-la.";
	next;
	mes "Uma vez paralizada, essa presa � presa pelos longos tent�culos e ap�s � digerida lentamente.";
	mes "Embobra este tubo possua a marca de uma caveira, Mandr�gora n�o possui nenhum veneno.";
	next;
	mes "Seu aparelho digestivo tamb�m � muito original, mas o seu cheiro irritante est� longe de ser atrativo as presas.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,108,3	script	Planta Carn�vora#yuno	GEOGRAPHER,{ end; }
yuno_in03,46,108,1	script	#GEOGRAPHER	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Planta Carn�vora";
	mes " Tamanho : M�dio";
	mes " Elemento : Terra";
	next;
	mes "Explica��o :";
	mes "Um inset�voro que aparenta ser um girassol.";
	mes "Ela a usa a sua p�tala como tent�culo em torno de sua boca para atrair e prender sua presa.";
	next;
	mes "Ao contr�rio da Mandr�gora, a Planta Carn�vora n�o possui um aparelho digest�vel para guardar sua presa.";
	mes "Ent�o, lentamente come sua presa, pouco a pouco.";
	next;
	mes "Embora a Planta Carn�vora seja pequena e com ra�zes curtas.";
	mes "As ra�zes s�o resistentes e forte o suficiente para suportar o peso da parte superior de seu corpo.";
	next;
	mes "O nome Planta Carn�vora surgiu ap�s a planta alimentar-se de seu criador, por isso nunca tome sempre cuidado e nunca se esque�a...";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,112,3	script	Rafflesia#yuno	RAFFLESIA,{ end; }
yuno_in03,46,112,1	script	#RAFFLESIA	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Rafflesia";
	mes " Tamanho : Pequeno";
	mes " Elemento : Terra";
	next;
	mes "Explica��o :";
	mes "Um monstro que est� em extin��o.";
	mes "Rafflesia � um monstro raro de Rune-Midgard e � protegido por lei.";
	next;
	mes "Devido a esta situa��o, a maioria dos S�bios est�o tendo dificuldade a pesquisar a respeito desse monstro.";
	mes "Por�m, alguns s�bios atualmente encontraram m�todos de cultivar e salvar as Rafflesias.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,116,3	script	Talo de Verme#yuno	STEM_WORM,{ end; }
yuno_in03,45,116,1	script	#STEM_WORM	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Talo de Verme";
	mes " Tamanho : M�dio";
	mes " Elemento : Vento";
	next;
	mes "Explica��o :";
	mes "Um Rabo-de-Verme mutado, possui corpo cinza acastanhado, com uma pequena cabe�a.";
	mes "� coberta com escamas e tem uma longa cauda que utiliza como chicote em ataques.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,24,124,3	script	Labareda#yuno	BLAZZER,{ end; }
yuno_in03,24,122,1	script	#BLAZZER	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Labareda";
	mes " Tamanho : M�dio";
	mes " Elemento : Fogo";
	next;
	mes "Explica��o :";
	mes "� uma bola de fogo que surge em zonas vulc�nicas.";
	mes "A causa repentina desse monstro � desconhecida.";
	mes "S�bios acreditam que eles surgiram ap�s atividades vulc�nicas ao redor de Juno.";
	next;
	mes "Labaredas expelem um g�s t�xico que � prejudicial.";
	mes "Desconhece-se e n�o a forma de ataque e comunica��o que as Labaredas utilizam.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,28,124,5	script	Rideword#yuno	RIDEWORD,{ end; }
yuno_in03,28,122,1	script	#RIDEWORD	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Rideword";
	mes " Tamanho : Pequeno";
	mes " Elemento : Neutro";
	next;
	mes "Explica��o :";
	mes "� um livro amaldi�oado com dentes afiados.";
	mes "Ele ataca qualquer coisa viva ao redor.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,31,124,3	script	Megalodon#yuno	MEGALODON,{ end; }
yuno_in03,31,122,1	script	#MEGALODON	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Megalodon";
	mes " Tamanho : M�dio";
	mes " Elemento : Morto-Vivo";
	next;
	mes "Explica��o :";
	mes "Um peixe-esqueleto que renasceu atrav�s de uma maldi��o.";
	mes "Embora pare�a muito amea�adora � benigna e n�o ataca viajantes submarinos sem antes ser atacado.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,35,124,3	script	Rochoso#yuno	SLEEPER,{ end; }
yuno_in03,35,122,1	script	#SLEEPER	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Rochoso";
	mes " Tamanho : M�dio";
	mes " Elemento : Sombrio";
	next;
	mes "Explica��o :";
	mes "Uma criatura da areia n�o identificada.";
	mes "Normalmente, ela permanece sob a terra, mas quando os viajantes pisam sob a areia, ele pode abruptamente aparecer para atacar.";
	next;
	mes "� menor do que o Arenoso e causa ataques indiretos, ocasionando uma tempestade de areia.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,39,124,3	script	M�mia Anci�#yuno	ANCIENT_MUMMY,{ end; }
yuno_in03,39,122,1	script	#ANCIENT_MUMMY	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : M�mia Anci�";
	mes " Tamanho : M�dio";
	mes " Elemento : Morto-Vivo";
	next;
	mes "Explica��o :";
	mes "Uma M�mia amaldi�oada com a vida eterna.";
	mes "Embora envolvida por faixas em decomposi��o, a M�mia Anci� tamb�m usa um enfeite de cabelo espl�ndido preso com uma cobra.";
	next;
	mes "Este tipo de ornamento de cabe�a indica que a antiga M�mia era uma importante pessoa enquanto vivia.";
	next;
	mes "A M�mia Anci� tem vagado pelo submundo faz bastante tempo, ela n�o tem qualquer consci�ncia e vontade de atacar.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,18,122,5	script	Incubus#yuno	INCUBUS,{ end; }
yuno_in03,19,120,1	script	#INCUBUS	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Incubus";
	mes " Tamanho : M�dio";
	mes " Elemento : Sombrio";
	next;
	mes "Explica��o :";
	mes "Este dem�nio atrai humanos com sua bel�ssima apar�ncia.";
	mes "Quando se depara com um homem humano, � chamado de Incubus.";
	mes "E com mulher, � chamada de Succubus.";
	next;
	mes "Esse dem�nio atinge seus alvos que possuem vulnerabilidade mental e quem podem eventualmente serem levados ao inferno.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,44,120,3	script	Succubus#yuno	SUCCUBUS,{ end; }
yuno_in03,42,120,1	script	#SUCCUBUS	HIDDEN_NPC,{
	mes " ";
	mes " Nome Cient�fico : Succubus";
	mes " Tamanho : M�dio";
	mes " Elemento : Sombrio";
	next;
	mes "Explica��o :";
	mes "Este dem�nio atrai humanos com sua bel�ssima apar�ncia.";
	mes "Quando se depara com uma mulher humana, � chamada de Succubus.";
	mes "E com homens, � chamado de Incubus.";
	next;
	mes "Esse dem�nio atinge seus alvos que possuem vulnerabilidade mental e quem podem eventualmente serem levados ao inferno.";
	close;
}