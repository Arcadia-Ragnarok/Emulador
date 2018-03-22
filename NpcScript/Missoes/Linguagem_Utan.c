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
| - Info: Mini-Quest para aparender o idioma de Umbala              |
\*-----------------------------------------------------------------*/

um_in,39,122,5	script	Chefe Utan#ev_um	4_M_UMCHIEF,{
	if (event_umbala == 0) {
		mes "[Karkatan]";
		mes "Huh huh, uma pessoa de Rune-Midgard.";
		mes "Eu acho que essa é a sua primeira visita à minha vila, não é?";
		next;
		mes "[Karkatan]";
		mes "Todo mundo de Rune-Midgard que eu conheci tem as mesmas expressões faciais.";
		mes "Que você está tendo quando vem aqui pela primeira vez.";
		next;
		mes "[Karkatan]";
		mes "Talvez porque não dá para se comunicar com a gente usando a mesma língua.";
		mes "Então eles não tem idéia de onde estão.";
		mes "Sim, eu entendo...";
		mes "Enfim, bem vindo a minha aldeia.";
		next;
		mes "[Karkatan]";
		mes "Meu nome é Karkatan, e eu sou o chefe da tribo Utan.";
		mes "Você deve está espantado como eu posso falar a sua língua.";
		next;
		mes "[Karkatan]";
		mes "Eu aprendi a muito tempo atrás com um aventureiro de sua terra.";
		mes "Foi a muito tempo atrás, e eu não sei o que aconteceu com ele...";
		next;
		mes "[Karkatan]";
		mes "Enfim, eu aprendi muitas coisas sobre a cultura e a língua de Rune-Midgard.";
		next;
		mes "[Karkatan]";
		mes "Algumas vezes, eu ensino a língua Utan, mas eu não dou a todo mundo esse privilégio.";
		mes "Se pessoas erradas aprenderem a língua Utan, eles poderão trazer desgraça a nossa tribo.";
		next;
		mes "[Karkatan]";
		mes "Antes de você poder aprender a língua Utan, primeiro aprendan a cultura Utan explorando a nossa aldeia.";
		next;
		mes "[Karkatan]";
		mes "Embora você não seja capaz de se comunicar com o meu povo agora, tentar compreender nosso modo de vida através de observações";
		next;
		mes "[Karkatan]";
		mes "Preste atenção nas roupas, na aparência e no estilo de vida da população local.";
		mes "Quando você pensar que aprendeu o suficiênte da cultura Utan, volte e me mostre o que você aprendeu.";
		event_umbala = 1;
		close;
	} else if (event_umbala == 1) {
		mes "[Karkatan]";
		mes "Oh, é você de novo...";
		mes "Você aprendeu sobre a cultura Utan?";
		mes "Eu quero ouvir a sua opinião, assim como sua impressão.";
		next;
		mes "[Karkatan]";
		mes "Existem ainda alguns aldeões que são muito ingênuos a população de Rune-Midgard.";
		mes "Normalmente, eles temem encontros com o seu povo e se escondem.";
		next;
		mes "[Karkatan]";
		mes "Então...";
		mes "Posso te ajudar em alguma coisa?";
		mes "Eu presumo que você não teve muitos problemas em visitar a aldeia, aldeia, mas parece que você tem algo a me pedir.";
		next;
		switch (select("Eu quero aprender a língua Utan","Umbabah Umbabah?","Nada.")) {
			case 1:
			if (isequipped(Mr_Smile) || isequipped(Goblini_Mask) || isequipped(Mr_Scream) || isequipped(Welding_Mask) || isequipped(Gas_Mask) || isequipped(Phantom_Of_Opera) || isequipped(Opera_Ghost_Mask)) {
				mes "[Karkatan]";
				mes "Hmmm... é uma máscara impressionante que você está usando.";
				mes "Nós, Utans usamos máscaras para não exibir nossas expressões faciais.";
				next;
				mes "[Karkatan]";
				mes "É por isso que usamos máscaras o tempo todo.";
				mes "Nós acreditamos que a interação e o tratamento com as outras pessoas não devem depender de como a olhamos.";
				next;
				mes "[Karkatan]";
				mes "Então.";
				mes "Eu tenho certeza que você está qualificado para aprender a língua Utan.";
				mes "Eu vou te ensinar como falar e ler em Utan apartir de agora.";
				next;
				mes "[Karkatan]";
				mes "No entanto, eu preciso que você me traga itens para podermos proseguir com as lições.";
				mes "Primeiro, precisamos de dois tipos diferentes de papel.";
				mes "^3377FF10 Papel Amarelado^000000 e ^3377FF5 Pedaço de Papel^000000.";
				next;
				mes "[Karkatan]";
				mes "Nós iremos precisar escrever também.";
				mes "Vamos usar ^3377FF1 Tinta de Polvo^000000 e ^3377FF1 Plumas de Ave^000000.";
				mes "Por favor traga esses itens, e eu vou ensinar quando você estiver pronto.";
				event_umbala = 2;
				close;
			} else {
				mes "[Karkatan]";
				mes "Não parece que você aprendeu a nossa cultura ainda.";
				mes "Você não pode aprender uma outra língua se você não entender a cultura.";
				next;
				mes "[Karkatan]";
				mes "Enquanto você tiver aquela expressão em sua face, Utans irão ficar intimidados...";
				mes "Apenas não ficarão se você não mostrar sua face para os outros, pois somos muito vulneráveis a expressões faciais.";
				next;
				mes "[Karkatan]";
				mes "Vá explorar a nossa vila mais um pouco.";
				mes "Você poderá voltar assim que achar que estiver pronto.";
				next;
				mes "[Karkatan]";
				mes "Qualquer coisa, o que você pensa sobre minha máscara?";
				mes "É a tendência dos Utans...";
				mes "Você não acha isso interessante?";
				close;
			}
			case 2:
			mes "[Karkatan]";
			mes "Haha quando você não está prestando atenção no som, nada faz sentido.";
			mes "A língua é um sistema de mútua para a comunicação de pensamentos e sentimentos";
			next;
			mes "[Karkatan]";
			mes "Lamento dizer que parece que hoje em dia, não são todos os povos dispostos a aprender outras culturas.";
			next;
			mes "[Karkatan]";
			mes "Eu vejo pessoas que desprezam ou ridicularizam outros que não os compreendêem.";
			mes "É realmente triste que esse fanatismo ainda existe...";
			next;
			mes "[Karkatan]";
			mes "Se você estiver interessado na língua Utan, tente entender nossa cultura melhor e volte quando estiver pronto.";
			mes "Eu vou te ensinar os significados desses sons que você está ouvindo.";
			close;
			case 3:
			mes "[Karkatan]";
			mes "Algumas vezes é bom para passear sem propósito.";
			mes "Mas é melhor definir uma meta para uma viagem se você quiser aprender alguma coisa fora do seu comum.";
			close;
		}
	} else if (event_umbala == 2) {
		if ((countitem(Oil_Paper) > 9) && (countitem(Smooth_Paper) > 4) && (countitem(Chinese_Ink) > 0) && (countitem(Feather_Of_Birds) > 0)) {
			mes "[Karkatan]";
			mes "Certo, eu acho que nós estamos prontos para ir.";
			mes "Vamos começar as lições.";
			mes "Espero que você se comunique melhor com os Utans quando as lições tiverem sido completas.";
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
			mes "Certo, é isso.";
			mes "Apenas esqueça como você se sentiu quando viu os Utans pela primeira vez.";
			mes "Antes de ter aprendido a língua Utan.";
			mes "Agora vá tentar falar com os Utans.";
			mes "Conversação é um importante método para entender os outros.";
			delitem(Oil_Paper,10);
			delitem(Smooth_Paper,5);
			delitem(Chinese_Ink,1);
			delitem(Feather_Of_Birds,1);
			event_umbala = 3;
			next;
			mes "[Karkatan]";
			mes "Ok, se você tiver qualquer negócio em nossa vila, fique a vontade para falar comigo.";
			mes "Eu vou tentar te ajudar no que eu puder.";
			close;
		} else {
			mes "[Karkatan]";
			mes "Eu acho que você não está pronto ainda...";
			mes "Você se esqueceu dos itens que você precisa?";
			mes "Eu vou te falar de novo, então por favor traga-me e então começaremos a lição.";
			next;
			mes "[Karkatan]";
			mes "^3377FF10 Papel Amarelado^000000,";
			mes "^3377FF5 Pedaço de Papel^000000,";
			mes "^3377FF1 Tinta de Polvo^000000,";
			mes "^3377FF1 Plumas de Ave^000000.";
			mes "Quando você trouxer todos os, itens, eu irei te ensinar a língua Utan.";
			close;
		}
	} else if (event_umbala >= 3) {
		if (event_umbala == 4) {
			mes "[Karkatan]";
			mes "Puchuchartan deve ter mandado você aqui.";
			mes "Eu preciso verificar se você está ou não qualificado para o pedido de ajuda dela...";
			mes "Nós, Utan não queremos para ajudar as pessoas do mal";
			next;
			mes "[Karkatan]";
			mes "Hmmmm....";
			mes "Seria bom ter uma máscara que é feita em Rune-Midgard...";
			next;
			mes "[Karkatan]";
			mes "Eu gostaria de ter ^3377FF1 Máscara Feliz^000000.";
			mes "Para os Utans, receber uma máscara de presente é considerada uma honra.";
			mes "Talvez Puchuchartan quer que você mostre respeito perante a nossa aldeia.";
			event_umbala = 5;
			close;
		} else if (event_umbala == 5) {
			if (countitem(Mr_Smile)) {
				mes "[Karkatan]";
				mes "Oh, você a trouxe!";
				mes "Sim, eu sempre quis ter essa máscara!";
				mes "Isso é uma verdadeira honra.";
				mes "Obrigado, aventureiro de Rune-Midgard.";
				next;
				mes "[Karkatan]";
				mes "Eu vou dizer a Puchuchartan que eu confirmei sua qualificação.";
				mes "Vá falar com ela.";
				mes "Embora eu não esteja certo que da ajuda que ela possa te dar.";
				mes "Eu espero que ela possa retribuir o seu favor.";
				delitem(Mr_Smile,1);
				event_umbala = 6;
				close;
			} else {
				mes "[Karkatan]";
				mes "Eu te disse o que você precisa?";
				mes "^3377FF1 Máscara Feliz^000000?";
				mes "Por favor, traga-me como prova de sua eficiência, assim como o senso de sua honra.";
				close;
			}
		} else {
			mes "[Karkatan]";
			mes "Como está indo?";
			mes "Gostaria de poder orientá-lo ao redor da aldeia, mas não posso ignorar meu dever, como chefe da tribo";
			next;
			mes "[Karkatan]";
			mes "Comandar uma tribo não é tão fácil quanto parece.";
			mes "Você deve entender se você estivesse no meu lugar.";
			mes "No entanto, eu espero que você aprecie sua estada na nossa aldeia.";
			close;
		}
	}
}
