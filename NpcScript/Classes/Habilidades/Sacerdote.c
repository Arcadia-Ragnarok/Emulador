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
| - Info: Aprendizagem da habilidade Martírio (PR_REDEMPTIO) para   |
| sacerdotes.                                                       |
\*-----------------------------------------------------------------*/

prt_church,111,112,1	script	Irmã Linus#priest_sk	1_F_PRIEST,{
	if (BaseJob == Job_Priest) {
		if (getskilllv("PR_REDEMPTIO")) {
			mes("[Irmã Linus]\n"
				"Eu sempre estarei orando por sua segurança.\n"
				"Eu espero que você possa trazer amor e compaixão para todos que encontrar em sua jornada.");
			close;
		} else if (!priest_sk) {
			mes("[Irmã Linus]\n"
				"Por favor tenha misericórdia e espalhe sua luz pelo mundo.\n"
				"Guie-a com sua benevolência e sua sabedoria...\n"
				"Abençoe, e que ela possa ser protegida pela sua graça.");
			next;
			select("Por quem você está orando?");
			mes("[Irmã Linus]\n"
				"Nossa!\n"
				"Você me assustou!\n"
				"Por quem estou orando?\n"
				"Bem, certa vez conheci uma jovem,\n"
				"religiosa e brincalhona que também era sem nenhum tipo de vergonha.\n"
				"Eu tenho muitas recordações alegres dela...");
			next;
			mes("[Irmã Linus]\n"
				"Um dia, um grupo de aventureiros veito até a ^FFFFFFIgreja de Prontera^000000,\n"
				"na esperança da contratação de um sacerdote para acompanhá-los\n"
				"até ^3131DDGlast Heim^000000.\n"
				"Mas ela deveria ser a única Noviça que pretendia se tornar Sacerdotisa a estar disponível.");
			next;
			mes("[Irmã Linus]\n"
				"Eu me lembro que ela era tão determinada a se juntar aos aventureiros,\n"
				"e não tínhamos escolha a não ser deixá-la ir.\n"
				"Ainda assim, muitos de nós acreditávamos que era muito perigoso...");
			next;
			mes("[Irmã Linus]\n"
				"Ouvi dizer que, num primeiro momento,\n"
				"a sua desorganizada equipe foi capaz de exterminar um grande número de monstros.\n"
				"Mas apoiando-os como um sacerdote deve ter sido difícil para ela...");
			next;
			mes("[Irmã Linus]\n"
				"Em seguida, aconteceu a tragédia.\n"
				"Cercados por Andarilhos, os aventureiros caíram em derrota, um por um.\n"
				"Logo, a jovem Sacerdotisa era a única do grupo ainda de pé.");
			next;
			mes("[Irmã Linus]\n"
				"Sozinha contra uma impossível probabilidade."
				"Aquela pobre menina não tinha escolha a não ser tentar uma desesperada aposta.\n"
				"Ela começou a entoar a santa magia antiga...");
			next;
			select("Antiga magia...?");
			mes("[Irmã Linus]\n"
				"Sim! ^FF0000Martírio^000000!\n"
				"Uma habilidade que só os mais talentoso Sacerdotes podem realizar!\n"
				"E aqui ela era, uma jovem Sacerdotisa com muita pouca experiência, e estava tentando usá-la!");
			next;
			mes("[Irmã Linus]\n"
				"Martírio é a última habilidade-recurso que pode ser utilizada nobremente para salvar vidas de outras pessoas,\n"
				"ao custo de ^3131FFsacrificar sua própria vida^000000.");
			next;
			mes("[Irmã Linus]\n"
				"Sim, também me lembro que ela não estava muito interessada em estudar as habilidades de Sacerdote e as de Noviço.\n"
				"Surpreendentemente, ela tinha aprendido o suficiente para utilizar o Martírio...");
			next;
			mes("[Irmã Linus]\n"
				"Milagrosamente, ela conseguiu reviver todos os membros do seu grupo.\n"
				"E eles usaram rapidamente um Fruto de Yggdrasil para restaurarem suas vidas,\n"
				"e logo derrotaram os Andarilhos e voltaram para casa em segurança.");
			next;
			mes("[Irmã Linus]\n"
				"Devido a este sucesso, ela foi promovida a Suma Sacerdotisa.\n"
				"Mesmo tendo cometido muitos erros no passado.\n"
				"Agora, ela viaja o mundo ajudando os aventureiros da forma como pode.");
			next;
			mes("[Irmã Linus]\n"
				"Mas, bem, ela será sempre corajosa e uma menina alegre para mim.");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Espere, você ainda não respondeu a minha pergunta.\n"
				"Você está orando por essa Sumo Sacerdotisa?\n"
				"E se sim, ela corre algum tipo de perigo?");
			next;
			mes("[Irmã Linus]\n"
				"A alguns meses atrás, ela foi até uma missão em ^3131FFLighthalzen^000000."
				"Uma cidade da República de Schwartzwald.\n"
				"E eu estou preocupado já que não ouço falar dela faz um tempo.");
			next;
			mes("[Irmã Linus]\n"
				"Eu venho aqui para rezar por ela todos os dias."
				"Na esperança de que ela volte em segurança e compartilhe histórias de suas aventuras comigo.\n"
				"Ah, iremos conversar a noite inteira! Será muito divertido!");
			next;
			mes("[Irmã Linus]\n"
				"Deus, acho\n"
				"que falei muito!\n"
				"Me desculpe por tomar seu tempo, você tem algum lugar para ir?\n"
				"Quero que saiba, que eu estarei orando por sua segurança ^FFFFFF^000000");
			next;
			mes("[" + strcharinfo(CHAR_NAME) + "]\n"
				"Antes de ir, por favor pode me dizer o nome da Suma Sacerdotisa que você estava falando?\n"
				"Se eu vê-la, irei pedir para que ela entre em contato com você.");
			next;
			mes("[Irmã Linus]\n"
				"Ah, muito obrigado! O nome dela é Suma Sacerdotisa Sorin. Melhor, ^3131FFMargaretha Sorin^000000.\n"
				"Se você por acaso encontrá-la.\n"
				"Por favor diga a ela que eu estou orando por sua segurança.");
			priest_sk = 1;
			close;
		} else if (priest_sk == 1) {
			mes("[Irmã Linus]\n"
				"Olá");
			next;
			if (select("Me ensine o ^3131FFMartírio^000000", "Cancelar") == 1) {
				mes("[Irmã Linus]\n"
					"Hum, Martírio é uma boa habilidade para você aprender, é difícil de utilizá-la."
					"Mas quando conseguir, você poderá reviver todos os membros derrotados do seu Grupo.");
				next;
				mes("[Irmã Linus]\n"
					"Naturalmente, a desvantagem é que você deve....\n"
					"^3131FFsacrificar sua própria vida^000000 afim de usar a habilidade.\n"
					"Agora, vamos aprender o Martírio, primeiro você deve aprender a ^3131FFRessucitar no Nível 1^000000.");
				next;
				mes("[Irmã Linus]\n"
					"Ah, você deve também me trazer\n"
					"^3131FF30 Águas Benta e\n"
					"20 Gemas Azul^000000\n"
					"assim você poderá aprender a habilidade.");
				priest_sk = 2;
				next;
				mes("[Irmã Linus]\n"
					"Mas se você falhar ao aprender Martírio.\n"
					"Você irá perder 1 Água Benta e 1 Gema Azul e você terá que tentar novamente...");
				close;
			} else {
				mes("[Irmã Linus]\n"
					"Orar me dá um senso de paz e conforto.\n"
					"Talvez essa seja a única razão para que eu escolhesse essa classe...");
				close;
			}
		} else if (priest_sk == 2) {
			if (getskilllv("ALL_RESURRECTION") && countitem(Holy_Water) > 29 && countitem(Blue_Gemstone) > 19) {
				mes("[Irmã Linus]\n"
					"Parece que você possui todos os requisitos necessários para aprender o Martírio.\n"
					"Você está pronto para tentar?\n"
					"Se você falhar, você irá perder 1 Água Benta e 1 Gema Azul, certo?");
				next;
				mes("[Irmã Linus]\n"
					"Agora, por favor concentre-se e repita essa oração especial logo depois de mim.");
				next;
				mes("[Irmã Linus]\n"
					"^3131FFÓ santo e venerável, nós oramos para você.\n"
					"Por favor mostre a sua misericórdia e nos guie com sua luz.\n"
					"Nos dê a força para caminhar no caminho do amor e do sacrifício.\n"
					"Martírio!^000000");
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
					mes("[Irmã Linus]\n"
						"Parabéns!\n"
						"Você conseguiu aprender o Martírio!\n"
						"Por favor lembre de usar essa habilidade apenas em situações críticas.");
					delitem(Blue_Gemstone, 20);
					delitem(Holy_Water, 30);
					priest_sk = 3;
					skill("PR_REDEMPTIO", 1, 0);
					close;
				} else {
					specialeffect(EF_POISONHIT, AREA, playerattached());
					mes("[Irmã Linus]\n"
						"Ah não! Me desculpe, mas eu falhei ao ensinar Martírio.\n"
						"Bem eu estarei esperando aqui.\n"
						"Para que possamos tentar novamente quando você estiver pronto, certo?");
					delitem(Blue_Gemstone, 1);
					delitem(Holy_Water, 1);
					close;
				}
			} else {
				mes("[Irmã Linus]\n"
					"Se você deseja aprender o Martírio, por favor me traga\n"
					"^3131FF20 Gemas Azui^000000 e\n"
					"^3131FF30 Águas Benta^000000.\n"
					"Ah, e também é necessário aprender antes ^3131FFRessucitar\n"
					"Nível 1^000000.");
			}
		} else if (priest_sk == 3) {
			if (!getskilllv("PR_REDEMPTIO")) {
				mes("[Irmã Linus]\n"
					"Hum? Nós já nos conhecemos antes, não foi?\n"
					"Todos os sacerdotes começam a parecerem os mesmos depois de um tempo.\n"
					"Ah, você foi um dos a quem ensinei o Martírio?");
				next;
				mes("[Irmã Linus]\n"
					"Você esqueceu, certo?\n"
					"Bem, isso não é nenhum problema para mim, posso ensiná-lo novamente.\n"
					"Essa habilidade permite que você reviva os membros de seu grupo,\n"
					"que estejam mortos através do sacrifício de sua própria vida.");
				next;
				mes("[Irmã Linus]\n"
					"^3131FFÓ santo e venerável, nós oramos para você.\n"
					"Por favor mostre a sua misericórdia e nos guie com sua luz.\n"
					"Nos dê a força para caminhar no caminho do amor e do sacrifício.\n"
					"Martírio!^000000");
				skill("PR_REDEMPTIO", 1, 0);
				priest_sk = 0;
				next;
				mes("[Irmã Linus]\n"
					"Acho que...\n"
					"Você deve ser capaz de utilizar o Martírio agora.\n"
					"Eu espero que você use-o de forma correta em suas aventuras");
				close;
			} else {
				priest_sk = 0;
				mes("[Irmã Linus]\n"
					"Eu sempre estarei orando por sua segurança.\n"
					"Eu espero que você possa trazer amor e compaixão para todos que encontrar em sua jornada.");
				close;
			}
		}
	} else {
		mes("[Irmã Linus]\n"
			"Por favor tenha misericórdia e espalhe sua luz pelo mundo.\n"
			"Guie-a com sua benevolência e sua sabedoria...\n"
			"Abençoe, e que ela possa ser protegida pela sua graça.");
		close;
	}
}
