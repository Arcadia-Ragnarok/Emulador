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
	mes "Ol�, aventureir"+(Sex == SEX_MALE ? "o":"a")+"!";
	mes "Fui mandada pela Academia de Hipnotismo para ajudar.";
	mes "Iniciantes que se arrependem de n�o terem aprendido suas habilidades do jeito que gostariam.";
	next;
	mes "[Hipnotizadora]";
	mes "Se seu N�vel de Base n�o for maior que 40, e se voc� estiver numa Classe 1-1, como:";
	mes "Espadachim, Novi�o, Mago, Gatuno, Arqueiro, Mercador, Taekwon, Ninja ou Justiceiro.";
	mes "Ent�o voc� pode usufruir de meu Servi�o de Redistribui��o de Pontos de Habilidades.";
	next;
	mes "[Hipnotizadora]";
	mes "Desde que voc� atenda a essas condi��es.";
	mes "Poderei prestar meu Servi�o de Redistribui��o de Pontos de Habilidade sem qualquer limita��o.";
	mes "Agora, que tal isso?";
	next;
	switch (select("Resetar Habilidades?","Quero Resetar","N�o, obrigado")) {
		case 1:
		mes "[Hipnotizadora]";
		mes "A Redistribui��o de Pontos de Habilidade.";
		mes "D� outra chance aos aventureiros de distribuir seus Pontos.";
		mes "Se n�o estiver satisfeit"+(Sex == SEX_MALE ? "o":"a")+" com suas habilidades atuais.";
		mes "Ent�o voc� pode usufruir meu servi�o.";
		next;
		mes "[Hipnotizadora]";
		mes "Lembre-se que s� � poss�vel redistribuir seus pontos de Habilidade.";
		mes "Se n�o estiver carregando nenhum item com voc�.";
		mes "Por favor, antes use o servi�o de Armazenagem Kafra para reduzir seu peso.";
		next;
		mes "[Hipnotizadora]";
		mes "Ah, e se por acaso voc� estiver equipado com um ^FF0000Carrinho^000000, livre-se dele antes.";
		mes "Esse item costuma interferir na hipnose por alguma raz�o estranha e inexplic�vel.";
		close;
		case 2:
		if (BaseLevel > 40) {
			mes "[Hipnotizadora]";
			mes "Lamento, mas personagens com o N�vel de Base maior que 40.";
			mes "S�o ineleg�veis para que eu possa redistribuir os Pontos de Habilidades.";
			close;
		}
		mes "[Hipnotizadora]";
		mes "Ent�o, voc� j� decidiu que quer ^FF0000Redistribuir os Pontos de Habilidade^000000.";
		mes "Podemos continuar?";
		next;
		if (select("Sim","N�o") == 1) {
			if ((Class > 0 && Class < 7 && Upper == 0) || (Class == Job_Gunslinger) || (Class == Job_Ninja) || (Class == Job_Taekwon)) {
				if (checkcart()) {
					mes "[Hipnotizadora]";
					mes "Oh! Remova o seu carrinho antes de restribuir os seus pontos de habilidades.";
					mes "Obrigado por colaborar!";
					close;
				} else if (Weight) {
					mes "[Hipnotizadora]";
					mes "Ah, voc� poderia reduzir o peso que est� carregando em seu ivent�rio.";
					mes "Desculpe, mas n�o vou poder redistribuir seus pontos de Habilidade de outra forma...";
					close;
				} else {
					mes "[Hipnotizadora]";
					mes "Obrigado por voc� usar os meus servi�os de redistribui��o de Pontos de Habilidades.";
					mes "Oh, e muita sorte para voc� em suas viagens.";
					resetskill;
					close;
				}
			} else {
				mes "[Hipnotizadora]";
				mes "Desculpe, mas sua Classe n�o est� apta para o Servi�o de Redistribui��o.";
				mes "Posso redistribuir os pontos apenas para:";
				mes "Espadachins, Novi�os, Magos, Gatunos, Arqueiros, Mercadores, Taekwon, Ninjas ou Justiceiros.";
				mes "Ou seja, Classes 1-1.";
				close;
			}
		} else {
			mes "[Hipnotizadora]";
			mes "Boa sorte em suas aventuras.";
			mes "Bem, ent�o tome cuidado.";
			mes "N�o seria nada bom se machucar por a�.";
			close;
		}
		case 3:
		mes "[Hipnotizadora]";
		mes "Hmm...?";
		mes "Saindo para suas aventuras?";
		mes "Bem, ent�o tome cuidado.";
		mes "N�o seria nada bom se machucar por a�.";
		close;
	}
}

