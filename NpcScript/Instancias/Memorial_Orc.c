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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Instância Memorial dos Orcs                               |
\*-----------------------------------------------------------------*/

gef_fild10,242,202,0	script	Memorial dos Orcs	2_MONEMUS,{
	.@party_id = getcharid(CHAR_ID_PARTY);
	.@p_name$ = getpartyname(.@party_id);

	if (!instance_check_party(.@party_id,2,30)) { // Grupo de 2 Membros de Nv Mínimo 30
		mes "Me desculpe, mas seu grupo não atende os requisistos necessários.";
		close;
	}

	.@orctime = questprogress(12059,PLAYTIME);
	if (.@orctime == 2) {
		mes "^0000ff0000ffTodos os registros relacionados ao Memorial dos Orcs foram deletados.";
		mes "Agora você pode entrar novamente.^000000";
		erasequest(12059);
		close;
	}

	if (.@orctime == 1) {
		mes "Você pode entrar no calabouço se ele foi gerado.";
		next;
		if (select("Entrar no Memorial dos Orcs","Cancelar") == 2) {close;}
	} else {
		if (getcharid(CHAR_ID_CHAR) == getpartyleader(.@party_id,2)) {
			mes "Criação de grupo confirmada.";
			mes "Gostaria de agendar a entrada de Memorial dos Orcs?";
			next;
			switch (select("Reservar","Entrar no calabouço","Cancelar")) {
				case 1:
				.@instance = instance_create("Memorial dos Orcs",.@party_id);
				if (.@instance < 0) {
					mes "Nome do Grupo: "+.@p_name$;
					mes "Líder do Grupo: "+strcharinfo(PC_NAME);
					mes "^0000ffMemorial dos Orcs ^000000 - Falha ao reservar.";
					close;
				}
				mes "^0000ffMemorial dos Orcs^000000- Aguardando a reserva";
				for (.@i = 1; .@i <= 2; ++.@i) {
					if (instance_attachmap(.@i+"@orcs",.@instance) == "") {
						break;
					}
				}
				if (.@i < 2) {instance_destroy(.@instance); close;}
				instance_set_timeout(7200,300,.@instance);
				instance_init(.@instance);
				mes "Após fazer a reserva, você deve selecionar no menu a opção 'Entrar no Calabouço'.";
				mes "Caso deseje entrar no Memorial dos Orcs.";
				close;
				case 2:
				break;
				case 3:
				close;
			}
		} else if (select("Entrar no calabouço","Cancelar") == 2) {end;}
	}
	if (has_instance("1@orcs") == "") {
		mes "O Calabouço Memorial Memorial dos Orcs não existe.";
		mes "O líder do grupo não reservou a entrada no calabouço.";
		next;
		mes "Após a reserva ser concluída, o calabouço será criado.";
		mes "Caso o seu calabouço tenha sido destruído deverá esperar 7 dias para entrar novamente.";
		close;
	}
	mapannounce("gef_fild10",strcharinfo(PC_NAME)+" do grupo,"+.@p_name$+" iestá entrando no Memorial Orc.",bc_map,"0x00ff99");
	if (!questprogress(12059)) {setquest(12059);}
	if (orcdun) {orcdun = 0;};
	warp("1@orcs",179,15);
	end;
}

// ------------------------------------------------------------------
1@orcs,180,30,0	script	#Resurrect Monsters1	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#Resurrect Monsters1"));
	end;

	OnDisable:
	stopnpctimer;
	killmonster(instance_mapname("1@orcs"),instance_npcname("#Resurrect Monsters1")+"::OnMyMobDead");
	end;

	OnEnable:
	enablenpc(instance_npcname("#Resurrect Monsters1"));
	monster(instance_mapname("1@orcs"),0,0,"Guerreiro Orc",ORK_WARRIOR,30,instance_npcname("#Resurrect Monsters1")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@mob_dead_num = 30 - mobcount(instance_mapname("1@orcs"),instance_npcname("#Resurrect Monsters1")+"::OnMyMobDead");
	if (.@mob_dead_num > 0) {
		.@mob_ran = rand(1,30);
		if (.@mob_ran > 29) {
			monster(instance_mapname("1@orcs"),0,0,"Guerreiro Orc",ORK_WARRIOR,.@mob_dead_num,instance_npcname("#Resurrect Monsters1")+"::OnMyMobDead");
		} else if ((.@mob_ran > 28) && (.@mob_ran < 30)) {
			monster(instance_mapname("1@orcs"),0,0,"Grand Orc",HIGH_ORC,.@mob_dead_num,instance_npcname("#Resurrect Monsters1")+"::OnMyMobDead");
			if (rand(1,10) == 9) {
				mapannounce(instance_mapname("1@orcs"),"Grande Orc: Precisamos de mais defesa! Arranje mais guerreiros para cá!",bc_map,"0xff4444");
			}
		} else if ((.@mob_ran > 26) && (.@mob_ran < 29)) {
			areamonster instance_mapname("1@orcs"),41,91,51,81,"Grand Orc",HIGH_ORC,.@mob_dead_num,instance_npcname("#Resurrect Monsters1")+"::OnMyMobDead";
			if (rand(1,10) == 9) {
				mapannounce(instance_mapname("1@orcs"),"Onde estão os Grandes Orc's!? Precisamos deles para deter os inimigos!",bc_map,"0xff4444");
			}
		} else {
			areamonster(instance_mapname("1@orcs"),17,187,27,177,"Grand Orc",HIGH_ORC,.@mob_dead_num,instance_npcname("#Resurrect Monsters1")+"::OnMyMobDead");
			if (rand(1,5) == 3) {
				mapannounce(instance_mapname("1@orcs"),"Perigo: O exército está se concentrando na zona No. 4.",bc_map,"0x77ff77");
			}
			if (rand(1,100) == 50) {
				initnpctimer;
			}
		}
	}
	end;

	OnTimer10:
	mapannounce(instance_mapname("1@orcs"),"Mensagem do Guarda de Elite Orc: Acho que isso levará mais tempo que o estimado. Convoquem os Golem Estalactíticos!",bc_map,"0xff4444");
	end;

	OnTimer4010:
	mapannounce(instance_mapname("1@orcs"),"Golem Estalactíticos estão cavando profundamente o subsolo.",bc_map,"0x77ff77");
	areamonster(instance_mapname("1@orcs"),17,187,27,177,"Golem Estalactítico",STALACTIC_GOLEM,20,instance_npcname("#Resurrect Monsters1")+"::OnMyMobDead");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
1@orcs,180,30,0	script	#Resurrect Monsters2	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#Resurrect Monsters2"));
	end;

	OnDisable:
	killmonster(instance_mapname("1@orcs"),instance_npcname("#Resurrect Monsters2")+"::OnMyMobDead");
	end;

	OnEnable:
	enablenpc(instance_npcname("#Resurrect Monsters2"));
	monster(instance_mapname("1@orcs"),0,0,"Lobo Treinado",DESERT_WOLF,15,instance_npcname("#Resurrect Monsters2")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@mob_dead_num = 15 - mobcount(instance_mapname("1@orcs"),instance_npcname("#Resurrect Monsters2")+"::OnMyMobDead");
	if (rand(1,30) > 15) {
		if (.@mob_dead_num > 0) {
			monster(instance_mapname("1@orcs"),0,0,"Lobo Treinado",DESERT_WOLF,.@mob_dead_num,instance_npcname("#Resurrect Monsters2")+"::OnMyMobDead");
		}
	} else {
		if (.@mob_dead_num > 0) {
			areamonster(instance_mapname("1@orcs"),17,187,27,177,"Lobo Treinado",DESERT_WOLF,.@mob_dead_num,instance_npcname("#Resurrect Monsters2")+"::OnMyMobDead");
		}
	}
	end;
}

// ------------------------------------------------------------------
1@orcs,180,30,0	script	#Resurrect Monsters3	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#Resurrect Monsters3"));
	end;

	OnDisable:
	killmonster(instance_mapname("1@orcs"),instance_npcname("#Resurrect Monsters3")+"::OnMyMobDead");
	end;

	OnEnable:
	enablenpc(instance_npcname("#Resurrect Monsters3"));
	monster(instance_mapname("1@orcs"),0,0,"Orc Arqueiro",ORC_ARCHER,15,instance_npcname("#Resurrect Monsters3")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@mob_dead_num = 15 - mobcount(instance_mapname("1@orcs"),instance_npcname("#Resurrect Monsters3")+"::OnMyMobDead");
	.@mob_ran = rand(1,30);
	if (.@mob_ran > 29) {
		if (.@mob_dead_num > 0) {
			monster(instance_mapname("1@orcs"),0,0,"Orc Arqueiro",ORC_ARCHER,.@mob_dead_num,instance_npcname("#Resurrect Monsters3")+"::OnMyMobDead");
		}
	} else if ((.@mob_ran > 26) && (.@mob_ran < 30)) {
		if (.@mob_dead_num > 0) {
			areamonster(instance_mapname("1@orcs"),43,155,47,159,"Orc Arqueiro",ORC_ARCHER,.@mob_dead_num,instance_npcname("#Resurrect Monsters3")+"::OnMyMobDead");
			if (rand(1,3) == 3) {
				mapannounce(instance_mapname("1@orcs"),"Grande Orc: Ataquem eles pelas costas! Acabem com os seus reforços!",bc_map,"0xff4444");
			}
		}
	} else {
		if (.@mob_dead_num > 0) {
			areamonster(instance_mapname("1@orcs"),17,187,27,177,"Orc Arqueiro",ORC_ARCHER,.@mob_dead_num,instance_npcname("#Resurrect Monsters3")+"::OnMyMobDead");
		}
	}
	end;
}

// ------------------------------------------------------------------
1@orcs,180,30,0	script	#Resurrect Monsters4	CLEAR_NPC,{
	end;

	OnInstanceInit:
	enablenpc(instance_npcname("#Resurrect Monsters4"));
	areamonster(instance_mapname("1@orcs"),98,35,178,115,"Anopheles",ANOPHELES,10,instance_npcname("#Resurrect Monsters4")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@mob_dead_num = 10 - mobcount(instance_mapname("1@orcs"),instance_npcname("#Resurrect Monsters4")+"::OnMyMobDead");
	if (.@mob_dead_num > 0) {
		monster(instance_mapname("1@orcs"),0,0,"Anopheles",ANOPHELES,.@mob_dead_num,instance_npcname("#Resurrect Monsters4")+"::OnMyMobDead");
	}
	end;

	OnDisable:
	killmonster(instance_mapname("1@orcs"),instance_npcname("#Resurrect Monsters4")+"::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
1@orcs,180,29,4	script	Kruger#1-1	4_ORCWARRIOR,{
	donpcevent(instance_npcname("Kruger#1-2")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
1@orcs,180,29,4	script	Kruger#1-2	4_ORCWARRIOR,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("Kruger#1-2"));
	end;

	OnEnable:
	disablenpc(instance_npcname("Kruger#1-1"));
	enablenpc(instance_npcname("Kruger#1-2"));
	initnpctimer;
	end;

	OnTimer10:
	mapannounce(instance_mapname("1@orcs"),"Kruger: Droga... Por que demora tanto!? Eu não tenho o dia todo!!",bc_map,"0xffff00");
	end;

	OnTimer5710:
	mapannounce(instance_mapname("1@orcs"),"Kruger: Meu plano era deixar que nossos camaradas abrissem o portão, mas o plano foi arruinado desde que fui buscar o Orc Xamã.",bc_map,"0xffff00");
	end;

	OnTimer14610:
	mapannounce(instance_mapname("1@orcs"),"Mensagem do Guarda de Elite Orc: Sinto cheiro de rato.. Mande alguns reforços para a entrada!!",bc_map,"0xff4444");
	end;

	OnTimer20210:
	mapannounce(instance_mapname("1@orcs"),"Kruger: Mas que droga.. Eles podem chegar à qualquer minuto. Ok. Escutem agora.",bc_map,"0xffff00");
	end;

	OnTimer24910:
	mapannounce(instance_mapname("1@orcs"),"Kruger: O Orc Xamã selou a caverna, dividindo ela em 4 zonas. Em cada zona tem um Orc encantado que pode abrir passagem para a próxima zona.",bc_map,"0xffff00");
	end;

	OnTimer34310:
	mapannounce(instance_mapname("1@orcs"),"Kruger: Encontrem os Orcs Encantados e livrem-se deles para ir para a próxima zona.",bc_map,"0xffff00");
	end;

	OnTimer39710:
	mapannounce(instance_mapname("1@orcs"),"Kruger: Tente evitar atacar os Orcs Encatandos. Toda vez que você matar um Orc normal, Grand Orcs se reunirão no caminho para o 2º andar.",bc_map,"0xffff00");
	end;

	OnTimer49210:
	mapannounce(instance_mapname("1@orcs"),"Kruger: Na pior das hipóteses, o caminho para o 2º andar poderia ser completamente bloqueado. Para seu próprio bem, tente estar o mais escondido possível.",bc_map,"0xffff00");
	end;

	OnTimer56310:
	mapannounce(instance_mapname("1@orcs"),"Missão: Sempre desvie dos Orcs Encantandos. Evitar batalhas com os Orcs pode ser uam boa estratégia para chegar no 2º andar.",bc_map,"0x44ffff");
	donpcevent(instance_npcname("#Resurrect Monsters1")+"::OnEnable");
	donpcevent(instance_npcname("#Resurrect Monsters2")+"::OnEnable");
	donpcevent(instance_npcname("#Resurrect Monsters3")+"::OnEnable");
	disablenpc(instance_npcname("Kruger#1-2"));
	end;

	OnTimer60000:
	areamonster(instance_mapname("1@orcs"),137,83,143,89,"Orc Encantado",ORK_WARRIOR,1,instance_npcname("B1 Area Mobs")+"::OnMyMobDead");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
1@orcs,168,125,0	script	B1 Area 1	WARPNPC,3,3,{
	OnInstanceInit:
	disablenpc(instance_npcname("B1 Area 1"));
	end;

	OnEnable:
	enablenpc(instance_npcname("B1 Area 1"));
	areamonster(instance_mapname("1@orcs"),103,105,109,111,"Orc Encantado",ORK_WARRIOR,1,instance_npcname("B1 Area Mobs")+"::OnMyMobDead1");
	end;

	OnTouch:
	warp(instance_mapname("1@orcs"),168,130);
	end;

	OnContinue:
	donpcevent(instance_npcname("B1 Area 2")+"::OnEnable");
	initnpctimer;
	end;

	OnTimer10300:
	mapannounce(instance_mapname("1@orcs"),"Sussuro do Kruger: Os Orcs aqui costumavam ser meus amigos. Mas tudo mudou desde que os Orcs Xamãs dominaram eles com as magias.",bc_map,"0xff4499");
	end;

	OnTimer18700:
	mapannounce(instance_mapname("1@orcs"),"Sussuro do Kruger: Não temos muito o que fazer, mas se quisermos derrotar os Orcs Xamãs, temso que salvar as outras tribos.",bc_map,"0xff4499");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
1@orcs,89,94,0	script	B1 Area 2	WARPNPC,3,3,{
	OnInstanceInit:
	disablenpc(instance_npcname("B1 Area 2"));
	end;

	OnEnable:
	enablenpc(instance_npcname("B1 Area 2"));
	areamonster(instance_mapname("1@orcs"),32,40,38,46,"Orc Encantado",ORK_WARRIOR,1,instance_npcname("B1 Area Mobs")+"::OnMyMobDead2");
	end;

	OnTouch:
	warp(instance_mapname("1@orcs"),85,85);
	end;

	OnContinue:
	donpcevent(instance_npcname("B1 Area 3")+"::OnEnable");
	initnpctimer;
	end;

	OnTimer30300:
	mapannounce(instance_mapname("1@orcs"),"Sussuro do Kruger: Eu vi alguns corpos de nossa tribo. Parece que o Orc Xamã está usando eles para seus rituais.",bc_map,"0xff4499");
	end;

	OnTimer37600:
	mapannounce(instance_mapname("1@orcs"),"Sussuro do Kruger: ... Tudo por causa de mim. Eu sou o responsável por toda essa maldade.",bc_map,"0xff4499");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
1@orcs,38,105,0	script	B1 Area 3	WARPNPC,3,3,{
	OnInstanceInit:
	disablenpc(instance_npcname("B1 Area 3"));
	end;

	OnEnable:
	enablenpc(instance_npcname("B1 Area 3"));
	areamonster(instance_mapname("1@orcs"),19,177,25,183,"Orc Encantado",ORK_WARRIOR,1,instance_npcname("B1 Area Mobs")+"::OnMyMobDead3");
	end;

	OnTouch:
	warp(instance_mapname("1@orcs"),38,110);
	end;

	OnContinue:
	donpcevent(instance_npcname("B1 Area 4")+"::OnEnable");
	initnpctimer;
	end;

	OnTimer30300:
	mapannounce(instance_mapname("1@orcs"),"Por favor, vamos parar aqui!",bc_map,"0xff4499");
	end;

	OnTimer32700:
	mapannounce(instance_mapname("1@orcs"),"Vamos chegar ao segundo porão após passarmos por aqui.",bc_map,"0xff4499");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
1@orcs,21,189,0	script	B1 Area 4	WARPNPC,3,3,{
	OnInstanceInit:
	disablenpc(instance_npcname("B1 Area 4"));
	end;

	OnEnable:
	enablenpc(instance_npcname("B1 Area 4"));
	donpcevent(instance_npcname("#Resurrect Monsters1")+"::OnDisable");
	donpcevent(instance_npcname("#Resurrect Monsters2")+"::OnDisable");
	donpcevent(instance_npcname("#Resurrect Monsters3")+"::OnDisable");
	donpcevent(instance_npcname("#Resurrect Monsters4")+"::OnDisable");
	end;

	OnTouch:
	warp(instance_mapname("2@orcs"),32,171);
	end;
}

// ------------------------------------------------------------------
1@orcs,1,1,0	script	B1 Area Mobs	FAKE_NPC,{
	end;

	OnMyMobDead:
	donpcevent(instance_npcname("B1 Area 1")+"::OnEnable");
	end;

	OnMyMobDead1:
	donpcevent(instance_npcname("B1 Area 1")+"::OnContinue");
	end;

	OnMyMobDead2:
	donpcevent(instance_npcname("B1 Area 2")+"::OnContinue");
	end;

	OnMyMobDead3:
	donpcevent(instance_npcname("B1 Area 3")+"::OnContinue");
	end;
}

// ------------------------------------------------------------------
2@orcs,36,171,0	script	#2Resurrect Monsters1	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#2Resurrect Monsters1"));
	end;

	OnEnable:
	enablenpc(instance_npcname("#2Resurrect Monsters1"));
	monster(instance_mapname("2@orcs"),0,0,"Orc Vingativo",ORC_SKELETON,30,instance_npcname("#2Resurrect Monsters1")+"::OnMyMobDead");
	end;

	OnDisable:
	stopnpctimer;
	killmonster(instance_mapname("2@orcs"),instance_npcname("#2Resurrect Monsters1")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@mob_dead_num = 30 - mobcount(instance_mapname("2@orcs"),instance_npcname("#2Resurrect Monsters1")+"::OnMyMobDead");
	if (.@mob_dead_num > 0) {
		.@mob_ran = rand(1,30);
		if (.@mob_ran > 29) {
			monster(instance_mapname("2@orcs"),0,0,"Orc Vingativo",ORC_SKELETON,.@mob_dead_num,instance_npcname("#2Resurrect Monsters1")+"::OnMyMobDead");
		} else if ((.@mob_ran > 28) && (.@mob_ran < 30)) {
			monster(instance_mapname("2@orcs"),0,0,"Grande Orc",HIGH_ORC,.@mob_dead_num,instance_npcname("#2Resurrect Monsters1")+"::OnMyMobDead");
		} else if ((.@mob_ran > 26) && (.@mob_ran < 29)) {
			areamonster instance_mapname("2@orcs"),157,112,167,122,"Grande Orc",HIGH_ORC,.@mob_dead_num,instance_npcname("#2Resurrect Monsters1")+"::OnMyMobDead";
			if (rand(1,10) == 9) {
				mapannounce(instance_mapname("2@orcs"),"Aviso: Grand Orcs estão reunidos perto da Área 3.",bc_map,"0xff4444");
			}
		} else {
			areamonster(instance_mapname("2@orcs"),173,13,183,23,"Grande Orc",HIGH_ORC,.@mob_dead_num,instance_npcname("#2Resurrect Monsters1")+"::OnMyMobDead");
			if (rand(1,5) == 3) {
				mapannounce(instance_mapname("2@orcs"),"Perigo: As forças começaram a se concentrar no altar do Orc Xamã.",bc_map,"0x77ff77");
			}
			if (rand(1,70) == 50) {
				initnpctimer;
			}
		}
	}
	end;

	OnTimer10:
	mapannounce(instance_mapname("2@orcs"),"Voz de algum lugar: Tolo... Você realmente acha que o altar cairia assim?",bc_map,"0xff4444");
	end;

	OnTimer4010:
	mapannounce(instance_mapname("2@orcs"),"[ Alguns espectros foram sumonados por forças desconehcidas ]",bc_map,"0x77ff77");
	areamonster(instance_mapname("2@orcs"),167,25,177,35,"Aparição",G_WRAITH,30,instance_npcname("#2Resurrect Monsters1")+"::OnMyMobDead");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
2@orcs,36,171,0	script	#2Resurrect Monsters3	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#2Resurrect Monsters3"));
	end;

	OnEnable:
	enablenpc(instance_npcname("#2Resurrect Monsters3"));
	monster(instance_mapname("2@orcs"),0,0,"Orc Zombie",ORC_ZOMBIE,15,instance_npcname("#2Resurrect Monsters3")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@mob_dead_num = 15 - mobcount(instance_mapname("2@orcs"),instance_npcname("#2Resurrect Monsters3")+"::OnMyMobDead");
	.@mob_ran = rand(1,30);
	if (.@mob_ran > 29) {
		if (.@mob_dead_num > 0) {
			monster(instance_mapname("2@orcs"),0,0,"Orc Arqueiro",ORC_ARCHER,.@mob_dead_num,instance_npcname("#2Resurrect Monsters3")+"::OnMyMobDead");
		}
	} else if ((.@mob_ran > 6) && (.@mob_ran < 30)) {
		if (.@mob_dead_num > 0) {
			areamonster(instance_mapname("2@orcs"),168,10,184,26,"Orc Arqueiro",ORC_ARCHER,.@mob_dead_num,instance_npcname("#2Resurrect Monsters3")+"::OnMyMobDead");
			if (rand(1,15) == 3) {
				mapannounce(instance_mapname("2@orcs"),"Aviso: As equipes de Orcs Arqueiros estão se juntando próximo ao altar.",bc_map,"0xff4444");
			}
		}
	} else {
		if (.@mob_dead_num > 0) {
			areamonster(instance_mapname("2@orcs"),168,21,184,21,"Orc Arqueiro",ORC_ARCHER,.@mob_dead_num,instance_npcname("#2Resurrect Monsters3")+"::OnMyMobDead");
		}
	}
	end;

	OnDisable:
	killmonster(instance_mapname("2@orcs"),instance_npcname("#2Resurrect Monsters3")+"::OnMyMobDead");
	end;
}

// ------------------------------------------------------------------
2@orcs,180,30,0	script	#2Resurrect Monsters4	CLEAR_NPC,{
	end;

	OnInstanceInit:
	enablenpc(instance_npcname("#2Resurrect Monsters4"));
	monster(instance_mapname("2@orcs"),0,0,"Anopheles",ANOPHELES,10,instance_npcname("#2Resurrect Monsters4")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@mob_dead_num = 10 - mobcount(instance_mapname("2@orcs"),instance_npcname("#2Resurrect Monsters4")+"::OnMyMobDead");
	if (.@mob_dead_num > 0) {
		monster(instance_mapname("2@orcs"),0,0,"Anopheles",ANOPHELES,1,instance_npcname("#2Resurrect Monsters4")+"::OnMyMobDead");
	}
	end;
}

// ------------------------------------------------------------------
2@orcs,35,169,4	script	Kruger#2-1	4_ORCWARRIOR,{
	donpcevent(instance_npcname("Kruger#2-2")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
2@orcs,35,169,4	script	Kruger#2-2	4_ORCWARRIOR,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("Kruger#2-2"));
	end;

	OnEnable:
	disablenpc(instance_npcname("Kruger#2-1"));
	enablenpc(instance_npcname("Kruger#2-2"));
	initnpctimer;
	end;

	OnTimer10:
	mapannounce(instance_mapname("2@orcs"),"Sussuro do Kruger: Vou te dizer como chegar ao altar do Xamã.",bc_map,"0xffff00");
	end;

	OnTimer3510:
	mapannounce(instance_mapname("2@orcs"),"Sussuro do Kruger: Consegue ver os braseiros iluminando o caminho? Para liberar a próxima zona, reforce o fogo neles.",bc_map,"0xffff00");
	end;

	OnTimer10710:
	mapannounce(instance_mapname("2@orcs"),"Sussuro do Kruger: É fato que os monstros não permitirão que você toque nos braseiros facilmente.",bc_map,"0xffff00");
	end;

	OnTimer16310:
	mapannounce(instance_mapname("2@orcs"),"Sussuro do Kruger: Mas tente manter as batalhas não-visíveis, caso contrário o Xamã enviará tropas de proteção.",bc_map,"0xffff00");
	end;

	OnTimer21910:
	mapannounce(instance_mapname("2@orcs"),"Sussuro do Kruger: Apenas o Líder do Grupo poderá reforçar as chamas, então protejam ele.",bc_map,"0xffff00");
	end;

	OnTimer23910:
	mapannounce(instance_mapname("2@orcs"),"Mission: Unseal the zone by lighting the braziers. They can only be lit in a certain order, so be careful.",bc_map,"0x4444ff");
	donpcevent(instance_npcname("#2Resurrect Monsters1")+"::OnEnable");
	donpcevent(instance_npcname("#2Resurrect Monsters3")+"::OnEnable");
	donpcevent(instance_npcname("Tocha#1-1")+"::OnEnable");
	disablenpc(instance_npcname("Kruger#2-2"));
	end;
}

// ------------------------------------------------------------------
2@orcs,26,164,0	script	Tocha#1-1	CLEAR_NPC,{
	if (getpartyleader(getcharid(CHAR_ID_PARTY),2) != getcharid(CHAR_ID_CHAR)) end;
	progressbar ("ffff00",5);
	setarray(.@id[0],atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),0)),atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),2)));
	if (.@id[1] == 4) {
		donpcevent(instance_npcname("#Warp2-"+.@id[0])+"::OnEnable");
	} else {
		donpcevent(instance_npcname("Tocha#"+.@id[0]+"-"+(.@id[1]+1))+"::OnEnable");
	}
	initnpctimer;
	disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
	end;

	OnInstanceInit:
	if (strnpcinfo(NPC_NAME) != "Tocha#2-1" && strnpcinfo(NPC_NAME) != "Tocha#3-1") {
		disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
	}
	end;

	OnEnable:
	enablenpc instance_npcname(strnpcinfo(NPC_NAME));
	end;

	OnTimer100:
	specialeffect EF_FIREPILLAR;
	end;

	OnTimer2000:
	specialeffect EF_FIREPILLARBOMB;
	stopnpctimer;
	end;
}
2@orcs,55,155,0	duplicate(Tocha#1-1)	Tocha#1-2	CLEAR_NPC
2@orcs,108,146,0	duplicate(Tocha#1-1)	Tocha#1-3	CLEAR_NPC
2@orcs,98,171,0	duplicate(Tocha#1-1)	Tocha#1-4	CLEAR_NPC

2@orcs,35,92,0	duplicate(Tocha#1-1)	Tocha#2-1	CLEAR_NPC
2@orcs,32,70,0	duplicate(Tocha#1-1)	Tocha#2-2	CLEAR_NPC
2@orcs,70,31,0	duplicate(Tocha#1-1)	Tocha#2-3	CLEAR_NPC
2@orcs,84,51,0	duplicate(Tocha#1-1)	Tocha#2-4	CLEAR_NPC

2@orcs,142,145,0	duplicate(Tocha#1-1)	Tocha#3-1	CLEAR_NPC
2@orcs,162,134,0	duplicate(Tocha#1-1)	Tocha#3-2	CLEAR_NPC
2@orcs,144,117,0	duplicate(Tocha#1-1)	Tocha#3-3	CLEAR_NPC
2@orcs,136,98,0	duplicate(Tocha#1-1)	Tocha#3-4	CLEAR_NPC

// ------------------------------------------------------------------
2@orcs,48,100,0	script	#Warp2-1	WARPNPC,3,3,{
	OnInstanceInit:
	disablenpc(instance_npcname("#Warp2-1"));
	end;

	OnEnable:
	monster(instance_mapname("2@orcs"),109,156,"Guarda de Elite",I_HIGH_ORC,1,instance_npcname("#Mobs Control")+"::OnMyMobDead1");
	mapannounce(instance_mapname("2@orcs"),"Guarda de Elite Orc: Oh! Eu tenho companhia. Me derrotem se puderem!!",bc_map,"0xff8888");
	end;

	OnContinue:
	enablenpc(instance_npcname("#Warp2-1"));
	initnpctimer;
	end;

	OnTimer10000:
	areamonster(instance_mapname("2@orcs"),28,158,40,170,"Guarda de Elite",I_HIGH_ORC,1,instance_npcname("#Mobs Control")+"::OnMyMobDead1");
	stopnpctimer;
	end;

	OnTouch:
	warp(instance_mapname("2@orcs"),47,93);
	end;
}

// ------------------------------------------------------------------
2@orcs,101,55,0	script	#Warp2-2	WARPNPC,3,3,{
	OnInstanceInit:
	disablenpc(instance_npcname("#Warp2-2"));
	end;

	OnEnable:
	monster(instance_mapname("2@orcs"),67,64,"Orc Caçador",I_ORC_ARCHER,1,instance_npcname("#Mobs Control")+"::OnMyMobDead2");
	mapannounce(instance_mapname("2@orcs"),"Orc Caçador: Haha! Impressionante o que você fez, mas sua viagem tola acabam por aqui...",bc_map,"0xff8888");
	end;

	OnContinue:
	enablenpc(instance_npcname("#Warp2-2"));
	initnpctimer;
	end;

	OnTimer10000:
	areamonster(instance_mapname("2@orcs"),40,91,52,103,"Orc Caçador",I_ORC_ARCHER,1,instance_npcname("#Mobs Control")+"::OnMyMobDead2");
	stopnpctimer;
	end;

	OnTouch:
	warp(instance_mapname("2@orcs"),107,55);
	end;
}

// ------------------------------------------------------------------
2@orcs,167,104,0	script	#Warp2-3	WARPNPC,3,3,{
	OnInstanceInit:
	disablenpc(instance_npcname("#Warp2-3"));
	end;

	OnEnable:
	monster(instance_mapname("2@orcs"),152,147,"Orc Morto-Vivo",I_ORC_SKELETON,1,instance_npcname("#Mobs Control")+"::OnMyMobDead3");
	mapannounce(instance_mapname("2@orcs"),"Orc Morto-Vivo:Sinto cheiro de carne... Estou faminto! Quero comer um pouco de carne humana!!",bc_map,"0xff8888");
	end;

	OnContinue:
	areamonster(instance_mapname("2@orcs"),117,61,129,73,"Orc Morto-Vivo",I_ORC_SKELETON,1);
	donpcevent(instance_npcname("#Boss Control")+"::OnEnable");
	enablenpc(instance_npcname("#Warp2-3"));
	initnpctimer;
	end;

	OnTimer10:
	mapannounce(instance_mapname("2@orcs"),"Xamã Cargalache: Hahaha!! Então você finalmente chegou aqui... O assasino que você enviou foi totalmente inútil. Aquele Orc estúpido está morrendo agora, sob meus pés.",bc_map,"0xffff00");
	end;

	OnTimer6810:
	mapannounce(instance_mapname("2@orcs"),"Xamã Cargalache: Meu querido servo, vá pegar os intrusos!",bc_map,"0xffff00");
	end;

	OnTimer10310:
	mapannounce(instance_mapname("2@orcs"),"Espírito de Orc: Ao seu dispor, meu senhor.",bc_map,"0xff7777");
	end;

	OnTimer13110:
	mapannounce(instance_mapname("2@orcs"),"Perigo: Você fo idescoberto pelo Xamã Cargalache. O plano de Kruger, de assasinar o xamã falhou. Você agora deve derrotar o Xamã e achar vestígios de Kruger.",bc_map,"0x8888ff");
	stopnpctimer;
	end;

	OnTouch:
	warp(instance_mapname("2@orcs"),167,95);
	end;
}

// ------------------------------------------------------------------
2@orcs,36,171,0	script	#Boss Control	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#Boss Control"));
	end;

	OnEnable:
	monster(instance_mapname("2@orcs"),185,8,"Xamã Orc",I_ORC_LADY,1,instance_npcname("#Boss Control")+"::OnMyMobDead");
	monster(instance_mapname("2@orcs"),179,15,"Orc Heroi",ORK_HERO,1);
	enablenpc(instance_npcname("#Boss Control"));
	end;

	OnMyMobDead:
	donpcevent(instance_npcname("Kruger#")+"::OnEnable");
	.@mob_ran = rand(1,5);
	if (.@mob_ran == 1) {
		mapannounce(instance_mapname("2@orcs"),"Xamã Orc: Como... Como poderia acontecer... Como poderia alguém como você...!!",bc_map,"0xffff00");
	} else if (.@mob_ran == 2) {
		mapannounce(instance_mapname("2@orcs"),"Xamã Orc: Como fui dominado por meros humanos!",bc_map,"0xffff00");
	} else if (.@mob_ran == 3) {
		mapannounce(instance_mapname("2@orcs"),"Xamã Orc: Isso... Isso não pode ser o fim...",bc_map,"0xffff00");
	} else if (.@mob_ran == 4) {
		mapannounce(instance_mapname("2@orcs"),"Xamã Orc: Eu... não posso morrer... ainda...!",bc_map,"0xffff00");
	} else {
		mapannounce(instance_mapname("2@orcs"),"Xamã Orc: Derrotado por um bando de imbecis... Isso não pode estar acontecendo...!",bc_map,"0xffff00");
	}
	donpcevent(instance_npcname("#2Resurrect Monsters1")+"::OnDisable");
	donpcevent(instance_npcname("#2Resurrect Monsters3")+"::OnDisable");
	donpcevent(instance_npcname("#Warp Outside Orc Dun")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
2@orcs,182,8,0	script	#Warp Outside Orc Dun	WARPNPC,3,3,{
	OnInstanceInit:
	disablenpc(instance_npcname("#Warp Outside Orc Dun"));
	end;

	OnEnable:
	enablenpc(instance_npcname("#Warp Outside Orc Dun"));
	end;

	OnTouch:
	warp("gef_fild10",240,197);
	end;
}

// ------------------------------------------------------------------
2@orcs,172,13,0	script	Kruger#	4_ORCWARRIOR2,{
	if (!orcdun) {
		mes "[Kruger]";
		mes "*Tosse*";
		mes strcharinfo(PC_NAME)+", é você...";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "Não se mexa!!";
		mes "Você está muito ferid"+(Sex == SEX_MALE ? "o" : "a" )+"!";
		next;
		mes "[Kruger]";
		mes "Está... tudo bem..";
		mes "....";
		mes "E o Xamã?";
		mes "O que aconteceu com ele?";
		next;
		mes "["+strcharinfo(PC_NAME)+"] ";
		mes "O Xamã está morto agora.";
		mes "Quem na verdade era o Xamã?";
		next;
		mes "*Kruger parecia estar aliviado quando ouviu falar da morte do Xamã.";
		mes "Porém você percebe uma expressão triste no rosto dele.*";
		next;
		mes "[Kruger]";
		mes "Eu...";
		mes "Eu não conseguia matar minah própria filha...";
		mes "Obrigado, tenho certeza absoluta que agora ela está livre do pesadelo que assombrava a alma dela.";
		next;
		mes "*Kruger gostaria de dizer mais alguma coisa, porém deu seu último suspiro e se foi...*";
		orcdun = 1;
		close;
	} else {
		mes "Você vê o corpo de Kruger estirado no chão, pacificamente.";
		close;
	}

	OnInstanceInit:
	disablenpc(instance_npcname("Kruger#"));
	end;

	OnEnable:
	enablenpc(instance_npcname("Kruger#"));
	end;
}

// ------------------------------------------------------------------
2@orcs,36,171,0	script	#Mobs Control	CLEAR_NPC,{
	end;

	OnMyMobDead1:
	donpcevent(instance_npcname("#Warp2-1")+"::OnContinue");
	end;

	OnMyMobDead2:
	donpcevent(instance_npcname("#Warp2-2")+"::OnContinue");
	end;

	OnMyMobDead3:
	donpcevent(instance_npcname("#Warp2-3")+"::OnContinue");
	end;
}
