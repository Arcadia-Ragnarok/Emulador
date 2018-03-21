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
| - Info: Acesso a cidade Niflheim                                  |
\*-----------------------------------------------------------------*/

umbala,140,197,1	script	BungeeJump	HIDDEN_NPC,0,4,{
	OnTouch:
	switch(rand(1,3)) {
		case 1:
		percentheal (-50,0);
		mapannounce ("umbala","AAAAAAAAAAAAAA!!!!!!!!!!!!!!!!!!!!!!!!!",bc_map);
		warp ("umbala",145,166);
		end;
		case 2:
		mapannounce ("umbala","OOOOOOOOOOOOOO!!!!!!!!!!!!!!!!!!!!!!!!!",bc_map);
		warp ("umbala",145,166);
		end;
		case 3:
		percentheal (-99,0);
		mapannounce ("umbala","UUUUUOOOOOOOOOOOOOOOO!!!!!!!!!!!!!!!!!!!!",bc_map);
		warp ("nif_fild01",315,69);
		end;
	}
}

// ------------------------------------------------------------------
nif_in,188,168,3	script	Bruxa#nif	4_F_NFDEADMGCIAN,{
	mes "[Kirkena]";
	mes "Huh? ...Você está vivo, não está?";
	mes "Não sei como você foi capaz de chegar aqui sem eu ter conhecimento disso,";
	mes "Mas esse lugar é perigoso para se viver.";
	next;
	mes "[Kirkena]";
	mes "Estou te enviando de volta para fora dessa cidade.";
	mes "Se você quer ajudar, é melhor não voltar a esse lugar.";
	close2;
	warp("umbala",138,208);
	end;
}
