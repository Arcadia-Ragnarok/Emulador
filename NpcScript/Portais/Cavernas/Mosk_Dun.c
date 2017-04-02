/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Vers�o: Spell Master                                            |
| - Nota: Potais na Floresta Encantada                              |
\*-----------------------------------------------------------------*/

mosk_dun01,189,42,0	warp	moscoviawarp0501	1,1,mosk_fild02,190,254

mosk_dun01,170,164,3	script	Pedra Marcada#1	HIDDEN_NPC,{
	mes "- Est� escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Esses que servem o Sol morrer�o, V� para o Norte. -^000000";
	close;
}

mosk_dun01,207,276,3	script	Pedra Marcada#1-2	HIDDEN_NPC,{
	mes "- Est� escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que ava�am pode ser sofrido, mas por ser corajoso de cora��o, esses que movem atr�s permanecer�o seguros.";
	mes "Se voc� tiver coragem, pise adiante.";
	mes "Caso contr�rio, pise para tr�s. -^000000";
	next;
	if(select("Pisar para frente.:Ficar.") == 1) {
		mes "- Voc� segue ao modo de antes. -";
		close2;
		warp "mosk_dun02",165,30;
		end;
	}
	mes "- Voc� n�o avan�a. -";
	close;
}

mosk_dun01,264,191,3	script	Pedra Marcada#1-3	HIDDEN_NPC,{
	mes "- Est� escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que ava�am pode ser sofrido, mas por ser corajoso de cora��o, esses que movem atr�s permanecer�o seguros.";
	mes "Se voc� tiver coragem, pise adiante.";
	mes "Caso contr�rio, pise para tr�s. -^000000";
	next;
	if(select("Pisar para frente.:Ficar.") == 1) {
		mes "- Voc� segue ao modo de antes. -";
		close2;
		warp "mosk_dun03",117,36;
		end;
	}
	mes "- Voc� n�o avan�a. -";
	close;
}

// ------------------------------------------------------------------
mosk_dun02,53,220,4	script	#babayagain	WARPNPC,1,1,{
	end;
	OnTouch:
	if (mos_nowinter == 11) {
		donpcevent "Soldado 1#mos::OnEnable";
		donpcevent "Soldado 2#mos::OnEnable";
		donpcevent "Soldado 3#mos::OnEnable";
		mes "[Soldado]";
		mes "Pare a� mesmo!";
		next;
		mes "[Soldado]";
		mes "N�s temos informa��o que voc� tem se comunicado secretamente com Baba Yaga, o Terr�vel.";
		next;
		mes "[Soldado]";
		mes "Se voc� tiver algo que dizer, fale com o Csar.";
		mes "Venha conosco.";
		close2;
		donpcevent "Soldado 1#mos::OnInit";
		donpcevent "Soldado 2#mos::OnInit";
		donpcevent "Soldado 3#mos::OnInit";
		mos_nowinter = 12;
		warp "mosk_in",125,92;
		end;
	}
	else if (mos_nowinter == 12) {
		donpcevent "Soldado 1#mos::OnEnable";
		donpcevent "Soldado 2#mos::OnEnable";
		donpcevent "Soldado 3#mos::OnEnable";
		mes "[Soldado]";
		mes "N�s esperamos que voc� aparecesse novamente.";
		mes "Qual foi o neg�cio com o Csar?";
		next;
		if(select("Fugir.:Explicar a situa��o.") == 1) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu deveria dar o fora daqui...";
			close2;
			warp strnpcinfo(NPC_MAP),100,100;
			donpcevent "Soldado 1#mos::OnInit";
			donpcevent "Soldado 2#mos::OnInit";
			donpcevent "Soldado 3#mos::OnInit";
			end;
		}
		mes "-Voc� explica o que aconteceu at� agora.-";
		next;
		mes "[Soldado]";
		mes "Se voc� tiver algo que dizer, fale com o Csar.";
		mes "Mas se deixar este lugar, voc� ser� considerado nosso inimigo.";
		close2;
		donpcevent "Soldado 1#mos::OnInit";
		donpcevent "Soldado 2#mos::OnInit";
		donpcevent "Soldado 3#mos::OnInit";
		end;
	}
	else if (mos_nowinter == 13) {
		donpcevent "Soldado 1#mos::OnEnable";
		donpcevent "Soldado 2#mos::OnEnable";
		donpcevent "Soldado 3#mos::OnEnable";
		mes "[Soldado]";
		mes "N�s esperamos que voc� aparecesse novamente.";
		mes "Qual foi o neg�cio com o Csar?";
		next;
		if(select("Fugir.:Explicar a situa��o") == 1) {
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Eu deveria dar o fora daqui...";
			close2;
			warp strnpcinfo(NPC_MAP),100,100;
			donpcevent "Soldado 1#mos::OnInit";
			donpcevent "Soldado 2#mos::OnInit";
			donpcevent "Soldado 3#mos::OnInit";
			end;
		}
		mes "-Voc� explica o que aconteceu at� agora.-";
		next;
		mes "[Soldado]";
		mes "Se voc� tiver algo que dizer, fale com o Csar.";
		mes "Mas se deixar este lugar, voc� ser� considerado nosso inimigo.";
		close2;
		donpcevent "Soldado 1#mos::OnInit";
		donpcevent "Soldado 2#mos::OnInit";
		donpcevent "Soldado 3#mos::OnInit";
		end;
	}
	else {
		warp "mosk_in",215,41;
		end;
	}
}

mosk_dun02,53,215,3	script	Soldado 1#mos	4_M_RUSKNIGHT,{
	mes "[Soldado]";
	mes "N�s somos os soldados do Csar.";
	mes "N�s somos convocados para emerg�ncias, n�o nos perturbe mais.";
	close;
	OnInit:
	hideonnpc "Soldado 1#mos";
	end;
	OnEnable:
	hideoffnpc "Soldado 1#mos";
	end;
}

mosk_dun02,50,217,3	script	Soldado 2#mos	4_M_RUSKNIGHT,{
	mes "[Soldado]";
	mes "N�s somos os soldados do Csar.";
	mes "N�s somos convocados para emerg�ncias, n�o nos perturbe mais.";
	close;
	OnInit:
	hideonnpc "Soldado 2#mos";
	end;
	OnEnable:
	hideoffnpc "Soldado 2#mos";
	end;
}

mosk_dun02,56,217,5	script	Soldado 3#mos	4_M_RUSKNIGHT,{
	mes "[Soldado]";
	mes "N�s somos os soldados do Csar.";
	mes "N�s somos convocados para emerg�ncias, n�o nos perturbe mais.";
	close;
	OnInit:
	hideonnpc "Soldado 3#mos";
	end;
	OnEnable:
	hideoffnpc "Soldado 3#mos";
	end;
}

mosk_dun02,168,28,3	script	Pedra Marcada#2-1	HIDDEN_NPC,{
	mes "- Est� escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que ava�am pode ser sofrido, mas por ser corajoso de cora��o, esses que movem atr�s permanecer�o seguros.";
	mes "Se voc� tiver coragem, pise adiante.";
	mes "Caso contr�rio, pise para tr�s. -^000000";
	next;
	if(select("Pisar para frente.:Ficar.") == 1) {
		mes "- Voc� segue ao modo de antes. -";
		close2;
		warp "mosk_dun01",201,269;
		end;
	}
	mes "- Voc� n�o avan�a. -";
	close;
}

mosk_dun02,268,117,3	script	Pedra Marcada#2-3	HIDDEN_NPC,{
	mes "- Est� escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que ava�am pode ser sofrido, mas por ser corajoso de cora��o, esses que movem atr�s permanecer�o seguros.";
	mes "Se voc� tiver coragem, pise adiante.";
	mes "Caso contr�rio, pise para tr�s. -^000000";
	next;
	if(select("Pisar para frente.:Ficar.") == 1) {
		mes "- Voc� segue ao modo de antes. -";
		close2;
		warp "mosk_dun03",32,135;
		end;
	}
	mes "- Voc� n�o avan�a. -";
	close;
}

// ------------------------------------------------------------------
mosk_dun03,27,131,3	script	Pedra Marcada#3-2	HIDDEN_NPC,{
	mes "- Est� escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que permanecem podem morrer, mas ganhar� honra, esses que voltam podem sofrer mas ganhar�o coragem.";
	mes "Esses que t�m coragem voltar�o, caso contr�rio pise adiante. -^000000";
	next;
	if(select("Para tr�s.:FIcar.") == 1) {
		mes "- Voc� sente perigo e decide voltar -";
		close2;
		warp "mosk_dun02",262,118;
		end;
	}
	mes "- Voc� decide ficar. -";
	close;
}

mosk_dun03,119,46,3	script	Pedra Marcada#3-1	HIDDEN_NPC,{
	mes "- Est� escrito na pedra bem grande. -";
	next;
	mes "^3131FF- Aqueles que permanecem podem morrer, mas ganhar� honra, esses que voltam podem sofrer mas ganhar�o coragem.";
	mes "Esses que t�m coragem voltar�o, caso contr�rio pise adiante. -^000000";
	next;
	if(select("Para tr�s.:FIcar.") == 1) {
		mes "- Voc� sente perigo e decide voltar -";
		close2;
		warp "mosk_dun01",257,190;
		end;
	}
	mes "- Voc� decide ficar. -";
	close;
}