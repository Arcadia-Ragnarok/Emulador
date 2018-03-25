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
| - Info: Quest da Criança Desaparecisa.                            |
| - Note: Parte inicial sendo concluída durante a quest do Templo   |
|         de Rachel.                                                |
\*-----------------------------------------------------------------*/

ra_in01,384,246,3	script	Vincent#ra_in01	1_M_01,{
	if (BaseLevel < 60) {
		mes "[Vincent]";
		mes "Você está na Casa do senhor Zhed procurando empregados novos.";
		mes "Eu não penso que você está adequado para este tipo de trabalho doméstico.";
		close;
	} else if (!lost_boy) {
		mes "[Vincent]";
		mes "Eu sou Vincert, mordomo desta mansão e fiel empregado de seu mestre.";
		mes "Senhor Zhed, o mais poderoso homem de toda a Arunafeltz.";
		next;
		mes "[Vincent]";
		mes "Meu mestre está fora foi atender um chamado do padre e ficará por alguns dias.";
		mes "E gostaria de perguntar se você pode me ajudar com um problema interessante";
		next;
		if (select("Estou ocupado demais","Claro, porquê não?") == 1) {
			mes "[Vincent]";
			mes "Eu Entendi";
			mes "Me desculpe se voce está muito oculpado no momento.";
			mes "Se você estiver disponível mais tarde, então eu gostaria de seu auxílio outra vez.";
			close;
		}
		mes "[Vincent]";
		mes "Obrigado.";
		mes "Você viu, a papisa concedeu ao senhor Zhed por suas grandes contribuições para Arunafeltz com uma gema preciosa.";
		mes "Entretanto, está jóia sumiu e eu preciso sua ajuda de encontrá-la.";
		next;
		mes "[Vincent]";
		mes "Eu não tenho nenhuma prova.";
		mes "Mas suspeito que foi roubado por Phobe, um empregado que desapareceu mais ou menos quando a gema sumiu.";
		next;
		mes "[Vincent]";
		mes "Recupere por favor está gema e descubra quem roubou antes que o senhor Zhed retorne e descubra o que aconteceu.";
		mes "Se você manter este segredo, eu ficarei muito grato.";
		next;
		mes "[Vincent]";
		mes "Eu acredito que você quereria interrogar Phobe, mas ele fuigiu para algum lugar.";
		mes "Você pode perguntar os outros empregados sobre sua localização. Agradeço outra vez sua ajuda.";
		lost_boy = 1;
		setquest(8089);
		close;
	} else if ((lost_boy >= 1) && (lost_boy < 4)) {
		mes "[Vincent]";
		mes "Eu sugiro olhar ao redor da mansão e perguntar para alguns empregados se há indícios de onde Phobe possa estar.";
		close;
	} else if ((lost_boy >= 4) && (lost_boy < 7)) {
		mes "[Vincent]";
		mes "Nós estamos correndo contra o tempo...";
		mes "Encontre por favor a gema e o Phobe assim que você puder.";
		close;
	} else if (lost_boy == 7) {
		mes "[Vincent]";
		mes "Ah...!";
		mes "Olá! Como está você ainda, er...";
		mes "Isso olha sua cara você encontrou Logan?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Não! Eu estava realmente conversando com Mogan, e então nós tivemos uma conversa.";
		mes "Qual é a grande idéia?";
		mes "Eu te ajudar e você tenta me matar!";
		mes "Eu quero uma explicação!";
		next;
		mes "[Vincent]";
		mes "Eu... Sim, você merece a verdade após o que eu tentei fazer-lhe.";
		mes "Primeiramente...";
		mes "Phobe é meu filho, mas por favor não diga para ninguém!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Que?";
		mes "Por que, qual o grande problema?";
		next;
		mes "[Vincent]";
		mes "Existe um sistema de classes aqui em Arunafeltz.";
		mes "Ninguém fala sobre ele, mas aquelas que imigraram aqui e construiuram esta cidade, são a classe dominante.";
		next;
		mes "[Vincent]";
		mes "Os povos nativos são cidadãos da segunda classe que são olhados para baixo em cima pelos descendentes dos colonos que desenvolveram está cidade.";
		mes "Isso é uma verdade triste, incontestável.";
		next;
		mes "[Vincent]";
		mes "Os povos nativos sofrem tipicamente do status de uma classe mais baixa, e fazem geralmente o trabalho de animais na cidade.";
		mes "Jenny a mãe de Phobe é um deles.";
		next;
		mes "[Vincent]";
		mes "É um tabu para que eu ame-a, especialmente desde que o senhor Zhed me tomou sob sua asa e foi como um pai a mim.";
		mes "Se eu casasse com ela, danificaria extremamente sua reputação.";
		next;
		mes "[Vincent]";
		mes "Eu tentei controlar meus sentimentos mas...";
		mes "Bem, Phobe era nascido.";
		mes "E não tem como voltar agora.";
		mes "Nós nos casamos escondido e eu não me arrependo.";
		next;
		mes "[Vincent]";
		mes "Phobe deve estar indignado...";
		mes "Eu tive que tratar sua mãe e ele como escravos na frente de outros povos.";
		mes "Eu sei que é horrível...";
		mes "Ser frio àqueles que você ama.";
		next;
		mes "[Vincent]";
		mes "Quando ele fugiu com a jóia, eu realmente me preocupei com o que Phobe.";
		mes "Poderia fazer com o tesouro do meu senhor.";
		mes "Assim eu fiz o que eu poderia fazer";
		mes "Eu empreguei-o.";
		next;
		mes "[Vincent]";
		mes "Entretanto, uma vez que você encontrou Phobe, eu planejei tê-lo matado de modo que nós pudéssemos o responsabilizar pelo roubo.";
		mes "Eu sou pesaroso, eu sei que é errado, mas eu estava aflito.";
		next;
		mes "[Vincent]";
		mes "Espero que me perdoe...";
		mes "Farei o que deveria ser feito desde o começo...";
		mes "Tomarei toda a responsabilidade pelo roubo da gema, e Sr. Zhed pode fazer comigo o que ele quiser.";
		next;
		mes "[Vincent]";
		mes "A gema é muito especial...";
		mes "Nossa papisa ordenou meu senhor para mater a jóia segura.";
		mes "Até que ela tenha forças para salvar Arunafeltz e Rachel quando a hora chegar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A gema é realmente tão importante, huh?";
		mes "Bem, você quase me matou, mas já que ainda estou vivo, acho que posso procurá-la, entende?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Vovê não terá problemas se eu puder achar a jóia e Phobe antes que Sr. Zhed retorne.";
		mes "Então tentarei achá-los para você o mais rápido possível.";
		next;
		mes "[Vincent]";
		mes "Você deseja fazer isso por mim?";
		mes "Mesmo depois do que eu lhe fiz passar?";
		mes "^333333*Sniff*^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "É, eu já entrei nesse problema, então tenho que terminar o serviço.";
		mes "Além disso, Phobe é apenas uma criança, então ele provavelmente está escondido em algum lugar na cidade.";
		lost_boy = 8;
		changequest(8094,8095);
		close;
	} else if (lost_boy == 8) {
		mes "[Vincent]";
		mes "A gema é muito especial...";
		mes "Nossa Papisa ordenou meu senhor para mater a jóia segura.";
		mes "Até que ela tenha forças para salvar Arunafeltz e Rachel quando a hora chegar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "A gema é realmente tão importante, huh?";
		mes "Bem, você quase me matou, mas já que ainda estou vivo, acho que posso procurá-la, entende?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você não terá problemas se eu puder achar a jóia e Phobe antes que Sr. Zhed retorne.";
		mes "Então tentarei achá-los para você o mais rápido possível.";
		next;
		mes "[Vincent]";
		mes "Você deseja fazer isso por mim?";
		mes "Mesmo depois do que eu lhe fiz passar?";
		mes "^333333*Sniff*^000000";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "É, eu já entrei nesse problema, então tenho que terminar o serviço.";
		mes "Além disso, Phobe é apenas uma criança, então ele provavelmente está escondido em algum lugar na cidade...";
		close;
	} else if (lost_boy == 9) {
		mes "[Vincent]";
		mes "Você voltou!";
		mes "Você é capaz de encontrar Phobe?!";
		mes "Como ele estava? Ele estava bem?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Huh? Oh sim, ele estava bem.";
		mes "Ele não pode vim agora, mas ele me deu a gema roubada.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Assim... Eu ganhei minha recompensa agora, certo?";
		mes "E ninguém tem que morrer?";
		next;
		mes "[Vincent]";
		mes "Sim, sim, muito obrigado!";
		mes "Eu nunca esquecerei o que você fêz para mim.";
		mes "Oh, meu menino está bem!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "H-hey! Um, pegue esta jóia!";
		mes "Você precisa devolvê-la para qualquer lugar que ela imaginar ir, entendido?";
		next;
		mes "[Vincent]";
		mes "Oh, sim, melhor fazer isto.";
		mes "Enquanto devolvo esta jóia, você, por favor, poderia contar à minha esposa Jenny que nosso garoto está bem?";
		mes "Ela tem estado muito preocupada com ele, então...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você quer que eu conte à Jenny sobre Phobe?";
		mes "Ok, ok, farei isso.";
		lost_boy = 10;
		changequest(8096,8097);
		close;
	} else if (lost_boy == 11) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Contei à Jenny sobre Phobe, e que a gema foi devolvida...";
		mes "Ela pareceu muito aliviada...";
		next;
		mes "[Vincent]";
		mes "Muito obrigado.";
		mes "Ela é tão gentil, mulher amável, e eu odeio ter que vê-la passar por toda essa tormenta.";
		mes "Não mereço uma mulher tão bonita...";
		next;
		mes "[Vincent]";
		mes "É muito venturoso que você tenha vindo nos salvar...";
		mes "Por favor venha até mim na próxima que estiver em Rachel, e eu tentarei ajudar se puder.";
		next;
		mes "[Vincent]";
		mes "Ah, de fato, eu tenho um último favor para lhe pedir.";
		mes "Você poderia, por favor, levar está nota e para meu senhor?";
		mes "Ele ainda deve estar no templo neste momento.";
		next;
		mes "[Vincent]";
		mes "Se você perguntar pelo Sumo Sacerdote Zhed e mencionar que eu o mandei, então ele irá recebê-lo.";
		next;
		mes "[Vincent]";
		mes "Agora é o momento de lhe entregar sua recompensa.";
		mes "Que tal?";
		mes "Não sei o que há dentro.";
		mes "Mas sei que estes itens são bem valiosos hoje em dia...";
		lost_boy = 12;
		changequest(8098,8099);
		getitem(Old_Violet_Box,1);
		next;
		mes "[Vincent]";
		mes "Ah, e está observação é uma carta de recomendação que escrevi para você.";
		mes "Por favor entregue-a para o Sr. Zhed o mais rápido possível.";
		mes "Adeus, e muito obrigado por tudo.";
		next;
		mes "^3355FFVocê recebeu uma carta de recomendação de Vincent.^000000";
		close;
	} else if (lost_boy == 10) {
		mes "[Vincent]";
		mes "Oh! Enquanto devolvo esta jóia, você, por favor, poderia contar à minha esposa Jenny que nosso garoto está bem?";
		mes "Ela tem estado muito preocupada com ele, então...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Você quer que eu conte à Jenny sobre Phobe?";
		mes "Ok, ok, farei isso.";
		close;
	} else {
		mes "[Vincent]";
		mes "Muito obrigado por tudo que você fez por mim e minha família.";
		mes "Se você alguma vez precisar de ajuda, por favor não hesite em me peidr, ok?";
		close;
	}
}

// ------------------------------------------------------------------
rachel,114,232,3	script	Logan#ra_in01	4_M_LGTMAN,{
	if (lost_boy == 1) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença, mas você conhece um homem chamado Phoebe?";
		mes "Eu ouvi que ele trabalhava aqui ao redor";
		next;
		mes "[Logan]";
		mes "Er, eu posso perguntar você é?";
		mes "Porque você o está procurando?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, eu há pouco fui contratad"+(Sex == SEX_MALE ? "o":"a")+" para o procurar.";
		mes "E me falaram que os criados nos arredores tinham um bom ponto de partida";
		next;
		mes "[Logan]";
		mes "Oh, está bem.";
		mes "Sim Phoebe está perdendo desde então ele partiu para comprar algums materias no mercado a poucos dias atras espero que ele esteja bem";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, quantos anos tem Phoebe?";
		next;
		mes "[Logan]";
		mes "Ele acabou de fazer quinze anos, isso é tudo que sei sobre ele.";
		mes "Pra falar a verdade, eu não sei muito desde que começei a trabalhar aqui.";
		mes "Porque você não pergunta para os empregadores sêniors?";
		next;
		mes "[Logan]";
		mes "Vejamos...";
		mes "você poderia perguntar ao Sr.Manson dentro da mansão.";
		mes "Ele trabalha lá durante algum tempo";
		lost_boy = 2;
		changequest(8089,8090);
		close;
	} else if (lost_boy == 2) {
		mes "[Logan]";
		mes "se você quer saber mais sobre Phoebe.";
		mes "Seria melhor, perguntar a um empregado sênior, eu começei a pouco tempo";
		mes "Trabalhando aqui. Sr. Manson está dentro da mansão, é uma boa aposta";
		close;
	} else {
		mes "[Logan]";
		mes "Eu sou um dos muitos criados que trabalham aqui na mansão gloriosa do senhor Zhed.";
		mes "Eu tenho muito trabalho para fazer, então por favor não me distraia.";
		close;
	}
}

// ------------------------------------------------------------------
ra_in01,372,200,3	script	Manson#ra_in01	4_M_MIDDLE,{
	if (!lost_boy) {
		mes "[Manson]";
		mes "Eu sou Manson, um dos muitos criados que trabalham aqui, na mansão do senhor Zhed.";
		mes "Er, você poderia ter mais cuidado andando por aqui?";
		mes "Eu odeio limpar depois que vem visitantes";
		close;
	} else if (lost_boy == 1) {
		mes "[Manson]";
		mes "Você sabe, considerando o tanto de nativos com eu são olhados de cima para baixo.";
		mes "E muitas classes mistas eu realmente tenho sorte de trabalhar para o Sr. Zhed aqui na mansão.";
		close;
	} else if (lost_boy == 2) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença, mas você conheçe um homem chamado Phoebe?";
		mes "Ele sumiu da mansao, então eu estou procurando por ele";
		next;
		mes "[Manson]";
		mes "Ah, assim você é o que Vicent contratou, huh?";
		mes "Isso é bom, Isso é bom.";
		mes "Eu estou seguro que Phobe está escondido por ai, e fazendo alguma bagunça por aí";
		next;
		mes "[Manson]";
		mes "Eu estou seguro ele pode tomar conta dele mesmo, assim nós não teremos que nos preocupar muito.";
		mes "Vejamos ele me perguntou se eu tivesse qualquer incumbência para ele fazer então eu o enviei para o mercado.";
		next;
		mes "[Manson]";
		mes "Isso é a última vez que eu vi ele.";
		mes "Eu acho que ele está usando o dinheiro que eu o dei para se alimentar enquanto ele foge.";
		mes "Ele é jovem então não posso o culpar.";
		mes "Nós sempre fazemos coisas loucas.";
		next;
		mes "[Manson]";
		mes "Ah, nosso jardineiro Jenny foi o que me aprsentou a ele.";
		mes "Ela trabalhou para o Sr. Zhed por muito tempo, e ela ama crianças.";
		mes "Eu acho que ela gosta do Phoebe";
		next;
		mes "[Manson]";
		mes "Ninguém sabe que são os pais dele, então eu acho que ele é orfão.";
		mes "Isso provavelmente é porque ela o tem trabalhando conosco na mansão.";
		next;
		mes "[Manson]";
		mes "Jenny fez muito para nós saltamos processo de emprego habitual para ela, você sabe?";
		mes "E agora Jenny e o Vincent estão preocupados sobre seu desaparecimento";
		next;
		mes "[Manson]";
		mes "Você sabe, se você quer saber mais daquela criança, você deveria falar com Jenny.";
		mes "Ela está trabalhando no jardim agora, e ela apreciaria sua ajuda achando Phobe.";
		lost_boy = 3;
		changequest(8090,8091);
		close;
	} else if (lost_boy == 3) {
		mes "[Manson]";
		mes "Você sabe, se você quer saber mais daquela criança, você deveria falar com Jenny.";
		mes "Ela está trabalhando no jardim agora, e ela apreciaria sua ajuda achando a criança";
		close;
	} else {
		mes "[Manson]";
		mes "Louco, há tanto trabalho para fazer!";
		mes "Eu nunca vi tudo terminado até o final do dia.";
		mes "Bom, continuar vivendo";
		close;
	}
}

// ------------------------------------------------------------------
rachel,48,237,3	script	Jenny#ra_in01	4_F_KHELLISIA,{
	if (lost_boy == 3) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença, mas você é Jenny?";
		mes "Me falaram para eu procurasse você para me falar mais sobre Phoebe.";
		mes "Vicent me contratou para encontrar ele.";
		next;
		mes "[Jenny]";
		mes "Oh! que boa";
		mes "Notícia! S-sim, eu sou Jenny.";
		mes "O que você precisa saber?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Er, tudo o que você puder contar.";
		mes "Me fale se ele está bem.";
		mes "Coisas que ele gosta.";
		mes "Qualquer coisa que me ajudar na investigação";
		next;
		mes "[Jenny]";
		mes "Phoebe é um bom menino.";
		mes "Eu não sei que tipo de problema ele está tendo nesse tempo.";
		mes "Mas ele é realmente um grande menino se você der-lhe uma chance.";
		next;
		mes "[Jenny]";
		mes "Oh... Vincent deve estar também.";
		mes "Eu estou muito alegre que ele seja encontrado.";
		mes "Mas algums lugares ele não conhece eu não estou seguro se ele sabe";
		next;
		mes "[Jenny]";
		mes "Você ja tentou o Mercado?";
		mes "Lá ele foi visto pela ultima vez, não é?";
		mes "Talvez eles tenham alguma idéia de onde ele foi.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh... essa é uma boa idéia!";
		mes "Então ta, acho que posso ir ao mercado e perguntar nos arredores.";
		lost_boy = 4;
		changequest(8091,8092);
		close;
	} else if ((lost_boy >= 3) && (lost_boy < 6)) {
		mes "[Jenny]";
		mes "Por favor ache Phoebe, e traga ele pra mim devolta salvo o mais rápido possível que você puder!";
		mes "Eu não posso ajudar, mas posso preocupar com aquele menino, você entende?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu vou fazer meu melhor.";
		mes "Primeiro, eu acho que vou perguntar nos arredores do mercado onde Phobe foi visto pela última vez.";
		close;
	} else if (lost_boy == 6) {
		mes "[Jenny]";
		mes "Por favor ache Phoebe, e traga ele pra mim devolta salvo o mais rápido possível que você puder!";
		mes "Eu não posso ajudar, mas posso preocupar com aquele menino, você entende?";
		close;
	} else if (lost_boy == 7) {
		mes "[Jenny]";
		mes "Oh! você voltou, encontrou Phobe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ainda não...";
		mes "Eu tenho algo muito importante para discutir com o Vicent primeiro.";
		close;
	} else if (lost_boy == 8) {
		mes "[Jenny]";
		mes "Oh! você voltou, encontrou Phobe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "De fato... Uh...";
		mes "Ainda não. Mas eu estou seguindo uma boa pista!";
		mes "Não se preocupe, eu vou";
		mes "Achar ele em breve, eu prometo.";
		close;
	} else if (lost_boy == 9) {
		mes "[Jenny]";
		mes "Oh! você voltou, encontrou Phobe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "De fato... Uh...";
		mes "Eu deveria informar primeiro a Vicent e devolver esta jóia, mas eu entregarei noticias boas logo.";
		mes "Eu prometo.";
		mes "Vejo você depois.";
		close;
	} else if (lost_boy == 10) {
		mes "[Jenny]";
		mes "Oh! você voltou";
		mes "Você encontrou Phobe?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Sim, ele está bem, mais esta suspenso em volta do lado sul da cidade.";
		mes "Ele está seguro, mas não está disposto a voltar para casa por enquanto.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quando a Jóia tiver sido devolvida, tudo finalmente ficará bem.";
		mes "Além disso, Vincent me explicou tudo.";
		mes "Como você sabe, você, Vicent, e Phobe estão todos relacionados, por isso ...";
		next;
		mes "[Jenny]";
		mes "Oh! Oh, entendi.";
		mes "Ele contou a você nosso segredo?";
		mes "Bem, eu acho que podemos confiar em você.";
		mes "Na maioria das vezes, eu apenas ajudo meu filho à ficar tudo bem, e que não se meta em problemas.";
		next;
		mes "[Jenny]";
		mes "De Qualquer jeito, embora Phobe seja bastante teimoso.";
		mes "Eu tenho certeza de que ele voltará bem em breve.";
		mes "Ele cresceu, acho que ele entenderá que o pai dele está em uma posição um pouco melhor.";
		next;
		mes "[Jenny]";
		mes "Espero que sim.";
		mes "Embora está sendo muito difícil para todos nós três vivermos desse jeito.";
		mes "Nós não poderíamos ser felizes.";
		mes "Obrigado por toda sua ajuda.";
		lost_boy = 11;
		changequest(8097,8098);
		close;
	} else if (lost_boy >= 10) {
		mes "[Jenny]";
		mes "Obrigado por sua ajuda a encontrar meu Filho.";
		mes "Se houver qualquer coisa que eu possa fazer por você.";
		mes "Por favor me diga agora, você não imagina o quanto eu estou grata.";
		close;
	} else {
		mes "[Jenny]";
		mes "Estes chãos são possuídos por Senhor Zhed e são considerados Propriedade privada.";
		mes "Por favor parta imediatamente se você não foi convidado";
		close;
	}
}

// ------------------------------------------------------------------
rachel,138,73,5	script	Mercador Idle#ra_in01	4_M_03,{
	if (lost_boy == 4) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença?";
		mes "Olá? Senhor?";
		next;
		mes "[Mercador Idle]";
		mes "FINALMENTE!";
		mes "Um comprador, eu sabia que alguém iria vir finalmente!";
		mes "Então o que você quer comprar?";
		mes "Eu tenho todo o tipo de adereços Úteis";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Infelizmente, eu não estou interessado.";
		mes "Só queria perguntar se você viu algum garoto por aqui ele tem 15 anos.";
		mes "Ele supostamente fugiu de Casa, e aí...";
		next;
		mes "[Mercador Idle]";
		mes "Quinze? Meu próprio filho tem essa idade...";
		mes "Me desculpe, mas nunca vi este um menino dessa idade passando por aqui por esses dias.";
		mes "Talvez, você deveria perguntar para os outros mercadores.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Certo. Muito Obrigado.";
		next;
		mes "[Mercador Idle]";
		mes "OK, então boa sorte para trazer o garoto de volta para casa!";
		lost_boy = 5;
		close;
	} else if (lost_boy == 5) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "(^333333É melhor você perguntar aos mercadores que estão aqui se alguém viu esse garoto.";
		mes "Eu estou perdendo meu tempo falando com você esse mercador louco e seus ridículos vegetais falsos.^000000)";
		close;
	} else {
		mes "[Mercador Idle]";
		mes "Os negócios estão indo tãoooo Devagarrrr agora!";
		mes "Bem, nenhum ponto em pé em volta desse lugar distante.";
		mes "Talves devo arrumar tudo e ir para casa.";
		close;
	}
}

// ------------------------------------------------------------------
rachel,120,47,3	script	Mercador Idle#ra_in01_2	4_M_03,{
	if (lost_boy == 5) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença,";
		mes "Hum... oi?";
		next;
		mes "[Mercador Idle]";
		mes "Oh! Bem vindo à minha loja!";
		mes "Como eu posso lhe ajudar?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Na verdade, eu não estou aqui para comprar nada...";
		mes "Estou procurando por um menino o nome dele é Phobe sumiu a alguns dias.";
		mes "Você o viu?";
		next;
		mes "[Mercador Idle]";
		mes "Oh! sim, ontem a noite, um cara queria saber se alguém estava procurando esse garoto chamado Phobe, para dar a você uma mensagem.";
		mes "Basicamente, ele quer que você vá até \"Caverna de Gelo\".";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quem Pediu a você para me dizer isso?";
		mes "Como vou Saber?";
		mes "Quem veio aqui?";
		mes "Será que ele sabe aonde está phobe está?";
		next;
		mes "[Mercador Idle]";
		mes "Eu te contei tudo o que eu sei.";
		mes "Deixa me ver o nome era... Nogan?";
		mes "Rogan?";
		mes "Alguma coisa";
		mes "desse tipo.";
		mes "Isso é tudo o que eu sei, honestamente.";
		next;
		mes "[Mercador Idle]";
		mes "Então sobre o garoto perdido.";
		mes "Boa sorte na procura dele.";
		mes "Ah, e tome cuidado na Caverna.";
		mes "Aquele Lugar pode ser muito perigoso.";
		lost_boy = 6;
		changequest(8092,8093);
		close;
	} else if (lost_boy == 6) {
		mes "[Mercador Idle]";
		mes "Ontem a noite, um cara queria saber se alguém estava procurando esse garoto chamado Phobe, para dar a você uma mensagem.";
		mes "Basicamente, ele quer que você vá até \"Caverna de Gelo\".";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Quem Pediu a você para me dizer isso?";
		mes "Como vou Saber?";
		mes "Quem veio aqui?";
		mes "Será que ele sabe aonde está phobe está?";
		next;
		mes "[Mercador Idle]";
		mes "Eu te contei tudo o que eu sei.";
		mes "Deixa me ver o nome era... Nogan?";
		mes "Rogan?";
		mes "Alguma coisa";
		mes "desse tipo.";
		mes "Isso é tudo o que eu sei, honestamente.";
		next;
		mes "[Mercador Idle]";
		mes "Então sobre o garoto perdido.";
		mes "Boa sorte na procura dele.";
		mes "Ah, e tome cuidado na Caverna.";
		mes "Aquele Lugar pode ser muito perigoso.";
		close;
	} else {
		mes "[Mercador Idle]";
		mes "Estou pensando em sair desse Trabalho...";
		mes "Ninguém parece querer nada, tudo eu sou um vendedor!";
		mes "Eu definitivamente não posso viver uma vida desse tipo.";
		close;
	}
}

// ------------------------------------------------------------------
ra_fild01,245,325,3	script	Homem Suspeito#ra_in01	4_M_RASWORD,{
	if (lost_boy == 6) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Com licença, mas você seria Rogan?";
		mes "Eu estou aqui....";
		next;
		mes "[Homem Suspeito]";
		mes "Hah! Não Faço idéia";
		mes "isto é bem simples!";
		mes "Eu quero fazer dinheiro fácil como nucna fiz!";
		mes "Bwahahaha";
		mes "Hora de você morrer!";
		next;
		mes "[Homem Suspeito]";
		mes "Hyah!";
		percentheal(-50,0);
		next;
		mes "^3355FFO Homen Suspeito feriu você com uma lança Adaga, e depois lançou outra que você conseguiu se esquivar.";
		mes "Você rapidamente revidou, para feri-lo mas do que ele te ferir.^000000";
		next;
		mes "[Homem Suspeito]";
		mes "Argh! eu...";
		mes "Acho que o Substimei você!";
		mes "Você é muito forte mesmo!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, Quem Diabos é você você?!";
		mes "Você é Rogan?";
		mes "Você é aquele que sequestrou Phobe?";
		next;
		mes "[Homem Suspeito]";
		mes "Mas qu--? eu não";
		mes "Não Sequestrei ninguém!";
		mes "Eu não sei nada sobre Phobe!";
		mes "Eu só vim aqui para lhe matar e levar o corpo para meu cliente.";
		mes "Isto não foi esperado.";
		next;
		mes "[Homem Suspeito]";
		mes "As Intruções de Vincent qualquer um que perguntassem sobre Rogan, o nome que ele criou.";
		mes "Meu nome é Mogan.";
		mes "Oh Meu Deus...";
		mes "Eu pensei que você fosse uma pessoa malvada.";
		next;
		mes "[Mogan]";
		mes "Ei, me indique corretamente aqui.";
		mes "Você roubou algo realmente de valor, tipo como uma jóia vermelha ou algo do tipo?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Huh? Não!";
		mes "Na verdade Vincent me mandou para procurer o garoto que roubou aquela jóia, e levar de volta para ele!";
		next;
		mes "[Mogan]";
		mes "Parece que ele quer nos manipular agente, cara.";
		mes "Isso é realmente Baixo.";
		mes "Desculpe se eu soubesse, eu realmente não teria feito tal coisa.";
		mes "Por que será que ele nos manipulou desse jeito?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu não sei...";
		mes "Estou indo conversar com Vincente faze-lo explicar Tudo.";
		lost_boy = 7;
		changequest(8093,8094);
		close;
	} else if (lost_boy == 7) {
		mes "[Mogan]";
		mes "Parece que ele quer nos manipular agente.";
		mes "Isso é... realmente Baixo.";
		mes "Desculpe se eu soubesse, eu realmente não teria feito tal coisa.";
		mes "Por que será que ele nos manipulou desse jeito?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Eu Não sei...";
		mes "Estou indo conversar com Vincente faze-lo explicar tudo.";
		close;
	} else {
		mes "[Homem Suspeito]";
		mes "Isso Não é o suficiente o ar aqui, é muito raro!";
		mes "Ei, Vá embora!";
		mes "Você esta roubando todo o meu precioso Oxigênio";
		close;
	}
}

// ------------------------------------------------------------------
rachel,263,32,3	script	Criança#ra_in01	4_M_RACHMAN1,{
	if (lost_boy == 8) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Ei, você deve ser Phobe, certo?";
		next;
		mes "[Criança]";
		mes "Sim, e dai?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Seu pai me enviou aqui para achar você.";
		next;
		mes "[Phobe]";
		mes "Não! Não Encoste em mim!";
		mes "Eu não tenho Pai!";
		mes "El..Ele está morto pra mim!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Bem, em todo caso, eu preciso retornar com aquela jóia que você está escondendo no seu bolso.";
		mes "Eu sei que ela realmente pertence ao Senhor Zhed se não seu pai estará com problemas";
		next;
		mes "[Phobe]";
		mes "Ha ! Como assim";
		mes "Vicent isto está bem para mim!";
		mes "Isto é exatamente porque eu levei está coisa!";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Oh, sim? Como você sabe?";
		mes "O que a senhora Jenny irá sentir?";
		mes "Você acha que ela ficará bem feliz quando ouvir sobre isso?";
		next;
		mes "[Phobe]";
		mes "................";
		mes "Então, o que você sabe a respeito da nossa família secreta?";
		mes "Certo, te darei isso também você.";
		mes "Eu farei isso somente pela minha mãe, e não por ele!";
		next;
		mes "^3355FFPhobe puxa devagar a brilhante Jóia vermelha do bolso e coloca relutantemente nas suas mãos.^000000";
		next;
		mes "[Phobe]";
		mes "Como você sabe, eu não tenho um plano voltar para casa.";
		mes "Pois já basta não neste Segundo de qualquer forma.";
		mes "Mas eu quero que minha mãe saiba que eu estou bem e que não é para se preocupar.";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Tudo bem.";
		mes "Eu contarei a sua mãe, mas você tem que saber que tem de voltar logo.";
		mes "Seu pai está realmente correndo um grande risco, te dando cobertura ";
		next;
		mes "[Phobe]";
		mes "Hmpf! eu...";
		mes "Eu não estou nem ai!";
		next;
		mes "^3355FFIsto não me parece bem você não pode forçar Phobe também voltar para casa por enquanto.";
		mes "Então deveria levar essa brilhante jóia de volta para vincent.^000000";
		lost_boy = 9;
		changequest(8095,8096);
		close;
	} else if (lost_boy == 9) {
		mes "[Phobe]";
		mes "Eu... Eu ainda não estou pronto para voltar para casa ainda.";
		mes "Deixar o senhor Vincent, eu sei disso e eu não peço desculpas pelo o que eu fiz?!";
		next;
		mes "^3355FFIsto não me parece bem você não pode forçar Phobe também voltar para casa por enquanto.";
		mes "Então deveria levar essa brilhante jóia de volta para vincent.^000000";
		close;
	} else {
		mes "[Criança]";
		mes "Me deixe em paz!";
		close;
	}
}
