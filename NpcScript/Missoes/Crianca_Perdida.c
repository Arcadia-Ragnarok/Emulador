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
| - Author: L0ne_W0lf                                               |
| - Version: Spell Master                                           |
| - Info: Quest da Crian�a Desaparecisa.                            |
| - Note: Parte inicial sendo conclu�da durante a quest do Templo   |
|         de Rachel.                                                |
\*-----------------------------------------------------------------*/

ra_in01,384,246,3	script	Vincent#ra_in01	1_M_01,{
	if (BaseLevel < 60) {
		mes "[Vincent]";
		mes "Voc� est� na Casa do senhor Zhed procurando empregados novos.";
		mes "Eu n�o penso que voc� est� adequado para este tipo de trabalho dom�stico.";
		close;
	} else if (!lost_boy) {
		mes "[Vincent]";
		mes "Eu sou Vincert, mordomo desta mans�o e fiel empregado de seu mestre.";
		mes "Senhor Zhed, o mais poderoso homem de toda a Arunafeltz.";
		next;
		mes "[Vincent]";
		mes "Meu mestre est� fora foi atender um chamado do padre e ficar� por alguns dias.";
		mes "E gostaria de perguntar se voc� pode me ajudar com um problema interessante";
		next;
		if (select("Estou ocupado demais","Claro, porqu� n�o?") == 1) {
			mes "[Vincent]";
			mes "Eu Entendi";
			mes "Me desculpe se voce est� muito oculpado no momento.";
			mes "Se voc� estiver dispon�vel mais tarde, ent�o eu gostaria de seu aux�lio outra vez.";
			close;
		}
		mes "[Vincent]";
		mes "Obrigado.";
		mes "Voc� viu, a papisa concedeu ao senhor Zhed por suas grandes contribui��es para Arunafeltz com uma gema preciosa.";
		mes "Entretanto, est� j�ia sumiu e eu preciso sua ajuda de encontr�-la.";
		next;
		mes "[Vincent]";
		mes "Eu n�o tenho nenhuma prova.";
		mes "Mas suspeito que foi roubado por Phobe, um empregado que desapareceu mais ou menos quando a gema sumiu.";
		next;
		mes "[Vincent]";
		mes "Recupere por favor est� gema e descubra quem roubou antes que o senhor Zhed retorne e descubra o que aconteceu.";
		mes "Se voc� manter este segredo, eu ficarei muito grato.";
		next;
		mes "[Vincent]";
		mes "Eu acredito que voc� quereria interrogar Phobe, mas ele fuigiu para algum lugar.";
		mes "Voc� pode perguntar os outros empregados sobre sua localiza��o. Agrade�o outra vez sua ajuda.";
		lost_boy = 1;
		setquest(8089);
		close;
	} else if ((lost_boy >= 1) && (lost_boy < 4)) {
		mes "[Vincent]";
		mes "Eu sugiro olhar ao redor da mans�o e perguntar para alguns empregados se h� ind�cios de onde Phobe possa estar.";
		close;
	} else if ((lost_boy >= 4) && (lost_boy < 7)) {
		mes "[Vincent]";
		mes "N�s estamos correndo contra o tempo...";
		mes "Encontre por favor a gema e o Phobe assim que voc� puder.";
		close;
	} else if (lost_boy == 7) {
		mes "[Vincent]";
		mes "Ah...!";
		mes "Ol�! Como est� voc� ainda, er...";
		mes "Isso olha sua cara voc� encontrou Logan?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "N�o! Eu estava realmente conversando com Mogan, e ent�o n�s tivemos uma conversa.";
		mes "Qual � a grande id�ia?";
		mes "Eu te ajudar e voc� tenta me matar!";
		mes "Eu quero uma explica��o!";
		next;
		mes "[Vincent]";
		mes "Eu... Sim, voc� merece a verdade ap�s o que eu tentei fazer-lhe.";
		mes "Primeiramente...";
		mes "Phobe � meu filho, mas por favor n�o diga para ningu�m!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Que?";
		mes "Por que, qual o grande problema?";
		next;
		mes "[Vincent]";
		mes "Existe um sistema de classes aqui em Arunafeltz.";
		mes "Ningu�m fala sobre ele, mas aquelas que imigraram aqui e construiuram esta cidade, s�o a classe dominante.";
		next;
		mes "[Vincent]";
		mes "Os povos nativos s�o cidad�os da segunda classe que s�o olhados para baixo em cima pelos descendentes dos colonos que desenvolveram est� cidade.";
		mes "Isso � uma verdade triste, incontest�vel.";
		next;
		mes "[Vincent]";
		mes "Os povos nativos sofrem tipicamente do status de uma classe mais baixa, e fazem geralmente o trabalho de animais na cidade.";
		mes "Jenny a m�e de Phobe � um deles.";
		next;
		mes "[Vincent]";
		mes "� um tabu para que eu ame-a, especialmente desde que o senhor Zhed me tomou sob sua asa e foi como um pai a mim.";
		mes "Se eu casasse com ela, danificaria extremamente sua reputa��o.";
		next;
		mes "[Vincent]";
		mes "Eu tentei controlar meus sentimentos mas...";
		mes "Bem, Phobe era nascido.";
		mes "E n�o tem como voltar agora.";
		mes "N�s nos casamos escondido e eu n�o me arrependo.";
		next;
		mes "[Vincent]";
		mes "Phobe deve estar indignado...";
		mes "Eu tive que tratar sua m�e e ele como escravos na frente de outros povos.";
		mes "Eu sei que � horr�vel...";
		mes "Ser frio �queles que voc� ama.";
		next;
		mes "[Vincent]";
		mes "Quando ele fugiu com a j�ia, eu realmente me preocupei com o que Phobe.";
		mes "Poderia fazer com o tesouro do meu senhor.";
		mes "Assim eu fiz o que eu poderia fazer";
		mes "Eu empreguei-o.";
		next;
		mes "[Vincent]";
		mes "Entretanto, uma vez que voc� encontrou Phobe, eu planejei t�-lo matado de modo que n�s pud�ssemos o responsabilizar pelo roubo.";
		mes "Eu sou pesaroso, eu sei que � errado, mas eu estava aflito.";
		next;
		mes "[Vincent]";
		mes "Espero que me perdoe...";
		mes "Farei o que deveria ser feito desde o come�o...";
		mes "Tomarei toda a responsabilidade pelo roubo da gema, e Sr. Zhed pode fazer comigo o que ele quiser.";
		next;
		mes "[Vincent]";
		mes "A gema � muito especial...";
		mes "Nossa papisa ordenou meu senhor para mater a j�ia segura.";
		mes "At� que ela tenha for�as para salvar Arunafeltz e Rachel quando a hora chegar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A gema � realmente t�o importante, huh?";
		mes "Bem, voc� quase me matou, mas j� que ainda estou vivo, acho que posso procur�-la, entende?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Vov� n�o ter� problemas se eu puder achar a j�ia e Phobe antes que Sr. Zhed retorne.";
		mes "Ent�o tentarei ach�-los para voc� o mais r�pido poss�vel.";
		next;
		mes "[Vincent]";
		mes "Voc� deseja fazer isso por mim?";
		mes "Mesmo depois do que eu lhe fiz passar?";
		mes "^333333*Sniff*^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "�, eu j� entrei nesse problema, ent�o tenho que terminar o servi�o.";
		mes "Al�m disso, Phobe � apenas uma crian�a, ent�o ele provavelmente est� escondido em algum lugar na cidade.";
		lost_boy = 8;
		changequest(8094,8095);
		close;
	} else if (lost_boy == 8) {
		mes "[Vincent]";
		mes "A gema � muito especial...";
		mes "Nossa Papisa ordenou meu senhor para mater a j�ia segura.";
		mes "At� que ela tenha for�as para salvar Arunafeltz e Rachel quando a hora chegar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A gema � realmente t�o importante, huh?";
		mes "Bem, voc� quase me matou, mas j� que ainda estou vivo, acho que posso procur�-la, entende?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� n�o ter� problemas se eu puder achar a j�ia e Phobe antes que Sr. Zhed retorne.";
		mes "Ent�o tentarei ach�-los para voc� o mais r�pido poss�vel.";
		next;
		mes "[Vincent]";
		mes "Voc� deseja fazer isso por mim?";
		mes "Mesmo depois do que eu lhe fiz passar?";
		mes "^333333*Sniff*^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "�, eu j� entrei nesse problema, ent�o tenho que terminar o servi�o.";
		mes "Al�m disso, Phobe � apenas uma crian�a, ent�o ele provavelmente est� escondido em algum lugar na cidade...";
		close;
	} else if (lost_boy == 9) {
		mes "[Vincent]";
		mes "Voc� voltou!";
		mes "Voc� � capaz de encontrar Phobe?!";
		mes "Como ele estava? Ele estava bem?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Huh? Oh sim, ele estava bem.";
		mes "Ele n�o pode vim agora, mas ele me deu a gema roubada.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Assim... Eu ganhei minha recompensa agora, certo?";
		mes "E ningu�m tem que morrer?";
		next;
		mes "[Vincent]";
		mes "Sim, sim, muito obrigado!";
		mes "Eu nunca esquecerei o que voc� f�z para mim.";
		mes "Oh, meu menino est� bem!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "H-hey! Um, pegue esta j�ia!";
		mes "Voc� precisa devolv�-la para qualquer lugar que ela imaginar ir, entendido?";
		next;
		mes "[Vincent]";
		mes "Oh, sim, melhor fazer isto.";
		mes "Enquanto devolvo esta j�ia, voc�, por favor, poderia contar � minha esposa Jenny que nosso garoto est� bem?";
		mes "Ela tem estado muito preocupada com ele, ent�o...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� quer que eu conte � Jenny sobre Phobe?";
		mes "Ok, ok, farei isso.";
		lost_boy = 10;
		changequest(8096,8097);
		close;
	} else if (lost_boy == 11) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Contei � Jenny sobre Phobe, e que a gema foi devolvida...";
		mes "Ela pareceu muito aliviada...";
		next;
		mes "[Vincent]";
		mes "Muito obrigado.";
		mes "Ela � t�o gentil, mulher am�vel, e eu odeio ter que v�-la passar por toda essa tormenta.";
		mes "N�o mere�o uma mulher t�o bonita...";
		next;
		mes "[Vincent]";
		mes "� muito venturoso que voc� tenha vindo nos salvar...";
		mes "Por favor venha at� mim na pr�xima que estiver em Rachel, e eu tentarei ajudar se puder.";
		next;
		mes "[Vincent]";
		mes "Ah, de fato, eu tenho um �ltimo favor para lhe pedir.";
		mes "Voc� poderia, por favor, levar est� nota e para meu senhor?";
		mes "Ele ainda deve estar no templo neste momento.";
		next;
		mes "[Vincent]";
		mes "Se voc� perguntar pelo Sumo Sacerdote Zhed e mencionar que eu o mandei, ent�o ele ir� receb�-lo.";
		next;
		mes "[Vincent]";
		mes "Agora � o momento de lhe entregar sua recompensa.";
		mes "Que tal?";
		mes "N�o sei o que h� dentro.";
		mes "Mas sei que estes itens s�o bem valiosos hoje em dia...";
		lost_boy = 12;
		changequest(8098,8099);
		getitem(Old_Violet_Box,1);
		next;
		mes "[Vincent]";
		mes "Ah, e est� observa��o � uma carta de recomenda��o que escrevi para voc�.";
		mes "Por favor entregue-a para o Sr. Zhed o mais r�pido poss�vel.";
		mes "Adeus, e muito obrigado por tudo.";
		next;
		mes "^3355FFVoc� recebeu uma carta de recomenda��o de Vincent.^000000";
		close;
	} else if (lost_boy == 10) {
		mes "[Vincent]";
		mes "Oh! Enquanto devolvo esta j�ia, voc�, por favor, poderia contar � minha esposa Jenny que nosso garoto est� bem?";
		mes "Ela tem estado muito preocupada com ele, ent�o...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Voc� quer que eu conte � Jenny sobre Phobe?";
		mes "Ok, ok, farei isso.";
		close;
	} else {
		mes "[Vincent]";
		mes "Muito obrigado por tudo que voc� fez por mim e minha fam�lia.";
		mes "Se voc� alguma vez precisar de ajuda, por favor n�o hesite em me peidr, ok?";
		close;
	}
}

// ------------------------------------------------------------------
rachel,114,232,3	script	Logan#ra_in01	4_M_LGTMAN,{
	if (lost_boy == 1) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a, mas voc� conhece um homem chamado Phoebe?";
		mes "Eu ouvi que ele trabalhava aqui ao redor";
		next;
		mes "[Logan]";
		mes "Er, eu posso perguntar voc� �?";
		mes "Porque voc� o est� procurando?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, eu h� pouco fui contratad"+(Sex == SEX_MALE ? "o":"a")+" para o procurar.";
		mes "E me falaram que os criados nos arredores tinham um bom ponto de partida";
		next;
		mes "[Logan]";
		mes "Oh, est� bem.";
		mes "Sim Phoebe est� perdendo desde ent�o ele partiu para comprar algums materias no mercado a poucos dias atras espero que ele esteja bem";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, quantos anos tem Phoebe?";
		next;
		mes "[Logan]";
		mes "Ele acabou de fazer quinze anos, isso � tudo que sei sobre ele.";
		mes "Pra falar a verdade, eu n�o sei muito desde que come�ei a trabalhar aqui.";
		mes "Porque voc� n�o pergunta para os empregadores s�niors?";
		next;
		mes "[Logan]";
		mes "Vejamos...";
		mes "voc� poderia perguntar ao Sr.Manson dentro da mans�o.";
		mes "Ele trabalha l� durante algum tempo";
		lost_boy = 2;
		changequest(8089,8090);
		close;
	} else if (lost_boy == 2) {
		mes "[Logan]";
		mes "se voc� quer saber mais sobre Phoebe.";
		mes "Seria melhor, perguntar a um empregado s�nior, eu come�ei a pouco tempo";
		mes "Trabalhando aqui. Sr. Manson est� dentro da mans�o, � uma boa aposta";
		close;
	} else {
		mes "[Logan]";
		mes "Eu sou um dos muitos criados que trabalham aqui na mans�o gloriosa do senhor Zhed.";
		mes "Eu tenho muito trabalho para fazer, ent�o por favor n�o me distraia.";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,372,200,3	script	Manson#ra_in01	4_M_MIDDLE,{
	if (!lost_boy) {
		mes "[Manson]";
		mes "Eu sou Manson, um dos muitos criados que trabalham aqui, na mans�o do senhor Zhed.";
		mes "Er, voc� poderia ter mais cuidado andando por aqui?";
		mes "Eu odeio limpar depois que vem visitantes";
		close;
	} else if (lost_boy == 1) {
		mes "[Manson]";
		mes "Voc� sabe, considerando o tanto de nativos com eu s�o olhados de cima para baixo.";
		mes "E muitas classes mistas eu realmente tenho sorte de trabalhar para o Sr. Zhed aqui na mans�o.";
		close;
	} else if (lost_boy == 2) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a, mas voc� conhe�e um homem chamado Phoebe?";
		mes "Ele sumiu da mansao, ent�o eu estou procurando por ele";
		next;
		mes "[Manson]";
		mes "Ah, assim voc� � o que Vicent contratou, huh?";
		mes "Isso � bom, Isso � bom.";
		mes "Eu estou seguro que Phobe est� escondido por ai, e fazendo alguma bagun�a por a�";
		next;
		mes "[Manson]";
		mes "Eu estou seguro ele pode tomar conta dele mesmo, assim n�s n�o teremos que nos preocupar muito.";
		mes "Vejamos ele me perguntou se eu tivesse qualquer incumb�ncia para ele fazer ent�o eu o enviei para o mercado.";
		next;
		mes "[Manson]";
		mes "Isso � a �ltima vez que eu vi ele.";
		mes "Eu acho que ele est� usando o dinheiro que eu o dei para se alimentar enquanto ele foge.";
		mes "Ele � jovem ent�o n�o posso o culpar.";
		mes "N�s sempre fazemos coisas loucas.";
		next;
		mes "[Manson]";
		mes "Ah, nosso jardineiro Jenny foi o que me aprsentou a ele.";
		mes "Ela trabalhou para o Sr. Zhed por muito tempo, e ela ama crian�as.";
		mes "Eu acho que ela gosta do Phoebe";
		next;
		mes "[Manson]";
		mes "Ningu�m sabe que s�o os pais dele, ent�o eu acho que ele � orf�o.";
		mes "Isso provavelmente � porque ela o tem trabalhando conosco na mans�o.";
		next;
		mes "[Manson]";
		mes "Jenny fez muito para n�s saltamos processo de emprego habitual para ela, voc� sabe?";
		mes "E agora Jenny e o Vincent est�o preocupados sobre seu desaparecimento";
		next;
		mes "[Manson]";
		mes "Voc� sabe, se voc� quer saber mais daquela crian�a, voc� deveria falar com Jenny.";
		mes "Ela est� trabalhando no jardim agora, e ela apreciaria sua ajuda achando Phobe.";
		lost_boy = 3;
		changequest(8090,8091);
		close;
	} else if (lost_boy == 3) {
		mes "[Manson]";
		mes "Voc� sabe, se voc� quer saber mais daquela crian�a, voc� deveria falar com Jenny.";
		mes "Ela est� trabalhando no jardim agora, e ela apreciaria sua ajuda achando a crian�a";
		close;
	} else {
		mes "[Manson]";
		mes "Louco, h� tanto trabalho para fazer!";
		mes "Eu nunca vi tudo terminado at� o final do dia.";
		mes "Bom, continuar vivendo";
		close;
	}
}

// ------------------------------------------------------------------
rachel,48,237,3	script	Jenny#ra_in01	4_F_KHELLISIA,{
	if (lost_boy == 3) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a, mas voc� � Jenny?";
		mes "Me falaram para eu procurasse voc� para me falar mais sobre Phoebe.";
		mes "Vicent me contratou para encontrar ele.";
		next;
		mes "[Jenny]";
		mes "Oh! que boa";
		mes "Not�cia! S-sim, eu sou Jenny.";
		mes "O que voc� precisa saber?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Er, tudo o que voc� puder contar.";
		mes "Me fale se ele est� bem.";
		mes "Coisas que ele gosta.";
		mes "Qualquer coisa que me ajudar na investiga��o";
		next;
		mes "[Jenny]";
		mes "Phoebe � um bom menino.";
		mes "Eu n�o sei que tipo de problema ele est� tendo nesse tempo.";
		mes "Mas ele � realmente um grande menino se voc� der-lhe uma chance.";
		next;
		mes "[Jenny]";
		mes "Oh... Vincent deve estar tamb�m.";
		mes "Eu estou muito alegre que ele seja encontrado.";
		mes "Mas algums lugares ele n�o conhece eu n�o estou seguro se ele sabe";
		next;
		mes "[Jenny]";
		mes "Voc� ja tentou o Mercado?";
		mes "L� ele foi visto pela ultima vez, n�o �?";
		mes "Talvez eles tenham alguma id�ia de onde ele foi.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh... essa � uma boa id�ia!";
		mes "Ent�o ta, acho que posso ir ao mercado e perguntar nos arredores.";
		lost_boy = 4;
		changequest(8091,8092);
		close;
	} else if ((lost_boy >= 3) && (lost_boy < 6)) {
		mes "[Jenny]";
		mes "Por favor ache Phoebe, e traga ele pra mim devolta salvo o mais r�pido poss�vel que voc� puder!";
		mes "Eu n�o posso ajudar, mas posso preocupar com aquele menino, voc� entende?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu vou fazer meu melhor.";
		mes "Primeiro, eu acho que vou perguntar nos arredores do mercado onde Phobe foi visto pela �ltima vez.";
		close;
	} else if (lost_boy == 6) {
		mes "[Jenny]";
		mes "Por favor ache Phoebe, e traga ele pra mim devolta salvo o mais r�pido poss�vel que voc� puder!";
		mes "Eu n�o posso ajudar, mas posso preocupar com aquele menino, voc� entende?";
		close;
	} else if (lost_boy == 7) {
		mes "[Jenny]";
		mes "Oh! voc� voltou, encontrou Phobe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ainda n�o...";
		mes "Eu tenho algo muito importante para discutir com o Vicent primeiro.";
		close;
	} else if (lost_boy == 8) {
		mes "[Jenny]";
		mes "Oh! voc� voltou, encontrou Phobe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "De fato... Uh...";
		mes "Ainda n�o. Mas eu estou seguindo uma boa pista!";
		mes "N�o se preocupe, eu vou";
		mes "Achar ele em breve, eu prometo.";
		close;
	} else if (lost_boy == 9) {
		mes "[Jenny]";
		mes "Oh! voc� voltou, encontrou Phobe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "De fato... Uh...";
		mes "Eu deveria informar primeiro a Vicent e devolver esta j�ia, mas eu entregarei noticias boas logo.";
		mes "Eu prometo.";
		mes "Vejo voc� depois.";
		close;
	} else if (lost_boy == 10) {
		mes "[Jenny]";
		mes "Oh! voc� voltou";
		mes "Voc� encontrou Phobe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, ele est� bem, mais esta suspenso em volta do lado sul da cidade.";
		mes "Ele est� seguro, mas n�o est� disposto a voltar para casa por enquanto.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quando a J�ia tiver sido devolvida, tudo finalmente ficar� bem.";
		mes "Al�m disso, Vincent me explicou tudo.";
		mes "Como voc� sabe, voc�, Vicent, e Phobe est�o todos relacionados, por isso ...";
		next;
		mes "[Jenny]";
		mes "Oh! Oh, entendi.";
		mes "Ele contou a voc� nosso segredo?";
		mes "Bem, eu acho que podemos confiar em voc�.";
		mes "Na maioria das vezes, eu apenas ajudo meu filho � ficar tudo bem, e que n�o se meta em problemas.";
		next;
		mes "[Jenny]";
		mes "De Qualquer jeito, embora Phobe seja bastante teimoso.";
		mes "Eu tenho certeza de que ele voltar� bem em breve.";
		mes "Ele cresceu, acho que ele entender� que o pai dele est� em uma posi��o um pouco melhor.";
		next;
		mes "[Jenny]";
		mes "Espero que sim.";
		mes "Embora est� sendo muito dif�cil para todos n�s tr�s vivermos desse jeito.";
		mes "N�s n�o poder�amos ser felizes.";
		mes "Obrigado por toda sua ajuda.";
		lost_boy = 11;
		changequest(8097,8098);
		close;
	} else if (lost_boy >= 10) {
		mes "[Jenny]";
		mes "Obrigado por sua ajuda a encontrar meu Filho.";
		mes "Se houver qualquer coisa que eu possa fazer por voc�.";
		mes "Por favor me diga agora, voc� n�o imagina o quanto eu estou grata.";
		close;
	} else {
		mes "[Jenny]";
		mes "Estes ch�os s�o possu�dos por Senhor Zhed e s�o considerados Propriedade privada.";
		mes "Por favor parta imediatamente se voc� n�o foi convidado";
		close;
	}
}

// ------------------------------------------------------------------
rachel,138,73,5	script	Mercador Idle#ra_in01	4_M_03,{
	if (lost_boy == 4) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a?";
		mes "Ol�? Senhor?";
		next;
		mes "[Mercador Idle]";
		mes "FINALMENTE!";
		mes "Um comprador, eu sabia que algu�m iria vir finalmente!";
		mes "Ent�o o que voc� quer comprar?";
		mes "Eu tenho todo o tipo de adere�os �teis";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Infelizmente, eu n�o estou interessado.";
		mes "S� queria perguntar se voc� viu algum garoto por aqui ele tem 15 anos.";
		mes "Ele supostamente fugiu de Casa, e a�...";
		next;
		mes "[Mercador Idle]";
		mes "Quinze? Meu pr�prio filho tem essa idade...";
		mes "Me desculpe, mas nunca vi este um menino dessa idade passando por aqui por esses dias.";
		mes "Talvez, voc� deveria perguntar para os outros mercadores.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Certo. Muito Obrigado.";
		next;
		mes "[Mercador Idle]";
		mes "OK, ent�o boa sorte para trazer o garoto de volta para casa!";
		lost_boy = 5;
		close;
	} else if (lost_boy == 5) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "(^333333� melhor voc� perguntar aos mercadores que est�o aqui se algu�m viu esse garoto.";
		mes "Eu estou perdendo meu tempo falando com voc� esse mercador louco e seus rid�culos vegetais falsos.^000000)";
		close;
	} else {
		mes "[Mercador Idle]";
		mes "Os neg�cios est�o indo t�oooo Devagarrrr agora!";
		mes "Bem, nenhum ponto em p� em volta desse lugar distante.";
		mes "Talves devo arrumar tudo e ir para casa.";
		close;
	}
}

// ------------------------------------------------------------------
rachel,120,47,3	script	Mercador Idle#ra_in01_2	4_M_03,{
	if (lost_boy == 5) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a,";
		mes "Hum... oi?";
		next;
		mes "[Mercador Idle]";
		mes "Oh! Bem vindo � minha loja!";
		mes "Como eu posso lhe ajudar?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Na verdade, eu n�o estou aqui para comprar nada...";
		mes "Estou procurando por um menino o nome dele � Phobe sumiu a alguns dias.";
		mes "Voc� o viu?";
		next;
		mes "[Mercador Idle]";
		mes "Oh! sim, ontem a noite, um cara queria saber se algu�m estava procurando esse garoto chamado Phobe, para dar a voc� uma mensagem.";
		mes "Basicamente, ele quer que voc� v� at� \"Caverna de Gelo\".";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quem Pediu a voc� para me dizer isso?";
		mes "Como vou Saber?";
		mes "Quem veio aqui?";
		mes "Ser� que ele sabe aonde est� phobe est�?";
		next;
		mes "[Mercador Idle]";
		mes "Eu te contei tudo o que eu sei.";
		mes "Deixa me ver o nome era... Nogan?";
		mes "Rogan?";
		mes "Alguma coisa";
		mes "desse tipo.";
		mes "Isso � tudo o que eu sei, honestamente.";
		next;
		mes "[Mercador Idle]";
		mes "Ent�o sobre o garoto perdido.";
		mes "Boa sorte na procura dele.";
		mes "Ah, e tome cuidado na Caverna.";
		mes "Aquele Lugar pode ser muito perigoso.";
		lost_boy = 6;
		changequest(8092,8093);
		close;
	} else if (lost_boy == 6) {
		mes "[Mercador Idle]";
		mes "Ontem a noite, um cara queria saber se algu�m estava procurando esse garoto chamado Phobe, para dar a voc� uma mensagem.";
		mes "Basicamente, ele quer que voc� v� at� \"Caverna de Gelo\".";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quem Pediu a voc� para me dizer isso?";
		mes "Como vou Saber?";
		mes "Quem veio aqui?";
		mes "Ser� que ele sabe aonde est� phobe est�?";
		next;
		mes "[Mercador Idle]";
		mes "Eu te contei tudo o que eu sei.";
		mes "Deixa me ver o nome era... Nogan?";
		mes "Rogan?";
		mes "Alguma coisa";
		mes "desse tipo.";
		mes "Isso � tudo o que eu sei, honestamente.";
		next;
		mes "[Mercador Idle]";
		mes "Ent�o sobre o garoto perdido.";
		mes "Boa sorte na procura dele.";
		mes "Ah, e tome cuidado na Caverna.";
		mes "Aquele Lugar pode ser muito perigoso.";
		close;
	} else {
		mes "[Mercador Idle]";
		mes "Estou pensando em sair desse Trabalho...";
		mes "Ningu�m parece querer nada, tudo eu sou um vendedor!";
		mes "Eu definitivamente n�o posso viver uma vida desse tipo.";
		close;
	}
}

// ------------------------------------------------------------------
ra_fild01,245,325,3	script	Homem Suspeito#ra_in01	4_M_RASWORD,{
	if (lost_boy == 6) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licen�a, mas voc� seria Rogan?";
		mes "Eu estou aqui....";
		next;
		mes "[Homem Suspeito]";
		mes "Hah! N�o Fa�o id�ia";
		mes "isto � bem simples!";
		mes "Eu quero fazer dinheiro f�cil como nucna fiz!";
		mes "Bwahahaha";
		mes "Hora de voc� morrer!";
		next;
		mes "[Homem Suspeito]";
		mes "Hyah!";
		percentheal(-50,0);
		next;
		mes "^3355FFO Homen Suspeito feriu voc� com uma lan�a Adaga, e depois lan�ou outra que voc� conseguiu se esquivar.";
		mes "Voc� rapidamente revidou, para feri-lo mas do que ele te ferir.^000000";
		next;
		mes "[Homem Suspeito]";
		mes "Argh! eu...";
		mes "Acho que o Substimei voc�!";
		mes "Voc� � muito forte mesmo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, Quem Diabos � voc� voc�?!";
		mes "Voc� � Rogan?";
		mes "Voc� � aquele que sequestrou Phobe?";
		next;
		mes "[Homem Suspeito]";
		mes "Mas qu--? eu n�o";
		mes "N�o Sequestrei ningu�m!";
		mes "Eu n�o sei nada sobre Phobe!";
		mes "Eu s� vim aqui para lhe matar e levar o corpo para meu cliente.";
		mes "Isto n�o foi esperado.";
		next;
		mes "[Homem Suspeito]";
		mes "As Intru��es de Vincent qualquer um que perguntassem sobre Rogan, o nome que ele criou.";
		mes "Meu nome � Mogan.";
		mes "Oh Meu Deus...";
		mes "Eu pensei que voc� fosse uma pessoa malvada.";
		next;
		mes "[Mogan]";
		mes "Ei, me indique corretamente aqui.";
		mes "Voc� roubou algo realmente de valor, tipo como uma j�ia vermelha ou algo do tipo?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Huh? N�o!";
		mes "Na verdade Vincent me mandou para procurer o garoto que roubou aquela j�ia, e levar de volta para ele!";
		next;
		mes "[Mogan]";
		mes "Parece que ele quer nos manipular agente, cara.";
		mes "Isso � realmente Baixo.";
		mes "Desculpe se eu soubesse, eu realmente n�o teria feito tal coisa.";
		mes "Por que ser� que ele nos manipulou desse jeito?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu n�o sei...";
		mes "Estou indo conversar com Vincente faze-lo explicar Tudo.";
		lost_boy = 7;
		changequest(8093,8094);
		close;
	} else if (lost_boy == 7) {
		mes "[Mogan]";
		mes "Parece que ele quer nos manipular agente.";
		mes "Isso �... realmente Baixo.";
		mes "Desculpe se eu soubesse, eu realmente n�o teria feito tal coisa.";
		mes "Por que ser� que ele nos manipulou desse jeito?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu N�o sei...";
		mes "Estou indo conversar com Vincente faze-lo explicar tudo.";
		close;
	} else {
		mes "[Homem Suspeito]";
		mes "Isso N�o � o suficiente o ar aqui, � muito raro!";
		mes "Ei, V� embora!";
		mes "Voc� esta roubando todo o meu precioso Oxig�nio";
		close;
	}
}

// ------------------------------------------------------------------
rachel,263,32,3	script	Crian�a#ra_in01	4_M_RACHMAN1,{
	if (lost_boy == 8) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, voc� deve ser Phobe, certo?";
		next;
		mes "[Crian�a]";
		mes "Sim, e dai?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Seu pai me enviou aqui para achar voc�.";
		next;
		mes "[Phobe]";
		mes "N�o! N�o Encoste em mim!";
		mes "Eu n�o tenho Pai!";
		mes "El..Ele est� morto pra mim!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, em todo caso, eu preciso retornar com aquela j�ia que voc� est� escondendo no seu bolso.";
		mes "Eu sei que ela realmente pertence ao Senhor Zhed se n�o seu pai estar� com problemas";
		next;
		mes "[Phobe]";
		mes "Ha ! Como assim";
		mes "Vicent isto est� bem para mim!";
		mes "Isto � exatamente porque eu levei est� coisa!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, sim? Como voc� sabe?";
		mes "O que a senhora Jenny ir� sentir?";
		mes "Voc� acha que ela ficar� bem feliz quando ouvir sobre isso?";
		next;
		mes "[Phobe]";
		mes "................";
		mes "Ent�o, o que voc� sabe a respeito da nossa fam�lia secreta?";
		mes "Certo, te darei isso tamb�m voc�.";
		mes "Eu farei isso somente pela minha m�e, e n�o por ele!";
		next;
		mes "^3355FFPhobe puxa devagar a brilhante J�ia vermelha do bolso e coloca relutantemente nas suas m�os.^000000";
		next;
		mes "[Phobe]";
		mes "Como voc� sabe, eu n�o tenho um plano voltar para casa.";
		mes "Pois j� basta n�o neste Segundo de qualquer forma.";
		mes "Mas eu quero que minha m�e saiba que eu estou bem e que n�o � para se preocupar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Tudo bem.";
		mes "Eu contarei a sua m�e, mas voc� tem que saber que tem de voltar logo.";
		mes "Seu pai est� realmente correndo um grande risco, te dando cobertura ";
		next;
		mes "[Phobe]";
		mes "Hmpf! eu...";
		mes "Eu n�o estou nem ai!";
		next;
		mes "^3355FFIsto n�o me parece bem voc� n�o pode for�ar Phobe tamb�m voltar para casa por enquanto.";
		mes "Ent�o deveria levar essa brilhante j�ia de volta para vincent.^000000";
		lost_boy = 9;
		changequest(8095,8096);
		close;
	} else if (lost_boy == 9) {
		mes "[Phobe]";
		mes "Eu... Eu ainda n�o estou pronto para voltar para casa ainda.";
		mes "Deixar o senhor Vincent, eu sei disso e eu n�o pe�o desculpas pelo o que eu fiz?!";
		next;
		mes "^3355FFIsto n�o me parece bem voc� n�o pode for�ar Phobe tamb�m voltar para casa por enquanto.";
		mes "Ent�o deveria levar essa brilhante j�ia de volta para vincent.^000000";
		close;
	} else {
		mes "[Crian�a]";
		mes "Me deixe em paz!";
		close;
	}
}
