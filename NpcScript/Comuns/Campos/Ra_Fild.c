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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns nos Campos de Rachel                          |
\*-----------------------------------------------------------------*/

ra_fild12,45,230,3	script	Guia do Dirig�vel#rafild	4_M_RASWORD,{
	mes "[Guia do Dirig�vel]";
	mes "O servi�o de Dirig�vel internacional da Rep�blica de Schwaltzvalt para Arunafeltz s� pode ser acessado em Rachel.";
	mes "Por favor";
	mes "siga a marca no seu Mini-Mapa para encontrar o Aeroporto.";
	viewpoint (1,293,208,1,0xFF0000);
	close;
}

// ------------------------------------------------------------------
ra_fild12,283,208,3	script	Crian�a#rafild	4_F_CHILD,{
	mes "[Papaii]";
	mes "Bem, Rachel costumou ser um deserto at� que nossa divindade guiou nossos ancestrais para esta terra.";
	mes "Eles cultivaram o deserto com a gra�a de Freya, e fizeram esta �rea habit�vel.";
	next;
	mes "[Papaii]";
	mes "Tudo que voc� v� aqui foi criado artificialmente pelos humanos.";
	mes "V�? As b�n��os de Freya certamente nos habilitou a fazer coisas miraglosas.";
	mes "Voc� ver� quando entrar na capital.";
	close;
}
