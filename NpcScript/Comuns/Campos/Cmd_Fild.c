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
| - Nota: Npcs comuns nos Campos de Comodo                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
cmd_fild04,188,74,4	script	Menina das Algas#cmd	4_F_04,{
	mes("[Menina das Algas]\n Oi! Oi!\n Eu vivo aqui, mergulhando no mar...\n Juntando conchas e algas...\n Para vender e ganhar a vida...\n Eu sou a Garota Marinha.\n Menina das Algas!");
	next;
	mes("[Menina das Algas]\n � bom viver em um lugar cercado por natureza...\n E sempre comer frutos do mar frescos tamb�m n�o � ruim...\n Mas uma garota como eu...\n Sente falta da vida de uma cidade grande...\n Muita falta...");
	next;
	mes("[Menina das Algas]\n Eu tento conseguir muitas algas, para conseguir dinheiro para me mudar...\n Eu sei que eu vou conseguir!");
	close;
}

// ------------------------------------------------------------------
cmd_fild04,248,86,4	script	Marinheiro Ziyaol#cmd	4_M_SEAMAN,{
	mes("[Ziyaol]\n N�o entendo...\n Por que voc� me olha assim?\n Eu sou um Marinheiro de verdade!\n Estou descansando agora.\n Tive um dia de trabalho muito duro hoje...\n Estou cansado...");
	next;
	mes("[Ziyaol]\n Mas o que me deixa desanimado\n � que minha filha ali...\n S� fala em se mudar para uma cidade.\n Eu n�o entendo...\n Aqui n�s temos ar puro, �gua limpa e um ambiente agrad�vel.\n Eu queria que ela ficasse comigo.");
	next;
	mes("[Ziyaol]\n Minha crian�a cresceu!\n E quer fugir de mim...\n Meu Deus!");
	close;
}

// ------------------------------------------------------------------
cmd_fild04,267,137,4	script	Menina da Praia#cmd	4_F_KID2,{
	mes("[Daeguro]\n Eu adoro brincar com a areia!\n A areia da praia � t�o limpa e fofa. E tem cheiro de mar...\n Um dia, eu vou entrar...\n No barco para Alberta...\n E velejar at� a cidade!");
	close;
}

// ------------------------------------------------------------------
cmd_fild07,192,58,4	script	Rahasu#cmd	4W_SAILOR,{
	mes("[Rahasu]\n Ol�?\n O meu trabalho\n � mostrar o ^3355FFFarol de Pharos^000000 �s pessoas...\n Ramadi, o Guarda do Farol...\n E guia de Pharos.");
	next;
	if (select("Farol de Pharos?", "Cancelar") == 1) {
		mes("[Rahasu]\n A ilha do Farol de Pharos, consiste em dois antigos far�is.\n Constru�dos para alertar contra a entrada de invasores.\n Agora se tornou a cidade portu�ria do sul do reino, e est� ficando famosa pelo com�rcio.");
		next;
		mes("[Rahasu]\n Como o farol est� sendo reformado...\n N�o � permitida a entrada de visitantes...\n Existem muitas pinturas lindas l� dentro.\n Muitas!");
		close;
	}
	mes("[Rahasu]\n Que pena!\n Perder a chance de conhecer um monumento antigo.\n Voc� deveria voltar em outra oportunidade...\n Voc� voltar�?");
	close;
}

// ------------------------------------------------------------------
cmd_fild07,52,280,4	script	Hallosu#cmd	4W_SAILOR,{
	mes("[Hallosu]\n Certo!\n Este � um dos...\n Far�is de Pharos!\n Como est� sendo reformado a entrada n�o � permitida!\n At� que as obras tenham terminado.");
	next;
	mes("[Hallosu]\n E for organizada a reinaugura��o.\n A� sim, voc� poder� vir visitar...\n Obrigado!!\n ^3355FFO guarda est� ficando inquieto...^000000");
	close;
}
