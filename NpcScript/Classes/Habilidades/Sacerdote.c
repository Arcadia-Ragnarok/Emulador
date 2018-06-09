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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Aprendizagem da habilidade Mart�rio (PR_REDEMPTIO) para   |
| sacerdotes.                                                       |
\*-----------------------------------------------------------------*/

prt_church,111,112,1	script	Irm� Linus#priest_sk	1_F_PRIEST,{
	if (BaseJob == Job_Priest) {
		if (getskilllv("PR_REDEMPTIO")) {
			mes("[Irm� Linus]\n"
				"Eu sempre estarei orando por sua seguran�a.\n"
				"Eu espero que voc� possa trazer amor e compaix�o para todos que encontrar em sua jornada.");
			close;
		} else if (!priest_sk) {
			mes("[Irm� Linus]\n"
				"Por favor tenha miseric�rdia e espalhe sua luz pelo mundo.\n"
				"Guie-a com sua benevol�ncia e sua sabedoria...\n"
				"Aben�oe, e que ela possa ser protegida pela sua gra�a.");
			next;
			select("Por quem voc� est� orando?");
			mes("[Irm� Linus]\n"
				"Nossa!\n"
				"Voc� me assustou!\n"
				"Por quem estou orando?\n"
				"Bem, certa vez conheci uma jovem,\n"
				"religiosa e brincalhona que tamb�m era sem nenhum tipo de vergonha.\n"
				"Eu tenho muitas recorda��es alegres dela...");
			next;
			mes("[Irm� Linus]\n"
				"Um dia, um grupo de aventureiros veito at� a ^FFFFFFIgreja de Prontera^000000,\n"
				"na esperan�a da contrata��o de um sacerdote para acompanh�-los\n"
				"at� ^3131DDGlast Heim^000000.\n"
				"Mas ela deveria ser a �nica Novi�a que pretendia se tornar Sacerdotisa a estar dispon�vel.");
			next;
			mes("[Irm� Linus]\n"
				"Eu me lembro que ela era t�o determinada a se juntar aos aventureiros,\n"
				"e n�o t�nhamos escolha a n�o ser deix�-la ir.\n"
				"Ainda assim, muitos de n�s acredit�vamos que era muito perigoso...");
			next;
			mes("[Irm� Linus]\n"
				"Ouvi dizer que, num primeiro momento,\n"
				"a sua desorganizada equipe foi capaz de exterminar um grande n�mero de monstros.\n"
				"Mas apoiando-os como um sacerdote deve ter sido dif�cil para ela...");
			next;
			mes("[Irm� Linus]\n"
				"Em seguida, aconteceu a trag�dia.\n"
				"Cercados por Andarilhos, os aventureiros ca�ram em derrota, um por um.\n"
				"Logo, a jovem Sacerdotisa era a �nica do grupo ainda de p�.");
			next;
			mes("[Irm� Linus]\n"
				"Sozinha contra uma imposs�vel probabilidade."
				"Aquela pobre menina n�o tinha escolha a n�o ser tentar uma desesperada aposta.\n"
				"Ela come�ou a entoar a santa magia antiga...");
			next;
			select("Antiga magia...?");
			mes("[Irm� Linus]\n"
				"Sim! ^FF0000Mart�rio^000000!\n"
				"Uma habilidade que s� os mais talentoso Sacerdotes podem realizar!\n"
				"E aqui ela era, uma jovem Sacerdotisa com muita pouca experi�ncia, e estava tentando us�-la!");
			next;
			mes("[Irm� Linus]\n"
				"Mart�rio � a �ltima habilidade-recurso que pode ser utilizada nobremente para salvar vidas de outras pessoas,\n"
				"ao custo de ^3131FFsacrificar sua pr�pria vida^000000.");
			next;
			mes("[Irm� Linus]\n"
				"Sim, tamb�m me lembro que ela n�o estava muito interessada em estudar as habilidades de Sacerdote e as de Novi�o.\n"
				"Surpreendentemente, ela tinha aprendido o suficiente para utilizar o Mart�rio...");
			next;
			mes("[Irm� Linus]\n"
				"Milagrosamente, ela conseguiu reviver todos os membros do seu grupo.\n"
				"E eles usaram rapidamente um Fruto de Yggdrasil para restaurarem suas vidas,\n"
				"e logo derrotaram os Andarilhos e voltaram para casa em seguran�a.");
			next;
			mes("[Irm� Linus]\n"
				"Devido a este sucesso, ela foi promovida a Suma Sacerdotisa.\n"
				"Mesmo tendo cometido muitos erros no passado.\n"
				"Agora, ela viaja o mundo ajudando os aventureiros da forma como pode.");
			next;
			mes("[Irm� Linus]\n"
				"Mas, bem, ela ser� sempre corajosa e uma menina alegre para mim.");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Espere, voc� ainda n�o respondeu a minha pergunta.\n"
				"Voc� est� orando por essa Sumo Sacerdotisa?\n"
				"E se sim, ela corre algum tipo de perigo?");
			next;
			mes("[Irm� Linus]\n"
				"A alguns meses atr�s, ela foi at� uma miss�o em ^3131FFLighthalzen^000000."
				"Uma cidade da Rep�blica de Schwartzwald.\n"
				"E eu estou preocupado j� que n�o ou�o falar dela faz um tempo.");
			next;
			mes("[Irm� Linus]\n"
				"Eu venho aqui para rezar por ela todos os dias."
				"Na esperan�a de que ela volte em seguran�a e compartilhe hist�rias de suas aventuras comigo.\n"
				"Ah, iremos conversar a noite inteira! Ser� muito divertido!");
			next;
			mes("[Irm� Linus]\n"
				"Deus, acho\n"
				"que falei muito!\n"
				"Me desculpe por tomar seu tempo, voc� tem algum lugar para ir?\n"
				"Quero que saiba, que eu estarei orando por sua seguran�a ^FFFFFF^000000");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Antes de ir, por favor pode me dizer o nome da Suma Sacerdotisa que voc� estava falando?\n"
				"Se eu v�-la, irei pedir para que ela entre em contato com voc�.");
			next;
			mes("[Irm� Linus]\n"
				"Ah, muito obrigado! O nome dela � Suma Sacerdotisa Sorin. Melhor, ^3131FFMargaretha Sorin^000000.\n"
				"Se voc� por acaso encontr�-la.\n"
				"Por favor diga a ela que eu estou orando por sua seguran�a.");
			priest_sk = 1;
			close;
		} else if (priest_sk == 1) {
			mes("[Irm� Linus]\n"
				"Ol�");
			next;
			if (select("Me ensine o ^3131FFMart�rio^000000", "Cancelar") == 1) {
				mes("[Irm� Linus]\n"
					"Hum, Mart�rio � uma boa habilidade para voc� aprender, � dif�cil de utiliz�-la."
					"Mas quando conseguir, voc� poder� reviver todos os membros derrotados do seu Grupo.");
				next;
				mes("[Irm� Linus]\n"
					"Naturalmente, a desvantagem � que voc� deve....\n"
					"^3131FFsacrificar sua pr�pria vida^000000 afim de usar a habilidade.\n"
					"Agora, vamos aprender o Mart�rio, primeiro voc� deve aprender a ^3131FFRessucitar no N�vel 1^000000.");
				next;
				mes("[Irm� Linus]\n"
					"Ah, voc� deve tamb�m me trazer\n"
					"^3131FF30 �guas Benta e\n"
					"20 Gemas Azul^000000\n"
					"assim voc� poder� aprender a habilidade.");
				priest_sk = 2;
				next;
				mes("[Irm� Linus]\n"
					"Mas se voc� falhar ao aprender Mart�rio.\n"
					"Voc� ir� perder 1 �gua Benta e 1 Gema Azul e voc� ter� que tentar novamente...");
				close;
			} else {
				mes("[Irm� Linus]\n"
					"Orar me d� um senso de paz e conforto.\n"
					"Talvez essa seja a �nica raz�o para que eu escolhesse essa classe...");
				close;
			}
		} else if (priest_sk == 2) {
			if (getskilllv("ALL_RESURRECTION") && countitem(Holy_Water) > 29 && countitem(Blue_Gemstone) > 19) {
				mes("[Irm� Linus]\n"
					"Parece que voc� possui todos os requisitos necess�rios para aprender o Mart�rio.\n"
					"Voc� est� pronto para tentar?\n"
					"Se voc� falhar, voc� ir� perder 1 �gua Benta e 1 Gema Azul, certo?");
				next;
				mes("[Irm� Linus]\n"
					"Agora, por favor concentre-se e repita essa ora��o especial logo depois de mim.");
				next;
				mes("[Irm� Linus]\n"
					"^3131FF� santo e vener�vel, n�s oramos para voc�.\n"
					"Por favor mostre a sua miseric�rdia e nos guie com sua luz.\n"
					"Nos d� a for�a para caminhar no caminho do amor e do sacrif�cio.\n"
					"Mart�rio!^000000");
				next;
				.@redem_s = JobLevel + getskilllv("ALL_RESURRECTION");
				.@red_suc = rand(1,100);
				if (.@redem_s < 31) {
					if (.@red_suc > 20 && .@red_suc < 41) {.@success = 1;}
				} else if (.@redem_s < 41) {
					if (.@red_suc > 10 && .@red_suc < 41) {.@success = 1;}
				} else {
					if (.@red_suc > 10 && .@red_suc < 51) {.@success = 1;}
				}
				if (.@success) {
					specialeffect(EF_HEALSP, AREA, playerattached());
					mes("[Irm� Linus]\n"
						"Parab�ns!\n"
						"Voc� conseguiu aprender o Mart�rio!\n"
						"Por favor lembre de usar essa habilidade apenas em situa��es cr�ticas.");
					delitem(Blue_Gemstone, 20);
					delitem(Holy_Water, 30);
					priest_sk = 3;
					skill("PR_REDEMPTIO", 1, 0);
					close;
				} else {
					specialeffect(EF_POISONHIT, AREA, playerattached());
					mes("[Irm� Linus]\n"
						"Ah n�o! Me desculpe, mas eu falhei ao ensinar Mart�rio.\n"
						"Bem eu estarei esperando aqui.\n"
						"Para que possamos tentar novamente quando voc� estiver pronto, certo?");
					delitem(Blue_Gemstone, 1);
					delitem(Holy_Water, 1);
					close;
				}
			} else {
				mes("[Irm� Linus]\n"
					"Se voc� deseja aprender o Mart�rio, por favor me traga\n"
					"^3131FF20 Gemas Azui^000000 e\n"
					"^3131FF30 �guas Benta^000000.\n"
					"Ah, e tamb�m � necess�rio aprender antes ^3131FFRessucitar\n"
					"N�vel 1^000000.");
			}
		} else if (priest_sk == 3) {
			if (!getskilllv("PR_REDEMPTIO")) {
				mes("[Irm� Linus]\n"
					"Hum? N�s j� nos conhecemos antes, n�o foi?\n"
					"Todos os sacerdotes come�am a parecerem os mesmos depois de um tempo.\n"
					"Ah, voc� foi um dos a quem ensinei o Mart�rio?");
				next;
				mes("[Irm� Linus]\n"
					"Voc� esqueceu, certo?\n"
					"Bem, isso n�o � nenhum problema para mim, posso ensin�-lo novamente.\n"
					"Essa habilidade permite que voc� reviva os membros de seu grupo,\n"
					"que estejam mortos atrav�s do sacrif�cio de sua pr�pria vida.");
				next;
				mes("[Irm� Linus]\n"
					"^3131FF� santo e vener�vel, n�s oramos para voc�.\n"
					"Por favor mostre a sua miseric�rdia e nos guie com sua luz.\n"
					"Nos d� a for�a para caminhar no caminho do amor e do sacrif�cio.\n"
					"Mart�rio!^000000");
				skill("PR_REDEMPTIO", 1, 0);
				priest_sk = 0;
				next;
				mes("[Irm� Linus]\n"
					"Acho que...\n"
					"Voc� deve ser capaz de utilizar o Mart�rio agora.\n"
					"Eu espero que voc� use-o de forma correta em suas aventuras");
				close;
			} else {
				priest_sk = 0;
				mes("[Irm� Linus]\n"
					"Eu sempre estarei orando por sua seguran�a.\n"
					"Eu espero que voc� possa trazer amor e compaix�o para todos que encontrar em sua jornada.");
				close;
			}
		}
	} else {
		mes("[Irm� Linus]\n"
			"Por favor tenha miseric�rdia e espalhe sua luz pelo mundo.\n"
			"Guie-a com sua benevol�ncia e sua sabedoria...\n"
			"Aben�oe, e que ela possa ser protegida pela sua gra�a.");
		close;
	}
}
