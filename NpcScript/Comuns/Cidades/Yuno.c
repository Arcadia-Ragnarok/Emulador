/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Por: eAthena/rAthena/Hercules                                   |
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade Juno (yuno)                         |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Ruas ] -
//-------------------------------------------------------------------
yuno,14,262,5	script	Funcion�rio#yun	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirig�vel que voa at� Izlude dentro do Reino de Rune-Midgard.";
	mes "E para Rachel na Rep�blica de Arunafeltz.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, des�a as escadas e pe�a para a Equipe de Recep��o lev�-lo at� o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}

//-------------------------------------------------------------------
yuno,88,263,3	script	Funcion�rio#yun2	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirig�vel que voa at� Einbroch, Lighthalzen e Hugel na Rep�blica de Schwaltzvalt.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, des�a as escadas e pe�a para a Equipe de Recep��o lev�-lo at� o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}

//-------------------------------------------------------------------
yuno,184,173,4	script	Freidrich#yun	4_F_NOVICE,{
	if (rand(1,5) == 1) {
		mes "[Freidrich]";
		mes "^3355FFJuno^000000 � mantida no ar por uma for�a anci� misteriosa.";
		next;
		mes "[Freidrich]";
		mes "Dizem que este poder vem de uma rel�quia de uma antiga civiliza��o chamada ^3355FFJuperos^000000.";
		mes "Que existia aqui muito antes de Juno.";
		next;
		mes "[Freidrich]";
		mes "Uma investiga��o revelou que o poder de Juno vem dos ^3355FFPeda�os do Cora��o de Ymir^000000.";
		mes "Ouvi dizer que esta fonte de poder � encontrada onde Juperos existia.";
		next;
		mes "[Freidrich]";
		mes "Desde que muitos estudiosos vieram a Juno para estudar e investigar esta fonte de poder.!";
		mes "Nossa cidade � basicamente uma capital dos estudiosos.";
		close;
	}
	else {
		mes "[Freidrich]";
		mes "A cidade dos s�bios, ^3355FFJuno,^000000 � constitu�da por tr�s ilhas.";
		next;
		mes "[Freidrich]";
		mes "S�o elas Solomon, a ilha da honra, Mineta, a ilha da prosperidade, e Snotora, a ilha do conhecimento.";
		next;
		mes "[Freidrich]";
		mes "Os locais destas ilhas s�o:";
		mes "Noroeste : Solomon";
		mes "Nordeste : Snotora";
		mes "Sul: Mineta.";
		close;
	}
}

//-------------------------------------------------------------------
yuno,337,227,4	script	Granny#yun	8_F_GRANDMOTHER,{
	mes "[Granny]";
	mes "Sou o S�bio Granny aquele que tudo prev�...";
	next;
	mes "[Granny]";
	mes "Voc� soube de um monstro chefe que est� a muito tempo pelos arredores de Juno?";
	mes "� chamado de ^FF3355Senhor da Morte^000000.";
	next;
	mes "[Granny]";
	mes "H� rumores de que ele veio do mundo dos mortos.";
	mes "Ele traz v�rios monstros morto-vivos consigo";
	mes "Pretendendo liderar criaturas vivas em seu frio e gelado reino.";
	next;
	mes "[Granny]";
	mes "Voc� j� deve ter escolhido se vai ou n�o enfentar o Senhor da Morte.";
	mes "Tudo que precisa fazer agora � saber porque voc� tomou essa decis�o.";
	close;
}

//-------------------------------------------------------------------
yuno,328,239,4	script	Lutador#yun	4_M_JOB_HUNTER,{
	mes "[Sergiof]";
	mes "Meu nome � Sergiof, o lutador que serve Granny.";
	next;
	mes "[Sergiof]";
	mes "Vou te falar sobre o ^3355FFGrande Peco^000000 que � um Peco Peco de level alto.";
	mes "O Grande Peco � mais r�pido que o Peco Peco e � bastante agressivo.";
	next;
	mes "[Sergiof]";
	mes "Ele ataca usando seu resistente bico e muitos Peco Peco o seguem.";
	mes "H� uma grande diferen�a entre o poder de um Peco Peco e do Grande Peco.";
	close;
}

//-------------------------------------------------------------------
yuno,343,68,4	script	Ninno#yun	4_M_JOB_ASSASSIN,{
	mes "[Ninno]";
	mes "J� ouviu falar em um rei Eg�pcio que acredita-se que � filho de um Deus?";
	mes "Seu nome � ^3355FFFara�^000000.";
	next;
	mes "[Ninno]";
	mes "H� rumores de que ele � um grande feiticeiro que amaldi�oou inocentes.";
	mes "Dizem que ele ainda esta por a�, amaldi�oando pessoas.";
	next;
	mes "[Ninno]";
	mes "Como aventureiro, � poss�vel que voc� o veja em suas viagens. Tenha cuidado...";
	close;
}

//-------------------------------------------------------------------
yuno,165,111,4	script	S�bio#yun	2_F_MAGICMASTER,,{
	mes "[Le Morpheus]";
	mes "^3355FFApocalypse^000000...";
	mes "� o nome do androide que costumava proteger Juno h� muito tempo.";
	next;
	mes "[Le Morpheus]";
	mes "Devido sua intelig�ngia artificial ter se corrompido com o passar do tempo";
	mes "Ele n�o pode mais distinguir inimigos de aliados.";
	mes "Infelizmente, este andr�ide n�o passa de um monstro est�pido agora.";
	close;
}

//-------------------------------------------------------------------
yuno,157,205,4	script	Artes�o#yun	1_M_JOBGUIDER,{
	mes "[Artes�o]";
	mes "*Resmungo resmungo...*";
	next;
	mes "[Artes�o]";
	mes "Oh, como vai.";
	mes "Deixe me apresentar.";
	mes "Eu sou um artes�o que est� tentando continuar as tradi��es e os deveres dos artes�es mestres daqui de Juno.";
	next;
	switch(select("Equipamentos Poderosos","Itens �nicos","Comidas Tradicionais","Finalizar Conversa")) {
		case 1:
		mes "[Artes�o]";
		mes "Deixe-me sugerir o ^3355FFArauto Divino^000000 e a ^3355FFVingadora Sagrada^000000 que s�o itens especiais para Templ�rios.";
		next;
		mes "[Artes�o]";
		mes "Estes equipamentos s�o bem leves e t�m muito potencial.";
		mes "Eles te fazem possuir o poder divino.";
		next;
		mes "[Artes�o]";
		mes "Portanto, este equipamento � mais forte sobre alguns tipos de monstros, como fantasmas ou mortos-vivos.";
		next;
		mes "[Artes�o]";
		mes "Entretanto, h� rumores de que s� alguns Templ�rios escolhidos est�o aptos a obter estes itens, devido a suas raridades.";
		close;
		case 2:
		mes "[Artes�o]";
		mes "Parece que um pergaminho marcado com um pentagrama.";
		mes "Entretanto o ^FF3355Pergaminho Antigo^000000 � muito antigo, � procurado por muitos S�bios para fins de investiga��o.";
		next;
		mes "[Artes�o]";
		mes "Parece que voc� pode usar este item quando conjurar uma magia de alto n�vel.";
		close;
		case 3:
		mes "[Artes�o]";
		mes "^3355FFBolinho de Arroz^000000!";
		mes "Sim, � uma comida tradicional fornecida por v�rias pessoas.";
		mes "H� um monte de lembran�as nost�lgicas de antigos mercadores referente ao Bolinho de Arroz.";
		next;
		mes "[Artes�o]";
		mes "Ahhh";
		mes "Eu queria poder comer um Bolinho de Arroz agora.";
		close;
		case 4:
		mes "[Artes�o]";
		mes "Embora Juno seja conhecida como cidade dos s�bios,espero que entenda que pessoas comuns vivem aqui tamb�m.";
		mes "Por favor, aproveite a atmosfera �nica que Juno tem a oferecer.";
		close;
	}
}

//-------------------------------------------------------------------
yuno,150,283,4	script	Soldado#yun	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Existe aqui perto um monstro chamado de Golem de Lava.";
	mes "Este Golem � feito de um cora��o de pedra cuja pot�ncia foi amplificada por magia.";
	next;
	mes "[Soldado de Juno]";
	mes "A lava que fica escorrendo de seu corpo � t�o quente que pode derreter as armaduras e armas feitas de a�o de alta qualidade.";
	next;
	mes "[Soldado de Juno]";
	mes "� melhor voc� tomar cuidado quando encontrar este monstro. Destruir� seus equipamentos em um piscar de olhos.";
	close;
}

//-------------------------------------------------------------------
yuno,165,283,4	script	Soldado#yun2	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Planta Carn�vora...";
	mes "Este monstro parece uma flor brotando do ch�o.";
	next;
	mes "[Soldado de Juno]";
	mes "Estranhamente, ela pode estender seu corpo a longas dist�ncias.";
	mes "Mesmo se voc� estiver de longe, ela pode ser uma amea�a.";
	next;
	mes "[Soldado de Juno]";
	mes "O nome deste monstro, originou-se da hist�ria de um pobre ge�grafo.";
	mes "Que infelizmente, foi devorado por este monstro enquanto ele estava concentrado nos estudos.";
	close;
}

//-------------------------------------------------------------------
yuno,227,292,4	script	Soldado#yun3	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Pr�ximo a Juno, existe um falso anjo chamado 'Anjo Fajuto'.";
	mes "Ele finge ser inocente, parecendo aben�oar aventureiros e ent�o ele os ataca pelas costas, sem qualquer aviso.";
	next;
	mes "[Soldado de Juno]";
	mes "N�o se engane pelas apar�ncias ou voc� vai ter s�rios problemas.";
	close;
}

//-------------------------------------------------------------------
yuno,165,228,4	script	Soldado#yun4	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "'Bode' � um monstro que foi um ant�lope e vive em montanhas altas, agora n�o passa de um monstro qualquer.";
	next;
	mes "[Soldado de Juno]";
	mes "Mesmo se voc� conseguir esquivar-se de seus chifres, ainda precisa tomar cuidado com suas poderosas pernas.";
	next;
	mes "[Soldado de Juno]";
	mes "As pernas do Bode s�o muito fortes, porque est� sempre escalando penhascos quando n�o est� matando inocentes.";
	close;
}

//-------------------------------------------------------------------
yuno,150,228,4	script	Soldado#yun5	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Voc� j� viu";
	mes "um Jellopy Tamanho Fam�lia?";
	mes "Elas s�o enooormes!";
	next;
	mes "[Soldado de Juno]";
	mes "� dif�cil de acreditar mais � o maior e mais brilhante jellopy que existe!";
	close;
}

//-------------------------------------------------------------------
yuno,334,182,4	script	Soldado#yun6	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Entre as armas dos S�bios, existe a 'Adaga Certeira'.";
	next;
	mes "[Soldado de Juno]";
	mes "Seu uso � restrito a S�bios, e aumenta a chance de inflingir ataques cr�ticos.";
	mes "Assim, para os S�bios, esta adaga pode ser muito �til, bem como dar mais estilo a eles em batalhas.";
	close;
}

//-------------------------------------------------------------------
yuno,263,320,4	script	Soldado#yun7	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "� um longo e estreito escudo com asas de anjo gravadas no centro da frente.";
	mes "� especialmente poderoso contra Dem�nios e Mortos-Vivos.";
	close;
}