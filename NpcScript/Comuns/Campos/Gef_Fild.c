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
	mes("[Cientista Maluco]\n Haha, nenhum orc está vindo me atacar!\n O poder da Máquina do Tempo é invencível!!");
	next;
	switch(select("Os orcs não te atacam?", "O faz aqui?!...")) {
		case 1:
		mes("[Cientista Maluco]\n Pois é..\n Sei que é difícil de acreditar.\n Mas eu não te culpo.\n Eu comecei a estudar uma Máquina do Tempo, descoberta próximo de Morroc.\n De acordo com a minha pesquisa.\n Os minerais encontrados dentro dela contém extremo poder!");
		next;
		break;
		case 2:
		mes("[Cientista Maluco]\n Você é uma pessoa bem desconfiada, né?");
		next;
		mes("[Cientista Maluco]\n Consegue ver aquela estátua ali?\n Não é seu monolito natural!");
		next;
		mes("[Cientista Maluco]\n Eu a criei a partir de uma junção da nossa tecnologia com a energia ilimitada que encontrei!\n Gostaria de tentar?");
		next;
		select("... Hm, isso não seria ilegal?");
		mes("[Cientista Maluco]\n Como que algo tão interessante assim pode ser ilegal!?\n Você pode falar com os orcs!!\n Vamos lá!");
		next;
		mes("[Cientista Maluco]\n Provavelmente eles irão lhe dar milhões de instruções.\n Uma vez que eles o verem vão sempre repetir a mesma coisa!");
		next;
		switch(select("Ok... O quê eu faço?", "Hmm, acho que não")) {
			case 1:
			mes("[Cientista Maluco]\n Muito bom!\n Apenas coloque suas mãos na estátua e tente agir naturalmente enquanto estiver lá!");
			close;
			case 2:
			mes("[Cientista Maluco]\n Tudo bem...\n Então que assim seja!");
			close;
		}
		break;
	}
	close;
}
