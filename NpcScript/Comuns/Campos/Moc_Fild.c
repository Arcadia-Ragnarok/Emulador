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
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns nos Campos de Morroc                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
moc_fild16,199,212,4	script	Hashisid#moc	1_M_JOBTESTER,{
	mes("[Hashisid]\n Mercenários são treinados para abordar seus inimigos sorrateiramente.\n Assim como esconder suas intenções.\n Para isso, nós nunca olhamos nossos alvos nos olhos.");
	next;
	switch(select("Noção de Mercenário", "Sair da conversa")) {
		case 1:
		mes("[Hashisid]\n Bem, então..\n Vou te dizer o que são!\n Mercenários podem ser comumente conhecidos como infiltradores e assassinos que matam sem remorso.");
		next;
		mes("[Hashisid]\n Atualmente, a guilda dos Mercenários está proibido de prejudicar pessoas inocentes.\n Ou pelo menos não sem uma boa razão.");
		next;
		mes("[Hashisid]\n Nossa verdadeira diretriz é assassinar criaturas malígnas.\n Usar nossa discrição para coletar conhecimento para o bem de toda Rune-Midgard.");
		close;
		case 2:
		mes("[Hashisid]\n Era uma vez nossos ancestrais usavam um fumo chamado 'Mescal' antes de executar suas funções.\n No entanto, não podemos fazê-lo.\n Desde que insetos ou animais monstros se tornaram muito sensíveis ao cheiro.");
		next;
		mes("[Hashisid]\n Nós proibimos rigorosamente fumar ou comer tudo que tiver cheiro forte...\n Se alguma vez, tentar comer estes pão de alho cheiroso com especiarias, e tentar se esconder desses javalis e lobos selvagens.");
		next;
		mes("[Hashisid]\n Acredite em mim, você será despedaçado.");
		close;
	}
}

// ------------------------------------------------------------------
moc_fild16,211,254,4	script	La Conte#mocf	2_M_THIEFMASTER,{
	mes("[La Conte]\n Uma vez que os Gatunos são promovidos à Mercenários.\n O que é muito profissional eles são capazes de variar seus estilos de batalha.\n Há dois principais estilos de batalha disponíveis para Mercenários.\n Eles podem brandir duas adagas, ou lutar com um conunto de Katares!");
	next;
	switch(select("Especialidade do Katar", "Especialidade da Adaga-Dupla", "Sair da conversa")) {
		case 1:
		mes("[La Conte]\n Um conjunto de Katares é usado em ambas as mãos.\n Permite aos Mercenários ferir rapidamente seus inimigos.\n Qualquer um pode comprar um conjunto de Katares em algum lugar em Morroc.\n É claro, só Mercenários podem usá-los.");
		next;
		mes("[La Conte]\n O Katar direito normalmente causa mais dano.\n Enquanto o Katar esquerdo é usado para manter a sequência.\n Mas uma vez que os Katares estão equipados nas mãos.\n Você não pode equipar um escudo ou uma arma extra.");
		next;
		mes("[La Conte]\n Comparado com Adagas Duplas, Katares tem maior velocidade de ataque.\n Além disso, a habilidade ^663399Lâminas Destruidoras^000000.\n Só pode ser usada com Katares.");
		next;
		mes("[La Conte]\n Você pode aprender a habilidade Lâminas Destruidoras quando estiver no ^663399Nível 4 em Perícia com Katar^000000.\n Se você for um Mercenário, é uma habilidade útil de saber.");
		next;
		mes("[La Conte]\n Lâminas Destruidoras é a habilidade que inflinge 8 golpes contínuos de de dano Neutro.");
		close;
		case 2:
		mes("[La Conte]\n Adagas Duplas permitem que você equipe dois tipos diferentes de Adagas ao mesmo tempo.\n É claro, há outras armas que você pode equipar além das adagas.");
		next;
		mes("[La Conte]\n Mas elas provavelmente serão desprovidas de velocidade no ataque.\n Então eu sugiro adagas.\n Além disso, sem uma adaga na sua mão direita, você não será capaz de usar a habilidade ^663399Ataque Duplo^000000.");
		next;
		mes("[La Conte]\n Então com Adagas Duplas.\n Você tem um ataque duplo com a adaga da mão direita, e um ataque único com a arma da mão esquerda.");
		next;
		mes("[La Conte]\n Então são três ataquesem um único golpe!\n Você não pode argumentar contra este tipo de dano!");
		close;
		case 3:
		mes("[La Conte]\n Possivelmente você fará bom uso das armas que você têm à disposição.\n Lembre-se a importância de criar estratégias e planejar seus ataques.");
		close;
	}
}

// ------------------------------------------------------------------
moc_fild16,195,281,4	script	Mercenário Guardião#SinGuard	4_M_MOC_SOLDIER,{
	mes("[Mercenário Guardião]");
	if(BaseJob == Job_Assassin) {
		mes(" Bem Vind" + (Sex == SEX_MALE ? "o" : "a") + ".");
		close;
	} else {
		switch(rand(4)) {
			case 1: mes(" ........"); close;
			case 2: mes(" Hmmm.........."); close;
			case 3: mes(" Hmmm...você não deveria estar aqui....."); close;
			case 4: mes(" Você está entrando numa área proibida......."); close;
		}
	}
}
moc_fild16,204,281,4	duplicate(Mercenário Guardião#SinGuard)	Mercenário Guardião#SinGuard2	4_M_MOC_SOLDIER
moc_fild16,207,281,4	duplicate(Mercenário Guardião#SinGuard)	Mercenário Guardião#SinGuard3	4_M_MOC_SOLDIER
moc_fild16,216,281,4	duplicate(Mercenário Guardião#SinGuard)	Mercenário Guardião#SinGuard4	4_M_MOC_SOLDIER
moc_fild16,200,231,4	duplicate(Mercenário Guardião#SinGuard)	Mercenário Guardião#SinGuard5	4_M_MOC_SOLDIER
moc_fild16,211,231,4	duplicate(Mercenário Guardião#SinGuard)	Mercenário Guardião#SinGuard6	4_M_MOC_SOLDIER
moc_fild16,200,257,4	duplicate(Mercenário Guardião#SinGuard)	Mercenário Guardião#SinGuard7	4_M_MOC_SOLDIER
moc_fild16,211,257,4	duplicate(Mercenário Guardião#SinGuard)	Mercenário Guardião#SinGuard8	4_M_MOC_SOLDIER
