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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns na cidade einbroch                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
einbroch,94,267,3	script	Funcion�rio#ein01	4_F_02,{
	mes("[Equipe do Aeroporto]\n Bem-vind" + (Sex == SEX_MALE ? "o" : "a") + " ao Aeroporto de Einbroch.\n Utilize essa porta para embarcar no digir�vel que te leva para Juno, Lighthalzen e Hugel na Rep�blica de Schwarzwald.");
	next;
	mes("[Equipe do Aeroporto]\n Caso seja Einbroch o seu destino, des�a as escadas e fale com nossa Equipe de Recep��o para lev�-lo at� o terminal principal.\n Obrigado, e tenha um voo agrad�vel.");
	close;
}

// ------------------------------------------------------------------
einbroch,259,326,3	script	Leslie#ein_1	4_F_EINOLD,{
	mes("[Leslie]\n Uma senhora velha como eu n�o pode respirar esse ar!\n Como � que as pessoas ainda vivem aqui, com essa fuma�a?\n Claro, o ar de Einbech n�o n�o � puro, mas o ar aqui em Einbroch � muito pior!");
	next;
	mes("[Leslie]\n Eu odeio vir para c� as vezes!\n O ar � todo polu�do e est� cidade est� cheia de presos idiota!\n Mas aqui vende-se coisas que eu n�o encontro em casa...");
	close;
}

// ------------------------------------------------------------------
einbroch,236,191,3	script	Tan#ein	4_M_EINMAN,{
	mes("[Tan]\n Todas as f�bricas aqui em Einbroch est�o causando s�rios problemas de polui��o do ar.");
	next;
	mes("[Tan]\n Eu sou engenheiro do Aeroporto e todo dia, o dia todo, lido com manchas de �leo e todo tipo de poluentes.\n Estou surpreso que ainda n�o fiquei doente.");
	next;
	mes("[Tan]\n Mesmo assim, eu tomo cuidado como posso.\n Aonde quer que eu v� nesta cidade, tem essa fuma�a vermelha, eu sempre uso minha M�scara Cir�rgica.\n Se voc� for ficar por aqui um tempo, voc� deveria carregar uma tamb�m.");
	close;
}

// ------------------------------------------------------------------
einbroch,228,121,5	script	Pequeno Toby#ein-1	4_M_EINMAN,{
	mes("[Pequeno Toby]\n Me perdoe...\n Mas estou perdido!\n Eu n�o posso encontrar mam�e e papai!");
	next;
	mes("[Pequeno Toby]\n E-eu estou no Aeroporto?!\n Meus pais deveriam vir me buscar, mas eu ainda n�o encontrei eles!\n N�s acabamos de nos mudar, ent�o n�o sei aonde ficam as coisas!");
	next;
	mes("[Pequeno Toby]\n E-espere!\n Aonde esta indo?!\n N�o me deixe aqui, estou sozinho...!");
	close;
}

// ------------------------------------------------------------------
einbroch,40,116,1	script	Eng. do Aeroporto#ein	4_M_EINMAN,{
	mes("[Engenheiro do Aeroporto]\n E-Ei!\n N�o toque em minha preciosa Burielle!\n Eu terminei os reparos dela e agora ela esta dormindo!\n A-afaste-se dela!");
	next;
	switch(select("Quem � Burielle?", "Desculpe")) {
		case 1:
		mes("[Engenheiro do Aeroporto]\n Burielle � o modelo de Aeronave mais bonito construido nos �ltimos dez anos!\n Ela pode estar no ch�o agora, mas com as minhas m�os curadores, ela conquistar� os c�us denovo!");
		next;
		switch(select("Ah!", "Uh huh...")) {
			case 1:
			mes("[" + strcharinfo(PC_NAME) + "]\n Entendo, ent�o voc� esta trabalhando na restaura��o desta magnifica esp�cime de Aeronave.");
			next;
			mes("[Engenheiro do Aeroporto]\n Sim.\n Eu agrade�o isso apenas se voc� tomar cuidado.\n Eu coloquei muito amor concerto de Burielle...");
			close;
			case 2:
			mes("[" + strcharinfo(PC_NAME) + "]\n Uh huh...\n Certo.\n Por um segundo atr�s, pensei que voc� estava falando de uma pessoa, mas agora percebi que n�o, voc� sabe, como um louco.");
			next;
			mes("[" + strcharinfo(PC_NAME) + "]\n Oh, voc� disse, \"modelo mais bonito\"?\n Todas as Aeronaves pra mim parecem iguais, essa aqui n�o � especial contudo.\n Voc� esta ficando maluco, pobre coitado.");
			next;
			emotion(e_an);
			mes("[Engenheiro do Aeroporto]\n O-oSque...?!");
			close;
		}
		case 2:
		mes("[Engenheiro do Aeroporto]\n Bem, pelo menos voc� sabe o que fez de errado.\n Agora pare de perturbar ela e saia!");
		close;
	}
}

// ------------------------------------------------------------------
einbroch,294,312,3	script	Centzu#ein	4_M_EINMAN2,{
	mes("[Centzu]\n Eu ja vivi aqui a um bom tempo atr�s e agora vejo que esta grande cidade continua crescendo a cada dia que passa.");
	next;
	mes("[Centzu]\n Como Einbroch cresceu tanto e t�o r�pido?\n Eu ainda n�o consigo acreditar que ela se desenvolveu tanto.\n Bem, eu acredito que n�o � da minha conta.\n Nada que eu fizer far� diferen�a... ");
	next;
	mes("[Centzu]\n Mesmo com uma industrializa��o r�pida n�o pode ser boa para a natureza e para as pessoas, eu simplesmente me sento, e assisto o que acontece e aproveito a vida...");
	close;
}

// ------------------------------------------------------------------
einbroch,232,255,5	script	Khowropher#ein	4_M_EINOLD,{
	mes("[Khowropher]\n ^666666*Tosse Tosse*^000000\n O ar aqui � t�o grosso e sujo!\n E � pior para n�s velhos com problemas respirat�rios!");
	next;
	mes("[Khowropher]\n Eu n�o ligo se eles continuam contruindo mais e mais f�bricas e casas nesta cidade.\n Assim, eu gostaria de passar o resto da minha vida em algum lugar quieto e com o ar limpo...");
	next;
	mes("[Khowropher]\n Ent�o novamente, Einbroch � minha cidade natal, e eu n�o posso simplesmente sair.\n Creio que � meu destino sofrer com este ar at� o dia que eu morrer.\n ^666666*Sigh...*^000000");
	close;
}

// ------------------------------------------------------------------
einbroch,143,109,5	script	Khetine#ein	4_M_EINMAN,{
	mes("[Khetine]\n Ultimamente, temos conversado sobre este pr�dio vazio que foi convertido em algum tipo de instala��o misteriosa.");
	next;
	mes("[Khetine]\n Tudo parece muito sombrio, mas eu acho que n�o � realmente o meu trabalho saber sobre isso.\n Quero dizer, se isso n�o me afeta, porque deveria me preocupar?");
	close;
}

// ------------------------------------------------------------------
einbroch,229,149,3	script	Sleik#ein	4_M_EINMAN2,{
	mes("[Sleik]\n Estranhamente, temos uma Esta��o de Trem que todo mundo tem chamado de uma vit�ria pra ci�ncia.\n Eu digo, n�o deveriam estar mais impressionados com a Aeronave?");
	next;
	mes("[Sleik]\n Agora, se voc� quer saber aonde o trem atualmente vai, eu n�o saberei te dizer.\n Afinal, nunca andei nele.\n Mas eu continuo achando que ter uma Esta��o de Trem pr�pria � muito bom.");
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ein_in01,113,211,3	script	Teinz#ein	4_M_REPAIR,{
	mes("[Teinz]\n Se voc� simplesmente me der dinheiro, serei seu escravo!\n N�o tem nada que eu n�o faria. Tudo � um jogo justo.\n Inferno, eu ate ficaria n� se voc� me pagasse o suficiente.");
	next;
	mes("[Teinz]\n Se voc� me pagar o quanto preciso, eu trabalharei duro para voc�, em qualquer servi�o.\n Claro, minera��o � dif�cil, mas enquanto os zenys continuarem a vir, estarei feliz.\n Heh heh heh.");
	close;
}

// ------------------------------------------------------------------
ein_in01,48,220,5	script	Lowe#ein	4_M_REPAIR,{
	mes("[Lowe]\n ...\n ......");
	next;
	mes("[Lowe]\n ...\n ......\n .........");
	next;
	mes("[Lowe]\n Ei.\n Porque voc� esta olhando pra mim assim?\n N�o temos tempo para conversar no trabalho.\n Se Canphotii capturar voc� provavelmente ser� punido...");
	next;
	mes("[Lowe]\n Oh espere...\n Voc� n�o trabalha aqui.\n Me desculpe, esse tipo de rea��o � um velho h�bito pra mim.");
	close;
}

// ------------------------------------------------------------------
ein_in01,87,237,5	script	Dinje#ein	4_F_EINWOMAN,{
	mes("[Dinje]\n Voc� sabe porque uma senhora como eu trabalha em uma f�brica?\n Vou te dizer porque...");
	next;
	mes("[Dinje]\n Meu marido folgado, Gesin, esta deitado ali no ch�o.\n Ent�o eu tenho que trabalhar para poder nos sustentar!");
	next;
	mes("[Dinje]\n N�o podemos descan�ar nem mesmo um segundo se queremos juntar dinheiro suficiente para ficar ricos e saud�veis um dia.\n Voc� me entende?");
	next;
	mes("[Dinje]\n Bem, meu marido �bviamente n�o!\n Como ele pode n�o saber como o mundo real funciona?!\n Ei, chute ele pra mim se ele n�o acordar logo!");
	close;
}

// ------------------------------------------------------------------
ein_in01,84,218,3	script	Tsuen#ein	4_M_REPAIR,{
	mes("[Tsuen]\n Havia um tempo em que eu sonhava em ser um aventureiro assim como voc�.\n Mas isso foi a muito tempo atr�s...");
	next;
	mes("[Tsuen]\n Agora, n�o sou nada al�m de um gerente da f�brica.\n Mesmo assim, n�o sendo o melhor trabalho, eu estou muito satisfeito.\n Eu tenho certeza que as pessoas gostam dos produtos que supervisiono...");
	next;
	mes("[Tsuen]\n Talvez minha vida estava destinada para ser dessa maneira, mesmo que n�o seja como eu tenha planejado.\n Mas o tempo vir� quando entrar de f�rias e viajar pelo mundo todo assim que eu tiver uma chance!");
	next;
	mes("[Tsuen]\n Eu espero que esse dia chegue quando eu puder encontra-lo neste vasto mundo e comprimenta-lo como um grande amigo aventureiro!");
	close;
}

// ------------------------------------------------------------------
ein_in01,103,239,1	script	Gesin#ein	4_M_DIEMAN,{
	mes("[Gesin]\n Arrrgh!\n Isso esta me matando!\n Porque eu poderia ser rico?\n Qual o problema em viver como a vivemos?");
	next;
	mes("[Gesin]\n Eu tenho um problema com a minha atual forma de viver.\n Mas sempre a velha bola e as correntes n�o concordam.\n Porque ela � t�o obsecada com riqueza e poder?");
	next;
	mes("[Gesin]\n Bem, no meu caso, eu gosto de ajuda-la, mas eu n�o posso levantar!\n Estou exausto e meu corpo esta sobrecarregado.\n N�o tenho for�a contudo.");
	next;
	mes("[Gesin]\n Isso � horr�vel.\n Eu deveria estar descan�ando ao inv�s de me preocupando em fazer dinheiro...");
	close;
}

// ------------------------------------------------------------------
ein_in01,33,275,1	script	Pevtatin#ein	4_M_EINMINER,{
	mes("[Pevtatin]\n Meu bom Deus!\n Eu estou estressado!\n Isto tem sido sem parar desde que me mudei pra ca!");
	next;
	mes("[Pevtatin]\n O servi�o � pesado e o chefe ja me odeia!\n Eu n�o me mudei pra ca para isso!\n Mas, o pagamento � decenete, ent�o acho que vou ficar por aqui mais um pouco.");
	next;
	mes("[Pevtatin]\n Aqui vai...!");
	close;
}

// ------------------------------------------------------------------
ein_in01,36,204,3	script	Rombell#ein	4_M_REPAIR,{
	mes("[Rombell]\n � �tima que a f�brica est� fazendo bons neg�cios e tra�ando um lote de lucros.\n Mas eu ainda tenho uma preocupa��o maior.");
	next;
	mes("[Rombell]\n O tamanho da polui��o que este lugar vem causando � horr�vel!\n N�s temos estas m�quinas cuspindo gases t�xicos o dia todo!\n O ar n�o vai se manter seguro por muito tempo...");
	next;
	mes("[Rombell]\n Eu digo, o ar que respiramos agora mesmo est� muito sujo e as coisas s� v�o ficando pior.\n Como n�s poderiamos solucionar este problema?");
	close;
}

// ------------------------------------------------------------------
ein_in01,64,271,3	script	Vonstein#ein	4_M_EINMAN,{
	mes("[Vonstein]\n Olhando para este metal liquido e quente borbulhando me d�o uma sensa��o t�o boa.\n � como se isso pudesse derreter qualquer coisa!");
	next;
	mes("[Vonstein]\n Imagine cobrindo uma rua inteira de pessoas com isso daqui!\n Oh, me desculpe se falava como louco!\n Estava s� brincando.");
	close;
}

// ------------------------------------------------------------------
ein_in01,49,202,3	script	Dorf#ein	4_M_REPAIR,{
	mes("[Dorf]\n M�quinas s�o t�o convenientes.\n Basta olhar para a corpora��o realizando facilmente as tarefas que seriam dif�ceis de fazer sozinhos.");
	next;
	mes("[Dorf]\n Agora sim � isso que eu chamo tecnologia!\n Claro, � preciso esfor�o e dinheiro pra fazer uma destas, mas do que me interessa?");
	next;
	mes("[Dorf]\n Eu n�o tenho problemas, desde que essa coisa louca mantenha o trabalho do modo que eu quero!");
	close;
}

// ------------------------------------------------------------------
ein_in01,68,209,5	script	Khashurantze#ein	4_M_EIN_SOLDIER,{
	mes("[Khashurantze]\n Me desculpe, mas voc� precisa de uma autoriza��o especial para entrar.\n Terei que pedir que saia agora.");
	close2;
	warp("einbroch", 179, 63);
	end;
}

// ------------------------------------------------------------------
ein_in01,85,261,3	script	Zherin#ein	4_M_REPAIR,{
	mes("[Zherin]\n Eu estou encarregado desta grande folhanlha que cont�m toda essa ebuli��o de magma.");
	next;
	mes("[Zherin]\n Mesmo que n�o precise de muito trabalho, esse trabalho � muito cansativo.\n Eu tenho que prestar muita aten��o o tempo todo.\n � muito estressante.");
	next;
	mes("[Zherin]\n Ainda assim, estou orgulhoso do meu trabalho, uma vez que tenho responsabilidade de garantir a seguran�a dos trabalhadores.\n Contudo, n�o chegue muito perto da fornalha.\n Caso contr�rio poder� ser queimado por acidente!");
	close;
}

// ------------------------------------------------------------------
ein_in01,43,252,3	script	Canphotii#ein	4_M_EIN_SOLDIER,{
	mes("[Canphotii]\n R�pido, r�pido!\n Entre logo no ritmo!\n Qualquer que trabalhar lento demais ser� punido!");
	next;
	mes("[Canphotii]\n N�o consegue entender isso?!\n Agora volte para sua esta��o de trabalho!\n Espere, voc� n�o trabalha aqui n�o �?\n Se n�o, pare de zanzar por ae!");
	next;
	mes("[Canphotii]\n Voc� n�o poderia ter entrado aqui!\n Eu n�o acredito que deixaram voc� entrar!\n Isso requer uma medida disciplinar extrema!");
	close;
}

// ------------------------------------------------------------------
ein_in01,31,217,3	script	Cendadt#ein	4_M_REPAIR,{
	mes("[Cendadt]\n Esta f�brica tem um monte de coisas que precisam de conserto!\n � incr�vel que ela continue funcionando!");
	next;
	mes("[Cendadt]\n Sorte para n�s, eu ouvi dizer alguns aventureiros altru�stas tem doado materiais para ajudar a manter esta f�brica de cair aos peda�os... ou pior.\n Mas � apenas um boato.");
	next;
	mes("[Cendadt]\n ^666666*Sigh*^000000\n Mesmo que isso for verdade, n�o h� nada que se possa fazer.\n Ningu�m tem coragem de desafiar o sistema, voc� sabe?");
	next;
	mes("[Cendadt]\n Eu...\n � melhor eu voltar ao trabalho antes que eu entre numa fria...");
	close;
}
