/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Entrada e saída da Cidade alta e baixa de Lighthalzen     |
\*-----------------------------------------------------------------*/

lighthalzen,267,200,3	script	Guarda#lhzLaw	4_M_LGTGUARD,{
	if (countitem(Pass)) {
		mes "[Guarda]";
		mes "Pare aí mês...!";
		mes "Oh. Desculpe.";
		mes "Não percebi que você estava com um passe e com autorização.";
		close2;
		warp("lighthalzen",303,229);
		end;
	} else if ($@Lhz_Gangster_Alert >= 100) {
		mes "[Guarda]";
		mes "Ultimamente muitas pessoas estão viajando entre a cidade alta e o gueto.";
		mes "Então estão reforçando a segurança por aqui.";
		mes "Mas como será que tantas pessoas conseguem passar por nós?";
		close;
	} else if ($@Lhz_Gangster_Alert > 14) {
		mes "[Guarda]";
		mes "Ultimamente muitas pessoas estão viajando entre a cidade alta e o gueto.";
		mes "Então estão reforçando a segurança por aqui.";
		mes "Mas como será que tantas pessoas conseguem passar por nós?";
		donpcevent("LawEnforcement#lhz::OnEnable");
		$@Lhz_Gangster_Alert = 100;
		close;
	} else if (gettime(TIME_HOUR) >= 22 || gettime(TIME_HOUR) < 2) {
		mes "[Guarda]";
		mes "Zzzz... Zzz...";
		mes "ZZZzzzzzzzzzz...";
		next;
		mes "^3355FFEsse guarda está no oitavo sono.";
		mes "Esse é o melhor momento para passar por ele.^000000 ";
		close2;
		++$@Lhz_Gangster_Alert;
		warp("lighthalzen",303,229);
		end;
	} else if (rand(1,6) == 3) {
		mes "^3355FFEsse guarda parece distraído e está olhando alguma outra coisa.";
		mes "Agora é a sua chance de passar por ele!^000000 ";
		close2;
		++$@Lhz_Gangster_Alert;
		warp("lighthalzen",303,229);
		end;
	} else {
		mes "[Guarda]";
		mes "Pare bem aí!";
		mes "Não é permitido entrar nas favelas.";
		mes "Volte de onde veio, aventureiro!";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,294,223,7	script	Guarda#2lhzLaw	4_M_LGTGUARD,{
	if (countitem(Pass)) {
		mes "[Guarda]";
		mes "Pare aí mês...!";
		mes "Oh. Desculpe.";
		mes "Não percebi que você estava com um passe e com autorização.";
		close2;
		warp("lighthalzen",260,199);
		end;
	} else if ($@Lhz_Gangster_Alert >= 100) {
		mes "[Guarda]";
		mes "Ultimamente muitas pessoas estão viajando entre a cidade alta e o gueto.";
		mes "Então estão reforçando a segurança por aqui.";
		mes "Mas como será que tantas pessoas conseguem passar por nós?";
		close;
	} else if ($@Lhz_Gangster_Alert > 14) {
		mes "[Guarda]";
		mes "Ultimamente muitas pessoas estão viajando entre a cidade alta e o gueto.";
		mes "Então estão reforçando a segurança por aqui.";
		mes "Mas como será que tantas pessoas conseguem passar por nós?";
		donpcevent("LawEnforcement#lhz::OnEnable");
		$@Lhz_Gangster_Alert = 100;
		close;
	} else if (gettime(TIME_HOUR) >= 22 || gettime(TIME_HOUR) < 2) {
		mes "[Guarda]";
		mes "Zzzz... Zzz...";
		mes "ZZZzzzzzzzzzz...";
		next;
		mes "^3355FFEsse guarda está no oitavo sono.";
		mes "Esse é o melhor momento para passar por ele.^000000 ";
		close2;
		++$@Lhz_Gangster_Alert;
		warp("lighthalzen",260,199);
		end;
	} else if (rand(1,6) == 3) {
		mes "^3355FFEsse guarda parece distraído e está olhando alguma outra coisa.";
		mes "Agora é a sua chance de passar por ele!^000000 ";
		close2;
		++$@Lhz_Gangster_Alert;
		warp("lighthalzen",260,199);
		end;
	} else {
		mes "[Guarda]";
		mes "Pare bem aí!";
		mes "Não é permitido entrar nas favelas.";
		mes "Volte de onde veio, aventureiro!";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,1,1,0	script	LawEnforcement#lhz	FAKE_NPC,{
	end;

	OnEnable:
	mapannounce("lighthalzen","Atenção cidadãos. Nossa segurança foi comprometida e a cidade está em Alerta de Gângster. Procurem abrigo imediatamente!",bc_map);
	initnpctimer;
	for (.@i = 0; .@i < 30; ++.@i)
		monster("lighthalzen",0,0,"Gangster",A_MOBSTER,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnTimer220000:
	killmonster("lighthalzen",strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	mapannounce("lighthalzen","Atenção cidadãos. Nosso departamento de manutenção da lei conseguiu conter a situação. O status de Alerta está cancelado.",bc_map);
	$@Lhz_Gangster_Alert = 0;
	stopnpctimer;
	end;

	OnMyMobDead:
	end;
}
