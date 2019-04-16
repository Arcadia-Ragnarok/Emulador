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
| - Copyright: Spell Master (29/03/2017)                            |
| - Info: Funcion�rias da Corpora��o Eventos Incr�veis              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	ZondaStaff	FAKE_NPC,{
	cutin("zonda_01",2);
	if (getskilllv(NV_BASIC) < 6) {
		mes "[Funcion�ria]";
		mes "Me desculpe mas voc� deve pelo menos ter suas ^777777Habilidades B�sicas^000000.";
		mes "Ampliadas at� o N�vel 6 para usar nossos servi�os.";
		close2; cutin("",255); end;
	}
	mes "[Funcion�ria]";
	mes "Bem-vind"+(SEX_MALE?"o":"a")+" � Corpora��o Eventos Incr�veis.";
	mes "Nossa equipe est� sempre trabalhando para auxiliar a Corpora��o Kafra em seus servi�os prestados.";
	mes "Como posso ajud�-l"+(Sex == SEX_MALE ? "o":"a")+" hoje?";
	switch (select("Salvar","Usar Armaz�m","Alugar um Carrinho","Cancelar")) {
		case 1: // Salvar
		if (strnpcinfo(NPC_MAP) == "lighthalzen") { savepoint(strnpcinfo(NPC_MAP),94,240); }
		if (strnpcinfo(NPC_MAP) == "hugel") { savepoint(strnpcinfo(NPC_MAP),96,155); }
		if (strnpcinfo(NPC_MAP) == "rachel") { savepoint(strnpcinfo(NPC_MAP),113,137); }
		if (strnpcinfo(NPC_MAP) == "veins") { savepoint(strnpcinfo(NPC_MAP),204,103); }
		mes "[Funcion�ria]";
		mes "Seu ponto de retorno foi salvo.";
		next;
		mes "[Funcion�ria]";
		mes "Agradecemos por voc� utilizar nossos servi�os.";
		close2; cutin("",255); end;
		case 2: // Usar Armaz�m
		if ((Zeny < 40) && (!countitem(Cargo_Free_Ticket))) {
			mes "[Funcion�ria]";
			mes "Me desculpe mas voc� deve possuir pelo menos 40 Zenys.";
			mes "Para pagar a taxa de uso do Armaz�m.";
			close2; cutin("",255); end;
		} else {
			if (#kafra_code) {
				mes "[Funcion�ria]";
				mes "Digite a senha do seu armaz�m";
				input(.@storagecode);
				next;
				if (.@storagecode != #kafra_code) {
					mes "[Funcion�ria]";
					mes "Voc� n�o digitou a senha corretamente.";
					close2; cutin("",255); end;
				}
			}
			mes "[Funcion�ria Kafra]";
			mes "Agradecemos por voc� utilizar nossos servi�os.";
			if (countitem(Cargo_Free_Ticket)) {
				delitem(Cargo_Free_Ticket,1);
			} else {
				Zeny -= 40;
			}
			close2;
			openstorage;
			cutin("",255); end;
		}
		case 3: // Alugar um Carrinho
		if (BaseClass != Job_Merchant) {
			mes "[Funcion�ria]";
			mes "O servi�o de Aluguel de Carrinhos s� est� dispon�vel para mercadores e evolu��es.";
			close2; cutin("",255); end;
		} else if (!getskilllv(MC_PUSHCART)) {
			mes "[Funcion�ria]";
			mes "Desculpe, mas para alugar um carrinho, voc� primeiro deve aprender a habilidade ^777777Usar Carrinho^000000.";
			close2; cutin("",255); end;
		} else if (checkcart() == 1) {
			mes "[Funcion�ria]";
			mes "Vejo que voc� j� possui um carrinho.";
			mes "Assim n�o pode ter outro, o servi�o somente est� dispon�vel em um carrinho para cada cliente.";
			close2; cutin("",255); end;
		} else if (Zeny < 1200) {
			mes "[Funcion�ria]";
			mes "Me desculpe mas voc� deve possuir pelo menos 1.200 Zenys.";
			mes "Para pagar o aluguel do carrinho.";
			close2; cutin("",255); end;
		} else {
			Zeny -= 1200;
			mes "[Funcion�ria]";
			mes "Agradecemos por voc� utilizar nossos servi�os.";
			close2;
			setcart;
			cutin("",255); end;
		}
		case 4: // Cancelar
		mes "[Funcion�ria]";
		mes "Estaremos sempre ao seu dispor para servir-l"+(Sex == SEX_MALE ? "o":"a")+".";
		close2; cutin("",255); end;
	}
}

// ------------------------------------------------------------------
// - [ Duplifica��es ] -
// ------------------------------------------------------------------
lighthalzen,94,248,4	duplicate(ZondaStaff)	Eventos Incr�veis#ZondaLhz	4_M_ZONDAMAN
hugel,88,168,4	duplicate(ZondaStaff)	Eventos Incr�veis#ZondaHug	4_M_ZONDAMAN
rachel,109,138,5	duplicate(ZondaStaff)	Eventos Incr�veis#ZondaRac	4_M_ZONDAMAN
veins,208,128,5	duplicate(ZondaStaff)	Eventos Incr�veis#ZondaVein	4_M_ZONDAMAN
