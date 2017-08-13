/*---------------------------------------------------------------*\
|              ____                     _                         |
|             /    |                   | |_                       |
|            /     |_ __ ____  __ _  __| |_  __ _                 |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                |
|          /  __   | | |  |__| (_| | (_| | | (_| |                |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                |
|        /__/   |__|  [ Ragnarok Emulator ]                       |
|                                                                 |
|-----------------------------------------------------------------|
| - Importa��o dos arquivos de configura��o que iniciam Npcs      |
\*---------------------------------------------------------------*/

npc_global_list: (
	"NpcScript/Outros/Funcoes.c",

	// Batalha Campal
	@include "NpcScript/Npc_Config/Campal.conf"

	// Lojas / trocas em geral
	@include "NpcScript/Npc_Config/Comerciantes.conf"

	// Habitantes e npcs comuns
	@include "NpcScript/Npc_Config/Comuns.conf"

	// Guerra do Imp�rio
	@include "NpcScript/Npc_Config/Guerra_do_Imperio.conf"

	// Guias
	@include "NpcScript/Npc_Config/Guias.conf"

	// Inst�nncias
	@include "NpcScript/Npc_Config/Instancias.conf"

	// Quests
	@include "NpcScript/Npc_Config/Missoes.conf"

	// Monstros
	@include "NpcScript/Npc_Config/Monstros.conf"

	// Variados
	@include "NpcScript/Npc_Config/Outros.conf"

	// Portais
	@include "NpcScript/Npc_Config/Portais.conf"

	// Barqueiros e transportes em geral
	@include "NpcScript/Npc_Config/Transportes.conf"
)