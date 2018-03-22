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
| - Info: Npcs comuns na cidade prontera                            |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Ruas]
//-------------------------------------------------------------------

prontera,160,330,4	script	Guarda#pront::prtguard	8W_SOLDIER,{
	mes "[Guarda de Prontera]";
	mes "Bem vind"+(Sex == SEX_MALE ? "o" : "a")+" a prontera.";
	close;
}
prontera,223,99,1	duplicate(prtguard)	Guarda#2pront	8W_SOLDIER
prontera,229,104,5	duplicate(prtguard)	Guarda#3pront	8W_SOLDIER
prontera,47,339,5	duplicate(prtguard)	Guarda#4pront	8W_SOLDIER

//-------------------------------------------------------------------
prontera,101,288,3	script	Shuger#pront	4W_M_02,{
	mes "[Shuger]";
	mes "Fora dos portões da cidade, há um bixinho rosa chamado ^000077Poring^000000.";
	next;
	mes "[Shuger]";
	mes "Apesar de ser bonito na aparência e não atacar as pessoas, Porings são conhecidos por devorar itens caidos no chão para dentro deles.";
	next;
	mes "[Shuger]";
	mes "Portanto, se há algo no chão que você queira pegar, tenha cuidado para que não seja consumido por um Poring.";
	mes "Apesar de que...";
	mes "Porings são muito fracos...";
	next;
	mes "[Shuger]";
	mes "O de cor verde se chama ^000077Poporing^000000 ele é mais resistente que o Poring.";
	mes "Novatos geralmente cometem o erro de atacá-lo sem saberem que ele é muito forte...";
	mes "Por isso tenha cuidado!";
	close;
}

//-------------------------------------------------------------------
prontera,106,116,6	script	Merideth#pront	4_F_02,{
	mes "[Merideth]";
	mes "O tempo estava bom no meu dia de folga então minha família e eu fomos a um piquenique.";
	mes "Nós escolhemos ir para uma área um pouco isolada onde nós vimos algo realmente interessante...";
	next;
	mes "[Merideth]";
	mes "Foi um grande grupo de zangões gigantes!";
	mes "O mais estranho de tudo era que eles eram todos controlados por uma tao de Abelha Rainha, seguindo cada comando seu.";
	next;
	mes "[Merideth]";
	mes "Eles podem ser apenas insetos, mas acho que eles estavam certos.";
	mes "Homens realmente deveria receber comandos a partir de nós mulheres...";
	mes "Nós fazemos as coisas direito!";
	close;
}

//-------------------------------------------------------------------
prontera,149,202,2	script	YuNa#pront	8_F_GIRL,{
	mes "[YuNa]";
	mes "Odin é o mais poderoso dos Deuses, o todo-poderoso, o lorde dos Aesir.";
	mes "Ele é um Deus guerreiro e muito Sábio.";
	mes "Para conseguir sua sabedoria sem-limites, Odin bebeu da água do poço de Imir, e para isso teve de perder um de seus olhos.";
	mes "Isso mostra sua incrível coragem e determinação!";
	mes "Aquela estátua no centro da fonte é Odin.";
	next;
	mes "[YuNA]";
	mes "Olhe!";
	mes "Ele não está usando seu capacete de águia, não tem barba, e nem está montado em Sleipnir, seu poderoso cavalo de oito patas!";
	mes "Isso é um ultraje!";
	mes "Eu não sei como o Rei aprovou essa estátua como o principal monumento de nossa cidade!";
	close;
}


//-------------------------------------------------------------------
// - [Casas]
//-------------------------------------------------------------------
prt_in,175,50,0	script	Bibliotecária#pront	1_F_LIBRARYGIRL,{
	mes "[Bibliotecária Ellen]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!";
	mes "Os dados nesta biblioteca estão separados pelos nomes dos monstros.";
	mes "Você pode ler livros e escritas de seu interesse aqui.";
	mes "Aqui também existem livros sobre as classes dos Ferreiros e Mercadores.";
	next;
	mes "[Bibliotecária Ellen]";
	mes "Ah!";
	mes "A próxima biblioteca também é muito interessante.";
	mes "Visite-a se puder.";
	close;
}

//-------------------------------------------------------------------
prt_in,180,20,2	script	Garçom#pront	1_M_PUBMASTER,{
	mes "[Garçom]";
	mes "Olá, seja bem-vind"+(Sex == SEX_MALE ? "o" : "a")+"!";
	mes "Hehehe!";
	mes "A freguesia anda aumentando por aqui!";
	mes "Este já foi um negócio bem difícil, sabe?";
	mes "Pelo menos os lucros sempre foram bons...";
	mes "Hehe, mas agora estão melhores...";
	mes "A dificuldade?";
	mes "Ora, conseguir os ingredientes para a cozinha!";
	next;
	mes "[Garçom]";
	mes "Como você deve saber, o aumento das hordas de monstros agressivos em torno das cidade do reino criou uma escassez na obetenção de certas matérias-primas e produtos...";
	mes "Por isso, tentamos adaptar o menu do restaurante quando há falta de alimentos.";
	mes "Fazemos especiais ou inventamos pratos mais simples pra não perder a clientela.";
	next;
	mes "[Garçom]";
	mes "Então, eu tenho contratado caçadores para me trazerem ingredientes frescos e especiais.";
	mes "Mas a demanda excedeu a oferta nestes últimos dias.";
	next;
	mes "[Garçom]";
	mes "Eu não posso manter o meu negócio ocupado sem meu menu especial 'Carapaças de formiga ao molho' e 'Perna de Gafanhoto frita'...*Suspiro*";
	next;
	.@drink = 1;
	while (.@drink) {
		switch (select("'Carapaça de formiga ao molho'?","'Perna de Gafanhoto frita'?","Eu... acho que vou indo.")) {
			case 1:
			mes "[Garçom]";
			mes "É uma deleciosa iguaria e um clássico local!";
			mes "É feito à partir das cascas das formigas do deserto sograt, ao sul daqui.";
			mes "Essas formiga são bem grandes e ferozes, e o melhor lugar para caçá-las é no Formigueiro Infernal...";
			mes "O problema é que lá às vezes há formigas demais... Por isso, a maioria das pessoas tem medo de enfrentá-las...";
			next;
			mes "[Garçom]";
			mes "Mesmo assim, a maioria das pessoas também gostam de um belo prato de formiga ao molho...";
			mes "E adoram reclamar se acaba meu estoque.";
			next;
			break;
			case 2:
			mes "[Garçom]";
			mes "Sim, as pernas de gafanhoto ficam especialmente boas fritas com azeite de olive...";
			mes "Uma delícia.";
			mes "Só é pena que hoje os gafanhotos estejam tão agressivos...";
			mes "Mas ainda assim, não são tão difíceis de caçar.";
			mes "O problema é que eu sou meio covarde na hora de matar monstros, senão ia lá e ensinava uma lição a eles!";
			next;
			mes "[Garçom]";
			mes "É, mas do jeito que vão as coisas logo, logo, vou ter que voltar a feazer pratos comuns de novo...";
			next;
			break;
			case 3:
			mes "[Garçom]";
			mes "Bem, tenha cuidado lá fora, e coma uma pouco da próxima vez!";
			close2;
			.@drink = 0;
			break;
		}
	}
	end;
}
