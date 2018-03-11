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
| - Nota: Npcs comuns nos Campos de Geffen                          |
\*-----------------------------------------------------------------*/

gef_fild10,238,202,6	script	Cientista Maluco#orc	4_LGTSCIENCE,{
	mes "[Cientista Maluco]";
	mes "Haha, nenhum orc está vindo me atacar!";
	mes "O poder da Máquina do Tempo é invencível!!";
	next;
	switch(select("Os orcs não te atacam?", "O faz aqui?!...")) {
		case 1:
		mes "[Cientista Maluco]";
		mes "Pois é..";
		mes "Sei que é difícil de acreditar.";
		mes "Mas eu não te culpo.";
		mes "Eu comecei a estudar uma Máquina do Tempo, descoberta próximo de Morroc.";
		mes "De acordo com a minha pesquisa.";
		mes "Os minerais encontrados dentro dela contém extremo poder!";
		next;
		break;
		case 2:
		mes "[Cientista Maluco]";
		mes "Você é uma pessoa bem desconfiada, né?";
		next;
		mes "[Cientista Maluco]";
		mes "Consegue ver aquela estátua ali?";
		mes "Não é seu monolito natural!";
		next;
		mes "[Cientista Maluco]";
		mes "Eu a criei a partir de uma junção da nossa tecnologia com a energia ilimitada que encontrei!";
		mes "Gostaria de tentar?";
		next;
		select("... Hm, isso não seria ilegal?");
		mes "[Cientista Maluco]";
		mes "Como que algo tão interessante assim pode ser ilegal!?";
		mes "Você pode falar com os orcs!!";
		mes "Vamos lá!";
		next;
		mes "[Cientista Maluco]";
		mes "Provavelmente eles irão lhe dar milhões de instruções.";
		mes "Uma vez que eles o verem vão sempre repetir a mesma coisa!";
		next;
		switch(select("Ok... O quê eu faço?", "Hmm, acho que não")) {
			case 1:
			mes "[Cientista Maluco]";
			mes "Muito bom!";
			mes "Apenas coloque suas mãos na estátua e tente agir naturalmente enquanto estiver lá!";
			close;
			case 2:
			mes "[Cientista Maluco]";
			mes "Tudo bem...";
			mes "Então que assim seja!";
			close;
		}
		break;
	}
	close;
}
