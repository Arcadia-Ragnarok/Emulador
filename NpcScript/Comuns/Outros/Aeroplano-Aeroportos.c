/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns localizados nos aeroplanos e Aeroportos       |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// [airplane]
//-------------------------------------------------------------------
airplane,100,69,3	script	Passageiro#ein-1	4_M_EIN_SOLDIER,{
	mes "[Passageiro]";
	mes "Se j� pousamos no seu destino e voc� gostaria de sair do Aeroplano, por favor use as escadas � frente.";
	mes "Obrigado por seu apoio.";
	close;
}

//-------------------------------------------------------------------
airplane,64,94,1	script	Crian�a de Umbala#ein_p	4_M_UMKID,{
	emotion e_swt2;
	mes "[Crian�a]";
	mes "Uau, m�e!";
	mes "V-veja isso!";
	mes "N�s estamos voando!";
	mes "N-n�s estamos...";
	mes "Estamos conhecendo o c�u!";
	close;
}

//-------------------------------------------------------------------
airplane,66,93,3	script	Senhora de Umbala#ein_p	4_F_UMWOMAN,{
	emotion e_dots;
	mes "[Senhora]";
	mes "Shush...";
	mes "Querido, comporte-se!";
	mes "N�o se anime tanto enquanto n�o sairmos deste lugar p�blico!";
	close;
}

//-------------------------------------------------------------------
airplane,71,91,7	script	Homem de Umbala#ein_p	4_M_UMSOLDIER,{
	mes "[Chrmlim]";
	mes "Ei voc�!";
	mes "Pela sua apar�ncia, percebo que voc� consegue me entender.";
	mes "^333333*Legal...!*^000000";
	next;
	emotion e_pif;
	mes "[Chrmlim]";
	mes "Tenho ajudado a equipe do Aeroplano, auxiliando seus Tripulantes que t�m medo de altura os levanto para pular de bungee jumping em Umbala.";
	mes "Legal, em?";
	next;
	mes "[Chrmlim]";
	mes "Mas...";
	mes "Alguns deles n�o podem superar seus medos.";
	mes "Devem participar de algumas experi�ncias, ^333333em Nifflheim^000000.";
	close;
}

//-------------------------------------------------------------------
airplane,250,58,2	script	Funcion�rio#air	1_F_02,{
	mes "[Assistente do Aeroplano]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao Aeroplano.";
	mes "Como posso ajud�-l"+(Sex == SEX_MALE ? "o?":"a?")+"";
	next;
	switch (select("Usando o Aeroplano:Cabine do Capit�o:Instala��es:Cancelar")) {
		case 1:
		mes "[Assistente do Aeroplano]";
		mes "Quando voc� ver uma mensagem anunciando que n�s chegamos ao seu destino.";
		mes "Por favor, use uma das sa�das localizadas ao Norte e ao Sul do aeroplano.";
		next;
		mes "[Assistente do Aeroplano]";
		mes "Se acontecer de voc� perder sua parada, n�o se preocupe.";
		mes "O Aeroplano est� constantemente na rota e voc� ter� outra chance de descer em seu destino.";
		close;
		case 2:
		mes "[Assistente do Aeroplano]";
		mes "A Cabine do Capit�o fica na parte frontal do Aeroplano.";
		mes "L�, voc� pode conhecer o capit�o e o piloto do Aeroplano.";
		close;
		case 3:
		mes "[Assistente do Aeroplano]";
		mes "O Aeroplano possui v�rios mini-jogos para o entretenimento de todos os passageiros.";
		close;
		case 4:
		mes "[Assistente do Aeroplano]";
		mes "Bem, desejo-lhe uma boa estadia durante o v�o em nosso Aeroplano.";
		mes "Obrigado e tenha um bom dia.";
		close;
	}
}

//-------------------------------------------------------------------
airplane,80,71,2	script	Zerta#01airplane	4_M_BUDDHIST,{
	mes "[Zerta]";
	mes "Oh, ol� Aventureir"+(Sex == SEX_MALE ? "o?":"a?")+".";
	mes "Estou atualmente em uma Jornada Santa.";
	mes "Orando em prop�sito do continente de Rune-Midgard.";
	close;
}

//-------------------------------------------------------------------
airplane,65,63,4	script	Maelin#01airplane	4_F_06,{
	mes "[Maelin]";
	mes "Humm, este avi�o vai para Lutie, n�o?";
	mes "Estou esperando h� muito tempo, mas at� agora nada de an�ncio sobre Lutie.";
	close;
}

//-------------------------------------------------------------------
airplane,72,34,6	script	Aanos#01airplane	4_F_GON,{
	mes "[Aanos]";
	mes "Oh wooow!";
	mes "O c�u tem uma apar�ncia t�o diferente e ador�vel, visto daqui de cima!";
	close;
}

//-------------------------------------------------------------------
airplane,221,158,2	script	Piloto#air	4_M_EIN_SOLDIER,{
	switch (rand(1,4)) {
		case 1:
		mes "[Piloto]";
		mes "Faz bastante tempo desde que eu experimentei um bom e gelado �lcool.";
		mes "Mas a profiss�o requer que eu esteja sempre s�brio!";
		next;
		mes "[Piloto]";
		mes "Sempre beba com responsabilidade!";
		mes "Ainda sim, n�o lembro a �ltima vez que entrei de f�rias.";
		mes "Sim, uma bebida, uma TV e tudo ficar� �timo.";
		emotion(e_sob);
		close;
		case 2:
		mes "[Piloto]";
		mes "Cara, o clima est� �timo hoje.";
		mes "Brilho, o c�u est� aberto com uma boa visibilidade e seguran�a, um v�o despreocupado.";
		close;
		case 3:
		mes "[Piloto]";
		mes "Voc� sabe, seu capit�o � um homem respeitado.";
		mes "Ele e seu irm�o s�o atualmente os mais conhecidos na ind�stria a�rea.";
		mes "Quem dir�a que nos tornariamos capit�es de v�o t�o bons?";
		next;
		mes "[Piloto]";
		mes "Apenas entre n�s...";
		mes "Tenho que dizer a voc� o Papai Noel foi para algum lugar com renas e elfos que trabalham para ele.";
		mes "Aquele cara � um g�nio!";
		close;
		case 4:
		mes "[Piloto]";
		mes "Voc� sabe, toda essa coisa de pilotar no ar, � algo bastante recente, voc� sabe n�o �?";
		mes "Sim, temos um Aeroplano voando a uma incr�vel velocidade.";
		next;
		emotion(e_omg);
		mes "[Piloto]";
		mes "Ainda assim, h� sempre algo s�rio, realmente acontecendo.";
		mes "Quer dizer, est�vamos treinando enquanto o Aeroplano estava sendo inventado.";
		mes "N�o � uma loucura?!";
		close;
	}
}

//-------------------------------------------------------------------
airplane,238,54,7	script	Aventureiro#air	1_M_ORIENT01,{
	mes "[Aventureiro]";
	mes "Voc� sabe, uma das sacerdotisas do templo em Rachel parecia estar encrencada por alguma raz�o.";
	mes "Eu deveria perguntar o que estava incomodando ela, e oferecer a minha ajuda.";
	close;
}

//-------------------------------------------------------------------
// Placa de sa�da
airplane,240,64,5	script	Sa�da#air1a::ExitAirplane	4_BOARD3,{
	end;
}
airplane,247,64,5	duplicate(ExitAirplane)	Sa�da#air1b	4_BOARD3
airplane,240,40,1	duplicate(ExitAirplane)	Sa�da#air2a	4_BOARD3
airplane,247,40,1	duplicate(ExitAirplane)	Sa�da#air2b	4_BOARD3

//-------------------------------------------------------------------
// - [airplane01] -
//-------------------------------------------------------------------
airplane_01,250,58,2	script	Funcion�rio#air01	1_F_02,{
	mes "[Equipe do Aeroplano]";
	mes "Bem-vind"+(Sex == SEX_MALE ? "o":"a")+" ao Aeroplano.";
	mes "Como posso ajud�-l"+(Sex == SEX_MALE ? "o?":"a?")+"";
	next;
	switch (select("Usando o Aeroplano:Cabine do Capit�o:Instala��es:Cancelar")) {
		case 1:
		mes "[Assistente do Aeroplano]";
		mes "Quando voc� ver o aviso anunciando que chegamos no seu destino desejado.";
		mes "Por favor, use uma das sa�das localizadas nas partes norte e sul do Aeroplano.";
		next;
		mes "[Assistente do Aeroplano]";
		mes "Se acontecer de voc� perder sua parada, n�o se preocupe.";
		mes "O Aeroplano est� constantemente na rota e voc� ter� outra chance para chegar ao seu destino pretendido.";
		close;
		case 2:
		mes "[Assistente do Aeroplano]";
		mes "A Cabine do Capit�o fica na parte frontal do Aeroplano.";
		mes "L�, voc� pode conhecer o capit�o e o piloto do Aeroplano.";
		close;
		case 3:
		mes "[Assistente do Aeroplano]";
		mes "O Aeroplano possui v�rios mini-games para o entretenimento de todos os passageiros.";
		close;
		case 4:
		mes "[Assistente do Aeroplano]";
		mes "Bem, desejo-lhe uma boa estadia durante o v�o em nosso Aeroplano.";
		mes "Obrigado e tenha um bom dia.";
		close;
	}
}

//-------------------------------------------------------------------
airplane_01,221,158,2	script	Piloto#air_01	4_M_EIN_SOLDIER,{
	switch (rand(1,4)) {
		case 1:
		mes "[Piloto]";
		mes "Longitude, 131 graus leste.";
		mes "Latitude, 37 graus norte.";
		mes "Estamos no curso certo, capit�o.";
		close;
		case 2:
		mes "[Piloto]";
		mes "Parece ser realmente um dia nublado.";
		mes "Sempre � dif�cil navegar quando os c�us n�o est�o limpos.";
		mes "Acho que n�s vamos precisar amplificar o radar.";
		close;
		case 3:
		mes "[Piloto]";
		mes "O Capit�o � um bom homem e eu n�o consigo pensar em uma pessoa mais fina para comandar este Aeroplano.";
		mes "Ainda assim, ele � muito duro, um verdadeiro motorista servo.";
		next;
		mes "[^ff0000Tarlock^000000]";
		mes "^ff0000Ei...!^000000";
		mes "^ff0000Menos bate-papo^000000";
		mes "^ff0000e mais pilotagem!^000000";
		next;
		mes "[Piloto]";
		mes "C-certo, senhor!";
		mes "(Viu o que eu quero dizer?)";
		close;
		default:
		mes "[Piloto]";
		mes "Este uniforme � bem elegante, mas � muito chamativo para usar pelo Aeroplano.";
		next;
		mes "[Piloto]";
		mes "...";
		mes "......";
		mes "Realmente ningu�m nunca entra neste quarto.";
		mes "E o capit�o � uma rena.";
		mes "Eu podia tirar a minha cueca.";
		next;
		emotion(e_omg);
		mes "[Piloto]";
		mes "Oh...! Ol�!";
		mes "E-e-est� aproveitando o v�o?!";
		close;
	}
}

//-------------------------------------------------------------------
airplane_01,69,63,2	script	Mendel#01airplane_01	1_M_JOBTESTER,{
	mes "[Mendel]";
	mes "Como eu esperava, as comidas do v�o s�o de qualidade 3 estrelas no melhor.";
	mes "*Harrrumph*";
	mes "Eu realmente deveria ter trazido meu cozinheiro";
	mes "Eu desfrutaria de uma verdadeira refei��o.";
	close;
}

//-------------------------------------------------------------------
airplane_01,83,61,2	script	Dianne#01airplane_01	1_F_MARIA,2,2,{
	mes "[Dianne]";
	mes "� t�o estranho!";
	mes "Eu venho visitar o Capit�o do Aeroplano e tudo que vejo � esse alce estranho.";
	mes "Oh! N�o esperava por essa...";
	close;

	OnTouch:
	emotion(e_sob);
	end;
}

//-------------------------------------------------------------------
airplane_01,71,31,2	script	Swordsman Shimizu#air_01	1_M_MOC_LORD,{
	mes "[Espadachim Shimizu]";
	mes "Finalmente, depois de cinco anos esperando...";
	mes "Terei minha vingan�a!";
	next;
	mes "[Espadachim Shimizu]";
	mes "Eu s�...";
	mes "Tenho que me certificar de que n�o perderei minhaparada.";
	mes "Mas logo, muito breve, terei minha vingan�a.";
	close;
}

//-------------------------------------------------------------------
// Placa de sa�da
airplane_01,240,64,5	script	Sa�da#air_011a::ExitAirplane01	4_BOARD3,{
	end;
}
airplane_01,247,64,5	duplicate(ExitAirplane01)	Sa�da#air_011b	4_BOARD3
airplane_01,240,40,1	duplicate(ExitAirplane01)	Sa�da#air_012a	4_BOARD3
airplane_01,247,40,1	duplicate(ExitAirplane01)	Sa�da#air_012b	4_BOARD3

//-------------------------------------------------------------------
// - [airport] -
//-------------------------------------------------------------------
airport,174,41,6	script	Jovem#air	4W_M_03,{
	mes "[Runnan]";
	mes "...E esse � o porque de eu viajar ao redor do mundo.";
	mes "Meus chefes tem um olho bom para as melhores e exoticas mercadorias, ent�o eu compro elas e fa�o as entregas.";
	next;
	mes "[Runnan]";
	mes "N�o teve uma vez que eles me fizeram coletar Jellopy, embora seja comum coletar essas coisas hoje em dia.";
	mes "Agora que eu pensei sobre, porque eles precisam de tantas coisas?";
	close;
}

//-------------------------------------------------------------------
airport,176,41,4	script	Velho#air	4_M_ORIENT01,{
	mes "[Zhen Lan]";
	mes "Agora, fiquei sabendo que os monstrons que vivem aqui por perto carregam metais que brilham com uma sublime e linda luz.";
	mes "Elegante, huh?";
	next;
	mes "[Zhen Lan]";
	mes "Estes metais s�o muito bons para se fabricar vasos de flores.";
	mes "Meu amigo, que � um bom fazedor de bonecos, me disse isso.";
	mes "Ele faz bonecos utilizando todo tipo de materiais.";
	next;
	mes "[Zhen Lan]";
	mes "Ele os faz fashion com couro bem curtido, e coisas como pena de aves, e usa Cyfar e Zargon para fazer os olhos.";
	mes "Ele at� usa Jellopy nos p�s para balancear a boneca.";
	next;
	mes "[Zhen Lan]";
	mes "Eu acho que isto mostra que estas coisas que parecem inuteis possa a ser util para algu�m.";
	mes "Ent�o n�o se preocupe em carregar muitas coisas.";
	mes "Cedo ou tarde, elas podem servir para algu�m.";
	close;
}
