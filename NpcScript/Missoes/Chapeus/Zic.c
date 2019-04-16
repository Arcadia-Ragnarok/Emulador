/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest para                                           |
| * Bao Bao                                                         |
| * Fivela de Lua                                                   |
| * Óculos Fashion                                                  |
| * Fivela de Coração                                               |
\*-----------------------------------------------------------------*/

alberta,120,53,1	script	Zic#alb	1_M_BARD,{
	if ((countitem(Silk_Ribbon) > 0) && (countitem(Voucher_Of_Orcish_Hero) > 49)) {
		mes "[Zic]";
		mes "Eu sei eu sei, você está querendo ganhar logo o seu Bao-Bao.";
		mes "Mas não consigo me concentrar no meu trabalho se você continuar me pertubando assim.";
		next;
		mes "^3355FF*Bate! Bate!*";
		mes "*Ah! Sucesso!*";
		mes "*Que bom!*^000000";
		next;
		mes "[Zic]";
		mes "Ufa!";
		mes "Aqui está!";
		mes "Agora faça bom uso dela!!";
		delitem(Silk_Ribbon,1);
		delitem(Voucher_Of_Orcish_Hero,50);
		getitem(Hair_Protector,1);
		close;
	} else if ((countitem(Heart_Hair_Pin) > 0) && (countitem(Steel) > 9)) {
		mes "[Zic]";
		mes "Tudo bem! Puxa, sua Fivela de Lua estará pronta em pouco tempo.";
		mes "Mas não consigo me concentrar no meu trabalho se você continuar me pertubando assim!";
		next;
		mes "^3355FF*Bate! Bate!*";
		mes "*Ah! Sucesso!*";
		mes "*Que bom!*^000000";
		next;
		mes "[Zic]";
		mes "Ufa!";
		mes "Está pronto!";
		mes "Agora use-a, o que achou ?";
		mes "Bonita ou simples?";
		delitem(Heart_Hair_Pin,1);
		delitem(Steel,10);
		getitem(First_Moon_Hair_Pin,1);
		close;
	} else if ((countitem(Jack_A_Dandy) > 0) && (countitem(Scarlet_Dyestuffs) > 0)) {
		mes "[Zic]";
		mes "Certo, você veio atrás dos Óculos Fashion.";
		mes "Só não me apresse, ou não vou ser capaz de me concentrar em meu trabalho, tudo bem? ";
		next;
		mes "^3355FF*Bate! Bate!*";
		mes "*Ah! Sucesso!*";
		mes "*Que bom!*^000000";
		next;
		mes "[Zic]";
		mes "Ufa, está pronto!";
		mes "Now go wear these and look, well, as fashionable as these glasses, I guess.";
		delitem(Jack_A_Dandy,1);
		delitem(Scarlet_Dyestuffs,1);
		getitem(Fashion_Sunglass,1);
		close;
	} else if (countitem(Coral_Reef) > 1199) {
		mes "[Zic]";
		mes "Ok, você quer que sua Fivela de Coração.";
		mes "Eu estou trabalhando nela.";
		mes "Porém, não consigo me concentrar com você me apressando, você sabia?";
		next;
		mes "^3355FF*Bate! Bate!*";
		mes "*Ah! Sucesso!*";
		mes "*Que bom!*^000000";
		next;
		mes "[Zic]";
		mes "Ufa!";
		mes "Finalmente, está pronta!";
		mes "Faça-me feliz e";
		mes "use-a com orgulho";
		delitem(Coral_Reef,1200);
		getitem(Heart_Hair_Pin,1);
		close;
	} else {
		mes "[Zic]";
		mes "Oba, esta";
		mes "brisa fresca é maravilhosa!";
		mes "Eu amo o mar!";
		next;
		mes "[Zic]";
		mes "...Hum?";
		mes "Ahhh. Você não pode dizer que eu estou de férias? Tudo o que eu quero é descansar um pouco.";
		next;
		mes "[Zic]";
		mes "Ok, você venceu. Mais uma vez, a minha reputação como um mestre artesão me persegue.";
		next;
		mes "[Zic]";
		mes "Deixe-me saber o item que você está interessado e talvez eu faça isso por você...";
		next;
		switch (select("Bao Bao","Fivela de Lua","Óculos Fashion","Fivela de Coração")) {
			case 1:
			mes "[Zic]";
			mes "Huuum...";
			mes "Você quer que eu faça um Bao-Bao, certo? Tudo bem...";
			next;
			mes "[Zic]";
			mes "Vamos ver, vou precisar de...";
			mes "1 ^0000FFLaço de Seda^000000";
			mes "50 ^0000FFEmblema de Herói^000000";
			mes "...Você já sabia disso?";
			close;
			case 2:
			mes "[Zic]";
			mes "Então você quer uma Fivela de Lua, certo? Eu imagino que elas sejam muito desejadas.";
			next;
			mes "[Zic]";
			mes "Ok, eu vou precisar de...";
			mes "1 ^0000FFFivela de Coração^000000";
			mes "10 ^0000FFAço^000000";
			mes "...Você já sabia disso?";
			close;
			case 3:
			mes "[Zic]";
			mes "Estranho. Como você sabe que eu faço Óculos Fashion? Ele deve ser mais famoso do que eu pensei.";
			next;
			mes "[Zic]";
			mes "Eu preciso de...";
			mes "1 ^0000FFÓculos Charmoso^000000";
			mes "1 ^0000FFTintura Vermelha^000000";
			mes "...Você já sabia disso?";
			close;
			case 4:
			mes "[Zic]";
			mes "Você quer uma Fivela de Coração, certo? Ok, eu acho que posso fazê-la para você...";
			next;
			mes "[Zic]";
			mes "Apenas traga-me...";
			mes "1200 ^0000FFCoral^000000.";
			mes "...Você já sabia disso?";
			close;
		}
	}
}
