/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Source Script                      |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Acesso aos campos de Comodo por Moc_Fild                  |
\*-----------------------------------------------------------------*/

moc_fild12,35,303,4	script	Serutero#mocf	1_M_ORIENT01,{
	mes "[Serutero]";
	mes "Eu sou respons�vel por guardar o portal para a Cidade-Fortaleza Santoleman.";
	mes "Meu nome � Serutero.";
	mes "Devo perguntar a voc�...";
	mes "� realmente seu desejo ir a Santoleman a Cidade-Fortaleza?";
	next;
	switch(select("Ir � Cidade-Fortaleza Santoleman!","O que � a Cidade-Fortaleza Santoleman?","Sair")) {
		case 1:
		mes "[Serutero]";
		mes "Ent�o voc� est� indo para a Cidade-Fortaleza Santoleman?!";
		mes "Espero que fa�a uma boa viagem.";
		mes "E tudo de bom para voc�!";
		mes ". . . . .";
		close2;
		warp ("cmd_fild08",331,319);
		end;
		case 2:
		mes "[Serutero]";
		mes "Santoleman foi atacada por outras ra�as h� muito tempo atr�s.";
		mes "� um lugar feito de ravinas...";
		mes "Uma verdadeira fortaleza natural.";
		mes "O Farol de Fallas fica ao sul e quando eles detectam invasores.";
		next;
		mes "[Serutero]";
		mes "Eles enviam um sinal luminoso, para alertar as grandes cidades e iniciar os procedimentos defensivos.";
		mes "Nos quais Santoleman tinha uma partipa��o essencial.";
		mes "Aquela fortaleza � grande como uma cidade.";
		mes "Por isso � chamada ^3355FFCidade-Fortaleza Santoleman^000000.";
		next;
		mes "[Serutero]";
		mes "Mas depois que o reino foi unificado, e seu territ�rio continuou se expandindo para o oeste, at� Comodo.";
		mes "A mem�ria de Santoleman est� se apagando...";
		mes "A fortaleza est� se tornando apenas ru�nas esquecidas...";
		next;
		mes "[Serutero]";
		mes "N�o faz muito tempo atr�s...";
		mes "A fortaleza foi tombada como monumento hist�rico pelo Minist�rio de Constru��es e Cultura.";
		mes "Infelizmente, agora ela est� ocupada por monstros.";
		mes "Ningu�m se atreve a se aproximar de l�.";
		next;
		mes "[Serutero]";
		mes "Se voc� quer ir ao...";
		mes "Farol de Fallas...";
		mes "V� para sudoeste.";
		mes "� o melhor caminho...";
		close;
		case 3:
		mes "[Serutero]";
		mes "Se se sentir cansado...";
		mes "V� at� a cidade de ^3355FFComodo^000000...";
		mes "E descanse por l�.";
		mes "Voc� se sentir� renovado.";
		mes "Porque Comodo � o mais famoso balne�rio do mundo.";
		close;
	}
}