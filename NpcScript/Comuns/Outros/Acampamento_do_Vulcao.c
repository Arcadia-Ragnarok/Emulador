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
| - Info: Npcs comuns no Acampamento do Vulcão de Thor              |
\*-----------------------------------------------------------------*/


thor_camp,124,314,1	script	Soldado#thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Freya, eu estou tão exausto!";
	mes "Eu vou acabar morrendo de fome!";
	mes "Quando vamos ter mais rações?";
	close;
}

// ------------------------------------------------------------------
thor_camp,134,309,5	script	Soldado#2thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Eu escutei dizer que nós iremos comer salada de frango, frango frito.";
	mes "E frango ao estilo de Kunlun de jantar esta noite!";
	mes "Eu me pergunto quem seria rico o bastante para pagar tanto frango assim para nós?";
	next;
	mes "[Thor Volcano Camp Soldado]";
	mes "Heheh...";
	mes "Mal posso esperar pelo jantar!";
	close;
}

// ------------------------------------------------------------------
thor_camp,49,97,3	script	Sumo Sacerdote#thor	4_M_RACHOLD,{
	mes "^3355FFÉ melhor você não fazer nada de evidente na frente dele.^000000";
	close;
}

// ------------------------------------------------------------------
thor_camp,49,122,1	script	Soldado do Vulcão#thor	4_DST_SOLDIER,{
	mes "^3355FFÉ melhor você não fazer nada de evidente na frente dele.^000000";
	close;
}

thor_camp,31,93,1	duplicate(Soldado do Vulcão#thor)	Soldado do Vulcão#2thor	4_DST_SOLDIER
thor_camp,59,79,1	duplicate(Soldado do Vulcão#thor)	Soldado do Vulcão#3thor	4_DST_SOLDIER

// ------------------------------------------------------------------
thor_camp,143,114,1	script	Soldado do Vulcão#4thor	4_DST_SOLDIER,{
	emotion e_sob;
	mes "[Soldado]";
	mes "Oh Freya...";
	mes "Abençoe esta Velha Caixa Azul para que eu não pegue nada de inútil desta vez.";
	mes "Eu estou cheio de ficar pegando flechas disto...";
	close;
}

// ------------------------------------------------------------------
thor_camp,206,92,3	script	Soldado do Vulcão#5thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Ah, hora de ir trabalhar.";
	next;
	mes "[Soldado]";
	mes "O que é is--?!";
	mes "Algo está cheirando como meias suadas que não foram lavadas!";
	close;
}

thor_camp,201,321,1	script	Soldado do Vulcão#6thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Yo-ho! Yo-ho!";
	close;
}

// ------------------------------------------------------------------
thor_camp,196,315,7	script	Soldado do Vulcão#7thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Eu acho que preciso ir até os Guardiões para os polir.";
	mes "Estas coisas são tão grandes, e eu tenho que limpar cerca de vinte deles...";
	close;
}

// ------------------------------------------------------------------
thor_camp,98,213,5	script	Soldado do Vulcão#8thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Você não é um dos alunos do centro geológico de pesquisa?";
	mes "Não há nada para você aqui, nós estamos apenas fazendo uma manutenção nestes guardiões.";
	close;
}

// ------------------------------------------------------------------
thor_camp,98,209,5	script	Soldado do Vulcão#9thor	4_DST_SOLDIER,{
	mes "[Soldado]";
	mes "Porque eu sempre fico parado aqui?!";
	mes "Ninguém vem até aqui! Ninguém!";
	close;
}

// ------------------------------------------------------------------
thor_camp,181,231,0	script	Guardião#thor	HIDDEN_NPC,{
	mes "^3355FFExistem muitos guardiões aqui em diferentes estágios de montagem.";
	mes "Parece que todos eles estão sendo reparados.^000000";
	close;
}
