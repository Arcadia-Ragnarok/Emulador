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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Loteria que troca os pontos de uso dos servi�oes Kafra    |
/         por itens.                                                |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Loretia 1] -
// ------------------------------------------------------------------
aldeba_in,79,161,6	script	Kafra#Reserve1	4_F_KAFRA3,{
	cutin ("kafra_03",2);
	mes "[Kafra]";
	mes "Bem-vind"+(Sex? "o":"a")+" ^6666FF"+ strcharinfo(PC_NAME)+"^000000.";
	mes "Aqui � onde voc� pode trocar seus Pontos de Reserva por itens �teis e pr�mios legais.";
	next;
	mes "[Kafra]";
	mes "Cada Kafra permitir� que voc� troque os Pontos de Reserva em v�rias quantidades.";
	mes "Eu posso trocar os Pontos de Reserva come�ando de ^2222FF100 pts at� 3000 pts^000000.";
	next;
	mes "[Kafra]";
	mes "A quantidade de Pontos de Reserva que voc� tem �: ^FF0000"+RESRVPTS+"^000000 pts.";
	mes "Por favor fa�a a escolha baseada na quantidade de pontos que voc� tem.";
	.@page = 1;
	while (true) {
		if (.@page == 1) {
			setarray (.@choices,100, Sweet_Potato,7,200,Sweet_Potato,15,300,Sweet_Potato,25,400,Sweet_Potato,35,500,Sweet_Potato,50,600,Sweet_Potato,60,700,Sweet_Potato,75,800,Sweet_Potato,85,900,Sweet_Potato,100,1000,null,0);
			.@ordinal$ = "Primeira";
			.@changepage$ = "Pr�ximos itens";
		}
		else {
			setarray (.@choices,1100,Sweet_Potato,7,1300,Sweet_Potato,15,1500,Sweet_Potato,25,1700,Sweet_Potato,35,1900,Sweet_Potato,50,2100,Sweet_Potato,60,2300,Sweet_Potato,75,2500,Sweet_Potato,85,2800,Sweet_Potato,100,3000,null,0);
			.@ordinal$ = "Segunda";
			.@changepage$ = "Lista Anterior";
		}
		.@list$ = "";
		.@numitemchoices = 0;
		for (.@i = 0; .@i < getarraysize(.@choices) - 3; .@i += 3) {
			.@list$ += .@choices[.@i]+" - "+getitemname(.@choices[.@i+1])+" "+.@choices[.@i+2]+" ea:";
			++.@numitemchoices;
		}
		.@list$ += .@choices[.@i]+" - "+.@ordinal$+" Possibilidade de loteria!:"+.@changepage$+":Cancelar";
		next;
		.@chosen = select(.@list$) - 1;
		if (.@chosen <= .@numitemchoices) {
			if (RESRVPTS < .@choices[.@chosen*3]) {
				mes "[Kafra]";
				mes "Me desculpe, mas voc� n�o tem pontos suficientes para essa sele��o de itens.";
				continue;
			}
			RESRVPTS -= .@choices[.@chosen * 3];
			if (.@chosen < .@numitemchoices) {
				mes "[Kafra]";
				mes "Aqui est�o.";
				getitem (.@choices[.@chosen*3 + 1], .@choices[.@chosen*3 + 2]);
				close;
			}
			mes "^0000FF"+.@ordinal$+" Oportunidade de loteria!!^000000";
			@Lotto = .@page;
			next;
			callfunc "F_Lottery";
			break;
		}
		else if (.@chosen == .@numitemchoices + 1) {
			.@page = (.@page == 1 ? 2 : 1);
			continue;
		}
		else {
			break;
		}
	}
	mes "[Kafra]";
	mes "Por favor volte quando tiver mais Pontos de Reserva.";
	cutin ("",255);
	close;
}

// ------------------------------------------------------------------
// - [Loteria 2] -
// ------------------------------------------------------------------
aldeba_in,88,161,3	script	Kafra#Reserve2	4_F_KAFRA3,{
	cutin ("kafra_03",2);
	mes "[Kafra]";
	mes "Bem-vindo ^5577FF"+strcharinfo(PC_NAME)+"^000000.";
	mes "Atualmente estamos oferecendo um evento especial para nossos clientes.";
	mes "Voc� pode ganhar pr�mios usando seus ^FF5533Pontos de Reserva Especial^000000 no ^3355FFEvento Pr�mio Especial Kafra^000000!!";
	next;
	mes "[Kafra]";
	mes "Voc� gostaria de usar seus pontos?";
	next;
	if (select("Sim por favor.","Talvez depois.") == 1) {
		mes "[Kafra]";
		mes "Voc� tem essa quantidade de pontos: ^5544FF"+RESRVPTS+"^000000.";
		mes "Fa�a uma escolha e teste sua sorte!";
		next;
		switch (select("5000 Pontos","7000 Pontos","10000 Pontos","Cancelar")) {
			case 1:
			.@points = 5000;
			@Lotto = 3;
			break;
			case 2:
			.@points = 7000;
			@Lotto = 4;
			break;
			case 3:
			.@points = 10000;
			@Lotto = 5;
			break;
			case 4:
			.@points = 0;
			break;
		}
		if (.@points) {
			if (RESRVPTS < .@points) {
				mes "[Kafra]";
				mes "Me desculpe, mas voc� n�o tem pontos suficientes para essa sele��o de itens.";
				cutin "",255;
				close;
			}
			RESRVPTS -= .@points;
			callfunc "F_Lottery";
		}
	}
	mes "[Kafra]";
	mes "Sem problemas.";
	mes "Ganhe mais Pontos de Reserva Especial usando o Servi�o Kafra encontrado por toda Rune-Midgard.";
	mes "Obrigado por usar os Servi�os da Corp. Kafra.";
	cutin ("",255);
	close;
}

// ------------------------------------------------------------------
// - [Fun��o] -
// ------------------------------------------------------------------
function	script	F_Lottery	{
	mes "[Kafra]";
	mes "Voc� tem uma rara oportunidade de ganhar um pr�mio vindo dos c�us!!";
	next;
	mes "[Kafra]";
	mes "N�o estrague essa �nica chance!";
	mes "Voc� est� pronto?";
	next;
	mes "[Kafra]";
	mes "Quantas vezes voc� quer qua a m�quina gire?";
	mes "Voc� pode escolher at� 5 vezes.";
	next;
	input @input;
	if(@input < 1 || @input > 5) @input = rand(1,5);
	callsub (sF_Spin);
	mes "[Kafra]";
	mes "Deixe-me ver os resultados... adivinha s�?";
	next;
	mes "[Kafra]";
	mes "^FF0000Deixe-me ver....";
	mes "Esse �...!!^000000";
	next;
	if(@temp <  1) goto (sL_Prize1);
	if(@temp <  2) goto (sL_Prize2);
	if(@temp <  3) goto (sL_Prize3);
	if(@temp <=  4) goto (sL_Prize4);
	goto (sL_Prize5);

	sL_Prize1:
	mes "[Kafra]";
	mes "WOW!!!!..... Voc� venceu!!!";
	mes "1� Pr�mio! Parab�ns.";
	if(@Lotto == 1) getitem (Wooden_Mail,1);
	if(@Lotto == 2) getitem (Mantle,1);
	if(@Lotto == 3) getitem (Berserk_Potion,10);
	if(@Lotto == 4) {
		getitem Yggdrasilberry,2;
		getitem Seed_Of_Yggdrasil,1;
	}
	if(@Lotto == 5) getitem Yggdrasilberry,3;
	return;

	sL_Prize2:
	mes "[Kafra]";
	mes "Oh! WOW! Voc� ganhou o 2� pr�mio! Parab�ns!!";
	if(@Lotto == 1) getitem Shoes,1;
	if(@Lotto == 2) getitem Cap,1;
	if(@Lotto == 3) getitem Sunglasses,1;
	if(@Lotto == 4) getitem Royal_Jelly,3;
	if(@Lotto == 5) {
		getitem Seed_Of_Yggdrasil,1;
		getitem Royal_Jelly,10;
	}
	return;

	sL_Prize3:
	mes "[Kafra]";
	mes "Parab�ns! Voc� ganhou o 3� Pr�mio.";
	if(@Lotto == 1) getitem Wing_Of_Butterfly,4;
	if(@Lotto == 2) getitem Blue_Potion,3;
	if(@Lotto == 3) getitem Glasses,1;
	if(@Lotto == 4) getitem White_Potion,15;
	if(@Lotto == 5) getitem White_Potion,30;
	return;

	sL_Prize4:
	mes "[Kafra]";
	mes "Voc� ganhou o 4� Pr�mio.";
	if(@Lotto == 1) getitem Sweet_Potato,100;
	if(@Lotto == 2) getitem Red_Potion,150;
	if(@Lotto == 3) getitem Orange_Potion,150;
	if(@Lotto == 4) getitem Blue_Potion,5;
	if(@Lotto == 5) getitem Blue_Potion,10;
	return;

	sL_Prize5:
	mes "[Kafra]";
	mes "Voc� ganhou o 5� pr�mio.";
	if(@Lotto == 1) getitem Sweet_Potato,50;
	if(@Lotto == 2) getitem Red_Potion,100;
	if(@Lotto == 3) getitem Red_Potion,200;
	if(@Lotto == 4) getitem Red_Potion,250;
	if(@Lotto == 5) getitem Red_Potion,300;
	return;

	sF_Spin:
	mes "[M�quina]";
	mes "N�mero de giros sobrando: "+@input;
	next;
	mes "[M�quina]";
	mes "(rumble~rumble~rumble~)...";
	next;
	@temp = rand(10);
	--@input;
	if(@input <= 0) return;
	goto sF_Spin;
}