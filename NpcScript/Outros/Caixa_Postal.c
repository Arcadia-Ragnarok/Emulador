/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |   [ Emulador ]    | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  Ragnarok - Npc Script                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Info: Caixas postais para envio de mensagens                    |
\*-----------------------------------------------------------------*/

-	script	MailBox	FAKE_NPC,{
	mes "[Caixa Postal]";
	mes "Se você deseja usar o serviço de Caixa Postal.";
	mes "Será necessário pagar a quantia de 130 zeny.";
	mes "Você deseja usar sua caixa de Caixa Postal agora?";
	next;
	switch (select("Sim","Não")) {
		case 1:
		mes "[Caixa Postal]";
		if (Zeny < 130) {
			mes "Desculpe, mas você não possui zenys o suficiente";
			mes "A taxa de uso é de 130 Zenys.";
			close;
		}
		mes "Muito obrigado e volte sempre.";
		Zeny -= 130;
		close2;
		openmail;
		end;
		case 2:
		mes "[Caixa Postal]";
		mes "Obrigado e volte sempre.";
		close;
	}
}

// ------------------------------------------------------------------
prontera,146,86,0	duplicate(MailBox)	Caixa Postal#prt	2_POSTBOX
prontera,275,213,0	duplicate(MailBox)	Caixa Postal#prt2	2_POSTBOX
prontera,34,212,0	duplicate(MailBox)	Caixa Postal#prt3	2_POSTBOX

// ------------------------------------------------------------------
geffen,115,67,0	duplicate(MailBox)	Caixa Postal#gef	2_POSTBOX

// ------------------------------------------------------------------
payon,191,104,0	duplicate(MailBox)	Caixa Postal#pay	2_POSTBOX

// ------------------------------------------------------------------
pay_arche,55,127,0	duplicate(MailBox)	Caixa Postal#paya	2_POSTBOX

// ------------------------------------------------------------------
alberta,90,60,0	duplicate(MailBox)	Caixa Postal#alb	2_POSTBOX

// ------------------------------------------------------------------
aldebaran,135,122,0	duplicate(MailBox)	Caixa Postal#alde	2_POSTBOX

// ------------------------------------------------------------------
yuno,148,187,0	duplicate(MailBox)	Caixa Postal#yuno	2_POSTBOX

// ------------------------------------------------------------------
lighthalzen,164,85,0	duplicate(MailBox)	Caixa Postal#lhz	2_POSTBOX

// ------------------------------------------------------------------
einbroch,231,215,0	duplicate(MailBox)	Caixa Postal#ein	2_POSTBOX

// ------------------------------------------------------------------
einbech,182,124,0	duplicate(MailBox)	Caixa Postal#einb	2_POSTBOX

// ------------------------------------------------------------------
comodo,200,150,0	duplicate(MailBox)	Caixa Postal#com	2_POSTBOX

// ------------------------------------------------------------------
hugel,86,168,0	duplicate(MailBox)	Caixa Postal#hug	HIDDEN_NPC

// ------------------------------------------------------------------
rachel,122,146,0	duplicate(MailBox)	Caixa Postal#rac	2_POSTBOX

// ------------------------------------------------------------------
veins,218,123,0	duplicate(MailBox)	Caixa Postal#vei	2_POSTBOX
