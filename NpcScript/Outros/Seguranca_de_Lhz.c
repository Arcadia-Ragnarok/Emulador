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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Entrada e sa�da da Cidade alta e baixa de Lighthalzen     |
\*-----------------------------------------------------------------*/

lighthalzen,267,200,3	script	Guarda#lhzLaw	4_M_LGTGUARD,{
	if (countitem(Pass)) {
		mes "[Guarda]";
		mes "Pare a� m�s...!";
		mes "Oh. Desculpe.";
		mes "N�o percebi que voc� estava com um passe e com autoriza��o.";
		close2;
		warp("lighthalzen",303,229);
		end;
	} else if ($@Lhz_Gangster_Alert >= 100) {
		mes "[Guarda]";
		mes "Ultimamente muitas pessoas est�o viajando entre a cidade alta e o gueto.";
		mes "Ent�o est�o refor�ando a seguran�a por aqui.";
		mes "Mas como ser� que tantas pessoas conseguem passar por n�s?";
		close;
	} else if ($@Lhz_Gangster_Alert > 14) {
		mes "[Guarda]";
		mes "Ultimamente muitas pessoas est�o viajando entre a cidade alta e o gueto.";
		mes "Ent�o est�o refor�ando a seguran�a por aqui.";
		mes "Mas como ser� que tantas pessoas conseguem passar por n�s?";
		donpcevent("LawEnforcement#lhz::OnEnable");
		$@Lhz_Gangster_Alert = 100;
		close;
	} else if (gettime(TIME_HOUR) >= 22 || gettime(TIME_HOUR) < 2) {
		mes "[Guarda]";
		mes "Zzzz... Zzz...";
		mes "ZZZzzzzzzzzzz...";
		next;
		mes "^3355FFEsse guarda est� no oitavo sono.";
		mes "Esse � o melhor momento para passar por ele.^000000 ";
		close2;
		++$@Lhz_Gangster_Alert;
		warp("lighthalzen",303,229);
		end;
	} else if (rand(1,6) == 3) {
		mes "^3355FFEsse guarda parece distra�do e est� olhando alguma outra coisa.";
		mes "Agora � a sua chance de passar por ele!^000000 ";
		close2;
		++$@Lhz_Gangster_Alert;
		warp("lighthalzen",303,229);
		end;
	} else {
		mes "[Guarda]";
		mes "Pare bem a�!";
		mes "N�o � permitido entrar nas favelas.";
		mes "Volte de onde veio, aventureiro!";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,294,223,7	script	Guarda#2lhzLaw	4_M_LGTGUARD,{
	if (countitem(Pass)) {
		mes "[Guarda]";
		mes "Pare a� m�s...!";
		mes "Oh. Desculpe.";
		mes "N�o percebi que voc� estava com um passe e com autoriza��o.";
		close2;
		warp("lighthalzen",260,199);
		end;
	} else if ($@Lhz_Gangster_Alert >= 100) {
		mes "[Guarda]";
		mes "Ultimamente muitas pessoas est�o viajando entre a cidade alta e o gueto.";
		mes "Ent�o est�o refor�ando a seguran�a por aqui.";
		mes "Mas como ser� que tantas pessoas conseguem passar por n�s?";
		close;
	} else if ($@Lhz_Gangster_Alert > 14) {
		mes "[Guarda]";
		mes "Ultimamente muitas pessoas est�o viajando entre a cidade alta e o gueto.";
		mes "Ent�o est�o refor�ando a seguran�a por aqui.";
		mes "Mas como ser� que tantas pessoas conseguem passar por n�s?";
		donpcevent("LawEnforcement#lhz::OnEnable");
		$@Lhz_Gangster_Alert = 100;
		close;
	} else if (gettime(TIME_HOUR) >= 22 || gettime(TIME_HOUR) < 2) {
		mes "[Guarda]";
		mes "Zzzz... Zzz...";
		mes "ZZZzzzzzzzzzz...";
		next;
		mes "^3355FFEsse guarda est� no oitavo sono.";
		mes "Esse � o melhor momento para passar por ele.^000000 ";
		close2;
		++$@Lhz_Gangster_Alert;
		warp("lighthalzen",260,199);
		end;
	} else if (rand(1,6) == 3) {
		mes "^3355FFEsse guarda parece distra�do e est� olhando alguma outra coisa.";
		mes "Agora � a sua chance de passar por ele!^000000 ";
		close2;
		++$@Lhz_Gangster_Alert;
		warp("lighthalzen",260,199);
		end;
	} else {
		mes "[Guarda]";
		mes "Pare bem a�!";
		mes "N�o � permitido entrar nas favelas.";
		mes "Volte de onde veio, aventureiro!";
		close;
	}
}

// ------------------------------------------------------------------
lighthalzen,1,1,0	script	LawEnforcement#lhz	FAKE_NPC,{
	end;

	OnEnable:
	mapannounce("lighthalzen","Aten��o cidad�os. Nossa seguran�a foi comprometida e a cidade est� em Alerta de G�ngster. Procurem abrigo imediatamente!",bc_map);
	initnpctimer;
	for (.@i = 0; .@i < 30; ++.@i)
		monster("lighthalzen",0,0,"Gangster",A_MOBSTER,1,strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	end;

	OnTimer220000:
	killmonster("lighthalzen",strnpcinfo(NPC_NAME)+"::OnMyMobDead");
	mapannounce("lighthalzen","Aten��o cidad�os. Nosso departamento de manuten��o da lei conseguiu conter a situa��o. O status de Alerta est� cancelado.",bc_map);
	$@Lhz_Gangster_Alert = 0;
	stopnpctimer;
	end;

	OnMyMobDead:
	end;
}
