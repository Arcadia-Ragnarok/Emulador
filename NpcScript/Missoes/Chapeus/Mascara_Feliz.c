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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest da Máscara Feliz                               |
\*-----------------------------------------------------------------*/

izlude,129,118,4	script	Dona Risadinha#iz::MrSmile	4_F_03,{
	mes "[Dona Risadinha]";
	mes "Olá Olá ";
	mes "Eu sou a Dona Risadinha, como posso te ajudar?";
	next;
	switch (select("O que é uma ^3355FFMáscara Feliz^000000?","Fazer uma ^3355FFMáscara Feliz^000000","Cancelar")) {
		case 1:
		mes "[Dona Risadinha]";
		mes "A Máscara Feliz é um item que instantaneamente te deixa sorrindo!";
		mes "E se todos usarem Máscaras Feliz, o mundo de Ragnarök será um mundo mais feliz!";
		mes "A Máscara Feliz ajuda a lembrar a todos que sempre devemos estar de bom-humor.";
		next;
		mes "[Dona Risadinha]";
		mes "Usamos materiais básicos que qualquer Aprendiz pode conseguir.";
		mes "Irei lhe dizer quais são, preste atenção e anote!";
		next;
		mes "[Dona Risadinha]";
		mes "^3355FF10 Jellopys^000000";
		mes "^3355FF10 Felpas^000000";
		mes "^3355FF10 Trevos^000000";
		next;
		mes "[Dona Risadinha]";
		mes "É só você me trazer esses itens que eu farei para você uma Máscara feliz!";
		mes "Agora apresse-se...";
		close;
		case 2:
		if (countitem(Jellopy) > 9 && countitem(Fluff) > 9 && countitem(Clover) > 9) {
			mes "[Dona Risadinha]";
			mes "Parabéns!";
			mes "Por favor aceite esta Máscara Feliz.";
			next;
			delitem(Jellopy,10);
			delitem(Fluff,10);
			delitem(Clover,10);
			getitem(Mr_Smile,1);
			mes "[Dona Risadinha]";
			mes "Vossa majestade, Tristam III prometeu dar seu melhor para tornar Ragnarok um jogo melhor e mais agradável.";
			next;
			mes "[Dona Risadinha]";
			mes "O fato mencionado anteriormente foi anunciado pelo Serviço de Informações do Reino de Rune-Midgarts.";
			close;
		} else {
			mes "[Dona Risadinha]";
			mes "Ah, mas que pena!";
			mes "Você ainda não possui todos os itens necessários para fazer uma Máscara Feliz!";
			mes "^3355FF10 Jellopys^000000";
			mes "^3355FF10 Felpas^000000";
			mes "^3355FF10 Trevos^000000";
			mes "Por favor veja os requerimentos acima e volte após coletá-los.";
			close;
		}
		case 3:
		mes "[Dona Risadinha]";
		mes "Hihihihihihi";
		mes "Por que eu tenho esse nome?";
		mes "É por que eu adoro rir!";
		next;
		mes "[Dona Risadinha]";
		mes "Adoro Máscaras Felizes e Piadas.";
		mes "Vou te contar uma piada:";
		next;
		mes "[Dona Risadinha]";
		mes "Dois porings estavam pulando nos arredores de prontera...";
		mes "Primeiro Poring:";
		mes "Cuidado com o Apren... *BLOSH*!";
		mes " ";
		mes "Segundo Poring:";
		mes "Que Apren... *BLOSH*!";
		mes "Hahahahahahahahaha.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Duplicatas ] -
// ------------------------------------------------------------------
alberta,113,53,4	duplicate(MrSmile)	Dona Risadinha#alb	4_F_03
aldebaran,136,135,4	duplicate(MrSmile)	Dona Risadinha#alde	4_F_03
geffen,119,107,4	duplicate(MrSmile)	Dona Risadinha#gef	4_F_03
moc_ruins,59,154,3	duplicate(MrSmile)	Dona Risadinha#moc	4_F_03
payon,186,104,5	duplicate(MrSmile)	Dona Risadinha#pay	4_F_03
prontera,157,187,4	duplicate(MrSmile)	Dona Risadinha#prt	4_F_03
