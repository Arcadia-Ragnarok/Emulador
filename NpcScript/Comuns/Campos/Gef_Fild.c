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
| - Nota: Npcs comuns nos Campos de Geffen                          |
\*-----------------------------------------------------------------*/

gef_fild10,238,202,6	script	Cientista Maluco#orc	4_LGTSCIENCE,{
	mes("[Cientista Maluco]\n Haha, nenhum orc est� vindo me atacar!\n O poder da M�quina do Tempo � invenc�vel!!");
	next;
	switch(select("Os orcs n�o te atacam?", "O faz aqui?!...")) {
		case 1:
		mes("[Cientista Maluco]\n Pois �..\n Sei que � dif�cil de acreditar.\n Mas eu n�o te culpo.\n Eu comecei a estudar uma M�quina do Tempo, descoberta pr�ximo de Morroc.\n De acordo com a minha pesquisa.\n Os minerais encontrados dentro dela cont�m extremo poder!");
		next;
		break;
		case 2:
		mes("[Cientista Maluco]\n Voc� � uma pessoa bem desconfiada, n�?");
		next;
		mes("[Cientista Maluco]\n Consegue ver aquela est�tua ali?\n N�o � seu monolito natural!");
		next;
		mes("[Cientista Maluco]\n Eu a criei a partir de uma jun��o da nossa tecnologia com a energia ilimitada que encontrei!\n Gostaria de tentar?");
		next;
		select("... Hm, isso n�o seria ilegal?");
		mes("[Cientista Maluco]\n Como que algo t�o interessante assim pode ser ilegal!?\n Voc� pode falar com os orcs!!\n Vamos l�!");
		next;
		mes("[Cientista Maluco]\n Provavelmente eles ir�o lhe dar milh�es de instru��es.\n Uma vez que eles o verem v�o sempre repetir a mesma coisa!");
		next;
		switch(select("Ok... O qu� eu fa�o?", "Hmm, acho que n�o")) {
			case 1:
			mes("[Cientista Maluco]\n Muito bom!\n Apenas coloque suas m�os na est�tua e tente agir naturalmente enquanto estiver l�!");
			close;
			case 2:
			mes("[Cientista Maluco]\n Tudo bem...\n Ent�o que assim seja!");
			close;
		}
		break;
	}
	close;
}
