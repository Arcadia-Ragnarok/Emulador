/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns nos Campos de Comodo                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
cmd_fild04,188,74,4	script	Menina das Algas#cmd	4_F_04,{
	mes "[Menina das Algas]";
	mes "Oi! Oi!";
	mes "Eu vivo aqui, mergulhando no mar...";
	mes "Juntando conchas e algas...";
	mes "Para vender e ganhar a vida...";
	mes "Eu sou a Garota Marinha.";
	mes "Menina das Algas!";
	next;
	mes "[Menina das Algas]";
	mes "� bom viver em um lugar cercado por natureza...";
	mes "E sempre comer frutos do mar frescos tamb�m n�o � ruim...";
	mes "Mas uma garota como eu...";
	mes "Sente falta da vida de uma cidade grande...";
	mes "Muita falta...";
	next;
	mes "[Menina das Algas]";
	mes "Eu tento conseguir muitas algas, para conseguir dinheiro para me mudar...";
	mes "Eu sei que eu vou conseguir!";
	close;
}

// ------------------------------------------------------------------
cmd_fild04,248,86,4	script	Marinheiro Ziyaol#cmd	4_M_SEAMAN,{
	mes "[Ziyaol]";
	mes "N�o entendo...";
	mes "Por que voc� me olha assim?";
	mes "Eu sou um Marinheiro de verdade!";
	mes "Estou descansando agora.";
	mes "Tive um dia de trabalho muito duro hoje...";
	mes "Estou cansado...";
	next;
	mes "[Ziyaol]";
	mes "Mas o que me deixa desanimado";
	mes "� que minha filha ali...";
	mes "S� fala em se mudar para uma cidade.";
	mes "Eu n�o entendo...";
	mes "Aqui n�s temos ar puro, �gua limpa e um ambiente agrad�vel.";
	mes "Eu queria que ela ficasse comigo.";
	next;
	mes "[Ziyaol]";
	mes "Minha crian�a cresceu!";
	mes "E quer fugir de mim...";
	mes "Meu Deus!";
	close;
}

// ------------------------------------------------------------------
cmd_fild04,267,137,4	script	Menina da Praia#cmd	4_F_KID2,{
	mes "[Daeguro]";
	mes "Eu adoro brincar com a areia!";
	mes "A areia da praia � t�o limpa e fofa. E tem cheiro de mar...";
	mes "Um dia, eu vou entrar...";
	mes "No barco para Alberta...";
	mes "E velejar at� a cidade!";
	close;
}

// ------------------------------------------------------------------
cmd_fild07,192,58,4	script	Rahasu#cmd	4W_SAILOR,{
	mes "[Rahasu]";
	mes "Ol�?";
	mes "O meu trabalho";
	mes "� mostrar o ^3355FFFarol de Pharos^000000 �s pessoas...";
	mes "Ramadi, o Guarda do Farol...";
	mes "E guia de Pharos.";
	next;
	if (select("Farol de Pharos?", "Cancelar") == 1) {
		mes "[Rahasu]";
		mes "A ilha do Farol de Pharos, consiste em dois antigos far�is.";
		mes "Constru�dos para alertar contra a entrada de invasores.";
		mes "Agora se tornou a cidade portu�ria do sul do reino, e est� ficando famosa pelo com�rcio.";
		next;
		mes "[Rahasu]";
		mes "Como o farol est� sendo reformado...";
		mes "N�o � permitida a entrada de visitantes...";
		mes "Existem muitas pinturas lindas l� dentro.";
		mes "Muitas!";
		close;
	}
	mes "[Rahasu]";
	mes "Que pena!";
	mes "Perder a chance de conhecer um monumento antigo.";
	mes "Voc� deveria voltar em outra oportunidade...";
	mes "Voc� voltar�?";
	close;
}

// ------------------------------------------------------------------
cmd_fild07,52,280,4	script	Hallosu#cmd	4W_SAILOR,{
	mes "[Hallosu]";
	mes "Certo!";
	mes "Este � um dos...";
	mes "Far�is de Pharos!";
	mes "Como est� sendo reformado a entrada n�o � permitida!";
	mes "At� que as obras tenham terminado.";
	next;
	mes "[Hallosu]";
	mes "E for organizada a reinaugura��o.";
	mes "A� sim, voc� poder� vir visitar...";
	mes "Obrigado!!";
	mes "^3355FFO guarda est� ficando inquieto...^000000";
	close;
}
