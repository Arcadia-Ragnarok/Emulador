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
| - Info: Mini-Quest para aparender o idioma de Umbala              |
\*-----------------------------------------------------------------*/

um_in,39,122,5	script	Chefe Utan#ev_um	4_M_UMCHIEF,{
	if (event_umbala == 0) {
		mes "[Karkatan]";
		mes "Huh huh, uma pessoa de Rune-Midgard.";
		mes "Eu acho que essa � a sua primeira visita � minha vila, n�o �?";
		next;
		mes "[Karkatan]";
		mes "Todo mundo de Rune-Midgard que eu conheci tem as mesmas express�es faciais.";
		mes "Que voc� est� tendo quando vem aqui pela primeira vez.";
		next;
		mes "[Karkatan]";
		mes "Talvez porque n�o d� para se comunicar com a gente usando a mesma l�ngua.";
		mes "Ent�o eles n�o tem id�ia de onde est�o.";
		mes "Sim, eu entendo...";
		mes "Enfim, bem vindo a minha aldeia.";
		next;
		mes "[Karkatan]";
		mes "Meu nome � Karkatan, e eu sou o chefe da tribo Utan.";
		mes "Voc� deve est� espantado como eu posso falar a sua l�ngua.";
		next;
		mes "[Karkatan]";
		mes "Eu aprendi a muito tempo atr�s com um aventureiro de sua terra.";
		mes "Foi a muito tempo atr�s, e eu n�o sei o que aconteceu com ele...";
		next;
		mes "[Karkatan]";
		mes "Enfim, eu aprendi muitas coisas sobre a cultura e a l�ngua de Rune-Midgard.";
		next;
		mes "[Karkatan]";
		mes "Algumas vezes, eu ensino a l�ngua Utan, mas eu n�o dou a todo mundo esse privil�gio.";
		mes "Se pessoas erradas aprenderem a l�ngua Utan, eles poder�o trazer desgra�a a nossa tribo.";
		next;
		mes "[Karkatan]";
		mes "Antes de voc� poder aprender a l�ngua Utan, primeiro aprendan a cultura Utan explorando a nossa aldeia.";
		next;
		mes "[Karkatan]";
		mes "Embora voc� n�o seja capaz de se comunicar com o meu povo agora, tentar compreender nosso modo de vida atrav�s de observa��es";
		next;
		mes "[Karkatan]";
		mes "Preste aten��o nas roupas, na apar�ncia e no estilo de vida da popula��o local.";
		mes "Quando voc� pensar que aprendeu o sufici�nte da cultura Utan, volte e me mostre o que voc� aprendeu.";
		event_umbala = 1;
		close;
	} else if (event_umbala == 1) {
		mes "[Karkatan]";
		mes "Oh, � voc� de novo...";
		mes "Voc� aprendeu sobre a cultura Utan?";
		mes "Eu quero ouvir a sua opini�o, assim como sua impress�o.";
		next;
		mes "[Karkatan]";
		mes "Existem ainda alguns alde�es que s�o muito ing�nuos a popula��o de Rune-Midgard.";
		mes "Normalmente, eles temem encontros com o seu povo e se escondem.";
		next;
		mes "[Karkatan]";
		mes "Ent�o...";
		mes "Posso te ajudar em alguma coisa?";
		mes "Eu presumo que voc� n�o teve muitos problemas em visitar a aldeia, aldeia, mas parece que voc� tem algo a me pedir.";
		next;
		switch (select("Eu quero aprender a l�ngua Utan","Umbabah Umbabah?","Nada.")) {
			case 1:
			if (isequipped(Mr_Smile) || isequipped(Goblini_Mask) || isequipped(Mr_Scream) || isequipped(Welding_Mask) || isequipped(Gas_Mask) || isequipped(Phantom_Of_Opera) || isequipped(Opera_Ghost_Mask)) {
				mes "[Karkatan]";
				mes "Hmmm... � uma m�scara impressionante que voc� est� usando.";
				mes "N�s, Utans usamos m�scaras para n�o exibir nossas express�es faciais.";
				next;
				mes "[Karkatan]";
				mes "� por isso que usamos m�scaras o tempo todo.";
				mes "N�s acreditamos que a intera��o e o tratamento com as outras pessoas n�o devem depender de como a olhamos.";
				next;
				mes "[Karkatan]";
				mes "Ent�o.";
				mes "Eu tenho certeza que voc� est� qualificado para aprender a l�ngua Utan.";
				mes "Eu vou te ensinar como falar e ler em Utan apartir de agora.";
				next;
				mes "[Karkatan]";
				mes "No entanto, eu preciso que voc� me traga itens para podermos proseguir com as li��es.";
				mes "Primeiro, precisamos de dois tipos diferentes de papel.";
				mes "^3377FF10 Papel Amarelado^000000 e ^3377FF5 Peda�o de Papel^000000.";
				next;
				mes "[Karkatan]";
				mes "N�s iremos precisar escrever tamb�m.";
				mes "Vamos usar ^3377FF1 Tinta de Polvo^000000 e ^3377FF1 Plumas de Ave^000000.";
				mes "Por favor traga esses itens, e eu vou ensinar quando voc� estiver pronto.";
				event_umbala = 2;
				close;
			} else {
				mes "[Karkatan]";
				mes "N�o parece que voc� aprendeu a nossa cultura ainda.";
				mes "Voc� n�o pode aprender uma outra l�ngua se voc� n�o entender a cultura.";
				next;
				mes "[Karkatan]";
				mes "Enquanto voc� tiver aquela express�o em sua face, Utans ir�o ficar intimidados...";
				mes "Apenas n�o ficar�o se voc� n�o mostrar sua face para os outros, pois somos muito vulner�veis a express�es faciais.";
				next;
				mes "[Karkatan]";
				mes "V� explorar a nossa vila mais um pouco.";
				mes "Voc� poder� voltar assim que achar que estiver pronto.";
				next;
				mes "[Karkatan]";
				mes "Qualquer coisa, o que voc� pensa sobre minha m�scara?";
				mes "� a tend�ncia dos Utans...";
				mes "Voc� n�o acha isso interessante?";
				close;
			}
			case 2:
			mes "[Karkatan]";
			mes "Haha quando voc� n�o est� prestando aten��o no som, nada faz sentido.";
			mes "A l�ngua � um sistema de m�tua para a comunica��o de pensamentos e sentimentos";
			next;
			mes "[Karkatan]";
			mes "Lamento dizer que parece que hoje em dia, n�o s�o todos os povos dispostos a aprender outras culturas.";
			next;
			mes "[Karkatan]";
			mes "Eu vejo pessoas que desprezam ou ridicularizam outros que n�o os compreend�em.";
			mes "� realmente triste que esse fanatismo ainda existe...";
			next;
			mes "[Karkatan]";
			mes "Se voc� estiver interessado na l�ngua Utan, tente entender nossa cultura melhor e volte quando estiver pronto.";
			mes "Eu vou te ensinar os significados desses sons que voc� est� ouvindo.";
			close;
			case 3:
			mes "[Karkatan]";
			mes "Algumas vezes � bom para passear sem prop�sito.";
			mes "Mas � melhor definir uma meta para uma viagem se voc� quiser aprender alguma coisa fora do seu comum.";
			close;
		}
	} else if (event_umbala == 2) {
		if ((countitem(Oil_Paper) > 9) && (countitem(Smooth_Paper) > 4) && (countitem(Chinese_Ink) > 0) && (countitem(Feather_Of_Birds) > 0)) {
			mes "[Karkatan]";
			mes "Certo, eu acho que n�s estamos prontos para ir.";
			mes "Vamos come�ar as li��es.";
			mes "Espero que voc� se comunique melhor com os Utans quando as li��es tiverem sido completas.";
			next;
			mes "[Karkatan]";
			mes "..............";
			next;
			mes "[Karkatan]";
			mes "..............";
			mes ".....................";
			next;
			mes "[Karkatan]";
			mes "..............";
			mes ".....................";
			mes "............................";
			next;
			mes "[Karkatan]";
			mes "Certo, � isso.";
			mes "Apenas esque�a como voc� se sentiu quando viu os Utans pela primeira vez.";
			mes "Antes de ter aprendido a l�ngua Utan.";
			mes "Agora v� tentar falar com os Utans.";
			mes "Conversa��o � um importante m�todo para entender os outros.";
			delitem(Oil_Paper,10);
			delitem(Smooth_Paper,5);
			delitem(Chinese_Ink,1);
			delitem(Feather_Of_Birds,1);
			event_umbala = 3;
			next;
			mes "[Karkatan]";
			mes "Ok, se voc� tiver qualquer neg�cio em nossa vila, fique a vontade para falar comigo.";
			mes "Eu vou tentar te ajudar no que eu puder.";
			close;
		} else {
			mes "[Karkatan]";
			mes "Eu acho que voc� n�o est� pronto ainda...";
			mes "Voc� se esqueceu dos itens que voc� precisa?";
			mes "Eu vou te falar de novo, ent�o por favor traga-me e ent�o come�aremos a li��o.";
			next;
			mes "[Karkatan]";
			mes "^3377FF10 Papel Amarelado^000000,";
			mes "^3377FF5 Peda�o de Papel^000000,";
			mes "^3377FF1 Tinta de Polvo^000000,";
			mes "^3377FF1 Plumas de Ave^000000.";
			mes "Quando voc� trouxer todos os, itens, eu irei te ensinar a l�ngua Utan.";
			close;
		}
	} else if (event_umbala >= 3) {
		if (event_umbala == 4) {
			mes "[Karkatan]";
			mes "Puchuchartan deve ter mandado voc� aqui.";
			mes "Eu preciso verificar se voc� est� ou n�o qualificado para o pedido de ajuda dela...";
			mes "N�s, Utan n�o queremos para ajudar as pessoas do mal";
			next;
			mes "[Karkatan]";
			mes "Hmmmm....";
			mes "Seria bom ter uma m�scara que � feita em Rune-Midgard...";
			next;
			mes "[Karkatan]";
			mes "Eu gostaria de ter ^3377FF1 M�scara Feliz^000000.";
			mes "Para os Utans, receber uma m�scara de presente � considerada uma honra.";
			mes "Talvez Puchuchartan quer que voc� mostre respeito perante a nossa aldeia.";
			event_umbala = 5;
			close;
		} else if (event_umbala == 5) {
			if (countitem(Mr_Smile)) {
				mes "[Karkatan]";
				mes "Oh, voc� a trouxe!";
				mes "Sim, eu sempre quis ter essa m�scara!";
				mes "Isso � uma verdadeira honra.";
				mes "Obrigado, aventureiro de Rune-Midgard.";
				next;
				mes "[Karkatan]";
				mes "Eu vou dizer a Puchuchartan que eu confirmei sua qualifica��o.";
				mes "V� falar com ela.";
				mes "Embora eu n�o esteja certo que da ajuda que ela possa te dar.";
				mes "Eu espero que ela possa retribuir o seu favor.";
				delitem(Mr_Smile,1);
				event_umbala = 6;
				close;
			} else {
				mes "[Karkatan]";
				mes "Eu te disse o que voc� precisa?";
				mes "^3377FF1 M�scara Feliz^000000?";
				mes "Por favor, traga-me como prova de sua efici�ncia, assim como o senso de sua honra.";
				close;
			}
		} else {
			mes "[Karkatan]";
			mes "Como est� indo?";
			mes "Gostaria de poder orient�-lo ao redor da aldeia, mas n�o posso ignorar meu dever, como chefe da tribo";
			next;
			mes "[Karkatan]";
			mes "Comandar uma tribo n�o � t�o f�cil quanto parece.";
			mes "Voc� deve entender se voc� estivesse no meu lugar.";
			mes "No entanto, eu espero que voc� aprecie sua estada na nossa aldeia.";
			close;
		}
	}
}
