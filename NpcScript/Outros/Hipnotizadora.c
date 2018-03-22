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
| - Copyright: L0ne_W0lf                                            |
| - Info: Reseta habilidades para as primeiras classes              |
\*-----------------------------------------------------------------*/

prontera,146,232,4	script	Hipnotizadora#Hypnotist	4_F_TELEPORTER,{
	mes "[Hipnotizadora]";
	mes "Olá, aventureir"+(Sex == SEX_MALE ? "o":"a")+"!";
	mes "Fui mandada pela Academia de Hipnotismo para ajudar.";
	mes "Iniciantes que se arrependem de não terem aprendido suas habilidades do jeito que gostariam.";
	next;
	mes "[Hipnotizadora]";
	mes "Se seu Nível de Base não for maior que 40, e se você estiver numa Classe 1-1, como:";
	mes "Espadachim, Noviço, Mago, Gatuno, Arqueiro, Mercador, Taekwon, Ninja ou Justiceiro.";
	mes "Então você pode usufruir de meu Serviço de Redistribuição de Pontos de Habilidades.";
	next;
	mes "[Hipnotizadora]";
	mes "Desde que você atenda a essas condições.";
	mes "Poderei prestar meu Serviço de Redistribuição de Pontos de Habilidade sem qualquer limitação.";
	mes "Agora, que tal isso?";
	next;
	switch (select("Resetar Habilidades?","Quero Resetar","Não, obrigado")) {
		case 1:
		mes "[Hipnotizadora]";
		mes "A Redistribuição de Pontos de Habilidade.";
		mes "Dá outra chance aos aventureiros de distribuir seus Pontos.";
		mes "Se não estiver satisfeit"+(Sex == SEX_MALE ? "o":"a")+" com suas habilidades atuais.";
		mes "Então você pode usufruir meu serviço.";
		next;
		mes "[Hipnotizadora]";
		mes "Lembre-se que só é possível redistribuir seus pontos de Habilidade.";
		mes "Se não estiver carregando nenhum item com você.";
		mes "Por favor, antes use o serviço de Armazenagem Kafra para reduzir seu peso.";
		next;
		mes "[Hipnotizadora]";
		mes "Ah, e se por acaso você estiver equipado com um ^FF0000Carrinho^000000, livre-se dele antes.";
		mes "Esse item costuma interferir na hipnose por alguma razão estranha e inexplicável.";
		close;
		case 2:
		if (BaseLevel > 40) {
			mes "[Hipnotizadora]";
			mes "Lamento, mas personagens com o Nível de Base maior que 40.";
			mes "São inelegíveis para que eu possa redistribuir os Pontos de Habilidades.";
			close;
		}
		mes "[Hipnotizadora]";
		mes "Então, você já decidiu que quer ^FF0000Redistribuir os Pontos de Habilidade^000000.";
		mes "Podemos continuar?";
		next;
		if (select("Sim","Não") == 1) {
			if ((Class > 0 && Class < 7 && Upper == 0) || (Class == Job_Gunslinger) || (Class == Job_Ninja) || (Class == Job_Taekwon)) {
				if (checkcart()) {
					mes "[Hipnotizadora]";
					mes "Oh! Remova o seu carrinho antes de restribuir os seus pontos de habilidades.";
					mes "Obrigado por colaborar!";
					close;
				} else if (Weight) {
					mes "[Hipnotizadora]";
					mes "Ah, você poderia reduzir o peso que está carregando em seu iventário.";
					mes "Desculpe, mas não vou poder redistribuir seus pontos de Habilidade de outra forma...";
					close;
				} else {
					mes "[Hipnotizadora]";
					mes "Obrigado por você usar os meus serviços de redistribuição de Pontos de Habilidades.";
					mes "Oh, e muita sorte para você em suas viagens.";
					resetskill;
					close;
				}
			} else {
				mes "[Hipnotizadora]";
				mes "Desculpe, mas sua Classe não está apta para o Serviço de Redistribuição.";
				mes "Posso redistribuir os pontos apenas para:";
				mes "Espadachins, Noviços, Magos, Gatunos, Arqueiros, Mercadores, Taekwon, Ninjas ou Justiceiros.";
				mes "Ou seja, Classes 1-1.";
				close;
			}
		} else {
			mes "[Hipnotizadora]";
			mes "Boa sorte em suas aventuras.";
			mes "Bem, então tome cuidado.";
			mes "Não seria nada bom se machucar por aí.";
			close;
		}
		case 3:
		mes "[Hipnotizadora]";
		mes "Hmm...?";
		mes "Saindo para suas aventuras?";
		mes "Bem, então tome cuidado.";
		mes "Não seria nada bom se machucar por aí.";
		close;
	}
}

