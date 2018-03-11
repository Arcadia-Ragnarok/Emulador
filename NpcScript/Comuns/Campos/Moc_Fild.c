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
	mes "[Hashisid]";
	mes "Mercen�rios s�o treinados para abordar seus inimigos sorrateiramente.";
	mes "Assim como esconder suas inten��es.";
	mes "Para isso, n�s nunca olhamos nossos alvos nos olhos.";
	next;
	switch(select("No��o de Mercen�rio", "Sair da conversa")) {
		case 1:
		mes "[Hashisid]";
		mes "Bem, ent�o..";
		mes "Vou te dizer o que s�o!";
		mes "Mercen�rios podem ser comumente conhecidos como infiltradores e assassinos que matam sem remorso.";
		next;
		mes "[Hashisid]";
		mes "Atualmente, a guilda dos Mercen�rios est� proibido de prejudicar pessoas inocentes.";
		mes "Ou pelo menos n�o sem uma boa raz�o.";
		next;
		mes "[Hashisid]";
		mes "Nossa verdadeira diretriz � assassinar criaturas mal�gnas.";
		mes "Usar nossa discri��o para coletar conhecimento para o bem de toda Rune-Midgard.";
		close;
		case 2:
		mes "[Hashisid]";
		mes "Era uma vez nossos ancestrais usavam um fumo chamado 'Mescal' antes de executar suas fun��es.";
		mes "No entanto, n�o podemos faz�-lo.";
		mes "Desde que insetos ou animais monstros se tornaram muito sens�veis ao cheiro.";
		next;
		mes "[Hashisid]";
		mes "N�s proibimos rigorosamente fumar ou comer tudo que tiver cheiro forte...";
		mes "Se alguma vez, tentar comer estes p�o de alho cheiroso com especiarias, e tentar se esconder desses javalis e lobos selvagens.";
		next;
		mes "[Hashisid]";
		mes "Acredite em mim, voc� ser� despeda�ado.";
		close;
	}
}

// ------------------------------------------------------------------
moc_fild16,211,254,4	script	La Conte#mocf	2_M_THIEFMASTER,{
	mes "[La Conte]";
	mes "Uma vez que os Gatunos s�o promovidos � Mercen�rios.";
	mes "O que � muito profissional eles s�o capazes de variar seus estilos de batalha.";
	mes "H� dois principais estilos de batalha dispon�veis para Mercen�rios.";
	mes "Eles podem brandir duas adagas, ou lutar com um conunto de Katares!";
	next;
	switch(select("Especialidade do Katar", "Especialidade da Adaga-Dupla", "Sair da conversa")) {
		case 1:
		mes "[La Conte]";
		mes "Um conjunto de Katares � usado em ambas as m�os.";
		mes "Permite aos Mercen�rios ferir rapidamente seus inimigos.";
		mes "Qualquer um pode comprar um conjunto de Katares em algum lugar em Morroc.";
		mes "� claro, s� Mercen�rios podem us�-los.";
		next;
		mes "[La Conte]";
		mes "O Katar direito normalmente causa mais dano.";
		mes "Enquanto o Katar esquerdo � usado para manter a sequ�ncia.";
		mes "Mas uma vez que os Katares est�o equipados nas m�os.";
		mes "Voc� n�o pode equipar um escudo ou uma arma extra.";
		next;
		mes "[La Conte]";
		mes "Comparado com Adagas Duplas, Katares tem maior velocidade de ataque.";
		mes "Al�m disso, a habilidade ^663399L�minas Destruidoras^000000.";
		mes "S� pode ser usada com Katares.";
		next;
		mes "[La Conte]";
		mes "Voc� pode aprender a habilidade L�minas Destruidoras quando estiver no ^663399N�vel 4 em Per�cia com Katar^000000.";
		mes "Se voc� for um Mercen�rio, � uma habilidade �til de saber.";
		next;
		mes "[La Conte]";
		mes "L�minas Destruidoras � a habilidade que inflinge 8 golpes cont�nuos de de dano Neutro.";
		close;
		case 2:
		mes "[La Conte]";
		mes "Adagas Duplas permitem que voc� equipe dois tipos diferentes de Adagas ao mesmo tempo.";
		mes "� claro, h� outras armas que voc� pode equipar al�m das adagas.";
		next;
		mes "[La Conte]";
		mes "Mas elas provavelmente ser�o desprovidas de velocidade no ataque.";
		mes "Ent�o eu sugiro adagas.";
		mes "Al�m disso, sem uma adaga na sua m�o direita, voc� n�o ser� capaz de usar a habilidade ^663399Ataque Duplo^000000.";
		next;
		mes "[La Conte]";
		mes "Ent�o com Adagas Duplas.";
		mes "Voc� tem um ataque duplo com a adaga da m�o direita, e um ataque �nico com a arma da m�o esquerda.";
		next;
		mes "[La Conte]";
		mes "Ent�o s�o tr�s ataquesem um �nico golpe!";
		mes "Voc� n�o pode argumentar contra este tipo de dano!";
		close;
		case 3:
		mes "[La Conte]";
		mes "Possivelmente voc� far� bom uso das armas que voc� t�m � disposi��o.";
		mes "Lembre-se a import�ncia de criar estrat�gias e planejar seus ataques.";
		close;
	}
}

// ------------------------------------------------------------------
moc_fild16,195,281,4	script	Mercen�rio Guardi�o#SinGuard	4_M_MOC_SOLDIER,{
	mes "[Mercen�rio Guardi�o]";
	if(BaseJob == Job_Assassin) {
		mes " Bem Vind" + (Sex == SEX_MALE ? "o" : "a") + ".";
		close;
	} else {
		switch(rand(4)) {
			case 1: mes " ........"; close;
			case 2: mes " Hmmm.........."; close;
			case 3: mes " Hmmm...voc� n�o deveria estar aqui....."; close;
			case 4: mes " Voc� est� entrando numa �rea proibida......."; close;
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
