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
| - Nota: Npcs comuns nos Campos de Comodo                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
cmd_fild04,188,74,4	script	Menina das Algas#cmd	4_F_04,{
	mes("[Menina das Algas]\n Oi! Oi!\n Eu vivo aqui, mergulhando no mar...\n Juntando conchas e algas...\n Para vender e ganhar a vida...\n Eu sou a Garota Marinha.\n Menina das Algas!");
	next;
	mes("[Menina das Algas]\n É bom viver em um lugar cercado por natureza...\n E sempre comer frutos do mar frescos também não é ruim...\n Mas uma garota como eu...\n Sente falta da vida de uma cidade grande...\n Muita falta...");
	next;
	mes("[Menina das Algas]\n Eu tento conseguir muitas algas, para conseguir dinheiro para me mudar...\n Eu sei que eu vou conseguir!");
	close;
}

// ------------------------------------------------------------------
cmd_fild04,248,86,4	script	Marinheiro Ziyaol#cmd	4_M_SEAMAN,{
	mes("[Ziyaol]\n Não entendo...\n Por que você me olha assim?\n Eu sou um Marinheiro de verdade!\n Estou descansando agora.\n Tive um dia de trabalho muito duro hoje...\n Estou cansado...");
	next;
	mes("[Ziyaol]\n Mas o que me deixa desanimado\n É que minha filha ali...\n Só fala em se mudar para uma cidade.\n Eu não entendo...\n Aqui nós temos ar puro, água limpa e um ambiente agradável.\n Eu queria que ela ficasse comigo.");
	next;
	mes("[Ziyaol]\n Minha criança cresceu!\n E quer fugir de mim...\n Meu Deus!");
	close;
}

// ------------------------------------------------------------------
cmd_fild04,267,137,4	script	Menina da Praia#cmd	4_F_KID2,{
	mes("[Daeguro]\n Eu adoro brincar com a areia!\n A areia da praia é tão limpa e fofa. E tem cheiro de mar...\n Um dia, eu vou entrar...\n No barco para Alberta...\n E velejar até a cidade!");
	close;
}

// ------------------------------------------------------------------
cmd_fild07,192,58,4	script	Rahasu#cmd	4W_SAILOR,{
	mes("[Rahasu]\n Olá?\n O meu trabalho\n é mostrar o ^3355FFFarol de Pharos^000000 às pessoas...\n Ramadi, o Guarda do Farol...\n E guia de Pharos.");
	next;
	if (select("Farol de Pharos?", "Cancelar") == 1) {
		mes("[Rahasu]\n A ilha do Farol de Pharos, consiste em dois antigos faróis.\n Construídos para alertar contra a entrada de invasores.\n Agora se tornou a cidade portuária do sul do reino, e está ficando famosa pelo comércio.");
		next;
		mes("[Rahasu]\n Como o farol está sendo reformado...\n Não é permitida a entrada de visitantes...\n Existem muitas pinturas lindas lá dentro.\n Muitas!");
		close;
	}
	mes("[Rahasu]\n Que pena!\n Perder a chance de conhecer um monumento antigo.\n Você deveria voltar em outra oportunidade...\n Você voltará?");
	close;
}

// ------------------------------------------------------------------
cmd_fild07,52,280,4	script	Hallosu#cmd	4W_SAILOR,{
	mes("[Hallosu]\n Certo!\n Este é um dos...\n Faróis de Pharos!\n Como está sendo reformado a entrada não é permitida!\n Até que as obras tenham terminado.");
	next;
	mes("[Hallosu]\n E for organizada a reinauguração.\n Aí sim, você poderá vir visitar...\n Obrigado!!\n ^3355FFO guarda está ficando inquieto...^000000");
	close;
}
