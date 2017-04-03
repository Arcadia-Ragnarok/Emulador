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
| - Desenvolvido por: Spell Master 11/02/2017                       |
| - Nota: Npcs de embarque e desembarque nos aeroplanos             |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Embarque] -
//-------------------------------------------------------------------
-	script	EnterAirship	FAKE_NPC,{
	mes "[Embarque do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao servi�o de embarque do Aeroplano.";
	mes "A taxa do embarque � de 1,200 zeny.";
	mes "Gostaria de utilizar nossos servi�os?";
	next;
	if (select("Embarcar.:Cancelar.") == 1) {
		if (Zeny >= 1200) {
			Zeny -= 1200;
			if (strnpcinfo(NPC_MAP)      == "airport")     { warp "airport",148,51; }
			else if (strnpcinfo(NPC_MAP) == "lhz_airport") { warp "lhz_airport",148,51; }
			else if (strnpcinfo(NPC_MAP) == "y_airport")   { warp "y_airport",148,51; }
			else if (strnpcinfo(NPC_MAP) == "izlude")      { warp "airplane_01",244,58; }
			else if (strnpcinfo(NPC_MAP) == "hugel")       { warp "airplane",244,58; }
			end;
		}
		mes "[Embarque do Aeroporto]";
		mes "Desculpe mas a taxa de embarque custa 1,200 zenys.";
		mes "Volte quando tiver mais dinheiro.";
		close;
	}
	mes "[Embarque do Aeroporto]";
	mes "Tudo bem, tenha um bom dia.";
	close;
}

// - airport (Einbroich)
airport,143,43,5	duplicate(EnterAirship)	Funcion�ria#airportenter1	4_F_01
airport,158,43,5	duplicate(EnterAirship)	Funcion�ria#airportenter2	4_F_01
airport,126,43,5	duplicate(EnterAirship)	Funcion�ria#airportenter3	4_F_01
// - lhz_airport (Lighthalzen)
lhz_airport,143,43,5	duplicate(EnterAirship)	Funcion�ria#lhzairenter1	4_F_01
lhz_airport,158,43,5	duplicate(EnterAirship)	Funcion�ria#lhzairenter2	4_F_01
lhz_airport,126,43,5	duplicate(EnterAirship)	Funcion�ria#lhzairenter3	4_F_01
// - y_airport (Juno/Yuno)
y_airport,143,43,5	duplicate(EnterAirship)	Funcion�ria#yairenter1	4_F_01
y_airport,158,43,5	duplicate(EnterAirship)	Funcion�ria#yairenter2	4_F_01
y_airport,126,43,5	duplicate(EnterAirship)	Funcion�ria#yairenter3	4_F_01
// - Izlude
izlude,206,55,3	duplicate(EnterAirship)	Funcion�ria#izlairenter	4_F_01
// - Hugel
hugel,178,142,0	duplicate(EnterAirship)	Funcion�ria#hugairenter	4_F_01

//---------------------------------------------------------------
// - [Terminal de Juno] -
//---------------------------------------------------------------
y_airport,145,63,5	script	Voos Dom�sticos	4_F_02,{
	mes "[Equipe de Bordo]";
	mes "Voc� gostaria de embarcar no dirig�vel que voa at� Einbroch, Lighthalzen e Hugel?";
	mes "Se sim, deixe que eu te guie at� a �rea de embarque.";
	next;
	if (select("Sim:N�o") == 1) {
		warp "yuno",59,244;
		end;
	}
	mes "[Equipe de Bordo]";
	mes "Muito bem, ent�o.";
	mes "Obrigad"+(Sex?"o":"a")+" por se tornar um cliente, espero que tenha uma viajem divertida.";
	close;
}

y_airport,140,63,5	script	Voos Internacionais	4_F_02,{
	mes "[Equipe de Bordo]";
	mes "Voc� deseja embarcar no dirig�vel que leva at� Juno, Izlude e Rachel?";
	mes "Se sim, deixe que eu te guie at� a �rea de embarque.";
	next;
	if (select("Sim:N�o") == 1) {
		warp "yuno",47,244;
		end;
	}
	mes "[Equipe de Bordo]";
	mes "Muito bem, ent�o.";
	mes "Obrigad"+(Sex?"o":"a")+" por voar conosco, espero uma viajem divertida.";
	close;
}

//---------------------------------------------------------------
// - [Desembarque] -
//---------------------------------------------------------------
-	script	ExitAirship	FAKE_NPC,{
	mes "[Desembarque do Aeroporto]";
	mes "Deseja sair do terminal de embarque?";
	next;
	if (select("Desembarcar:Ficar no terminal") == 1) {
		mes "[Desembarque do Aeroporto]";
		mes "Se voc� sair agora do terminal, ter� que pagar a taxa de embarque novamente.";
		mes "Tem certeza que deseja sair?";
		if (select("Sim:N�o") == 1) {
			if (strnpcinfo(NPC_MAP)      == "airport")     { warp "airport",142,40; }
			else if (strnpcinfo(NPC_MAP) == "lhz_airport") { warp "lhz_airport",142,40; }
			else if (strnpcinfo(NPC_MAP) == "y_airport")   { warp "y_airport",142,40; }
		}
		mes "[Desembarque do Aeroporto]";
		mes "Tudo bem, fique o tempo que desejar.";
		close;
	}
	mes "[Desembarque do Aeroporto]";
	mes "Tudo bem, fique o tempo que desejar.";
	close;
}

// - airport (Einbroch)
airport,143,49,3	duplicate(ExitAirship)	Recepcionista#airportexit1	4_F_01
airport,126,51,3	duplicate(ExitAirship)	Recepcionista#airportexit2	4_F_01
airport,158,50,3	duplicate(ExitAirship)	Recepcionista#airportexit3	4_F_01

// - lhz_airport (Lighthalzen)
lhz_airport,143,49,3	duplicate(ExitAirship)	Recepcionista#lhzairexit1	4_F_01
lhz_airport,126,51,3	duplicate(ExitAirship)	Recepcionista#lhzairexit2	4_F_01
lhz_airport,158,50,3	duplicate(ExitAirship)	Recepcionista#lhzairexit3	4_F_01

// - y_airport (Juno/Yuno)
y_airport,143,49,3	duplicate(ExitAirship)	Recepcionista#yairexit1	4_F_01
y_airport,126,51,3	duplicate(ExitAirship)	Recepcionista#yairexit2	4_F_01
y_airport,158,50,3	duplicate(ExitAirship)	Recepcionista#yairexit3	4_F_01
