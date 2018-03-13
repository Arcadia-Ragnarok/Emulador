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
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na cidade einbroch                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
einbroch,94,267,3	script	Funcion�rio#ein01	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + " ao Aeroporto de Einbroch.";
	mes "Utilize essa porta para embarcar no digir�vel que te leva para Juno, Lighthalzen e Hugel na Rep�blica de Schwarzwald.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Caso seja Einbroch o seu destino, des�a as escadas e fale com nossa Equipe de Recep��o para lev�-lo at� o terminal principal.";
	mes "Obrigado, e tenha um voo agrad�vel.";
	close;
}

// ------------------------------------------------------------------
einbroch,259,326,3	script	Leslie#ein_1	4_F_EINOLD,{
	mes "[Leslie]";
	mes "Uma senhora velha como eu n�o pode respirar esse ar!";
	mes "Como � que as pessoas ainda vivem aqui, com essa fuma�a?";
	mes "Claro, o ar de Einbech n�o n�o � puro, mas o ar aqui em Einbroch � muito pior!";
	next;
	mes "[Leslie]";
	mes "Eu odeio vir para c� as vezes!";
	mes "O ar � todo polu�do e est� cidade est� cheia de presos idiota!";
	mes "Mas aqui vende-se coisas que eu n�o encontro em casa...";
	close;
}

// ------------------------------------------------------------------
einbroch,236,191,3	script	Tan#ein	4_M_EINMAN,{
	mes "[Tan]";
	mes "Todas as f�bricas aqui em Einbroch est�o causando s�rios problemas de polui��o do ar.";
	next;
	mes "[Tan]";
	mes "Eu sou engenheiro do Aeroporto e todo dia, o dia todo, lido com manchas de �leo e todo tipo de poluentes.";
	mes "Estou surpreso que ainda n�o fiquei doente.";
	next;
	mes "[Tan]";
	mes "Mesmo assim, eu tomo cuidado como posso.";
	mes "Aonde quer que eu v� nesta cidade, tem essa fuma�a vermelha, eu sempre uso minha M�scara Cir�rgica.";
	mes "Se voc� for ficar por aqui um tempo, voc� deveria carregar uma tamb�m.";
	close;
}

// ------------------------------------------------------------------
einbroch,228,121,5	script	Pequeno Toby#ein-1	4_M_EINMAN,{
	mes "[Pequeno Toby]";
	mes "Me perdoe...";
	mes "Mas estou perdido!";
	mes "Eu n�o posso encontrar mam�e e papai!";
	next;
	mes "[Pequeno Toby]";
	mes "E-eu estou no Aeroporto?!";
	mes "Meus pais deveriam vir me buscar, mas eu ainda n�o encontrei eles!";
	mes "N�s acabamos de nos mudar, ent�o n�o sei aonde ficam as coisas!";
	next;
	mes "[Pequeno Toby]";
	mes "E-espere!";
	mes "Aonde esta indo?!";
	mes "N�o me deixe aqui, estou sozinho...!";
	close;
}

// ------------------------------------------------------------------
einbroch,40,116,1	script	Eng. do Aeroporto#ein	4_M_EINMAN,{
	mes "[Engenheiro do Aeroporto]";
	mes "E-Ei!";
	mes "N�o toque em minha preciosa Burielle!";
	mes "Eu terminei os reparos dela e agora ela esta dormindo!";
	mes "A-afaste-se dela!";
	next;
	switch(select("Quem � Burielle?", "Desculpe")) {
		case 1:
		mes "[Engenheiro do Aeroporto]";
		mes "Burielle � o modelo de Aeronave mais bonito construido nos �ltimos dez anos!";
		mes "Ela pode estar no ch�o agora, mas com as minhas m�os curadores, ela conquistar� os c�us denovo!";
		next;
		switch(select("Ah!", "Uh huh...")) {
			case 1:
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "Entendo, ent�o voc� esta trabalhando na restaura��o desta magnifica esp�cime de Aeronave.";
			next;
			mes "[Engenheiro do Aeroporto]";
			mes "Sim.";
			mes "Eu agrade�o isso apenas se voc� tomar cuidado.";
			mes "Eu coloquei muito amor concerto de Burielle...";
			close;
			case 2:
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "Uh huh...";
			mes "Certo.";
			mes "Por um segundo atr�s, pensei que voc� estava falando de uma pessoa, mas agora percebi que n�o, voc� sabe, como um louco.";
			next;
			mes "[" + strcharinfo(PC_NAME) + "]";
			mes "Oh, voc� disse, \"modelo mais bonito\"?";
			mes "Todas as Aeronaves pra mim parecem iguais, essa aqui n�o � especial contudo.";
			mes "Voc� esta ficando maluco, pobre coitado.";
			next;
			emotion(e_an);
			mes "[Engenheiro do Aeroporto]";
			mes "O-oSque...?!";
			close;
		}
		case 2:
		mes "[Engenheiro do Aeroporto]";
		mes "Bem, pelo menos voc� sabe o que fez de errado.";
		mes "Agora pare de perturbar ela e saia!";
		close;
	}
}

// ------------------------------------------------------------------
einbroch,294,312,3	script	Centzu#ein	4_M_EINMAN2,{
	mes "[Centzu]";
	mes "Eu ja vivi aqui a um bom tempo atr�s e agora vejo que esta grande cidade continua crescendo a cada dia que passa.";
	next;
	mes "[Centzu]";
	mes "Como Einbroch cresceu tanto e t�o r�pido?";
	mes "Eu ainda n�o consigo acreditar que ela se desenvolveu tanto.";
	mes "Bem, eu acredito que n�o � da minha conta.";
	mes "Nada que eu fizer far� diferen�a... ";
	next;
	mes "[Centzu]";
	mes "Mesmo com uma industrializa��o r�pida n�o pode ser boa para a natureza e para as pessoas, eu simplesmente me sento, e assisto o que acontece e aproveito a vida...";
	close;
}

// ------------------------------------------------------------------
einbroch,232,255,5	script	Khowropher#ein	4_M_EINOLD,{
	mes "[Khowropher]";
	mes "^666666*Tosse Tosse*^000000";
	mes "O ar aqui � t�o grosso e sujo!";
	mes "E � pior para n�s velhos com problemas respirat�rios!";
	next;
	mes "[Khowropher]";
	mes "Eu n�o ligo se eles continuam contruindo mais e mais f�bricas e casas nesta cidade.";
	mes "Assim, eu gostaria de passar o resto da minha vida em algum lugar quieto e com o ar limpo...";
	next;
	mes "[Khowropher]";
	mes "Ent�o novamente, Einbroch � minha cidade natal, e eu n�o posso simplesmente sair.";
	mes "Creio que � meu destino sofrer com este ar at� o dia que eu morrer.";
	mes "^666666*Sigh...*^000000";
	close;
}

// ------------------------------------------------------------------
einbroch,143,109,5	script	Khetine#ein	4_M_EINMAN,{
	mes "[Khetine]";
	mes "Ultimamente, temos conversado sobre este pr�dio vazio que foi convertido em algum tipo de instala��o misteriosa.";
	next;
	mes "[Khetine]";
	mes "Tudo parece muito sombrio, mas eu acho que n�o � realmente o meu trabalho saber sobre isso.";
	mes "Quero dizer, se isso n�o me afeta, porque deveria me preocupar?";
	close;
}

// ------------------------------------------------------------------
einbroch,229,149,3	script	Sleik#ein	4_M_EINMAN2,{
	mes "[Sleik]";
	mes "Estranhamente, temos uma Esta��o de Trem que todo mundo tem chamado de uma vit�ria pra ci�ncia.";
	mes "Eu digo, n�o deveriam estar mais impressionados com a Aeronave?";
	next;
	mes "[Sleik]";
	mes "Agora, se voc� quer saber aonde o trem atualmente vai, eu n�o saberei te dizer.";
	mes "Afinal, nunca andei nele.";
	mes "Mas eu continuo achando que ter uma Esta��o de Trem pr�pria � muito bom.";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ein_in01,113,211,3	script	Teinz#ein	4_M_REPAIR,{
	mes "[Teinz]";
	mes "Se voc� simplesmente me der dinheiro, serei seu escravo!";
	mes "N�o tem nada que eu n�o faria. Tudo � um jogo justo.";
	mes "Inferno, eu ate ficaria n� se voc� me pagasse o suficiente.";
	next;
	mes "[Teinz]";
	mes "Se voc� me pagar o quanto preciso, eu trabalharei duro para voc�, em qualquer servi�o.";
	mes "Claro, minera��o � dif�cil, mas enquanto os zenys continuarem a vir, estarei feliz.";
	mes "Heh heh heh.";
	close;
}

// ------------------------------------------------------------------
ein_in01,48,220,5	script	Lowe#ein	4_M_REPAIR,{
	mes "[Lowe]";
	mes "...";
	mes "......";
	next;
	mes "[Lowe]";
	mes "...";
	mes "......";
	mes ".........";
	next;
	mes "[Lowe]";
	mes "Ei.";
	mes "Porque voc� esta olhando pra mim assim?";
	mes "N�o temos tempo para conversar no trabalho.";
	mes "Se Canphotii capturar voc� provavelmente ser� punido...";
	next;
	mes "[Lowe]";
	mes "Oh espere...";
	mes "Voc� n�o trabalha aqui.";
	mes "Me desculpe, esse tipo de rea��o � um velho h�bito pra mim.";
	close;
}

// ------------------------------------------------------------------
ein_in01,87,237,5	script	Dinje#ein	4_F_EINWOMAN,{
	mes "[Dinje]";
	mes "Voc� sabe porque uma senhora como eu trabalha em uma f�brica?";
	mes "Vou te dizer porque...";
	next;
	mes "[Dinje]";
	mes "Meu marido folgado, Gesin, esta deitado ali no ch�o.";
	mes "Ent�o eu tenho que trabalhar para poder nos sustentar!";
	next;
	mes "[Dinje]";
	mes "N�o podemos descan�ar nem mesmo um segundo se queremos juntar dinheiro suficiente para ficar ricos e saud�veis um dia.";
	mes "Voc� me entende?";
	next;
	mes "[Dinje]";
	mes "Bem, meu marido �bviamente n�o!";
	mes "Como ele pode n�o saber como o mundo real funciona?!";
	mes "Ei, chute ele pra mim se ele n�o acordar logo!";
	close;
}

// ------------------------------------------------------------------
ein_in01,84,218,3	script	Tsuen#ein	4_M_REPAIR,{
	mes "[Tsuen]";
	mes "Havia um tempo em que eu sonhava em ser um aventureiro assim como voc�.";
	mes "Mas isso foi a muito tempo atr�s...";
	next;
	mes "[Tsuen]";
	mes "Agora, n�o sou nada al�m de um gerente da f�brica.";
	mes "Mesmo assim, n�o sendo o melhor trabalho, eu estou muito satisfeito.";
	mes "Eu tenho certeza que as pessoas gostam dos produtos que supervisiono...";
	next;
	mes "[Tsuen]";
	mes "Talvez minha vida estava destinada para ser dessa maneira, mesmo que n�o seja como eu tenha planejado.";
	mes "Mas o tempo vir� quando entrar de f�rias e viajar pelo mundo todo assim que eu tiver uma chance!";
	next;
	mes "[Tsuen]";
	mes "Eu espero que esse dia chegue quando eu puder encontra-lo neste vasto mundo e comprimenta-lo como um grande amigo aventureiro!";
	close;
}

// ------------------------------------------------------------------
ein_in01,103,239,1	script	Gesin#ein	4_M_DIEMAN,{
	mes "[Gesin]";
	mes "Arrrgh!";
	mes "Isso esta me matando!";
	mes "Porque eu poderia ser rico?";
	mes "Qual o problema em viver como a vivemos?";
	next;
	mes "[Gesin]";
	mes "Eu tenho um problema com a minha atual forma de viver.";
	mes "Mas sempre a velha bola e as correntes n�o concordam.";
	mes "Porque ela � t�o obsecada com riqueza e poder?";
	next;
	mes "[Gesin]";
	mes "Bem, no meu caso, eu gosto de ajuda-la, mas eu n�o posso levantar!";
	mes "Estou exausto e meu corpo esta sobrecarregado.";
	mes "N�o tenho for�a contudo.";
	next;
	mes "[Gesin]";
	mes "Isso � horr�vel.";
	mes "Eu deveria estar descan�ando ao inv�s de me preocupando em fazer dinheiro...";
	close;
}

// ------------------------------------------------------------------
ein_in01,33,275,1	script	Pevtatin#ein	4_M_EINMINER,{
	mes "[Pevtatin]";
	mes "Meu bom Deus!";
	mes "Eu estou estressado!";
	mes "Isto tem sido sem parar desde que me mudei pra ca!";
	next;
	mes "[Pevtatin]";
	mes "O servi�o � pesado e o chefe ja me odeia!";
	mes "Eu n�o me mudei pra ca para isso!";
	mes "Mas, o pagamento � decenete, ent�o acho que vou ficar por aqui mais um pouco.";
	next;
	mes "[Pevtatin]";
	mes "Aqui vai...!";
	close;
}

// ------------------------------------------------------------------
ein_in01,36,204,3	script	Rombell#ein	4_M_REPAIR,{
	mes "[Rombell]";
	mes "� �tima que a f�brica est� fazendo bons neg�cios e tra�ando um lote de lucros.";
	mes "Mas eu ainda tenho uma preocupa��o maior.";
	next;
	mes "[Rombell]";
	mes "O tamanho da polui��o que este lugar vem causando � horr�vel!";
	mes "N�s temos estas m�quinas cuspindo gases t�xicos o dia todo!";
	mes "O ar n�o vai se manter seguro por muito tempo...";
	next;
	mes "[Rombell]";
	mes "Eu digo, o ar que respiramos agora mesmo est� muito sujo e as coisas s� v�o ficando pior.";
	mes "Como n�s poderiamos solucionar este problema?";
	close;
}

// ------------------------------------------------------------------
ein_in01,64,271,3	script	Vonstein#ein	4_M_EINMAN,{
	mes "[Vonstein]";
	mes "Olhando para este metal liquido e quente borbulhando me d�o uma sensa��o t�o boa.";
	mes "� como se isso pudesse derreter qualquer coisa!";
	next;
	mes "[Vonstein]";
	mes "Imagine cobrindo uma rua inteira de pessoas com isso daqui!";
	mes "Oh, me desculpe se falava como louco!";
	mes "Estava s� brincando.";
	close;
}

// ------------------------------------------------------------------
ein_in01,49,202,3	script	Dorf#ein	4_M_REPAIR,{
	mes "[Dorf]";
	mes "M�quinas s�o t�o convenientes.";
	mes "Basta olhar para a corpora��o realizando facilmente as tarefas que seriam dif�ceis de fazer sozinhos.";
	next;
	mes "[Dorf]";
	mes "Agora sim � isso que eu chamo tecnologia!";
	mes "Claro, � preciso esfor�o e dinheiro pra fazer uma destas, mas do que me interessa?";
	next;
	mes "[Dorf]";
	mes "Eu n�o tenho problemas, desde que essa coisa louca mantenha o trabalho do modo que eu quero!";
	close;
}

// ------------------------------------------------------------------
ein_in01,68,209,5	script	Khashurantze#ein	4_M_EIN_SOLDIER,{
	mes "[Khashurantze]";
	mes "Me desculpe, mas voc� precisa de uma autoriza��o especial para entrar.";
	mes "Terei que pedir que saia agora.";
	close2;
	warp("einbroch", 179, 63);
	end;
}

// ------------------------------------------------------------------
ein_in01,85,261,3	script	Zherin#ein	4_M_REPAIR,{
	mes "[Zherin]";
	mes "Eu estou encarregado desta grande folhanlha que cont�m toda essa ebuli��o de magma.";
	next;
	mes "[Zherin]";
	mes "Mesmo que n�o precise de muito trabalho, esse trabalho � muito cansativo.";
	mes "Eu tenho que prestar muita aten��o o tempo todo.";
	mes "� muito estressante.";
	next;
	mes "[Zherin]";
	mes "Ainda assim, estou orgulhoso do meu trabalho, uma vez que tenho responsabilidade de garantir a seguran�a dos trabalhadores.";
	mes "Contudo, n�o chegue muito perto da fornalha.";
	mes "Caso contr�rio poder� ser queimado por acidente!";
	close;
}

// ------------------------------------------------------------------
ein_in01,43,252,3	script	Canphotii#ein	4_M_EIN_SOLDIER,{
	mes "[Canphotii]";
	mes "R�pido, r�pido!";
	mes "Entre logo no ritmo!";
	mes "Qualquer que trabalhar lento demais ser� punido!";
	next;
	mes "[Canphotii]";
	mes "N�o consegue entender isso?!";
	mes "Agora volte para sua esta��o de trabalho!";
	mes "Espere, voc� n�o trabalha aqui n�o �?";
	mes "Se n�o, pare de zanzar por ae!";
	next;
	mes "[Canphotii]";
	mes "Voc� n�o poderia ter entrado aqui!";
	mes "Eu n�o acredito que deixaram voc� entrar!";
	mes "Isso requer uma medida disciplinar extrema!";
	close;
}

// ------------------------------------------------------------------
ein_in01,31,217,3	script	Cendadt#ein	4_M_REPAIR,{
	mes "[Cendadt]";
	mes "Esta f�brica tem um monte de coisas que precisam de conserto!";
	mes "� incr�vel que ela continue funcionando!";
	next;
	mes "[Cendadt]";
	mes "Sorte para n�s, eu ouvi dizer alguns aventureiros altru�stas tem doado materiais para ajudar a manter esta f�brica de cair aos peda�os... ou pior.";
	mes "Mas � apenas um boato.";
	next;
	mes "[Cendadt]";
	mes "^666666*Sigh*^000000";
	mes "Mesmo que isso for verdade, n�o h� nada que se possa fazer.";
	mes "Ningu�m tem coragem de desafiar o sistema, voc� sabe?";
	next;
	mes "[Cendadt]";
	mes "Eu...";
	mes "� melhor eu voltar ao trabalho antes que eu entre numa fria...";
	close;
}
