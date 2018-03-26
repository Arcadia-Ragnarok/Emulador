/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Npcs comuns no Acampamento do Vulc�o de Thor              |
\*-----------------------------------------------------------------*/


thor_camp,124,314,1	script	Soldado#thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Freya, eu estou t�o exausto!";
	mes "Eu vou acabar morrendo de fome!";
	mes "Quando vamos ter mais ra��es?";
	close;
}

// ------------------------------------------------------------------
thor_camp,134,309,5	script	Soldado#2thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Eu escutei dizer que n�s iremos comer salada de frango, frango frito.";
	mes "E frango ao estilo de Kunlun de jantar esta noite!";
	mes "Eu me pergunto quem seria rico o bastante para pagar tanto frango assim para n�s?";
	next;
	mes "[Thor Volcano Camp Soldado]";
	mes "Heheh...";
	mes "Mal posso esperar pelo jantar!";
	close;
}

// ------------------------------------------------------------------
thor_camp,49,97,3	script	Sumo Sacerdote#thor	4_M_RACHOLD,{
	mes "^3355FF� melhor voc� n�o fazer nada de evidente na frente dele.^000000";
	close;
}

// ------------------------------------------------------------------
thor_camp,49,122,1	script	Soldado do Vulc�o#thor	4_DST_SOLDIER,{
	mes "^3355FF� melhor voc� n�o fazer nada de evidente na frente dele.^000000";
	close;
}

thor_camp,31,93,1	duplicate(Soldado do Vulc�o#thor)	Soldado do Vulc�o#2thor	4_DST_SOLDIER
thor_camp,59,79,1	duplicate(Soldado do Vulc�o#thor)	Soldado do Vulc�o#3thor	4_DST_SOLDIER

// ------------------------------------------------------------------
thor_camp,143,114,1	script	Soldado do Vulc�o#4thor	4_DST_SOLDIER,{
	emotion e_sob;
	mes "[Soldado]";
	mes "Oh Freya...";
	mes "Aben�oe esta Velha Caixa Azul para que eu n�o pegue nada de in�til desta vez.";
	mes "Eu estou cheio de ficar pegando flechas disto...";
	close;
}

// ------------------------------------------------------------------
thor_camp,206,92,3	script	Soldado do Vulc�o#5thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Ah, hora de ir trabalhar.";
	next;
	mes "[Soldado]";
	mes "O que � is--?!";
	mes "Algo est� cheirando como meias suadas que n�o foram lavadas!";
	close;
}

thor_camp,201,321,1	script	Soldado do Vulc�o#6thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Yo-ho! Yo-ho!";
	close;
}

// ------------------------------------------------------------------
thor_camp,196,315,7	script	Soldado do Vulc�o#7thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Eu acho que preciso ir at� os Guardi�es para os polir.";
	mes "Estas coisas s�o t�o grandes, e eu tenho que limpar cerca de vinte deles...";
	close;
}

// ------------------------------------------------------------------
thor_camp,98,213,5	script	Soldado do Vulc�o#8thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Voc� n�o � um dos alunos do centro geol�gico de pesquisa?";
	mes "N�o h� nada para voc� aqui, n�s estamos apenas fazendo uma manuten��o nestes guardi�es.";
	close;
}

// ------------------------------------------------------------------
thor_camp,98,209,5	script	Soldado do Vulc�o#9thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Porque eu sempre fico parado aqui?!";
	mes "Ningu�m vem at� aqui! Ningu�m!";
	close;
}

// ------------------------------------------------------------------
thor_camp,181,231,0	script	Guardi�o#thor	HIDDEN_NPC,{
	mes "^3355FFExistem muitos guardi�es aqui em diferentes est�gios de montagem.";
	mes "Parece que todos eles est�o sendo reparados.^000000";
	close;
}
