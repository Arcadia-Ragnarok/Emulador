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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Acesso ao subterr�neo do Lago do Abismo                   |
\*-----------------------------------------------------------------*/

hu_fild05,168,304,0	script	Coluna#abyss1	HIDDEN_NPC,{
	mes "^3355FFH� 3 encaixes moldados na superf�cie desta coluna.";
	mes "Parece aquelas certas partes do corpo do drag�o se ajustam perfeitamente nos encaixes.^000000";
	if((countitem(Dragon_Canine)) && (countitem(Dragon_Scale)) && (countitem(Dragon_Train))) {
		next;
		switch(select("Colocar as partes do Drag�o","Ficar com as partes do Drag�o")) {
			case 1:
			mes "^3355FFVoc� coloca o canino cuidadosamente no encaixe, e ent�o voc� ouve um estrondo poderoso dentro da coluna.^000000";
			specialeffect EF_WINDHIT;
			next;
			mes "^3355FFVoc� coloca o canino cuidadosamente no encaixe, e ent�o voc� ouve um estrondo poderoso dentro da coluna.^000000";
			specialeffect EF_WINDHIT;
			next;
			mes "^3355FFVoc� coloca a cabe�a de Drag�o lentamente em outro encaixes, novamente ouve outro tremor dentro da coluna.^000000";
			specialeffect EF_WINDHIT;
			next;
			mes "^3355FFVoc� cudadosamente inserem a Calda do Drag�o no encaixe final.";
			mes "Luzes emanam palas fendas na superf�cie da coluna...^000000";
			specialeffect EF_WINDHIT;
			next;
			mes "^3355FF ch�o em baixo de seus p�s come�a violentamente a tremer.^000000";
			specialeffect EF_BOWLINGBASH;
			donpcevent "AbyssWarp::OnWarp";
			specialeffect2 EF_PORTAL;
			delitem Dragon_Canine,1;
			delitem Dragon_Scale,1;
			delitem Dragon_Train,1;
			close2;
			warp strnpcinfo(NPC_MAP),184,204;
			end;
			case 2:
			mes "Mas nada acontece.";
			next;
			emotion e_rice,1;
			/*delitem Dragon_Canine,1;
			delitem Dragon_Scale,1;
			delitem Dragon_Train,1;*/
			percentheal -10,0;
			close;
		}
	}
	close;
}

//-------------------------------------------------------------------
hu_fild05,171,211,0	script	Coluna#abyss2	HIDDEN_NPC,1,1,{
	mes "^3355FFEsta coluna parece bem parecida com a que voc� viu no lago.";
	mes "H� um enstranho artefato azul na superf�cie.^000000";
	next;
	switch(select("Toque o artefato","Remover o artefato")) {
		case 1:
		mes "^3355FF*Ru�dos*^000000";
		next;
		mes "^3355FFUma luz clara emana do encaixe e a coluna come�a a tremer.";
		mes "Voc� ouve um estrondoso barunho vindo de dentro da coluna.^000000";
		specialeffect EF_WINDHIT;
		next;
		mes "*Ggghhhhhzzzz!*";
		mes "*BAM!*";
		next;
		mes "^3355FFA luz vinda do encaixe dica mais luminosa ainda e voc� sente o ch�o em baixo de seus p�s come�ar a afundar lentamente...^000000";
		next;
		specialeffect EF_BOWLINGBASH;
		specialeffect2 EF_PORTAL;
		close2;
		warp strnpcinfo(NPC_MAP),169,305;
		end;
		case 2:
		mes "^3355FF*Ppppsssh!*";
		mes "Voc� quebrou o artefato acidentalmente.^000000";
		specialeffect EF_WINDHIT;
		next;
		mes "^3355FF*Gggggggghhhhhhhhzzzzzzjjjjhh!*^000000";
		next;
		mes "^3355FFUma luz clara emana do encaixe e a coluna come�a a tremer.";
		mes "O ch�o come�a a termer sendo dif�cil ficar de p�...^000000";
		next;
		specialeffect EF_BOWLINGBASH;
		specialeffect2 EF_PORTAL;
		close2;
		warp strnpcinfo(NPC_MAP),157,284;
		end;
	}
}

//-------------------------------------------------------------------
hu_fild05,196,210,1	script	AbyssWarp	WARPNPC,2,2,{
	OnInit:
	disablenpc "AbyssWarp";
	end;

	OnTouch:
	warp "abyss_01",260,268;
	end;

	OnWarp:
	initnpctimer;
	enablenpc "AbyssWarp";
	end;

	OnTimer30000:
	stopnpctimer;
	disablenpc "AbyssWarp";
	end;
}