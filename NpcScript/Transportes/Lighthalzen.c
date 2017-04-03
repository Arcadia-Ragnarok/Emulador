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
| - Nota: Acesso as �reas dos laborat�rios em Lighthalzen           |
\*-----------------------------------------------------------------*/

lhz_in01,35,226,5	script	Guarda Rekenber#lhzpass	4_M_LGTGUARD2,{
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Guarda Rekenber]";
		mes "^3355FF(Uau, � um membro da diretoria!)^000000 Bom-dia!";
		close2;
		warp "lhz_in01",37,225;
		end;
	}
	mes "[Guarda Rekenber]";
	mes "Essa � uma �rea restrita!";
	mes "Indentifique-se imediatamente!";
	next;
	if (select("Identificar?","Cancelar") == 1) {
		mes "[Guarda Rekenber]";
		mes "N�o sei como voc�s, aventureiros, fazem as coisas em Rune-Midgards.";
		mes "Mas aqui n�s temos leis sobre invas�o!";
		close;
	}
	mes "[Guarda Rekenber]";
	mes "A n�o ser que voc� tenha autoriza��o especial.";
	mes "N�o pode entrar no Laborat�rio Subterr�neo, por raz�es de seguran�a.";
	close;
}

//-------------------------------------------------------------------
lhz_in01,23,132,3	script	Guarda Rekenber#lhzpass2	4_M_LGTGUARD2,5,5,{
	OnTouch:
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Guarda Rekenber]";
		mes "Mantenha os olhos abertos.";
		mes "Ouvi rumores de que aventureiros de Rune-Midgard est�o tentando se infiltrar aqui!";
		mes "Sei que a seguran�a aqui � muito eficiente, mas mesmo assim...";
		close;
	}
	else {
		mes "Essa � uma �rea restrita ao p�blico!";
		mes "Quem � voc� e como entrou?!";
		mes "Saia daqui imediatamente!";
		close2;
		warp "lhz_in01",33,224;
	}
	end;
}

//-------------------------------------------------------------------
lhz_in01,46,125,3	script	Guarda Rekenber#lhzpass3	4_M_LGTGUARD2,5,5,{
	OnTouch:
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Guarda Rekenber]";
		mes "......................";
		next;
		if (select("Belo dia, n�o?:Cancelar") == 1) {
			mes "[Guarda Rekenber]";
			mes "...";
			emotion e_an;
			close;
		}
		mes "[Guarda Rekenber]";
		mes "...";
		close;
	}
	mes "[Guarda Rekenber]";
	mes "...!";
	emotion e_gasp;
	close2;
	warp "lhz_in01",33,224;
	end;
}

//-------------------------------------------------------------------
lhz_in01,217,121,3	script	Mec�nico#lhzpass	4_M_REPAIR,{
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Mec�nico]";
		mes "N�o � surpresa que esses aparelhos quembrem o tempo todo!";
		mes "Essas m�quinas s�o abusadas totalmente!";
		mes "Ah, ningu�m aprecia todo esse tipo de tecnologia conveniente!";
		next;
		mes "[Mec�nico]";
		mes "Sim, todo esse equipamento de laborat�rio � muito sens�vel, e muito caro.";
		mes "Se voc� for mexer em algo, precisa tomar muito cuidado.";
		close;
	}
	else {
		mes "[Mec�nico]";
		mes "Ei, voc� n�o trabalha...";
		mes "G-guardas! Corram!";
		mes "Tem algu�m aqui!";
		emotion e_gasp;
		close2;
		warp "lhz_in01",33,224;
		end;
	}
}

//-------------------------------------------------------------------
lhz_in01,203,123,3	script	Cientista#lhzpass	4_M_ALCHE_C,{
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Cientista]";
		mes "Certo.";
		mes "Tirar um tubo de teste da m�quina, repor esse outro tubo de teste que est� aqui e depois limpar o primeiro tubo?";
		next;
		mes "[Cientista]";
		mes "Ou eu limpo o tubo de teste, coloco ele na m�quina e depois reponho o outro?";
		mes "Estou t�o confuso com esse procedimento!";
		mes "Se pelo menos eu n�o tivesse perdido as instru��es...";
		close;
	}
	mes "[Cientista]";
	mes "Certo.";
	mes "Tirar um tubo de teste da m�quina, repor esse out...ei.";
	mes "Voc� n�o � o Ralphie.";
	mes "Espera. Guardaaaaaas!";
	mes "Socorro, tem um estranho aqui!";
	emotion e_gasp;
	close2;
	warp "lhz_in01",33,224;
	end;
}

//-------------------------------------------------------------------
lhz_in01,199,137,3	script	Cientista#lhzpass2	4_LGTSCIENCE,{
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Cientista]";
		mes "Por favor n�o toque em nada!";
		mes "Estou mexendo com subst�ncias vol�teis aqui!";
		close;
	}
	mes "[Cientista]";
	mes "Guardas!";
	mes "R�pido, tem algu�m aqui e acho que � um daqueles arruaceiros!";
	mes "Por que, por que eu?!";
	emotion e_gasp;
	close2;
	warp "lhz_in01",33,224;
	end;
}

//-------------------------------------------------------------------
lhz_in01,25,141,4	script	Guarda Regenschirm#lhzpass	4_M_LGTGUARD,{
	mes "[Guarda Regenschirm]";
	if(isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)){
		mes "Voc� quer ir ao subterr�neo?";
		next;
		if(select("Sim:N�o")==1){
			if(isequipped(Lab_Passport)){
				warp "lhz_dun01",150,288;
				end;
			}
			mes "[Guarda Regenschirm]";
			mes "Sinto muito mas n�o posso deixar ningu�m passar sem utoriza��o especial.";
			mes "Apenas membros com Passaportes para o Laborat�rio podem ir ao subterr�neo.";
			close;
		}
		mes "[Guarda Regenschirm]";
		mes "Obrigado e tenha um bom dia.";
		close;
	}
	mes "Essa �rea � restrita ao p�blico!";
	mes "Quem � voc� e como entrou? Saia daqui imediatamente!";
	close2;
	warp "lhz_in01",34,224;
	end;

}