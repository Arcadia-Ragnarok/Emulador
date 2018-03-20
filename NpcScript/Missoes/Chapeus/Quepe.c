/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Source Script                      |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Mini-Quest do Quepe                                       |
\*-----------------------------------------------------------------*/

alberta_in,28,145,4	script	Grampa#BoysCap	2_M_PHARMACIST,{
	mes "[Grampa]";
	mes "*Suspiro*...";
	mes "Ah...";
	mes "Alguns podem dizer que eu vivi uma vida cheia de vinho, mulheres e música...";
	next;
	mes "[Grampa]";
	mes "Mas minha alma ainda queima com o vigor da juventude!";
	mes "Apenas...";
	mes "Este velho corpo que não pode manter-se mais...";
	mes "*Tosse!";
	mes "Chiaaaado*";
	next;
	if (countitem(Tiger_Footskin) > 9) {
		switch (select("Mostrar-lhe a Pata de Tigre","Trocar pelo Quepe","Cancelar")) {
			case 1:
			mes "[Grampa]";
			mes "Ohhh !!";
			mes "Isso é...?";
			mes "Isso é! ";
			mes "Isso é uma Pata de Tigre!!";
			mes "Mesmo daqui posso sentir os seus poderes!";
			next;
			mes "[Grampa]";
			mes "A Pata de Tigre!!";
			mes "Ohhh! Oh meu deus !! Por favor!!!";
			mes "Por favor me dê...";
			mes "Por favor...";
			close;
			case 2:
			mes "[Grampa]";
			mes "O... Obrigado !!";
			mes "Com isso eu posso reviver o meu esplendor da juventude!";
			mes "Preciso comer isso imediatamente!";
			delitem(Tiger_Footskin,10);
			getitem(Boys_Cap,1);
			next;
			mes "[Grampa]";
			mes "...";
			mes "Não. Ainda me sinto VELHO.";
			mes "Eu me sinto ainda pior.";
			mes "Há um zumbido na minha cabeça...";
			close;
			case 3:
			mes "[Grampa]";
			mes "E...Ei, jovem!!";
			mes "E-espere!";
			close;
		}
	} else {
		switch(select("Conversar","Cancelar")) {
			case 1:
			mes "[Grampa]";
			mes "Escute bem...";
			mes "Você tem que cuidar de si mesmo.";
			mes "Sem a sua saúde, não se pode desfrutar dos prazeres deste mundo mortal.";
			next;
			mes "[Grampa]";
			mes "A fim de restaurar a minha juventude.";
			mes "Eu tentei todos os tipos de coisas, principalmente por ouvir boatos, mas nada funcionou.";
			mes "No final, eu gastei tanto zenys em curas milagrosas que acabei quebrando.";
			next;
			mes "[Grampa]";
			mes "Todos desistiram de restaurar a minha juventude.";
			mes "Mas me resta uma esperança...";
			mes "Comer a ^3355FFPata de Tigre^000000, O Rei do Vigor!!";
			next;
			mes "[Grampa]";
			mes "Antes de morrer...";
			mes "Eu gostaria de poder comer 10 Patas de Tigre.";
			mes "Então, eu não poderia morrer!";
			next;
			mes "[Grampa]";
			mes "Se alguém me ajudar, eu gostaria de dar a essa pessoa o meu item precioso.";
			mes "Um ^3355FFQuepe^000000 sem me arrepender...";
			close;
			case 2:
			mes "[Grampa]";
			mes "Tosse Tosse !!";
			mes "Tigre ....Tigre .....";
			mes "Pata ..... de .....Tosse Tosse !!";
			close;
		}
	}
}