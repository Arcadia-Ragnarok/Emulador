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
| - Info: Funcionárias da Corporação Eventos Incríveis              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	ZondaStaff	FAKE_NPC,{
	cutin("zonda_01",2);
	if (getskilllv(NV_BASIC) < 6) {
		mes "[Funcionária]";
		mes "Me desculpe mas você deve pelo menos ter suas ^777777Habilidades Básicas^000000.";
		mes "Ampliadas até o Nível 6 para usar nossos serviços.";
		close2; cutin("",255); end;
	}
	mes "[Funcionária]";
	mes "Bem-vind"+(SEX_MALE?"o":"a")+" à Corporação Eventos Incríveis.";
	mes "Nossa equipe está sempre trabalhando para auxiliar a Corporação Kafra em seus serviços prestados.";
	mes "Como posso ajudá-l"+(Sex == SEX_MALE ? "o":"a")+" hoje?";
	switch (select("Salvar","Usar Armazém","Alugar um Carrinho","Cancelar")) {
		case 1: // Salvar
		if (strnpcinfo(NPC_MAP) == "lighthalzen") { savepoint(strnpcinfo(NPC_MAP),94,240); }
		if (strnpcinfo(NPC_MAP) == "hugel") { savepoint(strnpcinfo(NPC_MAP),96,155); }
		if (strnpcinfo(NPC_MAP) == "rachel") { savepoint(strnpcinfo(NPC_MAP),113,137); }
		if (strnpcinfo(NPC_MAP) == "veins") { savepoint(strnpcinfo(NPC_MAP),204,103); }
		mes "[Funcionária]";
		mes "Seu ponto de retorno foi salvo.";
		next;
		mes "[Funcionária]";
		mes "Agradecemos por você utilizar nossos serviços.";
		close2; cutin("",255); end;
		case 2: // Usar Armazém
		if ((Zeny < 40) && (!countitem(Cargo_Free_Ticket))) {
			mes "[Funcionária]";
			mes "Me desculpe mas você deve possuir pelo menos 40 Zenys.";
			mes "Para pagar a taxa de uso do Armazém.";
			close2; cutin("",255); end;
		} else {
			if (#kafra_code) {
				mes "[Funcionária]";
				mes "Digite a senha do seu armazém";
				input(.@storagecode);
				next;
				if (.@storagecode != #kafra_code) {
					mes "[Funcionária]";
					mes "Você não digitou a senha corretamente.";
					close2; cutin("",255); end;
				}
			}
			mes "[Funcionária Kafra]";
			mes "Agradecemos por você utilizar nossos serviços.";
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
			mes "[Funcionária]";
			mes "O serviço de Aluguel de Carrinhos só está disponível para mercadores e evoluções.";
			close2; cutin("",255); end;
		} else if (!getskilllv(MC_PUSHCART)) {
			mes "[Funcionária]";
			mes "Desculpe, mas para alugar um carrinho, você primeiro deve aprender a habilidade ^777777Usar Carrinho^000000.";
			close2; cutin("",255); end;
		} else if (checkcart() == 1) {
			mes "[Funcionária]";
			mes "Vejo que você já possui um carrinho.";
			mes "Assim não pode ter outro, o serviço somente está disponível em um carrinho para cada cliente.";
			close2; cutin("",255); end;
		} else if (Zeny < 1200) {
			mes "[Funcionária]";
			mes "Me desculpe mas você deve possuir pelo menos 1.200 Zenys.";
			mes "Para pagar o aluguel do carrinho.";
			close2; cutin("",255); end;
		} else {
			Zeny -= 1200;
			mes "[Funcionária]";
			mes "Agradecemos por você utilizar nossos serviços.";
			close2;
			setcart;
			cutin("",255); end;
		}
		case 4: // Cancelar
		mes "[Funcionária]";
		mes "Estaremos sempre ao seu dispor para servir-l"+(Sex == SEX_MALE ? "o":"a")+".";
		close2; cutin("",255); end;
	}
}

// ------------------------------------------------------------------
// - [ Duplificações ] -
// ------------------------------------------------------------------
lighthalzen,94,248,4	duplicate(ZondaStaff)	Eventos Incríveis#ZondaLhz	4_M_ZONDAMAN
hugel,88,168,4	duplicate(ZondaStaff)	Eventos Incríveis#ZondaHug	4_M_ZONDAMAN
rachel,109,138,5	duplicate(ZondaStaff)	Eventos Incríveis#ZondaRac	4_M_ZONDAMAN
veins,208,128,5	duplicate(ZondaStaff)	Eventos Incríveis#ZondaVein	4_M_ZONDAMAN
