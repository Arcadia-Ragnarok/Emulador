/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Npcs que levam personagens a locais variados              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [gonryun > gon_fild01 ] - 
// ------------------------------------------------------------------
gonryun,153,64,7	script	Anunciante de Kunlun#gonpasse	4_M_TWMIDMAN,{
	mes "[Jangchungryong]";
	mes "Quando desejar terminar sua visita a Kunlun.";
	mes "Eu irei leva-l"+(Sex == SEX_MALE ? "o":"a")+" para o porto.";
	next;
	if (select("Retornar ao porto","Cancelar") == 1) {
		mes "[Jangchungryong]";
		mes "Eu espero que voc� tenha se divertido conosco.";
		mes "Vamos indo ent�o?";
		close2;
		warp("gon_fild01",258,82);
		end;
	}
	mes "[Jangchungryong]";
	mes "Demore o tempo que quiser aqui.";
	mes "Existem muitos lugares misteriosos em Kunlun para voc� visitar.";
	close;
}

// ------------------------------------------------------------------
// - [comodo > job_duncer ] - 
// ------------------------------------------------------------------
comodo,193,151,4	script	Bor Robin#com	4_M_04,{
	mes "[Bor Robin]";
	mes "Aah....";
	mes "Uma prima donna no centro das aten��es!";
	mes "Vou poder v�-las se transformarem em Odaliscas com meus pr�prios olhos...!";
	mes "Como � bom ser homem neste dia!";
	next;
	mes "[Bor Robin]";
	mes "Mm?";
	mes "Voc� quer ir, tamb�m?";
	mes "� uma boa oportunidade de ver os testes para Odaliscas.";
	next;
	if (select("Vamos para a �rea de troca de classe","Cancelar") == 1) {
		mes "[Bor Robin]";
		mes "Yaay!!";
		close2;
		warp("job_duncer",70,49);
		end;
	}
	mes "[Bor Robin]";
	mes "Huh...";
	mes "Bem, eu n�o posso";
	mes "ajud�-l"+(Sex == SEX_MALE ? "o":"a")+" se voc� n�o quiser me acompanhar.";
	close;
}
