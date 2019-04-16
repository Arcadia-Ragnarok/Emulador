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
| - Copyright: Euphy                                                |
| - Copyright: SinSloth                                             |
| - Copyright: Silent                                               |
| - Copyright: Nexon                                                |
| - Copyright: Lupus                                                |
| - Copyright: L0ne_W0lf                                            |
| - Copyright: kobra_k88                                            |
| - Info: Placas de informativos em geral                           |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
prontera,158,213,1	script	Dire��o#Signprt	HIDDEN_NPC,{
	mes "Castelo de Prontera para o Norte";
	mes "Aldebaran para o Norte";
	mes "Geffen para o Noroeste";
	mes "Campos de Prontera para o Leste";
	mes "Campos de Prontera para o Sul";
	mes "Alberta para o Sudeste";
	mes "Morroc para o Sudoeste";
	mes "Comodo para o Sudoeste";
	mes "Campos de Prontera para o Oeste";
	close;
}

prontera,156,197,1	script	Informativo#Signprt2	HIDDEN_NPC,{
	mes "Procura-se: Duas Presilhas";
	mes "Por favor, entre em contato...";
	mes "-O nome est� um pouco apagado -";
	mes "Vende-se: Espada bastarda usada";
	mes "Aceito qualquer oferta!";
	mes "Entrar em contato com Abramulious";
	mes "Procura-se ajuda: Compra ou vende Peco Peco usado?";
	mes "Contado com Grasisium em Morroc agora!";
	close;
}

prontera,278,212,1	script	Informativo#Signprt3	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "Por favor, manter Prontera limpa.";
	close;
}

prontera,150,326,1	script	Informativo#Signprt4	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "Cidad�es de Prontera s�o bem vindos ao castelo de Prontera.";
	close;
}

prontera,31,212,1	script	Informativo#Signprt5	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "PROCURADO";
	mes "iROGM01";
	mes "MORTO ou VIVO";
	mes "*Assasino e ladr�o de Glast Heim*";
	mes "RECOMPENSA: 50,000 Zeny.";
	mes "Contato: iROGM02";
	close;
}

prontera,165,305,1	script	Informativo#Signprt6	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "N�s esperamos que voc� tenha uma �tima estadia em Prontera.";
	close;
}

prontera,145,304,1	script	Informativo#Signprt7	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Nota:";
	mes "Eu perdi meu carrinho de m�o no Mt. Mjolnir, se alguem encontrar, por favor, me diga. Toda minha vida est� nesse carrinho!";
	close;
}

// ------------------------------------------------------------------
morocc,144,84,1	script	Informativo#Signmoc	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Procura-se: Guarda costas para proteger minha loga contra assaltantes.";
	mes "Por favor, entre em contato com Bucher";
	close;
}

morocc,145,83,1	script	Informativo#Signmoc2	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Vendo, Peco Peco bem preparado!";
	mes "Esse � um belo exemplar que foi montado somente por mim, ele vem com uma sela, um arreio, e...";
	close;
}

morocc,32,174,1	script	Informativo#Signmoc3	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "^0099FFMulheres de Morroc revoltadas!^000000";
	mes "Um rescente estudo demonstrou que a maioria dos homens em";
	mes "Morroc preferem as mulheres de Geffen. Sendo que 90 dos 100 hemens em";
	mes "Morroc alegaram que tiveram rela��es com as mulheres";
	mes "de Geffen fora da regi�o de Morroc.";
	next;
	mes "^993300- Continua��o do comunicado -^000000";
	mes "-Eu prefiro a companhia delas, isso � tudo... disse um homem de Morroc.";
	mes "-n�o � que eu n�o goste das mulheres de Morroc, ent�o n�o sei qual � o problema...";
	mes "Existem problemas emocionais que estressam no que diz respeito";
	mes "as atividades desses homens.";
	mes "Ca�ar parece ser a primeira prioridade deles,";
	mes "mais do que se relacionar com mulheres da regi�o.";
	close;
}

morocc,168,264,1	script	Informativo#Signmoc4	HIDDEN_NPC,{
	mes "^993300- Informativo -^000000";
	mes "^CC0033Guerreiro Leal!^000000";
	mes "Se voc� � alguem que gosta de uma batalha e sente que n�o pode ser parado, jogador contra jogador at� a morte!";
	mes "Apresente-se em Prontera se acha que tem o que � necess�rio!";
	close;
}

morocc,298,211,1	script	Informativo#Signmoc5	HIDDEN_NPC,{
	mes "^993300- Informativo -^000000";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+" a Morroc.";
	close;
}

// ------------------------------------------------------------------
geffen,116,58,1	script	Informativo#Signgef	HIDDEN_NPC,{
	mes "^993300- Avisos de Geffen -^000000";
	mes "Lembrem-se Bruxos... O que importa n�o s�o todas suas habilidades, mas � o mago que as usa que conta!";
	close;
}

geffen,113,104,1	script	Informativo#Signgef2	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Vende-se: Novo boneco de Chon Chon!";
	mes "Um �timo presente para dar a pessoa amada, entre em contado comigo!";
	mes "- Nome parece estar borrado -";
	mes " ";
	mes "Compra-se: Manto!";
	mes "Eu estou congelando e n�o tenho zeny, por favor, me ajude!";
	mes "Contatar Edionyus";
	close;
}

geffen,119,190,1	script	Informativo#Signgef3	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Campos de Geffen ao Norte";
	mes "Aldebaram ao Nordeste";
	mes "Glast Heim ao Noroeste";
	mes "Campos de Geffen ao Leste";
	mes "Morroc ao Sul";
	mes "Prontera ao Sudeste";
	mes "Alberta ao Suceste";
	mes "Comodo ao Sudoeste";
	mes "Campos de Geffen ao Oeste";
	close;
}

geffen,168,175,1	script	Informativo#Signgef4	HIDDEN_NPC,{
	mes "^993300- Sinal -^000000";
	mes "Seja bem vind"+(Sex == SEX_MALE ? "o":"a")+" � Geffen.";
	close;
}
geffen,183,61,1	duplicate(Informativo#Signgef4)	Informativo#Signgef5	HIDDEN_NPC

// ------------------------------------------------------------------
aldebaran,181,172,1	script	Informativo#Signald	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Procura-se:";
	mes "Eu perdi meu Bongun de estima��o, n�o tive culpa, ele simplesmente fugiu...";
	mes "Se voc� ver ele, por favor, me avise. Recompensa para quem encontrar ele!";
	close;
}

aldebaran,133,104,1	script	Informativo#Signald2	HIDDEN_NPC,{
	mes "^993300- Comunidado de Aldebaran -^000000";
	mes "''Aproveite sua estadia em Aldebaran''";
	close;
}

aldebaran,54,223,1	script	Informativo#Signald3	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "Preciso de ajuda:";
	mes "�N�s observamos os jovens, s�o fortes e atl�ticos que";
	mes "est�o interessados em uma profiss�o est�vel com tempo integral para ferreiro. Se voc� est� interessado, entre em contato com Altiregen";
	mes "em Geffen!";
	close;
}

aldebaran,217,222,1	script	Informativo#Signald4	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "E a� Papai Nel de Lutie!";
	mes "- Isso parece um rebisco -";
	close;
}

// ------------------------------------------------------------------
alberta,35,241,1	script	Informativo#Signalb	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Bem vindo para Alberta, paraiso dos Mercadores.";
	close;
}

alberta,37,39,1	script	Informativo#Signalb2	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Bem vindo.";
	close;
}

alberta,99,151,1	script	Informativo#Signalb3	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Ferramentas completas para carrinho de m�o!";
	mes "Voc� precisa de ferramentas? N�s temos!";
	mes "Venha, n�s nunca fechamos!";
	close;
}

alberta,196,152,1	script	Informativo#Signalb4	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Atracabem e envio de cargas. Para informa��es relativas";
	mes "ao envio e recebimento, por favor...";
	mes "- Voc� n�o pode ler o resto -";
	close;
}

alberta,149,54,1	script	Informativo#Signalb5	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Bem vind"+(Sex == SEX_MALE ? "o":"a")+".";
	close;
}
