
//-------------------------------------------------------------------
// - Acesso ao santu�rio de odin...
// - Suporte a quest de mudan�a de classe para Arcebispo
//-------------------------------------------------------------------
hugel,209,109,2	script	Barqueiro#hugel	4_M_SEAMAN,{
	mes("[Barqueiro]\n"
		"Ah, oi voc� gostaria de velejar para o Santu�rio de Odin?\n"
		"A tarifa para 1 passageiro � 800 zeny.\n"
		"O que voc� me diz?");
	next;
	if (select("N�o","Claro, vamos nessa!") == 1) {
		mes("[Barqueiro]\n"
			"Ah, tudo bem.\n"
			"Mas se mudar de ideia pode vim me procurar.");
		close;
	} else {
		if (Zeny < 800) {
			mes("[Barqueiro]\n"
				"Hum?\n"
				"Voc� n�o tem bastante dinheiro para pagar a tarifa.\n"
				"Bem, s� volte quando voc� tiver o zeny, ent�o eu te levo para o Santu�rio de Odin.");
			close;
		} else {
			mes("[Barqueiro]\n"
				"Certo ent�o, suba a bordo!\n"
				"N�s chegaremos logo perto do Santu�rio de Odin.");
			close2;
			Zeny -= 800;
			warp("odin_tem01",100,146);
			end;
		}
	}
}
