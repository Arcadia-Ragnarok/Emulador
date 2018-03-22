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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest da M�scara Feliz                               |
\*-----------------------------------------------------------------*/

izlude,129,118,4	script	Dona Risadinha#iz::MrSmile	4_F_03,{
	mes "[Dona Risadinha]";
	mes "Ol� Ol� ";
	mes "Eu sou a Dona Risadinha, como posso te ajudar?";
	next;
	switch (select("O que � uma ^3355FFM�scara Feliz^000000?","Fazer uma ^3355FFM�scara Feliz^000000","Cancelar")) {
		case 1:
		mes "[Dona Risadinha]";
		mes "A M�scara Feliz � um item que instantaneamente te deixa sorrindo!";
		mes "E se todos usarem M�scaras Feliz, o mundo de Ragnar�k ser� um mundo mais feliz!";
		mes "A M�scara Feliz ajuda a lembrar a todos que sempre devemos estar de bom-humor.";
		next;
		mes "[Dona Risadinha]";
		mes "Usamos materiais b�sicos que qualquer Aprendiz pode conseguir.";
		mes "Irei lhe dizer quais s�o, preste aten��o e anote!";
		next;
		mes "[Dona Risadinha]";
		mes "^3355FF10 Jellopys^000000";
		mes "^3355FF10 Felpas^000000";
		mes "^3355FF10 Trevos^000000";
		next;
		mes "[Dona Risadinha]";
		mes "� s� voc� me trazer esses itens que eu farei para voc� uma M�scara feliz!";
		mes "Agora apresse-se...";
		close;
		case 2:
		if (countitem(Jellopy) > 9 && countitem(Fluff) > 9 && countitem(Clover) > 9) {
			mes "[Dona Risadinha]";
			mes "Parab�ns!";
			mes "Por favor aceite esta M�scara Feliz.";
			next;
			delitem(Jellopy,10);
			delitem(Fluff,10);
			delitem(Clover,10);
			getitem(Mr_Smile,1);
			mes "[Dona Risadinha]";
			mes "Vossa majestade, Tristam III prometeu dar seu melhor para tornar Ragnarok um jogo melhor e mais agrad�vel.";
			next;
			mes "[Dona Risadinha]";
			mes "O fato mencionado anteriormente foi anunciado pelo Servi�o de Informa��es do Reino de Rune-Midgarts.";
			close;
		} else {
			mes "[Dona Risadinha]";
			mes "Ah, mas que pena!";
			mes "Voc� ainda n�o possui todos os itens necess�rios para fazer uma M�scara Feliz!";
			mes "^3355FF10 Jellopys^000000";
			mes "^3355FF10 Felpas^000000";
			mes "^3355FF10 Trevos^000000";
			mes "Por favor veja os requerimentos acima e volte ap�s colet�-los.";
			close;
		}
		case 3:
		mes "[Dona Risadinha]";
		mes "Hihihihihihi";
		mes "Por que eu tenho esse nome?";
		mes "� por que eu adoro rir!";
		next;
		mes "[Dona Risadinha]";
		mes "Adoro M�scaras Felizes e Piadas.";
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
