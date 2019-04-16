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
| - Author: Sem informação precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest do Máscara de Oxigênio                         |
\*-----------------------------------------------------------------*/

payon_in02,25,71,4	script	Jovem#pay	4_M_04,{
	if (countitem(Ora_Ora) > 4) {
		mes "[Jovem]";
		mes "Arrrgggghh!";
		mes "Ah, não, eu não posso...";
		next;
		mes "[Jovem]";
		mes "*Huk*";
		mes "Agora, até meus olhos ficaram loucos!!";
		mes "Por que esses insetos, de repente, parecem tão bonitos?!";
		mes "Nãooooooo!!!";
		next;
		switch (select("Mostrar Armadilhas para Insetos","Entregar Armadilhas para Insetos","Cancelar")) {
			case 1:
			mes "[Jovem]";
			mes "Oooooohhhh!!!";
			mes "Isso, isso é";
			mes "uma?!";
			mes "Uma...";
			mes "Armadilha para Insetos!!";
			next;
			mes "[Jovem]";
			mes "Eu vou ser breve!";
			mes "Me dê ela, e eu te darei o meu tesouro!";
			mes "O que acha da minha idéia? Quer negociar?";
			close;
			case 2:
			if (!checkweight(Oxygen_Mask,1)) {
				mes "^3355FFEspere um segundo!";
				mes "Agora, você está carregando muitos itens com você.";
				mes "Por favor, volte depois de colocar algumas de suas coisas no Armazém da Kafra.^000000";
				close;
			} else {
				delitem(Ora_Ora,5);
				mes "[Jovem]";
				mes "Muhahahahah!!!";
				mes "Eu finalmente tenho isso!";
				mes "Armadilha para Insetos!";
				mes "Estúpidos e nojentos";
				mes "Besouros-Ladrões!";
				mes "Vocês vão me pagar!!!";
				next;
				mes "[Jovem]";
				mes "Huk...Huk...";
				mes "Desculpe, acabei perdendo o meu controle por um momento.";
				mes "Agora vou dar o meu tesouro, como prometido.";
				next;
				getitem(Oxygen_Mask,1);
				mes "[Homem Jovem]";
				mes "Quando você usar isso em sua boca e começar a respirar, ela vai filtrar as impuresas antes de chegar aos seus pulmões.";
				next;
				mes "[Jovem]";
				mes "Hahahahahaha!";
				mes "Mal posso esperar para usar essa";
				mes "Armadilha para Insetos!";
				close;
			}
			case 3:
			mes "[Jovem]";
			mes "Huhuhuhuhu...";
			mes "E se eu não conseguir me livrar desses Besouros-Ladrões? Talvez eu cresça e passe a amá-los... *Huk*";
			close;
		}
	} else {
		mes "[Jovem]";
		mes "Wahhhhhh! Eu, eu...";
		mes "Eu não aguento mais!";
		mes "Seu besouro fedido, desgraçado!";
		next;
		switch (select("Continuar","Cancelar")) {
			case 1:
			mes "[Jovem]";
			mes "Oh cara...";
			mes "Tudo começou quando meus pais faleceram quando eu era um garotinho.";
			mes "No início eu tinha que trabalhar para viver, e teve um momento muito difícil sabe...";
			next;
			mes "[Jovem]";
			mes "Eu trabalhei por 10 anos na esperança de comprar a minha casa dos sonhos, onde eu poderia encontrar alguma sensação de paz e conforto novamente.";
			mes "Eventualmente, eu pensei que tinha zenys para pagar o meu próprio lar doce lar.";
			next;
			mes "[Jovem]";
			mes "Infelizmente eu não tenho dinheiro suficiente para comprar a casa agradável que eu estava de olho.";
			mes "Mas então, eu encontrei esta casa, que era maior e mais barata do que a primeira. Comprei sem pensar...";
			next;
			mes "[Jovem]";
			mes "Doce Jesus! Acontece que, é um paraíso para Besouros-Ladrões!!!";
			next;
			mes "[Jovem]";
			mes "Eu tentei fazer tudo o que eu podia fazer.";
			mes "Eu já tentei espantá-los, matá-los, mas isso só me trouxe paz por um momento!";
			mes "Eu já tentei até queimar e trazer essa casa abaixo!";
			next;
			mes "[Jovem]";
			mes "*Suspiro* Quer dizer, que realmente, eu preciso da ^3355FF Armadilha para Insetos^000000 para se livrar deles?";
			mes "As pessoas dizem que raramente elas são encontradas em lugares distantes.";
			next;
			mes "[Jovem]";
			mes "Se eu pudesse comprar 5 delas, eu não ficaria mais frustrado com esses insetos nojentos, nunca mais...";
			close;
			case 2:
			mes "[Jovem]";
			mes "Essa luta sem fim contra os insetos me deixam exausto.";
			mes "Eu desisto!";
			mes "Façam o quiserem seu canalhas!";
			close;
		}
	}
}
