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
| - Copyright: Spell Master (08/08/2017)                            |
| - Info: Quest de Mudança de Classe para Espadachim.               |
\*-----------------------------------------------------------------*/

izlude_in,74,172,4	script	Líder dos Espadachins#swordq	2_M_SWORDMASTER,{
	if (Upper == 1) {
		if (Class == Job_Novice_High && (ADVJOB == Job_Lord_Knight || ADVJOB == Job_Paladin)) {
			mes("[Líder dos Espadachins]\n"
				"É...\n"
				"Não pode ser...\n"
				"Você renasceu não é?");
			next;
			mes("[Líder dos Espadachins]\n"
				"Você está no caminho de se renovar como Espadachim!\n"
				"Depois que você brandir uma espada, você não pode mais voltar atrás");
			next;
			if (getskilllv("NV_BASIC") < 9) {
				mes("[Líder dos Espadachins]\n"
					"Hmm? Ah, antes de ser tornar um Espadachim você deve dominar as Habilidades Básicas.");
				next;
				mes("[Líder dos Espadachins]\n"
					"Volte depois que terminar seu treinamento, e aprender todas habilidades básicas!.");
				close;
			} else {
				mes("[Líder dos Espadachins]\n"
					"Excelente!\n"
					"Permita-me transformar você em Espadachim imediatamente!");
				next;
				jobchange(Job_Swordman_High);
				mes("[Líder dos Espadachins]\n"
					"Hmm...\n"
					"Você me parece um Espadachim experiente.\n"
					"Mas estou certo que você precisa treinar para melhorar suas habilidades e ter mais força!");
				close;
			}
		} else {
			mes("[Líder dos Espadachins]\n"
				"Hm...?\n"
				"Você é um guerreiro renascido, não é mesmo?");
			next;
			mes("[Líder dos Espadachins]\n"
				"Hmmm...\n"
				"Parece que ser um Espadachim não faz parte do seu destino.\n"
				"Desculpe, mas não há nada que eu possa fazer por você.");
			close;
		}
	} else if (BaseJob != Job_Novice) {
		mes("[Líder dos Espadachins]");
		if (BaseJob == Job_Swordman) {
			mes("Lembre-se sempre que os espadachins, não são somentes lutadores com a espada.");
			close;
		} else {
			mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+"a guilda dos Espadachins.");
			close;
		}
	} else {
		mes("[Líder dos Espadachins]");
		if (!swordq) {
			if (getskilllv ("NV_BASIC") < 9) {
				mes("Um jovem Aprendiz!\n"
					"Me pergunto o que faz aqui se nem suas habilidades básicas você aprendeu.");
				close;
			} else {
				mes("Um jovem Aprendiz!?\n"
					"Por acaso você veio até aqui para se juntar a nossa guilda se tornando um Espadachim?");
				next;
				mes("[Líder dos Espadachins]\n"
					"Para isso primeiro você deve se inscrever preenchendo esse formulário aqui.");
				next;
				switch (select("Preencher o formulário", "Perguntar sobre o Teste", "Não fazer nada")) {
					case 1:
					mes("[Líder dos Espadachins]\n"
						"Então deixe me ver.\n"
						"Seu nome é ^0066ff"+strcharinfo(CHAR_NAME)+"^000000, não é?\n"
						"Pois bem... Ver aquele quarda alí?");
					next;
					mes("[Líder dos Espadachins]\n"
						"Leve esse cartão até ele, isso vai provar que você fez sua inscrição.");
					swordq = 1;
					setquest(1014);
					close;
					case 2:
					mes("[Líder dos Espadachins]\n"
						"Ah, sim, o teste de graduação........");
					next;
					mes("[Líder dos Espadachins]\n"
						"Bem, para ser espadachim a pessoa deve ser astuta e muito resitente as adversividades.\n"
						"E nosso teste apenas mede esse potencial de cada cadidato.");
					next;
					mes("[Líder dos Espadachins]\n"
						"Básicamente é só atravessar 3 partes de um campo, nele haverá armadilhas e monstros para dificultar.\n"
						"Alguns podem até pensar que é difícil, mas é muito simples.\n"
						"Com um pouco de perceverância que um espadachim deve ter, qualquer um pode conseguir.");
					close;
					case 3:
					mes("[Líder dos Espadachins]\n"
						"Muito bem, mas se intereçar volte aqui.\n"
						"Quem sabe você não se torna um espadachim.");
					close;
				}
			}
		} else if (swordq == 1) {
			mes("O que faz aqui?\n"
				"Vá fazer o seu teste");
			next;
			if (select("Perguntar sobre o teste", "Sair") == 1) {
				mes("[Líder dos Espadachins]\n"
					"Ah, sim, o teste de graduação....");
				next;
				mes("[Líder dos Espadachins]\n"
					"Bem, para ser espadachim a pessoa deve ser astuta e muito resitente as adversividades.\n"
					"E nosso teste apenas mede esse potencial de cada cadidato.");
				next;
				mes("[Líder dos Espadachins]\n"
					"Básicamente é só atravessar 3 partes de um campo, nele haverá armadilhas e monstros para dificultar.\n"
					"Alguns podem até pensar que é difícil, mas é muito simples.\n"
					"Com um pouco de perceverância que um espadachim deve ter, qualquer um pode conseguir.");
				close;
			}
			mes("[Líder dos Espadachins]\n"
				"Aguardo seu retorno depois que concluir seu teste.");
			close;
		} else if (swordq == 2) {
			mes("Muito bom, mostrou muita coragem e resitencia em seu teste.\n"
				"Com isso você se torna qualificad"+(Sex == SEX_MALE ? "o":"a")+"para ser Espadachim.");
			next;
			mes("[Líder dos Espadachins]\n"
				"Mas antes de sua mudança, pense bem.\n"
				"Se você se tornar Espadachim agora.\n"
				"Não vai poder se tornar outra classe.");
			next;
			mes("[Líder dos Espadachins]\n"
				"Ainda vai poder ser tornar "+(Sex == SEX_MALE ? "Cavaleiro ou Templário":"Cavaleira ou Templária")+"\n"
				"Que são classes que sucedem-se do Espadachim");
			next;
			mes("[Líder dos Espadachins]\n"
				"Tem certesa que é isso mesmo que deseja?");
			next;
			if (select("Sim quero ser Espadachim", "Melhor eu pensar mais") == 1) {
				getitem(N_Falchion,1);
				completequest(1014);
				jobchange(Job_Swordman);
				callfunc("ClearJobQuest");
				mes("[Líder dos Espadachins]\n"
					"Pois bem, de agora em diante você é Espadachim!");
				close;
			}
			mes("[Líder dos Espadachins]\n"
				"Está certo então.\n"
				"Leve o tempo que precisar, mesmo assim nós aqui já consideramos você como membro de nossa guilda.");
			close;
		}
	}
}

izlude_in,62,170,6	script	Espadachim#swordq	4_M_03,{
	mes("[Espadachim]");
	if (BaseJob != Job_Novice) {
		mes("Bem vind"+(Sex == SEX_MALE ? "o":"a")+"a guilda dos Espadachins.");
		close;
	} else if (!swordq) {
		mes("Se você deseja ser espadachim.\n"
			"Faça sua inscrição com o lider da guilda bem alí á frente.");
		close;
	} else if (swordq == 1) {
		mes("Hunn...\n"
			"Você é "+(Sex == SEX_MALE ? "o novo":"a nova")+" aspirante a Espadachim\n"
			"Deixe-me ver seu cartão de inscrição.");
		next;
		mes("[Espadachim]\n"
			"Certo!\n"
			"Vou te mandar para a sala de espera.");
		close2;
		savepoint("izlude_in",65,165);
		warp("izlude_in",39,170);
		end;
	} else if (swordq == 2) {
		mes("Agora que completou seu teste.\n"
			"Fale com o líder da guilda.");
		close;
	}
}

izlude_in,30,176,4	script	Equipe de Testes#swordq	4_F_03,{
	if (BaseJob == Job_Novice && swordq == 1) {
		mes("[Equipe de Testes]\n"
			"Pront"+(Sex == SEX_MALE ? "o":"a")+"para seu teste?\n"
			"Boa sorte!\n"
			"Você conseguirá, pode parecer difícil, mas não é");
		close2;
		warp("job_sword1",10,245);
		end;
	} else {
		savepoint("izlude",52,133);
		warp("izlude",52,133);
	}
}

// -----------------------------------------------------------------
// - [ Area de Teste ] -
// -----------------------------------------------------------------

// -----------------------------------------------------------------
// 1º Parte
job_sword1,7,245,0	script	#WarpSwordQexit	WARPNPC,1,3,{
	OnTouch:
	mes("^ff0000Desisitir do Teste?^000000");
	if (select("Não", "Sim") == 2) {
		callfunc("ClearJobVar");
		erasequest(1014);
		warp("izlude_in",65,165);
	}
	end;
}

job_sword1,192,244,0	script	#WarpSwordQ1st	WARPNPC,1,3,{
	OnTouch:
	mapannounce(strnpcinfo(NPC_MAP),"[Salão de Testes] O candidato "+strcharinfo(CHAR_NAME)+" acaba de passar pelo primeiro percuso do teste.",bc_map,"0xffce00");
	warp("job_sword1",215,244);
	end;
}

job_sword1,230,245,2	script	Checagem#st1swordq	8W_SOLDIER,{
	percentheal(100,100);
	mes("[Equipe de Testes]\n"
		"Muito bem "+strcharinfo(CHAR_NAME)+"\n"
		"Este é o primeiro ponto de checagem.");
	close;
}
job_sword1,230,242,2	duplicate(Checagem#st1swordq)	Checagem#st1swordq-2	8W_SOLDIER

job_sword1,223,243,0	warp	WarpSword1	1,1,job_sword1,11,206

// -----------------------------------------------------------------
// 2º Parte
job_sword1,8,206,0	script	#WarpSwordQexit2	WARPNPC,1,3,{
	OnTouch:
	mes("^ff0000Desisitir do Teste?^000000");
	if (select("Não", "Sim") == 2) {
		callfunc("ClearJobVar");
		erasequest(1014);
		warp("izlude_in",65,165);
	}
	end;
}

job_sword1,193,207,0	script	#WarpSwordQ2st	WARPNPC,1,3,{
	OnTouch:
	mapannounce(strnpcinfo(NPC_MAP),"[Salão de Testes] O candidato "+strcharinfo(CHAR_NAME)+" acaba de passar pelo segundo percuso do teste.",bc_map,"0xffce00");
	warp("job_sword1",10,169);
	end;
}

job_sword1,230,245,2	script	Checagem#st3swordq	8W_SOLDIER,{
	percentheal(100,100);
	mes("[Equipe de Testes]\n"
		"Muito bem "+strcharinfo(CHAR_NAME)+"\n"
		"Este é o último ponto de checagem.");
	close;
}
job_sword1,230,207,2	duplicate(Checagem#st3swordq)	Checagem#st3swordq-2	8W_SOLDIER


// -----------------------------------------------------------------
// 3º Parte
job_sword1,8,169,0	script	#WarpSwordQexit3	WARPNPC,1,3,{
	OnTouch:
	mes("^ff0000Desisitir do Teste?^000000");
	if (select("Não", "Sim") == 2) {
		callfunc("ClearJobVar");
		erasequest(1014);
		warp("izlude_in",65,165);
	}
	end;
}

job_sword1,193,168,0	script	#WarpSwordQ3st	WARPNPC,1,3,{
	OnTouch:
	mapannounce(strnpcinfo(NPC_MAP),"[Salão de Testes] O candidato "+strcharinfo(CHAR_NAME)+" acaba de passar pelo último percuso do teste.",bc_map,"0xffce00");
	warp("job_sword1",215,167);
	end;
}

job_sword1,223,167,2	script	Mae#swordq	4_F_03,{
	completequest(1014);
	swordq = 2;
	mes("[Mae]\n"
		"Parabéns por ter passado no teste!\n"
		"Já enviei o resultado para o departamento de Guilda dos Espadachins.\n"
		"Vá e fale com o líder da Guilda.");
	close2;
	warp("izlude_in",66,173);
	end;
}

// -----------------------------------------------------------------
// - [ Armadilhas ] -
// -----------------------------------------------------------------

// -----------------------------------------------------------------
// 1º Parte
job_sword1,16,251,0	script	#trapSword1st::SwordQTrap	FAKE_NPC,0,1,{
	OnTouch:
	switch (rand(1,5)) {
		case 1: warp("job_sword1",65,56); end;
		case 2: warp("job_sword1",29,26); end;
		case 3: warp("job_sword1",43,16); end;
		case 4: warp("job_sword1",23,112); end;
		case 5: warp("job_sword1",58,83); end;
	}
}

job_sword1,19,251,0	duplicate(SwordQTrap)	trapSword1st-1	FAKE_NPC,0,1
job_sword1,17,250,0	duplicate(SwordQTrap)	trapSword1st-2	FAKE_NPC,1,0
job_sword1,16,238,0	duplicate(SwordQTrap)	trapSword1st-3	FAKE_NPC,0,1
job_sword1,19,238,0	duplicate(SwordQTrap)	trapSword1st-4	FAKE_NPC,0,1
job_sword1,17,239,0	duplicate(SwordQTrap)	trapSword1st-5	FAKE_NPC,0,1
job_sword1,28,247,0	duplicate(SwordQTrap)	trapSword1st-6	FAKE_NPC,4,0
job_sword1,33,245,0	duplicate(SwordQTrap)	trapSword1st-7	FAKE_NPC,0,2
job_sword1,29,242,0	duplicate(SwordQTrap)	trapSword1st-8	FAKE_NPC,4,0
job_sword1,24,244,0	duplicate(SwordQTrap)	trapSword1st-9	FAKE_NPC,0,2
job_sword1,38,251,0	duplicate(SwordQTrap)	trapSword1st-10	FAKE_NPC,0,1
job_sword1,41,251,0	duplicate(SwordQTrap)	trapSword1st-11	FAKE_NPC,0,1
job_sword1,39,250,0	duplicate(SwordQTrap)	trapSword1st-12	FAKE_NPC,1,0
job_sword1,38,238,0	duplicate(SwordQTrap)	trapSword1st-13	FAKE_NPC,0,1
job_sword1,41,238,0	duplicate(SwordQTrap)	trapSword1st-14	FAKE_NPC,0,1
job_sword1,39,239,0	duplicate(SwordQTrap)	trapSword1st-15	FAKE_NPC,1,0
job_sword1,54,251,0	duplicate(SwordQTrap)	trapSword1st-16	FAKE_NPC,0,1
job_sword1,71,251,0	duplicate(SwordQTrap)	trapSword1st-17	FAKE_NPC,0,1
job_sword1,62,250,0	duplicate(SwordQTrap)	trapSword1st-18	FAKE_NPC,9,0
job_sword1,62,247,0	duplicate(SwordQTrap)	trapSword1st-19	FAKE_NPC,8,0
job_sword1,71,244,0	duplicate(SwordQTrap)	trapSword1st-20	FAKE_NPC,0,2
job_sword1,63,242,0	duplicate(SwordQTrap)	trapSword1st-21	FAKE_NPC,8,0
job_sword1,54,244,0	duplicate(SwordQTrap)	trapSword1st-22	FAKE_NPC,0,2
job_sword1,54,238,0	duplicate(SwordQTrap)	trapSword1st-23	FAKE_NPC,0,1
job_sword1,71,238,0	duplicate(SwordQTrap)	trapSword1st-24	FAKE_NPC,0,1
job_sword1,62,239,0	duplicate(SwordQTrap)	trapSword1st-25	FAKE_NPC,9,0
job_sword1,102,247,0	duplicate(SwordQTrap)	trapSword1st-26	FAKE_NPC,2,0
job_sword1,105,245,0	duplicate(SwordQTrap)	trapSword1st-27	FAKE_NPC,0,2
job_sword1,103,242,0	duplicate(SwordQTrap)	trapSword1st-28	FAKE_NPC,2,0
job_sword1,100,244,0	duplicate(SwordQTrap)	trapSword1st-29	FAKE_NPC,0,2
job_sword1,156,249,0	duplicate(SwordQTrap)	trapSword1st-30	FAKE_NPC,14,0
job_sword1,156,248,0	duplicate(SwordQTrap)	trapSword1st-31	FAKE_NPC,14,0
job_sword1,170,249,0	duplicate(SwordQTrap)	trapSword1st-32	FAKE_NPC,1,0
job_sword1,170,248,0	duplicate(SwordQTrap)	trapSword1st-33	FAKE_NPC,1,0
job_sword1,156,245,0	duplicate(SwordQTrap)	trapSword1st-34	FAKE_NPC,14,0
job_sword1,156,244,0	duplicate(SwordQTrap)	trapSword1st-35	FAKE_NPC,14,0
job_sword1,170,245,0	duplicate(SwordQTrap)	trapSword1st-36	FAKE_NPC,1,0
job_sword1,170,244,0	duplicate(SwordQTrap)	trapSword1st-37	FAKE_NPC,1,0
job_sword1,156,241,0	duplicate(SwordQTrap)	trapSword1st-38	FAKE_NPC,14,0
job_sword1,156,240,0	duplicate(SwordQTrap)	trapSword1st-39	FAKE_NPC,14,0
job_sword1,170,241,0	duplicate(SwordQTrap)	trapSword1st-40	FAKE_NPC,1,0
job_sword1,170,240,0	duplicate(SwordQTrap)	trapSword1st-41	FAKE_NPC,1,0
job_sword1,180,251,0	duplicate(SwordQTrap)	trapSword1st-42	FAKE_NPC,0,1
job_sword1,183,251,0	duplicate(SwordQTrap)	trapSword1st-43	FAKE_NPC,0,1
job_sword1,181,250,0	duplicate(SwordQTrap)	trapSword1st-44	FAKE_NPC,1,0
job_sword1,180,238,0	duplicate(SwordQTrap)	trapSword1st-45	FAKE_NPC,0,1
job_sword1,183,238,0	duplicate(SwordQTrap)	trapSword1st-46	FAKE_NPC,0,1
job_sword1,181,239,0	duplicate(SwordQTrap)	trapSword1st-47	FAKE_NPC,1,0

// -----------------------------------------------------------------
// 2º Parte
job_sword1,56,212,0	script	#trapSword2st::SwordQTrap2	FAKE_NPC,40,0,{
	OnTouch:
	switch (rand(1,5)) {
		case 1: warp("job_sword1",162,120); end;
		case 2: warp("job_sword1",94,120); end;
		case 3: warp("job_sword1",94,85); end;
		case 4: warp("job_sword1",162,85); end;
		case 5: warp("job_sword1",130,47); end;
	}
}

job_sword1,95,212,0	duplicate(SwordQTrap2)	trapSword2st-1	FAKE_NPC,2,0
job_sword1,56,210,0	duplicate(SwordQTrap2)	trapSword2st-2	FAKE_NPC,40,0
job_sword1,95,210,0	duplicate(SwordQTrap2)	trapSword2st-3	FAKE_NPC,2,0
job_sword1,16,206,0	duplicate(SwordQTrap2)	trapSword2st-4	FAKE_NPC,0,3
job_sword1,97,206,0	duplicate(SwordQTrap2)	trapSword2st-5	FAKE_NPC,0,3
job_sword1,56,203,0	duplicate(SwordQTrap2)	trapSword2st-6	FAKE_NPC,40,0
job_sword1,95,203,0	duplicate(SwordQTrap2)	trapSword2st-7	FAKE_NPC,2,0
job_sword1,56,201,0	duplicate(SwordQTrap2)	trapSword2st-8	FAKE_NPC,40,0
job_sword1,95,201,0	duplicate(SwordQTrap2)	trapSword2st-9	FAKE_NPC,2,0
job_sword1,113,212,0	duplicate(SwordQTrap2)	trapSword2st-10	FAKE_NPC,14,0
job_sword1,125,212,0	duplicate(SwordQTrap2)	trapSword2st-11	FAKE_NPC,2,0
job_sword1,113,210,0	duplicate(SwordQTrap2)	trapSword2st-12	FAKE_NPC,14,0
job_sword1,125,210,0	duplicate(SwordQTrap2)	trapSword2st-13	FAKE_NPC,2,0
job_sword1,100,206,0	duplicate(SwordQTrap2)	trapSword2st-14	FAKE_NPC,0,3
job_sword1,127,206,0	duplicate(SwordQTrap2)	trapSword2st-15	FAKE_NPC,0,3
job_sword1,113,203,0	duplicate(SwordQTrap2)	trapSword2st-16	FAKE_NPC,14,0
job_sword1,125,210,0	duplicate(SwordQTrap2)	trapSword2st-17	FAKE_NPC,2,0
job_sword1,113,201,0	duplicate(SwordQTrap2)	trapSword2st-18	FAKE_NPC,14,0
job_sword1,113,201,0	duplicate(SwordQTrap2)	trapSword2st-19	FAKE_NPC,2,0
job_sword1,155,212,0	duplicate(SwordQTrap2)	trapSword2st-20	FAKE_NPC,21,0
job_sword1,181,212,0	duplicate(SwordQTrap2)	trapSword2st-21	FAKE_NPC,2,0
job_sword1,155,210,0	duplicate(SwordQTrap2)	trapSword2st-22	FAKE_NPC,21,0
job_sword1,181,210,0	duplicate(SwordQTrap2)	trapSword2st-23	FAKE_NPC,2,0
job_sword1,130,206,0	duplicate(SwordQTrap2)	trapSword2st-24	FAKE_NPC,0,3
job_sword1,183,206,0	duplicate(SwordQTrap2)	trapSword2st-25	FAKE_NPC,0,3
job_sword1,155,203,0	duplicate(SwordQTrap2)	trapSword2st-26	FAKE_NPC,21,0
job_sword1,181,203,0	duplicate(SwordQTrap2)	trapSword2st-27	FAKE_NPC,2,0
job_sword1,155,201,0	duplicate(SwordQTrap2)	trapSword2st-28	FAKE_NPC,40,0
job_sword1,181,201,0	duplicate(SwordQTrap2)	trapSword2st-29	FAKE_NPC,2,0


// -----------------------------------------------------------------
// 3º Parte
job_sword1,17,174,0	script	#trapSword3st::SwordQTrap3	FAKE_NPC,2,0,{
	OnTouch:
	switch (rand(1,5)) {
		case 1: warp("job_sword1",195,15); end;
		case 2: warp("job_sword1",195,38); end;
		case 3: warp("job_sword1",231,30); end;
		case 4: warp("job_sword1",198,65); end;
		case 5: warp("job_sword1",196,116); end;
	}
}

job_sword1,17,163,0	duplicate(SwordQTrap3)	SwordQTrap3-1	FAKE_NPC,2,0
job_sword1,29,171,0	duplicate(SwordQTrap3)	SwordQTrap3-2	FAKE_NPC,2,0
job_sword1,31,168,0	duplicate(SwordQTrap3)	SwordQTrap3-3	FAKE_NPC,0,2
job_sword1,28,166,0	duplicate(SwordQTrap3)	SwordQTrap3-4	FAKE_NPC,2,0
job_sword1,26,168,0	duplicate(SwordQTrap3)	SwordQTrap3-5	FAKE_NPC,0,2
job_sword1,36,169,0	duplicate(SwordQTrap3)	SwordQTrap3-6	FAKE_NPC,0,0
job_sword1,37,169,0	duplicate(SwordQTrap3)	SwordQTrap3-7	FAKE_NPC,0,0
job_sword1,37,168,0	duplicate(SwordQTrap3)	SwordQTrap3-8	FAKE_NPC,0,0
job_sword1,36,168,0	duplicate(SwordQTrap3)	SwordQTrap3-9	FAKE_NPC,0,0
job_sword1,40,175,0	duplicate(SwordQTrap3)	SwordQTrap3-10	FAKE_NPC,0,1
job_sword1,41,175,0	duplicate(SwordQTrap3)	SwordQTrap3-11	FAKE_NPC,0,1
job_sword1,41,171,0	duplicate(SwordQTrap3)	SwordQTrap3-12	FAKE_NPC,1,0
job_sword1,41,170,0	duplicate(SwordQTrap3)	SwordQTrap3-13	FAKE_NPC,1,0
job_sword1,41,167,0	duplicate(SwordQTrap3)	SwordQTrap3-14	FAKE_NPC,1,0
job_sword1,41,166,0	duplicate(SwordQTrap3)	SwordQTrap3-15	FAKE_NPC,1,0
job_sword1,42,169,0	duplicate(SwordQTrap3)	SwordQTrap3-16	FAKE_NPC,0,1
job_sword1,43,170,0	duplicate(SwordQTrap3)	SwordQTrap3-17	FAKE_NPC,0,1
job_sword1,43,167,0	duplicate(SwordQTrap3)	SwordQTrap3-18	FAKE_NPC,0,1
job_sword1,40,162,0	duplicate(SwordQTrap3)	SwordQTrap3-19	FAKE_NPC,0,1
job_sword1,41,162,0	duplicate(SwordQTrap3)	SwordQTrap3-20	FAKE_NPC,0,1
job_sword1,46,175,0	duplicate(SwordQTrap3)	SwordQTrap3-21	FAKE_NPC,0,1
job_sword1,51,175,0	duplicate(SwordQTrap3)	SwordQTrap3-22	FAKE_NPC,0,1
job_sword1,47,174,0	duplicate(SwordQTrap3)	SwordQTrap3-23	FAKE_NPC,1,0
job_sword1,50,174,0	duplicate(SwordQTrap3)	SwordQTrap3-24	FAKE_NPC,1,0
job_sword1,48,173,0	duplicate(SwordQTrap3)	SwordQTrap3-25	FAKE_NPC,0,1
job_sword1,49,173,0	duplicate(SwordQTrap3)	SwordQTrap3-26	FAKE_NPC,0,1
job_sword1,46,162,0	duplicate(SwordQTrap3)	SwordQTrap3-27	FAKE_NPC,0,1
job_sword1,51,162,0	duplicate(SwordQTrap3)	SwordQTrap3-28	FAKE_NPC,0,1
job_sword1,47,163,0	duplicate(SwordQTrap3)	SwordQTrap3-29	FAKE_NPC,1,0
job_sword1,50,163,0	duplicate(SwordQTrap3)	SwordQTrap3-30	FAKE_NPC,1,0
job_sword1,48,164,0	duplicate(SwordQTrap3)	SwordQTrap3-31	FAKE_NPC,0,1
job_sword1,49,164,0	duplicate(SwordQTrap3)	SwordQTrap3-32	FAKE_NPC,0,1
job_sword1,54,170,0	duplicate(SwordQTrap3)	SwordQTrap3-33	FAKE_NPC,0,1
job_sword1,55,170,0	duplicate(SwordQTrap3)	SwordQTrap3-34	FAKE_NPC,0,1
job_sword1,54,167,0	duplicate(SwordQTrap3)	SwordQTrap3-35	FAKE_NPC,0,1
job_sword1,55,167,0	duplicate(SwordQTrap3)	SwordQTrap3-36	FAKE_NPC,0,1
job_sword1,53,169,0	duplicate(SwordQTrap3)	SwordQTrap3-37	FAKE_NPC,1,0
job_sword1,53,168,0	duplicate(SwordQTrap3)	SwordQTrap3-38	FAKE_NPC,1,0
job_sword1,56,169,0	duplicate(SwordQTrap3)	SwordQTrap3-39	FAKE_NPC,1,0
job_sword1,56,168,0	duplicate(SwordQTrap3)	SwordQTrap3-40	FAKE_NPC,1,0
job_sword1,58,175,0	duplicate(SwordQTrap3)	SwordQTrap3-41	FAKE_NPC,0,1
job_sword1,59,174,0	duplicate(SwordQTrap3)	SwordQTrap3-42	FAKE_NPC,1,0
job_sword1,60,173,0	duplicate(SwordQTrap3)	SwordQTrap3-43	FAKE_NPC,0,1
job_sword1,61,172,0	duplicate(SwordQTrap3)	SwordQTrap3-44	FAKE_NPC,1,0
job_sword1,58,162,0	duplicate(SwordQTrap3)	SwordQTrap3-45	FAKE_NPC,0,1
job_sword1,59,163,0	duplicate(SwordQTrap3)	SwordQTrap3-46	FAKE_NPC,1,0
job_sword1,60,164,0	duplicate(SwordQTrap3)	SwordQTrap3-47	FAKE_NPC,0,1
job_sword1,61,165,0	duplicate(SwordQTrap3)	SwordQTrap3-48	FAKE_NPC,1,0
job_sword1,76,172,0	duplicate(SwordQTrap3)	SwordQTrap3-49	FAKE_NPC,1,0
job_sword1,77,173,0	duplicate(SwordQTrap3)	SwordQTrap3-50	FAKE_NPC,0,1
job_sword1,78,174,0	duplicate(SwordQTrap3)	SwordQTrap3-51	FAKE_NPC,1,0
job_sword1,79,175,0	duplicate(SwordQTrap3)	SwordQTrap3-52	FAKE_NPC,0,1
job_sword1,76,165,0	duplicate(SwordQTrap3)	SwordQTrap3-53	FAKE_NPC,1,0
job_sword1,77,164,0	duplicate(SwordQTrap3)	SwordQTrap3-54	FAKE_NPC,0,1
job_sword1,78,163,0	duplicate(SwordQTrap3)	SwordQTrap3-55	FAKE_NPC,1,0
job_sword1,79,162,0	duplicate(SwordQTrap3)	SwordQTrap3-56	FAKE_NPC,0,1
job_sword1,94,175,0	duplicate(SwordQTrap3)	SwordQTrap3-57	FAKE_NPC,0,1
job_sword1,95,174,0	duplicate(SwordQTrap3)	SwordQTrap3-58	FAKE_NPC,1,0
job_sword1,98,174,0	duplicate(SwordQTrap3)	SwordQTrap3-59	FAKE_NPC,1,0
job_sword1,99,175,0	duplicate(SwordQTrap3)	SwordQTrap3-60	FAKE_NPC,0,1
job_sword1,96,169,0	duplicate(SwordQTrap3)	SwordQTrap3-61	FAKE_NPC,0,0
job_sword1,97,169,0	duplicate(SwordQTrap3)	SwordQTrap3-62	FAKE_NPC,0,0
job_sword1,97,168,0	duplicate(SwordQTrap3)	SwordQTrap3-63	FAKE_NPC,0,0
job_sword1,96,168,0	duplicate(SwordQTrap3)	SwordQTrap3-64	FAKE_NPC,0,0
job_sword1,94,162,0	duplicate(SwordQTrap3)	SwordQTrap3-65	FAKE_NPC,0,1
job_sword1,95,163,0	duplicate(SwordQTrap3)	SwordQTrap3-66	FAKE_NPC,1,0
job_sword1,98,163,0	duplicate(SwordQTrap3)	SwordQTrap3-67	FAKE_NPC,1,0
job_sword1,99,162,0	duplicate(SwordQTrap3)	SwordQTrap3-68	FAKE_NPC,0,1
job_sword1,114,175,0	duplicate(SwordQTrap3)	SwordQTrap3-69	FAKE_NPC,0,1
job_sword1,115,175,0	duplicate(SwordQTrap3)	SwordQTrap3-70	FAKE_NPC,0,1
job_sword1,114,162,0	duplicate(SwordQTrap3)	SwordQTrap3-71	FAKE_NPC,0,1
job_sword1,115,162,0	duplicate(SwordQTrap3)	SwordQTrap3-72	FAKE_NPC,0,1
job_sword1,126,175,0	duplicate(SwordQTrap3)	SwordQTrap3-73	FAKE_NPC,0,1
job_sword1,127,175,0	duplicate(SwordQTrap3)	SwordQTrap3-74	FAKE_NPC,0,1
job_sword1,126,162,0	duplicate(SwordQTrap3)	SwordQTrap3-75	FAKE_NPC,0,1
job_sword1,127,162,0	duplicate(SwordQTrap3)	SwordQTrap3-76	FAKE_NPC,0,1
job_sword1,160,174,0	duplicate(SwordQTrap3)	SwordQTrap3-77	FAKE_NPC,0,2
job_sword1,161,174,0	duplicate(SwordQTrap3)	SwordQTrap3-78	FAKE_NPC,0,2
job_sword1,160,163,0	duplicate(SwordQTrap3)	SwordQTrap3-79	FAKE_NPC,0,2
job_sword1,161,163,0	duplicate(SwordQTrap3)	SwordQTrap3-80	FAKE_NPC,0,2
job_sword1,168,175,0	duplicate(SwordQTrap3)	SwordQTrap3-81	FAKE_NPC,0,2
job_sword1,169,175,0	duplicate(SwordQTrap3)	SwordQTrap3-82	FAKE_NPC,0,2
job_sword1,168,162,0	duplicate(SwordQTrap3)	SwordQTrap3-83	FAKE_NPC,0,2
job_sword1,169,162,0	duplicate(SwordQTrap3)	SwordQTrap3-84	FAKE_NPC,0,2
job_sword1,176,174,0	duplicate(SwordQTrap3)	SwordQTrap3-85	FAKE_NPC,0,2
job_sword1,177,174,0	duplicate(SwordQTrap3)	SwordQTrap3-86	FAKE_NPC,0,2
job_sword1,178,173,0	duplicate(SwordQTrap3)	SwordQTrap3-87	FAKE_NPC,1,0
job_sword1,178,172,0	duplicate(SwordQTrap3)	SwordQTrap3-88	FAKE_NPC,1,0
job_sword1,181,174,0	duplicate(SwordQTrap3)	SwordQTrap3-89	FAKE_NPC,2,0
job_sword1,179,169,0	duplicate(SwordQTrap3)	SwordQTrap3-90	FAKE_NPC,3,0
job_sword1,179,168,0	duplicate(SwordQTrap3)	SwordQTrap3-91	FAKE_NPC,3,0
job_sword1,182,169,0	duplicate(SwordQTrap3)	SwordQTrap3-92	FAKE_NPC,0,2
job_sword1,183,169,0	duplicate(SwordQTrap3)	SwordQTrap3-93	FAKE_NPC,0,2
job_sword1,181,167,0	duplicate(SwordQTrap3)	SwordQTrap3-94	FAKE_NPC,1,0
job_sword1,181,166,0	duplicate(SwordQTrap3)	SwordQTrap3-95	FAKE_NPC,1,0
job_sword1,183,167,0	duplicate(SwordQTrap3)	SwordQTrap3-96	FAKE_NPC,0,1
job_sword1,176,163,0	duplicate(SwordQTrap3)	SwordQTrap3-97	FAKE_NPC,0,2
job_sword1,177,163,0	duplicate(SwordQTrap3)	SwordQTrap3-98	FAKE_NPC,0,2
job_sword1,181,163,0	duplicate(SwordQTrap3)	SwordQTrap3-99	FAKE_NPC,2,0

// -----------------------------------------------------------------
// - [ Saídas do Subterrâneo ] -
// -----------------------------------------------------------------
job_sword1,65,117,0	warp	WarpSword1-a	1,1,job_sword1,10,245
job_sword1,98,27,0	warp	WarpSword1-b	1,1,job_sword1,11,207
job_sword1,161,27,0	warp	WarpSword1-c	1,1,job_sword1,11,207
job_sword1,239,117,0	warp	WarpSword1-d	1,1,job_sword1,11,169

