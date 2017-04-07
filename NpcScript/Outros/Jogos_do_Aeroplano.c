/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Mini jogos no aeroplano                                   |
| - OBS.: Foi detectado alguns erros que podem comprometer o        |
|         funcionamento dos npc (Revisar, corrigir ou refazer)      |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Desagio de Digita��o ] -
//-------------------------------------------------------------------
airplane_01,32,61,4	script	Nils#ein	1_M_03,1,1,{
	mes "[Nils]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao ^ff0000Desafio de Escrita^000000.";
	mes "Voc� gostaria de jogar um r�pido jogo de escrita?";
	next;
	switch (select("Jogar ^ff0000Desafio de Escrita^000000","Informa��es","Ver recordes","Cancelar")) {
		case 1:
		mes "[Nils]";
		mes "Ok, n�s temos um novo desafiante!";
		mes "Digite o seguinte texto o mais r�pido que puder sem cometer nenhum erro!";
		mes "Vamos come�ar!";
		setarray (.@line1_1$[0],"^3cbcbccallipygian salacius lascivious^000000","^3cbcbcBy the power of^000000","^0000ffthkelfkskeldmsiejdlslehfndkelsheidl^000000","^3cbcbcburrdingdingdingdilidingdingdingphoohudaamb^000000","^3cbcbcCoboman no chikara-yumei na^000000","^3cbcbcEu sou o rei dos esquisitos! Agora^000000","^3cbcbcVoc� n�o me deu escolha. Eu aposto que^000000");
		setarray (.@line1_2$[0],"^3cbcbclicentious prurient concupiscent^000000","^3cbcbcp-po-poi-po-poi-poin-poing^000000","^3cbcbcskemd^000000","^3cbcbcandoorabambarambambambambamburanbamding^000000","^3cbcbcchikara-daiookii na chikara da ze!^000000","^3cbcbcvoc� conhece meu verdadeiro poder. Obey!^000000","^3cbcbchora de revelar meu segredo...^000000");
		setarray (.@line1_3$[0],"","^3cbcbcDEUS-POING. EU NUNCA PERCO!^000000","","","^3cbcbcCOBO LIGADO^000000","","");
		setarray (.@word1$[0],"callipygian salacius lascivious licentious prurient concupiscent","By the power of p-po-poi-po-poi-poin-poing GOD-POING. I NEVER LOSE!","thkelfkskeldmsiejdlslehfndkelsheidlskemd","burrdingdingdingdilidingdingdingphoohudaambandoorabambarambambambambamburanbamding","Coboman no chikara-yumei na chikara-daiookii na chikara da ze! COBO ON","Eu sou o rei dos esquisitos! Agora voc� conhece meu verdadeiro poder. Obey~!","Voc� n�o me deu escolha. Eu aposto que � hora de revelar meu poder...");
		setarray (.@line2_1$[0],"^3cbcbciMpertuB�VEl Am�Vel SeCreTo E^000000","^ff1493VeLoCiDaDe Da LuZ ViRaR a EsQuErDa^000000","^ff1493hfjdkeldjsieldjshfjdjeiskdlefvbd^000000","^ff1493burapaphuralanderamduanbatuhiwooi^000000","^ff1493acreditar na sorte do amor suar careta correr^000000","^800080abriR, Abrir!abr1r.abrirAbrirAbr1rAbRir4brir^000000","^3cbcbclIberDadE �xtAse JoRnAlIsMo ArMplt^000000");
		setarray (.@line2_2$[0],"^3cbcbcboLiChe cOnTrA O kArmA JoVem^000000","^ff1493CeRtO QuEiMe VeRdAdEiRo GaNgSteR bEijo^000000","","^ff1493kabamturubamdingding^000000","^ff1493folktale rodimus optimus bumblebee^000000","^800080`abrir'4Brir abrir? abrir!111ABRAMESMO^000000","^3cbcbcDesCobrir dOr de CaBe�a RaiosLunArES jUsTi�A^000000");
		setarray (.@word2$[0],"iMpertuB�VEl Am�vEl SeGrEdOs E boLiCHE cONtra o kArmA dos JoVeMs","VeLoCiDaDe Da LuZ ViRaR a EsQuErDa QuEiMe VeRdAdEiRo GaNgSteR bEijo","hfjdkeldjsieldjshfjdjeiskdlefvbd","burapaphuralanderamduanbatuhiwooikabamturubamdingding","acreditar na sorte do amor suar careta correr conto-de-fadas rodimus optimus bumblebee","abriR, Abrir!abr1r.abrirAbrirAbr1rAbRir4brir`abrir'4Brir abrir? abrir!111ABRAMESMO","lIberDadE �xtAse JoRnAlIsMo AxIla DesCobrir dOr de CaBe�a RaiosLunArES jUsTi�A");
		setarray (.@letters[0],1300,1250,1180,1380,1740,1440,1450);
		.@wordtest = rand(7);
		next;
		mes "[Nils]";
		mes .@line1_1$[.@wordtest];
		mes .@line1_2$[.@wordtest];
		mes .@line1_3$[.@wordtest];
		.@start_time = gettime(GETTIME_HOUR)*60*60+gettime(GETTIME_MINUTE)*60+gettime(GETTIME_SECOND);
		next;
		input (.@save1$);
		.@end_time = gettime(GETTIME_HOUR)*60*60+gettime(GETTIME_MINUTE)*60+gettime(GETTIME_SECOND);
		.@total_time = .@end_time - .@start_time;
		mes "[Nils]";
		mes .@line2_1$[.@wordtest];
		mes .@line2_2$[.@wordtest];
		.@start_time = gettime(GETTIME_HOUR)*60*60+gettime(GETTIME_MINUTE)*60+gettime(GETTIME_SECOND);
		next;
		input (.@save2$);
		.@end_time = gettime(GETTIME_HOUR)*60*60+gettime(GETTIME_MINUTE)*60+gettime(GETTIME_SECOND);
		.@total_time = .@total_time+(.@start_time - .@end_time);
		.@tasoo = (.@letters[.@wordtest] / .@total_time) * 6;
		if ((.@save1$ == .@word1$[.@wordtest]) && (.@save2$ == .@word2$[.@wordtest])) {
			mes "[Nils]";
			mes "Seu recorde � ^ff0000"+.@total_time+" segundos^000000 e o total de letras s�o "+.@tasoo+".";
			next;
			if (.@tasoo >= 1300) {
				mes "[Nils]";
				mes "Humm, n�o � poss�vel humanamente falando, a menos que copie e cole toda a senten�a.";
				mes "Por favor, jogue novamente.";
				close;
			}
			if (.@tasoo >= $050320_ein_typing) {
				mes "[Nils]";
				mes "O recorde anterior foi feito por ^0000ff"+$050320_minus1_typing$+"^000000 com o total de ^0000ff"+$050320_ein_typing+"^000000 letras.";
				mes "Por�m, ^ff0000"+strcharinfo(PC_NAME)+"^000000, voc� o novo top record desta vez. Parab�ns!";
				$050320_minus1_typing$ = strcharinfo(PC_NAME);
				$050320_ein_typing = .@tasoo;
				close;
			}
			else {
				mes "[Nils]";
				mes "^0000ff"+$050320_minus1_typing$+"^000000 esse � o recorde atual conquistado com um total de ^0000ff"+$050320_ein_typing+"^000000 caracteres.";
				mes "Tente bater esse record na pr�xima vez~";
				close;
			}
		}
		else {
			mes "[Nils]";
			mes "Oooh...";
			mes "Me desculpe, mas voc� digitou o texto incorreto...";
			close;
		}
		case 2:
		mes "[Nils]";
		mes "O ^ff0000Desafio de Escrita^000000";
		mes "� um jogo onde voc� deve digitar o texto exibido o mais r�pido que voc� puder.";
		mes "O nome do jogador que possuir o recorde ser� gravado nos registros.";
		mes "Se voc� procura fama, essa � sua chance!";
		next;
		mes "[Nils]";
		mes "Eu apenas gostaria de dizer que voc� deve digitar todo o texto em uma simples linha que ser� apresentada a voc�.";
		mes "Ent�o n�o pressione uma tecla, apenas clique em 'OK.'";
		close;
		case 3:
		mes "[Nils]";
		mes "^0000ff"+$050320_minus1_typing$+"^000000 esse � o recorde atual conquistado com um total de ^0000ff"+$050320_ein_typing+"^000000 caracteres.";
		mes "Tente bater esse record na pr�xima vez.";
		close;
		case 4:
		mes "[Nils]";
		mes "Sinta-se livre para voltar quando quiser e jogar o ^ff0000Desafio de Escrita^000000";
		mes "At� logo.";
		close;
	}
}

//-------------------------------------------------------------------
// - [ Apostas de ma�� ] -
//-------------------------------------------------------------------
airplane_01,33,68,4	script	Clarice	1_F_MERCHANT_02,{
	mes "[Clarice]";
	mes "Oi, eu sou Clarice.";
	mes "Voc� gostaria de apostar algumas ma��s no amig�vel jogo dos Dados?";
	next;
	switch (select("Jogar","Regras do Jogo","Cancelar")) {
		case 3:
		mes "[Clarice]";
		mes "Eu estou pronta para jogar o jogo dos dados quando voc� quiser.";
		mes "Quando quiser jogar basta falar comigo, Ok?";
		close;
		case 2:
		mes "[Clarice]";
		mes "As regras do Jogo dos Dados s�o bastante simples.";
		mes "Primeiro, voc� deve saber que as apostas s�o Ma��s.";
		mes "Voc� pode apostar no m�ximo 50 Ma��s por vez.";
		mes "Para que tudo ocorra bem, eu aceito apenas Ma��s.";
		next;
		mes "[Clarice]";
		mes "Mas ei, se voc� possuir tantos zenys que j� n�o cabem mais em seus bolsos.";
		mes "Tire-os e voc� pode comprar quantas ma��s quiser no Vendedor de Ma��s.";
		next;
		mes "[Clarice]";
		mes "Agora, n�s iremos come�ar rolando dois dados de 6 lados.";
		mes "Enquanto for seu turno, voc� poder� rolar dois dados de 6 lados.";
		mes "Ap�s isso, n�s teremos a op��o de rolar um terceiro dado.";
		next;
		mes "[Clarice]";
		mes "Agora aqui � a parte importante.";
		mes "Se ao total nos dados voc� atingir 12, voc� ir� a fal�ncia e ir� perder.";
		mes "Caso contr�rio, a a pessoa com a maior pontua��o ir� vencer.";
		mes "O que acha?";
		next;
		mes "[Clarice]";
		mes "Agora, primeiro voc� deve decidir se quer jogar o terceiro dado ou n�o.";
		mes "Ent�o, dependendo do seu resultado, eu irei rolar meu terceiro dado...";
		mes "Ou talvez n�o.";
		next;
		mes "[Clarice]";
		mes "Enquanto voc� ganhar, voc� ir� receber o dobro de Ma��s que voc� apostou.";
		mes "Mas se por acaso voc� empatar, voc� ir� receber de volta apenas as Ma��s que voc� apostou.";
		mes "Justo, certo?";
		close;
		case 1:
		break;
	}
	mes "[Clarice]";
	mes "Ah, Ent�o voc� quer jogar comigo?";
	mes "�timo!";
	mes "Quantas Ma��s voc� deseja apostar?";
	mes "Lembre-se, seu limite s�o 50 Ma��s.";
	mes "Se voc� deseja cancelar, por favor digite '0'.";
	next;
	while(1) {
		input .@amount;
		if (.@amount == 0) {
			mes "[Clarice]";
			mes "Mudou de id�ia?";
			mes "Eu entendo.";
			mes "Bem ent�o, espero que possamos jogar depois.";
			close;
		}
		else if (.@amount < 1 || .@amount > 50) {
			mes "[Clarice]";
			mes "Voc� n�o pode apostar mais do que 50 Ma��s.";
			mes "Lembre-se, precisamos manter as apostas razo�veis.";
			mes "Por favor digite um valor n�o superior a 50.";
			next;
			continue;
		}
		mes "[Clarice]";
		mes "Ent�o voc� estar� apostando ^FF0000"+.@amount+"^000000 Ma��s.";
		mes "Certo?";
		next;
		if (select("Sim","N�o") == 2) {
			mes "[Clarice]";
			mes "Hum, cometi um erro?";
			mes "Certo, por favor digite o n�mero de Ma��s que voc� deseja apostar.";
			next;
			continue;
		}
		if (countitem(Apple) <.@amount) {
			mes "Me desculpe, mas voc� n�o parecem ter Ma��s suficientes para essa aposta...";
			mes "Voc� n�o pode apostar se n�o tem a aposta, voc� sabe.";
			next;
			continue;
		}
		delitem (Apple,.@amount);
		mes "[Clarice]";
		mes "Bom!";
		mes "Agora podemos come�ar este jogo!";
		mes "Irei rolar primeiro.";
		break;
	}
	mes "^3355FF*Rolando e caindo*^000000";
	next;
	.@giveapple = .@amount*2;
	.@table1 = rand(1,6);
	.@table2 = rand(1,6);
	.@tablesub = .@table1+.@table2;
	.@tabletotal = .@tablesub;
	mes "[Clarice]";
	mes "Eu tenho um ^0000FF"+.@table1+"^000000 e um ^0000FF"+.@table2+"^000000.";
	mes "Isso � um total de ^0000FF"+.@tablesub+"^000000.";
	mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, agora � sua vez.";
	next;
	select("Lan�ar Dado.");
	mes "^3355FF*Rolando e caindo*^000000";
	.@player1 = rand(1,6);
	.@player2 = rand(1,6);
	.@playersub = .@player1+.@player2;
	if (.@playersub > 9 && .@amount > 39) {
		.@player1 = rand(1,6);
		.@player2 = rand(1,6);
		.@playersub = .@player1+.@player2;
	}
	.@playertotal = .@playersub;
	next;
	mes "[Clarice]";
	mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, voc� tem ^FF0000"+.@player1+"^000000 e ^FF0000"+.@player2+"^000000.";
	mes "O total � ^FF0000"+.@playersub+"^000000 .";
	next;
	mes "[Clarice]";
	if(.@playersub == .@tablesub) {
		mes "Atualmente meu total � ^0000FF"+.@tablesub+"^000000 e ^FF0000"+strcharinfo(PC_NAME)+"^000000, seu total � ^FF0000"+.@playersub+"^000000.";
		mes "Estamos empatados, gostaria de lan�ar o dado novamente?";
	}
	else if (.@playersub > .@tablesub) {
		mes "Atualmente meu total � ^0000FF"+.@tablesub+"^000000 e ^FF0000"+strcharinfo(PC_NAME)+"^000000, seu total � ^FF0000"+.@playersub+"^000000.";
		mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, atualmente voc� est� ganhando o jogo, gostaria de lan�ar o dado novamente?";
	}
	else if(.@tablesub > .@playersub) {
		mes "Atualmente meu total � ^0000FF"+.@tablesub+"^000000 e ^FF0000"+strcharinfo(PC_NAME)+"^000000, seu total � ^FF0000"+.@playersub+"^000000.";
		mes "Estou vencendo o jogo.";
		mes "Gostaria de lan�ar o dado novamente?";
	}
	next;
	switch (select("Lan�ar Dado.:Cancelar.")) {
		case 1:
		mes "^3355FF*Rolando e caindo*^000000";
		.@player3 = rand(1,6);
		.@playertotal += .@player3;
		next;
		mes "[Clarice]";
		if (.@playertotal > 12) {
			mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, voc� possui ^FF0000"+.@player3+"^000000 e o total agora � ^FF0000"+.@playertotal+"^000000.";
			mes "Voc� perdeu o jogo.";
			mes "Me desculpe mas, por favor tente novamente.";
			close;
		}
		else if (.@playertotal < .@tablesub) {
			mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, voc� possui ^FF0000"+.@player3+"^000000 e o total agora � ^FF0000"+.@playertotal+"^000000.";
			mes "Mesmo que voc� lance o dado novamente, seu total ainda ser� menor do que o meu.";
			mes "Voc� perdeu o jogo. Sinto muito e por favor tente novamente.";
			close;
		}
		else if (.@playertotal == .@tablesub) {
			if (.@tablesub > 8) {
				mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, voc� possui ^FF0000"+.@player3+"^000000 e o total agora � ^FF0000"+.@playertotal+"^000000.";
				mes "Eu n�o quero correr nenhum risco, vamos acabar este jogo num empate.";
				mes "Vamos jogar de novo outra hora.";
				close2;
				getitem (Apple,.@amount);
				end;
			}
		}
		else {
			mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, voc� possui ^FF0000"+.@player3+"^000000 e o total agora � ^FF0000"+.@playertotal+"^000000.";
			mes "Agora � minha vez.";
		}
		break;
		case 2:
		mes "[Clarice]";
		if (.@playersub > .@tablesub) {
			mes "Entendo, voc� n�o quer correr risco de perder o jogo.";
			mes "Ok, deixe-me lan�ar os dados novamente.";
		}
		else if (.@playersub == .@tablesub) {
			if (.@tablesub > 8) {
				mes "Entendo, voc� n�o quer correr risco de perder este jogo.";
				mes "Nem eu, vamos acabar este jogo em um empate.";
				mes "Vamos jogar novamente outra hora.";
				close2;
				getitem (Apple,.@amount);
				end;
			}
			mes "Certo.";
			mes "Vamos rolar os dados novamente.";
		}
		else {
			mes "N�o faria mal tentar.";
			mes "Bem, eu venci dessa vez.";
			mes "Sinto muito, vamos tentar jogar novamente algum dia.";
			close;
		}
		break;
	}
	next;
	mes "^3355FF*Rolando e caindo*^000000";
	.@table3 = rand(1,6);
	.@tabletotal += .@table3;
	next;
	mes "[Clarice]";
	if (.@tabletotal > 12) {
		mes "Tenho ^0000FF"+.@table3+"^000000 e o total agora � ^0000FF"+.@tabletotal+"^000000.";
		mes "Perdi o jogo por que meu total excedeu 12.";
		mes "Deixe-me dar-lhe minhas ma��s.";
		mes "Parab�ns, foi um grande jogo.";
		close2;
		getitem (Apple,.@giveapple);
		end;
	}
	else if (.@playertotal > .@tabletotal) {
		mes "Tenho ^0000FF"+.@table3+"^000000 e o total agora � ^0000FF"+.@tabletotal+"^000000.";
		mes "Com o total de ^FF0000"+.@playertotal+"^000000 voc� ganhou este jogo, ^FF0000"+strcharinfo(PC_NAME)+"^000000.";
		mes "Deixe-me dar-lhe minhas ma��s.";
		mes "Foi um grande jogo e espero que possamos jogar novamente em outro momento.";
		close2;
		getitem (Apple,.@giveapple);
		end;
	}
	else if (.@playertotal == .@tabletotal) {
		mes "Tenho ^0000FF"+.@table3+"^000000 e o total agora � ^0000FF"+.@tabletotal+"^000000.";
		mes "Com o total de ^FF0000"+.@playertotal+"^000000 este jogo acabou em empate, ^FF0000"+strcharinfo(PC_NAME)+"^000000.";
		mes "Deixe-me dar-lhe suas ma��s de volta.";
		mes "Foi um grande jogo e espero que possamos jogar novamente em outro momento.";
		close2;
		getitem (Apple,.@amount);
		end;
	}
	else if (.@playertotal < .@tabletotal) {
		mes "Tenho ^0000FF"+.@table3+"^000000 e o total agora � ^0000FF"+.@tabletotal+"^000000.";
		mes "Com o total de ^FF0000"+.@playertotal+"^000000 voc� perdeu o jogo, ^FF0000"+strcharinfo(PC_NAME)+"^000000.";
		mes "Lamento, mas por favor, tente novamente.";
		close;
	}
}