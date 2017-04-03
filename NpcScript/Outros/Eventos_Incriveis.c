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
| - Desenvolvido por: Spell Master 29/03/2017                       |
| - Nota: Funcion�rias da Corpora��o Eventos Incr�veis              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	ZondaStaff	FAKE_NPC,{
	cutin "zonda_01",2;
	if (getskilllv(NV_BASIC) < 6) {
		mes "[Funcion�ria]";
		mes "Me desculpe mas voc� deve pelo menos ter suas ^777777Habilidades B�sicas^000000.";
		mes "Ampliadas at� o N�vel 6 para usar nossos servi�os.";
		close2; cutin "",255; end;
	}
	mes "[Funcion�ria]";
	mes "Bem-vind"+(SEX_MALE?"o":"a")+" � Corpora��o Eventos Incr�veis.";
	mes "Nossa equipe est� sempre trabalhando para auxiliar a Corpora��o Kafra em seus servi�os prestados.";
	mes "Como posso ajud�-l"+(Sex?"o":"a")+" hoje?";
	switch(select("Salvar","Usar Armaz�m","Alugar um Carrinho","Senha no Armaz�m","Cancelar")) {
		case 1: // Salvar
		if (strnpcinfo(NPC_MAP) == "lighthalzen") { savepoint strnpcinfo(NPC_MAP),94,240; }
		if (strnpcinfo(NPC_MAP) == "hugel") { savepoint strnpcinfo(NPC_MAP),96,155; }
		if (strnpcinfo(NPC_MAP) == "rachel") { savepoint strnpcinfo(NPC_MAP),113,137; }
		if (strnpcinfo(NPC_MAP) == "veins") { savepoint strnpcinfo(NPC_MAP),204,103; }
		mes "[Funcion�ria]";
		mes "Seu ponto de retorno foi salvo.";
		next;
		mes "[Funcion�ria]";
		mes "Agradecemos por voc� utilizar nossos servi�os.";
		close2; cutin "",255; end;
		case 2: // Usar Armaz�m
		if (Zeny < 40) {
			mes "[Funcion�ria]";
			mes "Me desculpe mas voc� deve possuir pelo menos 40 Zenys.";
			mes "Para pagar a taxa de uso do Armaz�m.";
			close2; cutin "",255; end;
		}
		else if (#kafra_code) {
			mes "[Funcion�ria]";
			mes "Digite a senha do seu armaz�m";
			input .@storagecode;
			next;
			if (.@storagecode != #kafra_code) {
				mes "[Funcion�ria]";
				mes "Voc� n�o digitou a senha corretamente.";
				close2; cutin "",255; end;
			}
			else {
				mes "[Funcion�ria]";
				mes "Agradecemos por voc� utilizar nossos servi�os.";
				Zeny -= 40;
				close2;
				openstorage;
				cutin "",255; end;
			}
		}
		else {
			mes "[Funcion�ria]";
			mes "Agradecemos por voc� utilizar nossos servi�os.";
			Zeny -= 40;
			close2;
			openstorage;
			cutin "",255; end;
		}
		case 3: // Alugar um Carrinho
		if (BaseClass != Job_Merchant) {
			mes "[Funcion�ria]";
			mes "O servi�o de Aluguel de Carrinhos s� est� dispon�vel para mercadores e evolu��es.";
			close2; cutin "",255; end;
		}
		else if (getskilllv(MC_PUSHCART) == 0) {
			mes "[Funcion�ria]";
			mes "Desculpe, mas para alugar um carrinho, voc� primeiro deve aprender a habilidade ^777777Usar Carrinho^000000.";
			close2; cutin "",255; end;
		}
		else if (checkcart() == 1) {
			mes "[Funcion�ria]";
			mes "Vejo que voc� j� possui um carrinho.";
			mes "Assim n�o pode ter outro, o servi�o somente est� dispon�vel em um carrinho para cada cliente.";
			close2; cutin "",255; end;
		}
		else {
			if (Zeny < 1200) {
				mes "[Funcion�ria]";
				mes "Me desculpe mas voc� deve possuir pelo menos 1.200 Zenys.";
				mes "Para pagar o aluguel do carrinho.";
				close2; cutin "",255; end;
			}
			else {
				Zeny -= 1200;
				mes "[Funcion�ria]";
				mes "Agradecemos por voc� utilizar nossos servi�os.";
				close2;
				setcart;
				cutin "",255; end;
			}
		}
		case 4: // Senha no Armaz�m
		mes "[Funcion�ria]";
		if (#kafra_code) {
			mes "O que deseja fazer com sua senha do armaz�m?";
			next;
			switch(select("Modificar > 5.000 Zenys","Remover > 1000 Zenys")) {
				case 1:
				mes "[Funcion�ria]";
				if (Zeny < 5000) {
					mes "Me desculpe mas voc� deve possuir pelo menos 5.000 Zenys.";
					mes "Para poder modificar sua senha do armaz�m.";
					close2; cutin "",255; end;
				}
				mes "Por favor digite sua senha atual para verifica��o.";
				input .@storagecode;
				next;
				if (.@storagecode != #kafra_code) {
					mes "[Funcion�ria]";
					mes "Voc� n�o digitou a senha corretamente.";
					close2; cutin "",255; end;
				}
				else {
					mes "[Funcion�ria]";
					mes "Certo agora podemos prosseguir.";
					mes "Por favor digite sua nova senha.";
					mes "Sua senha deve ser maior que ^0000bb1000^000000 e menor que ^7777779999^000000.";
					input .@newstoragecode;
					next;
					if (.@newstoragecode == #kafra_code) {
						mes "[Funcion�ria]";
						mes "Voc� deve digitar uma senha diferente.";
						close2; cutin "",255; end;
					}
					else if ((.@newstoragecode < 1000) || (.@newstoragecode > 9999)) {
						mes "[Funcion�ria]";
						mes "A senha digitada � inv�lida!";
						close2; cutin "",255; end;
					}
					else {
						mes "[Funcion�ria]";
						mes "Sua senha foi modificada.";
						mes "Use-a na pr�xima vez que for usar o armaz�m.";
						Zeny -= 5000;
						#kafra_code = .@newstoragecode;
						next;
						mes "[Funcion�ria]";
						mes "Agradecemos por voc� utilizar nossos servi�os.";
						close2; cutin "",255; end;
					}
				}
				case 2: // Remover a senha
				mes "[Funcion�ria]";
				if (Zeny < 1000) {
					mes "Me desculpe mas voc� deve possuir pelo menos 1.000 Zenys.";
					mes "Para poder remover sua senha do armaz�m.";
					close2; cutin "",255; end;
				}
				mes "Por favor digite sua senha atual para verifica��o.";
				input .@storagecode;
				next;
				if (.@storagecode != #kafra_code) {
					mes "[Funcion�ria]";
					mes "Voc� n�o digitou a senha corretamente.";
					close2; cutin "",255; end;
				}
				else {
					mes "[Funcion�ria]";
					mes "Voc� quer realmenter remover sua senha?!";
					mes "N�o se preocupe, a qualquer momento poder� solicitar outra.";
					next;
					if (select("Sim remover a senha","Manter minha senha") == 1) {
						mes "[Funcion�ria]";
						mes "Sua senha do armaz�m foi removida.";
						Zeny -= 1000;
							#kafra_code = 0;
						next;
						mes "[Funcion�ria Kafra]";
						mes "Agradecemos por voc� utilizar nossos servi�os.";
						close2; cutin "",255; end;
					}
					mes "[Funcion�ria]";
					mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
					close2; cutin "",255; end;
				}
			}
		}
		else {
			mes "No momento seu armaz�m n�o possui senha.";
			mes "Deseja adicionar a senha?";
			next;
			switch(select("Adicionar Senha > 1.000 Zenys","Cancelar")) {
				case 1:
				while (1) {
					mes "[Funcion�ria]";
					mes "Por favor digite a senha para seu armaz�m.";
					mes "Ela deve ser maior que ^0000bb1000^000000 e menor que ^7777779999^000000.";
					input .@storagecode;
					next;
					if ((.@storagecode < 1000) || (.@storagecode > 9999)) {
						mes "[Funcion�ria]";
						mes "A senha digitada � inv�lida!";
						close2; cutin "",255; end;
					}
					else {
						mes "[Funcion�ria]";
						mes "Voc� tem certeza que deseja adicionar a senha ao seu armaz�m?";
						mes "Poder� remover-la ou modificar-la quando quiser.";
						mes "Mas ser� necess�rio digitar a senha que adicionou para confirma��o.";
						next;
						switch(select("Adicionar Senha","Mais Informa��es","Digitar a senha novamente","Cancelar")) {
							case 1:
							Zeny -= 1000;
							#kafra_code = .@storagecode;
							next;
							mes "[Funcion�ria]";
							mes "Agradecemos por voc� utilizar nossos servi�os.";
							close2; cutin "",255; end;
							case 2:
							mes "^bb0000O servi�o de prote��o do armaz�m com senha visa impedir que invasores.";
							mes "Tenham acesso aos itens em seu armaz�m.";
							mes "Por isso ao tentar acessar o armaz�m, modificar a senha ou remover-la.";
							mes "Ser� necess�rio digitar a senha atual antes.^000000";
							next;
							mes "Caso esque�a de sua senha poder� recuperar-la pelo painel de controle do servidor.";
							mes "Inserindo os dados pessoais de sua conta.";
							next;
							if (select("Voltar a digitar a senha","Cancelar") == 2) {
								mes "[Funcion�ria]";
								mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
								close2; cutin "",255; end;
							}
							break;
							case 3:
							break;
							case 4:
							mes "[Funcion�ria]";
							mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
							close2; cutin "",255; end;
						}
					}
				}
				case 2:
				mes "[Funcion�ria]";
				mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
				close2; cutin "",255; end;
			}
		}
		case 5: // Cancelar
		mes "[Funcion�ria]";
		mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
		close2; cutin "",255; end;
	}
}

// ------------------------------------------------------------------
// - [ Duplifica��es ] -
// ------------------------------------------------------------------
lighthalzen,94,248,4	duplicate(ZondaStaff)	Eventos Incr�veis#ZondaLhz	4_M_ZONDAMAN
hugel,88,168,4	duplicate(ZondaStaff)	Eventos Incr�veis#ZondaHug	4_M_ZONDAMAN
rachel,109,138,5	duplicate(ZondaStaff)	Eventos Incr�veis#ZondaRac	4_M_ZONDAMAN
veins,208,128,5	duplicate(ZondaStaff)	Eventos Incr�veis#ZondaVein	4_M_ZONDAMAN