/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Por: Spell Master 15/03/2017                                    |
| - Nota: Adiciona Slots(Encaiaxes) em equipamentos                 |
| - Observa��es: Esse npc faz o que os conhecidos Seiyablem/Leablem |
|                fazem, mas em um �nico npc.                        |
\*-----------------------------------------------------------------*/

-	script	SocketEnchant	FAKE_NPC,{
	mes "[Artes�o]";
	mes "Eu sou um expecialista em adicionar encaixes a equipamentos.";
	mes "N�o � um trabalho f�cil ent�o terei que cobrar por isso.";
	mes "Me diga se intere�a em meus servi�os.";
	next;
	switch(select("Quero utilizar seus servi�os","Quais s�o os requisitos?")) {
		case 1:
		mes "[Artes�o]";
		mes "Ent�o me diga em qual tipo de equipamento deseja adicionar encaixes?";
		next;
		switch(select("Em Armas","Em Armaduras","Cancelar")) {
			case 1:
			mes "[Artes�o]";
			mes "Ent�o em armas....";
			mes "Mas qual o n�vel?";
			next;
			switch(select("C","B","A","S")) {
				case 1:
				mes "[Artes�o]";
				mes "Qual arma da classe C voc� deseja que eu adicione um encaixe?";
				next;
				switch(select("Tridente","Cordel","Violino","Livro da M�e Terra","Livro das Ondas","Livro de Golpe de Vento","Livro de Sol Ardente","Cancelar")) {
					case 1: .@item = 1460; .@itemSlot = 1461; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 2: .@item = 1950; .@itemSlot = 1951; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 3: .@item = 1901; .@itemSlot = 1902; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 4: .@item = 1554; .@itemSlot = 1569; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 5: .@item = 1553; .@itemSlot = 1568; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 6: .@item = 1556; .@itemSlot = 1571; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 7: .@item = 1555; .@itemSlot = 1570; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 8:
					mes "[Artes�o]";
					mes "Tudo bem fique a vontade em voltar quando quiser.";
					close;
				}
				break;
				case 2:
				mes "[Artes�o]";
				mes "Qual arma da classe B voc� deseja que eu adicione um encaixe?";
				next;
				switch(select("Mangual Pesado","Gladius","Gakkung","Pique","Haedonggum","Ala�de","A�oite","Waghnak","Arco Arbaleste","Machado dos Orcs","Cimitarra","Clava com Espetos","Cancelar")) {
					case 1:  .@item = 1519; .@itemSlot = 1520; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 2:  .@item = 1219; .@itemSlot = 1220; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 984;  .@itemAmount = 1;  break;
					case 3:  .@item = 1714; .@itemSlot = 1716; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 984;  .@itemAmount = 2;  break;
					case 4:  .@item = 1407; .@itemSlot = 1408; .@maxChoice = 61; .@zenyRequire = 200; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 5:  .@item = 1123; .@itemSlot = 1128; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 984;  .@itemAmount = 2;  break;
					case 6:  .@item = 1905; .@itemSlot = 1906; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 1011; .@itemAmount = 10; break;
					case 7:  .@item = 1954; .@itemSlot = 1955; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 1011; .@itemAmount = 10; break;
					case 8:  .@item = 1801; .@itemSlot = 1802; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 1010; .@itemAmount = 10; break;
					case 9:  .@item = 1713; .@itemSlot = 1715; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 984;  .@itemAmount = 2;  break;
					case 10: .@item = 1304; .@itemSlot = 1309; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 984;  .@itemAmount = 1;  break;
					case 11: .@item = 1113; .@itemSlot = 1114; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 984;  .@itemAmount = 1;  break;
					case 12: .@item = 1523; .@itemSlot = 1538; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 984;  .@itemAmount = 1;  break;
					case 13:
					mes "[Artes�o]";
					mes "Tudo bem fique a vontade em voltar quando quiser.";
					close;
				}
				break;
				case 3:
				mes "[Artes�o]";
				mes "Uma categoria de armas de elite.";
				mes "Qual fabulosa arma da classe A voc� deseja que eu adicione um encaixe?";
				next;
				switch(select("Arco de Ca�a","Bast�o do Sobrevivente(INT)","Zweihander","Flamberge","Infiltrador","Balista","Atordoador","F�ria Insana","Claymore","Matadora de Drag�o","Katar da Espinheira Empoeirada","Katar da Chama Impetuosa","Katar G�lida","Katar do Vento Perfurante","Ma�a de Ouro","Ala�de Oriental","Chicote da Rainha","Lan�a Espectral","Gae Bolg","Schweizersabel","Cancelar")) {
					case 1:  .@item = 1718;  .@itemSlot = 1726;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 999; .@itemAmount = 10; break;
					case 2:  .@item = 1619;  .@itemSlot = 1620;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 999; .@itemAmount = 10; break;
					case 3:  .@item = 1168;  .@itemSlot = 1171;  .@maxChoice = 61; .@zenyRequire = 800; .@itemRequire = 999; .@itemAmount = 10; break;
					case 4:  .@item = 1129;  .@itemSlot = 1149;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 999; .@itemAmount = 10; break;
					case 5:  .@item = 1261;  .@itemSlot = 1266;  .@maxChoice = 61; .@zenyRequire = 700; .@itemRequire = 999; .@itemAmount = 10; break;
					case 6:  .@item = 1722;  .@itemSlot = 1727;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 999; .@itemAmount = 10; break;
					case 7:  .@item = 1522;  .@itemSlot = 1532;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 999; .@itemAmount = 10; break;
					case 8:  .@item = 1814;  .@itemSlot = 1816;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 999; .@itemAmount = 10; break;
					case 9:  .@item = 1163;  .@itemSlot = 1172;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 999; .@itemAmount = 10; break;
					case 10: .@item = 13001; .@itemSlot = 13030; .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 11: .@item = 1257;  .@itemSlot = 1276;  .@maxChoice = 66; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 12: .@item = 1258;  .@itemSlot = 1277;  .@maxChoice = 66; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 13: .@item = 1256;  .@itemSlot = 1275;  .@maxChoice = 66; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 14: .@item = 1259;  .@itemSlot = 1278;  .@maxChoice = 66; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 15: .@item = 1524;  .@itemSlot = 1539;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 16: .@item = 1918;  .@itemSlot = 1922;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 17: .@item = 1970;  .@itemSlot = 1976;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 18: .@item = 1477;  .@itemSlot = 1479;  .@maxChoice = 56; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 19: .@item = 1474;  .@itemSlot = 1480;  .@maxChoice = 56; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 20: .@item = 1167;  .@itemSlot = 1178;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 984; .@itemAmount = 2;  break;
					case 21:
					mes "[Artes�o]";
					mes "Tudo bem fique a vontade em voltar quando quiser.";
					close;
				}
				break;
				case 4:
				mes "[Artes�o]";
				mes "Nossa, mesmo a classe S?!";
				mes "Essa � o n�vel mais alto de armamentos, a chances de sucesso s�o m�nimas.";
				mes "Mas qual delas voc� quer um encaixe?";
				next;
				switch(select("Gungnir","Adaga Venenosa","Rondel","Sucsamad","Ginnungagap","Cutelo","Foice","Bast�o do Sobrevivente(DEX)","Z�firo","Destruidora de Malhas","Ca�adora de Drag�es","Destruidor de Espadas","Adaga Assasina","Grande Cruz","Executora","Cancelar")) {
					case 1:  .@item = 1413;  .@itemSlot = 1418;  .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 2:  .@item = 1239;  .@itemSlot = 13016; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 3:  .@item = 1230;  .@itemSlot = 13017; .@maxChoice = 51; .@zenyRequire = 2000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 4:  .@item = 1236;  .@itemSlot = 13018; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 5:  .@item = 13002; .@itemSlot = 13019; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 6:  .@item = 1135;  .@itemSlot = 13400; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 7:  .@item = 1466;  .@itemSlot = 1476;  .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 8:  .@item = 1617;  .@itemSlot = 1618;  .@maxChoice = 51; .@zenyRequire = 2000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 9:  .@item = 1468;  .@itemSlot = 1481;  .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 10: .@item = 1225;  .@itemSlot = 13032; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 11: .@item = 1166;  .@itemSlot = 1180;  .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 12: .@item = 1224;  .@itemSlot = 13031; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 13: .@item = 1232;  .@itemSlot = 13033; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 14: .@item = 1528;  .@itemSlot = 1540;  .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 15: .@item = 1169;  .@itemSlot = 1179;  .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 999; .@itemAmount = 10; break;
					case 16:
					mes "[Artes�o]";
					mes "Tudo bem fique a vontade em voltar quando quiser.";
					close;
				}
				break;
			}
			break;
			case 2:
			mes "[Artes�o]";
			mes "Ent�o em armaduras....";
			mes "Eu disse armaduras, mas posso trabalhar com acess�rios e equipamentos em geral.";
			mes "Me diga qual o n�vel.";
			next;
			switch(select("C","B","A","S")) {
				case 1:
				mes "[Artes�o]";
				mes "Qual da classe C voc� deseja que eu adicione um encaixe?";
				next;
				switch(select("Capote","Casaco","Tiara","Bireta","Presilha de Girassol","Barrete","La�o Grande","Quepe","Cancelar")) {
					case 1: .@item = 2307; .@itemSlot = 2308; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 999; .@itemAmount = 3; break;
					case 2: .@item = 2309; .@itemSlot = 2310; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 999; .@itemAmount = 3; break;
					case 3: .@item = 2232; .@itemSlot = 2233; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 999; .@itemAmount = 3; break;
					case 5: .@item = 2216; .@itemSlot = 2217; .@maxChoice = 66; .@zenyRequire = 200; .@itemRequire = 999; .@itemAmount = 3; break;
					case 6: .@item = 2253; .@itemSlot = 5351; .@maxChoice = 66; .@zenyRequire = 100; .@itemRequire = 999; .@itemAmount = 3; break;
					case 7: .@item = 5012; .@itemSlot = 5347; .@maxChoice = 66; .@zenyRequire = 100; .@itemRequire = 999; .@itemAmount = 3; break;
					case 8: .@item = 2244; .@itemSlot = 5348; .@maxChoice = 66; .@zenyRequire = 100; .@itemRequire = 999; .@itemAmount = 5; break;
					case 9: .@item = 5016; .@itemSlot = 5349; .@maxChoice = 66; .@zenyRequire = 100; .@itemRequire = 999; .@itemAmount = 5; break;
					case 10:
					mes "[Artes�o]";
					mes "Tudo bem fique a vontade em voltar quando quiser.";
					close;
				}
				break;
				case 2:
				mes "[Artes�o]";
				mes "Qual da classe B voc� deseja que eu adicione um encaixe?";
				next;
				switch(select("Escudo Espelhado","Cota de Malha","Manto Sagrado","Manto de Seda","Botas","Sapatos","Sobrepeliz","Vembrassa","Broquel","Escudo","Chap�u de Bongun","Anel de Caveira","Salto Alto","Cancelar")) {
					case 1:  .@item = 2107; .@itemSlot = 2108; .@maxChoice = 61; .@zenyRequire = 250; .@itemRequire = 999; .@itemAmount = 5; break;
					case 2:  .@item = 2314; .@itemSlot = 2315; .@maxChoice = 61; .@zenyRequire = 250; .@itemRequire = 999; .@itemAmount = 5; break;
					case 3:  .@item = 2325; .@itemSlot = 2326; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 4:  .@item = 2321; .@itemSlot = 2322; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 5:  .@item = 2405; .@itemSlot = 2406; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 6:  .@item = 2403; .@itemSlot = 2404; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 7:  .@item = 2503; .@itemSlot = 2504; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 8:  .@item = 2101; .@itemSlot = 2102; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 9:  .@item = 2103; .@itemSlot = 2104; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 10: .@item = 2105; .@itemSlot = 2106; .@maxChoice = 61; .@zenyRequire = 250; .@itemRequire = 999; .@itemAmount = 5; break;
					case 11: .@item = 5046; .@itemSlot = 5168; .@maxChoice = 61; .@zenyRequire = 250; .@itemRequire = 999; .@itemAmount = 5; break;
					case 12: .@item = 2609; .@itemSlot = 2715; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 13: .@item = 2409; .@itemSlot = 2432; .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 999; .@itemAmount = 5; break;
					case 14:
					mes "[Artes�o]";
					mes "Tudo bem fique a vontade em voltar quando quiser.";
					close;
				}
				break;
				case 3:
				mes "[Artes�o]";
				mes "Eu ouvi direti mesmo? Classe a?!";
				mes "Voc� tem coragem...";
				mes "Me diga qual delas voc� quer um encaixe?";
				next;
				switch(select("Chap�u de Balde","Grim�rio","Malha","Armadura Legion�ria","Armadura Met�lica","Traje de Gatuno","Grevas","Chap�u de Freira","Manteau","Elmo","Indument�ria Ninja","Capacete de Orc","Capa do Marqu�s","Chap�u de Monge","Pe�a Dourada","Broche","Chap�u de Munak","Bandana Pirata","Botas Pretas de Couro","Cancelar")) {
					case 1:  .@item = 5114;  .@itemSlot = 5120;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 2:  .@item = 2109;  .@itemSlot = 2121;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 3:  .@item = 2330;  .@itemSlot = 2331;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 4:  .@item = 2341;  .@itemSlot = 2342;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 5:  .@item = 2316;  .@itemSlot = 2317;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 6:  .@item = 2335;  .@itemSlot = 2336;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 7:  .@item = 2411;  .@itemSlot = 2412;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 8:  .@item = 5092;  .@itemSlot = 5093;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 9:  .@item = 2505;  .@itemSlot = 2506;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 10: .@item = 2228;  .@itemSlot = 2229;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 11: .@item = 2337;  .@itemSlot = 2359;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 12: .@item = 2299;  .@itemSlot = 5157;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 13: .@item = 2507;  .@itemSlot = 2525;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 14: .@item = 2251;  .@itemSlot = 5158;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 15: .@item = 2246;  .@itemSlot = 5159;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 16: .@item = 2605;  .@itemSlot = 2625;  .@maxChoice = 61; .@zenyRequire = 400; .@itemRequire = 985; .@itemAmount = 1; break;
					case 17: .@item = 2264;  .@itemSlot = 5167;  .@maxChoice = 61; .@zenyRequire = 300; .@itemRequire = 985; .@itemAmount = 1; break;
					case 18: .@item = 2287;  .@itemSlot = 5350;  .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 985; .@itemAmount = 1; break;
					case 19: .@item = 2425;  .@itemSlot = 2434;  .@maxChoice = 51; .@zenyRequire = 500; .@itemRequire = 985; .@itemAmount = 1; break;
					case 20: .@item = 15053; .@itemSlot = 15056; .@maxChoice = 61; .@zenyRequire = 500; .@itemRequire = 985; .@itemAmount = 1; break;
					case 21:
					mes "[Artes�o]";
					mes "Tudo bem fique a vontade em voltar quando quiser.";
					close;
				}
				break;
				case 4:
				mes "[Artes�o]";
				mes "Nossa, mesmo a classe S?!";
				mes "Essa � o n�vel mais alto de armamentos, a chances de sucesso s�o m�nimas.";
				mes "Mas qual delas voc� quer um encaixe?";
				next;
				switch(select("Chifres Majestosos","Chifes Pontudos","Elmo de Osso","Cors�rio","Coroa","Diadema","Coroa do Fara�","Manto da Conjura��o","Brinco","Anel","Luva de Puxada","Vestimenta Arcana","Batina","Spiritus Sancti","Camiseta","Roupa de Baixo","Cancelar")) {
					case 1:  .@item = 2256; .@itemSlot = 5160; .@maxChoice = 51; .@zenyRequire = 2000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 2:  .@item = 2258; .@itemSlot = 5161; .@maxChoice = 51; .@zenyRequire = 2000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 3:  .@item = 5017; .@itemSlot = 5162; .@maxChoice = 51; .@zenyRequire = 2000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 4:  .@item = 5019; .@itemSlot = 5163; .@maxChoice = 51; .@zenyRequire = 2000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 5:  .@item = 2235; .@itemSlot = 5165; .@maxChoice = 51; .@zenyRequire = 2000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 6:  .@item = 2234; .@itemSlot = 5164; .@maxChoice = 51; .@zenyRequire = 2000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 7:  .@item = 5053; .@itemSlot = 5166; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 8:  .@item = 2343; .@itemSlot = 2360; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 9:  .@item = 2602; .@itemSlot = 2622; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 10: .@item = 2601; .@itemSlot = 2621; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 11: .@item = 2619; .@itemSlot = 2671; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 2; break;
					case 12: .@item = 2334; .@itemSlot = 2372; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 1; break;
					case 13: .@item = 2327; .@itemSlot = 2373; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 1; break;
					case 14: .@item = 2111; .@itemSlot = 2128; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 1; break;
					case 15: .@item = 2522; .@itemSlot = 2523; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 1; break;
					case 16: .@item = 2339; .@itemSlot = 2371; .@maxChoice = 51; .@zenyRequire = 1000; .@itemRequire = 985; .@itemAmount = 1; break;
					case 17:
					mes "[Artes�o]";
					mes "Tudo bem fique a vontade em voltar quando quiser.";
					close;
				}
				break;
			}
			break;
			case 3:
			mes "[Artes�o]";
			mes "Tudo bem fique a vontade em voltar quando quiser.";
			close;
		}
		break;
		case 2:
		mes "[Artes�o]";
		mes "Primeiramente voc� deve possuir o equipamento em seu invent�rio, ele n�o pode est� equipado.";
		next;
		mes "[Artes�o]";
		mes "Al�m do item que queira adicionar o encaixe vou lhe pedir uma taxa de Zenys pelo trabalho e alguns itens que precisarei para realisar o processo.";
		next;
		mes "[Artes�o]";
		mes "A quantidade de zenys e itens vai depender do n�vel do equipamento.";
		mes "Que � dado pela classe C/B/A/S.";
		mes "Sendo a classe C a mais f�cil e a S a mais dif�cil de conseguir.";
		next;
		mes "[Artes�o]";
		mes "Sim, h� uma chance de falha que varia conforme o n�vel do equipamento.";
		mes "^bb0000Quanto maior o n�vel maior as chances de falha e voc� perder o equipamento^000000.";
		mes "ent�o pense bem antes de proceguir.";
		close;
	}
	mes "[Artes�o]";
	mes "Para adicionar 1 encaixe em "+getitemname(.@item)+" vou precisar disso:";
	mes .@zenyRequire+" Zenys e "+.@itemAmount+" "+getitemname(.@itemRequire)+".";
	mes "L�gico tamb�m vou precisar que voc� tenha "+getitemname(.@item)+" no seu ivent�rio.";
	next;
	mes "[Artes�o]";
	mes "Ent�o o que me diz?";
	mes "^ff0000Mas vou logo avisando!";
	mes "Se tentar me passar a perna com mais de 1 "+getitemname(.@item)+" em seu invent�rio eu n�o vou trabalhar!^000000";
	next;
	mes "[Artes�o]";
	mes "E tamb�m saiba que n�o vou me responsabilisar caso falhe e voc� perca seus itens.";
	mes "Estamos entendidos?";
	next;
	switch(select("Claro eu aceito seus termos","Ent�o � melhor eu desisitr")) {
		case 1:
		mes "[Artes�o]";
		mes "Vamos ver se est� tudo correto...";
		next;
		mes "[Artes�o]";
		if (Zeny < .@zenyRequire) {
			mes "Pensa que me engana?";
			mes "Voc� n�o tem dinheiro o suficiente.";
			close;
		}
		else if (countitem(.@item) > 1) {
			mes "Est� pensando que sou palha�o?!";
			mes "N�o ouviu eu dizer que n�o vou trabalhar, caso tivesse mais de 1 "+getitemname(.@item)+"?";
			close;
		}
		else if (!countitem(.@item)) {
			mes "Como vou adicionar um encaixe no "+getitemname(.@item)+", se voc� n�o tem nenhum?";
			close;
		}
		else if (countitem(.@itemRequire) < .@itemAmount) {
			mes "Parece que voc� n�o tem a os "+.@itemAmount+" "+getitemname(.@itemRequire)+"...";
			mes "Eu preciso desse material para adicionar o encaixe.";
			close;
		}
		else {
			mes ".....";
			next;
			mes "[Artes�o]";
			mes "� est� tudo certo.";
			mes "Mas pelo perigo de falha no processo, e voc� perder o "+getitemname(.@item)+".";
			next;
			mes "[Artes�o]";
			mes "Devo lhe perguntar novamente.";
			mes "Tem certeza que deseja que eu tente adicionar o encaixe?";
			next;
			switch(select("Claro v� em frente","Acho melhor n�o")) {
				case 1:
				.@random = rand(1,100);
				delitem .@item,1;
				delitem .@itemRequire,.@itemAmount;
				Zeny -= .@zenyRequire;
				mes "[Artes�o]";
				mes "Ent�o aguarde um momento...";
				next;
				mes "[Artes�o]";
				mes "........";
				next;
				mes "[Artes�o]";
				mes ".........";
				next;
				mes "[Artes�o]";
				mes "..........";
				next;
				mes "[Artes�o]";
				mes "...........";
				next;
				if ((.@random > 40) && (.@random < .@maxChoice)) {
					specialeffect EF_REPAIRWEAPON;
					mes "[Artes�o]";
					mes "Nossa!....";
					mes "Deu muito trabalho!";
					mes "Fiquei completamente exausto.";
					next;
					mes "[Artes�o]";
					mes "Me desculpe fazer voc� esperar.";
					mes "Est� aqui seu novo "+getitemname(.@itemSlot);
					mes "Espero que gote.";
					getitem .@itemSlot,1;
					next;
					mes "[Artes�o]";
					mes "E fique a vontade em me procurar novamente, se quiser tentar adicionar algum encaixe nos seus itens.";
					close;
				}
				else {
					specialeffect EF_SUI_EXPLOSION;
					mes "[Artes�o]";
					mes "^bb0000AH N�O!!!!";
					mes "Fiz o que pude mas seu "+getitemname(.@itemSlot)+" quebrou enquanto estava a adiconar um encaixe!^000000";
					next;
					mes "[Artes�o]";
					mes "Mas eu te avisei que era um processo delicado de se fazer.";
					mes "Muitos itens n�o resistem.";
					mes "Sinto muito.";
					close;
				}
				case 2:
				mes "[Artes�o]";
				mes "Est� bem fazer algo como isso requer muita coragem.";
				mes "Mas caso mude de ideia pode me procurar novamente.";
				close;
			}
		}
		case 2:
		mes "[Artes�o]";
		mes "Est� bem fazer algo como isso requer muita coragem.";
		mes "Mas caso mude de ideia pode me procurar novamente.";
		close;
	}
	close;
}

prt_in,33,70,5	duplicate(SocketEnchant)	Artes�o#prt	4_M_02
payon,140,151,5	duplicate(SocketEnchant)	Artes�o#pay	4_M_02
lhz_in02,281,35,5	duplicate(SocketEnchant)	Artes�o#lhz	4_M_02
morocc,51,41,4	duplicate(SocketEnchant)	Artes�o#moc	4_M_02