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
| - Info: Npcs comuns nos Campos de Rachel                          |
\*-----------------------------------------------------------------*/

ra_fild12,45,230,3	script	Guia do Aeroplano#rafild	4_M_RASWORD,{
	mes "[Guia do Aeroplano]";
	mes "O servi�o de Dirig�vel internacional da Rep�blica de Schwaltzvalt para Arunafeltz s� pode ser acessado em Rachel.";
	mes "Por favor siga a marca no seu Mini-Mapa para encontrar o Aeroporto.";
	viewpoint(1, 293, 208, 1, 0xFF0000);
	close;
}
