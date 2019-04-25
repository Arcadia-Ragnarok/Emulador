
//-------------------------------------------------------------------
// - Acesso ao santuário de odin...
// - Suporte a quest de mudança de classe para Arcebispo
//-------------------------------------------------------------------
hugel,209,109,2	script	Barqueiro#hugel	4_M_SEAMAN,{
	mes("[Barqueiro]\n"
		"Ah, oi você gostaria de velejar para o Santuário de Odin?\n"
		"A tarifa para 1 passageiro é 800 zeny.\n"
		"O que você me diz?");
	next;
	if (select("Não","Claro, vamos nessa!") == 1) {
		mes("[Barqueiro]\n"
			"Ah, tudo bem.\n"
			"Mas se mudar de ideia pode vim me procurar.");
		close;
	} else {
		if (Zeny < 800) {
			mes("[Barqueiro]\n"
				"Hum?\n"
				"Você não tem bastante dinheiro para pagar a tarifa.\n"
				"Bem, só volte quando você tiver o zeny, então eu te levo para o Santuário de Odin.");
			close;
		} else {
			mes("[Barqueiro]\n"
				"Certo então, suba a bordo!\n"
				"Nós chegaremos logo perto do Santuário de Odin.");
			close2;
			Zeny -= 800;
			warp("odin_tem01",100,146);
			end;
		}
	}
}
