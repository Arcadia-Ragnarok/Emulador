/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master (16/03/2017)                            |
| - Info: Faz refine/Aprimoramento de equipamentos.                 |
\*-----------------------------------------------------------------*/

-	script	Refiner	FAKE_NPC,{
	.@npc$ = strnpcinfo(NPC_NAME_VISIBLE);
	mes("[" + .@npc$ + "]\n"
		"Olá meu nome é " + .@npc$ + ",\n"
		"sou um expecialista em realizar aprimoramento em equipamentos.\n"
		"Me diga, existe algum dos seus equipamentos de deseja aprimorar?");
	next;
	switch (select("Cabeça", "Vestimenta", "Capa", "Calçado", "Mão Esquerda", "Mão Direita", "Nada Obrigado")) {
		case 1: .@menuSelect = EQI_HEAD_TOP; break;
		case 2: .@menuSelect = EQI_ARMOR;    break;
		case 3: .@menuSelect = EQI_GARMENT;  break;
		case 4: .@menuSelect = EQI_SHOES;    break;
		case 5: .@menuSelect = EQI_HAND_L;   break;
		case 6: .@menuSelect = EQI_HAND_R;   break;
		case 7:
		mes("[" + .@npc$ + "]\n"
			"Certo, mas sempre que precisar refinar/aprimorar seus equipamentos.\n"
			"Pode me procurar que irei lhe atender com maior prazer.");
		close;
	}
	// Verifica se o item está equipado
	if (!getequipisequiped(.@menuSelect)) {
		mes("[" + .@npc$ + "]\n"
			"Mas você não está equipado com o equipamento para refinar.");
		emotion(e_an);
		close;
	}
	// Verifica se é posível refinar o item
	// Ver database de item: Refine: true/false
	else if (!getequipisenableref(.@menuSelect)) {
		mes("[" + .@npc$ + "]\n"
			"Hunnn...?\n"
			"Esse equipamento não pode ser aprimorado.");
		emotion(e_what);
		close;
	}
	// Verifica se o item já não está refinado até +10
	else if (getequiprefinerycnt(.@menuSelect) >= 10) {
		mes("[" + .@npc$ + "]\n"
			"Esse equipamento já está refinado em seu limite!\n"
			"Sinto muito mas, não consigo mais trabalhar esse item.");
		emotion(e_gasp);
		close;
	} else {
		/* Rack para evitar trapacear o NPC */
		// Guardar os dados do item equipado em uma var
		.@RackItem = getequipid(.@menuSelect);
		// Guardar os dados do refinamento atual do item em uma var
		.@RackRefine = getequiprefinerycnt(.@menuSelect);

		// Atribuir itens e valores de acordo com o nível do equipamento
		switch (getequipweaponlv(.@menuSelect)) {
			case 0: .@requirement = 985;  .@value = 2000;  break; // Armaduras, Capas, Calçados
			case 1: .@requirement = 1010; .@value = 50;    break; // Level 1
			case 2: .@requirement = 1011; .@value = 200;   break; // Level 2
			case 3: .@requirement = 984;  .@value = 5000;  break; // Level 3
			case 4: .@requirement = 984;  .@value = 20000; break; // Level 4
		}
		mes("[" + .@npc$ + "]\n"
			"Para realizar o aprimoramento nesse equipamento eu vou precisar de:\n"
			"De 1 " + getitemname(.@requirement) + " que é necessário para o processo.\n"
			"E vou combrar pela taxa de serviço " + .@value + " Zenys.");
		next;
		mes("[" + .@npc$ + "]\n"
			"Posso aprimorar o equipamento?");
		next;
		switch (select("Sim prossiga", "Não")) {
			case 1:
			if (Zeny < .@value) {
				mes("[" + .@npc$ + "]\n"
					"Mas você não possui Zenys o suficiente.");
				close;
			} else if (countitem(.@requirement) < 1) {
				mes("[" + .@npc$ + "]\n"
					"Vou precisar de pelo menos 1 " + getitemname(.@requirement) + " para fazer o aprimoramento.\n"
					"Volte quando tiver o necessário.");
				close;
			} else if (getequipisequiped(.@menuSelect) == 0) {
				mes("[" + .@npc$ + "]\n"
					"Mas você removeu o item.");
				emotion(e_dots);
				close;
			} else {
				if (getequippercentrefinery(.@menuSelect) < 100) {
					mes("[" + .@npc$ + "]\n"
						"^FF0000Esse item já foi refinado no máximo de segurança.\n"
						"Se tentar aprimora-lo novamente ele pode ser destruído, e perdido para sempre!\n"
						"Junto com cartas e quaisquer elementos adicionados a ele!^000000");
					next;
				}
				mes("[" + .@npc$ + "]\n"
					"Tem ceteza que deseja que eu renine/aprimore esse equipamento?");
				next;
				if (select("Sim", "Não") == 1) {
					if (getequiprefinerycnt(.@menuSelect) != .@RackRefine || getequipid(.@menuSelect) != .@RackItem) {
						mes("[" + .@npc$ + "]\n"
							"Mas você não estava equipado agora a pouco?");
						emotion(e_what);
						close;
					} else if (getequippercentrefinery(.@menuSelect) <= rand(100)) {
						Zeny -= .@value;
						delitem(.@requirement,1);
						failedrefitem(.@menuSelect);
						emotion(e_omg);
						mes("[" + .@npc$ + "]\n"
							"AHHHHHHHHHH!!....\n"
							"^BB0000Seu equipamento de despedaçou enquanto eu estava refinando^000000.");
						next;
						mes("[" + .@npc$ + "]\n"
							"Mas eu te avisei que ele podia ser destruído.\n"
							"É tudo questão de sorte.");
						close;
					} else {
						Zeny -= .@value;
						delitem(.@requirement,1);
						successrefitem(.@menuSelect);
						emotion(e_heh);
						mes("[" + .@npc$ + "]\n"
							"^009900Que beleza!\n"
							"Mais um aprimoramento bem suscedido!");
						close;
					}
				}
				mes("[" + .@npc$ + "]\n"
					"Tudo bem volte quando quiser fazer algum aprimoramento.");
				close;
			}
			case 2:
			mes("[" + .@npc$ + "]\n"
				"Tudo bem volte quando quiser fazer algum aprimoramento.");
			close;
		}
	}
}

prt_in,63,60,0	duplicate(Refiner)	Hollgrehenn#prtRefiner	4_M_03
morocc_in,73,38,6	duplicate(Refiner)	Aragham#mocRefiner	4W_M_03
payon,144,173,5	duplicate(Refiner)	Antonio#payRefiner	4_M_ORIENT01
alberta_in,28,58,0	duplicate(Refiner)	Fredrik#albRefiner	4_M_03
yuno_in01,171,21,4	duplicate(Refiner)	Lambert#yunRefiner	4_M_ORIENT01
ein_in01,24,87,5	duplicate(Refiner)	Manthasman#einRefiner	4_M_DWARF
lhz_in02,282,20,7	duplicate(Refiner)	Fulerr#lhzRefiner	4_M_LGTMAN
