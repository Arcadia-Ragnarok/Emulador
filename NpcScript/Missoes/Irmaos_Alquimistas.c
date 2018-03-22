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
| - Copyright: Spell Master (14/09/2017)                            |
| - Info: Quest dos Irm�os Alquimistas de Juno.                     |
| - Nota: Necess�ria para quest de mudan�a de classe para Alquimista|
\*-----------------------------------------------------------------*/

-	script	broders_q	FAKE_NPC,{
	if (!broders_q) {
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Eu e meu irm�o alquimistas vamos transformar simples pedra em ouro!";
		mes "Bem, pelo menos, eu estou tentando.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Eu tive a id�ia de uma lenda hist�rica.";
		mes "Eu acho que, se isso j� foi feito antes, esse projeto � definitivamente poss�vel.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Mas agora, eu n�o tenho os suprimentos e pe�as que eu preciso para tentar este feito.";
		mes "Eu n�o sei como eles reuniram todos os materiais necess�rios....";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "H� tamb�m aqueles artigos que devem ser obtidos a partir de monstros que s�o muito poderosos.";
		mes "Como eu vou continuar minha pesquisa?";
		next;
		if (select("Vou trazer para voc�","Boa sorte") == 1) {
			broders_q = 1;
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "S�rio?";
			mes "Tal benevol�ncia � rara hoje em dia.";
			mes "Somos gratos pela sua ajuda.";
			mes "Aqui est�o os itens que ser�o necess�rios.";
			next;
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "^FF00001 M�stura^000000, ^FF00005 Mini-Fornalha^000000,";
			mes "^FF00005 Carv�o^000000 , ^FF00005 Madeira Queimada^000000,";
			mes "^FF00005 Areia Fina^000000, ^FF00003 Min�rio de Elunium^000000,";
			mes "^FF00003 Min�rio Oridecon^000000^000000.";
			next;
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "N�s tamb�m precisaremos de 2,000 Zeny.";
			mes "O dinheiro vai ajudar a pagar pequenas despesas envolvidas na realiza��o deste empreendimento.";
			mes "Boa Sorte.";
			close;
		} else {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Eu gostaria de ser um poderoso aventureiro assim como voc�.";
			close;
		}
	} else if (broders_q == 1) {
		if (!countitem(Mixture) || countitem(Portable_Furnace) < 4 || countitem(Coal) < 4 || countitem(Burn_Tree) < 4 || countitem(Fine_Sand) < 4 || countitem(Elunium_Stone) < 2 || countitem(Oridecon_Stone) < 2 || Zeny < 2000) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "No caso de voc� esquecer, estes s�o os materiais necess�rios.";
			mes "Anote-os se precisar.";
			next;
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "^FF00001 M�stura^000000, ^FF00005 Mini-Fornalha^000000,";
			mes "^FF00005 Carv�o^000000 , ^FF00005 Madeira Queimada^000000,";
			mes "^FF00005 Areia Fina^000000, ^FF00003 Min�rio de Elunium^000000,";
			mes "^FF00003 Min�rio Oridecon^000000^000000.";
			next;
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Al�m desto, � necess�rio 2,000 zeny.";
			close;
		} else {
			if (checkweight(Knife,1) == 0) {
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Espere um minuto!!";
				mes "Voc� est� carregandomuitos itens com voc�.";
				mes "Por favor, tente novamente depois de perder um pouco de peso.";
				close;
			} else {
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Oh ho ho...";
				mes "Estas s�o as pe�as que eu precisava.";
				mes "Muito obrigado.";
				next;
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Ok, vamos tentar fazer isso!";
				mes "Segure-se por apenas um segundo!";
				next;
				mes "^3355FF*Vrrrmmmmm*^000000";
				next;
				mes "^3355FF*Pakakkakakakkakaakapakakkakak*^000000";
				next;
				mes "^3355FF*Shakakakakkakakakakkakakakakka!*^000000";
				next;
				switch (rand(10)) {
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
					setarray(.@item[0],1002,5);
					break;
					case 6:
					case 7:
					case 8:
					setarray(.@item[0],723,1);
					break;
					default: // 0 ou 9
					setarray(.@item[0],969,1);
					break;
				}
				Zeny -= 2000;
				delitem(Mixture,1);
				delitem(Portable_Furnace,5);
				delitem(Coal,5);
				delitem(Burn_Tree,5);
				delitem(Fine_Sand,5);
				delitem(Elunium_Stone,3);
				delitem(Oridecon_Stone,3);
				getitem(.@item[0],.@item[1]);
				broders_q = 0;
				if (alchemistq == 23) { alchemistq = 24; }
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				if (.@item[0] == 969) {
					mes "Fabuloso conseguimos transformar pedra em ouro!";
				} else {
					mes "N�o foi o esperado conseguimos criar "+.@item[1]+" "+getitemname(.@item[0])+".";
					mes "Mas quem sabe da pr�xima vez.";
				}
				next;
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Agora que sabemos que funciona, podemos tentar inumeras vezes!";
				mes "Eu n�o preciso mais disso.";
				mes "Voc� o aceitaria?";
				mes "Ah, e se voc� encontrar mais alguns materiais traga-os para n�s.";
				next;
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Obrigado por nos ajudar.";
				mes "Voc� tem a minha eterna gratid�o.";
				mes "Desejo-lhe sorte em suas viagens!";
				close;
			}
		}
	}
}
yuno_in01,103,157,3	duplicate(broders_q)	Bain#broders_q	4W_M_02
yuno_in01,100,153,7	duplicate(broders_q)	1_M_01#broders_q	4W_M_02
