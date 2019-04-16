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
| - Author: Sem informa��o precisa                                  |
| - Version: Spell Master                                           |
| - Info: Mini-Quest do M�scara de Oxig�nio                         |
\*-----------------------------------------------------------------*/

payon_in02,25,71,4	script	Jovem#pay	4_M_04,{
	if (countitem(Ora_Ora) > 4) {
		mes "[Jovem]";
		mes "Arrrgggghh!";
		mes "Ah, n�o, eu n�o posso...";
		next;
		mes "[Jovem]";
		mes "*Huk*";
		mes "Agora, at� meus olhos ficaram loucos!!";
		mes "Por que esses insetos, de repente, parecem t�o bonitos?!";
		mes "N�ooooooo!!!";
		next;
		switch (select("Mostrar Armadilhas para Insetos","Entregar Armadilhas para Insetos","Cancelar")) {
			case 1:
			mes "[Jovem]";
			mes "Oooooohhhh!!!";
			mes "Isso, isso �";
			mes "uma?!";
			mes "Uma...";
			mes "Armadilha para Insetos!!";
			next;
			mes "[Jovem]";
			mes "Eu vou ser breve!";
			mes "Me d� ela, e eu te darei o meu tesouro!";
			mes "O que acha da minha id�ia? Quer negociar?";
			close;
			case 2:
			if (!checkweight(Oxygen_Mask,1)) {
				mes "^3355FFEspere um segundo!";
				mes "Agora, voc� est� carregando muitos itens com voc�.";
				mes "Por favor, volte depois de colocar algumas de suas coisas no Armaz�m da Kafra.^000000";
				close;
			} else {
				delitem(Ora_Ora,5);
				mes "[Jovem]";
				mes "Muhahahahah!!!";
				mes "Eu finalmente tenho isso!";
				mes "Armadilha para Insetos!";
				mes "Est�pidos e nojentos";
				mes "Besouros-Ladr�es!";
				mes "Voc�s v�o me pagar!!!";
				next;
				mes "[Jovem]";
				mes "Huk...Huk...";
				mes "Desculpe, acabei perdendo o meu controle por um momento.";
				mes "Agora vou dar o meu tesouro, como prometido.";
				next;
				getitem(Oxygen_Mask,1);
				mes "[Homem Jovem]";
				mes "Quando voc� usar isso em sua boca e come�ar a respirar, ela vai filtrar as impuresas antes de chegar aos seus pulm�es.";
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
			mes "E se eu n�o conseguir me livrar desses Besouros-Ladr�es? Talvez eu cres�a e passe a am�-los... *Huk*";
			close;
		}
	} else {
		mes "[Jovem]";
		mes "Wahhhhhh! Eu, eu...";
		mes "Eu n�o aguento mais!";
		mes "Seu besouro fedido, desgra�ado!";
		next;
		switch (select("Continuar","Cancelar")) {
			case 1:
			mes "[Jovem]";
			mes "Oh cara...";
			mes "Tudo come�ou quando meus pais faleceram quando eu era um garotinho.";
			mes "No in�cio eu tinha que trabalhar para viver, e teve um momento muito dif�cil sabe...";
			next;
			mes "[Jovem]";
			mes "Eu trabalhei por 10 anos na esperan�a de comprar a minha casa dos sonhos, onde eu poderia encontrar alguma sensa��o de paz e conforto novamente.";
			mes "Eventualmente, eu pensei que tinha zenys para pagar o meu pr�prio lar doce lar.";
			next;
			mes "[Jovem]";
			mes "Infelizmente eu n�o tenho dinheiro suficiente para comprar a casa agrad�vel que eu estava de olho.";
			mes "Mas ent�o, eu encontrei esta casa, que era maior e mais barata do que a primeira. Comprei sem pensar...";
			next;
			mes "[Jovem]";
			mes "Doce Jesus! Acontece que, � um para�so para Besouros-Ladr�es!!!";
			next;
			mes "[Jovem]";
			mes "Eu tentei fazer tudo o que eu podia fazer.";
			mes "Eu j� tentei espant�-los, mat�-los, mas isso s� me trouxe paz por um momento!";
			mes "Eu j� tentei at� queimar e trazer essa casa abaixo!";
			next;
			mes "[Jovem]";
			mes "*Suspiro* Quer dizer, que realmente, eu preciso da ^3355FF Armadilha para Insetos^000000 para se livrar deles?";
			mes "As pessoas dizem que raramente elas s�o encontradas em lugares distantes.";
			next;
			mes "[Jovem]";
			mes "Se eu pudesse comprar 5 delas, eu n�o ficaria mais frustrado com esses insetos nojentos, nunca mais...";
			close;
			case 2:
			mes "[Jovem]";
			mes "Essa luta sem fim contra os insetos me deixam exausto.";
			mes "Eu desisto!";
			mes "Fa�am o quiserem seu canalhas!";
			close;
		}
	}
}
