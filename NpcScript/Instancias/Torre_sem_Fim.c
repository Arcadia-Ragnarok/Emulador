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
| - Info: Instância Torre sem Fim.                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Entrada e preparação] -
// ------------------------------------------------------------------
alberta,214,77,6	script	Capitão Janssen#eT	4_M_SEAMAN,{
	if (BaseLevel < 50) {
		mes "[Capitão Janssen]";
		mes "*Suspiro*...";
		mes "Eu não sei se posso sempre voltar a velejar no mar...";
		close;
	}
	if (in_102tower == 1) {
		mes "^0000ff*Olhando incrivelmente animado.";
		mes "O velho correu as pressas para loja da marinha encomendar coisas.";
		mes "Você não tem nada melhor pra fazer.";
		mes "Então você decide perguntar por que ele está em uma correria dessas.*^000000";
		next;
		mes "^0000ff*O velho, depois de ter feito suas encomendas.";
		mes "Anda em sua direção.*^000000";
		next;
		mes "[Capitão Janssen]";
		mes "Eu fiquei comovido quando você aceitou um pedido meu, um estranho, tão facilmente.";
		mes "Você deve ser realmente um dos bons, "+(Sex == SEX_MALE ? "herói aventureiro":"heroina aventureira")+".";
		mes "Você está interessado em sair numa viagem oceânica?";
		next;
		mes "[Capitão Janssen]";
		mes "Já naveguei algumas vezes...";
		mes "Mas agora penso sobre isto, e vejo que nunca cruzei todo o continente";
		next;
		mes "[Capitão Janssen]";
		mes "Não, isso é bom o suficiente.";
		mes "Talvez eu só tenha uma pequena embarcação de pesca.";
		mes "Mas eu costumava ser um capitão que comandou uma frota";
		next;
		mes "[Capitão Janssen]";
		mes "Como você deve saber após algumas viagens marítimas.";
		mes "Talvez muitas pessoas não tenham atravessado o oceano além do continente.";
		mes "Eu também falhei na conquista do oceano.";
		next;
		mes "^0000ff*Mr. Janssen falou sobre suas perigosas viagens oceânicas durante um bom tempo.";
		mes "Você tem bastante tempo livre, então você senta.";
		mes "E em silêncio ouve a sua história.*^000000";
		next;
		mes "^0000ff*Pelo menos metade de sua história soou muito exagerada.";
		mes "Mas algo chamou sua atenção:";
		mes "Ele insiste que uma torre monstruosa existe no oceano, e que é tão alta, que raspa no céu.*^000000";
		in_102tower = 2;
		close;
	} else if (in_102tower == 2) {
		mes "[Capitão Jassen]";
		mes "Então tudo que eu podia fazer era lançar a âncora naquela torre monstruosa.";
		mes "Depois que minha frota foi destruída.";
		mes "No início, éramos para ficar lá somente até que a temPesteade acabasse.";
		mes "Mas não chegou a acabar tão cedo quanto esperávamos.";
		next;
		mes "[Capitão Janssen]";
		mes "Minha equipe estava com fome, e alguns entraram na torre a fim de encontrar alimento...";
		mes "Eles nunca mais voltaram.";
		next;
		mes "[Capitão Janssen]";
		mes "Por que você não foi lá com eles?";
		next;
		mes "[Capitão Janssen]";
		mes "Meus instintos me disseram que a torre era perigosa.";
		mes "Fiquei curioso, mas eu não iria arriscar a minha vida.";
		mes "Nós esperamos que eles retornassem por 7 dias até que a temPesteade finalmente acabou.";
		mes "Mas ninguém retornou.";
		next;
		mes "[Capitão Janssen]";
		mes "Em nosso desespero para sobreviver, abandonamos todos os nossos bens.";
		mes "E deixamos a torre somente com um pouco de água e plantas comestíveis.";
		mes "Que haviamos encontrado ao redor da torre.";
		mes "Quando finalmente em terra firme, eu era o único vivo...";
		next;
		mes "^0000ff*Você pôde imaginar a cena desesperadora da frota morrendo em sua última viagem.";
		mes "Mesmo que ele não explicasse mais nada.";
		mes "Um olhar de lamento sombrio varreu seu rosto enquanto ele permaneceu em silêncio.";
		mes "Então ele disse:*^000000";
		next;
		mes "[Capitão Janssen]";
		mes "Tenho algo que devo fazer antes de morrer.";
		mes "Preciso recuperar os restos mortais da minha tripulação que morreu na torre.";
		mes "E dar-lhes um enterro apropriado.";
		next;
		mes "[Capitão Janssen]";
		mes "Eu me sinto tão afortunado por receber um aventureiro caloroso como você.";
		mes "Com o dinheiro que você me deu, eu finalmente posso velejar até a torre novamente.";
		next;
		mes "[Capitão Janssen]";
		mes "Que tal me contratar como seu primeiro marujo?";
		next;
		mes "[Capitão Janssen]";
		mes "Obrigado, mas é um lugar extremamente perigoso.";
		mes "Eu tenho o meu dever à cumprir, e você não tem nenhuma obrigação comigo ou com eles.";
		mes "Não quero sacrificar alguém tão jovem como você para ir a um lugar tão perigoso.";
		next;
		mes "[Capitão Janssen]";
		mes "Não...";
		mes ".";
		mes ".";
		mes "Como um aventureiro, é minha obrigação ajudar aqueles que precisam.";
		mes "Eu também estou muito curioso sobre esse lugar...";
		next;
		mes "[Capitão Janssen]";
		mes "Eu já ia sair imediatamente, mas desde que você se juntou a mim,.";
		mes "Devo dar-lhe tempo para se preparar.";
		mes "Eu vou estar aqui esperando até que você esteja pronto para ir.";
		next;
		mes "[Capitão Janssen]";
		mes "...então ok...";
		mes "Bem-vind"+(Sex == SEX_MALE ? "o" : "a")+" à bordo, primeiro marujo.";
		in_102tower = 3;
		close;
	} else if (in_102tower == 3) {
		mes "[Capitão Jassen]";
		mes "Vamos partir agora?";
		next;
		switch (select("Sim, vamos!","Não, ainda não...")) {
			case 1:
			mes "[Capitão Janssen]";
			mes "Em seguida puxe a âncora, primeiro marujo!";
			close2;
			in_102tower = 4;
			warp("e_tower",70,114);
			end;
			case 2:
			mes "[Capitão Janssen]";
			mes "Claro, sem problemas.";
			mes "Volte quando estiver pront"+(Sex == SEX_MALE ? "o":"a")+".";
			close;
		}
	} else if (in_102tower > 3) {
		mes "[Capitão Jassen]";
		mes "Bem, para viajar pelo oceano novamente, precisamos repor os suprimentos.";
		mes "Se você me der 10.000 zenys, eu cuido do resto.";
		next;
		switch (select("Voltarei depois","Vamos, agora!")) {
			case 1:
			mes "[Capitão Janssen]";
			mes "Me desculpe, mas eu não tenho muito dinheiro.";
			mes "Eu vou voltar quando eu economizar o suficiente.";
			next;
			mes "[Capitão Janssen]";
			mes "Claro, sem problemas.";
			mes "Eu estarei esperando pelo seu retorno.";
			close;
			case 2:
			if (Zeny < 10000) {
				mes "[Capitão Jassen]";
				mes "Me desculpe, mas você não tem dinheiro suficiente.";
				mes "Eu preciso de pelo menos 10.000 zenys para reabastecer os nossos suprimentos...";
				close;
			}
			else {
				mes "[Capitão Jassen]";
				mes "Excelente!";
				mes "Agora estamos pronto para ir.";
				mes "Vamos levantar a âncora de novo!";
				Zeny -= 10000;
				close2;
				warp("e_tower",70,114);
				end;
			}
		}
	} else {
		mes "[Capitão Jassen]";
		mes "Desculpe-me, você é um aventureiro?";
		next;
		mes "[Capitão Janssen]";
		mes "Desculpe perguntar isso, principalmente quando esta é a primeira vez que nos vemos.";
		mes "Mas você pode me fazer um favor?";
		mes "Serei breve.";
		next;
		mes "[Capitão Janssen]";
		mes "Você pode doar ^0000ff10.000^000000 zenys para mim?";
		mes "É por uma causa importante para mim ...";
		next;
		switch (select("Não!","Sim Claro.")) {
			case 1:
			mes "[Capitão Janssen]";
			mes "Me desculpe, mas você perguntou isso a pessoa errada.";
			next;
			mes "[Capitão Janssen]";
			mes "Entendo... Desculpe incomodá-l"+(Sex == SEX_MALE ? "o":"a")+".";
			mes "Entendo que seria muito rude perguntar algo assim.";
			close;
			case 2:
			mes "[Capitão Janssen]";
			mes "Hã?";
			mes "Tem certeza que você não se importa em me dar tanto dinheiro?";
			mes "Uau, muito obrigado!";
			next;
			if (Zeny < 10000) {
				mes "[Capitão Janssen]";
				mes "...Sinto muito, mas eu não acho que você tenha 10.000 zenys.";
				mes "Obrigado pela sua gentileza, mas eu preciso mais do que isso.";
				close;
			} else {
				mes "[Capitão Janssen]";
				mes "Eu não sei porque você precisa de tanto dinheiro.";
				next;
				mes "^0000ff*Você dôou 10.000 zenys para o Capitão Janssen*^000000.";
				next;
				mes "[Capitão Janssen]";
				mes "Muito obrigado!";
				mes "Agora posso estocar alimentos e materiais para o meu navio.";
				mes "Você é gentil e muito amável!";
				Zeny -= 10000;
				in_102tower = 1;
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
e_tower,81,105,0	script	Pedra de Proteção	2_MONEMUS,{
	.@party_id = getcharid(CHAR_ID_PARTY);
	.@p_name$ = getpartyname(.@party_id);
	.@etower_timer = questprogress(60200,PLAYTIME); // 1 Semana
	.@etower_timer2 = questprogress(60201,PLAYTIME); // 4 Horas

	if (!instance_check_party(.@party_id,4)) { // 4 Mínimo de 4 membros no grupo
		mes "Me desculpe mas seu grupo não cumpre com as exigências para entrar na Torre.";
		close;
	}
	if (!.@etower_timer) {
		if (getcharid(CHAR_ID_CHAR) == getpartyleader(.@party_id,2)) {
			mes "Confirmado, o grupo foi feito.";
			mes "Você gostaria de reservar a entrada para a Torre Sem Fim?";
			next;
			switch (select("Gerar Torre Infinita","Entrar no Torre","Retornar para Alberta","Cancelar")) {
				case 1:
				.@instance = instance_create("Torre Infinita",.@party_id);
				if (.@instance < 0) {
					mes "Nome do grupo:"+.@p_name$+"";
					mes "Líder do grupo:"+strcharinfo(PC_NAME)+"";
					mes "^0000ffTorre Infinita ^000000- A reserva falhou!";
					close;
				}
				mes "^0000ffTorre Infinita^000000 - Tentar reservar";
				mes "Depois de fazer uma reserva, você tem que falar com o NPC logo atrás e selecionar o menu 'Entrar no Calabouço' para entrar no calabouço.";
				for (.@i = 1; .@i <= 6; ++.@i) {
					if ( instance_attachmap(.@i+"@tower", .@instance) == "" ) {
						mes "^0000ffTorre Infinita ^000000- A reserva falhou!";
						instance_destroy(.@instance);
						close;
					}
				}
				instance_set_timeout(14400,300,.@instance);
				instance_init(.@instance);
				close;
				case 2:
				callsub(L_Enter,0,1,"Torre Infinita",.@p_name$);
				case 3:
				mes "Eu irei te levar de volta para Alberta.";
				close2;
				warp("alberta",223,36);
				end;
				case 4:
				close;
			}
		}
		switch (select("Entrar na Torre Infinita","Voltar para Alberta","Cancelar.")) {
			case 1:
			callsub(L_Enter,1,1,"Torre Infinita",.@p_name$);
			case 2:
			mes "Eu irei te levar de volta para Alberta.";
			close2;
			warp("alberta",223,36);
			end;
			case 3:
			end;
		}
	} else if (.@etower_timer == 1 && .@etower_timer2 == 2) {
		.@dun_lim_time = etower_timer+604800;
		.@dun_lim_time2 = etower_timer+14400;
		.@dun_cur_time = gettimetick(2);
		.@dun_ent_t = (.@dun_lim_time - .@dun_cur_time);
		.@dun_h = (.@dun_ent_t / 3600);
		.@dun_m = (.@dun_ent_t - (.@dun_h * 3600)) / 60;
		.@dun_s = .@dun_ent_t - ((.@dun_h * 3600) + (.@dun_m * 60));

		mes "Devido às sequelas deixadas na torre.";
		mes "Você não pode entrar no calabouço agora, "+.@dun_h+"horas "+.@dun_m+"minutos "+.@dun_s+"segundos restantes para entrar novamente.";
		next;
		mes "Aqui é perigoso.";
		mes "Vá e volte para Alberta.";
		close2;
		warp("alberta",223,36);
		end;
	} else if (.@etower_timer == 1) {
		mes "Você gostaria de reservar a entrada para a Torre Sem Fim?";
		next;
		switch (select("Entrar na Torre","Voltar para Alberta","Cancelar")) {
			case 1:
			callsub(L_Enter,0,0,"Torre Infinita",.@p_name$);
			case 2:
			mes "Eu irei te levar de volta para Alberta.";
			close2;
			warp("alberta",223,36);
			end;
			case 3:
			break;
		}
		close;
	} else {
		etower_timer = 0;
		erasequest(60200);
		erasequest(60201);
		mes "^0000ffOs registros e efeitos secundários relacionados à Torre Infinita foram removidos.";
		mes "Você pode gerar e entrar novamente na Tower Endless.^000000";
		close;
	}

	L_Enter:
	if (has_instance("1@tower") == "") {
		mes "O calabouço da "+getarg(2)+" não existe.";
		mes "O líder do grupo não gerou o calabouço ainda.";
		close;
	} else {
		mapannounce("e_tower",strcharinfo(PC_NAME)+" do grupo, "+getarg(3)+", está entrando no calabouço da, Torre Infinita.",bc_map,"0x00ff99",FW_NORMAL,12);
		if (getarg(1)) {
			etower_timer = gettimetick(2);
			setquest(60200);
			setquest(60201);
		}
		warp("1@tower",52,354);
		if (getarg(0) == 0) {close;}
		else {end;}
	}
}

// ------------------------------------------------------------------
e_tower,30,30,2	script	Grande Vortex#eT	CLEAR_NPC,2,2,{
	end;
	OnTouch:
	mapannounce("e_tower","["+strcharinfo(PC_NAME)+"], parece ter sido engolido por um enorme vortex",bc_map,"0x00ff99",FW_NORMAL,12);
	warp("alberta",223,36);
	end;
}

// ------------------------------------------------------------------
e_tower,69,117,4	script	Pedra da Purificação#eT1	2_MONEMUS,{
	etower_timer = 0;
	mes "^0000ffOs registros e efeitos relacionados com a Torre Sem Fim foram removidos.";
	mes "Você pode gerar e entrar no calabouço da Torre Sem Fim novamente.^000000";
	close;

	OnInit:
	disablenpc("Pedra da Purificação#eT1");
	end;

	OnEnable:
	initnpctimer;
	end;

	OnDisable:
	stopnpctimer;
	disablenpc("Pedra da Purificação#eT1");
	end;

	OnTimer1000:
	enablenpc("Pedra da Purificação#eT1");
	end;

	OnTimer1740000:
	mapannounce("e_tower","A Pedra da Purificação será distruida em um minuto.",bc_map,"0x00ff99");
	end;

	OnTimer1800000:
	disablenpc("Pedra da Purificação#eT1");
	end;
}

// ------------------------------------------------------------------
// - [ Controle Geral]
// ------------------------------------------------------------------

// ------------------------------------------------------------------
// Invocações de monstros por andar
function	script	F_Tower_Monster	{

	.@level = getarg(0);
	.@map$ = getarg(1);
	.@label$ = getarg(2);

	switch (.@level) {
		case 1:
		areamonster(.@map$,7,351,17,387,"Metaling",METALING,15,.@label$);
		areamonster(.@map$,7,351,17,387,"Marin",MARIN,5,.@label$);
		areamonster(.@map$,7,351,17,387,"Poporing",POPORING,5,.@label$);
		areamonster(.@map$,7,351,17,387,"Drops",DROPS,5,.@label$);
		areamonster(.@map$,7,351,17,387,"Mastering",MASTERING,1,.@label$);
		areamonster(.@map$,7,351,17,387,"Poring",PORING,5,.@label$);
		break;
		case 2:
		areamonster(.@map$,93,351,103,387,"Lobo do Deserto",DESERT_WOLF,20,.@label$);
		areamonster(.@map$,93,351,103,387,"Lobo Errante",VAGABOND_WOLF,1,.@label$);
		areamonster(.@map$,93,351,103,387,"Filhote de Lobo",DESERT_WOLF_B,10,.@label$);
		break;
		case 3:
		areamonster(.@map$,181,351,191,387,"Esqueleto Arqueiro",ARCHER_SKELETON,5,.@label$);
		areamonster(.@map$,181,351,191,387,"Esqueleto Operário",SKEL_WORKER,5,.@label$);
		areamonster(.@map$,181,351,191,387,"Esqueleto Soldado",SOLDIER_SKELETON,5,.@label$);
		areamonster(.@map$,181,351,191,387,"Orc Esqueleto",ORC_SKELETON,5,.@label$);
		areamonster(.@map$,181,351,191,387,"Esqueleto Pirata",PIRATE_SKEL,5,.@label$);
		areamonster(.@map$,181,351,191,387,"Esqueleto",SKELETON,5,.@label$);
		break;
		case 4:
		areamonster(.@map$,267,351,277,387,"Argiope",ARGIOPE,15,.@label$);
		areamonster(.@map$,267,351,277,387,"Mantis",MANTIS,5,.@label$);
		areamonster(.@map$,267,351,277,387,"Argos",ARGOS,5,.@label$);
		areamonster(.@map$,267,351,277,387,"Vocal",VOCAL,1,.@label$);
		areamonster(.@map$,267,351,277,387,"Rocker",ROCKER,5,.@label$);
		areamonster(.@map$,267,351,277,387,"Zangão",HORNET,5,.@label$);
		break;
		case 5:
		areamonster(.@map$,352,351,362,387,"Besouro Ladrão Dourado",GOLDEN_BUG,1,.@label$);
		areamonster(.@map$,352,351,362,387,"Besouro-Ladrão Fêmea",THIEF_BUG_,15,.@label$);
		areamonster(.@map$,352,351,362,387,"Besouro-Ladrão Macho",THIEF_BUG__,15,.@label$);
		areamonster(.@map$,352,351,362,387,"Besouro-Ladrão",THIEF_BUG,15,.@label$);
		areamonster(.@map$,352,351,362,387,"Ovo de Besouro Ladrão",THIEF_BUG_EGG,5,.@label$);
		break;
		case 6:
		areamonster(.@map$,9,267,19,303,"Ovo de Dragão",DRAGON_EGG,5,.@label$);
		areamonster(.@map$,9,267,19,303,"Ovo de Besouro Ladrão",THIEF_BUG_EGG,5,.@label$);
		areamonster(.@map$,9,267,19,303,"Ovo de André",ANT_EGG,5,.@label$);
		areamonster(.@map$,9,267,19,303,"Pupa",PUPA,5,.@label$);
		break;
		case 7:
		areamonster(.@map$,93,267,103,303,"Estrondo",EXPLOSION,15,.@label$);
		areamonster(.@map$,93,267,103,303,"Drainliar",DRAINLIAR,15,.@label$);
		areamonster(.@map$,93,267,103,303,"Anopheles",ANOPHELES,15,.@label$);
		areamonster(.@map$,93,267,103,303,"Farmiliar",FARMILIAR,15,.@label$);
		break;
		case 8:
		areamonster(.@map$,181,267,191,303,"Zumbi Atirador",ANTIQUE_FIRELOCK,15,.@label$);
		areamonster(.@map$,181,267,191,303,"Soldadinho de Chumbo",CRUISER,15,.@label$);
		break;
		case 9:
		areamonster(.@map$,267,267,277,303,"Obsidian",OBSIDIAN,15,.@label$);
		areamonster(.@map$,267,267,277,303,"Golem",GOLEM,15,.@label$);
		areamonster(.@map$,267,267,277,303,"Stapo",STAPO,10,.@label$);
		break;
		case 10:
		areamonster(.@map$,352,267,362,303,"Abelha Rainha",MISTRESS,1,.@label$);
		areamonster(.@map$,352,267,362,303,"Zangão Gigante",GIANT_HONET,25,.@label$);
		areamonster(.@map$,352,267,362,303,"Zangão",HORNET,20,.@label$);
		break;
		case 11:
		areamonster(.@map$,9,180,19,216,"Dríad",DRYAD,15,.@label$);
		areamonster(.@map$,9,180,19,216,"Parasita",PARASITE,15,.@label$);
		areamonster(.@map$,9,180,19,216,"Ginseng Selvagem",WILD_GINSENG,15,.@label$);
		areamonster(.@map$,9,180,19,216,"Rafflesia",RAFFLESIA,5,.@label$);
		break;
		case 12:
		areamonster(.@map$,93,180,103,216,"Pungus",DEMON_PUNGUS,25,.@label$);
		areamonster(.@map$,93,180,103,216,"Punk",PUNK,25,.@label$);
		break;
		case 13:
		areamonster(.@map$,181,180,191,216,"Yao Yun",HYEGUN,15,.@label$);
		areamonster(.@map$,181,180,191,216,"Bongun",BON_GUN,15,.@label$);
		areamonster(.@map$,181,180,191,216,"Munak",MUNAK,10,.@label$);
		break;
		case 14:
		areamonster(.@map$,267,180,277,216,"Grand Orc",HIGH_ORC,15,.@label$);
		areamonster(.@map$,267,180,277,216,"Orc Arqueiro",ORC_ARCHER,10,.@label$);
		areamonster(.@map$,267,180,277,216,"Senhora Orc",ORC_LADY,10,.@label$);
		areamonster(.@map$,267,180,277,216,"Guerreiro Orc",ORK_WARRIOR,5,.@label$);
		areamonster(.@map$,267,180,277,216,"Filhote de Orc",ORC_BABY,5,.@label$);
		break;
		case 15:
		areamonster(.@map$,352,180,362,216,"Maya",MAYA,1,.@label$);
		areamonster(.@map$,352,180,362,216,"Freeoni",PHREEONI,1,.@label$);
		areamonster(.@map$,352,180,362,216,"Deniro",DENIRO,15,.@label$);
		areamonster(.@map$,352,180,362,216,"Pierre",PIERE,15,.@label$);
		areamonster(.@map$,352,180,362,216,"Andre",ANDRE,15,.@label$);
		areamonster(.@map$,352,180,362,216,"Ovo de André",ANT_EGG,5,.@label$);
		break;
		case 16:
		areamonster(.@map$,9,96,19,132,"Raydric Arqueiro",RAYDRIC_ARCHER,10,.@label$);
		areamonster(.@map$,9,96,19,132,"Orc Arqueiro",ORC_ARCHER,10,.@label$);
		areamonster(.@map$,9,96,19,132,"Gárgula",GARGOYLE,10,.@label$);
		areamonster(.@map$,9,96,19,132,"Esqueleto Arqueiro",ARCHER_SKELETON,10,.@label$);
		break;
		case 17:
		areamonster(.@map$,93,96,103,132,"Tritão",MERMAN,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Baphomet Jr.",BAPHOMET_,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Strouf",STROUF,15,.@label$);
		areamonster(.@map$,93,96,103,132,"Vento da Colina",HILL_WIND,5,.@label$);
		break;
		case 18:
		areamonster(.@map$,181,96,191,132,"Cãibra",CRAMP,25,.@label$);
		areamonster(.@map$,181,96,191,132,"Tarou",TAROU,15,.@label$);
		break;
		case 19:
		areamonster(.@map$,267,96,277,132,"Deviace",DEVIACE,10,.@label$);
		areamonster(.@map$,267,96,277,132,"Megalodon",MEGALODON,10,.@label$);
		areamonster(.@map$,267,96,277,132,"Peixe Espada",SWORD_FISH,10,.@label$);
		areamonster(.@map$,267,96,277,132,"Fen",PHEN,10,.@label$);
		break;
		case 20:
		areamonster(.@map$,352,96,362,132,"Drake",DRAKE,1,.@label$);
		areamonster(.@map$,352,96,362,132,"Esqueleto Pirata",PIRATE_SKEL,50,.@label$);
		break;
		case 21:
		areamonster(.@map$,9,9,19,45,"Plasma",PLASMA_Y,10,.@label$);
		areamonster(.@map$,9,9,19,45,"Plasma",PLASMA_P,10,.@label$);
		areamonster(.@map$,9,9,19,45,"Plasma",PLASMA_G,5,.@label$);
		areamonster(.@map$,9,9,19,45,"Plasma",PLASMA_B,5,.@label$);
		areamonster(.@map$,9,9,19,45,"Plasma",PLASMA_R,5,.@label$);
		break;
		case 22:
		areamonster(.@map$,93,9,103,45,"Muscipular",MUSCIPULAR,15,.@label$);
		areamonster(.@map$,93,9,103,45,"Drosera",DROSERA,15,.@label$);
		areamonster(.@map$,93,9,103,45,"Flora",FLORA,15,.@label$);
		areamonster(.@map$,93,9,103,45,"Hydra",HYDRA,15,.@label$);
		areamonster(.@map$,93,9,103,45,"Mandragora",MANDRAGORA,10,.@label$);
		areamonster(.@map$,93,9,103,45,"Rafflesia",RAFFLESIA,10,.@label$);
		break;
		case 23:
		areamonster(.@map$,181,9,191,45,"Penomena",PENOMENA,15,.@label$);
		areamonster(.@map$,181,9,191,45,"Obeaune",OBEAUNE,10,.@label$);
		areamonster(.@map$,181,9,191,45,"Marte",MARSE,10,.@label$);
		areamonster(.@map$,181,9,191,45,"Peixe Espada",SWORD_FISH,10,.@label$);
		areamonster(.@map$,181,9,191,45,"Hydra",HYDRA,5,.@label$);
		break;
		case 24:
		areamonster(.@map$,267,9,277,45,"Coringa",JOKER,15,.@label$);
		areamonster(.@map$,267,9,277,45,"Carat",CARAT,15,.@label$);
		areamonster(.@map$,267,9,277,45,"Jakk",JAKK,10,.@label$);
		break;
		case 25:
		areamonster(.@map$,352,9,362,45,"Gato de Nove Caudas",CAT_O_NINE_TAIL,15,.@label$);
		areamonster(.@map$,352,9,362,45,"Flor do Luar",MOONLIGHT,1,.@label$);
		areamonster(.@map$,352,9,362,45,"Nove Caudas",NINE_TAIL,15,.@label$);
		break;
		case 26:
		areamonster(.@map$,9,351,19,387,"Árvore Maldita",GIBBET,10,.@label$);
		areamonster(.@map$,9,351,19,387,"Pessegueira Encantada",LIVE_PEACH_TREE,10,.@label$);
		areamonster(.@map$,9,351,19,387,"Golem de Madeira",WOODEN_GOLEM,10,.@label$);
		areamonster(.@map$,9,351,19,387,"Atirador de Pedras",STONE_SHOOTER,10,.@label$);
		areamonster(.@map$,9,351,19,387,"Salgueiro Ancião",ELDER_WILOW,5,.@label$);
		break;
		case 27:
		areamonster(.@map$,93,351,103,387,"Goblin Arqueiro",GOBLIN_ARCHER,10,.@label$);
		areamonster(.@map$,93,351,103,387,"Goblin",GOBLIN_1,10,.@label$);
		areamonster(.@map$,93,351,103,387,"Goblin",GOBLIN_2,5,.@label$);
		areamonster(.@map$,93,351,103,387,"Goblin",GOBLIN_3,5,.@label$);
		areamonster(.@map$,93,351,103,387,"Gobin",GOBLIN_4,5,.@label$);
		areamonster(.@map$,93,351,103,387,"Goblin",GOBLIN_5,5,.@label$);
		break;
		case 28:
		areamonster(.@map$,181,351,191,387,"Arclouse",ARCLOUSE,30,.@label$);
		areamonster(.@map$,181,351,191,387,"Neraid",NERAID,15,.@label$);
		areamonster(.@map$,181,351,191,387,"Pest",PEST,15,.@label$);
		areamonster(.@map$,181,351,191,387,"Kukre",KUKRE,10,.@label$);
		break;
		case 29:
		areamonster(.@map$,267,351,277,387,"Moldura Maldita",DARK_FRAME,10,.@label$);
		areamonster(.@map$,267,351,277,387,"Papel",THE_PAPER,10,.@label$);
		areamonster(.@map$,267,351,277,387,"Poltergeist",HYLOZOIST,10,.@label$);
		areamonster(.@map$,267,351,277,387,"Quve",QUVE,5,.@label$);
		areamonster(.@map$,267,351,277,387,"Lude",LUDE,5,.@label$);
		areamonster(.@map$,267,351,277,387,"Sussurro",WHISPER,10,.@label$);
		break;
		case 30:
		areamonster(.@map$,352,351,362,387,"Lady Branca",BACSOJIN_,1,.@label$);
		areamonster(.@map$,352,351,362,387,"Ninfa Perversa",WICKED_NYMPH,30,.@label$);
		break;
		case 31:
		areamonster(.@map$,9,267,19,303,"Ferrão",GIG,20,.@label$);
		areamonster(.@map$,9,267,19,303,"Mão de Ferro",IRON_FIST,15,.@label$);
		areamonster(.@map$,9,267,19,303,"Argiope",ARGIOPE,10,.@label$);
		areamonster(.@map$,9,267,19,303,"Escorpião",SCORPION,5,.@label$);
		break;
		case 32:
		areamonster(.@map$,93,267,103,303,"Líder Goblin",GOBLIN_LEADER,1,.@label$);
		areamonster(.@map$,93,267,103,303,"Goblin Arqueiro",GOBLIN_ARCHER,10,.@label$);
		areamonster(.@map$,93,267,103,303,"Goblin",GOBLIN_1,10,.@label$);
		areamonster(.@map$,93,267,103,303,"Goblin",GOBLIN_2,5,.@label$);
		areamonster(.@map$,93,267,103,303,"Goblin",GOBLIN_3,5,.@label$);
		areamonster(.@map$,93,267,103,303,"Goblin",GOBLIN_4,5,.@label$);
		areamonster(.@map$,93,267,103,303,"Goblin",GOBLIN_5,5,.@label$);
		break;
		case 33:
		areamonster(.@map$,181,267,191,303,"Líder Kobold",KOBOLD_LEADER,1,.@label$);
		areamonster(.@map$,181,267,191,303,"Kobold Arqueiro",KOBOLD_ARCHER,15,.@label$);
		areamonster(.@map$,181,267,191,303,"Kobold",KOBOLD_1,15,.@label$);
		areamonster(.@map$,181,267,191,303,"Kobold",KOBOLD_2,10,.@label$);
		areamonster(.@map$,181,267,191,303,"Kobold",KOBOLD_3,5,.@label$);
		break;
		case 34:
		areamonster(.@map$,267,267,277,303,"Crânio Flamejante",FLAME_SKULL,20,.@label$);
		areamonster(.@map$,267,267,277,303,"Sussurro",WHISPER,10,.@label$);
		areamonster(.@map$,267,267,277,303,"Cochicho",WHISPER_BOSS,10,.@label$);
		break;
		case 35:
		areamonster(.@map$,352,267,362,303,"General Tartaruga",TURTLE_GENERAL,1,.@label$);
		areamonster(.@map$,352,267,362,303,"Congelador",FREEZER,10,.@label$);
		areamonster(.@map$,352,267,362,303,"Soldado",SOLIDER,10,.@label$);
		areamonster(.@map$,352,267,362,303,"Aquecedor",HEATER,10,.@label$);
		areamonster(.@map$,352,267,362,303,"Batedor",LEIB_OLMAI,10,.@label$);
		break;
		case 36:
		areamonster(.@map$,9,180,19,216,"Anolian",ANOLIAN,30,.@label$);
		areamonster(.@map$,9,180,19,216,"Grove",GREEN_IGUANA,10,.@label$);
		areamonster(.@map$,9,180,19,216,"Crocodilo",ALLIGATOR,10,.@label$);
		break;
		case 37:
		areamonster(.@map$,93,180,103,216,"Gerente",C_TOWER_MANAGER,10,.@label$);
		areamonster(.@map$,93,180,103,216,"Relógio",CLOCK,10,.@label$);
		areamonster(.@map$,93,180,103,216,"Alarme",ALARM,30,.@label$);
		break;
		case 38:
		areamonster(.@map$,181,180,191,216,"Palavra Morta",DEATHWORD,25,.@label$);
		areamonster(.@map$,181,180,191,216,"Rideword",RIDEWORD,25,.@label$);
		break;
		case 39:
		areamonster(.@map$,267,180,277,216,"Ninfa Perversa",WICKED_NYMPH,10,.@label$);
		areamonster(.@map$,267,180,277,216,"Mao Guai",CIVIL_SERVANT,10,.@label$);
		areamonster(.@map$,267,180,277,216,"Ermitão Maligno",EVIL_CLOUD_HERMIT,10,.@label$);
		areamonster(.@map$,267,180,277,216,"Zhu Po Long",DANCING_DRAGON,10,.@label$);
		areamonster(.@map$,267,180,277,216,"Jin Guai",LI_ME_MANG_RYANG,5,.@label$);
		break;
		case 40:
		areamonster(.@map$,352,180,362,216,"Samurai Encarnado",INCANTATION_SAMURAI,1,.@label$);
		areamonster(.@map$,352,180,362,216,"Shinobi",SHINOBI,10,.@label$);
		areamonster(.@map$,352,180,362,216,"Tengu",TENGU,10,.@label$);
		areamonster(.@map$,352,180,362,216,"Soldado Atirador",ANTIQUE_FIRELOCK,5,.@label$);
		areamonster(.@map$,352,180,362,216,"Boneca de Miyabi",MIYABI_NINGYO,10,.@label$);
		areamonster(.@map$,352,180,362,216,"Karakasa",KARAKASA,5,.@label$);
		break;
		case 41:
		areamonster(.@map$,9,96,19,132,"Kraben",KRABEN,50,.@label$);
		break;
		case 42:
		areamonster(.@map$,93,96,103,132,"Rochoso",SLEEPER,20,.@label$);
		areamonster(.@map$,93,96,103,132,"Sting",STING,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Mi Gao",INCREASE_SOIL,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Arenoso",SAND_MAN,5,.@label$);
		areamonster(.@map$,93,96,103,132,"Hode",HODE,5,.@label$);
		break;
		case 43:
		areamonster(.@map$,181,96,191,132,"Medusa",MEDUSA,10,.@label$);
		areamonster(.@map$,181,96,191,132,"Sorrateiro",SIDE_WINDER,40,.@label$);
		areamonster(.@map$,181,96,191,132,"Anaconda",ANACONDAQ,5,.@label$);
		areamonster(.@map$,181,96,191,132,"Jibóia",SNAKE,5,.@label$);
		break;
		case 44:
		areamonster(.@map$,267,96,277,132,"Filhote de Hatii",GARM_BABY,20,.@label$);
		areamonster(.@map$,267,96,277,132,"Bafomé Jr",BAPHOMET_,20,.@label$);
		areamonster(.@map$,267,96,277,132,"Filhote de Orc",ORC_BABY,1,.@label$);
		areamonster(.@map$,267,96,277,132,"Filhote de Lobo do Deserto",DESERT_WOLF_B,10,.@label$);
		areamonster(.@map$,267,96,277,132,"Bebê Selvagem",SAVAGE_BABE,10,.@label$);
		break;
		case 45:
		areamonster(.@map$,352,96,362,132,"Osiris",OSIRIS,1,.@label$);
		areamonster(.@map$,352,96,362,132,"Múmia Anciã",ANCIENT_MUMMY,15,.@label$);
		areamonster(.@map$,352,96,362,132,"Verit",VERIT,15,.@label$);
		areamonster(.@map$,352,96,362,132,"Múmia",MUMMY,20,.@label$);
		break;
		case 46:
		areamonster(.@map$,9,9,19,45,"Rastreador",SEEKER,20,.@label$);
		areamonster(.@map$,9,9,19,45,"Beholder",BEHOLDER,20,.@label$);
		break;
		case 47:
		areamonster(.@map$,93,9,103,45,"Exterminador",DELETER,20,.@label$);
		areamonster(.@map$,93,9,103,45,"Deletério",DELETER_,10,.@label$);
		areamonster(.@map$,93,9,103,45,"Petite Voador",PETIT_,10,.@label$);
		areamonster(.@map$,93,9,103,45,"Petite",PETIT,10,.@label$);
		break;
		case 48:
		areamonster(.@map$,181,9,191,45,"Verme Sábio",ANCIENT_WORM,10,.@label$);
		areamonster(.@map$,181,9,191,45,"Múmia Anciã",ANCIENT_MUMMY,10,.@label$);
		areamonster(.@map$,181,9,191,45,"Mímico Antigo",ANCIENT_MIMIC,10,.@label$);
		break;
		case 49:
		areamonster(.@map$,267,9,277,45,"Grizzly",GRIZZLY,20,.@label$);
		areamonster(.@map$,267,9,277,45,"Leib Olmai",LEIB_OLMAI,7,.@label$);
		areamonster(.@map$,267,9,277,45,"Zipper",ZIPPER_BEAR,5,.@label$);
		areamonster(.@map$,267,9,277,45,"Sasquatch",SASQUATCH,5,.@label$);
		areamonster(.@map$,267,9,277,45,"Pé Grande",BIGFOOT,5,.@label$);
		break;
		case 50:
		areamonster(.@map$,352,9,362,45,"Faraó",PHARAOH,1,.@label$);
		areamonster(.@map$,352,9,362,45,"Amon Ra",AMON_RA,1,.@label$);
		areamonster(.@map$,352,9,362,45,"Anubis",ANUBIS,10,.@label$);
		areamonster(.@map$,352,9,362,45,"Marduk",MARDUK,10,.@label$);
		areamonster(.@map$,352,9,362,45,"Matyr",MATYR,10,.@label$);
		break;
		case 51:
		areamonster(.@map$,9,351,19,387,"Diabinho",MINI_DEMON,20,.@label$);
		areamonster(.@map$,9,351,19,387,"Diabólico",DIABOLIC,20,.@label$);
		areamonster(.@map$,9,351,19,387,"Deviruchi",DEVIRUCHI,10,.@label$);
		break;
		case 52:
		areamonster(.@map$,93,351,103,387,"Harpia",HARPY,20,.@label$);
		areamonster(.@map$,93,351,103,387,"Grand Peco",GRAND_PECO,10,.@label$);
		areamonster(.@map$,93,351,103,387,"Borboleta Sanguinária",BLOOD_BUTTERFLY,10,.@label$);
		areamonster(.@map$,93,351,103,387,"Gárgula",GARGOYLE,10,.@label$);
		areamonster(.@map$,93,351,103,387,"Vento da Colina",HILL_WIND_1,5,.@label$);
		areamonster(.@map$,93,351,103,387,"Vento da Colina",HILL_WIND,5,.@label$);
		break;
		case 53:
		areamonster(.@map$,181,351,191,387,"Agressor",ASSULTER,25,.@label$);
		areamonster(.@map$,181,351,191,387,"Shinobi",SHINOBI,30,.@label$);
		break;
		case 54:
		areamonster(.@map$,267,351,277,387,"Chepet",CHEPET,10,.@label$);
		areamonster(.@map$,267,351,277,387,"Marionete",MARIONETTE,10,.@label$);
		areamonster(.@map$,267,351,277,387,"Boneco de Miyabi",MIYABI_NINGYO,10,.@label$);
		break;
		case 55:
		areamonster(.@map$,352,351,362,387,"Medusa",MEDUSA,25,.@label$);
		areamonster(.@map$,352,351,362,387,"Serpente Suprema",DARK_SNAKE_LORD,1,.@label$);
		areamonster(.@map$,352,351,362,387,"Isis",ISIS,15,.@label$);
		areamonster(.@map$,352,351,362,387,"Sorrateiro",SIDE_WINDER,15,.@label$);
		break;
		case 56:
		areamonster(.@map$,9,267,19,303,"Congelador",FREEZER,10,.@label$);
		areamonster(.@map$,9,267,19,303,"Filhote de Hatii",GARM_BABY,10,.@label$);
		areamonster(.@map$,9,267,19,303,"Titã de Gelo",ICE_TITAN,15,.@label$);
		areamonster(.@map$,9,267,19,303,"Yeti",SNOWIER,10,.@label$);
		areamonster(.@map$,9,267,19,303,"Gazeti",GAZETI,10,.@label$);
		break;
		case 57:
		areamonster(.@map$,93,267,103,303,"ArchAngeling",ARCHANGELING,1,.@label$);
		areamonster(.@map$,93,267,103,303,"Deviling",DEVILING,1,.@label$);
		areamonster(.@map$,93,267,103,303,"Angeling",ANGELING,1,.@label$);
		areamonster(.@map$,93,267,103,303,"Ghostring",GHOSTRING,1,.@label$);
		areamonster(.@map$,93,267,103,303,"Mastering",MASTERING,1,.@label$);
		areamonster(.@map$,93,267,103,303,"Metaling",METALING,25,.@label$);
		areamonster(.@map$,93,267,103,303,"Marin",MARIN,5,.@label$);
		areamonster(.@map$,93,267,103,303,"Poporing",POPORING,5,.@label$);
		areamonster(.@map$,93,267,103,303,"Drops",DROPS,5,.@label$);
		break;
		case 58:
		areamonster(.@map$,181,267,191,303,"Phendark",PHENDARK,20,.@label$);
		areamonster(.@map$,181,267,191,303,"Rybio",RYBIO,10,.@label$);
		areamonster(.@map$,181,267,191,303,"Zumbi Prisioneiro",ZOMBIE_PRISONER,10,.@label$);
		areamonster(.@map$,181,267,191,303,"Esqueleto Prisioneiro",SKEL_PRISONER,5,.@label$);
		areamonster(.@map$,181,267,191,303,"Injustiçado",INJUSTICE,5,.@label$);
		break;
		case 59:
		areamonster(.@map$,267,267,277,303,"Mímico Antigo",ANCIENT_MIMIC,30,.@label$);
		areamonster(.@map$,267,267,277,303,"Mímico",MIMIC,20,.@label$);
		areamonster(.@map$,267,267,277,303,"Presente",MYSTCASE,10,.@label$);
		break;
		case 60:
		areamonster(.@map$,352,267,362,303,"Egnigem Cenia",B_YGNIZEM,1,.@label$);
		areamonster(.@map$,352,267,362,303,"Doppelganger",DOPPELGANGER,1,.@label$);
		areamonster(.@map$,352,267,362,303,"Armeyer Dinze",ARMAIA,10,.@label$);
		areamonster(.@map$,352,267,362,303,"Wickebine Tres",WHIKEBAIN,10,.@label$);
		areamonster(.@map$,352,267,362,303,"Laurell Winder",RAWREL,10,.@label$);
		areamonster(.@map$,352,267,362,303,"Kavach Icarus",KAVAC,10,.@label$);
		areamonster(.@map$,352,267,362,303,"Errende Ebecee",EREND,10,.@label$);
		areamonster(.@map$,352,267,362,303,"Egnigem Cenia",OBSIDIAN,10,.@label$);
		break;
		case 61:
		areamonster(.@map$,9,180,19,216,"Agav",AGAV,10,.@label$);
		areamonster(.@map$,9,180,19,216,"Echio",ECHIO,10,.@label$);
		areamonster(.@map$,9,180,19,216,"Isilla",ISILLA,5,.@label$);
		areamonster(.@map$,9,180,19,216,"Yakuza",MOBSTER,10,.@label$);
		areamonster(.@map$,9,180,19,216,"Pasana",PASANA,10,.@label$);
		areamonster(.@map$,9,180,19,216,"Vanberk",VANBERK,5,.@label$);
		break;
		case 62:
		areamonster(.@map$,93,180,103,216,"Andarilho",WANDER_MAN,35,.@label$);
		break;
		case 63:
		areamonster(.@map$,181,180,191,216,"Zumbi Dilacerado",RAGGED_ZOMBIE,20,.@label$);
		areamonster(.@map$,181,180,191,216,"Zumbi Mestre",ZOMBIE_MASTER,10,.@label$);
		areamonster(.@map$,181,180,191,216,"Zumbi Prisioneiro",ZOMBIE_PRISONER,5,.@label$);
		areamonster(.@map$,181,180,191,216,"Orc Zumbi",ORC_ZOMBIE,5,.@label$);
		areamonster(.@map$,181,180,191,216,"Zumbi",ZOMBIE,5,.@label$);
		break;
		case 64:
		areamonster(.@map$,267,180,277,216,"Ungoliant",UNGOLIANT,30,.@label$);
		areamonster(.@map$,267,180,277,216,"Verme Sábio",ANCIENT_WORM,2,.@label$);
		areamonster(.@map$,267,180,277,216,"Lagarta",CATERPILLAR,2,.@label$);
		areamonster(.@map$,267,180,277,216,"Creamy Ameaçador",CREMY_FEAR,2,.@label$);
		areamonster(.@map$,267,180,277,216,"Mantis Assassino",KILLER_MANTIS,2,.@label$);
		areamonster(.@map$,267,180,277,216,"Zangão Gigante",GIANT_HONET,2,.@label$);
		break;
		case 65:
		areamonster(.@map$,352,180,362,216,"Atroce",ATROCE,1,.@label$);
		areamonster(.@map$,352,180,362,216,"Galion",GALION,20,.@label$);
		break;
		case 66:
		areamonster(.@map$,9,96,19,132,"Incubus",INCUBUS,20,.@label$);
		areamonster(.@map$,9,96,19,132,"Aliot",ALIOT,20,.@label$);
		areamonster(.@map$,9,96,19,132,"Injustiçado",INJUSTICE,10,.@label$);
		break;
		case 67:
		areamonster(.@map$,93,96,103,132,"Acidus",ACIDUS_,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Acidus",ACIDUS,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Exterminador",DELETER,5,.@label$);
		areamonster(.@map$,93,96,103,132,"Dragão Mutante",MUTANT_DRAGON,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Petite Voador",PETIT_,5,.@label$);
		break;
		case 68:
		areamonster(.@map$,181,96,191,132,"Golem de Lava",LAVA_GOLEM,10,.@label$);
		areamonster(.@map$,181,96,191,132,"Golem Estalactítico",STALACTIC_GOLEM,10,.@label$);
		areamonster(.@map$,181,96,191,132,"Titã de Gelo",ICE_TITAN,10,.@label$);
		areamonster(.@map$,181,96,191,132,"Golem de Madeira",WOODEN_GOLEM,5,.@label$);
		areamonster(.@map$,181,96,191,132,"Golem",GOLEM,5,.@label$);
		break;
		case 69:
		areamonster(.@map$,267,96,277,132,"Dama da Guarda",OBSERVATION,20,.@label$);
		areamonster(.@map$,267,96,277,132,"Senhora do Abrigo",SHELTER,10,.@label$);
		areamonster(.@map$,267,96,277,132,"Baronesa da Retribuição",RETRIBUTION,10,.@label$);
		areamonster(.@map$,267,96,277,132,"Lady Solace",SOLACE,10,.@label$);
		areamonster(.@map$,267,96,277,132,"Anjo Fajuto",FAKE_ANGEL,10,.@label$);
		break;
		case 70:
		areamonster(.@map$,352,96,362,132,"Orc Herói",ORK_HERO,1,.@label$);
		areamonster(.@map$,352,96,362,132,"Senhor dos Orcs",ORC_LORD,1,.@label$);
		areamonster(.@map$,352,96,362,132,"Filhote de Orc",ORC_BABY,20,.@label$);
		break;
		case 71:
		areamonster(.@map$,9,9,19,45,"Succubus",SUCCUBUS,20,.@label$);
		areamonster(.@map$,9,9,19,45,"Pesadelo Sombrio",NIGHTMARE_TERROR,20,.@label$);
		areamonster(.@map$,9,9,19,45,"Incubus",INCUBUS,20,.@label$);
		areamonster(.@map$,9,9,19,45,"Pesadelo",NIGHTMARE,5,.@label$);
		break;
		case 72:
		areamonster(.@map$,93,9,103,45,"Margaretha Sorin",MAGALETA,10,.@label$);
		areamonster(.@map$,93,9,103,45,"Batedor",PERMETER,10,.@label$);
		areamonster(.@map$,93,9,103,45,"Errende Ebecee",EREND,10,.@label$);
		areamonster(.@map$,93,9,103,45,"Pessegueira Encantada",LIVE_PEACH_TREE,10,.@label$);
		break;
		case 73:
		areamonster(.@map$,181,9,191,45,"Succubus",SUCCUBUS,10,.@label$);
		areamonster(.@map$,181,9,191,45,"Loli Ruri",LOLI_RURI,20,.@label$);
		areamonster(.@map$,181,9,191,45,"Aliza",ALIZA,10,.@label$);
		areamonster(.@map$,181,9,191,45,"Jirtas",ZHERLTHSH,5,.@label$);
		areamonster(.@map$,181,9,191,45,"Alice",ALICE,5,.@label$);
		areamonster(.@map$,181,9,191,45,"Donzela Verde",CHUNG_E,10,.@label$);
		break;
		case 74:
		areamonster(.@map$,267,9,277,45,"Dimik",DIMIK_2,6,.@label$);
		areamonster(.@map$,267,9,277,45,"Dimik",DIMIK_4,6,.@label$);
		areamonster(.@map$,267,9,277,45,"Dimik",DIMIK_3,6,.@label$);
		areamonster(.@map$,267,9,277,45,"Venatu",VENATU_2,6,.@label$);
		areamonster(.@map$,267,9,277,45,"Dimik",DIMIK_1,6,.@label$);
		areamonster(.@map$,267,9,277,45,"Archdam",ARCHDAM,6,.@label$);
		areamonster(.@map$,267,9,277,45,"Venatu",VENATU_3,6,.@label$);
		areamonster(.@map$,267,9,277,45,"Venatu",VENATU_4,6,.@label$);
		areamonster(.@map$,267,9,277,45,"Venatu",VENATU_1,6,.@label$);
		break;
		case 75:
		areamonster(.@map$,352,9,362,45,"Bafomé",BAPHOMET,1,.@label$);
		areamonster(.@map$,352,9,362,45,"Senhor das Trevas",DARK_LORD,1,.@label$);
		areamonster(.@map$,352,9,362,45,"Bafomé Jr.",BAPHOMET_,20,.@label$);
		areamonster(.@map$,352,9,362,45,"Ilusão das Trevas",DARK_ILLUSION,10,.@label$);
		break;
		case 76:
		areamonster(.@map$,9,351,19,387,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,30,.@label$);
		areamonster(.@map$,9,351,19,387,"Pesadelo Sombrio",NIGHTMARE_TERROR,20,.@label$);
		areamonster(.@map$,9,351,19,387,"Pesadelo",NIGHTMARE,10,.@label$);
		break;
		case 77:
		areamonster(.@map$,93,351,103,387,"Banshee",BANSHEE,30,.@label$);
		areamonster(.@map$,93,351,103,387,"Aparição",WRAITH_DEAD,10,.@label$);
		areamonster(.@map$,93,351,103,387,"Druída Maligno",EVIL_DRUID,10,.@label$);
		areamonster(.@map$,93,351,103,387,"Alma Penada",WRAITH,10,.@label$);
		areamonster(.@map$,93,351,103,387,"Xamã do Vento",WIND_GHOST,10,.@label$);
		break;
		case 78:
		areamonster(.@map$,181,351,191,387,"Guardião Espadachim",SWORD_GUARDIAN,5,.@label$);
		areamonster(.@map$,181,351,191,387,"Cavaleiro Sanguinário",BLOODY_KNIGHT,10,.@label$);
		areamonster(.@map$,181,351,191,387,"Cavaleiro do  Abismo",KNIGHT_OF_ABYSS,5,.@label$);
		areamonster(.@map$,181,351,191,387,"Dullahan",DULLAHAN,10,.@label$);
		areamonster(.@map$,181,351,191,387,"Raydric",RAYDRIC,20,.@label$);
		break;
		case 79:
		areamonster(.@map$,267,351,277,387,"Hydrolancer",HYDRO,10,.@label$);
		areamonster(.@map$,267,351,277,387,"Ferus",FERUS,10,.@label$);
		areamonster(.@map$,267,351,277,387,"Ferus",FERUS_,10,.@label$);
		areamonster(.@map$,267,351,277,387,"Deletério",DELETER_,5,.@label$);
		areamonster(.@map$,267,351,277,387,"Petite",PETIT,5,.@label$);
		break;
		case 80:
		areamonster(.@map$,352,351,362,387,"Bispo Decadente",FALLINGBISHOP,1,.@label$);
		areamonster(.@map$,352,351,362,387,"Necromante",NECROMANCER,15,.@label$);
		break;
		case 81:
		areamonster(.@map$,9,267,19,303,"Mysteltainn",MYSTELTAINN,20,.@label$);
		areamonster(.@map$,9,267,19,303,"Tyrfing",TIRFING,20,.@label$);
		areamonster(.@map$,9,267,19,303,"Executor",EXECUTIONER,20,.@label$);
		break;
		case 82:
		areamonster(.@map$,93,267,103,303,"Cavaleiro Sanguinário",BLOODY_KNIGHT,10,.@label$);
		areamonster(.@map$,93,267,103,303,"Agav",AGAV,10,.@label$);
		areamonster(.@map$,93,267,103,303,"Serial Killer",BLOODY_MURDERER,10,.@label$);
		areamonster(.@map$,93,267,103,303,"Skogul",SKOGUL,10,.@label$);
		areamonster(.@map$,93,267,103,303,"Injustiçado",INJUSTICE,10,.@label$);
		break;
		case 83:
		areamonster(.@map$,181,267,191,303,"Skeggiold",SKEGGIOLD,10,.@label$);
		areamonster(.@map$,181,267,191,303,"Ilusão das Trevas",DARK_ILLUSION,10,.@label$);
		areamonster(.@map$,181,267,191,303,"Grifo",GRYPHON,10,.@label$);
		areamonster(.@map$,181,267,191,303,"Quimera",CHIMERA,10,.@label$);
		break;
		case 84:
		areamonster(.@map$,267,267,277,303,"Succubus",SUCCUBUS,10,.@label$);
		areamonster(.@map$,267,267,277,303,"Ilusão das Trevas",DARK_ILLUSION,20,.@label$);
		areamonster(.@map$,267,267,277,303,"Duque Coruja",OWL_DUKE,10,.@label$);
		areamonster(.@map$,267,267,277,303,"Barão Coruja",OWL_BARON,10,.@label$);
		areamonster(.@map$,267,267,277,303,"Incubus",INCUBUS,10,.@label$);
		break;
		case 85:
		areamonster(.@map$,352,267,362,303,"Ifrit",IFRIT,1,.@label$);
		break;
		case 86:
		areamonster(.@map$,9,180,19,216,"Hydrolancer",HYDRO,10,.@label$);
		areamonster(.@map$,9,180,19,216,"Grifo",GRYPHON,10,.@label$);
		areamonster(.@map$,9,180,19,216,"Quimera",CHIMERA,10,.@label$);
		areamonster(.@map$,9,180,19,216,"Majoruros",MAJORUROS,10,.@label$);
		break;
		case 87:
		areamonster(.@map$,93,180,103,216,"Salamandra",SALAMANDER,15,.@label$);
		areamonster(.@map$,93,180,103,216,"Kasa",KASA,20,.@label$);
		areamonster(.@map$,93,180,103,216,"Golem de Lava",LAVA_GOLEM,15,.@label$);
		areamonster(.@map$,93,180,103,216,"Gajomart",GAJOMART,10,.@label$);
		break;
		case 88:
		areamonster(.@map$,181,180,191,216,"Necromante",NECROMANCER,15,.@label$);
		areamonster(.@map$,181,180,191,216,"Anubis",ANUBIS,15,.@label$);
		areamonster(.@map$,181,180,191,216,"Aparição",WRAITH_DEAD,10,.@label$);
		areamonster(.@map$,181,180,191,216,"Múmia Anciã",ANCIENT_MUMMY,10,.@label$);
		areamonster(.@map$,181,180,191,216,"Khalitzburg",KHALITZBURG,10,.@label$);
		break;
		case 89:
		areamonster(.@map$,267,180,277,216,"Odium de Thanatos",THA_ODIUM,6,.@label$);
		areamonster(.@map$,267,180,277,216,"Despero de Thanatos",THA_DESPERO,6,.@label$);
		areamonster(.@map$,267,180,277,216,"Maero de Thanatos",THA_MAERO,6,.@label$);
		areamonster(.@map$,267,180,277,216,"Pesar de Thanatos",THA_DOLOR,6,.@label$);
		break;
		case 90:
		areamonster(.@map$,352,180,362,216,"Valkyrie Randgris",RANDGRIS,1,.@label$);
		areamonster(.@map$,352,180,362,216,"Baronesa da Retribuição",RETRIBUTION,10,.@label$);
		areamonster(.@map$,352,180,362,216,"Lady Solace",SOLACE,10,.@label$);
		areamonster(.@map$,352,180,362,216,"Anjo Fajuto",FAKE_ANGEL,10,.@label$);
		break;
		case 91:
		areamonster(.@map$,9,96,19,132,"Cecil Damon",SHECIL,10,.@label$);
		areamonster(.@map$,9,96,19,132,"Guardião Arqueiro",BOW_GUARDIAN,10,.@label$);
		areamonster(.@map$,9,96,19,132,"Kavach Icarus",KAVAC,30,.@label$);
		break;
		case 92:
		areamonster(.@map$,93,96,103,132,"Kathryne Keyron",KATRINN,15,.@label$);
		areamonster(.@map$,93,96,103,132,"Ancião",ELDER,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Laurell Weinder",RAWREL,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Xamã do Vento",WIND_GHOST,10,.@label$);
		areamonster(.@map$,93,96,103,132,"Marduk",MARDUK,10,.@label$);
		break;
		case 93:
		areamonster(.@map$,181,96,191,132,"Seyren Windsor",SEYREN,15,.@label$);
		areamonster(.@map$,181,96,191,132,"Cavaleiro Sanguinário",BLOODY_KNIGHT,10,.@label$);
		areamonster(.@map$,181,96,191,132,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,10,.@label$);
		areamonster(.@map$,181,96,191,132,"Andarilho",WANDER_MAN,10,.@label$);
		break;
		case 94:
		areamonster(.@map$,267,96,277,132,"Guardião Espadachim",SWORD_GUARDIAN,15,.@label$);
		areamonster(.@map$,267,96,277,132,"Guardião Arqueiro",BOW_GUARDIAN,15,.@label$);
		break;
		case 95:
		areamonster(.@map$,352,96,362,132,"Belzebu",BEELZEBUB,1,.@label$);
		areamonster(.@map$,352,96,362,132,"Mosca Caçadora",HUNTER_FLY,30,.@label$);
		areamonster(.@map$,352,96,362,132,"ChonChon de Aço",STEEL_CHONCHON,5,.@label$);
		areamonster(.@map$,352,96,362,132,"Libélula",DRAGON_FLY,5,.@label$);
		areamonster(.@map$,352,96,362,132,"ChonChon",CHONCHON,5,.@label$);
		break;
		case 96:
		areamonster(.@map$,9,9,19,45,"Valkyrie",G_RANDGRIS,5,.@label$);
		areamonster(.@map$,9,9,19,45,"Skeggiold",SKEGGIOLD_,10,.@label$);
		areamonster(.@map$,9,9,19,45,"Skeggiold",SKEGGIOLD,10,.@label$);
		break;
		case 97:
		areamonster(.@map$,93,9,103,45,"Sombra da Inveja",MOROCC_1,5,.@label$);
		areamonster(.@map$,93,9,103,45,"Sombra da Gula",MOROCC_2,5,.@label$);
		areamonster(.@map$,93,9,103,45,"Sombra da Vaidade",MOROCC_3,5,.@label$);
		areamonster(.@map$,93,9,103,45,"Sombra da Ira",MOROCC_4,5,.@label$);
		break;
		case 98:
		areamonster(.@map$,181,9,191,45,"Kathryne Keyron",KATRINN,2,.@label$);
		areamonster(.@map$,181,9,191,45,"Seyren Windsor",SEYREN,2,.@label$);
		areamonster(.@map$,181,9,191,45,"Margaretha Sorin",MAGALETA,2,.@label$);
		areamonster(.@map$,181,9,191,45,"Eremes Guile",EREMES,2,.@label$);
		areamonster(.@map$,181,9,191,45,"Howard Alt-Eisen",HARWORD,2,.@label$);
		areamonster(.@map$,181,9,191,45,"Cecil Damon",SHECIL,2,.@label$);
		break;
		case 99:
		for(.@i = 1; .@i<=7; ++.@i) {
			.@mob_ran = rand(1,30);
			if (.@mob_ran == 1) {areamonster(.@map$,267,9,277,45,"Kathryne Keyron",KATRINN,2,.@label$);}
			else if (.@mob_ran == 2) {areamonster(.@map$,267,9,277,45,"Seyren Windsor",SEYREN,2,.@label$);}
			else if (.@mob_ran == 3) {areamonster(.@map$,267,9,277,45,"Margaretha Sorin",MAGALETA,2,.@label$);}
			else if (.@mob_ran == 4) {areamonster(.@map$,267,9,277,45,"Eremes Guile",EREMES,2,.@label$);}
			else if (.@mob_ran == 5) {areamonster(.@map$,267,9,277,45,"Howard Alt-Eisen",HARWORD,2,.@label$);}
			else if (.@mob_ran == 6) {areamonster(.@map$,267,9,277,45,"Cecil Damon",SHECIL,2,.@label$);}
			else if (.@mob_ran == 7) {areamonster(.@map$,267,9,277,45,"Sombra da Inveja",MOROCC_1,5,.@label$);}
			else if (.@mob_ran == 8) {areamonster(.@map$,267,9,277,45,"Sombra da Gula",MOROCC_2,5,.@label$);}
			else if (.@mob_ran == 9) {areamonster(.@map$,267,9,277,45,"Sombra da Vaidade",MOROCC_3,5,.@label$);}
			else if (.@mob_ran == 10) {areamonster(.@map$,267,9,277,45,"Sombra da Ira",MOROCC_4,5,.@label$);}
			else if (.@mob_ran == 11) {areamonster(.@map$,267,9,277,45,"Valkyrie",G_RANDGRIS,5,.@label$);}
			else if (.@mob_ran == 12) {areamonster(.@map$,267,9,277,45,"Skeggiold",SKEGGIOLD_,10,.@label$);}
			else if (.@mob_ran == 13) {areamonster(.@map$,267,9,277,45,"Skeggiold",SKEGGIOLD,10,.@label$);}
			else if (.@mob_ran == 14) {areamonster(.@map$,267,9,277,45,"Seyren Windsor",SEYREN,15,.@label$);}
			else if (.@mob_ran == 15) {areamonster(.@map$,267,9,277,45,"Cavaleiro Sanguinário",BLOODY_KNIGHT,10,.@label$);}
			else if (.@mob_ran == 16) {areamonster(.@map$,267,9,277,45,"Cavaleiro do Abismo",KNIGHT_OF_ABYSS,10,.@label$);}
			else if (.@mob_ran == 17) {areamonster(.@map$,267,9,277,45,"Andarilho",WANDER_MAN,10,.@label$);}
			else if (.@mob_ran == 18) {areamonster(.@map$,267,9,277,45,"Espadachim Guardião",SWORD_GUARDIAN,15,.@label$);}
			else if (.@mob_ran == 19) {areamonster(.@map$,267,9,277,45,"Arqueiro Guardião",BOW_GUARDIAN,15,.@label$);}
			else if (.@mob_ran == 20) {areamonster(.@map$,267,9,277,45,"Kathryne Keyron",KATRINN,15,.@label$);}
			else if (.@mob_ran == 21) {areamonster(.@map$,267,9,277,45,"Ancião",ELDER,10,.@label$);}
			else if (.@mob_ran == 22) {areamonster(.@map$,267,9,277,45,"Laurell Weinder",RAWREL,10,.@label$);}
			else if (.@mob_ran == 23) {areamonster(.@map$,267,9,277,45,"Xamã do Vento",WIND_GHOST,10,.@label$);}
			else if (.@mob_ran == 24) {areamonster(.@map$,267,9,277,45,"Marduk",MARDUK,10,.@label$);}
			else if (.@mob_ran == 25) {areamonster(.@map$,267,9,277,45,"Cecil Damon",SHECIL,10,.@label$);}
			else if (.@mob_ran == 26) {areamonster(.@map$,267,9,277,45,"Arqueiro Guardião",BOW_GUARDIAN,10,.@label$);}
			else if (.@mob_ran == 27) {areamonster(.@map$,267,9,277,45,"Kavach Icarus",KAVAC,30,.@label$);}
			else if (.@mob_ran == 28) {areamonster(.@map$,267,9,277,45,"Baronesa da Retribuição",RETRIBUTION,10,.@label$);}
			else if (.@mob_ran == 29) {areamonster(.@map$,267,9,277,45,"Lady Solace",SOLACE,10,.@label$);}
			else {areamonster(.@map$,267,9,277,45,"Anjo Fajuto",FAKE_ANGEL,10,.@label$);}
		}
		break;
	}
	return;
}

// ------------------------------------------------------------------
// - Portais de cada andar
// ------------------------------------------------------------------
function	script	F_Tower_Warp	{
	.@level = getarg(0);
	.@map$ = getarg(1);
	switch (.@level) {
		case 2: warp(.@map$,136,354); break;
		case 3: warp(.@map$,224,354); break;
		case 4: warp(.@map$,310,354); break;
		case 5: warp(.@map$,395,354); break;
		case 6: warp(.@map$,52,270); break;
		case 7: warp(.@map$,136,270); break;
		case 8: warp(.@map$,224,270); break;
		case 9: warp(.@map$,310,270); break;
		case 10: warp(.@map$,395,270); break;
		case 11: warp(.@map$,52,183); break;
		case 12: warp(.@map$,136,183); break;
		case 13: warp(.@map$,224,183); break;
		case 14: warp(.@map$,310,183); break;
		case 15: warp(.@map$,395,183); break;
		case 16: warp(.@map$,52,99); break;
		case 17: warp(.@map$,136,99); break;
		case 18: warp(.@map$,224,99); break;
		case 19: warp(.@map$,310,99); break;
		case 20: warp(.@map$,395,99); break;
		case 21: warp(.@map$,52,12); break;
		case 22: warp(.@map$,136,12); break;
		case 23: warp(.@map$,224,12); break;
		case 24: warp(.@map$,310,12); break;
		case 25: warp(.@map$,395,12); break;
		case 27: warp(.@map$,136,354); break;
		case 28: warp(.@map$,224,354); break;
		case 29: warp(.@map$,310,354); break;
		case 30: warp(.@map$,395,354); break;
		case 31: warp(.@map$,52,270); break;
		case 32: warp(.@map$,136,270); break;
		case 33: warp(.@map$,224,270); break;
		case 34: warp(.@map$,310,270); break;
		case 35: warp(.@map$,395,270); break;
		case 36: warp(.@map$,52,183); break;
		case 37: warp(.@map$,136,183); break;
		case 38: warp(.@map$,224,183); break;
		case 39: warp(.@map$,310,183); break;
		case 40: warp(.@map$,395,183); break;
		case 41: warp(.@map$,52,99); break;
		case 42: warp(.@map$,136,99); break;
		case 43: warp(.@map$,224,99); break;
		case 44: warp(.@map$,310,99); break;
		case 45: warp(.@map$,395,99); break;
		case 46: warp(.@map$,52,12); break;
		case 47: warp(.@map$,136,12); break;
		case 48: warp(.@map$,224,12); break;
		case 49: warp(.@map$,310,12); break;
		case 50: warp(.@map$,395,12); break;
		case 52: warp(.@map$,136,354); break;
		case 53: warp(.@map$,224,354); break;
		case 54: warp(.@map$,310,354); break;
		case 55: warp(.@map$,395,354); break;
		case 56: warp(.@map$,52,270); break;
		case 57: warp(.@map$,136,270); break;
		case 58: warp(.@map$,224,270); break;
		case 59: warp(.@map$,310,270); break;
		case 60: warp(.@map$,395,270); break;
		case 61: warp(.@map$,52,183); break;
		case 62: warp(.@map$,136,183); break;
		case 63: warp(.@map$,224,183); break;
		case 64: warp(.@map$,310,183); break;
		case 65: warp(.@map$,395,183); break;
		case 66: warp(.@map$,52,99); break;
		case 67: warp(.@map$,136,99); break;
		case 68: warp(.@map$,224,99); break;
		case 69: warp(.@map$,310,99); break;
		case 70: warp(.@map$,395,99); break;
		case 71: warp(.@map$,52,12); break;
		case 72: warp(.@map$,136,12); break;
		case 73: warp(.@map$,224,12); break;
		case 74: warp(.@map$,310,12); break;
		case 75: warp(.@map$,395,12); break;
		case 77: warp(.@map$,136,354); break;
		case 78: warp(.@map$,224,354); break;
		case 79: warp(.@map$,310,354); break;
		case 80: warp(.@map$,395,354); break;
		case 81: warp(.@map$,52,270); break;
		case 82: warp(.@map$,136,270); break;
		case 83: warp(.@map$,224,270); break;
		case 84: warp(.@map$,310,270); break;
		case 85: warp(.@map$,395,270); break;
		case 86: warp(.@map$,52,183); break;
		case 87: warp(.@map$,136,183); break;
		case 88: warp(.@map$,224,183); break;
		case 89: warp(.@map$,310,183); break;
		case 90: warp(.@map$,395,183); break;
		case 91: warp(.@map$,52,99); break;
		case 92: warp(.@map$,136,99); break;
		case 93: warp(.@map$,224,99); break;
		case 94: warp(.@map$,310,99); break;
		case 95: warp(.@map$,395,99); break;
		case 96: warp(.@map$,52,12); break;
		case 97: warp(.@map$,136,12); break;
		case 98: warp(.@map$,224,12); break;
		case 99: warp(.@map$,309,12); break;
	}
	return;
}

// ------------------------------------------------------------------
// - Andar 1-25
1@tower,50,360,0	script	Braseiro Imortal#eT	CLEAR_NPC,{
	mes "-A mensagem é gravada no Braseiro Imortal -";
	mes "Aquele que espalha as cinzas da escuridão neste lugar estará um passo mais perto de Naght Sieger, a Sombra dos Reis das Trevas...";
	next;
	setarray(.@level$[1],"26° andar","51° andar","76° andar");
	setarray(.@map$[1],"2@tower","3@tower","4@tower");
	.@i = select("26° andar","51° andar","76° andar");

	if (countitem(Dark_Ashes) < .@i) {
		mes "-Aviso-";
		mes "Para ir ao "+.@level$[.@i]+", você precisa de "+.@i+" Cinza da Escuridão.";
		close;
	}
	delitem(Dark_Ashes,.@i);
	mapannounce(instance_mapname("1@tower"),strcharinfo(PC_NAME)+". Você será teleportado para o "+.@level$[.@i]+" andar.",bc_map,"0x00ff99");
	warp(instance_mapname(.@map$[.@i]),52,354);
	close;

	OnInstanceInit:
	initnpctimer;
	end;

	OnTimer10000:
	mapannounce(instance_mapname("1@tower"),"Aviso : Domesticar um monstro não conta como derrotá-lo.",bc_map,"0xff0000");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
1@tower,29,365,1	script	#1F Controller	CLEAR_NPC,{
	end;

	OnInstanceInit:
	callfunc("F_Tower_Monster",1,instance_mapname("1@tower"),instance_npcname("#1F Controller")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("1@tower");
	.@mob_dead_num = mobcount(.@map$,instance_npcname("#1F Controller")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		initnpctimer;
	} else {
		mapannounce(.@map$,"Monstros vivos no 1° andar - "+.@mob_dead_num,bc_map,"0x00ff99");
		end;
	}

	OnTimer5000:
	mapannounce(instance_mapname("1@tower"),"Todos os monstros no 1° andar foram derrotados.",bc_map,"0xffff00");
	donpcevent(instance_npcname("1FGate102tower")+"::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
1@tower,12,393,0	script	1FGate102tower	WARPNPC,2,2,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
	end;

	OnEnable:
	enablenpc(instance_npcname(strnpcinfo(NPC_NAME)));
	callfunc("F_Tower_Monster",atoi(replacestr(strnpcinfo(NPC_NAME),"FGate102tower","")) + 1,strnpcinfo(NPC_MAP),instance_npcname(strnpcinfo(NPC_NAME))+"::OnMyMobDead");
	end;

	OnTouch_:
	callfunc("F_Tower_Warp",atoi(replacestr(strnpcinfo(NPC_NAME),"FGate102tower","")) + 1,strnpcinfo(NPC_MAP));
	end;

	OnMyMobDead:
	.@map$ = strnpcinfo(NPC_MAP);
	.@level = atoi(replacestr(strnpcinfo(NPC_NAME),"FGate102tower","")) + 1;
	.@mob_dead_num = mobcount(.@map$,instance_npcname(strnpcinfo(NPC_NAME))+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		initnpctimer;
	} else {
		mapannounce(.@map$,"Monstros vivos no "+callsub(L_Display,.@level)+" andar - "+.@mob_dead_num,bc_map,"0x00ff99");
		end;
	}

	OnTimer5000:
	.@level = atoi(replacestr(strnpcinfo(NPC_NAME),"FGate102tower","")) + 1;
	mapannounce(strnpcinfo(NPC_MAP),"Todos os monstros no "+callsub(L_Display,.@level)+" andar foram derrotados..",bc_map,"0xffff00");
	donpcevent(instance_npcname(.@level+"FGate102tower")+"::OnEnable");
	stopnpctimer;
	end;

	L_Display:
	.@mod = getarg(0) % 10;
	if (.@mod == 1 && getarg(0) != 11) {return getarg(0)+"st";}
	else if (.@mod == 2 && getarg(0) != 12) { return getarg(0)+"nd";}
	else if (.@mod == 3 && getarg(0) != 13) { return getarg(0)+"rd";}
	else {return getarg(0)+"th";}
}
1@tower,96,393,0	duplicate(1FGate102tower)	2FGate102tower	WARPNPC,2,2
1@tower,184,393,0	duplicate(1FGate102tower)	3FGate102tower	WARPNPC,2,2
1@tower,270,393,0	duplicate(1FGate102tower)	4FGate102tower	WARPNPC,2,2
1@tower,355,393,0	duplicate(1FGate102tower)	5FGate102tower	WARPNPC,2,2
1@tower,12,309,0	duplicate(1FGate102tower)	6FGate102tower	WARPNPC,2,2
1@tower,96,309,0	duplicate(1FGate102tower)	7FGate102tower	WARPNPC,2,2
1@tower,184,309,0	duplicate(1FGate102tower)	8FGate102tower	WARPNPC,2,2
1@tower,270,309,0	duplicate(1FGate102tower)	9FGate102tower	WARPNPC,2,2
1@tower,355,309,0	duplicate(1FGate102tower)	10FGate102tower	WARPNPC,2,2
1@tower,12,222,0	duplicate(1FGate102tower)	11FGate102tower	WARPNPC,2,2
1@tower,96,222,0	duplicate(1FGate102tower)	12FGate102tower	WARPNPC,2,2
1@tower,184,222,0	duplicate(1FGate102tower)	13FGate102tower	WARPNPC,2,2
1@tower,270,222,0	duplicate(1FGate102tower)	14FGate102tower	WARPNPC,2,2
1@tower,355,222,0	duplicate(1FGate102tower)	15FGate102tower	WARPNPC,2,2
1@tower,12,138,0	duplicate(1FGate102tower)	16FGate102tower	WARPNPC,2,2
1@tower,96,138,0	duplicate(1FGate102tower)	17FGate102tower	WARPNPC,2,2
1@tower,184,138,0	duplicate(1FGate102tower)	18FGate102tower	WARPNPC,2,2
1@tower,270,138,0	duplicate(1FGate102tower)	19FGate102tower	WARPNPC,2,2
1@tower,355,138,0	duplicate(1FGate102tower)	20FGate102tower	WARPNPC,2,2
1@tower,12,51,0	duplicate(1FGate102tower)	21FGate102tower	WARPNPC,2,2
1@tower,96,51,0	duplicate(1FGate102tower)	22FGate102tower	WARPNPC,2,2
1@tower,184,51,0	duplicate(1FGate102tower)	23FGate102tower	WARPNPC,2,2
1@tower,270,51,0	duplicate(1FGate102tower)	24FGate102tower	WARPNPC,2,2

// ------------------------------------------------------------------
1@tower,355,51,0	script	25FGate102tower	WARPNPC,2,2,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("25FGate102tower"));
	end;

	OnEnable:
	enablenpc(instance_npcname("25FGate102tower"));
	initnpctimer;
	end;

	OnTouch_:
	getitem(Dark_Ashes,1);
	warp(instance_mapname("2@tower"),52,354);
	end;

	OnTimer120000:
	disablenpc(instance_npcname("25FGate102tower"));
	donpcevent(instance_npcname("25FGate102tower-2")+"::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
1@tower,355,51,0	script	25FGate102tower-2	WARPNPC,2,2,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("25FGate102tower-2"));
	end;

	OnEnable:
	enablenpc(instance_npcname("25FGate102tower-2"));
	end;

	OnTouch_:
	warp(instance_mapname("2@tower"),52,354);
	end;
}

// ------------------------------------------------------------------
1@tower,71,4,0	script	#Broadcast Mode1	CLEAR_NPC,{
	end;

	OnInstanceInit:
	initnpctimer;
	end;

	OnTimer15000:
	OnTimer60000:
	mapannounce(instance_mapname("1@tower"),"Aviso : Caso um monstro for derrotado em qualquer situação anormal, você não poderá avançar para o próximo nível!",bc_map,"0xff0000");
	end;
	OnTimer120000:
	mapannounce(instance_mapname("1@tower"),"Aviso : Caso um monstro for derrotado em qualquer situação anormal, você não poderá avançar para o próximo nível",bc_map,"0xff0000");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
// - Andar 26-50
// ------------------------------------------------------------------
2@tower,29,365,2	script	Fornalha Imortal#1	CLEAR_NPC,{
	end;

	OnInstanceInit:
	callfunc("F_Tower_Monster",26,instance_mapname("2@tower"),instance_npcname("Fornalha Imortal#1")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("2@tower");
	.@mob_dead_num = mobcount(.@map$,instance_npcname("Fornalha Imortal#1")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		initnpctimer;
	}
	else {
		mapannounce(.@map$,"Monstros vivos no 26° andar - "+.@mob_dead_num,bc_map,"0x00ff99");
		end;
	}

	OnTimer5000:
	mapannounce(instance_mapname("2@tower"),"Todos os montros do 26° andar foram derrotados.",bc_map,"0xffff00");
	donpcevent(instance_npcname("26FGate102tower")+"::OnEnable");
	stopnpctimer;
	end;
}

2@tower,12,393,0	duplicate(1FGate102tower)	26FGate102tower	WARPNPC,2,2
2@tower,96,393,0	duplicate(1FGate102tower)	27FGate102tower	WARPNPC,2,2
2@tower,184,393,0	duplicate(1FGate102tower)	28FGate102tower	WARPNPC,2,2
2@tower,270,393,0	duplicate(1FGate102tower)	29FGate102tower	WARPNPC,2,2
2@tower,355,393,0	duplicate(1FGate102tower)	30FGate102tower	WARPNPC,2,2
2@tower,12,309,0	duplicate(1FGate102tower)	31FGate102tower	WARPNPC,2,2
2@tower,96,309,0	duplicate(1FGate102tower)	32FGate102tower	WARPNPC,2,2
2@tower,184,309,0	duplicate(1FGate102tower)	33FGate102tower	WARPNPC,2,2
2@tower,270,309,0	duplicate(1FGate102tower)	34FGate102tower	WARPNPC,2,2
2@tower,355,309,0	duplicate(1FGate102tower)	35FGate102tower	WARPNPC,2,2
2@tower,12,222,0	duplicate(1FGate102tower)	36FGate102tower	WARPNPC,2,2
2@tower,96,222,0	duplicate(1FGate102tower)	37FGate102tower	WARPNPC,2,2
2@tower,184,222,0	duplicate(1FGate102tower)	38FGate102tower	WARPNPC,2,2
2@tower,270,222,0	duplicate(1FGate102tower)	39FGate102tower	WARPNPC,2,2
2@tower,355,222,0	duplicate(1FGate102tower)	40FGate102tower	WARPNPC,2,2
2@tower,12,138,0	duplicate(1FGate102tower)	41FGate102tower	WARPNPC,2,2
2@tower,96,138,0	duplicate(1FGate102tower)	42FGate102tower	WARPNPC,2,2
2@tower,184,138,0	duplicate(1FGate102tower)	43FGate102tower	WARPNPC,2,2
2@tower,270,138,0	duplicate(1FGate102tower)	44FGate102tower	WARPNPC,2,2
2@tower,355,138,0	duplicate(1FGate102tower)	45FGate102tower	WARPNPC,2,2
2@tower,12,51,0	duplicate(1FGate102tower)	46FGate102tower	WARPNPC,2,2
2@tower,96,51,0	duplicate(1FGate102tower)	47FGate102tower	WARPNPC,2,2
2@tower,184,51,0	duplicate(1FGate102tower)	48FGate102tower	WARPNPC,2,2
2@tower,270,51,0	duplicate(1FGate102tower)	49FGate102tower	WARPNPC,2,2

// ------------------------------------------------------------------
2@tower,355,51,0	script	50FGate102tower	WARPNPC,2,2,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("50FGate102tower"));
	end;

	OnEnable:
	enablenpc(instance_npcname("50FGate102tower"));
	initnpctimer;
	end;

	OnTouch_:
	getitem(Dark_Ashes,1);
	warp(instance_mapname("3@tower"),52,354);
	end;

	OnTimer120000:
	disablenpc(instance_npcname("50FGate102tower"));
	donpcevent(instance_npcname("50FGate102tower-2")+"::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
2@tower,355,51,0	script	50FGate102tower-2	WARPNPC,2,2,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("50FGate102tower-2"));
	end;

	OnEnable:
	enablenpc(instance_npcname("50FGate102tower-2"));
	end;

	OnTouch_:
	warp(instance_mapname("3@tower"),52,354);
	end;
}

// ------------------------------------------------------------------
3@tower,29,365,2	script	Fornalha Imortal#2	CLEAR_NPC,{
	end;

	OnInstanceInit:
	callfunc("F_Tower_Monster",51,instance_mapname("3@tower"),instance_npcname("Fornalha Imortal#2")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("3@tower");
	.@mob_dead_num = mobcount(.@map$,instance_npcname("Fornalha Imortal#2")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		initnpctimer;
	}
	else {
		mapannounce(.@map$,"Monstros vivos no 51° Andar - "+.@mob_dead_num,bc_map,"0x00ff99");
		end;
	}

	OnTimer5000:
	mapannounce(instance_mapname("3@tower"),"Todos os montros do 51° Andar foram derrotados.",bc_map,"0xffff00");
	donpcevent(instance_npcname("51FGate102tower")+"::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
3@tower,12,393,0	duplicate(1FGate102tower)	51FGate102tower	WARPNPC,2,2
3@tower,96,393,0	duplicate(1FGate102tower)	52FGate102tower	WARPNPC,2,2
3@tower,184,393,0	duplicate(1FGate102tower)	53FGate102tower	WARPNPC,2,2
3@tower,270,393,0	duplicate(1FGate102tower)	54FGate102tower	WARPNPC,2,2
3@tower,355,393,0	duplicate(1FGate102tower)	55FGate102tower	WARPNPC,2,2
3@tower,12,309,0	duplicate(1FGate102tower)	56FGate102tower	WARPNPC,2,2
3@tower,96,309,0	duplicate(1FGate102tower)	57FGate102tower	WARPNPC,2,2
3@tower,184,309,0	duplicate(1FGate102tower)	58FGate102tower	WARPNPC,2,2
3@tower,270,309,0	duplicate(1FGate102tower)	59FGate102tower	WARPNPC,2,2
3@tower,355,309,0	duplicate(1FGate102tower)	60FGate102tower	WARPNPC,2,2
3@tower,12,222,0	duplicate(1FGate102tower)	61FGate102tower	WARPNPC,2,2
3@tower,96,222,0	duplicate(1FGate102tower)	62FGate102tower	WARPNPC,2,2
3@tower,184,222,0	duplicate(1FGate102tower)	63FGate102tower	WARPNPC,2,2
3@tower,270,222,0	duplicate(1FGate102tower)	64FGate102tower	WARPNPC,2,2
3@tower,355,222,0	duplicate(1FGate102tower)	65FGate102tower	WARPNPC,2,2
3@tower,12,138,0	duplicate(1FGate102tower)	66FGate102tower	WARPNPC,2,2
3@tower,96,138,0	duplicate(1FGate102tower)	67FGate102tower	WARPNPC,2,2
3@tower,184,138,0	duplicate(1FGate102tower)	68FGate102tower	WARPNPC,2,2
3@tower,270,138,0	duplicate(1FGate102tower)	69FGate102tower	WARPNPC,2,2
3@tower,355,138,0	duplicate(1FGate102tower)	70FGate102tower	WARPNPC,2,2
3@tower,12,51,0	duplicate(1FGate102tower)	71FGate102tower	WARPNPC,2,2
3@tower,96,51,0	duplicate(1FGate102tower)	72FGate102tower	WARPNPC,2,2
3@tower,184,51,0	duplicate(1FGate102tower)	73FGate102tower	WARPNPC,2,2
3@tower,270,51,0	duplicate(1FGate102tower)	74FGate102tower	WARPNPC,2,2

// ------------------------------------------------------------------
// - Andar 51-75
3@tower,355,51,0	script	75FGate102tower	WARPNPC,1,1,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("75FGate102tower"));
	end;

	OnEnable:
	enablenpc(instance_npcname("75FGate102tower"));
	initnpctimer;
	end;

	OnTouch_:
	getitem(Dark_Ashes,1);
	warp(instance_mapname("4@tower"),52,354);
	end;

	OnTimer120000:
	disablenpc(instance_npcname("75FGate102tower"));
	donpcevent(instance_npcname("75FGate102tower-2")+"::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
3@tower,355,51,0	script	75FGate102tower-2	WARPNPC,2,2,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("75FGate102tower-2"));
	end;

	OnEnable:
	enablenpc(instance_npcname("75FGate102tower-2"));
	end;

	OnTouch_:
	warp(instance_mapname("4@tower"),52,354);
	end;
}

// ------------------------------------------------------------------
// - Andar 76-99
// ------------------------------------------------------------------
4@tower,29,365,2	script	Fornalha Imortal#3	CLEAR_NPC,{
	end;

	OnInstanceInit:
	callfunc("F_Tower_Monster",76,instance_mapname("4@tower"),instance_npcname("Fornalha Imortal#3")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("4@tower");
	.@mob_dead_num = mobcount(.@map$,instance_npcname("Fornalha Imortal#3")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		initnpctimer;
	}
	else {
		mapannounce(.@map$,"Monstros vivos no 76° andar - "+.@mob_dead_num,bc_map,"0x00ff99");
		end;
	}

	OnTimer5000:
	mapannounce(instance_mapname("4@tower"),"Todos os montros do 76° andar foram derrotados.",bc_map,"0xffff00");
	donpcevent(instance_npcname("76FGate102tower")+"::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
4@tower,12,393,0	duplicate(1FGate102tower)	76FGate102tower	WARPNPC,2,2
4@tower,96,393,0	duplicate(1FGate102tower)	77FGate102tower	WARPNPC,2,2
4@tower,184,393,0	duplicate(1FGate102tower)	78FGate102tower	WARPNPC,2,2
4@tower,270,393,0	duplicate(1FGate102tower)	79FGate102tower	WARPNPC,2,2
4@tower,355,393,0	duplicate(1FGate102tower)	80FGate102tower	WARPNPC,2,2
4@tower,12,309,0	duplicate(1FGate102tower)	81FGate102tower	WARPNPC,2,2
4@tower,96,309,0	duplicate(1FGate102tower)	82FGate102tower	WARPNPC,2,2
4@tower,184,309,0	duplicate(1FGate102tower)	83FGate102tower	WARPNPC,2,2
4@tower,270,309,0	duplicate(1FGate102tower)	84FGate102tower	WARPNPC,2,2
4@tower,355,309,0	duplicate(1FGate102tower)	85FGate102tower	WARPNPC,2,2
4@tower,12,222,0	duplicate(1FGate102tower)	86FGate102tower	WARPNPC,2,2
4@tower,96,222,0	duplicate(1FGate102tower)	87FGate102tower	WARPNPC,2,2
4@tower,184,222,0	duplicate(1FGate102tower)	88FGate102tower	WARPNPC,2,2
4@tower,270,222,0	duplicate(1FGate102tower)	89FGate102tower	WARPNPC,2,2
4@tower,355,222,0	duplicate(1FGate102tower)	90FGate102tower	WARPNPC,2,2
4@tower,12,138,0	duplicate(1FGate102tower)	91FGate102tower	WARPNPC,2,2
4@tower,96,138,0	duplicate(1FGate102tower)	92FGate102tower	WARPNPC,2,2
4@tower,184,138,0	duplicate(1FGate102tower)	93FGate102tower	WARPNPC,2,2
4@tower,270,138,0	duplicate(1FGate102tower)	94FGate102tower	WARPNPC,2,2
4@tower,355,138,0	duplicate(1FGate102tower)	95FGate102tower	WARPNPC,2,2
4@tower,12,51,0	duplicate(1FGate102tower)	96FGate102tower	WARPNPC,2,2
4@tower,96,51,0	duplicate(1FGate102tower)	97FGate102tower	WARPNPC,2,2
4@tower,184,51,0	duplicate(1FGate102tower)	98FGate102tower	WARPNPC,2,2

// ------------------------------------------------------------------
4@tower,271,51,0	script	99FGate102tower	WARPNPC,2,2,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("99FGate102tower"));
	end;

	OnEnable:
	enablenpc(instance_npcname("99FGate102tower"));
	initnpctimer;
	end;

	OnTouch_:
	getitem(Dark_Ashes,1);
	warp(instance_mapname("5@tower"),101,72);
	end;

	OnTimer120000:
	disablenpc(instance_npcname("99FGate102tower"));
	donpcevent(instance_npcname("99FGate102tower-2")+"::OnEnable");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
4@tower,271,51,0	script	99FGate102tower-2	WARPNPC,2,2,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("99FGate102tower-2"));
	end;

	OnEnable:
	enablenpc(instance_npcname("99FGate102tower-2"));
	end;

	OnTouch_:
	warp(instance_mapname("5@tower"),101,72);
	end;
}

// ------------------------------------------------------------------
5@tower,106,109,2	script	Cristal Translúcido#102	CLEAR_NPC,{
	if (in_102tower < 10) {
		mes "^0000ff*Uma misteriosa voz ecoa pela sala dizendo para você tocar o cristal translúcido que está irradiando uma luz forte.*^000000";
		next;
		mes "[Voz Misteriosa]";
		mes "Bem-vindo ao meu lar, intrusos.";
		mes "Eu me diverti vendo vocês suportarem todas as dificuldades que eu tenho posto diante de vocês.";
		next;
		mes "[Voz Misteriosa]";
		mes "Infelizmente, chegou a hora de terminar o show.";
		next;
		mes "[Voz Misteriosa]";
		mes "Ainda é muito cedo para comemorar a vitória contra o meu braço direito Knothen.";
		mes "Porque ele não está completamente destruído!";
		next;
		mes "[Voz Misteriosa]";
		mes "Vou ressuscitá-lo para o próximo show.";
		mes "Derrote-o novamente, e então aceitarei com prazer o desafio de vocês.";
		next;
		mes "[Voz Misteriosa]";
		mes "Até logo.";
		mes "Mais uma vez, havia um bom tempo, os seres humanos.";
		mes "Estou ansioso para vê-los novamente.";
		next;
		mes "^0000ff*Assim que a voz parou de falar.";
		mes "Uma força irresistível o levantou e lhe moveu para algum lugar.*";
		close2;
		in_102tower = 10;
		warp("alberta",223,36);
	} else {
		mes "^0000ff*A peça de cristal irradiando parece acenar para você, assim como da última vez.*^000000";
		next;
		mes "[Voz Misteriosa]";
		mes "Devo ter subestimado você...";
		mes "Eu não esperava vê-l"+(Sex == SEX_MALE ? "o" : "a")+" novamente.";
		next;
		mes "[Voz Misteriosa]";
		mes "Eu posso sentir o seu suor, ouvir os suspiros de cansaço em combate.";
		mes "Ah! O desejo humano pela vitória sempre me excita.";
		next;
		mes "[Voz Misteriosa]";
		mes "Eu agora permito que você venha ao meu encontro.";
		mes "Venha até mim, para o grande Naght Sieger o Rei dos reis das Trevas!";
		close2;
		warp(instance_mapname("6@tower"),32,12);
	}
	end;

	OnInstanceInit:
	OnDisable:
	disablenpc(instance_npcname("Cristal Translúcido#102"));
	end;

	OnEnable:
	enablenpc(instance_npcname("Cristal Translúcido#102"));
	donpcevent(instance_npcname("#102Effect1")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
5@tower,106,109,2	script	#102Effect1	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#102Effect1"));
	end;

	OnDisable:
	disablenpc(instance_npcname("#102Effect1"));
	end;

	OnEnable:
	enablenpc(instance_npcname("#102Effect1"));
	initnpctimer;
	end;

	OnTimer500:
	specialeffect(EF_ENHANCE);
	stopnpctimer;
	donpcevent(instance_npcname("#102Effect2")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
5@tower,106,109,2	script	#102Effect2	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#102Effect2"));
	end;

	OnDisable:
	disablenpc(instance_npcname("#102Effect2"));
	end;

	OnEnable:
	enablenpc(instance_npcname("#102Effect2"));
	initnpctimer;
	end;

	OnTimer500:
	specialeffect(EF_ENHANCE);
	stopnpctimer;
	donpcevent(instance_npcname("#102Effect1")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
5@tower,82,112,2	script	#102FShadowDust1	CLEAR_NPC,{
	end;

	OnInstanceInit:
	donpcevent(instance_npcname("#102FShadowDust")+"::OnEnable");
	monster(instance_mapname("5@tower"),83,85,"Entweihen Crothen",ENTWEIHEN,1,instance_npcname("#102FShadowDust1")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("5@tower");
	.@mob_dead_num = mobcount(.@map$,instance_npcname("#102FShadowDust1")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		mapannounce(instance_mapname("5@tower"),"Voz misteriosa: Quem é você para ousar invadir o meu santuário?!",bc_map,"0xffff00");
		donpcevent(instance_npcname("#102FShadowDust")+"::OnDisable");
		donpcevent(instance_npcname("Cristal Translúcido#102")+"::OnEnable");
	}
	end;
}

// ------------------------------------------------------------------
5@tower,82,113,2	script	#102FShadowDust	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#102FShadowDust"));
	end;

	OnDisable:
	killmonsterall(instance_mapname("5@tower"));
	end;

	OnEnable:
	.@map$ = instance_mapname("5@tower");
	monster(.@map$,72,93,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	monster(.@map$,70,87,"Espinho da Magia",G_ENTWEIHEN_M,1);
	monster(.@map$,68,83,"Espinho da Puresa",G_ENTWEIHEN_S,1);
	monster(.@map$,70,80,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	monster(.@map$,74,81,"Espinho da Magia",G_ENTWEIHEN_M,1);
	monster(.@map$,78,72,"Espinho da Magia",G_ENTWEIHEN_M,1);
	monster(.@map$,81,70,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	monster(.@map$,78,84,"Espinho da Recuperação",G_ENTWEIHEN_H,1);
	monster(.@map$,85,72,"Espinho da Magia",G_ENTWEIHEN_M,1);
	monster(.@map$,91,74,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	monster(.@map$,79,77,"Espinho da Puresa",G_ENTWEIHEN_S,1);
	monster(.@map$,82,80,"Espinho da Recuperação",G_ENTWEIHEN_H,1);
	monster(.@map$,87,83,"Espinho da Recuperação",G_ENTWEIHEN_H,1);
	monster(.@map$,80,92,"Espinho da Puresa",G_ENTWEIHEN_S,1);
	monster(.@map$,81,89,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	monster(.@map$,85,93,"Espinho da Magia",G_ENTWEIHEN_M,1);
	monster(.@map$,86,90,"Espinho da Recuperação",G_ENTWEIHEN_H,1);
	monster(.@map$,88,88,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	monster(.@map$,91,87,"Espinho da Magia",G_ENTWEIHEN_M,1);
	monster(.@map$,95,94,"Espinho da Magia",G_ENTWEIHEN_M,1);
	monster(.@map$,91,96,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	monster(.@map$,90,82,"Espinho da Puresa",G_ENTWEIHEN_S,1);
	monster(.@map$,96,98,"Espinho da Magia",G_ENTWEIHEN_M,1);
	monster(.@map$,83,76,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	monster(.@map$,74,85,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
	switch (rand(1,3)) {
		case 1: monster(.@map$,82,85,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
		case 2: monster(.@map$,82,85,"Espinho da Magia",G_ENTWEIHEN_M,1);
		case 3: monster(.@map$,82,85,"Espinho da Puresa",G_ENTWEIHEN_S,1);
	}
	switch (rand(1,3)) {
		case 1: monster(.@map$,84,85,"Esqueleto Espinhoso",G_ENTWEIHEN_R,1);
		case 2: monster(.@map$,84,85,"Espinho da Magia",G_ENTWEIHEN_M,1);
		case 3: monster(.@map$,84,85,"Espinho da Puresa",G_ENTWEIHEN_S,1);
	}
	end;
}

// ------------------------------------------------------------------
// - Último andar
6@tower,45,89,2	script	Fonte da Vida#1	CLEAR_NPC,{
	mes "^0066ffVocê tomou um gole de água límpida e sentiu-se revigorado.^000000";
	heal ((MaxHp-Hp),(MaxSp-Sp));
	close;

	OnInstanceInit:
	donpcevent(instance_npcname("Fonte da Vida#2")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
6@tower,45,89,2	script	Fonte da Vida#2	CLEAR_NPC,{
	end;

	OnEnable:
	specialeffect(EF_BUBBLE);
	initnpctimer;
	end;

	OnTimer2000:
	stopnpctimer;
	donpcevent(instance_npcname("Fonte da Vida#3")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
6@tower,45,89,2	script	Fonte da Vida#3	CLEAR_NPC,{
	end;

	OnEnable:
	specialeffect(EF_BUBBLE);
	initnpctimer;
	end;

	OnTimer2000:
	stopnpctimer;
	donpcevent(instance_npcname("Fonte da Vida#2")+"::OnEnable");
	end;
}


// ------------------------------------------------------------------
6@tower,32,100,0	warp	102FGate102tower	2,2,6@tower,155,64

// ------------------------------------------------------------------
6@tower,156,151,2	script	Trono do Tirano#	CLEAR_NPC,{
	end;

	OnInstanceInit:
	areamonster(instance_mapname("6@tower"),154,73,156,75,"Anopheles",ANOPHELES,10,instance_npcname("Trono do Tirano#")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@mob_dead_num = mobcount(instance_mapname("6@tower"),instance_npcname("Trono do Tirano#")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		donpcevent(instance_npcname("#1st Beeper")+"::OnEnable");
		disablenpc(instance_npcname("Trono do Tirano#"));
	}
	end;
}

// ------------------------------------------------------------------
6@tower,156,151,2	script	#1st Beeper	CLEAR_NPC,{
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer500:
	mapannounce(instance_mapname("6@tower"),"Hóspedes, hein? Eu espero que vocês venham aqui, sabendo que vocês serão enterrados neste lugar. Se vocês não sabem, bem... é tarde demais!",bc_map,"0x00ffcc");
	end;

	OnTimer5500:
	mapannounce(instance_mapname("6@tower"),"É por isso que vocês, aventureiros, sempre acabam mortos.",bc_map,"0x00ffcc");
	end;

	OnTimer10500:
	mapannounce(instance_mapname("6@tower"),"Eu pretendo aplaudi-los por sua coragem... Mas é claro que, antes, pretendo brincar um pouco com vocês.",bc_map,"0x00ffcc");
	end;

	OnTimer15500:
	mapannounce(instance_mapname("6@tower"),"Sabem, eu gosto de ver seres humanos correndo com medo.",bc_map,"0x00ffcc");
	end;

	OnTimer20500:
	.@map$ = instance_mapname("6@tower");
	mapannounce(.@map$,"Vamos ver quem corre mais rápido. Estão prontos?",bc_map,"0x00ffcc");
	stopnpctimer;
	areamonster(.@map$,151,66,153,106,"Guardião de Ossos",ORC_SKELETON,50,instance_npcname("#1st Beeper")+"::OnMyMobDead");
	areamonster(.@map$,158,66,160,106,"Guardião de Ossos",ORC_SKELETON,50,instance_npcname("#1st Beeper")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("6@tower");
	.@mob_dead_num = mobcount(.@map$,instance_npcname("#1st Beeper")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		donpcevent(instance_npcname("#2nd Beeper")+"::OnEnable");
	} else {
		mapannounce(.@map$,"Monstros vivos "+.@mob_dead_num+"ea",bc_map,"0x00ff99");
		end;
	}
}

// ------------------------------------------------------------------
6@tower,156,151,2	script	#2nd Beeper	CLEAR_NPC,{
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer500:
	mapannounce(instance_mapname("6@tower"),"Bem, acho que eles não foram muito desafiadores para vocês.",bc_map,"0x00ffcc");
	end;

	OnTimer5500:
	mapannounce(instance_mapname("6@tower"),"Vamos acelerar um pouco, vamos?",bc_map,"0x00ffcc");
	end;

	OnTimer10500:
	.@map$ = instance_mapname("6@tower");
	mapannounce(.@map$,"Eu quero bis!",bc_map,"0x00ffcc");
	stopnpctimer;
	areamonster(.@map$,151,66,153,106,"Guardião de Vento",WIND_GHOST,30,instance_npcname("#2nd Beeper")+"::OnMyMobDead");
	areamonster(.@map$,158,66,160,106,"Guardião de Vento",WIND_GHOST,30,instance_npcname("#2nd Beeper")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("6@tower");
	.@mob_dead_num = mobcount(.@map$,instance_npcname("#2nd Beeper")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		donpcevent(instance_npcname("#3rd Beeper")+"::OnEnable");
	}
	else {
		mapannounce(.@map$,"Monstros vivos "+.@mob_dead_num+"ea",bc_map,"0x00ff99");
		end;
	}
}

// ------------------------------------------------------------------
6@tower,156,151,2	script	#3rd Beeper	CLEAR_NPC,{
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer500:
	mapannounce(instance_mapname("6@tower"),"Sim, isso está ficando emocionante!",bc_map,"0x00ffcc");
	end;

	OnTimer5500:
	mapannounce(instance_mapname("6@tower"),"Lembrarei de vocês como uns dos poucos que conseguiram me entreter.",bc_map,"0x00ffcc");
	end;

	OnTimer10500:
	.@map$ = instance_mapname("6@tower");
	mapannounce .@map$,"Como quer jogar comigo o próximo round?",bc_map,"0x00ffcc";
	stopnpctimer;
	areamonster(.@map$,151,66,153,106,"Guardião da Espada Gêmea",KHALITZBURG,20,instance_npcname("#3rd Beeper")+"::OnMyMobDead");
	areamonster(.@map$,158,66,160,106,"Guardião da Espada Gêmea",KHALITZBURG,20,instance_npcname("#3rd Beeper")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	.@map$ = instance_mapname("6@tower");
	.@mob_dead_num = mobcount(.@map$,instance_npcname("#3rd Beeper")+"::OnMyMobDead");
	if (.@mob_dead_num < 1) {
		donpcevent(instance_npcname("#4th Beeper")+"::OnEnable");
	} else {
		mapannounce(.@map$,"Monstros vivos "+.@mob_dead_num+"ea",bc_map,"0x00ff99");
		end;
	}
}

// ------------------------------------------------------------------
6@tower,156,151,2	script	#4th Beeper	CLEAR_NPC,{
	end;

	OnEnable:
	initnpctimer;
	end;

	OnTimer500:
	mapannounce(instance_mapname("6@tower"),"Ok, chegou o momento de fazer a minha aparição!",bc_map,"0x00ffcc");
	end;

	OnTimer5500:
	mapannounce(instance_mapname("6@tower"),"Vocês querem saber quem sou?",bc_map,"0x00ffcc");
	end;

	OnTimer10500:
	.@map$ = instance_mapname("6@tower");
	mapannounce(.@map$,"Saberão em breve. Eu tenho a face da morte!",bc_map,"0x00ffcc");
	stopnpctimer;
	monster(.@map$,156,147,"Nacht Sieger",NAGHT_SIEGER,1,instance_npcname("#4th Beeper")+"::OnMyMobDead");
	end;

	OnMyMobDead:
	donpcevent(instance_npcname("Alma Perdida#102")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
6@tower,169,127,2	script	Alma Perdida#102	4_M_NFDEADSWDMAN,{
	if (checkweight(Knife,1) == 0) {
		mes "Você está carregando muito equipamento.";
		mes "Porque não joga alguns fora e depois retorna?";
		close;
	}
	mes "[Alma Perdida]";
	mes "Foram vocês que nos libertaram do terrível Naght Sieger.";
	next;
	mes "[Alma Perdida]";
	mes "Muito obrigado.";
	mes "Agora podemos escapar deste lugar frio e escuro... para o céu.";
	next;
	if ((countitem(Twin_Edge_B)) && (countitem(Twin_Edge_R))) {
		mes "[Alma Perdida]";
		mes "Ei, você tem os restos de Naght Sieger com você.";
		next;
		mes "[Alma Perdida]";
		mes "Elas podem parecer espadas de uma mão.";
		mes "Mas posso colocá-las juntas para fazer uma de duas mãos se quiser.";
		mes "Essa é a única maneira para que eu possa retribuir-lhes por me libertar.";
		next;
		switch (select("Faça uma espada de 2 mãos","Não, obrigado.")) {
			case 1:
			mes "[Alma Perdida]";
			mes "Bom, então eu vou combiná-las para criar uma espada de duas mãos.";
			next;
			switch (select("Está tudo bem","De maneira nenhuma!")) {
				case 1:
				mes "[Alma Perdida]";
				mes "Bom, então eu vou combiná-las para criar uma espada de duas mãos.";
				next;
				delitem(Twin_Edge_B,1);
				delitem(Twin_Edge_R,1);
				getitem(Violet_Fear,1);
				break;
				case 2:
				mes "[Alma Perdida]";
				mes "Eu acho que você não são tão gananciosos ou ambiciosos quanto aqueles outros aventureiros.";
				next;
				break;
			}
			break;
			case 2:
			mes "[Alma Perdida]";
			mes "Eu acho que você não são tão gananciosos ou ambiciosos quanto aqueles outros aventureiros.";
			next;
			break;
		}
	}
	mes "[Alma Perdida]";
	mes "Eu gostaria de falar mais com vocês, mas eu tenho... Eu tenho que ir agora.";
	next;
	mes "[Lost Souls]";
	mes "Adeus, jovens aventureiros. Desejo-lhes boa sorte.";
	close2;
	warp("alberta",223,36);
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("Alma Perdida#102"));
	end;

	OnEnable:
	initnpctimer;
	enablenpc(instance_npcname("Alma Perdida#102"));
	donpcevent(instance_npcname("#Effect30")+"::OnEnable");
	end;

	OnTimer500:
	mapannounce(instance_mapname("6@tower"),"Isso... isso não pode estar acontecendo! Eu não posso ser derrotado!",bc_map,"0xffff00");
	end;

	OnTimer5500:
	mapannounce(instance_mapname("6@tower"),"Nããão! Minha alma... Meu corpo...! Nããããoo!",bc_map,"0xffff00");
	end;

	OnTimer10500:
	mapannounce(instance_mapname("6@tower"),"O corpo de Naght Sieger se transformou em cinzas escuras que se espalharam ao vento.",bc_map,"0x00ffcc");
	stopnpctimer;
	end;
}

// ------------------------------------------------------------------
6@tower,169,127,2	script	#Effect30	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#Effect30"));
	end;

	OnEnable:
	specialeffect(EF_CONE);
	initnpctimer;
	end;

	OnTimer1000:
	stopnpctimer;
	donpcevent(instance_npcname("#Effect31")+"::OnEnable");
	end;
}

// ------------------------------------------------------------------
6@tower,169,127,2	script	#Effect31	CLEAR_NPC,{
	end;

	OnInstanceInit:
	disablenpc(instance_npcname("#Effect31"));
	end;

	OnEnable:
	specialeffect(EF_CONE);
	initnpctimer;
	end;

	OnTimer1000:
	stopnpctimer;
	donpcevent(instance_npcname("#Effect30")+"::OnEnable");
	end;
}
