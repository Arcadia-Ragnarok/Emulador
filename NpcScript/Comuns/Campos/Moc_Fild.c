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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns nos Campos de Morroc                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
moc_fild16,199,212,4	script	Hashisid#moc	1_M_JOBTESTER,{
	mes("[Hashisid]\n Mercen�rios s�o treinados para abordar seus inimigos sorrateiramente.\n Assim como esconder suas inten��es.\n Para isso, n�s nunca olhamos nossos alvos nos olhos.");
	next;
	switch(select("No��o de Mercen�rio", "Sair da conversa")) {
		case 1:
		mes("[Hashisid]\n Bem, ent�o..\n Vou te dizer o que s�o!\n Mercen�rios podem ser comumente conhecidos como infiltradores e assassinos que matam sem remorso.");
		next;
		mes("[Hashisid]\n Atualmente, a guilda dos Mercen�rios est� proibido de prejudicar pessoas inocentes.\n Ou pelo menos n�o sem uma boa raz�o.");
		next;
		mes("[Hashisid]\n Nossa verdadeira diretriz � assassinar criaturas mal�gnas.\n Usar nossa discri��o para coletar conhecimento para o bem de toda Rune-Midgard.");
		close;
		case 2:
		mes("[Hashisid]\n Era uma vez nossos ancestrais usavam um fumo chamado 'Mescal' antes de executar suas fun��es.\n No entanto, n�o podemos faz�-lo.\n Desde que insetos ou animais monstros se tornaram muito sens�veis ao cheiro.");
		next;
		mes("[Hashisid]\n N�s proibimos rigorosamente fumar ou comer tudo que tiver cheiro forte...\n Se alguma vez, tentar comer estes p�o de alho cheiroso com especiarias, e tentar se esconder desses javalis e lobos selvagens.");
		next;
		mes("[Hashisid]\n Acredite em mim, voc� ser� despeda�ado.");
		close;
	}
}

// ------------------------------------------------------------------
moc_fild16,211,254,4	script	La Conte#mocf	2_M_THIEFMASTER,{
	mes("[La Conte]\n Uma vez que os Gatunos s�o promovidos � Mercen�rios.\n O que � muito profissional eles s�o capazes de variar seus estilos de batalha.\n H� dois principais estilos de batalha dispon�veis para Mercen�rios.\n Eles podem brandir duas adagas, ou lutar com um conunto de Katares!");
	next;
	switch(select("Especialidade do Katar", "Especialidade da Adaga-Dupla", "Sair da conversa")) {
		case 1:
		mes("[La Conte]\n Um conjunto de Katares � usado em ambas as m�os.\n Permite aos Mercen�rios ferir rapidamente seus inimigos.\n Qualquer um pode comprar um conjunto de Katares em algum lugar em Morroc.\n � claro, s� Mercen�rios podem us�-los.");
		next;
		mes("[La Conte]\n O Katar direito normalmente causa mais dano.\n Enquanto o Katar esquerdo � usado para manter a sequ�ncia.\n Mas uma vez que os Katares est�o equipados nas m�os.\n Voc� n�o pode equipar um escudo ou uma arma extra.");
		next;
		mes("[La Conte]\n Comparado com Adagas Duplas, Katares tem maior velocidade de ataque.\n Al�m disso, a habilidade ^663399L�minas Destruidoras^000000.\n S� pode ser usada com Katares.");
		next;
		mes("[La Conte]\n Voc� pode aprender a habilidade L�minas Destruidoras quando estiver no ^663399N�vel 4 em Per�cia com Katar^000000.\n Se voc� for um Mercen�rio, � uma habilidade �til de saber.");
		next;
		mes("[La Conte]\n L�minas Destruidoras � a habilidade que inflinge 8 golpes cont�nuos de de dano Neutro.");
		close;
		case 2:
		mes("[La Conte]\n Adagas Duplas permitem que voc� equipe dois tipos diferentes de Adagas ao mesmo tempo.\n � claro, h� outras armas que voc� pode equipar al�m das adagas.");
		next;
		mes("[La Conte]\n Mas elas provavelmente ser�o desprovidas de velocidade no ataque.\n Ent�o eu sugiro adagas.\n Al�m disso, sem uma adaga na sua m�o direita, voc� n�o ser� capaz de usar a habilidade ^663399Ataque Duplo^000000.");
		next;
		mes("[La Conte]\n Ent�o com Adagas Duplas.\n Voc� tem um ataque duplo com a adaga da m�o direita, e um ataque �nico com a arma da m�o esquerda.");
		next;
		mes("[La Conte]\n Ent�o s�o tr�s ataquesem um �nico golpe!\n Voc� n�o pode argumentar contra este tipo de dano!");
		close;
		case 3:
		mes("[La Conte]\n Possivelmente voc� far� bom uso das armas que voc� t�m � disposi��o.\n Lembre-se a import�ncia de criar estrat�gias e planejar seus ataques.");
		close;
	}
}

// ------------------------------------------------------------------
moc_fild16,195,281,4	script	Mercen�rio Guardi�o#SinGuard	4_M_MOC_SOLDIER,{
	mes("[Mercen�rio Guardi�o]");
	if(BaseJob == Job_Assassin) {
		mes(" Bem Vind" + (Sex == SEX_MALE ? "o" : "a") + ".");
		close;
	} else {
		switch(rand(4)) {
			case 1: mes(" ........"); close;
			case 2: mes(" Hmmm.........."); close;
			case 3: mes(" Hmmm...voc� n�o deveria estar aqui....."); close;
			case 4: mes(" Voc� est� entrando numa �rea proibida......."); close;
		}
	}
}
moc_fild16,204,281,4	duplicate(Mercen�rio Guardi�o#SinGuard)	Mercen�rio Guardi�o#SinGuard2	4_M_MOC_SOLDIER
moc_fild16,207,281,4	duplicate(Mercen�rio Guardi�o#SinGuard)	Mercen�rio Guardi�o#SinGuard3	4_M_MOC_SOLDIER
moc_fild16,216,281,4	duplicate(Mercen�rio Guardi�o#SinGuard)	Mercen�rio Guardi�o#SinGuard4	4_M_MOC_SOLDIER
moc_fild16,200,231,4	duplicate(Mercen�rio Guardi�o#SinGuard)	Mercen�rio Guardi�o#SinGuard5	4_M_MOC_SOLDIER
moc_fild16,211,231,4	duplicate(Mercen�rio Guardi�o#SinGuard)	Mercen�rio Guardi�o#SinGuard6	4_M_MOC_SOLDIER
moc_fild16,200,257,4	duplicate(Mercen�rio Guardi�o#SinGuard)	Mercen�rio Guardi�o#SinGuard7	4_M_MOC_SOLDIER
moc_fild16,211,257,4	duplicate(Mercen�rio Guardi�o#SinGuard)	Mercen�rio Guardi�o#SinGuard8	4_M_MOC_SOLDIER
